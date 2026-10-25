// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144ff6f80 FUN_144ff6f80 body=7 status=ok
// SIG undefined FUN_144ff6f80(void)

undefined1 * FUN_144ff6f80(undefined1 *param_1)

{
  *param_1 = 1;
  return param_1;
}



// FUNCTION 144ff6f90 FUN_144ff6f90 body=110 status=ok
// SIG undefined FUN_144ff6f90(void)

int FUN_144ff6f90(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  iVar4 = iVar1 + 1;
  if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar4) {
    FUN_144bdedb0(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar3 = (undefined8 *)((longlong)*(int *)(param_1 + 0x10) * 0x10 + *(longlong *)(param_1 + 8));
  if (puVar3 != (undefined8 *)0x0) {
    uVar2 = param_2[1];
    *puVar3 = *param_2;
    puVar3[1] = uVar2;
  }
  *(int *)(param_1 + 0x10) = iVar4;
  return iVar1;
}



// FUNCTION 144ff7000 FUN_144ff7000 body=144 status=ok
// SIG undefined FUN_144ff7000(void)

int FUN_144ff7000(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x20) + 1;
  if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar3) {
    FUN_144ff78b0(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x20);
  *(int *)(param_1 + 0x20) = iVar3;
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined4 *)(lVar1 + 8 + lVar2 * 0xc) = param_4;
  *(undefined4 *)(lVar1 + 4 + lVar2 * 0xc) = param_3;
  *(undefined4 *)(lVar1 + lVar2 * 0xc) = param_2;
  return *(int *)(param_1 + 0x20) + -1;
}



// FUNCTION 144ff7090 FUN_144ff7090 body=47 status=ok
// SIG undefined FUN_144ff7090(void)

undefined8 FUN_144ff7090(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  piVar1 = piVar2 + (longlong)*(int *)(param_1 + 0x20) * 3;
  bVar3 = piVar2 == piVar1;
  if (!bVar3) {
    do {
      if ((*piVar2 == param_2) && (piVar2[1] == param_3)) break;
      piVar2 = piVar2 + 3;
    } while (piVar2 != piVar1);
    bVar3 = piVar2 == piVar1;
  }
  return CONCAT71((int7)((ulonglong)piVar2 >> 8),!bVar3);
}



// FUNCTION 144ff70c0 FUN_144ff70c0 body=891 status=ok
// SIG undefined FUN_144ff70c0(void)

longlong FUN_144ff70c0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  uint local_res18;
  uint local_res20;
  longlong local_90;
  int local_88;
  uint local_84;
  ulonglong local_80;
  uint local_78;
  uint local_74;
  ulonglong uVar16;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_144ff7440();
  }
  iVar22 = *(int *)(param_1 + 0x10);
  local_90 = 0;
  local_88 = 0;
  local_84 = 0x80000000;
  local_res20 = 0x80000000;
  if (iVar22 < 1) {
    bVar24 = false;
    iVar7 = 0;
LAB_144ff7153:
    if (bVar24 == iVar22 + iVar7 < 0) goto LAB_144ff715b;
  }
  else {
    FUN_144c389d0(&local_90,&PTR_vftable_14c6e47a0,(longlong)iVar22);
    bVar24 = SBORROW4(iVar22,local_88);
    iVar7 = -local_88;
    if (iVar22 <= local_88) goto LAB_144ff7153;
  }
  local_88 = iVar22;
LAB_144ff715b:
  uVar15 = local_84;
  iVar22 = local_88;
  lVar18 = local_90;
  uVar13 = 0;
  local_80 = 0;
  local_78 = 0;
  local_74 = 0x80000000;
  if (1 < *(int *)(param_1 + 0x20)) {
    FUN_144ff7720(*(undefined8 *)(param_1 + 0x18),0,*(int *)(param_1 + 0x20) + -1);
  }
  uVar9 = 0;
  uVar12 = 0x80000000;
  local_res18 = 0;
  uVar20 = uVar13;
  if (0 < iVar22) {
    piVar11 = (int *)(lVar18 + 4);
    uVar16 = uVar9;
    uVar19 = uVar9;
    do {
      *piVar11 = 0;
      piVar11[-1] = (int)uVar13;
      uVar8 = (uint)uVar9;
      if ((int)uVar16 < *(int *)(param_1 + 0x20)) {
        lVar17 = uVar19 * 0xc;
        local_res20 = uVar12;
        do {
          lVar5 = *(longlong *)(param_1 + 0x18);
          iVar22 = local_88;
          uVar8 = (uint)uVar9;
          uVar12 = local_res20;
          if (*(uint *)(lVar17 + lVar5) != (uint)uVar9) break;
          *piVar11 = *piVar11 + 1;
          uVar23 = (uint)uVar13 + 1;
          uVar4 = *(undefined4 *)(lVar17 + 4 + lVar5);
          fVar3 = *(float *)(lVar17 + 8 + lVar5);
          uVar12 = (uint)uVar13;
          if ((int)(local_res20 & 0x7fffffff) < (int)uVar23) {
            FUN_144ff7aa0(&local_80,&PTR_vftable_14c6e47a0,(longlong)(int)uVar23);
            uVar20 = local_80;
            uVar12 = local_78;
            local_res20 = local_74;
          }
          puVar10 = (undefined8 *)((longlong)(int)uVar12 * 8 + uVar20);
          if (puVar10 != (undefined8 *)0x0) {
            *puVar10 = CONCAT44(uVar4,(uint)(fVar3 * 1.0039062) >> 0x10);
          }
          uVar9 = (ulonglong)local_res18;
          uVar14 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar14;
          uVar19 = uVar19 + 1;
          lVar17 = lVar17 + 0xc;
          uVar13 = (ulonglong)uVar23;
          iVar22 = local_88;
          uVar8 = local_res18;
          local_78 = uVar23;
          uVar12 = local_res20;
        } while ((int)uVar14 < *(int *)(param_1 + 0x20));
      }
      local_res18 = uVar8 + 1;
      uVar9 = (ulonglong)local_res18;
      piVar11 = piVar11 + 2;
    } while ((int)local_res18 < iVar22);
  }
  puVar10 = (undefined8 *)(param_2 + 0x18);
  puVar21 = (undefined8 *)(param_1 + 8);
  if (puVar21 != puVar10) {
    FUN_147e4a87c(puVar10,&PTR_vftable_14c6e47a0);
    FUN_147e4a87c(puVar21,&PTR_vftable_14c6e47a0);
    uVar6 = *puVar10;
    *puVar10 = *puVar21;
    *puVar21 = uVar6;
    uVar4 = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    uVar4 = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = uVar4;
  }
  plVar1 = (longlong *)(param_2 + 0x28);
  if (&local_90 != plVar1) {
    FUN_144c37270(plVar1,&PTR_vftable_14c6e47a0);
    FUN_144c37270(&local_90,&PTR_vftable_14c6e47a0);
    lVar18 = *plVar1;
    *plVar1 = local_90;
    uVar15 = *(uint *)(param_2 + 0x34);
    *(int *)(param_2 + 0x30) = local_88;
    *(uint *)(param_2 + 0x34) = local_84;
  }
  puVar2 = (ulonglong *)(param_2 + 0x38);
  if (&local_80 != puVar2) {
    FUN_144c372e0(puVar2,&PTR_vftable_14c6e47a0);
    FUN_144c372e0(&local_80,&PTR_vftable_14c6e47a0);
    uVar20 = *puVar2;
    *puVar2 = local_80;
    local_res20 = *(uint *)(param_2 + 0x44);
    *(uint *)(param_2 + 0x40) = local_78;
    *(uint *)(param_2 + 0x44) = local_74;
  }
  if ((-1 < (int)local_res20) && (uVar20 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,uVar20,(ulonglong)(local_res20 & 0x7fffffff) << 3);
  }
  if ((-1 < (int)uVar15) && (lVar18 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar18,(ulonglong)(uVar15 & 0x7fffffff) << 3);
  }
  return param_2;
}



// FUNCTION 144ff7440 FUN_144ff7440 body=669 status=ok
// SIG undefined FUN_144ff7440(void)

int FUN_144ff7440(longlong param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  iVar8 = 0;
  if (1 < *(int *)(param_1 + 0x20)) {
    FUN_144ff7720(*plVar1,0,*(int *)(param_1 + 0x20) + -1,&LAB_144ff76f0);
  }
  iVar12 = *(int *)(param_1 + 0x20) + -1;
  uVar10 = (ulonglong)iVar12;
  if (3 < (longlong)uVar10) {
    uVar9 = uVar10 >> 2;
    iVar11 = *(int *)(param_1 + 0x20) + -3;
    lVar7 = (uVar10 - 2) * 0xc;
    uVar10 = uVar10 + uVar9 * -4;
    do {
      lVar3 = *plVar1;
      if ((*(int *)(lVar3 + 0x18 + lVar7) == *(int *)(lVar3 + 0xc + lVar7)) &&
         (*(int *)(lVar3 + 0x1c + lVar7) == *(int *)(lVar3 + 0x10 + lVar7))) {
        iVar5 = *(int *)(param_1 + 0x20);
        iVar4 = iVar5 + -1;
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar4 != iVar12) {
          puVar2 = (undefined4 *)(lVar3 + ((longlong)iVar5 + -1) * 0xc);
          puVar6 = (undefined4 *)(lVar3 + 0x18 + lVar7);
          if ((puVar6 != puVar2) && (puVar6 != (undefined4 *)0x0)) {
            *puVar6 = *puVar2;
            puVar6[1] = puVar2[1];
            puVar6[2] = puVar2[2];
          }
        }
        iVar8 = iVar8 + 1;
      }
      lVar3 = *plVar1;
      if ((*(int *)(lVar7 + 0xc + lVar3) == *(int *)(lVar3 + lVar7)) &&
         (*(int *)(lVar7 + 0x10 + lVar3) == *(int *)(lVar3 + 4 + lVar7))) {
        iVar5 = *(int *)(param_1 + 0x20);
        iVar4 = iVar5 + -1;
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar4 != iVar11 + 1) {
          puVar2 = (undefined4 *)(lVar3 + ((longlong)iVar5 + -1) * 0xc);
          puVar6 = (undefined4 *)(lVar3 + 0xc + lVar7);
          if ((puVar6 != puVar2) && (puVar6 != (undefined4 *)0x0)) {
            *puVar6 = *puVar2;
            puVar6[1] = puVar2[1];
            puVar6[2] = puVar2[2];
          }
        }
        iVar8 = iVar8 + 1;
      }
      lVar3 = *plVar1;
      if ((*(int *)(lVar3 + lVar7) == *(int *)(lVar7 + -0xc + lVar3)) &&
         (*(int *)(lVar3 + 4 + lVar7) == *(int *)(lVar7 + -8 + lVar3))) {
        iVar5 = *(int *)(param_1 + 0x20);
        iVar4 = iVar5 + -1;
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar4 != iVar11) {
          puVar2 = (undefined4 *)(lVar3 + ((longlong)iVar5 + -1) * 0xc);
          puVar6 = (undefined4 *)(lVar7 + lVar3);
          if ((puVar6 != puVar2) && (puVar6 != (undefined4 *)0x0)) {
            *puVar6 = *puVar2;
            puVar6[1] = puVar2[1];
            puVar6[2] = puVar2[2];
          }
        }
        iVar8 = iVar8 + 1;
      }
      lVar3 = *plVar1;
      if ((*(int *)(lVar3 + -0xc + lVar7) == *(int *)(lVar3 + -0x18 + lVar7)) &&
         (*(int *)(lVar3 + -8 + lVar7) == *(int *)(lVar3 + -0x14 + lVar7))) {
        iVar5 = *(int *)(param_1 + 0x20);
        iVar4 = iVar5 + -1;
        *(int *)(param_1 + 0x20) = iVar4;
        if (iVar4 != iVar11 + -1) {
          puVar2 = (undefined4 *)(lVar3 + ((longlong)iVar5 + -1) * 0xc);
          puVar6 = (undefined4 *)(lVar3 + -0xc + lVar7);
          if ((puVar6 != puVar2) && (puVar6 != (undefined4 *)0x0)) {
            *puVar6 = *puVar2;
            puVar6[1] = puVar2[1];
            puVar6[2] = puVar2[2];
          }
        }
        iVar8 = iVar8 + 1;
      }
      iVar12 = iVar12 + -4;
      iVar11 = iVar11 + -4;
      lVar7 = lVar7 + -0x30;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  if (0 < (longlong)uVar10) {
    lVar7 = uVar10 * 0xc;
    do {
      lVar3 = *(longlong *)(param_1 + 0x18);
      if ((*(int *)(lVar3 + lVar7) == *(int *)(lVar3 + -0xc + lVar7)) &&
         (*(int *)(lVar3 + 4 + lVar7) == *(int *)(lVar3 + -8 + lVar7))) {
        iVar11 = *(int *)(param_1 + 0x20);
        iVar5 = iVar11 + -1;
        *(int *)(param_1 + 0x20) = iVar5;
        if (iVar5 != iVar12) {
          puVar2 = (undefined4 *)(lVar3 + ((longlong)iVar11 + -1) * 0xc);
          puVar6 = (undefined4 *)(lVar3 + lVar7);
          if ((puVar6 != puVar2) && (puVar6 != (undefined4 *)0x0)) {
            *puVar6 = *puVar2;
            puVar6[1] = puVar2[1];
            puVar6[2] = puVar2[2];
          }
        }
        iVar8 = iVar8 + 1;
      }
      iVar12 = iVar12 + -1;
      lVar7 = lVar7 + -0xc;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  return iVar8;
}



// FUNCTION 144ff7720 FUN_144ff7720 body=399 status=ok
// SIG undefined FUN_144ff7720(void)

void FUN_144ff7720(longlong param_1,int param_2,uint param_3,code *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  
  uVar10 = (ulonglong)param_2;
  uVar11 = uVar10;
  do {
    lVar5 = (longlong)(int)param_3;
    uVar7 = uVar10 & 0xffffffff;
    lVar9 = (longlong)(int)(param_3 + (int)uVar10) >> 1;
    local_60 = *(undefined4 *)(param_1 + lVar9 * 0xc);
    local_58 = *(undefined4 *)(param_1 + 8 + lVar9 * 0xc);
    local_5c = *(undefined4 *)(param_1 + 4 + lVar9 * 0xc);
    uVar8 = param_3;
    do {
      uVar6 = (uint)uVar7;
      cVar4 = (*param_4)(param_1 + (longlong)(int)uVar6 * 0xc,&local_60);
      while (cVar4 != '\0') {
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar11 = uVar11 + 1;
        cVar4 = (*param_4)(param_1 + (longlong)(int)uVar6 * 0xc,&local_60);
      }
      cVar4 = (*param_4)(&local_60,param_1 + (longlong)(int)uVar8 * 0xc);
      while (cVar4 != '\0') {
        uVar8 = uVar8 - 1;
        lVar5 = lVar5 + -1;
        cVar4 = (*param_4)(&local_60,param_1 + (longlong)(int)uVar8 * 0xc);
      }
      if ((int)uVar8 < (int)uVar6) break;
      if (uVar8 != uVar6) {
        uVar2 = *(undefined4 *)(param_1 + lVar5 * 0xc);
        uVar3 = *(undefined4 *)(param_1 + 4 + lVar5 * 0xc);
        uVar1 = *(undefined4 *)(param_1 + 8 + lVar5 * 0xc);
        *(undefined4 *)(param_1 + lVar5 * 0xc) = *(undefined4 *)(param_1 + uVar11 * 0xc);
        *(undefined4 *)(param_1 + 4 + lVar5 * 0xc) = *(undefined4 *)(param_1 + 4 + uVar11 * 0xc);
        *(undefined4 *)(param_1 + 8 + lVar5 * 0xc) = *(undefined4 *)(param_1 + 8 + uVar11 * 0xc);
        *(undefined4 *)(param_1 + uVar11 * 0xc) = uVar2;
        *(undefined4 *)(param_1 + 4 + uVar11 * 0xc) = uVar3;
        *(undefined4 *)(param_1 + 8 + uVar11 * 0xc) = uVar1;
      }
      uVar8 = uVar8 - 1;
      lVar5 = lVar5 + -1;
      uVar6 = uVar6 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar11 = uVar11 + 1;
    } while ((int)uVar6 <= (int)uVar8);
    if ((int)uVar10 < (int)uVar8) {
      FUN_144ff7720(param_1,uVar10 & 0xffffffff,uVar8,param_4);
    }
    if ((int)param_3 <= (int)uVar6) {
      return;
    }
    uVar10 = (ulonglong)uVar6;
  } while( true );
}



// FUNCTION 144ff78b0 FUN_144ff78b0 body=484 status=ok
// SIG undefined FUN_144ff78b0(void)

ulonglong FUN_144ff78b0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong local_res8;
  
  uVar14 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar13 = uVar14 * 2;
  uVar8 = param_3;
  if (param_3 < uVar13) {
    uVar8 = uVar13;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0xc,&local_res8);
  iVar2 = *(int *)(param_1 + 1);
  iVar10 = 0;
  puVar11 = (undefined4 *)*param_1;
  puVar12 = puVar4;
  if (3 < iVar2) {
    puVar7 = puVar4 + 5;
    uVar5 = (iVar2 - 4U >> 2) + 1;
    uVar13 = (ulonglong)uVar5;
    iVar10 = uVar5 * 4;
    do {
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = *puVar11;
        puVar7[-4] = puVar11[1];
        puVar7[-3] = puVar11[2];
      }
      if (puVar7 + -2 != (undefined4 *)0x0) {
        puVar7[-2] = puVar11[3];
        puVar7[-1] = puVar11[4];
        *puVar7 = puVar11[5];
      }
      if (puVar7 + 1 != (undefined4 *)0x0) {
        puVar7[1] = puVar11[6];
        puVar7[2] = puVar11[7];
        puVar7[3] = puVar11[8];
      }
      if (puVar7 + 4 != (undefined4 *)0x0) {
        puVar7[4] = puVar11[9];
        puVar7[5] = puVar11[10];
        puVar7[6] = puVar11[0xb];
      }
      puVar12 = puVar12 + 0xc;
      puVar7 = puVar7 + 0xc;
      puVar11 = puVar11 + 0xc;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  if (iVar10 < iVar2) {
    puVar7 = puVar12 + 2;
    puVar6 = puVar11 + 2;
    uVar13 = (ulonglong)(uint)(iVar2 - iVar10);
    do {
      puVar1 = (undefined4 *)((longlong)puVar12 + (-8 - (longlong)puVar11) + (longlong)puVar6);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = puVar6[-2];
        puVar7[-1] = puVar6[-1];
        *puVar7 = *puVar6;
      }
      puVar6 = puVar6 + 3;
      puVar7 = puVar7 + 3;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar13 = uVar8 * 0xc + 0xc;
  uVar9 = uVar8;
  if (uVar13 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar9 = uVar8 + 1;
    if (uVar13 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0xc;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar8;
      uVar13 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar9 = uVar9 + uVar8 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar13 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar14 * 0xc);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar13;
}



// FUNCTION 144ff7aa0 FUN_144ff7aa0 body=235 status=ok
// SIG undefined FUN_144ff7aa0(void)

void FUN_144ff7aa0(undefined8 *param_1,longlong param_2,ulonglong param_3)

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



// FUNCTION 144ff7b90 FUN_144ff7b90 body=3009 status=ok
// SIG undefined FUN_144ff7b90(void)

void FUN_144ff7b90(longlong *param_1,longlong *param_2,float param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float *pfVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float local_res10;
  float fStackX_14;
  float local_110;
  float fStack_10c;
  undefined8 local_108;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  
  local_f8._4_4_ = 3.1415927 / (float)param_4;
  local_f8._0_4_ = local_f8._4_4_;
  fStack_f0 = (float)local_f8._4_4_;
  fStack_ec = (float)local_f8._4_4_;
  pfVar7 = (float *)FUN_144beaab0(&local_108,local_f8);
  iVar13 = (int)param_2[1];
  fVar38 = (1.0 / *pfVar7) * (1.0 / *pfVar7);
  iVar11 = iVar13;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar13 * 2) {
    FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)(iVar13 * 2));
    iVar11 = (int)param_2[1];
  }
  lVar14 = *param_2;
  lVar12 = (longlong)(iVar13 + -1) * 8;
  fVar15 = *(float *)(lVar12 + lVar14) - *(float *)(lVar14 + -0x10 + (longlong)iVar13 * 8);
  fVar21 = *(float *)(lVar12 + 4 + lVar14) - *(float *)(lVar14 + -0xc + (longlong)iVar13 * 8);
  auVar18._4_4_ = fVar21;
  auVar18._0_4_ = fVar15;
  auVar18._8_4_ = fVar21;
  auVar18._12_4_ = fVar21;
  fVar15 = fVar15 * fVar15;
  fVar21 = fVar21 * fVar21;
  if (fVar21 + fVar15 == 0.0) {
    uVar26 = 0;
    auVar31 = ZEXT816(0);
  }
  else {
    auVar31._4_4_ = fVar21 + fVar15;
    auVar31._0_4_ = fVar21 + fVar15;
    auVar31._8_4_ = fVar21 + fVar15;
    auVar31._12_4_ = fVar21 + fVar15;
    auVar31 = sqrtps(in_XMM4,auVar31);
    auVar18 = divps(auVar18,auVar31);
    uVar26 = auVar18._0_8_;
  }
  iVar13 = 0;
  if (0 < iVar11) {
    fStackX_14 = (float)((ulonglong)uVar26 >> 0x20);
    local_res10 = (float)uVar26;
    lVar14 = 0;
    do {
      lVar2 = *param_2;
      fVar15 = *(float *)(lVar2 + 4 + lVar12);
      fVar21 = *(float *)(lVar2 + lVar12);
      fVar22 = *(float *)(lVar2 + 4 + lVar14) - fVar15;
      fVar16 = *(float *)(lVar2 + lVar14) - fVar21;
      auVar27._4_4_ = fVar22;
      auVar27._0_4_ = fVar16;
      auVar27._8_4_ = fVar22;
      auVar27._12_4_ = fVar22;
      fVar16 = fVar16 * fVar16;
      fVar22 = fVar22 * fVar22;
      if (fVar22 + fVar16 == 0.0) {
        uVar26 = 0;
        unaff_XMM7._0_12_ = ZEXT812(0);
        unaff_XMM7._12_4_ = 0;
      }
      else {
        auVar6._4_4_ = fVar22 + fVar16;
        auVar6._0_4_ = fVar22 + fVar16;
        auVar6._8_4_ = fVar22 + fVar16;
        auVar6._12_4_ = fVar22 + fVar16;
        unaff_XMM7 = sqrtps(unaff_XMM7,auVar6);
        auVar18 = divps(auVar27,unaff_XMM7);
        uVar26 = auVar18._0_8_;
      }
      local_110 = (float)uVar26;
      fVar16 = local_110;
      fStack_10c = (float)((ulonglong)uVar26 >> 0x20);
      fVar22 = fStack_10c;
      fVar23 = local_res10 * fStack_10c - local_110 * fStackX_14;
      auVar37._4_12_ = unaff_XMM7._4_12_;
      _local_f8 = unaff_XMM7;
      if (fVar23 <= 0.0001) {
        if (fVar23 < -0.0001) {
          fVar25 = (fStack_10c - fStackX_14) * (1.0 / fVar23);
          fVar23 = (local_110 - local_res10) * (1.0 / fVar23);
          if (fVar25 * fVar25 + fVar23 * fVar23 <= fVar38) {
            iVar11 = (int)param_1[1] + 1;
            fVar15 = fVar25 * param_3 + fVar15;
            auVar37 = ZEXT416((uint)fVar15);
            if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
              FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
            }
            pfVar7 = (float *)(*param_1 + (longlong)(int)param_1[1] * 8);
            if (pfVar7 != (float *)0x0) {
              *pfVar7 = fVar23 * param_3 + fVar21;
              pfVar7[1] = fVar15;
            }
            *(int *)(param_1 + 1) = iVar11;
          }
          else {
            uVar8 = 1;
            fVar23 = local_110;
            fVar25 = fStack_10c;
            do {
              fVar24 = fVar25 + fStackX_14;
              uVar8 = uVar8 * 2;
              fVar33 = local_res10 + fVar23;
              auVar28._4_4_ = fVar24;
              auVar28._0_4_ = fVar33;
              auVar28._8_4_ = fVar24;
              auVar28._12_4_ = fVar24;
              auVar17._0_4_ = fVar33 * fVar33;
              fVar24 = fVar24 * fVar24;
              auVar17._4_4_ = auVar17._0_4_;
              auVar17._8_4_ = auVar17._0_4_;
              auVar17._12_4_ = auVar17._0_4_;
              if (fVar24 + auVar17._0_4_ == 0.0) {
                uVar26 = 0;
              }
              else {
                auVar3._4_4_ = fVar24 + auVar17._0_4_;
                auVar3._0_4_ = fVar24 + auVar17._0_4_;
                auVar3._8_4_ = fVar24 + auVar17._0_4_;
                auVar3._12_4_ = fVar24 + auVar17._0_4_;
                auVar18 = sqrtps(auVar17,auVar3);
                auVar18 = divps(auVar28,auVar18);
                uVar26 = auVar18._0_8_;
              }
              local_110 = (float)uVar26;
              fStack_10c = (float)((ulonglong)uVar26 >> 0x20);
              fVar33 = 1.0 / (local_res10 * fStack_10c - local_110 * fStackX_14);
              fVar34 = (local_110 - local_res10) * fVar33;
              fVar36 = (fStack_10c - fStackX_14) * fVar33;
              auVar37 = ZEXT416((uint)fVar36);
              fVar24 = (fVar23 - local_110) * fVar33;
              fVar33 = (fVar25 - fStack_10c) * fVar33;
              fVar32 = fVar36 * fVar36 + fVar34 * fVar34;
              fVar23 = local_110;
              fVar25 = fStack_10c;
            } while (fVar38 < fVar32);
            fVar32 = 1.0 / fVar32;
            fVar23 = (fVar33 * fVar36 + fVar24 * fVar34) * fVar32;
            fVar32 = fVar32 * (fVar33 * fVar34 - fVar24 * fVar36);
            if (0 < (int)uVar8) {
              uVar10 = (ulonglong)uVar8;
              do {
                fVar25 = auVar37._0_4_;
                iVar11 = (int)param_1[1] + 1;
                if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
                  FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
                }
                pfVar7 = (float *)(*param_1 + (longlong)(int)param_1[1] * 8);
                if (pfVar7 != (float *)0x0) {
                  *pfVar7 = fVar34 * param_3 + fVar21;
                  pfVar7[1] = fVar25 * param_3 + fVar15;
                }
                *(int *)(param_1 + 1) = iVar11;
                fVar33 = fVar34 * fVar32;
                fVar34 = fVar34 * fVar23 - fVar25 * fVar32;
                auVar37._4_4_ = 0;
                auVar37._0_4_ = fVar25 * fVar23 + fVar33;
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
          }
          goto LAB_144ff86b6;
        }
        if (fStack_10c * fStackX_14 + local_res10 * local_110 <= 0.0) {
          fVar33 = -fStack_10c;
          uVar8 = 1;
          fVar23 = fVar33;
          fVar25 = local_110;
          do {
            fVar32 = fVar25 + fStackX_14;
            uVar8 = uVar8 * 2;
            fVar24 = local_res10 + fVar23;
            auVar29._4_4_ = fVar32;
            auVar29._0_4_ = fVar24;
            auVar29._8_4_ = fVar32;
            auVar29._12_4_ = fVar32;
            auVar19._0_4_ = fVar24 * fVar24;
            fVar32 = fVar32 * fVar32;
            auVar19._4_4_ = auVar19._0_4_;
            auVar19._8_4_ = auVar19._0_4_;
            auVar19._12_4_ = auVar19._0_4_;
            if (fVar32 + auVar19._0_4_ == 0.0) {
              uVar26 = 0;
            }
            else {
              auVar5._4_4_ = fVar32 + auVar19._0_4_;
              auVar5._0_4_ = fVar32 + auVar19._0_4_;
              auVar5._8_4_ = fVar32 + auVar19._0_4_;
              auVar5._12_4_ = fVar32 + auVar19._0_4_;
              auVar18 = sqrtps(auVar19,auVar5);
              auVar18 = divps(auVar29,auVar18);
              uVar26 = auVar18._0_8_;
            }
            local_108._0_4_ = (float)uVar26;
            local_108._4_4_ = (float)((ulonglong)uVar26 >> 0x20);
            fVar34 = 1.0 / (local_res10 * local_108._4_4_ - (float)local_108 * fStackX_14);
            fVar35 = ((float)local_108 - local_res10) * fVar34;
            fVar32 = (local_108._4_4_ - fStackX_14) * fVar34;
            fVar36 = (fVar23 - (float)local_108) * fVar34;
            fVar34 = (fVar25 - local_108._4_4_) * fVar34;
            fVar24 = fVar32 * fVar32 + fVar35 * fVar35;
            fVar23 = (float)local_108;
            fVar25 = local_108._4_4_;
          } while (fVar38 < fVar24);
          fVar24 = 1.0 / fVar24;
          fVar23 = (fVar34 * fVar35 - fVar36 * fVar32) * fVar24;
          fVar24 = (fVar34 * fVar32 + fVar36 * fVar35) * fVar24;
          if (0 < (int)uVar8) {
            uVar10 = (ulonglong)uVar8;
            local_108 = uVar26;
            do {
              iVar11 = (int)param_1[1] + 1;
              if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
                FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
              }
              pfVar7 = (float *)(*param_1 + (longlong)(int)param_1[1] * 8);
              if (pfVar7 != (float *)0x0) {
                *pfVar7 = fVar35 * param_3 + fVar21;
                pfVar7[1] = fVar32 * param_3 + fVar15;
              }
              *(int *)(param_1 + 1) = iVar11;
              fVar25 = fVar32 * fVar23;
              fVar32 = fVar32 * fVar24 + fVar35 * fVar23;
              fVar35 = fVar35 * fVar24 - fVar25;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          uVar8 = 1;
          fVar23 = local_110;
          do {
            fVar25 = fVar23 + fVar33;
            uVar8 = uVar8 * 2;
            fVar24 = local_110 + fStack_10c;
            auVar30._4_4_ = fVar24;
            auVar30._0_4_ = fVar25;
            auVar30._8_4_ = fVar24;
            auVar30._12_4_ = fVar24;
            auVar20._0_4_ = fVar25 * fVar25;
            fVar24 = fVar24 * fVar24;
            auVar20._4_4_ = auVar20._0_4_;
            auVar20._8_4_ = auVar20._0_4_;
            auVar20._12_4_ = auVar20._0_4_;
            if (fVar24 + auVar20._0_4_ == 0.0) {
              uVar26 = 0;
            }
            else {
              auVar4._4_4_ = fVar24 + auVar20._0_4_;
              auVar4._0_4_ = fVar24 + auVar20._0_4_;
              auVar4._8_4_ = fVar24 + auVar20._0_4_;
              auVar4._12_4_ = fVar24 + auVar20._0_4_;
              auVar18 = sqrtps(auVar20,auVar4);
              auVar18 = divps(auVar30,auVar18);
              uVar26 = auVar18._0_8_;
            }
            local_108._0_4_ = (float)uVar26;
            local_108._4_4_ = (float)((ulonglong)uVar26 >> 0x20);
            fVar25 = 1.0 / (fVar33 * local_108._4_4_ - (float)local_108 * local_110);
            fVar34 = ((float)local_108 - fVar33) * fVar25;
            fVar36 = (local_108._4_4_ - local_110) * fVar25;
            auVar37 = ZEXT416((uint)fVar36);
            fVar24 = (fVar23 - (float)local_108) * fVar25;
            fVar25 = (fStack_10c - local_108._4_4_) * fVar25;
            fVar32 = fVar36 * fVar36 + fVar34 * fVar34;
            fVar23 = (float)local_108;
            fStack_10c = local_108._4_4_;
          } while (fVar38 < fVar32);
          fVar32 = 1.0 / fVar32;
          fVar23 = (fVar25 * fVar36 + fVar24 * fVar34) * fVar32;
          fVar32 = fVar32 * (fVar25 * fVar34 - fVar24 * fVar36);
          local_108 = uVar26;
          if (0 < (int)uVar8) {
            uVar10 = (ulonglong)uVar8;
            do {
              fVar25 = auVar37._0_4_;
              iVar11 = (int)param_1[1] + 1;
              if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
                FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
              }
              pfVar7 = (float *)(*param_1 + (longlong)(int)param_1[1] * 8);
              if (pfVar7 != (float *)0x0) {
                *pfVar7 = fVar34 * param_3 + fVar21;
                pfVar7[1] = fVar25 * param_3 + fVar15;
              }
              *(int *)(param_1 + 1) = iVar11;
              fVar33 = fVar34 * fVar32;
              fVar34 = fVar34 * fVar23 - fVar25 * fVar32;
              auVar37._4_4_ = 0;
              auVar37._0_4_ = fVar25 * fVar23 + fVar33;
              uVar10 = uVar10 - 1;
            } while (uVar10 != 0);
          }
          goto LAB_144ff86b6;
        }
        iVar11 = (int)param_1[1] + 1;
        if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
          FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        pfVar7 = (float *)(*param_1 + (longlong)(int)param_1[1] * 8);
        if (pfVar7 != (float *)0x0) {
          *pfVar7 = fVar21 - fStackX_14 * param_3;
          pfVar7[1] = local_res10 * param_3 + fVar15;
        }
        *(int *)(param_1 + 1) = iVar11;
      }
      else {
        fVar25 = (local_110 - local_res10) * (param_3 / fVar23);
        fVar23 = (fStack_10c - fStackX_14) * (param_3 / fVar23);
        fVar33 = fStack_10c * fVar23 + local_110 * fVar25;
        if ((auVar31._0_4_ - 0.0001 <= fVar33) || (unaff_XMM7._0_4_ - 0.0001 <= fVar33)) {
          iVar11 = (int)param_1[1];
          iVar9 = iVar11 + 1;
          if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar9) {
            FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
          }
          pfVar7 = (float *)(*param_1 + (longlong)(int)param_1[1] * 8);
          if (pfVar7 != (float *)0x0) {
            *pfVar7 = fVar21 - fStackX_14 * param_3;
            pfVar7[1] = local_res10 * param_3 + fVar15;
          }
          *(int *)(param_1 + 1) = iVar9;
          iVar9 = iVar11 + 2;
          if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar9) {
            FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar9);
          }
          plVar1 = param_1 + 1;
          pfVar7 = (float *)(*param_1 + (longlong)(int)*plVar1 * 8);
          if (pfVar7 != (float *)0x0) {
            *pfVar7 = fVar21;
            pfVar7[1] = fVar15;
          }
          iVar11 = iVar11 + 3;
          *(int *)plVar1 = iVar9;
          if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
            FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
          }
          pfVar7 = (float *)(*param_1 + (longlong)(int)*plVar1 * 8);
          if (pfVar7 != (float *)0x0) {
            *pfVar7 = fVar21 - fStack_10c * param_3;
            pfVar7[1] = local_110 * param_3 + fVar15;
          }
          *(int *)plVar1 = iVar11;
          auVar37 = unaff_XMM7;
        }
        else {
          iVar11 = (int)param_1[1] + 1;
          if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar11) {
            FUN_144ff0ef0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar11);
          }
          pfVar7 = (float *)(*param_1 + (longlong)(int)param_1[1] * 8);
          if (pfVar7 != (float *)0x0) {
            *pfVar7 = fVar21 + fVar25;
            pfVar7[1] = fVar15 + fVar23;
          }
          auVar37._0_4_ = unaff_XMM7._0_4_ - fVar33;
          *(int *)(param_1 + 1) = iVar11;
          _local_f8 = auVar37;
        }
LAB_144ff86b6:
        unaff_XMM7 = auVar37;
      }
      auVar31 = ZEXT416((uint)local_f8._0_4_);
      iVar13 = iVar13 + 1;
      lVar12 = lVar14;
      lVar14 = lVar14 + 8;
      fStackX_14 = fVar22;
      local_res10 = fVar16;
    } while (iVar13 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 144ff8760 FUN_144ff8760 body=208 status=ok
// SIG undefined FUN_144ff8760(void)

void FUN_144ff8760(longlong *param_1,float param_2)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar5 = (int)param_1[1];
  uVar1 = 0;
  lVar6 = *param_1;
  fVar10 = *(float *)(lVar6 + -8 + (longlong)iVar5 * 8);
  fVar11 = *(float *)(lVar6 + -4 + (longlong)iVar5 * 8);
  uVar3 = uVar1;
  uVar4 = uVar1;
  uVar7 = uVar1;
  if (0 < iVar5) {
    do {
      fVar8 = fVar11 - *(float *)(uVar1 + 4 + lVar6);
      fVar9 = fVar10 - *(float *)(uVar1 + lVar6);
      if (param_2 < fVar8 * fVar8 + fVar9 * fVar9) {
        uVar7 = (ulonglong)((int)uVar7 + 1);
        *(undefined8 *)(uVar4 + lVar6) = *(undefined8 *)(uVar1 + lVar6);
        uVar4 = uVar4 + 8;
        lVar6 = *param_1;
        fVar10 = *(float *)(uVar1 + lVar6);
        fVar11 = *(float *)(uVar1 + 4 + lVar6);
      }
      uVar2 = (int)uVar3 + 1;
      uVar1 = uVar1 + 8;
      uVar3 = (ulonglong)uVar2;
    } while ((int)uVar2 < (int)param_1[1]);
  }
  iVar5 = 1;
  if (1 < (int)uVar7) {
    iVar5 = (int)uVar7;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
    FUN_144c587a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  if (((int)param_1[1] < iVar5) || (iVar5 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar5;
  }
  return;
}



// FUNCTION 144ff8830 FUN_144ff8830 body=102 status=ok
// SIG undefined FUN_144ff8830(void)

bool FUN_144ff8830(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [8];
  undefined4 local_80;
  undefined4 local_7c;
  char local_74;
  
  local_98 = *param_1;
  uStack_94 = param_1[1];
  uStack_90 = param_1[2];
  uStack_8c = param_1[3];
  FUN_14532df50(local_88,&local_98,*param_2);
  FUN_14532e260(local_88);
  if (local_74 != '\0') {
    *param_3 = CONCAT44(local_7c,local_80);
  }
  FUN_14532e0e0(local_88);
  return local_74 != '\0';
}



// FUNCTION 144ff88a0 FUN_144ff88a0 body=17 status=ok
// SIG undefined FUN_144ff88a0(void)

void FUN_144ff88a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0xff;
  return;
}



// FUNCTION 144ff88c0 FUN_144ff88c0 body=10 status=ok
// SIG undefined FUN_144ff88c0(void)

bool FUN_144ff88c0(longlong param_1)

{
  return *(char *)(param_1 + 0x18) == -1;
}



// FUNCTION 144ff88d0 FUN_144ff88d0 body=56 status=ok
// SIG undefined FUN_144ff88d0(void)

void FUN_144ff88d0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar1 = ((longlong)*(char *)(param_1 + 0x18) >> 1) * 0x10;
  uVar3 = *(uint *)(&DAT_14c6dae40 + lVar1);
  uVar4 = *(uint *)(lVar1 + 0x14c6dae44);
  uVar5 = *(uint *)(lVar1 + 0x14c6dae48);
  uVar2 = *(uint *)(lVar1 + 0x14c6dae4c);
  if (((longlong)*(char *)(param_1 + 0x18) & 1U) != 0) {
    uVar3 = uVar3 ^ 0x80000000;
    uVar4 = uVar4 ^ 0x80000000;
    uVar5 = uVar5 ^ 0x80000000;
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar2;
  return;
}



// FUNCTION 144ff8910 FUN_144ff8910 body=148 status=ok
// SIG undefined FUN_144ff8910(void)

void FUN_144ff8910(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *(char *)(param_1 + 3);
  iVar3 = (int)cVar1 >> 1;
  uVar2 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = uVar2;
  iVar4 = iVar3 + 2;
  iVar5 = (iVar3 + 1) % 3;
  iVar4 = iVar4 + (iVar4 / 3 + (iVar4 >> 0x1f) +
                  (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar3 = iVar5;
  if (((int)cVar1 & 1U) == 0) {
    iVar3 = iVar4;
    iVar4 = iVar5;
  }
  *(float *)((longlong)param_2 + (longlong)iVar4 * 4) =
       *(float *)(param_1 + 2) + *(float *)((longlong)param_2 + (longlong)iVar4 * 4);
  *(float *)((longlong)param_2 + (longlong)iVar3 * 4) =
       *(float *)((longlong)param_1 + 0x14) + *(float *)((longlong)param_2 + (longlong)iVar3 * 4);
  return;
}



// FUNCTION 144ff89b0 FUN_144ff89b0 body=954 status=ok
// SIG undefined FUN_144ff89b0(void)

void FUN_144ff89b0(float *param_1,float *param_2,float *param_3,undefined8 param_4,float *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined4 uVar12;
  float *pfVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar24;
  float fVar25;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar34 [16];
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8 [3];
  uint uStack_ec;
  float local_e8 [4];
  undefined1 local_d8 [4];
  float afStack_d4 [3];
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [8];
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  undefined1 local_98 [4];
  float afStack_94 [3];
  undefined1 local_88 [8];
  float fStack_80;
  float fStack_7c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  fVar8 = *param_2;
  fVar9 = param_2[1];
  fVar25 = param_2[2];
  fVar10 = param_2[3];
  iVar17 = (int)(char)*(byte *)(param_1 + 6) >> 1;
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  stack0xffffffffffffff10 = 0;
  local_e8[0] = 0.0;
  local_e8[1] = 0.0;
  local_e8[2] = 0.0;
  local_e8[3] = 0.0;
  iVar16 = iVar17 + 1;
  iVar15 = iVar17 + 2;
  iVar16 = iVar16 + (iVar16 / 3 + (iVar16 >> 0x1f) +
                    (int)(((longlong)iVar16 / 3 + ((longlong)iVar16 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
  iVar15 = iVar15 + (iVar15 / 3 + (iVar15 >> 0x1f) +
                    (int)(((longlong)iVar15 / 3 + ((longlong)iVar15 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
  bVar14 = *(byte *)(param_1 + 6) & 1;
  iVar3 = iVar15;
  if (bVar14 == 0) {
    iVar3 = iVar16;
  }
  if (bVar14 == 0) {
    iVar16 = iVar15;
  }
  local_f8[iVar3] = param_1[4];
  local_e8[iVar16] = param_1[5];
  lVar2 = (longlong)(4 << ((byte)iVar17 & 0x1f)) * 4;
  uVar24 = *(uint *)(&DAT_14998f650 + lVar2);
  uVar29 = *(uint *)(&UNK_14998f654 + lVar2);
  uVar31 = *(uint *)(&UNK_14998f658 + lVar2);
  uVar33 = *(uint *)(&UNK_14998f65c + lVar2);
  uVar18 = (uint)(fVar8 - fVar4) & uVar24;
  uVar21 = (uint)(fVar9 - fVar5) & uVar29;
  uVar22 = (uint)(fVar25 - fVar6) & uVar31;
  uVar23 = (uint)(fVar10 - fVar7) & uVar33;
  uVar30 = uVar22 | uVar18;
  uVar32 = uVar23 | uVar21;
  uVar18 = uVar18 | uVar22;
  uVar21 = uVar21 | uVar23;
  local_108 = (float)(uVar32 | uVar30);
  fStack_104 = (float)(uVar30 | uVar32);
  fStack_100 = (float)(uVar21 | uVar18);
  fStack_fc = (float)(uVar18 | uVar21);
  if (bVar14 != 0) {
    local_108 = 0.0 - local_108;
    fStack_104 = 0.0 - fStack_104;
    fStack_100 = 0.0 - fStack_100;
    fStack_fc = 0.0 - fStack_fc;
  }
  uVar18 = -(uint)(local_108 < 0.0) & uVar24;
  uVar21 = -(uint)(fStack_104 < 0.0) & uVar29;
  uVar22 = -(uint)(fStack_100 < 0.0) & uVar31;
  uVar23 = -(uint)(fStack_fc < 0.0) & uVar33;
  local_108 = (float)(uVar18 & (uint)fVar4 | ~uVar18 & (uint)fVar8);
  fStack_104 = (float)(uVar21 & (uint)fVar5 | ~uVar21 & (uint)fVar9);
  fStack_100 = (float)(uVar22 & (uint)fVar6 | ~uVar22 & (uint)fVar25);
  fStack_fc = (float)(uVar23 & (uint)fVar7 | ~uVar23 & (uint)fVar10);
  uVar22 = (uint)(*param_3 - fVar4) & uVar24;
  uVar23 = (uint)(param_3[1] - fVar5) & uVar29;
  uVar30 = (uint)(param_3[2] - fVar6) & uVar31;
  uVar32 = (uint)(param_3[3] - fVar7) & uVar33;
  uVar18 = uVar30 | uVar22;
  uVar21 = uVar32 | uVar23;
  uVar22 = uVar22 | uVar30;
  uVar23 = uVar23 | uVar32;
  local_118._0_4_ = uVar21 | uVar18;
  local_118._4_4_ = uVar18 | uVar21;
  fStack_110 = (float)(uVar23 | uVar22);
  fStack_10c = (float)(uVar22 | uVar23);
  if (bVar14 == 0) {
  }
  else {
    local_118._4_4_ = 0.0 - (float)local_118._4_4_;
    local_118._0_4_ = 0.0 - (float)local_118._0_4_;
    fStack_110 = 0.0 - fStack_110;
    fStack_10c = 0.0 - fStack_10c;
  }
  uVar24 = -(uint)(0.0 < (float)local_118._0_4_) & uVar24;
  uVar29 = -(uint)(0.0 < (float)local_118._4_4_) & uVar29;
  uVar31 = -(uint)(0.0 < fStack_110) & uVar31;
  uVar33 = -(uint)(0.0 < fStack_10c) & uVar33;
  auVar28._0_4_ = uVar24 & (uint)fVar4;
  auVar28._4_4_ = uVar29 & (uint)fVar5;
  auVar28._8_4_ = uVar31 & (uint)fVar6;
  auVar28._12_4_ = uVar33 & (uint)fVar7;
  auVar26._0_4_ = ~uVar24 & (uint)*param_3;
  auVar26._4_4_ = ~uVar29 & (uint)param_3[1];
  auVar26._8_4_ = ~uVar31 & (uint)param_3[2];
  auVar26._12_4_ = ~uVar33 & (uint)param_3[3];
  _local_118 = auVar28 | auVar26;
  iVar16 = FUN_144ff8f10(param_1,&local_108,local_118,param_5);
  if (iVar16 == 0) {
    pfVar13 = &local_108;
    local_c8._4_4_ = fVar5 + local_f8[1];
    local_c8._0_4_ = fVar5;
    fStack_c0 = local_e8[1] + fVar5 + local_f8[1];
    fStack_bc = local_e8[1] + fVar5;
    afStack_d4[0] = fVar4 + local_f8[0];
    local_d8 = (undefined1  [4])fVar4;
    afStack_d4[1] = local_e8[0] + fVar4 + local_f8[0];
    afStack_d4[2] = local_e8[0] + fVar4;
    afStack_94[0] = local_e8[0];
    local_98 = (undefined1  [4])local_f8[0];
    afStack_94[1] = -local_f8[0];
    afStack_94[2] = -local_e8[0];
    local_b8._4_4_ = fVar6 + local_f8[2];
    local_b8._0_4_ = fVar6;
    fStack_b0 = local_e8[2] + fVar6 + local_f8[2];
    fStack_ac = local_e8[2] + fVar6;
    local_88._4_4_ = local_e8[1];
    local_88._0_4_ = local_f8[1];
    fStack_80 = -local_f8[1];
    fStack_7c = -local_e8[1];
    local_78._4_4_ = local_e8[2];
    local_78._0_4_ = local_f8[2];
    fStack_70 = -local_f8[2];
    fStack_6c = -local_e8[2];
    FUN_144ff99f0(pfVar13,local_118,local_d8,local_98,param_4,local_f8,local_e8);
    auVar11._4_4_ = local_e8[1];
    auVar11._0_4_ = local_e8[0];
    auVar11._8_4_ = local_e8[2];
    auVar11._12_4_ = local_e8[3];
    fVar4 = afStack_d4[0];
    fVar5 = afStack_d4[1];
    fVar6 = afStack_d4[2];
    fVar7 = afStack_94[0];
    fVar8 = afStack_94[1];
    fVar9 = afStack_94[2];
    auVar27._0_8_ = auVar11._8_8_;
    auVar27._8_4_ = local_e8[0];
    auVar27._12_4_ = local_e8[1];
    auVar28 = minps(auVar27,auVar11);
    auVar19._4_4_ = auVar28._0_4_;
    auVar19._0_4_ = auVar28._4_4_;
    auVar19._8_4_ = auVar28._12_4_;
    auVar19._12_4_ = auVar28._8_4_;
    auVar28 = minps(auVar28,auVar19);
    fVar25 = auVar28._0_4_;
    auVar34._4_4_ = -(uint)(local_e8[1] <= fVar25);
    auVar34._0_4_ = -(uint)(local_e8[0] <= fVar25);
    auVar34._8_4_ = -(uint)(local_e8[2] <= fVar25);
    auVar34._12_4_ = -(uint)(local_e8[3] <= fVar25);
    uVar12 = movmskps((int)pfVar13,auVar34);
    afStack_d4[0] = (float)local_c8._0_4_;
    afStack_d4[1] = (float)local_b8._0_4_;
    afStack_d4[2] = 0.0;
    bVar14 = (&DAT_14998f5a0)[CONCAT44((int)((ulonglong)pfVar13 >> 0x20),uVar12)];
    auVar20._4_4_ = fStack_c0;
    auVar20._0_4_ = fVar5;
    auVar20._8_4_ = fStack_b0;
    auVar20._12_4_ = 0;
    local_a8._4_4_ = fStack_bc;
    local_a8._0_4_ = fVar6;
    local_a8._8_4_ = fStack_ac;
    local_a8._12_4_ = 0;
    local_c8._0_4_ = fVar4;
    fStack_c0 = (float)local_b8._4_4_;
    fStack_bc = 0.0;
    _local_b8 = auVar20;
    uVar12 = local_78._4_4_;
    fVar5 = fStack_6c;
    fVar4 = fStack_7c;
    afStack_94[0] = (float)local_88._0_4_;
    afStack_94[1] = (float)local_78._0_4_;
    afStack_94[2] = 0.0;
    local_78._4_4_ = fStack_80;
    local_78._0_4_ = fVar8;
    fStack_6c = 0.0;
    local_88._0_4_ = fVar7;
    fStack_80 = (float)uVar12;
    fStack_7c = 0.0;
    local_68._4_4_ = fVar4;
    local_68._0_4_ = fVar9;
    local_68._8_4_ = fVar5;
    local_68._12_4_ = 0;
    lVar2 = (longlong)(4 << (bVar14 & 0x1f)) * 4;
    uVar24 = (uint)local_f8[2] & *(uint *)(&UNK_14998f658 + lVar2) |
             (uint)local_f8[0] & *(uint *)(&DAT_14998f650 + lVar2);
    uVar29 = uStack_ec & *(uint *)(&UNK_14998f65c + lVar2) |
             (uint)local_f8[1] & *(uint *)(&UNK_14998f654 + lVar2);
    uVar31 = (uint)local_f8[0] & *(uint *)(&DAT_14998f650 + lVar2) |
             (uint)local_f8[2] & *(uint *)(&UNK_14998f658 + lVar2);
    uVar33 = (uint)local_f8[1] & *(uint *)(&UNK_14998f654 + lVar2) |
             uStack_ec & *(uint *)(&UNK_14998f65c + lVar2);
    lVar2 = (longlong)(char)bVar14 * 0x10;
    fVar4 = *(float *)(local_98 + lVar2 + 4);
    fVar5 = *(float *)(local_98 + lVar2 + 8);
    fVar6 = *(float *)(local_98 + lVar2 + 0xc);
    lVar1 = (longlong)(char)bVar14 * 0x10;
    fVar7 = *(float *)(local_d8 + lVar1 + 4);
    fVar8 = *(float *)(local_d8 + lVar1 + 8);
    fVar9 = *(float *)(local_d8 + lVar1 + 0xc);
    *param_5 = (float)(uVar29 | uVar24) * *(float *)(local_98 + lVar2) +
               *(float *)(local_d8 + lVar1);
    param_5[1] = (float)(uVar24 | uVar29) * fVar4 + fVar7;
    param_5[2] = (float)(uVar33 | uVar31) * fVar5 + fVar8;
    param_5[3] = (float)(uVar31 | uVar33) * fVar6 + fVar9;
  }
  return;
}



// FUNCTION 144ff8d70 FUN_144ff8d70 body=185 status=ok
// SIG undefined FUN_144ff8d70(void)

void FUN_144ff8d70(undefined1 (*param_1) [16],undefined1 (*param_2) [16],undefined1 (*param_3) [16])

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char cVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auVar11 [16];
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float local_18 [4];
  
  auVar2 = param_1[1];
  auVar3 = param_2[1];
  auVar13._4_4_ = -(uint)(auVar2._4_4_ == *(float *)(*param_2 + 4));
  auVar13._0_4_ = -(uint)(auVar2._0_4_ == *(float *)*param_2);
  auVar13._8_4_ = -(uint)(auVar2._8_4_ == *(float *)(*param_2 + 8));
  auVar13._12_4_ = -(uint)(auVar2._12_4_ == *(float *)(*param_2 + 0xc));
  auVar14 = maxps(*param_1,*param_2);
  auVar11 = minps(auVar2,auVar3);
  iVar7 = -(uint)(auVar3._0_4_ == *(float *)*param_1);
  iVar8 = -(uint)(auVar3._4_4_ == *(float *)(*param_1 + 4));
  iVar9 = -(uint)(auVar3._8_4_ == *(float *)(*param_1 + 8));
  iVar10 = -(uint)(auVar3._12_4_ == *(float *)(*param_1 + 0xc));
  auVar2._4_4_ = iVar8;
  auVar2._0_4_ = iVar7;
  auVar2._8_4_ = iVar9;
  auVar2._12_4_ = iVar10;
  auVar3._4_4_ = iVar8;
  auVar3._0_4_ = iVar7;
  auVar3._8_4_ = iVar9;
  auVar3._12_4_ = iVar10;
  uVar6 = movmskps(unaff_EBX,auVar3);
  uVar5 = movmskps((int)param_1,auVar13 | auVar2);
  local_18[0] = auVar11._0_4_ - auVar14._0_4_;
  local_18[1] = auVar11._4_4_ - auVar14._4_4_;
  local_18[2] = auVar11._8_4_ - auVar14._8_4_;
  local_18[3] = auVar11._12_4_ - auVar14._12_4_;
  cVar4 = (&DAT_14998f5a0)[CONCAT44((int)((ulonglong)param_1 >> 0x20),uVar5)];
  iVar7 = cVar4 + 2;
  iVar7 = iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                  (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar8 = cVar4 + 1;
  iVar8 = iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                  (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  if ((uVar6 & 7) == 0) {
    fVar1 = local_18[iVar7];
    fVar12 = local_18[iVar8];
  }
  else {
    fVar1 = local_18[iVar8];
    fVar12 = local_18[iVar7];
  }
  *(float *)param_3[1] = fVar1;
  *(float *)(param_3[1] + 4) = fVar12;
  *param_3 = auVar14;
  param_3[1][8] = (uVar6 & 7) == 0 | cVar4 * '\x02';
  return;
}



// FUNCTION 144ff8e30 FUN_144ff8e30 body=222 status=ok
// SIG undefined FUN_144ff8e30(void)

void FUN_144ff8e30(undefined1 (*param_1) [16],uint *param_2,undefined1 (*param_3) [16])

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 local_18 [16];
  
  bVar2 = param_1[1][8];
  if (bVar2 != 0xff) {
    auVar9 = *param_1;
    iVar4 = (int)(char)bVar2 >> 1;
    local_18 = auVar9;
    iVar6 = iVar4 + 1;
    iVar5 = iVar4 + 2;
    lVar1 = (longlong)(4 << ((byte)iVar4 & 0x1f)) * 4;
    auVar7._0_4_ = *(uint *)(&DAT_14998f650 + lVar1) & auVar9._0_4_;
    auVar7._4_4_ = *(uint *)(&UNK_14998f654 + lVar1) & auVar9._4_4_;
    auVar7._8_4_ = *(uint *)(&UNK_14998f658 + lVar1) & auVar9._8_4_;
    auVar7._12_4_ = *(uint *)(&UNK_14998f65c + lVar1) & auVar9._12_4_;
    auVar8._4_4_ = ~*(uint *)(&UNK_14998f654 + lVar1) & param_2[1];
    auVar8._0_4_ = ~*(uint *)(&DAT_14998f650 + lVar1) & *param_2;
    auVar8._8_4_ = ~*(uint *)(&UNK_14998f658 + lVar1) & param_2[2];
    auVar8._12_4_ = ~*(uint *)(&UNK_14998f65c + lVar1) & param_2[3];
    iVar6 = iVar6 + (iVar6 / 3 + (iVar6 >> 0x1f) +
                    (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    iVar5 = iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                    (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    iVar4 = iVar6;
    if ((bVar2 & 1) == 0) {
      iVar4 = iVar5;
      iVar5 = iVar6;
    }
    *(float *)(local_18 + (longlong)iVar5 * 4) =
         *(float *)param_1[1] + *(float *)(local_18 + (longlong)iVar5 * 4);
    *(float *)(local_18 + (longlong)iVar4 * 4) =
         *(float *)(param_1[1] + 4) + *(float *)(local_18 + (longlong)iVar4 * 4);
    auVar8 = minps(auVar7 | auVar8,local_18);
    auVar9 = maxps(auVar9,auVar8);
    *param_3 = auVar9;
    return;
  }
  uVar3 = *(undefined8 *)(*param_1 + 8);
  *(undefined8 *)*param_3 = *(undefined8 *)*param_1;
  *(undefined8 *)(*param_3 + 8) = uVar3;
  return;
}



// FUNCTION 144ff8f10 FUN_144ff8f10 body=474 status=ok
// SIG undefined FUN_144ff8f10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_144ff8f10(undefined1 (*param_1) [16],undefined1 (*param_2) [16],float *param_3,
                  undefined1 (*param_4) [16])

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  float fVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 local_58 [5] [16];
  
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[3];
  fVar8 = *(float *)*param_2;
  fVar9 = *(float *)(*param_2 + 4);
  fVar10 = *(float *)(*param_2 + 8);
  fVar11 = *(float *)(*param_2 + 0xc);
  iVar13 = (int)(char)param_1[1][8] >> 1;
  auVar33 = *param_1;
  lVar1 = (longlong)(4 << ((byte)iVar13 & 0x1f)) * 4;
  uVar15 = *(uint *)(&DAT_14998f650 + lVar1);
  uVar16 = *(uint *)(&UNK_14998f654 + lVar1);
  uVar17 = *(uint *)(&UNK_14998f658 + lVar1);
  uVar18 = *(uint *)(&UNK_14998f65c + lVar1);
  uVar22 = uVar17 & (uint)fVar10 | uVar15 & (uint)fVar8;
  uVar24 = uVar18 & (uint)fVar11 | uVar16 & (uint)fVar9;
  uVar25 = uVar15 & (uint)fVar8 | uVar17 & (uint)fVar10;
  uVar26 = uVar16 & (uint)fVar9 | uVar18 & (uint)fVar11;
  fVar23 = (float)(uVar24 | uVar22);
  fVar30 = (float)(uVar22 | uVar24);
  fVar31 = (float)(uVar26 | uVar25);
  fVar32 = (float)(uVar25 | uVar26);
  uVar22 = uVar17 & (uint)fVar6 | uVar15 & (uint)fVar4;
  uVar24 = uVar18 & (uint)fVar7 | uVar16 & (uint)fVar5;
  uVar25 = uVar15 & (uint)fVar4 | uVar17 & (uint)fVar6;
  uVar26 = uVar16 & (uint)fVar5 | uVar18 & (uint)fVar7;
  auVar21._0_4_ = uVar15 & auVar33._0_4_;
  auVar21._4_4_ = uVar16 & auVar33._4_4_;
  auVar21._8_4_ = uVar17 & auVar33._8_4_;
  auVar21._12_4_ = uVar18 & auVar33._12_4_;
  auVar27._4_4_ = auVar21._12_4_;
  auVar27._0_4_ = auVar21._8_4_;
  auVar27._8_4_ = auVar21._0_4_;
  auVar27._12_4_ = auVar21._4_4_;
  auVar29._0_4_ = (float)(uVar24 | uVar22) - fVar23;
  auVar29._4_4_ = (float)(uVar22 | uVar24) - fVar30;
  auVar29._8_4_ = (float)(uVar26 | uVar25) - fVar31;
  auVar29._12_4_ = (float)(uVar25 | uVar26) - fVar32;
  auVar27 = auVar27 | auVar21;
  if (auVar29._0_4_ != 0.0) {
    auVar19._4_4_ = auVar27._0_4_;
    auVar19._0_4_ = auVar27._4_4_;
    auVar19._8_4_ = auVar27._12_4_;
    auVar19._12_4_ = auVar27._8_4_;
    auVar19 = auVar19 | auVar27;
    auVar20._0_4_ = auVar19._0_4_ - fVar23;
    auVar20._4_4_ = auVar19._4_4_ - fVar30;
    auVar20._8_4_ = auVar19._8_4_ - fVar31;
    auVar20._12_4_ = auVar19._12_4_ - fVar32;
    auVar21 = divps(auVar20,auVar29);
    auVar27 = minps(auVar21,_DAT_1499314a0);
    auVar27 = maxps(auVar27,ZEXT816(0));
    fVar23 = auVar27._0_4_;
    if (fVar23 == auVar21._0_4_) {
      iVar14 = iVar13 + 1;
      local_58[0] = auVar33;
      iVar13 = iVar13 + 2;
      auVar28._0_4_ = ~uVar15 & (uint)((fVar4 - fVar8) * fVar23 + fVar8);
      auVar28._4_4_ = ~uVar16 & (uint)((fVar5 - fVar9) * auVar27._4_4_ + fVar9);
      auVar28._8_4_ = ~uVar17 & (uint)((fVar6 - fVar10) * auVar27._8_4_ + fVar10);
      auVar28._12_4_ = ~uVar18 & (uint)((fVar7 - fVar11) * auVar27._12_4_ + fVar11);
      auVar2._4_4_ = uVar16 & auVar33._4_4_;
      auVar2._0_4_ = uVar15 & auVar33._0_4_;
      auVar2._8_4_ = uVar17 & auVar33._8_4_;
      auVar2._12_4_ = uVar18 & auVar33._12_4_;
      auVar28 = auVar28 | auVar2;
      iVar14 = iVar14 + (iVar14 / 3 + (iVar14 >> 0x1f) +
                        (int)(((longlong)iVar14 / 3 + ((longlong)iVar14 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
      iVar13 = iVar13 + (iVar13 / 3 + (iVar13 >> 0x1f) +
                        (int)(((longlong)iVar13 / 3 + ((longlong)iVar13 >> 0x3f) & 0xffffffffU) >>
                             0x1f)) * -3;
      iVar3 = iVar14;
      if (((int)(char)param_1[1][8] & 1U) == 0) {
        iVar3 = iVar13;
        iVar13 = iVar14;
      }
      *(float *)(local_58[0] + (longlong)iVar13 * 4) =
           *(float *)param_1[1] + *(float *)(local_58[0] + (longlong)iVar13 * 4);
      *(float *)(local_58[0] + (longlong)iVar3 * 4) =
           *(float *)(param_1[1] + 4) + *(float *)(local_58[0] + (longlong)iVar3 * 4);
      auVar21 = minps(auVar28,local_58[0]);
      auVar33 = maxps(auVar33,auVar21);
      *param_4 = auVar33;
      auVar34._4_4_ = -(uint)(auVar33._4_4_ == auVar28._4_4_);
      auVar34._0_4_ = -(uint)(auVar33._0_4_ == auVar28._0_4_);
      auVar34._8_4_ = -(uint)(auVar33._8_4_ == auVar28._8_4_);
      auVar34._12_4_ = -(uint)(auVar33._12_4_ == auVar28._12_4_);
      uVar12 = movmskps(iVar13,auVar34);
      return ((byte)uVar12 & 7) == 7;
    }
    uVar15 = -(uint)(fVar23 < auVar21._0_4_);
    uVar16 = -(uint)(auVar27._4_4_ < auVar21._4_4_);
    uVar17 = -(uint)(auVar27._8_4_ < auVar21._8_4_);
    uVar18 = -(uint)(auVar27._12_4_ < auVar21._12_4_);
    param_2 = local_58;
    local_58[0]._4_4_ = ~uVar16 & (uint)fVar5 | uVar16 & (uint)fVar9;
    local_58[0]._0_4_ = ~uVar15 & (uint)fVar4 | uVar15 & (uint)fVar8;
    local_58[0]._8_4_ = ~uVar17 & (uint)fVar6 | uVar17 & (uint)fVar10;
    local_58[0]._12_4_ = ~uVar18 & (uint)fVar7 | uVar18 & (uint)fVar11;
  }
  FUN_144ff8e30(param_1,param_2,param_4);
                    /* WARNING: Read-only address (ram,0x0001499314a0) is written */
  return false;
}



// FUNCTION 144ff90f0 FUN_144ff90f0 body=11 status=ok
// SIG undefined FUN_144ff90f0(void)

void FUN_144ff90f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 5) = 0xfe;
  return;
}



// FUNCTION 144ff9100 FUN_144ff9100 body=1790 status=ok
// SIG undefined FUN_144ff9100(void)

void FUN_144ff9100(float *param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  bool bVar12;
  bool bVar13;
  uint uVar14;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar15 [16];
  uint uVar19;
  uint uVar21;
  undefined1 auVar20 [16];
  float fVar22;
  float fVar24;
  undefined1 auVar23 [16];
  uint uVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float local_res10;
  float local_res14;
  float local_res18;
  float local_res1c;
  float local_108 [4];
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  uint local_e8;
  uint uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  
  bVar4 = *(byte *)(param_2 + 6);
  fVar22 = *param_2;
  fVar24 = param_2[1];
  fVar32 = param_2[2];
  fVar31 = param_2[3];
  iVar7 = (int)(char)bVar4 >> 1;
  lVar1 = (longlong)(4 << ((byte)iVar7 & 0x1f)) * 4;
  local_108[0] = (float)((uint)(param_1[3] - fVar31) & *(uint *)(&UNK_14998f65c + lVar1) |
                         (uint)(param_1[1] - fVar24) & *(uint *)(&UNK_14998f654 + lVar1) |
                        (uint)(param_1[2] - fVar32) & *(uint *)(&UNK_14998f658 + lVar1) |
                        (uint)(*param_1 - fVar22) & *(uint *)(&DAT_14998f650 + lVar1));
  if ((bVar4 & 1) != 0) {
    local_108[0] = 0.0 - local_108[0];
  }
  if (*(char *)(param_1 + 10) == -2) {
    param_1[4] = fVar22;
    param_1[5] = fVar24;
    param_1[6] = fVar32;
    param_1[7] = fVar31;
    param_1[8] = param_2[4];
    param_1[9] = param_2[5];
    *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 6);
    if (local_108[0] < 0.0) {
      param_1[8] = -1.0;
      param_1[9] = -1.0;
    }
    iVar8 = (int)*(char *)(param_2 + 6) >> 1;
    iVar7 = iVar8 + 1;
    iVar8 = iVar8 + 2;
    iVar7 = iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                    (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    iVar8 = iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                    (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    iVar10 = iVar8;
    if (((int)*(char *)(param_2 + 6) & 1U) == 0) {
      iVar10 = iVar7;
      iVar7 = iVar8;
    }
    fVar22 = param_1[iVar7];
    fVar24 = param_1[iVar10];
    param_1[0xc] = fVar24;
    param_1[0xe] = fVar24;
    param_1[0xd] = fVar22;
    param_1[0xf] = fVar22;
    return;
  }
  if (param_1[8] <= 0.0 && param_1[8] != 0.0) {
    return;
  }
  if (param_1[9] <= 0.0 && param_1[9] != 0.0) {
    return;
  }
  if (local_108[0] < 0.0) {
    param_1[8] = -1.0;
    param_1[9] = -1.0;
    return;
  }
  if (local_108[0] == 0.0) {
    return;
  }
  iVar10 = iVar7 + 1;
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar30 = param_1[6];
  fVar26 = param_1[7];
  iVar8 = iVar7 + 2;
  bVar11 = *(byte *)(param_1 + 10);
  local_108[0] = fVar22;
  local_108[1] = fVar24;
  local_108[2] = fVar32;
  local_108[3] = fVar31;
  iVar10 = iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                    (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
  iVar8 = iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                  (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar9 = iVar10;
  if ((bVar4 & 1) == 0) {
    iVar9 = iVar8;
    iVar8 = iVar10;
  }
  iVar10 = (int)(char)bVar11 >> 1;
  local_108[iVar8] = param_2[4] + local_108[iVar8];
  local_108[iVar9] = param_2[5] + local_108[iVar9];
  lVar1 = (longlong)(4 << ((byte)iVar10 & 0x1f)) * 4;
  uVar25 = *(uint *)(&DAT_14998f650 + lVar1);
  uVar27 = *(uint *)(&UNK_14998f654 + lVar1);
  uVar28 = *(uint *)(&UNK_14998f658 + lVar1);
  uVar29 = *(uint *)(&UNK_14998f65c + lVar1);
  uVar14 = (uint)(fVar22 - fVar2) & uVar25;
  uVar16 = (uint)(fVar24 - fVar3) & uVar27;
  uVar17 = (uint)(fVar32 - fVar30) & uVar28;
  uVar18 = (uint)(fVar31 - fVar26) & uVar29;
  uVar19 = uVar17 | uVar14;
  uVar21 = uVar18 | uVar16;
  uVar14 = uVar14 | uVar17;
  uVar16 = uVar16 | uVar18;
  local_f8._0_4_ = uVar21 | uVar19;
  local_f8._4_4_ = uVar19 | uVar21;
  fStack_f0 = (float)(uVar16 | uVar14);
  fStack_ec = (float)(uVar14 | uVar16);
  bVar11 = bVar11 & 1;
  if (bVar11 == 0) {
  }
  else {
    local_f8._4_4_ = 0.0 - (float)local_f8._4_4_;
    local_f8._0_4_ = 0.0 - (float)local_f8._0_4_;
    fStack_f0 = 0.0 - fStack_f0;
    fStack_ec = 0.0 - fStack_ec;
  }
  uVar14 = -(uint)(0.0 < (float)local_f8._0_4_) & uVar25;
  uVar16 = -(uint)(0.0 < (float)local_f8._4_4_) & uVar27;
  uVar17 = -(uint)(0.0 < fStack_f0) & uVar28;
  uVar18 = -(uint)(0.0 < fStack_ec) & uVar29;
  local_e8 = ~uVar14 & (uint)fVar22 | (uint)fVar2 & uVar14;
  uStack_e4 = ~uVar16 & (uint)fVar24 | (uint)fVar3 & uVar16;
  uStack_e0 = ~uVar17 & (uint)fVar32 | (uint)fVar30 & uVar17;
  uStack_dc = ~uVar18 & (uint)fVar31 | (uint)fVar26 & uVar18;
  auVar15._0_4_ = (uint)(local_108[0] - fVar2) & uVar25;
  auVar15._4_4_ = (uint)(local_108[1] - fVar3) & uVar27;
  auVar15._8_4_ = (uint)(local_108[2] - fVar30) & uVar28;
  auVar15._12_4_ = (uint)(local_108[3] - fVar26) & uVar29;
  auVar20._4_4_ = auVar15._12_4_;
  auVar20._0_4_ = auVar15._8_4_;
  auVar20._8_4_ = auVar15._0_4_;
  auVar20._12_4_ = auVar15._4_4_;
  auVar20 = auVar20 | auVar15;
  auVar23._4_4_ = auVar20._0_4_;
  auVar23._0_4_ = auVar20._4_4_;
  auVar23._8_4_ = auVar20._12_4_;
  auVar23._12_4_ = auVar20._8_4_;
  _local_f8 = auVar23 | auVar20;
  if (bVar11 != 0) {
    fVar22 = local_f8._0_4_;
    fVar24 = local_f8._8_4_;
    fVar32 = local_f8._12_4_;
    local_f8._4_4_ = 0.0 - local_f8._4_4_;
    local_f8._0_4_ = 0.0 - fVar22;
    fStack_f0 = 0.0 - fVar24;
    fStack_ec = 0.0 - fVar32;
  }
  uVar25 = -(uint)(0.0 < (float)local_f8._0_4_) & uVar25;
  uVar27 = -(uint)(0.0 < (float)local_f8._4_4_) & uVar27;
  uVar28 = -(uint)(0.0 < fStack_f0) & uVar28;
  uVar29 = -(uint)(0.0 < fStack_ec) & uVar29;
  local_108[0] = (float)((uint)fVar2 & uVar25 | ~uVar25 & (uint)local_108[0]);
  local_108[1] = (float)((uint)fVar3 & uVar27 | ~uVar27 & (uint)local_108[1]);
  local_108[2] = (float)((uint)fVar30 & uVar28 | ~uVar28 & (uint)local_108[2]);
  local_108[3] = (float)((uint)fVar26 & uVar29 | ~uVar29 & (uint)local_108[3]);
  FUN_144ff9f90(param_1 + 4,param_1,&local_e8,&local_res10);
  FUN_144ff9f90(param_1 + 4,param_1,local_108,&local_res18);
  iVar8 = iVar10 + 2;
  if (bVar11 == 0) {
    iVar8 = iVar10 + 1;
  }
  iVar9 = iVar10 + 1;
  iVar10 = iVar10 + 2;
  iVar9 = iVar9 + (iVar9 / 3 + (iVar9 >> 0x1f) +
                  (int)(((longlong)iVar9 / 3 + ((longlong)iVar9 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar10 = iVar10 + (iVar10 / 3 + (iVar10 >> 0x1f) +
                    (int)(((longlong)iVar10 / 3 + ((longlong)iVar10 >> 0x3f) & 0xffffffffU) >> 0x1f)
                    ) * -3;
  bVar13 = bVar11 == 0;
  iVar6 = iVar10;
  if (bVar13) {
    iVar6 = iVar9;
  }
  fVar22 = param_1[(longlong)iVar6 + 4];
  iVar6 = iVar9;
  if (bVar13) {
    iVar6 = iVar10;
  }
  fVar32 = param_1[8] + fVar22;
  fVar24 = param_1[(longlong)iVar6 + 4];
  iVar6 = iVar9;
  if (bVar13) {
    iVar6 = iVar10;
  }
  fVar31 = param_1[9] + fVar24;
  if (bVar13) {
    iVar10 = iVar9;
  }
  fVar2 = param_1[iVar6];
  fVar3 = param_1[iVar10];
  if (iVar7 == (int)*(char *)(param_1 + 10) >> 1) {
    if (bVar4 != *(byte *)(param_1 + 10)) goto LAB_144ff963d;
    if (fVar22 <= local_res10) {
      fVar22 = local_res10;
    }
    if (fVar24 <= local_res14) {
      fVar24 = local_res14;
    }
    if (local_res18 <= fVar32) {
      fVar32 = local_res18;
    }
    if (local_res1c <= fVar31) {
      fVar31 = local_res1c;
    }
    goto LAB_144ff9731;
  }
  if ((param_1[0xe] == fVar3) && (param_1[0xf] == fVar2)) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  if (iVar7 == iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                       (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f
                            )) * -3) {
    fVar30 = local_res10;
    if (local_res18 <= local_res10) {
      fVar30 = local_res18;
    }
    fVar26 = local_res10;
    if (local_res10 <= local_res18) {
      fVar26 = local_res18;
    }
    if (fVar22 <= fVar30) {
      fVar22 = fVar30;
    }
    if (fVar26 <= fVar32) {
      fVar32 = fVar26;
    }
    if (bVar13) {
      bVar5 = fVar3 < param_1[0xe];
      bVar13 = local_res10 == fVar3;
      bVar12 = local_res10 < fVar3;
LAB_144ff9634:
      if (bVar5 != (!bVar12 && !bVar13)) {
LAB_144ff963d:
        param_1[8] = -1.0;
        param_1[9] = -1.0;
        return;
      }
    }
  }
  else {
    fVar30 = local_res14;
    if (local_res1c <= local_res14) {
      fVar30 = local_res1c;
    }
    fVar26 = local_res14;
    if (local_res14 <= local_res1c) {
      fVar26 = local_res1c;
    }
    if (fVar24 <= fVar30) {
      fVar24 = fVar30;
    }
    if (fVar26 <= fVar31) {
      fVar31 = fVar26;
    }
    if (bVar13) {
      bVar5 = fVar2 < param_1[0xf];
      bVar13 = local_res14 == fVar2;
      bVar12 = local_res14 < fVar2;
      goto LAB_144ff9634;
    }
  }
  fVar30 = local_res14;
  fVar26 = local_res10;
  if (0.0 < (local_res14 - fVar2) * (local_res18 - fVar3) -
            (local_res1c - fVar2) * (local_res10 - fVar3)) {
    fVar30 = local_res1c;
    fVar26 = local_res18;
    local_res1c = local_res14;
    local_res18 = local_res10;
  }
  if ((fVar30 - param_1[0xd]) * (fVar3 - param_1[0xc]) -
      (fVar26 - param_1[0xc]) * (fVar2 - param_1[0xd]) <= 0.0) {
    param_1[0xc] = fVar26;
    param_1[0xd] = fVar30;
  }
  if ((local_res1c - fVar2) * (param_1[0xe] - fVar3) -
      (param_1[0xf] - fVar2) * (local_res18 - fVar3) <= 0.0) {
    param_1[0xe] = local_res18;
    param_1[0xf] = local_res1c;
  }
LAB_144ff9731:
  iVar8 = (int)*(char *)(param_1 + 10) >> 1;
  iVar7 = iVar8 + 1;
  iVar8 = iVar8 + 2;
  iVar7 = iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                  (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar8 = iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                  (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar10 = iVar7;
  if (((int)*(char *)(param_1 + 10) & 1U) == 0) {
    iVar10 = iVar8;
    iVar8 = iVar7;
  }
  param_1[(longlong)iVar8 + 4] = fVar22;
  param_1[(longlong)iVar10 + 4] = fVar24;
  param_1[8] = fVar32 - fVar22;
  param_1[9] = fVar31 - fVar24;
  return;
}



// FUNCTION 144ff9800 FUN_144ff9800 body=95 status=ok
// SIG undefined FUN_144ff9800(void)

void FUN_144ff9800(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  
  local_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  local_14 = param_2[4];
  local_18 = param_2[5];
  if (*(byte *)(param_2 + 6) == 0xff) {
    local_10 = 0xff;
    uVar1 = local_18;
    local_18 = local_14;
    local_14 = uVar1;
    FUN_144ff9100(local_28,&local_28);
    return;
  }
  local_10 = *(byte *)(param_2 + 6) ^ 1;
  FUN_144ff9100(local_28,&local_28);
  return;
}



// FUNCTION 144ff9860 FUN_144ff9860 body=389 status=ok
// SIG undefined FUN_144ff9860(void)

undefined8 FUN_144ff9860(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float local_res8;
  float local_resc;
  
  if (*(char *)(param_1 + 0x28) == -2) {
    return 1;
  }
  iVar4 = FUN_144ff9f90(param_1 + 0x10,param_1,param_2,&local_res8);
  if (iVar4 != 0) {
    iVar5 = (int)(char)*(byte *)(param_1 + 0x28) >> 1;
    iVar4 = iVar5 + 1;
    iVar5 = iVar5 + 2;
    iVar4 = iVar4 + (iVar4 / 3 + (iVar4 >> 0x1f) +
                    (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    iVar5 = iVar5 + (iVar5 / 3 + (iVar5 >> 0x1f) +
                    (int)(((longlong)iVar5 / 3 + ((longlong)iVar5 >> 0x3f) & 0xffffffffU) >> 0x1f))
                    * -3;
    bVar6 = *(byte *)(param_1 + 0x28) & 1;
    iVar3 = iVar5;
    if (bVar6 == 0) {
      iVar3 = iVar4;
    }
    fVar1 = *(float *)(param_1 + 0x10 + (longlong)iVar3 * 4);
    iVar3 = iVar4;
    if (bVar6 == 0) {
      iVar3 = iVar5;
    }
    fVar2 = *(float *)(param_1 + 0x10 + (longlong)iVar3 * 4);
    if ((((fVar1 <= local_res8) && (fVar2 <= local_resc)) &&
        (local_res8 <= *(float *)(param_1 + 0x20) + fVar1)) &&
       (local_resc <= *(float *)(param_1 + 0x24) + fVar2)) {
      iVar3 = iVar4;
      if (bVar6 == 0) {
        iVar3 = iVar5;
      }
      if (bVar6 == 0) {
        iVar5 = iVar4;
      }
      fVar1 = *(float *)(param_1 + (longlong)iVar3 * 4);
      fVar2 = *(float *)(param_1 + (longlong)iVar5 * 4);
      if (((*(float *)(param_1 + 0x38) - fVar2) * (local_resc - fVar1) -
           (*(float *)(param_1 + 0x3c) - fVar1) * (local_res8 - fVar2) <= 0.0) &&
         ((local_resc - *(float *)(param_1 + 0x34)) * (fVar2 - *(float *)(param_1 + 0x30)) -
          (local_res8 - *(float *)(param_1 + 0x30)) * (fVar1 - *(float *)(param_1 + 0x34)) <= 0.0))
      {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144ff99f0 FUN_144ff99f0 body=1432 status=ok
// SIG undefined FUN_144ff99f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ff99f0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
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
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar97 [16];
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  
  fVar7 = param_4[8];
  fVar8 = param_4[9];
  fVar9 = param_4[10];
  fVar10 = param_4[0xb];
  fVar11 = param_4[4];
  fVar12 = param_4[5];
  fVar13 = param_4[6];
  fVar14 = param_4[7];
  fVar69 = *param_1;
  fVar108 = param_1[1];
  fVar57 = param_1[2];
  fVar81 = *param_2;
  fVar112 = param_2[1];
  fVar95 = param_2[2];
  fVar60 = fVar69 - *param_3;
  fVar63 = fVar69 - param_3[1];
  fVar66 = fVar69 - param_3[2];
  fVar69 = fVar69 - param_3[3];
  fVar72 = fVar81 - *param_3;
  fVar75 = fVar81 - param_3[1];
  fVar78 = fVar81 - param_3[2];
  fVar81 = fVar81 - param_3[3];
  fVar15 = *param_4;
  fVar16 = param_4[1];
  fVar17 = param_4[2];
  fVar18 = param_4[3];
  fVar109 = fVar112 - param_3[4];
  fVar110 = fVar112 - param_3[5];
  fVar111 = fVar112 - param_3[6];
  fVar112 = fVar112 - param_3[7];
  fVar105 = fVar108 - param_3[4];
  fVar106 = fVar108 - param_3[5];
  fVar107 = fVar108 - param_3[6];
  fVar108 = fVar108 - param_3[7];
  fVar96 = fVar60 - fVar15 * 0.0;
  fVar98 = fVar63 - fVar16 * 0.0;
  fVar99 = fVar66 - fVar17 * 0.0;
  fVar100 = fVar69 - fVar18 * 0.0;
  fVar92 = fVar95 - param_3[8];
  fVar93 = fVar95 - param_3[9];
  fVar94 = fVar95 - param_3[10];
  fVar95 = fVar95 - param_3[0xb];
  fVar48 = fVar57 - param_3[8];
  fVar51 = fVar57 - param_3[9];
  fVar54 = fVar57 - param_3[10];
  fVar57 = fVar57 - param_3[0xb];
  fVar44 = fVar48 - fVar7 * 0.0;
  fVar45 = fVar51 - fVar8 * 0.0;
  fVar46 = fVar54 - fVar9 * 0.0;
  fVar47 = fVar57 - fVar10 * 0.0;
  fVar61 = fVar105 - fVar11 * 0.0;
  fVar64 = fVar106 - fVar12 * 0.0;
  fVar67 = fVar107 - fVar13 * 0.0;
  fVar70 = fVar108 - fVar14 * 0.0;
  fVar73 = fVar72 - fVar15 * 0.0;
  fVar76 = fVar75 - fVar16 * 0.0;
  fVar79 = fVar78 - fVar17 * 0.0;
  fVar82 = fVar81 - fVar18 * 0.0;
  fVar49 = fVar92 - fVar7 * 0.0;
  fVar52 = fVar93 - fVar8 * 0.0;
  fVar55 = fVar94 - fVar9 * 0.0;
  fVar58 = fVar95 - fVar10 * 0.0;
  fVar40 = fVar109 - fVar11 * 0.0;
  fVar41 = fVar110 - fVar12 * 0.0;
  fVar42 = fVar111 - fVar13 * 0.0;
  fVar43 = fVar112 - fVar14 * 0.0;
  fVar84 = fVar61 * fVar61 + fVar96 * fVar96 + fVar44 * fVar44;
  fVar86 = fVar64 * fVar64 + fVar98 * fVar98 + fVar45 * fVar45;
  fVar88 = fVar67 * fVar67 + fVar99 * fVar99 + fVar46 * fVar46;
  fVar90 = fVar70 * fVar70 + fVar100 * fVar100 + fVar47 * fVar47;
  auVar28._0_4_ = fVar11 * fVar61;
  auVar28._4_4_ = fVar12 * fVar64;
  auVar28._8_4_ = fVar13 * fVar67;
  auVar28._12_4_ = fVar14 * fVar70;
  fVar101 = fVar40 * fVar40 + fVar73 * fVar73 + fVar49 * fVar49;
  fVar102 = fVar41 * fVar41 + fVar76 * fVar76 + fVar52 * fVar52;
  fVar103 = fVar42 * fVar42 + fVar79 * fVar79 + fVar55 * fVar55;
  fVar104 = fVar43 * fVar43 + fVar82 * fVar82 + fVar58 * fVar58;
  auVar38._4_4_ = fVar86;
  auVar38._0_4_ = fVar84;
  auVar38._8_4_ = fVar88;
  auVar38._12_4_ = fVar90;
  auVar29 = sqrtps(auVar28,auVar38);
  fVar61 = (float)DAT_14c6daca0;
  fVar64 = DAT_14c6daca0._4_4_;
  fVar67 = DAT_14c6daca0._8_4_;
  fVar70 = DAT_14c6daca0._12_4_;
  auVar38 = divps(_DAT_14c6daca0,auVar29);
  auVar30._0_4_ = fVar15 * fVar73;
  auVar30._4_4_ = fVar16 * fVar76;
  auVar30._8_4_ = fVar17 * fVar79;
  auVar30._12_4_ = fVar18 * fVar82;
  auVar4._4_4_ = fVar102;
  auVar4._0_4_ = fVar101;
  auVar4._8_4_ = fVar103;
  auVar4._12_4_ = fVar104;
  auVar29 = sqrtps(auVar30,auVar4);
  auVar29 = divps(_DAT_14c6daca0,auVar29);
  fVar50 = fVar72 - fVar15 * fVar61;
  fVar53 = fVar75 - fVar16 * fVar64;
  fVar56 = fVar78 - fVar17 * fVar67;
  fVar59 = fVar81 - fVar18 * fVar70;
  fVar73 = fVar48 - fVar7 * fVar61;
  fVar76 = fVar51 - fVar8 * fVar64;
  fVar79 = fVar54 - fVar9 * fVar67;
  fVar82 = fVar57 - fVar10 * fVar70;
  uVar20 = -(uint)(0.0 <= -(fVar15 * fVar96 + auVar28._0_4_ + fVar7 * fVar44) *
                          (float)(~-(uint)(fVar84 == 0.0) & auVar38._0_4_) +
                          -(fVar11 * fVar40 + auVar30._0_4_ + fVar7 * fVar49) *
                          (float)(~-(uint)(fVar101 == 0.0) & auVar29._0_4_));
  uVar22 = -(uint)(0.0 <= -(fVar16 * fVar98 + auVar28._4_4_ + fVar8 * fVar45) *
                          (float)(~-(uint)(fVar86 == 0.0) & auVar38._4_4_) +
                          -(fVar12 * fVar41 + auVar30._4_4_ + fVar8 * fVar52) *
                          (float)(~-(uint)(fVar102 == 0.0) & auVar29._4_4_));
  uVar24 = -(uint)(0.0 <= -(fVar17 * fVar99 + auVar28._8_4_ + fVar9 * fVar46) *
                          (float)(~-(uint)(fVar88 == 0.0) & auVar38._8_4_) +
                          -(fVar13 * fVar42 + auVar30._8_4_ + fVar9 * fVar55) *
                          (float)(~-(uint)(fVar103 == 0.0) & auVar29._8_4_));
  uVar26 = -(uint)(0.0 <= -(fVar18 * fVar100 + auVar28._12_4_ + fVar10 * fVar47) *
                          (float)(~-(uint)(fVar90 == 0.0) & auVar38._12_4_) +
                          -(fVar14 * fVar43 + auVar30._12_4_ + fVar10 * fVar58) *
                          (float)(~-(uint)(fVar104 == 0.0) & auVar29._12_4_));
  fVar44 = fVar105 - fVar11 * fVar61;
  fVar45 = fVar106 - fVar12 * fVar64;
  fVar46 = fVar107 - fVar13 * fVar67;
  fVar47 = fVar108 - fVar14 * fVar70;
  fVar96 = fVar60 - fVar15 * fVar61;
  fVar98 = fVar63 - fVar16 * fVar64;
  fVar99 = fVar66 - fVar17 * fVar67;
  fVar100 = fVar69 - fVar18 * fVar70;
  fVar49 = fVar109 - fVar11 * fVar61;
  fVar52 = fVar110 - fVar12 * fVar64;
  fVar55 = fVar111 - fVar13 * fVar67;
  fVar58 = fVar112 - fVar14 * fVar70;
  fVar40 = fVar92 - fVar7 * fVar61;
  fVar41 = fVar93 - fVar8 * fVar64;
  fVar42 = fVar94 - fVar9 * fVar67;
  fVar43 = fVar95 - fVar10 * fVar70;
  fVar84 = fVar44 * fVar44 + fVar96 * fVar96 + fVar73 * fVar73;
  fVar86 = fVar45 * fVar45 + fVar98 * fVar98 + fVar76 * fVar76;
  fVar88 = fVar46 * fVar46 + fVar99 * fVar99 + fVar79 * fVar79;
  fVar90 = fVar47 * fVar47 + fVar100 * fVar100 + fVar82 * fVar82;
  auVar97._0_4_ = fVar49 * fVar49 + fVar50 * fVar50 + fVar40 * fVar40;
  auVar97._4_4_ = fVar52 * fVar52 + fVar53 * fVar53 + fVar41 * fVar41;
  auVar97._8_4_ = fVar55 * fVar55 + fVar56 * fVar56 + fVar42 * fVar42;
  auVar97._12_4_ = fVar58 * fVar58 + fVar59 * fVar59 + fVar43 * fVar43;
  auVar31._0_4_ = fVar11 * fVar44;
  auVar31._4_4_ = fVar12 * fVar45;
  auVar31._8_4_ = fVar13 * fVar46;
  auVar31._12_4_ = fVar14 * fVar47;
  auVar3._4_4_ = fVar86;
  auVar3._0_4_ = fVar84;
  auVar3._8_4_ = fVar88;
  auVar3._12_4_ = fVar90;
  auVar29 = sqrtps(auVar31,auVar3);
  auVar38 = divps(_DAT_14c6daca0,auVar29);
  auVar32._0_4_ = fVar7 * fVar40;
  auVar32._4_4_ = fVar8 * fVar41;
  auVar32._8_4_ = fVar9 * fVar42;
  auVar32._12_4_ = fVar10 * fVar43;
  auVar29 = sqrtps(auVar32,auVar97);
  auVar29 = divps(_DAT_14c6daca0,auVar29);
  fVar40 = (float)(~uVar20 & (uint)fVar61);
  fVar41 = (float)(~uVar22 & (uint)fVar64);
  fVar42 = (float)(~uVar24 & (uint)fVar67);
  fVar43 = (float)(~uVar26 & (uint)fVar70);
  auVar33._0_4_ = fVar11 * fVar11;
  auVar33._4_4_ = fVar12 * fVar12;
  auVar33._8_4_ = fVar13 * fVar13;
  auVar33._12_4_ = fVar14 * fVar14;
  uVar21 = -(uint)(-(fVar15 * fVar96 + auVar31._0_4_ + fVar7 * fVar73) *
                   (float)(~-(uint)(fVar84 == 0.0) & auVar38._0_4_) +
                   -(fVar15 * fVar50 + fVar49 * fVar11 + auVar32._0_4_) *
                   (float)(~-(uint)(auVar97._0_4_ == 0.0) & auVar29._0_4_) <= 0.0);
  uVar23 = -(uint)(-(fVar16 * fVar98 + auVar31._4_4_ + fVar8 * fVar76) *
                   (float)(~-(uint)(fVar86 == 0.0) & auVar38._4_4_) +
                   -(fVar16 * fVar53 + fVar52 * fVar12 + auVar32._4_4_) *
                   (float)(~-(uint)(auVar97._4_4_ == 0.0) & auVar29._4_4_) <= 0.0);
  uVar25 = -(uint)(-(fVar17 * fVar99 + auVar31._8_4_ + fVar9 * fVar79) *
                   (float)(~-(uint)(fVar88 == 0.0) & auVar38._8_4_) +
                   -(fVar17 * fVar56 + fVar55 * fVar13 + auVar32._8_4_) *
                   (float)(~-(uint)(auVar97._8_4_ == 0.0) & auVar29._8_4_) <= 0.0);
  uVar27 = -(uint)(-(fVar18 * fVar100 + auVar31._12_4_ + fVar10 * fVar82) *
                   (float)(~-(uint)(fVar90 == 0.0) & auVar38._12_4_) +
                   -(fVar18 * fVar59 + fVar58 * fVar14 + auVar32._12_4_) *
                   (float)(~-(uint)(auVar97._12_4_ == 0.0) & auVar29._12_4_) <= 0.0);
  fVar61 = (float)(uVar21 & (uint)fVar61);
  fVar64 = (float)(uVar23 & (uint)fVar64);
  fVar67 = (float)(uVar25 & (uint)fVar67);
  fVar70 = (float)(uVar27 & (uint)fVar70);
  auVar29._4_4_ = fVar16 * fVar16 + auVar33._4_4_ + fVar8 * fVar8;
  auVar29._0_4_ = fVar15 * fVar15 + auVar33._0_4_ + fVar7 * fVar7;
  auVar29._8_4_ = fVar17 * fVar17 + auVar33._8_4_ + fVar9 * fVar9;
  auVar29._12_4_ = fVar18 * fVar18 + auVar33._12_4_ + fVar10 * fVar10;
  auVar29 = sqrtps(auVar33,auVar29);
  fVar44 = (float)(~(uVar21 | uVar20) & auVar29._0_4_);
  fVar73 = (float)(~(uVar23 | uVar22) & auVar29._4_4_);
  fVar45 = (float)(~(uVar25 | uVar24) & auVar29._8_4_);
  fVar76 = (float)(~(uVar27 | uVar26) & auVar29._12_4_);
  fVar46 = fVar40 + fVar61;
  fVar79 = fVar41 + fVar64;
  fVar47 = fVar42 + fVar67;
  fVar82 = fVar43 + fVar70;
  auVar34._4_4_ = -(uint)(fVar73 <= param_5[1]);
  auVar34._0_4_ = -(uint)(fVar44 <= *param_5);
  auVar34._8_4_ = -(uint)(fVar45 <= param_5[2]);
  auVar34._12_4_ = -(uint)(fVar76 <= param_5[3]);
  iVar19 = movmskps((int)param_1,auVar34);
  while( true ) {
    fVar82 = fVar82 * fRam000000014c6dad9c;
    fVar47 = fVar47 * fRam000000014c6dad98;
    fVar79 = fVar79 * fRam000000014c6dad94;
    fVar46 = fVar46 * _DAT_14c6dad90;
    if (iVar19 == 0xf) break;
    fVar74 = fVar60 - fVar46 * fVar15;
    fVar77 = fVar63 - fVar79 * fVar16;
    fVar80 = fVar66 - fVar47 * fVar17;
    fVar83 = fVar69 - fVar82 * fVar18;
    fVar85 = fVar105 - fVar46 * fVar11;
    fVar87 = fVar106 - fVar79 * fVar12;
    fVar89 = fVar107 - fVar47 * fVar13;
    fVar91 = fVar108 - fVar82 * fVar14;
    fVar84 = fVar72 - fVar46 * fVar15;
    fVar86 = fVar75 - fVar79 * fVar16;
    fVar88 = fVar78 - fVar47 * fVar17;
    fVar90 = fVar81 - fVar82 * fVar18;
    fVar96 = fVar109 - fVar46 * fVar11;
    fVar98 = fVar110 - fVar79 * fVar12;
    fVar99 = fVar111 - fVar47 * fVar13;
    fVar100 = fVar112 - fVar82 * fVar14;
    fVar49 = fVar92 - fVar46 * fVar7;
    fVar50 = fVar93 - fVar79 * fVar8;
    fVar52 = fVar94 - fVar47 * fVar9;
    fVar53 = fVar95 - fVar82 * fVar10;
    fVar101 = fVar48 - fVar46 * fVar7;
    fVar102 = fVar51 - fVar79 * fVar8;
    fVar103 = fVar54 - fVar47 * fVar9;
    fVar104 = fVar57 - fVar82 * fVar10;
    fVar62 = fVar85 * fVar85 + fVar74 * fVar74 + fVar101 * fVar101;
    fVar65 = fVar87 * fVar87 + fVar77 * fVar77 + fVar102 * fVar102;
    fVar68 = fVar89 * fVar89 + fVar80 * fVar80 + fVar103 * fVar103;
    fVar71 = fVar91 * fVar91 + fVar83 * fVar83 + fVar104 * fVar104;
    auVar35._0_12_ = ZEXT812(0);
    auVar35._12_4_ = 0;
    fVar55 = fVar96 * fVar96 + fVar84 * fVar84 + fVar49 * fVar49;
    fVar56 = fVar98 * fVar98 + fVar86 * fVar86 + fVar50 * fVar50;
    fVar58 = fVar99 * fVar99 + fVar88 * fVar88 + fVar52 * fVar52;
    fVar59 = fVar100 * fVar100 + fVar90 * fVar90 + fVar53 * fVar53;
    auVar1._4_4_ = fVar56;
    auVar1._0_4_ = fVar55;
    auVar1._8_4_ = fVar58;
    auVar1._12_4_ = fVar59;
    auVar29 = sqrtps(auVar35,auVar1);
    auVar38 = divps(_DAT_14c6daca0,auVar29);
    auVar2._4_4_ = fVar65;
    auVar2._0_4_ = fVar62;
    auVar2._8_4_ = fVar68;
    auVar2._12_4_ = fVar71;
    auVar29 = sqrtps(auVar29,auVar2);
    auVar29 = divps(_DAT_14c6daca0,auVar29);
    uVar20 = -(uint)(-(fVar96 * fVar11 + fVar84 * fVar15 + fVar49 * fVar7) *
                     (float)(~-(uint)(fVar55 == 0.0) & auVar38._0_4_) +
                     -(fVar85 * fVar11 + fVar74 * fVar15 + fVar101 * fVar7) *
                     (float)(~-(uint)(fVar62 == 0.0) & auVar29._0_4_) < 0.0);
    uVar21 = -(uint)(-(fVar98 * fVar12 + fVar86 * fVar16 + fVar50 * fVar8) *
                     (float)(~-(uint)(fVar56 == 0.0) & auVar38._4_4_) +
                     -(fVar87 * fVar12 + fVar77 * fVar16 + fVar102 * fVar8) *
                     (float)(~-(uint)(fVar65 == 0.0) & auVar29._4_4_) < 0.0);
    uVar22 = -(uint)(-(fVar99 * fVar13 + fVar88 * fVar17 + fVar52 * fVar9) *
                     (float)(~-(uint)(fVar58 == 0.0) & auVar38._8_4_) +
                     -(fVar89 * fVar13 + fVar80 * fVar17 + fVar103 * fVar9) *
                     (float)(~-(uint)(fVar68 == 0.0) & auVar29._8_4_) < 0.0);
    uVar23 = -(uint)(-(fVar100 * fVar14 + fVar90 * fVar18 + fVar53 * fVar10) *
                     (float)(~-(uint)(fVar59 == 0.0) & auVar38._12_4_) +
                     -(fVar91 * fVar14 + fVar83 * fVar18 + fVar104 * fVar10) *
                     (float)(~-(uint)(fVar71 == 0.0) & auVar29._12_4_) < 0.0);
    fVar61 = (float)((uint)fVar46 & uVar20 | ~uVar20 & (uint)fVar61);
    fVar64 = (float)((uint)fVar79 & uVar21 | ~uVar21 & (uint)fVar64);
    fVar67 = (float)((uint)fVar47 & uVar22 | ~uVar22 & (uint)fVar67);
    fVar70 = (float)((uint)fVar82 & uVar23 | ~uVar23 & (uint)fVar70);
    fVar40 = (float)(~uVar20 & (uint)fVar46 | (uint)fVar40 & uVar20);
    fVar41 = (float)(~uVar21 & (uint)fVar79 | (uint)fVar41 & uVar21);
    fVar42 = (float)(~uVar22 & (uint)fVar47 | (uint)fVar42 & uVar22);
    fVar43 = (float)(~uVar23 & (uint)fVar82 | (uint)fVar43 & uVar23);
    fVar44 = _DAT_14c6dad90 * fVar44;
    fVar73 = fRam000000014c6dad94 * fVar73;
    fVar45 = fRam000000014c6dad98 * fVar45;
    fVar76 = fRam000000014c6dad9c * fVar76;
    auVar36._4_4_ = -(uint)(fVar73 <= param_5[1]);
    auVar36._0_4_ = -(uint)(fVar44 <= *param_5);
    auVar36._8_4_ = -(uint)(fVar45 <= param_5[2]);
    auVar36._12_4_ = -(uint)(fVar76 <= param_5[3]);
    fVar46 = fVar40 + fVar61;
    fVar79 = fVar41 + fVar64;
    fVar47 = fVar42 + fVar67;
    fVar82 = fVar43 + fVar70;
    iVar19 = movmskps(iVar19,auVar36);
  }
  *param_6 = fVar46;
  param_6[1] = fVar79;
  param_6[2] = fVar47;
  param_6[3] = fVar82;
  if (param_7 != (float *)0x0) {
    fVar105 = fVar105 - fVar46 * fVar11;
    fVar106 = fVar106 - fVar79 * fVar12;
    fVar107 = fVar107 - fVar47 * fVar13;
    fVar108 = fVar108 - fVar82 * fVar14;
    auVar39._0_4_ = fVar46 * fVar15;
    auVar39._4_4_ = fVar79 * fVar16;
    auVar39._8_4_ = fVar47 * fVar17;
    auVar39._12_4_ = fVar82 * fVar18;
    fVar109 = fVar109 - fVar46 * fVar11;
    fVar110 = fVar110 - fVar79 * fVar12;
    fVar111 = fVar111 - fVar47 * fVar13;
    fVar112 = fVar112 - fVar82 * fVar14;
    fVar92 = fVar92 - fVar46 * fVar7;
    fVar93 = fVar93 - fVar79 * fVar8;
    fVar94 = fVar94 - fVar47 * fVar9;
    fVar95 = fVar95 - fVar82 * fVar10;
    fVar48 = fVar48 - fVar46 * fVar7;
    fVar51 = fVar51 - fVar79 * fVar8;
    fVar54 = fVar54 - fVar47 * fVar9;
    fVar57 = fVar57 - fVar82 * fVar10;
    auVar37._0_4_ = fVar92 * fVar92;
    auVar37._4_4_ = fVar93 * fVar93;
    auVar37._8_4_ = fVar94 * fVar94;
    auVar37._12_4_ = fVar95 * fVar95;
    auVar5._4_4_ = fVar106 * fVar106 + (fVar63 - auVar39._4_4_) * (fVar63 - auVar39._4_4_) +
                   fVar51 * fVar51;
    auVar5._0_4_ = fVar105 * fVar105 + (fVar60 - auVar39._0_4_) * (fVar60 - auVar39._0_4_) +
                   fVar48 * fVar48;
    auVar5._8_4_ = fVar107 * fVar107 + (fVar66 - auVar39._8_4_) * (fVar66 - auVar39._8_4_) +
                   fVar54 * fVar54;
    auVar5._12_4_ =
         fVar108 * fVar108 + (fVar69 - auVar39._12_4_) * (fVar69 - auVar39._12_4_) + fVar57 * fVar57
    ;
    auVar29 = sqrtps(auVar37,auVar5);
    auVar6._4_4_ = fVar110 * fVar110 + (fVar75 - auVar39._4_4_) * (fVar75 - auVar39._4_4_) +
                   auVar37._4_4_;
    auVar6._0_4_ = fVar109 * fVar109 + (fVar72 - auVar39._0_4_) * (fVar72 - auVar39._0_4_) +
                   auVar37._0_4_;
    auVar6._8_4_ = fVar111 * fVar111 + (fVar78 - auVar39._8_4_) * (fVar78 - auVar39._8_4_) +
                   auVar37._8_4_;
    auVar6._12_4_ =
         fVar112 * fVar112 + (fVar81 - auVar39._12_4_) * (fVar81 - auVar39._12_4_) + auVar37._12_4_;
    auVar38 = sqrtps(auVar39,auVar6);
    *param_7 = auVar38._0_4_ + auVar29._0_4_;
    param_7[1] = auVar38._4_4_ + auVar29._4_4_;
    param_7[2] = auVar38._8_4_ + auVar29._8_4_;
    param_7[3] = auVar38._12_4_ + auVar29._12_4_;
  }
  return;
}



// FUNCTION 144ff9f90 FUN_144ff9f90 body=310 status=ok
// SIG undefined FUN_144ff9f90(void)

undefined8 FUN_144ff9f90(uint *param_1,float *param_2,float *param_3,uint *param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint local_28 [8];
  
  iVar7 = (int)(char)param_1[6] >> 1;
  lVar1 = (longlong)(4 << ((byte)iVar7 & 0x1f)) * 4;
  uVar3 = *(uint *)(&DAT_14998f650 + lVar1);
  uVar4 = *(uint *)(&UNK_14998f654 + lVar1);
  uVar5 = *(uint *)(&UNK_14998f658 + lVar1);
  uVar6 = *(uint *)(&UNK_14998f65c + lVar1);
  uVar13 = uVar5 & (uint)param_2[2] | uVar3 & (uint)*param_2;
  uVar16 = uVar6 & (uint)param_2[3] | uVar4 & (uint)param_2[1];
  uVar17 = uVar3 & (uint)*param_2 | uVar5 & (uint)param_2[2];
  uVar18 = uVar4 & (uint)param_2[1] | uVar6 & (uint)param_2[3];
  uVar9 = uVar3 & (uint)*param_3;
  uVar10 = uVar4 & (uint)param_3[1];
  uVar11 = uVar5 & (uint)param_3[2];
  uVar12 = uVar6 & (uint)param_3[3];
  fVar19 = (float)(uVar16 | uVar13);
  fVar20 = (float)(uVar13 | uVar16);
  fVar21 = (float)(uVar18 | uVar17);
  fVar22 = (float)(uVar17 | uVar18);
  uVar13 = uVar11 | uVar9;
  uVar16 = uVar12 | uVar10;
  uVar9 = uVar9 | uVar11;
  uVar10 = uVar10 | uVar12;
  auVar15._0_4_ = (float)(uVar16 | uVar13) - fVar19;
  auVar15._4_4_ = (float)(uVar13 | uVar16) - fVar20;
  auVar15._8_4_ = (float)(uVar10 | uVar9) - fVar21;
  auVar15._12_4_ = (float)(uVar9 | uVar10) - fVar22;
  uVar9 = uVar5 & param_1[2] | uVar3 & *param_1;
  uVar10 = uVar6 & param_1[3] | uVar4 & param_1[1];
  uVar11 = uVar3 & *param_1 | uVar5 & param_1[2];
  uVar12 = uVar4 & param_1[1] | uVar6 & param_1[3];
  if (auVar15._0_4_ == 0.0) {
    return 0;
  }
  iVar8 = iVar7 + 1;
  auVar14._0_4_ = (float)(uVar10 | uVar9) - fVar19;
  auVar14._4_4_ = (float)(uVar9 | uVar10) - fVar20;
  auVar14._8_4_ = (float)(uVar12 | uVar11) - fVar21;
  auVar14._12_4_ = (float)(uVar11 | uVar12) - fVar22;
  auVar15 = divps(auVar14,auVar15);
  local_28[0] = ~uVar3 & (uint)(auVar15._0_4_ * (*param_3 - *param_2) + *param_2) | uVar3 & *param_1
  ;
  local_28[1] = ~uVar4 & (uint)(auVar15._4_4_ * (param_3[1] - param_2[1]) + param_2[1]) |
                uVar4 & param_1[1];
  local_28[2] = ~uVar5 & (uint)(auVar15._8_4_ * (param_3[2] - param_2[2]) + param_2[2]) |
                uVar5 & param_1[2];
  local_28[3] = ~uVar6 & (uint)(auVar15._12_4_ * (param_3[3] - param_2[3]) + param_2[3]) |
                uVar6 & param_1[3];
  iVar8 = iVar8 + (iVar8 / 3 + (iVar8 >> 0x1f) +
                  (int)(((longlong)iVar8 / 3 + ((longlong)iVar8 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar7 = iVar7 + 2;
  iVar7 = iVar7 + (iVar7 / 3 + (iVar7 >> 0x1f) +
                  (int)(((longlong)iVar7 / 3 + ((longlong)iVar7 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  iVar2 = iVar7;
  if (((int)(char)param_1[6] & 1U) == 0) {
    iVar2 = iVar8;
    iVar8 = iVar7;
  }
  param_4[1] = local_28[iVar8];
  *param_4 = local_28[iVar2];
  return 1;
}



// FUNCTION 144ffa0d0 FUN_144ffa0d0 body=91 status=ok
// SIG undefined FUN_144ffa0d0(void)

undefined8 * FUN_144ffa0d0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavMeshQueryMediator::vftable;
  param_1[3] = param_3;
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  param_1[4] = param_2;
  (**(code **)(*(longlong *)param_1[3] + 0x40))((longlong *)param_1[3],param_2);
  return param_1;
}



// FUNCTION 144ffa130 FUN_144ffa130 body=109 status=ok
// SIG undefined FUN_144ffa130(void)

int * FUN_144ffa130(longlong param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  int local_10;
  
  local_10 = -1;
  local_28 = _anon_7AD7768F::NavMeshIterateAroundPointFaceCollector::vftable;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_3 + 0x30,param_3 + 0x40,&local_28,param_4);
  if (local_10 != -1) {
    *param_2 = local_10;
    return param_2;
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 144ffa1a0 FUN_144ffa1a0 body=109 status=ok
// SIG undefined FUN_144ffa1a0(void)

int * FUN_144ffa1a0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  int local_10;
  
  local_10 = -1;
  local_28 = _anon_7AD7768F::NavMeshIterateAroundPointEdgeCollector::vftable;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_3 + 0x30,param_3 + 0x40,&local_28,param_4);
  if (local_10 != -1) {
    *param_2 = local_10;
    return param_2;
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 144ffa210 FUN_144ffa210 body=188 status=ok
// SIG undefined FUN_144ffa210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ffa210(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined **local_78;
  longlong local_70;
  undefined8 local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined1 local_18 [16];
  
  local_58 = *(float *)(param_2 + 0x30);
  fStack_54 = *(float *)(param_2 + 0x34);
  fStack_50 = *(float *)(param_2 + 0x38);
  uStack_4c = *(undefined4 *)(param_2 + 0x3c);
  local_78 = _anon_7AD7768F::NavMeshIterateAlongRayCollector::vftable;
  fVar2 = *(float *)(param_2 + 0x40) - local_58;
  fVar3 = *(float *)(param_2 + 0x44) - fStack_54;
  fVar4 = *(float *)(param_2 + 0x48) - fStack_50;
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_28 = 0xffffffff;
  local_18 = _DAT_14c6daca0;
  local_48._0_4_ = (float)(~-(uint)(fVar2 == 0.0) & (uint)fVar2);
  local_48._4_4_ = (float)(~-(uint)(fVar3 == 0.0) & (uint)fVar3);
  local_48._8_4_ = (float)(~-(uint)(fVar4 == 0.0) & (uint)fVar4);
  local_48._12_4_ = (float)(~-(uint)(DAT_14c6daca0._12_4_ == 0.0) & (uint)DAT_14c6daca0._12_4_);
  auVar5 = divps(_DAT_14c6daca0,local_48);
  local_38._0_4_ = ~-(uint)(local_48._0_4_ == 0.0) & auVar5._0_4_;
  local_38._4_4_ = ~-(uint)(local_48._4_4_ == 0.0) & auVar5._4_4_;
  local_38._8_4_ = ~-(uint)(local_48._8_4_ == 0.0) & auVar5._8_4_;
  local_38._12_4_ = ~-(uint)(local_48._12_4_ == 0.0) & auVar5._12_4_;
  auVar5._8_4_ = -(uint)(local_48._8_4_ == 0.0) & 0x7f7fffee;
  auVar5._0_8_ = CONCAT44(-(uint)(local_48._4_4_ == 0.0),-(uint)(local_48._0_4_ == 0.0)) &
                 0x7f7fffee7f7fffee;
  auVar5._12_4_ = -(uint)(local_48._12_4_ == 0.0) & 0x7f7fffee;
  local_38 = local_38 | auVar5;
  local_70 = param_2;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                    (*(longlong **)(param_1 + 0x18),param_2 + 0x30,param_2 + 0x40,&local_78);
  if (cVar1 != '\0') {
    *param_3 = local_18._0_8_;
    param_3[1] = local_18._8_8_;
    *(undefined4 *)(param_3 + 2) = local_28;
  }
  return;
}



// FUNCTION 144ffa2d0 FUN_144ffa2d0 body=204 status=ok
// SIG undefined FUN_144ffa2d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ffa2d0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined **local_78;
  longlong local_70;
  undefined8 local_68;
  float local_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined1 local_18 [16];
  
  local_58 = *(float *)(param_2 + 0x30);
  fStack_54 = *(float *)(param_2 + 0x34);
  fStack_50 = *(float *)(param_2 + 0x38);
  uStack_4c = *(undefined4 *)(param_2 + 0x3c);
  local_18 = _DAT_14c6daca0;
  fVar2 = *(float *)(param_2 + 0x40) - local_58;
  fVar3 = *(float *)(param_2 + 0x44) - fStack_54;
  fVar4 = *(float *)(param_2 + 0x48) - fStack_50;
  local_78 = _anon_7AD7768F::NavMeshIterateAlongSphereRayCollector::vftable;
  local_68 = *(undefined8 *)(param_1 + 0x20);
  local_28 = 0xffffffff;
  local_48._0_4_ = (float)(~-(uint)(fVar2 == 0.0) & (uint)fVar2);
  local_48._4_4_ = (float)(~-(uint)(fVar3 == 0.0) & (uint)fVar3);
  local_48._8_4_ = (float)(~-(uint)(fVar4 == 0.0) & (uint)fVar4);
  local_48._12_4_ = (float)(~-(uint)(DAT_14c6daca0._12_4_ == 0.0) & (uint)DAT_14c6daca0._12_4_);
  auVar5 = divps(_DAT_14c6daca0,local_48);
  local_38._0_4_ = ~-(uint)(local_48._0_4_ == 0.0) & auVar5._0_4_;
  local_38._4_4_ = ~-(uint)(local_48._4_4_ == 0.0) & auVar5._4_4_;
  local_38._8_4_ = ~-(uint)(local_48._8_4_ == 0.0) & auVar5._8_4_;
  local_38._12_4_ = ~-(uint)(local_48._12_4_ == 0.0) & auVar5._12_4_;
  auVar5._8_4_ = -(uint)(local_48._8_4_ == 0.0) & 0x7f7fffee;
  auVar5._0_8_ = CONCAT44(-(uint)(local_48._4_4_ == 0.0),-(uint)(local_48._0_4_ == 0.0)) &
                 0x7f7fffee7f7fffee;
  auVar5._12_4_ = -(uint)(local_48._12_4_ == 0.0) & 0x7f7fffee;
  local_38 = local_38 | auVar5;
  local_70 = param_2;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                    (*(longlong **)(param_1 + 0x18),param_2 + 0x30,param_2 + 0x40,param_2 + 0x50,
                     &local_78);
  if (cVar1 != '\0') {
    *param_3 = local_18._0_8_;
    param_3[1] = local_18._8_8_;
    *(undefined4 *)(param_3 + 2) = local_28;
  }
  return;
}



// FUNCTION 144ffa3a0 FUN_144ffa3a0 body=234 status=ok
// SIG undefined FUN_144ffa3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ffa3a0(longlong param_1,longlong param_2,float *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined **local_88;
  longlong local_80;
  undefined8 local_78;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined1 local_48 [16];
  float local_38;
  undefined1 local_28 [8];
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_88 = _anon_7AD7768F::NavMeshIterateAlongBidirectionalRayCollector::vftable;
  local_78 = *(undefined8 *)(param_1 + 0x20);
  local_98 = (*(float *)(param_2 + 0x30) + *(float *)(param_2 + 0x30)) - *(float *)(param_2 + 0x40);
  fStack_94 = (*(float *)(param_2 + 0x34) + *(float *)(param_2 + 0x34)) - *(float *)(param_2 + 0x44)
  ;
  fStack_90 = (*(float *)(param_2 + 0x38) + *(float *)(param_2 + 0x38)) - *(float *)(param_2 + 0x48)
  ;
  fStack_8c = (*(float *)(param_2 + 0x3c) + *(float *)(param_2 + 0x3c)) - *(float *)(param_2 + 0x4c)
  ;
  local_58 = *(float *)(param_2 + 0x40) - local_98;
  fStack_54 = *(float *)(param_2 + 0x44) - fStack_94;
  fStack_50 = *(float *)(param_2 + 0x48) - fStack_90;
  local_58 = (float)(~-(uint)(local_58 == 0.0) & (uint)local_58);
  fStack_54 = (float)(~-(uint)(fStack_54 == 0.0) & (uint)fStack_54);
  fStack_50 = (float)(~-(uint)(fStack_50 == 0.0) & (uint)fStack_50);
  fStack_4c = (float)(~-(uint)(DAT_14c6daca0._12_4_ == 0.0) & (uint)DAT_14c6daca0._12_4_);
  auVar3._4_4_ = fStack_54;
  auVar3._0_4_ = local_58;
  auVar3._8_4_ = fStack_50;
  auVar3._12_4_ = fStack_4c;
  auVar3 = divps(_DAT_14c6daca0,auVar3);
  local_48._0_4_ = ~-(uint)(local_58 == 0.0) & auVar3._0_4_;
  local_48._4_4_ = ~-(uint)(fStack_54 == 0.0) & auVar3._4_4_;
  local_48._8_4_ = ~-(uint)(fStack_50 == 0.0) & auVar3._8_4_;
  local_48._12_4_ = ~-(uint)(fStack_4c == 0.0) & auVar3._12_4_;
  local_18 = CONCAT44(fRam000000014c6dad94,_DAT_14c6dad90);
  uStack_10 = CONCAT44(fRam000000014c6dad9c,fRam000000014c6dad98);
  auVar1._8_4_ = -(uint)(fStack_50 == 0.0) & 0x7f7fffee;
  auVar1._0_8_ = CONCAT44(-(uint)(fStack_54 == 0.0),-(uint)(local_58 == 0.0)) & 0x7f7fffee7f7fffee;
  auVar1._12_4_ = -(uint)(fStack_4c == 0.0) & 0x7f7fffee;
  local_48 = local_48 | auVar1;
  local_38 = -NAN;
  _local_28 = _DAT_14c6daca0;
  local_80 = param_2;
  local_68 = local_98;
  fStack_64 = fStack_94;
  fStack_60 = fStack_90;
  fStack_5c = fStack_8c;
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                    (*(longlong **)(param_1 + 0x18),&local_98,param_2 + 0x40,&local_88);
  if (cVar2 != '\0') {
    param_3[4] = local_38;
    fVar4 = ((float)local_28._4_4_ - fRam000000014c6dad94) * fRam000000014c6dacb4;
    fVar5 = (fStack_20 - fRam000000014c6dad98) * fRam000000014c6dacb8;
    fVar6 = (fStack_1c - fRam000000014c6dad9c) * fRam000000014c6dacbc;
    *param_3 = ((float)local_28._0_4_ - _DAT_14c6dad90) * _DAT_14c6dacb0;
    param_3[1] = fVar4;
    param_3[2] = fVar5;
    param_3[3] = fVar6;
  }
  return;
}



// FUNCTION 144ffa490 FUN_144ffa490 body=50 status=ok
// SIG undefined FUN_144ffa490(void)

void FUN_144ffa490(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_28 = _anon_7AD7768F::AabbFaceCollector::vftable;
  local_20 = param_2;
  local_18 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
            (*(longlong **)(param_1 + 0x18),param_2 + 0x30,&local_28);
  return;
}



// FUNCTION 144ffa4d0 FUN_144ffa4d0 body=59 status=ok
// SIG undefined FUN_144ffa4d0(void)

void FUN_144ffa4d0(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = _anon_7AD7768F::AabbEdgeCollector::vftable;
  local_10 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_2;
  local_18 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
            (*(longlong **)(param_1 + 0x18),param_2 + 0x30,&local_28);
  return;
}



// FUNCTION 144ffa510 FUN_144ffa510 body=331 status=ok
// SIG undefined FUN_144ffa510(void)

void FUN_144ffa510(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined **local_a8;
  undefined ***local_a0;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined **local_68 [2];
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
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (1.0 <= *(float *)(param_2 + 0x38)) {
    local_88 = *(undefined4 *)(param_2 + 0x28);
    uStack_84 = *(undefined4 *)(param_2 + 0x2c);
    uStack_80 = *(undefined4 *)(param_2 + 0x30);
    uStack_7c = *(undefined4 *)(param_2 + 0x34);
    local_a8 = _anon_7AD7768F::AabbTreeFaceCollector::vftable;
    local_a0 = (undefined ***)(param_2 + 8);
    local_98 = param_3;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
              (*(longlong **)(param_1 + 0x18),&local_88,*(float *)(param_2 + 0x38),0,&local_a8);
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 0x30);
  for (puVar2 = *(undefined4 **)(param_2 + 0x28); puVar2 != puVar1; puVar2 = puVar2 + 8) {
    local_88 = *puVar2;
    uStack_84 = puVar2[1];
    uStack_80 = puVar2[2];
    uStack_7c = puVar2[3];
    local_a0 = local_68;
    local_78 = puVar2[4];
    uStack_74 = puVar2[5];
    uStack_70 = puVar2[6];
    uStack_6c = puVar2[7];
    local_58 = *(undefined4 *)(param_2 + 8);
    uStack_54 = *(undefined4 *)(param_2 + 0xc);
    uStack_50 = *(undefined4 *)(param_2 + 0x10);
    uStack_4c = *(undefined4 *)(param_2 + 0x14);
    local_48 = *(undefined4 *)(param_2 + 0x18);
    uStack_44 = *(undefined4 *)(param_2 + 0x1c);
    uStack_40 = *(undefined4 *)(param_2 + 0x20);
    uStack_3c = *(undefined4 *)(param_2 + 0x24);
    local_68[0] = &PTR_LAB_14aba2e30;
    local_a8 = _anon_7AD7768F::AabbFaceCollector::vftable;
    local_98 = param_3;
    local_38 = local_88;
    uStack_34 = uStack_84;
    uStack_30 = uStack_80;
    uStack_2c = uStack_7c;
    local_28 = local_78;
    uStack_24 = uStack_74;
    uStack_20 = uStack_70;
    uStack_1c = uStack_6c;
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x30))
              (*(longlong **)(param_1 + 0x18),&local_88,&local_a8);
  }
  return;
}



// FUNCTION 144ffa660 FUN_144ffa660 body=215 status=ok
// SIG undefined FUN_144ffa660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144ffa660(longlong param_1,float *param_2,undefined4 *param_3,float *param_4,
                     float *param_5,float *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_res8 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_res8[0] = *param_3;
  lVar1 = *(longlong *)(param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + 0x18);
  if ((plVar2 != (longlong *)0x0) &&
     (iVar4 = (**(code **)(*plVar2 + 0x20))
                        (plVar2,0,local_res8,*(undefined8 *)(lVar1 + 0x20),
                         *(undefined8 *)(lVar1 + 0x28)), uVar3 = uRam000000014c6dae88, iVar4 == 0))
  {
    *(undefined8 *)param_2 = _DAT_14c6dae80;
    *(undefined8 *)(param_2 + 2) = uVar3;
    return param_2;
  }
  local_res8[0] = *param_3;
  FUN_144c52e80(*(undefined8 *)(param_1 + 0x10),param_4,local_res8,&local_18);
  fVar5 = (*param_4 - local_18) * (*param_4 - local_18);
  fVar6 = (param_4[1] - fStack_14) * (param_4[1] - fStack_14);
  fVar7 = (param_4[2] - fStack_10) * (param_4[2] - fStack_10);
  fVar8 = fVar6 + fVar5 + fVar7;
  if (fVar8 < *param_6) {
    *param_5 = local_18;
    param_5[1] = fStack_14;
    param_5[2] = fStack_10;
    param_5[3] = fStack_c;
    *(undefined4 *)(param_1 + 0x18) = *param_3;
  }
  *param_2 = fVar8;
  param_2[1] = fVar6 + fVar5 + fVar7;
  param_2[2] = fVar6 + fVar5 + fVar7;
  param_2[3] = fVar6 + fVar5 + fVar7;
  return param_2;
}



// FUNCTION 144ffa740 FUN_144ffa740 body=245 status=ok
// SIG undefined FUN_144ffa740(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144ffa740(longlong param_1,float *param_2,undefined4 *param_3,float *param_4,
                     float *param_5,float *param_6)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_res8 [2];
  int local_res18 [4];
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  local_res8[0] = *param_3;
  lVar1 = *(longlong *)(param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))
              (plVar2,0,local_res8,*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x28));
  }
  local_res8[0] = *param_3;
  FUN_144c53140(local_res18,*(undefined8 *)(param_1 + 0x10),param_4,local_res8,
                *(longlong *)(param_1 + 8) + 0x50,&local_28);
  uVar3 = uRam000000014c6dae88;
  if (local_res18[0] != -1) {
    fVar4 = (*param_4 - local_28) * (*param_4 - local_28);
    fVar5 = (param_4[1] - fStack_24) * (param_4[1] - fStack_24);
    fVar6 = (param_4[2] - fStack_20) * (param_4[2] - fStack_20);
    fVar7 = fVar5 + fVar4 + fVar6;
    if (fVar7 < *param_6) {
      *param_5 = local_28;
      param_5[1] = fStack_24;
      param_5[2] = fStack_20;
      param_5[3] = fStack_1c;
      *(int *)(param_1 + 0x18) = local_res18[0];
    }
    *param_2 = fVar7;
    param_2[1] = fVar5 + fVar4 + fVar6;
    param_2[2] = fVar5 + fVar4 + fVar6;
    param_2[3] = fVar5 + fVar4 + fVar6;
    return param_2;
  }
  *(undefined8 *)param_2 = _DAT_14c6dae80;
  *(undefined8 *)(param_2 + 2) = uVar3;
  return param_2;
}



// FUNCTION 144ffa840 FUN_144ffa840 body=168 status=ok
// SIG undefined FUN_144ffa840(void)

ulonglong FUN_144ffa840(longlong param_1,undefined4 *param_2,float *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_res8[0] = *param_2;
  plVar3 = *(longlong **)(lVar2 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,0,local_res8,*(undefined8 *)(lVar2 + 0x20),
                       *(undefined8 *)(lVar2 + 0x28));
    if ((int)uVar4 == 0) goto LAB_144ffa8d6;
  }
  local_res8[0] = *param_2;
  uVar4 = FUN_144c533e0(*(undefined8 *)(param_1 + 0x10),local_res8,param_1 + 0x20,&local_18);
  if ((char)uVar4 != '\0') {
    if (local_18 < *param_3) {
      *param_3 = local_18;
      param_3[1] = fStack_14;
      param_3[2] = fStack_10;
      param_3[3] = fStack_c;
      *(float *)(param_1 + 0x60) = local_18;
      *(float *)(param_1 + 100) = fStack_14;
      *(float *)(param_1 + 0x68) = fStack_10;
      *(float *)(param_1 + 0x6c) = fStack_c;
      uVar1 = *param_2;
      *(undefined4 *)(param_1 + 0x50) = uVar1;
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
LAB_144ffa8d6:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144ffa8f0 FUN_144ffa8f0 body=181 status=ok
// SIG undefined FUN_144ffa8f0(void)

ulonglong FUN_144ffa8f0(longlong param_1,undefined4 *param_2,float *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 local_res8 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_res8[0] = *param_2;
  plVar3 = *(longlong **)(lVar2 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,0,local_res8,*(undefined8 *)(lVar2 + 0x20),
                       *(undefined8 *)(lVar2 + 0x28));
    if ((int)uVar4 == 0) goto LAB_144ffa993;
  }
  local_res8[0] = *param_2;
  uVar4 = FUN_144c53ae0(*(undefined8 *)(param_1 + 0x10),local_res8,param_1 + 0x20,
                        *(longlong *)(param_1 + 8) + 0x50,&local_18);
  if ((char)uVar4 != '\0') {
    if (local_18 < *param_3) {
      *param_3 = local_18;
      param_3[1] = fStack_14;
      param_3[2] = fStack_10;
      param_3[3] = fStack_c;
      *(float *)(param_1 + 0x60) = local_18;
      *(float *)(param_1 + 100) = fStack_14;
      *(float *)(param_1 + 0x68) = fStack_10;
      *(float *)(param_1 + 0x6c) = fStack_c;
      uVar1 = *param_2;
      *(undefined4 *)(param_1 + 0x50) = uVar1;
      return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
    }
  }
LAB_144ffa993:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144ffa9b0 FUN_144ffa9b0 body=203 status=ok
// SIG undefined FUN_144ffa9b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144ffa9b0(longlong param_1,undefined4 *param_2,float *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 local_res8 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar2 = *(longlong *)(param_1 + 8);
  local_res8[0] = *param_2;
  plVar3 = *(longlong **)(lVar2 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x20))
                      (plVar3,0,local_res8,*(undefined8 *)(lVar2 + 0x20),
                       *(undefined8 *)(lVar2 + 0x28));
    if ((int)uVar4 == 0) goto LAB_144ffaa69;
  }
  local_res8[0] = *param_2;
  uVar4 = FUN_144c537c0(*(undefined8 *)(param_1 + 0x10),local_res8,param_1 + 0x20,&local_18);
  fVar5 = fStack_14 - fRam000000014c6dad94;
  fVar7 = fStack_10 - fRam000000014c6dad98;
  fVar9 = fStack_c - fRam000000014c6dad9c;
  fVar11 = ABS(local_18 - _DAT_14c6dad90);
  if (((char)uVar4 != '\0') && (fVar11 < *(float *)(param_1 + 0x70))) {
    fVar6 = ABS(fVar5) + fRam000000014c6dad94;
    fVar8 = ABS(fVar7) + fRam000000014c6dad98;
    fVar10 = ABS(fVar9) + fRam000000014c6dad9c;
    *param_3 = fVar11 + _DAT_14c6dad90;
    param_3[1] = fVar6;
    param_3[2] = fVar8;
    param_3[3] = fVar10;
    *(float *)(param_1 + 0x60) = local_18;
    *(float *)(param_1 + 100) = fStack_14;
    *(float *)(param_1 + 0x68) = fStack_10;
    *(float *)(param_1 + 0x6c) = fStack_c;
    *(float *)(param_1 + 0x70) = fVar11;
    *(float *)(param_1 + 0x74) = ABS(fVar5);
    *(float *)(param_1 + 0x78) = ABS(fVar7);
    *(float *)(param_1 + 0x7c) = ABS(fVar9);
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 0x50) = uVar1;
    return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
  }
LAB_144ffaa69:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 144ffaa80 FUN_144ffaa80 body=129 status=ok
// SIG undefined FUN_144ffaa80(void)

undefined8 FUN_144ffaa80(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    local_res8[0] = *param_2;
    iVar4 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,0,local_res8,*(undefined8 *)(lVar1 + 0x20),
                       *(undefined8 *)(lVar1 + 0x28));
    if (iVar4 == 0) goto LAB_144ffaae6;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (*(char *)(puVar3 + 1) == '\0') {
    (**(code **)*puVar3)(puVar3,*param_2,param_3,*(longlong *)(param_1 + 8) + 0x30);
  }
LAB_144ffaae6:
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                  *(char *)(*(longlong *)(param_1 + 0x10) + 8) == '\0');
}



// FUNCTION 144ffab10 FUN_144ffab10 body=352 status=ok
// SIG undefined FUN_144ffab10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ffab10(longlong param_1,uint *param_2,int *param_3,undefined8 param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined4 uVar17;
  undefined4 uVar20;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  uint local_res10;
  uint local_res14;
  
  uVar9 = *param_2;
  uVar26 = _DAT_14c6daca0;
  uVar27 = uRam000000014c6daca4;
  uVar28 = uRam000000014c6daca8;
  fVar29 = fRam000000014c6dacac;
  if ((int)uVar9 < *param_3) {
    do {
      plVar3 = *(longlong **)(param_1 + 0x10);
      if ((char)plVar3[1] != '\0') {
        return;
      }
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x38);
      pfVar1 = (float *)(lVar5 + (longlong)*(int *)(lVar4 + (longlong)(int)uVar9 * 0x14) * 0x10);
      fVar6 = *pfVar1;
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      pfVar2 = (float *)(lVar5 + (longlong)*(int *)(lVar4 + 4 + (longlong)(int)uVar9 * 0x14) * 0x10)
      ;
      lVar4 = *(longlong *)(param_1 + 8);
      auVar23._4_4_ = uVar27;
      auVar23._0_4_ = uVar26;
      auVar23._8_4_ = uVar28;
      auVar23._12_4_ = fVar29;
      auVar13._0_4_ = (float)(~-(uint)(*pfVar2 - fVar6 == 0.0) & (uint)(*pfVar2 - fVar6));
      auVar13._4_4_ = (float)(~-(uint)(pfVar2[1] - fVar7 == 0.0) & (uint)(pfVar2[1] - fVar7));
      auVar13._8_4_ = (float)(~-(uint)(pfVar2[2] - fVar8 == 0.0) & (uint)(pfVar2[2] - fVar8));
      auVar13._12_4_ = (float)(~-(uint)(fVar29 == 0.0) & (uint)fVar29);
      auVar10 = divps(auVar23,auVar13);
      auVar14._0_8_ =
           CONCAT44(-(uint)(auVar13._4_4_ == 0.0),-(uint)(auVar13._0_4_ == 0.0)) &
           0x7f7fffee7f7fffee;
      auVar14._8_4_ = -(uint)(auVar13._8_4_ == 0.0) & 0x7f7fffee;
      auVar14._12_4_ = -(uint)(auVar13._12_4_ == 0.0) & 0x7f7fffee;
      auVar21._0_4_ = ~-(uint)(auVar13._0_4_ == 0.0) & auVar10._0_4_;
      auVar21._4_4_ = ~-(uint)(auVar13._4_4_ == 0.0) & auVar10._4_4_;
      auVar21._8_4_ = ~-(uint)(auVar13._8_4_ == 0.0) & auVar10._8_4_;
      auVar21._12_4_ = ~-(uint)(auVar13._12_4_ == 0.0) & auVar10._12_4_;
      auVar21 = auVar21 | auVar14;
      auVar22._0_8_ =
           CONCAT44((*(float *)(lVar4 + 0x34) - fVar7) * auVar21._4_4_,
                    (*(float *)(lVar4 + 0x30) - fVar6) * auVar21._0_4_);
      auVar22._8_4_ = (*(float *)(lVar4 + 0x38) - fVar8) * auVar21._8_4_;
      auVar22._12_4_ = (*(float *)(lVar4 + 0x3c) - pfVar1[3]) * auVar21._12_4_;
      auVar25._0_4_ = (*(float *)(lVar4 + 0x40) - fVar6) * auVar21._0_4_;
      auVar25._4_4_ = (*(float *)(lVar4 + 0x44) - fVar7) * auVar21._4_4_;
      auVar25._8_4_ = (*(float *)(lVar4 + 0x48) - fVar8) * auVar21._8_4_;
      auVar25._12_4_ = (*(float *)(lVar4 + 0x4c) - pfVar1[3]) * auVar21._12_4_;
      auVar18._8_4_ = auVar22._8_4_;
      auVar18._0_8_ = auVar22._0_8_;
      auVar18._12_4_ = auVar22._12_4_;
      auVar10 = minps(auVar18,auVar25);
      auVar23 = maxps(auVar22,auVar25);
      uVar17 = auVar10._0_4_;
      uVar20 = auVar10._4_4_;
      auVar19._8_4_ = auVar10._8_4_;
      auVar15._4_4_ = uVar20;
      auVar15._0_4_ = uVar20;
      auVar15._8_4_ = uVar20;
      auVar15._12_4_ = uVar20;
      auVar11._4_4_ = uVar17;
      auVar11._0_4_ = uVar17;
      auVar11._8_4_ = uVar17;
      auVar11._12_4_ = uVar17;
      auVar10 = maxps(auVar15,auVar11);
      uVar17 = auVar23._0_4_;
      uVar20 = auVar23._4_4_;
      auVar24._8_4_ = auVar23._8_4_;
      auVar19._4_4_ = auVar19._8_4_;
      auVar19._0_4_ = auVar19._8_4_;
      auVar19._12_4_ = auVar19._8_4_;
      auVar23 = maxps(auVar19,auVar10);
      auVar12._4_4_ = uVar17;
      auVar12._0_4_ = uVar17;
      auVar12._8_4_ = uVar17;
      auVar12._12_4_ = uVar17;
      auVar16._4_4_ = uVar20;
      auVar16._0_4_ = uVar20;
      auVar16._8_4_ = uVar20;
      auVar16._12_4_ = uVar20;
      auVar24._4_4_ = auVar24._8_4_;
      auVar24._0_4_ = auVar24._8_4_;
      auVar24._12_4_ = auVar24._8_4_;
      auVar10 = minps(auVar16,auVar12);
      auVar23 = maxps(auVar23,ZEXT816(0));
      auVar25 = minps(auVar24,auVar10);
      auVar10._4_4_ = uVar27;
      auVar10._0_4_ = uVar26;
      auVar10._8_4_ = uVar28;
      auVar10._12_4_ = fVar29;
      auVar10 = minps(auVar25,auVar10);
      if (auVar23._0_4_ <= auVar10._0_4_) {
        local_res10 = param_5;
        local_res14 = param_5 & 0xffc00000 | uVar9;
        (**(code **)(*plVar3 + 8))(plVar3,&local_res10);
        uVar26 = _DAT_14c6daca0;
        uVar27 = uRam000000014c6daca4;
        uVar28 = uRam000000014c6daca8;
        fVar29 = fRam000000014c6dacac;
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < *param_3);
  }
  return;
}



// FUNCTION 144ffac70 FUN_144ffac70 body=278 status=ok
// SIG undefined FUN_144ffac70(void)

undefined8 FUN_144ffac70(longlong param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 in_stack_ffffffffffffffc8;
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  lVar2 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(lVar2 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    local_res8[0] = *param_2;
    iVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,0,local_res8,*(undefined8 *)(lVar2 + 0x20),uVar7);
    uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
    if (iVar6 == 0) goto LAB_144ffad6f;
  }
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (*(char *)(puVar4 + 1) == '\0') {
    iVar6 = *param_2;
    cVar5 = (**(code **)*puVar4)(puVar4,iVar6,param_3,*(longlong *)(param_1 + 8) + 0x30);
    if (cVar5 != '\0') {
      lVar2 = *(longlong *)(param_1 + 8);
      piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x18) +
                      (longlong)*param_2 * 0xc);
      if ((*(byte *)(lVar2 + 0x50) & 1) != 0) {
        local_res10[0] = *piVar1;
        local_res8[0] = (short)piVar1[2] + local_res10[0];
        uVar7 = CONCAT44(uVar8,iVar6);
        FUN_144ffab10(param_1,local_res10,local_res8,lVar2 + 0x30,uVar7);
        uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
      }
      lVar2 = *(longlong *)(param_1 + 8);
      if ((*(byte *)(lVar2 + 0x50) & 2) != 0) {
        local_res10[0] = piVar1[1];
        local_res8[0] = *(short *)((longlong)piVar1 + 10) + local_res10[0];
        FUN_144ffab10(param_1,local_res10,local_res8,lVar2 + 0x30,CONCAT44(uVar8,iVar6));
      }
    }
  }
LAB_144ffad6f:
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                  *(char *)(*(longlong *)(param_1 + 0x10) + 8) == '\0');
}



// FUNCTION 144ffad90 FUN_144ffad90 body=137 status=ok
// SIG undefined FUN_144ffad90(void)

undefined8 FUN_144ffad90(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + 8);
  if (plVar2 != (longlong *)0x0) {
    local_res8[0] = *param_2;
    iVar4 = (**(code **)(*plVar2 + 0x20))
                      (plVar2,0,local_res8,*(undefined8 *)(lVar1 + 0x10),
                       *(undefined8 *)(lVar1 + 0x18));
    if (iVar4 == 0) goto LAB_144ffadf9;
  }
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (*(char *)(puVar3 + 1) == '\0') {
    (**(code **)*puVar3)(puVar3,*param_2,param_3,param_4);
  }
LAB_144ffadf9:
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x10) >> 8),
                  *(char *)(*(longlong *)(param_1 + 0x10) + 8) == '\0');
}



// FUNCTION 144ffae20 FUN_144ffae20 body=526 status=ok
// SIG undefined FUN_144ffae20(void)

undefined8 * FUN_144ffae20(undefined8 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 local_res8;
  undefined1 local_78 [32];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *param_1 = hkaiNavVolumeStaticTreeCellIterator::vftable;
  uVar8 = 0;
  param_1[3] = 0;
  FUN_144fcd2c0(local_78);
  iVar2 = *(int *)(param_2 + 0x20);
  FUN_144fcd510(local_78,&local_res8,iVar2);
  uVar10 = uVar8;
  uVar11 = uVar8;
  if (0 < iVar2) {
    do {
      auVar1 = *(undefined1 (*) [16])(uVar11 + *(longlong *)(param_2 + 0x18));
      auVar3._10_2_ = 0;
      auVar3._0_10_ = auVar1._0_10_;
      auVar3._12_2_ = auVar1._6_2_;
      auVar4._8_2_ = auVar1._4_2_;
      auVar4._0_8_ = auVar1._0_8_;
      auVar4._10_4_ = auVar3._10_4_;
      auVar6._6_8_ = 0;
      auVar6._0_6_ = auVar4._8_6_;
      auVar5._4_2_ = auVar1._2_2_;
      auVar5._0_4_ = auVar1._0_4_;
      auVar5._6_8_ = SUB148(auVar6 << 0x40,6);
      local_58 = ((float)(auVar1._0_4_ & 0xffff) + 0.0) * *(float *)(param_2 + 0xa0) +
                 *(float *)(param_2 + 0xb0);
      fStack_54 = ((float)auVar5._4_4_ + 0.0) * *(float *)(param_2 + 0xa4) +
                  *(float *)(param_2 + 0xb4);
      fStack_50 = ((float)(auVar4._8_4_ >> 0x10) * 65536.0 + (float)(auVar4._8_4_ & 0xffff)) *
                  *(float *)(param_2 + 0xa8) + *(float *)(param_2 + 0xb8);
      fStack_4c = ((float)(auVar3._10_4_ >> 0x10) + 0.0) * *(float *)(param_2 + 0xac) +
                  *(float *)(param_2 + 0xbc);
      local_48 = ((float)auVar1._8_2_ + 0.0) * *(float *)(param_2 + 0xa0) +
                 *(float *)(param_2 + 0xb0);
      fStack_44 = ((float)auVar1._10_2_ + 0.0) * *(float *)(param_2 + 0xa4) +
                  *(float *)(param_2 + 0xb4);
      fStack_40 = ((float)auVar1._12_2_ + 0.0) * *(float *)(param_2 + 0xa8) +
                  *(float *)(param_2 + 0xb8);
      fStack_3c = ((float)auVar1._14_2_ + 0.0) * *(float *)(param_2 + 0xac) +
                  *(float *)(param_2 + 0xbc);
      FUN_144fcd550(local_78,&local_58,uVar10);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar11 = uVar11 + 0x18;
    } while ((int)uVar9 < iVar2);
  }
  FUN_144fce170(local_78,&local_res8);
  local_res8 = 0x20;
  lVar7 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar7,"hkcdStaticAabbTree");
  }
  if (lVar7 != 0) {
    uVar8 = FUN_145320480(lVar7);
  }
  FUN_1453204f0(uVar8,local_78);
  if (param_1[3] != uVar8) {
    if (uVar8 != 0) {
      FUN_144b3d910(uVar8);
    }
    lVar7 = param_1[3];
    param_1[3] = uVar8;
    if (lVar7 != 0) {
      FUN_144b3f230();
    }
  }
  if (uVar8 != 0) {
    FUN_144b3f230(uVar8);
  }
  FUN_144fcd490(local_78);
  return param_1;
}



// FUNCTION 144ffb030 FUN_144ffb030 body=299 status=ok
// SIG undefined FUN_144ffb030(void)

void FUN_144ffb030(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    local_28 = "TtVolumeStaticTree::iterateAroundPoint";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  local_38 = _anon_4361756D::NavVolumeClosestPointCollector::vftable;
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



// FUNCTION 144ffb160 FUN_144ffb160 body=268 status=ok
// SIG undefined FUN_144ffb160(void)

void FUN_144ffb160(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    local_28 = "TtVolumeStaticTree::iterateInsideAabb";
    local_20 = "";
    FUN_144b3f370(lVar1,&local_28);
  }
  local_38 = _anon_4361756D::NavVolumeMediatorAabbCollector::vftable;
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



// FUNCTION 144ffb270 FUN_144ffb270 body=3 status=ok
// SIG undefined FUN_144ffb270(void)

void FUN_144ffb270(void)

{
  return;
}



// FUNCTION 144ffb280 FUN_144ffb280 body=63 status=ok
// SIG undefined FUN_144ffb280(void)

undefined8
FUN_144ffb280(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 local_res18 [4];
  
  local_res18[0] = param_3;
  (**(code **)**(undefined8 **)(param_1 + 8))
            (*(undefined8 **)(param_1 + 8),param_2,local_res18,param_5,param_6,param_7);
  return param_2;
}



// FUNCTION 144ffb2c0 FUN_144ffb2c0 body=71 status=ok
// SIG undefined FUN_144ffb2c0(void)

undefined8 * FUN_144ffb2c0(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144ffb310 FUN_144ffb310 body=32 status=ok
// SIG undefined FUN_144ffb310(void)

undefined8 FUN_144ffb310(longlong param_1,undefined4 param_2)

{
  undefined4 local_res10 [6];
  
  local_res10[0] = param_2;
  (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8),local_res10);
  return 1;
}



// FUNCTION 144ffb330 FUN_144ffb330 body=71 status=ok
// SIG undefined FUN_144ffb330(void)

undefined8 * FUN_144ffb330(undefined8 *param_1,ulonglong param_2)

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



// FUNCTION 144ffb380 FUN_144ffb380 body=362 status=ok
// SIG undefined FUN_144ffb380(void)

void FUN_144ffb380(longlong param_1,undefined8 param_2,float *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_res8 [2];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
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
    local_58 = "TtVolumeTrivialStructure::iterateAroundPoint";
    uStack_50 = "";
    FUN_144b3f370(lVar1,&local_58);
  }
  iVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  uVar7 = 0;
  local_68 = *param_3 * *param_3;
  fStack_64 = param_3[1] * param_3[1];
  fStack_60 = param_3[2] * param_3[2];
  fStack_5c = param_3[3] * param_3[3];
  if (0 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x20)) {
    do {
      local_res8[0] = iVar3;
      (**(code **)*param_4)(param_4,&local_58,local_res8,param_2,&local_48,&local_68);
      if ((float)local_58 < local_68) {
        local_68 = (float)local_58;
        fStack_64 = local_58._4_4_;
        fStack_60 = (float)uStack_50;
        fStack_5c = uStack_50._4_4_;
        uVar4 = local_48;
        uVar5 = uStack_44;
        uVar6 = uStack_40;
        uVar7 = uStack_3c;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(longlong *)(param_1 + 0x18) + 0x20));
  }
  *param_5 = uVar4;
  param_5[1] = uVar5;
  param_5[2] = uVar6;
  param_5[3] = uVar7;
  if (lVar1 != 0) {
    local_58 = &DAT_149981764;
    uStack_50 = &DAT_149981766;
    FUN_144b3f260(lVar1,&local_58);
  }
  return;
}



// FUNCTION 144ffb4f0 FUN_144ffb4f0 body=474 status=ok
// SIG undefined FUN_144ffb4f0(void)

void FUN_144ffb4f0(longlong param_1,float *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auVar10 [16];
  int local_res8 [2];
  char *local_48;
  char *local_40;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar2 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar8 = *(longlong *)(lVar2 + 0xf0);
  if (lVar8 == 0) {
    if (*(char *)(lVar2 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar8 = FUN_144b3f4a0();
    *(longlong *)(lVar2 + 0xf0) = lVar8;
  }
  lVar2 = *(longlong *)(lVar8 + 0x3e0);
  if (lVar2 != 0) {
    local_48 = "TtVolumeTrivialStructure::iterateInsideAabb";
    local_40 = "";
    FUN_144b3f370(lVar2,&local_48);
  }
  lVar8 = *(longlong *)(param_1 + 0x18);
  iVar9 = 0;
  if (0 < *(int *)(lVar8 + 0x20)) {
    do {
      auVar1 = *(undefined1 (*) [16])(*(longlong *)(lVar8 + 0x18) + (longlong)iVar9 * 0x18);
      auVar3._10_2_ = 0;
      auVar3._0_10_ = auVar1._0_10_;
      auVar3._12_2_ = auVar1._6_2_;
      auVar4._8_2_ = auVar1._4_2_;
      auVar4._0_8_ = auVar1._0_8_;
      auVar4._10_4_ = auVar3._10_4_;
      auVar6._6_8_ = 0;
      auVar6._0_6_ = auVar4._8_6_;
      auVar5._4_2_ = auVar1._2_2_;
      auVar5._0_4_ = auVar1._0_4_;
      auVar5._6_8_ = SUB148(auVar6 << 0x40,6);
      auVar10._0_4_ =
           -(uint)(*param_2 <=
                   ((float)auVar1._8_2_ + 0.0) * *(float *)(lVar8 + 0xa0) + *(float *)(lVar8 + 0xb0)
                  && ((float)(auVar1._0_4_ & 0xffff) + 0.0) * *(float *)(lVar8 + 0xa0) +
                     *(float *)(lVar8 + 0xb0) <= param_2[4]);
      auVar10._4_4_ =
           -(uint)(((float)auVar5._4_4_ + 0.0) * *(float *)(lVar8 + 0xa4) + *(float *)(lVar8 + 0xb4)
                   <= param_2[5] &&
                  param_2[1] <=
                  ((float)auVar1._10_2_ + 0.0) * *(float *)(lVar8 + 0xa4) + *(float *)(lVar8 + 0xb4)
                  );
      auVar10._8_4_ =
           -(uint)(param_2[2] <=
                   ((float)auVar1._12_2_ + 0.0) * *(float *)(lVar8 + 0xa8) +
                   *(float *)(lVar8 + 0xb8) &&
                  ((float)(auVar4._8_4_ >> 0x10) * 65536.0 + (float)(auVar4._8_4_ & 0xffff)) *
                  *(float *)(lVar8 + 0xa8) + *(float *)(lVar8 + 0xb8) <= param_2[6]);
      auVar10._12_4_ =
           -(uint)(((float)auVar1._6_2_ + 0.0) * *(float *)(lVar8 + 0xac) + *(float *)(lVar8 + 0xbc)
                   <= param_2[7] &&
                  param_2[3] <=
                  ((float)auVar1._14_2_ + 0.0) * *(float *)(lVar8 + 0xac) + *(float *)(lVar8 + 0xbc)
                  );
      uVar7 = movmskps((int)lVar8,auVar10);
      if (((byte)uVar7 & 7) == 7) {
        local_res8[0] = iVar9;
        (**(code **)*param_3)(param_3,local_res8);
      }
      lVar8 = *(longlong *)(param_1 + 0x18);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(lVar8 + 0x20));
  }
  if (lVar2 != 0) {
    local_48 = "Et";
    local_40 = "";
    FUN_144b3f260(lVar2,&local_48);
  }
  return;
}



// FUNCTION 144ffb6d0 FUN_144ffb6d0 body=3 status=ok
// SIG undefined FUN_144ffb6d0(void)

void FUN_144ffb6d0(void)

{
  return;
}



// FUNCTION 144ffb6e0 FUN_144ffb6e0 body=35 status=ok
// SIG undefined FUN_144ffb6e0(void)

undefined8 * FUN_144ffb6e0(undefined8 *param_1,undefined8 param_2)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiNavVolumeCollectionQueryMediator::vftable;
  param_1[3] = param_2;
  return param_1;
}



// FUNCTION 144ffb710 FUN_144ffb710 body=88 status=ok
// SIG undefined FUN_144ffb710(void)

undefined4 * FUN_144ffb710(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  undefined **local_28;
  longlong local_20;
  longlong local_18;
  undefined4 local_10;
  
  local_18 = *(longlong *)(param_1 + 0x18);
  local_28 = _anon_16EBA344::DynVolumeClosestPointCollector::vftable;
  local_10 = 0xffffffff;
  local_20 = param_3;
  FUN_144fce620(*(undefined8 *)(local_18 + 0x20),param_3 + 0x30,param_3 + 0x40,&local_28,param_4);
  *param_2 = local_10;
  return param_2;
}



// FUNCTION 144ffb770 FUN_144ffb770 body=58 status=ok
// SIG undefined FUN_144ffb770(void)

void FUN_144ffb770(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined **local_28;
  longlong local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = *(longlong *)(param_1 + 0x18);
  local_28 = _anon_16EBA344::DynVolumeAabbQuery::vftable;
  local_20 = param_2;
  local_10 = param_3;
  FUN_144fce4b0(*(undefined8 *)(local_18 + 0x20),param_2 + 0x30,&local_28);
  return;
}



// FUNCTION 144ffb7b0 FUN_144ffb7b0 body=303 status=ok
// SIG undefined FUN_144ffb7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144ffb7b0(longlong param_1,float *param_2,int param_3,undefined8 param_4,float *param_5,
                     float *param_6,undefined1 (*param_7) [16])

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM2 [16];
  undefined1 auVar9 [16];
  int local_res18 [2];
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  undefined **local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  lVar1 = *(longlong *)
           ((longlong)param_3 * 0x120 + 8 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    plVar3 = *(longlong **)(lVar1 + 0x68);
    auVar9 = sqrtps(in_XMM2,*param_7);
    local_18 = auVar9._0_4_ + _DAT_14c6daea0;
    fStack_14 = auVar9._4_4_ + fRam000000014c6daea4;
    fStack_10 = auVar9._8_4_ + fRam000000014c6daea8;
    fStack_c = auVar9._12_4_ + fRam000000014c6daeac;
    if (*(float *)(lVar2 + 0x40) <= local_18 && local_18 != *(float *)(lVar2 + 0x40)) {
      local_18 = *(float *)(lVar2 + 0x40);
      fStack_14 = *(float *)(lVar2 + 0x44);
      fStack_10 = *(float *)(lVar2 + 0x48);
      fStack_c = *(float *)(lVar2 + 0x4c);
    }
    local_48 = *(undefined8 *)(lVar2 + 0x10);
    uStack_40 = *(undefined8 *)(lVar2 + 0x18);
    local_38 = *(undefined4 *)(lVar2 + 0x20);
    uStack_34 = *(undefined4 *)(lVar2 + 0x24);
    uStack_30 = *(undefined4 *)(lVar2 + 0x28);
    uStack_2c = *(undefined4 *)(lVar2 + 0x2c);
    local_58[0] = &PTR_FUN_14ab9efb8;
    local_28 = *(undefined8 *)(lVar2 + 0x30);
    uStack_20 = *(undefined8 *)(lVar2 + 0x38);
    local_68 = *param_5;
    fStack_64 = param_5[1];
    fStack_60 = param_5[2];
    fStack_5c = param_5[3];
    (**(code **)(*plVar3 + 0x18))(plVar3,local_res18,local_58,&local_68);
    if (local_res18[0] != -1) {
      fVar5 = (local_68 - *param_5) * (local_68 - *param_5);
      fVar6 = (fStack_64 - param_5[1]) * (fStack_64 - param_5[1]);
      fVar7 = (fStack_60 - param_5[2]) * (fStack_60 - param_5[2]);
      fVar8 = fVar6 + fVar5 + fVar7;
      if (fVar8 < *(float *)*param_7) {
        *(int *)(param_1 + 0x18) = local_res18[0];
        *param_6 = local_68;
        param_6[1] = fStack_64;
        param_6[2] = fStack_60;
        param_6[3] = fStack_5c;
      }
      *param_2 = fVar8;
      param_2[1] = fVar6 + fVar5 + fVar7;
      param_2[2] = fVar6 + fVar5 + fVar7;
      param_2[3] = fVar6 + fVar5 + fVar7;
      return param_2;
    }
  }
  uVar4 = uRam000000014c6dae88;
  *(undefined8 *)param_2 = _DAT_14c6dae80;
  *(undefined8 *)(param_2 + 2) = uVar4;
  return param_2;
}



// FUNCTION 144ffb8e0 FUN_144ffb8e0 body=71 status=ok
// SIG undefined FUN_144ffb8e0(void)

undefined8 * FUN_144ffb8e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::ClosestPointCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144ffb930 FUN_144ffb930 body=64 status=ok
// SIG undefined FUN_144ffb930(void)

undefined8 FUN_144ffb930(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)
           ((longlong)param_2 * 0x120 + 8 + *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38));
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x68);
    (**(code **)(*plVar2 + 0x20))
              (plVar2,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 144ffb970 FUN_144ffb970 body=71 status=ok
// SIG undefined FUN_144ffb970(void)

undefined8 * FUN_144ffb970(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkcdAabbTreeQueries::AabbCollector::vftable;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144ffb9c0 FUN_144ffb9c0 body=109 status=ok
// SIG undefined FUN_144ffb9c0(void)

int * FUN_144ffb9c0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4)

{
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  int local_10;
  
  local_10 = -1;
  local_28 = _anon_584DBF82::NavVolumeIterateAroundPointFaceCollector::vftable;
  local_18 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x18))
            (*(longlong **)(param_1 + 0x18),param_3 + 0x30,param_3 + 0x40,&local_28,param_4);
  if (local_10 != -1) {
    *param_2 = local_10;
    return param_2;
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 144ffba30 FUN_144ffba30 body=50 status=ok
// SIG undefined FUN_144ffba30(void)

void FUN_144ffba30(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined **local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_28 = NavVolumeQueryMediatorNamespace::NavVolumeIterateInsideAabbCollector::vftable;
  local_20 = param_2;
  local_18 = param_3;
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
            (*(longlong **)(param_1 + 0x18),param_2 + 0x30,&local_28);
  return;
}



// FUNCTION 144ffba70 FUN_144ffba70 body=351 status=ok
// SIG undefined FUN_144ffba70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144ffba70(longlong param_1,float *param_2,int *param_3,undefined1 (*param_4) [16],
                     undefined1 (*param_5) [16],float *param_6)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined8 uVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  int local_res8 [2];
  
  local_res8[0] = *param_3;
  lVar2 = *(longlong *)(param_1 + 8);
  plVar3 = *(longlong **)(lVar2 + 0x18);
  if ((plVar3 != (longlong *)0x0) &&
     (iVar9 = (**(code **)(*plVar3 + 0x30))
                        (plVar3,0,local_res8,*(undefined8 *)(lVar2 + 0x20),
                         *(undefined8 *)(lVar2 + 0x28)), uVar8 = uRam000000014c6dae88, iVar9 == 0))
  {
    *(undefined8 *)param_2 = _DAT_14c6dae80;
    *(undefined8 *)(param_2 + 2) = uVar8;
    return param_2;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  auVar1 = *param_4;
  auVar12 = *(undefined1 (*) [16])(*(longlong *)(lVar2 + 0x18) + (longlong)*param_3 * 0x18);
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar12._0_10_;
  auVar5._12_2_ = auVar12._6_2_;
  auVar6._8_2_ = auVar12._4_2_;
  auVar6._0_8_ = auVar12._0_8_;
  auVar6._10_4_ = auVar5._10_4_;
  auVar7._6_8_ = 0;
  auVar7._0_6_ = auVar6._8_6_;
  auVar11._4_4_ =
       ((float)auVar12._10_2_ + 0.0) * *(float *)(lVar2 + 0xa4) + *(float *)(lVar2 + 0xb4);
  auVar11._0_4_ = ((float)auVar12._8_2_ + 0.0) * *(float *)(lVar2 + 0xa0) + *(float *)(lVar2 + 0xb0)
  ;
  auVar11._8_4_ =
       ((float)auVar12._12_2_ + 0.0) * *(float *)(lVar2 + 0xa8) + *(float *)(lVar2 + 0xb8);
  auVar11._12_4_ =
       ((float)auVar12._14_2_ + 0.0) * *(float *)(lVar2 + 0xac) + *(float *)(lVar2 + 0xbc);
  auVar11 = minps(auVar1,auVar11);
  auVar4._4_4_ = ((float)(int)CONCAT82(SUB148(auVar7 << 0x40,6),auVar12._2_2_) + 0.0) *
                 *(float *)(lVar2 + 0xa4) + *(float *)(lVar2 + 0xb4);
  auVar4._0_4_ = ((float)auVar12._0_2_ + 0.0) * *(float *)(lVar2 + 0xa0) + *(float *)(lVar2 + 0xb0);
  auVar4._8_4_ = ((float)(auVar6._8_4_ >> 0x10) * 65536.0 + (float)(auVar6._8_4_ & 0xffff)) *
                 *(float *)(lVar2 + 0xa8) + *(float *)(lVar2 + 0xb8);
  auVar4._12_4_ = ((float)auVar12._6_2_ + 0.0) * *(float *)(lVar2 + 0xac) + *(float *)(lVar2 + 0xbc)
  ;
  auVar12 = maxps(auVar11,auVar4);
  fVar13 = auVar1._0_4_ - auVar12._0_4_;
  fVar14 = auVar1._4_4_ - auVar12._4_4_;
  fVar15 = auVar1._8_4_ - auVar12._8_4_;
  fVar13 = fVar13 * fVar13;
  fVar14 = fVar14 * fVar14;
  fVar15 = fVar15 * fVar15;
  fVar10 = fVar14 + fVar13 + fVar15;
  if (fVar10 < *param_6) {
    *param_5 = auVar12;
    *(int *)(param_1 + 0x18) = *param_3;
  }
  *param_2 = fVar10;
  param_2[1] = fVar14 + fVar13 + fVar15;
  param_2[2] = fVar14 + fVar13 + fVar15;
  param_2[3] = fVar14 + fVar13 + fVar15;
  return param_2;
}



// FUNCTION 144ffbbd0 FUN_144ffbbd0 body=88 status=ok
// SIG undefined FUN_144ffbbd0(void)

void FUN_144ffbbd0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 local_res8 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  plVar2 = *(longlong **)(lVar1 + 0x18);
  if ((plVar2 != (longlong *)0x0) &&
     (local_res8[0] = *param_2,
     iVar3 = (**(code **)(*plVar2 + 0x30))
                       (plVar2,0,local_res8,*(undefined8 *)(lVar1 + 0x20),
                        *(undefined8 *)(lVar1 + 0x28)), iVar3 == 0)) {
    return;
  }
  (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),*param_2);
  return;
}



// FUNCTION 144ffbc30 FUN_144ffbc30 body=628 status=ok
// SIG undefined FUN_144ffbc30(void)

void FUN_144ffbc30(longlong param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong local_68;
  uint local_60;
  uint local_5c;
  int local_58;
  undefined4 *local_50;
  uint local_48;
  uint local_44;
  int local_40;
  
  uVar8 = param_3 + 0x1f >> 5;
  if ((int)uVar8 < 1) {
    local_50 = (undefined4 *)0x0;
    local_48 = 0;
    local_44 = 0x80000000;
  }
  else {
    local_50 = (undefined4 *)
               (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar8 << 2);
    local_48 = uVar8;
    local_44 = uVar8;
  }
  local_40 = param_3;
  if ((int)(local_44 & 0x7fffffff) < (int)uVar8) {
    FUN_140163394(&local_50,&PTR_vftable_14c6e47a0,(longlong)(int)uVar8);
  }
  uVar13 = local_44;
  puVar3 = local_50;
  if (((int)local_48 < (int)uVar8) || (uVar10 = local_48, (int)uVar8 < (int)local_48)) {
    uVar10 = uVar8;
  }
  FUN_144bfb550(local_50,0xffffffff,(longlong)(int)uVar10);
  local_5c = 0x80000000;
  if ((int)uVar8 < 1) {
    local_68 = 0;
    uVar8 = 0;
    local_5c = 0x80000000;
  }
  else {
    local_68 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                         (&PTR_vftable_14c6e47a0,(longlong)(int)uVar8 << 2);
    local_5c = uVar8;
  }
  uVar11 = param_3 + 0x1f >> 5;
  local_60 = uVar8;
  local_58 = param_3;
  if ((int)(local_5c & 0x7fffffff) < (int)uVar11) {
    FUN_140163394(&local_68,&PTR_vftable_14c6e47a0,(longlong)(int)uVar11);
  }
  if (((int)local_60 < (int)uVar11) || ((int)uVar11 < (int)local_60)) {
    local_60 = uVar11;
  }
  FUN_144bfb550(local_68,0,(longlong)(int)local_60);
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar12 = 0;
    do {
      FUN_144bfb550(local_68,0,(longlong)(int)local_60);
      plVar2 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x18));
      (**(code **)(*plVar2 + 0x20))(plVar2,param_2,param_3,&local_68);
      uVar8 = uVar10;
      if ((int)local_60 < (int)uVar10) {
        uVar8 = local_60;
      }
      if ((-1 < (int)uVar8) && (lVar6 = (longlong)(int)uVar8, uVar8 != 0)) {
        puVar4 = puVar3 + lVar6;
        do {
          puVar1 = (uint *)((local_68 - (longlong)puVar3) + -4 + (longlong)puVar4);
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar4 & *puVar1;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      iVar9 = iVar9 + 1;
      lVar12 = lVar12 + 8;
      uVar13 = local_44;
    } while (iVar9 < *(int *)(param_1 + 0x20));
  }
  if ((int)param_4[1] < (int)uVar10) {
    uVar10 = *(uint *)(param_4 + 1);
  }
  if (0 < (int)uVar10) {
    lVar12 = *param_4;
    uVar7 = (ulonglong)uVar10;
    puVar5 = puVar3;
    do {
      *(undefined4 *)((lVar12 - (longlong)puVar3) + (longlong)puVar5) = *puVar5;
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  local_60 = 0;
  if ((-1 < (int)local_5c) && (local_68 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_68,(ulonglong)(local_5c & 0x7fffffff) << 2);
  }
  local_68 = 0;
  local_5c = 0x80000000;
  if ((-1 < (int)uVar13) && (puVar3 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,puVar3,(ulonglong)(uVar13 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144ffbeb0 FUN_144ffbeb0 body=120 status=ok
// SIG undefined FUN_144ffbeb0(void)

undefined8 FUN_144ffbeb0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18));
      iVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 144ffbf30 FUN_144ffbf30 body=168 status=ok
// SIG undefined FUN_144ffbf30(void)

undefined4 * FUN_144ffbf30(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_58 [64];
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x20) < 1) {
    *param_2 = 0;
  }
  else {
    lVar3 = 0;
    do {
      FUN_144b3e890(local_58);
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x18));
      (**(code **)(*plVar1 + 0x28))(plVar1,local_res8,local_58);
      FUN_144bdea70(param_3,local_res10,local_58,0);
      FUN_144b3e940(local_58);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (iVar2 < *(int *)(param_1 + 0x20));
    *param_2 = 0;
  }
  return param_2;
}



// FUNCTION 144ffbfe0 FUN_144ffbfe0 body=110 status=ok
// SIG undefined FUN_144ffbfe0(void)

undefined8 FUN_144ffbfe0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18));
      iVar2 = (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 144ffc050 FUN_144ffc050 body=110 status=ok
// SIG undefined FUN_144ffc050(void)

undefined8 FUN_144ffc050(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + *(longlong *)(param_1 + 0x18));
      iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2);
      if (iVar2 == 0) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      lVar4 = lVar4 + 8;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  return 1;
}



// FUNCTION 144ffc0c0 FUN_144ffc0c0 body=139 status=ok
// SIG undefined FUN_144ffc0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ffc0c0(longlong param_1,undefined1 (*param_2) [16])

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auVar5 [16];
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar6 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  uVar2 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  iVar4 = 0;
  *(ulonglong *)param_2[1] = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  *(undefined8 *)(param_2[1] + 8) = uVar2;
  uVar7 = uRam000000014c6dae84 ^ 0x80000000;
  uVar8 = uRam000000014c6dae88 ^ 0x80000000;
  uVar9 = uRam000000014c6dae8c ^ 0x80000000;
  *(uint *)*param_2 = _DAT_14c6dae80 ^ 0x80000000;
  *(uint *)(*param_2 + 4) = uVar7;
  *(uint *)(*param_2 + 8) = uVar8;
  *(uint *)(*param_2 + 0xc) = uVar9;
  if (0 < *(int *)(param_1 + 0x20)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x18));
      (**(code **)(*plVar1 + 0x18))(plVar1,local_28);
      lVar3 = lVar3 + 8;
      iVar4 = iVar4 + 1;
      auVar5 = maxps(*param_2,local_28);
      auVar6 = minps(param_2[1],local_18);
      *param_2 = auVar5;
      param_2[1] = auVar6;
    } while (iVar4 < *(int *)(param_1 + 0x20));
  }
  return;
}



// FUNCTION 144ffc150 FUN_144ffc150 body=115 status=ok
// SIG undefined FUN_144ffc150(void)

void FUN_144ffc150(ulonglong param_1,float *param_2,int param_3,longlong *param_4)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (0 < param_3) {
    uVar3 = 0;
    lVar6 = 0;
    uVar5 = param_1;
    do {
      auVar2._4_4_ = -(uint)(*(float *)(param_1 + 0x24) <= param_2[1] &&
                            param_2[1] <= *(float *)(param_1 + 0x34));
      auVar2._0_4_ = -(uint)(*(float *)(param_1 + 0x20) <= *param_2 &&
                            *param_2 <= *(float *)(param_1 + 0x30));
      auVar2._8_4_ = -(uint)(*(float *)(param_1 + 0x28) <= param_2[2] &&
                            param_2[2] <= *(float *)(param_1 + 0x38));
      auVar2._12_4_ =
           -(uint)(*(float *)(param_1 + 0x2c) <= param_2[3] &&
                  param_2[3] <= *(float *)(param_1 + 0x3c));
      uVar4 = movmskps((int)uVar5,auVar2);
      uVar4 = uVar4 & 7;
      if ((char)uVar4 != '\a') {
        puVar1 = (uint *)(*param_4 + (lVar6 >> 5) * 4);
        uVar4 = *puVar1 | 1 << (uVar3 & 0x1f);
        *puVar1 = uVar4;
      }
      uVar5 = (ulonglong)uVar4;
      uVar3 = uVar3 + 1;
      lVar6 = lVar6 + 1;
      param_2 = param_2 + 4;
    } while ((int)uVar3 < param_3);
  }
  return;
}



// FUNCTION 144ffc1d0 FUN_144ffc1d0 body=53 status=ok
// SIG undefined FUN_144ffc1d0(void)

bool FUN_144ffc1d0(longlong param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar3 = minps(*param_2,*param_3);
  auVar2 = maxps(*param_2,*param_3);
  auVar4 = minps(auVar3,*param_4);
  auVar3 = maxps(auVar2,*param_4);
  auVar2._4_4_ = -(uint)(*(float *)(param_1 + 0x24) <= auVar3._4_4_ &&
                        auVar4._4_4_ <= *(float *)(param_1 + 0x34));
  auVar2._0_4_ = -(uint)(*(float *)(param_1 + 0x20) <= auVar3._0_4_ &&
                        auVar4._0_4_ <= *(float *)(param_1 + 0x30));
  auVar2._8_4_ = -(uint)(*(float *)(param_1 + 0x28) <= auVar3._8_4_ &&
                        auVar4._8_4_ <= *(float *)(param_1 + 0x38));
  auVar2._12_4_ =
       -(uint)(auVar4._12_4_ <= *(float *)(param_1 + 0x3c) &&
              *(float *)(param_1 + 0x2c) <= auVar3._12_4_);
  uVar1 = movmskps((int)param_1,auVar2);
  return ((byte)uVar1 & 7) != 7;
}



// FUNCTION 144ffc210 FUN_144ffc210 body=35 status=ok
// SIG undefined FUN_144ffc210(void)

bool FUN_144ffc210(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(*(float *)(param_1 + 0x24) <= param_2[5] &&
                        param_2[1] <= *(float *)(param_1 + 0x34));
  auVar1._0_4_ = -(uint)(*(float *)(param_1 + 0x20) <= param_2[4] &&
                        *param_2 <= *(float *)(param_1 + 0x30));
  auVar1._8_4_ = -(uint)(*(float *)(param_1 + 0x28) <= param_2[6] &&
                        param_2[2] <= *(float *)(param_1 + 0x38));
  auVar1._12_4_ =
       -(uint)(*(float *)(param_1 + 0x2c) <= param_2[7] && param_2[3] <= *(float *)(param_1 + 0x3c))
  ;
  uVar2 = movmskps((int)param_1,auVar1);
  return ((byte)uVar2 & 7) != 7;
}



// FUNCTION 144ffc240 FUN_144ffc240 body=35 status=ok
// SIG undefined FUN_144ffc240(void)

bool FUN_144ffc240(longlong param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  
  auVar1._4_4_ = -(uint)(param_2[5] <= *(float *)(param_1 + 0x34) &&
                        *(float *)(param_1 + 0x24) <= param_2[1]);
  auVar1._0_4_ = -(uint)(param_2[4] <= *(float *)(param_1 + 0x30) &&
                        *(float *)(param_1 + 0x20) <= *param_2);
  auVar1._8_4_ = -(uint)(param_2[6] <= *(float *)(param_1 + 0x38) &&
                        *(float *)(param_1 + 0x28) <= param_2[2]);
  auVar1._12_4_ =
       -(uint)(param_2[7] <= *(float *)(param_1 + 0x3c) && *(float *)(param_1 + 0x2c) <= param_2[3])
  ;
  uVar2 = movmskps((int)param_1,auVar1);
  return ((byte)uVar2 & 7) != 7;
}



// FUNCTION 144ffc270 FUN_144ffc270 body=291 status=ok
// SIG undefined FUN_144ffc270(void)

undefined4 * FUN_144ffc270(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_3 + 0x18);
  if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < *(int *)(param_1 + 0x60)) {
    FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x60));
  }
  if ((undefined8 *)(param_1 + 0x58) != puVar1) {
    iVar2 = *(int *)(param_1 + 0x60);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    if ((int)(*(uint *)(param_3 + 0x24) & 0x7fffffff) < iVar2) {
      FUN_140c3e7da(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_3 + 0x20) = iVar2;
  }
  puVar1 = (undefined8 *)(param_3 + 0x28);
  if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < *(int *)(param_1 + 0x70)) {
    FUN_144bdeea0(puVar1,&PTR_vftable_14c6e47a0,(longlong)*(int *)(param_1 + 0x70));
  }
  *param_2 = 0;
  if ((undefined8 *)(param_1 + 0x68) != puVar1) {
    iVar2 = *(int *)(param_1 + 0x70);
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    if ((int)(*(uint *)(param_3 + 0x34) & 0x7fffffff) < iVar2) {
      FUN_144bdeea0(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_3 + 0x30) = iVar2;
  }
  return param_2;
}



// FUNCTION 144ffc3a0 FUN_144ffc3a0 body=30 status=ok
// SIG undefined FUN_144ffc3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144ffc3a0(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = CONCAT44(uRam000000014c6dae8c,uRam000000014c6dae88);
  *(ulonglong *)(param_2 + 4) = CONCAT44(uRam000000014c6dae84,_DAT_14c6dae80);
  *(undefined8 *)(param_2 + 6) = uVar1;
  uVar2 = uRam000000014c6dae84 ^ 0x80000000;
  uVar3 = uRam000000014c6dae88 ^ 0x80000000;
  uVar4 = uRam000000014c6dae8c ^ 0x80000000;
  *param_2 = _DAT_14c6dae80 ^ 0x80000000;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  return;
}



// FUNCTION 144ffc3c0 FUN_144ffc3c0 body=150 status=ok
// SIG undefined FUN_144ffc3c0(void)

undefined8 * FUN_144ffc3c0(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiDefaultAstarCostModifier::vftable;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x3f803f80;
  *(undefined4 *)(param_1 + 4) = 0x3f803f80;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f803f80;
  *(undefined4 *)(param_1 + 5) = 0x3f803f80;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f803f80;
  *(undefined4 *)(param_1 + 6) = 0x3f803f80;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x3f803f80;
  *(undefined4 *)(param_1 + 7) = 0x3f803f80;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f803f80;
  *(undefined4 *)(param_1 + 8) = 0x3f803f80;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x3f803f80;
  *(undefined4 *)(param_1 + 9) = 0x3f803f80;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x3f803f80;
  *(undefined4 *)(param_1 + 10) = 0x3f803f80;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3f803f80;
  *(undefined4 *)(param_1 + 0xb) = 0x3f803f80;
  return param_1;
}



// FUNCTION 144ffc460 FUN_144ffc460 body=75 status=ok
// SIG undefined FUN_144ffc460(void)

float * FUN_144ffc460(longlong param_1,float *param_2,longlong param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  
  uVar5 = 0;
  puVar1 = *(uint **)(*(longlong *)(param_3 + 0x10) + 0x70);
  if (puVar1 != *(uint **)(*(longlong *)(param_3 + 0x10) + 0x78)) {
    uVar5 = *puVar1;
  }
  fVar6 = (float)uVar5 * 2.3283064e-10 * *(float *)(param_1 + 0x18);
  fVar2 = *(float *)(param_3 + 0x34);
  fVar3 = *(float *)(param_3 + 0x38);
  fVar4 = *(float *)(param_3 + 0x3c);
  *param_2 = fVar6 + *(float *)(param_3 + 0x30);
  param_2[1] = fVar6 + fVar2;
  param_2[2] = fVar6 + fVar3;
  param_2[3] = fVar6 + fVar4;
  return param_2;
}



// FUNCTION 144ffc4b0 FUN_144ffc4b0 body=120 status=ok
// SIG undefined FUN_144ffc4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144ffc4b0(longlong param_1,float *param_2,longlong param_3)

{
  int iVar1;
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
  
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 8);
  fVar9 = _DAT_14c6daca0;
  fVar14 = fRam000000014c6daca4;
  fVar15 = fRam000000014c6daca8;
  fVar16 = fRam000000014c6dacac;
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x14), iVar1 < 0x20)) {
    fVar9 = (float)((int)*(short *)(param_1 + 0x1c + (longlong)iVar1 * 2) << 0x10);
    fVar14 = fVar9;
    fVar15 = fVar9;
    fVar16 = fVar9;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x48);
  fVar10 = _DAT_14c6daca0;
  fVar11 = fRam000000014c6daca4;
  fVar12 = fRam000000014c6daca8;
  fVar13 = fRam000000014c6dacac;
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0x14), iVar1 < 0x20)) {
    fVar10 = (float)((int)*(short *)(param_1 + 0x1c + (longlong)iVar1 * 2) << 0x10);
    fVar11 = fVar10;
    fVar12 = fVar10;
    fVar13 = fVar10;
  }
  fVar3 = *(float *)(param_3 + 0x44);
  fVar4 = *(float *)(param_3 + 0x48);
  fVar5 = *(float *)(param_3 + 0x4c);
  fVar6 = *(float *)(param_3 + 0x34);
  fVar7 = *(float *)(param_3 + 0x38);
  fVar8 = *(float *)(param_3 + 0x3c);
  *param_2 = fVar10 * *(float *)(param_3 + 0x40) + fVar9 * *(float *)(param_3 + 0x30);
  param_2[1] = fVar11 * fVar3 + fVar14 * fVar6;
  param_2[2] = fVar12 * fVar4 + fVar15 * fVar7;
  param_2[3] = fVar13 * fVar5 + fVar16 * fVar8;
  return param_2;
}



// FUNCTION 144ffc530 FUN_144ffc530 body=18 status=ok
// SIG undefined FUN_144ffc530(void)

undefined8 * FUN_144ffc530(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72e480;
  return param_2;
}



// FUNCTION 144ffc550 FUN_144ffc550 body=18 status=ok
// SIG undefined FUN_144ffc550(void)

undefined8 * FUN_144ffc550(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72e4e0;
  return param_2;
}



// FUNCTION 144ffc570 FUN_144ffc570 body=127 status=ok
// SIG undefined FUN_144ffc570(void)

undefined8 * FUN_144ffc570(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  if (*(int *)((longlong)param_1 + 0x2c) < 0) {
    lVar1 = (longlong)param_1 + param_1[4] + 0x20;
    if (param_1[4] == 0) {
      lVar1 = 0;
    }
    (*DAT_14c787678)(0,lVar1,0);
  }
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



// FUNCTION 144ffc5f0 FUN_144ffc5f0 body=87 status=ok
// SIG undefined FUN_144ffc5f0(void)

undefined8 FUN_144ffc5f0(undefined8 param_1,ulonglong param_2)

{
  FUN_1453204b0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144ffc650 FUN_144ffc650 body=18 status=ok
// SIG undefined FUN_144ffc650(void)

undefined8 * FUN_144ffc650(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72e550;
  return param_2;
}



// FUNCTION 144ffc6e0 FUN_144ffc6e0 body=143 status=ok
// SIG undefined FUN_144ffc6e0(void)

void FUN_144ffc6e0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    param_2 = param_2 + 0x20;
    uVar2 = (ulonglong)param_4;
    do {
      if (puVar1 + -2 != (undefined8 *)0x0) {
        puVar1[-1] = 0xffffffff;
        *puVar1 = 1;
        puVar1[-2] = hkcdStaticAabbTree::Impl::vftable;
        FUN_144ffd060(puVar1 + 2,param_2);
      }
      param_2 = param_2 + 0x50;
      puVar1 = puVar1 + 10;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144ffc770 FUN_144ffc770 body=88 status=ok
// SIG undefined FUN_144ffc770(void)

void FUN_144ffc770(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x50 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -10;
      plVar2 = plVar2 + -10;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144ffc7d0 FUN_144ffc7d0 body=71 status=ok
// SIG undefined FUN_144ffc7d0(void)

void FUN_144ffc7d0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (0 < (int)param_4) {
    lVar1 = param_1 + 0x20;
    uVar2 = (ulonglong)param_4;
    do {
      FUN_144ffd1f0(lVar1,(param_2 - param_1) + lVar1);
      lVar1 = lVar1 + 0x50;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}



// FUNCTION 144ffc8c0 FUN_144ffc8c0 body=159 status=ok
// SIG undefined FUN_144ffc8c0(void)

void FUN_144ffc8c0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    puVar1 = (undefined4 *)(param_1 + 0x30);
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    do {
      if ((undefined8 *)(puVar1 + -0xc) != (undefined8 *)0x0) {
        *(undefined8 *)(puVar1 + -10) = 0xffffffff;
        *(undefined8 *)(puVar1 + -8) = 1;
        *(undefined ***)(puVar1 + -0xc) = hkcdDynamicAabbTree::Impl::vftable;
        FUN_144fa7b80(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
        puVar1[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144ffc960 FUN_144ffc960 body=77 status=ok
// SIG undefined FUN_144ffc960(void)

void FUN_144ffc960(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  
  param_3 = param_3 + -1;
  if (-1 < param_3) {
    plVar1 = (longlong *)((longlong)param_3 * 0x40 + param_1);
    plVar2 = plVar1;
    do {
      (**(code **)(*plVar2 + 8))(plVar1,0);
      plVar1 = plVar1 + -8;
      plVar2 = plVar2 + -8;
      param_3 = param_3 + -1;
    } while (-1 < param_3);
  }
  return;
}



// FUNCTION 144ffc9b0 FUN_144ffc9b0 body=109 status=ok
// SIG undefined FUN_144ffc9b0(void)

void FUN_144ffc9b0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x30);
    do {
      FUN_144fce9f0(puVar1 + -6,param_2 + -0x18 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_2 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(param_2 + 8 + (longlong)puVar1);
      puVar1 = puVar1 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144ffca20 FUN_144ffca20 body=125 status=ok
// SIG undefined FUN_144ffca20(void)

void FUN_144ffca20(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 local_res18;
  
  if (0 < param_3) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar1 = (longlong)param_3;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkcdDynamicAabbTree::Impl::vftable;
        FUN_144fa7a30(puVar2 + 1,local_res18);
      }
      puVar2 = puVar2 + 8;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144ffcaa0 FUN_144ffcaa0 body=55 status=ok
// SIG undefined FUN_144ffcaa0(void)

void FUN_144ffcaa0(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_144fcd2c0(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144ffcae0 FUN_144ffcae0 body=75 status=ok
// SIG undefined FUN_144ffcae0(void)

void FUN_144ffcae0(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != 0) {
        FUN_144fcd390(param_1,param_2 + param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144ffcb30 FUN_144ffcb30 body=77 status=ok
// SIG undefined FUN_144ffcb30(void)

void FUN_144ffcb30(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144ffcb80 FUN_144ffcb80 body=70 status=ok
// SIG undefined FUN_144ffcb80(void)

void FUN_144ffcb80(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    param_2 = param_2 - param_1;
    uVar1 = (ulonglong)param_4;
    do {
      FUN_144fcd4d0(param_1,param_2 + param_1);
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144ffcc20 FUN_144ffcc20 body=55 status=ok
// SIG undefined FUN_144ffcc20(void)

void FUN_144ffcc20(longlong param_1,undefined8 param_2,uint param_3)

{
  ulonglong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulonglong)param_3;
    do {
      if (param_1 != 0) {
        FUN_145320480(param_1);
      }
      param_1 = param_1 + 0x20;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144ffcc60 FUN_144ffcc60 body=141 status=ok
// SIG undefined FUN_144ffcc60(void)

void FUN_144ffcc60(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    puVar2 = (undefined8 *)(param_1 + 0x10);
    lVar3 = (longlong)param_4;
    do {
      if (puVar2 + -2 != (undefined8 *)0x0) {
        puVar2[-1] = 0xffffffff;
        *puVar2 = 1;
        puVar2[-2] = hkcdStaticAabbTree::vftable;
        lVar1 = *(longlong *)((param_2 - param_1) + 8 + (longlong)puVar2);
        puVar2[1] = lVar1;
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
      }
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144ffccf0 FUN_144ffccf0 body=77 status=ok
// SIG undefined FUN_144ffccf0(void)

void FUN_144ffccf0(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144ffcd40 FUN_144ffcd40 body=98 status=ok
// SIG undefined FUN_144ffcd40(void)

void FUN_144ffcd40(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (0 < param_4) {
    lVar3 = (longlong)param_4;
    plVar2 = (longlong *)(param_1 + 0x18);
    do {
      lVar1 = *(longlong *)((param_2 - param_1) + (longlong)plVar2);
      if (*plVar2 != lVar1) {
        if (lVar1 != 0) {
          FUN_144b3d910();
        }
        lVar1 = *plVar2;
        *plVar2 = *(longlong *)((param_2 - param_1) + (longlong)plVar2);
        if (lVar1 != 0) {
          FUN_144b3f230();
        }
      }
      plVar2 = plVar2 + 4;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 144ffcde0 FUN_144ffcde0 body=80 status=ok
// SIG undefined FUN_144ffcde0(void)

void FUN_144ffcde0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144ffce30 FUN_144ffce30 body=63 status=ok
// SIG undefined FUN_144ffce30(void)

void FUN_144ffce30(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144ffce70 FUN_144ffce70 body=97 status=ok
// SIG undefined FUN_144ffce70(void)

void FUN_144ffce70(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144ffcf10 FUN_144ffcf10 body=80 status=ok
// SIG undefined FUN_144ffcf10(void)

void FUN_144ffcf10(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144ffcf60 FUN_144ffcf60 body=63 status=ok
// SIG undefined FUN_144ffcf60(void)

void FUN_144ffcf60(longlong param_1,undefined8 param_2,int param_3)

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



// FUNCTION 144ffcfa0 FUN_144ffcfa0 body=97 status=ok
// SIG undefined FUN_144ffcfa0(void)

void FUN_144ffcfa0(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

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



// FUNCTION 144ffd010 FUN_144ffd010 body=18 status=ok
// SIG undefined FUN_144ffd010(void)

undefined8 * FUN_144ffd010(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c72e410;
  return param_2;
}



// FUNCTION 144ffd030 FUN_144ffd030 body=39 status=ok
// SIG undefined FUN_144ffd030(void)

undefined8 * FUN_144ffd030(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkcdDynamicAabbTree::vftable;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 144ffd060 FUN_144ffd060 body=386 status=ok
// SIG undefined FUN_144ffd060(void)

longlong * FUN_144ffd060(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong local_res8;
  
  lVar10 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar1 = (int)param_2[1];
  lVar8 = (longlong)iVar1;
  lVar9 = *param_2 + (longlong)param_2;
  if (((*param_2 != 0) && (lVar9 != 0)) && (0 < iVar1)) {
    uVar4 = iVar1 - 1U | (int)(iVar1 - 1U) >> 0x10;
    uVar4 = uVar4 | (int)uVar4 >> 8;
    uVar4 = uVar4 | (int)uVar4 >> 4;
    uVar4 = uVar4 | (int)uVar4 >> 2;
    uVar4 = ((int)uVar4 >> 1 | uVar4) + 1;
    if ((int)uVar4 < iVar1) {
      FUN_144bfc170(0x5d9e6698,
                    "d:\\CI\\Stable_Package_Build_x64-vs2022\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                    ,0x1f0,"Capacity reservation overflow");
    }
    local_res8 = (longlong)(int)uVar4 * 6;
    puVar2 = (undefined4 *)(*DAT_14c787670)(0,&local_res8,0);
    lVar3 = *param_1;
    lVar6 = (longlong)(int)param_1[1];
    lVar7 = (longlong)param_1 + lVar3;
    if (lVar3 == 0) {
      lVar7 = lVar10;
    }
    if (0 < lVar6) {
      puVar5 = puVar2;
      do {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *(undefined4 *)((lVar7 - (longlong)puVar2) + (longlong)puVar5);
          *(undefined2 *)(puVar5 + 1) =
               *(undefined2 *)((lVar7 - (longlong)puVar2) + 4 + (longlong)puVar5);
        }
        puVar5 = (undefined4 *)((longlong)puVar5 + 6);
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      lVar3 = *param_1;
    }
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      lVar7 = lVar3 + (longlong)param_1;
      if (lVar3 == 0) {
        lVar7 = lVar10;
      }
      (*DAT_14c787678)(0,lVar7,0);
    }
    *(int *)(param_1 + 1) = iVar1;
    lVar3 = (longlong)puVar2 - (longlong)param_1;
    if (puVar2 == (undefined4 *)0x0) {
      lVar3 = lVar10;
    }
    *param_1 = lVar3;
    puVar2 = (undefined4 *)(lVar3 + (longlong)param_1);
    *(uint *)((longlong)param_1 + 0xc) = uVar4 | 0x80000000;
    if (0 < iVar1) {
      lVar9 = lVar9 - (longlong)puVar2;
      do {
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)(lVar9 + (longlong)puVar2);
          *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(lVar9 + 4 + (longlong)puVar2);
        }
        puVar2 = (undefined4 *)((longlong)puVar2 + 6);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
  }
  lVar9 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar9;
  lVar9 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar9;
  return param_1;
}



// FUNCTION 144ffd1f0 FUN_144ffd1f0 body=362 status=ok
// SIG undefined FUN_144ffd1f0(void)

longlong * FUN_144ffd1f0(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong local_res8;
  
  if (param_2 != param_1) {
    puVar8 = (undefined4 *)0x0;
    puVar4 = (undefined4 *)(*param_2 + (longlong)param_2);
    if (*param_2 == 0) {
      puVar4 = puVar8;
    }
    uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
    uVar5 = *(uint *)(param_2 + 1);
    if ((int)*(uint *)(param_2 + 1) < (int)uVar2) {
      uVar5 = uVar2;
    }
    if ((puVar4 == (undefined4 *)0x0) || ((longlong)(int)uVar5 * 6 == 0)) {
      if (*(int *)((longlong)param_1 + 0xc) < 0) {
        puVar4 = (undefined4 *)(*param_1 + (longlong)param_1);
        if (*param_1 == 0) {
          puVar4 = puVar8;
        }
        (*DAT_14c787678)(0,puVar4,0);
      }
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      lVar7 = *param_1;
      uVar2 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
      puVar3 = (undefined4 *)(lVar7 + (longlong)param_1);
      if (lVar7 == 0) {
        puVar3 = puVar8;
      }
      uVar1 = *(uint *)(param_1 + 1);
      if ((int)*(uint *)(param_1 + 1) < (int)uVar2) {
        uVar1 = uVar2;
      }
      if (uVar5 != uVar1) {
        if ((int)*(uint *)((longlong)param_1 + 0xc) < 0) {
          puVar3 = (undefined4 *)(lVar7 + (longlong)param_1);
          if (lVar7 == 0) {
            puVar3 = puVar8;
          }
          (*DAT_14c787678)(0,puVar3,0);
        }
        local_res8 = (longlong)(int)uVar5 * 6;
        puVar3 = (undefined4 *)(*DAT_14c787670)(0,&local_res8,0);
      }
      lVar7 = (longlong)(int)param_2[1];
      puVar6 = puVar3;
      if (0 < lVar7) {
        do {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *(undefined4 *)(((longlong)puVar6 - (longlong)puVar3) + (longlong)puVar4);
            *(undefined2 *)(puVar6 + 1) =
                 *(undefined2 *)(((longlong)puVar6 - (longlong)puVar3) + 4 + (longlong)puVar4);
          }
          lVar7 = lVar7 + -1;
          puVar6 = (undefined4 *)((longlong)puVar6 + 6);
        } while (lVar7 != 0);
      }
      puVar4 = (undefined4 *)((longlong)puVar3 - (longlong)param_1);
      if (puVar3 == (undefined4 *)0x0) {
        puVar4 = puVar8;
      }
      *param_1 = (longlong)puVar4;
      *(int *)(param_1 + 1) = (int)param_2[1];
      uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
      uVar5 = *(uint *)(param_2 + 1);
      if ((int)*(uint *)(param_2 + 1) < (int)uVar2) {
        uVar5 = uVar2;
      }
      *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
    }
  }
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  lVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar7;
  return param_1;
}



// FUNCTION 144ffd360 FUN_144ffd360 body=353 status=ok
// SIG undefined FUN_144ffd360(void)

undefined8 * FUN_144ffd360(undefined8 *param_1)

{
  param_1[2] = 1;
  *param_1 = hkaiDefaultAstarEdgeFilter::vftable;
  param_1[1] = 0xffffffff;
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0xffffffffffffffff;
  param_1[9] = 0xffffffffffffffff;
  param_1[10] = 0xffffffffffffffff;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  param_1[0xd] = 0xffffffffffffffff;
  param_1[0xe] = 0xffffffffffffffff;
  param_1[0xf] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0x11] = 0xffffffffffffffff;
  param_1[0x12] = 0xffffffffffffffff;
  param_1[0x13] = 0xffffffffffffffff;
  param_1[0x14] = 0xffffffffffffffff;
  param_1[0x15] = 0xffffffffffffffff;
  param_1[0x16] = 0xffffffffffffffff;
  param_1[0x17] = 0xffffffffffffffff;
  param_1[0x18] = 0xffffffffffffffff;
  param_1[0x19] = 0xffffffffffffffff;
  param_1[0x1a] = 0xffffffffffffffff;
  param_1[0x1b] = 0xffffffffffffffff;
  param_1[0x1c] = 0xffffffffffffffff;
  param_1[0x1d] = 0xffffffffffffffff;
  param_1[0x1e] = 0xffffffffffffffff;
  param_1[0x1f] = 0xffffffffffffffff;
  param_1[0x20] = 0xffffffffffffffff;
  param_1[0x21] = 0xffffffffffffffff;
  param_1[0x22] = 0xffffffffffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  return param_1;
}



// FUNCTION 144ffd4d0 FUN_144ffd4d0 body=101 status=ok
// SIG undefined FUN_144ffd4d0(void)

ulonglong FUN_144ffd4d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  
  lVar1 = *(longlong *)(param_2 + 0x10);
  uVar3 = 1 << ((byte)*(undefined8 *)(*(longlong *)(param_2 + 8) + 8) & 0x1f);
  if (((*(uint **)(lVar1 + 0x10) == *(uint **)(lVar1 + 0x18)) ||
      ((*(uint *)(param_1 + 0x20 + (ulonglong)(**(uint **)(lVar1 + 0x10) & 0x1f) * 4) & uVar3) != 0)
      ) && ((*(uint **)(lVar1 + 0x70) == *(uint **)(lVar1 + 0x78) ||
            ((*(uint *)(param_1 + 0xa0 + (ulonglong)(**(uint **)(lVar1 + 0x70) & 0x1f) * 4) & uVar3)
             != 0)))) {
    puVar2 = *(uint **)(lVar1 + 0x40);
    if (puVar2 != *(uint **)(lVar1 + 0x48)) {
      return (ulonglong)((*(uint *)(param_1 + 0x20 + (ulonglong)(*puVar2 & 0x1f) * 4) & uVar3) != 0)
      ;
    }
    return CONCAT71((int7)((ulonglong)puVar2 >> 8),1);
  }
  return 0;
}



// FUNCTION 144ffd540 FUN_144ffd540 body=37 status=ok
// SIG undefined FUN_144ffd540(void)

ulonglong FUN_144ffd540(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48);
  if ((lVar2 != 0) && (uVar1 = *(uint *)(lVar2 + 0x14), uVar1 < 0x20)) {
    return (ulonglong)
           CONCAT31((int3)(*(uint *)(param_1 + 0x120) >> 8),
                    (*(uint *)(param_1 + 0x120) >> (uVar1 & 0x1f) & 1) != 0);
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x10) >> 8),1);
}



// FUNCTION 144ffd570 FUN_144ffd570 body=233 status=ok
// SIG undefined FUN_144ffd570(void)

void FUN_144ffd570(undefined8 param_1,float *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  undefined1 auVar3 [16];
  float fVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  float local_res10;
  float fStackX_14;
  
  fVar5 = *param_2 - param_2[4];
  fVar2 = -(param_2[1] - param_2[5]);
  uVar6 = 0;
  auVar3._0_4_ = fVar2 * fVar2;
  fVar4 = fVar5 * fVar5;
  auVar3._4_4_ = auVar3._0_4_;
  auVar3._8_4_ = auVar3._0_4_;
  auVar3._12_4_ = auVar3._0_4_;
  if (fVar4 + auVar3._0_4_ != 0.0) {
    auVar1._4_4_ = fVar4 + auVar3._0_4_;
    auVar1._0_4_ = fVar4 + auVar3._0_4_;
    auVar1._8_4_ = fVar4 + auVar3._0_4_;
    auVar1._12_4_ = fVar4 + auVar3._0_4_;
    auVar3 = sqrtps(auVar3,auVar1);
    auVar7._4_4_ = fVar5;
    auVar7._0_4_ = fVar2;
    auVar7._8_4_ = fVar5;
    auVar7._12_4_ = fVar5;
    auVar3 = divps(auVar7,auVar3);
    uVar6 = auVar3._0_8_;
  }
  fVar2 = param_2[0x10];
  fStackX_14 = (float)((ulonglong)uVar6 >> 0x20);
  local_res10 = (float)uVar6;
  fVar4 = param_2[0xf];
  fVar5 = local_res10 * fVar4 + fStackX_14 * fVar2;
  if (1.1920929e-07 < ABS(fVar5)) {
    fVar5 = ((param_2[1] - param_2[3]) * fStackX_14 + (*param_2 - param_2[2]) * local_res10) / fVar5
    ;
    *(undefined1 *)(param_3 + 1) = 1;
    *(float *)(param_3 + 0xc) = fVar4 * fVar5;
    *(float *)(param_3 + 0x10) = fVar2 * fVar5;
    return;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  *(undefined4 *)(param_3 + 0xc) = 0;
  *(undefined4 *)(param_3 + 0x10) = 0;
  return;
}



// FUNCTION 144ffd660 FUN_144ffd660 body=692 status=ok
// SIG undefined FUN_144ffd660(void)

void FUN_144ffd660(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
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
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  
  if (param_2[7] == 2.8026e-45) {
    return;
  }
  fVar8 = param_2[0x10];
  fVar10 = param_2[0xf];
  fVar6 = param_2[1];
  fVar9 = param_2[3];
  fVar1 = param_2[2];
  fVar7 = *(float *)(param_1 + 0x18);
  fVar13 = fVar1 * fVar10 + fVar9 * fVar8;
  fVar15 = (*param_2 * fVar10 + fVar6 * fVar8) - fVar13;
  fVar8 = (param_2[4] * fVar10 + param_2[5] * fVar8) - fVar13;
  fVar16 = ABS(fVar15);
  auVar14._0_8_ = CONCAT44(fVar15,fVar15) & 0x7fffffff7fffffff;
  auVar14._8_4_ = ABS(fVar15);
  auVar14._12_4_ = ABS(fVar15);
  fVar10 = ABS(fVar8);
  auVar12._0_8_ = CONCAT44(fVar8,fVar8) & 0x7fffffff7fffffff;
  auVar12._8_4_ = ABS(fVar8);
  auVar12._12_4_ = ABS(fVar8);
  auVar11._4_12_ = auVar12._4_12_;
  if (((*(char *)(param_2 + 0x19) != '\0') && (param_2[6] == 0.0)) || (fVar7 <= fVar16)) {
    if (fVar7 <= fVar10) {
      return;
    }
    fVar8 = param_2[0xd];
    fVar6 = fVar7 * fVar7 - fVar10 * fVar10;
    fVar10 = param_2[0xe];
    auVar5._4_4_ = fVar6;
    auVar5._0_4_ = fVar6;
    auVar5._8_4_ = fVar6;
    auVar5._12_4_ = fVar6;
    auVar12 = sqrtps(auVar14,auVar5);
    fVar15 = (auVar12._0_4_ - (fVar8 * param_2[4] + fVar10 * param_2[5])) +
             fVar8 * fVar1 + fVar10 * fVar9;
    if (fVar15 <= 0.0) {
      return;
    }
    fVar15 = -fVar15;
    fVar10 = fVar15 * fVar10;
    fVar15 = fVar15 * fVar8;
  }
  else {
    fVar15 = param_2[0xd];
    fVar17 = *param_2 * fVar15;
    if (fVar7 <= fVar10) {
      fVar7 = fVar7 * fVar7 - fVar16 * fVar16;
      fVar10 = param_2[0xe];
      auVar4._4_4_ = fVar7;
      auVar4._0_4_ = fVar7;
      auVar4._8_4_ = fVar7;
      auVar4._12_4_ = fVar7;
      auVar12 = sqrtps(ZEXT416((uint)fVar8),auVar4);
      fVar8 = (auVar12._0_4_ - (fVar15 * fVar1 + fVar10 * fVar9)) + fVar17 + fVar6 * fVar10;
      if (fVar8 <= 0.0) {
        return;
      }
      fVar15 = fVar15 * fVar8;
      fVar10 = fVar10 * fVar8;
    }
    else {
      fVar8 = param_2[0xe];
      fVar16 = fVar7 * fVar7 - fVar16 * fVar16;
      auVar11._0_4_ = fVar10 * fVar10;
      fVar10 = fVar7 * fVar7 - auVar11._0_4_;
      auVar2._4_4_ = fVar16;
      auVar2._0_4_ = fVar16;
      auVar2._8_4_ = fVar16;
      auVar2._12_4_ = fVar16;
      auVar14 = sqrtps(ZEXT416((uint)fVar13),auVar2);
      fVar17 = fVar17 + fVar6 * fVar8;
      auVar3._4_4_ = fVar10;
      auVar3._0_4_ = fVar10;
      auVar3._8_4_ = fVar10;
      auVar3._12_4_ = fVar10;
      auVar12 = sqrtps(auVar11,auVar3);
      fVar9 = fVar15 * fVar1 + fVar8 * fVar9;
      fVar6 = fVar15 * param_2[4] + fVar8 * param_2[5];
      fVar10 = (auVar14._0_4_ - fVar9) + fVar17;
      fVar9 = (auVar12._0_4_ - fVar6) + fVar9;
      if (auVar12._0_4_ + auVar14._0_4_ <= fVar6 - fVar17) {
        if (fVar10 <= 0.0) {
          if (fVar9 <= 0.0) {
            return;
          }
          fVar10 = -fVar9 * fVar8;
          fVar15 = fVar15 * -fVar9;
          goto LAB_144ffd8dd;
        }
      }
      else {
        fVar10 = (fVar10 - fVar9) / 2.0;
      }
      fVar15 = fVar15 * fVar10;
      fVar10 = fVar10 * fVar8;
    }
  }
LAB_144ffd8dd:
  *(float *)(param_3 + 0xc) = fVar15;
  *(float *)(param_3 + 0x10) = fVar10;
  *(undefined1 *)(param_3 + 1) = 1;
  return;
}



// FUNCTION 144ffd920 FUN_144ffd920 body=321 status=ok
// SIG undefined FUN_144ffd920(void)

void FUN_144ffd920(longlong param_1,longlong param_2,undefined1 *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float local_res10 [2];
  
  if ((*(int *)(param_2 + 0x18) == 0) && (*(char *)(param_1 + 0x1c) != '\0')) {
    local_res10[0] =
         (float)FUN_144ffdc60(param_1,param_2,param_2 + 8,param_1 + 0x20,(float *)(param_2 + 0x3c));
    fVar1 = *(float *)(param_2 + 0x3c);
    fVar2 = *(float *)(param_2 + 0x40);
    param_3[1] = 1;
    *(float *)(param_3 + 0xc) = local_res10[0] * fVar1;
    *(float *)(param_3 + 0x10) = local_res10[0] * fVar2;
  }
  if ((*(int *)(param_2 + 0x20) == 1) && (*(char *)(param_1 + 0x28) != '\0')) {
    local_res10[0] =
         (float)FUN_144ffdc60(param_1,param_2 + 0x10,param_2 + 8,param_1 + 0x2c,
                              (float *)(param_2 + 0x3c));
    fVar1 = *(float *)(param_2 + 0x3c);
    fVar2 = *(float *)(param_2 + 0x40);
    param_3[1] = 1;
    *(float *)(param_3 + 0xc) = local_res10[0] * fVar1;
    *(float *)(param_3 + 0x10) = local_res10[0] * fVar2;
  }
  cVar3 = FUN_144ffda70(param_1,param_2,param_2 + 8,param_2 + 0x10,param_2 + 0x3c,local_res10);
  if (cVar3 != '\0') {
    fVar1 = *(float *)(param_2 + 0x30);
    fVar2 = *(float *)(param_2 + 0x2c);
    *param_3 = 1;
    *(float *)(param_3 + 8) = -local_res10[0] * fVar1;
    *(float *)(param_3 + 4) = -local_res10[0] * fVar2;
    fVar1 = *(float *)(param_2 + 0x4c);
    fVar2 = *(float *)(param_2 + 0x50);
    param_3[2] = 1;
    *(float *)(param_3 + 0x14) = -local_res10[0] * fVar1;
    *(float *)(param_3 + 0x18) = -local_res10[0] * fVar2;
  }
  return;
}



// FUNCTION 144ffda70 FUN_144ffda70 body=483 status=ok
// SIG undefined FUN_144ffda70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_144ffda70(longlong param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float local_res10;
  
  fVar9 = *param_3;
  fVar5 = param_3[1];
  fVar4 = fVar9 - *param_2;
  fVar6 = fVar5 - param_2[1];
  fVar8 = fVar5 - param_4[1];
  fVar6 = fVar6 * fVar6 + fVar4 * fVar4;
  fVar4 = fVar9 - *param_4;
  fVar4 = fVar8 * fVar8 + fVar4 * fVar4;
  if (fVar4 <= fVar6) {
    fVar4 = fVar4 / fVar6;
    auVar7._4_4_ = fVar4;
    auVar7._0_4_ = fVar4;
    auVar7._8_4_ = fVar4;
    auVar7._12_4_ = fVar4;
    auVar7 = sqrtps(ZEXT416((uint)fVar6),auVar7);
    fVar6 = (*param_2 - fVar9) * auVar7._0_4_ + fVar9;
    fVar10 = (float)((ulonglong)*(undefined8 *)param_4 >> 0x20);
    local_res10 = (float)*(undefined8 *)param_4;
    fVar8 = (param_2[1] - fVar5) * auVar7._0_4_ + fVar5;
    fVar4 = local_res10;
  }
  else {
    fVar6 = fVar6 / fVar4;
    local_res10 = (float)*(undefined8 *)param_2;
    fVar8 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
    auVar1._4_4_ = fVar6;
    auVar1._0_4_ = fVar6;
    auVar1._8_4_ = fVar6;
    auVar1._12_4_ = fVar6;
    auVar7 = sqrtps(ZEXT416((uint)fVar6),auVar1);
    fVar10 = (param_4[1] - fVar5) * auVar7._0_4_ + fVar5;
    fVar4 = (*param_4 - fVar9) * auVar7._0_4_ + fVar9;
    fVar6 = local_res10;
  }
  fVar4 = ((fVar8 - fVar10) * (fVar8 - fVar10) + (fVar6 - fVar4) * (fVar6 - fVar4)) * 0.0625;
  if (1.1920929e-07 <= fVar4) {
    fVar8 = param_5[1] * fVar8;
    fVar9 = (param_5[1] * fVar5 + *param_5 * fVar9) - (*param_5 * fVar6 + fVar8);
    bVar3 = 0.0 < fVar9;
    if (!bVar3) {
      fVar9 = -fVar9;
    }
    fVar5 = *(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18);
    if (fVar4 <= fVar5) {
      fVar4 = fVar4 / (fVar5 / fVar4 - _DAT_14c6daca0);
      auVar2._4_4_ = fVar4;
      auVar2._0_4_ = fVar4;
      auVar2._8_4_ = fVar4;
      auVar2._12_4_ = fVar4;
      auVar7 = sqrtps(ZEXT416((uint)fVar8),auVar2);
      fVar9 = fVar9 - auVar7._0_4_ * 2.0;
      if (0.0 < fVar9) {
        if (bVar3) {
          fVar9 = -fVar9;
        }
        *param_6 = fVar9;
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144ffdc60 FUN_144ffdc60 body=164 status=ok
// SIG undefined FUN_144ffdc60(void)

void FUN_144ffdc60(undefined8 param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar4 [16];
  
  fVar3 = *param_3 - *param_2;
  fVar1 = param_3[1] - param_2[1];
  auVar4._0_4_ = fVar1 * fVar1 + fVar3 * fVar3;
  auVar4._4_4_ = auVar4._0_4_;
  auVar4._8_4_ = auVar4._0_4_;
  auVar4._12_4_ = auVar4._0_4_;
  auVar4 = sqrtps(unaff_XMM7,auVar4);
  fVar3 = (auVar4._0_4_ * param_4[1] + param_2[1]) - param_3[1];
  fVar1 = (auVar4._0_4_ * *param_4 + *param_2) - *param_3;
  fVar1 = fVar3 * fVar3 + fVar1 * fVar1;
  auVar2._4_4_ = fVar1;
  auVar2._0_4_ = fVar1;
  auVar2._8_4_ = fVar1;
  auVar2._12_4_ = fVar1;
  sqrtps(auVar2,auVar2);
  return;
}



// FUNCTION 144ffdd10 FUN_144ffdd10 body=358 status=ok
// SIG undefined FUN_144ffdd10(void)

void FUN_144ffdd10(longlong param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = -3.40282e+38;
  fVar5 = 3.40282e+38;
  pcVar2 = (char *)**(undefined8 **)(param_2 + 0x58);
  if (pcVar2 != pcVar2 + (longlong)*(int *)(*(undefined8 **)(param_2 + 0x58) + 1) * 0x1c) {
    pcVar3 = pcVar2 + 0x18;
    do {
      if ((*(int *)(pcVar3 + -0xc) != 2) && (*pcVar3 != '\0')) {
        fVar7 = *(float *)(pcVar3 + -0x14) * *(float *)(param_2 + 0x40) +
                *(float *)(pcVar3 + -0x18) * *(float *)(param_2 + 0x3c);
        if (1.1920929e-07 <= ABS(fVar7)) {
          fVar4 = -(*(float *)(pcVar3 + -0x14) * *(float *)(param_2 + 0xc) +
                    *(float *)(pcVar3 + -0x18) * *(float *)(param_2 + 8) +
                   *(float *)(pcVar3 + -0x10)) / fVar7;
          if (0.0 <= fVar7) {
            if (fVar6 <= fVar4) {
              fVar6 = fVar4;
            }
          }
          else if (fVar4 <= fVar5) {
            fVar5 = fVar4;
          }
        }
      }
      pcVar1 = pcVar3 + 4;
      pcVar3 = pcVar3 + 0x1c;
    } while (pcVar1 != pcVar2 + (longlong)*(int *)(*(undefined8 **)(param_2 + 0x58) + 1) * 0x1c);
  }
  fVar6 = fVar6 + *(float *)(param_1 + 0x18);
  fVar5 = fVar5 - *(float *)(param_1 + 0x18);
  if (fVar5 <= fVar6) {
    fVar6 = (fVar5 + fVar6) * 0.5;
  }
  else {
    if (0.0 < fVar6) {
      fVar5 = fVar6 * *(float *)(param_2 + 0x40);
      goto LAB_144ffde56;
    }
    fVar6 = fVar5;
    if (0.0 <= fVar5) {
      return;
    }
  }
  fVar5 = fVar6 * *(float *)(param_2 + 0x40);
LAB_144ffde56:
  fVar7 = *(float *)(param_2 + 0x3c);
  *(undefined1 *)(param_3 + 1) = 1;
  *(float *)(param_3 + 0x10) = fVar5;
  *(float *)(param_3 + 0xc) = fVar6 * fVar7;
  return;
}



// FUNCTION 144ffde80 FUN_144ffde80 body=5 status=ok
// SIG undefined FUN_144ffde80(void)

undefined8 FUN_144ffde80(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144ffde90 FUN_144ffde90 body=576 status=ok
// SIG undefined FUN_144ffde90(void)

/* WARNING: Removing unreachable block (ram,0x000144ffe049) */

undefined4 *
FUN_144ffde90(undefined8 param_1,undefined4 *param_2,undefined8 param_3,byte *param_4,
             undefined8 *param_5)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 local_res20 [8];
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  byte *local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong lStack_48;
  undefined8 local_40;
  ulonglong local_38;
  
  uVar7 = 0;
  uVar5 = 0;
  local_40 = 0;
  local_38 = 0;
  local_50 = 0;
  lStack_48 = 0;
  pbVar1 = param_4;
  while ((pbVar1 != (byte *)0x0 &&
         ((((*pbVar1 & 4) == 0 ||
           (plVar6 = (longlong *)FUN_144befea0(pbVar1,4), plVar6 == (longlong *)0x0)) ||
          (*plVar6 == 0))))) {
    pbVar1 = *(byte **)(pbVar1 + 8);
  }
  plVar6 = (longlong *)FUN_144befdb0(*(undefined8 *)(pbVar1 + 8));
  (**(code **)(*plVar6 + 0x48))(plVar6,local_res20,param_3,param_4,&local_50);
  if ((int)local_40 == 0) {
    *param_5 = local_50;
    param_5[1] = lStack_48;
    *(undefined4 *)((longlong)param_5 + 0x14) = local_40._4_4_;
    *(undefined4 *)(param_5 + 2) = 0;
    if ((local_38 & 1) != 0) {
      FUN_144be6b20(local_38 & 0xfffffffffffffffe);
    }
    if ((*(byte *)(param_5 + 3) & 1) != 0) {
      FUN_144be6b30(param_5[3] & 0xfffffffffffffffe);
    }
    param_5[3] = local_38;
    *param_2 = 0;
  }
  else {
    local_58 = uVar7;
    local_68 = param_3;
    local_60 = param_4;
    if (param_4 != (byte *)0x0) {
      local_58 = FUN_144befdb0(param_4);
    }
    if ((local_58 & 1) != 0) {
      FUN_144be6b20(local_58 & 0xfffffffffffffffe);
    }
    lVar3 = lStack_48;
    if (lStack_48 != 0) {
      local_78 = &local_68;
      local_70 = local_50;
      uVar7 = FUN_145001190(&local_78,lStack_48);
    }
    uVar2 = local_50;
    uVar4 = (int)local_40;
    uVar8 = uVar7 != 0 | uVar7;
    if ((ulonglong)(uVar7 != 0) != 0 || (uVar7 & 1) != 0) {
      FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
    }
    if (((lVar3 != 0) && (uVar5 = FUN_144beec90(lVar3), uVar7 == 0)) &&
       (uVar8 = FUN_144befdb0(lVar3), (uVar8 & 1) != 0)) {
      FUN_144be6b20(uVar8 & 0xfffffffffffffffe);
    }
    *param_5 = uVar2;
    param_5[1] = lVar3;
    *(undefined4 *)(param_5 + 2) = uVar4;
    *(undefined4 *)((longlong)param_5 + 0x14) = uVar5;
    uVar7 = param_5[3];
    param_5[3] = uVar8;
    if ((uVar7 & 1) != 0) {
      FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
    }
    *param_2 = 0;
    if ((local_58 & 1) != 0) {
      FUN_144be6b30(local_58 & 0xfffffffffffffffe);
    }
  }
  if ((local_38 & 1) != 0) {
    FUN_144be6b30(local_38 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144ffe0d0 FUN_144ffe0d0 body=646 status=ok
// SIG undefined FUN_144ffe0d0(void)

undefined4 *
FUN_144ffe0d0(longlong param_1,undefined4 *param_2,longlong param_3,undefined8 ****param_4,
             undefined8 *param_5)

{
  undefined8 ***pppuVar1;
  char cVar2;
  ulonglong *puVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined4 *puVar6;
  undefined8 ****ppppuVar7;
  undefined4 uVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  longlong *plVar11;
  byte bVar12;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined8 ***local_90;
  longlong local_88;
  undefined8 ***local_78;
  char local_70;
  undefined8 ***local_68 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  param_3 = (int)-(uint)*(ushort *)(param_1 + 0x18) + param_3;
  local_88 = param_3;
  puVar3 = (ulonglong *)FUN_144befe50(param_4,1);
  ppppuVar7 = (undefined8 ****)0x0;
  ppppuVar4 = ppppuVar7;
  if (puVar3 != (ulonglong *)0x0) {
    ppppuVar4 = (undefined8 ****)*puVar3;
  }
  uVar8 = 0;
  if ((int)((ulonglong)ppppuVar4 >> 8) != 0) {
    cVar2 = (**(code **)(param_1 + 0x10))(param_3,*param_5);
    if (cVar2 == '\0') {
      uVar8 = 0x80040200;
    }
    *param_2 = uVar8;
    return param_2;
  }
  local_78 = (undefined8 ***)0x0;
  local_70 = '\0';
  FUN_144f6ee60(&local_78);
  local_78 = param_4;
  FUN_144f6ef30(&local_78);
  local_58 = *param_5;
  local_50 = param_5[1];
  local_48 = *(undefined4 *)(param_5 + 2);
  local_44 = *(undefined4 *)((longlong)param_5 + 0x14);
  local_40 = param_5[3];
  if ((local_40 & 1) != 0) {
    FUN_144be6b20(local_40 & 0xfffffffffffffffe);
  }
  pppuVar1 = local_78;
  ppppuVar4 = ppppuVar7;
  if (local_70 != '\0') {
    if (local_70 == '\x01') {
      ppppuVar4 = local_68;
    }
    else if (local_70 == '\x02') {
      ppppuVar4 = (undefined8 ****)local_68[0];
    }
  }
  ppppuVar5 = ppppuVar7;
  if ((undefined8 ****)local_78 != (undefined8 ****)0x0) {
    ppppuVar5 = (undefined8 ****)FUN_144befdb0(local_78);
  }
  if (((ulonglong)ppppuVar5 & 1) != 0) {
    FUN_144be6b20((ulonglong)ppppuVar5 & 0xfffffffffffffffe);
  }
  local_90 = (undefined8 ****)0x0;
  ppppuVar9 = ppppuVar7;
  ppppuVar10 = ppppuVar7;
  bVar12 = 0;
  if ((((undefined8 ****)pppuVar1 != (undefined8 ****)0x0) &&
      (puVar6 = (undefined4 *)FUN_144bef800(pppuVar1,local_98), ((byte)*puVar6 & 0x1f) == 8)) &&
     (ppppuVar9 = (undefined8 ****)pppuVar1, ppppuVar10 = ppppuVar5, bVar12 = (byte)ppppuVar5,
     local_90 = ppppuVar4, ((ulonglong)ppppuVar5 & 1) != 0)) {
    FUN_144be6b20((ulonglong)ppppuVar5 & 0xfffffffffffffffe);
  }
  plVar11 = (longlong *)((ulonglong)ppppuVar10 & 0xfffffffffffffffe);
  (**(code **)(*plVar11 + 0x40))(plVar11,local_94,local_90,ppppuVar9,&local_58);
  if ((local_40 & 1) != 0) {
    FUN_144be6b30(local_40 & 0xfffffffffffffffe);
  }
  if ((bVar12 & 1) != 0) {
    FUN_144be6b30(plVar11);
  }
  if (((ulonglong)ppppuVar5 & 1) != 0) {
    FUN_144be6b30((ulonglong)ppppuVar5 & 0xfffffffffffffffe);
  }
  if (local_70 != '\0') {
    if (local_70 == '\x01') {
      ppppuVar4 = local_68;
      goto LAB_144ffe2df;
    }
    ppppuVar4 = (undefined8 ****)local_68[0];
    if (local_70 == '\x02') goto LAB_144ffe2df;
  }
  ppppuVar4 = ppppuVar7;
LAB_144ffe2df:
  if ((undefined8 ****)local_78 != (undefined8 ****)0x0) {
    ppppuVar7 = (undefined8 ****)FUN_144befdb0();
  }
  if (((ulonglong)ppppuVar7 & 1) != 0) {
    FUN_144be6b20((ulonglong)ppppuVar7 & 0xfffffffffffffffe);
  }
  cVar2 = (**(code **)(param_1 + 0x10))(local_88,ppppuVar4);
  if (cVar2 == '\0') {
    uVar8 = 0x80040200;
  }
  *param_2 = uVar8;
  if (((ulonglong)ppppuVar7 & 1) != 0) {
    FUN_144be6b30((ulonglong)ppppuVar7 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_78);
  return param_2;
}



// FUNCTION 144ffe360 FUN_144ffe360 body=505 status=ok
// SIG undefined FUN_144ffe360(void)

undefined4 *
FUN_144ffe360(longlong param_1,undefined4 *param_2,longlong param_3,byte *param_4,undefined4 param_5
             )

{
  ushort uVar1;
  byte *pbVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined4 uVar8;
  undefined1 local_res10 [8];
  longlong local_78;
  byte *local_70;
  undefined8 ***local_68;
  longlong local_58;
  char local_50;
  undefined8 ***local_48 [2];
  
  ppppuVar6 = (undefined8 ****)0x0;
  local_68 = ppppuVar6;
  local_78 = param_3;
  local_70 = param_4;
  if (param_4 != (byte *)0x0) {
    local_68 = (undefined8 ***)FUN_144befdb0(param_4);
  }
  if (((ulonglong)local_68 & 1) != 0) {
    FUN_144be6b20((ulonglong)local_68 & 0xfffffffffffffffe);
  }
  local_58 = 0;
  local_50 = '\0';
  FUN_144f6f130(&local_58,&local_78);
  pbVar2 = param_4;
  if (((ulonglong)local_68 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_68 & 0xfffffffffffffffe);
  }
  while ((pbVar2 != (byte *)0x0 &&
         ((((*pbVar2 & 4) == 0 ||
           (plVar4 = (longlong *)FUN_144befea0(pbVar2,4), plVar4 == (longlong *)0x0)) ||
          (*plVar4 == 0))))) {
    pbVar2 = *(byte **)(pbVar2 + 8);
  }
  plVar4 = (longlong *)FUN_144befdb0(*(undefined8 *)(pbVar2 + 8));
  ppppuVar7 = ppppuVar6;
  if (local_50 != '\0') {
    if (local_50 == '\x01') {
      ppppuVar7 = local_48;
    }
    else if (local_50 == '\x02') {
      ppppuVar7 = (undefined8 ****)local_48[0];
    }
  }
  ppppuVar5 = ppppuVar6;
  if (local_58 != 0) {
    ppppuVar5 = (undefined8 ****)FUN_144befdb0();
  }
  if (((ulonglong)ppppuVar5 & 1) != 0) {
    FUN_144be6b20((ulonglong)ppppuVar5 & 0xfffffffffffffffe);
  }
  (**(code **)(*plVar4 + 0x50))(plVar4,local_res10,ppppuVar7,param_4,param_5);
  if (((ulonglong)ppppuVar5 & 1) != 0) {
    FUN_144be6b30((ulonglong)ppppuVar5 & 0xfffffffffffffffe);
  }
  uVar1 = *(ushort *)(param_1 + 0x18);
  if (local_50 != '\0') {
    if (local_50 == '\x01') {
      ppppuVar7 = local_48;
      goto LAB_144ffe4df;
    }
    ppppuVar7 = (undefined8 ****)local_48[0];
    if (local_50 == '\x02') goto LAB_144ffe4df;
  }
  ppppuVar7 = ppppuVar6;
LAB_144ffe4df:
  if (local_58 != 0) {
    ppppuVar6 = (undefined8 ****)FUN_144befdb0();
  }
  if (((ulonglong)ppppuVar6 & 1) != 0) {
    FUN_144be6b20((ulonglong)ppppuVar6 & 0xfffffffffffffffe);
  }
  cVar3 = (**(code **)(param_1 + 0x10))((int)-(uint)uVar1 + param_3,ppppuVar7);
  uVar8 = 0;
  if (cVar3 == '\0') {
    uVar8 = 0x80040200;
  }
  *param_2 = uVar8;
  if (((ulonglong)ppppuVar6 & 1) != 0) {
    FUN_144be6b30((ulonglong)ppppuVar6 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_58);
  return param_2;
}



// FUNCTION 144ffe560 FUN_144ffe560 body=532 status=ok
// SIG undefined FUN_144ffe560(void)

undefined4 *
FUN_144ffe560(longlong param_1,undefined4 *param_2,longlong param_3,byte *param_4,undefined4 param_5
             ,undefined4 param_6,undefined8 param_7)

{
  ushort uVar1;
  byte *pbVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  undefined4 uVar8;
  undefined1 local_res10 [8];
  longlong local_78;
  byte *local_70;
  undefined8 ***local_68;
  longlong local_58;
  char local_50;
  undefined8 ***local_48 [2];
  
  ppppuVar6 = (undefined8 ****)0x0;
  local_68 = ppppuVar6;
  local_78 = param_3;
  local_70 = param_4;
  if (param_4 != (byte *)0x0) {
    local_68 = (undefined8 ***)FUN_144befdb0(param_4);
  }
  if (((ulonglong)local_68 & 1) != 0) {
    FUN_144be6b20((ulonglong)local_68 & 0xfffffffffffffffe);
  }
  local_58 = 0;
  local_50 = '\0';
  FUN_144f6f130(&local_58,&local_78);
  pbVar2 = param_4;
  if (((ulonglong)local_68 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_68 & 0xfffffffffffffffe);
  }
  while ((pbVar2 != (byte *)0x0 &&
         ((((*pbVar2 & 4) == 0 ||
           (plVar4 = (longlong *)FUN_144befea0(pbVar2,4), plVar4 == (longlong *)0x0)) ||
          (*plVar4 == 0))))) {
    pbVar2 = *(byte **)(pbVar2 + 8);
  }
  plVar4 = (longlong *)FUN_144befdb0(*(undefined8 *)(pbVar2 + 8));
  ppppuVar7 = ppppuVar6;
  if (local_50 != '\0') {
    if (local_50 == '\x01') {
      ppppuVar7 = local_48;
    }
    else if (local_50 == '\x02') {
      ppppuVar7 = (undefined8 ****)local_48[0];
    }
  }
  ppppuVar5 = ppppuVar6;
  if (local_58 != 0) {
    ppppuVar5 = (undefined8 ****)FUN_144befdb0();
  }
  if (((ulonglong)ppppuVar5 & 1) != 0) {
    FUN_144be6b20((ulonglong)ppppuVar5 & 0xfffffffffffffffe);
  }
  (**(code **)(*plVar4 + 0x58))(plVar4,local_res10,ppppuVar7,param_4,param_5,param_6,param_7);
  if (((ulonglong)ppppuVar5 & 1) != 0) {
    FUN_144be6b30((ulonglong)ppppuVar5 & 0xfffffffffffffffe);
  }
  uVar1 = *(ushort *)(param_1 + 0x18);
  if (local_50 != '\0') {
    if (local_50 == '\x01') {
      ppppuVar7 = local_48;
      goto LAB_144ffe6f7;
    }
    ppppuVar7 = (undefined8 ****)local_48[0];
    if (local_50 == '\x02') goto LAB_144ffe6f7;
  }
  ppppuVar7 = ppppuVar6;
LAB_144ffe6f7:
  if (local_58 != 0) {
    ppppuVar6 = (undefined8 ****)FUN_144befdb0();
  }
  if (((ulonglong)ppppuVar6 & 1) != 0) {
    FUN_144be6b20((ulonglong)ppppuVar6 & 0xfffffffffffffffe);
  }
  cVar3 = (**(code **)(param_1 + 0x10))((int)-(uint)uVar1 + param_3,ppppuVar7);
  uVar8 = 0;
  if (cVar3 == '\0') {
    uVar8 = 0x80040200;
  }
  *param_2 = uVar8;
  if (((ulonglong)ppppuVar6 & 1) != 0) {
    FUN_144be6b30((ulonglong)ppppuVar6 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_58);
  return param_2;
}



// FUNCTION 144ffe780 FUN_144ffe780 body=1 status=ok
// SIG undefined FUN_144ffe780(void)

void FUN_144ffe780(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144ffe790 FUN_144ffe790 body=88 status=ok
// SIG undefined FUN_144ffe790(void)

void FUN_144ffe790(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 local_res18 [16];
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  puVar2 = (undefined4 *)FUN_144bef800(uVar1,local_res18);
  uVar4 = 0;
  if (((byte)*puVar2 & 0x1f) == 8) {
    uVar4 = uVar1;
  }
  plVar3 = (longlong *)FUN_144befdb0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000144ffe7e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x68))(plVar3,param_2,uVar4);
  return;
}



// FUNCTION 144ffe7f0 FUN_144ffe7f0 body=1532 status=ok
// SIG undefined FUN_144ffe7f0(void)

undefined8 * FUN_144ffe7f0(ulonglong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined4 local_res8 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  ulonglong local_38;
  
  puVar4 = (undefined8 *)0x0;
  local_res8[0] = 0;
  puVar2 = (uint *)FUN_144bef800(param_2,local_res8);
  switch(*puVar2 & 0x1f) {
  default:
    FUN_144bfc170(0xfdbd9f9,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x1b,"Bad type visitor switch");
    return (undefined8 *)0x0;
  case 2:
    local_res18 = 0x20;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"ChildImpl");
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_144bf0690(&local_res20,param_2);
      uVar1 = *param_1;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      FUN_144be6ac0(puVar3);
      *puVar3 = _anon_A39280C8::ChildImpl<hkReflect::BoolType,_anon_A39280C8::RecordParentRef>::
                vftable;
      puVar3[2] = uVar1 | 1;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      puVar3[3] = local_res20;
      *(undefined4 *)(puVar3 + 1) = 0;
      FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
      puVar4 = puVar3;
    }
    break;
  case 3:
    local_res18 = 0x20;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"ChildImpl");
    }
    puVar5 = puVar4;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)0x2;
      FUN_144bf0690(&local_res20,param_2);
      uVar1 = *param_1;
      local_38 = uVar1 | 1;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      FUN_144be6ac0(puVar3);
      *puVar3 = _anon_A39280C8::ChildImpl<hkReflect::StringType,_anon_A39280C8::RecordParentRef>::
                vftable;
      puVar3[2] = local_38;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      puVar3[3] = local_res20;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar5 = puVar3;
    }
    bVar6 = puVar4 != (undefined8 *)0x0;
    puVar4 = puVar5;
    if ((bVar6) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
      return puVar5;
    }
    break;
  case 4:
    local_res18 = 0x20;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"ChildImpl");
    }
    puVar5 = puVar4;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000004;
      FUN_144bf0690(&local_res20,param_2);
      uVar1 = *param_1;
      local_38 = uVar1 | 1;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      FUN_144be6ac0(puVar3);
      *puVar3 = _anon_A39280C8::ChildImpl<hkReflect::IntType,_anon_A39280C8::RecordParentRef>::
                vftable;
      puVar3[2] = local_38;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      puVar3[3] = local_res20;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar5 = puVar3;
    }
    bVar6 = puVar4 != (undefined8 *)0x0;
    puVar4 = puVar5;
    if ((bVar6) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
      return puVar5;
    }
    break;
  case 5:
    local_res18 = 0x20;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"ChildImpl");
    }
    puVar5 = puVar4;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000008;
      FUN_144bf0690(&local_res20,param_2);
      uVar1 = *param_1;
      local_38 = uVar1 | 1;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      FUN_144be6ac0(puVar3);
      *puVar3 = _anon_A39280C8::ChildImpl<hkReflect::FloatType,_anon_A39280C8::RecordParentRef>::
                vftable;
      puVar3[2] = local_38;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      puVar3[3] = local_res20;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar5 = puVar3;
    }
    bVar6 = puVar4 != (undefined8 *)0x0;
    puVar4 = puVar5;
    if ((bVar6) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
      return puVar5;
    }
    break;
  case 6:
    local_res18 = 0x20;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"ChildImpl");
    }
    puVar5 = puVar4;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000010;
      FUN_144bf0690(&local_res20,param_2);
      uVar1 = *param_1;
      local_38 = uVar1 | 1;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      FUN_144be6ac0(puVar3);
      *puVar3 = _anon_A39280C8::ChildImpl<hkReflect::PointerType,_anon_A39280C8::RecordParentRef>::
                vftable;
      puVar3[2] = local_38;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      puVar3[3] = local_res20;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar5 = puVar3;
    }
    bVar6 = puVar4 != (undefined8 *)0x0;
    puVar4 = puVar5;
    if ((bVar6) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
      return puVar5;
    }
    break;
  case 7:
    local_res18 = 0x20;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"ChildImpl");
    }
    puVar5 = puVar4;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000020;
      FUN_144bf0690(&local_res20,param_2);
      uVar1 = *param_1;
      local_38 = uVar1 | 1;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      FUN_144be6ac0(puVar3);
      *puVar3 = _anon_A39280C8::ChildImpl<hkReflect::RecordType,_anon_A39280C8::RecordParentRef>::
                vftable;
      puVar3[2] = local_38;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      puVar3[3] = local_res20;
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = _anon_A39280C8::ChildRecordImpl<_anon_A39280C8::RecordParentRef>::vftable;
      puVar5 = puVar3;
    }
    bVar6 = puVar4 != (undefined8 *)0x0;
    puVar4 = puVar5;
    if ((bVar6) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
      return puVar5;
    }
    break;
  case 8:
    local_res18 = 0x20;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"ChildImpl");
    }
    puVar5 = puVar4;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)&DAT_00000040;
      FUN_144bf0690(&local_res20,param_2);
      uVar1 = *param_1;
      local_38 = uVar1 | 1;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      FUN_144be6ac0(puVar3);
      *puVar3 = _anon_A39280C8::ChildImpl<hkReflect::ArrayType,_anon_A39280C8::RecordParentRef>::
                vftable;
      puVar3[2] = local_38;
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
      puVar3[3] = local_res20;
      *(undefined4 *)(puVar3 + 1) = 0;
      *puVar3 = _anon_A39280C8::ChildArrayImpl<_anon_A39280C8::RecordParentRef>::vftable;
      puVar5 = puVar3;
    }
    bVar6 = puVar4 != (undefined8 *)0x0;
    puVar4 = puVar5;
    if ((bVar6) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
      return puVar5;
    }
  }
  return puVar4;
}



// FUNCTION 144ffee10 FUN_144ffee10 body=760 status=ok
// SIG undefined FUN_144ffee10(void)

int * FUN_144ffee10(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined1 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  int local_res8 [2];
  undefined1 local_res18 [16];
  longlong local_b8;
  char local_b0;
  undefined8 ******local_a8 [2];
  undefined8 ******local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 ******local_50;
  longlong lStack_48;
  ulonglong uStack_40;
  
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144bef220();
  }
  puVar3 = (undefined4 *)FUN_144bef800(uVar2,local_res8);
  local_78 = 0;
  if (((byte)*puVar3 & 0x1f) == 7) {
    local_78 = uVar2;
  }
  iVar1 = FUN_144bf0700(param_1 + 0x18);
  local_80 = -iVar1 + param_3;
  local_b8 = 0;
  local_b0 = '\0';
  local_70 = uVar8 & 0xfffffffffffffffe;
  FUN_144f6f130(&local_b8,&local_80);
  if (local_b0 == '\0') {
LAB_144ffeec0:
    local_98 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    local_98 = local_a8;
  }
  else {
    local_98 = local_a8[0];
    if (local_b0 != '\x02') goto LAB_144ffeec0;
  }
  local_90 = local_b8;
  if (local_b8 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_144befdb0();
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b20(local_88 & 0xfffffffffffffffe);
  }
  FUN_144bebf80(&local_98,&local_68,*(undefined8 *)(param_1 + 0x18));
  lStack_48 = 0;
  uStack_40 = 0;
  lVar6 = lStack_48;
  uVar8 = uStack_40;
  uVar2 = 0;
  if (((local_60 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_60,local_res8), lVar6 = lStack_48,
      uVar8 = uStack_40, ((byte)*puVar3 & 0x1f) == 2)) &&
     (lVar6 = local_60, uVar8 = local_58, uVar2 = local_68, (local_58 & 1) != 0)) {
    FUN_144be6b20(local_58 & 0xfffffffffffffffe);
    uVar8 = local_58;
  }
  if ((local_58 & 1) != 0) {
    FUN_144be6b30(local_58 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res8,uVar2,lVar6,param_5);
  lVar6 = local_b8;
  if (local_res8[0] < 0) {
    *param_2 = local_res8[0];
    goto joined_r0x000144fff0c1;
  }
  if (local_b0 == '\0') {
LAB_144ffefd4:
    pppppppuVar10 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar10 = local_a8;
  }
  else {
    pppppppuVar10 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_144ffefd4;
  }
  if (local_b8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_144befdb0(local_b8);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_50 = (undefined8 *******)0x0;
  lStack_48 = 0;
  uVar7 = 0;
  lVar9 = lStack_48;
  pppppppuVar11 = (undefined8 *******)local_50;
  if (((lVar6 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_res8), lVar9 = lStack_48,
      pppppppuVar11 = (undefined8 *******)local_50, ((byte)*puVar3 & 0x1f) == 7)) &&
     (uVar7 = uVar4, lVar9 = lVar6, pppppppuVar11 = pppppppuVar10, (uVar4 & 1) != 0)) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_98 = pppppppuVar11;
  local_90 = lVar9;
  local_88 = uVar7;
  if ((uVar7 & 1) != 0) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  piVar5 = (int *)FUN_144bed230(&local_80,local_res18,&local_98);
  iVar1 = *piVar5;
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
  }
  if (iVar1 < 0) {
    *param_2 = iVar1;
  }
  else {
    *param_2 = 0;
  }
joined_r0x000144fff0c1:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_b8);
  if ((local_70 & 1) != 0) {
    FUN_144be6b30(local_70 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144fff110 FUN_144fff110 body=80 status=ok
// SIG undefined FUN_144fff110(void)

undefined8
FUN_144fff110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 144fff160 FUN_144fff160 body=109 status=ok
// SIG undefined FUN_144fff160(void)

longlong FUN_144fff160(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144fff1d0 FUN_144fff1d0 body=785 status=ok
// SIG undefined FUN_144fff1d0(void)

int * FUN_144fff1d0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  undefined1 local_res8 [8];
  longlong local_b8;
  char local_b0;
  undefined8 ******local_a8 [2];
  undefined8 ******local_98;
  longlong local_90;
  ulonglong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  undefined8 ******local_40;
  longlong lStack_38;
  ulonglong uStack_30;
  
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144bef220();
  }
  puVar3 = (undefined4 *)FUN_144bef800(uVar2,local_res8);
  local_50 = 0;
  if (((byte)*puVar3 & 0x1f) == 7) {
    local_50 = uVar2;
  }
  iVar1 = FUN_144bf0700(param_1 + 0x18);
  local_58 = -iVar1 + param_3;
  local_b8 = 0;
  local_b0 = '\0';
  local_48 = uVar8 & 0xfffffffffffffffe;
  FUN_144f6f130(&local_b8,&local_58);
  if (local_b0 == '\0') {
LAB_144fff288:
    local_98 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    local_98 = local_a8;
  }
  else {
    local_98 = local_a8[0];
    if (local_b0 != '\x02') goto LAB_144fff288;
  }
  local_90 = local_b8;
  if (local_b8 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_144befdb0();
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b20(local_88 & 0xfffffffffffffffe);
  }
  FUN_144bebf80(&local_98,&local_78,*(undefined8 *)(param_1 + 0x18));
  uVar2 = 0;
  lStack_38 = 0;
  uStack_30 = 0;
  lVar6 = lStack_38;
  uVar8 = uStack_30;
  if ((CONCAT44(uStack_6c,uStack_70) != 0) &&
     (puVar3 = (undefined4 *)FUN_144bef800(CONCAT44(uStack_6c,uStack_70),local_res8),
     lVar6 = lStack_38, uVar8 = uStack_30, ((byte)*puVar3 & 0x1f) == 4)) {
    uVar2 = CONCAT44(uStack_74,local_78);
    lVar6 = CONCAT44(uStack_6c,uStack_70);
    uVar8 = local_68;
    if ((local_68 & 1) != 0) {
      FUN_144be6b20(local_68 & 0xfffffffffffffffe);
      uVar8 = local_68;
    }
  }
  if ((local_68 & 1) != 0) {
    FUN_144be6b30(local_68 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  puVar3 = (undefined4 *)CONCAT44(param_5._4_4_,(int)param_5);
  local_78 = *puVar3;
  uStack_74 = puVar3[1];
  uStack_70 = puVar3[2];
  uStack_6c = puVar3[3];
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),&param_5,uVar2,lVar6,&local_78);
  lVar6 = local_b8;
  if ((int)param_5 < 0) {
    *param_2 = (int)param_5;
    goto joined_r0x000144fff494;
  }
  if (local_b0 == '\0') {
LAB_144fff3a7:
    pppppppuVar10 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar10 = local_a8;
  }
  else {
    pppppppuVar10 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_144fff3a7;
  }
  if (local_b8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_144befdb0(local_b8);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_40 = (undefined8 *******)0x0;
  lStack_38 = 0;
  uVar7 = 0;
  lVar9 = lStack_38;
  pppppppuVar11 = (undefined8 *******)local_40;
  if (((lVar6 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(lVar6,&param_5), lVar9 = lStack_38,
      pppppppuVar11 = (undefined8 *******)local_40, ((byte)*puVar3 & 0x1f) == 7)) &&
     (uVar7 = uVar4, lVar9 = lVar6, pppppppuVar11 = pppppppuVar10, (uVar4 & 1) != 0)) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_98 = pppppppuVar11;
  local_90 = lVar9;
  local_88 = uVar7;
  if ((uVar7 & 1) != 0) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  piVar5 = (int *)FUN_144bed230(&local_58,local_res8,&local_98);
  iVar1 = *piVar5;
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
  }
  if (iVar1 < 0) {
    *param_2 = iVar1;
  }
  else {
    *param_2 = 0;
  }
joined_r0x000144fff494:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_b8);
  if ((local_48 & 1) != 0) {
    FUN_144be6b30(local_48 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144fff4f0 FUN_144fff4f0 body=80 status=ok
// SIG undefined FUN_144fff4f0(void)

undefined8
FUN_144fff4f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 144fff540 FUN_144fff540 body=109 status=ok
// SIG undefined FUN_144fff540(void)

longlong FUN_144fff540(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144fff5b0 FUN_144fff5b0 body=762 status=ok
// SIG undefined FUN_144fff5b0(void)

int * FUN_144fff5b0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  int local_res8 [2];
  undefined1 local_res18 [16];
  longlong local_b8;
  char local_b0;
  undefined8 ******local_a8 [2];
  undefined8 ******local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 ******local_50;
  longlong lStack_48;
  ulonglong uStack_40;
  
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144bef220();
  }
  puVar3 = (undefined4 *)FUN_144bef800(uVar2,local_res8);
  local_78 = 0;
  if (((byte)*puVar3 & 0x1f) == 7) {
    local_78 = uVar2;
  }
  iVar1 = FUN_144bf0700(param_1 + 0x18);
  local_80 = -iVar1 + param_3;
  local_b8 = 0;
  local_b0 = '\0';
  local_70 = uVar8 & 0xfffffffffffffffe;
  FUN_144f6f130(&local_b8,&local_80);
  if (local_b0 == '\0') {
LAB_144fff660:
    local_98 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    local_98 = local_a8;
  }
  else {
    local_98 = local_a8[0];
    if (local_b0 != '\x02') goto LAB_144fff660;
  }
  local_90 = local_b8;
  if (local_b8 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_144befdb0();
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b20(local_88 & 0xfffffffffffffffe);
  }
  FUN_144bebf80(&local_98,&local_68,*(undefined8 *)(param_1 + 0x18));
  lStack_48 = 0;
  uStack_40 = 0;
  lVar6 = lStack_48;
  uVar8 = uStack_40;
  uVar2 = 0;
  if (((local_60 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_60,local_res8), lVar6 = lStack_48,
      uVar8 = uStack_40, ((byte)*puVar3 & 0x1f) == 5)) &&
     (lVar6 = local_60, uVar8 = local_58, uVar2 = local_68, (local_58 & 1) != 0)) {
    FUN_144be6b20(local_58 & 0xfffffffffffffffe);
    uVar8 = local_58;
  }
  if ((local_58 & 1) != 0) {
    FUN_144be6b30(local_58 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res8,uVar2,lVar6,param_5);
  lVar6 = local_b8;
  if (local_res8[0] < 0) {
    *param_2 = local_res8[0];
    goto joined_r0x000144fff863;
  }
  if (local_b0 == '\0') {
LAB_144fff776:
    pppppppuVar10 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar10 = local_a8;
  }
  else {
    pppppppuVar10 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_144fff776;
  }
  if (local_b8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_144befdb0(local_b8);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_50 = (undefined8 *******)0x0;
  lStack_48 = 0;
  uVar7 = 0;
  lVar9 = lStack_48;
  pppppppuVar11 = (undefined8 *******)local_50;
  if (((lVar6 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_res8), lVar9 = lStack_48,
      pppppppuVar11 = (undefined8 *******)local_50, ((byte)*puVar3 & 0x1f) == 7)) &&
     (uVar7 = uVar4, lVar9 = lVar6, pppppppuVar11 = pppppppuVar10, (uVar4 & 1) != 0)) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_98 = pppppppuVar11;
  local_90 = lVar9;
  local_88 = uVar7;
  if ((uVar7 & 1) != 0) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  piVar5 = (int *)FUN_144bed230(&local_80,local_res18,&local_98);
  iVar1 = *piVar5;
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
  }
  if (iVar1 < 0) {
    *param_2 = iVar1;
  }
  else {
    *param_2 = 0;
  }
joined_r0x000144fff863:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_b8);
  if ((local_70 & 1) != 0) {
    FUN_144be6b30(local_70 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144fff8b0 FUN_144fff8b0 body=80 status=ok
// SIG undefined FUN_144fff8b0(void)

undefined8
FUN_144fff8b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 144fff900 FUN_144fff900 body=109 status=ok
// SIG undefined FUN_144fff900(void)

longlong FUN_144fff900(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144fff970 FUN_144fff970 body=761 status=ok
// SIG undefined FUN_144fff970(void)

int * FUN_144fff970(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  int local_res8 [2];
  undefined1 local_res18 [16];
  longlong local_b8;
  char local_b0;
  undefined8 ******local_a8 [2];
  undefined8 ******local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 ******local_50;
  longlong lStack_48;
  ulonglong uStack_40;
  
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144bef220();
  }
  puVar3 = (undefined4 *)FUN_144bef800(uVar2,local_res8);
  local_78 = 0;
  if (((byte)*puVar3 & 0x1f) == 7) {
    local_78 = uVar2;
  }
  iVar1 = FUN_144bf0700(param_1 + 0x18);
  local_80 = -iVar1 + param_3;
  local_b8 = 0;
  local_b0 = '\0';
  local_70 = uVar8 & 0xfffffffffffffffe;
  FUN_144f6f130(&local_b8,&local_80);
  if (local_b0 == '\0') {
LAB_144fffa20:
    local_98 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    local_98 = local_a8;
  }
  else {
    local_98 = local_a8[0];
    if (local_b0 != '\x02') goto LAB_144fffa20;
  }
  local_90 = local_b8;
  if (local_b8 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_144befdb0();
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b20(local_88 & 0xfffffffffffffffe);
  }
  FUN_144bebf80(&local_98,&local_68,*(undefined8 *)(param_1 + 0x18));
  lStack_48 = 0;
  uStack_40 = 0;
  lVar6 = lStack_48;
  uVar8 = uStack_40;
  uVar2 = 0;
  if (((local_60 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_60,local_res8), lVar6 = lStack_48,
      uVar8 = uStack_40, ((byte)*puVar3 & 0x1f) == 3)) &&
     (lVar6 = local_60, uVar8 = local_58, uVar2 = local_68, (local_58 & 1) != 0)) {
    FUN_144be6b20(local_58 & 0xfffffffffffffffe);
    uVar8 = local_58;
  }
  if ((local_58 & 1) != 0) {
    FUN_144be6b30(local_58 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res8,uVar2,lVar6,param_5);
  lVar6 = local_b8;
  if (local_res8[0] < 0) {
    *param_2 = local_res8[0];
    goto joined_r0x000144fffc22;
  }
  if (local_b0 == '\0') {
LAB_144fffb35:
    pppppppuVar10 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar10 = local_a8;
  }
  else {
    pppppppuVar10 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_144fffb35;
  }
  if (local_b8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_144befdb0(local_b8);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_50 = (undefined8 *******)0x0;
  lStack_48 = 0;
  uVar7 = 0;
  lVar9 = lStack_48;
  pppppppuVar11 = (undefined8 *******)local_50;
  if (((lVar6 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_res8), lVar9 = lStack_48,
      pppppppuVar11 = (undefined8 *******)local_50, ((byte)*puVar3 & 0x1f) == 7)) &&
     (uVar7 = uVar4, lVar9 = lVar6, pppppppuVar11 = pppppppuVar10, (uVar4 & 1) != 0)) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_98 = pppppppuVar11;
  local_90 = lVar9;
  local_88 = uVar7;
  if ((uVar7 & 1) != 0) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  piVar5 = (int *)FUN_144bed230(&local_80,local_res18,&local_98);
  iVar1 = *piVar5;
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
  }
  if (iVar1 < 0) {
    *param_2 = iVar1;
  }
  else {
    *param_2 = 0;
  }
joined_r0x000144fffc22:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_b8);
  if ((local_70 & 1) != 0) {
    FUN_144be6b30(local_70 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144fffc70 FUN_144fffc70 body=80 status=ok
// SIG undefined FUN_144fffc70(void)

undefined8
FUN_144fffc70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 144fffcc0 FUN_144fffcc0 body=109 status=ok
// SIG undefined FUN_144fffcc0(void)

longlong FUN_144fffcc0(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144fffd30 FUN_144fffd30 body=761 status=ok
// SIG undefined FUN_144fffd30(void)

int * FUN_144fffd30(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 *******pppppppuVar10;
  undefined8 *******pppppppuVar11;
  int local_res8 [2];
  undefined1 local_res18 [16];
  longlong local_b8;
  char local_b0;
  undefined8 ******local_a8 [2];
  undefined8 ******local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 ******local_50;
  longlong lStack_48;
  ulonglong uStack_40;
  
  uVar8 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144bef220();
  }
  puVar3 = (undefined4 *)FUN_144bef800(uVar2,local_res8);
  local_78 = 0;
  if (((byte)*puVar3 & 0x1f) == 7) {
    local_78 = uVar2;
  }
  iVar1 = FUN_144bf0700(param_1 + 0x18);
  local_80 = -iVar1 + param_3;
  local_b8 = 0;
  local_b0 = '\0';
  local_70 = uVar8 & 0xfffffffffffffffe;
  FUN_144f6f130(&local_b8,&local_80);
  if (local_b0 == '\0') {
LAB_144fffde0:
    local_98 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    local_98 = local_a8;
  }
  else {
    local_98 = local_a8[0];
    if (local_b0 != '\x02') goto LAB_144fffde0;
  }
  local_90 = local_b8;
  if (local_b8 == 0) {
    local_88 = 0;
  }
  else {
    local_88 = FUN_144befdb0();
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b20(local_88 & 0xfffffffffffffffe);
  }
  FUN_144bebf80(&local_98,&local_68,*(undefined8 *)(param_1 + 0x18));
  lStack_48 = 0;
  uStack_40 = 0;
  lVar6 = lStack_48;
  uVar8 = uStack_40;
  uVar2 = 0;
  if (((local_60 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_60,local_res8), lVar6 = lStack_48,
      uVar8 = uStack_40, ((byte)*puVar3 & 0x1f) == 6)) &&
     (lVar6 = local_60, uVar8 = local_58, uVar2 = local_68, (local_58 & 1) != 0)) {
    FUN_144be6b20(local_58 & 0xfffffffffffffffe);
    uVar8 = local_58;
  }
  if ((local_58 & 1) != 0) {
    FUN_144be6b30(local_58 & 0xfffffffffffffffe);
  }
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res8,uVar2,lVar6,param_5);
  lVar6 = local_b8;
  if (local_res8[0] < 0) {
    *param_2 = local_res8[0];
    goto joined_r0x000144ffffe2;
  }
  if (local_b0 == '\0') {
LAB_144fffef5:
    pppppppuVar10 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar10 = local_a8;
  }
  else {
    pppppppuVar10 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_144fffef5;
  }
  if (local_b8 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_144befdb0(local_b8);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_50 = (undefined8 *******)0x0;
  lStack_48 = 0;
  uVar7 = 0;
  lVar9 = lStack_48;
  pppppppuVar11 = (undefined8 *******)local_50;
  if (((lVar6 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_res8), lVar9 = lStack_48,
      pppppppuVar11 = (undefined8 *******)local_50, ((byte)*puVar3 & 0x1f) == 7)) &&
     (uVar7 = uVar4, lVar9 = lVar6, pppppppuVar11 = pppppppuVar10, (uVar4 & 1) != 0)) {
    FUN_144be6b20(uVar4 & 0xfffffffffffffffe);
  }
  local_98 = pppppppuVar11;
  local_90 = lVar9;
  local_88 = uVar7;
  if ((uVar7 & 1) != 0) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  piVar5 = (int *)FUN_144bed230(&local_80,local_res18,&local_98);
  iVar1 = *piVar5;
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
  }
  if (iVar1 < 0) {
    *param_2 = iVar1;
  }
  else {
    *param_2 = 0;
  }
joined_r0x000144ffffe2:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_b8);
  if ((local_70 & 1) != 0) {
    FUN_144be6b30(local_70 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145000030 FUN_145000030 body=80 status=ok
// SIG undefined FUN_145000030(void)

undefined8
FUN_145000030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 145000080 FUN_145000080 body=109 status=ok
// SIG undefined FUN_145000080(void)

longlong FUN_145000080(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1450000f0 FUN_1450000f0 body=755 status=ok
// SIG undefined FUN_1450000f0(void)

int * FUN_1450000f0(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  undefined8 ***local_c8;
  longlong lStack_c0;
  ulonglong local_b8;
  longlong local_a8;
  char local_a0;
  undefined8 ***local_98 [2];
  undefined8 ***local_88;
  longlong lStack_80;
  ulonglong local_78;
  undefined8 ***local_70;
  longlong local_68;
  undefined8 ***local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_144bef220();
  }
  puVar5 = (undefined4 *)FUN_144bef800(uVar4,local_res8);
  local_50 = 0;
  if (((byte)*puVar5 & 0x1f) == 7) {
    local_50 = uVar4;
  }
  iVar3 = FUN_144bf0700(param_1 + 0x18);
  local_58 = -iVar3 + param_3;
  ppppuVar8 = (undefined8 ****)0x0;
  local_a8 = 0;
  local_a0 = '\0';
  local_48 = uVar1 & 0xfffffffffffffffe;
  FUN_144f6f130(&local_a8,&local_58);
  local_70 = ppppuVar8;
  if (local_a0 != '\0') {
    if (local_a0 == '\x01') {
      local_70 = local_98;
    }
    else if (local_a0 == '\x02') {
      local_70 = local_98[0];
    }
  }
  local_68 = local_a8;
  local_60 = ppppuVar8;
  if (local_a8 != 0) {
    local_60 = (undefined8 ***)FUN_144befdb0();
  }
  if (((ulonglong)local_60 & 1) != 0) {
    FUN_144be6b20((ulonglong)local_60 & 0xfffffffffffffffe);
  }
  FUN_144bebf80(&local_70,&local_c8,*(undefined8 *)(param_1 + 0x18));
  local_78 = 0;
  local_88 = (undefined8 ****)0x0;
  lStack_80 = 0;
  uVar1 = local_78;
  if ((lStack_c0 != 0) &&
     (puVar5 = (undefined4 *)FUN_144bef800(lStack_c0,local_res8), uVar1 = local_78,
     ((byte)*puVar5 & 0x1f) == 7)) {
    local_88 = local_c8;
    lStack_80 = lStack_c0;
    if ((local_b8 & 1) != 0) {
      FUN_144be6b20(local_b8 & 0xfffffffffffffffe);
    }
    uVar1 = local_b8;
    if ((local_78 & 1) != 0) {
      FUN_144be6b30(local_78 & 0xfffffffffffffffe);
      uVar1 = local_b8;
    }
  }
  local_78 = uVar1;
  if ((local_b8 & 1) != 0) {
    FUN_144be6b30(local_b8 & 0xfffffffffffffffe);
  }
  if (((ulonglong)local_60 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_60 & 0xfffffffffffffffe);
  }
  piVar6 = (int *)FUN_144bed230(&local_88,local_res8,param_5);
  lVar2 = local_a8;
  if (*piVar6 < 0) {
    *param_2 = *piVar6;
  }
  else {
    ppppuVar10 = ppppuVar8;
    if (local_a0 != '\0') {
      if (local_a0 == '\x01') {
        ppppuVar10 = local_98;
      }
      else if (local_a0 == '\x02') {
        ppppuVar10 = (undefined8 ****)local_98[0];
      }
    }
    ppppuVar7 = ppppuVar8;
    if (local_a8 != 0) {
      ppppuVar7 = (undefined8 ****)FUN_144befdb0(local_a8);
    }
    if (((ulonglong)ppppuVar7 & 1) != 0) {
      FUN_144be6b20((ulonglong)ppppuVar7 & 0xfffffffffffffffe);
    }
    local_c8 = (undefined8 ****)0x0;
    lStack_c0 = 0;
    lVar9 = lStack_c0;
    ppppuVar11 = (undefined8 ****)local_c8;
    if (((lVar2 != 0) &&
        (puVar5 = (undefined4 *)FUN_144bef800(lVar2,local_res8), lVar9 = lStack_c0,
        ppppuVar11 = (undefined8 ****)local_c8, ((byte)*puVar5 & 0x1f) == 7)) &&
       (ppppuVar8 = ppppuVar7, lVar9 = lVar2, ppppuVar11 = ppppuVar10,
       ((ulonglong)ppppuVar7 & 1) != 0)) {
      FUN_144be6b20((ulonglong)ppppuVar7 & 0xfffffffffffffffe);
    }
    local_70 = ppppuVar11;
    local_68 = lVar9;
    local_60 = ppppuVar8;
    if (((ulonglong)ppppuVar8 & 1) != 0) {
      FUN_144be6b20((ulonglong)ppppuVar8 & 0xfffffffffffffffe);
    }
    piVar6 = (int *)FUN_144bed230(&local_58,local_res18,&local_70);
    iVar3 = *piVar6;
    if (((ulonglong)local_60 & 1) != 0) {
      FUN_144be6b30((ulonglong)local_60 & 0xfffffffffffffffe);
    }
    if (((ulonglong)ppppuVar8 & 1) != 0) {
      FUN_144be6b30((ulonglong)ppppuVar8 & 0xfffffffffffffffe);
    }
    if (((ulonglong)ppppuVar7 & 1) != 0) {
      FUN_144be6b30((ulonglong)ppppuVar7 & 0xfffffffffffffffe);
    }
    if (iVar3 < 0) {
      *param_2 = iVar3;
    }
    else {
      *param_2 = 0;
    }
  }
  if ((local_78 & 1) != 0) {
    FUN_144be6b30(local_78 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_a8);
  if ((local_48 & 1) != 0) {
    FUN_144be6b30(local_48 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1450003f0 FUN_1450003f0 body=80 status=ok
// SIG undefined FUN_1450003f0(void)

undefined8
FUN_1450003f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 145000440 FUN_145000440 body=109 status=ok
// SIG undefined FUN_145000440(void)

longlong FUN_145000440(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1450004b0 FUN_1450004b0 body=27 status=ok
// SIG undefined FUN_1450004b0(void)

void FUN_1450004b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_144ffe7f0(local_res8,param_3);
  return;
}



// FUNCTION 1450004d0 FUN_1450004d0 body=109 status=ok
// SIG undefined FUN_1450004d0(void)

longlong FUN_1450004d0(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145000540 FUN_145000540 body=846 status=ok
// SIG undefined FUN_145000540(void)

int * FUN_145000540(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  undefined1 local_res8 [8];
  undefined8 ******local_b8;
  longlong lStack_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  longlong local_98;
  char local_90;
  undefined8 ******local_88 [2];
  undefined8 ******local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144bef220();
  }
  puVar4 = (undefined4 *)FUN_144bef800(uVar3,local_res8);
  local_58 = 0;
  if (((byte)*puVar4 & 0x1f) == 7) {
    local_58 = uVar3;
  }
  iVar2 = FUN_144bf0700(param_1 + 0x18);
  local_60 = -iVar2 + param_3;
  local_98 = 0;
  local_90 = '\0';
  local_50 = uVar9 & 0xfffffffffffffffe;
  FUN_144f6f130(&local_98,&local_60);
  if (local_90 == '\0') {
LAB_1450005f8:
    local_78 = (undefined8 *******)0x0;
  }
  else if (local_90 == '\x01') {
    local_78 = local_88;
  }
  else {
    local_78 = local_88[0];
    if (local_90 != '\x02') goto LAB_1450005f8;
  }
  local_70 = local_98;
  if (local_98 == 0) {
    local_68 = 0;
  }
  else {
    local_68 = FUN_144befdb0();
  }
  if ((local_68 & 1) != 0) {
    FUN_144be6b20(local_68 & 0xfffffffffffffffe);
  }
  FUN_144bebf80(&local_78,&local_48,*(undefined8 *)(param_1 + 0x18));
  lStack_b0 = 0;
  uStack_a8 = 0;
  lVar7 = lStack_b0;
  uVar9 = uStack_a8;
  uVar3 = 0;
  if (((local_40 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(local_40,local_res8), lVar7 = lStack_b0,
      uVar9 = uStack_a8, ((byte)*puVar4 & 0x1f) == 8)) &&
     (lVar7 = local_40, uVar9 = local_38, uVar3 = local_48, (local_38 & 1) != 0)) {
    FUN_144be6b20(local_38 & 0xfffffffffffffffe);
    uVar9 = local_38;
  }
  if ((local_38 & 1) != 0) {
    FUN_144be6b30(local_38 & 0xfffffffffffffffe);
  }
  if ((local_68 & 1) != 0) {
    FUN_144be6b30(local_68 & 0xfffffffffffffffe);
  }
  plVar1 = (longlong *)CONCAT44(param_5._4_4_,(int)param_5);
  local_b8 = (undefined8 ******)*plVar1;
  lStack_b0 = plVar1[1];
  uStack_a8 = plVar1[2];
  local_a0 = plVar1[3];
  if ((local_a0 & 1) != 0) {
    FUN_144be6b20(local_a0 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(uVar9 & 0xfffffffffffffffe),&param_5,uVar3,lVar7,&local_b8);
  if ((local_a0 & 1) != 0) {
    FUN_144be6b30(local_a0 & 0xfffffffffffffffe);
  }
  lVar7 = local_98;
  if ((int)param_5 < 0) {
    *param_2 = (int)param_5;
    goto joined_r0x000145000841;
  }
  if (local_90 == '\0') {
LAB_145000754:
    pppppppuVar11 = (undefined8 *******)0x0;
  }
  else if (local_90 == '\x01') {
    pppppppuVar11 = local_88;
  }
  else {
    pppppppuVar11 = (undefined8 *******)local_88[0];
    if (local_90 != '\x02') goto LAB_145000754;
  }
  if (local_98 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144befdb0(local_98);
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
  }
  local_b8 = (undefined8 *******)0x0;
  lStack_b0 = 0;
  uVar8 = 0;
  lVar10 = lStack_b0;
  pppppppuVar12 = (undefined8 *******)local_b8;
  if (((lVar7 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(lVar7,&param_5), lVar10 = lStack_b0,
      pppppppuVar12 = (undefined8 *******)local_b8, ((byte)*puVar4 & 0x1f) == 7)) &&
     (uVar8 = uVar5, lVar10 = lVar7, pppppppuVar12 = pppppppuVar11, (uVar5 & 1) != 0)) {
    FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
  }
  local_78 = pppppppuVar12;
  local_70 = lVar10;
  local_68 = uVar8;
  if ((uVar8 & 1) != 0) {
    FUN_144be6b20(uVar8 & 0xfffffffffffffffe);
  }
  piVar6 = (int *)FUN_144bed230(&local_60,local_res8,&local_78);
  iVar2 = *piVar6;
  if ((local_68 & 1) != 0) {
    FUN_144be6b30(local_68 & 0xfffffffffffffffe);
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
  }
  if (iVar2 < 0) {
    *param_2 = iVar2;
  }
  else {
    *param_2 = 0;
  }
joined_r0x000145000841:
  if ((uVar9 & 1) != 0) {
    FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_98);
  if ((local_50 & 1) != 0) {
    FUN_144be6b30(local_50 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145000890 FUN_145000890 body=80 status=ok
// SIG undefined FUN_145000890(void)

undefined8
FUN_145000890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1450008e0 FUN_1450008e0 body=109 status=ok
// SIG undefined FUN_1450008e0(void)

longlong FUN_1450008e0(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145000950 FUN_145000950 body=447 status=ok
// SIG undefined FUN_145000950(void)

int * FUN_145000950(ulonglong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_78 [8];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  plVar5 = (longlong *)FUN_144befdb0(param_4);
  uVar7 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  piVar6 = (int *)(**(code **)(*plVar5 + 0x48))(plVar5,local_78,param_3,param_4,&local_48);
  if (*piVar6 < 0) {
    *param_2 = *piVar6;
  }
  else {
    local_50 = param_1 | 1;
    local_60 = param_3;
    local_58 = param_4;
    FUN_144be6b20(param_1 & 0xfffffffffffffffe);
    lVar2 = lStack_40;
    if (lStack_40 != 0) {
      local_70 = &local_60;
      local_68 = local_48;
      uVar7 = FUN_145001190(&local_70,lStack_40);
    }
    uVar1 = local_48;
    uVar3 = (undefined4)local_38;
    uVar8 = (ulonglong)(lVar2 != 0);
    uVar4 = 0;
    uVar9 = uVar8 | uVar7;
    if (uVar8 != 0 || (uVar7 & 1) != 0) {
      FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
    }
    if ((lVar2 != 0) && (uVar4 = FUN_144beec90(lVar2), uVar7 == 0)) {
      uVar9 = FUN_144befdb0(lVar2);
      if ((uVar9 & 1) != 0) {
        FUN_144be6b20(uVar9 & 0xfffffffffffffffe);
      }
      if (uVar8 != 0) {
        FUN_144be6b30(0);
      }
    }
    *param_5 = uVar1;
    param_5[1] = lVar2;
    *(undefined4 *)(param_5 + 2) = uVar3;
    *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
    uVar7 = param_5[3];
    param_5[3] = uVar9;
    if ((uVar7 & 1) != 0) {
      FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
    }
    *param_2 = 0;
    if ((local_50 & 1) != 0) {
      FUN_144be6b30(local_50 & 0xfffffffffffffffe);
    }
  }
  if ((local_30 & 1) != 0) {
    FUN_144be6b30(local_30 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145000b10 FUN_145000b10 body=745 status=ok
// SIG undefined FUN_145000b10(void)

int * FUN_145000b10(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined4 param_5)

{
  int iVar1;
  undefined8 *******pppppppuVar2;
  undefined4 *puVar3;
  undefined8 *******pppppppuVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  undefined8 ******local_c8;
  longlong local_c0;
  undefined8 ******local_b8;
  longlong local_a8;
  char local_a0;
  undefined8 ******local_98 [2];
  undefined8 ******local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 ******local_68;
  ulonglong local_60;
  undefined8 ******local_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  pppppppuVar7 = (undefined8 *******)0x0;
  pppppppuVar2 = pppppppuVar7;
  local_res18[0] = param_3;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    pppppppuVar2 = (undefined8 *******)FUN_144bef220();
  }
  puVar3 = (undefined4 *)FUN_144bef800(pppppppuVar2,local_res8);
  local_68 = pppppppuVar7;
  if (((byte)*puVar3 & 0x1f) == 7) {
    local_68 = pppppppuVar2;
  }
  iVar1 = FUN_144bf0700(param_1 + 0x18);
  local_70 = -iVar1 + local_res18[0];
  local_a8 = 0;
  local_a0 = '\0';
  local_60 = uVar9 & 0xfffffffffffffffe;
  FUN_144f6f130(&local_a8,&local_70);
  local_c8 = pppppppuVar7;
  if (local_a0 != '\0') {
    if (local_a0 == '\x01') {
      local_c8 = local_98;
    }
    else if (local_a0 == '\x02') {
      local_c8 = local_98[0];
    }
  }
  local_c0 = local_a8;
  local_b8 = pppppppuVar7;
  if (local_a8 != 0) {
    local_b8 = (undefined8 ******)FUN_144befdb0();
  }
  if (((ulonglong)local_b8 & 1) != 0) {
    FUN_144be6b20((ulonglong)local_b8 & 0xfffffffffffffffe);
  }
  FUN_144bebf80(&local_c8,&local_88,*(undefined8 *)(param_1 + 0x18));
  lStack_50 = 0;
  uStack_48 = 0;
  lVar5 = lStack_50;
  pppppppuVar2 = pppppppuVar7;
  uVar9 = uStack_48;
  if (((local_80 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_80,local_res18), lVar5 = lStack_50,
      uVar9 = uStack_48, ((byte)*puVar3 & 0x1f) == 8)) &&
     (lVar5 = local_80, pppppppuVar2 = (undefined8 *******)local_88, uVar9 = local_78,
     (local_78 & 1) != 0)) {
    FUN_144be6b20(local_78 & 0xfffffffffffffffe);
    uVar9 = local_78;
  }
  if ((local_78 & 1) != 0) {
    FUN_144be6b30(local_78 & 0xfffffffffffffffe);
  }
  if (((ulonglong)local_b8 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_b8 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x50))
            ((longlong *)(uVar9 & 0xfffffffffffffffe),local_res18,pppppppuVar2,lVar5,param_5);
  lVar5 = local_a8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
  }
  else {
    pppppppuVar2 = pppppppuVar7;
    if (local_a0 != '\0') {
      if (local_a0 == '\x01') {
        pppppppuVar2 = local_98;
      }
      else if (local_a0 == '\x02') {
        pppppppuVar2 = (undefined8 *******)local_98[0];
      }
    }
    pppppppuVar4 = pppppppuVar7;
    if (local_a8 != 0) {
      pppppppuVar4 = (undefined8 *******)FUN_144befdb0(local_a8);
    }
    if (((ulonglong)pppppppuVar4 & 1) != 0) {
      FUN_144be6b20((ulonglong)pppppppuVar4 & 0xfffffffffffffffe);
    }
    local_58 = (undefined8 *******)0x0;
    lStack_50 = 0;
    lVar6 = lStack_50;
    pppppppuVar8 = (undefined8 *******)local_58;
    if (((lVar5 != 0) &&
        (puVar3 = (undefined4 *)FUN_144bef800(lVar5,local_res18), lVar6 = lStack_50,
        pppppppuVar8 = (undefined8 *******)local_58, ((byte)*puVar3 & 0x1f) == 7)) &&
       (lVar6 = lVar5, pppppppuVar7 = pppppppuVar4, pppppppuVar8 = pppppppuVar2,
       ((ulonglong)pppppppuVar4 & 1) != 0)) {
      FUN_144be6b20((ulonglong)pppppppuVar4 & 0xfffffffffffffffe);
    }
    local_c8 = pppppppuVar8;
    local_c0 = lVar6;
    local_b8 = pppppppuVar7;
    if (((ulonglong)pppppppuVar7 & 1) != 0) {
      FUN_144be6b20((ulonglong)pppppppuVar7 & 0xfffffffffffffffe);
    }
    FUN_144bed230(&local_70,param_2,&local_c8);
    if (((ulonglong)local_b8 & 1) != 0) {
      FUN_144be6b30((ulonglong)local_b8 & 0xfffffffffffffffe);
    }
    if (((ulonglong)pppppppuVar7 & 1) != 0) {
      FUN_144be6b30((ulonglong)pppppppuVar7 & 0xfffffffffffffffe);
    }
    if (((ulonglong)pppppppuVar4 & 1) != 0) {
      FUN_144be6b30((ulonglong)pppppppuVar4 & 0xfffffffffffffffe);
    }
  }
  if ((uVar9 & 1) != 0) {
    FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_a8);
  if ((local_60 & 1) != 0) {
    FUN_144be6b30(local_60 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145000e00 FUN_145000e00 body=765 status=ok
// SIG undefined FUN_145000e00(void)

int * FUN_145000e00(longlong param_1,int *param_2,longlong param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *******pppppppuVar2;
  undefined4 *puVar3;
  undefined8 *******pppppppuVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *******pppppppuVar7;
  undefined8 *******pppppppuVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  longlong local_res18 [2];
  undefined8 ******local_c8;
  longlong local_c0;
  undefined8 ******local_b8;
  longlong local_a8;
  char local_a0;
  undefined8 ******local_98 [2];
  undefined8 ******local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  undefined8 ******local_68;
  ulonglong local_60;
  undefined8 ******local_58;
  longlong lStack_50;
  ulonglong uStack_48;
  
  uVar9 = *(ulonglong *)(param_1 + 0x10);
  pppppppuVar7 = (undefined8 *******)0x0;
  pppppppuVar2 = pppppppuVar7;
  local_res18[0] = param_3;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    pppppppuVar2 = (undefined8 *******)FUN_144bef220();
  }
  puVar3 = (undefined4 *)FUN_144bef800(pppppppuVar2,local_res8);
  local_68 = pppppppuVar7;
  if (((byte)*puVar3 & 0x1f) == 7) {
    local_68 = pppppppuVar2;
  }
  iVar1 = FUN_144bf0700(param_1 + 0x18);
  local_70 = -iVar1 + local_res18[0];
  local_a8 = 0;
  local_a0 = '\0';
  local_60 = uVar9 & 0xfffffffffffffffe;
  FUN_144f6f130(&local_a8,&local_70);
  local_c8 = pppppppuVar7;
  if (local_a0 != '\0') {
    if (local_a0 == '\x01') {
      local_c8 = local_98;
    }
    else if (local_a0 == '\x02') {
      local_c8 = local_98[0];
    }
  }
  local_c0 = local_a8;
  local_b8 = pppppppuVar7;
  if (local_a8 != 0) {
    local_b8 = (undefined8 ******)FUN_144befdb0();
  }
  if (((ulonglong)local_b8 & 1) != 0) {
    FUN_144be6b20((ulonglong)local_b8 & 0xfffffffffffffffe);
  }
  FUN_144bebf80(&local_c8,&local_88,*(undefined8 *)(param_1 + 0x18));
  lStack_50 = 0;
  uStack_48 = 0;
  lVar5 = lStack_50;
  pppppppuVar2 = pppppppuVar7;
  uVar9 = uStack_48;
  if (((local_80 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_80,local_res18), lVar5 = lStack_50,
      uVar9 = uStack_48, ((byte)*puVar3 & 0x1f) == 8)) &&
     (lVar5 = local_80, pppppppuVar2 = (undefined8 *******)local_88, uVar9 = local_78,
     (local_78 & 1) != 0)) {
    FUN_144be6b20(local_78 & 0xfffffffffffffffe);
    uVar9 = local_78;
  }
  if ((local_78 & 1) != 0) {
    FUN_144be6b30(local_78 & 0xfffffffffffffffe);
  }
  if (((ulonglong)local_b8 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_b8 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x58))
            ((longlong *)(uVar9 & 0xfffffffffffffffe),local_res18,pppppppuVar2,lVar5,param_5,param_6
             ,param_7);
  lVar5 = local_a8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
  }
  else {
    pppppppuVar2 = pppppppuVar7;
    if (local_a0 != '\0') {
      if (local_a0 == '\x01') {
        pppppppuVar2 = local_98;
      }
      else if (local_a0 == '\x02') {
        pppppppuVar2 = (undefined8 *******)local_98[0];
      }
    }
    pppppppuVar4 = pppppppuVar7;
    if (local_a8 != 0) {
      pppppppuVar4 = (undefined8 *******)FUN_144befdb0(local_a8);
    }
    if (((ulonglong)pppppppuVar4 & 1) != 0) {
      FUN_144be6b20((ulonglong)pppppppuVar4 & 0xfffffffffffffffe);
    }
    local_58 = (undefined8 *******)0x0;
    lStack_50 = 0;
    lVar6 = lStack_50;
    pppppppuVar8 = (undefined8 *******)local_58;
    if (((lVar5 != 0) &&
        (puVar3 = (undefined4 *)FUN_144bef800(lVar5,local_res18), lVar6 = lStack_50,
        pppppppuVar8 = (undefined8 *******)local_58, ((byte)*puVar3 & 0x1f) == 7)) &&
       (lVar6 = lVar5, pppppppuVar7 = pppppppuVar4, pppppppuVar8 = pppppppuVar2,
       ((ulonglong)pppppppuVar4 & 1) != 0)) {
      FUN_144be6b20((ulonglong)pppppppuVar4 & 0xfffffffffffffffe);
    }
    local_c8 = pppppppuVar8;
    local_c0 = lVar6;
    local_b8 = pppppppuVar7;
    if (((ulonglong)pppppppuVar7 & 1) != 0) {
      FUN_144be6b20((ulonglong)pppppppuVar7 & 0xfffffffffffffffe);
    }
    FUN_144bed230(&local_70,param_2,&local_c8);
    if (((ulonglong)local_b8 & 1) != 0) {
      FUN_144be6b30((ulonglong)local_b8 & 0xfffffffffffffffe);
    }
    if (((ulonglong)pppppppuVar7 & 1) != 0) {
      FUN_144be6b30((ulonglong)pppppppuVar7 & 0xfffffffffffffffe);
    }
    if (((ulonglong)pppppppuVar4 & 1) != 0) {
      FUN_144be6b30((ulonglong)pppppppuVar4 & 0xfffffffffffffffe);
    }
  }
  if ((uVar9 & 1) != 0) {
    FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_a8);
  if ((local_60 & 1) != 0) {
    FUN_144be6b30(local_60 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145001100 FUN_145001100 body=1 status=ok
// SIG undefined FUN_145001100(void)

void FUN_145001100(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 145001110 FUN_145001110 body=1 status=ok
// SIG undefined FUN_145001110(void)

void FUN_145001110(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 145001120 FUN_145001120 body=109 status=ok
// SIG undefined FUN_145001120(void)

longlong FUN_145001120(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 145001190 FUN_145001190 body=1623 status=ok
// SIG undefined FUN_145001190(void)

undefined8 * FUN_145001190(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 local_res8 [2];
  undefined8 local_res18;
  ulonglong local_38;
  
  puVar7 = (undefined8 *)0x0;
  local_res8[0] = 0;
  puVar4 = (uint *)FUN_144bef800(param_2,local_res8);
  puVar6 = puVar7;
  switch(*puVar4 & 0x1f) {
  case 2:
    local_res18 = 0x30;
    puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar5,"ChildImpl");
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*param_1;
      lVar1 = param_1[1];
      local_38 = puVar6[2];
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      FUN_144be6ac0(puVar5);
      *puVar5 = _anon_A39280C8::ChildImpl<hkReflect::BoolType,_anon_A39280C8::ArrayParentRef>::
                vftable;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = local_38;
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      puVar5[5] = lVar1;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar7 = (undefined8 *)&DAT_00000001;
      puVar6 = puVar5;
    }
    if ((puVar7 != (undefined8 *)0x0) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
    }
    break;
  case 3:
    local_res18 = 0x30;
    puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar5,"ChildImpl");
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*param_1;
      lVar1 = param_1[1];
      local_38 = puVar6[2];
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      FUN_144be6ac0(puVar5);
      *puVar5 = _anon_A39280C8::ChildImpl<hkReflect::StringType,_anon_A39280C8::ArrayParentRef>::
                vftable;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = local_38;
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      puVar5[5] = lVar1;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar7 = (undefined8 *)0x2;
      puVar6 = puVar5;
    }
    if ((puVar7 != (undefined8 *)0x0) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
    }
    break;
  case 4:
    local_res18 = 0x30;
    puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar5,"ChildImpl");
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*param_1;
      lVar1 = param_1[1];
      local_38 = puVar6[2];
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      FUN_144be6ac0(puVar5);
      *puVar5 = _anon_A39280C8::ChildImpl<hkReflect::IntType,_anon_A39280C8::ArrayParentRef>::
                vftable;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = local_38;
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      puVar5[5] = lVar1;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar7 = (undefined8 *)&DAT_00000004;
      puVar6 = puVar5;
    }
    if ((puVar7 != (undefined8 *)0x0) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
    }
    break;
  case 5:
    local_res18 = 0x30;
    puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar5,"ChildImpl");
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*param_1;
      lVar1 = param_1[1];
      local_38 = puVar6[2];
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      FUN_144be6ac0(puVar5);
      *puVar5 = _anon_A39280C8::ChildImpl<hkReflect::FloatType,_anon_A39280C8::ArrayParentRef>::
                vftable;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = local_38;
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      puVar5[5] = lVar1;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar7 = (undefined8 *)&DAT_00000008;
      puVar6 = puVar5;
    }
    if ((puVar7 != (undefined8 *)0x0) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
    }
    break;
  case 6:
    local_res18 = 0x30;
    puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar5,"ChildImpl");
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*param_1;
      lVar1 = param_1[1];
      local_38 = puVar6[2];
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      FUN_144be6ac0(puVar5);
      *puVar5 = _anon_A39280C8::ChildImpl<hkReflect::PointerType,_anon_A39280C8::ArrayParentRef>::
                vftable;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = local_38;
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      puVar5[5] = lVar1;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar7 = (undefined8 *)&DAT_00000010;
      puVar6 = puVar5;
    }
    if ((puVar7 != (undefined8 *)0x0) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
    }
    break;
  case 7:
    local_res18 = 0x30;
    puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar5,"ChildImpl");
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*param_1;
      lVar1 = param_1[1];
      local_38 = puVar6[2];
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      FUN_144be6ac0(puVar5);
      *puVar5 = _anon_A39280C8::ChildImpl<hkReflect::RecordType,_anon_A39280C8::ArrayParentRef>::
                vftable;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = local_38;
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      puVar5[5] = lVar1;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar7 = (undefined8 *)&DAT_00000020;
      *puVar5 = _anon_A39280C8::ChildRecordImpl<_anon_A39280C8::ArrayParentRef>::vftable;
      puVar6 = puVar5;
    }
    if ((puVar7 != (undefined8 *)0x0) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
    }
    break;
  case 8:
    local_res18 = 0x30;
    puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar5,"ChildImpl");
    }
    if (puVar5 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)*param_1;
      lVar1 = param_1[1];
      local_38 = puVar6[2];
      uVar2 = *puVar6;
      uVar3 = puVar6[1];
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      FUN_144be6ac0(puVar5);
      *puVar5 = _anon_A39280C8::ChildImpl<hkReflect::ArrayType,_anon_A39280C8::ArrayParentRef>::
                vftable;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5[4] = local_38;
      if ((local_38 & 1) != 0) {
        FUN_144be6b20(local_38 & 0xfffffffffffffffe);
      }
      puVar5[5] = lVar1;
      *(undefined4 *)(puVar5 + 1) = 0;
      puVar7 = (undefined8 *)&DAT_00000040;
      *puVar5 = _anon_A39280C8::ChildArrayImpl<_anon_A39280C8::ArrayParentRef>::vftable;
      puVar6 = puVar5;
    }
    if ((puVar7 != (undefined8 *)0x0) && ((local_38 & 1) != 0)) {
      FUN_144be6b30(local_38 & 0xfffffffffffffffe);
    }
    break;
  default:
    FUN_144bfc170(0xfdbd9f9,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x1b,"Bad type visitor switch");
  case 0:
  case 1:
    puVar6 = (undefined8 *)0x0;
  }
  return puVar6;
}



// FUNCTION 145001810 FUN_145001810 body=979 status=ok
// SIG undefined FUN_145001810(void)

int * FUN_145001810(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                   undefined1 param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  undefined1 local_res8 [8];
  ulonglong local_res18 [2];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 ******local_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 ******local_70;
  longlong lStack_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong uStack_48;
  
  local_88 = *(undefined8 *)(param_1 + 0x10);
  local_80 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(ulonglong *)(param_1 + 0x20);
  local_res18[0] = param_3;
  if ((local_78 & 1) != 0) {
    FUN_144be6b20(local_78 & 0xfffffffffffffffe);
  }
  local_a8 = 0;
  local_a0 = '\0';
  FUN_144f6f130(&local_a8,&local_88);
  lVar1 = local_a8;
  if (local_a0 == '\0') {
LAB_145001894:
    pppppppuVar9 = (undefined8 *******)0x0;
  }
  else if (local_a0 == '\x01') {
    pppppppuVar9 = local_98;
  }
  else {
    pppppppuVar9 = (undefined8 *******)local_98[0];
    if (local_a0 != '\x02') goto LAB_145001894;
  }
  if (local_a8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(local_a8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_res18[0] = local_res18[0] - *(longlong *)(param_1 + 0x28);
  plVar5 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  (**(code **)(*plVar5 + 0x48))
            (plVar5,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             &local_c8);
  uVar10 = uStack_c0;
  if ((local_b0 & 1) != 0) {
    FUN_144be6b30(local_b0 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_144beec90(uVar10);
  local_60 = 0;
  local_d0 = (longlong *)((longlong)local_res18[0] / (longlong)iVar2);
  local_res18[0] = local_res18[0] & 0xffffffffffffff00;
  local_70 = (undefined8 *******)0x0;
  lStack_68 = 0;
  uVar7 = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined4 *)FUN_144bef800(lVar1,local_d8);
    local_res18[0] = local_res18[0] & 0xffffffffffffff00;
    if (((byte)*puVar4 & 0x1f) == 8) {
      lStack_68 = lVar1;
      local_70 = pppppppuVar9;
      if ((uVar3 & 1) != 0) {
        FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      }
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar3);
      uVar7 = uVar3;
      local_60 = uVar3;
    }
  }
  FUN_144bed0e0(&local_70,&local_58,(ulonglong)local_d0 & 0xffffffff);
  if ((local_res18[0] & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  uVar7 = uStack_48;
  lVar1 = local_50;
  lStack_68 = 0;
  local_60 = 0;
  lVar6 = lStack_68;
  uVar8 = local_60;
  uVar10 = 0;
  if (((local_50 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(local_50,local_res18), lVar6 = lStack_68,
      uVar8 = local_60, ((byte)*puVar4 & 0x1f) == 2)) &&
     (lVar6 = lVar1, uVar8 = uVar7, uVar10 = local_58, (uVar7 & 1) != 0)) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res18,uVar10,lVar6,param_5);
  lVar1 = local_a8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
    goto joined_r0x000145001b9c;
  }
  if (local_a0 == '\0') {
LAB_145001a81:
    pppppppuVar9 = (undefined8 *******)0x0;
  }
  else if (local_a0 == '\x01') {
    pppppppuVar9 = local_98;
  }
  else {
    pppppppuVar9 = (undefined8 *******)local_98[0];
    if (local_a0 != '\x02') goto LAB_145001a81;
  }
  if (local_a8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(local_a8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  uStack_48 = 0;
  lVar6 = local_50;
  uVar7 = uStack_48;
  pppppppuVar11 = (undefined8 *******)0x0;
  if (((lVar1 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(lVar1,local_res8), lVar6 = local_50, uVar7 = uStack_48,
      ((byte)*puVar4 & 0x1f) == 8)) &&
     (lVar6 = lVar1, uVar7 = uVar3, pppppppuVar11 = pppppppuVar9, (uVar3 & 1) != 0)) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_d0 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  (**(code **)(*local_d0 + 0x48))(local_d0,local_d8,pppppppuVar11,lVar6,&local_c8);
  (**(code **)(*(longlong *)(local_78 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(local_78 & 0xfffffffffffffffe),local_res18,local_88,local_80,&local_c8);
  if ((local_b0 & 1) != 0) {
    FUN_144be6b30(local_b0 & 0xfffffffffffffffe);
  }
  iVar2 = (int)local_res18[0];
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(local_d0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  if (iVar2 < 0) {
    *param_2 = iVar2;
  }
  else {
    *param_2 = 0;
  }
joined_r0x000145001b9c:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_a8);
  if ((local_78 & 1) != 0) {
    FUN_144be6b30(local_78 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145001bf0 FUN_145001bf0 body=80 status=ok
// SIG undefined FUN_145001bf0(void)

undefined8
FUN_145001bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 145001c40 FUN_145001c40 body=109 status=ok
// SIG undefined FUN_145001c40(void)

longlong FUN_145001c40(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145001cb0 FUN_145001cb0 body=996 status=ok
// SIG undefined FUN_145001cb0(void)

int * FUN_145001cb0(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  undefined1 local_res8 [8];
  ulonglong local_res18 [2];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  longlong local_c8;
  char local_c0;
  undefined8 ******local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 ******local_78;
  longlong lStack_70;
  ulonglong local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined1 local_48 [16];
  
  local_a8 = *(undefined8 *)(param_1 + 0x10);
  local_a0 = *(undefined8 *)(param_1 + 0x18);
  local_98 = *(ulonglong *)(param_1 + 0x20);
  local_res18[0] = param_3;
  if ((local_98 & 1) != 0) {
    FUN_144be6b20(local_98 & 0xfffffffffffffffe);
  }
  local_c8 = 0;
  local_c0 = '\0';
  FUN_144f6f130(&local_c8,&local_a8);
  lVar1 = local_c8;
  if (local_c0 == '\0') {
LAB_145001d34:
    pppppppuVar9 = (undefined8 *******)0x0;
  }
  else if (local_c0 == '\x01') {
    pppppppuVar9 = local_b8;
  }
  else {
    pppppppuVar9 = (undefined8 *******)local_b8[0];
    if (local_c0 != '\x02') goto LAB_145001d34;
  }
  if (local_c8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(local_c8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_res18[0] = local_res18[0] - *(longlong *)(param_1 + 0x28);
  plVar5 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  local_d8 = 0;
  local_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  (**(code **)(*plVar5 + 0x48))
            (plVar5,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             &local_e8);
  uVar10 = uStack_e0;
  if ((local_d0 & 1) != 0) {
    FUN_144be6b30(local_d0 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_144beec90(uVar10);
  local_68 = 0;
  local_88 = (longlong *)((longlong)local_res18[0] / (longlong)iVar2);
  local_res18[0] = local_res18[0] & 0xffffffffffffff00;
  local_78 = (undefined8 *******)0x0;
  lStack_70 = 0;
  uVar7 = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined4 *)FUN_144bef800(lVar1,local_48);
    local_res18[0] = local_res18[0] & 0xffffffffffffff00;
    if (((byte)*puVar4 & 0x1f) == 8) {
      lStack_70 = lVar1;
      local_78 = pppppppuVar9;
      if ((uVar3 & 1) != 0) {
        FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      }
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar3);
      uVar7 = uVar3;
      local_68 = uVar3;
    }
  }
  FUN_144bed0e0(&local_78,&local_60,(ulonglong)local_88 & 0xffffffff);
  if ((local_res18[0] & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  uVar7 = uStack_50;
  lVar1 = local_58;
  lStack_70 = 0;
  local_68 = 0;
  lVar6 = lStack_70;
  uVar8 = local_68;
  uVar10 = 0;
  if (((local_58 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(local_58,local_res18), lVar6 = lStack_70,
      uVar8 = local_68, ((byte)*puVar4 & 0x1f) == 4)) &&
     (lVar6 = lVar1, uVar8 = uVar7, uVar10 = local_60, (uVar7 & 1) != 0)) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  local_88 = (longlong *)*param_5;
  uStack_80 = *(undefined4 *)(param_5 + 1);
  uStack_7c = *(undefined4 *)((longlong)param_5 + 0xc);
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res18,uVar10,lVar6,&local_88);
  lVar1 = local_c8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
    goto joined_r0x00014500204d;
  }
  if (local_c0 == '\0') {
LAB_145001f2f:
    pppppppuVar9 = (undefined8 *******)0x0;
  }
  else if (local_c0 == '\x01') {
    pppppppuVar9 = local_b8;
  }
  else {
    pppppppuVar9 = (undefined8 *******)local_b8[0];
    if (local_c0 != '\x02') goto LAB_145001f2f;
  }
  if (local_c8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(local_c8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_58 = 0;
  uStack_50 = 0;
  lVar6 = local_58;
  uVar7 = uStack_50;
  pppppppuVar11 = (undefined8 *******)0x0;
  if (((lVar1 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(lVar1,&param_5), lVar6 = local_58, uVar7 = uStack_50,
      ((byte)*puVar4 & 0x1f) == 8)) &&
     (lVar6 = lVar1, uVar7 = uVar3, pppppppuVar11 = pppppppuVar9, (uVar3 & 1) != 0)) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_d8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d0 = 0;
  local_88 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  (**(code **)(*local_88 + 0x48))(local_88,local_res8,pppppppuVar11,lVar6,&local_e8);
  (**(code **)(*(longlong *)(local_98 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(local_98 & 0xfffffffffffffffe),local_res18,local_a8,local_a0,&local_e8);
  if ((local_d0 & 1) != 0) {
    FUN_144be6b30(local_d0 & 0xfffffffffffffffe);
  }
  iVar2 = (int)local_res18[0];
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(local_88);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  if (iVar2 < 0) {
    *param_2 = iVar2;
  }
  else {
    *param_2 = 0;
  }
joined_r0x00014500204d:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_c8);
  if ((local_98 & 1) != 0) {
    FUN_144be6b30(local_98 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1450020a0 FUN_1450020a0 body=80 status=ok
// SIG undefined FUN_1450020a0(void)

undefined8
FUN_1450020a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 1450020f0 FUN_1450020f0 body=109 status=ok
// SIG undefined FUN_1450020f0(void)

longlong FUN_1450020f0(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145002160 FUN_145002160 body=981 status=ok
// SIG undefined FUN_145002160(void)

int * FUN_145002160(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  undefined1 local_res8 [8];
  ulonglong local_res18 [2];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 ******local_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 ******local_70;
  longlong lStack_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong uStack_48;
  
  local_88 = *(undefined8 *)(param_1 + 0x10);
  local_80 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(ulonglong *)(param_1 + 0x20);
  local_res18[0] = param_3;
  if ((local_78 & 1) != 0) {
    FUN_144be6b20(local_78 & 0xfffffffffffffffe);
  }
  local_a8 = 0;
  local_a0 = '\0';
  FUN_144f6f130(&local_a8,&local_88);
  lVar1 = local_a8;
  if (local_a0 == '\0') {
LAB_1450021e4:
    pppppppuVar9 = (undefined8 *******)0x0;
  }
  else if (local_a0 == '\x01') {
    pppppppuVar9 = local_98;
  }
  else {
    pppppppuVar9 = (undefined8 *******)local_98[0];
    if (local_a0 != '\x02') goto LAB_1450021e4;
  }
  if (local_a8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(local_a8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_res18[0] = local_res18[0] - *(longlong *)(param_1 + 0x28);
  plVar5 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  (**(code **)(*plVar5 + 0x48))
            (plVar5,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             &local_c8);
  uVar10 = uStack_c0;
  if ((local_b0 & 1) != 0) {
    FUN_144be6b30(local_b0 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_144beec90(uVar10);
  local_60 = 0;
  local_d0 = (longlong *)((longlong)local_res18[0] / (longlong)iVar2);
  local_res18[0] = local_res18[0] & 0xffffffffffffff00;
  local_70 = (undefined8 *******)0x0;
  lStack_68 = 0;
  uVar7 = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined4 *)FUN_144bef800(lVar1,local_d8);
    local_res18[0] = local_res18[0] & 0xffffffffffffff00;
    if (((byte)*puVar4 & 0x1f) == 8) {
      lStack_68 = lVar1;
      local_70 = pppppppuVar9;
      if ((uVar3 & 1) != 0) {
        FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      }
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar3);
      uVar7 = uVar3;
      local_60 = uVar3;
    }
  }
  FUN_144bed0e0(&local_70,&local_58,(ulonglong)local_d0 & 0xffffffff);
  if ((local_res18[0] & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  uVar7 = uStack_48;
  lVar1 = local_50;
  lStack_68 = 0;
  local_60 = 0;
  lVar6 = lStack_68;
  uVar8 = local_60;
  uVar10 = 0;
  if (((local_50 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(local_50,local_res18), lVar6 = lStack_68,
      uVar8 = local_60, ((byte)*puVar4 & 0x1f) == 5)) &&
     (lVar6 = lVar1, uVar8 = uVar7, uVar10 = local_58, (uVar7 & 1) != 0)) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res18,uVar10,lVar6,param_5);
  lVar1 = local_a8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
    goto joined_r0x0001450024ee;
  }
  if (local_a0 == '\0') {
LAB_1450023d3:
    pppppppuVar9 = (undefined8 *******)0x0;
  }
  else if (local_a0 == '\x01') {
    pppppppuVar9 = local_98;
  }
  else {
    pppppppuVar9 = (undefined8 *******)local_98[0];
    if (local_a0 != '\x02') goto LAB_1450023d3;
  }
  if (local_a8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(local_a8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  uStack_48 = 0;
  lVar6 = local_50;
  uVar7 = uStack_48;
  pppppppuVar11 = (undefined8 *******)0x0;
  if (((lVar1 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(lVar1,local_res8), lVar6 = local_50, uVar7 = uStack_48,
      ((byte)*puVar4 & 0x1f) == 8)) &&
     (lVar6 = lVar1, uVar7 = uVar3, pppppppuVar11 = pppppppuVar9, (uVar3 & 1) != 0)) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_d0 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  (**(code **)(*local_d0 + 0x48))(local_d0,local_d8,pppppppuVar11,lVar6,&local_c8);
  (**(code **)(*(longlong *)(local_78 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(local_78 & 0xfffffffffffffffe),local_res18,local_88,local_80,&local_c8);
  if ((local_b0 & 1) != 0) {
    FUN_144be6b30(local_b0 & 0xfffffffffffffffe);
  }
  iVar2 = (int)local_res18[0];
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(local_d0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  if (iVar2 < 0) {
    *param_2 = iVar2;
  }
  else {
    *param_2 = 0;
  }
joined_r0x0001450024ee:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_a8);
  if ((local_78 & 1) != 0) {
    FUN_144be6b30(local_78 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145002540 FUN_145002540 body=80 status=ok
// SIG undefined FUN_145002540(void)

undefined8
FUN_145002540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 145002590 FUN_145002590 body=109 status=ok
// SIG undefined FUN_145002590(void)

longlong FUN_145002590(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145002600 FUN_145002600 body=980 status=ok
// SIG undefined FUN_145002600(void)

int * FUN_145002600(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *******pppppppuVar9;
  undefined8 uVar10;
  undefined8 *******pppppppuVar11;
  undefined1 local_res8 [8];
  ulonglong local_res18 [2];
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  longlong local_a8;
  char local_a0;
  undefined8 ******local_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 ******local_70;
  longlong lStack_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong uStack_48;
  
  local_88 = *(undefined8 *)(param_1 + 0x10);
  local_80 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(ulonglong *)(param_1 + 0x20);
  local_res18[0] = param_3;
  if ((local_78 & 1) != 0) {
    FUN_144be6b20(local_78 & 0xfffffffffffffffe);
  }
  local_a8 = 0;
  local_a0 = '\0';
  FUN_144f6f130(&local_a8,&local_88);
  lVar1 = local_a8;
  if (local_a0 == '\0') {
LAB_145002684:
    pppppppuVar9 = (undefined8 *******)0x0;
  }
  else if (local_a0 == '\x01') {
    pppppppuVar9 = local_98;
  }
  else {
    pppppppuVar9 = (undefined8 *******)local_98[0];
    if (local_a0 != '\x02') goto LAB_145002684;
  }
  if (local_a8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(local_a8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_res18[0] = local_res18[0] - *(longlong *)(param_1 + 0x28);
  plVar5 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  local_b8 = 0;
  local_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  (**(code **)(*plVar5 + 0x48))
            (plVar5,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             &local_c8);
  uVar10 = uStack_c0;
  if ((local_b0 & 1) != 0) {
    FUN_144be6b30(local_b0 & 0xfffffffffffffffe);
  }
  iVar2 = FUN_144beec90(uVar10);
  local_60 = 0;
  local_d0 = (longlong *)((longlong)local_res18[0] / (longlong)iVar2);
  local_res18[0] = local_res18[0] & 0xffffffffffffff00;
  local_70 = (undefined8 *******)0x0;
  lStack_68 = 0;
  uVar7 = 0;
  if (lVar1 != 0) {
    puVar4 = (undefined4 *)FUN_144bef800(lVar1,local_d8);
    local_res18[0] = local_res18[0] & 0xffffffffffffff00;
    if (((byte)*puVar4 & 0x1f) == 8) {
      lStack_68 = lVar1;
      local_70 = pppppppuVar9;
      if ((uVar3 & 1) != 0) {
        FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
      }
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar3);
      uVar7 = uVar3;
      local_60 = uVar3;
    }
  }
  FUN_144bed0e0(&local_70,&local_58,(ulonglong)local_d0 & 0xffffffff);
  if ((local_res18[0] & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  uVar7 = uStack_48;
  lVar1 = local_50;
  lStack_68 = 0;
  local_60 = 0;
  lVar6 = lStack_68;
  uVar8 = local_60;
  uVar10 = 0;
  if (((local_50 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(local_50,local_res18), lVar6 = lStack_68,
      uVar8 = local_60, ((byte)*puVar4 & 0x1f) == 3)) &&
     (lVar6 = lVar1, uVar8 = uVar7, uVar10 = local_58, (uVar7 & 1) != 0)) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x28))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res18,uVar10,lVar6,param_5);
  lVar1 = local_a8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
    goto joined_r0x00014500298d;
  }
  if (local_a0 == '\0') {
LAB_145002872:
    pppppppuVar9 = (undefined8 *******)0x0;
  }
  else if (local_a0 == '\x01') {
    pppppppuVar9 = local_98;
  }
  else {
    pppppppuVar9 = (undefined8 *******)local_98[0];
    if (local_a0 != '\x02') goto LAB_145002872;
  }
  if (local_a8 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(local_a8);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  uStack_48 = 0;
  lVar6 = local_50;
  uVar7 = uStack_48;
  pppppppuVar11 = (undefined8 *******)0x0;
  if (((lVar1 != 0) &&
      (puVar4 = (undefined4 *)FUN_144bef800(lVar1,local_res8), lVar6 = local_50, uVar7 = uStack_48,
      ((byte)*puVar4 & 0x1f) == 8)) &&
     (lVar6 = lVar1, uVar7 = uVar3, pppppppuVar11 = pppppppuVar9, (uVar3 & 1) != 0)) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  local_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b0 = 0;
  local_d0 = (longlong *)(uVar7 & 0xfffffffffffffffe);
  (**(code **)(*local_d0 + 0x48))(local_d0,local_d8,pppppppuVar11,lVar6,&local_c8);
  (**(code **)(*(longlong *)(local_78 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(local_78 & 0xfffffffffffffffe),local_res18,local_88,local_80,&local_c8);
  if ((local_b0 & 1) != 0) {
    FUN_144be6b30(local_b0 & 0xfffffffffffffffe);
  }
  iVar2 = (int)local_res18[0];
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(local_d0);
  }
  if ((uVar3 & 1) != 0) {
    FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
  }
  if (iVar2 < 0) {
    *param_2 = iVar2;
  }
  else {
    *param_2 = 0;
  }
joined_r0x00014500298d:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_a8);
  if ((local_78 & 1) != 0) {
    FUN_144be6b30(local_78 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1450029e0 FUN_1450029e0 body=80 status=ok
// SIG undefined FUN_1450029e0(void)

undefined8
FUN_1450029e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x30))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 145002a30 FUN_145002a30 body=109 status=ok
// SIG undefined FUN_145002a30(void)

longlong FUN_145002a30(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145002aa0 FUN_145002aa0 body=995 status=ok
// SIG undefined FUN_145002aa0(void)

int * FUN_145002aa0(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  ulonglong local_res18 [2];
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulonglong local_b8;
  longlong local_a8;
  char local_a0;
  undefined8 ******local_98 [2];
  undefined8 local_88;
  undefined8 local_80;
  ulonglong local_78;
  undefined8 ******local_70;
  longlong lStack_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_88 = *(undefined8 *)(param_1 + 0x10);
  local_80 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(ulonglong *)(param_1 + 0x20);
  local_res18[0] = param_3;
  if ((local_78 & 1) != 0) {
    FUN_144be6b20(local_78 & 0xfffffffffffffffe);
  }
  local_a8 = 0;
  local_a0 = '\0';
  FUN_144f6f130(&local_a8,&local_88);
  lVar6 = local_a8;
  if (local_a0 == '\0') {
LAB_145002b24:
    pppppppuVar10 = (undefined8 *******)0x0;
  }
  else if (local_a0 == '\x01') {
    pppppppuVar10 = local_98;
  }
  else {
    pppppppuVar10 = (undefined8 *******)local_98[0];
    if (local_a0 != '\x02') goto LAB_145002b24;
  }
  if (local_a8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(local_a8);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  local_res18[0] = local_res18[0] - *(longlong *)(param_1 + 0x28);
  plVar4 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  (**(code **)(*plVar4 + 0x48))
            (plVar4,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             &local_d0);
  uVar9 = uStack_c8;
  if ((local_b8 & 1) != 0) {
    FUN_144be6b30(local_b8 & 0xfffffffffffffffe);
  }
  iVar1 = FUN_144beec90(uVar9);
  local_60 = 0;
  local_40 = (longlong)local_res18[0] / (longlong)iVar1;
  local_res18[0] = local_res18[0] & 0xffffffffffffff00;
  local_70 = (undefined8 *******)0x0;
  lStack_68 = 0;
  uVar7 = 0;
  if (lVar6 != 0) {
    puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_d8);
    local_res18[0] = local_res18[0] & 0xffffffffffffff00;
    if (((byte)*puVar3 & 0x1f) == 8) {
      lStack_68 = lVar6;
      local_70 = pppppppuVar10;
      if ((uVar2 & 1) != 0) {
        FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
      }
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar2);
      uVar7 = uVar2;
      local_60 = uVar2;
    }
  }
  FUN_144bed0e0(&local_70,&local_58,local_40 & 0xffffffff);
  if ((local_res18[0] & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  uVar7 = uStack_48;
  lVar6 = local_50;
  lStack_68 = 0;
  local_60 = 0;
  lVar5 = lStack_68;
  uVar8 = local_60;
  uVar9 = 0;
  if (((local_50 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_50,local_res18), lVar5 = lStack_68,
      uVar8 = local_60, ((byte)*puVar3 & 0x1f) == 6)) &&
     (lVar5 = lVar6, uVar8 = uVar7, uVar9 = local_58, (uVar7 & 1) != 0)) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res18,uVar9,lVar5,param_5);
  lVar6 = local_a8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
    goto joined_r0x000145002e3c;
  }
  if (local_a0 == '\0') {
LAB_145002d12:
    pppppppuVar10 = (undefined8 *******)0x0;
  }
  else if (local_a0 == '\x01') {
    pppppppuVar10 = local_98;
  }
  else {
    pppppppuVar10 = (undefined8 *******)local_98[0];
    if (local_a0 != '\x02') goto LAB_145002d12;
  }
  if (local_a8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(local_a8);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  local_50 = 0;
  uStack_48 = 0;
  if ((lVar6 == 0) ||
     (puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_res8), ((byte)*puVar3 & 0x1f) != 8)) {
    lVar6 = local_50;
    uVar7 = 0;
    pppppppuVar10 = (undefined8 *******)0x0;
    uVar11 = uStack_48;
  }
  else {
    uVar7 = uVar2;
    uVar11 = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
  }
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  (**(code **)(*(longlong *)(uVar7 & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(uVar7 & 0xfffffffffffffffe),local_d8,pppppppuVar10,lVar6,&local_d0);
  (**(code **)(*(longlong *)(local_78 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(local_78 & 0xfffffffffffffffe),local_res18,local_88,local_80,&local_d0);
  if ((local_b8 & 1) != 0) {
    FUN_144be6b30(local_b8 & 0xfffffffffffffffe);
  }
  iVar1 = (int)local_res18[0];
  if ((uVar11 & 1) != 0) {
    FUN_144be6b30(uVar11 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  if (iVar1 < 0) {
    *param_2 = iVar1;
  }
  else {
    *param_2 = 0;
  }
joined_r0x000145002e3c:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_a8);
  if ((local_78 & 1) != 0) {
    FUN_144be6b30(local_78 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145002e90 FUN_145002e90 body=80 status=ok
// SIG undefined FUN_145002e90(void)

undefined8
FUN_145002e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 145002ee0 FUN_145002ee0 body=109 status=ok
// SIG undefined FUN_145002ee0(void)

longlong FUN_145002ee0(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145002f50 FUN_145002f50 body=990 status=ok
// SIG undefined FUN_145002f50(void)

int * FUN_145002f50(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 ***pppuVar3;
  int iVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined8 ****ppppuVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  ulonglong uVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined1 local_res8 [8];
  ulonglong local_res18 [2];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  longlong local_c8;
  char local_c0;
  undefined8 ***local_b8 [2];
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 ***local_98;
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 ***pppuStack_68;
  ulonglong local_60;
  undefined8 ***local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_90 = *(undefined8 *)(param_1 + 0x10);
  local_88 = *(undefined8 *)(param_1 + 0x18);
  local_80 = *(ulonglong *)(param_1 + 0x20);
  local_res18[0] = param_3;
  if ((local_80 & 1) != 0) {
    FUN_144be6b20(local_80 & 0xfffffffffffffffe);
  }
  local_c8 = 0;
  local_c0 = '\0';
  FUN_144f6f130(&local_c8,&local_90);
  lVar2 = local_c8;
  if (local_c0 != '\0') {
    if (local_c0 == '\x01') {
      ppppuVar14 = local_b8;
      goto LAB_145002fd7;
    }
    ppppuVar14 = (undefined8 ****)local_b8[0];
    if (local_c0 == '\x02') goto LAB_145002fd7;
  }
  ppppuVar14 = (undefined8 ****)0x0;
LAB_145002fd7:
  if (local_c8 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144befdb0(local_c8);
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
  }
  local_res18[0] = local_res18[0] - *(longlong *)(param_1 + 0x28);
  plVar9 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  (**(code **)(*plVar9 + 0x48))
            (plVar9,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             &local_f0);
  uVar1 = uStack_e8;
  if ((local_d8 & 1) != 0) {
    FUN_144be6b30(local_d8 & 0xfffffffffffffffe);
  }
  iVar4 = FUN_144beec90(uVar1);
  local_48 = 0;
  local_60 = (longlong)local_res18[0] / (longlong)iVar4;
  local_res18[0] = local_res18[0] & 0xffffffffffffff00;
  local_58 = (undefined8 ****)0x0;
  lStack_50 = 0;
  uVar13 = 0;
  if (lVar2 != 0) {
    puVar6 = (undefined4 *)FUN_144bef800(lVar2,local_f8);
    local_res18[0] = local_res18[0] & 0xffffffffffffff00;
    if (((byte)*puVar6 & 0x1f) == 8) {
      lStack_50 = lVar2;
      local_58 = ppppuVar14;
      if ((uVar5 & 1) != 0) {
        FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
      }
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar5);
      uVar13 = uVar5;
      local_48 = uVar5;
    }
  }
  FUN_144bed0e0(&local_58,&local_78,local_60 & 0xffffffff);
  if ((local_res18[0] & 1) != 0) {
    FUN_144be6b30(uVar13 & 0xfffffffffffffffe);
  }
  pppuVar3 = pppuStack_68;
  lVar2 = local_70;
  ppppuVar14 = (undefined8 ****)0x0;
  local_98 = (undefined8 ****)0x0;
  local_a8 = 0;
  lStack_a0 = 0;
  if ((local_70 != 0) &&
     (puVar6 = (undefined4 *)FUN_144bef800(local_70,local_res18), ((byte)*puVar6 & 0x1f) == 7)) {
    local_a8 = local_78;
    lStack_a0 = lVar2;
    if (((ulonglong)pppuVar3 & 1) != 0) {
      FUN_144be6b20((ulonglong)pppuVar3 & 0xfffffffffffffffe);
    }
    if (((ulonglong)local_98 & 1) != 0) {
      FUN_144be6b30((ulonglong)local_98 & 0xfffffffffffffffe);
    }
    local_98 = pppuVar3;
  }
  if (((ulonglong)pppuVar3 & 1) != 0) {
    FUN_144be6b30((ulonglong)pppuVar3 & 0xfffffffffffffffe);
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
  }
  piVar7 = (int *)FUN_144bed230(&local_a8,local_res18,param_5);
  lVar2 = local_c8;
  if (*piVar7 < 0) {
    *param_2 = *piVar7;
  }
  else {
    ppppuVar11 = ppppuVar14;
    if (local_c0 != '\0') {
      if (local_c0 == '\x01') {
        ppppuVar11 = local_b8;
      }
      else if (local_c0 == '\x02') {
        ppppuVar11 = (undefined8 ****)local_b8[0];
      }
    }
    ppppuVar8 = ppppuVar14;
    if (local_c8 != 0) {
      ppppuVar8 = (undefined8 ****)FUN_144befdb0(local_c8);
    }
    if (((ulonglong)ppppuVar8 & 1) != 0) {
      FUN_144be6b20((ulonglong)ppppuVar8 & 0xfffffffffffffffe);
    }
    local_70 = 0;
    pppuStack_68 = (undefined8 ****)0x0;
    lVar10 = local_70;
    ppppuVar12 = (undefined8 ****)pppuStack_68;
    ppppuVar15 = ppppuVar14;
    if (((lVar2 != 0) &&
        (puVar6 = (undefined4 *)FUN_144bef800(lVar2,local_res8), lVar10 = local_70,
        ppppuVar12 = (undefined8 ****)pppuStack_68, ((byte)*puVar6 & 0x1f) == 8)) &&
       (lVar10 = lVar2, ppppuVar12 = ppppuVar8, ppppuVar14 = ppppuVar8, ppppuVar15 = ppppuVar11,
       ((ulonglong)ppppuVar8 & 1) != 0)) {
      FUN_144be6b20((ulonglong)ppppuVar8 & 0xfffffffffffffffe);
    }
    local_e0 = 0;
    local_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    (**(code **)(*(longlong *)((ulonglong)ppppuVar14 & 0xfffffffffffffffe) + 0x48))
              ((longlong *)((ulonglong)ppppuVar14 & 0xfffffffffffffffe),local_f8,ppppuVar15,lVar10,
               &local_f0);
    (**(code **)(*(longlong *)(local_80 & 0xfffffffffffffffe) + 0x40))
              ((longlong *)(local_80 & 0xfffffffffffffffe),local_res18,local_90,local_88,&local_f0);
    if ((local_d8 & 1) != 0) {
      FUN_144be6b30(local_d8 & 0xfffffffffffffffe);
    }
    iVar4 = (int)local_res18[0];
    if (((ulonglong)ppppuVar12 & 1) != 0) {
      FUN_144be6b30((ulonglong)ppppuVar12 & 0xfffffffffffffffe);
    }
    if (((ulonglong)ppppuVar8 & 1) != 0) {
      FUN_144be6b30((ulonglong)ppppuVar8 & 0xfffffffffffffffe);
    }
    if (iVar4 < 0) {
      *param_2 = iVar4;
    }
    else {
      *param_2 = 0;
    }
  }
  if (((ulonglong)local_98 & 1) != 0) {
    FUN_144be6b30((ulonglong)local_98 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_c8);
  if ((local_80 & 1) != 0) {
    FUN_144be6b30(local_80 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145003330 FUN_145003330 body=80 status=ok
// SIG undefined FUN_145003330(void)

undefined8
FUN_145003330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 145003380 FUN_145003380 body=109 status=ok
// SIG undefined FUN_145003380(void)

longlong FUN_145003380(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1450033f0 FUN_1450033f0 body=27 status=ok
// SIG undefined FUN_1450033f0(void)

void FUN_1450033f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = param_1;
  FUN_144ffe7f0(local_res8,param_3);
  return;
}



// FUNCTION 145003410 FUN_145003410 body=109 status=ok
// SIG undefined FUN_145003410(void)

longlong FUN_145003410(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145003480 FUN_145003480 body=1071 status=ok
// SIG undefined FUN_145003480(void)

int * FUN_145003480(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 *******pppppppuVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  ulonglong local_res18 [2];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 ******local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 ******local_80;
  longlong lStack_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong uStack_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_98 = *(undefined8 *)(param_1 + 0x10);
  local_90 = *(undefined8 *)(param_1 + 0x18);
  local_88 = *(ulonglong *)(param_1 + 0x20);
  local_res18[0] = param_3;
  if ((local_88 & 1) != 0) {
    FUN_144be6b20(local_88 & 0xfffffffffffffffe);
  }
  local_b8 = 0;
  local_b0 = '\0';
  FUN_144f6f130(&local_b8,&local_98);
  lVar6 = local_b8;
  if (local_b0 == '\0') {
LAB_145003504:
    pppppppuVar10 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar10 = local_a8;
  }
  else {
    pppppppuVar10 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_145003504;
  }
  if (local_b8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(local_b8);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  local_res18[0] = local_res18[0] - *(longlong *)(param_1 + 0x28);
  plVar4 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  (**(code **)(*plVar4 + 0x48))
            (plVar4,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             &local_d8);
  uVar9 = uStack_d0;
  if ((local_c0 & 1) != 0) {
    FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
  }
  iVar1 = FUN_144beec90(uVar9);
  local_70 = 0;
  local_48 = (longlong)local_res18[0] / (longlong)iVar1;
  local_res18[0] = local_res18[0] & 0xffffffffffffff00;
  local_80 = (undefined8 *******)0x0;
  lStack_78 = 0;
  uVar7 = 0;
  if (lVar6 != 0) {
    puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_50);
    local_res18[0] = local_res18[0] & 0xffffffffffffff00;
    if (((byte)*puVar3 & 0x1f) == 8) {
      lStack_78 = lVar6;
      local_80 = pppppppuVar10;
      if ((uVar2 & 1) != 0) {
        FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
      }
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar2);
      uVar7 = uVar2;
      local_70 = uVar2;
    }
  }
  FUN_144bed0e0(&local_80,&local_68,local_48 & 0xffffffff);
  if ((local_res18[0] & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  uVar7 = uStack_58;
  lVar6 = local_60;
  lStack_78 = 0;
  local_70 = 0;
  lVar5 = lStack_78;
  uVar8 = local_70;
  uVar9 = 0;
  if (((local_60 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_60,local_res18), lVar5 = lStack_78,
      uVar8 = local_70, ((byte)*puVar3 & 0x1f) == 8)) &&
     (lVar5 = lVar6, uVar8 = uVar7, uVar9 = local_68, (uVar7 & 1) != 0)) {
    FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar7 & 1) != 0) {
    FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  local_d8 = *param_5;
  uStack_d0 = param_5[1];
  local_c8 = param_5[2];
  local_c0 = param_5[3];
  if ((local_c0 & 1) != 0) {
    FUN_144be6b20(local_c0 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar8 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(uVar8 & 0xfffffffffffffffe),local_res18,uVar9,lVar5,&local_d8);
  if ((local_c0 & 1) != 0) {
    FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
  }
  lVar6 = local_b8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
    goto joined_r0x000145003868;
  }
  if (local_b0 == '\0') {
LAB_14500373c:
    pppppppuVar10 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar10 = local_a8;
  }
  else {
    pppppppuVar10 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_14500373c;
  }
  if (local_b8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(local_b8);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  local_60 = 0;
  uStack_58 = 0;
  if ((lVar6 == 0) ||
     (puVar3 = (undefined4 *)FUN_144bef800(lVar6,&param_5), ((byte)*puVar3 & 0x1f) != 8)) {
    lVar6 = local_60;
    uVar7 = 0;
    pppppppuVar10 = (undefined8 *******)0x0;
    uVar11 = uStack_58;
  }
  else {
    uVar7 = uVar2;
    uVar11 = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
  }
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  (**(code **)(*(longlong *)(uVar7 & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(uVar7 & 0xfffffffffffffffe),local_res8,pppppppuVar10,lVar6,&local_d8);
  (**(code **)(*(longlong *)(local_88 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(local_88 & 0xfffffffffffffffe),local_res18,local_98,local_90,&local_d8);
  if ((local_c0 & 1) != 0) {
    FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
  }
  iVar1 = (int)local_res18[0];
  if ((uVar11 & 1) != 0) {
    FUN_144be6b30(uVar11 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  if (iVar1 < 0) {
    *param_2 = iVar1;
  }
  else {
    *param_2 = 0;
  }
joined_r0x000145003868:
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_b8);
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1450038b0 FUN_1450038b0 body=80 status=ok
// SIG undefined FUN_1450038b0(void)

undefined8
FUN_1450038b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_144befdb0(param_4);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 145003900 FUN_145003900 body=109 status=ok
// SIG undefined FUN_145003900(void)

longlong FUN_145003900(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145003970 FUN_145003970 body=447 status=ok
// SIG undefined FUN_145003970(void)

int * FUN_145003970(ulonglong param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_78 [8];
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  plVar5 = (longlong *)FUN_144befdb0(param_4);
  uVar7 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_38 = 0;
  local_30 = 0;
  piVar6 = (int *)(**(code **)(*plVar5 + 0x48))(plVar5,local_78,param_3,param_4,&local_48);
  if (*piVar6 < 0) {
    *param_2 = *piVar6;
  }
  else {
    local_50 = param_1 | 1;
    local_60 = param_3;
    local_58 = param_4;
    FUN_144be6b20(param_1 & 0xfffffffffffffffe);
    lVar2 = lStack_40;
    if (lStack_40 != 0) {
      local_70 = &local_60;
      local_68 = local_48;
      uVar7 = FUN_145001190(&local_70,lStack_40);
    }
    uVar1 = local_48;
    uVar3 = (undefined4)local_38;
    uVar8 = (ulonglong)(lVar2 != 0);
    uVar4 = 0;
    uVar9 = uVar8 | uVar7;
    if (uVar8 != 0 || (uVar7 & 1) != 0) {
      FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
    }
    if ((lVar2 != 0) && (uVar4 = FUN_144beec90(lVar2), uVar7 == 0)) {
      uVar9 = FUN_144befdb0(lVar2);
      if ((uVar9 & 1) != 0) {
        FUN_144be6b20(uVar9 & 0xfffffffffffffffe);
      }
      if (uVar8 != 0) {
        FUN_144be6b30(0);
      }
    }
    *param_5 = uVar1;
    param_5[1] = lVar2;
    *(undefined4 *)(param_5 + 2) = uVar3;
    *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
    uVar7 = param_5[3];
    param_5[3] = uVar9;
    if ((uVar7 & 1) != 0) {
      FUN_144be6b30(uVar7 & 0xfffffffffffffffe);
    }
    *param_2 = 0;
    if ((local_50 & 1) != 0) {
      FUN_144be6b30(local_50 & 0xfffffffffffffffe);
    }
  }
  if ((local_30 & 1) != 0) {
    FUN_144be6b30(local_30 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145003b30 FUN_145003b30 body=976 status=ok
// SIG undefined FUN_145003b30(void)

int * FUN_145003b30(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                   undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *******pppppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  ulonglong local_res18 [2];
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 ******local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 ******local_80;
  longlong lStack_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong uStack_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_98 = *(undefined8 *)(param_1 + 0x10);
  local_90 = *(undefined8 *)(param_1 + 0x18);
  local_88 = *(ulonglong *)(param_1 + 0x20);
  local_res18[0] = param_3;
  if ((local_88 & 1) != 0) {
    FUN_144be6b20(local_88 & 0xfffffffffffffffe);
  }
  local_b8 = 0;
  local_b0 = '\0';
  FUN_144f6f130(&local_b8,&local_98);
  lVar6 = local_b8;
  if (local_b0 == '\0') {
LAB_145003bb4:
    pppppppuVar7 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar7 = local_a8;
  }
  else {
    pppppppuVar7 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_145003bb4;
  }
  if (local_b8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(local_b8);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  puVar12 = &local_d8;
  local_res18[0] = local_res18[0] - *(longlong *)(param_1 + 0x28);
  plVar4 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  (**(code **)(*plVar4 + 0x48))
            (plVar4,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             puVar12);
  uVar10 = uStack_d0;
  uVar13 = (undefined4)((ulonglong)puVar12 >> 0x20);
  if ((local_c0 & 1) != 0) {
    FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
  }
  iVar1 = FUN_144beec90(uVar10);
  local_70 = 0;
  local_48 = (longlong)local_res18[0] / (longlong)iVar1;
  local_res18[0] = local_res18[0] & 0xffffffffffffff00;
  local_80 = (undefined8 *******)0x0;
  lStack_78 = 0;
  uVar8 = 0;
  if (lVar6 != 0) {
    puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_50);
    local_res18[0] = local_res18[0] & 0xffffffffffffff00;
    if (((byte)*puVar3 & 0x1f) == 8) {
      lStack_78 = lVar6;
      local_80 = pppppppuVar7;
      if ((uVar2 & 1) != 0) {
        FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
      }
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar2);
      uVar8 = uVar2;
      local_70 = uVar2;
    }
  }
  FUN_144bed0e0(&local_80,&local_68,local_48 & 0xffffffff);
  if ((local_res18[0] & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  uVar8 = uStack_58;
  lVar6 = local_60;
  lStack_78 = 0;
  local_70 = 0;
  lVar5 = lStack_78;
  uVar10 = 0;
  uVar11 = local_70;
  if (((local_60 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_60,local_res18), lVar5 = lStack_78,
      uVar11 = local_70, ((byte)*puVar3 & 0x1f) == 8)) &&
     (lVar5 = lVar6, uVar10 = local_68, uVar11 = uVar8, (uVar8 & 1) != 0)) {
    FUN_144be6b20(uVar8 & 0xfffffffffffffffe);
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar11 & 0xfffffffffffffffe) + 0x50))
            ((longlong *)(uVar11 & 0xfffffffffffffffe),local_res18,uVar10,lVar5,
             CONCAT44(uVar13,param_5));
  lVar6 = local_b8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
    goto joined_r0x000145003eb9;
  }
  if (local_b0 == '\0') {
LAB_145003da2:
    pppppppuVar7 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar7 = local_a8;
  }
  else {
    pppppppuVar7 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_145003da2;
  }
  if (local_b8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(local_b8);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  local_60 = 0;
  uStack_58 = 0;
  if ((lVar6 == 0) ||
     (puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_res18), ((byte)*puVar3 & 0x1f) != 8)) {
    lVar6 = local_60;
    uVar8 = uStack_58;
    uVar9 = 0;
    pppppppuVar7 = (undefined8 *******)0x0;
  }
  else {
    uVar8 = uVar2;
    uVar9 = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
  }
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(uVar9 & 0xfffffffffffffffe),local_res8,pppppppuVar7,lVar6,&local_d8);
  (**(code **)(*(longlong *)(local_88 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(local_88 & 0xfffffffffffffffe),param_2,local_98,local_90,&local_d8);
  if ((local_c0 & 1) != 0) {
    FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
joined_r0x000145003eb9:
  if ((uVar11 & 1) != 0) {
    FUN_144be6b30(uVar11 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_b8);
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 145003f00 FUN_145003f00 body=995 status=ok
// SIG undefined FUN_145003f00(void)

int * FUN_145003f00(longlong param_1,int *param_2,ulonglong param_3,undefined8 param_4,
                   undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  int iVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *******pppppppuVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 local_res8 [8];
  ulonglong local_res18 [2];
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  longlong local_b8;
  char local_b0;
  undefined8 ******local_a8 [2];
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 ******local_80;
  longlong lStack_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  ulonglong uStack_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_98 = *(undefined8 *)(param_1 + 0x10);
  local_90 = *(undefined8 *)(param_1 + 0x18);
  local_88 = *(ulonglong *)(param_1 + 0x20);
  local_res18[0] = param_3;
  if ((local_88 & 1) != 0) {
    FUN_144be6b20(local_88 & 0xfffffffffffffffe);
  }
  local_b8 = 0;
  local_b0 = '\0';
  FUN_144f6f130(&local_b8,&local_98);
  lVar6 = local_b8;
  if (local_b0 == '\0') {
LAB_145003f84:
    pppppppuVar7 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar7 = local_a8;
  }
  else {
    pppppppuVar7 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_145003f84;
  }
  if (local_b8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(local_b8);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  puVar12 = &local_d8;
  local_res18[0] = local_res18[0] - *(longlong *)(param_1 + 0x28);
  plVar4 = (longlong *)(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  (**(code **)(*plVar4 + 0x48))
            (plVar4,local_res8,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
             puVar12);
  uVar10 = uStack_d0;
  uVar13 = (undefined4)((ulonglong)puVar12 >> 0x20);
  if ((local_c0 & 1) != 0) {
    FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
  }
  iVar1 = FUN_144beec90(uVar10);
  local_70 = 0;
  local_48 = (longlong)local_res18[0] / (longlong)iVar1;
  local_res18[0] = local_res18[0] & 0xffffffffffffff00;
  local_80 = (undefined8 *******)0x0;
  lStack_78 = 0;
  uVar8 = 0;
  if (lVar6 != 0) {
    puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_50);
    local_res18[0] = local_res18[0] & 0xffffffffffffff00;
    if (((byte)*puVar3 & 0x1f) == 8) {
      lStack_78 = lVar6;
      local_80 = pppppppuVar7;
      if ((uVar2 & 1) != 0) {
        FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
      }
      local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar2);
      uVar8 = uVar2;
      local_70 = uVar2;
    }
  }
  FUN_144bed0e0(&local_80,&local_68,local_48 & 0xffffffff);
  if ((local_res18[0] & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  uVar8 = uStack_58;
  lVar6 = local_60;
  lStack_78 = 0;
  local_70 = 0;
  lVar5 = lStack_78;
  uVar10 = 0;
  uVar11 = local_70;
  if (((local_60 != 0) &&
      (puVar3 = (undefined4 *)FUN_144bef800(local_60,local_res18), lVar5 = lStack_78,
      uVar11 = local_70, ((byte)*puVar3 & 0x1f) == 8)) &&
     (lVar5 = lVar6, uVar10 = local_68, uVar11 = uVar8, (uVar8 & 1) != 0)) {
    FUN_144be6b20(uVar8 & 0xfffffffffffffffe);
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
  (**(code **)(*(longlong *)(uVar11 & 0xfffffffffffffffe) + 0x58))
            ((longlong *)(uVar11 & 0xfffffffffffffffe),local_res18,uVar10,lVar5,
             CONCAT44(uVar13,param_5),param_6,param_7);
  lVar6 = local_b8;
  if ((int)local_res18[0] < 0) {
    *param_2 = (int)local_res18[0];
    goto joined_r0x00014500429c;
  }
  if (local_b0 == '\0') {
LAB_145004184:
    pppppppuVar7 = (undefined8 *******)0x0;
  }
  else if (local_b0 == '\x01') {
    pppppppuVar7 = local_a8;
  }
  else {
    pppppppuVar7 = (undefined8 *******)local_a8[0];
    if (local_b0 != '\x02') goto LAB_145004184;
  }
  if (local_b8 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144befdb0(local_b8);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
  }
  local_60 = 0;
  uStack_58 = 0;
  if ((lVar6 == 0) ||
     (puVar3 = (undefined4 *)FUN_144bef800(lVar6,local_res18), ((byte)*puVar3 & 0x1f) != 8)) {
    lVar6 = local_60;
    uVar8 = uStack_58;
    uVar9 = 0;
    pppppppuVar7 = (undefined8 *******)0x0;
  }
  else {
    uVar8 = uVar2;
    uVar9 = uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
    }
  }
  local_c8 = 0;
  local_c0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  (**(code **)(*(longlong *)(uVar9 & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(uVar9 & 0xfffffffffffffffe),local_res8,pppppppuVar7,lVar6,&local_d8);
  (**(code **)(*(longlong *)(local_88 & 0xfffffffffffffffe) + 0x40))
            ((longlong *)(local_88 & 0xfffffffffffffffe),param_2,local_98,local_90,&local_d8);
  if ((local_c0 & 1) != 0) {
    FUN_144be6b30(local_c0 & 0xfffffffffffffffe);
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  if ((uVar2 & 1) != 0) {
    FUN_144be6b30(uVar2 & 0xfffffffffffffffe);
  }
joined_r0x00014500429c:
  if ((uVar11 & 1) != 0) {
    FUN_144be6b30(uVar11 & 0xfffffffffffffffe);
  }
  FUN_144f6ee60(&local_b8);
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 1450042f0 FUN_1450042f0 body=1 status=ok
// SIG undefined FUN_1450042f0(void)

void FUN_1450042f0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 145004300 FUN_145004300 body=1 status=ok
// SIG undefined FUN_145004300(void)

void FUN_145004300(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 145004310 FUN_145004310 body=109 status=ok
// SIG undefined FUN_145004310(void)

longlong FUN_145004310(longlong param_1,ulonglong param_2)

{
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x20) & 0xfffffffffffffffe);
  }
  FUN_144be6ae0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 145004380 FUN_145004380 body=766 status=ok
// SIG undefined FUN_145004380(void)

ulonglong * FUN_145004380(ulonglong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined8 local_res8;
  
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  uVar10 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(int *)(param_1 + 4) = (int)param_2[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0;
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  uVar7 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  uVar7 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar7;
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  uVar7 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar7;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x94);
  lVar11 = param_2[0x13];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar4;
  *(int *)(param_1 + 0x13) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar5;
  *(char *)(param_1 + 0x14) = (char)param_2[0x14];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xb4);
  lVar11 = param_2[0x17];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xbc);
  *(int *)(param_1 + 0x16) = (int)param_2[0x16];
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar4;
  *(int *)(param_1 + 0x17) = (int)lVar11;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar5;
  FUN_145004ed0(param_1 + 0x18,param_2 + 0x18);
  FUN_145004f80(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x80000000;
  *(undefined4 *)(param_1 + 0x23) = 0;
  lVar11 = *param_2;
  if (lVar11 != 0) {
    local_res8 = 0x100;
    lVar6 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar6,"hkaiNavMeshInstance");
    }
    uVar7 = uVar10;
    if (lVar6 != 0) {
      uVar7 = FUN_144c3e330(lVar6,lVar11);
    }
    uVar13 = *param_1;
    *param_1 = uVar7;
    if (uVar13 != 0) {
      FUN_144b3f230();
    }
  }
  iVar2 = (int)param_2[3];
  lVar11 = (longlong)iVar2;
  if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar2) {
    FUN_145005040(param_1 + 2,&PTR_vftable_14c6e47a0,lVar11);
  }
  iVar3 = (int)param_1[3];
  if (iVar3 < iVar2) {
    uVar7 = param_1[2];
    *(int *)(param_1 + 3) = iVar2;
    for (puVar8 = (undefined8 *)(uVar7 + (longlong)iVar3 * 8);
        puVar8 != (undefined8 *)(uVar7 + lVar11 * 8); puVar8 = puVar8 + 1) {
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = 0;
      }
    }
  }
  else if (iVar2 < iVar3) {
    uVar7 = param_1[2];
    *(int *)(param_1 + 3) = iVar2;
    lVar6 = uVar7 + (longlong)iVar3 * 8;
    while (lVar6 != uVar7 + lVar11 * 8) {
      plVar1 = (longlong *)(lVar6 + -8);
      lVar6 = lVar6 + -8;
      if (*plVar1 != 0) {
        FUN_144b3f230();
      }
    }
  }
  FUN_144c3fad0(param_1 + 0x21,0,(int)param_2[3],0);
  uVar7 = uVar10;
  uVar13 = uVar10;
  if (0 < (int)param_1[3]) {
    do {
      lVar11 = *(longlong *)(uVar7 + param_2[2]);
      if (lVar11 != 0) {
        local_res8 = 0x90;
        lVar6 = (*DAT_14c787670)(0,&local_res8,0);
        if (DAT_14c787680 != (code *)0x0) {
          (*DAT_14c787680)(lVar6,"hkaiClusterGraphInstance");
        }
        uVar9 = uVar10;
        if (lVar6 != 0) {
          uVar9 = FUN_144c370d0(lVar6,lVar11);
        }
        lVar11 = *(longlong *)(uVar7 + param_1[2]);
        *(ulonglong *)(uVar7 + param_1[2]) = uVar9;
        if (lVar11 != 0) {
          FUN_144b3f230();
        }
      }
      uVar12 = (int)uVar13 + 1;
      uVar7 = uVar7 + 8;
      uVar13 = (ulonglong)uVar12;
    } while ((int)uVar12 < (int)param_1[3]);
  }
  lVar11 = param_2[1];
  if (lVar11 != 0) {
    local_res8 = 0x70;
    lVar6 = (*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(lVar6,"hkaiNavVolumeInstance");
    }
    if (lVar6 != 0) {
      uVar10 = FUN_144c49ef0(lVar6,lVar11);
    }
    uVar7 = param_1[1];
    param_1[1] = uVar10;
    if (uVar7 != 0) {
      FUN_144b3f230();
    }
  }
  return param_1;
}



// FUNCTION 145004680 FUN_145004680 body=316 status=ok
// SIG undefined FUN_145004680(void)

void FUN_145004680(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  uVar3 = *(uint *)(*(longlong *)(param_2 + 0x20) + 0x68);
  if (*(int *)(param_1 + 0x18) <= (int)uVar3) {
    iVar9 = uVar3 + 1;
    lVar7 = (longlong)iVar9;
    if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar9) {
      FUN_145005040(plVar1,&PTR_vftable_14c6e47a0,lVar7);
    }
    iVar4 = *(int *)(param_1 + 0x18);
    if (iVar4 < iVar9) {
      lVar8 = *plVar1;
      *(int *)(param_1 + 0x18) = iVar9;
      for (puVar6 = (undefined8 *)(lVar8 + (longlong)iVar4 * 8);
          puVar6 != (undefined8 *)(lVar8 + lVar7 * 8); puVar6 = puVar6 + 1) {
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
        }
      }
    }
    else if (iVar9 < iVar4) {
      lVar5 = *plVar1;
      *(int *)(param_1 + 0x18) = iVar9;
      lVar8 = lVar5 + (longlong)iVar4 * 8;
      while (lVar8 != lVar5 + lVar7 * 8) {
        plVar2 = (longlong *)(lVar8 + -8);
        lVar8 = lVar8 + -8;
        if (*plVar2 != 0) {
          FUN_144b3f230();
        }
      }
    }
    FUN_144c3fad0(param_1 + 0x108,0,iVar9,0);
  }
  plVar1 = (longlong *)(*plVar1 + (longlong)(int)uVar3 * 8);
  FUN_144b3d910(param_2);
  lVar7 = *plVar1;
  *plVar1 = param_2;
  if (lVar7 != 0) {
    FUN_144b3f230();
  }
  lVar7 = (longlong)(int)uVar3 >> 5;
  *(uint *)(*(longlong *)(param_1 + 0x108) + lVar7 * 4) =
       *(uint *)(*(longlong *)(param_1 + 0x108) + lVar7 * 4) | 1 << (uVar3 & 0x1f);
  return;
}



// FUNCTION 1450047c0 FUN_1450047c0 body=1794 status=ok
// SIG undefined FUN_1450047c0(void)

void FUN_1450047c0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 *puVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auVar19 [16];
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar35;
  uint uVar36;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar7 = *param_1;
  if ((*(byte *)(param_2 + 0x20) & 1) == 0) {
    if (lVar7 != 0) {
      FUN_144c3e790(lVar7,*param_2);
    }
  }
  else {
    if (lVar7 != 0) {
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar5 = *param_3;
      }
      else {
        uVar5 = FUN_144ca6690(param_3);
      }
      FUN_144fcded0(uVar5,(int)param_1[4]);
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      if (*(char *)(*param_1 + 0x30) == '\x01') {
        lVar7 = *(longlong *)(*param_1 + 0x20);
      }
      else {
        lVar7 = FUN_147e4bb26();
      }
      *(undefined4 *)(lVar7 + 0x17c) = 0xffffffff;
    }
    if (*param_1 != *param_2) {
      if (*param_2 != 0) {
        FUN_144b3d910();
      }
      lVar7 = *param_1;
      *param_1 = *param_2;
      if (lVar7 != 0) {
        FUN_144b3f230();
      }
    }
    lVar7 = *param_1;
    if (lVar7 != 0) {
      lVar8 = param_1[9];
      *(longlong *)(lVar7 + 0x60) = param_1[8];
      *(longlong *)(lVar7 + 0x68) = lVar8;
      lVar8 = param_1[0xb];
      *(longlong *)(lVar7 + 0x70) = param_1[10];
      *(longlong *)(lVar7 + 0x78) = lVar8;
      lVar8 = param_1[0xd];
      *(longlong *)(lVar7 + 0x80) = param_1[0xc];
      *(longlong *)(lVar7 + 0x88) = lVar8;
      lVar8 = param_1[0xf];
      *(longlong *)(lVar7 + 0x90) = param_1[0xe];
      *(longlong *)(lVar7 + 0x98) = lVar8;
      lVar8 = param_1[0x11];
      *(longlong *)(lVar7 + 0xa0) = param_1[0x10];
      *(longlong *)(lVar7 + 0xa8) = lVar8;
      *(undefined1 (*) [16])(lVar7 + 0xb0) = *(undefined1 (*) [16])(param_1 + 0x12);
      FUN_144ca8090(*(longlong *)(lVar7 + 0x20) + 400,(longlong *)(lVar7 + 0x60),lVar7 + 0xc0);
      FUN_144c3ed40(*param_1,&local_58);
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar5 = *param_3;
      }
      else {
        uVar5 = FUN_144ca6690(param_3);
      }
      uVar4 = FUN_144fcd550(uVar5,&local_58,*(undefined4 *)(*(longlong *)(*param_1 + 0x20) + 0x17c))
      ;
      *(undefined4 *)(param_1 + 4) = uVar4;
    }
  }
  lVar7 = param_1[1];
  if ((*(byte *)(param_2 + 0x20) & 2) == 0) {
    if (lVar7 != 0) {
      FUN_144c4a090(lVar7,param_2[1]);
    }
  }
  else {
    if (lVar7 != 0) {
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar5 = *param_3;
      }
      else {
        uVar5 = FUN_144ca6690(param_3);
      }
      FUN_144fcded0(uVar5,(int)param_1[4]);
      *(undefined4 *)(param_1 + 4) = 0xffffffff;
      if (*(char *)(param_1[1] + 0x30) == '\x01') {
        lVar7 = *(longlong *)(param_1[1] + 0x20);
      }
      else {
        lVar7 = FUN_147e4bde2();
      }
      *(undefined4 *)(lVar7 + 0x94) = 0xffffffff;
    }
    if (param_1[1] != param_2[1]) {
      if (param_2[1] != 0) {
        FUN_144b3d910();
      }
      lVar7 = param_1[1];
      param_1[1] = param_2[1];
      if (lVar7 != 0) {
        FUN_144b3f230();
      }
    }
    lVar7 = param_1[1];
    if (lVar7 != 0) {
      *(char *)(lVar7 + 0x40) = (char)param_1[0x14];
      lVar8 = param_1[0x17];
      *(longlong *)(lVar7 + 0x50) = param_1[0x16];
      *(longlong *)(lVar7 + 0x58) = lVar8;
      lVar7 = param_1[1];
      lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x20) + 0x38);
      auVar19 = *(undefined1 (*) [16])(lVar8 + 0x80);
      uVar24 = auVar19._0_4_;
      auVar34 = *(undefined1 (*) [16])(lVar8 + 0x90);
      if (*(byte *)(lVar7 + 0x40) != 0) {
        uVar18 = (uint)*(byte *)(lVar7 + 0x40);
        uVar26 = -(uint)(0x16a8300 << uVar18 < 0);
        uVar27 = -(uint)(0x502ab000 << uVar18 < 0);
        uVar28 = -(uint)(0xa2a8c00 << uVar18 < 0);
        uVar25 = auVar19._4_4_;
        uVar21 = auVar19._8_4_;
        uVar29 = -(uint)(0xa154c00 << uVar18 < 0);
        uVar30 = -(uint)(0x1554300 << uVar18 < 0);
        uVar31 = -(uint)(0x50157000 << uVar18 < 0);
        uVar9 = (ulonglong)uVar18;
        uVar32 = auVar34._0_4_;
        uVar35 = auVar34._4_4_;
        uVar36 = auVar34._8_4_;
        uVar18 = (0xae71e0U >> uVar9) << 0x1f;
        uVar20 = (0xb9e306U >> uVar9) << 0x1f;
        uVar22 = (0xeb903cU >> uVar9) << 0x1f;
        uVar23 = (0U >> uVar9) << 0x1f;
        uVar5 = CONCAT44((~uVar30 & (uVar21 & uVar27 | ~uVar27 & uVar25) | uVar24 & uVar30) ^ uVar20
                         ,(~uVar29 & (uVar25 & uVar26 | ~uVar26 & uVar24) | uVar21 & uVar29) ^
                          uVar18);
        uVar24 = (~uVar31 & (uVar24 & uVar28 | ~uVar28 & uVar21) | uVar25 & uVar31) ^ uVar22;
        uVar25 = auVar19._12_4_ ^ uVar23;
        auVar33._8_4_ = uVar24;
        auVar33._0_8_ = uVar5;
        auVar33._12_4_ = uVar25;
        auVar17._0_4_ = (~uVar29 & (uVar35 & uVar26 | ~uVar26 & uVar32) | uVar36 & uVar29) ^ uVar18;
        auVar17._4_4_ = (~uVar30 & (uVar36 & uVar27 | ~uVar27 & uVar35) | uVar32 & uVar30) ^ uVar20;
        auVar17._8_4_ = (~uVar31 & (uVar32 & uVar28 | ~uVar28 & uVar36) | uVar35 & uVar31) ^ uVar22;
        auVar17._12_4_ = auVar34._12_4_ ^ uVar23;
        auVar19._8_4_ = uVar24;
        auVar19._0_8_ = uVar5;
        auVar19._12_4_ = uVar25;
        auVar19 = minps(auVar19,auVar17);
        auVar34 = maxps(auVar33,auVar17);
      }
      local_58 = auVar19._0_4_ + *(float *)(lVar7 + 0x50);
      fStack_54 = auVar19._4_4_ + *(float *)(lVar7 + 0x54);
      fStack_50 = auVar19._8_4_ + *(float *)(lVar7 + 0x58);
      fStack_4c = auVar19._12_4_ + *(float *)(lVar7 + 0x5c);
      local_48 = auVar34._0_4_ + *(float *)(lVar7 + 0x50);
      fStack_44 = auVar34._4_4_ + *(float *)(lVar7 + 0x54);
      fStack_40 = auVar34._8_4_ + *(float *)(lVar7 + 0x58);
      fStack_3c = auVar34._12_4_ + *(float *)(lVar7 + 0x5c);
      uVar4 = *(undefined4 *)(*(longlong *)(lVar7 + 0x20) + 0x94);
      if (*(char *)(param_3 + 2) == '\x01') {
        uVar5 = *param_3;
      }
      else {
        uVar5 = FUN_144ca6690(param_3);
      }
      uVar4 = FUN_144fcd550(uVar5,&local_58,uVar4);
      *(undefined4 *)(param_1 + 4) = uVar4;
    }
  }
  iVar1 = (int)param_2[3];
  lVar7 = (longlong)iVar1;
  uVar9 = 0;
  if ((int)param_1[3] < iVar1) {
    if ((int)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) < iVar1) {
      FUN_145005040(param_1 + 2,&PTR_vftable_14c6e47a0,lVar7);
    }
    iVar3 = (int)param_1[3];
    if (iVar3 < iVar1) {
      lVar8 = param_1[2];
      *(int *)(param_1 + 3) = iVar1;
      for (puVar6 = (undefined8 *)(lVar8 + (longlong)iVar3 * 8);
          puVar6 != (undefined8 *)(lVar8 + lVar7 * 8); puVar6 = puVar6 + 1) {
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = 0;
        }
      }
    }
    else if (iVar1 < iVar3) {
      lVar11 = param_1[2];
      *(int *)(param_1 + 3) = iVar1;
      lVar8 = lVar11 + (longlong)iVar3 * 8;
      while (lVar8 != lVar11 + lVar7 * 8) {
        plVar10 = (longlong *)(lVar8 + -8);
        lVar8 = lVar8 + -8;
        if (*plVar10 != 0) {
          FUN_144b3f230();
        }
      }
    }
    FUN_144c3fad0(param_1 + 0x21,0,(int)param_2[3],0);
  }
  uVar14 = uVar9;
  if (0 < (int)param_2[3]) {
    do {
      lVar7 = *(longlong *)(uVar9 + param_1[2]);
      if ((*(uint *)(param_2[0x21] + ((longlong)(int)uVar14 >> 5) * 4) >> ((byte)uVar14 & 0x1f) & 1)
          == 0) {
        if (lVar7 != 0) {
          FUN_144c37180(lVar7,*(undefined8 *)(param_2[2] + uVar9));
        }
      }
      else {
        if (lVar7 != 0) {
          if (*(char *)(lVar7 + 0x30) == '\x01') {
            lVar7 = *(longlong *)(lVar7 + 0x20);
          }
          else {
            lVar7 = FUN_147e4bc84();
          }
          *(undefined4 *)(lVar7 + 100) = 0xffffffff;
        }
        lVar7 = param_2[2];
        lVar8 = param_1[2];
        lVar11 = *(longlong *)(lVar7 + uVar9);
        if (*(longlong *)(lVar8 + uVar9) != lVar11) {
          if (lVar11 != 0) {
            FUN_144b3d910();
          }
          lVar11 = *(longlong *)(lVar8 + uVar9);
          *(undefined8 *)(lVar8 + uVar9) = *(undefined8 *)(lVar7 + uVar9);
          if (lVar11 != 0) {
            FUN_144b3f230();
          }
        }
        lVar7 = *(longlong *)(uVar9 + param_1[2]);
        if (lVar7 != 0) {
          lVar8 = param_1[9];
          *(longlong *)(lVar7 + 0x40) = param_1[8];
          *(longlong *)(lVar7 + 0x48) = lVar8;
          lVar8 = param_1[0xb];
          *(longlong *)(lVar7 + 0x50) = param_1[10];
          *(longlong *)(lVar7 + 0x58) = lVar8;
          lVar8 = param_1[0xd];
          *(longlong *)(lVar7 + 0x60) = param_1[0xc];
          *(longlong *)(lVar7 + 0x68) = lVar8;
          *(undefined1 (*) [16])(lVar7 + 0x70) = *(undefined1 (*) [16])(param_1 + 0xe);
        }
      }
      uVar24 = (int)uVar14 + 1;
      uVar9 = uVar9 + 8;
      uVar14 = (ulonglong)uVar24;
    } while ((int)uVar24 < (int)param_2[3]);
  }
  *(int *)(param_1 + 5) = (int)param_2[5];
  plVar10 = param_1 + 0x18;
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | *(byte *)(param_2 + 0x20);
  if (plVar10 != param_2 + 0x18) {
    iVar1 = (int)param_2[0x19];
    lVar7 = param_2[0x18];
    if ((int)(*(uint *)((longlong)param_1 + 0xcc) & 0x7fffffff) < iVar1) {
      FUN_144ca0dc0(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*plVar10,lVar7,(longlong)iVar1 * 8);
    *(int *)(param_1 + 0x19) = iVar1;
    plVar10 = param_1 + 0x1a;
    if (param_2 + 0x1a != plVar10) {
      lVar7 = *plVar10;
      if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar7,0);
        FUN_144b3ec00(plVar10);
      }
      FUN_140069ea2(plVar10,param_2 + 0x1a);
    }
  }
  plVar10 = param_1 + 0x1c;
  if (plVar10 != param_2 + 0x1c) {
    iVar1 = (int)param_2[0x1d];
    lVar7 = param_2[0x1c];
    if ((int)(*(uint *)((longlong)param_1 + 0xec) & 0x7fffffff) < iVar1) {
      FUN_144c9e700(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    if (iVar1 < (int)param_1[0x1d]) {
      lVar8 = *plVar10;
      lVar11 = (longlong)(int)param_1[0x1d] * 0x10 + *plVar10;
      while (lVar11 != (longlong)iVar1 * 0x10 + lVar8) {
        plVar12 = (longlong *)(lVar11 + -8);
        lVar11 = lVar11 + -0x10;
        if (*plVar12 != 0) {
          FUN_144b3f230();
        }
      }
    }
    lVar8 = *plVar10;
    iVar3 = iVar1;
    if ((int)param_1[0x1d] < iVar1) {
      iVar3 = (int)param_1[0x1d];
    }
    if ((lVar8 != lVar7) && (lVar11 = (longlong)iVar3, 0 < iVar3)) {
      plVar12 = (longlong *)(lVar7 + 8);
      lVar15 = lVar8 - lVar7;
      do {
        *(int *)(lVar15 + -8 + (longlong)plVar12) = (int)plVar12[-1];
        *(undefined4 *)((longlong)plVar12 + lVar15 + -4) =
             *(undefined4 *)((longlong)plVar12 + (lVar7 - lVar8) + lVar15 + -4);
        if (*(longlong *)(lVar15 + (longlong)plVar12) != *plVar12) {
          if (*plVar12 != 0) {
            FUN_144b3d910();
          }
          lVar2 = *(longlong *)(lVar15 + (longlong)plVar12);
          *(longlong *)(lVar15 + (longlong)plVar12) = *plVar12;
          if (lVar2 != 0) {
            FUN_144b3f230();
          }
        }
        plVar12 = plVar12 + 2;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    puVar13 = (undefined4 *)((longlong)iVar3 * 0x10 + lVar7);
    if (0 < iVar1 - iVar3) {
      uVar9 = (ulonglong)(uint)(iVar1 - iVar3);
      puVar16 = (undefined4 *)(*plVar10 + (longlong)iVar3 * 0x10);
      do {
        if (puVar16 != (undefined4 *)0x0) {
          *puVar16 = *puVar13;
          puVar16[1] = puVar13[1];
          lVar7 = *(longlong *)(puVar13 + 2);
          *(longlong *)(puVar16 + 2) = lVar7;
          if (lVar7 != 0) {
            FUN_144b3d910();
          }
          puVar13 = puVar13 + 4;
        }
        uVar9 = uVar9 - 1;
        puVar16 = puVar16 + 4;
      } while (uVar9 != 0);
    }
    *(int *)(param_1 + 0x1d) = iVar1;
    param_1 = param_1 + 0x1e;
    if (param_2 + 0x1e != param_1) {
      lVar7 = *param_1;
      if ((lVar7 != 0) && (*(int *)(lVar7 + 4) != -2)) {
        (*DAT_14c787678)(DAT_14c6e47a8,lVar7,0);
        FUN_144b3ec00(param_1);
      }
      FUN_140069ea2(param_1,param_2 + 0x1e);
    }
  }
  return;
}



// FUNCTION 145004ed0 FUN_145004ed0 body=166 status=ok
// SIG undefined FUN_145004ed0(void)

undefined8 * FUN_145004ed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar2 = *(uint *)(param_2 + 1);
  puVar4 = (undefined4 *)*param_2;
  if (0 < (int)uVar2) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
    *param_1 = puVar3;
    *(uint *)(param_1 + 1) = uVar2;
    uVar5 = (ulonglong)uVar2;
    *(uint *)((longlong)param_1 + 0xc) = uVar2;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
        puVar1 = puVar4 + 1;
        puVar4 = puVar4 + 2;
        puVar3[1] = *puVar1;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 2;
    } while (uVar5 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 145004f80 FUN_145004f80 body=192 status=ok
// SIG undefined FUN_145004f80(void)

undefined8 * FUN_145004f80(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = *(uint *)(param_2 + 1);
  uVar5 = (ulonglong)uVar1;
  lVar2 = *param_2;
  if (0 < (int)uVar1) {
    puVar3 = (undefined4 *)
             (**(code **)(PTR_vftable_14c6e47a0 + 8))
                       (&PTR_vftable_14c6e47a0,(longlong)(int)uVar1 << 4);
    *param_1 = puVar3;
    *(uint *)(param_1 + 1) = uVar1;
    plVar4 = (longlong *)(lVar2 + 8);
    *(uint *)((longlong)param_1 + 0xc) = uVar1;
    do {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = (int)plVar4[-1];
        puVar3[1] = *(undefined4 *)((longlong)plVar4 + -4);
        lVar2 = *plVar4;
        *(longlong *)(puVar3 + 2) = lVar2;
        if (lVar2 != 0) {
          FUN_144b3d910();
        }
        plVar4 = plVar4 + 2;
      }
      uVar5 = uVar5 - 1;
      puVar3 = puVar3 + 4;
    } while (uVar5 != 0);
  }
  FUN_140069ea2(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 145005040 FUN_145005040 body=319 status=ok
// SIG undefined FUN_145005040(void)

void FUN_145005040(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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



// FUNCTION 145005180 FUN_145005180 body=85 status=ok
// SIG undefined FUN_145005180(void)

undefined8 * FUN_145005180(undefined8 *param_1,longlong param_2)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkaiCarver::vftable;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
    *(undefined4 *)(param_1 + 4) = 1;
    return param_1;
  }
  *(undefined4 *)(param_1 + 4) = 1;
  return param_1;
}



// FUNCTION 1450051e0 FUN_1450051e0 body=49 status=ok
// SIG undefined FUN_1450051e0(void)

void FUN_1450051e0(undefined8 *param_1)

{
  *param_1 = hkaiCarver::vftable;
  if (param_1[3] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145005220 FUN_145005220 body=17 status=ok
// SIG undefined FUN_145005220(void)

void FUN_145005220(longlong param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 1;
    return;
  }
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffffffe;
  return;
}



// FUNCTION 145005240 FUN_145005240 body=49 status=ok
// SIG undefined FUN_145005240(void)

void FUN_145005240(undefined8 *param_1)

{
  *param_1 = hkaiMaterialPainter::vftable;
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 145005280 FUN_145005280 body=111 status=ok
// SIG undefined FUN_145005280(void)

longlong FUN_145005280(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x1c) = 0x80000000;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = FUN_144b3d480();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_144b3d480();
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x80000000;
  uVar1 = FUN_144b3d480();
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  return param_1;
}



// FUNCTION 1450052f0 FUN_1450052f0 body=61 status=ok
// SIG undefined FUN_1450052f0(void)

void FUN_1450052f0(longlong param_1)

{
  FUN_145006c40(param_1 + 0x50);
  FUN_1450069e0(param_1 + 0x30);
  FUN_145006760(param_1 + 0x10);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_144b3f230();
    return;
  }
  return;
}



// FUNCTION 145005330 FUN_145005330 body=79 status=ok
// SIG undefined FUN_145005330(void)

void FUN_145005330(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  if (param_3 != 0) {
    FUN_144b3d910(param_3);
  }
  lVar1 = *(longlong *)(param_1 + 2);
  *(longlong *)(param_1 + 2) = param_3;
  if (lVar1 != 0) {
    FUN_144b3f230();
  }
  FUN_1450065c0(param_1 + 4);
  FUN_1450067e0(param_1 + 0xc);
  return;
}



// FUNCTION 145005380 FUN_145005380 body=439 status=ok
// SIG undefined FUN_145005380(void)

void FUN_145005380(longlong *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  lVar3 = param_1[3];
  *(int *)(param_1 + 3) = param_3;
  iVar5 = param_3 + 0x1f >> 5;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
    FUN_140163394(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    param_3 = (int)param_1[3];
  }
  if (((int)param_1[1] < iVar5) || (iVar5 < (int)param_1[1])) {
    *(int *)(param_1 + 1) = iVar5;
  }
  if (0 < param_3) {
    param_3 = 0;
  }
  if ((param_2 < param_3) && (0 < param_3 - param_2)) {
    lVar2 = *param_1;
    iVar5 = param_3 >> 5;
    uVar4 = -1 << ((byte)param_2 & 0x1f);
    uVar8 = -1 << ((byte)param_3 & 0x1f);
    iVar7 = param_2 >> 5;
    uVar9 = -param_4;
    uVar6 = ~uVar8;
    if (iVar7 == iVar5) {
      uVar6 = uVar6 & uVar4;
      if (uVar6 != 0) {
        puVar1 = (uint *)(lVar2 + (longlong)iVar7 * 4);
        *puVar1 = ~uVar6 & *puVar1 | uVar6 & uVar9;
      }
    }
    else {
      puVar1 = (uint *)(lVar2 + (longlong)iVar7 * 4);
      *puVar1 = ~uVar4 & *puVar1 | uVar9 & uVar4;
      if (uVar6 != 0) {
        *(uint *)(lVar2 + (longlong)iVar5 * 4) =
             *(uint *)(lVar2 + (longlong)iVar5 * 4) & uVar8 | uVar6 & uVar9;
      }
      FUN_144bfb550(lVar2 + (longlong)(iVar7 + 1) * 4,-param_4,(longlong)((iVar5 - iVar7) + -1));
    }
  }
  if (param_2 < (int)lVar3) {
    param_2 = (int)lVar3;
  }
  uVar4 = (int)param_1[3] + 0x1f;
  uVar6 = uVar4 & 0xffffffe0;
  if ((param_2 < (int)uVar6) && (0 < (int)(uVar6 - param_2))) {
    lVar3 = *param_1;
    iVar7 = param_2 >> 5;
    iVar5 = (int)uVar4 >> 5;
    uVar4 = -1 << ((byte)param_2 & 0x1f);
    if (iVar7 != iVar5) {
      puVar1 = (uint *)(lVar3 + (longlong)iVar7 * 4);
      *puVar1 = ~uVar4 & *puVar1 | -param_4 & uVar4;
      FUN_144bfb550(lVar3 + (longlong)(iVar7 + 1) * 4,-param_4,(longlong)((iVar5 - iVar7) + -1));
    }
  }
  return;
}



// FUNCTION 145005540 FUN_145005540 body=104 status=ok
// SIG undefined FUN_145005540(void)

void FUN_145005540(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 145005640 FUN_145005640 body=133 status=ok
// SIG undefined FUN_145005640(void)

void FUN_145005640(undefined8 *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if (*(int *)(param_1 + 1) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    puVar1 = (undefined1 *)
             (**(code **)(*param_2 + 8))(param_2,(longlong)*(int *)(param_1 + 1) * 0xc);
    uVar4 = *(uint *)(param_1 + 1);
    uVar5 = (ulonglong)uVar4;
    puVar3 = (undefined1 *)*param_1;
    puVar2 = puVar1;
    if (0 < (int)uVar4) {
      do {
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = *puVar3;
          *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(puVar3 + 4);
          *(undefined4 *)(puVar2 + 8) = *(undefined4 *)(puVar3 + 8);
        }
        puVar2 = puVar2 + 0xc;
        puVar3 = puVar3 + 0xc;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *param_1 = puVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
  }
  return;
}



// FUNCTION 1450056d0 FUN_1450056d0 body=155 status=ok
// SIG undefined FUN_1450056d0(void)

void FUN_1450056d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    if ((int)param_1[1] == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      *param_1 = 0;
      return;
    }
    lVar1 = (**(code **)(*param_2 + 8))(param_2,(longlong)(int)param_1[1] << 4);
    uVar4 = *(uint *)(param_1 + 1);
    puVar3 = (undefined4 *)*param_1;
    if (0 < (int)uVar4) {
      puVar2 = (undefined4 *)(lVar1 + 4);
      uVar5 = (ulonglong)uVar4;
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
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      uVar4 = *(uint *)(param_1 + 1);
    }
    *param_1 = lVar1;
    *(uint *)((longlong)param_1 + 0xc) = uVar4;
  }
  return;
}



// FUNCTION 145005770 FUN_145005770 body=1434 status=ok
// SIG undefined FUN_145005770(void)

void FUN_145005770(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong *param_5,undefined8 param_6)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint *puVar8;
  uint *puVar9;
  longlong lVar10;
  uint *puVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ushort *puVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  int iVar20;
  undefined8 local_res10;
  int local_res18;
  undefined8 *local_res20;
  uint *local_d8;
  undefined8 uStack_d0;
  uint local_c8;
  uint *local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  uint *local_a8;
  uint *puStack_a0;
  ushort *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  longlong lStack_80;
  
  local_a8 = (uint *)param_2[1];
  puVar19 = (uint *)*param_2;
  lVar10 = (longlong)local_a8 - (longlong)puVar19;
  local_res18 = 0;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_res20 = param_4;
  if (*(char *)(lVar14 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar7 = *(longlong *)(lVar14 + 0xf0);
  if (lVar7 == 0) {
    if (*(char *)(lVar14 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar7 = FUN_144b3f4a0();
    *(longlong *)(lVar14 + 0xf0) = lVar7;
  }
  lVar14 = *(longlong *)(*(longlong *)(lVar7 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar14 + 8) != 0) {
    lVar14 = 0;
  }
  local_b8 = (longlong)(int)(lVar10 / 0x58) * 0x30;
  local_b0 = local_b8;
  local_88 = lVar14;
  if (lVar14 == 0) {
    puVar8 = (uint *)(*DAT_14c787670)(1,&local_b8,0x40);
  }
  else {
    local_res10 = local_b8 + 0x3f & 0xffffffffffffffc0;
    if (local_res10 <= *(ulonglong *)(lVar14 + 0x28)) {
      puVar8 = *(uint **)(lVar14 + 0x38);
      local_c0 = puVar8;
      if (local_res10 + (longlong)puVar8 <= *(ulonglong *)(lVar14 + 0x40)) {
        *(ulonglong *)(lVar14 + 0x38) = local_res10 + (longlong)puVar8;
        goto LAB_145005893;
      }
    }
    puVar8 = (uint *)FUN_144b454a0(lVar14,&local_res10);
  }
LAB_145005893:
  puVar11 = (uint *)*param_3;
  local_res10._0_4_ = 0x80000000;
  uVar12 = param_3[1] - (longlong)puVar11 >> 2;
  local_d8 = (uint *)0x0;
  uStack_d0._0_4_ = 0;
  uStack_d0._4_4_ = 0x80000000;
  uVar6 = (uint)uVar12;
  local_c0 = puVar8;
  local_b8 = uVar12;
  if (0 < (int)uVar6) {
    FUN_144c585a0(&local_d8,&PTR_vftable_14c6e47c0,(longlong)(int)uVar6);
    uVar16 = uVar12 & 0xffffffff;
    puVar9 = local_d8;
    do {
      if (puVar9 != (uint *)0x0) {
        uVar17 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar9 = uVar17;
      }
      uVar16 = uVar16 - 1;
      puVar9 = puVar9 + 1;
    } while (uVar16 != 0);
    local_res10._0_4_ = uStack_d0._4_4_;
  }
  local_c8 = 0;
  puVar11 = local_d8;
  uVar17 = (uint)local_res10;
  iVar18 = 0;
  uStack_d0._0_4_ = uVar6;
  uStack_d0._4_4_ = (uint)local_res10;
  if (puVar19 != local_a8) {
    do {
      uVar6 = (uint)uVar12;
      if ((puVar19[1] & 1) == 0) {
        local_res18 = iVar18 + 1;
        puVar11 = puVar8 + (longlong)iVar18 * 0xc;
        if (puVar11 != puVar8 + (longlong)local_res18 * 0xc) {
          puVar9 = puVar11 + 4;
          do {
            if (puVar9 != (uint *)&DAT_00000010) {
              *puVar9 = 0;
              *(uint **)(puVar9 + -2) = puVar9 + 2;
              puVar9[1] = 0x80000001;
              puVar9[4] = 0;
              if (((int)*puVar9 < 0) || (0 < (int)*puVar9)) {
                *puVar9 = 0;
              }
            }
            puVar1 = puVar9 + 8;
            puVar9 = puVar9 + 0xc;
          } while (puVar1 != puVar8 + (longlong)local_res18 * 0xc);
        }
        puVar9 = puVar11 + 2;
        uVar16 = (ulonglong)(*puVar19 & 0x3fffff);
        *puVar11 = *puVar19 & 0x3fffff;
        puVar11[10] = local_c8;
        lVar14 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
        iVar20 = (int)*(short *)(lVar14 + 10 + uVar16 * 0xc) +
                 (int)*(short *)(lVar14 + 8 + uVar16 * 0xc);
        FUN_145005380(puVar9,0,iVar20,1);
        puVar15 = *(ushort **)(puVar19 + 2);
        local_98 = puVar15 + (longlong)(int)puVar19[4] * 3;
        iVar18 = 0;
        iVar5 = 0;
        for (; puVar11 = local_d8, puVar8 = local_c0, puVar15 != local_98; puVar15 = puVar15 + 3) {
          uVar4 = puVar15[1];
          iVar2 = (uint)*puVar15 + iVar18;
          if (iVar18 < iVar2) {
            uVar12 = (ulonglong)(uint)*puVar15;
            lVar10 = (longlong)(iVar2 + -1) * 8;
            lVar7 = (longlong)iVar18 * 8;
            do {
              lVar10 = *(longlong *)(puVar19 + 10) + lVar10;
              bVar3 = *(byte *)(lVar10 + 2);
              if ((((bVar3 & 3) == 0) && ((bVar3 >> 2 & 1) == 0)) &&
                 ((*(byte *)(*(longlong *)(puVar19 + 10) + lVar7 + 2) & 4) == 0)) {
                uVar6 = *(uint *)(lVar10 + 4);
                lVar10 = (longlong)((int)uVar6 >> 5);
                *(uint *)(*(longlong *)puVar9 + lVar10 * 4) =
                     *(uint *)(*(longlong *)puVar9 + lVar10 * 4) & ~(1 << (uVar6 & 0x1f));
              }
              uVar12 = uVar12 - 1;
              lVar10 = lVar7;
              lVar7 = lVar7 + 8;
            } while (uVar12 != 0);
          }
          for (lVar10 = (longlong)iVar5; lVar10 < (int)((uint)uVar4 + iVar5); lVar10 = lVar10 + 1) {
            lVar7 = *(longlong *)(puVar19 + 0xe) + lVar10 * 8;
            bVar3 = *(byte *)(*(longlong *)(puVar19 + 0xe) + 4 + lVar10 * 8);
            if ((((bVar3 & 3) == 0) && ((bVar3 >> 2 & 1) == 0)) &&
               (((*(byte *)(lVar7 + 5) & 4) == 0 &&
                (uVar6 = (uint)*(ushort *)(lVar7 + 6) + (int)*(short *)(lVar14 + uVar16 * 0xc + 8),
                (int)uVar6 < iVar20)))) {
              *(uint *)(*(longlong *)puVar9 + (longlong)((int)uVar6 >> 5) * 4) =
                   *(uint *)(*(longlong *)puVar9 + (longlong)((int)uVar6 >> 5) * 4) &
                   ~(1 << (uVar6 & 0x1f));
            }
          }
          uVar12 = local_b8;
          iVar18 = iVar2;
          iVar5 = (uint)uVar4 + iVar5;
        }
      }
      else {
        uVar17 = *puVar19;
        uVar13 = uVar6 + 1;
        if ((int)((uint)local_res10 & 0x7fffffff) < (int)uVar13) {
          FUN_144c584b0(&local_d8,&PTR_vftable_14c6e47c0,(longlong)(int)uVar13);
          local_res10._0_4_ = uStack_d0._4_4_;
          puVar11 = local_d8;
          uVar6 = (uint)uStack_d0;
        }
        if (puVar11 + (int)uVar6 != (uint *)0x0) {
          puVar11[(int)uVar6] = uVar17 & 0x3fffff;
        }
        uVar12 = (ulonglong)uVar13;
        local_b8 = uVar12;
        uStack_d0._0_4_ = uVar13;
      }
      uVar17 = (uint)local_res10;
      FUN_144be90e0(0x6bed4449);
      puVar19 = puVar19 + 0x16;
      local_c8 = local_c8 + 1;
      lVar14 = local_88;
      iVar18 = local_res18;
    } while (puVar19 != local_a8);
  }
  local_88 = *param_5;
  lStack_80 = param_5[1];
  local_98 = (ushort *)*local_res20;
  uStack_90 = *(undefined4 *)(local_res20 + 1);
  uStack_8c = *(undefined4 *)((longlong)local_res20 + 0xc);
  puStack_a0 = puVar11 + (int)uVar12;
  puVar19 = puVar8 + (longlong)local_res18 * 0xc;
  local_d8 = puVar8;
  uStack_d0 = puVar19;
  local_a8 = puVar11;
  FUN_145005d10(param_1,&local_d8,&local_a8,&local_98,&local_88,param_6);
  FUN_144be90e0(0xf7b91a59);
  for (; puVar19 != puVar8; puVar19 = puVar19 + -0xc) {
    FUN_145005540(puVar19 + -10);
  }
  FUN_144be90e0(0x4df00b5e);
  FUN_144be90e0(0x25bed9e4);
  if ((-1 < (int)uVar17) && (puVar11 != (uint *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,puVar11,(ulonglong)(uVar17 & 0x7fffffff) << 2);
  }
  FUN_144be90e0(0x1a99144c);
  if (lVar14 == 0) {
    (*DAT_14c787678)(1,puVar8);
  }
  else {
    uVar12 = local_b0 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar14 + 0x28) < uVar12) ||
       ((longlong)puVar8 + uVar12 != *(longlong *)(lVar14 + 0x38))) {
      FUN_144be8550(lVar14,puVar8);
    }
    else {
      *(uint **)(lVar14 + 0x38) = puVar8;
      if (*(uint **)(lVar14 + 0x48) == puVar8) {
        FUN_144be8430(lVar14);
      }
    }
  }
  return;
}



// FUNCTION 145005d10 FUN_145005d10 body=657 status=ok
// SIG undefined FUN_145005d10(void)

void FUN_145005d10(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined8 local_res10;
  
  FUN_144be90e0(0x58477f9);
  piVar2 = (int *)param_2[1];
  lVar4 = CONCAT44(param_6._4_4_,(int)param_6);
  for (piVar7 = (int *)*param_2; piVar7 != piVar2; piVar7 = piVar7 + 0xc) {
    lVar5 = (longlong)*piVar7;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    if ((int)*(short *)(lVar6 + 10 + lVar5 * 0xc) + (int)*(short *)(lVar6 + 8 + lVar5 * 0xc) < 0x17)
    {
      FUN_145007680(param_1,param_1 + 0x10);
    }
    else {
      FUN_145007ac0(param_1,param_1 + 0x30,piVar7,lVar6 + lVar5 * 0xc,lVar4);
    }
    FUN_144be90e0(0x9135a17c);
  }
  piVar2 = (int *)param_3[1];
  for (piVar7 = (int *)*param_3; piVar7 != piVar2; piVar7 = piVar7 + 1) {
    param_6._0_4_ = *piVar7;
    lVar5 = (longlong)(int)param_6;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    if ((int)*(short *)(lVar6 + 10 + lVar5 * 0xc) + (int)*(short *)(lVar6 + 8 + lVar5 * 0xc) < 0x17)
    {
      FUN_145008080(param_1,param_1 + 0x10);
    }
    else {
      FUN_1450083d0(param_1,param_1 + 0x30,&param_6,lVar6 + lVar5 * 0xc,lVar4);
    }
    FUN_144be90e0(0x57f819de);
  }
  puVar3 = (undefined4 *)param_4[1];
  puVar8 = (undefined4 *)*param_4;
  if (puVar8 != puVar3) {
    param_6._0_4_ = -1;
    do {
      local_res10 = CONCAT44(local_res10._4_4_,*puVar8);
      FUN_1450070c0(param_1,&local_res10,&param_6,lVar4);
      puVar8 = puVar8 + 1;
    } while (puVar8 != puVar3);
  }
  piVar2 = (int *)((undefined8 *)CONCAT44(param_5._4_4_,(int)param_5))[1];
  for (piVar7 = *(int **)CONCAT44(param_5._4_4_,(int)param_5); piVar7 != piVar2; piVar7 = piVar7 + 1
      ) {
    iVar1 = *piVar7;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    if ((int)*(short *)(lVar6 + 10 + (longlong)iVar1 * 0xc) +
        (int)*(short *)(lVar6 + 8 + (longlong)iVar1 * 0xc) < 0x17) {
      param_6._0_4_ = -1;
      param_5._0_4_ = iVar1;
      FUN_145008890(param_1,param_1 + 0x10,&param_5,&param_6,lVar4);
    }
    else {
      param_6._0_4_ = iVar1;
      lVar6 = FUN_145009690(param_1 + 0x30,&param_6);
      if (lVar6 == 0) {
        local_res10 = 0xffffffffffffffff;
      }
      else {
        local_res10 = CONCAT44((int)(lVar6 - *(longlong *)(param_1 + 0x40) >> 3),
                               *(undefined4 *)(lVar6 + 4));
      }
      param_6._0_4_ = -1;
      param_5._0_4_ = iVar1;
      FUN_14500a750(param_1,param_1 + 0x30,local_res10,&param_5,&param_6,lVar4);
    }
  }
  FUN_145008d80(lVar4,&LAB_1450055b0);
  FUN_145008fc0(lVar4 + 0x10,&LAB_1450055d0);
  return;
}



// FUNCTION 145005fb0 FUN_145005fb0 body=839 status=ok
// SIG undefined FUN_145005fb0(void)

void FUN_145005fb0(longlong param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int local_res10 [2];
  longlong local_48;
  undefined4 local_40;
  uint local_3c;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  if (*param_2 == *param_4) {
    bVar3 = false;
    local_3c = 0x80000000;
    local_48 = 0;
    local_40 = 0;
    FUN_145009210(plVar1,local_res10,param_2,&local_48);
    lVar4 = (longlong)local_res10[0];
    lVar2 = *plVar1;
    iVar10 = *(int *)(lVar2 + 0x10 + lVar4 * 0x18);
    lVar5 = lVar2 + lVar4 * 0x18;
    piVar6 = *(int **)(lVar2 + 8 + lVar4 * 0x18);
    piVar8 = piVar6 + (longlong)iVar10 * 2;
    for (; piVar6 != piVar8; piVar6 = piVar6 + 2) {
      if (*piVar6 != -2) goto LAB_145006043;
    }
    bVar3 = true;
LAB_145006043:
    iVar9 = param_5;
    if (param_5 < param_3) {
      iVar9 = param_3;
    }
    iVar9 = iVar9 + 1;
    if (iVar10 < iVar9) {
      if ((int)(*(uint *)(lVar5 + 0x14) & 0x7fffffff) < iVar9) {
        FUN_14500ad20(lVar5 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      if ((*(int *)(lVar5 + 0x10) < iVar9) || (iVar9 < *(int *)(lVar5 + 0x10))) {
        *(int *)(lVar5 + 0x10) = iVar9;
      }
    }
    piVar8 = (int *)(*(longlong *)(lVar5 + 8) + (longlong)param_3 * 8);
    *piVar8 = *param_2;
    piVar8[1] = param_5;
    piVar8 = (int *)(*(longlong *)(lVar5 + 8) + (longlong)param_5 * 8);
    *piVar8 = *param_2;
    piVar8[1] = param_3;
    if (!bVar3) {
      return;
    }
    local_res10[0] = *param_2;
  }
  else {
    lVar5 = FUN_145009810(plVar1);
    iVar10 = -1;
    if (lVar5 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = *(int *)(lVar5 + 4);
    }
    bVar3 = false;
    if (iVar9 < 0) {
      local_48 = 0;
      local_40 = 0;
      local_3c = 0x80000000;
      FUN_145006d40(plVar1,param_2,&local_48);
      if ((-1 < (int)local_3c) && (local_48 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_48,(ulonglong)(local_3c & 0x7fffffff) << 3);
      }
    }
    lVar5 = FUN_145009810(plVar1,param_4);
    if (lVar5 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = *(int *)(lVar5 + 4);
    }
    if (iVar9 < 0) {
      local_48 = 0;
      local_40 = 0;
      local_3c = 0x80000000;
      FUN_145006d40(plVar1,param_4,&local_48);
      if ((-1 < (int)local_3c) && (local_48 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,local_48,(ulonglong)(local_3c & 0x7fffffff) << 3);
      }
    }
    lVar5 = FUN_145009810(plVar1,param_2);
    if (lVar5 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = *(int *)(lVar5 + 4);
    }
    lVar5 = FUN_145009810(plVar1,param_4);
    if (lVar5 != 0) {
      iVar10 = *(int *)(lVar5 + 4);
    }
    lVar2 = *plVar1;
    piVar8 = *(int **)(lVar2 + 8 + (longlong)iVar9 * 0x18);
    lVar5 = lVar2 + (longlong)iVar9 * 0x18;
    iVar9 = *(int *)(lVar5 + 0x10);
    lVar2 = lVar2 + (longlong)iVar10 * 0x18;
    for (piVar6 = piVar8; piVar6 != piVar8 + (longlong)iVar9 * 2; piVar6 = piVar6 + 2) {
      if (*piVar6 != -2) {
        local_res10[0] = 0;
        goto LAB_1450061f5;
      }
    }
    local_res10[0] = 1;
LAB_1450061f5:
    piVar7 = *(int **)(lVar2 + 8);
    piVar6 = piVar7 + (longlong)*(int *)(lVar2 + 0x10) * 2;
    for (; piVar7 != piVar6; piVar7 = piVar7 + 2) {
      if (*piVar7 != -2) goto LAB_145006219;
    }
    bVar3 = true;
LAB_145006219:
    if (param_3 < iVar9) {
      piVar8 = piVar8 + (longlong)param_3 * 2;
    }
    else {
      iVar9 = iVar9 + 1;
      if ((int)(*(uint *)(lVar5 + 0x14) & 0x7fffffff) < iVar9) {
        FUN_14500ad20(lVar5 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      iVar10 = *(int *)(lVar5 + 0x10);
      *(int *)(lVar5 + 0x10) = iVar9;
      piVar8 = (int *)(*(longlong *)(lVar5 + 8) + (longlong)iVar10 * 8);
    }
    *piVar8 = *param_4;
    piVar8[1] = param_5;
    if (*(int *)(lVar2 + 0x10) <= param_5) {
      iVar10 = *(int *)(lVar2 + 0x10) + 1;
      if ((int)(*(uint *)(lVar2 + 0x14) & 0x7fffffff) < iVar10) {
        FUN_14500ad20(lVar2 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar10);
      }
      param_5 = *(int *)(lVar2 + 0x10);
      *(int *)(lVar2 + 0x10) = iVar10;
    }
    piVar8 = (int *)(*(longlong *)(lVar2 + 8) + (longlong)param_5 * 8);
    *piVar8 = *param_2;
    piVar8[1] = param_3;
    if ((char)local_res10[0] != '\0') {
      local_res10[0] = *param_2;
      FUN_145007260(param_1,local_res10);
    }
    if (!bVar3) {
      return;
    }
    local_res10[0] = *param_4;
  }
  FUN_145007260(param_1,local_res10);
  return;
}



// FUNCTION 145006300 FUN_145006300 body=237 status=ok
// SIG undefined FUN_145006300(void)

void FUN_145006300(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int local_res8 [2];
  undefined4 local_res18 [4];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = 0x80000000;
  bVar4 = false;
  local_38 = 0;
  local_30 = 0;
  FUN_145009210(param_1 + 0x50,local_res8,param_2,&local_38);
  lVar5 = (longlong)local_res8[0];
  lVar3 = *(longlong *)(param_1 + 0x50);
  iVar8 = *(int *)(lVar3 + 0x10 + lVar5 * 0x18);
  lVar1 = lVar3 + lVar5 * 0x18;
  piVar7 = *(int **)(lVar3 + 8 + lVar5 * 0x18);
  for (piVar6 = piVar7; piVar6 != piVar7 + (longlong)iVar8 * 2; piVar6 = piVar6 + 2) {
    if (*piVar6 != -2) goto LAB_145006383;
  }
  bVar4 = true;
LAB_145006383:
  if (param_3 < iVar8) {
    piVar7 = piVar7 + (longlong)param_3 * 2;
  }
  else {
    iVar8 = iVar8 + 1;
    if ((int)(*(uint *)(lVar1 + 0x14) & 0x7fffffff) < iVar8) {
      FUN_14500ad20(lVar1 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    iVar2 = *(int *)(lVar1 + 0x10);
    *(int *)(lVar1 + 0x10) = iVar8;
    piVar7 = (int *)(*(longlong *)(lVar1 + 8) + (longlong)iVar2 * 8);
  }
  piVar7[0] = -1;
  piVar7[1] = -1;
  if (bVar4) {
    local_res18[0] = *param_2;
    FUN_145007260(param_1,local_res18);
  }
  return;
}



// FUNCTION 1450063f0 FUN_1450063f0 body=310 status=ok
// SIG undefined FUN_1450063f0(void)

void FUN_1450063f0(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined2 *param_4)

{
  int *piVar1;
  ushort *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int *piVar5;
  ushort *puVar6;
  int local_res8;
  uint uStackX_c;
  undefined4 local_res18 [2];
  
  lVar3 = FUN_145009810(param_1 + 0x50);
  if (lVar3 == 0) {
    local_res8 = -1;
    uStackX_c = 0xffffffff;
  }
  else {
    local_res8 = *(int *)(lVar3 + 4);
    uStackX_c = (uint)(lVar3 - *(longlong *)(param_1 + 0x60) >> 3);
  }
  puVar2 = (ushort *)param_3[1];
  lVar3 = *(longlong *)(param_1 + 0x50) + (longlong)local_res8 * 0x18;
  for (puVar6 = (ushort *)*param_3; puVar6 != puVar2; puVar6 = puVar6 + 1) {
    *(undefined4 *)(*(longlong *)(lVar3 + 8) + (ulonglong)*puVar6 * 8) = 0xfffffffe;
  }
  piVar5 = *(int **)(lVar3 + 8);
  piVar1 = piVar5 + (longlong)*(int *)(lVar3 + 0x10) * 2;
  while( true ) {
    if (piVar5 == piVar1) {
      if ((*(uint *)(param_1 + 0x68) < uStackX_c) ||
         (lVar3 = *(longlong *)(param_1 + 0x60) + (longlong)(int)uStackX_c * 8,
         *(int *)(*(longlong *)(param_1 + 0x60) + 4 + (longlong)(int)uStackX_c * 8) != local_res8))
      {
        lVar3 = FUN_145009810(param_1 + 0x50,
                              *(longlong *)(param_1 + 0x50) + (longlong)local_res8 * 0x18);
      }
      FUN_145006a90(param_1 + 0x50,lVar3);
      *(undefined1 *)param_4 = 1;
      local_res18[0] = *param_2;
      puVar4 = (undefined1 *)FUN_1450074c0(param_1,&local_res8,local_res18,param_4 + 4);
      *(undefined1 *)((longlong)param_4 + 1) = *puVar4;
      return;
    }
    if (*piVar5 != -2) break;
    piVar5 = piVar5 + 2;
  }
  *param_4 = 0;
  return;
}



// FUNCTION 145006530 FUN_145006530 body=143 status=ok
// SIG undefined FUN_145006530(void)

uint FUN_145006530(longlong param_1,int *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if ((int)*(short *)(lVar1 + 10 + (longlong)*param_2 * 0xc) +
      (int)*(short *)(lVar1 + 8 + (longlong)*param_2 * 0xc) < 0x17) {
    lVar1 = FUN_145009510((longlong *)(param_1 + 0x10));
    if ((lVar1 != 0) && (-1 < *(int *)(lVar1 + 4))) {
      return *(uint *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)*(int *)(lVar1 + 4) * 8) &
             0x400000;
    }
  }
  else {
    lVar1 = FUN_145009690((longlong *)(param_1 + 0x30));
    if ((lVar1 != 0) && (-1 < *(int *)(lVar1 + 4))) {
      return (uint)(*(char *)(*(longlong *)(param_1 + 0x30) + 0xc +
                             (longlong)*(int *)(lVar1 + 4) * 0x28) != '\0');
    }
  }
  return 0;
}



// FUNCTION 1450065c0 FUN_1450065c0 body=125 status=ok
// SIG undefined FUN_1450065c0(void)

void FUN_1450065c0(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
    return;
  }
  return;
}



// FUNCTION 145006640 FUN_145006640 body=288 status=ok
// SIG undefined FUN_145006640(void)

void FUN_145006640(longlong *param_1,uint *param_2)

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
    lVar6 = FUN_145009510(param_1,(longlong)(int)param_1[1] * 8 + -8 + *param_1);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    puVar1 = (undefined4 *)(*param_1 + ((longlong)(int)lVar6 + -1) * 8);
    puVar8 = (undefined4 *)(*param_1 + (longlong)(int)uVar3 * 8);
    if (puVar8 != puVar1) {
      lVar9 = (longlong)puVar1 - (longlong)puVar8;
      lVar6 = 2;
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



// FUNCTION 145006760 FUN_145006760 body=123 status=ok
// SIG undefined FUN_145006760(void)

void FUN_145006760(longlong *param_1)

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
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 1450067e0 FUN_1450067e0 body=183 status=ok
// SIG undefined FUN_1450067e0(void)

void FUN_1450067e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  for (lVar2 = lVar1 + (longlong)(int)param_1[1] * 0x28; lVar2 != lVar1; lVar2 = lVar2 + -0x28) {
    FUN_144bf90d0(lVar2 + -0x18);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x28);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  return;
}



// FUNCTION 1450068a0 FUN_1450068a0 body=309 status=ok
// SIG undefined FUN_1450068a0(void)

void FUN_1450068a0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = param_2[1];
  if (uVar3 != (int)param_1[1] - 1U) {
    lVar6 = FUN_145009690(param_1,*param_1 + ((longlong)(int)param_1[1] + -1) * 0x28);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  FUN_144bf90d0(*param_1 + 0x10 + (longlong)(int)uVar3 * 0x28);
  uVar5 = (int)param_1[1] - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    lVar6 = *param_1 + (longlong)(int)uVar5 * 0x28;
    lVar1 = *param_1 + (longlong)(int)uVar3 * 0x28;
    if (lVar1 != lVar6) {
      if (lVar1 != 0) {
        FUN_145009390(lVar1,lVar6);
      }
      FUN_144bf90d0(lVar6 + 0x10);
    }
  }
  lVar6 = param_1[2];
  uVar8 = (ulonglong)(int)param_1[3];
  uVar7 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar8;
  puVar2 = (uint *)(lVar6 + uVar7 * 8);
  iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  while (-1 < iVar4) {
    lVar6 = lVar6 + ((ulonglong)*puVar2 & uVar8 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar2 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar2;
      param_2 = puVar2;
    }
    lVar6 = param_1[2];
    uVar8 = (ulonglong)(int)param_1[3];
    uVar7 = ((longlong)puVar2 - lVar6 >> 3) + 1U & uVar8;
    puVar2 = (uint *)(lVar6 + uVar7 * 8);
    iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 1450069e0 FUN_1450069e0 body=175 status=ok
// SIG undefined FUN_1450069e0(void)

void FUN_1450069e0(longlong *param_1)

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
    FUN_144bf90d0(lVar2 + -0x18);
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



// FUNCTION 145006a90 FUN_145006a90 body=424 status=ok
// SIG undefined FUN_145006a90(void)

void FUN_145006a90(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = param_2[1];
  if (uVar3 != (int)param_1[1] - 1U) {
    lVar6 = FUN_145009810(param_1,*param_1 + ((longlong)(int)param_1[1] + -1) * 0x18);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  lVar6 = *param_1 + (longlong)(int)uVar3 * 0x18;
  *(undefined4 *)(lVar6 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(lVar6 + 0x14)) && (*(longlong *)(lVar6 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(lVar6 + 8),
               (ulonglong)(*(uint *)(lVar6 + 0x14) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(lVar6 + 8) = 0;
  *(undefined4 *)(lVar6 + 0x14) = 0x80000000;
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    lVar6 = *param_1 + ((longlong)(int)lVar6 + -1) * 0x18;
    lVar1 = *param_1 + (longlong)(int)uVar3 * 0x18;
    if (lVar1 != lVar6) {
      if (lVar1 != 0) {
        FUN_145009320(lVar1,lVar6);
      }
      *(undefined4 *)(lVar6 + 0x10) = 0;
      if ((-1 < (int)*(uint *)(lVar6 + 0x14)) && (*(longlong *)(lVar6 + 8) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(lVar6 + 8),
                   (ulonglong)(*(uint *)(lVar6 + 0x14) & 0x7fffffff) << 3);
      }
      *(undefined8 *)(lVar6 + 8) = 0;
      *(undefined4 *)(lVar6 + 0x14) = 0x80000000;
    }
  }
  lVar6 = param_1[2];
  uVar8 = (ulonglong)(int)param_1[3];
  uVar7 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar8;
  puVar2 = (uint *)(lVar6 + uVar7 * 8);
  iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  while (-1 < iVar4) {
    lVar6 = lVar6 + ((ulonglong)*puVar2 & uVar8 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar2 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar2;
      param_2 = puVar2;
    }
    lVar6 = param_1[2];
    uVar8 = (ulonglong)(int)param_1[3];
    uVar7 = ((longlong)puVar2 - lVar6 >> 3) + 1U & uVar8;
    puVar2 = (uint *)(lVar6 + uVar7 * 8);
    iVar4 = *(int *)(lVar6 + 4 + uVar7 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 145006c40 FUN_145006c40 body=249 status=ok
// SIG undefined FUN_145006c40(void)

void FUN_145006c40(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  lVar2 = param_1[2];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 2);
  }
  puVar3 = (undefined4 *)*param_1;
  if (puVar3 + (longlong)(int)param_1[1] * 6 != puVar3) {
    puVar4 = puVar3 + (longlong)(int)param_1[1] * 6 + 5;
    do {
      puVar4[-7] = 0;
      if ((-1 < (int)puVar4[-6]) && (*(longlong *)(puVar4 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar4 + -9),
                   (ulonglong)(puVar4[-6] & 0x7fffffff) << 3);
      }
      puVar1 = puVar4 + -0xb;
      *(undefined8 *)(puVar4 + -9) = 0;
      puVar4[-6] = 0x80000000;
      puVar4 = puVar4 + -6;
    } while (puVar1 != puVar3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x18);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 145006d40 FUN_145006d40 body=339 status=ok
// SIG undefined FUN_145006d40(void)

ulonglong FUN_145006d40(ulonglong *param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  int local_res8 [2];
  
  FUN_145009700(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar4 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar4) {
      FUN_14500b5a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    uVar3 = *param_1;
    puVar1 = (undefined4 *)(uVar3 + (longlong)(int)param_1[1] * 0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      *(undefined8 *)(puVar1 + 2) = 0;
      puVar1[4] = 0;
      puVar1[5] = 0x80000000;
      FUN_144c998e0(param_3,&PTR_vftable_14c6e47a0);
      *(longlong *)(puVar1 + 2) = *param_3;
      puVar1[4] = (int)param_3[1];
      uVar3 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
      puVar1[5] = *(uint *)((longlong)param_3 + 0xc);
      *param_3 = 0;
      param_3[1] = 0;
    }
    *(int *)(param_1 + 1) = iVar4;
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  uVar3 = *param_1;
  plVar2 = (longlong *)(uVar3 + (longlong)local_res8[0] * 0x18 + 8);
  if (param_3 != plVar2) {
    *(undefined4 *)(plVar2 + 1) = 0;
    if ((-1 < (int)*(uint *)((longlong)plVar2 + 0xc)) && (*plVar2 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*plVar2,
                 (ulonglong)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) << 3);
    }
    *plVar2 = 0;
    *(undefined4 *)(plVar2 + 1) = 0;
    *(undefined4 *)((longlong)plVar2 + 0xc) = 0x80000000;
    FUN_144c998e0(param_3,&PTR_vftable_14c6e47a0);
    *plVar2 = *param_3;
    *(int *)(plVar2 + 1) = (int)param_3[1];
    uVar3 = (ulonglong)*(uint *)((longlong)param_3 + 0xc);
    *(uint *)((longlong)plVar2 + 0xc) = *(uint *)((longlong)param_3 + 0xc);
    *param_3 = 0;
    param_3[1] = 0;
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 145006ea0 FUN_145006ea0 body=536 status=ok
// SIG undefined FUN_145006ea0(void)

void FUN_145006ea0(longlong param_1,int *param_2,int *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  int local_48;
  int local_44;
  int *local_40;
  
  iVar9 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  local_40 = (int *)(lVar4 + (longlong)*param_2 * 0xc);
  local_44 = (int)*(short *)(lVar4 + 10 + (longlong)*param_2 * 0xc) + (int)(short)local_40[2];
  if (0 < local_44) {
    do {
      if (iVar9 < (short)local_40[2]) {
        iVar6 = *local_40;
      }
      else {
        iVar6 = local_40[1] - (int)(short)local_40[2];
      }
      iVar6 = iVar9 + iVar6;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      iVar10 = *(int *)(lVar4 + 8 + (longlong)iVar6 * 0x14);
      if ((iVar10 != -1) && (iVar6 != *param_3)) {
        iVar6 = *(int *)(lVar4 + 0xc + (longlong)iVar6 * 0x14);
        lVar2 = (longlong)iVar6;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
        uVar14 = iVar10 - *(int *)(lVar1 + lVar2 * 0xc);
        lVar4 = lVar1 + lVar2 * 0xc;
        uVar5 = (uint)*(short *)(lVar1 + 8 + lVar2 * 0xc);
        if (uVar5 <= uVar14) {
          uVar14 = uVar5 + (ushort)((short)iVar10 - *(short *)(lVar4 + 4));
        }
        iVar10 = *param_2;
        uVar8 = (ushort)iVar9;
        uVar13 = (ushort)uVar14;
        if (iVar6 == iVar10) {
          if (uVar8 < uVar13) {
            iVar6 = (int)param_4[1] + 1;
            if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar6) {
              FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar6);
            }
            piVar3 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
            if (piVar3 != (int *)0x0) {
              *piVar3 = iVar10;
              piVar3[1] = iVar10;
              *(ushort *)(piVar3 + 2) = uVar8;
              *(ushort *)((longlong)piVar3 + 10) = uVar13;
              *(undefined1 *)(piVar3 + 3) = 0;
            }
            *(int *)(param_4 + 1) = iVar6;
          }
        }
        else {
          iVar12 = iVar6;
          uVar11 = uVar8;
          if (iVar6 <= iVar10) {
            iVar12 = iVar10;
            iVar10 = iVar6;
            uVar11 = uVar13;
            uVar13 = uVar8;
          }
          local_48 = iVar6;
          if ((int)((int)*(short *)(lVar4 + 10) + uVar5) < 0x17) {
            lVar4 = FUN_145009510(param_1 + 0x10);
            if (lVar4 == 0) {
LAB_145007027:
              bVar7 = 0xff;
            }
            else {
              bVar7 = (byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x18);
            }
          }
          else {
            lVar4 = FUN_145009690(param_1 + 0x30,&local_48);
            if (lVar4 == 0) goto LAB_145007027;
            bVar7 = (byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x18);
          }
          iVar6 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar6) {
            FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar6);
          }
          piVar3 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
          if (piVar3 != (int *)0x0) {
            *piVar3 = iVar10;
            piVar3[1] = iVar12;
            *(ushort *)(piVar3 + 2) = uVar11;
            *(ushort *)((longlong)piVar3 + 10) = uVar13;
            *(byte *)(piVar3 + 3) = bVar7 >> 7 ^ 1;
          }
          *(int *)(param_4 + 1) = iVar6;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < local_44);
  }
  return;
}



// FUNCTION 1450070c0 FUN_1450070c0 body=405 status=ok
// SIG undefined FUN_1450070c0(void)

void FUN_1450070c0(longlong param_1,int *param_2,int *param_3,longlong *param_4)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  int local_res10 [2];
  int local_28;
  undefined1 local_24 [12];
  
  iVar3 = *param_2;
  local_res10[0] = *param_3;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if ((int)*(short *)(lVar4 + 10 + (longlong)iVar3 * 0xc) +
      (int)*(short *)(lVar4 + 8 + (longlong)iVar3 * 0xc) < 0x17) {
    local_res8[0] = iVar3;
    lVar4 = FUN_145009510(param_1 + 0x10,local_res8);
    if ((lVar4 == 0) || (*(int *)(lVar4 + 4) < 0)) {
      local_28 = iVar3;
      FUN_14500a140(param_1,local_24,&local_28,local_res10,param_4 + 2);
      FUN_145009410(param_1 + 0x10,local_res10,local_res8);
      if (local_res10[0] == *(int *)(param_1 + 0x18)) {
        iVar5 = *(int *)(param_1 + 0x18) + 1;
        if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar5) {
          FUN_14500b2d0(param_1 + 0x10,&PTR_vftable_14c6e47a0,(longlong)iVar5);
        }
        piVar2 = (int *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 8);
        if (piVar2 != (int *)0x0) {
          *piVar2 = iVar3;
          piVar2[1] = 0x1000000;
        }
        *(int *)(param_1 + 0x18) = iVar5;
      }
      else {
        *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)local_res10[0] * 8) =
             0x1000000;
      }
      iVar5 = (int)param_4[1] + 1;
      if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar5) {
        FUN_14500b1b0(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar5);
      }
      puVar1 = (undefined1 *)(*param_4 + (longlong)(int)param_4[1] * 0xc);
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = 2;
        *(int *)(puVar1 + 4) = iVar3;
        *(int *)(puVar1 + 8) = local_res8[0];
      }
      *(int *)(param_4 + 1) = iVar5;
    }
    else {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)*(int *)(lVar4 + 4) * 8);
      *piVar2 = *piVar2 + 0x1000000;
    }
    return;
  }
  local_res8[0] = local_res10[0];
  local_res10[0] = iVar3;
  FUN_145008a70(param_1,param_1 + 0x30,local_res10,local_res8,param_4);
  return;
}



// FUNCTION 145007260 FUN_145007260 body=605 status=ok
// SIG undefined FUN_145007260(void)

void FUN_145007260(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int local_res8 [2];
  longlong local_20;
  int local_18;
  uint local_14;
  undefined4 local_10;
  
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  iVar6 = (int)*(short *)(lVar5 + 10 + (longlong)*param_2 * 0xc) +
          (int)*(short *)(lVar5 + 8 + (longlong)*param_2 * 0xc);
  if (iVar6 < 0x17) {
    plVar1 = (longlong *)(param_1 + 0x10);
    lVar5 = FUN_145009510(plVar1);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 4) < 0)) {
      FUN_145009410(plVar1,local_res8,param_2);
      if (local_res8[0] == *(int *)(param_1 + 0x18)) {
        iVar6 = *(int *)(param_1 + 0x18) + 1;
        if ((int)(*(uint *)(param_1 + 0x1c) & 0x7fffffff) < iVar6) {
          FUN_14500b2d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
        }
        piVar2 = (int *)(*plVar1 + (longlong)*(int *)(param_1 + 0x18) * 8);
        if (piVar2 != (int *)0x0) {
          *piVar2 = *param_2;
          piVar2[1] = 0x800000;
        }
        *(int *)(param_1 + 0x18) = iVar6;
      }
      else {
        *(undefined4 *)(*plVar1 + 4 + (longlong)local_res8[0] * 8) = 0x800000;
      }
    }
    else {
      puVar4 = (uint *)(*plVar1 + 4 + (longlong)*(int *)(lVar5 + 4) * 8);
      *puVar4 = *puVar4 | 0x800000;
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar5 = FUN_145009690(plVar1);
    if ((lVar5 == 0) || (*(int *)(lVar5 + 4) < 0)) {
      local_14 = 0x80000000;
      local_20 = 0;
      local_18 = 0;
      local_10 = 0;
      FUN_144c3fad0(&local_20,0,iVar6,0);
      FUN_145009580(plVar1,local_res8,param_2);
      iVar6 = local_18;
      lVar5 = local_20;
      if (local_res8[0] == *(int *)(param_1 + 0x38)) {
        iVar6 = *(int *)(param_1 + 0x38) + 1;
        if ((int)(*(uint *)(param_1 + 0x3c) & 0x7fffffff) < iVar6) {
          FUN_14500b3d0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
        }
        piVar2 = (int *)(*plVar1 + (longlong)*(int *)(param_1 + 0x38) * 0x28);
        if (piVar2 != (int *)0x0) {
          *piVar2 = *param_2;
          piVar2[2] = 0;
          *(undefined1 *)(piVar2 + 3) = 0;
          *(undefined1 *)((longlong)piVar2 + 0xd) = 1;
          FUN_144c90410(piVar2 + 4,&local_20);
        }
        *(int *)(param_1 + 0x38) = iVar6;
        lVar5 = local_20;
      }
      else {
        lVar3 = *plVar1 + (longlong)local_res8[0] * 0x28;
        plVar1 = (longlong *)(lVar3 + 0x10);
        *(undefined1 *)(lVar3 + 0xd) = 1;
        *(undefined4 *)(lVar3 + 8) = 0;
        *(undefined1 *)(lVar3 + 0xc) = 0;
        if (&local_20 != plVar1) {
          lVar7 = (longlong)local_18;
          if ((int)(*(uint *)(lVar3 + 0x1c) & 0x7fffffff) < local_18) {
            FUN_147e4b86a(plVar1,&PTR_vftable_14c6e47a0,lVar7);
          }
          FUN_144b3d470(*plVar1,lVar5,lVar7 << 2);
          *(int *)(lVar3 + 0x18) = iVar6;
        }
        *(undefined4 *)(lVar3 + 0x20) = local_10;
      }
      if ((-1 < (int)local_14) && (lVar5 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar5,(ulonglong)(local_14 & 0x7fffffff) << 2);
      }
    }
    else {
      *(undefined1 *)(*plVar1 + 0xd + (longlong)*(int *)(lVar5 + 4) * 0x28) = 1;
    }
  }
  return;
}



// FUNCTION 1450074c0 FUN_1450074c0 body=448 status=ok
// SIG undefined FUN_1450074c0(void)

undefined1 * FUN_1450074c0(longlong param_1,undefined1 *param_2,int *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int local_res8;
  uint uStackX_c;
  int local_res18 [2];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  if ((int)*(short *)(lVar1 + 10 + (longlong)*param_3 * 0xc) +
      (int)*(short *)(lVar1 + 8 + (longlong)*param_3 * 0xc) < 0x17) {
    lVar1 = FUN_145009510(param_1 + 0x10);
    if (lVar1 == 0) {
      local_res8 = -1;
      uStackX_c = 0xffffffff;
    }
    else {
      local_res8 = *(int *)(lVar1 + 4);
      uStackX_c = (uint)(lVar1 - *(longlong *)(param_1 + 0x20) >> 3);
    }
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)local_res8 * 8) & 0xff7fffff;
    *(uint *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)local_res8 * 8) = uVar3;
    if (((uVar3 >> 0x16 & 1) != 0) || (0xffffff < uVar3)) {
LAB_145007667:
      *param_2 = 0;
      return param_2;
    }
    if ((*(uint *)(param_1 + 0x28) < uStackX_c) ||
       (lVar1 = *(longlong *)(param_1 + 0x20) + (longlong)(int)uStackX_c * 8,
       *(int *)(*(longlong *)(param_1 + 0x20) + 4 + (longlong)(int)uStackX_c * 8) != local_res8)) {
      lVar1 = FUN_145009510(param_1 + 0x10,*(longlong *)(param_1 + 0x10) + (longlong)local_res8 * 8)
      ;
    }
    FUN_145006640(param_1 + 0x10,lVar1);
  }
  else {
    lVar1 = FUN_145009690(param_1 + 0x30,param_3);
    if (lVar1 == 0) {
      local_res8 = -1;
      uStackX_c = 0xffffffff;
    }
    else {
      local_res8 = *(int *)(lVar1 + 4);
      uStackX_c = (uint)(lVar1 - *(longlong *)(param_1 + 0x40) >> 3);
    }
    lVar2 = (longlong)local_res8;
    lVar1 = *(longlong *)(param_1 + 0x30);
    *(undefined1 *)(lVar1 + 0xd + lVar2 * 0x28) = 0;
    if ((*(char *)(lVar1 + 0xc + lVar2 * 0x28) != '\0') || (*(int *)(lVar1 + 8 + lVar2 * 0x28) != 0)
       ) goto LAB_145007667;
    if ((*(uint *)(param_1 + 0x48) < uStackX_c) ||
       (lVar1 = *(longlong *)(param_1 + 0x40) + (longlong)(int)uStackX_c * 8,
       *(int *)(*(longlong *)(param_1 + 0x40) + 4 + (longlong)(int)uStackX_c * 8) != local_res8)) {
      lVar1 = FUN_145009690(param_1 + 0x30,
                            *(longlong *)(param_1 + 0x30) + (longlong)local_res8 * 0x28);
    }
    FUN_1450068a0(param_1 + 0x30,lVar1);
  }
  local_res18[0] = *param_3;
  _local_res8 = CONCAT44(uStackX_c,0xffffffff);
  FUN_145006ea0(param_1,local_res18,&local_res8,param_4);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 145007680 FUN_145007680 body=1080 status=ok
// SIG undefined FUN_145007680(void)

void FUN_145007680(longlong param_1,longlong *param_2,int *param_3,int *param_4,longlong *param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint local_res18 [4];
  int local_58 [2];
  longlong local_50;
  int local_48 [2];
  ulonglong local_40;
  
  lVar5 = FUN_145009510(param_2,param_3);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 4) < 0)) {
    iVar6 = *param_3;
    local_48[0] = param_3[10];
    iVar4 = (int)param_5[1] + 1;
    local_40 = 0x400000;
    local_res18[0] = 0x400000;
    local_50 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18) + (longlong)iVar6 * 0xc;
    if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar4) {
      FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar4);
    }
    puVar1 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(int *)(puVar1 + 4) = iVar6;
      *(int *)(puVar1 + 8) = local_48[0];
    }
    *(int *)(param_5 + 1) = iVar4;
    iVar6 = 0;
    local_58[0] = (int)*(short *)(local_50 + 10) + (int)*(short *)(local_50 + 8);
    if (0 < local_58[0]) {
      uVar9 = 0;
      do {
        if (iVar6 < (short)param_4[2]) {
          iVar4 = *param_4;
        }
        else {
          iVar4 = param_4[1] - (int)(short)param_4[2];
        }
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + (longlong)(iVar4 + iVar6) * 0x14;
        uVar7 = *(uint *)(*(longlong *)(param_3 + 2) + (uVar9 >> 5) * 4) >> ((byte)iVar6 & 0x1f);
        local_res18[0] =
             (uint)local_40 & ~(uint)(1L << (uVar9 & 0x3f)) |
             (uint)((byte)uVar7 & 1) << ((byte)iVar6 & 0x1f);
        local_40 = (ulonglong)local_res18[0];
        if ((((uVar7 & 1) != 0) && (iVar4 = *(int *)(lVar5 + 0xc), iVar4 != -1)) &&
           (iVar4 != *param_3)) {
          local_48[0] = *(int *)(lVar5 + 8);
          local_50 = CONCAT44(local_50._4_4_,iVar4);
          FUN_1450070c0(param_1,&local_50,local_48,param_5);
        }
        iVar6 = iVar6 + 1;
        uVar9 = uVar9 + 1;
      } while (iVar6 < local_58[0]);
    }
    local_48[0] = *param_3;
    FUN_145009880(param_1,local_res18,local_48,param_5 + 2);
    FUN_145009410(param_2,local_res18,param_3);
    if (local_res18[0] == *(uint *)(param_2 + 1)) {
      iVar6 = *(uint *)(param_2 + 1) + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar6) {
        FUN_14500b2d0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      piVar2 = (int *)(*param_2 + (longlong)(int)param_2[1] * 8);
      if (piVar2 != (int *)0x0) {
        *piVar2 = *param_3;
        piVar2[1] = (int)local_40;
      }
      *(int *)(param_2 + 1) = iVar6;
    }
    else {
      *(int *)(*param_2 + 4 + (longlong)(int)local_res18[0] * 8) = (int)local_40;
    }
  }
  else {
    local_58[0] = (int)param_5[1] + 1;
    iVar6 = *param_3;
    uVar7 = *(uint *)(*param_2 + 4 + (longlong)*(int *)(lVar5 + 4) * 8) | 0x400000;
    local_50 = CONCAT44(local_50._4_4_,param_3[10]);
    iVar4 = param_3[10];
    local_res18[0] = uVar7;
    if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < local_58[0]) {
      FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)local_58[0]);
      iVar4 = (int)local_50;
    }
    puVar1 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(int *)(puVar1 + 4) = iVar6;
      *(int *)(puVar1 + 8) = iVar4;
    }
    *(int *)(param_5 + 1) = local_58[0];
    iVar6 = 0;
    local_48[0] = (int)*(short *)((longlong)param_4 + 10) + (int)(short)param_4[2];
    if (0 < local_48[0]) {
      uVar9 = 0;
      do {
        if (iVar6 < (short)param_4[2]) {
          iVar4 = *param_4;
        }
        else {
          iVar4 = param_4[1] - (int)(short)param_4[2];
        }
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) + (longlong)(iVar4 + iVar6) * 0x14;
        bVar3 = (byte)iVar6;
        uVar8 = *(uint *)(*(longlong *)(param_3 + 2) + (uVar9 >> 5) * 4) >> (bVar3 & 0x1f) & 1;
        if ((uVar7 >> (bVar3 & 0x1f) & 1) != uVar8) {
          uVar7 = uVar7 & ~(uint)(1L << (uVar9 & 0x3f)) | uVar8 << (bVar3 & 0x1f);
          iVar4 = *(int *)(lVar5 + 0xc);
          local_res18[0] = uVar7;
          if ((iVar4 != -1) && (iVar4 != *param_3)) {
            local_50 = CONCAT44(local_50._4_4_,*(undefined4 *)(lVar5 + 8));
            local_58[0] = iVar4;
            if (uVar8 == 0) {
              lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
              if ((int)*(short *)(lVar5 + 10 + (longlong)iVar4 * 0xc) +
                  (int)*(short *)(lVar5 + 8 + (longlong)iVar4 * 0xc) < 0x17) {
                FUN_145008890(param_1,param_1 + 0x10);
              }
              else {
                FUN_1450089e0(param_1,param_1 + 0x30,local_58,&local_50,param_5);
              }
            }
            else {
              FUN_1450070c0(param_1,local_58,&local_50,param_5);
            }
          }
        }
        iVar6 = iVar6 + 1;
        uVar9 = uVar9 + 1;
      } while (iVar6 < local_48[0]);
    }
    local_48[0] = *param_3;
    FUN_145009880(param_1,local_res18,local_48,param_5 + 2);
    FUN_145009410(param_2,local_res18,param_3);
    if (local_res18[0] == *(uint *)(param_2 + 1)) {
      iVar6 = *(uint *)(param_2 + 1) + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar6) {
        FUN_14500b2d0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      piVar2 = (int *)(*param_2 + (longlong)(int)param_2[1] * 8);
      if (piVar2 != (int *)0x0) {
        *piVar2 = *param_3;
        piVar2[1] = uVar7;
      }
      *(int *)(param_2 + 1) = iVar6;
    }
    else {
      *(uint *)(*param_2 + 4 + (longlong)(int)local_res18[0] * 8) = uVar7;
    }
  }
  return;
}



// FUNCTION 145007ac0 FUN_145007ac0 body=1468 status=ok
// SIG undefined FUN_145007ac0(void)

void FUN_145007ac0(longlong param_1,longlong *param_2,int *param_3,int *param_4,longlong *param_5)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint *puVar3;
  int *piVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int local_res18 [4];
  longlong local_88;
  int local_80 [2];
  int local_78;
  undefined2 local_74;
  longlong local_70;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_58;
  undefined1 local_54;
  undefined1 local_53;
  longlong local_50;
  int local_48;
  undefined4 local_40;
  
  lVar5 = FUN_145009690(param_2,param_3);
  if ((lVar5 == 0) || (iVar9 = *(int *)(lVar5 + 4), iVar9 < 0)) {
    uVar10 = 0;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0x80000000;
    local_60 = 0;
    local_78 = 0;
    local_74 = 0;
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    local_88 = lVar5 + (longlong)*param_3 * 0xc;
    FUN_144c3fad0(&local_70,0,
                  (int)*(short *)(lVar5 + 10 + (longlong)*param_3 * 0xc) +
                  (int)*(short *)(local_88 + 8),0);
    local_80[0] = param_3[10];
    iVar9 = *param_3;
    local_74 = CONCAT11(local_74._1_1_,1);
    local_res18[0] = (int)param_5[1] + 1;
    if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < local_res18[0]) {
      FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)local_res18[0]);
    }
    lVar5 = local_70;
    puVar1 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(int *)(puVar1 + 4) = iVar9;
      *(int *)(puVar1 + 8) = local_80[0];
    }
    *(int *)(param_5 + 1) = local_res18[0];
    iVar9 = (int)*(short *)(local_88 + 8) + (int)*(short *)(local_88 + 10);
    local_88 = CONCAT44(local_88._4_4_,iVar9);
    uVar13 = uVar10;
    if (0 < iVar9) {
      do {
        uVar12 = (uint)uVar13;
        if ((int)uVar12 < (int)(short)param_4[2]) {
          iVar9 = *param_4;
        }
        else {
          iVar9 = param_4[1] - (int)(short)param_4[2];
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) +
                (longlong)(int)(iVar9 + uVar12) * 0x14;
        uVar8 = uVar12 & 0x1f;
        lVar14 = (uVar10 >> 5) * 4;
        if ((*(uint *)(lVar14 + *(longlong *)(param_3 + 2)) >> (sbyte)uVar8 & 1) == 0) {
          *(uint *)(lVar5 + lVar14) = *(uint *)(lVar5 + lVar14) & ~(1 << uVar8);
        }
        else {
          *(uint *)(lVar5 + lVar14) = *(uint *)(lVar5 + lVar14) | 1 << uVar8;
          iVar9 = *(int *)(lVar2 + 0xc);
          if ((iVar9 != -1) && (iVar9 != *param_3)) {
            local_res18[0] = *(int *)(lVar2 + 8);
            local_80[0] = iVar9;
            FUN_1450070c0(param_1,local_80,local_res18,param_5);
          }
        }
        uVar10 = uVar10 + 1;
        uVar13 = (ulonglong)(uVar12 + 1);
      } while ((int)(uVar12 + 1) < (int)local_88);
    }
    local_res18[0] = *param_3;
    FUN_145009bf0(param_1,&local_78,local_res18,param_5 + 2);
    FUN_145009580(param_2,local_res18,param_3);
    iVar9 = local_68;
    if (local_res18[0] == (int)param_2[1]) {
      iVar9 = (int)param_2[1] + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar9) {
        FUN_14500b3d0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      piVar4 = (int *)(*param_2 + (longlong)(int)param_2[1] * 0x28);
      if (piVar4 != (int *)0x0) {
        *piVar4 = *param_3;
        piVar4[2] = local_78;
        *(undefined1 *)((longlong)piVar4 + 0xd) = local_74._1_1_;
        *(undefined1 *)(piVar4 + 3) = 1;
        FUN_144c90410(piVar4 + 4,&local_70);
      }
      *(int *)(param_2 + 1) = iVar9;
    }
    else {
      lVar2 = *param_2 + (longlong)local_res18[0] * 0x28;
      plVar7 = (longlong *)(lVar2 + 0x10);
      *(undefined1 *)(lVar2 + 0xc) = 1;
      *(int *)(lVar2 + 8) = local_78;
      *(undefined1 *)(lVar2 + 0xd) = local_74._1_1_;
      if (&local_70 != plVar7) {
        lVar14 = (longlong)local_68;
        if ((int)(*(uint *)(lVar2 + 0x1c) & 0x7fffffff) < local_68) {
          FUN_147e4b86a(plVar7,&PTR_vftable_14c6e47a0,lVar14);
        }
        FUN_144b3d470(*plVar7,lVar5,lVar14 * 4);
        *(int *)(lVar2 + 0x18) = iVar9;
      }
      *(undefined4 *)(lVar2 + 0x20) = local_60;
    }
    plVar7 = &local_70;
  }
  else {
    lVar5 = *param_2 + (longlong)iVar9 * 0x28;
    local_58 = *(int *)(*param_2 + 8 + (longlong)iVar9 * 0x28);
    local_54 = *(undefined1 *)(lVar5 + 0xc);
    local_53 = *(undefined1 *)(lVar5 + 0xd);
    FUN_144c90410(&local_50,lVar5 + 0x10);
    local_res18[0] = param_3[10];
    iVar9 = *param_3;
    local_54 = 1;
    iVar11 = (int)param_5[1] + 1;
    if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar11) {
      FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar11);
    }
    lVar5 = local_50;
    puVar1 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(int *)(puVar1 + 4) = iVar9;
      *(int *)(puVar1 + 8) = local_res18[0];
    }
    *(int *)(param_5 + 1) = iVar11;
    uVar12 = 0;
    local_80[0] = (int)*(short *)((longlong)param_4 + 10) + (int)(short)param_4[2];
    if (0 < local_80[0]) {
      uVar10 = 0;
      do {
        if ((int)uVar12 < (int)(short)param_4[2]) {
          iVar9 = *param_4;
        }
        else {
          iVar9 = param_4[1] - (int)(short)param_4[2];
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) +
                (longlong)(int)(iVar9 + uVar12) * 0x14;
        uVar6 = uVar12 & 0x1f;
        lVar14 = (uVar10 >> 5) * 4;
        puVar3 = (uint *)(lVar5 + lVar14);
        uVar8 = *puVar3;
        uVar15 = *(uint *)(lVar14 + *(longlong *)(param_3 + 2)) >> (sbyte)uVar6 & 1;
        if ((uVar8 >> (sbyte)uVar6 & 1) != uVar15) {
          if (uVar15 == 0) {
            uVar8 = uVar8 & ~(1 << uVar6);
          }
          else {
            uVar8 = uVar8 | 1 << uVar6;
          }
          *puVar3 = uVar8;
          iVar9 = *(int *)(lVar2 + 0xc);
          if ((iVar9 != -1) && (local_res18[0] = *(int *)(lVar2 + 8), iVar9 != *param_3)) {
            local_88 = CONCAT44(local_88._4_4_,iVar9);
            if (uVar15 == 0) {
              lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
              if ((int)*(short *)(lVar2 + 10 + (longlong)iVar9 * 0xc) +
                  (int)*(short *)(lVar2 + 8 + (longlong)iVar9 * 0xc) < 0x17) {
                FUN_145008890(param_1,param_1 + 0x10);
              }
              else {
                FUN_1450089e0(param_1,param_1 + 0x30,&local_88,local_res18,param_5);
              }
            }
            else {
              FUN_1450070c0(param_1,&local_88,local_res18,param_5);
            }
          }
        }
        uVar12 = uVar12 + 1;
        uVar10 = uVar10 + 1;
      } while ((int)uVar12 < local_80[0]);
    }
    local_res18[0] = *param_3;
    FUN_145009bf0(param_1,&local_58,local_res18,param_5 + 2);
    FUN_145009580(param_2,local_res18,param_3);
    if (local_res18[0] == (int)param_2[1]) {
      iVar9 = (int)param_2[1] + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar9) {
        FUN_14500b3d0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      piVar4 = (int *)(*param_2 + (longlong)(int)param_2[1] * 0x28);
      if (piVar4 != (int *)0x0) {
        *piVar4 = *param_3;
        piVar4[2] = local_58;
        *(undefined1 *)((longlong)piVar4 + 0xd) = local_53;
        *(undefined1 *)(piVar4 + 3) = 1;
        FUN_144c90410(piVar4 + 4,&local_50);
      }
      *(int *)(param_2 + 1) = iVar9;
      plVar7 = &local_50;
    }
    else {
      lVar5 = *param_2 + (longlong)local_res18[0] * 0x28;
      plVar7 = (longlong *)(lVar5 + 0x10);
      *(undefined1 *)(lVar5 + 0xc) = 1;
      *(int *)(lVar5 + 8) = local_58;
      *(undefined1 *)(lVar5 + 0xd) = local_53;
      if (&local_50 != plVar7) {
        if ((int)(*(uint *)(lVar5 + 0x1c) & 0x7fffffff) < local_48) {
          FUN_147e4b86a(plVar7,&PTR_vftable_14c6e47a0,(longlong)local_48);
        }
        FUN_144b3d470(*plVar7,local_50,(longlong)local_48 * 4);
        *(int *)(lVar5 + 0x18) = local_48;
      }
      plVar7 = &local_50;
      *(undefined4 *)(lVar5 + 0x20) = local_40;
    }
  }
  FUN_144bf90d0(plVar7);
  return;
}



// FUNCTION 145008080 FUN_145008080 body=843 status=ok
// SIG undefined FUN_145008080(void)

void FUN_145008080(longlong param_1,longlong *param_2,int *param_3,int *param_4,longlong *param_5)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  int local_48;
  int local_44;
  int local_40 [2];
  
  lVar7 = FUN_145009510(param_2,param_3);
  if ((lVar7 != 0) && (-1 < *(int *)(lVar7 + 4))) {
    uVar9 = *(uint *)(*param_2 + 4 + (longlong)*(int *)(lVar7 + 4) * 8);
    uVar10 = (ulonglong)uVar9;
    if ((uVar9 >> 0x16 & 1) != 0) {
      iVar11 = (int)*(short *)((longlong)param_4 + 10) + (int)(short)param_4[2];
      iVar8 = 0;
      local_48 = iVar11;
      if (0 < iVar11) {
        uVar12 = 0;
        do {
          if (iVar8 < (short)param_4[2]) {
            iVar5 = *param_4;
          }
          else {
            iVar5 = param_4[1] - (int)(short)param_4[2];
          }
          if (((uint)uVar10 >> ((byte)iVar8 & 0x1f) & 1) != 0) {
            lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
            iVar3 = *(int *)(lVar7 + 0xc + (longlong)(iVar5 + iVar8) * 0x14);
            if (iVar3 != -1) {
              if (iVar3 != *param_3) {
                lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
                local_40[0] = *(int *)(lVar7 + (longlong)(iVar5 + iVar8) * 0x14 + 8);
                if ((int)*(short *)(lVar4 + 10 + (longlong)iVar3 * 0xc) +
                    (int)*(short *)(lVar4 + 8 + (longlong)iVar3 * 0xc) < 0x17) {
                  local_44 = local_40[0];
                  local_40[0] = iVar3;
                  FUN_145008890(param_1,param_1 + 0x10,local_40,&local_44);
                  iVar11 = local_48;
                }
                else {
                  local_44 = iVar3;
                  FUN_1450089e0(param_1,param_1 + 0x30,&local_44,local_40,param_5);
                  iVar11 = local_48;
                }
              }
              uVar10 = uVar10 & ~(1L << (uVar12 & 0x3f));
            }
          }
          uVar9 = (uint)uVar10;
          iVar8 = iVar8 + 1;
          uVar12 = uVar12 + 1;
        } while (iVar8 < iVar11);
      }
      uVar6 = *(uint *)((longlong)param_5 + 0xc) & 0x7fffffff;
      iVar11 = *param_3;
      if ((uVar9 >> 0x17 & 1) == 0) {
        if ((uVar9 & 0xff000000) == 0) {
          iVar8 = (int)param_5[1] + 1;
          if ((int)uVar6 < iVar8) {
            FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar8);
          }
          puVar1 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
          if (puVar1 != (undefined1 *)0x0) {
            *puVar1 = 3;
            *(int *)(puVar1 + 4) = iVar11;
            *(int *)(puVar1 + 8) = local_40[0];
          }
          *(int *)(param_5 + 1) = iVar8;
          local_44 = *param_3;
          local_40[0] = -1;
          FUN_145006ea0(param_1,&local_44,local_40,param_5 + 2);
          lVar7 = FUN_145009510(param_2,param_3);
          if (lVar7 == 0) {
            return;
          }
          FUN_145006640(param_2,lVar7);
          return;
        }
        iVar8 = (int)param_5[1] + 1;
        if ((int)uVar6 < iVar8) {
          FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        puVar1 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = 2;
          *(int *)(puVar1 + 4) = iVar11;
          *(int *)(puVar1 + 8) = local_40[0];
        }
        *(int *)(param_5 + 1) = iVar8;
        local_44 = *param_3;
        local_40[0] = -1;
        FUN_14500a140(param_1,&local_48,&local_44,local_40,param_5 + 2);
      }
      else {
        iVar8 = (int)param_5[1] + 1;
        if ((int)uVar6 < iVar8) {
          FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar8);
        }
        puVar1 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = 1;
          *(int *)(puVar1 + 4) = iVar11;
          *(int *)(puVar1 + 8) = local_40[0];
        }
        *(int *)(param_5 + 1) = iVar8;
        local_40[0] = *param_3;
        FUN_145009f90(param_1,&local_48,local_40,param_5 + 2);
      }
      FUN_145009410(param_2,local_40,param_3);
      if (local_40[0] == (int)param_2[1]) {
        iVar11 = (int)param_2[1] + 1;
        if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar11) {
          FUN_14500b2d0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar11);
        }
        piVar2 = (int *)(*param_2 + (longlong)(int)param_2[1] * 8);
        if (piVar2 != (int *)0x0) {
          *piVar2 = *param_3;
          piVar2[1] = uVar9 & 0xffbfffff;
        }
        *(int *)(param_2 + 1) = iVar11;
      }
      else {
        *(uint *)(*param_2 + 4 + (longlong)local_40[0] * 8) = uVar9 & 0xffbfffff;
      }
    }
  }
  return;
}



// FUNCTION 1450083d0 FUN_1450083d0 body=1204 status=ok
// SIG undefined FUN_1450083d0(void)

void FUN_1450083d0(longlong param_1,longlong *param_2,int *param_3,int *param_4,longlong *param_5)

{
  uint *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int local_60;
  int local_5c;
  ulonglong local_58;
  int local_50;
  undefined1 local_4c;
  char local_4b;
  longlong local_48;
  int local_40;
  undefined4 local_38;
  
  lVar6 = FUN_145009690(param_2,param_3);
  if (lVar6 == 0) {
    return;
  }
  iVar11 = *(int *)(lVar6 + 4);
  if (iVar11 < 0) {
    return;
  }
  lVar6 = *param_2 + (longlong)iVar11 * 0x28;
  if (*(char *)(*param_2 + 0xc + (longlong)iVar11 * 0x28) == '\0') {
    return;
  }
  local_50 = *(int *)(lVar6 + 8);
  local_4c = *(undefined1 *)(lVar6 + 0xc);
  local_4b = *(char *)(lVar6 + 0xd);
  FUN_144c90410(&local_48,lVar6 + 0x10);
  lVar6 = local_48;
  uVar8 = 0;
  iVar11 = (int)*(short *)((longlong)param_4 + 10) + (int)(short)param_4[2];
  if (0 < iVar11) {
    local_58 = 0;
    do {
      if ((int)uVar8 < (int)(short)param_4[2]) {
        iVar12 = *param_4;
      }
      else {
        iVar12 = param_4[1] - (int)(short)param_4[2];
      }
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28) +
              (longlong)(int)(iVar12 + uVar8) * 0x14;
      puVar1 = (uint *)(lVar6 + (local_58 >> 5) * 4);
      if ((*puVar1 >> (sbyte)(uVar8 & 0x1f) & 1) != 0) {
        iVar12 = *(int *)(lVar7 + 0xc);
        if (iVar12 != -1) {
          if (iVar12 != *param_3) {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
            local_5c = *(int *)(lVar7 + 8);
            if ((int)*(short *)(lVar4 + 10 + (longlong)iVar12 * 0xc) +
                (int)*(short *)(lVar4 + 8 + (longlong)iVar12 * 0xc) < 0x17) {
              local_60 = local_5c;
              local_5c = iVar12;
              FUN_145008890(param_1,param_1 + 0x10,&local_5c,&local_60);
            }
            else {
              local_60 = iVar12;
              FUN_1450089e0(param_1,param_1 + 0x30,&local_60,&local_5c,param_5);
            }
          }
          *puVar1 = *puVar1 & ~(1 << (uVar8 & 0x1f));
        }
      }
      local_58 = local_58 + 1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar11);
  }
  cVar5 = local_4b;
  iVar12 = local_50;
  uVar8 = *(uint *)((longlong)param_5 + 0xc) & 0x7fffffff;
  iVar11 = *param_3;
  if (local_4b == '\0') {
    iVar9 = (int)param_5[1] + 1;
    if (local_50 == 0) {
      if ((int)uVar8 < iVar9) {
        FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar9);
      }
      puVar2 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
      if (puVar2 != (undefined1 *)0x0) {
        *puVar2 = 3;
        *(int *)(puVar2 + 4) = iVar11;
        *(int *)(puVar2 + 8) = local_5c;
      }
      *(int *)(param_5 + 1) = iVar9;
      local_60 = *param_3;
      local_5c = -1;
      FUN_145006ea0(param_1,&local_60,&local_5c,param_5 + 2);
      lVar6 = FUN_145009690(param_2,param_3);
      if (lVar6 != 0) {
        FUN_1450068a0(param_2,lVar6);
      }
      goto LAB_145008856;
    }
    local_4c = 0;
    if ((int)uVar8 < iVar9) {
      FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    puVar2 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 2;
      *(int *)(puVar2 + 4) = iVar11;
      *(int *)(puVar2 + 8) = local_5c;
    }
    *(int *)(param_5 + 1) = iVar9;
    local_60 = *param_3;
    local_5c = -1;
    FUN_14500a520(param_1,&local_50,&local_60,&local_5c,param_5 + 2);
    FUN_145009580(param_2,&local_58,param_3);
    if ((int)local_58 == (int)param_2[1]) {
      iVar11 = (int)param_2[1] + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar11) {
        FUN_14500b3d0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      piVar3 = (int *)(*param_2 + (longlong)(int)param_2[1] * 0x28);
      if (piVar3 != (int *)0x0) {
        *piVar3 = *param_3;
        *(undefined2 *)(piVar3 + 3) = 0;
        piVar3[2] = iVar12;
        FUN_144c90410(piVar3 + 4,&local_48);
      }
      *(int *)(param_2 + 1) = iVar11;
      goto LAB_145008856;
    }
    lVar7 = (longlong)(int)local_58;
    lVar6 = *param_2;
    *(int *)(lVar6 + 8 + lVar7 * 0x28) = iVar12;
    plVar10 = (longlong *)(lVar6 + (lVar7 * 5 + 2) * 8);
    *(undefined2 *)(lVar6 + 0xc + lVar7 * 0x28) = 0;
  }
  else {
    iVar12 = (int)param_5[1] + 1;
    local_4c = 0;
    if ((int)uVar8 < iVar12) {
      FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar12);
    }
    puVar2 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = 1;
      *(int *)(puVar2 + 4) = iVar11;
      *(int *)(puVar2 + 8) = local_5c;
    }
    *(int *)(param_5 + 1) = iVar12;
    local_5c = *param_3;
    FUN_14500a370(param_1,&local_50,&local_5c,param_5 + 2);
    FUN_145009580(param_2,&local_58,param_3);
    if ((int)local_58 == (int)param_2[1]) {
      iVar11 = (int)param_2[1] + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar11) {
        FUN_14500b3d0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar11);
      }
      piVar3 = (int *)(*param_2 + (longlong)(int)param_2[1] * 0x28);
      if (piVar3 != (int *)0x0) {
        *piVar3 = *param_3;
        piVar3[2] = local_50;
        *(undefined1 *)(piVar3 + 3) = 0;
        *(char *)((longlong)piVar3 + 0xd) = cVar5;
        FUN_144c90410(piVar3 + 4,&local_48);
      }
      *(int *)(param_2 + 1) = iVar11;
      goto LAB_145008856;
    }
    lVar6 = *param_2 + (longlong)(int)local_58 * 0x28;
    *(char *)(lVar6 + 0xd) = cVar5;
    plVar10 = (longlong *)(lVar6 + 0x10);
    *(int *)(lVar6 + 8) = local_50;
    *(undefined1 *)(lVar6 + 0xc) = 0;
  }
  if (&local_48 != plVar10) {
    if ((int)(*(uint *)((longlong)plVar10 + 0xc) & 0x7fffffff) < local_40) {
      FUN_147e4b86a(plVar10,&PTR_vftable_14c6e47a0,(longlong)local_40);
    }
    FUN_144b3d470(*plVar10,local_48,(longlong)local_40 * 4);
    *(int *)(plVar10 + 1) = local_40;
  }
  *(undefined4 *)(plVar10 + 2) = local_38;
LAB_145008856:
  FUN_144bf90d0(&local_48);
  return;
}



// FUNCTION 145008890 FUN_145008890 body=327 status=ok
// SIG undefined FUN_145008890(void)

void FUN_145008890(undefined8 param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4,
                  longlong *param_5)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  
  lVar5 = FUN_145009510(param_2,param_3);
  if (lVar5 == 0) {
    iVar7 = -1;
    uVar8 = 0xffffffff;
  }
  else {
    iVar7 = *(int *)(lVar5 + 4);
    uVar8 = (uint)(lVar5 - param_2[2] >> 3);
  }
  uVar2 = *param_4;
  uVar3 = *param_3;
  lVar5 = (longlong)iVar7 * 8;
  uVar4 = *(int *)(*param_2 + 4 + (longlong)iVar7 * 8) - 0x1000000;
  if ((uVar4 < 0x1000000) && ((uVar4 & 0xc00000) == 0)) {
    iVar9 = (int)param_5[1] + 1;
    if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar9) {
      FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    puVar1 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 3;
      *(undefined4 *)(puVar1 + 4) = uVar3;
      *(undefined4 *)(puVar1 + 8) = local_res10[0];
    }
    *(int *)(param_5 + 1) = iVar9;
    local_res10[0] = uVar2;
    local_res18[0] = uVar3;
    FUN_145006ea0(param_1,local_res18,local_res10,param_5 + 2);
    if ((*(uint *)(param_2 + 3) < uVar8) ||
       (lVar6 = param_2[2] + (longlong)(int)uVar8 * 8,
       *(int *)(param_2[2] + 4 + (longlong)(int)uVar8 * 8) != iVar7)) {
      lVar6 = FUN_145009510(param_2,*param_2 + lVar5);
    }
    FUN_145006640(param_2,lVar6);
    return;
  }
  *(uint *)(*param_2 + 4 + lVar5) = uVar4;
  return;
}



// FUNCTION 1450089e0 FUN_1450089e0 body=141 status=ok
// SIG undefined FUN_1450089e0(void)

void FUN_1450089e0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined8 local_28;
  
  lVar1 = FUN_145009690(param_2,param_3);
  if (lVar1 == 0) {
    local_28 = 0xffffffffffffffff;
  }
  else {
    local_28 = CONCAT44((int)(lVar1 - *(longlong *)(param_2 + 0x10) >> 3),*(undefined4 *)(lVar1 + 4)
                       );
  }
  local_res18[0] = *param_4;
  local_res20[0] = *param_3;
  FUN_14500a750(param_1,param_2,local_28,local_res20,local_res18,param_5);
  return;
}



// FUNCTION 145008a70 FUN_145008a70 body=776 status=ok
// SIG undefined FUN_145008a70(void)

void FUN_145008a70(longlong param_1,longlong *param_2,int *param_3,undefined4 *param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 local_68 [2];
  int local_60 [2];
  int local_58;
  undefined2 local_54;
  longlong local_50;
  int local_48;
  uint local_44;
  undefined4 local_40;
  int local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined8 local_30;
  int local_28;
  undefined4 local_20;
  
  lVar6 = FUN_145009690(param_2,param_3);
  if (lVar6 == 0) {
    iVar7 = -1;
  }
  else {
    iVar7 = *(int *)(lVar6 + 4);
  }
  if (iVar7 < 0) {
    local_44 = 0x80000000;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_58 = 0;
    local_54 = 0;
    FUN_144c3fad0(&local_50,0,
                  (int)*(short *)(lVar6 + 10 + (longlong)*param_3 * 0xc) +
                  (int)*(short *)(lVar6 + 8 + (longlong)*param_3 * 0xc),0);
    local_58 = local_58 + 1;
    local_54 = local_54 & 0xff00;
    FUN_144c3fad0(&local_50,0,local_40,0);
    local_68[0] = *param_4;
    local_60[0] = *param_3;
    FUN_14500a520(param_1,&local_58,local_60,local_68,param_5 + 2);
    FUN_145009580(param_2,local_60,param_3);
    iVar7 = local_48;
    lVar6 = local_50;
    if (local_60[0] == (int)param_2[1]) {
      iVar7 = (int)param_2[1] + 1;
      if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < iVar7) {
        FUN_14500b3d0(param_2,&PTR_vftable_14c6e47a0,(longlong)iVar7);
      }
      piVar3 = (int *)(*param_2 + (longlong)(int)param_2[1] * 0x28);
      if (piVar3 != (int *)0x0) {
        *piVar3 = *param_3;
        piVar3[2] = local_58;
        *(undefined1 *)(piVar3 + 3) = (undefined1)local_54;
        *(undefined1 *)((longlong)piVar3 + 0xd) = local_54._1_1_;
        FUN_144c90410(piVar3 + 4,&local_50);
      }
      *(int *)(param_2 + 1) = iVar7;
      lVar6 = local_50;
    }
    else {
      lVar4 = *param_2 + (longlong)local_60[0] * 0x28;
      *(int *)(lVar4 + 8) = local_58;
      plVar2 = (longlong *)(lVar4 + 0x10);
      *(undefined1 *)(lVar4 + 0xc) = (undefined1)local_54;
      *(undefined1 *)(lVar4 + 0xd) = local_54._1_1_;
      if (&local_50 != plVar2) {
        lVar9 = (longlong)local_48;
        if ((int)(*(uint *)(lVar4 + 0x1c) & 0x7fffffff) < local_48) {
          FUN_147e4b86a(plVar2,&PTR_vftable_14c6e47a0,lVar9);
        }
        FUN_144b3d470(*plVar2,lVar6,lVar9 << 2);
        *(int *)(lVar4 + 0x18) = iVar7;
      }
      *(undefined4 *)(lVar4 + 0x20) = local_40;
    }
    iVar8 = (int)param_5[1] + 1;
    iVar7 = *param_3;
    if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar8) {
      FUN_14500b1b0(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    puVar5 = (undefined1 *)(*param_5 + (longlong)(int)param_5[1] * 0xc);
    if (puVar5 != (undefined1 *)0x0) {
      *puVar5 = 2;
      *(int *)(puVar5 + 4) = iVar7;
      *(int *)(puVar5 + 8) = local_60[0];
    }
    *(int *)(param_5 + 1) = iVar8;
    if ((-1 < (int)local_44) && (lVar6 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar6,(ulonglong)(local_44 & 0x7fffffff) << 2);
    }
  }
  else {
    lVar6 = *param_2 + (longlong)iVar7 * 0x28;
    local_38 = *(int *)(lVar6 + 8);
    local_34 = *(undefined1 *)(lVar6 + 0xc);
    local_33 = *(undefined1 *)(lVar6 + 0xd);
    FUN_144c90410(&local_30,lVar6 + 0x10);
    lVar6 = *param_2 + (longlong)iVar7 * 0x28;
    local_38 = local_38 + 1;
    *(undefined1 *)(lVar6 + 0xc) = local_34;
    puVar1 = (undefined8 *)(lVar6 + 0x10);
    *(undefined1 *)(lVar6 + 0xd) = local_33;
    *(int *)(lVar6 + 8) = local_38;
    if (&local_30 != puVar1) {
      if ((int)(*(uint *)(lVar6 + 0x1c) & 0x7fffffff) < local_28) {
        FUN_147e4b86a(puVar1,&PTR_vftable_14c6e47a0,(longlong)local_28);
      }
      FUN_144b3d470(*puVar1,local_30,(longlong)local_28 << 2);
      *(int *)(lVar6 + 0x18) = local_28;
    }
    *(undefined4 *)(lVar6 + 0x20) = local_20;
    FUN_144bf90d0(&local_30);
  }
  return;
}



// FUNCTION 145008d80 FUN_145008d80 body=573 status=ok
// SIG undefined FUN_145008d80(void)

void FUN_145008d80(longlong *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong local_res18;
  longlong local_48;
  int local_40;
  uint local_3c;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 != 0) {
    lVar5 = 0;
    if ((int)uVar6 < 1) {
      uVar6 = 0x80000000;
      lVar3 = lVar5;
    }
    else {
      lVar3 = (**(code **)(PTR_vftable_14c6e47c0 + 8))
                        (&PTR_vftable_14c6e47c0,(longlong)(int)uVar6 << 3);
    }
    uVar9 = *(uint *)(param_1 + 1);
    if ((int)uVar9 < 1) {
      local_res18 = 0;
      uVar9 = 0x80000000;
    }
    else {
      local_res18 = (**(code **)(PTR_vftable_14c6e47c0 + 8))
                              (&PTR_vftable_14c6e47c0,(longlong)(int)uVar9 << 3);
    }
    iVar2 = FUN_14500a940(*param_1,(int)param_1[1],lVar3,local_res18,param_2);
    local_48 = 0;
    local_40 = 0;
    local_3c = 0x80000000;
    lVar8 = (longlong)iVar2;
    if (((0 < iVar2) && (FUN_14500af50(&local_48,&PTR_vftable_14c6e47a0,lVar8), local_40 < iVar2))
       || (iVar2 < local_40)) {
      local_40 = iVar2;
    }
    uVar7 = local_3c;
    lVar10 = local_48;
    FUN_144be90e0(0x893cc3ad);
    if (0 < lVar8) {
      puVar4 = (undefined4 *)(lVar10 + 8);
      do {
        puVar1 = *(undefined1 **)(lVar3 + lVar5 * 8);
        lVar5 = lVar5 + 1;
        *(undefined1 *)(puVar4 + -2) = *puVar1;
        puVar4[-1] = *(undefined4 *)(puVar1 + 4);
        *puVar4 = *(undefined4 *)(puVar1 + 8);
        puVar4 = puVar4 + 3;
      } while (lVar5 < lVar8);
    }
    if (&local_48 != param_1) {
      FUN_145005640(param_1,&PTR_vftable_14c6e47a0);
      FUN_145005640(&local_48,&PTR_vftable_14c6e47a0);
      lVar10 = *param_1;
      *param_1 = local_48;
      uVar7 = *(uint *)((longlong)param_1 + 0xc);
      *(int *)(param_1 + 1) = local_40;
      *(uint *)((longlong)param_1 + 0xc) = local_3c;
    }
    FUN_144be90e0(0x2bef7e60);
    if ((-1 < (int)uVar7) && (lVar10 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar10,(ulonglong)(uVar7 & 0x7fffffff) * 0xc);
    }
    if ((-1 < (int)uVar9) && (local_res18 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_res18,(ulonglong)(uVar9 & 0x7fffffff) << 3);
    }
    if ((-1 < (int)uVar6) && (lVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,lVar3,(ulonglong)(uVar6 & 0x7fffffff) << 3);
    }
  }
  return;
}



// FUNCTION 145008fc0 FUN_145008fc0 body=588 status=ok
// SIG undefined FUN_145008fc0(void)

void FUN_145008fc0(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_res8;
  longlong local_res18;
  longlong local_48;
  int local_40;
  uint local_3c;
  
  uVar6 = *(uint *)(param_1 + 1);
  if (uVar6 != 0) {
    lVar5 = 0;
    if ((int)uVar6 < 1) {
      uVar6 = 0x80000000;
      lVar3 = lVar5;
    }
    else {
      lVar3 = (**(code **)(PTR_vftable_14c6e47c0 + 8))
                        (&PTR_vftable_14c6e47c0,(longlong)(int)uVar6 << 3);
    }
    local_res8 = *(uint *)(param_1 + 1);
    if ((int)local_res8 < 1) {
      local_res18 = 0;
      local_res8 = 0x80000000;
    }
    else {
      local_res18 = (**(code **)(PTR_vftable_14c6e47c0 + 8))
                              (&PTR_vftable_14c6e47c0,(longlong)(int)local_res8 << 3);
    }
    iVar2 = FUN_14500ab30(*param_1,(int)param_1[1],lVar3,local_res18,param_2);
    lVar8 = (longlong)iVar2;
    local_48 = 0;
    local_40 = 0;
    local_3c = 0x80000000;
    if (((0 < iVar2) && (FUN_14500b080(&local_48,&PTR_vftable_14c6e47a0,lVar8), local_40 < iVar2))
       || (iVar2 < local_40)) {
      local_40 = iVar2;
    }
    uVar7 = local_3c;
    lVar9 = local_48;
    FUN_144be90e0(0x893cc3ad);
    if (0 < lVar8) {
      puVar4 = (undefined2 *)(lVar9 + 8);
      do {
        puVar1 = *(undefined4 **)(lVar3 + lVar5 * 8);
        lVar5 = lVar5 + 1;
        *(undefined4 *)(puVar4 + -4) = *puVar1;
        *(undefined4 *)(puVar4 + -2) = puVar1[1];
        *puVar4 = *(undefined2 *)(puVar1 + 2);
        puVar4[1] = *(undefined2 *)((longlong)puVar1 + 10);
        *(undefined1 *)(puVar4 + 2) = *(undefined1 *)(puVar1 + 3);
        puVar4 = puVar4 + 8;
      } while (lVar5 < lVar8);
    }
    if (&local_48 != param_1) {
      FUN_1450056d0(param_1,&PTR_vftable_14c6e47a0);
      FUN_1450056d0(&local_48,&PTR_vftable_14c6e47a0);
      lVar9 = *param_1;
      *param_1 = local_48;
      uVar7 = *(uint *)((longlong)param_1 + 0xc);
      *(int *)(param_1 + 1) = local_40;
      *(uint *)((longlong)param_1 + 0xc) = local_3c;
    }
    FUN_144be90e0(0x2bef7e60);
    if ((-1 < (int)uVar7) && (lVar9 != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,lVar9,(ulonglong)(uVar7 & 0x7fffffff) << 4);
    }
    if ((-1 < (int)local_res8) && (local_res18 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_res18,(ulonglong)(local_res8 & 0x7fffffff) << 3);
    }
    if ((-1 < (int)uVar6) && (lVar3 != 0)) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,lVar3,(ulonglong)(uVar6 & 0x7fffffff) << 3);
    }
  }
  return;
}



// FUNCTION 145009210 FUN_145009210 body=261 status=ok
// SIG undefined FUN_145009210(void)

int * FUN_145009210(longlong *param_1,int *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  int iVar7;
  
  FUN_145009700();
  if (*param_2 == (int)param_1[1]) {
    iVar7 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar7) {
      FUN_14500b5a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar7);
    }
    puVar4 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 0x18);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_3;
      *(undefined8 *)(puVar4 + 2) = 0;
      puVar4[4] = 0;
      puVar4[5] = 0x80000000;
      puVar5 = (undefined4 *)*param_4;
      uVar2 = *(uint *)(param_4 + 1);
      if (0 < (int)uVar2) {
        uVar3 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                          (&PTR_vftable_14c6e47a0,(longlong)(int)uVar2 << 3);
        *(undefined8 *)(puVar4 + 2) = uVar3;
        uVar6 = (ulonglong)uVar2;
        puVar4[4] = uVar2;
        puVar4[5] = uVar2;
        puVar4 = *(undefined4 **)(puVar4 + 2);
        do {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *puVar5;
            puVar1 = puVar5 + 1;
            puVar5 = puVar5 + 2;
            puVar4[1] = *puVar1;
          }
          uVar6 = uVar6 - 1;
          puVar4 = puVar4 + 2;
        } while (uVar6 != 0);
      }
    }
    *(int *)(param_1 + 1) = iVar7;
  }
  return param_2;
}



// FUNCTION 145009320 FUN_145009320 body=102 status=ok
// SIG undefined FUN_145009320(void)

undefined4 * FUN_145009320(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + 2);
  *param_1 = *param_2;
  param_1[5] = 0x80000000;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  FUN_144c998e0(puVar1,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 2) = *puVar1;
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  return param_1;
}



// FUNCTION 145009390 FUN_145009390 body=128 status=ok
// SIG undefined FUN_145009390(void)

undefined4 * FUN_145009390(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + 4);
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0xd);
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0x80000000;
  FUN_14382139c(puVar1,&PTR_vftable_14c6e47a0);
  *(undefined8 *)(param_1 + 4) = *puVar1;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  param_1[8] = param_2[8];
  return param_1;
}



// FUNCTION 145009410 FUN_145009410 body=254 status=ok
// SIG undefined FUN_145009410(void)

uint * FUN_145009410(longlong *param_1,uint *param_2,int *param_3)

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
LAB_1450094e6:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 8) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_1450094e6;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 145009510 FUN_145009510 body=102 status=ok
// SIG undefined FUN_145009510(void)

uint * FUN_145009510(longlong *param_1,int *param_2)

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
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 8) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 145009580 FUN_145009580 body=258 status=ok
// SIG undefined FUN_145009580(void)

uint * FUN_145009580(longlong *param_1,uint *param_2,int *param_3)

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
LAB_14500965a:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x28) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_14500965a;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 145009690 FUN_145009690 body=104 status=ok
// SIG undefined FUN_145009690(void)

uint * FUN_145009690(longlong *param_1,int *param_2)

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
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 0x28) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 145009700 FUN_145009700 body=258 status=ok
// SIG undefined FUN_145009700(void)

uint * FUN_145009700(longlong *param_1,uint *param_2,int *param_3)

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
LAB_1450097da:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar9) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 0x18) == iVar8)) {
      *param_2 = puVar6[1];
      goto LAB_1450097da;
    }
    uVar7 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar7 * 8);
  } while( true );
}



// FUNCTION 145009810 FUN_145009810 body=104 status=ok
// SIG undefined FUN_145009810(void)

uint * FUN_145009810(longlong *param_1,int *param_2)

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
    if ((*puVar4 == uVar6) && (*(int *)(*param_1 + (ulonglong)uVar5 * 0x18) == iVar1)) break;
    uVar3 = ((longlong)puVar4 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar5 = *(uint *)(lVar2 + 4 + uVar3 * 8);
  }
  return puVar4;
}



// FUNCTION 145009880 FUN_145009880 body=877 status=ok
// SIG undefined FUN_145009880(void)

void FUN_145009880(longlong param_1,uint *param_2,int *param_3,longlong *param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  ushort uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ushort local_48;
  int *local_40;
  
  lVar2 = (longlong)*param_3;
  iVar14 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  piVar6 = (int *)(lVar5 + lVar2 * 0xc);
  iVar9 = (int)*(short *)(lVar5 + 10 + lVar2 * 0xc) + (int)*(short *)(lVar5 + 8 + lVar2 * 0xc);
  local_40 = piVar6;
  if (0 < iVar9) {
    do {
      if (iVar14 < (short)piVar6[2]) {
        iVar12 = *piVar6;
      }
      else {
        iVar12 = piVar6[1] - (int)(short)piVar6[2];
      }
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      iVar10 = *(int *)(lVar5 + 8 + (longlong)(iVar12 + iVar14) * 0x14);
      if (iVar10 != -1) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
        iVar12 = *(int *)(lVar5 + 0xc + (longlong)(iVar12 + iVar14) * 0x14);
        lVar3 = (longlong)iVar12;
        uVar16 = iVar10 - *(int *)(lVar2 + lVar3 * 0xc);
        lVar5 = lVar2 + lVar3 * 0xc;
        sVar1 = *(short *)(lVar2 + 8 + lVar3 * 0xc);
        if ((uint)(int)sVar1 <= uVar16) {
          uVar16 = iVar10 + (uint)(ushort)(sVar1 - *(short *)(lVar5 + 4));
        }
        iVar10 = *param_3;
        uVar11 = (ushort)uVar16;
        uVar13 = (ushort)iVar14;
        if (iVar12 == iVar10) {
          if (uVar11 <= uVar13) goto LAB_145009a88;
          iVar12 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar12) {
            FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar12);
          }
          piVar4 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
          if (piVar4 != (int *)0x0) {
            *piVar4 = iVar10;
            piVar4[1] = iVar10;
            *(ushort *)(piVar4 + 2) = uVar13;
            *(ushort *)((longlong)piVar4 + 10) = uVar11;
            *(undefined1 *)(piVar4 + 3) = 2;
          }
        }
        else {
          iVar15 = iVar12;
          local_48 = uVar13;
          if (iVar12 <= iVar10) {
            iVar15 = iVar10;
            iVar10 = iVar12;
            local_48 = uVar11;
            uVar11 = uVar13;
          }
          if ((*param_2 >> ((byte)iVar14 & 0x1f) & 1) == 0) {
            local_40 = (int *)CONCAT44(local_40._4_4_,iVar12);
            if ((int)*(short *)(lVar5 + 10) + (int)sVar1 < 0x17) {
              lVar5 = FUN_145009510(param_1 + 0x10);
              if (lVar5 == 0) {
LAB_145009a26:
                iVar12 = -1;
              }
              else {
                iVar12 = *(int *)(lVar5 + 4);
              }
            }
            else {
              lVar5 = FUN_145009690(param_1 + 0x30,&local_40);
              if (lVar5 == 0) goto LAB_145009a26;
              iVar12 = *(int *)(lVar5 + 4);
            }
            cVar8 = (-1 < iVar12) + '\x01';
          }
          else {
            cVar8 = '\x02';
          }
          iVar12 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar12) {
            FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar12);
          }
          piVar4 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
          if (piVar4 != (int *)0x0) {
            *piVar4 = iVar10;
            piVar4[1] = iVar15;
            *(ushort *)(piVar4 + 2) = local_48;
            *(ushort *)((longlong)piVar4 + 10) = uVar11;
            *(char *)(piVar4 + 3) = cVar8;
          }
        }
        *(int *)(param_4 + 1) = iVar12;
      }
LAB_145009a88:
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar9);
  }
  iVar14 = -1;
  iVar12 = 0;
  if ((*param_2 & 0x800000) != 0) {
    lVar5 = FUN_145009810((longlong *)(param_1 + 0x50),param_3);
    if (lVar5 != 0) {
      iVar14 = *(int *)(lVar5 + 4);
    }
    lVar2 = *(longlong *)(param_1 + 0x50);
    lVar5 = lVar2 + (longlong)iVar14 * 0x18;
    if (0 < *(int *)(lVar2 + 0x10 + (longlong)iVar14 * 0x18)) {
      do {
        lVar3 = *(longlong *)(lVar5 + 8);
        iVar14 = *param_3;
        uVar11 = (short)iVar12 + (short)iVar9;
        lVar2 = lVar3 + (longlong)iVar12 * 8;
        iVar10 = *(int *)(lVar3 + (longlong)iVar12 * 8);
        iVar15 = iVar14;
        if (iVar10 == iVar14) {
          iVar10 = *(int *)(lVar2 + 4);
          if (iVar12 < iVar10) {
            uVar7 = (short)iVar10 + (short)iVar9;
            uVar13 = uVar7;
            if (uVar7 <= uVar11) {
              uVar13 = uVar11;
              uVar11 = uVar7;
            }
LAB_145009b76:
            iVar10 = (int)param_4[1] + 1;
            if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar10) {
              FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar10);
            }
            piVar6 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
            if (piVar6 != (int *)0x0) {
              *piVar6 = iVar14;
              piVar6[1] = iVar15;
              *(ushort *)(piVar6 + 2) = uVar11;
              *(ushort *)((longlong)piVar6 + 10) = uVar13;
              *(undefined1 *)(piVar6 + 3) = 3;
            }
            *(int *)(param_4 + 1) = iVar10;
          }
        }
        else if (-1 < iVar10) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
          uVar7 = *(short *)(lVar3 + 10 + (longlong)iVar10 * 0xc) +
                  *(short *)(lVar3 + 8 + (longlong)iVar10 * 0xc) + *(short *)(lVar2 + 4);
          iVar15 = iVar10;
          uVar13 = uVar7;
          if (iVar10 <= iVar14) {
            iVar15 = iVar14;
            iVar14 = iVar10;
            uVar13 = uVar11;
            uVar11 = uVar7;
          }
          goto LAB_145009b76;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar5 + 0x10));
    }
  }
  return;
}



// FUNCTION 145009bf0 FUN_145009bf0 body=926 status=ok
// SIG undefined FUN_145009bf0(void)

void FUN_145009bf0(longlong param_1,longlong param_2,int *param_3,longlong *param_4)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  ushort uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ushort local_58;
  int *local_50;
  ulonglong local_48;
  
  lVar2 = (longlong)*param_3;
  iVar14 = 0;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  piVar6 = (int *)(lVar5 + lVar2 * 0xc);
  iVar9 = (int)*(short *)(lVar5 + 10 + lVar2 * 0xc) + (int)*(short *)(lVar5 + 8 + lVar2 * 0xc);
  local_50 = piVar6;
  if (0 < iVar9) {
    local_48 = 0;
    do {
      iVar12 = -1;
      if (iVar14 < (short)piVar6[2]) {
        iVar10 = *piVar6;
      }
      else {
        iVar10 = piVar6[1] - (int)(short)piVar6[2];
      }
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      iVar15 = *(int *)(lVar5 + 8 + (longlong)(iVar10 + iVar14) * 0x14);
      if (iVar15 != -1) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
        iVar10 = *(int *)(lVar5 + 0xc + (longlong)(iVar10 + iVar14) * 0x14);
        lVar3 = (longlong)iVar10;
        uVar17 = iVar15 - *(int *)(lVar2 + lVar3 * 0xc);
        lVar5 = lVar2 + lVar3 * 0xc;
        sVar1 = *(short *)(lVar2 + 8 + lVar3 * 0xc);
        if ((uint)(int)sVar1 <= uVar17) {
          uVar17 = iVar15 + (uint)(ushort)(sVar1 - *(short *)(lVar5 + 4));
        }
        iVar15 = *param_3;
        uVar13 = (ushort)iVar14;
        uVar11 = (ushort)uVar17;
        if (iVar10 == iVar15) {
          if (uVar11 <= uVar13) goto LAB_145009e38;
          iVar12 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar12) {
            FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar12);
          }
          piVar4 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
          if (piVar4 != (int *)0x0) {
            *piVar4 = iVar15;
            piVar4[1] = iVar15;
            *(ushort *)(piVar4 + 2) = uVar13;
            *(ushort *)((longlong)piVar4 + 10) = uVar11;
            *(undefined1 *)(piVar4 + 3) = 2;
          }
        }
        else {
          iVar16 = iVar10;
          local_58 = uVar13;
          if (iVar10 <= iVar15) {
            iVar16 = iVar15;
            iVar15 = iVar10;
            local_58 = uVar11;
            uVar11 = uVar13;
          }
          if ((*(uint *)(*(longlong *)(param_2 + 8) + (local_48 >> 5) * 4) >> ((byte)iVar14 & 0x1f)
              & 1) == 0) {
            local_50 = (int *)CONCAT44(local_50._4_4_,iVar10);
            if ((int)*(short *)(lVar5 + 10) + (int)sVar1 < 0x17) {
              lVar5 = FUN_145009510(param_1 + 0x10);
              if (lVar5 != 0) {
                iVar12 = *(int *)(lVar5 + 4);
              }
            }
            else {
              lVar5 = FUN_145009690(param_1 + 0x30,&local_50);
              if (lVar5 != 0) {
                iVar12 = *(int *)(lVar5 + 4);
              }
            }
            cVar8 = (-1 < iVar12) + '\x01';
          }
          else {
            cVar8 = '\x02';
          }
          iVar12 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar12) {
            FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar12);
          }
          piVar4 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
          if (piVar4 != (int *)0x0) {
            *piVar4 = iVar15;
            piVar4[1] = iVar16;
            *(ushort *)(piVar4 + 2) = local_58;
            *(ushort *)((longlong)piVar4 + 10) = uVar11;
            *(char *)(piVar4 + 3) = cVar8;
          }
        }
        *(int *)(param_4 + 1) = iVar12;
      }
LAB_145009e38:
      local_48 = local_48 + 1;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar9);
  }
  iVar14 = -1;
  iVar12 = 0;
  if (*(char *)(param_2 + 5) != '\0') {
    lVar5 = FUN_145009810(param_1 + 0x50,param_3);
    if (lVar5 != 0) {
      iVar14 = *(int *)(lVar5 + 4);
    }
    lVar5 = *(longlong *)(param_1 + 0x50) + (longlong)iVar14 * 0x18;
    if (0 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x10 + (longlong)iVar14 * 0x18)) {
      do {
        uVar11 = (short)iVar12 + (short)iVar9;
        piVar6 = (int *)(*(longlong *)(lVar5 + 8) + (longlong)iVar12 * 8);
        iVar14 = *param_3;
        iVar10 = *piVar6;
        iVar15 = iVar14;
        if (iVar10 == iVar14) {
          if (iVar12 < piVar6[1]) {
            uVar7 = (short)piVar6[1] + (short)iVar9;
            uVar13 = uVar7;
            if (uVar7 <= uVar11) {
              uVar13 = uVar11;
              uVar11 = uVar7;
            }
LAB_145009f17:
            iVar10 = (int)param_4[1] + 1;
            if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar10) {
              FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar10);
            }
            piVar6 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
            if (piVar6 != (int *)0x0) {
              *piVar6 = iVar14;
              piVar6[1] = iVar15;
              *(ushort *)(piVar6 + 2) = uVar11;
              *(ushort *)((longlong)piVar6 + 10) = uVar13;
              *(undefined1 *)(piVar6 + 3) = 3;
            }
            *(int *)(param_4 + 1) = iVar10;
          }
        }
        else if (-1 < iVar10) {
          lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
          uVar7 = *(short *)(lVar2 + 10 + (longlong)iVar10 * 0xc) +
                  *(short *)(lVar2 + 8 + (longlong)iVar10 * 0xc) + (short)piVar6[1];
          iVar15 = iVar10;
          uVar13 = uVar7;
          if (iVar10 <= iVar14) {
            iVar15 = iVar14;
            iVar14 = iVar10;
            uVar13 = uVar11;
            uVar11 = uVar7;
          }
          goto LAB_145009f17;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(lVar5 + 0x10));
    }
  }
  return;
}



// FUNCTION 145009f90 FUN_145009f90 body=419 status=ok
// SIG undefined FUN_145009f90(void)

void FUN_145009f90(longlong param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  uint local_48;
  int local_44 [3];
  
  local_44[0] = *param_3;
  iVar10 = -1;
  local_48 = 0xffffffff;
  FUN_14500a140(param_1,param_2,local_44,&local_48,param_4);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  sVar2 = *(short *)(lVar5 + 10 + (longlong)*param_3 * 0xc);
  sVar3 = *(short *)(lVar5 + 8 + (longlong)*param_3 * 0xc);
  lVar5 = FUN_145009810(param_1 + 0x50,param_3);
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 4);
  }
  iVar8 = 0;
  lVar5 = *(longlong *)(param_1 + 0x50) + (longlong)iVar10 * 0x18;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x10 + (longlong)iVar10 * 0x18)) {
    uVar12 = sVar3 + sVar2;
    uVar14 = (uint)uVar12;
    local_48 = CONCAT22(local_48._2_2_,uVar12);
    do {
      lVar4 = *(longlong *)(lVar5 + 8);
      uVar12 = (short)uVar14 + (short)iVar8;
      iVar10 = *param_3;
      lVar1 = lVar4 + (longlong)iVar8 * 8;
      iVar13 = *(int *)(lVar4 + (longlong)iVar8 * 8);
      iVar11 = iVar10;
      if (iVar13 == iVar10) {
        iVar13 = *(int *)(lVar1 + 4);
        if (iVar8 < iVar13) {
          uVar7 = (short)iVar13 + (short)uVar14;
          uVar9 = uVar7;
          if (uVar7 <= uVar12) {
            uVar9 = uVar12;
            uVar12 = uVar7;
          }
LAB_14500a0b8:
          iVar13 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar13) {
            FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar13);
          }
          piVar6 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
          if (piVar6 != (int *)0x0) {
            *piVar6 = iVar10;
            piVar6[1] = iVar11;
            *(ushort *)(piVar6 + 2) = uVar12;
            *(ushort *)((longlong)piVar6 + 10) = uVar9;
            *(undefined1 *)(piVar6 + 3) = 3;
          }
          *(int *)(param_4 + 1) = iVar13;
          uVar14 = local_48 & 0xffff;
        }
      }
      else if (-1 < iVar13) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
        uVar7 = *(short *)(lVar4 + 10 + (longlong)iVar13 * 0xc) +
                *(short *)(lVar4 + 8 + (longlong)iVar13 * 0xc) + *(short *)(lVar1 + 4);
        iVar11 = iVar13;
        uVar9 = uVar7;
        if (iVar13 <= iVar10) {
          iVar11 = iVar10;
          iVar10 = iVar13;
          uVar9 = uVar12;
          uVar12 = uVar7;
        }
        goto LAB_14500a0b8;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar5 + 0x10));
  }
  return;
}



// FUNCTION 14500a140 FUN_14500a140 body=545 status=ok
// SIG undefined FUN_14500a140(void)

void FUN_14500a140(longlong param_1,undefined8 param_2,int *param_3,int *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  int local_48;
  int local_44;
  int *local_40;
  
  iVar10 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  local_40 = (int *)(lVar4 + (longlong)*param_3 * 0xc);
  local_44 = (int)*(short *)(lVar4 + 10 + (longlong)*param_3 * 0xc) + (int)(short)local_40[2];
  if (0 < local_44) {
    do {
      if (iVar10 < (short)local_40[2]) {
        iVar6 = *local_40;
      }
      else {
        iVar6 = local_40[1] - (int)(short)local_40[2];
      }
      iVar6 = iVar10 + iVar6;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      iVar11 = *(int *)(lVar4 + 8 + (longlong)iVar6 * 0x14);
      if ((iVar11 != -1) && (iVar6 != *param_4)) {
        iVar6 = *(int *)(lVar4 + 0xc + (longlong)iVar6 * 0x14);
        lVar2 = (longlong)iVar6;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
        uVar14 = iVar11 - *(int *)(lVar1 + lVar2 * 0xc);
        lVar4 = lVar1 + lVar2 * 0xc;
        uVar5 = (uint)*(short *)(lVar1 + 8 + lVar2 * 0xc);
        if (uVar5 <= uVar14) {
          uVar14 = uVar5 + (ushort)((short)iVar11 - *(short *)(lVar4 + 4));
        }
        iVar11 = *param_3;
        uVar9 = (ushort)iVar10;
        uVar13 = (ushort)uVar14;
        if (iVar6 == iVar11) {
          if (uVar9 < uVar13) {
            iVar6 = (int)param_5[1] + 1;
            if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar6) {
              FUN_14500ae20(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar6);
            }
            piVar3 = (int *)((longlong)(int)param_5[1] * 0x10 + *param_5);
            if (piVar3 != (int *)0x0) {
              *piVar3 = iVar11;
              piVar3[1] = iVar11;
              *(ushort *)(piVar3 + 2) = uVar9;
              *(ushort *)((longlong)piVar3 + 10) = uVar13;
              *(undefined1 *)(piVar3 + 3) = 2;
            }
            *(int *)(param_5 + 1) = iVar6;
          }
        }
        else {
          iVar8 = iVar6;
          uVar12 = uVar9;
          if (iVar6 <= iVar11) {
            iVar8 = iVar11;
            iVar11 = iVar6;
            uVar12 = uVar13;
            uVar13 = uVar9;
          }
          local_48 = iVar6;
          if ((int)((int)*(short *)(lVar4 + 10) + uVar5) < 0x17) {
            lVar4 = FUN_145009510(param_1 + 0x10);
            if (lVar4 == 0) {
LAB_14500a2c4:
              bVar7 = 0xff;
            }
            else {
              bVar7 = (byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x18);
            }
          }
          else {
            lVar4 = FUN_145009690(param_1 + 0x30,&local_48);
            if (lVar4 == 0) goto LAB_14500a2c4;
            bVar7 = (byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x18);
          }
          iVar6 = (int)param_5[1] + 1;
          if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar6) {
            FUN_14500ae20(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar6);
          }
          piVar3 = (int *)((longlong)(int)param_5[1] * 0x10 + *param_5);
          if (piVar3 != (int *)0x0) {
            *piVar3 = iVar11;
            piVar3[1] = iVar8;
            *(ushort *)(piVar3 + 2) = uVar12;
            *(ushort *)((longlong)piVar3 + 10) = uVar13;
            *(byte *)(piVar3 + 3) = (bVar7 >> 7 ^ 1) + 1;
          }
          *(int *)(param_5 + 1) = iVar6;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_44);
  }
  return;
}



// FUNCTION 14500a370 FUN_14500a370 body=419 status=ok
// SIG undefined FUN_14500a370(void)

void FUN_14500a370(longlong param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  longlong lVar1;
  short sVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int *piVar6;
  ushort uVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  int iVar13;
  uint uVar14;
  uint local_48;
  int local_44 [3];
  
  local_44[0] = *param_3;
  iVar10 = -1;
  local_48 = 0xffffffff;
  FUN_14500a520(param_1,param_2,local_44,&local_48,param_4);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  sVar2 = *(short *)(lVar5 + 10 + (longlong)*param_3 * 0xc);
  sVar3 = *(short *)(lVar5 + 8 + (longlong)*param_3 * 0xc);
  lVar5 = FUN_145009810(param_1 + 0x50,param_3);
  if (lVar5 != 0) {
    iVar10 = *(int *)(lVar5 + 4);
  }
  iVar8 = 0;
  lVar5 = *(longlong *)(param_1 + 0x50) + (longlong)iVar10 * 0x18;
  if (0 < *(int *)(*(longlong *)(param_1 + 0x50) + 0x10 + (longlong)iVar10 * 0x18)) {
    uVar12 = sVar3 + sVar2;
    uVar14 = (uint)uVar12;
    local_48 = CONCAT22(local_48._2_2_,uVar12);
    do {
      lVar4 = *(longlong *)(lVar5 + 8);
      uVar12 = (short)uVar14 + (short)iVar8;
      iVar10 = *param_3;
      lVar1 = lVar4 + (longlong)iVar8 * 8;
      iVar13 = *(int *)(lVar4 + (longlong)iVar8 * 8);
      iVar11 = iVar10;
      if (iVar13 == iVar10) {
        iVar13 = *(int *)(lVar1 + 4);
        if (iVar8 < iVar13) {
          uVar7 = (short)iVar13 + (short)uVar14;
          uVar9 = uVar7;
          if (uVar7 <= uVar12) {
            uVar9 = uVar12;
            uVar12 = uVar7;
          }
LAB_14500a498:
          iVar13 = (int)param_4[1] + 1;
          if ((int)(*(uint *)((longlong)param_4 + 0xc) & 0x7fffffff) < iVar13) {
            FUN_14500ae20(param_4,&PTR_vftable_14c6e47a0,(longlong)iVar13);
          }
          piVar6 = (int *)((longlong)(int)param_4[1] * 0x10 + *param_4);
          if (piVar6 != (int *)0x0) {
            *piVar6 = iVar10;
            piVar6[1] = iVar11;
            *(ushort *)(piVar6 + 2) = uVar12;
            *(ushort *)((longlong)piVar6 + 10) = uVar9;
            *(undefined1 *)(piVar6 + 3) = 3;
          }
          *(int *)(param_4 + 1) = iVar13;
          uVar14 = local_48 & 0xffff;
        }
      }
      else if (-1 < iVar13) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
        uVar7 = *(short *)(lVar4 + 10 + (longlong)iVar13 * 0xc) +
                *(short *)(lVar4 + 8 + (longlong)iVar13 * 0xc) + *(short *)(lVar1 + 4);
        iVar11 = iVar13;
        uVar9 = uVar7;
        if (iVar13 <= iVar10) {
          iVar11 = iVar10;
          iVar10 = iVar13;
          uVar9 = uVar12;
          uVar12 = uVar7;
        }
        goto LAB_14500a498;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(lVar5 + 0x10));
  }
  return;
}



// FUNCTION 14500a520 FUN_14500a520 body=545 status=ok
// SIG undefined FUN_14500a520(void)

void FUN_14500a520(longlong param_1,undefined8 param_2,int *param_3,int *param_4,longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  int local_48;
  int local_44;
  int *local_40;
  
  iVar10 = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
  local_40 = (int *)(lVar4 + (longlong)*param_3 * 0xc);
  local_44 = (int)*(short *)(lVar4 + 10 + (longlong)*param_3 * 0xc) + (int)(short)local_40[2];
  if (0 < local_44) {
    do {
      if (iVar10 < (short)local_40[2]) {
        iVar6 = *local_40;
      }
      else {
        iVar6 = local_40[1] - (int)(short)local_40[2];
      }
      iVar6 = iVar10 + iVar6;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x28);
      iVar11 = *(int *)(lVar4 + 8 + (longlong)iVar6 * 0x14);
      if ((iVar11 != -1) && (iVar6 != *param_4)) {
        iVar6 = *(int *)(lVar4 + 0xc + (longlong)iVar6 * 0x14);
        lVar2 = (longlong)iVar6;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x18);
        uVar14 = iVar11 - *(int *)(lVar1 + lVar2 * 0xc);
        lVar4 = lVar1 + lVar2 * 0xc;
        uVar5 = (uint)*(short *)(lVar1 + 8 + lVar2 * 0xc);
        if (uVar5 <= uVar14) {
          uVar14 = uVar5 + (ushort)((short)iVar11 - *(short *)(lVar4 + 4));
        }
        iVar11 = *param_3;
        uVar9 = (ushort)iVar10;
        uVar13 = (ushort)uVar14;
        if (iVar6 == iVar11) {
          if (uVar9 < uVar13) {
            iVar6 = (int)param_5[1] + 1;
            if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar6) {
              FUN_14500ae20(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar6);
            }
            piVar3 = (int *)((longlong)(int)param_5[1] * 0x10 + *param_5);
            if (piVar3 != (int *)0x0) {
              *piVar3 = iVar11;
              piVar3[1] = iVar11;
              *(ushort *)(piVar3 + 2) = uVar9;
              *(ushort *)((longlong)piVar3 + 10) = uVar13;
              *(undefined1 *)(piVar3 + 3) = 2;
            }
            *(int *)(param_5 + 1) = iVar6;
          }
        }
        else {
          iVar8 = iVar6;
          uVar12 = uVar9;
          if (iVar6 <= iVar11) {
            iVar8 = iVar11;
            iVar11 = iVar6;
            uVar12 = uVar13;
            uVar13 = uVar9;
          }
          local_48 = iVar6;
          if ((int)((int)*(short *)(lVar4 + 10) + uVar5) < 0x17) {
            lVar4 = FUN_145009510(param_1 + 0x10);
            if (lVar4 == 0) {
LAB_14500a6a4:
              bVar7 = 0xff;
            }
            else {
              bVar7 = (byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x18);
            }
          }
          else {
            lVar4 = FUN_145009690(param_1 + 0x30,&local_48);
            if (lVar4 == 0) goto LAB_14500a6a4;
            bVar7 = (byte)((uint)*(undefined4 *)(lVar4 + 4) >> 0x18);
          }
          iVar6 = (int)param_5[1] + 1;
          if ((int)(*(uint *)((longlong)param_5 + 0xc) & 0x7fffffff) < iVar6) {
            FUN_14500ae20(param_5,&PTR_vftable_14c6e47a0,(longlong)iVar6);
          }
          piVar3 = (int *)((longlong)(int)param_5[1] * 0x10 + *param_5);
          if (piVar3 != (int *)0x0) {
            *piVar3 = iVar11;
            piVar3[1] = iVar8;
            *(ushort *)(piVar3 + 2) = uVar12;
            *(ushort *)((longlong)piVar3 + 10) = uVar13;
            *(byte *)(piVar3 + 3) = (bVar7 >> 7 ^ 1) + 1;
          }
          *(int *)(param_5 + 1) = iVar6;
        }
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < local_44);
  }
  return;
}



// FUNCTION 14500a750 FUN_14500a750 body=482 status=ok
// SIG undefined FUN_14500a750(void)

void FUN_14500a750(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 *param_5,longlong *param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 local_res10 [2];
  undefined8 local_res18;
  undefined4 local_68 [2];
  int local_60;
  char local_5c;
  char local_5b;
  undefined8 local_58;
  int local_50;
  undefined4 local_48;
  
  lVar2 = (longlong)(int)param_3 * 0x28;
  lVar4 = *param_2 + lVar2;
  local_60 = *(int *)(lVar4 + 8);
  local_5c = *(char *)(lVar4 + 0xc);
  local_5b = *(char *)(lVar4 + 0xd);
  local_res18 = param_3;
  FUN_144c90410(&local_58,lVar4 + 0x10);
  local_60 = local_60 + -1;
  if (((local_60 == 0) && (local_5c == '\0')) && (local_5b == '\0')) {
    uVar3 = *param_4;
    iVar6 = (int)param_6[1] + 1;
    if ((int)(*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff) < iVar6) {
      FUN_14500b1b0(param_6,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    puVar1 = (undefined1 *)(*param_6 + (longlong)(int)param_6[1] * 0xc);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 3;
      *(undefined4 *)(puVar1 + 4) = uVar3;
      *(undefined4 *)(puVar1 + 8) = (undefined4)local_res18;
    }
    *(int *)(param_6 + 1) = iVar6;
    local_res10[0] = *param_5;
    local_68[0] = *param_4;
    FUN_145006ea0(param_1,local_68,local_res10,param_6 + 2);
    if ((*(uint *)(param_2 + 3) < local_res18._4_4_) ||
       (lVar4 = param_2[2] + (longlong)(int)local_res18._4_4_ * 8,
       *(int *)(param_2[2] + 4 + (longlong)(int)local_res18._4_4_ * 8) != (int)param_3)) {
      lVar4 = FUN_145009690(param_2,*param_2 + lVar2);
    }
    FUN_1450068a0(param_2,lVar4);
  }
  else {
    lVar4 = *param_2;
    *(char *)(lVar4 + 0xd + lVar2) = local_5b;
    puVar5 = (undefined8 *)(lVar4 + 0x10 + lVar2);
    *(int *)(lVar4 + 8 + lVar2) = local_60;
    *(char *)(lVar4 + 0xc + lVar2) = local_5c;
    if (&local_58 != puVar5) {
      if ((int)(*(uint *)((longlong)puVar5 + 0xc) & 0x7fffffff) < local_50) {
        FUN_147e4b86a(puVar5,&PTR_vftable_14c6e47a0,(longlong)local_50);
      }
      FUN_144b3d470(*puVar5,local_58,(longlong)local_50 * 4);
      *(int *)(puVar5 + 1) = local_50;
    }
    *(undefined4 *)(puVar5 + 2) = local_48;
  }
  FUN_144bf90d0(&local_58);
  return;
}



// FUNCTION 14500a940 FUN_14500a940 body=486 status=ok
// SIG undefined FUN_14500a940(void)

int FUN_14500a940(longlong param_1,int param_2,longlong *param_3,longlong param_4,code *param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  
  FUN_144be90e0(0x78a702c4);
  if (param_2 == 1) {
    *param_3 = param_1;
    return 1;
  }
  iVar2 = param_2 / 2;
  iVar3 = FUN_14500a940(param_1,iVar2,param_4,param_3,param_5);
  plVar1 = (longlong *)(param_4 + (longlong)iVar2 * 8);
  iVar8 = 0;
  lVar9 = (longlong)iVar3;
  iVar13 = 0;
  iVar11 = 0;
  iVar2 = FUN_14500a940(param_1 + (longlong)iVar2 * 0xc,param_2 - iVar2,plVar1,param_3,param_5);
  lVar10 = (longlong)iVar2;
  if (0 < lVar9) {
    lVar6 = 0;
    lVar7 = 0;
    plVar5 = plVar1;
    plVar12 = param_3;
    do {
      if (lVar10 <= lVar7) break;
      iVar4 = (*param_5)(*(undefined8 *)(param_4 + lVar6 * 8),*plVar5);
      iVar11 = iVar11 + 1;
      if (iVar4 < 0) {
        *plVar12 = *(longlong *)(param_4 + lVar6 * 8);
LAB_14500aa6f:
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      }
      else {
        iVar13 = iVar13 + 1;
        lVar7 = lVar7 + 1;
        *plVar12 = *plVar5;
        plVar5 = plVar5 + 1;
        if (iVar4 < 1) goto LAB_14500aa6f;
      }
      plVar12 = plVar12 + 1;
    } while (lVar6 < lVar9);
  }
  lVar6 = (longlong)iVar8;
  if (lVar6 < lVar9) {
    plVar5 = param_3 + iVar11;
    iVar11 = iVar11 + (iVar3 - iVar8);
    do {
      lVar7 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      *plVar5 = *(longlong *)(param_4 + lVar7);
      plVar5 = plVar5 + 1;
    } while (lVar6 < lVar9);
  }
  lVar9 = (longlong)iVar13;
  if (lVar9 < lVar10) {
    param_3 = param_3 + iVar11;
    iVar11 = iVar11 + (iVar2 - iVar13);
    do {
      plVar5 = plVar1 + lVar9;
      lVar9 = lVar9 + 1;
      *param_3 = *plVar5;
      param_3 = param_3 + 1;
    } while (lVar9 < lVar10);
  }
  FUN_144be90e0(0xb17fc73d);
  return iVar11;
}



// FUNCTION 14500ab30 FUN_14500ab30 body=486 status=ok
// SIG undefined FUN_14500ab30(void)

int FUN_14500ab30(longlong param_1,int param_2,longlong *param_3,longlong param_4,code *param_5)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  
  FUN_144be90e0(0x78a702c4);
  if (param_2 == 1) {
    *param_3 = param_1;
    return 1;
  }
  iVar2 = param_2 / 2;
  iVar3 = FUN_14500ab30(param_1,iVar2,param_4,param_3,param_5);
  plVar1 = (longlong *)(param_4 + (longlong)iVar2 * 8);
  lVar9 = (longlong)iVar3;
  iVar8 = 0;
  iVar13 = 0;
  iVar11 = 0;
  iVar2 = FUN_14500ab30((longlong)iVar2 * 0x10 + param_1,param_2 - iVar2,plVar1,param_3,param_5);
  lVar10 = (longlong)iVar2;
  if (0 < lVar9) {
    lVar6 = 0;
    lVar7 = 0;
    plVar5 = plVar1;
    plVar12 = param_3;
    do {
      if (lVar10 <= lVar7) break;
      iVar4 = (*param_5)(*(undefined8 *)(param_4 + lVar6 * 8),*plVar5);
      iVar11 = iVar11 + 1;
      if (iVar4 < 0) {
        *plVar12 = *(longlong *)(param_4 + lVar6 * 8);
LAB_14500ac5e:
        iVar8 = iVar8 + 1;
        lVar6 = lVar6 + 1;
      }
      else {
        iVar13 = iVar13 + 1;
        lVar7 = lVar7 + 1;
        *plVar12 = *plVar5;
        plVar5 = plVar5 + 1;
        if (iVar4 < 1) goto LAB_14500ac5e;
      }
      plVar12 = plVar12 + 1;
    } while (lVar6 < lVar9);
  }
  lVar6 = (longlong)iVar8;
  if (lVar6 < lVar9) {
    plVar5 = param_3 + iVar11;
    iVar11 = iVar11 + (iVar3 - iVar8);
    do {
      lVar7 = lVar6 * 8;
      lVar6 = lVar6 + 1;
      *plVar5 = *(longlong *)(param_4 + lVar7);
      plVar5 = plVar5 + 1;
    } while (lVar6 < lVar9);
  }
  lVar9 = (longlong)iVar13;
  if (lVar9 < lVar10) {
    param_3 = param_3 + iVar11;
    iVar11 = iVar11 + (iVar2 - iVar13);
    do {
      plVar5 = plVar1 + lVar9;
      lVar9 = lVar9 + 1;
      *param_3 = *plVar5;
      param_3 = param_3 + 1;
    } while (lVar9 < lVar10);
  }
  FUN_144be90e0(0xb17fc73d);
  return iVar11;
}


