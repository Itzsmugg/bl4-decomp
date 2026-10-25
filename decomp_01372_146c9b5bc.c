// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146c9b5bc FUN_146c9b5bc body=140 status=ok
// SIG undefined FUN_146c9b5bc(void)

void FUN_146c9b5bc(longlong param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)(iVar2 + -1) * 0x38);
  uVar1 = *param_3;
  if (iVar3 != *param_2) {
    *(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0x24) = uVar1;
    iVar2 = *(int *)(param_1 + 0x18);
  }
  iVar3 = ~uVar1 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)uVar1 * 0x38 + *(longlong *)(param_1 + 0x10)),
            (void *)((longlong)(iVar2 - iVar4) * 0x38 + *(longlong *)(param_1 + 0x10)),
            (longlong)iVar4 * 0x38);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar2 + -1;
  FUN_146caa690(param_1 + 0x10);
  return;
}



// FUNCTION 146c9b648 FUN_146c9b648 body=502 status=ok
// SIG undefined FUN_146c9b648(void)

void FUN_146c9b648(longlong param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar5 = *(uint *)(param_3 + 4);
  if (uVar5 != 0xffffffff) {
    iVar4 = *(int *)(param_1 + 0xa0);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x30 + (longlong)(iVar4 + -1) * 0x50);
    if (iVar6 != *param_2) {
      *(uint *)(*(longlong *)(param_1 + 0xa8) + 4 + (longlong)iVar6 * 0x24) = uVar5;
      uVar5 = *(uint *)(param_3 + 4);
      iVar4 = *(int *)(param_1 + 0xa0);
    }
    iVar6 = ~uVar5 + iVar4;
    if (iVar6 != 0) {
      iVar11 = 1;
      if (iVar6 < 1) {
        iVar11 = iVar6;
      }
      memmove((void *)((longlong)(int)uVar5 * 0x50 + *(longlong *)(param_1 + 0x98)),
              (void *)((longlong)(iVar4 - iVar11) * 0x50 + *(longlong *)(param_1 + 0x98)),
              (longlong)iVar11 * 0x50);
      iVar4 = *(int *)(param_1 + 0xa0);
    }
    *(int *)(param_1 + 0xa0) = iVar4 + -1;
    FUN_146caacae(param_1 + 0x98);
    return;
  }
  iVar4 = *(int *)(param_3 + 0x14);
  if (*(int *)(param_3 + 8) <= iVar4) {
    iVar6 = *(int *)(param_3 + 0x18);
    iVar11 = *(int *)(param_3 + 8);
    do {
      if (*(int *)(param_3 + 0xc) <= iVar6) {
        iVar4 = *(int *)(param_3 + 0x1c);
        iVar9 = *(int *)(param_3 + 0xc);
        do {
          iVar10 = *(int *)(param_3 + 0x10);
          if (*(int *)(param_3 + 0x10) <= iVar4) {
            do {
              lVar2 = *(longlong *)(param_1 + 0x88);
              lVar7 = (longlong)
                      ((*(int *)(param_1 + 0x7c) * iVar11 + iVar9) * *(int *)(param_1 + 0x80) +
                      iVar10) * 0x10;
              iVar6 = *(int *)(lVar2 + 8 + lVar7);
              if ((longlong)iVar6 != 0) {
                lVar1 = lVar2 + lVar7;
                lVar2 = *(longlong *)(lVar2 + lVar7);
                iVar8 = 1;
                lVar7 = 0;
                do {
                  if (*(int *)(lVar2 + 0x30 + lVar7) == *param_2) {
                    iVar8 = iVar6 - iVar8;
                    if (iVar8 != 0) {
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(lVar7 + lVar2),
                              (void *)((longlong)(iVar6 - iVar8) * 0x50 + lVar2),
                              (longlong)iVar8 * 0x50);
                      iVar6 = *(int *)(lVar1 + 8);
                    }
                    *(int *)(lVar1 + 8) = iVar6 + -1;
                    FUN_146caacae(lVar1);
                    iVar4 = *(int *)(param_3 + 0x1c);
                    break;
                  }
                  lVar7 = lVar7 + 0x50;
                  iVar8 = iVar8 + 1;
                } while ((longlong)iVar6 * 0x50 != lVar7);
              }
              bVar3 = iVar10 < iVar4;
              iVar10 = iVar10 + 1;
            } while (bVar3);
            iVar6 = *(int *)(param_3 + 0x18);
          }
          bVar3 = iVar9 < iVar6;
          iVar9 = iVar9 + 1;
        } while (bVar3);
        iVar4 = *(int *)(param_3 + 0x14);
      }
      bVar3 = iVar11 < iVar4;
      iVar11 = iVar11 + 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 146c9b83e FUN_146c9b83e body=1277 status=ok
// SIG undefined FUN_146c9b83e(void)

void FUN_146c9b83e(longlong param_1,undefined4 *param_2,undefined4 *param_3,double *param_4,
                  char param_5)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  double dVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  undefined4 *puVar14;
  double *pdVar15;
  double *pdVar16;
  uint uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
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
  undefined1 auStack_158 [32];
  double *local_138;
  double *local_130;
  undefined4 *local_128;
  ulonglong local_120;
  undefined8 local_118;
  int local_110;
  undefined8 local_108;
  int local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  double local_d0;
  int local_c8 [6];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_5 == '\0') {
    *param_3 = *(undefined4 *)(param_1 + 0x18);
    param_3[1] = 0xffffffff;
    uVar21 = 0xffffffff;
    uVar22 = 0x7fefffff;
    uVar23 = 0xffffffff;
    uVar24 = 0xffefffff;
    uVar25 = uVar23;
    uVar26 = uVar24;
    uVar27 = uVar23;
    uVar28 = uVar24;
    uVar29 = uVar21;
    uVar30 = uVar22;
    uVar31 = uVar21;
    uVar32 = uVar22;
  }
  else {
    dVar5 = param_4[5] - param_4[2];
    dVar20 = param_4[4] - param_4[1];
    dVar19 = param_4[3] - *param_4;
    if ((dVar19 <= dVar20 || dVar19 <= dVar5) && (dVar19 = dVar20, dVar20 <= dVar5)) {
      dVar19 = dVar5;
    }
    if (dVar19 < *(double *)(param_1 + 0xb8) || dVar19 == *(double *)(param_1 + 0xb8)) {
      *param_3 = 0xffffffff;
      pdVar15 = param_4 + 3;
      if (*(char *)(param_1 + 0xc0) == '\0') {
        local_138 = param_4 + 3;
        local_130 = param_4;
        local_128 = param_2;
        FUN_146c9c4e4(param_1 + 0x20,local_c8 + 3,param_4);
        FUN_146c9c4e4(param_1 + 0x20,local_c8,local_138);
        lVar8 = 0;
        do {
          param_2 = local_128;
          param_4 = local_130;
          pdVar15 = local_138;
          if ((local_c8[lVar8 + 3] < 0) || (*(int *)(param_1 + 0x50 + lVar8 * 4) <= local_c8[lVar8])
             ) goto LAB_146c9ba33;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
        param_3[1] = 0xffffffff;
        param_3[4] = local_c8[5];
        *(ulonglong *)(param_3 + 2) = CONCAT44(local_c8[4],local_c8[3]);
        param_3[7] = local_c8[2];
        *(ulonglong *)(param_3 + 5) = CONCAT44(local_c8[1],local_c8[0]);
        puVar14 = local_128;
        pdVar15 = local_130;
        pdVar16 = local_138;
        iVar12 = local_c8[0];
        iVar7 = local_c8[1];
        uVar17 = local_c8[3];
        if (local_c8[3] <= local_c8[0]) {
          do {
            uVar18 = (ulonglong)uVar17;
            iVar13 = local_c8[4];
            iVar9 = local_c8[2];
            uVar6 = uVar18;
            if (local_c8[4] <= iVar7) {
              do {
                local_120 = uVar6;
                lVar8 = (longlong)local_c8[5];
                if (local_c8[5] <= iVar9) {
                  iVar12 = local_c8[5] + -1;
                  do {
                    lVar10 = *(longlong *)(param_1 + 0x88);
                    lVar11 = ((longlong)(*(int *)(param_1 + 0x7c) * (int)uVar18 + iVar13) *
                              (longlong)*(int *)(param_1 + 0x80) + lVar8) * 0x10;
                    local_e8 = pdVar15[2];
                    local_f8 = *pdVar15;
                    dStack_f0 = pdVar15[1];
                    local_d0 = pdVar16[2];
                    local_e0 = *(undefined4 *)pdVar16;
                    uStack_dc = *(undefined4 *)((longlong)pdVar16 + 4);
                    uStack_d8 = *(undefined4 *)(pdVar16 + 1);
                    uStack_d4 = *(undefined4 *)((longlong)pdVar16 + 0xc);
                    uVar25 = *puVar14;
                    local_100 = local_c8[5];
                    local_108 = CONCAT44(local_c8[4],local_c8[3]);
                    local_118 = CONCAT44(local_c8[1],local_c8[0]);
                    local_110 = local_c8[2];
                    iVar7 = *(int *)(lVar10 + 8 + lVar11);
                    *(uint *)(lVar10 + 8 + lVar11) = iVar7 + 1U;
                    if (*(uint *)(lVar10 + 0xc + lVar11) < iVar7 + 1U) {
                      FUN_146caac1a((longlong *)(lVar10 + lVar11),iVar7);
                      puVar14 = local_128;
                      pdVar15 = local_130;
                      pdVar16 = local_138;
                      uVar18 = local_120;
                    }
                    lVar10 = *(longlong *)(lVar10 + lVar11);
                    lVar11 = (longlong)iVar7 * 0x50;
                    *(double *)(lVar10 + 0x10 + lVar11) = local_e8;
                    *(double *)(lVar10 + lVar11) = local_f8;
                    ((double *)(lVar10 + lVar11))[1] = dStack_f0;
                    *(double *)(lVar10 + 0x28 + lVar11) = local_d0;
                    puVar2 = (undefined4 *)(lVar10 + 0x18 + lVar11);
                    *puVar2 = local_e0;
                    puVar2[1] = uStack_dc;
                    puVar2[2] = uStack_d8;
                    puVar2[3] = uStack_d4;
                    *(undefined4 *)(lVar10 + 0x30 + lVar11) = uVar25;
                    *(int *)(lVar10 + 0x3c + lVar11) = local_100;
                    *(undefined8 *)(lVar10 + 0x34 + lVar11) = local_108;
                    *(int *)(lVar10 + 0x48 + lVar11) = local_110;
                    *(undefined8 *)(lVar10 + 0x40 + lVar11) = local_118;
                    iVar12 = iVar12 + 1;
                    lVar8 = lVar8 + 1;
                    iVar7 = local_c8[1];
                    iVar9 = local_c8[2];
                  } while (iVar12 < local_c8[2]);
                }
                uVar17 = (uint)uVar18;
                bVar4 = iVar13 < iVar7;
                iVar12 = local_c8[0];
                iVar13 = iVar13 + 1;
                uVar6 = local_120;
              } while (bVar4);
            }
            bVar4 = (int)uVar17 < iVar12;
            uVar17 = uVar17 + 1;
          } while (bVar4);
        }
      }
      else {
LAB_146c9ba33:
        iVar12 = *(int *)(param_1 + 0xa0);
        param_3[1] = iVar12;
        local_e8 = param_4[2];
        local_f8 = *param_4;
        dStack_f0 = param_4[1];
        local_e0 = *(undefined4 *)pdVar15;
        uStack_dc = *(undefined4 *)((longlong)pdVar15 + 4);
        uStack_d8 = *(undefined4 *)(pdVar15 + 1);
        uStack_d4 = *(undefined4 *)((longlong)pdVar15 + 0xc);
        local_d0 = pdVar15[2];
        uVar25 = *param_2;
        *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
          FUN_146caac1a((longlong *)(param_1 + 0x98),iVar12);
        }
        lVar8 = *(longlong *)(param_1 + 0x98);
        lVar10 = (longlong)iVar12 * 0x50;
        *(double *)(lVar8 + 0x10 + lVar10) = local_e8;
        *(double *)(lVar8 + lVar10) = local_f8;
        ((double *)(lVar8 + lVar10))[1] = dStack_f0;
        *(double *)(lVar8 + 0x28 + lVar10) = local_d0;
        puVar1 = (undefined8 *)(lVar8 + 0x18 + lVar10);
        *puVar1 = CONCAT44(uStack_dc,local_e0);
        puVar1[1] = CONCAT44(uStack_d4,uStack_d8);
        *(undefined4 *)(lVar8 + 0x30 + lVar10) = uVar25;
        puVar1 = (undefined8 *)(lVar8 + 0x34 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(lVar8 + 0x44 + lVar10) = 0;
      }
      goto LAB_146c9b9b9;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x18);
    param_3[1] = 0xffffffff;
    uVar23 = SUB84(*param_4,0);
    uVar24 = (undefined4)((ulonglong)*param_4 >> 0x20);
    uVar21 = SUB84(param_4[3],0);
    uVar22 = (undefined4)((ulonglong)param_4[3] >> 0x20);
    uVar25 = SUB84(param_4[1],0);
    uVar26 = (int)((ulonglong)param_4[1] >> 0x20);
    uVar27 = SUB84(param_4[2],0);
    uVar28 = (int)((ulonglong)param_4[2] >> 0x20);
    uVar29 = SUB84(param_4[4],0);
    uVar30 = (int)((ulonglong)param_4[4] >> 0x20);
    uVar31 = SUB84(param_4[5],0);
    uVar32 = (int)((ulonglong)param_4[5] >> 0x20);
  }
  uVar3 = *param_2;
  iVar12 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar12 + 1U) {
    FUN_140c11858((longlong *)(param_1 + 0x10),iVar12);
  }
  lVar8 = *(longlong *)(param_1 + 0x10);
  lVar10 = (longlong)iVar12 * 0x38;
  *(undefined4 *)(lVar8 + lVar10) = uVar3;
  *(ulonglong *)(lVar8 + 8 + lVar10) = CONCAT44(uVar24,uVar23);
  *(ulonglong *)(lVar8 + 0x10 + lVar10) = CONCAT44(uVar26,uVar25);
  *(ulonglong *)(lVar8 + 0x18 + lVar10) = CONCAT44(uVar28,uVar27);
  *(ulonglong *)(lVar8 + 0x20 + lVar10) = CONCAT44(uVar22,uVar21);
  *(ulonglong *)(lVar8 + 0x28 + lVar10) = CONCAT44(uVar30,uVar29);
  *(ulonglong *)(lVar8 + 0x30 + lVar10) = CONCAT44(uVar32,uVar31);
LAB_146c9b9b9:
  if ((local_b0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c9bd3c FUN_146c9bd3c body=79 status=ok
// SIG undefined FUN_146c9bd3c(void)

undefined8 * FUN_146c9bd3c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_2 = 0;
  param_2[1] = 0;
  local_18 = param_2;
  FUN_146ca776e(0,param_3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9bd8c FUN_146c9bd8c body=173 status=ok
// SIG undefined FUN_146c9bd8c(void)

void FUN_146c9bd8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = param_5;
  FUN_144b01d78(&local_60,param_3,param_4);
  local_88 = local_30;
  local_90 = &local_78;
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  local_68 = local_48;
  local_98 = local_60;
  FUN_146ca81b2(param_1,param_2,&local_60,&local_80);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9be3a FUN_146c9be3a body=229 status=ok
// SIG undefined FUN_146c9be3a(void)

void FUN_146c9be3a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a0 = param_6;
  local_b8 = *param_5;
  uStack_b4 = param_5[1];
  uStack_b0 = param_5[2];
  uStack_ac = param_5[3];
  local_a8 = *(undefined8 *)(param_5 + 4);
  FUN_144b01d78(&local_60,param_3,param_4);
  local_c0 = local_30;
  local_c8 = &local_78;
  local_78 = local_58;
  uStack_70 = uStack_50;
  local_68 = local_48;
  local_98 = local_b8;
  uStack_94 = uStack_b4;
  uStack_90 = uStack_b0;
  uStack_8c = uStack_ac;
  local_88 = local_a8;
  local_d0 = local_60;
  local_d8 = &local_a0;
  FUN_146ca8c5a(param_1,param_2,&local_60);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9bf20 FUN_146c9bf20 body=62 status=ok
// SIG undefined FUN_146c9bf20(void)

void FUN_146c9bf20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_146caa276(param_1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9bf60 FUN_146c9bf60 body=802 status=ok
// SIG undefined FUN_146c9bf60(void)

void FUN_146c9bf60(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  double *pdVar3;
  undefined4 uVar4;
  longlong lVar5;
  int *piVar6;
  double *pdVar7;
  ulonglong *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar10 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  local_68 = param_1;
  if (iVar10 < 5) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_1406276ca(param_2,&local_58);
    if ((int)uStack_50 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_50 & 0xffffffff);
    }
    plVar1 = (longlong *)(local_68 + 0x10);
    if (*(int *)(local_68 + 0x1c) < (int)uStack_50) {
      FUN_140c108c0(plVar1);
    }
    lVar9 = local_58;
    param_1 = local_68;
    if ((int)uStack_50 != 0) {
      lVar12 = (longlong)(int)uStack_50;
      lVar13 = 0;
      local_60 = param_2;
      do {
        uVar4 = *(undefined4 *)(lVar9 + lVar13);
        iVar10 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = iVar10 + 1U;
        if (*(uint *)(param_1 + 0x1c) < iVar10 + 1U) {
          FUN_140c11858(plVar1,iVar10);
          param_1 = local_68;
        }
        lVar5 = *plVar1;
        lVar11 = (longlong)iVar10 * 0x38;
        *(undefined4 *)(lVar5 + lVar11) = uVar4;
        *(undefined8 *)(lVar5 + 8 + lVar11) = 0xffefffffffffffff;
        *(undefined8 *)(lVar5 + 0x10 + lVar11) = 0xffefffffffffffff;
        *(undefined8 *)(lVar5 + 0x18 + lVar11) = 0xffefffffffffffff;
        *(undefined8 *)(lVar5 + 0x20 + lVar11) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar5 + 0x28 + lVar11) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar5 + 0x30 + lVar11) = 0x7fefffffffffffff;
        lVar13 = lVar13 + 4;
        param_2 = local_60;
      } while (lVar12 * 4 != lVar13);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0x40f86a0000000000;
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
      param_1 = local_68;
    }
  }
  else {
    FUN_146c9c284(param_2,param_1 + 0x10);
    pdVar3 = (double *)(param_1 + 0xb8);
    if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
      local_58 = CONCAT44(local_58._4_4_,(float)*pdVar3);
      puVar8 = (ulonglong *)param_2[1];
      puVar2 = (undefined4 *)*puVar8 + 1;
      if ((undefined4 *)puVar8[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
          param_1 = local_68;
        }
        else {
          thunk_FUN_14572512c(param_2,&local_58);
          param_1 = local_68;
        }
      }
      else {
        local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)*puVar8);
        *puVar8 = (ulonglong)puVar2;
      }
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        *pdVar3 = (double)(float)local_58;
      }
    }
    else {
      pdVar7 = *(double **)param_2[1];
      if ((double *)((undefined8 *)param_2[1])[1] < pdVar7 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,pdVar3,8);
          param_1 = local_68;
        }
        else {
          thunk_FUN_146821949(param_2,pdVar3);
          param_1 = local_68;
        }
      }
      else {
        *pdVar3 = *pdVar7;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
      }
    }
  }
  FUN_146caa7a6(param_1 + 0x20,param_2);
  FUN_146caa7ea(param_2,param_1 + 0x78);
  FUN_146caa855(param_2,param_1 + 0x88);
  FUN_146c9c382(param_2,param_1 + 0x98);
  piVar6 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar6 + 1) {
    local_58 = CONCAT44(local_58._4_4_,(uint)*(byte *)(param_1 + 0xc0));
    (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
    if (1 < (uint)(float)local_58) {
      FUN_14572541c(param_2);
    }
    *(bool *)(local_68 + 0xc0) = (float)local_58 != 0.0;
    param_1 = local_68;
  }
  else {
    *(bool *)(param_1 + 0xc0) = *piVar6 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146caade2(param_1 + 0xa8,param_2);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c9c284 FUN_146c9c284 body=252 status=ok
// SIG undefined FUN_146c9c284(void)

longlong * FUN_146c9c284(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_140c108c0(param_2);
    }
    FUN_146caa5e2(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146caa73e(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x38;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146c9c382 FUN_146c9c382 body=260 status=ok
// SIG undefined FUN_146c9c382(void)

longlong * FUN_146c9c382(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x50,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x50);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ca7bb4(param_2);
    }
    FUN_146caab6c(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146caad64(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x50;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146c9c488 FUN_146c9c488 body=92 status=ok
// SIG undefined FUN_146c9c488(void)

void FUN_146c9c488(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140c11858(param_1,iVar2);
    }
    FUN_140c10e76((longlong)iVar2 * 0x38 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 146c9c4e4 FUN_146c9c4e4 body=159 status=ok
// SIG undefined FUN_146c9c4e4(void)

int * FUN_146c9c4e4(double *param_1,int *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  undefined1 auStack_48 [40];
  double local_20 [3];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  dVar1 = param_3[2];
  dVar2 = param_1[2];
  dVar3 = param_3[1];
  dVar4 = param_1[1];
  local_20[0] = *param_3 - *param_1;
  local_20[1] = dVar3 - dVar4;
  local_20[2] = dVar1 - dVar2;
  dVar5 = param_1[10];
  dVar6 = param_1[9];
  *param_2 = (int)((*param_3 - *param_1) / param_1[8]);
  param_2[1] = (int)((dVar3 - dVar4) / dVar6);
  param_2[2] = (int)((dVar1 - dVar2) / dVar5);
  lVar7 = 0;
  do {
    if (local_20[lVar7] <= 0.0 && local_20[lVar7] != 0.0) {
      param_2[lVar7] = param_2[lVar7] + -1;
    }
    lVar7 = lVar7 + 1;
  } while (lVar7 != 3);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9c584 FUN_146c9c584 body=118 status=ok
// SIG undefined FUN_146c9c584(void)

void FUN_146c9c584(double *param_1,int *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  dVar1 = param_3[2];
  dVar2 = param_1[2];
  dVar3 = param_3[1];
  dVar4 = param_1[1];
  dVar5 = param_1[10];
  dVar6 = param_1[9];
  *param_2 = (int)((*param_3 - *param_1) / param_1[8]);
  param_2[1] = (int)((dVar3 - dVar4) / dVar6);
  param_2[2] = (int)((dVar1 - dVar2) / dVar5);
  lVar9 = 0;
  do {
    iVar7 = param_2[lVar9];
    iVar8 = *(int *)((longlong)param_1 + lVar9 * 4 + 0x30);
    iVar10 = 0;
    if (0 < iVar7) {
      iVar10 = iVar7;
    }
    if (iVar8 <= iVar7) {
      iVar10 = iVar8 + -1;
    }
    param_2[lVar9] = iVar10;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  return;
}



// FUNCTION 146c9c5fa FUN_146c9c5fa body=461 status=ok
// SIG undefined FUN_146c9c5fa(void)

undefined8 * FUN_146c9c5fa(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *_Src;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  *param_1 = &PTR_FUN_149f48460;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446fc50a(param_1 + 2,iVar1,0);
    FUN_1446fc4ab(param_1[2],uVar2,iVar1);
  }
  puVar4 = (undefined8 *)(param_2 + 0x20);
  puVar5 = param_1 + 4;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x80);
  param_1[0xf] = *(undefined8 *)(param_2 + 0x78);
  param_1[0x11] = 0;
  iVar1 = *(int *)(param_2 + 0x90);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(int *)(param_1 + 0x12) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  }
  else {
    FUN_146caaf72(param_1 + 0x11,iVar1,0);
    FUN_146caafd4(param_1[0x11],uVar2,iVar1);
  }
  param_1[0x13] = 0;
  iVar1 = *(int *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  *(int *)(param_1 + 0x14) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  }
  else {
    FUN_146cab042(param_1 + 0x13,iVar1,0);
    FUN_146cab0a4(param_1[0x13],uVar2,iVar1);
  }
  param_1[0x15] = 0;
  iVar1 = *(int *)(param_2 + 0xb0);
  _Src = *(void **)(param_2 + 0xa8);
  *(int *)(param_1 + 0x16) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  }
  else {
    FUN_146ca51c6(param_1 + 0x15,iVar1,0);
    memcpy((void *)param_1[0x15],_Src,(longlong)iVar1 * 0x24);
  }
  param_1[0x17] = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 146c9c7ce FUN_146c9c7ce body=177 status=ok
// SIG undefined FUN_146c9c7ce(void)

longlong FUN_146c9c7ce(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  FUN_1446fc45c(param_1 + 0x10,param_2 + 0x10);
  puVar2 = (undefined8 *)(param_2 + 0x20);
  puVar3 = (undefined8 *)(param_1 + 0x20);
  for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_146cab0f2(param_1 + 0x88,param_2 + 0x88);
  FUN_146c9c880(param_1 + 0x98,param_2 + 0x98);
  FUN_146ca523a(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0xb8);
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)(param_2 + 0xc0);
  return param_1;
}



// FUNCTION 146c9c880 FUN_146c9c880 body=79 status=ok
// SIG undefined FUN_146c9c880(void)

undefined8 * FUN_146c9c880(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146cab042(param_1,iVar1);
      FUN_146cab0a4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146c9c8d0 FUN_146c9c8d0 body=56 status=ok
// SIG undefined FUN_146c9c8d0(void)

undefined8 * FUN_146c9c8d0(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(200,0x10);
  FUN_146c9c5fa(uVar1,param_1);
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 146c9c908 FUN_146c9c908 body=242 status=ok
// SIG undefined FUN_146c9c908(void)

void FUN_146c9c908(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_14479f570(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  iVar1 = *(int *)(param_1 + 0x94);
  FUN_146ca597f(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x94) != 0)) {
    FUN_146cab6d8(param_1 + 0x88,0);
  }
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_146cab738(param_1 + 0x98,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0xb4) < 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_146cab798(param_1 + 0xa8,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



// FUNCTION 146c9c9fa FUN_146c9c9fa body=142 status=ok
// SIG undefined FUN_146c9c9fa(void)

void FUN_146c9c9fa(longlong param_1,longlong param_2,uint *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10 + (longlong)(iVar2 + -1) * 0x68);
  uVar1 = *param_3;
  if (iVar3 != *(int *)(param_2 + 0x10)) {
    *(uint *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar3 * 0x24) = uVar1;
    iVar2 = *(int *)(param_1 + 0x18);
  }
  iVar3 = ~uVar1 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)uVar1 * 0x68 + *(longlong *)(param_1 + 0x10)),
            (void *)((longlong)(iVar2 - iVar4) * 0x68 + *(longlong *)(param_1 + 0x10)),
            (longlong)iVar4 * 0x68);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  *(int *)(param_1 + 0x18) = iVar2 + -1;
  FUN_144aa423e(param_1 + 0x10);
  return;
}



// FUNCTION 146c9ca88 FUN_146c9ca88 body=478 status=ok
// SIG undefined FUN_146c9ca88(void)

void FUN_146c9ca88(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar5 = *(uint *)(param_3 + 4);
  if (uVar5 != 0xffffffff) {
    iVar4 = *(int *)(param_1 + 0xa0);
    iVar6 = *(int *)(*(longlong *)(param_1 + 0x98) + 0x40 + (longlong)(iVar4 + -1) * 0x80);
    if (iVar6 != *(int *)(param_2 + 0x10)) {
      *(uint *)(*(longlong *)(param_1 + 0xa8) + 4 + (longlong)iVar6 * 0x24) = uVar5;
      uVar5 = *(uint *)(param_3 + 4);
      iVar4 = *(int *)(param_1 + 0xa0);
    }
    iVar6 = ~uVar5 + iVar4;
    if (iVar6 != 0) {
      iVar11 = 1;
      if (iVar6 < 1) {
        iVar11 = iVar6;
      }
      memmove((void *)((longlong)(int)uVar5 * 0x80 + *(longlong *)(param_1 + 0x98)),
              (void *)((longlong)(iVar4 - iVar11) * 0x80 + *(longlong *)(param_1 + 0x98)),
              (longlong)iVar11 << 7);
      iVar4 = *(int *)(param_1 + 0xa0);
    }
    *(int *)(param_1 + 0xa0) = iVar4 + -1;
    FUN_146cb0970(param_1 + 0x98);
    return;
  }
  iVar4 = *(int *)(param_3 + 0x14);
  if (*(int *)(param_3 + 8) <= iVar4) {
    iVar6 = *(int *)(param_3 + 0x18);
    iVar11 = *(int *)(param_3 + 8);
    do {
      if (*(int *)(param_3 + 0xc) <= iVar6) {
        iVar4 = *(int *)(param_3 + 0x1c);
        iVar9 = *(int *)(param_3 + 0xc);
        do {
          iVar10 = *(int *)(param_3 + 0x10);
          if (*(int *)(param_3 + 0x10) <= iVar4) {
            do {
              lVar2 = *(longlong *)(param_1 + 0x88);
              lVar7 = (longlong)
                      ((*(int *)(param_1 + 0x7c) * iVar11 + iVar9) * *(int *)(param_1 + 0x80) +
                      iVar10) * 0x10;
              iVar6 = *(int *)(lVar2 + 8 + lVar7);
              if ((longlong)iVar6 != 0) {
                lVar1 = lVar2 + lVar7;
                lVar2 = *(longlong *)(lVar2 + lVar7);
                iVar8 = 1;
                lVar7 = 0;
                do {
                  if (*(int *)(lVar2 + 0x40 + lVar7) == *(int *)(param_2 + 0x10)) {
                    iVar8 = iVar6 - iVar8;
                    if (iVar8 != 0) {
                      if (0 < iVar8) {
                        iVar8 = 1;
                      }
                      memmove((void *)(lVar7 + lVar2),
                              (void *)((longlong)(iVar6 - iVar8) * 0x80 + lVar2),
                              (longlong)iVar8 << 7);
                      iVar6 = *(int *)(lVar1 + 8);
                    }
                    *(int *)(lVar1 + 8) = iVar6 + -1;
                    FUN_146cb0970(lVar1);
                    iVar4 = *(int *)(param_3 + 0x1c);
                    break;
                  }
                  lVar7 = lVar7 + 0x80;
                  iVar8 = iVar8 + 1;
                } while ((longlong)iVar6 << 7 != lVar7);
              }
              bVar3 = iVar10 < iVar4;
              iVar10 = iVar10 + 1;
            } while (bVar3);
            iVar6 = *(int *)(param_3 + 0x18);
          }
          bVar3 = iVar9 < iVar6;
          iVar9 = iVar9 + 1;
        } while (bVar3);
        iVar4 = *(int *)(param_3 + 0x14);
      }
      bVar3 = iVar11 < iVar4;
      iVar11 = iVar11 + 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 146c9cc66 FUN_146c9cc66 body=1423 status=ok
// SIG undefined FUN_146c9cc66(void)

void FUN_146c9cc66(longlong param_1,double *param_2,undefined4 *param_3,double *param_4,char param_5
                  )

{
  undefined4 *puVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
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
  undefined1 auStack_188 [32];
  double *local_168;
  double *local_160;
  ulonglong local_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  double dStack_120;
  double local_118 [2];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  double local_e8;
  undefined8 local_e0;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8 [6];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (param_5 == '\0') {
    *param_3 = *(undefined4 *)(param_1 + 0x18);
    param_3[1] = 0xffffffff;
    local_118[0] = param_2[6];
    local_148 = *param_2;
    uStack_140 = param_2[1];
    local_138 = param_2[2];
    uStack_130 = param_2[3];
    local_128 = param_2[4];
    dStack_120 = param_2[5];
    uVar21 = 0xffffffff;
    uVar22 = 0x7fefffff;
    uVar23 = 0xffffffff;
    uVar24 = 0xffefffff;
    uVar25 = uVar23;
    uVar26 = uVar24;
    uVar27 = uVar23;
    uVar28 = uVar24;
    uVar29 = uVar21;
    uVar30 = uVar22;
    uVar31 = uVar21;
    uVar32 = uVar22;
  }
  else {
    dVar3 = param_4[5] - param_4[2];
    dVar5 = param_4[4] - param_4[1];
    dVar4 = param_4[3] - *param_4;
    if ((dVar4 <= dVar5 || dVar4 <= dVar3) && (dVar4 = dVar5, dVar5 <= dVar3)) {
      dVar4 = dVar3;
    }
    if (dVar4 < *(double *)(param_1 + 0xb8) || dVar4 == *(double *)(param_1 + 0xb8)) {
      *param_3 = 0xffffffff;
      pdVar12 = param_4 + 3;
      if (*(char *)(param_1 + 0xc0) == '\0') {
        local_168 = param_4 + 3;
        local_160 = param_4;
        FUN_146c9c4e4(param_1 + 0x20,local_c8 + 3,param_4);
        FUN_146c9c4e4(param_1 + 0x20,local_c8,local_168);
        lVar9 = 0;
        do {
          pdVar12 = local_168;
          param_4 = local_160;
          if ((local_c8[lVar9 + 3] < 0) || (*(int *)(param_1 + 0x50 + lVar9 * 4) <= local_c8[lVar9])
             ) goto LAB_146c9cec9;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
        param_3[1] = 0xffffffff;
        param_3[4] = local_c8[5];
        *(ulonglong *)(param_3 + 2) = CONCAT44(local_c8[4],local_c8[3]);
        param_3[7] = local_c8[2];
        *(ulonglong *)(param_3 + 5) = CONCAT44(local_c8[1],local_c8[0]);
        if (local_c8[3] <= local_c8[0]) {
          pdVar14 = local_160;
          iVar20 = local_c8[0];
          iVar6 = local_c8[1];
          uVar11 = local_c8[3];
          do {
            uVar17 = (ulonglong)uVar11;
            iVar7 = local_c8[2];
            uVar18 = local_c8[4];
            uVar16 = uVar11;
            uVar19 = uVar17;
            if (local_c8[4] <= iVar6) {
              do {
                local_158 = uVar19;
                uVar19 = (ulonglong)uVar18;
                lVar9 = (longlong)local_c8[5];
                if (local_c8[5] <= iVar7) {
                  iVar20 = local_c8[5] + -1;
                  local_150 = uVar19;
                  do {
                    lVar8 = *(longlong *)(param_1 + 0x88);
                    lVar10 = ((longlong)(*(int *)(param_1 + 0x7c) * (int)uVar17 + (int)uVar19) *
                              (longlong)*(int *)(param_1 + 0x80) + lVar9) * 0x10;
                    local_138 = pdVar14[2];
                    local_148 = *pdVar14;
                    uStack_140 = pdVar14[1];
                    dStack_120 = pdVar12[2];
                    uStack_130 = *pdVar12;
                    local_128 = pdVar12[1];
                    local_e8 = param_2[6];
                    local_f8 = *(undefined4 *)(param_2 + 4);
                    uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x24);
                    uStack_f0 = *(undefined4 *)(param_2 + 5);
                    uStack_ec = *(undefined4 *)((longlong)param_2 + 0x2c);
                    local_108 = *(undefined4 *)(param_2 + 2);
                    uStack_104 = *(undefined4 *)((longlong)param_2 + 0x14);
                    uStack_100 = *(undefined4 *)(param_2 + 3);
                    uStack_fc = *(undefined4 *)((longlong)param_2 + 0x1c);
                    local_118[0] = *param_2;
                    local_118[1] = param_2[1];
                    iStack_d8 = local_c8[5];
                    local_e0 = CONCAT44(local_c8[4],local_c8[3]);
                    iStack_cc = local_c8[2];
                    iStack_d4 = local_c8[0];
                    iStack_d0 = local_c8[1];
                    iVar6 = *(int *)(lVar8 + 8 + lVar10);
                    *(uint *)(lVar8 + 8 + lVar10) = iVar6 + 1U;
                    if (*(uint *)(lVar8 + 0xc + lVar10) < iVar6 + 1U) {
                      FUN_146cb08ea((longlong *)(lVar8 + lVar10),iVar6);
                      pdVar12 = local_168;
                      pdVar14 = local_160;
                      uVar17 = local_158;
                      uVar19 = local_150;
                    }
                    uVar18 = (uint)uVar19;
                    pdVar15 = (double *)((longlong)iVar6 * 0x80 + *(longlong *)(lVar8 + lVar10));
                    pdVar15[2] = local_138;
                    *pdVar15 = local_148;
                    pdVar15[1] = uStack_140;
                    *(undefined4 *)(pdVar15 + 3) = (undefined4)uStack_130;
                    *(undefined4 *)((longlong)pdVar15 + 0x1c) = uStack_130._4_4_;
                    *(undefined4 *)(pdVar15 + 4) = (undefined4)local_128;
                    *(undefined4 *)((longlong)pdVar15 + 0x24) = local_128._4_4_;
                    pdVar15[5] = dStack_120;
                    pdVar13 = local_118;
                    pdVar15 = pdVar15 + 6;
                    for (lVar8 = 10; lVar8 != 0; lVar8 = lVar8 + -1) {
                      *pdVar15 = *pdVar13;
                      pdVar13 = pdVar13 + 1;
                      pdVar15 = pdVar15 + 1;
                    }
                    iVar20 = iVar20 + 1;
                    lVar9 = lVar9 + 1;
                    iVar6 = local_c8[1];
                    iVar7 = local_c8[2];
                  } while (iVar20 < local_c8[2]);
                }
                uVar16 = (uint)uVar17;
                bVar2 = (int)uVar18 < iVar6;
                iVar20 = local_c8[0];
                uVar18 = uVar18 + 1;
                uVar19 = local_158;
              } while (bVar2);
            }
            uVar11 = uVar16 + 1;
          } while ((int)uVar16 < iVar20);
        }
      }
      else {
LAB_146c9cec9:
        iVar20 = *(int *)(param_1 + 0xa0);
        param_3[1] = iVar20;
        local_138 = param_4[2];
        local_148 = *param_4;
        uStack_140 = param_4[1];
        uStack_130 = *pdVar12;
        local_128 = pdVar12[1];
        dStack_120 = pdVar12[2];
        local_f8 = *(undefined4 *)(param_2 + 4);
        uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x24);
        uStack_f0 = *(undefined4 *)(param_2 + 5);
        uStack_ec = *(undefined4 *)((longlong)param_2 + 0x2c);
        local_108 = *(undefined4 *)(param_2 + 2);
        uStack_104 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_100 = *(undefined4 *)(param_2 + 3);
        uStack_fc = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_118[0] = *param_2;
        local_118[1] = param_2[1];
        local_e8 = param_2[6];
        local_e0 = 0;
        iStack_d8 = 0;
        iStack_d4 = 0;
        iStack_d0 = 0;
        iStack_cc = 0;
        *(uint *)(param_1 + 0xa0) = iVar20 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar20 + 1U) {
          FUN_146cb08ea((longlong *)(param_1 + 0x98),iVar20);
        }
        pdVar14 = (double *)((longlong)iVar20 * 0x80 + *(longlong *)(param_1 + 0x98));
        pdVar14[2] = local_138;
        *pdVar14 = local_148;
        pdVar14[1] = uStack_140;
        *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_130;
        *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_130._4_4_;
        *(undefined4 *)(pdVar14 + 4) = (undefined4)local_128;
        *(undefined4 *)((longlong)pdVar14 + 0x24) = local_128._4_4_;
        pdVar14[5] = dStack_120;
        pdVar12 = local_118;
        pdVar14 = pdVar14 + 6;
        for (lVar9 = 10; lVar9 != 0; lVar9 = lVar9 + -1) {
          *pdVar14 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar14 = pdVar14 + 1;
        }
      }
      goto LAB_146c9ce50;
    }
    *param_3 = *(undefined4 *)(param_1 + 0x18);
    param_3[1] = 0xffffffff;
    local_118[0] = param_2[6];
    local_148 = *param_2;
    uStack_140 = param_2[1];
    local_138 = param_2[2];
    uStack_130 = param_2[3];
    local_128 = param_2[4];
    dStack_120 = param_2[5];
    uVar23 = SUB84(*param_4,0);
    uVar24 = (undefined4)((ulonglong)*param_4 >> 0x20);
    uVar21 = SUB84(param_4[3],0);
    uVar22 = (undefined4)((ulonglong)param_4[3] >> 0x20);
    uVar25 = SUB84(param_4[1],0);
    uVar26 = (int)((ulonglong)param_4[1] >> 0x20);
    uVar27 = SUB84(param_4[2],0);
    uVar28 = (int)((ulonglong)param_4[2] >> 0x20);
    uVar29 = SUB84(param_4[4],0);
    uVar30 = (int)((ulonglong)param_4[4] >> 0x20);
    uVar31 = SUB84(param_4[5],0);
    uVar32 = (int)((ulonglong)param_4[5] >> 0x20);
  }
  iVar20 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar20 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar20 + 1U) {
    FUN_14479f6b8((longlong *)(param_1 + 0x10),iVar20);
  }
  lVar9 = *(longlong *)(param_1 + 0x10);
  lVar8 = (longlong)iVar20 * 0x68;
  *(double *)(lVar9 + 0x30 + lVar8) = local_118[0];
  pdVar12 = (double *)(lVar9 + 0x20 + lVar8);
  *pdVar12 = local_128;
  pdVar12[1] = dStack_120;
  pdVar12 = (double *)(lVar9 + 0x10 + lVar8);
  *pdVar12 = local_138;
  pdVar12[1] = uStack_130;
  puVar1 = (undefined4 *)(lVar9 + lVar8);
  *puVar1 = (undefined4)local_148;
  puVar1[1] = local_148._4_4_;
  puVar1[2] = (undefined4)uStack_140;
  puVar1[3] = uStack_140._4_4_;
  *(ulonglong *)(lVar9 + 0x38 + lVar8) = CONCAT44(uVar24,uVar23);
  *(ulonglong *)(lVar9 + 0x40 + lVar8) = CONCAT44(uVar26,uVar25);
  *(ulonglong *)(lVar9 + 0x48 + lVar8) = CONCAT44(uVar28,uVar27);
  *(ulonglong *)(lVar9 + 0x50 + lVar8) = CONCAT44(uVar22,uVar21);
  *(ulonglong *)(lVar9 + 0x58 + lVar8) = CONCAT44(uVar30,uVar29);
  *(ulonglong *)(lVar9 + 0x60 + lVar8) = CONCAT44(uVar32,uVar31);
LAB_146c9ce50:
  if ((local_b0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c9d1f6 FUN_146c9d1f6 body=79 status=ok
// SIG undefined FUN_146c9d1f6(void)

undefined8 * FUN_146c9d1f6(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *param_2 = 0;
  param_2[1] = 0;
  local_18 = param_2;
  FUN_146cab1a2(0,param_3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9d246 FUN_146c9d246 body=173 status=ok
// SIG undefined FUN_146c9d246(void)

void FUN_146c9d246(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = param_5;
  FUN_144b01d78(&local_60,param_3,param_4);
  local_88 = local_30;
  local_90 = &local_78;
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  local_68 = local_48;
  local_98 = local_60;
  FUN_146cabd24(param_1,param_2,&local_60,&local_80);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9d2f4 FUN_146c9d2f4 body=229 status=ok
// SIG undefined FUN_146c9d2f4(void)

void FUN_146c9d2f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a0 = param_6;
  local_b8 = *param_5;
  uStack_b4 = param_5[1];
  uStack_b0 = param_5[2];
  uStack_ac = param_5[3];
  local_a8 = *(undefined8 *)(param_5 + 4);
  FUN_144b01d78(&local_60,param_3,param_4);
  local_c0 = local_30;
  local_c8 = &local_78;
  local_78 = local_58;
  uStack_70 = uStack_50;
  local_68 = local_48;
  local_98 = local_b8;
  uStack_94 = uStack_b4;
  uStack_90 = uStack_b0;
  uStack_8c = uStack_ac;
  local_88 = local_a8;
  local_d0 = local_60;
  local_d8 = &local_a0;
  FUN_146cac8c8(param_1,param_2,&local_60);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9d3da FUN_146c9d3da body=62 status=ok
// SIG undefined FUN_146c9d3da(void)

void FUN_146c9d3da(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_146cae022(param_1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9d41a FUN_146c9d41a body=848 status=ok
// SIG undefined FUN_146c9d41a(void)

void FUN_146c9d41a(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  double *pdVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int *piVar7;
  double *pdVar8;
  ulonglong *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar11 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar11 < 5) {
    local_58 = 0;
    uStack_50 = 0;
    FUN_146c9d76c(param_2,&local_58);
    if ((int)uStack_50 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uStack_50 & 0xffffffff);
    }
    plVar1 = (longlong *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x1c) < (int)uStack_50) {
      FUN_14479f570(plVar1);
    }
    lVar10 = local_58;
    if ((int)uStack_50 != 0) {
      lVar12 = (longlong)(int)uStack_50;
      lVar14 = 0;
      local_a0 = param_2;
      do {
        local_68 = *(undefined8 *)(lVar10 + 0x30 + lVar14);
        pfVar3 = (float *)(lVar10 + lVar14);
        local_98 = *pfVar3;
        fStack_94 = pfVar3[1];
        fStack_90 = pfVar3[2];
        fStack_8c = pfVar3[3];
        puVar4 = (undefined4 *)(lVar10 + 0x10 + lVar14);
        local_88 = *puVar4;
        uStack_84 = puVar4[1];
        uStack_80 = puVar4[2];
        uStack_7c = puVar4[3];
        puVar4 = (undefined4 *)(lVar10 + 0x20 + lVar14);
        local_78 = *puVar4;
        uStack_74 = puVar4[1];
        uStack_70 = puVar4[2];
        uStack_6c = puVar4[3];
        iVar11 = *(int *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x18) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0x1c) < iVar11 + 1U) {
          FUN_14479f6b8(plVar1,iVar11);
        }
        lVar6 = *plVar1;
        lVar13 = (longlong)iVar11 * 0x68;
        *(undefined8 *)(lVar6 + 0x30 + lVar13) = local_68;
        puVar5 = (undefined8 *)(lVar6 + 0x20 + lVar13);
        *puVar5 = CONCAT44(uStack_74,local_78);
        puVar5[1] = CONCAT44(uStack_6c,uStack_70);
        puVar5 = (undefined8 *)(lVar6 + 0x10 + lVar13);
        *puVar5 = CONCAT44(uStack_84,local_88);
        puVar5[1] = CONCAT44(uStack_7c,uStack_80);
        pfVar3 = (float *)(lVar6 + lVar13);
        *pfVar3 = local_98;
        pfVar3[1] = fStack_94;
        pfVar3[2] = fStack_90;
        pfVar3[3] = fStack_8c;
        *(undefined8 *)(lVar6 + 0x38 + lVar13) = 0xffefffffffffffff;
        *(undefined8 *)(lVar6 + 0x40 + lVar13) = 0xffefffffffffffff;
        *(undefined8 *)(lVar6 + 0x48 + lVar13) = 0xffefffffffffffff;
        *(undefined8 *)(lVar6 + 0x50 + lVar13) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar6 + 0x58 + lVar13) = 0x7fefffffffffffff;
        *(undefined8 *)(lVar6 + 0x60 + lVar13) = 0x7fefffffffffffff;
        lVar14 = lVar14 + 0x38;
        param_2 = local_a0;
      } while (lVar12 * 0x38 - lVar14 != 0);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0x40f86a0000000000;
    if (local_58 != 0) {
      FUN_1400020a8(local_58);
    }
  }
  else {
    FUN_146c9d951(param_2,param_1 + 0x10);
    pdVar2 = (double *)(param_1 + 0xb8);
    if (*(int *)((longlong)param_2 + 0x44) < 0x3ec) {
      local_98 = (float)*pdVar2;
      puVar9 = (ulonglong *)param_2[1];
      pfVar3 = (float *)*puVar9 + 1;
      if ((float *)puVar9[1] < pfVar3) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_98,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_98);
        }
      }
      else {
        local_98 = *(float *)*puVar9;
        *puVar9 = (ulonglong)pfVar3;
      }
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        *pdVar2 = (double)local_98;
      }
    }
    else {
      pdVar8 = *(double **)param_2[1];
      if ((double *)((undefined8 *)param_2[1])[1] < pdVar8 + 1) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,pdVar2,8);
        }
        else {
          thunk_FUN_146821949(param_2,pdVar2);
        }
      }
      else {
        *pdVar2 = *pdVar8;
        *(longlong *)param_2[1] = *(longlong *)param_2[1] + 8;
      }
    }
  }
  FUN_146caa7a6(param_1 + 0x20,param_2);
  FUN_146caa7ea(param_2,param_1 + 0x78);
  FUN_146cb0509(param_2,param_1 + 0x88);
  FUN_146c9da4f(param_2,param_1 + 0x98);
  piVar7 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar7 + 1) {
    local_98 = (float)(uint)*(byte *)(param_1 + 0xc0);
    (**(code **)(*param_2 + 0x170))(param_2,&local_98,4);
    if (1 < (uint)local_98) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 0xc0) = local_98 != 0.0;
  }
  else {
    *(bool *)(param_1 + 0xc0) = *piVar7 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146cb0b46(param_1 + 0xa8,param_2);
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146c9d76c FUN_146c9d76c body=483 status=ok
// SIG undefined FUN_146c9d76c(void)

longlong * FUN_146c9d76c(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  int local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x38,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x38);
  local_50 = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_50);
    }
  }
  else {
    local_50 = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (local_50 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_50);
  }
  if (*(int *)((longlong)param_2 + 0xc) < local_50) {
    FUN_146cb0c18(param_2);
  }
  FUN_14018789a(param_2,local_50,1);
  if (0 < local_50) {
    lVar9 = 8;
    lVar8 = 0;
    do {
      lVar3 = *param_2;
      plVar10 = (longlong *)(lVar3 + lVar9 + -8);
      FUN_146cae532(param_1,plVar10);
      FUN_146caf9ea(param_1,(longlong *)(lVar3 + lVar9));
      (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cba8);
      iVar6 = FUN_1448332aa(param_1,&DAT_149e3cba8);
      if ((0xd < iVar6) && (iVar6 = FUN_1448332aa(param_1,&DAT_149e3cba8), iVar6 < 0x22)) {
        puVar2 = (ulonglong *)param_1[1];
        if (puVar2[1] < *puVar2 + 4) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_4c,4);
          }
          else {
            thunk_FUN_14572512c(param_1,local_4c);
          }
        }
        else {
          *puVar2 = *puVar2 + 4;
        }
      }
      plVar4 = *(longlong **)(lVar3 + lVar9);
      if (plVar4 == (longlong *)0x0) {
        lVar5 = *plVar10;
        if (lVar5 != 0) {
          puVar7 = (undefined4 *)(lVar5 + 0x58);
          goto LAB_146c9d8d2;
        }
      }
      else {
        puVar7 = (undefined4 *)((longlong)(int)plVar4[1] * 4 + *(longlong *)(*plVar4 + 0x80));
LAB_146c9d8d2:
        *(undefined4 *)(lVar3 + 8 + lVar9) = *puVar7;
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x38;
    } while (lVar8 < local_50);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146c9d951 FUN_146c9d951 body=252 status=ok
// SIG undefined FUN_146c9d951(void)

longlong * FUN_146c9d951(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x68,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x68);
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_14479f570(param_2);
    }
    FUN_146cb0334(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146cb03f8(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x68;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146c9da4f FUN_146c9da4f body=252 status=ok
// SIG undefined FUN_146c9da4f(void)

longlong * FUN_146c9da4f(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 7,(longlong)*(int *)((longlong)param_2 + 0xc) << 7
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146cab738(param_2);
    }
    FUN_146cb0820(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146cb0a12(*param_2 + lVar3,param_1);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x80;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146c9db4e FUN_146c9db4e body=827 status=ok
// SIG undefined FUN_146c9db4e(void)

void FUN_146c9db4e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
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
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar4 = *(int *)(param_1 + 0x54) * *(int *)(param_1 + 0x50) * *(int *)(param_1 + 0x58) *
          *(int *)(param_1 + 0x90) + *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0xa0);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  local_c8 = param_2;
  if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
    FUN_14479f570(param_2);
  }
  FUN_146c9de8c(local_c8,param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0xa0);
  plVar3 = local_c8;
  local_c0 = param_1;
  if ((longlong)iVar4 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x98);
    lVar12 = 0;
    do {
      local_88 = *(undefined8 *)(lVar8 + 0x60 + lVar12);
      puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar12);
      local_b8 = *puVar1;
      uStack_b0 = puVar1[1];
      puVar2 = (undefined4 *)(lVar8 + 0x40 + lVar12);
      local_a8 = *puVar2;
      uStack_a4 = puVar2[1];
      uStack_a0 = puVar2[2];
      uStack_9c = puVar2[3];
      puVar2 = (undefined4 *)(lVar8 + 0x50 + lVar12);
      local_98 = *puVar2;
      uStack_94 = puVar2[1];
      uStack_90 = puVar2[2];
      uStack_8c = puVar2[3];
      local_70 = *(undefined8 *)(lVar8 + 0x10 + lVar12);
      local_80 = *(undefined8 *)(lVar8 + lVar12);
      uStack_78 = ((undefined8 *)(lVar8 + lVar12))[1];
      local_58 = *(undefined8 *)(lVar8 + 0x28 + lVar12);
      puVar2 = (undefined4 *)(lVar8 + 0x18 + lVar12);
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      iVar9 = (int)plVar3[1];
      *(uint *)(plVar3 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)plVar3 + 0xc) < iVar9 + 1U) {
        FUN_14479f6b8(local_68,iVar9);
        plVar3 = local_c8;
      }
      lVar10 = *plVar3;
      lVar6 = (longlong)iVar9 * 0x68;
      *(undefined8 *)(lVar10 + 0x30 + lVar6) = local_88;
      puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar6);
      *puVar1 = CONCAT44(uStack_94,local_98);
      puVar1[1] = CONCAT44(uStack_8c,uStack_90);
      puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar6);
      *puVar1 = CONCAT44(uStack_a4,local_a8);
      puVar1[1] = CONCAT44(uStack_9c,uStack_a0);
      *(undefined8 *)(lVar10 + lVar6) = local_b8;
      ((undefined8 *)(lVar10 + lVar6))[1] = uStack_b0;
      *(undefined8 *)(lVar10 + 0x48 + lVar6) = local_70;
      puVar1 = (undefined8 *)(lVar10 + 0x38 + lVar6);
      *puVar1 = local_80;
      puVar1[1] = uStack_78;
      puVar2 = (undefined4 *)(lVar10 + 0x50 + lVar6);
      *puVar2 = local_68;
      puVar2[1] = uStack_64;
      puVar2[2] = uStack_60;
      puVar2[3] = uStack_5c;
      *(undefined8 *)(lVar10 + 0x60 + lVar6) = local_58;
      lVar12 = lVar12 + 0x80;
    } while ((longlong)iVar4 * 0x80 != lVar12);
  }
  iVar4 = *(int *)(local_c0 + 0x50);
  if (0 < iVar4) {
    iVar9 = *(int *)(local_c0 + 0x54);
    iVar11 = 0;
    lVar8 = local_c0;
    do {
      if (0 < iVar9) {
        iVar4 = *(int *)(lVar8 + 0x58);
        iVar5 = 0;
        do {
          if (0 < iVar4) {
            iVar9 = 0;
            do {
              lVar12 = (longlong)
                       ((*(int *)(lVar8 + 0x7c) * iVar11 + iVar5) * *(int *)(lVar8 + 0x80) + iVar9)
                       * 0x10;
              lVar10 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x88) + 8 + lVar12);
              if (lVar10 != 0) {
                lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x88) + lVar12);
                lVar12 = 0;
                do {
                  if (((*(int *)(lVar8 + 0x68 + lVar12) == iVar11) &&
                      (*(int *)(lVar8 + 0x6c + lVar12) == iVar5)) &&
                     (*(int *)(lVar8 + 0x70 + lVar12) == iVar9)) {
                    lVar6 = lVar8 + 0x70 + lVar12;
                    local_88 = *(undefined8 *)(lVar6 + -0x10);
                    local_b8 = *(undefined8 *)(lVar6 + -0x40);
                    uStack_b0 = *(undefined8 *)(lVar6 + -0x38);
                    local_a8 = *(undefined4 *)(lVar6 + -0x30);
                    uStack_a4 = *(undefined4 *)(lVar6 + -0x2c);
                    uStack_a0 = *(undefined4 *)(lVar6 + -0x28);
                    uStack_9c = *(undefined4 *)(lVar6 + -0x24);
                    local_98 = *(undefined4 *)(lVar6 + -0x20);
                    uStack_94 = *(undefined4 *)(lVar6 + -0x1c);
                    uStack_90 = *(undefined4 *)(lVar6 + -0x18);
                    uStack_8c = *(undefined4 *)(lVar6 + -0x14);
                    local_70 = *(undefined8 *)(lVar6 + -0x60);
                    local_80 = *(undefined8 *)(lVar6 + -0x70);
                    uStack_78 = *(undefined8 *)(lVar6 + -0x68);
                    local_58 = *(undefined8 *)(lVar6 + -0x48);
                    local_68 = *(undefined4 *)(lVar6 + -0x58);
                    uStack_64 = *(undefined4 *)(lVar6 + -0x54);
                    uStack_60 = *(undefined4 *)(lVar6 + -0x50);
                    uStack_5c = *(undefined4 *)(lVar6 + -0x4c);
                    iVar4 = (int)plVar3[1];
                    *(uint *)(plVar3 + 1) = iVar4 + 1U;
                    if (*(uint *)((longlong)plVar3 + 0xc) < iVar4 + 1U) {
                      FUN_14479f6b8(local_68,iVar4);
                      plVar3 = local_c8;
                    }
                    lVar6 = *plVar3;
                    lVar7 = (longlong)iVar4 * 0x68;
                    *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_88;
                    puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar7);
                    *puVar1 = CONCAT44(uStack_94,local_98);
                    puVar1[1] = CONCAT44(uStack_8c,uStack_90);
                    puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar7);
                    *puVar1 = CONCAT44(uStack_a4,local_a8);
                    puVar1[1] = CONCAT44(uStack_9c,uStack_a0);
                    *(undefined8 *)(lVar6 + lVar7) = local_b8;
                    ((undefined8 *)(lVar6 + lVar7))[1] = uStack_b0;
                    *(undefined8 *)(lVar6 + 0x48 + lVar7) = local_70;
                    puVar1 = (undefined8 *)(lVar6 + 0x38 + lVar7);
                    *puVar1 = local_80;
                    puVar1[1] = uStack_78;
                    puVar2 = (undefined4 *)(lVar6 + 0x50 + lVar7);
                    *puVar2 = local_68;
                    puVar2[1] = uStack_64;
                    puVar2[2] = uStack_60;
                    puVar2[3] = uStack_5c;
                    *(undefined8 *)(lVar6 + 0x60 + lVar7) = local_58;
                  }
                  lVar12 = lVar12 + 0x80;
                } while (lVar10 * 0x80 != lVar12);
                iVar4 = *(int *)(local_c0 + 0x58);
                lVar8 = local_c0;
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar4);
            iVar9 = *(int *)(lVar8 + 0x54);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar9);
        iVar4 = *(int *)(lVar8 + 0x50);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9de8c FUN_146c9de8c body=92 status=ok
// SIG undefined FUN_146c9de8c(void)

void FUN_146c9de8c(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14479f6b8(param_1,iVar2);
    }
    FUN_1446fc4ab((longlong)iVar2 * 0x68 + *param_1,*param_2,uVar1);
    return;
  }
  return;
}



// FUNCTION 146c9dee8 FUN_146c9dee8 body=186 status=ok
// SIG undefined FUN_146c9dee8(void)

undefined8 *
FUN_146c9dee8(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_149f47320;
  param_1[2] = param_2;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = param_3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  if (0 < *(int *)(param_2 + 8)) {
    FUN_146c9dfa2(param_1,0,param_4,0);
  }
  return param_1;
}



// FUNCTION 146c9dfa2 FUN_146c9dfa2 body=307 status=ok
// SIG undefined FUN_146c9dfa2(void)

void FUN_146c9dfa2(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x10) + 8);
  plVar1 = (longlong *)(param_1 + 0x78);
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    FUN_14481578e(plVar1,0);
  }
  iVar6 = *(int *)(param_1 + 0xac);
  FUN_144716727(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((iVar6 < 0) && (*(int *)(param_1 + 0xac) != 0)) {
    FUN_1403b10bc(param_1 + 0xa0,0);
  }
  plVar2 = (longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) < 0) {
    FUN_14481578e(plVar2,0);
  }
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      if (*(char *)(*(longlong *)(**(longlong **)(param_1 + 0x10) + uVar5 * 8) + 0x1a) == '\x01') {
        iVar6 = *(int *)(param_1 + 0x80);
        *(uint *)(param_1 + 0x80) = iVar6 + 1U;
        plVar4 = plVar1;
        if (*(uint *)(param_1 + 0x84) < iVar6 + 1U) {
          FUN_1446f48e2(plVar1,iVar6);
        }
      }
      else {
        iVar6 = *(int *)(param_1 + 0x20);
        *(uint *)(param_1 + 0x20) = iVar6 + 1U;
        plVar4 = plVar2;
        if (*(uint *)(param_1 + 0x24) < iVar6 + 1U) {
          FUN_1446f48e2(plVar2,iVar6);
        }
      }
      *(int *)(*plVar4 + (longlong)iVar6 * 4) = (int)uVar5;
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  FUN_142989060(param_1,plVar1,param_2);
  return;
}



// FUNCTION 146c9e0dc FUN_146c9e0dc body=122 status=ok
// SIG undefined FUN_146c9e0dc(void)

longlong FUN_146c9e0dc(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x18,param_2 + 0x18);
  FUN_146ca5326(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_146c9e156(param_1 + 0x90,param_2 + 0x90);
  FUN_144aa2ab0(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 146c9e156 FUN_146c9e156 body=93 status=ok
// SIG undefined FUN_146c9e156(void)

undefined8 * FUN_146c9e156(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140191e42(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146cb0eb2(param_1,iVar1);
      FUN_146cb0f25(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146c9e1b4 FUN_146c9e1b4 body=78 status=ok
// SIG undefined FUN_146c9e1b4(void)

longlong * FUN_146c9e1b4(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140191e42(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146c9e202 FUN_146c9e202 body=22 status=ok
// SIG undefined FUN_146c9e202(void)

undefined8 FUN_146c9e202(undefined8 param_1,undefined8 param_2)

{
  FUN_146c9e218();
  return param_2;
}



// FUNCTION 146c9e218 FUN_146c9e218 body=182 status=ok
// SIG undefined FUN_146c9e218(void)

longlong * FUN_146c9e218(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  void *_Dst;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x20);
    lVar3 = (longlong)iVar1;
    _Src = *(void **)(param_1 + 0x18);
    *(int *)(param_2 + 1) = iVar1;
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    FUN_144a06ca8(param_2,iVar1,0);
    _Dst = (void *)*param_2;
  }
  else {
    FUN_146c9ea40(param_1,param_2,*(undefined8 *)(param_1 + 0x90),param_3);
    uVar2 = *(uint *)(param_1 + 0x20);
    lVar3 = (longlong)(int)uVar2;
    if (lVar3 == 0) {
      return param_2;
    }
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_1446f48e2(param_2,iVar1);
    }
    _Src = *(void **)(param_1 + 0x18);
    _Dst = (void *)((longlong)iVar1 * 4 + *param_2);
  }
  memcpy(_Dst,_Src,lVar3 << 2);
  return param_2;
}



// FUNCTION 146c9e2ce FUN_146c9e2ce body=182 status=ok
// SIG undefined FUN_146c9e2ce(void)

longlong * FUN_146c9e2ce(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  void *_Dst;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x20);
    lVar3 = (longlong)iVar1;
    _Src = *(void **)(param_1 + 0x18);
    *(int *)(param_2 + 1) = iVar1;
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    FUN_144a06ca8(param_2,iVar1,0);
    _Dst = (void *)*param_2;
  }
  else {
    FUN_146c9e594(param_1,param_2,*(undefined8 *)(param_1 + 0x90),param_3);
    uVar2 = *(uint *)(param_1 + 0x20);
    lVar3 = (longlong)(int)uVar2;
    if (lVar3 == 0) {
      return param_2;
    }
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_1446f48e2(param_2,iVar1);
    }
    _Src = *(void **)(param_1 + 0x18);
    _Dst = (void *)((longlong)iVar1 * 4 + *param_2);
  }
  memcpy(_Dst,_Src,lVar3 << 2);
  return param_2;
}



// FUNCTION 146c9e384 FUN_146c9e384 body=505 status=ok
// SIG undefined FUN_146c9e384(void)

void FUN_146c9e384(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  uint local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0;
  undefined1 *local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_9c [4];
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  (**(code **)(*param_1 + 0x218))(param_1,&DAT_149e3cba8);
  iVar1 = FUN_1448332aa(param_1,&DAT_149e3cba8);
  if (iVar1 < 0x19) {
    local_78 = 0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_146cb0fc0(param_1,local_98);
    local_c0 = 0x100000000;
    local_b0 = 0xffffffff;
    iStack_ac = 0;
    local_a8 = 0;
    iVar1 = 0;
    local_b8 = local_88;
    if (local_70 != 0) {
      FUN_1449c0562(&local_c0);
      iVar1 = local_70;
    }
    local_d0 = local_b0;
    iStack_cc = iStack_ac;
    local_c8 = local_a8;
    local_c4 = local_a4;
    local_e0 = local_c0;
    local_d8 = local_b8;
    local_e8 = local_98;
    if ((iStack_ac != iVar1) || (local_b8 != local_88)) {
      do {
        local_c0 = *local_e8 + (longlong)iStack_cc * 0x60;
        local_b8 = (undefined1 *)((longlong)iStack_cc * 0x60 + *local_e8 + 0x28);
        FUN_146cb17bc(param_2,local_9c,&local_c0);
        local_d0 = local_d0 & ~local_e0._4_4_;
        FUN_1449c0562(&local_e0);
      } while (local_e8 != local_98 || (local_d8 != local_88 || iStack_cc != iVar1));
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_146cb1c92(local_98);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_108);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    FUN_146cb1cc8(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9e594 FUN_146c9e594 body=1195 status=ok
// SIG undefined FUN_146c9e594(void)

undefined8 * FUN_146c9e594(longlong param_1,undefined8 *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  void *_Src;
  uint uVar8;
  double dVar9;
  uint uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108 [6];
  double local_d8 [3];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = param_4[2];
  dVar1 = *param_4;
  dVar2 = param_4[1];
  do {
    local_110 = *param_3;
    local_118 = param_3[1];
    local_120 = param_3[2];
    dVar3 = param_3[3];
    dVar4 = param_3[4];
    dVar5 = param_3[5];
    local_d8[2] = local_128 - dVar5;
    local_d8[1] = dVar2 - dVar4;
    local_d8[0] = dVar1 - dVar3;
    local_108[5] = local_120 - local_128;
    local_108[4] = local_118 - dVar2;
    local_108[3] = local_110 - dVar1;
    if (((((dVar3 < dVar1) || (dVar4 < dVar2)) || (dVar5 < local_128)) ||
        ((dVar1 < local_110 || (dVar2 < local_118)))) || (local_128 < local_120)) {
      lVar11 = 0;
      do {
        dVar12 = local_108[lVar11 + 6];
        if (dVar12 <= 0.0) {
          dVar12 = 0.0;
          if (0.0 < local_108[lVar11 + 3]) {
            dVar12 = -local_108[lVar11 + 3];
          }
        }
        local_108[lVar11] = dVar12;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
      dVar12 = local_108[2] * local_108[2] +
               local_108[0] * local_108[0] + local_108[1] * local_108[1];
      if (9.999999747378752e-05 <= dVar12) {
        dVar12 = SQRT(dVar12);
        local_108[0] = local_108[0] / dVar12;
        local_108[1] = local_108[1] / dVar12;
        local_108[2] = local_108[2] / dVar12;
        if (9.999999747378752e-05 <= dVar12) goto LAB_146c9e834;
      }
      else {
        local_108[0] = 1.0;
        local_108[1] = 0.0;
        local_108[2] = 0.0;
        dVar12 = 0.0;
      }
      lVar11 = 0;
      do {
        dVar13 = 1.0;
        if ((0.0 < local_108[lVar11]) || (dVar13 = -1.0, local_108[lVar11] < 0.0)) {
          local_108[lVar11] = dVar13;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 != 3);
    }
    else {
      dVar13 = local_108[5];
      if (local_108[5] <= local_d8[2]) {
        dVar13 = local_d8[2];
      }
      dVar9 = local_108[4];
      if (local_108[4] <= local_d8[1]) {
        dVar9 = local_d8[1];
      }
      dVar12 = local_108[3];
      if (local_108[3] <= local_d8[0]) {
        dVar12 = local_d8[0];
      }
      if (dVar12 <= dVar9) {
        dVar12 = dVar9;
      }
      if (dVar12 <= dVar13) {
        dVar12 = dVar13;
      }
    }
LAB_146c9e834:
    if (0.0 < dVar12) {
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_146c9e95a;
    }
    if (*(int *)(param_3 + 8) == 0) {
      iVar6 = *(int *)(param_3 + 9);
      lVar11 = *(longlong *)(param_1 + 0xa0);
      *param_2 = 0;
      iVar7 = *(int *)(lVar11 + 8 + (longlong)iVar6 * 0x10);
      _Src = *(void **)(lVar11 + (longlong)iVar6 * 0x10);
      *(int *)(param_2 + 1) = iVar7;
      if ((longlong)iVar7 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
          return param_2;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      FUN_144a06ca8(param_2,iVar7,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar7 << 2);
LAB_146c9e95a:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_148);
    }
    local_d8[2] = (dVar5 - local_120) * 0.5 + local_120;
    local_d8[1] = (dVar4 - local_118) * 0.5 + local_118;
    local_d8[0] = (dVar3 - local_110) * 0.5 + local_110;
    lVar11 = (longlong)*(int *)(param_3 + 6);
    if (lVar11 < 0) {
      uVar8 = (uint)(local_d8[0] < dVar1);
      uVar10 = uVar8 + 2;
      if (dVar2 <= local_d8[1]) {
        uVar10 = uVar8;
      }
      if (local_d8[2] < local_128) {
        uVar10 = uVar10 | 4;
      }
    }
    else {
      uVar10 = 0;
      if (local_108[lVar11 + 6] <= param_4[lVar11] && param_4[lVar11] != local_108[lVar11 + 6]) {
        uVar10 = 1;
      }
    }
    param_3 = (double *)
              ((longlong)*(int *)((longlong)param_3[7] + (ulonglong)uVar10 * 4) * 0x50 +
              *(longlong *)(param_1 + 0x90));
  } while( true );
}



// FUNCTION 146c9ea40 FUN_146c9ea40 body=204 status=ok
// SIG undefined FUN_146c9ea40(void)

longlong * FUN_146c9ea40(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_146c9eb0e(0,param_3,param_4,param_2);
  FUN_144958a06(*param_2,(int)param_2[1]);
  uVar3 = *(uint *)(param_2 + 1);
  if (1 < (longlong)(int)uVar3) {
    lVar2 = *param_2;
    iVar4 = -uVar3;
    uVar5 = (longlong)(int)uVar3;
    do {
      if (*(int *)(lVar2 + -4 + uVar5 * 4) == *(int *)(lVar2 + -8 + uVar5 * 4)) {
        if (uVar5 != uVar3) {
          iVar6 = uVar3 + iVar4;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar2 + uVar5 * 4 + -4),
                  (void *)(lVar2 + (longlong)(int)(uVar3 - iVar6) * 4),(longlong)iVar6 << 2);
          lVar2 = *param_2;
          uVar3 = *(uint *)(param_2 + 1);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_2 + 1) = uVar3;
      }
      iVar4 = iVar4 + 1;
      bVar1 = 2 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9eb0e FUN_146c9eb0e body=352 status=ok
// SIG undefined FUN_146c9eb0e(void)

void FUN_146c9eb0e(longlong param_1,double *param_2,longlong param_3,undefined8 param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  double local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[2] = param_2[2];
  local_68[0] = *param_2;
  local_68[1] = param_2[1];
  local_68[3] = param_2[3];
  local_68[4] = param_2[4];
  local_68[5] = param_2[5];
  lVar4 = 0;
  do {
    pdVar1 = (double *)(param_3 + 0x18 + lVar4 * 8);
    if (*pdVar1 <= local_68[lVar4] && local_68[lVar4] != *pdVar1) goto LAB_146c9ebbf;
    dVar2 = *(double *)(param_3 + lVar4 * 8);
    if (local_68[lVar4 + 3] <= dVar2 && dVar2 != local_68[lVar4 + 3]) goto LAB_146c9ebbf;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  uVar3 = *(uint *)(param_2 + 8);
  if ((ulonglong)uVar3 == 0) {
    local_78 = (void *)0x0;
    local_70 = *(int *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)*(int *)(param_2 + 9) * 0x10);
    lVar4 = (longlong)local_70;
    _Src = *(void **)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(param_2 + 9) * 0x10);
    if (lVar4 == 0) {
      local_6c = 0;
    }
    else {
      FUN_144a06ca8(&local_78,local_70,0);
      memcpy(local_78,_Src,lVar4 << 2);
    }
    FUN_146cb245a(param_4,&local_78,param_3,param_1 + 0x28);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      FUN_146c9eb0e(param_1,(longlong)*(int *)((longlong)param_2[7] + uVar5 * 4) * 0x50 +
                            *(longlong *)(param_1 + 0x90),param_3,param_4);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
LAB_146c9ebbf:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9ec6f FUN_146c9ec6f body=538 status=ok
// SIG undefined FUN_146c9ec6f(void)

double * FUN_146c9ec6f(double *param_1,longlong *param_2,undefined8 *param_3,char param_4,
                      undefined4 *param_5)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_98 [32];
  double local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = *(longlong *)(*param_2 + (longlong)*(int *)*param_3 * 8);
  dVar9 = *(double *)(lVar7 + 0x10);
  local_78[2] = dVar9 + *(double *)(lVar7 + 0x30);
  local_78[1] = dVar9 + *(double *)(lVar7 + 0x28);
  local_78[0] = dVar9 + *(double *)(lVar7 + 0x20);
  dVar10 = *(double *)(lVar7 + 0x30) - dVar9;
  dVar11 = *(double *)(lVar7 + 0x28) - dVar9;
  dVar9 = *(double *)(lVar7 + 0x20) - dVar9;
  iVar2 = *(int *)(param_3 + 1);
  if (1 < (longlong)iVar2) {
    lVar7 = 1;
    do {
      lVar3 = *(longlong *)(*param_2 + (longlong)((int *)*param_3)[lVar7] * 8);
      dVar1 = *(double *)(lVar3 + 0x10);
      dVar4 = dVar1 + *(double *)(lVar3 + 0x30);
      if (local_78[2] <= dVar4) {
        local_78[2] = dVar4;
      }
      dVar4 = dVar1 + *(double *)(lVar3 + 0x28);
      if (local_78[1] <= dVar4) {
        local_78[1] = dVar4;
      }
      dVar4 = dVar1 + *(double *)(lVar3 + 0x20);
      if (local_78[0] <= dVar4) {
        local_78[0] = dVar4;
      }
      dVar4 = *(double *)(lVar3 + 0x30) - dVar1;
      if (dVar4 <= dVar10) {
        dVar10 = dVar4;
      }
      dVar4 = *(double *)(lVar3 + 0x28) - dVar1;
      if (dVar4 <= dVar11) {
        dVar11 = dVar4;
      }
      dVar1 = *(double *)(lVar3 + 0x20) - dVar1;
      if (dVar1 <= dVar9) {
        dVar9 = dVar1;
      }
      lVar7 = lVar7 + 1;
    } while (iVar2 != lVar7);
  }
  param_1[2] = dVar10;
  param_1[1] = dVar11;
  *param_1 = dVar9;
  param_1[5] = local_78[2];
  param_1[4] = local_78[1];
  param_1[3] = local_78[0];
  local_78[2] = local_78[2] - dVar10;
  local_78[1] = local_78[1] - dVar11;
  local_78[0] = local_78[0] - dVar9;
  iVar6 = -1;
  if ((local_78[2] <= local_78[0]) || (lVar7 = 2, local_78[2] <= local_78[1])) {
    if (local_78[1] <= local_78[0]) {
      lVar7 = 0;
      iVar6 = 2;
    }
    else {
      lVar7 = 1;
    }
  }
  if (param_4 != '\0') {
    uVar8 = (int)lVar7 + 1;
    uVar5 = 0;
    if (uVar8 != 3) {
      uVar5 = (ulonglong)uVar8;
    }
    if (local_78[lVar7] < local_78[uVar5] * 1.25) {
      if ((local_78[lVar7] < local_78[(uint)(iVar6 + (int)lVar7)] * 1.25) && (0x14 < iVar2)) {
        lVar7 = 0xffffffff;
      }
    }
  }
  *param_5 = (int)lVar7;
  uVar5 = local_60 ^ (ulonglong)auStack_98;
  if (uVar5 == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar5);
}



// FUNCTION 146c9ee8a FUN_146c9ee8a body=1788 status=ok
// SIG undefined FUN_146c9ee8a(void)

undefined4
FUN_146c9ee8a(longlong param_1,double *param_2,double *param_3,longlong *param_4,int param_5,
             undefined4 param_6,undefined1 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  bool bVar14;
  double *pdVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  longlong *plVar21;
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
  undefined4 uVar33;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  LPCRITICAL_SECTION local_310;
  longlong *local_308;
  double *pdStack_300;
  longlong *local_2f8;
  undefined4 *local_2f0;
  double local_2e8;
  longlong *local_2e0;
  int *local_2d8;
  undefined1 *local_2d0;
  longlong *local_2c8;
  undefined1 *local_2c0;
  longlong **local_2b8;
  double local_2b0 [4];
  double local_290;
  double local_288;
  undefined1 local_279;
  int local_278 [6];
  int aiStack_260 [3];
  int aiStack_254 [3];
  double local_248 [6];
  double local_218 [10];
  longlong local_1c8 [7];
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178 [7];
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_128 [7];
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_279 = param_7;
  if (param_5 == -1) {
    local_318 = param_6;
    FUN_146c9f58a(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_338);
  }
  local_140 = 0;
  uStack_138 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_1c8[6] = 0;
  uStack_190 = 0;
  local_1c8[4] = 0;
  local_1c8[5] = 0;
  local_1c8[2] = 0;
  local_1c8[3] = 0;
  plVar21 = (longlong *)*param_2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  local_2b0[3] = (dVar3 - (double)plVar21) * 0.5 + (double)plVar21;
  local_290 = (dVar4 - dVar1) * 0.5 + dVar1;
  local_288 = (dVar5 - dVar2) * 0.5 + dVar2;
  local_1c8[0] = -0x10000000000001;
  local_1c8[1] = 0xffefffffffffffff;
  local_218[8] = 1.79769313486232e+308;
  local_218[9] = -1.79769313486232e+308;
  local_218[6] = 1.79769313486232e+308;
  local_218[7] = 1.79769313486232e+308;
  local_218[4] = -1.79769313486232e+308;
  local_218[5] = -1.79769313486232e+308;
  local_218[2] = 1.79769313486232e+308;
  local_218[3] = -1.79769313486232e+308;
  local_218[0] = 1.79769313486232e+308;
  local_218[1] = 1.79769313486232e+308;
  piVar13 = local_278 + 3;
  lVar17 = 0;
  do {
    lVar18 = -3;
    do {
      piVar13[lVar18] = 0;
      piVar13[lVar18 + 3] = 0;
      lVar18 = lVar18 + 1;
    } while (lVar18 != 0);
    lVar17 = lVar17 + 0x18;
    piVar13 = piVar13 + 6;
  } while (lVar17 != 0x30);
  lVar17 = (longlong)param_5;
  plVar19 = (longlong *)local_2b0[lVar17 + 3];
  pdVar15 = local_248;
  pdVar16 = local_248 + 6;
  bVar10 = true;
  do {
    bVar14 = bVar10;
    local_2b0[0] = dVar3;
    local_2b0[1] = dVar4;
    local_2b0[2] = dVar5;
    local_308 = plVar21;
    pdStack_300 = (double *)dVar1;
    local_2f8 = (longlong *)dVar2;
    if (bVar14) {
      local_2b0[lVar17] = (double)plVar19;
      uVar24 = SUB84(local_2b0[2],0);
      uVar25 = (undefined4)((ulonglong)local_2b0[2] >> 0x20);
      uVar22 = SUB84(local_2b0[0],0);
      uVar23 = (undefined4)((ulonglong)local_2b0[0] >> 0x20);
      uVar26 = SUB84(local_2b0[1],0);
      uVar27 = (undefined4)((ulonglong)local_2b0[1] >> 0x20);
      uVar30 = SUB84(plVar21,0);
      uVar31 = (undefined4)((ulonglong)plVar21 >> 0x20);
      uVar32 = SUB84(dVar1,0);
      uVar33 = (undefined4)((ulonglong)dVar1 >> 0x20);
      uVar28 = SUB84(dVar2,0);
      uVar29 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    else {
      (&local_308)[lVar17] = plVar19;
      uVar28 = SUB84(local_2f8,0);
      uVar29 = (undefined4)((ulonglong)local_2f8 >> 0x20);
      uVar30 = SUB84(local_308,0);
      uVar31 = (undefined4)((ulonglong)local_308 >> 0x20);
      uVar32 = SUB84(pdStack_300,0);
      uVar33 = (undefined4)((ulonglong)pdStack_300 >> 0x20);
      uVar22 = SUB84(dVar3,0);
      uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
      uVar26 = SUB84(dVar4,0);
      uVar27 = (undefined4)((ulonglong)dVar4 >> 0x20);
      uVar24 = SUB84(dVar5,0);
      uVar25 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    pdVar16[2] = (double)local_2f8;
    *pdVar16 = (double)local_308;
    pdVar16[1] = (double)pdStack_300;
    pdVar16[3] = local_2b0[0];
    pdVar16[4] = local_2b0[1];
    pdVar16[5] = local_2b0[2];
    *pdVar15 = ((double)CONCAT44(uVar23,uVar22) + (double)CONCAT44(uVar31,uVar30)) * 0.5;
    pdVar15[1] = ((double)CONCAT44(uVar27,uVar26) + (double)CONCAT44(uVar33,uVar32)) * 0.5;
    pdVar15[2] = ((double)CONCAT44(uVar25,uVar24) + (double)CONCAT44(uVar29,uVar28)) * 0.5;
    pdVar15 = local_248 + 3;
    pdVar16 = local_248 + 0xc;
    bVar10 = false;
  } while (bVar14);
  if (0 < (int)param_4[1]) {
    lVar18 = 0;
    do {
      uVar9 = uStack_190;
      lVar12 = *param_4;
      lVar20 = *(longlong *)
                (**(longlong **)(param_1 + 0x10) + (longlong)*(int *)(lVar12 + lVar18 * 4) * 8);
      dVar1 = *(double *)(lVar20 + 0x10);
      local_308 = (longlong *)(*(double *)(lVar20 + 0x20) - dVar1);
      pdStack_300 = (double *)(*(double *)(lVar20 + 0x28) - dVar1);
      local_2f8 = (longlong *)(*(double *)(lVar20 + 0x30) - dVar1);
      local_2f0 = (undefined4 *)(dVar1 + *(double *)(lVar20 + 0x20));
      local_2e8 = dVar1 + *(double *)(lVar20 + 0x28);
      local_2e0 = (longlong *)(dVar1 + *(double *)(lVar20 + 0x30));
      puVar6 = (&local_2f0)[lVar17];
      if ((double)(&local_308)[lVar17] <= (double)plVar19 &&
          (double)plVar19 != (double)(&local_308)[lVar17]) {
        lVar20 = (longlong)(int)uStack_190;
        uVar11 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar11);
        if (uStack_190._4_4_ < uVar11) {
          FUN_1446f48e2(local_1c8 + 6,uVar9 & 0xffffffff);
        }
        *(undefined4 *)(local_1c8[6] + lVar20 * 4) = *(undefined4 *)(lVar12 + lVar18 * 4);
        lVar12 = 0;
        do {
          dVar1 = local_248[lVar12];
          plVar21 = (&local_308)[lVar12];
          puVar7 = (&local_2f0)[lVar12];
          local_278[lVar12] =
               local_278[lVar12] + (uint)((double)puVar7 < dVar1 || (double)plVar21 < dVar1);
          local_278[lVar12 + 3] =
               local_278[lVar12 + 3] + (uint)(dVar1 < (double)puVar7 || dVar1 < (double)plVar21);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
      }
      uVar9 = uStack_180;
      if ((double)plVar19 <= (double)puVar6) {
        lVar12 = *param_4;
        lVar20 = (longlong)(int)uStack_180;
        uVar11 = (int)uStack_180 + 1;
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar11);
        if (uStack_180._4_4_ < uVar11) {
          FUN_1446f48e2(&local_188,uVar9 & 0xffffffff);
        }
        *(undefined4 *)(local_188 + lVar20 * 4) = *(undefined4 *)(lVar12 + lVar18 * 4);
        lVar12 = 0;
        do {
          dVar1 = local_248[lVar12 + 3];
          plVar21 = (&local_308)[lVar12];
          puVar6 = (&local_2f0)[lVar12];
          local_278[lVar12 + 6] =
               local_278[lVar12 + 6] + (uint)((double)puVar6 < dVar1 || (double)plVar21 < dVar1);
          local_278[lVar12 + 9] =
               local_278[lVar12 + 9] + (uint)(dVar1 < (double)puVar6 || dVar1 < (double)plVar21);
          lVar12 = lVar12 + 1;
        } while (lVar12 != 3);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)param_4[1]);
  }
  local_2b8 = &local_308;
  pdStack_300 = local_248 + 6;
  local_2f8 = local_1c8 + 6;
  local_2f0 = &param_6;
  local_2d8 = local_278;
  local_2d0 = &local_279;
  plVar21 = local_1c8 + 2;
  local_2c0 = &LAB_146cb2680;
  local_308 = local_178;
  local_2e8 = (double)param_1;
  local_2e0 = param_4;
  local_2c8 = plVar21;
  FUN_1400bd65e(2,&local_2c0,0);
  local_310 = (LPCRITICAL_SECTION)(param_1 + 0xb0);
  EnterCriticalSection(local_310);
  plVar19 = local_178;
  bVar10 = true;
  do {
    bVar14 = bVar10;
    if ((int)plVar19[8] == 0) {
      iVar8 = *(int *)(param_1 + 0xa8);
      *(int *)(plVar19 + 9) = iVar8;
      *(uint *)(param_1 + 0xa8) = iVar8 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar8 + 1U) {
        FUN_140bfc2d4((longlong *)(param_1 + 0xa0),iVar8);
      }
      lVar17 = *(longlong *)(param_1 + 0xa0);
      lVar18 = (longlong)iVar8 * 0x10;
      *(undefined8 *)(lVar17 + lVar18) = 0;
      *(longlong *)(lVar17 + lVar18) = *plVar21;
      *plVar21 = 0;
      *(int *)(lVar17 + 8 + lVar18) = (int)plVar21[1];
      *(undefined4 *)(lVar17 + 0xc + lVar18) = *(undefined4 *)((longlong)plVar21 + 0xc);
      plVar21[1] = 0;
    }
    plVar21 = local_1c8 + 4;
    plVar19 = local_128;
    bVar10 = false;
  } while (bVar14);
  uVar22 = *(undefined4 *)(param_1 + 0x98);
  FUN_146c9fc66(param_1 + 0x90,local_178);
  LeaveCriticalSection(local_310);
  lVar17 = 0x20;
  do {
    if (*(longlong *)((longlong)local_1c8 + lVar17) != 0) {
      FUN_1400020a8();
    }
    lVar17 = lVar17 + -0x10;
  } while (lVar17 != 0);
  lVar17 = 0x20;
  do {
    if (*(longlong *)((longlong)local_1c8 + lVar17 + 0x20) != 0) {
      FUN_1400020a8();
    }
    lVar17 = lVar17 + -0x10;
  } while (lVar17 != 0);
  lVar17 = 0x88;
  do {
    if (*(longlong *)((longlong)local_178 + lVar17) != 0) {
      FUN_1400020a8();
    }
    lVar17 = lVar17 + -0x50;
  } while (lVar17 != -0x18);
  if ((local_d0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return uVar22;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9f58a FUN_146c9f58a body=1754 status=ok
// SIG undefined FUN_146c9f58a(void)

undefined4 FUN_146c9f58a(longlong param_1,double *param_2,double *param_3,longlong *param_4)

{
  LPCRITICAL_SECTION lpCriticalSection;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_208 [32];
  longlong local_1e8;
  longlong *local_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double *local_1c0;
  double *local_1b8;
  longlong *local_1b0;
  longlong **local_1a8;
  undefined1 *local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong *local_188;
  undefined1 *local_180;
  double **local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong *local_118;
  ulonglong uStack_110;
  longlong local_108;
  ulonglong uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_1e8 = param_1;
  FUN_146c9fcb2();
  FUN_140bfc200(&local_118,8,1);
  FUN_140bfc200(&local_128,8,1);
  local_148 = param_2[2];
  local_158 = *param_2;
  dStack_150 = param_2[1];
  local_140 = *param_3;
  dStack_138 = param_3[1];
  local_130 = param_3[2];
  dVar13 = (local_130 - local_148) * 0.5 + local_148;
  local_1d8 = (dStack_138 - dStack_150) * 0.5 + dStack_150;
  dVar15 = (local_140 - local_158) * 0.5 + local_158;
  uStack_1d0 = 0;
  local_170 = dVar15;
  local_168 = local_1d8;
  local_160 = dVar13;
  if (0 < (int)param_4[1]) {
    lVar17 = 0;
    local_1e0 = param_4;
    do {
      plVar16 = local_118;
      lVar19 = *param_4;
      lVar7 = *(longlong *)
               (**(longlong **)(local_1e8 + 0x10) + (longlong)*(int *)(lVar19 + lVar17 * 4) * 8);
      dVar1 = *(double *)(lVar7 + 0x30);
      dVar2 = *(double *)(lVar7 + 0x10);
      dVar3 = *(double *)(lVar7 + 0x20);
      dVar4 = *(double *)(lVar7 + 0x28);
      dVar14 = dVar1 - dVar2;
      bVar9 = dVar4 - dVar2 < local_1d8;
      bVar10 = dVar3 - dVar2 < dVar15;
      if ((dVar14 < dVar13) && (bVar9 && bVar10)) {
        iVar5 = (int)local_118[1];
        *(uint *)(local_118 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)local_118 + 0xc) < iVar5 + 1U) {
          FUN_1446f48e2(local_118,iVar5);
        }
        *(undefined4 *)(*plVar16 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar19 + lVar17 * 4);
      }
      bVar11 = dVar15 <= dVar3 + dVar2;
      if ((dVar14 < dVar13) && (bVar9 && bVar11)) {
        plVar16 = local_118 + 2;
        lVar19 = *param_4;
        iVar5 = (int)local_118[3];
        *(uint *)(local_118 + 3) = iVar5 + 1U;
        if (*(uint *)((longlong)local_118 + 0x1c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar16,iVar5);
        }
        *(undefined4 *)(*plVar16 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar19 + lVar17 * 4);
      }
      bVar12 = local_1d8 <= dVar4 + dVar2;
      if ((dVar14 < dVar13) && (bVar10 && bVar12)) {
        plVar16 = local_118 + 4;
        lVar19 = *param_4;
        iVar5 = (int)local_118[5];
        *(uint *)(local_118 + 5) = iVar5 + 1U;
        if (*(uint *)((longlong)local_118 + 0x2c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar16,iVar5);
        }
        *(undefined4 *)(*plVar16 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar19 + lVar17 * 4);
      }
      if ((dVar14 < dVar13) && (bVar12 && bVar11)) {
        plVar16 = local_118 + 6;
        lVar19 = *param_4;
        iVar5 = (int)local_118[7];
        *(uint *)(local_118 + 7) = iVar5 + 1U;
        if (*(uint *)((longlong)local_118 + 0x3c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar16,iVar5);
        }
        *(undefined4 *)(*plVar16 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar19 + lVar17 * 4);
        param_4 = local_1e0;
      }
      dVar2 = dVar2 + dVar1;
      if (dVar13 <= dVar2 && (bVar9 && bVar10)) {
        plVar16 = local_118 + 8;
        lVar19 = *param_4;
        iVar5 = (int)local_118[9];
        *(uint *)(local_118 + 9) = iVar5 + 1U;
        if (*(uint *)((longlong)local_118 + 0x4c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar16,iVar5);
        }
        *(undefined4 *)(*plVar16 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar19 + lVar17 * 4);
        param_4 = local_1e0;
      }
      if (dVar13 <= dVar2 && (bVar9 && bVar11)) {
        plVar16 = local_118 + 10;
        lVar19 = *param_4;
        iVar5 = (int)local_118[0xb];
        *(uint *)(local_118 + 0xb) = iVar5 + 1U;
        if (*(uint *)((longlong)local_118 + 0x5c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar16,iVar5);
        }
        *(undefined4 *)(*plVar16 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar19 + lVar17 * 4);
        param_4 = local_1e0;
      }
      if (dVar13 <= dVar2 && (bVar10 && bVar12)) {
        plVar16 = local_118 + 0xc;
        lVar19 = *param_4;
        iVar5 = (int)local_118[0xd];
        *(uint *)(local_118 + 0xd) = iVar5 + 1U;
        if (*(uint *)((longlong)local_118 + 0x6c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar16,iVar5);
        }
        *(undefined4 *)(*plVar16 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar19 + lVar17 * 4);
        param_4 = local_1e0;
      }
      if (dVar13 <= dVar2 && (bVar12 && bVar11)) {
        plVar16 = local_118 + 0xe;
        lVar19 = *param_4;
        iVar5 = (int)local_118[0xf];
        *(uint *)(local_118 + 0xf) = iVar5 + 1U;
        if (*(uint *)((longlong)local_118 + 0x7c) < iVar5 + 1U) {
          FUN_1446f48e2(plVar16,iVar5);
        }
        *(undefined4 *)(*plVar16 + (longlong)iVar5 * 4) = *(undefined4 *)(lVar19 + lVar17 * 4);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_4[1]);
  }
  lVar17 = local_1e8;
  local_1c0 = &local_158;
  local_178 = &local_1c0;
  local_1b8 = &local_170;
  local_1b0 = &local_108;
  local_1a8 = &local_118;
  local_1a0 = &stack0x00000028;
  local_198 = local_1e8;
  local_188 = &local_128;
  local_180 = &LAB_146cb29cc;
  local_190 = param_4;
  FUN_1400bd65e(8,&local_180,0);
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar17 + 0xb0);
  EnterCriticalSection(lpCriticalSection);
  plVar16 = (longlong *)(lVar17 + 0xa0);
  lVar19 = 0xc;
  lVar17 = 0;
  do {
    lVar7 = local_128;
    if (*(int *)(local_108 + 0x40 + lVar17) == 0) {
      iVar5 = *(int *)(local_1e8 + 0xa8);
      *(int *)(local_108 + 0x48 + lVar17) = iVar5;
      *(uint *)(local_1e8 + 0xa8) = iVar5 + 1U;
      if (*(uint *)(local_1e8 + 0xac) < iVar5 + 1U) {
        FUN_140bfc2d4(plVar16,iVar5);
      }
      lVar8 = *plVar16;
      lVar18 = (longlong)iVar5 * 0x10;
      *(undefined8 *)(lVar8 + lVar18) = 0;
      *(undefined8 *)(lVar8 + lVar18) = *(undefined8 *)(lVar7 + -0xc + lVar19);
      *(undefined8 *)(lVar7 + -0xc + lVar19) = 0;
      *(undefined4 *)(lVar8 + 8 + lVar18) = *(undefined4 *)(lVar7 + -4 + lVar19);
      *(undefined4 *)(lVar8 + 0xc + lVar18) = *(undefined4 *)(lVar7 + lVar19);
      *(undefined8 *)(lVar7 + -4 + lVar19) = 0;
    }
    lVar19 = lVar19 + 0x10;
    lVar17 = lVar17 + 0x50;
  } while (lVar19 != 0x8c);
  uVar6 = *(undefined4 *)(local_1e8 + 0x98);
  FUN_146c9fd26(local_1e8 + 0x90,&local_108);
  LeaveCriticalSection(lpCriticalSection);
  FUN_144716727(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_118,uStack_110 & 0xffffffff);
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140191e42(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146c9fc66 FUN_146c9fc66 body=75 status=ok
// SIG undefined FUN_146c9fc66(void)

void FUN_146c9fc66(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + 2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 2) {
    FUN_146cb23c6(param_1,iVar1);
  }
  FUN_146cb0f25((longlong)iVar1 * 0x50 + *param_1,param_2,2);
  return;
}



// FUNCTION 146c9fcb2 FUN_146c9fcb2 body=115 status=ok
// SIG undefined FUN_146c9fcb2(void)

void FUN_146c9fcb2(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if ((longlong)iVar1 < 8) {
    *(undefined4 *)(param_1 + 1) = 8;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < 8U - iVar1) {
      FUN_146cb23c6(param_1,iVar1);
    }
    FUN_146cb23b2((longlong)iVar1 * 0x50 + *param_1,8U - iVar1);
    return;
  }
  if (iVar1 == 8) {
    return;
  }
  FUN_146cb28c6(param_1,iVar1 + -8);
  FUN_146cb291e(param_1);
  return;
}



// FUNCTION 146c9fd26 FUN_146c9fd26 body=95 status=ok
// SIG undefined FUN_146c9fd26(void)

void FUN_146c9fd26(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
    FUN_146cb23c6(param_1,iVar2);
  }
  FUN_146cb0f25((longlong)iVar2 * 0x50 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 146c9fd8c FUN_146c9fd8c body=122 status=ok
// SIG undefined FUN_146c9fd8c(void)

longlong FUN_146c9fd8c(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x18,param_2 + 0x18);
  FUN_146ca5326(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_146c9e156(param_1 + 0x90,param_2 + 0x90);
  FUN_144aa2ab0(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 146c9fe06 FUN_146c9fe06 body=140 status=ok
// SIG undefined FUN_146c9fe06(void)

longlong FUN_146c9fe06(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
    *(undefined8 *)(param_2 + 0x20) = 0;
  }
  FUN_146ca5488(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_146c9e1b4(param_1 + 0x90,param_2 + 0x90);
  FUN_144aa2b0e(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 146c9fe92 FUN_146c9fe92 body=22 status=ok
// SIG undefined FUN_146c9fe92(void)

undefined8 FUN_146c9fe92(undefined8 param_1,undefined8 param_2)

{
  FUN_146c9fea8();
  return param_2;
}



// FUNCTION 146c9fea8 FUN_146c9fea8 body=182 status=ok
// SIG undefined FUN_146c9fea8(void)

longlong * FUN_146c9fea8(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  void *_Dst;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x20);
    lVar3 = (longlong)iVar1;
    _Src = *(void **)(param_1 + 0x18);
    *(int *)(param_2 + 1) = iVar1;
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    FUN_144a06ca8(param_2,iVar1,0);
    _Dst = (void *)*param_2;
  }
  else {
    FUN_146c9fff4(param_1,param_2,*(undefined8 *)(param_1 + 0x90),param_3);
    uVar2 = *(uint *)(param_1 + 0x20);
    lVar3 = (longlong)(int)uVar2;
    if (lVar3 == 0) {
      return param_2;
    }
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_1446f48e2(param_2,iVar1);
    }
    _Src = *(void **)(param_1 + 0x18);
    _Dst = (void *)((longlong)iVar1 * 4 + *param_2);
  }
  memcpy(_Dst,_Src,lVar3 << 2);
  return param_2;
}



// FUNCTION 146c9ff5e FUN_146c9ff5e body=147 status=ok
// SIG undefined FUN_146c9ff5e(void)

void FUN_146c9ff5e(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_1403b0476(param_2,param_1 + 0x18);
  FUN_146c9e384(param_2,param_1 + 0x28);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x88),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146cb2092(param_2,param_1 + 0x90);
  FUN_146cb0c86(param_2,param_1 + 0xa0);
  return;
}



// FUNCTION 146c9fff4 FUN_146c9fff4 body=204 status=ok
// SIG undefined FUN_146c9fff4(void)

longlong * FUN_146c9fff4(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_146ca00c2(0,param_3,param_4,param_2);
  FUN_144958a06(*param_2,(int)param_2[1]);
  uVar3 = *(uint *)(param_2 + 1);
  if (1 < (longlong)(int)uVar3) {
    lVar2 = *param_2;
    iVar4 = -uVar3;
    uVar5 = (longlong)(int)uVar3;
    do {
      if (*(int *)(lVar2 + -4 + uVar5 * 4) == *(int *)(lVar2 + -8 + uVar5 * 4)) {
        if (uVar5 != uVar3) {
          iVar6 = uVar3 + iVar4;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar2 + uVar5 * 4 + -4),
                  (void *)(lVar2 + (longlong)(int)(uVar3 - iVar6) * 4),(longlong)iVar6 << 2);
          lVar2 = *param_2;
          uVar3 = *(uint *)(param_2 + 1);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_2 + 1) = uVar3;
      }
      iVar4 = iVar4 + 1;
      bVar1 = 2 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca00c2 FUN_146ca00c2 body=352 status=ok
// SIG undefined FUN_146ca00c2(void)

void FUN_146ca00c2(longlong param_1,double *param_2,longlong param_3,undefined8 param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  double local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[2] = param_2[2];
  local_68[0] = *param_2;
  local_68[1] = param_2[1];
  local_68[3] = param_2[3];
  local_68[4] = param_2[4];
  local_68[5] = param_2[5];
  lVar4 = 0;
  do {
    pdVar1 = (double *)(param_3 + 0x18 + lVar4 * 8);
    if (*pdVar1 <= local_68[lVar4] && local_68[lVar4] != *pdVar1) goto LAB_146ca0173;
    dVar2 = *(double *)(param_3 + lVar4 * 8);
    if (local_68[lVar4 + 3] <= dVar2 && dVar2 != local_68[lVar4 + 3]) goto LAB_146ca0173;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  uVar3 = *(uint *)(param_2 + 8);
  if ((ulonglong)uVar3 == 0) {
    local_78 = (void *)0x0;
    local_70 = *(int *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)*(int *)(param_2 + 9) * 0x10);
    lVar4 = (longlong)local_70;
    _Src = *(void **)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(param_2 + 9) * 0x10);
    if (lVar4 == 0) {
      local_6c = 0;
    }
    else {
      FUN_144a06ca8(&local_78,local_70,0);
      memcpy(local_78,_Src,lVar4 << 2);
    }
    FUN_146cb308a(param_4,&local_78,param_3,param_1 + 0x28);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      FUN_146ca00c2(param_1,(longlong)*(int *)((longlong)param_2[7] + uVar5 * 4) * 0x50 +
                            *(longlong *)(param_1 + 0x90),param_3,param_4);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
LAB_146ca0173:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca0223 FUN_146ca0223 body=320 status=ok
// SIG undefined FUN_146ca0223(void)

void FUN_146ca0223(longlong param_1,longlong *param_2,longlong param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar9 = *(uint *)(param_2 + 1);
  if ((uint)(*(int *)(param_3 + 8) - *(int *)(param_3 + 0x34)) < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_146cb2cfc(param_3,uVar9);
    iVar5 = 1;
    if (3 < uVar9) {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_3 + 0x48) == 0) || (*(int *)(param_3 + 0x48) < iVar5)) {
      *(int *)(param_3 + 0x48) = iVar5;
      FUN_146cb1aea(param_3);
    }
  }
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar8 = 0;
    do {
      local_44 = *(int *)(lVar2 + lVar8);
      lVar7 = (longlong)local_44;
      lVar3 = *(longlong *)(param_1 + 0x28);
      local_68 = *(undefined8 *)(lVar3 + 0x10 + lVar7 * 0x18);
      puVar6 = (undefined8 *)(lVar3 + lVar7 * 0x18);
      local_78 = *puVar6;
      uStack_70 = puVar6[1];
      local_50 = *(undefined8 *)(lVar3 + 0x10 + lVar7 * 0x18);
      puVar1 = (undefined4 *)(lVar3 + lVar7 * 0x18);
      local_60 = *puVar1;
      uStack_5c = puVar1[1];
      uStack_58 = puVar1[2];
      uStack_54 = puVar1[3];
      puVar6 = (undefined8 *)FUN_146cb2e9a(param_3,lVar7,&local_44);
      *puVar6 = local_78;
      puVar6[1] = uStack_70;
      puVar6[2] = local_68;
      *(undefined4 *)(puVar6 + 3) = local_60;
      *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_5c;
      *(undefined4 *)(puVar6 + 4) = uStack_58;
      *(undefined4 *)((longlong)puVar6 + 0x24) = uStack_54;
      puVar6[5] = local_50;
      lVar8 = lVar8 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca0365 FUN_146ca0365 body=886 status=ok
// SIG undefined FUN_146ca0365(void)

double * FUN_146ca0365(double *param_1,undefined8 *param_2,longlong *param_3,undefined4 *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_118 [40];
  double local_f0 [3];
  int local_d8 [6];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  puVar8 = (uint *)*param_2;
  lVar9 = param_3[1];
  iVar16 = *(int *)((longlong)param_3 + 0x34);
  if ((int)lVar9 == iVar16) {
    lVar14 = *param_3;
  }
  else {
    uVar7 = *puVar8;
    lVar14 = *param_3;
    plVar13 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[8];
    }
    iVar17 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_3[9] - 1U & uVar7) * 4);
    while (iVar17 != -1) {
      lVar15 = lVar14 + (longlong)iVar17 * 0x40;
      if (*(uint *)(lVar14 + (longlong)iVar17 * 0x40) == uVar7) goto LAB_146ca03f1;
      iVar17 = *(int *)(lVar15 + 0x38);
    }
  }
  lVar15 = 0;
LAB_146ca03f1:
  param_1[2] = *(double *)(lVar15 + 0x18);
  dVar1 = *(double *)(lVar15 + 0x10);
  *param_1 = *(double *)(lVar15 + 8);
  param_1[1] = dVar1;
  dVar1 = *(double *)(lVar15 + 0x28);
  param_1[3] = *(double *)(lVar15 + 0x20);
  param_1[4] = dVar1;
  param_1[5] = *(double *)(lVar15 + 0x30);
  dVar1 = param_1[5];
  uVar20 = SUB84(dVar1,0);
  uVar21 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar22 = param_1[2];
  dVar23 = param_1[4];
  dVar24 = *param_1;
  dVar25 = param_1[1];
  dVar26 = param_1[3];
  local_f0[0] = (dVar26 - dVar24) * 0.5 + dVar24;
  local_f0[1] = (dVar23 - dVar25) * 0.5 + dVar25;
  local_f0[2] = (dVar1 - dVar22) * 0.5 + dVar22;
  lVar15 = 0;
  do {
    dVar1 = local_f0[lVar15];
    local_d8[lVar15 * 2] = local_d8[lVar15 * 2] + (uint)(dVar1 <= 0.0);
    local_d8[lVar15 * 2 + 1] = local_d8[lVar15 * 2 + 1] + (uint)(0.0 < dVar1);
    lVar15 = lVar15 + 1;
  } while (lVar15 != 3);
  iVar17 = *(int *)(param_2 + 1);
  if (1 < (longlong)iVar17) {
    plVar13 = param_3 + 7;
    if ((longlong *)param_3[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_3[8];
    }
    lVar15 = param_3[9];
    lVar12 = 1;
    do {
      if ((int)lVar9 != iVar16) {
        uVar7 = puVar8[lVar12];
        iVar18 = *(int *)((longlong)plVar13 + (ulonglong)(uVar7 & (int)lVar15 - 1U) * 4);
        while (iVar18 != -1) {
          lVar19 = lVar14 + (longlong)iVar18 * 0x40;
          if (*(uint *)(lVar14 + (longlong)iVar18 * 0x40) == uVar7) goto LAB_146ca04e8;
          iVar18 = *(int *)(lVar19 + 0x38);
        }
      }
      lVar19 = 0;
LAB_146ca04e8:
      dVar1 = *(double *)(lVar19 + 8);
      dVar2 = *(double *)(lVar19 + 0x10);
      dVar3 = *(double *)(lVar19 + 0x18);
      dVar4 = *(double *)(lVar19 + 0x20);
      dVar5 = *(double *)(lVar19 + 0x28);
      dVar6 = *(double *)(lVar19 + 0x30);
      if (dVar3 <= dVar22) {
        dVar22 = dVar3;
      }
      if (dVar2 <= dVar25) {
        dVar25 = dVar2;
      }
      if (dVar1 <= dVar24) {
        dVar24 = dVar1;
      }
      *param_1 = dVar24;
      param_1[1] = dVar25;
      param_1[2] = dVar22;
      if ((double)CONCAT44(uVar21,uVar20) <= dVar6) {
        uVar20 = SUB84(dVar6,0);
        uVar21 = (int)((ulonglong)dVar6 >> 0x20);
      }
      if (dVar23 <= dVar5) {
        dVar23 = dVar5;
      }
      if (dVar26 <= dVar4) {
        dVar26 = dVar4;
      }
      param_1[3] = dVar26;
      param_1[4] = dVar23;
      param_1[5] = (double)CONCAT44(uVar21,uVar20);
      local_f0[0] = (dVar4 - dVar1) * 0.5 + dVar1;
      local_f0[1] = (dVar5 - dVar2) * 0.5 + dVar2;
      local_f0[2] = (dVar6 - dVar3) * 0.5 + dVar3;
      lVar19 = 0;
      do {
        dVar1 = local_f0[lVar19];
        local_d8[lVar19 * 2] = local_d8[lVar19 * 2] + (uint)(dVar1 <= 0.0);
        local_d8[lVar19 * 2 + 1] = local_d8[lVar19 * 2 + 1] + (uint)(0.0 < dVar1);
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
      lVar12 = lVar12 + 1;
    } while (lVar12 != iVar17);
  }
  uVar10 = 0;
  iVar16 = 0;
  uVar11 = 0;
  do {
    iVar17 = local_d8[uVar10 * 2 + 1];
    if (local_d8[uVar10 * 2] < local_d8[uVar10 * 2 + 1]) {
      iVar17 = local_d8[uVar10 * 2];
    }
    if (iVar16 < iVar17) {
      uVar11 = uVar10 & 0xffffffff;
      iVar16 = iVar17;
    }
    uVar10 = uVar10 + 1;
  } while (uVar10 != 3);
  *param_4 = (int)uVar11;
  if ((local_c0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_c0 ^ (ulonglong)auStack_118);
}



// FUNCTION 146ca06dc FUN_146ca06dc body=1788 status=ok
// SIG undefined FUN_146ca06dc(void)

undefined4
FUN_146ca06dc(longlong param_1,double *param_2,double *param_3,longlong *param_4,int param_5,
             undefined4 param_6,undefined1 param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  int *piVar13;
  double *pdVar14;
  double *pdVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong *plVar20;
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
  undefined1 auStack_338 [32];
  undefined4 local_318;
  longlong *local_308;
  double *pdStack_300;
  longlong *local_2f8;
  undefined4 *local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  int *local_2d8;
  undefined1 *local_2d0;
  longlong *local_2c8;
  undefined1 *local_2c0;
  longlong **local_2b8;
  double local_2b0 [4];
  double local_290;
  double local_288;
  undefined1 local_279;
  int local_278 [6];
  int aiStack_260 [3];
  int aiStack_254 [3];
  double local_248 [6];
  double local_218 [10];
  longlong local_1c8 [7];
  undefined8 uStack_190;
  longlong local_188;
  undefined8 uStack_180;
  longlong local_178 [7];
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_128 [7];
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_279 = param_7;
  if (param_5 == -1) {
    local_318 = param_6;
    FUN_146ca0ddc(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_338);
  }
  local_140 = 0;
  uStack_138 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_1c8[6] = 0;
  uStack_190 = 0;
  local_1c8[4] = 0;
  local_1c8[5] = 0;
  local_1c8[2] = 0;
  local_1c8[3] = 0;
  plVar18 = (longlong *)*param_2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  local_2b0[3] = (dVar3 - (double)plVar18) * 0.5 + (double)plVar18;
  local_290 = (dVar4 - dVar1) * 0.5 + dVar1;
  local_288 = (dVar5 - dVar2) * 0.5 + dVar2;
  local_1c8[0] = -0x10000000000001;
  local_1c8[1] = 0xffefffffffffffff;
  local_218[8] = 1.79769313486232e+308;
  local_218[9] = -1.79769313486232e+308;
  local_218[6] = 1.79769313486232e+308;
  local_218[7] = 1.79769313486232e+308;
  local_218[4] = -1.79769313486232e+308;
  local_218[5] = -1.79769313486232e+308;
  local_218[2] = 1.79769313486232e+308;
  local_218[3] = -1.79769313486232e+308;
  local_218[0] = 1.79769313486232e+308;
  local_218[1] = 1.79769313486232e+308;
  piVar13 = local_278 + 3;
  lVar16 = 0;
  do {
    lVar17 = -3;
    do {
      piVar13[lVar17] = 0;
      piVar13[lVar17 + 3] = 0;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0);
    lVar16 = lVar16 + 0x18;
    piVar13 = piVar13 + 6;
  } while (lVar16 != 0x30);
  lVar16 = (longlong)param_5;
  plVar20 = (longlong *)local_2b0[lVar16 + 3];
  pdVar14 = local_248;
  pdVar15 = local_248 + 6;
  bVar11 = true;
  do {
    bVar9 = bVar11;
    local_308 = plVar18;
    pdStack_300 = (double *)dVar1;
    local_2f8 = (longlong *)dVar2;
    local_2b0[0] = dVar3;
    local_2b0[1] = dVar4;
    local_2b0[2] = dVar5;
    if (bVar9) {
      local_2b0[lVar16] = (double)plVar20;
      uVar23 = SUB84(local_2b0[2],0);
      uVar24 = (undefined4)((ulonglong)local_2b0[2] >> 0x20);
      uVar21 = SUB84(local_2b0[0],0);
      uVar22 = (undefined4)((ulonglong)local_2b0[0] >> 0x20);
      uVar25 = SUB84(local_2b0[1],0);
      uVar26 = (undefined4)((ulonglong)local_2b0[1] >> 0x20);
      uVar30 = (undefined4)((ulonglong)plVar18 >> 0x20);
      uVar31 = SUB84(dVar1,0);
      uVar32 = (undefined4)((ulonglong)dVar1 >> 0x20);
      uVar27 = SUB84(dVar2,0);
      uVar28 = (undefined4)((ulonglong)dVar2 >> 0x20);
      uVar29 = (int)plVar18;
    }
    else {
      (&local_308)[lVar16] = plVar20;
      uVar27 = SUB84(local_2f8,0);
      uVar28 = (undefined4)((ulonglong)local_2f8 >> 0x20);
      uVar29 = SUB84(local_308,0);
      uVar30 = (undefined4)((ulonglong)local_308 >> 0x20);
      uVar31 = SUB84(pdStack_300,0);
      uVar32 = (undefined4)((ulonglong)pdStack_300 >> 0x20);
      uVar21 = SUB84(dVar3,0);
      uVar22 = (undefined4)((ulonglong)dVar3 >> 0x20);
      uVar25 = SUB84(dVar4,0);
      uVar26 = (undefined4)((ulonglong)dVar4 >> 0x20);
      uVar23 = SUB84(dVar5,0);
      uVar24 = (undefined4)((ulonglong)dVar5 >> 0x20);
    }
    pdVar15[2] = (double)local_2f8;
    *pdVar15 = (double)local_308;
    pdVar15[1] = (double)pdStack_300;
    pdVar15[3] = local_2b0[0];
    pdVar15[4] = local_2b0[1];
    pdVar15[5] = local_2b0[2];
    *pdVar14 = ((double)CONCAT44(uVar22,uVar21) + (double)CONCAT44(uVar30,uVar29)) * 0.5;
    pdVar14[1] = ((double)CONCAT44(uVar26,uVar25) + (double)CONCAT44(uVar32,uVar31)) * 0.5;
    pdVar14[2] = ((double)CONCAT44(uVar24,uVar23) + (double)CONCAT44(uVar28,uVar27)) * 0.5;
    pdVar14 = local_248 + 3;
    pdVar15 = local_248 + 0xc;
    bVar11 = false;
  } while (bVar9);
  if (0 < (int)param_4[1]) {
    lVar17 = 0;
    do {
      uVar6 = uStack_190;
      lVar8 = *param_4;
      if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
        uVar7 = *(uint *)(lVar8 + lVar17 * 4);
        lVar10 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar10 = param_1 + 0x60;
        }
        iVar12 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & uVar7) * 4);
        if (iVar12 != -1) {
          do {
            lVar10 = *(longlong *)(param_1 + 0x28) + (longlong)iVar12 * 0x40;
            if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12 * 0x40) == uVar7)
            goto LAB_146ca0a64;
            iVar12 = *(int *)(lVar10 + 0x38);
          } while (iVar12 != -1);
        }
      }
      lVar10 = 0;
LAB_146ca0a64:
      pdVar14 = (double *)(lVar10 + 8 + lVar16 * 8);
      dVar1 = *(double *)(lVar10 + 0x20 + lVar16 * 8);
      if (*pdVar14 <= (double)plVar20 && (double)plVar20 != *pdVar14) {
        lVar19 = (longlong)(int)uStack_190;
        uVar7 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar7);
        if (uStack_190._4_4_ < uVar7) {
          FUN_1446f48e2(local_1c8 + 6,uVar6 & 0xffffffff);
        }
        *(undefined4 *)(local_1c8[6] + lVar19 * 4) = *(undefined4 *)(lVar8 + lVar17 * 4);
        lVar8 = 0;
        do {
          dVar2 = local_248[lVar8];
          bVar9 = true;
          pdVar14 = (double *)(lVar10 + 0x20 + lVar8 * 8);
          bVar11 = true;
          if (dVar2 < *pdVar14 || dVar2 == *pdVar14) {
            pdVar14 = (double *)(lVar10 + 8 + lVar8 * 8);
            bVar11 = *pdVar14 <= dVar2 && dVar2 != *pdVar14;
          }
          local_278[lVar8] = local_278[lVar8] + (uint)bVar11;
          if (*(double *)(lVar10 + 8 + lVar8 * 8) <= dVar2) {
            bVar9 = dVar2 < *(double *)(lVar10 + 0x20 + lVar8 * 8);
          }
          local_278[lVar8 + 3] = local_278[lVar8 + 3] + (uint)bVar9;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
      }
      uVar6 = uStack_180;
      if ((double)plVar20 <= dVar1) {
        lVar8 = *param_4;
        lVar19 = (longlong)(int)uStack_180;
        uVar7 = (int)uStack_180 + 1;
        uStack_180 = CONCAT44(uStack_180._4_4_,uVar7);
        if (uStack_180._4_4_ < uVar7) {
          FUN_1446f48e2(&local_188,uVar6 & 0xffffffff);
        }
        *(undefined4 *)(local_188 + lVar19 * 4) = *(undefined4 *)(lVar8 + lVar17 * 4);
        lVar8 = 0;
        do {
          dVar1 = local_248[lVar8 + 3];
          bVar9 = true;
          pdVar14 = (double *)(lVar10 + 0x20 + lVar8 * 8);
          bVar11 = true;
          if (dVar1 < *pdVar14 || dVar1 == *pdVar14) {
            pdVar14 = (double *)(lVar10 + 8 + lVar8 * 8);
            bVar11 = *pdVar14 <= dVar1 && dVar1 != *pdVar14;
          }
          local_278[lVar8 + 6] = local_278[lVar8 + 6] + (uint)bVar11;
          if (*(double *)(lVar10 + 8 + lVar8 * 8) <= dVar1) {
            bVar9 = dVar1 < *(double *)(lVar10 + 0x20 + lVar8 * 8);
          }
          local_278[lVar8 + 9] = local_278[lVar8 + 9] + (uint)bVar9;
          lVar8 = lVar8 + 1;
        } while (lVar8 != 3);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < (int)param_4[1]);
  }
  plVar18 = local_178;
  local_2b8 = &local_308;
  pdStack_300 = local_248 + 6;
  local_2f8 = local_1c8 + 6;
  local_2f0 = &param_6;
  local_2d8 = local_278;
  local_2d0 = &local_279;
  plVar20 = local_1c8 + 2;
  local_2c0 = &LAB_146cb31d0;
  local_308 = plVar18;
  local_2e8 = param_1;
  local_2e0 = param_4;
  local_2c8 = plVar20;
  FUN_1400bd65e(2,&local_2c0,0);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  bVar11 = true;
  do {
    bVar9 = bVar11;
    if ((int)plVar18[8] == 0) {
      iVar12 = *(int *)(param_1 + 0xa8);
      *(int *)(plVar18 + 9) = iVar12;
      *(uint *)(param_1 + 0xa8) = iVar12 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar12 + 1U) {
        FUN_140bfc2d4((longlong *)(param_1 + 0xa0),iVar12);
      }
      lVar16 = *(longlong *)(param_1 + 0xa0);
      lVar17 = (longlong)iVar12 * 0x10;
      *(undefined8 *)(lVar16 + lVar17) = 0;
      *(longlong *)(lVar16 + lVar17) = *plVar20;
      *plVar20 = 0;
      *(int *)(lVar16 + 8 + lVar17) = (int)plVar20[1];
      *(undefined4 *)(lVar16 + 0xc + lVar17) = *(undefined4 *)((longlong)plVar20 + 0xc);
      plVar20[1] = 0;
    }
    plVar18 = local_128;
    plVar20 = local_1c8 + 4;
    bVar11 = false;
  } while (bVar9);
  uVar29 = *(undefined4 *)(param_1 + 0x98);
  FUN_146c9fc66(param_1 + 0x90,local_178);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  lVar16 = 0x20;
  do {
    if (*(longlong *)((longlong)local_1c8 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar16 = lVar16 + -0x10;
  } while (lVar16 != 0);
  lVar16 = 0x20;
  do {
    if (*(longlong *)((longlong)local_1c8 + lVar16 + 0x20) != 0) {
      FUN_1400020a8();
    }
    lVar16 = lVar16 + -0x10;
  } while (lVar16 != 0);
  lVar16 = 0x88;
  do {
    if (*(longlong *)((longlong)local_178 + lVar16) != 0) {
      FUN_1400020a8();
    }
    lVar16 = lVar16 + -0x50;
  } while (lVar16 != -0x18);
  if ((local_d0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar29;
}



// FUNCTION 146ca0ddc FUN_146ca0ddc body=1788 status=ok
// SIG undefined FUN_146ca0ddc(void)

undefined4 FUN_146ca0ddc(longlong param_1,double *param_2,double *param_3,longlong *param_4)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_1f8 [32];
  longlong *local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  double *local_1c0;
  double *local_1b8;
  longlong *local_1b0;
  longlong **local_1a8;
  undefined1 *local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong *local_188;
  undefined1 *local_180;
  double **local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double dStack_150;
  double local_148;
  double local_140;
  double dStack_138;
  double local_130;
  longlong local_128;
  ulonglong uStack_120;
  longlong *local_118;
  ulonglong uStack_110;
  longlong local_108;
  ulonglong uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (longlong *)0x0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  FUN_146c9fcb2();
  FUN_140bfc200(&local_118,8,1);
  FUN_140bfc200(&local_128,8,1);
  local_148 = param_2[2];
  local_158 = *param_2;
  dStack_150 = param_2[1];
  local_140 = *param_3;
  dStack_138 = param_3[1];
  local_130 = param_3[2];
  dVar13 = (local_130 - local_148) * 0.5 + local_148;
  dVar15 = (dStack_138 - dStack_150) * 0.5 + dStack_150;
  dVar14 = (local_140 - local_158) * 0.5 + local_158;
  local_170 = dVar14;
  local_168 = dVar15;
  local_160 = dVar13;
  if (0 < (int)param_4[1]) {
    local_1d0 = param_1 + 0x60;
    lVar18 = 0;
    local_1d8 = param_4;
    local_1c8 = param_1;
    do {
      plVar1 = local_118;
      lVar20 = *param_4;
      if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
        uVar6 = *(uint *)(lVar20 + lVar18 * 4);
        lVar17 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar17 = local_1d0;
        }
        iVar16 = *(int *)(lVar17 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & uVar6) * 4);
        if (iVar16 != -1) {
          do {
            lVar17 = *(longlong *)(param_1 + 0x28) + (longlong)iVar16 * 0x40;
            if (*(uint *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar16 * 0x40) == uVar6)
            goto LAB_146ca0f9a;
            iVar16 = *(int *)(lVar17 + 0x38);
          } while (iVar16 != -1);
        }
      }
      lVar17 = 0;
LAB_146ca0f9a:
      dVar2 = *(double *)(lVar17 + 0x18);
      dVar3 = *(double *)(lVar17 + 0x20);
      dVar4 = *(double *)(lVar17 + 0x28);
      dVar5 = *(double *)(lVar17 + 0x30);
      bVar9 = *(double *)(lVar17 + 8) < dVar14;
      bVar10 = *(double *)(lVar17 + 0x10) < dVar15;
      if ((dVar2 < dVar13) && (bVar10 && bVar9)) {
        iVar16 = (int)local_118[1];
        *(uint *)(local_118 + 1) = iVar16 + 1U;
        if (*(uint *)((longlong)local_118 + 0xc) < iVar16 + 1U) {
          FUN_1446f48e2(local_118,iVar16);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar16 * 4) = *(undefined4 *)(lVar20 + lVar18 * 4);
      }
      bVar11 = dVar14 <= dVar3;
      if ((dVar2 < dVar13) && (bVar10 && bVar11)) {
        plVar1 = local_118 + 2;
        lVar20 = *param_4;
        iVar16 = (int)local_118[3];
        *(uint *)(local_118 + 3) = iVar16 + 1U;
        if (*(uint *)((longlong)local_118 + 0x1c) < iVar16 + 1U) {
          FUN_1446f48e2(plVar1,iVar16);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar16 * 4) = *(undefined4 *)(lVar20 + lVar18 * 4);
      }
      bVar12 = dVar15 <= dVar4;
      if ((dVar2 < dVar13) && (bVar9 && bVar12)) {
        plVar1 = local_118 + 4;
        lVar20 = *param_4;
        iVar16 = (int)local_118[5];
        *(uint *)(local_118 + 5) = iVar16 + 1U;
        if (*(uint *)((longlong)local_118 + 0x2c) < iVar16 + 1U) {
          FUN_1446f48e2(plVar1,iVar16);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar16 * 4) = *(undefined4 *)(lVar20 + lVar18 * 4);
      }
      if ((dVar2 < dVar13) && (bVar11 && bVar12)) {
        plVar1 = local_118 + 6;
        lVar20 = *param_4;
        iVar16 = (int)local_118[7];
        *(uint *)(local_118 + 7) = iVar16 + 1U;
        if (*(uint *)((longlong)local_118 + 0x3c) < iVar16 + 1U) {
          FUN_1446f48e2(plVar1,iVar16);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar16 * 4) = *(undefined4 *)(lVar20 + lVar18 * 4);
        param_4 = local_1d8;
      }
      if ((bVar10 && bVar9) && dVar13 <= dVar5) {
        plVar1 = local_118 + 8;
        lVar20 = *param_4;
        iVar16 = (int)local_118[9];
        *(uint *)(local_118 + 9) = iVar16 + 1U;
        if (*(uint *)((longlong)local_118 + 0x4c) < iVar16 + 1U) {
          FUN_1446f48e2(plVar1,iVar16);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar16 * 4) = *(undefined4 *)(lVar20 + lVar18 * 4);
        param_4 = local_1d8;
      }
      if ((bVar10 && bVar11) && dVar13 <= dVar5) {
        plVar1 = local_118 + 10;
        lVar20 = *param_4;
        iVar16 = (int)local_118[0xb];
        *(uint *)(local_118 + 0xb) = iVar16 + 1U;
        if (*(uint *)((longlong)local_118 + 0x5c) < iVar16 + 1U) {
          FUN_1446f48e2(plVar1,iVar16);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar16 * 4) = *(undefined4 *)(lVar20 + lVar18 * 4);
        param_4 = local_1d8;
      }
      param_1 = local_1c8;
      if ((bVar9 && bVar12) && dVar13 <= dVar5) {
        plVar1 = local_118 + 0xc;
        lVar20 = *param_4;
        iVar16 = (int)local_118[0xd];
        *(uint *)(local_118 + 0xd) = iVar16 + 1U;
        if (*(uint *)((longlong)local_118 + 0x6c) < iVar16 + 1U) {
          FUN_1446f48e2(plVar1,iVar16);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar16 * 4) = *(undefined4 *)(lVar20 + lVar18 * 4);
        param_4 = local_1d8;
      }
      if ((bVar11 && bVar12) && dVar13 <= dVar5) {
        plVar1 = local_118 + 0xe;
        lVar20 = *param_4;
        iVar16 = (int)local_118[0xf];
        *(uint *)(local_118 + 0xf) = iVar16 + 1U;
        if (*(uint *)((longlong)local_118 + 0x7c) < iVar16 + 1U) {
          FUN_1446f48e2(plVar1,iVar16);
        }
        *(undefined4 *)(*plVar1 + (longlong)iVar16 * 4) = *(undefined4 *)(lVar20 + lVar18 * 4);
      }
      lVar18 = lVar18 + 1;
    } while (lVar18 < (int)param_4[1]);
  }
  local_1c0 = &local_158;
  local_178 = &local_1c0;
  local_1b8 = &local_170;
  local_1b0 = &local_108;
  local_1a8 = &local_118;
  local_1a0 = &stack0x00000028;
  local_188 = &local_128;
  local_180 = &LAB_146cb3416;
  local_198 = param_1;
  local_190 = param_4;
  FUN_1400bd65e(8,&local_180,0);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  lVar20 = 0xc;
  lVar18 = 0;
  do {
    lVar17 = local_128;
    if (*(int *)(local_108 + 0x40 + lVar18) == 0) {
      iVar16 = *(int *)(param_1 + 0xa8);
      *(int *)(local_108 + 0x48 + lVar18) = iVar16;
      *(uint *)(param_1 + 0xa8) = iVar16 + 1U;
      if (*(uint *)(param_1 + 0xac) < iVar16 + 1U) {
        FUN_140bfc2d4((longlong *)(param_1 + 0xa0),iVar16);
      }
      lVar8 = *(longlong *)(param_1 + 0xa0);
      lVar19 = (longlong)iVar16 * 0x10;
      *(undefined8 *)(lVar8 + lVar19) = 0;
      *(undefined8 *)(lVar8 + lVar19) = *(undefined8 *)(lVar17 + -0xc + lVar20);
      *(undefined8 *)(lVar17 + -0xc + lVar20) = 0;
      *(undefined4 *)(lVar8 + 8 + lVar19) = *(undefined4 *)(lVar17 + -4 + lVar20);
      *(undefined4 *)(lVar8 + 0xc + lVar19) = *(undefined4 *)(lVar17 + lVar20);
      *(undefined8 *)(lVar17 + -4 + lVar20) = 0;
    }
    lVar20 = lVar20 + 0x10;
    lVar18 = lVar18 + 0x50;
  } while (lVar20 != 0x8c);
  uVar7 = *(undefined4 *)(param_1 + 0x98);
  FUN_146c9fd26(param_1 + 0x90,&local_108);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  FUN_144716727(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  FUN_144716727(local_118,uStack_110 & 0xffffffff);
  if (local_118 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_140191e42(local_108,uStack_100 & 0xffffffff);
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 146ca14da FUN_146ca14da body=144 status=ok
// SIG undefined FUN_146ca14da(void)

undefined8 * FUN_146ca14da(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_149f48690;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xc;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  return param_1;
}



// FUNCTION 146ca1570 FUN_146ca1570 body=122 status=ok
// SIG undefined FUN_146ca1570(void)

longlong FUN_146ca1570(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x18,param_2 + 0x18);
  FUN_146ca5326(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_146c9e156(param_1 + 0x90,param_2 + 0x90);
  FUN_144aa2ab0(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 146ca15ea FUN_146ca15ea body=22 status=ok
// SIG undefined FUN_146ca15ea(void)

undefined8 FUN_146ca15ea(undefined8 param_1,undefined8 param_2)

{
  FUN_146ca1600();
  return param_2;
}



// FUNCTION 146ca1600 FUN_146ca1600 body=182 status=ok
// SIG undefined FUN_146ca1600(void)

longlong * FUN_146ca1600(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  void *_Dst;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x20);
    lVar3 = (longlong)iVar1;
    _Src = *(void **)(param_1 + 0x18);
    *(int *)(param_2 + 1) = iVar1;
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    FUN_144a06ca8(param_2,iVar1,0);
    _Dst = (void *)*param_2;
  }
  else {
    FUN_146ca174c(param_1,param_2,*(undefined8 *)(param_1 + 0x90),param_3);
    uVar2 = *(uint *)(param_1 + 0x20);
    lVar3 = (longlong)(int)uVar2;
    if (lVar3 == 0) {
      return param_2;
    }
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_1446f48e2(param_2,iVar1);
    }
    _Src = *(void **)(param_1 + 0x18);
    _Dst = (void *)((longlong)iVar1 * 4 + *param_2);
  }
  memcpy(_Dst,_Src,lVar3 << 2);
  return param_2;
}



// FUNCTION 146ca16b6 FUN_146ca16b6 body=147 status=ok
// SIG undefined FUN_146ca16b6(void)

void FUN_146ca16b6(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_1403b0476(param_2,param_1 + 0x18);
  FUN_146c9e384(param_2,param_1 + 0x28);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x88),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146cb2092(param_2,param_1 + 0x90);
  FUN_146cb0c86(param_2,param_1 + 0xa0);
  return;
}



// FUNCTION 146ca174c FUN_146ca174c body=204 status=ok
// SIG undefined FUN_146ca174c(void)

longlong * FUN_146ca174c(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_146ca181a(0,param_3,param_4,param_2);
  FUN_144958a06(*param_2,(int)param_2[1]);
  uVar3 = *(uint *)(param_2 + 1);
  if (1 < (longlong)(int)uVar3) {
    lVar2 = *param_2;
    iVar4 = -uVar3;
    uVar5 = (longlong)(int)uVar3;
    do {
      if (*(int *)(lVar2 + -4 + uVar5 * 4) == *(int *)(lVar2 + -8 + uVar5 * 4)) {
        if (uVar5 != uVar3) {
          iVar6 = uVar3 + iVar4;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar2 + uVar5 * 4 + -4),
                  (void *)(lVar2 + (longlong)(int)(uVar3 - iVar6) * 4),(longlong)iVar6 << 2);
          lVar2 = *param_2;
          uVar3 = *(uint *)(param_2 + 1);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_2 + 1) = uVar3;
      }
      iVar4 = iVar4 + 1;
      bVar1 = 2 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca181a FUN_146ca181a body=352 status=ok
// SIG undefined FUN_146ca181a(void)

void FUN_146ca181a(longlong param_1,double *param_2,longlong param_3,undefined8 param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  double local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[2] = param_2[2];
  local_68[0] = *param_2;
  local_68[1] = param_2[1];
  local_68[3] = param_2[3];
  local_68[4] = param_2[4];
  local_68[5] = param_2[5];
  lVar4 = 0;
  do {
    pdVar1 = (double *)(param_3 + 0x18 + lVar4 * 8);
    if (*pdVar1 <= local_68[lVar4] && local_68[lVar4] != *pdVar1) goto LAB_146ca18cb;
    dVar2 = *(double *)(param_3 + lVar4 * 8);
    if (local_68[lVar4 + 3] <= dVar2 && dVar2 != local_68[lVar4 + 3]) goto LAB_146ca18cb;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  uVar3 = *(uint *)(param_2 + 8);
  if ((ulonglong)uVar3 == 0) {
    local_78 = (void *)0x0;
    local_70 = *(int *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)*(int *)(param_2 + 9) * 0x10);
    lVar4 = (longlong)local_70;
    _Src = *(void **)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(param_2 + 9) * 0x10);
    if (lVar4 == 0) {
      local_6c = 0;
    }
    else {
      FUN_144a06ca8(&local_78,local_70,0);
      memcpy(local_78,_Src,lVar4 << 2);
    }
    FUN_146cb3746(param_4,&local_78,param_3,param_1 + 0x28);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      FUN_146ca181a(param_1,(longlong)*(int *)((longlong)param_2[7] + uVar5 * 4) * 0x50 +
                            *(longlong *)(param_1 + 0x90),param_3,param_4);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
LAB_146ca18cb:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca197c FUN_146ca197c body=144 status=ok
// SIG undefined FUN_146ca197c(void)

undefined8 * FUN_146ca197c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_149f48740;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0xc;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  return param_1;
}



// FUNCTION 146ca1a12 FUN_146ca1a12 body=122 status=ok
// SIG undefined FUN_146ca1a12(void)

longlong FUN_146ca1a12(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x18,param_2 + 0x18);
  FUN_146ca5326(param_1 + 0x28,param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_146c9e156(param_1 + 0x90,param_2 + 0x90);
  FUN_144aa2ab0(param_1 + 0xa0,param_2 + 0xa0);
  return param_1;
}



// FUNCTION 146ca1a8c FUN_146ca1a8c body=22 status=ok
// SIG undefined FUN_146ca1a8c(void)

undefined8 FUN_146ca1a8c(undefined8 param_1,undefined8 param_2)

{
  FUN_146ca1aa2();
  return param_2;
}



// FUNCTION 146ca1aa2 FUN_146ca1aa2 body=182 status=ok
// SIG undefined FUN_146ca1aa2(void)

longlong * FUN_146ca1aa2(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  void *_Dst;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    *param_2 = 0;
    iVar1 = *(int *)(param_1 + 0x20);
    lVar3 = (longlong)iVar1;
    _Src = *(void **)(param_1 + 0x18);
    *(int *)(param_2 + 1) = iVar1;
    if (lVar3 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      return param_2;
    }
    FUN_144a06ca8(param_2,iVar1,0);
    _Dst = (void *)*param_2;
  }
  else {
    FUN_146ca1bee(param_1,param_2,*(undefined8 *)(param_1 + 0x90),param_3);
    uVar2 = *(uint *)(param_1 + 0x20);
    lVar3 = (longlong)(int)uVar2;
    if (lVar3 == 0) {
      return param_2;
    }
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + uVar2;
    if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar1) < uVar2) {
      FUN_1446f48e2(param_2,iVar1);
    }
    _Src = *(void **)(param_1 + 0x18);
    _Dst = (void *)((longlong)iVar1 * 4 + *param_2);
  }
  memcpy(_Dst,_Src,lVar3 << 2);
  return param_2;
}



// FUNCTION 146ca1b58 FUN_146ca1b58 body=147 status=ok
// SIG undefined FUN_146ca1b58(void)

void FUN_146ca1b58(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_1403b0476(param_2,param_1 + 0x18);
  FUN_146c9e384(param_2,param_1 + 0x28);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x88),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146cb2092(param_2,param_1 + 0x90);
  FUN_146cb0c86(param_2,param_1 + 0xa0);
  return;
}



// FUNCTION 146ca1bee FUN_146ca1bee body=204 status=ok
// SIG undefined FUN_146ca1bee(void)

longlong * FUN_146ca1bee(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  undefined1 auStack_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_146ca1cbc(0,param_3,param_4,param_2);
  FUN_144958a06(*param_2,(int)param_2[1]);
  uVar3 = *(uint *)(param_2 + 1);
  if (1 < (longlong)(int)uVar3) {
    lVar2 = *param_2;
    iVar4 = -uVar3;
    uVar5 = (longlong)(int)uVar3;
    do {
      if (*(int *)(lVar2 + -4 + uVar5 * 4) == *(int *)(lVar2 + -8 + uVar5 * 4)) {
        if (uVar5 != uVar3) {
          iVar6 = uVar3 + iVar4;
          if (0 < iVar6) {
            iVar6 = 1;
          }
          memmove((void *)(lVar2 + uVar5 * 4 + -4),
                  (void *)(lVar2 + (longlong)(int)(uVar3 - iVar6) * 4),(longlong)iVar6 << 2);
          lVar2 = *param_2;
          uVar3 = *(uint *)(param_2 + 1);
        }
        uVar3 = uVar3 - 1;
        *(uint *)(param_2 + 1) = uVar3;
      }
      iVar4 = iVar4 + 1;
      bVar1 = 2 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar1);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca1cbc FUN_146ca1cbc body=352 status=ok
// SIG undefined FUN_146ca1cbc(void)

void FUN_146ca1cbc(longlong param_1,double *param_2,longlong param_3,undefined8 param_4)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_98 [32];
  void *local_78;
  int local_70;
  undefined4 local_6c;
  double local_68 [6];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68[2] = param_2[2];
  local_68[0] = *param_2;
  local_68[1] = param_2[1];
  local_68[3] = param_2[3];
  local_68[4] = param_2[4];
  local_68[5] = param_2[5];
  lVar4 = 0;
  do {
    pdVar1 = (double *)(param_3 + 0x18 + lVar4 * 8);
    if (*pdVar1 <= local_68[lVar4] && local_68[lVar4] != *pdVar1) goto LAB_146ca1d6d;
    dVar2 = *(double *)(param_3 + lVar4 * 8);
    if (local_68[lVar4 + 3] <= dVar2 && dVar2 != local_68[lVar4 + 3]) goto LAB_146ca1d6d;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  uVar3 = *(uint *)(param_2 + 8);
  if ((ulonglong)uVar3 == 0) {
    local_78 = (void *)0x0;
    local_70 = *(int *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)*(int *)(param_2 + 9) * 0x10);
    lVar4 = (longlong)local_70;
    _Src = *(void **)(*(longlong *)(param_1 + 0xa0) + (longlong)*(int *)(param_2 + 9) * 0x10);
    if (lVar4 == 0) {
      local_6c = 0;
    }
    else {
      FUN_144a06ca8(&local_78,local_70,0);
      memcpy(local_78,_Src,lVar4 << 2);
    }
    FUN_146cb41a2(param_4,&local_78,param_3,param_1 + 0x28);
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      FUN_146ca1cbc(param_1,(longlong)*(int *)((longlong)param_2[7] + uVar5 * 4) * 0x50 +
                            *(longlong *)(param_1 + 0x90),param_3,param_4);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
LAB_146ca1d6d:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca1e1e FUN_146ca1e1e body=125 status=ok
// SIG undefined FUN_146ca1e1e(void)

undefined8 * FUN_146ca1e1e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  puVar2[1] = 0;
  *(undefined2 *)(puVar2 + 3) = 0x101;
  *(undefined1 *)((longlong)puVar2 + 0x1a) = 1;
  *(undefined2 *)((longlong)puVar2 + 0x1c) = 0x101;
  *puVar2 = &PTR_FUN_149f489d0;
  puVar2[6] = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puVar2[4] = *(undefined8 *)(param_1 + 0x20);
  puVar2[5] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  puVar2[7] = *(undefined8 *)(param_1 + 0x38);
  puVar2[8] = uVar1;
  puVar2[9] = *(undefined8 *)(param_1 + 0x48);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146ca1ea0 FUN_146ca1ea0 body=1067 status=ok
// SIG undefined FUN_146ca1ea0(void)

longlong * FUN_146ca1ea0(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = *(double *)(param_1 + 0x20);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar9 = (*(double *)(param_1 + 0x48) - dVar3) * 0.5 + dVar3;
  dVar10 = (*(double *)(param_1 + 0x40) - dVar2) * 0.5 + dVar2;
  dVar11 = (*(double *)(param_1 + 0x38) - dVar1) * 0.5 + dVar1;
  dVar6 = *(double *)(param_1 + 0x48) - dVar9;
  dVar7 = *(double *)(param_1 + 0x40) - dVar10;
  dVar8 = *(double *)(param_1 + 0x38) - dVar11;
  dVar3 = dVar3 - dVar9;
  dVar2 = dVar2 - dVar10;
  dVar1 = dVar1 - dVar11;
  dVar11 = (dVar6 - dVar3) * 0.5 + dVar3;
  dVar10 = (dVar7 - dVar2) * 0.5 + dVar2;
  dVar9 = (dVar8 - dVar1) * 0.5 + dVar1;
  *param_2 = 0;
  param_2[1] = 0;
  FUN_146ca6f88(param_2,0x1a,1);
  pdVar4 = (double *)*param_2;
  *pdVar4 = dVar1;
  pdVar4[1] = dVar2;
  pdVar4[2] = dVar3;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x18) = dVar9;
  *(double *)(lVar5 + 0x20) = dVar2;
  *(double *)(lVar5 + 0x28) = dVar3;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x30) = dVar8;
  *(double *)(lVar5 + 0x38) = dVar2;
  *(double *)(lVar5 + 0x40) = dVar3;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x48) = dVar1;
  *(double *)(lVar5 + 0x50) = dVar10;
  *(double *)(lVar5 + 0x58) = dVar3;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x60) = dVar9;
  *(double *)(lVar5 + 0x68) = dVar10;
  *(double *)(lVar5 + 0x70) = dVar3;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x78) = dVar8;
  *(double *)(lVar5 + 0x80) = dVar10;
  *(double *)(lVar5 + 0x88) = dVar3;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x90) = dVar1;
  *(double *)(lVar5 + 0x98) = dVar7;
  *(double *)(lVar5 + 0xa0) = dVar3;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0xa8) = dVar9;
  *(double *)(lVar5 + 0xb0) = dVar7;
  *(double *)(lVar5 + 0xb8) = dVar3;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0xc0) = dVar8;
  *(double *)(lVar5 + 200) = dVar7;
  *(double *)(lVar5 + 0xd0) = dVar3;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0xd8) = dVar1;
  *(double *)(lVar5 + 0xe0) = dVar2;
  *(double *)(lVar5 + 0xe8) = dVar11;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0xf0) = dVar9;
  *(double *)(lVar5 + 0xf8) = dVar2;
  *(double *)(lVar5 + 0x100) = dVar11;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x108) = dVar8;
  *(double *)(lVar5 + 0x110) = dVar2;
  *(double *)(lVar5 + 0x118) = dVar11;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x120) = dVar1;
  *(double *)(lVar5 + 0x128) = dVar10;
  *(double *)(lVar5 + 0x130) = dVar11;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x138) = dVar8;
  *(double *)(lVar5 + 0x140) = dVar10;
  *(double *)(lVar5 + 0x148) = dVar11;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x150) = dVar1;
  *(double *)(lVar5 + 0x158) = dVar7;
  *(double *)(lVar5 + 0x160) = dVar11;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x168) = dVar9;
  *(double *)(lVar5 + 0x170) = dVar7;
  *(double *)(lVar5 + 0x178) = dVar11;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x180) = dVar8;
  *(double *)(lVar5 + 0x188) = dVar7;
  *(double *)(lVar5 + 400) = dVar11;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x198) = dVar1;
  *(double *)(lVar5 + 0x1a0) = dVar2;
  *(double *)(lVar5 + 0x1a8) = dVar6;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x1b0) = dVar9;
  *(double *)(lVar5 + 0x1b8) = dVar2;
  *(double *)(lVar5 + 0x1c0) = dVar6;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x1c8) = dVar8;
  *(double *)(lVar5 + 0x1d0) = dVar2;
  *(double *)(lVar5 + 0x1d8) = dVar6;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x1e0) = dVar1;
  *(double *)(lVar5 + 0x1e8) = dVar10;
  *(double *)(lVar5 + 0x1f0) = dVar6;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x1f8) = dVar9;
  *(double *)(lVar5 + 0x200) = dVar10;
  *(double *)(lVar5 + 0x208) = dVar6;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x210) = dVar8;
  *(double *)(lVar5 + 0x218) = dVar10;
  *(double *)(lVar5 + 0x220) = dVar6;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x228) = dVar1;
  *(double *)(lVar5 + 0x230) = dVar7;
  *(double *)(lVar5 + 0x238) = dVar6;
  lVar5 = *param_2;
  *(double *)(lVar5 + 0x240) = dVar9;
  *(double *)(lVar5 + 0x248) = dVar7;
  *(double *)(lVar5 + 0x250) = dVar6;
  lVar5 = *param_2;
  *(double *)(lVar5 + 600) = dVar8;
  *(double *)(lVar5 + 0x260) = dVar7;
  *(double *)(lVar5 + 0x268) = dVar6;
  return param_2;
}



// FUNCTION 146ca22cc FUN_146ca22cc body=1038 status=ok
// SIG undefined FUN_146ca22cc(void)

void FUN_146ca22cc(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_f8 [40];
  double local_d0 [6];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  dVar12 = *(double *)(param_1 + 0x48) * param_3[2];
  dVar4 = *(double *)(param_1 + 0x40) * param_3[1];
  dVar11 = *(double *)(param_1 + 0x38) * *param_3;
  dVar5 = param_3[2] * *(double *)(param_1 + 0x30);
  dVar8 = param_3[1] * *(double *)(param_1 + 0x28);
  dVar10 = *param_3 * *(double *)(param_1 + 0x20);
  dVar7 = param_2[2];
  local_d0[5] = dVar7 - dVar12;
  dVar6 = *param_2;
  dVar9 = param_2[1];
  local_d0[4] = dVar9 - dVar4;
  local_d0[3] = dVar6 - dVar11;
  local_d0[2] = dVar5 - dVar7;
  local_d0[1] = dVar8 - dVar9;
  local_d0[0] = dVar10 - dVar6;
  if (((((dVar11 < dVar6) || (dVar4 < dVar9)) || (dVar12 < dVar7)) ||
      ((dVar6 < dVar10 || (dVar9 < dVar8)))) || (dVar7 < dVar5)) {
    lVar3 = 0;
    do {
      dVar7 = local_d0[lVar3 + 3];
      if (dVar7 <= 0.0) {
        dVar7 = 0.0;
        if (0.0 < local_d0[lVar3]) {
          dVar7 = -local_d0[lVar3];
        }
      }
      param_4[lVar3] = dVar7;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    dVar7 = *param_4;
    dVar6 = param_4[1];
    dVar9 = param_4[2];
    dVar4 = dVar9 * dVar9 + dVar7 * dVar7 + dVar6 * dVar6;
    if (9.999999747378752e-05 <= dVar4) {
      dVar4 = SQRT(dVar4);
      *param_4 = dVar7 / dVar4;
      param_4[1] = dVar6 / dVar4;
      param_4[2] = dVar9 / dVar4;
      if (9.999999747378752e-05 <= dVar4) goto LAB_146ca25b8;
    }
    else {
      *param_4 = 1.0;
      param_4[1] = 0.0;
      param_4[2] = 0.0;
      dVar4 = 0.0;
    }
    lVar3 = 0;
    do {
      dVar7 = 1.0;
      if ((0.0 < param_4[lVar3]) || (dVar7 = -1.0, param_4[lVar3] < 0.0)) {
        param_4[lVar3] = dVar7;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 3);
    dVar7 = *param_4;
    dVar6 = param_4[1];
    dVar9 = param_4[2];
    dVar11 = dVar9 * dVar9 + dVar7 * dVar7 + dVar6 * dVar6;
    if (9.99999993922529e-09 < dVar11) {
      dVar11 = 1.0 / SQRT(dVar11);
      *param_4 = dVar7 * dVar11;
      param_4[1] = dVar6 * dVar11;
      param_4[2] = dVar9 * dVar11;
    }
  }
  else {
    dVar7 = local_d0[2];
    if (local_d0[2] <= local_d0[5]) {
      dVar7 = local_d0[5];
    }
    dVar6 = local_d0[1];
    if (local_d0[1] <= local_d0[4]) {
      dVar6 = local_d0[4];
    }
    dVar9 = local_d0[0];
    if (local_d0[0] <= local_d0[3]) {
      dVar9 = local_d0[3];
    }
    dVar4 = dVar9;
    if (dVar9 <= dVar6) {
      dVar4 = dVar6;
    }
    uVar2 = 2;
    if (dVar7 < dVar4) {
      uVar2 = (uint)(dVar9 <= dVar6);
    }
    dVar6 = *(double *)((longlong)local_d0 + (ulonglong)(uVar2 * 8) + 0x18);
    pdVar1 = (double *)((longlong)local_d0 + (ulonglong)(uVar2 * 8));
    if (dVar6 < *pdVar1 || dVar6 == *pdVar1) {
      if (uVar2 == 0) {
        dVar11 = 1.0;
        dVar6 = 0.0;
        dVar9 = 0.0;
      }
      else {
        if (uVar2 == 1) {
          dVar9 = 1.0;
          dVar6 = 0.0;
        }
        else {
          dVar9 = 0.0;
          dVar6 = 1.0;
        }
        dVar11 = 0.0;
      }
      dVar6 = -dVar6;
      dVar9 = -dVar9;
      dVar11 = -dVar11;
    }
    else if (uVar2 == 0) {
      dVar11 = 1.0;
      dVar6 = 0.0;
      dVar9 = 0.0;
    }
    else {
      if (uVar2 == 1) {
        dVar9 = 1.0;
        dVar6 = 0.0;
      }
      else {
        dVar9 = 0.0;
        dVar6 = 1.0;
      }
      dVar11 = 0.0;
    }
    if (dVar4 <= dVar7) {
      dVar4 = dVar7;
    }
    *param_4 = dVar11;
    param_4[1] = dVar9;
    param_4[2] = dVar6;
  }
LAB_146ca25b8:
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(dVar4);
  }
  return;
}



// FUNCTION 146ca26dc FUN_146ca26dc body=38 status=ok
// SIG undefined FUN_146ca26dc(void)

undefined8 FUN_146ca26dc(longlong param_1,undefined8 param_2)

{
  FUN_146c9a986(param_1 + 0x20);
  return param_2;
}



// FUNCTION 146ca2702 FUN_146ca2702 body=278 status=ok
// SIG undefined FUN_146ca2702(void)

undefined8 FUN_146ca2702(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_68 = *(undefined8 *)(param_1 + 0x48);
  FUN_140002266(&local_50,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x38),
                *(undefined8 *)(param_1 + 0x40));
  puVar3 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar3 = local_50;
  }
  local_68 = *(undefined8 *)(param_1 + 0x30);
  FUN_140002266(&local_60,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28));
  puVar2 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar2 = local_60;
  }
  local_68 = uVar1;
  FUN_140002266(param_2,L"Box: Min: [%s], Max: [%s], Margin: %f",puVar2,puVar3);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca281a FUN_146ca281a body=28 status=ok
// SIG undefined FUN_146ca281a(void)

undefined8 FUN_146ca281a(longlong param_1,undefined8 param_2)

{
  FUN_14004c296(param_2,*(undefined1 *)(param_1 + 0x1c));
  return param_2;
}



// FUNCTION 146ca2836 FUN_146ca2836 body=222 status=ok
// SIG undefined FUN_146ca2836(void)

void FUN_146ca2836(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004b8ea();
  uVar4 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar4,param_1 + 0x38);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (0x24 < iVar3) {
    local_24 = (float)*(double *)(param_1 + 0x10);
    puVar2 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_24);
      }
    }
    else {
      local_24 = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_1 + 0x10) = (double)local_24;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca2916 FUN_146ca2916 body=60 status=ok
// SIG undefined FUN_146ca2916(void)

void FUN_146ca2916(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1448eb174(param_1 + 0x38,0x18,0);
  uVar2 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 146ca2952 FUN_146ca2952 body=101 status=ok
// SIG undefined FUN_146ca2952(void)

longlong FUN_146ca2952(longlong param_1)

{
  undefined1 auStack_88 [40];
  undefined1 local_60 [64];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146ca29b8(local_60);
  FUN_146c9fe06(*(undefined8 *)(param_1 + 0x40),local_20);
  FUN_146ca2aec(param_1,local_60);
  FUN_140191cfe(local_60);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca29b8 FUN_146ca29b8 body=266 status=ok
// SIG undefined FUN_146ca29b8(void)

undefined8 * FUN_146ca29b8(undefined8 *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_149f48bf8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_149f48c00;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_14062dc0c(0,param_1 + 4);
  *param_1 = &PTR_FUN_149f47480;
  if (*(int *)(param_2 + 0x18) != 0) {
    iVar12 = *(int *)(param_2 + 0x18) + *(int *)(param_1 + 3);
    *(int *)(param_1 + 3) = iVar12;
    iVar3 = *(int *)(param_1 + 2);
    if ((longlong)iVar3 != 0) {
      lVar11 = param_1[1];
      lVar13 = 0;
      do {
        plVar4 = *(longlong **)(lVar11 + lVar13);
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 8))(plVar4,iVar12);
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar3 * 8 != lVar13);
    }
  }
  uVar10 = *(int *)(param_2 + 0x18) - 1;
  if (-1 < (int)uVar10) {
    lVar11 = (ulonglong)uVar10 * 0x18;
    do {
      lVar13 = *(longlong *)(param_2 + 0x28);
      lVar5 = param_1[5];
      *(undefined8 *)(lVar5 + 0x10 + lVar11) = *(undefined8 *)(lVar13 + 0x10 + lVar11);
      puVar1 = (undefined4 *)(lVar13 + lVar11);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(lVar5 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x18);
  }
  uVar9 = FUN_14001cc68(0xd8,0x10);
  FUN_14096ae90(uVar9,param_1,DAT_14c75f1f0,0,0);
  param_1[8] = uVar9;
  return param_1;
}



// FUNCTION 146ca2ac2 FUN_146ca2ac2 body=42 status=ok
// SIG undefined FUN_146ca2ac2(void)

void FUN_146ca2ac2(longlong param_1,longlong param_2)

{
  FUN_146c9fe06(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
  FUN_146ca2aec(param_1,param_2);
  return;
}



// FUNCTION 146ca2aec FUN_146ca2aec body=144 status=ok
// SIG undefined FUN_146ca2aec(void)

longlong FUN_146ca2aec(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined8 *)(param_2 + 0x30) = 0;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  iVar2 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar5 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar5);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 8))(plVar4,uVar1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  *(undefined4 *)(param_2 + 0x18) = 0;
  return param_1;
}



// FUNCTION 146ca2b7c FUN_146ca2b7c body=35 status=ok
// SIG undefined FUN_146ca2b7c(void)

void FUN_146ca2b7c(longlong param_1,undefined8 param_2)

{
  FUN_146ca2ba0();
  FUN_146c9ff5e(*(undefined8 *)(param_1 + 0x40),param_2);
  return;
}



// FUNCTION 146ca2ba0 FUN_146ca2ba0 body=207 status=ok
// SIG undefined FUN_146ca2ba0(void)

void FUN_146ca2ba0(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong *puVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar4 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar4 + 1;
  if ((uint *)puVar4[1] < puVar1) {
    local_2c = 1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    uVar7 = local_2c;
    if (1 < local_2c) {
      FUN_14572541c(param_2);
      uVar7 = local_2c;
    }
  }
  else {
    uVar7 = *(uint *)*puVar4;
    *puVar4 = (ulonglong)puVar1;
  }
  if (uVar7 != 0) {
    FUN_146cb470c(param_2,param_1 + 0x28);
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x18) = uVar2;
    iVar3 = *(int *)(param_1 + 0x10);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 8);
      lVar8 = 0;
      do {
        plVar6 = *(longlong **)(lVar5 + lVar8);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6,uVar2);
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar3 * 8 != lVar8);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ca2c70 FUN_146ca2c70 body=1210 status=ok
// SIG undefined FUN_146ca2c70(void)

void FUN_146ca2c70(longlong *param_1)

{
  float fVar1;
  undefined8 uVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong *plVar9;
  byte bVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  char cVar18;
  longlong lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  
  lVar3 = *param_1;
  plVar9 = *(longlong **)(lVar3 + 0xe0);
  if (*(byte *)((longlong)*(longlong **)(lVar3 + 0xe0) + 0xc) < 2) {
    plVar9 = (longlong *)0x0;
  }
  plVar14 = (longlong *)0x0;
  if (1 < *(byte *)((longlong)*(longlong **)(lVar3 + 0xe8) + 0xc)) {
    plVar14 = *(longlong **)(lVar3 + 0xe8);
  }
  iVar12 = *(int *)(lVar3 + 0x5b0);
  if (0 < iVar12) {
    fVar1 = *(float *)(lVar3 + 0x344);
    bVar10 = DAT_14c75efa9 ^ 1;
    lVar13 = 0x18;
    lVar17 = 0;
    do {
      lVar19 = *(longlong *)(lVar3 + 0x5a8);
      if (*(longlong *)(lVar3 + 0x5a8) == 0) {
        lVar19 = lVar3 + 0x3f8;
      }
      if ((*(byte *)(lVar19 + 0x18 + lVar13) & 1) == 0) {
        dVar20 = 0.0;
        dVar24 = 0.0;
        dVar22 = 0.0;
        dVar23 = 0.0;
        if (plVar9 != (longlong *)0x0) {
          lVar16 = (longlong)(int)plVar9[1];
          lVar15 = *(longlong *)(*plVar9 + 0x278);
          dVar23 = (double)*(float *)(lVar15 + 8 + lVar16 * 0xc);
          dVar22 = (double)*(float *)(lVar15 + 4 + lVar16 * 0xc);
          dVar24 = (double)*(float *)(lVar15 + lVar16 * 0xc);
        }
        dVar25 = 0.0;
        dVar29 = 0.0;
        if (plVar14 != (longlong *)0x0) {
          lVar16 = (longlong)(int)plVar14[1];
          lVar15 = *(longlong *)(*plVar14 + 0x278);
          dVar29 = (double)*(float *)(lVar15 + 8 + lVar16 * 0xc);
          dVar25 = (double)*(float *)(lVar15 + 4 + lVar16 * 0xc);
          dVar20 = (double)*(float *)(lVar15 + lVar16 * 0xc);
        }
        dVar26 = (double)*(float *)(lVar19 + 8 + lVar13);
        dVar28 = (double)*(float *)(lVar19 + 4 + lVar13);
        dVar5 = (double)*(float *)(lVar19 + lVar13);
        dVar6 = *(double *)(lVar3 + 0x1d0);
        dVar7 = *(double *)(lVar3 + 0x1d8);
        dVar8 = *(double *)(lVar3 + 0x1e0);
        dVar27 = *(double *)(lVar3 + 0x1e8);
        dVar34 = dVar5 * dVar8 - dVar6 * dVar26;
        dVar21 = dVar28 * dVar6 - dVar7 * dVar5;
        dVar4 = dVar26 * dVar7 - dVar8 * dVar28;
        dVar4 = dVar4 + dVar4;
        dVar34 = dVar34 + dVar34;
        dVar21 = dVar21 + dVar21;
        dVar26 = dVar21 * dVar27 + dVar26 + (dVar34 * dVar6 - dVar4 * dVar7);
        dVar27 = (dVar21 * dVar7 - dVar34 * dVar8) + dVar27 * dVar4 + dVar5;
        dVar28 = (dVar8 * dVar4 - dVar6 * dVar21) + *(double *)(lVar3 + 0x1e8) * dVar34 + dVar28;
        dVar24 = (dVar23 - dVar29) * dVar26 +
                 (dVar24 - dVar20) * dVar27 + (dVar22 - dVar25) * dVar28;
        if (dVar24 < 0.0) {
          cVar11 = plVar9 == (longlong *)0x0;
          if (plVar9 != (longlong *)0x0 && (bVar10 & 1) == 0) {
            if (param_1[1] == 0) {
              cVar11 = '\0';
            }
            else {
              cVar11 = *(char *)(param_1[1] + 0x38);
            }
          }
          cVar18 = plVar14 == (longlong *)0x0;
          if ((bVar10 & 1) == 0 && plVar14 != (longlong *)0x0) {
            if (param_1[2] == 0) {
              cVar18 = '\0';
            }
            else {
              cVar18 = *(char *)(param_1[2] + 0x38);
            }
          }
          uVar30 = 0;
          uVar31 = 0;
          uVar32 = 0;
          uVar33 = 0;
          if (cVar11 == '\0') {
            uVar2 = *(undefined8 *)(*(longlong *)(*plVar9 + 0x3c8) + (longlong)(int)plVar9[1] * 8);
            uVar32 = (undefined4)uVar2;
            uVar33 = (undefined4)((ulonglong)uVar2 >> 0x20);
          }
          if (cVar18 == '\0') {
            uVar2 = *(undefined8 *)(*(longlong *)(*plVar14 + 0x3c8) + (longlong)(int)plVar14[1] * 8)
            ;
            uVar30 = (undefined4)uVar2;
            uVar31 = (undefined4)((ulonglong)uVar2 >> 0x20);
          }
          dVar24 = dVar24 * -(double)fVar1 - dVar24;
          dVar20 = (double)CONCAT44(uVar33,uVar32) + (double)CONCAT44(uVar31,uVar30);
          dVar22 = (dVar26 * dVar24) / dVar20;
          dVar23 = (dVar28 * dVar24) / dVar20;
          dVar20 = (dVar27 * dVar24) / dVar20;
          if (0.0 <= (double)CONCAT44(uVar33,uVar32) && (double)CONCAT44(uVar33,uVar32) != 0.0) {
            lVar15 = (longlong)(int)plVar9[1];
            lVar19 = *(longlong *)(*plVar9 + 0x278);
            *(float *)(lVar19 + lVar15 * 0xc) =
                 (float)((double)CONCAT44(uVar33,uVar32) * dVar20 +
                        (double)*(float *)(lVar19 + lVar15 * 0xc));
            *(float *)(lVar19 + 4 + lVar15 * 0xc) =
                 (float)((double)CONCAT44(uVar33,uVar32) * dVar23 +
                        (double)*(float *)(lVar19 + 4 + lVar15 * 0xc));
            *(float *)(lVar19 + 8 + lVar15 * 0xc) =
                 (float)((double)CONCAT44(uVar33,uVar32) * dVar22 +
                        (double)*(float *)(lVar19 + 8 + lVar15 * 0xc));
          }
          if (0.0 <= (double)CONCAT44(uVar31,uVar30) && (double)CONCAT44(uVar31,uVar30) != 0.0) {
            lVar15 = (longlong)(int)plVar14[1];
            lVar19 = *(longlong *)(*plVar14 + 0x278);
            *(float *)(lVar19 + lVar15 * 0xc) =
                 (float)((double)*(float *)(lVar19 + lVar15 * 0xc) -
                        (double)CONCAT44(uVar31,uVar30) * dVar20);
            *(float *)(lVar19 + 4 + lVar15 * 0xc) =
                 (float)((double)*(float *)(lVar19 + 4 + lVar15 * 0xc) -
                        (double)CONCAT44(uVar31,uVar30) * dVar23);
            *(float *)(lVar19 + 8 + lVar15 * 0xc) =
                 (float)((double)*(float *)(lVar19 + 8 + lVar15 * 0xc) -
                        (double)CONCAT44(uVar31,uVar30) * dVar22);
          }
          param_1[5] = (longlong)(dVar20 + (double)param_1[5]);
          param_1[6] = (longlong)(dVar23 + (double)param_1[6]);
          param_1[7] = (longlong)(dVar22 + (double)param_1[7]);
          iVar12 = *(int *)(lVar3 + 0x5b0);
        }
      }
      lVar17 = lVar17 + 1;
      lVar13 = lVar13 + 0x6c;
    } while (lVar17 < iVar12);
  }
  return;
}



// FUNCTION 146ca39fc FUN_146ca39fc body=38 status=ok
// SIG undefined FUN_146ca39fc(void)

undefined8 FUN_146ca39fc(undefined8 param_1,int param_2)

{
  FUN_146ca5886();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ca3a22 FUN_146ca3a22 body=38 status=ok
// SIG undefined FUN_146ca3a22(void)

undefined8 FUN_146ca3a22(undefined8 param_1,int param_2)

{
  FUN_146ca5918();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ca3a48 FUN_146ca3a48 body=38 status=ok
// SIG undefined FUN_146ca3a48(void)

undefined8 FUN_146ca3a48(undefined8 param_1,int param_2)

{
  FUN_146ca59aa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ca3a6e FUN_146ca3a6e body=38 status=ok
// SIG undefined FUN_146ca3a6e(void)

undefined8 FUN_146ca3a6e(undefined8 param_1,int param_2)

{
  FUN_140191d94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ca3a94 FUN_146ca3a94 body=38 status=ok
// SIG undefined FUN_146ca3a94(void)

undefined8 FUN_146ca3a94(undefined8 param_1,int param_2)

{
  FUN_146ca5a52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ca3aba FUN_146ca3aba body=38 status=ok
// SIG undefined FUN_146ca3aba(void)

undefined8 FUN_146ca3aba(undefined8 param_1,int param_2)

{
  FUN_146ca5afa();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ca3ae0 FUN_146ca3ae0 body=23 status=ok
// SIG undefined FUN_146ca3ae0(void)

undefined8 FUN_146ca3ae0(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x28))();
  return param_2;
}



// FUNCTION 146ca3b30 FUN_146ca3b30 body=32 status=ok
// SIG undefined FUN_146ca3b30(void)

undefined8 FUN_146ca3b30(undefined8 param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"ImplicitObject - No Performance String");
  return param_2;
}



// FUNCTION 146ca3b50 FUN_146ca3b50 body=353 status=ok
// SIG undefined FUN_146ca3b50(void)

void FUN_146ca3b50(longlong *param_1,double *param_2,double *param_3,undefined8 param_4,
                  double param_5,double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_88 [32];
  double local_68;
  ulonglong local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar4 = *param_6;
  dVar1 = param_6[1];
  dVar2 = param_6[2];
  local_38 = param_2[2] / dVar2;
  local_40 = param_2[1] / dVar1;
  local_48 = *param_2 / dVar4;
  local_50 = param_3[2] * dVar2;
  local_58 = param_3[1] * dVar1;
  dVar5 = *param_3 * dVar4;
  dVar3 = SQRT(local_50 * local_50 + dVar5 * dVar5 + local_58 * local_58);
  if (2.2250738585072014e-308 < dVar3) {
    local_58 = local_58 / dVar3;
  }
  else {
    local_58 = 0.0;
  }
  local_60 = -(ulonglong)(2.2250738585072014e-308 < dVar3) & (ulonglong)(dVar5 / dVar3);
  if (2.2250738585072014e-308 < dVar3) {
    local_50 = local_50 / dVar3;
  }
  else {
    local_50 = 1.0;
  }
  if ((dVar1 <= dVar4 || dVar2 <= dVar4) && (dVar4 = dVar1, dVar2 <= dVar1)) {
    dVar4 = dVar2;
  }
  local_68 = param_5 / dVar4;
  (**(code **)(*param_1 + 0xa8))(dVar4,&local_48,&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ca3cb8 FUN_146ca3cb8 body=35 status=ok
// SIG undefined FUN_146ca3cb8(void)

bool FUN_146ca3cb8(undefined8 param_1,undefined8 param_2,double param_3)

{
  double dVar1;
  
  dVar1 = (double)FUN_146dae118();
  return dVar1 <= param_3;
}



// FUNCTION 146ca3cdc FUN_146ca3cdc body=196 status=ok
// SIG undefined FUN_146ca3cdc(void)

void FUN_146ca3cdc(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
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
  undefined8 uVar15;
  longlong lVar16;
  
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = param_3[4];
  uVar9 = param_3[5];
  uVar10 = param_3[6];
  uVar11 = param_3[7];
  uVar12 = param_3[8];
  uVar13 = param_3[9];
  uVar14 = param_3[10];
  uVar15 = param_3[0xb];
  iVar2 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
    FUN_146ca5ba2(param_2,iVar2);
  }
  lVar3 = *param_2;
  lVar16 = (longlong)iVar2 * 0x70;
  *(undefined8 *)(lVar3 + lVar16) = param_1;
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar16);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar16);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar16);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar16);
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar16);
  *puVar1 = uVar12;
  puVar1[1] = uVar13;
  puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar16);
  *puVar1 = uVar14;
  puVar1[1] = uVar15;
  return;
}



// FUNCTION 146ca3da8 FUN_146ca3da8 body=135 status=ok
// SIG undefined FUN_146ca3da8(void)

void FUN_146ca3da8(undefined8 param_1,undefined8 param_2,undefined4 param_3,int *param_4,
                  int *param_5,undefined8 *param_6)

{
  undefined1 auStack_68 [32];
  int *local_48;
  int *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_24 = *param_5;
  local_28 = *param_4;
  local_40 = &local_24;
  local_48 = &local_28;
  local_38 = param_1;
  local_2c = param_3;
  (*(code *)*param_6)(param_6[1],&local_38,param_2);
  *param_4 = *param_4 + 1;
  *param_5 = *param_5 + 1;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca3e30 FUN_146ca3e30 body=122 status=ok
// SIG undefined FUN_146ca3e30(void)

ulonglong FUN_146ca3e30(longlong *param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  double local_48 [3];
  double adStack_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (*(char *)((longlong)param_1 + 0x1a) == '\x01') {
    (**(code **)(*param_1 + 0x80))(param_1,local_48);
    lVar3 = -3;
    do {
      dVar2 = *(double *)(param_2 + 0x18 + lVar3 * 8);
      if ((adStack_30[lVar3 + 3] <= dVar2 && dVar2 != adStack_30[lVar3 + 3]) ||
         (pdVar1 = (double *)(param_2 + 0x30 + lVar3 * 8),
         *pdVar1 <= adStack_30[lVar3] && adStack_30[lVar3] != *pdVar1)) {
        uVar4 = 0;
        break;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146ca3eac FUN_146ca3eac body=38 status=ok
// SIG undefined FUN_146ca3eac(void)

undefined8 FUN_146ca3eac(undefined8 param_1,int param_2)

{
  FUN_140191cfe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ca3ed8 FUN_146ca3ed8 body=125 status=ok
// SIG undefined FUN_146ca3ed8(void)

undefined8 * FUN_146ca3ed8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  puVar6[1] = 0;
  *(undefined2 *)(puVar6 + 3) = 0x101;
  *(undefined1 *)((longlong)puVar6 + 0x1a) = 1;
  *(undefined2 *)((longlong)puVar6 + 0x1c) = 0x303;
  *puVar6 = &PTR_FUN_149f487f0;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  puVar6[4] = *(undefined8 *)(param_1 + 0x20);
  puVar6[5] = uVar1;
  puVar6[6] = uVar2;
  puVar6[7] = uVar3;
  puVar6[8] = uVar4;
  puVar6[9] = uVar5;
  puVar6[10] = *(undefined8 *)(param_1 + 0x50);
  puVar6[2] = *(undefined8 *)(param_1 + 0x10);
  *param_2 = puVar6;
  if (puVar6 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146ca3f56 FUN_146ca3f56 body=415 status=ok
// SIG undefined FUN_146ca3f56(void)

undefined8 * FUN_146ca3f56(longlong param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  puVar11 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  dVar15 = *param_3;
  dVar1 = param_3[1];
  dVar2 = param_3[2];
  dVar12 = dVar15;
  if ((dVar1 <= dVar15 || dVar2 <= dVar15) && (dVar12 = dVar1, dVar2 <= dVar1)) {
    dVar12 = dVar2;
  }
  dVar3 = *(double *)(param_1 + 0x10);
  dVar4 = *(double *)(param_1 + 0x50);
  dVar5 = *(double *)(param_1 + 0x48);
  dVar6 = *(double *)(param_1 + 0x40);
  dVar7 = *(double *)(param_1 + 0x38);
  dVar8 = *(double *)(param_1 + 0x30);
  dVar9 = *(double *)(param_1 + 0x20);
  dVar10 = *(double *)(param_1 + 0x28);
  dVar13 = dVar2 * dVar8;
  dVar16 = dVar1 * dVar10;
  dVar14 = dVar15 * dVar9;
  puVar11[1] = 0;
  *(undefined2 *)(puVar11 + 3) = 0x101;
  *(undefined1 *)((longlong)puVar11 + 0x1a) = 1;
  *(undefined2 *)((longlong)puVar11 + 0x1c) = 0x303;
  *puVar11 = &PTR_FUN_149f487f0;
  puVar11[4] = dVar14;
  puVar11[5] = dVar16;
  puVar11[6] = dVar13;
  dVar13 = (dVar5 * dVar4 + dVar8) * dVar2 - dVar13;
  dVar16 = (dVar6 * dVar4 + dVar10) * dVar1 - dVar16;
  dVar14 = (dVar4 * dVar7 + dVar9) * dVar15 - dVar14;
  dVar15 = dVar13 * dVar13 + dVar14 * dVar14 + dVar16 * dVar16;
  if (9.999999747378752e-05 <= dVar15) {
    dVar15 = SQRT(dVar15);
    dVar13 = dVar13 / dVar15;
    dVar16 = dVar16 / dVar15;
    dVar14 = dVar14 / dVar15;
  }
  else {
    dVar16 = 0.0;
    dVar14 = 1.0;
    dVar13 = 0.0;
    dVar15 = 0.0;
  }
  puVar11[7] = dVar14;
  puVar11[8] = dVar16;
  puVar11[9] = dVar13;
  puVar11[10] = dVar15;
  puVar11[2] = dVar12 * dVar3;
  *param_2 = puVar11;
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146ca40f6 FUN_146ca40f6 body=252 status=ok
// SIG undefined FUN_146ca40f6(void)

void FUN_146ca40f6(longlong *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = param_2[2] / param_3[2];
  local_30 = param_2[1] / param_3[1];
  local_38 = *param_2 / *param_3;
  dVar1 = (double)(**(code **)(*param_1 + 0x70))(local_28,&local_38,&local_50);
  local_40 = param_3[2] * local_40;
  local_48 = param_3[1] * local_48;
  local_50 = *param_3 * local_50;
  dVar2 = local_40 * local_40 + local_50 * local_50 + local_48 * local_48;
  if (9.999999747378752e-05 <= dVar2) {
    dVar2 = SQRT(dVar2);
    local_40 = local_40 / dVar2;
    local_48 = local_48 / dVar2;
    local_50 = local_50 / dVar2;
  }
  else {
    local_48 = 0.0;
    local_50 = 1.0;
    local_40 = 0.0;
    dVar2 = 0.0;
  }
  *param_4 = local_50;
  param_4[1] = local_48;
  param_4[2] = local_40;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar1 * dVar2);
}



// FUNCTION 146ca41f4 FUN_146ca41f4 body=52 status=ok
// SIG undefined FUN_146ca41f4(void)

undefined8 FUN_146ca41f4(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Capsule: Height: %f Radius: %f",*(undefined8 *)(param_1 + 0x50),
                *(undefined8 *)(param_1 + 0x10));
  return param_2;
}



// FUNCTION 146ca4228 FUN_146ca4228 body=499 status=ok
// SIG undefined FUN_146ca4228(void)

void FUN_146ca4228(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  ulonglong *puVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  FUN_14004c296(&local_60,*(undefined1 *)(param_1 + 0x1c));
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  FUN_14004b8ea(param_1,param_2);
  uVar5 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar5,param_1 + 0x38);
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,(float)*(double *)(param_1 + 0x50));
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar3 + 1;
  if ((undefined4 *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_60,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_60);
    }
  }
  else {
    local_60 = (undefined8 *)CONCAT44(local_60._4_4_,*(undefined4 *)*puVar3);
    *puVar3 = (ulonglong)puVar1;
  }
  *(double *)(param_1 + 0x50) = (double)local_60._0_4_;
  local_2c = (float)*(double *)(param_1 + 0x10);
  puVar3 = (ulonglong *)param_2[1];
  pfVar2 = (float *)*puVar3 + 1;
  if ((float *)puVar3[1] < pfVar2) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_2c);
    }
  }
  else {
    local_2c = *(float *)*puVar3;
    *puVar3 = (ulonglong)pfVar2;
  }
  *(double *)(param_1 + 0x10) = (double)local_2c;
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar4 < 0x1e) {
    local_60 = (undefined8 *)0x7fefffffffffffff;
    local_58 = 0x7fefffffffffffff;
    local_50 = 0x7fefffffffffffff;
    local_48 = 0xffefffffffffffff;
    local_40 = 0xffefffffffffffff;
    local_38 = 0xffefffffffffffff;
    FUN_140d03e72(param_2);
  }
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar4 < 0x1e) {
    local_60 = (undefined8 *)0x0;
    FUN_146ca445e(param_2,&local_60);
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)(local_60,1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca441e FUN_146ca441e body=63 status=ok
// SIG undefined FUN_146ca441e(void)

void FUN_146ca441e(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1448eb174(param_1 + 0x38,0x18,0);
  uVar2 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 146ca445e FUN_146ca445e body=169 status=ok
// SIG undefined FUN_146ca445e(void)

void FUN_146ca445e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x218))
            (*(longlong **)(param_1 + 0x90),&DAT_149e3cc18);
  iVar2 = FUN_1448332aa(*(undefined8 *)(param_1 + 0x90),&DAT_149e3cc18);
  if (4 < iVar2) {
    local_28 = (undefined8 *)*param_2;
    FUN_146ca4508(param_1);
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x28) & 1) != 0) {
      puVar1 = (undefined8 *)*param_2;
      if ((puVar1 != local_28) && (*param_2 = (longlong)local_28, puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca4508 FUN_146ca4508 body=1014 status=ok
// SIG undefined FUN_146ca4508(void)

void FUN_146ca4508(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = *(longlong **)(param_1 + 0x90);
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar10 + 0x170))(plVar10,&local_48,4);
    uVar6 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar10);
      uVar6 = (uint)local_48;
    }
  }
  else {
    uVar6 = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (uVar6 == 0) {
    *param_2 = 0;
    goto LAB_146ca46fa;
  }
  plVar10 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar10 + 5) & 1) == 0) {
    if (((*(byte *)(plVar10 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar10 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar6 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        lVar8 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x50);
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar6 >> 0x10 ^ uVar6))
                                 * 4);
        if (iVar7 != -1) {
          lVar8 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar7;
          do {
            if (*(ulonglong *)(lVar8 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146ca46e1;
            iVar11 = *(int *)(lVar8 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar10 = *(longlong **)(param_1 + 0x90);
      puVar9 = (ulonglong *)plVar10[1];
      puVar1 = (uint *)*puVar9 + 1;
      if ((uint *)puVar9[1] < puVar1) {
        if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar10,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar9;
        *puVar9 = (ulonglong)puVar1;
      }
      plVar10 = (longlong *)*param_2;
      plVar5 = (longlong *)FUN_14004c990(param_1,plVar10);
      if (plVar5 != (longlong *)0x0) {
        *param_2 = (ulonglong)plVar5;
        plVar10 = plVar5;
      }
      (**(code **)(*plVar10 + 0xf0))(plVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146ca46fa;
  }
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar10,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar7 = local_4c + 1;
    plVar10 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar10[1];
    uVar6 = iVar7 - iVar11;
    if (uVar6 != 0 && iVar11 <= iVar7) {
      *(int *)(plVar10 + 1) = iVar7;
      if ((uint)(*(int *)((longlong)plVar10 + 0xc) - iVar11) < uVar6) {
        FUN_1456bd870(plVar10);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar10),0,(ulonglong)uVar6 << 3);
      if ((int)local_4c < 0) goto LAB_146ca481a;
      plVar10 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar10[1];
    }
    if ((int)local_4c < iVar11) {
      uVar4 = *(ulonglong *)(*plVar10 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        plVar10 = (longlong *)*param_2;
        plVar5 = (longlong *)FUN_14004c990(param_1,plVar10);
        if (plVar5 != (longlong *)0x0) {
          *param_2 = (ulonglong)plVar5;
          plVar10 = plVar5;
        }
        (**(code **)(*plVar10 + 0xf0))(plVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146ca46fa;
    }
  }
LAB_146ca481a:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146ca46fa:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar7 = (int)puVar9[2], iVar7 != -1) {
LAB_146ca46e1:
    puVar9 = (ulonglong *)(lVar8 + (longlong)iVar7 * 0x18);
    if (*puVar9 == local_58) goto LAB_146ca4756;
  }
  puVar9 = (ulonglong *)0x0;
LAB_146ca4756:
  puVar3 = *(undefined4 **)plVar10[1];
  if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,puVar9 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar9 + 1) = *puVar3;
    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
  }
  goto LAB_146ca46fa;
}



// FUNCTION 146ca4900 FUN_146ca4900 body=154 status=ok
// SIG undefined FUN_146ca4900(void)

undefined8 FUN_146ca4900(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_146ca499a(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 146ca499a FUN_146ca499a body=96 status=ok
// SIG undefined FUN_146ca499a(void)

void FUN_146ca499a(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14042eb50(param_1,param_2,1);
  return;
}



// FUNCTION 146ca4a00 FUN_146ca4a00 body=109 status=ok
// SIG undefined FUN_146ca4a00(void)

undefined8 * FUN_146ca4a00(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puVar3[1] = 0;
  *(undefined2 *)(puVar3 + 3) = 0x101;
  *(undefined1 *)((longlong)puVar3 + 0x1a) = 1;
  *(undefined2 *)((longlong)puVar3 + 0x1c) = 0;
  *puVar3 = &PTR_FUN_149f48e60;
  puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar3[4] = *(undefined8 *)(param_1 + 0x20);
  puVar3[5] = uVar2;
  puVar3[2] = uVar1;
  *param_2 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146ca4a6e FUN_146ca4a6e body=189 status=ok
// SIG undefined FUN_146ca4a6e(void)

undefined8 * FUN_146ca4a6e(longlong param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 *puVar8;
  double dVar9;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar3 = param_3[2];
  dVar9 = dVar1;
  if ((dVar2 <= dVar1 || dVar3 <= dVar1) && (dVar9 = dVar2, dVar3 <= dVar2)) {
    dVar9 = dVar3;
  }
  dVar4 = *(double *)(param_1 + 0x10);
  dVar5 = *(double *)(param_1 + 0x30);
  dVar6 = *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x20);
  puVar8[1] = 0;
  *(undefined2 *)(puVar8 + 3) = 0x101;
  *(undefined1 *)((longlong)puVar8 + 0x1a) = 1;
  *(undefined2 *)((longlong)puVar8 + 0x1c) = 0;
  *puVar8 = &PTR_FUN_149f48e60;
  puVar8[4] = dVar1 * dVar7;
  puVar8[5] = dVar2 * dVar6;
  puVar8[6] = dVar5 * dVar3;
  puVar8[2] = dVar9 * dVar4;
  *param_2 = puVar8;
  if (puVar8 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 146ca4b2c FUN_146ca4b2c body=181 status=ok
// SIG undefined FUN_146ca4b2c(void)

undefined8 FUN_146ca4b2c(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  local_48 = *(undefined8 *)(param_1 + 0x30);
  FUN_140002266(&local_40,L"X=%3.3f Y=%3.3f Z=%3.3f",*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28));
  puVar2 = local_40;
  if (local_38 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"Sphere: Center:%s, Radius:%f",puVar2,uVar1);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 146ca4be2 FUN_146ca4be2 body=192 status=ok
// SIG undefined FUN_146ca4be2(void)

void FUN_146ca4be2(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [32];
  float local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_28,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  FUN_141724e7a(param_2,param_1 + 0x20);
  local_28[0] = (float)*(double *)(param_1 + 0x10);
  puVar2 = (ulonglong *)param_2[1];
  pfVar1 = (float *)*puVar2 + 1;
  if ((float *)puVar2[1] < pfVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,local_28,4);
    }
    else {
      thunk_FUN_14572512c(param_2,local_28);
    }
  }
  else {
    local_28[0] = *(float *)*puVar2;
    *puVar2 = (ulonglong)pfVar1;
  }
  *(double *)(param_1 + 0x10) = (double)local_28[0];
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca4ca4 FUN_146ca4ca4 body=170 status=ok
// SIG undefined FUN_146ca4ca4(void)

void FUN_146ca4ca4(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004b8ea();
  FUN_141724e7a(param_2,param_1 + 0x20);
  local_1c = (float)*(double *)(param_1 + 0x10);
  puVar2 = (ulonglong *)param_2[1];
  pfVar1 = (float *)*puVar2 + 1;
  if ((float *)puVar2[1] < pfVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(float *)*puVar2;
    *puVar2 = (ulonglong)pfVar1;
  }
  *(double *)(param_1 + 0x10) = (double)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca4d50 FUN_146ca4d50 body=60 status=ok
// SIG undefined FUN_146ca4d50(void)

void FUN_146ca4d50(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  FUN_144a78877(uVar1,(int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20) * 0x17 +
                      (int)*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 146ca4d8c FUN_146ca4d8c body=876 status=ok
// SIG undefined FUN_146ca4d8c(void)

double * FUN_146ca4d8c(longlong param_1,double *param_2,double *param_3,double *param_4,
                      double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar7 = param_3[2];
  dVar10 = param_4[2] - dVar7;
  dVar8 = *param_3;
  dVar1 = param_3[1];
  dVar11 = param_4[1] - dVar1;
  dVar2 = *param_4 - dVar8;
  dVar9 = dVar10 * dVar10 + dVar2 * dVar2 + dVar11 * dVar11;
  dVar3 = SQRT(dVar9);
  if (((dVar9 != 1.0) || (dVar4 = dVar10, dVar5 = dVar11, dVar6 = dVar2, NAN(dVar9))) &&
     (dVar4 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar9)) {
    dVar9 = 1.0 / dVar3;
    dVar4 = dVar10 * dVar9;
    dVar5 = dVar11 * dVar9;
    dVar6 = dVar2 * dVar9;
  }
  dVar10 = dVar7 - *(double *)(param_1 + 0x30);
  dVar11 = dVar1 - *(double *)(param_1 + 0x28);
  dVar9 = dVar8 - *(double *)(param_1 + 0x20);
  dVar2 = dVar4 * dVar10 + dVar6 * dVar9 + dVar5 * dVar11;
  param_5 = param_5 + *(double *)(param_1 + 0x10);
  dVar10 = param_5 * param_5 + (dVar2 * dVar2 - (dVar10 * dVar10 + dVar9 * dVar9 + dVar11 * dVar11))
  ;
  if (dVar10 < 0.0) {
LAB_146ca4edb:
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    return param_2;
  }
  if ((dVar10 == 0.0) && (!NAN(dVar10))) {
    if ((0.0 < dVar2) || (dVar3 < -dVar2)) goto LAB_146ca4edb;
    *param_2 = dVar8 - dVar6 * dVar2;
    param_2[1] = dVar1 - dVar5 * dVar2;
    param_2[2] = dVar7 - dVar4 * dVar2;
    goto LAB_146ca4f8f;
  }
  dVar8 = SQRT(dVar10);
  dVar7 = dVar8;
  if (dVar10 < 0.0) {
    dVar7 = sqrt(dVar10);
  }
  dVar7 = dVar7 - dVar2;
  if (dVar10 < 0.0) {
    dVar8 = sqrt(dVar10);
  }
  dVar8 = -dVar2 - dVar8;
  if ((dVar7 < 0.0) || (dVar3 < dVar7)) {
    dVar7 = dVar8;
    if (dVar8 < 0.0 || dVar3 < dVar8) goto LAB_146ca4edb;
LAB_146ca508b:
    dVar1 = dVar4 * dVar7 + param_3[2];
    dVar10 = dVar5 * dVar7 + param_3[1];
    dVar7 = dVar6 * dVar7 + *param_3;
  }
  else {
    if (dVar8 < 0.0 || dVar3 < dVar8) goto LAB_146ca508b;
    if (dVar7 < dVar8) {
      dVar8 = dVar7;
    }
    dVar1 = dVar4 * dVar8 + param_3[2];
    dVar10 = dVar5 * dVar8 + param_3[1];
    dVar7 = dVar6 * dVar8 + *param_3;
  }
  *param_2 = dVar7;
  param_2[1] = dVar10;
  param_2[2] = dVar1;
LAB_146ca4f8f:
  *(undefined1 *)(param_2 + 3) = 1;
  return param_2;
}



// FUNCTION 146ca50f8 FUN_146ca50f8 body=115 status=ok
// SIG undefined FUN_146ca50f8(void)

void FUN_146ca50f8(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    iVar2 = (int)(uVar1 / 0x24);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x24,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146ca516c FUN_146ca516c body=89 status=ok
// SIG undefined FUN_146ca516c(void)

undefined8 * FUN_146ca516c(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146ca50f8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
    }
  }
  return param_1;
}



// FUNCTION 146ca51c6 FUN_146ca51c6 body=115 status=ok
// SIG undefined FUN_146ca51c6(void)

void FUN_146ca51c6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    iVar2 = (int)(uVar1 / 0x24);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x24,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146ca523a FUN_146ca523a body=89 status=ok
// SIG undefined FUN_146ca523a(void)

undefined8 * FUN_146ca523a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_146ca51c6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
    }
  }
  return param_1;
}



// FUNCTION 146ca5294 FUN_146ca5294 body=146 status=ok
// SIG undefined FUN_146ca5294(void)

longlong * FUN_146ca5294(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 146ca5326 FUN_146ca5326 body=122 status=ok
// SIG undefined FUN_146ca5326(void)

longlong FUN_146ca5326(longlong param_1,longlong param_2)

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
    FUN_146ca53a0(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 146ca53a0 FUN_146ca53a0 body=231 status=ok
// SIG undefined FUN_146ca53a0(void)

longlong * FUN_146ca53a0(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    FUN_140191eac(param_1,(ulonglong)uVar3);
    lVar7 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar7 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar7) < uVar3) {
      FUN_1406cd6a8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2);
    if (0 < (int)uVar3) {
      lVar7 = *param_1;
      lVar5 = *param_2;
      lVar8 = 0;
      uVar9 = 0;
      do {
        plVar10 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar10 = param_2 + 2;
        }
        uVar4 = *(uint *)((longlong)plVar10 + (uVar9 >> 5 & 0x7ffffff) * 4);
        *(undefined4 *)(lVar7 + lVar8) = *(undefined4 *)(lVar5 + lVar8);
        if ((uVar4 >> ((uint)uVar9 & 0x1f) & 1) == 0) {
          *(undefined4 *)(lVar7 + 4 + lVar8) = *(undefined4 *)(lVar5 + 4 + lVar8);
        }
        else {
          *(undefined8 *)(lVar7 + 0x18 + lVar8) = *(undefined8 *)(lVar5 + 0x18 + lVar8);
          puVar1 = (undefined8 *)(lVar5 + 8 + lVar8);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)(lVar7 + 8 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar8);
          uVar6 = puVar1[1];
          puVar2 = (undefined8 *)(lVar7 + 0x20 + lVar8);
          *puVar2 = *puVar1;
          puVar2[1] = uVar6;
          *(undefined8 *)(lVar7 + 0x30 + lVar8) = *(undefined8 *)(lVar5 + 0x30 + lVar8);
          *(undefined8 *)(lVar7 + 0x38 + lVar8) = *(undefined8 *)(lVar5 + 0x38 + lVar8);
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0x40;
      } while (uVar3 != uVar9);
    }
  }
  return param_1;
}



// FUNCTION 146ca5488 FUN_146ca5488 body=93 status=ok
// SIG undefined FUN_146ca5488(void)

longlong FUN_146ca5488(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_146ca5294(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 146ca54e5 FUN_146ca54e5 body=483 status=ok
// SIG undefined FUN_146ca54e5(void)

undefined8 * FUN_146ca54e5(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = (longlong)param_3 - (longlong)param_2 >> 4;
  FUN_146ca5783(param_2,param_2 + lVar9,param_3 + -1);
  puVar4 = param_2 + lVar9;
  do {
    puVar6 = puVar4;
    if (puVar6 <= param_2) break;
    puVar4 = puVar6 + -1;
  } while (*(float *)(*(longlong *)puVar6[-1] + 0x640) == *(float *)(*(longlong *)*puVar6 + 0x640));
  puVar4 = param_2 + lVar9;
  do {
    puVar4 = puVar4 + 1;
    puVar5 = puVar4;
    puVar8 = puVar6;
    if (param_3 <= puVar4) break;
  } while (*(float *)(*(longlong *)*puVar4 + 0x640) == *(float *)(*(longlong *)*puVar6 + 0x640));
LAB_146ca5579:
  do {
    puVar2 = puVar6;
    if (puVar5 < param_3) {
      fVar1 = *(float *)(*(longlong *)*puVar5 + 0x640);
      if (fVar1 <= *(float *)(*(longlong *)*puVar6 + 0x640)) {
        if (fVar1 < *(float *)(*(longlong *)*puVar6 + 0x640)) goto joined_r0x000146ca55c1;
        if (puVar5 != puVar4) {
          uVar7 = *puVar4;
          *puVar4 = (longlong *)*puVar5;
          *puVar5 = uVar7;
        }
        puVar4 = puVar4 + 1;
      }
      puVar5 = puVar5 + 1;
      goto LAB_146ca5579;
    }
joined_r0x000146ca55c1:
    while (puVar3 = puVar8, param_2 < puVar3) {
      puVar8 = puVar3 + -1;
      fVar1 = *(float *)(*(longlong *)puVar3[-1] + 0x640);
      if (*(float *)(*(longlong *)*puVar2 + 0x640) <= fVar1) {
        if (*(float *)(*(longlong *)*puVar2 + 0x640) < fVar1) break;
        puVar6 = puVar2 + -1;
        bVar10 = puVar3 != puVar2;
        puVar2 = puVar6;
        if (bVar10) {
          uVar7 = *puVar6;
          *puVar6 = (longlong *)puVar3[-1];
          *puVar8 = uVar7;
        }
      }
    }
    if ((puVar5 == param_3) && (puVar3 == param_2)) {
      *param_1 = puVar2;
      param_1[1] = puVar4;
      return param_1;
    }
    if (puVar3 == param_2) {
      uVar7 = *puVar2;
      if (puVar4 != puVar5) {
        *puVar2 = *puVar4;
        *puVar4 = uVar7;
        uVar7 = *puVar2;
      }
      puVar4 = puVar4 + 1;
      *puVar2 = *puVar5;
      *puVar5 = uVar7;
      puVar6 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      puVar8 = param_2;
    }
    else {
      puVar8 = puVar3 + -1;
      if (puVar5 == param_3) {
        puVar6 = puVar2 + -1;
        uVar7 = puVar2[-1];
        if (puVar3 != puVar2) {
          uVar7 = *puVar8;
          *puVar8 = puVar2[-1];
          *puVar6 = uVar7;
        }
        *puVar6 = puVar4[-1];
        puVar4[-1] = uVar7;
        puVar4 = puVar4 + -1;
      }
      else {
        uVar7 = *puVar5;
        *puVar5 = *puVar8;
        *puVar8 = uVar7;
        puVar5 = puVar5 + 1;
        puVar6 = puVar2;
      }
    }
  } while( true );
}



// FUNCTION 146ca56c8 FUN_146ca56c8 body=187 status=ok
// SIG undefined FUN_146ca56c8(void)

void FUN_146ca56c8(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  float *pfVar1;
  float fVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(param_3 - 1) >> 1;
  lVar4 = param_2;
  while (lVar4 < lVar6) {
    fVar2 = *(float *)(**(longlong **)(param_1 + 8 + lVar4 * 0x10) + 0x640);
    pfVar1 = (float *)(**(longlong **)(param_1 + 0x10 + lVar4 * 0x10) + 0x640);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      lVar5 = lVar4 * 2 + 1;
    }
    else {
      lVar5 = lVar4 * 2 + 2;
    }
    *(undefined8 *)(param_1 + lVar4 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
    lVar4 = lVar5;
  }
  if (((param_3 & 1) == 0) && (lVar4 == lVar6)) {
    *(undefined8 *)(param_1 + lVar6 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar4 = param_3 - 1;
  }
  while (param_2 < lVar4) {
    lVar6 = lVar4 + -1 >> 1;
    plVar3 = *(longlong **)(param_1 + lVar6 * 8);
    pfVar1 = (float *)(*plVar3 + 0x640);
    if (*(float *)(*(longlong *)*param_4 + 0x640) < *pfVar1 ||
        *(float *)(*(longlong *)*param_4 + 0x640) == *pfVar1) break;
    *(longlong **)(param_1 + lVar4 * 8) = plVar3;
    lVar4 = lVar6;
  }
  *(undefined8 *)(param_1 + lVar4 * 8) = *param_4;
  return;
}



// FUNCTION 146ca5783 FUN_146ca5783 body=145 status=ok
// SIG undefined FUN_146ca5783(void)

void FUN_146ca5783(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_3 - param_1 >> 3;
  if (0x28 < lVar2) {
    uVar3 = lVar2 + 1;
    uVar1 = uVar3 >> 3;
    uVar3 = uVar3 & 0xfffffffffffffff8;
    FUN_146ca5814(param_1,param_1 + uVar3,param_1 + uVar1 * 0x10);
    FUN_146ca5814(param_2 - uVar3,param_2,param_2 + uVar3);
    FUN_146ca5814(param_3 + uVar1 * -0x10,param_3 - uVar3,param_3);
    param_1 = param_1 + uVar3;
    param_3 = param_3 - uVar3;
  }
  FUN_146ca5814(param_1,param_2,param_3);
  return;
}



// FUNCTION 146ca5814 FUN_146ca5814 body=113 status=ok
// SIG undefined FUN_146ca5814(void)

void FUN_146ca5814(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  
  plVar2 = (longlong *)*param_2;
  fVar3 = *(float *)(*plVar2 + 0x640);
  if (fVar3 < *(float *)(*(longlong *)*param_1 + 0x640)) {
    *param_2 = (longlong *)*param_1;
    *param_1 = plVar2;
    plVar2 = (longlong *)*param_2;
    fVar3 = *(float *)(*plVar2 + 0x640);
  }
  plVar1 = (longlong *)*param_3;
  if (*(float *)(*plVar1 + 0x640) <= fVar3 && fVar3 != *(float *)(*plVar1 + 0x640)) {
    *param_3 = plVar2;
    *param_2 = plVar1;
    fVar3 = *(float *)(*(longlong *)*param_1 + 0x640);
    if (*(float *)(*plVar1 + 0x640) <= fVar3 && fVar3 != *(float *)(*plVar1 + 0x640)) {
      *param_2 = (longlong *)*param_1;
      *param_1 = plVar1;
    }
  }
  return;
}



// FUNCTION 146ca5886 FUN_146ca5886 body=103 status=ok
// SIG undefined FUN_146ca5886(void)

void FUN_146ca5886(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_146ca58ed(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ca58ed FUN_146ca58ed body=43 status=ok
// SIG undefined FUN_146ca58ed(void)

void FUN_146ca58ed(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146ca5918 FUN_146ca5918 body=103 status=ok
// SIG undefined FUN_146ca5918(void)

void FUN_146ca5918(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_146ca597f(*(undefined8 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x90));
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ca597f FUN_146ca597f body=43 status=ok
// SIG undefined FUN_146ca597f(void)

void FUN_146ca597f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 146ca59aa FUN_146ca59aa body=167 status=ok
// SIG undefined FUN_146ca59aa(void)

void FUN_146ca59aa(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  FUN_144716727(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140191e42(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140191e74(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ca5a52 FUN_146ca5a52 body=167 status=ok
// SIG undefined FUN_146ca5a52(void)

void FUN_146ca5a52(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  FUN_144716727(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140191e42(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140191e74(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ca5afa FUN_146ca5afa body=167 status=ok
// SIG undefined FUN_146ca5afa(void)

void FUN_146ca5afa(longlong param_1)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb0));
  FUN_144716727(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  FUN_140191e42(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_140191e74(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146ca5ba2 FUN_146ca5ba2 body=143 status=ok
// SIG undefined FUN_146ca5ba2(void)

void FUN_146ca5ba2(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,0x10);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ca5c32 FUN_146ca5c32 body=42 status=ok
// SIG undefined FUN_146ca5c32(void)

undefined8 * FUN_146ca5c32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ca5cb0 FUN_146ca5cb0 body=50 status=ok
// SIG undefined FUN_146ca5cb0(void)

undefined8 FUN_146ca5cb0(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"ImplicitObject bIsConvex:%d, bDoCollide:%d, bHasBoundingBox:%d",
                *(undefined1 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x19),
                *(undefined1 *)(param_1 + 0x1a));
  return param_2;
}



// FUNCTION 146ca5ce2 FUN_146ca5ce2 body=107 status=ok
// SIG undefined FUN_146ca5ce2(void)

void FUN_146ca5ce2(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_20,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  uVar1 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar1,param_1 + 0x38);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca5d4e FUN_146ca5d4e body=50 status=ok
// SIG undefined FUN_146ca5d4e(void)

void FUN_146ca5d4e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_14004b8ea();
  uVar1 = FUN_141724e7a(param_2,param_1 + 0x20);
  FUN_141724e7a(uVar1,param_1 + 0x38);
  return;
}



// FUNCTION 146ca5d80 FUN_146ca5d80 body=60 status=ok
// SIG undefined FUN_146ca5d80(void)

void FUN_146ca5d80(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1448eb174(param_1 + 0x38,0x18,0);
  uVar2 = FUN_1448eb174(param_1 + 0x20,0x18,0);
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 146ca5dbc FUN_146ca5dbc body=38 status=ok
// SIG undefined FUN_146ca5dbc(void)

undefined8 FUN_146ca5dbc(longlong param_1,undefined8 param_2)

{
  FUN_146ca5de2(param_1 + 0x20);
  return param_2;
}



// FUNCTION 146ca5de2 FUN_146ca5de2 body=928 status=ok
// SIG undefined FUN_146ca5de2(void)

void FUN_146ca5de2(double *param_1,double *param_2,double *param_3,double *param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double local_d8;
  double local_d0;
  
  dVar1 = param_3[2];
  local_d8 = param_4[2] - dVar1;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar17 = param_4[1] - dVar3;
  local_d0 = *param_4 - dVar2;
  dVar7 = local_d8 * local_d8 + local_d0 * local_d0 + dVar17 * dVar17;
  if ((dVar7 != 1.0) || (NAN(dVar7))) {
    if (9.99999993922529e-09 <= dVar7) {
      dVar4 = 1.0 / SQRT(dVar7);
      local_d8 = local_d8 * dVar4;
      dVar17 = dVar17 * dVar4;
      local_d0 = local_d0 * dVar4;
    }
    else {
      local_d0 = DAT_14c8464e0;
      local_d8 = DAT_14c8464f0;
      dVar17 = DAT_14c8464e8;
    }
  }
  dVar4 = param_1[3];
  dVar5 = param_1[4];
  dVar6 = param_1[5];
  dVar13 = param_1[2] + dVar6 * param_5;
  dVar14 = param_1[1] + dVar5 * param_5;
  dVar16 = *param_1 + param_5 * dVar4;
  dVar8 = param_1[2] - dVar6 * param_5;
  dVar9 = param_1[1] - dVar5 * param_5;
  dVar12 = *param_1 - param_5 * dVar4;
  dVar10 = dVar8 - dVar1;
  dVar11 = dVar9 - dVar3;
  dVar18 = dVar12 - dVar2;
  dVar19 = SQRT(dVar10 * dVar10 + dVar18 * dVar18 + dVar11 * dVar11);
  dVar11 = dVar13 - dVar1;
  dVar18 = dVar14 - dVar3;
  dVar10 = dVar16 - dVar2;
  dVar10 = SQRT(dVar11 * dVar11 + dVar10 * dVar10 + dVar18 * dVar18);
  uVar15 = -(ulonglong)(dVar19 < dVar10);
  if (dVar10 <= dVar19) {
    dVar8 = dVar13;
    dVar9 = dVar14;
  }
  dVar10 = local_d8 * dVar6 + local_d0 * dVar4 + dVar17 * dVar5;
  dVar4 = (dVar8 - dVar1) * dVar6 +
          ((double)(~uVar15 & (ulonglong)dVar16 | (ulonglong)dVar12 & uVar15) - dVar2) * dVar4 +
          (dVar9 - dVar3) * dVar5;
  if ((dVar10 != 0.0) || (NAN(dVar10))) {
    dVar4 = dVar4 / dVar10;
    if ((dVar4 < 0.0) || (SQRT(dVar7) < dVar4)) goto LAB_146ca614e;
    *param_2 = dVar2 + local_d0 * dVar4;
    param_2[1] = dVar3 + dVar17 * dVar4;
    param_2[2] = dVar1 + local_d8 * dVar4;
  }
  else {
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
LAB_146ca614e:
      *(undefined8 *)((longlong)param_2 + 9) = 0;
      *(undefined8 *)((longlong)param_2 + 0x11) = 0;
      *param_2 = 0.0;
      param_2[1] = 0.0;
      return;
    }
    param_2[2] = param_4[2];
    dVar1 = param_4[1];
    *param_2 = *param_4;
    param_2[1] = dVar1;
  }
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}



// FUNCTION 146ca6182 FUN_146ca6182 body=132 status=ok
// SIG undefined FUN_146ca6182(void)

void FUN_146ca6182(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ca6208 FUN_146ca6208 body=42 status=ok
// SIG undefined FUN_146ca6208(void)

undefined8 * FUN_146ca6208(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f553e0;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146ca6236 FUN_146ca6236 body=134 status=ok
// SIG undefined FUN_146ca6236(void)

double FUN_146ca6236(longlong param_1,double *param_2,double *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x34);
  fVar2 = *(float *)(param_1 + 0x30);
  *param_3 = (double)*(float *)(param_1 + 0x2c);
  param_3[1] = (double)fVar2;
  param_3[2] = (double)fVar1;
  return (param_2[1] - (double)*(float *)(param_1 + 0x24)) * (double)*(float *)(param_1 + 0x30) +
         (*param_2 - (double)*(float *)(param_1 + 0x20)) * (double)*(float *)(param_1 + 0x2c) +
         (param_2[2] - (double)*(float *)(param_1 + 0x28)) * (double)*(float *)(param_1 + 0x34);
}



// FUNCTION 146ca62c6 FUN_146ca62c6 body=107 status=ok
// SIG undefined FUN_146ca62c6(void)

void FUN_146ca62c6(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_20,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  uVar1 = FUN_144aa3513(param_2,param_1 + 0x20);
  FUN_144aa3513(uVar1,param_1 + 0x2c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca6332 FUN_146ca6332 body=50 status=ok
// SIG undefined FUN_146ca6332(void)

void FUN_146ca6332(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_14004b8ea();
  uVar1 = FUN_144aa3513(param_2,param_1 + 0x20);
  FUN_144aa3513(uVar1,param_1 + 0x2c);
  return;
}



// FUNCTION 146ca6364 FUN_146ca6364 body=60 status=ok
// SIG undefined FUN_146ca6364(void)

void FUN_146ca6364(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_1448eb174(param_1 + 0x2c,0xc,0);
  uVar2 = FUN_1448eb174(param_1 + 0x20,0xc,0);
  FUN_144a78877(uVar2,uVar1);
  return;
}



// FUNCTION 146ca63a0 FUN_146ca63a0 body=38 status=ok
// SIG undefined FUN_146ca63a0(void)

undefined8 FUN_146ca63a0(longlong param_1,undefined8 param_2)

{
  FUN_146ca6658(param_1 + 0x20);
  return param_2;
}



// FUNCTION 146ca63c6 FUN_146ca63c6 body=658 status=ok
// SIG undefined FUN_146ca63c6(void)

undefined8
FUN_146ca63c6(float *param_1,double *param_2,double *param_3,double param_4,double param_5,
             double *param_6,double *param_7,undefined1 (*param_8) [16],undefined4 *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  *param_9 = 0xffffffff;
  *param_6 = 0.0;
  param_7[2] = 0.0;
  *param_7 = 0.0;
  param_7[1] = 0.0;
  *(undefined8 *)param_8[1] = 0;
  *(undefined8 *)*param_8 = 0;
  *(undefined8 *)(*param_8 + 8) = 0;
  fVar10 = param_1[5];
  fVar11 = param_1[3];
  fVar12 = param_1[4];
  dVar8 = (*param_2 - (double)*param_1) * (double)fVar11 +
          (param_2[1] - (double)param_1[1]) * (double)fVar12 +
          (param_2[2] - (double)param_1[2]) * (double)fVar10;
  uVar9 = 1;
  if (param_5 <= ABS(dVar8)) {
    if (0.0 <= dVar8) {
      fVar10 = -fVar10;
      fVar12 = -fVar12;
      fVar11 = -fVar11;
    }
    dVar4 = (double)fVar10;
    dVar7 = (double)fVar12;
    dVar6 = (double)fVar11;
    dVar8 = param_3[2] * dVar4 + *param_3 * dVar6 + param_3[1] * dVar7;
    if ((dVar8 < 1.0000000116860974e-07) ||
       (dVar8 = ((((double)param_1[2] - dVar4 * param_5) - param_2[2]) * dVar4 +
                (((double)*param_1 - dVar6 * param_5) - *param_2) * dVar6 +
                (((double)param_1[1] - dVar7 * param_5) - param_2[1]) * dVar7) / dVar8,
       param_4 < dVar8)) {
      uVar9 = 0;
    }
    else {
      *param_6 = dVar8;
      param_5 = param_5 + dVar8;
      dVar8 = param_3[1];
      dVar1 = param_3[2];
      dVar2 = param_2[2];
      dVar3 = param_2[1];
      *param_7 = *param_3 * param_5 + *param_2;
      param_7[1] = dVar8 * param_5 + dVar3;
      param_7[2] = param_5 * dVar1 + dVar2;
      auVar5._8_4_ = SUB84(dVar7,0);
      auVar5._0_8_ = -dVar6;
      auVar5._12_4_ = (uint)((ulonglong)dVar7 >> 0x20) ^ 0x80000000;
      *param_8 = auVar5;
      *(double *)param_8[1] = -dVar4;
    }
  }
  return uVar9;
}



// FUNCTION 146ca6658 FUN_146ca6658 body=942 status=ok
// SIG undefined FUN_146ca6658(void)

void FUN_146ca6658(float *param_1,double *param_2,double *param_3,double *param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double local_d8;
  double local_d0;
  
  dVar1 = param_3[2];
  local_d8 = param_4[2] - dVar1;
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar17 = param_4[1] - dVar3;
  local_d0 = *param_4 - dVar2;
  dVar5 = local_d8 * local_d8 + local_d0 * local_d0 + dVar17 * dVar17;
  if ((dVar5 != 1.0) || (NAN(dVar5))) {
    if (9.99999993922529e-09 <= dVar5) {
      dVar4 = 1.0 / SQRT(dVar5);
      local_d8 = local_d8 * dVar4;
      dVar17 = dVar17 * dVar4;
      local_d0 = local_d0 * dVar4;
    }
    else {
      local_d0 = DAT_14c8464e0;
      local_d8 = DAT_14c8464f0;
      dVar17 = DAT_14c8464e8;
    }
  }
  dVar4 = (double)param_1[5];
  dVar15 = (double)param_1[4];
  dVar9 = (double)param_1[3];
  dVar12 = dVar4 * param_5 + (double)param_1[2];
  dVar13 = dVar15 * param_5 + (double)param_1[1];
  dVar16 = param_5 * dVar9 + (double)*param_1;
  dVar6 = (double)param_1[2] - dVar4 * param_5;
  dVar8 = (double)param_1[1] - dVar15 * param_5;
  dVar11 = (double)*param_1 - param_5 * dVar9;
  dVar7 = dVar6 - dVar1;
  dVar10 = dVar8 - dVar3;
  dVar18 = dVar11 - dVar2;
  dVar19 = SQRT(dVar7 * dVar7 + dVar18 * dVar18 + dVar10 * dVar10);
  dVar10 = dVar12 - dVar1;
  dVar18 = dVar13 - dVar3;
  dVar7 = dVar16 - dVar2;
  dVar7 = SQRT(dVar10 * dVar10 + dVar7 * dVar7 + dVar18 * dVar18);
  uVar14 = -(ulonglong)(dVar19 < dVar7);
  if (dVar7 <= dVar19) {
    dVar6 = dVar12;
    dVar8 = dVar13;
  }
  dVar7 = local_d8 * dVar4 + local_d0 * dVar9 + dVar17 * dVar15;
  dVar4 = (dVar6 - dVar1) * dVar4 +
          ((double)(~uVar14 & (ulonglong)dVar16 | (ulonglong)dVar11 & uVar14) - dVar2) * dVar9 +
          (dVar8 - dVar3) * dVar15;
  if ((dVar7 != 0.0) || (NAN(dVar7))) {
    dVar4 = dVar4 / dVar7;
    if ((dVar4 < 0.0) || (SQRT(dVar5) < dVar4)) goto LAB_146ca69d5;
    *param_2 = dVar2 + local_d0 * dVar4;
    param_2[1] = dVar3 + dVar17 * dVar4;
    param_2[2] = dVar1 + local_d8 * dVar4;
  }
  else {
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
LAB_146ca69d5:
      *(undefined8 *)((longlong)param_2 + 9) = 0;
      *(undefined8 *)((longlong)param_2 + 0x11) = 0;
      *param_2 = 0.0;
      param_2[1] = 0.0;
      return;
    }
    param_2[2] = param_4[2];
    dVar1 = param_4[1];
    *param_2 = *param_4;
    param_2[1] = dVar1;
  }
  *(undefined1 *)(param_2 + 3) = 1;
  return;
}



// FUNCTION 146ca6a06 FUN_146ca6a06 body=805 status=ok
// SIG undefined FUN_146ca6a06(void)

void FUN_146ca6a06(longlong param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  ulonglong uVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  longlong *plVar18;
  double *pdVar19;
  double *pdVar20;
  int iVar21;
  double *pdVar22;
  double *pdVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_358 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar24 + fVar24);
    plVar18 = &local_358;
    do {
      pdVar11 = (double *)*plVar18;
      pdVar19 = (double *)plVar18[1];
      iVar21 = (int)plVar18[2];
      iVar13 = (int)((ulonglong)((longlong)pdVar19 - (longlong)pdVar11) >> 5);
      pdVar16 = pdVar19;
      pdVar22 = pdVar11;
      if (iVar21 != 0) {
LAB_146ca6ac8:
        if (8 < (int)(iVar13 + 1U)) {
          uVar14 = (ulonglong)(iVar13 + 1U >> 1);
          dVar1 = pdVar11[uVar14 * 4];
          dVar2 = (pdVar11 + uVar14 * 4)[1];
          dVar3 = pdVar11[uVar14 * 4 + 2];
          dVar4 = (pdVar11 + uVar14 * 4 + 2)[1];
          dVar5 = *pdVar11;
          dVar6 = pdVar11[1];
          dVar7 = pdVar11[3];
          pdVar11[uVar14 * 4 + 2] = pdVar11[2];
          (pdVar11 + uVar14 * 4 + 2)[1] = dVar7;
          pdVar11[uVar14 * 4] = dVar5;
          (pdVar11 + uVar14 * 4)[1] = dVar6;
          pdVar11[2] = dVar3;
          pdVar11[3] = dVar4;
          *pdVar11 = dVar1;
          pdVar11[1] = dVar2;
          pdVar15 = pdVar19 + 4;
          pdVar12 = pdVar11;
          do {
            pdVar8 = pdVar12 + 4;
            pdVar20 = pdVar12 + 4;
            do {
              pdVar12 = pdVar20;
              pdVar17 = pdVar8;
              if (pdVar19 < pdVar12) break;
              pdVar8 = pdVar17 + 4;
              pdVar20 = pdVar12 + 4;
            } while (*pdVar12 < *pdVar11 || *pdVar12 == *pdVar11);
            pdVar8 = pdVar15 + -8;
            do {
              pdVar20 = pdVar15;
              pdVar23 = pdVar8;
              pdVar15 = pdVar20 + -4;
              if (pdVar15 <= pdVar11) break;
              pdVar8 = pdVar23 + -4;
            } while (*pdVar11 < *pdVar15 || *pdVar11 == *pdVar15);
            if (pdVar15 < pdVar12) goto LAB_146ca6bb9;
            dVar1 = *pdVar12;
            dVar2 = pdVar12[1];
            dVar3 = pdVar12[2];
            dVar4 = pdVar12[3];
            dVar5 = *pdVar15;
            dVar6 = pdVar20[-3];
            dVar7 = pdVar20[-1];
            pdVar12[2] = pdVar20[-2];
            pdVar12[3] = dVar7;
            *pdVar12 = dVar5;
            pdVar12[1] = dVar6;
            pdVar20[-2] = dVar3;
            pdVar20[-1] = dVar4;
            *pdVar15 = dVar1;
            pdVar20[-3] = dVar2;
          } while( true );
        }
        if (pdVar11 < pdVar19) {
          do {
            pdVar16 = pdVar11;
            if (pdVar11 + 4 <= pdVar19) {
              uVar25 = SUB84(*pdVar11,0);
              uVar26 = (undefined4)((ulonglong)*pdVar11 >> 0x20);
              pdVar22 = pdVar11 + 4;
              do {
                dVar1 = *pdVar22;
                if ((double)CONCAT44(uVar26,uVar25) <= dVar1 &&
                    dVar1 != (double)CONCAT44(uVar26,uVar25)) {
                  pdVar16 = pdVar22;
                }
                uVar9 = SUB84(dVar1,0);
                uVar10 = (int)((ulonglong)dVar1 >> 0x20);
                if (dVar1 <= (double)CONCAT44(uVar26,uVar25)) {
                  uVar9 = uVar25;
                  uVar10 = uVar26;
                }
                uVar26 = uVar10;
                uVar25 = uVar9;
                pdVar22 = pdVar22 + 4;
              } while (pdVar22 <= pdVar19);
            }
            local_58 = *pdVar16;
            uStack_50 = pdVar16[1];
            local_48 = pdVar16[2];
            dStack_40 = pdVar16[3];
            dVar4 = local_58;
            dVar5 = uStack_50;
            dVar1 = *pdVar19;
            dVar2 = pdVar19[1];
            dVar3 = pdVar19[3];
            pdVar16[2] = pdVar19[2];
            pdVar16[3] = dVar3;
            *pdVar16 = dVar1;
            pdVar16[1] = dVar2;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            pdVar19[2] = local_48;
            pdVar19[3] = dStack_40;
            *(undefined4 *)pdVar19 = (undefined4)local_58;
            *(undefined4 *)((longlong)pdVar19 + 4) = local_58._4_4_;
            *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_50._4_4_;
            pdVar19 = pdVar19 + -4;
            local_58 = dVar4;
            uStack_50 = dVar5;
          } while (pdVar11 < pdVar19);
        }
        goto LAB_146ca6d0a;
      }
LAB_146ca6d1f:
      FUN_146ca6d2c(pdVar11);
LAB_146ca6d0a:
      plVar18 = plVar18 + -3;
    } while (&local_358 <= plVar18);
  }
  if ((local_38 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146ca6bb9:
  local_58 = *pdVar11;
  uStack_50 = pdVar11[1];
  local_48 = pdVar11[2];
  dStack_40 = pdVar11[3];
  dVar4 = local_58;
  dVar5 = uStack_50;
  dVar1 = *pdVar15;
  dVar2 = pdVar20[-3];
  dVar3 = pdVar20[-1];
  pdVar11[2] = pdVar20[-2];
  pdVar11[3] = dVar3;
  *pdVar11 = dVar1;
  pdVar11[1] = dVar2;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  pdVar20[-2] = local_48;
  pdVar20[-1] = dStack_40;
  *(undefined4 *)pdVar15 = (undefined4)local_58;
  *(undefined4 *)((longlong)pdVar20 + -0x1c) = local_58._4_4_;
  *(undefined4 *)(pdVar20 + -3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)pdVar20 + -0x14) = uStack_50._4_4_;
  iVar21 = iVar21 + -1;
  pdVar20 = pdVar20 + -8;
  local_58 = dVar4;
  uStack_50 = dVar5;
  if ((longlong)pdVar23 - (longlong)pdVar22 < (longlong)pdVar16 - (longlong)pdVar17) {
    if (pdVar12 < pdVar19) {
      *plVar18 = (longlong)pdVar12;
      plVar18[1] = (longlong)pdVar19;
      *(int *)(plVar18 + 2) = iVar21;
      plVar18 = plVar18 + 3;
    }
    pdVar17 = pdVar11;
    if (pdVar15 <= pdVar11 + 4) goto LAB_146ca6d0a;
  }
  else {
    if (pdVar11 + 4 < pdVar15) {
      *plVar18 = (longlong)pdVar11;
      plVar18[1] = (longlong)pdVar20;
      *(int *)(plVar18 + 2) = iVar21;
      plVar18 = plVar18 + 3;
    }
    pdVar11 = pdVar12;
    pdVar20 = pdVar19;
    pdVar23 = pdVar19;
    if (pdVar19 <= pdVar12) goto LAB_146ca6d0a;
  }
  iVar13 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar17) >> 5);
  pdVar19 = pdVar20;
  pdVar16 = pdVar23;
  pdVar22 = pdVar17;
  if (iVar21 == 0) goto LAB_146ca6d1f;
  goto LAB_146ca6ac8;
}



// FUNCTION 146ca6d2c FUN_146ca6d2c body=603 status=ok
// SIG undefined FUN_146ca6d2c(void)

void FUN_146ca6d2c(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar9;
joined_r0x000146ca6d60:
    do {
      iVar12 = iVar9 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar9 * 2 + 2;
        if ((iVar13 < (int)param_2) &&
           ((double)param_1[(longlong)iVar12 * 4] < (double)param_1[(longlong)iVar13 * 4] ||
            (double)param_1[(longlong)iVar12 * 4] == (double)param_1[(longlong)iVar13 * 4])) {
          iVar12 = iVar13;
        }
        if ((double)param_1[(longlong)iVar9 * 4] <= (double)param_1[(longlong)iVar12 * 4] &&
            (double)param_1[(longlong)iVar12 * 4] != (double)param_1[(longlong)iVar9 * 4]) {
          puVar15 = param_1 + (longlong)iVar9 * 4;
          puVar11 = param_1 + (longlong)iVar12 * 4;
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          uVar6 = *puVar11;
          uVar7 = puVar11[1];
          uVar8 = puVar11[3];
          puVar15[2] = puVar11[2];
          puVar15[3] = uVar8;
          *puVar15 = uVar6;
          puVar15[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)(puVar11 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          iVar9 = iVar12;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000146ca6d60;
        }
      }
      bVar16 = iVar14 != 0;
      iVar9 = iVar14 + -1;
      iVar14 = iVar9;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar10 * 4];
      uVar7 = (param_1 + uVar10 * 4)[1];
      uVar8 = (param_1 + uVar10 * 4 + 2)[1];
      param_1[2] = param_1[uVar10 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_38._0_4_ = (undefined4)uVar2;
      local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar3;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar10 * 4 + 2;
      *(undefined4 *)puVar11 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
      puVar11 = param_1 + uVar10 * 4;
      *(undefined4 *)puVar11 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
      local_38 = uVar2;
      uStack_30 = uVar3;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar9 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar13 = iVar12;
            if (((longlong)iVar9 < (longlong)uVar10) &&
               ((double)param_1[(longlong)iVar12 * 4] < (double)param_1[(longlong)iVar9 * 4] ||
                (double)param_1[(longlong)iVar12 * 4] == (double)param_1[(longlong)iVar9 * 4])) {
              iVar13 = iVar9;
            }
            if ((double)param_1[(longlong)iVar13 * 4] < (double)param_1[(longlong)iVar14 * 4] ||
                (double)param_1[(longlong)iVar13 * 4] == (double)param_1[(longlong)iVar14 * 4])
            break;
            puVar15 = param_1 + (longlong)iVar14 * 4;
            puVar11 = param_1 + (longlong)iVar13 * 4;
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[3];
            puVar15[2] = puVar11[2];
            puVar15[3] = uVar8;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
            puVar11[2] = uVar4;
            puVar11[3] = uVar5;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar9 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar11 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          puVar11 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar10;
          uVar10 = uVar1;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ca6f88 FUN_146ca6f88 body=118 status=ok
// SIG undefined FUN_146ca6f88(void)

void FUN_146ca6f88(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14026a4e8(param_1,iVar1);
    }
    FUN_144a0693a((longlong)iVar1 * 0x18 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1411223a0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146ca6ffe FUN_146ca6ffe body=805 status=ok
// SIG undefined FUN_146ca6ffe(void)

void FUN_146ca6ffe(longlong param_1,uint param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double *pdVar11;
  double *pdVar12;
  int iVar13;
  ulonglong uVar14;
  double *pdVar15;
  double *pdVar16;
  double *pdVar17;
  longlong *plVar18;
  double *pdVar19;
  double *pdVar20;
  int iVar21;
  double *pdVar22;
  double *pdVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_358 = param_1;
    fVar24 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar24 + fVar24);
    plVar18 = &local_358;
    do {
      pdVar11 = (double *)*plVar18;
      pdVar19 = (double *)plVar18[1];
      iVar21 = (int)plVar18[2];
      iVar13 = (int)((ulonglong)((longlong)pdVar19 - (longlong)pdVar11) >> 5);
      pdVar16 = pdVar19;
      pdVar22 = pdVar11;
      if (iVar21 != 0) {
LAB_146ca70c0:
        if (8 < (int)(iVar13 + 1U)) {
          uVar14 = (ulonglong)(iVar13 + 1U >> 1);
          dVar1 = pdVar11[uVar14 * 4];
          dVar2 = (pdVar11 + uVar14 * 4)[1];
          dVar3 = pdVar11[uVar14 * 4 + 2];
          dVar4 = (pdVar11 + uVar14 * 4 + 2)[1];
          dVar5 = *pdVar11;
          dVar6 = pdVar11[1];
          dVar7 = pdVar11[3];
          pdVar11[uVar14 * 4 + 2] = pdVar11[2];
          (pdVar11 + uVar14 * 4 + 2)[1] = dVar7;
          pdVar11[uVar14 * 4] = dVar5;
          (pdVar11 + uVar14 * 4)[1] = dVar6;
          pdVar11[2] = dVar3;
          pdVar11[3] = dVar4;
          *pdVar11 = dVar1;
          pdVar11[1] = dVar2;
          pdVar15 = pdVar19 + 4;
          pdVar12 = pdVar11;
          do {
            pdVar8 = pdVar12 + 4;
            pdVar20 = pdVar12 + 4;
            do {
              pdVar12 = pdVar20;
              pdVar17 = pdVar8;
              if (pdVar19 < pdVar12) break;
              pdVar8 = pdVar17 + 4;
              pdVar20 = pdVar12 + 4;
            } while (*pdVar12 < *pdVar11 || *pdVar12 == *pdVar11);
            pdVar8 = pdVar15 + -8;
            do {
              pdVar20 = pdVar15;
              pdVar23 = pdVar8;
              pdVar15 = pdVar20 + -4;
              if (pdVar15 <= pdVar11) break;
              pdVar8 = pdVar23 + -4;
            } while (*pdVar11 < *pdVar15 || *pdVar11 == *pdVar15);
            if (pdVar15 < pdVar12) goto LAB_146ca71b1;
            dVar1 = *pdVar12;
            dVar2 = pdVar12[1];
            dVar3 = pdVar12[2];
            dVar4 = pdVar12[3];
            dVar5 = *pdVar15;
            dVar6 = pdVar20[-3];
            dVar7 = pdVar20[-1];
            pdVar12[2] = pdVar20[-2];
            pdVar12[3] = dVar7;
            *pdVar12 = dVar5;
            pdVar12[1] = dVar6;
            pdVar20[-2] = dVar3;
            pdVar20[-1] = dVar4;
            *pdVar15 = dVar1;
            pdVar20[-3] = dVar2;
          } while( true );
        }
        if (pdVar11 < pdVar19) {
          do {
            pdVar16 = pdVar11;
            if (pdVar11 + 4 <= pdVar19) {
              uVar25 = SUB84(*pdVar11,0);
              uVar26 = (undefined4)((ulonglong)*pdVar11 >> 0x20);
              pdVar22 = pdVar11 + 4;
              do {
                dVar1 = *pdVar22;
                if ((double)CONCAT44(uVar26,uVar25) <= dVar1 &&
                    dVar1 != (double)CONCAT44(uVar26,uVar25)) {
                  pdVar16 = pdVar22;
                }
                uVar9 = SUB84(dVar1,0);
                uVar10 = (int)((ulonglong)dVar1 >> 0x20);
                if (dVar1 <= (double)CONCAT44(uVar26,uVar25)) {
                  uVar9 = uVar25;
                  uVar10 = uVar26;
                }
                uVar26 = uVar10;
                uVar25 = uVar9;
                pdVar22 = pdVar22 + 4;
              } while (pdVar22 <= pdVar19);
            }
            local_58 = *pdVar16;
            uStack_50 = pdVar16[1];
            local_48 = pdVar16[2];
            dStack_40 = pdVar16[3];
            dVar4 = local_58;
            dVar5 = uStack_50;
            dVar1 = *pdVar19;
            dVar2 = pdVar19[1];
            dVar3 = pdVar19[3];
            pdVar16[2] = pdVar19[2];
            pdVar16[3] = dVar3;
            *pdVar16 = dVar1;
            pdVar16[1] = dVar2;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            pdVar19[2] = local_48;
            pdVar19[3] = dStack_40;
            *(undefined4 *)pdVar19 = (undefined4)local_58;
            *(undefined4 *)((longlong)pdVar19 + 4) = local_58._4_4_;
            *(undefined4 *)(pdVar19 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)pdVar19 + 0xc) = uStack_50._4_4_;
            pdVar19 = pdVar19 + -4;
            local_58 = dVar4;
            uStack_50 = dVar5;
          } while (pdVar11 < pdVar19);
        }
        goto LAB_146ca7302;
      }
LAB_146ca7317:
      FUN_146ca7324(pdVar11);
LAB_146ca7302:
      plVar18 = plVar18 + -3;
    } while (&local_358 <= plVar18);
  }
  if ((local_38 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_146ca71b1:
  local_58 = *pdVar11;
  uStack_50 = pdVar11[1];
  local_48 = pdVar11[2];
  dStack_40 = pdVar11[3];
  dVar4 = local_58;
  dVar5 = uStack_50;
  dVar1 = *pdVar15;
  dVar2 = pdVar20[-3];
  dVar3 = pdVar20[-1];
  pdVar11[2] = pdVar20[-2];
  pdVar11[3] = dVar3;
  *pdVar11 = dVar1;
  pdVar11[1] = dVar2;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  pdVar20[-2] = local_48;
  pdVar20[-1] = dStack_40;
  *(undefined4 *)pdVar15 = (undefined4)local_58;
  *(undefined4 *)((longlong)pdVar20 + -0x1c) = local_58._4_4_;
  *(undefined4 *)(pdVar20 + -3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)pdVar20 + -0x14) = uStack_50._4_4_;
  iVar21 = iVar21 + -1;
  pdVar20 = pdVar20 + -8;
  local_58 = dVar4;
  uStack_50 = dVar5;
  if ((longlong)pdVar23 - (longlong)pdVar22 < (longlong)pdVar16 - (longlong)pdVar17) {
    if (pdVar12 < pdVar19) {
      *plVar18 = (longlong)pdVar12;
      plVar18[1] = (longlong)pdVar19;
      *(int *)(plVar18 + 2) = iVar21;
      plVar18 = plVar18 + 3;
    }
    pdVar17 = pdVar11;
    if (pdVar15 <= pdVar11 + 4) goto LAB_146ca7302;
  }
  else {
    if (pdVar11 + 4 < pdVar15) {
      *plVar18 = (longlong)pdVar11;
      plVar18[1] = (longlong)pdVar20;
      *(int *)(plVar18 + 2) = iVar21;
      plVar18 = plVar18 + 3;
    }
    pdVar11 = pdVar12;
    pdVar20 = pdVar19;
    pdVar23 = pdVar19;
    if (pdVar19 <= pdVar12) goto LAB_146ca7302;
  }
  iVar13 = (int)((ulonglong)((longlong)pdVar23 - (longlong)pdVar17) >> 5);
  pdVar19 = pdVar20;
  pdVar16 = pdVar23;
  pdVar22 = pdVar17;
  if (iVar21 == 0) goto LAB_146ca7317;
  goto LAB_146ca70c0;
}



// FUNCTION 146ca7324 FUN_146ca7324 body=603 status=ok
// SIG undefined FUN_146ca7324(void)

void FUN_146ca7324(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar9;
joined_r0x000146ca7358:
    do {
      iVar12 = iVar9 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar9 * 2 + 2;
        if ((iVar13 < (int)param_2) &&
           ((double)param_1[(longlong)iVar12 * 4] < (double)param_1[(longlong)iVar13 * 4] ||
            (double)param_1[(longlong)iVar12 * 4] == (double)param_1[(longlong)iVar13 * 4])) {
          iVar12 = iVar13;
        }
        if ((double)param_1[(longlong)iVar9 * 4] <= (double)param_1[(longlong)iVar12 * 4] &&
            (double)param_1[(longlong)iVar12 * 4] != (double)param_1[(longlong)iVar9 * 4]) {
          puVar15 = param_1 + (longlong)iVar9 * 4;
          puVar11 = param_1 + (longlong)iVar12 * 4;
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          uVar6 = *puVar11;
          uVar7 = puVar11[1];
          uVar8 = puVar11[3];
          puVar15[2] = puVar11[2];
          puVar15[3] = uVar8;
          *puVar15 = uVar6;
          puVar15[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)(puVar11 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          iVar9 = iVar12;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000146ca7358;
        }
      }
      bVar16 = iVar14 != 0;
      iVar9 = iVar14 + -1;
      iVar14 = iVar9;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar10 * 4];
      uVar7 = (param_1 + uVar10 * 4)[1];
      uVar8 = (param_1 + uVar10 * 4 + 2)[1];
      param_1[2] = param_1[uVar10 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_38._0_4_ = (undefined4)uVar2;
      local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar3;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar10 * 4 + 2;
      *(undefined4 *)puVar11 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
      puVar11 = param_1 + uVar10 * 4;
      *(undefined4 *)puVar11 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
      local_38 = uVar2;
      uStack_30 = uVar3;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar9 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar13 = iVar12;
            if (((longlong)iVar9 < (longlong)uVar10) &&
               ((double)param_1[(longlong)iVar12 * 4] < (double)param_1[(longlong)iVar9 * 4] ||
                (double)param_1[(longlong)iVar12 * 4] == (double)param_1[(longlong)iVar9 * 4])) {
              iVar13 = iVar9;
            }
            if ((double)param_1[(longlong)iVar13 * 4] < (double)param_1[(longlong)iVar14 * 4] ||
                (double)param_1[(longlong)iVar13 * 4] == (double)param_1[(longlong)iVar14 * 4])
            break;
            puVar15 = param_1 + (longlong)iVar14 * 4;
            puVar11 = param_1 + (longlong)iVar13 * 4;
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[3];
            puVar15[2] = puVar11[2];
            puVar15[3] = uVar8;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
            puVar11[2] = uVar4;
            puVar11[3] = uVar5;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar9 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar11 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          puVar11 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar10;
          uVar10 = uVar1;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146ca7580 FUN_146ca7580 body=98 status=ok
// SIG undefined FUN_146ca7580(void)

void FUN_146ca7580(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
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



// FUNCTION 146ca75e2 FUN_146ca75e2 body=109 status=ok
// SIG undefined FUN_146ca75e2(void)

void FUN_146ca75e2(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_146ca7650(param_1,iVar1,0);
        FUN_146ca76c3(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146ca7650 FUN_146ca7650 body=115 status=ok
// SIG undefined FUN_146ca7650(void)

void FUN_146ca7650(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    iVar2 = (int)(uVar1 / 0x50);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x50,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146ca76c3 FUN_146ca76c3 body=75 status=ok
// SIG undefined FUN_146ca76c3(void)

void FUN_146ca76c3(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      *(undefined8 *)(param_1 + 0x10 + lVar6) = *(undefined8 *)(param_2 + 0x10 + lVar6);
      uVar3 = ((undefined8 *)(param_2 + lVar6))[1];
      *(undefined8 *)(param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
      ((undefined8 *)(param_1 + lVar6))[1] = uVar3;
      puVar1 = (undefined8 *)(param_2 + 0x18 + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x18 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined8 *)(param_1 + 0x28 + lVar6) = *(undefined8 *)(param_2 + 0x28 + lVar6);
      puVar1 = (undefined8 *)(param_2 + 0x30 + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x3c + lVar6);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x3c + lVar6);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      lVar6 = lVar6 + 0x50;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146ca770e FUN_146ca770e body=95 status=ok
// SIG undefined FUN_146ca770e(void)

undefined8 * FUN_146ca770e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146ca58ed(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146ca7580(param_1,iVar1);
      FUN_146ca75e2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146ca776e FUN_146ca776e body=996 status=ok
// SIG undefined FUN_146ca776e(void)

void FUN_146ca776e(longlong param_1,longlong param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  undefined1 auStack_108 [32];
  longlong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  undefined1 local_b8 [4];
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e8 = param_1;
  local_d0 = param_3;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar15 = *(undefined4 **)(param_1 + 0x10);
    puVar13 = puVar15 + (longlong)*(int *)(param_1 + 0x18) * 0xe;
    do {
      lVar8 = 4;
      do {
        dVar2 = *(double *)(param_2 + -0x20 + lVar8 * 8);
        if ((*(double *)(puVar15 + lVar8 * 2) <= dVar2 && dVar2 != *(double *)(puVar15 + lVar8 * 2))
           || (pdVar1 = (double *)(param_2 + -8 + lVar8 * 8),
              *pdVar1 <= *(double *)(puVar15 + lVar8 * 2 + -6) &&
              *(double *)(puVar15 + lVar8 * 2 + -6) != *pdVar1)) goto LAB_146ca7810;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 7);
      uVar3 = *puVar15;
      plVar4 = (longlong *)*local_d0;
      iVar10 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar10 + 1U) {
        FUN_1446f48e2(plVar4,iVar10);
      }
      *(undefined4 *)(*plVar4 + (longlong)iVar10 * 4) = uVar3;
LAB_146ca7810:
      puVar15 = puVar15 + 0xe;
    } while (puVar15 != puVar13);
  }
  if ((longlong)*(int *)(local_e8 + 0xa0) != 0) {
    lVar8 = *(longlong *)(local_e8 + 0x98);
    lVar14 = (longlong)*(int *)(local_e8 + 0xa0) * 0x50 + lVar8;
    do {
      lVar9 = 0;
      do {
        dVar2 = *(double *)(param_2 + lVar9 * 8);
        pdVar1 = (double *)(lVar8 + 0x18 + lVar9 * 8);
        if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
           (dVar2 = *(double *)(lVar8 + lVar9 * 8), pdVar1 = (double *)(param_2 + 0x18 + lVar9 * 8),
           *pdVar1 <= dVar2 && dVar2 != *pdVar1)) goto LAB_146ca7895;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 3);
      uVar3 = *(undefined4 *)(lVar8 + 0x30);
      plVar4 = (longlong *)*local_d0;
      iVar10 = (int)plVar4[1];
      *(uint *)(plVar4 + 1) = iVar10 + 1U;
      if (*(uint *)((longlong)plVar4 + 0xc) < iVar10 + 1U) {
        FUN_1446f48e2(plVar4,iVar10);
      }
      *(undefined4 *)(*plVar4 + (longlong)iVar10 * 4) = uVar3;
LAB_146ca7895:
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != lVar14);
  }
  lVar8 = local_e8;
  if (*(char *)(local_e8 + 0xc0) == '\0') {
    lVar14 = local_e8 + 0x20;
    FUN_146c9c584(lVar14,&local_a4,param_2);
    FUN_146c9c584(lVar14,&local_b0,param_2 + 0x18);
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_e0 = (ulonglong)local_a4;
    if ((int)local_a4 <= local_b0) {
      iVar10 = local_b0;
      iVar6 = local_ac;
      do {
        local_d8 = (ulonglong)local_a0;
        iVar11 = local_a8;
        if ((int)local_a0 <= iVar6) {
          do {
            uVar7 = local_9c;
            if ((int)local_9c <= iVar11) {
              do {
                local_c8 = (ulonglong)uVar7;
                lVar14 = (longlong)
                         (int)((*(int *)(lVar8 + 0x7c) * (int)local_e0 + (int)local_d8) *
                               *(int *)(lVar8 + 0x80) + uVar7) * 0x10;
                lVar9 = (longlong)*(int *)(*(longlong *)(lVar8 + 0x88) + 8 + lVar14);
                if (lVar9 != 0) {
                  lVar14 = *(longlong *)(*(longlong *)(lVar8 + 0x88) + lVar14);
                  lVar9 = lVar9 * 0x50 + lVar14;
                  local_c0 = lVar9;
                  do {
                    uVar7 = *(uint *)(lVar14 + 0x30);
                    if ((int)uStack_90 != local_64) {
                      puVar12 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar12 = local_60;
                      }
                      for (iVar10 = *(int *)(puVar12 + (ulonglong)(local_50 - 1U & uVar7) * 4);
                          iVar10 != -1; iVar10 = *(int *)(local_98 + (longlong)iVar10 * 0xc + 4)) {
                        if (*(uint *)(local_98 + (longlong)iVar10 * 0xc) == uVar7)
                        goto LAB_146ca7a7c;
                      }
                    }
                    local_b4 = uVar7;
                    FUN_14079e2ee(&local_98,local_b8,&local_b4,0);
                    lVar8 = 0;
                    do {
                      dVar2 = *(double *)(param_2 + lVar8 * 8);
                      pdVar1 = (double *)(lVar14 + 0x18 + lVar8 * 8);
                      if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
                         (dVar2 = *(double *)(lVar14 + lVar8 * 8),
                         pdVar1 = (double *)(param_2 + 0x18 + lVar8 * 8),
                         *pdVar1 <= dVar2 && dVar2 != *pdVar1)) goto LAB_146ca7a7c;
                      lVar8 = lVar8 + 1;
                    } while (lVar8 != 3);
                    uVar3 = *(undefined4 *)(lVar14 + 0x30);
                    plVar4 = (longlong *)*local_d0;
                    iVar10 = (int)plVar4[1];
                    *(uint *)(plVar4 + 1) = iVar10 + 1U;
                    if (*(uint *)((longlong)plVar4 + 0xc) < iVar10 + 1U) {
                      FUN_1446f48e2(plVar4,iVar10);
                    }
                    *(undefined4 *)(*plVar4 + (longlong)iVar10 * 4) = uVar3;
                    lVar9 = local_c0;
LAB_146ca7a7c:
                    lVar14 = lVar14 + 0x50;
                    lVar8 = local_e8;
                    iVar11 = local_a8;
                  } while (lVar14 != lVar9);
                }
                uVar7 = (int)local_c8 + 1;
                iVar6 = local_ac;
              } while ((int)local_c8 < iVar11);
            }
            iVar5 = (int)local_d8;
            local_d8 = (ulonglong)(iVar5 + 1);
            iVar10 = local_b0;
          } while (iVar5 < iVar6);
        }
        iVar11 = (int)local_e0;
        local_e0 = (ulonglong)(iVar11 + 1);
      } while (iVar11 < iVar10);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140d9cca6(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146ca7b54 FUN_146ca7b54 body=96 status=ok
// SIG undefined FUN_146ca7b54(void)

void FUN_146ca7b54(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146ca7bb4 FUN_146ca7bb4 body=113 status=ok
// SIG undefined FUN_146ca7bb4(void)

void FUN_146ca7bb4(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 146ca7c26 FUN_146ca7c26 body=113 status=ok
// SIG undefined FUN_146ca7c26(void)

void FUN_146ca7c26(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 146ca7c98 FUN_146ca7c98 body=69 status=ok
// SIG undefined FUN_146ca7c98(void)

int FUN_146ca7c98(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146ca811e(param_1,iVar1);
  }
  FUN_146ca7cdd((longlong)iVar1 * 0x24 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146ca7cdd FUN_146ca7cdd body=1088 status=ok
// SIG undefined FUN_146ca7cdd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146ca7cdd(longlong param_1,uint param_2)

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
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar39 [16];
  
  auVar14 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar16 = (ulonglong)param_2 - 1;
    auVar18._8_4_ = (int)lVar16;
    auVar18._0_8_ = lVar16;
    auVar18._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    puVar15 = (undefined1 *)(param_1 + 0x20);
    uVar17 = 0;
    auVar19 = pmovsxbq(in_XMM1,0xf0e);
    auVar20 = pmovsxbq(in_XMM2,0xd0c);
    auVar21 = pmovsxbq(in_XMM3,0xb0a);
    auVar22 = pmovsxbq(in_XMM4,0x908);
    auVar23 = pmovsxbq(in_XMM5,0x706);
    auVar24 = pmovsxbq(unaff_XMM6,0x504);
    auVar25 = pmovsxbq(unaff_XMM7,0x302);
    auVar26 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar27._8_4_ = (int)uVar17;
      auVar27._0_8_ = uVar17;
      auVar27._12_4_ = (int)(uVar17 >> 0x20);
      auVar29 = auVar18 ^ auVar14;
      auVar31 = (auVar27 | auVar26) ^ auVar14;
      lVar16 = auVar29._0_8_;
      auVar32._0_8_ = -(ulonglong)(lVar16 < auVar31._0_8_);
      lVar30 = auVar29._8_8_;
      auVar32._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar39 = pshuflw(unaff_XMM14,auVar32,0xe8);
      auVar31._8_4_ = 0xffffffff;
      auVar31._0_8_ = 0xffffffffffffffff;
      auVar31._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar39 ^ auVar31,auVar39 ^ auVar31);
      if ((auVar31._0_4_ & 1) != 0) {
        *puVar15 = 0;
      }
      auVar32 = packssdw(auVar32,auVar32);
      auVar39._8_4_ = 0xffffffff;
      auVar39._0_8_ = 0xffffffffffffffff;
      auVar39._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar39,auVar32 ^ auVar39);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[1] & 1) != 0) {
        puVar15[0x24] = 0;
      }
      auVar32 = (auVar27 | auVar25) ^ auVar14;
      auVar33._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar33._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar33);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar1,auVar31 ^ auVar1);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[2] & 1) != 0) {
        puVar15[0x48] = 0;
      }
      auVar32 = pshufhw(auVar33,auVar33,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar2,auVar32 ^ auVar2);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[3] & 1) != 0) {
        puVar15[0x6c] = 0;
      }
      auVar32 = (auVar27 | auVar24) ^ auVar14;
      auVar34._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar34,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar3,auVar31 ^ auVar3);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[4] & 1) != 0) {
        puVar15[0x90] = 0;
      }
      auVar32 = packssdw(auVar34,auVar34);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar4,auVar32 ^ auVar4);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[5] & 1) != 0) {
        puVar15[0xb4] = 0;
      }
      auVar32 = (auVar27 | auVar23) ^ auVar14;
      auVar35._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar35);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar5,auVar31 ^ auVar5);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[6] & 1) != 0) {
        puVar15[0xd8] = 0;
      }
      auVar32 = pshufhw(auVar35,auVar35,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar6,auVar32 ^ auVar6);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[7] & 1) != 0) {
        puVar15[0xfc] = 0;
      }
      auVar32 = (auVar27 | auVar22) ^ auVar14;
      auVar36._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar36,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar7,auVar31 ^ auVar7);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[8] & 1) != 0) {
        puVar15[0x120] = 0;
      }
      auVar32 = packssdw(auVar36,auVar36);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar8,auVar32 ^ auVar8);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[9] & 1) != 0) {
        puVar15[0x144] = 0;
      }
      auVar32 = (auVar27 | auVar21) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar37);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar9,auVar31 ^ auVar9);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[10] & 1) != 0) {
        puVar15[0x168] = 0;
      }
      auVar32 = pshufhw(auVar37,auVar37,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar10,auVar32 ^ auVar10);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[0xb] & 1) != 0) {
        puVar15[0x18c] = 0;
      }
      auVar32 = (auVar27 | auVar20) ^ auVar14;
      auVar38._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar38,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar11,auVar31 ^ auVar11);
      unaff_XMM14 = packsswb(auVar31,auVar31);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar15[0x1b0] = 0;
      }
      auVar31 = packssdw(auVar38,auVar38);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar12,auVar31 ^ auVar12);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xd] & 1) != 0) {
        puVar15[0x1d4] = 0;
      }
      auVar31 = (auVar27 | auVar19) ^ auVar14;
      auVar28._0_8_ = -(ulonglong)(lVar16 < auVar31._0_8_);
      auVar28._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar31 = packssdw(auVar29,auVar28);
      auVar29._8_4_ = 0xffffffff;
      auVar29._0_8_ = 0xffffffffffffffff;
      auVar29._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar29,auVar31 ^ auVar29);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xe] & 1) != 0) {
        puVar15[0x1f8] = 0;
      }
      auVar31 = pshufhw(auVar28,auVar28,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar13,auVar31 ^ auVar13);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xf] & 1) != 0) {
        puVar15[0x21c] = 0;
      }
      uVar17 = uVar17 + 0x10;
      puVar15 = puVar15 + 0x240;
    } while (((ulonglong)param_2 + 0xf & 0xfffffffffffffff0) != uVar17);
  }
  return;
}



// FUNCTION 146ca811e FUN_146ca811e body=147 status=ok
// SIG undefined FUN_146ca811e(void)

void FUN_146ca811e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146ca81b2 FUN_146ca81b2 body=2726 status=ok
// SIG undefined FUN_146ca81b2(void)

ulonglong FUN_146ca81b2(longlong param_1,double *param_2,longlong param_3,undefined8 *param_4,
                       double *param_5,longlong param_6,longlong param_7)

{
  byte *pbVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  void *_Dst;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  double *unaff_RBP;
  ulonglong uVar17;
  double *pdVar18;
  uint uVar20;
  int iVar21;
  double *pdVar22;
  int iVar23;
  bool bVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_188 [36];
  int local_164;
  longlong local_160;
  int local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  uint local_13c;
  double *local_138;
  ulonglong local_130;
  longlong local_128;
  undefined8 *local_120;
  double *local_118;
  ulonglong local_110;
  int local_104 [3];
  double local_f8 [3];
  undefined8 local_e0;
  double local_d8;
  double local_d0;
  double local_c8 [3];
  ulonglong local_b0;
  undefined7 uVar19;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_160 = param_1;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    pdVar18 = *(double **)(param_1 + 0x10);
    unaff_RBP = pdVar18 + (longlong)*(int *)(param_1 + 0x18) * 7;
    do {
      local_e0 = pdVar18[1] - *param_2;
      local_d8 = pdVar18[2] - param_2[1];
      local_d0 = pdVar18[3] - param_2[2];
      local_c8[0] = pdVar18[4] - *param_2;
      local_c8[1] = pdVar18[5] - param_2[1];
      local_c8[2] = pdVar18[6] - param_2[2];
      lVar12 = 0;
      dVar26 = 1.79769313486232e+308;
      dVar25 = 0.0;
      do {
        if (*(char *)(param_7 + lVar12) == '\x01') {
          if (0.0 < (double)(&local_e0)[lVar12]) goto LAB_146ca837b;
          dVar27 = 0.0;
          dVar29 = 1.79769313486232e+308;
          if (local_c8[lVar12] <= 0.0 && local_c8[lVar12] != 0.0) goto LAB_146ca837b;
        }
        else {
          dVar29 = *(double *)(param_6 + lVar12 * 8);
          dVar27 = (double)(&local_e0)[lVar12] * dVar29;
          dVar29 = dVar29 * local_c8[lVar12];
        }
        dVar28 = dVar29;
        if (dVar27 <= dVar29) {
          dVar28 = dVar27;
        }
        if (dVar25 <= dVar28) {
          dVar25 = dVar28;
        }
        if (dVar27 <= dVar29) {
          dVar27 = dVar29;
        }
        if (dVar27 <= dVar26) {
          dVar26 = dVar27;
        }
        if (dVar26 < dVar25) goto LAB_146ca837b;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      if ((dVar25 <= *(double *)(param_3 + 0x20)) && (0.0 <= dVar26)) {
        local_e0._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
        local_e0 = (double)CONCAT44(local_e0._4_4_,*(undefined4 *)pdVar18);
        cVar10 = (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,&local_e0,param_3)
        ;
        if (cVar10 == '\0') goto LAB_146ca8c35;
      }
LAB_146ca837b:
      pdVar18 = pdVar18 + 7;
    } while (pdVar18 != unaff_RBP);
  }
  if ((longlong)*(int *)(local_160 + 0xa0) != 0) {
    pdVar18 = *(double **)(local_160 + 0x98);
    unaff_RBP = pdVar18 + (longlong)*(int *)(local_160 + 0xa0) * 10;
    do {
      local_e0 = *pdVar18 - *param_2;
      local_d8 = pdVar18[1] - param_2[1];
      local_d0 = pdVar18[2] - param_2[2];
      local_c8[0] = pdVar18[3] - *param_2;
      local_c8[1] = pdVar18[4] - param_2[1];
      local_c8[2] = pdVar18[5] - param_2[2];
      lVar12 = 0;
      dVar26 = 1.79769313486232e+308;
      dVar25 = 0.0;
      do {
        if (*(char *)(param_7 + lVar12) == '\x01') {
          if (0.0 < (double)(&local_e0)[lVar12]) goto LAB_146ca84e3;
          dVar27 = 0.0;
          dVar29 = 1.79769313486232e+308;
          if (local_c8[lVar12] <= 0.0 && local_c8[lVar12] != 0.0) goto LAB_146ca84e3;
        }
        else {
          dVar29 = *(double *)(param_6 + lVar12 * 8);
          dVar27 = (double)(&local_e0)[lVar12] * dVar29;
          dVar29 = dVar29 * local_c8[lVar12];
        }
        dVar28 = dVar29;
        if (dVar27 <= dVar29) {
          dVar28 = dVar27;
        }
        if (dVar25 <= dVar28) {
          dVar25 = dVar28;
        }
        if (dVar27 <= dVar29) {
          dVar27 = dVar29;
        }
        if (dVar27 <= dVar26) {
          dVar26 = dVar27;
        }
        if (dVar26 < dVar25) goto LAB_146ca84e3;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
      if ((dVar25 <= *(double *)(param_3 + 0x20)) && (0.0 <= dVar26)) {
        local_e0._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
        local_e0 = (double)CONCAT44(local_e0._4_4_,*(undefined4 *)(pdVar18 + 6));
        cVar10 = (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,&local_e0,param_3)
        ;
        if (cVar10 == '\0') goto LAB_146ca8c35;
      }
LAB_146ca84e3:
      pdVar18 = pdVar18 + 10;
    } while (pdVar18 != unaff_RBP);
  }
  lVar12 = local_160;
  uVar19 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar17 = CONCAT71(uVar19,1);
  if ((*(char *)(local_160 + 0xc0) == '\0') &&
     (uVar17 = CONCAT71(uVar19,1), *(int *)(local_160 + 0x90) != 0)) {
    dVar25 = param_2[2];
    dVar26 = *param_2;
    dVar29 = param_2[1];
    local_e0 = *(double *)(local_160 + 0x20) - dVar26;
    local_d8 = *(double *)(local_160 + 0x28) - dVar29;
    local_d0 = *(double *)(local_160 + 0x30) - dVar25;
    local_c8[0] = *(double *)(local_160 + 0x38) - dVar26;
    local_c8[1] = *(double *)(local_160 + 0x40) - dVar29;
    local_c8[2] = *(double *)(local_160 + 0x48) - dVar25;
    lVar13 = 0;
    dVar27 = 1.79769313486232e+308;
    dVar28 = 0.0;
    do {
      if (*(char *)(param_7 + lVar13) == '\x01') {
        if ((0.0 < (double)(&local_e0)[lVar13]) ||
           (dVar5 = 0.0, dVar2 = 1.79769313486232e+308,
           local_c8[lVar13] <= 0.0 && local_c8[lVar13] != 0.0)) goto LAB_146ca8501;
      }
      else {
        dVar2 = *(double *)(param_6 + lVar13 * 8);
        dVar5 = (double)(&local_e0)[lVar13] * dVar2;
        dVar2 = dVar2 * local_c8[lVar13];
      }
      dVar8 = dVar2;
      if (dVar5 <= dVar2) {
        dVar8 = dVar5;
      }
      if (dVar28 <= dVar8) {
        dVar28 = dVar8;
      }
      if (dVar5 <= dVar2) {
        dVar5 = dVar2;
      }
      if (dVar5 <= dVar27) {
        dVar27 = dVar5;
      }
      if (dVar27 < dVar28) goto LAB_146ca8501;
      lVar13 = lVar13 + 1;
    } while (lVar13 != 3);
    if ((dVar28 <= *(double *)(param_3 + 0x20)) && (0.0 <= dVar27)) {
      local_f8[2] = dVar25 + dVar28 * param_5[2];
      local_f8[1] = dVar29 + param_5[1] * dVar28;
      local_f8[0] = dVar26 + *param_5 * dVar28;
      FUN_146c9c584(local_160 + 0x20,local_104);
      local_154 = *(int *)(lVar12 + 0x54);
      local_164 = *(int *)(lVar12 + 0x58);
      local_144 = local_154 * local_164;
      iVar11 = *(int *)(lVar12 + 0x50) * local_144;
      iVar15 = iVar11 + 7;
      if (-1 < iVar11) {
        iVar15 = iVar11;
      }
      pdVar18 = (double *)(longlong)((iVar15 >> 3) + 1);
      _Dst = (void *)FUN_144a7d36f(pdVar18);
      memset(_Dst,0,(size_t)pdVar18);
      do {
        local_130 = (ulonglong)(uint)local_104[2];
        local_148 = local_104[0];
        local_14c = local_104[1];
        lVar13 = (longlong)
                 ((*(int *)(lVar12 + 0x7c) * local_104[0] + local_104[1]) * *(int *)(lVar12 + 0x80)
                 + local_104[2]) * 0x10;
        lVar16 = (longlong)*(int *)(*(longlong *)(lVar12 + 0x88) + 8 + lVar13);
        if (lVar16 != 0) {
          pdVar22 = *(double **)(*(longlong *)(lVar12 + 0x88) + lVar13);
          local_118 = pdVar22 + lVar16 * 10;
          local_128 = param_3;
          local_120 = param_4;
          do {
            uVar3 = *(uint *)((longlong)pdVar22 + 0x34);
            uVar20 = *(uint *)(pdVar22 + 8);
            if ((uVar3 == uVar20) &&
               (iVar15 = *(int *)(pdVar22 + 7), iVar15 == *(int *)((longlong)pdVar22 + 0x44))) {
              iVar11 = iVar15;
              if (*(int *)((longlong)pdVar22 + 0x3c) == *(int *)(pdVar22 + 9)) goto LAB_146ca87fd;
LAB_146ca894c:
              local_13c = uVar20;
              if ((int)uVar20 < (int)uVar3) {
                local_13c = uVar3;
              }
              iVar21 = (local_154 * uVar3 + iVar11) * local_164;
              local_150 = 0;
              do {
                local_110 = (ulonglong)uVar3;
                if (iVar11 <= iVar15) {
                  iVar4 = *(int *)((longlong)pdVar22 + 0x3c);
                  uVar20 = iVar4 + iVar21;
                  iVar9 = iVar11;
                  do {
                    pdVar18 = (double *)(ulonglong)uVar20;
                    iVar23 = (*(int *)(pdVar22 + 9) - iVar4) + 1;
                    if (iVar4 <= *(int *)(pdVar22 + 9)) {
                      do {
                        uVar6 = (uint)pdVar18;
                        uVar14 = uVar6 + 7;
                        if (-1 < (int)uVar6) {
                          uVar14 = uVar6;
                        }
                        if ((*(byte *)((longlong)_Dst + (longlong)((int)uVar14 >> 3)) >> (uVar6 & 7)
                            & 1) != 0) {
                          local_150 = 1;
                          break;
                        }
                        pdVar18 = (double *)(ulonglong)(uVar6 + 1);
                        iVar23 = iVar23 + -1;
                      } while (iVar23 != 0);
                    }
                    uVar20 = uVar20 + local_164;
                    bVar24 = iVar9 != iVar15;
                    iVar9 = iVar9 + 1;
                  } while (bVar24);
                }
                iVar21 = iVar21 + local_144;
                bVar24 = uVar3 != local_13c;
                uVar3 = uVar3 + 1;
              } while (bVar24);
              lVar12 = local_160;
              param_4 = local_120;
              param_3 = local_128;
              local_140 = iVar11;
              local_138 = pdVar22;
              if ((char)local_150 == '\0') goto LAB_146ca87fd;
            }
            else {
              if ((int)uVar3 <= (int)uVar20) {
                iVar15 = *(int *)((longlong)pdVar22 + 0x44);
                iVar11 = *(int *)(pdVar22 + 7);
                goto LAB_146ca894c;
              }
LAB_146ca87fd:
              local_e0 = *pdVar22 - *param_2;
              local_d8 = pdVar22[1] - param_2[1];
              local_d0 = pdVar22[2] - param_2[2];
              local_c8[0] = pdVar22[3] - *param_2;
              local_c8[1] = pdVar22[4] - param_2[1];
              local_c8[2] = pdVar22[5] - param_2[2];
              dVar26 = 0.0;
              lVar13 = 0;
              dVar25 = 1.79769313486232e+308;
              do {
                if (*(char *)(param_7 + lVar13) == '\x01') {
                  if (0.0 < (double)(&local_e0)[lVar13]) goto LAB_146ca8a2a;
                  dVar27 = 0.0;
                  dVar29 = 1.79769313486232e+308;
                  if (local_c8[lVar13] <= 0.0 && local_c8[lVar13] != 0.0) goto LAB_146ca8a2a;
                }
                else {
                  dVar29 = *(double *)(param_6 + lVar13 * 8);
                  dVar27 = (double)(&local_e0)[lVar13] * dVar29;
                  dVar29 = dVar29 * local_c8[lVar13];
                }
                dVar28 = dVar29;
                if (dVar27 <= dVar29) {
                  dVar28 = dVar27;
                }
                if (dVar26 <= dVar28) {
                  dVar26 = dVar28;
                }
                if (dVar27 <= dVar29) {
                  dVar27 = dVar29;
                }
                if (dVar27 <= dVar25) {
                  dVar25 = dVar27;
                }
                if (dVar25 < dVar26) goto LAB_146ca8a2a;
                lVar13 = lVar13 + 1;
              } while (lVar13 != 3);
              if ((dVar26 <= *(double *)(param_3 + 0x20)) && (0.0 <= dVar25)) {
                local_e0._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
                local_e0 = (double)CONCAT44(local_e0._4_4_,*(undefined4 *)(pdVar22 + 6));
                cVar10 = (**(code **)(*(longlong *)*param_4 + 0x10))
                                   ((longlong *)*param_4,&local_e0,param_3);
                pdVar18 = pdVar22;
                if (cVar10 == '\0') goto LAB_146ca8c55;
              }
            }
LAB_146ca8a2a:
            pdVar22 = pdVar22 + 10;
          } while (pdVar22 != local_118);
        }
        cVar10 = (**(code **)(*(longlong *)*param_4 + 0x40))();
        if (cVar10 != '\0') {
LAB_146ca8c55:
          uVar17 = 0;
          goto LAB_146ca8c3f;
        }
        iVar11 = (local_148 * local_154 + local_14c) * local_164;
        iVar15 = (int)local_130;
        iVar21 = iVar11 + iVar15;
        iVar11 = iVar11 + iVar15 + 7;
        if (-1 < iVar21) {
          iVar11 = iVar21;
        }
        pbVar1 = (byte *)((longlong)_Dst + (longlong)(iVar11 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar21 & 7));
        local_e0 = *(double *)(lVar12 + 0x60) * 0.5 +
                   (double)local_148 * *(double *)(lVar12 + 0x60) + *(double *)(lVar12 + 0x20);
        local_d8 = *(double *)(lVar12 + 0x68) * 0.5 +
                   (double)local_14c * *(double *)(lVar12 + 0x68) + *(double *)(lVar12 + 0x28);
        local_d0 = *(double *)(lVar12 + 0x70) * 0.5 +
                   (double)iVar15 * *(double *)(lVar12 + 0x70) + *(double *)(lVar12 + 0x30);
        dVar25 = *(double *)(param_3 + 0x20);
        bVar24 = true;
        lVar13 = 0;
        do {
          if (*(char *)(param_7 + lVar13) == '\0') {
            dVar26 = *(double *)(lVar12 + 0x60 + lVar13 * 8) * 0.5;
            dVar26 = (((double)(~-(ulonglong)(0.0 < param_5[lVar13]) & (ulonglong)-dVar26 |
                               -(ulonglong)(0.0 < param_5[lVar13]) & (ulonglong)dVar26) +
                      (double)(&local_e0)[lVar13]) - local_f8[lVar13]) *
                     *(double *)(param_6 + lVar13 * 8);
            bVar7 = dVar25 <= dVar26;
            dVar29 = dVar26;
            if (dVar25 <= dVar26) {
              dVar29 = dVar25;
            }
            dVar25 = dVar29;
            bVar24 = (bool)(bVar24 & bVar7);
          }
          else {
            dVar26 = 1.79769313486232e+308;
          }
          local_c8[lVar13] = dVar26;
          lVar13 = lVar13 + 1;
        } while (lVar13 != 3);
        if (bVar24) goto LAB_146ca8c3c;
        lVar13 = 0;
        do {
          iVar15 = 0;
          if (*(double *)((longlong)local_c8 + lVar13 * 2) <= dVar25 + 0.009999999776482582) {
            iVar15 = (uint)(0.0 < *(double *)((longlong)param_5 + lVar13 * 2)) * 2 + -1;
          }
          iVar15 = iVar15 + *(int *)((longlong)local_104 + lVar13);
          *(int *)((longlong)local_104 + lVar13) = iVar15;
          if ((iVar15 < 0) || (*(int *)(lVar12 + 0x50 + lVar13) <= iVar15)) goto LAB_146ca8c3c;
          lVar13 = lVar13 + 4;
        } while (lVar13 != 0xc);
        local_f8[0] = dVar25 * *param_5 + local_f8[0];
        local_f8[1] = param_5[1] * dVar25 + local_f8[1];
        local_f8[2] = param_5[2] * dVar25 + local_f8[2];
      } while( true );
    }
  }
LAB_146ca8501:
  if ((local_b0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffffff;
LAB_146ca8c35:
  uVar17 = 0;
  goto LAB_146ca8501;
LAB_146ca8c3c:
  uVar17 = CONCAT71((int7)((ulonglong)pdVar18 >> 8),1);
LAB_146ca8c3f:
  if (_Dst != (void *)0x0) {
    thunk_FUN_1400020a8(_Dst);
  }
  goto LAB_146ca8501;
}



// FUNCTION 146ca8c5a FUN_146ca8c5a body=5510 status=ok
// SIG undefined FUN_146ca8c5a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146ca8c5a(longlong param_1,double *param_2,longlong param_3,double *param_4,
                       undefined8 *param_5,double *param_6,longlong param_7,longlong param_8)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  void *_Dst;
  void *_Dst_00;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  double dVar18;
  double *pdVar19;
  ulonglong uVar20;
  int iVar22;
  int iVar23;
  size_t _Size;
  double *pdVar24;
  uint uVar25;
  uint uVar26;
  double *pdVar27;
  bool bVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  bool bVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auStack_218 [40];
  longlong local_1f0;
  double local_1e8;
  int local_1dc;
  double local_1d8;
  int local_1d0;
  int local_1cc;
  double *local_1c8;
  longlong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  int local_1a4;
  longlong local_1a0;
  double *local_198;
  double *local_190;
  longlong local_188;
  double *local_180;
  int local_178 [4];
  int iStack_168;
  int local_164;
  undefined8 local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  double local_120 [3];
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  undefined7 uVar21;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1f0 = param_1;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar29 = *(undefined4 **)(param_1 + 0x10);
    puVar30 = puVar29 + (longlong)*(int *)(param_1 + 0x18) * 0xe;
    do {
      local_108 = (*(double *)(puVar29 + 2) - *param_4) - *param_2;
      uStack_100 = (*(double *)(puVar29 + 4) - param_4[1]) - param_2[1];
      local_f8 = (*(double *)(puVar29 + 6) - param_4[2]) - param_2[2];
      local_120[0] = (*param_4 + *(double *)(puVar29 + 8)) - *param_2;
      local_120[1] = (param_4[1] + *(double *)(puVar29 + 10)) - param_2[1];
      local_120[2] = (param_4[2] + *(double *)(puVar29 + 0xc)) - param_2[2];
      lVar14 = 0;
      dVar34 = 0.0;
      uVar32 = 0xffffffff;
      uVar33 = 0x7fefffff;
      do {
        if (*(char *)(param_8 + lVar14) == '\x01') {
          if (0.0 < (double)(&local_108)[lVar14]) goto LAB_146ca8e86;
          dVar35 = 0.0;
          dVar36 = 1.79769313486232e+308;
          if (local_120[lVar14] <= 0.0 && local_120[lVar14] != 0.0) goto LAB_146ca8e86;
        }
        else {
          dVar36 = *(double *)(param_7 + lVar14 * 8);
          dVar35 = (double)(&local_108)[lVar14] * dVar36;
          dVar36 = dVar36 * local_120[lVar14];
        }
        dVar18 = dVar36;
        if (dVar35 <= dVar36) {
          dVar18 = dVar35;
        }
        if (dVar34 <= dVar18) {
          dVar34 = dVar18;
        }
        if (dVar35 <= dVar36) {
          dVar35 = dVar36;
        }
        if (dVar35 <= (double)CONCAT44(uVar33,uVar32)) {
          uVar32 = SUB84(dVar35,0);
          uVar33 = (undefined4)((ulonglong)dVar35 >> 0x20);
        }
        if ((double)CONCAT44(uVar33,uVar32) <= dVar34 && dVar34 != (double)CONCAT44(uVar33,uVar32))
        goto LAB_146ca8e86;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      if ((dVar34 <= *(double *)(param_3 + 0x20)) &&
         (0.0 < (double)CONCAT44(uVar33,uVar32) || (double)CONCAT44(uVar33,uVar32) == 0.0)) {
        local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
        local_108 = (double)CONCAT44(local_108._4_4_,*puVar29);
        cVar7 = (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,&local_108,param_3)
        ;
        if (cVar7 == '\0') goto LAB_146ca90d3;
      }
LAB_146ca8e86:
      puVar29 = puVar29 + 0xe;
    } while (puVar29 != puVar30);
  }
  if ((longlong)*(int *)(local_1f0 + 0xa0) != 0) {
    pdVar19 = *(double **)(local_1f0 + 0x98);
    pdVar24 = pdVar19 + (longlong)*(int *)(local_1f0 + 0xa0) * 10;
    do {
      local_108 = (*pdVar19 - *param_4) - *param_2;
      uStack_100 = (pdVar19[1] - param_4[1]) - param_2[1];
      local_f8 = (pdVar19[2] - param_4[2]) - param_2[2];
      local_120[0] = (*param_4 + pdVar19[3]) - *param_2;
      local_120[1] = (param_4[1] + pdVar19[4]) - param_2[1];
      local_120[2] = (param_4[2] + pdVar19[5]) - param_2[2];
      lVar14 = 0;
      dVar34 = 0.0;
      uVar32 = 0xffffffff;
      uVar33 = 0x7fefffff;
      do {
        if (*(char *)(param_8 + lVar14) == '\x01') {
          if (0.0 < (double)(&local_108)[lVar14]) goto LAB_146ca9029;
          dVar35 = 0.0;
          dVar36 = 1.79769313486232e+308;
          if (local_120[lVar14] <= 0.0 && local_120[lVar14] != 0.0) goto LAB_146ca9029;
        }
        else {
          dVar36 = *(double *)(param_7 + lVar14 * 8);
          dVar35 = (double)(&local_108)[lVar14] * dVar36;
          dVar36 = dVar36 * local_120[lVar14];
        }
        dVar18 = dVar36;
        if (dVar35 <= dVar36) {
          dVar18 = dVar35;
        }
        if (dVar34 <= dVar18) {
          dVar34 = dVar18;
        }
        if (dVar35 <= dVar36) {
          dVar35 = dVar36;
        }
        if (dVar35 <= (double)CONCAT44(uVar33,uVar32)) {
          uVar32 = SUB84(dVar35,0);
          uVar33 = (undefined4)((ulonglong)dVar35 >> 0x20);
        }
        if ((double)CONCAT44(uVar33,uVar32) <= dVar34 && dVar34 != (double)CONCAT44(uVar33,uVar32))
        goto LAB_146ca9029;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      if ((dVar34 <= *(double *)(param_3 + 0x20)) &&
         (0.0 < (double)CONCAT44(uVar33,uVar32) || (double)CONCAT44(uVar33,uVar32) == 0.0)) {
        local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
        local_108 = (double)CONCAT44(local_108._4_4_,*(undefined4 *)(pdVar19 + 6));
        cVar7 = (**(code **)(*(longlong *)*param_5 + 0x18))((longlong *)*param_5,&local_108,param_3)
        ;
        if (cVar7 == '\0') goto LAB_146ca90d3;
      }
LAB_146ca9029:
      pdVar19 = pdVar19 + 10;
    } while (pdVar19 != pdVar24);
  }
  uVar21 = (undefined7)((ulonglong)param_7 >> 8);
  uVar20 = CONCAT71(uVar21,1);
  if (*(char *)(local_1f0 + 0xc0) == '\0') {
    lVar14 = local_1f0 + 0x20;
    dVar34 = param_4[2];
    dVar36 = *(double *)(local_1f0 + 0x48);
    dVar35 = *param_4;
    dVar18 = param_4[1];
    dVar2 = *(double *)(local_1f0 + 0x40);
    dVar3 = *(double *)(local_1f0 + 0x38);
    dVar37 = *(double *)(local_1f0 + 0x30);
    dVar38 = *(double *)(local_1f0 + 0x20);
    dVar39 = *(double *)(local_1f0 + 0x28);
    local_f8 = param_2[2] - dVar34;
    uStack_100 = param_2[1] - dVar18;
    local_108 = *param_2 - dVar35;
    FUN_146c9c584(lVar14,&local_12c,&local_108);
    local_f8 = param_2[2] + param_4[2];
    uStack_100 = param_2[1] + param_4[1];
    local_108 = *param_2 + *param_4;
    local_1c8 = param_2;
    local_1c0 = lVar14;
    FUN_146c9c584(lVar14,&local_138,&local_108);
    lVar14 = local_1c0;
    iVar11 = local_12c;
    iVar13 = local_138;
    if (((local_12c == local_138) && (iVar13 = local_12c, local_128 == local_134)) &&
       (iVar13 = local_12c, local_124 == local_130)) {
      dVar40 = *(double *)(param_3 + 0x20);
      dVar6 = dVar40 * param_6[2] + local_1c8[2];
      local_1e8 = param_6[1] * dVar40 + local_1c8[1];
      local_1d8 = *param_6 * dVar40 + *local_1c8;
      local_f8 = dVar6 - param_4[2];
      uStack_100 = local_1e8 - param_4[1];
      local_108 = local_1d8 - *param_4;
      FUN_146c9c584(local_1c0,&local_160,&local_108);
      local_f8 = dVar6 + param_4[2];
      uStack_100 = local_1e8 + param_4[1];
      local_108 = local_1d8 + *param_4;
      FUN_146c9c584(lVar14,&local_148,&local_108);
      pdVar19 = local_1c8;
      iVar11 = local_12c;
      iVar13 = local_138;
      if ((((local_12c == (int)local_160) && (local_128 == local_160._4_4_)) &&
          ((local_124 == local_158._0_4_ &&
           ((local_12c == (int)local_148 && (local_128 == local_148._4_4_)))))) &&
         (local_124 == (int)uStack_140)) {
        lVar14 = (longlong)
                 ((local_12c * *(int *)(local_1f0 + 0x7c) + local_128) * *(int *)(local_1f0 + 0x80)
                 + local_124) * 0x10;
        lVar17 = (longlong)*(int *)(*(longlong *)(local_1f0 + 0x88) + 8 + lVar14);
        uVar20 = CONCAT71((int7)((ulonglong)&local_108 >> 8),1);
        if (lVar17 != 0) {
          pdVar24 = *(double **)(*(longlong *)(local_1f0 + 0x88) + lVar14);
          pdVar27 = pdVar24 + lVar17 * 10;
          do {
            local_108 = (*pdVar24 - *param_4) - *pdVar19;
            uStack_100 = (pdVar24[1] - param_4[1]) - pdVar19[1];
            local_f8 = (pdVar24[2] - param_4[2]) - pdVar19[2];
            local_120[0] = (*param_4 + pdVar24[3]) - *pdVar19;
            local_120[1] = (param_4[1] + pdVar24[4]) - pdVar19[1];
            local_120[2] = (param_4[2] + pdVar24[5]) - pdVar19[2];
            lVar14 = 0;
            dVar34 = 0.0;
            uVar32 = 0xffffffff;
            uVar33 = 0x7fefffff;
            do {
              if (*(char *)(param_8 + lVar14) == '\x01') {
                if (0.0 < (double)(&local_108)[lVar14]) goto LAB_146ca94e1;
                dVar35 = 0.0;
                dVar36 = 1.79769313486232e+308;
                if (local_120[lVar14] <= 0.0 && local_120[lVar14] != 0.0) goto LAB_146ca94e1;
              }
              else {
                dVar36 = *(double *)(param_7 + lVar14 * 8);
                dVar35 = (double)(&local_108)[lVar14] * dVar36;
                dVar36 = dVar36 * local_120[lVar14];
              }
              dVar18 = dVar36;
              if (dVar35 <= dVar36) {
                dVar18 = dVar35;
              }
              if (dVar34 <= dVar18) {
                dVar34 = dVar18;
              }
              if (dVar35 <= dVar36) {
                dVar35 = dVar36;
              }
              if (dVar35 <= (double)CONCAT44(uVar33,uVar32)) {
                uVar32 = SUB84(dVar35,0);
                uVar33 = (undefined4)((ulonglong)dVar35 >> 0x20);
              }
              if ((double)CONCAT44(uVar33,uVar32) <= dVar34 &&
                  dVar34 != (double)CONCAT44(uVar33,uVar32)) goto LAB_146ca94e1;
              lVar14 = lVar14 + 1;
            } while (lVar14 != 3);
            if ((dVar34 <= *(double *)(param_3 + 0x20)) &&
               (0.0 < (double)CONCAT44(uVar33,uVar32) || (double)CONCAT44(uVar33,uVar32) == 0.0)) {
              local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
              local_108 = (double)CONCAT44(local_108._4_4_,*(undefined4 *)(pdVar24 + 6));
              cVar7 = (**(code **)(*(longlong *)*param_5 + 0x18))
                                ((longlong *)*param_5,&local_108,param_3);
              if (cVar7 == '\0') {
                uVar20 = 0;
                break;
              }
            }
LAB_146ca94e1:
            pdVar24 = pdVar24 + 10;
          } while (pdVar24 != pdVar27);
        }
        uVar20 = uVar20 & 0xffffffff;
        goto LAB_146ca904b;
      }
    }
    local_1cc = *(int *)(local_1f0 + 0x54);
    local_1e8 = (double)CONCAT44(local_1e8._4_4_,*(int *)(local_1f0 + 0x58));
    local_1dc = *(int *)(local_1f0 + 0x58) * local_1cc;
    iVar8 = *(int *)(local_1f0 + 0x50) * local_1dc;
    iVar10 = iVar8 + 7;
    if (-1 < iVar8) {
      iVar10 = iVar8;
    }
    _Size = (size_t)((iVar10 >> 3) + 1);
    local_1a0 = param_3;
    local_198 = param_4;
    _Dst = (void *)FUN_144a7d36f(_Size);
    memset(_Dst,0,_Size);
    _Dst_00 = (void *)FUN_144a7d36f(_Size);
    memset(_Dst_00,0,_Size);
    local_148 = 0;
    uStack_140 = 0;
    if (iVar11 <= iVar13) {
      uVar16 = iVar11 * local_1cc;
      iVar10 = local_134;
      do {
        if (local_128 <= iVar10) {
          iVar22 = (local_128 + uVar16) * local_1e8._0_4_;
          iVar13 = local_130;
          iVar8 = local_128;
          local_1d8 = (double)(ulonglong)uVar16;
          do {
            iVar23 = local_124;
            if (local_124 <= iVar13) {
              do {
                uVar20 = uStack_140;
                lVar14 = (longlong)(int)uStack_140;
                uVar16 = (int)uStack_140 + 1;
                uStack_140 = CONCAT44(uStack_140._4_4_,uVar16);
                if (uStack_140._4_4_ < uVar16) {
                  FUN_146caa1e2(&local_148,uVar20 & 0xffffffff);
                }
                *(int *)(local_148 + lVar14 * 0x18) = iVar11;
                *(int *)(local_148 + 4 + lVar14 * 0x18) = iVar8;
                *(int *)(local_148 + 8 + lVar14 * 0x18) = iVar23;
                iVar10 = iVar22 + iVar23;
                iVar13 = iVar22 + 7 + iVar23;
                if (-1 < iVar10) {
                  iVar13 = iVar10;
                }
                *(undefined8 *)(local_148 + 0x10 + lVar14 * 0x18) = 0;
                pbVar1 = (byte *)((longlong)_Dst + (longlong)(iVar13 >> 3));
                *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar10 & 7));
                bVar28 = iVar23 < local_130;
                iVar13 = local_130;
                iVar23 = iVar23 + 1;
                iVar10 = local_134;
              } while (bVar28);
            }
            iVar22 = iVar22 + local_1e8._0_4_;
            bVar28 = iVar8 < iVar10;
            iVar8 = iVar8 + 1;
          } while (bVar28);
          uVar16 = SUB84(local_1d8,0);
          iVar13 = local_138;
        }
        uVar16 = uVar16 + local_1cc;
        bVar28 = iVar11 < iVar13;
        iVar11 = iVar11 + 1;
      } while (bVar28);
    }
    pdVar24 = local_198;
    lVar14 = local_1a0;
    pdVar19 = local_1c8;
    dVar40 = local_1c8[2];
    dVar6 = *local_1c8;
    dVar4 = local_1c8[1];
    local_108 = (dVar38 - dVar35) - dVar6;
    uStack_100 = (dVar39 - dVar18) - dVar4;
    local_f8 = (dVar37 - dVar34) - dVar40;
    local_120[0] = (dVar3 + dVar35) - dVar6;
    local_120[1] = (dVar2 + dVar18) - dVar4;
    local_120[2] = (dVar36 + dVar34) - dVar40;
    lVar17 = 0;
    dVar34 = 1.79769313486232e+308;
    dVar36 = 0.0;
    do {
      if (*(char *)(param_8 + lVar17) == '\x01') {
        if ((0.0 < (double)(&local_108)[lVar17]) ||
           (dVar18 = 0.0, dVar35 = 1.79769313486232e+308,
           local_120[lVar17] <= 0.0 && local_120[lVar17] != 0.0)) goto LAB_146ca97a2;
      }
      else {
        dVar35 = *(double *)(param_7 + lVar17 * 8);
        dVar18 = (double)(&local_108)[lVar17] * dVar35;
        dVar35 = dVar35 * local_120[lVar17];
      }
      dVar2 = dVar35;
      if (dVar18 <= dVar35) {
        dVar2 = dVar18;
      }
      if (dVar36 <= dVar2) {
        dVar36 = dVar2;
      }
      if (dVar18 <= dVar35) {
        dVar18 = dVar35;
      }
      if (dVar18 <= dVar34) {
        dVar34 = dVar18;
      }
      if (dVar34 < dVar36) goto LAB_146ca97a2;
      lVar17 = lVar17 + 1;
    } while (lVar17 != 3);
    if ((dVar36 <= *(double *)(local_1a0 + 0x20)) && (0.0 <= dVar34)) {
      local_150 = dVar40 + param_6[2] * dVar36;
      local_158 = dVar4 + param_6[1] * dVar36;
      local_160 = dVar6 + *param_6 * dVar36;
      FUN_146c9c584(local_1c0,local_178 + 3);
      iVar11 = iStack_168 * local_1e8._0_4_ + local_178[3] * local_1dc;
      uVar12 = iVar11 + local_164;
      uVar16 = local_164 + iVar11 + 7;
      if (-1 < (int)uVar12) {
        uVar16 = uVar12;
      }
      if ((*(byte *)((longlong)_Dst + (longlong)((int)uVar16 >> 3)) >> (uVar12 & 7) & 1) == 0) {
        uStack_100 = (double)CONCAT44(uStack_100._4_4_,local_164);
        local_108 = (double)CONCAT44(iStack_168,local_178[3]);
        lVar17 = (longlong)(int)uStack_140;
        uVar16 = (int)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar16);
        if (uStack_140._4_4_ < uVar16) {
          FUN_146caa1e2(&local_148);
        }
        puVar29 = (undefined4 *)(local_148 + lVar17 * 0x18);
        *puVar29 = (undefined4)local_108;
        puVar29[1] = local_108._4_4_;
        puVar29[2] = (undefined4)uStack_100;
        puVar29[3] = uStack_100._4_4_;
        *(double *)(local_148 + 0x10 + lVar17 * 0x18) = dVar36;
      }
      if (0 < (int)uStack_140) {
        dVar34 = *(double *)(local_1f0 + 0x70) * 0.5;
        dVar36 = *(double *)(local_1f0 + 0x68) * 0.5;
        dVar35 = *(double *)(local_1f0 + 0x60) * 0.5;
        lVar17 = 0;
        iVar11 = (int)uStack_140;
        do {
          dVar18 = *(double *)(local_148 + 0x10 + lVar17 * 0x18);
          if (dVar18 < *(double *)(lVar14 + 0x20) || dVar18 == *(double *)(lVar14 + 0x20)) {
            local_1d0 = *(int *)(local_148 + lVar17 * 0x18);
            local_1b0 = (ulonglong)*(uint *)(local_148 + 4 + lVar17 * 0x18);
            local_1b8 = (ulonglong)*(uint *)(local_148 + 8 + lVar17 * 0x18);
            local_188 = lVar17;
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9928d8) && (FUN_144b3d300(&DAT_14c9928d8), DAT_14c9928d8 == -1))
            {
              _DAT_14c9927a0 = 0xffffffffffffffff;
              _DAT_14c9927a8 = 0xffffffff;
              _DAT_14c9927b0 = 0xffffffffffffffff;
              uRam000000014c9927b8 = 0xffffffff00000001;
              _DAT_14c9927c0 = 0xffffffffffffffff;
              uRam000000014c9927c8 = 0xffffffff00000000;
              _DAT_14c9927d0 = 0;
              uRam000000014c9927d8 = 0x1ffffffff;
              _DAT_14c9927e0 = 0xffffffff00000000;
              uRam000000014c9927e8 = 0x1ffffffff;
              _DAT_14c9927f0 = 0xffffffff;
              uRam000000014c9927f8 = 0xffffffff00000001;
              _DAT_14c992800 = &DAT_100000001;
              uRam000000014c992808 = 0xffffffffffffffff;
              _DAT_14c992810 = 0xffffffff;
              uRam000000014c992818 = 0xffffffff00000000;
              _DAT_14c992820 = 0x100000000;
              uRam000000014c992828 = 0xffffffff;
              _DAT_14c992830 = 0xffffffff;
              uRam000000014c992834 = 0;
              uRam000000014c992838 = 0;
              uRam000000014c99283c = 1;
              _DAT_14c992840 = 0;
              uRam000000014c992848 = 0x1ffffffff;
              _DAT_14c992850 = 0;
              uRam000000014c992858 = 1;
              _DAT_14c992860 = 1;
              uRam000000014c992868 = 0xffffffff00000000;
              _DAT_14c992870 = 0x1ffffffff;
              uRam000000014c992878 = 0xffffffff00000000;
              _DAT_14c992880 = &DAT_100000001;
              uRam000000014c992888 = 0x1ffffffff;
              _DAT_14c992890 = 0xffffffff;
              uRam000000014c992898 = 1;
              _DAT_14c9928a0 = 0x100000000;
              uRam000000014c9928a8 = 1;
              _DAT_14c9928b0 = 0xffffffff00000001;
              puRam000000014c9928b8 = &DAT_100000001;
              _DAT_14c9928c0 = 0;
              uRam000000014c9928c4 = 1;
              uRam000000014c9928c8 = 1;
              uRam000000014c9928cc = 1;
              _DAT_14c9928d0 = &DAT_100000001;
              _Init_thread_footer(&DAT_14c9928d8);
            }
            lVar17 = 0;
            do {
              local_178[0] = *(int *)((longlong)&DAT_14c9927a0 + lVar17) + local_1d0;
              local_178[1] = *(int *)((longlong)&DAT_14c9927a4 + lVar17) + (int)local_1b0;
              local_178[2] = *(int *)((longlong)&DAT_14c9927a8 + lVar17) + (int)local_1b8;
              lVar15 = 0;
              do {
                if ((local_178[lVar15] < 0) ||
                   (*(int *)(local_1f0 + 0x50 + lVar15 * 4) <= local_178[lVar15]))
                goto LAB_146ca99da;
                lVar15 = lVar15 + 1;
              } while (lVar15 != 3);
              iVar11 = local_178[1] * local_1e8._0_4_ + local_178[0] * local_1dc;
              uVar12 = iVar11 + local_178[2];
              uVar16 = local_178[2] + iVar11 + 7;
              if (-1 < (int)uVar12) {
                uVar16 = uVar12;
              }
              bVar5 = *(byte *)((longlong)_Dst + (longlong)((int)uVar16 >> 3));
              if ((bVar5 >> (uVar12 & 7) & 1) == 0) {
                *(byte *)((longlong)_Dst + (longlong)((int)uVar16 >> 3)) =
                     (byte)(1 << ((byte)uVar12 & 7)) | bVar5;
                dVar38 = *(double *)(local_1f0 + 0x70) * 0.5 +
                         (double)local_178[2] * *(double *)(local_1f0 + 0x70) +
                         *(double *)(local_1f0 + 0x30);
                dVar39 = *(double *)(local_1f0 + 0x68) * 0.5 +
                         (double)local_178[1] * *(double *)(local_1f0 + 0x68) +
                         *(double *)(local_1f0 + 0x28);
                dVar37 = *(double *)(local_1f0 + 0x60) * 0.5 +
                         (double)local_178[0] * *(double *)(local_1f0 + 0x60) +
                         *(double *)(local_1f0 + 0x20);
                dVar18 = pdVar19[2];
                dVar2 = *pdVar19;
                dVar3 = pdVar19[1];
                uStack_100 = ((dVar39 - pdVar24[1]) - dVar36) - dVar3;
                local_108 = ((dVar37 - *pdVar24) - dVar35) - dVar2;
                local_f8 = ((dVar38 - pdVar24[2]) - dVar34) - dVar18;
                local_120[0] = (dVar37 + *pdVar24 + dVar35) - dVar2;
                local_120[1] = (dVar39 + pdVar24[1] + dVar36) - dVar3;
                local_120[2] = (dVar38 + pdVar24[2] + dVar34) - dVar18;
                dVar38 = 0.0;
                lVar15 = 0;
                dVar37 = 1.79769313486232e+308;
                do {
                  if (*(char *)(param_8 + lVar15) == '\x01') {
                    if ((0.0 < (double)(&local_108)[lVar15]) ||
                       (dVar40 = 0.0, dVar39 = 1.79769313486232e+308,
                       local_120[lVar15] <= 0.0 && local_120[lVar15] != 0.0)) goto LAB_146ca99da;
                  }
                  else {
                    dVar39 = *(double *)(param_7 + lVar15 * 8);
                    dVar40 = (double)(&local_108)[lVar15] * dVar39;
                    dVar39 = dVar39 * local_120[lVar15];
                  }
                  dVar6 = dVar39;
                  if (dVar40 <= dVar39) {
                    dVar6 = dVar40;
                  }
                  if (dVar38 <= dVar6) {
                    dVar38 = dVar6;
                  }
                  if (dVar40 <= dVar39) {
                    dVar40 = dVar39;
                  }
                  if (dVar40 <= dVar37) {
                    dVar37 = dVar40;
                  }
                  if (dVar37 < dVar38) goto LAB_146ca99da;
                  lVar15 = lVar15 + 1;
                } while (lVar15 != 3);
                if ((dVar38 <= *(double *)(lVar14 + 0x20)) && (0.0 <= dVar37)) {
                  local_150 = dVar18 + param_6[2] * dVar38;
                  local_158 = dVar3 + param_6[1] * dVar38;
                  local_160 = dVar2 + *param_6 * dVar38;
                  uStack_100._4_4_ = (undefined4)((ulonglong)uStack_100 >> 0x20);
                  uStack_100 = (double)CONCAT44(uStack_100._4_4_,local_178[2]);
                  local_108 = (double)CONCAT44(local_178[1],local_178[0]);
                  dVar18 = (double)(longlong)(int)uStack_140;
                  uVar16 = (int)uStack_140 + 1;
                  uStack_140 = CONCAT44(uStack_140._4_4_,uVar16);
                  if (uStack_140._4_4_ < uVar16) {
                    local_1d8 = dVar18;
                    FUN_146caa1e2(&local_148,dVar18);
                    dVar18 = local_1d8;
                  }
                  puVar29 = (undefined4 *)(local_148 + (longlong)dVar18 * 0x18);
                  *puVar29 = (undefined4)local_108;
                  puVar29[1] = local_108._4_4_;
                  puVar29[2] = (undefined4)uStack_100;
                  puVar29[3] = uStack_100._4_4_;
                  *(double *)(local_148 + 0x10 + (longlong)dVar18 * 0x18) = dVar38;
                }
              }
LAB_146ca99da:
              lVar17 = lVar17 + 0xc;
            } while (lVar17 != 0x138);
            lVar17 = (longlong)
                     ((*(int *)(local_1f0 + 0x7c) * local_1d0 + (int)local_1b0) *
                      *(int *)(local_1f0 + 0x80) + (int)local_1b8) * 0x10;
            lVar15 = (longlong)*(int *)(*(longlong *)(local_1f0 + 0x88) + 8 + lVar17);
            if (lVar15 != 0) {
              pdVar27 = *(double **)(*(longlong *)(local_1f0 + 0x88) + lVar17);
              local_180 = pdVar27 + lVar15 * 10;
              do {
                uVar16 = *(uint *)((longlong)pdVar27 + 0x34);
                uVar12 = *(uint *)(pdVar27 + 8);
                if ((uVar16 == uVar12) &&
                   (iVar11 = *(int *)(pdVar27 + 7), iVar11 == *(int *)((longlong)pdVar27 + 0x44))) {
                  iVar13 = iVar11;
                  if (*(int *)((longlong)pdVar27 + 0x3c) == *(int *)(pdVar27 + 9))
                  goto LAB_146ca9cdb;
LAB_146ca9ea5:
                  if ((int)uVar12 < (int)uVar16) {
                    uVar12 = uVar16;
                  }
                  local_1c0 = CONCAT44(local_1c0._4_4_,uVar12);
                  iVar10 = (local_1cc * uVar16 + iVar13) * local_1e8._0_4_;
                  bVar28 = false;
                  do {
                    local_1d8 = (double)(ulonglong)uVar16;
                    if (iVar13 <= iVar11) {
                      iVar8 = *(int *)((longlong)pdVar27 + 0x3c);
                      uVar25 = iVar8 + iVar10;
                      iVar22 = iVar13;
                      do {
                        iVar23 = (*(int *)(pdVar27 + 9) - iVar8) + 1;
                        uVar9 = uVar25;
                        if (iVar8 <= *(int *)(pdVar27 + 9)) {
                          do {
                            uVar26 = uVar9 + 7;
                            if (-1 < (int)uVar9) {
                              uVar26 = uVar9;
                            }
                            if ((*(byte *)((longlong)_Dst_00 + (longlong)((int)uVar26 >> 3)) >>
                                 (uVar9 & 7) & 1) != 0) {
                              bVar28 = true;
                              break;
                            }
                            uVar9 = uVar9 + 1;
                            iVar23 = iVar23 + -1;
                          } while (iVar23 != 0);
                        }
                        uVar25 = uVar25 + local_1e8._0_4_;
                        bVar31 = iVar22 != iVar11;
                        iVar22 = iVar22 + 1;
                      } while (bVar31);
                    }
                    iVar10 = iVar10 + local_1dc;
                    bVar31 = uVar16 != uVar12;
                    uVar16 = uVar16 + 1;
                  } while (bVar31);
                  pdVar19 = local_1c8;
                  pdVar24 = local_198;
                  lVar14 = local_1a0;
                  local_1a4 = iVar13;
                  local_190 = pdVar27;
                  if (!bVar28) goto LAB_146ca9cdb;
                }
                else {
                  if ((int)uVar16 <= (int)uVar12) {
                    iVar11 = *(int *)((longlong)pdVar27 + 0x44);
                    iVar13 = *(int *)(pdVar27 + 7);
                    goto LAB_146ca9ea5;
                  }
LAB_146ca9cdb:
                  dVar18 = pdVar19[2];
                  dVar2 = *pdVar19;
                  dVar3 = pdVar19[1];
                  local_108 = (*pdVar27 - *pdVar24) - dVar2;
                  uStack_100 = (pdVar27[1] - pdVar24[1]) - dVar3;
                  local_f8 = (pdVar27[2] - pdVar24[2]) - dVar18;
                  local_120[0] = (*pdVar24 + pdVar27[3]) - dVar2;
                  local_120[1] = (pdVar24[1] + pdVar27[4]) - dVar3;
                  local_120[2] = (pdVar24[2] + pdVar27[5]) - dVar18;
                  dVar38 = 0.0;
                  lVar17 = 0;
                  dVar37 = 1.79769313486232e+308;
                  do {
                    if (*(char *)(param_8 + lVar17) == '\x01') {
                      if ((0.0 < (double)(&local_108)[lVar17]) ||
                         (dVar40 = 0.0, dVar39 = 1.79769313486232e+308,
                         local_120[lVar17] <= 0.0 && local_120[lVar17] != 0.0)) goto LAB_146ca9f8c;
                    }
                    else {
                      dVar39 = *(double *)(param_7 + lVar17 * 8);
                      dVar40 = (double)(&local_108)[lVar17] * dVar39;
                      dVar39 = dVar39 * local_120[lVar17];
                    }
                    dVar6 = dVar39;
                    if (dVar40 <= dVar39) {
                      dVar6 = dVar40;
                    }
                    if (dVar38 <= dVar6) {
                      dVar38 = dVar6;
                    }
                    if (dVar40 <= dVar39) {
                      dVar40 = dVar39;
                    }
                    if (dVar40 <= dVar37) {
                      dVar37 = dVar40;
                    }
                    if (dVar37 < dVar38) goto LAB_146ca9f8c;
                    lVar17 = lVar17 + 1;
                  } while (lVar17 != 3);
                  if ((dVar38 <= *(double *)(lVar14 + 0x20)) && (0.0 <= dVar37)) {
                    local_150 = dVar18 + dVar38 * param_6[2];
                    local_158 = dVar3 + param_6[1] * dVar38;
                    local_160 = dVar2 + *param_6 * dVar38;
                    local_108._4_4_ = (undefined4)((ulonglong)local_108 >> 0x20);
                    local_108 = (double)CONCAT44(local_108._4_4_,*(undefined4 *)(pdVar27 + 6));
                    cVar7 = (**(code **)(*(longlong *)*param_5 + 0x18))
                                      ((longlong *)*param_5,&local_108,lVar14);
                    if (cVar7 == '\0') {
                      uVar20 = 0;
                      goto LAB_146ca97a5;
                    }
                  }
                }
LAB_146ca9f8c:
                pdVar27 = pdVar27 + 10;
              } while (pdVar27 != local_180);
            }
            iVar11 = (int)local_1b0 * local_1e8._0_4_ + local_1d0 * local_1dc;
            iVar13 = iVar11 + (int)local_1b8;
            iVar11 = (int)local_1b8 + 7 + iVar11;
            if (-1 < iVar13) {
              iVar11 = iVar13;
            }
            pbVar1 = (byte *)((longlong)_Dst_00 + (longlong)(iVar11 >> 3));
            *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar13 & 7));
            lVar17 = local_188;
            iVar11 = (int)uStack_140;
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 < iVar11);
      }
    }
LAB_146ca97a2:
    uVar20 = CONCAT71(uVar21,1);
LAB_146ca97a5:
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    if (_Dst_00 != (void *)0x0) {
      thunk_FUN_1400020a8(_Dst_00);
    }
    if (_Dst != (void *)0x0) {
      thunk_FUN_1400020a8(_Dst);
    }
  }
LAB_146ca904b:
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar20 & 0xffffffff;
LAB_146ca90d3:
  uVar20 = 0;
  goto LAB_146ca904b;
}



// FUNCTION 146caa1e2 FUN_146caa1e2 body=147 status=ok
// SIG undefined FUN_146caa1e2(void)

void FUN_146caa1e2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146caa276 FUN_146caa276 body=874 status=ok
// SIG undefined FUN_146caa276(void)

ulonglong FUN_146caa276(longlong param_1,longlong param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined8 unaff_RBP;
  ulonglong uVar12;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined4 *puVar20;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [4];
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  undefined7 uVar13;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar20 = *(undefined4 **)(param_1 + 0x10);
    puVar18 = puVar20 + (longlong)*(int *)(param_1 + 0x18) * 0xe;
    do {
      lVar7 = 4;
      do {
        dVar2 = *(double *)(param_2 + -0x20 + lVar7 * 8);
        if ((*(double *)(puVar20 + lVar7 * 2) <= dVar2 && dVar2 != *(double *)(puVar20 + lVar7 * 2))
           || (pdVar1 = (double *)(param_2 + -8 + lVar7 * 8),
              *pdVar1 <= *(double *)(puVar20 + lVar7 * 2 + -6) &&
              *(double *)(puVar20 + lVar7 * 2 + -6) != *pdVar1)) goto LAB_146caa303;
        lVar7 = lVar7 + 1;
      } while (lVar7 != 7);
      local_98 = CONCAT44(local_98._4_4_,*puVar20);
      cVar5 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_98);
      if (cVar5 == '\0') goto LAB_146caa3b3;
LAB_146caa303:
      puVar20 = puVar20 + 0xe;
    } while (puVar20 != puVar18);
  }
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x98);
    lVar19 = (longlong)*(int *)(param_1 + 0xa0) * 0x50 + lVar7;
    do {
      lVar8 = 0;
      do {
        dVar2 = *(double *)(param_2 + lVar8 * 8);
        pdVar1 = (double *)(lVar7 + 0x18 + lVar8 * 8);
        if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
           (dVar2 = *(double *)(lVar7 + lVar8 * 8), pdVar1 = (double *)(param_2 + 0x18 + lVar8 * 8),
           *pdVar1 <= dVar2 && dVar2 != *pdVar1)) goto LAB_146caa36e;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      local_98 = CONCAT44(local_98._4_4_,*(undefined4 *)(lVar7 + 0x30));
      cVar5 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_98);
      if (cVar5 == '\0') goto LAB_146caa3b3;
LAB_146caa36e:
      lVar7 = lVar7 + 0x50;
    } while (lVar7 != lVar19);
  }
  uVar13 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar12 = CONCAT71(uVar13,1);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_146c9c584(param_1 + 0x20,&local_a4,param_2);
    FUN_146c9c584(param_1 + 0x20,&local_b0,param_2 + 0x18);
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar12 = CONCAT71(uVar13,1);
    if ((int)local_a4 <= local_b0) {
      iVar9 = local_b0;
      iVar6 = local_ac;
      do {
        uVar15 = (ulonglong)local_a4;
        iVar10 = local_a8;
        uVar14 = local_a4;
        uVar16 = local_a0;
        uVar17 = uVar15;
        if ((int)local_a0 <= iVar6) {
          do {
            local_c8 = uVar17;
            uVar17 = (ulonglong)uVar16;
            iVar9 = local_9c;
            uVar4 = uVar17;
            if (local_9c <= iVar10) {
              do {
                local_c0 = uVar4;
                lVar7 = (longlong)
                        ((*(int *)(param_1 + 0x7c) * (int)uVar15 + (int)uVar17) *
                         *(int *)(param_1 + 0x80) + iVar9) * 0x10;
                lVar19 = (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 8 + lVar7);
                if (lVar19 != 0) {
                  lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar7);
                  lVar19 = lVar19 * 0x50 + lVar7;
                  do {
                    uVar16 = *(uint *)(lVar7 + 0x30);
                    if ((int)uStack_90 != local_64) {
                      puVar11 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar11 = local_60;
                      }
                      for (iVar6 = *(int *)(puVar11 + (ulonglong)(local_50 - 1U & uVar16) * 4);
                          iVar6 != -1; iVar6 = *(int *)(local_98 + (longlong)iVar6 * 0xc + 4)) {
                        if (*(uint *)(local_98 + (longlong)iVar6 * 0xc) == uVar16)
                        goto LAB_146caa528;
                      }
                    }
                    local_b4 = uVar16;
                    FUN_14079e2ee(&local_98,local_b8,&local_b4,0);
                    lVar8 = 0;
                    do {
                      dVar2 = *(double *)(param_2 + lVar8 * 8);
                      pdVar1 = (double *)(lVar7 + 0x18 + lVar8 * 8);
                      if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
                         (dVar2 = *(double *)(lVar7 + lVar8 * 8),
                         pdVar1 = (double *)(param_2 + 0x18 + lVar8 * 8),
                         *pdVar1 <= dVar2 && dVar2 != *pdVar1)) goto LAB_146caa528;
                      lVar8 = lVar8 + 1;
                    } while (lVar8 != 3);
                    local_b4 = *(uint *)(lVar7 + 0x30);
                    cVar5 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_b4)
                    ;
                    if (cVar5 == '\0') {
                      uVar12 = 0;
                      goto LAB_146caa5ac;
                    }
LAB_146caa528:
                    lVar7 = lVar7 + 0x50;
                    uVar15 = local_c8;
                    uVar17 = local_c0;
                    iVar10 = local_a8;
                  } while (lVar7 != lVar19);
                }
                uVar16 = (uint)uVar17;
                bVar3 = iVar9 < iVar10;
                iVar6 = local_ac;
                iVar9 = iVar9 + 1;
                uVar4 = local_c0;
              } while (bVar3);
            }
            uVar14 = (uint)uVar15;
            bVar3 = (int)uVar16 < iVar6;
            iVar9 = local_b0;
            uVar16 = uVar16 + 1;
            uVar17 = local_c8;
          } while (bVar3);
        }
        local_a4 = uVar14 + 1;
      } while ((int)uVar14 < iVar9);
    }
LAB_146caa5ac:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140d9cca6(&local_98);
  }
LAB_146caa383:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146caa3b3:
  uVar12 = 0;
  goto LAB_146caa383;
}



// FUNCTION 146caa5e2 FUN_146caa5e2 body=172 status=ok
// SIG undefined FUN_146caa5e2(void)

void FUN_146caa5e2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140c11858(param_1,iVar1);
    }
    if (uVar3 != 0) {
      puVar2 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1 + 0x30);
      do {
        puVar2[-5] = 0x7fefffffffffffff;
        puVar2[-4] = 0x7fefffffffffffff;
        puVar2[-3] = 0x7fefffffffffffff;
        puVar2[-2] = 0xffefffffffffffff;
        puVar2[-1] = 0xffefffffffffffff;
        *puVar2 = 0xffefffffffffffff;
        puVar2 = puVar2 + 7;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146caa690(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146caa690 FUN_146caa690 body=63 status=ok
// SIG undefined FUN_146caa690(void)

void FUN_146caa690(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146caa6d0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 146caa6d0 FUN_146caa6d0 body=109 status=ok
// SIG undefined FUN_146caa6d0(void)

ulonglong FUN_146caa6d0(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x38) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 146caa73e FUN_146caa73e body=104 status=ok
// SIG undefined FUN_146caa73e(void)

void FUN_146caa73e(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_140d03e72(param_2,param_1 + 2);
  return;
}



// FUNCTION 146caa7a6 FUN_146caa7a6 body=68 status=ok
// SIG undefined FUN_146caa7a6(void)

void FUN_146caa7a6(longlong param_1,undefined8 param_2)

{
  FUN_141724e7a(param_2,param_1);
  FUN_141724e7a(param_2,param_1 + 0x18);
  FUN_146caa7ea(param_2,param_1 + 0x30);
  FUN_141724e7a(param_2,param_1 + 0x40);
  return;
}



// FUNCTION 146caa7ea FUN_146caa7ea body=107 status=ok
// SIG undefined FUN_146caa7ea(void)

longlong * FUN_146caa7ea(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    puVar1 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,(undefined4 *)(param_2 + lVar2),4);
      }
      else {
        thunk_FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + lVar2) = *puVar1;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    lVar2 = lVar2 + 4;
  } while (lVar2 != 0xc);
  return param_1;
}



// FUNCTION 146caa855 FUN_146caa855 body=252 status=ok
// SIG undefined FUN_146caa855(void)

longlong * FUN_146caa855(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146ca7b54(param_2);
    }
    FUN_146caa954(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146c9c382(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146caa954 FUN_146caa954 body=143 status=ok
// SIG undefined FUN_146caa954(void)

void FUN_146caa954(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146caa9e4(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146caaa6a(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146caaaca(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146caa9e4 FUN_146caa9e4 body=132 status=ok
// SIG undefined FUN_146caa9e4(void)

void FUN_146caa9e4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146caaa6a FUN_146caaa6a body=95 status=ok
// SIG undefined FUN_146caaa6a(void)

void FUN_146caaa6a(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146ca58ed(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146caaaca FUN_146caaaca body=63 status=ok
// SIG undefined FUN_146caaaca(void)

void FUN_146caaaca(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146caab0a(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146caab0a FUN_146caab0a body=97 status=ok
// SIG undefined FUN_146caab0a(void)

ulonglong FUN_146caab0a(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146caab6c FUN_146caab6c body=172 status=ok
// SIG undefined FUN_146caab6c(void)

void FUN_146caab6c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_146caac1a(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x50 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0x7fefffffffffffff;
      puVar2[1] = 0x7fefffffffffffff;
      puVar2[2] = 0x7fefffffffffffff;
      puVar2[3] = 0xffefffffffffffff;
      puVar2[4] = 0xffefffffffffffff;
      puVar2[5] = 0xffefffffffffffff;
      puVar2 = puVar2 + 10;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146caacae(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146caac1a FUN_146caac1a body=147 status=ok
// SIG undefined FUN_146caac1a(void)

void FUN_146caac1a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x50,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146caacae FUN_146caacae body=63 status=ok
// SIG undefined FUN_146caacae(void)

void FUN_146caacae(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146caacee(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x50,8);
  }
  return;
}



// FUNCTION 146caacee FUN_146caacee body=117 status=ok
// SIG undefined FUN_146caacee(void)

ulonglong FUN_146caacee(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x50) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x50,8);
      uVar1 = uVar1 / 0x50;
    }
  }
  return uVar1;
}



// FUNCTION 146caad64 FUN_146caad64 body=125 status=ok
// SIG undefined FUN_146caad64(void)

void FUN_146caad64(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_140d03e72(param_2,param_1);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x30),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146caa7ea(param_2,param_1 + 0x34);
  FUN_146caa7ea(param_2,param_1 + 0x40);
  return;
}



// FUNCTION 146caade2 FUN_146caade2 body=212 status=ok
// SIG undefined FUN_146caade2(void)

void FUN_146caade2(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    local_48 = 0;
    uStack_40 = 0;
    FUN_1406276ca(param_2,&local_48);
    lVar2 = local_48;
    lVar3 = (longlong)(int)uStack_40;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        iVar1 = *(int *)(lVar2 + lVar4);
        if ((int)param_1[1] <= iVar1) {
          FUN_146ca7c98(param_1,(iVar1 - (int)param_1[1]) + 1);
        }
        *(undefined1 *)(*param_1 + 0x20 + (longlong)iVar1 * 0x24) = 1;
        FUN_146caaeb8((longlong)iVar1 * 0x24 + *param_1,param_2);
        lVar4 = lVar4 + 4;
      } while (lVar3 * 4 != lVar4);
    }
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146caaeb8 FUN_146caaeb8 body=185 status=ok
// SIG undefined FUN_146caaeb8(void)

void FUN_146caaeb8(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[1] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_146caa7ea(param_2,param_1 + 2);
  FUN_146caa7ea(param_2,param_1 + 5);
  return;
}



// FUNCTION 146caaf72 FUN_146caaf72 body=98 status=ok
// SIG undefined FUN_146caaf72(void)

void FUN_146caaf72(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
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



// FUNCTION 146caafd4 FUN_146caafd4 body=109 status=ok
// SIG undefined FUN_146caafd4(void)

void FUN_146caafd4(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  
  if (param_3 != 0) {
    piVar3 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar3;
      uVar2 = *(undefined8 *)(piVar3 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_146cab042(param_1,iVar1,0);
        FUN_146cab0a4(*param_1,uVar2);
      }
      param_1 = param_1 + 2;
      piVar3 = piVar3 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146cab042 FUN_146cab042 body=98 status=ok
// SIG undefined FUN_146cab042(void)

void FUN_146cab042(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 7,8);
    iVar1 = (int)(uVar2 >> 7);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x80,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 146cab0a4 FUN_146cab0a4 body=78 status=ok
// SIG undefined FUN_146cab0a4(void)

void FUN_146cab0a4(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_3 != 0) {
    lVar5 = 0;
    do {
      puVar3 = (undefined8 *)(param_2 + lVar5);
      puVar4 = (undefined8 *)(param_1 + 0x30 + lVar5);
      puVar4[-4] = puVar3[2];
      uVar1 = puVar3[1];
      puVar4[-6] = *puVar3;
      puVar4[-5] = uVar1;
      uVar1 = puVar3[4];
      puVar4[-3] = puVar3[3];
      puVar4[-2] = uVar1;
      puVar4[-1] = puVar3[5];
      puVar3 = puVar3 + 6;
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar5 = lVar5 + 0x80;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146cab0f2 FUN_146cab0f2 body=95 status=ok
// SIG undefined FUN_146cab0f2(void)

undefined8 * FUN_146cab0f2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_146ca597f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_146caaf72(param_1,iVar1);
      FUN_146caafd4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 146cab152 FUN_146cab152 body=80 status=ok
// SIG undefined FUN_146cab152(void)

longlong * FUN_146cab152(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_146ca597f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 146cab1a2 FUN_146cab1a2 body=1332 status=ok
// SIG undefined FUN_146cab1a2(void)

void FUN_146cab1a2(longlong param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  double *pdVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  double dVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  uint uVar19;
  undefined1 auStack_148 [40];
  ulonglong local_120;
  ulonglong local_118;
  longlong *local_110;
  longlong local_108;
  ulonglong local_100;
  uint local_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_b4 [4];
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_110 = param_3;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar18 = *(longlong **)(param_1 + 0x10);
    plVar17 = plVar18 + (longlong)*(int *)(param_1 + 0x18) * 0xd;
    do {
      lVar10 = -3;
      do {
        dVar5 = *(double *)(param_2 + 0x18 + lVar10 * 8);
        if (((double)plVar18[lVar10 + 0xd] <= dVar5 && dVar5 != (double)plVar18[lVar10 + 0xd]) ||
           (pdVar2 = (double *)(param_2 + 0x30 + lVar10 * 8),
           *pdVar2 <= (double)plVar18[lVar10 + 10] && (double)plVar18[lVar10 + 10] != *pdVar2))
        goto LAB_146cab2aa;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0);
      uStack_68 = (undefined4)plVar18[6];
      iStack_64 = (int)((ulonglong)plVar18[6] >> 0x20);
      local_98 = *plVar18;
      uStack_90 = plVar18[1];
      local_88 = (undefined4)plVar18[2];
      uStack_84 = *(undefined4 *)((longlong)plVar18 + 0x14);
      uStack_80 = (undefined4)plVar18[3];
      uStack_7c = *(undefined4 *)((longlong)plVar18 + 0x1c);
      local_78 = plVar18[4];
      uStack_70 = (undefined4)plVar18[5];
      uStack_6c = *(undefined4 *)((longlong)plVar18 + 0x2c);
      plVar6 = (longlong *)*local_110;
      iVar11 = (int)plVar6[1];
      *(uint *)(plVar6 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar6 + 0xc) < iVar11 + 1U) {
        FUN_140187932(plVar6,iVar11);
      }
      lVar10 = *plVar6;
      lVar13 = (longlong)iVar11 * 0x38;
      *(ulonglong *)(lVar10 + 0x30 + lVar13) = CONCAT44(iStack_64,uStack_68);
      puVar3 = (undefined4 *)(lVar10 + 0x20 + lVar13);
      *puVar3 = (undefined4)local_78;
      puVar3[1] = local_78._4_4_;
      puVar3[2] = uStack_70;
      puVar3[3] = uStack_6c;
      puVar3 = (undefined4 *)(lVar10 + 0x10 + lVar13);
      *puVar3 = local_88;
      puVar3[1] = uStack_84;
      puVar3[2] = uStack_80;
      puVar3[3] = uStack_7c;
      puVar3 = (undefined4 *)(lVar10 + lVar13);
      *puVar3 = (undefined4)local_98;
      puVar3[1] = local_98._4_4_;
      puVar3[2] = (int)uStack_90;
      puVar3[3] = uStack_90._4_4_;
LAB_146cab2aa:
      plVar18 = plVar18 + 0xd;
    } while (plVar18 != plVar17);
  }
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x98);
    lVar13 = (longlong)*(int *)(param_1 + 0xa0) * 0x80 + lVar10;
    do {
      lVar14 = 0;
      do {
        dVar5 = *(double *)(param_2 + lVar14 * 8);
        pdVar2 = (double *)(lVar10 + 0x18 + lVar14 * 8);
        if ((*pdVar2 <= dVar5 && dVar5 != *pdVar2) ||
           (dVar5 = *(double *)(lVar10 + lVar14 * 8),
           pdVar2 = (double *)(param_2 + 0x18 + lVar14 * 8), *pdVar2 <= dVar5 && dVar5 != *pdVar2))
        goto LAB_146cab396;
        lVar14 = lVar14 + 1;
      } while (lVar14 != 3);
      uStack_68 = (undefined4)*(undefined8 *)(lVar10 + 0x60);
      iStack_64 = (int)((ulonglong)*(undefined8 *)(lVar10 + 0x60) >> 0x20);
      local_98 = *(longlong *)(lVar10 + 0x30);
      uStack_90 = *(longlong *)(lVar10 + 0x38);
      local_88 = *(undefined4 *)(lVar10 + 0x40);
      uStack_84 = *(undefined4 *)(lVar10 + 0x44);
      uStack_80 = *(undefined4 *)(lVar10 + 0x48);
      uStack_7c = *(undefined4 *)(lVar10 + 0x4c);
      local_78 = *(longlong *)(lVar10 + 0x50);
      uStack_70 = *(undefined4 *)(lVar10 + 0x58);
      uStack_6c = *(undefined4 *)(lVar10 + 0x5c);
      plVar18 = (longlong *)*local_110;
      iVar11 = (int)plVar18[1];
      *(uint *)(plVar18 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar18 + 0xc) < iVar11 + 1U) {
        FUN_140187932(plVar18,iVar11);
      }
      lVar14 = *plVar18;
      lVar15 = (longlong)iVar11 * 0x38;
      *(ulonglong *)(lVar14 + 0x30 + lVar15) = CONCAT44(iStack_64,uStack_68);
      puVar3 = (undefined4 *)(lVar14 + 0x20 + lVar15);
      *puVar3 = (undefined4)local_78;
      puVar3[1] = local_78._4_4_;
      puVar3[2] = uStack_70;
      puVar3[3] = uStack_6c;
      puVar3 = (undefined4 *)(lVar14 + 0x10 + lVar15);
      *puVar3 = local_88;
      puVar3[1] = uStack_84;
      puVar3[2] = uStack_80;
      puVar3[3] = uStack_7c;
      puVar3 = (undefined4 *)(lVar14 + lVar15);
      *puVar3 = (undefined4)local_98;
      puVar3[1] = local_98._4_4_;
      puVar3[2] = (int)uStack_90;
      puVar3[3] = uStack_90._4_4_;
LAB_146cab396:
      lVar10 = lVar10 + 0x80;
    } while (lVar10 != lVar13);
  }
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_146c9c584(param_1 + 0x20,&local_a4,param_2);
    FUN_146c9c584(param_1 + 0x20,&local_b0,param_2 + 0x18);
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_6c = 0x80;
    uStack_68 = 0xffffffff;
    iStack_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    local_120 = (ulonglong)local_a4;
    if ((int)local_a4 <= local_b0) {
      iVar11 = local_b0;
      iVar8 = local_ac;
      local_108 = param_1;
      do {
        local_118 = (ulonglong)local_a0;
        iVar12 = local_a8;
        if ((int)local_a0 <= iVar8) {
          do {
            uVar9 = local_9c;
            if ((int)local_9c <= iVar12) {
              do {
                lVar10 = (longlong)
                         (int)((*(int *)(param_1 + 0x7c) * (int)local_120 + (int)local_118) *
                               *(int *)(param_1 + 0x80) + uVar9) * 0x10;
                lVar13 = (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 8 + lVar10);
                uVar19 = uVar9;
                if (lVar13 != 0) {
                  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x88) + lVar10);
                  lVar13 = lVar13 * 0x80 + lVar10;
                  local_100 = (ulonglong)uVar9;
                  do {
                    uVar9 = *(uint *)(lVar10 + 0x40);
                    if ((int)uStack_90 != iStack_64) {
                      puVar16 = local_58;
                      if (local_58 == (undefined1 *)0x0) {
                        puVar16 = local_60;
                      }
                      for (iVar11 = *(int *)(puVar16 + (ulonglong)(local_50 - 1U & uVar9) * 4);
                          iVar11 != -1; iVar11 = *(int *)(local_98 + (longlong)iVar11 * 0xc + 4)) {
                        if (*(uint *)(local_98 + (longlong)iVar11 * 0xc) == uVar9)
                        goto LAB_146cab5f2;
                      }
                    }
                    local_f8 = uVar9;
                    FUN_14079e2ee(&local_98,local_b4,&local_f8,0);
                    lVar14 = 0;
                    do {
                      dVar5 = *(double *)(param_2 + lVar14 * 8);
                      pdVar2 = (double *)(lVar10 + 0x18 + lVar14 * 8);
                      if ((*pdVar2 <= dVar5 && dVar5 != *pdVar2) ||
                         (dVar5 = *(double *)(lVar10 + lVar14 * 8),
                         pdVar2 = (double *)(param_2 + 0x18 + lVar14 * 8),
                         *pdVar2 <= dVar5 && dVar5 != *pdVar2)) goto LAB_146cab5f2;
                      lVar14 = lVar14 + 1;
                    } while (lVar14 != 3);
                    local_c8 = *(undefined8 *)(lVar10 + 0x60);
                    local_f8 = *(uint *)(lVar10 + 0x30);
                    uStack_f4 = *(uint *)(lVar10 + 0x34);
                    uStack_f0 = *(uint *)(lVar10 + 0x38);
                    uStack_ec = *(uint *)(lVar10 + 0x3c);
                    local_e8 = *(undefined4 *)(lVar10 + 0x40);
                    uStack_e4 = *(undefined4 *)(lVar10 + 0x44);
                    uStack_e0 = *(undefined4 *)(lVar10 + 0x48);
                    uStack_dc = *(undefined4 *)(lVar10 + 0x4c);
                    local_d8 = *(undefined4 *)(lVar10 + 0x50);
                    uStack_d4 = *(undefined4 *)(lVar10 + 0x54);
                    uStack_d0 = *(undefined4 *)(lVar10 + 0x58);
                    uStack_cc = *(undefined4 *)(lVar10 + 0x5c);
                    plVar18 = (longlong *)*local_110;
                    iVar11 = (int)plVar18[1];
                    *(uint *)(plVar18 + 1) = iVar11 + 1U;
                    if (*(uint *)((longlong)plVar18 + 0xc) < iVar11 + 1U) {
                      FUN_140187932(plVar18,iVar11);
                    }
                    lVar14 = *plVar18;
                    lVar15 = (longlong)iVar11 * 0x38;
                    *(undefined8 *)(lVar14 + 0x30 + lVar15) = local_c8;
                    puVar4 = (undefined8 *)(lVar14 + 0x20 + lVar15);
                    *puVar4 = CONCAT44(uStack_d4,local_d8);
                    puVar4[1] = CONCAT44(uStack_cc,uStack_d0);
                    puVar4 = (undefined8 *)(lVar14 + 0x10 + lVar15);
                    *puVar4 = CONCAT44(uStack_e4,local_e8);
                    puVar4[1] = CONCAT44(uStack_dc,uStack_e0);
                    puVar1 = (uint *)(lVar14 + lVar15);
                    *puVar1 = local_f8;
                    puVar1[1] = uStack_f4;
                    puVar1[2] = uStack_f0;
                    puVar1[3] = uStack_ec;
LAB_146cab5f2:
                    lVar10 = lVar10 + 0x80;
                  } while (lVar10 != lVar13);
                  uVar19 = (uint)local_100;
                  param_1 = local_108;
                  iVar12 = local_a8;
                }
                uVar9 = uVar19 + 1;
                iVar8 = local_ac;
              } while ((int)uVar19 < iVar12);
            }
            iVar7 = (int)local_118;
            local_118 = (ulonglong)(iVar7 + 1);
            iVar11 = local_b0;
          } while (iVar7 < iVar8);
        }
        iVar12 = (int)local_120;
        local_120 = (ulonglong)(iVar12 + 1);
      } while (iVar12 < iVar11);
      local_50 = 0;
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    FUN_140d9cca6(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cab6d8 FUN_146cab6d8 body=96 status=ok
// SIG undefined FUN_146cab6d8(void)

void FUN_146cab6d8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 146cab738 FUN_146cab738 body=96 status=ok
// SIG undefined FUN_146cab738(void)

void FUN_146cab738(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 7,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,8);
  }
  return;
}



// FUNCTION 146cab798 FUN_146cab798 body=113 status=ok
// SIG undefined FUN_146cab798(void)

void FUN_146cab798(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x24,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x24)) {
      uVar2 = uVar1 / 0x24 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x24,4);
  }
  return;
}



// FUNCTION 146cab80a FUN_146cab80a body=69 status=ok
// SIG undefined FUN_146cab80a(void)

int FUN_146cab80a(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_146cabc90(param_1,iVar1);
  }
  FUN_146cab84f((longlong)iVar1 * 0x24 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 146cab84f FUN_146cab84f body=1088 status=ok
// SIG undefined FUN_146cab84f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cab84f(longlong param_1,uint param_2)

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
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  longlong lVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar39 [16];
  
  auVar14 = _DAT_149931e80;
  if (param_2 != 0) {
    lVar16 = (ulonglong)param_2 - 1;
    auVar18._8_4_ = (int)lVar16;
    auVar18._0_8_ = lVar16;
    auVar18._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
    puVar15 = (undefined1 *)(param_1 + 0x20);
    uVar17 = 0;
    auVar19 = pmovsxbq(in_XMM1,0xf0e);
    auVar20 = pmovsxbq(in_XMM2,0xd0c);
    auVar21 = pmovsxbq(in_XMM3,0xb0a);
    auVar22 = pmovsxbq(in_XMM4,0x908);
    auVar23 = pmovsxbq(in_XMM5,0x706);
    auVar24 = pmovsxbq(unaff_XMM6,0x504);
    auVar25 = pmovsxbq(unaff_XMM7,0x302);
    auVar26 = pmovsxbq(unaff_XMM8,0x100);
    do {
      auVar27._8_4_ = (int)uVar17;
      auVar27._0_8_ = uVar17;
      auVar27._12_4_ = (int)(uVar17 >> 0x20);
      auVar29 = auVar18 ^ auVar14;
      auVar31 = (auVar27 | auVar26) ^ auVar14;
      lVar16 = auVar29._0_8_;
      auVar32._0_8_ = -(ulonglong)(lVar16 < auVar31._0_8_);
      lVar30 = auVar29._8_8_;
      auVar32._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar39 = pshuflw(unaff_XMM14,auVar32,0xe8);
      auVar31._8_4_ = 0xffffffff;
      auVar31._0_8_ = 0xffffffffffffffff;
      auVar31._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar39 ^ auVar31,auVar39 ^ auVar31);
      if ((auVar31._0_4_ & 1) != 0) {
        *puVar15 = 0;
      }
      auVar32 = packssdw(auVar32,auVar32);
      auVar39._8_4_ = 0xffffffff;
      auVar39._0_8_ = 0xffffffffffffffff;
      auVar39._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar39,auVar32 ^ auVar39);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[1] & 1) != 0) {
        puVar15[0x24] = 0;
      }
      auVar32 = (auVar27 | auVar25) ^ auVar14;
      auVar33._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar33._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar33);
      auVar1._8_4_ = 0xffffffff;
      auVar1._0_8_ = 0xffffffffffffffff;
      auVar1._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar1,auVar31 ^ auVar1);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[2] & 1) != 0) {
        puVar15[0x48] = 0;
      }
      auVar32 = pshufhw(auVar33,auVar33,0x84);
      auVar2._8_4_ = 0xffffffff;
      auVar2._0_8_ = 0xffffffffffffffff;
      auVar2._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar2,auVar32 ^ auVar2);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[3] & 1) != 0) {
        puVar15[0x6c] = 0;
      }
      auVar32 = (auVar27 | auVar24) ^ auVar14;
      auVar34._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar34._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar34,0xe8);
      auVar3._8_4_ = 0xffffffff;
      auVar3._0_8_ = 0xffffffffffffffff;
      auVar3._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar3,auVar31 ^ auVar3);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[4] & 1) != 0) {
        puVar15[0x90] = 0;
      }
      auVar32 = packssdw(auVar34,auVar34);
      auVar4._8_4_ = 0xffffffff;
      auVar4._0_8_ = 0xffffffffffffffff;
      auVar4._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar4,auVar32 ^ auVar4);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[5] & 1) != 0) {
        puVar15[0xb4] = 0;
      }
      auVar32 = (auVar27 | auVar23) ^ auVar14;
      auVar35._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar35._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar35);
      auVar5._8_4_ = 0xffffffff;
      auVar5._0_8_ = 0xffffffffffffffff;
      auVar5._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar5,auVar31 ^ auVar5);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[6] & 1) != 0) {
        puVar15[0xd8] = 0;
      }
      auVar32 = pshufhw(auVar35,auVar35,0x84);
      auVar6._8_4_ = 0xffffffff;
      auVar6._0_8_ = 0xffffffffffffffff;
      auVar6._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar6,auVar32 ^ auVar6);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[7] & 1) != 0) {
        puVar15[0xfc] = 0;
      }
      auVar32 = (auVar27 | auVar22) ^ auVar14;
      auVar36._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar36._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar36,0xe8);
      auVar7._8_4_ = 0xffffffff;
      auVar7._0_8_ = 0xffffffffffffffff;
      auVar7._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar7,auVar31 ^ auVar7);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[8] & 1) != 0) {
        puVar15[0x120] = 0;
      }
      auVar32 = packssdw(auVar36,auVar36);
      auVar8._8_4_ = 0xffffffff;
      auVar8._0_8_ = 0xffffffffffffffff;
      auVar8._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar8,auVar32 ^ auVar8);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[9] & 1) != 0) {
        puVar15[0x144] = 0;
      }
      auVar32 = (auVar27 | auVar21) ^ auVar14;
      auVar37._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar37._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = packssdw(auVar31,auVar37);
      auVar9._8_4_ = 0xffffffff;
      auVar9._0_8_ = 0xffffffffffffffff;
      auVar9._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar9,auVar31 ^ auVar9);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[10] & 1) != 0) {
        puVar15[0x168] = 0;
      }
      auVar32 = pshufhw(auVar37,auVar37,0x84);
      auVar10._8_4_ = 0xffffffff;
      auVar10._0_8_ = 0xffffffffffffffff;
      auVar10._12_4_ = 0xffffffff;
      auVar32 = packssdw(auVar32 ^ auVar10,auVar32 ^ auVar10);
      auVar32 = packsswb(auVar32,auVar32);
      if ((auVar32[0xb] & 1) != 0) {
        puVar15[0x18c] = 0;
      }
      auVar32 = (auVar27 | auVar20) ^ auVar14;
      auVar38._0_8_ = -(ulonglong)(lVar16 < auVar32._0_8_);
      auVar38._8_8_ = -(ulonglong)(lVar30 < auVar32._8_8_);
      auVar31 = pshuflw(auVar31,auVar38,0xe8);
      auVar11._8_4_ = 0xffffffff;
      auVar11._0_8_ = 0xffffffffffffffff;
      auVar11._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar11,auVar31 ^ auVar11);
      unaff_XMM14 = packsswb(auVar31,auVar31);
      if ((unaff_XMM14[0xc] & 1) != 0) {
        puVar15[0x1b0] = 0;
      }
      auVar31 = packssdw(auVar38,auVar38);
      auVar12._8_4_ = 0xffffffff;
      auVar12._0_8_ = 0xffffffffffffffff;
      auVar12._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar12,auVar31 ^ auVar12);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xd] & 1) != 0) {
        puVar15[0x1d4] = 0;
      }
      auVar31 = (auVar27 | auVar19) ^ auVar14;
      auVar28._0_8_ = -(ulonglong)(lVar16 < auVar31._0_8_);
      auVar28._8_8_ = -(ulonglong)(lVar30 < auVar31._8_8_);
      auVar31 = packssdw(auVar29,auVar28);
      auVar29._8_4_ = 0xffffffff;
      auVar29._0_8_ = 0xffffffffffffffff;
      auVar29._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar29,auVar31 ^ auVar29);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xe] & 1) != 0) {
        puVar15[0x1f8] = 0;
      }
      auVar31 = pshufhw(auVar28,auVar28,0x84);
      auVar13._8_4_ = 0xffffffff;
      auVar13._0_8_ = 0xffffffffffffffff;
      auVar13._12_4_ = 0xffffffff;
      auVar31 = packssdw(auVar31 ^ auVar13,auVar31 ^ auVar13);
      auVar31 = packsswb(auVar31,auVar31);
      if ((auVar31[0xf] & 1) != 0) {
        puVar15[0x21c] = 0;
      }
      uVar17 = uVar17 + 0x10;
      puVar15 = puVar15 + 0x240;
    } while (((ulonglong)param_2 + 0xf & 0xfffffffffffffff0) != uVar17);
  }
  return;
}



// FUNCTION 146cabc90 FUN_146cabc90 body=147 status=ok
// SIG undefined FUN_146cabc90(void)

void FUN_146cabc90(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x24,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x24)) {
      uVar5 = uVar4 / 0x24 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x24,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cabd24 FUN_146cabd24 body=2978 status=ok
// SIG undefined FUN_146cabd24(void)

ulonglong FUN_146cabd24(longlong param_1,double *param_2,longlong param_3,undefined8 *param_4,
                       double *param_5,longlong param_6,longlong param_7)

{
  byte *pbVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  void *_Dst;
  uint uVar12;
  int iVar13;
  double *pdVar14;
  uint uVar15;
  double *pdVar16;
  int iVar18;
  uint uVar19;
  size_t _Size;
  longlong lVar20;
  double *pdVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  int local_17c;
  int local_178;
  undefined4 local_174;
  double *local_170;
  int local_164;
  int local_160;
  uint local_15c;
  double *local_158;
  longlong local_150;
  undefined8 *local_148;
  double *local_140;
  ulonglong local_138;
  int local_12c [3];
  double local_120 [6];
  double dStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double local_c8 [3];
  ulonglong local_b0;
  undefined7 uVar17;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_188 = param_1;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    pdVar16 = *(double **)(param_1 + 0x10);
    pdVar14 = pdVar16 + (longlong)*(int *)(param_1 + 0x18) * 0xd;
    do {
      cVar8 = FUN_14473ffaa(pdVar16,param_4);
      if (cVar8 == '\0') {
        local_120[3] = pdVar16[7] - *param_2;
        local_120[4] = pdVar16[8] - param_2[1];
        local_120[5] = pdVar16[9] - param_2[2];
        local_c8[0] = pdVar16[10] - *param_2;
        local_c8[1] = pdVar16[0xb] - param_2[1];
        local_c8[2] = pdVar16[0xc] - param_2[2];
        uVar25 = 0;
        uVar26 = 0;
        lVar11 = 0;
        dVar23 = 1.79769313486232e+308;
        do {
          if (*(char *)(param_7 + lVar11) == '\x01') {
            if (0.0 < local_120[lVar11 + 3]) goto LAB_146cabde1;
            dVar27 = 0.0;
            dVar24 = 1.79769313486232e+308;
            if (local_c8[lVar11] <= 0.0 && local_c8[lVar11] != 0.0) goto LAB_146cabde1;
          }
          else {
            dVar24 = *(double *)(param_6 + lVar11 * 8);
            dVar27 = local_120[lVar11 + 3] * dVar24;
            dVar24 = dVar24 * local_c8[lVar11];
          }
          dVar29 = dVar24;
          if (dVar27 <= dVar24) {
            dVar29 = dVar27;
          }
          if ((double)CONCAT44(uVar26,uVar25) <= dVar29) {
            uVar25 = SUB84(dVar29,0);
            uVar26 = (undefined4)((ulonglong)dVar29 >> 0x20);
          }
          if (dVar27 <= dVar24) {
            dVar27 = dVar24;
          }
          if (dVar27 <= dVar23) {
            dVar23 = dVar27;
          }
          if (dVar23 <= (double)CONCAT44(uVar26,uVar25) && (double)CONCAT44(uVar26,uVar25) != dVar23
             ) goto LAB_146cabde1;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        if (((double)CONCAT44(uVar26,uVar25) < *(double *)(param_3 + 0x20) ||
             (double)CONCAT44(uVar26,uVar25) == *(double *)(param_3 + 0x20)) && (0.0 <= dVar23)) {
          local_d8 = pdVar16[6];
          local_120[3] = *pdVar16;
          local_120[4] = pdVar16[1];
          local_120[5] = pdVar16[2];
          dStack_f0 = pdVar16[3];
          local_e8 = *(undefined4 *)(pdVar16 + 4);
          uStack_e4 = *(undefined4 *)((longlong)pdVar16 + 0x24);
          uStack_e0 = *(undefined4 *)(pdVar16 + 5);
          uStack_dc = *(undefined4 *)((longlong)pdVar16 + 0x2c);
          cVar8 = (**(code **)(*(longlong *)*param_4 + 0x10))
                            ((longlong *)*param_4,local_120 + 3,param_3);
          if (cVar8 == '\0') goto LAB_146cabf51;
        }
      }
LAB_146cabde1:
      pdVar16 = pdVar16 + 0xd;
    } while (pdVar16 != pdVar14);
  }
  pdVar16 = (double *)0x0;
  if ((longlong)*(int *)(local_188 + 0xa0) != 0) {
    pdVar14 = *(double **)(local_188 + 0x98);
    pdVar16 = pdVar14 + (longlong)*(int *)(local_188 + 0xa0) * 0x10;
    do {
      cVar8 = FUN_14473ffaa(pdVar14 + 6,param_4);
      if (cVar8 == '\0') {
        local_120[3] = *pdVar14 - *param_2;
        local_120[4] = pdVar14[1] - param_2[1];
        local_120[5] = pdVar14[2] - param_2[2];
        local_c8[0] = pdVar14[3] - *param_2;
        local_c8[1] = pdVar14[4] - param_2[1];
        local_c8[2] = pdVar14[5] - param_2[2];
        uVar25 = 0;
        uVar26 = 0;
        lVar11 = 0;
        dVar23 = 1.79769313486232e+308;
        do {
          if (*(char *)(param_7 + lVar11) == '\x01') {
            if (0.0 < local_120[lVar11 + 3]) goto LAB_146cabf9f;
            dVar27 = 0.0;
            dVar24 = 1.79769313486232e+308;
            if (local_c8[lVar11] <= 0.0 && local_c8[lVar11] != 0.0) goto LAB_146cabf9f;
          }
          else {
            dVar24 = *(double *)(param_6 + lVar11 * 8);
            dVar27 = local_120[lVar11 + 3] * dVar24;
            dVar24 = dVar24 * local_c8[lVar11];
          }
          dVar29 = dVar24;
          if (dVar27 <= dVar24) {
            dVar29 = dVar27;
          }
          if ((double)CONCAT44(uVar26,uVar25) <= dVar29) {
            uVar25 = SUB84(dVar29,0);
            uVar26 = (undefined4)((ulonglong)dVar29 >> 0x20);
          }
          if (dVar27 <= dVar24) {
            dVar27 = dVar24;
          }
          if (dVar27 <= dVar23) {
            dVar23 = dVar27;
          }
          if (dVar23 <= (double)CONCAT44(uVar26,uVar25) && (double)CONCAT44(uVar26,uVar25) != dVar23
             ) goto LAB_146cabf9f;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        if (((double)CONCAT44(uVar26,uVar25) < *(double *)(param_3 + 0x20) ||
             (double)CONCAT44(uVar26,uVar25) == *(double *)(param_3 + 0x20)) && (0.0 <= dVar23)) {
          local_d8 = pdVar14[0xc];
          local_120[3] = pdVar14[6];
          local_120[4] = pdVar14[7];
          local_120[5] = pdVar14[8];
          dStack_f0 = pdVar14[9];
          local_e8 = *(undefined4 *)(pdVar14 + 10);
          uStack_e4 = *(undefined4 *)((longlong)pdVar14 + 0x54);
          uStack_e0 = *(undefined4 *)(pdVar14 + 0xb);
          uStack_dc = *(undefined4 *)((longlong)pdVar14 + 0x5c);
          cVar8 = (**(code **)(*(longlong *)*param_4 + 0x10))
                            ((longlong *)*param_4,local_120 + 3,param_3);
          if (cVar8 == '\0') goto LAB_146cabf51;
        }
      }
LAB_146cabf9f:
      pdVar14 = pdVar14 + 0x10;
    } while (pdVar14 != pdVar16);
  }
  uVar17 = (undefined7)((ulonglong)pdVar16 >> 8);
  pdVar16 = (double *)CONCAT71(uVar17,1);
  if ((*(char *)(local_188 + 0xc0) == '\0') &&
     (pdVar16 = (double *)CONCAT71(uVar17,1), *(int *)(local_188 + 0x90) != 0)) {
    dVar23 = param_2[2];
    dVar24 = *param_2;
    dVar27 = param_2[1];
    local_120[3] = *(double *)(local_188 + 0x20) - dVar24;
    local_120[4] = *(double *)(local_188 + 0x28) - dVar27;
    local_120[5] = *(double *)(local_188 + 0x30) - dVar23;
    local_c8[0] = *(double *)(local_188 + 0x38) - dVar24;
    local_c8[1] = *(double *)(local_188 + 0x40) - dVar27;
    local_c8[2] = *(double *)(local_188 + 0x48) - dVar23;
    lVar11 = 0;
    dVar29 = 1.79769313486232e+308;
    dVar28 = 0.0;
    do {
      if (*(char *)(param_7 + lVar11) == '\x01') {
        if ((0.0 < local_120[lVar11 + 3]) ||
           (dVar5 = 0.0, dVar2 = 1.79769313486232e+308,
           local_c8[lVar11] <= 0.0 && local_c8[lVar11] != 0.0)) goto LAB_146cac12d;
      }
      else {
        dVar2 = *(double *)(param_6 + lVar11 * 8);
        dVar5 = local_120[lVar11 + 3] * dVar2;
        dVar2 = dVar2 * local_c8[lVar11];
      }
      dVar6 = dVar2;
      if (dVar5 <= dVar2) {
        dVar6 = dVar5;
      }
      if (dVar28 <= dVar6) {
        dVar28 = dVar6;
      }
      if (dVar5 <= dVar2) {
        dVar5 = dVar2;
      }
      if (dVar5 <= dVar29) {
        dVar29 = dVar5;
      }
      if (dVar29 < dVar28) goto LAB_146cac12d;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 3);
    if ((dVar28 <= *(double *)(param_3 + 0x20)) && (0.0 <= dVar29)) {
      local_120[2] = dVar23 + dVar28 * param_5[2];
      local_120[1] = dVar27 + param_5[1] * dVar28;
      local_120[0] = dVar24 + *param_5 * dVar28;
      FUN_146c9c584(local_188 + 0x20);
      local_178 = *(int *)(local_188 + 0x54);
      local_17c = *(int *)(local_188 + 0x58);
      local_164 = local_178 * local_17c;
      iVar9 = *(int *)(local_188 + 0x50) * local_164;
      iVar13 = iVar9 + 7;
      if (-1 < iVar9) {
        iVar13 = iVar9;
      }
      _Size = (size_t)((iVar13 >> 3) + 1);
      _Dst = (void *)FUN_144a7d36f(_Size);
      memset(_Dst,0,_Size);
      do {
        lVar11 = ((longlong)*(int *)(local_188 + 0x80) *
                  ((longlong)*(int *)(local_188 + 0x7c) * (longlong)local_12c[0] +
                  (longlong)local_12c[1]) + (longlong)local_12c[2]) * 0x10;
        lVar20 = (longlong)*(int *)(*(longlong *)(local_188 + 0x88) + 8 + lVar11);
        if (lVar20 != 0) {
          pdVar14 = *(double **)(*(longlong *)(local_188 + 0x88) + lVar11);
          pdVar21 = pdVar14 + lVar20 * 0x10;
          local_158 = pdVar21;
          local_150 = param_3;
          local_148 = param_4;
          do {
            pdVar16 = pdVar14 + 6;
            local_170 = pdVar14;
            cVar8 = FUN_14473ffaa(pdVar16,param_4);
            if (cVar8 == '\0') {
              uVar3 = *(uint *)(local_170 + 0xd);
              uVar15 = *(uint *)((longlong)local_170 + 0x74);
              if ((uVar3 == uVar15) &&
                 (iVar13 = *(int *)((longlong)local_170 + 0x6c), iVar13 == *(int *)(local_170 + 0xf)
                 )) {
                iVar9 = iVar13;
                if (*(int *)(local_170 + 0xe) != *(int *)((longlong)local_170 + 0x7c)) {
LAB_146cac5c1:
                  local_15c = uVar15;
                  if ((int)uVar15 < (int)uVar3) {
                    local_15c = uVar3;
                  }
                  iVar18 = (local_178 * uVar3 + iVar9) * local_17c;
                  local_174 = 0;
                  do {
                    local_138 = (ulonglong)uVar3;
                    if (iVar9 <= iVar13) {
                      iVar4 = *(int *)(local_170 + 0xe);
                      uVar15 = iVar4 + iVar18;
                      iVar7 = iVar9;
                      do {
                        iVar10 = (*(int *)((longlong)local_170 + 0x7c) - iVar4) + 1;
                        uVar12 = uVar15;
                        if (iVar4 <= *(int *)((longlong)local_170 + 0x7c)) {
                          do {
                            uVar19 = uVar12 + 7;
                            if (-1 < (int)uVar12) {
                              uVar19 = uVar12;
                            }
                            if ((*(byte *)((longlong)_Dst + (longlong)((int)uVar19 >> 3)) >>
                                 (uVar12 & 7) & 1) != 0) {
                              local_174 = (undefined4)CONCAT71((uint7)(uint3)((uint)iVar10 >> 8),1);
                              break;
                            }
                            uVar12 = uVar12 + 1;
                            iVar10 = iVar10 + -1;
                          } while (iVar10 != 0);
                        }
                        uVar15 = uVar15 + local_17c;
                        bVar22 = iVar7 != iVar13;
                        iVar7 = iVar7 + 1;
                      } while (bVar22);
                    }
                    iVar18 = iVar18 + local_164;
                    bVar22 = uVar3 != local_15c;
                    uVar3 = uVar3 + 1;
                  } while (bVar22);
                  param_4 = local_148;
                  param_3 = local_150;
                  pdVar21 = local_158;
                  local_160 = iVar9;
                  local_140 = pdVar16;
                  if ((char)local_174 != '\0') goto LAB_146cac412;
                }
              }
              else if ((int)uVar3 <= (int)uVar15) {
                iVar13 = *(int *)(local_170 + 0xf);
                iVar9 = *(int *)((longlong)local_170 + 0x6c);
                goto LAB_146cac5c1;
              }
              local_120[3] = *local_170 - *param_2;
              local_120[4] = local_170[1] - param_2[1];
              local_120[5] = local_170[2] - param_2[2];
              local_c8[0] = local_170[3] - *param_2;
              local_c8[1] = local_170[4] - param_2[1];
              local_c8[2] = local_170[5] - param_2[2];
              uVar25 = 0;
              uVar26 = 0;
              lVar11 = 0;
              dVar23 = 1.79769313486232e+308;
              do {
                if (*(char *)(param_7 + lVar11) == '\x01') {
                  if (0.0 < local_120[lVar11 + 3]) goto LAB_146cac412;
                  dVar27 = 0.0;
                  dVar24 = 1.79769313486232e+308;
                  if (local_c8[lVar11] <= 0.0 && local_c8[lVar11] != 0.0) goto LAB_146cac412;
                }
                else {
                  dVar24 = *(double *)(param_6 + lVar11 * 8);
                  dVar27 = local_120[lVar11 + 3] * dVar24;
                  dVar24 = dVar24 * local_c8[lVar11];
                }
                dVar29 = dVar24;
                if (dVar27 <= dVar24) {
                  dVar29 = dVar27;
                }
                if ((double)CONCAT44(uVar26,uVar25) <= dVar29) {
                  uVar25 = SUB84(dVar29,0);
                  uVar26 = (undefined4)((ulonglong)dVar29 >> 0x20);
                }
                if (dVar27 <= dVar24) {
                  dVar27 = dVar24;
                }
                if (dVar27 <= dVar23) {
                  dVar23 = dVar27;
                }
                if (dVar23 <= (double)CONCAT44(uVar26,uVar25) &&
                    (double)CONCAT44(uVar26,uVar25) != dVar23) goto LAB_146cac412;
                lVar11 = lVar11 + 1;
              } while (lVar11 != 3);
              if (((double)CONCAT44(uVar26,uVar25) < *(double *)(param_3 + 0x20) ||
                   (double)CONCAT44(uVar26,uVar25) == *(double *)(param_3 + 0x20)) &&
                 (0.0 <= dVar23)) {
                local_d8 = pdVar14[0xc];
                local_120[3] = *pdVar16;
                local_120[4] = pdVar14[7];
                local_120[5] = pdVar14[8];
                dStack_f0 = pdVar14[9];
                local_e8 = *(undefined4 *)(pdVar14 + 10);
                uStack_e4 = *(undefined4 *)((longlong)pdVar14 + 0x54);
                uStack_e0 = *(undefined4 *)(pdVar14 + 0xb);
                uStack_dc = *(undefined4 *)((longlong)pdVar14 + 0x5c);
                cVar8 = (**(code **)(*(longlong *)*param_4 + 0x10))
                                  ((longlong *)*param_4,local_120 + 3,param_3);
                if (cVar8 == '\0') goto LAB_146cac8c3;
              }
            }
LAB_146cac412:
            pdVar14 = local_170 + 0x10;
          } while (pdVar14 != pdVar21);
        }
        cVar8 = (**(code **)(*(longlong *)*param_4 + 0x40))();
        if (cVar8 != '\0') {
LAB_146cac8c3:
          pdVar16 = (double *)0x0;
          goto LAB_146cac8ad;
        }
        iVar13 = (local_12c[0] * local_178 + local_12c[1]) * local_17c;
        iVar9 = iVar13 + local_12c[2];
        iVar13 = iVar13 + local_12c[2] + 7;
        if (-1 < iVar9) {
          iVar13 = iVar9;
        }
        pbVar1 = (byte *)((longlong)_Dst + (longlong)(iVar13 >> 3));
        *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar9 & 7));
        local_120[3] = *(double *)(local_188 + 0x60) * 0.5 +
                       (double)local_12c[0] * *(double *)(local_188 + 0x60) +
                       *(double *)(local_188 + 0x20);
        local_120[4] = *(double *)(local_188 + 0x68) * 0.5 +
                       (double)local_12c[1] * *(double *)(local_188 + 0x68) +
                       *(double *)(local_188 + 0x28);
        local_120[5] = *(double *)(local_188 + 0x70) * 0.5 +
                       (double)local_12c[2] * *(double *)(local_188 + 0x70) +
                       *(double *)(local_188 + 0x30);
        bVar22 = true;
        lVar11 = 0;
        dVar23 = *(double *)(param_3 + 0x20);
        do {
          if (*(char *)(param_7 + lVar11) == '\0') {
            dVar24 = *(double *)(local_188 + 0x60 + lVar11 * 8) * 0.5;
            dVar24 = (((double)(~-(ulonglong)(0.0 < param_5[lVar11]) & (ulonglong)-dVar24 |
                               -(ulonglong)(0.0 < param_5[lVar11]) & (ulonglong)dVar24) +
                      local_120[lVar11 + 3]) - local_120[lVar11]) *
                     *(double *)(param_6 + lVar11 * 8);
            dVar27 = dVar24;
            if (dVar23 <= dVar24) {
              dVar27 = dVar23;
            }
            bVar22 = (bool)(bVar22 & dVar23 <= dVar24);
          }
          else {
            dVar24 = 1.79769313486232e+308;
            dVar27 = dVar23;
          }
          local_c8[lVar11] = dVar24;
          lVar11 = lVar11 + 1;
          dVar23 = dVar27;
        } while (lVar11 != 3);
        if (bVar22) goto LAB_146cac8aa;
        lVar11 = 0;
        do {
          iVar13 = 0;
          if (*(double *)((longlong)local_c8 + lVar11 * 2) <= dVar27 + 0.009999999776482582) {
            iVar13 = (uint)(0.0 < *(double *)((longlong)param_5 + lVar11 * 2)) * 2 + -1;
          }
          iVar13 = iVar13 + *(int *)((longlong)local_12c + lVar11);
          *(int *)((longlong)local_12c + lVar11) = iVar13;
          if ((iVar13 < 0) || (*(int *)(local_188 + 0x50 + lVar11) <= iVar13)) goto LAB_146cac8aa;
          lVar11 = lVar11 + 4;
        } while (lVar11 != 0xc);
        local_120[2] = param_5[2] * dVar27 + local_120[2];
        local_120[1] = param_5[1] * dVar27 + local_120[1];
        local_120[0] = dVar27 * *param_5 + local_120[0];
      } while( true );
    }
  }
LAB_146cac12d:
  if ((local_b0 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pdVar16 & 0xffffffff;
LAB_146cabf51:
  pdVar16 = (double *)0x0;
  goto LAB_146cac12d;
LAB_146cac8aa:
  pdVar16 = (double *)CONCAT71((int7)((ulonglong)pdVar16 >> 8),1);
LAB_146cac8ad:
  if (_Dst != (void *)0x0) {
    thunk_FUN_1400020a8(_Dst);
  }
  goto LAB_146cac12d;
}



// FUNCTION 146cac8c8 FUN_146cac8c8 body=5828 status=ok
// SIG undefined FUN_146cac8c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_146cac8c8(longlong param_1,double *param_2,longlong param_3,double *param_4,
                       undefined8 *param_5,double *param_6,longlong param_7,longlong param_8)

{
  byte *pbVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  void *_Dst;
  void *_Dst_00;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  int iVar19;
  int iVar20;
  size_t _Size;
  double *pdVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  double *pdVar26;
  bool bVar27;
  longlong lVar28;
  double *pdVar29;
  bool bVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_238 [32];
  longlong local_218;
  double local_210;
  int local_204;
  double local_200;
  int local_1f8;
  int local_1f4;
  longlong local_1f0;
  double *local_1e8;
  ulonglong local_1e0;
  ulonglong local_1d8;
  longlong local_1d0;
  int local_1c4;
  double *local_1c0;
  double *local_1b8;
  longlong local_1b0;
  double *local_1a8;
  double *local_1a0;
  int local_198 [4];
  int iStack_188;
  int local_184;
  undefined8 local_180;
  double local_178;
  double local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  double local_140 [3];
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_218 = param_1;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    pdVar21 = *(double **)(param_1 + 0x10);
    pdVar26 = pdVar21 + (longlong)*(int *)(param_1 + 0x18) * 0xd;
    do {
      cVar8 = FUN_14473ffaa(pdVar21,param_5);
      if (cVar8 == '\0') {
        local_128 = (pdVar21[7] - *param_4) - *param_2;
        uStack_120 = (pdVar21[8] - param_4[1]) - param_2[1];
        local_118 = (pdVar21[9] - param_4[2]) - param_2[2];
        local_140[0] = (*param_4 + pdVar21[10]) - *param_2;
        local_140[1] = (param_4[1] + pdVar21[0xb]) - param_2[1];
        local_140[2] = (param_4[2] + pdVar21[0xc]) - param_2[2];
        dVar33 = 0.0;
        lVar11 = 0;
        uVar31 = 0xffffffff;
        uVar32 = 0x7fefffff;
        do {
          if (*(char *)(param_8 + lVar11) == '\x01') {
            if (0.0 < (double)(&local_128)[lVar11]) goto LAB_146cac9b5;
            dVar34 = 0.0;
            dVar35 = 1.79769313486232e+308;
            if (local_140[lVar11] <= 0.0 && local_140[lVar11] != 0.0) goto LAB_146cac9b5;
          }
          else {
            dVar35 = *(double *)(param_7 + lVar11 * 8);
            dVar34 = (double)(&local_128)[lVar11] * dVar35;
            dVar35 = dVar35 * local_140[lVar11];
          }
          dVar18 = dVar35;
          if (dVar34 <= dVar35) {
            dVar18 = dVar34;
          }
          if (dVar33 <= dVar18) {
            dVar33 = dVar18;
          }
          if (dVar34 <= dVar35) {
            dVar34 = dVar35;
          }
          if (dVar34 <= (double)CONCAT44(uVar32,uVar31)) {
            uVar31 = SUB84(dVar34,0);
            uVar32 = (undefined4)((ulonglong)dVar34 >> 0x20);
          }
          if ((double)CONCAT44(uVar32,uVar31) <= dVar33 && dVar33 != (double)CONCAT44(uVar32,uVar31)
             ) goto LAB_146cac9b5;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        if ((dVar33 <= *(double *)(param_3 + 0x20)) &&
           (0.0 < (double)CONCAT44(uVar32,uVar31) || (double)CONCAT44(uVar32,uVar31) == 0.0)) {
          local_f8 = pdVar21[6];
          local_128 = *pdVar21;
          uStack_120 = pdVar21[1];
          local_118 = pdVar21[2];
          uStack_110 = *(undefined4 *)(pdVar21 + 3);
          uStack_10c = *(undefined4 *)((longlong)pdVar21 + 0x1c);
          local_108 = pdVar21[4];
          dStack_100 = pdVar21[5];
          cVar8 = (**(code **)(*(longlong *)*param_5 + 0x18))
                            ((longlong *)*param_5,&local_128,param_3);
          if (cVar8 == '\0') goto LAB_146cacb51;
        }
      }
LAB_146cac9b5:
      pdVar21 = pdVar21 + 0xd;
    } while (pdVar21 != pdVar26);
  }
  pdVar21 = (double *)0x0;
  if ((longlong)*(int *)(local_218 + 0xa0) != 0) {
    pdVar26 = *(double **)(local_218 + 0x98);
    pdVar21 = pdVar26 + (longlong)*(int *)(local_218 + 0xa0) * 0x10;
    do {
      cVar8 = FUN_14473ffaa(pdVar26 + 6,param_5);
      if (cVar8 == '\0') {
        local_128 = (*pdVar26 - *param_4) - *param_2;
        uStack_120 = (pdVar26[1] - param_4[1]) - param_2[1];
        local_118 = (pdVar26[2] - param_4[2]) - param_2[2];
        local_140[0] = (*param_4 + pdVar26[3]) - *param_2;
        local_140[1] = (param_4[1] + pdVar26[4]) - param_2[1];
        local_140[2] = (param_4[2] + pdVar26[5]) - param_2[2];
        dVar33 = 0.0;
        lVar11 = 0;
        uVar31 = 0xffffffff;
        uVar32 = 0x7fefffff;
        do {
          if (*(char *)(param_8 + lVar11) == '\x01') {
            if (0.0 < (double)(&local_128)[lVar11]) goto LAB_146cacbb4;
            dVar34 = 0.0;
            dVar35 = 1.79769313486232e+308;
            if (local_140[lVar11] <= 0.0 && local_140[lVar11] != 0.0) goto LAB_146cacbb4;
          }
          else {
            dVar35 = *(double *)(param_7 + lVar11 * 8);
            dVar34 = (double)(&local_128)[lVar11] * dVar35;
            dVar35 = dVar35 * local_140[lVar11];
          }
          dVar18 = dVar35;
          if (dVar34 <= dVar35) {
            dVar18 = dVar34;
          }
          if (dVar33 <= dVar18) {
            dVar33 = dVar18;
          }
          if (dVar34 <= dVar35) {
            dVar34 = dVar35;
          }
          if (dVar34 <= (double)CONCAT44(uVar32,uVar31)) {
            uVar31 = SUB84(dVar34,0);
            uVar32 = (undefined4)((ulonglong)dVar34 >> 0x20);
          }
          if ((double)CONCAT44(uVar32,uVar31) <= dVar33 && dVar33 != (double)CONCAT44(uVar32,uVar31)
             ) goto LAB_146cacbb4;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 3);
        if ((dVar33 <= *(double *)(param_3 + 0x20)) &&
           (0.0 < (double)CONCAT44(uVar32,uVar31) || (double)CONCAT44(uVar32,uVar31) == 0.0)) {
          local_f8 = pdVar26[0xc];
          local_128 = pdVar26[6];
          uStack_120 = pdVar26[7];
          local_118 = pdVar26[8];
          uStack_110 = *(undefined4 *)(pdVar26 + 9);
          uStack_10c = *(undefined4 *)((longlong)pdVar26 + 0x4c);
          local_108 = pdVar26[10];
          dStack_100 = pdVar26[0xb];
          cVar8 = (**(code **)(*(longlong *)*param_5 + 0x18))
                            ((longlong *)*param_5,&local_128,param_3);
          if (cVar8 == '\0') goto LAB_146cacb51;
        }
      }
LAB_146cacbb4:
      pdVar26 = pdVar26 + 0x10;
    } while (pdVar26 != pdVar21);
  }
  uVar23 = CONCAT71((int7)((ulonglong)pdVar21 >> 8),1);
  if (*(char *)(local_218 + 0xc0) != '\0') goto LAB_146cacd68;
  lVar11 = local_218 + 0x20;
  dVar33 = param_4[2];
  dVar35 = *(double *)(local_218 + 0x48);
  dVar34 = *param_4;
  dVar18 = param_4[1];
  dVar3 = *(double *)(local_218 + 0x40);
  dVar4 = *(double *)(local_218 + 0x38);
  dVar36 = *(double *)(local_218 + 0x30);
  dVar37 = *(double *)(local_218 + 0x20);
  dVar38 = *(double *)(local_218 + 0x28);
  local_118 = param_2[2] - dVar33;
  uStack_120 = param_2[1] - dVar18;
  local_128 = *param_2 - dVar34;
  FUN_146c9c584(lVar11,&local_14c,&local_128);
  local_118 = param_2[2] + param_4[2];
  uStack_120 = param_2[1] + param_4[1];
  local_128 = *param_2 + *param_4;
  FUN_146c9c584(lVar11,&local_158,&local_128);
  iVar13 = local_158;
  if ((local_14c == local_158) && (iVar13 = local_14c, local_148 == local_154)) {
    iVar15 = local_14c;
    iVar13 = local_14c;
    if (local_144 == local_150) {
      dVar39 = *(double *)(param_3 + 0x20);
      dVar7 = dVar39 * param_6[2] + param_2[2];
      local_210 = param_6[1] * dVar39 + param_2[1];
      local_200 = *param_6 * dVar39 + *param_2;
      local_118 = dVar7 - param_4[2];
      uStack_120 = local_210 - param_4[1];
      local_128 = local_200 - *param_4;
      FUN_146c9c584(lVar11,&local_180,&local_128);
      local_118 = dVar7 + param_4[2];
      uStack_120 = local_210 + param_4[1];
      local_128 = local_200 + *param_4;
      FUN_146c9c584(lVar11,&local_168,&local_128);
      iVar13 = local_158;
      if (((((local_14c == (int)local_180) && (local_148 == local_180._4_4_)) &&
           (local_144 == local_178._0_4_)) &&
          ((local_14c == (int)local_168 && (local_148 == local_168._4_4_)))) &&
         (local_144 == (int)uStack_160)) {
        lVar16 = (longlong)
                 ((local_14c * *(int *)(local_218 + 0x7c) + local_148) * *(int *)(local_218 + 0x80)
                 + local_144) * 0x10;
        lVar24 = (longlong)*(int *)(*(longlong *)(local_218 + 0x88) + 8 + lVar16);
        uVar23 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
        if (lVar24 != 0) {
          pdVar21 = *(double **)(*(longlong *)(local_218 + 0x88) + lVar16);
          pdVar26 = pdVar21 + lVar24 * 0x10;
          do {
            local_128 = (*pdVar21 - *param_4) - *param_2;
            uStack_120 = (pdVar21[1] - param_4[1]) - param_2[1];
            local_118 = (pdVar21[2] - param_4[2]) - param_2[2];
            local_140[0] = (*param_4 + pdVar21[3]) - *param_2;
            local_140[1] = (param_4[1] + pdVar21[4]) - param_2[1];
            local_140[2] = (param_4[2] + pdVar21[5]) - param_2[2];
            lVar11 = 0;
            dVar33 = 0.0;
            uVar31 = 0xffffffff;
            uVar32 = 0x7fefffff;
            do {
              if (*(char *)(param_8 + lVar11) == '\x01') {
                if (0.0 < (double)(&local_128)[lVar11]) goto LAB_146cad221;
                dVar34 = 0.0;
                dVar35 = 1.79769313486232e+308;
                if (local_140[lVar11] <= 0.0 && local_140[lVar11] != 0.0) goto LAB_146cad221;
              }
              else {
                dVar35 = *(double *)(param_7 + lVar11 * 8);
                dVar34 = (double)(&local_128)[lVar11] * dVar35;
                dVar35 = dVar35 * local_140[lVar11];
              }
              dVar18 = dVar35;
              if (dVar34 <= dVar35) {
                dVar18 = dVar34;
              }
              if (dVar33 <= dVar18) {
                dVar33 = dVar18;
              }
              if (dVar34 <= dVar35) {
                dVar34 = dVar35;
              }
              if (dVar34 <= (double)CONCAT44(uVar32,uVar31)) {
                uVar31 = SUB84(dVar34,0);
                uVar32 = (undefined4)((ulonglong)dVar34 >> 0x20);
              }
              if ((double)CONCAT44(uVar32,uVar31) <= dVar33 &&
                  dVar33 != (double)CONCAT44(uVar32,uVar31)) goto LAB_146cad221;
              lVar11 = lVar11 + 1;
            } while (lVar11 != 3);
            if ((dVar33 <= *(double *)(param_3 + 0x20)) &&
               (0.0 < (double)CONCAT44(uVar32,uVar31) || (double)CONCAT44(uVar32,uVar31) == 0.0)) {
              local_f8 = pdVar21[0xc];
              local_128 = pdVar21[6];
              uStack_120 = pdVar21[7];
              local_118 = pdVar21[8];
              uStack_110 = *(undefined4 *)(pdVar21 + 9);
              uStack_10c = *(undefined4 *)((longlong)pdVar21 + 0x4c);
              local_108 = pdVar21[10];
              dStack_100 = pdVar21[0xb];
              cVar8 = (**(code **)(*(longlong *)*param_5 + 0x18))
                                ((longlong *)*param_5,&local_128,param_3);
              if (cVar8 == '\0') {
                uVar23 = 0;
                break;
              }
            }
LAB_146cad221:
            pdVar21 = pdVar21 + 0x10;
          } while (pdVar21 != pdVar26);
        }
        uVar23 = uVar23 & 0xffffffff;
        goto LAB_146cacd68;
      }
      goto LAB_146cad239;
    }
  }
  else {
LAB_146cad239:
    iVar15 = local_14c;
  }
  local_1f4 = *(int *)(local_218 + 0x54);
  local_210 = (double)CONCAT44(local_210._4_4_,*(int *)(local_218 + 0x58));
  local_204 = *(int *)(local_218 + 0x58) * local_1f4;
  iVar9 = *(int *)(local_218 + 0x50) * local_204;
  iVar12 = iVar9 + 7;
  if (-1 < iVar9) {
    iVar12 = iVar9;
  }
  _Size = (size_t)((iVar12 >> 3) + 1);
  local_1f0 = param_3;
  local_1d0 = lVar11;
  local_1c0 = param_4;
  _Dst = (void *)FUN_144a7d36f(_Size);
  memset(_Dst,0,_Size);
  _Dst_00 = (void *)FUN_144a7d36f(_Size);
  memset(_Dst_00,0,_Size);
  local_168 = 0;
  uStack_160 = 0;
  local_1b8 = param_2;
  if (iVar15 <= iVar13) {
    uVar17 = iVar15 * local_1f4;
    iVar12 = local_154;
    do {
      if (local_148 <= iVar12) {
        iVar20 = (local_148 + uVar17) * local_210._0_4_;
        iVar13 = local_150;
        iVar9 = local_148;
        local_200 = (double)(ulonglong)uVar17;
        do {
          iVar19 = local_144;
          if (local_144 <= iVar13) {
            do {
              uVar23 = uStack_160;
              lVar11 = (longlong)(int)uStack_160;
              uVar17 = (int)uStack_160 + 1;
              uStack_160 = CONCAT44(uStack_160._4_4_,uVar17);
              if (uStack_160._4_4_ < uVar17) {
                FUN_146cadf8e(&local_168,uVar23 & 0xffffffff);
              }
              *(int *)(local_168 + lVar11 * 0x18) = iVar15;
              *(int *)(local_168 + 4 + lVar11 * 0x18) = iVar9;
              *(int *)(local_168 + 8 + lVar11 * 0x18) = iVar19;
              iVar12 = iVar20 + iVar19;
              iVar13 = iVar20 + 7 + iVar19;
              if (-1 < iVar12) {
                iVar13 = iVar12;
              }
              *(undefined8 *)(local_168 + 0x10 + lVar11 * 0x18) = 0;
              pbVar1 = (byte *)((longlong)_Dst + (longlong)(iVar13 >> 3));
              *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar12 & 7));
              bVar27 = iVar19 < local_150;
              iVar13 = local_150;
              iVar19 = iVar19 + 1;
              iVar12 = local_154;
            } while (bVar27);
          }
          iVar20 = iVar20 + local_210._0_4_;
          bVar27 = iVar9 < iVar12;
          iVar9 = iVar9 + 1;
        } while (bVar27);
        uVar17 = SUB84(local_200,0);
        param_2 = local_1b8;
        iVar13 = local_158;
      }
      uVar17 = uVar17 + local_1f4;
      bVar27 = iVar15 < iVar13;
      iVar15 = iVar15 + 1;
    } while (bVar27);
  }
  pdVar21 = local_1c0;
  lVar11 = local_1f0;
  dVar39 = param_2[2];
  dVar7 = *param_2;
  dVar5 = param_2[1];
  local_128 = (dVar37 - dVar34) - dVar7;
  uStack_120 = (dVar38 - dVar18) - dVar5;
  local_118 = (dVar36 - dVar33) - dVar39;
  local_140[0] = (dVar4 + dVar34) - dVar7;
  local_140[1] = (dVar3 + dVar18) - dVar5;
  local_140[2] = (dVar35 + dVar33) - dVar39;
  lVar16 = 0;
  dVar33 = 1.79769313486232e+308;
  dVar35 = 0.0;
  do {
    if (*(char *)(param_8 + lVar16) == '\x01') {
      if ((0.0 < (double)(&local_128)[lVar16]) ||
         (dVar18 = 0.0, dVar34 = 1.79769313486232e+308,
         local_140[lVar16] <= 0.0 && local_140[lVar16] != 0.0)) goto LAB_146cad4e5;
    }
    else {
      dVar34 = *(double *)(param_7 + lVar16 * 8);
      dVar18 = (double)(&local_128)[lVar16] * dVar34;
      dVar34 = dVar34 * local_140[lVar16];
    }
    dVar3 = dVar34;
    if (dVar18 <= dVar34) {
      dVar3 = dVar18;
    }
    if (dVar35 <= dVar3) {
      dVar35 = dVar3;
    }
    if (dVar18 <= dVar34) {
      dVar18 = dVar34;
    }
    if (dVar18 <= dVar33) {
      dVar33 = dVar18;
    }
    if (dVar33 < dVar35) goto LAB_146cad4e5;
    lVar16 = lVar16 + 1;
  } while (lVar16 != 3);
  if ((dVar35 <= *(double *)(local_1f0 + 0x20)) && (0.0 <= dVar33)) {
    local_170 = dVar39 + param_6[2] * dVar35;
    local_178 = dVar5 + param_6[1] * dVar35;
    local_180 = dVar7 + *param_6 * dVar35;
    FUN_146c9c584(local_1d0,local_198 + 3);
    uVar23 = uStack_160;
    iVar13 = iStack_188 * local_210._0_4_ + local_198[3] * local_204;
    uVar14 = iVar13 + local_184;
    uVar17 = local_184 + iVar13 + 7;
    if (-1 < (int)uVar14) {
      uVar17 = uVar14;
    }
    if ((*(byte *)((longlong)_Dst + (longlong)((int)uVar17 >> 3)) >> (uVar14 & 7) & 1) == 0) {
      uStack_120 = (double)CONCAT44(uStack_120._4_4_,local_184);
      local_128 = (double)CONCAT44(iStack_188,local_198[3]);
      lVar16 = (longlong)(int)uStack_160;
      uVar17 = (int)uStack_160 + 1;
      uStack_160 = CONCAT44(uStack_160._4_4_,uVar17);
      if (uStack_160._4_4_ < uVar17) {
        FUN_146cadf8e(&local_168,uVar23 & 0xffffffff);
      }
      puVar2 = (undefined4 *)(local_168 + lVar16 * 0x18);
      *puVar2 = (undefined4)local_128;
      puVar2[1] = local_128._4_4_;
      puVar2[2] = (undefined4)uStack_120;
      puVar2[3] = uStack_120._4_4_;
      *(double *)(local_168 + 0x10 + lVar16 * 0x18) = dVar35;
    }
    if (0 < (int)uStack_160) {
      dVar33 = *(double *)(local_218 + 0x70) * 0.5;
      dVar35 = *(double *)(local_218 + 0x68) * 0.5;
      dVar34 = *(double *)(local_218 + 0x60) * 0.5;
      lVar16 = 0;
      lVar24 = local_218;
      iVar13 = (int)uStack_160;
      do {
        dVar18 = *(double *)(local_168 + 0x10 + lVar16 * 0x18);
        if (dVar18 < *(double *)(lVar11 + 0x20) || dVar18 == *(double *)(lVar11 + 0x20)) {
          local_1f8 = *(int *)(local_168 + lVar16 * 0x18);
          local_1d8 = (ulonglong)*(uint *)(local_168 + 4 + lVar16 * 0x18);
          local_1e0 = (ulonglong)*(uint *)(local_168 + 8 + lVar16 * 0x18);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c992a18) && (FUN_144b3d300(), lVar24 = local_218, DAT_14c992a18 == -1)) {
            _DAT_14c9928e0 = 0xffffffffffffffff;
            _DAT_14c9928e8 = 0xffffffff;
            _DAT_14c9928f0 = 0xffffffffffffffff;
            uRam000000014c9928f8 = 0xffffffff00000001;
            _DAT_14c992900 = 0xffffffffffffffff;
            uRam000000014c992908 = 0xffffffff00000000;
            _DAT_14c992910 = 0;
            uRam000000014c992918 = 0x1ffffffff;
            _DAT_14c992920 = 0xffffffff00000000;
            uRam000000014c992928 = 0x1ffffffff;
            _DAT_14c992930 = 0xffffffff;
            uRam000000014c992938 = 0xffffffff00000001;
            _DAT_14c992940 = &DAT_100000001;
            uRam000000014c992948 = 0xffffffffffffffff;
            _DAT_14c992950 = 0xffffffff;
            uRam000000014c992958 = 0xffffffff00000000;
            _DAT_14c992960 = 0x100000000;
            uRam000000014c992968 = 0xffffffff;
            _DAT_14c992970 = 0xffffffff;
            uRam000000014c992974 = 0;
            uRam000000014c992978 = 0;
            uRam000000014c99297c = 1;
            _DAT_14c992980 = 0;
            uRam000000014c992988 = 0x1ffffffff;
            _DAT_14c992990 = 0;
            uRam000000014c992998 = 1;
            _DAT_14c9929a0 = 1;
            uRam000000014c9929a8 = 0xffffffff00000000;
            _DAT_14c9929b0 = 0x1ffffffff;
            uRam000000014c9929b8 = 0xffffffff00000000;
            _DAT_14c9929c0 = &DAT_100000001;
            uRam000000014c9929c8 = 0x1ffffffff;
            _DAT_14c9929d0 = 0xffffffff;
            uRam000000014c9929d8 = 1;
            _DAT_14c9929e0 = 0x100000000;
            uRam000000014c9929e8 = 1;
            _DAT_14c9929f0 = 0xffffffff00000001;
            puRam000000014c9929f8 = &DAT_100000001;
            _DAT_14c992a00 = 0;
            uRam000000014c992a04 = 1;
            uRam000000014c992a08 = 1;
            uRam000000014c992a0c = 1;
            _DAT_14c992a10 = &DAT_100000001;
            _Init_thread_footer();
            lVar24 = local_218;
          }
          lVar28 = 0;
          local_1b0 = lVar16;
          do {
            local_198[0] = *(int *)((longlong)&DAT_14c9928e0 + lVar28) + local_1f8;
            local_198[1] = *(int *)((longlong)&DAT_14c9928e4 + lVar28) + (int)local_1d8;
            local_198[2] = *(int *)((longlong)&DAT_14c9928e8 + lVar28) + (int)local_1e0;
            lVar16 = 0;
            do {
              if ((local_198[lVar16] < 0) ||
                 (*(int *)(lVar24 + 0x50 + lVar16 * 4) <= local_198[lVar16])) goto LAB_146cad70a;
              lVar16 = lVar16 + 1;
            } while (lVar16 != 3);
            iVar13 = local_198[1] * local_210._0_4_ + local_198[0] * local_204;
            uVar14 = iVar13 + local_198[2];
            uVar17 = local_198[2] + iVar13 + 7;
            if (-1 < (int)uVar14) {
              uVar17 = uVar14;
            }
            bVar6 = *(byte *)((longlong)_Dst + (longlong)((int)uVar17 >> 3));
            lVar24 = local_218;
            if ((bVar6 >> (uVar14 & 7) & 1) == 0) {
              *(byte *)((longlong)_Dst + (longlong)((int)uVar17 >> 3)) =
                   (byte)(1 << ((byte)uVar14 & 7)) | bVar6;
              dVar37 = *(double *)(local_218 + 0x70) * 0.5 +
                       (double)local_198[2] * *(double *)(local_218 + 0x70) +
                       *(double *)(local_218 + 0x30);
              dVar38 = *(double *)(local_218 + 0x68) * 0.5 +
                       (double)local_198[1] * *(double *)(local_218 + 0x68) +
                       *(double *)(local_218 + 0x28);
              dVar36 = *(double *)(local_218 + 0x60) * 0.5 +
                       (double)local_198[0] * *(double *)(local_218 + 0x60) +
                       *(double *)(local_218 + 0x20);
              dVar18 = param_2[2];
              dVar3 = *param_2;
              dVar4 = param_2[1];
              uStack_120 = ((dVar38 - pdVar21[1]) - dVar35) - dVar4;
              local_128 = ((dVar36 - *pdVar21) - dVar34) - dVar3;
              local_118 = ((dVar37 - pdVar21[2]) - dVar33) - dVar18;
              local_140[0] = (dVar36 + *pdVar21 + dVar34) - dVar3;
              local_140[1] = (dVar38 + pdVar21[1] + dVar35) - dVar4;
              local_140[2] = (dVar37 + pdVar21[2] + dVar33) - dVar18;
              dVar37 = 0.0;
              lVar16 = 0;
              dVar36 = 1.79769313486232e+308;
              do {
                if (*(char *)(param_8 + lVar16) == '\x01') {
                  if ((0.0 < (double)(&local_128)[lVar16]) ||
                     (dVar39 = 0.0, dVar38 = 1.79769313486232e+308,
                     local_140[lVar16] <= 0.0 && local_140[lVar16] != 0.0)) goto LAB_146cad70a;
                }
                else {
                  dVar38 = *(double *)(param_7 + lVar16 * 8);
                  dVar39 = (double)(&local_128)[lVar16] * dVar38;
                  dVar38 = dVar38 * local_140[lVar16];
                }
                dVar7 = dVar38;
                if (dVar39 <= dVar38) {
                  dVar7 = dVar39;
                }
                if (dVar37 <= dVar7) {
                  dVar37 = dVar7;
                }
                if (dVar39 <= dVar38) {
                  dVar39 = dVar38;
                }
                if (dVar39 <= dVar36) {
                  dVar36 = dVar39;
                }
                if (dVar36 < dVar37) goto LAB_146cad70a;
                lVar16 = lVar16 + 1;
              } while (lVar16 != 3);
              if ((dVar37 <= *(double *)(lVar11 + 0x20)) && (0.0 <= dVar36)) {
                local_170 = dVar18 + param_6[2] * dVar37;
                local_178 = dVar4 + param_6[1] * dVar37;
                local_180 = dVar3 + *param_6 * dVar37;
                uStack_120._4_4_ = (undefined4)((ulonglong)uStack_120 >> 0x20);
                uStack_120 = (double)CONCAT44(uStack_120._4_4_,local_198[2]);
                local_128 = (double)CONCAT44(local_198[1],local_198[0]);
                dVar18 = (double)(longlong)(int)uStack_160;
                uVar17 = (int)uStack_160 + 1;
                uStack_160 = CONCAT44(uStack_160._4_4_,uVar17);
                if (uStack_160._4_4_ < uVar17) {
                  local_200 = dVar18;
                  FUN_146cadf8e(&local_168,dVar18);
                  dVar18 = local_200;
                }
                puVar2 = (undefined4 *)(local_168 + (longlong)dVar18 * 0x18);
                *puVar2 = (undefined4)local_128;
                puVar2[1] = local_128._4_4_;
                puVar2[2] = (undefined4)uStack_120;
                puVar2[3] = uStack_120._4_4_;
                *(double *)(local_168 + 0x10 + (longlong)dVar18 * 0x18) = dVar37;
                lVar24 = local_218;
              }
            }
LAB_146cad70a:
            lVar28 = lVar28 + 0xc;
          } while (lVar28 != 0x138);
          lVar11 = (longlong)
                   ((*(int *)(lVar24 + 0x7c) * local_1f8 + (int)local_1d8) * *(int *)(lVar24 + 0x80)
                   + (int)local_1e0) * 0x10;
          lVar16 = (longlong)*(int *)(*(longlong *)(lVar24 + 0x88) + 8 + lVar11);
          if (lVar16 != 0) {
            pdVar26 = *(double **)(*(longlong *)(lVar24 + 0x88) + lVar11);
            pdVar29 = pdVar26 + lVar16 * 0x10;
            local_1a8 = pdVar29;
            do {
              local_1a0 = pdVar26 + 6;
              local_1e8 = pdVar26;
              cVar8 = FUN_14473ffaa(local_1a0,param_5);
              if (cVar8 == '\0') {
                uVar17 = *(uint *)(local_1e8 + 0xd);
                uVar14 = *(uint *)((longlong)local_1e8 + 0x74);
                if ((uVar17 == uVar14) &&
                   (iVar13 = *(int *)((longlong)local_1e8 + 0x6c),
                   iVar13 == *(int *)(local_1e8 + 0xf))) {
                  iVar15 = iVar13;
                  if (*(int *)(local_1e8 + 0xe) != *(int *)((longlong)local_1e8 + 0x7c)) {
LAB_146cadc45:
                    local_1c4 = iVar15;
                    if ((int)uVar14 < (int)uVar17) {
                      uVar14 = uVar17;
                    }
                    local_1d0 = CONCAT44(local_1d0._4_4_,uVar14);
                    iVar15 = (local_1f4 * uVar17 + local_1c4) * local_210._0_4_;
                    bVar27 = false;
                    do {
                      local_200 = (double)(ulonglong)uVar17;
                      if (local_1c4 <= iVar13) {
                        iVar12 = *(int *)(local_1e8 + 0xe);
                        uVar22 = iVar12 + iVar15;
                        iVar9 = local_1c4;
                        do {
                          iVar20 = (*(int *)((longlong)local_1e8 + 0x7c) - iVar12) + 1;
                          uVar10 = uVar22;
                          if (iVar12 <= *(int *)((longlong)local_1e8 + 0x7c)) {
                            do {
                              uVar25 = uVar10 + 7;
                              if (-1 < (int)uVar10) {
                                uVar25 = uVar10;
                              }
                              if ((*(byte *)((longlong)_Dst_00 + (longlong)((int)uVar25 >> 3)) >>
                                   (uVar10 & 7) & 1) != 0) {
                                bVar27 = true;
                                break;
                              }
                              uVar10 = uVar10 + 1;
                              iVar20 = iVar20 + -1;
                            } while (iVar20 != 0);
                          }
                          uVar22 = uVar22 + local_210._0_4_;
                          bVar30 = iVar9 != iVar13;
                          iVar9 = iVar9 + 1;
                        } while (bVar30);
                      }
                      iVar15 = iVar15 + local_204;
                      bVar30 = uVar17 != uVar14;
                      uVar17 = uVar17 + 1;
                    } while (bVar30);
                    param_2 = local_1b8;
                    pdVar21 = local_1c0;
                    pdVar29 = local_1a8;
                    if (bVar27) goto LAB_146cada02;
                  }
                }
                else if ((int)uVar17 <= (int)uVar14) {
                  iVar13 = *(int *)(local_1e8 + 0xf);
                  iVar15 = *(int *)((longlong)local_1e8 + 0x6c);
                  goto LAB_146cadc45;
                }
                dVar18 = param_2[2];
                dVar3 = *param_2;
                dVar4 = param_2[1];
                local_128 = (*local_1e8 - *pdVar21) - dVar3;
                uStack_120 = (local_1e8[1] - pdVar21[1]) - dVar4;
                local_118 = (local_1e8[2] - pdVar21[2]) - dVar18;
                local_140[0] = (*pdVar21 + local_1e8[3]) - dVar3;
                local_140[1] = (pdVar21[1] + local_1e8[4]) - dVar4;
                local_140[2] = (pdVar21[2] + local_1e8[5]) - dVar18;
                dVar37 = 0.0;
                lVar11 = 0;
                dVar36 = 1.79769313486232e+308;
                do {
                  if (*(char *)(param_8 + lVar11) == '\x01') {
                    if ((0.0 < (double)(&local_128)[lVar11]) ||
                       (dVar39 = 0.0, dVar38 = 1.79769313486232e+308,
                       local_140[lVar11] <= 0.0 && local_140[lVar11] != 0.0)) goto LAB_146cada02;
                  }
                  else {
                    dVar38 = *(double *)(param_7 + lVar11 * 8);
                    dVar39 = (double)(&local_128)[lVar11] * dVar38;
                    dVar38 = dVar38 * local_140[lVar11];
                  }
                  dVar7 = dVar38;
                  if (dVar39 <= dVar38) {
                    dVar7 = dVar39;
                  }
                  if (dVar37 <= dVar7) {
                    dVar37 = dVar7;
                  }
                  if (dVar39 <= dVar38) {
                    dVar39 = dVar38;
                  }
                  if (dVar39 <= dVar36) {
                    dVar36 = dVar39;
                  }
                  if (dVar36 < dVar37) goto LAB_146cada02;
                  lVar11 = lVar11 + 1;
                } while (lVar11 != 3);
                if ((dVar37 <= *(double *)(local_1f0 + 0x20)) && (0.0 <= dVar36)) {
                  local_170 = dVar18 + dVar37 * param_6[2];
                  local_178 = dVar4 + param_6[1] * dVar37;
                  local_180 = dVar3 + *param_6 * dVar37;
                  local_f8 = local_1a0[6];
                  local_128 = *local_1a0;
                  uStack_120 = local_1a0[1];
                  local_118 = local_1a0[2];
                  uStack_110 = *(undefined4 *)(local_1a0 + 3);
                  uStack_10c = *(undefined4 *)((longlong)local_1a0 + 0x1c);
                  local_108 = local_1a0[4];
                  dStack_100 = local_1a0[5];
                  cVar8 = (**(code **)(*(longlong *)*param_5 + 0x18))
                                    ((longlong *)*param_5,&local_128,local_1f0);
                  if (cVar8 == '\0') {
                    uVar23 = 0;
                    goto LAB_146cad4e8;
                  }
                }
              }
LAB_146cada02:
              pdVar26 = local_1e8 + 0x10;
            } while (pdVar26 != pdVar29);
          }
          iVar13 = (int)local_1d8 * local_210._0_4_ + local_1f8 * local_204;
          iVar15 = iVar13 + (int)local_1e0;
          iVar13 = (int)local_1e0 + 7 + iVar13;
          if (-1 < iVar15) {
            iVar13 = iVar15;
          }
          pbVar1 = (byte *)((longlong)_Dst_00 + (longlong)(iVar13 >> 3));
          *pbVar1 = *pbVar1 | (byte)(1 << ((byte)iVar15 & 7));
          lVar16 = local_1b0;
          lVar11 = local_1f0;
          lVar24 = local_218;
          iVar13 = (int)uStack_160;
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar13);
    }
  }
LAB_146cad4e5:
  uVar23 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
LAB_146cad4e8:
  if (local_168 != 0) {
    FUN_1400020a8();
  }
  if (_Dst_00 != (void *)0x0) {
    thunk_FUN_1400020a8(_Dst_00);
  }
  if (_Dst != (void *)0x0) {
    thunk_FUN_1400020a8(_Dst);
  }
LAB_146cacd68:
  if ((local_f0 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
LAB_146cacb51:
  uVar23 = 0;
  goto LAB_146cacd68;
}



// FUNCTION 146cadf8e FUN_146cadf8e body=147 status=ok
// SIG undefined FUN_146cadf8e(void)

void FUN_146cadf8e(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cae022 FUN_146cae022 body=1121 status=ok
// SIG undefined FUN_146cae022(void)

ulonglong FUN_146cae022(longlong param_1,longlong param_2,undefined8 *param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined8 unaff_RBP;
  undefined7 uVar11;
  ulonglong uVar10;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 auStack_128 [32];
  ulonglong local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_b4 [4];
  int local_b0;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  int local_9c;
  longlong local_98;
  longlong lStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    plVar19 = *(longlong **)(param_1 + 0x10);
    plVar16 = plVar19 + (longlong)*(int *)(param_1 + 0x18) * 0xd;
    do {
      cVar4 = FUN_14473ffaa(plVar19,param_3);
      if (cVar4 == '\0') {
        lVar18 = -3;
        do {
          dVar2 = *(double *)(param_2 + 0x18 + lVar18 * 8);
          if (((double)plVar19[lVar18 + 0xd] <= dVar2 && dVar2 != (double)plVar19[lVar18 + 0xd]) ||
             (pdVar1 = (double *)(param_2 + 0x30 + lVar18 * 8),
             *pdVar1 <= (double)plVar19[lVar18 + 10] && (double)plVar19[lVar18 + 10] != *pdVar1))
          goto LAB_146cae07f;
          lVar18 = lVar18 + 1;
        } while (lVar18 != 0);
        uStack_68 = (undefined4)plVar19[6];
        iStack_64 = (int)((ulonglong)plVar19[6] >> 0x20);
        local_98 = *plVar19;
        lStack_90 = plVar19[1];
        local_88 = (undefined4)plVar19[2];
        uStack_84 = *(undefined4 *)((longlong)plVar19 + 0x14);
        uStack_80 = (undefined4)plVar19[3];
        uStack_7c = *(undefined4 *)((longlong)plVar19 + 0x1c);
        local_78 = plVar19[4];
        uStack_70 = (undefined4)plVar19[5];
        uStack_6c = *(undefined4 *)((longlong)plVar19 + 0x2c);
        cVar4 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_98);
        if (cVar4 == '\0') goto LAB_146cae0f8;
      }
LAB_146cae07f:
      plVar19 = plVar19 + 0xd;
    } while (plVar19 != plVar16);
  }
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar18 = *(longlong *)(param_1 + 0x98);
    lVar17 = (longlong)*(int *)(param_1 + 0xa0) * 0x80 + lVar18;
    do {
      cVar4 = FUN_14473ffaa((longlong *)(lVar18 + 0x30),param_3);
      if (cVar4 == '\0') {
        lVar6 = 0;
        do {
          dVar2 = *(double *)(param_2 + lVar6 * 8);
          pdVar1 = (double *)(lVar18 + 0x18 + lVar6 * 8);
          if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
             (dVar2 = *(double *)(lVar18 + lVar6 * 8),
             pdVar1 = (double *)(param_2 + 0x18 + lVar6 * 8), *pdVar1 <= dVar2 && dVar2 != *pdVar1))
          goto LAB_146cae138;
          lVar6 = lVar6 + 1;
        } while (lVar6 != 3);
        uStack_68 = (undefined4)*(undefined8 *)(lVar18 + 0x60);
        iStack_64 = (int)((ulonglong)*(undefined8 *)(lVar18 + 0x60) >> 0x20);
        local_98 = *(longlong *)(lVar18 + 0x30);
        lStack_90 = *(longlong *)(lVar18 + 0x38);
        local_88 = *(undefined4 *)(lVar18 + 0x40);
        uStack_84 = *(undefined4 *)(lVar18 + 0x44);
        uStack_80 = *(undefined4 *)(lVar18 + 0x48);
        uStack_7c = *(undefined4 *)(lVar18 + 0x4c);
        local_78 = *(longlong *)(lVar18 + 0x50);
        uStack_70 = *(undefined4 *)(lVar18 + 0x58);
        uStack_6c = *(undefined4 *)(lVar18 + 0x5c);
        cVar4 = (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_98);
        if (cVar4 == '\0') goto LAB_146cae0f8;
      }
LAB_146cae138:
      lVar18 = lVar18 + 0x80;
    } while (lVar18 != lVar17);
  }
  uVar11 = (undefined7)((ulonglong)unaff_RBP >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    FUN_146c9c584(param_1 + 0x20,&local_a4,param_2);
    FUN_146c9c584(param_1 + 0x20,&local_b0,param_2 + 0x18);
    local_78 = 0;
    uStack_70 = 0;
    local_98 = 0;
    lStack_90 = 0;
    uStack_6c = 0x80;
    uStack_68 = 0xffffffff;
    iStack_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar10 = CONCAT71(uVar11,1);
    if ((int)local_a4 <= local_b0) {
      iVar7 = local_b0;
      iVar5 = local_ac;
      do {
        uVar13 = (ulonglong)local_a4;
        iVar8 = local_a8;
        uVar12 = local_a4;
        uVar14 = local_a0;
        uVar15 = uVar13;
        if ((int)local_a0 <= iVar5) {
          do {
            local_108 = uVar15;
            uVar15 = (ulonglong)uVar14;
            iVar7 = local_9c;
            uVar20 = uVar15;
            if (local_9c <= iVar8) {
              do {
                local_100 = uVar20;
                lVar18 = (longlong)
                         ((*(int *)(param_1 + 0x7c) * (int)uVar13 + (int)uVar15) *
                          *(int *)(param_1 + 0x80) + iVar7) * 0x10;
                lVar17 = (longlong)*(int *)(*(longlong *)(param_1 + 0x88) + 8 + lVar18);
                if (lVar17 != 0) {
                  uVar10 = *(ulonglong *)(*(longlong *)(param_1 + 0x88) + lVar18);
                  uVar20 = lVar17 * 0x80 + uVar10;
                  do {
                    cVar4 = FUN_14473ffaa((undefined8 *)(uVar10 + 0x30),param_3);
                    if (cVar4 == '\0') {
                      uVar14 = *(uint *)(uVar10 + 0x40);
                      if ((int)lStack_90 != iStack_64) {
                        puVar9 = local_58;
                        if (local_58 == (undefined1 *)0x0) {
                          puVar9 = local_60;
                        }
                        for (iVar5 = *(int *)(puVar9 + (ulonglong)(local_50 - 1U & uVar14) * 4);
                            iVar5 != -1; iVar5 = *(int *)(local_98 + (longlong)iVar5 * 0xc + 4)) {
                          if (*(uint *)(local_98 + (longlong)iVar5 * 0xc) == uVar14)
                          goto LAB_146cae31b;
                        }
                      }
                      local_f8 = CONCAT44(local_f8._4_4_,uVar14);
                      FUN_14079e2ee(&local_98,local_b4,&local_f8,0);
                      lVar18 = 0;
                      do {
                        dVar2 = *(double *)(param_2 + lVar18 * 8);
                        pdVar1 = (double *)(uVar10 + 0x18 + lVar18 * 8);
                        if ((*pdVar1 <= dVar2 && dVar2 != *pdVar1) ||
                           (dVar2 = *(double *)(uVar10 + lVar18 * 8),
                           pdVar1 = (double *)(param_2 + 0x18 + lVar18 * 8),
                           *pdVar1 <= dVar2 && dVar2 != *pdVar1)) goto LAB_146cae31b;
                        lVar18 = lVar18 + 1;
                      } while (lVar18 != 3);
                      local_c8 = *(undefined8 *)(uVar10 + 0x60);
                      local_f8 = *(undefined8 *)(uVar10 + 0x30);
                      uStack_f0 = *(undefined8 *)(uVar10 + 0x38);
                      local_e8 = *(undefined4 *)(uVar10 + 0x40);
                      uStack_e4 = *(undefined4 *)(uVar10 + 0x44);
                      uStack_e0 = *(undefined4 *)(uVar10 + 0x48);
                      uStack_dc = *(undefined4 *)(uVar10 + 0x4c);
                      local_d8 = *(undefined4 *)(uVar10 + 0x50);
                      uStack_d4 = *(undefined4 *)(uVar10 + 0x54);
                      uStack_d0 = *(undefined4 *)(uVar10 + 0x58);
                      uStack_cc = *(undefined4 *)(uVar10 + 0x5c);
                      cVar4 = (**(code **)(*(longlong *)*param_3 + 8))
                                        ((longlong *)*param_3,&local_f8);
                      if (cVar4 == '\0') {
                        uVar10 = 0;
                        goto LAB_146cae447;
                      }
                    }
LAB_146cae31b:
                    uVar10 = uVar10 + 0x80;
                    uVar13 = local_108;
                    uVar15 = local_100;
                    iVar8 = local_a8;
                  } while (uVar10 != uVar20);
                }
                uVar14 = (uint)uVar15;
                bVar3 = iVar7 < iVar8;
                iVar5 = local_ac;
                iVar7 = iVar7 + 1;
                uVar20 = local_100;
              } while (bVar3);
            }
            uVar12 = (uint)uVar13;
            bVar3 = (int)uVar14 < iVar5;
            iVar7 = local_b0;
            uVar14 = uVar14 + 1;
            uVar15 = local_108;
          } while (bVar3);
        }
        local_a4 = uVar12 + 1;
      } while ((int)uVar12 < iVar7);
      uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
    }
LAB_146cae447:
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_140d9cca6(&local_98);
  }
LAB_146cae1c0:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_146cae0f8:
  uVar10 = 0;
  goto LAB_146cae1c0;
}



// FUNCTION 146cae484 FUN_146cae484 body=63 status=ok
// SIG undefined FUN_146cae484(void)

void FUN_146cae484(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cae4c4(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 146cae4c4 FUN_146cae4c4 body=109 status=ok
// SIG undefined FUN_146cae4c4(void)

ulonglong FUN_146cae4c4(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x38) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
      uVar1 = uVar1 / 0x38;
    }
  }
  return uVar1;
}



// FUNCTION 146cae532 FUN_146cae532 body=1008 status=ok
// SIG undefined FUN_146cae532(void)

void FUN_146cae532(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = *(longlong **)(param_1 + 0x90);
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar10 + 0x170))(plVar10,&local_48,4);
    uVar6 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar10);
      uVar6 = (uint)local_48;
    }
  }
  else {
    uVar6 = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (uVar6 == 0) {
    *param_2 = 0;
    goto LAB_146cae724;
  }
  plVar10 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar10 + 5) & 1) == 0) {
    if (((*(byte *)(plVar10 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar10 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar6 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        lVar8 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x50);
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar6 >> 0x10 ^ uVar6))
                                 * 4);
        if (iVar7 != -1) {
          lVar8 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar7;
          do {
            if (*(ulonglong *)(lVar8 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146cae70b;
            iVar11 = *(int *)(lVar8 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar10 = *(longlong **)(param_1 + 0x90);
      puVar9 = (ulonglong *)plVar10[1];
      puVar1 = (uint *)*puVar9 + 1;
      if ((uint *)puVar9[1] < puVar1) {
        if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar10,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar9;
        *puVar9 = (ulonglong)puVar1;
      }
      plVar10 = (longlong *)*param_2;
      plVar5 = (longlong *)FUN_146cae924(param_1,plVar10);
      if (plVar5 != (longlong *)0x0) {
        *param_2 = (ulonglong)plVar5;
        plVar10 = plVar5;
      }
      (**(code **)(*plVar10 + 8))(plVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146cae724;
  }
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar10,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar7 = local_4c + 1;
    plVar10 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar10[1];
    uVar6 = iVar7 - iVar11;
    if (uVar6 != 0 && iVar11 <= iVar7) {
      *(int *)(plVar10 + 1) = iVar7;
      if ((uint)(*(int *)((longlong)plVar10 + 0xc) - iVar11) < uVar6) {
        FUN_1456bd870(plVar10);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar10),0,(ulonglong)uVar6 << 3);
      if ((int)local_4c < 0) goto LAB_146cae844;
      plVar10 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar10[1];
    }
    if ((int)local_4c < iVar11) {
      uVar4 = *(ulonglong *)(*plVar10 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        plVar10 = (longlong *)*param_2;
        plVar5 = (longlong *)FUN_146cae924(param_1,plVar10);
        if (plVar5 != (longlong *)0x0) {
          *param_2 = (ulonglong)plVar5;
          plVar10 = plVar5;
        }
        (**(code **)(*plVar10 + 8))(plVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146cae724;
    }
  }
LAB_146cae844:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146cae724:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar7 = (int)puVar9[2], iVar7 != -1) {
LAB_146cae70b:
    puVar9 = (ulonglong *)(lVar8 + (longlong)iVar7 * 0x18);
    if (*puVar9 == local_58) goto LAB_146cae780;
  }
  puVar9 = (ulonglong *)0x0;
LAB_146cae780:
  puVar3 = *(undefined4 **)plVar10[1];
  if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,puVar9 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar9 + 1) = *puVar3;
    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
  }
  goto LAB_146cae724;
}



// FUNCTION 146cae924 FUN_146cae924 body=449 status=ok
// SIG undefined FUN_146cae924(void)

undefined8 * FUN_146cae924(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [43];
  uint local_1d;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_19 = *(undefined1 *)(param_2 + 0x90);
  }
  else {
    local_19 = 0;
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (undefined1 *)*puVar2 + 1;
  if ((undefined1 *)puVar2[1] < puVar1) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_19,1);
  }
  else {
    local_19 = *(undefined1 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  puVar3 = (undefined8 *)0x0;
  switch(local_19) {
  case 0:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
      local_1d = local_1d & 0xffffff00;
      *puVar3 = &PTR_FUN_149f48de0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar3[10] = 0;
      *(undefined4 *)(puVar3 + 0xb) = 0xffffffff;
      *(undefined2 *)((longlong)puVar3 + 0x5c) = 0;
      puVar3[0xc] = 0xffffffffffffffff;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0x100000000;
      *(undefined4 *)((longlong)puVar3 + 0x94) = 0;
      *(undefined1 *)(puVar3 + 0x12) = 0;
      puVar3[2] = 0;
      puVar3[0xe] = 0;
      FUN_14061877a(puVar3);
      goto switchD_146cae9a3_caseD_3;
    }
    break;
  case 1:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0xf0,0x10);
      local_1d = local_1d & 0xffffff00;
      FUN_1406185ac(puVar3);
      goto switchD_146cae9a3_caseD_3;
    }
    break;
  case 2:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x1d0,0x10);
      local_1d = 0x10000;
      FUN_14061844e(puVar3);
      goto switchD_146cae9a3_caseD_3;
    }
    break;
  default:
    goto switchD_146cae9a3_caseD_3;
  case 6:
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x1d0,0x10);
      local_1d = 0x10000;
      FUN_14061844e(puVar3);
      *puVar3 = &PTR_FUN_149f48e40;
      *(undefined1 *)(puVar3 + 0x12) = 6;
      goto switchD_146cae9a3_caseD_3;
    }
  }
  puVar3 = (undefined8 *)0x0;
switchD_146cae9a3_caseD_3:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146caeae6 FUN_146caeae6 body=163 status=ok
// SIG undefined FUN_146caeae6(void)

void FUN_146caeae6(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  
  FUN_146caec7c(param_1 + 0x20);
  FUN_140a2844e(param_2,param_1 + 0x50);
  FUN_146caeb89(param_2,param_1 + 0x78);
  puVar1 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x90),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x90) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar2 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (iVar2 < 0x10) {
    FUN_144aa3880(param_1);
    return;
  }
  return;
}



// FUNCTION 146caeb89 FUN_146caeb89 body=240 status=ok
// SIG undefined FUN_146caeb89(void)

longlong * FUN_146caeb89(longlong *param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = *(int *)(param_2 + 0x10);
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)(param_2 + 0x14) < local_2c) {
      FUN_146caedda(param_2);
    }
    FUN_1449226c0(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        lVar3 = *(longlong *)(param_2 + 8);
        if (*(longlong *)(param_2 + 8) == 0) {
          lVar3 = param_2;
        }
        FUN_146caef38(param_1,lVar3 + lVar4);
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar5 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146caec7c FUN_146caec7c body=193 status=ok
// SIG undefined FUN_146caec7c(void)

void FUN_146caec7c(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbc8);
  if (0xb < iVar1) {
    FUN_141724e7a(param_2,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  local_30 = (double)*(float *)(param_1 + 0x2c);
  local_38 = (double)*(float *)(param_1 + 0x28);
  local_40 = (double)*(float *)(param_1 + 0x24);
  local_48 = (double)*(float *)(param_1 + 0x20);
  uVar2 = FUN_141724e7a(param_2,param_1);
  FUN_1400f4f7e(uVar2,&local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146caed50 FUN_146caed50 body=138 status=ok
// SIG undefined FUN_146caed50(void)

void FUN_146caed50(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 146caedda FUN_146caedda body=85 status=ok
// SIG undefined FUN_146caedda(void)

void FUN_146caedda(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar1 = (uint)(uVar2 >> 3);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar3 = uVar1;
    }
  }
  if (uVar3 == *(uint *)(param_1 + 0x14)) {
    return;
  }
  *(uint *)(param_1 + 0x14) = uVar3;
  FUN_140277314(param_1,*(undefined4 *)(param_1 + 0x10),uVar3,8);
  return;
}



// FUNCTION 146caee30 FUN_146caee30 body=97 status=ok
// SIG undefined FUN_146caee30(void)

void FUN_146caee30(longlong param_1,int param_2,int param_3)

{
  void *_Dst;
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = param_1;
  }
  _Dst = (void *)(lVar2 + (longlong)param_2 * 8);
  FUN_1447a0744(_Dst,param_3);
  iVar1 = *(int *)(param_1 + 0x10);
  iVar3 = iVar1 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 8),(longlong)iVar3 << 3);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar1 - param_3;
  return;
}



// FUNCTION 146caee92 FUN_146caee92 body=59 status=ok
// SIG undefined FUN_146caee92(void)

void FUN_146caee92(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146caeece(param_1,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (iVar1 == *(int *)(param_1 + 0x14)) {
    return;
  }
  *(int *)(param_1 + 0x14) = iVar1;
  FUN_140277314(param_1,*(undefined4 *)(param_1 + 0x10),iVar1,8);
  return;
}



// FUNCTION 146caeece FUN_146caeece body=105 status=ok
// SIG undefined FUN_146caeece(void)

ulonglong FUN_146caeece(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x1ffffffffffff800U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,0);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 146caef38 FUN_146caef38 body=169 status=ok
// SIG undefined FUN_146caef38(void)

void FUN_146caef38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x218))
            (*(longlong **)(param_1 + 0x90),&DAT_149e3cc18);
  iVar2 = FUN_1448332aa(*(undefined8 *)(param_1 + 0x90),&DAT_149e3cc18);
  if (4 < iVar2) {
    local_28 = (undefined8 *)*param_2;
    FUN_146caefe2(param_1);
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x28) & 1) != 0) {
      puVar1 = (undefined8 *)*param_2;
      if ((puVar1 != local_28) && (*param_2 = (longlong)local_28, puVar1 != (undefined8 *)0x0)) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146caefe2 FUN_146caefe2 body=1008 status=ok
// SIG undefined FUN_146caefe2(void)

void FUN_146caefe2(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = *(longlong **)(param_1 + 0x90);
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar10 + 0x170))(plVar10,&local_48,4);
    uVar6 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar10);
      uVar6 = (uint)local_48;
    }
  }
  else {
    uVar6 = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (uVar6 == 0) {
    *param_2 = 0;
    goto LAB_146caf1d4;
  }
  plVar10 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar10 + 5) & 1) == 0) {
    if (((*(byte *)(plVar10 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar10 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar6 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        lVar8 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x50);
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar6 >> 0x10 ^ uVar6))
                                 * 4);
        if (iVar7 != -1) {
          lVar8 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar7;
          do {
            if (*(ulonglong *)(lVar8 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146caf1bb;
            iVar11 = *(int *)(lVar8 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar10 = *(longlong **)(param_1 + 0x90);
      puVar9 = (ulonglong *)plVar10[1];
      puVar1 = (uint *)*puVar9 + 1;
      if ((uint *)puVar9[1] < puVar1) {
        if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar10,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar9;
        *puVar9 = (ulonglong)puVar1;
      }
      plVar10 = (longlong *)*param_2;
      plVar5 = (longlong *)FUN_146e22346(param_1,plVar10);
      if (plVar5 != (longlong *)0x0) {
        *param_2 = (ulonglong)plVar5;
        plVar10 = plVar5;
      }
      (**(code **)(*plVar10 + 8))(plVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146caf1d4;
  }
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar10,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar7 = local_4c + 1;
    plVar10 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar10[1];
    uVar6 = iVar7 - iVar11;
    if (uVar6 != 0 && iVar11 <= iVar7) {
      *(int *)(plVar10 + 1) = iVar7;
      if ((uint)(*(int *)((longlong)plVar10 + 0xc) - iVar11) < uVar6) {
        FUN_1456bd870(plVar10);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar10),0,(ulonglong)uVar6 << 3);
      if ((int)local_4c < 0) goto LAB_146caf2f4;
      plVar10 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar10[1];
    }
    if ((int)local_4c < iVar11) {
      uVar4 = *(ulonglong *)(*plVar10 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        plVar10 = (longlong *)*param_2;
        plVar5 = (longlong *)FUN_146e22346(param_1,plVar10);
        if (plVar5 != (longlong *)0x0) {
          *param_2 = (ulonglong)plVar5;
          plVar10 = plVar5;
        }
        (**(code **)(*plVar10 + 8))(plVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146caf1d4;
    }
  }
LAB_146caf2f4:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146caf1d4:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar7 = (int)puVar9[2], iVar7 != -1) {
LAB_146caf1bb:
    puVar9 = (ulonglong *)(lVar8 + (longlong)iVar7 * 0x18);
    if (*puVar9 == local_58) goto LAB_146caf230;
  }
  puVar9 = (ulonglong *)0x0;
LAB_146caf230:
  puVar3 = *(undefined4 **)plVar10[1];
  if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,puVar9 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar9 + 1) = *puVar3;
    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
  }
  goto LAB_146caf1d4;
}



// FUNCTION 146caf3d4 FUN_146caf3d4 body=38 status=ok
// SIG undefined FUN_146caf3d4(void)

undefined8 FUN_146caf3d4(undefined8 param_1,int param_2)

{
  FUN_14008cd08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146caf3fa FUN_146caf3fa body=41 status=ok
// SIG undefined FUN_146caf3fa(void)

void FUN_146caf3fa(longlong param_1,undefined8 param_2)

{
  FUN_146caeae6();
  FUN_146caf53e(param_1 + 0x98,param_2);
  return;
}



// FUNCTION 146caf424 FUN_146caf424 body=282 status=ok
// SIG undefined FUN_146caf424(void)

void FUN_146caf424(longlong param_1,longlong *param_2,int param_3,uint *param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
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
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  
  uVar23 = *param_4;
  lVar25 = (longlong)param_3;
  if ((uVar23 & 1) != 0) {
    lVar5 = *param_2;
    lVar24 = lVar25 * 0x30;
    uVar7 = *(undefined4 *)(param_1 + 0x20);
    uVar8 = *(undefined4 *)(param_1 + 0x24);
    uVar9 = *(undefined4 *)(param_1 + 0x28);
    uVar10 = *(undefined4 *)(param_1 + 0x2c);
    uVar11 = *(undefined4 *)(param_1 + 0x30);
    uVar12 = *(undefined4 *)(param_1 + 0x34);
    uVar13 = *(undefined4 *)(param_1 + 0x38);
    uVar14 = *(undefined4 *)(param_1 + 0x3c);
    uVar15 = *(undefined4 *)(param_1 + 0x44);
    uVar16 = *(undefined4 *)(param_1 + 0x48);
    uVar17 = *(undefined4 *)(param_1 + 0x4c);
    puVar3 = (undefined4 *)(lVar5 + 0x20 + lVar24);
    *puVar3 = *(undefined4 *)(param_1 + 0x40);
    puVar3[1] = uVar15;
    puVar3[2] = uVar16;
    puVar3[3] = uVar17;
    puVar3 = (undefined4 *)(lVar5 + 0x10 + lVar24);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
    puVar3[2] = uVar13;
    puVar3[3] = uVar14;
    puVar3 = (undefined4 *)(lVar5 + lVar24);
    *puVar3 = uVar7;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    uVar23 = *param_4;
  }
  if ((uVar23 & 0x10) != 0) {
    plVar2 = (longlong *)(param_2[8] + lVar25 * 0x20);
    puVar4 = *(undefined8 **)(param_1 + 0x50);
    puVar6 = *(undefined8 **)(param_2[8] + lVar25 * 0x20);
    if (puVar6 != puVar4) {
      *plVar2 = (longlong)puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
        UNLOCK();
      }
      if (puVar6 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar6 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar6 + 0xc) == 0)) {
          (**(code **)*puVar6)(puVar6,1);
        }
      }
    }
    *(undefined2 *)(plVar2 + 3) = *(undefined2 *)(param_1 + 0x68);
    lVar5 = *(longlong *)(param_1 + 0x60);
    plVar2[1] = *(longlong *)(param_1 + 0x58);
    plVar2[2] = lVar5;
    uVar23 = *param_4;
  }
  if ((uVar23 & 2) != 0) {
    lVar5 = param_2[2];
    *(undefined8 *)(lVar5 + 0x10 + lVar25 * 0x18) = *(undefined8 *)(param_1 + 0xa8);
    uVar18 = *(undefined8 *)(param_1 + 0xa0);
    puVar4 = (undefined8 *)(lVar5 + lVar25 * 0x18);
    *puVar4 = *(undefined8 *)(param_1 + 0x98);
    puVar4[1] = uVar18;
    uVar23 = *param_4;
  }
  if ((uVar23 & 0x40) != 0) {
    lVar5 = param_2[0xc];
    lVar25 = lVar25 * 0x40;
    *(undefined8 *)(lVar5 + 0x30 + lVar25) = *(undefined8 *)(param_1 + 0xe0);
    uVar18 = *(undefined8 *)(param_1 + 0xb0);
    uVar19 = *(undefined8 *)(param_1 + 0xb8);
    uVar20 = *(undefined8 *)(param_1 + 0xc0);
    uVar21 = *(undefined8 *)(param_1 + 200);
    uVar22 = *(undefined8 *)(param_1 + 0xd8);
    puVar4 = (undefined8 *)(lVar5 + 0x20 + lVar25);
    *puVar4 = *(undefined8 *)(param_1 + 0xd0);
    puVar4[1] = uVar22;
    puVar4 = (undefined8 *)(lVar5 + 0x10 + lVar25);
    *puVar4 = uVar20;
    puVar4[1] = uVar21;
    *(undefined8 *)(lVar5 + lVar25) = uVar18;
    ((undefined8 *)(lVar5 + lVar25))[1] = uVar19;
  }
  return;
}



// FUNCTION 146caf53e FUN_146caf53e body=310 status=ok
// SIG undefined FUN_146caf53e(void)

void FUN_146caf53e(float *param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbc8);
  if (0xb < iVar1) {
    FUN_144aa3513(param_2,param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  local_30 = (double)param_1[2];
  local_38 = (double)param_1[1];
  local_40 = (double)*param_1;
  local_48 = (double)param_1[5];
  local_50 = (double)param_1[4];
  local_58 = (double)param_1[3];
  uVar2 = FUN_141724e7a(param_2,&local_40);
  FUN_141724e7a(uVar2,&local_58);
  *param_1 = (float)local_40;
  param_1[1] = (float)local_38;
  param_1[2] = (float)local_30;
  param_1[3] = (float)local_58;
  param_1[4] = (float)local_50;
  param_1[5] = (float)local_48;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146caf68a FUN_146caf68a body=240 status=ok
// SIG undefined FUN_146caf68a(void)

void FUN_146caf68a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146caeae6();
  FUN_146caf53e(param_1 + 0x98,param_2);
  FUN_146caf77c(param_1 + 0x160,param_2);
  puVar3 = (undefined4 *)(param_1 + 0x1bc);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar3,4);
    }
    else {
      thunk_FUN_14572512c(param_2,puVar3);
    }
  }
  else {
    *puVar3 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = (ulonglong *)param_2[1];
  if (puVar2[1] < *puVar2 + 4) {
    local_1c = 0;
    (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    if (1 < local_1c) {
      FUN_14572541c(param_2);
    }
  }
  else {
    *puVar2 = *puVar2 + 4;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146caf77c FUN_146caf77c body=556 status=ok
// SIG undefined FUN_146caf77c(void)

void FUN_146caf77c(float *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbc8);
  if (0xb < iVar1) {
    FUN_144aa3513(param_2,param_1);
    FUN_144aa3513(param_2,param_1 + 3);
    FUN_144aa3513(param_2,param_1 + 6);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
  }
  local_40 = (double)param_1[2];
  local_48 = (double)param_1[1];
  local_50 = (double)*param_1;
  local_58 = (double)param_1[5];
  local_60 = (double)param_1[4];
  local_68 = (double)param_1[3];
  local_70 = (double)param_1[8];
  local_78 = (double)param_1[7];
  local_80 = (double)param_1[6];
  local_88 = (double)param_1[0xb];
  local_90 = (double)param_1[10];
  local_98 = (double)param_1[9];
  FUN_141724e7a(param_2,&local_50);
  FUN_141724e7a(param_2,&local_68);
  FUN_141724e7a(param_2,&local_80);
  FUN_141724e7a(param_2,&local_98);
  *param_1 = (float)local_50;
  param_1[1] = (float)local_48;
  param_1[2] = (float)local_40;
  param_1[3] = (float)local_68;
  param_1[4] = (float)local_60;
  param_1[5] = (float)local_58;
  param_1[6] = (float)local_80;
  param_1[7] = (float)local_78;
  param_1[8] = (float)local_70;
  param_1[9] = (float)local_98;
  param_1[10] = (float)local_90;
  param_1[0xb] = (float)local_88;
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146caf9c4 FUN_146caf9c4 body=38 status=ok
// SIG undefined FUN_146caf9c4(void)

undefined8 FUN_146caf9c4(undefined8 param_1,int param_2)

{
  FUN_14008cd08();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146caf9ea FUN_146caf9ea body=956 status=ok
// SIG undefined FUN_146caf9ea(void)

void FUN_146caf9ea(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar5 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar5 = (uint)local_48;
    }
  }
  else {
    uVar5 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar5 == 0) {
    *param_2 = 0;
    goto LAB_146cafbdc;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar5 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar7 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar2 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar5 >> 0x10 ^ uVar5))
                                 * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar2 + 0x10);
          iVar10 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar10 * 0x18) == local_58) goto LAB_146cafbc3;
            iVar10 = *(int *)(lVar7 + (longlong)iVar10 * 0x18 + 0x10);
          } while (iVar10 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      FUN_146cafda8(param_1,param_2);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146cafbdc;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar10 = (int)plVar9[1];
    uVar5 = iVar6 - iVar10;
    if (uVar5 != 0 && iVar10 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar10) < uVar5) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar10 * 8 + *plVar9),0,(ulonglong)uVar5 << 3);
      if ((int)local_4c < 0) goto LAB_146cafcfc;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar10 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar10) {
      uVar4 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        FUN_146cafda8(param_1,param_2);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146cafbdc;
    }
  }
LAB_146cafcfc:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146cafbdc:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_146cafbc3:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_146cafc38;
  }
  puVar8 = (ulonglong *)0x0;
LAB_146cafc38:
  puVar3 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar3;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_146cafbdc;
}



// FUNCTION 146cafda8 FUN_146cafda8 body=93 status=ok
// SIG undefined FUN_146cafda8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146cafda8(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)*param_2;
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined1 *)((longlong)puVar1 + 0xc) = 0;
    *_DAT_000001e8 = 0;
    if (puVar1 != (undefined8 *)0x0) {
      *param_2 = puVar1;
      puVar2 = puVar1;
    }
  }
  FUN_146cafe06(puVar2,param_1);
  return;
}



// FUNCTION 146cafe06 FUN_146cafe06 body=106 status=ok
// SIG undefined FUN_146cafe06(void)

void FUN_146cafe06(undefined8 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_146cafe70();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 2) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_1429aed1a(*param_1,*(undefined4 *)(param_1 + 1),param_1);
  return;
}



// FUNCTION 146cafe70 FUN_146cafe70 body=208 status=ok
// SIG undefined FUN_146cafe70(void)

void FUN_146cafe70(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 8),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 8) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  local_21 = *(undefined1 *)(param_1 + 0xc);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined1 *)*puVar3 + 1;
  if ((undefined1 *)puVar3[1] < puVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_21,1);
  }
  else {
    local_21 = *(undefined1 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  *(undefined1 *)(param_1 + 0xc) = local_21;
  FUN_146caff42(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146caff42 FUN_146caff42 body=1008 status=ok
// SIG undefined FUN_146caff42(void)

void FUN_146caff42(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar10 = *(longlong **)(param_1 + 0x90);
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar10 + 0x170))(plVar10,&local_48,4);
    uVar6 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar10);
      uVar6 = (uint)local_48;
    }
  }
  else {
    uVar6 = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (uVar6 == 0) {
    *param_2 = 0;
    goto LAB_146cb0134;
  }
  plVar10 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar10 + 5) & 1) == 0) {
    if (((*(byte *)(plVar10 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar10 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
        uVar6 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
        lVar8 = lVar2 + 0x48;
        if (*(longlong *)(lVar2 + 0x50) != 0) {
          lVar8 = *(longlong *)(lVar2 + 0x50);
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar2 + 0x58) - 1U & (uVar6 >> 0x10 ^ uVar6))
                                 * 4);
        if (iVar7 != -1) {
          lVar8 = *(longlong *)(lVar2 + 0x10);
          iVar11 = iVar7;
          do {
            if (*(ulonglong *)(lVar8 + (longlong)iVar11 * 0x18) == local_58) goto LAB_146cb011b;
            iVar11 = *(int *)(lVar8 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar2 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar10 = *(longlong **)(param_1 + 0x90);
      puVar9 = (ulonglong *)plVar10[1];
      puVar1 = (uint *)*puVar9 + 1;
      if ((uint *)puVar9[1] < puVar1) {
        if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar10,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar9;
        *puVar9 = (ulonglong)puVar1;
      }
      plVar10 = (longlong *)*param_2;
      plVar5 = (longlong *)FUN_146d8d6cc(param_1,plVar10);
      if (plVar5 != (longlong *)0x0) {
        *param_2 = (ulonglong)plVar5;
        plVar10 = plVar5;
      }
      (**(code **)(*plVar10 + 8))(plVar10,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_146cb0134;
  }
  puVar9 = (ulonglong *)plVar10[1];
  puVar1 = (uint *)*puVar9 + 1;
  if ((uint *)puVar9[1] < puVar1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar10,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar9;
    *puVar9 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar7 = local_4c + 1;
    plVar10 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar10[1];
    uVar6 = iVar7 - iVar11;
    if (uVar6 != 0 && iVar11 <= iVar7) {
      *(int *)(plVar10 + 1) = iVar7;
      if ((uint)(*(int *)((longlong)plVar10 + 0xc) - iVar11) < uVar6) {
        FUN_1456bd870(plVar10);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar10),0,(ulonglong)uVar6 << 3);
      if ((int)local_4c < 0) goto LAB_146cb0254;
      plVar10 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar10[1];
    }
    if ((int)local_4c < iVar11) {
      uVar4 = *(ulonglong *)(*plVar10 + (ulonglong)local_4c * 8);
      if (uVar4 == 0) {
        plVar10 = (longlong *)*param_2;
        plVar5 = (longlong *)FUN_146d8d6cc(param_1,plVar10);
        if (plVar5 != (longlong *)0x0) {
          *param_2 = (ulonglong)plVar5;
          plVar10 = plVar5;
        }
        (**(code **)(*plVar10 + 8))(plVar10,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar4;
      }
      goto LAB_146cb0134;
    }
  }
LAB_146cb0254:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_146cb0134:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar7 = (int)puVar9[2], iVar7 != -1) {
LAB_146cb011b:
    puVar9 = (ulonglong *)(lVar8 + (longlong)iVar7 * 0x18);
    if (*puVar9 == local_58) goto LAB_146cb0190;
  }
  puVar9 = (ulonglong *)0x0;
LAB_146cb0190:
  puVar3 = *(undefined4 **)plVar10[1];
  if ((undefined4 *)((undefined8 *)plVar10[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)plVar10 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar10 + 0x170))(plVar10,puVar9 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar9 + 1) = *puVar3;
    *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 4;
  }
  goto LAB_146cb0134;
}



// FUNCTION 146cb0334 FUN_146cb0334 body=195 status=ok
// SIG undefined FUN_146cb0334(void)

void FUN_146cb0334(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_14479f6b8(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x68 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x2c) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x34) = 0;
      puVar2[7] = 0x7fefffffffffffff;
      puVar2[8] = 0x7fefffffffffffff;
      puVar2[9] = 0x7fefffffffffffff;
      puVar2[10] = 0xffefffffffffffff;
      puVar2[0xb] = 0xffefffffffffffff;
      puVar2[0xc] = 0xffefffffffffffff;
      puVar2 = puVar2 + 0xd;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_144aa423e(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cb03f8 FUN_146cb03f8 body=272 status=ok
// SIG undefined FUN_146cb03f8(void)

void FUN_146cb03f8(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146cae532(param_2,param_1);
  FUN_146caf9ea(param_2,param_1 + 1);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cba8);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cba8);
  if (0xd < iVar3) {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cba8);
    if (iVar3 < 0x22) {
      puVar1 = (ulonglong *)param_2[1];
      if (puVar1[1] < *puVar1 + 4) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,local_2c,4);
        }
        else {
          thunk_FUN_14572512c(param_2,local_2c);
        }
      }
      else {
        *puVar1 = *puVar1 + 4;
      }
    }
  }
  plVar2 = (longlong *)param_1[1];
  if (plVar2 == (longlong *)0x0) {
    if (*param_1 == 0) goto LAB_146cb04bc;
    puVar4 = (undefined4 *)(*param_1 + 0x58);
  }
  else {
    puVar4 = (undefined4 *)((longlong)(int)plVar2[1] * 4 + *(longlong *)(*plVar2 + 0x80));
  }
  *(undefined4 *)(param_1 + 2) = *puVar4;
LAB_146cb04bc:
  FUN_140d03e72(param_2,param_1 + 7);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146cb0509 FUN_146cb0509 body=252 status=ok
// SIG undefined FUN_146cb0509(void)

longlong * FUN_146cb0509(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_146cab6d8(param_2);
    }
    FUN_146cb0608(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_146c9da4f(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 146cb0608 FUN_146cb0608 body=143 status=ok
// SIG undefined FUN_146cb0608(void)

void FUN_146cb0608(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_146cb0698(param_1);
    }
    memset((void *)((longlong)iVar1 * 0x10 + *param_1),0,(longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (-1 < param_2) {
    if (param_2 < iVar1) {
      FUN_146cb071e(param_1,param_2,iVar1 - param_2);
      if (param_3 == '\x01') {
        FUN_146cb077e(param_1);
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cb0698 FUN_146cb0698 body=132 status=ok
// SIG undefined FUN_146cb0698(void)

void FUN_146cb0698(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cb071e FUN_146cb071e body=95 status=ok
// SIG undefined FUN_146cb071e(void)

void FUN_146cb071e(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x10 + *param_1);
  FUN_146ca597f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x10 + (longlong)_Dst),(longlong)iVar2 << 4);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 146cb077e FUN_146cb077e body=63 status=ok
// SIG undefined FUN_146cb077e(void)

void FUN_146cb077e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb07be(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 146cb07be FUN_146cb07be body=97 status=ok
// SIG undefined FUN_146cb07be(void)

ulonglong FUN_146cb07be(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 146cb0820 FUN_146cb0820 body=200 status=ok
// SIG undefined FUN_146cb0820(void)

void FUN_146cb0820(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_146cb08ea(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x80 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0x7fefffffffffffff;
      puVar2[1] = 0x7fefffffffffffff;
      puVar2[2] = 0x7fefffffffffffff;
      puVar2[3] = 0xffefffffffffffff;
      puVar2[4] = 0xffefffffffffffff;
      puVar2[5] = 0xffefffffffffffff;
      puVar2[6] = 0;
      puVar2[7] = 0;
      *(undefined4 *)(puVar2 + 8) = 0xffffffff;
      *(undefined8 *)((longlong)puVar2 + 0x44) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x4c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x54) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x5c) = 0;
      *(undefined1 *)((longlong)puVar2 + 100) = 0;
      puVar2 = puVar2 + 0x10;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146cb0970(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 146cb08ea FUN_146cb08ea body=132 status=ok
// SIG undefined FUN_146cb08ea(void)

void FUN_146cb08ea(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146cb0970 FUN_146cb0970 body=63 status=ok
// SIG undefined FUN_146cb0970(void)

void FUN_146cb0970(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_146cb09b0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,8);
  }
  return;
}


