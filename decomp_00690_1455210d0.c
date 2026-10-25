// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1455210d0 FUN_1455210d0 body=10 status=ok
// SIG undefined FUN_1455210d0(void)

void FUN_1455210d0(undefined8 param_1)

{
  FUN_145521260(param_1,1);
  return;
}



// FUNCTION 1455210e0 FUN_1455210e0 body=95 status=ok
// SIG undefined FUN_1455210e0(void)

void FUN_1455210e0(longlong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar11 = (int)param_1[1] - 1;
  puVar1 = (uint *)(*param_1 + (longlong)(int)uVar11 * 0x10);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  while (uVar11 != 1) {
    lVar4 = *param_1;
    uVar10 = uVar11 >> 1;
    if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x10) <= uVar5) break;
    puVar2 = (undefined8 *)(lVar4 + (ulonglong)uVar10 * 0x10);
    uVar9 = puVar2[1];
    puVar3 = (undefined8 *)(lVar4 + (longlong)(int)uVar11 * 0x10);
    *puVar3 = *puVar2;
    puVar3[1] = uVar9;
    uVar11 = uVar10;
  }
  puVar1 = (uint *)(*param_1 + (longlong)(int)uVar11 * 0x10);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  return;
}



// FUNCTION 145521140 FUN_145521140 body=274 status=ok
// SIG undefined FUN_145521140(void)

void FUN_145521140(longlong *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar11 = (int)param_1[1] / 2;
  do {
    if ((int)uVar11 < 1) {
      return;
    }
    lVar12 = *param_1;
    uVar13 = (int)param_1[1] - 1;
    uVar15 = (int)param_1[1] - 2U >> 1;
    puVar1 = (uint *)(lVar12 + (ulonglong)uVar11 * 0x10);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    uVar8 = puVar1[2];
    uVar9 = puVar1[3];
    uVar14 = uVar11;
    uVar5 = uVar11;
    if (uVar11 <= uVar15) {
      do {
        lVar12 = *param_1;
        uVar4 = uVar5 * 2;
        uVar14 = uVar4 | 1;
        if (*(uint *)(lVar12 + (longlong)(int)uVar4 * 0x10) <
            *(uint *)(lVar12 + (longlong)(int)(uVar4 | 1) * 0x10)) {
          uVar14 = uVar4;
        }
        if (uVar6 <= *(uint *)(lVar12 + (longlong)(int)uVar14 * 0x10)) {
          puVar1 = (uint *)(lVar12 + (longlong)(int)uVar5 * 0x10);
          *puVar1 = uVar6;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          goto LAB_14552122e;
        }
        puVar2 = (undefined8 *)(lVar12 + (longlong)(int)uVar14 * 0x10);
        uVar10 = puVar2[1];
        puVar3 = (undefined8 *)(lVar12 + (longlong)(int)uVar5 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar10;
        uVar5 = uVar14;
      } while (uVar14 <= uVar15);
      lVar12 = *param_1;
    }
    if (uVar14 == ((uVar13 & 1) - 1 & uVar13 >> 1)) {
      uVar5 = uVar14 * 2;
      if (*(uint *)(lVar12 + (longlong)(int)uVar5 * 0x10) < uVar6) {
        puVar2 = (undefined8 *)(lVar12 + (longlong)(int)uVar5 * 0x10);
        uVar10 = puVar2[1];
        puVar3 = (undefined8 *)(lVar12 + (longlong)(int)uVar14 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar10;
        uVar14 = uVar5;
      }
    }
    puVar1 = (uint *)(*param_1 + (longlong)(int)uVar14 * 0x10);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
LAB_14552122e:
    uVar11 = uVar11 - 1;
  } while( true );
}



// FUNCTION 145521260 FUN_145521260 body=244 status=ok
// SIG undefined FUN_145521260(void)

void FUN_145521260(longlong *param_1,uint param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  
  uVar13 = (ulonglong)(int)param_2;
  lVar11 = *param_1;
  uVar12 = (int)param_1[1] - 1;
  puVar1 = (uint *)(lVar11 + uVar13 * 0x10);
  uVar6 = *puVar1;
  uVar7 = puVar1[1];
  uVar8 = puVar1[2];
  uVar9 = puVar1[3];
  uVar14 = (int)param_1[1] - 2U >> 1;
  if (param_2 <= uVar14) {
    do {
      lVar11 = *param_1;
      iVar4 = (int)uVar13;
      uVar5 = iVar4 * 2;
      param_2 = uVar5 | 1;
      if (*(uint *)(lVar11 + (longlong)(int)uVar5 * 0x10) <
          *(uint *)(lVar11 + (longlong)(int)(uVar5 | 1) * 0x10)) {
        param_2 = uVar5;
      }
      if (uVar6 <= *(uint *)(lVar11 + (longlong)(int)param_2 * 0x10)) {
        puVar1 = (uint *)(lVar11 + (longlong)iVar4 * 0x10);
        *puVar1 = uVar6;
        puVar1[1] = uVar7;
        puVar1[2] = uVar8;
        puVar1[3] = uVar9;
        return;
      }
      puVar2 = (undefined8 *)(lVar11 + (longlong)(int)param_2 * 0x10);
      uVar10 = puVar2[1];
      uVar13 = (ulonglong)param_2;
      puVar3 = (undefined8 *)(lVar11 + (longlong)iVar4 * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
    } while (param_2 <= uVar14);
    lVar11 = *param_1;
  }
  if (param_2 == ((uVar12 & 1) - 1 & uVar12 >> 1)) {
    uVar12 = param_2 * 2;
    if (*(uint *)(lVar11 + (longlong)(int)uVar12 * 0x10) < uVar6) {
      puVar2 = (undefined8 *)(lVar11 + (longlong)(int)uVar12 * 0x10);
      uVar10 = puVar2[1];
      puVar3 = (undefined8 *)(lVar11 + (longlong)(int)param_2 * 0x10);
      *puVar3 = *puVar2;
      puVar3[1] = uVar10;
      param_2 = uVar12;
    }
  }
  puVar1 = (uint *)(*param_1 + (longlong)(int)param_2 * 0x10);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1[2] = uVar8;
  puVar1[3] = uVar9;
  return;
}



// FUNCTION 145521360 FUN_145521360 body=134 status=ok
// SIG undefined FUN_145521360(void)

undefined8 FUN_145521360(longlong param_1,undefined2 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  iVar4 = *(int *)(param_1 + 0xb8) + 1;
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar4) {
    FUN_145521640(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar4;
  puVar3 = (uint *)((longlong)iVar2 * 0x10 + *plVar1);
  *puVar3 = param_3 * 4 | 1;
  *(undefined2 *)(puVar3 + 1) = param_2;
  *(undefined2 *)((longlong)puVar3 + 6) = 0xffff;
  FUN_1455210e0(plVar1);
  return 1;
}



// FUNCTION 1455213f0 FUN_1455213f0 body=142 status=ok
// SIG undefined FUN_1455213f0(void)

undefined8 FUN_1455213f0(longlong param_1,undefined2 param_2,undefined2 param_3,int param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xb8) + 1;
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar3) {
    FUN_145521640((longlong *)(param_1 + 0xb0),&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  iVar1 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar3;
  puVar2 = (uint *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0xb0));
  *puVar2 = param_4 * 4 | 1;
  *(undefined2 *)((longlong)puVar2 + 6) = param_3;
  *(undefined2 *)(puVar2 + 1) = param_2;
  return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
}



// FUNCTION 145521480 FUN_145521480 body=196 status=ok
// SIG undefined FUN_145521480(void)

undefined8 FUN_145521480(longlong param_1,ushort param_2,ushort param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  iVar3 = *(int *)(param_1 + 0xb8) + 1;
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar3) {
    FUN_145521640(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  iVar2 = *(int *)(param_1 + 0xb8);
  *(int *)(param_1 + 0xb8) = iVar3;
  piVar4 = (int *)((longlong)iVar2 * 0x10 + *plVar1);
  *piVar4 = param_4 * 4;
  *(ushort *)(piVar4 + 1) = param_2;
  *(undefined2 *)(piVar4 + 2) =
       *(undefined2 *)((ulonglong)param_2 * 0x20 + 10 + *(longlong *)(param_1 + 0x120));
  *(ushort *)((longlong)piVar4 + 6) = param_3;
  *(undefined2 *)((longlong)piVar4 + 10) =
       *(undefined2 *)((ulonglong)param_3 * 0x20 + 10 + *(longlong *)(param_1 + 0x120));
  FUN_1455210e0(plVar1);
  return 1;
}



// FUNCTION 145521550 FUN_145521550 body=236 status=ok
// SIG undefined FUN_145521550(void)

void FUN_145521550(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 145521640 FUN_145521640 body=243 status=ok
// SIG undefined FUN_145521640(void)

void FUN_145521640(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145521740 FUN_145521740 body=70 status=ok
// SIG undefined FUN_145521740(void)

void FUN_145521740(longlong param_1,ushort param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)(param_1 + 0x148);
  uVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x140) + (uVar4 & 0xffff) * 8);
      if (param_2 <= uVar1) {
        *(ushort *)(*(longlong *)(param_1 + 0x140) + (uVar4 & 0xffff) * 8) = uVar1 + 1;
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while ((int)uVar3 < iVar2);
  }
  return;
}



// FUNCTION 145521790 FUN_145521790 body=272 status=ok
// SIG undefined FUN_145521790(void)

ulonglong FUN_145521790(longlong param_1,int param_2,undefined2 param_3)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  short sVar5;
  
  iVar4 = *(int *)(param_1 + 0x158);
  if ((iVar4 == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x150) + -4 + (longlong)iVar4 * 4) != param_2)) {
    sVar5 = FUN_1453165a0();
  }
  else {
    sVar5 = (short)iVar4 + -1;
  }
  iVar4 = *(int *)(param_1 + 0x148) + 1;
  uVar1 = *(ushort *)(param_1 + 0x148);
  uVar3 = (ulonglong)uVar1;
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar4) {
    FUN_145522710(param_1 + 0x140,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  *(int *)(param_1 + 0x148) = iVar4;
  lVar2 = *(longlong *)(param_1 + 0x140);
  *(short *)(lVar2 + uVar3 * 8) = sVar5;
  *(undefined2 *)(lVar2 + 2 + uVar3 * 8) = 0xffff;
  *(uint *)(lVar2 + uVar3 * 8 + 4) = *(uint *)(lVar2 + 4 + uVar3 * 8) & 0xffff0003 | 3;
  iVar4 = *(int *)(param_1 + 0x138) + 1;
  uVar3 = (ulonglong)*(ushort *)(param_1 + 0x138);
  if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar4) {
    FUN_145522610(param_1 + 0x130,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  *(int *)(param_1 + 0x138) = iVar4;
  lVar2 = *(longlong *)(param_1 + 0x130);
  *(ushort *)(lVar2 + uVar3 * 8) = uVar1;
  *(ushort *)(lVar2 + 2 + uVar3 * 8) = uVar1;
  *(undefined2 *)(lVar2 + 4 + uVar3 * 8) = param_3;
  return uVar3;
}



// FUNCTION 1455218a0 FUN_1455218a0 body=458 status=ok
// SIG undefined FUN_1455218a0(void)

void FUN_1455218a0(longlong param_1,ushort param_2,int param_3)

{
  longlong *plVar1;
  ushort *puVar2;
  short *psVar3;
  undefined2 *puVar4;
  short *psVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  
  iVar13 = *(int *)(param_1 + 0x148) + 3;
  uVar6 = *(ushort *)(param_1 + 0x148);
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar13) {
    FUN_145522710(param_1 + 0x140,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  *(int *)(param_1 + 0x148) = iVar13;
  plVar1 = (longlong *)(param_1 + 0x130);
  uVar7 = *(ushort *)(param_1 + 0x138);
  uVar14 = uVar6 + 1;
  uVar15 = uVar6 + 2;
  iVar13 = *(int *)(param_1 + 0x138) + 1;
  if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar13) {
    FUN_145522610(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  *(int *)(param_1 + 0x138) = iVar13;
  iVar13 = *(int *)(param_1 + 0x158);
  puVar2 = (ushort *)(*plVar1 + (ulonglong)param_2 * 8);
  lVar9 = *(longlong *)(param_1 + 0x140);
  uVar8 = *puVar2;
  psVar3 = (short *)(lVar9 + (ulonglong)uVar6 * 8);
  puVar4 = (undefined2 *)(lVar9 + (ulonglong)(uVar14 & 0xffff) * 8);
  psVar5 = (short *)(lVar9 + (ulonglong)uVar15 * 8);
  if ((iVar13 == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x150) + -4 + (longlong)iVar13 * 4) != param_3)) {
    sVar12 = FUN_1453165a0(param_1,param_3);
  }
  else {
    sVar12 = (short)iVar13 + -1;
  }
  uVar11 = *(uint *)(psVar3 + 2) & 0xfffffffe | 2;
  psVar3[1] = uVar8;
  *psVar3 = sVar12;
  *(uint *)(psVar3 + 2) = ((uVar14 & 0xffff) << 2 ^ uVar11) & 0xfffc ^ uVar11;
  uVar11 = *(uint *)(puVar4 + 2) & 0xfffffffe | 2;
  *puVar4 = *(undefined2 *)(lVar9 + (ulonglong)uVar8 * 8);
  puVar4[1] = uVar15;
  *(uint *)(puVar4 + 2) = ((uint)uVar6 << 2 ^ uVar11) & 0xfffc ^ uVar11;
  uVar10 = (ulonglong)uVar7;
  *psVar5 = sVar12;
  *(uint *)(psVar5 + 2) = *(uint *)(psVar5 + 2) & 0xffff0003 | 3;
  psVar5[1] = -1;
  *puVar2 = uVar6;
  lVar9 = *plVar1;
  *(short *)(lVar9 + uVar10 * 8) = (short)uVar14;
  *(ushort *)(lVar9 + 2 + uVar10 * 8) = uVar15;
  *(ushort *)(lVar9 + uVar10 * 8 + 4) = puVar2[2];
  return;
}



// FUNCTION 145521a70 FUN_145521a70 body=483 status=ok
// SIG undefined FUN_145521a70(void)

void FUN_145521a70(longlong param_1,ushort param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  short *psVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  short *psVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  undefined2 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  short sVar14;
  int iVar15;
  ushort uVar16;
  uint uVar17;
  
  iVar15 = *(int *)(param_1 + 0x148) + 3;
  uVar7 = *(ushort *)(param_1 + 0x148);
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar15) {
    FUN_145522710(param_1 + 0x140,&PTR_vftable_14c6e47a0,(longlong)iVar15);
  }
  *(int *)(param_1 + 0x148) = iVar15;
  plVar1 = (longlong *)(param_1 + 0x130);
  uVar8 = *(ushort *)(param_1 + 0x138);
  uVar16 = uVar7 + 1;
  uVar17 = uVar7 + 2;
  iVar15 = *(int *)(param_1 + 0x138) + 1;
  if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar15) {
    FUN_145522610(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar15);
  }
  *(int *)(param_1 + 0x138) = iVar15;
  iVar15 = *(int *)(param_1 + 0x158);
  lVar2 = *plVar1 + (ulonglong)param_2 * 8;
  lVar11 = *(longlong *)(param_1 + 0x140);
  uVar9 = *(ushort *)(lVar2 + 2);
  psVar3 = (short *)(lVar11 + (ulonglong)uVar7 * 8);
  puVar4 = (undefined2 *)(lVar11 + (ulonglong)uVar9 * 8);
  puVar5 = (undefined2 *)(lVar11 + (ulonglong)uVar16 * 8);
  psVar6 = (short *)(lVar11 + (ulonglong)(uVar17 & 0xffff) * 8);
  if ((iVar15 == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x150) + -4 + (longlong)iVar15 * 4) != param_3)) {
    sVar14 = FUN_1453165a0(param_1,param_3);
  }
  else {
    sVar14 = (short)iVar15 + -1;
  }
  puVar4[1] = uVar7;
  uVar13 = *(uint *)(puVar4 + 2) & 0xfffffffe | 2;
  *(uint *)(puVar4 + 2) = ((uVar17 & 0xffff) << 2 ^ uVar13) & 0xfffc ^ uVar13;
  psVar3[1] = -1;
  *psVar3 = sVar14;
  *(uint *)(psVar3 + 2) = *(uint *)(psVar3 + 2) & 0xffff0003 | 3;
  uVar10 = *puVar4;
  puVar5[1] = 0xffff;
  *puVar5 = uVar10;
  *(uint *)(puVar5 + 2) = *(uint *)(puVar5 + 2) & 0xffff0003 | 3;
  uVar12 = (ulonglong)uVar8;
  *psVar6 = sVar14;
  psVar6[1] = uVar16;
  uVar13 = *(uint *)(psVar6 + 2) & 0xfffffffe | 2;
  *(uint *)(psVar6 + 2) = ((uint)uVar9 << 2 ^ uVar13) & 0xfffc ^ uVar13;
  *(ushort *)(lVar2 + 2) = uVar7;
  lVar11 = *plVar1;
  *(short *)(lVar11 + uVar12 * 8) = (short)uVar17;
  *(ushort *)(lVar11 + 2 + uVar12 * 8) = uVar16;
  *(undefined2 *)(lVar11 + uVar12 * 8 + 4) = *(undefined2 *)(lVar2 + 4);
  return;
}



// FUNCTION 145521c60 FUN_145521c60 body=791 status=ok
// SIG undefined FUN_145521c60(void)

undefined8
FUN_145521c60(longlong param_1,ushort param_2,int param_3,ushort *param_4,ushort *param_5)

{
  longlong *plVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  short *psVar4;
  undefined2 *puVar5;
  short *psVar6;
  undefined2 *puVar7;
  short *psVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  longlong lVar14;
  ushort uVar15;
  ushort uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  short sVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ushort uVar23;
  uint uVar24;
  
  iVar19 = *(int *)(param_1 + 0x148) + 5;
  uVar9 = *(ushort *)(param_1 + 0x148);
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar19) {
    FUN_145522710(param_1 + 0x140,&PTR_vftable_14c6e47a0,(longlong)iVar19);
  }
  *(int *)(param_1 + 0x148) = iVar19;
  uVar15 = uVar9 + 3;
  plVar1 = (longlong *)(param_1 + 0x130);
  iVar19 = *(int *)(param_1 + 0x138);
  uVar16 = uVar9 + 4;
  uVar23 = uVar9 + 1;
  uVar10 = *(ushort *)(param_1 + 0x138);
  uVar24 = uVar9 + 2;
  iVar18 = iVar19 + 1;
  if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar18) {
    FUN_145522610(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar18);
  }
  *(int *)(param_1 + 0x138) = iVar18;
  iVar19 = iVar19 + 2;
  uVar11 = *(ushort *)(param_1 + 0x138);
  if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar19) {
    FUN_145522610(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar19);
  }
  *(int *)(param_1 + 0x138) = iVar19;
  uVar12 = *(ushort *)(*plVar1 + 2 + (ulonglong)param_2 * 8);
  puVar2 = (ushort *)(*plVar1 + (ulonglong)param_2 * 8);
  lVar14 = *(longlong *)(param_1 + 0x140);
  uVar13 = *puVar2;
  iVar19 = *(int *)(param_1 + 0x158);
  puVar3 = (undefined2 *)(lVar14 + (ulonglong)uVar12 * 8);
  psVar4 = (short *)(lVar14 + (ulonglong)uVar9 * 8);
  puVar5 = (undefined2 *)(lVar14 + (ulonglong)uVar23 * 8);
  psVar6 = (short *)(lVar14 + (ulonglong)(uVar24 & 0xffff) * 8);
  puVar7 = (undefined2 *)(lVar14 + (ulonglong)uVar15 * 8);
  psVar8 = (short *)(lVar14 + (ulonglong)uVar16 * 8);
  if ((iVar19 == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x150) + -4 + (longlong)iVar19 * 4) != param_3)) {
    sVar20 = FUN_1453165a0(param_1,param_3);
  }
  else {
    sVar20 = (short)iVar19 + -1;
  }
  puVar3[1] = uVar9;
  uVar17 = *(uint *)(puVar3 + 2) & 0xfffffffe | 2;
  *(uint *)(puVar3 + 2) = ((uVar24 & 0xffff) << 2 ^ uVar17) & 0xfffc ^ uVar17;
  psVar4[1] = uVar13;
  *psVar4 = sVar20;
  uVar17 = *(uint *)(psVar4 + 2) & 0xfffffffe | 2;
  *(uint *)(psVar4 + 2) = ((uint)uVar15 << 2 ^ uVar17) & 0xfffc ^ uVar17;
  *puVar5 = *puVar3;
  puVar5[1] = 0xffff;
  *(uint *)(puVar5 + 2) = *(uint *)(puVar5 + 2) & 0xffff0003 | 3;
  *psVar6 = sVar20;
  uVar17 = *(uint *)(psVar6 + 2) & 0xfffffffe | 2;
  psVar6[1] = uVar23;
  *(uint *)(psVar6 + 2) = ((uint)uVar12 << 2 ^ uVar17) & 0xfffc ^ uVar17;
  *puVar7 = *(undefined2 *)(lVar14 + (ulonglong)uVar13 * 8);
  uVar17 = *(uint *)(puVar7 + 2) & 0xfffffffe | 2;
  puVar7[1] = uVar16;
  *(uint *)(puVar7 + 2) = ((uint)uVar9 << 2 ^ uVar17) & 0xfffc ^ uVar17;
  *psVar8 = sVar20;
  uVar21 = (ulonglong)uVar11;
  *(uint *)(psVar8 + 2) = *(uint *)(psVar8 + 2) & 0xffff0003 | 3;
  psVar8[1] = -1;
  uVar22 = (ulonglong)uVar10;
  puVar2[1] = uVar9;
  *puVar2 = uVar9;
  lVar14 = *plVar1;
  *(short *)(lVar14 + uVar22 * 8) = (short)uVar24;
  *(ushort *)(lVar14 + 2 + uVar22 * 8) = uVar23;
  *(ushort *)(lVar14 + uVar22 * 8 + 4) = puVar2[2];
  lVar14 = *plVar1;
  *(ushort *)(lVar14 + uVar21 * 8) = uVar15;
  *(ushort *)(lVar14 + 2 + uVar21 * 8) = uVar16;
  *(ushort *)(lVar14 + uVar21 * 8 + 4) = puVar2[2];
  *param_4 = uVar10;
  *param_5 = uVar11;
  return 1;
}



// FUNCTION 145521f80 FUN_145521f80 body=392 status=ok
// SIG undefined FUN_145521f80(void)

undefined8
FUN_145521f80(longlong param_1,ushort *param_2,int param_3,undefined4 param_4,undefined4 param_5,
             ushort *param_6,ushort *param_7)

{
  longlong *plVar1;
  short *psVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  longlong lVar6;
  int iVar7;
  short sVar8;
  
  iVar7 = *(int *)(param_1 + 0x148) + 1;
  plVar1 = (longlong *)(param_1 + 0x140);
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar7) {
    FUN_1453167c0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
  }
  iVar7 = *(int *)(param_1 + 0x158);
  if ((iVar7 == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x150) + -4 + (longlong)iVar7 * 4) != param_3)) {
    sVar8 = FUN_1453165a0(param_1,param_3);
  }
  else {
    sVar8 = (short)iVar7 + -1;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  psVar2 = (short *)(*plVar1 + (ulonglong)uVar4 * 8);
  if (*(short *)(*plVar1 + (ulonglong)uVar3 * 8) == sVar8) {
    psVar2[1] = uVar3;
    *(undefined4 *)(psVar2 + 2) = param_4;
    param_2[1] = uVar3;
    *param_6 = uVar4;
    *param_7 = 0xffff;
  }
  else if (*psVar2 == sVar8) {
    *(undefined4 *)(psVar2 + 2) = param_5;
    psVar2[1] = uVar3;
    *param_2 = uVar4;
    *param_6 = 0xffff;
    *param_7 = uVar4;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x148) + 1;
    uVar5 = *(ushort *)(param_1 + 0x148);
    if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar7) {
      FUN_145522710(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    *(int *)(param_1 + 0x148) = iVar7;
    lVar6 = *plVar1;
    psVar2[1] = uVar5;
    *(undefined4 *)(psVar2 + 2) = param_4;
    *(short *)(lVar6 + (ulonglong)uVar5 * 8) = sVar8;
    lVar6 = lVar6 + (ulonglong)uVar5 * 8;
    *(ushort *)(lVar6 + 2) = uVar3;
    *(undefined4 *)(lVar6 + 4) = param_5;
    *param_2 = uVar5;
    param_2[1] = uVar5;
    *param_6 = uVar4;
    *param_7 = uVar5;
  }
  return 1;
}



// FUNCTION 145522110 FUN_145522110 body=225 status=ok
// SIG undefined FUN_145522110(void)

undefined8
FUN_145522110(longlong param_1,ushort *param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  short sVar7;
  
  iVar6 = *(int *)(param_1 + 0x158);
  uVar2 = *param_2;
  if ((iVar6 == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x150) + -4 + (longlong)iVar6 * 4) != param_3)) {
    sVar7 = FUN_1453165a0(param_1,param_3);
  }
  else {
    sVar7 = (short)iVar6 + -1;
  }
  plVar1 = (longlong *)(param_1 + 0x140);
  if (*(short *)(*plVar1 + (ulonglong)uVar2 * 8) == sVar7) {
    *param_5 = 0xffff;
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x148);
    uVar5 = (ulonglong)uVar3;
    iVar6 = *(int *)(param_1 + 0x148) + 1;
    if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar6) {
      FUN_145522710(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    *(int *)(param_1 + 0x148) = iVar6;
    lVar4 = *plVar1;
    *(short *)(lVar4 + uVar5 * 8) = sVar7;
    *(ushort *)(lVar4 + 2 + uVar5 * 8) = uVar2;
    *(undefined4 *)(lVar4 + 4 + uVar5 * 8) = param_4;
    *param_2 = uVar3;
    *param_5 = uVar3;
  }
  return 1;
}



// FUNCTION 145522200 FUN_145522200 body=291 status=ok
// SIG undefined FUN_145522200(void)

undefined8
FUN_145522200(longlong param_1,longlong param_2,int param_3,undefined4 param_4,ushort *param_5)

{
  longlong *plVar1;
  short *psVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  short sVar7;
  
  iVar6 = *(int *)(param_1 + 0x148) + 1;
  plVar1 = (longlong *)(param_1 + 0x140);
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar6) {
    FUN_1453167c0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
  }
  uVar3 = *(ushort *)(param_2 + 2);
  iVar6 = *(int *)(param_1 + 0x158);
  psVar2 = (short *)(*plVar1 + (ulonglong)uVar3 * 8);
  if ((iVar6 == 0) ||
     (*(int *)(*(longlong *)(param_1 + 0x150) + -4 + (longlong)iVar6 * 4) != param_3)) {
    sVar7 = FUN_1453165a0(param_1,param_3);
  }
  else {
    sVar7 = (short)iVar6 + -1;
  }
  if (*psVar2 == sVar7) {
    *param_5 = 0xffff;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x148) + 1;
    uVar4 = *(ushort *)(param_1 + 0x148);
    if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar6) {
      FUN_145522710(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    *(int *)(param_1 + 0x148) = iVar6;
    lVar5 = *plVar1;
    psVar2[1] = uVar4;
    *(undefined4 *)(psVar2 + 2) = param_4;
    *(short *)(lVar5 + (ulonglong)uVar4 * 8) = sVar7;
    lVar5 = lVar5 + (ulonglong)uVar4 * 8;
    *(undefined2 *)(lVar5 + 2) = 0xffff;
    *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) & 0xffff0003 | 3;
    *(ushort *)(param_2 + 2) = uVar4;
    *param_5 = uVar3;
  }
  return 1;
}



// FUNCTION 145522330 FUN_145522330 body=363 status=ok
// SIG undefined FUN_145522330(void)

undefined8 FUN_145522330(longlong param_1,ushort *param_2)

{
  undefined2 *puVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  ushort *puVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ushort uVar14;
  
  uVar6 = *(ushort *)(param_1 + 0x148);
  iVar13 = *(int *)(param_1 + 0x148) + 2;
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar13) {
    FUN_145522710((longlong *)(param_1 + 0x140),&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  *(int *)(param_1 + 0x148) = iVar13;
  uVar14 = uVar6 + 1;
  iVar13 = *(int *)(param_1 + 0x138) + 1;
  uVar7 = *(ushort *)(param_1 + 0x138);
  if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar13) {
    FUN_145522610(param_1 + 0x130,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  *(int *)(param_1 + 0x138) = iVar13;
  lVar10 = *(longlong *)(param_1 + 0x140);
  lVar11 = *(longlong *)(param_1 + 0x130);
  puVar1 = (undefined2 *)(lVar10 + (ulonglong)uVar6 * 8);
  uVar8 = *(ushort *)(lVar11 + 2 + (ulonglong)*param_2 * 8);
  puVar2 = (ushort *)(lVar11 + (ulonglong)*param_2 * 8);
  uVar9 = *puVar2;
  puVar3 = (undefined2 *)(lVar10 + (ulonglong)uVar8 * 8);
  puVar3[1] = uVar9;
  puVar4 = (ushort *)(lVar11 + (ulonglong)uVar7 * 8);
  puVar5 = (undefined2 *)(lVar10 + (ulonglong)uVar14 * 8);
  uVar12 = *(uint *)(puVar3 + 2) & 0xfffffffe | 2;
  *(uint *)(puVar3 + 2) = ((uint)uVar6 << 2 ^ uVar12) & 0xfffc ^ uVar12;
  *puVar1 = *(undefined2 *)(lVar10 + (ulonglong)uVar9 * 8);
  puVar1[1] = uVar14;
  uVar12 = *(uint *)(puVar1 + 2) & 0xfffffffe | 2;
  *(uint *)(puVar1 + 2) = ((uint)uVar8 << 2 ^ uVar12) & 0xfffc ^ uVar12;
  *puVar5 = *puVar3;
  puVar5[1] = 0xffff;
  *(uint *)(puVar5 + 2) = *(uint *)(puVar5 + 2) & 0xffff0003 | 3;
  puVar2[1] = *puVar2;
  puVar4[1] = uVar14;
  *puVar4 = uVar6;
  uVar6 = puVar2[2];
  puVar4[2] = uVar6;
  *param_2 = uVar7;
  return CONCAT71((uint7)(byte)(uVar6 >> 8),1);
}



// FUNCTION 1455224a0 FUN_1455224a0 body=362 status=ok
// SIG undefined FUN_1455224a0(void)

undefined8 FUN_1455224a0(longlong param_1,ushort *param_2)

{
  undefined2 *puVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  
  uVar6 = *(ushort *)(param_1 + 0x148);
  iVar13 = *(int *)(param_1 + 0x148) + 2;
  if ((int)(*(uint *)(param_1 + 0x14c) & 0x7fffffff) < iVar13) {
    FUN_145522710((longlong *)(param_1 + 0x140),&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  *(int *)(param_1 + 0x148) = iVar13;
  uVar14 = uVar6 + 1;
  iVar13 = *(int *)(param_1 + 0x138) + 1;
  uVar7 = *(ushort *)(param_1 + 0x138);
  if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar13) {
    FUN_145522610(param_1 + 0x130,&PTR_vftable_14c6e47a0,(longlong)iVar13);
  }
  *(int *)(param_1 + 0x138) = iVar13;
  lVar10 = *(longlong *)(param_1 + 0x140);
  lVar11 = *(longlong *)(param_1 + 0x130);
  puVar1 = (undefined2 *)(lVar10 + (ulonglong)uVar6 * 8);
  uVar8 = *(ushort *)(lVar11 + 2 + (ulonglong)*param_2 * 8);
  puVar2 = (ushort *)(lVar11 + (ulonglong)*param_2 * 8);
  uVar9 = *puVar2;
  puVar3 = (undefined2 *)(lVar10 + (ulonglong)uVar8 * 8);
  puVar3[1] = uVar9;
  puVar4 = (undefined2 *)(lVar11 + (ulonglong)uVar7 * 8);
  puVar5 = (undefined2 *)(lVar10 + (ulonglong)(uVar14 & 0xffff) * 8);
  uVar12 = *(uint *)(puVar3 + 2) & 0xfffffffe | 2;
  *(uint *)(puVar3 + 2) = ((uVar14 & 0xffff) << 2 ^ uVar12) & 0xfffc ^ uVar12;
  *puVar5 = *(undefined2 *)(lVar10 + (ulonglong)uVar9 * 8);
  puVar5[1] = uVar6;
  uVar12 = *(uint *)(puVar5 + 2) & 0xfffffffe | 2;
  *(uint *)(puVar5 + 2) = ((uint)uVar8 << 2 ^ uVar12) & 0xfffc ^ uVar12;
  *puVar1 = *puVar3;
  puVar1[1] = 0xffff;
  *(uint *)(puVar1 + 2) = *(uint *)(puVar1 + 2) & 0xffff0003 | 3;
  puVar2[1] = *puVar2;
  *puVar4 = (short)uVar14;
  puVar4[1] = uVar6;
  uVar6 = puVar2[2];
  puVar4[2] = uVar6;
  *param_2 = uVar7;
  return CONCAT71((uint7)(byte)(uVar6 >> 8),1);
}



// FUNCTION 145522610 FUN_145522610 body=247 status=ok
// SIG undefined FUN_145522610(void)

void FUN_145522610(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145522710 FUN_145522710 body=247 status=ok
// SIG undefined FUN_145522710(void)

void FUN_145522710(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145522810 FUN_145522810 body=144 status=ok
// SIG undefined FUN_145522810(void)

void FUN_145522810(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = -(((int)~*(uint *)(param_1 + 2) >> 5) * param_2);
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar4) {
    FUN_140163394(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < iVar4) {
    *(int *)(param_1 + 1) = iVar4;
    if (0 < iVar4 - iVar1) {
      uVar2 = (ulonglong)(uint)(iVar4 - iVar1);
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar1 * 4);
      do {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
        }
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 != 0);
      return;
    }
  }
  else if (iVar4 < iVar1) {
    *(int *)(param_1 + 1) = iVar4;
  }
  return;
}



// FUNCTION 1455228a0 FUN_1455228a0 body=144 status=ok
// SIG undefined FUN_1455228a0(void)

void FUN_1455228a0(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = -(((int)~*(uint *)(param_1 + 2) >> 5) * param_2);
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar4) {
    FUN_140163394(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  iVar1 = (int)param_1[1];
  if (iVar1 < iVar4) {
    *(int *)(param_1 + 1) = iVar4;
    if (0 < iVar4 - iVar1) {
      uVar2 = (ulonglong)(uint)(iVar4 - iVar1);
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar1 * 4);
      do {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
        }
        uVar2 = uVar2 - 1;
        puVar3 = puVar3 + 1;
      } while (uVar2 != 0);
      return;
    }
  }
  else if (iVar4 < iVar1) {
    *(int *)(param_1 + 1) = iVar4;
  }
  return;
}



// FUNCTION 145522930 FUN_145522930 body=1262 status=ok
// SIG undefined FUN_145522930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145522930(float *param_1,undefined8 param_2,longlong *param_3,undefined1 (*param_4) [16])

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float local_res8 [8];
  undefined1 local_a8 [10] [16];
  
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  if (DAT_14c7ff248 == '\0') {
    auVar15 = *(undefined1 (*) [16])(param_1 + 4);
    fVar23 = param_1[8];
    fVar27 = param_1[9];
    fVar29 = param_1[10];
    fVar17 = param_1[0xb];
  }
  else {
    lVar10 = (longlong)(int)param_3[1];
    auVar15 = ZEXT816(0);
    pfVar9 = (float *)*param_3;
    auVar34 = ZEXT816(0);
    fVar39 = 0.0;
    fVar36 = 0.0;
    fVar37 = 0.0;
    fVar38 = 0.0;
    pfVar1 = pfVar9 + lVar10 * 4 + -4;
    fVar17 = *pfVar1 * fVar3;
    fVar19 = pfVar1[1] * fVar4;
    fVar21 = pfVar1[2] * fVar5;
    fVar23 = *pfVar1 - (fVar19 + fVar17 + fVar21) * fVar3;
    fVar27 = pfVar1[1] - (fVar19 + fVar17 + fVar21) * fVar4;
    fVar29 = pfVar1[2] - (fVar19 + fVar17 + fVar21) * fVar5;
    fVar17 = pfVar1[3] - (fVar19 + fVar17 + fVar21) * fVar6;
    if (0 < lVar10) {
      do {
        fVar19 = *pfVar9;
        pfVar1 = pfVar9 + 1;
        pfVar7 = pfVar9 + 2;
        pfVar8 = pfVar9 + 3;
        fVar21 = fVar3 * fVar19;
        fVar20 = fVar4 * *pfVar1;
        fVar22 = fVar5 * *pfVar7;
        pfVar9 = pfVar9 + 4;
        fVar19 = fVar19 - (fVar20 + fVar21 + fVar22) * fVar3;
        fVar31 = *pfVar1 - (fVar20 + fVar21 + fVar22) * fVar4;
        fVar32 = *pfVar7 - (fVar20 + fVar21 + fVar22) * fVar5;
        fVar33 = *pfVar8 - (fVar20 + fVar21 + fVar22) * fVar6;
        fVar23 = fVar19 - fVar23;
        fVar27 = fVar31 - fVar27;
        fVar29 = fVar32 - fVar29;
        fVar21 = fVar23 * fVar23;
        fVar20 = fVar27 * fVar27;
        fVar22 = fVar29 * fVar29;
        fVar24 = fVar20 + fVar21 + fVar22;
        fVar28 = fVar20 + fVar21 + fVar22;
        fVar30 = fVar20 + fVar21 + fVar22;
        fVar22 = fVar20 + fVar21 + fVar22;
        uVar11 = -(uint)(fVar39 < fVar24);
        uVar12 = -(uint)(fVar36 < fVar28);
        uVar13 = -(uint)(fVar37 < fVar30);
        uVar14 = -(uint)(fVar38 < fVar22);
        auVar26._4_4_ = ~uVar12 & auVar34._4_4_;
        auVar26._0_4_ = ~uVar11 & auVar34._0_4_;
        auVar26._8_4_ = ~uVar13 & auVar34._8_4_;
        auVar26._12_4_ = ~uVar14 & auVar34._12_4_;
        fVar39 = (float)(~uVar11 & (uint)fVar39 | uVar11 & (uint)fVar24);
        fVar36 = (float)(~uVar12 & (uint)fVar36 | uVar12 & (uint)fVar28);
        fVar37 = (float)(~uVar13 & (uint)fVar37 | uVar13 & (uint)fVar30);
        fVar38 = (float)(~uVar14 & (uint)fVar38 | uVar14 & (uint)fVar22);
        auVar34._4_4_ = uVar12 & (uint)fVar27;
        auVar34._0_4_ = uVar11 & (uint)fVar23;
        auVar34._8_4_ = uVar13 & (uint)fVar29;
        auVar34._12_4_ = uVar14 & (uint)(fVar33 - fVar17);
        auVar34 = auVar26 | auVar34;
        lVar10 = lVar10 + -1;
        fVar23 = fVar19;
        fVar27 = fVar31;
        fVar29 = fVar32;
        fVar17 = fVar33;
      } while (lVar10 != 0);
    }
    fVar23 = auVar34._0_4_ * auVar34._0_4_;
    fVar27 = auVar34._4_4_ * auVar34._4_4_;
    fVar29 = auVar34._8_4_ * auVar34._8_4_;
    auVar16._4_4_ = fVar23;
    auVar16._0_4_ = fVar23;
    auVar16._8_4_ = fVar23;
    auVar16._12_4_ = fVar23;
    fVar17 = fVar27 + fVar23 + fVar29;
    if (fVar17 != 0.0) {
      auVar15._4_4_ = fVar27 + fVar23 + fVar29;
      auVar15._0_4_ = fVar17;
      auVar15._8_4_ = fVar27 + fVar23 + fVar29;
      auVar15._12_4_ = fVar27 + fVar23 + fVar29;
      auVar15 = sqrtps(auVar16,auVar15);
      auVar15 = divps(auVar34,auVar15);
    }
    fVar29 = auVar15._4_4_ * fVar3 - fVar4 * auVar15._0_4_;
    fVar23 = auVar15._8_4_ * fVar4 - fVar5 * auVar15._4_4_;
    fVar27 = auVar15._0_4_ * fVar5 - fVar3 * auVar15._8_4_;
    fVar17 = auVar15._12_4_ * fVar6 - fVar6 * auVar15._12_4_;
  }
  fVar36 = auVar15._0_4_;
  fVar37 = auVar15._4_4_;
  fVar38 = auVar15._8_4_;
  pfVar1 = (float *)*param_3;
  fVar19 = *pfVar1;
  fVar21 = pfVar1[1];
  fVar39 = pfVar1[2];
  auVar35._0_4_ = fVar21 * fVar37 + fVar19 * fVar36 + fVar39 * fVar38;
  auVar35._4_4_ = fVar21 * -fVar37 + fVar19 * -fVar36 + fVar39 * -fVar38;
  auVar35._8_4_ = fVar21 * fVar27 + fVar19 * fVar23 + fVar39 * fVar29;
  auVar35._12_4_ = fVar21 * -fVar27 + fVar19 * -fVar23 + fVar39 * -fVar29;
  if (1 < (longlong)(int)param_3[1]) {
    lVar10 = (longlong)(int)param_3[1] + -1;
    do {
      fVar19 = pfVar1[4];
      fVar21 = pfVar1[5];
      fVar39 = pfVar1[6];
      auVar2._4_4_ = fVar21 * -fVar37 + fVar19 * -fVar36 + fVar39 * -fVar38;
      auVar2._0_4_ = fVar21 * fVar37 + fVar19 * fVar36 + fVar39 * fVar38;
      auVar2._8_4_ = fVar21 * fVar27 + fVar19 * fVar23 + fVar39 * fVar29;
      auVar2._12_4_ = fVar21 * -fVar27 + fVar19 * -fVar23 + fVar39 * -fVar29;
      auVar35 = minps(auVar35,auVar2);
      lVar10 = lVar10 + -1;
      pfVar1 = pfVar1 + 4;
    } while (lVar10 != 0);
  }
  fVar19 = (auVar35._0_4_ * _DAT_14c6daf00 - _DAT_14c6dad90) / 16.0;
  local_res8[0] = (auVar35._8_4_ * fRam000000014c6daf08 - _DAT_14c6dad90) / 16.0;
  fVar21 = ((fVar19 - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
  uVar11 = -(uint)(fVar19 == -0.0 || 8388608.0 < ABS(fVar19));
  fVar39 = (float)(int)(float)(~uVar11 & (uint)(fVar21 - (float)(-(uint)(fVar19 < fVar21) &
                                                                _DAT_14c6daca0)) |
                              uVar11 & (uint)fVar19) * 16.0;
  fVar21 = ((local_res8[0] - 8388608.0) + 8388608.0 + 8388608.0) - 8388608.0;
  uVar11 = -(uint)(local_res8[0] == -0.0 || 8388608.0 < ABS(local_res8[0]));
  fVar19 = (auVar35._4_4_ * fRam000000014c6daf04 + _DAT_14c6dad90) - fVar39;
  fVar21 = (float)(int)(float)(~uVar11 & (uint)(fVar21 - (float)(-(uint)(local_res8[0] < fVar21) &
                                                                _DAT_14c6daca0)) |
                              uVar11 & (uint)local_res8[0]) * 16.0;
  if ((int)fVar19 < 0) {
    fVar19 = (float)((uint)fVar19 & 0xff800000);
  }
  else {
    fVar19 = (float)(((uint)fVar19 & 0x7f800000) + 0x800000);
  }
  fVar20 = (auVar35._12_4_ * fRam000000014c6daf0c + _DAT_14c6dad90) - fVar21;
  if ((int)fVar20 < 0) {
    fVar20 = (float)((uint)fVar20 & 0xff800000);
  }
  else {
    fVar20 = (float)(((uint)fVar20 & 0x7f800000) + 0x800000);
  }
  local_a8[0]._0_12_ = ZEXT812(0);
  local_a8[0]._12_4_ = 0;
  auVar34 = *param_4;
  auVar26 = auVar34;
  if (auVar34._0_4_ <= 0.0) {
    local_res8[0] = 6.103888e-05;
    fVar19 = ((fVar19 + fVar39) - fVar39) * 6.103888e-05;
    auVar18._0_4_ = ((fVar20 + fVar21) - fVar21) * 6.103888e-05;
    auVar25._4_4_ = fVar19;
    auVar25._0_4_ = fVar19;
    auVar25._8_4_ = fVar19;
    auVar25._12_4_ = fVar19;
    auVar26 = maxps(auVar25,_DAT_14c6daea0);
    auVar18._4_4_ = auVar18._0_4_;
    auVar18._8_4_ = auVar18._0_4_;
    auVar18._12_4_ = auVar18._0_4_;
    auVar34 = maxps(auVar18,_DAT_14c6daea0);
    auVar16 = maxps(auVar26,auVar34);
    *param_4 = auVar16;
  }
  pfVar1 = param_1 + 0x1c;
  param_1[0x28] = fVar39 * fVar36 + fVar21 * fVar23;
  param_1[0x29] = fVar39 * fVar37 + fVar21 * fVar27;
  param_1[0x2a] = fVar39 * fVar38 + fVar21 * fVar29;
  param_1[0x2b] = fVar39 * auVar15._12_4_ + fVar21 * fVar17;
  param_1[0x24] = fVar3;
  param_1[0x25] = fVar4;
  param_1[0x26] = fVar5;
  param_1[0x27] = fVar6;
  fVar36 = fVar36 * auVar26._0_4_;
  fVar37 = fVar37 * auVar26._4_4_;
  fVar38 = fVar38 * auVar26._8_4_;
  param_1[0x20] = auVar34._0_4_ * fVar23;
  param_1[0x21] = auVar34._4_4_ * fVar27;
  param_1[0x22] = auVar34._8_4_ * fVar29;
  param_1[0x23] = auVar34._12_4_ * fVar17;
  *pfVar1 = fVar36;
  param_1[0x1d] = fVar37;
  param_1[0x1e] = fVar38;
  param_1[0x1f] = auVar15._12_4_ * auVar26._12_4_;
  *pfVar1 = fVar36;
  param_1[0x1d] = fVar37;
  param_1[0x1e] = fVar38;
  param_1[0x1f] = 0.0;
  param_1[0x20] = param_1[0x20];
  param_1[0x21] = param_1[0x21];
  param_1[0x22] = param_1[0x22];
  param_1[0x23] = 0.0;
  param_1[0x24] = param_1[0x24];
  param_1[0x25] = param_1[0x25];
  param_1[0x26] = param_1[0x26];
  param_1[0x27] = 0.0;
  fVar3 = fRam000000014c6dacac;
  param_1[0x28] = param_1[0x28];
  param_1[0x29] = param_1[0x29];
  param_1[0x2a] = param_1[0x2a];
  param_1[0x2b] = fVar3;
  FUN_145304570(param_1 + 0xc,local_res8,pfVar1,local_a8);
  return;
}



// FUNCTION 145522e20 FUN_145522e20 body=956 status=ok
// SIG undefined FUN_145522e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145522e20(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  uint uVar23;
  float fVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar24 [16];
  undefined1 local_res20 [8];
  undefined4 *local_b8;
  undefined4 *puStack_b0;
  undefined1 *local_a8;
  int local_a0;
  int local_9c;
  undefined1 local_98 [88];
  
  iVar18 = (int)param_3[1];
  lVar19 = (longlong)iVar18;
  if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar18) {
    FUN_145316a90(param_4,&PTR_vftable_14c6e47c0,lVar19);
  }
  if ((int)param_4[1] < iVar18) {
    *(int *)(param_4 + 1) = iVar18;
  }
  else if (iVar18 < (int)param_4[1]) {
    *(int *)(param_4 + 1) = iVar18;
  }
  uVar17 = 0;
  uVar13 = uVar17;
  uVar15 = uVar17;
  if (0 < iVar18) {
    do {
      uVar14 = uVar13 + 1;
      pfVar1 = (float *)(uVar15 + *param_3);
      fVar28 = *pfVar1;
      fVar4 = pfVar1[1];
      fVar5 = pfVar1[2];
      fVar22 = fVar28 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x60) +
               fVar4 * *(float *)(param_1 + 0x40) + fVar5 * *(float *)(param_1 + 0x50) +
               _DAT_14c6dad90;
      fVar25 = fVar28 * *(float *)(param_1 + 0x34) + *(float *)(param_1 + 100) +
               fVar4 * *(float *)(param_1 + 0x44) + fVar5 * *(float *)(param_1 + 0x54) +
               fRam000000014c6dad94;
      fVar27 = fVar28 * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x68) +
               fVar4 * *(float *)(param_1 + 0x48) + fVar5 * *(float *)(param_1 + 0x58) +
               fRam000000014c6dad98;
      fVar28 = fVar28 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x6c) +
               fVar4 * *(float *)(param_1 + 0x4c) + fVar5 * *(float *)(param_1 + 0x5c) +
               fRam000000014c6dad9c;
      auVar24._0_4_ = fVar22 - (float)(-(uint)(2.1474836e+09 <= fVar22) & 0x4f000000);
      auVar24._4_4_ = fVar25 - (float)(-(uint)(2.1474836e+09 <= fVar25) & 0x4f000000);
      auVar24._8_4_ = fVar27 - (float)(-(uint)(2.1474836e+09 <= fVar27) & 0x4f000000);
      auVar24._12_4_ = fVar28 - (float)(-(uint)(2.1474836e+09 <= fVar28) & 0x4f000000);
      auVar24 = maxps(auVar24,ZEXT816(0));
      uVar23 = (int)auVar24._0_4_ + (uint)(2.1474836e+09 <= fVar22) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar22);
      uVar26 = (int)auVar24._4_4_ + (uint)(2.1474836e+09 <= fVar25) * -0x80000000 |
               -(uint)(4.2949673e+09 <= fVar25);
      uVar20 = -(uint)(0x3fff < (int)uVar23);
      uVar21 = -(uint)(0x3fff < (int)uVar26);
      *(uint *)(*param_4 + uVar13 * 4) =
           (uVar20 & 0x3fff | ~uVar20 & uVar23) << 0x10 | uVar21 & 0x3fff | ~uVar21 & uVar26;
      uVar13 = uVar14;
      uVar15 = uVar15 + 0x10;
    } while ((longlong)uVar14 < lVar19);
  }
  cVar7 = FUN_145523d00(param_4);
  if (cVar7 == '\0') {
    local_b8 = (undefined4 *)*param_4;
    puStack_b0 = local_b8 + (int)param_4[1];
    FUN_1455242a0(&local_b8);
  }
  local_9c = -0x7fffffe0;
  local_a8 = local_98;
  local_a0 = 0;
  iVar9 = 0;
  if (0x20 < iVar18) {
    FUN_144c44a60(&local_a8,&PTR_vftable_14c6e47a0,lVar19);
    iVar9 = local_a0;
  }
  iVar18 = (int)param_4[1];
  local_a0 = iVar9 + 1;
  if ((undefined2 *)(local_a8 + (longlong)iVar9 * 2) != (undefined2 *)0x0) {
    *(undefined2 *)(local_a8 + (longlong)iVar9 * 2) = 0;
  }
  iVar11 = 1;
  iVar12 = 1;
  iVar9 = *(int *)*param_4;
  if (1 < iVar18) {
    lVar19 = 4;
    lVar16 = 4;
    do {
      iVar3 = *(int *)(*param_4 + lVar16);
      if (iVar3 != iVar9) {
        iVar9 = local_a0 + 1;
        if ((local_a0 < iVar9) || (iVar9 < local_a0)) {
          local_a0 = iVar9;
        }
        *(int *)(*param_4 + lVar19) = iVar3;
        iVar11 = iVar11 + 1;
        lVar19 = lVar19 + 4;
        iVar9 = iVar3;
      }
      lVar16 = lVar16 + 4;
      *(short *)(local_a8 + (longlong)(local_a0 + -1) * 2) = (short)iVar12;
      iVar12 = iVar12 + 1;
    } while (iVar12 < iVar18);
    if ((1 < iVar11) && (*(int *)*param_4 == ((int *)*param_4)[iVar11 + -1])) {
      local_a0 = local_a0 + -1;
      iVar11 = iVar11 + -1;
    }
  }
  if (((int)param_4[1] < iVar11) || (iVar11 < (int)param_4[1])) {
    *(int *)(param_4 + 1) = iVar11;
  }
  uVar13 = uVar17;
  uVar15 = uVar17;
  if (0 < local_a0) {
    do {
      puVar10 = (undefined8 *)((ulonglong)*(ushort *)(local_a8 + uVar13) * 0x10 + *param_3);
      local_b8 = (undefined4 *)(*param_4 + uVar17);
      FUN_145524db0(param_2,local_res20,local_b8);
      if (local_res20._0_4_ == (int)param_2[1]) {
        iVar18 = (int)param_2[1] + 1;
        if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar18) {
          FUN_145524fc0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar18);
        }
        puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x20 + *param_2);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *local_b8;
          uVar6 = puVar10[1];
          *(undefined8 *)(puVar8 + 4) = *puVar10;
          *(undefined8 *)(puVar8 + 6) = uVar6;
        }
        *(int *)(param_2 + 1) = iVar18;
      }
      else {
        uVar6 = puVar10[1];
        puVar2 = (undefined8 *)((longlong)local_res20._0_4_ * 0x20 + 0x10 + *param_2);
        *puVar2 = *puVar10;
        puVar2[1] = uVar6;
      }
      uVar20 = (int)uVar15 + 1;
      uVar17 = uVar17 + 4;
      uVar13 = uVar13 + 2;
      uVar15 = (ulonglong)uVar20;
    } while ((int)uVar20 < local_a0);
  }
  FUN_1455247f0(param_1,param_4,0,&local_a8);
  local_a0 = 0;
  if ((-1 < local_9c) && (local_a8 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,local_a8,local_9c * 2);
  }
  return 1;
}



// FUNCTION 1455231e0 FUN_1455231e0 body=2289 status=ok
// SIG undefined FUN_1455231e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1455231e0(longlong param_1,longlong *param_2,ushort param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  undefined2 *puVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar27;
  float fVar28;
  uint uVar32;
  float fVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar36;
  float fVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  uint uVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined8 local_res10;
  ushort local_res18;
  float *local_res20;
  ulonglong local_118;
  longlong local_110;
  int *local_108;
  uint local_100;
  uint local_fc;
  ulonglong local_f8;
  int *local_f0;
  longlong local_e8;
  longlong local_e0;
  uint local_d8;
  uint local_d4;
  ulonglong local_d0;
  longlong local_c8;
  float *local_c0;
  
  uVar12 = 0;
  uVar27 = 0;
  local_res20 = (float *)*param_2;
  local_100 = 0;
  iVar6 = (int)(param_2[1] - (longlong)local_res20 >> 4);
  uVar17 = (iVar6 + 1) * 5;
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(char *)(lVar16 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar16 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar16 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar16 + 0xf0) = lVar7;
  }
  uVar2 = *(ulonglong *)(*(longlong *)(lVar7 + 0x3d0) + 0x10);
  uVar13 = uVar12;
  if (*(longlong *)(uVar2 + 8) == 0) {
    uVar13 = uVar2;
  }
  local_110 = (longlong)(int)uVar17 * 4;
  local_f8 = uVar13;
  local_e8 = local_110;
  if (uVar13 == 0) {
    piVar8 = (int *)(*DAT_14c787670)(CONCAT71((int7)(uVar2 >> 8),1),&local_110,0x40);
  }
  else {
    local_118 = local_110 + 0x3fU & 0xffffffffffffffc0;
    if (local_118 <= *(ulonglong *)(uVar13 + 0x28)) {
      piVar8 = *(int **)(uVar13 + 0x38);
      if ((longlong)piVar8 + local_118 <= *(ulonglong *)(uVar13 + 0x40)) {
        *(ulonglong *)(uVar13 + 0x38) = (longlong)piVar8 + local_118;
        goto LAB_145523302;
      }
    }
    piVar8 = (int *)FUN_144b454a0(uVar13,&local_118);
  }
LAB_145523302:
  local_fc = uVar17 | 0x80000000;
  lVar16 = (longlong)iVar6;
  local_108 = piVar8;
  local_f0 = piVar8;
  if (iVar6 < 1) {
LAB_1455236cf:
    lVar16 = 0;
    pfVar11 = (float *)*local_res10;
    iVar6 = (int)(local_res10[1] - (longlong)pfVar11 >> 4);
    pfVar10 = pfVar11 + (longlong)iVar6 * 4 + -4;
    fVar28 = (*pfVar10 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x60) +
              pfVar10[1] * *(float *)(param_1 + 0x40) + pfVar10[2] * *(float *)(param_1 + 0x50)) -
             8191.0;
    fVar33 = (*pfVar10 * *(float *)(param_1 + 0x34) + *(float *)(param_1 + 100) +
              pfVar10[1] * *(float *)(param_1 + 0x44) + pfVar10[2] * *(float *)(param_1 + 0x54)) -
             8191.0;
    if (0 < iVar6) {
      do {
        fVar22 = (*pfVar11 * *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x60) +
                  pfVar11[1] * *(float *)(param_1 + 0x40) + pfVar11[2] * *(float *)(param_1 + 0x50))
                 - 8191.0;
        fVar26 = (*pfVar11 * *(float *)(param_1 + 0x34) + *(float *)(param_1 + 100) +
                  pfVar11[1] * *(float *)(param_1 + 0x44) + pfVar11[2] * *(float *)(param_1 + 0x54))
                 - 8191.0;
        piVar15 = local_f0;
        if (fVar28 * fVar26 - fVar33 * fVar22 < 0.0) goto LAB_1455239f8;
        lVar16 = lVar16 + 1;
        pfVar11 = pfVar11 + 4;
        fVar28 = fVar22;
        fVar33 = fVar26;
      } while (lVar16 < iVar6);
    }
    if ((local_fc & 0x7fffffff) < 4) {
      FUN_145316a90(&local_108,&PTR_vftable_14c6e47a0,4);
      uVar13 = local_f8;
      piVar8 = local_108;
      uVar27 = local_100;
    }
    if (uVar27 != 4) {
      uVar27 = 4;
    }
    *piVar8 = 0;
    piVar8[1] = 0x3fff0000;
    piVar8[2] = 0x3fff3fff;
    piVar8[3] = 0x3fff;
    local_100 = uVar27;
  }
  else {
    lVar7 = (longlong)(iVar6 + -1) << 4;
    pfVar10 = local_res20;
    pfVar11 = local_res20;
    uVar17 = _DAT_14c6daca0;
    uVar42 = uRam000000014c6daca4;
    uVar43 = uRam000000014c6daca8;
    uVar44 = uRam000000014c6dacac;
    fVar28 = _DAT_14c6dad90;
    fVar33 = fRam000000014c6dad94;
    fVar22 = fRam000000014c6dad98;
    fVar26 = fRam000000014c6dad9c;
    do {
      pfVar1 = (float *)(lVar7 + (longlong)pfVar10);
      fVar47 = *(float *)(param_1 + 0x60) + *pfVar1 * *(float *)(param_1 + 0x30) +
               pfVar1[1] * *(float *)(param_1 + 0x40) + pfVar1[2] * *(float *)(param_1 + 0x50);
      fVar48 = *(float *)(param_1 + 100) + *pfVar1 * *(float *)(param_1 + 0x34) +
               pfVar1[1] * *(float *)(param_1 + 0x44) + pfVar1[2] * *(float *)(param_1 + 0x54);
      fVar45 = (*(float *)(param_1 + 0x60) + *pfVar11 * *(float *)(param_1 + 0x30) +
                pfVar11[1] * *(float *)(param_1 + 0x40) + pfVar11[2] * *(float *)(param_1 + 0x50)) -
               fVar47;
      fVar46 = (*(float *)(param_1 + 100) + *pfVar11 * *(float *)(param_1 + 0x34) +
                pfVar11[1] * *(float *)(param_1 + 0x44) + pfVar11[2] * *(float *)(param_1 + 0x54)) -
               fVar48;
      fVar21 = 0.0 - fVar46;
      auVar37._0_4_ = 0.0 - fVar45;
      auVar37._12_4_ = fVar46;
      auVar37._8_4_ = fVar21;
      auVar37._4_4_ = fVar45;
      auVar39._12_4_ = 16383.0 - fVar48;
      auVar39._8_4_ = fVar48;
      auVar39._4_4_ = 16383.0 - fVar47;
      auVar39._0_4_ = fVar47;
      auVar23._4_4_ = -(uint)(16383.0 - fVar47 < 0.0 && fVar45 == 0.0);
      auVar23._0_4_ = -(uint)(fVar47 < 0.0 && auVar37._0_4_ == 0.0);
      auVar23._8_4_ = -(uint)(fVar48 < 0.0 && fVar21 == 0.0);
      auVar23._12_4_ = -(uint)(16383.0 - fVar48 < 0.0 && fVar46 == 0.0);
      iVar6 = movmskps((int)lVar7,auVar23);
      if (iVar6 == 0) {
        auVar23 = divps(auVar39,auVar37);
        uVar27 = ~-(uint)(auVar37._0_4_ == 0.0) & auVar23._0_4_;
        uVar32 = ~-(uint)(fVar45 == 0.0) & auVar23._4_4_;
        uVar34 = ~-(uint)(fVar21 == 0.0) & auVar23._8_4_;
        uVar35 = ~-(uint)(fVar46 == 0.0) & auVar23._12_4_;
        auVar18._0_4_ = ~-(uint)(0.0 < auVar37._0_4_) & uVar17;
        auVar18._4_4_ = ~-(uint)(0.0 < fVar45) & uVar42;
        auVar18._8_4_ = ~-(uint)(0.0 < fVar21) & uVar43;
        auVar18._12_4_ = ~-(uint)(0.0 < fVar46) & uVar44;
        auVar24._0_4_ = -(uint)(auVar37._0_4_ < 0.0) & uVar27;
        auVar24._4_4_ = -(uint)(fVar45 < 0.0) & uVar32;
        auVar24._8_4_ = -(uint)(fVar21 < 0.0) & uVar34;
        auVar24._12_4_ = -(uint)(fVar46 < 0.0) & uVar35;
        auVar29._0_4_ = uVar27 & -(uint)(0.0 < auVar37._0_4_);
        auVar29._4_4_ = uVar32 & -(uint)(0.0 < fVar45);
        auVar29._8_4_ = uVar34 & -(uint)(0.0 < fVar21);
        auVar29._12_4_ = uVar35 & -(uint)(0.0 < fVar46);
        auVar29 = auVar29 | auVar18;
        auVar38._4_4_ = auVar24._12_4_;
        auVar38._0_4_ = auVar24._8_4_;
        auVar38._8_4_ = auVar24._0_4_;
        auVar38._12_4_ = auVar24._4_4_;
        auVar39 = maxps(auVar38,auVar24);
        auVar19._0_8_ = auVar29._8_8_;
        auVar19._8_4_ = auVar29._0_4_;
        auVar19._12_4_ = auVar29._4_4_;
        auVar23 = minps(auVar19,auVar29);
        auVar3._4_4_ = auVar39._0_4_;
        auVar3._0_4_ = auVar39._4_4_;
        auVar3._8_4_ = auVar39._12_4_;
        auVar3._12_4_ = auVar39._8_4_;
        auVar39 = maxps(auVar39,auVar3);
        auVar4._4_4_ = auVar23._0_4_;
        auVar4._0_4_ = auVar23._4_4_;
        auVar4._8_4_ = auVar23._12_4_;
        auVar4._12_4_ = auVar23._8_4_;
        auVar23 = minps(auVar23,auVar4);
        fVar41 = auVar39._0_4_;
        fVar21 = auVar23._0_4_;
        if (fVar41 < fVar21) {
          fVar36 = fVar41 * fVar45 + fVar47 + fVar28;
          fVar41 = fVar41 * fVar46 + fVar48 + fVar33;
          fVar45 = fVar21 * fVar45 + fVar47 + fVar22;
          fVar21 = fVar21 * fVar46 + fVar48 + fVar26;
          auVar30._4_4_ = -(uint)(4.2949673e+09 <= fVar41);
          auVar30._0_4_ = -(uint)(4.2949673e+09 <= fVar36);
          auVar30._8_4_ = -(uint)(4.2949673e+09 <= fVar45);
          auVar30._12_4_ = -(uint)(4.2949673e+09 <= fVar21);
          auVar40._0_4_ = fVar36 - (float)(-(uint)(2.1474836e+09 <= fVar36) & 0x4f000000);
          auVar40._4_4_ = fVar41 - (float)(-(uint)(2.1474836e+09 <= fVar41) & 0x4f000000);
          auVar40._8_4_ = fVar45 - (float)(-(uint)(2.1474836e+09 <= fVar45) & 0x4f000000);
          auVar40._12_4_ = fVar21 - (float)(-(uint)(2.1474836e+09 <= fVar21) & 0x4f000000);
          auVar23 = maxps(auVar40,ZEXT816(0));
          auVar25._0_4_ = (int)auVar23._0_4_ + (uint)(2.1474836e+09 <= fVar36) * -0x80000000;
          auVar25._4_4_ = (int)auVar23._4_4_ + (uint)(2.1474836e+09 <= fVar41) * -0x80000000;
          auVar25._8_4_ = (int)auVar23._8_4_ + (uint)(2.1474836e+09 <= fVar45) * -0x80000000;
          auVar25._12_4_ = (int)auVar23._12_4_ + (uint)(2.1474836e+09 <= fVar21) * -0x80000000;
          auVar25 = auVar25 | auVar30;
          uVar27 = -(uint)((int)auVar25._0_4_ < 0x3fff);
          uVar32 = -(uint)((int)auVar25._4_4_ < 0x3fff);
          uVar34 = -(uint)((int)auVar25._8_4_ < 0x3fff);
          uVar35 = -(uint)((int)auVar25._12_4_ < 0x3fff);
          auVar31._0_4_ = uVar27 & auVar25._0_4_;
          auVar31._4_4_ = uVar32 & auVar25._4_4_;
          auVar31._8_4_ = uVar34 & auVar25._8_4_;
          auVar31._12_4_ = uVar35 & auVar25._12_4_;
          auVar20._0_8_ = CONCAT44(~uVar32,~uVar27) & 0x3fff00003fff;
          auVar20._8_4_ = ~uVar34 & 0x3fff;
          auVar20._12_4_ = ~uVar35 & 0x3fff;
          auVar31 = auVar31 | auVar20;
          uVar27 = auVar31._0_4_ << 0x10 | auVar31._4_4_;
          uVar32 = auVar31._8_4_ << 0x10 | auVar31._12_4_;
          if (uVar27 != uVar32) {
            uVar34 = 0;
            if ((((int)uVar12 == 0) ||
                (FUN_145523ae0(piVar8[(int)uVar12 + -1],uVar27,&local_108), piVar8 = local_108,
                uVar17 = _DAT_14c6daca0, uVar42 = uRam000000014c6daca4,
                uVar43 = uRam000000014c6daca8, uVar44 = uRam000000014c6dacac,
                fVar28 = _DAT_14c6dad90, fVar33 = fRam000000014c6dad94,
                fVar22 = fRam000000014c6dad98, fVar26 = fRam000000014c6dad9c, uVar34 = local_100,
                local_100 == 0)) || (local_108[(int)(local_100 - 1)] != uVar27)) {
              local_100 = uVar34 + 1;
              if ((uint *)(piVar8 + (int)uVar34) != (uint *)0x0) {
                piVar8[(int)uVar34] = uVar27;
                uVar17 = _DAT_14c6daca0;
                uVar42 = uRam000000014c6daca4;
                uVar43 = uRam000000014c6daca8;
                uVar44 = uRam000000014c6dacac;
                fVar28 = _DAT_14c6dad90;
                fVar33 = fRam000000014c6dad94;
                fVar22 = fRam000000014c6dad98;
                fVar26 = fRam000000014c6dad9c;
              }
            }
            lVar7 = (longlong)(int)local_100;
            local_100 = local_100 + 1;
            uVar12 = (ulonglong)local_100;
            pfVar10 = local_res20;
            if ((uint *)(piVar8 + lVar7) != (uint *)0x0) {
              piVar8[lVar7] = uVar32;
              uVar17 = _DAT_14c6daca0;
              uVar42 = uRam000000014c6daca4;
              uVar43 = uRam000000014c6daca8;
              uVar44 = uRam000000014c6dacac;
              fVar28 = _DAT_14c6dad90;
              fVar33 = fRam000000014c6dad94;
              fVar22 = fRam000000014c6dad98;
              fVar26 = fRam000000014c6dad9c;
            }
          }
        }
      }
      uVar27 = (uint)uVar12;
      lVar7 = (longlong)pfVar11 - (longlong)pfVar10;
      lVar16 = lVar16 + -1;
      pfVar11 = pfVar11 + 4;
    } while (lVar16 != 0);
    uVar13 = local_f8;
    if ((int)uVar27 < 2) goto LAB_1455236cf;
    if (*piVar8 == piVar8[(longlong)(int)uVar27 + -1]) {
      local_100 = uVar27 - 1;
    }
    else {
      FUN_145523ae0(piVar8[(longlong)(int)uVar27 + -1],*piVar8,&local_108);
      piVar8 = local_108;
    }
    uVar27 = local_100;
    cVar5 = FUN_145523d00(&local_108);
    uVar13 = local_f8;
    if (cVar5 == '\0') {
      FUN_145523e20(&local_108);
      uVar13 = local_f8;
      piVar8 = local_108;
      uVar27 = local_100;
    }
  }
  piVar15 = local_f0;
  uVar12 = 0;
  local_d8 = 0;
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar16 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar16 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar16 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar16 + 0xf0) = lVar7;
  }
  uVar2 = *(ulonglong *)(*(longlong *)(lVar7 + 0x3d0) + 0x10);
  uVar14 = uVar12;
  if (*(longlong *)(uVar2 + 8) == 0) {
    uVar14 = uVar2;
  }
  local_res20 = (float *)((longlong)(int)uVar27 * 2);
  local_d0 = uVar14;
  local_c0 = local_res20;
  if (uVar14 == 0) {
    local_e0 = (*DAT_14c787670)(CONCAT71((int7)(uVar2 >> 8),1),&local_res20,0x40);
  }
  else {
    local_res10 = (longlong *)((longlong)local_res20 + 0x3fU & 0xffffffffffffffc0);
    if (local_res10 <= *(longlong **)(uVar14 + 0x28)) {
      local_e0 = *(longlong *)(uVar14 + 0x38);
      if ((ulonglong)((longlong)local_res10 + local_e0) <= *(ulonglong *)(uVar14 + 0x40)) {
        *(longlong *)(uVar14 + 0x38) = (longlong)local_res10 + local_e0;
        goto LAB_1455238d4;
      }
    }
    local_e0 = FUN_144b454a0(uVar14,&local_res10);
  }
LAB_1455238d4:
  local_d4 = uVar27 | 0x80000000;
  local_res10 = (longlong *)(CONCAT44(local_res10._4_4_,uVar27) | 0x80000000);
  local_c8 = local_e0;
  if ((int)(uVar27 & 0x7fffffff) < (int)uVar27) {
    FUN_144ca7300(&local_e0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar27);
    uVar12 = (ulonglong)local_d8;
    local_res10 = (longlong *)CONCAT44(local_res10._4_4_,local_d4);
    uVar14 = local_d0;
  }
  lVar16 = local_e0;
  uVar17 = (uint)uVar12;
  local_d8 = uVar27;
  if ((int)uVar17 < (int)uVar27) {
    if (0 < (int)(uVar27 - uVar17)) {
      uVar12 = (ulonglong)(uVar27 - uVar17);
      puVar9 = (undefined2 *)((longlong)(int)uVar17 * 2 + local_e0);
      do {
        if (puVar9 != (undefined2 *)0x0) {
          *puVar9 = 0xffff;
        }
        uVar12 = uVar12 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar12 != 0);
    }
  }
  else {
    local_d8 = uVar17;
    if ((int)uVar27 < (int)uVar17) {
      local_d8 = uVar27;
    }
  }
  FUN_1455247f0(param_1,&local_108,local_res18 + 1,&local_e0);
  if (uVar14 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar12 = (longlong)local_c0 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar14 + 0x28) < uVar12) ||
       (uVar12 + local_c8 != *(longlong *)(uVar14 + 0x38))) {
      FUN_144be8550(uVar14);
    }
    else {
      *(longlong *)(uVar14 + 0x38) = local_c8;
      if (*(longlong *)(uVar14 + 0x48) == local_c8) {
        FUN_144be8430(uVar14);
      }
    }
  }
  if ((-1 < (int)local_res10) && (lVar16 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,lVar16,(int)local_res10 * 2);
  }
LAB_1455239f8:
  if (uVar13 == 0) {
    (*DAT_14c787678)(1,piVar15);
  }
  else {
    uVar12 = local_e8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar13 + 0x28) < uVar12) ||
       ((longlong)piVar15 + uVar12 != *(longlong *)(uVar13 + 0x38))) {
      FUN_144be8550(uVar13,piVar15);
    }
    else {
      *(int **)(uVar13 + 0x38) = piVar15;
      if (*(int **)(uVar13 + 0x48) == piVar15) {
        FUN_144be8430(uVar13);
      }
    }
  }
  if ((-1 < (int)local_fc) && (piVar8 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,piVar8,(ulonglong)(local_fc & 0x7fffffff) << 2);
  }
  return 1;
}



// FUNCTION 145523ae0 FUN_145523ae0 body=486 status=ok
// SIG undefined FUN_145523ae0(void)

void FUN_145523ae0(uint param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  uVar8 = ~((param_1 | 0x40004000) - 0x10001);
  uVar7 = ~((param_2 | 0x40004000) - 0x10001);
  uVar6 = ((uVar8 >> 2 & 0x10000000 | param_1 + 0x10001 & 0x40000000) >> 0xf | uVar8 & 0x4000) >> 2
          | param_1 + 0x10001 & 0x4000;
  uVar8 = uVar6 >> 0xb;
  uVar7 = ((uVar7 >> 2 & 0x10000000 | param_2 + 0x10001 & 0x40000000) >> 0xf | uVar7 & 0x4000) >> 2
          | param_2 + 0x10001 & 0x4000;
  if (uVar6 == 0) {
    return;
  }
  if (uVar7 == 0) {
    return;
  }
  uVar6 = (uVar7 & uVar6) >> 0xb;
  if (uVar6 == 0) goto LAB_145523bd6;
  if (uVar6 == 1) {
LAB_145523bbf:
    bVar9 = param_1 < param_2;
  }
  else {
    if ((uVar6 != 2) && (uVar6 != 4)) {
      if (uVar6 != 8) {
        return;
      }
      goto LAB_145523bbf;
    }
    bVar9 = param_2 < param_1;
  }
  if (!bVar9) {
    return;
  }
LAB_145523bd6:
  do {
    switch(uVar8) {
    case 1:
    case 9:
      uVar4 = 0;
      uVar8 = 3;
      uVar6 = 2;
      break;
    case 2:
    case 3:
      uVar8 = 6;
      uVar4 = 0x3fff0000;
      uVar6 = 4;
      break;
    case 4:
    case 6:
      uVar8 = 0xc;
      uVar4 = 0x3fff3fff;
      uVar6 = 8;
      break;
    default:
      FUN_144bde670(local_218,local_208,0x200);
      FUN_144be6160(local_218,"unexpected side mask");
      iVar5 = FUN_144bfc110(0xfdb72ff4,local_208,"FaceCutter\\hkaiFaceCutterInput.cpp",0x14f);
      if (iVar5 != 0) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FUN_144bde6e0(local_218);
      uVar4 = 0;
      uVar6 = 0;
      break;
    case 8:
    case 0xc:
      uVar8 = 9;
      uVar4 = 0x3fff;
      uVar6 = 1;
    }
    lVar3 = param_3[1];
    puVar1 = (undefined4 *)(*param_3 + (longlong)(int)lVar3 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = uVar4;
    }
    *(int *)(param_3 + 1) = (int)lVar3 + 1;
  } while ((uVar7 >> 0xb & uVar6) == 0);
  return;
}



// FUNCTION 145523d00 FUN_145523d00 body=282 status=ok
// SIG undefined FUN_145523d00(void)

uint FUN_145523d00(undefined8 *param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar3 = *(int *)(param_1 + 1);
  lVar8 = (longlong)iVar3;
  if (2 < iVar3) {
    puVar4 = (uint *)*param_1;
    uVar6 = *puVar4;
    if (iVar3 == 3) {
      iVar3 = (puVar4[1] - uVar6) + (puVar4[1] - uVar6 & 0x8000) * 2;
      iVar1 = (puVar4[2] - uVar6) + (puVar4[2] - uVar6 & 0x8000) * 2;
      return (uint)((int)(short)iVar1 * (iVar3 >> 0x10) - (iVar1 >> 0x10) * (int)(short)iVar3) >>
             0x1f ^ 1;
    }
    if (1 < lVar8) {
      lVar7 = 1;
      do {
        puVar2 = puVar4 + lVar7;
        lVar7 = lVar7 + 1;
        uVar6 = uVar6 + *puVar2 >> 1 & 0x3fff3fff;
      } while (lVar7 < lVar8);
    }
    lVar5 = 0;
    lVar7 = (longlong)(iVar3 + -1);
    do {
      lVar9 = lVar5;
      iVar3 = (puVar4[lVar7] - uVar6) + (puVar4[lVar7] - uVar6 & 0x8000) * 2;
      iVar1 = (puVar4[lVar9] - uVar6) + (puVar4[lVar9] - uVar6 & 0x8000) * 2;
      if ((iVar3 >> 0x10) * (int)(short)iVar1 - (iVar1 >> 0x10) * (int)(short)iVar3 < 0) {
        return 0;
      }
      lVar5 = lVar9 + 1;
      lVar7 = lVar9;
    } while (lVar9 + 1 < lVar8);
  }
  return 1;
}



// FUNCTION 145523e20 FUN_145523e20 body=671 status=ok
// SIG undefined FUN_145523e20(void)

undefined8 FUN_145523e20(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  
  iVar15 = (int)param_1[1];
  lVar7 = (longlong)iVar15;
  iVar8 = 1;
  uVar13 = 1;
  uVar18 = 0;
  uVar2 = 0;
  if (1 < lVar7) {
    lVar10 = 1;
    uVar16 = uVar18;
    uVar11 = uVar18;
    do {
      uVar2 = uVar13;
      uVar1 = lVar10 * 4;
      if (*(uint *)(*param_1 + uVar16) <= *(uint *)(lVar10 * 4 + *param_1)) {
        uVar2 = (uint)uVar11;
        uVar1 = uVar16;
      }
      uVar16 = uVar1;
      uVar13 = uVar13 + 1;
      lVar10 = lVar10 + 1;
      uVar11 = (ulonglong)uVar2;
    } while (lVar10 < lVar7);
  }
  FUN_1455240c0(*param_1,iVar15,iVar15 - uVar2);
  piVar3 = (int *)*param_1;
  iVar12 = *piVar3;
  if (1 < iVar15) {
    lVar10 = 1;
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 == iVar12) break;
      iVar8 = iVar8 + 1;
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar7);
  }
  lVar10 = (longlong)(iVar8 + 1);
  if (lVar10 < lVar7) {
    lVar4 = (longlong)iVar8 * 4;
    do {
      iVar15 = *(int *)(*param_1 + lVar10 * 4);
      if (iVar15 != iVar12) {
        iVar8 = iVar8 + 1;
        *(int *)(*param_1 + lVar4) = iVar15;
        lVar4 = lVar4 + 4;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < lVar7);
  }
  if (((int)param_1[1] < iVar8) || (iVar8 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar8;
  }
  piVar3 = (int *)*param_1;
  iVar15 = *piVar3;
  uVar2 = iVar8 - 1;
  if (0 < (int)uVar2) {
    uVar16 = (ulonglong)uVar2;
    do {
      uVar2 = piVar3[uVar18 + 1];
      uVar11 = uVar18;
      if (0 < (longlong)uVar18) {
        uVar13 = uVar2 - iVar15;
        iVar12 = uVar13 + (uVar13 & 0x8000) * 2;
        iVar17 = (int)(short)iVar12;
        iVar12 = iVar12 >> 0x10;
        do {
          uVar13 = piVar3[uVar11] - iVar15;
          iVar5 = uVar13 + (uVar13 & 0x8000) * 2;
          iVar6 = (int)(short)iVar5;
          iVar5 = iVar5 >> 0x10;
          iVar9 = iVar17 * iVar5;
          iVar14 = iVar12 * iVar6;
          bVar20 = SBORROW4(iVar9,iVar14);
          bVar19 = iVar9 - iVar14 < 0;
          if (iVar9 == iVar14) {
            bVar20 = SBORROW4(iVar12,iVar5);
            bVar19 = iVar12 - iVar5 < 0;
            if (iVar12 == iVar5) {
              bVar20 = SBORROW4(iVar17,iVar6);
              bVar19 = iVar17 - iVar6 < 0;
            }
          }
          if (bVar20 == bVar19) break;
          piVar3[uVar11 + 1] = piVar3[uVar11];
          uVar11 = uVar11 - 1;
        } while (0 < (longlong)uVar11);
      }
      uVar18 = uVar18 + 1;
      piVar3[uVar11 + 1] = uVar2;
      uVar16 = uVar16 - 1;
    } while (uVar16 != 0);
  }
  uVar18 = (ulonglong)uVar2;
  iVar15 = 2;
  if (2 < (longlong)iVar8) {
    lVar10 = 2;
    lVar7 = 2;
    do {
      uVar18 = *param_1;
      iVar12 = *(int *)(uVar18 + lVar10 * 4);
      if (iVar12 != *(int *)((uVar18 - 4) + lVar7 * 4)) {
        *(int *)(uVar18 + lVar7 * 4) = iVar12;
        iVar15 = iVar15 + 1;
        lVar7 = lVar7 + 1;
        if (3 < lVar7) {
          lVar4 = lVar7 * 4 + -8;
          do {
            uVar16 = *param_1;
            uVar2 = *(int *)(uVar16 + lVar4) - *(int *)((uVar16 - 4) + lVar4);
            iVar5 = *(int *)(uVar16 + 4 + lVar4);
            iVar12 = uVar2 + (uVar2 & 0x8000) * 2;
            uVar2 = iVar5 - *(int *)((uVar16 - 4) + lVar4);
            iVar17 = uVar2 + (uVar2 & 0x8000) * 2;
            uVar2 = (uint)(short)iVar17;
            uVar18 = (ulonglong)uVar2;
            if (-1 < (int)((iVar12 >> 0x10) * uVar2 - (iVar17 >> 0x10) * (int)(short)iVar12)) break;
            *(int *)(uVar16 + lVar4) = iVar5;
            iVar15 = iVar15 + -1;
            lVar4 = lVar4 + -4;
            lVar7 = lVar7 + -1;
          } while (3 < lVar7);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar8);
  }
  if (((int)param_1[1] < iVar15) || (iVar15 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar15;
  }
  return CONCAT71((int7)(uVar18 >> 8),1);
}



// FUNCTION 1455240c0 FUN_1455240c0 body=472 status=ok
// SIG undefined FUN_1455240c0(void)

undefined8 FUN_1455240c0(undefined4 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *_Dst;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong local_res20;
  longlong local_38 [2];
  
  lVar4 = (longlong)param_3;
  lVar5 = (longlong)param_2;
  if (param_3 == 0) {
    return 1;
  }
  if (param_3 == param_2) {
    return 1;
  }
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
  lVar1 = lVar5 * 4;
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar2 + 8) != 0) {
    lVar2 = 0;
  }
  local_38[0] = lVar1;
  if (lVar2 == 0) {
    _Dst = (undefined4 *)(*DAT_14c787670)(1,local_38,0x40);
  }
  else {
    local_res20 = lVar1 + 0x3fU & 0xffffffffffffffc0;
    if (local_res20 <= *(ulonglong *)(lVar2 + 0x28)) {
      _Dst = *(undefined4 **)(lVar2 + 0x38);
      if (local_res20 + (longlong)_Dst <= *(ulonglong *)(lVar2 + 0x40)) {
        *(ulonglong *)(lVar2 + 0x38) = local_res20 + (longlong)_Dst;
        goto LAB_1455241b9;
      }
    }
    _Dst = (undefined4 *)FUN_144b454a0(lVar2,&local_res20);
  }
LAB_1455241b9:
  if ((_Dst != param_1) && (0 < param_2)) {
    memcpy(_Dst,param_1,lVar5 << 2);
  }
  if ((param_1 != _Dst + (lVar5 - lVar4)) && (0 < param_3)) {
    memcpy(param_1,_Dst + (lVar5 - lVar4),lVar4 << 2);
  }
  param_1 = param_1 + lVar4;
  if ((param_1 != _Dst) && (lVar4 = (longlong)(param_2 - param_3), 0 < param_2 - param_3)) {
    lVar5 = (longlong)_Dst - (longlong)param_1;
    do {
      *param_1 = *(undefined4 *)(lVar5 + (longlong)param_1);
      param_1 = param_1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  if (lVar2 == 0) {
    (*DAT_14c787678)(CONCAT71((int7)((ulonglong)param_1 >> 8),1),_Dst,lVar1);
  }
  else {
    uVar3 = lVar1 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar2 + 0x28) < uVar3) ||
       (uVar3 + (longlong)_Dst != *(longlong *)(lVar2 + 0x38))) {
      FUN_144be8550(lVar2,_Dst);
    }
    else {
      *(undefined4 **)(lVar2 + 0x38) = _Dst;
      if (*(undefined4 **)(lVar2 + 0x48) == _Dst) {
        FUN_144be8430(lVar2);
      }
    }
  }
  return 1;
}



// FUNCTION 1455242a0 FUN_1455242a0 body=1355 status=ok
// SIG undefined FUN_1455242a0(void)

void FUN_1455242a0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  bool bVar28;
  int local_res18;
  
  iVar15 = 0;
  piVar1 = (int *)*param_1;
  iVar8 = 0;
  local_res18 = 0;
  iVar2 = 0;
  iVar3 = (int)(param_1[1] - (longlong)piVar1 >> 2);
  iVar5 = iVar3 + -1;
  if (0 < iVar5) {
    lVar14 = 1;
    piVar27 = piVar1;
    iVar19 = 0;
    do {
      iVar23 = iVar19 + 1;
      iVar22 = iVar23;
      for (lVar20 = lVar14; lVar20 < iVar3; lVar20 = lVar20 + 1) {
        iVar16 = (piVar1[lVar20] - *piVar27) + (piVar1[lVar20] - *piVar27 & 0x8000U) * 2;
        iVar6 = (int)(short)iVar16;
        iVar16 = iVar16 >> 0x10;
        iVar16 = iVar16 * iVar16 + iVar6 * iVar6;
        if (iVar2 < iVar16) {
          iVar15 = iVar19;
          iVar8 = iVar22;
          iVar2 = iVar16;
        }
        iVar22 = iVar22 + 1;
      }
      piVar27 = piVar27 + 1;
      lVar14 = lVar14 + 1;
      iVar19 = iVar23;
      local_res18 = iVar8;
    } while (iVar23 < iVar5);
  }
  lVar14 = (longlong)iVar15;
  uVar17 = piVar1[local_res18];
  uVar25 = uVar17 & 0xffff;
  uVar24 = piVar1[lVar14];
  uVar12 = uVar24 & 0xffff;
  uVar10 = uVar17 >> 0x10;
  iVar8 = (uVar17 - uVar24) + (uVar17 - uVar24 & 0x8000) * 2;
  iVar2 = iVar8 >> 0x10;
  iVar19 = (int)(param_1[1] - (longlong)piVar1 >> 2);
  iVar5 = iVar19 + -1;
  iVar3 = (int)(short)iVar8;
  uVar4 = uVar24 >> 0x10;
  uVar18 = uVar24;
  iVar8 = iVar15;
  do {
    lVar20 = lVar14 + 1;
    lVar14 = 0;
    if (iVar8 != iVar5) {
      lVar14 = lVar20;
    }
    iVar22 = iVar8 + 1;
    bVar28 = iVar8 != iVar5;
    uVar13 = piVar1[lVar14];
    iVar8 = 0;
    if (bVar28) {
      iVar8 = iVar22;
    }
    iVar22 = ((uVar13 & 0xffff) - uVar12) * (uVar10 - uVar4) -
             ((uVar13 >> 0x10) - uVar4) * (uVar25 - uVar12);
    if (0 < iVar22) {
      iVar23 = uVar12 - uVar25;
      iVar6 = uVar4 - uVar10;
      iVar26 = -iVar23;
      iVar16 = iVar23 * iVar23 + iVar6 * iVar6;
      lVar20 = (longlong)iVar22;
      lVar9 = iVar26 * lVar20;
      iVar22 = iVar16;
      if (lVar9 < 0) {
        lVar9 = -lVar9;
        iVar22 = -iVar16;
      }
      uVar21 = (ulonglong)iVar22;
      iVar22 = (int)((((longlong)((longlong)uVar21 >> 0x1e ^ uVar21) >> 1) + lVar9) /
                    (longlong)uVar21) + (uVar13 >> 0x10);
      lVar9 = ((ulonglong)uVar4 - (ulonglong)uVar10) * lVar20;
      if (lVar9 < 0) {
        lVar9 = ((ulonglong)uVar10 - (ulonglong)uVar4) * lVar20;
        iVar16 = -iVar16;
      }
      uVar21 = (ulonglong)iVar16;
      uVar13 = (int)((((longlong)((longlong)uVar21 >> 0x1e ^ uVar21) >> 1) + lVar9) /
                    (longlong)uVar21) + (uVar13 & 0xffff);
      if ((int)((uVar13 - uVar25) * iVar6 - (iVar22 - uVar10) * iVar23) < 0) {
        if (iVar23 < 0) {
          iVar23 = iVar26;
        }
        iVar16 = -iVar6;
        if (-iVar6 < 0) {
          iVar16 = iVar6;
        }
        if (iVar16 < iVar23) {
          iVar23 = -1;
          if (0 < iVar26) {
            iVar23 = 1;
          }
          iVar22 = iVar22 + iVar23;
        }
        else {
          iVar23 = -1;
          if (0 < iVar6) {
            iVar23 = 1;
          }
          uVar13 = uVar13 + iVar23;
        }
      }
      uVar13 = iVar22 << 0x10 | uVar13;
    }
    iVar22 = (uVar13 - uVar18) + (uVar13 - uVar18 & 0x8000) * 2;
    if ((short)iVar22 * iVar3 + (iVar22 >> 0x10) * iVar2 < 0) {
      uVar13 = uVar18;
    }
    uVar18 = uVar13;
    piVar1[lVar14] = uVar18;
  } while (lVar14 != local_res18);
  uVar11 = (ulonglong)local_res18;
  iVar19 = iVar19 + -1;
  uVar4 = uVar24 & 0xffff;
  uVar24 = uVar24 >> 0x10;
  lVar14 = *param_1;
  uVar18 = uVar17 & 0xffff;
  uVar10 = uVar17 >> 0x10;
  uVar21 = uVar11;
  do {
    iVar8 = (int)uVar11;
    uVar11 = uVar21 + 1;
    uVar21 = 0;
    if (iVar8 != iVar19) {
      uVar21 = uVar11;
    }
    uVar11 = 0;
    uVar12 = *(uint *)(lVar14 + uVar21 * 4);
    if (iVar8 != iVar19) {
      uVar11 = (ulonglong)(iVar8 + 1);
    }
    iVar8 = ((uVar12 & 0xffff) - uVar18) * (uVar24 - uVar10) -
            ((uVar12 >> 0x10) - uVar10) * (uVar4 - uVar18);
    if (0 < iVar8) {
      iVar5 = uVar18 - uVar4;
      iVar16 = uVar10 - uVar24;
      lVar20 = (longlong)iVar8;
      iVar23 = -iVar5;
      lVar14 = iVar23 * lVar20;
      iVar8 = iVar16 * iVar16 + iVar5 * iVar5;
      iVar22 = iVar8;
      if (lVar14 < 0) {
        lVar14 = -lVar14;
        iVar22 = -iVar8;
      }
      uVar7 = (ulonglong)iVar22;
      iVar22 = (uVar12 >> 0x10) +
               (int)((((longlong)((longlong)uVar7 >> 0x1e ^ uVar7) >> 1) + lVar14) / (longlong)uVar7
                    );
      lVar14 = ((ulonglong)uVar10 - (ulonglong)uVar24) * lVar20;
      if (lVar14 < 0) {
        lVar14 = ((ulonglong)uVar24 - (ulonglong)uVar10) * lVar20;
        iVar8 = -iVar8;
      }
      uVar7 = (ulonglong)iVar8;
      uVar12 = (int)((((longlong)((longlong)uVar7 >> 0x1e ^ uVar7) >> 1) + lVar14) / (longlong)uVar7
                    ) + (uVar12 & 0xffff);
      if ((int)((uVar12 - uVar4) * (uVar10 - uVar24) - (iVar22 - uVar24) * (uVar18 - uVar4)) < 0) {
        if (iVar5 < 0) {
          iVar5 = iVar23;
        }
        iVar8 = -iVar16;
        if (-iVar16 < 0) {
          iVar8 = iVar16;
        }
        if (iVar8 < iVar5) {
          iVar8 = -1;
          if (0 < iVar23) {
            iVar8 = 1;
          }
          iVar22 = iVar22 + iVar8;
        }
        else {
          iVar8 = -1;
          if (0 < iVar16) {
            iVar8 = 1;
          }
          uVar12 = uVar12 + iVar8;
        }
      }
      uVar12 = iVar22 << 0x10 | uVar12;
    }
    iVar8 = (uVar12 - uVar17) + (uVar12 - uVar17 & 0x8000) * 2;
    if (0 < (short)iVar8 * iVar3 + (iVar8 >> 0x10) * iVar2) {
      uVar12 = uVar17;
    }
    uVar17 = uVar12;
    lVar14 = *param_1;
    *(uint *)(lVar14 + uVar21 * 4) = uVar17;
  } while (uVar21 != (longlong)iVar15);
  return;
}



// FUNCTION 1455247f0 FUN_1455247f0 body=1457 status=ok
// SIG undefined FUN_1455247f0(void)

undefined8 FUN_1455247f0(longlong param_1,longlong *param_2,ulonglong param_3,longlong *param_4)

{
  longlong *plVar1;
  void *pvVar2;
  void *pvVar3;
  ushort uVar4;
  undefined2 uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  ushort local_88;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  
  lVar14 = (longlong)(int)param_2[1];
  uVar4 = *(ushort *)(param_1 + 0x128);
  plVar1 = (longlong *)(param_1 + 0x120);
  uVar20 = param_3 & 0xffffffff;
  uVar7 = *(uint *)*param_2;
  uVar8 = ((uint *)*param_2)[lVar14 + -1];
  bVar22 = uVar8 < uVar7;
  uVar5 = *(undefined2 *)(*param_4 + -2 + lVar14 * 2);
  if (bVar22) {
    iVar19 = *(int *)(param_1 + 0x128) + 1;
    if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar19) {
      FUN_145524ec0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar19);
    }
    *(int *)(param_1 + 0x128) = iVar19;
    FUN_145522810(param_1 + 0x108,uVar4 + 1);
    FUN_1455228a0((longlong *)(param_1 + 0xf0),uVar4 + 1);
    puVar13 = (uint *)((ulonglong)uVar4 * 0x20 + *plVar1);
    *(undefined2 *)(puVar13 + 2) = uVar5;
    *(undefined2 *)((longlong)puVar13 + 0x12) = 0xffff;
    *puVar13 = uVar8;
    puVar13[1] = uVar7;
    *(undefined4 *)((longlong)puVar13 + 10) = 0xffff0000;
    lVar21 = *(longlong *)(param_1 + 0xf0);
    iVar19 = -((int)~*(uint *)(param_1 + 0x100) >> 5);
    lVar15 = (longlong)(int)(iVar19 * (uint)uVar4);
    pvVar2 = (void *)(lVar21 + lVar15 * 4);
    pvVar3 = (void *)(lVar21 + (iVar19 + lVar15) * 4);
    uVar16 = (ulonglong)((longlong)pvVar3 + (3 - (longlong)pvVar2)) >> 2;
    if (pvVar3 < pvVar2) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      memset(pvVar2,0,uVar16 << 2);
    }
    local_60 = (uVar20 >> 5) * 4;
    *(int *)(local_60 + (longlong)pvVar2) = 1 << ((byte)param_3 & 0x1f);
  }
  else {
    iVar19 = *(int *)(param_1 + 0x128) + 1;
    if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar19) {
      FUN_145524ec0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar19);
    }
    *(int *)(param_1 + 0x128) = iVar19;
    FUN_145522810(param_1 + 0x108,uVar4 + 1);
    FUN_1455228a0((longlong *)(param_1 + 0xf0),uVar4 + 1);
    puVar13 = (uint *)((ulonglong)uVar4 * 0x20 + *plVar1);
    *(undefined2 *)(puVar13 + 2) = uVar5;
    *(undefined2 *)((longlong)puVar13 + 0x12) = 0xffff;
    *puVar13 = uVar7;
    puVar13[1] = uVar8;
    *(undefined4 *)((longlong)puVar13 + 10) = 0xffff0000;
    lVar21 = *(longlong *)(param_1 + 0xf0);
    iVar19 = -((int)~*(uint *)(param_1 + 0x100) >> 5);
    lVar15 = (longlong)(int)(iVar19 * (uint)uVar4);
    pvVar2 = (void *)(lVar21 + lVar15 * 4);
    pvVar3 = (void *)(lVar21 + (iVar19 + lVar15) * 4);
    uVar16 = (ulonglong)((longlong)pvVar3 + (3 - (longlong)pvVar2)) >> 2;
    if (pvVar3 < pvVar2) {
      uVar16 = 0;
    }
    if (uVar16 != 0) {
      memset(pvVar2,0,uVar16 << 2);
    }
    local_60 = (uVar20 >> 5) * 4;
    *(int *)(local_60 + (longlong)pvVar2) = 1 << ((byte)param_3 & 0x1f);
  }
  local_68 = (longlong *)(param_1 + 0xf0);
  local_70 = param_1 + 0x108;
  lVar21 = 1;
  uVar16 = (ulonglong)uVar4;
  uVar18 = uVar7;
  if (1 < lVar14) {
    bVar9 = (byte)uVar20 & 0x1f;
    uVar11 = 1 << bVar9 | 1U >> 0x20 - bVar9;
    lVar15 = 0;
    uVar17 = uVar7;
    local_88 = uVar4;
    bVar10 = bVar22;
    do {
      uVar18 = *(uint *)(*param_2 + lVar21 * 4);
      bVar22 = uVar17 < uVar18;
      iVar19 = *(int *)(param_1 + 0x128) + 1;
      uVar5 = *(undefined2 *)(lVar15 + *param_4);
      uVar6 = *(ushort *)(param_1 + 0x128);
      uVar16 = (ulonglong)uVar6;
      uVar12 = *(uint *)(param_1 + 300) & 0x7fffffff;
      if (uVar17 < uVar18) {
        if ((int)uVar12 < iVar19) {
          FUN_145524ec0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar19);
        }
        *(int *)(param_1 + 0x128) = iVar19;
        FUN_145522810(local_70,uVar6 + 1);
        FUN_1455228a0(local_68,uVar6 + 1);
        puVar13 = (uint *)(uVar16 * 0x20 + *plVar1);
        *(undefined2 *)(puVar13 + 2) = uVar5;
        *(undefined2 *)((longlong)puVar13 + 0x12) = 0xffff;
        *puVar13 = uVar17;
        puVar13[1] = uVar18;
        *(undefined4 *)((longlong)puVar13 + 10) = 0xffff0000;
        iVar19 = -((int)~*(uint *)(param_1 + 0x100) >> 5);
        lVar15 = (longlong)(int)((uint)uVar6 * iVar19);
        pvVar2 = (void *)(*local_68 + lVar15 * 4);
        pvVar3 = (void *)(*local_68 + (iVar19 + lVar15) * 4);
        uVar20 = (ulonglong)((longlong)pvVar3 + (3 - (longlong)pvVar2)) >> 2;
        if (pvVar3 < pvVar2) {
          uVar20 = 0;
        }
        if (uVar20 != 0) {
          memset(pvVar2,0,uVar20 << 2);
        }
        *(uint *)((longlong)pvVar2 + local_60) = uVar11;
        if (bVar10) {
          *(ushort *)((ulonglong)local_88 * 0x20 + 0xc + *plVar1) = uVar6;
        }
        else {
          FUN_1455213f0(param_1,uVar16,local_88);
        }
      }
      else {
        if ((int)uVar12 < iVar19) {
          FUN_145524ec0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar19);
        }
        *(int *)(param_1 + 0x128) = iVar19;
        FUN_145522810(local_70,uVar6 + 1);
        FUN_1455228a0(local_68,uVar6 + 1);
        puVar13 = (uint *)(uVar16 * 0x20 + *plVar1);
        *(undefined2 *)(puVar13 + 2) = uVar5;
        *(undefined2 *)((longlong)puVar13 + 0x12) = 0xffff;
        puVar13[1] = uVar17;
        *puVar13 = uVar18;
        *(undefined4 *)((longlong)puVar13 + 10) = 0xffff0000;
        iVar19 = -((int)~*(uint *)(param_1 + 0x100) >> 5);
        lVar15 = (longlong)(int)((uint)uVar6 * iVar19);
        pvVar2 = (void *)(*local_68 + lVar15 * 4);
        pvVar3 = (void *)(*local_68 + (iVar19 + lVar15) * 4);
        uVar20 = (ulonglong)((longlong)pvVar3 + (3 - (longlong)pvVar2)) >> 2;
        if (pvVar3 < pvVar2) {
          uVar20 = 0;
        }
        if (uVar20 != 0) {
          memset(pvVar2,0,uVar20 << 2);
        }
        *(uint *)((longlong)pvVar2 + local_60) = uVar11;
        if (!bVar10) {
          *(ushort *)(uVar16 * 0x20 + 0xc + *plVar1) = local_88;
        }
      }
      lVar15 = lVar21 * 2;
      lVar21 = lVar21 + 1;
      uVar17 = uVar18;
      local_88 = uVar6;
      bVar10 = bVar22;
    } while (lVar21 < lVar14);
  }
  if (uVar7 <= uVar8) {
    if (!bVar22) {
      *(short *)((ulonglong)uVar4 * 0x20 + 0xc + *plVar1) = (short)uVar16;
    }
    return 1;
  }
  if (!bVar22) {
    FUN_1455213f0(param_1,uVar4,uVar16,uVar18);
    return 1;
  }
  *(ushort *)(uVar16 * 0x20 + 0xc + *plVar1) = uVar4;
  return 1;
}



// FUNCTION 145524db0 FUN_145524db0 body=260 status=ok
// SIG undefined FUN_145524db0(void)

uint * FUN_145524db0(longlong *param_1,uint *param_2,int *param_3)

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
LAB_145524e8c:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)((longlong)(int)puVar6[1] * 0x20 + *param_1) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_145524e8c;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 145524ec0 FUN_145524ec0 body=243 status=ok
// SIG undefined FUN_145524ec0(void)

void FUN_145524ec0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145524fc0 FUN_145524fc0 body=243 status=ok
// SIG undefined FUN_145524fc0(void)

void FUN_145524fc0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 1455250c0 FUN_1455250c0 body=3 status=ok
// SIG undefined FUN_1455250c0(void)

void FUN_1455250c0(void)

{
  return;
}



// FUNCTION 1455250d0 FUN_1455250d0 body=3 status=ok
// SIG undefined FUN_1455250d0(void)

void FUN_1455250d0(void)

{
  return;
}



// FUNCTION 1455250e0 FUN_1455250e0 body=499 status=ok
// SIG undefined FUN_1455250e0(void)

void FUN_1455250e0(longlong *param_1,int param_2,longlong *param_3,int param_4,longlong *param_5,
                  int param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  undefined8 *puVar25;
  uint uVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  ulonglong uVar33;
  ulonglong uVar29;
  
  lVar31 = (longlong)(-((int)~*(uint *)(param_1 + 2) >> 5) * param_2);
  uVar1 = *param_1 + lVar31 * 4;
  uVar29 = 0;
  uVar2 = *param_3 + (longlong)-(((int)~*(uint *)(param_3 + 2) >> 5) * param_4) * 4;
  lVar31 = (longlong)(((-((int)~*(uint *)(param_1 + 2) >> 5) + lVar31) * 4 - uVar1) + *param_1) >> 2
  ;
  uVar3 = *param_5 + (longlong)-(((int)~*(uint *)(param_5 + 2) >> 5) * param_6) * 4;
  uVar30 = (uint)lVar31;
  uVar28 = 0;
  if ((0 < (int)uVar30) && (1 < uVar30)) {
    lVar27 = (longlong)(int)(uVar30 - 1);
    uVar33 = uVar1 + lVar27 * 4;
    uVar28 = 0;
    if (((uVar2 + lVar27 * 4 < uVar1) || (uVar33 < uVar2)) &&
       ((uVar3 + lVar27 * 4 < uVar1 || (uVar33 < uVar3)))) {
      if (0xf < uVar30) {
        uVar26 = uVar30 & 0x8000000f;
        if ((int)uVar26 < 0) {
          uVar26 = (uVar26 - 1 | 0xfffffff0) + 1;
        }
        lVar27 = uVar3 - uVar2;
        lVar32 = uVar1 - uVar2;
        puVar24 = (uint *)(uVar2 + 0x10);
        uVar33 = uVar29;
        do {
          uVar8 = puVar24[-3];
          uVar9 = puVar24[-2];
          uVar10 = puVar24[-1];
          uVar28 = (int)uVar29 + 0x10;
          uVar29 = (ulonglong)uVar28;
          uVar33 = uVar33 + 0x10;
          puVar5 = (uint *)(lVar27 + -0x10 + (longlong)puVar24);
          uVar11 = puVar5[1];
          uVar12 = puVar5[2];
          uVar13 = puVar5[3];
          puVar4 = (uint *)(lVar27 + (longlong)puVar24);
          uVar14 = *puVar4;
          uVar15 = puVar4[1];
          uVar16 = puVar4[2];
          uVar17 = puVar4[3];
          puVar4 = puVar24 + 0x10;
          uVar18 = *puVar24;
          uVar19 = puVar24[1];
          uVar20 = puVar24[2];
          uVar21 = puVar24[3];
          puVar6 = (uint *)(lVar32 + -0x50 + (longlong)puVar4);
          *puVar6 = *puVar5 ^ puVar24[-4];
          puVar6[1] = uVar11 ^ uVar8;
          puVar6[2] = uVar12 ^ uVar9;
          puVar6[3] = uVar13 ^ uVar10;
          uVar8 = puVar24[4];
          uVar9 = puVar24[5];
          uVar10 = puVar24[6];
          uVar11 = puVar24[7];
          puVar5 = (uint *)(lVar27 + -0x30 + (longlong)puVar4);
          uVar12 = *puVar5;
          uVar13 = puVar5[1];
          uVar22 = puVar5[2];
          uVar23 = puVar5[3];
          puVar5 = (uint *)(lVar32 + -0x40 + (longlong)puVar4);
          *puVar5 = uVar14 ^ uVar18;
          puVar5[1] = uVar15 ^ uVar19;
          puVar5[2] = uVar16 ^ uVar20;
          puVar5[3] = uVar17 ^ uVar21;
          uVar14 = puVar24[8];
          uVar15 = puVar24[9];
          uVar16 = puVar24[10];
          uVar17 = puVar24[0xb];
          puVar24 = (uint *)(lVar27 + -0x20 + (longlong)puVar4);
          uVar18 = *puVar24;
          uVar19 = puVar24[1];
          uVar20 = puVar24[2];
          uVar21 = puVar24[3];
          puVar24 = (uint *)(lVar32 + -0x30 + (longlong)puVar4);
          *puVar24 = uVar12 ^ uVar8;
          puVar24[1] = uVar13 ^ uVar9;
          puVar24[2] = uVar22 ^ uVar10;
          puVar24[3] = uVar23 ^ uVar11;
          puVar24 = (uint *)(lVar32 + -0x20 + (longlong)puVar4);
          *puVar24 = uVar18 ^ uVar14;
          puVar24[1] = uVar19 ^ uVar15;
          puVar24[2] = uVar20 ^ uVar16;
          puVar24[3] = uVar21 ^ uVar17;
          puVar24 = puVar4;
        } while ((longlong)uVar33 < (longlong)(int)(uVar30 - uVar26));
        if (((byte)lVar31 & 0xf) < 2) goto LAB_145525294;
      }
      uVar26 = uVar30 & 0x80000001;
      if ((int)uVar26 < 0) {
        uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
      }
      lVar31 = (longlong)(int)uVar29;
      puVar25 = (undefined8 *)(uVar2 + lVar31 * 4);
      do {
        uVar7 = *(undefined8 *)((longlong)puVar25 + (uVar3 - uVar2));
        uVar28 = (int)uVar29 + 2;
        uVar29 = (ulonglong)uVar28;
        lVar31 = lVar31 + 2;
        *(ulonglong *)((longlong)puVar25 + (uVar1 - uVar2)) =
             CONCAT44((uint)((ulonglong)uVar7 >> 0x20) ^ (uint)((ulonglong)*puVar25 >> 0x20),
                      (uint)uVar7 ^ (uint)*puVar25);
        puVar25 = puVar25 + 1;
      } while (lVar31 < (int)(uVar30 - uVar26));
    }
  }
LAB_145525294:
  lVar31 = (longlong)(int)uVar28;
  if (lVar31 < (int)uVar30) {
    puVar24 = (uint *)(uVar2 + lVar31 * 4);
    lVar31 = (int)uVar30 - lVar31;
    do {
      *(uint *)((longlong)puVar24 + (uVar1 - uVar2)) =
           *(uint *)((longlong)puVar24 + (uVar3 - uVar2)) ^ *puVar24;
      puVar24 = puVar24 + 1;
      lVar31 = lVar31 + -1;
    } while (lVar31 != 0);
  }
  return;
}



// FUNCTION 1455252e0 FUN_1455252e0 body=997 status=ok
// SIG undefined FUN_1455252e0(void)

undefined8 FUN_1455252e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  char local_res8 [8];
  ushort local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  char *pcVar14;
  ushort local_78 [4];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  char *local_50;
  undefined4 uVar15;
  
  iVar4 = *(int *)(param_1 + 0xb8);
  while ((iVar4 != 1 &&
         (cVar5 = FUN_1455e4530(param_1,*(longlong *)(param_1 + 0xb0) + 0x10), cVar5 == '\0'))) {
    FUN_145521080(param_1 + 0xb0);
    iVar4 = *(int *)(param_1 + 0xb8);
  }
  if (*(int *)(param_1 + 0xb8) == 1) {
    return 1;
  }
  uVar10 = *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x10) >> 2;
  FUN_1455250c0(param_1,uVar10);
  FUN_1455256d0(param_1,uVar10,local_res10,local_78);
  uVar3 = local_res10[0];
  uVar13 = (ulonglong)local_res10[0];
  local_res20[0] = 0xffff;
  if (local_res10[0] != 0xffff) {
    local_res20[0] = *(undefined2 *)(uVar13 * 0x20 + 0x12 + *(longlong *)(param_1 + 0x120));
  }
  local_res18[0] = local_res20[0];
  if (*(int *)(param_1 + 0xd0) != 0) {
    local_res18[0] =
         *(undefined2 *)
          ((ulonglong)
           *(ushort *)(*(longlong *)(param_1 + 200) + -2 + (longlong)*(int *)(param_1 + 0xd0) * 2) *
           0x20 + 0x12 + *(longlong *)(param_1 + 0x120));
  }
  FUN_145526330(param_1,local_res20[0],uVar10);
  pcVar14 = local_res8;
  local_res10[0] = local_res10[0] & 0xff00;
  local_res8[0] = '\0';
  FUN_145526950(param_1,local_res20,local_res18,uVar10,local_res10,pcVar14);
  uVar15 = (undefined4)((ulonglong)pcVar14 >> 0x20);
  iVar4 = *(int *)(param_1 + 0xd0);
  if (iVar4 != 0) {
    lVar12 = *(longlong *)(param_1 + 0x120);
    lVar8 = (ulonglong)**(ushort **)(param_1 + 200) * 0x20;
    local_70 = *(undefined4 *)(lVar8 + lVar12);
    local_6c = *(undefined4 *)(lVar8 + 4 + lVar12);
    lVar8 = (ulonglong)(*(ushort **)(param_1 + 200))[(longlong)iVar4 + -1] * 0x20;
    local_68 = *(undefined4 *)(lVar8 + lVar12);
    local_64 = *(undefined4 *)(lVar8 + 4 + lVar12);
  }
  if ((char)local_res10[0] == '\0') {
    iVar4 = *(int *)(param_1 + 0xe0);
    if (0 < (longlong)iVar4) {
      lVar12 = 0;
      do {
        puVar11 = (uint *)((ulonglong)*(ushort *)(*(longlong *)(param_1 + 0xd8) + lVar12 * 2) * 0x20
                          + *(longlong *)(param_1 + 0x120));
        uVar7 = *puVar11;
        if ((uVar7 != uVar10) &&
           (iVar1 = (puVar11[1] - uVar7) + (puVar11[1] - uVar7 & 0x8000) * 2,
           iVar2 = (uVar10 - uVar7) + (uVar10 - uVar7 & 0x8000) * 2,
           (iVar1 >> 0x10) * (int)(short)iVar2 != (iVar2 >> 0x10) * (int)(short)iVar1)) {
          *(short *)((longlong)puVar11 + 10) = *(short *)((longlong)puVar11 + 10) + 1;
        }
        lVar12 = lVar12 + 1;
        *puVar11 = uVar10;
      } while (lVar12 < iVar4);
    }
    iVar4 = *(int *)(param_1 + 0xe0);
    local_res8[0] = '\0';
    if ((iVar4 == 0) || (iVar4 < 2)) goto LAB_145525549;
    local_50 = local_res8;
    local_58 = param_1;
    FUN_1455271a0(*(undefined8 *)(param_1 + 0xd8),0,iVar4 + -1,&local_58);
  }
  if (local_res8[0] != '\0') {
    FUN_145525ce0(param_1);
  }
LAB_145525549:
  if (*(int *)(param_1 + 0xd0) != 0) {
    FUN_145526ae0(param_1,local_res18,local_res20,&local_68,&local_70,CONCAT44(uVar15,uVar10));
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    *(undefined2 *)
     ((ulonglong)
      *(ushort *)(*(longlong *)(param_1 + 0xd8) + -2 + (longlong)*(int *)(param_1 + 0xe0) * 2) *
      0x20 + 0x12 + *(longlong *)(param_1 + 0x120)) = local_res18[0];
  }
  if (uVar3 != 0xffff) {
    *(undefined2 *)(uVar13 * 0x20 + 0x12 + *(longlong *)(param_1 + 0x120)) = local_res20[0];
  }
  FUN_1455260d0(param_1,uVar13,(ulonglong)local_78[0]);
  if (*(int *)(param_1 + 0xe0) == 0) {
    if (uVar3 == 0xffff) {
      return 1;
    }
    if (local_78[0] == 0xffff) {
      return 1;
    }
    piVar6 = (int *)((ulonglong)local_78[0] * 0x20 + *(longlong *)(param_1 + 0x120));
    piVar9 = (int *)(uVar13 * 0x20 + *(longlong *)(param_1 + 0x120));
    uVar7 = piVar6[1] - *piVar6;
    iVar4 = uVar7 + (uVar7 & 0x8000) * 2;
    uVar7 = piVar9[1] - *piVar9;
    iVar1 = uVar7 + (uVar7 & 0x8000) * 2;
    if ((iVar4 >> 0x10) * (int)(short)iVar1 <= (iVar1 >> 0x10) * (int)(short)iVar4) {
      return 1;
    }
  }
  else {
    if (uVar3 != 0xffff) {
      FUN_145526ea0(param_1,uVar3,**(undefined2 **)(param_1 + 0xd8),uVar10);
    }
    if (local_78[0] == 0xffff) {
      return 1;
    }
    uVar3 = *(ushort *)(*(longlong *)(param_1 + 0xd8) + -2 + (longlong)*(int *)(param_1 + 0xe0) * 2)
    ;
  }
  FUN_145526ea0(param_1,uVar3,local_78[0],uVar10);
  return 1;
}



// FUNCTION 1455256d0 FUN_1455256d0 body=1546 status=ok
// SIG undefined FUN_1455256d0(void)

undefined8 FUN_1455256d0(longlong param_1,uint param_2,ushort *param_3,ushort *param_4)

{
  longlong *plVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  undefined2 uVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ushort uVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  int iVar17;
  ushort uVar18;
  ushort uVar19;
  int *piVar20;
  ulonglong uVar21;
  undefined1 local_48 [16];
  
  plVar1 = (longlong *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  bVar5 = false;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  uVar13 = 0xffff;
  uVar18 = uVar13;
  if (*(int *)(param_1 + 0xb8) != 1) {
    do {
      if (*(uint *)(*plVar1 + 0x10) >> 2 != param_2) break;
      local_48 = *(undefined1 (*) [16])(*plVar1 + 0x10);
      uVar8 = local_48._0_4_ & 3;
      if ((local_48._0_8_ & 3) == 0) {
        FUN_145521080(plVar1);
        cVar7 = FUN_1455e4530(param_1,local_48);
        if (cVar7 != '\0') {
          uVar3 = uVar13;
          uVar19 = local_48._4_2_;
          if (bVar5) {
            do {
              if (uVar3 == local_48._4_2_) goto LAB_145525978;
              if (uVar19 == uVar13) break;
              uVar19 = *(ushort *)((ulonglong)uVar19 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x120))
              ;
              if (uVar19 == 0xffff) goto LAB_145525978;
              uVar3 = *(ushort *)((ulonglong)uVar3 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x120));
            } while (uVar3 != 0xffff);
          }
          uVar13 = local_48._4_2_;
          uVar19 = local_48._6_2_;
          if (bVar5) {
LAB_145525978:
            uVar19 = uVar18;
            uVar3 = local_48._6_2_;
            uVar4 = uVar18;
            if (local_48._6_2_ != uVar18) {
              while( true ) {
                uVar19 = local_48._6_2_;
                if (uVar4 == local_48._6_2_) break;
                uVar4 = *(ushort *)((ulonglong)uVar4 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x120))
                ;
                uVar19 = uVar18;
                if (((uVar4 == 0xffff) ||
                    (uVar3 = *(ushort *)
                              ((ulonglong)uVar3 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x120)),
                    uVar19 = local_48._6_2_, uVar3 == 0xffff)) || (uVar19 = uVar18, uVar3 == uVar18)
                   ) break;
              }
            }
          }
          bVar5 = true;
          uVar18 = uVar19;
        }
      }
      else {
        uVar19 = local_48._4_2_;
        if (uVar8 == 1) {
          iVar16 = *(int *)(param_1 + 0xe0);
          puVar2 = (ushort *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar16 * 2);
          if (puVar2 != (ushort *)0x0) {
            *puVar2 = uVar19;
          }
          *(int *)(param_1 + 0xe0) = iVar16 + 1;
          lVar12 = (ulonglong)uVar19 * 0x20 + *(longlong *)(param_1 + 0x120);
          if (*(short *)(lVar12 + 10) == 0) {
            lVar10 = *plVar1;
            *(ushort *)(lVar10 + 0x14) = uVar19;
            *(uint *)(lVar10 + 0x10) = *(int *)(lVar12 + 4) << 2 | 2;
            FUN_1455210d0(plVar1);
          }
          else {
            FUN_145521080(plVar1);
          }
          uVar6 = local_48._6_2_;
          uVar21 = (ulonglong)(ushort)local_48._6_2_;
          if (local_48._6_2_ != 0xffff) {
            iVar16 = *(int *)(param_1 + 0xe0);
            puVar2 = (ushort *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar16 * 2);
            if (puVar2 != (ushort *)0x0) {
              *puVar2 = local_48._6_2_;
            }
            *(int *)(param_1 + 0xe0) = iVar16 + 1;
            iVar16 = *(int *)(param_1 + 0xb8) + 1;
            if ((int)(*(uint *)(param_1 + 0xbc) & 0x7fffffff) < iVar16) {
              FUN_145521640(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar16);
            }
            iVar9 = *(int *)(param_1 + 0xb8);
            *(int *)(param_1 + 0xb8) = iVar16;
            puVar15 = (uint *)((longlong)iVar9 * 0x10 + *plVar1);
            *(undefined2 *)(puVar15 + 1) = uVar6;
            *puVar15 = *(int *)(uVar21 * 0x20 + 4 + *(longlong *)(param_1 + 0x120)) << 2 | 2;
            FUN_1455210e0(plVar1);
          }
        }
        else if (uVar8 == 2) {
          lVar12 = *(longlong *)(param_1 + 0x120);
          lVar10 = (local_48._0_8_ >> 0x20 & 0xffff) * 0x20;
          if ((uVar13 == 0xffff) && (*(int *)(lVar10 + lVar12) != *(int *)(lVar10 + 4 + lVar12))) {
            uVar13 = uVar19;
            uVar18 = uVar19;
          }
          uVar19 = *(ushort *)(lVar10 + 0xc + lVar12);
          if (uVar19 == 0xffff) {
            FUN_145521080(plVar1);
          }
          else {
            iVar16 = *(int *)(param_1 + 0xe0);
            puVar2 = (ushort *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar16 * 2);
            if (puVar2 != (ushort *)0x0) {
              *puVar2 = uVar19;
            }
            *(int *)(param_1 + 0xe0) = iVar16 + 1;
            lVar10 = *plVar1;
            *(uint *)(lVar10 + 0x10) = *(int *)((ulonglong)uVar19 * 0x20 + lVar12 + 4) << 2 | 2;
            *(ushort *)(lVar10 + 0x14) = uVar19;
            FUN_1455210d0(plVar1);
          }
        }
      }
    } while (*(int *)(param_1 + 0xb8) != 1);
    if (uVar13 != 0xffff) {
      uVar19 = *(ushort *)((ulonglong)uVar13 * 0x20 + 0xe + *(longlong *)(param_1 + 0x120));
      while (uVar3 = uVar19, uVar3 != 0xffff) {
        piVar20 = (int *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x120));
        iVar16 = (*piVar20 - piVar20[1]) + (*piVar20 - piVar20[1] & 0x8000U) * 2;
        iVar17 = iVar16 >> 0x10;
        iVar14 = (int)(short)iVar16;
        iVar16 = (param_2 - piVar20[1]) + (param_2 - piVar20[1] & 0x8000) * 2;
        iVar11 = (int)(short)iVar16;
        iVar16 = iVar16 >> 0x10;
        iVar9 = iVar11 * iVar17 - iVar16 * iVar14;
        if (iVar9 == 0) {
          iVar9 = iVar16 * iVar17 + iVar11 * iVar14;
        }
        if (iVar9 < 0) break;
        uVar13 = uVar3;
        uVar19 = *(ushort *)((longlong)piVar20 + 0xe);
      }
      *param_3 = uVar3;
      uVar18 = *(ushort *)((ulonglong)uVar18 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x120));
      while (uVar18 != 0xffff) {
        piVar20 = (int *)((ulonglong)uVar18 * 0x20 + *(longlong *)(param_1 + 0x120));
        iVar16 = (piVar20[1] - *piVar20) + (piVar20[1] - *piVar20 & 0x8000U) * 2;
        iVar17 = iVar16 >> 0x10;
        iVar14 = (int)(short)iVar16;
        iVar16 = (param_2 - *piVar20) + (param_2 - *piVar20 & 0x8000) * 2;
        iVar11 = (int)(short)iVar16;
        iVar16 = iVar16 >> 0x10;
        iVar9 = iVar11 * iVar17 - iVar16 * iVar14;
        if (iVar9 == 0) {
          iVar9 = iVar16 * iVar17 + iVar11 * iVar14;
        }
        if (iVar9 < 0) break;
        uVar18 = *(ushort *)(piVar20 + 4);
      }
      *param_4 = uVar18;
      while (uVar13 != uVar18) {
        iVar16 = *(int *)(param_1 + 0xd0);
        lVar12 = (ulonglong)uVar13 * 0x20 + *(longlong *)(param_1 + 0x120);
        puVar2 = (ushort *)(*(longlong *)(param_1 + 200) + (longlong)iVar16 * 2);
        if (puVar2 != (ushort *)0x0) {
          *puVar2 = uVar13;
        }
        *(int *)(param_1 + 0xd0) = iVar16 + 1;
        if (*(ushort *)(lVar12 + 10) < 0xff00) {
          if (*(uint *)(lVar12 + 4) != param_2) {
            iVar16 = *(int *)(param_1 + 0xe0);
            puVar2 = (ushort *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar16 * 2);
            if (puVar2 != (ushort *)0x0) {
              *puVar2 = uVar13;
            }
            *(int *)(param_1 + 0xe0) = iVar16 + 1;
          }
        }
        else {
          *(ushort *)(lVar12 + 10) = *(ushort *)(lVar12 + 10) + 1;
        }
        uVar13 = *(ushort *)(lVar12 + 0x10);
      }
      return 1;
    }
  }
  uVar13 = *(ushort *)(param_1 + 0xc0);
  uVar18 = 0xffff;
  if (uVar13 != 0xffff) {
    uVar18 = 0xffff;
    do {
      uVar19 = uVar13;
      piVar20 = (int *)((ulonglong)uVar19 * 0x20 + *(longlong *)(param_1 + 0x120));
      iVar16 = (piVar20[1] - *piVar20) + (piVar20[1] - *piVar20 & 0x8000U) * 2;
      iVar9 = (param_2 - *piVar20) + (param_2 - *piVar20 & 0x8000) * 2;
      iVar16 = (iVar16 >> 0x10) * (int)(short)iVar9 - (iVar9 >> 0x10) * (int)(short)iVar16;
      if (iVar16 < 1) {
        uVar13 = uVar19;
        if (iVar16 == 0) {
          iVar16 = *(int *)(param_1 + 0xd0);
          puVar2 = (ushort *)(*(longlong *)(param_1 + 200) + (longlong)iVar16 * 2);
          if (puVar2 != (ushort *)0x0) {
            *puVar2 = uVar19;
          }
          *(int *)(param_1 + 0xd0) = iVar16 + 1;
          if (*(ushort *)((longlong)piVar20 + 10) < 0xff00) {
            iVar16 = *(int *)(param_1 + 0xe0);
            puVar2 = (ushort *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar16 * 2);
            if (puVar2 != (ushort *)0x0) {
              *puVar2 = uVar19;
            }
            *(int *)(param_1 + 0xe0) = iVar16 + 1;
          }
          else {
            *(ushort *)((longlong)piVar20 + 10) = *(ushort *)((longlong)piVar20 + 10) + 1;
          }
          uVar13 = *(ushort *)(piVar20 + 4);
        }
        break;
      }
      uVar13 = *(ushort *)(piVar20 + 4);
      uVar18 = uVar19;
    } while (uVar13 != 0xffff);
  }
  *param_3 = uVar18;
  *param_4 = uVar13;
  return 1;
}



// FUNCTION 145525ce0 FUN_145525ce0 body=996 status=ok
// SIG undefined FUN_145525ce0(void)

undefined8 FUN_145525ce0(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  int *piVar20;
  ulonglong uVar21;
  uint *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  ushort *puVar31;
  longlong lVar32;
  int local_res8;
  int local_res10;
  longlong local_res20;
  longlong local_68;
  longlong local_60;
  
  lVar32 = (longlong)*(int *)(param_1 + 0xe0);
  piVar20 = (int *)((ulonglong)**(ushort **)(param_1 + 0xd8) * 0x20 + *(longlong *)(param_1 + 0x120)
                   );
  iVar27 = 0;
  local_res10 = 0;
  iVar9 = *piVar20;
  uVar21 = (ulonglong)(uint)piVar20[1];
  if (0 < lVar32) {
    local_res20 = 0;
    local_68 = 0;
    iVar30 = 0;
    do {
      local_60 = local_68 + 1;
      local_res8 = iVar30 + 1;
      uVar2 = 0;
      if (local_60 < lVar32) {
        uVar19 = (int)uVar21 - iVar9;
        puVar31 = (ushort *)(*(longlong *)(param_1 + 0xd8) + local_60 * 2);
        iVar27 = uVar19 + (uVar19 & 0x8000) * 2;
        do {
          uVar19 = *(uint *)((ulonglong)*puVar31 * 0x20 + 4 + *(longlong *)(param_1 + 0x120));
          uVar26 = uVar19 - iVar9;
          iVar1 = uVar26 + (uVar26 & 0x8000) * 2;
          if ((int)(short)iVar1 * (iVar27 >> 0x10) != (iVar1 >> 0x10) * (int)(short)iVar27) {
            uVar2 = (ulonglong)uVar19;
            break;
          }
          local_res8 = local_res8 + 1;
          local_60 = local_60 + 1;
          puVar31 = puVar31 + 1;
        } while (local_60 < lVar32);
      }
      uVar21 = uVar2;
      lVar18 = local_60;
      if (1 < local_res8 - iVar30) {
        while (lVar18 = lVar18 + -1, lVar18 != local_68) {
          uVar7 = *(ushort *)(*(longlong *)(param_1 + 0xd8) + -2 + lVar18 * 2);
          uVar8 = *(ushort *)(*(longlong *)(param_1 + 0xd8) + lVar18 * 2);
          lVar29 = (ulonglong)uVar7 * 0x20 + *(longlong *)(param_1 + 0x120);
          piVar20 = (int *)((ulonglong)uVar8 * 0x20 + *(longlong *)(param_1 + 0x120));
          iVar27 = *(int *)(lVar29 + 4);
          *(short *)((longlong)piVar20 + 10) = *(short *)((longlong)piVar20 + 10) + 1;
          *piVar20 = iVar27;
          if (piVar20[1] != iVar27) {
            FUN_145521360(param_1,(ulonglong)uVar8);
          }
          lVar25 = *(longlong *)(param_1 + 0xf0);
          iVar27 = (int)~*(uint *)(param_1 + 0x100) >> 5;
          iVar30 = -iVar27;
          lVar24 = (longlong)(int)((uint)uVar7 * iVar30);
          lVar28 = 0;
          uVar2 = lVar25 + lVar24 * 4;
          lVar24 = (longlong)(((iVar30 + lVar24) * 4 - uVar2) + lVar25) >> 2;
          uVar3 = lVar25 + (longlong)(int)-((uint)uVar8 * iVar27) * 4;
          uVar19 = (uint)lVar24;
          if (((0 < (int)uVar19) && (1 < uVar19)) &&
             ((uVar3 + (longlong)(int)(uVar19 - 1) * 4 < uVar2 ||
              (uVar2 + (longlong)(int)(uVar19 - 1) * 4 < uVar3)))) {
            if (0xf < uVar19) {
              uVar26 = uVar19 & 0x8000000f;
              if ((int)uVar26 < 0) {
                uVar26 = (uVar26 - 1 | 0xfffffff0) + 1;
              }
              lVar25 = uVar3 - uVar2;
              puVar22 = (uint *)(uVar2 + 0x10);
              do {
                lVar28 = lVar28 + 0x10;
                puVar5 = (uint *)(lVar25 + -0x10 + (longlong)puVar22);
                uVar10 = puVar5[1];
                uVar11 = puVar5[2];
                uVar12 = puVar5[3];
                puVar4 = (uint *)(lVar25 + (longlong)puVar22);
                uVar13 = *puVar4;
                uVar14 = puVar4[1];
                uVar15 = puVar4[2];
                uVar16 = puVar4[3];
                puVar4 = puVar22 + 0x10;
                puVar22[-4] = *puVar5 ^ puVar22[-4];
                puVar22[-3] = uVar10 ^ puVar22[-3];
                puVar22[-2] = uVar11 ^ puVar22[-2];
                puVar22[-1] = uVar12 ^ puVar22[-1];
                puVar5 = (uint *)(lVar25 + -0x30 + (longlong)puVar4);
                uVar10 = *puVar5;
                uVar11 = puVar5[1];
                uVar12 = puVar5[2];
                uVar17 = puVar5[3];
                *puVar22 = uVar13 ^ *puVar22;
                puVar22[1] = uVar14 ^ puVar22[1];
                puVar22[2] = uVar15 ^ puVar22[2];
                puVar22[3] = uVar16 ^ puVar22[3];
                puVar22[4] = uVar10 ^ puVar22[4];
                puVar22[5] = uVar11 ^ puVar22[5];
                puVar22[6] = uVar12 ^ puVar22[6];
                puVar22[7] = uVar17 ^ puVar22[7];
                puVar5 = (uint *)(lVar25 + -0x20 + (longlong)puVar4);
                uVar10 = puVar5[1];
                uVar11 = puVar5[2];
                uVar12 = puVar5[3];
                puVar22[8] = *puVar5 ^ puVar22[8];
                puVar22[9] = uVar10 ^ puVar22[9];
                puVar22[10] = uVar11 ^ puVar22[10];
                puVar22[0xb] = uVar12 ^ puVar22[0xb];
                puVar22 = puVar4;
              } while (lVar28 < (int)(uVar19 - uVar26));
              if (((byte)lVar24 & 0xf) < 2) goto LAB_145525fde;
            }
            uVar26 = uVar19 & 0x80000001;
            if ((int)uVar26 < 0) {
              uVar26 = (uVar26 - 1 | 0xfffffffe) + 1;
            }
            puVar23 = (undefined8 *)(uVar2 + lVar28 * 4);
            do {
              lVar28 = lVar28 + 2;
              uVar6 = *(undefined8 *)((longlong)puVar23 + (uVar3 - uVar2));
              *puVar23 = CONCAT44((uint)((ulonglong)uVar6 >> 0x20) ^
                                  (uint)((ulonglong)*puVar23 >> 0x20),(uint)uVar6 ^ (uint)*puVar23);
              puVar23 = puVar23 + 1;
            } while (lVar28 < (int)(uVar19 - uVar26));
          }
LAB_145525fde:
          if (lVar28 < (int)uVar19) {
            puVar22 = (uint *)(uVar2 + lVar28 * 4);
            lVar28 = (int)uVar19 - lVar28;
            do {
              *puVar22 = *puVar22 ^ *(uint *)((longlong)puVar22 + (uVar3 - uVar2));
              puVar22 = puVar22 + 1;
              lVar28 = lVar28 + -1;
            } while (lVar28 != 0);
          }
          if (*(short *)(lVar29 + 8) == -1) {
            *(short *)(lVar29 + 8) = (short)piVar20[2];
          }
        }
      }
      *(undefined2 *)(*(longlong *)(param_1 + 0xd8) + local_res20) =
           *(undefined2 *)(*(longlong *)(param_1 + 0xd8) + local_68 * 2);
      local_res20 = local_res20 + 2;
      iVar27 = local_res10 + 1;
      iVar30 = local_res8;
      local_res10 = iVar27;
      local_68 = local_60;
    } while (local_60 < lVar32);
  }
  if ((*(int *)(param_1 + 0xe0) < iVar27) || (iVar27 < *(int *)(param_1 + 0xe0))) {
    *(int *)(param_1 + 0xe0) = iVar27;
  }
  return CONCAT71((int7)(uVar21 >> 8),1);
}



// FUNCTION 1455260d0 FUN_1455260d0 body=608 status=ok
// SIG undefined FUN_1455260d0(void)

undefined8 FUN_1455260d0(longlong param_1,ushort param_2,ushort param_3)

{
  void *_Dst;
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  ushort uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong local_res20;
  
  uVar9 = (ulonglong)param_2;
  if (*(int *)(param_1 + 0xe0) == 0) {
    if (param_2 == 0xffff) {
      *(ushort *)(param_1 + 0xc0) = param_3;
    }
    else {
      *(ushort *)(uVar9 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x120)) = param_3;
    }
    if (param_3 == 0xffff) {
      *(ushort *)(param_1 + 0xc2) = param_2;
      return 1;
    }
    *(ushort *)((ulonglong)param_3 * 0x20 + 0xe + *(longlong *)(param_1 + 0x120)) = param_2;
    return 1;
  }
  if (param_2 == 0xffff) {
    *(undefined2 *)(param_1 + 0xc0) = **(undefined2 **)(param_1 + 0xd8);
  }
  else {
    *(undefined2 *)(uVar9 * 0x20 + 0x10 + *(longlong *)(param_1 + 0x120)) =
         **(undefined2 **)(param_1 + 0xd8);
  }
  local_res20 = 2;
  uVar6 = **(ushort **)(param_1 + 0xd8);
  iVar10 = 0;
  iVar2 = *(int *)(param_1 + 0xe0);
  while( true ) {
    puVar5 = (undefined4 *)((ulonglong)uVar6 * 0x20 + *(longlong *)(param_1 + 0x120));
    uVar7 = (uint)uVar6;
    *(short *)((longlong)puVar5 + 0xe) = (short)uVar9;
    if ((short)uVar9 == -1) {
      iVar8 = -((int)~*(uint *)(param_1 + 0x118) >> 5);
      lVar4 = (longlong)(int)(uVar7 * iVar8);
      _Dst = (void *)(*(longlong *)(param_1 + 0x108) + lVar4 * 4);
      pvVar1 = (void *)(*(longlong *)(param_1 + 0x108) + (iVar8 + lVar4) * 4);
      uVar9 = (ulonglong)((longlong)pvVar1 + (3 - (longlong)_Dst)) >> 2;
      if (pvVar1 < _Dst) {
        uVar9 = 0;
      }
      if (uVar9 != 0) {
        memset(_Dst,0,uVar9 << 2);
      }
      uVar9 = (ulonglong)uVar6;
    }
    FUN_1455250e0(param_1 + 0x108,uVar7,param_1 + 0x108,uVar9,param_1 + 0xf0,uVar7);
    if (iVar10 == iVar2 + -1) break;
    uVar3 = FUN_1455e4580(param_1,*puVar5,uVar6);
    iVar10 = iVar10 + 1;
    *(undefined2 *)((longlong)puVar5 + 0x12) = uVar3;
    uVar9 = (ulonglong)uVar6;
    uVar6 = *(ushort *)(local_res20 + *(longlong *)(param_1 + 0xd8));
    local_res20 = local_res20 + 2;
    *(ushort *)(puVar5 + 4) = uVar6;
  }
  *(ushort *)(puVar5 + 4) = param_3;
  uVar3 = *(undefined2 *)
           (*(longlong *)(param_1 + 0xd8) + (longlong)*(int *)(param_1 + 0xe0) * 2 + -2);
  if (param_3 == 0xffff) {
    *(undefined2 *)(param_1 + 0xc2) = uVar3;
    return 1;
  }
  *(undefined2 *)((ulonglong)param_3 * 0x20 + 0xe + *(longlong *)(param_1 + 0x120)) = uVar3;
  return 1;
}



// FUNCTION 145526330 FUN_145526330 body=625 status=ok
// SIG undefined FUN_145526330(void)

undefined8 FUN_145526330(longlong param_1,ushort param_2,undefined4 param_3)

{
  longlong lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  ushort uVar7;
  longlong lVar8;
  uint local_res8 [2];
  ushort local_res20 [4];
  
  iVar3 = *(int *)(param_1 + 0xd0);
  if (iVar3 == 0) {
    return 1;
  }
  uVar6 = local_res8[0] & 0xffff0001 | 1;
  uVar7 = 0xffff;
  uVar4 = uVar6;
  if (0 < iVar3) {
    lVar8 = 0;
    uVar4 = local_res8[0];
    do {
      lVar5 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 200) + lVar8 * 2) * 0x20 +
              *(longlong *)(param_1 + 0x120);
      uVar2 = *(ushort *)(lVar5 + 8);
      if (uVar2 == 0xffff) {
        uVar4 = uVar4 & 0xffff0001 | 1;
      }
      else {
        uVar4 = (uVar2 & 0x3fff) << 2 | uVar4 & 0xffff0000;
      }
      if (param_2 == 0xffff) {
        uVar2 = 0xffff;
      }
      else if (lVar8 == 0) {
        FUN_145522110();
        uVar2 = local_res20[0];
      }
      else {
        FUN_145521f80(param_1,*(longlong *)(param_1 + 0x130) + (ulonglong)param_2 * 8,param_3,uVar6,
                      uVar4,local_res8,local_res20);
        uVar2 = local_res20[0];
        if (uVar7 != 0xffff) {
          if ((ushort)local_res8[0] != 0xffff) {
            lVar1 = *(longlong *)(param_1 + 0x140) + (ulonglong)uVar7 * 8;
            uVar6 = *(uint *)(lVar1 + 4) & 0xfffffffe | 2;
            *(uint *)(lVar1 + 4) = ((local_res8[0] & 0xffff) << 2 ^ uVar6) & 0xfffc ^ uVar6;
            lVar1 = *(longlong *)(param_1 + 0x140) + (ulonglong)(ushort)local_res8[0] * 8;
            uVar6 = *(uint *)(lVar1 + 4) & 0xfffffffe | 2;
            *(uint *)(lVar1 + 4) = ((uint)uVar7 << 2 ^ uVar6) & 0xfffc ^ uVar6;
          }
        }
      }
      uVar7 = uVar2;
      param_2 = *(ushort *)(lVar5 + 0x12);
      lVar8 = lVar8 + 1;
      uVar6 = uVar4;
    } while (lVar8 < iVar3);
  }
  if ((param_2 != 0xffff) &&
     (FUN_145522200(param_1,*(longlong *)(param_1 + 0x130) + (ulonglong)param_2 * 8,param_3,uVar4,
                    local_res8), uVar7 != 0xffff)) {
    if ((ushort)local_res8[0] != 0xffff) {
      lVar8 = *(longlong *)(param_1 + 0x140) + (ulonglong)uVar7 * 8;
      uVar4 = *(uint *)(lVar8 + 4) & 0xfffffffe | 2;
      *(uint *)(lVar8 + 4) = ((local_res8[0] & 0xffff) << 2 ^ uVar4) & 0xfffc ^ uVar4;
      lVar8 = *(longlong *)(param_1 + 0x140) + (ulonglong)(ushort)local_res8[0] * 8;
      uVar4 = *(uint *)(lVar8 + 4) & 0xfffffffe | 2;
      *(uint *)(lVar8 + 4) = ((uint)uVar7 << 2 ^ uVar4) & 0xfffc ^ uVar4;
    }
  }
  return 1;
}



// FUNCTION 1455265b0 FUN_1455265b0 body=927 status=ok
// SIG undefined FUN_1455265b0(void)

undefined8 FUN_1455265b0(longlong param_1,ushort *param_2,undefined2 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  
  plVar1 = (longlong *)(param_1 + 0xd8);
  uVar16 = (ulonglong)*param_2;
  plVar2 = (longlong *)(param_1 + 0x120);
  puVar14 = (uint *)((ulonglong)*(ushort *)*plVar1 * 0x20 + *plVar2);
  iVar17 = *(int *)(*(longlong *)(param_1 + 0x150) +
                   (ulonglong)
                   *(ushort *)
                    (*(longlong *)(param_1 + 0x140) +
                    (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x130) + uVar16 * 8) * 8) * 4);
  uVar4 = *puVar14;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x150) +
                  (ulonglong)
                  *(ushort *)
                   (*(longlong *)(param_1 + 0x140) +
                   (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x130) + uVar16 * 8 + 2) * 8) * 4)
  ;
  iVar8 = (uVar4 - iVar17) + (uVar4 - iVar17 & 0x8000) * 2;
  iVar15 = iVar8 >> 0x10;
  iVar13 = (puVar14[1] - iVar17) + (puVar14[1] - iVar17 & 0x8000) * 2;
  iVar8 = (int)(short)iVar8;
  piVar11 = (int *)(*plVar2 + 4 +
                   (ulonglong)((ushort *)*plVar1)[(longlong)*(int *)(param_1 + 0xe0) + -1] * 0x20);
  if ((short)iVar13 * iVar15 - (iVar13 >> 0x10) * iVar8 < 1) {
    uVar6 = FUN_1455218a0(param_1,uVar16,uVar4);
    *param_3 = uVar6;
    uVar10 = *piVar11 - iVar17;
    iVar13 = uVar10 + (uVar10 & 0x8000) * 2;
    if ((short)iVar13 * iVar15 - (iVar13 >> 0x10) * iVar8 < 0) {
      iVar8 = *(int *)(param_1 + 0x128) + 1;
      uVar7 = *(ushort *)(param_1 + 0x128);
      if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar8) {
        FUN_145524ec0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
      }
      *(int *)(param_1 + 0x128) = iVar8;
      FUN_145522810(param_1 + 0x108,uVar7 + 1);
      FUN_1455228a0(param_1 + 0xf0,uVar7 + 1);
      puVar14 = (uint *)((ulonglong)uVar7 * 0x20 + *plVar2);
      *puVar14 = uVar4;
      *(undefined4 *)((longlong)puVar14 + 10) = 0xffffff00;
      puVar14[1] = uVar4 & 0xffff3fff | 0x3fff;
      *(undefined2 *)((longlong)puVar14 + 0x12) = uVar6;
      iVar8 = *(int *)(param_1 + 0xe0) + 1;
      if ((int)(*(uint *)(param_1 + 0xe4) & 0x7fffffff) < iVar8) {
        FUN_144c44830(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
      }
      puVar3 = (ushort *)(*plVar1 + (longlong)*(int *)(param_1 + 0xe0) * 2);
      if (puVar3 != (ushort *)0x0) {
        *puVar3 = uVar7;
      }
      *(int *)(param_1 + 0xe0) = iVar8;
    }
  }
  else {
    iVar8 = (uVar4 - iVar5) + (uVar4 - iVar5 & 0x8000) * 2;
    uVar10 = *piVar11 - iVar5;
    iVar17 = (int)(short)iVar8;
    iVar8 = iVar8 >> 0x10;
    iVar13 = uVar10 + (uVar10 & 0x8000) * 2;
    if ((short)iVar13 * iVar8 - (iVar13 >> 0x10) * iVar17 < 0) {
      FUN_145521c60(param_1,uVar16,uVar4,param_2,param_3);
    }
    else {
      uVar7 = FUN_145521a70();
      *param_2 = uVar7;
      iVar13 = (puVar14[1] - iVar5) + (puVar14[1] - iVar5 & 0x8000) * 2;
      if (0 < (short)iVar13 * iVar8 - (iVar13 >> 0x10) * iVar17) {
        iVar8 = *(int *)(param_1 + 0x128) + 1;
        uVar7 = *(ushort *)(param_1 + 0x128);
        if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar8) {
          FUN_145524ec0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        *(int *)(param_1 + 0x128) = iVar8;
        FUN_145522810(param_1 + 0x108,uVar7 + 1);
        FUN_1455228a0(param_1 + 0xf0,uVar7 + 1);
        puVar14 = (uint *)((ulonglong)uVar7 * 0x20 + *plVar2);
        *puVar14 = uVar4;
        *(undefined4 *)((longlong)puVar14 + 10) = 0xffffff00;
        puVar14[1] = (uVar4 & 0xffff0000) + 0x10000;
        *(undefined2 *)((longlong)puVar14 + 0x12) = 0xffff;
        iVar8 = *(int *)(param_1 + 0xe0);
        iVar13 = iVar8 + 1;
        if ((int)(*(uint *)(param_1 + 0xe4) & 0x7fffffff) < iVar13) {
          FUN_144ca7300(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar13);
        }
        puVar3 = (ushort *)*plVar1;
        if (0 < iVar8) {
          puVar9 = puVar3 + 1;
          if (puVar9 < puVar3) {
            lVar12 = (longlong)iVar8 * 2;
            if (lVar12 != 0) {
              lVar12 = (lVar12 - 1U >> 1) + 1;
              do {
                *puVar9 = puVar9[-1];
                puVar9 = puVar9 + 1;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
          }
          else if (puVar9 != puVar3) {
            FUN_144bfb260(puVar9,puVar3,(longlong)iVar8 * 2);
          }
        }
        if (puVar3 != (ushort *)0x0) {
          *puVar3 = uVar7;
        }
        *(int *)(param_1 + 0xe0) = iVar13;
      }
    }
  }
  return 1;
}



// FUNCTION 145526950 FUN_145526950 body=400 status=ok
// SIG undefined FUN_145526950(void)

undefined8
FUN_145526950(longlong param_1,short *param_2,undefined2 *param_3,uint param_4,undefined1 *param_5,
             undefined1 *param_6)

{
  longlong *plVar1;
  ushort *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  uint *puVar5;
  int iVar6;
  longlong local_38;
  undefined1 *local_30;
  
  if (*param_2 != -1) {
    plVar1 = (longlong *)(param_1 + 0xd8);
    if (*(int *)(param_1 + 0xe0) == 0) {
      iVar6 = *(int *)(param_1 + 0x128) + 1;
      uVar3 = *(ushort *)(param_1 + 0x128);
      uVar4 = *param_3;
      if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar6) {
        FUN_145524ec0(param_1 + 0x120,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      *(int *)(param_1 + 0x128) = iVar6;
      FUN_145522810(param_1 + 0x108,uVar3 + 1);
      FUN_1455228a0(param_1 + 0xf0,uVar3 + 1);
      puVar5 = (uint *)((ulonglong)uVar3 * 0x20 + *(longlong *)(param_1 + 0x120));
      *puVar5 = param_4;
      puVar5[1] = param_4 & 0xffff | 0x3fff0000;
      *(undefined2 *)((longlong)puVar5 + 0x12) = uVar4;
      *(undefined4 *)((longlong)puVar5 + 10) = 0xffffff00;
      iVar6 = *(int *)(param_1 + 0xe0) + 1;
      if ((int)(*(uint *)(param_1 + 0xe4) & 0x7fffffff) < iVar6) {
        FUN_144c44830(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      puVar2 = (ushort *)(*plVar1 + (longlong)*(int *)(param_1 + 0xe0) * 2);
      if (puVar2 != (ushort *)0x0) {
        *puVar2 = uVar3;
      }
      *(int *)(param_1 + 0xe0) = iVar6;
      *param_5 = 1;
    }
    else if (*(int *)(param_1 + 0xd0) == 0) {
      *param_6 = 0;
      iVar6 = *(int *)(param_1 + 0xe0);
      if ((iVar6 != 0) && (1 < iVar6)) {
        local_30 = param_6;
        local_38 = param_1;
        FUN_1455271a0(*plVar1,0,iVar6 + -1,&local_38);
      }
      *param_5 = 1;
      FUN_1455265b0(param_1,param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 145526ae0 FUN_145526ae0 body=952 status=ok
// SIG undefined FUN_145526ae0(void)

undefined8
FUN_145526ae0(longlong param_1,ushort *param_2,ushort *param_3,int *param_4,int *param_5,
             uint param_6)

{
  longlong *plVar1;
  longlong *plVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  uint *puVar8;
  uint uVar9;
  ushort *puVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  
  plVar1 = (longlong *)(param_1 + 0xd8);
  uVar3 = *param_2;
  if (uVar3 != 0xffff) {
    plVar2 = (longlong *)(param_1 + 0x120);
    piVar11 = (int *)((ulonglong)*(ushort *)(*plVar1 + -2 + (longlong)*(int *)(param_1 + 0xe0) * 2)
                      * 0x20 + *plVar2);
    iVar5 = piVar11[1];
    iVar6 = *piVar11;
    uVar9 = iVar5 - iVar6;
    iVar14 = uVar9 + (uVar9 & 0x8000) * 2;
    iVar13 = (param_4[1] - *param_4) + (param_4[1] - *param_4 & 0x8000U) * 2;
    if ((iVar13 >> 0x10) * (int)(short)iVar14 < (iVar14 >> 0x10) * (int)(short)iVar13) {
      iVar14 = *(int *)(*(longlong *)(param_1 + 0x150) +
                       (ulonglong)
                       *(ushort *)
                        (*(longlong *)(param_1 + 0x140) +
                        (ulonglong)
                        *(ushort *)(*(longlong *)(param_1 + 0x130) + (ulonglong)uVar3 * 8) * 8) * 4)
      ;
      uVar15 = iVar6 - iVar14;
      uVar9 = iVar5 - iVar14;
      iVar14 = uVar15 + (uVar15 & 0x8000) * 2;
      iVar13 = uVar9 + (uVar9 & 0x8000) * 2;
      if ((iVar14 >> 0x10) * (int)(short)iVar13 - (iVar13 >> 0x10) * (int)(short)iVar14 < 0) {
        iVar14 = *(int *)(param_1 + 0x128) + 1;
        uVar4 = *(ushort *)(param_1 + 0x128);
        if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar14) {
          FUN_145524ec0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar14);
        }
        *(int *)(param_1 + 0x128) = iVar14;
        FUN_145522810(param_1 + 0x108,uVar4 + 1);
        FUN_1455228a0(param_1 + 0xf0,uVar4 + 1);
        puVar8 = (uint *)((ulonglong)uVar4 * 0x20 + *plVar2);
        puVar8[1] = param_6 & 0xffff3fff | 0x3fff;
        *puVar8 = param_6;
        *(undefined4 *)((longlong)puVar8 + 10) = 0xffffff00;
        *(ushort *)((longlong)puVar8 + 0x12) = uVar3;
        iVar14 = *(int *)(param_1 + 0xe0) + 1;
        if ((int)(*(uint *)(param_1 + 0xe4) & 0x7fffffff) < iVar14) {
          FUN_144c44830(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar14);
        }
        puVar7 = (ushort *)(*plVar1 + (longlong)*(int *)(param_1 + 0xe0) * 2);
        if (puVar7 != (ushort *)0x0) {
          *puVar7 = uVar4;
        }
        *(int *)(param_1 + 0xe0) = iVar14;
      }
      else {
        FUN_145522330(param_1,param_2);
      }
    }
  }
  if (*param_3 != 0xffff) {
    plVar2 = (longlong *)(param_1 + 0x120);
    piVar11 = (int *)((ulonglong)*(ushort *)*plVar1 * 0x20 + *plVar2);
    iVar5 = piVar11[1];
    iVar6 = *piVar11;
    iVar14 = (param_5[1] - *param_5) + (param_5[1] - *param_5 & 0x8000U) * 2;
    uVar9 = iVar5 - iVar6;
    iVar13 = uVar9 + (uVar9 & 0x8000) * 2;
    if ((iVar13 >> 0x10) * (int)(short)iVar14 < (iVar14 >> 0x10) * (int)(short)iVar13) {
      iVar14 = *(int *)(*(longlong *)(param_1 + 0x150) +
                       (ulonglong)
                       *(ushort *)
                        (*(longlong *)(param_1 + 0x140) +
                        (ulonglong)
                        *(ushort *)(*(longlong *)(param_1 + 0x130) + 2 + (ulonglong)*param_3 * 8) *
                        8) * 4);
      uVar9 = iVar6 - iVar14;
      uVar15 = iVar5 - iVar14;
      iVar14 = uVar9 + (uVar9 & 0x8000) * 2;
      iVar13 = uVar15 + (uVar15 & 0x8000) * 2;
      if ((iVar14 >> 0x10) * (int)(short)iVar13 - (iVar13 >> 0x10) * (int)(short)iVar14 < 1) {
        FUN_1455224a0(param_1,param_3);
      }
      else {
        iVar14 = *(int *)(param_1 + 0x128) + 1;
        uVar3 = *(ushort *)(param_1 + 0x128);
        if ((int)(*(uint *)(param_1 + 300) & 0x7fffffff) < iVar14) {
          FUN_145524ec0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar14);
        }
        *(int *)(param_1 + 0x128) = iVar14;
        FUN_145522810(param_1 + 0x108,uVar3 + 1);
        FUN_1455228a0(param_1 + 0xf0,uVar3 + 1);
        puVar8 = (uint *)((ulonglong)uVar3 * 0x20 + *plVar2);
        *puVar8 = param_6;
        *(undefined4 *)((longlong)puVar8 + 10) = 0xffffff00;
        puVar8[1] = (param_6 & 0xffff0000) + 0x10000;
        *(undefined2 *)((longlong)puVar8 + 0x12) = 0xffff;
        iVar14 = *(int *)(param_1 + 0xe0);
        iVar13 = iVar14 + 1;
        if ((int)(*(uint *)(param_1 + 0xe4) & 0x7fffffff) < iVar13) {
          FUN_144ca7300(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar13);
        }
        puVar7 = (ushort *)*plVar1;
        if (0 < iVar14) {
          puVar10 = puVar7 + 1;
          if (puVar10 < puVar7) {
            lVar12 = (longlong)iVar14 * 2;
            if (lVar12 != 0) {
              lVar12 = (lVar12 - 1U >> 1) + 1;
              do {
                *puVar10 = puVar10[-1];
                puVar10 = puVar10 + 1;
                lVar12 = lVar12 + -1;
              } while (lVar12 != 0);
            }
          }
          else if (puVar10 != puVar7) {
            FUN_144bfb260(puVar10,puVar7,(longlong)iVar14 * 2);
          }
        }
        if (puVar7 != (ushort *)0x0) {
          *puVar7 = uVar3;
        }
        *(int *)(param_1 + 0xe0) = iVar13;
      }
    }
  }
  return 1;
}



// FUNCTION 145526ea0 FUN_145526ea0 body=755 status=ok
// SIG undefined FUN_145526ea0(void)

undefined8 FUN_145526ea0(longlong param_1,ushort param_2,ushort param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint local_res10;
  
  puVar9 = (uint *)((ulonglong)param_2 * 0x20 + *(longlong *)(param_1 + 0x120));
  puVar10 = (uint *)((ulonglong)param_3 * 0x20 + *(longlong *)(param_1 + 0x120));
  uVar2 = puVar9[1];
  uVar8 = puVar10[1];
  uVar3 = *puVar10;
  uVar4 = *puVar9;
  if (uVar2 != uVar8) {
    iVar7 = (uVar2 - uVar4) + (uVar2 - uVar4 & 0x8000) * 2;
    iVar16 = (int)(short)iVar7;
    iVar7 = iVar7 >> 0x10;
    iVar1 = (uVar8 - uVar4) + (uVar8 - uVar4 & 0x8000) * 2;
    uVar14 = (short)iVar1 * iVar7 - (iVar1 >> 0x10) * iVar16;
    if ((uVar14 != 0) &&
       ((iVar1 = (uVar3 - uVar4) + (uVar3 - uVar4 & 0x8000) * 2,
        uVar12 = (short)iVar1 * iVar7 - (iVar1 >> 0x10) * iVar16, uVar12 == 0 ||
        ((int)(uVar12 ^ uVar14) < 0)))) {
      iVar7 = (uVar8 - uVar3) + (uVar8 - uVar3 & 0x8000) * 2;
      iVar16 = (int)(short)iVar7;
      iVar7 = iVar7 >> 0x10;
      iVar1 = (uVar2 - uVar3) + (uVar2 - uVar3 & 0x8000) * 2;
      uVar14 = (short)iVar1 * iVar7 - (iVar1 >> 0x10) * iVar16;
      if ((uVar14 != 0) &&
         ((iVar1 = (uVar4 - uVar3) + (uVar4 - uVar3 & 0x8000) * 2,
          uVar12 = (short)iVar1 * iVar7 - (iVar1 >> 0x10) * iVar16, uVar12 == 0 ||
          ((int)(uVar12 ^ uVar14) < 0)))) {
        uVar14 = uVar12 - uVar14;
        uVar15 = (ulonglong)(int)(uVar14 - ((int)uVar14 >> 0x1f | 1U));
        uVar11 = (ulonglong)(uVar2 >> 0x10) - (ulonglong)(uVar4 >> 0x10);
        uVar13 = (ulonglong)(ushort)uVar2 - (ulonglong)(uVar4 & 0xffff);
        uVar8 = ((uVar4 >> 0x10) +
                (int)((longlong)
                      ((longlong)(int)uVar12 * uVar11 -
                      ((longlong)((longlong)(int)(uVar12 ^ uVar14) ^ uVar11) >> 0x1f & uVar15)) /
                     (longlong)(int)uVar14)) * 0x10000 |
                (int)((longlong)
                      ((longlong)(int)uVar12 * uVar13 -
                      ((longlong)((longlong)(int)(uVar12 ^ uVar14) ^ uVar13) >> 0x1f & uVar15)) /
                     (longlong)(int)uVar14) + (uVar4 & 0xffff);
        goto LAB_145527161;
      }
    }
  }
  bVar5 = false;
  if (*(ushort *)((longlong)puVar9 + 10) < 0xff00) {
    if (*(ushort *)((longlong)puVar10 + 10) < 0xff00) {
      return 1;
    }
    iVar7 = (uVar2 - uVar4) + (uVar2 - uVar4 & 0x8000) * 2;
    iVar1 = (uVar8 - uVar4) + (uVar8 - uVar4 & 0x8000) * 2;
    if ((iVar7 >> 0x10) * (int)(short)iVar1 != (iVar1 >> 0x10) * (int)(short)iVar7) {
      return 1;
    }
    if (uVar8 <= uVar4) {
      return 1;
    }
    if (uVar2 <= uVar8) {
      return 1;
    }
  }
  else {
    iVar7 = (uVar8 - uVar3) + (uVar8 - uVar3 & 0x8000) * 2;
    iVar1 = (uVar2 - uVar3) + (uVar2 - uVar3 & 0x8000) * 2;
    if ((((iVar7 >> 0x10) * (int)(short)iVar1 == (iVar1 >> 0x10) * (int)(short)iVar7) &&
        (uVar3 < uVar2)) && (uVar2 < uVar8)) {
      bVar6 = true;
      bVar5 = true;
    }
    else {
      bVar6 = false;
    }
    uVar8 = uVar2;
    if (!bVar6) {
      uVar8 = local_res10;
    }
    if (!bVar5) {
      return 1;
    }
  }
LAB_145527161:
  FUN_145521480(param_1,(ulonglong)param_2,(ulonglong)param_3,uVar8);
  return 1;
}



// FUNCTION 1455271a0 FUN_1455271a0 body=515 status=ok
// SIG undefined FUN_1455271a0(void)

void FUN_1455271a0(longlong param_1,uint param_2,int param_3,longlong *param_4)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  undefined2 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  bool bVar17;
  uint local_res10;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar6 = (ulonglong)(int)param_2;
  lVar5 = *param_4;
  uVar8 = uVar6;
  local_res10 = param_2;
  do {
    uVar12 = (ulonglong)param_3;
    uVar10 = uVar6 & 0xffffffff;
    uVar2 = *(ushort *)(param_1 + ((longlong)((int)uVar6 + param_3) >> 1) * 2);
    iVar16 = param_3;
LAB_145527200:
    do {
      uVar3 = *(ushort *)(param_1 + uVar8 * 2);
      uVar9 = (uint)uVar10;
      if (uVar3 != uVar2) {
        lVar14 = *(longlong *)(lVar5 + 0x120);
        piVar13 = (int *)((ulonglong)uVar3 * 0x20 + lVar14);
        lVar14 = (ulonglong)uVar2 * 0x20 + lVar14;
        iVar11 = (piVar13[1] - *piVar13) + (piVar13[1] - *piVar13 & 0x8000U) * 2;
        uVar7 = *(int *)(lVar14 + 4) - *piVar13;
        iVar1 = uVar7 + (uVar7 & 0x8000) * 2;
        iVar11 = (iVar11 >> 0x10) * (int)(short)iVar1 - (iVar1 >> 0x10) * (int)(short)iVar11;
        if (iVar11 == 0) {
          *(undefined1 *)param_4[1] = 1;
          bVar17 = (uint)piVar13[1] < *(uint *)(lVar14 + 4);
        }
        else {
          bVar17 = 0 < iVar11;
        }
        if (bVar17) {
          uVar10 = (ulonglong)(uVar9 + 1);
          uVar8 = uVar8 + 1;
          goto LAB_145527200;
        }
      }
      while( true ) {
        uVar3 = *(ushort *)(param_1 + uVar12 * 2);
        if (uVar2 == uVar3) break;
        lVar14 = *(longlong *)(lVar5 + 0x120);
        lVar15 = (ulonglong)uVar3 * 0x20 + lVar14;
        piVar13 = (int *)((ulonglong)uVar2 * 0x20 + lVar14);
        iVar11 = (piVar13[1] - *piVar13) + (piVar13[1] - *piVar13 & 0x8000U) * 2;
        uVar7 = *(int *)(lVar15 + 4) - *piVar13;
        iVar1 = uVar7 + (uVar7 & 0x8000) * 2;
        iVar11 = (iVar11 >> 0x10) * (int)(short)iVar1 - (iVar1 >> 0x10) * (int)(short)iVar11;
        if (iVar11 == 0) {
          *(undefined1 *)param_4[1] = 1;
          bVar17 = (uint)piVar13[1] < *(uint *)(lVar15 + 4);
        }
        else {
          bVar17 = 0 < iVar11;
        }
        if (!bVar17) break;
        iVar16 = iVar16 + -1;
        uVar12 = uVar12 - 1;
      }
      if ((longlong)uVar12 < (longlong)uVar8) break;
      if (uVar12 != uVar8) {
        uVar4 = *(undefined2 *)(param_1 + uVar12 * 2);
        *(undefined2 *)(param_1 + uVar12 * 2) = *(undefined2 *)(param_1 + uVar8 * 2);
        *(undefined2 *)(param_1 + uVar8 * 2) = uVar4;
      }
      iVar16 = iVar16 + -1;
      uVar12 = uVar12 - 1;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar8 = uVar8 + 1;
    } while ((longlong)uVar8 <= (longlong)uVar12);
    if ((int)local_res10 < iVar16) {
      local_38 = (undefined4)*param_4;
      uStack_34 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_30 = (undefined4)param_4[1];
      uStack_2c = *(undefined4 *)((longlong)param_4 + 0xc);
      FUN_1455271a0(param_1,local_res10,iVar16,&local_38);
    }
    if (param_3 <= (int)uVar9) {
      return;
    }
    uVar6 = (ulonglong)uVar9;
    local_res10 = uVar9;
  } while( true );
}



// FUNCTION 1455273c0 FUN_1455273c0 body=117 status=ok
// SIG undefined FUN_1455273c0(void)

void FUN_1455273c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x138);
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    cVar5 = FUN_1455276a0(param_1,uVar3 & 0xffff);
    if (cVar5 == '\0') {
      iVar4 = *(int *)(param_1 + 0x138);
      uVar6 = iVar4 - 1;
      *(uint *)(param_1 + 0x138) = uVar6;
      if (uVar6 != (uVar3 & 0xffff)) {
        puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + ((longlong)iVar4 + -1) * 8);
        puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar3 & 0xffff) * 8);
        if (puVar2 != puVar1) {
          *puVar2 = *puVar1;
        }
      }
    }
  }
  return;
}



// FUNCTION 145527440 FUN_145527440 body=490 status=ok
// SIG undefined FUN_145527440(void)

undefined8 FUN_145527440(longlong param_1,ushort *param_2,longlong *param_3,longlong param_4)

{
  short *psVar1;
  undefined2 *puVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong local_res8;
  longlong local_res10;
  
  iVar4 = *(int *)(param_4 + 0x10);
  lVar11 = (longlong)*(int *)(param_1 + 0x148);
  uVar8 = (ulonglong)_tls_index;
  *(int *)(param_4 + 0x10) = iVar4 + 1;
  psVar1 = (short *)(*(longlong *)(param_4 + 8) + (longlong)iVar4 * 6);
  psVar1[0] = 0;
  psVar1[1] = 0;
  psVar1[2] = param_2[2];
  lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar8 * 8);
  if (*(char *)(lVar10 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar10 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar10 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar10 + 0xf0) = lVar7;
  }
  lVar10 = *(longlong *)(*(longlong *)(lVar7 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar10 + 8) != 0) {
    lVar10 = 0;
  }
  local_res10 = lVar11;
  if (lVar10 == 0) {
    lVar7 = (*DAT_14c787670)(1,&local_res10,0x40);
  }
  else {
    local_res8 = lVar11 + 0x3fU & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(lVar10 + 0x28)) {
      lVar7 = *(longlong *)(lVar10 + 0x38);
      if (lVar7 + local_res8 <= *(ulonglong *)(lVar10 + 0x40)) {
        *(ulonglong *)(lVar10 + 0x38) = lVar7 + local_res8;
        goto LAB_145527553;
      }
    }
    lVar7 = FUN_144b454a0(lVar10,&local_res8);
  }
LAB_145527553:
  uVar3 = *param_2;
  uVar8 = (ulonglong)uVar3;
  do {
    iVar4 = *(int *)(param_4 + 0x30);
    *(int *)(param_4 + 0x30) = iVar4 + 1;
    lVar5 = *(longlong *)(param_4 + 0x28);
    *psVar1 = *psVar1 + 1;
    puVar2 = (undefined2 *)(lVar5 + (longlong)iVar4 * 8);
    uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x140) + (uVar8 & 0xffff) * 8);
    *puVar2 = (short)uVar6;
    uVar9 = (uint)(uVar6 >> 0x20);
    uVar12 = uVar9 & 3;
    uVar9 = uVar9 >> 2 & 0x3fff;
    if (uVar12 == 2) {
      uVar9 = *(uint *)(*param_3 + (ulonglong)uVar9 * 4);
    }
    uVar8 = uVar6 >> 0x10;
    *(uint *)(puVar2 + 2) = uVar9;
    *(byte *)(puVar2 + 1) = (byte)uVar12 | 4;
  } while ((ushort)(uVar6 >> 0x10) != uVar3);
  if (lVar10 == 0) {
    (*DAT_14c787678)(CONCAT71((uint7)(uVar6 >> 0x18),1),lVar7,lVar11);
  }
  else {
    uVar8 = lVar11 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar10 + 0x28) < uVar8) || (uVar8 + lVar7 != *(longlong *)(lVar10 + 0x38)))
    {
      FUN_144be8550(lVar10,lVar7);
    }
    else {
      *(longlong *)(lVar10 + 0x38) = lVar7;
      if (*(longlong *)(lVar10 + 0x48) == lVar7) {
        FUN_144be8430(lVar10);
      }
    }
  }
  return 1;
}



// FUNCTION 145527630 FUN_145527630 body=111 status=ok
// SIG undefined FUN_145527630(void)

void FUN_145527630(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = *(int *)(param_1 + 0x148);
  if (((int)param_2[1] < iVar3) || (iVar3 < (int)param_2[1])) {
    *(int *)(param_2 + 1) = iVar3;
  }
  iVar3 = *(int *)(param_1 + 0x138);
  uVar4 = 0;
  uVar5 = uVar4;
  if (0 < iVar3) {
    do {
      uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x130) + (ulonglong)(uVar5 & 0xffff) * 8);
      uVar2 = uVar1;
      do {
        *(uint *)(*param_2 + (ulonglong)uVar2 * 4) = uVar4;
        uVar4 = uVar4 + 1;
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 0x140) + 2 + (ulonglong)uVar2 * 8);
      } while (uVar2 != uVar1);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar3);
  }
  return;
}



// FUNCTION 1455276a0 FUN_1455276a0 body=654 status=ok
// SIG undefined FUN_1455276a0(void)

ulonglong FUN_1455276a0(longlong param_1,ushort param_2)

{
  ulonglong *puVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  ushort uVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ushort uVar19;
  int iVar20;
  ushort uVar21;
  ulonglong uVar22;
  ushort uVar23;
  bool bVar24;
  ushort local_res8;
  
  puVar1 = (ulonglong *)(param_1 + 0x130);
  lVar5 = (ulonglong)param_2 * 8;
LAB_1455276d0:
  do {
    lVar15 = *(longlong *)(param_1 + 0x140);
    uVar13 = *puVar1;
    uVar7 = *(ushort *)(lVar5 + uVar13);
    uVar19 = *(ushort *)(lVar15 + 2 + (ulonglong)uVar7 * 8);
    puVar2 = (ushort *)(lVar15 + (ulonglong)uVar19 * 8);
    if (uVar19 == uVar7) {
LAB_14552791b:
      return uVar13 & 0xffffffffffffff00;
    }
    uVar18 = (ulonglong)puVar2[1];
    bVar24 = (puVar2[2] & 3) == 0;
    uVar14 = *puVar2;
    bVar6 = *(byte *)(lVar15 + 4 + uVar18 * 8);
    uVar23 = *(ushort *)(lVar15 + 2 + uVar18 * 8);
    uVar21 = *(ushort *)(lVar15 + uVar18 * 8);
    bVar12 = false;
    uVar17 = (ulonglong)uVar19;
    uVar19 = uVar7;
    local_res8 = uVar7;
    do {
      bVar11 = (bVar6 & 3) == 0;
      lVar3 = lVar15 + (ulonglong)uVar23 * 8;
      uVar8 = *(ushort *)(lVar15 + (ulonglong)uVar23 * 8);
      uVar13 = (ulonglong)uVar8;
      uVar16 = (ushort)uVar17;
      if (uVar14 == uVar8) {
        if ((!bVar24) || (!bVar11)) {
          uVar9 = *(uint *)(lVar15 + 4 + uVar17 * 8);
          lVar4 = lVar15 + uVar18 * 8;
          if (((byte)uVar9 & 3) == 2) {
            *(undefined4 *)(lVar15 + 4 + (ulonglong)(uVar9 >> 2 & 0x3fff) * 8) =
                 *(undefined4 *)(lVar4 + 4);
          }
          uVar9 = *(uint *)(lVar4 + 4);
          uVar13 = (ulonglong)uVar9 & 0xffffffffffffff03;
          if ((char)uVar13 == '\x02') {
            uVar10 = *(uint *)(lVar15 + uVar17 * 8 + 4);
            uVar13 = (ulonglong)uVar10;
            *(uint *)(*(longlong *)(param_1 + 0x140) + 4 + (ulonglong)(uVar9 >> 2 & 0x3fff) * 8) =
                 uVar10;
          }
        }
        if (uVar16 == uVar23) {
          if ((!bVar24) || (!bVar11)) goto LAB_14552791b;
          goto LAB_145527917;
        }
        uVar13 = *(ulonglong *)(param_1 + 0x140);
        bVar12 = true;
        *(ushort *)(uVar13 + 2 + (ulonglong)uVar19 * 8) = uVar23;
        if ((bVar24) && (bVar11)) {
          *(ushort *)(*(longlong *)(param_1 + 0x140) + 2 + uVar18 * 8) = uVar16;
          iVar20 = *(int *)(param_1 + 0x138) + 1;
          uVar17 = (ulonglong)*(ushort *)(param_1 + 0x138);
          if ((int)(*(uint *)(param_1 + 0x13c) & 0x7fffffff) < iVar20) {
            FUN_145522610(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar20);
          }
          *(int *)(param_1 + 0x138) = iVar20;
          uVar22 = *puVar1;
          *(ushort *)(uVar22 + uVar17 * 8) = uVar16;
          *(ushort *)(uVar22 + 2 + uVar17 * 8) = uVar16;
          uVar13 = *puVar1;
          *(undefined2 *)(uVar22 + uVar17 * 8 + 4) = *(undefined2 *)(lVar5 + 4 + uVar13);
          uVar19 = local_res8;
        }
        if ((uVar16 == uVar7) || ((ushort)uVar18 == uVar7)) {
          uVar13 = *puVar1;
          *(ushort *)(lVar5 + uVar13) = uVar19;
          *(ushort *)(lVar5 + 2 + uVar13) = uVar19;
          goto LAB_1455276d0;
        }
        uVar22 = (ulonglong)*(ushort *)(lVar3 + 2);
        uVar18 = (ulonglong)uVar23;
        lVar15 = *(longlong *)(param_1 + 0x140);
        uVar23 = *(ushort *)(lVar15 + 2 + uVar22 * 8);
        bVar6 = *(byte *)(lVar15 + 4 + uVar22 * 8);
        uVar14 = uVar8;
        uVar21 = *(ushort *)(lVar15 + uVar22 * 8);
        bVar24 = (*(byte *)(lVar3 + 4) & 3) == 0;
      }
      else {
        bVar6 = *(byte *)(lVar3 + 4);
        uVar22 = (ulonglong)uVar23;
        uVar23 = *(ushort *)(lVar3 + 2);
        uVar19 = uVar16;
        uVar14 = uVar21;
        uVar21 = uVar8;
        local_res8 = uVar16;
        bVar24 = bVar11;
      }
      uVar17 = uVar18;
      uVar18 = uVar22;
    } while (uVar19 != uVar7);
    if (!bVar12) {
LAB_145527917:
      return CONCAT71((int7)(uVar13 >> 8),1);
    }
  } while( true );
}



// FUNCTION 145527930 FUN_145527930 body=2045 status=ok
// SIG undefined FUN_145527930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_145527930(longlong *param_1,float *param_2,longlong param_3)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
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
  float fVar40;
  float fVar41;
  float fVar42;
  undefined8 local_res8;
  ulonglong local_res10;
  longlong local_res18;
  ulonglong local_res20;
  longlong local_100;
  undefined4 local_f8;
  uint local_f4;
  longlong local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  
  pfVar7 = (float *)*param_1;
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  uVar16 = (uint)(param_1[1] - (longlong)pfVar7 >> 4);
  if (uVar16 == 3) {
    fVar35 = *pfVar7;
    fVar25 = pfVar7[1];
    fVar26 = pfVar7[2];
    auVar36 = ZEXT816(0);
    fVar32 = (pfVar7[9] - fVar25) * (pfVar7[4] - fVar35) -
             (pfVar7[5] - fVar25) * (pfVar7[8] - fVar35);
    fVar33 = (pfVar7[10] - fVar26) * (pfVar7[5] - fVar25) -
             (pfVar7[6] - fVar26) * (pfVar7[9] - fVar25);
    fVar34 = (pfVar7[8] - fVar35) * (pfVar7[6] - fVar26) -
             (pfVar7[4] - fVar35) * (pfVar7[10] - fVar26);
    fVar29 = fVar33 * fVar3;
    fVar30 = fVar34 * fVar4;
    fVar31 = fVar32 * fVar5;
    auVar27._0_4_ = 0.0 - (fVar30 + fVar29 + fVar31);
    auVar27._4_4_ = 0.0 - (fVar30 + fVar29 + fVar31);
    auVar27._8_4_ = 0.0 - (fVar30 + fVar29 + fVar31);
    auVar27._12_4_ = 0.0 - (fVar30 + fVar29 + fVar31);
    if (auVar27._0_4_ != 0.0) {
      auVar36 = divps(_DAT_14c6daca0,auVar27);
    }
    pfVar7 = *(float **)(param_3 + 0x48);
    pfVar12 = pfVar7 + (longlong)*(int *)(param_3 + 0x50) * 4;
    fVar35 = (0.0 - (fVar25 * fVar34 + fVar35 * fVar33 + fVar26 * fVar32)) * auVar36._12_4_;
    for (; pfVar7 != pfVar12; pfVar7 = pfVar7 + 4) {
      fVar26 = *pfVar7 * fVar33 * auVar36._0_4_;
      fVar29 = pfVar7[1] * fVar34 * auVar36._4_4_;
      fVar30 = pfVar7[2] * fVar32 * auVar36._8_4_;
      fVar25 = fVar29 + fVar26;
      fVar26 = fVar26 + fVar29;
      fVar29 = fVar35 + fVar30;
      fVar30 = fVar30 + fVar35;
      *pfVar7 = (fVar29 + fVar25) * fVar3 + *pfVar7;
      pfVar7[1] = (fVar30 + fVar26) * fVar4 + pfVar7[1];
      pfVar7[2] = (fVar25 + fVar29) * fVar5 + pfVar7[2];
      pfVar7[3] = (fVar26 + fVar30) * fVar6 + pfVar7[3];
    }
    return 1;
  }
  fVar35 = 0.0;
  fVar25 = 0.0;
  fVar26 = 0.0;
  auVar36._0_4_ = (float)(int)(param_1[1] - (longlong)pfVar7 >> 4);
  auVar36._4_4_ = auVar36._0_4_;
  auVar36._8_4_ = auVar36._0_4_;
  auVar36._12_4_ = auVar36._0_4_;
  auVar27 = divps(_DAT_14c6daca0,auVar36);
  for (; pfVar7 != (float *)param_1[1]; pfVar7 = pfVar7 + 4) {
    fVar35 = fVar35 + *pfVar7;
    fVar25 = fVar25 + pfVar7[1];
    fVar26 = fVar26 + pfVar7[2];
  }
  fVar35 = fVar35 * auVar27._0_4_;
  fVar25 = fVar25 * auVar27._4_4_;
  fVar26 = fVar26 * auVar27._8_4_;
  local_f8 = 0;
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar10 = *(char *)(lVar2 + 0x114);
  local_res18 = param_3;
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
    cVar10 = *(char *)(lVar2 + 0x114);
  }
  lVar8 = *(longlong *)(lVar2 + 0xf0);
  if (lVar8 == 0) {
    if (cVar10 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar8;
  }
  lVar24 = (longlong)(int)uVar16;
  lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x3d0) + 0x10);
  lVar17 = 0;
  if (*(longlong *)(lVar8 + 8) == 0) {
    lVar17 = lVar8;
  }
  uVar23 = lVar24 * 0x10;
  local_res10 = uVar23;
  local_f0 = lVar17;
  local_e0 = uVar23;
  if (lVar17 == 0) {
    local_100 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar8 >> 8),1),&local_res10,0x40);
  }
  else {
    local_res8 = uVar23 + 0x3f & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(lVar17 + 0x28)) {
      local_100 = *(longlong *)(lVar17 + 0x38);
      if (local_res8 + local_100 <= *(ulonglong *)(lVar17 + 0x40)) {
        *(ulonglong *)(lVar17 + 0x38) = local_res8 + local_100;
        goto LAB_145527bb5;
      }
    }
    local_100 = FUN_144b454a0(lVar17,&local_res8);
  }
LAB_145527bb5:
  local_f4 = uVar16 | 0x80000000;
  local_res8 = CONCAT44(local_res8._4_4_,uVar16) | 0x80000000;
  local_e8 = local_100;
  if ((int)(uVar16 & 0x7fffffff) < (int)uVar16) {
    FUN_1418055da(&local_100,&PTR_vftable_14c6e47a0,lVar24);
    lVar17 = local_f0;
  }
  lVar8 = local_100;
  local_d0 = 0;
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
  lVar2 = *(longlong *)(*(longlong *)(lVar9 + 0x3d0) + 0x10);
  lVar9 = 0;
  if (*(longlong *)(lVar2 + 8) == 0) {
    lVar9 = lVar2;
  }
  local_res20 = uVar23;
  local_c8 = lVar9;
  local_b8 = uVar23;
  if (lVar9 == 0) {
    local_d8 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar2 >> 8),1),&local_res20,0x40);
  }
  else {
    local_res10 = uVar23 + 0x3f & 0xffffffffffffffc0;
    if (local_res10 <= *(ulonglong *)(lVar9 + 0x28)) {
      local_d8 = *(longlong *)(lVar9 + 0x38);
      if (local_d8 + local_res10 <= *(ulonglong *)(lVar9 + 0x40)) {
        *(ulonglong *)(lVar9 + 0x38) = local_d8 + local_res10;
        goto LAB_145527ca8;
      }
    }
    local_d8 = FUN_144b454a0(lVar9,&local_res10);
  }
LAB_145527ca8:
  local_cc = (uint)local_res8;
  local_c0 = local_d8;
  if ((int)(uVar16 & 0x7fffffff) < (int)uVar16) {
    FUN_1418055da(&local_d8,&PTR_vftable_14c6e47a0,lVar24);
    local_res8 = CONCAT44(local_res8._4_4_,local_cc);
    uVar23 = local_b8;
    lVar9 = local_c8;
  }
  lVar24 = local_d8;
  lVar2 = *param_1;
  uVar22 = 0;
  lVar13 = param_1[1] - lVar2 >> 4;
  iVar11 = (int)lVar13;
  lVar20 = (longlong)iVar11;
  uVar19 = (longlong)(iVar11 + -1) * 0x10;
  pfVar7 = (float *)(uVar19 + lVar2);
  fVar29 = *pfVar7 - fVar35;
  fVar30 = pfVar7[1] - fVar25;
  fVar31 = pfVar7[2] - fVar26;
  uVar21 = uVar22;
  if (0 < iVar11) {
    do {
      uVar15 = uVar21;
      pfVar7 = (float *)(uVar15 + lVar2);
      fVar40 = *pfVar7 - fVar35;
      fVar41 = pfVar7[1] - fVar25;
      fVar42 = pfVar7[2] - fVar26;
      fVar32 = fVar30 * fVar3 - fVar4 * fVar29;
      fVar33 = fVar31 * fVar4 - fVar5 * fVar30;
      fVar34 = fVar29 * fVar5 - fVar3 * fVar31;
      fVar37 = fVar41 * fVar29 - fVar30 * fVar40;
      fVar38 = fVar42 * fVar30 - fVar31 * fVar41;
      fVar39 = fVar40 * fVar31 - fVar29 * fVar42;
      pfVar7 = (float *)(uVar19 + lVar8);
      *pfVar7 = fVar33;
      pfVar7[1] = fVar34;
      pfVar7[2] = fVar32;
      pfVar7[3] = 0.0 - (fVar32 * fVar26 + fVar34 * fVar25 + fVar33 * fVar35);
      fVar29 = fVar38 * fVar3;
      fVar30 = fVar39 * fVar4;
      fVar31 = fVar37 * fVar5;
      auVar28._0_4_ = 0.0 - (fVar31 + fVar30 + fVar29);
      auVar28._4_4_ = 0.0 - (fVar31 + fVar30 + fVar29);
      auVar28._8_4_ = 0.0 - (fVar31 + fVar30 + fVar29);
      auVar28._12_4_ = 0.0 - (fVar31 + fVar30 + fVar29);
      lVar13 = CONCAT71((int7)((ulonglong)lVar13 >> 8),auVar28._0_4_ == 0.0);
      if (auVar28._0_4_ == 0.0) {
        auVar27 = ZEXT816(0);
      }
      else {
        auVar27 = divps(_DAT_14c6daca0,auVar28);
      }
      pfVar7 = (float *)(uVar19 + local_d8);
      *pfVar7 = fVar38 * auVar27._0_4_;
      pfVar7[1] = fVar39 * auVar27._4_4_;
      pfVar7[2] = fVar37 * auVar27._8_4_;
      pfVar7[3] = (0.0 - (fVar37 * fVar26 + fVar39 * fVar25 + fVar38 * fVar35)) * auVar27._12_4_;
      lVar20 = lVar20 + -1;
      uVar21 = uVar15 + 0x10;
      uVar19 = uVar15;
      fVar29 = fVar40;
      fVar30 = fVar41;
      fVar31 = fVar42;
    } while (lVar20 != 0);
  }
  pfVar7 = *(float **)(local_res18 + 0x48);
  pfVar12 = pfVar7 + (longlong)*(int *)(local_res18 + 0x50) * 4;
  uVar21 = uVar22;
  do {
    if (pfVar7 == pfVar12) {
      if (lVar9 == 0) {
        (*DAT_14c787678)(CONCAT71((int7)((ulonglong)lVar13 >> 8),1),local_c0,uVar23);
      }
      else {
        uVar23 = uVar23 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulonglong *)(lVar9 + 0x28) < uVar23) ||
           (local_c0 + uVar23 != *(longlong *)(lVar9 + 0x38))) {
          FUN_144be8550(lVar9);
        }
        else {
          *(longlong *)(lVar9 + 0x38) = local_c0;
          if (*(longlong *)(lVar9 + 0x48) == local_c0) {
            FUN_144be8430(lVar9);
          }
        }
      }
      if ((-1 < (int)(uint)local_res8) && (lVar24 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar24,(ulonglong)((uint)local_res8 & 0x7fffffff) << 4);
      }
      if (lVar17 == 0) {
        (*DAT_14c787678)(1);
      }
      else {
        uVar23 = local_e0 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulonglong *)(lVar17 + 0x28) < uVar23) ||
           (local_e8 + uVar23 != *(longlong *)(lVar17 + 0x38))) {
          FUN_144be8550(lVar17);
        }
        else {
          *(longlong *)(lVar17 + 0x38) = local_e8;
          if (*(longlong *)(lVar17 + 0x48) == local_e8) {
            FUN_144be8430(lVar17);
          }
        }
      }
      if ((-1 < (int)local_f4) && (lVar8 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar8,(ulonglong)(local_f4 & 0x7fffffff) << 4);
      }
      return 1;
    }
    fVar35 = *pfVar7;
    fVar25 = pfVar7[1];
    fVar26 = pfVar7[2];
    uVar18 = (int)uVar21 + 1;
    uVar19 = (ulonglong)uVar18;
    if (uVar18 == uVar16) {
      uVar19 = uVar22;
    }
    pfVar1 = (float *)(lVar8 + (longlong)(int)uVar19 * 0x10);
    fVar29 = *(float *)(lVar8 + (longlong)(int)uVar19 * 0x10 + 0xc) + pfVar1[2] * fVar26 +
             pfVar1[1] * fVar25 + *pfVar1 * fVar35;
    uVar15 = uVar21;
    while ((0.0 <= fVar29 && (uVar15 = uVar19, (int)uVar19 != (int)uVar21))) {
      uVar18 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
      if (uVar18 == uVar16) {
        uVar19 = uVar22;
      }
      pfVar1 = (float *)(lVar8 + (longlong)(int)uVar19 * 0x10);
      fVar29 = *(float *)(lVar8 + (longlong)(int)uVar19 * 0x10 + 0xc) + pfVar1[2] * fVar26 +
               pfVar1[1] * fVar25 + *pfVar1 * fVar35;
    }
    uVar14 = (uint)uVar15;
    pfVar1 = (float *)(lVar8 + (longlong)(int)uVar14 * 0x10);
    fVar29 = *(float *)(lVar8 + (longlong)(int)uVar14 * 0x10 + 0xc) + pfVar1[2] * fVar26 +
             pfVar1[1] * fVar25 + *pfVar1 * fVar35;
    uVar18 = uVar14;
    while (fVar29 < 0.0) {
      uVar18 = (uint)uVar15;
      if ((uint)uVar15 == 0) {
        uVar18 = uVar16;
      }
      uVar18 = uVar18 - 1;
      uVar15 = (ulonglong)uVar18;
      if (uVar18 == uVar14) break;
      pfVar1 = (float *)(lVar8 + (longlong)(int)uVar18 * 0x10);
      fVar29 = *(float *)(lVar8 + (longlong)(int)uVar18 * 0x10 + 0xc) + pfVar1[2] * fVar26 +
               pfVar1[1] * fVar25 + *pfVar1 * fVar35;
    }
    uVar21 = (ulonglong)uVar18;
    pfVar1 = (float *)(local_d8 + (longlong)(int)uVar18 * 0x10);
    fVar29 = *(float *)(local_d8 + (longlong)(int)uVar18 * 0x10 + 0xc);
    fVar30 = pfVar1[1] * fVar25 + *pfVar1 * fVar35;
    fVar31 = *pfVar1 * fVar35 + pfVar1[1] * fVar25;
    fVar32 = fVar29 + pfVar1[2] * fVar26;
    fVar29 = pfVar1[2] * fVar26 + fVar29;
    *pfVar7 = fVar35 + (fVar32 + fVar30) * fVar3;
    pfVar7[1] = fVar25 + (fVar29 + fVar31) * fVar4;
    pfVar7[2] = fVar26 + (fVar30 + fVar32) * fVar5;
    pfVar7[3] = pfVar7[3] + (fVar31 + fVar29) * fVar6;
    pfVar7 = pfVar7 + 4;
  } while( true );
}



// FUNCTION 145528130 FUN_145528130 body=396 status=ok
// SIG undefined FUN_145528130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145528130(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 (*pauVar4) [16];
  longlong lVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 local_238 [12];
  float fStack_22c;
  undefined1 local_228 [544];
  
  pauVar4 = (undefined1 (*) [16])*param_2;
  if (pauVar4 != (undefined1 (*) [16])param_2[1]) {
    _local_258 = *pauVar4;
    _local_248 = *pauVar4;
    iVar6 = (int)((longlong)param_2[1] - (longlong)pauVar4 >> 4);
    lVar5 = (longlong)iVar6;
    if (0 < iVar6) {
      do {
        _local_258 = minps(_local_258,*pauVar4);
        _local_248 = maxps(_local_248,*pauVar4);
        lVar5 = lVar5 + -1;
        pauVar4 = pauVar4 + 1;
      } while (lVar5 != 0);
    }
    local_268 = 0;
    uStack_260 = 0;
    FUN_144bfb0e0(local_258,&local_268,local_238);
    if (5000.0 < fStack_22c) {
      FUN_144bde670(&local_268,local_228,0x200);
      FUN_144be6160(&local_268,
                    "The vertex cloud is too far away from the origin. Consider centering the vertex cloud around the origin to avoid precision issue during plane calculation."
                   );
      FUN_144bfc0d0(0x78456aa0,local_228,"GeometryProcessing\\ConvexHull\\hkgpConvexHullData.cpp",
                    0x30);
      FUN_144bde6e0(&local_268);
    }
    fVar3 = fRam000000014c6dacac;
    auVar1._12_4_ = fRam000000014c6dacac;
    auVar1._0_12_ = _DAT_14c6daca0;
    auVar7._0_4_ = (float)local_248._0_4_ - (float)local_258._0_4_;
    auVar7._4_4_ = (float)local_248._4_4_ - (float)local_258._4_4_;
    auVar7._8_4_ = fStack_240 - fStack_250;
    auVar7._12_4_ = fStack_23c - fStack_24c;
    auVar8 = maxps(auVar7,_DAT_149da5fc0);
    auVar9._0_4_ = auVar8._0_4_ * _DAT_14c6dad90;
    auVar9._4_4_ = auVar8._4_4_ * fRam000000014c6dad94;
    auVar9._8_4_ = auVar8._8_4_ * fRam000000014c6dad98;
    auVar9._12_4_ = auVar8._12_4_ * fRam000000014c6dad9c;
    auVar8 = divps(auVar1,auVar9);
    *param_1 = CONCAT44((float)local_258._4_4_ + auVar9._4_4_,(float)local_258._0_4_ + auVar9._0_4_)
    ;
    *(float *)(param_1 + 1) = fStack_250 + auVar9._8_4_;
    fVar10 = auVar8._0_4_ * 8191.0;
    fVar11 = auVar8._4_4_ * 8191.0;
    fVar12 = auVar8._8_4_ * 8191.0;
    *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(fVar11,fVar10);
    *(float *)((longlong)param_1 + 0x14) = fVar12;
    auVar2._12_4_ = fRam000000014c6dacac;
    auVar2._0_12_ = _DAT_14c6daca0;
    auVar8._4_4_ = fVar11;
    auVar8._0_4_ = fVar10;
    auVar8._8_4_ = fVar12;
    auVar8._12_4_ = fVar3 * 8191.0;
    auVar8 = divps(auVar2,auVar8);
    param_1[3] = CONCAT44(~-(uint)(fVar11 == 0.0) & auVar8._4_4_,
                          ~-(uint)(fVar10 == 0.0) & auVar8._0_4_);
    *(uint *)(param_1 + 4) = ~-(uint)(fVar12 == 0.0) & auVar8._8_4_;
  }
  return;
}



// FUNCTION 1455282c0 FUN_1455282c0 body=262 status=ok
// SIG undefined FUN_1455282c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1455282c0(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(undefined8 *)(param_1 + 0xf4) = 0;
  *(undefined8 *)(param_1 + 0xfc) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0xba) = 0;
  uVar4 = uRam000000014c6dae88;
  uVar3 = uRam000000014c6dae84;
  uVar2 = _DAT_14c6dae80;
  uVar5 = uRam000000014c6dae84 ^ 0x80000000;
  uVar6 = uRam000000014c6dae88 ^ 0x80000000;
  *(uint *)(param_1 + 0x10c) = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)(param_1 + 0x110) = uVar5;
  *(uint *)(param_1 + 0x114) = uVar6;
  *(uint *)(param_1 + 0x118) = uVar4;
  *(uint *)(param_1 + 0x11c) = uVar2;
  *(uint *)(param_1 + 0x120) = uVar3;
  uVar1 = uRam000000014c6dae48;
  *(undefined8 *)(param_1 + 0x30) = _DAT_14c6dae40;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = uRam000000014c6dae58;
  *(undefined8 *)(param_1 + 0x40) = _DAT_14c6dae50;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  uVar1 = uRam000000014c6dae68;
  *(undefined8 *)(param_1 + 0x50) = _DAT_14c6dae60;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  uVar1 = _DAT_14c6dae78;
  *(undefined8 *)(param_1 + 0x60) = _DAT_14c6dae70;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  uVar1 = uRam000000014c6dae48;
  *(undefined8 *)(param_1 + 0x70) = _DAT_14c6dae40;
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  uVar1 = uRam000000014c6dae58;
  *(undefined8 *)(param_1 + 0x80) = _DAT_14c6dae50;
  *(undefined8 *)(param_1 + 0x88) = uVar1;
  uVar1 = uRam000000014c6dae68;
  *(undefined8 *)(param_1 + 0x90) = _DAT_14c6dae60;
  *(undefined8 *)(param_1 + 0x98) = uVar1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  if ((*(byte *)(param_1 + 0xb8) & 0x80) == 0) {
    *(undefined8 *)(param_1 + 0xdc) = 0;
    *(undefined8 *)(param_1 + 0xe4) = 0;
    *(undefined8 *)(param_1 + 0xec) = 0;
    *(undefined8 *)(param_1 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 0xd8) = 0;
  }
  if ((*(ushort *)(param_1 + 0xb8) & 0x100) == 0) {
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 1455283d0 FUN_1455283d0 body=2844 status=ok
// SIG undefined FUN_1455283d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1455283d0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  longlong lVar11;
  undefined8 *puVar12;
  int *piVar13;
  longlong lVar14;
  int iVar15;
  longlong *plVar16;
  float *pfVar17;
  longlong *plVar18;
  float *pfVar19;
  char cVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 uVar30;
  float fVar31;
  uint uVar32;
  float fVar33;
  uint uVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  char local_res8 [8];
  longlong *local_res10;
  longlong *local_res18;
  ulonglong local_res20;
  longlong local_f8;
  longlong lStack_f0;
  undefined8 local_e8;
  longlong local_e0;
  uint local_d8;
  uint local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  uint local_9c;
  longlong local_98;
  undefined8 *local_90;
  longlong local_88;
  
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  plVar18 = (longlong *)((longlong)param_1 + 0xdc);
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined2 *)((longlong)param_1 + 0xba) = 0;
  uVar32 = DAT_14c6dae80._4_4_;
  uVar30 = (undefined8)DAT_14c6dae80;
  uVar35 = DAT_14c6dae80._8_4_;
  *(uint *)((longlong)param_1 + 0x10c) = (uint)DAT_14c6dae80 ^ 0x80000000;
  *(uint *)(param_1 + 0x22) = uVar32 ^ 0x80000000;
  *(uint *)((longlong)param_1 + 0x114) = uVar35 ^ 0x80000000;
  *(uint *)(param_1 + 0x23) = uVar35;
  *(undefined8 *)((longlong)param_1 + 0x11c) = uVar30;
  lVar14 = CONCAT44(uRam000000014c6dae4c,uRam000000014c6dae48);
  param_1[6] = CONCAT44(uRam000000014c6dae44,_DAT_14c6dae40);
  param_1[7] = lVar14;
  lVar14 = CONCAT44(uRam000000014c6dae5c,uRam000000014c6dae58);
  param_1[8] = CONCAT44(uRam000000014c6dae54,_DAT_14c6dae50);
  param_1[9] = lVar14;
  lVar14 = lRam000000014c6dae68;
  param_1[10] = _DAT_14c6dae60;
  param_1[0xb] = lVar14;
  lVar14 = _DAT_14c6dae78;
  param_1[0xc] = _DAT_14c6dae70;
  param_1[0xd] = lVar14;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  lVar14 = CONCAT44(uRam000000014c6dae4c,uRam000000014c6dae48);
  param_1[0xe] = CONCAT44(uRam000000014c6dae44,_DAT_14c6dae40);
  param_1[0xf] = lVar14;
  uVar8 = uRam000000014c6dae5c;
  uVar7 = uRam000000014c6dae58;
  uVar1 = uRam000000014c6dae54;
  *(undefined4 *)(param_1 + 0x10) = _DAT_14c6dae50;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x11) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar8;
  lVar14 = lRam000000014c6dae68;
  param_1[0x12] = _DAT_14c6dae60;
  param_1[0x13] = lVar14;
  param_1[0x16] = 0;
  plVar16 = param_1 + 0x1a;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
  if ((*(ushort *)(param_1 + 0x17) & 0x80) == 0) {
    *plVar18 = 0;
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
    *plVar16 = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  uVar2 = *(ushort *)(param_1 + 0x17);
  if ((uVar2 & 0x100) == 0) {
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  pfVar17 = (float *)*param_2;
  lVar14 = param_2[1];
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar32 = (uint)(lVar14 - (longlong)pfVar17 >> 4);
  if ((int)uVar32 < 1) {
    return *(int *)((longlong)param_1 + 0x124);
  }
  local_res10 = param_2;
  local_res18 = param_3;
  if ((uVar2 & 8) == 0) {
    if (-1 < (char)uVar2) {
      local_f8 = *param_2;
      lStack_f0 = param_2[1];
      FUN_145528130(plVar16,&local_f8);
    }
  }
  else {
    *plVar16 = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    uVar7 = uRam000000014c6daca8;
    uVar1 = uRam000000014c6daca4;
    *(undefined4 *)plVar18 = _DAT_14c6daca0;
    *(undefined4 *)(param_1 + 0x1c) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0xe4) = uVar7;
    param_1[0x1d] = *plVar18;
    *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)((longlong)param_1 + 0xe4);
  }
  plVar18 = param_1 + 0x18;
  local_res8[0] = '\0';
  iVar15 = 3;
  if ((int)(uVar32 - 1) < 3) {
    iVar15 = uVar32 - 1;
  }
  *(int *)((longlong)param_1 + 0x124) = iVar15;
  if ((*(ushort *)(param_1 + 0x17) & 0x100) == 0) {
    *plVar18 = 0;
    param_1[0x19] = 0;
    if (2 < (int)uVar32) {
      lVar14 = CONCAT44(uRam000000014c6dae4c,uRam000000014c6dae48);
      *plVar18 = CONCAT44(uRam000000014c6dae44,_DAT_14c6dae40);
      param_1[0x19] = lVar14;
      uVar7 = uRam000000014c6dae48;
      uVar1 = uRam000000014c6dae44;
      fVar33 = *pfVar17;
      *(undefined4 *)plVar18 = _DAT_14c6dae40;
      *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
      *(undefined4 *)(param_1 + 0x19) = uVar7;
      *(float *)((longlong)param_1 + 0xcc) = 0.0 - fVar33;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x124) = 2;
    local_res8[0] = '\x01';
  }
  local_a0 = 0;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar20 = *(char *)(lVar14 + 0x114);
  if (cVar20 == '\0') {
    __dyn_tls_on_demand_init();
    cVar20 = *(char *)(lVar14 + 0x114);
  }
  lVar11 = *(longlong *)(lVar14 + 0xf0);
  if (lVar11 == 0) {
    if (cVar20 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar14 + 0xf0) = lVar11;
  }
  lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
  lVar24 = 0;
  if (*(longlong *)(lVar11 + 8) == 0) {
    lVar24 = lVar11;
  }
  local_e8 = (longlong)(int)uVar32 * 0x24;
  local_b8 = local_e8;
  local_98 = lVar24;
  local_88 = local_e8;
  if (lVar24 == 0) {
    puVar12 = (undefined8 *)
              (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar11 >> 8),1),&local_e8,0x40);
  }
  else {
    local_res20 = local_e8 + 0x3f & 0xffffffffffffffc0;
    if (local_res20 <= *(ulonglong *)(lVar24 + 0x28)) {
      puVar12 = *(undefined8 **)(lVar24 + 0x38);
      if (local_res20 + (longlong)puVar12 <= *(ulonglong *)(lVar24 + 0x40)) {
        *(ulonglong *)(lVar24 + 0x38) = local_res20 + (longlong)puVar12;
        goto LAB_1455286d6;
      }
    }
    puVar12 = (undefined8 *)FUN_144b454a0(lVar24,&local_res20);
  }
LAB_1455286d6:
  local_9c = uVar32 | 0x80000000;
  local_e8 = CONCAT44(local_e8._4_4_,uVar32) | 0x80000000;
  local_d8 = 0;
  local_a8 = puVar12;
  local_90 = puVar12;
  if (*(char *)(lVar14 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar14 + 0xf0);
  if (lVar11 == 0) {
    if (*(char *)(lVar14 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar14 + 0xf0) = lVar11;
  }
  lVar14 = *(longlong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
  local_c0 = (longlong)(int)uVar32 * 8;
  lVar11 = 0;
  if (*(longlong *)(lVar14 + 8) == 0) {
    lVar11 = lVar14;
  }
  local_d0 = lVar11;
  local_b0 = local_c0;
  if (lVar11 == 0) {
    local_e0 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar14 >> 8),1),&local_b0,0x40);
  }
  else {
    local_res20 = local_c0 + 0x3fU & 0xffffffffffffffc0;
    if (local_res20 <= *(ulonglong *)(lVar11 + 0x28)) {
      local_e0 = *(longlong *)(lVar11 + 0x38);
      if (local_e0 + local_res20 <= *(ulonglong *)(lVar11 + 0x40)) {
        *(ulonglong *)(lVar11 + 0x38) = local_e0 + local_res20;
        goto LAB_1455287a2;
      }
    }
    local_e0 = FUN_144b454a0(lVar11,&local_res20);
  }
LAB_1455287a2:
  local_d4 = uVar32 | 0x80000000;
  local_c8 = local_e0;
  if ((int)(uVar32 & 0x7fffffff) < (int)uVar32) {
    FUN_14532af70(&local_a8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar32);
    FUN_14532b0a0(&local_e0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar32);
    local_b8 = local_88;
    local_e8 = CONCAT44(local_e8._4_4_,local_9c);
    lVar11 = local_d0;
    puVar12 = local_a8;
    lVar24 = local_98;
  }
  lVar23 = local_c8;
  lVar14 = local_e0;
  plVar18 = local_res10;
  auVar10 = _DAT_149d3cd50;
  auVar9 = _DAT_149d3cd40;
  if (((int)local_d8 < (int)uVar32) || ((int)uVar32 < (int)local_d8)) {
    local_d8 = uVar32;
  }
  uVar22 = 0;
  local_b0 = (longlong)(int)uVar32;
  if (0 < (int)uVar32) {
    pfVar19 = (float *)*local_res10;
    pfVar17 = (float *)((longlong)puVar12 + 0x14);
    uVar21 = uVar22;
    do {
      fVar33 = pfVar19[1];
      fVar31 = pfVar19[2];
      pfVar17[1] = *pfVar19;
      pfVar17[2] = fVar33;
      pfVar17[3] = fVar31;
      fVar33 = *pfVar19;
      pfVar4 = pfVar19 + 1;
      pfVar5 = pfVar19 + 2;
      pfVar6 = pfVar19 + 3;
      pfVar19 = pfVar19 + 4;
      auVar25._0_4_ =
           (fVar33 - (float)param_1[0x1a]) * (float)*(undefined8 *)((longlong)param_1 + 0xdc);
      auVar25._4_4_ =
           (*pfVar4 - (float)((ulonglong)param_1[0x1a] >> 0x20)) *
           (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xdc) >> 0x20);
      auVar25._8_4_ = (*pfVar5 - *(float *)(param_1 + 0x1b)) * *(float *)((longlong)param_1 + 0xe4);
      auVar25._12_4_ = (*pfVar6 - *(float *)(param_1 + 0x1b)) * *(float *)((longlong)param_1 + 0xe4)
      ;
      auVar25 = minps(auVar25,auVar9);
      auVar25 = maxps(auVar10,auVar25);
      fVar33 = auVar25._0_4_;
      fVar31 = auVar25._4_4_;
      fVar37 = auVar25._8_4_;
      fVar33 = (float)((uint)(fVar33 - _DAT_14c6dad90) & -(uint)(fVar33 < 0.0) |
                      ~-(uint)(fVar33 < 0.0) & (uint)(fVar33 + _DAT_14c6dad90));
      fVar31 = (float)((uint)(fVar31 - fRam000000014c6dad94) & -(uint)(fVar31 < 0.0) |
                      ~-(uint)(fVar31 < 0.0) & (uint)(fVar31 + fRam000000014c6dad94));
      fVar37 = (float)((uint)(fVar37 - fRam000000014c6dad98) & -(uint)(fVar37 < 0.0) |
                      ~-(uint)(fVar37 < 0.0) & (uint)(fVar37 + fRam000000014c6dad98));
      uVar32 = (int)fVar33 ^ -(uint)(2.1474836e+09 <= fVar33);
      uVar35 = (int)fVar31 ^ -(uint)(2.1474836e+09 <= fVar31);
      fVar37 = (float)((int)fVar37 ^ -(uint)(2.1474836e+09 <= fVar37));
      *(ulonglong *)(pfVar17 + -5) = CONCAT44(uVar35,uVar32);
      pfVar17[-3] = fVar37;
      fVar33 = *(float *)(param_1 + 0x1e);
      fVar31 = *(float *)(param_1 + 0x1b);
      *(ulonglong *)(pfVar17 + -2) =
           CONCAT44((float)(int)uVar35 * (float)((ulonglong)param_1[0x1d] >> 0x20) +
                    (float)((ulonglong)param_1[0x1a] >> 0x20),
                    (float)(int)uVar32 * (float)param_1[0x1d] + (float)param_1[0x1a]);
      *pfVar17 = (float)(int)fVar37 * fVar33 + fVar31;
      pfVar17 = pfVar17 + 9;
      *(ulonglong *)(local_e0 + uVar22 * 8) = (longlong)puVar12 + uVar21 * 0x24;
      uVar22 = uVar22 + 1;
      uVar21 = (ulonglong)((int)uVar21 + 1);
    } while ((longlong)uVar22 < local_b0);
  }
  iVar15 = *(int *)((longlong)param_1 + 0x124);
  local_res10 = (longlong *)(CONCAT71(local_res10._1_7_,(char)param_1[0x17]) & 0xffffffffffffff01);
  local_res20 = CONCAT71(local_res20._1_7_,local_res8[0]);
  if (iVar15 != 0) {
    if (iVar15 == 1) {
      cVar20 = (char)local_res10;
    }
    else {
      if (iVar15 != 2) {
        if (iVar15 != 3) goto LAB_145528d36;
        lStack_f0 = local_e0 + (longlong)(int)local_d8 * 8;
        local_f8 = local_e0;
        piVar13 = (int *)FUN_14552cf30(param_1,&local_res20,&local_f8);
        if (-1 < *piVar13) {
          local_f8 = *local_res18;
          lStack_f0 = local_res18[1];
          FUN_145529c90(param_1,&local_f8);
          if (3 < (int)param_1[5]) goto LAB_145528d36;
        }
        if ((char)local_res10 == '\0') {
          *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
          goto LAB_145528d36;
        }
        *(int *)((longlong)param_1 + 0x124) = *(int *)((longlong)param_1 + 0x124) + -1;
        local_res20 = CONCAT71(local_res20._1_7_,1);
        *(undefined4 *)(param_1 + 3) = 0;
        *(undefined4 *)(param_1 + 1) = 0;
      }
      if (local_res8[0] == '\0') {
        local_f8 = *plVar18;
        lStack_f0 = plVar18[1];
        piVar13 = (int *)FUN_14552c8f0(param_1,local_res8,&local_f8);
        if (-1 < *piVar13) goto LAB_145528a5a;
      }
      else {
LAB_145528a5a:
        auVar10 = _DAT_149d3cd50;
        auVar9 = _DAT_149d3cd40;
        if (((char)local_res20 != '\0') && (0 < local_b0)) {
          pfVar19 = (float *)*plVar18;
          pfVar17 = (float *)((longlong)puVar12 + 0x14);
          lVar14 = local_b0;
          do {
            fVar33 = *pfVar19;
            pfVar4 = pfVar19 + 1;
            pfVar5 = pfVar19 + 2;
            fVar31 = pfVar19[3];
            fVar37 = *(float *)((longlong)param_1 + 0xcc);
            fVar26 = fVar33 * *(float *)(param_1 + 0x18);
            fVar28 = *pfVar4 * *(float *)((longlong)param_1 + 0xc4);
            fVar29 = *pfVar5 * *(float *)(param_1 + 0x19);
            pfVar19 = pfVar19 + 4;
            fVar27 = fVar26 + fVar28;
            fVar28 = fVar28 + fVar26;
            fVar26 = fVar29 + fVar37;
            fVar29 = fVar37 + fVar29;
            fVar33 = fVar33 - *(float *)(param_1 + 0x18) * (fVar27 + fVar26);
            fVar36 = *pfVar4 - *(float *)((longlong)param_1 + 0xc4) * (fVar28 + fVar29);
            fVar26 = *pfVar5 - *(float *)(param_1 + 0x19) * (fVar26 + fVar27);
            *(ulonglong *)(pfVar17 + 1) = CONCAT44(fVar36,fVar33);
            pfVar17[3] = fVar26;
            auVar34._0_4_ =
                 (fVar33 - (float)param_1[0x1a]) * (float)*(undefined8 *)((longlong)param_1 + 0xdc);
            auVar34._4_4_ =
                 (fVar36 - (float)((ulonglong)param_1[0x1a] >> 0x20)) *
                 (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xdc) >> 0x20);
            auVar34._8_4_ =
                 (fVar26 - *(float *)(param_1 + 0x1b)) * *(float *)((longlong)param_1 + 0xe4);
            auVar34._12_4_ =
                 ((fVar31 - fVar37 * (fVar29 + fVar28)) - *(float *)(param_1 + 0x1b)) *
                 *(float *)((longlong)param_1 + 0xe4);
            auVar25 = minps(auVar34,auVar9);
            auVar25 = maxps(auVar10,auVar25);
            fVar33 = auVar25._0_4_;
            fVar31 = auVar25._4_4_;
            fVar37 = auVar25._8_4_;
            fVar33 = (float)((uint)(fVar33 - _DAT_14c6dad90) & -(uint)(fVar33 < 0.0) |
                            ~-(uint)(fVar33 < 0.0) & (uint)(fVar33 + _DAT_14c6dad90));
            fVar31 = (float)((uint)(fVar31 - fRam000000014c6dad94) & -(uint)(fVar31 < 0.0) |
                            ~-(uint)(fVar31 < 0.0) & (uint)(fVar31 + fRam000000014c6dad94));
            fVar37 = (float)((uint)(fVar37 - fRam000000014c6dad98) & -(uint)(fVar37 < 0.0) |
                            ~-(uint)(fVar37 < 0.0) & (uint)(fVar37 + fRam000000014c6dad98));
            uVar32 = (int)fVar33 ^ -(uint)(2.1474836e+09 <= fVar33);
            uVar35 = (int)fVar31 ^ -(uint)(2.1474836e+09 <= fVar31);
            fVar37 = (float)((int)fVar37 ^ -(uint)(2.1474836e+09 <= fVar37));
            *(ulonglong *)(pfVar17 + -5) = CONCAT44(uVar35,uVar32);
            pfVar17[-3] = fVar37;
            fVar33 = *(float *)(param_1 + 0x1e);
            fVar31 = *(float *)(param_1 + 0x1b);
            *(ulonglong *)(pfVar17 + -2) =
                 CONCAT44((float)(int)uVar35 * (float)((ulonglong)param_1[0x1d] >> 0x20) +
                          (float)((ulonglong)param_1[0x1a] >> 0x20),
                          (float)(int)uVar32 * (float)param_1[0x1d] + (float)param_1[0x1a]);
            *pfVar17 = (float)(int)fVar37 * fVar33 + fVar31;
            pfVar17 = pfVar17 + 9;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        piVar13 = (int *)FUN_14552bf80(param_1,local_res8,&local_e0);
        lVar11 = local_d0;
        lVar23 = local_c8;
        lVar14 = local_e0;
        if (-1 < *piVar13) {
          local_f8 = *local_res18;
          lStack_f0 = local_res18[1];
          FUN_145529c90(param_1,&local_f8);
          lVar11 = local_d0;
          lVar23 = local_c8;
          lVar14 = local_e0;
          if (2 < (int)param_1[5]) goto LAB_145528d36;
        }
      }
      if ((char)local_res10 == '\0') {
        *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
        goto LAB_145528d36;
      }
      *(int *)((longlong)param_1 + 0x124) = *(int *)((longlong)param_1 + 0x124) + -1;
      cVar20 = (char)local_res10;
    }
    lStack_f0 = lVar14 + (longlong)(int)local_d8 * 8;
    local_f8 = lVar14;
    piVar13 = (int *)FUN_14552bd40(param_1,&local_res10,&local_f8);
    if (-1 < *piVar13) {
      local_f8 = *local_res18;
      lStack_f0 = local_res18[1];
      FUN_145529c90(param_1,&local_f8);
      goto LAB_145528d36;
    }
    if (cVar20 == '\0') {
      *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
      goto LAB_145528d36;
    }
    *(int *)((longlong)param_1 + 0x124) = *(int *)((longlong)param_1 + 0x124) + -1;
  }
  if ((*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) == 0) {
    FUN_14532af70(param_1,&PTR_vftable_14c6e47a0,1);
  }
  if (((int)param_1[1] < 1) || (1 < (int)param_1[1])) {
    *(undefined4 *)(param_1 + 1) = 1;
  }
  puVar3 = (undefined8 *)*param_1;
  uVar30 = puVar12[1];
  *puVar3 = *puVar12;
  puVar3[1] = uVar30;
  uVar30 = puVar12[3];
  puVar3[2] = puVar12[2];
  puVar3[3] = uVar30;
  *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(puVar12 + 4);
  uVar1 = *(undefined4 *)(puVar3 + 4);
  uVar30 = puVar3[3];
  uVar7 = *(undefined4 *)((longlong)puVar3 + 0x1c);
  uVar8 = *(undefined4 *)(puVar3 + 4);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)(puVar3 + 3);
  *(undefined4 *)(param_1 + 0x22) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x114) = uVar8;
  *(undefined4 *)(param_1 + 0x23) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x11c) = uVar30;
  *(undefined8 *)((longlong)param_1 + 0xf4) = *(undefined8 *)((longlong)puVar3 + 0xc);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)puVar3 + 0x14);
  param_1[0x20] = puVar3[3];
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(puVar3 + 4);
LAB_145528d36:
  if ((*(int *)((longlong)param_1 + 0x124) != -1) && ((*(byte *)(param_1 + 0x17) & 2) != 0)) {
    FUN_145528ef0(param_1,&local_res10);
  }
  if ((*(byte *)(param_1 + 0x17) & 0x20) != 0) {
    if ((int)param_1[3] < (int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff)) {
      FUN_14532ab90(&PTR_vftable_14c6e47a0,param_1 + 2,0);
    }
    if ((int)param_1[1] < (int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff)) {
      FUN_14532aa40(&PTR_vftable_14c6e47a0,param_1,0);
    }
    if ((int)param_1[5] < (int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff)) {
      FUN_14532a930(&PTR_vftable_14c6e47a0,param_1 + 4,0);
    }
  }
  if (lVar11 == 0) {
    (*DAT_14c787678)(1,lVar23);
  }
  else {
    uVar22 = local_c0 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar11 + 0x28) < uVar22) ||
       (uVar22 + lVar23 != *(longlong *)(lVar11 + 0x38))) {
      FUN_144be8550(lVar11,lVar23);
    }
    else {
      *(longlong *)(lVar11 + 0x38) = lVar23;
      if (*(longlong *)(lVar11 + 0x48) == lVar23) {
        FUN_144be8430(lVar11);
      }
    }
  }
  if ((-1 < (int)local_d4) && (lVar14 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar14,(ulonglong)(local_d4 & 0x7fffffff) << 3);
  }
  if (lVar24 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar22 = local_b8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar24 + 0x28) < uVar22) ||
       ((longlong)local_90 + uVar22 != *(longlong *)(lVar24 + 0x38))) {
      FUN_144be8550(lVar24);
    }
    else {
      *(undefined8 **)(lVar24 + 0x38) = local_90;
      if (*(undefined8 **)(lVar24 + 0x48) == local_90) {
        FUN_144be8430(lVar24);
      }
    }
  }
  if ((-1 < (int)(uint)local_e8) && (puVar12 != (undefined8 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar12,(ulonglong)((uint)local_e8 & 0x7fffffff) * 0x24);
  }
                    /* WARNING: Read-only address (ram,0x000149d3cd40) is written */
                    /* WARNING: Read-only address (ram,0x000149d3cd50) is written */
  return *(int *)((longlong)param_1 + 0x124);
}



// FUNCTION 145528ef0 FUN_145528ef0 body=2859 status=ok
// SIG undefined FUN_145528ef0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145528ef0(longlong *param_1,undefined4 *param_2)

{
  ushort *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined8 uVar8;
  int *piVar9;
  float *pfVar10;
  float *pfVar11;
  ulonglong uVar12;
  ushort uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar31;
  float fVar32;
  undefined1 in_XMM1 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  undefined4 uVar36;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  undefined1 auVar37 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  undefined4 local_res8 [2];
  undefined1 local_408 [8];
  float fStack_400;
  undefined4 uStack_3fc;
  undefined1 local_3f8 [16];
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined1 local_3d8 [8];
  undefined8 uStack_3d0;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  longlong local_3a8;
  longlong lStack_3a0;
  longlong local_398;
  longlong lStack_390;
  longlong local_388;
  longlong lStack_380;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  undefined1 local_318 [48];
  undefined1 local_2e8 [48];
  undefined1 local_2b8 [672];
  
  puVar1 = (ushort *)((longlong)param_1 + 0xba);
  uVar16 = 0;
  if ((*puVar1 & 1) == 0) {
    uVar13 = *puVar1 & 0xfffd;
    *puVar1 = uVar13;
    if (*(int *)((longlong)param_1 + 0x124) == 3) {
      lVar15 = param_1[2];
      fVar48 = 0.0;
      fVar49 = 0.0;
      fVar50 = 0.0;
      fVar54 = 0.0;
      fVar56 = 0.0;
      fVar58 = 0.0;
      fVar24 = *(float *)((longlong)param_1 + 0xfc);
      fVar60 = (float)*(undefined8 *)((longlong)param_1 + 0xf4);
      fVar61 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xf4) >> 0x20);
      fVar62 = 0.0;
      fVar63 = 0.0;
      fVar64 = 0.0;
      fVar65 = 0.0;
      fVar66 = 0.0;
      fVar67 = 0.0;
      fVar68 = 0.0;
      fVar69 = 0.0;
      fVar70 = 0.0;
      local_3f8 = ZEXT816(0);
      lVar14 = (longlong)(int)param_1[3] * 0x2c + lVar15;
      _local_408 = ZEXT816(0);
      if (lVar15 != lVar14) {
        lVar3 = *param_1;
        fVar48 = 0.0;
        fVar49 = 0.0;
        fVar50 = 0.0;
        do {
          fVar54 = *(float *)(lVar3 + 0x14 + (longlong)*(int *)(lVar15 + 0x1c) * 0x24);
          uVar8 = *(undefined8 *)(lVar3 + 0xc + (longlong)*(int *)(lVar15 + 0x1c) * 0x24);
          fVar55 = (float)uVar8 - fVar60;
          fVar57 = (float)((ulonglong)uVar8 >> 0x20) - fVar61;
          fVar59 = fVar54 - fVar24;
          fVar56 = *(float *)(lVar3 + 0x14 + (longlong)*(int *)(lVar15 + 0x20) * 0x24);
          uVar8 = *(undefined8 *)(lVar3 + 0xc + (longlong)*(int *)(lVar15 + 0x20) * 0x24);
          fVar44 = (float)uVar8 - fVar60;
          fVar45 = (float)((ulonglong)uVar8 >> 0x20) - fVar61;
          fVar46 = fVar56 - fVar24;
          fVar58 = *(float *)(lVar3 + 0x14 + (longlong)*(int *)(lVar15 + 0x24) * 0x24);
          uVar8 = *(undefined8 *)(lVar3 + 0xc + (longlong)*(int *)(lVar15 + 0x24) * 0x24);
          fVar41 = (float)uVar8 - fVar60;
          fVar42 = (float)((ulonglong)uVar8 >> 0x20) - fVar61;
          fVar43 = fVar58 - fVar24;
          fVar35 = fVar42 * fVar44 - fVar45 * fVar41;
          fVar38 = fVar43 * fVar45 - fVar46 * fVar42;
          fVar40 = fVar41 * fVar46 - fVar44 * fVar43;
          fVar23 = fVar38 * fVar55;
          fVar31 = fVar40 * fVar57;
          fVar32 = fVar35 * fVar59;
          fVar51 = fVar31 + fVar23 + fVar32;
          fVar52 = fVar31 + fVar23 + fVar32;
          fVar53 = fVar31 + fVar23 + fVar32;
          fVar32 = fVar31 + fVar23 + fVar32;
          fVar62 = fVar62 + fVar51;
          fVar63 = fVar63 + fVar52;
          fVar64 = fVar64 + fVar53;
          fVar65 = fVar65 + fVar32;
          fVar67 = fVar67 + (fVar44 + fVar55 + fVar41) * fVar51;
          fVar68 = fVar68 + (fVar45 + fVar57 + fVar42) * fVar52;
          fVar69 = fVar69 + (fVar46 + fVar59 + fVar43) * fVar53;
          fVar70 = fVar70 + ((fVar56 - fVar24) + (fVar54 - fVar24) + (fVar58 - fVar24)) * fVar32;
          fVar38 = ((fVar46 - fVar43) * fVar57 - fVar59 * (fVar45 - fVar42)) + fVar38;
          fVar40 = ((fVar44 - fVar41) * fVar59 - fVar55 * (fVar46 - fVar43)) + fVar40;
          fVar35 = ((fVar45 - fVar42) * fVar55 - fVar57 * (fVar44 - fVar41)) + fVar35;
          fVar38 = fVar38 * fVar38;
          fVar40 = fVar40 * fVar40;
          fVar35 = fVar35 * fVar35;
          auVar17._4_4_ = fVar38;
          auVar17._0_4_ = fVar38;
          auVar17._8_4_ = fVar38;
          auVar17._12_4_ = fVar38;
          auVar25._0_4_ = fVar40 + fVar38 + fVar35;
          auVar25._4_4_ = fVar40 + fVar38 + fVar35;
          auVar25._8_4_ = fVar40 + fVar38 + fVar35;
          auVar25._12_4_ = fVar40 + fVar38 + fVar35;
          auVar18 = sqrtps(auVar17,auVar25);
          fVar66 = fVar66 + auVar18._0_4_;
          fVar48 = ((fVar41 + fVar44) * fVar44 + (fVar44 + fVar55) * fVar55 +
                   (fVar55 + fVar41) * fVar41) * fVar51 + fVar48;
          fVar56 = fVar46 + fVar59 + fVar43;
          fVar54 = (fVar45 * fVar46 + fVar57 * fVar59 + fVar42 * fVar43 +
                   (fVar45 + fVar57 + fVar42) * fVar56) * fVar51 + (float)local_408._0_4_;
          fVar49 = ((fVar42 + fVar45) * fVar45 + (fVar45 + fVar57) * fVar57 +
                   (fVar57 + fVar42) * fVar42) * fVar51 + fVar49;
          lVar15 = lVar15 + 0x2c;
          fVar56 = (fVar44 * fVar46 + fVar55 * fVar59 + fVar41 * fVar43 +
                   (fVar44 + fVar55 + fVar41) * fVar56) * fVar51 + (float)local_408._4_4_;
          fVar50 = ((fVar43 + fVar46) * fVar46 + (fVar46 + fVar59) * fVar59 +
                   (fVar59 + fVar43) * fVar43) * fVar32 + fVar50;
          fVar58 = (fVar45 * fVar44 + fVar57 * fVar55 + fVar42 * fVar41 +
                   (fVar44 + fVar55 + fVar41) * (fVar45 + fVar57 + fVar42)) * fVar32 + fStack_400;
          local_408._4_4_ = fVar56;
          local_408._0_4_ = fVar54;
          fStack_400 = fVar58;
        } while (lVar15 != lVar14);
        local_3f8._4_4_ = fVar49;
        local_3f8._0_4_ = fVar48;
        local_3f8._8_4_ = fVar50;
        local_3f8._12_4_ = 0;
      }
      auVar7._4_4_ = fRam000000014c6daca4;
      auVar7._0_4_ = _DAT_14c6daca0;
      auVar7._8_4_ = fRam000000014c6daca8;
      auVar7._12_4_ = fRam000000014c6dacac;
      auVar4._4_4_ = fVar63;
      auVar4._0_4_ = fVar62;
      auVar4._8_4_ = fVar64;
      auVar4._12_4_ = fVar65;
      auVar18 = divps(auVar7,auVar4);
      fVar63 = auVar18._0_4_;
      fVar64 = auVar18._4_4_;
      fVar65 = auVar18._8_4_;
      fVar67 = fVar63 * _DAT_14c6dadb0 * fVar67;
      fVar68 = fVar64 * fRam000000014c6dadb4 * fVar68;
      fVar69 = fVar65 * fRam000000014c6dadb8 * fVar69;
      fVar70 = auVar18._12_4_ * fRam000000014c6dadbc * fVar70;
      fVar60 = fVar60 + fVar67;
      fVar61 = fVar61 + fVar68;
      fVar23 = fVar24 + fVar69;
      _local_3b8 = CONCAT44(fVar68,fVar67);
      _fStack_3b0 = CONCAT44(fVar70,fVar69);
      *(float *)(param_1 + 0xc) = fVar60;
      *(float *)((longlong)param_1 + 100) = fVar61;
      *(float *)(param_1 + 0xd) = fVar23;
      *(float *)((longlong)param_1 + 0x6c) = fVar24 + fVar70;
      if ((*(byte *)(param_1 + 0x17) & 0x10) != 0) {
        pfVar11 = (float *)param_1[4];
        _local_408 = ZEXT816(0);
        pfVar10 = pfVar11 + (longlong)(int)param_1[5] * 4;
        while (pfVar11 != pfVar10) {
          fVar67 = *pfVar11 * fVar60;
          fVar68 = pfVar11[1] * fVar61;
          fVar69 = pfVar11[2] * fVar23;
          pfVar6 = pfVar11 + 3;
          pfVar11 = pfVar11 + 4;
          fVar24 = fVar68 + fVar67;
          fVar67 = fVar67 + fVar68;
          fVar68 = *pfVar6 + fVar69;
          fVar69 = fVar69 + *pfVar6;
          auVar19._0_4_ = fVar68 + fVar24;
          auVar19._4_4_ = fVar69 + fVar67;
          auVar19._8_4_ = fVar24 + fVar68;
          auVar19._12_4_ = fVar67 + fVar69;
          _local_408 = maxps(_local_408,auVar19);
        }
        if (0.0 < local_408._0_4_) {
          FUN_144bde670(local_3f8,local_2b8,0x200);
          uVar8 = FUN_144be6160(local_3f8,"Invalid COM wrt. planes (");
          uVar8 = FUN_144be62b0(uVar8,local_408);
          FUN_144be6160(uVar8,&DAT_149982a50);
          FUN_144bfc0d0(0x645c0bba,local_2b8,
                        "GeometryProcessing\\ConvexHull\\hkgpConvexHullData.cpp",0x1cf);
          FUN_144bde6e0(local_3f8);
          *puVar1 = *puVar1 | 2;
        }
      }
      *(float *)((longlong)param_1 + 0xb4) = fVar66 * _DAT_14c6dad90;
      uVar2 = (undefined4)param_1[0x1e];
      fVar62 = fVar62 * _DAT_14c6dadd0;
      uVar36 = (undefined4)param_1[0x1d];
      uVar39 = (undefined4)((ulonglong)param_1[0x1d] >> 0x20);
      auVar20._4_4_ = uVar36;
      auVar20._0_4_ = uVar36;
      auVar20._8_4_ = uVar36;
      auVar20._12_4_ = uVar36;
      auVar26._4_4_ = uVar39;
      auVar26._0_4_ = uVar39;
      auVar26._8_4_ = uVar39;
      auVar26._12_4_ = uVar39;
      auVar18 = maxps(auVar26,auVar20);
      auVar37._4_4_ = uVar2;
      auVar37._0_4_ = uVar2;
      auVar37._8_4_ = uVar2;
      auVar37._12_4_ = uVar2;
      auVar18 = maxps(auVar37,auVar18);
      fVar70 = auVar18._0_4_ * 16384.0;
      *(float *)(param_1 + 0x16) = fVar62;
      lVar15 = lRam000000014c6dae48;
      fVar69 = fRam000000014c6dacac;
      fVar68 = fRam000000014c6daca8;
      fVar67 = fRam000000014c6daca4;
      fVar24 = _DAT_14c6daca0;
      fVar60 = fVar70 * fVar70 * fVar70;
      if (fVar62 <= fVar60 * _DAT_14c6daea0) {
        param_1[6] = _DAT_14c6dae40;
        param_1[7] = lVar15;
        lVar15 = lRam000000014c6dae58;
        param_1[8] = _DAT_14c6dae50;
        param_1[9] = lVar15;
        lVar15 = lRam000000014c6dae68;
        param_1[10] = _DAT_14c6dae60;
        param_1[0xb] = lVar15;
        *puVar1 = *puVar1 | 2;
        *(undefined4 *)(param_1 + 0x16) = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
      }
      else {
        local_res8[0] = 0xbd4ccccd;
        fVar48 = fVar63 * 0.1 * fVar48;
        fVar49 = fVar64 * 0.1 * fVar49;
        fVar50 = fVar65 * 0.1 * fVar50;
        fStack_3c4 = fVar63 * -0.05 * fVar54;
        fStack_3e0 = fVar64 * -0.05 * fVar56;
        fStack_3e4 = fVar65 * -0.05 * fVar58;
        _local_408 = ZEXT816(0);
        fVar54 = fVar50 + fVar49;
        fVar50 = fVar50 + fVar48;
        fVar49 = fVar49 + fVar48;
        fStack_3dc = 0.0;
        auVar27._4_4_ = 0;
        auVar27._0_4_ = fStack_3e4;
        auVar27._8_4_ = fStack_3c4;
        auVar27._12_4_ = 0;
        fStack_3bc = 0.0;
        _local_3d8 = auVar27 | ZEXT416((uint)fVar50) << 0x20;
        local_3e8 = fVar54;
        local_3c8 = fStack_3e0;
        fStack_3c0 = fVar49;
        FUN_144f75620(local_318,&local_3b8);
        FUN_144f75620(local_2e8,local_408);
        FUN_144f75870(&local_348,local_318,local_318);
        FUN_144f75870(&local_378,local_2e8,local_2e8);
        FUN_144f75830(&local_378);
        local_3e8 = local_3e8 + (local_348 - local_378) * fVar24;
        fStack_3e4 = fStack_3e4 + (fStack_344 - fStack_374) * fVar67;
        fStack_3e0 = fStack_3e0 + (fStack_340 - fStack_370) * fVar68;
        fStack_3dc = fStack_3dc + (fStack_33c - fStack_36c) * fVar69;
        local_3d8._4_4_ = (float)local_3d8._4_4_ + (fStack_334 - fStack_364) * fVar67;
        local_3d8._0_4_ = (float)local_3d8._0_4_ + (local_338 - local_368) * fVar24;
        uStack_3d0._0_4_ = (float)uStack_3d0 + (fStack_330 - fStack_360) * fVar68;
        uStack_3d0._4_4_ = uStack_3d0._4_4_ + (fStack_32c - fStack_35c) * fVar69;
        local_3c8 = local_3c8 + (local_328 - local_358) * fVar24;
        fStack_3c4 = fStack_3c4 + (fStack_324 - fStack_354) * fVar67;
        fStack_3c0 = fStack_3c0 + (fStack_320 - fStack_350) * fVar68;
        fStack_3bc = fStack_3bc + (fStack_31c - fStack_34c) * fVar69;
        piVar9 = (int *)FUN_144f75b70(&local_3e8,local_res8,&local_3a8,local_3f8,0x80,0x34000000);
        if (*piVar9 < 0) {
          *puVar1 = *puVar1 | 2;
          local_3a8 = _DAT_14c6dae40;
          lStack_3a0 = lRam000000014c6dae48;
          local_398 = _DAT_14c6dae50;
          lStack_390 = lRam000000014c6dae58;
          local_3f8._4_4_ = fRam000000014c6daca4;
          local_3f8._0_4_ = _DAT_14c6daca0;
          local_3f8._12_4_ = fRam000000014c6dacac;
          local_3f8._8_4_ = fRam000000014c6daca8;
          local_388 = _DAT_14c6dae60;
          lStack_380 = lRam000000014c6dae68;
          FUN_144bde670(local_408,local_2b8,0x200);
          FUN_144be6160(local_408,"Failed to diagonalize inertia matrix");
          FUN_144bfc0d0(0x45465,local_2b8,"GeometryProcessing\\ConvexHull\\hkgpConvexHullData.cpp",
                        0x206);
          FUN_144bde6e0(local_408);
        }
        FUN_144f75830(&local_3a8);
        FUN_144bfc360(&local_3a8);
        param_1[0xe] = CONCAT44(fStack_3e4,local_3e8);
        param_1[0xf] = CONCAT44(fStack_3dc,fStack_3e0);
        param_1[0x12] = CONCAT44(fStack_3c4,local_3c8);
        param_1[0x13] = CONCAT44(fStack_3bc,fStack_3c0);
        param_1[0x10] = (longlong)local_3d8;
        param_1[0x11] = uStack_3d0;
        FUN_144f75a00(&local_3e8,&local_3a8);
        *(float *)(param_1 + 0x14) = local_3e8;
        *(float *)((longlong)param_1 + 0xa4) = fStack_3e4;
        *(float *)(param_1 + 0x15) = fStack_3e0;
        *(float *)((longlong)param_1 + 0xac) = fStack_3dc;
        auVar33._4_4_ = 0;
        auVar33._0_4_ = local_3e8;
        auVar33._8_4_ = fStack_3e0;
        auVar33._12_4_ = fStack_3dc;
        auVar33 = auVar33 | ZEXT416((uint)local_3d8._4_4_) << 0x20;
        *(undefined1 (*) [16])(param_1 + 0x14) = auVar33;
        auVar21._0_8_ = auVar33._0_8_;
        auVar21._8_4_ = 0;
        auVar21._12_4_ = auVar33._12_4_;
        *(undefined1 (*) [16])(param_1 + 0x14) = ZEXT416((uint)fStack_3c0) << 0x40 | auVar21;
        FUN_144f75830(&local_3a8);
        auVar34._8_4_ = ABS(fVar49);
        param_1[6] = local_3a8;
        param_1[7] = lStack_3a0;
        param_1[8] = local_398;
        param_1[9] = lStack_390;
        param_1[10] = local_388;
        param_1[0xb] = lStack_380;
        auVar22._0_8_ = CONCAT44(fVar54,fVar54) & 0x7fffffff7fffffff;
        auVar22._8_4_ = ABS(fVar54);
        auVar22._12_4_ = ABS(fVar54);
        auVar28._0_8_ = CONCAT44(fVar50,fVar50) & 0x7fffffff7fffffff;
        auVar28._8_4_ = ABS(fVar50);
        auVar28._12_4_ = ABS(fVar50);
        auVar34._0_8_ = CONCAT44(fVar49,fVar49) & 0x7fffffff7fffffff;
        auVar34._12_4_ = auVar34._8_4_;
        auVar18 = minps(auVar28,auVar22);
        auVar18 = minps(auVar34,auVar18);
        if (auVar18._0_4_ * fVar62 <= fVar70 * fVar70 * _DAT_14c6daea0 * fVar60 * _DAT_14c6dadd0) {
          *puVar1 = *puVar1 | 2;
        }
      }
      *(ushort *)((longlong)param_1 + 0xba) = *puVar1 | 1;
    }
    else if (*(int *)((longlong)param_1 + 0x124) == 2) {
      lVar15 = *param_1;
      fVar67 = 0.0;
      fVar68 = 0.0;
      fVar69 = 0.0;
      fVar70 = 0.0;
      auVar18 = ZEXT816(0);
      fVar54 = (float)*(undefined8 *)(lVar15 + 0xc);
      fVar56 = (float)((ulonglong)*(undefined8 *)(lVar15 + 0xc) >> 0x20);
      fVar24 = *(float *)(lVar15 + 0x14);
      if (1 < (int)param_1[1] + -1) {
        uVar12 = (ulonglong)((int)param_1[1] - 2);
        pfVar11 = (float *)(lVar15 + 0x38);
        auVar47 = auVar18;
        do {
          fVar49 = *pfVar11;
          pfVar10 = pfVar11 + -2;
          pfVar6 = pfVar11 + 7;
          pfVar11 = pfVar11 + 9;
          fVar63 = (float)*(undefined8 *)pfVar10 - fVar54;
          fVar64 = (float)((ulonglong)*(undefined8 *)pfVar10 >> 0x20) - fVar56;
          fVar65 = fVar49 - fVar24;
          fVar60 = (float)*(undefined8 *)pfVar6 - fVar54;
          fVar61 = (float)((ulonglong)*(undefined8 *)pfVar6 >> 0x20) - fVar56;
          fVar62 = *pfVar11 - fVar24;
          fVar48 = (fVar62 * fVar64 - fVar65 * fVar61) * *(float *)(param_1 + 0x18);
          fVar50 = (fVar60 * fVar65 - fVar63 * fVar62) * *(float *)((longlong)param_1 + 0xc4);
          fVar58 = (fVar61 * fVar63 - fVar64 * fVar60) * *(float *)(param_1 + 0x19);
          in_XMM1._0_4_ = fVar50 + fVar48 + fVar58;
          in_XMM1._4_4_ = fVar50 + fVar48 + fVar58;
          in_XMM1._8_4_ = fVar50 + fVar48 + fVar58;
          in_XMM1._12_4_ = fVar50 + fVar48 + fVar58;
          auVar18._0_4_ = auVar47._0_4_ + ABS(in_XMM1._0_4_);
          auVar18._4_4_ = auVar47._4_4_ + ABS(in_XMM1._4_4_);
          auVar18._8_4_ = auVar47._8_4_ + ABS(in_XMM1._8_4_);
          auVar18._12_4_ = auVar47._12_4_ + ABS(in_XMM1._12_4_);
          fVar67 = fVar67 + ABS(in_XMM1._0_4_) * _DAT_14c6dada0 * (fVar60 + fVar63);
          fVar68 = fVar68 + ABS(in_XMM1._4_4_) * fRam000000014c6dada4 * (fVar61 + fVar64);
          fVar69 = fVar69 + ABS(in_XMM1._8_4_) * fRam000000014c6dada8 * (fVar62 + fVar65);
          fVar70 = fVar70 + ABS(in_XMM1._12_4_) * fRam000000014c6dadac *
                            ((*pfVar11 - fVar24) + (fVar49 - fVar24));
          uVar12 = uVar12 - 1;
          auVar47 = auVar18;
        } while (uVar12 != 0);
      }
      *(int *)((longlong)param_1 + 0xb4) = auVar18._0_4_;
      *(ushort *)((longlong)param_1 + 0xba) = uVar13 | 1;
      auVar5._4_8_ = in_XMM1._8_8_;
      auVar5._0_4_ = *(undefined4 *)((longlong)param_1 + 0x74);
      auVar29._0_8_ = auVar5._0_8_ << 0x20;
      auVar29._8_4_ = (int)param_1[0xf];
      auVar29._12_4_ = *(undefined4 *)((longlong)param_1 + 0x7c);
      auVar30._4_12_ = auVar29._4_12_;
      auVar30._0_4_ = _DAT_14c6daca0;
      *(undefined1 (*) [16])(param_1 + 0xe) = auVar30;
      lVar15 = lRam000000014c6dae48;
      param_1[0x14] = _DAT_14c6dae40;
      param_1[0x15] = lVar15;
      fVar24 = *(float *)(*param_1 + 0x14);
      uVar8 = *(undefined8 *)(*param_1 + 0xc);
      auVar47._4_4_ = fRam000000014c6daca4;
      auVar47._0_4_ = _DAT_14c6daca0;
      auVar47._8_4_ = fRam000000014c6daca8;
      auVar47._12_4_ = fRam000000014c6dacac;
      auVar18 = divps(auVar47,auVar18);
      *(float *)(param_1 + 0xc) = (float)uVar8 + auVar18._0_4_ * fVar67;
      *(float *)((longlong)param_1 + 100) =
           (float)((ulonglong)uVar8 >> 0x20) + auVar18._4_4_ * fVar68;
      *(float *)(param_1 + 0xd) = fVar24 + auVar18._8_4_ * fVar69;
      *(float *)((longlong)param_1 + 0x6c) = fVar24 + auVar18._12_4_ * fVar70;
    }
    else {
      param_1[0x16] = 0;
      *puVar1 = uVar13 | 1;
      lVar15 = lRam000000014c6dae48;
      param_1[0xe] = _DAT_14c6dae40;
      param_1[0xf] = lVar15;
      lVar15 = lRam000000014c6dae58;
      param_1[0x10] = _DAT_14c6dae50;
      param_1[0x11] = lVar15;
      lVar15 = lRam000000014c6dae68;
      param_1[0x12] = _DAT_14c6dae60;
      param_1[0x13] = lVar15;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      lVar15 = lRam000000014c6dae48;
      param_1[6] = _DAT_14c6dae40;
      param_1[7] = lVar15;
      lVar15 = lRam000000014c6dae58;
      param_1[8] = _DAT_14c6dae50;
      param_1[9] = lVar15;
      lVar15 = lRam000000014c6dae68;
      param_1[10] = _DAT_14c6dae60;
      param_1[0xb] = lVar15;
      lVar15 = _DAT_14c6dae78;
      param_1[0xc] = _DAT_14c6dae70;
      param_1[0xd] = lVar15;
    }
  }
  if ((*(byte *)((longlong)param_1 + 0xba) & 1) == 0) {
    uVar16 = 0x80040200;
  }
  *param_2 = uVar16;
  return param_2;
}



// FUNCTION 145529a20 FUN_145529a20 body=613 status=ok
// SIG undefined FUN_145529a20(void)

void FUN_145529a20(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 local_res8;
  undefined8 local_res10;
  
  lVar9 = (longlong)*param_3 * 0x2c;
  iVar6 = *param_2;
  lVar5 = (longlong)iVar6;
  lVar1 = *(longlong *)(param_1 + 0x10);
  local_res8 = *(undefined8 *)
                (lVar9 + (longlong)*(int *)(&DAT_149da5e88 + (longlong)param_3[1] * 4) * 8 + 4 +
                lVar1);
  uVar2 = *(undefined8 *)(lVar1 + (ulonglong)(1 << ((byte)param_3[1] & 0x1f) & 3) * 8 + 4 + lVar9);
  if (iVar6 == (int)local_res8) {
    local_res10 = *(undefined8 *)
                   (lVar1 + (longlong)*(int *)(&DAT_149da5e88 + (longlong)param_2[1] * 4) * 8 + 4 +
                   lVar5 * 0x2c);
    iVar3 = (int)local_res10;
    local_res8 = uVar2;
  }
  else {
    if (iVar6 != (int)uVar2) {
      return;
    }
    local_res10 = *(undefined8 *)
                   (lVar1 + (ulonglong)(1 << ((byte)param_2[1] & 0x1f) & 3) * 8 + 4 + lVar5 * 0x2c);
    iVar3 = (int)local_res10;
  }
  lVar5 = lVar5 * 0x2c + lVar1;
  iVar7 = (int)local_res8;
  if (iVar6 == iVar7) {
    *(undefined4 *)(lVar5 + 0x28) = 0x7fffffff;
    *(undefined4 *)((longlong)*param_3 * 0x2c + 0x28 + *(longlong *)(param_1 + 0x10)) = 0x7fffffff;
  }
  else if (iVar3 == -1) {
    *(undefined4 *)(lVar5 + 0x28) = 0x7fffffff;
    *(undefined4 *)(lVar1 + lVar9 + 0x28) = 0x7fffffff;
  }
  else {
    iVar6 = (int)((ulonglong)local_res10 >> 0x20);
    iVar8 = (int)local_res10;
    if (*(int *)((longlong)iVar3 * 0x2c + lVar1 + 4 + (longlong)iVar6 * 8) != -1) {
      uVar2 = *(undefined8 *)((longlong)iVar8 * 0x2c + lVar1 + 4 + (longlong)iVar6 * 8);
      *(undefined4 *)
       ((longlong)(int)uVar2 * 0x2c + lVar1 + 4 + (longlong)(int)((ulonglong)uVar2 >> 0x20) * 8) =
           0xffffffff;
    }
    *(undefined4 *)
     ((longlong)iVar8 * 0x2c + (longlong)iVar6 * 8 + 4 + *(longlong *)(param_1 + 0x10)) = 0xffffffff
    ;
    iVar3 = (int)((ulonglong)local_res8 >> 0x20);
    lVar4 = (longlong)iVar7 * 0x2c + *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar4 + 4 + (longlong)iVar3 * 8) != -1) {
      uVar2 = *(undefined8 *)(lVar4 + 4 + (longlong)iVar3 * 8);
      *(undefined4 *)
       ((longlong)(int)uVar2 * 0x2c + *(longlong *)(param_1 + 0x10) + 4 +
       (longlong)(int)((ulonglong)uVar2 >> 0x20) * 8) = 0xffffffff;
    }
    *(undefined4 *)
     ((longlong)iVar7 * 0x2c + (longlong)iVar3 * 8 + 4 + *(longlong *)(param_1 + 0x10)) = 0xffffffff
    ;
    *(undefined4 *)(lVar5 + 0x28) = 0x7fffffff;
    *(undefined4 *)(lVar1 + lVar9 + 0x28) = 0x7fffffff;
    *(undefined8 *)
     ((longlong)iVar8 * 0x2c + (longlong)iVar6 * 8 + 4 + *(longlong *)(param_1 + 0x10)) = local_res8
    ;
    if (iVar7 != -1) {
      *(undefined8 *)
       ((longlong)iVar7 * 0x2c + (longlong)iVar3 * 8 + 4 + *(longlong *)(param_1 + 0x10)) =
           local_res10;
    }
    FUN_145529a20(param_1,&local_res10,&local_res8);
  }
  return;
}



// FUNCTION 145529c90 FUN_145529c90 body=8365 status=ok
// SIG undefined FUN_145529c90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145529c90(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auVar7 [12];
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int *piVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  char cVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  undefined8 *puVar22;
  uint *puVar23;
  int *piVar24;
  undefined1 (*pauVar25) [16];
  uint *puVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  float *pfVar32;
  ulonglong uVar33;
  longlong *plVar34;
  double dVar35;
  int iVar36;
  undefined8 *puVar37;
  longlong *plVar38;
  longlong lVar39;
  ulonglong uVar40;
  ulonglong uVar41;
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
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar72;
  uint uVar73;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  uint uVar74;
  float fVar75;
  float fVar76;
  double dVar77;
  double dVar78;
  float fVar92;
  float fVar95;
  float fVar96;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  uint uVar93;
  double dVar97;
  uint uVar99;
  undefined1 auVar86 [16];
  float fVar94;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar98;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar100 [12];
  undefined1 auVar101 [16];
  double dVar108;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double dVar109;
  double dVar110;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  double dVar111;
  undefined4 uVar112;
  double dVar113;
  double dVar114;
  undefined1 auVar115 [16];
  double dVar119;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  float fVar120;
  float fVar121;
  double dVar122;
  undefined1 auVar123 [16];
  double dVar124;
  undefined4 uVar125;
  double dVar126;
  undefined1 auVar127 [16];
  uint local_660;
  byte local_65c;
  uint local_658 [2];
  uint *local_650;
  uint local_648;
  uint local_644;
  undefined8 *local_640;
  uint *local_638;
  double local_630;
  ulonglong local_628;
  undefined8 *local_620;
  uint *local_618;
  ulonglong local_610 [2];
  uint *local_600;
  uint *local_5f8;
  int *local_5f0;
  uint local_5e8;
  uint local_5e4;
  ulonglong local_5e0;
  undefined8 local_5d8;
  ulonglong local_5d0;
  uint *local_5c8;
  uint local_5c0;
  uint local_5bc;
  double local_5b8;
  uint *local_5b0;
  undefined8 *local_5a8;
  uint local_5a0;
  uint *local_598;
  uint local_590;
  uint local_58c;
  ulonglong local_588;
  uint *local_580;
  ulonglong local_578;
  uint *local_570;
  uint local_568;
  uint local_564;
  ulonglong local_560;
  uint *local_558;
  uint *local_550;
  uint *local_548;
  uint *local_540;
  double local_538;
  double local_520;
  double dStack_518;
  double local_500;
  double dStack_4f8;
  uint *local_4f0;
  uint *local_4e0 [64];
  uint *local_2e0 [85];
  
  uVar27 = 0;
  *(ushort *)((longlong)param_1 + 0xba) = *(ushort *)((longlong)param_1 + 0xba) & 0xfffb;
  lVar11 = *param_1;
  iVar36 = *(int *)((longlong)param_1 + 0x124);
  puVar37 = (undefined8 *)(lVar11 + 0xc);
  local_65c = *(byte *)(param_1 + 0x17) >> 6 & 1;
  iVar10 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  local_620 = puVar37;
  if (iVar36 == 1) {
    if ((*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < 2) {
      FUN_1418055da(param_1 + 4,&PTR_vftable_14c6e47a0,2);
    }
    if ((int)param_1[5] < 2) {
      *(undefined4 *)(param_1 + 5) = 2;
    }
    else if (2 < (int)param_1[5]) {
      *(undefined4 *)(param_1 + 5) = 2;
    }
    fVar75 = *(float *)(lVar11 + 0x14);
    fVar120 = (float)*(undefined8 *)(lVar11 + 0x30);
    fVar121 = (float)((ulonglong)*(undefined8 *)(lVar11 + 0x30) >> 0x20);
    fVar94 = (float)*puVar37;
    fVar72 = (float)((ulonglong)*puVar37 >> 0x20);
    fVar92 = *(float *)(lVar11 + 0x38);
    auVar106._0_4_ = fVar120 - fVar94;
    auVar106._4_4_ = fVar121 - fVar72;
    auVar106._8_4_ = fVar92 - fVar75;
    auVar106._12_4_ = fVar92 - fVar75;
    fVar96 = auVar106._0_4_ * auVar106._0_4_;
    fVar95 = auVar106._4_4_ * auVar106._4_4_;
    fVar76 = auVar106._8_4_ * auVar106._8_4_;
    auVar62._4_4_ = fVar96;
    auVar62._0_4_ = fVar96;
    auVar62._8_4_ = fVar96;
    auVar62._12_4_ = fVar96;
    auVar67._0_4_ = fVar95 + fVar96 + fVar76;
    auVar67._4_4_ = fVar95 + fVar96 + fVar76;
    auVar67._8_4_ = fVar95 + fVar96 + fVar76;
    auVar67._12_4_ = fVar95 + fVar96 + fVar76;
    if (auVar67._0_4_ == 0.0) {
      auVar100 = SUB1612(ZEXT816(0),0);
    }
    else {
      auVar62 = sqrtps(auVar62,auVar67);
      auVar62 = divps(auVar106,auVar62);
      auVar100 = auVar62._0_12_;
    }
    auVar107._12_4_ =
         0.0 - (auVar100._4_4_ * fVar121 + auVar100._0_4_ * fVar120 + auVar100._8_4_ * fVar92);
    auVar107._0_12_ = auVar100;
    *(undefined1 (*) [16])param_1[4] = auVar107;
    fVar92 = -auVar100._0_4_;
    fVar96 = -auVar100._4_4_;
    fVar95 = -auVar100._8_4_;
    lVar11 = param_1[4];
    *(float *)(lVar11 + 0x10) = fVar92;
    *(float *)(lVar11 + 0x14) = fVar96;
    *(float *)(lVar11 + 0x18) = fVar95;
    *(float *)(lVar11 + 0x1c) = 0.0 - (fVar72 * fVar96 + fVar94 * fVar92 + fVar75 * fVar95);
    goto LAB_14552bc54;
  }
  if (iVar36 == 2) {
    iVar36 = (int)param_1[1];
    uVar30 = (ulonglong)iVar36;
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar36) {
      FUN_1418055da(param_1 + 4,&PTR_vftable_14c6e47a0,uVar30);
    }
    if (((int)param_1[5] < iVar36) || (iVar36 < (int)param_1[5])) {
      *(int *)(param_1 + 5) = iVar36;
    }
    puVar22 = (undefined8 *)(longlong)(iVar36 * 0x24 + -0x24);
    fVar75 = *(float *)((longlong)param_1 + 0xc4);
    fVar92 = *(float *)(param_1 + 0x19);
    dVar108 = (double)*(float *)(param_1 + 0x18);
    auVar127._0_8_ = (double)(float)*(undefined8 *)((longlong)puVar22 + (longlong)puVar37);
    auVar127._8_8_ =
         (double)(float)((ulonglong)*(undefined8 *)((longlong)puVar22 + (longlong)puVar37) >> 0x20);
    dVar97 = (double)*(float *)((longlong)param_1 + 0xcc);
    dVar35 = (double)*(float *)((longlong)(puVar22 + 1) + (longlong)puVar37);
    dVar114 = (double)*(float *)((longlong)(puVar22 + 1) + (longlong)puVar37);
    local_520 = (double)(float)*(undefined8 *)((longlong)param_1 + 0xf4);
    dStack_518 = (double)(float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xf4) >> 0x20);
    local_500 = (double)*(float *)((longlong)param_1 + 0xfc);
    dStack_4f8 = (double)*(float *)((longlong)param_1 + 0xfc);
    bVar9 = local_65c;
    if (0 < iVar36) {
      uVar33 = uVar27;
      uVar28 = uVar27;
      uVar31 = uVar27;
      do {
        iVar36 = (int)uVar28;
        fVar96 = *(float *)((longlong)iVar36 + 8 + (longlong)puVar37);
        uVar3 = *(undefined8 *)((longlong)iVar36 + (longlong)puVar37);
        dVar122 = (double)(float)uVar3;
        dVar124 = (double)(float)((ulonglong)uVar3 >> 0x20);
        dVar110 = (double)fVar96;
        dVar6 = (double)fVar96;
        uVar112 = SUB84(dVar124,0);
        auVar89._8_4_ = uVar112;
        auVar89._0_8_ = dVar122;
        uVar125 = (undefined4)((ulonglong)dVar124 >> 0x20);
        auVar89._12_4_ = uVar125;
        dVar78 = dVar122 - auVar127._0_8_;
        dVar98 = auVar89._8_8_ - auVar127._8_8_;
        auVar70._8_4_ = SUB84(dVar6,0);
        auVar70._0_8_ = dVar110;
        auVar70._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        dVar124 = auVar70._8_8_ - dVar114;
        auVar51._8_4_ = SUB84(dVar98,0);
        auVar51._0_8_ = dVar78;
        auVar51._12_4_ = (int)((ulonglong)dVar98 >> 0x20);
        dVar98 = dVar98 * dVar108 - dVar78 * (double)fVar75;
        dVar109 = (dVar110 - dVar35) * (double)fVar75 - auVar51._8_8_ * (double)fVar92;
        auVar52._8_4_ = SUB84(dVar97,0);
        auVar52._0_8_ = dVar108;
        auVar52._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
        dVar78 = dVar78 * (double)fVar92 - dVar108 * (dVar110 - dVar35);
        dVar124 = dVar124 * dVar97 - auVar52._8_8_ * dVar124;
        uVar93 = SUB84(dVar78,0);
        uVar99 = (uint)((ulonglong)dVar78 >> 0x20);
        auVar53._8_4_ = uVar93;
        auVar53._0_8_ = dVar109;
        auVar53._12_4_ = uVar99;
        auVar54._8_8_ = auVar53._8_8_ * dVar78;
        auVar54._0_8_ = auVar54._8_8_;
        auVar90._0_8_ = dVar109 * dVar109 + auVar54._8_8_ + dVar98 * dVar98;
        auVar90._8_8_ = dVar109 * dVar109 + auVar54._8_8_ + dVar98 * dVar98;
        uVar40 = -(ulonglong)(0.0 - auVar90._0_8_ < 0.0);
        uVar41 = -(ulonglong)(0.0 - auVar90._8_8_ < 0.0);
        auVar71._8_8_ = uVar41;
        auVar71._0_8_ = uVar40;
        auVar62 = _DAT_14c6db100;
        if (NAN(auVar90._0_8_) || auVar90._0_8_ != 0.0) {
          auVar62 = sqrtpd(auVar54,auVar90);
          auVar62 = divpd(_DAT_14c6db120,auVar62);
        }
        auVar116._8_4_ = uVar93;
        auVar116._0_8_ = dVar109;
        auVar116._12_4_ = uVar99;
        iVar18 = movmskpd((int)CONCAT71((int7)((ulonglong)puVar22 >> 8),auVar90._0_8_ == 0.0),
                          auVar71);
        uVar73 = (uint)(uVar40 >> 0x20);
        uVar74 = (uint)(uVar41 >> 0x20);
        iVar10 = movmskpd((int)CONCAT71((int7)(int3)(uVar28 >> 8),!NAN(auVar90._0_8_)),auVar71);
        auVar55._0_4_ = ~(uint)uVar40 & SUB84(dVar109,0);
        auVar55._4_4_ = ~uVar73 & (uint)((ulonglong)dVar109 >> 0x20);
        auVar55._8_4_ = ~(uint)uVar41 & uVar93;
        auVar55._12_4_ = ~uVar74 & uVar99;
        auVar117._0_8_ = uVar40 & (ulonglong)(dVar109 * auVar62._0_8_);
        uVar8 = uVar41 & (ulonglong)(auVar116._8_8_ * auVar62._8_8_);
        auVar117._8_4_ = (undefined4)uVar8;
        auVar117._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar117 = auVar117 | auVar55;
        auVar105._0_8_ = (ulonglong)(auVar62._0_8_ * dVar98) & uVar40;
        uVar8 = (ulonglong)(auVar62._8_8_ * dVar124) & uVar41;
        auVar105._8_4_ = (undefined4)uVar8;
        auVar105._12_4_ = (undefined4)(uVar8 >> 0x20);
        auVar56._0_4_ = ~(uint)uVar40 & SUB84(dVar98,0);
        auVar56._4_4_ = ~uVar73 & (uint)((ulonglong)dVar98 >> 0x20);
        auVar56._8_4_ = ~(uint)uVar41 & SUB84(dVar124,0);
        auVar56._12_4_ = ~uVar74 & (uint)((ulonglong)dVar124 >> 0x20);
        auVar105 = auVar105 | auVar56;
        iVar29 = (int)uVar27;
        if (iVar18 == 0 && iVar10 == 0) {
          *(int *)(param_1 + 1) = (int)param_1[1] + -1;
          puVar22 = (undefined8 *)((longlong)iVar29 * 9);
          pauVar25 = (undefined1 (*) [16])(*param_1 + (longlong)iVar29 * 0x24);
          uVar93 = (int)param_1[1] - iVar29;
          uVar40 = (ulonglong)uVar93;
          if (((uVar93 != 0) && (pauVar25 != (undefined1 (*) [16])(pauVar25[2] + 4))) &&
             (0 < (int)uVar93)) {
            do {
              if (pauVar25 != (undefined1 (*) [16])0x0) {
                *pauVar25 = *(undefined1 (*) [16])(pauVar25[2] + 4);
                pauVar25[1] = *(undefined1 (*) [16])(pauVar25[3] + 4);
                *(undefined4 *)pauVar25[2] = *(undefined4 *)(pauVar25[4] + 4);
              }
              pauVar25 = (undefined1 (*) [16])(pauVar25[2] + 4);
              uVar40 = uVar40 - 1;
            } while (uVar40 != 0);
          }
          uVar30 = (ulonglong)((int)uVar30 - 1);
          bVar9 = 1;
        }
        else {
          puVar22 = (undefined8 *)(param_1[4] + uVar33);
          uVar31 = (ulonglong)((int)uVar31 + 1);
          uVar33 = uVar33 + 0x10;
          uVar27 = (ulonglong)(iVar29 + 1);
          uVar28 = (ulonglong)(iVar36 + 0x24);
          auVar57._8_4_ = uVar112;
          auVar57._0_8_ = dVar122;
          auVar57._12_4_ = uVar125;
          auVar127._8_4_ = uVar112;
          auVar127._0_8_ = dVar122;
          auVar127._12_4_ = uVar125;
          dVar124 = 0.0 - (dVar122 * auVar117._0_8_ + auVar57._8_8_ * auVar117._8_8_ +
                          auVar105._0_8_ * dVar110);
          dVar35 = local_520 * auVar117._0_8_;
          dVar114 = dStack_518 * auVar117._8_8_;
          auVar91._8_4_ = SUB84(dVar114,0);
          auVar91._0_8_ = dVar35;
          auVar91._12_4_ = (int)((ulonglong)dVar114 >> 0x20);
          dVar35 = auVar91._8_8_ + dVar35;
          dVar114 = auVar105._0_8_ * local_500 + dVar124;
          auVar58._8_4_ = SUB84(dVar114,0);
          auVar58._0_8_ = dVar35;
          auVar58._12_4_ = (int)((ulonglong)dVar114 >> 0x20);
          uVar93 = (uint)(-(ulonglong)(0.0 < auVar58._8_8_ + dVar35) >> 0x20) & 0x80000000;
          uVar99 = (uint)(-(ulonglong)(0.0 < dVar35 + dVar114) >> 0x20) & 0x80000000;
          auVar118._0_8_ = (double)CONCAT44(auVar117._4_4_ ^ uVar93,auVar117._0_4_);
          auVar118._8_4_ = auVar117._8_4_;
          auVar118._12_4_ = auVar117._12_4_ ^ uVar99;
          *puVar22 = CONCAT44((float)auVar118._8_8_,(float)auVar118._0_8_);
          puVar22[1] = CONCAT44((float)(double)CONCAT44((uint)((ulonglong)dVar124 >> 0x20) ^ uVar99,
                                                        SUB84(dVar124,0)),
                                (float)(double)CONCAT44(auVar105._4_4_ ^ uVar93,auVar105._0_4_));
          dVar35 = dVar110;
          dVar114 = dVar6;
        }
        iVar10 = (int)uVar31;
      } while ((int)uVar27 < (int)uVar30);
    }
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar10) {
      FUN_1418055da(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar10);
    }
    local_65c = bVar9;
    if ((int)param_1[5] < iVar10) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else if (iVar10 < (int)param_1[5]) {
      *(int *)(param_1 + 5) = iVar10;
    }
    goto LAB_14552bc54;
  }
  if (iVar36 != 3) {
    return;
  }
  uVar93 = *(uint *)(param_1 + 3);
  dVar35 = (double)(longlong)(int)uVar93;
  puVar14 = *(uint **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  fVar75 = *(float *)((longlong)param_1 + 0x10c) - (float)*(undefined8 *)((longlong)param_1 + 0x11c)
  ;
  fVar92 = *(float *)(param_1 + 0x22) -
           (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x11c) >> 0x20);
  auVar79._8_4_ = *(float *)((longlong)param_1 + 0x114) - *(float *)(param_1 + 0x23);
  auVar123._8_4_ = 0x38d1b717;
  auVar123._0_8_ = 0x38d1b71738d1b717;
  auVar123._12_4_ = 0x38d1b717;
  local_640 = (undefined8 *)CONCAT44(local_640._4_4_,uVar93);
  local_590 = 0;
  local_58c = 0x80000000;
  auVar42._4_4_ = fVar75;
  auVar42._0_4_ = fVar75;
  auVar42._8_4_ = fVar75;
  auVar42._12_4_ = fVar75;
  auVar61._4_4_ = fVar92;
  auVar61._0_4_ = fVar92;
  auVar61._8_4_ = fVar92;
  auVar61._12_4_ = fVar92;
  auVar79._4_4_ = auVar79._8_4_;
  auVar79._0_4_ = auVar79._8_4_;
  auVar79._12_4_ = auVar79._8_4_;
  auVar62 = maxps(auVar61,auVar42);
  local_638 = (uint *)&DAT_00000114;
  auVar62 = maxps(auVar79,auVar62);
  auVar80._0_4_ = auVar62._0_4_ * 0.0001;
  auVar80._4_4_ = auVar62._4_4_ * 0.0001;
  auVar80._8_4_ = auVar62._8_4_ * 0.0001;
  auVar80._12_4_ = auVar62._12_4_ * 0.0001;
  auVar62 = maxps(auVar123,auVar80);
  local_618 = puVar14;
  if ((char)puVar14[0x45] == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(puVar14 + 0x3c);
  if (lVar11 == 0) {
    if (*(char *)((longlong)local_638 + (longlong)puVar14) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(puVar14 + 0x3c) = lVar11;
  }
  uVar30 = *(ulonglong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
  local_588 = uVar27;
  if (*(longlong *)(uVar30 + 8) == 0) {
    local_588 = uVar30;
  }
  local_628 = (longlong)dVar35 * 0x10;
  local_630 = dVar35;
  local_578 = local_628;
  if (local_588 == 0) {
    local_650 = (uint *)(*DAT_14c787670)(CONCAT71((int7)(local_628 >> 8),1),&local_628,0x40);
  }
  else {
    local_610[0] = local_628 + 0x3f & 0xffffffffffffffc0;
    if (local_610[0] <= *(ulonglong *)(local_588 + 0x28)) {
      local_650 = *(uint **)(local_588 + 0x38);
      if (local_610[0] + (longlong)local_650 <= *(ulonglong *)(local_588 + 0x40)) {
        *(ulonglong *)(local_588 + 0x38) = local_610[0] + (longlong)local_650;
        goto LAB_145529e94;
      }
    }
    local_650 = (uint *)FUN_144b454a0(local_588,local_610);
  }
LAB_145529e94:
  local_660 = uVar93 | 0x80000000;
  local_598 = local_650;
  local_58c = local_660;
  local_580 = local_650;
  if ((int)(uVar93 & 0x7fffffff) < (int)uVar93) {
    FUN_1418055da(&local_598,&PTR_vftable_14c6e47a0,dVar35);
  }
  if (((int)local_590 < (int)uVar93) || ((int)uVar93 < (int)local_590)) {
    local_590 = uVar93;
  }
  local_520 = (double)(float)*(undefined8 *)((longlong)param_1 + 0xf4);
  dStack_518 = (double)(float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xf4) >> 0x20);
  local_500 = (double)*(float *)((longlong)param_1 + 0xfc);
  dStack_4f8 = (double)*(float *)((longlong)param_1 + 0xfc);
  if (0 < (int)uVar93) {
    lVar11 = param_1[2];
    uVar30 = uVar27;
    uVar33 = uVar27;
    uVar28 = uVar27;
    do {
      lVar19 = (longlong)(*(int *)(uVar30 + 0x1c + lVar11) * 0x24);
      uVar3 = *(undefined8 *)(lVar19 + (longlong)puVar37);
      dVar97 = (double)(float)uVar3;
      dVar110 = (double)(float)((ulonglong)uVar3 >> 0x20);
      lVar20 = (longlong)(*(int *)(uVar30 + 0x20 + lVar11) * 0x24);
      dVar6 = (double)*(float *)(lVar19 + 8 + (longlong)puVar37);
      uVar3 = *(undefined8 *)(lVar20 + (longlong)puVar37);
      dVar124 = (double)(float)uVar3;
      dVar78 = (double)(float)((ulonglong)uVar3 >> 0x20);
      lVar11 = (longlong)(*(int *)(uVar30 + 0x24 + lVar11) * 0x24);
      auVar115._8_4_ = SUB84(dVar78,0);
      auVar115._0_8_ = dVar124;
      auVar115._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
      dVar126 = (double)*(float *)(lVar20 + 8 + (longlong)puVar37);
      uVar3 = *(undefined8 *)(lVar11 + (longlong)puVar37);
      dVar98 = (double)(float)uVar3;
      dVar109 = (double)(float)((ulonglong)uVar3 >> 0x20);
      dVar122 = (double)*(float *)(lVar11 + 8 + (longlong)puVar37);
      dVar113 = dVar124 - dVar97;
      dVar119 = auVar115._8_8_ - dVar110;
      auVar101._8_4_ = SUB84(dVar109,0);
      auVar101._0_8_ = dVar98;
      auVar101._12_4_ = (int)((ulonglong)dVar109 >> 0x20);
      dVar108 = auVar101._8_8_ - dVar110;
      dVar111 = dVar122 - dVar6;
      dVar77 = dVar126 - dVar6;
      auVar43._8_4_ = SUB84(dVar119,0);
      auVar43._0_8_ = dVar113;
      auVar43._12_4_ = (int)((ulonglong)dVar119 >> 0x20);
      dVar114 = dVar108 * dVar113 - (dVar98 - dVar97) * auVar43._8_8_;
      dVar108 = dVar111 * dVar119 - dVar108 * dVar77;
      dVar111 = dVar77 * (dVar98 - dVar97) - dVar111 * dVar113;
      auVar102._8_4_ = SUB84(dVar108,0);
      auVar102._0_8_ = dVar114;
      auVar102._12_4_ = (int)((ulonglong)dVar108 >> 0x20);
      dVar119 = auVar102._8_8_;
      auVar63._8_4_ = SUB84(dVar111,0);
      auVar63._0_8_ = dVar119;
      auVar63._12_4_ = (int)((ulonglong)dVar111 >> 0x20);
      dVar108 = dVar119 * dVar119;
      dVar113 = auVar63._8_8_ * dVar111;
      auVar100._4_8_ = dVar77;
      auVar100._0_4_ = (int)((ulonglong)dVar108 >> 0x20);
      auVar44._0_8_ = auVar100._0_8_ << 0x20;
      auVar44._8_4_ = SUB84(dVar113,0);
      auVar44._12_4_ = (int)((ulonglong)dVar113 >> 0x20);
      auVar45._8_8_ = dVar113;
      auVar45._0_8_ = auVar44._8_8_;
      auVar81._0_8_ = dVar114 * dVar114 + dVar108 + auVar44._8_8_;
      auVar81._8_8_ = dVar114 * dVar114 + dVar108 + dVar113;
      auVar67 = _DAT_14c6db100;
      if (auVar81._0_8_ != 0.0) {
        auVar67 = sqrtpd(auVar45,auVar81);
        auVar67 = divpd(_DAT_14c6db120,auVar67);
      }
      dVar119 = auVar67._0_8_ * dVar119;
      dVar111 = auVar67._8_8_ * dVar111;
      dVar114 = auVar67._0_8_ * dVar114;
      uVar112 = SUB84(dVar111,0);
      auVar64._8_4_ = uVar112;
      auVar64._0_8_ = dVar119;
      uVar73 = (uint)((ulonglong)dVar111 >> 0x20);
      auVar64._12_4_ = uVar73;
      auVar46._8_4_ = uVar112;
      auVar46._0_8_ = dVar119;
      auVar46._12_4_ = uVar73;
      auVar103._8_4_ = uVar112;
      auVar103._0_8_ = dVar119;
      auVar103._12_4_ = uVar73;
      dVar109 = auVar103._8_8_ * dVar109;
      auVar82._0_8_ = dVar119 * dVar97 + auVar64._8_8_ * dVar110 + dVar114 * dVar6;
      auVar82._8_8_ = dVar119 * dVar124 + auVar46._8_8_ * dVar78 + dVar126 * dVar114;
      auVar65._8_4_ = SUB84(auVar82._8_8_,0);
      auVar65._0_8_ = auVar82._0_8_;
      auVar65._12_4_ = (int)((ulonglong)auVar82._8_8_ >> 0x20);
      auVar66._8_8_ = auVar82._0_8_;
      auVar66._0_8_ = auVar65._8_8_;
      auVar67 = minpd(auVar66,auVar82);
      auVar7._4_8_ = auVar82._8_8_;
      auVar7._0_4_ = (int)((ulonglong)(dVar119 * dVar98) >> 0x20);
      auVar83._0_8_ = auVar7._0_8_ << 0x20;
      auVar83._8_4_ = SUB84(dVar109,0);
      auVar83._12_4_ = (int)((ulonglong)dVar109 >> 0x20);
      auVar84._0_8_ = auVar83._8_8_ + dVar119 * dVar98 + dVar114 * dVar122;
      auVar84._8_8_ = 0;
      auVar67 = minpd(auVar84,auVar67);
      dVar110 = 0.0 - auVar67._0_8_;
      auVar85._8_4_ = uVar112;
      auVar85._0_8_ = dVar119;
      auVar85._12_4_ = uVar73;
      dVar108 = auVar85._8_8_ * dStack_518 + dVar119 * local_520;
      dVar97 = dVar114 * local_500 + dVar110;
      auVar47._8_4_ = SUB84(dVar97,0);
      auVar47._0_8_ = dVar108;
      auVar47._12_4_ = (int)((ulonglong)dVar97 >> 0x20);
      uVar93 = (uint)(-(ulonglong)(0.0 < auVar47._8_8_ + dVar108) >> 0x20) & 0x80000000;
      uVar99 = (uint)(-(ulonglong)(0.0 < dVar108 + dVar97) >> 0x20) & 0x80000000;
      auVar86._0_8_ = (double)CONCAT44(uVar93 ^ (uint)((ulonglong)dVar114 >> 0x20),SUB84(dVar114,0))
      ;
      auVar86._8_4_ = SUB84(dVar110,0);
      auVar86._12_4_ = uVar99 ^ (uint)((ulonglong)dVar110 >> 0x20);
      *(undefined8 *)((longlong)local_598 + uVar33) =
           CONCAT44((float)(double)CONCAT44(uVar73 ^ uVar99,uVar112),
                    (float)(double)CONCAT44((uint)((ulonglong)dVar119 >> 0x20) ^ uVar93,
                                            SUB84(dVar119,0)));
      ((undefined8 *)((longlong)local_598 + uVar33))[1] =
           CONCAT44((float)auVar86._8_8_,(float)auVar86._0_8_);
      pfVar21 = (float *)((longlong)local_598 + uVar33);
      fVar75 = pfVar21[1];
      fVar92 = pfVar21[2];
      fVar96 = pfVar21[3];
      puVar14 = (uint *)((longlong)local_598 + uVar33);
      uVar93 = puVar14[1];
      uVar99 = puVar14[2];
      uVar73 = puVar14[3];
      puVar16 = (uint *)((longlong)local_598 + uVar33);
      *puVar16 = ~-(uint)(*pfVar21 == 0.0) & *puVar14;
      puVar16[1] = ~-(uint)(fVar75 == 0.0) & uVar93;
      puVar16[2] = ~-(uint)(fVar92 == 0.0) & uVar99;
      puVar16[3] = ~-(uint)(fVar96 == 0.0) & uVar73;
      lVar11 = param_1[2];
      lVar20 = (longlong)(int)uVar28 * 0x2c;
      uVar3 = *(undefined8 *)(lVar20 + 4 + lVar11);
      uVar4 = *(undefined8 *)(lVar20 + 0xc + lVar11);
      lVar19 = (longlong)
               (*(int *)(lVar11 + 0x1c +
                        ((longlong)(int)uVar3 * 0xb +
                        (longlong)
                        *(int *)(&DAT_149da5e88 + (longlong)(int)((ulonglong)uVar3 >> 0x20) * 4)) *
                        4) * 0x24);
      uVar3 = *(undefined8 *)(lVar19 + (longlong)puVar37);
      pfVar21 = (float *)((longlong)local_598 + uVar33);
      fVar75 = *pfVar21;
      fVar92 = pfVar21[1];
      fVar96 = pfVar21[2];
      fVar95 = pfVar21[3];
      uVar5 = *(undefined8 *)(lVar20 + 0x14 + lVar11);
      lVar20 = (longlong)
               (*(int *)(lVar11 + 0x1c +
                        ((longlong)(int)uVar4 * 0xb +
                        (longlong)
                        *(int *)(&DAT_149da5e88 + (longlong)(int)((ulonglong)uVar4 >> 0x20) * 4)) *
                        4) * 0x24);
      uVar4 = *(undefined8 *)(lVar20 + (longlong)puVar37);
      lVar12 = (longlong)
               (*(int *)(lVar11 + 0x1c +
                        ((longlong)(int)uVar5 * 0xb +
                        (longlong)
                        *(int *)(&DAT_149da5e88 + (longlong)(int)((ulonglong)uVar5 >> 0x20) * 4)) *
                        4) * 0x24);
      uVar5 = *(undefined8 *)(lVar12 + (longlong)puVar37);
      fVar76 = (float)((ulonglong)uVar3 >> 0x20) * fVar92 + (float)uVar3 * fVar75 +
               *(float *)(lVar19 + 8 + (longlong)puVar37) * fVar96 + fVar95;
      fVar94 = (float)((ulonglong)uVar4 >> 0x20) * fVar92 + (float)uVar4 * fVar75 +
               *(float *)(lVar20 + 8 + (longlong)puVar37) * fVar96 + fVar95;
      auVar87._8_4_ =
           (float)((ulonglong)uVar5 >> 0x20) * fVar92 + (float)uVar5 * fVar75 +
           *(float *)(lVar12 + 8 + (longlong)puVar37) * fVar96 + fVar95;
      auVar48._4_4_ = fVar76;
      auVar48._0_4_ = fVar76;
      auVar48._8_4_ = fVar76;
      auVar48._12_4_ = fVar76;
      auVar68._4_4_ = fVar94;
      auVar68._0_4_ = fVar94;
      auVar68._8_4_ = fVar94;
      auVar68._12_4_ = fVar94;
      auVar67 = maxps(auVar68,auVar48);
      auVar87._4_4_ = auVar87._8_4_;
      auVar87._0_4_ = auVar87._8_4_;
      auVar87._12_4_ = auVar87._8_4_;
      auVar67 = maxps(auVar87,auVar67);
      if (auVar62._0_4_ < auVar67._0_4_) {
        *(ushort *)((longlong)param_1 + 0xba) = *(ushort *)((longlong)param_1 + 0xba) | 4;
      }
      uVar28 = (ulonglong)((int)uVar28 + 1);
      uVar30 = uVar30 + 0x2c;
      uVar33 = uVar33 + 0x10;
      dVar35 = (double)((longlong)dVar35 - 1);
    } while (dVar35 != 0.0);
    uVar93 = SUB84(local_630,0);
    dVar35 = local_630;
    puVar14 = local_618;
  }
  pfVar21 = (float *)*param_2;
  local_650 = local_598;
  if (pfVar21 == (float *)param_2[1]) {
    local_658[0] = 0;
    local_5e8 = 0;
    if (*(char *)((longlong)local_638 + (longlong)puVar14) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = *(longlong *)(puVar14 + 0x3c);
    if (lVar11 == 0) {
      if (*(char *)((longlong)local_638 + (longlong)puVar14) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar11 = FUN_144b3f4a0();
      *(longlong *)(puVar14 + 0x3c) = lVar11;
    }
    uVar30 = *(ulonglong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
    local_628 = (longlong)dVar35 * 4;
    uVar33 = uVar27;
    if (*(longlong *)(uVar30 + 8) == 0) {
      uVar33 = uVar30;
    }
    local_5e0 = uVar33;
    local_5d0 = local_628;
    if (uVar33 == 0) {
      local_5f0 = (int *)(*DAT_14c787670)(CONCAT71((int7)(uVar30 >> 8),1),&local_628,0x40);
    }
    else {
      local_610[0] = local_628 + 0x3f & 0xffffffffffffffc0;
      if (local_610[0] <= *(ulonglong *)(uVar33 + 0x28)) {
        local_5f0 = *(int **)(uVar33 + 0x38);
        if (local_610[0] + (longlong)local_5f0 <= *(ulonglong *)(uVar33 + 0x40)) {
          *(ulonglong *)(uVar33 + 0x38) = local_610[0] + (longlong)local_5f0;
          goto LAB_14552a3a8;
        }
      }
      local_5f0 = (int *)FUN_144b454a0(uVar33,local_610);
    }
LAB_14552a3a8:
    uVar99 = (uint)local_640;
    local_5e4 = local_660;
    uVar93 = local_658[0];
    local_5d8 = local_5f0;
    if ((int)((uint)local_640 & 0x7fffffff) < (int)(uint)local_640) {
      FUN_141807aa8(&local_5f0,&PTR_vftable_14c6e47a0,dVar35);
      uVar33 = local_5e0;
      uVar93 = local_5e8;
    }
    piVar24 = local_5f0;
    if (((int)uVar93 < (int)uVar99) || ((int)uVar99 < (int)uVar93)) {
      uVar93 = uVar99;
    }
    for (piVar13 = local_5f0; piVar13 != local_5f0 + (int)uVar93; piVar13 = piVar13 + 1) {
      *piVar13 = (int)uVar27;
      uVar27 = (ulonglong)((int)uVar27 + 1);
    }
    local_660 = local_5e4;
    FUN_1455300d0(local_5f0,uVar93,&local_598);
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < (int)uVar99) {
      FUN_1418055da(param_1 + 4,&PTR_vftable_14c6e47a0,dVar35);
    }
    if (((int)param_1[5] < (int)uVar99) || ((int)uVar99 < (int)param_1[5])) {
      *(uint *)(param_1 + 5) = uVar99;
    }
    puVar37 = (undefined8 *)param_1[4];
    uVar3 = *(undefined8 *)(local_598 + (longlong)*piVar24 * 4 + 2);
    *puVar37 = *(undefined8 *)(local_598 + (longlong)*piVar24 * 4);
    puVar37[1] = uVar3;
    *(undefined4 *)((longlong)*piVar24 * 0x2c + param_1[2]) = 0;
    iVar36 = 1;
    lVar11 = 1;
    if (1 < (longlong)dVar35) {
      lVar19 = 0x10;
      do {
        pfVar21 = (float *)(local_598 + (longlong)piVar24[lVar11 + -1] * 4);
        pfVar32 = (float *)(local_598 + (longlong)piVar24[lVar11] * 4);
        fVar75 = pfVar32[1];
        fVar92 = pfVar32[2];
        fVar96 = pfVar32[3];
        auVar49._4_4_ = -(uint)(pfVar21[1] == fVar75);
        auVar49._0_4_ = -(uint)(*pfVar21 == *pfVar32);
        auVar49._8_4_ = -(uint)(pfVar21[2] == fVar92);
        auVar49._12_4_ = -(uint)(pfVar21[3] == fVar96);
        iVar10 = movmskps(piVar24[lVar11] * 2,auVar49);
        if (iVar10 != 0xf) {
          iVar36 = iVar36 + 1;
          pfVar21 = (float *)(param_1[4] + lVar19);
          lVar19 = lVar19 + 0x10;
          *pfVar21 = *pfVar32;
          pfVar21[1] = fVar75;
          pfVar21[2] = fVar92;
          pfVar21[3] = fVar96;
        }
        piVar13 = piVar24 + lVar11;
        lVar11 = lVar11 + 1;
        *(int *)((longlong)*piVar13 * 0x2c + param_1[2]) = iVar36 + -1;
      } while (lVar11 < (longlong)dVar35);
    }
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar36) {
      FUN_1418055da(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar36);
    }
    if (((int)param_1[5] < iVar36) || (iVar36 < (int)param_1[5])) {
      *(int *)(param_1 + 5) = iVar36;
    }
    if (uVar33 == 0) {
      (*DAT_14c787678)(1);
    }
    else {
      uVar27 = local_5d0 + 0x3f & 0xffffffffffffffc0;
      if ((*(ulonglong *)(uVar33 + 0x28) < uVar27) ||
         ((longlong)local_5d8 + uVar27 != *(longlong *)(uVar33 + 0x38))) {
        FUN_144be8550(uVar33);
      }
      else {
        *(int **)(uVar33 + 0x38) = local_5d8;
        if (*(int **)(uVar33 + 0x48) == local_5d8) {
          FUN_144be8430(uVar33);
        }
      }
    }
    uVar93 = local_660;
    if (-1 < (int)local_660) {
LAB_14552b749:
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,piVar24,(ulonglong)(uVar93 & 0x7fffffff) << 2);
    }
  }
  else {
    local_5f0 = (int *)0x0;
    uVar99 = (uint)(param_2[1] - (longlong)pfVar21 >> 4);
    local_5e8 = 0;
    local_5e4 = 0x80000000;
    if ((int)uVar99 < (int)uVar93) {
      uVar93 = uVar99;
    }
    local_5e0 = FUN_144b3d480();
    local_5d8 = (int *)((ulonglong)local_5d8._4_4_ << 0x20);
    uVar30 = uVar27;
    if ((int)(local_5e4 & 0x7fffffff) < (int)uVar93) {
      FUN_1401f86b2(&local_5f0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar93);
      uVar30 = (ulonglong)local_5d8 & 0xffffffff;
    }
    iVar10 = uVar93 + 1;
    iVar36 = 0;
    if ((iVar10 < 0) || (iVar18 = iVar36, 0xffffffff < (ulonglong)((longlong)iVar10 * 3))) {
      iVar18 = 1;
    }
    uVar33 = (longlong)(int)uVar30 * 2;
    bVar9 = 1;
    if ((-1 < (int)uVar30) && (uVar33 < 0x100000000)) {
      bVar9 = 0;
    }
    if (((byte)(((byte)iVar18 ^ 1) & (bVar9 ^ 1)) != 0) &&
       ((uint)uVar33 < (uint)((longlong)iVar10 * 3))) {
      FUN_144b2eb80(&local_5e0,iVar10);
    }
    puVar16 = local_638;
    local_660 = 0;
    local_5c0 = 0;
    cVar17 = *(char *)((longlong)puVar14 + (longlong)local_638);
    if (cVar17 == '\0') {
      __dyn_tls_on_demand_init();
      cVar17 = *(char *)((longlong)puVar14 + (longlong)puVar16);
    }
    lVar11 = *(longlong *)(puVar14 + 0x3c);
    if (lVar11 == 0) {
      if (cVar17 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar11 = FUN_144b3f4a0();
      *(longlong *)(puVar14 + 0x3c) = lVar11;
    }
    uVar30 = *(ulonglong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
    local_630 = (double)(longlong)(int)uVar99;
    local_628 = (longlong)local_630 * 4;
    dVar114 = (double)uVar27;
    if (*(longlong *)(uVar30 + 8) == 0) {
      dVar114 = (double)uVar30;
    }
    local_5b8 = dVar114;
    local_5a8 = (undefined8 *)local_628;
    if (dVar114 == 0.0) {
      local_650 = (uint *)(*DAT_14c787670)(CONCAT71((int7)(uVar30 >> 8),1),&local_628,0x40);
    }
    else {
      local_610[0] = local_628 + 0x3f & 0xffffffffffffffc0;
      if (local_610[0] <= *(ulonglong *)((longlong)dVar114 + 0x28)) {
        local_650 = *(uint **)((longlong)dVar114 + 0x38);
        if ((longlong)local_650 + local_610[0] <= *(ulonglong *)((longlong)dVar114 + 0x40)) {
          *(ulonglong *)((longlong)dVar114 + 0x38) = (longlong)local_650 + local_610[0];
          goto LAB_14552a705;
        }
      }
      local_650 = (uint *)FUN_144b454a0(dVar114,local_610);
    }
LAB_14552a705:
    local_648 = uVar99 | 0x80000000;
    local_5c8 = local_650;
    local_5bc = local_648;
    local_5b0 = local_650;
    if ((int)(uVar99 & 0x7fffffff) < (int)uVar99) {
      FUN_141807aa8(&local_5c8,&PTR_vftable_14c6e47a0,local_630);
      local_660 = local_5c0;
      dVar114 = local_5b8;
    }
    if (((int)local_660 < (int)uVar99) || ((int)uVar99 < (int)local_660)) {
      local_660 = uVar99;
    }
    puVar14 = local_5c8;
    uVar30 = uVar27;
    auVar62 = _DAT_14c6daed0;
    if (0 < (int)uVar99) {
      do {
        uVar33 = uVar27;
        uVar28 = uVar27;
        uVar31 = uVar27;
        auVar67 = auVar62;
        if (0 < (longlong)dVar35) {
          do {
            pfVar32 = (float *)((longlong)local_598 + uVar31);
            fVar75 = *pfVar21 * *pfVar32;
            fVar96 = pfVar21[1] * pfVar32[1];
            fVar95 = pfVar21[2] * pfVar32[2];
            fVar92 = fVar95 + fVar96 + fVar75;
            auVar104._4_4_ = 0;
            auVar104._0_4_ = fVar92;
            if (auVar62._0_4_ < fVar92) {
              *puVar14 = (uint)uVar33;
              auVar104._8_4_ = fVar95 + fVar96 + fVar75;
              auVar104._12_4_ = fVar95 + fVar96 + fVar75;
              auVar67 = _DAT_14c6daed0;
              auVar62 = auVar104;
              if (_DAT_14c6daca0 <= fVar92) break;
            }
            uVar28 = uVar28 + 1;
            uVar33 = (ulonglong)((uint)uVar33 + 1);
            uVar31 = uVar31 + 0x10;
            auVar67 = _DAT_14c6daed0;
          } while ((longlong)uVar28 < (longlong)dVar35);
        }
        uVar93 = (int)uVar30 + 1;
        pfVar21 = pfVar21 + 4;
        puVar14 = puVar14 + 1;
        uVar30 = (ulonglong)uVar93;
        auVar62 = auVar67;
      } while ((int)uVar93 < (int)uVar99);
    }
    puVar14 = local_5c8 + (int)local_660;
    uVar93 = local_5e8;
    local_650 = local_5c8;
    local_648 = local_5bc;
    for (puVar16 = local_5c8; local_5e8 = uVar93, puVar16 != puVar14; puVar16 = puVar16 + 1) {
      local_658[0] = *puVar16;
      FUN_144c22790(&local_5f0,&local_520,local_658);
      uVar93 = local_5e8;
    }
    lVar11 = (longlong)(int)uVar93;
    if (dVar114 == 0.0) {
      (*DAT_14c787678)(1);
    }
    else {
      uVar30 = (longlong)local_5a8 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulonglong *)((longlong)dVar114 + 0x28) < uVar30) ||
         (uVar30 + (longlong)local_5b0 != *(longlong *)((longlong)dVar114 + 0x38))) {
        FUN_144be8550(dVar114);
      }
      else {
        *(uint **)((longlong)dVar114 + 0x38) = local_5b0;
        if (*(uint **)((longlong)dVar114 + 0x48) == local_5b0) {
          FUN_144be8430(dVar114);
        }
      }
    }
    if ((-1 < (int)local_648) && (local_650 != (uint *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_650,(ulonglong)(local_648 & 0x7fffffff) << 2);
    }
    local_568 = 0;
    lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar19 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar20 = *(longlong *)(lVar19 + 0xf0);
    if (lVar20 == 0) {
      if (*(char *)(lVar19 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar20 = FUN_144b3f4a0();
      *(longlong *)(lVar19 + 0xf0) = lVar20;
    }
    local_630 = (double)(lVar11 * 4);
    uVar30 = *(ulonglong *)(*(longlong *)(lVar20 + 0x3d0) + 0x10);
    local_610[0] = uVar27;
    if (*(longlong *)(uVar30 + 8) == 0) {
      local_610[0] = uVar30;
    }
    local_560 = local_610[0];
    local_550 = (uint *)local_630;
    local_538 = local_630;
    if (local_610[0] == 0) {
      local_650 = (uint *)(*DAT_14c787670)(CONCAT71((int7)(uVar30 >> 8),1),&local_630,0x40);
    }
    else {
      local_628 = (longlong)local_630 + 0x3fU & 0xffffffffffffffc0;
      if (local_628 <= *(ulonglong *)(local_610[0] + 0x28)) {
        local_650 = *(uint **)(local_610[0] + 0x38);
        if (local_628 + (longlong)local_650 <= *(ulonglong *)(local_610[0] + 0x40)) {
          *(ulonglong *)(local_610[0] + 0x38) = local_628 + (longlong)local_650;
          goto LAB_14552a99c;
        }
      }
      local_650 = (uint *)FUN_144b454a0(local_610[0],&local_628);
    }
LAB_14552a99c:
    local_658[0] = uVar93 | 0x80000000;
    uVar99 = iVar36;
    local_570 = local_650;
    local_564 = local_658[0];
    local_558 = local_650;
    if ((int)(uVar93 & 0x7fffffff) < (int)uVar93) {
      local_540 = local_650;
      FUN_141807aa8(&local_570,&PTR_vftable_14c6e47a0,lVar11);
      local_538 = (double)local_550;
      local_610[0] = local_560;
      uVar99 = local_568;
    }
    local_648 = 0xffffffff;
    if ((int)uVar99 < (int)uVar93) {
      if (0 < (int)(uVar93 - uVar99)) {
        uVar30 = (ulonglong)(uVar93 - uVar99);
        puVar14 = local_570 + (int)uVar99;
        do {
          if (puVar14 != (uint *)0x0) {
            *puVar14 = 0xffffffff;
          }
          uVar30 = uVar30 - 1;
          puVar14 = puVar14 + 1;
        } while (uVar30 != 0);
      }
    }
    local_658[0] = local_564;
    local_650 = local_570;
    local_540 = local_558;
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < (int)uVar93) {
      FUN_1418055da(param_1 + 4,&PTR_vftable_14c6e47a0,lVar11);
    }
    if (((int)param_1[5] < (int)uVar93) || ((int)uVar93 < (int)param_1[5])) {
      *(uint *)(param_1 + 5) = uVar93;
    }
    local_660 = 0;
    if (0 < (int)(uint)local_640) {
      local_600 = (uint *)0x0;
      local_644 = 0;
      uVar30 = uVar27;
      uVar33 = uVar27;
      do {
        uVar93 = (uint)uVar30;
        iVar36 = -1;
        local_660 = local_644;
        lVar19 = FUN_1455302b0(&local_5f0,&local_660);
        if ((lVar19 == 0) || (iVar10 = *(int *)(lVar19 + 4), local_644 = uVar93, iVar10 < 0)) {
          lVar19 = (longlong)(int)local_644 * 0x2c + param_1[2];
          lVar20 = (longlong)(*(int *)(lVar19 + 0x1c) * 0x24);
          uVar3 = *(undefined8 *)(lVar20 + (longlong)local_620);
          lVar12 = (longlong)(*(int *)(lVar19 + 0x20) * 0x24);
          uVar4 = *(undefined8 *)(lVar12 + (longlong)local_620);
          lVar19 = (longlong)(*(int *)(lVar19 + 0x24) * 0x24);
          uVar5 = *(undefined8 *)(lVar19 + (longlong)local_620);
          uVar30 = uVar27;
          uVar28 = uVar27;
          fVar75 = _DAT_14c6dae90;
          iVar10 = -1;
          if (0 < lVar11) {
            do {
              pfVar21 = (float *)(local_598 + (longlong)local_5f0[uVar30] * 4);
              fVar92 = *pfVar21;
              fVar96 = pfVar21[1];
              fVar95 = pfVar21[2];
              fVar76 = pfVar21[3];
              fVar94 = fVar96 * (float)((ulonglong)uVar3 >> 0x20) + fVar92 * (float)uVar3 +
                       fVar95 * *(float *)(lVar20 + 8 + (longlong)local_620) + fVar76;
              fVar72 = fVar96 * (float)((ulonglong)uVar4 >> 0x20) + fVar92 * (float)uVar4 +
                       fVar95 * *(float *)(lVar12 + 8 + (longlong)local_620) + fVar76;
              fVar76 = fVar96 * (float)((ulonglong)uVar5 >> 0x20) + fVar92 * (float)uVar5 +
                       fVar95 * *(float *)(lVar19 + 8 + (longlong)local_620) + fVar76;
              auVar88._8_4_ = ABS(fVar76);
              auVar50._0_8_ = CONCAT44(fVar94,fVar94) & 0x7fffffff7fffffff;
              auVar50._8_4_ = ABS(fVar94);
              auVar50._12_4_ = ABS(fVar94);
              auVar69._0_8_ = CONCAT44(fVar72,fVar72) & 0x7fffffff7fffffff;
              auVar69._8_4_ = ABS(fVar72);
              auVar69._12_4_ = ABS(fVar72);
              auVar62 = maxps(auVar69,auVar50);
              auVar88._0_8_ = CONCAT44(fVar76,fVar76) & 0x7fffffff7fffffff;
              auVar88._12_4_ = auVar88._8_4_;
              auVar62 = maxps(auVar88,auVar62);
              fVar92 = auVar62._0_4_;
              iVar18 = (int)uVar28;
              iVar10 = iVar36;
              if ((fVar92 < fVar75) && (fVar75 = fVar92, iVar10 = iVar18, fVar92 <= 0.0)) break;
              uVar30 = uVar30 + 1;
              uVar28 = (ulonglong)(iVar18 + 1);
              iVar36 = iVar10;
            } while ((longlong)uVar30 < lVar11);
          }
        }
        if (local_650[iVar10] == 0xffffffff) {
          uVar99 = (uint)uVar33;
          *(uint *)((longlong)(int)uVar93 * 0x2c + param_1[2]) = uVar99;
          local_650[iVar10] = uVar99;
          uVar33 = (ulonglong)(uVar99 + 1);
          puVar37 = (undefined8 *)(param_1[4] + (longlong)local_600);
          local_600 = local_600 + 4;
          uVar3 = *(undefined8 *)(local_598 + (longlong)local_5f0[iVar10] * 4 + 2);
          *puVar37 = *(undefined8 *)(local_598 + (longlong)local_5f0[iVar10] * 4);
          puVar37[1] = uVar3;
        }
        else {
          *(uint *)((longlong)(int)uVar93 * 0x2c + param_1[2]) = local_650[iVar10];
        }
        iVar36 = (int)uVar33;
        local_660 = uVar93 + 1;
        uVar30 = (ulonglong)local_660;
        local_644 = local_660;
      } while ((int)local_660 < (int)(uint)local_640);
    }
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar36) {
      FUN_1418055da(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar36);
    }
    if (((int)param_1[5] < iVar36) || (iVar36 < (int)param_1[5])) {
      *(int *)(param_1 + 5) = iVar36;
    }
    local_660 = 0;
    local_568 = 0;
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar11 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = *(longlong *)(lVar11 + 0xf0);
    if (lVar19 == 0) {
      if (*(char *)(lVar11 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar19 = FUN_144b3f4a0();
      *(longlong *)(lVar11 + 0xf0) = lVar19;
    }
    uVar93 = (uint)local_640;
    lVar11 = (longlong)(int)(uint)local_640;
    uVar30 = *(ulonglong *)(*(longlong *)(lVar19 + 0x3d0) + 0x10);
    local_628 = uVar27;
    if (*(longlong *)(uVar30 + 8) == 0) {
      local_628 = uVar30;
    }
    local_618 = (uint *)(lVar11 * 4);
    local_600 = local_618;
    local_560 = local_628;
    local_550 = local_618;
    if (local_628 == 0) {
      local_638 = (uint *)(*DAT_14c787670)(CONCAT71((int7)(uVar30 >> 8),1),&local_618,0x40);
    }
    else {
      local_630 = (double)((longlong)local_618 + 0x3fU & 0xffffffffffffffc0);
      if ((ulonglong)local_630 <= (ulonglong)*(double *)(local_628 + 0x28)) {
        local_638 = *(uint **)(local_628 + 0x38);
        if ((undefined1 *)((longlong)local_630 + (longlong)local_638) <=
            *(undefined1 **)(local_628 + 0x40)) {
          *(undefined1 **)(local_628 + 0x38) =
               (undefined1 *)((longlong)local_630 + (longlong)local_638);
          goto LAB_14552ad9e;
        }
      }
      local_638 = (uint *)FUN_144b454a0(local_628,&local_630);
    }
LAB_14552ad9e:
    local_5a0 = uVar93 | 0x80000000;
    uVar99 = 0;
    local_570 = local_638;
    local_564 = local_5a0;
    local_558 = local_638;
    if ((int)(uVar93 & 0x7fffffff) < (int)uVar93) {
      local_548 = local_638;
      FUN_141807aa8(&local_570,&PTR_vftable_14c6e47a0,lVar11);
      local_600 = local_550;
      local_628 = local_560;
      local_660 = local_568;
      uVar99 = local_568;
    }
    if (((int)uVar99 < (int)uVar93) || ((int)uVar93 < (int)uVar99)) {
      local_660 = uVar93;
      uVar99 = uVar93;
    }
    uVar30 = uVar27;
    for (puVar14 = local_570; puVar14 != local_570 + (int)uVar99; puVar14 = puVar14 + 1) {
      *puVar14 = (uint)uVar30;
      uVar30 = (ulonglong)((uint)uVar30 + 1);
    }
    if (1 < (int)uVar99) {
      local_4e0[0] = local_570;
      local_2e0[0] = local_570 + (int)(uVar99 - 1);
      do {
        puVar16 = local_4e0[uVar27];
        puVar14 = local_2e0[uVar27];
LAB_14552ae90:
        do {
          puVar26 = puVar14;
          uVar93 = puVar16[(longlong)puVar26 - (longlong)puVar16 >> 3];
          puVar23 = puVar16;
          puVar14 = puVar26;
          do {
            lVar11 = param_1[2];
            iVar36 = *(int *)(lVar11 + (longlong)(int)uVar93 * 0x2c);
            iVar10 = *(int *)((longlong)(int)*puVar23 * 0x2c + lVar11);
            while (iVar10 < iVar36) {
              puVar1 = puVar23 + 1;
              puVar23 = puVar23 + 1;
              iVar10 = *(int *)((longlong)(int)*puVar1 * 0x2c + lVar11);
            }
            iVar10 = *(int *)((longlong)(int)*puVar14 * 0x2c + lVar11);
            while (iVar36 < iVar10) {
              puVar1 = puVar14 + -1;
              puVar14 = puVar14 + -1;
              iVar10 = *(int *)((longlong)(int)*puVar1 * 0x2c + lVar11);
            }
            if (puVar14 < puVar23) break;
            if (puVar14 != puVar23) {
              uVar99 = *puVar14;
              *puVar14 = *puVar23;
              *puVar23 = uVar99;
            }
            puVar14 = puVar14 + -1;
            puVar23 = puVar23 + 1;
          } while (puVar23 <= puVar14);
          if (puVar16 < puVar14) {
            if (puVar23 < puVar26) {
              if ((longlong)puVar14 - (longlong)puVar16 < (longlong)puVar26 - (longlong)puVar23) {
                local_4e0[uVar27] = puVar23;
                local_2e0[uVar27] = puVar26;
                uVar27 = uVar27 + 1;
              }
              else {
                local_4e0[uVar27] = puVar16;
                local_2e0[uVar27] = puVar14;
                puVar16 = puVar23;
                puVar14 = puVar26;
                uVar27 = uVar27 + 1;
              }
            }
            goto LAB_14552ae90;
          }
          puVar16 = puVar23;
          puVar14 = puVar26;
        } while (puVar23 < puVar26);
        uVar27 = uVar27 - 1;
      } while (-1 < (longlong)uVar27);
      uVar93 = (uint)local_640;
    }
    dVar35 = 0.0;
    uVar27 = (ulonglong)_tls_index;
    local_5c0 = 0;
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar27 * 8);
    cVar17 = *(char *)(lVar11 + 0x114);
    local_638 = local_570;
    local_5a0 = local_564;
    local_548 = local_558;
    if (cVar17 == '\0') {
      __dyn_tls_on_demand_init();
      cVar17 = *(char *)(lVar11 + 0x114);
    }
    lVar19 = *(longlong *)(lVar11 + 0xf0);
    if (lVar19 == 0) {
      if (cVar17 == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar19 = FUN_144b3f4a0();
      *(longlong *)(lVar11 + 0xf0) = lVar19;
    }
    dVar114 = *(double *)(*(longlong *)(lVar19 + 0x3d0) + 0x10);
    local_620 = (undefined8 *)(longlong)(int)uVar93;
    local_630 = dVar35;
    if (*(longlong *)((longlong)dVar114 + 8) == 0) {
      local_630 = dVar114;
    }
    local_5b8 = local_630;
    local_5a8 = local_620;
    if (local_630 == 0.0) {
      puVar14 = (uint *)(*DAT_14c787670)(CONCAT71((int7)((ulonglong)dVar114 >> 8),1),&local_620,0x40
                                        );
    }
    else {
      local_618 = (uint *)((longlong)local_620 + 0x3fU & 0xffffffffffffffc0);
      if (local_618 <= *(uint **)((longlong)local_630 + 0x28)) {
        puVar14 = *(uint **)((longlong)local_630 + 0x38);
        if ((ulonglong)((longlong)puVar14 + (longlong)local_618) <=
            *(ulonglong *)((longlong)local_630 + 0x40)) {
          *(longlong *)((longlong)local_630 + 0x38) = (longlong)puVar14 + (longlong)local_618;
          goto LAB_14552b07e;
        }
      }
      puVar14 = (uint *)FUN_144b454a0(local_630,&local_618);
    }
LAB_14552b07e:
    local_644 = uVar93 | 0x80000000;
    uVar99 = 0;
    local_5c8 = puVar14;
    local_5bc = local_644;
    local_5b0 = puVar14;
    if ((int)(uVar93 & 0x7fffffff) < (int)uVar93) {
      FUN_14180788c(&local_5c8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar93);
      local_630 = local_5b8;
      uVar99 = local_5c0;
    }
    puVar14 = local_5c8;
    if ((int)uVar99 < (int)uVar93) {
      if (0 < (int)(uVar93 - uVar99)) {
        uVar30 = (ulonglong)(uVar93 - uVar99);
        puVar15 = (undefined1 *)((longlong)(int)uVar99 + (longlong)local_5c8);
        do {
          if (puVar15 != (undefined1 *)0x0) {
            *puVar15 = 0;
          }
          uVar30 = uVar30 - 1;
          puVar15 = puVar15 + 1;
        } while (uVar30 != 0);
      }
    }
    lVar11 = *(longlong *)((longlong)ThreadLocalStoragePointer + uVar27 * 8);
    local_644 = local_5bc;
    if (*(char *)(lVar11 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar19 = *(longlong *)(lVar11 + 0xf0);
    if (lVar19 == 0) {
      if (*(char *)(lVar11 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar19 = FUN_144b3f4a0();
      *(longlong *)(lVar11 + 0xf0) = lVar19;
    }
    local_520 = *(double *)(*(longlong *)(lVar19 + 0x3d0) + 0x10);
    if (*(longlong *)((longlong)local_520 + 8) != 0) {
      local_520 = dVar35;
    }
    local_618 = (uint *)((longlong)(int)(uVar93 + 3) * 8);
    local_5f8 = local_618;
    if (local_520 == 0.0) {
      lVar19 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)local_618 >> 8),1),&local_5f8,0x40);
    }
    else {
      local_620 = (undefined8 *)((longlong)local_618 + 0x3fU & 0xffffffffffffffc0);
      if (local_620 <= *(undefined8 **)((longlong)local_520 + 0x28)) {
        lVar19 = *(longlong *)((longlong)local_520 + 0x38);
        if ((ulonglong)((longlong)local_620 + lVar19) <= *(ulonglong *)((longlong)local_520 + 0x40))
        {
          *(longlong *)((longlong)local_520 + 0x38) = (longlong)local_620 + lVar19;
          goto LAB_14552b1e0;
        }
      }
      lVar19 = FUN_144b454a0(local_520,&local_620);
    }
LAB_14552b1e0:
    if (*(char *)(lVar11 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar20 = *(longlong *)(lVar11 + 0xf0);
    if (lVar20 == 0) {
      if (*(char *)(lVar11 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar20 = FUN_144b3f4a0();
      *(longlong *)(lVar11 + 0xf0) = lVar20;
    }
    local_500 = *(double *)(*(longlong *)(lVar20 + 0x3d0) + 0x10);
    if (*(longlong *)((longlong)local_500 + 8) != 0) {
      local_500 = dVar35;
    }
    local_640 = (undefined8 *)((longlong)(int)uVar93 * 4);
    local_620 = local_640;
    if (local_500 == 0.0) {
      puVar16 = (uint *)(*DAT_14c787670)(CONCAT71((int7)((ulonglong)local_640 >> 8),1),&local_640,
                                         0x40);
    }
    else {
      local_5f8 = (uint *)((longlong)local_640 + 0x3fU & 0xffffffffffffffc0);
      if (local_5f8 <= *(uint **)((longlong)local_500 + 0x28)) {
        puVar16 = *(uint **)((longlong)local_500 + 0x38);
        if ((ulonglong)((longlong)local_5f8 + (longlong)puVar16) <=
            *(ulonglong *)((longlong)local_500 + 0x40)) {
          *(longlong *)((longlong)local_500 + 0x38) = (longlong)local_5f8 + (longlong)puVar16;
          goto LAB_14552b298;
        }
      }
      puVar16 = (uint *)FUN_144b454a0(local_500,&local_5f8);
    }
LAB_14552b298:
    local_5f8 = local_638;
    local_4f0 = local_638 + (int)local_660;
    if (local_638 != local_4f0) {
      do {
        iVar36 = 0;
        uVar93 = *local_5f8;
        local_640 = (undefined8 *)CONCAT44(local_640._4_4_,uVar93);
        if (*(char *)((longlong)puVar14 + (longlong)(int)uVar93) == '\0') {
          local_660 = *(uint *)((longlong)(int)uVar93 * 0x2c + param_1[2]);
          lVar11 = (longlong)(int)local_660;
          uVar99 = local_660;
          if (local_660 == local_648) {
            local_660 = *(uint *)(param_1 + 5);
            iVar36 = (int)param_1[5] + 1;
            puVar37 = (undefined8 *)(lVar11 * 0x10 + param_1[4]);
            uVar3 = *puVar37;
            uVar4 = puVar37[1];
            if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < iVar36) {
              FUN_144bdedb0(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar36);
              uVar93 = (uint)local_640;
            }
            puVar37 = (undefined8 *)((longlong)(int)param_1[5] * 0x10 + param_1[4]);
            if (puVar37 != (undefined8 *)0x0) {
              *puVar37 = uVar3;
              puVar37[1] = uVar4;
            }
            *(int *)(param_1 + 5) = iVar36;
            if (puVar16 != (uint *)0x0) {
              *puVar16 = uVar93;
            }
            iVar36 = 1;
            uVar99 = local_648;
          }
          local_648 = uVar99;
          plVar38 = param_1 + 2;
          *(undefined1 *)((longlong)(int)uVar93 + (longlong)puVar14) = 1;
          iVar10 = SUB84(dVar35,0);
          puVar37 = (undefined8 *)(lVar19 + (longlong)iVar10 * 8);
          if (puVar37 != (undefined8 *)0x0) {
            *puVar37 = *(undefined8 *)((longlong)(int)uVar93 * 0x2c + 4 + *plVar38);
          }
          puVar37 = (undefined8 *)(lVar19 + (longlong)(iVar10 + 1) * 8);
          if (puVar37 != (undefined8 *)0x0) {
            *puVar37 = *(undefined8 *)((longlong)(int)uVar93 * 0x2c + 0xc + *plVar38);
          }
          plVar34 = param_1 + 2;
          uVar99 = iVar10 + 3;
          dVar35 = (double)(ulonglong)uVar99;
          puVar37 = (undefined8 *)(lVar19 + (longlong)(iVar10 + 2) * 8);
          if (puVar37 != (undefined8 *)0x0) {
            *puVar37 = *(undefined8 *)((longlong)(int)uVar93 * 0x2c + 0x14 + *plVar38);
          }
          while (uVar99 != 0) {
            iVar10 = SUB84(dVar35,0);
            uVar93 = iVar10 - 1;
            dVar35 = (double)(ulonglong)uVar93;
            uVar3 = *(undefined8 *)(lVar19 + (longlong)(int)uVar93 * 8);
            lVar11 = (longlong)(int)(uint)uVar3;
            if (*(char *)((longlong)puVar14 + lVar11) == '\0') {
              lVar20 = *plVar34;
              lVar12 = lVar11 * 0x2c;
              lVar39 = (longlong)(int)((ulonglong)uVar3 >> 0x20);
              if (*(int *)(lVar12 + lVar20) ==
                  *(int *)((longlong)*(int *)(lVar12 + lVar39 * 8 + 4 + lVar20) * 0x2c + lVar20)) {
                *(undefined1 *)((longlong)puVar14 + lVar11) = 1;
                if (local_648 != local_660) {
                  lVar11 = (longlong)iVar36;
                  iVar36 = iVar36 + 1;
                  if (puVar16 + lVar11 != (uint *)0x0) {
                    puVar16[lVar11] = (uint)uVar3;
                  }
                }
                puVar37 = (undefined8 *)(lVar19 + (longlong)(int)uVar93 * 8);
                if (puVar37 != (undefined8 *)0x0) {
                  *puVar37 = *(undefined8 *)
                              (lVar12 + (longlong)*(int *)(&DAT_149da5e88 + lVar39 * 4) * 8 + 4 +
                              *plVar34);
                }
                dVar35 = (double)(ulonglong)(iVar10 + 1);
                puVar37 = (undefined8 *)(lVar19 + (longlong)iVar10 * 8);
                if (puVar37 != (undefined8 *)0x0) {
                  *puVar37 = *(undefined8 *)
                              (lVar12 + (ulonglong)
                                        (1 << ((byte)((ulonglong)uVar3 >> 0x20) & 0x1f) & 3) * 8 + 4
                              + *plVar34);
                }
              }
            }
            uVar99 = SUB84(dVar35,0);
          }
          for (puVar23 = puVar16; puVar23 != puVar16 + iVar36; puVar23 = puVar23 + 1) {
            *(uint *)((longlong)(int)*puVar23 * 0x2c + param_1[2]) = local_660;
          }
        }
        local_5f8 = local_5f8 + 1;
      } while (local_5f8 != local_4f0);
    }
    puVar23 = local_638;
    if (local_500 == 0.0) {
      (*DAT_14c787678)(1,puVar16);
    }
    else {
      uVar27 = (longlong)local_620 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulonglong *)((longlong)local_500 + 0x28) < uVar27) ||
         (uVar27 + (longlong)puVar16 != *(longlong *)((longlong)local_500 + 0x38))) {
        FUN_144be8550(local_500,puVar16);
      }
      else {
        *(uint **)((longlong)local_500 + 0x38) = puVar16;
        if (*(uint **)((longlong)local_500 + 0x48) == puVar16) {
          FUN_144be8430();
        }
      }
    }
    if (local_520 == 0.0) {
      (*DAT_14c787678)(1,lVar19);
    }
    else {
      uVar27 = (longlong)local_618 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulonglong *)((longlong)local_520 + 0x28) < uVar27) ||
         (uVar27 + lVar19 != *(longlong *)((longlong)local_520 + 0x38))) {
        FUN_144be8550(local_520,lVar19);
      }
      else {
        *(longlong *)((longlong)local_520 + 0x38) = lVar19;
        if (*(longlong *)((longlong)local_520 + 0x48) == lVar19) {
          FUN_144be8430();
        }
      }
    }
    if (local_630 == 0.0) {
      (*DAT_14c787678)(1);
    }
    else {
      uVar27 = (longlong)local_5a8 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulonglong *)((longlong)local_630 + 0x28) < uVar27) ||
         (uVar27 + (longlong)local_5b0 != *(longlong *)((longlong)local_630 + 0x38))) {
        FUN_144be8550();
      }
      else {
        *(uint **)((longlong)local_630 + 0x38) = local_5b0;
        if (*(uint **)((longlong)local_630 + 0x48) == local_5b0) {
          FUN_144be8430();
        }
      }
    }
    if ((-1 < (int)local_644) && (puVar14 != (uint *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,puVar14,local_644 & 0x7fffffff);
    }
    if (local_628 == 0) {
      (*DAT_14c787678)(1);
    }
    else {
      uVar27 = (longlong)local_600 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulonglong *)(local_628 + 0x28) < uVar27) ||
         ((undefined1 *)(uVar27 + (longlong)local_548) != *(undefined1 **)(local_628 + 0x38))) {
        FUN_144be8550();
      }
      else {
        *(uint **)(local_628 + 0x38) = local_548;
        if (*(uint **)(local_628 + 0x48) == local_548) {
          FUN_144be8430();
        }
      }
    }
    if ((-1 < (int)local_5a0) && (puVar23 != (uint *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,puVar23,(ulonglong)(local_5a0 & 0x7fffffff) << 2);
    }
    if (local_610[0] == 0) {
      (*DAT_14c787678)(1);
    }
    else {
      uVar27 = (longlong)local_538 + 0x3fU & 0xffffffffffffffc0;
      if ((*(ulonglong *)(local_610[0] + 0x28) < uVar27) ||
         (uVar27 + (longlong)local_540 != *(longlong *)(local_610[0] + 0x38))) {
        FUN_144be8550();
      }
      else {
        *(uint **)(local_610[0] + 0x38) = local_540;
        if (*(uint **)(local_610[0] + 0x48) == local_540) {
          FUN_144be8430();
        }
      }
    }
    if ((-1 < (int)local_658[0]) && (local_650 != (uint *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_650,(ulonglong)(local_658[0] & 0x7fffffff) << 2);
    }
    if ((local_5e0 != 0) && (*(int *)(local_5e0 + 4) != -2)) {
      (*DAT_14c787678)(DAT_14c6e47a8,local_5e0,0);
      FUN_144b3ec00(&local_5e0);
    }
    local_5e8 = 0;
    if ((-1 < (int)local_5e4) && (piVar24 = local_5f0, uVar93 = local_5e4, local_5f0 != (int *)0x0))
    goto LAB_14552b749;
  }
  uVar112 = 1;
  if (*param_2 == param_2[1]) {
    uVar112 = 3;
  }
  FUN_14552f880(param_1,uVar112);
  if (local_580 == local_598) {
    local_590 = 0;
  }
  if (local_588 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar27 = local_578 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_588 + 0x28) < uVar27) ||
       (uVar27 + (longlong)local_580 != *(longlong *)(local_588 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(uint **)(local_588 + 0x38) = local_580;
      if (*(uint **)(local_588 + 0x48) == local_580) {
        FUN_144be8430();
      }
    }
  }
  local_590 = 0;
  if ((-1 < (int)local_58c) && (local_598 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_598,(ulonglong)(local_58c & 0x7fffffff) << 4);
  }
LAB_14552bc54:
  if (local_65c != 0) {
    pfVar21 = (float *)param_1[4];
    pfVar32 = pfVar21 + (longlong)(int)param_1[5] * 4;
    for (; pfVar21 != pfVar32; pfVar21 = pfVar21 + 4) {
      lVar19 = *param_1;
      fVar75 = pfVar21[3];
      auVar60._4_4_ = fVar75;
      auVar60._0_4_ = fVar75;
      auVar60._8_4_ = fVar75;
      auVar60._12_4_ = fVar75;
      lVar11 = lVar19 + (longlong)(int)param_1[1] * 0x24;
      while (lVar19 != lVar11) {
        pfVar2 = (float *)(lVar19 + 0x20);
        puVar37 = (undefined8 *)(lVar19 + 0x18);
        lVar19 = lVar19 + 0x24;
        fVar75 = (float)*puVar37 * *pfVar21;
        fVar92 = (float)((ulonglong)*puVar37 >> 0x20) * pfVar21[1];
        fVar96 = *pfVar2 * pfVar21[2];
        auVar59._0_4_ = 0.0 - (fVar92 + fVar75 + fVar96);
        auVar59._4_4_ = 0.0 - (fVar92 + fVar75 + fVar96);
        auVar59._8_4_ = 0.0 - (fVar92 + fVar75 + fVar96);
        auVar59._12_4_ = 0.0 - (fVar92 + fVar75 + fVar96);
        auVar60 = minps(auVar59,auVar60);
      }
      *pfVar21 = *pfVar21;
      pfVar21[1] = pfVar21[1];
      pfVar21[2] = pfVar21[2];
      pfVar21[3] = auVar60._12_4_;
    }
  }
  return;
}



// FUNCTION 14552bd40 FUN_14552bd40 body=564 status=ok
// SIG undefined FUN_14552bd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14552bd40(float param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  longlong *in_RCX;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  
  lVar1 = *param_3;
  puVar9 = (undefined8 *)0x0;
  puVar12 = (undefined8 *)0x0;
  iVar7 = (int)(param_3[1] - lVar1 >> 3);
  lVar13 = (longlong)iVar7;
  fVar20 = 0.0;
  if (0 < iVar7) {
    lVar11 = 1;
    lVar14 = 0;
    lVar10 = lVar13;
    do {
      if (lVar11 < lVar13) {
        puVar2 = *(undefined8 **)(lVar14 + lVar1);
        lVar8 = lVar11;
        do {
          puVar3 = *(undefined8 **)(lVar1 + lVar8 * 8);
          param_1 = (float)puVar2[3] - (float)puVar3[3];
          fVar19 = (float)((ulonglong)puVar2[3] >> 0x20) - (float)((ulonglong)puVar3[3] >> 0x20);
          param_1 = param_1 * param_1;
          fVar19 = fVar19 * fVar19 + param_1 +
                   (*(float *)(puVar2 + 4) - *(float *)(puVar3 + 4)) *
                   (*(float *)(puVar2 + 4) - *(float *)(puVar3 + 4));
          if (fVar20 < fVar19) {
            puVar9 = puVar2;
            puVar12 = puVar3;
            fVar20 = fVar19;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar13);
      }
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    if ((puVar9 != (undefined8 *)0x0) && (puVar12 != (undefined8 *)0x0)) {
      if ((*(uint *)((longlong)in_RCX + 0xc) & 0x7fffffff) < 2) {
        FUN_14532af70(param_1,&PTR_vftable_14c6e47a0,2);
      }
      if (((int)in_RCX[1] < 2) || (2 < (int)in_RCX[1])) {
        *(undefined4 *)(in_RCX + 1) = 2;
      }
      puVar2 = (undefined8 *)*in_RCX;
      uVar5 = *puVar9;
      uVar6 = puVar9[1];
      *param_2 = 0;
      *puVar2 = uVar5;
      puVar2[1] = uVar6;
      uVar5 = puVar9[3];
      puVar2[2] = puVar9[2];
      puVar2[3] = uVar5;
      *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar9 + 4);
      uVar5 = puVar12[1];
      *(undefined8 *)((longlong)puVar2 + 0x24) = *puVar12;
      *(undefined8 *)((longlong)puVar2 + 0x2c) = uVar5;
      uVar5 = puVar12[3];
      *(undefined8 *)((longlong)puVar2 + 0x34) = puVar12[2];
      *(undefined8 *)((longlong)puVar2 + 0x3c) = uVar5;
      *(undefined4 *)((longlong)puVar2 + 0x44) = *(undefined4 *)(puVar12 + 4);
      auVar17._12_4_ = *(undefined4 *)(puVar2 + 4);
      auVar17._0_12_ = *(undefined1 (*) [12])(puVar2 + 3);
      auVar15._12_4_ = *(undefined4 *)(puVar2 + 4);
      auVar15._0_12_ = *(undefined1 (*) [12])(puVar2 + 3);
      auVar16._12_4_ = *(undefined4 *)((longlong)puVar2 + 0x44);
      auVar16._0_12_ = *(undefined1 (*) [12])((longlong)puVar2 + 0x3c);
      auVar17 = maxps(auVar17,auVar16);
      auVar4._12_4_ = *(undefined4 *)((longlong)puVar2 + 0x44);
      auVar4._0_12_ = *(undefined1 (*) [12])((longlong)puVar2 + 0x3c);
      auVar16 = minps(auVar15,auVar4);
      auVar18._0_12_ = auVar17._0_12_;
      auVar18._12_4_ = auVar16._8_4_;
      *(undefined1 (*) [16])((longlong)in_RCX + 0x10c) = auVar18;
      *(longlong *)((longlong)in_RCX + 0x11c) = auVar16._0_8_;
      fVar20 = (*(float *)((longlong)puVar2 + 0x14) + *(float *)(puVar2 + 7)) * fRam000000014c6dad98
      ;
      *(ulonglong *)((longlong)in_RCX + 0xf4) =
           CONCAT44(((float)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0xc) >> 0x20) +
                    (float)((ulonglong)puVar2[6] >> 0x20)) * fRam000000014c6dad94,
                    ((float)*(undefined8 *)((longlong)puVar2 + 0xc) + (float)puVar2[6]) *
                    _DAT_14c6dad90);
      *(float *)((longlong)in_RCX + 0xfc) = fVar20;
      fVar20 = (*(float *)(puVar2 + 4) + *(float *)((longlong)puVar2 + 0x44)) * fRam000000014c6dad98
      ;
      in_RCX[0x20] = CONCAT44(((float)((ulonglong)puVar2[3] >> 0x20) +
                              (float)((ulonglong)*(undefined8 *)((longlong)puVar2 + 0x3c) >> 0x20))
                              * fRam000000014c6dad94,
                              ((float)puVar2[3] + (float)*(undefined8 *)((longlong)puVar2 + 0x3c)) *
                              _DAT_14c6dad90);
      *(float *)(in_RCX + 0x21) = fVar20;
      return param_2;
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14552bf80 FUN_14552bf80 body=2408 status=ok
// SIG undefined FUN_14552bf80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14552bf80(longlong *param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined4 in_EAX;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
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
  float fVar34;
  float fVar35;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [12];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [12];
  undefined8 local_res18;
  ulonglong local_res20;
  ulonglong local_f8;
  uint local_f0;
  uint local_ec;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  ulonglong local_c8;
  undefined4 local_c0;
  uint local_bc;
  longlong local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong local_98 [11];
  
  iVar5 = (int)param_3[1];
  fVar46 = *(float *)(param_1 + 0x18);
  fVar47 = *(float *)((longlong)param_1 + 0xc4);
  fVar48 = *(float *)(param_1 + 0x19);
  fVar34 = ABS(fVar46);
  fVar38 = ABS(fVar47);
  fVar40 = ABS(fVar48);
  plVar17 = (longlong *)*param_3;
  auVar30._0_8_ = CONCAT44(fVar46,fVar46) & 0x7fffffff7fffffff;
  auVar30._8_4_ = fVar34;
  auVar30._12_4_ = fVar34;
  auVar29._0_8_ = CONCAT44(fVar47,fVar47) & 0x7fffffff7fffffff;
  auVar29._8_4_ = fVar38;
  auVar29._12_4_ = fVar38;
  auVar30 = maxps(auVar29,auVar30);
  plVar15 = plVar17 + iVar5;
  auVar23._0_8_ = CONCAT44(fVar48,fVar48) & 0x7fffffff7fffffff;
  auVar23._8_4_ = fVar40;
  auVar23._12_4_ = fVar40;
  auVar30 = maxps(auVar23,auVar30);
  auVar24._4_4_ = -(uint)(auVar30._4_4_ <= fVar38);
  auVar24._0_4_ = -(uint)(auVar30._0_4_ <= fVar34);
  auVar24._8_4_ = -(uint)(auVar30._8_4_ <= fVar40);
  auVar24._12_4_ = -(uint)(auVar30._12_4_ <= ABS(*(float *)((longlong)param_1 + 0xcc)));
  uVar9 = movmskps(in_EAX,auVar24);
  cVar2 = (&DAT_14998f5c0)[uVar9 & 7];
  if (cVar2 < '\x02') {
    for (; plVar17 != plVar15; plVar17 = plVar17 + 1) {
      lVar22 = *plVar17;
      uVar10 = *(undefined4 *)(lVar22 + (longlong)cVar2 * 4);
      *(undefined4 *)(lVar22 + (longlong)cVar2 * 4) = *(undefined4 *)(lVar22 + 8);
      *(undefined4 *)(lVar22 + 8) = uVar10;
    }
  }
  if (1 < iVar5) {
    FUN_145530320(*param_3,0,iVar5 + -1);
  }
  iVar5 = (int)param_3[1];
  local_f0 = 0;
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar9 = iVar5 * 2;
  if (*(char *)(lVar22 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar12 = *(longlong *)(lVar22 + 0xf0);
  if (lVar12 == 0) {
    if (*(char *)(lVar22 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar12 = FUN_144b3f4a0();
    *(longlong *)(lVar22 + 0xf0) = lVar12;
  }
  lVar22 = *(longlong *)(*(longlong *)(lVar12 + 0x3d0) + 0x10);
  local_d8 = (longlong)(int)uVar9 * 8;
  local_e8 = 0;
  if (*(longlong *)(lVar22 + 8) == 0) {
    local_e8 = lVar22;
  }
  local_d0 = local_e8;
  local_98[0] = local_d8;
  if (local_e8 == 0) {
    local_f8 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar22 >> 8),1),local_98,0x40);
  }
  else {
    local_a0 = local_d8 + 0x3fU & 0xffffffffffffffc0;
    if (local_a0 <= *(ulonglong *)(local_e8 + 0x28)) {
      local_f8 = *(ulonglong *)(local_e8 + 0x38);
      if (local_a0 + local_f8 <= *(ulonglong *)(local_e8 + 0x40)) {
        *(ulonglong *)(local_e8 + 0x38) = local_a0 + local_f8;
        goto LAB_14552c10e;
      }
    }
    local_f8 = FUN_144b454a0(local_e8,&local_a0);
  }
LAB_14552c10e:
  local_ec = uVar9 | 0x80000000;
  local_res18 = CONCAT44(local_res18._4_4_,uVar9) | 0x80000000;
  uVar11 = 0;
  local_e0 = local_f8;
  if ((int)(uVar9 & 0x7fffffff) < (int)uVar9) {
    FUN_14532b0a0(&local_f8,&PTR_vftable_14c6e47a0,(longlong)(int)uVar9);
    local_d0 = local_e8;
    local_res18 = CONCAT44(local_res18._4_4_,local_ec);
    uVar11 = local_f0;
  }
  if (((int)uVar11 < (int)uVar9) || ((int)uVar9 < (int)uVar11)) {
    local_f0 = uVar9;
  }
  iVar16 = 0;
  lVar22 = 0;
  if (0 < (longlong)iVar5) {
    lVar12 = 0;
    do {
      if (1 < lVar12) {
        puVar20 = (undefined8 *)(local_f8 + (lVar12 + -2) * 8);
        piVar6 = *(int **)(*param_3 + lVar22 * 8);
        do {
          iVar3 = ((int *)*puVar20)[1];
          iVar4 = *(int *)*puVar20;
          if (0 < (*(int *)puVar20[1] - iVar4) * (piVar6[1] - iVar3) -
                  (((int *)puVar20[1])[1] - iVar3) * (*piVar6 - iVar4)) break;
          iVar16 = iVar16 + -1;
          lVar12 = lVar12 + -1;
          puVar20 = puVar20 + -1;
        } while (1 < lVar12);
      }
      iVar16 = iVar16 + 1;
      lVar13 = lVar22 * 8;
      lVar22 = lVar22 + 1;
      *(undefined8 *)(local_f8 + lVar12 * 8) = *(undefined8 *)(*param_3 + lVar13);
      lVar12 = lVar12 + 1;
    } while (lVar22 < iVar5);
  }
  iVar3 = iVar16 + 1;
  lVar22 = (longlong)(iVar5 + -2);
  if (-1 < iVar5 + -2) {
    lVar12 = (longlong)iVar16;
    do {
      if (iVar3 <= lVar12) {
        puVar20 = (undefined8 *)(local_f8 + (lVar12 + -2) * 8);
        piVar6 = *(int **)(*param_3 + lVar22 * 8);
        do {
          iVar5 = ((int *)*puVar20)[1];
          iVar4 = *(int *)*puVar20;
          if (0 < (*(int *)puVar20[1] - iVar4) * (piVar6[1] - iVar5) -
                  (((int *)puVar20[1])[1] - iVar5) * (*piVar6 - iVar4)) break;
          iVar16 = iVar16 + -1;
          lVar12 = lVar12 + -1;
          puVar20 = puVar20 + -1;
        } while (iVar3 <= lVar12);
      }
      iVar16 = iVar16 + 1;
      *(undefined8 *)(local_f8 + lVar12 * 8) = *(undefined8 *)(*param_3 + lVar22 * 8);
      lVar12 = lVar12 + 1;
      lVar22 = lVar22 + -1;
    } while (-1 < lVar22);
  }
  if (&local_f8 == param_3) {
    uVar14 = local_f8;
    lVar22 = local_d0;
    uVar9 = (uint)local_res18;
  }
  else {
    FUN_145325f00(param_3,&PTR_vftable_14c6e47a0);
    FUN_145325f00(&local_f8,&PTR_vftable_14c6e47a0);
    uVar14 = *param_3;
    *param_3 = local_f8;
    uVar9 = *(uint *)((longlong)param_3 + 0xc);
    *(uint *)(param_3 + 1) = local_f0;
    *(uint *)((longlong)param_3 + 0xc) = local_ec;
    lVar22 = local_e8;
  }
  iVar16 = iVar16 + -1;
  if ((int)(*(uint *)((longlong)param_3 + 0xc) & 0x7fffffff) < iVar16) {
    FUN_14532b0a0(param_3,&PTR_vftable_14c6e47a0,(longlong)iVar16);
  }
  if (((int)param_3[1] < iVar16) || (iVar16 < (int)param_3[1])) {
    *(int *)(param_3 + 1) = iVar16;
  }
  if (lVar22 == 0) {
    lVar12 = (*DAT_14c787678)(1);
  }
  else {
    uVar18 = local_d8 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar22 + 0x28) < uVar18) ||
       (lVar12 = uVar18 + local_e0, lVar12 != *(longlong *)(lVar22 + 0x38))) {
      lVar12 = FUN_144be8550(lVar22);
    }
    else {
      *(ulonglong *)(lVar22 + 0x38) = local_e0;
      if (*(ulonglong *)(lVar22 + 0x48) == local_e0) {
        lVar12 = FUN_144be8430(lVar22);
      }
    }
  }
  uVar10 = (undefined4)lVar12;
  if ((-1 < (int)uVar9) && (uVar14 != 0)) {
    uVar10 = (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                       (&PTR_vftable_14c6e47a0,uVar14,(ulonglong)(uVar9 & 0x7fffffff) << 3);
  }
  plVar17 = (longlong *)*param_3;
  uVar9 = (uint)param_3[1];
  lVar22 = (longlong)(int)uVar9;
  fVar46 = *(float *)(param_1 + 0x18);
  fVar47 = *(float *)((longlong)param_1 + 0xc4);
  fVar48 = *(float *)(param_1 + 0x19);
  fVar34 = ABS(fVar46);
  fVar38 = ABS(fVar47);
  fVar40 = ABS(fVar48);
  auVar25._0_8_ = CONCAT44(fVar46,fVar46) & 0x7fffffff7fffffff;
  auVar25._8_4_ = fVar34;
  auVar25._12_4_ = fVar34;
  plVar15 = plVar17 + lVar22;
  if (iVar16 < 3) {
    auVar32._4_4_ = fVar40;
    auVar32._0_4_ = fVar40;
    auVar32._8_4_ = fVar40;
    auVar32._12_4_ = fVar40;
    auVar37._4_4_ = fVar38;
    auVar37._0_4_ = fVar38;
    auVar37._8_4_ = fVar38;
    auVar37._12_4_ = fVar38;
    auVar30 = maxps(auVar37,auVar25);
    auVar30 = maxps(auVar32,auVar30);
    auVar33._4_4_ = -(uint)(auVar30._4_4_ <= fVar38);
    auVar33._0_4_ = -(uint)(auVar30._0_4_ <= fVar34);
    auVar33._8_4_ = -(uint)(auVar30._8_4_ <= fVar40);
    auVar33._12_4_ = -(uint)(auVar30._12_4_ <= ABS(*(float *)((longlong)param_1 + 0xcc)));
    uVar9 = movmskps(uVar10,auVar33);
    cVar2 = (&DAT_14998f5c0)[uVar9 & 7];
    if (cVar2 < '\x02') {
      for (; plVar17 != plVar15; plVar17 = plVar17 + 1) {
        lVar22 = *plVar17;
        uVar10 = *(undefined4 *)(lVar22 + (longlong)cVar2 * 4);
        *(undefined4 *)(lVar22 + (longlong)cVar2 * 4) = *(undefined4 *)(lVar22 + 8);
        *(undefined4 *)(lVar22 + 8) = uVar10;
      }
    }
    *param_2 = 0x80040200;
    return;
  }
  auVar31._0_8_ = CONCAT44(fVar47,fVar47) & 0x7fffffff7fffffff;
  auVar31._8_4_ = fVar38;
  auVar31._12_4_ = fVar38;
  auVar30 = maxps(auVar31,auVar25);
  auVar26._0_8_ = CONCAT44(fVar48,fVar48) & 0x7fffffff7fffffff;
  auVar26._8_4_ = fVar40;
  auVar26._12_4_ = fVar40;
  auVar30 = maxps(auVar26,auVar30);
  auVar27._4_4_ = -(uint)(auVar30._4_4_ <= fVar38);
  auVar27._0_4_ = -(uint)(auVar30._0_4_ <= fVar34);
  auVar27._8_4_ = -(uint)(auVar30._8_4_ <= fVar40);
  auVar27._12_4_ = -(uint)(auVar30._12_4_ <= ABS(*(float *)((longlong)param_1 + 0xcc)));
  uVar11 = movmskps(uVar10,auVar27);
  cVar2 = (&DAT_14998f5c0)[uVar11 & 7];
  if (cVar2 < '\x02') {
    for (; plVar17 != plVar15; plVar17 = plVar17 + 1) {
      lVar12 = *plVar17;
      uVar10 = *(undefined4 *)(lVar12 + (longlong)cVar2 * 4);
      *(undefined4 *)(lVar12 + (longlong)cVar2 * 4) = *(undefined4 *)(lVar12 + 8);
      *(undefined4 *)(lVar12 + 8) = uVar10;
    }
  }
  fVar46 = 0.0;
  fVar47 = 0.0;
  fVar48 = 0.0;
  auVar28._0_4_ = (float)(int)uVar9;
  auVar28._4_4_ = auVar28._0_4_;
  auVar28._8_4_ = auVar28._0_4_;
  auVar28._12_4_ = auVar28._0_4_;
  auVar30 = divps(_DAT_14c6daca0,auVar28);
  if (0 < (int)uVar9) {
    plVar15 = (longlong *)*param_3;
    lVar12 = lVar22;
    do {
      lVar13 = *plVar15;
      plVar15 = plVar15 + 1;
      uVar1 = *(undefined8 *)(lVar13 + 0x18);
      fVar46 = fVar46 + (float)uVar1;
      fVar47 = fVar47 + (float)((ulonglong)uVar1 >> 0x20);
      fVar48 = fVar48 + *(float *)(lVar13 + 0x20);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  fVar46 = fVar46 * auVar30._0_4_;
  fVar47 = fVar47 * auVar30._4_4_;
  fVar48 = fVar48 * auVar30._8_4_;
  fVar34 = 0.0;
  fVar38 = 0.0;
  fVar40 = 0.0;
  fVar49 = 0.0;
  if (0 < (int)uVar9) {
    lVar12 = (longlong)(int)(uVar9 - 1) * 8;
    lVar13 = 0;
    lVar19 = lVar22;
    do {
      lVar12 = *(longlong *)(lVar12 + *param_3);
      uVar1 = *(undefined8 *)(lVar12 + 0x18);
      lVar7 = *(longlong *)(lVar13 + *param_3);
      fVar42 = (float)uVar1 - fVar46;
      fVar43 = (float)((ulonglong)uVar1 >> 0x20) - fVar47;
      fVar44 = *(float *)(lVar12 + 0x20) - fVar48;
      uVar1 = *(undefined8 *)(lVar7 + 0x18);
      fVar35 = (float)uVar1 - fVar46;
      fVar39 = (float)((ulonglong)uVar1 >> 0x20) - fVar47;
      fVar41 = *(float *)(lVar7 + 0x20) - fVar48;
      fVar45 = fVar39 * fVar42 - fVar43 * fVar35;
      fVar39 = fVar41 * fVar43 - fVar44 * fVar39;
      fVar41 = fVar35 * fVar44 - fVar42 * fVar41;
      fVar35 = fVar45 * fVar45 + fVar41 * fVar41 + fVar39 * fVar39;
      if (fVar49 < fVar35) {
        fVar34 = fVar39;
        fVar38 = fVar41;
        fVar40 = fVar45;
        fVar49 = fVar35;
      }
      lVar19 = lVar19 + -1;
      lVar12 = lVar13;
      lVar13 = lVar13 + 8;
    } while (lVar19 != 0);
  }
  if (0.0 <= fVar40 * *(float *)(param_1 + 0x19) +
             fVar38 * *(float *)((longlong)param_1 + 0xc4) + fVar34 * *(float *)(param_1 + 0x18))
  goto LAB_14552c721;
  local_c0 = 0;
  lVar12 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar12 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar12 + 0xf0);
  if (lVar13 == 0) {
    if (*(char *)(lVar12 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = FUN_144b3f4a0();
    *(longlong *)(lVar12 + 0xf0) = lVar13;
  }
  lVar12 = *(longlong *)(*(longlong *)(lVar13 + 0x3d0) + 0x10);
  local_res18 = lVar22 * 8;
  lVar13 = 0;
  if (*(longlong *)(lVar12 + 8) == 0) {
    lVar13 = lVar12;
  }
  local_b8 = lVar13;
  local_a8 = local_res18;
  if (lVar13 == 0) {
    uVar14 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar12 >> 8),1),&local_res18,0x40);
  }
  else {
    uVar18 = local_res18 + 0x3f & 0xffffffffffffffc0;
    if (uVar18 <= *(ulonglong *)(lVar13 + 0x28)) {
      uVar14 = *(ulonglong *)(lVar13 + 0x38);
      uVar18 = uVar14 + uVar18;
      if (uVar18 <= *(ulonglong *)(lVar13 + 0x40)) {
        *(ulonglong *)(lVar13 + 0x38) = uVar18;
        goto LAB_14552c60a;
      }
    }
    uVar14 = FUN_144b454a0(lVar13);
  }
LAB_14552c60a:
  local_bc = uVar9 | 0x80000000;
  uVar11 = uVar9 | 0x80000000;
  uVar18 = uVar14;
  local_c8 = uVar14;
  local_b0 = uVar14;
  if (param_3 != &local_c8) {
    local_res18 = (ulonglong)(int)param_3[1];
    local_res20 = *param_3;
    if ((int)(uVar9 & 0x7fffffff) < (int)param_3[1]) {
      FUN_145530800(&local_c8,&PTR_vftable_14c6e47a0,local_res18);
      lVar13 = local_b8;
    }
    uVar14 = local_b0;
    uVar11 = local_bc;
    uVar18 = local_c8;
    FUN_144b3d470(local_c8,local_res20,local_res18 * 8);
  }
  lVar12 = 0;
  if (0 < (int)uVar9) {
    puVar20 = (undefined8 *)(uVar18 + (lVar22 + -1) * 8);
    do {
      uVar1 = *puVar20;
      puVar20 = puVar20 + -1;
      *(undefined8 *)(*param_3 + lVar12 * 8) = uVar1;
      lVar12 = lVar12 + 1;
    } while (lVar12 < lVar22);
  }
  if (lVar13 == 0) {
    (*DAT_14c787678)(1,uVar14);
  }
  else {
    uVar21 = local_a8 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar13 + 0x28) < uVar21) ||
       (uVar21 + uVar14 != *(longlong *)(lVar13 + 0x38))) {
      FUN_144be8550(lVar13,uVar14);
    }
    else {
      *(ulonglong *)(lVar13 + 0x38) = uVar14;
      if (*(ulonglong *)(lVar13 + 0x48) == uVar14) {
        FUN_144be8430(lVar13);
      }
    }
  }
  if ((-1 < (int)uVar11) && (uVar18 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,uVar18);
  }
LAB_14552c721:
  auVar30 = _DAT_14c6dae80;
  fVar34 = 0.0;
  fVar38 = 0.0;
  fVar40 = 0.0;
  auVar53 = DAT_14c6dae80._0_12_;
  auVar50._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
  auVar50._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
  auVar51._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
  auVar51._0_12_ = auVar50;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < (int)uVar9) {
    FUN_14532af70(param_1,&PTR_vftable_14c6e47a0);
  }
  if (((int)param_1[1] < (int)uVar9) || ((int)uVar9 < (int)param_1[1])) {
    *(uint *)(param_1 + 1) = uVar9;
  }
  lVar12 = 0;
  if (0 < (int)uVar9) {
    lVar13 = *param_1;
    lVar19 = 0;
    uVar14 = 0;
    do {
      puVar8 = *(undefined8 **)(*param_3 + lVar12 * 8);
      lVar12 = lVar12 + 1;
      uVar1 = puVar8[1];
      *(undefined8 *)(lVar19 + lVar13) = *puVar8;
      ((undefined8 *)(lVar19 + lVar13))[1] = uVar1;
      uVar1 = puVar8[3];
      puVar20 = (undefined8 *)(lVar19 + 0x10 + lVar13);
      *puVar20 = puVar8[2];
      puVar20[1] = uVar1;
      *(undefined4 *)(lVar19 + 0x20 + lVar13) = *(undefined4 *)(puVar8 + 4);
      lVar19 = lVar19 + 0x24;
      lVar13 = *param_1;
      uVar1 = *(undefined8 *)(lVar13 + 0xc + uVar14 * 0x24);
      uVar10 = *(undefined4 *)(lVar13 + 0x20 + uVar14 * 0x24);
      fVar34 = fVar34 + (float)uVar1;
      fVar38 = fVar38 + (float)((ulonglong)uVar1 >> 0x20);
      fVar40 = fVar40 + *(float *)(lVar13 + 0x14 + uVar14 * 0x24);
      auVar36._8_4_ = uVar10;
      auVar36._0_8_ = *(undefined8 *)(lVar13 + 0x18 + uVar14 * 0x24);
      auVar36._12_4_ = uVar10;
      auVar30 = minps(auVar30,auVar36);
      auVar53 = auVar30._0_12_;
      auVar51 = maxps(auVar51,auVar36);
      auVar50 = auVar51._0_12_;
      uVar14 = (ulonglong)((int)uVar14 + 1);
    } while (lVar12 < lVar22);
  }
  *param_2 = 0;
  auVar52._12_4_ = auVar53._8_4_;
  auVar52._0_12_ = auVar50;
  *(undefined1 (*) [16])((longlong)param_1 + 0x10c) = auVar52;
  *(longlong *)((longlong)param_1 + 0x11c) = auVar53._0_8_;
  fVar49 = 1.0 / (float)(int)uVar9;
  *(ulonglong *)((longlong)param_1 + 0xf4) = CONCAT44(fVar38 * fVar49,fVar34 * fVar49);
  *(float *)((longlong)param_1 + 0xfc) = fVar40 * fVar49;
  param_1[0x20] = CONCAT44(fVar47,fVar46);
  *(float *)(param_1 + 0x21) = fVar48;
  return;
}



// FUNCTION 14552c8f0 FUN_14552c8f0 body=1588 status=ok
// SIG undefined FUN_14552c8f0(void)

/* WARNING: Removing unreachable block (ram,0x00014552cdcc) */
/* WARNING: Removing unreachable block (ram,0x00014552cce3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_14552c8f0(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float *pfVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  longlong lVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
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
  float fVar33;
  float fVar34;
  float fVar37;
  float fVar39;
  float fVar41;
  undefined1 auVar35 [16];
  float fVar38;
  float fVar40;
  undefined1 auVar36 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  uint uVar62;
  uint uVar65;
  uint uVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  uint local_c8 [36];
  
  pfVar14 = (float *)*param_3;
  pfVar1 = (float *)param_3[1];
  lVar15 = 1;
  uVar11 = 1;
  fVar34 = *pfVar14;
  fVar41 = pfVar14[1];
  fVar69 = pfVar14[2];
  uVar22 = 0;
  uVar25 = 0;
  uVar26 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_c8[2] = 0;
  uVar62 = 0;
  uVar65 = 0;
  uVar66 = 0;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[5] = 0;
  iVar10 = (int)((longlong)pfVar1 - (longlong)pfVar14 >> 4);
  pfVar6 = pfVar14;
  fVar68 = fVar34;
  fVar70 = fVar41;
  fVar71 = fVar69;
  if (1 < iVar10) {
    do {
      fVar49 = pfVar6[4];
      fVar42 = pfVar6[5];
      fVar54 = pfVar6[6];
      uVar18 = -(uint)(fVar68 < fVar49);
      uVar20 = -(uint)(fVar70 < fVar42);
      uVar23 = -(uint)(fVar71 < fVar54);
      uVar19 = -(uint)(fVar49 < fVar34);
      uVar21 = -(uint)(fVar42 < fVar41);
      uVar24 = -(uint)(fVar54 < fVar69);
      uVar9 = uVar11 + 1;
      fVar34 = (float)(uVar19 & (uint)fVar49 | ~uVar19 & (uint)fVar34);
      fVar41 = (float)(uVar21 & (uint)fVar42 | ~uVar21 & (uint)fVar41);
      fVar69 = (float)(uVar24 & (uint)fVar54 | ~uVar24 & (uint)fVar69);
      fVar68 = (float)(uVar18 & (uint)fVar49 | ~uVar18 & (uint)fVar68);
      fVar70 = (float)(uVar20 & (uint)fVar42 | ~uVar20 & (uint)fVar70);
      fVar71 = (float)(uVar23 & (uint)fVar54 | ~uVar23 & (uint)fVar71);
      local_c8[0] = uVar19 & uVar11 | ~uVar19 & uVar22;
      local_c8[1] = uVar21 & uVar11 | ~uVar21 & uVar25;
      local_c8[2] = uVar24 & uVar11 | ~uVar24 & uVar26;
      local_c8[3] = uVar18 & uVar11 | ~uVar18 & uVar62;
      local_c8[4] = uVar20 & uVar11 | ~uVar20 & uVar65;
      local_c8[5] = uVar23 & uVar11 | ~uVar23 & uVar66;
      uVar11 = uVar9;
      pfVar6 = pfVar6 + 4;
      uVar22 = local_c8[0];
      uVar25 = local_c8[1];
      uVar26 = local_c8[2];
      uVar62 = local_c8[3];
      uVar65 = local_c8[4];
      uVar66 = local_c8[5];
    } while ((int)uVar9 < iVar10);
  }
  FUN_144cfba60(local_c8,0,5,(ulonglong)param_3 & 0xff);
  uVar17 = (ulonglong)(local_c8[0] != local_c8[1]);
  if (local_c8[uVar17] != local_c8[2]) {
    uVar17 = (ulonglong)((local_c8[0] != local_c8[1]) + 1);
    local_c8[uVar17] = local_c8[2];
  }
  if (local_c8[uVar17] != local_c8[3]) {
    uVar17 = (ulonglong)((int)uVar17 + 1);
    local_c8[uVar17] = local_c8[3];
  }
  if (local_c8[uVar17] != local_c8[4]) {
    uVar17 = (ulonglong)((int)uVar17 + 1);
    local_c8[uVar17] = local_c8[4];
  }
  if (local_c8[uVar17] != local_c8[5]) {
    uVar17 = (ulonglong)((int)uVar17 + 1);
    local_c8[uVar17] = local_c8[5];
  }
  uVar11 = (int)uVar17 + 1;
  if (uVar11 != 1) {
    auVar30._4_4_ = fRam000000014c6daca4;
    auVar30._0_4_ = _DAT_14c6daca0;
    auVar30._8_4_ = fRam000000014c6daca8;
    auVar30._12_4_ = fRam000000014c6dacac;
    if (uVar11 != 2) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      fVar49 = 0.0 - _DAT_14c6daca0;
      if (uVar11 != 0) {
        puVar16 = local_c8;
        uVar17 = (ulonglong)uVar11;
        do {
          if (lVar15 < (longlong)(ulonglong)uVar11) {
            pfVar6 = pfVar14 + (longlong)(int)*puVar16 * 4;
            lVar12 = lVar15;
            do {
              pfVar13 = pfVar14 + (longlong)(int)local_c8[lVar12] * 4;
              fVar42 = (pfVar6[1] - pfVar13[1]) * (pfVar6[1] - pfVar13[1]) +
                       (*pfVar6 - *pfVar13) * (*pfVar6 - *pfVar13) +
                       (pfVar6[2] - pfVar13[2]) * (pfVar6[2] - pfVar13[2]);
              if (fVar49 < fVar42) {
                local_c8[0] = *puVar16;
                local_c8[1] = local_c8[lVar12];
                fVar49 = fVar42;
              }
              lVar12 = lVar12 + 1;
            } while (lVar12 < (longlong)(ulonglong)uVar11);
          }
          lVar15 = lVar15 + 1;
          puVar16 = puVar16 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
    }
    auVar51._0_12_ = ZEXT812(0);
    auVar51._12_4_ = 0;
    pfVar13 = pfVar14 + (longlong)(int)local_c8[0] * 4;
    pfVar6 = pfVar14 + (longlong)(int)local_c8[1] * 4;
    fVar49 = *pfVar13;
    fVar42 = pfVar13[1];
    fVar54 = pfVar13[2];
    fVar55 = pfVar13[3];
    fVar56 = *pfVar6 - fVar49;
    fVar58 = pfVar6[1] - fVar42;
    fVar60 = pfVar6[2] - fVar54;
    fVar33 = fVar56 * fVar56;
    fVar37 = fVar58 * fVar58;
    fVar39 = fVar60 * fVar60;
    auVar27._4_4_ = fVar33;
    auVar27._0_4_ = fVar33;
    auVar27._8_4_ = fVar33;
    auVar27._12_4_ = fVar33;
    fVar43 = fVar37 + fVar33 + fVar39;
    fVar45 = fVar37 + fVar33 + fVar39;
    fVar47 = fVar37 + fVar33 + fVar39;
    fVar39 = fVar37 + fVar33 + fVar39;
    uVar11 = -(uint)(0.0 - fVar43 < 0.0);
    uVar22 = -(uint)(0.0 - fVar45 < 0.0);
    uVar25 = -(uint)(0.0 - fVar47 < 0.0);
    uVar26 = -(uint)(0.0 - fVar39 < 0.0);
    if (fVar43 == 0.0) {
      auVar30 = ZEXT816(0);
    }
    else {
      auVar5._4_4_ = fVar45;
      auVar5._0_4_ = fVar43;
      auVar5._8_4_ = fVar47;
      auVar5._12_4_ = fVar39;
      auVar27 = sqrtps(auVar27,auVar5);
      auVar30 = divps(auVar30,auVar27);
    }
    auVar63._0_4_ = 0.0 - _DAT_14c6daca0;
    auVar63._4_4_ = 0.0 - fRam000000014c6daca4;
    auVar63._8_4_ = 0.0 - fRam000000014c6daca8;
    auVar63._12_4_ = 0.0 - fRam000000014c6dacac;
    auVar67._0_4_ = (uint)(fVar56 * auVar30._0_4_) & uVar11;
    auVar67._4_4_ = (uint)(fVar58 * auVar30._4_4_) & uVar22;
    auVar67._8_4_ = (uint)(fVar60 * auVar30._8_4_) & uVar25;
    auVar67._12_4_ = (uint)((pfVar6[3] - fVar55) * auVar30._12_4_) & uVar26;
    auVar35._0_4_ = ~uVar11 & (uint)fVar56;
    auVar35._4_4_ = ~uVar22 & (uint)fVar58;
    auVar35._8_4_ = ~uVar25 & (uint)fVar60;
    auVar35._12_4_ = ~uVar26 & (uint)(pfVar6[3] - fVar55);
    auVar67 = auVar67 | auVar35;
    fVar45 = auVar67._0_4_;
    fVar47 = auVar67._4_4_;
    fVar56 = auVar67._8_4_;
    fVar33 = _DAT_14c6daca0;
    fVar37 = fRam000000014c6daca4;
    fVar39 = fRam000000014c6daca8;
    fVar43 = fRam000000014c6dacac;
    auVar29 = _DAT_14c6daeb0;
    if ((float)DAT_14c6daeb0 <= fVar47 * fVar47 + fVar45 * fVar45 + fVar56 * fVar56) {
      for (; fVar58 = auVar63._0_4_, pfVar14 != pfVar1; pfVar14 = pfVar14 + 4) {
        fVar57 = *pfVar14 - fVar49;
        fVar59 = pfVar14[1] - fVar42;
        fVar61 = pfVar14[2] - fVar54;
        fVar60 = fVar57 * fVar57;
        fVar38 = fVar59 * fVar59;
        fVar40 = fVar61 * fVar61;
        auVar28._4_4_ = fVar60;
        auVar28._0_4_ = fVar60;
        auVar28._8_4_ = fVar60;
        auVar28._12_4_ = fVar60;
        fVar44 = fVar38 + fVar60 + fVar40;
        fVar46 = fVar38 + fVar60 + fVar40;
        fVar48 = fVar38 + fVar60 + fVar40;
        fVar40 = fVar38 + fVar60 + fVar40;
        uVar11 = -(uint)(0.0 - fVar44 < 0.0);
        uVar22 = -(uint)(0.0 - fVar46 < 0.0);
        uVar25 = -(uint)(0.0 - fVar48 < 0.0);
        uVar26 = -(uint)(0.0 - fVar40 < 0.0);
        if (fVar44 == 0.0) {
          auVar30 = ZEXT816(0);
        }
        else {
          auVar4._4_4_ = fVar46;
          auVar4._0_4_ = fVar44;
          auVar4._8_4_ = fVar48;
          auVar4._12_4_ = fVar40;
          auVar30 = sqrtps(auVar28,auVar4);
          auVar36._4_4_ = fVar37;
          auVar36._0_4_ = fVar33;
          auVar36._8_4_ = fVar39;
          auVar36._12_4_ = fVar43;
          auVar30 = divps(auVar36,auVar30);
        }
        fVar60 = (float)((uint)(auVar30._0_4_ * fVar57) & uVar11 | ~uVar11 & (uint)fVar57);
        fVar38 = (float)((uint)(auVar30._4_4_ * fVar59) & uVar22 | ~uVar22 & (uint)fVar59);
        fVar40 = (float)((uint)(auVar30._8_4_ * fVar61) & uVar25 | ~uVar25 & (uint)fVar61);
        fVar44 = (float)((uint)(auVar30._12_4_ * (pfVar14[3] - fVar55)) & uVar26 |
                        ~uVar26 & (uint)(pfVar14[3] - fVar55));
        fVar46 = fVar38 * fVar45 - fVar60 * fVar47;
        fVar48 = fVar40 * fVar47 - fVar38 * fVar56;
        fVar57 = fVar60 * fVar56 - fVar40 * fVar45;
        fVar60 = fVar48 * fVar48;
        fVar38 = fVar57 * fVar57;
        fVar40 = fVar46 * fVar46;
        auVar29._4_4_ = fVar60;
        auVar29._0_4_ = fVar60;
        auVar29._8_4_ = fVar60;
        auVar29._12_4_ = fVar60;
        fVar59 = fVar38 + fVar60 + fVar40;
        auVar64._4_4_ = fVar38 + fVar60 + fVar40;
        auVar64._0_4_ = fVar59;
        if (fVar58 < fVar59) {
          *(float *)(param_1 + 0xc0) = fVar48;
          *(float *)(param_1 + 0xc4) = fVar57;
          *(float *)(param_1 + 200) = fVar46;
          *(float *)(param_1 + 0xcc) = fVar44 * auVar67._12_4_ - fVar44 * auVar67._12_4_;
          auVar64._8_4_ = fVar38 + fVar60 + fVar40;
          auVar64._12_4_ = fVar38 + fVar60 + fVar40;
          fVar49 = *pfVar13;
          fVar42 = pfVar13[1];
          fVar54 = pfVar13[2];
          fVar55 = pfVar13[3];
          auVar63 = auVar64;
          fVar33 = _DAT_14c6daca0;
          fVar37 = fRam000000014c6daca4;
          fVar39 = fRam000000014c6daca8;
          fVar43 = fRam000000014c6dacac;
        }
      }
      if (fVar58 <= 0.0) {
        fVar54 = fVar45 * fVar45;
        fVar33 = fVar47 * fVar47;
        fVar49 = fVar56 * fVar56 + 0.0;
        fVar42 = fVar45 * fVar45 + 0.0;
        uVar11 = -(uint)(fVar33 + fVar54 < fVar42 + fVar49);
        fVar55 = (float)((uint)fVar45 & -(uint)(fVar33 + fVar54 < fVar49 + fVar42));
        fVar45 = (float)(~-(uint)(fVar33 + fVar54 < fVar45 * fVar45 + 0.0 + fVar56 * fVar56 + 0.0) &
                        (uint)fVar45);
        fVar33 = (float)(~uVar11 & (uint)-fVar47 | (uint)-fVar56 & uVar11);
        *(float *)(param_1 + 0xc0) = fVar33;
        *(float *)(param_1 + 0xc4) = fVar45;
        *(float *)(param_1 + 200) = fVar55;
        *(undefined4 *)(param_1 + 0xcc) = 0;
        fVar49 = fVar33 * fVar33;
        fVar42 = fVar45 * fVar45;
        fVar54 = fVar55 * fVar55;
        auVar31._0_12_ = ZEXT812(0);
        auVar31._12_4_ = 0;
        auVar52._0_4_ = fVar42 + fVar49 + fVar54;
        auVar52._4_4_ = fVar42 + fVar49 + fVar54;
        auVar52._8_4_ = fVar42 + fVar49 + fVar54;
        auVar52._12_4_ = fVar42 + fVar49 + fVar54;
        uVar11 = -(uint)(0.0 - auVar52._0_4_ < 0.0);
        uVar22 = -(uint)(0.0 - auVar52._4_4_ < 0.0);
        uVar25 = -(uint)(0.0 - auVar52._8_4_ < 0.0);
        uVar26 = -(uint)(0.0 - auVar52._12_4_ < 0.0);
        if (!NAN(auVar52._0_4_) && auVar52._0_4_ == 0.0) {
          auVar30 = ZEXT816(0);
        }
        else {
          auVar8._4_4_ = fRam000000014c6daca4;
          auVar8._0_4_ = _DAT_14c6daca0;
          auVar8._8_4_ = fRam000000014c6daca8;
          auVar8._12_4_ = fRam000000014c6dacac;
          auVar30 = sqrtps(auVar31,auVar52);
          auVar30 = divps(auVar8,auVar30);
        }
        auVar2._4_4_ = uVar22;
        auVar2._0_4_ = uVar11;
        auVar2._8_4_ = uVar25;
        auVar2._12_4_ = uVar26;
        iVar10 = movmskps((int)CONCAT71(0x80,!NAN(auVar52._0_4_)),auVar2);
        fVar49 = (float)((uint)(fVar33 * auVar30._0_4_) & uVar11 | ~uVar11 & (uint)fVar33);
        fVar42 = (float)((uint)(fVar45 * auVar30._4_4_) & uVar22 | ~uVar22 & (uint)fVar45);
        fVar54 = (float)((uint)(fVar55 * auVar30._8_4_) & uVar25 | ~uVar25 & (uint)fVar55);
        *(float *)(param_1 + 0xc0) = fVar49;
        *(float *)(param_1 + 0xc4) = fVar42;
        *(float *)(param_1 + 200) = fVar54;
        *(uint *)(param_1 + 0xcc) = (uint)(auVar30._12_4_ * 0.0) & uVar26;
        if (iVar10 == 0) {
          fVar68 = fVar68 - fVar34;
          fVar70 = fVar70 - fVar41;
          fVar71 = fVar71 - fVar69;
          fVar69 = fVar68 * fVar68;
          fVar49 = fVar70 * fVar70;
          fVar34 = fVar71 * fVar71 + 0.0;
          fVar41 = fVar68 * fVar68 + 0.0;
          uVar11 = -(uint)(fVar49 + fVar69 < fVar41 + fVar34);
          fVar54 = (float)((uint)fVar68 & -(uint)(fVar49 + fVar69 < fVar34 + fVar41));
          fVar68 = (float)(~-(uint)(fVar49 + fVar69 < fVar68 * fVar68 + 0.0 + fVar71 * fVar71 + 0.0)
                          & (uint)fVar68);
          fVar70 = (float)(~uVar11 & (uint)-fVar70 | (uint)-fVar71 & uVar11);
          *(float *)(param_1 + 0xc0) = fVar70;
          *(float *)(param_1 + 0xc4) = fVar68;
          *(float *)(param_1 + 200) = fVar54;
          *(undefined4 *)(param_1 + 0xcc) = 0;
          fVar34 = fVar70 * fVar70;
          fVar41 = fVar68 * fVar68;
          fVar69 = fVar54 * fVar54;
          auVar32._0_12_ = ZEXT812(0);
          auVar32._12_4_ = 0;
          auVar53._0_4_ = fVar41 + fVar34 + fVar69;
          auVar53._4_4_ = fVar41 + fVar34 + fVar69;
          auVar53._8_4_ = fVar41 + fVar34 + fVar69;
          auVar53._12_4_ = fVar41 + fVar34 + fVar69;
          uVar11 = -(uint)(0.0 - auVar53._0_4_ < 0.0);
          uVar22 = -(uint)(0.0 - auVar53._4_4_ < 0.0);
          uVar25 = -(uint)(0.0 - auVar53._8_4_ < 0.0);
          uVar26 = -(uint)(0.0 - auVar53._12_4_ < 0.0);
          if (!NAN(auVar53._0_4_) && auVar53._0_4_ == 0.0) {
            auVar30 = ZEXT816(0);
          }
          else {
            auVar7._4_4_ = fRam000000014c6daca4;
            auVar7._0_4_ = _DAT_14c6daca0;
            auVar7._8_4_ = fRam000000014c6daca8;
            auVar7._12_4_ = fRam000000014c6dacac;
            auVar30 = sqrtps(auVar32,auVar53);
            auVar30 = divps(auVar7,auVar30);
          }
          auVar3._4_4_ = uVar22;
          auVar3._0_4_ = uVar11;
          auVar3._8_4_ = uVar25;
          auVar3._12_4_ = uVar26;
          iVar10 = movmskps((uint)!NAN(auVar53._0_4_),auVar3);
          fVar49 = (float)((uint)(fVar70 * auVar30._0_4_) & uVar11 | ~uVar11 & (uint)fVar70);
          fVar42 = (float)((uint)(fVar68 * auVar30._4_4_) & uVar22 | ~uVar22 & (uint)fVar68);
          fVar54 = (float)((uint)(fVar54 * auVar30._8_4_) & uVar25 | ~uVar25 & (uint)fVar54);
          *(float *)(param_1 + 0xc0) = fVar49;
          *(float *)(param_1 + 0xc4) = fVar42;
          *(float *)(param_1 + 200) = fVar54;
          *(uint *)(param_1 + 0xcc) = (uint)(auVar30._12_4_ * 0.0) & uVar26;
          if (iVar10 == 0) goto LAB_14552cee2;
        }
      }
      else {
        if (fVar58 != 0.0) {
          auVar30 = sqrtps(auVar29,auVar63);
          auVar50._4_4_ = fVar37;
          auVar50._0_4_ = fVar33;
          auVar50._8_4_ = fVar39;
          auVar50._12_4_ = fVar43;
          auVar51 = divps(auVar50,auVar30);
        }
        fVar49 = auVar51._0_4_ * *(float *)(param_1 + 0xc0);
        fVar42 = auVar51._4_4_ * *(float *)(param_1 + 0xc4);
        fVar54 = auVar51._8_4_ * *(float *)(param_1 + 200);
        *(float *)(param_1 + 0xc0) = fVar49;
        *(float *)(param_1 + 0xc4) = fVar42;
        *(float *)(param_1 + 200) = fVar54;
        *(float *)(param_1 + 0xcc) = auVar51._12_4_ * *(float *)(param_1 + 0xcc);
      }
      lVar15 = *param_3;
      *param_2 = 0;
      pfVar14 = (float *)(lVar15 + (longlong)(int)local_c8[0] * 0x10);
      fVar34 = *pfVar14;
      fVar41 = pfVar14[1];
      fVar69 = pfVar14[2];
      *(float *)(param_1 + 0xc0) = fVar49;
      *(float *)(param_1 + 0xc4) = fVar42;
      *(float *)(param_1 + 200) = fVar54;
      *(float *)(param_1 + 0xcc) = 0.0 - (fVar42 * fVar41 + fVar49 * fVar34 + fVar54 * fVar69);
      return param_2;
    }
  }
LAB_14552cee2:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 14552cf30 FUN_14552cf30 body=6075 status=ok
// SIG undefined FUN_14552cf30(void)

undefined4 * FUN_14552cf30(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  sbyte sVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 uVar18;
  int iVar19;
  undefined4 *puVar20;
  longlong lVar21;
  char *pcVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  longlong lVar26;
  int *piVar27;
  longlong lVar28;
  int iVar29;
  longlong *plVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  int iVar34;
  uint uVar39;
  int iVar40;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  int iVar43;
  int iVar44;
  uint uVar50;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  int iVar51;
  int iVar52;
  int iVar53;
  uint uVar56;
  int iVar57;
  int iVar58;
  int iVar59;
  int iVar60;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  int iVar65;
  undefined1 *local_res8;
  undefined4 *local_res10;
  longlong *local_res18;
  undefined8 local_res20;
  ulonglong local_188;
  longlong *local_180;
  uint local_178;
  uint local_174;
  longlong local_170;
  longlong *local_168;
  ulonglong local_160;
  longlong local_158;
  undefined8 local_150;
  longlong local_148;
  longlong local_140;
  ulonglong local_138;
  int local_130 [2];
  longlong local_128;
  undefined8 *local_120;
  longlong local_118;
  int local_110;
  uint uStack_10c;
  uint local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  longlong local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  
  local_120 = (undefined8 *)(param_3[1] - *param_3 >> 3);
  iVar44 = (int)local_120;
  local_res10 = param_2;
  local_res18 = param_3;
  if (((*(byte *)(param_1 + 0x17) & 4) != 0) && (1 < iVar44)) {
    FUN_145530460(*param_3,0,iVar44 + -1,0);
  }
  uVar39 = iVar44 * 2;
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < (int)uVar39) {
    FUN_1455305a0(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar39);
  }
  iVar29 = (int)param_1[3];
  if (iVar29 < (int)uVar39) {
    puVar23 = (undefined4 *)((longlong)iVar29 * 0x2c + param_1[2]);
    *(uint *)(param_1 + 3) = uVar39;
    puVar20 = (undefined4 *)((longlong)(int)uVar39 * 0x2c + param_1[2]);
    if (puVar23 != puVar20) {
      puVar23 = puVar23 + 5;
      do {
        if (puVar23 != (undefined4 *)&DAT_00000014) {
          puVar23[-4] = 0xffffffff;
          puVar23[-2] = 0xffffffff;
          *puVar23 = 0xffffffff;
        }
        puVar1 = puVar23 + 6;
        puVar23 = puVar23 + 0xb;
      } while (puVar1 != puVar20);
    }
  }
  else if ((int)uVar39 < iVar29) {
    *(uint *)(param_1 + 3) = uVar39;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar44) {
    FUN_14532af70(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar44);
  }
  if (((int)param_1[1] < iVar44) || (iVar44 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar44;
  }
  lVar33 = 0;
  local_178 = 0;
  local_174 = 0x80000000;
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  pcVar22 = (char *)(lVar16 + 0x114);
  if (*pcVar22 == '\0') {
    __dyn_tls_on_demand_init();
  }
  plVar30 = (longlong *)(lVar16 + 0xf0);
  lVar16 = *plVar30;
  if (lVar16 == 0) {
    if (*pcVar22 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar16 = FUN_144b3f4a0();
    *plVar30 = lVar16;
  }
  lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x3d0) + 0x10);
  local_170 = lVar33;
  if (*(longlong *)(lVar16 + 8) == 0) {
    local_170 = lVar16;
  }
  local_res20 = (longlong)(int)uVar39 * 0x18;
  local_160 = local_res20;
  if (local_170 == 0) {
    local_180 = (longlong *)(*DAT_14c787670)(CONCAT71((int7)(local_res20 >> 8),1),&local_res20,0x40)
    ;
  }
  else {
    local_res8 = (undefined1 *)(local_res20 + 0x3f & 0xffffffffffffffc0);
    if (local_res8 <= *(undefined1 **)(local_170 + 0x28)) {
      local_180 = *(longlong **)(local_170 + 0x38);
      if ((undefined1 *)((longlong)local_180 + (longlong)local_res8) <=
          *(undefined1 **)(local_170 + 0x40)) {
        *(undefined1 **)(local_170 + 0x38) =
             (undefined1 *)((longlong)local_180 + (longlong)local_res8);
        goto LAB_14552d116;
      }
    }
    local_180 = (longlong *)FUN_144b454a0(local_170,&local_res8);
  }
LAB_14552d116:
  local_174 = uVar39 | 0x80000000;
  local_168 = local_180;
  if ((int)(uVar39 & 0x7fffffff) < (int)uVar39) {
    FUN_1455306d0(&local_180,&PTR_vftable_14c6e47a0,(longlong)(int)uVar39);
  }
  puVar20 = local_res10;
  if (((int)local_178 < (int)uVar39) || ((int)uVar39 < (int)local_178)) {
    local_178 = uVar39;
  }
  lVar16 = *param_3;
  local_118 = param_3[1] - lVar16 >> 3;
  iVar44 = (int)local_118;
  if (0 < iVar44) {
    iVar29 = 2;
    lVar25 = (longlong)iVar44;
    local_res8 = (undefined1 *)CONCAT44(local_res8._4_4_,2);
    lVar28 = 1;
    do {
      piVar3 = *(int **)(lVar16 + lVar33 * 8);
      iVar57 = *piVar3;
      iVar58 = piVar3[1];
      iVar60 = piVar3[2];
      iVar53 = piVar3[3];
      uVar6 = *(undefined8 *)(piVar3 + 4);
      uVar2 = *(undefined8 *)(piVar3 + 6);
      iVar52 = piVar3[8];
      local_128 = CONCAT44(local_128._4_4_,iVar52);
      if (lVar28 < lVar25) {
        local_res20 = CONCAT44(local_res20._4_4_,iVar58);
        lVar26 = lVar28;
        lVar21 = lVar28;
        do {
          lVar21 = lVar21 + 1;
          puVar4 = *(undefined8 **)(lVar16 + lVar26 * 8);
          local_130[0] = iVar57;
          if (lVar21 < lVar25) {
            lVar17 = lVar21;
            iVar19 = iVar29;
            do {
              puVar5 = *(undefined8 **)(lVar16 + lVar17 * 8);
              iVar34 = (int)*puVar4 - iVar57;
              uVar39 = (int)((ulonglong)*puVar4 >> 0x20) - iVar58;
              iVar40 = *(int *)(puVar4 + 1) - iVar60;
              iVar65 = *(int *)(puVar5 + 1);
              auVar9._4_4_ = iVar40;
              auVar9._0_4_ = uVar39;
              auVar9._8_4_ = iVar34;
              auVar9._12_4_ = *(int *)(puVar4 + 1) - iVar60;
              iVar51 = (int)*puVar5 - iVar57;
              uVar56 = (int)((ulonglong)*puVar5 >> 0x20) - iVar58;
              iVar59 = iVar65 - iVar60;
              auVar35._4_4_ = iVar59;
              auVar35._0_4_ = uVar56;
              auVar35._8_4_ = iVar51;
              auVar35._12_4_ = iVar65 - iVar60;
              iVar43 = uVar39 * iVar59 - uVar56 * iVar40;
              uVar50 = iVar40 * iVar51 - iVar34 * iVar59;
              local_150 = CONCAT44(uVar50,iVar43);
              iVar34 = (int)((auVar9._8_8_ & 0xffffffff) * (ulonglong)uVar56) -
                       (int)((auVar35._8_8_ & 0xffffffff) * (ulonglong)uVar39);
              auVar45._0_4_ = -(uint)(iVar43 == 0);
              auVar45._4_4_ = -(uint)(uVar50 == 0);
              auVar45._8_4_ = -(uint)(iVar34 == 0);
              auVar45._12_4_ = 0xffffffff;
              uVar18 = movmskps(iVar65,auVar45);
              if (((byte)uVar18 & 7) != 7) {
                local_res8 = (undefined1 *)(longlong)iVar34;
                iVar19 = iVar19 + 1;
                lVar28 = (longlong)(int)uVar50 * (longlong)iVar58 +
                         (longlong)iVar57 * (longlong)iVar43 +
                         (longlong)iVar60 * (longlong)local_res8;
                if (iVar44 <= iVar19) goto LAB_14552d369;
                local_res20 = (ulonglong)(int)uVar50;
                lVar21 = (longlong)iVar19;
                goto LAB_14552d430;
              }
              iVar19 = iVar19 + 1;
              lVar17 = lVar17 + 1;
            } while (lVar17 < lVar25);
          }
          iVar29 = iVar29 + 1;
          lVar26 = lVar26 + 1;
        } while (lVar26 < lVar25);
        iVar29 = (int)local_res8;
      }
      iVar29 = iVar29 + 1;
      lVar33 = lVar33 + 1;
      lVar28 = lVar28 + 1;
      local_res8 = (undefined1 *)CONCAT44(local_res8._4_4_,iVar29);
    } while (lVar33 < lVar25);
  }
LAB_14552d369:
  *local_res10 = 0x80040200;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  if (local_170 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar24 = local_160 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_170 + 0x28) < uVar24) ||
       ((longlong)local_168 + uVar24 != *(longlong *)(local_170 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong **)(local_170 + 0x38) = local_168;
      if (*(longlong **)(local_170 + 0x48) == local_168) {
        FUN_144be8430();
      }
    }
  }
LAB_14552e678:
  local_178 = 0;
  if ((-1 < (int)local_174) && (local_180 != (longlong *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_180,(ulonglong)(local_174 & 0x7fffffff) * 0x18);
  }
  return puVar20;
  while( true ) {
    iVar19 = iVar19 + 1;
    lVar21 = lVar21 + 1;
    if (lVar25 <= lVar21) break;
LAB_14552d430:
    piVar3 = *(int **)(lVar16 + lVar21 * 8);
    lVar31 = (longlong)piVar3[2] * (longlong)local_res8 + (longlong)piVar3[1] * local_res20 +
             (longlong)*piVar3 * (longlong)iVar43;
    lVar32 = lVar31 - lVar28;
    if (lVar31 != lVar28) {
      piVar3 = (int *)*param_1;
      *piVar3 = iVar57;
      piVar3[1] = iVar58;
      piVar3[2] = iVar60;
      piVar3[3] = iVar53;
      *(undefined8 *)(piVar3 + 4) = uVar6;
      *(undefined8 *)(piVar3 + 6) = uVar2;
      piVar3[8] = iVar52;
      uVar6 = puVar4[1];
      lVar25 = *param_1;
      *(undefined8 *)(lVar25 + 0x24) = *puVar4;
      *(undefined8 *)(lVar25 + 0x2c) = uVar6;
      uVar6 = puVar4[3];
      *(undefined8 *)(lVar25 + 0x34) = puVar4[2];
      *(undefined8 *)(lVar25 + 0x3c) = uVar6;
      *(undefined4 *)(lVar25 + 0x44) = *(undefined4 *)(puVar4 + 4);
      uVar6 = puVar5[1];
      lVar25 = *param_1;
      *(undefined8 *)(lVar25 + 0x48) = *puVar5;
      *(undefined8 *)(lVar25 + 0x50) = uVar6;
      uVar6 = puVar5[3];
      *(undefined8 *)(lVar25 + 0x58) = puVar5[2];
      *(undefined8 *)(lVar25 + 0x60) = uVar6;
      *(undefined4 *)(lVar25 + 0x68) = *(undefined4 *)(puVar5 + 4);
      lVar25 = *param_1;
      puVar4 = *(undefined8 **)(lVar16 + (longlong)iVar19 * 8);
      uVar6 = puVar4[1];
      *(undefined8 *)(lVar25 + 0x6c) = *puVar4;
      *(undefined8 *)(lVar25 + 0x74) = uVar6;
      uVar6 = puVar4[3];
      *(undefined8 *)(lVar25 + 0x7c) = puVar4[2];
      *(undefined8 *)(lVar25 + 0x84) = uVar6;
      *(undefined4 *)(lVar25 + 0x8c) = *(undefined4 *)(puVar4 + 4);
      uVar24 = (ulonglong)(0 < lVar32);
      bVar7 = lVar31 == lVar28 || lVar32 < 0;
      puVar20 = (undefined4 *)param_1[2];
      *(undefined8 *)(puVar20 + 9) = 2;
      *puVar20 = 0xffffffff;
      uVar56 = (uint)(0 < lVar32);
      puVar20[7] = uVar56;
      uVar39 = (uint)bVar7;
      puVar20[8] = uVar39;
      lVar25 = param_1[2];
      *(undefined4 *)(lVar25 + 0x54) = 0;
      *(undefined4 *)(lVar25 + 0x2c) = 0xffffffff;
      *(uint *)(lVar25 + 0x48) = uVar56;
      *(undefined4 *)(lVar25 + 0x4c) = 3;
      *(uint *)(lVar25 + 0x50) = uVar39;
      lVar25 = param_1[2];
      *(undefined8 *)(lVar25 + 0x7c) = 3;
      *(undefined4 *)(lVar25 + 0x58) = 0xffffffff;
      *(uint *)(lVar25 + 0x74) = uVar56;
      *(undefined4 *)(lVar25 + 0x78) = 2;
      lVar25 = param_1[2];
      *(undefined8 *)(lVar25 + 0xa8) = 2;
      *(undefined4 *)(lVar25 + 0x84) = 0xffffffff;
      *(uint *)(lVar25 + 0xa0) = uVar39;
      *(undefined4 *)(lVar25 + 0xa4) = 3;
      lVar31 = *param_1;
      lVar25 = (ulonglong)bVar7 * 0x24;
      lVar28 = uVar24 * 0x24;
      iVar44 = *(int *)(lVar31 + 8 + uVar24 * 0x24);
      iVar29 = *(int *)(lVar31 + 8 + lVar25);
      iVar52 = *(int *)(lVar31 + 0x50);
      iVar53 = (int)*(undefined8 *)(lVar31 + lVar28);
      uVar39 = (int)*(undefined8 *)(lVar31 + lVar25) - iVar53;
      iVar58 = (int)((ulonglong)*(undefined8 *)(lVar31 + lVar28) >> 0x20);
      iVar57 = (int)((ulonglong)*(undefined8 *)(lVar31 + lVar25) >> 0x20) - iVar58;
      iVar60 = iVar29 - iVar44;
      auVar54._12_4_ = iVar29 - iVar44;
      uVar56 = (int)*(undefined8 *)(lVar31 + 0x48) - iVar53;
      iVar58 = (int)((ulonglong)*(undefined8 *)(lVar31 + 0x48) >> 0x20) - iVar58;
      iVar29 = iVar52 - iVar44;
      auVar61._4_4_ = uVar56;
      auVar61._0_4_ = iVar29;
      auVar61._8_4_ = iVar58;
      auVar61._12_4_ = iVar52 - iVar44;
      auVar54._4_4_ = uVar39;
      auVar54._0_4_ = iVar60;
      auVar54._8_4_ = iVar57;
      iVar44 = iVar29 * iVar57 - iVar60 * iVar58;
      iVar29 = iVar60 * uVar56 - uVar39 * iVar29;
      iVar57 = (int)((auVar61._8_8_ & 0xffffffff) * (ulonglong)uVar39) -
               (int)((auVar54._8_8_ & 0xffffffff) * (ulonglong)uVar56);
      local_180[1] = CONCAT44(iVar29,iVar44);
      auVar41._0_4_ = -(uint)(iVar44 == 0);
      auVar41._4_4_ = -(uint)(iVar29 == 0);
      auVar41._8_4_ = -(uint)(iVar57 == 0);
      auVar41._12_4_ = 0xffffffff;
      uVar18 = movmskps(iVar52,auVar41);
      *(int *)(local_180 + 2) = iVar57;
      *local_180 = 0;
      if (((byte)uVar18 & 7) != 7) {
        *local_180 = -((longlong)(int)local_180[2] * (longlong)*(int *)(lVar31 + 8 + lVar28) +
                       (longlong)(int)local_180[1] * (longlong)*(int *)(lVar31 + lVar28) +
                      (longlong)*(int *)((longlong)local_180 + 0xc) *
                      (longlong)*(int *)(lVar31 + 4 + lVar28));
      }
      lVar31 = *param_1;
      iVar44 = *(int *)(lVar28 + 8 + lVar31);
      piVar3 = (int *)(lVar28 + lVar31);
      iVar29 = *(int *)(lVar31 + 8 + lVar25);
      iVar52 = (int)*(undefined8 *)piVar3;
      uVar39 = (int)*(undefined8 *)(lVar31 + 0x6c) - iVar52;
      iVar57 = (int)((ulonglong)*(undefined8 *)piVar3 >> 0x20);
      uVar56 = (int)((ulonglong)*(undefined8 *)(lVar31 + 0x6c) >> 0x20) - iVar57;
      iVar58 = *(int *)(lVar31 + 0x74) - iVar44;
      iVar52 = (int)*(undefined8 *)(lVar31 + lVar25) - iVar52;
      iVar57 = (int)((ulonglong)*(undefined8 *)(lVar31 + lVar25) >> 0x20) - iVar57;
      iVar60 = iVar29 - iVar44;
      auVar62._4_4_ = iVar52;
      auVar62._0_4_ = iVar60;
      auVar62._8_4_ = iVar57;
      auVar62._12_4_ = iVar29 - iVar44;
      auVar36._4_4_ = iVar60;
      auVar36._0_4_ = iVar57;
      auVar36._8_4_ = iVar52;
      auVar36._12_4_ = iVar29 - iVar44;
      iVar44 = iVar60 * uVar56 - iVar57 * iVar58;
      iVar52 = iVar58 * iVar52 - uVar39 * iVar60;
      iVar57 = (int)((auVar62._8_8_ & 0xffffffff) * (ulonglong)uVar39) -
               (int)((auVar36._8_8_ & 0xffffffff) * (ulonglong)uVar56);
      local_180[4] = CONCAT44(iVar52,iVar44);
      auVar46._0_4_ = -(uint)(iVar44 == 0);
      auVar46._4_4_ = -(uint)(iVar52 == 0);
      auVar46._8_4_ = -(uint)(iVar57 == 0);
      auVar46._12_4_ = 0xffffffff;
      uVar18 = movmskps(iVar29,auVar46);
      *(int *)(local_180 + 5) = iVar57;
      local_180[3] = 0;
      if (((byte)uVar18 & 7) != 7) {
        local_180[3] = -((longlong)(int)local_180[5] * (longlong)piVar3[2] +
                         (longlong)*(int *)((longlong)local_180 + 0x24) * (longlong)piVar3[1] +
                        (longlong)*piVar3 * (longlong)(int)local_180[4]);
      }
      lVar31 = *param_1;
      iVar44 = *(int *)(lVar28 + 8 + lVar31);
      piVar3 = (int *)(lVar28 + lVar31);
      iVar29 = *(int *)(lVar31 + 0x74);
      iVar52 = (int)*(undefined8 *)piVar3;
      uVar39 = (int)*(undefined8 *)(lVar31 + 0x48) - iVar52;
      iVar57 = (int)((ulonglong)*(undefined8 *)piVar3 >> 0x20);
      uVar56 = (int)((ulonglong)*(undefined8 *)(lVar31 + 0x48) >> 0x20) - iVar57;
      iVar58 = *(int *)(lVar31 + 0x50) - iVar44;
      iVar52 = (int)*(undefined8 *)(lVar31 + 0x6c) - iVar52;
      iVar57 = (int)((ulonglong)*(undefined8 *)(lVar31 + 0x6c) >> 0x20) - iVar57;
      iVar60 = iVar29 - iVar44;
      auVar63._4_4_ = iVar52;
      auVar63._0_4_ = iVar60;
      auVar63._8_4_ = iVar57;
      auVar63._12_4_ = iVar29 - iVar44;
      auVar37._4_4_ = iVar60;
      auVar37._0_4_ = iVar57;
      auVar37._8_4_ = iVar52;
      auVar37._12_4_ = iVar29 - iVar44;
      iVar44 = iVar60 * uVar56 - iVar57 * iVar58;
      iVar52 = iVar58 * iVar52 - uVar39 * iVar60;
      iVar57 = (int)((auVar63._8_8_ & 0xffffffff) * (ulonglong)uVar39) -
               (int)((auVar37._8_8_ & 0xffffffff) * (ulonglong)uVar56);
      local_180[7] = CONCAT44(iVar52,iVar44);
      auVar47._0_4_ = -(uint)(iVar44 == 0);
      auVar47._4_4_ = -(uint)(iVar52 == 0);
      auVar47._8_4_ = -(uint)(iVar57 == 0);
      auVar47._12_4_ = 0xffffffff;
      uVar18 = movmskps(iVar29,auVar47);
      *(int *)(local_180 + 8) = iVar57;
      local_180[6] = 0;
      if (((byte)uVar18 & 7) != 7) {
        local_180[6] = -((longlong)(int)local_180[8] * (longlong)piVar3[2] +
                         (longlong)*(int *)((longlong)local_180 + 0x3c) * (longlong)piVar3[1] +
                        (longlong)*piVar3 * (longlong)(int)local_180[7]);
      }
      lVar28 = *param_1;
      iVar44 = *(int *)(lVar28 + 8 + lVar25);
      piVar3 = (int *)(lVar28 + lVar25);
      iVar29 = *(int *)(lVar28 + 0x50);
      iVar60 = (int)*(undefined8 *)piVar3;
      iVar57 = (int)*(undefined8 *)(lVar28 + 0x6c) - iVar60;
      iVar53 = (int)((ulonglong)*(undefined8 *)piVar3 >> 0x20);
      iVar52 = (int)((ulonglong)*(undefined8 *)(lVar28 + 0x6c) >> 0x20) - iVar53;
      iVar58 = *(int *)(lVar28 + 0x74) - iVar44;
      auVar55._12_4_ = *(int *)(lVar28 + 0x74) - iVar44;
      auVar10._4_4_ = iVar58;
      auVar10._0_4_ = iVar52;
      auVar10._8_4_ = iVar57;
      auVar10._12_4_ = auVar55._12_4_;
      uVar39 = (int)*(undefined8 *)(lVar28 + 0x48) - iVar60;
      uVar56 = (int)((ulonglong)*(undefined8 *)(lVar28 + 0x48) >> 0x20) - iVar53;
      iVar44 = iVar29 - iVar44;
      auVar55._4_4_ = iVar57;
      auVar55._0_4_ = iVar58;
      auVar55._8_4_ = iVar52;
      iVar52 = iVar52 * iVar44 - iVar58 * uVar56;
      iVar44 = iVar58 * uVar39 - iVar57 * iVar44;
      iVar57 = (int)((auVar10._8_8_ & 0xffffffff) * (ulonglong)uVar56) -
               (int)((auVar55._8_8_ & 0xffffffff) * (ulonglong)uVar39);
      local_180[10] = CONCAT44(iVar44,iVar52);
      auVar48._0_4_ = -(uint)(iVar52 == 0);
      auVar48._4_4_ = -(uint)(iVar44 == 0);
      auVar48._8_4_ = -(uint)(iVar57 == 0);
      auVar48._12_4_ = 0xffffffff;
      uVar18 = movmskps(iVar29,auVar48);
      *(int *)(local_180 + 0xb) = iVar57;
      local_180[9] = 0;
      if (((byte)uVar18 & 7) != 7) {
        local_180[9] = -((longlong)(int)local_180[0xb] * (longlong)piVar3[2] +
                         (longlong)*(int *)((longlong)local_180 + 0x54) * (longlong)piVar3[1] +
                        (longlong)(int)local_180[10] * (longlong)*piVar3);
      }
      *(undefined8 *)(param_1[2] + 4) = 0x200000001;
      *(undefined8 *)(param_1[2] + 0x40) = 0;
      *(undefined8 *)(param_1[2] + 0xc) = 0x200000003;
      *(undefined8 *)(param_1[2] + 0x98) = 0x100000000;
      *(undefined8 *)(param_1[2] + 0x14) = 2;
      *(undefined8 *)(param_1[2] + 0x5c) = 0x200000000;
      *(undefined1 **)(param_1[2] + 0x30) = &DAT_200000002;
      *(undefined8 *)(param_1[2] + 0x6c) = 1;
      local_res8 = &DAT_100000001;
      *(undefined1 **)(param_1[2] + 100) = &DAT_100000003;
      local_res20 = 3;
      *(undefined1 **)(param_1[2] + 0x90) = &DAT_100000002;
      *(undefined1 **)(param_1[2] + 0x88) = &DAT_100000001;
      *(undefined8 *)(param_1[2] + 0x38) = 3;
      for (; 0 < lVar33; lVar33 = lVar33 + -1) {
        uVar6 = *(undefined8 *)(lVar16 + lVar33 * 8);
        *(undefined8 *)(lVar16 + lVar33 * 8) = *(undefined8 *)(lVar16 + -8 + lVar33 * 8);
        *(undefined8 *)(lVar16 + -8 + lVar33 * 8) = uVar6;
      }
      for (; 1 < lVar26; lVar26 = lVar26 + -1) {
        uVar6 = *(undefined8 *)(lVar16 + lVar26 * 8);
        *(undefined8 *)(lVar16 + lVar26 * 8) = *(undefined8 *)(lVar16 + -8 + lVar26 * 8);
        *(undefined8 *)(lVar16 + -8 + lVar26 * 8) = uVar6;
      }
      for (; 2 < lVar17; lVar17 = lVar17 + -1) {
        uVar6 = *(undefined8 *)(lVar16 + lVar17 * 8);
        *(undefined8 *)(lVar16 + lVar17 * 8) = *(undefined8 *)(lVar16 + -8 + lVar17 * 8);
        *(undefined8 *)(lVar16 + -8 + lVar17 * 8) = uVar6;
      }
      for (; 3 < lVar21; lVar21 = lVar21 + -1) {
        uVar6 = *(undefined8 *)(lVar16 + lVar21 * 8);
        *(undefined8 *)(lVar16 + lVar21 * 8) = *(undefined8 *)(lVar16 + -8 + lVar21 * 8);
        *(undefined8 *)(lVar16 + -8 + lVar21 * 8) = uVar6;
      }
      uVar24 = 4;
      iVar44 = 4;
      uVar39 = 4;
      local_150 = (ulonglong)uVar50 << 0x20;
      lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(char *)(lVar16 + 0x114) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar33 = *(longlong *)(lVar16 + 0xf0);
      if (lVar33 == 0) {
        if (*(char *)(lVar16 + 0x114) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar33 = FUN_144b3f4a0();
        *(longlong *)(lVar16 + 0xf0) = lVar33;
      }
      lVar16 = *(longlong *)(*(longlong *)(lVar33 + 0x3d0) + 0x10);
      local_148 = 0;
      if (*(longlong *)(lVar16 + 8) == 0) {
        local_148 = lVar16;
      }
      iVar29 = (int)local_120;
      local_res20 = (longlong)iVar29 * 4;
      local_138 = local_res20;
      if (local_148 == 0) {
        local_158 = (*DAT_14c787670)(CONCAT71((int7)(local_res20 >> 8),1),&local_res20,0x40);
      }
      else {
        local_res8 = (undefined1 *)(local_res20 + 0x3f & 0xffffffffffffffc0);
        if (local_res8 <= *(undefined1 **)(local_148 + 0x28)) {
          local_158 = *(longlong *)(local_148 + 0x38);
          if (local_res8 + local_158 <= *(undefined1 **)(local_148 + 0x40)) {
            *(undefined1 **)(local_148 + 0x38) = local_res8 + local_158;
            goto LAB_14552dce8;
          }
        }
        local_158 = FUN_144b454a0(local_148,&local_res8);
      }
LAB_14552dce8:
      local_150 = CONCAT44(iVar29,(int)local_150) | 0x8000000000000000;
      lVar16 = (longlong)((int)(local_res18[1] - *local_res18 >> 3) + -1);
      local_140 = local_158;
      if (3 < lVar16) {
        local_120 = (undefined8 *)(*local_res18 + lVar16 * 8);
        local_128 = 4;
        local_118 = lVar16 + -3;
        lVar33 = 4;
        lVar16 = 4;
        do {
          piVar3 = (int *)*local_120;
          iVar44 = uVar39 - 1;
          lVar25 = lVar33 + -1;
          if (-1 < iVar44) {
            plVar30 = local_180 + lVar25 + lVar33 * 2;
            piVar27 = (int *)(param_1[2] + 0x28 + lVar25 * 0x2c);
            do {
              if ((*piVar27 != 0x7fffffff) &&
                 (0 < (longlong)*(int *)((longlong)plVar30 + -4) * (longlong)piVar3[1] +
                      (longlong)(int)plVar30[-1] * (longlong)*piVar3 +
                      (longlong)piVar3[2] * (longlong)(int)*plVar30 + plVar30[-2])) {
                if (iVar44 != -1) {
                  uVar6 = *(undefined8 *)(piVar3 + 2);
                  iVar29 = (int)uVar24;
                  local_res8 = (undefined1 *)CONCAT44(local_res8._4_4_,iVar29);
                  local_c0 = (ulonglong)(iVar29 + 1);
                  local_b8 = lVar16 + 1;
                  lVar25 = *param_1;
                  puVar4 = (undefined8 *)(lVar25 + lVar16 * 0x24);
                  *puVar4 = *(undefined8 *)piVar3;
                  puVar4[1] = uVar6;
                  local_130[1] = 0;
                  uVar6 = *(undefined8 *)(piVar3 + 6);
                  lVar25 = lVar25 + lVar16 * 0x24;
                  *(undefined8 *)(lVar25 + 0x10) = *(undefined8 *)(piVar3 + 4);
                  *(undefined8 *)(lVar25 + 0x18) = uVar6;
                  *(int *)(lVar25 + 0x20) = piVar3[8];
                  local_res20 = CONCAT44(local_res20._4_4_,0xffffffff);
                  local_130[0] = iVar44;
                  local_f0 = lVar16;
                  FUN_14552e700(param_1,lVar25,local_130,&local_res20,iVar29 + -3,&local_180,
                                &local_158);
                  uVar24 = (ulonglong)(int)local_res20;
                  iVar44 = *(int *)(uVar24 * 0x2c + param_1[2] + 4 + (longlong)local_res20._4_4_ * 8
                                   );
                  uVar13 = local_res20;
                  while (iVar44 != -1) {
                    local_110 = (int)uVar24;
                    uVar50 = 1 << ((byte)(uVar13 >> 0x20) & 0x1f);
                    uStack_10c = uVar50 & 3;
                    uVar13 = CONCAT44(uVar50,local_110) & 0x3ffffffff;
                    uVar24 = uVar24 & 0xffffffff;
                    iVar44 = *(int *)((longlong)local_110 * 0x2c + param_1[2] + 4 +
                                     (longlong)(int)(uVar13 >> 0x20) * 8);
                  }
                  local_res18 = (longlong *)CONCAT44(local_res18._4_4_,0xffffffff);
                  uVar50 = 0xffffffff;
                  local_d0 = 0xffffffff;
                  local_res20 = uVar13;
                  while( true ) {
                    local_d8 = uVar50;
                    lVar16 = param_1[2];
                    uVar50 = 1 << ((byte)(local_res20 >> 0x20) & 0x1f);
                    uVar56 = uVar50 & 3;
                    uVar14 = CONCAT44(uVar50,(int)uVar24);
                    if (*(int *)((longlong)(int)uVar24 * 0x2c + lVar16 + 4 + (ulonglong)uVar56 * 8)
                        != -1) {
                      do {
                        uVar24 = *(ulonglong *)
                                  ((longlong)(int)uVar24 * 0x2c + lVar16 + 4 +
                                  (longlong)(int)uVar56 * 8);
                        uVar50 = 1 << ((byte)(uVar24 >> 0x20) & 0x1f);
                        uVar56 = uVar50 & 3;
                      } while (*(int *)((longlong)(int)uVar24 * 0x2c + lVar16 + 4 +
                                       (ulonglong)uVar56 * 8) != -1);
                      uVar14 = CONCAT44(uVar50,(int)uVar24);
                    }
                    local_188 = uVar14 & 0x3ffffffff;
                    local_res20 = local_188;
                    uVar15 = local_res20;
                    iVar44 = (int)uVar24;
                    iVar29 = (int)(local_188 >> 0x20);
                    sVar12 = (sbyte)(local_188 >> 0x20);
                    local_res20._0_4_ = (int)local_188;
                    local_res20 = uVar15;
                    if (((int)uVar13 == iVar44) &&
                       (local_b0._4_4_ = (int)(uVar13 >> 0x20), local_b0._4_4_ == iVar29)) break;
                    if ((int)local_150 == 0) {
                      local_128 = lVar33 + 1;
                      uVar50 = uVar39 + 1;
                      local_108 = uVar39;
                    }
                    else {
                      local_108 = *(uint *)(local_158 + (longlong)((int)local_150 + -1) * 4);
                      local_150 = CONCAT44(local_150._4_4_,(int)local_150 + -1);
                      uVar50 = uVar39;
                    }
                    uVar39 = uVar50;
                    lVar16 = param_1[2];
                    lVar25 = (longlong)(int)local_108 * 0x2c;
                    iVar52 = *(int *)(lVar16 + 0x1c +
                                     ((ulonglong)(1 << sVar12 & 3) + (longlong)iVar44 * 0xb) * 4);
                    iVar44 = *(int *)(lVar16 + 0x1c +
                                     ((longlong)iVar29 + (longlong)iVar44 * 0xb) * 4);
                    *(int *)(lVar25 + 0x1c + lVar16) = (int)local_res8;
                    *(int *)(lVar25 + 0x20 + lVar16) = iVar52;
                    *(undefined4 *)(lVar25 + 0x28 + lVar16) = 0;
                    *(undefined4 *)(lVar25 + lVar16) = 0xffffffff;
                    *(int *)(lVar25 + 0x24 + lVar16) = iVar44;
                    lVar16 = *param_1;
                    uVar6 = *(undefined8 *)(lVar16 + local_f0 * 0x24);
                    piVar3 = (int *)(lVar16 + local_f0 * 0x24);
                    plVar30 = local_180 + (longlong)(int)local_108 * 3;
                    iVar57 = piVar3[2];
                    uVar2 = *(undefined8 *)(lVar16 + (longlong)iVar52 * 0x24);
                    iVar52 = *(int *)(lVar16 + (longlong)iVar52 * 0x24 + 8);
                    iVar58 = *(int *)(lVar16 + 8 + (longlong)iVar44 * 0x24);
                    iVar53 = (int)uVar6;
                    iVar60 = (int)uVar2 - iVar53;
                    iVar65 = (int)((ulonglong)uVar6 >> 0x20);
                    uVar50 = (int)((ulonglong)uVar2 >> 0x20) - iVar65;
                    iVar19 = iVar52 - iVar57;
                    iVar52 = iVar52 - iVar57;
                    uVar6 = *(undefined8 *)(lVar16 + (longlong)iVar44 * 0x24);
                    iVar53 = (int)uVar6 - iVar53;
                    uVar56 = (int)((ulonglong)uVar6 >> 0x20) - iVar65;
                    iVar44 = iVar58 - iVar57;
                    iVar57 = iVar58 - iVar57;
                    auVar8._4_4_ = iVar19;
                    auVar8._0_4_ = uVar50;
                    auVar8._8_4_ = iVar60;
                    auVar8._12_4_ = iVar52;
                    auVar64._4_4_ = iVar44;
                    auVar64._0_4_ = uVar56;
                    auVar64._8_4_ = iVar53;
                    auVar64._12_4_ = iVar57;
                    iVar65 = uVar50 * iVar44 - uVar56 * iVar19;
                    iVar44 = iVar19 * iVar53 - iVar44 * iVar60;
                    iVar60 = (int)((auVar8._8_8_ & 0xffffffff) * (ulonglong)uVar56) -
                             (int)((auVar64._8_8_ & 0xffffffff) * (ulonglong)uVar50);
                    plVar30[1] = CONCAT44(iVar44,iVar65);
                    auVar42._0_4_ = -(uint)(iVar65 == 0);
                    auVar42._4_4_ = -(uint)(iVar44 == 0);
                    auVar42._8_4_ = -(uint)(iVar60 == 0);
                    auVar42._12_4_ = -(uint)(iVar52 * iVar57 == iVar57 * iVar52);
                    *(int *)(plVar30 + 2) = iVar60;
                    *plVar30 = 0;
                    uVar18 = movmskps(iVar58,auVar42);
                    if (((byte)uVar18 & 7) != 7) {
                      *plVar30 = -((longlong)(int)plVar30[2] * (longlong)piVar3[2] +
                                   (longlong)*(int *)((longlong)plVar30 + 0xc) * (longlong)piVar3[1]
                                  + (longlong)(int)plVar30[1] * (longlong)*piVar3);
                    }
                    uStack_104 = 1;
                    *(ulonglong *)
                     ((longlong)(int)local_res20 * 0x2c + (longlong)iVar29 * 8 + 4 + param_1[2]) =
                         CONCAT44(1,local_108);
                    if (local_108 != 0xffffffff) {
                      *(ulonglong *)(lVar25 + 0xc + param_1[2]) = local_188;
                    }
                    lVar33 = local_128;
                    uVar50 = local_108;
                    if (local_d8 == 0xffffffff) {
                      uVar24 = uVar14 & 0xffffffff;
                      local_res18 = (longlong *)CONCAT44(local_res18._4_4_,local_108);
                      local_d0 = local_108;
                    }
                    else {
                      uStack_fc = 2;
                      *(ulonglong *)((longlong)(int)local_d8 * 0x2c + 4 + param_1[2]) =
                           CONCAT44(2,local_108);
                      uStack_f4 = 0;
                      if (local_108 != 0xffffffff) {
                        *(ulonglong *)(lVar25 + 0x14 + param_1[2]) = (ulonglong)local_d8;
                      }
                      uVar24 = uVar14 & 0xffffffff;
                      local_d0 = (uint)local_res18;
                      local_res20 = local_188;
                      local_100 = local_108;
                      local_f8 = local_d8;
                    }
                  }
                  if ((int)local_150 == 0) {
                    lVar33 = lVar33 + 1;
                    uVar50 = uVar39 + 1;
                    local_e8 = uVar39;
                    local_128 = lVar33;
                  }
                  else {
                    local_e8 = *(uint *)(local_158 + (longlong)((int)local_150 + -1) * 4);
                    local_150 = CONCAT44(local_150._4_4_,(int)local_150 + -1);
                    uVar50 = uVar39;
                  }
                  lVar16 = param_1[2];
                  iVar52 = *(int *)(lVar16 + 0x1c +
                                   ((ulonglong)(1 << sVar12 & 3) + (longlong)iVar44 * 0xb) * 4);
                  lVar25 = (longlong)(int)local_e8 * 0x2c;
                  iVar44 = *(int *)(lVar16 + 0x1c + ((longlong)iVar29 + (longlong)iVar44 * 0xb) * 4)
                  ;
                  *(int *)(lVar25 + 0x24 + lVar16) = iVar44;
                  *(int *)(lVar25 + 0x1c + lVar16) = (int)local_res8;
                  *(int *)(lVar25 + 0x20 + lVar16) = iVar52;
                  *(undefined4 *)(lVar25 + 0x28 + lVar16) = 0;
                  *(undefined4 *)(lVar25 + lVar16) = 0xffffffff;
                  lVar16 = *param_1;
                  uVar6 = *(undefined8 *)(lVar16 + local_f0 * 0x24);
                  puVar4 = (undefined8 *)(lVar16 + (longlong)iVar44 * 0x24);
                  uVar2 = *(undefined8 *)(lVar16 + (longlong)iVar52 * 0x24);
                  piVar3 = (int *)(lVar16 + local_f0 * 0x24);
                  plVar30 = local_180 + (longlong)(int)local_e8 * 3;
                  iVar44 = piVar3[2];
                  iVar52 = *(int *)(lVar16 + (longlong)iVar52 * 0x24 + 8);
                  iVar57 = *(int *)(puVar4 + 1);
                  iVar60 = (int)uVar6;
                  iVar58 = (int)uVar2 - iVar60;
                  iVar19 = (int)((ulonglong)uVar6 >> 0x20);
                  uVar39 = (int)((ulonglong)uVar2 >> 0x20) - iVar19;
                  iVar53 = iVar52 - iVar44;
                  uVar6 = *puVar4;
                  auVar11._4_4_ = iVar53;
                  auVar11._0_4_ = uVar39;
                  auVar11._8_4_ = iVar58;
                  auVar11._12_4_ = iVar52 - iVar44;
                  iVar60 = (int)uVar6 - iVar60;
                  uVar56 = (int)((ulonglong)uVar6 >> 0x20) - iVar19;
                  iVar52 = iVar57 - iVar44;
                  auVar38._4_4_ = iVar52;
                  auVar38._0_4_ = uVar56;
                  auVar38._8_4_ = iVar60;
                  auVar38._12_4_ = iVar57 - iVar44;
                  iVar44 = uVar39 * iVar52 - uVar56 * iVar53;
                  iVar52 = iVar53 * iVar60 - iVar58 * iVar52;
                  iVar58 = (int)((auVar11._8_8_ & 0xffffffff) * (ulonglong)uVar56) -
                           (int)((auVar38._8_8_ & 0xffffffff) * (ulonglong)uVar39);
                  plVar30[1] = CONCAT44(iVar52,iVar44);
                  auVar49._0_4_ = -(uint)(iVar44 == 0);
                  auVar49._4_4_ = -(uint)(iVar52 == 0);
                  auVar49._8_4_ = -(uint)(iVar58 == 0);
                  auVar49._12_4_ = 0xffffffff;
                  *(int *)(plVar30 + 2) = iVar58;
                  *plVar30 = 0;
                  uVar18 = movmskps(iVar57,auVar49);
                  if (((byte)uVar18 & 7) != 7) {
                    *plVar30 = -((longlong)(int)plVar30[2] * (longlong)piVar3[2] +
                                 (longlong)*(int *)((longlong)plVar30 + 0xc) * (longlong)piVar3[1] +
                                (longlong)*piVar3 * (longlong)(int)plVar30[1]);
                  }
                  uStack_e4 = 1;
                  *(ulonglong *)
                   ((longlong)(int)local_res20 * 0x2c + (longlong)iVar29 * 8 + 4 + param_1[2]) =
                       CONCAT44(1,local_e8);
                  if (local_e8 != 0xffffffff) {
                    *(ulonglong *)(lVar25 + 0xc + param_1[2]) = local_188;
                  }
                  uStack_dc = 2;
                  *(ulonglong *)((longlong)(int)local_d8 * 0x2c + param_1[2] + 4) =
                       CONCAT44(2,local_e8);
                  uStack_d4 = 0;
                  if (local_e8 != 0xffffffff) {
                    *(ulonglong *)(lVar25 + 0x14 + param_1[2]) = (ulonglong)local_d8;
                  }
                  uStack_cc = 2;
                  *(ulonglong *)(lVar25 + 4 + param_1[2]) = CONCAT44(2,local_d0);
                  uStack_c4 = 0;
                  uVar24 = local_c0;
                  lVar16 = local_b8;
                  uVar39 = uVar50;
                  local_e0 = local_e8;
                  local_c8 = local_e8;
                  local_b0 = uVar13;
                  if (local_d0 != 0xffffffff) {
                    *(ulonglong *)((longlong)(int)local_d0 * 0x2c + param_1[2] + 0x14) =
                         (ulonglong)local_e8;
                  }
                }
                break;
              }
              iVar44 = iVar44 + -1;
              piVar27 = piVar27 + -0xb;
              plVar30 = plVar30 + -3;
              lVar25 = lVar25 + -1;
            } while (-1 < lVar25);
          }
          iVar44 = (int)uVar24;
          local_120 = local_120 + -1;
          local_118 = local_118 + -1;
        } while (local_118 != 0);
      }
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar44) {
        FUN_14532af70(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar44);
      }
      if (((int)param_1[1] < iVar44) || (iVar44 < (int)param_1[1])) {
        *(int *)(param_1 + 1) = iVar44;
      }
      if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < (int)uVar39) {
        FUN_1455305a0(param_1 + 2,&PTR_vftable_14c6e47a0,(longlong)(int)uVar39);
      }
      iVar44 = (int)param_1[3];
      if (iVar44 < (int)uVar39) {
        puVar23 = (undefined4 *)((longlong)iVar44 * 0x2c + param_1[2]);
        *(uint *)(param_1 + 3) = uVar39;
        puVar20 = (undefined4 *)((longlong)(int)uVar39 * 0x2c + param_1[2]);
        if (puVar23 != puVar20) {
          puVar23 = puVar23 + 5;
          do {
            if (puVar23 != (undefined4 *)&DAT_00000014) {
              puVar23[-4] = 0xffffffff;
              puVar23[-2] = 0xffffffff;
              *puVar23 = 0xffffffff;
            }
            puVar1 = puVar23 + 6;
            puVar23 = puVar23 + 0xb;
          } while (puVar1 != puVar20);
        }
      }
      else if ((int)uVar39 < iVar44) {
        *(uint *)(param_1 + 3) = uVar39;
      }
      FUN_14552ea30(param_1,(int)local_150 != 0);
      puVar20 = local_res10;
      uVar18 = (int)local_150;
      if (local_140 == local_158) {
        uVar18 = 0;
      }
      *local_res10 = 0;
      local_150._0_4_ = uVar18;
      if (local_148 == 0) {
        (*DAT_14c787678)(1);
      }
      else {
        uVar24 = local_138 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulonglong *)(local_148 + 0x28) < uVar24) ||
           (uVar24 + local_140 != *(longlong *)(local_148 + 0x38))) {
          FUN_144be8550();
        }
        else {
          *(longlong *)(local_148 + 0x38) = local_140;
          if (*(longlong *)(local_148 + 0x48) == local_140) {
            FUN_144be8430();
          }
        }
      }
      uVar39 = local_150._4_4_;
      local_150 = (ulonglong)local_150._4_4_ << 0x20;
      if ((-1 < (int)uVar39) && (local_158 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_158,(ulonglong)(uVar39 & 0x7fffffff) << 2);
      }
      if (local_168 == local_180) {
        local_178 = 0;
      }
      local_158 = 0;
      local_150 = CONCAT44(0x80000000,(int)local_150);
      if (local_170 == 0) {
        (*DAT_14c787678)(1);
      }
      else {
        uVar24 = local_160 + 0x3f & 0xffffffffffffffc0;
        if ((*(ulonglong *)(local_170 + 0x28) < uVar24) ||
           (uVar24 + (longlong)local_168 != *(longlong *)(local_170 + 0x38))) {
          FUN_144be8550();
        }
        else {
          *(longlong **)(local_170 + 0x38) = local_168;
          if (*(longlong **)(local_170 + 0x48) == local_168) {
            FUN_144be8430();
          }
        }
      }
      goto LAB_14552e678;
    }
  }
  goto LAB_14552d369;
}



// FUNCTION 14552e700 FUN_14552e700 body=809 status=ok
// SIG undefined FUN_14552e700(void)

void FUN_14552e700(longlong param_1,int *param_2,int *param_3,undefined8 *param_4,int param_5,
                  longlong *param_6,longlong *param_7)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 local_res18;
  undefined8 *local_res20;
  
  if ((*param_3 != -1) &&
     (lVar8 = (longlong)*param_3 * 0x2c + *(longlong *)(param_1 + 0x10),
     *(int *)(lVar8 + 0x28) != param_5)) {
    *(int *)(lVar8 + 0x28) = param_5;
    lVar5 = (longlong)*param_3;
    plVar6 = (longlong *)(*param_6 + lVar5 * 0x18);
    if ((longlong)*(int *)(*param_6 + 0x10 + lVar5 * 0x18) * (longlong)param_2[2] +
        (longlong)*(int *)((longlong)plVar6 + 0xc) * (longlong)param_2[1] +
        (longlong)(int)plVar6[1] * (longlong)*param_2 + *plVar6 < 0) {
      *param_4 = *(undefined8 *)param_3;
    }
    else {
      local_res18 = *(undefined8 *)
                     (lVar5 * 0x2c + (longlong)param_3[1] * 8 + 4 + *(longlong *)(param_1 + 0x10));
      local_res20 = param_4;
      FUN_14552e700(param_1,param_2,&local_res18,param_4,param_5,param_6,param_7);
      local_res18 = *(undefined8 *)
                     ((longlong)*param_3 * 0x2c +
                      (ulonglong)(1 << ((byte)param_3[1] & 0x1f) & 3) * 8 + 4 +
                     *(longlong *)(param_1 + 0x10));
      FUN_14552e700(param_1,param_2,&local_res18,local_res20,param_5,param_6,param_7);
      local_res18 = *(undefined8 *)
                     ((longlong)*param_3 * 0x2c +
                      (longlong)*(int *)(&DAT_149da5e88 + (longlong)param_3[1] * 4) * 8 + 4 +
                     *(longlong *)(param_1 + 0x10));
      FUN_14552e700(param_1,param_2,&local_res18,local_res20,param_5,param_6,param_7);
      lVar5 = (longlong)*param_3 * 0x2c + *(longlong *)(param_1 + 0x10);
      if (*(int *)(lVar5 + 4 + (longlong)param_3[1] * 8) != -1) {
        uVar2 = *(undefined8 *)(lVar5 + 4 + (longlong)param_3[1] * 8);
        *(undefined4 *)
         ((longlong)(int)uVar2 * 0x2c + *(longlong *)(param_1 + 0x10) + 4 +
         (longlong)(int)((ulonglong)uVar2 >> 0x20) * 8) = 0xffffffff;
      }
      *(undefined4 *)
       ((longlong)*param_3 * 0x2c + (longlong)param_3[1] * 8 + 4 + *(longlong *)(param_1 + 0x10)) =
           0xffffffff;
      lVar5 = *(longlong *)(param_1 + 0x10);
      uVar3 = 1 << ((byte)param_3[1] & 0x1f) & 3;
      lVar7 = (longlong)*param_3 * 0x2c;
      if (*(int *)(lVar5 + (ulonglong)uVar3 * 8 + 4 + lVar7) != -1) {
        uVar2 = *(undefined8 *)(lVar5 + lVar7 + 4 + (ulonglong)uVar3 * 8);
        *(undefined4 *)
         ((longlong)(int)uVar2 * 0x2c + lVar5 + 4 + (longlong)(int)((ulonglong)uVar2 >> 0x20) * 8) =
             0xffffffff;
      }
      plVar6 = (longlong *)(param_1 + 0x10);
      *(undefined4 *)(*plVar6 + lVar7 + 4 + (ulonglong)uVar3 * 8) = 0xffffffff;
      lVar7 = *plVar6;
      lVar5 = (longlong)*param_3 * 0x2c +
              (longlong)*(int *)(&DAT_149da5e88 + (longlong)param_3[1] * 4) * 8;
      if (*(int *)(lVar7 + 4 + lVar5) != -1) {
        uVar2 = *(undefined8 *)(lVar7 + 4 + lVar5);
        *(undefined4 *)
         ((longlong)(int)uVar2 * 0x2c + lVar7 + 4 + (longlong)(int)((ulonglong)uVar2 >> 0x20) * 8) =
             0xffffffff;
      }
      *(undefined4 *)(*plVar6 + 4 + lVar5) = 0xffffffff;
      *(undefined4 *)(lVar8 + 0x28) = 0x7fffffff;
      iVar4 = (int)param_7[1] + 1;
      if ((int)(*(uint *)((longlong)param_7 + 0xc) & 0x7fffffff) < iVar4) {
        FUN_1401f86b2(param_7,&PTR_vftable_14c6e47a0,(longlong)iVar4);
      }
      piVar1 = (int *)(*param_7 + (longlong)(int)param_7[1] * 4);
      if (piVar1 != (int *)0x0) {
        *piVar1 = *param_3;
      }
      *(int *)(param_7 + 1) = iVar4;
    }
  }
  return;
}



// FUNCTION 14552ea30 FUN_14552ea30 body=3655 status=ok
// SIG undefined FUN_14552ea30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14552ea30(longlong *param_1,char param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 *puVar15;
  char cVar16;
  longlong lVar17;
  undefined4 *puVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  undefined4 *puVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  longlong lVar30;
  longlong lVar31;
  ulonglong uVar32;
  bool bVar33;
  float fVar34;
  undefined1 auVar35 [12];
  undefined1 auVar36 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar40 [12];
  undefined1 auVar41 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  uint local_res18;
  undefined8 local_res20;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  ulonglong local_190;
  uint local_188;
  uint local_184;
  ulonglong local_180;
  undefined8 local_178;
  longlong local_170;
  ulonglong local_168;
  longlong local_160;
  int local_158;
  uint local_154;
  longlong local_150;
  longlong local_148;
  ulonglong local_140;
  longlong local_138;
  int local_130;
  uint local_12c;
  ulonglong local_128;
  longlong local_120;
  ulonglong local_118;
  longlong local_110;
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  uint local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  uint local_ac;
  ulonglong local_a8;
  longlong local_a0;
  longlong local_98;
  
  local_res18 = *(uint *)(param_1 + 1);
  uVar32 = (ulonglong)(int)local_res18;
  uVar29 = *(uint *)(param_1 + 3);
  lVar31 = (longlong)(int)uVar29;
  local_res20 = CONCAT44(local_res20._4_4_,(int)param_1[5]);
  local_158 = 0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar16 = *(char *)(lVar4 + 0x114);
  if (cVar16 == '\0') {
    __dyn_tls_on_demand_init();
    cVar16 = *(char *)(lVar4 + 0x114);
  }
  lVar13 = *(longlong *)(lVar4 + 0xf0);
  if (lVar13 == 0) {
    if (cVar16 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar13;
  }
  lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x3d0) + 0x10);
  local_150 = 0;
  if (*(longlong *)(lVar13 + 8) == 0) {
    local_150 = lVar13;
  }
  local_190 = uVar32;
  local_140 = uVar32;
  local_110 = local_150;
  if (local_150 == 0) {
    lVar13 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar13 >> 8),1),&local_190);
  }
  else {
    local_168 = uVar32 + 0x3f & 0xffffffffffffffc0;
    if (local_168 <= *(ulonglong *)(local_150 + 0x28)) {
      lVar13 = *(longlong *)(local_150 + 0x38);
      if (lVar13 + local_168 <= *(ulonglong *)(local_150 + 0x40)) {
        *(ulonglong *)(local_150 + 0x38) = lVar13 + local_168;
        goto LAB_14552eb59;
      }
    }
    lVar13 = FUN_144b454a0(local_150,&local_168);
  }
LAB_14552eb59:
  cVar16 = *(char *)(lVar4 + 0x114);
  local_184 = local_res18 | 0x80000000;
  local_b0 = 0;
  local_160 = lVar13;
  local_154 = local_184;
  local_148 = lVar13;
  if (cVar16 == '\0') {
    __dyn_tls_on_demand_init();
    cVar16 = *(char *)(lVar4 + 0x114);
  }
  lVar14 = *(longlong *)(lVar4 + 0xf0);
  if (lVar14 == 0) {
    if (cVar16 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar14;
  }
  uVar32 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  local_1a8 = lVar31 * 4;
  local_168 = 0;
  if (*(longlong *)(uVar32 + 8) == 0) {
    local_168 = uVar32;
  }
  local_170 = lVar31;
  local_a8 = local_168;
  local_98 = local_1a8;
  if (local_168 == 0) {
    lVar31 = (*DAT_14c787670)(CONCAT71((int7)(uVar32 >> 8),1),&local_1a8,0x40);
  }
  else {
    local_190 = local_1a8 + 0x3fU & 0xffffffffffffffc0;
    if (local_190 <= *(ulonglong *)(local_168 + 0x28)) {
      lVar31 = *(longlong *)(local_168 + 0x38);
      local_198 = lVar31;
      if (local_190 + lVar31 <= *(ulonglong *)(local_168 + 0x40)) {
        *(ulonglong *)(local_168 + 0x38) = local_190 + lVar31;
        goto LAB_14552ec35;
      }
    }
    lVar31 = FUN_144b454a0(local_168,&local_190);
  }
LAB_14552ec35:
  local_188 = uVar29 | 0x80000000;
  iVar23 = 0;
  local_198 = lVar31;
  local_b8 = lVar31;
  local_ac = local_188;
  local_a0 = lVar31;
  if ((int)(local_res18 & 0x7fffffff) < (int)local_res18) {
    FUN_14180788c(&local_160,&PTR_vftable_14c6e47a0,local_140);
    local_184 = local_154;
    local_110 = local_150;
    lVar13 = local_160;
    iVar23 = local_158;
  }
  if (iVar23 < (int)local_res18) {
    if (0 < (int)(local_res18 - iVar23)) {
      uVar32 = (ulonglong)(local_res18 - iVar23);
      puVar15 = (undefined1 *)(iVar23 + lVar13);
      do {
        if (puVar15 != (undefined1 *)0x0) {
          *puVar15 = 0;
        }
        uVar32 = uVar32 - 1;
        puVar15 = puVar15 + 1;
      } while (uVar32 != 0);
    }
  }
  cVar16 = *(char *)(lVar4 + 0x114);
  local_130 = 0;
  if (cVar16 == '\0') {
    __dyn_tls_on_demand_init();
    cVar16 = *(char *)(lVar4 + 0x114);
  }
  lVar14 = *(longlong *)(lVar4 + 0xf0);
  if (lVar14 == 0) {
    if (cVar16 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar14 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar14;
  }
  uVar21 = (uint)local_res20;
  uVar22 = (ulonglong)(int)(uint)local_res20;
  uVar32 = *(ulonglong *)(*(longlong *)(lVar14 + 0x3d0) + 0x10);
  local_190 = 0;
  if (*(longlong *)(uVar32 + 8) == 0) {
    local_190 = uVar32;
  }
  local_1a0 = uVar22;
  local_180 = uVar22;
  local_128 = local_190;
  local_118 = uVar22;
  if (local_190 == 0) {
    local_1a8 = (*DAT_14c787670)(CONCAT71((int7)(uVar32 >> 8),1),&local_180,0x40);
  }
  else {
    local_178 = uVar22 + 0x3f & 0xffffffffffffffc0;
    if (local_178 <= *(ulonglong *)(local_190 + 0x28)) {
      local_1a8 = *(longlong *)(local_190 + 0x38);
      if (local_178 + local_1a8 <= *(ulonglong *)(local_190 + 0x40)) {
        *(ulonglong *)(local_190 + 0x38) = local_178 + local_1a8;
        goto LAB_14552ed88;
      }
    }
    local_1a8 = FUN_144b454a0(local_190,&local_178);
  }
LAB_14552ed88:
  local_12c = uVar21 | 0x80000000;
  local_178 = CONCAT44(local_178._4_4_,uVar21) | 0x80000000;
  iVar23 = 0;
  local_138 = local_1a8;
  local_120 = local_1a8;
  if ((int)(uVar21 & 0x7fffffff) < (int)uVar21) {
    FUN_14180788c(&local_138,&PTR_vftable_14c6e47a0,uVar22);
    local_190 = local_128;
    local_178 = CONCAT44(local_178._4_4_,local_12c);
    iVar23 = local_130;
  }
  lVar4 = local_170;
  if (iVar23 < (int)uVar21) {
    if (0 < (int)(uVar21 - iVar23)) {
      uVar32 = (ulonglong)(uVar21 - iVar23);
      puVar15 = (undefined1 *)(iVar23 + local_138);
      do {
        if (puVar15 != (undefined1 *)0x0) {
          *puVar15 = 0;
        }
        uVar32 = uVar32 - 1;
        puVar15 = puVar15 + 1;
      } while (uVar32 != 0);
    }
  }
  iVar23 = -1;
  local_1a8 = local_138;
  if (param_2 == '\0') {
    piVar20 = (int *)param_1[2];
    piVar19 = piVar20 + (longlong)(int)param_1[3] * 0xb;
    bVar33 = false;
    for (; piVar20 != piVar19; piVar20 = piVar20 + 0xb) {
      *(undefined1 *)(piVar20[7] + lVar13) = 1;
      *(undefined1 *)(piVar20[8] + lVar13) = 1;
      *(undefined1 *)(piVar20[9] + lVar13) = 1;
      if (uVar21 != 0) {
        *(undefined1 *)(*piVar20 + local_138) = 1;
      }
    }
  }
  else {
    if ((int)(uVar29 & 0x7fffffff) < (int)uVar29) {
      FUN_141807aa8(&local_b8,&PTR_vftable_14c6e47a0);
      local_168 = local_a8;
      local_188 = local_ac;
      local_198 = local_b8;
      lVar31 = local_b8;
    }
    iVar28 = -1;
    if (0 < (int)uVar29) {
      lVar30 = 0;
      lVar14 = -1;
      if (uVar22 == 0) {
        if (0 < lVar4) {
          lVar24 = 0;
          lVar26 = -0x2c;
          do {
            lVar27 = param_1[2];
            lVar17 = lVar26;
            if (*(int *)(lVar27 + 0x28 + lVar24) != 0x7fffffff) {
              iVar28 = iVar28 + 1;
              lVar14 = lVar14 + 1;
              lVar17 = lVar26 + 0x2c;
              if (lVar30 != lVar14) {
                uVar2 = ((undefined8 *)(lVar27 + lVar24))[1];
                *(undefined8 *)(lVar17 + lVar27) = *(undefined8 *)(lVar27 + lVar24);
                ((undefined8 *)(lVar17 + lVar27))[1] = uVar2;
                puVar18 = (undefined4 *)(lVar27 + 0x10 + lVar24);
                uVar8 = puVar18[1];
                uVar9 = puVar18[2];
                uVar10 = puVar18[3];
                puVar25 = (undefined4 *)(lVar26 + 0x3c + lVar27);
                *puVar25 = *puVar18;
                puVar25[1] = uVar8;
                puVar25[2] = uVar9;
                puVar25[3] = uVar10;
                *(undefined8 *)(lVar26 + 0x4c + lVar27) = *(undefined8 *)(lVar27 + 0x20 + lVar24);
                *(undefined4 *)(lVar26 + 0x54 + lVar27) = *(undefined4 *)(lVar27 + 0x28 + lVar24);
              }
              lVar27 = param_1[2];
              *(undefined1 *)(*(int *)(lVar26 + 0x48 + lVar27) + lVar13) = 1;
              *(undefined1 *)(*(int *)(lVar26 + 0x4c + lVar27) + lVar13) = 1;
              *(undefined1 *)(*(int *)(lVar26 + 0x50 + lVar27) + lVar13) = 1;
            }
            *(int *)(lVar31 + lVar30 * 4) = iVar28;
            lVar24 = lVar24 + 0x2c;
            lVar30 = lVar30 + 1;
            lVar26 = lVar17;
          } while (lVar30 < lVar4);
        }
      }
      else {
        lVar24 = 0;
        lVar26 = -0x2c;
        do {
          lVar27 = param_1[2];
          lVar17 = lVar26;
          if (*(int *)(lVar27 + 0x28 + lVar24) != 0x7fffffff) {
            iVar28 = iVar28 + 1;
            lVar14 = lVar14 + 1;
            lVar17 = lVar26 + 0x2c;
            if (lVar30 != lVar14) {
              uVar2 = ((undefined8 *)(lVar27 + lVar24))[1];
              *(undefined8 *)(lVar17 + lVar27) = *(undefined8 *)(lVar27 + lVar24);
              ((undefined8 *)(lVar17 + lVar27))[1] = uVar2;
              puVar18 = (undefined4 *)(lVar27 + 0x10 + lVar24);
              uVar8 = puVar18[1];
              uVar9 = puVar18[2];
              uVar10 = puVar18[3];
              puVar25 = (undefined4 *)(lVar26 + 0x3c + lVar27);
              *puVar25 = *puVar18;
              puVar25[1] = uVar8;
              puVar25[2] = uVar9;
              puVar25[3] = uVar10;
              *(undefined8 *)(lVar26 + 0x4c + lVar27) = *(undefined8 *)(lVar27 + 0x20 + lVar24);
              *(undefined4 *)(lVar26 + 0x54 + lVar27) = *(undefined4 *)(lVar27 + 0x28 + lVar24);
            }
            lVar27 = param_1[2];
            *(undefined1 *)(*(int *)(lVar26 + 0x48 + lVar27) + lVar13) = 1;
            *(undefined1 *)(*(int *)(lVar26 + 0x4c + lVar27) + lVar13) = 1;
            *(undefined1 *)(*(int *)(lVar26 + 0x50 + lVar27) + lVar13) = 1;
            *(undefined1 *)(*(int *)(lVar17 + lVar27) + local_1a8) = 1;
          }
          *(int *)(lVar31 + lVar30 * 4) = iVar28;
          lVar24 = lVar24 + 0x2c;
          lVar30 = lVar30 + 1;
          lVar26 = lVar17;
        } while (lVar30 < lVar4);
      }
    }
    iVar28 = iVar28 + 1;
    bVar33 = iVar28 != (int)param_1[3];
    if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar28) {
      FUN_1455305a0(param_1 + 2,&PTR_vftable_14c6e47a0);
    }
    iVar3 = (int)param_1[3];
    uVar22 = local_1a0;
    if (iVar3 < iVar28) {
      puVar25 = (undefined4 *)((longlong)iVar3 * 0x2c + param_1[2]);
      *(int *)(param_1 + 3) = iVar28;
      puVar18 = (undefined4 *)((longlong)iVar28 * 0x2c + param_1[2]);
      if (puVar25 != puVar18) {
        puVar25 = puVar25 + 5;
        do {
          if (puVar25 != (undefined4 *)&DAT_00000014) {
            puVar25[-4] = 0xffffffff;
            puVar25[-2] = 0xffffffff;
            *puVar25 = 0xffffffff;
          }
          puVar1 = puVar25 + 6;
          puVar25 = puVar25 + 0xb;
        } while (puVar1 != puVar18);
      }
    }
    else if (iVar28 < iVar3) {
      *(int *)(param_1 + 3) = iVar28;
    }
  }
  bVar12 = false;
  local_d8 = 0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar4 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar31 = *(longlong *)(lVar4 + 0xf0);
  if (lVar31 == 0) {
    if (*(char *)(lVar4 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar31 = FUN_144b3f4a0();
    *(longlong *)(lVar4 + 0xf0) = lVar31;
  }
  lVar4 = *(longlong *)(*(longlong *)(lVar31 + 0x3d0) + 0x10);
  local_170 = (longlong)(int)(uint)local_res20 * 4;
  lVar31 = 0;
  if (*(longlong *)(lVar4 + 8) == 0) {
    lVar31 = lVar4;
  }
  local_d0 = lVar31;
  local_c0 = local_170;
  if (lVar31 == 0) {
    local_e0 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar4 >> 8),1),&local_170);
  }
  else {
    local_180 = local_170 + 0x3fU & 0xffffffffffffffc0;
    if (local_180 <= *(ulonglong *)(lVar31 + 0x28)) {
      local_e0 = *(longlong *)(lVar31 + 0x38);
      if (local_e0 + local_180 <= *(ulonglong *)(lVar31 + 0x40)) {
        *(ulonglong *)(lVar31 + 0x38) = local_e0 + local_180;
        goto LAB_14552f16a;
      }
    }
    local_e0 = FUN_144b454a0(lVar31,&local_180);
  }
LAB_14552f16a:
  local_d4 = (uint)local_res20 | 0x80000000;
  local_1a0 = CONCAT44(local_1a0._4_4_,(uint)local_res20) | 0x80000000;
  local_c8 = local_e0;
  if ((int)((uint)local_res20 & 0x7fffffff) < (int)(uint)local_res20) {
    FUN_141807aa8(&local_e0,&PTR_vftable_14c6e47a0);
    local_1a0 = CONCAT44(local_1a0._4_4_,local_d4);
    lVar31 = local_d0;
  }
  lVar4 = local_e0;
  lVar14 = 0;
  iVar28 = -1;
  uVar29 = 0;
  if (0 < (longlong)uVar22) {
    lVar30 = -0x10;
    lVar24 = -1;
    lVar26 = 0;
    do {
      if (*(char *)(lVar14 + local_1a8) != '\0') {
        iVar28 = iVar28 + 1;
        lVar24 = lVar24 + 1;
        lVar30 = lVar30 + 0x10;
        if (lVar14 != lVar24) {
          puVar18 = (undefined4 *)(lVar26 + param_1[4]);
          uVar8 = puVar18[1];
          uVar9 = puVar18[2];
          uVar10 = puVar18[3];
          puVar25 = (undefined4 *)(lVar30 + param_1[4]);
          *puVar25 = *puVar18;
          puVar25[1] = uVar8;
          puVar25[2] = uVar9;
          puVar25[3] = uVar10;
        }
      }
      *(int *)(local_e0 + lVar14 * 4) = iVar28;
      lVar26 = lVar26 + 0x10;
      lVar14 = lVar14 + 1;
      uVar29 = (uint)local_res20;
    } while (lVar14 < (longlong)uVar22);
  }
  uVar21 = iVar28 + 1;
  if (uVar29 != uVar21) {
    if ((int)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) < (int)uVar21) {
      FUN_1418055da(param_1 + 4,&PTR_vftable_14c6e47a0);
    }
    if (((int)param_1[5] < (int)uVar21) || ((int)uVar21 < (int)param_1[5])) {
      *(uint *)(param_1 + 5) = uVar21;
    }
    bVar12 = true;
  }
  local_100 = 0;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar14 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar30 = *(longlong *)(lVar14 + 0xf0);
  if (lVar30 == 0) {
    if (*(char *)(lVar14 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar30 = FUN_144b3f4a0();
    *(longlong *)(lVar14 + 0xf0) = lVar30;
  }
  lVar14 = *(longlong *)(*(longlong *)(lVar30 + 0x3d0) + 0x10);
  local_180 = (longlong)(int)local_res18 * 4;
  lVar30 = 0;
  if (*(longlong *)(lVar14 + 8) == 0) {
    lVar30 = lVar14;
  }
  local_f8 = lVar30;
  local_e8 = local_180;
  if (lVar30 == 0) {
    local_108 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar14 >> 8),1),&local_180);
  }
  else {
    local_res20 = local_180 + 0x3f & 0xffffffffffffffc0;
    if (local_res20 <= *(ulonglong *)(lVar30 + 0x28)) {
      local_108 = *(longlong *)(lVar30 + 0x38);
      if (local_res20 + local_108 <= *(ulonglong *)(lVar30 + 0x40)) {
        *(ulonglong *)(lVar30 + 0x38) = local_res20 + local_108;
        goto LAB_14552f327;
      }
    }
    local_108 = FUN_144b454a0(lVar30,&local_res20);
  }
LAB_14552f327:
  local_fc = local_res18 | 0x80000000;
  local_res20 = CONCAT44(local_res20._4_4_,local_res18) | 0x80000000;
  local_f0 = local_108;
  if ((int)(local_res18 & 0x7fffffff) < (int)local_res18) {
    FUN_141807aa8(&local_108);
    local_res20 = CONCAT44(local_res20._4_4_,local_fc);
    lVar30 = local_f8;
  }
  lVar14 = local_108;
  uVar32 = 0;
  uVar29 = 0;
  auVar40 = DAT_14c6dae80._0_12_;
  lVar26 = 0;
  fVar37 = 0.0;
  fVar38 = 0.0;
  fVar39 = 0.0;
  fVar42 = 0.0;
  fVar43 = 0.0;
  fVar44 = 0.0;
  auVar35._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
  auVar35._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
  auVar36._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
  auVar36._0_12_ = auVar35;
  if (0 < (int)local_res18) {
    lVar27 = 0;
    lVar24 = -0x24;
    auVar41 = _DAT_14c6dae80;
    do {
      lVar17 = lVar24;
      if (*(char *)(lVar26 + lVar13) != '\0') {
        iVar23 = iVar23 + 1;
        lVar17 = lVar24 + 0x24;
        if ((int)uVar32 != iVar23) {
          lVar5 = *param_1;
          uVar2 = ((undefined8 *)(lVar27 + lVar5))[1];
          *(undefined8 *)(lVar17 + lVar5) = *(undefined8 *)(lVar27 + lVar5);
          ((undefined8 *)(lVar17 + lVar5))[1] = uVar2;
          puVar18 = (undefined4 *)(lVar27 + 0x10 + lVar5);
          uVar8 = puVar18[1];
          uVar9 = puVar18[2];
          uVar10 = puVar18[3];
          puVar25 = (undefined4 *)(lVar24 + 0x34 + lVar5);
          *puVar25 = *puVar18;
          puVar25[1] = uVar8;
          puVar25[2] = uVar9;
          puVar25[3] = uVar10;
          *(undefined4 *)(lVar24 + 0x44 + lVar5) = *(undefined4 *)(lVar27 + 0x20 + lVar5);
        }
        lVar24 = *param_1;
        uVar2 = *(undefined8 *)(lVar24 + 0xc + uVar32 * 0x24);
        fVar34 = *(float *)(lVar24 + 0x20 + uVar32 * 0x24);
        fVar37 = fVar37 + (float)uVar2;
        fVar38 = fVar38 + (float)((ulonglong)uVar2 >> 0x20);
        fVar39 = fVar39 + *(float *)(lVar24 + 0x14 + uVar32 * 0x24);
        uVar2 = *(undefined8 *)(lVar24 + 0x18 + uVar32 * 0x24);
        auVar6._8_4_ = fVar34;
        auVar6._0_8_ = uVar2;
        auVar6._12_4_ = fVar34;
        auVar41 = minps(auVar41,auVar6);
        auVar7._8_4_ = fVar34;
        auVar7._0_8_ = uVar2;
        auVar7._12_4_ = fVar34;
        auVar36 = maxps(auVar36,auVar7);
        fVar42 = fVar42 + (float)uVar2;
        fVar43 = fVar43 + (float)((ulonglong)uVar2 >> 0x20);
        fVar44 = fVar44 + fVar34;
      }
      auVar40 = auVar41._0_12_;
      auVar35 = auVar36._0_12_;
      *(int *)(local_108 + lVar26 * 4) = iVar23;
      uVar29 = (int)uVar32 + 1;
      uVar32 = (ulonglong)uVar29;
      lVar26 = lVar26 + 1;
      lVar27 = lVar27 + 0x24;
      lVar24 = lVar17;
    } while (lVar26 < (int)local_res18);
  }
  uVar21 = iVar23 + 1;
  if (uVar29 == uVar21) {
    bVar11 = false;
  }
  else {
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < (int)uVar21) {
      FUN_14532af70(param_1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar21);
    }
    if (((int)param_1[1] < (int)uVar21) || ((int)uVar21 < (int)param_1[1])) {
      *(uint *)(param_1 + 1) = uVar21;
    }
    bVar11 = true;
    local_res18 = uVar21;
  }
  lVar26 = local_198;
  if (local_res18 == 0) {
    *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    param_1[0x20] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
  }
  else {
    fVar34 = 1.0 / (float)(int)local_res18;
    *(ulonglong *)((longlong)param_1 + 0xf4) = CONCAT44(fVar38 * fVar34,fVar37 * fVar34);
    *(float *)((longlong)param_1 + 0xfc) = fVar39 * fVar34;
    fVar37 = 1.0 / (float)(int)local_res18;
    param_1[0x20] = CONCAT44(fVar43 * fVar37,fVar42 * fVar37);
    *(float *)(param_1 + 0x21) = fVar44 * fVar37;
  }
  auVar41._12_4_ = auVar40._8_4_;
  auVar41._0_12_ = auVar35;
  *(undefined1 (*) [16])((longlong)param_1 + 0x10c) = auVar41;
  *(longlong *)((longlong)param_1 + 0x11c) = auVar40._0_8_;
  if ((bVar33) || (bVar11)) {
    piVar20 = (int *)param_1[2];
    piVar19 = piVar20 + (longlong)(int)param_1[3] * 0xb;
    if (piVar20 != piVar19) {
      if (bVar33) {
        do {
          piVar20[1] = *(int *)(local_198 + (longlong)piVar20[1] * 4);
          piVar20[3] = *(int *)(local_198 + (longlong)piVar20[3] * 4);
          piVar20[5] = *(int *)(local_198 + (longlong)piVar20[5] * 4);
          if (bVar11) {
            piVar20[7] = *(int *)(lVar14 + (longlong)piVar20[7] * 4);
            piVar20[8] = *(int *)(lVar14 + (longlong)piVar20[8] * 4);
            piVar20[9] = *(int *)(lVar14 + (longlong)piVar20[9] * 4);
          }
          if (bVar12) {
            *piVar20 = *(int *)(lVar4 + (longlong)*piVar20 * 4);
          }
          piVar20 = piVar20 + 0xb;
        } while (piVar20 != piVar19);
      }
      else {
        do {
          if (bVar11) {
            piVar20[7] = *(int *)(lVar14 + (longlong)piVar20[7] * 4);
            piVar20[8] = *(int *)(lVar14 + (longlong)piVar20[8] * 4);
            piVar20[9] = *(int *)(lVar14 + (longlong)piVar20[9] * 4);
          }
          if (bVar12) {
            *piVar20 = *(int *)(lVar4 + (longlong)*piVar20 * 4);
          }
          piVar20 = piVar20 + 0xb;
        } while (piVar20 != piVar19);
      }
    }
  }
  if (lVar30 == 0) {
    (*DAT_14c787678)(auVar40._0_4_);
  }
  else {
    uVar32 = local_e8 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar30 + 0x28) < uVar32) ||
       (uVar32 + local_f0 != *(longlong *)(lVar30 + 0x38))) {
      FUN_144be8550(lVar30);
    }
    else {
      *(longlong *)(lVar30 + 0x38) = local_f0;
      if (*(longlong *)(lVar30 + 0x48) == local_f0) {
        FUN_144be8430(lVar30);
      }
    }
  }
  if ((-1 < (int)(uint)local_res20) && (lVar14 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar14,(ulonglong)((uint)local_res20 & 0x7fffffff) << 2);
  }
  if (lVar31 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar32 = local_c0 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar31 + 0x28) < uVar32) ||
       (uVar32 + local_c8 != *(longlong *)(lVar31 + 0x38))) {
      FUN_144be8550(lVar31);
    }
    else {
      *(longlong *)(lVar31 + 0x38) = local_c8;
      if (*(longlong *)(lVar31 + 0x48) == local_c8) {
        FUN_144be8430(lVar31);
      }
    }
  }
  if ((-1 < (int)(uint)local_1a0) && (lVar4 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar4,(ulonglong)((uint)local_1a0 & 0x7fffffff) << 2);
  }
  if (local_190 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar32 = local_118 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_190 + 0x28) < uVar32) ||
       (uVar32 + local_120 != *(longlong *)(local_190 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_190 + 0x38) = local_120;
      if (*(longlong *)(local_190 + 0x48) == local_120) {
        FUN_144be8430();
      }
    }
  }
  if ((-1 < (int)(uint)local_178) && (local_1a8 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_1a8,(uint)local_178 & 0x7fffffff);
  }
  if (local_168 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar32 = local_98 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_168 + 0x28) < uVar32) ||
       (uVar32 + local_a0 != *(longlong *)(local_168 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_168 + 0x38) = local_a0;
      if (*(longlong *)(local_168 + 0x48) == local_a0) {
        FUN_144be8430();
      }
    }
  }
  if ((-1 < (int)local_188) && (lVar26 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar26,(ulonglong)(local_188 & 0x7fffffff) << 2);
  }
  if (local_110 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar32 = local_140 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_110 + 0x28) < uVar32) ||
       (uVar32 + local_148 != *(longlong *)(local_110 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_110 + 0x38) = local_148;
      if (*(longlong *)(local_110 + 0x48) == local_148) {
        FUN_144be8430();
      }
    }
  }
  if ((-1 < (int)local_184) && (lVar13 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar13,local_184 & 0x7fffffff);
  }
  return;
}



// FUNCTION 14552f880 FUN_14552f880 body=2125 status=ok
// SIG undefined FUN_14552f880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14552f880(longlong *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_res8;
  ulonglong local_res18;
  int *local_res20;
  ulonglong local_d8;
  int *local_b8;
  int local_b0;
  uint local_ac;
  ulonglong local_a8;
  int *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int *local_58;
  ulonglong local_50;
  
  uVar14 = 0;
  uVar16 = *(uint *)(param_1 + 1);
  iVar19 = 0;
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar3 = *(char *)(lVar18 + 0x114);
  if (cVar3 == '\0') {
    __dyn_tls_on_demand_init();
    cVar3 = *(char *)(lVar18 + 0x114);
  }
  lVar8 = *(longlong *)(lVar18 + 0xf0);
  if (lVar8 == 0) {
    if (cVar3 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar18 + 0xf0) = lVar8;
  }
  local_50 = *(ulonglong *)(*(longlong *)(lVar8 + 0x3d0) + 0x10);
  if (*(longlong *)(local_50 + 8) != 0) {
    local_50 = uVar14;
  }
  local_90 = (longlong)(int)uVar16 * 4;
  if (local_50 == 0) {
    local_res20 = (int *)(*DAT_14c787670)(1);
  }
  else {
    uVar9 = local_90 + 0x3fU & 0xffffffffffffffc0;
    if (uVar9 <= *(ulonglong *)(local_50 + 0x28)) {
      local_res20 = *(int **)(local_50 + 0x38);
      uVar9 = (longlong)local_res20 + uVar9;
      if (uVar9 <= *(ulonglong *)(local_50 + 0x40)) {
        *(ulonglong *)(local_50 + 0x38) = uVar9;
        goto LAB_14552f975;
      }
    }
    local_res20 = (int *)FUN_144b454a0(local_50);
  }
LAB_14552f975:
  local_ac = uVar16 | 0x80000000;
  uVar16 = *(uint *)(param_1 + 1);
  local_b0 = 0;
  if (*(char *)(lVar18 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar18 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar18 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar18 + 0xf0) = lVar8;
  }
  uVar9 = *(ulonglong *)(*(longlong *)(lVar8 + 0x3d0) + 0x10);
  uVar12 = uVar14;
  if (*(longlong *)(uVar9 + 8) == 0) {
    uVar12 = uVar9;
  }
  lVar18 = (longlong)(int)uVar16 * 4;
  local_a8 = uVar12;
  local_98 = lVar18;
  if (uVar12 == 0) {
    local_b8 = (int *)(*DAT_14c787670)(CONCAT71((int7)(uVar9 >> 8),1));
  }
  else {
    uVar9 = lVar18 + 0x3fU & 0xffffffffffffffc0;
    if (uVar9 <= *(ulonglong *)(uVar12 + 0x28)) {
      local_b8 = *(int **)(uVar12 + 0x38);
      uVar9 = uVar9 + (longlong)local_b8;
      if (uVar9 <= *(ulonglong *)(uVar12 + 0x40)) {
        *(ulonglong *)(uVar12 + 0x38) = uVar9;
        goto LAB_14552fa35;
      }
    }
    local_b8 = (int *)FUN_144b454a0(uVar12);
  }
LAB_14552fa35:
  iVar15 = (int)param_1[1];
  local_ac = uVar16 | 0x80000000;
  iVar17 = iVar19;
  local_a0 = local_b8;
  if ((int)(uVar16 & 0x7fffffff) < iVar15) {
    FUN_141807aa8(&local_b8);
    uVar12 = local_a8;
    lVar18 = local_98;
    iVar17 = local_b0;
  }
  uVar16 = local_ac;
  piVar10 = local_b8;
  if (iVar17 < iVar15) {
    if (0 < iVar15 - iVar17) {
      uVar9 = (ulonglong)(uint)(iVar15 - iVar17);
      piVar11 = local_b8 + iVar17;
      do {
        if (piVar11 != (int *)0x0) {
          *piVar11 = 0;
        }
        uVar9 = uVar9 - 1;
        piVar11 = piVar11 + 1;
      } while (uVar9 != 0);
    }
  }
  iVar15 = 0;
  local_d8 = 0;
  if (0 < (int)param_1[3]) {
    do {
      lVar8 = param_1[2];
      lVar13 = (longlong)iVar15 * 0x2c;
      lVar20 = (longlong)(int)(local_d8 >> 0x20);
      if (*(int *)(lVar8 + lVar13) !=
          *(int *)((longlong)*(int *)(lVar13 + lVar20 * 8 + 4 + lVar8) * 0x2c + lVar8)) {
        local_b8[*(int *)(lVar8 + 0x1c + ((longlong)iVar15 * 0xb + lVar20) * 4)] =
             local_b8[*(int *)(lVar8 + 0x1c + ((longlong)iVar15 * 0xb + lVar20) * 4)] + 1;
      }
      uVar7 = 1 << (sbyte)(local_d8 >> 0x20);
      iVar15 = (uint)((uVar7 & 3) == 0) + iVar15;
      local_d8 = CONCAT44(uVar7,iVar15) & 0x3ffffffff;
    } while (iVar15 < (int)param_1[3]);
  }
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  iVar15 = 0;
  piVar11 = local_b8;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (*piVar11 < param_2) {
        iVar19 = (int)uVar14;
        uVar14 = (ulonglong)(iVar19 + 1);
        if (local_res20 + iVar19 != (int *)0x0) {
          local_res20[iVar19] = iVar15;
          uVar9 = (ulonglong)*(uint *)(param_1 + 1);
        }
      }
      iVar19 = (int)uVar14;
      iVar15 = iVar15 + 1;
      piVar11 = piVar11 + 1;
    } while (iVar15 < (int)uVar9);
  }
  if (uVar12 == 0) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar9 >> 8),1),local_a0,lVar18);
  }
  else {
    uVar14 = lVar18 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar12 + 0x28) < uVar14) ||
       ((longlong)local_a0 + uVar14 != *(longlong *)(uVar12 + 0x38))) {
      FUN_144be8550(uVar12);
    }
    else {
      *(int **)(uVar12 + 0x38) = local_a0;
      if (*(int **)(uVar12 + 0x48) == local_a0) {
        FUN_144be8430(uVar12);
      }
    }
  }
  if ((-1 < (int)uVar16) && (piVar10 != (int *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,piVar10,(ulonglong)(uVar16 & 0x7fffffff) << 2);
  }
  if (iVar19 != 0) {
    lVar18 = *param_1 + 0x18;
    local_58 = local_res20 + iVar19;
    if (local_res20 != local_58) {
      local_res8 = (uint)param_1;
      piVar10 = local_res20;
      fVar24 = _DAT_14c6dae90;
      do {
        iVar15 = 0;
        uVar16 = 0;
        uVar14 = 0xffffffff;
        local_res18 = 0;
        iVar19 = 0x7fffffff;
        lVar8 = (longlong)(*piVar10 * 0x24);
        uVar1 = *(undefined8 *)(lVar8 + lVar18);
        if (0 < (int)param_1[3]) {
          lVar13 = param_1[2];
          do {
            if ((*(int *)((longlong)iVar15 * 0x2c + 0x28 + lVar13) != 0x7fffffff) &&
               (*(int *)(lVar13 + 0x1c +
                        ((longlong)(int)(local_res18 >> 0x20) + (longlong)iVar15 * 0xb) * 4) ==
                *piVar10)) {
              if (iVar15 != -1) {
                uVar9 = local_res18 & 0xffffffff;
                local_res18 = local_res18 >> 0x20;
                do {
                  iVar17 = *(int *)(lVar13 + 0x1c +
                                   ((ulonglong)(1 << (sbyte)local_res18 & 3) +
                                   (longlong)(int)uVar9 * 0xb) * 4);
                  lVar20 = (longlong)(iVar17 * 0x24);
                  uVar2 = *(undefined8 *)(lVar20 + lVar18);
                  fVar21 = (float)uVar1 - (float)uVar2;
                  fVar22 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
                  fVar23 = *(float *)(lVar8 + 8 + lVar18) - *(float *)(lVar20 + 8 + lVar18);
                  fVar21 = fVar23 * fVar23 + fVar22 * fVar22 + fVar21 * fVar21;
                  if (fVar21 < fVar24) {
                    uVar14 = uVar9 & 0xffffffff;
                    fVar24 = fVar21;
                    local_res8 = (uint)local_res18;
                    iVar19 = iVar17;
                  }
                  uVar9 = *(ulonglong *)
                           ((longlong)(int)uVar9 * 0x2c + lVar13 + 4 +
                           (longlong)(int)(uint)local_res18 * 8);
                  uVar7 = 1 << ((byte)(uVar9 >> 0x20) & 0x1f) & 3;
                  local_res18 = (ulonglong)uVar7;
                } while (((int)uVar9 != iVar15) || (uVar7 != uVar16));
                iVar15 = (int)uVar14;
                uVar9 = (ulonglong)local_res8;
                do {
                  do {
                    uVar14 = *(ulonglong *)
                              ((longlong)(int)uVar14 * 0x2c + param_1[2] + 4 +
                              (longlong)(int)uVar9 * 8);
                    uVar16 = 1 << ((byte)(uVar14 >> 0x20) & 0x1f) & 3;
                    uVar9 = (ulonglong)uVar16;
                    *(int *)(param_1[2] + 0x1c + ((longlong)(int)uVar14 * 0xb + uVar9) * 4) = iVar19
                    ;
                  } while ((int)uVar14 != iVar15);
                } while (uVar16 != local_res8);
                lVar8 = param_1[2];
                lVar13 = (longlong)iVar15 * 0x2c;
                uVar1 = *(undefined8 *)(lVar13 + (longlong)(int)local_res8 * 8 + 4 + lVar8);
                local_88 = (longlong)(int)uVar1 * 0x2c;
                local_70 = *(undefined8 *)
                            (lVar8 + (ulonglong)(1 << ((byte)local_res8 & 0x1f) & 3) * 8 + 4 +
                            lVar13);
                local_78 = *(undefined8 *)
                            (lVar8 + (longlong)
                                     *(int *)(&DAT_149da5e88 + (longlong)(int)local_res8 * 4) * 8 +
                             4 + lVar13);
                local_60 = *(undefined8 *)
                            (lVar8 + (ulonglong)(1 << ((byte)((ulonglong)uVar1 >> 0x20) & 0x1f) & 3)
                                     * 8 + 4 + local_88);
                local_68 = *(undefined8 *)
                            (lVar8 + (longlong)
                                     *(int *)(&DAT_149da5e88 +
                                             (longlong)(int)((ulonglong)uVar1 >> 0x20) * 4) * 8 + 4
                            + local_88);
                local_80 = (longlong)(int)local_70 * 0x2c +
                           (longlong)(int)((ulonglong)local_70 >> 0x20) * 8;
                if (*(int *)(lVar8 + 4 + local_80) != -1) {
                  uVar1 = *(undefined8 *)(lVar8 + 4 + local_80);
                  *(undefined4 *)
                   ((longlong)(int)uVar1 * 0x2c + lVar8 + 4 +
                   (longlong)(int)((ulonglong)uVar1 >> 0x20) * 8) = 0xffffffff;
                }
                *(undefined4 *)(param_1[2] + 4 + local_80) = 0xffffffff;
                lVar4 = param_1[2];
                lVar20 = (longlong)(int)local_78 * 0x2c +
                         (longlong)(int)((ulonglong)local_78 >> 0x20) * 8;
                if (*(int *)(lVar20 + 4 + lVar4) != -1) {
                  uVar1 = *(undefined8 *)(lVar20 + 4 + lVar4);
                  *(undefined4 *)
                   ((longlong)(int)uVar1 * 0x2c + lVar4 + 4 +
                   (longlong)(int)((ulonglong)uVar1 >> 0x20) * 8) = 0xffffffff;
                }
                *(undefined4 *)(param_1[2] + 4 + lVar20) = 0xffffffff;
                lVar5 = param_1[2];
                lVar4 = (longlong)(int)local_60 * 0x2c +
                        (longlong)(int)((ulonglong)local_60 >> 0x20) * 8;
                if (*(int *)(lVar4 + 4 + lVar5) != -1) {
                  uVar1 = *(undefined8 *)(lVar4 + 4 + lVar5);
                  *(undefined4 *)
                   ((longlong)(int)uVar1 * 0x2c + lVar5 + 4 +
                   (longlong)(int)((ulonglong)uVar1 >> 0x20) * 8) = 0xffffffff;
                }
                *(undefined4 *)(param_1[2] + 4 + lVar4) = 0xffffffff;
                lVar6 = param_1[2];
                lVar5 = (longlong)(int)local_68 * 0x2c +
                        (longlong)(int)((ulonglong)local_68 >> 0x20) * 8;
                if (*(int *)(lVar5 + 4 + lVar6) != -1) {
                  uVar1 = *(undefined8 *)(lVar5 + 4 + lVar6);
                  *(undefined4 *)
                   ((longlong)(int)uVar1 * 0x2c + lVar6 + 4 +
                   (longlong)(int)((ulonglong)uVar1 >> 0x20) * 8) = 0xffffffff;
                }
                *(undefined4 *)(param_1[2] + 4 + lVar5) = 0xffffffff;
                *(undefined4 *)(lVar8 + 0x28 + lVar13) = 0x7fffffff;
                *(undefined4 *)(lVar8 + 0x28 + local_88) = 0x7fffffff;
                *(undefined8 *)(param_1[2] + 4 + local_80) = local_78;
                if ((int)local_78 != -1) {
                  *(undefined8 *)(param_1[2] + 4 + lVar20) = local_70;
                }
                *(undefined8 *)(param_1[2] + 4 + lVar4) = local_68;
                if ((int)local_68 != -1) {
                  *(undefined8 *)(param_1[2] + 4 + lVar5) = local_60;
                }
                FUN_145529a20(param_1,&local_70,&local_78);
                FUN_145529a20(param_1,&local_60);
                fVar24 = _DAT_14c6dae90;
              }
              break;
            }
            uVar7 = 1 << (sbyte)(local_res18 >> 0x20);
            uVar16 = uVar7 & 3;
            iVar15 = (uint)(uVar16 == 0) + iVar15;
            local_res18 = CONCAT44(uVar7,iVar15) & 0x3ffffffff;
          } while (iVar15 < (int)param_1[3]);
        }
        piVar10 = piVar10 + 1;
      } while (piVar10 != local_58);
    }
    FUN_14552ea30(param_1,CONCAT71((int7)((ulonglong)lVar18 >> 8),1));
  }
  if (local_50 == 0) {
    (*DAT_14c787678)(1,local_res20);
  }
  else {
    uVar14 = local_90 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_50 + 0x28) < uVar14) ||
       ((longlong)local_res20 + uVar14 != *(longlong *)(local_50 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(int **)(local_50 + 0x38) = local_res20;
      if (*(int **)(local_50 + 0x48) == local_res20) {
        FUN_144be8430();
      }
    }
  }
  return;
}



// FUNCTION 1455300d0 FUN_1455300d0 body=472 status=ok
// SIG undefined FUN_1455300d0(void)

void FUN_1455300d0(longlong param_1,int param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  longlong local_428 [64];
  longlong local_228 [64];
  
  if (1 < param_2) {
    local_428[0] = param_1;
    local_228[0] = param_1 + (longlong)param_2 * 4 + -4;
    lVar7 = 0;
    do {
      piVar6 = (int *)local_428[lVar7];
      piVar4 = (int *)local_228[lVar7];
      do {
        while( true ) {
          piVar9 = piVar4;
          lVar8 = (longlong)piVar6[(longlong)piVar9 - (longlong)piVar6 >> 3];
          piVar4 = piVar9;
          piVar5 = piVar6;
          do {
            iVar2 = FUN_144bfb620(*param_3 + lVar8 * 0x10,(longlong)*piVar5 * 0x10 + *param_3,0x10);
            while (iVar2 < 0) {
              piVar5 = piVar5 + 1;
              iVar2 = FUN_144bfb620(*param_3 + lVar8 * 0x10,(longlong)*piVar5 * 0x10 + *param_3,0x10
                                   );
            }
            iVar2 = FUN_144bfb620((longlong)*piVar4 * 0x10 + *param_3,*param_3 + lVar8 * 0x10,0x10);
            while (iVar2 < 0) {
              piVar4 = piVar4 + -1;
              iVar2 = FUN_144bfb620((longlong)*piVar4 * 0x10 + *param_3,*param_3 + lVar8 * 0x10,0x10
                                   );
            }
            if (piVar5 <= piVar4) {
              if (piVar4 != piVar5) {
                iVar2 = *piVar4;
                *piVar4 = *piVar5;
                *piVar5 = iVar2;
              }
              piVar4 = piVar4 + -1;
              piVar5 = piVar5 + 1;
            }
          } while (piVar5 <= piVar4);
          if (piVar4 <= piVar6) break;
          if (piVar5 < piVar9) {
            piVar3 = piVar5;
            piVar1 = piVar9;
            if ((longlong)piVar9 - (longlong)piVar5 <= (longlong)piVar4 - (longlong)piVar6) {
              piVar3 = piVar6;
              piVar1 = piVar4;
            }
            local_428[lVar7] = (longlong)piVar3;
            local_228[lVar7] = (longlong)piVar1;
            lVar7 = lVar7 + 1;
            if ((longlong)piVar9 - (longlong)piVar5 <= (longlong)piVar4 - (longlong)piVar6) {
              piVar6 = piVar5;
              piVar4 = piVar9;
            }
          }
        }
        piVar6 = piVar5;
        piVar4 = piVar9;
      } while (piVar5 < piVar9);
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  return;
}



// FUNCTION 1455302b0 FUN_1455302b0 body=99 status=ok
// SIG undefined FUN_1455302b0(void)

uint * FUN_1455302b0(longlong *param_1,int *param_2)

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
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 4) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 145530320 FUN_145530320 body=312 status=ok
// SIG undefined FUN_145530320(void)

void FUN_145530320(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar9 = (ulonglong)param_2;
  uVar10 = uVar9;
LAB_14553034e:
  uVar7 = uVar10 & 0xffffffff;
  piVar2 = *(int **)(param_1 + ((longlong)((int)uVar10 + param_3) >> 1) * 8);
  uVar8 = (longlong)param_3;
  iVar11 = param_3;
LAB_145530380:
  iVar1 = *piVar2;
  do {
    piVar3 = *(int **)(param_1 + uVar9 * 8);
    uVar6 = (uint)uVar7;
    if (*piVar3 == iVar1) {
      if (piVar3[1] == piVar2[1]) {
        if (piVar3[2] == piVar2[2]) break;
        iVar4 = piVar3[2] - piVar2[2];
      }
      else {
        iVar4 = piVar3[1] - piVar2[1];
      }
    }
    else {
      iVar4 = *piVar3 - iVar1;
    }
    if (-1 < iVar4) break;
    uVar7 = (ulonglong)(uVar6 + 1);
    uVar9 = uVar9 + 1;
  } while( true );
LAB_1455303c0:
  piVar3 = *(int **)(param_1 + uVar8 * 8);
  iVar4 = *piVar3;
  iVar5 = iVar1;
  if (iVar1 == iVar4) {
    iVar4 = piVar3[1];
    iVar5 = piVar2[1];
    if (piVar2[1] == iVar4) {
      iVar4 = piVar3[2];
      iVar5 = piVar2[2];
      if (piVar2[2] == iVar4) goto LAB_1455303f4;
    }
  }
  if (-1 < iVar5 - iVar4) goto LAB_1455303f4;
  iVar11 = iVar11 + -1;
  uVar8 = uVar8 - 1;
  goto LAB_1455303c0;
LAB_1455303f4:
  if ((longlong)uVar8 < (longlong)uVar9) goto LAB_14553041b;
  if (uVar8 != uVar9) {
    *(undefined8 *)(param_1 + uVar8 * 8) = *(undefined8 *)(param_1 + uVar9 * 8);
    *(int **)(param_1 + uVar9 * 8) = piVar3;
  }
  iVar11 = iVar11 + -1;
  uVar8 = uVar8 - 1;
  uVar6 = uVar6 + 1;
  uVar7 = (ulonglong)uVar6;
  uVar9 = uVar9 + 1;
  if ((longlong)uVar8 < (longlong)uVar9) goto LAB_14553041b;
  goto LAB_145530380;
LAB_14553041b:
  if ((int)uVar10 < iVar11) {
    FUN_145530320(param_1,uVar10 & 0xffffffff,iVar11,param_4);
  }
  if (param_3 <= (int)uVar6) {
    return;
  }
  uVar10 = (ulonglong)uVar6;
  goto LAB_14553034e;
}



// FUNCTION 145530460 FUN_145530460 body=312 status=ok
// SIG undefined FUN_145530460(void)

void FUN_145530460(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  
  uVar9 = (ulonglong)param_2;
  uVar10 = uVar9;
LAB_14553048e:
  uVar7 = uVar10 & 0xffffffff;
  piVar2 = *(int **)(param_1 + ((longlong)((int)uVar10 + param_3) >> 1) * 8);
  uVar8 = (longlong)param_3;
  iVar11 = param_3;
LAB_1455304c0:
  iVar1 = *piVar2;
  do {
    piVar3 = *(int **)(param_1 + uVar9 * 8);
    uVar6 = (uint)uVar7;
    if (*piVar3 == iVar1) {
      if (piVar3[1] == piVar2[1]) {
        if (piVar3[2] == piVar2[2]) break;
        iVar4 = piVar3[2] - piVar2[2];
      }
      else {
        iVar4 = piVar3[1] - piVar2[1];
      }
    }
    else {
      iVar4 = *piVar3 - iVar1;
    }
    if (-1 < iVar4) break;
    uVar7 = (ulonglong)(uVar6 + 1);
    uVar9 = uVar9 + 1;
  } while( true );
LAB_145530500:
  piVar3 = *(int **)(param_1 + uVar8 * 8);
  iVar4 = *piVar3;
  iVar5 = iVar1;
  if (iVar1 == iVar4) {
    iVar4 = piVar3[1];
    iVar5 = piVar2[1];
    if (piVar2[1] == iVar4) {
      iVar4 = piVar3[2];
      iVar5 = piVar2[2];
      if (piVar2[2] == iVar4) goto LAB_145530534;
    }
  }
  if (-1 < iVar5 - iVar4) goto LAB_145530534;
  iVar11 = iVar11 + -1;
  uVar8 = uVar8 - 1;
  goto LAB_145530500;
LAB_145530534:
  if ((longlong)uVar8 < (longlong)uVar9) goto LAB_14553055b;
  if (uVar8 != uVar9) {
    *(undefined8 *)(param_1 + uVar8 * 8) = *(undefined8 *)(param_1 + uVar9 * 8);
    *(int **)(param_1 + uVar9 * 8) = piVar3;
  }
  iVar11 = iVar11 + -1;
  uVar8 = uVar8 - 1;
  uVar6 = uVar6 + 1;
  uVar7 = (ulonglong)uVar6;
  uVar9 = uVar9 + 1;
  if ((longlong)uVar8 < (longlong)uVar9) goto LAB_14553055b;
  goto LAB_1455304c0;
LAB_14553055b:
  if ((int)uVar10 < iVar11) {
    FUN_145530460(param_1,uVar10 & 0xffffffff,iVar11,param_4);
  }
  if (param_3 <= (int)uVar6) {
    return;
  }
  uVar10 = (ulonglong)uVar6;
  goto LAB_14553048e;
}



// FUNCTION 1455305a0 FUN_1455305a0 body=300 status=ok
// SIG undefined FUN_1455305a0(void)

ulonglong FUN_1455305a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar8 = uVar9 * 2;
  uVar6 = param_3;
  if (param_3 < uVar8) {
    uVar6 = uVar8;
  }
  if ((0x7ffffffe < uVar6) && (uVar6 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar6 * 0x2c,&local_res8);
  uVar8 = (ulonglong)*(uint *)(param_1 + 1);
  puVar5 = (undefined8 *)*param_1;
  puVar4 = puVar3;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        uVar2 = puVar5[1];
        *puVar4 = *puVar5;
        puVar4[1] = uVar2;
        uVar2 = puVar5[3];
        puVar4[2] = puVar5[2];
        puVar4[3] = uVar2;
        puVar4[4] = puVar5[4];
        *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(puVar5 + 5);
      }
      puVar4 = (undefined8 *)((longlong)puVar4 + 0x2c);
      puVar5 = (undefined8 *)((longlong)puVar5 + 0x2c);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar6 * 0x2c + 0x2c;
  uVar7 = uVar6;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x2c;
    uVar7 = uVar6 + 1;
    if (uVar8 <= local_res8) {
      uVar6 = local_res8 + uVar6 * -0x2c;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      uVar8 = SUB168(ZEXT816(0x2e8ba2e8ba2e8ba3) * auVar1,0);
      uVar7 = uVar7 + uVar6 / 0x2c;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 * 0x2c);
  }
  *param_1 = puVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar7;
  return uVar8;
}



// FUNCTION 1455306d0 FUN_1455306d0 body=291 status=ok
// SIG undefined FUN_1455306d0(void)

ulonglong FUN_1455306d0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145530800 FUN_145530800 body=159 status=ok
// SIG undefined FUN_145530800(void)

void FUN_145530800(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 1455308a0 FUN_1455308a0 body=84 status=ok
// SIG undefined FUN_1455308a0(void)

undefined8 *
FUN_1455308a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  uVar2 = param_5[1];
  param_1[3] = *param_5;
  param_1[4] = uVar2;
  uVar1 = *(undefined4 *)(param_6 + 1);
  param_1[5] = *param_6;
  *(undefined4 *)(param_1 + 6) = uVar1;
  param_1[7] = param_7;
  param_1[0xc] = param_1 + 0xe;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000010;
  return param_1;
}



// FUNCTION 145530900 FUN_145530900 body=3 status=ok
// SIG undefined FUN_145530900(void)

void FUN_145530900(void)

{
  return;
}



// FUNCTION 145530910 FUN_145530910 body=159 status=ok
// SIG undefined FUN_145530910(void)

void FUN_145530910(longlong *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = *param_1;
  iVar1 = *(int *)(lVar3 + 0x60);
  uVar2 = *(undefined4 *)(lVar3 + 0x60);
  iVar4 = iVar1 + param_2;
  if ((int)(*(uint *)(lVar3 + 100) & 0x7fffffff) < iVar4) {
    FUN_144cc4ac0((longlong *)(lVar3 + 0x58),&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  *(int *)(lVar3 + 0x60) = iVar4;
  lVar3 = (longlong)iVar1 * 0x80 + *(longlong *)(lVar3 + 0x58);
  *(undefined4 *)(param_1 + 8) = 2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(int *)(param_1 + 9) = param_2;
  param_1[10] = lVar3;
  param_1[0xb] = (longlong)param_2 * 0x80 + lVar3;
  return;
}



// FUNCTION 1455309b0 FUN_1455309b0 body=191 status=ok
// SIG undefined FUN_1455309b0(void)

void FUN_1455309b0(longlong param_1,int param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
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
  
  local_b8 = *param_3;
  uStack_b0 = param_3[1];
  local_a8 = *(undefined4 *)(param_3 + 2);
  uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_a0 = *(undefined4 *)(param_3 + 3);
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0x1c);
  local_98 = param_3[4];
  FUN_145531060(*(undefined8 *)(param_1 + 0x10),&local_88,&local_b8);
  lVar2 = *(longlong *)(param_1 + 0x50);
  lVar3 = (longlong)param_2 * 0x80;
  *(undefined8 *)(lVar3 + lVar2) = local_88;
  ((undefined8 *)(lVar3 + lVar2))[1] = uStack_80;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar2);
  *puVar1 = local_78;
  puVar1[1] = uStack_70;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar2);
  *puVar1 = local_68;
  puVar1[1] = uStack_60;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar2);
  *puVar1 = local_58;
  puVar1[1] = uStack_50;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar2);
  *puVar1 = local_48;
  puVar1[1] = uStack_40;
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar2);
  *puVar1 = local_38;
  puVar1[1] = uStack_30;
  puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar2);
  *puVar1 = local_28;
  puVar1[1] = uStack_20;
  puVar1 = (undefined8 *)(lVar3 + 0x70 + lVar2);
  *puVar1 = local_18;
  puVar1[1] = uStack_10;
  return;
}



// FUNCTION 145530a70 FUN_145530a70 body=153 status=ok
// SIG undefined FUN_145530a70(void)

void FUN_145530a70(longlong *param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  if ((int)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) < param_2) {
    FUN_141807aa8(param_1 + 0xc,&PTR_vftable_14c6e47c0,(longlong)param_2);
  }
  iVar1 = (int)param_1[0xd];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0xd) = param_2;
    if (0 < param_2 - iVar1) {
      uVar2 = (ulonglong)(uint)(param_2 - iVar1);
      puVar3 = (undefined4 *)(param_1[0xc] + (longlong)iVar1 * 4);
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
    *(int *)(param_1 + 0xd) = param_2;
  }
  FUN_144cb3b30(*param_1,*(undefined4 *)(*param_1 + 0x30));
  return;
}



// FUNCTION 145530b10 FUN_145530b10 body=103 status=ok
// SIG undefined FUN_145530b10(void)

void FUN_145530b10(longlong *param_1)

{
  undefined4 uVar1;
  longlong local_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar1 = *(undefined4 *)(*param_1 + 0x20);
  FUN_144cb3900();
  local_18 = param_1[3];
  uStack_10 = (undefined4)param_1[4];
  uStack_c = *(undefined4 *)((longlong)param_1 + 0x24);
  param_1[0x16] = -1;
  FUN_144cb48b0(*param_1,uVar1,&local_18);
  local_18 = param_1[5];
  uStack_10 = (undefined4)param_1[6];
  FUN_144cb4c80(*param_1,uVar1,&local_18);
  return;
}



// FUNCTION 145530b80 FUN_145530b80 body=469 status=ok
// SIG undefined FUN_145530b80(void)

void FUN_145530b80(longlong *param_1,int param_2,int param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong *plVar4;
  uint *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_18;
  longlong local_10;
  
  uVar2 = *(undefined4 *)(*param_1 + 0x30);
  puVar5 = (uint *)FUN_144cb3c80();
  *(undefined4 *)(param_1[0xc] + (longlong)param_2 * 4) = uVar2;
  if ((int)param_1[0x16] < 0) {
    *(undefined4 *)(param_1 + 0x16) = uVar2;
    *(undefined4 *)(*(longlong *)(*param_1 + 0x18) + -4 + (longlong)*(int *)(*param_1 + 0x20) * 4) =
         uVar2;
  }
  else {
    puVar5[2] = *(uint *)((longlong)param_1 + 0xb4);
    *(undefined4 *)
     ((longlong)*(int *)((longlong)param_1 + 0xb4) * 0x60 + 0xc + *(longlong *)(*param_1 + 0x28)) =
         uVar2;
  }
  puVar5[1] = *(int *)(*param_1 + 0x20) - 1;
  *puVar5 = *(int *)((longlong)param_1 + 0x44) + param_3 | (int)param_1[8] << 0x1e;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  if (param_5 < 0) {
    puVar5[4] = 0xffffffff;
    if (param_6 + 1 < 0) {
      plVar4 = (longlong *)param_1[7];
      iVar7 = (int)plVar4[1] + 1;
      if ((int)(*(uint *)((longlong)plVar4 + 0xc) & 0x7fffffff) < iVar7) {
        FUN_145530dc0(plVar4,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      puVar1 = (ulonglong *)(*plVar4 + (longlong)(int)plVar4[1] * 8);
      if (puVar1 != (ulonglong *)0x0) {
        *puVar1 = CONCAT44(uVar2,param_6) & 0xffffffff7fffffff;
      }
      *(int *)(plVar4 + 1) = iVar7;
    }
    else if ((~(byte)((uint)param_6 >> 0x1f) & 1) != 0) {
      plVar4 = (longlong *)param_1[1];
      if (param_6 < (int)plVar4[1]) {
        lVar6 = (longlong)param_6 * 0x60 + *plVar4;
      }
      else {
        lVar6 = (longlong)(param_6 - (int)plVar4[1]) * 0x60 + plVar4[2];
      }
      local_18 = *(undefined8 *)(lVar6 + 0x50);
      local_10 = -*(longlong *)(lVar6 + 0x58);
      FUN_144cb5280(*param_1,uVar2,&local_18);
    }
  }
  else {
    uVar3 = *(uint *)(param_1[0xc] + (longlong)param_5 * 4);
    if (0 < (int)uVar3) {
      *(undefined4 *)((longlong)(int)uVar3 * 0x60 + 0x10 + *(longlong *)(*param_1 + 0x28)) = uVar2;
      puVar5[4] = uVar3;
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar2;
  return;
}



// FUNCTION 145530d60 FUN_145530d60 body=65 status=ok
// SIG undefined FUN_145530d60(void)

void FUN_145530d60(longlong *param_1)

{
  *(int *)((longlong)*(int *)(*param_1 + 0x30) * 0x60 + -0x54 + *(longlong *)(*param_1 + 0x28)) =
       (int)param_1[0x16];
  *(int *)((longlong)(int)param_1[0x16] * 0x60 + 8 + *(longlong *)(*param_1 + 0x28)) =
       *(int *)(*param_1 + 0x30) + -1;
  return;
}



// FUNCTION 145530db0 FUN_145530db0 body=3 status=ok
// SIG undefined FUN_145530db0(void)

void FUN_145530db0(void)

{
  return;
}



// FUNCTION 145530dc0 FUN_145530dc0 body=247 status=ok
// SIG undefined FUN_145530dc0(void)

void FUN_145530dc0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145530ec0 FUN_145530ec0 body=410 status=ok
// SIG undefined FUN_145530ec0(void)

longlong * FUN_145530ec0(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined8 local_b8;
  longlong local_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000010;
  iVar11 = 0x7fffff;
  iVar10 = 0x7fffff;
  iVar9 = -1;
  uVar5 = *(uint *)(*(longlong *)(param_2 + 0x18) + (longlong)param_3 * 4);
  iVar8 = 0;
  uStack_9c = uVar5;
  do {
    iVar1 = iVar8 + 1;
    puVar2 = (uint *)((longlong)(int)uStack_9c * 0x60 + *(longlong *)(param_2 + 0x28));
    local_a8 = *puVar2;
    uStack_a4 = puVar2[1];
    uStack_a0 = puVar2[2];
    uStack_9c = puVar2[3];
    uVar4 = *(undefined8 *)
             (*(longlong *)(param_2 + 0x38) + (ulonglong)(local_a8 & 0x3fffffff) * 0xc);
    uVar6 = *(undefined4 *)
             (*(longlong *)(param_2 + 0x38) + 8 + (ulonglong)(local_a8 & 0x3fffffff) * 0xc);
    local_b8 = uVar4;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_147e4dcf0(param_1,&PTR_vftable_14c6e47c0,(longlong)iVar1);
    }
    puVar3 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0xc);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar4;
      *(undefined4 *)(puVar3 + 1) = uVar6;
    }
    *(int *)(param_1 + 1) = iVar1;
    if ((int)local_b8 - iVar11 == 0) {
      bVar7 = local_b8._4_4_ < iVar10;
    }
    else {
      bVar7 = (bool)((byte)((int)local_b8 - iVar11 >> 0x1f) >> 7);
    }
    if (bVar7 != false) {
      iVar9 = iVar8;
      iVar11 = (int)local_b8;
      iVar10 = local_b8._4_4_;
    }
    iVar8 = iVar1;
  } while (uStack_9c != uVar5);
  local_b8 = *param_1;
  local_b0 = local_b8 + (longlong)iVar1 * 0xc;
  FUN_145531bf0(&local_b8,iVar9);
  return param_1;
}



// FUNCTION 145531060 FUN_145531060 body=2957 status=ok
// SIG undefined FUN_145531060(void)

ulonglong * FUN_145531060(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  int iVar2;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  ulonglong uVar47;
  ulonglong uVar48;
  ulonglong uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  ulonglong uVar53;
  longlong lVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong *puVar60;
  ulonglong uVar61;
  ulonglong *puVar62;
  ulonglong uVar63;
  uint uVar64;
  ulonglong uVar65;
  ulonglong uVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  ulonglong uVar70;
  ulonglong uVar71;
  uint uVar72;
  ulonglong uVar73;
  ulonglong uVar74;
  ulonglong uVar75;
  longlong lVar76;
  longlong lVar77;
  ulonglong uVar78;
  longlong lVar79;
  int *piVar80;
  ulonglong uVar81;
  longlong lVar82;
  longlong lVar83;
  int iVar84;
  longlong local_res20;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  ulonglong local_258;
  ulonglong uStack_250;
  ulonglong local_248;
  ulonglong uStack_240;
  ulonglong local_238;
  ulonglong uStack_230;
  ulonglong local_218;
  ulonglong uStack_210;
  ulonglong local_208;
  longlong lStack_200;
  ulonglong local_1f8;
  ulonglong uStack_1f0;
  ulonglong local_1e8;
  ulonglong uStack_1e0;
  ulonglong local_1d8;
  longlong lStack_1d0;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8;
  ulonglong uStack_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong local_190;
  longlong local_188;
  ulonglong local_180;
  ulonglong local_178;
  ulonglong uStack_170;
  ulonglong local_168;
  longlong lStack_160;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  ulonglong local_138;
  longlong lStack_130;
  ulonglong local_128;
  longlong lStack_120;
  ulonglong local_118;
  longlong lStack_110;
  ulonglong local_108;
  longlong lStack_100;
  undefined1 local_f8 [192];
  
  puVar60 = (ulonglong *)FUN_145531cc0(param_3,&local_248);
  uVar75 = CONCAT44(uStack_270._4_4_,(undefined4)uStack_270);
  uVar63 = CONCAT44(local_278._4_4_,(undefined4)local_278);
  piVar80 = (int *)*param_1;
  uVar1 = puVar60[1];
  uVar65 = (ulonglong)piVar80[2];
  uVar47 = puVar60[2];
  uVar48 = puVar60[3];
  *param_3 = *puVar60;
  param_3[1] = uVar1;
  uVar1 = puVar60[4];
  param_3[2] = uVar47;
  param_3[3] = uVar48;
  param_3[4] = uVar1;
  uVar1 = param_3[4];
  uVar47 = *param_3;
  uVar48 = param_3[1];
  local_148 = param_3[2];
  uVar49 = param_3[3];
  uVar61 = uVar65 * uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar65;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar1;
  uVar73 = SUB168(auVar3 * auVar21,8) - ((longlong)uVar65 >> 0x3f & uVar1);
  uVar65 = (ulonglong)piVar80[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar65;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  uVar81 = uVar65 * uVar1;
  lVar82 = SUB168(auVar4 * auVar22,8) - ((longlong)uVar65 >> 0x3f & uVar1);
  uVar66 = (ulonglong)*piVar80;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar66;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  uVar78 = SUB168(auVar5 * auVar23,8) - ((longlong)uVar66 >> 0x3f & uVar1);
  uVar65 = (ulonglong)piVar80[5];
  uVar66 = uVar66 * uVar1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar65;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar1;
  uVar74 = SUB168(auVar6 * auVar24,8) - ((longlong)uVar65 >> 0x3f & uVar1);
  uVar67 = (ulonglong)piVar80[4];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar67;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar1;
  iVar84 = 2;
  lStack_1d0 = SUB168(auVar7 * auVar25,8) - ((longlong)uVar67 >> 0x3f & uVar1);
  uVar68 = (ulonglong)piVar80[3];
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar68;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar1;
  uStack_1e0 = SUB168(auVar8 * auVar26,8) - ((longlong)uVar68 >> 0x3f & uVar1);
  uVar69 = (ulonglong)piVar80[8];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar69;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar1;
  uStack_270 = SUB168(auVar9 * auVar27,8) - ((longlong)uVar69 >> 0x3f & uVar1);
  uVar70 = (ulonglong)piVar80[7];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar70;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = uVar1;
  uStack_230 = SUB168(auVar10 * auVar28,8) - ((longlong)uVar70 >> 0x3f & uVar1);
  uVar71 = (ulonglong)piVar80[6];
  local_258 = uVar71 * uVar1;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar71;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar1;
  iVar2 = (int)param_1[1];
  uStack_250 = SUB168(auVar11 * auVar29,8) - ((longlong)uVar71 >> 0x3f & uVar1);
  local_208 = uVar81;
  lStack_200 = lVar82;
  local_1f8 = uVar66;
  uStack_1f0 = uVar78;
  local_1c8 = uVar66;
  uStack_1c0 = uVar78;
  local_158 = uVar47;
  uStack_150 = uVar48;
  uStack_140 = uVar49;
  local_248 = local_258;
  uStack_240 = uStack_250;
  local_238 = uVar70 * uVar1;
  local_278 = uVar69 * uVar1;
  local_1e8 = uVar68 * uVar1;
  local_1d8 = uVar67 * uVar1;
  uVar65 = uVar65 * uVar1;
  local_138 = uVar81;
  lStack_130 = lVar82;
  if (2 < iVar2 + -1) {
    local_res20 = 2;
    local_1a8 = 0x18;
    uVar58 = uVar47;
    local_180 = local_148;
    uVar71 = uVar67 * uVar1;
    lVar76 = lStack_1d0;
    uVar68 = uVar68 * uVar1;
    uVar57 = uStack_1e0;
    uVar67 = uVar69 * uVar1;
    uVar69 = uVar70 * uVar1;
    uVar70 = local_258;
    uVar59 = uStack_250;
    do {
      uVar56 = uVar59;
      uVar55 = uVar70;
      lVar54 = uStack_230;
      uVar53 = uVar69;
      uVar69 = uStack_270;
      local_258 = uVar58;
      auVar41._8_4_ = (int)lVar54;
      auVar41._0_8_ = uVar53;
      auVar41._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
      local_1d8 = uVar53 - local_208;
      local_198 = auVar41._8_8_;
      auVar39._8_4_ = (int)uVar56;
      auVar39._0_8_ = uVar55;
      auVar39._12_4_ = (int)(uVar56 >> 0x20);
      lStack_1d0 = (local_198 - lStack_200) - (ulonglong)(uVar53 < local_208);
      local_1e8 = uVar55 - local_1f8;
      local_188 = auVar39._8_8_;
      uStack_1e0 = (local_188 - uStack_1f0) - (ulonglong)(uVar55 < local_1f8);
      local_238 = local_180 - local_208;
      uStack_230 = (uVar49 - lStack_200) - (ulonglong)(local_180 < local_208);
      local_248 = local_258 - local_1f8;
      uStack_240 = (uVar48 - uStack_1f0) - (ulonglong)(local_258 < local_1f8);
      local_1b8 = local_238;
      uStack_1b0 = uStack_230;
      local_1a0 = uVar53;
      local_190 = uVar55;
      local_128 = local_1e8;
      lStack_120 = uStack_1e0;
      local_118 = local_1d8;
      lStack_110 = lStack_1d0;
      local_108 = local_248;
      lStack_100 = uStack_240;
      local_278 = uVar63;
      uStack_270 = uVar75;
      puVar60 = (ulonglong *)FUN_145533260(local_f8,&local_238,&local_1e8);
      puVar62 = (ulonglong *)FUN_145533260(&local_178,&local_248,&local_1d8);
      uVar63 = (ulonglong)(*puVar62 < *puVar60);
      uVar75 = puVar62[1] - puVar60[1];
      lVar79 = (puVar62[2] - puVar60[2]) - (ulonglong)(puVar62[1] < puVar60[1] || uVar75 < uVar63);
      uVar64 = (uint)(lVar79 != 0 || (uVar75 != uVar63 || *puVar62 != *puVar60)) |
               (uint)(lVar79 >> 0x3f);
      if (-1 < (int)uVar64) {
        local_248 = uVar55;
        uStack_240 = uVar56;
        local_238 = uVar53;
        uStack_230 = lVar54;
        local_278 = uVar67;
        uStack_270 = uVar69;
        local_1e8 = uVar68;
        uStack_1e0 = uVar57;
        local_1d8 = uVar71;
        lStack_1d0 = lVar76;
        if (uVar64 == 0) {
          if (iVar84 == 2) {
            local_238 = uVar71 - local_138;
            auVar46._8_4_ = (int)lVar76;
            auVar46._0_8_ = uVar71;
            auVar46._12_4_ = (int)((ulonglong)lVar76 >> 0x20);
            auVar45._8_4_ = (int)uVar57;
            auVar45._0_8_ = uVar68;
            auVar45._12_4_ = (int)(uVar57 >> 0x20);
            uStack_230 = (auVar46._8_8_ - lStack_130) - (ulonglong)(uVar71 < local_138);
            local_248 = uVar68 - local_1c8;
            uStack_240 = (auVar45._8_8_ - uStack_1c0) - (ulonglong)(uVar68 < local_1c8);
            local_1d8 = local_1a0 - local_208;
            lStack_1d0 = (local_198 - lStack_200) - (ulonglong)(local_1a0 < local_208);
            local_1e8 = local_190 - local_1f8;
            uStack_1e0 = (local_188 - uStack_1f0) - (ulonglong)(local_190 < local_1f8);
            local_268 = local_1d8;
            uStack_260 = lStack_1d0;
            local_278 = local_1e8;
            uStack_270 = uStack_1e0;
            puVar60 = (ulonglong *)FUN_14533c750(&local_178,&local_1d8,&local_248);
            puVar62 = (ulonglong *)FUN_14533c750(local_f8,&local_1e8,&local_238);
            uVar63 = (ulonglong)(*puVar62 < *puVar60);
            uVar75 = puVar62[1] - puVar60[1];
            if (puVar62[2] - puVar60[2] != (ulonglong)(puVar62[1] < puVar60[1] || uVar75 < uVar63)
                || (uVar75 != uVar63 || *puVar62 != *puVar60)) goto LAB_145531789;
            iVar84 = 1;
            uVar67 = uVar61;
            uVar69 = uVar73;
            uVar53 = uVar81;
            lVar54 = lVar82;
            uVar55 = uVar66;
            uVar56 = uVar78;
          }
          else {
LAB_145531789:
            piVar80 = (int *)(*param_1 + ((longlong)iVar84 + 1) * 0xc);
            uVar65 = (ulonglong)*(int *)(*param_1 + 8 + ((longlong)iVar84 + 1) * 0xc);
            local_1b8 = uVar65 * uVar1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar65;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar1;
            uStack_1b0 = SUB168(auVar15 * auVar33,8) - ((longlong)uVar65 >> 0x3f & uVar1);
            uVar65 = (ulonglong)piVar80[1];
            uVar71 = uVar65 * uVar1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar65;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar1;
            lVar76 = SUB168(auVar16 * auVar34,8) - ((longlong)uVar65 >> 0x3f & uVar1);
            uVar65 = (ulonglong)*piVar80;
            uStack_270._0_4_ = (undefined4)lVar76;
            uStack_270._4_4_ = (undefined4)((ulonglong)lVar76 >> 0x20);
            auVar50._8_4_ = (undefined4)uStack_270;
            auVar50._0_8_ = uVar71;
            auVar50._12_4_ = uStack_270._4_4_;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar65;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar1;
            local_218 = uVar65 * uVar1;
            uStack_210 = SUB168(auVar17 * auVar35,8) - ((longlong)uVar65 >> 0x3f & uVar1);
            local_238 = uVar71 - local_138;
            uStack_230 = (auVar50._8_8_ - lStack_130) - (ulonglong)(uVar71 < local_138);
            local_248 = local_218 - local_1c8;
            uStack_240 = (uStack_210 - uStack_1c0) - (ulonglong)(local_218 < local_1c8);
            local_1d8 = local_1a0 - local_208;
            lStack_1d0 = (local_198 - lStack_200) - (ulonglong)(local_1a0 < local_208);
            local_1e8 = local_190 - local_1f8;
            uStack_1e0 = (local_188 - uStack_1f0) - (ulonglong)(local_190 < local_1f8);
            local_268 = local_1d8;
            uStack_260 = lStack_1d0;
            local_278 = local_1e8;
            uStack_270 = uStack_1e0;
            puVar60 = (ulonglong *)FUN_14533c750(&local_178,&local_1d8,&local_248);
            puVar62 = (ulonglong *)FUN_14533c750(local_f8,&local_1e8,&local_238);
            uVar63 = (ulonglong)(*puVar62 < *puVar60);
            uVar75 = puVar62[1] - puVar60[1];
            local_1d8 = uVar81;
            lStack_1d0 = lVar82;
            local_1e8 = uVar66;
            uStack_1e0 = uVar78;
            local_248 = uVar55;
            uStack_240 = uVar56;
            local_238 = uVar53;
            uStack_230 = lVar54;
            uVar68 = local_218;
            uVar57 = uStack_210;
            uVar65 = local_1b8;
            uVar74 = uStack_1b0;
            if (puVar62[2] - puVar60[2] != (ulonglong)(puVar62[1] < puVar60[1] || uVar75 < uVar63)
                || (uVar75 != uVar63 || *puVar62 != *puVar60)) goto LAB_145531b22;
          }
          auVar40._8_4_ = (int)uVar57;
          auVar40._0_8_ = uVar68;
          auVar40._12_4_ = (int)(uVar57 >> 0x20);
          auVar44._8_4_ = (int)uVar56;
          auVar44._0_8_ = uVar55;
          auVar44._12_4_ = (int)(uVar56 >> 0x20);
          lVar83 = auVar40._8_8_;
          auVar42._8_4_ = (int)lVar76;
          auVar42._0_8_ = uVar71;
          auVar42._12_4_ = (int)((ulonglong)lVar76 >> 0x20);
          lVar79 = (lVar83 - auVar44._8_8_) - (ulonglong)(uVar68 < uVar55);
          lVar82 = auVar42._8_8_;
          uVar64 = (uint)(lVar79 >> 0x3f) | (uint)(lVar79 != 0 || uVar68 != uVar55);
          if (uVar64 == 0) {
            auVar43._8_4_ = (int)lVar54;
            auVar43._0_8_ = uVar53;
            auVar43._12_4_ = (int)((ulonglong)lVar54 >> 0x20);
            lVar79 = (lVar82 - auVar43._8_8_) - (ulonglong)(uVar71 < uVar53);
            uVar64 = (uint)(uVar71 != uVar53 || lVar79 != 0) | (uint)(lVar79 >> 0x3f);
          }
          lVar79 = (longlong)iVar84;
          uVar61 = uVar67;
          uVar73 = uVar69;
          uVar67 = uVar65;
          uVar69 = uVar74;
          while( true ) {
            lVar83 = (uVar48 - lVar83) - (ulonglong)(local_258 < uVar68);
            uVar72 = (uint)(lVar83 >> 0x3f) | (uint)(local_258 != uVar68 || lVar83 != 0);
            if (uVar72 == 0) {
              lVar82 = (uVar49 - lVar82) - (ulonglong)(local_180 < uVar71);
              uVar72 = (uint)(lVar82 >> 0x3f) | (uint)(local_180 != uVar71 || lVar82 != 0);
            }
            local_1d8 = uVar53;
            lStack_1d0 = lVar54;
            local_1e8 = uVar55;
            uStack_1e0 = uVar56;
            local_248 = uVar68;
            uStack_240 = uVar57;
            local_238 = uVar71;
            uStack_230 = lVar76;
            if (uVar72 != uVar64) break;
            lVar82 = lVar79 + 1;
            lVar79 = 0;
            if (lVar82 != iVar2) {
              lVar79 = lVar82;
            }
            piVar80 = (int *)(*param_1 + lVar79 * 0xc);
            uVar65 = (ulonglong)*(int *)(*param_1 + 8 + lVar79 * 0xc);
            local_218 = uVar65 * uVar1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar65;
            auVar36._8_8_ = 0;
            auVar36._0_8_ = uVar1;
            uStack_210 = SUB168(auVar18 * auVar36,8) - ((longlong)uVar65 >> 0x3f & uVar1);
            uVar65 = (ulonglong)piVar80[1];
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar65;
            auVar37._8_8_ = 0;
            auVar37._0_8_ = uVar1;
            lVar77 = SUB168(auVar19 * auVar37,8) - ((longlong)uVar65 >> 0x3f & uVar1);
            uVar74 = (ulonglong)*piVar80;
            uStack_260._0_4_ = (undefined4)lVar77;
            uStack_260._4_4_ = (undefined4)((ulonglong)lVar77 >> 0x20);
            auVar52._8_4_ = (undefined4)uStack_260;
            auVar52._0_8_ = uVar65 * uVar1;
            auVar52._12_4_ = uStack_260._4_4_;
            lVar82 = auVar52._8_8_;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar74;
            auVar38._8_8_ = 0;
            auVar38._0_8_ = uVar1;
            uVar63 = SUB168(auVar20 * auVar38,8) - ((longlong)uVar74 >> 0x3f & uVar1);
            uStack_270._0_4_ = (undefined4)uVar63;
            uStack_270._4_4_ = (undefined4)(uVar63 >> 0x20);
            auVar51._8_4_ = (undefined4)uStack_270;
            auVar51._0_8_ = uVar74 * uVar1;
            auVar51._12_4_ = uStack_270._4_4_;
            lVar83 = auVar51._8_8_;
            uVar53 = uVar71;
            lVar54 = lVar76;
            uVar55 = uVar68;
            uVar56 = uVar57;
            uVar61 = uVar67;
            uVar73 = uVar69;
            uVar67 = local_218;
            uVar69 = uStack_210;
            uVar68 = uVar74 * uVar1;
            uVar57 = uVar63;
            uVar71 = uVar65 * uVar1;
            lVar76 = lVar77;
          }
LAB_145531b22:
          local_268 = uVar61;
          uStack_260 = uVar73;
          local_278 = uVar67;
          uStack_270 = uVar69;
          FUN_145531fb0(&local_218,&local_1e8,&local_248,&local_268,&local_278,&local_158);
          param_2[8] = local_218;
          param_2[9] = uStack_210;
          *param_2 = uVar47;
          param_2[1] = uVar48;
          param_2[2] = (longlong)uVar48 >> 0x3f;
          param_2[3] = (longlong)uVar48 >> 0x3f;
          uVar47 = param_3[3];
          param_2[4] = param_3[2];
          param_2[5] = uVar47;
          param_2[6] = (longlong)uVar49 >> 0x3f;
          param_2[7] = (longlong)uVar49 >> 0x3f;
          param_2[10] = (longlong)uStack_210 >> 0x3f;
          param_2[0xb] = (longlong)uStack_210 >> 0x3f;
          goto LAB_1455315f9;
        }
        break;
      }
      iVar84 = iVar84 + 1;
      local_1a8 = local_1a8 + 0xc;
      local_res20 = local_res20 + 1;
      piVar80 = (int *)(*param_1 + local_1a8);
      uVar65 = (ulonglong)piVar80[2];
      uVar63 = uVar65 * uVar1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar65;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar1;
      uVar75 = SUB168(auVar12 * auVar30,8) - ((longlong)uVar65 >> 0x3f & uVar1);
      uVar65 = (ulonglong)piVar80[1];
      local_268 = uVar65 * uVar1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar65;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar1;
      uStack_260 = SUB168(auVar13 * auVar31,8) - ((longlong)uVar65 >> 0x3f & uVar1);
      uVar65 = (ulonglong)*piVar80;
      local_218 = uVar65 * uVar1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar65;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar1;
      uStack_210 = SUB168(auVar14 * auVar32,8) - ((longlong)uVar65 >> 0x3f & uVar1);
      uVar58 = local_258;
      uVar65 = uVar67;
      uVar74 = uVar69;
      uVar71 = uVar53;
      lVar76 = lVar54;
      uVar68 = uVar55;
      uVar57 = uVar56;
      uVar67 = uVar63;
      uStack_270 = uVar75;
      uVar69 = local_268;
      uStack_230 = uStack_260;
      uVar70 = local_218;
      uVar59 = uStack_210;
      local_248 = local_218;
      uStack_240 = uStack_210;
      local_238 = local_268;
      local_278 = uVar63;
      local_1e8 = uVar55;
      uStack_1e0 = uVar56;
      local_1d8 = uVar53;
      lStack_1d0 = lVar54;
    } while (local_res20 < iVar2 + -1);
  }
  local_218 = uVar61;
  uStack_210 = uVar73;
  local_178 = uVar66;
  uStack_170 = uVar78;
  local_168 = uVar81;
  lStack_160 = lVar82;
  local_268 = uVar65;
  uStack_260 = uVar74;
  FUN_1455321b0(&local_1b8,&local_178,&local_1e8,&local_248,&local_218,&local_268,&local_278,
                &local_158);
  *param_2 = local_158;
  param_2[1] = uStack_150;
  param_2[2] = (longlong)uStack_150 >> 0x3f;
  param_2[3] = (longlong)uStack_150 >> 0x3f;
  param_2[4] = local_148;
  param_2[5] = uStack_140;
  param_2[6] = (longlong)uStack_140 >> 0x3f;
  param_2[7] = (longlong)uStack_140 >> 0x3f;
  param_2[8] = local_1b8;
  param_2[9] = uStack_1b0;
  param_2[10] = (longlong)uStack_1b0 >> 0x3f;
  param_2[0xb] = (longlong)uStack_1b0 >> 0x3f;
LAB_1455315f9:
  param_2[0xc] = uVar1;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  return param_2;
}



// FUNCTION 145531bf0 FUN_145531bf0 body=206 status=ok
// SIG undefined FUN_145531bf0(void)

void FUN_145531bf0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)((longlong)puVar5 + (longlong)param_2 * 0xc);
  puVar3 = (undefined8 *)((longlong)puVar4 - 0xc);
  if (puVar5 < puVar3) {
    do {
      uVar1 = *puVar5;
      uVar2 = *(undefined4 *)(puVar5 + 1);
      *puVar5 = *puVar3;
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(puVar3 + 1);
      puVar5 = (undefined8 *)((longlong)puVar5 + 0xc);
      *puVar3 = uVar1;
      *(undefined4 *)(puVar3 + 1) = uVar2;
      puVar3 = (undefined8 *)((longlong)puVar3 - 0xc);
    } while (puVar5 < puVar3);
  }
  puVar3 = (undefined8 *)(param_1[1] + -0xc);
  if (puVar4 < puVar3) {
    do {
      uVar1 = *puVar4;
      uVar2 = *(undefined4 *)(puVar4 + 1);
      *puVar4 = *puVar3;
      *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar3 + 1);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      *puVar3 = uVar1;
      *(undefined4 *)(puVar3 + 1) = uVar2;
      puVar3 = (undefined8 *)((longlong)puVar3 + -0xc);
    } while (puVar4 < puVar3);
  }
  puVar3 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)(param_1[1] + -0xc);
  if (puVar3 < puVar4) {
    do {
      uVar1 = *puVar3;
      uVar2 = *(undefined4 *)(puVar3 + 1);
      *puVar3 = *puVar4;
      *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      *puVar4 = uVar1;
      *(undefined4 *)(puVar4 + 1) = uVar2;
      puVar4 = (undefined8 *)((longlong)puVar4 + -0xc);
    } while (puVar3 < puVar4);
  }
  return;
}



// FUNCTION 145531cc0 FUN_145531cc0 body=731 status=ok
// SIG undefined FUN_145531cc0(void)

longlong * FUN_145531cc0(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res18;
  undefined7 uStackX_19;
  ulonglong local_78 [7];
  ulonglong auStack_40 [5];
  
  uVar1 = param_1[1];
  if (uVar1 == 0 && *param_1 == 0) {
    local_78[6] = param_1[2];
    auStack_40[0] = param_1[3];
    auStack_40[1] = param_1[4];
    FUN_145532630(local_78 + 6,local_78 + 2);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = local_78[2];
    param_2[3] = local_78[3];
    param_2[4] = local_78[4];
    return param_2;
  }
  uVar2 = param_1[3];
  if (uVar2 == 0 && param_1[2] == 0) {
    local_78[6] = *param_1;
    auStack_40[0] = param_1[1];
    auStack_40[1] = param_1[4];
    FUN_145532630(local_78 + 6,local_78 + 2);
    *param_2 = local_78[2];
    param_2[1] = local_78[3];
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = local_78[4];
  }
  else {
    uVar9 = (longlong)uVar1 >> 0x3f;
    uVar11 = *param_1 ^ uVar9;
    local_78[0] = uVar11 - uVar9;
    local_78[1] = ((uVar1 ^ uVar9) - uVar9) - (ulonglong)(uVar11 < uVar9);
    uVar9 = (longlong)param_1[3] >> 0x3f;
    uVar11 = param_1[2] ^ uVar9;
    local_78[2] = uVar11 - uVar9;
    local_78[3] = ((param_1[3] ^ uVar9) - uVar9) - (ulonglong)(uVar11 < uVar9);
    FUN_145532ae0(local_78 + 6,local_78,local_78 + 2,local_res18);
    FUN_145532f80(&local_res18,local_78 + 6,param_1 + 4,local_res18);
    lVar8 = 0;
    iVar10 = 1;
    iVar12 = 1;
    lVar7 = lVar8;
    do {
      if (*(longlong *)((longlong)local_78 + lVar7 + 8) != 0) break;
      *(undefined8 *)((longlong)local_78 + lVar7 + 0x38) = 0;
      iVar12 = iVar12 + -1;
      lVar7 = lVar7 + -8;
    } while (-8 < lVar7);
    uVar11 = CONCAT71(uStackX_19,local_res18);
    uVar9 = local_78[iVar12];
    local_78[(longlong)iVar12 + 6] = uVar9 / uVar11;
    uVar9 = uVar9 % uVar11;
    lVar7 = (longlong)(iVar12 + -1);
    if (-1 < iVar12 + -1) {
      do {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar11;
        auVar5._8_8_ = uVar9;
        auVar5._0_8_ = local_78[lVar7];
        uVar9 = SUB168(auVar5 % auVar3,0);
        local_78[lVar7 + 6] = SUB168(auVar5 / auVar3,0);
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    do {
      if (*(longlong *)((longlong)local_78 + lVar8 + 0x18) != 0) break;
      *(undefined8 *)((longlong)local_78 + lVar8 + 8) = 0;
      iVar10 = iVar10 + -1;
      lVar8 = lVar8 + -8;
    } while (-8 < lVar8);
    uVar9 = local_78[(longlong)iVar10 + 2];
    local_78[iVar10] = uVar9 / uVar11;
    uVar9 = uVar9 % uVar11;
    lVar7 = (longlong)(iVar10 + -1);
    if (-1 < iVar10 + -1) {
      do {
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar11;
        auVar6._8_8_ = uVar9;
        auVar6._0_8_ = local_78[lVar7 + 2];
        uVar9 = SUB168(auVar6 % auVar4,0);
        local_78[lVar7] = SUB168(auVar6 / auVar4,0);
        lVar7 = lVar7 + -1;
      } while (-1 < lVar7);
    }
    if ((longlong)uVar1 < 0) {
      bVar13 = local_78[6] != 0;
      local_78[6] = -local_78[6];
      auStack_40[0] = -(ulonglong)bVar13 - auStack_40[0];
    }
    if ((longlong)uVar2 < 0) {
      bVar13 = local_78[0] != 0;
      local_78[0] = -local_78[0];
      local_78[1] = -(ulonglong)bVar13 - local_78[1];
    }
    uVar1 = param_1[4];
    *param_2 = local_78[6];
    param_2[1] = auStack_40[0];
    param_2[2] = local_78[0];
    param_2[3] = local_78[1];
    param_2[4] = uVar1 / uVar11;
  }
  return param_2;
}



// FUNCTION 145531fb0 FUN_145531fb0 body=497 status=ok
// SIG undefined FUN_145531fb0(void)

ulonglong *
FUN_145531fb0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
             ulonglong *param_5,ulonglong *param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong local_80;
  ulonglong uStack_78;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [24];
  undefined1 local_38 [32];
  
  puVar3 = &local_80;
  if (param_2[1] == param_3[1] && *param_2 == *param_3) {
    uVar2 = param_2[2];
    uVar8 = param_2[3];
    uVar1 = param_3[2];
    uVar5 = param_3[3];
    local_98 = param_6[2];
    uStack_90 = param_6[3];
    puVar3 = &local_98;
  }
  else {
    uVar2 = *param_2;
    uVar8 = param_2[1];
    uVar1 = *param_3;
    uVar5 = param_3[1];
    local_80 = *param_6;
    uStack_78 = param_6[1];
  }
  uVar7 = *puVar3;
  local_80 = uVar7 - uVar2;
  uStack_78 = (puVar3[1] - uVar8) - (ulonglong)(uVar7 < uVar2);
  if (local_80 == 0 && uStack_78 == 0) {
    uVar1 = param_4[1];
    *param_1 = *param_4;
    param_1[1] = uVar1;
    return param_1;
  }
  local_98 = uVar1 - uVar7;
  uStack_90 = (uVar5 - puVar3[1]) - (ulonglong)(uVar1 < uVar7);
  if (local_98 == 0 && uStack_90 == 0) {
    uVar1 = param_5[1];
    *param_1 = *param_5;
    param_1[1] = uVar1;
  }
  else {
    uVar7 = (uVar5 - uVar8) - (ulonglong)(uVar1 < uVar2);
    puVar3 = (ulonglong *)FUN_145532810(local_50,param_5,&local_80);
    puVar4 = (ulonglong *)FUN_145532810(local_38,param_4,&local_98);
    local_68 = *puVar4 + *puVar3;
    uVar5 = (ulonglong)CARRY8(*puVar4,*puVar3);
    uVar8 = puVar4[1] + puVar3[1];
    local_60 = uVar8 + uVar5;
    local_58 = puVar4[2] + puVar3[2] +
               (ulonglong)(CARRY8(puVar4[1],puVar3[1]) || CARRY8(uVar8,uVar5));
    uVar5 = (longlong)uVar7 >> 0x3f;
    uVar8 = uVar1 - uVar2 ^ uVar5;
    uVar6 = (uint)(uVar1 - uVar2 != 0 || uVar7 != 0) | (uint)((longlong)uVar7 >> 0x3f);
    local_98 = uVar8 - uVar5;
    uStack_90 = ((uVar7 ^ uVar5) - uVar5) - (ulonglong)(uVar8 < uVar5);
    FUN_145533370(&local_68,&local_98,-uVar6,&local_80);
    if ((int)uVar6 < 0) {
      bVar9 = local_80 != 0;
      local_80 = -local_80;
      uStack_78 = -(ulonglong)bVar9 - uStack_78;
    }
    *param_1 = local_80;
    param_1[1] = uStack_78;
  }
  return param_1;
}



// FUNCTION 1455321b0 FUN_1455321b0 body=1130 status=ok
// SIG undefined FUN_1455321b0(void)

ulonglong *
FUN_1455321b0(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3,ulonglong *param_4,
             ulonglong *param_5,ulonglong *param_6,longlong param_7,ulonglong *param_8)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  ulonglong local_158;
  ulonglong uStack_150;
  longlong local_148;
  ulonglong local_140;
  ulonglong uStack_138;
  longlong local_130;
  ulonglong local_128;
  ulonglong uStack_120;
  longlong local_118;
  ulonglong local_110;
  ulonglong local_108;
  longlong local_100;
  ulonglong local_f8;
  ulonglong uStack_f0;
  ulonglong local_e8;
  ulonglong uStack_e0;
  longlong local_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  longlong lStack_b8;
  ulonglong local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  ulonglong uStack_98;
  longlong local_90;
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  
  uVar10 = *param_2;
  uVar14 = param_2[2];
  uVar13 = param_2[3];
  uVar6 = param_8[2];
  local_c0 = uVar14 - uVar6;
  uVar9 = *param_8;
  lStack_b8 = (uVar13 - param_8[3]) - (ulonglong)(uVar14 < uVar6);
  uVar12 = param_2[1];
  local_d0 = uVar10 - uVar9;
  lStack_c8 = (uVar12 - param_8[1]) - (ulonglong)(uVar10 < uVar9);
  if ((lStack_b8 == 0 && local_c0 == 0) && (lStack_c8 == 0 && local_d0 == 0)) {
    local_f8 = *param_5;
    uStack_f0 = param_5[1];
  }
  else {
    uVar1 = param_3[2];
    local_78 = uVar1 - uVar6;
    uVar2 = param_3[3];
    uStack_70 = (uVar2 - param_8[3]) - (ulonglong)(uVar1 < uVar6);
    uVar6 = *param_3;
    uVar3 = param_3[1];
    local_88 = uVar6 - uVar9;
    uStack_80 = (uVar3 - param_8[1]) - (ulonglong)(uVar6 < uVar9);
    if ((uStack_70 == 0 && local_78 == 0) && (uStack_80 == 0 && local_88 == 0)) {
      local_f8 = *param_6;
      uStack_f0 = param_6[1];
    }
    else {
      local_50 = uVar1 - uVar14;
      lStack_48 = (uVar2 - uVar13) - (ulonglong)(uVar1 < uVar14);
      local_60 = uVar6 - uVar10;
      lStack_58 = (uVar3 - uVar12) - (ulonglong)(uVar6 < uVar10);
      local_a0 = param_4[2] - uVar1;
      uStack_98 = (param_4[3] - uVar2) - (ulonglong)(param_4[2] < uVar1);
      local_b0 = *param_4 - uVar6;
      uStack_a8 = (param_4[1] - uVar3) - (ulonglong)(*param_4 < uVar6);
      local_158 = uVar14 - param_4[2];
      uStack_150 = (uVar13 - param_4[3]) - (ulonglong)(uVar14 < param_4[2]);
      local_140 = uVar10 - *param_4;
      uStack_138 = (uVar12 - param_4[1]) - (ulonglong)(uVar10 < *param_4);
      local_f8 = local_140;
      uStack_f0 = uStack_138;
      local_e8 = local_158;
      uStack_e0 = uStack_150;
      puVar4 = (ulonglong *)FUN_145533260(&local_110,&local_c0,&local_60);
      puVar5 = (ulonglong *)FUN_145533260(&local_140,&local_d0,&local_50);
      local_140 = *puVar5 - *puVar4;
      uVar10 = (ulonglong)(*puVar5 < *puVar4);
      uVar14 = puVar5[1] - puVar4[1];
      uStack_138 = uVar14 - uVar10;
      local_130 = (puVar5[2] - puVar4[2]) - (ulonglong)(puVar5[1] < puVar4[1] || uVar14 < uVar10);
      local_128 = local_140;
      uStack_120 = uStack_138;
      local_118 = local_130;
      puVar4 = (ulonglong *)FUN_145533260(&local_110,&local_78,&local_b0);
      puVar5 = (ulonglong *)FUN_145533260(&local_158,&local_88,&local_a0);
      uVar9 = *puVar5 - *puVar4;
      uVar10 = (ulonglong)(*puVar5 < *puVar4);
      uVar13 = puVar5[1] - puVar4[1];
      uVar14 = uVar13 - uVar10;
      lVar11 = (puVar5[2] - puVar4[2]) - (ulonglong)(puVar5[1] < puVar4[1] || uVar13 < uVar10);
      local_110 = uVar9;
      local_108 = uVar14;
      local_100 = lVar11;
      puVar4 = (ulonglong *)FUN_145533260(&local_158,&local_c0,&local_f8);
      puVar5 = (ulonglong *)FUN_145533260(&local_60,&local_d0,&local_e8);
      local_158 = *puVar5 - *puVar4;
      uVar10 = (ulonglong)(*puVar5 < *puVar4);
      uVar13 = puVar5[1] - puVar4[1];
      uStack_150 = uVar13 - uVar10;
      local_148 = (puVar5[2] - puVar4[2]) - (ulonglong)(puVar5[1] < puVar4[1] || uVar13 < uVar10);
      bVar15 = CARRY8(local_128,uVar9);
      uVar9 = local_128 + uVar9;
      bVar16 = CARRY8(uStack_120,uVar14);
      uVar14 = uStack_120 + uVar14;
      uVar6 = uVar14 + bVar15;
      local_128 = uVar9 + local_158;
      uVar10 = (ulonglong)CARRY8(uVar9,local_158);
      uVar13 = uVar6 + uStack_150;
      uStack_120 = uVar13 + uVar10;
      local_118 = local_130 + lVar11 + (ulonglong)(bVar16 || CARRY8(uVar14,(ulonglong)bVar15)) +
                  local_148 + (ulonglong)(CARRY8(uVar6,uStack_150) || CARRY8(uVar13,uVar10));
      FUN_144cd89a0(&local_140,param_7,&local_b0);
      uVar10 = uStack_98;
      uVar14 = local_a0;
      if (*(longlong *)(param_7 + 8) < 0) {
        uVar14 = local_a0 - local_140;
        uVar10 = (uStack_98 - uStack_138) - (ulonglong)(local_a0 < local_140);
        local_90 = (local_90 - local_130) -
                   (ulonglong)
                   (uStack_98 < uStack_138 ||
                   uStack_98 - uStack_138 < (ulonglong)(local_a0 < local_140));
      }
      FUN_144cd89a0(&local_158,param_6,&local_88);
      uVar13 = uStack_70;
      uVar6 = local_78;
      if ((longlong)param_6[1] < 0) {
        uVar6 = local_78 - local_158;
        uVar13 = (uStack_70 - uStack_150) - (ulonglong)(local_78 < local_158);
        local_68 = (local_68 - local_148) -
                   (ulonglong)
                   (uStack_70 < uStack_150 ||
                   uStack_70 - uStack_150 < (ulonglong)(local_78 < local_158));
      }
      FUN_144cd89a0(&local_110,param_5,&local_f8);
      uVar9 = local_e8;
      uVar12 = uStack_e0;
      if ((longlong)param_5[1] < 0) {
        uVar9 = local_e8 - local_110;
        uVar12 = (uStack_e0 - local_108) - (ulonglong)(local_e8 < local_110);
        local_d8 = (local_d8 - local_100) -
                   (ulonglong)
                   (uStack_e0 < local_108 ||
                   uStack_e0 - local_108 < (ulonglong)(local_e8 < local_110));
      }
      uVar7 = uStack_f0 + uStack_80 + (ulonglong)CARRY8(local_f8,local_88);
      uVar1 = (ulonglong)
              (CARRY8(uStack_f0,uStack_80) ||
              CARRY8(uStack_f0 + uStack_80,(ulonglong)CARRY8(local_f8,local_88)));
      uVar8 = uVar9 + uVar6 + uVar1;
      local_d0 = local_f8 + local_88 + local_b0;
      uVar2 = (ulonglong)CARRY8(local_f8 + local_88,local_b0);
      uVar3 = uVar7 + uStack_a8;
      lStack_c8 = uVar3 + uVar2;
      uVar2 = (ulonglong)(CARRY8(uVar7,uStack_a8) || CARRY8(uVar3,uVar2));
      uVar3 = uVar8 + uVar14;
      local_c0 = uVar3 + uVar2;
      lStack_b8 = uVar12 + uVar13 + (ulonglong)(CARRY8(uVar9,uVar6) || CARRY8(uVar9 + uVar6,uVar1))
                  + uVar10 + (ulonglong)(CARRY8(uVar8,uVar14) || CARRY8(uVar3,uVar2));
      FUN_145532920(&local_d0,&local_128,0xffffffff,&local_f8);
    }
  }
  *param_1 = local_f8;
  param_1[1] = uStack_f0;
  return param_1;
}



// FUNCTION 145532630 FUN_145532630 body=352 status=ok
// SIG undefined FUN_145532630(void)

longlong * FUN_145532630(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 local_res18;
  undefined7 uStackX_19;
  ulonglong local_28 [4];
  
  uVar1 = param_1[1];
  if (uVar1 == 0 && *param_1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 1;
    return param_2;
  }
  uVar5 = (longlong)uVar1 >> 0x3f;
  uVar7 = *param_1 ^ uVar5;
  local_28[0] = uVar7 - uVar5;
  local_28[1] = ((uVar1 ^ uVar5) - uVar5) - (ulonglong)(uVar7 < uVar5);
  FUN_145532f80(&local_res18,local_28,param_1 + 2,local_res18);
  lVar4 = 0;
  iVar6 = 1;
  do {
    if (*(longlong *)((longlong)local_28 + lVar4 + 8) != 0) break;
    *(undefined8 *)((longlong)local_28 + lVar4 + 0x18) = 0;
    iVar6 = iVar6 + -1;
    lVar4 = lVar4 + -8;
  } while (-8 < lVar4);
  uVar7 = CONCAT71(uStackX_19,local_res18);
  uVar5 = local_28[iVar6];
  local_28[(longlong)iVar6 + 2] = uVar5 / uVar7;
  uVar5 = uVar5 % uVar7;
  lVar4 = (longlong)(iVar6 + -1);
  if (-1 < iVar6 + -1) {
    do {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar7;
      auVar3._8_8_ = uVar5;
      auVar3._0_8_ = local_28[lVar4];
      uVar5 = SUB168(auVar3 % auVar2,0);
      local_28[lVar4 + 2] = SUB168(auVar3 / auVar2,0);
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  if ((longlong)uVar1 < 0) {
    bVar8 = local_28[2] != 0;
    local_28[2] = -local_28[2];
    local_28[3] = -(ulonglong)bVar8 - local_28[3];
  }
  uVar1 = param_1[2];
  *param_2 = local_28[2];
  param_2[1] = local_28[3];
  param_2[2] = uVar1 / uVar7;
  return param_2;
}



// FUNCTION 145532790 FUN_145532790 body=121 status=ok
// SIG undefined FUN_145532790(void)

int FUN_145532790(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  uVar4 = 0;
  uVar5 = uVar4;
  do {
    lVar1 = *(longlong *)(param_1 + uVar4 * 8);
    if (lVar1 != 0) {
      iVar2 = (*(code *)PTR_FUN_14c6da350)((-(uint)lVar1 & (uint)lVar1) - 1);
      uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
      iVar3 = (*(code *)PTR_FUN_14c6da350)((-uVar6 & uVar6) - 1);
      if (0x1f < iVar2) {
        iVar2 = iVar3 + 0x20;
      }
      return iVar2 + (int)uVar5 * 0x40;
    }
    uVar5 = (ulonglong)((int)uVar5 + 1);
    uVar4 = uVar4 + 1;
  } while ((longlong)uVar4 < 2);
  return 0x80;
}



// FUNCTION 145532810 FUN_145532810 body=262 status=ok
// SIG undefined FUN_145532810(void)

longlong * FUN_145532810(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

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
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar1;
  uVar11 = SUB168(auVar5 * auVar8,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  uVar13 = uVar3 * uVar2 + uVar11;
  uVar4 = param_3[1];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar4;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  lVar12 = uVar3 * uVar4 + SUB168(auVar7 * auVar10,8) +
           SUB168(auVar6 * auVar9,8) + (ulonglong)CARRY8(uVar3 * uVar2,uVar11) +
           (ulonglong)CARRY8(uVar1 * uVar4,uVar13);
  if ((longlong)uVar3 < 0) {
    lVar12 = lVar12 - uVar2;
  }
  if ((longlong)uVar4 < 0) {
    lVar12 = lVar12 - *param_2;
  }
  *param_1 = uVar1 * uVar2;
  param_1[2] = lVar12;
  param_1[1] = uVar1 * uVar4 + uVar13;
  return param_1;
}



// FUNCTION 145532920 FUN_145532920 body=432 status=ok
// SIG undefined FUN_145532920(void)

void FUN_145532920(ulonglong *param_1,undefined8 param_2,uint param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  bool bVar10;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = param_1[3];
  uVar8 = (longlong)uVar1 >> 0x3f;
  local_60 = (*param_1 ^ uVar8) - uVar8;
  uVar5 = (ulonglong)((*param_1 ^ uVar8) < uVar8);
  uVar3 = (param_1[1] ^ uVar8) - uVar8;
  lStack_58 = uVar3 - uVar5;
  uVar5 = (ulonglong)((param_1[1] ^ uVar8) < uVar8 || uVar3 < uVar5);
  uVar3 = (param_1[2] ^ uVar8) - uVar8;
  local_50 = uVar3 - uVar5;
  lStack_48 = ((uVar1 ^ uVar8) - uVar8) - (ulonglong)((param_1[2] ^ uVar8) < uVar8 || uVar3 < uVar5)
  ;
  FUN_147e5d6c0(&local_60,param_2,&local_40,&local_78);
  uVar4 = CONCAT44(uStack_24,uStack_28);
  uVar8 = CONCAT44(uStack_2c,local_30);
  uVar3 = CONCAT44(uStack_34,uStack_38);
  uVar5 = CONCAT44(uStack_3c,local_40);
  uVar7 = 0;
  if ((longlong)uVar1 < 0) {
    uVar5 = -CONCAT44(uStack_3c,local_40);
    uVar1 = (ulonglong)(CONCAT44(uStack_3c,local_40) != 0);
    uVar3 = -CONCAT44(uStack_34,uStack_38) - uVar1;
    uVar1 = (ulonglong)
            (CONCAT44(uStack_34,uStack_38) != 0 || (ulonglong)-CONCAT44(uStack_34,uStack_38) < uVar1
            );
    uVar8 = -CONCAT44(uStack_2c,local_30) - uVar1;
    uVar4 = -(ulonglong)
             (CONCAT44(uStack_2c,local_30) != 0 || (ulonglong)-CONCAT44(uStack_2c,local_30) < uVar1)
            - CONCAT44(uStack_24,uStack_28);
    bVar9 = local_78 != 0;
    local_78 = -local_78;
    bVar10 = lStack_70 != 0;
    uVar1 = -lStack_70;
    lStack_70 = uVar1 - bVar9;
    local_68 = -(ulonglong)(bVar10 || uVar1 < bVar9) - local_68;
  }
  if (local_68 == 0) {
    uVar7 = (uint)(lStack_70 == 0 && local_78 == 0);
  }
  if (((uint)(local_68 >> 0x3f) | 1 - uVar7) == param_3) {
    uVar6 = (ulonglong)(char)param_3;
    bVar9 = CARRY8(uVar5,uVar6);
    uVar5 = uVar5 + uVar6;
    uVar6 = (longlong)uVar6 >> 0x3f;
    bVar10 = CARRY8(uVar3,uVar6);
    uVar1 = uVar3 + uVar6;
    uVar3 = uVar1 + bVar9;
    uVar1 = (ulonglong)(bVar10 || CARRY8(uVar1,(ulonglong)bVar9));
    bVar9 = CARRY8(uVar8,uVar6);
    uVar2 = uVar8 + uVar6;
    uVar8 = uVar2 + uVar1;
    uVar4 = uVar4 + uVar6 + (ulonglong)(bVar9 || CARRY8(uVar2,uVar1));
  }
  *param_4 = uVar5;
  param_4[1] = uVar3;
  param_4[2] = uVar8;
  param_4[3] = uVar4;
  return;
}



// FUNCTION 145532ae0 FUN_145532ae0 body=1171 status=ok
// SIG undefined FUN_145532ae0(void)

ulonglong * FUN_145532ae0(ulonglong *param_1,ulonglong *param_2,undefined4 *param_3)

{
  ulonglong *puVar1;
  size_t _Size;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  sbyte sVar12;
  longlong lVar13;
  ulonglong *puVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong local_68 [4];
  ulonglong local_48;
  ulonglong uStack_40;
  
  iVar16 = 0;
  lVar11 = 0;
  local_68[0] = *param_2;
  local_68[1] = param_2[1];
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined4 *)param_1 = *param_3;
  *(undefined4 *)((longlong)param_1 + 4) = uVar4;
  *(undefined4 *)(param_1 + 1) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar6;
  do {
    if (local_68[lVar11] != 0) {
      uVar3 = local_68[iVar16];
      uVar15 = (uint)uVar3;
      iVar9 = (*(code *)PTR_FUN_14c6da350)((-uVar15 & uVar15) - 1);
      uVar15 = (uint)(uVar3 >> 0x20);
      iVar10 = (*(code *)PTR_FUN_14c6da350)((-uVar15 & uVar15) - 1);
      if (0x1f < iVar9) {
        iVar9 = iVar10 + 0x20;
      }
      uVar15 = iVar16 * 0x40 + iVar9;
      goto LAB_145532b65;
    }
    iVar16 = iVar16 + 1;
    lVar11 = lVar11 + 1;
  } while (lVar11 < 2);
  uVar15 = 0x80;
LAB_145532b65:
  FUN_1455334d0(local_68,uVar15);
  uVar8 = FUN_145532790(param_1);
  FUN_1455334d0(param_1);
  uVar3 = local_68[1];
  uVar7 = local_68[0];
  if ((int)uVar15 < (int)uVar8) {
    uVar8 = uVar15;
  }
LAB_145532bb0:
  if (uVar7 == *param_1 && uVar3 == param_1[1]) {
    iVar16 = (int)uVar8 >> 6;
    lVar11 = (longlong)iVar16;
    if ((uVar8 & 0x3f) == 0) {
      if (lVar11 < 2) {
        puVar14 = param_1 + 1;
        lVar13 = 2 - lVar11;
        do {
          *puVar14 = puVar14[-lVar11];
          puVar14 = puVar14 + -1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
    else {
      sVar12 = (sbyte)(uVar8 & 0x3f);
      if ((longlong)(iVar16 + 1) < 2) {
        puVar14 = param_1 + (1 - lVar11);
        lVar13 = 2 - (longlong)(iVar16 + 1);
        do {
          puVar1 = puVar14 + -1;
          uVar3 = *puVar14;
          puVar14 = puVar14 + -1;
          puVar14[lVar11 + 1] = *puVar1 >> (0x40U - sVar12 & 0x3f) | uVar3 << sVar12;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      param_1[lVar11] = *param_1 << sVar12;
    }
    iVar16 = iVar16 + -1;
    if (-1 < iVar16) {
      _Size = (longlong)iVar16 * 8 + 8;
      memset((void *)((((longlong)iVar16 * 8 + 8) - _Size) + (longlong)param_1),0,_Size);
    }
    param_1[1] = param_1[1] & 0x7ff;
    return param_1;
  }
  uVar2 = param_1[1];
  if (uVar3 <= uVar2 && (uVar7 <= *param_1 || (uVar3 < uVar2 || uVar3 > uVar2))) {
    local_48 = *param_1 - uVar7;
    uStack_40 = (param_1[1] - uVar3) - (ulonglong)(*param_1 < uVar7);
    iVar16 = 0;
    lVar11 = 0;
    *param_1 = local_48;
    param_1[1] = uStack_40;
LAB_145532d50:
    uVar2 = param_1[lVar11];
    if (uVar2 == 0) goto code_r0x000145532d59;
    iVar9 = (*(code *)PTR_FUN_14c6da350)((-(uint)uVar2 & (uint)uVar2) - 1);
    uVar15 = (uint)(uVar2 >> 0x20);
    iVar10 = (*(code *)PTR_FUN_14c6da350)((-uVar15 & uVar15) - 1);
    if (0x1f < iVar9) {
      iVar9 = iVar10 + 0x20;
    }
    uVar15 = iVar16 * 0x40 + iVar9;
    iVar9 = (int)uVar15 >> 6;
    lVar11 = (longlong)iVar9;
    iVar16 = -iVar9;
    uVar15 = uVar15 & 0x3f;
    if (uVar15 != 0) {
      lVar13 = (longlong)iVar16 + 1;
      sVar12 = (sbyte)uVar15;
      if (0 < lVar13) {
        puVar14 = param_1 + lVar11;
        lVar17 = lVar13;
        do {
          puVar14[-lVar11] = puVar14[1] << (0x40U - sVar12 & 0x3f) | *puVar14 >> sVar12;
          lVar17 = lVar17 + -1;
          puVar14 = puVar14 + 1;
        } while (lVar17 != 0);
      }
      iVar9 = 2 - iVar9;
      param_1[lVar13] = param_1[1] >> sVar12;
      goto LAB_145532e4b;
    }
    goto LAB_145532dbd;
  }
  local_68[2] = uVar7 - *param_1;
  local_68[3] = (uVar3 - param_1[1]) - (ulonglong)(uVar7 < *param_1);
  iVar16 = 0;
  lVar11 = 0;
  local_68[0] = uVar7 - *param_1;
  local_68[1] = local_68[3];
LAB_145532c02:
  if (local_68[lVar11] == 0) goto code_r0x000145532c0c;
  uVar15 = (uint)local_68[lVar11];
  iVar9 = (*(code *)PTR_FUN_14c6da350)((-uVar15 & uVar15) - 1);
  iVar10 = (*(code *)PTR_FUN_14c6da350)();
  if (0x1f < iVar9) {
    iVar9 = iVar10 + 0x20;
  }
  uVar15 = iVar16 * 0x40 + iVar9;
  iVar16 = (int)uVar15 >> 6;
  lVar11 = (longlong)iVar16;
  iVar16 = -iVar16;
  uVar15 = uVar15 & 0x3f;
  if (uVar15 != 0) {
    lVar13 = (longlong)iVar16 + 1;
    sVar12 = (sbyte)uVar15;
    if (0 < lVar13) {
      puVar14 = local_68 + lVar11 + 1;
      lVar17 = lVar13;
      do {
        puVar1 = puVar14 + -1;
        uVar3 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar14[-2 - lVar11] = *puVar1 >> sVar12 | uVar3 << (0x40U - sVar12 & 0x3f);
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    local_68[lVar13] = local_68[1] >> sVar12;
    iVar16 = iVar16 + 2;
    goto LAB_145532d04;
  }
  goto LAB_145532c6a;
code_r0x000145532d59:
  iVar16 = iVar16 + 1;
  lVar11 = lVar11 + 1;
  if (1 < lVar11) goto code_r0x000145532d63;
  goto LAB_145532d50;
code_r0x000145532d63:
  lVar11 = 2;
  iVar16 = -2;
LAB_145532dbd:
  iVar9 = iVar16 + 2;
  lVar13 = (longlong)iVar9;
  puVar14 = param_1;
  if (0 < iVar9) {
    do {
      *puVar14 = puVar14[lVar11];
      lVar13 = lVar13 + -1;
      puVar14 = puVar14 + 1;
    } while (lVar13 != 0);
  }
LAB_145532e4b:
  if (iVar9 < 2) {
    memset(param_1 + iVar9,0,lVar11 << 3);
  }
  goto LAB_145532bb0;
code_r0x000145532c0c:
  iVar16 = iVar16 + 1;
  lVar11 = lVar11 + 1;
  if (1 < lVar11) goto code_r0x000145532c16;
  goto LAB_145532c02;
code_r0x000145532c16:
  iVar16 = -2;
  lVar11 = 2;
LAB_145532c6a:
  iVar16 = iVar16 + 2;
  lVar13 = 0;
  if (0 < iVar16) {
    do {
      local_68[lVar13] = local_68[lVar11 + lVar13];
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar16);
  }
LAB_145532d04:
  uVar3 = local_68[1];
  uVar7 = local_68[0];
  if (iVar16 < 2) {
    memset(local_68 + iVar16,0,lVar11 << 3);
    uVar3 = local_68[1];
    uVar7 = local_68[0];
  }
  goto LAB_145532bb0;
}



// FUNCTION 145532f80 FUN_145532f80 body=728 status=ok
// SIG undefined FUN_145532f80(void)

ulonglong * FUN_145532f80(ulonglong *param_1,undefined4 *param_2,ulonglong *param_3)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  sbyte sVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined8 local_38;
  ulonglong auStack_30 [3];
  
  local_38._0_4_ = *param_2;
  local_38._4_4_ = param_2[1];
  auStack_30[0] = *(ulonglong *)(param_2 + 2);
  iVar14 = 0;
  *param_1 = *param_3;
  lVar8 = 0;
  do {
    if ((&local_38)[lVar8] != 0) {
      uVar2 = (&local_38)[iVar14];
      uVar12 = (uint)uVar2;
      iVar11 = (*(code *)PTR_FUN_14c6da350)((-uVar12 & uVar12) - 1);
      uVar12 = (uint)((ulonglong)uVar2 >> 0x20);
      iVar6 = (*(code *)PTR_FUN_14c6da350)((-uVar12 & uVar12) - 1);
      if (0x1f < iVar11) {
        iVar11 = iVar6 + 0x20;
      }
      iVar11 = iVar14 * 0x40 + iVar11;
      goto LAB_145532ff9;
    }
    iVar14 = iVar14 + 1;
    lVar8 = lVar8 + 1;
  } while (lVar8 < 2);
  iVar11 = 0x80;
LAB_145532ff9:
  FUN_1455334d0(&local_38);
  uVar3 = *param_1;
  uVar12 = (uint)uVar3;
  iVar14 = (*(code *)PTR_FUN_14c6da350)((-uVar12 & uVar12) - 1);
  uVar12 = (uint)(uVar3 >> 0x20);
  iVar6 = (*(code *)PTR_FUN_14c6da350)((-uVar12 & uVar12) - 1);
  if (0x1f < iVar14) {
    iVar14 = iVar6 + 0x20;
  }
  *param_1 = *param_1 >> ((byte)iVar14 & 0x3f);
  local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
  uVar3 = CONCAT44(local_38._4_4_,(undefined4)local_38);
  if (iVar11 < iVar14) {
    local_38 = CONCAT44(local_38._4_4_,(undefined4)local_38);
    uVar3 = CONCAT44(local_38._4_4_,(undefined4)local_38);
    iVar14 = iVar11;
  }
LAB_145533051:
  while( true ) {
    uVar5 = auStack_30[0];
    uVar4 = *param_1;
    if (auStack_30[0] == 0 && uVar3 == uVar4) {
      *param_1 = uVar4 << ((byte)iVar14 & 0x3f) & 0x7ffffffffffff;
      return param_1;
    }
    if (uVar4 < uVar3 || auStack_30[0] != 0) break;
    uVar13 = uVar4 - uVar3;
    *param_1 = uVar13;
    auStack_30[0] = (((longlong)uVar4 >> 0x3f) - auStack_30[0]) - (ulonglong)(uVar4 < uVar3);
    iVar11 = (*(code *)PTR_FUN_14c6da350)((-(uint)uVar13 & (uint)uVar13) - 1);
    uVar12 = (uint)(uVar13 >> 0x20);
    iVar6 = (*(code *)PTR_FUN_14c6da350)((-uVar12 & uVar12) - 1);
    if (0x1f < iVar11) {
      iVar11 = iVar6 + 0x20;
    }
    *param_1 = *param_1 >> ((byte)iVar11 & 0x3f);
    auStack_30[0] = uVar5;
  }
  local_38 = uVar3 - uVar4;
  auStack_30[1] = local_38;
  auStack_30[2] = (auStack_30[0] - ((longlong)uVar4 >> 0x3f)) - (ulonglong)(uVar3 < uVar4);
  iVar11 = 0;
  lVar8 = 0;
  auStack_30[0] = auStack_30[2];
LAB_1455330b0:
  if ((&local_38)[lVar8] == 0) goto code_r0x0001455330ba;
  uVar12 = (uint)(&local_38)[lVar8];
  iVar6 = (*(code *)PTR_FUN_14c6da350)((-uVar12 & uVar12) - 1);
  iVar7 = (*(code *)PTR_FUN_14c6da350)();
  if (0x1f < iVar6) {
    iVar6 = iVar7 + 0x20;
  }
  uVar12 = iVar11 * 0x40 + iVar6;
  iVar11 = (int)uVar12 >> 6;
  lVar8 = (longlong)iVar11;
  iVar11 = -iVar11;
  uVar12 = uVar12 & 0x3f;
  if (uVar12 != 0) {
    lVar10 = (longlong)iVar11 + 1;
    sVar9 = (sbyte)uVar12;
    if (0 < lVar10) {
      puVar15 = auStack_30 + lVar8;
      lVar16 = lVar10;
      do {
        puVar1 = puVar15 + -1;
        uVar3 = *puVar15;
        puVar15 = puVar15 + 1;
        puVar15[-2 - lVar8] = *puVar1 >> sVar9 | uVar3 << (0x40U - sVar9 & 0x3f);
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    (&local_38)[lVar10] = auStack_30[0] >> sVar9;
    iVar11 = iVar11 + 2;
    goto LAB_1455331b7;
  }
  goto LAB_145533116;
code_r0x0001455330ba:
  iVar11 = iVar11 + 1;
  lVar8 = lVar8 + 1;
  if (1 < lVar8) goto code_r0x0001455330c5;
  goto LAB_1455330b0;
code_r0x0001455330c5:
  iVar11 = -2;
  lVar8 = 2;
LAB_145533116:
  iVar11 = iVar11 + 2;
  lVar10 = 0;
  if (0 < iVar11) {
    do {
      (&local_38)[lVar10] = (&local_38)[lVar8 + lVar10];
      lVar10 = lVar10 + 1;
    } while (lVar10 < iVar11);
  }
LAB_1455331b7:
  uVar3 = local_38;
  if (iVar11 < 2) {
    memset(&local_38 + iVar11,0,lVar8 << 3);
    uVar3 = local_38;
  }
  goto LAB_145533051;
}



// FUNCTION 145533260 FUN_145533260 body=262 status=ok
// SIG undefined FUN_145533260(void)

longlong * FUN_145533260(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

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
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar2;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar1;
  uVar11 = SUB168(auVar5 * auVar8,8);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar3;
  uVar13 = uVar3 * uVar2 + uVar11;
  uVar4 = param_3[1];
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar4;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  lVar12 = uVar3 * uVar4 + SUB168(auVar7 * auVar10,8) +
           SUB168(auVar6 * auVar9,8) + (ulonglong)CARRY8(uVar3 * uVar2,uVar11) +
           (ulonglong)CARRY8(uVar1 * uVar4,uVar13);
  if ((longlong)uVar3 < 0) {
    lVar12 = lVar12 - uVar2;
  }
  if ((longlong)uVar4 < 0) {
    lVar12 = lVar12 - *param_2;
  }
  *param_1 = uVar1 * uVar2;
  param_1[2] = lVar12;
  param_1[1] = uVar1 * uVar4 + uVar13;
  return param_1;
}



// FUNCTION 145533370 FUN_145533370 body=346 status=ok
// SIG undefined FUN_145533370(void)

void FUN_145533370(ulonglong *param_1,undefined8 param_2,uint param_3,ulonglong *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  bool bVar6;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  uVar1 = param_1[2];
  uVar4 = (longlong)uVar1 >> 0x3f;
  local_48 = (*param_1 ^ uVar4) - uVar4;
  uVar3 = (ulonglong)((*param_1 ^ uVar4) < uVar4);
  uVar2 = (param_1[1] ^ uVar4) - uVar4;
  lStack_40 = uVar2 - uVar3;
  local_38 = ((uVar1 ^ uVar4) - uVar4) - (ulonglong)((param_1[1] ^ uVar4) < uVar4 || uVar2 < uVar3);
  FUN_147e5c8a9(&local_48,param_2,&local_28,&local_58);
  uVar2 = CONCAT44(uStack_1c,uStack_20);
  uVar3 = CONCAT44(uStack_24,local_28);
  if ((longlong)uVar1 < 0) {
    uVar3 = -CONCAT44(uStack_24,local_28);
    uVar1 = (ulonglong)(CONCAT44(uStack_24,local_28) != 0);
    uVar2 = -CONCAT44(uStack_1c,uStack_20) - uVar1;
    local_18 = -(ulonglong)
                (CONCAT44(uStack_1c,uStack_20) != 0 ||
                (ulonglong)-CONCAT44(uStack_1c,uStack_20) < uVar1) - local_18;
    bVar5 = local_58 != 0;
    local_58 = -local_58;
    lStack_50 = -(ulonglong)bVar5 - lStack_50;
  }
  if (((uint)(lStack_50 >> 0x3f) | (uint)(local_58 != 0 || lStack_50 != 0)) == param_3) {
    uVar4 = (ulonglong)(char)param_3;
    bVar5 = CARRY8(uVar3,uVar4);
    uVar3 = uVar3 + uVar4;
    uVar4 = (longlong)uVar4 >> 0x3f;
    bVar6 = CARRY8(uVar2,uVar4);
    uVar1 = uVar2 + uVar4;
    uVar2 = uVar1 + bVar5;
    local_18 = local_18 + uVar4 + (ulonglong)(bVar6 || CARRY8(uVar1,(ulonglong)bVar5));
  }
  *param_4 = uVar3;
  param_4[1] = uVar2;
  param_4[2] = local_18;
  return;
}



// FUNCTION 1455334d0 FUN_1455334d0 body=276 status=ok
// SIG undefined FUN_1455334d0(void)

undefined8 * FUN_1455334d0(undefined8 *param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  byte bVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong *puVar8;
  int iVar9;
  
  iVar9 = (int)param_2 >> 6;
  lVar7 = (longlong)iVar9;
  bVar4 = (byte)param_2 & 0x3f;
  if ((param_2 & 0x3f) == 0) {
    iVar9 = 2 - iVar9;
    lVar6 = (longlong)iVar9;
    puVar5 = param_1;
    if (0 < iVar9) {
      do {
        *puVar5 = puVar5[lVar7];
        lVar6 = lVar6 + -1;
        puVar5 = puVar5 + 1;
      } while (lVar6 != 0);
    }
  }
  else {
    iVar3 = 1 - iVar9;
    if (0 < iVar3) {
      puVar8 = param_1 + lVar7;
      lVar6 = (longlong)iVar3;
      do {
        puVar1 = puVar8 + 1;
        uVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar8[-1 - lVar7] = *puVar1 << (0x40 - bVar4 & 0x3f) | uVar2 >> bVar4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    param_1[iVar3] = (ulonglong)param_1[1] >> bVar4;
    iVar9 = 2 - iVar9;
  }
  if (iVar9 < 2) {
    memset(param_1 + iVar9,0,lVar7 << 3);
  }
  return param_1;
}



// FUNCTION 1455335f0 FUN_1455335f0 body=144 status=ok
// SIG undefined FUN_1455335f0(void)

void FUN_1455335f0(longlong *param_1,float *param_2,float *param_3,float *param_4)

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
  float fVar12;
  undefined8 uVar13;
  longlong lVar14;
  float *pfVar15;
  int iVar16;
  
  lVar14 = param_1[1];
  iVar16 = (int)lVar14 + 4;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar16) {
    FUN_1418055da(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar16);
  }
  *(int *)(param_1 + 1) = iVar16;
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar3 = param_4[2];
  fVar4 = param_4[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = param_3[3];
  pfVar15 = (float *)((longlong)(int)lVar14 * 0x10 + *param_1);
  *pfVar15 = fVar5;
  pfVar15[1] = fVar6;
  pfVar15[2] = fVar7;
  pfVar15[3] = fVar8;
  uVar13 = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(pfVar15 + 4) = *(undefined8 *)param_3;
  *(undefined8 *)(pfVar15 + 6) = uVar13;
  pfVar15[8] = fVar1 + fVar9;
  pfVar15[9] = fVar2 + fVar10;
  pfVar15[10] = fVar3 + fVar11;
  pfVar15[0xb] = fVar4 + fVar12;
  pfVar15[0xc] = fVar5 + fVar1;
  pfVar15[0xd] = fVar6 + fVar2;
  pfVar15[0xe] = fVar7 + fVar3;
  pfVar15[0xf] = fVar8 + fVar4;
  return;
}



// FUNCTION 145533680 FUN_145533680 body=174 status=ok
// SIG undefined FUN_145533680(void)

void FUN_145533680(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int *piVar11;
  
  lVar8 = param_1[1];
  lVar1 = *(longlong *)(param_2 + 0x18);
  iVar10 = (int)lVar8 + 3;
  piVar11 = (int *)((longlong)param_3 * 0x10 + *(longlong *)(param_2 + 0x28));
  puVar9 = (undefined8 *)(lVar1 + (longlong)*piVar11 * 0x10);
  uVar2 = *puVar9;
  uVar3 = puVar9[1];
  puVar9 = (undefined8 *)(lVar1 + (longlong)piVar11[1] * 0x10);
  uVar4 = *puVar9;
  uVar5 = puVar9[1];
  puVar9 = (undefined8 *)(lVar1 + (longlong)piVar11[2] * 0x10);
  uVar6 = *puVar9;
  uVar7 = puVar9[1];
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar10) {
    FUN_1418055da(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  *(int *)(param_1 + 1) = iVar10;
  puVar9 = (undefined8 *)((longlong)(int)lVar8 * 0x10 + *param_1);
  *puVar9 = uVar2;
  puVar9[1] = uVar3;
  puVar9[2] = uVar4;
  puVar9[3] = uVar5;
  puVar9[4] = uVar6;
  puVar9[5] = uVar7;
  return;
}



// FUNCTION 145533730 FUN_145533730 body=426 status=ok
// SIG undefined FUN_145533730(void)

void FUN_145533730(longlong *param_1,longlong param_2,int *param_3)

{
  short sVar1;
  longlong lVar2;
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
  float fVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  
  iVar23 = *param_3;
  lVar19 = (longlong)iVar23;
  lVar20 = *(longlong *)(param_2 + 0x20);
  if (iVar23 < *(int *)(lVar20 + 0x20)) {
    if (*(int *)(lVar20 + 0x98) != 0) {
      iVar23 = *(int *)(*(longlong *)(lVar20 + 0x90) + lVar19 * 4);
    }
    if (iVar23 == -1) {
      lVar20 = *(longlong *)(lVar20 + 0x18);
      lVar19 = lVar19 * 3;
    }
    else {
      lVar19 = (longlong)iVar23 * 3;
      lVar20 = *(longlong *)(lVar20 + 0xb0);
    }
  }
  else {
    lVar19 = (longlong)(iVar23 - *(int *)(lVar20 + 0x20)) * 3;
    lVar20 = *(longlong *)(lVar20 + 0xd0);
  }
  sVar1 = *(short *)(lVar20 + 8 + lVar19 * 4);
  iVar23 = *(int *)(lVar20 + lVar19 * 4);
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < (int)sVar1) {
    FUN_144bdedb0(param_1,&PTR_vftable_14c6e47a0,(longlong)sVar1);
  }
  if (0 < sVar1) {
    uVar25 = (ulonglong)(uint)(int)sVar1;
    do {
      lVar20 = *(longlong *)(param_2 + 0x20);
      if (iVar23 < *(int *)(lVar20 + 0x30)) {
        iVar24 = iVar23;
        if (*(int *)(lVar20 + 0x78) != 0) {
          iVar24 = *(int *)(*(longlong *)(lVar20 + 0x70) + (longlong)iVar23 * 4);
        }
        if (iVar24 == -1) {
          lVar20 = *(longlong *)(lVar20 + 0x28);
          lVar19 = (longlong)iVar23 * 5;
        }
        else {
          lVar19 = (longlong)iVar24 * 5;
          lVar20 = *(longlong *)(lVar20 + 0xc0);
        }
      }
      else {
        lVar19 = (longlong)(iVar23 - *(int *)(lVar20 + 0x30)) * 5;
        lVar20 = *(longlong *)(lVar20 + 0xe0);
      }
      iVar24 = (int)param_1[1] + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar24) {
        FUN_1418055da(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar24);
      }
      lVar18 = param_1[1];
      *(int *)(param_1 + 1) = iVar24;
      lVar2 = *(longlong *)(param_2 + 0x20);
      iVar24 = *(int *)(lVar20 + lVar19 * 4);
      pfVar22 = (float *)((longlong)(int)lVar18 * 0x10 + *param_1);
      if (iVar24 < *(int *)(lVar2 + 0x40)) {
        pfVar21 = (float *)((longlong)iVar24 * 0x10 + *(longlong *)(lVar2 + 0x38));
      }
      else {
        pfVar21 = (float *)((longlong)(iVar24 - *(int *)(lVar2 + 0x40)) * 0x10 +
                           *(longlong *)(lVar2 + 0xf0));
      }
      fVar3 = *pfVar21;
      fVar4 = pfVar21[1];
      fVar5 = pfVar21[2];
      iVar23 = iVar23 + 1;
      fVar6 = *(float *)(param_2 + 100);
      fVar7 = *(float *)(param_2 + 0x68);
      fVar8 = *(float *)(param_2 + 0x6c);
      fVar9 = *(float *)(param_2 + 0x74);
      fVar10 = *(float *)(param_2 + 0x78);
      fVar11 = *(float *)(param_2 + 0x7c);
      fVar12 = *(float *)(param_2 + 0x84);
      fVar13 = *(float *)(param_2 + 0x88);
      fVar14 = *(float *)(param_2 + 0x8c);
      fVar15 = *(float *)(param_2 + 0x94);
      fVar16 = *(float *)(param_2 + 0x98);
      fVar17 = *(float *)(param_2 + 0x9c);
      *pfVar22 = fVar3 * *(float *)(param_2 + 0x60) + fVar4 * *(float *)(param_2 + 0x70) +
                 fVar5 * *(float *)(param_2 + 0x80) + *(float *)(param_2 + 0x90);
      pfVar22[1] = fVar3 * fVar6 + fVar4 * fVar9 + fVar5 * fVar12 + fVar15;
      pfVar22[2] = fVar3 * fVar7 + fVar4 * fVar10 + fVar5 * fVar13 + fVar16;
      pfVar22[3] = fVar3 * fVar8 + fVar4 * fVar11 + fVar5 * fVar14 + fVar17;
      uVar25 = uVar25 - 1;
    } while (uVar25 != 0);
  }
  return;
}



// FUNCTION 1455338e0 FUN_1455338e0 body=1402 status=ok
// SIG undefined FUN_1455338e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1455338e0(ulonglong *param_1,float *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  undefined4 *puVar12;
  float *pfVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 local_res8;
  float *local_res10;
  longlong local_res18;
  longlong local_res20;
  ulonglong local_b0;
  uint local_a8;
  uint local_a4;
  longlong local_a0;
  undefined4 local_98;
  uint local_94;
  ulonglong local_90;
  longlong local_88;
  longlong local_80;
  
  uVar20 = 0;
  uVar5 = (uint)param_1[1];
  lVar17 = (longlong)(int)uVar5;
  local_98 = 0;
  lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res10 = param_2;
  if (*(char *)(lVar3 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar3 + 0xf0);
  if (lVar11 == 0) {
    if (*(char *)(lVar3 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar3 + 0xf0) = lVar11;
  }
  uVar14 = *(ulonglong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
  uVar22 = uVar20;
  if (*(longlong *)(uVar14 + 8) == 0) {
    uVar22 = uVar14;
  }
  local_res18 = lVar17;
  local_90 = uVar22;
  local_80 = lVar17;
  if (uVar22 == 0) {
    local_a0 = (*DAT_14c787670)(CONCAT71((int7)(uVar14 >> 8),1),&local_res18,0x40);
  }
  else {
    local_res8 = lVar17 + 0x3fU & 0xffffffffffffffc0;
    if (local_res8 <= *(ulonglong *)(uVar22 + 0x28)) {
      local_a0 = *(longlong *)(uVar22 + 0x38);
      if (local_a0 + local_res8 <= *(ulonglong *)(uVar22 + 0x40)) {
        *(ulonglong *)(uVar22 + 0x38) = local_a0 + local_res8;
        goto LAB_1455339db;
      }
    }
    local_a0 = FUN_144b454a0(uVar22,&local_res8);
  }
LAB_1455339db:
  iVar21 = (int)param_1[1];
  uVar18 = 0x80000000;
  local_94 = uVar5 | 0x80000000;
  local_res8 = CONCAT44(local_res8._4_4_,uVar5) | 0x80000000;
  local_88 = local_a0;
  if ((int)(uVar5 & 0x7fffffff) < iVar21) {
    FUN_14180788c(&local_a0,&PTR_vftable_14c6e47a0,(longlong)iVar21);
    iVar21 = (int)param_1[1];
    local_res8 = CONCAT44(local_res8._4_4_,local_94);
    uVar22 = local_90;
  }
  lVar3 = local_a0;
  bVar10 = false;
  bVar9 = true;
  uVar14 = uVar20;
  uVar19 = uVar20;
  if (0 < iVar21) {
    do {
      pfVar13 = (float *)(uVar19 + *param_1);
      fVar23 = param_2[3] + param_2[2] * pfVar13[2] + param_2[1] * pfVar13[1] + *param_2 * *pfVar13;
      if ((bVar10) || (fVar23 < 0.0)) {
        bVar10 = true;
      }
      if ((!bVar9) || (0.0 <= fVar23)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      *(bool *)(uVar14 + local_a0) = fVar23 < 0.0;
      uVar14 = uVar14 + 1;
      uVar19 = uVar19 + 0x10;
    } while ((longlong)uVar14 < (longlong)iVar21);
    if (bVar10) {
      if (bVar9) {
        *(undefined4 *)(param_1 + 1) = 0;
      }
      else {
        uVar14 = param_1[1];
        local_b0 = 0;
        local_a8 = 0;
        local_a4 = 0x80000000;
        local_res20 = 0;
        if (0 < (longlong)(int)uVar14) {
          iVar21 = 1;
          local_res18 = 0;
          uVar19 = uVar20;
          fVar23 = _DAT_14c6daea0;
          do {
            lVar17 = (longlong)(iVar21 % (int)param_1[1]);
            uVar5 = (uint)uVar19;
            if (*(char *)(local_res20 + lVar3) == '\0') {
              uVar19 = *param_1;
              uVar16 = uVar5 + 1;
              uVar15 = uVar5;
              if ((int)(uVar18 & 0x7fffffff) < (int)uVar16) {
                FUN_144bdedb0(&local_b0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar16);
                uVar20 = local_b0;
                fVar23 = _DAT_14c6daea0;
                uVar18 = local_a4;
                uVar15 = local_a8;
              }
              puVar12 = (undefined4 *)((longlong)(int)uVar15 * 0x10 + uVar20);
              if (puVar12 != (undefined4 *)0x0) {
                puVar2 = (undefined4 *)(local_res18 + uVar19);
                uVar6 = puVar2[1];
                uVar7 = puVar2[2];
                uVar8 = puVar2[3];
                *puVar12 = *puVar2;
                puVar12[1] = uVar6;
                puVar12[2] = uVar7;
                puVar12[3] = uVar8;
                fVar23 = _DAT_14c6daea0;
              }
              uVar19 = (ulonglong)uVar16;
              local_a8 = uVar16;
              if (*(char *)(lVar17 + lVar3) != '\0') {
                pfVar13 = (float *)(*param_1 + lVar17 * 0x10);
                fVar39 = *pfVar13;
                fVar40 = pfVar13[1];
                fVar41 = pfVar13[2];
                fVar35 = pfVar13[3];
                pfVar13 = (float *)(*param_1 + local_res18);
                fVar36 = *pfVar13;
                fVar37 = pfVar13[1];
                fVar38 = pfVar13[2];
                fVar25 = *local_res10 * (fVar36 - fVar39);
                fVar33 = local_res10[1] * (fVar37 - fVar40);
                fVar34 = local_res10[2] * (fVar38 - fVar41);
                fVar32 = fVar34 + fVar33 + fVar25;
                if (fVar23 <= fVar32 * fVar32) {
                  fVar26 = fVar36 * *local_res10;
                  fVar30 = fVar37 * local_res10[1];
                  fVar31 = fVar38 * local_res10[2];
                  fVar27 = fVar26 + fVar30;
                  fVar30 = fVar30 + fVar26;
                  fVar26 = fVar31 + local_res10[3];
                  fVar31 = local_res10[3] + fVar31;
                  auVar24._0_4_ = 0.0 - (fVar27 + fVar26);
                  auVar24._4_4_ = 0.0 - (fVar30 + fVar31);
                  auVar24._8_4_ = 0.0 - (fVar26 + fVar27);
                  auVar24._12_4_ = 0.0 - (fVar31 + fVar30);
                  auVar29._4_4_ = fVar34 + fVar33 + fVar25;
                  auVar29._0_4_ = fVar32;
                  auVar29._8_4_ = fVar34 + fVar33 + fVar25;
                  auVar29._12_4_ = fVar34 + fVar33 + fVar25;
                  auVar29 = divps(auVar24,auVar29);
                  fVar39 = fVar36 + auVar29._0_4_ * (fVar36 - fVar39);
                  fVar40 = fVar37 + auVar29._4_4_ * (fVar37 - fVar40);
                  fVar41 = fVar38 + auVar29._8_4_ * (fVar38 - fVar41);
                  fVar35 = pfVar13[3] + auVar29._12_4_ * (pfVar13[3] - fVar35);
                }
                uVar15 = uVar5 + 2;
LAB_145533cb6:
                if ((int)(uVar18 & 0x7fffffff) < (int)uVar15) {
                  FUN_144bdedb0(&local_b0,&PTR_vftable_14c6e47a0,(longlong)(int)uVar15);
                  uVar20 = local_b0;
                  fVar23 = _DAT_14c6daea0;
                  uVar18 = local_a4;
                  uVar16 = local_a8;
                }
                pfVar13 = (float *)((longlong)(int)uVar16 * 0x10 + uVar20);
                if (pfVar13 != (float *)0x0) {
                  *pfVar13 = fVar39;
                  pfVar13[1] = fVar40;
                  pfVar13[2] = fVar41;
                  pfVar13[3] = fVar35;
                  fVar23 = _DAT_14c6daea0;
                }
                uVar19 = (ulonglong)uVar15;
                local_a8 = uVar15;
              }
            }
            else if (*(char *)(lVar17 + lVar3) == '\0') {
              pfVar13 = (float *)(*param_1 + local_res18);
              fVar39 = *pfVar13;
              fVar40 = pfVar13[1];
              fVar41 = pfVar13[2];
              pfVar1 = (float *)(*param_1 + lVar17 * 0x10);
              fVar35 = *local_res10 * (fVar39 - *pfVar1);
              fVar37 = local_res10[1] * (fVar40 - pfVar1[1]);
              fVar38 = local_res10[2] * (fVar41 - pfVar1[2]);
              fVar36 = fVar38 + fVar37 + fVar35;
              if (fVar23 <= fVar36 * fVar36) {
                uVar15 = uVar5 + 1;
                fVar32 = fVar39 * *local_res10;
                fVar33 = fVar40 * local_res10[1];
                fVar34 = fVar41 * local_res10[2];
                fVar25 = fVar33 + fVar32;
                fVar32 = fVar32 + fVar33;
                fVar33 = local_res10[3] + fVar34;
                fVar34 = fVar34 + local_res10[3];
                auVar28._0_4_ = 0.0 - (fVar33 + fVar25);
                auVar28._4_4_ = 0.0 - (fVar34 + fVar32);
                auVar28._8_4_ = 0.0 - (fVar25 + fVar33);
                auVar28._12_4_ = 0.0 - (fVar32 + fVar34);
                auVar4._4_4_ = fVar38 + fVar37 + fVar35;
                auVar4._0_4_ = fVar36;
                auVar4._8_4_ = fVar38 + fVar37 + fVar35;
                auVar4._12_4_ = fVar38 + fVar37 + fVar35;
                auVar29 = divps(auVar28,auVar4);
                fVar39 = fVar39 + auVar29._0_4_ * (fVar39 - *pfVar1);
                fVar40 = fVar40 + auVar29._4_4_ * (fVar40 - pfVar1[1]);
                fVar41 = fVar41 + auVar29._8_4_ * (fVar41 - pfVar1[2]);
                fVar35 = pfVar13[3] + auVar29._12_4_ * (pfVar13[3] - pfVar1[3]);
                uVar16 = uVar5;
                goto LAB_145533cb6;
              }
            }
            local_res18 = local_res18 + 0x10;
            local_res20 = local_res20 + 1;
            iVar21 = iVar21 + 1;
          } while (local_res20 < (int)uVar14);
        }
        if (&local_b0 != param_1) {
          FUN_147e4a87c(param_1,&PTR_vftable_14c6e47a0);
          FUN_147e4a87c(&local_b0,&PTR_vftable_14c6e47a0);
          uVar20 = *param_1;
          *param_1 = local_b0;
          uVar18 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(param_1 + 1) = local_a8;
          *(uint *)((longlong)param_1 + 0xc) = local_a4;
        }
        if ((-1 < (int)uVar18) && (uVar20 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,uVar20,(ulonglong)(uVar18 & 0x7fffffff) << 4);
        }
      }
    }
  }
  if (uVar22 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar20 = local_80 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(uVar22 + 0x28) < uVar20) ||
       (local_88 + uVar20 != *(longlong *)(uVar22 + 0x38))) {
      FUN_144be8550(uVar22);
    }
    else {
      *(longlong *)(uVar22 + 0x38) = local_88;
      if (*(longlong *)(uVar22 + 0x48) == local_88) {
        FUN_144be8430(uVar22);
      }
    }
  }
  if ((-1 < (int)(uint)local_res8) && (lVar3 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar3,(uint)local_res8 & 0x7fffffff);
  }
  return;
}



// FUNCTION 145533e60 FUN_145533e60 body=68 status=ok
// SIG undefined FUN_145533e60(void)

void FUN_145533e60(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0x10) {
    FUN_1455338e0(param_1,lVar2);
  }
  return;
}



// FUNCTION 145533fc0 FUN_145533fc0 body=76 status=ok
// SIG undefined FUN_145533fc0(void)

void FUN_145533fc0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144bfbed0(param_1,param_2 + param_1,0xc);
      param_1 = param_1 + 0xc;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 145534010 FUN_145534010 body=55 status=ok
// SIG undefined FUN_145534010(void)

void FUN_145534010(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_14534e360(param_1);
      }
      param_1 = param_1 + 8;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 145534080 FUN_145534080 body=80 status=ok
// SIG undefined FUN_145534080(void)

void FUN_145534080(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1455340d0 FUN_1455340d0 body=63 status=ok
// SIG undefined FUN_1455340d0(void)

void FUN_1455340d0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 145534110 FUN_145534110 body=97 status=ok
// SIG undefined FUN_145534110(void)

void FUN_145534110(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1455341f0 FUN_1455341f0 body=101 status=ok
// SIG undefined FUN_1455341f0(void)

void FUN_1455341f0(longlong param_1,undefined8 param_2,int param_3)

{
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    param_1 = param_1 + ((longlong)param_3 * 5 + 3) * 8;
    do {
      FUN_144bfd1a0(param_1 + 8);
      FUN_144bfd1a0(param_1);
      FUN_144bfd1a0(param_1 + -8);
      FUN_144bfd1a0(param_1 + -0x10);
      FUN_144bfd1a0(param_1 + -0x18);
      param_1 = param_1 + -0x28;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 145534300 FUN_145534300 body=62 status=ok
// SIG undefined FUN_145534300(void)

undefined8 * FUN_145534300(undefined8 param_1,undefined8 *param_2)

{
  FUN_144bf09d0(&DAT_14c745480);
  *param_2 = param_1;
  param_2[1] = &DAT_14c745480;
  return param_2;
}



// FUNCTION 145534340 FUN_145534340 body=3 status=ok
// SIG undefined FUN_145534340(void)

void FUN_145534340(void)

{
  return;
}



// FUNCTION 145534350 FUN_145534350 body=71 status=ok
// SIG undefined FUN_145534350(void)

undefined8 * FUN_145534350(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1455343a0 FUN_1455343a0 body=88 status=ok
// SIG undefined FUN_1455343a0(void)

void FUN_1455343a0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 145534410 FUN_145534410 body=18 status=ok
// SIG undefined FUN_145534410(void)

undefined8 * FUN_145534410(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c7454d0;
  return param_2;
}



// FUNCTION 145534430 FUN_145534430 body=257 status=ok
// SIG undefined FUN_145534430(void)

undefined8 * FUN_145534430(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 0x15) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xac)) && (param_1[0x14] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x14],
               (ulonglong)(*(uint *)((longlong)param_1 + 0xac) & 0x7fffffff) << 5);
  }
  param_1[0x14] = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x9c)) && (param_1[0x12] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x12],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x9c) & 0x7fffffff) << 5);
  }
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xd0);
  }
  return param_1;
}



// FUNCTION 1455345d0 FUN_1455345d0 body=80 status=ok
// SIG undefined FUN_1455345d0(void)

void FUN_1455345d0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145534620 FUN_145534620 body=63 status=ok
// SIG undefined FUN_145534620(void)

void FUN_145534620(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 145534660 FUN_145534660 body=97 status=ok
// SIG undefined FUN_145534660(void)

void FUN_145534660(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145534710 FUN_145534710 body=88 status=ok
// SIG undefined FUN_145534710(void)

void FUN_145534710(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 145534780 FUN_145534780 body=77 status=ok
// SIG undefined FUN_145534780(void)

void FUN_145534780(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 145534800 FUN_145534800 body=58 status=ok
// SIG undefined FUN_145534800(void)

void FUN_145534800(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_1455e4610(param_1);
      }
      param_1 = param_1 + 0xd0;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 145534840 FUN_145534840 body=649 status=ok
// SIG undefined FUN_145534840(void)

void FUN_145534840(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar13 = (uint *)(param_1 + 0xac);
    lVar14 = (longlong)param_4;
    do {
      puVar2 = puVar13 + -0x2b;
      if (puVar2 != (uint *)0x0) {
        puVar13[-0x27] = 1;
        puVar13[-0x26] = 0;
        puVar13[-0x29] = 0xffffffff;
        puVar13[-0x28] = 0;
        *(undefined ***)puVar2 = hkaiCollisionAvoidance::ObstacleGenerator::vftable;
        *(undefined8 *)(puVar13 + -0x25) = *(undefined8 *)(param_2 + -0x94 + (longlong)puVar13);
        *(undefined ***)puVar2 = hkaiCollisionAvoidance::SimpleObstacleGenerator::vftable;
        *(undefined1 *)(puVar13 + -0x23) = *(undefined1 *)(param_2 + -0x8c + (longlong)puVar13);
        puVar16 = (undefined8 *)(param_2 + -0x7c + (longlong)puVar13);
        uVar9 = puVar16[1];
        *(undefined8 *)(puVar13 + -0x1f) = *puVar16;
        *(undefined8 *)(puVar13 + -0x1d) = uVar9;
        puVar16 = (undefined8 *)(param_2 + -0x6c + (longlong)puVar13);
        uVar9 = puVar16[1];
        *(undefined8 *)(puVar13 + -0x1b) = *puVar16;
        *(undefined8 *)(puVar13 + -0x19) = uVar9;
        puVar16 = (undefined8 *)(param_2 + -0x5c + (longlong)puVar13);
        uVar9 = puVar16[1];
        *(undefined8 *)(puVar13 + -0x17) = *puVar16;
        *(undefined8 *)(puVar13 + -0x15) = uVar9;
        puVar16 = (undefined8 *)(param_2 + -0x4c + (longlong)puVar13);
        uVar9 = puVar16[1];
        *(undefined8 *)(puVar13 + -0x13) = *puVar16;
        *(undefined8 *)(puVar13 + -0x11) = uVar9;
        puVar2 = (uint *)(param_2 + -0x3c + (longlong)puVar13);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar13[-0xf] = *puVar2;
        puVar13[-0xe] = uVar3;
        puVar13[-0xd] = uVar4;
        puVar13[-0xc] = uVar5;
        puVar2 = (uint *)(param_2 + -0x2c + (longlong)puVar13);
        uVar3 = puVar2[1];
        uVar4 = puVar2[2];
        uVar5 = puVar2[3];
        puVar13[-0xb] = *puVar2;
        puVar13[-10] = uVar3;
        puVar13[-9] = uVar4;
        puVar13[-8] = uVar5;
        puVar13[-7] = 0;
        puVar13[-6] = 0;
        puVar13[-5] = 0;
        puVar13[-4] = 0x80000000;
        uVar3 = *(uint *)(param_2 + -0x14 + (longlong)puVar13);
        puVar15 = *(undefined4 **)(param_2 + -0x1c + (longlong)puVar13);
        if (0 < (int)uVar3) {
          puVar10 = (undefined4 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 5);
          *(undefined4 **)(puVar13 + -7) = puVar10;
          uVar12 = (ulonglong)uVar3;
          puVar13[-5] = uVar3;
          puVar13[-4] = uVar3;
          do {
            if (puVar10 != (undefined4 *)0x0) {
              uVar6 = puVar15[1];
              uVar7 = puVar15[2];
              uVar8 = puVar15[3];
              *puVar10 = *puVar15;
              puVar10[1] = uVar6;
              puVar10[2] = uVar7;
              puVar10[3] = uVar8;
              puVar16 = (undefined8 *)(puVar15 + 4);
              uVar9 = *(undefined8 *)(puVar15 + 6);
              puVar15 = puVar15 + 8;
              *(undefined8 *)(puVar10 + 4) = *puVar16;
              *(undefined8 *)(puVar10 + 6) = uVar9;
            }
            uVar12 = uVar12 - 1;
            puVar10 = puVar10 + 8;
          } while (uVar12 != 0);
        }
        puVar13[-3] = 0;
        puVar13[-2] = 0;
        puVar13[-1] = 0;
        *puVar13 = 0x80000000;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar13);
        puVar16 = *(undefined8 **)((longlong)puVar13 + param_2 + -0xc);
        if (0 < (int)uVar3) {
          puVar11 = (undefined8 *)
                    (**(code **)(PTR_vftable_14c6e47a0 + 8))
                              (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 5);
          *(undefined8 **)(puVar13 + -3) = puVar11;
          uVar12 = (ulonglong)uVar3;
          puVar13[-1] = uVar3;
          *puVar13 = uVar3;
          do {
            if (puVar11 != (undefined8 *)0x0) {
              uVar9 = puVar16[1];
              *puVar11 = *puVar16;
              puVar11[1] = uVar9;
              puVar1 = puVar16 + 2;
              uVar9 = puVar16[3];
              puVar16 = puVar16 + 4;
              puVar11[2] = *puVar1;
              puVar11[3] = uVar9;
            }
            uVar12 = uVar12 - 1;
            puVar11 = puVar11 + 4;
          } while (uVar12 != 0);
        }
        puVar16 = (undefined8 *)(param_2 + 4 + (longlong)puVar13);
        uVar9 = puVar16[1];
        *(undefined8 *)(puVar13 + 1) = *puVar16;
        *(undefined8 *)(puVar13 + 3) = uVar9;
        puVar16 = (undefined8 *)(param_2 + 0x14 + (longlong)puVar13);
        uVar9 = puVar16[1];
        *(undefined8 *)(puVar13 + 5) = *puVar16;
        *(undefined8 *)(puVar13 + 7) = uVar9;
      }
      puVar13 = puVar13 + 0x34;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}



// FUNCTION 145534ad0 FUN_145534ad0 body=94 status=ok
// SIG undefined FUN_145534ad0(void)

void FUN_145534ad0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0xd0 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x1a;
      plVar2 = plVar2 + -0x1a;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 145534b30 FUN_145534b30 body=18 status=ok
// SIG undefined FUN_145534b30(void)

undefined8 * FUN_145534b30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c745770;
  return param_2;
}



// FUNCTION 145534b50 FUN_145534b50 body=207 status=ok
// SIG undefined FUN_145534b50(void)

void FUN_145534b50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiCollisionAvoidance::DefaultBoundaryGatherer::vftable;
        lVar1 = *(longlong *)(param_2 + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar2);
        lVar1 = *(longlong *)(param_2 + 0x18 + (longlong)puVar2);
        puVar2[3] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 0x20 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 145534c20 FUN_145534c20 body=77 status=ok
// SIG undefined FUN_145534c20(void)

void FUN_145534c20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 145534cd0 FUN_145534cd0 body=87 status=ok
// SIG undefined FUN_145534cd0(void)

undefined8 FUN_145534cd0(undefined8 param_1,ulonglong param_2)

{
  FUN_1455e4c90();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 145534d30 FUN_145534d30 body=18 status=ok
// SIG undefined FUN_145534d30(void)

undefined8 * FUN_145534d30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c7457d0;
  return param_2;
}



// FUNCTION 145534d50 FUN_145534d50 body=87 status=ok
// SIG undefined FUN_145534d50(void)

undefined8 FUN_145534d50(undefined8 param_1,ulonglong param_2)

{
  FUN_1455e52f0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 145534db0 FUN_145534db0 body=18 status=ok
// SIG undefined FUN_145534db0(void)

undefined8 * FUN_145534db0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c745890;
  return param_2;
}



// FUNCTION 145534e30 FUN_145534e30 body=74 status=ok
// SIG undefined FUN_145534e30(void)

void FUN_145534e30(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)(param_1 + (longlong)param_3 * 8);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -1;
      plVar2 = plVar2 + -1;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 145534e80 FUN_145534e80 body=32 status=ok
// SIG undefined FUN_145534e80(void)

undefined8 FUN_145534e80(undefined8 param_1,undefined8 *param_2)

{
  (**(code **)*param_2)(param_2,param_1);
  return param_1;
}



// FUNCTION 145534ea0 FUN_145534ea0 body=77 status=ok
// SIG undefined FUN_145534ea0(void)

void FUN_145534ea0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 145534f00 FUN_145534f00 body=208 status=ok
// SIG undefined FUN_145534f00(void)

void FUN_145534f00(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkaiCollisionAvoidance::MediatorBoundaryGatherer::vftable;
        lVar1 = *(longlong *)(param_2 + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(param_2 + 0x10 + (longlong)puVar2);
        lVar1 = *(longlong *)(param_2 + 0x18 + (longlong)puVar2);
        puVar2[3] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        puVar2[4] = *(undefined8 *)(param_2 + 0x20 + (longlong)puVar2);
      }
      puVar2 = puVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 145534fd0 FUN_145534fd0 body=77 status=ok
// SIG undefined FUN_145534fd0(void)

void FUN_145534fd0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x38 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -7;
      plVar2 = plVar2 + -7;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 145535020 FUN_145535020 body=162 status=ok
// SIG undefined FUN_145535020(void)

void FUN_145535020(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar3 = (longlong)param_4;
    plVar2 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar2 != *(longlong *)(param_2 + (longlong)plVar2)) {
        if (*(longlong *)(param_2 + (longlong)plVar2) != 0) {
          FUN_144b3d910();
        }
        lVar1 = *plVar2;
        *plVar2 = *(longlong *)(param_2 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      *(undefined4 *)(plVar2 + 1) = *(undefined4 *)(param_2 + 8 + (longlong)plVar2);
      lVar1 = *(longlong *)(param_2 + 0x10 + (longlong)plVar2);
      if (plVar2[2] != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = plVar2[2];
        plVar2[2] = *(longlong *)(param_2 + 0x10 + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      plVar2[3] = *(longlong *)(param_2 + 0x18 + (longlong)plVar2);
      plVar2 = plVar2 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 145535120 FUN_145535120 body=94 status=ok
// SIG undefined FUN_145535120(void)

void FUN_145535120(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x90 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x12;
      plVar2 = plVar2 + -0x12;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 145535240 FUN_145535240 body=80 status=ok
// SIG undefined FUN_145535240(void)

void FUN_145535240(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145535290 FUN_145535290 body=63 status=ok
// SIG undefined FUN_145535290(void)

void FUN_145535290(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 1455352d0 FUN_1455352d0 body=535 status=ok
// SIG undefined FUN_1455352d0(void)

void FUN_1455352d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  
  if (0 < param_4) {
    puVar9 = (uint *)(param_1 + 0xf4);
    param_2 = param_2 - param_1;
    lVar12 = (longlong)param_4;
    do {
      if (puVar9 + -0x3d != (uint *)0x0) {
        puVar9[-0x39] = 1;
        puVar9[-0x38] = 0;
        puVar9[-0x3b] = 0xffffffff;
        puVar9[-0x3a] = 0;
        *(undefined ***)(puVar9 + -0x3d) = hkaiCollisionAvoidance::Character::vftable;
        *(undefined8 *)(puVar9 + -0x37) = *(undefined8 *)(param_2 + -0xdc + (longlong)puVar9);
        *(undefined8 *)(puVar9 + -0x35) = *(undefined8 *)(param_2 + -0xd4 + (longlong)puVar9);
        puVar2 = (undefined8 *)(param_2 + -0xc4 + (longlong)puVar9);
        uVar7 = puVar2[1];
        *(undefined8 *)(puVar9 + -0x31) = *puVar2;
        *(undefined8 *)(puVar9 + -0x2f) = uVar7;
        puVar2 = (undefined8 *)(param_2 + -0xb4 + (longlong)puVar9);
        uVar7 = puVar2[1];
        *(undefined8 *)(puVar9 + -0x2d) = *puVar2;
        *(undefined8 *)(puVar9 + -0x2b) = uVar7;
        puVar2 = (undefined8 *)(param_2 + -0xa4 + (longlong)puVar9);
        uVar7 = puVar2[1];
        *(undefined8 *)(puVar9 + -0x29) = *puVar2;
        *(undefined8 *)(puVar9 + -0x27) = uVar7;
        puVar9[-0x25] = *(uint *)(param_2 + -0x94 + (longlong)puVar9);
        puVar2 = (undefined8 *)(param_2 + -0x84 + (longlong)puVar9);
        uVar7 = puVar2[1];
        *(undefined8 *)(puVar9 + -0x21) = *puVar2;
        *(undefined8 *)(puVar9 + -0x1f) = uVar7;
        puVar2 = (undefined8 *)(param_2 + -0x74 + (longlong)puVar9);
        uVar7 = puVar2[1];
        *(undefined8 *)(puVar9 + -0x1d) = *puVar2;
        *(undefined8 *)(puVar9 + -0x1b) = uVar7;
        puVar2 = (undefined8 *)(param_2 + -100 + (longlong)puVar9);
        uVar7 = puVar2[1];
        *(undefined8 *)(puVar9 + -0x19) = *puVar2;
        *(undefined8 *)(puVar9 + -0x17) = uVar7;
        puVar9[-0x15] = *(uint *)(param_2 + -0x54 + (longlong)puVar9);
        puVar9[-0x14] = *(uint *)(param_2 + -0x50 + (longlong)puVar9);
        puVar9[-0x13] = *(uint *)(param_2 + -0x4c + (longlong)puVar9);
        *(undefined8 *)(puVar9 + -0x12) = *(undefined8 *)(param_2 + -0x48 + (longlong)puVar9);
        puVar9[-0x10] = *(uint *)(param_2 + -0x40 + (longlong)puVar9);
        puVar9[-0xf] = *(uint *)((longlong)puVar9 + param_2 + -0x3c);
        puVar1 = (uint *)((longlong)puVar9 + param_2 + -0x38);
        uVar3 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar9[-0xe] = *puVar1;
        puVar9[-0xd] = uVar3;
        puVar9[-0xc] = uVar5;
        puVar9[-0xb] = uVar6;
        puVar1 = (uint *)((longlong)puVar9 + param_2 + -0x28);
        uVar3 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar9[-10] = *puVar1;
        puVar9[-9] = uVar3;
        puVar9[-8] = uVar5;
        puVar9[-7] = uVar6;
        lVar4 = *(longlong *)((longlong)puVar9 + param_2 + -0x14);
        *(longlong *)(puVar9 + -5) = lVar4;
        if (lVar4 != 0) {
          FUN_144b3d910();
        }
        puVar9[-3] = 0;
        puVar9[-2] = 0;
        puVar9[-1] = 0;
        *puVar9 = 0x80000000;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar9);
        uVar10 = (ulonglong)uVar3;
        plVar11 = *(longlong **)((longlong)puVar9 + param_2 + -0xc);
        if (0 < (int)uVar3) {
          plVar8 = (longlong *)
                   (**(code **)(PTR_vftable_14c6e47a0 + 8))
                             (&PTR_vftable_14c6e47a0,(longlong)(int)uVar3 << 3);
          *(longlong **)(puVar9 + -3) = plVar8;
          puVar9[-1] = uVar3;
          *puVar9 = uVar3;
          do {
            if (plVar8 != (longlong *)0x0) {
              lVar4 = *plVar11;
              *plVar8 = lVar4;
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              plVar11 = plVar11 + 1;
            }
            uVar10 = uVar10 - 1;
            plVar8 = plVar8 + 1;
          } while (uVar10 != 0);
        }
        *(undefined1 *)(puVar9 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar9);
        *(undefined8 *)(puVar9 + 3) = *(undefined8 *)(param_2 + 0xc + (longlong)puVar9);
        puVar9[5] = *(uint *)(param_2 + 0x14 + (longlong)puVar9);
        puVar9[6] = *(uint *)(param_2 + 0x18 + (longlong)puVar9);
      }
      puVar9 = puVar9 + 0x44;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}



// FUNCTION 1455354f0 FUN_1455354f0 body=97 status=ok
// SIG undefined FUN_1455354f0(void)

void FUN_1455354f0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145535560 FUN_145535560 body=94 status=ok
// SIG undefined FUN_145535560(void)

void FUN_145535560(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x110 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -0x22;
      plVar2 = plVar2 + -0x22;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 1455355c0 FUN_1455355c0 body=697 status=ok
// SIG undefined FUN_1455355c0(void)

void FUN_1455355c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint *puVar14;
  longlong local_38;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar14 = (uint *)(param_1 + 0xf4);
    local_38 = (longlong)param_4;
    do {
      *(undefined8 *)(puVar14 + -0x37) = *(undefined8 *)(param_2 + -0xdc + (longlong)puVar14);
      *(undefined8 *)(puVar14 + -0x35) = *(undefined8 *)(param_2 + -0xd4 + (longlong)puVar14);
      puVar2 = (undefined8 *)(param_2 + -0xc4 + (longlong)puVar14);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar14 + -0x31) = *puVar2;
      *(undefined8 *)(puVar14 + -0x2f) = uVar7;
      puVar2 = (undefined8 *)(param_2 + -0xb4 + (longlong)puVar14);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar14 + -0x2d) = *puVar2;
      *(undefined8 *)(puVar14 + -0x2b) = uVar7;
      puVar2 = (undefined8 *)(param_2 + -0xa4 + (longlong)puVar14);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar14 + -0x29) = *puVar2;
      *(undefined8 *)(puVar14 + -0x27) = uVar7;
      puVar14[-0x25] = *(uint *)(param_2 + -0x94 + (longlong)puVar14);
      puVar2 = (undefined8 *)(param_2 + -0x84 + (longlong)puVar14);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar14 + -0x21) = *puVar2;
      *(undefined8 *)(puVar14 + -0x1f) = uVar7;
      puVar2 = (undefined8 *)(param_2 + -0x74 + (longlong)puVar14);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar14 + -0x1d) = *puVar2;
      *(undefined8 *)(puVar14 + -0x1b) = uVar7;
      puVar2 = (undefined8 *)(param_2 + -100 + (longlong)puVar14);
      uVar7 = puVar2[1];
      *(undefined8 *)(puVar14 + -0x19) = *puVar2;
      *(undefined8 *)(puVar14 + -0x17) = uVar7;
      puVar14[-0x15] = *(uint *)(param_2 + -0x54 + (longlong)puVar14);
      puVar14[-0x14] = *(uint *)(param_2 + -0x50 + (longlong)puVar14);
      puVar14[-0x13] = *(uint *)(param_2 + -0x4c + (longlong)puVar14);
      *(undefined8 *)(puVar14 + -0x12) = *(undefined8 *)(param_2 + -0x48 + (longlong)puVar14);
      puVar14[-0x10] = *(uint *)(param_2 + -0x40 + (longlong)puVar14);
      puVar14[-0xf] = *(uint *)(param_2 + -0x3c + (longlong)puVar14);
      puVar1 = (uint *)(param_2 + -0x38 + (longlong)puVar14);
      uVar3 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar14[-0xe] = *puVar1;
      puVar14[-0xd] = uVar3;
      puVar14[-0xc] = uVar5;
      puVar14[-0xb] = uVar6;
      puVar1 = (uint *)(param_2 + -0x28 + (longlong)puVar14);
      uVar3 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar14[-10] = *puVar1;
      puVar14[-9] = uVar3;
      puVar14[-8] = uVar5;
      puVar14[-7] = uVar6;
      lVar9 = *(longlong *)((longlong)puVar14 + param_2 + -0x14);
      if (*(longlong *)(puVar14 + -5) != lVar9) {
        if (lVar9 != 0) {
          FUN_144b3d910();
        }
        lVar9 = *(longlong *)(puVar14 + -5);
        *(undefined8 *)(puVar14 + -5) = *(undefined8 *)((longlong)puVar14 + param_2 + -0x14);
        if (lVar9 != 0) {
          FUN_144b3f230();
        }
      }
      puVar8 = (uint *)(param_2 + -0xc + (longlong)puVar14);
      puVar1 = puVar14 + -3;
      if (puVar8 != puVar1) {
        plVar11 = *(longlong **)puVar8;
        uVar3 = *(uint *)(param_2 + -4 + (longlong)puVar14);
        if ((int)(*puVar14 & 0x7fffffff) < (int)uVar3) {
          FUN_145535d90(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        if ((int)uVar3 < (int)puVar14[-1]) {
          lVar13 = *(longlong *)puVar1;
          lVar9 = lVar13 + (longlong)(int)puVar14[-1] * 8;
          while (lVar9 != lVar13 + (longlong)(int)uVar3 * 8) {
            plVar10 = (longlong *)(lVar9 + -8);
            lVar9 = lVar9 + -8;
            if (*plVar10 != 0) {
              FUN_144b3f230();
            }
          }
        }
        plVar10 = *(longlong **)(puVar14 + -3);
        uVar5 = uVar3;
        if ((int)puVar14[-1] < (int)uVar3) {
          uVar5 = puVar14[-1];
        }
        if ((plVar10 != plVar11) && (lVar9 = (longlong)(int)uVar5, 0 < (int)uVar5)) {
          lVar13 = (longlong)plVar11 - (longlong)plVar10;
          do {
            lVar4 = *(longlong *)(lVar13 + (longlong)plVar10);
            if (*plVar10 != lVar4) {
              if (lVar4 != 0) {
                FUN_144b3d910();
              }
              lVar4 = *plVar10;
              *plVar10 = *(longlong *)(lVar13 + (longlong)plVar10);
              if (lVar4 != 0) {
                FUN_144b3f230();
              }
            }
            plVar10 = plVar10 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        plVar11 = plVar11 + (int)uVar5;
        if (0 < (int)(uVar3 - uVar5)) {
          uVar12 = (ulonglong)(uVar3 - uVar5);
          plVar10 = (longlong *)(*(longlong *)(puVar14 + -3) + (longlong)(int)uVar5 * 8);
          do {
            if (plVar10 != (longlong *)0x0) {
              lVar9 = *plVar11;
              *plVar10 = lVar9;
              if (lVar9 != 0) {
                FUN_144b3d910();
              }
              plVar11 = plVar11 + 1;
            }
            uVar12 = uVar12 - 1;
            plVar10 = plVar10 + 1;
          } while (uVar12 != 0);
        }
        puVar14[-1] = uVar3;
      }
      *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar14);
      *(undefined8 *)(puVar14 + 3) = *(undefined8 *)(param_2 + 0xc + (longlong)puVar14);
      puVar14[5] = *(uint *)(param_2 + 0x14 + (longlong)puVar14);
      puVar14[6] = *(uint *)(param_2 + 0x18 + (longlong)puVar14);
      puVar14 = puVar14 + 0x44;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  return;
}



// FUNCTION 145535950 FUN_145535950 body=80 status=ok
// SIG undefined FUN_145535950(void)

void FUN_145535950(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1455359a0 FUN_1455359a0 body=63 status=ok
// SIG undefined FUN_1455359a0(void)

void FUN_1455359a0(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 1455359e0 FUN_1455359e0 body=97 status=ok
// SIG undefined FUN_1455359e0(void)

void FUN_1455359e0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145535ae0 FUN_145535ae0 body=80 status=ok
// SIG undefined FUN_145535ae0(void)

void FUN_145535ae0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145535b30 FUN_145535b30 body=63 status=ok
// SIG undefined FUN_145535b30(void)

void FUN_145535b30(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 145535b70 FUN_145535b70 body=97 status=ok
// SIG undefined FUN_145535b70(void)

void FUN_145535b70(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145535c10 FUN_145535c10 body=80 status=ok
// SIG undefined FUN_145535c10(void)

void FUN_145535c10(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      if ((param_1 != (longlong *)0x0) &&
         (lVar1 = *(longlong *)(param_2 + (longlong)param_1), *param_1 = lVar1, lVar1 != 0)) {
        FUN_144b3d910();
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145535c60 FUN_145535c60 body=63 status=ok
// SIG undefined FUN_145535c60(void)

void FUN_145535c60(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_144b3f230();
      }
      lVar1 = lVar1 + -1;
    } while (-1 < lVar1);
  }
  return;
}



// FUNCTION 145535ca0 FUN_145535ca0 body=97 status=ok
// SIG undefined FUN_145535ca0(void)

void FUN_145535ca0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    lVar2 = (longlong)param_4;
    param_2 = param_2 - (longlong)param_1;
    do {
      lVar1 = *(longlong *)(param_2 + (longlong)param_1);
      if (*param_1 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *param_1;
        *param_1 = *(longlong *)(param_2 + (longlong)param_1);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      param_1 = param_1 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 145535d10 FUN_145535d10 body=18 status=ok
// SIG undefined FUN_145535d10(void)

undefined8 * FUN_145535d10(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c745720;
  return param_2;
}



// FUNCTION 145535d30 FUN_145535d30 body=87 status=ok
// SIG undefined FUN_145535d30(void)

undefined8 FUN_145535d30(undefined8 param_1,ulonglong param_2)

{
  FUN_14553c3e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 145535d90 FUN_145535d90 body=221 status=ok
// SIG undefined FUN_145535d90(void)

void FUN_145535d90(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e);
  }
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  plVar5 = (longlong *)*param_1;
  uVar6 = (ulonglong)uVar1;
  plVar4 = plVar2;
  plVar7 = plVar5;
  if (0 < (int)uVar1) {
    do {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *plVar7;
        *plVar7 = 0;
      }
      uVar3 = uVar3 - 1;
      plVar4 = plVar4 + 1;
      plVar7 = plVar7 + 1;
    } while (uVar3 != 0);
    do {
      if (*plVar5 != 0) {
        FUN_144b3f230();
      }
      plVar5 = plVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = plVar2;
  return;
}



// FUNCTION 145535e70 FUN_145535e70 body=113 status=ok
// SIG undefined FUN_145535e70(void)

longlong FUN_145535e70(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  
  FUN_145304f10();
  *(undefined8 *)(param_1 + 0x38) = param_5;
  plVar1 = (longlong *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(longlong **)(param_1 + 0x58) = plVar1;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000005;
  if (param_4 != 0) {
    if (plVar1 != (longlong *)0x0) {
      *plVar1 = param_4;
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  return param_1;
}



// FUNCTION 145535ef0 FUN_145535ef0 body=119 status=ok
// SIG undefined FUN_145535ef0(void)

void FUN_145535ef0(longlong param_1)

{
  FUN_145539ce0(param_1 + 0x40,*(undefined8 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(longlong *)(param_1 + 0x58) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x58),
               (ulonglong)(*(uint *)(param_1 + 100) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffe);
    return;
  }
  return;
}



// FUNCTION 145535f70 FUN_145535f70 body=6580 status=ok
// SIG undefined FUN_145535f70(void)

undefined1 FUN_145535f70(ulonglong param_1)

{
  ulonglong *puVar1;
  code *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint *puVar10;
  longlong *plVar11;
  undefined1 ***pppuVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 **ppuVar22;
  uint uVar23;
  int iVar24;
  longlong **pplVar25;
  ulonglong *puVar26;
  int iVar27;
  undefined1 **ppuVar28;
  byte bVar29;
  bool bVar30;
  ulonglong local_res8;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  int local_res20;
  undefined4 uStackX_24;
  undefined1 ***local_d98;
  undefined1 **ppuStack_d90;
  undefined1 ***local_d88;
  undefined1 **local_d80;
  code *pcStack_d78;
  undefined1 ***local_d70;
  undefined1 **local_d68;
  ulonglong *local_d60;
  undefined1 **local_d58;
  int local_d50;
  undefined1 **local_d48;
  undefined1 **ppuStack_d40;
  undefined1 ***local_d38;
  undefined1 local_d30 [80];
  int local_ce0 [2];
  undefined1 *local_cd8;
  code **local_cd0;
  undefined1 **local_cc8;
  undefined1 local_cc0 [8];
  undefined1 **local_cb8;
  undefined1 **local_cb0;
  int local_ca8;
  longlong *local_ca0;
  undefined4 uStack_c98;
  undefined4 uStack_c94;
  undefined1 ***local_c90;
  undefined1 *local_c80;
  undefined8 local_c78;
  undefined4 uStack_c70;
  undefined4 uStack_c6c;
  undefined1 ***local_c68;
  undefined1 **local_c60 [2];
  undefined1 **local_c50;
  int local_c48;
  uint local_c44;
  undefined1 *local_c40 [33];
  undefined1 **local_b38 [20];
  undefined1 local_a98 [336];
  undefined1 *local_948;
  undefined4 local_940;
  uint local_93c;
  undefined1 local_938 [192];
  undefined1 *local_878;
  undefined4 local_870;
  uint local_86c;
  undefined1 local_868 [256];
  undefined4 *local_768 [20];
  undefined8 local_6c8 [42];
  undefined1 local_578 [96];
  ulonglong local_518;
  undefined8 local_4d8;
  undefined8 local_4c8;
  undefined *local_478;
  undefined8 local_470;
  ulonglong *local_358;
  int local_350;
  uint local_34c;
  ulonglong local_348 [97];
  
  puVar26 = (ulonglong *)(param_1 + 0x40);
  uVar20 = 0;
  local_res10[0] = 0;
  local_res8 = param_1;
  local_d60 = puVar26;
  FUN_145539ce0(puVar26,*(undefined8 *)(param_1 + 0x30));
  cVar4 = FUN_145304f30(param_1);
  if (cVar4 == '\0') {
    return 0;
  }
  FUN_144bdf360(local_b38);
  piVar6 = (int *)FUN_1453052c0(param_1,local_res10,local_b38);
  uVar21 = uVar20;
  uVar18 = uVar20;
  if (*piVar6 < 0) {
    if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar7 = FUN_144bdc640(local_d30);
        local_res8 = 0;
        lVar8 = FUN_144bdc480(uVar7,local_b38[0],&local_res8,0);
        *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x196;
        FUN_144bdc690(local_d30);
        FUN_144becfe0(puVar26,3,1);
        goto LAB_1455376c1;
      }
      uVar7 = FUN_144bdc810(local_6c8,&DAT_14c7ff9d8,4);
      local_res8 = 0;
      lVar8 = FUN_144bdc480(uVar7,local_b38[0],&local_res8,0);
      *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      *(undefined8 *)(lVar8 + 0x40) = 0x196;
      FUN_144bdc8a0(local_6c8);
    }
    FUN_144becfe0(puVar26,3,1);
    goto LAB_1455376c1;
  }
  do {
    if (*(int *)(param_1 + 0x60) <= (int)uVar21) {
      puVar9 = (undefined1 *)FUN_144beeba0(local_b38[0]);
      local_c80 = puVar9;
      if (puVar9 == (undefined1 *)0x0) {
        if ((DAT_14c7ffa28 < 4) && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) goto LAB_1455363ce;
        cVar4 = FUN_144bdbf80();
        if (cVar4 != '\0') {
          uVar7 = FUN_144bdc810(local_6c8,&DAT_14c7ff9d8,4);
          local_d98 = (undefined1 ***)&DAT_00000001;
          ppuStack_d90 = (undefined1 **)FUN_144bddd80;
          local_d88 = local_b38;
          local_d80 = (undefined1 **)&DAT_00000001;
          pcStack_d78 = FUN_144bddd80;
          local_d70 = local_d88;
          lVar8 = FUN_144bdc480(uVar7,"Invalid type name: \'{}\'",&local_d80,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x1a9;
          goto LAB_1455363b7;
        }
        uVar7 = FUN_144bdc640(local_d30);
        local_d98 = (undefined1 ***)&DAT_00000001;
        ppuStack_d90 = (undefined1 **)FUN_144bddd80;
        local_d88 = local_b38;
        local_d80 = (undefined1 **)&DAT_00000001;
        pcStack_d78 = FUN_144bddd80;
        local_d70 = local_d88;
        lVar8 = FUN_144bdc480(uVar7,"Invalid type name: \'{}\'",&local_d80,0);
        *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x1a9;
        FUN_144bdc690(local_d30);
        FUN_144becfe0(puVar26,3,1);
        goto LAB_1455376c1;
      }
      break;
    }
    FUN_144bdf360(local_6c8);
    FUN_144bdff50(local_6c8,"%s::%s",*(undefined8 *)(*(longlong *)(param_1 + 0x58) + uVar18));
    puVar9 = (undefined1 *)FUN_144beeba0(local_6c8[0]);
    local_c80 = puVar9;
    FUN_144bdf2f0(local_6c8);
    uVar21 = (ulonglong)((int)uVar21 + 1);
    uVar18 = uVar18 + 8;
  } while (puVar9 == (undefined1 *)0x0);
  puVar10 = (uint *)FUN_144b45d50(puVar9,local_res10);
  if ((*puVar10 >> 8 & 1) == 0) {
    if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar7 = FUN_144bdc640(local_d30);
        local_d98 = (undefined1 ***)&DAT_00000001;
        ppuStack_d90 = (undefined1 **)FUN_144bddd80;
        local_d88 = local_b38;
        local_d80 = (undefined1 **)&DAT_00000001;
        pcStack_d78 = FUN_144bddd80;
        local_d70 = local_d88;
        lVar8 = FUN_144bdc480(uVar7,"\'{}\' is not an attribute",&local_d80,0);
        *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x1aa;
        FUN_144bdc690(local_d30);
        FUN_144becfe0(puVar26,3,1);
        goto LAB_1455376c1;
      }
      uVar7 = FUN_144bdc810(local_6c8,&DAT_14c7ff9d8,4);
      local_d98 = (undefined1 ***)&DAT_00000001;
      ppuStack_d90 = (undefined1 **)FUN_144bddd80;
      local_d88 = local_b38;
      local_d80 = (undefined1 **)&DAT_00000001;
      pcStack_d78 = FUN_144bddd80;
      local_d70 = local_d88;
      lVar8 = FUN_144bdc480(uVar7,"\'{}\' is not an attribute",&local_d80,0);
      *(undefined8 *)(lVar8 + 0x40) = 0x1aa;
LAB_1455363b7:
      *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      FUN_144bdc8a0(local_6c8);
    }
LAB_1455363ce:
    FUN_144becfe0(puVar26,3,1);
    goto LAB_1455376c1;
  }
  if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
    cVar4 = FUN_144bdbf80();
    if (cVar4 == '\0') {
      uVar7 = FUN_144bdc640(local_d30);
      local_d98 = (undefined1 ***)&DAT_00000001;
      ppuStack_d90 = (undefined1 **)FUN_144bddd80;
      local_d88 = local_b38;
      local_d80 = (undefined1 **)&DAT_00000001;
      pcStack_d78 = FUN_144bddd80;
      local_d70 = local_d88;
      lVar8 = FUN_144bdc480(uVar7,"Attribute \'{}\'",&local_d80,0);
      *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      *(undefined8 *)(lVar8 + 0x40) = 0x1ac;
      *(undefined1 *)(lVar8 + 0x19) = 1;
      FUN_144bdc690(local_d30);
    }
    else {
      uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
      local_d98 = (undefined1 ***)&DAT_00000001;
      ppuStack_d90 = (undefined1 **)FUN_144bddd80;
      local_d88 = local_b38;
      local_d48 = (undefined1 **)0x1;
      ppuStack_d40 = (undefined1 **)FUN_144bddd80;
      local_d38 = local_d88;
      lVar8 = FUN_144bdc480(uVar7,"Attribute \'{}\'",&local_d48,0);
      *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      *(undefined8 *)(lVar8 + 0x40) = 0x1ac;
      *(undefined1 *)(lVar8 + 0x19) = 1;
      FUN_144bdc8a0(local_a98);
    }
  }
  local_cd8 = puVar9;
  plVar11 = (longlong *)FUN_144f69110(&local_c78,puVar9,&DAT_14c6defe0);
  ppuVar28 = (undefined1 **)*plVar11;
  local_d58 = ppuVar28;
  if (((ulonglong)local_c68 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_c68 & 0xfffffffffffffffe);
  }
  cVar4 = FUN_144b45dd0(puVar9,&DAT_14c6dd580);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar4);
  if (ppuVar28 == (undefined1 **)0x0) {
    if (cVar4 != '\0') {
      puVar9 = *(undefined1 **)(param_1 + 0x30);
      local_cd8 = puVar9;
    }
LAB_14553665a:
    local_93c = 0x80000008;
    local_948 = local_938;
    local_940 = 0;
    local_878 = local_868;
    local_870 = 0;
    local_c50 = local_c40;
    local_86c = 0x80000010;
    local_c48 = 0;
    local_c44 = 0x80000020;
    puVar13 = (undefined4 *)FUN_144bef800(puVar9,&local_res18);
    puVar14 = (undefined1 *)0x0;
    if (((byte)*puVar13 & 0x1f) == 7) {
      puVar14 = puVar9;
    }
    if (puVar14 == (undefined1 *)0x0) {
      iVar24 = local_c48 + 1;
      if ((int)(local_c44 & 0x7fffffff) < iVar24) {
        FUN_144bf0cc0(&local_c50,&PTR_vftable_14c6e47c0,(longlong)iVar24);
      }
      lVar8 = (longlong)local_c48;
      local_c48 = iVar24;
      if (local_c50 + lVar8 != (undefined1 **)0x0) {
        local_c50[lVar8] = puVar9;
      }
    }
    else {
      FUN_144bf0830(&local_ca0,puVar9,0);
      while ((plVar11 = local_ca0 + 1, local_ca0 + 1 < (longlong *)CONCAT44(uStack_c94,uStack_c98)
             || (cVar4 = FUN_144bf0850(&local_ca0), plVar11 = local_ca0, cVar4 != '\0'))) {
        local_ca0 = plVar11;
        pbVar15 = (byte *)FUN_144bf04d0(local_ca0,&local_res18);
        if ((*pbVar15 & 0x30) != 0) {
          puVar9 = (undefined1 *)*local_ca0;
          iVar24 = local_c48 + 1;
          if ((int)(local_c44 & 0x7fffffff) < iVar24) {
            FUN_144bf0cc0(&local_c50,&PTR_vftable_14c6e47c0,(longlong)iVar24);
          }
          lVar8 = (longlong)local_c48;
          local_c48 = iVar24;
          if (local_c50 + lVar8 != (undefined1 **)0x0) {
            local_c50[lVar8] = puVar9;
          }
        }
      }
    }
    local_c60[0] = local_c50 + local_c48;
    ppuVar28 = local_c50;
    if (local_c50 != local_c60[0]) {
      do {
        puVar9 = *ppuVar28;
        FUN_144bf0690(&local_cc8,puVar9);
        if (local_cc8 < (undefined1 **)0x2) {
          local_cb0 = (undefined1 **)0x149da8ac8;
        }
        else {
          FUN_144bf0690(local_cc0,puVar9);
          local_cb0 = (undefined1 **)FUN_144bf0530(local_cc0);
        }
        if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
          cVar4 = FUN_144bdbf80();
          if (cVar4 == '\0') {
            uVar23 = (uint)uVar20 | 0x400;
            uVar7 = FUN_144bdc640(local_d30);
            local_d70 = &local_cb0;
            pppuVar12 = &local_d80;
            local_d80 = (undefined1 **)&DAT_00000001;
            pcStack_d78 = FUN_144f50c70;
          }
          else {
            uVar23 = (uint)uVar20 | 0x800;
            uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
            local_d38 = &local_cb0;
            pppuVar12 = &local_d48;
            local_d48 = (undefined1 **)0x1;
            ppuStack_d40 = (undefined1 **)FUN_144f50c70;
          }
          local_d88 = &local_cb0;
          ppuStack_d90 = (undefined1 **)FUN_144f50c70;
          local_d98 = (undefined1 ***)&DAT_00000001;
          lVar8 = FUN_144bdc480(uVar7,"Field \'{}\'",pppuVar12,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x1c4;
          *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
          *(undefined1 *)(lVar8 + 0x19) = 1;
          if (uVar23 >> 0xb != 0) {
            uVar23 = uVar23 & 0xfffff7ff;
            FUN_144bdc8a0(local_a98);
          }
          uVar20 = (ulonglong)uVar23;
          if ((uVar23 >> 10 & 1) != 0) {
            uVar20 = (ulonglong)(uVar23 & 0xfffffbff);
            FUN_144bdc690(local_d30);
          }
        }
        bVar29 = 0;
        pcVar2 = *(code **)(local_res8 + 0x30);
        local_cb8 = local_cb0;
        puVar16 = (undefined8 *)FUN_144f69110(&local_ca0,puVar9,&DAT_14c6dd870);
        pcVar3 = (char *)*puVar16;
        if (((ulonglong)local_c90 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_c90 & 0xfffffffffffffffe);
        }
        if ((pcVar3 != (char *)0x0) && (bVar29 = *pcVar3 != '\0', pcVar3[1] == '\0')) {
          bVar29 = bVar29 | 2;
        }
        local_d80 = local_cb8;
        local_d68 = &local_948;
        local_d70 = (undefined1 ***)CONCAT71(local_d70._1_7_,bVar29);
        pcStack_d78 = pcVar2;
        FUN_1455379e0(&local_res18,&local_res20,puVar9);
        if (local_res20 < 0) {
          if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
            cVar4 = FUN_144bdbf80();
            if (cVar4 != '\0') {
              uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
            }
            else {
              uVar7 = FUN_144bdc640(local_d30);
            }
            local_res8 = 0;
            lVar8 = FUN_144bdc480(uVar7,"Invalid type",&local_res8,0);
            *(undefined8 *)(lVar8 + 0x40) = 0x1c5;
            *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
            if (cVar4 != '\0') {
              FUN_144bdc8a0(local_a98);
            }
            else {
              FUN_144bdc690(local_d30);
            }
          }
          FUN_144becfe0(local_d60,3,1);
          if (3 < DAT_14c7ffa28) {
            lVar8 = FUN_144bdc640(local_d30,&DAT_14c7ff9d8,4);
            *(undefined1 *)(lVar8 + 0x19) = 0xff;
            FUN_144bdc690(local_d30);
          }
          goto LAB_1455375c1;
        }
        if (3 < DAT_14c7ffa28) {
          lVar8 = FUN_144bdc640(local_d30,&DAT_14c7ff9d8,4);
          *(undefined1 *)(lVar8 + 0x19) = 0xff;
          FUN_144bdc690(local_d30);
        }
        ppuVar28 = ppuVar28 + 1;
        param_1 = local_res8;
        puVar26 = local_d60;
      } while (ppuVar28 != local_c60[0]);
    }
    FUN_144bdf360(local_768);
    FUN_145305330(param_1,local_ce0,&local_948,local_768);
    uVar21 = local_res8;
    if (local_ce0[0] < 0) {
      if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
        cVar4 = FUN_144bdbf80();
        bVar30 = cVar4 != '\0';
        if (bVar30) {
          uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
        }
        else {
          uVar7 = FUN_144bdc640(local_d30);
        }
        local_res8 = 0;
        lVar8 = FUN_144bdc480(uVar7,local_768[0],&local_res8,0);
        *(undefined8 *)(lVar8 + 0x40) = 0x1cb;
        *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        if (bVar30) {
          FUN_144bdc8a0(local_a98);
        }
        goto LAB_145537113;
      }
      goto LAB_14553711e;
    }
    if (local_d58 == (undefined1 **)0x0) {
      iVar27 = 0;
      iVar24 = 0;
      local_d38 = (undefined1 ***)0x0;
      local_d48 = (undefined1 **)0x0;
      ppuStack_d40 = (undefined1 **)0x0;
      ppuVar28 = local_c50 + local_c48;
      if (local_c50 == ppuVar28) {
LAB_145537071:
        puVar9 = local_cd8;
        cVar4 = FUN_144bef690(local_cd8);
        if (cVar4 == '\0') {
          if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
            cVar4 = FUN_144bdbf80();
            bVar30 = cVar4 != '\0';
            if (bVar30) {
              uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
            }
            else {
              uVar7 = FUN_144bdc640(local_d30);
            }
            local_res8 = 0;
            lVar8 = FUN_144bdc480(uVar7,"Attribute type \'{}\' cannot be instantiated",&local_res8,0
                                 );
            *(undefined8 *)(lVar8 + 0x40) = 0x206;
            *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
            if (bVar30) {
              FUN_144bdc8a0(local_a98);
            }
LAB_145537113:
            if (!bVar30) {
              FUN_144bdc690(local_d30);
            }
          }
LAB_14553711e:
          FUN_144becfe0(puVar26,3,1);
          goto LAB_1455375b5;
        }
        puVar17 = (ulonglong *)FUN_144bef730(puVar9,&local_c78);
        uVar21 = puVar17[1];
        uVar18 = puVar17[2];
        uVar19 = *puVar17;
        puVar17[2] = 0;
        *puVar17 = 0;
        puVar17[1] = 0;
        *puVar26 = uVar19;
        puVar26[1] = uVar21;
        uVar21 = puVar26[2];
        puVar26[2] = uVar18;
        if ((uVar21 & 1) != 0) {
          FUN_144be6b30(uVar21 & 0xfffffffffffffffe);
        }
        uVar21 = local_res8;
        if (((ulonglong)local_c68 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_c68 & 0xfffffffffffffffe);
          uVar21 = local_res8;
        }
      }
      else {
        ppuVar22 = local_c50;
        if ((char)local_res10[0] == '\0') {
          do {
            local_d58 = &local_948;
            local_d50 = iVar24;
            if (-1 < *(int *)(local_948 + (longlong)iVar24 * 0x18 + 0x10)) {
              local_res18 = *(undefined8 *)(uVar21 + 0x30);
              iVar5 = FUN_1455384f0(&local_res18,*ppuVar22,&local_d58);
              iVar27 = iVar27 + iVar5;
            }
            iVar24 = iVar24 + 1;
            ppuVar22 = ppuVar22 + 1;
            puVar26 = local_d60;
          } while (ppuVar22 != ppuVar28);
        }
        else {
          do {
            local_d58 = &local_948;
            local_d50 = iVar24;
            if (-1 < *(int *)(local_948 + (longlong)iVar24 * 0x18 + 0x10)) {
              local_res18 = 0;
              iVar5 = FUN_1455384f0(&local_res18,*ppuVar22,&local_d58);
              iVar27 = iVar27 + iVar5;
            }
            iVar24 = iVar24 + 1;
            ppuVar22 = ppuVar22 + 1;
          } while (ppuVar22 != ppuVar28);
        }
        puVar9 = local_cd8;
        if (iVar27 == 0) goto LAB_145537071;
        if ((char)local_res10[0] != '\0') {
          if ((DAT_14c7ffa28 < 4) && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) goto LAB_14553711e;
          cVar4 = FUN_144bdbf80();
          bVar30 = cVar4 != '\0';
          if (bVar30) {
            uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
          }
          else {
            uVar7 = FUN_144bdc640(local_d30);
          }
          local_res8 = 0;
          lVar8 = FUN_144bdc480(uVar7,
                                "Auto-typed attributes on objects which contain extra allocations are not supported"
                                ,&local_res8,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x1e7;
          *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
          if (bVar30) {
            FUN_144bdc8a0(local_a98);
          }
          goto LAB_145537113;
        }
        cVar4 = FUN_144f69320(local_cd8);
        if (cVar4 == '\0') {
          if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
            cVar4 = FUN_144bdbf80();
            bVar30 = cVar4 != '\0';
            if (bVar30) {
              uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
            }
            else {
              uVar7 = FUN_144bdc640(local_d30);
            }
            local_res8 = 0;
            lVar8 = FUN_144bdc480(uVar7,"Attribute type \'{}\' cannot be created in place",
                                  &local_res8,0);
            *(undefined8 *)(lVar8 + 0x40) = 0x1e8;
            *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
            if (bVar30) {
              FUN_144bdc8a0(local_a98);
            }
            goto LAB_145537113;
          }
          goto LAB_14553711e;
        }
        plVar11 = (longlong *)FUN_144befe50(puVar9,0x40);
        if ((plVar11 == (longlong *)0x0) || (*plVar11 == 0)) {
          if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
            cVar4 = FUN_144bdbf80();
            bVar30 = cVar4 != '\0';
            if (bVar30) {
              uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
            }
            else {
              uVar7 = FUN_144bdc640(local_d30);
            }
            local_res8 = 0;
            lVar8 = FUN_144bdc480(uVar7,"Attribute type \'{}\' cannot be default-constructed",
                                  &local_res8,0);
            *(undefined8 *)(lVar8 + 0x40) = 0x1e9;
            *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
            if (bVar30) {
              FUN_144bdc8a0(local_a98);
            }
            goto LAB_145537113;
          }
          goto LAB_14553711e;
        }
        FUN_144f6faa0(local_578);
        uVar21 = local_res8;
        uVar7 = FUN_144bef510(*(undefined8 *)(local_res8 + 0x30));
        FUN_144f6fee0(local_578,uVar7);
        FUN_144f6ff10(local_578,puVar9);
        local_478 = &DAT_14c798a68;
        local_4d8 = 0;
        local_518 = local_518 | 0x180280;
        local_4c8 = 0;
        local_470 = 0;
        iVar24 = FUN_144beec90(puVar9);
        uVar23 = iVar24 + 7U & 0xfffffff8;
        iVar24 = FUN_144f70820(local_578);
        plVar11 = *(longlong **)(uVar21 + 0x38);
        lVar8 = (longlong)(int)(iVar24 + uVar23 + iVar27);
        pppuVar12 = (undefined1 ***)(**(code **)(*plVar11 + 8))(plVar11,lVar8);
        ppuStack_d90 = (undefined1 **)((longlong)pppuVar12 + lVar8);
        local_d48 = (undefined1 **)((longlong)(int)uVar23 + (longlong)pppuVar12);
        local_d98 = pppuVar12;
        local_d88 = pppuVar12;
        ppuStack_d40 = ppuStack_d90;
        local_d38 = pppuVar12;
        if (ppuStack_d90 < local_d48) {
          FUN_144bfc170(0xdeadf11d,
                        "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                        ,0x1e,"hkLinearBuffer exhausted");
        }
        uVar18 = FUN_144f70a40(local_578,&local_d48);
        puVar16 = (undefined8 *)FUN_144befe50(uVar18,0x40);
        if ((puVar16 != (undefined8 *)0x0) && ((code *)*puVar16 != (code *)0x0)) {
          (*(code *)*puVar16)(pppuVar12,uVar18,1);
        }
        if (uVar18 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = FUN_144befdb0(uVar18);
        }
        if ((uVar19 & 1) != 0) {
          FUN_144be6b20(uVar19 & 0xfffffffffffffffe);
        }
        *puVar26 = (ulonglong)pppuVar12;
        puVar26[1] = uVar18;
        uVar18 = puVar26[2];
        puVar26[2] = uVar19;
        if ((uVar18 & 1) != 0) {
          FUN_144be6b30(uVar18 & 0xfffffffffffffffe);
        }
        FUN_144f6fbe0(local_578);
      }
      iVar24 = 0;
      local_358 = local_348;
      local_350 = 0;
      local_34c = 0x80000020;
      FUN_145539de0(puVar26,&local_358);
      local_d60 = local_358 + (longlong)local_350 * 3;
      if (local_358 != local_d60) {
        puVar17 = local_358 + 1;
        do {
          if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
            cVar4 = FUN_144bdbf80();
            if (cVar4 == '\0') {
              FUN_144bf0690(&local_res20,*puVar17);
              if (CONCAT44(uStackX_24,local_res20) < 2) {
                local_c60[0] = (undefined1 **)0x149da8ac8;
              }
              else {
                FUN_144bf0690(&local_d58,*puVar17);
                local_c60[0] = (undefined1 **)FUN_144bf0530(&local_d58);
              }
              uVar23 = (uint)uVar20 | 0x1000000;
              uVar7 = FUN_144bdc640(local_d30,&DAT_14c7ff9d8,4);
              pplVar25 = &local_ca0;
              local_d70 = local_c60;
              local_ca0 = (longlong *)&DAT_00000001;
              uStack_c98 = 0x44f50c70;
              uStack_c94 = 1;
              local_c90 = local_d70;
            }
            else {
              FUN_144bf0690(&local_cb8,*puVar17);
              if (local_cb8 < (undefined1 **)0x2) {
                local_cc8 = (undefined1 **)0x149da8ac8;
              }
              else {
                FUN_144bf0690(local_cc0,*puVar17);
                local_cc8 = (undefined1 **)FUN_144bf0530(local_cc0);
              }
              uVar23 = (uint)uVar20 | 0x2000000;
              uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
              pplVar25 = (longlong **)&local_c78;
              local_d70 = &local_cc8;
              local_c78._0_4_ = 1;
              local_c78._4_4_ = 0;
              uStack_c70 = 0x44f50c70;
              uStack_c6c = 1;
              local_c68 = local_d70;
            }
            pcStack_d78 = FUN_144f50c70;
            local_d80 = (undefined1 **)&DAT_00000001;
            lVar8 = FUN_144bdc480(uVar7,"Field \'{}\'",pplVar25,0);
            *(undefined8 *)(lVar8 + 0x40) = 0x211;
            *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
            *(undefined1 *)(lVar8 + 0x19) = 1;
            if (uVar23 >> 0x19 != 0) {
              uVar23 = uVar23 & 0xfdffffff;
              FUN_144bdc8a0(local_a98);
            }
            uVar20 = (ulonglong)uVar23;
            if ((uVar23 >> 0x18 & 1) != 0) {
              uVar20 = (ulonglong)(uVar23 & 0xfeffffff);
              FUN_144bdc690(local_d30);
            }
          }
          local_cb0 = &local_948;
          local_ca8 = iVar24;
          if (*(int *)(local_948 + (longlong)iVar24 * 0x18 + 0x10) < 0) {
            FUN_144beed60(*puVar17,&local_d98);
            if (local_d98 == (undefined1 ***)0x0) {
              if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
                cVar4 = FUN_144bdbf80();
                if (cVar4 != '\0') {
                  uVar23 = 0;
                  uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
                }
                else {
                  uVar23 = 0x10000000;
                  uVar7 = FUN_144bdc640(local_d30);
                }
                local_res8 = 0;
                lVar8 = FUN_144bdc480(uVar7,"No value is specified, and the field has no default",
                                      &local_res8,0);
                *(undefined8 *)(lVar8 + 0x40) = 0x21d;
                *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
                if (cVar4 != '\0') {
                  FUN_144bdc8a0(local_a98);
                }
LAB_145537882:
                if (uVar23 != 0) {
                  FUN_144bdc690(local_d30);
                }
              }
LAB_14553788d:
              FUN_144becfe0(puVar26,3,1);
              if (((ulonglong)local_d88 & 1) != 0) {
                FUN_144be6b30((ulonglong)local_d88 & 0xfffffffffffffffe);
              }
              goto LAB_1455378ad;
            }
            plVar11 = (longlong *)FUN_144bef430(*puVar17,&local_c78,&DAT_14c6dd3e0);
            lVar8 = *plVar11;
            if (((ulonglong)local_c68 & 1) != 0) {
              FUN_144be6b30((ulonglong)local_c68 & 0xfffffffffffffffe);
            }
            if (lVar8 == 0) {
              piVar6 = (int *)FUN_144bec0a0(puVar17 + -1,&local_res18,&local_d98);
              if (*piVar6 < 0) {
                if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
                  cVar4 = FUN_144bdbf80();
                  if (cVar4 == '\0') {
                    uVar23 = (uint)uVar20 | 0x40000000;
                    uVar7 = FUN_144bdc640(local_d30);
                  }
                  else {
                    uVar23 = (uint)uVar20 | 0x80000000;
                    uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
                  }
                  local_res8 = 0;
                  lVar8 = FUN_144bdc480(uVar7,"Cannot assign default value to field",&local_res8,0);
                  *(undefined8 *)(lVar8 + 0x40) = 0x225;
                  *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
                  if ((int)uVar23 < 0) {
                    FUN_144bdc8a0(local_a98);
                  }
                  uVar23 = uVar23 & 0x40000000;
                  goto LAB_145537882;
                }
                goto LAB_14553788d;
              }
            }
            else {
              FUN_144bfbed0(puVar17[-1],local_d98,0x10);
            }
            if (((ulonglong)local_d88 & 1) != 0) {
              FUN_144be6b30((ulonglong)local_d88 & 0xfffffffffffffffe);
            }
          }
          else {
            if ((char)local_res10[0] == '\0') {
              local_cd8 = *(undefined1 **)(uVar21 + 0x30);
            }
            else {
              local_cd8 = (undefined1 *)0x0;
            }
            local_cd0 = (code **)&local_d48;
            piVar6 = (int *)FUN_1455387e0(&local_cd8,&local_res8,puVar17 + -1);
            if (*piVar6 < 0) {
              if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
                cVar4 = FUN_144bdbf80();
                if (cVar4 != '\0') {
                  uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
                }
                else {
                  uVar7 = FUN_144bdc640(local_d30);
                }
                local_res8 = 0;
                lVar8 = FUN_144bdc480(uVar7,"Failed to parse value",&local_res8,0);
                *(undefined8 *)(lVar8 + 0x40) = 0x218;
                *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
                if (cVar4 != '\0') {
                  FUN_144bdc8a0(local_a98);
                }
                else {
                  FUN_144bdc690(local_d30);
                }
              }
              FUN_144becfe0(puVar26,3,1);
LAB_1455378ad:
              if (3 < DAT_14c7ffa28) {
                lVar8 = FUN_144bdc640(local_d30,&DAT_14c7ff9d8,4);
                *(undefined1 *)(lVar8 + 0x19) = 0xff;
                FUN_144bdc690(local_d30);
              }
              puVar26 = local_358;
              if (local_358 + (longlong)local_350 * 3 != local_358) {
                puVar17 = local_358 + (longlong)local_350 * 3 + 2;
                do {
                  if ((puVar17[-3] & 1) != 0) {
                    FUN_144be6b30(puVar17[-3] & 0xfffffffffffffffe);
                  }
                  puVar1 = puVar17 + -5;
                  puVar17 = puVar17 + -3;
                } while (puVar1 != puVar26);
              }
              goto LAB_14553757c;
            }
          }
          iVar24 = iVar24 + 1;
          if (3 < DAT_14c7ffa28) {
            lVar8 = FUN_144bdc640(local_d30,&DAT_14c7ff9d8,4);
            *(undefined1 *)(lVar8 + 0x19) = 0xff;
            FUN_144bdc690(local_d30);
          }
          puVar1 = puVar17 + 2;
          puVar17 = puVar17 + 3;
        } while (puVar1 != local_d60);
      }
      puVar9 = local_c80;
      uVar20 = 0;
      if ((char)local_res10[0] != '\0') {
        uVar21 = *puVar26;
        if (local_c80 != (undefined1 *)0x0) {
          uVar20 = FUN_144befdb0(local_c80);
        }
        if ((uVar20 & 1) != 0) {
          FUN_144be6b20(uVar20 & 0xfffffffffffffffe);
        }
        *puVar26 = uVar21;
        puVar26[1] = (ulonglong)puVar9;
        uVar21 = puVar26[2];
        puVar26[2] = uVar20;
        if ((uVar21 & 1) != 0) {
          FUN_144be6b30(uVar21 & 0xfffffffffffffffe);
        }
      }
      puVar26 = local_358;
      if (local_358 + (longlong)local_350 * 3 != local_358) {
        puVar17 = local_358 + (longlong)local_350 * 3 + 2;
        do {
          if ((puVar17[-3] & 1) != 0) {
            FUN_144be6b30(puVar17[-3] & 0xfffffffffffffffe);
          }
          puVar1 = puVar17 + -5;
          puVar17 = puVar17 + -3;
        } while (puVar1 != puVar26);
      }
LAB_14553757c:
      local_350 = 0;
      if ((-1 < (int)local_34c) && (local_358 != (ulonglong *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_358,(ulonglong)(local_34c & 0x7fffffff) * 0x18);
      }
    }
    else {
      puVar17 = (ulonglong *)
                (*(code *)local_d58[1])(&local_ca0,&local_948,*(undefined8 *)(param_1 + 0x30));
      uVar20 = puVar17[1];
      uVar21 = puVar17[2];
      uVar18 = *puVar17;
      puVar17[2] = 0;
      *puVar17 = 0;
      puVar17[1] = 0;
      *puVar26 = uVar18;
      puVar26[1] = uVar20;
      uVar20 = puVar26[2];
      puVar26[2] = uVar21;
      if ((uVar20 & 1) != 0) {
        FUN_144be6b30(uVar20 & 0xfffffffffffffffe);
      }
      if (((ulonglong)local_c90 & 1) != 0) {
        FUN_144be6b30((ulonglong)local_c90 & 0xfffffffffffffffe);
      }
    }
LAB_1455375b5:
    FUN_144bdf2f0(local_768);
LAB_1455375c1:
    local_c48 = 0;
    if ((-1 < (int)local_c44) && (local_c50 != (undefined1 **)0x0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_c50,(ulonglong)(local_c44 & 0x7fffffff) << 3);
    }
    local_c50 = (undefined1 **)0x0;
    local_c44 = 0x80000000;
    local_870 = 0;
    if ((-1 < (int)local_86c) && (local_878 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_878,(ulonglong)(local_86c & 0x7fffffff) << 4);
    }
    local_878 = (undefined1 *)0x0;
    local_86c = 0x80000000;
    local_940 = 0;
    if ((-1 < (int)local_93c) && (local_948 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_948,(ulonglong)(local_93c & 0x7fffffff) * 0x18);
    }
    local_948 = (undefined1 *)0x0;
    local_93c = 0x80000000;
  }
  else {
    if (ppuVar28[1] != (undefined1 *)0x0) {
      puVar9 = *ppuVar28;
      local_cd8 = puVar9;
      goto LAB_14553665a;
    }
    if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 != '\0') {
        pppuVar12 = (undefined1 ***)FUN_144bef0c0(puVar9,local_c60);
        uVar7 = FUN_144bdc810(local_a98,&DAT_14c7ff9d8,4);
      }
      else {
        pppuVar12 = (undefined1 ***)FUN_144bef0c0(puVar9,&local_d58);
        uVar7 = FUN_144bdc640(local_d30,&DAT_14c7ff9d8,4);
      }
      local_d98 = (undefined1 ***)&DAT_00000001;
      ppuStack_d90 = (undefined1 **)FUN_144c14800;
      local_d80 = (undefined1 **)&DAT_00000001;
      pcStack_d78 = FUN_144c14800;
      local_d88 = pppuVar12;
      local_d70 = pppuVar12;
      lVar8 = FUN_144bdc480(uVar7,"Parsing type ({}) has no conversion function",&local_d80,0);
      *(undefined8 *)(lVar8 + 0x40) = 0x1b2;
      *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      if (cVar4 != '\0') {
        FUN_144bdc8a0(local_a98);
      }
      else {
        FUN_144bdc690(local_d30);
      }
    }
    FUN_144becfe0(puVar26,3,1);
  }
  if (3 < DAT_14c7ffa28) {
    lVar8 = FUN_144bdc640(local_d30,&DAT_14c7ff9d8,4);
    *(undefined1 *)(lVar8 + 0x19) = 0xff;
    FUN_144bdc690(local_d30);
  }
LAB_1455376c1:
  FUN_144bdf2f0(local_b38);
  return 1;
}



// FUNCTION 145537930 FUN_145537930 body=99 status=ok
// SIG undefined FUN_145537930(void)

undefined8 * FUN_145537930(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  *param_2 = *(undefined8 *)(param_1 + 0x40);
  param_2[1] = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(ulonglong *)(param_1 + 0x50);
  param_2[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  uVar1 = *(ulonglong *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1455379a0 FUN_1455379a0 body=60 status=ok
// SIG undefined FUN_1455379a0(void)

ulonglong FUN_1455379a0(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_2 + uVar1;
  *param_1 = uVar2;
  if (param_1[1] < uVar2) {
    FUN_144bfc170(0xdeadf11d,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                  ,0x1e,"hkLinearBuffer exhausted");
  }
  return uVar1;
}



// FUNCTION 1455379e0 FUN_1455379e0 body=831 status=ok
// SIG undefined FUN_1455379e0(void)

undefined4 *
FUN_1455379e0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  uint *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 local_res8;
  uint local_1c4;
  undefined1 local_1c0 [80];
  undefined1 local_170 [344];
  
  puVar5 = (uint *)FUN_144bef800(param_3,&local_res8);
  switch(*puVar5 & 0x1f) {
  case 0:
    FUN_145537d50(param_1,param_2,param_3,param_4);
    pcVar3 = (code *)swi(3);
    puVar8 = (undefined4 *)(*pcVar3)();
    return puVar8;
  case 1:
    FUN_145537d60(param_1,param_2,param_3,param_4);
    pcVar3 = (code *)swi(3);
    puVar8 = (undefined4 *)(*pcVar3)();
    return puVar8;
  case 2:
  case 4:
  case 5:
    FUN_145537d70(param_1,param_2,param_3,param_4);
    break;
  case 3:
    if ((param_4[1] == 0) && (cVar4 = FUN_144bef570(param_3,&DAT_14c6dbdf0), cVar4 == '\0')) {
      if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar6 = FUN_144bdc640(local_1c0);
          local_res8 = 0;
          lVar7 = FUN_144bdc480(uVar6,"Non-managed strings in attribute owner are not supported",
                                &local_res8,0);
          *(char **)(lVar7 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x51;
          FUN_144bdc690(local_1c0);
          *param_2 = 0x80040200;
          return param_2;
        }
        uVar6 = FUN_144bdc810(local_170,&DAT_14c7ff9d8,4);
        local_res8 = 0;
        lVar7 = FUN_144bdc480(uVar6,"Non-managed strings in attribute owner are not supported",
                              &local_res8,0);
        *(char **)(lVar7 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x51;
        FUN_144bdc8a0(local_170);
      }
      *param_2 = 0x80040200;
    }
    else {
      uVar6 = *param_4;
      plVar2 = (longlong *)param_4[3];
      local_1c4 = CONCAT31(local_1c4._1_3_,*(undefined1 *)(param_4 + 2));
      iVar9 = (int)plVar2[1] + 1;
      if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar9) {
        FUN_145539fa0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      puVar1 = (undefined8 *)(*plVar2 + (longlong)(int)plVar2[1] * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = uVar6;
        puVar1[1] = (ulonglong)local_1c4 << 0x20;
        puVar1[2] = 0xffffffffffffffff;
      }
      *(int *)(plVar2 + 1) = iVar9;
      *param_2 = 0;
    }
    break;
  case 6:
    FUN_1455381a0(param_1,param_2,param_3,param_4);
    break;
  case 7:
    if ((3 < DAT_14c7ffa28) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar6 = FUN_144bdc640(local_1c0);
        local_res8 = 0;
        lVar7 = FUN_144bdc480(uVar6,"Record fields are not supported",&local_res8,0);
        *(char **)(lVar7 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x4a;
        FUN_144bdc690(local_1c0);
        *param_2 = 0x80040200;
        return param_2;
      }
      uVar6 = FUN_144bdc810(local_170,&DAT_14c7ff9d8,4);
      local_res8 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Record fields are not supported",&local_res8,0);
      *(char **)(lVar7 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x4a;
      FUN_144bdc8a0(local_170);
    }
    *param_2 = 0x80040200;
    break;
  case 8:
    FUN_145537e20(param_1,param_2,param_3,param_4);
    break;
  default:
    FUN_144bfc170(0xfdbd9f9,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x1b,"Bad type visitor switch");
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 145537d50 FUN_145537d50 body=1 status=ok
// SIG undefined FUN_145537d50(void)

void FUN_145537d50(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 145537d60 FUN_145537d60 body=1 status=ok
// SIG undefined FUN_145537d60(void)

void FUN_145537d60(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 145537d70 FUN_145537d70 body=165 status=ok
// SIG undefined FUN_145537d70(void)

undefined4 *
FUN_145537d70(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  uint local_2c;
  
  plVar2 = (longlong *)param_4[3];
  uVar3 = *param_4;
  local_2c = CONCAT31(local_2c._1_3_,*(undefined1 *)(param_4 + 2));
  iVar4 = (int)plVar2[1] + 1;
  if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar4) {
    FUN_145539fa0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar1 = (undefined8 *)(*plVar2 + (longlong)(int)plVar2[1] * 0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = uVar3;
    puVar1[1] = (ulonglong)local_2c << 0x20;
    puVar1[2] = 0xffffffffffffffff;
  }
  *(int *)(plVar2 + 1) = iVar4;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 145537e20 FUN_145537e20 body=894 status=ok
// SIG undefined FUN_145537e20(void)

undefined4 *
FUN_145537e20(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong local_1e8;
  undefined4 local_1dc;
  undefined8 local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  ulonglong local_1c8;
  undefined1 local_1c0 [8];
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  FUN_144beff00(param_3,&local_1e8);
  if (local_1e8 == 0) {
    if ((DAT_14c7ffa28 < 4) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_1455380d6;
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(local_1b8);
      local_1e8 = 0;
      lVar3 = FUN_144bdc480(uVar2,"Variant arrays are not supported",&local_1e8,0);
      *(char **)(lVar3 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x5f;
      FUN_144bdc690(local_1b8);
      *param_2 = 0x80040200;
      return param_2;
    }
    uVar2 = FUN_144bdc810(local_168,&DAT_14c7ff9d8,4);
    local_1e8 = 0;
    lVar3 = FUN_144bdc480(uVar2,"Variant arrays are not supported",&local_1e8,0);
    *(undefined8 *)(lVar3 + 0x40) = 0x5f;
  }
  else {
    puVar4 = (uint *)FUN_144bef800(local_1e8,local_1c0);
    if ((*puVar4 & 0x1f) - 2 < 4) {
      if (param_4[1] != 0) {
LAB_1455380e1:
        puVar6 = (undefined8 *)FUN_144befe50(param_3,1);
        iStack_1d0 = 0;
        if (puVar6 != (undefined8 *)0x0) {
          iStack_1d0 = (int)((ulonglong)*puVar6 >> 8);
        }
        local_1d8 = *param_4;
        plVar5 = (longlong *)param_4[3];
        local_1dc = CONCAT31(local_1dc._1_3_,*(undefined1 *)(param_4 + 2));
        iVar7 = (int)plVar5[1] + 1;
        local_1c8 = 0xffffffffffffffff;
        if (iStack_1d0 == 0) {
          iStack_1d0 = -1;
        }
        uStack_1cc = local_1dc;
        if ((int)(*(uint *)((longlong)plVar5 + 0xc) & 0x7fffffff) < iVar7) {
          FUN_145539fa0(plVar5,&PTR_vftable_14c6e47a0,(longlong)iVar7);
        }
        puVar6 = (undefined8 *)(*plVar5 + (longlong)(int)plVar5[1] * 0x18);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = local_1d8;
          puVar6[1] = CONCAT44(uStack_1cc,iStack_1d0);
          puVar6[2] = local_1c8;
        }
        *(int *)(plVar5 + 1) = iVar7;
        *param_2 = 0;
        return param_2;
      }
      plVar5 = (longlong *)FUN_144bef430(param_3,&local_1d8,&DAT_14c6dd3e0);
      lVar3 = *plVar5;
      if ((local_1c8 & 1) != 0) {
        FUN_144be6b30(local_1c8 & 0xfffffffffffffffe);
      }
      if (lVar3 == 0) goto LAB_1455380e1;
      if ((DAT_14c7ffa28 < 4) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_1455380d6;
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') {
        uVar2 = FUN_144bdc640(local_1b8);
        local_1e8 = 0;
        lVar3 = FUN_144bdc480(uVar2,"ValueArray in attribute owner is not supported",&local_1e8,0);
        *(char **)(lVar3 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar3 + 0x40) = 0x61;
        FUN_144bdc690(local_1b8);
        *param_2 = 0x80040200;
        return param_2;
      }
      uVar2 = FUN_144bdc810(local_168,&DAT_14c7ff9d8,4);
      local_1e8 = 0;
      lVar3 = FUN_144bdc480(uVar2,"ValueArray in attribute owner is not supported",&local_1e8,0);
      *(undefined8 *)(lVar3 + 0x40) = 0x61;
    }
    else {
      if ((DAT_14c7ffa28 < 4) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0')) goto LAB_1455380d6;
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') {
        uVar2 = FUN_144bdc640(local_1b8);
        local_1e8 = 0;
        lVar3 = FUN_144bdc480(uVar2,"Arrays of compounds are not supported",&local_1e8,0);
        *(char **)(lVar3 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar3 + 0x40) = 0x60;
        FUN_144bdc690(local_1b8);
        *param_2 = 0x80040200;
        return param_2;
      }
      uVar2 = FUN_144bdc810(local_168,&DAT_14c7ff9d8,4);
      local_1e8 = 0;
      lVar3 = FUN_144bdc480(uVar2,"Arrays of compounds are not supported",&local_1e8,0);
      *(undefined8 *)(lVar3 + 0x40) = 0x60;
    }
  }
  *(char **)(lVar3 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
  FUN_144bdc8a0(local_168);
LAB_1455380d6:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1455381a0 FUN_1455381a0 body=847 status=ok
// SIG undefined FUN_1455381a0(void)

undefined4 *
FUN_1455381a0(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  uint *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  longlong local_218;
  longlong local_210;
  undefined4 local_204;
  undefined8 local_200;
  code *pcStack_1f8;
  undefined8 local_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [80];
  undefined1 local_168 [336];
  
  FUN_144beff00(param_3,&local_218);
  if (local_218 == 0) {
LAB_1455383dd:
    if (param_4[1] != 0) {
      local_200 = *param_4;
      local_1f0 = param_4[2];
      uStack_1e8 = *(undefined4 *)(param_4 + 3);
      uStack_1e4 = *(undefined4 *)((longlong)param_4 + 0x1c);
      pcStack_1f8 = (code *)0x0;
      FUN_1455379e0(param_1,param_2,param_4[1],&local_200);
      return param_2;
    }
    if ((DAT_14c7ffa28 < 4) && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) goto LAB_14553849d;
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar6 = FUN_144bdc640(local_1b8);
      local_210 = 0;
      lVar8 = FUN_144bdc480(uVar6,"Pointers in attribute owner are not supported",&local_210,0);
      *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      *(undefined8 *)(lVar8 + 0x40) = 0x73;
      FUN_144bdc690(local_1b8);
      *param_2 = 0x80040200;
      return param_2;
    }
    uVar6 = FUN_144bdc810(local_168,&DAT_14c7ff9d8,4);
    local_210 = 0;
    lVar8 = FUN_144bdc480(uVar6,"Pointers in attribute owner are not supported",&local_210,0);
    *(undefined8 *)(lVar8 + 0x40) = 0x73;
  }
  else {
    FUN_144beff00(param_3,&local_210);
    lVar8 = local_210;
    puVar4 = (uint *)FUN_144bef800(local_210,&local_218);
    lVar5 = 0;
    if ((*puVar4 & 0x1f) == 0) {
      lVar5 = lVar8;
    }
    if (lVar5 != 0) goto LAB_1455383dd;
    FUN_144beff00(param_3,&local_210);
    cVar3 = FUN_144b45dd0(local_210,&DAT_14c6dc530);
    if (cVar3 != '\0') {
      plVar2 = (longlong *)param_4[3];
      local_1e0 = *param_4;
      local_204 = CONCAT31(local_204._1_3_,*(undefined1 *)(param_4 + 2));
      uStack_1d4 = local_204;
      iVar9 = (int)plVar2[1] + 1;
      uStack_1d8 = 0;
      local_1d0 = 0xffffffffffffffff;
      if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar9) {
        FUN_145539fa0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      puVar1 = (undefined8 *)(*plVar2 + (longlong)(int)plVar2[1] * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = local_1e0;
        puVar1[1] = CONCAT44(uStack_1d4,uStack_1d8);
        puVar1[2] = local_1d0;
      }
      *(int *)(plVar2 + 1) = iVar9;
      *param_2 = 0;
      return param_2;
    }
    if ((DAT_14c7ffa28 < 4) && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) goto LAB_14553849d;
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      FUN_144beff00(param_3,&local_210);
      uVar6 = FUN_144bef0c0(local_210,local_1c8);
      uVar7 = FUN_144bdc640(local_1b8,&DAT_14c7ff9d8,4);
      local_200 = 1;
      pcStack_1f8 = FUN_144c14800;
      local_1f0 = uVar6;
      lVar8 = FUN_144bdc480(uVar7,"Pointer to invalid type: {}",&local_200,0);
      *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      *(undefined8 *)(lVar8 + 0x40) = 0x81;
      FUN_144bdc690(local_1b8);
      *param_2 = 0x80040200;
      return param_2;
    }
    FUN_144beff00(param_3,&local_218);
    uVar6 = FUN_144bef0c0(local_218,&local_1e0);
    uVar7 = FUN_144bdc810(local_168,&DAT_14c7ff9d8,4);
    local_200 = 1;
    pcStack_1f8 = FUN_144c14800;
    local_1f0 = uVar6;
    lVar8 = FUN_144bdc480(uVar7,"Pointer to invalid type: {}",&local_200,0);
    *(undefined8 *)(lVar8 + 0x40) = 0x81;
  }
  *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
  FUN_144bdc8a0(local_168);
LAB_14553849d:
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 1455384f0 FUN_1455384f0 body=658 status=ok
// SIG undefined FUN_1455384f0(void)

ulonglong FUN_1455384f0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  ulonglong local_res20;
  ulonglong local_58;
  longlong local_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  puVar6 = (uint *)FUN_144bef800(param_2,local_res8);
  switch(*puVar6 & 0x1f) {
  case 0:
    FUN_1455387b0(param_1,param_2,param_3);
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return uVar10;
  case 1:
    FUN_1455387c0(param_1,param_2,param_3);
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return uVar10;
  case 2:
  case 4:
  case 5:
    return 0;
  case 3:
    cVar4 = FUN_144b45dd0(param_2,&DAT_14c6dbdf0);
    if (cVar4 == '\0') {
      lVar11 = (longlong)*(int *)(*(longlong *)*param_3 + 0x10 + (longlong)(int)param_3[1] * 0x18);
      lVar9 = ((longlong *)*param_3)[0x1a];
      return (ulonglong)
             (((int)*(undefined8 *)(lVar9 + 8 + lVar11 * 0x10) -
              (int)*(undefined8 *)(lVar9 + lVar11 * 0x10)) - 1);
    }
    return 0;
  case 6:
    break;
  case 7:
    FUN_1455387d0(param_1,param_2,param_3);
    pcVar3 = (code *)swi(3);
    uVar10 = (*pcVar3)();
    return uVar10;
  case 8:
    FUN_144beff00(param_2,&local_res20);
    if (local_res20 == 0) {
      lVar9 = *param_1;
    }
    else {
      FUN_144beff00(param_2,&local_50);
      lVar9 = local_50;
    }
    lVar11 = *(longlong *)*param_3;
    lVar2 = ((longlong *)*param_3)[0x1a];
    iVar13 = *(int *)(lVar11 + (longlong)(int)param_3[1] * 0x18 + 0x14);
    piVar12 = (int *)((longlong)*(int *)(lVar11 + 0x10 + (longlong)(int)param_3[1] * 0x18) * 0x10 +
                     lVar2);
    plVar7 = (longlong *)FUN_144bef430(param_2,local_48,&DAT_14c6dd3e0);
    lVar11 = *plVar7;
    if ((local_38 & 1) != 0) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
    }
    iVar13 = (int)(((longlong)iVar13 * 0x10 + lVar2) - (longlong)piVar12 >> 4);
    if (lVar11 == 0) {
      uVar14 = 0;
    }
    else {
      iVar5 = FUN_144beec90(lVar9);
      uVar14 = iVar5 * iVar13;
    }
    puVar8 = (undefined4 *)FUN_144bef800(lVar9,local_res8);
    lVar11 = 0;
    if (((byte)*puVar8 & 0x1f) == 3) {
      lVar11 = lVar9;
    }
    if (((lVar11 != 0) && (cVar4 = FUN_144b45dd0(lVar9,&DAT_14c6dbdf0), cVar4 == '\0')) &&
       (lVar9 = (longlong)iVar13, 0 < iVar13)) {
      do {
        piVar1 = piVar12 + 2;
        iVar13 = *piVar12;
        piVar12 = piVar12 + 4;
        uVar14 = (uVar14 - 1) + (*piVar1 - iVar13);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    return (ulonglong)uVar14;
  default:
    FUN_144bfc170(0xfdbd9f9,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x1b,"Bad type visitor switch");
    return 0;
  }
  FUN_144beff00(param_2,&local_res20);
  if (1 < local_res20) {
    FUN_144beff00(param_2,&local_58);
    puVar6 = (uint *)FUN_144bef800(local_58,local_res8);
    uVar10 = 0;
    if ((*puVar6 & 0x1f) == 0) {
      uVar10 = local_58;
    }
    if (uVar10 == 0) {
      return 0;
    }
  }
  local_50 = 0;
  uVar14 = FUN_1455384f0(&local_50,*param_1,param_3);
  return (ulonglong)uVar14;
}



// FUNCTION 1455387b0 FUN_1455387b0 body=1 status=ok
// SIG undefined FUN_1455387b0(void)

void FUN_1455387b0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1455387c0 FUN_1455387c0 body=1 status=ok
// SIG undefined FUN_1455387c0(void)

void FUN_1455387c0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1455387d0 FUN_1455387d0 body=1 status=ok
// SIG undefined FUN_1455387d0(void)

void FUN_1455387d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 1455387e0 FUN_1455387e0 body=310 status=ok
// SIG undefined FUN_1455387e0(void)

undefined4 *
FUN_1455387e0(undefined8 param_1,undefined4 *param_2,longlong param_3,longlong *param_4)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 local_res8 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar2 = (uint *)FUN_144bef800(*(undefined8 *)(param_3 + 8),local_res8);
  switch(*puVar2 & 0x1f) {
  case 0:
    FUN_145538c30(param_1,param_2,param_3,param_4);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  case 1:
    FUN_145538c40(param_1,param_2,param_3,param_4);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  case 2:
  case 4:
  case 5:
    FUN_145538c60(param_1,param_2,param_3,param_4);
    break;
  case 3:
    puVar3 = (undefined4 *)
             (((longlong *)*param_4)[0x1a] +
             (longlong)*(int *)(*(longlong *)*param_4 + 0x10 + (longlong)(int)param_4[1] * 0x18) *
             0x10);
    local_18 = *puVar3;
    uStack_14 = puVar3[1];
    uStack_10 = puVar3[2];
    uStack_c = puVar3[3];
    FUN_145538940(param_1,param_2,param_3,&local_18);
    break;
  case 6:
    FUN_1455396e0(param_1,param_2,param_3,param_4);
    break;
  case 7:
    FUN_145538c50(param_1,param_2,param_3,param_4);
    pcVar1 = (code *)swi(3);
    puVar3 = (undefined4 *)(*pcVar1)();
    return puVar3;
  case 8:
    FUN_145538e10(param_1,param_2,param_3,param_4);
    break;
  default:
    FUN_144bfc170(0x261011c5,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x3c,"Bad var visitor switch");
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 145538940 FUN_145538940 body=743 status=ok
// SIG undefined FUN_145538940(void)

undefined4 *
FUN_145538940(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 *param_4)

{
  char *pcVar1;
  longlong lVar2;
  char cVar3;
  uint *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 local_res20;
  undefined8 in_stack_fffffffffffffdf8;
  undefined4 uVar8;
  char *local_1f8;
  char *local_1f0;
  undefined8 local_1e8;
  code *local_1e0;
  undefined8 *local_1d8;
  undefined1 local_1d0 [80];
  undefined1 local_180 [344];
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffdf8 >> 0x20);
  pcVar1 = (char *)*param_4;
  if (((pcVar1 == (char *)param_4[1]) || (*pcVar1 != '\"')) ||
     (iVar7 = (int)(char *)param_4[1] - (int)pcVar1, pcVar1[(longlong)iVar7 + -1] != '\"')) {
    if ((3 < DAT_14c7ffa28) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      local_1d8 = param_4;
      if (cVar3 == '\0') {
        uVar5 = FUN_144bdc640(local_1d0);
        local_1e8 = 1;
        local_1e0 = FUN_144c19e40;
        lVar6 = FUN_144bdc480(uVar5,"Non-quoted string value: \'{}\'",&local_1e8,0);
        *(char **)(lVar6 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0xd1;
        FUN_144bdc690(local_1d0);
      }
      else {
        uVar5 = FUN_144bdc810(local_180,&DAT_14c7ff9d8,4);
        local_1e8 = 1;
        local_1e0 = FUN_144c19e40;
        lVar6 = FUN_144bdc480(uVar5,"Non-quoted string value: \'{}\'",&local_1e8,0);
        *(undefined8 *)(lVar6 + 0x40) = 0xd1;
LAB_145538bee:
        *(char **)(lVar6 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        FUN_144bdc8a0(local_180);
      }
    }
LAB_145538c02:
    *param_2 = 0x80040200;
  }
  else {
    lVar6 = param_3[1];
    lVar2 = *param_3;
    local_1f8 = pcVar1 + 1;
    local_1f0 = pcVar1 + (longlong)(iVar7 + -2) + 1;
    if (((lVar6 == 0) || (cVar3 = FUN_144b45dd0(lVar6,&DAT_14c6dbdf0), cVar3 == '\0')) ||
       ((puVar4 = (uint *)FUN_144b45d50(lVar6,&local_res20), (*puVar4 >> 3 & 1) != 0 || (lVar2 == 0)
        ))) {
      uVar5 = FUN_1455379a0(*(undefined8 *)(param_1 + 8),
                            (longlong)(((int)local_1f0 - (int)local_1f8) + 1));
      iVar7 = ((int)local_1f0 - (int)local_1f8) + 1;
      FUN_144f5a610(&local_1f8,&local_res20,uVar5,iVar7,CONCAT44(uVar8,iVar7));
      (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffeU) + 0x28))
                ((longlong *)(param_3[2] & 0xfffffffffffffffeU),&local_res20,*param_3,param_3[1],
                 uVar5);
      if ((int)local_res20 < 0) {
        if ((3 < DAT_14c7ffa28) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
          cVar3 = FUN_144bdbf80();
          if (cVar3 != '\0') {
            uVar5 = FUN_144bdc810(local_180,&DAT_14c7ff9d8,4);
            local_res20 = 0;
            lVar6 = FUN_144bdc480(uVar5,"Set string failed",&local_res20,0);
            *(undefined8 *)(lVar6 + 0x40) = 0xdf;
            goto LAB_145538bee;
          }
          uVar5 = FUN_144bdc640(local_1d0);
          local_res20 = 0;
          lVar6 = FUN_144bdc480(uVar5,"Set string failed",&local_res20,0);
          *(char **)(lVar6 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
          *(undefined8 *)(lVar6 + 0x40) = 0xdf;
          FUN_144bdc690(local_1d0);
        }
        goto LAB_145538c02;
      }
    }
    else {
      FUN_144be3880(lVar2,local_1f8,(int)local_1f0 - (int)local_1f8);
    }
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 145538c30 FUN_145538c30 body=1 status=ok
// SIG undefined FUN_145538c30(void)

void FUN_145538c30(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 145538c40 FUN_145538c40 body=1 status=ok
// SIG undefined FUN_145538c40(void)

void FUN_145538c40(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 145538c50 FUN_145538c50 body=1 status=ok
// SIG undefined FUN_145538c50(void)

void FUN_145538c50(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 145538c60 FUN_145538c60 body=428 status=ok
// SIG undefined FUN_145538c60(void)

undefined4 *
FUN_145538c60(undefined8 param_1,undefined4 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 *puVar1;
  longlong *plVar2;
  char cVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 local_res20 [8];
  undefined8 local_1e8;
  code *local_1e0;
  undefined4 *local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined1 local_1b0 [80];
  undefined1 local_160 [344];
  
  puVar1 = (undefined4 *)
           (((longlong *)*param_4)[0x1a] +
           (longlong)*(int *)(*(longlong *)*param_4 + 0x10 + (longlong)(int)param_4[1] * 0x18) *
           0x10);
  local_1d0 = *puVar1;
  uStack_1cc = puVar1[1];
  uStack_1c8 = puVar1[2];
  uStack_1c4 = puVar1[3];
  piVar4 = (int *)FUN_144becdf0(param_3,local_res20,&local_1d0);
  if (-1 < *piVar4) {
    *param_2 = 0;
    return param_2;
  }
  if ((3 < DAT_14c7ffa28) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
    cVar3 = FUN_144bdbf80();
    plVar2 = (longlong *)*param_4;
    puVar1 = (undefined4 *)
             (plVar2[0x1a] +
             (longlong)*(int *)(*plVar2 + 0x10 + (longlong)(int)param_4[1] * 0x18) * 0x10);
    local_1c0 = *puVar1;
    uStack_1bc = puVar1[1];
    uStack_1b8 = puVar1[2];
    uStack_1b4 = puVar1[3];
    if (cVar3 == '\0') {
      local_1d0 = local_1c0;
      uStack_1cc = uStack_1bc;
      uStack_1c8 = uStack_1b8;
      uStack_1c4 = uStack_1b4;
      uVar5 = FUN_144bdc640(local_1b0);
      local_1e8 = 1;
      local_1e0 = FUN_144c19e40;
      local_1d8 = &local_1d0;
      lVar6 = FUN_144bdc480(uVar5,"Invalid value: \'{}\'",&local_1e8,0);
      *(char **)(lVar6 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0xef;
      FUN_144bdc690(local_1b0);
      *param_2 = 0x80040200;
      return param_2;
    }
    uVar5 = FUN_144bdc810(local_160,&DAT_14c7ff9d8,CONCAT71((int7)((ulonglong)plVar2 >> 8),4),
                          *plVar2 + (longlong)(int)param_4[1] * 0x18);
    local_1e8 = 1;
    local_1e0 = FUN_144c19e40;
    local_1d8 = &local_1c0;
    lVar6 = FUN_144bdc480(uVar5,"Invalid value: \'{}\'",&local_1e8,0);
    *(char **)(lVar6 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
    *(undefined8 *)(lVar6 + 0x40) = 0xef;
    FUN_144bdc8a0(local_160);
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 145538e10 FUN_145538e10 body=2249 status=ok
// SIG undefined FUN_145538e10(void)

/* WARNING: Removing unreachable block (ram,0x00014553954c) */

undefined4 * FUN_145538e10(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  longlong lVar13;
  int *piVar14;
  byte bVar15;
  int iVar16;
  code *pcVar17;
  ulonglong uVar18;
  code *pcVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  bool bVar25;
  ulonglong local_res18;
  ulonglong local_res20;
  ulonglong *in_stack_fffffffffffffba8;
  ulonglong local_448;
  code *pcStack_440;
  undefined8 local_438;
  ulonglong local_430;
  int local_428;
  ulonglong local_420;
  int local_418;
  ulonglong local_410;
  char *local_408;
  char *local_400;
  int local_3f8 [2];
  undefined8 *local_3f0;
  undefined8 *local_3e8;
  undefined8 *local_3e0;
  undefined8 *local_3d8;
  code *local_3d0;
  ulonglong uStack_3c8;
  undefined1 local_3c0 [4];
  undefined1 local_3bc [4];
  undefined1 local_3b8 [4];
  undefined1 local_3b4 [4];
  ulonglong local_3b0;
  ulonglong local_3a8;
  code *local_3a0;
  undefined8 *local_398;
  undefined1 local_390 [80];
  undefined1 local_340 [80];
  undefined1 local_2f0 [336];
  undefined1 local_1a0 [352];
  
  local_410 = 0;
  local_res18 = local_res18 & 0xffffffff00000000;
  uVar9 = 0;
  pcVar19 = (code *)0x0;
  local_res20 = local_res20 & 0xffffffff00000000;
  local_420 = 0;
  lVar13 = *(longlong *)*param_4;
  iVar16 = *(int *)(lVar13 + 0x14 + (longlong)(int)param_4[1] * 0x18);
  lVar1 = ((longlong *)*param_4)[0x1a];
  local_3e8 = (undefined8 *)
              ((longlong)*(int *)(lVar13 + (longlong)(int)param_4[1] * 0x18 + 0x10) * 0x10 + lVar1);
  plVar8 = (longlong *)FUN_144bef430(param_3[1],&local_448,&DAT_14c6dd3e0);
  lVar13 = *plVar8;
  if (((ulonglong)local_438 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_438 & 0xfffffffffffffffe);
  }
  local_3b0 = ((longlong)iVar16 * 0x10 + lVar1) - (longlong)local_3e8 >> 4;
  iVar16 = (int)local_3b0;
  if (lVar13 == 0) {
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffeU) + 0x50))
              ((longlong *)(param_3[2] & 0xfffffffffffffffeU),&local_res18,*param_3,param_3[1],
               local_3b0 & 0xffffffff);
    in_stack_fffffffffffffba8 = &local_448;
    local_448 = 0;
    pcStack_440 = (code *)0x0;
    local_438 = (undefined8 *)0x0;
    local_430 = 0;
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffeU) + 0x48))
              ((longlong *)(param_3[2] & 0xfffffffffffffffeU),&local_res18,*param_3,param_3[1],
               in_stack_fffffffffffffba8);
    local_410 = local_448;
    local_res20 = CONCAT44(local_res20._4_4_,local_438._4_4_);
    local_420 = local_430;
    uVar9 = local_430;
    pcVar19 = pcStack_440;
  }
  else {
    puVar20 = (ulonglong *)*param_3;
    if (iVar16 == 0) {
      uVar18 = 0;
    }
    else {
      local_438 = (undefined8 *)0x0;
      local_448 = 0;
      pcStack_440 = (code *)0x0;
      local_430 = 0;
      (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffeU) + 0x48))
                ((longlong *)(param_3[2] & 0xfffffffffffffffeU),&local_res18,puVar20,param_3[1],
                 &local_448);
      pcVar19 = pcStack_440;
      if ((local_430 & 1) != 0) {
        FUN_144be6b30(local_430 & 0xfffffffffffffffe);
      }
      iVar6 = FUN_144beec90(pcVar19);
      in_stack_fffffffffffffba8 = &local_448;
      local_438 = (undefined8 *)0x0;
      local_430 = 0;
      local_448 = 0;
      pcStack_440 = (code *)0x0;
      (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffeU) + 0x48))
                ((longlong *)(param_3[2] & 0xfffffffffffffffeU),&local_res18,*param_3,param_3[1],
                 in_stack_fffffffffffffba8);
      pcVar19 = pcStack_440;
      if ((local_430 & 1) != 0) {
        FUN_144be6b30(local_430 & 0xfffffffffffffffe);
      }
      puVar2 = *(ulonglong **)(param_1 + 8);
      local_410 = *puVar2;
      uVar18 = (longlong)(iVar6 * iVar16) + local_410;
      *puVar2 = uVar18;
      if (puVar2[1] < uVar18) {
        FUN_144bfc170(0xdeadf11d,
                      "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Util/hkLinearBuffer.inl"
                      ,0x1e,"hkLinearBuffer exhausted");
      }
      uVar9 = 0;
      local_res20 = local_res20 & 0xffffffff00000000;
      local_420 = 0;
      if (pcVar19 != (code *)0x0) {
        uVar7 = FUN_144beec90(pcVar19);
        local_res20 = CONCAT44(local_res20._4_4_,uVar7);
        uVar9 = FUN_144befdb0(pcVar19);
        local_420 = uVar9;
        if ((uVar9 & 1) != 0) {
          FUN_144be6b20(uVar9 & 0xfffffffffffffffe);
          *puVar20 = local_410;
          puVar20[1] = uVar18;
          goto LAB_1455390af;
        }
      }
    }
    *puVar20 = local_410;
    puVar20[1] = uVar18;
  }
LAB_1455390af:
  local_428 = 0;
  if (0 < iVar16) {
    uVar18 = uVar9 & 0xfffffffffffffffe;
    uVar21 = (ulonglong)((uint)uVar9 & 1);
    local_3e0 = local_3e8;
    uVar22 = uVar21 | uVar18;
    local_res18 = CONCAT71(local_res18._1_7_,(byte)uVar22) & 0xffffffffffffff01;
    local_418 = 0;
    bVar15 = (byte)uVar22 & 1;
    do {
      puVar23 = (undefined8 *)((longlong)local_418 + local_410);
      if (bVar15 != 0) {
        FUN_144be6b20(uVar18);
      }
      local_3f0 = (undefined8 *)0x0;
      local_3d0 = (code *)0x0;
      uStack_3c8 = 0;
      pcVar17 = local_3d0;
      uVar9 = uStack_3c8;
      if (((pcVar19 != (code *)0x0) &&
          (puVar10 = (undefined4 *)FUN_144bef800(pcVar19,local_3c0), pcVar17 = local_3d0,
          uVar9 = uStack_3c8, ((byte)*puVar10 & 0x1f) == 3)) &&
         (pcVar17 = pcVar19, local_3f0 = puVar23, uVar9 = uVar22, uVar21 != 0)) {
        FUN_144be6b20(uVar18);
      }
      uStack_3c8 = uVar9;
      uVar9 = uStack_3c8;
      if (uVar21 != 0) {
        FUN_144be6b30(uVar18);
      }
      puVar24 = local_3e0;
      puVar4 = local_3f0;
      uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffba8 >> 0x20);
      if (local_3f0 != (undefined8 *)0x0) {
        pcVar3 = (char *)*local_3e0;
        if (((pcVar3 == (char *)local_3e0[1]) || (*pcVar3 != '\"')) ||
           (iVar16 = (int)(char *)local_3e0[1] - (int)pcVar3, pcVar3[(longlong)iVar16 + -1] != '\"')
           ) {
          if ((3 < DAT_14c7ffa28) || (cVar5 = FUN_144bdbf80(), cVar5 != '\0')) {
            cVar5 = FUN_144bdbf80();
            if (cVar5 != '\0') {
              uVar12 = FUN_144bdc810(local_2f0,&DAT_14c7ff9d8,4);
              local_438 = puVar24;
              pcStack_440 = FUN_144c19e40;
              local_448 = 1;
              puVar20 = &local_448;
            }
            else {
              uVar12 = FUN_144bdc640(local_390);
              local_398 = puVar24;
              local_3a0 = FUN_144c19e40;
              local_3a8 = 1;
              puVar20 = &local_3a8;
            }
            lVar13 = FUN_144bdc480(uVar12,"Non-quoted string value: \'{}\'",puVar20,0);
            *(undefined8 *)(lVar13 + 0x40) = 0xd1;
            *(char **)(lVar13 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
            if (cVar5 != '\0') {
              FUN_144bdc8a0(local_2f0);
            }
            else {
              FUN_144bdc690(local_390);
            }
          }
        }
        else {
          local_408 = pcVar3 + 1;
          local_400 = pcVar3 + (longlong)(iVar16 + -2) + 1;
          if (pcVar17 != (code *)0x0) {
            cVar5 = FUN_144b45dd0(pcVar17,&DAT_14c6dbdf0);
            uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffba8 >> 0x20);
            if (cVar5 != '\0') {
              puVar11 = (uint *)FUN_144b45d50(pcVar17,local_3bc);
              uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffba8 >> 0x20);
              if ((*puVar11 >> 3 & 1) == 0) {
                FUN_144be3880(puVar4,local_408,(int)local_400 - (int)local_408);
                goto LAB_14553933f;
              }
            }
          }
          in_stack_fffffffffffffba8 =
               (ulonglong *)
               FUN_1455379a0(*(undefined8 *)(param_1 + 8),
                             (longlong)(((int)local_400 - (int)local_408) + 1));
          iVar16 = ((int)local_400 - (int)local_408) + 1;
          FUN_144f5a610(&local_408,local_3b8,in_stack_fffffffffffffba8,iVar16,CONCAT44(uVar7,iVar16)
                       );
          (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x28))
                    ((longlong *)(uVar9 & 0xfffffffffffffffe),local_3f8,local_3f0,pcVar17,
                     in_stack_fffffffffffffba8);
          if (-1 < local_3f8[0]) goto LAB_14553933f;
          if ((3 < DAT_14c7ffa28) || (cVar5 = FUN_144bdbf80(), cVar5 != '\0')) {
            cVar5 = FUN_144bdbf80();
            if (cVar5 == '\0') {
              bVar15 = 0x40;
              uVar12 = FUN_144bdc640(local_340);
              local_res18 = 0;
              lVar13 = FUN_144bdc480(uVar12,"Set string failed",&local_res18,0);
            }
            else {
              bVar15 = 0x80;
              uVar12 = FUN_144bdc810(local_1a0,&DAT_14c7ff9d8,4);
              local_res20 = 0;
              lVar13 = FUN_144bdc480(uVar12,"Set string failed",&local_res20,0);
            }
            *(undefined8 *)(lVar13 + 0x40) = 0xdf;
            *(char **)(lVar13 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
            if ((char)bVar15 < '\0') {
              bVar15 = bVar15 & 0x7f;
              FUN_144bdc8a0(local_1a0);
            }
            if ((bVar15 & 0x40) != 0) {
              FUN_144bdc690(local_340);
            }
          }
        }
        if ((DAT_14c7ffa28 < 4) && (cVar5 = FUN_144bdbf80(), cVar5 == '\0')) goto LAB_14553966a;
        cVar5 = FUN_144bdbf80();
        bVar25 = cVar5 != '\0';
        if (bVar25) {
          uVar12 = FUN_144bdc810(local_2f0,&DAT_14c7ff9d8,4);
          local_res18 = 0;
          lVar13 = FUN_144bdc480(uVar12,"Set string failed",&local_res18,0);
          *(char **)(lVar13 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
          *(undefined8 *)(lVar13 + 0x40) = 0x11d;
          local_res18 = local_res18 & 0xffffffff00000000;
          FUN_144bdc8a0(local_2f0);
        }
        else {
          uVar12 = FUN_144bdc640(local_390);
          local_res18 = 0;
          lVar13 = FUN_144bdc480(uVar12,"Set string failed",&local_res18,0);
          *(char **)(lVar13 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
          *(undefined8 *)(lVar13 + 0x40) = 0x11d;
        }
LAB_14553965f:
        if (!bVar25) {
          FUN_144bdc690(local_390);
        }
LAB_14553966a:
        *param_2 = 0x80040200;
        if ((uVar9 & 1) != 0) {
          FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
        }
        if ((local_420 & 1) == 0) {
          return param_2;
        }
        FUN_144be6b30(local_420 & 0xfffffffffffffffe);
        return param_2;
      }
      local_3d8 = puVar23;
      local_3d0 = pcVar19;
      uStack_3c8 = uVar22;
      if ((byte)local_res18 != '\0') {
        FUN_144be6b20(uVar18);
      }
      puVar23 = local_3e8 + (longlong)local_428 * 2;
      piVar14 = (int *)FUN_144becdf0(&local_3d8,local_3b4,puVar23);
      iVar16 = *piVar14;
      if ((uStack_3c8 & 1) != 0) {
        FUN_144be6b30(uStack_3c8 & 0xfffffffffffffffe);
      }
      puVar24 = local_3e0;
      if (iVar16 < 0) {
        if ((DAT_14c7ffa28 < 4) && (cVar5 = FUN_144bdbf80(), cVar5 == '\0')) goto LAB_14553966a;
        cVar5 = FUN_144bdbf80();
        bVar25 = cVar5 != '\0';
        if (bVar25) {
          uVar12 = FUN_144bdc810(local_2f0,&DAT_14c7ff9d8,4);
        }
        else {
          uVar12 = FUN_144bdc640(local_390);
        }
        pcStack_440 = FUN_144c19e40;
        local_448 = 1;
        local_438 = puVar23;
        lVar13 = FUN_144bdc480(uVar12,"Invalid value parsed: \'{}\'",&local_448,0);
        *(undefined8 *)(lVar13 + 0x40) = 0x121;
        *(char **)(lVar13 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        if (bVar25) {
          FUN_144bdc8a0(local_2f0);
        }
        goto LAB_14553965f;
      }
LAB_14553933f:
      if ((uVar9 & 1) != 0) {
        FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
      }
      local_3e0 = puVar24 + 2;
      local_428 = local_428 + 1;
      local_418 = local_418 + (int)local_res20;
      uVar9 = local_420;
      if ((int)local_3b0 <= local_428) break;
      bVar15 = (byte)local_res18;
    } while( true );
  }
  *param_2 = 0;
  if ((uVar9 & 1) != 0) {
    FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1455396e0 FUN_1455396e0 body=1527 status=ok
// SIG undefined FUN_1455396e0(void)

undefined4 *
FUN_1455396e0(undefined8 *param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  uint *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined8 uVar9;
  int *piVar10;
  undefined8 local_res18 [2];
  longlong local_2b8;
  ulonglong uStack_2b0;
  ulonglong local_2a8;
  undefined1 local_2a0 [8];
  longlong local_298;
  ulonglong uStack_290;
  undefined8 local_288;
  code *local_280;
  longlong *local_278;
  undefined1 local_270 [88];
  undefined8 local_218 [20];
  undefined1 local_178 [336];
  
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_2a8 = 0;
  (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res18,*param_3,param_3[1],
             &local_2b8);
  uVar4 = uStack_2b0;
  if ((local_2a8 & 1) != 0) {
    FUN_144be6b30(local_2a8 & 0xfffffffffffffffe);
  }
  if (1 < uVar4) {
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0;
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x48))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res18,*param_3,param_3[1],
               &local_2b8);
    uVar4 = uStack_2b0;
    if ((local_2a8 & 1) != 0) {
      FUN_144be6b30(local_2a8 & 0xfffffffffffffffe);
    }
    puVar6 = (uint *)FUN_144bef800(uVar4,local_2a0);
    uVar7 = 0;
    if ((*puVar6 & 0x1f) == 0) {
      uVar7 = uVar4;
    }
    if (uVar7 == 0) {
      plVar1 = (longlong *)
               (((longlong *)*param_4)[0x1a] +
               (longlong)*(int *)(*(longlong *)*param_4 + 0x10 + (longlong)(int)param_4[1] * 0x18) *
               0x10);
      local_298 = *plVar1;
      uStack_290 = plVar1[1];
      FUN_144bdfbf0(local_218,&local_298);
      lVar8 = FUN_144beeba0(local_218[0]);
      if (lVar8 == 0) {
        if ((DAT_14c7ffa28 < 4) && (cVar5 = FUN_144bdbf80(), cVar5 == '\0')) goto LAB_145539a81;
        cVar5 = FUN_144bdbf80();
        plVar2 = (longlong *)*param_4;
        plVar1 = (longlong *)
                 (plVar2[0x1a] +
                 (longlong)*(int *)(*plVar2 + 0x10 + (longlong)(int)param_4[1] * 0x18) * 0x10);
        if (cVar5 == '\0') {
          local_298 = *plVar1;
          uStack_290 = plVar1[1];
          uVar9 = FUN_144bdc640(local_270);
          local_288 = 1;
          local_280 = FUN_144c19e40;
          local_278 = &local_298;
          lVar8 = FUN_144bdc480(uVar9,"Invalid type name: \'{}\'",&local_288,0);
          *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
          *(undefined8 *)(lVar8 + 0x40) = 0x139;
          FUN_144bdc690(local_270);
          *param_2 = 0x80040200;
          FUN_144bdf2f0(local_218);
          return param_2;
        }
        local_2b8 = *plVar1;
        uStack_2b0 = plVar1[1];
        uVar9 = FUN_144bdc810(local_178,&DAT_14c7ff9d8,CONCAT71((int7)((ulonglong)plVar2 >> 8),4),
                              *plVar2 + (longlong)(int)param_4[1] * 0x18);
        local_288 = 1;
        local_280 = FUN_144c19e40;
        local_278 = &local_2b8;
        lVar8 = FUN_144bdc480(uVar9,"Invalid type name: \'{}\'",&local_288,0);
        *(undefined8 *)(lVar8 + 0x40) = 0x139;
      }
      else {
        local_2b8 = lVar8;
        puVar6 = (uint *)FUN_144bef800(lVar8,local_2a0);
        uStack_2b0 = FUN_144beffb0(*puVar6 & 0x1f);
        local_2a8 = FUN_144befdb0(uStack_2b0);
        if ((local_2a8 & 1) != 0) {
          FUN_144be6b20(local_2a8 & 0xfffffffffffffffe);
        }
        (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x40))
                  ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res18,*param_3,param_3[1],
                   &local_2b8);
        bVar3 = -1 < (int)local_res18[0];
        if ((local_2a8 & 1) != 0) {
          FUN_144be6b30(local_2a8 & 0xfffffffffffffffe);
        }
        if (bVar3) {
          *param_2 = 0;
          FUN_144bdf2f0(local_218);
          return param_2;
        }
        if ((DAT_14c7ffa28 < 4) && (cVar5 = FUN_144bdbf80(), cVar5 == '\0')) goto LAB_145539a81;
        cVar5 = FUN_144bdbf80();
        if (cVar5 == '\0') {
          uVar9 = FUN_144bdc640(local_270);
          local_res18[0] = 0;
          lVar8 = FUN_144bdc480(uVar9,"Set type pointer failed",local_res18,0);
          *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
          *(undefined8 *)(lVar8 + 0x40) = 0x13a;
          FUN_144bdc690(local_270);
          *param_2 = 0x80040200;
          FUN_144bdf2f0(local_218);
          return param_2;
        }
        uVar9 = FUN_144bdc810(local_178,&DAT_14c7ff9d8,4);
        local_res18[0] = 0;
        lVar8 = FUN_144bdc480(uVar9,"Set type pointer failed",local_res18,0);
        *(undefined8 *)(lVar8 + 0x40) = 0x13a;
      }
      *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      FUN_144bdc8a0(local_178);
LAB_145539a81:
      *param_2 = 0x80040200;
      FUN_144bdf2f0(local_218);
      return param_2;
    }
  }
  FUN_144bef730(*param_1,&local_2b8);
  uStack_290 = param_1[1];
  local_298 = 0;
  piVar10 = (int *)FUN_1455387e0(&local_298,local_res18,&local_2b8,param_4);
  if (*piVar10 < 0) {
    if ((3 < DAT_14c7ffa28) || (cVar5 = FUN_144bdbf80(), cVar5 != '\0')) {
      cVar5 = FUN_144bdbf80();
      if (cVar5 == '\0') {
        uVar9 = FUN_144bdc640(local_270);
        local_res18[0] = 0;
        lVar8 = FUN_144bdc480(uVar9,"Parse owner failed",local_res18,0);
        *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x130;
        FUN_144bdc690(local_270);
        *param_2 = 0x80040200;
        goto LAB_145539ca5;
      }
      uVar9 = FUN_144bdc810(local_178,&DAT_14c7ff9d8,4);
      local_res18[0] = 0;
      lVar8 = FUN_144bdc480(uVar9,"Parse owner failed",local_res18,0);
      *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
      *(undefined8 *)(lVar8 + 0x40) = 0x130;
      FUN_144bdc8a0(local_178);
    }
  }
  else {
    (**(code **)(*(longlong *)(param_3[2] & 0xfffffffffffffffe) + 0x40))
              ((longlong *)(param_3[2] & 0xfffffffffffffffe),local_res18,*param_3,param_3[1],
               &local_2b8);
    if (-1 < (int)local_res18[0]) {
      *param_2 = 0;
      goto LAB_145539ca5;
    }
    if ((3 < DAT_14c7ffa28) || (cVar5 = FUN_144bdbf80(), cVar5 != '\0')) {
      cVar5 = FUN_144bdbf80();
      if (cVar5 == '\0') {
        uVar9 = FUN_144bdc640(local_270);
        local_res18[0] = 0;
        lVar8 = FUN_144bdc480(uVar9,"Set pointer failed",local_res18,0);
        *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x131;
        FUN_144bdc690(local_270);
        *param_2 = 0x80040200;
      }
      else {
        uVar9 = FUN_144bdc810(local_178,&DAT_14c7ff9d8,4);
        local_res18[0] = 0;
        lVar8 = FUN_144bdc480(uVar9,"Set pointer failed",local_res18,0);
        *(char **)(lVar8 + 0x38) = "Reflect\\Attributes\\hkAttributeReader.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x131;
        FUN_144bdc8a0(local_178);
        *param_2 = 0x80040200;
      }
      goto LAB_145539ca5;
    }
  }
  *param_2 = 0x80040200;
LAB_145539ca5:
  if ((local_2a8 & 1) != 0) {
    FUN_144be6b30(local_2a8 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145539ce0 FUN_145539ce0 body=246 status=ok
// SIG undefined FUN_145539ce0(void)

void FUN_145539ce0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  uint *puVar5;
  undefined1 local_res8 [8];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  lVar1 = param_1[1];
  lVar2 = *param_1;
  if ((((lVar1 == 0) || (cVar4 = FUN_144b45dd0(lVar1,&DAT_14c6dd580), cVar4 == '\0')) ||
      (puVar5 = (uint *)FUN_144b45d50(lVar1,local_res8), (*puVar5 >> 3 & 1) != 0)) || (lVar2 == 0))
  {
    FUN_144becfe0(param_1,3,1);
    return;
  }
  local_28 = *param_1;
  local_18 = 0;
  local_20 = param_2;
  if (param_2 != 0) {
    local_18 = FUN_144befdb0(param_2);
  }
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144becfe0(&local_28,3,1);
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = param_1[2];
  param_1[2] = 0;
  if ((uVar3 & 1) == 0) {
    return;
  }
  FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  return;
}



// FUNCTION 145539de0 FUN_145539de0 body=437 status=ok
// SIG undefined FUN_145539de0(void)

void FUN_145539de0(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 *puVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined1 local_res8 [8];
  undefined1 local_58 [16];
  ulonglong local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  
  lVar2 = param_1[1];
  puVar5 = (undefined4 *)FUN_144bef800(lVar2,local_res8);
  lVar6 = 0;
  if (((byte)*puVar5 & 0x1f) == 7) {
    lVar6 = lVar2;
  }
  if (lVar6 == 0) {
    iVar9 = (int)param_2[1] + 1;
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar9) {
      FUN_144c00810(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar9);
    }
    puVar8 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = *param_1;
      puVar8[1] = param_1[1];
      uVar3 = param_1[2];
      puVar8[2] = uVar3;
      if ((uVar3 & 1) != 0) {
        FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      }
    }
    *(int *)(param_2 + 1) = iVar9;
    return;
  }
  FUN_144bf0830(&local_40,param_1[1],0);
  while ((puVar8 = local_40 + 1, local_40 + 1 < local_38 ||
         (cVar4 = FUN_144bf0850(&local_40), puVar8 = local_40, cVar4 != '\0'))) {
    local_40 = puVar8;
    pbVar7 = (byte *)FUN_144bf04d0(local_40,local_res8);
    if ((*pbVar7 & 0x30) != 0) {
      puVar8 = (undefined8 *)FUN_144bebf80(param_1,local_58,*local_40);
      iVar9 = (int)param_2[1] + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar9) {
        FUN_144c00810(param_2,&PTR_vftable_14c6e47c0,(longlong)iVar9);
      }
      puVar1 = (undefined8 *)(*param_2 + (longlong)(int)param_2[1] * 0x18);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *puVar8;
        puVar1[1] = puVar8[1];
        puVar1[2] = puVar8[2];
        puVar8[2] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
      }
      *(int *)(param_2 + 1) = iVar9;
      if ((local_48 & 1) != 0) {
        FUN_144be6b30(local_48 & 0xfffffffffffffffe);
      }
    }
  }
  return;
}



// FUNCTION 145539fa0 FUN_145539fa0 body=281 status=ok
// SIG undefined FUN_145539fa0(void)

ulonglong FUN_145539fa0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 14553a0c0 FUN_14553a0c0 body=160 status=ok
// SIG undefined FUN_14553a0c0(void)

undefined4 * FUN_14553a0c0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x18))(plVar1,local_res8,param_3);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a160 FUN_14553a160 body=250 status=ok
// SIG undefined FUN_14553a160(void)

undefined4 *
FUN_14553a160(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined4 *local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  puVar4 = local_res20;
  uVar3 = local_res18;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      local_58 = *puVar4;
      uStack_54 = puVar4[1];
      uStack_50 = puVar4[2];
      uStack_4c = puVar4[3];
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x18));
      puVar5 = (undefined4 *)
               (**(code **)(*plVar1 + 0x20))(plVar1,local_res8,uVar3,&local_58,param_5,param_6);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar5 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar6 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a260 FUN_14553a260 body=272 status=ok
// SIG undefined FUN_14553a260(void)

undefined4 *
FUN_14553a260(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined4 *local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  bVar5 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      local_58 = *local_res20;
      uStack_54 = local_res20[1];
      uStack_50 = local_res20[2];
      uStack_4c = local_res20[3];
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0x28))
                         (plVar1,local_res8,local_res18,&local_58,param_5,param_6,param_7,param_8);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a370 FUN_14553a370 body=238 status=ok
// SIG undefined FUN_14553a370(void)

undefined4 *
FUN_14553a370(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar4 = local_res20;
  uVar3 = local_res18;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x18));
      puVar5 = (undefined4 *)
               (**(code **)(*plVar1 + 0x30))(plVar1,local_res8,uVar3,uVar4,param_5,param_6);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar5 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar6 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a460 FUN_14553a460 body=258 status=ok
// SIG undefined FUN_14553a460(void)

undefined4 *
FUN_14553a460(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar4 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0x38))
                         (plVar1,local_res8,local_res18,local_res20,param_5,param_6,param_7,param_8)
      ;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a570 FUN_14553a570 body=186 status=ok
// SIG undefined FUN_14553a570(void)

undefined4 *
FUN_14553a570(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x40))(plVar1,local_res8,param_3,param_4);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a630 FUN_14553a630 body=186 status=ok
// SIG undefined FUN_14553a630(void)

undefined4 *
FUN_14553a630(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x48))(plVar1,local_res8,param_3,param_4);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a6f0 FUN_14553a6f0 body=170 status=ok
// SIG undefined FUN_14553a6f0(void)

undefined4 *
FUN_14553a6f0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x50))(plVar1,local_res8,param_3,param_4);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a7a0 FUN_14553a7a0 body=168 status=ok
// SIG undefined FUN_14553a7a0(void)

undefined4 *
FUN_14553a7a0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x58))(plVar1,local_res8,param_3,param_4);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a850 FUN_14553a850 body=170 status=ok
// SIG undefined FUN_14553a850(void)

undefined4 *
FUN_14553a850(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x60))(plVar1,local_res8,param_3,param_4);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a900 FUN_14553a900 body=170 status=ok
// SIG undefined FUN_14553a900(void)

undefined4 *
FUN_14553a900(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x68))(plVar1,local_res8,param_3,param_4);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553a9b0 FUN_14553a9b0 body=182 status=ok
// SIG undefined FUN_14553a9b0(void)

undefined4 *
FUN_14553a9b0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      local_38 = *param_4;
      uStack_34 = param_4[1];
      uStack_30 = param_4[2];
      uStack_2c = param_4[3];
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x78))(plVar1,local_res8,param_3,&local_38);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553aa70 FUN_14553aa70 body=185 status=ok
// SIG undefined FUN_14553aa70(void)

undefined4 *
FUN_14553aa70(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      local_38 = *param_4;
      uStack_34 = param_4[1];
      uStack_30 = param_4[2];
      uStack_2c = param_4[3];
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x80))(plVar1,local_res8,param_3,&local_38);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553ab30 FUN_14553ab30 body=163 status=ok
// SIG undefined FUN_14553ab30(void)

undefined4 * FUN_14553ab30(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x88))(plVar1,local_res8,param_3);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553abe0 FUN_14553abe0 body=268 status=ok
// SIG undefined FUN_14553abe0(void)

undefined4 * FUN_14553abe0(longlong param_1,undefined4 *param_2,undefined8 param_3,float *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 local_res8 [8];
  
  uVar3 = *(undefined8 *)(param_4 + 2);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)param_4;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  auVar12._0_4_ = param_4[4] - *param_4;
  auVar12._4_4_ = param_4[5] - param_4[1];
  auVar12._8_4_ = param_4[6] - param_4[2];
  auVar12._12_4_ = param_4[7] - param_4[3];
  fVar9 = auVar12._0_4_ * auVar12._0_4_;
  fVar10 = auVar12._4_4_ * auVar12._4_4_;
  fVar11 = auVar12._8_4_ * auVar12._8_4_;
  fVar13 = fVar10 + fVar9 + fVar11;
  if (fVar13 == 0.0) {
    *(undefined1 (*) [16])(param_1 + 0x40) = ZEXT816(0);
  }
  else {
    auVar8._4_4_ = fVar10 + fVar9 + fVar11;
    auVar8._0_4_ = fVar13;
    auVar8._8_4_ = fVar10 + fVar9 + fVar11;
    auVar8._12_4_ = fVar10 + fVar9 + fVar11;
    auVar8 = sqrtps(ZEXT816(0),auVar8);
    auVar12 = divps(auVar12,auVar8);
    *(undefined1 (*) [16])(param_1 + 0x40) = auVar12;
  }
  bVar5 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)(**(code **)(*plVar1 + 0x90))(plVar1,local_res8,param_3,param_4);
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553acf0 FUN_14553acf0 body=163 status=ok
// SIG undefined FUN_14553acf0(void)

undefined4 * FUN_14553acf0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0x98))(plVar1,local_res8,param_3);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553ada0 FUN_14553ada0 body=241 status=ok
// SIG undefined FUN_14553ada0(void)

undefined4 *
FUN_14553ada0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar4 = local_res20;
  uVar3 = local_res18;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x18));
      puVar5 = (undefined4 *)
               (**(code **)(*plVar1 + 0xa0))(plVar1,local_res8,uVar3,uVar4,param_5,param_6);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar5 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar6 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553aea0 FUN_14553aea0 body=278 status=ok
// SIG undefined FUN_14553aea0(void)

undefined4 *
FUN_14553aea0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar5 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = local_res20;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xa8))
                         (plVar1,local_res8,local_res18,uVar3,param_5,param_6,param_7,param_8);
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553afc0 FUN_14553afc0 body=251 status=ok
// SIG undefined FUN_14553afc0(void)

undefined4 *
FUN_14553afc0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar5 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = local_res20;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xb0))
                         (plVar1,local_res8,local_res18,uVar3,param_5,param_6,param_7);
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553b0c0 FUN_14553b0c0 body=325 status=ok
// SIG undefined FUN_14553b0c0(void)

undefined4 *
FUN_14553b0c0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined4 param_10)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar4 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0xb8))
                         (plVar1,local_res8,local_res18,local_res20,param_5,param_6,param_7,param_8,
                          param_9,param_10);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553b210 FUN_14553b210 body=261 status=ok
// SIG undefined FUN_14553b210(void)

undefined4 *
FUN_14553b210(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar4 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0xc0))
                         (plVar1,local_res8,local_res18,local_res20,param_5,param_6,param_7,param_8)
      ;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553b320 FUN_14553b320 body=241 status=ok
// SIG undefined FUN_14553b320(void)

undefined4 *
FUN_14553b320(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar4 = local_res20;
  uVar3 = local_res18;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x18));
      puVar5 = (undefined4 *)
               (**(code **)(*plVar1 + 0xe8))(plVar1,local_res8,uVar3,uVar4,param_5,param_6);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar5 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar6 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553b420 FUN_14553b420 body=251 status=ok
// SIG undefined FUN_14553b420(void)

undefined4 *
FUN_14553b420(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar5 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = local_res20;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xd8))
                         (plVar1,local_res8,local_res18,uVar3,param_5,param_6,param_7);
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553b520 FUN_14553b520 body=241 status=ok
// SIG undefined FUN_14553b520(void)

undefined4 *
FUN_14553b520(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar4 = local_res20;
  uVar3 = local_res18;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x18));
      puVar5 = (undefined4 *)
               (**(code **)(*plVar1 + 0xf0))(plVar1,local_res8,uVar3,uVar4,param_5,param_6);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar5 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar6 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553b620 FUN_14553b620 body=251 status=ok
// SIG undefined FUN_14553b620(void)

undefined4 *
FUN_14553b620(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar5 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = local_res20;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xf8))
                         (plVar1,local_res8,local_res18,uVar3,param_5,param_6,param_7);
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553b720 FUN_14553b720 body=261 status=ok
// SIG undefined FUN_14553b720(void)

undefined4 *
FUN_14553b720(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar4 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0x100))
                         (plVar1,local_res8,local_res18,local_res20,param_5,param_6,param_7,param_8)
      ;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553b830 FUN_14553b830 body=278 status=ok
// SIG undefined FUN_14553b830(void)

undefined4 *
FUN_14553b830(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar5 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = local_res20;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x108))
                         (plVar1,local_res8,local_res18,uVar3,param_5,param_6,param_7,param_8);
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553b950 FUN_14553b950 body=261 status=ok
// SIG undefined FUN_14553b950(void)

undefined4 *
FUN_14553b950(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined4 *local_res20;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  bVar5 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  puVar3 = local_res20;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      local_58 = *puVar3;
      uStack_54 = puVar3[1];
      uStack_50 = puVar3[2];
      uStack_4c = puVar3[3];
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0xd0))
                         (plVar1,local_res8,local_res18,&local_58,param_5,param_6,param_7);
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553ba60 FUN_14553ba60 body=164 status=ok
// SIG undefined FUN_14553ba60(void)

undefined4 * FUN_14553ba60(longlong param_1,undefined4 *param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  
  bVar4 = 1;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)(**(code **)(*plVar1 + 0xe0))(plVar1,local_res8,param_3);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553bb10 FUN_14553bb10 body=268 status=ok
// SIG undefined FUN_14553bb10(void)

undefined4 *
FUN_14553bb10(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar4 = local_res20;
  uVar3 = local_res18;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x18));
      puVar5 = (undefined4 *)
               (**(code **)(*plVar1 + 0x118))(plVar1,local_res8,uVar3,uVar4,param_5,param_6,param_7)
      ;
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar5 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar6 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553bc20 FUN_14553bc20 body=278 status=ok
// SIG undefined FUN_14553bc20(void)

undefined4 *
FUN_14553bc20(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar5 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = local_res20;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x120))
                         (plVar1,local_res8,local_res18,uVar3,param_5,param_6,param_7,param_8);
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553bd40 FUN_14553bd40 body=274 status=ok
// SIG undefined FUN_14553bd40(void)

undefined4 *
FUN_14553bd40(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
             undefined4 param_9)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined4 local_res20;
  
  bVar4 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0x130))
                         (plVar1,local_res8,local_res18,local_res20,param_5,param_6,param_7,param_8,
                          param_9);
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553be60 FUN_14553be60 body=241 status=ok
// SIG undefined FUN_14553be60(void)

undefined4 *
FUN_14553be60(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  byte bVar6;
  longlong lVar7;
  int iVar8;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar6 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar4 = local_res20;
  uVar3 = local_res18;
  iVar8 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x18));
      puVar5 = (undefined4 *)
               (**(code **)(*plVar1 + 0x138))(plVar1,local_res8,uVar3,uVar4,param_5,param_6);
      iVar8 = iVar8 + 1;
      lVar7 = lVar7 + 8;
      bVar6 = bVar6 & ((byte)((uint)*puVar5 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar8 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar6 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553bf60 FUN_14553bf60 body=251 status=ok
// SIG undefined FUN_14553bf60(void)

undefined4 *
FUN_14553bf60(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  byte bVar5;
  longlong lVar6;
  int iVar7;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar5 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar3 = local_res20;
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x18));
      puVar4 = (undefined4 *)
               (**(code **)(*plVar1 + 0x140))
                         (plVar1,local_res8,local_res18,uVar3,param_5,param_6,param_7);
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 8;
      bVar5 = bVar5 & ((byte)((uint)*puVar4 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar7 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar5 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553c060 FUN_14553c060 body=261 status=ok
// SIG undefined FUN_14553c060(void)

undefined4 *
FUN_14553c060(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 local_res8 [8];
  undefined4 *local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  bVar4 = 1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  iVar6 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *(longlong *)(param_1 + 0x18));
      puVar3 = (undefined4 *)
               (**(code **)(*plVar1 + 0x148))
                         (plVar1,local_res8,local_res18,local_res20,param_5,param_6,param_7,param_8)
      ;
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
      bVar4 = bVar4 & ((byte)((uint)*puVar3 >> 0x1f) ^ 1);
      param_2 = local_res10;
    } while (iVar6 < *(int *)(param_1 + 0x20));
  }
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x28));
  uVar2 = 0;
  if (bVar4 == 0) {
    uVar2 = 0x80040200;
  }
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 14553c170 FUN_14553c170 body=240 status=ok
// SIG undefined FUN_14553c170(void)

undefined8 * FUN_14553c170(undefined8 *param_1,uint param_2)

{
  longlong *plVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar2;
  longlong lVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[5];
  *param_1 = hkDebugDisplay::vftable;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    (*DAT_14c787678)(0,lpCriticalSection,0);
  }
  lVar2 = param_1[3];
  lVar3 = lVar2 + (longlong)*(int *)(param_1 + 4) * 8;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47d0 + 0x18))
              (&PTR_vftable_14c6e47d0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 3);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  FUN_14534fa90(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x50);
    }
  }
  return param_1;
}



// FUNCTION 14553c260 FUN_14553c260 body=285 status=ok
// SIG undefined FUN_14553c260(void)

undefined4 * FUN_14553c260(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  if (*param_2 == 0) {
    local_res8 = 0x50;
    puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar2,"hkDebugDisplay");
    }
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      FUN_14534fa70(puVar2);
      *puVar2 = hkDebugDisplay::vftable;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80000000;
      local_res8 = 0x28;
      lVar3 = (*DAT_14c787670)(0,&local_res8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar3,"hkCriticalSection");
      }
      if (lVar3 == 0) {
        puVar2[5] = 0;
      }
      else {
        uVar4 = FUN_144b4a250(lVar3,1000);
        puVar2[5] = uVar4;
      }
    }
    puVar1 = (undefined8 *)*param_2;
    if ((puVar2 != puVar1) && (*param_2 = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
      FUN_144b3f230();
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14553c380 FUN_14553c380 body=95 status=ok
// SIG undefined FUN_14553c380(void)

undefined4 * FUN_14553c380(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 14553c3e0 FUN_14553c3e0 body=446 status=ok
// SIG undefined FUN_14553c3e0(void)

void FUN_14553c3e0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = hkaiCollisionAvoidance::System::vftable;
  plVar3 = (longlong *)param_1[10];
  plVar1 = plVar3 + *(int *)(param_1 + 0xb);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar4 = *plVar3;
    *(undefined8 *)(lVar4 + 0x100) = 0;
    *(undefined8 *)(lVar4 + 0x108) = 0xffffffffffffffff;
  }
  if (param_1[0x10] != 0) {
    FUN_144b3f230();
  }
  lVar2 = param_1[0xe];
  lVar4 = lVar2 + (longlong)*(int *)(param_1 + 0xf) * 8;
  while (lVar4 != lVar2) {
    plVar1 = (longlong *)(lVar4 + -8);
    lVar4 = lVar4 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xe],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x7c) & 0x7fffffff) << 3);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) << 3);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  lVar2 = param_1[10];
  lVar4 = lVar2 + (longlong)*(int *)(param_1 + 0xb) * 8;
  while (lVar4 != lVar2) {
    plVar1 = (longlong *)(lVar4 + -8);
    lVar4 = lVar4 + -8;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) << 3);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  FUN_144bfd1a0(param_1 + 7);
  FUN_144bfd1a0(param_1 + 6);
  FUN_144bfd1a0(param_1 + 5);
  FUN_144bfd1a0(param_1 + 4);
  FUN_144bfd1a0(param_1 + 3);
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 14553c5a0 FUN_14553c5a0 body=186 status=ok
// SIG undefined FUN_14553c5a0(void)

undefined8 FUN_14553c5a0(undefined8 *param_1,int param_2,int param_3)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (param_3 + 7U >> 3) * param_2;
  uVar3 = uVar2 * 0x40;
  if (uVar3 != *(uint *)(param_1 + 1)) {
    if (*(uint *)(param_1 + 1) != 0) {
      if ((void *)*param_1 != (void *)0x0) {
        AK::MemoryMgr::Free(5,(void *)*param_1);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if ((uVar2 & 0x3ffffff) != 0) {
      pvVar1 = AK::MemoryMgr::Malign(5,(ulonglong)uVar3,0x10);
      *param_1 = pvVar1;
      if (pvVar1 != (void *)0x0) {
        param_1[2] = pvVar1;
        param_1[3] = (ulonglong)((uVar2 & 0x3ffffff) << 5) + (longlong)pvVar1;
        *(uint *)(param_1 + 1) = uVar3;
        return 1;
      }
      return 2;
    }
  }
  return 1;
}



// FUNCTION 14553c660 FUN_14553c660 body=49 status=ok
// SIG undefined FUN_14553c660(void)

void FUN_14553c660(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    AK::MemoryMgr::Free(5,(void *)*param_1);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 14553c6a0 FUN_14553c6a0 body=86 status=ok
// SIG undefined FUN_14553c6a0(void)

undefined8 * FUN_14553c6a0(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x40);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453696d0(puVar1,param_1);
    puVar1[7] = 0;
    *puVar1 = &PTR_FUN_149da8e88;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553c700 FUN_14553c700 body=39 status=ok
// SIG undefined FUN_14553c700(void)

undefined8 * FUN_14553c700(undefined8 *param_1)

{
  FUN_1453696d0();
  *param_1 = &PTR_FUN_149da8e88;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 14553c730 FUN_14553c730 body=86 status=ok
// SIG undefined FUN_14553c730(void)

void FUN_14553c730(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149da8e88;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  return;
}



// FUNCTION 14553c790 FUN_14553c790 body=741 status=ok
// SIG undefined FUN_14553c790(void)

int FUN_14553c790(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  float *pfVar2;
  int iVar3;
  byte *pbVar4;
  int *piVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  longlong *plVar9;
  byte bVar10;
  ulonglong uVar11;
  uint uVar12;
  byte local_res8 [8];
  undefined4 local_res18;
  uint local_res1c;
  undefined4 local_348 [2];
  longlong *local_340;
  undefined8 local_338;
  undefined4 *local_330;
  int *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined2 local_2b0 [2];
  char local_2ab;
  undefined8 local_2a0;
  undefined1 local_298 [600];
  undefined4 local_40;
  byte local_3c;
  byte local_38;
  
  pbVar4 = *(byte **)(param_1 + 0x20);
  if (pbVar4 != (byte *)0x0) {
    uVar11 = 0;
    do {
      uVar12 = (int)uVar11 + 1;
      if (pbVar4[uVar12] == 0x11) {
        pfVar2 = (float *)(pbVar4 + uVar11 * 4 + ((ulonglong)(*pbVar4 + 4) & 0xfffffffc));
        if ((pfVar2 != (float *)0x0) &&
           ((*pfVar2 == 0.0 ||
            (DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1,
            *pfVar2 < (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-08)))) {
          return 1;
        }
        break;
      }
      uVar11 = (ulonglong)uVar12;
    } while (uVar12 < *pbVar4);
  }
  plVar9 = (longlong *)FUN_145369e40(param_1);
  if (plVar9 == (longlong *)0x0) {
    return 0xf;
  }
  local_res18 = FUN_145369980(param_1);
  local_res1c = *(byte *)(param_1 + 0x36) & 0x1f;
  local_340 = (longlong *)0x0;
  local_318 = 0;
  local_320 = 0;
  local_328 = (int *)0x0;
  local_2cc = 0;
  local_2b8 = 0;
  local_2b0[0] = 0xff00;
  local_2a0 = 0;
  FUN_144d51920(local_298);
  plVar1 = plVar9 + 2;
  local_3c = local_3c & 0xfe;
  local_38 = local_38 & 0xf3 | 3;
  piVar5 = *(int **)(param_2 + 0x1c);
  local_318._4_4_ = *(undefined4 *)(param_2 + 0x30);
  local_320 = *(undefined8 *)(param_2 + 0x24);
  local_318._0_4_ = *(undefined4 *)(param_2 + 0x2c);
  local_40 = 0;
  local_310 = 0;
  local_348[0] = 0;
  local_340 = plVar1;
  if (local_328 != (int *)0x0) {
    FUN_144d4a460();
  }
  if (piVar5 != (int *)0x0) {
    *piVar5 = *piVar5 + 1;
  }
  local_2c4 = *(undefined4 *)(param_2 + 0x14);
  local_38 = local_38 | 2;
  local_2c8 = 0;
  local_328 = piVar5;
  cVar6 = FUN_145369ff0(*(undefined8 *)(param_2 + 8));
  bVar10 = local_38 & 0xfb | cVar6 << 2;
  local_2c0 = 0;
  local_338 = *(undefined8 *)(param_2 + 0x40);
  local_330 = &local_res18;
  local_2b8 = local_2b8 & 0xffffffff00000000;
  if (((char)local_2b0[0] == -0x70) && (local_2ab != '\0')) {
    local_res8[0] = local_38 & 1;
    local_38 = bVar10;
    uVar7 = FUN_1450e98e0(local_348);
    iVar8 = FUN_14536f6c0(plVar9,local_2b0,uVar7,local_res8,local_338,local_318._4_4_);
    if (iVar8 != 1) goto LAB_14553ca1e;
    bVar10 = local_res8[0] & 1 | local_38 & 0xfe;
  }
  local_38 = bVar10;
  iVar8 = FUN_14536f160(plVar9,local_348);
  if (iVar8 == 3) {
    iVar8 = 1;
  }
  else if (iVar8 == 1) {
    iVar8 = (**(code **)(*plVar9 + 0x250))(plVar9,local_348);
  }
LAB_14553ca1e:
  LOCK();
  piVar5 = (int *)((longlong)plVar9 + 0x24);
  iVar3 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar3 == 1) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
  }
  FUN_144d51aa0(local_298);
  if (local_328 != (int *)0x0) {
    FUN_144d4a460();
  }
  return iVar8;
}



// FUNCTION 14553cae0 FUN_14553cae0 body=120 status=ok
// SIG undefined FUN_14553cae0(void)

undefined8 * FUN_14553cae0(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149da8e88;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 14553cb60 FUN_14553cb60 body=82 status=ok
// SIG undefined FUN_14553cb60(void)

undefined8 * FUN_14553cb60(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1455431a0(puVar1,param_1);
    *(byte *)(puVar1 + 9) = *(byte *)(puVar1 + 9) | 1;
    *puVar1 = &PTR_FUN_149da8ee8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553cbc0 FUN_14553cbc0 body=272 status=ok
// SIG undefined FUN_14553cbc0(void)

undefined4 FUN_14553cbc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  sVar3 = *(short *)(param_1 + 0x34);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  if ((sVar3 != 0x202) && (sVar3 != 0x203)) {
    if ((sVar3 == 0x204) || (sVar3 == 0x205)) {
      FUN_1455432b0(param_1,1,uVar4,*(undefined4 *)(param_2 + 0x38));
      FUN_1450827d0(DAT_14c790fd8,uVar4,param_1 + 0x38,*(byte *)(param_1 + 0x48) & 1,
                    *(undefined4 *)(param_2 + 0x38));
    }
    return 1;
  }
  lVar6 = FUN_145369e40();
  if (lVar6 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = FUN_1455431e0(param_1,1,uVar4,*(undefined4 *)(param_2 + 0x38));
    FUN_145081ed0(DAT_14c790fd8,lVar6,uVar4,*(byte *)(param_1 + 0x48) & 1,
                  *(undefined4 *)(param_2 + 0x38));
    LOCK();
    piVar1 = (int *)(lVar6 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
    }
  }
  return uVar5;
}



// FUNCTION 14553cd30 FUN_14553cd30 body=62 status=ok
// SIG undefined FUN_14553cd30(void)

undefined8 * FUN_14553cd30(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da8ee8;
  FUN_1455431d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14553cd70 FUN_14553cd70 body=78 status=ok
// SIG undefined FUN_14553cd70(void)

undefined8 * FUN_14553cd70(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x50);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1455431a0(puVar1,param_1);
    *puVar1 = &PTR_FUN_149da8f58;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553cdc0 FUN_14553cdc0 body=272 status=ok
// SIG undefined FUN_14553cdc0(void)

undefined4 FUN_14553cdc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  short sVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  sVar3 = *(short *)(param_1 + 0x34);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  if ((sVar3 != 0x302) && (sVar3 != 0x303)) {
    if ((sVar3 == 0x304) || (sVar3 == 0x305)) {
      FUN_1455432b0(param_1,2,uVar4,*(undefined4 *)(param_2 + 0x38));
      FUN_145082960(DAT_14c790fd8,uVar4,param_1 + 0x38,*(byte *)(param_1 + 0x48) & 1,
                    *(undefined4 *)(param_2 + 0x38));
    }
    return 1;
  }
  lVar6 = FUN_145369e40();
  if (lVar6 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = FUN_1455431e0(param_1,2,uVar4,*(undefined4 *)(param_2 + 0x38));
    FUN_145082360(DAT_14c790fd8,lVar6,uVar4,*(byte *)(param_1 + 0x48) & 1,
                  *(undefined4 *)(param_2 + 0x38));
    LOCK();
    piVar1 = (int *)(lVar6 + 0x24);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*(longlong *)(lVar6 + 0x10) + 0x18))();
    }
  }
  return uVar5;
}



// FUNCTION 14553cf40 FUN_14553cf40 body=62 status=ok
// SIG undefined FUN_14553cf40(void)

undefined8 * FUN_14553cf40(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da8f58;
  FUN_1455431d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14553cf80 FUN_14553cf80 body=78 status=ok
// SIG undefined FUN_14553cf80(void)

undefined8 * FUN_14553cf80(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x38);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1453696d0(puVar1,param_1);
    *puVar1 = &PTR_FUN_149da8fc8;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553cfd0 FUN_14553cfd0 body=185 status=ok
// SIG undefined FUN_14553cfd0(void)

undefined4 FUN_14553cfd0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined2 local_19;
  longlong *local_10;
  
  plVar3 = (longlong *)FUN_145369e40();
  if (plVar3 == (longlong *)0x0) {
    return 0xf;
  }
  local_30 = *(undefined8 *)(param_2 + 0x40);
  local_28 = *(undefined4 *)(param_2 + 0x38);
  local_24 = 0;
  local_20 = 4;
  local_19 = 0;
  local_38[0] = 3;
  local_1c = 0;
  local_1a = 0;
  local_10 = plVar3;
  (**(code **)(*plVar3 + 0x80))(plVar3,local_38);
  FUN_145081470(DAT_14c790fd8,plVar3,*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x38)
               );
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0x24);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    (**(code **)(plVar3[2] + 0x18))();
  }
  return 1;
}



// FUNCTION 14553d090 FUN_14553d090 body=120 status=ok
// SIG undefined FUN_14553d090(void)

undefined8 * FUN_14553d090(undefined8 *param_1,uint param_2)

{
  *param_1 = &PTR_FUN_149da8fc8;
  if ((void *)param_1[5] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[5]);
  }
  param_1[5] = 0;
  if ((void *)param_1[4] != (void *)0x0) {
    AK::MemoryMgr::Free(1,(void *)param_1[4]);
  }
  param_1[4] = 0;
  FUN_145373500(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14553d110 FUN_14553d110 body=78 status=ok
// SIG undefined FUN_14553d110(void)

undefined8 * FUN_14553d110(undefined4 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x48);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1455e5410(puVar1,param_1);
    *puVar1 = &PTR_FUN_149da9018;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553d160 FUN_14553d160 body=69 status=ok
// SIG undefined FUN_14553d160(void)

void FUN_14553d160(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = FUN_145369980();
                    /* WARNING: Could not recover jumptable at 0x00014553d1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x168))(param_2,0,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 14553d1b0 FUN_14553d1b0 body=85 status=ok
// SIG undefined FUN_14553d1b0(void)

void FUN_14553d1b0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = FUN_145369980();
                    /* WARNING: Could not recover jumptable at 0x00014553d202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x168))(param_2,param_3,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 14553d210 FUN_14553d210 body=69 status=ok
// SIG undefined FUN_14553d210(void)

void FUN_14553d210(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = FUN_145369980();
                    /* WARNING: Could not recover jumptable at 0x00014553d252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x170))(param_2,0,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 14553d260 FUN_14553d260 body=85 status=ok
// SIG undefined FUN_14553d260(void)

void FUN_14553d260(longlong param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = FUN_145369980();
                    /* WARNING: Could not recover jumptable at 0x00014553d2b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x170))(param_2,param_3,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 14553d2c0 FUN_14553d2c0 body=123 status=ok
// SIG undefined FUN_14553d2c0(void)

void FUN_14553d2c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x38);
  piVar1 = piVar5 + (ulonglong)*(uint *)(param_1 + 0x40) * 2;
  if (piVar5 != piVar1) {
    do {
      if (((int)param_2[4] == *piVar5) &&
         (*(byte *)((longlong)param_2 + 0xd4) >> 7 == *(byte *)(piVar5 + 1))) {
        return;
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piVar1);
  }
  lVar3 = *param_2;
  bVar2 = *(byte *)(param_1 + 0x36);
  uVar4 = FUN_145369980();
  (**(code **)(lVar3 + 0x178))(param_2,bVar2 & 0x1f,uVar4);
  return;
}



// FUNCTION 14553d340 FUN_14553d340 body=133 status=ok
// SIG undefined FUN_14553d340(void)

void FUN_14553d340(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  undefined4 uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x38);
  piVar1 = piVar5 + (ulonglong)*(uint *)(param_1 + 0x40) * 2;
  if (piVar5 != piVar1) {
    do {
      if (((int)param_2[4] == *piVar5) &&
         (*(byte *)((longlong)param_2 + 0xd4) >> 7 == *(byte *)(piVar5 + 1))) {
        return;
      }
      piVar5 = piVar5 + 2;
    } while (piVar5 != piVar1);
  }
  bVar2 = *(byte *)(param_1 + 0x36);
  lVar3 = *param_2;
  uVar4 = FUN_145369980();
  (**(code **)(lVar3 + 0x170))(param_2,param_3,bVar2 & 0x1f,uVar4);
  return;
}



// FUNCTION 14553d3d0 FUN_14553d3d0 body=62 status=ok
// SIG undefined FUN_14553d3d0(void)

undefined8 * FUN_14553d3d0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_149da9018;
  FUN_1455e5440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 14553d410 FUN_14553d410 body=112 status=ok
// SIG undefined FUN_14553d410(void)

undefined8 * FUN_14553d410(undefined4 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = AK::MemoryMgr::Malloc(1,0x58);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1455e5410(puVar1,param_1);
    *(undefined1 *)((longlong)puVar1 + 0x54) = 2;
    *puVar1 = &PTR_FUN_149da90b0;
    puVar1[9] = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    *(undefined1 *)((longlong)puVar1 + 0x55) = param_2;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14553d480 FUN_14553d480 body=214 status=ok
// SIG undefined FUN_14553d480(void)

void FUN_14553d480(longlong param_1,longlong *param_2)

{
  float fVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = *(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x4c);
  fVar7 = 0.0;
  if (fVar6 != 0.0) {
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
    fVar7 = (float)(uint)((ulonglong)DAT_14c791078 >> 0x21) * 4.656613e-10 * fVar6;
  }
  fVar6 = *(float *)(param_1 + 0x4c);
  bVar2 = *(byte *)(param_1 + 0x36);
  uVar3 = *(undefined1 *)(param_1 + 0x54);
  lVar4 = *param_2;
  fVar1 = *(float *)(param_1 + 0x48);
  uVar5 = FUN_145369980(param_1);
  (**(code **)(lVar4 + 0x158))
            (param_2,*(undefined1 *)(param_1 + 0x55),0,uVar3,fVar7 + fVar6 + fVar1,bVar2 & 0x1f,
             uVar5);
  return;
}



// FUNCTION 14553d560 FUN_14553d560 body=115 status=ok
// SIG undefined FUN_14553d560(void)

void FUN_14553d560(longlong param_1)

{
  if (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x4c) != 0.0) {
    DAT_14c791078 = DAT_14c791078 * 0x5851f42d4c957f2d + 1;
  }
  FUN_14553d780();
  return;
}



// FUNCTION 14553d5e0 FUN_14553d5e0 body=86 status=ok
// SIG undefined FUN_14553d5e0(void)

void FUN_14553d5e0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = FUN_145369980();
                    /* WARNING: Could not recover jumptable at 0x00014553d633. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x160))(param_2,*(undefined1 *)(param_1 + 0x55),bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 14553d640 FUN_14553d640 body=113 status=ok
// SIG undefined FUN_14553d640(void)

void FUN_14553d640(longlong param_1,longlong *param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = FUN_145369980();
  (**(code **)(lVar2 + 0x158))
            (param_2,*(undefined1 *)(param_1 + 0x55),param_3,0,0,bVar1 & 0x1f,uVar3);
  return;
}



// FUNCTION 14553d780 FUN_14553d780 body=118 status=ok
// SIG undefined FUN_14553d780(void)

void FUN_14553d780(longlong param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_1 + 0x36);
  lVar2 = *param_2;
  uVar3 = FUN_145369980();
  (**(code **)(lVar2 + 0x158))
            (param_2,*(undefined1 *)(param_1 + 0x55),param_3,param_4,param_5,bVar1 & 0x1f,uVar3);
  return;
}


