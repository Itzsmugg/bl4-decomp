// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14460463e FUN_14460463e body=519 status=ok
// SIG undefined FUN_14460463e(void)

byte FUN_14460463e(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  if ((int)param_2 < 0) {
    bVar13 = 0;
  }
  else {
    iVar6 = (**(code **)(*(longlong *)*param_1 + 0x60))();
    uVar18 = 0;
    bVar13 = 0;
    if ((int)param_2 < iVar6) {
      plVar1 = (longlong *)(*(longlong *)(*param_1 + 0x10) + (ulonglong)param_2 * 0x50);
      lVar9 = (ulonglong)param_2 * 0x50 + *(longlong *)(*param_1 + 0x10);
      puVar10 = (uint *)(lVar9 + 0x10);
      iVar6 = *(int *)(lVar9 + 0x28);
      if (iVar6 == 0) {
        uVar19 = 1;
        iVar12 = 0;
        iVar8 = 0;
      }
      else {
        puVar7 = (uint *)plVar1[4];
        if ((uint *)plVar1[4] == (uint *)0x0) {
          puVar7 = puVar10;
        }
        uVar11 = *puVar7;
        if (uVar11 == 0) {
          iVar8 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar8 = iVar6 + -1;
          }
          uVar18 = 0;
          uVar19 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar19 = uVar18;
          }
          iVar12 = 0;
          do {
            if (uVar19 == uVar18) {
              return 1;
            }
            iVar12 = iVar12 + 0x20;
            uVar11 = puVar7[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar11 == 0);
        }
        else {
          uVar18 = 0;
          iVar12 = 0;
        }
        uVar19 = (ulonglong)(-uVar11 & uVar11);
        uVar2 = uVar19 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar8 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar8) {
          iVar8 = iVar6;
        }
      }
      bVar13 = 1;
      if (iVar8 != iVar6) {
        uVar11 = 0xffffffff;
        bVar13 = 1;
        do {
          uVar4 = *(undefined8 *)
                   (*(longlong *)(param_1[1] + 0x10) +
                   (longlong)*(int *)(*plVar1 + (longlong)iVar8 * 0xc) * 8);
          bVar5 = FUN_14970681b(uVar4,uVar4,param_1[2]);
          uVar11 = ~(uint)uVar19 & uVar11;
          puVar7 = (uint *)plVar1[4];
          if ((uint *)plVar1[4] == (uint *)0x0) {
            puVar7 = puVar10;
          }
          iVar3 = (int)plVar1[5];
          iVar8 = (int)uVar18;
          lVar9 = (longlong)iVar8;
          uVar16 = puVar7[lVar9] & uVar11;
          if (uVar16 == 0) {
            iVar14 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar14 = iVar3 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar8) {
              iVar15 = iVar8;
            }
            if (iVar8 < iVar14) {
              lVar17 = 0;
              do {
                uVar16 = puVar7[lVar9 + lVar17 + 1];
                if (uVar16 != 0) {
                  uVar18 = (ulonglong)(iVar8 + (int)lVar17 + 1);
                  uVar11 = 0xffffffff;
                  goto LAB_1446047e4;
                }
                iVar12 = iVar12 + 0x20;
                lVar17 = lVar17 + 1;
              } while (iVar15 - lVar9 != lVar17);
              uVar11 = 0xffffffff;
              iVar8 = iVar15;
            }
            uVar18 = (ulonglong)(iVar8 + 1);
            iVar8 = iVar3;
          }
          else {
LAB_1446047e4:
            uVar19 = (ulonglong)(-uVar16 & uVar16);
            uVar2 = uVar19 * 2 + 1;
            lVar9 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
              }
            }
            iVar8 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar8) {
              iVar8 = iVar3;
            }
          }
          bVar13 = bVar13 & bVar5;
        } while (iVar8 != iVar6);
      }
    }
  }
  return bVar13;
}



// FUNCTION 144604846 FUN_144604846 body=474 status=ok
// SIG undefined FUN_144604846(void)

float FUN_144604846(undefined8 *param_1,int param_2,char param_3)

{
  double *pdVar1;
  double dVar2;
  char cVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  
  lVar7 = *(longlong *)(*(longlong *)*param_1 + 0x58);
  uVar11 = 0xffffffff;
  if (lVar7 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    cVar3 = *(char *)(*(longlong *)*param_1 + 0x60);
    if (cVar3 == '\x01') {
      lVar9 = *(longlong *)(lVar7 + 0x10);
      lVar7 = (ulonglong)*(byte *)(*(longlong *)(lVar7 + 0x30) + (longlong)param_2) * 3;
      uVar11 = (uint)*(byte *)(lVar9 + lVar7);
      uVar6 = (uint)*(byte *)(lVar9 + (ulonglong)*(byte *)(lVar9 + 2 + lVar7) * 3);
    }
    else if (cVar3 == '\x02') {
      lVar9 = *(longlong *)(lVar7 + 0x10);
      lVar7 = (longlong)*(short *)(*(longlong *)(lVar7 + 0x30) + (longlong)param_2 * 2);
      uVar11 = (uint)*(short *)(lVar9 + lVar7 * 6);
      uVar6 = (uint)*(short *)(lVar9 + (longlong)*(short *)(lVar9 + 4 + lVar7 * 6) * 6);
    }
    else {
      uVar6 = 0xffffffff;
      if (cVar3 == '\x03') {
        lVar9 = *(longlong *)(lVar7 + 0x10);
        lVar7 = (longlong)*(int *)(*(longlong *)(lVar7 + 0x30) + (longlong)param_2 * 4);
        uVar11 = *(uint *)(lVar9 + lVar7 * 0xc);
        uVar6 = *(uint *)(lVar9 + (longlong)*(int *)(lVar9 + 8 + lVar7 * 0xc) * 0xc);
      }
    }
  }
  if (param_3 != '\0') {
    plVar8 = (longlong *)param_1[1];
    lVar7 = *plVar8;
    uVar12 = *(uint *)(lVar7 + (longlong)(int)uVar11 * 4);
    uVar5 = uVar12;
    uVar10 = uVar11;
    if (uVar12 != uVar11) {
      do {
        uVar10 = uVar5;
        uVar5 = *(uint *)(lVar7 + (longlong)(int)uVar10 * 4);
      } while (uVar5 != uVar10);
    }
    if (uVar12 != uVar10) {
      do {
        uVar5 = uVar12;
        *(uint *)(lVar7 + (longlong)(int)uVar11 * 4) = uVar10;
        lVar7 = *plVar8;
        uVar12 = *(uint *)(lVar7 + (longlong)(int)uVar5 * 4);
        uVar11 = uVar5;
      } while (uVar12 != uVar10);
      plVar8 = (longlong *)param_1[1];
      lVar7 = *plVar8;
    }
    uVar11 = *(uint *)(lVar7 + (longlong)(int)uVar6 * 4);
    uVar12 = uVar11;
    uVar5 = uVar6;
    if (uVar11 != uVar6) {
      do {
        uVar6 = uVar12;
        uVar12 = *(uint *)(lVar7 + (longlong)(int)uVar6 * 4);
      } while (uVar12 != uVar6);
    }
    while (uVar12 = uVar11, uVar12 != uVar6) {
      *(uint *)(lVar7 + (longlong)(int)uVar5 * 4) = uVar6;
      lVar7 = *plVar8;
      uVar5 = uVar12;
      uVar11 = *(uint *)(lVar7 + (longlong)(int)uVar12 * 4);
    }
    uVar11 = uVar10;
    if (uVar10 == uVar6) {
      return 4.0;
    }
  }
  lVar7 = (longlong)(int)uVar11;
  dVar2 = (double)param_1[4];
  fVar13 = 0.0;
  pdVar1 = (double *)(*(longlong *)param_1[2] + lVar7 * 8);
  if ((dVar2 < *pdVar1 || dVar2 == *pdVar1) &&
     (lVar9 = (longlong)(int)uVar6, pdVar1 = (double *)(*(longlong *)param_1[2] + lVar9 * 8),
     dVar2 < *pdVar1 || dVar2 == *pdVar1)) {
    lVar4 = *(longlong *)param_1[3];
    fVar13 = 1.0 - (float)(*(double *)(lVar4 + 0x10 + lVar7 * 0x18) *
                           *(double *)(lVar4 + 0x10 + lVar9 * 0x18) +
                          *(double *)(lVar4 + lVar7 * 0x18) * *(double *)(lVar4 + lVar9 * 0x18) +
                          *(double *)(lVar4 + 8 + lVar7 * 0x18) *
                          *(double *)(lVar4 + 8 + lVar9 * 0x18));
  }
  return fVar13;
}



// FUNCTION 144604a20 FUN_144604a20 body=1173 status=ok
// SIG undefined FUN_144604a20(void)

undefined8
FUN_144604a20(longlong param_1,ulonglong *param_2,longlong param_3,longlong param_4,longlong param_5
             ,longlong param_6,int param_7,undefined1 (*param_8) [16])

{
  longlong *plVar1;
  ulonglong uVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  uint *puVar25;
  int iVar26;
  uint uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM8_Da;
  uint unaff_XMM8_Db;
  ulonglong local_b8;
  
  dVar5 = (double)((ulonglong)unaff_XMM8_Db << 0x20);
  dVar10 = (double)CONCAT44(unaff_XMM7_Db,unaff_XMM7_Da);
  dVar11 = (double)CONCAT44(unaff_XMM6_Db,unaff_XMM6_Da);
  lVar20 = (longlong)param_7;
  iVar6 = *(int *)(*(longlong *)(param_6 + 0x10) + lVar20 * 4);
  if (iVar6 == 0) {
    lVar20 = (longlong)*(int *)(*(longlong *)(param_3 + 0x10) + lVar20 * 4);
    if ((lVar20 == -1) ||
       (lVar21 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + lVar20 * 4), lVar21 == -1)) {
      return 0;
    }
    local_b8 = *param_2;
  }
  else {
    if (iVar6 != 1) {
      plVar1 = (longlong *)(*(longlong *)(param_4 + 0x10) + lVar20 * 0x50);
      lVar20 = *(longlong *)(param_4 + 0x10) + lVar20 * 0x50;
      puVar25 = (uint *)(lVar20 + 0x10);
      iVar6 = *(int *)(lVar20 + 0x28);
      if (iVar6 == 0) {
        uVar22 = 1;
        uVar24 = 0;
        iVar23 = 0;
        iVar26 = 0;
      }
      else {
        puVar16 = (uint *)plVar1[4];
        if ((uint *)plVar1[4] == (uint *)0x0) {
          puVar16 = puVar25;
        }
        uVar27 = *puVar16;
        if (uVar27 == 0) {
          iVar26 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar26 = iVar6 + -1;
          }
          uVar24 = 0;
          uVar22 = (ulonglong)(uint)(iVar26 >> 5);
          if (iVar26 >> 5 < 1) {
            uVar22 = uVar24;
          }
          iVar23 = 0;
          do {
            if (uVar22 == uVar24) {
              return 0;
            }
            iVar23 = iVar23 + 0x20;
            uVar27 = puVar16[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar27 == 0);
        }
        else {
          uVar24 = 0;
          iVar23 = 0;
        }
        uVar22 = (ulonglong)(-uVar27 & uVar27);
        uVar2 = uVar22 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar26 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar26) {
          iVar26 = iVar6;
        }
      }
      if (iVar26 == iVar6) {
        return 0;
      }
      local_b8 = 0;
      uVar27 = 0xffffffff;
      do {
        uVar19 = (uint)((ulonglong)dVar5 >> 0x20);
        cVar15 = FUN_144604a20(param_1,param_2,param_3,param_4,param_5,param_6,
                               *(undefined4 *)(*plVar1 + (longlong)iVar26 * 0xc),param_8);
        dVar5 = (double)((ulonglong)uVar19 << 0x20);
        if (cVar15 != '\0') {
          dVar5 = *(double *)*param_8;
          if ((int)local_b8 == 0) {
            dVar10 = *(double *)(*param_8 + 8);
            dVar11 = *(double *)param_8[1];
          }
          else {
            dVar5 = dVar5 + (double)CONCAT44(uVar19,unaff_XMM8_Da);
            dVar10 = dVar10 + *(double *)(*param_8 + 8);
            dVar11 = dVar11 + *(double *)param_8[1];
          }
          unaff_XMM8_Da = SUB84(dVar5,0);
          local_b8 = (ulonglong)((int)local_b8 + 1);
        }
        uVar27 = uVar27 & ~(uint)uVar22;
        puVar16 = (uint *)plVar1[4];
        if ((uint *)plVar1[4] == (uint *)0x0) {
          puVar16 = puVar25;
        }
        iVar7 = (int)plVar1[5];
        iVar26 = (int)uVar24;
        lVar20 = (longlong)iVar26;
        uVar19 = puVar16[lVar20] & uVar27;
        if (uVar19 == 0) {
          iVar17 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar17 = iVar7 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar18 = iVar17;
          if (iVar17 < iVar26) {
            iVar18 = iVar26;
          }
          if (iVar26 < iVar17) {
            lVar21 = 0;
            do {
              uVar19 = puVar16[lVar20 + lVar21 + 1];
              if (uVar19 != 0) {
                uVar24 = (ulonglong)(iVar26 + (int)lVar21 + 1);
                uVar27 = 0xffffffff;
                goto LAB_144604dfb;
              }
              iVar23 = iVar23 + 0x20;
              lVar21 = lVar21 + 1;
            } while (iVar18 - lVar20 != lVar21);
            uVar27 = 0xffffffff;
            iVar26 = iVar18;
          }
          uVar24 = (ulonglong)(iVar26 + 1);
          iVar26 = iVar7;
        }
        else {
LAB_144604dfb:
          uVar22 = (ulonglong)(-uVar19 & uVar19);
          uVar2 = uVar22 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar26 = (iVar23 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar7 <= iVar26) {
            iVar26 = iVar7;
          }
        }
      } while (iVar26 != iVar6);
      if ((int)local_b8 < 1) {
        return 0;
      }
      dVar29 = 1.0 / (double)(int)local_b8;
      dVar11 = dVar11 * dVar29;
      *(double *)*param_8 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),unaff_XMM8_Da) * dVar29
      ;
      *(double *)(*param_8 + 8) = dVar10 * dVar29;
      goto LAB_144604c16;
    }
    local_b8 = *param_2;
    lVar21 = (longlong)*(int *)(*(longlong *)(param_1 + 0x10) + lVar20 * 4);
  }
  lVar8 = *(longlong *)(param_5 + 0x10);
  lVar21 = lVar21 * 0x38;
  lVar20 = lVar20 * 0x60;
  pdVar3 = (double *)(local_b8 + 0x40 + lVar20);
  dVar10 = (*(double *)(lVar8 + lVar21) + *(double *)(lVar8 + 0x18 + lVar21)) * 0.5 * *pdVar3;
  dVar11 = (*(double *)(lVar8 + 8 + lVar21) + *(double *)(lVar8 + 0x20 + lVar21)) * 0.5 * pdVar3[1];
  dVar28 = (*(double *)(lVar8 + 0x10 + lVar21) + *(double *)(lVar8 + 0x28 + lVar21)) * 0.5 *
           *(double *)(local_b8 + 0x50 + lVar20);
  dVar12 = *(double *)(local_b8 + lVar20);
  dVar13 = ((double *)(local_b8 + lVar20))[1];
  dVar14 = *(double *)(local_b8 + 0x10 + lVar20);
  pdVar3 = (double *)(local_b8 + 0x18 + lVar20);
  dVar5 = *pdVar3;
  dVar30 = dVar11 * dVar12 - dVar13 * dVar10;
  dVar31 = dVar28 * dVar13 - dVar14 * dVar11;
  dVar32 = dVar10 * dVar14 - dVar12 * dVar28;
  dVar31 = dVar31 + dVar31;
  dVar32 = dVar32 + dVar32;
  dVar30 = dVar30 + dVar30;
  pdVar4 = (double *)(local_b8 + 0x20 + lVar20);
  dVar29 = (dVar14 * dVar31 - dVar12 * dVar30) + *pdVar3 * dVar32 + dVar11 + pdVar4[1];
  dVar11 = dVar30 * dVar5 + dVar28 + (dVar32 * dVar12 - dVar31 * dVar13) +
           *(double *)(local_b8 + 0x30 + lVar20);
  auVar9._8_4_ = SUB84(dVar29,0);
  auVar9._0_8_ = (dVar30 * dVar13 - dVar32 * dVar14) + dVar5 * dVar31 + dVar10 + *pdVar4;
  auVar9._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
  *param_8 = auVar9;
LAB_144604c16:
  *(double *)param_8[1] = dVar11;
  return CONCAT71((int7)(local_b8 >> 8),1);
}



// FUNCTION 144604eb5 FUN_144604eb5 body=285 status=ok
// SIG undefined FUN_144604eb5(void)

void FUN_144604eb5(undefined8 param_1,uint param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146fd58e4(param_1,&local_60);
  if (0 < local_58) {
    uVar2 = 0;
    iVar1 = local_58;
    do {
      param_2 = param_2 * 0xbb38435 + 0x3619636b;
      if (param_3 <= (float)(param_2 >> 9 | 0x3f800000) + -1.0) {
        iVar3 = ~uVar2 + iVar1;
        if (iVar3 != 0) {
          if (0 < iVar3) {
            iVar3 = 1;
          }
          memmove((void *)(local_60 + (longlong)(int)uVar2 * 4),
                  (void *)(local_60 + (longlong)(iVar1 - iVar3) * 4),(longlong)iVar3 << 2);
          iVar1 = local_58;
        }
        local_58 = iVar1 + -1;
        FUN_14479f406(&local_60);
        uVar2 = uVar2 - 1;
        iVar1 = local_58;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  FUN_146fd57c8(param_1);
  FUN_146fd594e(param_1,&local_60);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144604fd3 FUN_144604fd3 body=492 status=ok
// SIG undefined FUN_144604fd3(void)

undefined4 *
FUN_144604fd3(undefined4 *param_1,float param_2,float param_3,float param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  double *pdVar9;
  int iVar10;
  undefined1 auStack_e8 [40];
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (double)param_3;
  uStack_80 = (double)param_4;
  local_88 = (double)param_2;
  uVar7 = FUN_1446051c0(&local_88,param_5);
  if ((longlong)uVar7 < 0) {
    *(undefined8 *)(param_1 + 4) = DAT_14c8464f0;
    uVar6 = DAT_14c8464e8._4_4_;
    uVar5 = (undefined4)DAT_14c8464e8;
    uVar4 = DAT_14c8464e0._4_4_;
    *param_1 = (undefined4)DAT_14c8464e0;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
    param_1[3] = uVar6;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_e8);
  }
  if (0x2000 < uVar7) {
    dVar1 = local_88;
    dVar2 = uStack_80;
    dVar3 = local_78;
    do {
      dVar1 = dVar1 + dVar1;
      dVar2 = dVar2 + dVar2;
      dVar3 = dVar3 + dVar3;
      local_a8 = dVar1;
      dStack_a0 = dVar2;
      local_98 = dVar3;
      lVar8 = FUN_1446051c0(&local_a8,param_5);
    } while (0x2000 < lVar8);
    iVar10 = 10;
    do {
      local_b0 = (local_78 + local_98) * 0.5;
      dStack_b8 = (uStack_80 + dStack_a0) * 0.5;
      local_c0 = (local_88 + local_a8) * 0.5;
      lVar8 = FUN_1446051c0(&local_c0,param_5);
      pdVar9 = &local_a8;
      if (0x2000 < lVar8) {
        pdVar9 = (double *)&local_88;
      }
      *pdVar9 = local_c0;
      pdVar9[1] = dStack_b8;
      pdVar9[2] = local_b0;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    local_78 = local_98;
    local_88 = local_a8;
    uStack_80 = dStack_a0;
  }
  *(double *)(param_1 + 4) = local_78;
  *param_1 = (undefined4)local_88;
  param_1[1] = local_88._4_4_;
  param_1[2] = (undefined4)uStack_80;
  param_1[3] = uStack_80._4_4_;
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1446051c0 FUN_1446051c0 body=280 status=ok
// SIG undefined FUN_1446051c0(void)

ulonglong FUN_1446051c0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  
  dVar11 = param_1[2];
  dVar1 = *param_1;
  dVar2 = param_1[1];
  dVar7 = dVar1;
  if (dVar2 <= dVar1) {
    dVar7 = dVar2;
  }
  if (dVar11 <= dVar7) {
    dVar7 = dVar11;
  }
  uVar6 = 0xffffffffffffffff;
  if (0.0 < dVar7) {
    dVar7 = param_2[2];
    dVar3 = *param_2;
    dVar4 = param_2[1];
    dVar8 = dVar3;
    if (dVar4 <= dVar3) {
      dVar8 = dVar4;
    }
    if (dVar7 <= dVar8) {
      dVar8 = dVar7;
    }
    if (0.0 < dVar8) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = dVar3 / dVar1;
      auVar9 = roundsd(ZEXT816(0),auVar9,10);
      iVar5 = _finite(auVar9._0_8_);
      if (iVar5 != 0) {
        auVar10._8_8_ = 0;
        auVar10._0_8_ = dVar4 / dVar2;
        auVar10 = roundsd(ZEXT816(0),auVar10,10);
        iVar5 = _finite(auVar10._0_8_);
        if (iVar5 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = dVar7 / dVar11;
          auVar12 = roundsd(ZEXT816(0),auVar12,10);
          iVar5 = _finite(auVar12._0_8_);
          if (iVar5 != 0) {
            dVar11 = auVar12._0_8_ * auVar10._0_8_ * auVar9._0_8_;
            iVar5 = _isnan(dVar11);
            uVar6 = -(ulonglong)(iVar5 != 0) | (longlong)dVar11;
          }
        }
      }
    }
  }
  return uVar6;
}



// FUNCTION 1446052d8 FUN_1446052d8 body=458 status=ok
// SIG undefined FUN_1446052d8(void)

void FUN_1446052d8(undefined8 param_1,char param_2,char param_3,char param_4)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_118 [32];
  longlong local_f8;
  undefined8 uStack_f0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar6 = (longlong *)FUN_146eab21e();
  if (plVar6 != (longlong *)0x0) {
    if (param_2 == '\0') {
      bVar3 = 0;
    }
    else {
      uVar5 = (**(code **)(plVar6[0x74] + 0x60))();
      uVar9 = (ulonglong)uVar5;
      local_f8 = 0;
      uStack_f0 = 0;
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar9);
      }
      if (uVar5 == 0) {
        bVar3 = 0;
      }
      else {
        FUN_14481578e(&local_f8,uVar9);
        uVar8 = 0;
        bVar3 = 0;
        do {
          uVar1 = uStack_f0;
          lVar7 = (longlong)*(int *)(plVar6[0x76] + uVar8 * 4);
          if ((lVar7 == -1) || (uVar8 != *(uint *)(plVar6[0x32] + lVar7 * 4))) {
            lVar7 = (longlong)(int)uStack_f0;
            uVar5 = (int)uStack_f0 + 1;
            uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar5);
            if (uStack_f0._4_4_ < uVar5) {
              FUN_1446f48e2(&local_f8,uVar1 & 0xffffffff);
            }
            *(int *)(local_f8 + lVar7 * 4) = (int)uVar8;
            bVar3 = 1;
          }
          uVar8 = uVar8 + 1;
        } while (uVar9 != uVar8);
        if (0 < (int)uStack_f0) {
          (**(code **)(*plVar6 + 0x28))(plVar6,&DAT_14c996af0,&local_f8,0x101);
        }
      }
      if (local_f8 != 0) {
        FUN_1400020a8();
      }
    }
    if (param_3 != '\0') {
      bVar2 = FUN_146ebd86e(plVar6);
      bVar3 = bVar2 | bVar3;
    }
    if (param_4 != '\0') {
      bVar2 = FUN_146ebda4e(plVar6);
      bVar3 = bVar2 | bVar3;
    }
    if ((bVar3 & 1) != 0) {
      FUN_14075a44e(&local_f8,plVar6);
      FUN_141051328(&local_f8);
      cVar4 = FUN_146ebcd12(plVar6);
      if (cVar4 != '\0') {
        FUN_146ebba8c(plVar6,0,1);
      }
    }
    FUN_146ecd102(param_1,plVar6);
    (**(code **)*plVar6)(plVar6,1);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446054a4 FUN_1446054a4 body=1560 status=ok
// SIG undefined FUN_1446054a4(void)

void FUN_1446054a4(longlong param_1,longlong param_2,double *param_3,byte param_4,char param_5)

{
  undefined1 (*pauVar1) [16];
  double dVar2;
  char cVar3;
  longlong lVar4;
  double dVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auStack_188 [39];
  byte local_161;
  longlong local_160;
  undefined4 local_158;
  undefined4 local_154;
  ulonglong local_150;
  ulonglong local_148;
  ulonglong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined2 local_a0;
  undefined1 local_9e;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar19 = *(int *)(param_2 + 0x20) * 0x200 + *(int *)(param_2 + 0x24);
  iVar13 = *(int *)(param_1 + 0x38);
  local_150 = (ulonglong)*(uint *)(param_1 + 0x28);
  local_161 = param_4;
  local_160 = param_2;
  if (0 < (longlong)iVar13) {
    lVar21 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x30);
      local_c8 = (double)*(float *)(lVar4 + 8 + lVar21);
      dVar22 = (double)*(float *)(lVar4 + 4 + lVar21);
      dVar5 = (double)*(float *)(lVar4 + lVar21);
      if (param_3 != (double *)0x0) {
        dVar5 = dVar5 * param_3[8];
        dVar22 = dVar22 * param_3[9];
        local_c8 = local_c8 * param_3[10];
        dVar7 = *param_3;
        dVar8 = param_3[1];
        dVar9 = param_3[2];
        dVar2 = param_3[3];
        dVar23 = dVar22 * dVar7 - dVar5 * dVar8;
        dVar24 = local_c8 * dVar8 - dVar22 * dVar9;
        dVar25 = dVar5 * dVar9 - dVar7 * local_c8;
        dVar24 = dVar24 + dVar24;
        dVar25 = dVar25 + dVar25;
        dVar23 = dVar23 + dVar23;
        dVar5 = (dVar23 * dVar8 - dVar25 * dVar9) + dVar2 * dVar24 + dVar5 + param_3[4];
        dVar22 = (dVar9 * dVar24 - dVar7 * dVar23) + param_3[3] * dVar25 + dVar22 + param_3[5];
        local_c8 = dVar23 * dVar2 + local_c8 + (dVar25 * dVar7 - dVar24 * dVar8) + param_3[6];
      }
      local_d8._8_4_ = SUB84(dVar22,0);
      local_d8._0_8_ = dVar5;
      local_d8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
      local_b8 = DAT_14c846338;
      local_c0 = DAT_14c846330;
      local_ac = DAT_14c846338;
      local_b4 = DAT_14c846330;
      local_a8 = DAT_14c84635c;
      local_a0 = 0;
      local_9e = 0;
      FUN_146c02208(local_160,local_d8);
      lVar21 = lVar21 + 0xc;
    } while ((longlong)iVar13 * 0xc != lVar21);
  }
  if (0 < (int)local_150) {
    local_161 = local_161 ^ 1;
    uVar17 = 0;
    do {
      cVar3 = *(char *)(param_1 + 0x60);
      if (cVar3 == '\x03') {
        lVar21 = **(longlong **)(param_1 + 0x58);
        uVar12 = *(uint *)(lVar21 + 4 + uVar17 * 8);
        uVar20 = *(uint *)((*(longlong **)(param_1 + 0x58))[2] + 4 +
                          (longlong)*(int *)(lVar21 + uVar17 * 8) * 0xc);
LAB_144605733:
        if (2 < (int)uVar12) {
          uVar20 = uVar20 + iVar19;
          local_140 = (ulonglong)(uVar20 >> 9);
          local_148 = (ulonglong)(uVar20 & 0x1ff);
          lVar21 = 2;
          do {
            auVar11 = local_d8;
            cVar3 = *(char *)(param_1 + 0x60);
            if (cVar3 == '\x01') {
              lVar4 = (*(longlong **)(param_1 + 0x58))[2];
              lVar16 = ((ulonglong)*(byte *)(**(longlong **)(param_1 + 0x58) + uVar17 * 2) + lVar21)
                       * 3;
              uVar15 = (uint)*(byte *)(lVar4 + -2 + lVar16);
              uVar18 = (uint)*(byte *)(lVar4 + 1 + lVar16);
            }
            else if (cVar3 == '\x02') {
              lVar4 = (*(longlong **)(param_1 + 0x58))[2];
              lVar16 = *(short *)(**(longlong **)(param_1 + 0x58) + uVar17 * 4) + lVar21;
              uVar15 = (uint)*(short *)(lVar4 + -4 + lVar16 * 6);
              uVar18 = (uint)*(short *)(lVar4 + 2 + lVar16 * 6);
            }
            else {
              uVar15 = 0xffffffff;
              uVar18 = 0xffffffff;
              if (cVar3 == '\x03') {
                lVar4 = (*(longlong **)(param_1 + 0x58))[2];
                lVar16 = *(int *)(**(longlong **)(param_1 + 0x58) + uVar17 * 8) + lVar21;
                uVar15 = *(uint *)(lVar4 + -8 + lVar16 * 0xc);
                uVar18 = *(uint *)(lVar4 + 4 + lVar16 * 0xc);
              }
            }
            uVar6 = uVar18 + iVar19;
            uVar10 = uVar15 + iVar19;
            if (param_5 != '\0') {
              uVar6 = uVar15 + iVar19;
              uVar10 = uVar18 + iVar19;
            }
            local_d8._4_4_ = uVar10;
            local_d8._0_4_ = uVar20;
            local_d8._12_4_ = auVar11._12_4_;
            local_d8._8_4_ = uVar6;
            iVar13 = FUN_146c01152(local_160,local_d8,0);
            if (iVar13 == -2 && local_161 == 0) {
              lVar4 = *(longlong *)(*(longlong *)(local_160 + 0x10) + (ulonglong)(uVar6 >> 9) * 8);
              local_e8 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
              pauVar1 = (undefined1 (*) [16])(lVar4 + (ulonglong)(uVar6 & 0x1ff) * 0x18);
              local_f8 = *(undefined4 *)*pauVar1;
              uStack_f4 = *(undefined4 *)(*pauVar1 + 4);
              uStack_f0 = *(undefined4 *)(*pauVar1 + 8);
              uStack_ec = *(undefined4 *)(*pauVar1 + 0xc);
              local_d8 = *pauVar1;
              local_b8 = DAT_14c846338;
              local_c0 = DAT_14c846330;
              local_ac = DAT_14c846338;
              local_b4 = DAT_14c846330;
              local_a8 = DAT_14c84635c;
              local_a0 = 0;
              local_9e = 0;
              local_c8 = (double)local_e8;
              local_154 = FUN_146c02208(local_160,local_d8);
              lVar16 = local_160;
              lVar4 = *(longlong *)(*(longlong *)(local_160 + 0x10) + (ulonglong)(uVar10 >> 9) * 8);
              local_108 = *(undefined8 *)(lVar4 + 0x10 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
              pauVar1 = (undefined1 (*) [16])(lVar4 + (ulonglong)(uVar10 & 0x1ff) * 0x18);
              local_118 = *(undefined4 *)*pauVar1;
              uStack_114 = *(undefined4 *)(*pauVar1 + 4);
              uStack_110 = *(undefined4 *)(*pauVar1 + 8);
              uStack_10c = *(undefined4 *)(*pauVar1 + 0xc);
              local_d8 = *pauVar1;
              local_b8 = DAT_14c846338;
              local_c0 = DAT_14c846330;
              local_ac = DAT_14c846338;
              local_b4 = DAT_14c846330;
              local_a8 = DAT_14c84635c;
              local_a0 = 0;
              local_9e = 0;
              local_c8 = (double)local_108;
              local_158 = FUN_146c02208(local_160,local_d8);
              lVar4 = *(longlong *)(*(longlong *)(lVar16 + 0x10) + local_140 * 8);
              local_128 = *(double *)(lVar4 + 0x10 + local_148 * 0x18);
              pauVar1 = (undefined1 (*) [16])(lVar4 + local_148 * 0x18);
              local_138 = *(undefined4 *)*pauVar1;
              uStack_134 = *(undefined4 *)(*pauVar1 + 4);
              uStack_130 = *(undefined4 *)(*pauVar1 + 8);
              uStack_12c = *(undefined4 *)(*pauVar1 + 0xc);
              local_d8 = *pauVar1;
              local_b8 = DAT_14c846338;
              local_c0 = DAT_14c846330;
              local_ac = DAT_14c846338;
              local_b4 = DAT_14c846330;
              local_a8 = DAT_14c84635c;
              local_a0 = 0;
              local_9e = 0;
              local_c8 = local_128;
              uVar14 = FUN_146c02208(lVar16,local_d8);
              auVar11 = local_d8;
              local_d8._4_4_ = local_158;
              local_d8._0_4_ = uVar14;
              local_d8._12_4_ = auVar11._12_4_;
              local_d8._8_4_ = local_154;
              FUN_146c01152(lVar16,local_d8,0);
            }
            lVar21 = lVar21 + 1;
          } while (uVar12 != (uint)lVar21);
        }
      }
      else {
        if (cVar3 == '\x02') {
          lVar21 = **(longlong **)(param_1 + 0x58);
          uVar12 = (uint)*(short *)(lVar21 + 2 + uVar17 * 4);
          uVar20 = (uint)*(short *)((*(longlong **)(param_1 + 0x58))[2] + 2 +
                                   (longlong)*(short *)(lVar21 + uVar17 * 4) * 6);
          goto LAB_144605733;
        }
        if (cVar3 == '\x01') {
          lVar21 = **(longlong **)(param_1 + 0x58);
          uVar12 = (uint)*(byte *)(lVar21 + 1 + uVar17 * 2);
          uVar20 = (uint)*(byte *)((*(longlong **)(param_1 + 0x58))[2] + 1 +
                                  (ulonglong)*(byte *)(lVar21 + uVar17 * 2) * 3);
          goto LAB_144605733;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != local_150);
  }
  if ((local_90 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144605abe FUN_144605abe body=156 status=ok
// SIG undefined FUN_144605abe(void)

void FUN_144605abe(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (longlong)*param_2;
  plVar1 = (longlong *)*param_1;
  FUN_149703326(&local_58,param_1[1],*(undefined4 *)(*plVar1 + lVar3 * 4));
  lVar2 = plVar1[2];
  *(double *)(lVar2 + lVar3 * 0x18) = (local_58 + local_40) * 0.5;
  *(double *)(lVar2 + 8 + lVar3 * 0x18) = (local_50 + local_38) * 0.5;
  *(double *)(lVar2 + 0x10 + lVar3 * 0x18) = (local_48 + local_30) * 0.5;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144605c14 FUN_144605c14 body=12 status=ok
// SIG undefined FUN_144605c14(void)

void FUN_144605c14(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144605c1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144605c20 FUN_144605c20 body=29 status=ok
// SIG undefined FUN_144605c20(void)

undefined8 FUN_144605c20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144605c6a FUN_144605c6a body=12 status=ok
// SIG undefined FUN_144605c6a(void)

void FUN_144605c6a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144605c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144605c76 FUN_144605c76 body=29 status=ok
// SIG undefined FUN_144605c76(void)

undefined8 FUN_144605c76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144605c93 FUN_144605c93 body=282 status=ok
// SIG undefined FUN_144605c93(void)

void FUN_144605c93(void)

{
  longlong lVar1;
  undefined1 auStack_68 [48];
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14098d3d2(FUN_144604234,L"/Script/FractureEngine",L"EConvexHullSimplifyMethod",&DAT_14cc24430)
  ;
  lVar1 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14be15900 + lVar1),L"/Script/FractureEngine",
                  *(undefined8 *)((longlong)&PTR_u_EFractureBrickBondEnum_14be15908 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_14be15910 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  lVar1 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14be15a50 + lVar1),L"/Script/FractureEngine",
                  *(undefined8 *)
                   ((longlong)&PTR_u_ENonUniformSamplingDistributionM_14be15a58 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_14be15a60 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x40);
  lVar1 = 0;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14be15c80 + lVar1),L"/Script/FractureEngine",
                  *(undefined8 *)((longlong)&PTR_u_EFixTinyGeoMergeType_14be15c88 + lVar1),
                  *(undefined8 *)((longlong)&PTR_DAT_14be15c90 + lVar1));
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x80);
  local_38 = 0x800000014be15d00;
  local_24 = 0xe;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14675012a(&local_38);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144605db0 FUN_144605db0 body=55 status=ok
// SIG undefined FUN_144605db0(void)

void FUN_144605db0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24530 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24530 = FUN_14171c317(FUN_1467502c6,uVar1,L"EFloatArrayToIntArrayFunctionEnum");
  }
  return;
}



// FUNCTION 144605de7 FUN_144605de7 body=55 status=ok
// SIG undefined FUN_144605de7(void)

void FUN_144605de7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc245a8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc245a8 = FUN_14171c317(FUN_146750474,uVar1,L"ECompareOperation1Enum");
  }
  return;
}



// FUNCTION 144605e1e FUN_144605e1e body=55 status=ok
// SIG undefined FUN_144605e1e(void)

void FUN_144605e1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24638 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24638 = FUN_14171c317(FUN_146750682,uVar1,L"EStatisticsOperationEnum");
  }
  return;
}



// FUNCTION 144605e55 FUN_144605e55 body=55 status=ok
// SIG undefined FUN_144605e55(void)

void FUN_144605e55(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24710 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24710 = FUN_14171c317(FUN_1467509b0,uVar1,L"EDataflowFieldFalloffType");
  }
  return;
}



// FUNCTION 144605e8c FUN_144605e8c body=55 status=ok
// SIG undefined FUN_144605e8c(void)

void FUN_144605e8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24770 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24770 = FUN_14171c317(FUN_146750b00,uVar1,L"EDataflowSetMaskConditionType");
  }
  return;
}



// FUNCTION 144605ec3 FUN_144605ec3 body=55 status=ok
// SIG undefined FUN_144605ec3(void)

void FUN_144605ec3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24830 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24830 = FUN_14171c317(FUN_146750dce,uVar1,L"EDataflowWaveFunctionType");
  }
  return;
}



// FUNCTION 144605efa FUN_144605efa body=55 status=ok
// SIG undefined FUN_144605efa(void)

void FUN_144605efa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24860 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24860 = FUN_14171c317(FUN_146750e5c,uVar1,L"EDataflowFloatFieldOperationType");
  }
  return;
}



// FUNCTION 144605f31 FUN_144605f31 body=55 status=ok
// SIG undefined FUN_144605f31(void)

void FUN_144605f31(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24890 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24890 = FUN_14171c317(FUN_146750eea,uVar1,L"EDataflowVectorFieldOperationType");
  }
  return;
}



// FUNCTION 144606128 FUN_144606128 body=156 status=ok
// SIG undefined FUN_144606128(void)

void FUN_144606128(void)

{
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be182a0,0xc,&PTR_FUN_14be18240,3);
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be19330,6,0,0);
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be1d280,0xe,&PTR_FUN_14be1d1e0,5);
  return;
}



// FUNCTION 1446061c4 FUN_1446061c4 body=55 status=ok
// SIG undefined FUN_1446061c4(void)

void FUN_1446061c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24938 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24938 = FUN_14171c317(FUN_146751598,uVar1,L"ESetMaterialOperationTypeEnum");
  }
  return;
}



// FUNCTION 1446061fb FUN_1446061fb body=55 status=ok
// SIG undefined FUN_1446061fb(void)

void FUN_1446061fb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24a10 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24a10 = FUN_14171c317(FUN_146751866,uVar1,L"EConvexOverlapRemovalMethodEnum");
  }
  return;
}



// FUNCTION 144606232 FUN_144606232 body=55 status=ok
// SIG undefined FUN_144606232(void)

void FUN_144606232(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24ab8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24ab8 = FUN_14171c317(FUN_146751b46,uVar1,L"ENegativeSpaceSampleMethodDataflowEnum");
  }
  return;
}



// FUNCTION 1446063f2 FUN_1446063f2 body=382 status=ok
// SIG undefined FUN_1446063f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446063f2(void)

{
  char cVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **local_50;
  undefined8 uStack_48;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_48 = 1;
  local_50 = &PTR_FUN_14be247b0;
  local_58 = 7;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be247d0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be24a20);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be24bf0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be24d50);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be25130);
  local_50 = &PTR_FUN_14be28320;
  uStack_48 = 2;
  local_58 = 0x10;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be28360);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be28850);
  FUN_1400b22c2(local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(local_40,&DAT_14cc24bd0);
  if (cVar1 == '\0') {
    _DAT_14cc24bd0 = 0;
    uRam000000014cc24bd8 = 0;
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144606574 FUN_144606574 body=55 status=ok
// SIG undefined FUN_144606574(void)

void FUN_144606574(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24be8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24be8 = FUN_14171c317(FUN_14675234e,uVar1,L"EClusterSizeMethodEnum");
  }
  return;
}



// FUNCTION 1446065ab FUN_1446065ab body=55 status=ok
// SIG undefined FUN_1446065ab(void)

void FUN_1446065ab(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24c60 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24c60 = FUN_14171c317(FUN_1467525d6,uVar1,L"EClusterNeighborSelectionMethodEnum");
  }
  return;
}



// FUNCTION 1446065e2 FUN_1446065e2 body=1241 status=ok
// SIG undefined FUN_1446065e2(void)

void FUN_1446065e2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 local_190;
  undefined1 local_188;
  undefined4 local_180;
  undefined1 local_169;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  longlong local_150;
  undefined4 local_148;
  undefined8 local_140;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar13 = param_1 + 0x1c8;
  lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar7 == lVar13) {
    local_148 = 0xffffffff;
    local_140 = 0;
    local_150 = lVar13;
    uVar8 = FUN_146fb4872(param_1,&local_150);
    uVar8 = FUN_1496fcf74(uVar8,param_2,lVar13);
    local_148 = 0xffffffff;
    local_140 = 0;
    local_150 = param_1 + 0x278;
    uVar9 = FUN_146fb4872(param_1,&local_150);
    lVar7 = FUN_14972af6e(uVar9,param_2,param_1 + 0x278);
    puVar10 = (undefined8 *)FUN_146eab21e(uVar8);
    if (puVar10 != (undefined8 *)0x0) {
      FUN_14075a44e(&local_150,puVar10);
      FUN_141051328(&local_150);
      local_165 = *(undefined1 *)(param_1 + 0x198);
      uStack_a0._0_4_ = 0xffffffff;
      local_98 = 0;
      local_a8 = param_1 + 0x19c;
      uVar8 = FUN_146fb4872(param_1,&local_a8);
      puVar11 = (undefined4 *)FUN_146fca67a(uVar8,param_2,param_1 + 0x19c);
      local_154 = *puVar11;
      uStack_a0._0_4_ = 0xffffffff;
      local_98 = 0;
      local_a8 = param_1 + 0x1a0;
      uVar8 = FUN_146fb4872(param_1,&local_a8);
      puVar11 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x1a0);
      uVar1 = *puVar11;
      uStack_a0._0_4_ = 0xffffffff;
      local_98 = 0;
      local_a8 = param_1 + 0x1a4;
      uVar8 = FUN_146fb4872(param_1,&local_a8);
      puVar11 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x1a4);
      uVar2 = *puVar11;
      local_166 = *(undefined1 *)(param_1 + 0x1c4);
      local_167 = *(undefined1 *)(param_1 + 0x1c5);
      local_168 = *(undefined1 *)(param_1 + 0x1c6);
      uStack_a0._0_4_ = 0xffffffff;
      local_98 = 0;
      local_a8 = param_1 + 0x1a8;
      uVar8 = FUN_146fb4872(param_1,&local_a8);
      puVar11 = (undefined4 *)FUN_146fca67a(uVar8,param_2,param_1 + 0x1a8);
      local_158 = *puVar11;
      uStack_a0._0_4_ = 0xffffffff;
      local_98 = 0;
      local_a8 = param_1 + 0x1ac;
      uVar8 = FUN_146fb4872(param_1,&local_a8);
      puVar11 = (undefined4 *)FUN_146fca67a(uVar8,param_2,param_1 + 0x1ac);
      local_15c = *puVar11;
      uStack_a0._0_4_ = 0xffffffff;
      local_98 = 0;
      local_a8 = param_1 + 0x1b0;
      uVar8 = FUN_146fb4872(param_1,&local_a8);
      puVar11 = (undefined4 *)FUN_146fca67a(uVar8,param_2,param_1 + 0x1b0);
      local_160 = *puVar11;
      uStack_a0._0_4_ = 0xffffffff;
      local_98 = 0;
      local_a8 = param_1 + 0x1b8;
      uVar8 = FUN_146fb4872(param_1,&local_a8);
      puVar11 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x1b8);
      local_164 = 500;
      if (*(char *)(param_1 + 0x198) == '\x03') {
        local_164 = *(undefined4 *)(param_1 + 0x1b4);
      }
      uVar3 = *puVar11;
      uStack_a0._0_4_ = 0xffffffff;
      local_98 = 0;
      local_a8 = param_1 + 0x1bc;
      uVar8 = FUN_146fb4872(param_1,&local_a8);
      puVar12 = (undefined1 *)FUN_146fca358(uVar8,param_2,param_1 + 0x1bc);
      local_169 = *puVar12;
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
      local_98 = 0;
      local_a8 = param_1 + 0x1c0;
      uVar8 = FUN_146fb4872(param_1,&local_a8);
      puVar11 = (undefined4 *)FUN_14972a54c(uVar8,param_2,param_1 + 0x1c0);
      uVar4 = *puVar11;
      iVar5 = *(int *)(lVar7 + 0x18);
      iVar6 = FUN_1401f66f6(puVar10,DAT_14c9974a8);
      if (iVar5 == iVar6) {
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_146fd5878(lVar7,&local_a8);
        local_188 = local_169;
        local_190 = local_164;
        local_1a0 = local_160;
        local_1a8 = local_15c;
        local_1b0 = local_158;
        local_1b8 = local_167;
        local_1c0 = local_168;
        local_1c8 = local_166;
        local_1d8 = uVar1;
        local_1d0 = uVar2;
        local_198 = uVar3;
        local_180 = uVar4;
        FUN_149703aae(puVar10,&local_a8,local_165,local_154);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
      uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
      local_98 = 0;
      local_a8 = lVar13;
      lVar13 = FUN_146fb78aa(param_1);
      if (lVar13 != 0) {
        FUN_14972d97e(lVar13,puVar10,param_2);
      }
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144606abc FUN_144606abc body=55 status=ok
// SIG undefined FUN_144606abc(void)

void FUN_144606abc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24d80 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24d80 = FUN_14171c317(FUN_146752c78,uVar1,L"EFloatToIntFunctionEnum");
  }
  return;
}



// FUNCTION 144606af4 FUN_144606af4 body=407 status=ok
// SIG undefined FUN_144606af4(void)

void FUN_144606af4(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  void *local_68;
  int local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = 0xffffffff;
  local_38 = 0;
  local_48 = (undefined2 *)(param_1 + 0x1a8);
  uVar2 = FUN_146fb4872();
  puVar3 = (undefined8 *)FUN_146fda3fc(uVar2,param_2,(undefined2 *)(param_1 + 0x1a8));
  local_58 = (void *)0x0;
  local_50 = *(int *)(puVar3 + 1);
  lVar5 = (longlong)local_50;
  pvVar1 = (void *)*puVar3;
  if (lVar5 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar5 * 2);
  }
  local_40 = 0xffffffff;
  local_38 = 0;
  local_48 = (undefined2 *)(param_1 + 0x198);
  uVar2 = FUN_146fb4872(param_1,&local_48);
  puVar3 = (undefined8 *)FUN_146fda3fc(uVar2,param_2,(undefined2 *)(param_1 + 0x198));
  local_48 = (undefined2 *)0x0;
  local_40 = *(int *)(puVar3 + 1);
  lVar5 = (longlong)local_40;
  pvVar1 = (void *)*puVar3;
  if (lVar5 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,local_40,0);
    memcpy(local_48,pvVar1,lVar5 * 2);
  }
  uVar2 = FUN_14054d1d4();
  puVar4 = local_48;
  if (local_40 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  local_68 = local_58;
  local_60 = local_50 + -1;
  if (local_50 == 0) {
    local_60 = 0;
  }
  local_78 = 0;
  FUN_1415d54ec(&local_68,puVar4,0,uVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144606c8c FUN_144606c8c body=55 status=ok
// SIG undefined FUN_144606c8c(void)

void FUN_144606c8c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc24e70 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc24e70 = FUN_14171c317(FUN_1467531ee,uVar1,L"EVisibiltyOptionsEnum");
  }
  return;
}



// FUNCTION 144606cc4 FUN_144606cc4 body=473 status=ok
// SIG undefined FUN_144606cc4(void)

void FUN_144606cc4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = param_1 + 0x198;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == lVar7) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = lVar7;
    uVar4 = FUN_146fb4872(param_1,&local_60);
    uVar4 = FUN_1496fcf74(uVar4,param_2,lVar7);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x248;
    uVar5 = FUN_146fb4872(param_1,&local_60);
    lVar3 = FUN_14972af6e(uVar5,param_2,param_1 + 0x248);
    iVar2 = FUN_1401f66f6(uVar4,DAT_14c9974a8);
    if (*(int *)(lVar3 + 0x18) == iVar2) {
      cVar1 = FUN_146fd5e68(lVar3);
      if (cVar1 != '\0') {
        puVar6 = (undefined8 *)FUN_146eab21e(uVar4);
        if (puVar6 != (undefined8 *)0x0) {
          local_78[0] = 0;
          local_78[1] = 0;
          FUN_146fd5878(lVar3,local_78);
          FUN_149707b40(puVar6,local_78);
          local_58 = 0xffffffff;
          local_50 = 0;
          local_60 = lVar7;
          lVar7 = FUN_146fb78aa(param_1);
          if (lVar7 != 0) {
            FUN_14972d97e(lVar7,puVar6,param_2);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          (**(code **)*puVar6)(puVar6,1);
          goto LAB_144606cfe;
        }
      }
    }
    else {
      FUN_1400b22c2(&local_60,
                    "TransformSelection\'s number of elements doesn\'t match number of transforms in Collection."
                   );
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = lVar7;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_14972d97e(lVar7,uVar4,param_2);
    }
  }
LAB_144606cfe:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144606e9e FUN_144606e9e body=891 status=ok
// SIG undefined FUN_144606e9e(void)

void FUN_144606e9e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128 [3];
  longlong local_110;
  undefined4 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar7 = param_1 + 0x1a0;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar4 != lVar7) goto LAB_144606ede;
  lVar4 = param_1 + 0x250;
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = lVar4;
  uVar5 = FUN_146fb4872(param_1,&local_f8);
  local_130 = FUN_14972af6e(uVar5,param_2,lVar4);
  lVar1 = param_1 + 0x270;
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = lVar1;
  uVar5 = FUN_146fb4872(param_1,&local_f8);
  lVar6 = FUN_14979bc16(uVar5,param_2,lVar1);
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = lVar4;
  lVar4 = FUN_146fb4872(param_1,&local_f8);
  if (*(longlong *)(lVar4 + 0x48) == 0) {
    local_f0 = 0xffffffff;
    local_e8 = 0;
    local_f8 = lVar1;
    lVar4 = FUN_146fb4872(param_1);
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      local_108 = 0xffffffff;
      local_100 = 0;
      local_110 = lVar7;
      uVar5 = FUN_146fb4872(param_1);
      uVar5 = FUN_1496fcf74(uVar5,param_2,lVar7);
      FUN_146ecd042(&local_f8,uVar5);
      iVar3 = FUN_1401f66f6(&local_f8,DAT_14c996ae8);
      if (*(int *)(lVar6 + 0x18) == iVar3) {
        cVar2 = FUN_146fd5e68(lVar6);
        if (cVar2 == '\0') goto LAB_144607193;
        local_128[0] = 0;
        local_128[1] = 0;
        FUN_146fd5878(lVar6,local_128);
        FUN_149707f88(&local_f8,local_128,*(char *)(param_1 + 0x198) == '\0');
LAB_14460712c:
        local_108 = 0xffffffff;
        local_100 = 0;
        local_110 = lVar7;
        lVar7 = FUN_146fb78aa(param_1);
        if (lVar7 != 0) {
          FUN_1496fd2a8(lVar7,&local_f8,param_2);
        }
        if (local_128[0] != 0) {
          FUN_1400020a8();
        }
        FUN_14054b30a(&local_f8);
        goto LAB_144606ede;
      }
LAB_144607172:
      FUN_1400b22c2(&local_110,
                    "TransformSelection\'s number of elements doesn\'t match number of transforms in Collection."
                   );
      if (local_110 != 0) {
        FUN_1400020a8();
      }
      goto LAB_144607193;
    }
    FUN_1400b22c2(&local_f8,"A TransformSelection or a FaceSelection must be connected as input.");
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_108 = 0xffffffff;
    local_100 = 0;
    local_110 = lVar7;
    uVar5 = FUN_146fb4872(param_1);
    uVar5 = FUN_1496fcf74(uVar5,param_2,lVar7);
    FUN_146ecd042(&local_f8,uVar5);
    iVar3 = FUN_1401f66f6(&local_f8,DAT_14c9974a8);
    lVar4 = local_130;
    if (*(int *)(local_130 + 0x18) != iVar3) goto LAB_144607172;
    cVar2 = FUN_146fd5e68(local_130);
    if (cVar2 != '\0') {
      local_128[0] = 0;
      local_128[1] = 0;
      FUN_146fd5878(lVar4,local_128);
      FUN_149707d34(&local_f8,local_128,*(char *)(param_1 + 0x198) == '\0');
      goto LAB_14460712c;
    }
LAB_144607193:
    FUN_14054b30a(&local_f8);
  }
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = lVar7;
  uVar5 = FUN_146fb4872(param_1,&local_f8);
  uVar5 = FUN_1496fcf74(uVar5,param_2,lVar7);
  local_f0 = 0xffffffff;
  local_e8 = 0;
  local_f8 = lVar7;
  lVar7 = FUN_146fb78aa(param_1,&local_f8);
  if (lVar7 != 0) {
    FUN_14972d97e(lVar7,uVar5,param_2);
  }
LAB_144606ede:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460721a FUN_14460721a body=473 status=ok
// SIG undefined FUN_14460721a(void)

void FUN_14460721a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar7 = param_1 + 0x198;
  lVar3 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar3 == lVar7) {
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = lVar7;
    uVar4 = FUN_146fb4872(param_1,&local_60);
    uVar4 = FUN_1496fcf74(uVar4,param_2,lVar7);
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = param_1 + 0x248;
    uVar5 = FUN_146fb4872(param_1,&local_60);
    lVar3 = FUN_14972af6e(uVar5,param_2,param_1 + 0x248);
    iVar2 = FUN_1401f66f6(uVar4,DAT_14c9974a8);
    if (*(int *)(lVar3 + 0x18) == iVar2) {
      cVar1 = FUN_146fd5e68(lVar3);
      if (cVar1 != '\0') {
        puVar6 = (undefined8 *)FUN_146eab21e(uVar4);
        if (puVar6 != (undefined8 *)0x0) {
          local_78[0] = 0;
          local_78[1] = 0;
          FUN_146fd5878(lVar3,local_78);
          FUN_14970806e(puVar6,local_78);
          local_58 = 0xffffffff;
          local_50 = 0;
          local_60 = lVar7;
          lVar7 = FUN_146fb78aa(param_1);
          if (lVar7 != 0) {
            FUN_14972d97e(lVar7,puVar6,param_2);
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          (**(code **)*puVar6)(puVar6,1);
          goto LAB_144607254;
        }
      }
    }
    else {
      FUN_1400b22c2(&local_60,
                    "TransformSelection\'s number of elements doesn\'t match number of transforms in Collection."
                   );
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = lVar7;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_14972d97e(lVar7,uVar4,param_2);
    }
  }
LAB_144607254:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446073f4 FUN_1446073f4 body=572 status=ok
// SIG undefined FUN_1446073f4(void)

void FUN_1446073f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  float param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
                  longlong param_9,longlong *param_10)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_128 [32];
  float local_108;
  undefined4 local_100;
  float local_f8;
  undefined1 local_f0;
  longlong **local_e8;
  undefined8 local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar3 = *(uint *)(param_1 + 8);
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_1448158c6(&local_b8,&local_c8,uVar3);
  local_c0 = 0;
  local_bc = (undefined4)uStack_b0;
  fVar6 = param_5 + -1000.0;
  local_f0 = param_8;
  local_100 = param_6;
  local_108 = param_5;
  local_f8 = fVar6;
  local_e8 = &local_c8;
  local_c8 = &local_b8;
  FUN_144610364(param_1,param_2,param_3,param_4);
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      fVar2 = *(float *)(*local_c8 + ((longlong)local_c0 + uVar4) * 4);
      if ((fVar2 != fVar6) || (NAN(fVar2) || NAN(fVar6))) {
        lVar5 = *(longlong *)(param_9 + 0x10);
        if (*(longlong *)(param_9 + 0x10) == 0) {
          lVar5 = param_9;
        }
        puVar1 = (uint *)(lVar5 + (uVar4 >> 5 & 0x7ffffff) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != (uint)uVar4);
  }
  local_d8 = (longlong *)((ulonglong)local_d8._4_4_ << 0x20);
  FUN_1448158c6(&local_b8,&local_d8,uVar3);
  local_d0 = 0;
  local_cc = (undefined4)uStack_b0;
  local_f0 = param_8;
  local_f8 = (float)param_7;
  local_100 = param_6;
  local_108 = param_5;
  local_e8 = (longlong **)&local_d8;
  local_d8 = &local_b8;
  FUN_144610364(param_1,param_2,param_3,param_4);
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      *(undefined4 *)(*param_10 + uVar4 * 4) =
           *(undefined4 *)(*local_d8 + ((longlong)local_d0 + uVar4) * 4);
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144607631 FUN_144607631 body=325 status=ok
// SIG undefined FUN_144607631(void)

void FUN_144607631(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  ulonglong local_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = (int)param_1[1];
  local_4c = 0;
  iVar6 = 0;
  local_44 = 0;
  FUN_144815938(param_3,&local_4c,iVar1);
  local_4c = local_4c & 0xffffffff00000000;
  FUN_1448156a8(param_4,&local_4c,iVar1);
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    uVar4 = 0;
    iVar6 = 0;
    do {
      lVar5 = *(longlong *)(param_2 + 0x10);
      if (*(longlong *)(param_2 + 0x10) == 0) {
        lVar5 = param_2;
      }
      if ((*(uint *)(lVar5 + (uVar4 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar4 & 0x1f) & 1) != 0) {
        lVar5 = *param_1;
        lVar2 = *param_3;
        lVar7 = (longlong)iVar6;
        *(undefined4 *)(lVar2 + 8 + lVar7 * 0xc) = *(undefined4 *)(lVar5 + 8 + lVar3);
        *(undefined8 *)(lVar2 + lVar7 * 0xc) = *(undefined8 *)(lVar5 + lVar3);
        *(uint *)(*param_4 + lVar7 * 4) = (uint)uVar4;
        iVar6 = iVar6 + 1;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xc;
    } while ((longlong)iVar1 != uVar4);
  }
  FUN_146bca1c8(param_3,iVar6,1);
  iVar1 = (int)param_4[1];
  if (iVar1 < iVar6) {
    *(int *)(param_4 + 1) = iVar6;
    if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar1) < (uint)(iVar6 - iVar1)) {
      FUN_1446f48e2(param_4);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_4),0,(longlong)(iVar6 - iVar1) << 2);
  }
  else {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar6 < iVar1) {
      *(int *)(param_4 + 1) = iVar6;
      FUN_14479f406(param_4);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144607778 FUN_144607778 body=643 status=ok
// SIG undefined FUN_144607778(void)

void FUN_144607778(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
                  float param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8,
                  longlong param_9,longlong *param_10)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  undefined4 local_1d0;
  float local_1c8;
  undefined1 local_1c0;
  longlong **local_1b8;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 local_198 [12];
  undefined8 local_138;
  int local_130;
  undefined4 local_12c;
  undefined8 local_128 [12];
  longlong *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  uVar3 = *(uint *)(param_1 + 8);
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_1448158c6(&local_b8,&local_c8,uVar3);
  local_c0 = 0;
  local_bc = (undefined4)uStack_b0;
  fVar8 = param_5 + -1000.0;
  puVar6 = param_3;
  puVar7 = local_128;
  local_c8 = &local_b8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1c0 = param_8;
  local_1d0 = param_6;
  local_1d8 = param_5;
  local_1c8 = fVar8;
  local_1b8 = &local_c8;
  local_1a8 = param_3;
  local_1a0 = param_2;
  FUN_1446106d4(param_1,param_2,local_128,param_4);
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      fVar2 = *(float *)(*local_c8 + ((longlong)local_c0 + uVar5) * 4);
      if ((fVar2 != fVar8) || (NAN(fVar2) || NAN(fVar8))) {
        lVar4 = *(longlong *)(param_9 + 0x10);
        if (*(longlong *)(param_9 + 0x10) == 0) {
          lVar4 = param_9;
        }
        puVar1 = (uint *)(lVar4 + (uVar5 >> 5 & 0x7ffffff) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar5 & 0x1f);
      }
      uVar5 = uVar5 + 1;
    } while (uVar3 != (uint)uVar5);
  }
  local_138 = (longlong *)((ulonglong)local_138._4_4_ << 0x20);
  FUN_1448158c6(&local_b8,&local_138,uVar3);
  local_130 = 0;
  local_12c = (undefined4)uStack_b0;
  puVar6 = local_1a8;
  puVar7 = local_198;
  local_138 = &local_b8;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_1c0 = param_8;
  local_1c8 = (float)param_7;
  local_1d0 = param_6;
  local_1d8 = param_5;
  local_1b8 = (longlong **)&local_138;
  FUN_1446106d4(param_1,local_1a0,local_198,param_4);
  if (0 < (int)uVar3) {
    uVar5 = 0;
    do {
      *(undefined4 *)(*param_10 + uVar5 * 4) =
           *(undefined4 *)(*local_138 + ((longlong)local_130 + uVar5) * 4);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446079fc FUN_1446079fc body=705 status=ok
// SIG undefined FUN_1446079fc(void)

void FUN_1446079fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,double *param_7,double *param_8,
                  undefined8 param_9,undefined1 param_10,longlong param_11,longlong *param_12)

{
  uint *puVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_148 [32];
  float local_128;
  undefined4 local_120;
  double *local_118;
  undefined8 local_110;
  undefined1 local_108;
  longlong **local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  longlong *local_d8;
  int local_d0;
  undefined4 local_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar3 = *(uint *)(param_1 + 8);
  local_c8 = 0;
  uStack_c0 = 0;
  local_f0 = (double)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_1448158c6(&local_c8,&local_f0,uVar3);
  local_d0 = 0;
  local_cc = (undefined4)uStack_c0;
  local_e0 = param_7[2] + param_8[2];
  local_e8 = param_7[1] + param_8[1];
  local_f0 = *param_7 + *param_8;
  fVar6 = (float)param_3 + -1000.0;
  local_108 = param_10;
  local_110 = param_9;
  local_120 = param_6;
  local_128 = fVar6;
  local_118 = &local_f0;
  local_100 = &local_d8;
  local_d8 = &local_c8;
  FUN_144610acd(param_1,param_2,param_3,param_4);
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      fVar2 = *(float *)(*local_d8 + ((longlong)local_d0 + uVar4) * 4);
      if ((fVar2 != fVar6) || (NAN(fVar2) || NAN(fVar6))) {
        lVar5 = *(longlong *)(param_11 + 0x10);
        if (*(longlong *)(param_11 + 0x10) == 0) {
          lVar5 = param_11;
        }
        puVar1 = (uint *)(lVar5 + (uVar4 >> 5 & 0x7ffffff) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != (uint)uVar4);
  }
  local_f0 = (double)((ulonglong)local_f0 & 0xffffffff00000000);
  FUN_1448158c6(&local_c8,&local_f0,uVar3);
  local_e0 = param_7[2] + param_8[2];
  local_e8 = param_7[1] + param_8[1];
  local_f0 = *param_7 + *param_8;
  local_108 = param_10;
  local_110 = param_9;
  local_120 = param_6;
  local_128 = (float)param_5;
  local_118 = &local_f0;
  local_100 = &local_d8;
  FUN_144610acd(param_1,param_2,param_3,param_4);
  if (0 < (int)uVar3) {
    uVar4 = 0;
    do {
      *(undefined4 *)(*param_12 + uVar4 * 4) = *(undefined4 *)(local_c8 + uVar4 * 4);
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144607cbe FUN_144607cbe body=977 status=ok
// SIG undefined FUN_144607cbe(void)

void FUN_144607cbe(longlong *param_1,undefined4 param_2,double *param_3,double *param_4,
                  undefined4 param_5,undefined4 param_6,byte param_7,longlong *param_8)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_318 [32];
  longlong *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  longlong local_2e8;
  undefined8 uStack_2e0;
  undefined **local_2d8;
  undefined8 local_2d0;
  undefined4 local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  undefined4 local_2a8;
  undefined4 local_2a4;
  uint local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong local_258;
  ulonglong uStack_250;
  undefined1 local_240 [32];
  undefined1 local_220 [64];
  longlong local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  uint local_198;
  uint local_194;
  longlong local_190;
  int local_188;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  uVar10 = *(uint *)(param_1 + 1);
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_1a0 = 0;
  FUN_1448156a8(&local_2e8,&local_1a0,uVar10);
  local_2f0 = 0;
  local_2ec = (undefined4)uStack_2e0;
  dVar4 = param_3[2];
  dVar5 = param_4[2];
  dVar6 = param_3[1];
  dVar7 = param_4[1];
  dVar8 = *param_3;
  dVar9 = *param_4;
  uVar11 = *(uint *)(param_1 + 1);
  local_2f8 = &local_2e8;
  memset(&local_1a0,0,0x100);
  FUN_1406ea1ca(&local_190,uVar11,1);
  if (0 < local_188) {
    lVar15 = 0;
    do {
      *(int *)(local_190 + 4 + lVar15 * 8) = (int)lVar15;
      *(int *)(local_190 + lVar15 * 8) = (int)lVar15;
      lVar15 = lVar15 + 1;
    } while (lVar15 < local_188);
  }
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar11);
  }
  local_198 = 0;
  if (local_194 != uVar11) {
    FUN_1447a8aa0(&local_1a0,uVar11);
  }
  uVar17 = uVar11;
  if (uVar11 != 0) {
    do {
      uVar14 = local_198;
      lVar15 = (longlong)(int)local_198;
      local_198 = local_198 + 1;
      if (local_194 < local_198) {
        FUN_1403e3958(&local_1a0,uVar14);
      }
      puVar1 = (undefined8 *)(CONCAT44(uStack_19c,local_1a0) + lVar15 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(CONCAT44(uStack_19c,local_1a0) + 0x10 + lVar15 * 0x18) = 0;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    uVar16 = 1;
    if (1 < (int)uVar11) {
      uVar16 = (ulonglong)uVar11;
    }
    lVar15 = 0;
    do {
      lVar12 = *param_1;
      fVar2 = *(float *)(lVar12 + 8 + lVar15);
      fVar3 = *(float *)(lVar12 + 4 + lVar15);
      lVar13 = CONCAT44(uStack_19c,local_1a0);
      *(double *)(lVar13 + lVar15 * 2) = (double)*(float *)(lVar12 + lVar15);
      *(double *)(lVar13 + 8 + lVar15 * 2) = (double)fVar3;
      *(double *)(lVar13 + 0x10 + lVar15 * 2) = (double)fVar2;
      lVar15 = lVar15 + 0xc;
    } while (uVar16 * 0xc != lVar15);
  }
  local_2d0 = 0;
  local_2d8 = &PTR_FUN_149f62c00;
  local_2a8 = param_5;
  local_2a4 = param_6;
  local_2a0 = (uint)param_7;
  local_278 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  uStack_270 = 0x8000000000;
  local_268 = 0xffffffff;
  local_2c8 = param_2;
  local_2c0 = dVar8 + dVar9;
  local_2b8 = dVar6 + dVar7;
  local_2b0 = dVar4 + dVar5;
  FUN_1407225a4(local_240,&local_1a0,&local_298,0);
  uStack_250 = uStack_250 & 0xffffffff00000000;
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(&local_298);
  FUN_146e90f54(&local_2d8,local_240,&local_2f8);
  if (local_1d0 != (undefined8 *)0x0) {
    (**(code **)*local_1d0)(local_1d0,1);
  }
  local_1d8 = 0;
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(local_220);
  FUN_1408bc892(&local_1a0);
  local_1a0 = 0;
  FUN_1448156a8(param_8,&local_1a0,uVar10);
  if (0 < (int)uVar10) {
    uVar16 = 0;
    do {
      *(undefined4 *)(*param_8 + uVar16 * 4) = *(undefined4 *)(local_2e8 + uVar16 * 4);
      uVar16 = uVar16 + 1;
    } while (uVar10 != uVar16);
  }
  if (local_2e8 != 0) {
    FUN_1400020a8();
  }
  if ((local_a0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144608090 FUN_144608090 body=805 status=ok
// SIG undefined FUN_144608090(void)

void FUN_144608090(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_288 [32];
  longlong local_268 [13];
  longlong *local_200;
  int local_1f8;
  int local_1f4;
  undefined1 local_1e0 [64];
  longlong local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  undefined4 local_160;
  undefined4 uStack_15c;
  uint local_158;
  uint local_154;
  longlong local_150;
  int local_148;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  uVar4 = *(uint *)(param_1 + 1);
  local_268[0] = 0;
  local_268[1] = 0;
  local_160 = 0;
  FUN_1448158c6(local_268,&local_160,uVar4);
  uVar5 = *(uint *)(param_1 + 1);
  memset(&local_160,0,0x100);
  FUN_1406ea1ca(&local_150,uVar5,1);
  if (0 < local_148) {
    lVar9 = 0;
    do {
      *(int *)(local_150 + 4 + lVar9 * 8) = (int)lVar9;
      *(int *)(local_150 + lVar9 * 8) = (int)lVar9;
      lVar9 = lVar9 + 1;
    } while (lVar9 < local_148);
  }
  if (-1 < (int)uVar5) {
    local_158 = 0;
    if (local_154 != uVar5) {
      FUN_1447a8aa0(&local_160,uVar5);
    }
    if (uVar5 != 0) {
      uVar11 = uVar5;
      do {
        uVar8 = local_158;
        lVar9 = (longlong)(int)local_158;
        local_158 = local_158 + 1;
        if (local_154 < local_158) {
          FUN_1403e3958(&local_160,uVar8);
        }
        puVar1 = (undefined8 *)(CONCAT44(uStack_15c,local_160) + lVar9 * 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(CONCAT44(uStack_15c,local_160) + 0x10 + lVar9 * 0x18) = 0;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar10 = 1;
      if (1 < (int)uVar5) {
        uVar10 = (ulonglong)uVar5;
      }
      lVar9 = 0;
      do {
        lVar6 = *param_1;
        fVar2 = *(float *)(lVar6 + 8 + lVar9);
        fVar3 = *(float *)(lVar6 + 4 + lVar9);
        lVar7 = CONCAT44(uStack_15c,local_160);
        *(double *)(lVar7 + lVar9 * 2) = (double)*(float *)(lVar6 + lVar9);
        *(double *)(lVar7 + 8 + lVar9 * 2) = (double)fVar3;
        *(double *)(lVar7 + 0x10 + lVar9 * 2) = (double)fVar2;
        lVar9 = lVar9 + 0xc;
      } while (uVar10 * 0xc != lVar9);
    }
    local_268[6] = 0;
    local_268[9] = 0;
    local_268[10] = 0;
    local_268[0xb] = 0;
    local_268[4] = 0;
    local_268[5] = 0;
    local_268[2] = 0;
    local_268[3] = 0;
    local_268[7] = 0x8000000000;
    local_268[8] = 0xffffffff;
    FUN_1407225a4(&local_200,&local_160,local_268 + 2,0);
    local_268[0xb] = local_268[0xb] & 0xffffffff00000000;
    if (local_268[10] != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0();
    if (0 < local_1f4) {
      lVar9 = 0;
      do {
        *(undefined4 *)
         (local_268[0] + (longlong)*(int *)(*local_200 + 4 + (local_1f8 + lVar9) * 8) * 4) = param_2
        ;
        lVar9 = lVar9 + 1;
      } while (local_1f4 != (int)lVar9);
    }
    if (local_190 != (undefined8 *)0x0) {
      (**(code **)*local_190)(local_190,1);
    }
    local_198 = 0;
    if (local_1a0 != 0) {
      FUN_1400020a8();
    }
    FUN_1402a03ba(local_1e0);
    FUN_1408bc892(&local_160);
    local_160 = 0;
    FUN_1448158c6(param_3,&local_160,uVar4);
    if (0 < (int)uVar4) {
      uVar10 = 0;
      do {
        *(undefined4 *)(*param_3 + uVar10 * 4) = *(undefined4 *)(local_268[0] + uVar10 * 4);
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    if (local_268[0] != 0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_288) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar5);
}



// FUNCTION 1446083b6 FUN_1446083b6 body=1037 status=ok
// SIG undefined FUN_1446083b6(void)

void FUN_1446083b6(longlong *param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  longlong *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  longlong local_298;
  undefined8 uStack_290;
  undefined **local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  ulonglong uStack_210;
  undefined1 local_200 [32];
  undefined1 local_1e0 [64];
  longlong local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  longlong local_160;
  uint local_158;
  uint local_154;
  longlong local_150;
  int local_148;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  uVar6 = *(uint *)(param_1 + 1);
  local_298 = 0;
  uStack_290 = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (uVar6 == 0) {
    uVar15 = 0;
    uStack_290._0_4_ = 0;
  }
  else {
    FUN_1447a8aa0(&local_298);
    uVar15 = uVar6;
    do {
      lVar16 = (longlong)(int)uStack_290;
      uVar13 = (int)uStack_290 + 1;
      uStack_290 = CONCAT44(uStack_290._4_4_,uVar13);
      if (uStack_290._4_4_ < uVar13) {
        FUN_1403e3958(&local_298);
      }
      puVar1 = (undefined8 *)(local_298 + lVar16 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(local_298 + 0x10 + lVar16 * 0x18) = 0;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    uVar15 = *(uint *)(param_1 + 1);
  }
  local_2a8 = &local_298;
  local_2a0 = 0;
  local_2c8 = *param_3;
  uStack_2c0 = param_3[1];
  local_2b8 = param_3[2];
  local_29c = (int)uStack_290;
  memset(&local_160,0,0x100);
  FUN_1406ea1ca(&local_150,uVar15,1);
  if (0 < local_148) {
    lVar16 = 0;
    do {
      *(int *)(local_150 + 4 + lVar16 * 8) = (int)lVar16;
      *(int *)(local_150 + lVar16 * 8) = (int)lVar16;
      lVar16 = lVar16 + 1;
    } while (lVar16 < local_148);
  }
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar15);
  }
  local_158 = 0;
  if (local_154 != uVar15) {
    FUN_1447a8aa0(&local_160,uVar15);
  }
  if (uVar15 != 0) {
    uVar13 = uVar15;
    do {
      uVar12 = local_158;
      lVar16 = (longlong)(int)local_158;
      local_158 = local_158 + 1;
      if (local_154 < local_158) {
        FUN_1403e3958(&local_160,uVar12);
      }
      puVar1 = (undefined8 *)(local_160 + lVar16 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(local_160 + 0x10 + lVar16 * 0x18) = 0;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar14 = 1;
    if (1 < (int)uVar15) {
      uVar14 = (ulonglong)uVar15;
    }
    lVar16 = 0;
    do {
      lVar8 = *param_1;
      fVar4 = *(float *)(lVar8 + 8 + lVar16);
      fVar5 = *(float *)(lVar8 + 4 + lVar16);
      *(double *)(local_160 + lVar16 * 2) = (double)*(float *)(lVar8 + lVar16);
      *(double *)(local_160 + 8 + lVar16 * 2) = (double)fVar5;
      *(double *)(local_160 + 0x10 + lVar16 * 2) = (double)fVar4;
      lVar16 = lVar16 + 0xc;
    } while (uVar14 * 0xc != lVar16);
  }
  local_280 = 0;
  local_288 = &PTR_FUN_149f62a30;
  local_270 = local_2c8;
  uStack_268 = uStack_2c0;
  local_260 = local_2b8;
  local_238 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  uStack_230 = 0x8000000000;
  local_228 = 0xffffffff;
  local_278 = param_2;
  FUN_1407225a4(local_200,&local_160,&local_258,0);
  uStack_210 = uStack_210 & 0xffffffff00000000;
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(&local_258);
  FUN_14051b8ce(&local_288,local_200,&local_2a8);
  if (local_190 != (undefined8 *)0x0) {
    (**(code **)*local_190)();
  }
  local_198 = 0;
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(local_1e0);
  FUN_1408bc892(&local_160);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(uint *)((longlong)param_4 + 0xc) != uVar6) {
    FUN_1447a8aa0(param_4);
  }
  uVar15 = uVar6;
  if (uVar6 != 0) {
    do {
      iVar7 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar7 + 1U) {
        FUN_1403e3958(param_4);
      }
      lVar16 = *param_4;
      puVar1 = (undefined8 *)(lVar16 + (longlong)iVar7 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar16 + 0x10 + (longlong)iVar7 * 0x18) = 0;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    uVar14 = 1;
    if (1 < (int)uVar6) {
      uVar14 = (ulonglong)uVar6;
    }
    lVar16 = 0;
    do {
      lVar8 = *param_4;
      *(undefined8 *)(lVar8 + 0x10 + lVar16) = *(undefined8 *)(local_298 + 0x10 + lVar16);
      puVar2 = (undefined4 *)(local_298 + lVar16);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(lVar8 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      lVar16 = lVar16 + 0x18;
    } while (uVar14 * 0x18 != lVar16);
  }
  if (local_298 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446087c4 FUN_1446087c4 body=1037 status=ok
// SIG undefined FUN_1446087c4(void)

void FUN_1446087c4(longlong *param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_2e8 [32];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  longlong *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  longlong local_298;
  undefined8 uStack_290;
  undefined **local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  ulonglong uStack_210;
  undefined1 local_200 [32];
  undefined1 local_1e0 [64];
  longlong local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  longlong local_160;
  uint local_158;
  uint local_154;
  longlong local_150;
  int local_148;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  uVar6 = *(uint *)(param_1 + 1);
  local_298 = 0;
  uStack_290 = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (uVar6 == 0) {
    uVar15 = 0;
    uStack_290._0_4_ = 0;
  }
  else {
    FUN_1447a8aa0(&local_298);
    uVar15 = uVar6;
    do {
      lVar16 = (longlong)(int)uStack_290;
      uVar13 = (int)uStack_290 + 1;
      uStack_290 = CONCAT44(uStack_290._4_4_,uVar13);
      if (uStack_290._4_4_ < uVar13) {
        FUN_1403e3958(&local_298);
      }
      puVar1 = (undefined8 *)(local_298 + lVar16 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(local_298 + 0x10 + lVar16 * 0x18) = 0;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    uVar15 = *(uint *)(param_1 + 1);
  }
  local_2a8 = &local_298;
  local_2a0 = 0;
  local_2c8 = *param_3;
  uStack_2c0 = param_3[1];
  local_2b8 = param_3[2];
  local_29c = (int)uStack_290;
  memset(&local_160,0,0x100);
  FUN_1406ea1ca(&local_150,uVar15,1);
  if (0 < local_148) {
    lVar16 = 0;
    do {
      *(int *)(local_150 + 4 + lVar16 * 8) = (int)lVar16;
      *(int *)(local_150 + lVar16 * 8) = (int)lVar16;
      lVar16 = lVar16 + 1;
    } while (lVar16 < local_148);
  }
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar15);
  }
  local_158 = 0;
  if (local_154 != uVar15) {
    FUN_1447a8aa0(&local_160,uVar15);
  }
  if (uVar15 != 0) {
    uVar13 = uVar15;
    do {
      uVar12 = local_158;
      lVar16 = (longlong)(int)local_158;
      local_158 = local_158 + 1;
      if (local_154 < local_158) {
        FUN_1403e3958(&local_160,uVar12);
      }
      puVar1 = (undefined8 *)(local_160 + lVar16 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(local_160 + 0x10 + lVar16 * 0x18) = 0;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar14 = 1;
    if (1 < (int)uVar15) {
      uVar14 = (ulonglong)uVar15;
    }
    lVar16 = 0;
    do {
      lVar8 = *param_1;
      fVar4 = *(float *)(lVar8 + 8 + lVar16);
      fVar5 = *(float *)(lVar8 + 4 + lVar16);
      *(double *)(local_160 + lVar16 * 2) = (double)*(float *)(lVar8 + lVar16);
      *(double *)(local_160 + 8 + lVar16 * 2) = (double)fVar5;
      *(double *)(local_160 + 0x10 + lVar16 * 2) = (double)fVar4;
      lVar16 = lVar16 + 0xc;
    } while (uVar14 * 0xc != lVar16);
  }
  local_280 = 0;
  local_288 = &PTR_FUN_149f62ae0;
  local_270 = local_2c8;
  uStack_268 = uStack_2c0;
  local_260 = local_2b8;
  local_238 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  uStack_230 = 0x8000000000;
  local_228 = 0xffffffff;
  local_278 = param_2;
  FUN_1407225a4(local_200,&local_160,&local_258,0);
  uStack_210 = uStack_210 & 0xffffffff00000000;
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(&local_258);
  FUN_14051bb1c(&local_288,local_200,&local_2a8);
  if (local_190 != (undefined8 *)0x0) {
    (**(code **)*local_190)();
  }
  local_198 = 0;
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(local_1e0);
  FUN_1408bc892(&local_160);
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(uint *)((longlong)param_4 + 0xc) != uVar6) {
    FUN_1447a8aa0(param_4);
  }
  uVar15 = uVar6;
  if (uVar6 != 0) {
    do {
      iVar7 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar7 + 1U) {
        FUN_1403e3958(param_4);
      }
      lVar16 = *param_4;
      puVar1 = (undefined8 *)(lVar16 + (longlong)iVar7 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar16 + 0x10 + (longlong)iVar7 * 0x18) = 0;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    uVar14 = 1;
    if (1 < (int)uVar6) {
      uVar14 = (ulonglong)uVar6;
    }
    lVar16 = 0;
    do {
      lVar8 = *param_4;
      *(undefined8 *)(lVar8 + 0x10 + lVar16) = *(undefined8 *)(local_298 + 0x10 + lVar16);
      puVar2 = (undefined4 *)(local_298 + lVar16);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(lVar8 + lVar16);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      lVar16 = lVar16 + 0x18;
    } while (uVar14 * 0x18 != lVar16);
  }
  if (local_298 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144608bd2 FUN_144608bd2 body=1005 status=ok
// SIG undefined FUN_144608bd2(void)

void FUN_144608bd2(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  int local_290;
  undefined4 local_28c;
  longlong local_288;
  undefined8 uStack_280;
  undefined **local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218;
  ulonglong uStack_210;
  undefined1 local_200 [32];
  undefined1 local_1e0 [64];
  longlong local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  longlong local_160;
  uint local_158;
  uint local_154;
  longlong local_150;
  int local_148;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  uVar6 = *(uint *)(param_1 + 1);
  local_288 = 0;
  uStack_280 = 0;
  if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (uVar6 == 0) {
    uVar15 = 0;
    uStack_280._0_4_ = 0;
  }
  else {
    FUN_1447a8aa0(&local_288);
    uVar15 = uVar6;
    do {
      lVar17 = (longlong)(int)uStack_280;
      uVar13 = (int)uStack_280 + 1;
      uStack_280 = CONCAT44(uStack_280._4_4_,uVar13);
      if (uStack_280._4_4_ < uVar13) {
        FUN_1403e3958(&local_288);
      }
      puVar1 = (undefined8 *)(local_288 + lVar17 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(local_288 + 0x10 + lVar17 * 0x18) = 0;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    uVar15 = *(uint *)(param_1 + 1);
  }
  local_298 = &local_288;
  local_290 = 0;
  local_28c = (int)uStack_280;
  memset(&local_160,0,0x100);
  FUN_1406ea1ca(&local_150,uVar15,1);
  if (0 < local_148) {
    lVar17 = 0;
    do {
      *(int *)(local_150 + 4 + lVar17 * 8) = (int)lVar17;
      *(int *)(local_150 + lVar17 * 8) = (int)lVar17;
      lVar17 = lVar17 + 1;
    } while (lVar17 < local_148);
  }
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar15);
  }
  local_158 = 0;
  if (local_154 != uVar15) {
    FUN_1447a8aa0(&local_160,uVar15);
  }
  if (uVar15 != 0) {
    uVar13 = uVar15;
    do {
      uVar12 = local_158;
      lVar17 = (longlong)(int)local_158;
      local_158 = local_158 + 1;
      if (local_154 < local_158) {
        FUN_1403e3958(&local_160,uVar12);
      }
      puVar1 = (undefined8 *)(local_160 + lVar17 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(local_160 + 0x10 + lVar17 * 0x18) = 0;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar14 = 1;
    if (1 < (int)uVar15) {
      uVar14 = (ulonglong)uVar15;
    }
    lVar17 = 0;
    do {
      lVar8 = *param_1;
      fVar4 = *(float *)(lVar8 + 8 + lVar17);
      fVar5 = *(float *)(lVar8 + 4 + lVar17);
      *(double *)(local_160 + lVar17 * 2) = (double)*(float *)(lVar8 + lVar17);
      *(double *)(local_160 + 8 + lVar17 * 2) = (double)fVar5;
      *(double *)(local_160 + 0x10 + lVar17 * 2) = (double)fVar4;
      lVar17 = lVar17 + 0xc;
    } while (uVar14 * 0xc != lVar17);
  }
  local_268 = 0;
  local_270 = &PTR_FUN_149f615f0;
  local_238 = 0;
  uStack_220 = 0;
  local_218 = 0;
  uStack_210 = 0;
  local_248 = 0;
  uStack_240 = 0;
  local_258 = 0;
  uStack_250 = 0;
  uStack_230 = 0x8000000000;
  local_228 = 0xffffffff;
  local_260 = param_2;
  FUN_1407225a4(local_200,&local_160,&local_258,0);
  uStack_210 = uStack_210 & 0xffffffff00000000;
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(&local_258);
  FUN_14051bc40(&local_270,local_200);
  if (local_190 != (undefined8 *)0x0) {
    (**(code **)*local_190)(local_190,1);
  }
  local_198 = 0;
  if (local_1a0 != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(local_1e0);
  FUN_1408bc892(&local_160);
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(uint *)((longlong)param_3 + 0xc) != uVar6) {
    FUN_1447a8aa0(param_3,uVar6);
  }
  uVar15 = uVar6;
  if (uVar6 != 0) {
    do {
      iVar7 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar7 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
        FUN_1403e3958(param_3,iVar7);
      }
      lVar17 = *param_3;
      puVar1 = (undefined8 *)(lVar17 + (longlong)iVar7 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(lVar17 + 0x10 + (longlong)iVar7 * 0x18) = 0;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    uVar14 = 1;
    if (1 < (int)uVar6) {
      uVar14 = (ulonglong)uVar6;
    }
    lVar17 = 0;
    do {
      lVar16 = *local_298 + (longlong)local_290 * 0x18;
      lVar8 = *param_3;
      *(undefined8 *)(lVar8 + 0x10 + lVar17) = *(undefined8 *)(lVar17 + 0x10 + lVar16);
      puVar2 = (undefined4 *)(lVar17 + lVar16);
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar3 = (undefined4 *)(lVar8 + lVar17);
      *puVar3 = *puVar2;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      lVar17 = lVar17 + 0x18;
    } while (uVar14 * 0x18 != lVar17);
  }
  if (local_288 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144608fc0 FUN_144608fc0 body=880 status=ok
// SIG undefined FUN_144608fc0(void)

void FUN_144608fc0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                  longlong *param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined1 auStack_328 [32];
  longlong *local_308;
  int local_300;
  undefined4 local_2fc;
  longlong local_2f8;
  undefined8 uStack_2f0;
  undefined **local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined8 local_2c8 [12];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_228;
  ulonglong uStack_220;
  undefined1 local_210 [32];
  undefined1 local_1f0 [64];
  longlong local_1b0;
  undefined4 local_1a8;
  undefined8 *local_1a0;
  undefined4 local_170;
  undefined4 uStack_16c;
  uint local_168;
  uint local_164;
  longlong local_160;
  int local_158;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_328;
  uVar3 = *(uint *)(param_1 + 1);
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_170 = 0;
  FUN_1448158c6(&local_2f8,&local_170,uVar3);
  local_300 = 0;
  local_2fc = (undefined4)uStack_2f0;
  uVar4 = *(uint *)(param_1 + 1);
  local_308 = &local_2f8;
  memset(&local_170,0,0x100);
  FUN_1406ea1ca(&local_160,uVar4,1);
  if (0 < local_158) {
    lVar8 = 0;
    do {
      *(int *)(local_160 + 4 + lVar8 * 8) = (int)lVar8;
      *(int *)(local_160 + lVar8 * 8) = (int)lVar8;
      lVar8 = lVar8 + 1;
    } while (lVar8 < local_158);
  }
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar4);
  }
  local_168 = 0;
  if (local_164 != uVar4) {
    FUN_1447a8aa0(&local_170,uVar4);
  }
  if (uVar4 != 0) {
    uVar10 = uVar4;
    do {
      uVar7 = local_168;
      lVar8 = (longlong)(int)local_168;
      local_168 = local_168 + 1;
      if (local_164 < local_168) {
        FUN_1403e3958(&local_170,uVar7);
      }
      puVar11 = (undefined8 *)(CONCAT44(uStack_16c,local_170) + lVar8 * 0x18);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined8 *)(CONCAT44(uStack_16c,local_170) + 0x10 + lVar8 * 0x18) = 0;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
    uVar9 = 1;
    if (1 < (int)uVar4) {
      uVar9 = (ulonglong)uVar4;
    }
    lVar8 = 0;
    do {
      lVar5 = *param_1;
      fVar1 = *(float *)(lVar5 + 8 + lVar8);
      fVar2 = *(float *)(lVar5 + 4 + lVar8);
      lVar6 = CONCAT44(uStack_16c,local_170);
      *(double *)(lVar6 + lVar8 * 2) = (double)*(float *)(lVar5 + lVar8);
      *(double *)(lVar6 + 8 + lVar8 * 2) = (double)fVar2;
      *(double *)(lVar6 + 0x10 + lVar8 * 2) = (double)fVar1;
      lVar8 = lVar8 + 0xc;
    } while (uVar9 * 0xc != lVar8);
  }
  puVar11 = local_2c8;
  for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar11 = *param_4;
    param_4 = param_4 + 1;
    puVar11 = puVar11 + 1;
  }
  local_2e0 = 0;
  local_2e8 = &PTR_FUN_149f61590;
  local_248 = 0;
  uStack_230 = 0;
  local_228 = 0;
  uStack_220 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  uStack_240 = 0x8000000000;
  local_238 = 0xffffffff;
  local_2d8 = param_2;
  local_2d4 = param_3;
  FUN_1407225a4(local_210,&local_170,&local_268,0);
  uStack_220 = uStack_220 & 0xffffffff00000000;
  if (local_228 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(&local_268);
  FUN_146e94e44(&local_2e8,local_210,&local_308);
  if (local_1a0 != (undefined8 *)0x0) {
    (**(code **)*local_1a0)(local_1a0,1);
  }
  local_1a8 = 0;
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(local_1f0);
  FUN_1408bc892(&local_170);
  local_170 = 0;
  FUN_1448158c6(param_5,&local_170,uVar3);
  if (0 < (int)uVar3) {
    uVar9 = 0;
    do {
      *(undefined4 *)(*param_5 + uVar9 * 4) =
           *(undefined4 *)(*local_308 + ((longlong)local_300 + uVar9) * 4);
      uVar9 = uVar9 + 1;
    } while (uVar3 != uVar9);
  }
  if (local_2f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144609331 FUN_144609331 body=801 status=ok
// SIG undefined FUN_144609331(void)

void FUN_144609331(longlong *param_1,undefined4 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 auStack_288 [32];
  longlong local_268 [13];
  longlong *local_200;
  int local_1f8;
  int local_1f4;
  undefined1 local_1e0 [64];
  longlong local_1a0;
  undefined4 local_198;
  undefined8 *local_190;
  undefined4 local_160;
  undefined4 uStack_15c;
  uint local_158;
  uint local_154;
  longlong local_150;
  int local_148;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  uVar4 = *(uint *)(param_1 + 1);
  local_268[0] = 0;
  local_268[1] = 0;
  local_160 = 0;
  FUN_1448156a8(local_268,&local_160,uVar4);
  uVar5 = *(uint *)(param_1 + 1);
  memset(&local_160,0,0x100);
  FUN_1406ea1ca(&local_150,uVar5,1);
  if (0 < local_148) {
    lVar9 = 0;
    do {
      *(int *)(local_150 + 4 + lVar9 * 8) = (int)lVar9;
      *(int *)(local_150 + lVar9 * 8) = (int)lVar9;
      lVar9 = lVar9 + 1;
    } while (lVar9 < local_148);
  }
  if (-1 < (int)uVar5) {
    local_158 = 0;
    if (local_154 != uVar5) {
      FUN_1447a8aa0(&local_160,uVar5);
    }
    if (uVar5 != 0) {
      uVar11 = uVar5;
      do {
        uVar8 = local_158;
        lVar9 = (longlong)(int)local_158;
        local_158 = local_158 + 1;
        if (local_154 < local_158) {
          FUN_1403e3958(&local_160,uVar8);
        }
        puVar1 = (undefined8 *)(CONCAT44(uStack_15c,local_160) + lVar9 * 0x18);
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined8 *)(CONCAT44(uStack_15c,local_160) + 0x10 + lVar9 * 0x18) = 0;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
      uVar10 = 1;
      if (1 < (int)uVar5) {
        uVar10 = (ulonglong)uVar5;
      }
      lVar9 = 0;
      do {
        lVar6 = *param_1;
        fVar2 = *(float *)(lVar6 + 8 + lVar9);
        fVar3 = *(float *)(lVar6 + 4 + lVar9);
        lVar7 = CONCAT44(uStack_15c,local_160);
        *(double *)(lVar7 + lVar9 * 2) = (double)*(float *)(lVar6 + lVar9);
        *(double *)(lVar7 + 8 + lVar9 * 2) = (double)fVar3;
        *(double *)(lVar7 + 0x10 + lVar9 * 2) = (double)fVar2;
        lVar9 = lVar9 + 0xc;
      } while (uVar10 * 0xc != lVar9);
    }
    local_268[6] = 0;
    local_268[9] = 0;
    local_268[10] = 0;
    local_268[0xb] = 0;
    local_268[4] = 0;
    local_268[5] = 0;
    local_268[2] = 0;
    local_268[3] = 0;
    local_268[7] = 0x8000000000;
    local_268[8] = 0xffffffff;
    FUN_1407225a4(&local_200,&local_160,local_268 + 2,0);
    local_268[0xb] = local_268[0xb] & 0xffffffff00000000;
    if (local_268[10] != 0) {
      FUN_1400020a8();
    }
    FUN_1401712c0();
    if (0 < local_1f4) {
      lVar9 = 0;
      do {
        *(undefined4 *)
         (local_268[0] + (longlong)*(int *)(*local_200 + 4 + (local_1f8 + lVar9) * 8) * 4) = param_2
        ;
        lVar9 = lVar9 + 1;
      } while (local_1f4 != (int)lVar9);
    }
    if (local_190 != (undefined8 *)0x0) {
      (**(code **)*local_190)(local_190,1);
    }
    local_198 = 0;
    if (local_1a0 != 0) {
      FUN_1400020a8();
    }
    FUN_1402a03ba(local_1e0);
    FUN_1408bc892(&local_160);
    local_160 = 0;
    FUN_1448156a8(param_3,&local_160,uVar4);
    if (0 < (int)uVar4) {
      uVar10 = 0;
      do {
        *(undefined4 *)(*param_3 + uVar10 * 4) = *(undefined4 *)(local_268[0] + uVar10 * 4);
        uVar10 = uVar10 + 1;
      } while (uVar4 != uVar10);
    }
    if (local_268[0] != 0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_288) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar5);
}



// FUNCTION 144609653 FUN_144609653 body=1049 status=ok
// SIG undefined FUN_144609653(void)

void FUN_144609653(longlong *param_1,undefined4 param_2,double *param_3,double *param_4,
                  undefined4 param_5,undefined4 param_6,byte param_7,byte param_8,longlong *param_9)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 auStack_338 [32];
  longlong *local_318;
  int local_310;
  undefined4 local_30c;
  longlong local_308;
  undefined8 uStack_300;
  undefined **local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  uint local_2c0;
  uint local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  longlong local_278;
  ulonglong uStack_270;
  undefined1 local_260 [32];
  undefined1 local_240 [64];
  longlong local_200;
  undefined4 local_1f8;
  undefined8 *local_1f0;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  uint local_1b8;
  uint local_1b4;
  longlong local_1b0;
  int local_1a8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  uVar10 = *(uint *)(param_1 + 1);
  local_308 = 0;
  uStack_300 = 0;
  local_1c0 = 0;
  FUN_1448158c6(&local_308,&local_1c0,uVar10);
  local_310 = 0;
  local_30c = (undefined4)uStack_300;
  dVar4 = param_3[2];
  dVar5 = param_4[2];
  dVar6 = param_3[1];
  dVar7 = param_4[1];
  dVar8 = *param_3;
  dVar9 = *param_4;
  uVar11 = *(uint *)(param_1 + 1);
  local_318 = &local_308;
  memset(&local_1c0,0,0x100);
  FUN_1406ea1ca(&local_1b0,uVar11,1);
  if (0 < local_1a8) {
    lVar15 = 0;
    do {
      *(int *)(local_1b0 + 4 + lVar15 * 8) = (int)lVar15;
      *(int *)(local_1b0 + lVar15 * 8) = (int)lVar15;
      lVar15 = lVar15 + 1;
    } while (lVar15 < local_1a8);
  }
  if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar11);
  }
  local_1b8 = 0;
  if (local_1b4 != uVar11) {
    FUN_1447a8aa0(&local_1c0,uVar11);
  }
  if (uVar11 != 0) {
    uVar17 = uVar11;
    do {
      uVar14 = local_1b8;
      lVar15 = (longlong)(int)local_1b8;
      local_1b8 = local_1b8 + 1;
      if (local_1b4 < local_1b8) {
        FUN_1403e3958(&local_1c0,uVar14);
      }
      puVar1 = (undefined8 *)(CONCAT44(uStack_1bc,local_1c0) + lVar15 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(CONCAT44(uStack_1bc,local_1c0) + 0x10 + lVar15 * 0x18) = 0;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    uVar16 = 1;
    if (1 < (int)uVar11) {
      uVar16 = (ulonglong)uVar11;
    }
    lVar15 = 0;
    do {
      lVar12 = *param_1;
      fVar2 = *(float *)(lVar12 + 8 + lVar15);
      fVar3 = *(float *)(lVar12 + 4 + lVar15);
      lVar13 = CONCAT44(uStack_1bc,local_1c0);
      *(double *)(lVar13 + lVar15 * 2) = (double)*(float *)(lVar12 + lVar15);
      *(double *)(lVar13 + 8 + lVar15 * 2) = (double)fVar3;
      *(double *)(lVar13 + 0x10 + lVar15 * 2) = (double)fVar2;
      lVar15 = lVar15 + 0xc;
    } while (uVar16 * 0xc != lVar15);
  }
  local_2f0 = 0;
  local_2f8 = &PTR_FUN_149f61470;
  local_2c8 = param_5;
  local_2c4 = param_6;
  local_2c0 = (uint)param_7;
  local_2bc = (uint)param_8;
  local_298 = 0;
  uStack_280 = 0;
  local_278 = 0;
  uStack_270 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  local_2b8 = 0;
  uStack_2b0 = 0;
  uStack_290 = 0x8000000000;
  local_288 = 0xffffffff;
  local_2e8 = param_2;
  local_2e0 = dVar8 + dVar9;
  local_2d8 = dVar6 + dVar7;
  local_2d0 = dVar4 + dVar5;
  FUN_1407225a4(local_260,&local_1c0,&local_2b8,0);
  uStack_270 = uStack_270 & 0xffffffff00000000;
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(&local_2b8);
  FUN_146e9162e(&local_2f8,local_260,&local_318);
  if (local_1f0 != (undefined8 *)0x0) {
    (**(code **)*local_1f0)(local_1f0,1);
  }
  local_1f8 = 0;
  if (local_200 != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(local_240);
  FUN_1408bc892(&local_1c0);
  local_1c0 = 0;
  FUN_1448158c6(param_9,&local_1c0,uVar10);
  if (0 < (int)uVar10) {
    uVar16 = 0;
    do {
      *(undefined4 *)(*param_9 + uVar16 * 4) =
           *(undefined4 *)(*local_318 + ((longlong)local_310 + uVar16) * 4);
      uVar16 = uVar16 + 1;
    } while (uVar10 != uVar16);
  }
  if (local_308 != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144609a6d FUN_144609a6d body=602 status=ok
// SIG undefined FUN_144609a6d(void)

void FUN_144609a6d(longlong *param_1,longlong *param_2,longlong *param_3,uint param_4,
                  undefined1 param_5,float param_6,char param_7)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  float fVar4;
  
  switch(param_5) {
  case 0:
    if ((int)param_4 < 1) {
      return;
    }
    uVar2 = 0;
    do {
      *(float *)(*param_3 + uVar2 * 4) =
           *(float *)(*param_1 + uVar2 * 4) * *(float *)(*param_2 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
    break;
  case 1:
    if (param_7 == '\0') {
      if ((int)param_4 < 1) {
        return;
      }
      lVar3 = *param_2;
      uVar2 = 0;
      do {
        fVar4 = *(float *)(lVar3 + uVar2 * 4);
        if (1e-08 < ABS(fVar4)) {
          *(float *)(*param_3 + uVar2 * 4) = *(float *)(*param_1 + uVar2 * 4) / fVar4;
          lVar3 = *param_2;
        }
        uVar2 = uVar2 + 1;
      } while (param_4 != uVar2);
    }
    else {
      if ((int)param_4 < 1) {
        return;
      }
      lVar3 = *param_1;
      uVar2 = 0;
      do {
        fVar4 = *(float *)(lVar3 + uVar2 * 4);
        if (1e-08 < ABS(fVar4)) {
          *(float *)(*param_3 + uVar2 * 4) = *(float *)(*param_2 + uVar2 * 4) / fVar4;
          lVar3 = *param_1;
        }
        uVar2 = uVar2 + 1;
      } while (param_4 != uVar2);
    }
    break;
  case 2:
    if ((int)param_4 < 1) {
      return;
    }
    uVar2 = 0;
    do {
      *(float *)(*param_3 + uVar2 * 4) =
           *(float *)(*param_1 + uVar2 * 4) + *(float *)(*param_2 + uVar2 * 4);
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
    break;
  case 3:
    if (param_7 == '\0') {
      if ((int)param_4 < 1) {
        return;
      }
      uVar2 = 0;
      do {
        *(float *)(*param_3 + uVar2 * 4) =
             *(float *)(*param_1 + uVar2 * 4) - *(float *)(*param_2 + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (param_4 != uVar2);
    }
    else {
      if ((int)param_4 < 1) {
        return;
      }
      uVar2 = 0;
      do {
        *(float *)(*param_3 + uVar2 * 4) =
             *(float *)(*param_2 + uVar2 * 4) - *(float *)(*param_1 + uVar2 * 4);
        uVar2 = uVar2 + 1;
      } while (param_4 != uVar2);
    }
    break;
  case 4:
    if ((int)param_4 < 1) {
      return;
    }
    uVar2 = 0;
    do {
      fVar4 = *(float *)(*param_1 + uVar2 * 4);
      fVar1 = *(float *)(*param_2 + uVar2 * 4);
      if (fVar1 <= fVar4) {
        fVar4 = fVar1;
      }
      *(float *)(*param_3 + uVar2 * 4) = fVar4;
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
    break;
  case 5:
    if ((int)param_4 < 1) {
      return;
    }
    uVar2 = 0;
    do {
      fVar4 = *(float *)(*param_1 + uVar2 * 4);
      fVar1 = *(float *)(*param_2 + uVar2 * 4);
      if (fVar4 <= fVar1) {
        fVar4 = fVar1;
      }
      *(float *)(*param_3 + uVar2 * 4) = fVar4;
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
  }
  if ((0 < (int)param_4) && ((param_6 != 1.0 || (NAN(param_6))))) {
    uVar2 = 0;
    do {
      *(float *)(*param_3 + uVar2 * 4) = *(float *)(*param_3 + uVar2 * 4) * param_6;
      uVar2 = uVar2 + 1;
    } while (param_4 != uVar2);
  }
  return;
}



// FUNCTION 144609cc7 FUN_144609cc7 body=1548 status=ok
// SIG undefined FUN_144609cc7(void)

void FUN_144609cc7(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  uint param_5,undefined1 param_6,float param_7,char param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  
  if (param_3 == (longlong *)0x0 || param_2 == (longlong *)0x0) {
    if (param_2 == (longlong *)0x0) {
      if (param_3 != (longlong *)0x0 && 0 < (int)param_5) {
        lVar12 = 0;
        do {
          lVar14 = *param_3;
          lVar8 = *param_4;
          *(undefined8 *)(lVar8 + 0x10 + lVar12) = *(undefined8 *)(lVar14 + 0x10 + lVar12);
          puVar1 = (undefined8 *)(lVar14 + lVar12);
          uVar11 = puVar1[1];
          puVar2 = (undefined8 *)(lVar8 + lVar12);
          *puVar2 = *puVar1;
          puVar2[1] = uVar11;
          lVar12 = lVar12 + 0x18;
        } while ((ulonglong)param_5 * 0x18 != lVar12);
      }
    }
    else {
      if ((int)param_5 < 1) {
        return;
      }
      lVar12 = 0;
      do {
        lVar14 = *param_2;
        lVar8 = *param_4;
        *(undefined8 *)(lVar8 + 0x10 + lVar12) = *(undefined8 *)(lVar14 + 0x10 + lVar12);
        puVar1 = (undefined8 *)(lVar14 + lVar12);
        uVar11 = puVar1[1];
        puVar2 = (undefined8 *)(lVar8 + lVar12);
        *puVar2 = *puVar1;
        puVar2[1] = uVar11;
        lVar12 = lVar12 + 0x18;
      } while ((ulonglong)param_5 * 0x18 != lVar12);
    }
  }
  else {
    switch(param_6) {
    case 0:
      if ((int)param_5 < 1) {
        return;
      }
      lVar12 = 0;
      do {
        lVar14 = *param_2;
        lVar8 = *param_3;
        dVar15 = *(double *)(lVar14 + 0x10 + lVar12);
        dVar3 = *(double *)(lVar8 + 0x10 + lVar12);
        dVar4 = *(double *)(lVar14 + 8 + lVar12);
        dVar5 = *(double *)(lVar8 + 8 + lVar12);
        lVar9 = *param_4;
        *(double *)(lVar9 + lVar12) = *(double *)(lVar14 + lVar12) * *(double *)(lVar8 + lVar12);
        *(double *)(lVar9 + 8 + lVar12) = dVar4 * dVar5;
        *(double *)(lVar9 + 0x10 + lVar12) = dVar15 * dVar3;
        lVar12 = lVar12 + 0x18;
      } while ((ulonglong)param_5 * 0x18 != lVar12);
      break;
    case 1:
      if (param_8 == '\0') {
        if ((int)param_5 < 1) {
          return;
        }
        lVar12 = *param_3;
        lVar14 = 0;
        do {
          if (((1e-08 < ABS(*(double *)(lVar12 + lVar14))) &&
              (dVar15 = *(double *)(lVar12 + 8 + lVar14), 1e-08 < ABS(dVar15))) &&
             (dVar3 = *(double *)(lVar12 + 0x10 + lVar14), 1e-08 < ABS(dVar3))) {
            lVar8 = *param_2;
            dVar4 = *(double *)(lVar8 + 0x10 + lVar14);
            dVar5 = *(double *)(lVar8 + 8 + lVar14);
            lVar9 = *param_4;
            *(double *)(lVar9 + lVar14) = *(double *)(lVar8 + lVar14) / *(double *)(lVar12 + lVar14)
            ;
            *(double *)(lVar9 + 8 + lVar14) = dVar5 / dVar15;
            *(double *)(lVar9 + 0x10 + lVar14) = dVar4 / dVar3;
            lVar12 = *param_3;
          }
          lVar14 = lVar14 + 0x18;
        } while ((ulonglong)param_5 * 0x18 != lVar14);
      }
      else {
        if ((int)param_5 < 1) {
          return;
        }
        lVar12 = *param_2;
        lVar14 = 0;
        do {
          if (((1e-08 < ABS(*(double *)(lVar12 + lVar14))) &&
              (dVar15 = *(double *)(lVar12 + 8 + lVar14), 1e-08 < ABS(dVar15))) &&
             (dVar3 = *(double *)(lVar12 + 0x10 + lVar14), 1e-08 < ABS(dVar3))) {
            lVar8 = *param_3;
            dVar4 = *(double *)(lVar8 + 0x10 + lVar14);
            dVar5 = *(double *)(lVar8 + 8 + lVar14);
            lVar9 = *param_4;
            *(double *)(lVar9 + lVar14) = *(double *)(lVar8 + lVar14) / *(double *)(lVar12 + lVar14)
            ;
            *(double *)(lVar9 + 8 + lVar14) = dVar5 / dVar15;
            *(double *)(lVar9 + 0x10 + lVar14) = dVar4 / dVar3;
            lVar12 = *param_2;
          }
          lVar14 = lVar14 + 0x18;
        } while ((ulonglong)param_5 * 0x18 != lVar14);
      }
      break;
    case 2:
      if ((int)param_5 < 1) {
        return;
      }
      lVar12 = 0;
      do {
        lVar14 = *param_2;
        lVar8 = *param_3;
        dVar15 = *(double *)(lVar14 + 0x10 + lVar12);
        dVar3 = *(double *)(lVar8 + 0x10 + lVar12);
        dVar4 = *(double *)(lVar14 + 8 + lVar12);
        dVar5 = *(double *)(lVar8 + 8 + lVar12);
        lVar9 = *param_4;
        *(double *)(lVar9 + lVar12) = *(double *)(lVar14 + lVar12) + *(double *)(lVar8 + lVar12);
        *(double *)(lVar9 + 8 + lVar12) = dVar4 + dVar5;
        *(double *)(lVar9 + 0x10 + lVar12) = dVar15 + dVar3;
        lVar12 = lVar12 + 0x18;
      } while ((ulonglong)param_5 * 0x18 != lVar12);
      break;
    case 3:
      if (param_8 == '\0') {
        if ((int)param_5 < 1) {
          return;
        }
        lVar12 = 0;
        do {
          lVar14 = *param_2;
          lVar8 = *param_3;
          dVar15 = *(double *)(lVar14 + 0x10 + lVar12);
          dVar3 = *(double *)(lVar8 + 0x10 + lVar12);
          dVar4 = *(double *)(lVar14 + 8 + lVar12);
          dVar5 = *(double *)(lVar8 + 8 + lVar12);
          lVar9 = *param_4;
          *(double *)(lVar9 + lVar12) = *(double *)(lVar14 + lVar12) - *(double *)(lVar8 + lVar12);
          *(double *)(lVar9 + 8 + lVar12) = dVar4 - dVar5;
          *(double *)(lVar9 + 0x10 + lVar12) = dVar15 - dVar3;
          lVar12 = lVar12 + 0x18;
        } while ((ulonglong)param_5 * 0x18 != lVar12);
      }
      else {
        if ((int)param_5 < 1) {
          return;
        }
        lVar12 = 0;
        do {
          lVar14 = *param_3;
          lVar8 = *param_2;
          dVar15 = *(double *)(lVar14 + 0x10 + lVar12);
          dVar3 = *(double *)(lVar8 + 0x10 + lVar12);
          dVar4 = *(double *)(lVar14 + 8 + lVar12);
          dVar5 = *(double *)(lVar8 + 8 + lVar12);
          lVar9 = *param_4;
          *(double *)(lVar9 + lVar12) = *(double *)(lVar14 + lVar12) - *(double *)(lVar8 + lVar12);
          *(double *)(lVar9 + 8 + lVar12) = dVar4 - dVar5;
          *(double *)(lVar9 + 0x10 + lVar12) = dVar15 - dVar3;
          lVar12 = lVar12 + 0x18;
        } while ((ulonglong)param_5 * 0x18 != lVar12);
      }
      break;
    case 4:
      if (param_8 == '\0') {
        if ((int)param_5 < 1) {
          return;
        }
        lVar12 = 0;
        do {
          lVar14 = *param_2;
          lVar8 = *param_3;
          dVar15 = *(double *)(lVar8 + lVar12);
          dVar3 = *(double *)(lVar8 + 8 + lVar12);
          dVar4 = *(double *)(lVar14 + lVar12);
          dVar5 = *(double *)(lVar14 + 8 + lVar12);
          dVar6 = *(double *)(lVar14 + 0x10 + lVar12);
          dVar7 = *(double *)(lVar8 + 0x10 + lVar12);
          lVar14 = *param_4;
          *(double *)(lVar14 + lVar12) = dVar5 * dVar7 - dVar3 * dVar6;
          *(double *)(lVar14 + 8 + lVar12) = dVar15 * dVar6 - dVar4 * dVar7;
          *(double *)(lVar14 + 0x10 + lVar12) = dVar4 * dVar3 - dVar15 * dVar5;
          lVar12 = lVar12 + 0x18;
        } while ((ulonglong)param_5 * 0x18 != lVar12);
      }
      else {
        if ((int)param_5 < 1) {
          return;
        }
        lVar12 = 0;
        do {
          lVar14 = *param_3;
          lVar8 = *param_2;
          dVar15 = *(double *)(lVar8 + lVar12);
          dVar3 = *(double *)(lVar8 + 8 + lVar12);
          dVar4 = *(double *)(lVar14 + lVar12);
          dVar5 = *(double *)(lVar14 + 8 + lVar12);
          dVar6 = *(double *)(lVar14 + 0x10 + lVar12);
          dVar7 = *(double *)(lVar8 + 0x10 + lVar12);
          lVar14 = *param_4;
          *(double *)(lVar14 + lVar12) = dVar5 * dVar7 - dVar3 * dVar6;
          *(double *)(lVar14 + 8 + lVar12) = dVar15 * dVar6 - dVar4 * dVar7;
          *(double *)(lVar14 + 0x10 + lVar12) = dVar4 * dVar3 - dVar15 * dVar5;
          lVar12 = lVar12 + 0x18;
        } while ((ulonglong)param_5 * 0x18 != lVar12);
      }
    }
  }
  bVar10 = 0 < (int)param_5;
  if (0 < (int)param_5 && param_1 != (longlong *)0x0) {
    lVar12 = 0x10;
    uVar13 = 0;
    do {
      lVar14 = *param_4;
      dVar15 = (double)*(float *)(*param_1 + uVar13 * 4);
      *(double *)(lVar14 + -0x10 + lVar12) = *(double *)(lVar14 + -0x10 + lVar12) * dVar15;
      *(double *)(lVar14 + -8 + lVar12) = *(double *)(lVar14 + -8 + lVar12) * dVar15;
      *(double *)(lVar14 + lVar12) = dVar15 * *(double *)(lVar14 + lVar12);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x18;
    } while (param_5 != uVar13);
    bVar10 = true;
  }
  if (!(bool)(bVar10 ^ 1U | param_7 == 1.0)) {
    dVar15 = (double)param_7;
    uVar13 = (ulonglong)param_5;
    lVar12 = 0x10;
    do {
      lVar14 = *param_4;
      *(double *)(lVar14 + -0x10 + lVar12) = *(double *)(lVar14 + -0x10 + lVar12) * dVar15;
      *(double *)(lVar14 + -8 + lVar12) = *(double *)(lVar14 + -8 + lVar12) * dVar15;
      *(double *)(lVar14 + lVar12) = *(double *)(lVar14 + lVar12) * dVar15;
      lVar12 = lVar12 + 0x18;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  return;
}



// FUNCTION 14460a2d3 FUN_14460a2d3 body=55 status=ok
// SIG undefined FUN_14460a2d3(void)

void FUN_14460a2d3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25030 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25030 = FUN_14171c317(FUN_146753c14,uVar1,L"EMakeBoxDataTypeEnum");
  }
  return;
}



// FUNCTION 14460a30a FUN_14460a30a body=55 status=ok
// SIG undefined FUN_14460a30a(void)

void FUN_14460a30a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25618 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25618 = FUN_14171c317(FUN_146756098,uVar1,L"EMathConstantsEnum");
  }
  return;
}



// FUNCTION 14460a341 FUN_14460a341 body=55 status=ok
// SIG undefined FUN_14460a341(void)

void FUN_14460a341(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25738 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25738 = FUN_14171c317(FUN_14675673a,uVar1,L"EMeshBooleanOperationEnum");
  }
  return;
}



// FUNCTION 14460a378 FUN_14460a378 body=55 status=ok
// SIG undefined FUN_14460a378(void)

void FUN_14460a378(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25810 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25810 = FUN_14171c317(FUN_146756c1a,uVar1,L"EBoxLengthMeasurementMethod");
  }
  return;
}



// FUNCTION 14460a3af FUN_14460a3af body=55 status=ok
// SIG undefined FUN_14460a3af(void)

void FUN_14460a3af(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25900 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25900 = FUN_14171c317(FUN_146757190,uVar1,L"ERotationOrderEnum");
  }
  return;
}



// FUNCTION 14460a3e6 FUN_14460a3e6 body=55 status=ok
// SIG undefined FUN_14460a3e6(void)

void FUN_14460a3e6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25960 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25960 = FUN_14171c317(FUN_146757382,uVar1,L"ECompareOperationEnum");
  }
  return;
}



// FUNCTION 14460a41d FUN_14460a41d body=55 status=ok
// SIG undefined FUN_14460a41d(void)

void FUN_14460a41d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a08 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a08 = FUN_14171c317(FUN_146757736,uVar1,L"EAnchorStateEnum");
  }
  return;
}



// FUNCTION 14460a454 FUN_14460a454 body=55 status=ok
// SIG undefined FUN_14460a454(void)

void FUN_14460a454(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a38 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a38 = FUN_14171c317(FUN_1467577fc,uVar1,L"EProximityMethodEnum");
  }
  return;
}



// FUNCTION 14460a48b FUN_14460a48b body=55 status=ok
// SIG undefined FUN_14460a48b(void)

void FUN_14460a48b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a50 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a50 = FUN_14171c317(FUN_14675782b,uVar1,L"EProximityContactFilteringMethodEnum");
  }
  return;
}



// FUNCTION 14460a4c2 FUN_14460a4c2 body=55 status=ok
// SIG undefined FUN_14460a4c2(void)

void FUN_14460a4c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25a68 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25a68 = FUN_14171c317(FUN_14675785a,uVar1,L"EConnectionContactAreaMethodEnum");
  }
  return;
}



// FUNCTION 14460a4f9 FUN_14460a4f9 body=55 status=ok
// SIG undefined FUN_14460a4f9(void)

void FUN_14460a4f9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ab0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ab0 = FUN_14171c317(FUN_1467579b6,uVar1,L"EStandardGroupNameEnum");
  }
  return;
}



// FUNCTION 14460a530 FUN_14460a530 body=55 status=ok
// SIG undefined FUN_14460a530(void)

void FUN_14460a530(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ac8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ac8 = FUN_14171c317(FUN_1467579e7,uVar1,L"ECustomAttributeTypeEnum");
  }
  return;
}



// FUNCTION 14460a568 FUN_14460a568 body=176 status=ok
// SIG undefined FUN_14460a568(void)

void FUN_14460a568(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0xffffffff;
  local_30 = 0;
  local_40 = (void *)(param_1 + 0x1a8);
  uVar1 = FUN_146fb4872(param_1,&local_40);
  puVar2 = (undefined8 *)FUN_146fda3fc(uVar1,param_2,(void *)(param_1 + 0x1a8));
  local_40 = (void *)0x0;
  local_38 = *(int *)(puVar2 + 1);
  lVar3 = (longlong)local_38;
  _Src = (void *)*puVar2;
  if (lVar3 != 0) {
    FUN_1446dd670(&local_40,local_38,0);
    memcpy(local_40,_Src,lVar3 * 2);
    if (local_40 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460a61a FUN_14460a61a body=194 status=ok
// SIG undefined FUN_14460a61a(void)

void FUN_14460a61a(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  void *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x198) == '\x01') {
    local_38 = 0xffffffff;
    local_30 = 0;
    local_40 = (void *)(param_1 + 0x1a0);
    uVar1 = FUN_146fb4872(param_1,&local_40);
    puVar2 = (undefined8 *)FUN_146fda3fc(uVar1,param_2,(void *)(param_1 + 0x1a0));
    local_40 = (void *)0x0;
    local_38 = *(int *)(puVar2 + 1);
    lVar3 = (longlong)local_38;
    _Src = (void *)*puVar2;
    if (lVar3 != 0) {
      FUN_1446dd670(&local_40,local_38,0);
      memcpy(local_40,_Src,lVar3 * 2);
      if (local_40 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460a6dd FUN_14460a6dd body=1028 status=ok
// SIG undefined FUN_14460a6dd(void)

ulonglong * FUN_14460a6dd(ulonglong *param_1,undefined1 param_2)

{
  uint uVar1;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  switch(param_2) {
  case 1:
    local_20 = "Vector";
    goto LAB_14460a887;
  case 2:
    local_20 = "IntVector";
    goto LAB_14460a926;
  case 3:
    local_20 = "Vector2D";
    goto LAB_14460aa67;
  case 4:
    local_20 = "LinearColor";
    goto LAB_14460a857;
  case 5:
    local_20 = "Int32";
    goto LAB_14460a968;
  case 6:
    local_20 = "Bool";
    goto LAB_14460a8e4;
  case 7:
    local_20 = "Transform";
LAB_14460a926:
    local_18 = 9;
    break;
  case 8:
    local_20 = "String";
    goto LAB_14460a887;
  case 9:
    local_20 = "Float";
    goto LAB_14460a968;
  case 10:
    local_20 = "Quat";
    goto LAB_14460a8e4;
  case 0xb:
    local_20 = "BoneNode";
    goto LAB_14460aa67;
  case 0xc:
    local_20 = "MeshSection";
    goto LAB_14460a857;
  case 0xd:
    local_20 = "Box";
    local_18 = 3;
    break;
  case 0xe:
    local_20 = "IntArray";
    goto LAB_14460aa67;
  case 0xf:
    local_20 = "Guid";
LAB_14460a8e4:
    local_18 = 4;
    break;
  case 0x10:
    local_20 = "UInt8";
LAB_14460a968:
    local_18 = 5;
    break;
  case 0x11:
    local_20 = "VectorArrayPointer";
    local_18 = 0x12;
    break;
  case 0x12:
    local_20 = "VectorArrayUniquePointer";
    local_18 = 0x18;
    break;
  case 0x13:
    local_20 = "FImplicitObject3Pointer";
    local_18 = 0x17;
    break;
  case 0x14:
    local_20 = "FImplicitObject3UniquePointer";
    goto LAB_14460a9e9;
  case 0x15:
    local_20 = "FImplicitObject3SerializablePtr";
    local_18 = 0x1f;
    break;
  case 0x16:
    local_20 = "FBVHParticlesFloat3Pointer";
    local_18 = 0x1a;
    break;
  case 0x17:
    local_20 = "FBVHParticlesFloat3UniquePointer";
    local_18 = 0x20;
    break;
  case 0x18:
    local_20 = "TPBDRigidParticleHandle3fPtr";
    goto LAB_14460aa1f;
  case 0x19:
    local_20 = "TPBDGeometryCollectionParticleHandle3fPtr";
    local_18 = 0x29;
    break;
  case 0x1a:
    local_20 = "TGeometryParticle3fUniquePtr";
    goto LAB_14460aa1f;
  case 0x1b:
    local_20 = "FImplicitObject3ThreadSafeSharedPointer";
    local_18 = 0x27;
    break;
  case 0x1c:
    local_20 = "FImplicitObject3SharedPointer";
LAB_14460a9e9:
    local_18 = 0x1d;
    break;
  case 0x1d:
    local_20 = "TPBDRigidClusteredParticleHandle3fPtr";
    local_18 = 0x25;
    break;
  case 0x1e:
    local_20 = "FConvexUniquePtr";
    local_18 = 0x10;
    break;
  case 0x1f:
    local_20 = "Vector2DArray";
    goto LAB_14460a998;
  case 0x20:
    local_20 = "Double";
LAB_14460a887:
    local_18 = 6;
    break;
  case 0x21:
    local_20 = "IntVector4";
    goto LAB_14460aa97;
  case 0x22:
    local_20 = "Vector3d";
    goto LAB_14460aa67;
  case 0x23:
    local_20 = "IntVector2";
    goto LAB_14460aa97;
  case 0x24:
    local_20 = "IntVector2Array";
    goto LAB_14460a78e;
  case 0x25:
    local_20 = "Int32Array";
    goto LAB_14460aa97;
  case 0x26:
    local_20 = "FloatArray";
    goto LAB_14460aa97;
  case 0x27:
    local_20 = "Vector4f";
LAB_14460aa67:
    local_18 = 8;
    break;
  case 0x28:
    local_20 = "FVectorArray";
    local_18 = 0xc;
    break;
  case 0x29:
    local_20 = "TPBDRigidParticle3fUniquePtr";
    goto LAB_14460aa1f;
  case 0x2a:
    local_20 = "FImplicitObjectRefCountedPtr";
LAB_14460aa1f:
    local_18 = 0x1c;
    break;
  case 0x2b:
    local_20 = "FConvexRefCountedPtr";
    goto LAB_14460aa04;
  case 0x2c:
    local_20 = "Transform3f";
LAB_14460a857:
    local_18 = 0xb;
    break;
  case 0x2d:
    local_20 = "IntVector3Array";
    goto LAB_14460a78e;
  case 0x2e:
    local_20 = "Vector4fArray";
LAB_14460a998:
    local_18 = 0xd;
    break;
  case 0x2f:
    local_20 = "PMatrix33d";
LAB_14460aa97:
    local_18 = 10;
    break;
  case 0x30:
    local_20 = "PMatrix33dArray";
LAB_14460a78e:
    local_18 = 0xf;
    break;
  case 0x31:
    local_20 = "FVector3fNestedArray";
LAB_14460aa04:
    local_18 = 0x14;
    break;
  default:
    *param_1 = 0;
    goto LAB_14460aab9;
  }
  local_14 = 0;
  uVar1 = FUN_14001a6c0(&local_20,1);
  *param_1 = (ulonglong)uVar1;
LAB_14460aab9:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14460aae2 FUN_14460aae2 body=105 status=ok
// SIG undefined FUN_14460aae2(void)

void FUN_14460aae2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_1448c2260();
  local_20 = local_28;
  FUN_1497b44a6(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460ab4c FUN_14460ab4c body=111 status=ok
// SIG undefined FUN_14460ab4c(void)

void FUN_14460ab4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_140757af2();
  local_20 = local_28;
  FUN_146e9afd4(&local_50,param_4,1,0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460abbc FUN_14460abbc body=367 status=ok
// SIG undefined FUN_14460abbc(void)

void FUN_14460abbc(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  uVar3 = (uint)param_3;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_58 = param_1;
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
            (uVar4 >> 4) + (uVar2 << 0x13 | uVar2 & 0xffff);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      local_30 = 0;
      do {
        lVar7 = (longlong)iVar5 * 0x40;
        lVar1 = lVar6 + lVar7;
        if ((*(longlong *)(lVar6 + lVar7) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar7) == param_3)) {
          local_30 = 0;
          if ((lVar1 != 0) && ((char *)(lVar1 + 0x10) != (char *)0x0)) {
            if (*(char *)(lVar1 + 0x10) != '\t') goto LAB_14460ad28;
            FUN_1448c236a();
            local_30 = *(longlong *)(lVar1 + 0x30);
            *(undefined1 *)(local_30 + 8) = 1;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x38);
      } while (iVar5 != -1);
      goto LAB_14460acee;
    }
  }
LAB_14460ad28:
  local_30 = 0;
LAB_14460acee:
  local_28 = local_30;
  FUN_1406f094e(&local_58,param_4,1,0);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460ad2c FUN_14460ad2c body=105 status=ok
// SIG undefined FUN_14460ad2c(void)

void FUN_14460ad2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_1497b467e();
  local_20 = local_28;
  FUN_1497b4626(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460ad96 FUN_14460ad96 body=111 status=ok
// SIG undefined FUN_14460ad96(void)

void FUN_14460ad96(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_1401c090c();
  local_20 = local_28;
  FUN_146e99b28(&local_50,param_4,1,0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460ae06 FUN_14460ae06 body=105 status=ok
// SIG undefined FUN_14460ae06(void)

void FUN_14460ae06(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146ea22c4();
  local_20 = local_28;
  FUN_1497b4ccc(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460ae70 FUN_14460ae70 body=105 status=ok
// SIG undefined FUN_14460ae70(void)

void FUN_14460ae70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146eb2192();
  local_20 = local_28;
  FUN_1497b4d38(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460aeda FUN_14460aeda body=105 status=ok
// SIG undefined FUN_14460aeda(void)

void FUN_14460aeda(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_14067610e();
  local_20 = local_28;
  FUN_1497b4eba(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460af44 FUN_14460af44 body=111 status=ok
// SIG undefined FUN_14460af44(void)

void FUN_14460af44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_1401c117a();
  local_20 = local_28;
  FUN_1404996b6(&local_50,param_4,1,0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460afb4 FUN_14460afb4 body=367 status=ok
// SIG undefined FUN_14460afb4(void)

void FUN_14460afb4(longlong param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  uVar3 = (uint)param_3;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  local_58 = param_1;
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar4) +
            (uVar4 >> 4) + (uVar2 << 0x13 | uVar2 & 0xffff);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      local_30 = 0;
      do {
        lVar7 = (longlong)iVar5 * 0x40;
        lVar1 = lVar6 + lVar7;
        if ((*(longlong *)(lVar6 + lVar7) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar7) == param_3)) {
          local_30 = 0;
          if ((lVar1 != 0) && ((char *)(lVar1 + 0x10) != (char *)0x0)) {
            if (*(char *)(lVar1 + 0x10) != '\'') goto LAB_14460b120;
            FUN_1448c236a();
            local_30 = *(longlong *)(lVar1 + 0x30);
            *(undefined1 *)(local_30 + 8) = 1;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x38);
      } while (iVar5 != -1);
      goto LAB_14460b0e6;
    }
  }
LAB_14460b120:
  local_30 = 0;
LAB_14460b0e6:
  local_28 = local_30;
  FUN_140569e92(&local_58,param_4,1,0);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460b124 FUN_14460b124 body=105 status=ok
// SIG undefined FUN_14460b124(void)

void FUN_14460b124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146ea23e0();
  local_20 = local_28;
  FUN_1497b4f22(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b18e FUN_14460b18e body=105 status=ok
// SIG undefined FUN_14460b18e(void)

void FUN_14460b18e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_1497b4fea();
  local_20 = local_28;
  FUN_1497b4f84(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b1f8 FUN_14460b1f8 body=105 status=ok
// SIG undefined FUN_14460b1f8(void)

void FUN_14460b1f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_1497b5280();
  local_20 = local_28;
  FUN_1497b5224(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b262 FUN_14460b262 body=105 status=ok
// SIG undefined FUN_14460b262(void)

void FUN_14460b262(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146ea1816();
  local_20 = local_28;
  FUN_1497b58ce(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b2cc FUN_14460b2cc body=105 status=ok
// SIG undefined FUN_14460b2cc(void)

void FUN_14460b2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_1497b59a8();
  local_20 = local_28;
  FUN_1497b594c(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b336 FUN_14460b336 body=105 status=ok
// SIG undefined FUN_14460b336(void)

void FUN_14460b336(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_14075a50c();
  local_20 = local_28;
  FUN_1497b5be2(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b3a0 FUN_14460b3a0 body=105 status=ok
// SIG undefined FUN_14460b3a0(void)

void FUN_14460b3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146ea345e();
  local_20 = local_28;
  FUN_1497b5c4e(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b40a FUN_14460b40a body=105 status=ok
// SIG undefined FUN_14460b40a(void)

void FUN_14460b40a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146ea24fc();
  local_20 = local_28;
  FUN_1497b5cba(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b474 FUN_14460b474 body=105 status=ok
// SIG undefined FUN_14460b474(void)

void FUN_14460b474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146ea357a();
  local_20 = local_28;
  FUN_1497b5d24(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b4de FUN_14460b4de body=105 status=ok
// SIG undefined FUN_14460b4de(void)

void FUN_14460b4de(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146eb3734();
  local_20 = local_28;
  FUN_1497b5d7e(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b548 FUN_14460b548 body=105 status=ok
// SIG undefined FUN_14460b548(void)

void FUN_14460b548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_1497b5e46();
  local_20 = local_28;
  FUN_1497b5de0(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b5b2 FUN_14460b5b2 body=105 status=ok
// SIG undefined FUN_14460b5b2(void)

void FUN_14460b5b2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146ea3696();
  local_20 = local_28;
  FUN_1497b6494(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b61c FUN_14460b61c body=105 status=ok
// SIG undefined FUN_14460b61c(void)

void FUN_14460b61c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_146eb13e4();
  local_20 = local_28;
  FUN_1497b6500(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b686 FUN_14460b686 body=105 status=ok
// SIG undefined FUN_14460b686(void)

void FUN_14460b686(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  local_50 = param_1;
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_28 = FUN_1497b66ea();
  local_20 = local_28;
  FUN_1497b6684(&local_50,param_4);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460b6f0 FUN_14460b6f0 body=542 status=ok
// SIG undefined FUN_14460b6f0(void)

void FUN_14460b6f0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  longlong param_5,longlong param_6)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != 0) {
    local_40 = 0xffffffff;
    local_38 = 0;
    local_48 = param_4;
    lVar4 = FUN_146fb4872();
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      local_40 = 0xffffffff;
      local_38 = 0;
      local_48 = param_4;
      uVar5 = FUN_146fb4872(param_1);
      plVar6 = (longlong *)FUN_14972668e(uVar5,param_2,param_4);
      if (*(int *)(param_3 + 0x10) != *(int *)(param_3 + 0x3c)) {
        uVar2 = (uint)((ulonglong)param_6 >> 0x10);
        uVar10 = (uint)param_6 & 0xffff;
        uVar11 = (uint)((ulonglong)param_5 >> 0x10);
        uVar8 = (uint)param_5 & 0xffff;
        uVar11 = (int)((ulonglong)param_5 >> 0x20) + ((uint)param_5 << 0x10 | uVar8) +
                 (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar8 >> 4);
        lVar4 = param_3 + 0x40;
        if (*(longlong *)(param_3 + 0x48) != 0) {
          lVar4 = *(longlong *)(param_3 + 0x48);
        }
        iVar3 = *(int *)(lVar4 + (ulonglong)
                                 (*(int *)(param_3 + 0x50) - 1U &
                                 ((uVar11 >> 2) +
                                  (int)((ulonglong)param_6 >> 0x20) + (uint)param_6 * 0x10000 +
                                  uVar10 + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4) +
                                  uVar11 * 0x40 + 0x9e3779b9 ^ uVar11)) * 4);
        if (iVar3 != -1) {
          lVar4 = *(longlong *)(param_3 + 8);
          do {
            lVar9 = (longlong)iVar3 * 0x40;
            lVar1 = lVar4 + lVar9;
            if ((*(longlong *)(lVar4 + lVar9) == param_5) &&
               (*(longlong *)(lVar4 + 8 + lVar9) == param_6)) {
              if ((lVar1 != 0) &&
                 (((char *)(lVar1 + 0x10) != (char *)0x0 && (*(char *)(lVar1 + 0x10) == '\t')))) {
                FUN_1448c236a();
                lVar4 = *(longlong *)(lVar1 + 0x30);
                *(undefined1 *)(lVar4 + 8) = 1;
                if (lVar4 != 0) {
                  plVar7 = (longlong *)FUN_140499144(param_3,param_5,param_6);
                  lVar4 = plVar6[1];
                  iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
                  if (((int)lVar4 == iVar3) &&
                     (iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7), 0 < iVar3)) {
                    lVar4 = 0;
                    do {
                      *(undefined4 *)(plVar7[2] + lVar4 * 4) = *(undefined4 *)(*plVar6 + lVar4 * 4);
                      lVar4 = lVar4 + 1;
                      iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
                    } while (lVar4 < iVar3);
                  }
                }
              }
              break;
            }
            iVar3 = *(int *)(lVar1 + 0x38);
          } while (iVar3 != -1);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460b90f FUN_14460b90f body=300 status=ok
// SIG undefined FUN_14460b90f(void)

void FUN_14460b90f(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_4;
    lVar2 = FUN_146fb4872();
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = param_4;
      uVar3 = FUN_146fb4872(param_1);
      plVar4 = (longlong *)FUN_1497b81aa(uVar3,param_2,param_4);
      lVar2 = FUN_1497b467e(param_3,param_5,param_6);
      if (lVar2 != 0) {
        plVar5 = (longlong *)FUN_1497b4b0e(param_3,param_5,param_6);
        lVar2 = plVar4[1];
        iVar1 = (**(code **)(*plVar5 + 0x60))(plVar5);
        if (((int)lVar2 == iVar1) && (iVar1 = (**(code **)(*plVar5 + 0x60))(plVar5), 0 < iVar1)) {
          lVar2 = 0;
          do {
            *(undefined8 *)(plVar5[2] + lVar2 * 8) = *(undefined8 *)(*plVar4 + lVar2 * 8);
            lVar2 = lVar2 + 1;
            iVar1 = (**(code **)(*plVar5 + 0x60))(plVar5);
          } while (lVar2 < iVar1);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460ba3c FUN_14460ba3c body=296 status=ok
// SIG undefined FUN_14460ba3c(void)

void FUN_14460ba3c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_4;
    lVar2 = FUN_146fb4872();
    if (*(longlong *)(lVar2 + 0x48) != 0) {
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = param_4;
      uVar3 = FUN_146fb4872(param_1);
      plVar4 = (longlong *)FUN_149729092(uVar3,param_2,param_4);
      lVar2 = FUN_140757af2(param_3,param_5,param_6);
      if (lVar2 != 0) {
        plVar5 = (longlong *)FUN_140b1fc18(param_3,param_5,param_6);
        lVar2 = plVar4[1];
        iVar1 = (**(code **)(*plVar5 + 0x60))(plVar5);
        if (((int)lVar2 == iVar1) && (iVar1 = (**(code **)(*plVar5 + 0x60))(plVar5), 0 < iVar1)) {
          lVar2 = 0;
          do {
            *(undefined4 *)(plVar5[2] + lVar2 * 4) = *(undefined4 *)(*plVar4 + lVar2 * 4);
            lVar2 = lVar2 + 1;
            iVar1 = (**(code **)(*plVar5 + 0x60))(plVar5);
          } while (lVar2 < iVar1);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460bb65 FUN_14460bb65 body=381 status=ok
// SIG undefined FUN_14460bb65(void)

void FUN_14460bb65(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_50 = 0xffffffff;
    local_48 = 0;
    local_58 = param_4;
    lVar4 = FUN_146fb4872();
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      local_50 = 0xffffffff;
      local_48 = 0;
      local_58 = param_4;
      uVar5 = FUN_146fb4872(param_1);
      plVar6 = (longlong *)FUN_1497b82e2(uVar5,param_2,param_4);
      lVar4 = FUN_146ea22c4(param_3,param_5,param_6);
      if (lVar4 != 0) {
        plVar7 = (longlong *)FUN_14062f59e(param_3,param_5,param_6);
        lVar4 = plVar6[1];
        iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
        if (((int)lVar4 == iVar3) && (iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7), 0 < iVar3)) {
          lVar4 = 0;
          lVar8 = 0;
          do {
            lVar1 = *plVar6;
            lVar2 = plVar7[2];
            if (lVar2 != lVar1) {
              iVar3 = *(int *)(lVar1 + 8 + lVar4);
              _Src = *(void **)(lVar1 + lVar4);
              *(int *)(lVar2 + 8 + lVar4) = iVar3;
              if (iVar3 == 0 && *(int *)(lVar2 + 0xc + lVar4) == 0) {
                *(undefined4 *)(lVar2 + 0xc + lVar4) = 0;
              }
              else {
                FUN_1446dd670((undefined8 *)(lVar2 + lVar4),iVar3);
                if (iVar3 != 0) {
                  memcpy(*(void **)(lVar2 + lVar4),_Src,(longlong)iVar3 * 2);
                }
              }
            }
            lVar8 = lVar8 + 1;
            iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
            lVar4 = lVar4 + 0x10;
          } while (lVar8 < iVar3);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460bce3 FUN_14460bce3 body=313 status=ok
// SIG undefined FUN_14460bce3(void)

void FUN_14460bce3(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_4;
    lVar4 = FUN_146fb4872();
    if (*(longlong *)(lVar4 + 0x48) != 0) {
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = param_4;
      uVar5 = FUN_146fb4872(param_1);
      plVar6 = (longlong *)FUN_149729486(uVar5,param_2,param_4);
      lVar4 = FUN_14067610e(param_3,param_5,param_6);
      if (lVar4 != 0) {
        plVar7 = (longlong *)FUN_14067648e(param_3,param_5,param_6);
        lVar4 = plVar6[1];
        iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
        if (((int)lVar4 == iVar3) && (iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7), 0 < iVar3)) {
          lVar4 = 0;
          lVar8 = 0;
          do {
            lVar1 = *plVar6;
            lVar2 = plVar7[2];
            *(undefined4 *)(lVar2 + 8 + lVar4) = *(undefined4 *)(lVar1 + 8 + lVar4);
            *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(lVar1 + lVar4);
            lVar8 = lVar8 + 1;
            iVar3 = (**(code **)(*plVar7 + 0x60))(plVar7);
            lVar4 = lVar4 + 0xc;
          } while (lVar8 < iVar3);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460be1d FUN_14460be1d body=315 status=ok
// SIG undefined FUN_14460be1d(void)

void FUN_14460be1d(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_4;
    lVar9 = FUN_146fb4872();
    if (*(longlong *)(lVar9 + 0x48) != 0) {
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = param_4;
      uVar10 = FUN_146fb4872(param_1);
      plVar11 = (longlong *)FUN_149728954(uVar10,param_2,param_4);
      lVar9 = FUN_1401c117a(param_3,param_5,param_6);
      if (lVar9 != 0) {
        plVar12 = (longlong *)FUN_1404998a8(param_3,param_5,param_6);
        lVar9 = plVar11[1];
        iVar8 = (**(code **)(*plVar12 + 0x60))(plVar12);
        if (((int)lVar9 == iVar8) && (iVar8 = (**(code **)(*plVar12 + 0x60))(plVar12), 0 < iVar8)) {
          lVar9 = 0;
          lVar13 = 0;
          do {
            lVar3 = *plVar11;
            lVar4 = plVar12[2];
            *(undefined8 *)(lVar4 + 0x10 + lVar9) = *(undefined8 *)(lVar3 + 0x10 + lVar9);
            puVar1 = (undefined4 *)(lVar3 + lVar9);
            uVar5 = puVar1[1];
            uVar6 = puVar1[2];
            uVar7 = puVar1[3];
            puVar2 = (undefined4 *)(lVar4 + lVar9);
            *puVar2 = *puVar1;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            lVar13 = lVar13 + 1;
            iVar8 = (**(code **)(*plVar12 + 0x60))(plVar12);
            lVar9 = lVar9 + 0x18;
          } while (lVar13 < iVar8);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460bf59 FUN_14460bf59 body=305 status=ok
// SIG undefined FUN_14460bf59(void)

void FUN_14460bf59(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != 0) {
    local_48 = 0xffffffff;
    local_40 = 0;
    local_50 = param_4;
    lVar7 = FUN_146fb4872();
    if (*(longlong *)(lVar7 + 0x48) != 0) {
      local_48 = 0xffffffff;
      local_40 = 0;
      local_50 = param_4;
      uVar8 = FUN_146fb4872(param_1);
      plVar9 = (longlong *)FUN_1497b841a(uVar8,param_2,param_4);
      lVar7 = FUN_146ea23e0(param_3,param_5,param_6);
      if (lVar7 != 0) {
        plVar10 = (longlong *)FUN_146c97c1a(param_3,param_5,param_6);
        lVar7 = plVar9[1];
        iVar6 = (**(code **)(*plVar10 + 0x60))(plVar10);
        if (((int)lVar7 == iVar6) && (iVar6 = (**(code **)(*plVar10 + 0x60))(plVar10), 0 < iVar6)) {
          lVar7 = 0;
          lVar11 = 0;
          do {
            puVar1 = (undefined4 *)(*plVar9 + lVar7);
            uVar3 = puVar1[1];
            uVar4 = puVar1[2];
            uVar5 = puVar1[3];
            puVar2 = (undefined4 *)(plVar10[2] + lVar7);
            *puVar2 = *puVar1;
            puVar2[1] = uVar3;
            puVar2[2] = uVar4;
            puVar2[3] = uVar5;
            lVar11 = lVar11 + 1;
            iVar6 = (**(code **)(*plVar10 + 0x60))(plVar10);
            lVar7 = lVar7 + 0x10;
          } while (lVar11 < iVar6);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460c08b FUN_14460c08b body=273 status=ok
// SIG undefined FUN_14460c08b(void)

ulonglong FUN_14460c08b(undefined8 *param_1)

{
  char cVar1;
  int iVar2;
  wchar_t *pwVar3;
  wchar_t *_Str2;
  wchar_t *pwVar4;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  int local_30;
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_1 + 1) < 2) {
    uVar5 = 0;
  }
  else {
    cVar1 = FUN_1405b43cc();
    uVar6 = (undefined7)((ulonglong)param_1 >> 8);
    if (cVar1 == '\0') {
      FUN_1400b22c2(&local_28,"false");
      pwVar4 = local_28;
      pwVar3 = L"";
      _Str2 = local_28;
      if (local_20 == 0) {
        _Str2 = L"";
      }
      if (*(int *)(param_1 + 1) != 0) {
        pwVar3 = (wchar_t *)*param_1;
      }
      iVar2 = wcscmp(pwVar3,_Str2);
      if (iVar2 == 0) {
        uVar5 = 0;
        local_28 = pwVar4;
      }
      else {
        FUN_1400b22c2(&local_38,&DAT_149dfbe6e);
        pwVar3 = L"";
        pwVar4 = local_38;
        if (local_30 == 0) {
          pwVar4 = L"";
        }
        if (*(int *)(param_1 + 1) != 0) {
          pwVar3 = (wchar_t *)*param_1;
        }
        iVar2 = wcscmp(pwVar3,pwVar4);
        uVar5 = CONCAT71(uVar6,iVar2 == 0);
        if (local_38 != (wchar_t *)0x0) {
          FUN_1400020a8(local_38);
        }
      }
      if (local_28 != (wchar_t *)0x0) {
        FUN_1400020a8(local_28);
      }
    }
    else {
      if (*(int *)(param_1 + 1) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = (wchar_t *)*param_1;
      }
      iVar2 = _wtoi(pwVar3);
      uVar5 = CONCAT71(uVar6,iVar2 != 0);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14460c19d FUN_14460c19d body=55 status=ok
// SIG undefined FUN_14460c19d(void)

void FUN_14460c19d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25c80 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25c80 = FUN_14171c317(FUN_1467584ce,uVar1,L"ESetOperationEnum");
  }
  return;
}



// FUNCTION 14460c1d4 FUN_14460c1d4 body=55 status=ok
// SIG undefined FUN_14460c1d4(void)

void FUN_14460c1d4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25e48 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25e48 = FUN_14171c317(FUN_146758f8a,uVar1,L"ERangeSettingEnum");
  }
  return;
}



// FUNCTION 14460c20b FUN_14460c20b body=55 status=ok
// SIG undefined FUN_14460c20b(void)

void FUN_14460c20b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25ea8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25ea8 = FUN_14171c317(FUN_14675917e,uVar1,L"ESelectSubjectTypeEnum");
  }
  return;
}



// FUNCTION 14460c242 FUN_14460c242 body=55 status=ok
// SIG undefined FUN_14460c242(void)

void FUN_14460c242(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25fb0 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25fb0 = FUN_14171c317(FUN_14675978a,uVar1,L"ESelectionByAttrGroup");
  }
  return;
}



// FUNCTION 14460c279 FUN_14460c279 body=55 status=ok
// SIG undefined FUN_14460c279(void)

void FUN_14460c279(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc25fc8 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc25fc8 = FUN_14171c317(FUN_1467597b9,uVar1,L"ESelectionByAttrOperation");
  }
  return;
}



// FUNCTION 14460c2b0 FUN_14460c2b0 body=442 status=ok
// SIG undefined FUN_14460c2b0(void)

void FUN_14460c2b0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1e0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    lVar1 = FUN_14972af6e(uVar2,param_2,param_1 + 0x1a0);
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1c0;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    lVar3 = FUN_14972af6e(uVar2,param_2,param_1 + 0x1c0);
    local_58 = 0;
    local_50 = 0x8000000000;
    if (*(int *)(lVar1 + 0x18) == *(int *)(lVar3 + 0x18)) {
      switch(*(undefined1 *)(param_1 + 0x198)) {
      case 0:
        FUN_146fd5b52(lVar1,lVar3,&local_68);
        break;
      case 1:
        FUN_146fd5c06(lVar1,lVar3,&local_68);
        break;
      case 2:
        FUN_146fd5cba(lVar1,lVar3,&local_68);
        break;
      case 3:
        FUN_146fd5d6e(lVar1,lVar3,&local_68);
      }
    }
    else {
      FUN_1400b22c2(&local_80,"Input TransformSelections have different number of elements.");
      if (local_80 != 0) {
        FUN_1400020a8();
      }
    }
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x1e0;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_1497a3594(lVar1,&local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460c46c FUN_14460c46c body=1884 status=ok
// SIG undefined FUN_14460c46c(void)

void FUN_14460c46c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  longlong lVar15;
  wchar_t *pwVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  ulonglong local_f0;
  int local_e8;
  int local_e4;
  longlong local_e0;
  ulonglong local_d8;
  undefined8 local_d0;
  longlong local_c8 [2];
  char *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pcVar4 = (char *)(**(code **)(*param_3 + 0x20))(param_3);
  if (pcVar4 == (char *)(param_1 + 0x268)) {
    uStack_b0._0_4_ = 0xffffffff;
    local_a8 = 0;
    local_b8 = (char *)(param_1 + 0x198);
    uVar5 = FUN_146fb4872(param_1,&local_b8);
    lVar6 = FUN_14972af6e(uVar5,param_2,(char *)(param_1 + 0x198));
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0xffffffff);
    local_a8 = 0;
    local_b8 = (char *)(param_1 + 0x1b8);
    uVar5 = FUN_146fb4872(param_1,&local_b8);
    lVar7 = FUN_1496fcf74(uVar5,param_2,(char *)(param_1 + 0x1b8));
    local_c8[0] = 0;
    local_c8[1] = 0;
    FUN_1407c8b48(local_c8,L"\n----------------------------------------\n");
    FUN_1407c8b48(local_c8,L"Number of Elements: %d\n",*(undefined4 *)(lVar6 + 0x18));
    uVar17 = DAT_14c9974a8;
    local_d0 = param_2;
    if (*(int *)(lVar7 + 0x60) != *(int *)(lVar7 + 0x8c)) {
      uVar12 = (uint)(DAT_14c9974a8 >> 0x10);
      uVar9 = (uint)DAT_14c9974a8 & 0xffff;
      lVar15 = lVar7 + 0x90;
      if (*(longlong *)(lVar7 + 0x98) != 0) {
        lVar15 = *(longlong *)(lVar7 + 0x98);
      }
      iVar10 = *(int *)(lVar15 + (ulonglong)
                                 (*(int *)(lVar7 + 0xa0) - 1U &
                                 (int)(DAT_14c9974a8 >> 0x20) +
                                 ((uint)DAT_14c9974a8 << 0x10 | uVar9) +
                                 (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar10 != -1) {
LAB_14460c5ff:
        if (*(ulonglong *)(*(longlong *)(lVar7 + 0x58) + (longlong)iVar10 * 0x14) != DAT_14c9974a8)
        goto code_r0x00014460c60c;
        local_b8 = "Parent";
        uStack_b0 = CONCAT35(uStack_b0._5_3_,6);
        uVar2 = FUN_14001a6c0(&local_b8,1);
        cVar1 = FUN_140498cd4(lVar7,uVar2,uVar17);
        uVar17 = DAT_14c9974a8;
        if (cVar1 != '\0') {
          local_b8 = "Children";
          uStack_b0 = CONCAT35(uStack_b0._5_3_,8);
          uVar2 = FUN_14001a6c0(&local_b8,1);
          cVar1 = FUN_140498cd4(lVar7,uVar2,uVar17);
          uVar17 = DAT_14c9974a8;
          if (cVar1 != '\0') {
            local_b8 = "BoneName";
            uStack_b0 = CONCAT35(uStack_b0._5_3_,8);
            uVar2 = FUN_14001a6c0(&local_b8,1);
            cVar1 = FUN_140498cd4(lVar7,uVar2,uVar17);
            if (cVar1 != '\0') {
              iVar10 = *(int *)(lVar6 + 0x18);
              iVar3 = FUN_1401f66f6(lVar7,DAT_14c9974a8);
              uVar17 = DAT_14c9974a8;
              if (iVar10 == iVar3) {
                local_b8 = "Parent";
                uStack_b0._0_5_ = 6;
                uVar2 = FUN_14001a6c0(&local_b8,1);
                plVar8 = (longlong *)FUN_140619ac2(lVar7,uVar2,uVar17);
                local_f0 = DAT_14c9974a8;
                local_b8 = "Children";
                uStack_b0._0_5_ = 8;
                uVar2 = FUN_14001a6c0(&local_b8,1);
                FUN_146eab2fc(lVar7,uVar2,local_f0);
                local_f0 = DAT_14c9974a8;
                local_b8 = "BoneName";
                uStack_b0 = CONCAT35(uStack_b0._5_3_,8);
                uVar2 = FUN_14001a6c0(&local_b8,1);
                lVar7 = FUN_14974d16c(lVar7,uVar2);
                local_b8 = (char *)0x0;
                uStack_b0 = 0;
                uVar12 = (**(code **)(*plVar8 + 0x60))(plVar8);
                if (0 < (int)uVar12) {
                  uVar17 = 0;
                  cVar1 = DAT_14c75f3b2;
                  do {
                    if (*(int *)(plVar8[2] + uVar17 * 4) == (int)cVar1) {
                      FUN_144611768(uVar17 & 0xffffffff,0);
                      cVar1 = DAT_14c75f3b2;
                    }
                    uVar17 = uVar17 + 1;
                  } while (uVar12 != uVar17);
                  if (0 < (longlong)(int)uStack_b0) {
                    uVar17 = 0xffffffff;
                    lVar15 = 0;
                    iVar10 = -1;
                    do {
                      if ((int)uVar17 < (int)*(uint *)(local_b8 + lVar15 + 4)) {
                        uVar17 = (ulonglong)*(uint *)(local_b8 + lVar15 + 4);
                      }
                      iVar3 = *(int *)(*(longlong *)(lVar7 + 0x10) + 8 + lVar15 * 2);
                      iVar18 = iVar3 + -1;
                      if (iVar3 == 0) {
                        iVar18 = 0;
                      }
                      if (iVar18 <= iVar10) {
                        iVar18 = iVar10;
                      }
                      iVar10 = iVar18;
                      lVar15 = lVar15 + 8;
                    } while ((longlong)(int)uStack_b0 * 8 != lVar15);
                    local_e4 = (int)uVar17 * 2 + 8;
                    local_f0 = CONCAT44(local_f0._4_4_,iVar10 + 2);
                    local_e8 = (int)uVar17 * 2 + 9;
                    lVar15 = 0;
                    local_e0 = lVar7;
                    do {
                      local_78 = (undefined2 *)0x0;
                      uStack_70 = 0;
                      local_88 = (undefined2 *)0x0;
                      uStack_80 = 0;
                      uStack_80._4_4_ = 0;
                      if (-5 < (int)uVar17) {
                        FUN_1446f8c06(&local_78,local_e8);
                      }
                      if (uStack_80._4_4_ <= (int)local_f0) {
                        FUN_1446f8c06(&local_88,iVar10 + 3);
                      }
                      if (*(int *)(local_b8 + lVar15 * 8 + 4) == 0) {
                        pcVar4 = local_b8 + lVar15 * 8;
                      }
                      else {
                        FUN_1407c8b48(&local_78,&DAT_14be6ae54);
                        if (*(int *)(local_b8 + lVar15 * 8 + 4) < 1) {
                          pcVar4 = local_b8 + lVar15 * 8;
                        }
                        else {
                          iVar3 = 0;
                          local_d8 = uVar17;
                          do {
                            FUN_1407c8b48(&local_78,&DAT_14be6ae5a);
                            iVar3 = iVar3 + 1;
                          } while (iVar3 < *(int *)(local_b8 + lVar15 * 8 + 4));
                          pcVar4 = local_b8 + lVar15 * 8;
                          uVar17 = local_d8;
                          lVar7 = local_e0;
                        }
                      }
                      FUN_1407c8b48(&local_78,L"[%d]",*(undefined4 *)pcVar4);
                      FUN_1467acf64(&local_78,&local_98,local_e4);
                      if (local_78 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      local_78 = (undefined2 *)CONCAT44(uStack_94,local_98);
                      uStack_70._0_4_ = iStack_90;
                      puVar13 = &DAT_149dfb77a;
                      if (*(int *)(*(longlong *)(lVar7 + 0x10) + 8 + lVar15 * 0x10) != 0) {
                        puVar13 = *(undefined2 **)(*(longlong *)(lVar7 + 0x10) + lVar15 * 0x10);
                      }
                      FUN_1407c8b48(&local_88,&DAT_149e0625e,puVar13);
                      FUN_1467acf64(&local_88,&local_98,local_f0 & 0xffffffff);
                      if (local_88 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      local_88 = (undefined2 *)CONCAT44(uStack_94,local_98);
                      uVar12 = *(uint *)(local_b8 + lVar15 * 8);
                      lVar11 = *(longlong *)(lVar6 + 0x10);
                      if (*(longlong *)(lVar6 + 0x10) == 0) {
                        lVar11 = lVar6;
                      }
                      uVar9 = uVar12 + 0x1f;
                      if (-1 < (int)uVar12) {
                        uVar9 = uVar12;
                      }
                      local_f8 = L"Selected";
                      if ((*(uint *)(lVar11 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar12 & 0x1f) &
                          1) == 0) {
                        local_f8 = L"---";
                      }
                      puVar13 = local_88;
                      if (iStack_90 == 0) {
                        puVar13 = &DAT_149dfb77a;
                      }
                      puVar14 = &DAT_149dfb77a;
                      if ((int)uStack_70 != 0) {
                        puVar14 = local_78;
                      }
                      FUN_1407c8b48(local_c8,L"%s%s%s\n\n",puVar14,puVar13);
                      if (local_88 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      if (local_78 != (undefined2 *)0x0) {
                        FUN_1400020a8();
                      }
                      lVar15 = lVar15 + 1;
                    } while (lVar15 < (int)uStack_b0);
                  }
                }
              }
              else {
                FUN_1400b22c2(&local_b8,"TransformSelection doesn\'t match the Collection.");
              }
              if (local_b8 != (char *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_14460cb42;
            }
          }
        }
      }
    }
LAB_14460caed:
    if (0 < *(int *)(lVar6 + 0x18)) {
      uVar12 = 0;
      do {
        lVar7 = *(longlong *)(lVar6 + 0x10);
        if (*(longlong *)(lVar6 + 0x10) == 0) {
          lVar7 = lVar6;
        }
        pwVar16 = L"---";
        if ((*(uint *)(lVar7 + (ulonglong)(uVar12 >> 5) * 4) >> (uVar12 & 0x1f) & 1) != 0) {
          pwVar16 = L"Selected";
        }
        FUN_1407c8b48(local_c8,L"%4d: %s\n",uVar12,pwVar16);
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < *(int *)(lVar6 + 0x18));
    }
LAB_14460cb42:
    FUN_1407c8b48(local_c8,L"----------------------------------------\n");
    uStack_b0 = CONCAT44(uStack_b0._4_4_,0xffffffff);
    local_a8 = 0;
    local_b8 = (char *)(param_1 + 0x268);
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_14979b374(lVar6,local_c8,local_d0);
    }
    if (local_c8[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014460c60c:
  iVar10 = *(int *)(*(longlong *)(lVar7 + 0x58) + (longlong)iVar10 * 0x14 + 0xc);
  if (iVar10 == -1) goto LAB_14460caed;
  goto LAB_14460c5ff;
}



// FUNCTION 14460cbca FUN_14460cbca body=1070 status=ok
// SIG undefined FUN_14460cbca(void)

void FUN_14460cbca(longlong param_1,undefined8 param_2,longlong *param_3)

{
  wchar_t *pwVar1;
  uint *puVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_e8 [36];
  int local_c4;
  undefined8 local_c0;
  longlong local_b8 [2];
  longlong local_a8;
  ulonglong uStack_a0;
  void *local_90;
  int local_88;
  undefined4 local_84;
  wchar_t *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pwVar1 = (wchar_t *)(param_1 + 600);
  pwVar6 = (wchar_t *)(**(code **)(*param_3 + 0x20))(param_3);
  lVar9 = param_1 + 0x198;
  if (pwVar6 == pwVar1) {
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    local_58 = (longlong *)0x0;
    local_68 = lVar9;
    uVar8 = FUN_146fb4872(param_1);
    lVar9 = FUN_1496fcf74(uVar8,param_2,lVar9);
    if (*(int *)(lVar9 + 0x60) != *(int *)(lVar9 + 0x8c)) {
      uVar5 = (uint)((ulonglong)DAT_14c9974a8 >> 0x10);
      uVar14 = (uint)DAT_14c9974a8 & 0xffff;
      lVar7 = lVar9 + 0x90;
      if (*(longlong *)(lVar9 + 0x98) != 0) {
        lVar7 = *(longlong *)(lVar9 + 0x98);
      }
      iVar15 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(lVar9 + 0xa0) - 1U &
                                (int)((ulonglong)DAT_14c9974a8 >> 0x20) +
                                ((uint)DAT_14c9974a8 << 0x10 | uVar14) +
                                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar14 >> 4)) * 4);
      if (iVar15 != -1) {
LAB_14460ccfc:
        if (*(longlong *)(*(longlong *)(lVar9 + 0x58) + (longlong)iVar15 * 0x14) != DAT_14c9974a8)
        goto code_r0x00014460cd0d;
        local_c4 = FUN_1401f66f6(lVar9);
        local_58 = (longlong *)0x0;
        uStack_50 = 0x8000000000;
        FUN_146fd579c(&local_68,local_c4,0);
        local_78 = 0xffffffff;
        local_70 = 0;
        local_80 = (wchar_t *)(param_1 + 0x248);
        uVar8 = FUN_146fb4872(param_1);
        local_c0 = param_2;
        puVar10 = (undefined8 *)FUN_146fda3fc(uVar8,param_2,(wchar_t *)(param_1 + 0x248));
        local_90 = (void *)0x0;
        local_88 = *(int *)(puVar10 + 1);
        lVar9 = (longlong)local_88;
        pvVar3 = (void *)*puVar10;
        if (lVar9 == 0) {
          local_84 = 0;
        }
        else {
          FUN_1446dd670(&local_90,local_88,0);
          memcpy(local_90,pvVar3,lVar9 * 2);
        }
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_1403de9f2(&local_90,&local_a8,&DAT_149e001d8,1);
        lVar9 = local_a8;
        lVar7 = (longlong)(int)uStack_a0;
        if (lVar7 != 0) {
          lVar12 = 0;
          do {
            local_80 = (wchar_t *)0x0;
            local_78 = *(int *)(lVar9 + 8 + lVar12);
            lVar13 = (longlong)local_78;
            pvVar3 = *(void **)(lVar9 + lVar12);
            if (lVar13 == 0) {
              local_74 = 0;
            }
            else {
              FUN_1446dd670(&local_80,local_78,0);
              memcpy(local_80,pvVar3,lVar13 * 2);
            }
            cVar4 = FUN_1405b43cc(&local_80);
            if (cVar4 != '\0') {
              pwVar6 = L"";
              if (local_78 != 0) {
                pwVar6 = local_80;
              }
              uVar5 = _wtoi(pwVar6);
              if ((int)uVar5 < local_c4 && -1 < (int)uVar5) {
                plVar11 = local_58;
                if (local_58 == (longlong *)0x0) {
                  plVar11 = &local_68;
                }
                puVar2 = (uint *)((longlong)plVar11 + (ulonglong)(uVar5 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
              }
              else {
                FUN_1400b22c2(local_b8,"Invalid specified index found.");
                if (local_b8[0] != 0) {
                  FUN_1400020a8();
                }
              }
            }
            if (local_80 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
          } while (lVar7 * 0x10 != lVar12);
        }
        local_78 = 0xffffffff;
        local_70 = 0;
        local_80 = pwVar1;
        lVar9 = FUN_146fb78aa(param_1);
        if (lVar9 != 0) {
          FUN_1497a3594(lVar9,&local_68,local_c0);
        }
        FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14460cfcf;
      }
    }
LAB_14460cd1b:
    local_58 = (longlong *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_50 = 0x8000000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = pwVar1;
    lVar9 = FUN_146fb78aa(param_1);
    if (lVar9 != 0) {
      FUN_1497a3594(lVar9,&local_68,param_2);
LAB_14460cfcf:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar7 == lVar9) {
      uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
      local_58 = (longlong *)0x0;
      local_68 = lVar9;
      FUN_14971c3b4(param_1,param_2,&local_68,lVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014460cd0d:
  iVar15 = *(int *)(*(longlong *)(lVar9 + 0x58) + (longlong)iVar15 * 0x14 + 0xc);
  if (iVar15 == -1) goto LAB_14460cd1b;
  goto LAB_14460ccfc;
}



// FUNCTION 14460cffa FUN_14460cffa body=716 status=ok
// SIG undefined FUN_14460cffa(void)

void FUN_14460cffa(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = param_1 + 600;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar7 = param_1 + 0x198;
  if (lVar4 == lVar5) {
    uStack_60._0_4_ = 0xffffffff;
    local_58 = (longlong *)0x0;
    local_68 = lVar7;
    uVar6 = FUN_146fb4872(param_1);
    lVar7 = FUN_1496fcf74(uVar6,param_2,lVar7);
    local_80 = lVar5;
    if (*(int *)(lVar7 + 0x60) != *(int *)(lVar7 + 0x8c)) {
      uVar2 = (uint)((ulonglong)DAT_14c9974a8 >> 0x10);
      uVar9 = (uint)DAT_14c9974a8 & 0xffff;
      lVar5 = lVar7 + 0x90;
      if (*(longlong *)(lVar7 + 0x98) != 0) {
        lVar5 = *(longlong *)(lVar7 + 0x98);
      }
      iVar3 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar7 + 0xa0) - 1U &
                               (int)((ulonglong)DAT_14c9974a8 >> 0x20) +
                               ((uint)DAT_14c9974a8 << 0x10 | uVar9) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar3 != -1) {
LAB_14460d11d:
        if (*(longlong *)(*(longlong *)(lVar7 + 0x58) + (longlong)iVar3 * 0x14) != DAT_14c9974a8)
        goto code_r0x00014460d12e;
        iVar3 = FUN_1401f66f6(lVar7);
        local_68 = param_1 + 0x248;
        uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
        local_58 = (longlong *)0x0;
        uVar6 = FUN_146fb4872(param_1,&local_68);
        plVar8 = (longlong *)FUN_149729092(uVar6,param_2);
        local_58 = (longlong *)0x0;
        uStack_50 = 0x8000000000;
        FUN_146fd579c(&local_68,iVar3);
        lVar5 = plVar8[1];
        if ((longlong)(int)lVar5 != 0) {
          lVar7 = *plVar8;
          lVar4 = 0;
          do {
            uVar2 = *(uint *)(lVar7 + lVar4);
            if ((int)uVar2 < iVar3 && -1 < (int)uVar2) {
              plVar8 = local_58;
              if (local_58 == (longlong *)0x0) {
                plVar8 = &local_68;
              }
              puVar1 = (uint *)((longlong)plVar8 + (ulonglong)(uVar2 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
            }
            lVar4 = lVar4 + 4;
          } while ((longlong)(int)lVar5 * 4 != lVar4);
        }
        local_78 = 0xffffffff;
        local_70 = 0;
        lVar5 = FUN_146fb78aa(param_1);
        if (lVar5 != 0) {
          FUN_1497a3594(lVar5,&local_68,param_2);
        }
        goto LAB_14460d2a2;
      }
    }
LAB_14460d13c:
    local_58 = (longlong *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_50 = 0x8000000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    lVar5 = FUN_146fb78aa(param_1);
    if (lVar5 != 0) {
      FUN_1497a3594(lVar5,&local_68,param_2);
LAB_14460d2a2:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar5 == lVar7) {
      uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
      local_58 = (longlong *)0x0;
      local_68 = lVar7;
      FUN_14971c3b4(param_1,param_2,&local_68,lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014460d12e:
  iVar3 = *(int *)(*(longlong *)(lVar7 + 0x58) + (longlong)iVar3 * 0x14 + 0xc);
  if (iVar3 == -1) goto LAB_14460d13c;
  goto LAB_14460d11d;
}



// FUNCTION 14460d2c8 FUN_14460d2c8 body=1070 status=ok
// SIG undefined FUN_14460d2c8(void)

void FUN_14460d2c8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  wchar_t *pwVar1;
  uint *puVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_e8 [36];
  int local_c4;
  undefined8 local_c0;
  longlong local_b8 [2];
  longlong local_a8;
  ulonglong uStack_a0;
  void *local_90;
  int local_88;
  undefined4 local_84;
  wchar_t *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  pwVar1 = (wchar_t *)(param_1 + 600);
  pwVar6 = (wchar_t *)(**(code **)(*param_3 + 0x20))(param_3);
  lVar9 = param_1 + 0x198;
  if (pwVar6 == pwVar1) {
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    local_58 = (longlong *)0x0;
    local_68 = lVar9;
    uVar8 = FUN_146fb4872(param_1);
    lVar9 = FUN_1496fcf74(uVar8,param_2,lVar9);
    if (*(int *)(lVar9 + 0x60) != *(int *)(lVar9 + 0x8c)) {
      uVar5 = (uint)((ulonglong)DAT_14c996ae0 >> 0x10);
      uVar14 = (uint)DAT_14c996ae0 & 0xffff;
      lVar7 = lVar9 + 0x90;
      if (*(longlong *)(lVar9 + 0x98) != 0) {
        lVar7 = *(longlong *)(lVar9 + 0x98);
      }
      iVar15 = *(int *)(lVar7 + (ulonglong)
                                (*(int *)(lVar9 + 0xa0) - 1U &
                                (int)((ulonglong)DAT_14c996ae0 >> 0x20) +
                                ((uint)DAT_14c996ae0 << 0x10 | uVar14) +
                                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar14 >> 4)) * 4);
      if (iVar15 != -1) {
LAB_14460d3fa:
        if (*(longlong *)(*(longlong *)(lVar9 + 0x58) + (longlong)iVar15 * 0x14) != DAT_14c996ae0)
        goto code_r0x00014460d40b;
        local_c4 = FUN_1401f66f6(lVar9);
        local_58 = (longlong *)0x0;
        uStack_50 = 0x8000000000;
        FUN_146fd579c(&local_68,local_c4,0);
        local_78 = 0xffffffff;
        local_70 = 0;
        local_80 = (wchar_t *)(param_1 + 0x248);
        uVar8 = FUN_146fb4872(param_1);
        local_c0 = param_2;
        puVar10 = (undefined8 *)FUN_146fda3fc(uVar8,param_2,(wchar_t *)(param_1 + 0x248));
        local_90 = (void *)0x0;
        local_88 = *(int *)(puVar10 + 1);
        lVar9 = (longlong)local_88;
        pvVar3 = (void *)*puVar10;
        if (lVar9 == 0) {
          local_84 = 0;
        }
        else {
          FUN_1446dd670(&local_90,local_88,0);
          memcpy(local_90,pvVar3,lVar9 * 2);
        }
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_1403de9f2(&local_90,&local_a8,&DAT_149e001d8,1);
        lVar9 = local_a8;
        lVar7 = (longlong)(int)uStack_a0;
        if (lVar7 != 0) {
          lVar12 = 0;
          do {
            local_80 = (wchar_t *)0x0;
            local_78 = *(int *)(lVar9 + 8 + lVar12);
            lVar13 = (longlong)local_78;
            pvVar3 = *(void **)(lVar9 + lVar12);
            if (lVar13 == 0) {
              local_74 = 0;
            }
            else {
              FUN_1446dd670(&local_80,local_78,0);
              memcpy(local_80,pvVar3,lVar13 * 2);
            }
            cVar4 = FUN_1405b43cc(&local_80);
            if (cVar4 != '\0') {
              pwVar6 = L"";
              if (local_78 != 0) {
                pwVar6 = local_80;
              }
              uVar5 = _wtoi(pwVar6);
              if ((int)uVar5 < local_c4 && -1 < (int)uVar5) {
                plVar11 = local_58;
                if (local_58 == (longlong *)0x0) {
                  plVar11 = &local_68;
                }
                puVar2 = (uint *)((longlong)plVar11 + (ulonglong)(uVar5 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)uVar5 & 0x1f);
              }
              else {
                FUN_1400b22c2(local_b8,"Invalid specified index found.");
                if (local_b8[0] != 0) {
                  FUN_1400020a8();
                }
              }
            }
            if (local_80 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar12 = lVar12 + 0x10;
          } while (lVar7 * 0x10 != lVar12);
        }
        local_78 = 0xffffffff;
        local_70 = 0;
        local_80 = pwVar1;
        lVar9 = FUN_146fb78aa(param_1);
        if (lVar9 != 0) {
          FUN_149729f38(lVar9,&local_68,local_c0);
        }
        FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14460d6cd;
      }
    }
LAB_14460d419:
    local_58 = (longlong *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_50 = 0x8000000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = pwVar1;
    lVar9 = FUN_146fb78aa(param_1);
    if (lVar9 != 0) {
      FUN_149729f38(lVar9,&local_68,param_2);
LAB_14460d6cd:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    lVar7 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar7 == lVar9) {
      uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
      local_58 = (longlong *)0x0;
      local_68 = lVar9;
      FUN_14971c3b4(param_1,param_2,&local_68,lVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014460d40b:
  iVar15 = *(int *)(*(longlong *)(lVar9 + 0x58) + (longlong)iVar15 * 0x14 + 0xc);
  if (iVar15 == -1) goto LAB_14460d419;
  goto LAB_14460d3fa;
}



// FUNCTION 14460d6f8 FUN_14460d6f8 body=901 status=ok
// SIG undefined FUN_14460d6f8(void)

void FUN_14460d6f8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint *puVar1;
  void *_Src;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  wchar_t *_Str;
  longlong *plVar10;
  uint uVar11;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  ulonglong uStack_a0;
  void *local_90;
  int local_88;
  undefined4 local_84;
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar6 = param_1 + 600;
  lVar5 = (**(code **)(*param_3 + 0x20))(param_3);
  lVar8 = param_1 + 0x198;
  if (lVar5 == lVar6) {
    uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
    local_58 = (longlong *)0x0;
    local_68 = lVar8;
    uVar7 = FUN_146fb4872(param_1);
    lVar8 = FUN_1496fcf74(uVar7,param_2,lVar8);
    if (*(int *)(lVar8 + 0x60) != *(int *)(lVar8 + 0x8c)) {
      uVar4 = (uint)((ulonglong)DAT_14c996ae8 >> 0x10);
      uVar11 = (uint)DAT_14c996ae8 & 0xffff;
      lVar5 = lVar8 + 0x90;
      if (*(longlong *)(lVar8 + 0x98) != 0) {
        lVar5 = *(longlong *)(lVar8 + 0x98);
      }
      iVar3 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(lVar8 + 0xa0) - 1U &
                               (int)((ulonglong)DAT_14c996ae8 >> 0x20) +
                               ((uint)DAT_14c996ae8 << 0x10 | uVar11) +
                               (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4)) * 4);
      if (iVar3 != -1) {
LAB_14460d827:
        if (*(longlong *)(*(longlong *)(lVar8 + 0x58) + (longlong)iVar3 * 0x14) != DAT_14c996ae8)
        goto code_r0x00014460d838;
        iVar3 = FUN_1401f66f6(lVar8);
        local_58 = (longlong *)0x0;
        uStack_50 = 0x8000000000;
        FUN_146fd579c(&local_68,iVar3,0);
        local_78 = 0xffffffff;
        local_70 = 0;
        local_80 = param_1 + 0x248;
        uVar7 = FUN_146fb4872(param_1);
        puVar9 = (undefined8 *)FUN_146fda3fc(uVar7,param_2,param_1 + 0x248);
        local_90 = (void *)0x0;
        local_88 = *(int *)(puVar9 + 1);
        lVar8 = (longlong)local_88;
        _Src = (void *)*puVar9;
        if (lVar8 == 0) {
          local_84 = 0;
        }
        else {
          FUN_1446dd670(&local_90,local_88,0);
          memcpy(local_90,_Src,lVar8 * 2);
        }
        local_a8 = (undefined8 *)0x0;
        uStack_a0 = 0;
        FUN_1403de9f2(&local_90,&local_a8,&DAT_149e001d8,1);
        if ((longlong)(int)uStack_a0 != 0) {
          lVar8 = (longlong)(int)uStack_a0 << 4;
          puVar9 = local_a8;
          do {
            cVar2 = FUN_1405b43cc(puVar9);
            if (cVar2 != '\0') {
              _Str = L"";
              if (*(int *)(puVar9 + 1) != 0) {
                _Str = (wchar_t *)*puVar9;
              }
              uVar4 = _wtoi(_Str);
              if ((int)uVar4 < iVar3 && -1 < (int)uVar4) {
                plVar10 = local_58;
                if (local_58 == (longlong *)0x0) {
                  plVar10 = &local_68;
                }
                puVar1 = (uint *)((longlong)plVar10 + (ulonglong)(uVar4 >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)uVar4 & 0x1f);
              }
            }
            puVar9 = puVar9 + 2;
            lVar8 = lVar8 + -0x10;
          } while (lVar8 != 0);
        }
        local_78 = 0xffffffff;
        local_70 = 0;
        local_80 = lVar6;
        lVar6 = FUN_146fb78aa(param_1);
        if (lVar6 != 0) {
          FUN_149729c6c(lVar6,&local_68,param_2);
        }
        FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
        if (local_a8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        if (local_90 != (void *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_14460da59;
      }
    }
LAB_14460d846:
    local_58 = (longlong *)0x0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_50 = 0x8000000000;
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = lVar6;
    lVar6 = FUN_146fb78aa(param_1);
    if (lVar6 != 0) {
      FUN_149729c6c(lVar6,&local_68,param_2);
LAB_14460da59:
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    lVar6 = (**(code **)(*param_3 + 0x20))(param_3);
    if (lVar6 == lVar8) {
      uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
      local_58 = (longlong *)0x0;
      local_68 = lVar8;
      FUN_14971c3b4(param_1,param_2,&local_68,lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014460d838:
  iVar3 = *(int *)(*(longlong *)(lVar8 + 0x58) + (longlong)iVar3 * 0x14 + 0xc);
  if (iVar3 == -1) goto LAB_14460d846;
  goto LAB_14460d827;
}



// FUNCTION 14460da7e FUN_14460da7e body=442 status=ok
// SIG undefined FUN_14460da7e(void)

void FUN_14460da7e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = (**(code **)(*param_3 + 0x20))(param_3);
  if (lVar1 == param_1 + 0x1e0) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1a0;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    lVar1 = FUN_14972a204(uVar2,param_2,param_1 + 0x1a0);
    local_60 = 0xffffffff;
    local_58 = 0;
    local_68 = param_1 + 0x1c0;
    uVar2 = FUN_146fb4872(param_1,&local_68);
    lVar3 = FUN_14972a204(uVar2,param_2,param_1 + 0x1c0);
    local_58 = 0;
    local_50 = 0x8000000000;
    if (*(int *)(lVar1 + 0x18) == *(int *)(lVar3 + 0x18)) {
      switch(*(undefined1 *)(param_1 + 0x198)) {
      case 0:
        FUN_146fd5b52(lVar1,lVar3,&local_68);
        break;
      case 1:
        FUN_146fd5c06(lVar1,lVar3,&local_68);
        break;
      case 2:
        FUN_146fd5cba(lVar1,lVar3,&local_68);
        break;
      case 3:
        FUN_146fd5d6e(lVar1,lVar3,&local_68);
      }
    }
    else {
      FUN_1400b22c2(&local_80,"Input VertexSelections have different number of elements.");
      if (local_80 != 0) {
        FUN_1400020a8();
      }
    }
    local_78 = 0xffffffff;
    local_70 = 0;
    local_80 = param_1 + 0x1e0;
    lVar1 = FUN_146fb78aa(param_1);
    if (lVar1 != 0) {
      FUN_149729f38(lVar1,&local_68,param_2);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460dc3a FUN_14460dc3a body=1372 status=ok
// SIG undefined FUN_14460dc3a(void)

void FUN_14460dc3a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  void *pvVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  wchar_t *_Str;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  undefined1 auStack_118 [40];
  longlong local_f0;
  int local_e4;
  longlong local_e0;
  undefined8 local_d8;
  int *local_d0;
  longlong local_c8 [2];
  wchar_t *local_b8;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  ulonglong uStack_a0;
  int *local_98;
  undefined8 uStack_90;
  int *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  piVar6 = (int *)(**(code **)(*param_3 + 0x20))(param_3);
  if (piVar6 == (int *)(param_1 + 0x278)) {
    local_60 = 0xffffffff;
    local_58 = 0;
    local_d0 = (int *)(param_1 + 0x278);
    local_68 = param_1 + 0x198;
    uVar7 = FUN_146fb4872(param_1,&local_68);
    uVar8 = FUN_1496fcf74(uVar7,param_2,param_1 + 0x198);
    uVar3 = FUN_1401f66f6(uVar8,DAT_14c996ae0);
    local_e4 = FUN_1401f66f6(uVar8,DAT_14c996af0);
    local_58 = 0;
    local_50 = 0x8000000000;
    FUN_146fd579c(&local_68,uVar3,0);
    uVar7 = DAT_14c996af0;
    local_88 = (int *)0x149f51ba2;
    uStack_80._0_5_ = 0xb;
    local_f0 = param_1;
    uVar3 = FUN_14001a6c0(&local_88,1);
    lVar9 = FUN_1401c0c0c(uVar8,uVar3,uVar7);
    lVar16 = local_f0;
    uVar7 = DAT_14c996af0;
    local_88 = (int *)0x149f51b96;
    uStack_80 = CONCAT35(uStack_80._5_3_,0xb);
    uVar3 = FUN_14001a6c0(&local_88,1);
    local_e0 = FUN_1401c0c0c(uVar8,uVar3,uVar7);
    piVar6 = (int *)(lVar16 + 600);
    local_98 = (int *)0x0;
    uStack_90 = 0;
    uStack_80._0_4_ = 0xffffffff;
    local_78 = 0;
    local_88 = piVar6;
    lVar10 = FUN_146fb4872(lVar16,&local_88);
    if (*(longlong *)(lVar10 + 0x48) == 0) {
      uStack_80._0_4_ = 0xffffffff;
      local_78 = 0;
      local_88 = (int *)(lVar16 + 0x248);
      uVar7 = FUN_146fb4872(lVar16,&local_88);
      puVar11 = (undefined8 *)FUN_146fda3fc(uVar7,param_2,(int *)(lVar16 + 0x248));
      local_88 = (int *)0x0;
      uVar5 = *(uint *)(puVar11 + 1);
      pvVar1 = (void *)*puVar11;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
      if ((longlong)(int)uVar5 == 0) {
        uStack_80 = (ulonglong)uVar5;
      }
      else {
        FUN_1446dd670(&local_88,uVar5,0);
        memcpy(local_88,pvVar1,(longlong)(int)uVar5 * 2);
      }
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_1403de9f2(&local_88,&local_a8,&DAT_149e001d8,1);
      lVar10 = local_a8;
      lVar13 = (longlong)(int)uStack_a0;
      uVar12 = 0;
      if (lVar13 != 0) {
        lVar16 = 0;
        local_d8 = param_2;
        do {
          local_b8 = (wchar_t *)0x0;
          local_b0 = *(int *)(lVar10 + 8 + lVar16);
          lVar14 = (longlong)local_b0;
          pvVar1 = *(void **)(lVar10 + lVar16);
          if (lVar14 == 0) {
            local_ac = 0;
          }
          else {
            FUN_1446dd670(&local_b8,local_b0,0);
            memcpy(local_b8,pvVar1,lVar14 * 2);
          }
          cVar2 = FUN_1405b43cc(&local_b8);
          if (cVar2 != '\0') {
            _Str = L"";
            if (local_b0 != 0) {
              _Str = local_b8;
            }
            iVar4 = _wtoi(_Str);
            uVar12 = uStack_90;
            if ((iVar4 < 0) || (local_e4 <= iVar4)) {
              FUN_1400b22c2(local_c8,"Invalid geometry index found.");
              if (local_c8[0] != 0) {
                FUN_1400020a8();
              }
            }
            else {
              lVar14 = (longlong)(int)uStack_90;
              uVar5 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar5);
              if (uStack_90._4_4_ < uVar5) {
                FUN_1446f48e2(&local_98,uVar12 & 0xffffffff);
              }
              local_98[lVar14] = iVar4;
            }
          }
          if (local_b8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar16 = lVar16 + 0x10;
        } while (lVar13 * 0x10 != lVar16);
        uVar12 = uStack_a0 & 0xffffffff;
        lVar16 = local_f0;
        param_2 = local_d8;
      }
      FUN_1447a1747(local_a8,uVar12);
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
      local_78 = 0;
      local_88 = piVar6;
      uVar7 = FUN_146fb4872(lVar16);
      uVar7 = FUN_1497c0c6c(uVar7,param_2,piVar6);
      FUN_146fd58e4(uVar7,&local_88);
      if (local_98 != (int *)0x0) {
        FUN_1400020a8();
      }
      local_98 = local_88;
      uStack_90 = uStack_80;
    }
    if (local_e0 != 0 && lVar9 != 0) {
      local_88 = (int *)0x0;
      uStack_80 = 0;
      if ((longlong)(int)uStack_90 != 0) {
        piVar6 = local_98 + (int)uStack_90;
        piVar17 = local_98;
        do {
          lVar16 = (longlong)*piVar17;
          if (((-1 < lVar16) && (*piVar17 < *(int *)(lVar9 + 0x18))) &&
             (iVar4 = *(int *)(*(longlong *)(local_e0 + 0x10) + lVar16 * 4), 0 < iVar4)) {
            iVar15 = *(int *)(*(longlong *)(lVar9 + 0x10) + lVar16 * 4);
            iVar4 = iVar4 + iVar15;
            do {
              uVar12 = uStack_80;
              lVar16 = (longlong)(int)uStack_80;
              uVar5 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
              if (uStack_80._4_4_ < uVar5) {
                FUN_1446f48e2(&local_88,uVar12 & 0xffffffff);
              }
              local_88[lVar16] = iVar15;
              iVar15 = iVar15 + 1;
            } while (iVar15 < iVar4);
          }
          piVar17 = piVar17 + 1;
        } while (piVar17 != piVar6);
      }
      FUN_146fd594e(&local_68,&local_88);
      if (local_88 != (int *)0x0) {
        FUN_1400020a8();
      }
      lVar16 = local_f0;
    }
    local_88 = local_d0;
    uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
    local_78 = 0;
    lVar16 = FUN_146fb78aa(lVar16);
    if (lVar16 != 0) {
      FUN_149729f38(lVar16,&local_68,param_2);
    }
    if (local_98 != (int *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14460e197 FUN_14460e197 body=55 status=ok
// SIG undefined FUN_14460e197(void)

void FUN_14460e197(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26010 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26010 =
         FUN_14171c317(FUN_146759914,uVar1,L"EDataflowTransferVertexAttributeNodeFalloff");
  }
  return;
}



// FUNCTION 14460e1ce FUN_14460e1ce body=55 status=ok
// SIG undefined FUN_14460e1ce(void)

void FUN_14460e1ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26028 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26028 =
         FUN_14171c317(FUN_146759943,uVar1,L"EDataflowTransferVertexAttributeNodeSourceScale");
  }
  return;
}



// FUNCTION 14460e205 FUN_14460e205 body=55 status=ok
// SIG undefined FUN_14460e205(void)

void FUN_14460e205(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26040 == 0) {
    uVar1 = FUN_140a6b3ed();
    DAT_14cc26040 =
         FUN_14171c317(FUN_146759972,uVar1,L"EDataflowTransferVertexAttributeNodeBoundingVolume");
  }
  return;
}



// FUNCTION 14460e23c FUN_14460e23c body=4420 status=ok
// SIG undefined FUN_14460e23c(void)

/* WARNING: Type propagation algorithm not settling */

longlong * FUN_14460e23c(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  float *pfVar1;
  float fVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  char ***pppcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong **pplVar14;
  undefined4 uVar15;
  undefined2 *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ushort uVar20;
  ulonglong uVar21;
  ushort uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auStack_678 [32];
  undefined8 local_658;
  float *local_650;
  longlong ***local_648;
  longlong **local_638;
  longlong local_630;
  longlong *local_628;
  undefined8 local_620;
  longlong **local_618;
  int local_610;
  undefined4 local_60c;
  undefined1 local_608 [64];
  longlong local_5c8;
  undefined8 local_5c0;
  undefined8 local_5a8;
  longlong *local_590;
  undefined8 local_588;
  undefined8 local_570;
  longlong *local_558;
  longlong local_520;
  longlong local_4e8;
  longlong local_4b0;
  longlong local_478;
  longlong local_440;
  longlong local_408;
  undefined1 local_400 [64];
  longlong local_3c0;
  undefined8 local_3b8;
  undefined8 local_3a0;
  longlong *local_388;
  undefined8 local_380;
  undefined8 local_368;
  longlong *local_350;
  longlong local_318;
  longlong local_2e0;
  longlong local_2a8;
  longlong local_270;
  longlong local_238;
  longlong local_200;
  longlong local_1f8;
  undefined8 uStack_1f0;
  char ***local_1e8;
  undefined1 *puStack_1e0;
  undefined1 *local_1d8;
  void **local_1d0;
  longlong local_1c8;
  longlong ***local_1c0;
  void *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  void *local_1a8;
  int local_1a0;
  undefined4 local_19c;
  void *local_198;
  undefined8 uStack_190;
  void *local_188;
  undefined8 uStack_180;
  float local_16c;
  float local_168;
  float local_164;
  undefined8 local_160;
  float local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  float local_124 [3];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong **local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  longlong ***ppplStack_e0;
  longlong **local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  undefined8 extraout_XMM0_Qb;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_678;
  local_1f8 = 0;
  uStack_1f0 = 0;
  FUN_149752ea0(local_400,param_3);
  FUN_149752ea0(local_608);
  auVar28._0_8_ = DAT_14c9974a8;
  uVar4 = 0;
  lVar12 = 0;
  if (((((local_3c0 == 0) || (local_388 == (longlong *)0x0)) || (local_350 == (longlong *)0x0)) ||
      ((local_318 == 0 || (local_2e0 == 0)))) ||
     ((local_2a8 == 0 || ((local_270 == 0 || (local_238 == 0)))))) {
    uVar15 = 0;
    goto LAB_14460f2dd;
  }
  uVar15 = 0;
  uVar4 = 0;
  if (local_200 == 0) goto LAB_14460f2dd;
  uVar4 = 0;
  if ((((local_5c8 == 0) || (local_590 == (longlong *)0x0)) || (local_558 == (longlong *)0x0)) ||
     (((local_520 == 0 || (local_4e8 == 0)) ||
      ((local_4b0 == 0 || ((local_478 == 0 || (local_440 == 0)))))))) {
    uVar15 = 0;
    lVar12 = 0;
    goto LAB_14460f2dd;
  }
  lVar12 = 0;
  if (local_408 == 0) goto LAB_14460f2dd;
  local_d8 = (longlong **)0x0;
  uStack_d0 = 0;
  local_1e8 = (char ***)0x149f637c9;
  puStack_1e0._0_5_ = 8;
  local_628 = param_1;
  uVar4 = FUN_14001a6c0(&local_1e8,1);
  plVar8 = (longlong *)FUN_1497455e8(param_2,uVar4,auVar28._0_8_);
  auVar28._0_8_ = DAT_14c9974a8;
  local_1e8 = (char ***)0x149f62a06;
  puStack_1e0._0_5_ = 0x18;
  uVar4 = FUN_14001a6c0(&local_1e8,1);
  local_620 = param_2;
  lVar12 = FUN_146d84614(param_2,uVar4,auVar28._0_8_);
  auVar28._0_8_ = DAT_14c9974a8;
  local_1e8 = (char ***)0x149f637c9;
  puStack_1e0._0_5_ = 8;
  uVar4 = FUN_14001a6c0(&local_1e8,1);
  plVar9 = (longlong *)FUN_1497455e8(param_3,uVar4,auVar28._0_8_);
  auVar28._0_8_ = DAT_14c9974a8;
  local_1e8 = (char ***)0x149f62a06;
  puStack_1e0 = (undefined1 *)CONCAT35(puStack_1e0._5_3_,0x18);
  uVar4 = FUN_14001a6c0(&local_1e8,1);
  local_638 = (longlong **)FUN_146d84614(param_3,uVar4,auVar28._0_8_);
  local_630 = lVar12;
  if (((local_638 != (longlong **)0x0 && plVar9 != (longlong *)0x0) &&
       (lVar12 != 0 && plVar8 != (longlong *)0x0)) &&
     (iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8), 0 < iVar5)) {
    lVar12 = 0;
    do {
      iVar5 = (**(code **)(*plVar9 + 0x60))(plVar9);
      if (0 < iVar5) {
        lVar24 = 0;
LAB_14460e571:
        puVar16 = &DAT_149dfb77a;
        if (*(int *)(plVar8[2] + 8 + lVar12 * 0x10) != 0) {
          puVar16 = *(undefined2 **)(plVar8[2] + lVar12 * 0x10);
        }
        FUN_140002266(&local_1e8,L"%s_Tet",puVar16);
        uVar25 = uStack_d0;
        pppcVar10 = local_1e8;
        uVar6 = (int)puStack_1e0 - 1;
        if ((int)puStack_1e0 == 0) {
          pppcVar10 = (char ***)&DAT_149dfb77a;
          uVar6 = 0;
        }
        if (0 < (int)uVar6) {
          puVar18 = (undefined8 *)(lVar24 * 0x10 + plVar9[2]);
          puVar16 = &DAT_149dfb77a;
          if (*(int *)(puVar18 + 1) != 0) {
            puVar16 = (undefined2 *)*puVar18;
          }
          uVar17 = (ulonglong)uVar6;
          lVar19 = 0;
          do {
            uVar20 = *(ushort *)((longlong)puVar16 + lVar19);
            uVar21 = (ulonglong)uVar20;
            uVar22 = *(ushort *)((longlong)pppcVar10 + lVar19);
            if (uVar20 == uVar22) {
              if (uVar20 == 0) goto LAB_14460e656;
            }
            else {
              if (0x7f < (uVar22 | uVar20)) goto LAB_14460e62a;
              uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
              uVar23 = (ulonglong)uVar22;
              uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
              if ((&DAT_149e05da0)[uVar21] != (&DAT_149e05da0)[uVar23]) goto LAB_14460e62a;
            }
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_14460e656;
            lVar19 = lVar19 + 2;
          } while( true );
        }
        goto LAB_14460e632;
      }
LAB_14460e6c1:
      lVar12 = lVar12 + 1;
      iVar5 = (**(code **)(*plVar8 + 0x60))(plVar8);
    } while (lVar12 < iVar5);
  }
  uVar25 = uStack_d0;
  pplVar14 = local_d8;
  local_618 = local_d8;
  iVar5 = (int)uStack_d0;
  local_610 = (int)uStack_d0;
  local_60c = uStack_d0._4_4_;
  iVar7 = FUN_1401f66f6(local_620,DAT_14c996af0);
  if (iVar5 == iVar7) {
    local_f8 = (longlong **)0x0;
    uStack_f0 = 0;
    if (local_388 == (longlong *)0x0) {
      uVar4 = FUN_1401f66f6(local_3b8,local_3a0);
    }
    else {
      uVar4 = (**(code **)(*local_388 + 0x60))();
    }
    FUN_1497963b6(&local_f8,uVar4);
    if ((byte)(*(char *)(param_4 + 1) - 1U) < 2) {
      local_1e8 = (char ***)0x0;
      puStack_1e0 = (undefined1 *)0x0;
      if (local_388 == (longlong *)0x0) {
        uVar4 = FUN_1401f66f6(local_3b8,local_3a0);
      }
      else {
        uVar4 = (**(code **)(*local_388 + 0x60))();
      }
      local_650 = (float *)CONCAT44(local_650._4_4_,uVar4);
      local_658 = (undefined8 *)((ulonglong)local_658._4_4_ << 0x20);
      local_648 = (longlong ***)&local_1e8;
      FUN_144611bfa(local_318,local_2e0,local_3c0,local_388);
      local_d8 = (longlong **)0x0;
      uStack_d0 = 0;
      if (local_590 == (longlong *)0x0) {
        uVar4 = FUN_1401f66f6(local_5c0,local_5a8);
      }
      else {
        uVar4 = (**(code **)(*local_590 + 0x60))();
      }
      local_648 = &local_d8;
      local_650 = (float *)CONCAT44(local_650._4_4_,uVar4);
      local_658 = (undefined8 *)((ulonglong)local_658 & 0xffffffff00000000);
      FUN_144611bfa(local_520,local_4e8,local_5c8,local_590);
      if (*(char *)(param_4 + 1) == '\x02') {
        local_e8 = (code *)&DAT_ff7fffffff7fffff;
        ppplStack_e0 = (longlong ***)CONCAT44(ppplStack_e0._4_4_,0xff7fffff);
        local_118 = 0x7f7fffff7f7fffff;
        uStack_110 = CONCAT44(uStack_110._4_4_,0x7f7fffff);
        if ((longlong)(int)uStack_d0 < 1) {
          fVar27 = -INFINITY;
          fVar26 = -INFINITY;
          fVar30 = fVar26;
        }
        else {
          lVar12 = 0;
          pplVar14 = local_d8;
          do {
            lVar24 = 0;
            do {
              fVar30 = *(float *)((longlong)pplVar14 + lVar24 * 4);
              pfVar1 = (float *)((longlong)&local_e8 + lVar24 * 4);
              if (*pfVar1 <= fVar30 && fVar30 != *pfVar1) {
                *(float *)((longlong)&local_e8 + lVar24 * 4) = fVar30;
              }
              if (fVar30 < *(float *)((longlong)&local_118 + lVar24 * 4)) {
                *(float *)((longlong)&local_118 + lVar24 * 4) = fVar30;
              }
              lVar24 = lVar24 + 1;
            } while (lVar24 != 3);
            lVar12 = lVar12 + 1;
            pplVar14 = (longlong **)((longlong)pplVar14 + 0xc);
          } while (lVar12 != (int)uStack_d0);
          fVar27 = ppplStack_e0._0_4_ - (float)uStack_110;
          fVar26 = (float)local_e8 - (float)local_118;
          fVar30 = local_e8._4_4_ - local_118._4_4_;
        }
        fVar2 = *(float *)(param_4 + 0xc);
        fVar31 = fVar26 * fVar2;
        if (fVar30 * fVar2 <= fVar26 * fVar2) {
          fVar31 = fVar30 * fVar2;
        }
        if (fVar27 * fVar2 <= fVar31) {
          fVar31 = fVar27 * fVar2;
        }
LAB_14460f199:
        local_188 = (void *)(double)fVar31;
      }
      else if (*(char *)(param_4 + 1) == '\x01') {
        fVar30 = *(float *)(param_4 + 8);
        if (local_558 == (longlong *)0x0) {
          uVar4 = FUN_1401f66f6(local_588,local_570);
        }
        else {
          uVar4 = (**(code **)(*local_558 + 0x60))();
        }
        local_658 = (undefined8 *)CONCAT44(local_658._4_4_,uVar4);
        fVar26 = (float)FUN_144611d6f(&local_d8,local_558,0,0);
        if (local_350 == (longlong *)0x0) {
          uVar4 = FUN_1401f66f6(local_380,local_368);
        }
        else {
          uVar4 = (**(code **)(*local_350 + 0x60))();
        }
        local_658 = (undefined8 *)CONCAT44(local_658._4_4_,uVar4);
        fVar27 = (float)FUN_144611d6f(&local_1e8,local_350,0,0);
        if (fVar27 <= fVar26) {
          fVar27 = fVar26;
        }
        fVar31 = fVar30 * fVar27;
        goto LAB_14460f199;
      }
      if (local_d8 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      if (local_1e8 != (char ***)0x0) {
        FUN_1400020a8();
      }
    }
    local_1e8 = (char ***)&local_618;
    local_1d0 = &local_188;
    local_648 = &local_d8;
    local_d8 = (longlong **)0x0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    local_e8 = FUN_144611f7e;
    local_650 = (float *)((ulonglong)local_650 & 0xffffffff00000000);
    puStack_1e0 = local_608;
    local_1d8 = local_400;
    local_1c8 = param_4;
    local_1c0 = &local_f8;
    ppplStack_e0 = (longlong ***)&local_1e8;
    FUN_1401f8d10(L"ParallelFor Task",uVar25 & 0xffffffff,1);
    local_1e8 = (char ***)local_f8;
    puStack_1e0 = (undefined1 *)uStack_f0;
    local_f8 = (longlong **)0x0;
    uStack_f0 = 0;
    FUN_149796584(0,0);
    if (local_f8 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    FUN_149796366(&local_1f8,&local_1e8);
    FUN_149796584(local_1e8,(ulonglong)puStack_1e0 & 0xffffffff);
    pplVar14 = local_618;
    if (local_1e8 != (char ***)0x0) {
      FUN_1400020a8();
      pplVar14 = local_618;
    }
  }
  else {
    local_d8 = (longlong **)0x0;
    uStack_d0 = 0;
    if (local_388 == (longlong *)0x0) {
      uVar4 = FUN_1401f66f6(local_3b8,local_3a0);
    }
    else {
      uVar4 = (**(code **)(*local_388 + 0x60))();
    }
    FUN_1497963b6(&local_d8,uVar4);
    local_e8 = (code *)0x0;
    ppplStack_e0 = (longlong ***)0x0;
    if (local_388 == (longlong *)0x0) {
      uVar4 = FUN_1401f66f6(local_3b8,local_3a0);
    }
    else {
      uVar4 = (**(code **)(*local_388 + 0x60))();
    }
    local_648 = (longlong ***)&local_e8;
    local_650 = (float *)CONCAT44(local_650._4_4_,uVar4);
    local_658 = (undefined8 *)((ulonglong)local_658._4_4_ << 0x20);
    FUN_144611bfa(local_318,local_2e0,local_3c0,local_388);
    local_f8 = (longlong **)0x0;
    uStack_f0 = 0;
    if (local_590 == (longlong *)0x0) {
      uVar4 = FUN_1401f66f6(local_5c0,local_5a8);
    }
    else {
      uVar4 = (**(code **)(*local_590 + 0x60))();
    }
    local_648 = &local_f8;
    local_650 = (float *)CONCAT44(local_650._4_4_,uVar4);
    local_658 = (undefined8 *)((ulonglong)local_658 & 0xffffffff00000000);
    FUN_144611bfa(local_520,local_4e8,local_5c8,local_590);
    fVar30 = *(float *)(param_4 + 8);
    if (local_558 == (longlong *)0x0) {
      uVar4 = FUN_1401f66f6(local_588,local_570);
    }
    else {
      uVar4 = (**(code **)(*local_558 + 0x60))();
    }
    local_658 = (undefined8 *)CONCAT44(local_658._4_4_,uVar4);
    auVar29._0_4_ = (float)FUN_144611d6f(&local_f8,local_558,0,0);
    local_638 = pplVar14;
    if (local_350 == (longlong *)0x0) {
      uVar4 = FUN_1401f66f6(local_380,local_368);
    }
    else {
      uVar4 = (**(code **)(*local_350 + 0x60))();
    }
    local_658 = (undefined8 *)CONCAT44(local_658._4_4_,uVar4);
    lVar12 = 0;
    auVar28._0_8_ = FUN_144611d6f(&local_e8,local_350,0,0);
    auVar28._8_8_ = extraout_XMM0_Qb;
    if ((float)auVar28._0_8_ <= auVar29._0_4_) {
      auVar29._4_12_ = auVar28._4_12_;
      auVar28._0_8_ = auVar29._0_8_;
    }
    lVar24 = FUN_144612ed3(&local_e8,fVar30 * (float)auVar28._0_8_);
    uVar25 = 0;
    while( true ) {
      if (local_558 == (longlong *)0x0) {
        iVar5 = FUN_1401f66f6(local_588,local_570);
      }
      else {
        iVar5 = (**(code **)(*local_558 + 0x60))();
      }
      if ((longlong)iVar5 <= (longlong)uVar25) break;
      local_108 = *(undefined8 *)(local_558[2] + uVar25 * 0xc);
      local_100 = *(undefined4 *)(local_558[2] + 8 + uVar25 * 0xc);
      local_118 = 0;
      uStack_110 = 0;
      FUN_1446130a4(lVar24,&local_f8,&local_108,&local_118);
      if (0 < (int)(float)uStack_110) {
        lVar19 = 0;
LAB_14460ea6f:
        lVar11 = local_558[2];
        lVar13 = (longlong)*(int *)(lVar11 + uVar25 * 0xc);
        local_128 = *(undefined4 *)((longlong)local_f8 + lVar13 * 0xc + 8);
        local_130 = *(undefined8 *)((longlong)local_f8 + lVar13 * 0xc);
        lVar13 = (longlong)*(int *)(lVar11 + 4 + uVar25 * 0xc);
        local_140 = *(undefined8 *)((longlong)local_f8 + lVar13 * 0xc);
        local_138 = *(undefined4 *)((longlong)local_f8 + lVar13 * 0xc + 8);
        lVar11 = (longlong)*(int *)(lVar11 + 8 + uVar25 * 0xc);
        local_150 = *(undefined8 *)((longlong)local_f8 + lVar11 * 0xc);
        local_148 = *(undefined4 *)((longlong)local_f8 + lVar11 * 0xc + 8);
        lVar11 = (longlong)*(int *)(local_118 + lVar19 * 4);
        local_158 = *(float *)(local_e8 + lVar11 * 0xc + 8);
        local_160 = *(undefined8 *)(local_e8 + lVar11 * 0xc);
        local_650 = local_124;
        local_658 = &local_160;
        FUN_146e2650c(&local_16c,&local_130,&local_140,&local_150);
        fVar27 = SQRT((local_158 - local_164) * (local_158 - local_164) +
                      ((float)local_160 - local_16c) * ((float)local_160 - local_16c) +
                      (local_160._4_4_ - local_168) * (local_160._4_4_ - local_168));
        fVar30 = *(float *)(param_4 + 4);
        local_658 = (undefined8 *)CONCAT44(local_658._4_4_,1);
        fVar26 = (float)FUN_144611d6f(&local_f8,local_558,0,uVar25 & 0xffffffff);
        fVar26 = fVar26 * fVar30;
        fVar30 = 1.0;
        if (fVar26 < fVar27) {
          fVar30 = (float)(~-(uint)(ABS(fVar26) <= 1e-08) & (uint)(fVar27 / fVar26) |
                          -(uint)(ABS(fVar26) <= 1e-08) & 0x3f800000);
        }
        if (*(char *)(param_4 + 2) == '\0') {
          fVar30 = fVar30 * fVar30;
LAB_14460ec0a:
          fVar26 = 1.0 / fVar30;
        }
        else {
          fVar26 = 1.0;
          if (*(char *)(param_4 + 2) == '\x01') goto LAB_14460ec0a;
        }
        if (ABS(fVar26) <= 1e-08) goto code_r0x00014460ec1f;
        local_630 = (longlong)*(int *)(local_118 + lVar19 * 4);
        local_188 = (void *)0x0;
        uStack_180 = 0;
        local_198 = (void *)0x0;
        uStack_190 = 0;
        lVar19 = 0;
        do {
          uVar17 = uStack_180;
          lVar11 = local_558[2];
          lVar13 = (longlong)(int)uStack_180;
          uVar6 = (int)uStack_180 + 1;
          uStack_180 = CONCAT44(uStack_180._4_4_,uVar6);
          if (uStack_180._4_4_ < uVar6) {
            FUN_1446f48e2(&local_188,uVar17 & 0xffffffff);
          }
          uVar17 = uStack_190;
          *(undefined4 *)((longlong)local_188 + lVar13 * 4) =
               *(undefined4 *)(lVar11 + lVar12 + lVar19 * 4);
          lVar11 = (longlong)(int)uStack_190;
          uVar6 = (int)uStack_190 + 1;
          uStack_190 = CONCAT44(uStack_190._4_4_,uVar6);
          if (uStack_190._4_4_ < uVar6) {
            FUN_14475e4ac(&local_198,uVar17 & 0xffffffff);
          }
          pvVar3 = local_198;
          *(float *)((longlong)local_198 + lVar11 * 4) = local_124[lVar19];
          lVar19 = lVar19 + 1;
        } while (lVar19 != 3);
        local_1a8 = (void *)0x0;
        lVar19 = (longlong)(int)uStack_190;
        local_1a0 = (int)uStack_190;
        if (lVar19 == 0) {
          local_19c = 0;
        }
        else {
          FUN_1447c510a(&local_1a8,uStack_190 & 0xffffffff,0);
          memcpy(local_1a8,pvVar3,lVar19 << 2);
        }
        pvVar3 = local_188;
        local_1b8 = (void *)0x0;
        lVar19 = (longlong)(int)uStack_180;
        local_1b0 = (int)uStack_180;
        if (lVar19 == 0) {
          local_1ac = 0;
        }
        else {
          FUN_144a06ca8(&local_1b8,uStack_180 & 0xffffffff,0);
          memcpy(local_1b8,pvVar3,lVar19 << 2);
        }
        FUN_149796632(&local_1e8,&local_1b8,&local_1a8,fVar26);
        FUN_149796710(local_d8 + local_630 * 5,&local_1e8);
        if (local_1d8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_1e8 != (char ***)0x0) {
          FUN_1400020a8();
        }
        if (local_198 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_188 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_14460ec33:
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      uVar25 = uVar25 + 1;
      lVar12 = lVar12 + 0xc;
    }
    local_1e8 = (char ***)local_d8;
    puStack_1e0 = (undefined1 *)uStack_d0;
    local_d8 = (longlong **)0x0;
    uStack_d0 = 0;
    if (lVar24 != 0) {
      FUN_146ca59aa(lVar24);
      FUN_1400020a8(lVar24);
    }
    if (local_f8 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    pplVar14 = local_638;
    if (local_e8 != (code *)0x0) {
      FUN_1400020a8();
    }
    FUN_149796584(local_d8,uStack_d0 & 0xffffffff);
    if (local_d8 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    FUN_149796366(&local_1f8,&local_1e8);
    FUN_149796584(local_1e8,(ulonglong)puStack_1e0 & 0xffffffff);
    if (local_1e8 != (char ***)0x0) {
      FUN_1400020a8();
    }
  }
  param_1 = local_628;
  if (pplVar14 != (longlong **)0x0) {
    FUN_1400020a8(pplVar14);
  }
  lVar12 = local_1f8;
  uVar15 = (undefined4)uStack_1f0;
  uVar4 = uStack_1f0._4_4_;
LAB_14460f2dd:
  *param_1 = lVar12;
  local_1f8 = 0;
  *(undefined4 *)(param_1 + 1) = uVar15;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  uStack_1f0 = 0;
  FUN_149796584(0,0);
  if (local_1f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_c0 ^ (ulonglong)auStack_678) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_14460e62a:
  if (uVar20 == uVar22) {
LAB_14460e656:
    uVar4 = *(undefined4 *)((longlong)local_638[2] + lVar24 * 4);
    uVar15 = *(undefined4 *)(*(longlong *)(local_630 + 0x10) + lVar12 * 4);
    lVar24 = (longlong)(int)uStack_d0;
    uVar6 = (int)uStack_d0 + 1;
    uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar6);
    if (uStack_d0._4_4_ < uVar6) {
      FUN_1400232c6(&local_d8,uVar25 & 0xffffffff);
    }
    local_d8[lVar24] = (longlong *)CONCAT44(uVar4,uVar15);
    if (local_1e8 != (char ***)0x0) {
      FUN_1400020a8();
    }
    goto LAB_14460e6c1;
  }
LAB_14460e632:
  if (local_1e8 != (char ***)0x0) {
    FUN_1400020a8();
  }
  lVar24 = lVar24 + 1;
  iVar5 = (**(code **)(*plVar9 + 0x60))(plVar9);
  if (iVar5 <= lVar24) goto LAB_14460e6c1;
  goto LAB_14460e571;
code_r0x00014460ec1f:
  lVar19 = lVar19 + 1;
  if ((int)(float)uStack_110 <= lVar19) goto LAB_14460ec33;
  goto LAB_14460ea6f;
}



// FUNCTION 14460f382 FUN_14460f382 body=1697 status=ok
// SIG undefined FUN_14460f382(void)

void FUN_14460f382(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  int *piVar11;
  double *pdVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_3e8 [32];
  longlong *local_3c8;
  undefined1 local_3c0;
  undefined1 local_3ad;
  int local_3ac;
  undefined8 *local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined8 local_390;
  undefined8 local_388;
  longlong *local_380;
  longlong local_378;
  undefined4 local_370;
  longlong local_368 [5];
  undefined8 uStack_340;
  longlong local_338 [5];
  longlong local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  ulonglong local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined1 local_2cf;
  undefined4 local_2cc;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  longlong *local_298;
  longlong local_288 [4];
  undefined8 local_268;
  undefined8 local_258 [59];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  lVar7 = param_1 + 0x198;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((lVar4 == lVar7) ||
     (lVar4 = (**(code **)(*param_3 + 0x20))(param_3), lVar4 == param_1 + 0x248)) {
    uStack_2f0._0_4_ = 0xffffffff;
    local_2e8 = 0;
    local_2f8 = lVar7;
    uVar5 = FUN_146fb4872(param_1);
    uVar5 = FUN_1496fcf74(uVar5,param_2,lVar7);
    local_338[2] = 0;
    local_338[3] = 0;
    local_338[0] = 0;
    local_338[1] = 0;
    puVar6 = (undefined8 *)FUN_146eab21e(uVar5);
    if (puVar6 == (undefined8 *)0x0) {
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xffffffff);
      local_2e8 = 0;
      local_2f8 = lVar7;
      lVar7 = FUN_146fb78aa(param_1);
      if (lVar7 != 0) {
        FUN_14972d97e(lVar7,uVar5,param_2);
      }
    }
    else {
      lVar4 = param_1 + 0x280;
      local_368[4] = 0;
      uStack_340 = 0;
      uStack_2f0._0_4_ = 0xffffffff;
      local_2e8 = 0;
      local_2f8 = lVar4;
      lVar8 = FUN_146fb4872(param_1);
      lVar8 = *(longlong *)(lVar8 + 0x48);
      if (lVar8 != 0) {
        uStack_2f0._0_4_ = 0xffffffff;
        local_2e8 = 0;
        local_2f8 = lVar4;
        uVar9 = FUN_146fb4872(param_1);
        uVar9 = FUN_14972af6e(uVar9,param_2,lVar4);
        FUN_146fd58e4(uVar9,&local_2f8);
        local_368[4] = local_2f8;
        uStack_340 = CONCAT44(uStack_2f0._4_4_,(undefined4)uStack_2f0);
        FUN_146ea9b2e(&local_2f8,uVar5);
        FUN_146eaa24a(&local_2f8,local_368 + 4,0);
      }
      local_368[2] = 0;
      local_368[3] = 0;
      local_368[0] = 0;
      local_368[1] = 0;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xffffffff);
      local_2e8 = 0;
      local_2f8 = param_1 + 0x2a0;
      uVar5 = FUN_146fb4872(param_1);
      pcVar10 = (char *)FUN_146fca358(uVar5,param_2,param_1 + 0x2a0);
      local_3a8 = puVar6;
      local_3a0 = lVar8;
      if (*pcVar10 == '\x01') {
        local_3ad = lVar8 != 0;
        local_2e8 = local_2e8 & 0xffffffffffffff00;
        local_2c8 = 1;
        local_2c0 = 0x3fe0000000000000;
        local_2b8 = 0;
        local_2b0 = 0x3ff0000000000000;
        local_2a8 = 0;
        local_298 = (longlong *)0x0;
        local_268 = 0x3ff0000000000000;
        puVar14 = &DAT_14c846480;
        puVar16 = local_258;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        local_390._0_4_ = 0xffffffff;
        local_388 = 0;
        local_398 = param_1 + 0x2a4;
        uVar5 = FUN_146fb4872(param_1,&local_398);
        piVar11 = (int *)FUN_146fca67a(uVar5,param_2,param_1 + 0x2a4);
        local_3ac = *piVar11;
        local_390._0_4_ = 0xffffffff;
        local_388 = 0;
        local_398 = param_1 + 0x2b8;
        uVar5 = FUN_146fb4872(param_1,&local_398);
        pdVar12 = (double *)FUN_1497c2d22(uVar5,param_2,param_1 + 0x2b8);
        uVar17 = 0;
        uVar18 = 0;
        dVar1 = *pdVar12;
        if (0.0 <= dVar1) {
          uVar17 = SUB84(dVar1,0);
          uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        uVar19 = 0;
        uVar20 = 0;
        local_390._0_4_ = 0xffffffff;
        local_388 = 0;
        local_398 = param_1 + 0x2b0;
        uVar5 = FUN_146fb4872(param_1,&local_398);
        pdVar12 = (double *)FUN_1497c2d22(uVar5,param_2,param_1 + 0x2b0);
        uVar21 = 0;
        uVar22 = 0;
        dVar1 = *pdVar12;
        if (0.0 <= dVar1) {
          uVar21 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        local_390 = CONCAT44(local_390._4_4_,0xffffffff);
        local_388 = 0;
        local_398 = param_1 + 0x2a8;
        uVar5 = FUN_146fb4872(param_1,&local_398);
        pdVar12 = (double *)FUN_1497c2d22(uVar5,param_2,param_1 + 0x2a8);
        dVar1 = *pdVar12;
        if (0.0 <= dVar1) {
          uVar19 = SUB84(dVar1,0);
          uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        local_2f8 = CONCAT71(local_2f8._1_7_,*(char *)(param_1 + 0x2a1) == '\x01');
        local_2d0 = *(undefined1 *)(param_1 + 0x2a2);
        local_2cf = *(undefined1 *)(param_1 + 0x2a3);
        iVar3 = 1;
        if (1 < local_3ac) {
          iVar3 = local_3ac;
        }
        local_2f8 = CONCAT44(iVar3,(undefined4)local_2f8);
        uStack_2f0 = CONCAT44(uVar20,uVar19);
        local_2e0 = CONCAT44(uVar22,uVar21);
        local_2d8 = CONCAT44(uVar18,uVar17);
        local_2cc = 0x80;
        local_3c8 = &local_378;
        local_378 = local_368[4];
        local_370 = (undefined4)uStack_340;
        local_3c0 = 1;
        cVar2 = FUN_1497076af(puVar6,local_368,&local_2f8,local_3ad);
        if (local_2a8 != 0) {
          plVar15 = local_298;
          if (local_298 == (longlong *)0x0) {
            plVar15 = local_288;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        plVar15 = (longlong *)0x0;
        if (cVar2 != '\0') {
          plVar15 = local_368;
        }
      }
      else {
        plVar15 = (longlong *)0x0;
      }
      uStack_2f0._0_4_ = 0xffffffff;
      local_2e8 = 0;
      local_2f8 = param_1 + 0x268;
      uVar5 = FUN_146fb4872(param_1,&local_2f8);
      puVar13 = (undefined4 *)FUN_146fca67a(uVar5,param_2,param_1 + 0x268);
      uVar17 = *puVar13;
      uStack_2f0._0_4_ = 0xffffffff;
      local_2e8 = 0;
      local_2f8 = param_1 + 0x270;
      uVar5 = FUN_146fb4872(param_1,&local_2f8);
      puVar14 = (undefined8 *)FUN_1497c2d22(uVar5,param_2,param_1 + 0x270);
      puVar6 = local_3a8;
      local_390 = *puVar14;
      local_398 = CONCAT44(local_398._4_4_,uVar17);
      local_388 = CONCAT62(local_388._2_6_,*(undefined2 *)(param_1 + 0x278));
      if (local_3a0 == 0) {
        local_2f8 = 0;
        uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
      }
      else {
        local_2f8 = local_368[4];
        uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(undefined4)uStack_340);
      }
      local_3c8 = &local_2f8;
      local_380 = plVar15;
      FUN_1429fef44(local_3a8,&local_398,local_3a0 != 0,0);
      FUN_146ecd042(&local_2f8,puVar6);
      local_308 = 0xffffffff;
      local_300 = 0;
      local_310 = lVar7;
      lVar7 = FUN_146fb78aa(param_1);
      if (lVar7 != 0) {
        FUN_1497c3018(lVar7,&local_2f8,param_2);
      }
      FUN_14054b30a(&local_2f8);
      FUN_149755e90(local_338,local_368);
      if (local_368[2] != 0) {
        FUN_1400020a8();
      }
      if (local_368[0] != 0) {
        FUN_1400020a8();
      }
      if (local_368[4] != 0) {
        FUN_1400020a8();
      }
      (**(code **)*puVar6)(puVar6,1);
    }
    local_2f8 = param_1 + 0x248;
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xffffffff);
    local_2e8 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1497c32c4(lVar7,local_338,param_2);
    }
    if (local_338[2] != 0) {
      FUN_1400020a8();
    }
    if (local_338[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14460fa24 FUN_14460fa24 body=1654 status=ok
// SIG undefined FUN_14460fa24(void)

void FUN_14460fa24(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  int *piVar11;
  double *pdVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_3c8 [32];
  longlong *local_3a8;
  undefined1 local_3a0;
  undefined1 local_38d;
  int local_38c;
  undefined8 *local_388;
  longlong local_380;
  longlong local_378;
  undefined4 local_370;
  longlong local_368 [5];
  undefined8 uStack_340;
  longlong local_338 [5];
  longlong local_310;
  undefined4 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  longlong *local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined1 local_2cf;
  undefined4 local_2cc;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  longlong *local_298;
  longlong local_288 [4];
  undefined8 local_268;
  undefined8 local_258 [59];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  lVar7 = param_1 + 0x198;
  lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
  if ((lVar4 == lVar7) ||
     (lVar4 = (**(code **)(*param_3 + 0x20))(param_3), lVar4 == param_1 + 0x248)) {
    uStack_2f0._0_4_ = 0xffffffff;
    local_2e8 = 0;
    local_2f8 = lVar7;
    uVar5 = FUN_146fb4872(param_1);
    uVar5 = FUN_1496fcf74(uVar5,param_2,lVar7);
    local_338[2] = 0;
    local_338[3] = 0;
    local_338[0] = 0;
    local_338[1] = 0;
    puVar6 = (undefined8 *)FUN_146eab21e(uVar5);
    if (puVar6 == (undefined8 *)0x0) {
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xffffffff);
      local_2e8 = 0;
      local_2f8 = lVar7;
      lVar7 = FUN_146fb78aa(param_1);
      if (lVar7 != 0) {
        FUN_14972d97e(lVar7,uVar5,param_2);
      }
    }
    else {
      lVar4 = param_1 + 0x280;
      local_368[4] = 0;
      uStack_340 = 0;
      uStack_2f0._0_4_ = 0xffffffff;
      local_2e8 = 0;
      local_2f8 = lVar4;
      lVar8 = FUN_146fb4872(param_1);
      lVar8 = *(longlong *)(lVar8 + 0x48);
      if (lVar8 != 0) {
        uStack_2f0._0_4_ = 0xffffffff;
        local_2e8 = 0;
        local_2f8 = lVar4;
        uVar9 = FUN_146fb4872(param_1);
        uVar9 = FUN_14972af6e(uVar9,param_2,lVar4);
        FUN_146fd58e4(uVar9,&local_2f8);
        local_368[4] = local_2f8;
        uStack_340 = CONCAT44(uStack_2f0._4_4_,(undefined4)uStack_2f0);
        FUN_146ea9b2e(&local_2f8,uVar5);
        FUN_146eaa24a(&local_2f8,local_368 + 4,0);
      }
      local_368[2] = 0;
      local_368[3] = 0;
      local_368[0] = 0;
      local_368[1] = 0;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xffffffff);
      local_2e8 = 0;
      local_2f8 = param_1 + 0x2a0;
      uVar5 = FUN_146fb4872(param_1);
      pcVar10 = (char *)FUN_146fca358(uVar5,param_2,param_1 + 0x2a0);
      local_388 = puVar6;
      local_380 = lVar8;
      if (*pcVar10 == '\x01') {
        local_38d = lVar8 != 0;
        local_2e8 = local_2e8 & 0xffffffffffffff00;
        local_2c8 = 1;
        local_2c0 = 0x3fe0000000000000;
        local_2b8 = 0;
        local_2b0 = 0x3ff0000000000000;
        local_2a8 = 0;
        local_298 = (longlong *)0x0;
        local_268 = 0x3ff0000000000000;
        puVar14 = &DAT_14c846480;
        puVar16 = local_258;
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar16 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar16 = puVar16 + 1;
        }
        local_308 = 0xffffffff;
        local_300 = 0;
        local_310 = param_1 + 0x2a4;
        uVar5 = FUN_146fb4872(param_1,&local_310);
        piVar11 = (int *)FUN_146fca67a(uVar5,param_2,param_1 + 0x2a4);
        local_38c = *piVar11;
        local_308 = 0xffffffff;
        local_300 = 0;
        local_310 = param_1 + 0x2b8;
        uVar5 = FUN_146fb4872(param_1,&local_310);
        pdVar12 = (double *)FUN_1497c2d22(uVar5,param_2,param_1 + 0x2b8);
        uVar17 = 0;
        uVar18 = 0;
        dVar1 = *pdVar12;
        if (0.0 <= dVar1) {
          uVar17 = SUB84(dVar1,0);
          uVar18 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        uVar19 = 0;
        uVar20 = 0;
        local_308 = 0xffffffff;
        local_300 = 0;
        local_310 = param_1 + 0x2b0;
        uVar5 = FUN_146fb4872(param_1,&local_310);
        pdVar12 = (double *)FUN_1497c2d22(uVar5,param_2,param_1 + 0x2b0);
        uVar21 = 0;
        uVar22 = 0;
        dVar1 = *pdVar12;
        if (0.0 <= dVar1) {
          uVar21 = SUB84(dVar1,0);
          uVar22 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        local_308 = 0xffffffff;
        local_300 = 0;
        local_310 = param_1 + 0x2a8;
        uVar5 = FUN_146fb4872(param_1,&local_310);
        pdVar12 = (double *)FUN_1497c2d22(uVar5,param_2,param_1 + 0x2a8);
        dVar1 = *pdVar12;
        if (0.0 <= dVar1) {
          uVar19 = SUB84(dVar1,0);
          uVar20 = (undefined4)((ulonglong)dVar1 >> 0x20);
        }
        local_2f8 = CONCAT71(local_2f8._1_7_,*(char *)(param_1 + 0x2a1) == '\x01');
        local_2d0 = *(undefined1 *)(param_1 + 0x2a2);
        local_2cf = *(undefined1 *)(param_1 + 0x2a3);
        iVar3 = 1;
        if (1 < local_38c) {
          iVar3 = local_38c;
        }
        local_2f8 = CONCAT44(iVar3,(undefined4)local_2f8);
        uStack_2f0 = CONCAT44(uVar20,uVar19);
        local_2e0 = (longlong *)CONCAT44(uVar22,uVar21);
        local_2d8 = CONCAT44(uVar18,uVar17);
        local_2cc = 0x80;
        local_3a8 = &local_378;
        local_378 = local_368[4];
        local_370 = (undefined4)uStack_340;
        local_3a0 = 1;
        cVar2 = FUN_1497076af(puVar6,local_368,&local_2f8,local_38d);
        if (local_2a8 != 0) {
          plVar15 = local_298;
          if (local_298 == (longlong *)0x0) {
            plVar15 = local_288;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
        plVar15 = (longlong *)0x0;
        if (cVar2 != '\0') {
          plVar15 = local_368;
        }
      }
      else {
        plVar15 = (longlong *)0x0;
      }
      uStack_2f0._0_4_ = 0xffffffff;
      local_2e8 = 0;
      local_2f8 = param_1 + 0x268;
      uVar5 = FUN_146fb4872(param_1,&local_2f8);
      puVar13 = (undefined4 *)FUN_146fca67a(uVar5,param_2,param_1 + 0x268);
      uVar17 = *puVar13;
      uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xffffffff);
      local_2e8 = 0;
      local_2f8 = param_1 + 0x270;
      uVar5 = FUN_146fb4872(param_1,&local_2f8);
      puVar14 = (undefined8 *)FUN_1497c2d22(uVar5,param_2,param_1 + 0x270);
      puVar6 = local_388;
      uStack_2f0 = *puVar14;
      local_2f8 = CONCAT44(local_2f8._4_4_,uVar17);
      local_2e8._0_2_ = CONCAT11(1,*(undefined1 *)(param_1 + 0x278));
      if (local_380 == 0) {
        local_310 = 0;
        local_308 = 0;
      }
      else {
        local_310 = local_368[4];
        local_308 = (undefined4)uStack_340;
      }
      local_3a8 = &local_310;
      local_2e0 = plVar15;
      FUN_1429fef44(local_388,&local_2f8,local_380 != 0,1);
      local_308 = 0xffffffff;
      local_300 = 0;
      local_310 = lVar7;
      lVar7 = FUN_146fb78aa(param_1);
      if (lVar7 != 0) {
        FUN_14972d97e(lVar7,puVar6,param_2);
      }
      FUN_149755e90(local_338,local_368);
      if (local_368[2] != 0) {
        FUN_1400020a8();
      }
      if (local_368[0] != 0) {
        FUN_1400020a8();
      }
      if (local_368[4] != 0) {
        FUN_1400020a8();
      }
      (**(code **)*puVar6)(puVar6,1);
    }
    local_2f8 = param_1 + 0x248;
    uStack_2f0 = CONCAT44(uStack_2f0._4_4_,0xffffffff);
    local_2e8 = 0;
    lVar7 = FUN_146fb78aa(param_1);
    if (lVar7 != 0) {
      FUN_1497c32c4(lVar7,local_338,param_2);
    }
    if (local_338[2] != 0) {
      FUN_1400020a8();
    }
    if (local_338[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_3c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14461009c FUN_14461009c body=347 status=ok
// SIG undefined FUN_14461009c(void)

void FUN_14461009c(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  uint local_50;
  undefined4 uStack_4c;
  uint local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar4 = (int)param_2[1];
  if (iVar4 != 0) {
    lVar2 = *param_1;
    do {
      uVar1 = *(uint *)(*param_2 + -4 + (longlong)iVar4 * 4);
      *(int *)(param_2 + 1) = iVar4 + -1;
      if ((*(char *)(lVar2 + 0x26c) == '\x01') &&
         (*(int *)(*(longlong *)(param_1[1] + 0x10) + 8 + (longlong)(int)uVar1 * 0x50) ==
          *(int *)(*(longlong *)(param_1[1] + 0x10) + 0x34 + (longlong)(int)uVar1 * 0x50))) {
        if (-1 < (int)uVar1) {
          lVar5 = param_1[2];
          plVar3 = *(longlong **)(lVar5 + 0x68);
          if (plVar3 != (longlong *)0x0) {
            iVar4 = (**(code **)(*plVar3 + 0x60))();
            if (((int)uVar1 < iVar4) &&
               (lVar5 = (ulonglong)uVar1 * 0x50 + *(longlong *)(*(longlong *)(lVar5 + 0x68) + 0x10),
               lVar5 != 0)) {
              FUN_140619b9c(lVar5,&local_50);
              lVar5 = (longlong)(int)local_48;
              if (lVar5 != 0) {
                iVar4 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar4 + local_48;
                if ((uint)(*(int *)((longlong)param_2 + 0xc) - iVar4) < local_48) {
                  FUN_1446f48e2(param_2,iVar4);
                }
                memmove((void *)((longlong)iVar4 * 4 + *param_2),
                        (void *)CONCAT44(uStack_4c,local_50),lVar5 << 2);
                local_48 = 0;
              }
              if (CONCAT44(uStack_4c,local_50) != 0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
      else {
        local_50 = uVar1;
        (*(code *)*param_3)(param_3[1],&local_50);
      }
      iVar4 = (int)param_2[1];
    } while (iVar4 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144610364 FUN_144610364 body=879 status=ok
// SIG undefined FUN_144610364(void)

void FUN_144610364(longlong *param_1,double *param_2,double *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_308 [40];
  undefined **local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  float local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  uint local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  longlong local_258;
  ulonglong uStack_250;
  undefined1 local_240 [32];
  undefined1 local_220 [64];
  longlong local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  longlong local_1a0;
  uint local_198;
  uint local_194;
  longlong local_190;
  int local_188;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  uVar4 = *(uint *)(param_1 + 1);
  memset(&local_1a0,0,0x100);
  FUN_1406ea1ca(&local_190,uVar4,1);
  if (0 < local_188) {
    lVar7 = 0;
    do {
      *(int *)(local_190 + 4 + lVar7 * 8) = (int)lVar7;
      *(int *)(local_190 + lVar7 * 8) = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar7 < local_188);
  }
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar4);
  }
  local_198 = 0;
  if (local_194 != uVar4) {
    FUN_1447a8aa0(&local_1a0,uVar4);
  }
  if (uVar4 != 0) {
    uVar9 = uVar4;
    do {
      uVar6 = local_198;
      lVar7 = (longlong)(int)local_198;
      local_198 = local_198 + 1;
      if (local_194 < local_198) {
        FUN_1403e3958(&local_1a0,uVar6);
      }
      puVar1 = (undefined8 *)(local_1a0 + lVar7 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(local_1a0 + 0x10 + lVar7 * 0x18) = 0;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uVar8 = 1;
    if (1 < (int)uVar4) {
      uVar8 = (ulonglong)uVar4;
    }
    lVar7 = 0;
    do {
      lVar5 = *param_1;
      fVar2 = *(float *)(lVar5 + 8 + lVar7);
      fVar3 = *(float *)(lVar5 + 4 + lVar7);
      *(double *)(local_1a0 + lVar7 * 2) = (double)*(float *)(lVar5 + lVar7);
      *(double *)(local_1a0 + 8 + lVar7 * 2) = (double)fVar3;
      *(double *)(local_1a0 + 0x10 + lVar7 * 2) = (double)fVar2;
      lVar7 = lVar7 + 0xc;
    } while (uVar8 * 0xc != lVar7);
  }
  local_2a8 = param_2[2] + param_3[2];
  local_2b0 = param_2[1] + param_3[1];
  local_2b8 = *param_2 + *param_3;
  local_2c0 = (float)param_2[3];
  local_2d8 = 0;
  local_2e0 = &PTR_FUN_149f62b40;
  local_2cc = param_5;
  local_2c8 = param_6;
  local_2c4 = param_7;
  local_2a0 = (uint)param_8;
  local_278 = 0;
  uStack_260 = 0;
  local_258 = 0;
  uStack_250 = 0;
  local_288 = 0;
  uStack_280 = 0;
  local_298 = 0;
  uStack_290 = 0;
  uStack_270 = 0x8000000000;
  local_268 = 0xffffffff;
  local_2d0 = param_4;
  FUN_1407225a4(local_240,&local_1a0,&local_298,0);
  uStack_250 = uStack_250 & 0xffffffff00000000;
  if (local_258 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(&local_298);
  FUN_14051b246(&local_2e0,local_240,param_9);
  if (local_1d0 != (undefined8 *)0x0) {
    (**(code **)*local_1d0)(local_1d0,1);
  }
  local_1d8 = 0;
  if (local_1e0 != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(local_220);
  FUN_1408bc892(&local_1a0);
  if ((local_a0 ^ (ulonglong)auStack_308) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446106d4 FUN_1446106d4 body=1016 status=ok
// SIG undefined FUN_1446106d4(void)

void FUN_1446106d4(longlong *param_1,double *param_2,undefined8 *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,byte param_8,
                  undefined8 param_9)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined1 auStack_348 [32];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [12];
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined1 auStack_2f4 [12];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [32];
  undefined1 local_2b8 [64];
  longlong local_278;
  undefined4 local_270;
  undefined8 *local_268;
  undefined **local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218 [12];
  uint local_1b8;
  longlong local_1a0;
  uint local_198;
  uint local_194;
  longlong local_190;
  int local_188;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  uVar7 = *(uint *)(param_1 + 1);
  memset(&local_1a0,0,0x100);
  FUN_1406ea1ca(&local_190,uVar7,1);
  if (0 < local_188) {
    lVar10 = 0;
    do {
      *(int *)(local_190 + 4 + lVar10 * 8) = (int)lVar10;
      *(int *)(local_190 + lVar10 * 8) = (int)lVar10;
      lVar10 = lVar10 + 1;
    } while (lVar10 < local_188);
  }
  if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar7);
  }
  local_198 = 0;
  if (local_194 != uVar7) {
    FUN_1447a8aa0(&local_1a0,uVar7);
  }
  if (uVar7 != 0) {
    uVar13 = uVar7;
    do {
      uVar9 = local_198;
      lVar10 = (longlong)(int)local_198;
      local_198 = local_198 + 1;
      if (local_194 < local_198) {
        FUN_1403e3958(&local_1a0,uVar9);
      }
      puVar12 = (undefined8 *)(local_1a0 + lVar10 * 0x18);
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined8 *)(local_1a0 + 0x10 + lVar10 * 0x18) = 0;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar11 = 1;
    if (1 < (int)uVar7) {
      uVar11 = (ulonglong)uVar7;
    }
    lVar10 = 0;
    do {
      lVar8 = *param_1;
      fVar1 = *(float *)(lVar8 + 8 + lVar10);
      fVar2 = *(float *)(lVar8 + 4 + lVar10);
      *(double *)(local_1a0 + lVar10 * 2) = (double)*(float *)(lVar8 + lVar10);
      *(double *)(local_1a0 + 8 + lVar10 * 2) = (double)fVar2;
      *(double *)(local_1a0 + 0x10 + lVar10 * 2) = (double)fVar1;
      lVar10 = lVar10 + 0xc;
    } while (uVar11 * 0xc != lVar10);
  }
  dVar3 = param_2[2];
  dVar4 = param_2[5];
  dVar5 = param_2[1];
  dVar6 = param_2[4];
  param_3[4] = (double)param_3[4] - (*param_2 + param_2[3]) * 0.5;
  param_3[5] = (double)param_3[5] - (dVar5 + dVar6) * 0.5;
  param_3[6] = (double)param_3[6] - (dVar3 + dVar4) * 0.5;
  param_3[7] = 0;
  dVar3 = param_2[5];
  dVar4 = param_2[2];
  dVar5 = param_2[4];
  dVar6 = param_2[1];
  param_3[8] = (100.0 / (param_2[3] - *param_2)) * (double)param_3[8];
  param_3[9] = (100.0 / (dVar5 - dVar6)) * (double)param_3[9];
  param_3[10] = (100.0 / (dVar3 - dVar4)) * (double)param_3[10];
  param_3[0xb] = 0;
  puVar12 = local_218;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar12 = *param_3;
    param_3 = param_3 + 1;
    puVar12 = puVar12 + 1;
  }
  local_230 = 0;
  local_238 = &PTR_FUN_149f61530;
  local_224 = param_5;
  local_220 = param_6;
  local_21c = param_7;
  local_1b8 = (uint)param_8;
  local_2e8 = (undefined1  [16])0x0;
  local_318 = (undefined1  [16])0x0;
  local_328 = (undefined1  [16])0x0;
  local_308 = SUB1612((undefined1  [16])0x0,0);
  uStack_2fc = 0x80;
  auStack_2f4 = SUB1612((undefined1  [16])0x0,4);
  local_2f8 = 0xffffffff;
  local_228 = param_4;
  FUN_1407225a4(local_2d8,&local_1a0,local_328,0);
  local_2e8._8_4_ = 0;
  if (local_2e8._0_8_ != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(local_328);
  FUN_146e931fa(&local_238,local_2d8,param_9);
  if (local_268 != (undefined8 *)0x0) {
    (**(code **)*local_268)(local_268,1);
  }
  local_270 = 0;
  if (local_278 != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(local_2b8);
  FUN_1408bc892(&local_1a0);
  if ((local_a0 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144610acd FUN_144610acd body=887 status=ok
// SIG undefined FUN_144610acd(void)

void FUN_144610acd(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  byte param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_328 [32];
  undefined **local_308;
  undefined8 local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  uint local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  longlong local_268;
  ulonglong uStack_260;
  undefined1 local_250 [32];
  undefined1 local_230 [64];
  longlong local_1f0;
  undefined4 local_1e8;
  undefined8 *local_1e0;
  longlong local_1b0;
  uint local_1a8;
  uint local_1a4;
  longlong local_1a0;
  int local_198;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  uVar4 = *(uint *)(param_1 + 1);
  memset(&local_1b0,0,0x100);
  FUN_1406ea1ca(&local_1a0,uVar4,1);
  if (0 < local_198) {
    lVar7 = 0;
    do {
      *(int *)(local_1a0 + 4 + lVar7 * 8) = (int)lVar7;
      *(int *)(local_1a0 + lVar7 * 8) = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar7 < local_198);
  }
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar4);
  }
  local_1a8 = 0;
  if (local_1a4 != uVar4) {
    FUN_1447a8aa0(&local_1b0,uVar4);
  }
  if (uVar4 != 0) {
    uVar9 = uVar4;
    do {
      uVar6 = local_1a8;
      lVar7 = (longlong)(int)local_1a8;
      local_1a8 = local_1a8 + 1;
      if (local_1a4 < local_1a8) {
        FUN_1403e3958(&local_1b0,uVar6);
      }
      puVar1 = (undefined8 *)(local_1b0 + lVar7 * 0x18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined8 *)(local_1b0 + 0x10 + lVar7 * 0x18) = 0;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    uVar8 = 1;
    if (1 < (int)uVar4) {
      uVar8 = (ulonglong)uVar4;
    }
    lVar7 = 0;
    do {
      lVar5 = *param_1;
      fVar2 = *(float *)(lVar5 + 8 + lVar7);
      fVar3 = *(float *)(lVar5 + 4 + lVar7);
      *(double *)(local_1b0 + lVar7 * 2) = (double)*(float *)(lVar5 + lVar7);
      *(double *)(local_1b0 + 8 + lVar7 * 2) = (double)fVar3;
      *(double *)(local_1b0 + 0x10 + lVar7 * 2) = (double)fVar2;
      lVar7 = lVar7 + 0xc;
    } while (uVar8 * 0xc != lVar7);
  }
  local_2b8 = param_8[2];
  local_2c8 = *param_8;
  uStack_2c0 = param_8[1];
  local_2e0 = *param_7;
  uStack_2d8 = param_7[1];
  local_2d0 = param_7[2];
  local_300 = 0;
  local_308 = &PTR_FUN_149f614d0;
  local_2ec = param_5;
  local_2e8 = param_6;
  local_2b0 = (uint)param_9;
  local_288 = 0;
  uStack_270 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_2a8 = 0;
  uStack_2a0 = 0;
  uStack_280 = 0x8000000000;
  local_278 = 0xffffffff;
  local_2f8 = param_2;
  local_2f4 = param_3;
  local_2f0 = param_4;
  FUN_1407225a4(local_250,&local_1b0,&local_2a8,0);
  uStack_260 = uStack_260 & 0xffffffff00000000;
  if (local_268 != 0) {
    FUN_1400020a8();
  }
  FUN_1401712c0(&local_2a8);
  FUN_146e92576(&local_308,local_250,param_10);
  if (local_1e0 != (undefined8 *)0x0) {
    (**(code **)*local_1e0)(local_1e0,1);
  }
  local_1e8 = 0;
  if (local_1f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1402a03ba(local_230);
  FUN_1408bc892(&local_1b0);
  if ((local_b0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144611768 FUN_144611768 body=781 status=ok
// SIG undefined FUN_144611768(void)

void FUN_144611768(int param_1,int param_2,longlong param_3,longlong *param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  ulonglong uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  undefined4 uStack_68;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = (int)param_4[1];
  *(uint *)(param_4 + 1) = iVar2 + 1U;
  local_a0 = param_3;
  if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
    FUN_144611a76(param_4,iVar2);
  }
  *(ulonglong *)(*param_4 + (longlong)iVar2 * 8) = CONCAT44(param_2,param_1);
  uVar12 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_145c3f772(&local_98,(longlong)param_1 * 0x50 + *(longlong *)(local_a0 + 0x10));
  iVar2 = local_70;
  if (local_64 < (int)uStack_90) {
    if (local_70 == 0) {
      uVar13 = 1;
      iVar8 = 0;
      iVar3 = 0;
    }
    else {
      puVar4 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar4 = local_88;
      }
      uVar5 = *puVar4;
      if (uVar5 == 0) {
        iVar3 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar3 = local_70 + -1;
        }
        uVar12 = 0;
        uVar13 = (ulonglong)(uint)(iVar3 >> 5);
        if (iVar3 >> 5 < 1) {
          uVar13 = uVar12;
        }
        iVar8 = 0;
        do {
          if (uVar13 == uVar12) goto LAB_1446118b8;
          iVar8 = iVar8 + 0x20;
          uVar5 = puVar4[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar12 = 0;
        iVar8 = 0;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar13 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar3 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar3) {
        iVar3 = local_70;
      }
    }
    if (iVar3 != local_70) {
      uVar5 = 0xffffffff;
      do {
        FUN_144611768(*(undefined4 *)(local_98 + (longlong)iVar3 * 0xc),param_2 + 1,local_a0,param_4
                     );
        uVar5 = ~(uint)uVar13 & uVar5;
        puVar4 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar4 = local_88;
        }
        iVar3 = (int)uVar12;
        lVar10 = (longlong)iVar3;
        uVar9 = puVar4[lVar10] & uVar5;
        if (uVar9 == 0) {
          iVar6 = local_70 + 0x1e;
          if (-1 < local_70 + -1) {
            iVar6 = local_70 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar8 = iVar8 + 0x20;
          iVar7 = iVar6;
          if (iVar6 < iVar3) {
            iVar7 = iVar3;
          }
          if (iVar3 < iVar6) {
            lVar11 = 0;
            do {
              uVar9 = puVar4[lVar10 + lVar11 + 1];
              if (uVar9 != 0) {
                uVar12 = (ulonglong)(iVar3 + (int)lVar11 + 1);
                uVar5 = 0xffffffff;
                goto LAB_1446119f5;
              }
              iVar8 = iVar8 + 0x20;
              lVar11 = lVar11 + 1;
            } while (iVar7 - lVar10 != lVar11);
            uVar5 = 0xffffffff;
            lVar10 = (longlong)iVar7;
          }
          uVar12 = lVar10 + 1U & 0xffffffff;
          iVar3 = local_70;
        }
        else {
LAB_1446119f5:
          uVar13 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar13 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar3 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if (local_70 <= iVar3) {
            iVar3 = local_70;
          }
        }
      } while (iVar3 != iVar2);
    }
  }
LAB_1446118b8:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar12 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar12 != 0) {
    FUN_1447a08a2(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144611a76 FUN_144611a76 body=346 status=ok
// SIG undefined FUN_144611a76(void)

void FUN_144611a76(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_144611b08;
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
LAB_144611b08:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 144611bfa FUN_144611bfa body=372 status=ok
// SIG undefined FUN_144611bfa(void)

void FUN_144611bfa(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  int param_5,uint param_6,longlong *param_7)

{
  float *pfVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar22;
  float fVar23;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar24;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  uStack_40 = 0;
  FUN_146eb8859();
  FUN_146bfab7c(param_7,param_6);
  if (0 < (int)param_6) {
    lVar4 = (longlong)param_5 * 0xc;
    lVar10 = 0;
    uVar11 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(param_3 + 0x10) + uVar11 * 4);
      if ((iVar2 < 1) || ((int)uStack_40 <= iVar2)) {
        lVar12 = *(longlong *)(param_4 + 0x10) + lVar4;
        lVar13 = *param_7;
        *(undefined4 *)(lVar13 + 8 + lVar10) = *(undefined4 *)(lVar10 + 8 + lVar12);
        *(undefined8 *)(lVar13 + lVar10) = *(undefined8 *)(lVar10 + lVar12);
      }
      else {
        lVar13 = *(longlong *)(param_4 + 0x10) + lVar4;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = *(ulonglong *)(lVar10 + lVar13);
        auVar21 = insertps(auVar20,*(undefined4 *)(lVar10 + 8 + lVar13),0x28);
        lVar13 = (longlong)
                 *(int *)(*(longlong *)(param_3 + 0x10) + (longlong)param_5 * 4 + uVar11 * 4) * 0x30
        ;
        pfVar1 = (float *)(local_48 + 0x20 + lVar13);
        fVar19 = auVar21._0_4_ * *pfVar1;
        fVar22 = auVar21._4_4_ * pfVar1[1];
        fVar23 = auVar21._8_4_ * pfVar1[2];
        fVar24 = auVar21._12_4_ * pfVar1[3];
        pfVar1 = (float *)(local_48 + lVar13);
        fVar5 = *pfVar1;
        fVar6 = pfVar1[1];
        fVar16 = pfVar1[2];
        fVar7 = pfVar1[3];
        fVar14 = fVar22 * fVar5 - fVar6 * fVar19;
        fVar15 = fVar23 * fVar6 - fVar16 * fVar22;
        fVar17 = fVar19 * fVar16 - fVar5 * fVar23;
        fVar18 = fVar24 * fVar7 - fVar7 * fVar24;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar15 + fVar15;
        fVar17 = fVar17 + fVar17;
        fVar18 = fVar18 + fVar18;
        pfVar1 = (float *)(local_48 + 0x10 + lVar13);
        fVar8 = pfVar1[2];
        fVar9 = pfVar1[3];
        fVar19 = (fVar14 * fVar6 - fVar17 * fVar16) + fVar7 * fVar15 + fVar19 + *pfVar1;
        fVar16 = (fVar15 * fVar16 - fVar14 * fVar5) + fVar7 * fVar17 + fVar22 + pfVar1[1];
        lVar13 = *param_7;
        *(ulonglong *)(lVar13 + lVar10) = CONCAT44(fVar16,fVar19);
        auVar21._4_4_ = fVar16;
        auVar21._0_4_ = fVar19;
        auVar21._8_4_ = (fVar17 * fVar5 - fVar15 * fVar6) + fVar7 * fVar14 + fVar23 + fVar8;
        auVar21._12_4_ = (fVar18 * fVar7 - fVar18 * fVar7) + fVar7 * fVar18 + fVar24 + fVar9;
        uVar3 = extractps(auVar21,2);
        *(undefined8 *)(lVar13 + 8 + lVar10) = uVar3;
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0xc;
    } while (param_6 != uVar11);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144611d6f FUN_144611d6f body=473 status=ok
// SIG undefined FUN_144611d6f(void)

void FUN_144611d6f(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
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
  undefined1 auStack_b8 [44];
  int local_8c [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  fVar14 = 0.0;
  if (0 < param_5) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar2 = *param_1;
    lVar7 = (longlong)param_4;
    lVar6 = (longlong)param_3;
    do {
      lVar4 = *(int *)(lVar1 + lVar7 * 0xc) - lVar6;
      lVar5 = *(int *)(lVar1 + 4 + lVar7 * 0xc) - lVar6;
      lVar8 = *(int *)(lVar1 + 8 + lVar7 * 0xc) - lVar6;
      local_8c[0] = (int)lVar4;
      local_8c[1] = (int)lVar5;
      local_8c[2] = (int)lVar8;
      lVar3 = 0;
      do {
        if ((-1 < local_8c[lVar3]) && (local_8c[lVar3] < (int)param_1[1])) {
          fVar12 = *(float *)(lVar2 + 8 + lVar4 * 0xc);
          fVar9 = *(float *)(lVar2 + 8 + lVar5 * 0xc);
          fVar16 = fVar12 - fVar9;
          fVar13 = *(float *)(lVar2 + lVar4 * 0xc);
          fVar15 = *(float *)(lVar2 + 4 + lVar4 * 0xc);
          fVar10 = *(float *)(lVar2 + lVar5 * 0xc);
          fVar11 = *(float *)(lVar2 + 4 + lVar5 * 0xc);
          fVar17 = fVar15 - fVar11;
          fVar18 = fVar13 - fVar10;
          fVar16 = fVar16 * fVar16 + fVar18 * fVar18 + fVar17 * fVar17;
          if (fVar14 <= fVar16) {
            fVar14 = fVar16;
          }
          fVar16 = *(float *)(lVar2 + 8 + lVar8 * 0xc);
          fVar12 = fVar12 - fVar16;
          fVar17 = *(float *)(lVar2 + lVar8 * 0xc);
          fVar18 = *(float *)(lVar2 + 4 + lVar8 * 0xc);
          fVar15 = fVar15 - fVar18;
          fVar13 = fVar13 - fVar17;
          fVar12 = fVar12 * fVar12 + fVar13 * fVar13 + fVar15 * fVar15;
          if (fVar14 <= fVar12) {
            fVar14 = fVar12;
          }
          fVar9 = fVar9 - fVar16;
          fVar11 = fVar11 - fVar18;
          fVar10 = fVar10 - fVar17;
          fVar12 = fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11;
          if (fVar14 <= fVar12) {
            fVar14 = fVar12;
          }
          break;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 != 3);
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_5 + param_4);
  }
  if (fVar14 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_b8);
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(SQRT(fVar14));
  }
  return;
}



// FUNCTION 144611f7e FUN_144611f7e body=3923 status=ok
// SIG undefined FUN_144611f7e(void)

void FUN_144611f7e(undefined8 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  longlong *_Src;
  void **ppvVar5;
  void *_Src_00;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  void *pvVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  void *pvVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  undefined1 auStack_408 [32];
  longlong **local_3e8;
  undefined1 **local_3e0;
  undefined1 **local_3d8;
  undefined1 **local_3d0;
  longlong *local_3c8;
  void *local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  ulonglong local_3a0;
  float local_394;
  float local_390;
  float local_38c;
  undefined8 local_388;
  float local_380;
  undefined4 local_37c;
  void *local_378;
  int local_370;
  undefined4 local_36c;
  longlong *local_368;
  undefined8 uStack_360;
  double local_358;
  void *local_338;
  undefined8 uStack_330;
  void *local_328;
  undefined8 uStack_320;
  undefined1 *local_318;
  void **local_310;
  longlong local_308;
  undefined8 uStack_300;
  void *local_2f8;
  ulonglong uStack_2f0;
  void *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  void *local_2d8;
  undefined8 uStack_2d0;
  undefined1 *local_2c8;
  ulonglong uStack_2c0;
  longlong local_2b8 [3];
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  longlong local_218 [8];
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 extraout_XMM0_Qb;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_408;
  iVar8 = *(int *)(*(longlong *)*param_1 + (longlong)*param_2 * 8);
  lVar18 = (longlong)iVar8;
  if (lVar18 < 0) goto LAB_144612df9;
  uVar9 = *(uint *)(*(longlong *)*param_1 + 4 + (longlong)*param_2 * 8);
  uVar17 = (ulonglong)uVar9;
  lVar13 = param_1[1];
  if (*(longlong **)(lVar13 + 0x158) == (longlong *)0x0) {
    iVar7 = FUN_1401f66f6(*(undefined8 *)(lVar13 + 0x128),*(undefined8 *)(lVar13 + 0x140));
  }
  else {
    iVar7 = (**(code **)(**(longlong **)(lVar13 + 0x158) + 0x60))();
  }
  if ((int)uVar9 < 0 || iVar7 <= iVar8) goto LAB_144612df9;
  lVar13 = param_1[2];
  if (*(longlong **)(lVar13 + 0x158) == (longlong *)0x0) {
    iVar8 = FUN_1401f66f6(*(undefined8 *)(lVar13 + 0x128),*(undefined8 *)(lVar13 + 0x140));
  }
  else {
    iVar8 = (**(code **)(**(longlong **)(lVar13 + 0x158) + 0x60))();
  }
  if (iVar8 <= (int)uVar9) goto LAB_144612df9;
  local_3d8 = (undefined1 **)local_2b8;
  local_2b8[0] = 0;
  local_2b8[1] = 0;
  lVar13 = param_1[2];
  local_3e0._0_4_ = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar13 + 400) + 0x10) + uVar17 * 4);
  local_3e8._0_4_ =
       *(undefined4 *)(*(longlong *)(*(longlong *)(lVar13 + 0x158) + 0x10) + uVar17 * 4);
  FUN_144611bfa(*(undefined8 *)(lVar13 + 0xe8),*(undefined8 *)(lVar13 + 0x120),
                *(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x78));
  local_3d8 = &local_2c8;
  local_2c8 = (undefined1 *)0x0;
  uStack_2c0 = 0;
  lVar13 = param_1[1];
  local_3e0 = (undefined1 **)
              CONCAT44(local_3e0._4_4_,
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(lVar13 + 400) + 0x10) + lVar18 * 4));
  local_3e8 = (longlong **)
              CONCAT44(local_3e8._4_4_,
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(lVar13 + 0x158) + 0x10) + lVar18 * 4));
  FUN_144611bfa(*(undefined8 *)(lVar13 + 0xe8),*(undefined8 *)(lVar13 + 0x120),
                *(undefined8 *)(lVar13 + 0x40),*(undefined8 *)(lVar13 + 0x78));
  pcVar10 = (char *)param_1[4];
  if (pcVar10[1] == '\0') {
    fVar24 = *(float *)(pcVar10 + 8);
    lVar13 = param_1[1];
    local_3e8._0_4_ =
         *(undefined4 *)(*(longlong *)(*(longlong *)(lVar13 + 0x200) + 0x10) + lVar18 * 4);
    auVar23._0_4_ =
         (float)FUN_144611d6f(&local_2c8,*(undefined8 *)(lVar13 + 0xb0),
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(lVar13 + 0x158) + 0x10) + lVar18 * 4),
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(lVar13 + 0x1c8) + 0x10) + lVar18 * 4));
    lVar13 = param_1[2];
    local_3e8 = (longlong **)
                CONCAT44(local_3e8._4_4_,
                         *(undefined4 *)
                          (*(longlong *)(*(longlong *)(lVar13 + 0x200) + 0x10) + uVar17 * 4));
    auVar22._0_8_ =
         FUN_144611d6f(local_2b8,*(undefined8 *)(lVar13 + 0xb0),
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(lVar13 + 0x158) + 0x10) + uVar17 * 4),
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(lVar13 + 0x1c8) + 0x10) + uVar17 * 4));
    auVar22._8_8_ = extraout_XMM0_Qb;
    if ((float)auVar22._0_8_ <= auVar23._0_4_) {
      auVar23._4_12_ = auVar22._4_12_;
      auVar22 = auVar23;
    }
    dVar1 = (double)(auVar22._0_4_ * fVar24);
    pcVar10 = (char *)param_1[4];
  }
  else {
    dVar1 = *(double *)param_1[3];
  }
  lVar13 = param_1[1];
  lVar14 = (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1[2] + 0x158) + 0x10) + uVar17 * 4);
  iVar8 = *(int *)(*(longlong *)(*(longlong *)(lVar13 + 0x158) + 0x10) + lVar18 * 4);
  lVar15 = (longlong)iVar8;
  local_3b0 = (longlong)*(int *)(*(longlong *)(*(longlong *)(lVar13 + 0x1c8) + 0x10) + lVar18 * 4);
  uVar9 = *(uint *)(*(longlong *)(*(longlong *)(lVar13 + 0x200) + 0x10) + lVar18 * 4);
  uVar16 = (ulonglong)uVar9;
  if (*pcVar10 == '\0') {
    local_3a8 = lVar14;
    pvVar11 = (void *)FUN_144612ed3(local_2b8,(float)dVar1);
    if (0 < (int)uVar9) {
      uVar17 = 0;
      local_3b8 = pvVar11;
      local_3a0 = uVar16;
      do {
        uVar16 = local_3b0 + uVar17;
        lVar18 = *(longlong *)(*(longlong *)(param_1[1] + 0xb0) + 0x10);
        lVar13 = *(int *)(lVar18 + uVar16 * 0xc) - lVar15;
        lVar14 = *(int *)(lVar18 + 4 + uVar16 * 0xc) - lVar15;
        lVar18 = *(int *)(lVar18 + 8 + uVar16 * 0xc) - lVar15;
        local_308 = CONCAT44((int)lVar14,(int)lVar13);
        uStack_300 = CONCAT44(uStack_300._4_4_,(int)lVar18);
        local_2b8[2] = 0;
        uStack_2a0 = 0;
        FUN_1446130a4(local_3b8,&local_2c8,&local_308,local_2b8 + 2);
        if (0 < (int)uStack_2a0) {
          lVar20 = 0;
LAB_144612a02:
          local_328 = *(void **)(local_2c8 + lVar13 * 0xc);
          uStack_320 = CONCAT44(uStack_320._4_4_,*(undefined4 *)(local_2c8 + lVar13 * 0xc + 8));
          local_338 = *(void **)(local_2c8 + lVar14 * 0xc);
          uStack_330 = CONCAT44(uStack_330._4_4_,*(undefined4 *)(local_2c8 + lVar14 * 0xc + 8));
          local_378 = *(void **)(local_2c8 + lVar18 * 0xc);
          local_370 = *(int *)(local_2c8 + lVar18 * 0xc + 8);
          lVar12 = (longlong)*(int *)(local_2b8[2] + lVar20 * 4);
          local_380 = *(float *)(local_2b8[0] + 8 + lVar12 * 0xc);
          local_388 = *(void **)(local_2b8[0] + lVar12 * 0xc);
          local_3e0 = &local_318;
          local_3e8 = (longlong **)&local_388;
          FUN_146e2650c(&local_394,&local_328,&local_338,&local_378);
          fVar25 = SQRT((local_380 - local_38c) * (local_380 - local_38c) +
                        ((float)local_388 - local_394) * ((float)local_388 - local_394) +
                        (local_388._4_4_ - local_390) * (local_388._4_4_ - local_390));
          fVar24 = *(float *)(param_1[4] + 4);
          local_3e8 = (longlong **)CONCAT44(local_3e8._4_4_,1);
          fVar21 = (float)FUN_144611d6f(&local_2c8,*(undefined8 *)(param_1[1] + 0xb0),iVar8,
                                        uVar16 & 0xffffffff);
          fVar21 = fVar21 * fVar24;
          fVar24 = 1.0;
          if (fVar21 < fVar25) {
            fVar24 = (float)(~-(uint)(ABS(fVar21) <= 1e-08) & (uint)(fVar25 / fVar21) |
                            -(uint)(ABS(fVar21) <= 1e-08) & 0x3f800000);
          }
          if (*(char *)(param_1[4] + 2) == '\0') {
            fVar24 = fVar24 * fVar24;
LAB_144612b7b:
            fVar21 = 1.0 / fVar24;
          }
          else {
            fVar21 = 1.0;
            if (*(char *)(param_1[4] + 2) == '\x01') goto LAB_144612b7b;
          }
          if (ABS(fVar21) <= 1e-08) goto code_r0x000144612b90;
          iVar7 = *(int *)(local_2b8[2] + lVar20 * 4);
          local_368 = (longlong *)0x0;
          uStack_360 = (void **)0x0;
          local_2d8 = (void *)0x0;
          uStack_2d0 = 0;
          lVar18 = 0;
          do {
            ppvVar5 = uStack_360;
            iVar4 = *(int *)((longlong)&local_308 + lVar18 * 4);
            lVar13 = (longlong)(int)uStack_360;
            uVar9 = (int)uStack_360 + 1;
            uStack_360 = (void **)CONCAT44(uStack_360._4_4_,uVar9);
            if (uStack_360._4_4_ < uVar9) {
              FUN_1446f48e2(&local_368,(ulonglong)ppvVar5 & 0xffffffff);
            }
            uVar16 = uStack_2d0;
            *(int *)((longlong)local_368 + lVar13 * 4) = iVar4 + iVar8;
            lVar13 = (longlong)(int)uStack_2d0;
            uVar9 = (int)uStack_2d0 + 1;
            uStack_2d0 = CONCAT44(uStack_2d0._4_4_,uVar9);
            if (uStack_2d0._4_4_ < uVar9) {
              FUN_14475e4ac(&local_2d8,uVar16 & 0xffffffff);
            }
            pvVar11 = local_2d8;
            *(undefined4 *)((longlong)local_2d8 + lVar13 * 4) =
                 *(undefined4 *)((longlong)&local_318 + lVar18 * 4);
            lVar18 = lVar18 + 1;
          } while (lVar18 != 3);
          local_2e8 = (void *)0x0;
          lVar18 = (longlong)(int)uStack_2d0;
          local_2e0 = (int)uStack_2d0;
          if (lVar18 == 0) {
            local_2dc = 0;
          }
          else {
            FUN_1447c510a(&local_2e8,uStack_2d0 & 0xffffffff,0);
            memcpy(local_2e8,pvVar11,lVar18 << 2);
          }
          _Src = local_368;
          local_2f8 = (void *)0x0;
          lVar18 = (longlong)(int)uStack_360;
          uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(int)uStack_360);
          if (lVar18 == 0) {
            uStack_2f0 = (ulonglong)uStack_360 & 0xffffffff;
          }
          else {
            FUN_144a06ca8(&local_2f8,(ulonglong)uStack_360 & 0xffffffff,0);
            memcpy(local_2f8,_Src,lVar18 << 2);
          }
          lVar18 = iVar7 + local_3a8;
          FUN_149796632(local_218,&local_2f8,&local_2e8,fVar21);
          FUN_149796710(lVar18 * 0x28 + *(longlong *)param_1[5],local_218);
          if (local_218[2] != 0) {
            FUN_1400020a8();
          }
          if (local_218[0] != 0) {
            FUN_1400020a8();
          }
          if (local_2d8 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (local_368 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_144612ba4:
        if (local_2b8[2] != 0) {
          FUN_1400020a8();
        }
        uVar17 = uVar17 + 1;
        pvVar11 = local_3b8;
      } while (uVar17 != local_3a0);
    }
    if (pvVar11 != (void *)0x0) {
      FUN_146ca59aa(pvVar11);
LAB_144612eb6:
      FUN_1400020a8(pvVar11);
    }
  }
  else if (*pcVar10 == '\x01') {
    uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1[2] + 400) + 0x10) + uVar17 * 4);
    local_2d8 = (void *)0x0;
    uStack_2d0 = 0;
    if ((int)uStack_2c0 < 1) {
      uStack_2d0._0_4_ = 0;
      if ((int)uStack_2c0 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uStack_2c0 & 0xffffffff);
      }
    }
    else {
      uStack_2d0 = uStack_2c0 & 0xffffffff;
      FUN_14026a4e8(&local_2d8,0);
      FUN_144a0693a(local_2d8);
      if (0 < (int)uStack_2d0) {
        lVar18 = 8;
        lVar13 = 0;
        do {
          fVar24 = *(float *)(local_2c8 + lVar18);
          fVar21 = *(float *)(local_2c8 + lVar18 + -4);
          *(double *)((longlong)local_2d8 + lVar18 * 2 + -0x10) =
               (double)*(float *)(local_2c8 + lVar18 + -8);
          *(double *)((longlong)local_2d8 + lVar18 * 2 + -8) = (double)fVar21;
          *(double *)((longlong)local_2d8 + lVar18 * 2) = (double)fVar24;
          lVar13 = lVar13 + 1;
          lVar18 = lVar18 + 0xc;
        } while (lVar13 < (int)uStack_2d0);
      }
    }
    local_2e8 = local_2d8;
    local_1d8 = 0;
    local_1d0 = 0;
    local_218[0] = 0;
    local_218[1] = 0;
    local_218[2] = 0;
    local_218[3] = 0;
    local_218[4] = 0;
    local_218[5] = 0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_178 = 0;
    local_170 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_16c = 0xffffffff00000080;
    local_164 = 0;
    local_158 = 0;
    local_150 = 0;
    local_128 = 0;
    local_120 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_11c = 0xffffffff00000080;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_2f8 = (void *)0x0;
    uStack_2f0 = 0;
    local_3b8 = (void *)(ulonglong)uVar3;
    local_2e0 = (int)uStack_2d0;
    FUN_146d84902(&local_2f8,uVar16,1);
    if (0 < (int)uVar9) {
      lVar18 = 0;
      do {
        lVar13 = *(longlong *)(*(longlong *)(param_1[1] + 0xb0) + 0x10) + local_3b0 * 0xc + 8;
        iVar7 = *(int *)(lVar18 + -4 + lVar13);
        iVar4 = *(int *)(lVar18 + lVar13);
        *(int *)((longlong)local_2f8 + lVar18) = *(int *)(lVar18 + -8 + lVar13) - iVar8;
        *(int *)((longlong)local_2f8 + lVar18 + 4) = iVar7 - iVar8;
        *(int *)((longlong)local_2f8 + lVar18 + 8) = iVar4 - iVar8;
        lVar18 = lVar18 + 0xc;
      } while (uVar16 * 0xc != lVar18);
    }
    local_3e8 = (longlong **)CONCAT71(local_3e8._1_7_,1);
    FUN_146e2848c(local_218,&local_2f8,0,0xffffffff);
    local_260 = 0;
    local_258 = 0;
    local_2b8[2] = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_254 = 0xffffffff00000080;
    local_24c = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    uStack_360 = &local_2e8;
    local_368 = local_218;
    FUN_1429e1d4e(local_2b8 + 2,&local_368,dVar1);
    if (0 < (int)local_3b8) {
      pvVar19 = (void *)0x0;
      pvVar11 = local_3b8;
      local_3a8 = lVar14;
      do {
        local_308 = 0;
        uStack_300 = 0;
        local_310 = &local_328;
        local_318 = &LAB_1446132ee;
        local_358 = (double)*(float *)(local_2b8[0] + 8 + (longlong)pvVar19 * 0xc);
        uStack_360 = (void **)(double)*(float *)(local_2b8[0] + 4 + (longlong)pvVar19 * 0xc);
        local_368 = (longlong *)(double)*(float *)(local_2b8[0] + (longlong)pvVar19 * 0xc);
        local_3c8 = &local_308;
        local_3d0 = &local_318;
        local_3e8 = &local_368;
        local_3e0 = (undefined1 **)(dVar1 * 0.5);
        local_3d8 = (undefined1 **)(dVar1 * 0.5);
        cVar6 = FUN_1429e1f34(local_218,local_2b8 + 2,&local_2e8,(ulonglong)pvVar19 & 0xffffffff);
        if (cVar6 != '\0') {
          if ((longlong)(int)uStack_300 != 0) {
            lVar14 = (longlong)(int)uStack_300 * 0x70 + local_308;
            lVar18 = param_1[4];
            lVar13 = local_308;
LAB_144612621:
            dVar2 = *(double *)(lVar13 + 0x60);
            fVar24 = *(float *)(lVar18 + 4);
            local_3e8 = (longlong **)CONCAT44(local_3e8._4_4_,1);
            fVar21 = (float)FUN_144611d6f(&local_2c8,*(undefined8 *)(param_1[1] + 0xb0),iVar8,
                                          *(int *)(lVar13 + 8) + (int)local_3b0);
            fVar21 = fVar21 * fVar24;
            fVar24 = 1.0;
            if (fVar21 < ABS((float)dVar2)) {
              fVar24 = (float)(~-(uint)(ABS(fVar21) <= 1e-08) & (uint)(ABS((float)dVar2) / fVar21) |
                              -(uint)(ABS(fVar21) <= 1e-08) & 0x3f800000);
            }
            lVar18 = param_1[4];
            if (*(char *)(lVar18 + 2) == '\0') {
              fVar24 = fVar24 * fVar24;
LAB_1446126a2:
              fVar21 = 1.0 / fVar24;
            }
            else {
              fVar21 = 1.0;
              if (*(char *)(lVar18 + 2) == '\x01') goto LAB_1446126a2;
            }
            if (ABS(fVar21) <= 1e-08) goto code_r0x0001446126b7;
            local_3a0 = (ulonglong)*(int *)(lVar13 + 4);
            local_328 = (void *)0x0;
            uStack_320 = 0;
            local_338 = (void *)0x0;
            uStack_330 = 0;
            lVar18 = 0;
            do {
              uVar17 = uStack_320;
              iVar7 = *(int *)(lVar13 + 8) + (int)local_3b0;
              lVar14 = *(longlong *)(*(longlong *)(param_1[1] + 0xb0) + 0x10);
              lVar15 = (longlong)(int)(float)uStack_320;
              uVar9 = (int)(float)uStack_320 + 1;
              uStack_320 = CONCAT44(uStack_320._4_4_,uVar9);
              if (uStack_320._4_4_ < uVar9) {
                FUN_1446f48e2(&local_328,uVar17 & 0xffffffff);
              }
              uVar17 = uStack_330;
              *(undefined4 *)((longlong)local_328 + lVar15 * 4) =
                   *(undefined4 *)((longlong)iVar7 * 0xc + lVar14 + lVar18 * 4);
              dVar2 = *(double *)(lVar13 + 0x18 + lVar18 * 8);
              lVar14 = (longlong)(int)uStack_330;
              uVar9 = (int)uStack_330 + 1;
              uStack_330 = CONCAT44(uStack_330._4_4_,uVar9);
              if (uStack_330._4_4_ < uVar9) {
                FUN_14475e4ac(&local_338,uVar17 & 0xffffffff);
              }
              pvVar11 = local_338;
              lVar18 = lVar18 + 1;
              *(float *)((longlong)local_338 + lVar14 * 4) = (float)dVar2;
            } while (lVar18 != 3);
            local_378 = (void *)0x0;
            lVar18 = (longlong)(int)uStack_330;
            local_370 = (int)uStack_330;
            if (lVar18 == 0) {
              local_36c = 0;
            }
            else {
              FUN_1447c510a(&local_378,uStack_330 & 0xffffffff,0);
              memcpy(local_378,pvVar11,lVar18 << 2);
            }
            _Src_00 = local_328;
            pvVar11 = local_3b8;
            local_388 = (void *)0x0;
            lVar18 = (longlong)(int)(float)uStack_320;
            local_380 = (float)uStack_320;
            if (lVar18 == 0) {
              local_37c = 0;
            }
            else {
              FUN_144a06ca8(&local_388,uStack_320 & 0xffffffff,0);
              memcpy(local_388,_Src_00,lVar18 << 2);
            }
            lVar18 = local_3a0 + local_3a8;
            FUN_149796632(&local_368,&local_388,&local_378,fVar21);
            FUN_149796710(lVar18 * 0x28 + *(longlong *)param_1[5],&local_368);
            if (local_358 != 0.0) {
              FUN_1400020a8();
            }
            if (local_368 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            if (local_338 != (void *)0x0) {
              FUN_1400020a8();
            }
            if (local_328 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
        }
LAB_1446126cc:
        if (local_308 != 0) {
          FUN_1400020a8(local_308);
        }
        pvVar19 = (void *)((longlong)pvVar19 + 1);
      } while (pvVar19 != pvVar11);
    }
    FUN_146e4e938(local_2b8 + 2);
    if (local_2f8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_14062bdec(local_218);
    pvVar11 = local_2d8;
    if (local_2d8 != (void *)0x0) goto LAB_144612eb6;
  }
  if (local_2c8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_2b8[0] != 0) {
    FUN_1400020a8();
  }
LAB_144612df9:
  if ((local_d0 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000144612b90:
  lVar20 = lVar20 + 1;
  if ((int)uStack_2a0 <= lVar20) goto LAB_144612ba4;
  goto LAB_144612a02;
code_r0x0001446126b7:
  lVar13 = lVar13 + 0x70;
  if (lVar13 == lVar14) goto LAB_1446126cc;
  goto LAB_144612621;
}



// FUNCTION 144612ed3 FUN_144612ed3 body=464 status=ok
// SIG undefined FUN_144612ed3(void)

undefined8 FUN_144612ed3(longlong *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  ulonglong uStack_90;
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  double local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined2 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88[0] = 0;
  local_88[1] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_70 = 0;
  local_60 = 0x101;
  local_5e = 1;
  local_5c = 0;
  local_78 = &PTR_FUN_149f48e60;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_68 = (double)param_2;
  FUN_14979678a(&local_98,&local_78,(int)param_1[1]);
  local_78._0_4_ = 0x49f553e0;
  local_78._4_4_ = 1;
  FUN_149796836(local_88,(int)param_1[1],1);
  if (0 < (int)param_1[1]) {
    lVar5 = 8;
    lVar7 = 0;
    lVar8 = 0;
    do {
      lVar4 = *param_1;
      fVar1 = *(float *)(lVar4 + lVar5);
      fVar2 = *(float *)(lVar4 + -4 + lVar5);
      fVar3 = *(float *)(lVar4 + -8 + lVar5);
      local_78._0_4_ = 0;
      local_a0 = 0;
      *(undefined1 *)(local_98 + 0x1c + lVar7) = 0;
      *(undefined2 *)(local_98 + 0x18 + lVar7) = 0x101;
      *(undefined1 *)(local_98 + 0x1a + lVar7) = 1;
      *(double *)(local_98 + 0x20 + lVar7) = (double)fVar3;
      *(double *)(local_98 + 0x28 + lVar7) = (double)fVar2;
      *(double *)(local_98 + 0x30 + lVar7) = (double)fVar1;
      *(double *)(local_98 + 0x10 + lVar7) = (double)param_2;
      *(longlong *)(local_88[0] + lVar8 * 8) = local_98 + lVar7;
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x38;
      lVar5 = lVar5 + 0xc;
    } while (lVar8 < (int)param_1[1]);
  }
  uVar6 = FUN_14001cc68(0xd8,0x10);
  local_a8 = 0;
  FUN_146c9dee8(uVar6,local_88,0xc,0);
  FUN_1497968f9(local_98,uStack_90 & 0xffffffff);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446130a4 FUN_1446130a4 body=584 status=ok
// SIG undefined FUN_1446130a4(void)

void FUN_1446130a4(undefined8 param_1,longlong *param_2,int *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  longlong local_78;
  int local_70;
  double local_68;
  double local_60;
  double local_58;
  longlong local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    FUN_14481578e(param_4,0);
  }
  lVar3 = (longlong)*param_3;
  lVar4 = *param_2;
  local_58 = (double)*(float *)(lVar4 + 8 + lVar3 * 0xc);
  local_60 = (double)*(float *)(lVar4 + 4 + lVar3 * 0xc);
  local_68 = (double)*(float *)(lVar4 + lVar3 * 0xc);
  FUN_146c9e2ce(param_1,&local_50,&local_68);
  lVar3 = (longlong)param_3[1];
  lVar4 = *param_2;
  local_58 = (double)*(float *)(lVar4 + 8 + lVar3 * 0xc);
  local_60 = (double)*(float *)(lVar4 + 4 + lVar3 * 0xc);
  local_68 = (double)*(float *)(lVar4 + lVar3 * 0xc);
  FUN_146c9e2ce(param_1,&local_78,&local_68);
  lVar3 = (longlong)param_3[2];
  lVar4 = *param_2;
  local_58 = (double)*(float *)(lVar4 + 8 + lVar3 * 0xc);
  local_60 = (double)*(float *)(lVar4 + 4 + lVar3 * 0xc);
  local_68 = (double)*(float *)(lVar4 + lVar3 * 0xc);
  FUN_146c9e2ce(param_1,&local_88,&local_68);
  FUN_144958a06(local_50,local_48);
  FUN_144958a06(local_78,local_70);
  FUN_144958a06(local_88,local_80);
  if (local_48 < 1) {
LAB_144613299:
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar4 = 0;
  iVar2 = local_48;
LAB_14461320c:
  lVar3 = local_50;
  if ((longlong)local_70 != 0) {
    iVar1 = *(int *)(local_50 + lVar4 * 4);
    lVar5 = 0;
    do {
      if (*(int *)(local_78 + lVar5) == iVar1) {
        if ((longlong)local_80 != 0) {
          lVar5 = 0;
          goto LAB_144613252;
        }
        break;
      }
      lVar5 = lVar5 + 4;
    } while ((longlong)local_70 * 4 != lVar5);
  }
  goto LAB_14461328a;
  while (lVar5 = lVar5 + 4, (longlong)local_80 * 4 != lVar5) {
LAB_144613252:
    if (*(int *)(local_88 + lVar5) == iVar1) {
      iVar2 = (int)param_4[1];
      *(uint *)(param_4 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_4 + 0xc) < iVar2 + 1U) {
        FUN_1446f48e2(param_4,iVar2);
      }
      *(undefined4 *)(*param_4 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 + lVar4 * 4);
      iVar2 = local_48;
      break;
    }
  }
LAB_14461328a:
  lVar4 = lVar4 + 1;
  if (iVar2 <= lVar4) goto LAB_144613299;
  goto LAB_14461320c;
}



// FUNCTION 144613364 FUN_144613364 body=29 status=ok
// SIG undefined FUN_144613364(void)

undefined8 FUN_144613364(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144613382 FUN_144613382 body=437 status=ok
// SIG undefined FUN_144613382(void)

void FUN_144613382(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  plVar1 = (longlong *)(*(longlong *)(param_1[2] + 0x10) + (longlong)*param_2 * 0x50);
  lVar5 = *(longlong *)(param_1[2] + 0x10) + (longlong)*param_2 * 0x50;
  puVar6 = (uint *)(lVar5 + 0x10);
  iVar3 = *(int *)(lVar5 + 0x28);
  if (iVar3 == 0) {
    uVar15 = 1;
    uVar13 = 0;
    iVar12 = 0;
    iVar10 = 0;
  }
  else {
    puVar14 = (uint *)plVar1[4];
    if ((uint *)plVar1[4] == (uint *)0x0) {
      puVar14 = puVar6;
    }
    uVar11 = *puVar14;
    if (uVar11 == 0) {
      iVar10 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar10 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar15 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar15 = uVar13;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar13) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar14[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar13 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = uVar15 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    iVar10 = (iVar12 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar10) {
      iVar10 = iVar3;
    }
  }
  if (iVar10 != iVar3) {
    uVar11 = 0xffffffff;
    do {
      *(float *)*param_1 =
           *(float *)(*(longlong *)
                       (*(longlong *)(param_1[1] + 0x10) +
                       (longlong)*(int *)(*plVar1 + (longlong)iVar10 * 0xc) * 8) + 0x68) +
           *(float *)*param_1;
      uVar11 = ~(uint)uVar15 & uVar11;
      puVar14 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar14 = puVar6;
      }
      iVar4 = (int)plVar1[5];
      iVar10 = (int)uVar13;
      lVar5 = (longlong)iVar10;
      uVar7 = puVar14[lVar5] & uVar11;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar10) {
          iVar9 = iVar10;
        }
        if (iVar10 < iVar8) {
          lVar16 = 0;
          do {
            uVar7 = puVar14[lVar5 + lVar16 + 1];
            if (uVar7 != 0) {
              uVar13 = (ulonglong)(iVar10 + (int)lVar16 + 1);
              uVar11 = 0xffffffff;
              goto LAB_1446134e8;
            }
            iVar12 = iVar12 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar9 - lVar5 != lVar16);
          uVar11 = 0xffffffff;
          lVar5 = (longlong)iVar9;
        }
        uVar13 = lVar5 + 1U & 0xffffffff;
        iVar10 = iVar4;
      }
      else {
LAB_1446134e8:
        uVar15 = (ulonglong)(-uVar7 & uVar7);
        uVar2 = uVar15 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar10 = (iVar12 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar10) {
          iVar10 = iVar4;
        }
      }
    } while (iVar10 != iVar3);
  }
  return;
}



// FUNCTION 144613538 FUN_144613538 body=51 status=ok
// SIG undefined FUN_144613538(void)

void FUN_144613538(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 14461356b FUN_14461356b body=796 status=ok
// SIG undefined FUN_14461356b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461356b(void)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = &PTR_FUN_14be2ee00;
  uStack_58 = 2;
  local_68 = 8;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be2ee40);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14be2fb50;
  local_68 = 10;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be2fb70);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be303e0);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14be309f0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be30a10);
  FUN_1400b22c2(&local_48,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_48,&DAT_14cc24eb0);
  if (cVar1 == '\0') {
    _DAT_14cc24eb0 = 0;
    uRam000000014cc24eb8 = 0;
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 0xd;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be346d0);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14be35a10;
  local_68 = 0xb;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be35a30);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14be3a560;
  local_68 = 0x39;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be3a580);
  uStack_58 = 1;
  local_60 = &PTR_FUN_14be3c0b0;
  local_68 = 10;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be3c0d0);
  local_60 = &PTR_FUN_14be41460;
  uStack_58 = 9;
  local_68 = 0x23;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be41580);
  local_48 = -0x7ffffffeb41be440;
  local_34 = 0x17;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_146757f5c(&local_48);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be42100);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 3;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be431d0);
  local_60 = &PTR_FUN_14be47a90;
  uStack_58 = 5;
  local_68 = 0x22;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be47b30);
  uStack_58 = 3;
  local_60 = &PTR_FUN_14be48d80;
  local_68 = 3;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be48de0);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be48fd0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446138ce FUN_1446138ce body=188 status=ok
// SIG undefined FUN_1446138ce(void)

void FUN_1446138ce(void)

{
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be6ed40,1,0,0);
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be6f0b0,1,0,0);
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be6f2f0,1,0,0);
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be6f500,1,0,0);
  FUN_14282b410(L"/Script/GeometryCollectionNodes",0,0,&PTR_FUN_14be6f6d0,1,0,0);
  return;
}



// FUNCTION 14461398c FUN_14461398c body=57 status=ok
// SIG undefined FUN_14461398c(void)

void FUN_14461398c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc261a0 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc261a0 = FUN_14171c317(FUN_14675b70b,uVar1,L"EDataflowTransferNodeFalloff");
  }
  return;
}



// FUNCTION 1446139c5 FUN_1446139c5 body=57 status=ok
// SIG undefined FUN_1446139c5(void)

void FUN_1446139c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc261b8 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc261b8 = FUN_14171c317(FUN_14675b73a,uVar1,L"EDataflowTransferNodeSampleScale");
  }
  return;
}



// FUNCTION 1446139fe FUN_1446139fe body=57 status=ok
// SIG undefined FUN_1446139fe(void)

void FUN_1446139fe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc261d0 == 0) {
    uVar1 = FUN_14596eea1();
    DAT_14cc261d0 = FUN_14171c317(FUN_14675b769,uVar1,L"EDataflowTransferNodeBoundingVolume");
  }
  return;
}



// FUNCTION 144613a62 FUN_144613a62 body=3302 status=ok
// SIG undefined FUN_144613a62(void)

void FUN_144613a62(undefined8 *param_1,int *param_2)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  float fVar29;
  undefined1 auStack_3b8 [32];
  longlong **local_398;
  longlong **local_390;
  longlong **local_388;
  undefined8 *local_380;
  undefined8 *local_378;
  ulonglong local_368;
  int local_35c;
  longlong local_358;
  longlong local_350;
  longlong local_348;
  longlong local_340;
  longlong *local_338;
  undefined8 *puStack_330;
  undefined8 local_328;
  undefined1 local_319;
  undefined8 local_318;
  undefined1 *local_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  float local_2e0;
  undefined8 local_2d8;
  ulonglong uStack_2d0;
  longlong *local_2c8;
  ulonglong uStack_2c0;
  longlong local_2b8 [2];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_254;
  undefined4 local_24c;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  longlong local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  undefined8 extraout_XMM0_Qb;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  iVar11 = *(int *)(*(longlong *)*param_1 + (longlong)*param_2 * 8);
  lVar14 = (longlong)iVar11;
  if (lVar14 < 0) goto LAB_144613b58;
  lVar6 = param_1[4];
  uVar20 = *(uint *)(*(longlong *)*param_1 + 4 + (longlong)*param_2 * 8);
  uVar19 = (ulonglong)uVar20;
  lVar17 = param_1[1];
  if (*(longlong **)(lVar17 + 0x158) == (longlong *)0x0) {
    iVar10 = FUN_1401f66f6(*(undefined8 *)(lVar17 + 0x128),*(undefined8 *)(lVar17 + 0x140));
  }
  else {
    iVar10 = (**(code **)(**(longlong **)(lVar17 + 0x158) + 0x60))();
  }
  if ((int)uVar20 < 0 || iVar10 <= iVar11) goto LAB_144613b58;
  lVar17 = param_1[2];
  if (*(longlong **)(lVar17 + 0x158) == (longlong *)0x0) {
    iVar11 = FUN_1401f66f6(*(undefined8 *)(lVar17 + 0x128),*(undefined8 *)(lVar17 + 0x140));
  }
  else {
    iVar11 = (**(code **)(**(longlong **)(lVar17 + 0x158) + 0x60))();
  }
  if (iVar11 <= (int)uVar20) goto LAB_144613b58;
  local_388 = (longlong **)local_2b8;
  local_2b8[0] = 0;
  local_2b8[1] = 0;
  lVar17 = param_1[2];
  local_390._0_4_ = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar17 + 400) + 0x10) + uVar19 * 4);
  local_398._0_4_ =
       *(undefined4 *)(*(longlong *)(*(longlong *)(lVar17 + 0x158) + 0x10) + uVar19 * 4);
  FUN_1497c739a(*(undefined8 *)(lVar17 + 0xe8),*(undefined8 *)(lVar17 + 0x120),
                *(undefined8 *)(lVar17 + 0x40),*(undefined8 *)(lVar17 + 0x78));
  local_388 = &local_2c8;
  local_2c8 = (longlong *)0x0;
  uStack_2c0 = 0;
  lVar17 = param_1[1];
  local_390 = (longlong **)
              CONCAT44(local_390._4_4_,
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(lVar17 + 400) + 0x10) + lVar14 * 4));
  local_398 = (longlong **)
              CONCAT44(local_398._4_4_,
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(lVar17 + 0x158) + 0x10) + lVar14 * 4));
  FUN_1497c739a(*(undefined8 *)(lVar17 + 0xe8),*(undefined8 *)(lVar17 + 0x120),
                *(undefined8 *)(lVar17 + 0x40));
  if (*(char *)(lVar6 + 0x319) == '\0') {
    fVar28 = *(float *)(lVar6 + 800);
    lVar17 = param_1[1];
    local_398._0_4_ =
         *(undefined4 *)(*(longlong *)(*(longlong *)(lVar17 + 0x200) + 0x10) + lVar14 * 4);
    auVar27._0_4_ =
         (float)FUN_1497c75f6(&local_2c8,*(undefined8 *)(lVar17 + 0xb0),
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(lVar17 + 0x158) + 0x10) + lVar14 * 4),
                              *(undefined4 *)
                               (*(longlong *)(*(longlong *)(lVar17 + 0x1c8) + 0x10) + lVar14 * 4));
    lVar17 = param_1[2];
    local_398 = (longlong **)
                CONCAT44(local_398._4_4_,
                         *(undefined4 *)
                          (*(longlong *)(*(longlong *)(lVar17 + 0x200) + 0x10) + uVar19 * 4));
    auVar26._0_8_ =
         FUN_1497c75f6(local_2b8,*(undefined8 *)(lVar17 + 0xb0),
                       *(undefined4 *)
                        (*(longlong *)(*(longlong *)(lVar17 + 0x158) + 0x10) + uVar19 * 4));
    auVar26._8_8_ = extraout_XMM0_Qb;
    if ((float)auVar26._0_8_ <= auVar27._0_4_) {
      auVar27._4_12_ = auVar26._4_12_;
      auVar26 = auVar27;
    }
    dVar2 = (double)(auVar26._0_4_ * fVar28);
  }
  else {
    dVar2 = *(double *)param_1[3];
  }
  lVar17 = param_1[1];
  local_35c = *(int *)(*(longlong *)(*(longlong *)(param_1[2] + 0x158) + 0x10) + uVar19 * 4);
  iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x158) + 0x10) + lVar14 * 4);
  lVar16 = (longlong)iVar11;
  local_358 = (longlong)*(int *)(*(longlong *)(*(longlong *)(lVar17 + 0x1c8) + 0x10) + lVar14 * 4);
  uVar20 = *(uint *)(*(longlong *)(*(longlong *)(lVar17 + 0x200) + 0x10) + lVar14 * 4);
  uVar22 = (ulonglong)uVar20;
  if (*(char *)(lVar6 + 0x318) == '\0') {
    local_368 = uVar22;
    lVar14 = FUN_1497c7832(local_2b8,(float)dVar2);
    if (0 < (int)local_368) {
      uVar22 = 0;
      uVar19 = local_368;
      local_350 = lVar14;
      do {
        uVar21 = local_358 + uVar22;
        lVar17 = *(longlong *)(*(longlong *)(param_1[1] + 0xb0) + 0x10);
        lVar13 = (longlong)*(int *)(lVar17 + uVar21 * 0xc);
        lVar18 = (longlong)*(int *)(lVar17 + 4 + uVar21 * 0xc);
        lVar12 = (longlong)*(int *)(lVar17 + 8 + uVar21 * 0xc);
        lVar23 = lVar13 - lVar16;
        lVar24 = lVar18 - lVar16;
        lVar15 = lVar12 - lVar16;
        local_2a8 = CONCAT44((int)lVar24,(int)lVar23);
        uStack_2a0 = CONCAT44(uStack_2a0._4_4_,(int)lVar15);
        lVar17 = *(longlong *)(*(longlong *)param_1[6] + 0x10);
        if (1e-08 < ABS(*(float *)(lVar17 + lVar13 * 4) + *(float *)(lVar17 + lVar18 * 4) +
                        *(float *)(lVar17 + lVar12 * 4))) {
          local_218 = 0;
          uStack_210 = 0;
          FUN_1497c79f4(lVar14,&local_2c8,&local_2a8,&local_218);
          if (0 < (int)uStack_210) {
            local_340 = lVar24 * 3;
            local_348 = lVar15 * 3;
            lVar14 = 0;
            do {
              local_2d8 = CONCAT44((float)(double)local_2c8[lVar23 * 3 + 1],
                                   (float)(double)local_2c8[lVar23 * 3]);
              uStack_2d0 = CONCAT44(uStack_2d0._4_4_,(float)(double)local_2c8[lVar23 * 3 + 2]);
              local_2e0 = (float)(double)local_2c8[local_340 + 2];
              local_2e8 = CONCAT44((float)(double)local_2c8[local_340 + 1],
                                   (float)(double)local_2c8[local_340]);
              local_2f8 = CONCAT44((float)(double)local_2c8[local_348 + 1],
                                   (float)(double)local_2c8[local_348]);
              uStack_2f0 = CONCAT44(uStack_2f0._4_4_,(float)(double)local_2c8[local_348 + 2]);
              lVar17 = (longlong)*(int *)(local_218 + lVar14 * 4);
              local_308 = CONCAT44((float)*(double *)(local_2b8[0] + 8 + lVar17 * 0x18),
                                   (float)*(double *)(local_2b8[0] + lVar17 * 0x18));
              uStack_300 = CONCAT44(uStack_300._4_4_,
                                    (float)*(double *)(local_2b8[0] + 0x10 + lVar17 * 0x18));
              local_390 = &local_338;
              local_398 = (longlong **)&local_308;
              FUN_146e2650c(&local_318,&local_2d8,&local_2e8,&local_2f8);
              fVar29 = SQRT(((float)uStack_300 - local_310._0_4_) *
                            ((float)uStack_300 - local_310._0_4_) +
                            ((float)local_308 - (float)local_318) *
                            ((float)local_308 - (float)local_318) +
                            (local_308._4_4_ - local_318._4_4_) *
                            (local_308._4_4_ - local_318._4_4_));
              fVar28 = *(float *)(lVar6 + 0x31c);
              local_398 = (longlong **)CONCAT44(local_398._4_4_,1);
              fVar25 = (float)FUN_1497c75f6(&local_2c8,*(undefined8 *)(param_1[1] + 0xb0),iVar11,
                                            uVar21 & 0xffffffff);
              fVar25 = fVar25 * fVar28;
              fVar28 = 1.0;
              if (fVar25 < fVar29) {
                fVar28 = (float)(~-(uint)(ABS(fVar25) <= 1e-08) & (uint)(fVar29 / fVar25) |
                                -(uint)(ABS(fVar25) <= 1e-08) & 0x3f800000);
              }
              if (*(char *)(lVar6 + 0x31a) == '\0') {
                fVar28 = fVar28 * fVar28;
LAB_14461464f:
                fVar25 = 1.0 / fVar28;
              }
              else {
                fVar25 = 1.0;
                if (*(char *)(lVar6 + 0x31a) == '\x01') goto LAB_14461464f;
              }
              if (((1e-08 < ABS(fVar25)) &&
                  (uVar20 = *(int *)(local_218 + lVar14 * 4) + local_35c, -1 < (int)uVar20)) &&
                 (iVar10 = (**(code **)(**(longlong **)param_1[5] + 0x60))(), (int)uVar20 < iVar10))
              {
                fVar28 = 0.0;
                lVar17 = 0;
                do {
                  fVar28 = fVar28 + *(float *)((longlong)&local_338 + lVar17 * 4) *
                                    *(float *)(*(longlong *)(*(longlong *)param_1[6] + 0x10) +
                                              (*(int *)((longlong)&local_2a8 + lVar17 * 4) + lVar16)
                                              * 4) * fVar25;
                  lVar17 = lVar17 + 1;
                } while (lVar17 != 3);
                fVar25 = *(float *)(*(longlong *)(*(longlong *)param_1[5] + 0x10) +
                                   (ulonglong)uVar20 * 4);
                if (fVar25 <= fVar28) {
                  fVar25 = fVar28;
                }
                *(float *)(*(longlong *)(*(longlong *)param_1[5] + 0x10) + (ulonglong)uVar20 * 4) =
                     fVar25;
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < (int)uStack_210);
          }
          uVar19 = local_368;
          lVar14 = local_350;
          if (local_218 != 0) {
            FUN_1400020a8();
            uVar19 = local_368;
            lVar14 = local_350;
          }
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar19);
    }
    if (lVar14 != 0) {
      FUN_146ca59aa(lVar14);
LAB_144614315:
      FUN_1400020a8(lVar14);
    }
  }
  else if (*(char *)(lVar6 + 0x318) == '\x01') {
    uVar4 = *(uint *)(*(longlong *)(*(longlong *)(param_1[2] + 400) + 0x10) + uVar19 * 4);
    uVar19 = (ulonglong)uVar4;
    local_2d8 = 0;
    uStack_2d0 = 0;
    uVar21 = uStack_2c0 & 0xffffffff;
    local_368 = uVar19;
    if ((int)uStack_2c0 < 1) {
      if ((int)uStack_2c0 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar21);
      }
      uStack_2d0._0_4_ = 0.0;
    }
    else {
      uStack_2d0 = uStack_2c0 & 0xffffffff;
      FUN_14026a4e8(&local_2d8,0);
      FUN_144a0693a(local_2d8,uVar21);
      if (0 < (longlong)(int)(float)uStack_2d0) {
        lVar14 = 0;
        do {
          uVar7 = *(undefined8 *)((longlong)local_2c8 + lVar14);
          uVar8 = ((undefined8 *)((longlong)local_2c8 + lVar14))[1];
          *(undefined8 *)(local_2d8 + 0x10 + lVar14) =
               *(undefined8 *)((longlong)local_2c8 + lVar14 + 0x10);
          *(undefined8 *)(local_2d8 + lVar14) = uVar7;
          ((undefined8 *)(local_2d8 + lVar14))[1] = uVar8;
          lVar14 = lVar14 + 0x18;
        } while ((longlong)(int)(float)uStack_2d0 * 0x18 != lVar14);
      }
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_218 = 0;
    uStack_210 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1cc = 0xffffffff00000080;
    local_1c4 = 0;
    local_1b8 = 0;
    local_1b0 = 0;
    local_178 = 0;
    local_170 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_16c = 0xffffffff00000080;
    local_164 = 0;
    local_158 = 0;
    local_150 = 0;
    local_128 = 0;
    local_120 = 0;
    local_148 = 0;
    uStack_140 = 0;
    local_11c = 0xffffffff00000080;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    local_2f8 = 0;
    uStack_2f0 = 0;
    local_2e8 = local_2d8;
    local_2e0 = (float)uStack_2d0;
    FUN_146d84902(&local_2f8,uVar22,1);
    if (0 < (int)uVar20) {
      lVar14 = 0;
      do {
        lVar17 = *(longlong *)(*(longlong *)(param_1[1] + 0xb0) + 0x10) + local_358 * 0xc + 8;
        iVar10 = *(int *)(lVar14 + -4 + lVar17);
        iVar5 = *(int *)(lVar14 + lVar17);
        *(int *)(local_2f8 + lVar14) = *(int *)(lVar14 + -8 + lVar17) - iVar11;
        *(int *)(local_2f8 + 4 + lVar14) = iVar10 - iVar11;
        *(int *)(local_2f8 + 8 + lVar14) = iVar5 - iVar11;
        lVar14 = lVar14 + 0xc;
      } while (uVar22 * 0xc != lVar14);
    }
    local_398 = (longlong **)CONCAT71(local_398._1_7_,1);
    FUN_146e2848c(&local_218,&local_2f8,0,0xffffffff);
    local_260 = 0;
    local_258 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_288 = 0;
    local_280 = 0;
    uStack_278 = 0;
    local_254 = 0xffffffff00000080;
    local_24c = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    puStack_330 = &local_2e8;
    local_338 = &local_218;
    FUN_1429e1d4e(&local_2a8,&local_338,dVar2);
    if (0 < (int)uVar4) {
      uVar22 = 0;
      do {
        local_308 = 0;
        uStack_300 = 0;
        local_310 = &local_319;
        local_318 = &LAB_14461474a;
        local_328 = *(undefined8 *)(local_2b8[0] + 0x10 + uVar22 * 0x18);
        plVar1 = (longlong *)(local_2b8[0] + uVar22 * 0x18);
        local_338 = (longlong *)*plVar1;
        puStack_330 = (undefined8 *)plVar1[1];
        local_378 = &local_308;
        local_380 = &local_318;
        local_398 = &local_338;
        local_390 = (longlong **)(dVar2 * 0.5);
        local_388 = (longlong **)(dVar2 * 0.5);
        cVar9 = FUN_1429e1f34(&local_218,&local_2a8,&local_2e8,uVar22 & 0xffffffff);
        if (cVar9 != '\0') {
          if ((longlong)(int)(float)uStack_300 != 0) {
            lVar17 = (longlong)(int)(float)uStack_300 * 0x70 + local_308;
            lVar14 = local_308;
            do {
              dVar3 = *(double *)(lVar14 + 0x60);
              fVar28 = *(float *)(lVar6 + 0x31c);
              local_398 = (longlong **)CONCAT44(local_398._4_4_,1);
              fVar25 = (float)FUN_1497c75f6(&local_2c8,*(undefined8 *)(param_1[1] + 0xb0),iVar11,
                                            *(int *)(lVar14 + 8) + (int)local_358);
              fVar25 = fVar25 * fVar28;
              fVar28 = 1.0;
              if (fVar25 < ABS((float)dVar3)) {
                fVar28 = (float)(~-(uint)(ABS(fVar25) <= 1e-08) & (uint)(ABS((float)dVar3) / fVar25)
                                | -(uint)(ABS(fVar25) <= 1e-08) & 0x3f800000);
              }
              if (*(char *)(lVar6 + 0x31a) == '\0') {
                fVar28 = fVar28 * fVar28;
LAB_1446141df:
                fVar25 = 1.0 / fVar28;
              }
              else {
                fVar25 = 1.0;
                if (*(char *)(lVar6 + 0x31a) == '\x01') goto LAB_1446141df;
              }
              if (((1e-08 < ABS(fVar25)) &&
                  (uVar20 = *(int *)(lVar14 + 4) + local_35c, -1 < (int)uVar20)) &&
                 (iVar10 = (**(code **)(**(longlong **)param_1[5] + 0x60))(), (int)uVar20 < iVar10))
              {
                fVar28 = 0.0;
                lVar16 = 2;
                do {
                  fVar28 = (float)((double)fVar28 +
                                  (double)*(float *)(*(longlong *)(*(longlong *)param_1[6] + 0x10) +
                                                    (longlong)
                                                    *(int *)((*(int *)(lVar14 + 8) + local_358) *
                                                             0xc + *(longlong *)
                                                                    (*(longlong *)
                                                                      (param_1[1] + 0xb0) + 0x10) +
                                                             -8 + lVar16 * 4) * 4) *
                                  *(double *)(lVar14 + lVar16 * 8) * (double)fVar25);
                  lVar16 = lVar16 + 1;
                } while (lVar16 != 5);
                fVar25 = *(float *)(*(longlong *)(*(longlong *)param_1[5] + 0x10) +
                                   (ulonglong)uVar20 * 4);
                if (fVar25 <= fVar28) {
                  fVar25 = fVar28;
                }
                *(float *)(*(longlong *)(*(longlong *)param_1[5] + 0x10) + (ulonglong)uVar20 * 4) =
                     fVar25;
              }
              lVar14 = lVar14 + 0x70;
              uVar19 = local_368;
            } while (lVar14 != lVar17);
          }
        }
        if (local_308 != 0) {
          FUN_1400020a8(local_308);
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 != uVar19);
    }
    FUN_146e4e938(&local_2a8);
    if (local_2f8 != 0) {
      FUN_1400020a8();
    }
    FUN_14062bdec(&local_218);
    lVar14 = local_2d8;
    if (local_2d8 != 0) goto LAB_144614315;
  }
  if (local_2c8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_2b8[0] != 0) {
    FUN_1400020a8();
  }
LAB_144613b58:
  if ((local_d0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14461474d FUN_14461474d body=235 status=ok
// SIG undefined FUN_14461474d(void)

void FUN_14461474d(void)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0x800000014be6fffa;
  local_34 = 0x1a;
  local_40 = FUN_14577453c();
  local_3c = 1;
  FUN_14675b64a(&local_48);
  local_60 = &PTR_FUN_14be70620;
  local_68 = 1;
  uStack_58 = 3;
  FUN_14282b410(L"/Script/GeometryCollectionDepNodes",0,0,&PTR_FUN_14be70680);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GeometryCollectionDepNodes",0,0,&PTR_FUN_14be70890);
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GeometryCollectionDepNodes",0,0,&PTR_FUN_14be70af0);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461483c FUN_14461483c body=55 status=ok
// SIG undefined FUN_14461483c(void)

void FUN_14461483c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26260 == 0) {
    uVar1 = FUN_141462ccb();
    DAT_14cc26260 = FUN_14171c317(FUN_14675ba59,uVar1,L"ENDIGbxAttributeSourceMode");
  }
  return;
}



// FUNCTION 144614873 FUN_144614873 body=55 status=ok
// SIG undefined FUN_144614873(void)

void FUN_144614873(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc262f0 == 0) {
    uVar1 = FUN_141462ccb();
    DAT_14cc262f0 = FUN_14171c317(FUN_14675bbf5,uVar1,L"ENDISampleDynamicMesh_SourceMode");
  }
  return;
}



// FUNCTION 1446148aa FUN_1446148aa body=55 status=ok
// SIG undefined FUN_1446148aa(void)

void FUN_1446148aa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc26340 == 0) {
    uVar1 = FUN_141462ccb();
    DAT_14cc26340 = FUN_14171c317(FUN_14675bcad,uVar1,L"ENiagaraScreenParticleScalingMode");
  }
  return;
}



// FUNCTION 1446148e1 FUN_1446148e1 body=55 status=ok
// SIG undefined FUN_1446148e1(void)

void FUN_1446148e1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc263d0 == 0) {
    uVar1 = FUN_141462ccb();
    DAT_14cc263d0 = FUN_14171c317(FUN_14675be1d,uVar1,L"EGbxNiagaraPerfCollectorState");
  }
  return;
}



// FUNCTION 144614918 FUN_144614918 body=1022 status=ok
// SIG undefined FUN_144614918(void)

void FUN_144614918(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined4 *puVar9;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uStack_30 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_68);
  uStack_2c = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_68) >> 0x20);
  local_34 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_34);
            goto LAB_144614ab0;
          }
        }
        puVar9 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if (puVar9 != &local_34) {
          if ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar3 + 0x100))(plVar3,&local_34,puVar9,(int)plVar3[6]);
          }
          else {
            memcpy(&local_34,puVar9,
                   (longlong)(int)plVar3[6] * (longlong)*(int *)((longlong)plVar3 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_40 = (undefined4)plVar3[6];
        local_48 = 0;
        FUN_1400746b0(plVar3,&local_34,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_34,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
    }
LAB_144614ab0:
    pbVar8 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_34);
      goto LAB_144614ab0;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_34);
      goto LAB_144614ab0;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_34);
      goto LAB_144614ab0;
    }
    uVar1 = *(undefined8 *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    local_34 = (undefined4)uVar1;
    uStack_30 = (undefined4)((ulonglong)uVar1 >> 0x20);
  }
  local_38 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar8 == (byte *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar3[3];
    if ((*(byte *)((longlong)plVar3 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar3 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar3 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar3 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar2)(plVar3);
          if (cVar6 != '\0') {
            (**(code **)(*plVar3 + 0xa0))(plVar3,lVar4,&local_38);
            goto LAB_144614c54;
          }
        }
        puVar9 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar3 + 0x44));
        if ((puVar9 != &local_38) && ((*(byte *)((longlong)plVar3 + 0x3b) & 0x40) == 0)) {
          (**(code **)(*plVar3 + 0x100))(plVar3,&local_38,puVar9,(int)plVar3[6]);
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_40 = (undefined4)plVar3[6];
        local_48 = 0;
        FUN_1400746b0(plVar3,&local_38,lVar4,1);
      }
      else {
        (*pcVar2)(plVar3,&local_38,lVar4);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar7;
        puVar7 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar3);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_38);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_38);
    }
  }
LAB_144614c54:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((CONCAT44(uStack_2c,uStack_30) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144614d2a FUN_144614d2a body=936 status=ok
// SIG undefined FUN_144614d2a(void)

void FUN_144614d2a(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cc26420) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14be77bd0;
  }
  else if (lVar1 == DAT_14cc26428) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14be77c40;
  }
  else if (lVar1 == DAT_14cc26430) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14be77cb0;
  }
  else {
    if (lVar1 == DAT_14cc26438) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 == DAT_14cc26440) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14be77d90;
    }
    else {
      if (lVar1 != DAT_14cc26448) goto LAB_144615004;
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,2,0x10);
      *local_30 = &PTR_LAB_14ad81180;
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 1;
      lVar1 = DAT_14c758608 + 1;
      if (lVar5 == 0) {
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 2;
        lVar1 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar1;
      local_30[2] = lVar5;
      ppuVar4 = &PTR_FUN_14be77e00;
    }
  }
  puVar3 = local_30;
  *local_30 = ppuVar4;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_144614fb3:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_144614fb3;
    }
  }
  *param_4 = (longlong)puVar3;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_144615004;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144615004:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446150e6 FUN_1446150e6 body=355 status=ok
// SIG undefined FUN_1446150e6(void)

undefined4 FUN_1446150e6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar4 = FUN_141908f68();
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x78);
  lVar1 = *(longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_2 + 0x88) != lVar1) {
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  *(longlong *)(param_2 + 0x88) = lVar1;
  if (*(longlong *)(param_2 + 0x90) != *(longlong *)(param_1 + 0x90)) {
    *(undefined8 *)(param_2 + 0x98) = 0;
  }
  uVar5 = FUN_14477b664();
  uVar5 = FUN_14477b664(uVar5);
  *(undefined8 *)(param_2 + 0x90) = uVar5;
  *(undefined8 *)(param_2 + 0x98) = *(undefined8 *)(param_1 + 0x98);
  if ((*(longlong *)(param_2 + 0xa0) != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 0x50));
  }
  bVar3 = DAT_14cb26569;
  lVar1 = *(longlong *)(param_1 + 0xa0);
  *(longlong *)(param_2 + 0xa0) = lVar1;
  if ((lVar1 != 0) && ((bVar3 & 1) != 0)) {
    piVar2 = *(int **)(lVar1 + 0x50);
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar6 = 5;
    }
    else {
      if ((char)piVar2[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_14461519c;
      }
      iVar6 = 2;
    }
    LOCK();
    piVar2[2] = iVar6;
    UNLOCK();
  }
LAB_14461519c:
  iVar6 = 0x20;
  if (*(int *)(param_1 + 0xb8) < 0x20) {
    iVar6 = *(int *)(param_1 + 0xb8);
  }
  *(int *)(param_2 + 0xb8) = iVar6;
  FUN_140e5eff0(param_2 + 0xa8,param_1 + 0xa8);
  *(undefined1 *)(param_2 + 0xbc) = *(undefined1 *)(param_1 + 0xbc);
  return uVar4;
}



// FUNCTION 14461524a FUN_14461524a body=1242 status=ok
// SIG undefined FUN_14461524a(void)

void FUN_14461524a(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1401b956c(param_2 + 0x38);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_1446152b5;
    if (iVar7 != 1) goto LAB_1446152b0;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_1446152b5;
  }
  else {
LAB_1446152b0:
    if (iVar7 == 0x10) goto LAB_1446152b5;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_1446152b5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1446152b5;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_144615451;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1446187fd);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_144615451:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_1446154d1;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_1446154d1:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14be78420;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14be78400;
    local_68[0] = &LAB_1446187b6;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveProxy",&DAT_14cc265a4);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144615740 FUN_144615740 body=377 status=ok
// SIG undefined FUN_144615740(void)

void FUN_144615740(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != DAT_14cc26450) goto LAB_144615848;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar2 = local_30;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14be77f30;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_1446157f7:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_1446157f7;
    }
  }
  *param_4 = (longlong)puVar2;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_144615848;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144615848:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446158c2 FUN_1446158c2 body=2023 status=ok
// SIG undefined FUN_1446158c2(void)

undefined8 FUN_1446158c2(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  uint *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  undefined8 *puVar27;
  longlong lVar28;
  bool bVar29;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar28 = *(longlong *)(param_3 + 0x30);
  if ((*(longlong *)(param_3 + 0x38) == 0) || (*(longlong *)param_2[0xf] == 0)) goto LAB_144615957;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  do {
    lVar24 = *(longlong *)param_2[0xf];
    if (lVar24 == 0) goto LAB_144615b96;
    uVar19 = *(undefined8 *)(lVar24 + 0x10);
    uVar20 = *(undefined8 *)(lVar24 + 0x18);
    uVar8 = *(undefined8 *)(lVar24 + 0x20);
    uVar9 = *(undefined8 *)(lVar24 + 0x28);
    local_128 = *(undefined8 *)(lVar24 + 0x40);
    uStack_120 = *(undefined8 *)(lVar24 + 0x48);
    local_138 = *(undefined8 *)(lVar24 + 0x30);
    uStack_130 = *(undefined8 *)(lVar24 + 0x38);
    uVar10 = *(undefined8 *)(lVar24 + 0x50);
    uVar11 = *(undefined8 *)(lVar24 + 0x58);
    uVar12 = *(undefined8 *)(lVar24 + 0x60);
    uVar13 = *(undefined8 *)(lVar24 + 0x68);
    uVar2 = *(undefined4 *)(lVar24 + 0x70);
    uVar3 = *(undefined4 *)(lVar24 + 0x74);
    uVar4 = *(undefined1 *)(lVar24 + 0x78);
    uVar5 = *(undefined1 *)(lVar24 + 0x79);
    uVar21 = *(undefined8 *)(lVar24 + 0x7c);
    lVar6 = param_2[0xf];
    param_2[0xf] = lVar24;
    *(undefined8 *)(lVar24 + 0x10) = 0;
    *(undefined8 *)(lVar24 + 0x18) = 0;
    *(undefined4 *)(lVar24 + 0x20) = 0;
    *(undefined4 *)(lVar24 + 0x24) = 0;
    *(undefined4 *)(lVar24 + 0x28) = 0;
    *(undefined4 *)(lVar24 + 0x2c) = 0x3ff00000;
    *(undefined8 *)(lVar24 + 0x30) = 0;
    *(undefined8 *)(lVar24 + 0x38) = 0;
    *(undefined8 *)(lVar24 + 0x40) = 0;
    *(undefined8 *)(lVar24 + 0x48) = 0;
    *(undefined8 *)(lVar24 + 0x50) = 0x3ff0000000000000;
    *(undefined8 *)(lVar24 + 0x58) = 0x3ff0000000000000;
    *(undefined8 *)(lVar24 + 0x60) = 0x3ff0000000000000;
    *(undefined8 *)(lVar24 + 0x68) = 0;
    *(undefined8 *)(lVar24 + 0x70) = 0x3f800000;
    *(undefined2 *)(lVar24 + 0x78) = 0;
    *(undefined8 *)(lVar24 + 0x7c) = 0;
    if (lVar6 != 0) {
      FUN_1400020a8();
    }
    uVar25 = uStack_110;
    lVar24 = (longlong)(int)uStack_110;
    uVar15 = (int)uStack_110 + 1;
    uStack_110 = CONCAT44(uStack_110._4_4_,uVar15);
    if (uStack_110._4_4_ < uVar15) {
      FUN_144796b16(&local_118,uVar25 & 0xffffffff);
    }
    lVar24 = lVar24 * 0x80;
    *(undefined8 *)(local_118 + lVar24) = uVar19;
    ((undefined8 *)(local_118 + lVar24))[1] = uVar20;
    puVar1 = (undefined8 *)(local_118 + 0x10 + lVar24);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar17 = (undefined4 *)(local_118 + 0x20 + lVar24);
    *puVar17 = (undefined4)local_138;
    puVar17[1] = local_138._4_4_;
    puVar17[2] = (undefined4)uStack_130;
    puVar17[3] = uStack_130._4_4_;
    puVar17 = (undefined4 *)(local_118 + 0x30 + lVar24);
    *puVar17 = (undefined4)local_128;
    puVar17[1] = local_128._4_4_;
    puVar17[2] = (undefined4)uStack_120;
    puVar17[3] = uStack_120._4_4_;
    puVar1 = (undefined8 *)(local_118 + 0x40 + lVar24);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1 = (undefined8 *)(local_118 + 0x50 + lVar24);
    *puVar1 = uVar12;
    puVar1[1] = uVar13;
    *(undefined4 *)(local_118 + 0x60 + lVar24) = uVar2;
    *(undefined4 *)(local_118 + 100 + lVar24) = uVar3;
    *(undefined1 *)(local_118 + 0x68 + lVar24) = uVar4;
    *(undefined1 *)(local_118 + 0x69 + lVar24) = uVar5;
    *(undefined8 *)(local_118 + 0x6c + lVar24) = uVar21;
  } while ((*(int *)(param_2 + 0x10) < 1) || ((int)uStack_110 < *(int *)(param_2 + 0x10)));
  lVar24 = *(longlong *)param_2[0xf];
  while (lVar24 != 0) {
    lVar6 = param_2[0xf];
    param_2[0xf] = lVar24;
    *(undefined8 *)(lVar24 + 0x10) = 0;
    *(undefined8 *)(lVar24 + 0x18) = 0;
    *(undefined4 *)(lVar24 + 0x20) = 0;
    *(undefined4 *)(lVar24 + 0x24) = 0;
    *(undefined4 *)(lVar24 + 0x28) = 0;
    *(undefined4 *)(lVar24 + 0x2c) = 0x3ff00000;
    *(undefined8 *)(lVar24 + 0x30) = 0;
    *(undefined8 *)(lVar24 + 0x38) = 0;
    *(undefined8 *)(lVar24 + 0x40) = 0;
    *(undefined8 *)(lVar24 + 0x48) = 0;
    *(undefined8 *)(lVar24 + 0x50) = 0x3ff0000000000000;
    *(undefined8 *)(lVar24 + 0x58) = 0x3ff0000000000000;
    *(undefined8 *)(lVar24 + 0x60) = 0x3ff0000000000000;
    *(undefined8 *)(lVar24 + 0x68) = 0;
    *(undefined8 *)(lVar24 + 0x70) = 0x3f800000;
    *(undefined2 *)(lVar24 + 0x78) = 0;
    *(undefined8 *)(lVar24 + 0x7c) = 0;
    if (lVar6 != 0) {
      FUN_1400020a8();
    }
    lVar24 = *(longlong *)param_2[0xf];
  }
LAB_144615b96:
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308);
  puVar18 = (uint *)*puVar1;
  if (puVar18 != (uint *)0x0) goto LAB_144615c3a;
  while( true ) {
    uVar15 = *(uint *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
    if ((uVar15 & 1) == 0) {
      *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x318) = uVar15 | 1;
      __tlregdtor(&LAB_1446187fd);
    }
    lVar24 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar17 = *(undefined4 **)(lVar24 + 0x310);
    *(undefined8 *)(lVar24 + 0x310) = 0;
    if (puVar17 == (undefined4 *)0x0) {
      puVar17 = _aligned_malloc(0x10000,0x10000);
    }
    *puVar17 = 0xffffffff;
    *(undefined4 **)(puVar17 + 0x10) = puVar17 + 0x16;
    puVar17[0x12] = 0;
    *puVar1 = puVar17;
    FUN_140217a48(puVar1);
    puVar18 = (uint *)*puVar1;
LAB_144615c3a:
    puVar27 = (undefined8 *)(*(longlong *)(puVar18 + 0x10) + 7U & 0xfffffffffffffff8);
    puVar23 = (uint *)(puVar27 + 0x1f);
    uVar15 = puVar18[0x12];
    if (puVar23 <= puVar18 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar18 + 0x10) = puVar18 + 0x4000;
      LOCK();
      uVar26 = *puVar18;
      *puVar18 = *puVar18 + uVar15 + 1;
      UNLOCK();
      if ((uVar26 ^ uVar15) != 0xffffffff) break;
      puVar18 = (uint *)*puVar1;
      *puVar18 = 0xffffffff;
      *(uint **)(puVar18 + 0x10) = puVar18 + 0x16;
      puVar18[0x12] = 0;
      *puVar1 = puVar18;
      puVar27 = (undefined8 *)((longlong)puVar18 + 0x5fU & 0xfffffffffffffff8);
      puVar23 = (uint *)(puVar27 + 0x1f);
      uVar15 = 0;
      if (puVar23 <= puVar18 + 0x4000) {
        uVar15 = 1;
        goto LAB_144615cba;
      }
    }
  }
  uVar15 = uVar15 + 1;
LAB_144615cba:
  *(uint **)(puVar18 + 0x10) = puVar23;
  puVar18[0x12] = uVar15;
  uVar15 = 0;
  FUN_1447247dc(puVar27,0);
  *puVar27 = &PTR_FUN_14be78658;
  local_140 = *param_2;
  uVar25 = 0;
  if (lVar28 != 0) {
    uVar15 = *(uint *)(lVar28 + 0xc);
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar28 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar28 = 0;
    }
    uVar25 = (ulonglong)*(uint *)(lVar28 + 0x10);
    if (*(uint *)(lVar28 + 0x10) == 0) {
      LOCK();
      iVar22 = DAT_14c964868 + 1;
      UNLOCK();
      uVar26 = DAT_14c964868 + 1;
      bVar29 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar22;
      if (bVar29) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar26);
      }
      LOCK();
      uVar16 = *(uint *)(lVar28 + 0x10);
      bVar29 = uVar16 == 0;
      if (bVar29) {
        *(uint *)(lVar28 + 0x10) = uVar26;
        uVar16 = 0;
      }
      UNLOCK();
      if (bVar29) {
        uVar16 = uVar26;
      }
      uVar25 = (ulonglong)uVar16;
    }
  }
  local_f8 = *(undefined4 *)(param_2 + 2);
  local_100 = param_2[1];
  uVar21 = param_2[3];
  uVar19 = FUN_14477b664(param_2[4]);
  uVar20 = FUN_14477b664(uVar19);
  uVar19 = param_2[5];
  lVar28 = param_2[6];
  if ((lVar28 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar7 = *(int **)(lVar28 + 0x50);
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar22 = 5;
    }
    else {
      if ((char)piVar7[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60),lVar28);
        goto LAB_144615d6d;
      }
      iVar22 = 2;
    }
    LOCK();
    piVar7[2] = iVar22;
    UNLOCK();
  }
LAB_144615d6d:
  *(undefined4 *)(puVar27 + 0x16) = local_f8;
  puVar27[0x15] = local_100;
  puVar27[0x18] = 0;
  puVar27[0x19] = 0;
  puVar27[0x17] = uVar21;
  uVar21 = FUN_14477b664(uVar20);
  uVar21 = FUN_14477b664(uVar21);
  puVar27[0x18] = uVar21;
  puVar27[0x19] = uVar19;
  puVar27[0x1a] = lVar28;
  if ((lVar28 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar7 = *(int **)(lVar28 + 0x50);
    LOCK();
    *piVar7 = *piVar7 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar22 = 5;
    }
    else {
      if ((char)piVar7[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60),lVar28);
        goto LAB_144615dcc;
      }
      iVar22 = 2;
    }
    LOCK();
    piVar7[2] = iVar22;
    UNLOCK();
  }
LAB_144615dcc:
  uVar14 = uStack_110;
  lVar24 = local_118;
  puVar27[0x1b] = 0;
  *(int *)(puVar27 + 0x1c) = (int)uStack_110;
  if ((int)uStack_110 == 0) {
    *(undefined4 *)((longlong)puVar27 + 0xe4) = 0;
  }
  else {
    FUN_140d27400(puVar27 + 0x1b,uStack_110 & 0xffffffff,0);
    FUN_144796a68(puVar27[0x1b],lVar24,uVar14 & 0xffffffff);
  }
  puVar27[0x1d] = uVar25 << 0x20 | (ulonglong)uVar15;
  puVar27[0x1e] = local_140;
  if ((lVar28 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lVar28 + 0x50),lVar28);
  }
  if (*(code **)(puVar27[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar27[0xe] + 0x18))(puVar27 + 0xe,puVar27 + 9);
  }
  puVar27[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar27[9] = puVar27;
  puVar27[10] = puVar27;
  lVar28 = *(longlong *)
            (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8)
  ;
  if (lVar28 == 0) {
    uVar21 = 0;
  }
  else {
    uVar21 = *(undefined8 *)(lVar28 + 0x30);
  }
  puVar27[0xf] = uVar21;
  puVar27[0x10] = 0xe80000527800b400;
  *(undefined4 *)((longlong)puVar27 + 0x1c) = 3;
  if (puVar27 == (undefined8 *)0x0) {
    local_100 = CONCAT71(local_100._1_7_,1);
    FUN_1447439e4(0);
  }
  else {
    LOCK();
    *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
    UNLOCK();
    local_100 = CONCAT71(local_100._1_7_,1);
    FUN_1447439e4(puVar27);
    LOCK();
    piVar7 = (int *)(puVar27 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*puVar27)(puVar27,1);
    }
  }
  if (local_118 != 0) {
    FUN_1400020a8();
  }
LAB_144615957:
  if ((local_f0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446160aa FUN_1446160aa body=45 status=ok
// SIG undefined FUN_1446160aa(void)

void FUN_1446160aa(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_141908f68();
  if (cVar1 != '\0') {
    iVar2 = 0x20;
    if (*(int *)(param_1 + 0x78) < 0x20) {
      iVar2 = *(int *)(param_1 + 0x78);
    }
    *(int *)(param_2 + 0x78) = iVar2;
  }
  return;
}



// FUNCTION 1446160d8 FUN_1446160d8 body=620 status=ok
// SIG undefined FUN_1446160d8(void)

void FUN_1446160d8(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cc26458) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14be77fa0;
  }
  else {
    if (lVar1 == DAT_14cc26460) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    if (lVar1 != DAT_14cc26468) {
      if (lVar1 == DAT_14cc26470) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      if (lVar1 == DAT_14cc26478) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      if (lVar1 == DAT_14cc26480) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
      goto LAB_14461628e;
    }
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar5 == 0) {
      LOCK();
      UNLOCK();
      lVar5 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar5;
    ppuVar4 = &PTR_FUN_14be78080;
  }
  puVar3 = local_30;
  *local_30 = ppuVar4;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_14461620f:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_4;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_14461620f;
    }
  }
  *param_4 = (longlong)puVar3;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14461628e;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14461628e:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461638e FUN_14461638e body=76 status=ok
// SIG undefined FUN_14461638e(void)

undefined4 FUN_14461638e(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_141908f68();
  if ((char)uVar1 != '\0') {
    iVar2 = 0x20;
    if (*(int *)(param_1 + 0x88) < 0x20) {
      iVar2 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_2 + 0x88) = iVar2;
    FUN_140e5eff0(param_2 + 0x78,param_1 + 0x78);
  }
  return uVar1;
}



// FUNCTION 1446163da FUN_1446163da body=41 status=ok
// SIG undefined FUN_1446163da(void)

void FUN_1446163da(void)

{
  DAT_14cc26588 = 0;
  if (DAT_14cc26580 != 0) {
    FUN_1400020a8();
  }
  FUN_1461b4594();
  return;
}



// FUNCTION 14461640a FUN_14461640a body=784 status=ok
// SIG undefined FUN_14461640a(void)

void FUN_14461640a(undefined8 param_1,float *param_2,longlong param_3)

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
  double dVar15;
  undefined8 uVar16;
  
  dVar1 = *(double *)(param_3 + 0x28);
  dVar2 = *(double *)(param_3 + 0x30);
  dVar3 = *(double *)(param_3 + 0x38);
  dVar4 = *(double *)(param_3 + 0x40);
  dVar5 = *(double *)(param_3 + 0x48);
  dVar6 = *(double *)(param_3 + 0x50);
  dVar7 = *(double *)(param_3 + 0x58);
  dVar8 = *(double *)(param_3 + 0x60);
  dVar9 = *(double *)(param_3 + 0x68);
  dVar10 = *(double *)(param_3 + 0x70);
  dVar11 = *(double *)(param_3 + 0x78);
  dVar12 = *(double *)(param_3 + 0x80);
  dVar13 = *(double *)(param_3 + 0x88);
  dVar14 = *(double *)(param_3 + 0x90);
  dVar15 = *(double *)(param_3 + 0x98);
  *param_2 = (float)*(double *)(param_3 + 0x20);
  param_2[1] = (float)dVar1;
  param_2[2] = (float)dVar2;
  param_2[3] = (float)dVar3;
  param_2[4] = (float)dVar4;
  param_2[5] = (float)dVar5;
  param_2[6] = (float)dVar6;
  param_2[7] = (float)dVar7;
  param_2[8] = (float)dVar8;
  param_2[9] = (float)dVar9;
  param_2[10] = (float)dVar10;
  param_2[0xb] = (float)dVar11;
  param_2[0xc] = (float)dVar12;
  param_2[0xd] = (float)dVar13;
  param_2[0xe] = (float)dVar14;
  param_2[0xf] = (float)dVar15;
  dVar1 = *(double *)(param_3 + 0x128);
  dVar2 = *(double *)(param_3 + 0x130);
  dVar3 = *(double *)(param_3 + 0x138);
  dVar4 = *(double *)(param_3 + 0x140);
  dVar5 = *(double *)(param_3 + 0x148);
  dVar6 = *(double *)(param_3 + 0x150);
  dVar7 = *(double *)(param_3 + 0x158);
  dVar8 = *(double *)(param_3 + 0x160);
  dVar9 = *(double *)(param_3 + 0x168);
  dVar10 = *(double *)(param_3 + 0x170);
  dVar11 = *(double *)(param_3 + 0x178);
  dVar12 = *(double *)(param_3 + 0x180);
  dVar13 = *(double *)(param_3 + 0x188);
  dVar14 = *(double *)(param_3 + 400);
  dVar15 = *(double *)(param_3 + 0x198);
  param_2[0x10] = (float)*(double *)(param_3 + 0x120);
  param_2[0x11] = (float)dVar1;
  param_2[0x12] = (float)dVar2;
  param_2[0x13] = (float)dVar3;
  param_2[0x14] = (float)dVar4;
  param_2[0x15] = (float)dVar5;
  param_2[0x16] = (float)dVar6;
  param_2[0x17] = (float)dVar7;
  param_2[0x18] = (float)dVar8;
  param_2[0x19] = (float)dVar9;
  param_2[0x1a] = (float)dVar10;
  param_2[0x1b] = (float)dVar11;
  param_2[0x1c] = (float)dVar12;
  param_2[0x1d] = (float)dVar13;
  param_2[0x1e] = (float)dVar14;
  param_2[0x1f] = (float)dVar15;
  uVar16 = *(undefined8 *)(param_3 + 0x2a8);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x2a0);
  *(undefined8 *)(param_2 + 0x22) = uVar16;
  uVar16 = *(undefined8 *)(param_3 + 0x2b8);
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_3 + 0x2b0);
  *(undefined8 *)(param_2 + 0x26) = uVar16;
  param_2[0x28] = *(float *)(param_3 + 0x2c0);
  param_2[0x2b] = *(float *)(param_3 + 0x2cc);
  *(undefined8 *)(param_2 + 0x29) = *(undefined8 *)(param_3 + 0x2c4);
  *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(param_3 + 0x2d0);
  param_2[0x2e] = *(float *)(param_3 + 0x2d8);
  *(undefined8 *)(param_2 + 0x2f) = *(undefined8 *)(param_3 + 8);
  param_2[0x31] = *(float *)(param_3 + 0x10);
  return;
}



// FUNCTION 14461671a FUN_14461671a body=108 status=ok
// SIG undefined FUN_14461671a(void)

void FUN_14461671a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = FUN_1404101e2(param_1 + 0x50);
  if (lVar1 != 0) {
    FUN_1480a62b6(&local_28);
    FUN_1497d2adc(lVar1 + 0x20f,param_1,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144616788 FUN_144616788 body=526 status=ok
// SIG undefined FUN_144616788(void)

longlong FUN_144616788(longlong *param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  
  do {
    if (param_2 == 0) {
      return 0;
    }
    iVar2 = *(int *)(param_2 + 0x268);
    if (iVar2 == 0) {
      uVar12 = 1;
      uVar7 = 0;
      iVar4 = 0;
      iVar8 = 0;
    }
    else {
      puVar9 = *(uint **)(param_2 + 0x260);
      if (*(uint **)(param_2 + 0x260) == (uint *)0x0) {
        puVar9 = (uint *)(param_2 + 0x250);
      }
      uVar3 = *puVar9;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        uVar7 = 0;
        uVar5 = iVar4 >> 5;
        if (iVar4 >> 5 < 1) {
          uVar5 = 0;
        }
        iVar8 = 0;
        do {
          if (uVar5 == uVar7) goto LAB_14461692b;
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar9[uVar7 + 1];
          uVar7 = uVar7 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar7 = 0;
        iVar8 = 0;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar4) {
        iVar4 = iVar2;
      }
    }
    if (iVar4 != iVar2) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      iVar10 = iVar10 >> 5;
      uVar3 = 0xffffffff;
      do {
        lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x240) + (longlong)iVar4 * 0x10);
        if ((lVar11 != 0) && ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0)) {
          iVar4 = *(int *)(*param_1 + 0x38);
          if ((iVar4 <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) + (longlong)iVar4 * 8) ==
              *param_1 + 0x30)) {
            lVar13 = FUN_14081cebe();
            if (*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) {
              return 0;
            }
            if (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30) {
              return 0;
            }
            return lVar11;
          }
        }
        uVar3 = uVar3 & ~(uint)uVar12;
        puVar9 = *(uint **)(param_2 + 0x260);
        if (*(uint **)(param_2 + 0x260) == (uint *)0x0) {
          puVar9 = (uint *)(param_2 + 0x250);
        }
        iVar4 = (int)uVar7;
        lVar11 = (longlong)iVar4;
        uVar5 = puVar9[lVar11] & uVar3;
        if (uVar5 == 0) {
          iVar6 = iVar10;
          if (iVar10 < iVar4) {
            iVar6 = iVar4;
          }
          if (iVar10 <= iVar4) break;
          lVar13 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar5 = puVar9[lVar11 + lVar13 + 1];
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar6 - lVar11 == lVar13) goto LAB_14461692b;
          }
          uVar7 = (ulonglong)(iVar4 + (int)lVar13 + 1);
          uVar3 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar12 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar4 < iVar2);
    }
LAB_14461692b:
    if (param_3 == '\0') {
      return 0;
    }
    param_2 = FUN_1433b9ef0(param_2);
  } while( true );
}



// FUNCTION 144616996 FUN_144616996 body=1239 status=ok
// SIG undefined FUN_144616996(void)

void FUN_144616996(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_3 + 0x100);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 == 2) goto LAB_144616dc8;
    if (iVar7 != 1) goto LAB_1446169e0;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 == DVar9) goto LAB_144616dc8;
  }
  else {
LAB_1446169e0:
    if (iVar7 == 0x10) goto LAB_144616dc8;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2)) {
LAB_144616dc8:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_98);
    }
    if (iVar7 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_144616dc8;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_144616b4d;
    while( true ) {
      uVar13 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar13 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar13 | 1;
        __tlregdtor(&LAB_1446187fd);
      }
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar10 = *(undefined4 **)(lVar5 + 0x310);
      *(undefined8 *)(lVar5 + 0x310) = 0;
      if (puVar10 == (undefined4 *)0x0) {
        puVar10 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar10 = 0xffffffff;
      *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar2 = puVar10;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_144616b4d:
      puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar15 = (uint *)(puVar16 + 0x17);
      uVar13 = puVar11[0x12];
      if (puVar15 <= puVar11 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar3 = *puVar11;
        *puVar11 = *puVar11 + uVar13 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar13) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar16 + 0x17);
        uVar13 = 0;
        if (puVar15 <= puVar11 + 0x4000) {
          uVar13 = 1;
          goto LAB_144616bcd;
        }
      }
    }
    uVar13 = uVar13 + 1;
LAB_144616bcd:
    *(uint **)(puVar11 + 0x10) = puVar15;
    puVar11[0x12] = uVar13;
    iVar7 = 0;
    FUN_1447247dc(puVar16,0);
    *puVar16 = &PTR_FUN_14be78ef0;
    puVar16[0x15] = uVar12;
    puVar16[0x16] = uVar4;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar13 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
        uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
        iVar7 = 0;
      }
      else {
        uVar17 = 2;
      }
    }
    else {
      iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar17 = 5;
    }
    if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
    }
    puVar16[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar16[9] = puVar16;
    puVar16[10] = puVar16;
    lVar5 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar5 == 0) {
      uVar6 = 1;
      if ((char)uVar17 != '\x06') {
        uVar6 = uVar17;
      }
      uVar17 = uVar6;
      uVar12 = 0;
    }
    else {
      if ((char)uVar17 == '\x06') {
        uVar17 = *(ulonglong *)(lVar5 + 0x38) >> 0x3b;
      }
      uVar12 = *(undefined8 *)(lVar5 + 0x30);
    }
    puVar16[0xf] = uVar12;
    puVar16[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar16 + 0x1c) = iVar7;
    if (puVar16 == (undefined8 *)0x0) {
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar16);
      LOCK();
      piVar1 = (int *)(puVar16 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar16)(puVar16,1);
      }
    }
  }
  else {
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14be78ed0;
    local_68[0] = &LAB_14461cc64;
    local_40 = uVar12;
    local_38 = uVar4;
    FUN_14005a792(&DAT_14ca9a440,L"RemoveProxy",&DAT_14cc26634);
    if (local_68[0] != (undefined1 *)0x0) {
      pppuVar14 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar14 = &local_48;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144616e82 FUN_144616e82 body=377 status=ok
// SIG undefined FUN_144616e82(void)

void FUN_144616e82(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*param_2 != DAT_14cc26598) goto LAB_144616f8a;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  puVar2 = local_30;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_30[2] = lVar4;
  *local_30 = &PTR_FUN_14be78f00;
  local_30[3] = param_1;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_4[1] == 0) {
LAB_144616f39:
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_4,0,0,0x10);
      *(undefined4 *)(param_4 + 1) = 0;
      goto LAB_144616f39;
    }
  }
  *param_4 = (longlong)puVar2;
  *(undefined4 *)(param_4 + 1) = 2;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_144616f8a;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_144616f8a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461706c FUN_14461706c body=31 status=ok
// SIG undefined FUN_14461706c(void)

undefined8 FUN_14461706c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144617090 FUN_144617090 body=31 status=ok
// SIG undefined FUN_144617090(void)

undefined8 FUN_144617090(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446170b4 FUN_1446170b4 body=31 status=ok
// SIG undefined FUN_1446170b4(void)

undefined8 FUN_1446170b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446170d8 FUN_1446170d8 body=31 status=ok
// SIG undefined FUN_1446170d8(void)

undefined8 FUN_1446170d8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446170fc FUN_1446170fc body=31 status=ok
// SIG undefined FUN_1446170fc(void)

undefined8 FUN_1446170fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144617120 FUN_144617120 body=31 status=ok
// SIG undefined FUN_144617120(void)

undefined8 FUN_144617120(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144617144 FUN_144617144 body=31 status=ok
// SIG undefined FUN_144617144(void)

undefined8 FUN_144617144(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144617168 FUN_144617168 body=31 status=ok
// SIG undefined FUN_144617168(void)

undefined8 FUN_144617168(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446172d0 FUN_1446172d0 body=3259 status=ok
// SIG undefined FUN_1446172d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1446172d0(uint *param_1,longlong *param_2)

{
  void *_Src;
  void *_Dst;
  undefined8 *puVar1;
  longlong *plVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  double *pdVar8;
  int *piVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  char cVar23;
  undefined8 uVar24;
  longlong lVar25;
  longlong lVar26;
  byte bVar27;
  uint uVar28;
  uint *puVar29;
  ulonglong uVar30;
  int iVar31;
  int iVar32;
  ulonglong uVar33;
  longlong lVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  ulonglong uVar39;
  uint uVar40;
  int iVar41;
  longlong lVar42;
  longlong lVar43;
  ulonglong uVar44;
  double *pdVar45;
  double *pdVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auStack_138 [40];
  double *local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar7 = *param_2;
  local_f8 = *(undefined4 *)(lVar7 + 0x10);
  local_100 = (undefined4)*(undefined8 *)(lVar7 + 8);
  uStack_fc = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 8) >> 0x20);
  lVar34 = *(longlong *)(lVar7 + 0x18);
  local_f0 = lVar34;
  uVar24 = FUN_14477b664(*(undefined8 *)(lVar7 + 0x20));
  lVar25 = FUN_14477b664(uVar24);
  lVar26 = *(longlong *)(lVar7 + 0x28);
  local_d8 = *(longlong *)(lVar7 + 0x30);
  local_e8 = lVar25;
  local_e0 = lVar26;
  if ((local_d8 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    piVar9 = *(int **)(local_d8 + 0x50);
    LOCK();
    *piVar9 = *piVar9 + 1;
    UNLOCK();
    if (DAT_14cb259f8 == 0) {
      iVar38 = 5;
    }
    else {
      if ((char)piVar9[1] != '\x01') {
        FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60));
        goto LAB_14461739c;
      }
      iVar38 = 2;
    }
    LOCK();
    piVar9[2] = iVar38;
    UNLOCK();
  }
LAB_14461739c:
  if (lVar25 == 0) {
    uVar24 = FUN_140067708();
    lVar25 = FUN_14477b664(uVar24);
    local_e8 = lVar25;
  }
  if (lVar26 == 0) {
    if ((lVar34 != 0) && (lVar25 != 0)) {
      plVar2 = *(longlong **)(lVar25 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar23 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar23 == '\0')) {
        local_e0 = 0;
      }
      else {
        uVar24 = (**(code **)(*plVar2 + 0x110))(plVar2);
        local_e0 = FUN_144aff482(uVar24,&local_f0);
        if (local_e0 != 0) goto LAB_1446173ae;
      }
    }
    if (((char)local_100 != '\x01') || (CONCAT44(local_f8,uStack_fc) == 0)) goto LAB_1446177b0;
  }
LAB_1446173ae:
  if (*(int *)(lVar7 + 0x118) <= *(int *)(lVar7 + 0x90) - *(int *)(lVar7 + 0xbc))
  goto LAB_1446177b0;
  plVar2 = (longlong *)(lVar7 + 0x88);
  auVar6 = *(undefined1 (*) [16])(param_1 + 8);
  auVar47 = divpd(auVar6,_DAT_1499387d0);
  auVar48._8_8_ = 0;
  auVar48._0_8_ = *(double *)(param_1 + 0xc);
  auVar48 = divpd(auVar48,_DAT_1499387d0);
  auVar47 = roundpd(auVar47,auVar47,3);
  auVar48 = roundpd(auVar48,auVar48,3);
  dVar14 = (auVar6._0_8_ - auVar47._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar15 = (auVar6._8_8_ - auVar47._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar16 = (*(double *)(param_1 + 0xc) - auVar48._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar17 = (0.0 - auVar48._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar11 = sin(dVar14);
  dVar12 = sin(dVar15);
  dVar13 = sin(dVar16);
  sin(dVar17);
  dVar14 = cos(dVar14);
  dVar15 = cos(dVar15);
  dVar16 = cos(dVar16);
  cos(dVar17);
  dVar17 = dVar12 * dVar11 * dVar13 + dVar15 * dVar14 * dVar16;
  dVar18 = -(dVar11 * dVar15 * dVar16) - dVar14 * dVar12 * dVar13;
  uVar19 = *(undefined8 *)(param_1 + 2);
  uVar20 = *(undefined8 *)(param_1 + 4);
  uVar24 = *(undefined8 *)(param_1 + 6);
  uVar4 = *(undefined4 *)(lVar7 + 0x50);
  uVar5 = *(undefined4 *)(lVar7 + 0x54);
  if (*(int *)(lVar7 + 0xbc) == 0) {
    iVar38 = *(int *)(lVar7 + 0x90);
    *(int *)(lVar7 + 0x90) = iVar38 + 1;
    if (*(int *)(lVar7 + 0x94) == iVar38) {
      FUN_141431dd2(plVar2,iVar38);
    }
    iVar37 = *(int *)(lVar7 + 0xb0);
    if (iVar37 == 0) {
      iVar31 = -1;
    }
    else {
      iVar31 = iVar37 + 0x1e;
      if (-1 < iVar37 + -1) {
        iVar31 = iVar37 + -1;
      }
      iVar31 = iVar31 >> 5;
    }
    lVar34 = lVar7 + 0x98;
    iVar32 = iVar37 + 1;
    iVar35 = iVar37 + 0x1f;
    if (-1 < iVar37) {
      iVar35 = iVar37;
    }
    if (iVar35 >> 5 == iVar31) {
      *(int *)(lVar7 + 0xb0) = iVar32;
    }
    else {
      if (*(int *)(lVar7 + 0xb4) <= iVar37) {
        iVar31 = iVar37;
        if (iVar37 + 0x20U < 0xa0) {
          iVar32 = 0x80;
        }
        else {
          uVar28 = iVar37 + 0x20U >> 5;
          if (*(int *)(lVar7 + 0xb4) + 0x1fU < 0xa0) {
            uVar36 = 4;
            if (4 < uVar28) {
              uVar36 = uVar28;
            }
          }
          else {
            uVar36 = uVar28 + (uVar28 * 3 >> 3) + 0x10;
          }
          uVar30 = (ulonglong)(uVar36 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar40 = (uint)(uVar30 + 0xf);
              if (uVar36 < 0x1ffd) {
                uVar30 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar30 + 0xf >> 4]];
              }
              else {
                uVar33 = (ulonglong)(uVar40 & 0xfffffff0);
                if (uVar33 < 0x7ff1) {
                  bVar27 = (&DAT_14c841e00)[uVar40 >> 4];
                  uVar39 = 0x32;
                  if (0x32 < bVar27) {
                    uVar39 = (ulonglong)bVar27;
                  }
                  uVar44 = 0x32 - (ulonglong)bVar27;
                  do {
                    uVar30 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar44 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar44 & 0xffffffff] & 0xf) == 0) goto LAB_144617e1f;
                    lVar26 = uVar39 + 1 + uVar44;
                    uVar44 = uVar44 - 1;
                  } while (lVar26 != 0x33);
                }
                uVar30 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar30 = (ulonglong)DAT_14c841df8;
                }
                uVar30 = -uVar30 & (uVar33 + uVar30) - 1;
              }
            }
            else {
              uVar30 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar30,0);
              iVar31 = *(int *)(lVar7 + 0xb0);
            }
          }
LAB_144617e1f:
          iVar41 = (int)(uVar30 >> 2);
          iVar32 = -0x20;
          if ((int)uVar28 <= iVar41) {
            iVar32 = iVar41 << 5;
          }
        }
        *(int *)(lVar7 + 0xb4) = iVar32;
        FUN_1446efbd8(lVar34,iVar31);
        iVar32 = *(int *)(lVar7 + 0xb0) + 1;
      }
      iVar31 = iVar32 + 0x1f;
      if (-1 < iVar32) {
        iVar31 = iVar32;
      }
      *(int *)(lVar7 + 0xb0) = iVar32;
      if (iVar32 % 0x20 != 0) {
        lVar26 = *(longlong *)(lVar7 + 0xa8);
        if (*(longlong *)(lVar7 + 0xa8) == 0) {
          lVar26 = lVar34;
        }
        bVar27 = -(char)(iVar32 % 0x20);
        *(uint *)(lVar26 + (longlong)(iVar31 >> 5) * 4) =
             (uint)(*(int *)(lVar26 + (longlong)(iVar31 >> 5) * 4) << (bVar27 & 0x1f)) >>
             (bVar27 & 0x1f);
      }
    }
    lVar26 = (longlong)iVar38;
    if (*(longlong *)(lVar7 + 0xa8) != 0) {
      lVar34 = *(longlong *)(lVar7 + 0xa8);
    }
    bVar27 = (byte)iVar37 & 0x1f;
    puVar3 = (uint *)(lVar34 + (longlong)(iVar35 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar27 | 0xfffffffeU >> 0x20 - bVar27);
  }
  else {
    iVar38 = *(int *)(lVar7 + 0xb8);
    lVar26 = (longlong)iVar38;
    iVar37 = *(int *)(*(longlong *)(lVar7 + 0x88) + 4 + lVar26 * 0xa0);
    *(int *)(lVar7 + 0xb8) = iVar37;
    iVar31 = *(int *)(lVar7 + 0xbc) + -1;
    *(int *)(lVar7 + 0xbc) = iVar31;
    if (iVar31 != 0) {
      *(undefined4 *)(*(longlong *)(lVar7 + 0x88) + (longlong)iVar37 * 0xa0) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(lVar7 + 0x98);
  puVar29 = *(uint **)(lVar7 + 0xa8);
  if (*(uint **)(lVar7 + 0xa8) == (uint *)0x0) {
    puVar29 = puVar3;
  }
  iVar37 = iVar38 + 0x1f;
  if (-1 < iVar38) {
    iVar37 = iVar38;
  }
  puVar29[iVar37 >> 5] = puVar29[iVar37 >> 5] | 1 << ((byte)iVar38 & 0x1f);
  uVar36 = 1;
  lVar34 = *(longlong *)(lVar7 + 0x88);
  lVar26 = lVar26 * 0xa0;
  _Src = (void *)(lVar34 + lVar26);
  uVar28 = *param_1;
  *(uint *)(lVar34 + lVar26) = uVar28;
  auVar47._8_4_ = SUB84(dVar18,0);
  auVar47._0_8_ = dVar11 * dVar12 * dVar16 - dVar14 * dVar15 * dVar13;
  auVar47._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  *(undefined1 (*) [16])(lVar34 + 0x10 + lVar26) = auVar47;
  auVar6._8_4_ = SUB84(dVar17,0);
  auVar6._0_8_ = -(dVar15 * dVar11 * dVar13) + dVar12 * dVar14 * dVar16;
  auVar6._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
  *(undefined1 (*) [16])(lVar34 + 0x20 + lVar26) = auVar6;
  puVar1 = (undefined8 *)(lVar34 + 0x30 + lVar26);
  *puVar1 = uVar19;
  puVar1[1] = uVar20;
  puVar1 = (undefined8 *)(lVar34 + 0x40 + lVar26);
  *puVar1 = uVar24;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar34 + 0x50 + lVar26);
  *puVar1 = 0x3ff0000000000000;
  puVar1[1] = 0x3ff0000000000000;
  puVar1 = (undefined8 *)(lVar34 + 0x60 + lVar26);
  *puVar1 = 0x3ff0000000000000;
  puVar1[1] = 0;
  *(undefined4 *)(lVar34 + 0x70 + lVar26) = uVar4;
  *(undefined4 *)(lVar34 + 0x74 + lVar26) = uVar5;
  *(undefined2 *)(lVar34 + 0x78 + lVar26) = 0;
  *(undefined8 *)(lVar34 + 0x7c + lVar26) = 0;
  *(undefined4 *)(lVar34 + 0x90 + lVar26) = 0xffffffff;
  uVar40 = *(int *)(lVar7 + 0x90) - *(int *)(lVar7 + 0xbc);
  if ((uVar40 != 0) && (uVar40 != 1)) {
    lVar34 = lVar7 + 0xc0;
    if (*(longlong *)(lVar7 + 200) != 0) {
      lVar34 = *(longlong *)(lVar7 + 200);
    }
    iVar37 = *(int *)(lVar34 + (ulonglong)(*(int *)(lVar7 + 0xd0) - 1U & uVar28) * 4);
    if (iVar37 != -1) {
      do {
        _Dst = (void *)(*plVar2 + (longlong)iVar37 * 0xa0);
        if (*(uint *)(*plVar2 + (longlong)iVar37 * 0xa0) == uVar28) {
          memmove(_Dst,_Src,0x90);
          FUN_144618024(plVar2,iVar38);
          goto LAB_1446177b0;
        }
        iVar37 = *(int *)((longlong)_Dst + 0x90);
      } while (iVar37 != -1);
    }
  }
  if (3 < uVar40) {
    uVar30 = (ulonglong)(uVar40 & 0xfffffffe) + 0xf;
    lVar34 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar34 == 0; lVar34 = lVar34 + -1) {
      }
    }
    uVar36 = 1 << ((byte)lVar34 & 0x1f);
  }
  if (((int)uVar40 < 1) || ((int)uVar36 <= *(int *)(lVar7 + 0xd0))) {
    uVar28 = *(int *)(lVar7 + 0xd0) - 1U & uVar28;
    *(uint *)((longlong)_Src + 0x94) = uVar28;
    lVar34 = *(longlong *)(lVar7 + 200);
    if (*(longlong *)(lVar7 + 200) == 0) {
      lVar34 = lVar7 + 0xc0;
    }
    *(undefined4 *)((longlong)_Src + 0x90) =
         *(undefined4 *)
          (lVar34 + ((longlong)*(int *)(lVar7 + 0xd0) - 1U & (longlong)(int)uVar28) * 4);
    lVar34 = *(longlong *)(lVar7 + 200);
    if (*(longlong *)(lVar7 + 200) == 0) {
      lVar34 = lVar7 + 0xc0;
    }
    *(int *)(lVar34 + ((longlong)*(int *)(lVar7 + 0xd0) - 1U & (longlong)(int)uVar28) * 4) = iVar38;
    goto LAB_1446177b0;
  }
  *(uint *)(lVar7 + 0xd0) = uVar36;
  plVar2 = (longlong *)(lVar7 + 200);
  if (*(longlong *)(lVar7 + 200) != 0) {
    FUN_1446efa72(plVar2,0,0,4);
    uVar36 = *(uint *)(lVar7 + 0xd0);
  }
  lVar34 = lVar7 + 0xc0;
  if (uVar36 == 1) {
    if (*plVar2 != 0) {
      FUN_1446efa72(plVar2,0,0,4);
    }
LAB_144617b57:
    uVar28 = 0;
    do {
      lVar26 = *(longlong *)(lVar7 + 200);
      if (*(longlong *)(lVar7 + 200) == 0) {
        lVar26 = lVar34;
      }
      *(undefined4 *)(lVar26 + (ulonglong)(*(int *)(lVar7 + 0xd0) + 0x7fffffffU & uVar28) * 4) =
           0xffffffff;
      uVar28 = uVar28 + 1;
    } while (uVar36 != uVar28);
  }
  else {
    if (uVar36 == 0) goto LAB_1446177b0;
    FUN_1446efa72(plVar2,0,uVar36,4);
    if (0 < (int)uVar36) goto LAB_144617b57;
  }
  iVar38 = *(int *)(lVar7 + 0xb0);
  if (iVar38 == 0) {
    uVar30 = 0;
    uVar33 = 1;
    iVar37 = 0;
    iVar31 = 0;
  }
  else {
    puVar29 = *(uint **)(lVar7 + 0xa8);
    if (*(uint **)(lVar7 + 0xa8) == (uint *)0x0) {
      puVar29 = puVar3;
    }
    uVar28 = *puVar29;
    if (uVar28 == 0) {
      iVar37 = iVar38 + 0x1e;
      if (-1 < iVar38 + -1) {
        iVar37 = iVar38 + -1;
      }
      uVar30 = 0;
      uVar33 = (ulonglong)(uint)(iVar37 >> 5);
      if (iVar37 >> 5 < 1) {
        uVar33 = uVar30;
      }
      iVar31 = 0;
      do {
        if (uVar33 == uVar30) goto LAB_1446177b0;
        iVar31 = iVar31 + 0x20;
        uVar28 = puVar29[uVar30 + 1];
        uVar30 = uVar30 + 1;
      } while (uVar28 == 0);
    }
    else {
      uVar30 = 0;
      iVar31 = 0;
    }
    uVar33 = (ulonglong)(-uVar28 & uVar28);
    uVar39 = uVar33 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar39 != 0) {
      for (; uVar39 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    iVar37 = (iVar31 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    if (iVar38 <= iVar37) {
      iVar37 = iVar38;
    }
  }
  if (iVar37 < iVar38) {
    uVar28 = 0xffffffff;
    do {
      lVar26 = *(longlong *)(lVar7 + 0x88);
      lVar42 = (longlong)iVar37 * 0xa0;
      uVar39 = (longlong)*(int *)(lVar7 + 0xd0) - 1U & (longlong)*(int *)(lVar26 + lVar42);
      iVar38 = (int)uVar39;
      *(int *)(lVar26 + 0x94 + lVar42) = iVar38;
      lVar25 = *(longlong *)(lVar7 + 200);
      if (*(longlong *)(lVar7 + 200) == 0) {
        lVar25 = lVar34;
      }
      *(undefined4 *)(lVar26 + 0x90 + lVar42) =
           *(undefined4 *)(lVar25 + ((longlong)*(int *)(lVar7 + 0xd0) - 1U & uVar39) * 4);
      lVar26 = *(longlong *)(lVar7 + 200);
      if (*(longlong *)(lVar7 + 200) == 0) {
        lVar26 = lVar34;
      }
      *(int *)(lVar26 + ((longlong)iVar38 & (longlong)*(int *)(lVar7 + 0xd0) - 1U) * 4) = iVar37;
      uVar28 = ~(uint)uVar33 & uVar28;
      puVar29 = *(uint **)(lVar7 + 0xa8);
      if (*(uint **)(lVar7 + 0xa8) == (uint *)0x0) {
        puVar29 = puVar3;
      }
      iVar38 = *(int *)(lVar7 + 0xb0);
      iVar37 = (int)uVar30;
      lVar26 = (longlong)iVar37;
      uVar36 = puVar29[lVar26] & uVar28;
      if (uVar36 == 0) {
        iVar32 = iVar38 + 0x1e;
        if (-1 < iVar38 + -1) {
          iVar32 = iVar38 + -1;
        }
        iVar32 = iVar32 >> 5;
        iVar35 = iVar32;
        if (iVar32 < iVar37) {
          iVar35 = iVar37;
        }
        if (iVar32 <= iVar37) break;
        lVar25 = 0;
        while( true ) {
          iVar31 = iVar31 + 0x20;
          uVar36 = puVar29[lVar26 + lVar25 + 1];
          if (uVar36 != 0) break;
          lVar25 = lVar25 + 1;
          if (iVar35 - lVar26 == lVar25) goto LAB_1446177b0;
        }
        uVar30 = (ulonglong)(iVar37 + (int)lVar25 + 1);
        uVar28 = 0xffffffff;
      }
      uVar33 = (ulonglong)(-uVar36 & uVar36);
      uVar39 = uVar33 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar37 = (iVar31 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    } while (iVar37 < iVar38);
  }
LAB_1446177b0:
  iVar38 = *(int *)(lVar7 + 0x68);
  lVar34 = (longlong)iVar38;
  if (lVar34 != 0) {
    pdVar8 = *(double **)(lVar7 + 0x60);
    iVar37 = 0;
    if ((((*pdVar8 != *(double *)(param_1 + 2)) || (NAN(*pdVar8) || NAN(*(double *)(param_1 + 2))))
        || (pdVar8[1] != *(double *)(param_1 + 4))) ||
       (NAN(pdVar8[1]) || NAN(*(double *)(param_1 + 4)))) {
      bVar10 = false;
    }
    else {
      bVar10 = *(double *)(param_1 + 6) == pdVar8[2];
    }
    iVar31 = 0;
    pdVar46 = pdVar8 + 5;
    lVar26 = -lVar34;
    do {
      bVar21 = bVar10;
      if (iVar31 + 1 < iVar38) {
        do {
          lVar42 = (longlong)iVar31;
          lVar43 = lVar42 + 2;
          pdVar45 = pdVar46 + lVar42 * 3;
          bVar10 = true;
          lVar25 = -1;
          do {
            if (((pdVar45[-2] != *(double *)(param_1 + 2)) ||
                (NAN(pdVar45[-2]) || NAN(*(double *)(param_1 + 2)))) ||
               ((pdVar45[-1] != *(double *)(param_1 + 4) ||
                (NAN(pdVar45[-1]) || NAN(*(double *)(param_1 + 4)))))) {
              if (bVar21) {
                if (!bVar10) goto LAB_14461796b;
                iVar41 = iVar31 - (int)lVar25;
                goto LAB_1446178d9;
              }
            }
            else {
              local_110 = pdVar46;
              if ((*pdVar45 == *(double *)(param_1 + 6)) != bVar21) {
                iVar41 = iVar31 - (int)lVar25;
                break;
              }
            }
            bVar10 = lVar43 < lVar34;
            lVar25 = lVar25 + -1;
            lVar43 = lVar43 + 1;
            pdVar45 = pdVar45 + 3;
            iVar41 = iVar38;
          } while (lVar26 + lVar42 != lVar25);
          bVar22 = !bVar21;
          iVar32 = iVar41;
          iVar35 = iVar31;
          bVar21 = bVar10;
          if (bVar22) break;
          if (!bVar10) goto LAB_14461796b;
LAB_1446178d9:
          bVar21 = false;
          iVar32 = iVar41 + 1;
          iVar35 = iVar41;
          iVar31 = iVar41;
        } while (iVar41 + 1 < iVar38);
      }
      else {
        if (bVar21) break;
        iVar32 = iVar31 + 1;
        iVar35 = iVar31;
        bVar21 = false;
      }
      iVar31 = iVar32;
      local_110 = pdVar46;
      local_108 = lVar26;
      if (iVar37 != iVar35) {
        memmove(pdVar8 + (longlong)iVar37 * 3,pdVar8 + (longlong)iVar35 * 3,
                (longlong)(iVar31 - iVar35) * 0x18);
      }
      iVar37 = iVar37 + (iVar31 - iVar35);
      pdVar46 = local_110;
      lVar26 = local_108;
      bVar10 = true;
    } while (bVar21);
LAB_14461796b:
    *(int *)(lVar7 + 0x68) = iVar37;
  }
  if ((local_d8 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_d8 + 0x50));
  }
  if ((local_d0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144617f8c FUN_144617f8c body=86 status=ok
// SIG undefined FUN_144617f8c(void)

undefined8 * FUN_144617f8c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14be78320;
  puVar6[7] = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 144617fe8 FUN_144617fe8 body=29 status=ok
// SIG undefined FUN_144617fe8(void)

void FUN_144617fe8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 144618006 FUN_144618006 body=29 status=ok
// SIG undefined FUN_144618006(void)

undefined8 FUN_144618006(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618024 FUN_144618024 body=122 status=ok
// SIG undefined FUN_144618024(void)

void FUN_144618024(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 14461814c FUN_14461814c body=22 status=ok
// SIG undefined FUN_14461814c(void)

longlong FUN_14461814c(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14be78340;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 144618174 FUN_144618174 body=29 status=ok
// SIG undefined FUN_144618174(void)

undefined8 FUN_144618174(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618192 FUN_144618192 body=230 status=ok
// SIG undefined FUN_144618192(void)

void FUN_144618192(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  
  lVar1 = *param_2;
  if (((lVar1 != 0) && (*param_1 != 0)) && (*(longlong *)(lVar1 + 0x130) != 0)) {
    cVar3 = FUN_144904448((longlong *)(lVar1 + 0x120));
    if (((cVar3 != '\0') && (plVar2 = *(longlong **)(lVar1 + 0x120), plVar2 != (longlong *)0x0)) &&
       ((*(longlong *)(lVar1 + 0x128) != -1 && (*plVar2 == *(longlong *)(lVar1 + 0x128))))) {
      *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + 1;
      FUN_1447997cc(plVar2,*param_1,(int)param_1[1],0,0);
      *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + -1;
      if (((int)plVar2[0x26] < 1) && (FUN_1400847bc(plVar2 + 0x17,0), (int)plVar2[0x21] == 0)) {
        FUN_140087e46(plVar2);
        if (*plVar2 != -1) {
          if (DAT_14cb259f8 == 0) {
            return;
          }
          FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
        }
        if (DAT_14cb259f8 != 0) {
          FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1446182a2 FUN_1446182a2 body=29 status=ok
// SIG undefined FUN_1446182a2(void)

undefined8 FUN_1446182a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446182c0 FUN_1446182c0 body=183 status=ok
// SIG undefined FUN_1446182c0(void)

void FUN_1446182c0(uint *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  
  lVar2 = *param_2;
  if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 0x130) != 0)) &&
      (cVar4 = FUN_144904448(lVar2 + 0x120), cVar4 != '\0')) &&
     (*(int *)(lVar2 + 0x90) != *(int *)(lVar2 + 0xbc))) {
    lVar5 = lVar2 + 0xc0;
    if (*(longlong *)(lVar2 + 200) != 0) {
      lVar5 = *(longlong *)(lVar2 + 200);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xd0) - 1U & *param_1) * 4);
    if (iVar6 != -1) {
      do {
        lVar5 = *(longlong *)(lVar2 + 0x88) + (longlong)iVar6 * 0xa0;
        if (*(uint *)(*(longlong *)(lVar2 + 0x88) + (longlong)iVar6 * 0xa0) == *param_1) {
          if ((lVar5 + 0x10U & 0xffffffffffffffef) == 0) {
            return;
          }
          uVar3 = *(undefined8 *)(param_1 + 4);
          uVar1 = *(undefined8 *)(param_1 + 6);
          *(undefined8 *)(lVar5 + 0x30) = *(undefined8 *)(param_1 + 2);
          *(undefined8 *)(lVar5 + 0x38) = uVar3;
          *(undefined8 *)(lVar5 + 0x40) = uVar1;
          *(undefined8 *)(lVar5 + 0x48) = 0;
          return;
        }
        iVar6 = *(int *)(lVar5 + 0x90);
      } while (iVar6 != -1);
    }
  }
  return;
}



// FUNCTION 144618378 FUN_144618378 body=70 status=ok
// SIG undefined FUN_144618378(void)

undefined8 * FUN_144618378(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14be78380;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 1446183c4 FUN_1446183c4 body=29 status=ok
// SIG undefined FUN_1446183c4(void)

void FUN_1446183c4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1446183e2 FUN_1446183e2 body=29 status=ok
// SIG undefined FUN_1446183e2(void)

undefined8 FUN_1446183e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618400 FUN_144618400 body=271 status=ok
// SIG undefined FUN_144618400(void)

void FUN_144618400(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *param_2;
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x130) != 0)) &&
      (cVar2 = FUN_144904448(lVar1 + 0x120), cVar2 != '\0')) &&
     (*(int *)(lVar1 + 0x90) != *(int *)(lVar1 + 0xbc))) {
    lVar3 = lVar1 + 0xc0;
    if (*(longlong *)(lVar1 + 200) != 0) {
      lVar3 = *(longlong *)(lVar1 + 200);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0xd0) - 1U & *param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(lVar1 + 0x88) + (longlong)iVar4 * 0xa0;
        if (*(uint *)(*(longlong *)(lVar1 + 0x88) + (longlong)iVar4 * 0xa0) == *param_1) {
          if ((lVar3 + 0x10U & 0xffffffffffffffef) != 0) {
            FUN_1467fbb26(param_1 + 1,local_2c);
            FUN_1409545ce(local_2c,&local_48);
            *(double *)(lVar3 + 0x10) = (double)local_48;
            *(double *)(lVar3 + 0x18) = (double)local_44;
            *(double *)(lVar3 + 0x20) = (double)local_40;
            *(double *)(lVar3 + 0x28) = (double)local_3c;
          }
          break;
        }
        iVar4 = *(int *)(lVar3 + 0x90);
      } while (iVar4 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14461852e FUN_14461852e body=12 status=ok
// SIG undefined FUN_14461852e(void)

void FUN_14461852e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144618537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14461853a FUN_14461853a body=29 status=ok
// SIG undefined FUN_14461853a(void)

undefined8 FUN_14461853a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618558 FUN_144618558 body=176 status=ok
// SIG undefined FUN_144618558(void)

void FUN_144618558(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = *param_2;
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x130) != 0)) &&
      (cVar2 = FUN_144904448(lVar1 + 0x120), cVar2 != '\0')) &&
     (*(int *)(lVar1 + 0x90) != *(int *)(lVar1 + 0xbc))) {
    lVar3 = lVar1 + 0xc0;
    if (*(longlong *)(lVar1 + 200) != 0) {
      lVar3 = *(longlong *)(lVar1 + 200);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0xd0) - 1U & *param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(lVar1 + 0x88) + (longlong)iVar4 * 0xa0;
        if (*(uint *)(*(longlong *)(lVar1 + 0x88) + (longlong)iVar4 * 0xa0) == *param_1) {
          if ((lVar3 + 0x10U & 0xffffffffffffffef) == 0) {
            return;
          }
          *(uint *)(lVar3 + 0x70) = param_1[1];
          return;
        }
        iVar4 = *(int *)(lVar3 + 0x90);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 144618608 FUN_144618608 body=24 status=ok
// SIG undefined FUN_144618608(void)

longlong FUN_144618608(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14be783c0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 144618626 FUN_144618626 body=12 status=ok
// SIG undefined FUN_144618626(void)

void FUN_144618626(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014461862f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144618632 FUN_144618632 body=29 status=ok
// SIG undefined FUN_144618632(void)

undefined8 FUN_144618632(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618650 FUN_144618650 body=176 status=ok
// SIG undefined FUN_144618650(void)

void FUN_144618650(uint *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  
  lVar1 = *param_2;
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x130) != 0)) &&
      (cVar2 = FUN_144904448(lVar1 + 0x120), cVar2 != '\0')) &&
     (*(int *)(lVar1 + 0x90) != *(int *)(lVar1 + 0xbc))) {
    lVar3 = lVar1 + 0xc0;
    if (*(longlong *)(lVar1 + 200) != 0) {
      lVar3 = *(longlong *)(lVar1 + 200);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0xd0) - 1U & *param_1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(lVar1 + 0x88) + (longlong)iVar4 * 0xa0;
        if (*(uint *)(*(longlong *)(lVar1 + 0x88) + (longlong)iVar4 * 0xa0) == *param_1) {
          if ((lVar3 + 0x10U & 0xffffffffffffffef) == 0) {
            return;
          }
          *(uint *)(lVar3 + 0x74) = param_1[1];
          return;
        }
        iVar4 = *(int *)(lVar3 + 0x90);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 144618700 FUN_144618700 body=24 status=ok
// SIG undefined FUN_144618700(void)

longlong FUN_144618700(longlong param_1,longlong param_2)

{
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14be783e0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  return param_2 + 0x18;
}



// FUNCTION 14461871e FUN_14461871e body=12 status=ok
// SIG undefined FUN_14461871e(void)

void FUN_14461871e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144618727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14461872a FUN_14461872a body=29 status=ok
// SIG undefined FUN_14461872a(void)

undefined8 FUN_14461872a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618748 FUN_144618748 body=110 status=ok
// SIG undefined FUN_144618748(void)

void FUN_144618748(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xf8) == param_2) {
          FUN_1497d6c7e(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xf8 + *param_1 + 0xf0);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1446187d4 FUN_1446187d4 body=12 status=ok
// SIG undefined FUN_1446187d4(void)

void FUN_1446187d4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446187dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446187e0 FUN_1446187e0 body=29 status=ok
// SIG undefined FUN_1446187e0(void)

undefined8 FUN_1446187e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618824 FUN_144618824 body=282 status=ok
// SIG undefined FUN_144618824(void)

undefined8 * FUN_144618824(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1446187fd);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 14461893e FUN_14461893e body=117 status=ok
// SIG undefined FUN_14461893e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14461893e(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_144618748(_DAT_000000a8 + 0x10,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_144618748(param_1[0x15] + 0x10,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144618985. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1446189b4 FUN_1446189b4 body=29 status=ok
// SIG undefined FUN_1446189b4(void)

undefined8 FUN_1446189b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446189e6 FUN_1446189e6 body=91 status=ok
// SIG undefined FUN_1446189e6(void)

void FUN_1446189e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78430;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144618a42 FUN_144618a42 body=91 status=ok
// SIG undefined FUN_144618a42(void)

void FUN_144618a42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78430;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144618a9e FUN_144618a9e body=124 status=ok
// SIG undefined FUN_144618a9e(void)

void FUN_144618a9e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be78430;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144618b0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144618b28 FUN_144618b28 body=25 status=ok
// SIG undefined FUN_144618b28(void)

undefined8 FUN_144618b28(longlong param_1,undefined8 param_2)

{
  FUN_140126bb0(param_2,*(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 144618b42 FUN_144618b42 body=29 status=ok
// SIG undefined FUN_144618b42(void)

undefined8 FUN_144618b42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618b74 FUN_144618b74 body=91 status=ok
// SIG undefined FUN_144618b74(void)

void FUN_144618b74(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be784a0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144618bd0 FUN_144618bd0 body=91 status=ok
// SIG undefined FUN_144618bd0(void)

void FUN_144618bd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be784a0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144618c2c FUN_144618c2c body=124 status=ok
// SIG undefined FUN_144618c2c(void)

void FUN_144618c2c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be784a0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144618c99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144618ca8 FUN_144618ca8 body=85 status=ok
// SIG undefined FUN_144618ca8(void)

void FUN_144618ca8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = DAT_14c846338;
  local_18 = DAT_14c846330;
  FUN_1497cb662(param_2,*(undefined4 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144618cfe FUN_144618cfe body=87 status=ok
// SIG undefined FUN_144618cfe(void)

undefined8 FUN_144618cfe(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = DAT_14c846338;
  local_18 = DAT_14c846330;
  FUN_1497cb662(param_2,*(undefined4 *)(param_1 + 0x18));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144618d56 FUN_144618d56 body=29 status=ok
// SIG undefined FUN_144618d56(void)

undefined8 FUN_144618d56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618d88 FUN_144618d88 body=91 status=ok
// SIG undefined FUN_144618d88(void)

void FUN_144618d88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78510;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144618de4 FUN_144618de4 body=91 status=ok
// SIG undefined FUN_144618de4(void)

void FUN_144618de4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78510;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144618e40 FUN_144618e40 body=124 status=ok
// SIG undefined FUN_144618e40(void)

void FUN_144618e40(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be78510;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144618ead. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144618ed2 FUN_144618ed2 body=32 status=ok
// SIG undefined FUN_144618ed2(void)

undefined8 FUN_144618ed2(longlong param_1,undefined8 param_2)

{
  FUN_1497d703e(param_2,*(undefined4 *)(param_1 + 0x18),&DAT_149e1e308);
  return 1;
}



// FUNCTION 144618ef2 FUN_144618ef2 body=29 status=ok
// SIG undefined FUN_144618ef2(void)

undefined8 FUN_144618ef2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144618f24 FUN_144618f24 body=91 status=ok
// SIG undefined FUN_144618f24(void)

void FUN_144618f24(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78580;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144618f80 FUN_144618f80 body=91 status=ok
// SIG undefined FUN_144618f80(void)

void FUN_144618f80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be78580;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144618fdc FUN_144618fdc body=124 status=ok
// SIG undefined FUN_144618fdc(void)

void FUN_144618fdc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be78580;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144619049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144619066 FUN_144619066 body=25 status=ok
// SIG undefined FUN_144619066(void)

undefined8 FUN_144619066(longlong param_1,undefined8 param_2)

{
  FUN_14190a70f(param_2,*(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 144619080 FUN_144619080 body=29 status=ok
// SIG undefined FUN_144619080(void)

undefined8 FUN_144619080(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446190b2 FUN_1446190b2 body=91 status=ok
// SIG undefined FUN_1446190b2(void)

void FUN_1446190b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be785f0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461910e FUN_14461910e body=91 status=ok
// SIG undefined FUN_14461910e(void)

void FUN_14461910e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be785f0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14461916a FUN_14461916a body=124 status=ok
// SIG undefined FUN_14461916a(void)

void FUN_14461916a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be785f0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446191d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446191f4 FUN_1446191f4 body=25 status=ok
// SIG undefined FUN_1446191f4(void)

undefined8 FUN_1446191f4(longlong param_1,undefined8 param_2)

{
  FUN_14190a90a(param_2,*(undefined4 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14461920e FUN_14461920e body=282 status=ok
// SIG undefined FUN_14461920e(void)

undefined8 * FUN_14461920e(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1446187fd);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 144619328 FUN_144619328 body=1095 status=ok
// SIG undefined FUN_144619328(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144619328(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  char cVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  longlong *local_190;
  undefined8 uStack_188;
  longlong local_180;
  longlong *local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined1 local_14c [4];
  double local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e8;
  uint local_e4;
  undefined2 local_e0;
  undefined8 local_dc;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar3 = *param_4;
  if (lVar3 == 0) goto LAB_1446193dd;
  puVar4 = (uint *)*param_2;
  lVar16 = *(longlong *)(puVar4 + 8);
  if (lVar16 == 0) {
    uVar15 = FUN_140067708();
    lVar16 = FUN_14477b664(uVar15);
    *(longlong *)(puVar4 + 8) = lVar16;
  }
  if (*(longlong *)(puVar4 + 10) == 0) {
    if ((lVar16 != 0) && (*(longlong *)(puVar4 + 6) != 0)) {
      plVar5 = *(longlong **)(lVar16 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar13 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar13 == '\0')) {
        puVar4[10] = 0;
        puVar4[0xb] = 0;
      }
      else {
        uVar15 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar16 = FUN_144aff482(uVar15,puVar4 + 6);
        *(longlong *)(puVar4 + 10) = lVar16;
        if (lVar16 != 0) goto LAB_1446193c2;
      }
    }
    if (((char)puVar4[2] != '\x01') || (*(longlong *)(puVar4 + 3) == 0)) goto LAB_1446193dd;
  }
LAB_1446193c2:
  if ((int)(puVar4[0x24] - puVar4[0x2f]) < (int)puVar4[0x3a]) {
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x20);
    auVar17 = divpd(auVar1,_DAT_1499387d0);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = *(double *)(param_1 + 0x30);
    auVar18 = divpd(auVar18,_DAT_1499387d0);
    auVar17 = roundpd(auVar17,auVar17,3);
    auVar18 = roundpd(auVar18,auVar18,3);
    dVar11 = (auVar1._0_8_ - auVar17._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar12 = (auVar1._8_8_ - auVar17._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar9 = (*(double *)(param_1 + 0x30) - auVar18._0_8_ * (double)DAT_1499387d0) *
            0.008726646259971648;
    dVar10 = (0.0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar6 = sin(dVar11);
    dVar7 = sin(dVar12);
    dVar8 = sin(dVar9);
    sin(dVar10);
    dVar11 = cos(dVar11);
    dVar12 = cos(dVar12);
    dVar9 = cos(dVar9);
    cos(dVar10);
    dVar10 = dVar7 * dVar6 * dVar8 + dVar12 * dVar11 * dVar9;
    local_148 = dVar6 * dVar7 * dVar9 - dVar11 * dVar12 * dVar8;
    dStack_140 = -(dVar6 * dVar12 * dVar9) - dVar11 * dVar7 * dVar8;
    local_128 = *(undefined8 *)(param_1 + 8);
    uStack_120 = *(undefined8 *)(param_1 + 0x10);
    local_118 = *(undefined8 *)(param_1 + 0x18);
    local_138._8_4_ = SUB84(dVar10,0);
    local_138._0_8_ = -(dVar12 * dVar6 * dVar8) + dVar7 * dVar11 * dVar9;
    local_138._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    uStack_110 = 0;
    local_108 = 0x3ff0000000000000;
    uStack_100 = 0x3ff0000000000000;
    local_f8 = 0x3ff0000000000000;
    uStack_f0 = 0;
    local_e0 = 0;
    local_1a8 = 0;
    local_dc = 0;
    local_e8 = puVar4[0x14];
    local_e4 = puVar4[0x15];
    local_180 = 0;
    local_178 = (longlong *)0xffffffffffffffff;
    uStack_170 = 0;
    if (puVar4[1] != 0) {
      uVar2 = *puVar4;
      local_1a8 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        puVar14 = (undefined8 *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((puVar14 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar14 + 2) != puVar4[1] || ((*(uint *)(puVar14 + 1) & 0x10200000) != 0))))
        {
          local_1a8 = 0;
        }
        else {
          local_1a8 = *puVar14;
        }
      }
    }
    local_1a0 = 0;
    FUN_140cb5d65(&local_198,*(undefined8 *)(lVar3 + 0x30),puVar4 + 2,&local_148);
    local_180 = local_198;
    local_178 = local_190;
    uStack_170 = uStack_188;
    local_168 = (undefined4)local_128;
    uStack_164 = local_128._4_4_;
    uStack_160 = (undefined4)uStack_120;
    uStack_15c = uStack_120._4_4_;
    local_158 = local_118;
    local_198 = param_1;
    local_190 = &local_180;
    FUN_14599f080(puVar4 + 0x22,local_14c,&local_198);
  }
LAB_1446193dd:
  if ((local_c0 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144619770 FUN_144619770 body=86 status=ok
// SIG undefined FUN_144619770(void)

undefined8 * FUN_144619770(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_14001cc68(0x40,8);
  *param_2 = puVar6;
  *puVar6 = &PTR_FUN_14be78670;
  puVar6[7] = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  puVar6[5] = *(undefined8 *)(param_1 + 0x28);
  puVar6[6] = uVar5;
  puVar6[3] = uVar3;
  puVar6[4] = uVar4;
  puVar6[1] = uVar1;
  puVar6[2] = uVar2;
  return puVar6 + 1;
}



// FUNCTION 1446197cc FUN_1446197cc body=29 status=ok
// SIG undefined FUN_1446197cc(void)

void FUN_1446197cc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1446197ea FUN_1446197ea body=29 status=ok
// SIG undefined FUN_1446197ea(void)

undefined8 FUN_1446197ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144619808 FUN_144619808 body=85 status=ok
// SIG undefined FUN_144619808(void)

void FUN_144619808(undefined4 *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = *param_3;
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x10) != 0)) {
    lVar2 = *param_2;
    cVar3 = FUN_144904448(lVar1);
    if (cVar3 != '\0') {
      FUN_14072d42a(lVar1,param_1[1]);
      FUN_1497d7326(lVar2 + 0x88,*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 144619888 FUN_144619888 body=29 status=ok
// SIG undefined FUN_144619888(void)

undefined8 FUN_144619888(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446198a6 FUN_1446198a6 body=213 status=ok
// SIG undefined FUN_1446198a6(void)

void FUN_1446198a6(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  
  param_3 = (longlong *)*param_3;
  if (((((param_3 != (longlong *)0x0) && (*param_1 != 0)) && (param_3[2] != 0)) &&
      ((cVar2 = FUN_144904448(param_3), cVar2 != '\0' &&
       (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)))) &&
     ((param_3[1] != -1 && (*plVar1 == param_3[1])))) {
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
    FUN_1447997cc(plVar1,*param_1,(int)param_1[1],0,0);
    *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
    if (((int)plVar1[0x26] < 1) && (FUN_1400847bc(plVar1 + 0x17,0), (int)plVar1[0x21] == 0)) {
      FUN_140087e46(plVar1);
      if (*plVar1 != -1) {
        if (DAT_14cb259f8 == 0) {
          return;
        }
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14461999a FUN_14461999a body=12 status=ok
// SIG undefined FUN_14461999a(void)

void FUN_14461999a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446199a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446199a6 FUN_1446199a6 body=29 status=ok
// SIG undefined FUN_1446199a6(void)

undefined8 FUN_1446199a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446199c4 FUN_1446199c4 body=585 status=ok
// SIG undefined FUN_1446199c4(void)

void FUN_1446199c4(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  
  param_3 = (longlong *)*param_3;
  if (((((param_3 != (longlong *)0x0) && (param_3[2] != 0)) &&
       (cVar10 = FUN_144904448(param_3), cVar10 != '\0')) &&
      ((plVar3 = (longlong *)*param_3, plVar3 != (longlong *)0x0 && (param_3[1] != -1)))) &&
     (*plVar3 == param_3[1])) {
    *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + 1;
    if ((int)plVar3[0x3a] == 0) {
      plVar13 = &DAT_14c8463d0;
    }
    else {
      plVar13 = plVar3 + 0x28;
      if ((longlong *)plVar3[0x38] != (longlong *)0x0) {
        plVar13 = (longlong *)plVar3[0x38];
      }
    }
    lVar4 = *plVar13;
    lVar5 = plVar13[1];
    lVar6 = plVar13[2];
    lVar7 = plVar13[3];
    lVar1 = param_1[2];
    lVar8 = *param_1;
    lVar9 = param_1[1];
    lVar2 = param_1[2];
    plVar13 = plVar3 + 0x28;
    uVar11 = *(uint *)((longlong)plVar3 + 0x1d4);
    iVar14 = 0;
    *(undefined4 *)(plVar3 + 0x3a) = 0;
    if ((int)uVar11 < 0) {
      FUN_147f80112(plVar13,0);
      iVar14 = (int)plVar3[0x3a];
      uVar11 = *(uint *)((longlong)plVar3 + 0x1d4);
    }
    *(undefined1 *)((longlong)plVar3 + 0x26c) = 0;
    *(uint *)(plVar3 + 0x3a) = iVar14 + 1U;
    if (uVar11 < iVar14 + 1U) {
      FUN_140089f7a(plVar13,iVar14);
    }
    if ((longlong *)plVar3[0x38] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar3[0x38];
    }
    lVar12 = (longlong)iVar14;
    plVar13[lVar12 * 0x10] = lVar4;
    (plVar13 + lVar12 * 0x10)[1] = lVar5;
    plVar13[lVar12 * 0x10 + 2] = lVar6;
    (plVar13 + lVar12 * 0x10 + 2)[1] = lVar7;
    plVar13[lVar12 * 0x10 + 4] = lVar8;
    (plVar13 + lVar12 * 0x10 + 4)[1] = lVar9;
    plVar13[lVar12 * 0x10 + 6] = lVar2;
    (plVar13 + lVar12 * 0x10 + 6)[1] = 0;
    plVar13[lVar12 * 0x10 + 8] = 0x3ff0000000000000;
    (plVar13 + lVar12 * 0x10 + 8)[1] = 0x3ff0000000000000;
    plVar13[lVar12 * 0x10 + 10] = 0x3ff0000000000000;
    (plVar13 + lVar12 * 0x10 + 10)[1] = 0;
    plVar13[lVar12 * 0x10 + 0xc] = 0x3f800000;
    *(undefined2 *)(plVar13 + lVar12 * 0x10 + 0xd) = 0;
    *(undefined8 *)((longlong)plVar13 + lVar12 * 0x80 + 0x6c) = 0;
    FUN_1447906c0(plVar3,0);
    param_3[3] = lVar8;
    param_3[4] = lVar9;
    param_3[5] = lVar1;
    *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
    if (((int)plVar3[0x26] < 1) && (FUN_1400847bc(plVar3 + 0x17,0), (int)plVar3[0x21] == 0)) {
      FUN_140087e46(plVar3);
      if (*plVar3 != -1) {
        if (DAT_14cb259f8 == 0) {
          return;
        }
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 144619c34 FUN_144619c34 body=12 status=ok
// SIG undefined FUN_144619c34(void)

void FUN_144619c34(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144619c3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144619c40 FUN_144619c40 body=29 status=ok
// SIG undefined FUN_144619c40(void)

undefined8 FUN_144619c40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144619c5e FUN_144619c5e body=688 status=ok
// SIG undefined FUN_144619c5e(void)

void FUN_144619c5e(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  undefined1 local_8c [12];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_3 = (longlong *)*param_3;
  if ((param_3 != (longlong *)0x0) && (param_3[2] != 0)) {
    cVar6 = FUN_144904448(param_3);
    if ((cVar6 != '\0') &&
       (((plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0 && (param_3[1] != -1)) &&
        (*plVar1 == param_3[1])))) {
      *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + 1;
      if ((int)plVar1[0x3a] == 0) {
        plVar10 = &DAT_14c8464e0;
        lVar12 = DAT_14c8464f0;
      }
      else {
        plVar8 = plVar1 + 0x28;
        if ((longlong *)plVar1[0x38] != (longlong *)0x0) {
          plVar8 = (longlong *)plVar1[0x38];
        }
        plVar10 = plVar8 + 4;
        lVar12 = plVar8[6];
      }
      lVar4 = *plVar10;
      lVar5 = plVar10[1];
      FUN_1467fbb26(param_1,local_8c);
      FUN_1409545ce(local_8c,&local_a8);
      plVar10 = plVar1 + 0x28;
      uVar7 = *(uint *)((longlong)plVar1 + 0x1d4);
      iVar11 = 0;
      *(undefined4 *)(plVar1 + 0x3a) = 0;
      if ((int)uVar7 < 0) {
        FUN_147f80112(plVar10,0);
        iVar11 = (int)plVar1[0x3a];
        uVar7 = *(uint *)((longlong)plVar1 + 0x1d4);
      }
      *(undefined1 *)((longlong)plVar1 + 0x26c) = 0;
      *(uint *)(plVar1 + 0x3a) = iVar11 + 1U;
      if (uVar7 < iVar11 + 1U) {
        FUN_140089f7a(plVar10,iVar11);
      }
      if ((longlong *)plVar1[0x38] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar1[0x38];
      }
      lVar9 = (longlong)iVar11;
      auVar3._8_4_ = SUB84((double)local_a4,0);
      auVar3._0_8_ = (double)local_a8;
      auVar3._12_4_ = (int)((ulonglong)(double)local_a4 >> 0x20);
      *(undefined1 (*) [16])(plVar10 + lVar9 * 0x10) = auVar3;
      auVar2._8_4_ = SUB84((double)local_9c,0);
      auVar2._0_8_ = (double)local_a0;
      auVar2._12_4_ = (int)((ulonglong)(double)local_9c >> 0x20);
      *(undefined1 (*) [16])(plVar10 + lVar9 * 0x10 + 2) = auVar2;
      plVar10[lVar9 * 0x10 + 4] = lVar4;
      (plVar10 + lVar9 * 0x10 + 4)[1] = lVar5;
      plVar10[lVar9 * 0x10 + 6] = lVar12;
      (plVar10 + lVar9 * 0x10 + 6)[1] = 0;
      plVar10[lVar9 * 0x10 + 8] = 0x3ff0000000000000;
      (plVar10 + lVar9 * 0x10 + 8)[1] = 0x3ff0000000000000;
      plVar10[lVar9 * 0x10 + 10] = 0x3ff0000000000000;
      (plVar10 + lVar9 * 0x10 + 10)[1] = 0;
      plVar10[lVar9 * 0x10 + 0xc] = 0x3f800000;
      *(undefined2 *)(plVar10 + lVar9 * 0x10 + 0xd) = 0;
      *(undefined8 *)((longlong)plVar10 + lVar9 * 0x80 + 0x6c) = 0;
      FUN_1447906c0(plVar1,0);
      *(int *)(plVar1 + 0x21) = (int)plVar1[0x21] + -1;
      if ((int)plVar1[0x26] < 1) {
        FUN_1400847bc(plVar1 + 0x17,0);
        if ((int)plVar1[0x21] == 0) {
          FUN_140087e46(plVar1);
          if (*plVar1 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_144619e3d;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar1);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar1);
          }
        }
      }
    }
  }
LAB_144619e3d:
  if ((local_80 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144619f34 FUN_144619f34 body=12 status=ok
// SIG undefined FUN_144619f34(void)

void FUN_144619f34(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144619f3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144619f40 FUN_144619f40 body=29 status=ok
// SIG undefined FUN_144619f40(void)

undefined8 FUN_144619f40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144619f5e FUN_144619f5e body=683 status=ok
// SIG undefined FUN_144619f5e(void)

void FUN_144619f5e(undefined4 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_108 [32];
  longlong local_e8 [12];
  longlong *local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_3 = (longlong *)*param_3;
  if (((((param_3 != (longlong *)0x0) && (param_3[2] != 0)) &&
       (cVar6 = FUN_144904448(param_3), cVar6 != '\0')) &&
      ((plVar4 = (longlong *)*param_3, plVar4 != (longlong *)0x0 && (param_3[1] != -1)))) &&
     (*plVar4 == param_3[1])) {
    *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + 1;
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    uVar7 = *(uint *)(plVar4 + 0x3a);
    iVar14 = 0;
    if (uVar7 != 0) {
      uStack_80 = (ulonglong)uVar7;
      FUN_144796b16(&local_88,0);
      plVar15 = plVar4 + 0x28;
      if ((longlong *)plVar4[0x38] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar4[0x38];
      }
      FUN_144796a68(local_88,plVar15,uVar7);
    }
    plVar15 = local_88;
    uVar1 = *param_1;
    *(undefined4 *)(local_88 + 0xc) = uVar1;
    plVar12 = local_88;
    plVar13 = local_e8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar13 = *plVar12;
      plVar12 = plVar12 + 1;
      plVar13 = plVar13 + 1;
    }
    fVar2 = *(float *)((longlong)plVar15 + 100);
    lVar8 = plVar15[0xd];
    uVar3 = *(undefined1 *)((longlong)plVar15 + 0x69);
    uVar5 = *(undefined8 *)((longlong)plVar15 + 0x6c);
    plVar15 = plVar4 + 0x28;
    uVar7 = *(uint *)((longlong)plVar4 + 0x1d4);
    *(undefined4 *)(plVar4 + 0x3a) = 0;
    if ((int)uVar7 < 0) {
      FUN_147f80112(plVar15,0);
      iVar14 = (int)plVar4[0x3a];
      uVar7 = *(uint *)((longlong)plVar4 + 0x1d4);
    }
    *(undefined1 *)((longlong)plVar4 + 0x26c) = 0;
    *(uint *)(plVar4 + 0x3a) = iVar14 + 1U;
    if (uVar7 < iVar14 + 1U) {
      FUN_140089f7a(plVar15,iVar14);
    }
    if ((longlong *)plVar4[0x38] != (longlong *)0x0) {
      plVar15 = (longlong *)plVar4[0x38];
    }
    lVar10 = (longlong)iVar14;
    lVar11 = lVar10 * 0x80;
    plVar12 = local_e8;
    plVar13 = plVar15 + lVar10 * 0x10;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *plVar13 = *plVar12;
      plVar12 = plVar12 + 1;
      plVar13 = plVar13 + 1;
    }
    *(undefined4 *)(plVar15 + lVar10 * 0x10 + 0xc) = uVar1;
    *(float *)((longlong)plVar15 + lVar11 + 100) = fVar2;
    *(char *)(plVar15 + lVar10 * 0x10 + 0xd) = (char)lVar8;
    *(undefined1 *)((longlong)plVar15 + lVar11 + 0x69) = uVar3;
    *(undefined8 *)((longlong)plVar15 + lVar11 + 0x6c) = uVar5;
    if (fVar2 < 0.0) {
      *(int *)((longlong)(plVar15 + lVar10 * 0x10) + 100) = (int)plVar4[0x4d];
      *(undefined1 *)((longlong)plVar4 + 0x26c) = 1;
    }
    FUN_1447906c0(plVar4,0);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + -1;
    if (((int)plVar4[0x26] < 1) && (FUN_1400847bc(plVar4 + 0x17,0), (int)plVar4[0x21] == 0)) {
      FUN_140087e46(plVar4);
      if (*plVar4 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14461a137;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
      }
    }
  }
LAB_14461a137:
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14461a226 FUN_14461a226 body=12 status=ok
// SIG undefined FUN_14461a226(void)

void FUN_14461a226(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014461a22f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14461a232 FUN_14461a232 body=29 status=ok
// SIG undefined FUN_14461a232(void)

undefined8 FUN_14461a232(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461a250 FUN_14461a250 body=683 status=ok
// SIG undefined FUN_14461a250(void)

void FUN_14461a250(float *param_1,undefined8 param_2,longlong *param_3)

{
  float fVar1;
  undefined1 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_108 [32];
  longlong local_e8 [12];
  longlong *local_88;
  ulonglong uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  param_3 = (longlong *)*param_3;
  if (((((param_3 != (longlong *)0x0) && (param_3[2] != 0)) &&
       (cVar6 = FUN_144904448(param_3), cVar6 != '\0')) &&
      ((plVar3 = (longlong *)*param_3, plVar3 != (longlong *)0x0 && (param_3[1] != -1)))) &&
     (*plVar3 == param_3[1])) {
    *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + 1;
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
    uVar7 = *(uint *)(plVar3 + 0x3a);
    iVar14 = 0;
    if (uVar7 != 0) {
      uStack_80 = (ulonglong)uVar7;
      FUN_144796b16(&local_88,0);
      plVar15 = plVar3 + 0x28;
      if ((longlong *)plVar3[0x38] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar3[0x38];
      }
      FUN_144796a68(local_88,plVar15,uVar7);
    }
    plVar15 = local_88;
    fVar1 = *param_1;
    *(float *)((longlong)local_88 + 100) = fVar1;
    plVar12 = local_88;
    plVar13 = local_e8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar13 = *plVar12;
      plVar12 = plVar12 + 1;
      plVar13 = plVar13 + 1;
    }
    lVar8 = plVar15[0xc];
    lVar5 = plVar15[0xd];
    uVar2 = *(undefined1 *)((longlong)plVar15 + 0x69);
    uVar4 = *(undefined8 *)((longlong)plVar15 + 0x6c);
    plVar15 = plVar3 + 0x28;
    uVar7 = *(uint *)((longlong)plVar3 + 0x1d4);
    *(undefined4 *)(plVar3 + 0x3a) = 0;
    if ((int)uVar7 < 0) {
      FUN_147f80112(plVar15,0);
      iVar14 = (int)plVar3[0x3a];
      uVar7 = *(uint *)((longlong)plVar3 + 0x1d4);
    }
    *(undefined1 *)((longlong)plVar3 + 0x26c) = 0;
    *(uint *)(plVar3 + 0x3a) = iVar14 + 1U;
    if (uVar7 < iVar14 + 1U) {
      FUN_140089f7a(plVar15,iVar14);
    }
    if ((longlong *)plVar3[0x38] != (longlong *)0x0) {
      plVar15 = (longlong *)plVar3[0x38];
    }
    lVar10 = (longlong)iVar14;
    lVar11 = lVar10 * 0x80;
    plVar12 = local_e8;
    plVar13 = plVar15 + lVar10 * 0x10;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *plVar13 = *plVar12;
      plVar12 = plVar12 + 1;
      plVar13 = plVar13 + 1;
    }
    *(int *)(plVar15 + lVar10 * 0x10 + 0xc) = (int)lVar8;
    *(float *)((longlong)plVar15 + lVar11 + 100) = fVar1;
    *(char *)(plVar15 + lVar10 * 0x10 + 0xd) = (char)lVar5;
    *(undefined1 *)((longlong)plVar15 + lVar11 + 0x69) = uVar2;
    *(undefined8 *)((longlong)plVar15 + lVar11 + 0x6c) = uVar4;
    if (fVar1 < 0.0) {
      *(int *)((longlong)(plVar15 + lVar10 * 0x10) + 100) = (int)plVar3[0x4d];
      *(undefined1 *)((longlong)plVar3 + 0x26c) = 1;
    }
    FUN_1447906c0(plVar3,0);
    if (local_88 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    *(int *)(plVar3 + 0x21) = (int)plVar3[0x21] + -1;
    if (((int)plVar3[0x26] < 1) && (FUN_1400847bc(plVar3 + 0x17,0), (int)plVar3[0x21] == 0)) {
      FUN_140087e46(plVar3);
      if (*plVar3 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_14461a429;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar3);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar3);
      }
    }
  }
LAB_14461a429:
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14461a518 FUN_14461a518 body=12 status=ok
// SIG undefined FUN_14461a518(void)

void FUN_14461a518(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014461a521. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14461a524 FUN_14461a524 body=29 status=ok
// SIG undefined FUN_14461a524(void)

undefined8 FUN_14461a524(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461a542 FUN_14461a542 body=29 status=ok
// SIG undefined FUN_14461a542(void)

undefined8 FUN_14461a542(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14461a6de FUN_14461a6de body=101 status=ok
// SIG undefined FUN_14461a6de(void)

void FUN_14461a6de(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be78750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14461a744 FUN_14461a744 body=101 status=ok
// SIG undefined FUN_14461a744(void)

void FUN_14461a744(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14be78750;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14461a7aa FUN_14461a7aa body=134 status=ok
// SIG undefined FUN_14461a7aa(void)

void FUN_14461a7aa(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be78750;
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
                    /* WARNING: Could not recover jumptable at 0x00014461a821. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14461a83a FUN_14461a83a body=269 status=ok
// SIG undefined FUN_14461a83a(void)

undefined8 FUN_14461a83a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14461a941;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14461a941;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14461a941:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14461a8f5;
    lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      FUN_14461a948(param_1 + 0x20);
      uVar6 = 1;
      goto LAB_14461a8f5;
    }
  }
  uVar6 = 0;
LAB_14461a8f5:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14461a948 FUN_14461a948 body=244 status=ok
// SIG undefined FUN_14461a948(void)

void FUN_14461a948(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  
  iVar3 = DAT_14c9647dc;
  lVar6 = DAT_14c9647c8;
  if ((((*(int *)((longlong)param_1 + 0xc) == 0) || (uVar8 = *(uint *)(param_1 + 1), (int)uVar8 < 0)
       ) || (DAT_14c9647dc <= (int)uVar8)) ||
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)param_1 + 0xc))) ||
      ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) {
    piVar1 = (int *)(*param_1 + 0x84);
    *piVar1 = *piVar1 + 1;
  }
  else {
    lVar2 = *plVar9;
    piVar1 = (int *)(*param_1 + 0x84);
    *piVar1 = *piVar1 + 1;
    if (lVar2 != 0) {
      uVar8 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar8 < iVar3) {
        lVar6 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                *(longlong *)(lVar6 + (ulonglong)(uVar8 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      uVar5 = (ulonglong)*(uint *)(lVar6 + 0x10);
      if (*(uint *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar4 = *(uint *)(lVar6 + 0x10);
        bVar10 = uVar4 == 0;
        if (bVar10) {
          *(uint *)(lVar6 + 0x10) = uVar7;
          uVar4 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar4 = uVar7;
        }
        uVar5 = (ulonglong)uVar4;
      }
      goto LAB_14461a9d7;
    }
  }
  uVar8 = 0;
  uVar5 = 0;
LAB_14461a9d7:
  FUN_14190adca((ulonglong)uVar8 | uVar5 << 0x20);
  return;
}



// FUNCTION 14461aa3c FUN_14461aa3c body=1165 status=ok
// SIG undefined FUN_14461aa3c(void)

void FUN_14461aa3c(undefined1 *param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_68 [32];
  ulonglong *local_48;
  longlong local_40;
  ulonglong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar6 = *(longlong *)(param_3 + 0x10);
  if (lVar6 == 0) {
    *(undefined8 *)(param_1 + 0xe8) = 0;
    *param_1 = 0;
    goto LAB_14461ae2b;
  }
  lVar7 = *(longlong *)(param_3 + 0x18);
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
  }
  plVar11 = *(longlong **)(param_1 + 0xe0);
  *(longlong *)(param_1 + 0xd8) = lVar6;
  *(longlong *)(param_1 + 0xe0) = lVar7;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar10 = plVar11 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  FUN_14006bf18(*(longlong *)(param_1 + 0xd8) + 0x40,param_2);
  FUN_14006bf18(*(undefined8 *)(param_1 + 0xd8),param_2);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x50);
  if (lVar6 == 0) {
LAB_14461aaed:
    lVar7 = *(longlong *)(param_1 + 0xf0);
    if (lVar7 != 0) {
      *(undefined8 *)(param_1 + 0xf0) = 0;
      LOCK();
      puVar2 = (uint *)(lVar7 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar7 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar7 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar7;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar13) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    UNLOCK();
    if ((*(uint *)(lVar6 + 0x28) >> 8 & 1) == 0) goto LAB_14461aaed;
    if ((*(uint *)(lVar6 + 0x28) & 0x10) == 0) {
      local_48 = local_38;
      local_38[1] = 0;
      local_38[0]._0_2_ =
           (ushort)(byte)((*(byte *)(*(longlong *)(param_1 + 0xd8) + 0x7c) ^ 1) * '\x04' + 0x1c) <<
           8;
      local_38[0] = (ulonglong)CONCAT12(1,(short)local_38[0]);
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_40,param_2,lVar6);
    }
    else {
      local_48 = local_38;
      local_38[1] = 0;
      local_38[0] = 0x40000;
      (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_40,param_2,lVar6);
    }
    plVar11 = (longlong *)(param_1 + 0xf0);
    if (plVar11 == &local_40) {
LAB_14461ac80:
      lVar7 = local_40;
      if (local_40 != 0) {
        LOCK();
        puVar2 = (uint *)(local_40 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(local_40 + 8);
          LOCK();
          uVar3 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(local_40 + 0xd);
            plVar9 = (longlong *)FUN_14001cc68(0x10,8);
            plVar9[1] = lVar7;
            plVar11 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar9 = (longlong)plVar11;
                LOCK();
                bVar13 = plVar11 != DAT_14ca843c0;
                plVar10 = plVar9;
                if (bVar13) {
                  plVar11 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar9 = (longlong)plVar10;
                LOCK();
                bVar13 = plVar10 != DAT_14ca843c8;
                plVar11 = plVar9;
                if (bVar13) {
                  plVar10 = DAT_14ca843c8;
                  plVar11 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar11;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
      }
    }
    else {
      lVar7 = *plVar11;
      *plVar11 = local_40;
      local_40 = 0;
      if (lVar7 != 0) {
        LOCK();
        puVar2 = (uint *)(lVar7 + 8);
        uVar3 = *puVar2;
        *puVar2 = *puVar2 - 1;
        UNLOCK();
        if ((uVar3 & 0x3fffffff) == 1) {
          puVar2 = (uint *)(lVar7 + 8);
          LOCK();
          uVar3 = *puVar2;
          *puVar2 = *puVar2 | 0x40000000;
          UNLOCK();
          if ((uVar3 >> 0x1e & 1) == 0) {
            bVar4 = *(byte *)(lVar7 + 0xd);
            plVar9 = (longlong *)FUN_14001cc68(0x10,8);
            plVar9[1] = lVar7;
            plVar11 = DAT_14ca843c0;
            plVar10 = DAT_14ca843c8;
            if ((bVar4 & 2) == 0) {
              do {
                *plVar9 = (longlong)plVar11;
                LOCK();
                bVar13 = plVar11 != DAT_14ca843c0;
                plVar10 = plVar9;
                if (bVar13) {
                  plVar11 = DAT_14ca843c0;
                  plVar10 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar10;
                UNLOCK();
              } while (bVar13);
            }
            else {
              do {
                *plVar9 = (longlong)plVar10;
                LOCK();
                bVar13 = plVar10 != DAT_14ca843c8;
                plVar11 = plVar9;
                if (bVar13) {
                  plVar10 = DAT_14ca843c8;
                  plVar11 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar11;
                UNLOCK();
              } while (bVar13);
            }
          }
        }
        goto LAB_14461ac80;
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0xf8);
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xd8) + 0x18);
  if (lVar7 != lVar8) {
    *(longlong *)(param_1 + 0xf8) = lVar8;
    if (lVar8 != 0) {
      LOCK();
      *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar7 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        puVar2 = (uint *)(lVar7 + 8);
        LOCK();
        uVar3 = *puVar2;
        *puVar2 = *puVar2 | 0x40000000;
        UNLOCK();
        if ((uVar3 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar7 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar7;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar13 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar13) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar13);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar13 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar13) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar13);
          }
        }
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0xd8);
  iVar12 = *(int *)(lVar7 + 0x78);
  if (iVar12 < 0) {
    iVar5 = *(int *)(lVar7 + 0x68);
    if (*(char *)(lVar7 + 0x7c) == '\x01') {
      iVar12 = iVar5 + 3;
      if (-1 < iVar5) {
        iVar12 = iVar5;
      }
      iVar12 = iVar12 >> 2;
    }
    else {
      iVar12 = iVar5 / 2;
    }
  }
  *(int *)(param_1 + 0xe8) = iVar12 / 3;
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(lVar7 + 0x34);
  if (*(longlong *)(param_1 + 0xf0) == 0) {
    bVar13 = false;
  }
  else {
    bVar13 = *(longlong *)(param_1 + 0xf8) != 0;
  }
  *param_1 = bVar13;
  if (lVar6 != 0) {
    LOCK();
    puVar2 = (uint *)(lVar6 + 8);
    uVar3 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if ((uVar3 & 0x3fffffff) == 1) {
      puVar2 = (uint *)(lVar6 + 8);
      LOCK();
      uVar3 = *puVar2;
      *puVar2 = *puVar2 | 0x40000000;
      UNLOCK();
      if ((uVar3 >> 0x1e & 1) == 0) {
        bVar4 = *(byte *)(lVar6 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar6;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar4 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar11;
            LOCK();
            bVar13 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar13) {
              plVar11 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar13);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar13 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar9;
            if (bVar13) {
              plVar10 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar13);
        }
      }
    }
  }
LAB_14461ae2b:
  if ((local_38[2] ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14461aeca FUN_14461aeca body=132 status=ok
// SIG undefined FUN_14461aeca(void)

void FUN_14461aeca(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)*param_1;
  local_38 = (longlong *)*param_1 + 1;
  FUN_140bd9bca(lVar1 + 0x10,&local_2c);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    FUN_14461aa3c(*(longlong *)(lVar1 + 0x10) + (longlong)local_2c * 0x120 + 0x10,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 14461af5a FUN_14461af5a body=12 status=ok
// SIG undefined FUN_14461af5a(void)

void FUN_14461af5a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014461af63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}


