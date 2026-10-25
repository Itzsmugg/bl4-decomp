// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14172a2d2 FUN_14172a2d2 body=77 status=ok
// SIG undefined FUN_14172a2d2(void)

undefined8 * FUN_14172a2d2(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = &PTR_FUN_149f56360;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14172a320 FUN_14172a320 body=731 status=ok
// SIG undefined FUN_14172a320(void)

void FUN_14172a320(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *local_60;
  longlong *local_50;
  
  iVar3 = (int)param_2[5];
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar17 = 0;
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    puVar6 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_2 + 2);
    }
    uVar16 = *puVar6;
    if (uVar16 == 0) {
      iVar9 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar9 = iVar3 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar8 = 0;
      do {
        if (uVar15 == uVar17) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar16 = puVar6[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar8 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar15 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar9) {
      iVar9 = iVar3;
    }
  }
  if (iVar9 != iVar3) {
    uVar16 = 0xffffffff;
    iVar5 = iVar3;
    do {
      plVar4 = *(longlong **)(*param_2 + (longlong)iVar9 * 0x10);
      lVar11 = (longlong)(int)plVar4[1] * 0x10;
      lVar10 = (longlong)*(int *)(*(longlong *)(*plVar4 + 0x1b8) + 8 + lVar11);
      if (lVar10 != 0) {
        local_50 = *(longlong **)(*(longlong *)(*plVar4 + 0x1b8) + lVar11);
        plVar1 = local_50 + lVar10;
        do {
          lVar10 = *local_50;
          if (*(longlong *)(lVar10 + 8) != 0) {
            local_60 = (longlong *)(*(longlong *)(lVar10 + 8) + 8);
            plVar7 = (longlong *)FUN_140f61df0();
            do {
              if (*plVar7 == *local_60) {
                if (lVar10 != 0) {
                  if (*(longlong *)(lVar10 + 8) != 0) {
                    *(undefined1 *)
                     (*(longlong *)(*(longlong *)(lVar10 + 8) + 0x108) + 0x10 +
                     (longlong)*(int *)(lVar10 + 0x18) * 0x58) = 1;
                  }
                  if ((longlong)*(int *)(lVar10 + 0x18) != -1) {
                    lVar11 = *(longlong *)(param_1 + 0xf8);
                    lVar10 = (longlong)*(int *)(lVar10 + 0x18) * 0x10;
                    if (*(longlong **)(lVar11 + lVar10) == plVar4) {
                      *(undefined8 *)(lVar11 + lVar10) = 0;
                      lVar11 = *(longlong *)(param_1 + 0xf8);
                    }
                    if (*(longlong **)(lVar11 + 8 + lVar10) == plVar4) {
                      *(undefined8 *)(lVar10 + lVar11 + 8) = 0;
                    }
                  }
                }
                break;
              }
              local_60 = (longlong *)local_60[1];
            } while (local_60 != (longlong *)0x0);
          }
          local_50 = local_50 + 1;
        } while (local_50 != plVar1);
        iVar5 = (int)param_2[5];
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar6 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_2 + 2);
      }
      iVar9 = (int)uVar17;
      lVar10 = (longlong)iVar9;
      uVar14 = puVar6[lVar10] & uVar16;
      if (uVar14 == 0) {
        iVar12 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar12 = iVar5 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar9) {
          iVar13 = iVar9;
        }
        if (iVar9 < iVar12) {
          lVar11 = 0;
          do {
            uVar14 = puVar6[lVar10 + lVar11 + 1];
            if (uVar14 != 0) {
              uVar17 = (ulonglong)(iVar9 + (int)lVar11 + 1);
              uVar16 = 0xffffffff;
              goto LAB_14172a466;
            }
            iVar8 = iVar8 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar13 - lVar10 != lVar11);
          uVar16 = 0xffffffff;
          iVar9 = iVar13;
        }
        uVar17 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar5;
      }
      else {
LAB_14172a466:
        uVar15 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar15 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar9 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar5 <= iVar9) {
          iVar9 = iVar5;
        }
      }
    } while (iVar9 != iVar3);
  }
  return;
}



// FUNCTION 14172a5fc FUN_14172a5fc body=29 status=ok
// SIG undefined FUN_14172a5fc(void)

undefined8 FUN_14172a5fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172a61a FUN_14172a61a body=422 status=ok
// SIG undefined FUN_14172a61a(void)

void FUN_14172a61a(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      FUN_14016e00e(param_1,*(undefined8 *)(*param_2 + (longlong)iVar4 * 0x10));
      uVar6 = ~(uint)uVar13 & uVar6;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar3 = (int)param_2[5];
      iVar4 = (int)uVar14;
      lVar11 = (longlong)iVar4;
      uVar10 = puVar5[lVar11] & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = puVar5[lVar11 + lVar12 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar6 = 0xffffffff;
              goto LAB_14172a73b;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_14172a73b:
        uVar13 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 14172a7c0 FUN_14172a7c0 body=688 status=ok
// SIG undefined FUN_14172a7c0(void)

double * FUN_14172a7c0(double *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined4 uVar15;
  longlong lVar16;
  longlong lVar17;
  double *pdVar18;
  double *pdVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  pdVar18 = (double *)&DAT_14c846480;
  pdVar19 = param_1;
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *pdVar19 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar19 = pdVar19 + 1;
  }
  if ((param_3 & 1) != 0) {
    lVar17 = *param_2;
    lVar16 = *(longlong *)(lVar17 + 0x3e0);
    puVar1 = (undefined4 *)(lVar16 + (longlong)(int)param_2[1] * 0x18);
    uVar6 = puVar1[1];
    uVar7 = puVar1[2];
    uVar8 = puVar1[3];
    dVar4 = *(double *)(lVar16 + 0x10 + (longlong)(int)param_2[1] * 0x18);
    *(undefined4 *)(param_1 + 4) = *puVar1;
    *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
    *(undefined4 *)(param_1 + 5) = uVar7;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
    param_1[6] = dVar4;
    param_1[7] = 0.0;
    FUN_1402a0030(lVar17,&local_98);
    lVar16 = param_2[1];
    lVar17 = *(longlong *)(*param_2 + 0x28);
    *(undefined8 *)(lVar17 + 0x10 + (longlong)(int)lVar16 * 0x18) = local_88;
    puVar2 = (undefined8 *)(lVar17 + (longlong)(int)lVar16 * 0x18);
    *puVar2 = local_98;
    puVar2[1] = uStack_90;
    lVar17 = *(longlong *)(*param_2 + 0x28);
    lVar14 = (longlong)(int)param_2[1] * 0x18;
    lVar16 = *(longlong *)(*param_2 + 0x530);
    *(undefined8 *)(lVar16 + 0x10 + lVar14) = *(undefined8 *)(lVar17 + 0x10 + lVar14);
    puVar2 = (undefined8 *)(lVar17 + lVar14);
    uVar13 = puVar2[1];
    puVar3 = (undefined8 *)(lVar16 + lVar14);
    *puVar3 = *puVar2;
    puVar3[1] = uVar13;
    uVar15 = DAT_14c8464e8._4_4_;
    uVar8 = (undefined4)DAT_14c8464e8;
    uVar7 = DAT_14c8464e0._4_4_;
    uVar6 = (undefined4)DAT_14c8464e0;
    lVar16 = param_2[1];
    lVar17 = *(longlong *)(*param_2 + 0x3e0);
    *(undefined8 *)(lVar17 + 0x10 + (longlong)(int)lVar16 * 0x18) = DAT_14c8464f0;
    puVar1 = (undefined4 *)(lVar17 + (longlong)(int)lVar16 * 0x18);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar15;
  }
  if ((param_3 & 2) != 0) {
    lVar17 = *param_2;
    lVar14 = param_2[1];
    lVar16 = *(longlong *)(lVar17 + 0x3f8);
    lVar20 = (longlong)(int)lVar14 * 0x20;
    pdVar18 = (double *)(lVar16 + lVar20);
    dVar9 = *pdVar18;
    dVar10 = pdVar18[1];
    pdVar18 = (double *)(lVar16 + 0x10 + lVar20);
    dVar11 = *pdVar18;
    dVar12 = pdVar18[1];
    *param_1 = dVar9;
    param_1[1] = dVar10;
    param_1[2] = dVar11;
    param_1[3] = dVar12;
    lVar17 = *(longlong *)(lVar17 + 0x48);
    lVar16 = (longlong)(int)lVar14 * 0x10;
    dVar4 = (double)*(float *)(lVar17 + 0xc + lVar16);
    dVar21 = (double)*(float *)(lVar17 + 8 + lVar16);
    dVar5 = (double)*(float *)(lVar17 + 4 + lVar16);
    dVar22 = (double)*(float *)(lVar17 + lVar16);
    *(float *)(lVar17 + lVar16) =
         (float)(dVar10 * dVar21 * -1.0 + dVar11 * dVar5 + dVar12 * dVar22 * 1.0 + dVar9 * dVar4);
    *(float *)(lVar17 + 4 + lVar16) =
         (float)(dVar9 * dVar21 * 1.0 + dVar12 * dVar5 + dVar11 * dVar22 * -1.0 + dVar10 * dVar4);
    *(float *)(lVar17 + 8 + lVar16) =
         (float)(dVar12 * dVar21 * 1.0 + ((dVar22 * dVar10 * 1.0 + dVar4 * dVar11) - dVar9 * dVar5))
    ;
    *(float *)(lVar17 + 0xc + lVar16) =
         (float)(dVar11 * dVar21 * -1.0 +
                ((dVar22 * dVar9 * -1.0 + dVar4 * dVar12) - dVar10 * dVar5));
    lVar17 = (longlong)(int)param_2[1] * 0x10;
    puVar2 = (undefined8 *)(*(longlong *)(*param_2 + 0x48) + lVar17);
    uVar13 = puVar2[1];
    puVar3 = (undefined8 *)(*(longlong *)(*param_2 + 0x548) + lVar17);
    *puVar3 = *puVar2;
    puVar3[1] = uVar13;
    uVar13 = DAT_14c8463e8;
    uVar15 = DAT_14c8463d8._4_4_;
    uVar8 = (undefined4)DAT_14c8463d8;
    uVar7 = DAT_14c8463d0._4_4_;
    uVar6 = (undefined4)DAT_14c8463d0;
    lVar17 = *(longlong *)(*param_2 + 0x3f8);
    lVar16 = (longlong)(int)param_2[1] * 0x20;
    puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar16);
    *puVar2 = DAT_14c8463e0;
    puVar2[1] = uVar13;
    puVar1 = (undefined4 *)(lVar17 + lVar16);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar15;
  }
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172aa72 FUN_14172aa72 body=190 status=ok
// SIG undefined FUN_14172aa72(void)

void FUN_14172aa72(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int *piVar7;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar6 +
                    ((longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar4 != -1) {
      lVar2 = *param_1;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x10;
        if (*(ulonglong *)(lVar2 + (longlong)iVar4 * 0x10) == param_2) {
          iVar5 = *(int *)((longlong)plVar6 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          if (iVar5 == iVar4) {
            piVar7 = (int *)((longlong)plVar6 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          }
          else {
            do {
              piVar7 = (int *)(lVar2 + (longlong)iVar5 * 0x10 + 8);
              iVar5 = *piVar7;
            } while (iVar5 != iVar4);
          }
          *piVar7 = *(int *)(lVar1 + 8);
          FUN_140123660(param_1,iVar4,1);
          return;
        }
        iVar4 = *(int *)(lVar1 + 8);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 14172ab30 FUN_14172ab30 body=25 status=ok
// SIG undefined FUN_14172ab30(void)

void FUN_14172ab30(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  *(undefined4 *)(*(longlong *)(*param_2 + 0x638) + (longlong)(int)param_2[1] * 4) = param_3;
  FUN_1402bf4a4();
  return;
}



// FUNCTION 14172ab96 FUN_14172ab96 body=178 status=ok
// SIG undefined FUN_14172ab96(void)

void FUN_14172ab96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_30;
  local_c0 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = &local_38;
  local_38 = 0;
  local_36 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_68 = local_c8;
  FUN_14480acae(0,&local_a8,&local_68);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172ac4a FUN_14172ac4a body=322 status=ok
// SIG undefined FUN_14172ac4a(void)

int FUN_14172ac4a(longlong *param_1,int *param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  int iVar11;
  
  iVar9 = *param_3;
  iVar3 = *param_2;
  lVar8 = *param_1;
  plVar1 = (longlong *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x18) < iVar9) {
    FUN_145891588(plVar1,iVar9,1);
  }
  if (iVar9 < *(int *)(lVar8 + 0x150)) {
    iVar9 = *(int *)(lVar8 + 0x150);
  }
  *(int *)(lVar8 + 0x150) = iVar9;
  puVar10 = (undefined8 *)param_1[1];
  iVar11 = iVar9 - *(int *)(puVar10 + 2);
  if (iVar11 != 0 && *(int *)(puVar10 + 2) <= iVar9) {
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    plVar2 = puVar10 + 1;
    if (*(int *)((longlong)puVar10 + 0x14) < iVar9) {
      FUN_145891620(plVar2,iVar9);
    }
    do {
      puVar7 = (undefined8 *)FUN_14001cc68(0x50,0x10);
      uVar4 = *(undefined4 *)(puVar10 + 10);
      uVar5 = *(undefined4 *)(puVar10 + 3);
      *puVar7 = *puVar10;
      *(undefined4 *)(puVar7 + 1) = uVar4;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      *(undefined4 *)(puVar7 + 8) = uVar5;
      *(undefined8 *)((longlong)puVar7 + 0x44) = 0;
      iVar9 = *(int *)(puVar10 + 2);
      *(uint *)(puVar10 + 2) = iVar9 + 1U;
      if (*(uint *)((longlong)puVar10 + 0x14) < iVar9 + 1U) {
        FUN_146e05912(plVar2,iVar9);
      }
      *(undefined8 **)(*plVar2 + (longlong)iVar9 * 8) = puVar7;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    puVar10 = (undefined8 *)param_1[1];
  }
  uVar6 = *(undefined8 *)(puVar10[1] + (longlong)iVar3 * 8);
  lVar8 = (longlong)iVar3 * 0x38;
  *(longlong *)(*plVar1 + 0x20 + lVar8) = param_1[2];
  *(undefined8 *)(*plVar1 + 0x28 + lVar8) = uVar6;
  return iVar3;
}



// FUNCTION 14172ad8e FUN_14172ad8e body=67 status=ok
// SIG undefined FUN_14172ad8e(void)

int FUN_14172ad8e(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14008b9bc(param_1,iVar1);
  }
  FUN_14479f3a2((longlong)iVar1 * 0x70 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 14172add2 FUN_14172add2 body=310 status=ok
// SIG undefined FUN_14172add2(void)

int FUN_14172add2(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  iVar1 = (int)param_1[2];
  *(int *)(param_1 + 2) = iVar1 + 1;
  iVar7 = (int)param_1[1];
  if (iVar1 < iVar7) {
    lVar2 = *param_1;
    puVar8 = (undefined8 *)(lVar2 + (longlong)iVar1 * 0x48);
    puVar8[2] = param_2[2];
    uVar9 = param_2[1];
    *puVar8 = *param_2;
    puVar8[1] = uVar9;
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar3;
    *(undefined4 *)(puVar8 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar5;
    puVar8[5] = param_2[5];
    if (puVar8 == param_2) goto LAB_14172ae6b;
    iVar7 = *(int *)((longlong)puVar8 + 0x3c);
    iVar6 = *(int *)(param_2 + 7);
    uVar9 = param_2[6];
    *(int *)(puVar8 + 7) = iVar6;
    if (iVar6 == 0 && iVar7 == 0) goto LAB_14172aeee;
    lVar2 = lVar2 + (longlong)iVar1 * 0x48;
  }
  else {
    *(uint *)(param_1 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
      FUN_1403d9516(param_1,iVar7);
    }
    lVar2 = *param_1;
    puVar8 = (undefined8 *)(lVar2 + (longlong)iVar7 * 0x48);
    puVar8[2] = param_2[2];
    uVar9 = param_2[1];
    *puVar8 = *param_2;
    puVar8[1] = uVar9;
    puVar8[5] = param_2[5];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
    uVar4 = *(undefined4 *)(param_2 + 4);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(puVar8 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar3;
    *(undefined4 *)(puVar8 + 4) = uVar4;
    *(undefined4 *)((longlong)puVar8 + 0x24) = uVar5;
    puVar8[6] = 0;
    iVar6 = *(int *)(param_2 + 7);
    uVar9 = param_2[6];
    *(int *)(puVar8 + 7) = iVar6;
    if (iVar6 == 0) {
LAB_14172aeee:
      *(undefined4 *)((longlong)puVar8 + 0x3c) = 0;
      goto LAB_14172ae6b;
    }
    lVar2 = lVar2 + (longlong)iVar7 * 0x48;
    iVar7 = 0;
  }
  FUN_1446fc50a((undefined8 *)(lVar2 + 0x30),iVar6,iVar7);
  FUN_1446fc4ab(*(undefined8 *)(lVar2 + 0x30),uVar9,iVar6);
LAB_14172ae6b:
  *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(param_2 + 8);
  return (int)param_1[2] + -1;
}



// FUNCTION 14172af08 FUN_14172af08 body=353 status=ok
// SIG undefined FUN_14172af08(void)

void FUN_14172af08(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14172af8f;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_14172af8f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 14172b06a FUN_14172b06a body=45 status=ok
// SIG undefined FUN_14172b06a(void)

void FUN_14172b06a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14172b098 FUN_14172b098 body=269 status=ok
// SIG undefined FUN_14172b098(void)

void FUN_14172b098(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14172b1a6 FUN_14172b1a6 body=304 status=ok
// SIG undefined FUN_14172b1a6(void)

void FUN_14172b1a6(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar3 + 0xf;
      if (param_2 < 0xfff) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar5 = 0x32;
          if (0x32 < bVar2) {
            uVar5 = (ulonglong)bVar2;
          }
          uVar6 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14172b207;
            lVar1 = uVar5 + 1 + uVar6;
            uVar6 = uVar6 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_14172b207:
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 >> 3)) {
    uVar4 = uVar3 >> 3 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14172b2d6 FUN_14172b2d6 body=317 status=ok
// SIG undefined FUN_14172b2d6(void)

void FUN_14172b2d6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14172b344;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_14172b344:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14172b414 FUN_14172b414 body=229 status=ok
// SIG undefined FUN_14172b414(void)

void FUN_14172b414(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0xd0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x9e) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xd0)) {
      uVar2 = uVar1 / 0xd0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xd0,0x10);
  }
  return;
}



// FUNCTION 14172b4fa FUN_14172b4fa body=269 status=ok
// SIG undefined FUN_14172b4fa(void)

void FUN_14172b4fa(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14172b608 FUN_14172b608 body=378 status=ok
// SIG undefined FUN_14172b608(void)

void FUN_14172b608(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = *(undefined8 *)*param_1;
  uVar5 = *(undefined8 *)param_1[1];
  iVar2 = *(int *)(param_1 + 3);
  iVar3 = *(int *)((longlong)param_1 + 0x34);
  if (iVar2 == iVar3) {
    if (*(int *)(param_1 + 5) == iVar2) {
      fVar1 = *(float *)(param_1 + 7);
      FUN_141b71750(*(undefined8 *)(param_2 + 0xa8),uVar4,uVar5,param_1[4],param_1[2],
                    fVar1 * *(float *)((longlong)param_1 + 0x44),*(float *)(param_1 + 9) * fVar1,
                    *(float *)((longlong)param_1 + 0x3c) * fVar1,*(float *)(param_1 + 8) * fVar1,
                    *(undefined4 *)(param_1 + 6),iVar2);
    }
    else {
      fVar1 = *(float *)(param_1 + 7);
      FUN_141b71910(*(undefined8 *)(param_2 + 0xa8),uVar4,uVar5,param_1[2],
                    fVar1 * *(float *)((longlong)param_1 + 0x44),
                    *(float *)((longlong)param_1 + 0x3c) * fVar1,*(float *)(param_1 + 8) * fVar1,
                    *(undefined4 *)(param_1 + 6),iVar2);
    }
  }
  else if (*(int *)(param_1 + 5) == iVar3) {
    fVar1 = *(float *)(param_1 + 7);
    FUN_141b715f0(*(undefined8 *)(param_2 + 0xa8),uVar4,uVar5,param_1[4],
                  fVar1 * *(float *)((longlong)param_1 + 0x44),*(float *)(param_1 + 9) * fVar1,
                  *(float *)((longlong)param_1 + 0x3c) * fVar1,*(undefined4 *)(param_1 + 6),iVar3);
  }
  else {
    FUN_141b71a70(*(undefined8 *)(param_2 + 0xa8),uVar4,uVar5,
                  *(float *)(param_1 + 7) * *(float *)((longlong)param_1 + 0x44),
                  *(float *)((longlong)param_1 + 0x3c) * *(float *)(param_1 + 7),
                  *(undefined4 *)(param_1 + 6),iVar3);
  }
  return;
}



// FUNCTION 14172b782 FUN_14172b782 body=29 status=ok
// SIG undefined FUN_14172b782(void)

undefined8 FUN_14172b782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172b7a0 FUN_14172b7a0 body=674 status=ok
// SIG undefined FUN_14172b7a0(void)

void FUN_14172b7a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *local_60;
  longlong *local_58;
  
  iVar3 = (int)param_2[5];
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar17 = 0;
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    puVar7 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_2 + 2);
    }
    uVar16 = *puVar7;
    if (uVar16 == 0) {
      iVar9 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar9 = iVar3 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar8 = 0;
      do {
        if (uVar15 == uVar17) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar16 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar8 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar2 = uVar15 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar9 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar9) {
      iVar9 = iVar3;
    }
  }
  if (iVar9 != iVar3) {
    uVar16 = 0xffffffff;
    iVar6 = iVar3;
    do {
      plVar4 = *(longlong **)(*param_2 + (longlong)iVar9 * 0x10);
      lVar11 = (longlong)(int)plVar4[1] * 0x10;
      lVar10 = (longlong)*(int *)(*(longlong *)(*plVar4 + 0x1b8) + 8 + lVar11);
      if (lVar10 != 0) {
        local_58 = *(longlong **)(*(longlong *)(*plVar4 + 0x1b8) + lVar11);
        plVar1 = local_58 + lVar10;
        do {
          lVar10 = *local_58;
          if (*(longlong *)(lVar10 + 8) != 0) {
            local_60 = (longlong *)(*(longlong *)(lVar10 + 8) + 8);
            FUN_140f61ea2();
            do {
              if (DAT_14c9948c0 == *local_60) {
                if (lVar10 != 0) {
                  plVar5 = *(longlong **)(lVar10 + 8);
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x60))(plVar5,*(undefined4 *)(lVar10 + 0x18),0);
                  }
                  lVar10 = (longlong)*(int *)(lVar10 + 0x18);
                  if ((lVar10 != -1) &&
                     (*(longlong **)(*(longlong *)(param_1 + 0x28) + lVar10 * 8) == plVar4)) {
                    *(undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar10 * 8) = 0;
                  }
                }
                break;
              }
              local_60 = (longlong *)local_60[1];
            } while (local_60 != (longlong *)0x0);
          }
          local_58 = local_58 + 1;
        } while (local_58 != plVar1);
        iVar6 = (int)param_2[5];
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar7 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_2 + 2);
      }
      iVar9 = (int)uVar17;
      lVar10 = (longlong)iVar9;
      uVar14 = puVar7[lVar10] & uVar16;
      if (uVar14 == 0) {
        iVar12 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar12 = iVar6 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar9) {
          iVar13 = iVar9;
        }
        if (iVar9 < iVar12) {
          lVar11 = 0;
          do {
            uVar14 = puVar7[lVar10 + lVar11 + 1];
            if (uVar14 != 0) {
              uVar17 = (ulonglong)(iVar9 + (int)lVar11 + 1);
              uVar16 = 0xffffffff;
              goto LAB_14172b8e6;
            }
            iVar8 = iVar8 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar13 - lVar10 != lVar11);
          uVar16 = 0xffffffff;
          iVar9 = iVar13;
        }
        uVar17 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar6;
      }
      else {
LAB_14172b8e6:
        uVar15 = (ulonglong)(-uVar14 & uVar14);
        uVar2 = uVar15 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar9 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar9) {
          iVar9 = iVar6;
        }
      }
    } while (iVar9 != iVar3);
  }
  return;
}



// FUNCTION 14172ba42 FUN_14172ba42 body=69 status=ok
// SIG undefined FUN_14172ba42(void)

undefined8 * FUN_14172ba42(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *(undefined4 *)(puVar1 + 1) = param_3;
  *puVar1 = &PTR_FUN_149f5d6a0;
  puVar1[2] = param_1;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *param_2 = puVar1;
  return param_2;
}



// FUNCTION 14172ba88 FUN_14172ba88 body=59 status=ok
// SIG undefined FUN_14172ba88(void)

undefined8 * FUN_14172ba88(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f5d6a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172bac4 FUN_14172bac4 body=93 status=ok
// SIG undefined FUN_14172bac4(void)

void FUN_14172bac4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      lVar5 = (longlong)*(int *)(lVar2 + lVar6);
      uVar4 = FUN_1448f7274(param_2,*(undefined8 *)(*(longlong *)(lVar3 + 0x28) + lVar5 * 8));
      *(undefined8 *)(*(longlong *)(lVar3 + 0x78) + lVar5 * 8) = uVar4;
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  return;
}



// FUNCTION 14172bb22 FUN_14172bb22 body=279 status=ok
// SIG undefined FUN_14172bb22(void)

void FUN_14172bb22(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28;
  undefined4 local_24;
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = *(int *)(**(longlong **)(param_1 + 0x30) + (longlong)param_4 * 4);
  local_28 = *(float *)(**(longlong **)(param_1 + 0x98) + (longlong)local_2c * 4);
  uVar1 = *(undefined4 *)(**(longlong **)(param_1 + 0x90) + (longlong)local_2c * 4);
  fVar4 = (float)(param_5 - param_4) * 0.0078125;
  if (local_28 <= 0.0001) {
    puVar3 = &local_58;
    pcVar2 = FUN_1429e290e;
    local_50 = &local_48;
  }
  else {
    puVar3 = &local_20;
    pcVar2 = FUN_1429e2734;
    local_18 = &local_48;
  }
  local_30 = param_5;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_34 = param_4;
  local_24 = uVar1;
  *puVar3 = pcVar2;
  FUN_1400bd65e(-((int)ROUND(-0.5 - (fVar4 + fVar4)) >> 1),uVar1,0);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172bc3a FUN_14172bc3a body=649 status=ok
// SIG undefined FUN_14172bc3a(void)

uint * FUN_14172bc3a(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar11 = *param_1;
  lVar8 = (longlong)(int)uVar11;
  if (lVar8 == 0xffffff) {
    uVar11 = param_1[0x10];
    if (uVar11 == param_1[0x11]) {
      uVar4 = FUN_14001fdce(*(undefined8 *)(param_1 + 0xe),(ulonglong)(uVar11 + 4) << 7,8);
      *(undefined8 *)(param_1 + 0xe) = uVar4;
      param_1[0x11] = param_1[0x11] + 4;
      uVar11 = param_1[0x10];
    }
    FUN_140fb6b38(param_1 + 2);
    uVar12 = param_1[0xc];
    if (uVar12 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = uVar12 + 0x1e;
      if (-1 < (int)(uVar12 - 1)) {
        iVar3 = uVar12 - 1;
      }
      iVar3 = iVar3 >> 5;
    }
    puVar9 = param_1 + 6;
    uVar14 = uVar12 + 1;
    uVar13 = uVar12 + 0x1f;
    if (-1 < (int)uVar12) {
      uVar13 = uVar12;
    }
    if ((int)uVar13 >> 5 == iVar3) {
      param_1[0xc] = uVar14;
    }
    else {
      if ((int)param_1[0xd] <= (int)uVar12) {
        if (uVar12 + 0x20 < 0xa0) {
          uVar7 = 0x80;
          uVar14 = uVar12;
        }
        else {
          uVar14 = uVar12 + 0x20 >> 5;
          if (param_1[0xd] + 0x1f < 0xa0) {
            uVar7 = 4;
            if (4 < uVar14) {
              uVar7 = uVar14;
            }
          }
          else {
            uVar7 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar5 = FUN_144a3809e(uVar7 << 2,0);
          iVar3 = (int)(uVar5 >> 2);
          uVar7 = 0xffffffe0;
          if ((int)uVar14 <= iVar3) {
            uVar7 = iVar3 << 5;
          }
          uVar14 = param_1[0xc];
        }
        param_1[0xd] = uVar7;
        FUN_1446efbd8(puVar9,uVar14);
        uVar14 = param_1[0xc] + 1;
      }
      uVar7 = uVar14 + 0x1f;
      if (-1 < (int)uVar14) {
        uVar7 = uVar14;
      }
      param_1[0xc] = uVar14;
      if ((int)uVar14 % 0x20 != 0) {
        puVar10 = *(uint **)(param_1 + 10);
        if (*(uint **)(param_1 + 10) == (uint *)0x0) {
          puVar10 = puVar9;
        }
        bVar6 = -(char)((int)uVar14 % 0x20);
        puVar10[(int)uVar7 >> 5] = (puVar10[(int)uVar7 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
      }
    }
    if (*(uint **)(param_1 + 10) != (uint *)0x0) {
      puVar9 = *(uint **)(param_1 + 10);
    }
    puVar9[(int)uVar13 >> 5] = puVar9[(int)uVar13 >> 5] | 1 << ((byte)uVar12 & 0x1f);
    param_1[0x10] = param_1[0x10] + 1;
    lVar8 = (longlong)(int)uVar11;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 2);
    puVar9 = param_1 + 6;
    if (*(uint **)(param_1 + 10) != (uint *)0x0) {
      puVar9 = *(uint **)(param_1 + 10);
    }
    uVar12 = uVar11 + 0x1f;
    if (-1 < (int)uVar11) {
      uVar12 = uVar11;
    }
    puVar9[(int)uVar12 >> 5] = puVar9[(int)uVar12 >> 5] | 1 << ((byte)uVar11 & 0x1f);
    *param_1 = *(uint *)(lVar2 + lVar8 * 4) & 0xffffff;
    puVar9 = (uint *)(lVar2 + lVar8 * 4);
    *puVar9 = *puVar9 | 0xffffff;
  }
  lVar2 = *(longlong *)(param_1 + 0xe);
  lVar8 = lVar8 * 0x80;
  *(undefined8 *)(lVar2 + lVar8) = 0x3fe0000000000000;
  uVar12 = 0;
  *(undefined8 *)(lVar2 + 8 + lVar8) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar8) = 0x3fb99999a0000000;
  *(undefined8 *)(lVar2 + 0x18 + lVar8) = 0x3ff0000000000000;
  puVar1 = (undefined8 *)(lVar2 + 0x20 + lVar8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar2 + 0x30 + lVar8) = 0x3ff0000000000000;
  *(undefined8 *)(lVar2 + 0x38 + lVar8) = 0x3ff0000000000000;
  puVar1 = (undefined8 *)(lVar2 + 0x40 + lVar8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(lVar2 + 0x50 + lVar8) = 0;
  *(undefined8 *)(lVar2 + 0x58 + lVar8) = 0;
  *(undefined8 *)(lVar2 + 0x5e + lVar8) = 0;
  puVar1 = (undefined8 *)(lVar2 + 0x68 + lVar8);
  *puVar1 = 0x48435000469c4000;
  puVar1[1] = 0x3f800000476a6000;
  *(undefined1 *)(lVar2 + 0x78 + lVar8) = 0;
  *(undefined4 *)(lVar2 + 0x7c + lVar8) = 0;
  param_1[0x12] = param_1[0x12] + 1;
  if (((-1 < (int)uVar11) && ((int)uVar11 < (int)param_1[4])) &&
     (uVar14 = *(uint *)(*(longlong *)(param_1 + 2) + (ulonglong)uVar11 * 4), 0xffffff < uVar14)) {
    uVar12 = uVar11 & 0xffffff | uVar14 & 0xff000000;
  }
  *param_2 = uVar12;
  return param_2;
}



// FUNCTION 14172bec4 FUN_14172bec4 body=37 status=ok
// SIG undefined FUN_14172bec4(void)

longlong FUN_14172bec4(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((param_2 != 0) && (lVar1 = FUN_14005b71c(param_2), lVar1 != 0)) &&
     (1 < *(byte *)(lVar1 + 0xc))) {
    return lVar1;
  }
  return 0;
}



// FUNCTION 14172beea FUN_14172beea body=437 status=ok
// SIG undefined FUN_14172beea(void)

void FUN_14172beea(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_2;
  local_30 = 0;
  lVar10 = FUN_14472711d(lVar2,&local_30);
  puVar12 = (undefined8 *)*param_1;
  if (((*(uint *)(puVar12 + 1) & 3) != 2) == (local_30 != 0 && lVar10 != lVar2)) {
    if (local_30 != 0 && lVar10 != lVar2) {
      puVar11 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
      *puVar11 = &PTR_FUN_149f5e060;
      uVar9 = *(uint *)(puVar12 + 1);
      *(uint *)(puVar11 + 1) = uVar9 & 0xfffffffc | 2;
      *(undefined4 *)((longlong)puVar11 + 0xc) = 0;
      lVar2 = puVar12[2];
      puVar11[2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
        uVar9 = *(uint *)(puVar11 + 1);
      }
      puVar11[5] = puVar12[5];
      uVar4 = puVar12[4];
      puVar11[3] = puVar12[3];
      puVar11[4] = uVar4;
      uVar4 = puVar12[7];
      puVar11[6] = puVar12[6];
      puVar11[7] = uVar4;
      puVar11[8] = puVar12[8];
      uVar4 = puVar12[10];
      uVar5 = puVar12[0xb];
      uVar6 = puVar12[0xc];
      uVar7 = puVar12[0xd];
      uVar8 = puVar12[0xe];
      puVar11[9] = puVar12[9];
      puVar11[10] = uVar4;
      puVar11[0xb] = uVar5;
      puVar11[0xc] = uVar6;
      puVar11[0xd] = uVar7;
      puVar11[0xe] = uVar8;
      if ((uVar9 & 4) == 0) {
        puVar11[0xf] = puVar12[0xf];
        puVar12[0xf] = 0;
      }
      else {
        *(undefined4 *)(puVar11 + 0xf) = *(undefined4 *)(puVar12 + 0xf);
      }
      *puVar11 = &PTR_FUN_149f5e080;
      puVar11[0x10] = 0;
      puVar11[0x11] = 0;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0;
      puVar12 = puVar11;
    }
    else {
      puVar11 = (undefined8 *)FUN_14001cc68(0x80,0x10);
      FUN_146e221de(puVar11,puVar12);
      puVar12 = puVar11;
    }
    puVar11 = (undefined8 *)*param_1;
    *param_1 = (longlong)puVar12;
    if (puVar11 != (undefined8 *)0x0) {
      (**(code **)*puVar11)(puVar11,1);
      puVar12 = (undefined8 *)*param_1;
    }
  }
  puVar11 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)puVar12[2];
  if (puVar3 != puVar11) {
    puVar12[2] = puVar11;
    if (puVar11 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
    }
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14172c0a0 FUN_14172c0a0 body=108 status=ok
// SIG undefined FUN_14172c0a0(void)

undefined8 * FUN_14172c0a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = (undefined8 *)0x0;
  FUN_14472711d(*(undefined8 *)(param_1 + 0x10),&local_28);
  puVar2 = local_28;
  if (local_28 == (undefined8 *)0x0) {
    puVar2 = &DAT_14c846480;
  }
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172c10e FUN_14172c10e body=162 status=ok
// SIG undefined FUN_14172c10e(void)

undefined8 * FUN_14172c10e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149f5e040;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f5e060;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172c1b0 FUN_14172c1b0 body=231 status=ok
// SIG undefined FUN_14172c1b0(void)

void FUN_14172c1b0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,0x10);
  }
  return;
}



// FUNCTION 14172c298 FUN_14172c298 body=214 status=ok
// SIG undefined FUN_14172c298(void)

void FUN_14172c298(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 14172c36e FUN_14172c36e body=69 status=ok
// SIG undefined FUN_14172c36e(void)

void FUN_14172c36e(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0x14)) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar1 = param_1;
    }
    FUN_1447a0744(lVar1,*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  FUN_146e2e72c(param_1);
  return;
}



// FUNCTION 14172c3b4 FUN_14172c3b4 body=313 status=ok
// SIG undefined FUN_14172c3b4(void)

undefined4 *
FUN_14172c3b4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140ad3aa0(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140ad3a08(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140ad3d14(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172c4ee FUN_14172c4ee body=80 status=ok
// SIG undefined FUN_14172c4ee(void)

void FUN_14172c4ee(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14004c296(local_20,*(undefined1 *)(param_1 + 0x1c));
  FUN_1406265f2(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172c540 FUN_14172c540 body=3733 status=ok
// SIG undefined FUN_14172c540(void)

void FUN_14172c540(undefined4 *param_1,longlong param_2,longlong *param_3,float param_4,char param_5
                  )

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  void *pvVar4;
  longlong lVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  int iVar9;
  undefined2 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  longlong local_b0;
  int local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 uStack_9c;
  undefined8 uStack_98;
  int local_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar8 = (longlong)(int)param_1[0x5b];
  if ((lVar8 != -1) &&
     (bVar1 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar1 & 0x92) == 0x82)) {
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar12 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if ((bVar1 & 0x40) == 0) {
      if (10.0 <= fVar11) {
        fVar11 = 10.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (10.0 <= fVar12) {
        fVar12 = 10.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      param_1[0x38] = fVar12;
      param_1[0x39] = fVar11 - fVar12;
      if (param_1[0x5c] == -1) {
        param_1[0x44] = fVar12;
        param_1[0x45] = fVar11 - fVar12;
      }
    }
    else {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      local_c8 = param_1[6];
      uStack_c4 = param_1[7];
      iStack_c0 = param_1[8];
      uStack_bc = param_1[9];
      iVar6 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar8 * 0x10);
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      if (0 < iVar9) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
        } while (iVar9 != iVar6);
      }
      iVar6 = FUN_140aad9fa(param_3);
      lVar8 = (longlong)iVar6 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar6 == -1) {
        local_d8 = 0;
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
      }
      else {
        local_d8 = *(undefined8 *)(lVar8 + 0x10);
        uStack_d0 = *(ulonglong *)(lVar8 + 0x18);
      }
      if (10.0 <= fVar11) {
        fVar11 = 10.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (10.0 <= fVar12) {
        fVar12 = 10.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      local_e8 = uVar3;
      FUN_140aadabc(&local_b0,&local_d8,&local_c8,uVar2);
      local_90 = 0;
      uStack_98 = 0;
      if (local_a8 == iStack_c0) {
        uStack_98 = local_b0;
        local_90 = iStack_c0;
      }
      local_a0 = iStack_c0;
      fStack_84 = fVar11 - fVar12;
      fStack_88 = fVar12;
      if ((longlong *)(param_1 + 0x2e) == &local_b0) {
        param_1[0x36] = local_90;
        *(ulonglong *)(param_1 + 0x37) = CONCAT44(fVar12,uStack_8c);
        param_1[0x39] = fStack_84;
        param_1[0x32] = iStack_c0;
        param_1[0x33] = uStack_9c;
        *(longlong *)(param_1 + 0x34) = uStack_98;
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x2e) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x2e));
        }
        *(longlong *)(param_1 + 0x2e) = local_b0;
        local_b0 = 0;
        param_1[0x30] = local_a8;
        param_1[0x31] = local_a4;
        param_1[0x32] = local_a0;
        param_1[0x33] = uStack_9c;
        param_1[0x34] = (undefined4)uStack_98;
        param_1[0x35] = uStack_98._4_4_;
        *(ulonglong *)(param_1 + 0x36) = CONCAT44(uStack_8c,local_90);
        *(ulonglong *)(param_1 + 0x38) = CONCAT44(fStack_84,fStack_88);
      }
      if (param_1[0x5c] == -1) {
        iVar6 = param_1[0x30];
        pvVar4 = *(void **)(param_1 + 0x2e);
        param_1[0x3c] = iVar6;
        if (iVar6 == 0 && param_1[0x3d] == 0) {
          param_1[0x3d] = 0;
        }
        else {
          FUN_1447c510a(param_1 + 0x3a,iVar6);
          if (iVar6 != 0) {
            memcpy(*(void **)(param_1 + 0x3a),pvVar4,(longlong)iVar6 << 2);
          }
        }
        *(undefined8 *)(param_1 + 0x42) = *(undefined8 *)(param_1 + 0x36);
        *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x38);
        *(undefined8 *)(param_1 + 0x3e) = *(undefined8 *)(param_1 + 0x32);
        *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x34);
      }
    }
  }
  lVar8 = (longlong)(int)param_1[0x5c];
  if ((lVar8 != -1) &&
     (bVar1 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar1 & 0x92) == 0x82)) {
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar12 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if ((bVar1 & 0x40) == 0) {
      if (10.0 <= fVar11) {
        fVar11 = 10.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (10.0 <= fVar12) {
        fVar12 = 10.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      param_1[0x44] = fVar12;
      param_1[0x45] = fVar11 - fVar12;
    }
    else {
      lVar5 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      local_c8 = param_1[6];
      uStack_c4 = param_1[7];
      iStack_c0 = param_1[8];
      uStack_bc = param_1[9];
      iVar6 = *(int *)(lVar5 + 8 + lVar8);
      if (iVar6 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = *(undefined2 **)(lVar5 + lVar8);
      }
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      uVar7 = FUN_144a49b4a(iVar9,puVar10);
      iVar6 = FUN_140aad9fa(param_3,uVar7,lVar5 + lVar8);
      lVar8 = (longlong)iVar6 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar6 == -1) {
        local_d8 = 0;
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
      }
      else {
        local_d8 = *(undefined8 *)(lVar8 + 0x10);
        uStack_d0 = *(ulonglong *)(lVar8 + 0x18);
      }
      if (10.0 <= fVar11) {
        fVar11 = 10.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (10.0 <= fVar12) {
        fVar12 = 10.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      local_e8 = uVar3;
      FUN_140aadabc(&local_b0,&local_d8,&local_c8,uVar2);
      local_a0 = iStack_c0;
      local_90 = 0;
      uStack_98 = 0;
      if (local_a8 == iStack_c0) {
        uStack_98 = local_b0;
        local_90 = iStack_c0;
      }
      fStack_84 = fVar11 - fVar12;
      fStack_88 = fVar12;
      if ((longlong *)(param_1 + 0x3a) == &local_b0) {
        param_1[0x42] = local_90;
        *(ulonglong *)(param_1 + 0x43) = CONCAT44(fVar12,uStack_8c);
        param_1[0x45] = fStack_84;
        param_1[0x3e] = iStack_c0;
        param_1[0x3f] = uStack_9c;
        *(longlong *)(param_1 + 0x40) = uStack_98;
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x3a) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x3a));
        }
        *(longlong *)(param_1 + 0x3a) = local_b0;
        local_b0 = 0;
        param_1[0x3c] = local_a8;
        param_1[0x3d] = local_a4;
        *(ulonglong *)(param_1 + 0x3e) = CONCAT44(uStack_9c,local_a0);
        *(longlong *)(param_1 + 0x40) = uStack_98;
        *(ulonglong *)(param_1 + 0x42) = CONCAT44(uStack_8c,local_90);
        *(ulonglong *)(param_1 + 0x44) = CONCAT44(fStack_84,fStack_88);
      }
    }
  }
  lVar8 = (longlong)(int)param_1[0x5d];
  if ((lVar8 != -1) &&
     (bVar1 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar1 & 0x92) == 0x82)) {
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar12 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if ((bVar1 & 0x40) == 0) {
      if (10.0 <= fVar11) {
        fVar11 = 10.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (10.0 <= fVar12) {
        fVar12 = 10.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      param_1[0x20] = fVar12;
      param_1[0x21] = fVar11 - fVar12;
      if (param_1[0x5e] == -1) {
        param_1[0x2c] = fVar12;
        param_1[0x2d] = fVar11 - fVar12;
      }
    }
    else {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      local_c8 = param_1[6];
      uStack_c4 = param_1[7];
      iStack_c0 = param_1[8];
      uStack_bc = param_1[9];
      iVar6 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar8 * 0x10);
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      if (0 < iVar9) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
        } while (iVar9 != iVar6);
      }
      iVar6 = FUN_140aad9fa(param_3);
      lVar8 = (longlong)iVar6 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar6 == -1) {
        local_d8 = 0;
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
      }
      else {
        local_d8 = *(undefined8 *)(lVar8 + 0x10);
        uStack_d0 = *(ulonglong *)(lVar8 + 0x18);
      }
      if (10.0 <= fVar11) {
        fVar11 = 10.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (10.0 <= fVar12) {
        fVar12 = 10.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      local_e8 = uVar3;
      FUN_140aadabc(&local_b0,&local_d8,&local_c8,uVar2);
      local_90 = 0;
      uStack_98 = 0;
      if (local_a8 == iStack_c0) {
        uStack_98 = local_b0;
        local_90 = iStack_c0;
      }
      local_a0 = iStack_c0;
      fStack_84 = fVar11 - fVar12;
      fStack_88 = fVar12;
      if ((longlong *)(param_1 + 0x16) == &local_b0) {
        param_1[0x1e] = local_90;
        *(ulonglong *)(param_1 + 0x1f) = CONCAT44(fVar12,uStack_8c);
        param_1[0x21] = fStack_84;
        param_1[0x1a] = iStack_c0;
        param_1[0x1b] = uStack_9c;
        *(longlong *)(param_1 + 0x1c) = uStack_98;
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x16) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x16));
        }
        *(longlong *)(param_1 + 0x16) = local_b0;
        local_b0 = 0;
        param_1[0x18] = local_a8;
        param_1[0x19] = local_a4;
        param_1[0x1a] = local_a0;
        param_1[0x1b] = uStack_9c;
        param_1[0x1c] = (undefined4)uStack_98;
        param_1[0x1d] = uStack_98._4_4_;
        *(ulonglong *)(param_1 + 0x1e) = CONCAT44(uStack_8c,local_90);
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(fStack_84,fStack_88);
      }
      if (param_1[0x5e] == -1) {
        iVar6 = param_1[0x18];
        pvVar4 = *(void **)(param_1 + 0x16);
        param_1[0x24] = iVar6;
        if (iVar6 == 0 && param_1[0x25] == 0) {
          param_1[0x25] = 0;
        }
        else {
          FUN_1447c510a(param_1 + 0x22,iVar6);
          if (iVar6 != 0) {
            memcpy(*(void **)(param_1 + 0x22),pvVar4,(longlong)iVar6 << 2);
          }
        }
        *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_1 + 0x1e);
        *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x26) = *(undefined8 *)(param_1 + 0x1a);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x1c);
      }
    }
  }
  lVar8 = (longlong)(int)param_1[0x5e];
  if ((lVar8 != -1) &&
     (bVar1 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar1 & 0x92) == 0x82)) {
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar12 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if ((bVar1 & 0x40) == 0) {
      if (10.0 <= fVar11) {
        fVar11 = 10.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (10.0 <= fVar12) {
        fVar12 = 10.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      param_1[0x2c] = fVar12;
      param_1[0x2d] = fVar11 - fVar12;
    }
    else {
      lVar5 = *(longlong *)(param_2 + 0x38);
      lVar8 = lVar8 * 0x10;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      local_c8 = param_1[6];
      uStack_c4 = param_1[7];
      iStack_c0 = param_1[8];
      uStack_bc = param_1[9];
      iVar6 = *(int *)(lVar5 + 8 + lVar8);
      if (iVar6 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      else {
        puVar10 = *(undefined2 **)(lVar5 + lVar8);
      }
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      uVar7 = FUN_144a49b4a(iVar9,puVar10);
      iVar6 = FUN_140aad9fa(param_3,uVar7,lVar5 + lVar8);
      lVar8 = (longlong)iVar6 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar6 == -1) {
        local_d8 = 0;
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
      }
      else {
        local_d8 = *(undefined8 *)(lVar8 + 0x10);
        uStack_d0 = *(ulonglong *)(lVar8 + 0x18);
      }
      if (10.0 <= fVar11) {
        fVar11 = 10.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (10.0 <= fVar12) {
        fVar12 = 10.0;
      }
      if (fVar12 <= 0.0) {
        fVar12 = 0.0;
      }
      local_e8 = uVar3;
      FUN_140aadabc(&local_b0,&local_d8,&local_c8,uVar2);
      local_a0 = iStack_c0;
      local_90 = 0;
      uStack_98 = 0;
      if (local_a8 == iStack_c0) {
        uStack_98 = local_b0;
        local_90 = iStack_c0;
      }
      fStack_84 = fVar11 - fVar12;
      fStack_88 = fVar12;
      if ((longlong *)(param_1 + 0x22) == &local_b0) {
        param_1[0x2a] = local_90;
        *(ulonglong *)(param_1 + 0x2b) = CONCAT44(fVar12,uStack_8c);
        param_1[0x2d] = fStack_84;
        param_1[0x26] = iStack_c0;
        param_1[0x27] = uStack_9c;
        *(longlong *)(param_1 + 0x28) = uStack_98;
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x22) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x22));
        }
        *(longlong *)(param_1 + 0x22) = local_b0;
        local_b0 = 0;
        param_1[0x24] = local_a8;
        param_1[0x25] = local_a4;
        *(ulonglong *)(param_1 + 0x26) = CONCAT44(uStack_9c,local_a0);
        *(longlong *)(param_1 + 0x28) = uStack_98;
        *(ulonglong *)(param_1 + 0x2a) = CONCAT44(uStack_8c,local_90);
        *(ulonglong *)(param_1 + 0x2c) = CONCAT44(fStack_84,fStack_88);
      }
    }
  }
  lVar8 = (longlong)(int)param_1[0x5f];
  if ((lVar8 != -1) && ((*(byte *)(*(longlong *)(param_2 + 0x48) + lVar8) & 0x92) == 0x82)) {
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if (fVar11 <= 0.0) {
      fVar11 = 0.0;
    }
    param_1[0x59] = fVar11 / (param_4 * param_4 * param_4);
  }
  lVar8 = (longlong)(int)param_1[0x60];
  if ((lVar8 != -1) &&
     (bVar1 = *(byte *)(*(longlong *)(param_2 + 0x48) + lVar8), (bVar1 & 0x92) == 0x82)) {
    fVar11 = *(float *)(*(longlong *)(param_2 + 0x28) + lVar8 * 0xc);
    fVar12 = *(float *)(*(longlong *)(param_2 + 0x18) + lVar8 * 0xc);
    if ((bVar1 & 0x40) == 0) {
      fVar12 = fVar12 / param_4;
      param_1[0x50] = fVar12;
      param_1[0x51] = fVar11 / param_4 - fVar12;
    }
    else {
      uVar2 = *param_1;
      uVar3 = param_1[1];
      local_c8 = param_1[6];
      uStack_c4 = param_1[7];
      iStack_c0 = param_1[8];
      uStack_bc = param_1[9];
      iVar6 = *(int *)(*(longlong *)(param_2 + 0x38) + 8 + lVar8 * 0x10);
      iVar9 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      if (0 < iVar9) {
        iVar6 = 0;
        do {
          iVar6 = iVar6 + 1;
        } while (iVar9 != iVar6);
      }
      iVar6 = FUN_140aad9fa(param_3);
      lVar8 = (longlong)iVar6 * 0x28 + *param_3;
      if (lVar8 == 0 || iVar6 == -1) {
        local_d8 = 0;
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
      }
      else {
        local_d8 = *(undefined8 *)(lVar8 + 0x10);
        uStack_d0 = *(ulonglong *)(lVar8 + 0x18);
      }
      fVar12 = fVar12 / param_4;
      local_e8 = uVar3;
      FUN_140aadabc(&local_b0,&local_d8,&local_c8,uVar2);
      local_a0 = iStack_c0;
      local_90 = 0;
      uStack_98 = 0;
      if (local_a8 == iStack_c0) {
        uStack_98 = local_b0;
        local_90 = iStack_c0;
      }
      fStack_84 = fVar11 / param_4 - fVar12;
      fStack_88 = fVar12;
      if ((longlong *)(param_1 + 0x46) == &local_b0) {
        param_1[0x4e] = local_90;
        *(ulonglong *)(param_1 + 0x4f) = CONCAT44(fVar12,uStack_8c);
        param_1[0x51] = fStack_84;
        param_1[0x4a] = iStack_c0;
        param_1[0x4b] = uStack_9c;
        *(longlong *)(param_1 + 0x4c) = uStack_98;
        if (local_b0 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x46) != 0) {
          FUN_1400020a8(*(longlong *)(param_1 + 0x46));
        }
        *(longlong *)(param_1 + 0x46) = local_b0;
        param_1[0x48] = local_a8;
        param_1[0x49] = local_a4;
        *(ulonglong *)(param_1 + 0x4a) = CONCAT44(uStack_9c,local_a0);
        *(longlong *)(param_1 + 0x4c) = uStack_98;
        *(ulonglong *)(param_1 + 0x4e) = CONCAT44(uStack_8c,local_90);
        *(ulonglong *)(param_1 + 0x50) = CONCAT44(fStack_84,fStack_88);
      }
    }
  }
  if (param_5 == '\0') {
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)param_1[0x59] * 0.25;
  }
  param_1[0x5a] = fVar11;
  if ((local_80 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14172d3d6 FUN_14172d3d6 body=372 status=ok
// SIG undefined FUN_14172d3d6(void)

void FUN_14172d3d6(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 6;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14172d460;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_14172d460:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 6)) {
    uVar7 = uVar5 / 6 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,6,2);
  return;
}



// FUNCTION 14172d54c FUN_14172d54c body=271 status=ok
// SIG undefined FUN_14172d54c(void)

undefined8 *
FUN_14172d54c(undefined8 *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,float param_9)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = DAT_14c84635c;
  local_50 = 0;
  local_58 = param_7;
  local_60 = param_6;
  local_68 = param_5;
  FUN_14025efd6(param_1);
  *param_1 = &PTR_FUN_149f57478;
  *(float *)(param_1 + 7) = param_8;
  fVar2 = logf(param_8);
  *(float *)((longlong)param_1 + 0x3c) = fVar2;
  param_1[8] = 0;
  fVar2 = param_2[1];
  if (param_9 <= param_2[1]) {
    fVar2 = param_9;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = *param_2;
  if (param_9 <= *param_2) {
    fVar3 = param_9;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  bVar1 = 1;
  if ((*(float *)(param_1 + 5) == fVar3) && (!NAN(*(float *)(param_1 + 5)) && !NAN(fVar3))) {
    bVar1 = -(*(float *)((longlong)param_1 + 0x2c) != fVar2) & 1;
  }
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | bVar1;
  *(float *)(param_1 + 5) = fVar3;
  *(float *)((longlong)param_1 + 0x2c) = fVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172d65c FUN_14172d65c body=902 status=ok
// SIG undefined FUN_14172d65c(void)

void FUN_14172d65c(longlong param_1,double *param_2,double *param_3,double *param_4)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  double dVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_a0;
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
  ulonglong local_40;
  undefined4 uVar9;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_58 = -3.4028234663852886e+38;
  local_50 = -3.4028234663852886e+38;
  local_48 = -3.4028234663852886e+38;
  local_70 = 3.4028234663852886e+38;
  local_68 = 3.4028234663852886e+38;
  local_60 = 3.4028234663852886e+38;
  local_88 = -3.4028234663852886e+38;
  local_80 = -3.4028234663852886e+38;
  local_78 = -3.4028234663852886e+38;
  local_a0 = 3.4028234663852886e+38;
  local_98 = 3.4028234663852886e+38;
  local_90 = 3.4028234663852886e+38;
  local_a8 = DAT_14c8464f0;
  local_b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dStack_b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_c8 = DAT_14c8464f0;
  local_d8 = (undefined4)DAT_14c8464e0;
  uStack_d4 = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_58,&local_70,&local_b8);
  }
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x48))(plVar1,&local_88,&local_a0,&local_d8);
  }
  dVar15 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dVar12 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_4[2] = DAT_14c8464f0;
  *param_4 = dVar15;
  param_4[1] = dVar12;
  dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  bVar3 = local_b8 == (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  bVar4 = dStack_b0 == dVar15;
  bVar2 = local_a8 == DAT_14c8464f0;
  if (bVar2 && (bVar4 && bVar3)) {
    dVar12 = 1.0;
  }
  else {
    *param_4 = local_b8 + *param_4;
    param_4[1] = dStack_b0 + param_4[1];
    param_4[2] = local_a8 + param_4[2];
    dVar15 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    dVar12 = 2.0;
  }
  dVar13 = (double)CONCAT44(uStack_d4,local_d8);
  dVar5 = (double)CONCAT44(uStack_cc,uStack_d0);
  dVar14 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  if ((((dVar13 != (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0)) ||
       (NAN(dVar13) || NAN(dVar14))) || (dVar5 != dVar15)) ||
     (((NAN(dVar5) || NAN(dVar15) || (local_c8 != DAT_14c8464f0)) ||
      (NAN(local_c8) || NAN(DAT_14c8464f0))))) {
    dVar14 = dVar13 + *param_4;
    dVar15 = dVar5 + param_4[1];
    dVar13 = local_c8 + param_4[2];
LAB_14172d86c:
    dVar12 = 1.0 / dVar12;
    dVar13 = dVar13 * dVar12;
    dVar15 = dVar15 * dVar12;
    dVar14 = dVar12 * dVar14;
  }
  else {
    dVar13 = DAT_14c8464f0;
    if (!bVar2 || (!bVar4 || !bVar3)) {
      dVar13 = param_4[2];
      dVar14 = *param_4;
      dVar15 = param_4[1];
      dVar12 = 1.0;
      goto LAB_14172d86c;
    }
  }
  *param_4 = dVar14;
  param_4[1] = dVar15;
  param_4[2] = dVar13;
  uVar10 = (undefined4)((ulonglong)local_48 >> 0x20);
  uVar8 = (undefined4)((ulonglong)local_78 >> 0x20);
  uVar11 = (undefined4)((ulonglong)local_60 >> 0x20);
  uVar9 = (undefined4)((ulonglong)local_90 >> 0x20);
  uVar7 = SUB84(local_60,0);
  dVar15 = local_70;
  dVar12 = local_68;
  if (*(int *)(param_1 + 0x20) == 1) {
    uVar6 = SUB84(local_48,0);
    if (local_48 <= local_78) {
      uVar6 = SUB84(local_78,0);
      uVar10 = uVar8;
    }
    dVar14 = local_50;
    if (local_50 <= local_80) {
      dVar14 = local_80;
    }
    dVar13 = local_58;
    if (local_58 <= local_88) {
      dVar13 = local_88;
    }
    *param_2 = dVar13;
    param_2[1] = dVar14;
    param_2[2] = (double)CONCAT44(uVar10,uVar6);
    if (local_90 <= local_60) {
      uVar7 = SUB84(local_90,0);
      uVar11 = uVar9;
    }
    if (local_98 <= local_68) {
      dVar12 = local_98;
    }
    if (local_a0 <= local_70) {
      dVar15 = local_a0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x20) != 0) goto LAB_14172d920;
    uVar6 = SUB84(local_48,0);
    if (local_78 <= local_48) {
      uVar6 = SUB84(local_78,0);
      uVar10 = uVar8;
    }
    dVar14 = local_50;
    if (local_80 <= local_50) {
      dVar14 = local_80;
    }
    dVar13 = local_58;
    if (local_88 <= local_58) {
      dVar13 = local_88;
    }
    *param_2 = dVar13;
    param_2[1] = dVar14;
    param_2[2] = (double)CONCAT44(uVar10,uVar6);
    if (local_60 <= local_90) {
      uVar7 = SUB84(local_90,0);
      uVar11 = uVar9;
    }
    if (local_68 <= local_98) {
      dVar12 = local_98;
    }
    if (local_70 <= local_a0) {
      dVar15 = local_a0;
    }
  }
  *param_3 = dVar15;
  param_3[1] = dVar12;
  param_3[2] = (double)CONCAT44(uVar11,uVar7);
LAB_14172d920:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14172d9e4 FUN_14172d9e4 body=70 status=ok
// SIG undefined FUN_14172d9e4(void)

int FUN_14172d9e4(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x30);
  iVar3 = -1;
  if (((plVar1 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
     (iVar2 = (**(code **)(*plVar1 + 0x60))(), 0 < iVar2)) {
    iVar2 = 0;
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(plVar1[2] + (longlong)iVar3 * 4);
    } while (iVar2 != -1);
  }
  return iVar3;
}



// FUNCTION 14172da2a FUN_14172da2a body=119 status=ok
// SIG undefined FUN_14172da2a(void)

void FUN_14172da2a(undefined8 *param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar1);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      uVar3 = 1 << ((byte)uVar2 & 0x1f);
      puVar4 = (undefined8 *)param_1[4];
      if ((undefined8 *)param_1[4] == (undefined8 *)0x0) {
        puVar4 = param_1 + 2;
      }
      uVar5 = uVar2 >> 5 & 0x7ffffff;
      if (*(int *)(param_2[2] + uVar2 * 4) == -1) {
        uVar3 = ~uVar3 & *(uint *)((longlong)puVar4 + uVar5 * 4);
      }
      else {
        uVar3 = uVar3 | *(uint *)((longlong)puVar4 + uVar5 * 4);
      }
      *(uint *)((longlong)puVar4 + uVar5 * 4) = uVar3;
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  return;
}



// FUNCTION 14172daa2 FUN_14172daa2 body=148 status=ok
// SIG undefined FUN_14172daa2(void)

void FUN_14172daa2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = param_1[4];
  lVar6 = param_1[5];
  lVar7 = *param_2;
  lVar8 = param_2[1];
  lVar9 = param_2[2];
  lVar10 = param_2[3];
  lVar11 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar11;
  param_1[2] = lVar9;
  param_1[3] = lVar10;
  *param_1 = lVar7;
  param_1[1] = lVar8;
  local_48._0_4_ = (undefined4)lVar1;
  local_48._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_40._0_4_ = (undefined4)lVar2;
  uStack_40._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_38._0_4_ = (undefined4)lVar3;
  local_38._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar4;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  local_28._0_4_ = (undefined4)lVar5;
  local_28._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar6;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
  *(undefined4 *)(param_2 + 4) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_2 + 5) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_20._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_38._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_30._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 4) = local_48._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
  local_48 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172db38 FUN_14172db38 body=59 status=ok
// SIG undefined FUN_14172db38(void)

undefined8 * FUN_14172db38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f627f0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172db74 FUN_14172db74 body=122 status=ok
// SIG undefined FUN_14172db74(void)

void FUN_14172db74(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  lVar4 = param_1[3];
  lVar5 = *param_2;
  lVar6 = param_2[1];
  lVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = lVar7;
  *param_1 = lVar5;
  param_1[1] = lVar6;
  local_38._0_4_ = (undefined4)lVar1;
  local_38._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_30._0_4_ = (undefined4)lVar2;
  uStack_30._4_4_ = (undefined4)((ulonglong)lVar2 >> 0x20);
  local_28._0_4_ = (undefined4)lVar3;
  local_28._4_4_ = (undefined4)((ulonglong)lVar3 >> 0x20);
  uStack_20._0_4_ = (undefined4)lVar4;
  uStack_20._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
  *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_28._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)uStack_20;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_20._4_4_;
  *(undefined4 *)param_2 = (undefined4)local_38;
  *(undefined4 *)((longlong)param_2 + 4) = local_38._4_4_;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_30._4_4_;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = lVar1;
  uStack_30 = lVar2;
  local_28 = lVar3;
  uStack_20 = lVar4;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172dbf0 FUN_14172dbf0 body=353 status=ok
// SIG undefined FUN_14172dbf0(void)

void FUN_14172dbf0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14172dc75;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14172dc75:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14172dd52 FUN_14172dd52 body=362 status=ok
// SIG undefined FUN_14172dd52(void)

void FUN_14172dd52(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar3;
  iVar6 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar6 - uVar3) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar3 * 3) < iVar6 * 2)) && ((uVar3 == 0 || (0x40 < (int)(iVar6 - uVar3))))) {
    if (0 < (int)uVar3) {
      uVar5 = uVar5 * 8;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar4 = uVar5 + 0xf;
          if (uVar3 < 0xfff) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
          }
          else {
            if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14172de17;
                lVar1 = uVar7 + 1 + uVar8;
                uVar8 = uVar8 - 1;
              } while (lVar1 != 0x33);
            }
            uVar5 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar5 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar5 & ((uVar4 & 0x7fffffff0) + uVar5) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
LAB_14172de17:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 14172debc FUN_14172debc body=275 status=ok
// SIG undefined FUN_14172debc(void)

void FUN_14172debc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x120;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14172dfd0 FUN_14172dfd0 body=427 status=ok
// SIG undefined FUN_14172dfd0(void)

void FUN_14172dfd0(longlong param_1,undefined8 *param_2)

{
  BOOLEAN BVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  BVar1 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar1 != '\0') {
    local_78 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    local_60 = &local_78;
    local_58 = param_2;
    FUN_1407ece1a(param_1 + 0xf8,&local_80,&local_60,0);
    local_78 = 0;
    uStack_70 = 0;
    cVar2 = (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_78);
    lVar3 = local_78;
    if (cVar2 == '\0') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
      if (lVar3 != 0) {
        local_80 = (**(code **)(*(longlong *)*param_2 + 0x18))();
        local_60 = &local_80;
        local_58 = param_2;
        FUN_1407ece1a(param_1 + 0xa8,local_4c,&local_60,0);
      }
    }
    else {
      lVar4 = (longlong)(int)uStack_70;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          local_80 = *(longlong *)(lVar3 + lVar5);
          local_60 = &local_80;
          local_58 = param_2;
          FUN_146e9ed00(param_1 + 0x58,local_4c,&local_60,0);
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
    if (local_78 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  FUN_146e9f100(param_1 + 0x150,param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014172e11f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  return;
}



// FUNCTION 14172e18e FUN_14172e18e body=814 status=ok
// SIG undefined FUN_14172e18e(void)

void FUN_14172e18e(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  BOOLEAN BVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70 = param_2;
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar9 == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    FUN_146e9f400(param_1 + 0x160,&local_70);
    if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Could not recover jumptable at 0x00014172e3d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  local_88 = 0;
  uStack_80 = 0;
  lVar16 = param_1 + 0x68;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar13 = 0;
  local_60 = lVar16;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x80);
  }
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_a8 = local_68;
  local_a0 = local_60;
  local_b0 = plVar1;
  if ((iStack_54 != iVar13) || (local_60 != lVar16)) {
    do {
      local_b8 = *local_b0;
      lVar11 = (longlong)iStack_94;
      plVar5 = *(longlong **)(local_b8 + 8 + lVar11 * 0x18);
      if ((plVar5 != (longlong *)0x0) &&
         (uVar12 = (**(code **)(*plVar5 + 0x18))(), uVar12 == param_2)) {
        local_c0 = (longlong)(int)uStack_80;
        uVar10 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
        if (uStack_80._4_4_ < uVar10) {
          FUN_146e9f2b0(&local_88,local_c0);
        }
        puVar2 = (undefined4 *)(local_b8 + lVar11 * 0x18);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)(local_88 + local_c0 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
      lVar11 = local_88;
    } while (((iStack_94 != iVar13) || (local_a0 != lVar16)) || (local_b0 != plVar1));
    lVar16 = (longlong)(int)uStack_80;
    if (lVar16 != 0) {
      lVar14 = 0;
      do {
        FUN_146e9f1f0(plVar1,*(undefined8 *)(lVar11 + lVar14),*(undefined8 *)(lVar11 + 8 + lVar14));
        lVar14 = lVar14 + 0x10;
      } while (lVar16 * 0x10 != lVar14);
    }
  }
  FUN_140652a86(param_1 + 0xa8,param_2);
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    uVar10 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    lVar16 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x138);
    }
    iVar13 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(param_1 + 0x140) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar13 != -1) {
      do {
        puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar13 * 0x18);
        if (*puVar15 == param_2) {
          if ((puVar15 != (ulonglong *)0x0) && (puVar15 = puVar15 + 1, puVar15 != (ulonglong *)0x0))
          {
            puVar4 = (undefined8 *)*puVar15;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            *puVar15 = 0;
            FUN_140652a86((longlong *)(param_1 + 0xf8),param_2);
          }
          break;
        }
        iVar13 = (int)puVar15[2];
      } while (iVar13 != -1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (local_88 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14172e4d2 FUN_14172e4d2 body=373 status=ok
// SIG undefined FUN_14172e4d2(void)

void FUN_14172e4d2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  BOOLEAN BVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar2 != '\0') {
    local_78 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    local_60 = &local_78;
    local_58 = param_2;
    FUN_1407ece1a(param_1 + 0xf8,&local_80,&local_60,0);
    local_78 = 0;
    uStack_70 = 0;
    cVar3 = (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_78);
    lVar1 = local_78;
    if (cVar3 == '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
    }
    else {
      lVar4 = (longlong)(int)uStack_70;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          local_80 = *(longlong *)(lVar1 + lVar5);
          local_60 = &local_80;
          local_58 = param_2;
          FUN_146e9ed00(param_1 + 0x58,local_4c,&local_60,0);
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
    if (local_78 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  FUN_146e9f100(param_1 + 0x150,param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014172e5eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  return;
}



// FUNCTION 14172e65a FUN_14172e65a body=814 status=ok
// SIG undefined FUN_14172e65a(void)

void FUN_14172e65a(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  BOOLEAN BVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong *puVar15;
  longlong lVar16;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_70 = param_2;
  BVar9 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar9 == '\0') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    FUN_146e9f400(param_1 + 0x160,&local_70);
    if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Could not recover jumptable at 0x00014172e89d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x58);
  local_88 = 0;
  uStack_80 = 0;
  lVar16 = param_1 + 0x68;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar13 = 0;
  local_60 = lVar16;
  if (*(int *)(param_1 + 0x80) != 0) {
    FUN_1449c0562(&local_68);
    iVar13 = *(int *)(param_1 + 0x80);
  }
  local_98 = local_58;
  iStack_94 = iStack_54;
  local_90 = local_50;
  local_8c = local_4c;
  local_a8 = local_68;
  local_a0 = local_60;
  local_b0 = plVar1;
  if ((iStack_54 != iVar13) || (local_60 != lVar16)) {
    do {
      local_b8 = *local_b0;
      lVar11 = (longlong)iStack_94;
      plVar5 = *(longlong **)(local_b8 + 8 + lVar11 * 0x18);
      if ((plVar5 != (longlong *)0x0) &&
         (uVar12 = (**(code **)(*plVar5 + 0x18))(), uVar12 == param_2)) {
        local_c0 = (longlong)(int)uStack_80;
        uVar10 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
        if (uStack_80._4_4_ < uVar10) {
          FUN_146e9f2b0(&local_88,local_c0);
        }
        puVar2 = (undefined4 *)(local_b8 + lVar11 * 0x18);
        uVar6 = puVar2[1];
        uVar7 = puVar2[2];
        uVar8 = puVar2[3];
        puVar3 = (undefined4 *)(local_88 + local_c0 * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar3[2] = uVar7;
        puVar3[3] = uVar8;
      }
      local_98 = local_98 & ~local_a8._4_4_;
      FUN_1449c0562(&local_a8);
      lVar11 = local_88;
    } while (((iStack_94 != iVar13) || (local_a0 != lVar16)) || (local_b0 != plVar1));
    lVar16 = (longlong)(int)uStack_80;
    if (lVar16 != 0) {
      lVar14 = 0;
      do {
        FUN_146e9f1f0(plVar1,*(undefined8 *)(lVar11 + lVar14),*(undefined8 *)(lVar11 + 8 + lVar14));
        lVar14 = lVar14 + 0x10;
      } while (lVar16 * 0x10 != lVar14);
    }
  }
  FUN_140652a86(param_1 + 0xa8,param_2);
  if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
    uVar10 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    lVar16 = param_1 + 0x130;
    if (*(longlong *)(param_1 + 0x138) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x138);
    }
    iVar13 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(param_1 + 0x140) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar13 != -1) {
      do {
        puVar15 = (ulonglong *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar13 * 0x18);
        if (*puVar15 == param_2) {
          if ((puVar15 != (ulonglong *)0x0) && (puVar15 = puVar15 + 1, puVar15 != (ulonglong *)0x0))
          {
            puVar4 = (undefined8 *)*puVar15;
            if (puVar4 != (undefined8 *)0x0) {
              (**(code **)*puVar4)(puVar4,1);
            }
            *puVar15 = 0;
            FUN_140652a86((longlong *)(param_1 + 0xf8),param_2);
          }
          break;
        }
        iVar13 = (int)puVar15[2];
      } while (iVar13 != -1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (local_88 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
}



// FUNCTION 14172e99e FUN_14172e99e body=139 status=ok
// SIG undefined FUN_14172e99e(void)

void FUN_14172e99e(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 0x18;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e02];
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x18,8);
  }
  iVar1 = (int)(uVar2 >> 3);
  iVar3 = 0x7fffffff;
  if (2 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446f8d3c(param_1,0,iVar3,8,8);
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 14172ea2a FUN_14172ea2a body=427 status=ok
// SIG undefined FUN_14172ea2a(void)

void FUN_14172ea2a(longlong param_1,undefined8 *param_2)

{
  BOOLEAN BVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  BVar1 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar1 != '\0') {
    local_78 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    local_60 = &local_78;
    local_58 = param_2;
    FUN_1407ece1a(param_1 + 0xf8,&local_80,&local_60,0);
    local_78 = 0;
    uStack_70 = 0;
    cVar2 = (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_78);
    lVar3 = local_78;
    if (cVar2 == '\0') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
      if (lVar3 != 0) {
        local_80 = (**(code **)(*(longlong *)*param_2 + 0x18))();
        local_60 = &local_80;
        local_58 = param_2;
        FUN_1407ece1a(param_1 + 0xa8,local_4c,&local_60,0);
      }
    }
    else {
      lVar4 = (longlong)(int)uStack_70;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          local_80 = *(longlong *)(lVar3 + lVar5);
          local_60 = &local_80;
          local_58 = param_2;
          FUN_146e9ed00(param_1 + 0x58,local_4c,&local_60,0);
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
    if (local_78 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  FUN_146e9f100(param_1 + 0x150,param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014172eb79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  return;
}



// FUNCTION 14172ebe8 FUN_14172ebe8 body=427 status=ok
// SIG undefined FUN_14172ebe8(void)

void FUN_14172ebe8(longlong param_1,undefined8 *param_2)

{
  BOOLEAN BVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  BVar1 = TryAcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
  if (BVar1 != '\0') {
    local_78 = (**(code **)(*(longlong *)*param_2 + 0x18))();
    local_60 = &local_78;
    local_58 = param_2;
    FUN_1407ece1a(param_1 + 0xf8,&local_80,&local_60,0);
    local_78 = 0;
    uStack_70 = 0;
    cVar2 = (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_78);
    lVar3 = local_78;
    if (cVar2 == '\0') {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x28))();
      if (lVar3 != 0) {
        local_80 = (**(code **)(*(longlong *)*param_2 + 0x18))();
        local_60 = &local_80;
        local_58 = param_2;
        FUN_1407ece1a(param_1 + 0xa8,local_4c,&local_60,0);
      }
    }
    else {
      lVar4 = (longlong)(int)uStack_70;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          local_80 = *(longlong *)(lVar3 + lVar5);
          local_60 = &local_80;
          local_58 = param_2;
          FUN_146e9ed00(param_1 + 0x58,local_4c,&local_60,0);
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x148));
    if (local_78 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  FUN_146e9f100(param_1 + 0x150,param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x00014172ed37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x170));
  return;
}



// FUNCTION 14172eda6 FUN_14172eda6 body=29 status=ok
// SIG undefined FUN_14172eda6(void)

undefined8 FUN_14172eda6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172edd0 FUN_14172edd0 body=57 status=ok
// SIG undefined FUN_14172edd0(void)

undefined8 * FUN_14172edd0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f630b0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172ee0a FUN_14172ee0a body=29 status=ok
// SIG undefined FUN_14172ee0a(void)

undefined8 FUN_14172ee0a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172ee28 FUN_14172ee28 body=59 status=ok
// SIG undefined FUN_14172ee28(void)

undefined8 * FUN_14172ee28(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f62e30;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172ee64 FUN_14172ee64 body=29 status=ok
// SIG undefined FUN_14172ee64(void)

undefined8 FUN_14172ee64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172ee82 FUN_14172ee82 body=302 status=ok
// SIG undefined FUN_14172ee82(void)

undefined4 *
FUN_14172ee82(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405dc782(param_1,local_50);
  puVar1 = (uint *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  local_48[1] = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_140263f5a(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140264164(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172efb2 FUN_14172efb2 body=239 status=ok
// SIG undefined FUN_14172efb2(void)

void FUN_14172efb2(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  
  FUN_1409bcfe4();
  if (DAT_14c9974a8 == param_2) {
    if (param_3 < param_4 + param_3) {
      iVar3 = (int)DAT_14c75f3b2;
      do {
        lVar4 = (longlong)(int)param_3;
        *(int *)(*(longlong *)(param_1 + 400) + lVar4 * 4) = iVar3;
        *(int *)(*(longlong *)(param_1 + 0x120) + lVar4 * 4) = iVar3;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1b0) + lVar4 * 4) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1d0) + lVar4 * 4) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x1f0) + lVar4 * 4) = 0;
        *(undefined4 *)(*(longlong *)(param_1 + 0x210) + lVar4 * 4) = 0xffffffff;
        param_3 = param_3 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    return;
  }
  if ((DAT_14c996ae0 == param_2) && (param_3 < param_4 + param_3)) {
    do {
      uVar2 = *(undefined8 *)(param_1 + 0x178);
      puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x250) + (longlong)(int)param_3 * 0x10);
      *puVar1 = *(undefined8 *)(param_1 + 0x170);
      puVar1[1] = uVar2;
      param_3 = param_3 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 14172f0a0 FUN_14172f0a0 body=59 status=ok
// SIG undefined FUN_14172f0a0(void)

undefined8 * FUN_14172f0a0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63990;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f0dc FUN_14172f0dc body=29 status=ok
// SIG undefined FUN_14172f0dc(void)

undefined8 FUN_14172f0dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f0fa FUN_14172f0fa body=29 status=ok
// SIG undefined FUN_14172f0fa(void)

undefined8 FUN_14172f0fa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f118 FUN_14172f118 body=71 status=ok
// SIG undefined FUN_14172f118(void)

undefined8 * FUN_14172f118(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f63e10;
  FUN_140f35b7a(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f160 FUN_14172f160 body=29 status=ok
// SIG undefined FUN_14172f160(void)

undefined8 FUN_14172f160(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f17d FUN_14172f17d body=49 status=ok
// SIG undefined FUN_14172f17d(void)

longlong FUN_14172f17d(void)

{
  if (DAT_14c997018 == 0) {
    FUN_14086a14e(&DAT_14c997018,&PTR_FUN_149f64dc8);
  }
  return DAT_14c997018;
}



// FUNCTION 14172f1ae FUN_14172f1ae body=57 status=ok
// SIG undefined FUN_14172f1ae(void)

undefined8 * FUN_14172f1ae(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6b350;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f1f4 FUN_14172f1f4 body=39 status=ok
// SIG undefined FUN_14172f1f4(void)

void FUN_14172f1f4(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_1447a8aa0(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 14172f21c FUN_14172f21c body=57 status=ok
// SIG undefined FUN_14172f21c(void)

undefined8 * FUN_14172f21c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f69c40;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f256 FUN_14172f256 body=71 status=ok
// SIG undefined FUN_14172f256(void)

undefined8 * FUN_14172f256(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6b230;
  FUN_144756766(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f29e FUN_14172f29e body=176 status=ok
// SIG undefined FUN_14172f29e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14172f29e(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9974e8) {
    FUN_144b3d300(&DAT_14c9974e8);
    if (DAT_14c9974e8 == -1) {
      uVar1 = FUN_145765498();
      FUN_1446f470e(&local_20,L"FPositionConstraintHandle",1);
      _DAT_14c9974d8 = local_20;
      _DAT_14c9974e0 = uVar1;
      _Init_thread_footer(&DAT_14c9974e8);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return &DAT_14c9974d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14172f350 FUN_14172f350 body=275 status=ok
// SIG undefined FUN_14172f350(void)

void FUN_14172f350(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14172f464 FUN_14172f464 body=277 status=ok
// SIG undefined FUN_14172f464(void)

ulonglong FUN_14172f464(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar5 = (ulonglong)uVar1;
  iVar6 = *(int *)(param_1 + 0xc);
  uVar3 = iVar6 - uVar1;
  uVar4 = (ulonglong)uVar3;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar3 * 0x30)) || ((int)(uVar1 * 3) < iVar6 * 2)) &&
     (uVar4 = (ulonglong)CONCAT31((int3)(uVar3 >> 8),(int)uVar3 < 0x41),
     uVar1 == 0 || (int)uVar3 >= 0x41)) {
    if (0 < (int)uVar1) {
      uVar5 = uVar5 * 0x30;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x2ab) {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar5 = -uVar4 & (uVar5 + uVar4) - 1;
          }
        }
        else {
          uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
          iVar6 = *(int *)(param_1 + 0xc);
        }
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar5;
      uVar4 = SUB168(auVar2 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
      uVar5 = uVar5 / 0x30;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      uVar4 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x30,8);
    }
  }
  return uVar4;
}



// FUNCTION 14172f57a FUN_14172f57a body=255 status=ok
// SIG undefined FUN_14172f57a(void)

void FUN_14172f57a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14172f67a FUN_14172f67a body=252 status=ok
// SIG undefined FUN_14172f67a(void)

void FUN_14172f67a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar3 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x40;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x200) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 * 4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 6 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x40,8);
    }
  }
  return;
}



// FUNCTION 14172f776 FUN_14172f776 body=29 status=ok
// SIG undefined FUN_14172f776(void)

undefined8 FUN_14172f776(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f794 FUN_14172f794 body=29 status=ok
// SIG undefined FUN_14172f794(void)

undefined8 FUN_14172f794(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14172f7b2 FUN_14172f7b2 body=320 status=ok
// SIG undefined FUN_14172f7b2(void)

void FUN_14172f7b2(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14172f81b;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14172f81b:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14172f8f2 FUN_14172f8f2 body=255 status=ok
// SIG undefined FUN_14172f8f2(void)

void FUN_14172f8f2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14172f9f2 FUN_14172f9f2 body=353 status=ok
// SIG undefined FUN_14172f9f2(void)

void FUN_14172f9f2(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14172fa79;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14172fa79:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14172fb54 FUN_14172fb54 body=633 status=ok
// SIG undefined FUN_14172fb54(void)

void FUN_14172fb54(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  uint local_5c;
  
  lVar13 = CONCAT71((int7)((ulonglong)param_3 >> 8),param_2 != (longlong *)0x0);
  lVar7 = *param_2;
  lVar16 = (longlong)(int)param_2[1];
  if ((param_2 != (longlong *)0x0 && 1 < *(byte *)((longlong)param_2 + 0xc)) &&
     (lVar13 = lVar16 * 0x10, *(char *)(*(longlong *)(lVar7 + 0x2c0) + 0xd + lVar13) == '\x01')) {
    if (*(byte *)((longlong)param_2 + 0xc) < 3) {
      return;
    }
    plVar4 = *(longlong **)(*(longlong *)(lVar7 + 0x5a8) + lVar13);
    if (plVar4 == (longlong *)0x0) {
      return;
    }
    if (*(byte *)((longlong)plVar4 + 0xc) < 3) {
      return;
    }
    if ((*(byte *)(*(longlong *)(*plVar4 + 0x680) + (longlong)(int)plVar4[1]) & 1) == 0) {
      return;
    }
    lVar13 = *(longlong *)(lVar7 + 200);
    if (*(longlong *)(*(longlong *)(*plVar4 + 200) + (longlong)(int)plVar4[1] * 8) !=
        *(longlong *)(lVar13 + lVar16 * 8)) {
      return;
    }
  }
  if ((*(char *)(*(longlong *)(lVar7 + 0xe0) + lVar16) != '\0') || (DAT_14c9978a0 != 0)) {
    uVar1 = *(undefined4 *)(*(longlong *)(lVar7 + 0x80) + lVar16 * 4);
    puVar6 = (undefined8 *)
             FUN_1447eab44(param_1 + 0x360,uVar1,CONCAT71((int7)((ulonglong)lVar13 >> 8),1));
    *(undefined1 *)(puVar6 + 8) = 2;
    lVar13 = *param_2;
    lVar9 = (longlong)(int)param_2[1];
    uVar2 = *(undefined4 *)(*(longlong *)(lVar13 + 0x80) + lVar9 * 4);
    lVar7 = *(longlong *)(lVar13 + 0xf8) + lVar9 * 0x18;
    lVar16 = *(longlong *)(lVar7 + 8);
    if (*(longlong *)(lVar7 + 8) == 0) {
      lVar16 = lVar7;
    }
    if ((longlong)*(int *)(lVar7 + 0x10) == 0) {
      uVar15 = 0;
      uVar14 = 0;
      uVar12 = 0;
      local_5c = 0;
      uVar11 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar5 = 0;
    }
    else {
      lVar19 = (longlong)*(int *)(lVar7 + 0x10) * 8;
      lVar7 = 0;
      local_5c = 0;
      uVar12 = 0;
      uVar14 = 0;
      uVar15 = 0;
      do {
        lVar3 = *(longlong *)(lVar16 + lVar7);
        if ((lVar3 != 0) &&
           ((*(byte *)(lVar3 + 0x71 + (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0) * 8) & 2) != 0))
        {
          uVar10 = (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0);
          uVar15 = uVar15 | *(uint *)(lVar3 + 0x48 + uVar10 * 8);
          uVar14 = uVar14 | *(uint *)(lVar3 + 0x4c + uVar10 * 8);
          uVar12 = (ulonglong)((uint)uVar12 | *(uint *)(lVar3 + 0x50 + uVar10 * 8));
          local_5c = local_5c | *(uint *)(lVar3 + 0x54 + uVar10 * 8);
        }
        lVar7 = lVar7 + 8;
      } while (lVar19 != lVar7);
      lVar7 = 0;
      uVar11 = 0;
      uVar17 = 0;
      uVar18 = 0;
      uVar5 = 0;
      do {
        lVar3 = *(longlong *)(lVar16 + lVar7);
        if ((lVar3 != 0) &&
           ((*(byte *)(lVar3 + 0x71 + (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0) * 8) & 5) != 0))
        {
          uVar10 = (ulonglong)((*(uint *)(lVar3 + 8) & 3) == 0);
          uVar17 = uVar17 | *(uint *)(lVar3 + 0x58 + uVar10 * 8);
          uVar11 = uVar11 | *(uint *)(lVar3 + 0x5c + uVar10 * 8);
          uVar18 = uVar18 | *(uint *)(lVar3 + 0x60 + uVar10 * 8);
          uVar5 = uVar5 | *(uint *)(lVar3 + 100 + uVar10 * 8);
        }
        lVar7 = lVar7 + 8;
      } while (lVar19 != lVar7);
    }
    *puVar6 = *(undefined8 *)(*(longlong *)(lVar13 + 0xb0) + lVar9 * 8);
    puVar6[1] = param_2;
    *(undefined4 *)(puVar6 + 2) = uVar2;
    *(uint *)((longlong)puVar6 + 0x14) = uVar15;
    *(uint *)(puVar6 + 3) = uVar14;
    *(int *)((longlong)puVar6 + 0x1c) = (int)uVar12;
    *(uint *)(puVar6 + 4) = local_5c;
    *(uint *)((longlong)puVar6 + 0x24) = uVar17;
    *(uint *)(puVar6 + 5) = uVar11;
    *(uint *)((longlong)puVar6 + 0x2c) = uVar18;
    *(uint *)(puVar6 + 6) = uVar5;
    *(undefined1 *)((longlong)puVar6 + 0x34) = 1;
    *(undefined2 *)(puVar6 + 7) =
         *(undefined2 *)(*(longlong *)(*param_2 + 0x170) + (longlong)(int)param_2[1] * 2);
    puVar8 = (undefined8 *)FUN_1447eab44(param_1 + 0x380,uVar1,CONCAT71((int7)(uVar12 >> 8),1));
    for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  return;
}



// FUNCTION 14172fdcd thunk_FUN_1400eef5e body=5 status=ok
// SIG undefined thunk_FUN_1400eef5e(void)

undefined8 * thunk_FUN_1400eef5e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR_FUN_149f6c8c8;
  puVar1[5] = 0;
  puVar1[6] = 0x8000000000;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *(byte *)(puVar1 + 0xd) = *(byte *)(puVar1 + 0xd) & 0xf8;
  param_1[3] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 1;
  }
  return param_1;
}



// FUNCTION 14172fdd2 FUN_14172fdd2 body=2280 status=ok
// SIG undefined FUN_14172fdd2(void)

void FUN_14172fdd2(longlong *param_1,longlong *param_2,longlong param_3,longlong *param_4,
                  undefined4 *param_5,undefined4 *param_6,longlong param_7,float param_8)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  double dVar5;
  undefined1 auVar6 [16];
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  double dVar21;
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
  undefined4 uVar34;
  undefined4 uVar35;
  undefined1 auStack_178 [39];
  char local_151;
  longlong local_150;
  longlong *local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar15 = '\x01';
  if (((int)param_2[1] != 0) && (*(int *)(*param_2 + 0x10) != 0)) {
    cVar15 = **(char **)(*param_2 + 8);
  }
  auVar6 = *(undefined1 (*) [16])(param_7 + 0x40);
  dVar8 = auVar6._0_8_;
  dVar9 = auVar6._8_8_;
  dVar5 = *(double *)(param_7 + 0x50);
  plVar7 = (longlong *)*param_4;
  if (plVar7 == (longlong *)0x0) goto LAB_14173010a;
  local_151 = cVar15;
  local_150 = param_3;
  if ((((cVar15 == '\x01') || (*(char *)((longlong)plVar7 + 0x1c) == '\x06')) ||
      (9.999999747378752e-05 < ABS(dVar8 - DAT_14c846510))) ||
     ((9.999999747378752e-05 < ABS(dVar9 - DAT_14c846518) ||
      (9.999999747378752e-05 < ABS(dVar5 - DAT_14c846520))))) {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    plVar2 = plVar7 + 1;
    if ((9.999999747378752e-05 < ABS(dVar8 - DAT_14c846510)) ||
       ((9.999999747378752e-05 < ABS(dVar9 - DAT_14c846518) ||
        (9.999999747378752e-05 < ABS(dVar5 - DAT_14c846520))))) {
      local_128._0_8_ = dVar5;
      local_138 = auVar6;
      (**(code **)(*plVar7 + 0x40))(plVar7,&local_148);
    }
    else {
      (**(code **)(*plVar7 + 0x38))(plVar7,&local_148);
    }
    LOCK();
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)*plVar2 == 0) && (*(int *)((longlong)plVar7 + 0xc) == 0)) {
      (**(code **)*plVar7)(plVar7,1);
    }
    if (local_148 != (longlong *)0x0) {
      if (cVar15 == '\x01') {
        *(undefined1 *)((longlong)local_148 + 0x1d) = 6;
        if (*(char *)((longlong)local_148 + 0x1c) == '\x06') {
          *(undefined2 *)(local_148 + 3) = 0;
        }
      }
      else {
        *(undefined1 *)((longlong)local_148 + 0x1d) = *(undefined1 *)((longlong)local_148 + 0x1c);
      }
    }
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,(int)param_1[1],&local_148);
    (**(code **)(*local_148 + 0x80))(local_148,local_138);
    lVar18 = *(longlong *)(*param_1 + 0x110);
    lVar12 = (longlong)(int)param_1[1] * 0x30;
    *(undefined8 *)(lVar18 + 0x10 + lVar12) = local_128._0_8_;
    *(undefined8 *)(lVar18 + lVar12) = local_138._0_8_;
    ((undefined8 *)(lVar18 + lVar12))[1] = local_138._8_8_;
    *(undefined8 *)(lVar18 + 0x28 + lVar12) = uStack_110;
    puVar4 = (undefined4 *)(lVar18 + 0x18 + lVar12);
    *puVar4 = local_128._8_4_;
    puVar4[1] = local_128._12_4_;
    puVar4[2] = (undefined4)uStack_118;
    puVar4[3] = uStack_118._4_4_;
    if (local_148 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_148 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if (((int)*plVar7 == 0) && (*(int *)((longlong)local_148 + 0xc) == 0)) {
        (**(code **)*local_148)(local_148,1);
      }
    }
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,(int)param_1[1],param_4);
    (**(code **)(*(longlong *)*param_4 + 0x80))((longlong *)*param_4,local_138);
    lVar18 = *(longlong *)(*param_1 + 0x110);
    lVar12 = (longlong)(int)param_1[1] * 0x30;
    *(undefined8 *)(lVar18 + 0x10 + lVar12) = local_128._0_8_;
    *(undefined8 *)(lVar18 + lVar12) = local_138._0_8_;
    ((undefined8 *)(lVar18 + lVar12))[1] = local_138._8_8_;
    puVar3 = (undefined8 *)(lVar18 + 0x18 + lVar12);
    *puVar3 = local_128._8_8_;
    puVar3[1] = uStack_118;
    *(undefined8 *)(lVar18 + 0x28 + lVar12) = uStack_110;
  }
  *(undefined1 *)(*(longlong *)(*param_1 + 0x158) + (longlong)(int)param_1[1]) = 1;
  lVar18 = *param_1;
  lVar17 = (longlong)(int)param_1[1];
  lVar12 = *(longlong *)(lVar18 + 0x48);
  lVar13 = lVar17 * 0x10;
  dVar10 = (double)*(float *)(lVar12 + 0xc + lVar13);
  dVar21 = (double)*(float *)(lVar12 + 4 + lVar13);
  lVar11 = lVar17 * 0x18;
  local_138._8_4_ = SUB84(dVar21,0);
  local_138._0_8_ = (double)*(float *)(lVar12 + lVar13);
  local_138._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
  local_128._8_4_ = SUB84(dVar10,0);
  local_128._0_8_ = (double)*(float *)(lVar12 + 8 + lVar13);
  local_128._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
  puVar3 = (undefined8 *)(*(longlong *)(lVar18 + 0x28) + lVar11);
  uStack_118 = *puVar3;
  uStack_110 = puVar3[1];
  local_108 = *(undefined8 *)(*(longlong *)(lVar18 + 0x28) + 0x10 + lVar11);
  uStack_100 = 0;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0x3ff0000000000000;
  local_e8 = 0x3ff0000000000000;
  uStack_e0 = 0;
  lVar12 = *(longlong *)(lVar18 + 0xf8);
  iVar16 = *(int *)(lVar12 + 0x10 + lVar11);
  lVar13 = *(longlong *)(lVar12 + 8 + lVar11);
  lVar12 = lVar12 + lVar11;
  if (lVar13 != 0) {
    lVar12 = lVar13;
  }
  if ((longlong)iVar16 < 1) {
    uVar23 = 0;
    uVar25 = 0;
    uVar19 = 0;
    uVar20 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar30 = 0;
    uVar31 = 0;
    uVar28 = 0;
    uVar29 = 0;
    uVar26 = 0;
    uVar27 = 0;
    uVar22 = uVar23;
    uVar24 = uVar25;
    if (iVar16 != 0) goto LAB_141730040;
  }
  else {
    uVar19 = 0xffffffff;
    uVar20 = 0x7fefffff;
    uVar22 = 0xffffffff;
    uVar24 = 0xffefffff;
LAB_141730040:
    lVar13 = 0;
    uVar23 = uVar19;
    uVar25 = uVar20;
    uVar26 = uVar22;
    uVar27 = uVar24;
    uVar28 = uVar22;
    uVar29 = uVar24;
    uVar30 = uVar22;
    uVar31 = uVar24;
    uVar32 = uVar19;
    uVar33 = uVar20;
    uVar34 = uVar19;
    uVar35 = uVar20;
    do {
      lVar11 = *(longlong *)(lVar12 + lVar13);
      if ((*(byte *)(lVar11 + 8) & 3) == 0) {
        FUN_146e22506(lVar11,local_138);
      }
      else {
        FUN_1447269c8(lVar11,local_138);
      }
      lVar11 = *(longlong *)(lVar12 + lVar13);
      dVar10 = *(double *)(lVar11 + 0x28);
      if (dVar10 <= (double)CONCAT44(uVar33,uVar32)) {
        uVar32 = SUB84(dVar10,0);
        uVar33 = (undefined4)((ulonglong)dVar10 >> 0x20);
      }
      dVar10 = *(double *)(lVar11 + 0x20);
      if (dVar10 <= (double)CONCAT44(uVar35,uVar34)) {
        uVar34 = SUB84(dVar10,0);
        uVar35 = (undefined4)((ulonglong)dVar10 >> 0x20);
      }
      dVar10 = *(double *)(lVar11 + 0x18);
      if (dVar10 <= (double)CONCAT44(uVar25,uVar23)) {
        uVar23 = SUB84(dVar10,0);
        uVar25 = (undefined4)((ulonglong)dVar10 >> 0x20);
      }
      dVar10 = *(double *)(lVar11 + 0x40);
      if ((double)CONCAT44(uVar27,uVar26) <= dVar10) {
        uVar26 = SUB84(dVar10,0);
        uVar27 = (undefined4)((ulonglong)dVar10 >> 0x20);
      }
      dVar10 = *(double *)(lVar11 + 0x38);
      if ((double)CONCAT44(uVar29,uVar28) <= dVar10) {
        uVar28 = SUB84(dVar10,0);
        uVar29 = (undefined4)((ulonglong)dVar10 >> 0x20);
      }
      dVar10 = *(double *)(lVar11 + 0x30);
      if ((double)CONCAT44(uVar31,uVar30) <= dVar10) {
        uVar30 = SUB84(dVar10,0);
        uVar31 = (undefined4)((ulonglong)dVar10 >> 0x20);
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar16 * 8 != lVar13);
  }
  lVar18 = *(longlong *)(lVar18 + 0x140);
  lVar17 = lVar17 * 0x30;
  *(ulonglong *)(lVar18 + lVar17) = CONCAT44(uVar25,uVar23);
  *(ulonglong *)(lVar18 + 8 + lVar17) = CONCAT44(uVar35,uVar34);
  *(ulonglong *)(lVar18 + 0x10 + lVar17) = CONCAT44(uVar33,uVar32);
  *(double *)(lVar18 + 0x18 + lVar17) = (double)CONCAT44(uVar31,uVar30) + 0.0;
  *(double *)(lVar18 + 0x20 + lVar17) = (double)CONCAT44(uVar29,uVar28) + 0.0;
  *(double *)(lVar18 + 0x28 + lVar17) = (double)CONCAT44(uVar27,uVar26) + 0.0;
  param_3 = local_150;
  cVar15 = local_151;
LAB_14173010a:
  if ((param_3 != 0) && (cVar15 == '\x01')) {
    FUN_14096ada2(*param_1,(int)param_1[1]);
    lVar17 = (longlong)(int)param_1[1];
    lVar18 = *(longlong *)(*param_1 + 0x4a0);
    lVar11 = FUN_14001cc68(0x48,0x10);
    FUN_146ca29b8(lVar11);
    lVar12 = *(longlong *)(lVar18 + lVar17 * 8);
    lVar13 = lVar12;
    if ((lVar12 != lVar11) &&
       (*(longlong *)(lVar18 + lVar17 * 8) = lVar11, lVar13 = lVar11, lVar12 != 0)) {
      FUN_140191cfe(lVar12);
      FUN_1400020a8(lVar12);
      lVar13 = *(longlong *)(lVar18 + lVar17 * 8);
    }
    iVar16 = *(int *)(lVar13 + 0x18);
    if ((int)((float)iVar16 * param_8) < iVar16) {
      iVar16 = (int)((float)iVar16 * param_8);
    }
    iVar14 = 0;
    if (0 < iVar16) {
      iVar14 = iVar16;
    }
    *(int *)(lVar13 + 0x18) = iVar14;
    iVar16 = *(int *)(lVar13 + 0x10);
    if ((longlong)iVar16 != 0) {
      lVar12 = *(longlong *)(lVar13 + 8);
      lVar13 = 0;
      do {
        plVar7 = *(longlong **)(lVar12 + lVar13);
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 8))();
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar16 * 8 != lVar13);
    }
    plVar7 = (longlong *)*param_4;
    if (((plVar7 != (longlong *)0x0) && (*(char *)((longlong)plVar7 + 0x1c) == '\x06')) &&
       (*(char *)((longlong)plVar7 + 0x1a) == '\x01')) {
      (**(code **)(*plVar7 + 0x80))();
    }
    lVar12 = *(longlong *)(lVar18 + lVar17 * 8);
    iVar16 = *(int *)(lVar12 + 0x18);
    if (0 < iVar16) {
      lVar13 = 0x10;
      lVar11 = 0;
      do {
        lVar12 = *(longlong *)(lVar12 + 0x28);
        *(double *)(lVar12 + -0x10 + lVar13) = *(double *)(lVar12 + -0x10 + lVar13) * dVar8;
        *(double *)(lVar12 + -8 + lVar13) = *(double *)(lVar12 + -8 + lVar13) * dVar9;
        *(double *)(lVar12 + lVar13) = *(double *)(lVar12 + lVar13) * dVar5;
        lVar11 = lVar11 + 1;
        lVar12 = *(longlong *)(lVar18 + lVar17 * 8);
        iVar16 = *(int *)(lVar12 + 0x18);
        lVar13 = lVar13 + 0x18;
      } while (lVar11 < iVar16);
    }
    if (iVar16 == 0) {
      *(undefined4 *)(lVar12 + 0x18) = 1;
      iVar16 = *(int *)(lVar12 + 0x10);
      if ((longlong)iVar16 != 0) {
        lVar12 = *(longlong *)(lVar12 + 8);
        lVar13 = 0;
        do {
          plVar7 = *(longlong **)(lVar12 + lVar13);
          if (plVar7 != (longlong *)0x0) {
            (**(code **)(*plVar7 + 8))(plVar7,1);
          }
          lVar13 = lVar13 + 8;
        } while ((longlong)iVar16 * 8 != lVar13);
      }
      puVar3 = *(undefined8 **)(*(longlong *)(lVar18 + lVar17 * 8) + 0x28);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      lVar12 = *(longlong *)(lVar18 + lVar17 * 8);
    }
    FUN_140b87ffc(lVar12);
  }
  if (DAT_14c997548 == '\x01') {
    local_138._8_8_ = 0xffff00000000;
    local_138._0_8_ = 0xffff00000000;
    lVar18 = *(longlong *)(*param_1 + 0xf8) + (longlong)(int)param_1[1] * 0x18;
    lVar12 = *(longlong *)(lVar18 + 8);
    if (*(longlong *)(lVar18 + 8) == 0) {
      lVar12 = lVar18;
    }
    iVar16 = *(int *)(lVar18 + 0x10);
    if ((longlong)iVar16 != 0) {
      lVar18 = 0;
      do {
        lVar13 = *(longlong *)(lVar12 + lVar18);
        if ((*(byte *)(lVar13 + 8) & 3) == 0) {
          FUN_144b04ec8(lVar13,1);
        }
        else {
          *(byte *)(lVar13 + 0x71) = *(byte *)(lVar13 + 0x71) | 1;
        }
        lVar13 = *(longlong *)(lVar12 + lVar18);
        if ((*(byte *)(lVar13 + 8) & 3) == 0) {
          FUN_1429b8506(lVar13,0);
        }
        else {
          *(undefined1 *)(lVar13 + 0x70) = 0;
        }
        lVar13 = *(longlong *)(lVar12 + lVar18);
        if ((*(byte *)(lVar13 + 8) & 3) == 0) {
          FUN_144aa44d4();
        }
        else {
          *(undefined4 *)(lVar13 + 0x58) = local_138._0_4_;
          *(undefined4 *)(lVar13 + 0x5c) = local_138._4_4_;
          *(undefined4 *)(lVar13 + 0x60) = local_138._8_4_;
          *(undefined4 *)(lVar13 + 100) = local_138._12_4_;
        }
        lVar13 = *(longlong *)(lVar12 + lVar18);
        local_148 = (longlong *)0x0;
        uStack_140 = 0;
        if ((*(byte *)(lVar13 + 8) & 3) == 0) {
          FUN_144b03742();
        }
        else {
          *(undefined8 *)(lVar13 + 0x48) = 0;
          *(undefined8 *)(lVar13 + 0x50) = 0;
        }
        lVar18 = lVar18 + 8;
      } while ((longlong)iVar16 * 8 != lVar18);
    }
  }
  else {
    lVar18 = *(longlong *)(*param_1 + 0xf8) + (longlong)(int)param_1[1] * 0x18;
    lVar12 = *(longlong *)(lVar18 + 8);
    if (*(longlong *)(lVar18 + 8) == 0) {
      lVar12 = lVar18;
    }
    iVar16 = *(int *)(lVar18 + 0x10);
    if ((longlong)iVar16 != 0) {
      lVar18 = 0;
      do {
        lVar13 = *(longlong *)(lVar12 + lVar18);
        if ((*(byte *)(lVar13 + 8) & 3) == 0) {
          FUN_144aa44d4(lVar13,param_5);
        }
        else {
          uVar23 = param_5[1];
          uVar22 = param_5[2];
          uVar25 = param_5[3];
          *(undefined4 *)(lVar13 + 0x58) = *param_5;
          *(undefined4 *)(lVar13 + 0x5c) = uVar23;
          *(undefined4 *)(lVar13 + 0x60) = uVar22;
          *(undefined4 *)(lVar13 + 100) = uVar25;
        }
        lVar13 = *(longlong *)(lVar12 + lVar18);
        if ((*(byte *)(lVar13 + 8) & 3) == 0) {
          FUN_144b03742(lVar13,param_6);
        }
        else {
          uVar23 = param_6[1];
          uVar22 = param_6[2];
          uVar25 = param_6[3];
          *(undefined4 *)(lVar13 + 0x48) = *param_6;
          *(undefined4 *)(lVar13 + 0x4c) = uVar23;
          *(undefined4 *)(lVar13 + 0x50) = uVar22;
          *(undefined4 *)(lVar13 + 0x54) = uVar25;
        }
        lVar18 = lVar18 + 8;
      } while ((longlong)iVar16 * 8 != lVar18);
    }
  }
  puVar3 = (undefined8 *)*param_4;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417306bc FUN_1417306bc body=110 status=ok
// SIG undefined FUN_1417306bc(void)

void FUN_1417306bc(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x348);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x340);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if ((plVar3 != (longlong *)0x0) &&
         (*(char *)(*(longlong *)(*plVar3 + 0x2c0) + 0xd + (longlong)(int)plVar3[1] * 0x10) == '\0')
         ) {
        FUN_1400d2fee(*(undefined8 *)(param_2 + 0x9c8),plVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 14173072a FUN_14173072a body=777 status=ok
// SIG undefined FUN_14173072a(void)

void FUN_14173072a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  if ((longlong)*(int *)(param_1 + 0x348) != 0) {
    plVar20 = *(longlong **)(param_1 + 0x340);
    plVar1 = plVar20 + *(int *)(param_1 + 0x348);
    do {
      plVar4 = (longlong *)*plVar20;
      if (plVar4 != (longlong *)0x0) {
        lVar14 = *(longlong *)(param_2 + 0x9c8);
        lVar9 = *plVar4;
        lVar12 = (longlong)(int)plVar4[1];
        if ((*(byte *)((longlong)plVar4 + 0xc) < 2) ||
           (*(char *)(*(longlong *)(lVar9 + 0x2c0) + 0xd + lVar12 * 0x10) != '\x01')) {
LAB_1417307d0:
          if ((*(char *)(*(longlong *)(lVar9 + 0xe0) + lVar12) != '\0') || (DAT_14c9978a0 != 0)) {
            uVar2 = *(undefined4 *)(*(longlong *)(lVar9 + 0x80) + lVar12 * 4);
            puVar8 = (undefined8 *)FUN_1447eab44(lVar14 + 0x360);
            *(undefined1 *)(puVar8 + 8) = 2;
            lVar12 = *plVar4;
            lVar13 = (longlong)(int)plVar4[1];
            lVar9 = *(longlong *)(lVar12 + 0xf8) + lVar13 * 0x18;
            lVar18 = *(longlong *)(lVar9 + 8);
            if (*(longlong *)(lVar9 + 8) == 0) {
              lVar18 = lVar9;
            }
            if ((longlong)*(int *)(lVar9 + 0x10) == 0) {
              local_6c = 0;
              local_68 = 0;
              local_64 = 0;
              uVar19 = 0;
              local_70 = 0;
              uVar7 = 0;
              uVar11 = 0;
              uVar15 = 0;
            }
            else {
              lVar16 = (longlong)*(int *)(lVar9 + 0x10) * 8;
              lVar9 = 0;
              uVar19 = 0;
              local_64 = 0;
              local_68 = 0;
              local_6c = 0;
              do {
                lVar6 = *(longlong *)(lVar18 + lVar9);
                if ((lVar6 != 0) &&
                   ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) & 2)
                    != 0)) {
                  uVar17 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
                  local_6c = local_6c | *(uint *)(lVar6 + 0x48 + uVar17 * 8);
                  local_68 = local_68 | *(uint *)(lVar6 + 0x4c + uVar17 * 8);
                  local_64 = local_64 | *(uint *)(lVar6 + 0x50 + uVar17 * 8);
                  uVar19 = uVar19 | *(uint *)(lVar6 + 0x54 + uVar17 * 8);
                }
                lVar9 = lVar9 + 8;
              } while (lVar16 != lVar9);
              lVar9 = 0;
              local_70 = 0;
              uVar7 = 0;
              uVar11 = 0;
              uVar15 = 0;
              do {
                lVar6 = *(longlong *)(lVar18 + lVar9);
                if ((lVar6 != 0) &&
                   ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) & 5)
                    != 0)) {
                  uVar17 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
                  uVar7 = uVar7 | *(uint *)(lVar6 + 0x58 + uVar17 * 8);
                  local_70 = local_70 | *(uint *)(lVar6 + 0x5c + uVar17 * 8);
                  uVar11 = uVar11 | *(uint *)(lVar6 + 0x60 + uVar17 * 8);
                  uVar15 = uVar15 | *(uint *)(lVar6 + 100 + uVar17 * 8);
                }
                lVar9 = lVar9 + 8;
              } while (lVar16 != lVar9);
            }
            uVar3 = *(undefined4 *)(*(longlong *)(lVar12 + 0x80) + lVar13 * 4);
            *puVar8 = *(undefined8 *)(*(longlong *)(lVar12 + 0xb0) + lVar13 * 8);
            puVar8[1] = plVar4;
            *(undefined4 *)(puVar8 + 2) = uVar3;
            *(uint *)((longlong)puVar8 + 0x14) = local_6c;
            *(uint *)(puVar8 + 3) = local_68;
            *(uint *)((longlong)puVar8 + 0x1c) = local_64;
            *(uint *)(puVar8 + 4) = uVar19;
            *(uint *)((longlong)puVar8 + 0x24) = uVar7;
            *(uint *)(puVar8 + 5) = local_70;
            *(uint *)((longlong)puVar8 + 0x2c) = uVar11;
            *(uint *)(puVar8 + 6) = uVar15;
            *(undefined1 *)((longlong)puVar8 + 0x34) = 1;
            *(undefined2 *)(puVar8 + 7) =
                 *(undefined2 *)(*(longlong *)(*plVar4 + 0x170) + (longlong)(int)plVar4[1] * 2);
            puVar10 = (undefined8 *)
                      FUN_1447eab44(lVar14 + 0x380,uVar2,CONCAT71((uint7)(uint3)(local_68 >> 8),1));
            for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
              *puVar10 = *puVar8;
              puVar8 = puVar8 + 1;
              puVar10 = puVar10 + 1;
            }
          }
        }
        else if ((*(byte *)((longlong)plVar4 + 0xc) != 2) &&
                ((plVar5 = *(longlong **)(*(longlong *)(lVar9 + 0x5a8) + lVar12 * 0x10),
                 plVar5 != (longlong *)0x0 && (2 < *(byte *)((longlong)plVar5 + 0xc))))) {
          if (((*(byte *)(*(longlong *)(*plVar5 + 0x680) + (longlong)(int)plVar5[1]) & 1) != 0) &&
             (*(longlong *)(*(longlong *)(*plVar5 + 200) + (longlong)(int)plVar5[1] * 8) ==
              *(longlong *)(*(longlong *)(lVar9 + 200) + lVar12 * 8))) goto LAB_1417307d0;
        }
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar1);
  }
  return;
}



// FUNCTION 141730a34 FUN_141730a34 body=974 status=ok
// SIG undefined FUN_141730a34(void)

void FUN_141730a34(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 8) != 0) {
    if (*(int *)(param_1 + 0x178) == 0) {
      fVar18 = 0.0;
    }
    else {
      fVar18 = **(float **)(param_1 + 0x170);
    }
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x9c8) + 0x448;
    iVar8 = *(int *)(param_1 + 0x304);
    if (0 < iVar8) {
      lVar16 = 0;
      do {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar16 * 8);
        if (plVar5 != (longlong *)0x0) {
          uVar3 = *(uint *)(*(longlong *)(param_1 + 0x400) + lVar16 * 4);
          uVar13 = (ulonglong)uVar3;
          fVar17 = fVar18;
          if (*(char *)(param_1 + 0x18e) == '\0') {
            bVar7 = *(byte *)(param_1 + 0x1c0);
            if (((bVar7 & 0x10) == 0) &&
               (((bVar7 & 2) != 0 ||
                (0 < *(int *)(*(longlong *)(*plVar5 + 0x5a8) + 8 + (longlong)(int)plVar5[1] * 0x10))
                ))) {
              uVar15 = uVar13;
              uVar14 = 0;
              do {
                uVar11 = uVar14;
                uVar14 = (uint)uVar15;
                if (((int)uVar14 < 0) || (*(int *)(param_1 + 0x6c0) <= (int)uVar14)) break;
                lVar9 = *(longlong *)(param_1 + 0x6b8);
                if (*(longlong *)(param_1 + 0x6b8) == 0) {
                  lVar9 = param_1 + 0x6a8;
                }
                if ((*(uint *)(lVar9 + (uVar15 >> 5) * 4) >> (uVar14 & 0x1f) & 1) == 0) break;
                uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x688) + 0x120) + uVar15 * 4
                                 );
                uVar15 = (ulonglong)uVar4;
                uVar14 = uVar11 + 1;
              } while (uVar4 != 0xffffffff);
              if ((int)uVar11 < 2) {
                uVar11 = 1;
              }
              iVar8 = (int)*(short *)(param_1 + 0x18a);
              if (DAT_14c75f3dc < *(short *)(param_1 + 0x18a)) {
                iVar8 = DAT_14c75f3dc;
              }
              if (*(short *)(param_1 + 0x188) < iVar8) {
                iVar8 = (int)*(short *)(param_1 + 0x188);
              }
              fVar17 = 3.4028235e+38;
              if ((int)uVar11 <= iVar8) {
                if (((bVar7 & 4) == 0) ||
                   (iVar8 = *(int *)(*(longlong *)(param_1 + 0x410) + (longlong)(int)uVar3 * 4),
                   iVar8 == -1)) {
                  iVar8 = *(int *)(param_1 + 0x178);
                  if ((longlong)iVar8 < 1) {
                    fVar17 = 0.0;
                  }
                  else {
                    fVar17 = *(float *)(*(longlong *)(param_1 + 0x170) + -4 + (longlong)iVar8 * 4);
                  }
                  if ((int)uVar11 <= iVar8) {
                    fVar17 = *(float *)(*(longlong *)(param_1 + 0x170) + -4 + (ulonglong)uVar11 * 4)
                    ;
                  }
                }
                else {
                  plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x340) + (longlong)iVar8 * 8);
                  local_78 = 0;
                  if (plVar6 != (longlong *)0x0) {
                    if (*(char *)(*(longlong *)(*plVar6 + 0x158) + (longlong)(int)plVar6[1]) ==
                        '\x01') {
                      lVar9 = *(longlong *)(*plVar6 + 0x110);
                      lVar10 = (longlong)(int)plVar6[1] * 0x30;
                      local_c8 = *(undefined8 *)(lVar9 + 0x10 + lVar10);
                      puVar1 = (undefined4 *)(lVar9 + lVar10);
                      local_d8 = *puVar1;
                      uStack_d4 = puVar1[1];
                      uStack_d0 = puVar1[2];
                      uStack_cc = puVar1[3];
                      local_b0 = *(undefined8 *)(lVar9 + 0x28 + lVar10);
                      puVar2 = (undefined8 *)(lVar9 + 0x18 + lVar10);
                      local_c0 = *puVar2;
                      uStack_b8 = puVar2[1];
                      local_78 = 1;
                      local_a8 = local_d8;
                      uStack_a4 = uStack_d4;
                      uStack_a0 = uStack_d0;
                      uStack_9c = uStack_cc;
                      local_98 = local_c8;
                      local_90 = local_c0;
                      local_88 = uStack_b8;
                      local_80 = local_b0;
                    }
                  }
                  lVar9 = FUN_142a1e7ec(param_1 + 0x68,*(undefined8 *)(param_1 + 0x58),uVar13,
                                        &local_a8);
                  fVar17 = *(float *)(lVar9 + 4);
                  bVar7 = *(byte *)(param_1 + 0x1c0);
                }
                if (((bVar7 & 8) != 0) && (lVar9 = FUN_14484244a(param_1 + 0x1b8), lVar9 != 0)) {
                  fVar17 = fVar17 * *(float *)(lVar9 + 0x74);
                }
              }
            }
          }
          else if (*(char *)(param_1 + 0x18e) == '\x01') {
            fVar17 = (float)FUN_146ee70aa(param_1,uVar13);
          }
          *(float *)(*(longlong *)(*plVar5 + 0x650) + (longlong)(int)plVar5[1] * 4) = fVar17;
          FUN_1402bf4a4(lVar12,plVar5);
          iVar8 = *(int *)(param_1 + 0x304);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar8);
    }
    if ((((*(byte *)(param_1 + 0x1c0) & 0x10) != 0) && (0 < iVar8)) &&
       (*(char *)(param_1 + 0x18e) == '\0')) {
      lVar16 = 0;
      do {
        plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar16 * 8);
        if ((plVar5 != (longlong *)0x0) &&
           (plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x330) + lVar16 * 8),
           plVar6 != (longlong *)0x0)) {
          *(undefined4 *)(*(longlong *)(*plVar5 + 0x650) + (longlong)(int)plVar5[1] * 4) =
               *(undefined4 *)(*(longlong *)(*plVar6 + 0x650) + (longlong)(int)plVar6[1] * 4);
          FUN_1402bf4a4(lVar12);
          iVar8 = *(int *)(param_1 + 0x304);
        }
        lVar16 = lVar16 + 1;
      } while (lVar16 < iVar8);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141730e04 FUN_141730e04 body=110 status=ok
// SIG undefined FUN_141730e04(void)

void FUN_141730e04(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  longlong *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(*(longlong *)(*param_2 + 200) + (longlong)(int)param_2[1] * 8);
  local_10 = param_2;
  if (lVar1 == 0 || lVar1 == param_1) {
    FUN_1400c8646(param_1 + 0x888,local_14,&local_10,0);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141730e74 FUN_141730e74 body=124 status=ok
// SIG undefined FUN_141730e74(void)

void FUN_141730e74(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140125d6e(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1411223e0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 141730ef0 FUN_141730ef0 body=151 status=ok
// SIG undefined FUN_141730ef0(void)

longlong * FUN_141730ef0(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x304);
  if (-1 < iVar1) {
    if (iVar1 != 0) {
      FUN_14071ff8a(param_2);
    }
    iVar1 = *(int *)(param_1 + 0x238);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x230);
      lVar5 = 0;
      do {
        lVar4 = *(longlong *)(lVar3 + lVar5);
        if (lVar4 != 0) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_14075a758(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
        }
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar1);
}



// FUNCTION 141730f88 FUN_141730f88 body=373 status=ok
// SIG undefined FUN_141730f88(void)

void FUN_141730f88(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0xc;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141731013;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_141731013:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 1417310fe FUN_1417310fe body=255 status=ok
// SIG undefined FUN_1417310fe(void)

void FUN_1417310fe(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417311fe FUN_1417311fe body=373 status=ok
// SIG undefined FUN_1417311fe(void)

void FUN_1417311fe(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141731289;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_141731289:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,4);
  return;
}



// FUNCTION 141731374 FUN_141731374 body=29 status=ok
// SIG undefined FUN_141731374(void)

undefined8 FUN_141731374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141731392 FUN_141731392 body=29 status=ok
// SIG undefined FUN_141731392(void)

undefined8 FUN_141731392(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417313b0 FUN_1417313b0 body=320 status=ok
// SIG undefined FUN_1417313b0(void)

void FUN_1417313b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141731419;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141731419:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 1417314f0 FUN_1417314f0 body=29 status=ok
// SIG undefined FUN_1417314f0(void)

undefined8 FUN_1417314f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14173150e FUN_14173150e body=376 status=ok
// SIG undefined FUN_14173150e(void)

void FUN_14173150e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 200;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141731596;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141731596:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 200)) {
    uVar7 = uVar5 / 200 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,200,8);
  return;
}



// FUNCTION 141731688 FUN_141731688 body=287 status=ok
// SIG undefined FUN_141731688(void)

undefined8 *
FUN_141731688(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f6d920;
  local_40 = plVar3 + 2;
  *(undefined1 *)(plVar3 + 2) = 0;
  local_38 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140216c60(param_1,8,param_4,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140216c60(param_1,8,param_4,&local_40);
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
  *param_1 = &PTR_LAB_149f6da90;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined8 **)(param_2 + 0x10) = param_1;
  if ((param_1 != (undefined8 *)0x0) && (param_1[1] != 0)) {
    FUN_144a78688(param_1[1] + 0x70,param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417317a8 FUN_1417317a8 body=277 status=ok
// SIG undefined FUN_1417317a8(void)

undefined8 *
FUN_1417317a8(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149f6d920;
  local_40 = plVar3 + 2;
  *(undefined1 *)(plVar3 + 2) = 0;
  local_38 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    FUN_140216c60(param_1,9,param_4,&local_40);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    FUN_140216c60(param_1,9,param_4,&local_40);
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
  *param_1 = &PTR_LAB_149f6e620;
  param_1[8] = param_2;
  param_1[9] = param_3;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_2 + 0x10) = param_1;
  if ((param_1 != (undefined8 *)0x0) && (param_1[1] != 0)) {
    FUN_144a78688(param_1[1] + 0x70,param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417318be FUN_1417318be body=38 status=ok
// SIG undefined FUN_1417318be(void)

undefined8 FUN_1417318be(undefined8 param_1,int param_2)

{
  FUN_1401aa844();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417318e4 FUN_1417318e4 body=38 status=ok
// SIG undefined FUN_1417318e4(void)

undefined8 FUN_1417318e4(undefined8 param_1,int param_2)

{
  FUN_1401aa844();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14173190a FUN_14173190a body=29 status=ok
// SIG undefined FUN_14173190a(void)

undefined8 FUN_14173190a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141731928 FUN_141731928 body=92 status=ok
// SIG undefined FUN_141731928(void)

void FUN_141731928(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x40);
  if (((lVar2 != 0) && (1 < *(byte *)(lVar2 + 0x90))) &&
     ((*(char *)(lVar2 + 0x1ac) == '\x04' || (*(char *)(lVar2 + 0x1ac) == '\x01')))) {
    FUN_140cd4f30(lVar1,4,0,1);
    lVar1 = *(longlong *)(lVar1 + 0x40);
    if ((lVar1 != 0) && (1 < *(byte *)(lVar1 + 0x90))) {
      *(undefined1 *)(lVar1 + 0x1c1) = 0;
    }
  }
  return;
}



// FUNCTION 141731984 FUN_141731984 body=75 status=ok
// SIG undefined FUN_141731984(void)

void FUN_141731984(longlong *param_1,undefined1 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(*param_1 + 0x40);
  local_10 = param_2;
  FUN_1400b4776(local_18,2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417319d0 FUN_1417319d0 body=280 status=ok
// SIG undefined FUN_1417319d0(void)

void FUN_1417319d0(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (((*param_1 != 0) && (lVar5 = *(longlong *)(*param_1 + 0x40), lVar5 != 0)) &&
     (1 < *(byte *)(lVar5 + 0x90))) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 400) = param_2;
    *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) | 8;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000141731a57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 141731ae8 FUN_141731ae8 body=280 status=ok
// SIG undefined FUN_141731ae8(void)

void FUN_141731ae8(longlong *param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (((*param_1 != 0) && (lVar5 = *(longlong *)(*param_1 + 0x40), lVar5 != 0)) &&
     (1 < *(byte *)(lVar5 + 0x90))) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x194) = param_2;
    *(byte *)(lVar5 + 0x94) = *(byte *)(lVar5 + 0x94) | 8;
    if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 8), lVar5 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar5 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x000141731b6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar5 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar5 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 141731c00 FUN_141731c00 body=703 status=ok
// SIG undefined FUN_141731c00(void)

void FUN_141731c00(longlong *param_1,double *param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  if (((1e-08 < ABS(*param_2)) && (dVar3 = param_2[1], 1e-08 < ABS(dVar3))) &&
     (dVar4 = param_2[2], 1e-08 < ABS(dVar4))) {
    lVar7 = *param_1;
    lVar8 = *(longlong *)(lVar7 + 0x40);
    if ((lVar8 != 0) && (1 < *(byte *)(lVar8 + 0x90))) {
      lVar9 = *(longlong *)(lVar8 + 0x10);
      *(float *)(lVar8 + 0x130) = (float)*param_2;
      *(float *)(lVar8 + 0x134) = (float)dVar3;
      *(float *)(lVar8 + 0x138) = (float)dVar4;
      *(byte *)(lVar8 + 0x94) = *(byte *)(lVar8 + 0x94) | 0x20;
      if ((lVar9 != 0) && (lVar8 = *(longlong *)(lVar9 + 8), lVar8 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
          if (*(int *)(lVar9 + 0x18) == -1) {
            lVar10 = *(longlong *)(lVar8 + 0x98);
            uVar5 = *(uint *)(lVar9 + 0x1c);
            piVar2 = (int *)(lVar10 + 0x160 + (ulonglong)uVar5 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar10 + 0x194) = *(int *)(lVar10 + 0x194) + 1;
            lVar10 = lVar10 + (ulonglong)uVar5 * 0x10;
            iVar6 = *(int *)(lVar10 + 0x1a0);
            *(int *)(lVar9 + 0x18) = iVar6;
            *(uint *)(lVar10 + 0x1a0) = iVar6 + 1U;
            if (*(uint *)(lVar10 + 0x1a4) < iVar6 + 1U) {
              FUN_140431d5c((longlong *)(lVar10 + 0x198),iVar6);
            }
            lVar10 = *(longlong *)(lVar10 + 0x198);
            lVar11 = (longlong)iVar6 * 0x20;
            *(longlong *)(lVar10 + lVar11) = lVar9;
            *(undefined4 *)(lVar10 + 8 + lVar11) = 0;
            puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar11);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
        }
        else {
          FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,lVar9);
        }
      }
    }
    lVar7 = *(longlong *)(lVar7 + 0x40);
    if ((lVar7 != 0) && (1 < *(byte *)(lVar7 + 0x90))) {
      dVar3 = param_2[1];
      dVar4 = param_2[2];
      lVar8 = *(longlong *)(lVar7 + 0x10);
      *(float *)(lVar7 + 0x13c) = (float)(1.0 / *param_2);
      *(float *)(lVar7 + 0x140) = (float)(1.0 / dVar3);
      *(float *)(lVar7 + 0x144) = (float)(1.0 / dVar4);
      *(byte *)(lVar7 + 0x94) = *(byte *)(lVar7 + 0x94) | 0x20;
      if ((lVar8 != 0) && (lVar7 = *(longlong *)(lVar8 + 8), lVar7 != 0)) {
        if (DAT_14c992a90 == '\x01') {
          AcquireSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
          if (*(int *)(lVar8 + 0x18) == -1) {
            lVar9 = *(longlong *)(lVar7 + 0x98);
            uVar5 = *(uint *)(lVar8 + 0x1c);
            piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar5 * 4);
            *piVar2 = *piVar2 + 1;
            *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
            lVar9 = lVar9 + (ulonglong)uVar5 * 0x10;
            iVar6 = *(int *)(lVar9 + 0x1a0);
            *(int *)(lVar8 + 0x18) = iVar6;
            *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
            if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
              FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
            }
            lVar9 = *(longlong *)(lVar9 + 0x198);
            lVar10 = (longlong)iVar6 * 0x20;
            *(longlong *)(lVar9 + lVar10) = lVar8;
            *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
            puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
            *puVar1 = 0;
            puVar1[1] = 0;
          }
                    /* WARNING: Could not recover jumptable at 0x000141731d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ReleaseSRWLockExclusive((PSRWLOCK)(lVar7 + 0x128));
          return;
        }
        FUN_144aa3818(*(longlong *)(lVar7 + 0x98) + 0x160,lVar8);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141731ec0 FUN_141731ec0 body=100 status=ok
// SIG undefined FUN_141731ec0(void)

void FUN_141731ec0(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if ((*(uint *)(lVar2 + 8) & 3) == 0) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    *(byte *)(lVar2 + 0x79) = *(byte *)(lVar2 + 0x79) & 0xfd | param_2 * '\x02';
    uVar1 = *(uint *)(lVar2 + 0xc);
    *(uint *)(lVar2 + 0xc) = uVar1 | 1;
    if ((lVar3 != 0 && uVar1 == 0) && (*(longlong *)(lVar3 + 8) != 0)) {
      FUN_144821112(*(longlong *)(lVar3 + 8) + 0x70,lVar3,*(uint *)(lVar2 + 8) >> 3);
      return;
    }
  }
  else {
    *(byte *)(lVar2 + 0x71) = *(byte *)(lVar2 + 0x71) & 0xfd | param_2 * '\x02';
  }
  return;
}



// FUNCTION 141731f24 FUN_141731f24 body=85 status=ok
// SIG undefined FUN_141731f24(void)

void FUN_141731f24(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  lVar2 = *param_1;
  if ((*(uint *)(lVar2 + 8) & 3) == 0) {
    lVar3 = *(longlong *)(lVar2 + 0x48);
    uVar4 = *(undefined4 *)((longlong)param_2 + 4);
    uVar5 = *(undefined4 *)(param_2 + 1);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(undefined4 *)(lVar2 + 0x60) = *(undefined4 *)param_2;
    *(undefined4 *)(lVar2 + 100) = uVar4;
    *(undefined4 *)(lVar2 + 0x68) = uVar5;
    *(undefined4 *)(lVar2 + 0x6c) = uVar6;
    uVar1 = *(uint *)(lVar2 + 0xc);
    *(uint *)(lVar2 + 0xc) = uVar1 | 1;
    if ((lVar3 != 0 && uVar1 == 0) && (*(longlong *)(lVar3 + 8) != 0)) {
      FUN_144821112(*(longlong *)(lVar3 + 8) + 0x70,lVar3,*(uint *)(lVar2 + 8) >> 3);
      return;
    }
  }
  else {
    uVar7 = param_2[1];
    *(undefined8 *)(lVar2 + 0x58) = *param_2;
    *(undefined8 *)(lVar2 + 0x60) = uVar7;
  }
  return;
}



// FUNCTION 141731f7a FUN_141731f7a body=199 status=ok
// SIG undefined FUN_141731f7a(void)

void FUN_141731f7a(longlong param_1)

{
  PSRWLOCK SRWLock;
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    SRWLock = *(PSRWLOCK *)(*(longlong *)(param_1 + 0x38) + 0x218);
    pvVar2 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
    iVar1 = (int)((ulonglong)pvVar2 >> 0x20);
    TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
                (LPVOID)((ulonglong)(iVar1 + 1) << 0x20 | (ulonglong)pvVar2 & 0xffffffff));
    if (iVar1 + (int)pvVar2 == 0) {
      AcquireSRWLockExclusive(SRWLock);
    }
    FUN_14010877e(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x9c8),param_1 + 0x28,
                  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x138));
    pvVar2 = TlsGetValue(*(DWORD *)&SRWLock[1].Ptr);
    uVar3 = (int)((ulonglong)pvVar2 >> 0x20) - 1;
    TlsSetValue(*(DWORD *)&SRWLock[1].Ptr,
                (LPVOID)((ulonglong)uVar3 << 0x20 | (ulonglong)pvVar2 & 0xffffffff));
    if (uVar3 + (int)pvVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014173202f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 141732042 FUN_141732042 body=101 status=ok
// SIG undefined FUN_141732042(void)

longlong FUN_141732042(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined8 *)(param_2 + 0x20) = 0;
  iVar1 = *(int *)(param_1 + 0x78);
  lVar2 = *(longlong *)(param_1 + 0x70);
  *(int *)(param_2 + 0x28) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x2c) = 4;
  }
  else {
    lVar3 = param_1 + 0x50;
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    FUN_144727e94(param_2,iVar1,0);
    lVar2 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar2 = param_2;
    }
    FUN_144727e6e(lVar2,lVar3,iVar1);
  }
  return param_2;
}



// FUNCTION 1417320ac FUN_1417320ac body=189 status=ok
// SIG undefined FUN_1417320ac(void)

void FUN_1417320ac(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,local_20);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  FUN_144842a8a(param_1,local_20);
  if ((local_20[0] < 0x103) && ((longlong *)param_1[0xb] != (longlong *)0x0)) {
    uVar2 = (**(code **)(*(longlong *)param_1[0xb] + 0x2a0))();
    *(undefined1 *)(param_1 + 0xc) = uVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_140f8f604(&DAT_14c997c20,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 14173216a FUN_14173216a body=70 status=ok
// SIG undefined FUN_14173216a(void)

undefined8 * FUN_14173216a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f72f00;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417321b0 FUN_1417321b0 body=760 status=ok
// SIG undefined FUN_1417321b0(void)

void FUN_1417321b0(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(undefined8 *)(param_1 + 0x30);
  local_1b8 = *(undefined ***)(param_1 + 0x20);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x28);
  local_1a0 = *(undefined8 *)(param_1 + 0x38);
  uStack_198 = *(undefined8 *)(param_1 + 0x40);
  local_190 = *(undefined8 *)(param_1 + 0x48);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f74ef0;
  local_1a0 = DAT_14c8464f0;
  uStack_1b0 = DAT_14c8464e0;
  local_1a8 = DAT_14c8464e8;
  uStack_198 = *param_4;
  local_190 = param_4[1];
  local_188 = param_4[2];
  local_170 = (*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30)) * 0.5;
  local_178 = (*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28)) * 0.5;
  local_180 = (*(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417324a9 FUN_1417324a9 body=843 status=ok
// SIG undefined FUN_1417324a9(void)

void FUN_1417324a9(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,undefined4 *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_238 [32];
  double *local_218;
  undefined ***local_210;
  double local_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  undefined **local_1b8;
  double local_1b0;
  double dStack_1a8;
  double local_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  double local_180;
  double local_178;
  double local_170;
  undefined2 local_168;
  byte local_166;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  longlong local_148;
  undefined4 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  dStack_190 = (double)*(float *)(param_1 + 0x54);
  local_198 = (double)*(float *)(param_1 + 0x50);
  local_1a0 = (double)*(float *)(param_1 + 0x4c);
  dStack_1a8 = (double)*(float *)(param_1 + 0x48);
  local_1b0 = (double)*(float *)(param_1 + 0x44);
  local_1b8 = (undefined **)(double)*(float *)(param_1 + 0x40);
  FUN_1400fd046(&local_1b8,&local_b0);
  local_1b8 = &PTR_FUN_149f74f90;
  local_1a0 = (double)DAT_14c8464f0;
  local_1b0 = (double)DAT_14c8464e0;
  dStack_1a8 = (double)DAT_14c8464e8;
  local_198 = (double)*param_4;
  dStack_190 = (double)param_4[1];
  local_188 = param_4[2];
  local_170 = ((double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48)) * 0.5;
  local_178 = ((double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44)) * 0.5;
  local_180 = ((double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40)) * 0.5;
  local_168 = param_7;
  local_160 = DAT_14c8464e0;
  uStack_158 = DAT_14c8464e8;
  local_150 = DAT_14c8464f0;
  local_148 = param_6;
  local_140 = param_8;
  local_138 = *param_8;
  local_134 = param_8[1];
  local_130 = param_8[2];
  local_12c = param_8[3];
  local_120 = param_9;
  puVar3 = local_118;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  local_166 = *(byte *)(param_8 + 4) >> 4 & 1;
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  local_128 = param_1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_1c8 = (local_90 - local_a8) * 0.5;
    local_1d0 = (local_98 - local_b0) * 0.5;
    local_218 = &local_1d0;
    local_1d8 = param_4[2];
    local_1e8 = *(undefined4 *)param_4;
    uStack_1e4 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_1e0 = *(undefined4 *)(param_4 + 1);
    uStack_1dc = *(undefined4 *)((longlong)param_4 + 0xc);
    local_1f0 = local_1c0 + local_a0;
    local_1f8 = local_1c8 + local_a8;
    local_200 = local_1d0 + local_b0;
    local_210 = &local_1b8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_200,&local_1e8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_b0,&local_1b8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_80 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417327f5 FUN_1417327f5 body=1016 status=ok
// SIG undefined FUN_1417327f5(void)

void FUN_1417327f5(undefined8 *param_1,longlong *param_2,double *param_3,longlong param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  double dVar1;
  ushort uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double *pdVar8;
  undefined8 **ppuVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_1b8 [32];
  undefined **local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined2 local_148;
  byte local_146;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 *local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 *local_108 [2];
  double local_f8 [13];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar10 = (double)param_1[4] * param_3[8];
  dVar11 = (double)param_1[5] * param_3[9];
  dVar3 = (double)param_1[6] * param_3[10];
  dVar6 = param_3[2];
  dVar1 = param_3[3];
  dVar12 = dVar11 * dVar4 - dVar5 * dVar10;
  dVar13 = dVar3 * dVar5 - dVar6 * dVar11;
  dVar14 = dVar10 * dVar6 - dVar4 * dVar3;
  dVar13 = dVar13 + dVar13;
  dVar14 = dVar14 + dVar14;
  dVar12 = dVar12 + dVar12;
  local_90 = (dVar12 * dVar5 - dVar14 * dVar6) + dVar1 * dVar13 + dVar10 + param_3[4];
  local_88 = (dVar6 * dVar13 - dVar4 * dVar12) + param_3[3] * dVar14 + dVar11 + param_3[5];
  local_80 = dVar12 * dVar1 + dVar3 + (dVar14 * dVar4 - dVar13 * dVar5) + param_3[6];
  dVar1 = (double)param_1[2];
  local_68 = dVar1 + local_80;
  local_70 = dVar1 + local_88;
  local_78 = dVar1 + local_90;
  local_80 = local_80 - dVar1;
  local_88 = local_88 - dVar1;
  local_90 = local_90 - dVar1;
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar2 = *(ushort *)(param_5 + 2);
  if ((uVar2 & 0x40) == 0) {
    local_198 = &PTR_FUN_149f753f0;
    dVar1 = (double)param_1[2];
    local_150 = (dVar1 + (double)param_1[6]) - ((double)param_1[6] - dVar1);
    local_158 = (dVar1 + (double)param_1[5]) - ((double)param_1[5] - dVar1);
    local_160 = (dVar1 + (double)param_1[4]) - ((double)param_1[4] - dVar1);
    local_140 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_138 = (undefined8 *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_130 = DAT_14c8464f0;
    local_120 = param_5;
    local_118 = *param_5;
    local_110 = *(undefined4 *)(param_5 + 1);
    local_10c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_108[1] = (undefined8 *)param_6;
    pdVar8 = local_f8;
    for (lVar7 = 0xc; local_128 = param_4, local_108[0] = param_1, lVar7 != 0; lVar7 = lVar7 + -1) {
      *pdVar8 = *param_3;
      param_3 = param_3 + 1;
      pdVar8 = pdVar8 + 1;
    }
  }
  else {
    local_198 = &PTR_FUN_149f753a0;
    dVar1 = (double)param_1[2];
    local_150 = (dVar1 + (double)param_1[6]) - ((double)param_1[6] - dVar1);
    local_158 = (dVar1 + (double)param_1[5]) - ((double)param_1[5] - dVar1);
    local_160 = (dVar1 + (double)param_1[4]) - ((double)param_1[4] - dVar1);
    uStack_138 = param_5;
    local_130 = *param_5;
    local_128 = param_5[1];
    local_118 = param_6;
    ppuVar9 = local_108;
    for (lVar7 = 0xc; local_140 = param_4, local_120 = param_1, lVar7 != 0; lVar7 = lVar7 + -1) {
      *ppuVar9 = (undefined8 *)*param_3;
      param_3 = param_3 + 1;
      ppuVar9 = ppuVar9 + 1;
    }
  }
  local_146 = (byte)uVar2 >> 4 & 1;
  local_150 = local_150 * 0.5;
  local_158 = local_158 * 0.5;
  local_160 = local_160 * 0.5;
  _uStack_170 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_178 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_188 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_190 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_148 = 0;
  local_180 = DAT_14c8464f0;
  local_168 = local_180;
  (**(code **)(*param_2 + 0x60))(param_2,&local_90,&local_198);
  FUN_140213fc0(param_4);
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141732bee FUN_141732bee body=660 status=ok
// SIG undefined FUN_141732bee(void)

void FUN_141732bee(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75490;
    local_160 = (double)param_1[9] - (double)param_1[6];
    local_168 = (double)param_1[8] - (double)param_1[5];
    local_170 = (double)param_1[7] - (double)param_1[4];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75440;
    local_160 = (double)param_1[9] - (double)param_1[6];
    local_168 = (double)param_1[8] - (double)param_1[5];
    local_170 = (double)param_1[7] - (double)param_1[4];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141732e83 FUN_141732e83 body=702 status=ok
// SIG undefined FUN_141732e83(void)

void FUN_141732e83(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f755d0;
    local_160 = (double)*(float *)((longlong)param_1 + 0x54) - (double)*(float *)(param_1 + 9);
    local_168 = (double)*(float *)(param_1 + 10) - (double)*(float *)((longlong)param_1 + 0x44);
    local_170 = (double)*(float *)((longlong)param_1 + 0x4c) - (double)*(float *)(param_1 + 8);
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75580;
    local_160 = (double)*(float *)((longlong)param_1 + 0x54) - (double)*(float *)(param_1 + 9);
    local_168 = (double)*(float *)(param_1 + 10) - (double)*(float *)((longlong)param_1 + 0x44);
    local_170 = (double)*(float *)((longlong)param_1 + 0x4c) - (double)*(float *)(param_1 + 8);
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141733142 FUN_141733142 body=666 status=ok
// SIG undefined FUN_141733142(void)

void FUN_141733142(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong param_4,
                  longlong *param_5,longlong param_6)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined ***pppuVar4;
  longlong **pplVar5;
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  longlong local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined2 local_158;
  byte local_156;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong local_140;
  longlong local_138;
  longlong *local_130;
  longlong local_128;
  undefined4 local_120;
  undefined4 local_11c;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  puVar3 = param_3;
  pppuVar4 = &local_1a8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pppuVar4 = (undefined **)*puVar3;
    puVar3 = puVar3 + 1;
    pppuVar4 = pppuVar4 + 1;
  }
  (**(code **)(*param_1 + 0x80))(param_1,local_78);
  FUN_1400c6592(local_78,local_a8,&local_1a8);
  *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
  uVar1 = *(ushort *)(param_5 + 2);
  if ((uVar1 & 0x40) == 0) {
    local_1a8 = &PTR_FUN_149f75850;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    local_150 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_148 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    local_140 = DAT_14c8464f0;
    local_130 = param_5;
    local_128 = *param_5;
    local_120 = (undefined4)param_5[1];
    local_11c = *(undefined4 *)((longlong)param_5 + 0xc);
    local_110 = param_6;
    puVar3 = local_108;
    for (lVar2 = 0xc; local_138 = param_4, local_118 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_3;
      param_3 = param_3 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  else {
    local_1a8 = &PTR_FUN_149f75800;
    local_160 = (double)param_1[0x10] - (double)param_1[0xd];
    local_168 = (double)param_1[0xf] - (double)param_1[0xc];
    local_170 = (double)param_1[0xe] - (double)param_1[0xb];
    uStack_148 = param_5;
    local_140 = *param_5;
    local_138 = param_5[1];
    local_128 = param_6;
    pplVar5 = &local_118;
    for (lVar2 = 0xc; local_150 = param_4, local_130 = param_1, lVar2 != 0; lVar2 = lVar2 + -1) {
      *pplVar5 = (longlong *)*param_3;
      param_3 = param_3 + 1;
      pplVar5 = pplVar5 + 1;
    }
  }
  local_156 = (byte)uVar1 >> 4 & 1;
  local_160 = local_160 * 0.5;
  local_168 = local_168 * 0.5;
  local_170 = local_170 * 0.5;
  _uStack_180 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_188 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  _uStack_198 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  _local_1a0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  local_158 = 0;
  local_190 = DAT_14c8464f0;
  local_178 = local_190;
  (**(code **)(*param_2 + 0x60))(param_2,local_a8,&local_1a8);
  FUN_140213fc0(param_4);
  if ((local_48 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417333de FUN_1417333de body=269 status=ok
// SIG undefined FUN_1417333de(void)

void FUN_1417333de(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417334ec FUN_1417334ec body=64 status=ok
// SIG undefined FUN_1417334ec(void)

void FUN_1417334ec(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x50);
    *(undefined8 **)(param_1 + 0x50) = puVar2;
    *puVar1 = puVar2;
  }
  return;
}



// FUNCTION 14173352c FUN_14173352c body=93 status=ok
// SIG undefined FUN_14173352c(void)

longlong FUN_14173352c(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_14041f834(param_1);
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



// FUNCTION 14173358a FUN_14173358a body=29 status=ok
// SIG undefined FUN_14173358a(void)

undefined8 FUN_14173358a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417335a7 FUN_1417335a7 body=49 status=ok
// SIG undefined FUN_1417335a7(void)

longlong FUN_1417335a7(void)

{
  if (DAT_14c998810 == 0) {
    FUN_14086a14e(&DAT_14c998810,&PTR_FUN_149f884f8);
  }
  return DAT_14c998810;
}



// FUNCTION 1417335d8 FUN_1417335d8 body=110 status=ok
// SIG undefined FUN_1417335d8(void)

void FUN_1417335d8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 0x20, 0x20 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 2)) {
      uVar2 = uVar1 >> 2 & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x8c)) {
    return;
  }
  *(int *)(param_1 + 0x8c) = (int)uVar2;
  FUN_140724ba4(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,4);
  return;
}



// FUNCTION 141733646 FUN_141733646 body=99 status=ok
// SIG undefined FUN_141733646(void)

ulonglong FUN_141733646(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  iVar1 = (int)param_1[1];
  uVar4 = (ulonglong)iVar1;
  if (uVar4 != 0) {
    lVar5 = uVar4 * 4;
    uVar3 = 0;
    do {
      if (*(int *)(lVar2 + uVar3 * 4) == *param_2) {
        if ((int)uVar3 != -1) {
          uVar4 = uVar3 & 0xffffffff;
          goto LAB_141733696;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -4;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1447808da(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(int *)(lVar2 + uVar4 * 4) = *param_2;
LAB_141733696:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1417336a9 FUN_1417336a9 body=49 status=ok
// SIG undefined FUN_1417336a9(void)

longlong FUN_1417336a9(void)

{
  if (DAT_14c99c5b0 == 0) {
    FUN_14086a14e(&DAT_14c99c5b0,&PTR_FUN_149fa7410);
  }
  return DAT_14c99c5b0;
}



// FUNCTION 1417336da FUN_1417336da body=49 status=ok
// SIG undefined FUN_1417336da(void)

longlong FUN_1417336da(void)

{
  if (DAT_14c99c4d8 == 0) {
    FUN_14073dd9a(&DAT_14c99c4d8,&PTR_LAB_149fa6ab0);
  }
  return DAT_14c99c4d8;
}



// FUNCTION 14173370b FUN_14173370b body=49 status=ok
// SIG undefined FUN_14173370b(void)

longlong FUN_14173370b(void)

{
  if (DAT_14c99c520 == 0) {
    FUN_14086a14e(&DAT_14c99c520,&PTR_FUN_149fa7228);
  }
  return DAT_14c99c520;
}



// FUNCTION 14173373c FUN_14173373c body=49 status=ok
// SIG undefined FUN_14173373c(void)

longlong FUN_14173373c(void)

{
  if (DAT_14c99c550 == 0) {
    FUN_14086a14e(&DAT_14c99c550,&PTR_FUN_149fa72d0);
  }
  return DAT_14c99c550;
}



// FUNCTION 14173376d FUN_14173376d body=49 status=ok
// SIG undefined FUN_14173376d(void)

longlong FUN_14173376d(void)

{
  if (DAT_14c99c598 == 0) {
    FUN_14086a14e(&DAT_14c99c598,&PTR_FUN_149fa73c0);
  }
  return DAT_14c99c598;
}



// FUNCTION 14173379e FUN_14173379e body=49 status=ok
// SIG undefined FUN_14173379e(void)

longlong FUN_14173379e(void)

{
  if (DAT_14c99c538 == 0) {
    FUN_14086a14e(&DAT_14c99c538,&PTR_FUN_149fa7288);
  }
  return DAT_14c99c538;
}



// FUNCTION 1417337cf FUN_1417337cf body=49 status=ok
// SIG undefined FUN_1417337cf(void)

longlong FUN_1417337cf(void)

{
  if (DAT_14c99c580 == 0) {
    FUN_14086a14e(&DAT_14c99c580,&PTR_FUN_149fa7368);
  }
  return DAT_14c99c580;
}



// FUNCTION 141733800 FUN_141733800 body=533 status=ok
// SIG undefined FUN_141733800(void)

void FUN_141733800(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x10);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (uVar3 < 2) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 1;
    _Src = *(void **)((longlong)param_1 + 8);
joined_r0x0001417339b9:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    if (*(uint *)((longlong)param_1 + 0x14) < 2) {
      uVar6 = 4;
      if (4 < uVar3) {
        uVar6 = uVar3;
      }
      lVar7 = (longlong)(int)uVar6;
    }
    else {
      lVar7 = (longlong)(int)uVar3 + ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 4;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_141733895;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_141733895:
    uVar8 = uVar8 >> 2;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 8);
    }
    else {
      *(uint *)((longlong)param_1 + 0x14) = uVar6;
      _Src = *(void **)((longlong)param_1 + 8);
      if (uVar6 < 2) goto joined_r0x0001417339b9;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 8,0,uVar8,4);
      memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 2);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,uVar8,4);
  return;
}



// FUNCTION 141733a16 FUN_141733a16 body=386 status=ok
// SIG undefined FUN_141733a16(void)

longlong * FUN_141733a16(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 2,(longlong)*(int *)((longlong)param_2 + 0xc) << 2
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_146971392(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x400000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1400751dc(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_146971392(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_146f9f216(param_2);
        FUN_1400751dc(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141733b99 FUN_141733b99 body=49 status=ok
// SIG undefined FUN_141733b99(void)

longlong FUN_141733b99(void)

{
  if (DAT_14c99c7d0 == 0) {
    FUN_14086a14e(&DAT_14c99c7d0,&PTR_FUN_149fab2c0);
  }
  return DAT_14c99c7d0;
}



// FUNCTION 141733bca FUN_141733bca body=49 status=ok
// SIG undefined FUN_141733bca(void)

longlong FUN_141733bca(void)

{
  if (DAT_14c99c800 == 0) {
    FUN_14086a14e(&DAT_14c99c800,&PTR_FUN_149fab3f0);
  }
  return DAT_14c99c800;
}



// FUNCTION 141733bfb FUN_141733bfb body=49 status=ok
// SIG undefined FUN_141733bfb(void)

longlong FUN_141733bfb(void)

{
  if (DAT_14c99c818 == 0) {
    FUN_14086a14e(&DAT_14c99c818,&PTR_FUN_149fab4b0);
  }
  return DAT_14c99c818;
}



// FUNCTION 141733c2c FUN_141733c2c body=49 status=ok
// SIG undefined FUN_141733c2c(void)

longlong FUN_141733c2c(void)

{
  if (DAT_14c99cee8 == 0) {
    FUN_14086a14e(&DAT_14c99cee8,&PTR_FUN_149fb2240);
  }
  return DAT_14c99cee8;
}



// FUNCTION 141733c5d FUN_141733c5d body=49 status=ok
// SIG undefined FUN_141733c5d(void)

longlong FUN_141733c5d(void)

{
  if (DAT_14c99c8f0 == 0) {
    FUN_14086a14e(&DAT_14c99c8f0,&PTR_FUN_149fabf38);
  }
  return DAT_14c99c8f0;
}



// FUNCTION 141733c8e FUN_141733c8e body=194 status=ok
// SIG undefined FUN_141733c8e(void)

undefined4 * FUN_141733c8e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  pvVar2 = *(void **)(param_2 + 6);
  param_1[8] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy(*(void **)(param_1 + 6),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 10) = 0;
  iVar1 = param_2[0xc];
  pvVar2 = *(void **)(param_2 + 10);
  param_1[0xc] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xd] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy(*(void **)(param_1 + 10),pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x10] = param_2[0x10];
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 141733d50 FUN_141733d50 body=49 status=ok
// SIG undefined FUN_141733d50(void)

longlong FUN_141733d50(void)

{
  if (DAT_14c99d118 == 0) {
    FUN_14086a14e(&DAT_14c99d118,&PTR_FUN_149fba848);
  }
  return DAT_14c99d118;
}



// FUNCTION 141733d81 FUN_141733d81 body=49 status=ok
// SIG undefined FUN_141733d81(void)

longlong FUN_141733d81(void)

{
  if (DAT_14c99d130 == 0) {
    FUN_14086a14e(&DAT_14c99d130,&PTR_FUN_149fba8c8);
  }
  return DAT_14c99d130;
}



// FUNCTION 141733db2 FUN_141733db2 body=49 status=ok
// SIG undefined FUN_141733db2(void)

longlong FUN_141733db2(void)

{
  if (DAT_14c99d148 == 0) {
    FUN_14086a14e(&DAT_14c99d148,&PTR_FUN_149fba948);
  }
  return DAT_14c99d148;
}



// FUNCTION 141733de4 FUN_141733de4 body=598 status=ok
// SIG undefined FUN_141733de4(void)

void FUN_141733de4(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x60;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x54 + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x50 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_141733ff1;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_141733ff1:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173403c FUN_14173403c body=594 status=ok
// SIG undefined FUN_14173403c(void)

void FUN_14173403c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x58;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x54 + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x50 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_141734245;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_141734245:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173428f FUN_14173428f body=49 status=ok
// SIG undefined FUN_14173428f(void)

longlong FUN_14173428f(void)

{
  if (DAT_14c99d3d0 == 0) {
    FUN_14073dd9a(&DAT_14c99d3d0,&PTR_LAB_149fbf3a0);
  }
  return DAT_14c99d3d0;
}



// FUNCTION 1417342c0 FUN_1417342c0 body=49 status=ok
// SIG undefined FUN_1417342c0(void)

longlong FUN_1417342c0(void)

{
  if (DAT_14c99d630 == 0) {
    FUN_14073dd9a(&DAT_14c99d630,&PTR_LAB_149fc3540);
  }
  return DAT_14c99d630;
}



// FUNCTION 1417342f1 FUN_1417342f1 body=49 status=ok
// SIG undefined FUN_1417342f1(void)

longlong FUN_1417342f1(void)

{
  if (DAT_14c99d7c8 == 0) {
    FUN_14073dd9a(&DAT_14c99d7c8,&PTR_LAB_149fc6ca0);
  }
  return DAT_14c99d7c8;
}



// FUNCTION 141734322 FUN_141734322 body=224 status=ok
// SIG undefined FUN_141734322(void)

undefined8 FUN_141734322(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  uVar1 = (uint)((ulonglong)*(undefined8 *)(param_2 + 2) >> 0x10);
  uVar2 = (uint)((ulonglong)*(undefined8 *)param_2 >> 0x10);
  uVar2 = (local_38 << 0x10 | local_38 & 0xffff) + uStack_34 + (uVar2 << 0x13 | uVar2 & 0xffff) +
          ((local_38 & 0xffff) >> 4);
  iVar3 = FUN_1447fff98(param_1,(uVar2 >> 2) +
                                (uStack_30 << 0x10 | uStack_30 & 0xffff) + uStack_2c +
                                (uVar1 << 0x13 | uVar1 & 0xffff) + ((uStack_30 & 0xffff) >> 4) +
                                uVar2 * 0x40 + 0x9e3779b9 ^ uVar2);
  if ((iVar3 == -1) ||
     (puVar4 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_1), puVar4 == (undefined8 *)0x0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *puVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141734404 FUN_141734404 body=503 status=ok
// SIG undefined FUN_141734404(void)

void FUN_141734404(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x58);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0xb) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 10;
    _Src = *(void **)((longlong)param_1 + 0x50);
joined_r0x00014173457e:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (10 < *(uint *)((longlong)param_1 + 0x5c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_141734492;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_141734492:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x50);
    }
    else {
      *(uint *)((longlong)param_1 + 0x5c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x50);
      if (uVar6 < 0xb) goto joined_r0x00014173457e;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x50,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x50),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x50,param_2,uVar8,8);
  return;
}



// FUNCTION 1417345fc FUN_1417345fc body=543 status=ok
// SIG undefined FUN_1417345fc(void)

void FUN_1417345fc(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x208);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x41) {
    *(undefined4 *)((longlong)param_1 + 0x20c) = 0x40;
    _Src = *(void **)((longlong)param_1 + 0x200);
joined_r0x00014173478b:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (0x40 < *(uint *)((longlong)param_1 + 0x20c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_141734690;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_141734690:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x20c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x200);
    }
    else {
      *(uint *)((longlong)param_1 + 0x20c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x200);
      if (uVar6 < 0x41) goto joined_r0x00014173478b;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x200,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x200),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x200,param_2,uVar8,8);
  return;
}



// FUNCTION 14173481c FUN_14173481c body=429 status=ok
// SIG undefined FUN_14173481c(void)

void FUN_14173481c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140957390(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14055df60(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x28 + -0x24);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1417349ca FUN_1417349ca body=429 status=ok
// SIG undefined FUN_1417349ca(void)

void FUN_1417349ca(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_140549ad6(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_140549c28(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x28 + -0x24);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -10;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 141734b78 FUN_141734b78 body=492 status=ok
// SIG undefined FUN_141734b78(void)

void FUN_141734b78(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 0xb0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if (*(int *)(param_1 + 200) == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar8 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
    iVar8 = *(int *)(param_1 + 200);
  }
  lVar4 = local_60;
  iVar7 = (int)local_68;
  uVar5 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar13 = local_50;
  if (local_58._4_4_ != iVar8 || local_60 != local_70) {
    do {
      local_68 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar6 * 0x20);
      (*(code *)*param_2)(param_2[1],&local_68);
      uVar5 = ~(uint)uVar14 & uVar5;
      lVar12 = *(longlong *)(lVar4 + 0x10);
      if (*(longlong *)(lVar4 + 0x10) == 0) {
        lVar12 = lVar4;
      }
      iVar2 = *(int *)(lVar4 + 0x18);
      lVar10 = (longlong)iVar7;
      uVar9 = *(uint *)(lVar12 + lVar10 * 4) & uVar5;
      if (uVar9 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar3 = iVar6;
        if (iVar6 < iVar7) {
          iVar3 = iVar7;
        }
        if (iVar7 < iVar6) {
          lVar11 = 0;
          do {
            uVar9 = *(uint *)(lVar12 + lVar10 * 4 + 4 + lVar11 * 4);
            if (uVar9 != 0) {
              iVar7 = iVar7 + (int)lVar11 + 1;
              uVar5 = 0xffffffff;
              goto LAB_141734cb6;
            }
            iVar13 = iVar13 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar3 - lVar10 != lVar11);
          uVar5 = 0xffffffff;
          iVar7 = iVar3;
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar2;
      }
      else {
LAB_141734cb6:
        uVar14 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar6) {
          iVar6 = iVar2;
        }
      }
    } while (iVar6 != iVar8 || lVar4 != local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141734d66 FUN_141734d66 body=1112 status=ok
// SIG undefined FUN_141734d66(void)

longlong * FUN_141734d66(longlong *param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  
  iVar23 = (int)param_1[1];
  iVar9 = *(int *)((longlong)param_1 + 0x34);
  if (iVar23 != iVar9) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        plVar12 = (longlong *)(*param_1 + (longlong)iVar8 * 0x28);
        if (*plVar12 == *param_3) {
          if (plVar12 != (longlong *)0x0) goto LAB_141734f6a;
          break;
        }
        iVar8 = (int)plVar12[4];
      } while (iVar8 != -1);
    }
  }
  if (iVar9 == 0) {
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_140549c28(param_1,iVar23);
    }
    iVar9 = (int)param_1[5];
    if (iVar9 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar8 = iVar9 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar15 = iVar9 + 1;
    iVar22 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar22 = iVar9;
    }
    if (iVar22 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar9) {
        iVar8 = iVar9;
        if (iVar9 + 0x20U < 0xa0) {
          iVar15 = 0x80;
        }
        else {
          uVar17 = iVar9 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar17) {
              uVar18 = uVar17;
            }
          }
          else {
            uVar18 = uVar17 + (uVar17 * 3 >> 3) + 0x10;
          }
          uVar13 = (ulonglong)(uVar18 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar10 = (uint)(uVar13 + 0xf);
              if (uVar18 < 0x1ffd) {
                uVar13 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar13 + 0xf >> 4]];
              }
              else {
                uVar16 = (ulonglong)(uVar10 & 0xfffffff0);
                if (uVar16 < 0x7ff1) {
                  bVar14 = (&DAT_14c841e00)[uVar10 >> 4];
                  uVar21 = 0x32;
                  if (0x32 < bVar14) {
                    uVar21 = (ulonglong)bVar14;
                  }
                  uVar24 = 0x32 - (ulonglong)bVar14;
                  do {
                    uVar13 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar24 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar24 & 0xffffffff] & 0xf) == 0) goto LAB_141735062;
                    lVar19 = uVar21 + 1 + uVar24;
                    uVar24 = uVar24 - 1;
                  } while (lVar19 != 0x33);
                }
                uVar13 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar13 = (ulonglong)DAT_14c841df8;
                }
                uVar13 = -uVar13 & (uVar16 + uVar13) - 1;
              }
            }
            else {
              uVar13 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar13,0);
              iVar8 = (int)param_1[5];
            }
          }
LAB_141735062:
          iVar11 = (int)(uVar13 >> 2);
          iVar15 = -0x20;
          if ((int)uVar17 <= iVar11) {
            iVar15 = iVar11 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
        FUN_1446efbd8(plVar12,iVar8);
        iVar15 = (int)param_1[5] + 1;
      }
      iVar8 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar8 = iVar15;
      }
      *(int *)(param_1 + 5) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar12;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar8 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar14 = (byte)iVar9 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar22 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar19 = (longlong)iVar23;
    iVar8 = *(int *)(*param_1 + 4 + lVar19 * 0x28);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9 + -1;
    if (iVar9 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x28) = 0xffffffff;
    }
  }
  iVar9 = 1;
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar8 = iVar23;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar23 & 0x1f);
  plVar12 = (longlong *)(*param_1 + lVar19 * 0x28);
  lVar19 = *param_3;
  *plVar12 = lVar19;
  plVar12[2] = 0;
  plVar12[3] = 0x100000000;
  *(undefined4 *)(plVar12 + 4) = 0xffffffff;
  uVar17 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar17 != 0) && (uVar17 != 1)) {
    plVar20 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar20 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        plVar20 = (longlong *)(*param_1 + (longlong)iVar8 * 0x28);
        if (*plVar20 == lVar19) {
          if (plVar20[2] != 0) {
            FUN_1400020a8();
          }
          lVar19 = *plVar12;
          uVar2 = *(undefined4 *)((longlong)plVar12 + 4);
          lVar6 = plVar12[1];
          uVar3 = *(undefined4 *)((longlong)plVar12 + 0xc);
          uVar4 = *(undefined4 *)((longlong)plVar12 + 0x14);
          lVar7 = plVar12[3];
          uVar5 = *(undefined4 *)((longlong)plVar12 + 0x1c);
          *(int *)(plVar20 + 2) = (int)plVar12[2];
          *(undefined4 *)((longlong)plVar20 + 0x14) = uVar4;
          *(int *)(plVar20 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar20 + 0x1c) = uVar5;
          *(int *)plVar20 = (int)lVar19;
          *(undefined4 *)((longlong)plVar20 + 4) = uVar2;
          *(int *)(plVar20 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar20 + 0xc) = uVar3;
          FUN_14701eeb2(param_1,iVar23);
          goto LAB_141734f58;
        }
        iVar8 = (int)plVar20[4];
      } while (iVar8 != -1);
    }
  }
  if (3 < uVar17) {
    uVar13 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar9 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar17 < 1) || (iVar9 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)((longlong)plVar12 + 0x24) = param_2;
    plVar20 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar20 = param_1 + 7;
    }
    *(undefined4 *)(plVar12 + 4) =
         *(undefined4 *)
          ((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar23;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_14142a43e(param_1);
  }
LAB_141734f58:
  plVar12 = (longlong *)(*param_1 + (longlong)iVar23 * 0x28);
LAB_141734f6a:
  return plVar12 + 1;
}



// FUNCTION 1417351be FUN_1417351be body=866 status=ok
// SIG undefined FUN_1417351be(void)

longlong FUN_1417351be(longlong *param_1,uint param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  int iVar22;
  
  iVar22 = (int)param_1[1];
  iVar12 = *(int *)((longlong)param_1 + 0x34);
  if (iVar22 != iVar12) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        lVar19 = *param_1 + (longlong)iVar11 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x20) == *param_3) {
          if (lVar19 != 0) goto LAB_14173521e;
          break;
        }
        iVar11 = *(int *)(lVar19 + 0x18);
      } while (iVar11 != -1);
    }
  }
  if (iVar12 == 0) {
    *(int *)(param_1 + 1) = iVar22 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar22) {
      FUN_1447711aa(param_1,iVar22);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar17 = iVar12 + 1;
    iVar21 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar21 = iVar12;
    }
    if (iVar21 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar11 = iVar12;
        }
        else {
          uVar18 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar18) {
              uVar16 = uVar18;
            }
          }
          else {
            uVar16 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar16 << 2,0);
          iVar11 = (int)(uVar14 >> 2);
          iVar17 = -0x20;
          if ((int)uVar18 <= iVar11) {
            iVar17 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar13,iVar11);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar11 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar13;
        }
        bVar15 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar11 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar22;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar21 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar22 = (int)param_1[6];
    lVar19 = (longlong)iVar22;
    iVar11 = *(int *)(*param_1 + 4 + lVar19 * 0x20);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar12 + -1;
    if (iVar12 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x20) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar12 = iVar22 + 0x1f;
  if (-1 < iVar22) {
    iVar12 = iVar22;
  }
  puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar22 & 0x1f);
  iVar12 = 1;
  lVar5 = *param_1;
  lVar19 = lVar19 * 0x20;
  puVar2 = (undefined4 *)(lVar5 + lVar19);
  lVar6 = *param_3;
  *(longlong *)(lVar5 + lVar19) = lVar6;
  puVar4 = (undefined8 *)(lVar5 + 8 + lVar19);
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar19) = 0xffffffff;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar18 != 0) && (uVar18 != 1)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x20) == lVar6) {
          if (*(longlong *)(puVar3 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar7 = *puVar2;
          uVar8 = puVar2[1];
          uVar9 = puVar2[2];
          uVar10 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar7;
          puVar3[1] = uVar8;
          puVar3[2] = uVar9;
          puVar3[3] = uVar10;
          FUN_14701ef24(param_1,iVar22);
          goto LAB_1417353be;
        }
        iVar11 = puVar3[6];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar18) {
    uVar14 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar18 < 1) || (iVar12 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    puVar2[7] = param_2;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4)
    ;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar22;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_1414a73aa(param_1);
  }
LAB_1417353be:
  lVar19 = *param_1 + (longlong)iVar22 * 0x20;
LAB_14173521e:
  return lVar19 + 8;
}



// FUNCTION 141735520 FUN_141735520 body=447 status=ok
// SIG undefined FUN_141735520(void)

undefined4 *
FUN_141735520(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402ba9e4(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  *local_48 = (longlong)puVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  if (puVar1 == (undefined8 *)0x0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *puVar1;
    uVar5 = puVar1[2];
  }
  uVar4 = (uint)((ulonglong)uVar5 >> 0x10);
  uVar12 = (uint)uVar5 & 0xffff;
  uVar6 = (uint)((ulonglong)uVar8 >> 0x10);
  uVar11 = (uint)uVar8 & 0xffff;
  uVar6 = ((uint)uVar8 << 0x10 | uVar11) + (int)((ulonglong)uVar8 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar11 >> 4);
  uVar6 = (uVar6 >> 2) +
          (uint)uVar5 * 0x10000 + (int)((ulonglong)uVar5 >> 0x20) + uVar12 +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar12 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6;
  local_68 = param_4;
  cVar3 = FUN_1402ba92a(param_1,uVar6,local_48,&local_54);
  uVar2 = local_54;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar9 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0xc) = uVar6;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1414c06bc(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417356e0 FUN_1417356e0 body=49 status=ok
// SIG undefined FUN_1417356e0(void)

longlong FUN_1417356e0(void)

{
  if (DAT_14c99e048 == 0) {
    FUN_14086a14e(&DAT_14c99e048,&PTR_FUN_149fcbda0);
  }
  return DAT_14c99e048;
}



// FUNCTION 141735711 FUN_141735711 body=49 status=ok
// SIG undefined FUN_141735711(void)

longlong FUN_141735711(void)

{
  if (DAT_14c99e0b8 == 0) {
    FUN_14086a14e(&DAT_14c99e0b8,&PTR_FUN_149fcc7f0);
  }
  return DAT_14c99e0b8;
}



// FUNCTION 14173574f FUN_14173574f body=49 status=ok
// SIG undefined FUN_14173574f(void)

longlong FUN_14173574f(void)

{
  if (DAT_14c99e218 == 0) {
    FUN_14086a14e(&DAT_14c99e218,&PTR_FUN_149fce4a8);
  }
  return DAT_14c99e218;
}



// FUNCTION 141735780 FUN_141735780 body=625 status=ok
// SIG undefined FUN_141735780(void)

undefined8 FUN_141735780(undefined8 param_1,longlong param_2,longlong *param_3)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (longlong)((int)param_3[1] + -1) * 0x20;
  uVar8 = *(uint *)(*param_3 + 8 + lVar4);
  uVar2 = *(ulonglong *)(*param_3 + 0x18 + lVar4);
  local_38 = uVar2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    local_40 = FUN_140b31576;
    local_48 = &DAT_14c951a38;
    local_50 = 0;
    local_58 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  cVar3 = FUN_1400164de(&local_38,&DAT_14c951a90);
  if ((uVar2 == 0) || (cVar3 == '\0')) {
    lVar4 = FUN_140010bca();
    if (((uVar2 & 1) == 0) ||
       (puVar6 = (ulonglong *)(uVar2 & 0xfffffffffffffffe), puVar6 == (ulonglong *)0x0)) {
LAB_14173588b:
      uVar5 = FUN_1446ddbd2();
      cVar3 = FUN_1400164de(&local_38,uVar5);
      uVar5 = 0;
      if ((uVar2 == 0) || (cVar3 == '\0')) goto LAB_141735868;
      uVar5 = 0;
      if ((ulonglong)uVar8 == 0xffffffff) {
        uVar8 = 0;
      }
      if (*(int *)(uVar2 + 0x30) <= (int)uVar8) goto LAB_141735868;
      lVar4 = 0x10;
      puVar6 = (ulonglong *)
               (param_2 + *(int *)(uVar2 + 0x44) +
               (longlong)(int)uVar8 * (longlong)*(int *)(uVar2 + 0x34));
      if (puVar6 == (ulonglong *)0x0) goto LAB_1417359d5;
    }
    else {
      if ((*(int *)(puVar6[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
         (*(longlong *)(*(longlong *)(puVar6[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) goto LAB_14173588b;
      lVar4 = 0x18;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(puVar6);
      }
    }
LAB_141735862:
    *(ulonglong **)((longlong)param_3 + lVar4) = puVar6;
    uVar5 = 1;
  }
  else {
    puVar6 = (ulonglong *)(param_2 + *(int *)(uVar2 + 0x44));
    if (uVar8 == 0xffffffff) {
joined_r0x0001417359cf:
      lVar4 = 0x10;
      if (puVar6 != (ulonglong *)0x0) goto LAB_141735862;
    }
    else {
      bVar1 = *(byte *)(uVar2 + 0x70);
      (**(code **)(**(longlong **)(uVar2 + 0x78) + 0x178))();
      if ((-1 < (int)uVar8) && ((int)uVar8 < (int)puVar6[1])) {
        if ((bVar1 & 1) == 0) {
          uVar7 = *puVar6;
        }
        else {
          uVar7 = *puVar6;
          if ((uVar7 & 1) != 0) {
            uVar7 = (longlong)puVar6 + ((longlong)uVar7 >> 0x18);
          }
        }
        puVar6 = (ulonglong *)
                 (uVar7 + (longlong)*(int *)(*(longlong *)(uVar2 + 0x78) + 0x34) * (ulonglong)uVar8)
        ;
        goto joined_r0x0001417359cf;
      }
    }
LAB_1417359d5:
    uVar5 = 0;
  }
LAB_141735868:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1417359f2 FUN_1417359f2 body=1198 status=ok
// SIG undefined FUN_1417359f2(void)

ulonglong FUN_1417359f2(longlong param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  byte bVar7;
  longlong **pplVar8;
  undefined8 unaff_RBP;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  uint uVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  code *local_70;
  longlong *local_60;
  void *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar3 = *(ulonglong **)(param_1 + 0x10);
  lVar5 = (longlong)((int)param_3[1] + -1) * 0x20;
  uVar12 = *(uint *)(*param_3 + 8 + lVar5);
  plVar6 = *(longlong **)(*param_3 + 0x18 + lVar5);
  local_60 = plVar6;
  if (((((ulonglong)plVar6 & 1) != 0) && (((ulonglong)plVar6 & 0xfffffffffffffffe) != 0)) &&
     (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
    FUN_1446ddbd2();
    local_70 = FUN_140b31576;
    local_78 = &DAT_14c951a38;
    uStack_80 = 0;
    local_88 = 0x208001;
    FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
    atexit(FUN_14280cbf7);
    _Init_thread_footer(&DAT_14c951ae0);
  }
  pplVar8 = &local_60;
  cVar4 = FUN_1400164de(pplVar8,&DAT_14c951a90);
  bVar7 = (byte)pplVar8;
  if ((plVar6 == (longlong *)0x0) || (cVar4 == '\0')) {
    lVar5 = FUN_140010bca();
    if ((((ulonglong)plVar6 & 1) == 0) ||
       (uVar10 = (ulonglong)plVar6 & 0xfffffffffffffffe, uVar10 == 0)) {
LAB_141735bf9:
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_78 = (undefined *)FUN_140342cba();
        local_70 = FUN_1468c7f1e;
        uStack_80 = 0;
        local_88 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      cVar4 = FUN_1400164de(&local_60,&DAT_14c951a38);
      unaff_RBP = 0;
      bVar7 = 1;
      if ((plVar6 == (longlong *)0x0) || (cVar4 == '\0')) goto LAB_141735bce;
      unaff_RBP = 0;
      if ((ulonglong)uVar12 == 0xffffffff) {
        uVar12 = 0;
      }
      if ((int)plVar6[6] <= (int)uVar12) goto LAB_141735bce;
      param_2 = (longlong *)
                ((longlong)param_2 +
                (longlong)(int)uVar12 * (longlong)*(int *)((longlong)plVar6 + 0x34) +
                (longlong)*(int *)((longlong)plVar6 + 0x44));
      if (param_2 == (longlong *)0x0) goto LAB_141735e3d;
      *puVar3 = (ulonglong)plVar6;
      lVar5 = *plVar6;
      goto LAB_141735c92;
    }
    if ((*(int *)(*(longlong *)(uVar10 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar10 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_141735bf9;
    unaff_RBP = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
    if ((*(char *)(uVar10 + 0xb4) != '\x01') ||
       (plVar6 = (longlong *)FUN_140d2ab24(), plVar6 == (longlong *)0x0)) {
LAB_141735d9e:
      bVar7 = 0;
      goto LAB_141735bce;
    }
    uVar12 = *(uint *)((longlong)param_2 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) != 0) goto LAB_141735d9e;
    local_58 = (void *)0x0;
    uStack_50 = (ulonglong)*(uint *)((longlong)plVar6 + 0x34);
    if (*(uint *)((longlong)plVar6 + 0x34) != 0) {
      FUN_1447403be(&local_58,0);
    }
    if ((*(byte *)((longlong)plVar6 + 0x39) & 2) == 0) {
      (**(code **)(*plVar6 + 0x160))(plVar6);
    }
    else {
      memset(local_58,0,(longlong)(int)plVar6[6] * (longlong)*(int *)((longlong)plVar6 + 0x34));
    }
    (**(code **)(*param_2 + 0x248))(param_2,uVar10,local_58);
    local_88 = 0;
    uStack_80 = 0;
    local_70 = (code *)0x0;
    local_78 = (undefined *)((ulonglong)local_78 & 0xffffffff00000000);
    (**(code **)(*plVar6 + 0xf0))(plVar6,uVar2,local_58,0);
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar11 = (ulonglong *)((longlong)*(int *)((longlong)plVar6 + 0x44) + (longlong)param_2);
    if (uVar12 == 0xffffffff) {
      if (puVar11 == (ulonglong *)0x0) {
        unaff_RBP = 0;
        goto LAB_141735bce;
      }
      *puVar3 = (ulonglong)plVar6;
      lVar5 = *plVar6;
      uVar9 = 1;
    }
    else {
      bVar7 = *(byte *)(plVar6 + 0xe);
      (**(code **)(*(longlong *)plVar6[0xf] + 0x178))();
      if (((int)uVar12 < 0) || ((int)puVar11[1] <= (int)uVar12)) {
LAB_141735e3d:
        bVar7 = 1;
        unaff_RBP = 0;
        goto LAB_141735bce;
      }
      plVar6 = (longlong *)plVar6[0xf];
      iVar1 = *(int *)((longlong)plVar6 + 0x34);
      *puVar3 = (ulonglong)plVar6;
      if ((int)puVar11[1] == 0) {
        param_2 = (longlong *)0x0;
      }
      else {
        if ((bVar7 & 1) == 0) {
          uVar10 = *puVar11;
        }
        else {
          uVar10 = *puVar11;
          if ((uVar10 & 1) != 0) {
            uVar10 = (longlong)puVar11 + ((longlong)uVar10 >> 0x18);
          }
        }
        param_2 = (longlong *)((longlong)iVar1 * (ulonglong)uVar12 + uVar10);
      }
      lVar5 = *plVar6;
LAB_141735c92:
      uVar9 = 0;
    }
    local_78 = (undefined *)((ulonglong)local_78 & 0xffffffff00000000);
    local_70 = (code *)0x0;
    uStack_80 = 0;
    local_88 = 0;
    (**(code **)(lVar5 + 0xf0))(plVar6,uVar2,param_2,uVar9);
  }
  unaff_RBP = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  bVar7 = 1;
LAB_141735bce:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),(byte)unaff_RBP & bVar7) & 0xffffffff;
}



// FUNCTION 141735ea2 FUN_141735ea2 body=157 status=ok
// SIG undefined FUN_141735ea2(void)

undefined8 * FUN_141735ea2(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1447c510a(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 << 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 141735f3f FUN_141735f3f body=49 status=ok
// SIG undefined FUN_141735f3f(void)

longlong FUN_141735f3f(void)

{
  if (DAT_14c99e6d8 == 0) {
    FUN_14086a14e(&DAT_14c99e6d8,&PTR_FUN_14a13a248);
  }
  return DAT_14c99e6d8;
}



// FUNCTION 141735f70 FUN_141735f70 body=49 status=ok
// SIG undefined FUN_141735f70(void)

longlong FUN_141735f70(void)

{
  if (DAT_14c99eb98 == 0) {
    FUN_14086a14e(&DAT_14c99eb98,&PTR_FUN_14a13e770);
  }
  return DAT_14c99eb98;
}



// FUNCTION 141735fa1 FUN_141735fa1 body=49 status=ok
// SIG undefined FUN_141735fa1(void)

longlong FUN_141735fa1(void)

{
  if (DAT_14c99ebb0 == 0) {
    FUN_14086a14e(&DAT_14c99ebb0,&PTR_FUN_14a13e7e8);
  }
  return DAT_14c99ebb0;
}



// FUNCTION 141735fd2 FUN_141735fd2 body=49 status=ok
// SIG undefined FUN_141735fd2(void)

longlong FUN_141735fd2(void)

{
  if (DAT_14c99ed78 == 0) {
    FUN_14086a14e(&DAT_14c99ed78,&PTR_FUN_14a13fc68);
  }
  return DAT_14c99ed78;
}



// FUNCTION 141736003 FUN_141736003 body=49 status=ok
// SIG undefined FUN_141736003(void)

longlong FUN_141736003(void)

{
  if (DAT_14c99ef10 == 0) {
    FUN_14086a14e(&DAT_14c99ef10,&PTR_FUN_14a1425a0);
  }
  return DAT_14c99ef10;
}



// FUNCTION 141736034 FUN_141736034 body=49 status=ok
// SIG undefined FUN_141736034(void)

longlong FUN_141736034(void)

{
  if (DAT_14c99ef00 == 0) {
    FUN_14073dd9a(&DAT_14c99ef00,&PTR_LAB_14a142240);
  }
  return DAT_14c99ef00;
}



// FUNCTION 141736066 FUN_141736066 body=349 status=ok
// SIG undefined FUN_141736066(void)

void FUN_141736066(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 0x18);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  uVar7 = 2;
  if (2 < uVar2) {
    if (*(uint *)(param_1 + 0x1c) < 3) {
      uVar3 = 4;
      if (4 < uVar2) {
        uVar3 = uVar2;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
    }
    uVar5 = lVar4 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar7 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
        }
        else {
          if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar1) {
              uVar6 = (ulonglong)bVar1;
            }
            uVar8 = 0x32 - (ulonglong)bVar1;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14173610d;
              lVar4 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_14173610d:
    uVar7 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar5 >> 3)) {
      uVar7 = uVar5 >> 3 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x1c) = (int)uVar7;
  FUN_140254e44(param_1,param_2,uVar7,8);
  return;
}



// FUNCTION 1417361c3 FUN_1417361c3 body=49 status=ok
// SIG undefined FUN_1417361c3(void)

longlong FUN_1417361c3(void)

{
  if (DAT_14c99f8c0 == 0) {
    FUN_14086a14e(&DAT_14c99f8c0,&PTR_FUN_14a154998);
  }
  return DAT_14c99f8c0;
}



// FUNCTION 1417361f4 FUN_1417361f4 body=49 status=ok
// SIG undefined FUN_1417361f4(void)

longlong FUN_1417361f4(void)

{
  if (DAT_14c99f7b0 == 0) {
    FUN_14073dd9a(&DAT_14c99f7b0,&PTR_LAB_14a152710);
  }
  return DAT_14c99f7b0;
}



// FUNCTION 141736226 FUN_141736226 body=126 status=ok
// SIG undefined FUN_141736226(void)

void FUN_141736226(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1580f0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  lVar2 = *(longlong *)(param_1 + 0x10);
  puVar1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14a158080;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[5] = uVar3;
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  return;
}



// FUNCTION 1417362a4 FUN_1417362a4 body=29 status=ok
// SIG undefined FUN_1417362a4(void)

undefined8 FUN_1417362a4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417362c2 FUN_1417362c2 body=269 status=ok
// SIG undefined FUN_1417362c2(void)

void FUN_1417362c2(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1417363d0 FUN_1417363d0 body=203 status=ok
// SIG undefined FUN_1417363d0(void)

undefined4 FUN_1417363d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  wchar_t *pwVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  uVar2 = FUN_140988638(&local_28,L"MESSAGING",1);
  if ((char)uVar2 != '\0') {
    cVar1 = FUN_140988638(&local_28,L"STATUS",1);
    if (cVar1 == '\0') {
      FUN_1468161aa(param_4,L"Usage: MESSAGING <Command>");
      FUN_1468161aa(param_4,&DAT_149dfb77a);
      FUN_1468161aa(param_4,L"Command");
      pwVar3 = L"    STATUS = Displays the status of the default message bus";
    }
    else {
      pwVar3 = L"Default message bus has been initialized.";
      if (*(longlong *)(param_1 + 0x10) == 0) {
        pwVar3 = L"Default message bus has NOT been initialized yet.";
      }
    }
    FUN_1468161aa(param_4,pwVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 14173649c FUN_14173649c body=127 status=ok
// SIG undefined FUN_14173649c(void)

ulonglong FUN_14173649c(ulonglong param_1,undefined8 param_2)

{
  PSRWLOCK SRWLock;
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  SRWLock = (PSRWLOCK)(param_1 + 0x270);
  AcquireSRWLockShared(SRWLock);
  iVar1 = *(int *)(param_1 + 0x280);
  if ((longlong)iVar1 == 0) {
    param_1 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x278);
    lVar4 = 0;
    do {
      lVar3 = FUN_1447a8686(*(undefined8 *)(lVar2 + lVar4),param_2);
      param_1 = CONCAT71((int7)(param_1 >> 8),lVar3 != 0);
      if (lVar3 != 0) break;
      bVar5 = (longlong)iVar1 * 8 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  ReleaseSRWLockShared(SRWLock);
  return param_1 & 0xffffffff;
}



// FUNCTION 14173651b FUN_14173651b body=143 status=ok
// SIG undefined FUN_14173651b(void)

undefined1 FUN_14173651b(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99ff74) {
    FUN_144b3d300(&DAT_14c99ff74);
    if (DAT_14c99ff74 == -1) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c99ff70 = FUN_14054d46e(&DAT_14c846b20,L"checkpak");
      _Init_thread_footer(&DAT_14c99ff74);
    }
  }
  return DAT_14c99ff70;
}



// FUNCTION 1417365aa FUN_1417365aa body=112 status=ok
// SIG undefined FUN_1417365aa(void)

void FUN_1417365aa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a0158) {
    FUN_144b3d300(&DAT_14c9a0158);
    if (DAT_14c9a0158 == -1) {
      DAT_14c9a0148 = 0;
      DAT_14c9a0150 = 0;
      atexit(FUN_142b0a772);
      _Init_thread_footer(&DAT_14c9a0158);
      return;
    }
  }
  return;
}



// FUNCTION 141736622 FUN_141736622 body=153 status=ok
// SIG undefined FUN_141736622(void)

bool FUN_141736622(longlong param_1,undefined8 *param_2,undefined1 (*param_3) [16],
                  undefined1 (*param_4) [16])

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0xa4) != '\0') {
    local_38 = *(undefined8 *)(param_1 + 0xa8);
    uStack_30 = *(undefined8 *)(param_1 + 0xb0);
    FUN_142b08556(*param_2,(longlong)*(int *)(param_2 + 1));
  }
  FUN_140f0be04(*param_2,(longlong)*(int *)(param_2 + 1),param_4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return *(int *)param_4[1] == *(int *)param_3[1] && *param_4 == *param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417366bc FUN_1417366bc body=47 status=ok
// SIG undefined FUN_1417366bc(void)

void FUN_1417366bc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1417366ec FUN_1417366ec body=80 status=ok
// SIG undefined FUN_1417366ec(void)

undefined8 FUN_1417366ec(undefined8 *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_140170316(*param_1,*param_2,param_1[6]);
  if (uVar1 < *(ulonglong *)param_1[2]) {
    *(ulonglong *)param_1[2] = uVar1;
    *(undefined2 *)param_1[3] = *(undefined2 *)(param_1 + 4);
    *(ulonglong *)param_1[5] = (*(ulonglong *)param_1[2] & 0xffffffffffff) - 1;
  }
  return 1;
}



// FUNCTION 14173673c FUN_14173673c body=137 status=ok
// SIG undefined FUN_14173673c(void)

bool FUN_14173673c(longlong *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  lVar3 = *param_1;
  *(int *)(param_1[1] + 0x18) = *(int *)(param_1[1] + 0x18) + 1;
  lVar5 = FUN_140170316(lVar3,uVar1,0);
  if (lVar5 == -1) {
    *(undefined4 *)
     (*(longlong *)(lVar3 + 0xb8) + 0x24 + (longlong)(int)(~*(uint *)(lVar3 + 0xdc) & uVar1) * 0x30)
         = 0;
    plVar4 = (longlong *)param_1[2];
    iVar2 = (int)plVar4[1];
    *(uint *)(plVar4 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar4 + 0xc) < iVar2 + 1U) {
      FUN_1447808da(plVar4,iVar2);
    }
    *(uint *)(*plVar4 + (longlong)iVar2 * 4) = uVar1;
  }
  return lVar5 == -1;
}



// FUNCTION 1417367c6 FUN_1417367c6 body=228 status=ok
// SIG undefined FUN_1417367c6(void)

void FUN_1417367c6(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1417368aa FUN_1417368aa body=353 status=ok
// SIG undefined FUN_1417368aa(void)

void FUN_1417368aa(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14173692f;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14173692f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141736a0c FUN_141736a0c body=99 status=ok
// SIG undefined FUN_141736a0c(void)

undefined8 FUN_141736a0c(longlong *param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  
  uVar2 = *param_2;
  lVar3 = *param_1;
  piVar1 = (int *)(*(longlong *)(lVar3 + 0xe0) + 0x18 +
                  (longlong)(int)(~*(uint *)(lVar3 + 0x104) & uVar2) * 0x30);
  *piVar1 = *piVar1 + 1;
  FUN_140272d3d(uVar2,lVar3 + 0xe0,param_1[2],param_1[3],*(undefined4 *)(param_1[1] + 0x28),
                DAT_14c9a0270);
  return 1;
}



// FUNCTION 141736a70 FUN_141736a70 body=177 status=ok
// SIG undefined FUN_141736a70(void)

void FUN_141736a70(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  if (*(char *)(param_1 + 0x80) == '\x01') {
    uVar2 = FUN_1405d8a54(1);
    *(undefined8 *)(param_1 + 0x70) = uVar2;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = 0xffffffff;
    if ((param_2 != 0.0) || (NAN(param_2))) {
      lVar3 = (longlong)(param_2 * 1000.0);
    }
    (**(code **)(*plVar1 + 0x20))(plVar1,lVar3,0);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
    FUN_14018802a(*(undefined8 *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
                    /* WARNING: Could not recover jumptable at 0x000141736aff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c9a00c0);
    return;
  }
  return;
}



// FUNCTION 141736b22 FUN_141736b22 body=1477 status=ok
// SIG undefined FUN_141736b22(void)

int * FUN_141736b22(longlong *param_1,int *param_2,ulonglong *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong uVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar16 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1446efaca(param_1,iVar16);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar8 = iVar20 + 1;
    iVar11 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar11 = iVar20;
    }
    if (iVar11 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar4 = iVar20;
        }
        else {
          uVar10 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar10) {
              uVar17 = uVar10;
            }
          }
          else {
            uVar17 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar6 = FUN_144a3809e(uVar17 << 2,0);
          iVar4 = (int)(uVar6 >> 2);
          iVar8 = -0x20;
          if ((int)uVar10 <= iVar4) {
            iVar8 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar13,iVar4);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar4 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar4 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar13;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar20 & 0x1f;
    puVar1 = (uint *)((longlong)plVar13 + (longlong)(iVar11 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar5 = (longlong)iVar16;
    iVar20 = *(int *)(*param_1 + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 6) = iVar20;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0x10) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar10 = 1;
  puVar9 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar9 = puVar1;
  }
  iVar20 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar20 = iVar16;
  }
  puVar9[iVar20 >> 5] = puVar9[iVar20 >> 5] | 1 << ((byte)iVar16 & 0x1f);
  lVar19 = *param_1;
  lVar5 = lVar5 * 0x10;
  uVar6 = *param_3;
  *(ulonglong *)(lVar19 + lVar5) = uVar6;
  *(undefined4 *)(lVar19 + 8 + lVar5) = 0xffffffff;
  uVar17 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
  uVar17 = uVar17 >> 0x10 ^ uVar17;
  uVar18 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar18) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar20 != -1) {
      do {
        puVar2 = (ulonglong *)(*param_1 + (longlong)iVar20 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar20 * 0x10) == uVar6) {
          *puVar2 = uVar6;
          FUN_140320ff0(param_1,iVar16);
          iVar16 = iVar20;
          goto LAB_141736ec6;
        }
        iVar20 = (int)puVar2[1];
      } while (iVar20 != -1);
    }
  }
  if (3 < uVar18) {
    uVar6 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar10 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    *(uint *)(lVar19 + lVar5 + 0xc) = uVar17;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(lVar19 + lVar5 + 8) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar16;
    goto LAB_141736ec6;
  }
  *(uint *)(param_1 + 9) = uVar10;
  plVar13 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar13,0,0,4);
    uVar10 = *(uint *)(param_1 + 9);
  }
  plVar14 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar13 != 0) {
      FUN_1446efa72(plVar13,0,0,4);
    }
LAB_141736c9c:
    uVar17 = 0;
    do {
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      *(undefined4 *)((longlong)plVar13 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar17) * 4) =
           0xffffffff;
      uVar17 = uVar17 + 1;
    } while (uVar10 != uVar17);
  }
  else {
    if (uVar10 == 0) goto LAB_141736ec6;
    FUN_1446efa72(plVar13,0,uVar10,4);
    if (0 < (int)uVar10) goto LAB_141736c9c;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar6 = 0;
    uVar15 = 1;
    iVar4 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar10 = *puVar9;
    if (uVar10 == 0) {
      iVar4 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar4 = iVar20 + -1;
      }
      uVar6 = 0;
      uVar15 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar15 = uVar6;
      }
      iVar8 = 0;
      do {
        if (uVar15 == uVar6) goto LAB_141736ec6;
        iVar8 = iVar8 + 0x20;
        uVar10 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar6 = 0;
      iVar8 = 0;
    }
    uVar15 = (ulonglong)(-uVar10 & uVar10);
    uVar21 = uVar15 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar4 = (iVar8 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar4) {
      iVar4 = iVar20;
    }
  }
  if (iVar4 < iVar20) {
    uVar10 = 0xffffffff;
    do {
      lVar5 = *param_1;
      lVar19 = (longlong)iVar4 * 0x10;
      uVar17 = ((uint)(*(ulonglong *)(lVar5 + lVar19) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar5 + lVar19) >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar21 = (longlong)(int)(uVar17 >> 0x10 ^ uVar17) & (longlong)(int)param_1[9] - 1U;
      iVar20 = (int)uVar21;
      *(int *)(lVar5 + 0xc + lVar19) = iVar20;
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      *(undefined4 *)(lVar5 + 8 + lVar19) =
           *(undefined4 *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & uVar21) * 4);
      plVar13 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar13 = plVar14;
      }
      *(int *)((longlong)plVar13 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar10 = ~(uint)uVar15 & uVar10;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar20 = (int)param_1[5];
      iVar4 = (int)uVar6;
      lVar5 = (longlong)iVar4;
      uVar17 = puVar9[lVar5] & uVar10;
      if (uVar17 == 0) {
        iVar11 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar11 = iVar20 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar4) {
          iVar12 = iVar4;
        }
        if (iVar11 <= iVar4) break;
        lVar19 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar17 = puVar9[lVar5 + lVar19 + 1];
          if (uVar17 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar12 - lVar5 == lVar19) goto LAB_141736ec6;
        }
        uVar6 = (ulonglong)(iVar4 + (int)lVar19 + 1);
        uVar10 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar17 & uVar17);
      uVar21 = uVar15 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = (iVar8 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar20);
  }
LAB_141736ec6:
  *param_2 = iVar16;
  return param_2;
}



// FUNCTION 1417370e8 FUN_1417370e8 body=67 status=ok
// SIG undefined FUN_1417370e8(void)

void FUN_1417370e8(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173712c FUN_14173712c body=429 status=ok
// SIG undefined FUN_14173712c(void)

void FUN_14173712c(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -6;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1417372da FUN_1417372da body=386 status=ok
// SIG undefined FUN_1417372da(void)

ulonglong FUN_1417372da(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = (ulonglong)uVar3;
  iVar10 = *(int *)(param_1 + 0xc);
  uVar5 = iVar10 - uVar3;
  uVar6 = (ulonglong)uVar5;
  if (((0x3fff < (ulonglong)((longlong)(int)uVar5 * 0x28)) || ((int)(uVar3 * 3) < iVar10 * 2)) &&
     (uVar6 = (ulonglong)CONCAT31((int3)(uVar5 >> 8),(int)uVar5 < 0x41),
     uVar3 == 0 || (int)uVar5 >= 0x41)) {
    if (0 < (int)uVar3) {
      uVar8 = uVar8 * 0x28;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          uVar6 = uVar8 + 0xf;
          if (uVar3 < 0x333) {
            uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
          }
          else {
            if ((uVar6 & 0x3ffffffff0) < 0x7ff1) {
              bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
              uVar7 = 0x32;
              if (0x32 < bVar2) {
                uVar7 = (ulonglong)bVar2;
              }
              uVar9 = 0x32 - (ulonglong)bVar2;
              do {
                uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1417373ab;
                lVar1 = uVar7 + 1 + uVar9;
                uVar9 = uVar9 - 1;
              } while (lVar1 != 0x33);
            }
            uVar8 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar8 = (ulonglong)DAT_14c841df8;
            }
            uVar8 = -uVar8 & ((uVar6 & 0x3ffffffff0) + uVar8) - 1;
          }
        }
        else {
          uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,8);
          iVar10 = *(int *)(param_1 + 0xc);
        }
      }
LAB_1417373ab:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar8;
      uVar6 = SUB168(auVar4 * ZEXT816(0xcccccccccccccccd),0);
      uVar8 = uVar8 / 0x28;
    }
    if ((int)uVar8 != iVar10) {
      *(int *)(param_1 + 0xc) = (int)uVar8;
      uVar6 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar8,0x28,8);
    }
  }
  return uVar6;
}



// FUNCTION 14173745c FUN_14173745c body=366 status=ok
// SIG undefined FUN_14173745c(void)

void FUN_14173745c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar6;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar3) {
      uVar5 = uVar3;
    }
    lVar6 = (longlong)(int)uVar5;
  }
  else {
    lVar6 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  uVar7 = lVar6 * 0x38;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = uVar7 + 0xf;
      if (uVar7 < 0x7ff1) {
        uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
      }
      else {
        if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
          uVar9 = 0x32;
          if (0x32 < bVar2) {
            uVar9 = (ulonglong)bVar2;
          }
          uVar11 = 0x32 - (ulonglong)bVar2;
          do {
            uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar11 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_1417374e1;
            lVar6 = uVar9 + 1 + uVar11;
            uVar11 = uVar11 - 1;
          } while (lVar6 != 0x33);
        }
        uVar7 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar7 = -uVar7 & ((uVar1 & 0xfffffffffffffff0) + uVar7) - 1;
      }
    }
    else {
      uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,8);
    }
  }
LAB_1417374e1:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x2492492492492493),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0x38,8);
  return;
}



// FUNCTION 1417375ca FUN_1417375ca body=199 status=ok
// SIG undefined FUN_1417375ca(void)

void FUN_1417375ca(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = (ulonglong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x800) {
        uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
      }
      else {
        uVar2 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar2 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 4)) {
    uVar2 = uVar1 >> 4 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 141737692 FUN_141737692 body=174 status=ok
// SIG undefined FUN_141737692(void)

void FUN_141737692(size_t *param_1,size_t param_2,size_t param_3)

{
  size_t sVar1;
  void *pvVar2;
  
  if ((longlong)*param_1 < (longlong)param_2) {
    *param_1 = param_2;
    pvVar2 = (void *)FUN_14001cc68(param_2 + (param_2 == 0));
    memset(pvVar2,0,param_2);
    sVar1 = param_1[1];
    param_1[1] = (size_t)pvVar2;
    if (sVar1 != 0) {
      FUN_1400020a8();
    }
  }
  if ((longlong)param_1[2] < (longlong)param_3) {
    param_1[2] = param_3;
    pvVar2 = (void *)FUN_14001cc68(param_3 + (param_3 == 0));
    memset(pvVar2,0,param_3);
    sVar1 = param_1[3];
    param_1[3] = (size_t)pvVar2;
    if (sVar1 != 0) {
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 141737740 FUN_141737740 body=96 status=ok
// SIG undefined FUN_141737740(void)

undefined8 * FUN_141737740(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  DVar1 = GetCurrentThreadId();
  *(DWORD *)(puVar2 + 1) = DVar1;
  *puVar2 = &PTR_FUN_14a1623a0;
  *(undefined1 *)(puVar2 + 2) = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0xffffffffffffffff;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0xffffffff00000000;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  return puVar2;
}



// FUNCTION 1417377a0 FUN_1417377a0 body=112 status=ok
// SIG undefined FUN_1417377a0(void)

undefined8 * FUN_1417377a0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14a1623a0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1623a8;
  puVar1 = TlsGetValue(DAT_14c75f614);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c75f614,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141737810 FUN_141737810 body=137 status=ok
// SIG undefined FUN_141737810(void)

void FUN_141737810(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 14173789a FUN_14173789a body=240 status=ok
// SIG undefined FUN_14173789a(void)

undefined4 FUN_14173789a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = param_3;
  uVar2 = FUN_140988638(&local_30,L"REPLAYSTREAMER",1);
  if ((char)uVar2 != '\0') {
    FUN_14619c2be(&local_40,&local_30,0);
    if (1 < local_38) {
      plVar3 = (longlong *)
               (**(code **)(*(longlong *)(param_1 + -8) + 0x40))
                         ((longlong *)(param_1 + -8),local_40);
      (**(code **)(*plVar3 + 0x40))(plVar3,&local_50);
      if (local_50 != (longlong *)0x0) {
        (**(code **)(*local_50 + 0x1b8))(local_50,local_30,param_4);
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_48 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)local_48 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173798b FUN_14173798b body=49 status=ok
// SIG undefined FUN_14173798b(void)

longlong FUN_14173798b(void)

{
  if (DAT_14c9a0368 == 0) {
    FUN_14086a14e(&DAT_14c9a0368,&PTR_FUN_14a163228);
  }
  return DAT_14c9a0368;
}



// FUNCTION 1417379bc FUN_1417379bc body=49 status=ok
// SIG undefined FUN_1417379bc(void)

longlong FUN_1417379bc(void)

{
  if (DAT_14c9a0380 == 0) {
    FUN_14086a14e(&DAT_14c9a0380,&PTR_FUN_14a1632d8);
  }
  return DAT_14c9a0380;
}



// FUNCTION 1417379ed FUN_1417379ed body=49 status=ok
// SIG undefined FUN_1417379ed(void)

longlong FUN_1417379ed(void)

{
  if (DAT_14c9a0488 == 0) {
    FUN_14086a14e(&DAT_14c9a0488,&PTR_FUN_14a164008);
  }
  return DAT_14c9a0488;
}



// FUNCTION 141737a1e FUN_141737a1e body=49 status=ok
// SIG undefined FUN_141737a1e(void)

longlong FUN_141737a1e(void)

{
  if (DAT_14c9a0500 == 0) {
    FUN_14086a14e(&DAT_14c9a0500,&PTR_FUN_14a164690);
  }
  return DAT_14c9a0500;
}



// FUNCTION 141737a56 FUN_141737a56 body=32 status=ok
// SIG undefined FUN_141737a56(void)

undefined8 FUN_141737a56(undefined8 param_1,undefined8 param_2)

{
  FUN_1447a97f4(param_2,&DAT_14c9485f0);
  return param_2;
}



// FUNCTION 141737a7e FUN_141737a7e body=40 status=ok
// SIG undefined FUN_141737a7e(void)

undefined8 FUN_141737a7e(undefined8 param_1,int param_2)

{
  FUN_1400deb62();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141737aa6 FUN_141737aa6 body=44 status=ok
// SIG undefined FUN_141737aa6(void)

void FUN_141737aa6(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140bb2a1a(param_2);
  return;
}



// FUNCTION 141737ae2 FUN_141737ae2 body=83 status=ok
// SIG undefined FUN_141737ae2(void)

void FUN_141737ae2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x50);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141737b36 FUN_141737b36 body=288 status=ok
// SIG undefined FUN_141737b36(void)

void FUN_141737b36(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  ushort uVar9;
  longlong lVar10;
  longlong lVar11;
  ushort uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (param_2 < *(int *)(param_1 + 0x68)) {
    lVar10 = (longlong)param_2;
    do {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar3 = *(longlong *)(param_1 + 0x60);
      plVar4 = *(longlong **)(lVar3 + lVar10 * 0x10);
      if (*(int *)(lVar2 + 0x7c) == -1) {
LAB_141737b6a:
        cVar7 = FUN_140e89b52(lVar2,plVar4 + 4);
        if (cVar7 != '\0') {
          puVar8 = (undefined8 *)(lVar3 + lVar10 * 0x10);
          lVar2 = *(longlong *)(param_1 + 8);
          uVar5 = *puVar8;
          lVar3 = puVar8[1];
          if (lVar3 != 0) {
            LOCK();
            *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
          *puVar8 = 0;
          puVar8[1] = uVar5;
          puVar8[2] = lVar3;
          if (puVar8 != (undefined8 *)0x0) {
            puVar6 = *(undefined8 **)(lVar2 + 0x10);
            *(undefined8 **)(lVar2 + 0x10) = puVar8;
            *puVar6 = puVar8;
          }
        }
      }
      else {
        iVar1 = *(int *)(lVar2 + 0x78);
        if (iVar1 == (int)plVar4[1]) {
          if (1 < iVar1) {
            lVar11 = 0;
            while( true ) {
              uVar12 = *(ushort *)(*(longlong *)(lVar2 + 0x70) + lVar11);
              uVar13 = (ulonglong)uVar12;
              uVar9 = *(ushort *)(*plVar4 + lVar11);
              if (uVar12 != uVar9) break;
              if (uVar12 == 0) goto LAB_141737b6a;
LAB_141737c13:
              lVar11 = lVar11 + 2;
            }
            if ((uVar9 | uVar12) < 0x80) {
              uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
              uVar14 = (ulonglong)uVar9;
              uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
              if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar14]) goto LAB_141737c13;
            }
            if (uVar12 != uVar9) goto LAB_141737bbf;
          }
          goto LAB_141737b6a;
        }
        if ((int)plVar4[1] + iVar1 == 1) goto LAB_141737b6a;
      }
LAB_141737bbf:
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(param_1 + 0x68));
  }
  return;
}



// FUNCTION 141737c56 FUN_141737c56 body=451 status=ok
// SIG undefined FUN_141737c56(void)

void FUN_141737c56(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_108 [40];
  undefined4 *local_e0 [2];
  undefined4 local_d0 [6];
  longlong local_b8;
  undefined1 local_a8 [24];
  longlong local_90;
  undefined4 local_80 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = FUN_140094282();
  FUN_1447a97f4(local_d0,param_3);
  FUN_1447a97f4(local_a8,param_4);
  local_e0[1] = local_80;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_e0[0] = local_d0;
  FUN_140093e46(&local_78,local_e0,0);
  lVar4 = 0x50;
  do {
    if (*(longlong *)((longlong)local_e0 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x28;
  } while (lVar4 != 0);
  FUN_1447a97f4(local_d0,&local_78);
  FUN_1447a97f4(local_a8,param_6);
  local_80[0] = param_5;
  iVar2 = *(int *)(lVar3 + 0x28);
  *(uint *)(lVar3 + 0x28) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x2c) < iVar2 + 1U) {
    FUN_1410bfbfa((longlong *)(lVar3 + 0x20),iVar2);
  }
  lVar3 = *(longlong *)(lVar3 + 0x20);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x58);
  *(undefined4 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  FUN_1404e49fa(lVar3 + (longlong)iVar2 * 0x58,local_d0);
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  FUN_1404e49fa(puVar1 + 5,local_a8);
  *(undefined4 *)(puVar1 + 10) = local_80[0];
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141737e1a FUN_141737e1a body=844 status=ok
// SIG undefined FUN_141737e1a(void)

char FUN_141737e1a(longlong param_1,int *param_2,byte param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ushort uVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ushort uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  bool bVar16;
  
  if (*param_2 == 0) {
    lVar2 = FUN_1456ac3b8();
    return (lVar2 == 0) * '\x02' + '\x02';
  }
  plVar11 = &DAT_14c9a0ff8;
  if ((*(longlong *)(param_1 + 8) != 0) && (plVar9 = (longlong *)(param_1 + 0x20), *plVar9 != 0)) {
    lVar2 = *(longlong *)(param_2 + 1);
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar15 = (uint)lVar2 & 0xffff;
    uVar4 = (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar15) +
            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4);
LAB_141737e80:
    if ((*(longlong *)(param_1 + 8) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0x30);
      bVar16 = true;
      if (*(int *)(lVar3 + 0x28) != *(int *)(lVar3 + 0x54)) {
        lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x20);
        uVar15 = (uint)((ulonglong)lVar5 >> 0x10);
        uVar13 = (uint)lVar5 & 0xffff;
        lVar8 = lVar3 + 0x58;
        if (*(longlong *)(lVar3 + 0x60) != 0) {
          lVar8 = *(longlong *)(lVar3 + 0x60);
        }
        iVar6 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(lVar3 + 0x68) - 1U &
                                 (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar13) +
                                 (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar13 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            lVar8 = *(longlong *)(lVar3 + 0x20) + (longlong)iVar6 * 0x60;
            if (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar6 * 0x60) == lVar5) {
              if (lVar8 != 0) {
                if (*(int *)(lVar8 + 0x10) == *(int *)(lVar8 + 0x3c)) goto LAB_141737fef;
                lVar5 = lVar8 + 0x40;
                if (*(longlong *)(lVar8 + 0x48) != 0) {
                  lVar5 = *(longlong *)(lVar8 + 0x48);
                }
                iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar8 + 0x50) - 1U & uVar4) * 4);
                if (iVar6 == -1) goto LAB_141737fef;
                goto LAB_141737f9c;
              }
              break;
            }
            iVar6 = *(int *)(lVar8 + 0x58);
          } while (iVar6 != -1);
        }
      }
      goto LAB_141737eaa;
    }
  }
  goto LAB_141737f42;
  while (iVar6 = *(int *)(lVar5 + 0x18), iVar6 != -1) {
LAB_141737f9c:
    lVar5 = *(longlong *)(lVar8 + 8) + (longlong)iVar6 * 0x20;
    if (*(longlong *)(*(longlong *)(lVar8 + 8) + (longlong)iVar6 * 0x20) == lVar2)
    goto LAB_141737fad;
  }
LAB_141737fef:
  lVar5 = 0;
LAB_141737fad:
  bVar16 = lVar5 == 0;
LAB_141737eaa:
  if ((param_3 & bVar16) != 1) {
    if (((bVar16 == false) && (param_1 != 0)) && (*(int *)(lVar3 + 0x28) != *(int *)(lVar3 + 0x54)))
    {
      lVar5 = *(longlong *)(*plVar9 + 0x20);
      uVar15 = (uint)((ulonglong)lVar5 >> 0x10);
      uVar13 = (uint)lVar5 & 0xffff;
      lVar8 = lVar3 + 0x58;
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        lVar8 = *(longlong *)(lVar3 + 0x60);
      }
      iVar6 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(lVar3 + 0x68) - 1U &
                               (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar13) +
                               (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar13 >> 4)) * 4);
      if (iVar6 != -1) {
        plVar9 = (longlong *)0x0;
        goto LAB_141738067;
      }
    }
    goto LAB_141737f42;
  }
  param_1 = *(longlong *)(param_1 + 0x28);
  param_3 = 1;
  if (param_1 == 0) goto LAB_141737f42;
  goto LAB_141737e80;
  while (iVar6 = *(int *)(lVar8 + 0x58), iVar6 != -1) {
LAB_141738067:
    lVar8 = *(longlong *)(lVar3 + 0x20) + (longlong)iVar6 * 0x60;
    if (*(longlong *)(*(longlong *)(lVar3 + 0x20) + (longlong)iVar6 * 0x60) == lVar5) {
      if (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x10) == *(int *)(lVar8 + 0x3c)) goto LAB_141738162;
        lVar3 = lVar8 + 0x40;
        if (*(longlong *)(lVar8 + 0x48) != 0) {
          lVar3 = *(longlong *)(lVar8 + 0x48);
        }
        iVar6 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar8 + 0x50) - 1U & uVar4) * 4);
        if (iVar6 == -1) goto LAB_141738162;
        goto LAB_141738126;
      }
      plVar9 = (longlong *)0x0;
      break;
    }
  }
  goto LAB_141738142;
  while (iVar6 = *(int *)(lVar3 + 0x18), iVar6 != -1) {
LAB_141738126:
    lVar3 = *(longlong *)(lVar8 + 8) + (longlong)iVar6 * 0x20;
    if (*(longlong *)(*(longlong *)(lVar8 + 8) + (longlong)iVar6 * 0x20) == lVar2)
    goto LAB_141738137;
  }
LAB_141738162:
  lVar3 = 0;
LAB_141738137:
  plVar9 = (longlong *)(lVar3 + 8);
  if (lVar3 == 0) {
    plVar9 = (longlong *)0x0;
  }
LAB_141738142:
  plVar11 = &DAT_14c9a0ff8;
  if (plVar9 != (longlong *)0x0) {
    plVar11 = plVar9;
  }
LAB_141737f42:
  cVar1 = '\x01';
  if (1 < *(uint *)(plVar11 + 1)) {
    lVar2 = 0;
    while( true ) {
      uVar7 = *(ushort *)(*plVar11 + lVar2);
      uVar10 = (ulonglong)uVar7;
      uVar12 = *(ushort *)((longlong)&DAT_149e06346 + lVar2);
      if (uVar7 != uVar12) break;
      if (uVar7 == 0) goto LAB_1417380e7;
LAB_1417380b2:
      lVar2 = lVar2 + 2;
    }
    if ((uVar12 | uVar7) < 0x80) {
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
      uVar14 = (ulonglong)uVar12;
      uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
      if ((&DAT_149e05da0)[uVar10] == (&DAT_149e05da0)[uVar14]) goto LAB_1417380b2;
    }
    if (uVar7 != uVar12) {
      return '\x04';
    }
LAB_1417380e7:
    cVar1 = '\x02';
  }
  return cVar1;
}



// FUNCTION 141738170 FUN_141738170 body=28 status=ok
// SIG undefined FUN_141738170(void)

undefined8 * FUN_141738170(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1449f3ff4();
  return param_2;
}



// FUNCTION 14173818c FUN_14173818c body=35 status=ok
// SIG undefined FUN_14173818c(void)

undefined8 FUN_14173818c(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_140141db6();
  }
  return uVar1;
}



// FUNCTION 1417381b0 FUN_1417381b0 body=21 status=ok
// SIG undefined FUN_1417381b0(void)

bool FUN_1417381b0(undefined8 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  longlong lStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  pbVar4 = (byte *)*param_1;
  if ((pbVar4 == (byte *)0x0) || ((pbVar4[1] & 2) != 0)) {
    return false;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*pbVar4 & 3) == 1) {
    plVar3 = *(longlong **)(pbVar4 + 0x18);
    pbVar4[0x10] = 0;
    pbVar4[0x11] = 0;
    pbVar4[0x12] = 0;
    pbVar4[0x13] = 0;
    pbVar4[0x14] = 0;
    pbVar4[0x15] = 0;
    pbVar4[0x16] = 0;
    pbVar4[0x17] = 0;
    pbVar4[0x18] = 0;
    pbVar4[0x19] = 0;
    pbVar4[0x1a] = 0;
    pbVar4[0x1b] = 0;
    pbVar4[0x1c] = 0;
    pbVar4[0x1d] = 0;
    pbVar4[0x1e] = 0;
    pbVar4[0x1f] = 0;
    if (plVar3 != (longlong *)0x0) {
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
          (**(code **)(*plVar3 + 8))(plVar3);
        }
      }
    }
    uVar6 = FUN_1401418d6(param_2);
    *(undefined8 *)(pbVar4 + 8) = uVar6;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    lStack_40 = 0;
    uStack_38 = 0;
    FUN_1446ddda2(&uStack_58,uVar6,0);
    uVar5 = FUN_14009aea0(&DAT_14c9a1320,&uStack_58);
    *(undefined4 *)(pbVar4 + 4) = uVar5;
    if (lStack_40 != 0) {
      FUN_1400020a8();
    }
    bVar7 = *(longlong *)(pbVar4 + 8) == 0;
  }
  else {
    bVar7 = false;
  }
  if ((uStack_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return bVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417381c6 FUN_1417381c6 body=495 status=ok
// SIG undefined FUN_1417381c6(void)

void FUN_1417381c6(uint *param_1,longlong param_2,ulonglong *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_f8 [32];
  uint local_d8 [32];
  char local_58 [40];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar7 = *(longlong *)(param_2 + 0x10);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    lVar7 = param_2;
  }
  pbVar1 = (byte *)(lVar7 + (*param_3 >> 3));
  bVar3 = *pbVar1;
  uVar14 = (ulonglong)bVar3;
  uVar4 = *(ushort *)(pbVar1 + 1);
  local_58[0x10] = '\0';
  local_58[0x11] = '\0';
  local_58[0x12] = '\0';
  local_58[0x13] = '\0';
  local_58[0x14] = '\0';
  local_58[0x15] = '\0';
  local_58[0x16] = '\0';
  local_58[0x17] = '\0';
  local_58[0x18] = '\0';
  local_58[0x19] = '\0';
  local_58[0x1a] = '\0';
  local_58[0x1b] = '\0';
  local_58[0x1c] = '\0';
  local_58[0x1d] = '\0';
  local_58[0x1e] = '\0';
  local_58[0x1f] = '\0';
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  local_58[8] = '\0';
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  local_58[0xc] = '\0';
  local_58[0xd] = '\0';
  local_58[0xe] = '\0';
  local_58[0xf] = '\0';
  local_d8[0x1c] = 0;
  local_d8[0x1d] = 0;
  local_d8[0x1e] = 0;
  local_d8[0x1f] = 0;
  local_d8[0x18] = 0;
  local_d8[0x19] = 0;
  local_d8[0x1a] = 0;
  local_d8[0x1b] = 0;
  local_d8[0x14] = 0;
  local_d8[0x15] = 0;
  local_d8[0x16] = 0;
  local_d8[0x17] = 0;
  local_d8[0x10] = 0;
  local_d8[0x11] = 0;
  local_d8[0x12] = 0;
  local_d8[0x13] = 0;
  local_d8[0xc] = 0;
  local_d8[0xd] = 0;
  local_d8[0xe] = 0;
  local_d8[0xf] = 0;
  local_d8[8] = 0;
  local_d8[9] = 0;
  local_d8[10] = 0;
  local_d8[0xb] = 0;
  local_d8[4] = 0;
  local_d8[5] = 0;
  local_d8[6] = 0;
  local_d8[7] = 0;
  local_d8[0] = 0;
  local_d8[1] = 0;
  local_d8[2] = 0;
  local_d8[3] = 0;
  memcpy(local_58,pbVar1 + 3,uVar14);
  if (uVar4 < 3) {
    uVar6 = 1;
  }
  else {
    uVar11 = (ulonglong)(uVar4 - 1) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar6 = (undefined1)lVar7;
  }
  *(undefined1 *)(param_1 + 0x24) = uVar6;
  *param_3 = *param_3 + uVar14 * 8 + 0x18;
  if (uVar14 != 0) {
    uVar11 = (ulonglong)*param_1 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    puVar9 = DAT_14c75f628;
    if (DAT_14c75f640 < 0x10) {
      puVar9 = &DAT_14c75f628;
    }
    uVar11 = 0;
    do {
      if (lVar7 != 0) {
        uVar8 = 0;
        do {
          if (local_58[uVar11] == *(char *)((longlong)puVar9 + uVar8)) {
            local_d8[uVar11] = 1 << ((byte)uVar8 & 0x1f);
            break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)lVar7 + (uint)((int)lVar7 == 0) != uVar8);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar14);
  }
  FUN_1402d2c96(param_1 + 0xc,uVar4);
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
      if (bVar3 != 0) {
        lVar7 = *(longlong *)(param_1 + 0xc);
        uVar8 = *param_3;
        uVar10 = 0;
        do {
          lVar12 = *(longlong *)(param_2 + 0x10);
          if (*(longlong *)(param_2 + 0x10) == 0) {
            lVar12 = param_2;
          }
          uVar5 = (uint)uVar8;
          uVar13 = uVar5 + 0x1f;
          if (-1 < (int)uVar5) {
            uVar13 = uVar5;
          }
          if ((*(uint *)(lVar12 + (longlong)((int)uVar13 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
            puVar2 = (uint *)(lVar7 + uVar11 * 4);
            *puVar2 = *puVar2 | local_d8[uVar10];
            uVar8 = *param_3;
          }
          uVar10 = uVar10 + 1;
          uVar8 = uVar8 + 1;
          *param_3 = uVar8;
        } while (uVar14 != uVar10);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != (uint)uVar4);
  }
  uVar14 = *param_3;
  if ((uVar14 & 7) != 0) {
    *param_3 = uVar14 + (8 - ((uint)uVar14 & 7));
  }
  if ((local_30 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417383b6 FUN_1417383b6 body=608 status=ok
// SIG undefined FUN_1417383b6(void)

void FUN_1417383b6(longlong param_1,uint *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  uint local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  uVar10 = (uint)uVar2;
  puVar9 = *(uint **)(param_2 + 4);
  if (*(uint **)(param_2 + 4) == (uint *)0x0) {
    puVar9 = param_2;
  }
  if (0x1f < uVar10) {
    uVar11 = uVar10 + 0x1f;
    if (-1 < (int)uVar10) {
      uVar11 = uVar10;
    }
    puVar9 = puVar9 + ((int)uVar11 >> 5);
    uVar10 = uVar10 - (uVar11 & 0xffffffe0);
    if ((int)uVar10 < 0) {
      puVar9 = puVar9 + -1;
      uVar10 = uVar10 + 0x20;
    }
  }
  if (uVar10 == 0) {
    uVar11 = *puVar9;
  }
  else {
    bVar4 = -(byte)uVar10;
    if ((int)uVar10 < 0) {
      uVar11 = *puVar9 << (bVar4 & 0x1f);
    }
    else {
      uVar11 = *puVar9 >> ((byte)uVar10 & 0x1f);
      if (0x1f < uVar10 + 0x17) {
        uVar11 = uVar11 | puVar9[uVar10 + 0x17 >> 5] << (bVar4 & 0x1f);
      }
    }
  }
  uVar8 = uVar2 + 0x18;
  *param_3 = uVar8;
  puVar9 = *(uint **)(param_2 + 4);
  if (*(uint **)(param_2 + 4) == (uint *)0x0) {
    puVar9 = param_2;
  }
  uVar10 = (uint)uVar8;
  if (0x1f < uVar10) {
    uVar6 = uVar10 + 0x1f;
    if (-1 < (int)uVar10) {
      uVar6 = uVar10;
    }
    puVar9 = puVar9 + ((int)uVar6 >> 5);
    uVar10 = uVar10 - (uVar6 & 0xffffffe0);
    uVar8 = (ulonglong)uVar10;
    if ((int)uVar10 < 0) {
      puVar9 = puVar9 + -1;
      uVar8 = (ulonglong)(uVar10 + 0x20);
    }
  }
  uVar11 = uVar11 & 0xffffff;
  iVar7 = (int)uVar8;
  if (iVar7 == 0) {
    uVar10 = (uint)(byte)*puVar9;
  }
  else {
    bVar4 = -(byte)uVar8;
    if (iVar7 < 0) {
      uVar10 = *puVar9 << (bVar4 & 0x1f);
    }
    else {
      uVar10 = *puVar9 >> ((byte)uVar8 & 0x1f);
      if (0x1f < iVar7 + 7U) {
        uVar10 = uVar10 | puVar9[iVar7 + 7U >> 5] << (bVar4 & 0x1f);
      }
    }
  }
  *param_3 = uVar2 + 0x20;
  if ((uVar11 == 0) || (uVar6 = uVar10 & 0xff, uVar6 == 0)) {
    *(undefined2 *)(param_1 + 0x68) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x14) < (int)uVar11) {
    FUN_14481578e(plVar1,uVar11);
  }
  *(char *)(param_1 + 0x69) = (char)uVar10;
  if (uVar11 < 3) {
    uVar5 = 1;
  }
  else {
    uVar2 = (ulonglong)(uVar11 - 1) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar5 = (undefined1)lVar3;
  }
  *(undefined1 *)(param_1 + 0x68) = uVar5;
  do {
    local_4c = 0;
    puVar9 = *(uint **)(param_2 + 4);
    if (*(uint **)(param_2 + 4) == (uint *)0x0) {
      puVar9 = param_2;
    }
    local_58 = uVar6;
    FUN_14493566c(&local_4c,0,puVar9,(int)*param_3);
    *param_3 = *param_3 + (ulonglong)uVar6;
    iVar7 = *(int *)(param_1 + 0x10);
    uVar10 = iVar7 + 1;
    *(uint *)(param_1 + 0x10) = uVar10;
    if (*(uint *)(param_1 + 0x14) < uVar10) {
      FUN_1446f48e2(plVar1);
    }
    *(undefined4 *)(*plVar1 + (longlong)iVar7 * 4) = local_4c;
    uVar11 = uVar11 - 1;
  } while (uVar11 != 0);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141738632 FUN_141738632 body=76 status=ok
// SIG undefined FUN_141738632(void)

void FUN_141738632(longlong param_1)

{
  FUN_1401d9a90(param_1 + 0x78);
  FUN_1401d9a90(param_1 + 0x58);
  FUN_1401d9a90(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14173867e FUN_14173867e body=213 status=ok
// SIG undefined FUN_14173867e(void)

void FUN_14173867e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 141738754 FUN_141738754 body=29 status=ok
// SIG undefined FUN_141738754(void)

undefined8 FUN_141738754(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141738772 FUN_141738772 body=29 status=ok
// SIG undefined FUN_141738772(void)

undefined8 FUN_141738772(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141738790 FUN_141738790 body=29 status=ok
// SIG undefined FUN_141738790(void)

undefined8 FUN_141738790(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417387ae FUN_1417387ae body=29 status=ok
// SIG undefined FUN_1417387ae(void)

undefined8 FUN_1417387ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417387cc FUN_1417387cc body=124 status=ok
// SIG undefined FUN_1417387cc(void)

undefined8 * FUN_1417387cc(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      bVar1 = *(byte *)(param_2 + lVar3);
      bVar2 = (&DAT_149e62dd2)[lVar3];
      if (bVar1 == bVar2) {
        if (bVar1 == 0) break;
      }
      else {
        if (0x7f < (bVar2 | bVar1)) goto LAB_141738816;
        bVar1 = (&DAT_149e05da0)[bVar1];
        bVar2 = (&DAT_149e05da0)[bVar2];
        if (bVar1 != bVar2) goto LAB_141738816;
      }
      lVar3 = lVar3 + 1;
    } while( true );
  }
LAB_14173883a:
  *param_1 = 0;
  return param_1;
LAB_141738816:
  if (bVar1 != bVar2) {
    FUN_1446ddc76(param_1,param_2,1);
    return param_1;
  }
  goto LAB_14173883a;
}



// FUNCTION 141738848 FUN_141738848 body=47 status=ok
// SIG undefined FUN_141738848(void)

void FUN_141738848(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140220676(param_1,param_3,1);
  FUN_14022002e(param_1,*(undefined8 *)(param_1 + 0x1c8),param_2);
  return;
}



// FUNCTION 141738878 thunk_FUN_1400e3c00 body=5 status=ok
// SIG undefined thunk_FUN_1400e3c00(void)

undefined8 thunk_FUN_1400e3c00(longlong param_1,undefined8 param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [44];
  uint uStack_5c;
  ulonglong uStack_58;
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  ulonglong uStack_44;
  uint *puStack_38;
  int iStack_2c;
  ulonglong uStack_28;
  
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1447a97f4(&uStack_50);
  iVar1 = *(int *)(param_1 + 0x338);
  if ((longlong)iVar1 == -1) {
    if (((uStack_50 != 0) && (iStack_4c != 0)) && (uStack_50 != DAT_14c948000)) {
      puVar3 = &DAT_14c948028;
      uStack_5c = uStack_50;
      goto LAB_1400e3c64;
    }
LAB_1400e3e01:
    puVar3 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    uStack_5c = (uint)DAT_14c948618;
  }
  else {
    if (((uStack_50 == 0) || (iStack_4c == 0)) || (uStack_50 == DAT_14c948000)) goto LAB_1400e3e01;
    puVar7 = &uStack_48;
    if (0 < iStack_2c) {
      puVar7 = puStack_38;
    }
    if (1 < iStack_4c) {
      puVar7 = puStack_38;
    }
    if (iStack_4c == 1 && 0 < iVar1) {
      puVar10 = &uStack_44;
      if (0 < iStack_2c) {
        puVar10 = (ulonglong *)(puStack_38 + 1);
      }
      bVar12 = *(int *)(param_1 + 0x33c) == 1;
      puVar5 = (uint *)&DAT_14c948618;
      if (bVar12) {
        puVar5 = puVar7;
      }
      uStack_5c = *puVar5;
      puVar3 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
      if (bVar12) {
        puVar3 = puVar10;
      }
    }
    else {
      if (iStack_4c <= iVar1) goto LAB_1400e3e01;
      uStack_5c = puVar7[(longlong)iVar1 * 3];
      puVar3 = (ulonglong *)(puVar7 + (longlong)iVar1 * 3 + 1);
    }
  }
LAB_1400e3c64:
  uStack_58 = *puVar3;
  uVar2 = uStack_5c;
  if (uStack_58 >> 0x20 != 0) {
    uVar6 = (uint)(uStack_58 >> 0x20);
    uVar2 = uVar6 >> 0xd ^ uStack_5c - uVar6;
    uVar8 = uVar2 << 8 ^ (-0x61c88647 - uVar2) - uVar6;
    uVar9 = uVar8 >> 0xd ^ (uVar6 - uVar2) - uVar8;
    uVar6 = uVar9 >> 0xc ^ (uVar2 - uVar8) - uVar9;
    uVar2 = uVar6 << 0x10 ^ (uVar8 - uVar9) - uVar6;
    uVar8 = uVar2 >> 5 ^ (uVar9 - uVar6) - uVar2;
    uVar6 = uVar8 >> 3 ^ (uVar6 - uVar2) - uVar8;
    uVar2 = uVar6 << 10 ^ (uVar2 - uVar8) - uVar6;
    uVar2 = uVar2 >> 0xf ^ uVar8 - (uVar6 + uVar2);
  }
  iVar1 = FUN_1447fa34e((longlong *)(param_1 + 0x2e8),uVar2,&uStack_5c);
  if (iVar1 == -1) {
    if (puStack_38 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar11 = (longlong)iVar1 * 0x20 + *(longlong *)(param_1 + 0x2e8);
    if (puStack_38 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (lVar11 != 0) {
      uVar4 = *(undefined8 *)(lVar11 + 0x10);
      if (param_3 != '\0') {
        uVar4 = FUN_1400e3e52(param_1,uVar4);
      }
      goto LAB_1400e3cce;
    }
  }
  uVar4 = 0;
LAB_1400e3cce:
  if ((uStack_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14173887e FUN_14173887e body=45 status=ok
// SIG undefined FUN_14173887e(void)

void FUN_14173887e(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1400e3c00();
  FUN_14013f0dc(param_1,uVar1,param_2,param_3);
  return;
}



// FUNCTION 1417388ac FUN_1417388ac body=469 status=ok
// SIG undefined FUN_1417388ac(void)

void FUN_1417388ac(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 *puVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar1 = (int)param_1[1];
  uVar9 = param_2 - iVar1;
  if (uVar9 != 0 && iVar1 <= (int)param_2) {
    uVar8 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar8);
    }
    iVar12 = *(int *)((longlong)param_1 + 0xc);
    iVar13 = iVar1;
    if (iVar12 < (int)param_2) {
      FUN_1401a6268(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_14709f13e(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(uVar8 * 0x1a8 + lVar2 + -0x1a4);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1a8) = iVar10 + -1;
        }
        puVar6[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar8 = uVar8 - 1;
        *puVar6 = uVar3;
        *(int *)(param_1 + 6) = iVar10 + -1;
        iVar12 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar12;
        puVar6 = puVar6 + -0x6a;
      } while ((longlong)iVar13 < (longlong)uVar8);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar9;
      if (param_2 != 0) {
        uVar7 = uVar9 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar7) {
          if ((0x80 < uVar9) || (param_1[4] != 0)) {
            uVar11 = 0;
            if (0x80 < uVar9) {
              uVar11 = uVar7;
            }
            FUN_1446efa72(param_1 + 4,0,uVar11,4);
          }
          *(uint *)((longlong)param_1 + 0x2c) = uVar9 + 0x1f & 0xffffffe0;
        }
        plVar5 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar5 = param_1 + 2;
        }
        if (uVar9 < 0x101) {
          uVar7 = uVar7 + (uVar7 == 0);
        }
        memset(plVar5,0,(ulonglong)(uVar7 << 2));
        iVar1 = (int)param_1[5];
        iVar12 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar12 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          plVar5 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar5 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar5 + (longlong)(iVar12 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar9) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar9);
      FUN_1447c6044(param_1 + 2,uVar3,uVar9,0);
      return;
    }
  }
  return;
}



// FUNCTION 141738a82 FUN_141738a82 body=353 status=ok
// SIG undefined FUN_141738a82(void)

void FUN_141738a82(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141738b07;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141738b07:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141738be4 FUN_141738be4 body=464 status=ok
// SIG undefined FUN_141738be4(void)

undefined4 *
FUN_141738be4(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1404034c6(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_48[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_48 = *puVar1;
  *(undefined8 *)(local_48 + 4) = *puVar2;
  local_48[6] = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = local_48[2];
  uVar5 = *local_48;
  if (uVar6 != 0) {
    uVar5 = uVar6 >> 0xd ^ uVar5 - uVar6;
    uVar7 = uVar5 << 8 ^ (-0x61c88647 - uVar6) - uVar5;
    uVar9 = uVar7 >> 0xd ^ (uVar6 - uVar5) - uVar7;
    uVar5 = uVar9 >> 0xc ^ (uVar5 - uVar7) - uVar9;
    uVar6 = uVar5 << 0x10 ^ (uVar7 - uVar9) - uVar5;
    uVar7 = uVar6 >> 5 ^ (uVar9 - uVar5) - uVar6;
    uVar5 = uVar7 >> 3 ^ (uVar5 - uVar6) - uVar7;
    uVar6 = uVar5 << 10 ^ (uVar6 - uVar7) - uVar5;
    uVar5 = uVar6 >> 0xf ^ uVar7 - (uVar5 + uVar6);
  }
  local_68 = param_4;
  cVar3 = FUN_144991676(param_1,uVar5,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar8 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_48[7] = uVar5;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar5) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140403894(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141738db6 FUN_141738db6 body=64 status=ok
// SIG undefined FUN_141738db6(void)

bool FUN_141738db6(undefined8 param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_144837cf2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_3;
  }
  return param_3 != 0;
}



// FUNCTION 141738df6 FUN_141738df6 body=633 status=ok
// SIG undefined FUN_141738df6(void)

undefined8 * FUN_141738df6(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = param_1 + 7;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0xf;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0xf;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xf;
  local_48 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1446ddda2(&local_58,param_2,0);
  FUN_1404e49fa(param_1,&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  puVar3 = param_1 + 0xb;
  FUN_1401d7cf8(puVar4,param_2);
  lVar2 = param_1[9];
  if ((ulonglong)(param_1[10] - lVar2) < 5) {
    local_68 = 5;
    FUN_140c91e84(puVar4,5);
  }
  else {
    param_1[9] = lVar2 + 5;
    if (0xf < (ulonglong)param_1[10]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined4 *)((longlong)puVar4 + lVar2) = 0x6665645f;
    *(undefined2 *)((longlong)puVar4 + lVar2 + 4) = 0x73;
  }
  puVar4 = param_1 + 0xf;
  FUN_1401d7cf8(puVar3,param_2);
  lVar2 = param_1[0xd];
  if ((ulonglong)(param_1[0xe] - lVar2) < 7) {
    local_68 = 7;
    FUN_140c91e84(puVar3,7);
  }
  else {
    param_1[0xd] = lVar2 + 7;
    if (0xf < (ulonglong)param_1[0xe]) {
      puVar3 = (undefined8 *)*puVar3;
    }
    *(undefined4 *)((longlong)puVar3 + lVar2 + 3) = 0x73726964;
    *(undefined4 *)((longlong)puVar3 + lVar2) = 0x6465725f;
    *(undefined1 *)((longlong)puVar3 + lVar2 + 7) = 0;
  }
  FUN_1401d7cf8(puVar4,param_2);
  lVar2 = param_1[0x11];
  if ((ulonglong)(param_1[0x12] - lVar2) < 6) {
    local_68 = 6;
    FUN_140c91e84(puVar4,6);
  }
  else {
    param_1[0x11] = lVar2 + 6;
    if (0xf < (ulonglong)param_1[0x12]) {
      puVar4 = (undefined8 *)*puVar4;
    }
    *(undefined2 *)((longlong)puVar4 + lVar2 + 4) = 0x7366;
    *(undefined4 *)((longlong)puVar4 + lVar2) = 0x6572705f;
    *(undefined1 *)((longlong)puVar4 + lVar2 + 6) = 0;
  }
  if ((param_3 != (undefined8 *)0x0) && (pcVar5 = (char *)*param_3, pcVar5 != (char *)0x0)) {
    do {
      param_3 = param_3 + 1;
      if (*pcVar5 == '*') {
        pcVar5 = pcVar5 + 1;
      }
      iVar1 = *(int *)(param_1 + 6);
      *(uint *)(param_1 + 6) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x34) < iVar1 + 1U) {
        FUN_140ca86cc(param_1 + 5,iVar1);
      }
      *(char **)(param_1[5] + (longlong)iVar1 * 8) = pcVar5;
      pcVar5 = (char *)*param_3;
    } while (pcVar5 != (char *)0x0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14173907e FUN_14173907e body=539 status=ok
// SIG undefined FUN_14173907e(void)

void FUN_14173907e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x10;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_141739254;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_141739254:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173929a FUN_14173929a body=49 status=ok
// SIG undefined FUN_14173929a(void)

longlong FUN_14173929a(void)

{
  if (DAT_14c9a2ce0 == 0) {
    FUN_14086a14e(&DAT_14c9a2ce0,&PTR_FUN_14a17cef8);
  }
  return DAT_14c9a2ce0;
}



// FUNCTION 1417392cb FUN_1417392cb body=49 status=ok
// SIG undefined FUN_1417392cb(void)

longlong FUN_1417392cb(void)

{
  if (DAT_14c9a2cf8 == 0) {
    FUN_14086a14e(&DAT_14c9a2cf8,&PTR_FUN_14a17d018);
  }
  return DAT_14c9a2cf8;
}



// FUNCTION 1417392fc FUN_1417392fc body=57 status=ok
// SIG undefined FUN_1417392fc(void)

void FUN_1417392fc(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a2d90 == 0) {
    uVar1 = FUN_140e8229d();
    DAT_14c9a2d90 = FUN_140002ddd(FUN_1462a456c,uVar1,L"GbxContextParam_Bool");
  }
  return;
}



// FUNCTION 141739335 FUN_141739335 body=49 status=ok
// SIG undefined FUN_141739335(void)

longlong FUN_141739335(void)

{
  if (DAT_14c9a2e78 == 0) {
    FUN_14086a14e(&DAT_14c9a2e78,&PTR_FUN_14a17dd60);
  }
  return DAT_14c9a2e78;
}



// FUNCTION 141739366 FUN_141739366 body=274 status=ok
// SIG undefined FUN_141739366(void)

longlong * FUN_141739366(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar2 < 1) {
    FUN_140d7698c(param_1);
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
  }
  lVar5 = param_1[1];
  uVar3 = (int)lVar5 + 1;
  *(uint *)(param_1 + 1) = uVar3;
  if (uVar2 < uVar3) {
    FUN_140eed74c();
  }
  lVar1 = *param_1;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar6 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar6 == 0) {
    local_44 = 0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar6 * 2);
    iVar4 = local_48;
  }
  lVar5 = (longlong)(int)lVar5 * 0x30;
  *(void **)(lVar1 + lVar5) = local_50;
  *(int *)(lVar1 + 8 + lVar5) = iVar4;
  *(undefined4 *)(lVar1 + 0xc + lVar5) = local_44;
  *(undefined1 *)(lVar1 + 0x20 + lVar5) = 4;
  *(undefined8 *)(lVar1 + 0x28 + lVar5) = *param_2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14173947a FUN_14173947a body=149 status=ok
// SIG undefined FUN_14173947a(void)

void FUN_14173947a(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = DAT_14c9a3d60;
  if (*param_2 != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *param_2 + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 141739510 FUN_141739510 body=66 status=ok
// SIG undefined FUN_141739510(void)

undefined1 FUN_141739510(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_4 != 0) {
    puVar2 = (undefined4 *)(param_3 + 4);
    do {
      uVar1 = *puVar2;
      *(undefined4 *)(param_2 + 8) = uVar1;
      FUN_14020a6cc(uVar1,1);
      puVar2 = puVar2 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141739552 FUN_141739552 body=149 status=ok
// SIG undefined FUN_141739552(void)

void FUN_141739552(undefined8 param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = DAT_14c9a3d60;
  if (*param_2 != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *param_2 + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 1417395e8 FUN_1417395e8 body=62 status=ok
// SIG undefined FUN_1417395e8(void)

undefined8 FUN_1417395e8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    puVar1 = (undefined4 *)(param_3 + 4);
    do {
      *(undefined4 *)(param_2 + 8) = *puVar1;
      FUN_140841e14(param_2,1);
      puVar1 = puVar1 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xc;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141739626 FUN_141739626 body=73 status=ok
// SIG undefined FUN_141739626(void)

undefined1 FUN_141739626(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined1 *)(param_2 + lVar1) = *(undefined1 *)(param_3 + lVar1);
      FUN_140b177d4();
      lVar1 = lVar1 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141739670 FUN_141739670 body=346 status=ok
// SIG undefined FUN_141739670(void)

void FUN_141739670(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141739702;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141739702:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417397cb FUN_1417397cb body=274 status=ok
// SIG undefined FUN_1417397cb(void)

longlong * FUN_1417397cb(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  if ((int)uVar2 < 1) {
    FUN_140d7698c(param_1);
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
  }
  lVar5 = param_1[1];
  uVar3 = (int)lVar5 + 1;
  *(uint *)(param_1 + 1) = uVar3;
  if (uVar2 < uVar3) {
    FUN_140eed74c();
  }
  lVar1 = *param_1;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_3 + 1);
  lVar6 = (longlong)local_48;
  _Src = (void *)*param_3;
  if (lVar6 == 0) {
    local_44 = 0;
    iVar4 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar6 * 2);
    iVar4 = local_48;
  }
  lVar5 = (longlong)(int)lVar5 * 0x30;
  *(void **)(lVar1 + lVar5) = local_50;
  *(int *)(lVar1 + 8 + lVar5) = iVar4;
  *(undefined4 *)(lVar1 + 0xc + lVar5) = local_44;
  *(undefined1 *)(lVar1 + 0x20 + lVar5) = 4;
  *(undefined8 *)(lVar1 + 0x28 + lVar5) = *param_2;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417398ea FUN_1417398ea body=12 status=ok
// SIG undefined FUN_1417398ea(void)

void FUN_1417398ea(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  FUN_14020a6cc(param_1,1);
  return;
}



// FUNCTION 1417398f6 thunk_FUN_140217bc2 body=5 status=ok
// SIG undefined thunk_FUN_140217bc2(void)

void thunk_FUN_140217bc2(int *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*param_1 == 0) {
    return;
  }
  param_1[1] = param_1[2];
  lVar2 = (longlong)*param_1 * 0x88;
  lVar1 = DAT_14c9a3d60 + lVar2;
  if (*(int *)(DAT_14c9a3d60 + -0x1c + lVar2) < 0) {
    *(undefined4 *)(lVar1 + -0x20) = 0;
    FUN_1470b654e(lVar1 + -0x88,0);
  }
  else {
    *(undefined4 *)(lVar1 + -0x20) = 0;
  }
  FUN_1409d1656(param_1);
  return;
}



// FUNCTION 1417398fc FUN_1417398fc body=209 status=ok
// SIG undefined FUN_1417398fc(void)

void FUN_1417398fc(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  
  if (param_3 != 0) {
    plVar7 = (longlong *)(*param_1 + (longlong)param_2 * 0x10);
    iVar5 = param_3;
    do {
      FUN_1448176ff(*plVar7,(int)plVar7[1]);
      if (*plVar7 != 0) {
        FUN_1400020a8();
      }
      plVar7 = plVar7 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar2 = *param_1;
    puVar6 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
      }
      puVar6[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar6 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar5 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar6 = puVar6 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1417399ce FUN_1417399ce body=253 status=ok
// SIG undefined FUN_1417399ce(void)

void FUN_1417399ce(undefined8 **param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *(undefined4 *)(param_1 + 1);
  local_68[0] = *param_2;
  local_58 = param_2[2];
  param_2[2] = 0;
  local_48 = (undefined4)param_2[4];
  uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_40 = (undefined4)param_2[5];
  uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_38 = (undefined4)param_2[6];
  uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_30 = (undefined4)param_2[7];
  uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
  if (local_68[0] != 0) {
    *param_2 = 0;
  }
  FUN_14014aede(&local_70,local_68,param_3,param_3);
  if (&local_70 != param_1) {
    puVar2 = *param_1;
    *param_1 = local_70;
    local_70 = (undefined8 *)0x0;
    if (puVar2 == (undefined8 *)0x0) goto LAB_141739a78;
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (local_70 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_70 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_70)(local_70,1);
    }
  }
LAB_141739a78:
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141739acc FUN_141739acc body=149 status=ok
// SIG undefined FUN_141739acc(void)

void FUN_141739acc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar4 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (uVar4 < 3) {
    uVar4 = 2;
  }
  else {
    iVar3 = iVar2 - uVar1;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || iVar2 * 2 <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar4 = FUN_144a3809e(uVar4 << 3,0);
      uVar4 = uVar4 >> 3;
      iVar2 = *(int *)(param_1 + 0x1c);
    }
  }
  if ((int)uVar4 == iVar2) {
    return;
  }
  *(int *)(param_1 + 0x1c) = (int)uVar4;
  FUN_140254e44(param_1,*(undefined4 *)(param_1 + 0x18),uVar4,8);
  return;
}



// FUNCTION 141739b61 FUN_141739b61 body=49 status=ok
// SIG undefined FUN_141739b61(void)

longlong FUN_141739b61(void)

{
  if (DAT_14c9a4190 == 0) {
    FUN_14086a14e(&DAT_14c9a4190,&PTR_FUN_14a185d58);
  }
  return DAT_14c9a4190;
}


