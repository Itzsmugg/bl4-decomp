// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a07660 FUN_142a07660 body=3193 status=ok
// SIG undefined FUN_142a07660(void)

void FUN_142a07660(longlong *param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint *puVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_138 [40];
  longlong *local_110;
  uint local_104;
  uint *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  ulonglong local_e0;
  uint local_d8;
  int local_d4;
  int *local_d0;
  uint *local_c8;
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar2 = (longlong *)param_1[5];
  iVar7 = (int)plVar2[1];
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  lVar14 = *param_1;
  *(undefined4 *)(lVar14 + 8) = 0;
  if (*(int *)(lVar14 + 0xc) < iVar7) {
    FUN_14481578e();
  }
  FUN_146ec7f2e(param_1[1]);
  FUN_1407058ce();
  plVar3 = (longlong *)param_1[2];
  iVar18 = (int)plVar2[3];
  iVar7 = (int)plVar3[1];
  if (iVar7 < iVar18) {
    *(int *)(plVar3 + 1) = iVar18;
    if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar7) < (uint)(iVar18 - iVar7)) {
      FUN_14475e4ac(plVar3);
    }
    memset((void *)((longlong)iVar7 * 4 + *plVar3),0,(longlong)(iVar18 - iVar7) << 2);
  }
  else {
    if (iVar18 < 0) goto LAB_142a0830a;
    if (iVar18 < iVar7) {
      *(int *)(plVar3 + 1) = iVar18;
    }
  }
  plVar3 = (longlong *)param_1[3];
  iVar18 = (int)plVar2[3];
  iVar7 = (int)plVar3[1];
  if (iVar7 < iVar18) {
    *(int *)(plVar3 + 1) = iVar18;
    if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar7) < (uint)(iVar18 - iVar7)) {
      FUN_1446f48e2(plVar3);
    }
    memset((void *)((longlong)iVar7 * 4 + *plVar3),0,(longlong)(iVar18 - iVar7) << 2);
  }
  else {
    if (iVar18 < 0) {
LAB_142a0830a:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar18);
    }
    if (iVar18 < iVar7) {
      *(int *)(plVar3 + 1) = iVar18;
    }
  }
  local_e8 = plVar2 + 2;
  if ((int)plVar2[3] < 1) {
    if ((int)plVar2[3] != 0) goto LAB_142a0824b;
  }
  else {
    lVar14 = 0;
    lVar15 = 2;
    iVar7 = 0;
    do {
      lVar12 = plVar2[2];
      fVar26 = (*(float *)(lVar12 + lVar15 * 4) - param_2[2]) * param_3[2] +
               (*(float *)(lVar12 + -8 + lVar15 * 4) - *param_2) * *param_3 +
               (*(float *)(lVar12 + -4 + lVar15 * 4) - param_2[1]) * param_3[1];
      *(float *)(*(longlong *)param_1[2] + lVar14 * 4) = fVar26;
      iVar7 = iVar7 + (uint)(0.0 < fVar26);
      lVar14 = lVar14 + 1;
      lVar15 = lVar15 + 3;
    } while (lVar14 < (int)plVar2[3]);
    if (iVar7 != (int)plVar2[3]) {
      if (iVar7 != 0) {
        if (0 < (int)plVar2[1]) {
          local_104 = 0xffffffff;
          iVar7 = 0;
          local_110 = param_1;
          do {
            plVar3 = local_110;
            puVar11 = (uint *)*plVar2;
            lVar14 = (longlong)iVar7;
            uVar21 = puVar11[lVar14];
            uVar9 = -uVar21;
            if (-1 < (int)uVar21) {
              uVar9 = 3;
            }
            uVar13 = iVar7 + -((int)uVar21 >> 0x1f);
            plVar16 = (longlong *)(ulonglong)uVar13;
            if ((int)uVar9 < 1) {
              param_1 = local_110;
              if (uVar9 != 0) {
LAB_142a07928:
                param_1 = local_110;
                if (iVar7 < (int)(uVar13 + uVar9)) {
                  iVar7 = -((int)uVar21 >> 0x1f) + uVar9;
                  local_f0 = plVar16;
                  do {
                    plVar16 = (longlong *)*plVar3;
                    lVar15 = *plVar2;
                    lVar12 = plVar16[1];
                    uVar21 = (int)lVar12 + 1;
                    *(uint *)(plVar16 + 1) = uVar21;
                    if (*(uint *)((longlong)plVar16 + 0xc) < uVar21) {
                      FUN_1446f48e2(plVar16);
                    }
                    *(undefined4 *)(*plVar16 + (longlong)(int)lVar12 * 4) =
                         *(undefined4 *)(lVar15 + lVar14 * 4);
                    lVar14 = lVar14 + 1;
                    iVar7 = iVar7 + -1;
                    param_1 = plVar3;
                    uVar8 = local_104;
                  } while (iVar7 != 0);
                  goto LAB_142a07bf6;
                }
              }
            }
            else {
              plVar4 = (longlong *)param_1[2];
              lVar15 = *plVar4;
              local_e0 = (ulonglong)(int)uVar13;
              uVar20 = (ulonglong)uVar9;
              uVar24 = 0xffffffff;
              uVar10 = 0;
              uVar25 = 0;
              iVar19 = -1;
              iVar18 = -1;
              do {
                fVar26 = *(float *)(lVar15 + (longlong)(int)puVar11[local_e0 + uVar10] * 4);
                if ((int)uVar24 == -1) {
                  uVar24 = 0xffffffff;
                  if (fVar26 <= 0.0) {
                    uVar24 = uVar10 & 0xffffffff;
                  }
                }
                else if (iVar19 == -1 && 0.0 < fVar26) {
                  iVar18 = (int)uVar10 + -1;
                  iVar19 = (int)uVar10;
                }
                iVar23 = (int)uVar24;
                uVar25 = uVar25 + (0.0 < fVar26);
                uVar10 = uVar10 + 1;
              } while (uVar20 != uVar10);
              if (iVar19 == -1) {
                iVar18 = uVar9 - 1;
              }
              if (iVar19 == -1) {
                iVar19 = 0;
              }
              param_1 = plVar3;
              uVar8 = local_104;
              local_100 = puVar11;
              local_f8 = plVar4;
              local_f0 = plVar16;
              if (uVar25 != uVar9) {
                if (uVar25 == 0) goto LAB_142a07928;
                uVar25 = (iVar18 - iVar23) + 1;
                uVar21 = uVar25;
                if (((iVar23 == 0) && (iVar23 = 0, uVar9 != 1)) &&
                   (*(float *)(lVar15 + (longlong)(int)puVar11[local_e0 + (uVar20 - 1)] * 4) <= 0.0)
                   ) {
                  uVar21 = uVar9 + iVar18;
                  do {
                    if (uVar20 < 3) {
                      iVar23 = 1;
                      goto LAB_142a0798e;
                    }
                    uVar25 = uVar25 + 1;
                    lVar14 = uVar20 - 2;
                    uVar20 = uVar20 - 1;
                  } while (*(float *)(lVar15 + (longlong)(int)puVar11[local_e0 + lVar14] * 4) <= 0.0
                          );
                  iVar23 = (int)uVar20;
                  uVar21 = uVar25;
                }
LAB_142a0798e:
                local_b8 = local_110[1];
                local_f8 = (longlong *)(longlong)(int)(iVar23 + uVar13);
                uStack_b0 = plVar4;
                local_a8 = plVar2;
                iVar7 = FUN_142a08324(&local_b8,puVar11[(longlong)local_f8],
                                      puVar11[(int)((int)((uVar9 - 1) + iVar23) % (int)uVar9 +
                                                   uVar13)]);
                uVar25 = FUN_142a08324(&local_b8,
                                       *(undefined4 *)
                                        (*plVar2 + (longlong)(int)(uVar13 + iVar18) * 4),
                                       *(undefined4 *)
                                        (*plVar2 + (longlong)(int)(iVar19 + uVar13) * 4));
                local_100 = (uint *)CONCAT44(local_100._4_4_,iVar7);
                if (iVar7 == -1) {
                  local_d4 = *(int *)(*plVar2 + (longlong)local_f8 * 4);
                }
                else {
                  uVar21 = uVar21 + 1;
                  local_d4 = iVar7;
                }
                if (uVar25 == 0xffffffff) {
                  uVar13 = *(uint *)(*plVar2 + (longlong)(int)(uVar13 + iVar18) * 4);
                }
                else {
                  uVar21 = uVar21 + 1;
                  uVar13 = uVar25;
                }
                param_1 = local_110;
                uVar8 = local_104;
                local_d8 = uVar13;
                if (1 < (int)uVar21) {
                  local_d0 = &local_d4;
                  local_c8 = &local_d8;
                  FUN_140263e2a(local_110[4],local_bc,&local_d0,0);
                  param_1 = local_110;
                  uVar8 = uVar13;
                  if (uVar21 != 2) {
                    if (3 < uVar21) {
                      plVar3 = (longlong *)*local_110;
                      plVar16 = (longlong *)(longlong)(int)plVar3[1];
                      uVar8 = (int)plVar3[1] + 1;
                      *(uint *)(plVar3 + 1) = uVar8;
                      if (*(uint *)((longlong)plVar3 + 0xc) < uVar8) {
                        local_f8 = plVar16;
                        FUN_1446f48e2(plVar3,plVar16);
                        plVar16 = local_f8;
                      }
                      *(uint *)(*plVar3 + (longlong)plVar16 * 4) = -uVar21;
                    }
                    if ((uint)local_100 != -1) {
                      plVar3 = (longlong *)*local_110;
                      lVar14 = plVar3[1];
                      uVar21 = (int)lVar14 + 1;
                      *(uint *)(plVar3 + 1) = uVar21;
                      if (*(uint *)((longlong)plVar3 + 0xc) < uVar21) {
                        FUN_1446f48e2(plVar3);
                      }
                      *(uint *)(*plVar3 + (longlong)(int)lVar14 * 4) = (uint)local_100;
                    }
                    local_100 = (uint *)CONCAT44(local_100._4_4_,uVar13);
                    if (iVar18 < iVar23) {
                      iVar7 = uVar9 - iVar23;
                      if (iVar7 == 0 || (int)uVar9 < iVar23) {
                        iVar23 = 0;
                      }
                      else {
                        local_f8 = (longlong *)CONCAT44(local_f8._4_4_,uVar25);
                        lVar14 = (longlong)iVar23 + local_e0;
                        do {
                          plVar3 = (longlong *)*local_110;
                          uVar1 = *(undefined4 *)(*plVar2 + lVar14 * 4);
                          lVar15 = plVar3[1];
                          uVar21 = (int)lVar15 + 1;
                          *(uint *)(plVar3 + 1) = uVar21;
                          if (*(uint *)((longlong)plVar3 + 0xc) < uVar21) {
                            FUN_1446f48e2(plVar3);
                          }
                          *(undefined4 *)(*plVar3 + (longlong)(int)lVar15 * 4) = uVar1;
                          lVar14 = lVar14 + 1;
                          iVar7 = iVar7 + -1;
                        } while (iVar7 != 0);
                        iVar23 = 0;
                        uVar25 = (uint)local_f8;
                      }
                    }
                    if (iVar23 <= iVar18) {
                      iVar7 = (iVar18 - iVar23) + 1;
                      lVar14 = (longlong)iVar23 + local_e0;
                      do {
                        plVar3 = (longlong *)*local_110;
                        uVar1 = *(undefined4 *)(*plVar2 + lVar14 * 4);
                        lVar15 = plVar3[1];
                        uVar21 = (int)lVar15 + 1;
                        *(uint *)(plVar3 + 1) = uVar21;
                        if (*(uint *)((longlong)plVar3 + 0xc) < uVar21) {
                          FUN_1446f48e2(plVar3);
                        }
                        *(undefined4 *)(*plVar3 + (longlong)(int)lVar15 * 4) = uVar1;
                        lVar14 = lVar14 + 1;
                        iVar7 = iVar7 + -1;
                      } while (iVar7 != 0);
                    }
                    uVar8 = (uint)local_100;
                    if (uVar25 == 0xffffffff) {
                      local_104 = (uint)local_100;
                      param_1 = local_110;
                      uVar8 = local_104;
                    }
                    else {
                      plVar3 = (longlong *)*local_110;
                      lVar14 = plVar3[1];
                      uVar21 = (int)lVar14 + 1;
                      *(uint *)(plVar3 + 1) = uVar21;
                      if (*(uint *)((longlong)plVar3 + 0xc) < uVar21) {
                        FUN_1446f48e2(plVar3);
                      }
                      *(uint *)(*plVar3 + (longlong)(int)lVar14 * 4) = uVar25;
                      param_1 = local_110;
                    }
                  }
                }
              }
LAB_142a07bf6:
              local_104 = uVar8;
              uVar13 = (uint)local_f0;
            }
            iVar7 = uVar13 + uVar9;
          } while (iVar7 < (int)plVar2[1]);
          if (local_104 != 0xffffffff) {
            iVar7 = *(int *)(param_1[4] + 8) - *(int *)(param_1[4] + 0x34);
            if (2 < iVar7) {
              param_1 = (longlong *)*param_1;
              iVar18 = (int)param_1[1];
              if (iVar7 != 3) {
                *(uint *)(param_1 + 1) = iVar18 + 1U;
                if (*(uint *)((longlong)param_1 + 0xc) < iVar18 + 1U) {
                  FUN_1446f48e2(param_1);
                }
                *(int *)(*param_1 + (longlong)iVar18 * 4) = -iVar7;
              }
              iVar19 = 0;
              uVar21 = local_104;
              while( true ) {
                plVar3 = (longlong *)*local_110;
                lVar14 = plVar3[1];
                uVar9 = (int)lVar14 + 1;
                *(uint *)(plVar3 + 1) = uVar9;
                if (*(uint *)((longlong)plVar3 + 0xc) < uVar9) {
                  FUN_1446f48e2(plVar3);
                }
                param_1 = local_110;
                *(uint *)(*plVar3 + (longlong)(int)lVar14 * 4) = uVar21;
                plVar3 = (longlong *)local_110[4];
                if ((int)plVar3[1] == *(int *)((longlong)plVar3 + 0x34)) break;
                plVar16 = plVar3 + 7;
                if ((longlong *)plVar3[8] != (longlong *)0x0) {
                  plVar16 = (longlong *)plVar3[8];
                }
                iVar23 = *(int *)((longlong)plVar16 + (ulonglong)((int)plVar3[9] - 1U & uVar21) * 4)
                ;
                if (iVar23 == -1) break;
                while (lVar14 = *plVar3 + (longlong)iVar23 * 0x10,
                      *(uint *)(*plVar3 + (longlong)iVar23 * 0x10) != uVar21) {
                  iVar23 = *(int *)(lVar14 + 8);
                  if (iVar23 == -1) goto LAB_142a07dbe;
                }
                if ((lVar14 == 0) || ((uint *)(lVar14 + 4) == (uint *)0x0)) break;
                uVar21 = *(uint *)(lVar14 + 4);
                iVar19 = iVar19 + 1;
                if ((uVar21 == local_104) || (iVar7 <= iVar19)) break;
              }
LAB_142a07dbe:
              if ((iVar19 != iVar7) || (uVar21 != local_104)) {
                plVar3 = (longlong *)*local_110;
                iVar7 = (int)plVar3[1];
                if (iVar7 < iVar18) {
                  *(int *)(plVar3 + 1) = iVar18;
                  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar7) < (uint)(iVar18 - iVar7)) {
                    FUN_1446f48e2(plVar3);
                  }
                  memset((void *)((longlong)iVar7 * 4 + *plVar3),0,(longlong)(iVar18 - iVar7) << 2);
                }
                else {
                  if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(iVar18);
                  }
                  if (iVar18 < iVar7) {
                    *(int *)(plVar3 + 1) = iVar18;
                  }
                }
                uVar21 = *(uint *)(plVar2 + 3);
                plVar3 = (longlong *)param_1[4];
                uVar9 = *(uint *)(plVar3 + 5);
                if (uVar9 == 0) {
                  uVar10 = 1;
                  uVar20 = 0;
                  iVar7 = 0;
                  uVar13 = 0;
                }
                else {
                  puVar11 = (uint *)plVar3[4];
                  if ((uint *)plVar3[4] == (uint *)0x0) {
                    puVar11 = (uint *)(plVar3 + 2);
                  }
                  uVar13 = *puVar11;
                  if (uVar13 == 0) {
                    iVar7 = uVar9 + 0x1e;
                    if (-1 < (int)(uVar9 - 1)) {
                      iVar7 = uVar9 - 1;
                    }
                    uVar20 = 0;
                    uVar10 = (ulonglong)(uint)(iVar7 >> 5);
                    if (iVar7 >> 5 < 1) {
                      uVar10 = uVar20;
                    }
                    iVar7 = 0;
                    do {
                      if (uVar10 == uVar20) {
                        fVar26 = 0.0;
                        fVar27 = 0.0;
                        fVar28 = 0.0;
                        fVar29 = 0.0;
                        goto LAB_142a080ca;
                      }
                      iVar7 = iVar7 + 0x20;
                      uVar13 = puVar11[uVar20 + 1];
                      uVar20 = uVar20 + 1;
                    } while (uVar13 == 0);
                  }
                  else {
                    uVar20 = 0;
                    iVar7 = 0;
                  }
                  uVar10 = (ulonglong)(-uVar13 & uVar13);
                  uVar24 = uVar10 * 2 + 1;
                  lVar14 = 0x3f;
                  if (uVar24 != 0) {
                    for (; uVar24 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                    }
                  }
                  uVar13 = (iVar7 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                  if ((int)uVar9 <= (int)uVar13) {
                    uVar13 = uVar9;
                  }
                }
                fVar26 = 0.0;
                if (uVar13 == uVar9) {
                  fVar27 = 0.0;
                  fVar28 = 0.0;
                  fVar29 = 0.0;
                  param_1 = local_110;
                }
                else {
                  uVar25 = 0xffffffff;
                  fVar29 = 0.0;
                  fVar28 = 0.0;
                  fVar27 = 0.0;
                  local_100 = (uint *)(plVar3 + 2);
                  local_f8 = (longlong *)(ulonglong)uVar9;
                  local_f0 = plVar3;
                  local_e0 = (ulonglong)uVar21;
                  do {
                    uVar5 = *(undefined8 *)(*local_f0 + (longlong)(int)uVar13 * 0x10);
                    plVar3 = (longlong *)*local_110;
                    iVar18 = (int)plVar3[1];
                    *(uint *)(plVar3 + 1) = iVar18 + 1U;
                    if (*(uint *)((longlong)plVar3 + 0xc) < iVar18 + 1U) {
                      FUN_1446f48e2(plVar3,iVar18);
                    }
                    iVar19 = (int)uVar5;
                    *(int *)(*plVar3 + (longlong)iVar18 * 4) = iVar19;
                    plVar3 = (longlong *)*local_110;
                    iVar18 = (int)plVar3[1];
                    *(uint *)(plVar3 + 1) = iVar18 + 1U;
                    if (*(uint *)((longlong)plVar3 + 0xc) < iVar18 + 1U) {
                      FUN_1446f48e2(plVar3,iVar18);
                    }
                    *(int *)(*plVar3 + (longlong)iVar18 * 4) = (int)((ulonglong)uVar5 >> 0x20);
                    plVar3 = (longlong *)*local_110;
                    iVar18 = (int)plVar3[1];
                    *(uint *)(plVar3 + 1) = iVar18 + 1U;
                    if (*(uint *)((longlong)plVar3 + 0xc) < iVar18 + 1U) {
                      FUN_1446f48e2(plVar3,iVar18);
                    }
                    *(int *)(*plVar3 + (longlong)iVar18 * 4) = (int)local_e0;
                    lVar14 = *local_e8;
                    lVar15 = (longlong)iVar19;
                    fVar26 = fVar26 + *(float *)(lVar14 + lVar15 * 0xc);
                    fVar27 = fVar27 + *(float *)(lVar14 + 4 + lVar15 * 0xc);
                    fVar28 = fVar28 + *(float *)(lVar14 + 8 + lVar15 * 0xc);
                    fVar29 = fVar29 + 1.0;
                    uVar25 = uVar25 & ~(uint)uVar10;
                    puVar11 = (uint *)local_f0[4];
                    if ((uint *)local_f0[4] == (uint *)0x0) {
                      puVar11 = local_100;
                    }
                    uVar21 = *(uint *)(local_f0 + 5);
                    iVar18 = (int)uVar20;
                    lVar14 = (longlong)iVar18;
                    uVar9 = puVar11[lVar14] & uVar25;
                    if (uVar9 == 0) {
                      iVar19 = uVar21 + 0x1e;
                      if (-1 < (int)(uVar21 - 1)) {
                        iVar19 = uVar21 - 1;
                      }
                      iVar19 = iVar19 >> 5;
                      iVar7 = iVar7 + 0x20;
                      iVar23 = iVar19;
                      if (iVar19 < iVar18) {
                        iVar23 = iVar18;
                      }
                      if (iVar18 < iVar19) {
                        lVar15 = 0;
                        do {
                          uVar9 = puVar11[lVar14 + lVar15 + 1];
                          if (uVar9 != 0) {
                            uVar20 = (ulonglong)(iVar18 + (int)lVar15 + 1);
                            uVar25 = 0xffffffff;
                            goto LAB_142a0807d;
                          }
                          iVar7 = iVar7 + 0x20;
                          lVar15 = lVar15 + 1;
                        } while (iVar23 - lVar14 != lVar15);
                        uVar25 = 0xffffffff;
                        iVar18 = iVar23;
                      }
                      uVar20 = (ulonglong)(iVar18 + 1);
                      uVar13 = uVar21;
                    }
                    else {
LAB_142a0807d:
                      uVar10 = (ulonglong)(-uVar9 & uVar9);
                      uVar24 = uVar10 * 2 + 1;
                      lVar14 = 0x3f;
                      if (uVar24 != 0) {
                        for (; uVar24 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                        }
                      }
                      uVar13 = (iVar7 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
                      if ((int)uVar21 <= (int)uVar13) {
                        uVar13 = uVar21;
                      }
                    }
                  } while (uVar13 != (uint)local_f8);
                  uVar21 = *(uint *)(plVar2 + 3);
                  param_1 = local_110;
                }
LAB_142a080ca:
                plVar3 = local_e8;
                fVar29 = 1.0 / fVar29;
                *(uint *)(plVar2 + 3) = uVar21 + 1;
                if (*(uint *)((longlong)plVar2 + 0x1c) < uVar21 + 1) {
                  FUN_140aacb36(local_e8);
                }
                lVar14 = *plVar3;
                lVar15 = (longlong)(int)uVar21;
                *(float *)(lVar14 + lVar15 * 0xc) = fVar26 * fVar29;
                *(float *)(lVar14 + 4 + lVar15 * 0xc) = fVar27 * fVar29;
                *(float *)(lVar14 + 8 + lVar15 * 0xc) = fVar29 * fVar28;
              }
            }
          }
        }
        plVar3 = (longlong *)*param_1;
        lVar14 = *plVar2;
        plVar16 = (longlong *)plVar2[1];
        lVar15 = plVar3[1];
        *plVar2 = *plVar3;
        plVar2[1] = lVar15;
        local_b8._0_4_ = (undefined4)lVar14;
        local_b8._4_4_ = (undefined4)((ulonglong)lVar14 >> 0x20);
        uStack_b0._0_4_ = SUB84(plVar16,0);
        uStack_b0._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
        *(undefined4 *)plVar3 = (undefined4)local_b8;
        *(undefined4 *)((longlong)plVar3 + 4) = local_b8._4_4_;
        *(undefined4 *)(plVar3 + 1) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)plVar3 + 0xc) = uStack_b0._4_4_;
        iVar7 = *(int *)(param_1[2] + 8);
        lVar15 = (longlong)iVar7;
        if (lVar15 < 1) {
          iVar18 = 0;
        }
        else {
          lVar12 = 0;
          lVar22 = 0;
          iVar18 = 0;
          do {
            if (*(float *)(*(longlong *)param_1[2] + lVar22 * 4) <= 0.0) {
              *(int *)(*(longlong *)param_1[3] + lVar22 * 4) = iVar18;
              lVar17 = (longlong)iVar18;
              iVar18 = iVar18 + 1;
              lVar6 = *local_e8;
              *(undefined4 *)(lVar6 + 8 + lVar17 * 0xc) = *(undefined4 *)(lVar6 + 8 + lVar12);
              *(undefined8 *)(lVar6 + lVar17 * 0xc) = *(undefined8 *)(lVar6 + lVar12);
            }
            lVar22 = lVar22 + 1;
            lVar12 = lVar12 + 0xc;
          } while (lVar15 != lVar22);
        }
        local_b8 = lVar14;
        uStack_b0 = plVar16;
        if (iVar18 < iVar7) {
          iVar19 = (int)plVar2[3];
          if (iVar7 < iVar19) {
            lVar14 = lVar15 * 0xc;
            lVar12 = (longlong)iVar18 * 0xc;
            do {
              lVar22 = plVar2[2];
              *(undefined4 *)(lVar22 + 8 + lVar12) = *(undefined4 *)(lVar22 + 8 + lVar14);
              *(undefined8 *)(lVar22 + lVar12) = *(undefined8 *)(lVar22 + lVar14);
              lVar15 = lVar15 + 1;
              iVar19 = (int)plVar2[3];
              lVar14 = lVar14 + 0xc;
              lVar12 = lVar12 + 0xc;
            } while (lVar15 < iVar19);
          }
          FUN_140627580(local_e8,(iVar18 - iVar7) + iVar19,0);
        }
        lVar14 = plVar2[1];
        if ((longlong)(int)lVar14 != 0) {
          lVar15 = *plVar2;
          lVar12 = 0;
          do {
            iVar19 = *(int *)(lVar15 + lVar12);
            if (-1 < (longlong)iVar19) {
              if (iVar19 < iVar7) {
                iVar19 = *(int *)(*(longlong *)param_1[3] + (longlong)iVar19 * 4);
              }
              else {
                iVar19 = iVar19 + (iVar18 - iVar7);
              }
              *(int *)(lVar15 + lVar12) = iVar19;
            }
            lVar12 = lVar12 + 4;
          } while ((longlong)(int)lVar14 * 4 != lVar12);
        }
      }
      goto LAB_142a0824b;
    }
  }
  *(undefined4 *)(plVar2 + 3) = 0;
  if (*(int *)((longlong)plVar2 + 0x1c) != 0) {
    FUN_140163800(local_e8,0);
  }
  *(undefined4 *)(plVar2 + 1) = 0;
  if (*(int *)((longlong)plVar2 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_138);
  }
LAB_142a0824b:
  if ((local_a0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a08324 FUN_142a08324 body=506 status=ok
// SIG undefined FUN_142a08324(void)

int FUN_142a08324(longlong *param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  float fVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  int local_a0;
  int iStack_9c;
  int *local_98;
  int *local_90;
  undefined1 local_84 [4];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar14 = (longlong)param_2;
  fVar15 = *(float *)(*(longlong *)param_1[1] + lVar14 * 4);
  iVar11 = -1;
  if (fVar15 <= -1e-06) {
    lVar7 = param_1[2];
    plVar8 = (longlong *)*param_1;
    local_a0 = param_2;
    iStack_9c = param_3;
    local_98 = (int *)CONCAT44(param_3,param_2);
    uVar9 = (*(code *)PTR_FUN_14c75b148)(&local_98,8,0);
    if ((int)plVar8[1] != *(int *)((longlong)plVar8 + 0x34)) {
      plVar12 = plVar8 + 7;
      if ((longlong *)plVar8[8] != (longlong *)0x0) {
        plVar12 = (longlong *)plVar8[8];
      }
      iVar11 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar8[9] - 1U & uVar9) * 4);
      if (iVar11 != -1) {
        do {
          plVar12 = (longlong *)(*plVar8 + (longlong)iVar11 * 0x14);
          if ((int *)*plVar12 == (int *)CONCAT44(param_3,param_2)) {
            if ((plVar12 != (longlong *)0x0) && (plVar12 + 1 != (longlong *)0x0)) {
              iVar11 = (int)plVar12[1];
              goto LAB_142a084de;
            }
            break;
          }
          iVar11 = *(int *)((longlong)plVar12 + 0xc);
        } while (iVar11 != -1);
      }
    }
    lVar13 = (longlong)param_3;
    fVar15 = fVar15 / (fVar15 - *(float *)(*(longlong *)param_1[1] + lVar13 * 4));
    lVar10 = *(longlong *)(lVar7 + 0x10);
    fVar1 = *(float *)(lVar10 + 8 + lVar13 * 0xc);
    fVar2 = *(float *)(lVar10 + 8 + lVar14 * 0xc);
    fVar3 = *(float *)(lVar10 + lVar13 * 0xc);
    fVar4 = *(float *)(lVar10 + 4 + lVar13 * 0xc);
    fVar5 = *(float *)(lVar10 + lVar14 * 0xc);
    fVar6 = *(float *)(lVar10 + 4 + lVar14 * 0xc);
    iVar11 = *(int *)(lVar7 + 0x18);
    lVar14 = (longlong)iVar11;
    *(uint *)(lVar7 + 0x18) = iVar11 + 1U;
    if (*(uint *)(lVar7 + 0x1c) < iVar11 + 1U) {
      FUN_140aacb36((longlong *)(lVar7 + 0x10),iVar11);
      lVar10 = *(longlong *)(lVar7 + 0x10);
    }
    *(float *)(lVar10 + lVar14 * 0xc) = (fVar3 - fVar5) * fVar15 + fVar5;
    *(float *)(lVar10 + 4 + lVar14 * 0xc) = (fVar4 - fVar6) * fVar15 + fVar6;
    *(float *)(lVar10 + 8 + lVar14 * 0xc) = (fVar1 - fVar2) * fVar15 + fVar2;
    local_90 = &local_a4;
    local_98 = &local_a0;
    local_a4 = iVar11;
    FUN_146ec80b6(*param_1,local_84);
    iVar11 = local_a4;
  }
LAB_142a084de:
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar11;
}



// FUNCTION 142a08520 FUN_142a08520 body=189 status=ok
// SIG undefined FUN_142a08520(void)

void FUN_142a08520(longlong *param_1,undefined8 *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    pfVar6 = (float *)*param_2;
    pfVar1 = pfVar6 + (longlong)*(int *)(param_2 + 1) * 3;
    fVar7 = *param_3;
    do {
      fVar8 = *pfVar6;
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      lVar4 = *param_1;
      fVar9 = *(float *)(lVar4 + 0x34) * fVar3 +
              *(float *)(lVar4 + 0x2c) * fVar8 + *(float *)(lVar4 + 0x30) * fVar2;
      if (fVar9 < fVar7) {
        *param_3 = fVar9;
        fVar7 = fVar9;
      }
      if (param_3[1] <= fVar9 && fVar9 != param_3[1]) {
        param_3[1] = fVar9;
      }
      piVar5 = (int *)*param_1;
      if (2 < *piVar5) {
        fVar8 = fVar3 * (float)piVar5[0x10] +
                fVar8 * (float)piVar5[0xe] + fVar2 * (float)piVar5[0xf];
        if (fVar8 < param_3[2]) {
          param_3[2] = fVar8;
        }
        if (param_3[3] <= fVar8 && fVar8 != param_3[3]) {
          param_3[3] = fVar8;
        }
      }
      pfVar6 = pfVar6 + 3;
    } while (pfVar6 != pfVar1);
  }
  return;
}



// FUNCTION 142a08630 FUN_142a08630 body=3 status=ok
// SIG undefined FUN_142a08630(void)

undefined8 FUN_142a08630(void)

{
  return 0;
}



// FUNCTION 142a08634 FUN_142a08634 body=541 status=ok
// SIG undefined FUN_142a08634(void)

void FUN_142a08634(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar26;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar16 = (longlong)*param_2;
  lVar13 = *(longlong *)param_1[2];
  lVar14 = lVar16 * 0x70;
  dVar4 = *(double *)(lVar13 + 0x60 + lVar14);
  pdVar2 = (double *)(lVar13 + 0x50 + lVar14);
  dVar5 = *pdVar2;
  dVar6 = pdVar2[1];
  dVar7 = *(double *)(lVar13 + 0x40 + lVar14);
  pdVar2 = (double *)(lVar13 + 0x30 + lVar14);
  dVar8 = *pdVar2;
  dVar9 = pdVar2[1];
  pdVar2 = (double *)(lVar13 + 0x20 + lVar14);
  fVar20 = (float)*pdVar2;
  fVar21 = (float)pdVar2[1];
  pdVar2 = (double *)(lVar13 + 0x10 + lVar14);
  fVar22 = (float)*pdVar2;
  fVar23 = (float)pdVar2[1];
  local_b8 = 0;
  uStack_b0 = 0;
  lVar12 = (longlong)*(int *)(*(longlong *)(lVar13 + lVar14) + 0x38);
  if (lVar12 != 0) {
    lVar13 = *(longlong *)(*(longlong *)(lVar13 + lVar14) + 0x30);
    lVar14 = 0;
    do {
      uVar10 = uStack_b0;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = *(ulonglong *)(lVar13 + lVar14);
      auVar25 = insertps(auVar25,*(undefined4 *)(lVar13 + 8 + lVar14),0x28);
      lVar15 = (longlong)(int)uStack_b0;
      uVar11 = (int)uStack_b0 + 1;
      uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
      if (uStack_b0._4_4_ < uVar11) {
        FUN_140aacb36(&local_b8,uVar10 & 0xffffffff);
      }
      fVar24 = auVar25._0_4_ * (float)dVar5;
      fVar26 = auVar25._4_4_ * (float)dVar6;
      fVar27 = auVar25._8_4_ * (float)dVar4;
      fVar17 = fVar26 * fVar22 - fVar23 * fVar24;
      fVar18 = fVar27 * fVar23 - fVar20 * fVar26;
      fVar19 = fVar24 * fVar20 - fVar22 * fVar27;
      fVar17 = fVar17 + fVar17;
      fVar18 = fVar18 + fVar18;
      fVar19 = fVar19 + fVar19;
      *(ulonglong *)(local_b8 + lVar15 * 0xc) =
           CONCAT44((fVar18 * fVar20 - fVar17 * fVar22) + fVar21 * fVar19 + fVar26 + (float)dVar9,
                    (fVar17 * fVar23 - fVar19 * fVar20) + fVar21 * fVar18 + fVar24 + (float)dVar8);
      *(float *)(local_b8 + 8 + lVar15 * 0xc) =
           (fVar19 * fVar22 - fVar18 * fVar23) + fVar21 * fVar17 + fVar27 + (float)dVar7;
      lVar14 = lVar14 + 0xc;
    } while (lVar12 * 0xc != lVar14);
  }
  lVar13 = FUN_14001cc68(0xb0,0x10);
  FUN_146d83314(lVar13,&local_b8,0xe0000000,0);
  if (lVar13 != 0) {
    LOCK();
    *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
    UNLOCK();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  puVar3 = *(undefined8 **)(*(longlong *)*param_1 + lVar16 * 8);
  *(longlong *)(*(longlong *)*param_1 + lVar16 * 8) = lVar13;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a088a4 FUN_142a088a4 body=109 status=ok
// SIG undefined FUN_142a088a4(void)

undefined8 * FUN_142a088a4(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_149f64a90;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 10) = 0;
  FUN_145c3f772(puVar1 + 1,param_1 + 8);
  return puVar1 + 1;
}



// FUNCTION 142a08918 FUN_142a08918 body=29 status=ok
// SIG undefined FUN_142a08918(void)

void FUN_142a08918(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a08936 FUN_142a08936 body=169 status=ok
// SIG undefined FUN_142a08936(void)

undefined8 * FUN_142a08936(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f64a90;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x14) != 0) {
    FUN_1447a08a2(param_1 + 1,0);
  }
  param_1[7] = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x34)) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0x80;
    FUN_1446efbd8(param_1 + 3,0);
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a089e0 FUN_142a089e0 body=261 status=ok
// SIG undefined FUN_142a089e0(void)

void FUN_142a089e0(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
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
    uVar5 = lVar4 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0x10);
      }
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 142a08b14 FUN_142a08b14 body=323 status=ok
// SIG undefined FUN_142a08b14(void)

undefined1 (*) [16]
FUN_142a08b14(undefined1 (*param_1) [16],undefined8 *param_2,int *param_3,int *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  lVar12 = (longlong)*param_4;
  lVar4 = *(longlong *)*param_2;
  lVar11 = (longlong)*param_3 * 0x70;
  lVar5 = *(longlong *)(*(longlong *)(lVar4 + lVar11) + 0x30);
  pdVar1 = (double *)(lVar4 + 0x50 + lVar11);
  dVar14 = (double)*(float *)(lVar5 + lVar12 * 0xc) * *pdVar1;
  dVar15 = (double)*(float *)(lVar5 + 4 + lVar12 * 0xc) * pdVar1[1];
  dVar13 = (double)*(float *)(lVar5 + 8 + lVar12 * 0xc) * *(double *)(lVar4 + 0x60 + lVar11);
  dVar8 = *(double *)(lVar4 + 0x20 + lVar11);
  pdVar1 = (double *)(lVar4 + 0x28 + lVar11);
  dVar3 = *pdVar1;
  pdVar2 = (double *)(lVar4 + 0x10 + lVar11);
  dVar9 = *pdVar2;
  dVar10 = pdVar2[1];
  dVar16 = dVar15 * dVar9 - dVar14 * dVar10;
  dVar17 = dVar13 * dVar10 - dVar15 * dVar8;
  dVar18 = dVar14 * dVar8 - dVar9 * dVar13;
  dVar17 = dVar17 + dVar17;
  dVar18 = dVar18 + dVar18;
  dVar16 = dVar16 + dVar16;
  pdVar2 = (double *)(lVar4 + 0x30 + lVar11);
  dVar7 = (dVar8 * dVar17 - dVar9 * dVar16) + *pdVar1 * dVar18 + dVar15 + pdVar2[1];
  dVar15 = *(double *)(lVar4 + 0x40 + lVar11);
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = (dVar16 * dVar10 - dVar18 * dVar8) + dVar3 * dVar17 + dVar14 + *pdVar2;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_1 = auVar6;
  *(double *)param_1[1] = dVar16 * dVar3 + dVar13 + (dVar18 * dVar9 - dVar17 * dVar10) + dVar15;
  return param_1;
}



// FUNCTION 142a08cba FUN_142a08cba body=93 status=ok
// SIG undefined FUN_142a08cba(void)

void FUN_142a08cba(longlong *param_1,int *param_2)

{
  int iVar1;
  double dVar2;
  longlong lVar3;
  
  iVar1 = *param_2;
  lVar3 = (longlong)
          *(int *)(*(longlong *)(*(longlong *)(*param_1 + 0x78) + 0x10) + (longlong)iVar1 * 4);
  if (*(int *)(*(longlong *)(param_1[1] + 0x10) + lVar3 * 4) == 1) {
    dVar2 = (double)FUN_142a0393e(*(undefined8 *)param_1[3],iVar1,
                                  lVar3 * 0x60 + *(longlong *)param_1[4]);
    *(float *)(*(longlong *)param_1[2] + (longlong)iVar1 * 4) = (float)dVar2;
  }
  return;
}



// FUNCTION 142a08d18 FUN_142a08d18 body=884 status=ok
// SIG undefined FUN_142a08d18(void)

void FUN_142a08d18(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  double *pdVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  undefined8 *puVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auStack_138 [32];
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  longlong local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar24 = (longlong)*param_2;
  lVar22 = *(longlong *)param_1[1];
  lVar19 = (longlong)*(int *)(*(longlong *)*param_1 + lVar24 * 4) * 0x60;
  dVar10 = *(double *)(lVar22 + lVar19);
  dVar11 = ((double *)(lVar22 + lVar19))[1];
  pdVar2 = (double *)(lVar22 + 0x10 + lVar19);
  dVar12 = *pdVar2;
  dVar13 = pdVar2[1];
  pdVar2 = (double *)(lVar22 + 0x20 + lVar19);
  local_108 = *pdVar2;
  dStack_100 = pdVar2[1];
  pdVar2 = (double *)(lVar22 + 0x30 + lVar19);
  local_118 = *pdVar2;
  dStack_110 = pdVar2[1];
  pdVar2 = (double *)(lVar22 + 0x40 + lVar19);
  dVar14 = *pdVar2;
  dVar15 = pdVar2[1];
  dVar16 = *(double *)(lVar22 + 0x50 + lVar19);
  lVar22 = (longlong)*(int *)(*(longlong *)param_1[2] + lVar24 * 4);
  local_f8 = 0;
  uStack_f0 = 0;
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1[3] + 0x10) + lVar22 * 8) + 0x38);
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  if (iVar6 != 0) {
    FUN_140163800(&local_f8);
    lVar22 = *(longlong *)(*(longlong *)(param_1[3] + 0x10) + lVar22 * 8);
    lVar19 = (longlong)*(int *)(lVar22 + 0x38);
    if (lVar19 != 0) {
      lVar22 = *(longlong *)(lVar22 + 0x30);
      lVar23 = 0;
      do {
        uVar17 = uStack_f0;
        fVar3 = *(float *)(lVar22 + 8 + lVar23);
        fVar4 = *(float *)(lVar22 + 4 + lVar23);
        fVar5 = *(float *)(lVar22 + lVar23);
        lVar21 = (longlong)(int)uStack_f0;
        uVar18 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar18);
        if (uStack_f0._4_4_ < uVar18) {
          FUN_140aacb36(&local_f8,uVar17 & 0xffffffff);
        }
        dVar8 = (double)fVar5 * dVar14;
        dVar9 = (double)fVar4 * dVar15;
        dVar25 = (double)fVar3 * dVar16;
        dVar26 = dVar9 * dVar10 - dVar11 * dVar8;
        dVar27 = dVar25 * dVar11 - dVar12 * dVar9;
        dVar28 = dVar8 * dVar12 - dVar10 * dVar25;
        dVar27 = dVar27 + dVar27;
        dVar28 = dVar28 + dVar28;
        dVar26 = dVar26 + dVar26;
        *(float *)(local_f8 + lVar21 * 0xc) =
             (float)((dVar26 * dVar11 - dVar28 * dVar12) + dVar13 * dVar27 + dVar8 + local_108);
        *(float *)(local_f8 + 4 + lVar21 * 0xc) =
             (float)((dVar12 * dVar27 - dVar10 * dVar26) + dVar13 * dVar28 + dVar9 + dStack_100);
        *(float *)(local_f8 + 8 + lVar21 * 0xc) =
             (float)(dVar26 * dVar13 + dVar25 + (dVar28 * dVar10 - dVar27 * dVar11) + local_118);
        lVar23 = lVar23 + 0xc;
      } while (lVar19 * 0xc != lVar23);
    }
  }
  puVar20 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
  FUN_146d83314(puVar20,&local_f8,0x3f1a36e2e0000000,0);
  puVar7 = *(undefined8 **)(*(longlong *)param_1[4] + lVar24 * 8);
  if (puVar7 != puVar20) {
    *(undefined8 **)(*(longlong *)param_1[4] + lVar24 * 8) = puVar20;
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
    }
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar7 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar7 + 0xc) == 0)) {
        (**(code **)*puVar7)(puVar7,1);
      }
    }
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a0908e FUN_142a0908e body=1622 status=ok
// SIG undefined FUN_142a0908e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0908e(void)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_141471170(&DAT_14c996b08,L"p.fracture.ValidateResultsOfEditOperations",&DAT_14c996b18,
                L"When on this will enable result validation for fracture tool edit operations (can be slow for large geometry collection) [def:0]"
               );
  atexit(FUN_1429fe8ad);
  local_38 = 0;
  FUN_141471170(&DAT_14c996b20,L"p.CollisionParticlesUseImplicitCulling",&DAT_14c996b1c,
                L"Use the implicit to cull interior vertices.");
  atexit(FUN_1429fe8f2);
  local_38 = 0;
  FUN_141471170(&DAT_14c996b30,L"p.CollisionParticlesSpatialDivision",&DAT_14c75f318,
                L"Spatial bucketing to cull collision particles.");
  atexit(FUN_1429fe937);
  local_38 = 0;
  FUN_141471170(&DAT_14c996b40,L"p.CollisionParticlesMin",&DAT_14c75f31c,
                L"Minimum number of particles after simplicial pruning (assuming it started with more)"
               );
  atexit(FUN_1429fe97c);
  local_38 = 0;
  FUN_141471170(&DAT_14c996b50,L"p.CollisionParticlesMax",&DAT_14c75f320,
                L"Maximum number of particles after simplicial pruning");
  atexit(FUN_1429fe9c1);
  local_28 = "ConvexProperties";
  local_20 = 0x10;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c996b60 = (ulonglong)uVar1;
  local_28 = "TransformGroupIndex";
  local_20 = 0x13;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c996b68 = (ulonglong)uVar1;
  local_28 = "Enable";
  local_20 = 6;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c996b70 = (ulonglong)uVar1;
  local_28 = "FractionRemove";
  local_20 = 0xe;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c996b78 = (ulonglong)uVar1;
  local_28 = "SimplificationThreshold";
  local_20 = 0x17;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c996b80 = (ulonglong)uVar1;
  local_28 = "CanExceedFraction";
  local_20 = 0x11;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c996b88 = (ulonglong)uVar1;
  local_28 = "RemoveOverlapsMethod";
  local_20 = 0x14;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c996b90 = (ulonglong)uVar1;
  local_28 = "RemoveOverlapsShrinkPercent";
  local_20 = 0x1b;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c996b98 = (ulonglong)uVar1;
  local_38 = 0;
  FUN_14153156c(&DAT_14c996ba8,L"p.gc.UseVolumeToComputeRelativeSize",&DAT_14c996ba0,
                L"Use Volume To Compute RelativeSize instead of the side of the cubic volume (def: false)"
               );
  atexit(FUN_1429fea06);
  local_38 = 0;
  FUN_14153156c(&DAT_14c996bb8,L"p.gc.UseLargestClusterToComputeRelativeSize",&DAT_14c996ba0,
                L"Use the largest Cluster as reference for the releative size instead of the largest child (def: false)"
               );
  atexit(FUN_1429fea4b);
  _DAT_14c996bd0 = 0;
  uRam000000014c996bd8 = 0x3f069596bf800000;
  _DAT_14c996be0 = 0xbee4f95d3f393dd9;
  uRam000000014c996be8 = 0xbe8d82563f59c38b;
  _DAT_14c996bf0 = 0xbee4f95d;
  uRam000000014c996bf8 = 0xbee4f95dbf64f909;
  _DAT_14c996c00 = 0xbe8d8256bf59c38b;
  uRam000000014c996c08 = 0xbf069596bee4f95d;
  _DAT_14c996c10 = 0xbee4f95d3f393dd9;
  uRam000000014c996c18 = 0x3e8d82563f59c38b;
  _DAT_14c996c20 = 0x3f0695963ee4f95d;
  uRam000000014c996c28 = 0x3ee4f95dbf393dd9;
  _DAT_14c996c30 = 0xbf393dd9bf069596;
  uRam000000014c996c38 = 0xbf59c38b3ee4f95d;
  _DAT_14c996c40 = 0x3ee4f95d3e8d8256;
  uRam000000014c996c48 = 0x3f64f90900000000;
  _DAT_14c996c50 = 0x3ee4f95d;
  uRam000000014c996c58 = 0x3f80000000000000;
  _DAT_14c996c60 = 0;
  uRam000000014c996c68 = 0x3f0695eabf800000;
  _DAT_14c996c70 = 0xbee4fa053f393e4f;
  uRam000000014c996c78 = 0xbe8d82ba3f59c422;
  _DAT_14c996c80 = 0xbee4fa05;
  uRam000000014c996c88 = 0xbee4f97fbf64f91a;
  _DAT_14c996c90 = 0xbe8d82babf59c422;
  uRam000000014c996c98 = 0xbf0695eabee4fa05;
  _DAT_14c996ca0 = 0xbee4fa053f393e4f;
  uRam000000014c996ca8 = 0x3e8d82ba3f59c422;
  _DAT_14c996cb0 = 0x3f0695ea3ee4fa05;
  uRam000000014c996cb8 = 0x3ee4fa05bf393e4f;
  _DAT_14c996cc0 = 0xbf393e4fbf0695ea;
  uRam000000014c996cc8 = 0xbf59c4223ee4fa05;
  _DAT_14c996cd0 = 0x3ee4fa053e8d82ba;
  uRam000000014c996cd8 = 0x3f64f91a00000000;
  _DAT_14c996ce0 = 0x3ee4f97f;
  uRam000000014c996ce8 = 0x3f80000000000000;
  _DAT_14c996cf0 = 0xbe265ade3effff58;
  uRam000000014c996cf8 = 0x3e9e36b1bf59c476;
  _DAT_14c996d00 = 0xbf59c4763ed9c3f0;
  uRam000000014c996d08 = 0x3e8696c43f4f1b69;
  _DAT_14c996d10 = 0xbf0696c4;
  uRam000000014c996d18 = 0xbf0696a23f59c411;
  _DAT_14c996d20 = 0x3ed9c3f0be9e36b1;
  uRam000000014c996d28 = 0xbf59c476;
  _DAT_14c996d30 = 0xbf59c454bf06963e;
  uRam000000014c996d38 = 0xbf302d283effff9b;
  _DAT_14c996d40 = 0xbeffff58bf0696a2;
  uRam000000014c996d48 = 0xbf59c476be265ade;
  _DAT_14c996d50 = 0xbf302d28beffff9b;
  uRam000000014c996d58 = 0xbf4f1b69bf0696a2;
  _DAT_14c996d60 = 0xbf0696c43e8696c4;
  uRam000000014c996d68 = 0x3f7378893e9e36f4;
  _DAT_14c996d70 = 0xbe9e36f400000000;
  uRam000000014c996d78 = 0x3f737889;
  _DAT_14c996d80 = 0x3f800000;
  uRam000000014c996d88 = 0x3f4f1bbd00000000;
  _DAT_14c996d90 = 0x3f167925;
  uRam000000014c996d98 = 0xbf7378893e9e36f4;
  _DAT_14c996da0 = 0x3f4f1bbd00000000;
  uRam000000014c996da8 = 0xbf167925;
  _DAT_14c996db0 = 0xbf167925bf4f1bbd;
  uRam000000014c996db8 = 0xbe9e36f400000000;
  _DAT_14c996dc0 = 0xbf737889;
  uRam000000014c996dc8 = 0x3f167925bf4f1bbd;
  _DAT_14c996dd0 = 0xbf80000000000000;
  uRam000000014c996dd8 = 0;
  _DAT_14c996de0 = 0x3f302d283effff9b;
  uRam000000014c996de8 = 0x3f4f1b693f0696a2;
  _DAT_14c996df0 = 0x3f0696c4be8696c4;
  uRam000000014c996df8 = 0xbf59c41100000000;
  _DAT_14c996e00 = 0xbf4f1b693f0696a2;
  uRam000000014c996e08 = 0x3f0696c4be8696c4;
  _DAT_14c996e10 = 0x3f302d28beffff9b;
  uRam000000014c996e18 = 0x3effff583f0696a2;
  _DAT_14c996e20 = 0x3f59c4763e265ade;
  uRam000000014c996e28 = 0x3f06963e00000000;
  _DAT_14c996e30 = 0x3e9e36b13f59c454;
  uRam000000014c996e38 = 0x3f59c476bed9c3f0;
  _DAT_14c996e40 = 0xbed9c3f0be9e36b1;
  uRam000000014c996e48 = 0xbeffff583f59c476;
  _DAT_14c996e50 = 0x3f59c4763e265ade;
  _DAT_14c996e60 = 0x3e8d81ae3f59c422;
  _DAT_14c996e68 = 0x3f0695ea3ee4fa05;
  _DAT_14c996e70 = 0x3ee4fa05bf393dd9;
  uRam000000014c996e78 = 0xbf393dd9bf0695ea;
  _DAT_14c996e80 = 0xbf59c4223ee4fa05;
  uRam000000014c996e88 = 0x3ee4fa053e8d81ae;
  _DAT_14c996e90 = 0x3f64f8b600000000;
  uRam000000014c996e98 = 0x3ee4f97f;
  _DAT_14c996ea0 = 0x3f80000000000000;
  uRam000000014c996ea8 = 0x3f7378033e9e36f4;
  _DAT_14c996eb0 = 0;
  uRam000000014c996eb4 = 0xbe9e36f4;
  uRam000000014c996eb8 = 0x3f737803;
  uRam000000014c996ebc = 0;
  _DAT_14c996ec0 = 0x3f800000;
  uRam000000014c996ec8 = 0x3f4f1bbd00000000;
  _DAT_14c996ed0 = 0x3f1678c0;
  uRam000000014c996ed8 = 0xbf7378033e9e36f4;
  _DAT_14c996ee0 = 0x3f4f1bbd00000000;
  uRam000000014c996ee8 = 0xbf1678c0;
  _DAT_14c996ef0 = 0xbf1678c0bf4f1bbd;
  uRam000000014c996ef8 = 0xbe9e36f400000000;
  _DAT_14c996f00 = 0xbf737803;
  uRam000000014c996f08 = 0x3f1678c0bf4f1bbd;
  _DAT_14c996f10 = 0xbf80000000000000;
  uRam000000014c996f18 = 0;
  _DAT_14c996f20 = 0x3f302c913effff9b;
  uRam000000014c996f28 = 0x3f4f1b693f0696a2;
  _DAT_14c996f30 = 0x3f0696c4be869596;
  uRam000000014c996f38 = 0xbf59c38b00000000;
  _DAT_14c996f40 = 0xbf4f1b693f0696a2;
  uRam000000014c996f48 = 0x3f0696c4be869596;
  _DAT_14c996f50 = 0x3f302c91beffff9b;
  uRam000000014c996f58 = 0x3effff583f0696a2;
  _DAT_14c996f60 = 0x3f59c4763e26594b;
  uRam000000014c996f68 = 0x3f06963e00000000;
  _DAT_14c996f70 = 0x3e9e36b13f59c454;
  uRam000000014c996f78 = 0x3f59c476bed9c38b;
  _DAT_14c996f80 = 0xbe9e36b1;
  uRam000000014c996f84 = 0xbed9c38b;
  uRam000000014c996f88 = 0x3f59c476;
  uRam000000014c996f8c = 0xbeffff58;
  _DAT_14c996f90 = 0x3f59c4763e26594b;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a096e8 FUN_142a096e8 body=578 status=ok
// SIG undefined FUN_142a096e8(void)

void FUN_142a096e8(undefined8 *param_1,int param_2,int param_3,char param_4,float param_5)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  longlong *plVar10;
  bool bVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int *local_78;
  undefined4 *local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  fVar5 = param_5;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_84 = *(int *)(*(longlong *)(*(longlong *)*param_1 + 0x3b0) + (longlong)param_2 * 4);
  local_88 = *(int *)(*(longlong *)(*(longlong *)*param_1 + 0x3b0) + (longlong)param_3 * 4);
  lVar1 = *(longlong *)(param_1[2] + 0xa0);
  if (lVar1 == 0) {
    local_8c = -1;
    local_90 = -1;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x10);
    local_8c = *(int *)(lVar1 + (longlong)local_84 * 4);
    local_90 = *(int *)(lVar1 + (longlong)local_88 * 4);
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1[2] + 0x30) + 0x10);
  local_94 = *(int *)(lVar1 + (longlong)local_84 * 4);
  local_98 = *(int *)(lVar1 + (longlong)local_88 * 4);
  if ((local_94 != -1) && (local_98 != -1)) {
    while (local_84 != local_88) {
      if (local_94 == local_98) {
        local_80 = local_84;
        local_7c = local_88;
        if (local_88 < local_84) {
          local_80 = local_88;
          local_7c = local_84;
        }
        plVar2 = (longlong *)param_1[3];
        uVar7 = FUN_1448eb174(&local_80,8,0);
        if ((int)plVar2[1] == *(int *)((longlong)plVar2 + 0x34)) goto LAB_142a098cb;
        plVar10 = plVar2 + 7;
        if ((longlong *)plVar2[8] != (longlong *)0x0) {
          plVar10 = (longlong *)plVar2[8];
        }
        iVar8 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar2[9] - 1U & uVar7) * 4);
        if (iVar8 == -1) goto LAB_142a098cb;
        goto LAB_142a09893;
      }
      bVar3 = local_8c <= local_90;
      piVar12 = &local_84;
      piVar13 = &local_94;
      piVar14 = &local_8c;
      bVar6 = true;
      bVar4 = local_90 <= local_8c;
      do {
        bVar11 = bVar6;
        if (bVar4) {
          iVar8 = *piVar13;
          *piVar12 = iVar8;
          *piVar13 = *(int *)(lVar1 + (longlong)iVar8 * 4);
          *piVar14 = *piVar14 + -1;
        }
        piVar12 = &local_88;
        piVar13 = &local_98;
        piVar14 = &local_90;
        bVar6 = false;
        bVar4 = bVar3;
      } while (bVar11);
      if ((local_94 == -1) || (local_98 == -1)) break;
    }
  }
  goto LAB_142a098ed;
  while (iVar8 = piVar12[3], iVar8 != -1) {
LAB_142a09893:
    piVar12 = (int *)(*plVar2 + (longlong)iVar8 * 0x14);
    if ((*piVar12 == local_80) && (*(int *)(*plVar2 + 4 + (longlong)iVar8 * 0x14) == local_7c)) {
      if ((piVar12 != (int *)0x0) && (pfVar9 = (float *)(piVar12 + 2), pfVar9 != (float *)0x0)) {
        if (param_4 != '\0') {
          *pfVar9 = fVar5 + *pfVar9;
        }
        goto LAB_142a098ed;
      }
      break;
    }
  }
LAB_142a098cb:
  local_70 = &param_5;
  local_78 = &local_80;
  FUN_146ed123e(param_1[3],local_64);
LAB_142a098ed:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a0992c FUN_142a0992c body=48 status=ok
// SIG undefined FUN_142a0992c(void)

undefined8 * FUN_142a0992c(longlong param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    FUN_140d70cda(param_1 + 0x58,param_2);
  }
  return param_2;
}



// FUNCTION 142a0995c FUN_142a0995c body=55 status=ok
// SIG undefined FUN_142a0995c(void)

void FUN_142a0995c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c997088 == 0) {
    uVar1 = FUN_141022a83();
    DAT_14c997088 = FUN_14171c317(FUN_146287966,uVar1,L"EGeometryCollectionCacheType");
  }
  return;
}



// FUNCTION 142a09993 FUN_142a09993 body=69 status=ok
// SIG undefined FUN_142a09993(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09993(void)

{
  _DAT_14c9970c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a099d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9970d0,1);
  return;
}



// FUNCTION 142a099d8 FUN_142a099d8 body=69 status=ok
// SIG undefined FUN_142a099d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a099d8(void)

{
  _DAT_14c9970e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09a1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9970f0,1);
  return;
}



// FUNCTION 142a09a1d FUN_142a09a1d body=69 status=ok
// SIG undefined FUN_142a09a1d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09a1d(void)

{
  _DAT_14c9970f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09a5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997100,1);
  return;
}



// FUNCTION 142a09a62 FUN_142a09a62 body=69 status=ok
// SIG undefined FUN_142a09a62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09a62(void)

{
  _DAT_14c997108 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997110,1);
  return;
}



// FUNCTION 142a09aa7 FUN_142a09aa7 body=69 status=ok
// SIG undefined FUN_142a09aa7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09aa7(void)

{
  _DAT_14c997118 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09ae9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997120,1);
  return;
}



// FUNCTION 142a09aec FUN_142a09aec body=69 status=ok
// SIG undefined FUN_142a09aec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09aec(void)

{
  _DAT_14c997130 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09b2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997138,1);
  return;
}



// FUNCTION 142a09b31 FUN_142a09b31 body=69 status=ok
// SIG undefined FUN_142a09b31(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09b31(void)

{
  _DAT_14c997140 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997148,1);
  return;
}



// FUNCTION 142a09b76 FUN_142a09b76 body=69 status=ok
// SIG undefined FUN_142a09b76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09b76(void)

{
  _DAT_14c997150 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997158,1);
  return;
}



// FUNCTION 142a09bbb FUN_142a09bbb body=69 status=ok
// SIG undefined FUN_142a09bbb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09bbb(void)

{
  _DAT_14c997160 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09bfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997168,1);
  return;
}



// FUNCTION 142a09c00 FUN_142a09c00 body=69 status=ok
// SIG undefined FUN_142a09c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09c00(void)

{
  _DAT_14c997170 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09c42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997178,1);
  return;
}



// FUNCTION 142a09c45 FUN_142a09c45 body=69 status=ok
// SIG undefined FUN_142a09c45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09c45(void)

{
  _DAT_14c997180 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997188,1);
  return;
}



// FUNCTION 142a09c8a FUN_142a09c8a body=69 status=ok
// SIG undefined FUN_142a09c8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09c8a(void)

{
  _DAT_14c997190 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997198,1);
  return;
}



// FUNCTION 142a09ccf FUN_142a09ccf body=69 status=ok
// SIG undefined FUN_142a09ccf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09ccf(void)

{
  _DAT_14c9971a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09d11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9971a8,1);
  return;
}



// FUNCTION 142a09d14 FUN_142a09d14 body=69 status=ok
// SIG undefined FUN_142a09d14(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09d14(void)

{
  _DAT_14c9971b0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9971b8,1);
  return;
}



// FUNCTION 142a09d59 FUN_142a09d59 body=69 status=ok
// SIG undefined FUN_142a09d59(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09d59(void)

{
  _DAT_14c9971c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9971c8,1);
  return;
}



// FUNCTION 142a09d9e FUN_142a09d9e body=69 status=ok
// SIG undefined FUN_142a09d9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09d9e(void)

{
  _DAT_14c9971d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9971d8,1);
  return;
}



// FUNCTION 142a09de3 FUN_142a09de3 body=69 status=ok
// SIG undefined FUN_142a09de3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09de3(void)

{
  _DAT_14c9971e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9971e8,1);
  return;
}



// FUNCTION 142a09e28 FUN_142a09e28 body=69 status=ok
// SIG undefined FUN_142a09e28(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09e28(void)

{
  _DAT_14c9971f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9971f8,1);
  return;
}



// FUNCTION 142a09e6d FUN_142a09e6d body=69 status=ok
// SIG undefined FUN_142a09e6d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09e6d(void)

{
  _DAT_14c997200 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09eaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997208,1);
  return;
}



// FUNCTION 142a09eb2 FUN_142a09eb2 body=69 status=ok
// SIG undefined FUN_142a09eb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09eb2(void)

{
  _DAT_14c997210 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997218,1);
  return;
}



// FUNCTION 142a09ef7 FUN_142a09ef7 body=91 status=ok
// SIG undefined FUN_142a09ef7(void)

void FUN_142a09ef7(void)

{
  if (DAT_14c997230 != 0) {
    if (DAT_14c997228 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14c997228)(DAT_14c997228,0);
    FUN_1446efa72(&DAT_14c997228,0,0,0x10);
    DAT_14c997230 = 0;
  }
  if (DAT_14c997228 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142a09f52 FUN_142a09f52 body=69 status=ok
// SIG undefined FUN_142a09f52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09f52(void)

{
  _DAT_14c997238 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997240,1);
  return;
}



// FUNCTION 142a09f97 FUN_142a09f97 body=69 status=ok
// SIG undefined FUN_142a09f97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09f97(void)

{
  _DAT_14c997248 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a09fd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997250,1);
  return;
}



// FUNCTION 142a09fdc FUN_142a09fdc body=69 status=ok
// SIG undefined FUN_142a09fdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a09fdc(void)

{
  _DAT_14c997258 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a01e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997260,1);
  return;
}



// FUNCTION 142a0a021 FUN_142a0a021 body=69 status=ok
// SIG undefined FUN_142a0a021(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a021(void)

{
  _DAT_14c997268 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a063. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997270,1);
  return;
}



// FUNCTION 142a0a066 FUN_142a0a066 body=69 status=ok
// SIG undefined FUN_142a0a066(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a066(void)

{
  _DAT_14c997278 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997280,1);
  return;
}



// FUNCTION 142a0a0ab FUN_142a0a0ab body=69 status=ok
// SIG undefined FUN_142a0a0ab(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a0ab(void)

{
  _DAT_14c997288 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a0ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997290,1);
  return;
}



// FUNCTION 142a0a0f0 FUN_142a0a0f0 body=69 status=ok
// SIG undefined FUN_142a0a0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a0f0(void)

{
  _DAT_14c997298 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a132. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9972a0,1);
  return;
}



// FUNCTION 142a0a135 FUN_142a0a135 body=69 status=ok
// SIG undefined FUN_142a0a135(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a135(void)

{
  _DAT_14c9972a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a177. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9972b0,1);
  return;
}



// FUNCTION 142a0a17a FUN_142a0a17a body=69 status=ok
// SIG undefined FUN_142a0a17a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a17a(void)

{
  _DAT_14c9972c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a1bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9972c8,1);
  return;
}



// FUNCTION 142a0a1bf FUN_142a0a1bf body=69 status=ok
// SIG undefined FUN_142a0a1bf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a1bf(void)

{
  _DAT_14c9972d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a201. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9972d8,1);
  return;
}



// FUNCTION 142a0a204 FUN_142a0a204 body=69 status=ok
// SIG undefined FUN_142a0a204(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a204(void)

{
  _DAT_14c9972e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9972e8,1);
  return;
}



// FUNCTION 142a0a249 FUN_142a0a249 body=69 status=ok
// SIG undefined FUN_142a0a249(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a249(void)

{
  _DAT_14c9972f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a28b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9972f8,1);
  return;
}



// FUNCTION 142a0a28e FUN_142a0a28e body=69 status=ok
// SIG undefined FUN_142a0a28e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a28e(void)

{
  _DAT_14c997300 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997308,1);
  return;
}



// FUNCTION 142a0a2d3 FUN_142a0a2d3 body=69 status=ok
// SIG undefined FUN_142a0a2d3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a2d3(void)

{
  _DAT_14c997310 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997318,1);
  return;
}



// FUNCTION 142a0a318 FUN_142a0a318 body=69 status=ok
// SIG undefined FUN_142a0a318(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a318(void)

{
  _DAT_14c997328 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a35a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997330,1);
  return;
}



// FUNCTION 142a0a35d FUN_142a0a35d body=69 status=ok
// SIG undefined FUN_142a0a35d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a35d(void)

{
  _DAT_14c997338 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a39f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997340,1);
  return;
}



// FUNCTION 142a0a3a2 FUN_142a0a3a2 body=69 status=ok
// SIG undefined FUN_142a0a3a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a3a2(void)

{
  _DAT_14c997348 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a3e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997350,1);
  return;
}



// FUNCTION 142a0a3e7 FUN_142a0a3e7 body=69 status=ok
// SIG undefined FUN_142a0a3e7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a3e7(void)

{
  _DAT_14c997358 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a429. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997360,1);
  return;
}



// FUNCTION 142a0a42c FUN_142a0a42c body=69 status=ok
// SIG undefined FUN_142a0a42c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a42c(void)

{
  _DAT_14c997368 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a46e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997370,1);
  return;
}



// FUNCTION 142a0a471 FUN_142a0a471 body=69 status=ok
// SIG undefined FUN_142a0a471(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a471(void)

{
  _DAT_14c997378 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a4b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997380,1);
  return;
}



// FUNCTION 142a0a4b6 FUN_142a0a4b6 body=69 status=ok
// SIG undefined FUN_142a0a4b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a4b6(void)

{
  _DAT_14c997388 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997390,1);
  return;
}



// FUNCTION 142a0a4fb FUN_142a0a4fb body=69 status=ok
// SIG undefined FUN_142a0a4fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a4fb(void)

{
  _DAT_14c997398 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a53d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9973a0,1);
  return;
}



// FUNCTION 142a0a540 FUN_142a0a540 body=69 status=ok
// SIG undefined FUN_142a0a540(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a540(void)

{
  _DAT_14c9973a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a582. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9973b0,1);
  return;
}



// FUNCTION 142a0a585 FUN_142a0a585 body=69 status=ok
// SIG undefined FUN_142a0a585(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a585(void)

{
  _DAT_14c9973b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a5c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9973c0,1);
  return;
}



// FUNCTION 142a0a5ca FUN_142a0a5ca body=69 status=ok
// SIG undefined FUN_142a0a5ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0a5ca(void)

{
  _DAT_14c9973d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0a60c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9973e0,1);
  return;
}



// FUNCTION 142a0a610 FUN_142a0a610 body=1706 status=ok
// SIG undefined FUN_142a0a610(void)

undefined8 *
FUN_142a0a610(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  char *pcVar5;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 *puVar6;
  void *_Dst;
  undefined ***pppuVar7;
  undefined8 unaff_R12;
  ulonglong uVar8;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined1 local_e0;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  char local_a9;
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined8 *local_80;
  ulonglong local_60;
  
  cVar3 = (char)param_2;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar8 = CONCAT71((int7)((ulonglong)unaff_R12 >> 8),cVar3 == '\x01');
  local_f8 = (undefined8 *)param_4;
  local_a9 = cVar3;
  FUN_1429aeac6(param_1,param_2,(int)uVar8 + 1,param_3);
  *param_1 = &PTR_FUN_149f68380;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  *(undefined2 *)((longlong)param_1 + 0x26c) = 1;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  FUN_146287ac2(param_1 + 0x50);
  puVar1 = param_1 + 0x56;
  FUN_145838300(puVar1,param_1 + 0x50);
  uVar4 = FUN_14001cc68(0x11c0,0x10);
  local_e0 = cVar3 == '\x01';
  local_e8 = param_1 + 0x30;
  local_f0 = param_1 + 0x2e;
  local_f8 = param_1 + 0x2c;
  local_b8 = param_1 + 0x2a;
  local_d0 = local_f8;
  local_c8 = local_f0;
  local_c0 = local_e8;
  FUN_140f61058(uVar4,puVar1,param_1 + 0x165);
  param_1[0x139] = uVar4;
  pcVar5 = (char *)FUN_14001cc68(0x28,0x10);
  *pcVar5 = cVar3;
  pcVar5[8] = '\0';
  pcVar5[9] = '\0';
  pcVar5[10] = '\0';
  pcVar5[0xb] = '\0';
  pcVar5[0xc] = '\0';
  pcVar5[0xd] = '\0';
  pcVar5[0xe] = '\0';
  pcVar5[0xf] = '\0';
  pcVar5[0x10] = '\0';
  pcVar5[0x11] = '\0';
  pcVar5[0x12] = '\0';
  pcVar5[0x13] = '\0';
  pcVar5[0x14] = '\0';
  pcVar5[0x15] = '\0';
  pcVar5[0x16] = '\0';
  pcVar5[0x17] = '\0';
  InitializeSRWLock((PSRWLOCK)(pcVar5 + 0x18));
  InitializeSRWLock((PSRWLOCK)(pcVar5 + 0x20));
  param_1[0x13a] = pcVar5;
  uVar4 = FUN_14001cc68(0x28,0x10);
  FUN_146287b24(uVar4);
  param_1[0x13b] = uVar4;
  uVar4 = FUN_14001cc68(0x20,0x10);
  FUN_145bcfc12(uVar4,&local_a9,uVar8 & 0xffffffff);
  param_1[0x13c] = uVar4;
  lpCriticalSection = (LPCRITICAL_SECTION)FUN_14001cc68(0x28,0x10);
  InitializeCriticalSection(lpCriticalSection);
  SetCriticalSectionSpinCount(lpCriticalSection,4000);
  param_1[0x13d] = lpCriticalSection;
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar6[1] = &DAT_100000001;
  *puVar6 = &PTR_FUN_149f6ae30;
  puVar6[2] = lpCriticalSection;
  param_1[0x13e] = puVar6;
  param_1[0x143] = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa24) = 0xffffffff00000080;
  *(undefined8 *)((longlong)param_1 + 0xa2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa44) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa54) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa64) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa74) = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  *(undefined4 *)(param_1 + 0x151) = 0xffffff;
  param_1[0x156] = 0;
  param_1[0x157] = 0x8000000000;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(undefined4 *)(param_1 + 0x15a) = 0;
  *(undefined4 *)(param_1 + 0x15b) = 0xffffff;
  param_1[0x160] = 0;
  *(undefined4 *)(param_1 + 0x161) = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  *(undefined4 *)((longlong)param_1 + 0xb0c) = 0x80;
  param_1[0x162] = 0;
  param_1[0x163] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x165) = 0xffffff;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0x8000000000;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  *(undefined4 *)(param_1 + 0x16e) = 0;
  *(undefined4 *)(param_1 + 0x16f) = 0xffffff;
  param_1[0x174] = 0;
  param_1[0x175] = 0x8000000000;
  param_1[0x170] = 0;
  param_1[0x171] = 0;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  param_1[0x179] = 0;
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x47] = 0x322bcc773f800000;
  *(undefined4 *)(param_1 + 0x48) = 1;
  uVar4 = FUN_14001cc68(0x11c0,0x10);
  local_e0 = *(char *)((longlong)param_1 + 0x69) == '\x01';
  local_e8 = local_c0;
  local_f0 = local_c8;
  local_f8 = local_d0;
  FUN_140f61058(uVar4,puVar1,param_1 + 0x165,local_b8);
  puVar1 = (undefined8 *)param_1[0x139];
  param_1[0x139] = uVar4;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  _Dst = (void *)FUN_14001cc68(0x120);
  memset(_Dst,0,0x120);
  lVar2 = param_1[0x150];
  param_1[0x150] = _Dst;
  if (lVar2 != 0) {
    FUN_1408bc7be(*(undefined8 *)(lVar2 + 0x110),*(undefined4 *)(lVar2 + 0x118));
    if (*(longlong *)(lVar2 + 0x110) != 0) {
      FUN_1400020a8();
    }
    FUN_1408bc7be(*(undefined8 *)(lVar2 + 0x100),*(undefined4 *)(lVar2 + 0x108));
    if (*(longlong *)(lVar2 + 0x100) != 0) {
      FUN_1400020a8();
    }
    FUN_1408bc892(lVar2);
    FUN_1400020a8(lVar2);
  }
  if (*(char *)(param_1 + 0x3b) == '\x01') {
    FUN_140920ed6(param_1,1);
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149f6afb0;
  local_a8[0] = FUN_142a1072e;
  local_80 = param_1;
  FUN_146ee30fc(param_1[0x139] + 0xb0,local_a8);
  if (local_a8[0] != (code *)0x0) {
    pppuVar7 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar7 = &local_88;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  FUN_1458550fe(param_1[0x13a]);
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149f6ae50;
  local_a8[0] = FUN_142a0fd54;
  local_80 = param_1;
  FUN_140f6202c(param_1[0x139] + 0x1050,local_a8);
  if (local_a8[0] != (code *)0x0) {
    pppuVar7 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar7 = &local_88;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149f6ae70;
  local_a8[0] = FUN_142a0fe3c;
  local_80 = param_1;
  FUN_142a0f3b2(param_1[0x139] + 0xf10,local_a8);
  if (local_a8[0] != (code *)0x0) {
    pppuVar7 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar7 = &local_88;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149f6ae90;
  local_a8[0] = FUN_142a0fec8;
  local_80 = param_1;
  FUN_142a0f3b2(param_1[0x139] + 0xf50,local_a8);
  if (local_a8[0] != (code *)0x0) {
    pppuVar7 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar7 = &local_88;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149f6aeb0;
  local_a8[0] = FUN_142a0ff54;
  local_80 = param_1;
  FUN_142a0f3b2(param_1[0x139] + 0xfd0,local_a8);
  if (local_a8[0] != (code *)0x0) {
    pppuVar7 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar7 = &local_88;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_149f6aed0;
  local_a8[0] = FUN_142a0ffe4;
  local_80 = param_1;
  FUN_142a0f3b2(param_1[0x139] + 0x1010,local_a8);
  if (local_a8[0] != (code *)0x0) {
    pppuVar7 = &local_88;
    if (local_98 != (undefined ***)0x0) {
      pppuVar7 = local_98;
    }
    (*(code *)(*pppuVar7)[2])(pppuVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a0acbb FUN_142a0acbb body=69 status=ok
// SIG undefined FUN_142a0acbb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0acbb(void)

{
  _DAT_14c9973e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0acfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9973f0,1);
  return;
}



// FUNCTION 142a0ad00 FUN_142a0ad00 body=69 status=ok
// SIG undefined FUN_142a0ad00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0ad00(void)

{
  _DAT_14c997400 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0ad42. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997408,1);
  return;
}



// FUNCTION 142a0ad45 FUN_142a0ad45 body=69 status=ok
// SIG undefined FUN_142a0ad45(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0ad45(void)

{
  _DAT_14c997410 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0ad87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997418,1);
  return;
}



// FUNCTION 142a0ad8a FUN_142a0ad8a body=320 status=ok
// SIG undefined FUN_142a0ad8a(void)

void FUN_142a0ad8a(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = FUN_14001cc68(0x68,0x10);
  FUN_141731688(lVar6,param_2,0,0);
  *(longlong *)(lVar6 + 8) = param_1;
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x128));
    if (*(int *)(lVar6 + 0x18) == -1) {
      lVar5 = *(longlong *)(param_1 + 0x98);
      uVar3 = *(uint *)(lVar6 + 0x1c);
      piVar2 = (int *)(lVar5 + 0x160 + (ulonglong)uVar3 * 4);
      *piVar2 = *piVar2 + 1;
      *(int *)(lVar5 + 0x194) = *(int *)(lVar5 + 0x194) + 1;
      lVar5 = lVar5 + (ulonglong)uVar3 * 0x10;
      iVar4 = *(int *)(lVar5 + 0x1a0);
      *(int *)(lVar6 + 0x18) = iVar4;
      *(uint *)(lVar5 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(lVar5 + 0x1a4) < iVar4 + 1U) {
        FUN_140431d5c((longlong *)(lVar5 + 0x198),iVar4);
      }
      lVar5 = *(longlong *)(lVar5 + 0x198);
      lVar7 = (longlong)iVar4 * 0x20;
      *(longlong *)(lVar5 + lVar7) = lVar6;
      *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
      puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000142a0adef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x128));
    return;
  }
  if (*(int *)(lVar6 + 0x18) == -1) {
    lVar5 = *(longlong *)(param_1 + 0x98);
    uVar3 = *(uint *)(lVar6 + 0x1c);
    piVar2 = (int *)(lVar5 + 0x160 + (ulonglong)uVar3 * 4);
    *piVar2 = *piVar2 + 1;
    *(int *)(lVar5 + 0x194) = *(int *)(lVar5 + 0x194) + 1;
    lVar5 = lVar5 + (ulonglong)uVar3 * 0x10;
    iVar4 = *(int *)(lVar5 + 0x1a0);
    *(int *)(lVar6 + 0x18) = iVar4;
    *(uint *)(lVar5 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(lVar5 + 0x1a4) < iVar4 + 1U) {
      FUN_140431d5c((longlong *)(lVar5 + 0x198),iVar4);
    }
    lVar5 = *(longlong *)(lVar5 + 0x198);
    lVar7 = (longlong)iVar4 * 0x20;
    *(longlong *)(lVar5 + lVar7) = lVar6;
    *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
    puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}



// FUNCTION 142a0aeca FUN_142a0aeca body=320 status=ok
// SIG undefined FUN_142a0aeca(void)

void FUN_142a0aeca(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = FUN_14001cc68(0x58,0x10);
  FUN_1417317a8(lVar6,param_2,0,0);
  *(longlong *)(lVar6 + 8) = param_1;
  if (DAT_14c992a90 == '\x01') {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x128));
    if (*(int *)(lVar6 + 0x18) == -1) {
      lVar5 = *(longlong *)(param_1 + 0x98);
      uVar3 = *(uint *)(lVar6 + 0x1c);
      piVar2 = (int *)(lVar5 + 0x160 + (ulonglong)uVar3 * 4);
      *piVar2 = *piVar2 + 1;
      *(int *)(lVar5 + 0x194) = *(int *)(lVar5 + 0x194) + 1;
      lVar5 = lVar5 + (ulonglong)uVar3 * 0x10;
      iVar4 = *(int *)(lVar5 + 0x1a0);
      *(int *)(lVar6 + 0x18) = iVar4;
      *(uint *)(lVar5 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(lVar5 + 0x1a4) < iVar4 + 1U) {
        FUN_140431d5c((longlong *)(lVar5 + 0x198),iVar4);
      }
      lVar5 = *(longlong *)(lVar5 + 0x198);
      lVar7 = (longlong)iVar4 * 0x20;
      *(longlong *)(lVar5 + lVar7) = lVar6;
      *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
      puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar7);
      *puVar1 = 0;
      puVar1[1] = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x000142a0af2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x128));
    return;
  }
  if (*(int *)(lVar6 + 0x18) == -1) {
    lVar5 = *(longlong *)(param_1 + 0x98);
    uVar3 = *(uint *)(lVar6 + 0x1c);
    piVar2 = (int *)(lVar5 + 0x160 + (ulonglong)uVar3 * 4);
    *piVar2 = *piVar2 + 1;
    *(int *)(lVar5 + 0x194) = *(int *)(lVar5 + 0x194) + 1;
    lVar5 = lVar5 + (ulonglong)uVar3 * 0x10;
    iVar4 = *(int *)(lVar5 + 0x1a0);
    *(int *)(lVar6 + 0x18) = iVar4;
    *(uint *)(lVar5 + 0x1a0) = iVar4 + 1U;
    if (*(uint *)(lVar5 + 0x1a4) < iVar4 + 1U) {
      FUN_140431d5c((longlong *)(lVar5 + 0x198),iVar4);
    }
    lVar5 = *(longlong *)(lVar5 + 0x198);
    lVar7 = (longlong)iVar4 * 0x20;
    *(longlong *)(lVar5 + lVar7) = lVar6;
    *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
    puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar7);
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}



// FUNCTION 142a0b00a FUN_142a0b00a body=76 status=ok
// SIG undefined FUN_142a0b00a(void)

void FUN_142a0b00a(longlong param_1,undefined8 param_2)

{
  FUN_140627960();
  *(undefined8 *)(param_1 + 0x1f0) = param_2;
  FUN_1402c1cc6(param_1 + 8,(int)param_2);
  FUN_1402c4f16(*(longlong *)(param_1 + 0x9c8) + 0xdb0,
                *(undefined4 *)(*(longlong *)(param_1 + 0x9c8) + 0x358));
  return;
}



// FUNCTION 142a0b056 FUN_142a0b056 body=9391 status=ok
// SIG undefined FUN_142a0b056(void)

void FUN_142a0b056(longlong *param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined4 uVar5;
  undefined1 ***pppuVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  undefined1 *puVar13;
  char cVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined1 **ppuVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  longlong **pplVar25;
  undefined1 *puVar26;
  undefined1 ****ppppuVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  longlong lVar33;
  int iVar34;
  longlong **pplVar35;
  int *piVar36;
  ulonglong uVar37;
  uint *puVar38;
  ulonglong uVar39;
  longlong lVar40;
  undefined1 ****ppppuVar41;
  longlong *plVar42;
  longlong *plVar43;
  longlong lVar44;
  longlong *plVar45;
  longlong *plVar46;
  undefined1 auStack_298 [40];
  longlong *local_270;
  uint local_264;
  longlong *local_260;
  ulonglong local_258;
  longlong *local_250;
  double local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  longlong local_230;
  undefined8 local_228;
  longlong *plStack_220;
  undefined8 local_218;
  longlong *plStack_210;
  undefined8 local_208;
  longlong *plStack_200;
  undefined8 local_1f8;
  longlong *plStack_1f0;
  undefined1 local_1e1;
  undefined1 *local_1e0;
  undefined1 local_1d1;
  undefined1 **local_1d0;
  longlong *local_1c8;
  undefined1 *puStack_1c0;
  longlong *local_1b8;
  undefined8 uStack_1b0;
  longlong *local_1a8;
  undefined8 uStack_1a0;
  longlong *local_198;
  undefined1 ****ppppuStack_190;
  undefined1 *local_188;
  int local_180;
  char local_17c;
  undefined8 local_178;
  int local_170;
  uint local_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  longlong local_158;
  undefined4 local_150;
  undefined1 ***local_148;
  undefined8 uStack_140;
  undefined1 *puStack_138;
  int local_130;
  undefined1 local_12c;
  undefined8 local_128;
  uint uStack_120;
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 *local_108;
  ulonglong local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar33 = param_1[0x3f];
  dVar4 = (double)param_1[0x3e];
  local_240 = (undefined4)*param_2;
  uStack_23c = *(undefined4 *)((longlong)param_2 + 4);
  uStack_238 = (undefined4)param_2[1];
  uStack_234 = *(undefined4 *)((longlong)param_2 + 0xc);
  local_230 = param_2[2];
  local_228 = 0;
  plStack_220 = (longlong *)0x0;
  local_218 = 0;
  plStack_210 = (longlong *)0x0;
  local_208 = 0;
  plStack_200 = (longlong *)0x0;
  local_1f8 = 0;
  plStack_1f0 = (longlong *)0x0;
  local_260 = param_2;
  local_250 = param_1;
  local_248 = dVar4;
  if (param_1[0x38] != 0) {
    FUN_142a2abe8(param_1[0x38],(int)param_1[0x4d],*(undefined1 *)(param_1[0x139] + 0x431));
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  plVar15 = (longlong *)FUN_14172f29e();
  uStack_140 = (longlong *)*plVar15;
  puStack_138 = (undefined1 *)plVar15[1];
  local_130 = -1;
  local_148 = (undefined1 ***)&PTR_FUN_149f6aff0;
  uStack_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  local_128 = (undefined1 **)0x0;
  uStack_120 = 0;
  uStack_11c = 0;
  local_108 = (undefined8 *)&DAT_3ff0000000000000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_178 = 0;
  local_170 = 0;
  local_198 = (longlong *)0x0;
  ppppuStack_190 = (undefined1 ****)0x0;
  local_16c = 0x80;
  uStack_168 = 0xffffffff;
  local_164 = 0;
  local_158 = 0;
  local_150 = 0;
  FUN_14085c29a(param_1[0x150],param_1);
  lVar17 = param_1[0x149];
  if ((longlong)(int)lVar17 != 0) {
    lVar40 = param_1[0x148];
    lVar44 = 0;
    do {
      FUN_142a1c3fc(*(undefined8 *)(lVar40 + lVar44),param_1,1);
      lVar44 = lVar44 + 8;
    } while ((longlong)(int)lVar17 * 8 != lVar44);
  }
  *(undefined4 *)(param_1 + 0x149) = 0;
  if (*(int *)((longlong)param_1 + 0xa4c) < 0) {
    FUN_14172f7b2(param_1 + 0x148,0);
  }
  FUN_140541c4a(param_1[0x139] + 0xdb0,param_1);
  local_150 = 0;
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  uVar23 = (ulonglong)ppppuStack_190 >> 0x20;
  ppppuStack_190 = (undefined1 ****)((ulonglong)ppppuStack_190 & 0xffffffff00000000);
  if ((int)uVar23 != 0) {
    FUN_14472eb64(&local_198,0);
  }
  uStack_168 = 0xffffffff;
  local_164 = 0;
  local_170 = 0;
  if (0x80 < local_16c) {
    local_16c = 0x80;
    FUN_1446efbd8(&local_188,0);
  }
  if (local_178 != 0) {
    FUN_1400020a8();
  }
  if (local_198 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_142a0f4d8(&local_148);
  puVar38 = (uint *)param_1[0x38];
  if (puVar38 != (uint *)0x0) {
    lVar17 = param_1[0x139];
    *(double *)
     (*(longlong *)(puVar38 + 2) + 0x10 + (longlong)(int)(*puVar38 & puVar38[0xf8]) * 0x18) = dVar4;
    uVar21 = puVar38[0xf8];
    *(uint *)(*(longlong *)(puVar38 + 2) + 8 + (longlong)(int)(*puVar38 & uVar21) * 0x18) = uVar21;
    plVar15 = (longlong *)((longlong)(int)(*puVar38 & uVar21) * 0x18 + *(longlong *)(puVar38 + 2));
    if ((*(longlong *)(puVar38 + 0xf6) == 0) ||
       (*(char *)(*(longlong *)(puVar38 + 0xf6) + 0x1d8) != '\x01')) {
      puVar24 = (undefined8 *)*plVar15;
      if (puVar24 != (undefined8 *)0x0) {
        *plVar15 = 0;
        (**(code **)*puVar24)(puVar24,1);
      }
    }
    else {
      plVar42 = (longlong *)*plVar15;
      if ((int)uVar21 < (int)puVar38[0xf9]) {
        if (plVar42 != (longlong *)0x0) {
          *(undefined1 *)(plVar42 + 1) = 1;
        }
      }
      else {
        if (plVar42 == (longlong *)0x0) {
          FUN_146e11a8c(lVar17,&local_148);
          puVar24 = (undefined8 *)*plVar15;
          *plVar15 = (longlong)local_148;
          if (puVar24 != (undefined8 *)0x0) {
            (**(code **)*puVar24)(puVar24,1);
          }
        }
        else {
          (**(code **)(*plVar42 + 8))(plVar42);
        }
        *(undefined1 *)(*plVar15 + 8) = 0;
      }
    }
    FUN_144a4922c(puVar38,*plVar15);
  }
  FUN_14298c568(param_1[0x139] + 0x560);
  FUN_140aa5fcc(param_1[0x139] + 0x100);
  FUN_140106846(param_1[0x139] + 0xc70);
  iVar32 = 1;
  if ((char)local_230 == '\0') {
    iVar32 = (int)param_1[0x48];
  }
  dVar8 = (double)*(float *)((longlong)param_1 + 0x23c);
  if ((0 < iVar32) && (dVar8 < dVar4)) {
    fVar1 = *(float *)(param_1 + 0x47);
    dVar9 = (double)fVar1;
    bVar7 = true;
    dVar10 = dVar4;
    do {
      dVar11 = dVar10;
      if ((0.0 < fVar1) && (dVar9 <= dVar10)) {
        dVar11 = dVar9;
      }
      FUN_14049e076(param_1[0x150],param_1);
      lVar17 = param_1[0x149];
      if ((longlong)(int)lVar17 != 0) {
        lVar40 = param_1[0x148];
        lVar44 = 0;
        do {
          FUN_142a24cc8(*(undefined8 *)(lVar40 + lVar44),param_1);
          lVar44 = lVar44 + 8;
        } while ((longlong)(int)lVar17 * 8 != lVar44);
      }
      *(undefined4 *)(param_1 + 0x149) = 0;
      if (*(int *)((longlong)param_1 + 0xa4c) < 0) {
        FUN_14172f7b2(param_1 + 0x148,0);
      }
      puVar38 = (uint *)param_1[0x38];
      if (puVar38 != (uint *)0x0) {
        if (bVar7) {
          uVar16 = *(undefined8 *)
                    (*(longlong *)(puVar38 + 2) + (longlong)(int)(*puVar38 & puVar38[0xf8]) * 0x18);
        }
        else {
          uVar16 = 0;
        }
        *(undefined8 *)(param_1[0x139] + 0x1090) = uVar16;
      }
      FUN_1401ab3bc(param_1[0x139],dVar11,&local_240);
      if (iVar32 < 2) break;
      iVar32 = iVar32 + -1;
      dVar10 = dVar10 - dVar11;
      bVar7 = false;
    } while (dVar8 < dVar10);
  }
  if (dVar4 < dVar8) {
    FUN_140f624bc(param_1[0x139],0);
  }
  FUN_1400ed514(param_1[0x13a],param_1,0);
  lVar17 = param_1[0x139];
  if (*(int *)(lVar17 + 0x354) < 0) {
    *(undefined4 *)(lVar17 + 0x350) = 0;
    FUN_146ea0fec(lVar17 + 0x348,0);
  }
  else {
    *(undefined4 *)(lVar17 + 0x350) = 0;
  }
  lVar17 = *(longlong *)(param_1[0x139] + 0x2c8);
  local_1e0 = &local_1e1;
  local_1d0 = &local_1e0;
  iVar32 = *(int *)(lVar17 + 0x5e8);
  if (0 < iVar32) {
    lVar40 = 0;
    lVar44 = 0;
    iVar28 = 0;
    do {
      plVar15 = *(longlong **)(*(longlong *)(lVar17 + 0x5e0) + 8 + lVar40);
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)(*(longlong *)(lVar17 + 0x5e0) + lVar40);
        iVar34 = *(int *)(*plVar15 + 0x18);
        if (iVar34 != 0) {
          uStack_1b0 = &local_148;
          local_1b8 = (longlong *)&LAB_144b07586;
          local_1c8 = (longlong *)&LAB_144b07582;
          pplVar25 = &local_1c8;
          pplVar35 = &local_1b8;
          puStack_1c0 = &local_1d1;
          uStack_140 = plVar15;
          goto LAB_142a0b66a;
        }
      }
      else {
        iVar34 = (int)plVar15[1];
        if (iVar34 != 0) {
          ppppuStack_190 = &local_148;
          local_198 = (longlong *)&LAB_144b07530;
          local_1a8 = (longlong *)&LAB_144b07582;
          pplVar25 = &local_1a8;
          pplVar35 = &local_198;
          uStack_1a0 = &local_1d1;
          uStack_140 = plVar15;
LAB_142a0b66a:
          local_148 = &local_1d0;
          puStack_138 = (undefined1 *)CONCAT44(puStack_138._4_4_,iVar28);
          FUN_1402643e4(iVar34,pplVar25,pplVar35,0);
          iVar28 = iVar28 + iVar34;
          iVar32 = *(int *)(lVar17 + 0x5e8);
        }
      }
      lVar44 = lVar44 + 1;
      lVar40 = lVar40 + 0x10;
    } while (lVar44 < iVar32);
  }
  lVar17 = param_1[0x29];
  if ((longlong)(int)lVar17 != 0) {
    lVar40 = param_1[0x28];
    lVar44 = 0;
    do {
      plVar15 = *(longlong **)(lVar40 + lVar44);
      if (plVar15[4] != 0) {
        (**(code **)(*plVar15 + 200))(plVar15);
        plVar15[4] = 0;
      }
      plVar15[5] = 0;
      lVar44 = lVar44 + 8;
    } while ((longlong)(int)lVar17 * 8 != lVar44);
  }
  param_1[0x3f] = (longlong)((double)param_1[0x3f] + dVar4);
  *(int *)(param_1 + 0x4d) = (int)param_1[0x4d] + 1;
  plVar15 = param_1;
  if (0.0 < dVar4) {
    FUN_1402c1cc6(param_1 + 4,param_1[0x3e]);
    lVar17 = param_1[0x13c];
    if (*(char *)(lVar17 + 0x10) == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar17 + 8));
    }
    plVar15 = (longlong *)(**(code **)(**(longlong **)(lVar17 + 0x18) + 0x10))();
    lVar40 = (**(code **)(**(longlong **)(lVar17 + 0x18) + 0x10))();
    *(undefined4 *)(plVar15 + 1) = 0;
    if (*(int *)((longlong)plVar15 + 0xc) != 0) {
      FUN_140718530(plVar15,0);
    }
    FUN_1402136b6(lVar40 + 0x10,0);
    local_270 = param_1 + 0x11b;
    FUN_14488ddfe(&local_148);
    if (puStack_138 != (undefined1 *)0x0) {
      puVar26 = puStack_138;
      do {
        plVar42 = *(longlong **)(*(longlong *)(puVar26 + 0x98) + (longlong)local_130 * 8);
        if ((plVar42 != (longlong *)0x0) &&
           (plVar42 = *(longlong **)(*(longlong *)(*plVar42 + 200) + (longlong)(int)plVar42[1] * 8),
           puVar26 = puStack_138, local_198 = plVar42, plVar42 != (longlong *)0x0)) {
          if (*(int *)((longlong)plVar42 + 0x1c) == 0xb) {
            iVar32 = (int)plVar15[1];
            *(uint *)(plVar15 + 1) = iVar32 + 1U;
            if (*(uint *)((longlong)plVar15 + 0xc) < iVar32 + 1U) {
              FUN_140711e5c(plVar15,iVar32);
            }
            *(longlong **)(*plVar15 + (longlong)iVar32 * 8) = plVar42;
            puVar26 = puStack_138;
          }
          else {
            FUN_140123484(lVar40 + 0x10,&local_1a8,&local_198,0);
            puVar26 = puStack_138;
          }
        }
        uVar23 = (ulonglong)local_128 & 0xffffffff;
        plVar42 = uStack_140;
        iVar32 = local_128._4_4_;
        uVar21 = uStack_120;
        do {
          if (plVar42 == (longlong *)0x0) {
            local_130 = local_130 + 1;
            if (iVar32 <= local_130) {
              uVar21 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uVar21;
              local_128 = (undefined1 **)CONCAT44(local_128._4_4_,uVar21);
              if ((int)uVar21 < *(int *)(local_148 + 1)) {
                uVar39 = (longlong)(int)uVar21 << 4 | 8;
                uVar23 = (longlong)(int)uVar21;
                do {
                  lVar44 = *(longlong *)((longlong)*local_148 + uVar39);
                  if (lVar44 == 0) {
                    piVar36 = (int *)(*(longlong *)((longlong)*local_148 + (uVar39 - 8)) + 0x18);
                  }
                  else {
                    piVar36 = (int *)(lVar44 + 8);
                  }
                  if (*piVar36 != 0) goto LAB_142a0b9a3;
                  uVar37 = uVar23 + 1;
                  local_128 = (undefined1 **)CONCAT44(local_128._4_4_,(int)uVar23 + 1);
                  uVar39 = uVar39 + 0x10;
                  uVar23 = uVar37;
                } while ((longlong)uVar37 < (longlong)*(int *)(local_148 + 1));
                goto LAB_142a0b9a0;
              }
              goto LAB_142a0b9a3;
            }
            plVar42 = (longlong *)0x0;
          }
          else {
            uStack_120 = uVar21 + 1;
            if ((int)uStack_120 < (int)plVar42[1]) {
              plVar46 = *(longlong **)(*plVar42 + (longlong)(int)uStack_120 * 8);
              puVar26 = (undefined1 *)*plVar46;
              if (puVar26 == (undefined1 *)0x0) {
                local_12c = 0;
              }
              else {
                local_12c = puVar26[0x70];
              }
              local_130 = (int)plVar46[1];
              puStack_138 = puVar26;
              uVar21 = uStack_120;
            }
            else {
              uVar21 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uVar21;
              local_128 = (undefined1 **)CONCAT44(local_128._4_4_,uVar21);
              if ((int)uVar21 < *(int *)(local_148 + 1)) {
                uVar39 = (longlong)(int)uVar21 << 4 | 8;
                uVar23 = (longlong)(int)uVar21;
                do {
                  lVar44 = *(longlong *)((longlong)*local_148 + uVar39);
                  if (lVar44 == 0) {
                    piVar36 = (int *)(*(longlong *)((longlong)*local_148 + (uVar39 - 8)) + 0x18);
                  }
                  else {
                    piVar36 = (int *)(lVar44 + 8);
                  }
                  if (*piVar36 != 0) goto LAB_142a0b9a3;
                  uVar37 = uVar23 + 1;
                  local_128 = (undefined1 **)CONCAT44(local_128._4_4_,(int)uVar23 + 1);
                  uVar39 = uVar39 + 0x10;
                  uVar23 = uVar37;
                } while ((longlong)uVar37 < (longlong)*(int *)(local_148 + 1));
LAB_142a0b9a0:
                uVar23 = uVar37 & 0xffffffff;
              }
LAB_142a0b9a3:
              uStack_120 = 0;
              iVar32 = (int)uVar23;
              if (*(int *)(local_148 + 1) <= iVar32) goto LAB_142a0ba4a;
              plVar42 = (longlong *)(*local_148)[(longlong)iVar32 * 2 + 1];
              if (plVar42 == (longlong *)0x0) {
                puVar26 = (*local_148)[(longlong)iVar32 * 2];
                local_130 = 0;
              }
              else {
                local_130 = *(int *)(*(undefined8 **)*plVar42 + 1);
                puVar26 = (undefined1 *)**(undefined8 **)*plVar42;
              }
              if (puVar26 == (undefined1 *)0x0) {
                local_12c = 0;
                puVar26 = (undefined1 *)0x0;
              }
              else {
                local_12c = puVar26[0x70];
              }
              iVar32 = *(int *)(puVar26 + 0x18);
              local_128 = (undefined1 **)CONCAT44(iVar32,(undefined4)local_128);
              uVar21 = 0;
              uStack_140 = plVar42;
              puStack_138 = puVar26;
            }
          }
        } while ((puVar26 != (undefined1 *)0x0) &&
                (*(char *)(*(longlong *)(puVar26 + 0x230) + (longlong)local_130) != '\0'));
      } while (puVar26 != (undefined1 *)0x0);
    }
LAB_142a0ba4a:
    (**(code **)(**(longlong **)(lVar17 + 0x18) + 0x30))();
    if (*(char *)(lVar17 + 0x10) == '\x01') {
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar17 + 8));
    }
    local_1a8 = (longlong *)0x0;
    uStack_1a0 = (undefined1 *)0x0;
    iVar32 = (int)param_1[0x147];
    if (iVar32 < 0) goto LAB_142a0d435;
    if (iVar32 != 0) {
      FUN_14172f7b2(&local_1a8);
    }
    plVar15 = (longlong *)param_1[0x1c];
    local_1b8 = (longlong *)0x0;
    uStack_1b0 = (undefined1 ****)0x0;
    iVar32 = (int)param_1[0x140] - *(int *)((longlong)param_1 + 0xa2c);
    if (iVar32 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar32);
    }
    if (iVar32 != 0) {
      FUN_140718530(&local_1b8);
    }
    local_1c8 = (longlong *)0x0;
    puStack_1c0 = (undefined1 *)0x0;
    iVar32 = (int)param_1[0x14b];
    if (iVar32 < 0) goto LAB_142a0d435;
    if (iVar32 != 0) {
      FUN_146ee4d40(&local_1c8);
    }
    cVar14 = *(char *)(param_1[0x139] + 0x430);
    FUN_14488ddfe(&local_198,local_270);
    if (local_188 != (undefined1 *)0x0) {
      puVar26 = local_188;
      do {
        puVar13 = uStack_1a0;
        ppppuVar41 = uStack_1b0;
        lVar17 = (longlong)local_180;
        plVar42 = *(longlong **)(*(longlong *)(puVar26 + 0x98) + lVar17 * 8);
        pppuVar6 = *(undefined1 ****)(*(longlong *)(*plVar42 + 200) + (longlong)(int)plVar42[1] * 8)
        ;
        if (pppuVar6 != (undefined1 ***)0x0) {
          if (local_17c == '\x02') {
            if (((cVar14 == '\0') || (*(char *)(*(longlong *)(puVar26 + 0x188) + lVar17) == '\x01'))
               && ((DAT_14c75f3f0 != 0 ||
                   (*(char *)(*(longlong *)(puVar26 + 0x2c0) + 0xb + lVar17 * 0x10) != '\x02')))) {
              lVar17 = (longlong)(int)uStack_1b0;
              if (lVar17 != 0) {
                uVar23 = 0;
                do {
                  if (*(undefined1 ****)((longlong)local_1b8 + uVar23) == pppuVar6) {
                    if ((~uVar23 & 0x7fffffff8) != 0) goto LAB_142a0bc43;
                    break;
                  }
                  uVar23 = uVar23 + 8;
                } while (lVar17 * 8 - uVar23 != 0);
              }
              uVar21 = (int)uStack_1b0 + 1;
              uStack_1b0 = (undefined1 ****)CONCAT44(uStack_1b0._4_4_,uVar21);
              plVar42 = local_1b8;
              if (uStack_1b0._4_4_ < uVar21) {
                FUN_140711e5c(&local_1b8,(ulonglong)ppppuVar41 & 0xffffffff);
                plVar42 = local_1b8;
              }
LAB_142a0bbd5:
              plVar42[lVar17] = (longlong)pppuVar6;
            }
          }
          else {
            if (local_17c == '\x06') {
              lVar17 = (longlong)(int)uStack_1a0;
              if (lVar17 != 0) {
                uVar23 = 0;
                do {
                  if (*(undefined1 ****)((longlong)local_1a8 + uVar23) == pppuVar6) {
                    if ((~uVar23 & 0x7fffffff8) != 0) goto LAB_142a0bc43;
                    break;
                  }
                  uVar23 = uVar23 + 8;
                } while (lVar17 * 8 - uVar23 != 0);
              }
              uVar21 = (int)uStack_1a0 + 1;
              uStack_1a0 = (undefined1 *)CONCAT44(uStack_1a0._4_4_,uVar21);
              plVar42 = local_1a8;
              if (uStack_1a0._4_4_ < uVar21) {
                FUN_14172f9f2(&local_1a8,(ulonglong)puVar13 & 0xffffffff);
                plVar42 = local_1a8;
              }
              goto LAB_142a0bbd5;
            }
            if ((local_17c == '\x03') && (&stack0x00000000 != &DAT_00000188)) {
              if ((*(byte *)(*(longlong *)(puVar26 + 0x680) + lVar17) & 1) == 0) {
                local_148 = pppuVar6;
                FUN_146ee5288(&local_1a8,&local_148);
              }
              else {
                if (*(int *)((longlong)pppuVar6 + 0x1c) == 0xc) {
                  local_148 = pppuVar6;
                  FUN_146ee52f4(&local_1c8,&local_148);
                  lVar17 = (longlong)local_180;
                  puVar26 = local_188;
                }
                if ((*(char *)(*(longlong *)(puVar26 + 0x2c0) + 0xb + lVar17 * 0x10) == '\x04') ||
                   (*(int *)((longlong)pppuVar6 + 0x1c) != 0xc)) {
                  ppppuVar41 = (undefined1 ****)(lVar17 * 0x50 + *(longlong *)(puVar26 + 0x608));
                  local_128 = (undefined1 **)0x0;
                  uStack_120 = 0;
                  local_148 = (undefined1 ***)0x0;
                  uStack_140 = (longlong *)0x0;
                  uStack_11c = 0x80;
                  uStack_118 = 0xffffffff;
                  uStack_114 = 0;
                  local_108 = (undefined8 *)0x0;
                  local_100 = local_100 & 0xffffffff00000000;
                  if (&local_148 != ppppuVar41) {
                    iVar32 = *(int *)(ppppuVar41 + 9);
                    if ((ulonglong)(longlong)iVar32 < 2) {
                      if (iVar32 != 0) goto LAB_142a0bf69;
                    }
                    else {
                      FUN_1446efa72(&local_108,0,iVar32,4);
LAB_142a0bf69:
                      puVar24 = local_108;
                      if (local_108 == (undefined8 *)0x0) {
                        puVar24 = &uStack_110;
                      }
                      ppppuVar27 = ppppuVar41 + 7;
                      if ((undefined1 ****)ppppuVar41[8] != (undefined1 ****)0x0) {
                        ppppuVar27 = (undefined1 ****)ppppuVar41[8];
                      }
                      memcpy(puVar24,ppppuVar27,(longlong)iVar32 << 2);
                    }
                    local_100 = CONCAT44(local_100._4_4_,iVar32);
                    uVar21 = *(uint *)(ppppuVar41 + 1);
                    FUN_140213722(&local_148,uVar21);
                    iVar32 = (int)uStack_140;
                    uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,(int)uStack_140 + uVar21);
                    if (uStack_140._4_4_ - iVar32 < uVar21) {
                      FUN_1446efaca(&local_148);
                    }
                    uStack_118 = *(undefined4 *)(ppppuVar41 + 6);
                    uStack_114 = *(undefined4 *)((longlong)ppppuVar41 + 0x34);
                    uVar31 = *(int *)(ppppuVar41 + 5) + 0x1fU & 0xffffffe0;
                    uStack_120 = 0;
                    if (((int)uStack_11c < (int)uVar31) || (0x80 < (int)uStack_11c)) {
                      if ((int)uVar31 < 0x81) {
                        uVar31 = 0x80;
                      }
                      uStack_11c = uVar31;
                      FUN_1446efbd8(&puStack_138,0);
                    }
                    uStack_120 = *(uint *)(ppppuVar41 + 5);
                    if (uStack_120 != 0) {
                      ppppuVar27 = ppppuVar41 + 2;
                      if ((undefined1 ****)ppppuVar41[4] != (undefined1 ****)0x0) {
                        ppppuVar27 = (undefined1 ****)ppppuVar41[4];
                      }
                      ppuVar18 = local_128;
                      if (local_128 == (undefined1 **)0x0) {
                        ppuVar18 = &puStack_138;
                      }
                      memcpy(ppuVar18,ppppuVar27,(ulonglong)(uStack_120 + 0x1f >> 3 & 0xfffffffc));
                    }
                    if (uVar21 != 0) {
                      memcpy(local_148,*ppppuVar41,(longlong)(int)uVar21 << 4);
                    }
                  }
                  if (uStack_120 == 0) {
                    uVar23 = 1;
                    plVar42 = (longlong *)0x0;
                    uVar21 = 0;
                    iVar32 = 0;
                  }
                  else {
                    ppuVar18 = local_128;
                    if (local_128 == (undefined1 **)0x0) {
                      ppuVar18 = &puStack_138;
                    }
                    uVar21 = *(uint *)ppuVar18;
                    if (uVar21 == 0) {
                      iVar32 = uStack_120 + 0x1e;
                      if (-1 < (int)(uStack_120 - 1)) {
                        iVar32 = uStack_120 - 1;
                      }
                      plVar42 = (longlong *)0x0;
                      plVar46 = (longlong *)(ulonglong)(uint)(iVar32 >> 5);
                      if (iVar32 >> 5 < 1) {
                        plVar46 = plVar42;
                      }
                      iVar32 = 0;
                      do {
                        if (plVar46 == plVar42) goto LAB_142a0c248;
                        iVar32 = iVar32 + 0x20;
                        uVar21 = *(uint *)((longlong)ppuVar18 + ((longlong)plVar42 + 1) * 4);
                        plVar42 = (longlong *)((longlong)plVar42 + 1);
                      } while (uVar21 == 0);
                    }
                    else {
                      plVar42 = (longlong *)0x0;
                      iVar32 = 0;
                    }
                    uVar23 = (ulonglong)(-uVar21 & uVar21);
                    uVar39 = uVar23 * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar39 != 0) {
                      for (; uVar39 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    uVar21 = (iVar32 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    if ((int)uStack_120 <= (int)uVar21) {
                      uVar21 = uStack_120;
                    }
                  }
                  if (uVar21 != uStack_120) {
                    uVar31 = 0xffffffff;
                    local_258 = (ulonglong)uStack_120;
                    do {
                      ppuVar18 = local_148[(longlong)(int)uVar21 * 2];
                      local_270 = plVar42;
                      if (ppuVar18 != (undefined1 **)0x0) {
                        local_264 = uVar31;
                        if (*(int *)((longlong)ppuVar18 + 0x1c) == 2) {
                          local_1d0 = ppuVar18;
                          FUN_146ee5288(&local_1a8,&local_1d0);
                          uVar31 = local_264;
                        }
                        else if (*(int *)((longlong)ppuVar18 + 0x1c) == 0xb) {
                          local_1d0 = ppuVar18;
                          FUN_146ee521c(&local_1b8,&local_1d0);
                          uVar31 = local_264;
                        }
                      }
                      uVar31 = uVar31 & ~(uint)uVar23;
                      ppuVar18 = local_128;
                      if (local_128 == (undefined1 **)0x0) {
                        ppuVar18 = &puStack_138;
                      }
                      iVar28 = (int)local_270;
                      lVar17 = (longlong)iVar28;
                      uVar21 = *(uint *)((longlong)ppuVar18 + lVar17 * 4) & uVar31;
                      plVar42 = local_270;
                      if (uVar21 == 0) {
                        iVar34 = uStack_120 + 0x1e;
                        if (-1 < (int)(uStack_120 - 1)) {
                          iVar34 = uStack_120 - 1;
                        }
                        iVar34 = iVar34 >> 5;
                        iVar32 = iVar32 + 0x20;
                        iVar22 = iVar34;
                        if (iVar34 < iVar28) {
                          iVar22 = iVar28;
                        }
                        if (iVar28 < iVar34) {
                          lVar40 = 0;
                          do {
                            uVar21 = *(uint *)((longlong)ppuVar18 + (lVar17 + lVar40 + 1) * 4);
                            if (uVar21 != 0) {
                              plVar42 = (longlong *)(ulonglong)(iVar28 + (int)lVar40 + 1);
                              uVar31 = 0xffffffff;
                              goto LAB_142a0c1cc;
                            }
                            iVar32 = iVar32 + 0x20;
                            lVar40 = lVar40 + 1;
                          } while (iVar22 - lVar17 != lVar40);
                          uVar31 = 0xffffffff;
                          iVar28 = iVar22;
                        }
                        plVar42 = (longlong *)(ulonglong)(iVar28 + 1);
                        uVar21 = uStack_120;
                      }
                      else {
LAB_142a0c1cc:
                        uVar23 = (ulonglong)(-uVar21 & uVar21);
                        uVar39 = uVar23 * 2 + 1;
                        lVar17 = 0x3f;
                        if (uVar39 != 0) {
                          for (; uVar39 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                          }
                        }
                        uVar21 = (iVar32 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                        if ((int)uStack_120 <= (int)uVar21) {
                          uVar21 = uStack_120;
                        }
                      }
                    } while (uVar21 != (uint)local_258);
                  }
LAB_142a0c248:
                  local_100 = local_100 & 0xffffffff00000000;
                  if (local_108 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  FUN_14014a700(&local_148);
                }
              }
            }
          }
        }
LAB_142a0bc43:
        uVar23 = local_178 & 0xffffffff;
        puVar26 = local_188;
        ppppuVar41 = ppppuStack_190;
        iVar32 = local_178._4_4_;
        iVar28 = local_170;
        do {
          if (ppppuVar41 == (undefined1 ****)0x0) {
            local_180 = local_180 + 1;
            if (iVar32 <= local_180) {
              uVar21 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uVar21;
              local_178 = CONCAT44(local_178._4_4_,uVar21);
              if ((int)uVar21 < (int)local_198[1]) {
                uVar39 = (longlong)(int)uVar21 << 4 | 8;
                uVar23 = (longlong)(int)uVar21;
                do {
                  lVar17 = *(longlong *)(*local_198 + uVar39);
                  if (lVar17 == 0) {
                    piVar36 = (int *)(*(longlong *)(*local_198 + -8 + uVar39) + 0x18);
                  }
                  else {
                    piVar36 = (int *)(lVar17 + 8);
                  }
                  if (*piVar36 != 0) goto LAB_142a0bdc9;
                  uVar37 = uVar23 + 1;
                  local_178 = CONCAT44(local_178._4_4_,(int)uVar23 + 1);
                  uVar39 = uVar39 + 0x10;
                  uVar23 = uVar37;
                } while ((longlong)uVar37 < (longlong)(int)local_198[1]);
                goto LAB_142a0bdc6;
              }
              goto LAB_142a0bdc9;
            }
            ppppuVar41 = (undefined1 ****)0x0;
          }
          else {
            iVar28 = iVar28 + 1;
            local_170 = iVar28;
            if (iVar28 < *(int *)(ppppuVar41 + 1)) {
              puVar26 = *(*ppppuVar41)[iVar28];
              if (puVar26 == (undefined1 *)0x0) {
                local_17c = '\0';
              }
              else {
                local_17c = puVar26[0x70];
              }
              local_188 = puVar26;
              local_180 = *(int *)((*ppppuVar41)[iVar28] + 1);
            }
            else {
              uVar21 = (int)uVar23 + 1;
              uVar23 = (ulonglong)uVar21;
              local_178 = CONCAT44(local_178._4_4_,uVar21);
              if ((int)uVar21 < (int)local_198[1]) {
                uVar39 = (longlong)(int)uVar21 << 4 | 8;
                uVar23 = (longlong)(int)uVar21;
                do {
                  lVar17 = *(longlong *)(*local_198 + uVar39);
                  if (lVar17 == 0) {
                    piVar36 = (int *)(*(longlong *)(*local_198 + -8 + uVar39) + 0x18);
                  }
                  else {
                    piVar36 = (int *)(lVar17 + 8);
                  }
                  if (*piVar36 != 0) goto LAB_142a0bdc9;
                  uVar37 = uVar23 + 1;
                  local_178 = CONCAT44(local_178._4_4_,(int)uVar23 + 1);
                  uVar39 = uVar39 + 0x10;
                  uVar23 = uVar37;
                } while ((longlong)uVar37 < (longlong)(int)local_198[1]);
LAB_142a0bdc6:
                uVar23 = uVar37 & 0xffffffff;
              }
LAB_142a0bdc9:
              local_170 = 0;
              if ((int)local_198[1] <= (int)uVar23) goto LAB_142a0c38f;
              lVar17 = (longlong)(int)uVar23 * 0x10;
              ppppuVar41 = *(undefined1 *****)(*local_198 + 8 + lVar17);
              ppppuStack_190 = ppppuVar41;
              if (ppppuVar41 == (undefined1 ****)0x0) {
                puVar26 = *(undefined1 **)(*local_198 + lVar17);
                local_180 = 0;
              }
              else {
                local_180 = *(int *)(**ppppuVar41 + 1);
                puVar26 = ***ppppuVar41;
              }
              if (puVar26 == (undefined1 *)0x0) {
                local_17c = '\0';
                puVar26 = (undefined1 *)0x0;
              }
              else {
                local_17c = puVar26[0x70];
              }
              local_188 = puVar26;
              iVar32 = *(int *)(puVar26 + 0x18);
              local_178 = CONCAT44(iVar32,(undefined4)local_178);
              iVar28 = 0;
            }
          }
          if (puVar26 == (undefined1 *)0x0) goto LAB_142a0c38f;
        } while (*(char *)(*(longlong *)(puVar26 + 0x230) + (longlong)local_180) != '\0');
      } while( true );
    }
LAB_142a0c38f:
    iVar32 = (int)uStack_1b0;
    if ((int)uStack_1b0 < 0) goto LAB_142a0d435;
    if (*(int *)((longlong)plVar15 + 0xc) < (int)uStack_1b0) {
      FUN_14172c1b0(plVar15);
    }
    if (0 < (int)uStack_1b0) {
      lVar17 = 0;
      do {
        iVar32 = (int)plVar15[1];
        *(uint *)(plVar15 + 1) = iVar32 + 1U;
        if (*(uint *)((longlong)plVar15 + 0xc) < iVar32 + 1U) {
          FUN_146ee5360(plVar15,iVar32);
        }
        FUN_144b075cc((longlong)iVar32 * 0x90 + *plVar15);
        lVar40 = local_1b8[lVar17];
        plVar42 = *(longlong **)(lVar40 + 0x48);
        if ((plVar42 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar42 + 0xc))) {
          plVar43 = (longlong *)((longlong)((int)plVar15[1] + -1) * 0x90 + *plVar15);
          lVar44 = *(longlong *)(lVar40 + 0x20);
          plVar46 = *(longlong **)(lVar40 + 0x28);
          if (plVar46 == (longlong *)0x0) {
            plVar43[1] = lVar44;
            plVar45 = (longlong *)plVar43[2];
            if (plVar45 != (longlong *)0x0) {
              plVar43[2] = 0;
LAB_142a0c5b0:
              LOCK();
              plVar46 = plVar45 + 1;
              *(int *)plVar46 = (int)*plVar46 + -1;
              UNLOCK();
              if ((int)*plVar46 == 0) {
                (**(code **)*plVar45)(plVar45);
                LOCK();
                piVar36 = (int *)((longlong)plVar45 + 0xc);
                *piVar36 = *piVar36 + -1;
                iVar32 = *piVar36;
                UNLOCK();
joined_r0x000142a0c574:
                if (iVar32 == 0) {
                  (**(code **)(*plVar45 + 0x10))(plVar45);
                }
              }
            }
          }
          else {
            LOCK();
            *(int *)(plVar46 + 1) = (int)plVar46[1] + 1;
            UNLOCK();
            plVar43[1] = lVar44;
            plVar45 = (longlong *)plVar43[2];
            if (plVar46 == plVar45) {
              LOCK();
              plVar45 = plVar46 + 1;
              *(int *)plVar45 = (int)*plVar45 + -1;
              UNLOCK();
              if ((int)*plVar45 == 0) {
                (**(code **)*plVar46)(plVar46);
                LOCK();
                piVar36 = (int *)((longlong)plVar46 + 0xc);
                *piVar36 = *piVar36 + -1;
                iVar32 = *piVar36;
                UNLOCK();
                plVar45 = plVar46;
                goto joined_r0x000142a0c574;
              }
            }
            else {
              plVar43[2] = (longlong)plVar46;
              if (plVar45 != (longlong *)0x0) goto LAB_142a0c5b0;
            }
          }
          *plVar43 = lVar40;
          lVar44 = plVar42[1];
          lVar40 = *(longlong *)(*plVar42 + 0x28);
          plVar43[5] = *(longlong *)(lVar40 + 0x10 + (longlong)(int)lVar44 * 0x18);
          plVar46 = (longlong *)(lVar40 + (longlong)(int)lVar44 * 0x18);
          lVar40 = plVar46[1];
          plVar43[3] = *plVar46;
          plVar43[4] = lVar40;
          lVar40 = *(longlong *)(*plVar42 + 0x48);
          lVar44 = (longlong)(int)plVar42[1] * 0x10;
          fVar1 = *(float *)(lVar40 + 0xc + lVar44);
          fVar2 = *(float *)(lVar40 + 8 + lVar44);
          fVar3 = *(float *)(lVar40 + 4 + lVar44);
          plVar43[6] = (longlong)(double)*(float *)(lVar40 + lVar44);
          plVar43[7] = (longlong)(double)fVar3;
          plVar43[8] = (longlong)(double)fVar2;
          plVar43[9] = (longlong)(double)fVar1;
          lVar44 = (longlong)(int)plVar42[1];
          lVar40 = *(longlong *)(*plVar42 + 0x278);
          fVar1 = *(float *)(lVar40 + 8 + lVar44 * 0xc);
          fVar2 = *(float *)(lVar40 + 4 + lVar44 * 0xc);
          plVar43[10] = (longlong)(double)*(float *)(lVar40 + lVar44 * 0xc);
          plVar43[0xb] = (longlong)(double)fVar2;
          plVar43[0xc] = (longlong)(double)fVar1;
          lVar44 = (longlong)(int)plVar42[1];
          lVar40 = *(longlong *)(*plVar42 + 0x290);
          fVar1 = *(float *)(lVar40 + 8 + lVar44 * 0xc);
          fVar2 = *(float *)(lVar40 + 4 + lVar44 * 0xc);
          plVar43[0xd] = (longlong)(double)*(float *)(lVar40 + lVar44 * 0xc);
          plVar43[0xe] = (longlong)(double)fVar2;
          plVar43[0xf] = (longlong)(double)fVar1;
          *(undefined1 *)(plVar43 + 0x10) =
               *(undefined1 *)
                (*(longlong *)(*plVar42 + 0x2c0) + 0xb + (longlong)(int)plVar42[1] * 0x10);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)uStack_1b0);
    }
    if (param_1[0x38] != 0) {
      FUN_141153eee(param_1[0x38],plVar15 + 2);
    }
    iVar32 = (int)uStack_1a0;
    if ((int)uStack_1a0 < 0) goto LAB_142a0d435;
    if (*(int *)((longlong)plVar15 + 0x6c) < (int)uStack_1a0) {
      FUN_14172c298(plVar15 + 0xc);
    }
    if (0 < (int)uStack_1a0) {
      lVar17 = 0;
      do {
        iVar32 = (int)plVar15[0xd];
        *(uint *)(plVar15 + 0xd) = iVar32 + 1U;
        if (*(uint *)((longlong)plVar15 + 0x6c) < iVar32 + 1U) {
          FUN_146ee53f4(plVar15 + 0xc,iVar32);
        }
        thunk_FUN_1400eef5e((longlong)iVar32 * 0x20 + plVar15[0xc]);
        FUN_142a1f9de(local_1a8[lVar17],param_1,
                      (longlong)((int)plVar15[0xd] + -1) * 0x20 + plVar15[0xc]);
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)uStack_1a0);
    }
    iVar32 = (int)puStack_1c0;
    if ((int)puStack_1c0 < 0) goto LAB_142a0d435;
    if (*(int *)((longlong)plVar15 + 0x7c) < (int)puStack_1c0) {
      FUN_146e2e260(plVar15 + 0xe);
    }
    if (0 < (int)puStack_1c0) {
      lVar17 = 0;
      do {
        FUN_146ed0de8(plVar15 + 0xe);
        FUN_142a1292a(local_1c8[lVar17],(longlong)((int)plVar15[0xf] + -1) * 0xf0 + plVar15[0xe]);
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)puStack_1c0);
    }
    iVar32 = (int)param_1[0x14d];
    if (iVar32 < 0) goto LAB_142a0d435;
    local_270 = plVar15 + 0x10;
    if (*(int *)((longlong)plVar15 + 0x8c) < iVar32) {
      FUN_140148042();
      iVar32 = (int)param_1[0x14d];
    }
    if (0 < iVar32) {
      lVar17 = 0;
      do {
        iVar32 = (int)plVar15[0x11];
        *(uint *)(plVar15 + 0x11) = iVar32 + 1U;
        if (*(uint *)((longlong)plVar15 + 0x8c) < iVar32 + 1U) {
          FUN_146ee554e(local_270,iVar32);
        }
        FUN_144b075db((longlong)iVar32 * 0x58 + plVar15[0x10]);
        plVar46 = (longlong *)((longlong)((int)plVar15[0x11] + -1) * 0x58 + plVar15[0x10]);
        lVar40 = *(longlong *)(param_1[0x14c] + lVar17 * 8);
        lVar44 = *(longlong *)(lVar40 + 0x20);
        plVar42 = *(longlong **)(lVar40 + 0x28);
        if (plVar42 == (longlong *)0x0) {
          plVar46[1] = lVar44;
          plVar43 = (longlong *)plVar46[2];
          if (plVar43 != (longlong *)0x0) {
            plVar46[2] = 0;
LAB_142a0c90e:
            LOCK();
            plVar42 = plVar43 + 1;
            *(int *)plVar42 = (int)*plVar42 + -1;
            UNLOCK();
            if ((int)*plVar42 == 0) {
              (**(code **)*plVar43)(plVar43);
              LOCK();
              piVar36 = (int *)((longlong)plVar43 + 0xc);
              *piVar36 = *piVar36 + -1;
              iVar32 = *piVar36;
              UNLOCK();
joined_r0x000142a0c94c:
              if (iVar32 == 0) {
                (**(code **)(*plVar43 + 0x10))(plVar43);
              }
            }
          }
        }
        else {
          LOCK();
          *(int *)(plVar42 + 1) = (int)plVar42[1] + 1;
          UNLOCK();
          plVar46[1] = lVar44;
          plVar43 = (longlong *)plVar46[2];
          if (plVar42 == plVar43) {
            LOCK();
            plVar43 = plVar42 + 1;
            *(int *)plVar43 = (int)*plVar43 + -1;
            UNLOCK();
            if ((int)*plVar43 == 0) {
              (**(code **)*plVar42)(plVar42);
              LOCK();
              piVar36 = (int *)((longlong)plVar42 + 0xc);
              *piVar36 = *piVar36 + -1;
              iVar32 = *piVar36;
              UNLOCK();
              plVar43 = plVar42;
              goto joined_r0x000142a0c94c;
            }
          }
          else {
            plVar46[2] = (longlong)plVar42;
            if (plVar43 != (longlong *)0x0) goto LAB_142a0c90e;
          }
        }
        *plVar46 = lVar40;
        lVar44 = *(longlong *)(lVar40 + 0x48);
        if (lVar44 != 0) {
          lVar19 = (longlong)*(int *)(lVar44 + 0x18);
          lVar44 = *(longlong *)(lVar44 + 8);
          if (lVar19 == -1) {
LAB_142a0c962:
            cVar14 = *(char *)(*(longlong *)(lVar44 + 0x108) + 0x12 + lVar19 * 0x58);
            if ((cVar14 == '\0') &&
               (*(char *)(*(longlong *)(lVar44 + 0x108) + 0x14 + lVar19 * 0x58) != '\x01'))
            goto LAB_142a0c8cc;
          }
          else {
            if (lVar44 == 0) {
              lVar44 = 0;
              goto LAB_142a0c962;
            }
            cVar14 = *(char *)(*(longlong *)(lVar44 + 0x108) + 0x12 + lVar19 * 0x58);
          }
          *(char *)(plVar46 + 3) = cVar14;
          *(undefined1 *)((longlong)plVar46 + 0x19) =
               *(undefined1 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108) + 0x10 +
                (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58);
          *(undefined1 *)((longlong)plVar46 + 0x1a) =
               *(undefined1 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108) + 0x13 +
                (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58);
          *(undefined1 *)((longlong)plVar46 + 0x1b) =
               *(undefined1 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108) + 0x14 +
                (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58);
          lVar44 = *(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108);
          lVar20 = (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58;
          plVar42 = (longlong *)(lVar44 + 0x18 + lVar20);
          lVar19 = *plVar42;
          lVar12 = plVar42[1];
          plVar46[6] = *(longlong *)(lVar44 + 0x28 + lVar20);
          plVar46[4] = lVar19;
          plVar46[5] = lVar12;
          lVar44 = *(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108);
          lVar20 = (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58;
          plVar42 = (longlong *)(lVar44 + 0x30 + lVar20);
          lVar19 = *plVar42;
          lVar12 = plVar42[1];
          plVar46[9] = *(longlong *)(lVar44 + 0x40 + lVar20);
          plVar46[7] = lVar19;
          plVar46[8] = lVar12;
          *(undefined4 *)(plVar46 + 10) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108) + 0x48 +
                (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58);
          *(undefined4 *)((longlong)plVar46 + 0x54) =
               *(undefined4 *)
                (*(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108) + 0x4c +
                (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58);
          *(undefined1 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108) + 0x12 +
           (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58) = 0;
          *(undefined1 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108) + 0x13 +
           (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58) = 0;
          *(undefined1 *)
           (*(longlong *)(*(longlong *)(*(longlong *)(lVar40 + 0x48) + 8) + 0x108) + 0x14 +
           (longlong)*(int *)(*(longlong *)(lVar40 + 0x48) + 0x18) * 0x58) = 0;
        }
LAB_142a0c8cc:
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)param_1[0x14d]);
    }
    iVar32 = (int)param_1[0x14f];
    if (iVar32 < 0) goto LAB_142a0d435;
    if (*(int *)((longlong)plVar15 + 0x9c) < iVar32) {
      FUN_1456d0d4a(plVar15 + 0x12);
      iVar32 = (int)param_1[0x14f];
    }
    if (0 < iVar32) {
      lVar17 = 0;
      do {
        FUN_146ed0e20(plVar15 + 0x12);
        FUN_146ee589a(*(undefined8 *)(param_1[0x14e] + lVar17 * 8),
                      (longlong)((int)plVar15[0x13] + -1) * 0x90 + plVar15[0x12]);
        lVar17 = lVar17 + 1;
      } while (lVar17 < (int)param_1[0x14f]);
    }
    FUN_1402c1cc6(param_1 + 7,param_1[0x3e]);
    if ((int)param_1[0xa1] != *(int *)((longlong)param_1 + 0x534)) {
      plVar15 = param_1 + 0xa7;
      if ((longlong *)param_1[0xa8] != (longlong *)0x0) {
        plVar15 = (longlong *)param_1[0xa8];
      }
      iVar32 = (int)param_1[0xa9];
      iVar28 = iVar32 + 3;
      if (-1 < iVar32) {
        iVar28 = iVar32;
      }
      if ((int)param_1[0xa1] - *(int *)((longlong)param_1 + 0x534) < iVar28 >> 2) {
        iVar32 = (int)param_1[0xa5];
        if (iVar32 == 0) {
          uVar23 = 0;
          uVar39 = 1;
          iVar28 = 0;
          iVar34 = 0;
        }
        else {
          puVar38 = (uint *)param_1[0xa4];
          if ((uint *)param_1[0xa4] == (uint *)0x0) {
            puVar38 = (uint *)(param_1 + 0xa2);
          }
          uVar21 = *puVar38;
          if (uVar21 == 0) {
            iVar28 = iVar32 + 0x1e;
            if (-1 < iVar32 + -1) {
              iVar28 = iVar32 + -1;
            }
            uVar23 = 0;
            uVar39 = (ulonglong)(uint)(iVar28 >> 5);
            if (iVar28 >> 5 < 1) {
              uVar39 = uVar23;
            }
            iVar34 = 0;
            do {
              if (uVar39 == uVar23) goto LAB_142a0cc0f;
              iVar34 = iVar34 + 0x20;
              uVar21 = puVar38[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar21 == 0);
          }
          else {
            uVar23 = 0;
            iVar34 = 0;
          }
          uVar39 = (ulonglong)(-uVar21 & uVar21);
          uVar37 = uVar39 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar37 != 0) {
            for (; uVar37 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar28 = (iVar34 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar32 <= iVar28) {
            iVar28 = iVar32;
          }
        }
        if (iVar28 != iVar32) {
          uVar21 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar15 +
             (longlong)*(int *)(param_1[0xa0] + 0x14 + (longlong)iVar28 * 0x18) * 4) = 0xffffffff;
            uVar21 = ~(uint)uVar39 & uVar21;
            puVar38 = (uint *)param_1[0xa4];
            if ((uint *)param_1[0xa4] == (uint *)0x0) {
              puVar38 = (uint *)(param_1 + 0xa2);
            }
            iVar22 = (int)param_1[0xa5];
            iVar28 = (int)uVar23;
            lVar17 = (longlong)iVar28;
            uVar31 = puVar38[lVar17] & uVar21;
            if (uVar31 == 0) {
              iVar29 = iVar22 + 0x1e;
              if (-1 < iVar22 + -1) {
                iVar29 = iVar22 + -1;
              }
              iVar29 = iVar29 >> 5;
              iVar34 = iVar34 + 0x20;
              iVar30 = iVar29;
              if (iVar29 < iVar28) {
                iVar30 = iVar28;
              }
              if (iVar28 < iVar29) {
                lVar40 = 0;
                do {
                  uVar31 = puVar38[lVar17 + lVar40 + 1];
                  if (uVar31 != 0) {
                    uVar23 = (ulonglong)(iVar28 + (int)lVar40 + 1);
                    uVar21 = 0xffffffff;
                    goto LAB_142a0cb3f;
                  }
                  iVar34 = iVar34 + 0x20;
                  lVar40 = lVar40 + 1;
                } while (iVar30 - lVar17 != lVar40);
                uVar21 = 0xffffffff;
                iVar28 = iVar30;
              }
              uVar23 = (ulonglong)(iVar28 + 1);
              iVar28 = iVar22;
            }
            else {
LAB_142a0cb3f:
              uVar39 = (ulonglong)(-uVar31 & uVar31);
              uVar37 = uVar39 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar37 != 0) {
                for (; uVar37 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar28 = (iVar34 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (iVar22 <= iVar28) {
                iVar28 = iVar22;
              }
            }
          } while (iVar28 != iVar32);
        }
      }
      else if (0 < iVar32) {
        lVar17 = 0;
        do {
          *(undefined4 *)((longlong)plVar15 + lVar17 * 4) = 0xffffffff;
          lVar17 = lVar17 + 1;
        } while (lVar17 < (int)param_1[0xa9]);
      }
LAB_142a0cc0f:
      *(undefined4 *)(param_1 + 0xa1) = 0;
      if (*(int *)((longlong)param_1 + 0x50c) < 0) {
        FUN_144727cd0(param_1 + 0xa0,0);
      }
      param_1[0xa6] = 0xffffffff;
      *(undefined4 *)(param_1 + 0xa5) = 0;
    }
    if (*(int *)((longlong)param_1 + 0x55c) < 0) {
      *(undefined4 *)(param_1 + 0xab) = 0;
      FUN_14043d0a6(param_1 + 0xaa,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xab) = 0;
    }
    if (local_1c8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_1b8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    plVar15 = local_250;
    if (local_1a8 != (longlong *)0x0) {
      FUN_1400020a8();
      plVar15 = local_250;
    }
  }
  FUN_14029e626(plVar15[0x139] + 0x448);
  if (DAT_14c997128 == '\x01') {
    FUN_146ee3222(plVar15 + 0x56,DAT_14c75f330,DAT_14c75f334);
  }
  if (plVar15[0x38] != 0) {
    FUN_142a2c08e();
  }
  plVar15 = plStack_1f0;
  if (plStack_1f0 != (longlong *)0x0) {
    LOCK();
    plVar42 = plStack_1f0 + 1;
    *(int *)plVar42 = (int)*plVar42 + -1;
    UNLOCK();
    if ((int)*plVar42 == 0) {
      (**(code **)*plStack_1f0)(plStack_1f0);
      LOCK();
      piVar36 = (int *)((longlong)plVar15 + 0xc);
      *piVar36 = *piVar36 + -1;
      UNLOCK();
      if (*piVar36 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  plVar15 = plStack_200;
  if (plStack_200 != (longlong *)0x0) {
    LOCK();
    plVar42 = plStack_200 + 1;
    *(int *)plVar42 = (int)*plVar42 + -1;
    UNLOCK();
    if ((int)*plVar42 == 0) {
      (**(code **)*plStack_200)(plStack_200);
      LOCK();
      piVar36 = (int *)((longlong)plVar15 + 0xc);
      *piVar36 = *piVar36 + -1;
      UNLOCK();
      if (*piVar36 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  plVar15 = plStack_210;
  if (plStack_210 != (longlong *)0x0) {
    LOCK();
    plVar42 = plStack_210 + 1;
    *(int *)plVar42 = (int)*plVar42 + -1;
    UNLOCK();
    if ((int)*plVar42 == 0) {
      (**(code **)*plStack_210)(plStack_210);
      LOCK();
      piVar36 = (int *)((longlong)plVar15 + 0xc);
      *piVar36 = *piVar36 + -1;
      UNLOCK();
      if (*piVar36 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  plVar15 = plStack_220;
  if (plStack_220 != (longlong *)0x0) {
    LOCK();
    plVar42 = plStack_220 + 1;
    *(int *)plVar42 = (int)*plVar42 + -1;
    UNLOCK();
    if ((int)*plVar42 == 0) {
      (**(code **)*plStack_220)(plStack_220);
      LOCK();
      piVar36 = (int *)((longlong)plVar15 + 0xc);
      *piVar36 = *piVar36 + -1;
      UNLOCK();
      if (*piVar36 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
  if (0.0 < (double)param_1[0x3e]) {
    FUN_1403d45a2(param_1 + 0xe,*(undefined4 *)(param_1[0x139] + 0x358),lVar33);
  }
  if ((int)local_260[1] == *(int *)((longlong)local_260 + 0xc) + -1) {
    lVar33 = param_1[0x1c];
    iVar32 = *(int *)(lVar33 + 0x7c);
    FUN_140146c3d(*(undefined8 *)(lVar33 + 0x70),*(undefined4 *)(lVar33 + 0x78));
    *(undefined4 *)(lVar33 + 0x78) = 0;
    if ((iVar32 < 0) && (*(int *)(lVar33 + 0x7c) != 0)) {
      FUN_146e2e260(lVar33 + 0x70,0);
    }
    if ((longlong)(int)param_1[0x17e] != 0) {
      plVar42 = (longlong *)param_1[0x17d];
      plVar15 = plVar42 + (int)param_1[0x17e];
      do {
        plVar46 = (longlong *)*plVar42;
        if (plVar46 != (longlong *)0x0) {
          if (param_1[0x38] != 0) {
            FUN_14494ddfc(param_1[0x38],plVar46);
          }
          lVar33 = param_1[0x37];
          if (0 < (longlong)(int)lVar33) {
            lVar17 = param_1[0x36];
            lVar40 = 0;
            do {
              (**(code **)(**(longlong **)(lVar17 + lVar40) + 0xc0))
                        (*(longlong **)(lVar17 + lVar40),plVar46[0x24]);
              lVar40 = lVar40 + 8;
            } while ((longlong)(int)lVar33 * 8 != lVar40);
          }
          if (param_1[0x139] != 0) {
            FUN_14298b636(param_1[0x139] + 0x560,(int)plVar46[0x2a]);
          }
          (**(code **)(*plVar46 + 8))(plVar46,1);
        }
        plVar42 = plVar42 + 1;
      } while (plVar42 != plVar15);
    }
    *(undefined4 *)(param_1 + 0x17e) = 0;
    if (*(int *)((longlong)param_1 + 0xbf4) < 0) {
      FUN_146ee4d40(param_1 + 0x17d,0);
    }
    if (0 < (int)param_1[0x35]) {
      local_148 = (undefined1 ***)0x0;
      uStack_140 = (longlong *)0x0;
      iVar32 = (int)param_1[0x17a];
      if (iVar32 < 0) {
LAB_142a0d435:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar32);
      }
      if (iVar32 != 0) {
        FUN_146ee4da0(&local_148);
        lVar33 = param_1[0x17a];
        if ((longlong)(int)lVar33 != 0) {
          lVar17 = param_1[0x179];
          lVar40 = 0;
          do {
            plVar15 = uStack_140;
            uVar5 = *(undefined4 *)(lVar17 + 0x18 + lVar40);
            ppuVar18 = *(undefined1 ***)(lVar17 + lVar40);
            lVar44 = (longlong)(int)uStack_140;
            uVar21 = (int)uStack_140 + 1;
            uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,uVar21);
            if (uStack_140._4_4_ < uVar21) {
              FUN_146ee4df6(&local_148,(ulonglong)plVar15 & 0xffffffff);
            }
            *(undefined4 *)(local_148 + lVar44 * 2) = uVar5;
            local_148[lVar44 * 2 + 1] = ppuVar18;
            lVar40 = lVar40 + 0x20;
          } while ((longlong)(int)lVar33 * 0x20 != lVar40);
        }
      }
      lVar33 = param_1[0x35];
      if ((longlong)(int)lVar33 != 0) {
        lVar17 = param_1[0x34];
        lVar40 = 0;
        do {
          (**(code **)(**(longlong **)(lVar17 + lVar40) + 0xb8))
                    (*(longlong **)(lVar17 + lVar40),&local_148);
          lVar40 = lVar40 + 8;
        } while ((longlong)(int)lVar33 * 8 != lVar40);
      }
      if (local_148 != (undefined1 ***)0x0) {
        FUN_1400020a8();
      }
    }
    uVar23 = (longlong)(int)param_1[0x17a];
    if (0 < (longlong)(int)param_1[0x17a]) {
      do {
        lVar33 = (uVar23 - 1) * 0x20;
        if ((*(int *)(param_1[0x179] + 8 + lVar33) < (int)param_1[0x4d]) ||
           ((char)param_1[0x44] == '\x01')) {
          plVar15 = (longlong *)(param_1[0x179] + lVar33);
          lVar17 = param_1[0x37];
          if (0 < (longlong)(int)lVar17) {
            lVar40 = param_1[0x36];
            lVar44 = 0;
            do {
              (**(code **)(**(longlong **)(lVar40 + lVar44) + 0xc0))
                        (*(longlong **)(lVar40 + lVar44),*(undefined8 *)(*plVar15 + 0x50));
              lVar44 = lVar44 + 8;
            } while ((longlong)(int)lVar17 * 8 != lVar44);
          }
          lVar17 = param_1[0x139];
          lVar40 = plVar15[3];
          iVar32 = *(int *)(lVar17 + 0x340);
          *(uint *)(lVar17 + 0x340) = iVar32 + 1U;
          if (*(uint *)(lVar17 + 0x344) < iVar32 + 1U) {
            FUN_140543018((longlong *)(lVar17 + 0x338),iVar32);
          }
          *(int *)(*(longlong *)(lVar17 + 0x338) + (longlong)iVar32 * 4) = (int)lVar40;
          if (param_1[0x38] != 0) {
            FUN_14494ddfc(param_1[0x38],*plVar15);
          }
          if (plVar15[2] != 0) {
            FUN_1400c7952(param_1[0x139]);
          }
          plVar15 = (longlong *)*plVar15;
          if (plVar15 != (longlong *)0x0) {
            (**(code **)(*plVar15 + 8))(plVar15,1);
          }
          uVar21 = *(uint *)(param_1 + 0x17a);
          if (uVar23 != uVar21) {
            iVar32 = uVar21 - (int)uVar23;
            if (0 < iVar32) {
              iVar32 = 1;
            }
            memmove((void *)(lVar33 + param_1[0x179]),
                    (void *)((longlong)(int)(uVar21 - iVar32) * 0x20 + param_1[0x179]),
                    (longlong)iVar32 << 5);
            uVar21 = *(uint *)(param_1 + 0x17a);
          }
          *(uint *)(param_1 + 0x17a) = uVar21 - 1;
        }
        bVar7 = 1 < (longlong)uVar23;
        uVar23 = uVar23 - 1;
      } while (bVar7);
    }
    lVar33 = param_1[0x1c];
    iVar32 = *(int *)(lVar33 + 0x6c);
    FUN_140146c68(*(undefined8 *)(lVar33 + 0x60),*(undefined4 *)(lVar33 + 0x68));
    *(undefined4 *)(lVar33 + 0x68) = 0;
    if ((iVar32 < 0) && (*(int *)(lVar33 + 0x6c) != 0)) {
      FUN_14172c298(lVar33 + 0x60,0);
    }
    if ((int)param_1[0x17c] != 0) {
      local_148 = (undefined1 ***)param_1[0x17b];
      uStack_140 = (longlong *)CONCAT44(uStack_140._4_4_,(int)param_1[0x17c]);
      FUN_1429c6604(param_1[0x139] + 0x448);
      if ((longlong)(int)param_1[0x17c] != 0) {
        plVar15 = (longlong *)param_1[0x17b];
        local_270 = plVar15 + (int)param_1[0x17c];
        do {
          plVar42 = (longlong *)*plVar15;
          if (0 < (int)param_1[0x37]) {
            local_260 = plVar42;
            FUN_141730ef0(plVar42,&local_250);
            if ((longlong)local_248._0_4_ != 0) {
              plVar42 = local_250 + local_248._0_4_;
              plVar46 = local_250;
              do {
                lVar33 = param_1[0x37];
                if ((longlong)(int)lVar33 != 0) {
                  lVar17 = *plVar46;
                  lVar40 = param_1[0x36];
                  lVar44 = 0;
                  do {
                    (**(code **)(**(longlong **)(lVar40 + lVar44) + 0xc0))
                              (*(longlong **)(lVar40 + lVar44),lVar17);
                    lVar44 = lVar44 + 8;
                  } while ((longlong)(int)lVar33 * 8 != lVar44);
                }
                plVar46 = plVar46 + 1;
              } while (plVar46 != plVar42);
            }
            plVar42 = local_260;
            if (local_250 != (longlong *)0x0) {
              FUN_1400020a8(local_250);
            }
          }
          if (param_1[0x38] != 0) {
            FUN_14494ddfc(param_1[0x38],plVar42);
          }
          FUN_142a1e91a(plVar42,param_1);
          if (plVar42 != (longlong *)0x0) {
            (**(code **)(*plVar42 + 8))(plVar42,1);
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != local_270);
      }
      *(undefined4 *)(param_1 + 0x17c) = 0;
      if (*(int *)((longlong)param_1 + 0xbe4) < 0) {
        FUN_14172f7b2(param_1 + 0x17b,0);
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a0d514 FUN_142a0d514 body=69 status=ok
// SIG undefined FUN_142a0d514(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0d514(void)

{
  _DAT_14c997428 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0d556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997430,1);
  return;
}



// FUNCTION 142a0d55a FUN_142a0d55a body=838 status=ok
// SIG undefined FUN_142a0d55a(void)

void FUN_142a0d55a(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  int iVar10;
  PSRWLOCK SRWLock;
  int iVar11;
  void *_Dst;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined8 *local_c8;
  int local_b8;
  undefined4 local_b4;
  longlong local_b0;
  double local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  code *local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  SRWLock = (PSRWLOCK)0x0;
  if (DAT_14c992a90 != '\0') {
    SRWLock = (PSRWLOCK)(param_1 + 0x128);
  }
  local_b8 = param_4;
  local_b4 = param_3;
  if (SRWLock != (PSRWLOCK)0x0) {
    AcquireSRWLockExclusive(SRWLock);
  }
  lVar3 = *(longlong *)(param_1 + 0x98);
  FUN_1403319d6(lVar3,lVar3 + 0x160);
  uVar2 = *(uint *)(lVar3 + 0x270);
  plVar1 = (longlong *)(lVar3 + 0x140);
  iVar11 = *(int *)(lVar3 + 0x148);
  if (iVar11 < (int)uVar2) {
    *(uint *)(lVar3 + 0x148) = uVar2;
    if ((uint)(*(int *)(lVar3 + 0x14c) - iVar11) < uVar2 - iVar11) {
      FUN_14172f350(plVar1,iVar11);
    }
    FUN_142a0f533((longlong)iVar11 * 0x30 + *plVar1,uVar2 - iVar11);
  }
  else {
    if ((int)uVar2 < 0) goto LAB_142a0d874;
    if ((int)uVar2 < iVar11) {
      *(uint *)(lVar3 + 0x148) = uVar2;
      FUN_14172f464(plVar1);
    }
  }
  plVar1 = (longlong *)(lVar3 + 0x150);
  iVar11 = *(int *)(lVar3 + 0x158);
  if (iVar11 < (int)uVar2) {
    *(uint *)(lVar3 + 0x158) = uVar2;
    if ((uint)(*(int *)(lVar3 + 0x15c) - iVar11) < uVar2 - iVar11) {
      FUN_14172f57a(plVar1,iVar11);
    }
    FUN_142a0f558((longlong)iVar11 * 0x40 + *plVar1,uVar2 - iVar11);
  }
  else {
    if ((int)uVar2 < 0) {
LAB_142a0d874:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((ulonglong)uVar2);
    }
    iVar10 = iVar11 - uVar2;
    if (iVar10 != 0 && (int)uVar2 <= iVar11) {
      _Dst = (void *)((ulonglong)uVar2 * 0x40 + *(longlong *)(lVar3 + 0x150));
      FUN_1413d60b3(_Dst,iVar10);
      iVar7 = *(int *)(lVar3 + 0x158) - iVar11;
      if (iVar7 != 0) {
        memmove(_Dst,(void *)((longlong)iVar10 * 0x40 + (longlong)_Dst),(longlong)iVar7 << 6);
        iVar11 = *(int *)(lVar3 + 0x158);
      }
      *(int *)(lVar3 + 0x158) = iVar11 - iVar10;
      FUN_14172f67a(plVar1);
    }
  }
  local_a8 = 1.0 / (double)local_b8;
  local_98 = *(undefined8 *)(lVar3 + 0x268);
  local_88 = &local_b0;
  local_78 = &local_90;
  local_c8 = &local_70;
  local_70 = 0;
  local_68 = 0;
  local_80 = FUN_142a10812;
  local_d0 = 0;
  local_b0 = param_1;
  local_a0 = lVar3;
  local_90 = lVar3 + 0x160;
  FUN_1411ca36e(L"Chaos.PF",*(undefined4 *)(lVar3 + 0x194),1);
  lVar3 = *(longlong *)(param_1 + 0x9c8);
  lVar4 = *(longlong *)(lVar3 + 0xea0);
  if (*(int *)(lVar4 + 0xa0) != -1) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *puVar8 = 0;
    puVar8[1] = lVar4;
    if (puVar8 != (undefined8 *)0x0) {
      puVar5 = *(undefined8 **)(lVar3 + 0xeb0);
      *(undefined8 **)(lVar3 + 0xeb0) = puVar8;
      *puVar5 = puVar8;
    }
    uVar9 = FUN_140f61f4c(lVar3 + 0xdb0);
    *(undefined8 *)(lVar3 + 0xea0) = uVar9;
  }
  uVar6 = local_b4;
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0x220) == '\0')) {
    (**(code **)(*plVar1 + 0x20))(plVar1,*(undefined4 *)(param_1 + 0x88),local_b4);
  }
  FUN_1449623e4(param_1 + 0x70,param_2,uVar6,*(undefined1 *)(param_1 + 0x221));
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a0d8a2 FUN_142a0d8a2 body=4952 status=ok
// SIG undefined FUN_142a0d8a2(void)

void FUN_142a0d8a2(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong *plVar22;
  uint *puVar23;
  int iVar24;
  longlong lVar25;
  longlong *plVar26;
  longlong lVar27;
  longlong *plVar28;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined1 *local_120;
  longlong local_110;
  int local_104;
  longlong *local_100;
  longlong *local_f8;
  longlong *local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8;
  int local_cc;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  ulonglong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_74 [4];
  undefined8 *local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(longlong *)(param_1 + 0x90) = param_2;
  iVar24 = *(int *)(param_2 + 0x2a8);
  iVar13 = *(int *)(param_1 + 0x148) + iVar24;
  local_110 = param_2;
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  plVar26 = (longlong *)(param_1 + 0x140);
  if (*(int *)(param_1 + 0x14c) < iVar13) {
    FUN_1462858c6(plVar26);
    iVar24 = *(int *)(local_110 + 0x2a8);
  }
  if (iVar24 != 0) {
    lVar18 = *(longlong *)(local_110 + 0x2a0);
    local_f0 = (longlong *)(param_1 + 0x150);
    local_d8 = (longlong *)(param_1 + 0x160);
    local_100 = (longlong *)(param_1 + 0x170);
    local_f8 = (longlong *)(param_1 + 0x180);
    local_c8 = (longlong *)(param_1 + 400);
    local_e0 = (longlong *)(param_1 + 0x1a0);
    lVar25 = 0;
    do {
      lVar27 = *(longlong *)(lVar18 + lVar25);
      uVar3 = *(ushort *)(lVar27 + 0x40);
      if ((uVar3 & 1) != 0) {
        iVar13 = *(int *)(param_1 + 0x148);
        *(uint *)(param_1 + 0x148) = iVar13 + 1U;
        if (*(uint *)(param_1 + 0x14c) < iVar13 + 1U) {
          FUN_1411dc85a(plVar26,iVar13);
        }
        *(longlong *)(*plVar26 + (longlong)iVar13 * 8) = lVar27;
        uVar3 = *(ushort *)(lVar27 + 0x40);
      }
      if ((uVar3 & 2) != 0) {
        iVar13 = *(int *)(param_1 + 0x158);
        *(uint *)(param_1 + 0x158) = iVar13 + 1U;
        if (*(uint *)(param_1 + 0x15c) < iVar13 + 1U) {
          FUN_1411dc85a(local_f0,iVar13);
        }
        *(longlong *)(*local_f0 + (longlong)iVar13 * 8) = lVar27;
        uVar3 = *(ushort *)(lVar27 + 0x40);
      }
      if ((uVar3 & 4) != 0) {
        iVar13 = *(int *)(param_1 + 0x168);
        *(uint *)(param_1 + 0x168) = iVar13 + 1U;
        if (*(uint *)(param_1 + 0x16c) < iVar13 + 1U) {
          FUN_1411dc85a(local_d8,iVar13);
        }
        *(longlong *)(*local_d8 + (longlong)iVar13 * 8) = lVar27;
        uVar3 = *(ushort *)(lVar27 + 0x40);
      }
      if ((uVar3 & 0x20) != 0) {
        iVar13 = *(int *)(param_1 + 0x178);
        *(uint *)(param_1 + 0x178) = iVar13 + 1U;
        if (*(uint *)(param_1 + 0x17c) < iVar13 + 1U) {
          FUN_1411dc85a(local_100,iVar13);
        }
        *(longlong *)(*local_100 + (longlong)iVar13 * 8) = lVar27;
        uVar3 = *(ushort *)(lVar27 + 0x40);
      }
      if ((uVar3 & 8) != 0) {
        iVar13 = *(int *)(param_1 + 0x188);
        *(uint *)(param_1 + 0x188) = iVar13 + 1U;
        if (*(uint *)(param_1 + 0x18c) < iVar13 + 1U) {
          FUN_1411dc85a(local_f8,iVar13);
        }
        *(longlong *)(*local_f8 + (longlong)iVar13 * 8) = lVar27;
        uVar3 = *(ushort *)(lVar27 + 0x40);
      }
      if ((uVar3 & 0x40) != 0) {
        iVar13 = *(int *)(param_1 + 0x198);
        *(uint *)(param_1 + 0x198) = iVar13 + 1U;
        if (*(uint *)(param_1 + 0x19c) < iVar13 + 1U) {
          FUN_1411dc85a(local_c8,iVar13);
        }
        *(longlong *)(*local_c8 + (longlong)iVar13 * 8) = lVar27;
        uVar3 = *(ushort *)(lVar27 + 0x40);
      }
      if ((char)uVar3 < '\0') {
        iVar13 = *(int *)(param_1 + 0x1a8);
        *(uint *)(param_1 + 0x1a8) = iVar13 + 1U;
        if (*(uint *)(param_1 + 0x1ac) < iVar13 + 1U) {
          FUN_1411dc85a(local_e0,iVar13);
        }
        *(longlong *)(*local_e0 + (longlong)iVar13 * 8) = lVar27;
        uVar3 = *(ushort *)(lVar27 + 0x40);
      }
      uVar5 = (uint)uVar3;
      if (((uVar3 >> 9 & 1) != 0) &&
         (plVar11 = *(longlong **)(param_1 + 0x1c8), plVar11 != (longlong *)0x0)) {
        (**(code **)(*plVar11 + 0x40))(plVar11,lVar27);
        uVar5 = (uint)*(ushort *)(lVar27 + 0x40);
      }
      if ((uVar5 >> 10 & 1) != 0) {
        iVar13 = *(int *)(param_1 + 0x1b8);
        *(uint *)(param_1 + 0x1b8) = iVar13 + 1U;
        if (*(uint *)(param_1 + 0x1bc) < iVar13 + 1U) {
          FUN_1411dc85a((longlong *)(param_1 + 0x1b0),iVar13);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x1b0) + (longlong)iVar13 * 8) = lVar27;
      }
      lVar25 = lVar25 + 8;
    } while ((longlong)iVar24 * 8 != lVar25);
  }
  if ((longlong)*(int *)(local_110 + 0x2c8) != 0) {
    plVar11 = *(longlong **)(local_110 + 0x2c0);
    plVar6 = plVar11 + (longlong)*(int *)(local_110 + 0x2c8) * 2;
    do {
      *(longlong *)(*plVar11 + 0x28) = plVar11[1];
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar6);
  }
  iVar24 = *(int *)(local_110 + 0x2b8);
  if ((longlong)iVar24 != 0) {
    lVar18 = *(longlong *)(local_110 + 0x2b0);
    lVar25 = 0;
    do {
      lVar27 = *(longlong *)(lVar18 + lVar25);
      *(undefined1 *)(lVar27 + 8) = 1;
      if (((*(byte *)(lVar27 + 0x41) & 2) != 0) &&
         (*(longlong **)(param_1 + 0x1c8) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(param_1 + 0x1c8) + 0x48))();
      }
      lVar25 = lVar25 + 8;
    } while ((longlong)iVar24 * 8 != lVar25);
  }
  uVar5 = *(uint *)(param_1 + 0x148);
  if (0 < (longlong)(int)uVar5) {
    iVar24 = -uVar5;
    uVar7 = (ulonglong)uVar5;
    uVar17 = (longlong)(int)uVar5;
    do {
      iVar13 = (int)uVar7;
      lVar18 = *plVar26;
      if (*(char *)(*(longlong *)(lVar18 + -8 + uVar17 * 8) + 8) == '\x01') {
        if (uVar17 != uVar7) {
          iVar19 = iVar13 + iVar24;
          if (0 < iVar19) {
            iVar19 = 1;
          }
          memmove((void *)(lVar18 + uVar17 * 8 + -8),
                  (void *)(lVar18 + (longlong)(iVar13 - iVar19) * 8),(longlong)iVar19 << 3);
          iVar13 = *(int *)(param_1 + 0x148);
        }
        uVar7 = (ulonglong)(iVar13 - 1U);
        *(uint *)(param_1 + 0x148) = iVar13 - 1U;
      }
      iVar24 = iVar24 + 1;
      bVar4 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x158);
  if (0 < (longlong)(int)uVar5) {
    iVar24 = -uVar5;
    uVar7 = (ulonglong)uVar5;
    uVar17 = (longlong)(int)uVar5;
    do {
      iVar13 = (int)uVar7;
      lVar18 = *(longlong *)(param_1 + 0x150);
      if (*(char *)(*(longlong *)(lVar18 + -8 + uVar17 * 8) + 8) == '\x01') {
        if (uVar17 != uVar7) {
          iVar19 = iVar13 + iVar24;
          if (0 < iVar19) {
            iVar19 = 1;
          }
          memmove((void *)(lVar18 + uVar17 * 8 + -8),
                  (void *)(lVar18 + (longlong)(iVar13 - iVar19) * 8),(longlong)iVar19 << 3);
          iVar13 = *(int *)(param_1 + 0x158);
        }
        uVar7 = (ulonglong)(iVar13 - 1U);
        *(uint *)(param_1 + 0x158) = iVar13 - 1U;
      }
      iVar24 = iVar24 + 1;
      bVar4 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x168);
  if (0 < (longlong)(int)uVar5) {
    iVar24 = -uVar5;
    uVar7 = (ulonglong)uVar5;
    uVar17 = (longlong)(int)uVar5;
    do {
      iVar13 = (int)uVar7;
      lVar18 = *(longlong *)(param_1 + 0x160);
      if (*(char *)(*(longlong *)(lVar18 + -8 + uVar17 * 8) + 8) == '\x01') {
        if (uVar17 != uVar7) {
          iVar19 = iVar13 + iVar24;
          if (0 < iVar19) {
            iVar19 = 1;
          }
          memmove((void *)(lVar18 + uVar17 * 8 + -8),
                  (void *)(lVar18 + (longlong)(iVar13 - iVar19) * 8),(longlong)iVar19 << 3);
          iVar13 = *(int *)(param_1 + 0x168);
        }
        uVar7 = (ulonglong)(iVar13 - 1U);
        *(uint *)(param_1 + 0x168) = iVar13 - 1U;
      }
      iVar24 = iVar24 + 1;
      bVar4 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x178);
  if (0 < (longlong)(int)uVar5) {
    iVar24 = -uVar5;
    uVar7 = (ulonglong)uVar5;
    uVar17 = (longlong)(int)uVar5;
    do {
      iVar13 = (int)uVar7;
      lVar18 = *(longlong *)(param_1 + 0x170);
      if (*(char *)(*(longlong *)(lVar18 + -8 + uVar17 * 8) + 8) == '\x01') {
        if (uVar17 != uVar7) {
          iVar19 = iVar13 + iVar24;
          if (0 < iVar19) {
            iVar19 = 1;
          }
          memmove((void *)(lVar18 + uVar17 * 8 + -8),
                  (void *)(lVar18 + (longlong)(iVar13 - iVar19) * 8),(longlong)iVar19 << 3);
          iVar13 = *(int *)(param_1 + 0x178);
        }
        uVar7 = (ulonglong)(iVar13 - 1U);
        *(uint *)(param_1 + 0x178) = iVar13 - 1U;
      }
      iVar24 = iVar24 + 1;
      bVar4 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x188);
  if (0 < (longlong)(int)uVar5) {
    iVar24 = -uVar5;
    uVar7 = (ulonglong)uVar5;
    uVar17 = (longlong)(int)uVar5;
    do {
      iVar13 = (int)uVar7;
      lVar18 = *(longlong *)(param_1 + 0x180);
      if (*(char *)(*(longlong *)(lVar18 + -8 + uVar17 * 8) + 8) == '\x01') {
        if (uVar17 != uVar7) {
          iVar19 = iVar13 + iVar24;
          if (0 < iVar19) {
            iVar19 = 1;
          }
          memmove((void *)(lVar18 + uVar17 * 8 + -8),
                  (void *)(lVar18 + (longlong)(iVar13 - iVar19) * 8),(longlong)iVar19 << 3);
          iVar13 = *(int *)(param_1 + 0x188);
        }
        uVar7 = (ulonglong)(iVar13 - 1U);
        *(uint *)(param_1 + 0x188) = iVar13 - 1U;
      }
      iVar24 = iVar24 + 1;
      bVar4 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x198);
  if (0 < (longlong)(int)uVar5) {
    iVar24 = -uVar5;
    uVar7 = (ulonglong)uVar5;
    uVar17 = (longlong)(int)uVar5;
    do {
      iVar13 = (int)uVar7;
      lVar18 = *(longlong *)(param_1 + 400);
      if (*(char *)(*(longlong *)(lVar18 + -8 + uVar17 * 8) + 8) == '\x01') {
        if (uVar17 != uVar7) {
          iVar19 = iVar13 + iVar24;
          if (0 < iVar19) {
            iVar19 = 1;
          }
          memmove((void *)(lVar18 + uVar17 * 8 + -8),
                  (void *)(lVar18 + (longlong)(iVar13 - iVar19) * 8),(longlong)iVar19 << 3);
          iVar13 = *(int *)(param_1 + 0x198);
        }
        uVar7 = (ulonglong)(iVar13 - 1U);
        *(uint *)(param_1 + 0x198) = iVar13 - 1U;
      }
      iVar24 = iVar24 + 1;
      bVar4 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x1a8);
  if (0 < (longlong)(int)uVar5) {
    iVar24 = -uVar5;
    uVar7 = (ulonglong)uVar5;
    uVar17 = (longlong)(int)uVar5;
    do {
      iVar13 = (int)uVar7;
      lVar18 = *(longlong *)(param_1 + 0x1a0);
      if (*(char *)(*(longlong *)(lVar18 + -8 + uVar17 * 8) + 8) == '\x01') {
        if (uVar17 != uVar7) {
          iVar19 = iVar13 + iVar24;
          if (0 < iVar19) {
            iVar19 = 1;
          }
          memmove((void *)(lVar18 + uVar17 * 8 + -8),
                  (void *)(lVar18 + (longlong)(iVar13 - iVar19) * 8),(longlong)iVar19 << 3);
          iVar13 = *(int *)(param_1 + 0x1a8);
        }
        uVar7 = (ulonglong)(iVar13 - 1U);
        *(uint *)(param_1 + 0x1a8) = iVar13 - 1U;
      }
      iVar24 = iVar24 + 1;
      bVar4 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar4);
  }
  uVar5 = *(uint *)(param_1 + 0x1b8);
  if (0 < (longlong)(int)uVar5) {
    iVar24 = -uVar5;
    uVar7 = (ulonglong)uVar5;
    uVar17 = (longlong)(int)uVar5;
    do {
      iVar13 = (int)uVar7;
      lVar18 = *(longlong *)(param_1 + 0x1b0);
      if (*(char *)(*(longlong *)(lVar18 + -8 + uVar17 * 8) + 8) == '\x01') {
        if (uVar17 != uVar7) {
          iVar19 = iVar13 + iVar24;
          if (0 < iVar19) {
            iVar19 = 1;
          }
          memmove((void *)(lVar18 + uVar17 * 8 + -8),
                  (void *)(lVar18 + (longlong)(iVar13 - iVar19) * 8),(longlong)iVar19 << 3);
          iVar13 = *(int *)(param_1 + 0x1b8);
        }
        uVar7 = (ulonglong)(iVar13 - 1U);
        *(uint *)(param_1 + 0x1b8) = iVar13 - 1U;
      }
      iVar24 = iVar24 + 1;
      bVar4 = 1 < uVar17;
      uVar17 = uVar17 - 1;
    } while (bVar4);
  }
  local_90 = local_110 + 0x2c0;
  local_d8 = *(longlong **)(param_1 + 0x1c0);
  local_c8 = *(longlong **)(local_110 + 0x268);
  puVar1 = *(undefined1 **)(local_110 + 0x280);
  local_f0 = (longlong *)(local_110 + 0x198);
  local_f8 = (longlong *)(param_1 + 0x2b0);
  local_b8 = (longlong *)(param_1 + 0xa50);
  local_e0 = (longlong *)(param_1 + 0xa30);
  local_98 = (longlong *)(param_1 + 0x2c0);
  local_c0 = (longlong *)(param_1 + 0x9f8);
  local_e8 = param_1 + 0xa08;
  local_88 = 0;
  uStack_80 = 0;
  plVar26 = (longlong *)0x0;
  do {
    lVar18 = (longlong)*(int *)((longlong)local_f0 + 8 + (longlong)plVar26 * 0x10);
    if (lVar18 != 0) {
      plVar11 = *(longlong **)((longlong)local_f0 + (longlong)plVar26 * 0x10);
      plVar6 = plVar11 + lVar18 * 4;
      uVar17 = 0;
      local_100 = plVar26;
      do {
        plVar22 = local_f8;
        lVar18 = *plVar11;
        if ((*(longlong *)(lVar18 + 8) == param_1) &&
           (*(int *)(lVar18 + 0x3c) != *(int *)(param_1 + 0x268))) {
          iVar24 = *(int *)(lVar18 + 0x1c);
          if (iVar24 == 2) {
            if ((*(byte *)(lVar18 + 0x319) & 8) == 0) {
              FUN_142a158ec(lVar18,param_1,local_f8);
              iVar24 = *(int *)(param_1 + 0xa38);
              *(uint *)(param_1 + 0xa38) = iVar24 + 1U;
              if (*(uint *)(param_1 + 0xa3c) < iVar24 + 1U) {
                FUN_14172f9f2(local_e0,iVar24);
              }
              *(longlong *)(*local_e0 + (longlong)iVar24 * 8) = lVar18;
            }
          }
          else if (iVar24 == 0xc) {
            if ((*(byte *)(lVar18 + 0x40) & 1) == 0) {
              FUN_142a1188e(lVar18,param_1,local_f8);
              iVar24 = *(int *)(param_1 + 0xa58);
              *(uint *)(param_1 + 0xa58) = iVar24 + 1U;
              if (*(uint *)(param_1 + 0xa5c) < iVar24 + 1U) {
                FUN_146ee4cba(local_b8,iVar24);
              }
              *(longlong *)(*local_b8 + (longlong)iVar24 * 8) = lVar18;
            }
            FUN_142a11baa(lVar18,local_110,uVar17 & 0xffffffff,plVar11);
          }
          else if (iVar24 == 0xb) {
            iVar24 = *(int *)(lVar18 + 0x38);
            if (iVar24 == -1) {
              lVar25 = uVar17 * 0x20 + *(longlong *)(local_110 + 0x40);
              if ((*(byte *)(plVar11 + 1) & 0x10) == 0) {
                lVar25 = 0;
              }
              puVar23 = (uint *)(lVar25 + 8);
              if (lVar25 == 0) {
                puVar23 = (uint *)0x0;
              }
              cVar2 = *(char *)((longlong)plVar11 + 0xc);
              if (cVar2 == '\0') {
                local_74 = (undefined1  [4])((uint)(uint3)local_74._1_3_ << 8);
                local_120 = local_74;
                local_128 = local_f8;
                local_104 = iVar24;
                FUN_144833e08(local_f8,local_70,1,puVar23);
LAB_142a0e25b:
                FUN_1447dd35a(plVar22);
                plVar28 = (longlong *)*local_70[0];
                iVar24 = local_104;
                if (local_70[0] != (undefined8 *)0x0) {
                  FUN_1400020a8();
                  iVar24 = local_104;
                }
              }
              else if (cVar2 == '\x02') {
                local_74 = (undefined1  [4])0x10000;
                local_128 = (longlong *)local_74;
                FUN_142a10a5a(local_f8,local_70,1,puVar23);
                plVar28 = (longlong *)*local_70[0];
                if (local_70[0] != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
                plVar26 = local_100;
                iVar24 = -1;
              }
              else {
                plVar28 = (longlong *)0x0;
                if (cVar2 == '\x01') {
                  local_74 = (undefined1  [4])((uint)(uint3)local_74._1_3_ << 8);
                  local_120 = local_74;
                  local_128 = local_98;
                  local_104 = iVar24;
                  FUN_146ee4e7c(local_f8,local_70,1,puVar23);
                  goto LAB_142a0e25b;
                }
              }
              uVar7 = uStack_80;
              *(longlong **)(lVar18 + 0x48) = plVar28;
              *(undefined8 *)(*(longlong *)(*plVar28 + 0xb0) + (longlong)(int)plVar28[1] * 8) =
                   *(undefined8 *)(lVar18 + 0x40);
              if (0 < *(int *)(param_1 + 0x198)) {
                lVar25 = (longlong)(int)uStack_80;
                uVar5 = (int)uStack_80 + 1;
                uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
                if (uStack_80._4_4_ < uVar5) {
                  FUN_140711e5c(&local_88,uVar7 & 0xffffffff);
                  plVar26 = local_100;
                }
                *(longlong *)(local_88 + lVar25 * 8) = lVar18;
              }
              if (puVar23 != (uint *)0x0) {
                uVar5 = *puVar23;
                lVar25 = (longlong)(int)uVar5;
                uVar7 = (ulonglong)uVar5;
                if ((lVar25 < 0) || (*(int *)(param_1 + 0xa20) <= (int)uVar5)) {
LAB_142a0e38b:
                  iVar13 = *(int *)(param_1 + 0xa00);
                  if ((int)uVar5 < iVar13) {
                    lVar27 = *local_c0;
                  }
                  else {
                    iVar19 = uVar5 + 1;
                    *(int *)(param_1 + 0xa00) = iVar19;
                    if ((uint)(*(int *)(param_1 + 0xa04) - iVar13) < (uint)(iVar19 - iVar13)) {
                      FUN_14055ddfe(local_c0);
                      iVar19 = *(int *)(param_1 + 0xa00);
                      plVar26 = local_100;
                    }
                    lVar27 = *(longlong *)(param_1 + 0x9f8);
                    iVar13 = *(int *)(param_1 + 0xa20);
                    if (iVar13 < iVar19) {
                      do {
                        *(undefined4 *)(lVar27 + (longlong)iVar13 * 8) = 0xffffffff;
                        iVar19 = *(int *)(param_1 + 0xa28);
                        *(int *)(lVar27 + 4 + (longlong)iVar13 * 8) = iVar19;
                        if (*(int *)(param_1 + 0xa2c) != 0) {
                          *(int *)(lVar27 + (longlong)iVar19 * 8) = iVar13;
                        }
                        *(int *)(param_1 + 0xa28) = iVar13;
                        uVar10 = *(uint *)(param_1 + 0xa20);
                        uVar16 = (ulonglong)uVar10;
                        if (uVar10 == 0) {
                          iVar13 = -1;
                        }
                        else {
                          iVar13 = uVar10 + 0x1e;
                          if (-1 < (int)(uVar10 - 1)) {
                            iVar13 = uVar10 - 1;
                          }
                          iVar13 = iVar13 >> 5;
                        }
                        iVar19 = uVar10 + 1;
                        uVar14 = uVar10 + 0x1f;
                        if (-1 < (int)uVar10) {
                          uVar14 = uVar10;
                        }
                        iVar20 = (int)uVar14 >> 5;
                        if (iVar20 == iVar13) {
                          *(int *)(param_1 + 0xa20) = iVar19;
                        }
                        else {
                          local_cc = iVar20;
                          if (*(int *)(param_1 + 0xa24) <= (int)uVar10) {
                            local_104 = iVar24;
                            local_a8 = uVar16;
                            local_a0 = uVar7;
                            if (uVar10 + 0x20 < 0xa0) {
                              iVar24 = 0x80;
                            }
                            else {
                              uVar10 = uVar10 + 0x20 >> 5;
                              local_b0 = (ulonglong)uVar10;
                              if (*(int *)(param_1 + 0xa24) + 0x1fU < 0xa0) {
                                uVar14 = 4;
                                if (4 < uVar10) {
                                  uVar14 = uVar10;
                                }
                              }
                              else {
                                uVar14 = uVar10 + (uVar10 * 3 >> 3) + 0x10;
                              }
                              uVar7 = (ulonglong)(uVar14 * 4);
                              if (DAT_14c872d28 != (longlong *)0x0) {
                                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                  uVar10 = (uint)(uVar7 + 0xf);
                                  if (uVar14 < 0x1ffd) {
                                    uVar7 = (ulonglong)
                                            (ushort)(&DAT_14c841d90)
                                                    [0x32 - (byte)(&DAT_14c841e00)[uVar7 + 0xf >> 4]
                                                    ];
                                  }
                                  else {
                                    uVar12 = (ulonglong)(uVar10 & 0xfffffff0);
                                    if (uVar12 < 0x7ff1) {
                                      bVar9 = (&DAT_14c841e00)[uVar10 >> 4];
                                      uVar15 = 0x32;
                                      if (0x32 < bVar9) {
                                        uVar15 = (ulonglong)bVar9;
                                      }
                                      uVar21 = 0x32 - (ulonglong)bVar9;
                                      do {
                                        uVar7 = (ulonglong)
                                                (ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                                        if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0)
                                        goto LAB_142a0e649;
                                        lVar8 = uVar15 + 1 + uVar21;
                                        uVar21 = uVar21 - 1;
                                      } while (lVar8 != 0x33);
                                    }
                                    uVar7 = (ulonglong)DAT_14c841df8;
                                    if (DAT_14c841df8 < 0x11) {
                                      uVar7 = 0x10;
                                    }
                                    uVar7 = -uVar7 & (uVar12 + uVar7) - 1;
                                  }
                                }
                                else {
                                  uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                    (DAT_14c872d28,uVar7,0);
                                  uVar16 = (ulonglong)*(uint *)(param_1 + 0xa20);
                                }
                              }
LAB_142a0e649:
                              iVar13 = (int)(uVar7 >> 2);
                              iVar24 = iVar13 << 5;
                              if (iVar13 < (int)local_b0) {
                                iVar24 = -0x20;
                              }
                            }
                            *(int *)(param_1 + 0xa24) = iVar24;
                            FUN_1446efbd8(local_e8,uVar16);
                            iVar19 = *(int *)(param_1 + 0xa20) + 1;
                            uVar7 = local_a0;
                            uVar16 = local_a8;
                            iVar24 = local_104;
                          }
                          iVar13 = iVar19 + 0x1f;
                          if (-1 < iVar19) {
                            iVar13 = iVar19;
                          }
                          *(int *)(param_1 + 0xa20) = iVar19;
                          iVar20 = local_cc;
                          if (iVar19 % 0x20 != 0) {
                            lVar8 = *(longlong *)(param_1 + 0xa18);
                            if (*(longlong *)(param_1 + 0xa18) == 0) {
                              lVar8 = local_e8;
                            }
                            bVar9 = -(char)(iVar19 % 0x20);
                            *(uint *)(lVar8 + (longlong)(iVar13 >> 5) * 4) =
                                 (uint)(*(int *)(lVar8 + (longlong)(iVar13 >> 5) * 4) <<
                                       (bVar9 & 0x1f)) >> (bVar9 & 0x1f);
                          }
                        }
                        lVar8 = *(longlong *)(param_1 + 0xa18);
                        if (*(longlong *)(param_1 + 0xa18) == 0) {
                          lVar8 = local_e8;
                        }
                        bVar9 = (byte)uVar16 & 0x1f;
                        puVar23 = (uint *)(lVar8 + (longlong)iVar20 * 4);
                        *puVar23 = *puVar23 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
                        *(int *)(param_1 + 0xa2c) = *(int *)(param_1 + 0xa2c) + 1;
                        iVar13 = *(int *)(param_1 + 0xa20);
                      } while (iVar13 < *(int *)(param_1 + 0xa00));
                    }
                  }
                  *(int *)(param_1 + 0xa2c) = *(int *)(param_1 + 0xa2c) + -1;
                  iVar13 = *(int *)(lVar27 + lVar25 * 8);
                  iVar19 = *(int *)(lVar27 + 4 + lVar25 * 8);
                  if ((longlong)iVar13 == -1) {
                    *(int *)(param_1 + 0xa28) = iVar19;
                  }
                  else {
                    *(int *)(lVar27 + 4 + (longlong)iVar13 * 8) = iVar19;
                  }
                  if (iVar19 != -1) {
                    *(int *)(lVar27 + (longlong)iVar19 * 8) = iVar13;
                  }
                  lVar27 = *(longlong *)(param_1 + 0xa18);
                  if (*(longlong *)(param_1 + 0xa18) == 0) {
                    lVar27 = local_e8;
                  }
                  iVar13 = (int)uVar7;
                  iVar19 = iVar13 + 0x1f;
                  if (-1 < iVar13) {
                    iVar19 = iVar13;
                  }
                  puVar23 = (uint *)(lVar27 + (longlong)(iVar19 >> 5) * 4);
                  *puVar23 = *puVar23 | 1 << ((byte)uVar5 & 0x1f);
                  plVar22 = (longlong *)(lVar25 * 8 + *(longlong *)(param_1 + 0x9f8));
                }
                else {
                  lVar27 = *(longlong *)(param_1 + 0xa18);
                  if (*(longlong *)(param_1 + 0xa18) == 0) {
                    lVar27 = local_e8;
                  }
                  if ((*(uint *)(lVar27 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0)
                  goto LAB_142a0e38b;
                  plVar22 = (longlong *)(uVar7 * 8 + *local_c0);
                }
                *plVar22 = lVar18;
              }
            }
            plVar22 = local_c8;
            lVar25 = local_110;
            if (*(longlong *)(lVar18 + 0x48) != 0) {
              if (local_d8 != (longlong *)0x0) {
                local_128 = local_c8;
                FUN_14498a560(local_d8,local_110,uVar17 & 0xffffffff,plVar11);
              }
              local_128 = plVar22;
              local_120 = puVar1;
              FUN_1447e7716(lVar18,lVar25,uVar17 & 0xffffffff,plVar11);
              plVar26 = local_100;
            }
            if (iVar24 == -1) {
              plVar22 = *(longlong **)(lVar18 + 0x48);
              if ((plVar22 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar22 + 0xc))) {
                lVar25 = (longlong)(int)plVar22[1] * 0x10;
                *(undefined1 *)(*(longlong *)(*plVar22 + 0x2c0) + 0xc + lVar25) =
                     *(undefined1 *)(*(longlong *)(*plVar22 + 0x2c0) + 0xb + lVar25);
              }
              *(longlong *)(*(longlong *)(*plVar22 + 200) + (longlong)(int)plVar22[1] * 8) = lVar18;
              FUN_14172fb54(*(undefined8 *)(param_1 + 0x9c8));
              iVar24 = *(int *)(param_1 + 0x268);
              iVar13 = *(int *)(lVar18 + 0x38);
              if (iVar13 != -1 && iVar13 != iVar24) {
                *(int *)(lVar18 + 0x3c) = iVar13;
              }
              *(int *)(lVar18 + 0x38) = iVar24;
            }
          }
        }
        uVar17 = uVar17 + 1;
        plVar11 = plVar11 + 4;
      } while (plVar11 != plVar6);
    }
    plVar26 = (longlong *)((longlong)plVar26 + 1);
    if (plVar26 == (longlong *)0xd) {
      local_100 = (longlong *)(param_1 + 0xa70);
      lVar25 = 0;
      lVar18 = local_110;
      do {
        lVar27 = (longlong)*(int *)((longlong)local_f0 + 8 + lVar25 * 0x10);
        if (lVar27 != 0) {
          plVar26 = *(longlong **)((longlong)local_f0 + lVar25 * 0x10);
          lVar27 = lVar27 << 5;
          iVar24 = 0;
          do {
            lVar8 = *plVar26;
            if ((*(longlong *)(lVar8 + 8) == param_1) &&
               (*(int *)(lVar8 + 0x3c) != *(int *)(param_1 + 0x268))) {
              iVar13 = *(int *)(lVar8 + 0x1c);
              if (iVar13 == 8) {
                if (*(int *)(lVar8 + 0x38) == -1) {
                  iVar13 = *(int *)(param_1 + 0xa68);
                  *(uint *)(param_1 + 0xa68) = iVar13 + 1U;
                  if (*(uint *)(param_1 + 0xa6c) < iVar13 + 1U) {
                    FUN_146287d76(param_1 + 0xa60,iVar13);
                  }
                  lVar18 = local_110;
                  *(longlong *)(*(longlong *)(param_1 + 0xa60) + (longlong)iVar13 * 8) = lVar8;
                  local_128 = plVar26 + 1;
                  FUN_1407fc6b4(lVar8,param_1,local_110,iVar24);
                  iVar13 = *(int *)(param_1 + 0x268);
                  iVar19 = *(int *)(lVar8 + 0x38);
                  if (iVar19 != -1 && iVar19 != iVar13) {
                    *(int *)(lVar8 + 0x3c) = iVar19;
                  }
                  *(int *)(lVar8 + 0x38) = iVar13;
                }
                if (local_d8 != (longlong *)0x0) {
                  local_128 = (longlong *)0x0;
                  FUN_14498a560(local_d8,lVar18,iVar24,plVar26);
                }
                local_128 = plVar26 + 1;
                FUN_140baa608(lVar8,param_1,lVar18,iVar24);
              }
              else if (iVar13 == 9) {
                if (*(char *)(lVar8 + 0x50) == '\0') {
                  local_128 = plVar26 + 1;
                  FUN_1413031de(lVar8,param_1,lVar18,iVar24);
                  *(undefined1 *)(lVar8 + 0x50) = 1;
                }
                local_128 = plVar26 + 1;
                FUN_142a2ab4a(lVar8,param_1,lVar18,iVar24);
              }
              else if (iVar13 == 10) {
                if (*(int *)(lVar8 + 0x38) == -1) {
                  iVar13 = *(int *)(param_1 + 0xa78);
                  *(uint *)(param_1 + 0xa78) = iVar13 + 1U;
                  if (*(uint *)(param_1 + 0xa7c) < iVar13 + 1U) {
                    FUN_146ee5196(local_100,iVar13);
                  }
                  lVar18 = local_110;
                  *(longlong *)(*(longlong *)(param_1 + 0xa70) + (longlong)iVar13 * 8) = lVar8;
                  local_128 = plVar26 + 1;
                  FUN_146ee56ae(lVar8,param_1,local_110,iVar24);
                  iVar13 = *(int *)(param_1 + 0x268);
                  iVar19 = *(int *)(lVar8 + 0x38);
                  if (iVar19 != -1 && iVar19 != iVar13) {
                    *(int *)(lVar8 + 0x3c) = iVar19;
                  }
                  *(int *)(lVar8 + 0x38) = iVar13;
                }
                local_128 = plVar26 + 1;
                FUN_146ee57c4(lVar8,param_1,lVar18,iVar24);
              }
            }
            plVar26 = plVar26 + 4;
            iVar24 = iVar24 + 1;
            lVar27 = lVar27 + -0x20;
          } while (lVar27 != 0);
        }
        lVar25 = lVar25 + 1;
      } while (lVar25 != 0xd);
      iVar24 = *(int *)(param_1 + 0x198);
      if (0 < (longlong)iVar24) {
        lVar18 = *(longlong *)(param_1 + 400);
        lVar25 = 0;
        do {
          plVar26 = *(longlong **)(lVar18 + lVar25);
          (**(code **)(*plVar26 + 0xb0))(plVar26,&local_88);
          lVar25 = lVar25 + 8;
        } while ((longlong)iVar24 * 8 != lVar25);
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      iVar24 = *(int *)(local_110 + 0x2d8);
      if ((longlong)iVar24 != 0) {
        lVar18 = *(longlong *)(local_110 + 0x2d0);
        lVar25 = 0;
        do {
          plVar26 = *(longlong **)(lVar18 + lVar25);
          lVar27 = *(longlong *)(param_1 + 0x1f0);
          plVar26[6] = *(longlong *)(param_1 + 0x1f8);
          plVar26[7] = lVar27;
          (**(code **)(*plVar26 + 0x68))(plVar26);
          if (plVar26 != (longlong *)0x0) {
            (**(code **)*plVar26)(plVar26,1);
          }
          lVar25 = lVar25 + 8;
        } while ((longlong)iVar24 * 8 != lVar25);
      }
      lVar18 = local_110;
      *(undefined4 *)(local_110 + 0x2d8) = 0;
      if (*(int *)(local_110 + 0x2dc) < 0) {
        FUN_146ce58ec(local_110 + 0x2d0,0);
      }
      lVar25 = (longlong)*(int *)(lVar18 + 0x2a8);
      if (lVar25 != 0) {
        lVar18 = *(longlong *)(lVar18 + 0x2a0);
        lVar27 = 0;
        do {
          plVar26 = *(longlong **)(lVar18 + lVar27);
          if ((char)plVar26[1] == '\0') {
            (**(code **)(*plVar26 + 0x60))();
          }
          lVar27 = lVar27 + 8;
        } while (lVar25 * 8 != lVar27);
      }
      if ((*(longlong *)(param_1 + 0x1c8) != 0) && (*(char *)(param_1 + 0x220) == '\0')) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_148);
      }
      if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 142a0ec2a FUN_142a0ec2a body=825 status=ok
// SIG undefined FUN_142a0ec2a(void)

void FUN_142a0ec2a(LARGE_INTEGER param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  double dVar5;
  LARGE_INTEGER LVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined **ppuVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  LARGE_INTEGER local_a8;
  longlong local_a0;
  LARGE_INTEGER local_98;
  longlong local_90;
  LARGE_INTEGER local_88;
  longlong local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((*(char *)(param_1.QuadPart + 0x220) == '\0') &&
       (plVar4 = *(longlong **)(param_1.QuadPart + 0x1c8), plVar4 != (longlong *)0x0)) &&
      (*(longlong *)(param_1.QuadPart + 0x1c0) != 0)) &&
     (*(char *)(*(longlong *)(param_1.QuadPart + 0x9c8) + 0x430) == '\0')) {
    uVar2 = *(uint *)(*(longlong *)(param_1.QuadPart + 0x1c0) + 0x3e0);
    uVar1 = uVar2 - 1;
    uVar8 = (**(code **)(*plVar4 + 0x28))(plVar4,uVar1);
    if (-1 < (int)uVar8) {
      lVar9 = FUN_14091baa4();
      ppuVar10 = &PTR_PTR_14c75ef90;
      if (*(undefined ***)(lVar9 + 8) != (undefined **)0x0) {
        ppuVar10 = *(undefined ***)(lVar9 + 8);
      }
      cVar7 = (**(code **)(*ppuVar10 + 0x10))();
      if (cVar7 != '\0') {
        FUN_146287bac();
      }
      if (((int)uVar8 < (int)uVar2) && ((int)(uVar1 - uVar8) < *(int *)(param_1.QuadPart + 0xd8))) {
        cVar7 = FUN_142a2adb0(*(undefined8 *)(param_1.QuadPart + 0x1c0),uVar8);
        if (cVar7 != '\0') {
          *(undefined1 *)(*(longlong *)(param_1.QuadPart + 0x9c8) + 0x430) = 1;
          *(uint *)(param_1.QuadPart + 0x268) = uVar8;
          local_b0 = *(undefined8 *)(param_1.QuadPart + 0x90);
          FUN_14133e58e(param_1.QuadPart + 0x70,&local_80,(uVar1 - uVar8) + 1);
          QueryPerformanceCounter(&local_a8);
          LVar6 = local_a8;
          dVar5 = DAT_14c83f420;
          lVar9 = (ulonglong)uVar1 - (ulonglong)uVar8;
          uVar12 = CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
          do {
            if (lVar9 < local_78) {
              cVar7 = (char)uVar12;
              if ((cVar7 == '\0') && (*(char *)(param_1.QuadPart + 0x1d8) == '\0')) {
                FUN_1410d2d30(*(undefined8 *)(param_1.QuadPart + 0x1c0),uVar8);
              }
              if ((DAT_14c9973d0 & 1) != 0 || cVar7 != '\0') {
                FUN_1408fb332(*(undefined8 *)(param_1.QuadPart + 0x1c0),uVar8,uVar12);
              }
              lVar11 = *(longlong *)(local_80 + lVar9 * 8);
              if (cVar7 != '\0') {
                *(undefined8 *)(param_1.QuadPart + 0x1f8) = *(undefined8 *)(lVar11 + 0x278);
                (**(code **)(**(longlong **)(param_1.QuadPart + 0x9c8) + 8))();
              }
              *(char *)(*(longlong *)(param_1.QuadPart + 0x9c8) + 0x431) = cVar7;
              (**(code **)(**(longlong **)(param_1.QuadPart + 0x1c8) + 0x30))
                        (*(longlong **)(param_1.QuadPart + 0x1c8),uVar8,uVar12);
              LOCK();
              *(int *)(param_1.QuadPart + 0x200) = *(int *)(param_1.QuadPart + 0x200) + 1;
              UNLOCK();
              local_a8 = param_1;
              local_a0 = lVar11;
              local_98 = param_1;
              local_90 = lVar11;
              local_88 = param_1;
              FUN_1429aeccc(&local_a8);
              (**(code **)(**(longlong **)(param_1.QuadPart + 0x1c8) + 0x38))();
              uVar12 = 0;
            }
            uVar8 = uVar8 + 1;
            lVar9 = lVar9 + -1;
          } while (uVar2 != uVar8);
          *(undefined8 *)(param_1.QuadPart + 0x90) = local_b0;
          lVar9 = *(longlong *)(param_1.QuadPart + 0x9c8);
          iVar3 = *(int *)(lVar9 + 0x138);
          if ((longlong)iVar3 != 0) {
            lVar9 = *(longlong *)(lVar9 + 0x130);
            lVar11 = 0;
            do {
              *(undefined4 *)(*(longlong *)(lVar9 + lVar11) + 0x48) = 0xffffffff;
              lVar11 = lVar11 + 8;
            } while ((longlong)iVar3 * 8 != lVar11);
            lVar9 = *(longlong *)(param_1.QuadPart + 0x9c8);
          }
          *(undefined1 *)(lVar9 + 0x430) = 0;
          *(undefined1 *)(*(longlong *)(param_1.QuadPart + 0x9c8) + 0x431) = 0;
          QueryPerformanceCounter(&local_a8);
          local_a8 = (LARGE_INTEGER)
                     ((((double)local_a8.QuadPart * DAT_14c83f420 + 16777216.0) -
                      ((double)LVar6.QuadPart * dVar5 + 16777216.0)) + 0.0);
          (**(code **)(**(longlong **)(param_1.QuadPart + 0x1c8) + 0x50))
                    (*(longlong **)(param_1.QuadPart + 0x1c8),&local_a8);
          if (local_80 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
    *(undefined4 *)(*(longlong *)(param_1.QuadPart + 0x1c0) + 0x3f4) = 0xffffffff;
  }
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a0ef64 FUN_142a0ef64 body=154 status=ok
// SIG undefined FUN_142a0ef64(void)

void FUN_142a0ef64(longlong param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  if ((0xffffff < param_2) && (uVar1 = param_2 & 0xffffff, (int)uVar1 < *(int *)(param_1 + 0xb58)))
  {
    lVar2 = param_1 + 0xb40;
    if (*(longlong *)(param_1 + 0xb50) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xb50);
    }
    if (((*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) &&
       ((param_2 ^ *(uint *)(*(longlong *)(param_1 + 0xb30) + (ulonglong)uVar1 * 4)) < 0x1000000)) {
      puVar3 = (undefined8 *)((ulonglong)(uVar1 << 7) + *(longlong *)(param_1 + 0xb60));
      goto LAB_142a0efde;
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_142a0efde:
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0eff3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x210));
  return;
}



// FUNCTION 142a0f010 FUN_142a0f010 body=59 status=ok
// SIG undefined FUN_142a0f010(void)

void FUN_142a0f010(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000142a0f048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,uVar1,*(code **)*param_1);
  return;
}



// FUNCTION 142a0f04c FUN_142a0f04c body=32 status=ok
// SIG undefined FUN_142a0f04c(void)

void FUN_142a0f04c(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x78))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000142a0f068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 142a0f06c FUN_142a0f06c body=59 status=ok
// SIG undefined FUN_142a0f06c(void)

void FUN_142a0f06c(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000142a0f0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,uVar1,*(code **)*param_1);
  return;
}



// FUNCTION 142a0f0a8 FUN_142a0f0a8 body=32 status=ok
// SIG undefined FUN_142a0f0a8(void)

void FUN_142a0f0a8(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x78))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000142a0f0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 142a0f0c8 FUN_142a0f0c8 body=303 status=ok
// SIG undefined FUN_142a0f0c8(void)

void FUN_142a0f0c8(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  uVar4 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar4) {
    uVar10 = 0;
    do {
      lVar9 = uVar10 * 0x10;
      if (0 < *(int *)(param_1[2] + 8 + lVar9)) {
        plVar7 = (longlong *)(param_1[2] + lVar9);
        lVar11 = 0;
        do {
          lVar2 = *plVar7;
          lVar14 = 0;
          bVar3 = true;
          do {
            bVar6 = bVar3;
            lVar13 = (longlong)*(int *)(lVar2 + lVar11 * 8 + lVar14 * 4);
            if (-1 < lVar13) {
              lVar12 = *(longlong *)(param_1[2] + lVar9) + lVar11 * 8;
              uVar1 = *(uint *)(lVar12 + lVar14 * 4);
              if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
                plVar8 = (longlong *)param_5[8];
                if ((longlong *)param_5[8] == (longlong *)0x0) {
                  plVar8 = param_5 + 7;
                }
                iVar5 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_5[9] - 1U & uVar1) * 4);
                if (iVar5 != -1) {
                  do {
                    if (*(uint *)(*param_5 + (longlong)iVar5 * 0xc) == uVar1) {
                      iVar5 = -1;
                      goto LAB_142a0f1a0;
                    }
                    iVar5 = *(int *)(*param_5 + (longlong)iVar5 * 0xc + 4);
                  } while (iVar5 != -1);
                }
              }
              iVar5 = uVar1 - *(int *)(*param_2 + lVar13 * 4);
LAB_142a0f1a0:
              *(int *)(lVar12 + lVar14 * 4) = iVar5;
            }
            lVar14 = 1;
            bVar3 = false;
          } while (bVar6);
          lVar11 = lVar11 + 1;
        } while (lVar11 < (int)plVar7[1]);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar4);
  }
  return;
}



// FUNCTION 142a0f1f8 FUN_142a0f1f8 body=59 status=ok
// SIG undefined FUN_142a0f1f8(void)

void FUN_142a0f1f8(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar1 = (**(code **)(*param_2 + 0x60))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000142a0f230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,uVar1,*(code **)*param_1);
  return;
}



// FUNCTION 142a0f234 FUN_142a0f234 body=32 status=ok
// SIG undefined FUN_142a0f234(void)

void FUN_142a0f234(longlong *param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x78))(param_2);
                    /* WARNING: Could not recover jumptable at 0x000142a0f250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}



// FUNCTION 142a0f254 FUN_142a0f254 body=280 status=ok
// SIG undefined FUN_142a0f254(void)

void FUN_142a0f254(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar3 = (**(code **)(*param_1 + 0x60))();
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      lVar7 = uVar8 * 0x10;
      if (0 < *(int *)(param_1[2] + 8 + lVar7)) {
        plVar6 = (longlong *)(param_1[2] + lVar7);
        lVar9 = 0;
        do {
          lVar2 = *plVar6;
          lVar12 = 0;
          do {
            lVar11 = (longlong)*(int *)(lVar2 + lVar9 * 0xc + lVar12 * 4);
            if (-1 < lVar11) {
              lVar10 = *(longlong *)(param_1[2] + lVar7) + lVar9 * 0xc;
              uVar1 = *(uint *)(lVar10 + lVar12 * 4);
              if ((int)param_5[1] != *(int *)((longlong)param_5 + 0x34)) {
                plVar4 = (longlong *)param_5[8];
                if ((longlong *)param_5[8] == (longlong *)0x0) {
                  plVar4 = param_5 + 7;
                }
                iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_5[9] - 1U & uVar1) * 4);
                if (iVar5 != -1) {
                  do {
                    if (*(uint *)(*param_5 + (longlong)iVar5 * 0xc) == uVar1) {
                      iVar5 = -1;
                      goto LAB_142a0f322;
                    }
                    iVar5 = *(int *)(*param_5 + (longlong)iVar5 * 0xc + 4);
                  } while (iVar5 != -1);
                }
              }
              iVar5 = uVar1 - *(int *)(*param_2 + lVar11 * 4);
LAB_142a0f322:
              *(int *)(lVar10 + lVar12 * 4) = iVar5;
            }
            lVar12 = lVar12 + 1;
          } while (lVar12 != 3);
          lVar9 = lVar9 + 1;
        } while (lVar9 < (int)plVar6[1]);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != uVar3);
  }
  return;
}



// FUNCTION 142a0f3b2 FUN_142a0f3b2 body=292 status=ok
// SIG undefined FUN_142a0f3b2(void)

longlong * FUN_142a0f3b2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
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
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a0f4d8 FUN_142a0f4d8 body=91 status=ok
// SIG undefined FUN_142a0f4d8(void)

void FUN_142a0f4d8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149f6aff0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 142a0f533 FUN_142a0f533 body=37 status=ok
// SIG undefined FUN_142a0f533(void)

void FUN_142a0f533(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined8 *)((longlong)param_1 + 0x19) = 0;
    *(undefined8 *)((longlong)param_1 + 0x21) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(byte *)((longlong)param_1 + 0x29) = *(byte *)((longlong)param_1 + 0x29) & 0xf8 | 3;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 142a0f558 FUN_142a0f558 body=19 status=ok
// SIG undefined FUN_142a0f558(void)

void FUN_142a0f558(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 6);
    return;
  }
  return;
}



// FUNCTION 142a0f56b FUN_142a0f56b body=69 status=ok
// SIG undefined FUN_142a0f56b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a0f56b(void)

{
  _DAT_14c997440 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a0f5ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997448,1);
  return;
}



// FUNCTION 142a0f5c2 FUN_142a0f5c2 body=775 status=ok
// SIG undefined FUN_142a0f5c2(void)

void FUN_142a0f5c2(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_88 [40];
  uint *local_60;
  ulonglong local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = (longlong)*(int *)(*(longlong *)(param_1[8] + 0x10) + (longlong)*param_2 * 4) * 0x50;
  plVar1 = (longlong *)(*(longlong *)(param_1[6] + 0x10) + lVar6);
  lVar6 = *(longlong *)(param_1[6] + 0x10) + lVar6;
  puVar15 = (uint *)(lVar6 + 0x10);
  uVar3 = *(uint *)(lVar6 + 0x28);
  if (uVar3 == 0) {
    uVar11 = 1;
    uVar16 = 0;
    iVar12 = 0;
    uVar5 = 0;
  }
  else {
    puVar7 = (uint *)plVar1[4];
    if ((uint *)plVar1[4] == (uint *)0x0) {
      puVar7 = puVar15;
    }
    uVar5 = *puVar7;
    if (uVar5 == 0) {
      iVar12 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar12 = uVar3 - 1;
      }
      uVar16 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar11 == uVar16) goto LAB_142a0f692;
        iVar12 = iVar12 + 0x20;
        uVar5 = puVar7[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar11 = (ulonglong)(-uVar5 & uVar5);
    uVar2 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar5 = (iVar12 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar5) {
      uVar5 = uVar3;
    }
  }
  if (uVar5 != uVar3) {
    uVar13 = 0xffffffff;
    local_60 = puVar15;
    local_58 = (ulonglong)uVar3;
    do {
      local_50 = *(uint *)(*(longlong *)(param_1[7] + 0x10) +
                          (longlong)*(int *)(*plVar1 + (longlong)(int)uVar5 * 0xc) * 4);
      iVar17 = -1;
      if (*(longlong *)(*param_1 + 0xa0) != 0) {
        iVar17 = *(int *)(*(longlong *)(*(longlong *)(*param_1 + 0xa0) + 0x10) +
                         (longlong)(int)local_50 * 4);
      }
      iVar8 = (int)param_1[5];
      if (((char)param_1[3] == '\x01') && (iVar17 < iVar8)) {
        local_4c = local_50;
        (**(code **)param_1[2])(((undefined8 *)param_1[2])[1],&local_4c);
        iVar8 = (int)param_1[5];
        puVar15 = local_60;
      }
      bVar18 = local_50 != 0xffffffff;
      if ((iVar8 < iVar17) && (local_50 != 0xffffffff)) {
        do {
          iVar17 = iVar17 + -1;
          local_50 = *(uint *)(*(longlong *)(*(longlong *)(*param_1 + 0x30) + 0x10) +
                              (longlong)(int)local_50 * 4);
          bVar18 = local_50 != 0xffffffff;
          if (local_50 == 0xffffffff) break;
        } while (iVar8 < iVar17);
      }
      if ((bVar18) && (local_50 != *(uint *)(param_1 + 1))) {
        if (*(char *)((longlong)param_1 + 0x19) == '\x01') {
          plVar4 = (longlong *)param_1[4];
          if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
            plVar10 = plVar4 + 7;
            if ((longlong *)plVar4[8] != (longlong *)0x0) {
              plVar10 = (longlong *)plVar4[8];
            }
            iVar17 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar4[9] - 1U & local_50) * 4);
            if (iVar17 != -1) {
              do {
                if (*(uint *)(*plVar4 + (longlong)iVar17 * 0xc) == local_50) goto LAB_142a0f803;
                iVar17 = *(int *)(*plVar4 + (longlong)iVar17 * 0xc + 4);
              } while (iVar17 != -1);
            }
          }
          FUN_1447cbafe(plVar4,&local_4c,&local_50,0);
        }
        local_4c = local_50;
        (**(code **)param_1[2])(((undefined8 *)param_1[2])[1],&local_4c);
        puVar15 = local_60;
      }
LAB_142a0f803:
      uVar13 = uVar13 & ~(uint)uVar11;
      puVar7 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar7 = puVar15;
      }
      uVar3 = *(uint *)(plVar1 + 5);
      iVar17 = (int)uVar16;
      lVar6 = (longlong)iVar17;
      uVar5 = puVar7[lVar6] & uVar13;
      if (uVar5 == 0) {
        iVar8 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar8 = uVar3 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar17) {
          iVar9 = iVar17;
        }
        if (iVar17 < iVar8) {
          lVar14 = 0;
          do {
            uVar5 = puVar7[lVar6 + lVar14 + 1];
            if (uVar5 != 0) {
              uVar16 = (ulonglong)(iVar17 + (int)lVar14 + 1);
              uVar13 = 0xffffffff;
              goto LAB_142a0f877;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar9 - lVar6 != lVar14);
          uVar13 = 0xffffffff;
          iVar17 = iVar9;
        }
        uVar16 = (ulonglong)(iVar17 + 1);
        puVar15 = local_60;
        uVar5 = uVar3;
      }
      else {
LAB_142a0f877:
        uVar11 = (ulonglong)(-uVar5 & uVar5);
        uVar2 = uVar11 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        uVar5 = (iVar12 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar5) {
          uVar5 = uVar3;
        }
      }
    } while (uVar5 != (uint)local_58);
  }
LAB_142a0f692:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a0f8ca FUN_142a0f8ca body=729 status=ok
// SIG undefined FUN_142a0f8ca(void)

void FUN_142a0f8ca(undefined8 *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
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
  double dVar16;
  longlong lVar17;
  double *pdVar18;
  longlong lVar19;
  longlong lVar20;
  char cVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  lVar19 = (longlong)*param_2;
  plVar3 = (longlong *)param_1[1];
  lVar20 = *plVar3;
  lVar17 = (longlong)*(int *)(*(longlong *)(lVar20 + 0x450) + lVar19 * 4);
  if (0 < lVar17) {
    pdVar18 = (double *)(lVar19 * 0x38 + *(longlong *)*param_1);
    lVar4 = *(longlong *)param_1[2];
    lVar22 = (longlong)*(int *)(*(longlong *)(lVar20 + 0x3b0) + lVar19 * 4) * 0x60;
    dVar8 = *(double *)(lVar4 + lVar22);
    dVar9 = ((double *)(lVar4 + lVar22))[1];
    pdVar1 = (double *)(lVar4 + 0x10 + lVar22);
    dVar10 = *pdVar1;
    dVar11 = pdVar1[1];
    pdVar1 = (double *)(lVar4 + 0x20 + lVar22);
    dVar12 = *pdVar1;
    dVar13 = pdVar1[1];
    pdVar1 = (double *)(lVar4 + 0x40 + lVar22);
    dVar14 = *pdVar1;
    dVar15 = pdVar1[1];
    dVar16 = *(double *)(lVar4 + 0x50 + lVar22);
    lVar19 = (longlong)*(int *)(*(longlong *)(lVar20 + 0x430) + lVar19 * 4);
    lVar17 = lVar17 + lVar19;
    cVar21 = *(char *)(pdVar18 + 6);
    dVar2 = *(double *)(lVar4 + lVar22 + 0x30);
    lVar20 = lVar19 * 0xc + 8;
    do {
      lVar4 = *(longlong *)(*plVar3 + 0x230);
      dVar24 = (double)*(float *)(lVar4 + -8 + lVar20) * dVar14;
      dVar25 = (double)*(float *)(lVar4 + -4 + lVar20) * dVar15;
      dVar23 = (double)*(float *)(lVar4 + lVar20) * dVar16;
      dVar5 = dVar25 * dVar8 - dVar9 * dVar24;
      dVar6 = dVar23 * dVar9 - dVar10 * dVar25;
      dVar7 = dVar24 * dVar10 - dVar8 * dVar23;
      dVar6 = dVar6 + dVar6;
      dVar7 = dVar7 + dVar7;
      dVar5 = dVar5 + dVar5;
      dVar24 = (dVar5 * dVar9 - dVar7 * dVar10) + dVar11 * dVar6 + dVar24 + dVar12;
      dVar25 = (dVar10 * dVar6 - dVar8 * dVar5) + dVar11 * dVar7 + dVar25 + dVar13;
      dVar5 = dVar5 * dVar11 + dVar23 + (dVar7 * dVar8 - dVar6 * dVar9) + dVar2;
      if (cVar21 == '\0') {
        pdVar18[3] = dVar24;
        pdVar18[4] = dVar25;
        pdVar18[5] = dVar5;
        *pdVar18 = pdVar18[3];
        pdVar18[1] = pdVar18[4];
        pdVar18[2] = pdVar18[5];
        *(undefined1 *)(pdVar18 + 6) = 1;
        cVar21 = '\x01';
      }
      else {
        dVar6 = *pdVar18;
        if (dVar24 <= *pdVar18) {
          dVar6 = dVar24;
        }
        *pdVar18 = dVar6;
        dVar6 = pdVar18[1];
        if (dVar25 <= pdVar18[1]) {
          dVar6 = dVar25;
        }
        pdVar18[1] = dVar6;
        dVar6 = pdVar18[2];
        if (dVar5 <= pdVar18[2]) {
          dVar6 = dVar5;
        }
        pdVar18[2] = dVar6;
        dVar6 = pdVar18[3];
        if (pdVar18[3] <= dVar24) {
          dVar6 = dVar24;
        }
        pdVar18[3] = dVar6;
        dVar24 = pdVar18[4];
        if (pdVar18[4] <= dVar25) {
          dVar24 = dVar25;
        }
        pdVar18[4] = dVar24;
        dVar24 = pdVar18[5];
        if (pdVar18[5] <= dVar5) {
          dVar24 = dVar5;
        }
        pdVar18[5] = dVar24;
      }
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0xc;
    } while (lVar19 < lVar17);
  }
  return;
}



// FUNCTION 142a0fbee FUN_142a0fbee body=29 status=ok
// SIG undefined FUN_142a0fbee(void)

undefined8 FUN_142a0fbee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a0fc20 FUN_142a0fc20 body=85 status=ok
// SIG undefined FUN_142a0fc20(void)

void FUN_142a0fc20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f6adc0;
  return;
}



// FUNCTION 142a0fc76 FUN_142a0fc76 body=85 status=ok
// SIG undefined FUN_142a0fc76(void)

void FUN_142a0fc76(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e170a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f6adc0;
  return;
}



// FUNCTION 142a0fccc FUN_142a0fccc body=118 status=ok
// SIG undefined FUN_142a0fccc(void)

void FUN_142a0fccc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e170a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f6adc0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a0fd33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a0fd54 FUN_142a0fd54 body=158 status=ok
// SIG undefined FUN_142a0fd54(void)

void FUN_142a0fd54(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_3 = (longlong *)*param_3;
  plVar1 = *(longlong **)
            (*(longlong *)(*(longlong *)*param_2 + 200) +
            (longlong)(int)((longlong *)*param_2)[1] * 8);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  if ((param_3 != (longlong *)0x0) && (2 < *(byte *)((longlong)param_3 + 0xc))) {
    local_20 = plVar1;
    FUN_140123484((longlong)(int)param_3[1] * 0x50 + *(longlong *)(*param_3 + 0x608),local_24,
                  &local_20,0);
  }
  *(longlong **)(*(longlong *)(*param_3 + 200) + (longlong)(int)param_3[1] * 8) = plVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a0fe12 FUN_142a0fe12 body=12 status=ok
// SIG undefined FUN_142a0fe12(void)

void FUN_142a0fe12(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142a0fe1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142a0fe1e FUN_142a0fe1e body=29 status=ok
// SIG undefined FUN_142a0fe1e(void)

undefined8 FUN_142a0fe1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a0fe3c FUN_142a0fe3c body=68 status=ok
// SIG undefined FUN_142a0fe3c(void)

void FUN_142a0fe3c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(*param_1 + 0x148);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x140);
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar3);
      if ((*(byte *)((longlong)plVar2 + 0x41) & 8) != 0) {
        (**(code **)(*plVar2 + 0x70))();
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  return;
}



// FUNCTION 142a0fe9e FUN_142a0fe9e body=12 status=ok
// SIG undefined FUN_142a0fe9e(void)

void FUN_142a0fe9e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142a0fea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142a0feaa FUN_142a0feaa body=29 status=ok
// SIG undefined FUN_142a0feaa(void)

undefined8 FUN_142a0feaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a0fec8 FUN_142a0fec8 body=68 status=ok
// SIG undefined FUN_142a0fec8(void)

void FUN_142a0fec8(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(*param_1 + 0x148);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x140);
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar3);
      if ((*(byte *)((longlong)plVar2 + 0x41) & 0x10) != 0) {
        (**(code **)(*plVar2 + 0x78))();
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  return;
}



// FUNCTION 142a0ff2a FUN_142a0ff2a body=12 status=ok
// SIG undefined FUN_142a0ff2a(void)

void FUN_142a0ff2a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142a0ff33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142a0ff36 FUN_142a0ff36 body=29 status=ok
// SIG undefined FUN_142a0ff36(void)

undefined8 FUN_142a0ff36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a0ff54 FUN_142a0ff54 body=71 status=ok
// SIG undefined FUN_142a0ff54(void)

void FUN_142a0ff54(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(*param_1 + 0x148);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x140);
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar3);
      if ((*(byte *)((longlong)plVar2 + 0x41) & 0x20) != 0) {
        (**(code **)(*plVar2 + 0xa0))();
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  return;
}



// FUNCTION 142a0ffba FUN_142a0ffba body=12 status=ok
// SIG undefined FUN_142a0ffba(void)

void FUN_142a0ffba(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142a0ffc3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142a0ffc6 FUN_142a0ffc6 body=29 status=ok
// SIG undefined FUN_142a0ffc6(void)

undefined8 FUN_142a0ffc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a0ffe4 FUN_142a0ffe4 body=71 status=ok
// SIG undefined FUN_142a0ffe4(void)

void FUN_142a0ffe4(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)*(int *)(*param_1 + 0x148);
  if (lVar4 != 0) {
    lVar1 = *(longlong *)(*param_1 + 0x140);
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar3);
      if ((*(byte *)((longlong)plVar2 + 0x41) & 0x40) != 0) {
        (**(code **)(*plVar2 + 0xa8))();
      }
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  return;
}



// FUNCTION 142a1004a FUN_142a1004a body=12 status=ok
// SIG undefined FUN_142a1004a(void)

void FUN_142a1004a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142a10053. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142a10056 FUN_142a10056 body=29 status=ok
// SIG undefined FUN_142a10056(void)

undefined8 FUN_142a10056(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a10074 FUN_142a10074 body=510 status=ok
// SIG undefined FUN_142a10074(void)

void FUN_142a10074(longlong *param_1)

{
  PSRWLOCK SRWLock;
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  undefined4 uVar13;
  undefined1 auStack_a8 [32];
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar10 = *param_1;
  lVar5 = param_1[2];
  lVar6 = *(longlong *)(lVar5 + 0x9d0);
  SRWLock = (PSRWLOCK)(lVar6 + 0x20);
  AcquireSRWLockExclusive(SRWLock);
  plVar7 = (longlong *)**(longlong **)(lVar6 + 8);
  if (plVar7 != (longlong *)0x0) {
    local_88 = FUN_142a102a8;
    local_78 = 0;
    local_68 = &PTR_LAB_149f6af10;
    local_60 = lVar10;
    (**(code **)(*plVar7 + 0x38))();
  }
  ReleaseSRWLockExclusive(SRWLock);
  lVar10 = *param_1;
  lVar6 = *(longlong *)(lVar10 + 0x48);
  if (*(longlong *)(lVar5 + 0x1c0) != 0) {
    FUN_1400c8c12(*(longlong *)(lVar5 + 0x1c0) + 0x298,lVar6,1);
    lVar10 = *param_1;
  }
  *(undefined8 *)(lVar10 + 0x48) = 0;
  iVar12 = 0;
  if ((DAT_14c75f3b0 == '\x01') && (iVar12 = 0, *(longlong *)(lVar5 + 0x1c0) != 0)) {
    iVar12 = *(int *)(*(longlong *)(lVar5 + 0x1c0) + 0x10);
  }
  lVar10 = *param_1;
  iVar2 = *(int *)(lVar5 + 0x268);
  lVar9 = param_1[1];
  iVar3 = *(int *)(lVar5 + 0xbd0);
  *(uint *)(lVar5 + 0xbd0) = iVar3 + 1U;
  if (*(uint *)(lVar5 + 0xbd4) < iVar3 + 1U) {
    FUN_14172f8f2((longlong *)(lVar5 + 0xbc8),iVar3);
  }
  lVar8 = *(longlong *)(lVar5 + 0xbc8);
  lVar11 = (longlong)iVar3 * 0x20;
  *(longlong *)(lVar8 + lVar11) = lVar10;
  *(int *)(lVar8 + 8 + lVar11) = iVar12 + iVar2;
  *(longlong *)(lVar8 + 0x10 + lVar11) = lVar6;
  *(int *)(lVar8 + 0x18 + lVar11) = (int)lVar9;
  if (lVar6 != 0) {
    FUN_14016e00e(*(undefined8 *)(lVar5 + 0x9c8),lVar6);
  }
  uVar4 = *(uint *)(param_1 + 1);
  if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(lVar5 + 0xa20))) {
    lVar10 = *(longlong *)(lVar5 + 0xa18);
    if (*(longlong *)(lVar5 + 0xa18) == 0) {
      lVar10 = lVar5 + 0xa08;
    }
    if ((*(uint *)(lVar10 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
      lVar10 = *(longlong *)(lVar5 + 0x9f8);
      if (*(int *)(lVar5 + 0xa2c) != 0) {
        *(uint *)(lVar10 + (longlong)*(int *)(lVar5 + 0xa28) * 8) = uVar4;
      }
      *(undefined4 *)(lVar10 + (ulonglong)uVar4 * 8) = 0xffffffff;
      if (*(int *)(lVar5 + 0xa2c) < 1) {
        uVar13 = 0xffffffff;
      }
      else {
        uVar13 = *(undefined4 *)(lVar5 + 0xa28);
      }
      *(undefined4 *)(lVar10 + 4 + (ulonglong)uVar4 * 8) = uVar13;
      *(uint *)(lVar5 + 0xa28) = uVar4;
      *(int *)(lVar5 + 0xa2c) = *(int *)(lVar5 + 0xa2c) + 1;
      lVar10 = lVar5 + 0xa08;
      if (*(longlong *)(lVar5 + 0xa18) != 0) {
        lVar10 = *(longlong *)(lVar5 + 0xa18);
      }
      puVar1 = (uint *)(lVar10 + (ulonglong)(uVar4 >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << ((byte)uVar4 & 0x1f));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a1028a FUN_142a1028a body=29 status=ok
// SIG undefined FUN_142a1028a(void)

undefined8 FUN_142a1028a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a102a8 FUN_142a102a8 body=287 status=ok
// SIG undefined FUN_142a102a8(void)

void FUN_142a102a8(ulonglong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  
  if ((0 < *(int *)(param_2 + 0x10)) && (*(int *)(param_2 + 0x28) != *(int *)(param_2 + 0x54))) {
    uVar2 = *param_1;
    uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    lVar6 = param_2 + 0x58;
    if (*(longlong *)(param_2 + 0x60) != 0) {
      lVar6 = *(longlong *)(param_2 + 0x60);
    }
    uVar9 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)*(int *)(param_2 + 0x68) - 1U;
    iVar11 = *(int *)(lVar6 + (uVar9 & 0xffffffff) * 4);
    if (iVar11 != -1) {
      plVar8 = (longlong *)(param_2 + 0x20);
      lVar3 = *plVar8;
      do {
        lVar1 = lVar3 + (longlong)iVar11 * 0x20;
        if (*(ulonglong *)(lVar3 + (longlong)iVar11 * 0x20) == uVar2) {
          if ((lVar1 + 8U & 0xfffffffffffffff7) == 0) {
            return;
          }
          iVar11 = *(int *)(lVar6 + uVar9 * 4);
          while( true ) {
            if (iVar11 == -1) {
              return;
            }
            lVar10 = (longlong)iVar11 * 0x20;
            lVar1 = lVar3 + lVar10;
            if (*(ulonglong *)(lVar3 + lVar10) == uVar2) break;
            iVar11 = *(int *)(lVar1 + 0x18);
          }
          iVar4 = *(int *)(lVar6 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          if (iVar4 == iVar11) {
            piVar7 = (int *)(lVar6 + (longlong)*(int *)(lVar1 + 0x1c) * 4);
          }
          else {
            do {
              piVar7 = (int *)(lVar3 + (longlong)iVar4 * 0x20 + 0x18);
              iVar4 = *piVar7;
            } while (iVar4 != iVar11);
          }
          *piVar7 = *(int *)(lVar1 + 0x18);
          if (*(longlong *)(*plVar8 + 8 + lVar10) != 0) {
            FUN_1400020a8();
          }
          FUN_1429f94c4(plVar8,iVar11,1);
          return;
        }
        iVar11 = *(int *)(lVar1 + 0x18);
      } while (iVar11 != -1);
    }
  }
  return;
}



// FUNCTION 142a103f2 FUN_142a103f2 body=29 status=ok
// SIG undefined FUN_142a103f2(void)

undefined8 FUN_142a103f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a10410 FUN_142a10410 body=200 status=ok
// SIG undefined FUN_142a10410(void)

void FUN_142a10410(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar4 = *param_1;
  lVar2 = param_1[1];
  iVar1 = *(int *)(lVar2 + 0xa38);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0xa30);
    lVar7 = (longlong)iVar1 * 8;
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar3 + lVar5 * 8) == lVar4) {
        if ((uint)lVar5 != 0xffffffff) {
          memmove((void *)(lVar3 + (lVar6 >> 0x20) * 8),(void *)(lVar3 + (lVar6 >> 0x20) * 8 + 8),
                  (longlong)(int)(~(uint)lVar5 + iVar1) << 3);
          *(int *)(lVar2 + 0xa38) = *(int *)(lVar2 + 0xa38) + -1;
          lVar4 = *param_1;
        }
        break;
      }
      lVar6 = lVar6 + 0x100000000;
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  FUN_140509c6c(lVar4);
  iVar1 = *(int *)(lVar2 + 0xbe0);
  *(uint *)(lVar2 + 0xbe0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xbe4) < iVar1 + 1U) {
    FUN_14172f9f2((longlong *)(lVar2 + 0xbd8),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0xbd8) + (longlong)iVar1 * 8) = *param_1;
  return;
}



// FUNCTION 142a104ee FUN_142a104ee body=29 status=ok
// SIG undefined FUN_142a104ee(void)

undefined8 FUN_142a104ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a1050c FUN_142a1050c body=123 status=ok
// SIG undefined FUN_142a1050c(void)

void FUN_142a1050c(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  if (*(longlong *)(*param_1 + 0x148) != 0) {
    FUN_14016e00e(*(undefined8 *)(lVar2 + 0x9c8));
  }
  FUN_146ee4c46(lVar2 + 0xa50,param_1);
  iVar1 = *(int *)(lVar2 + 0xbf0);
  *(uint *)(lVar2 + 0xbf0) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0xbf4) < iVar1 + 1U) {
    FUN_146ee4cba((longlong *)(lVar2 + 0xbe8),iVar1);
  }
  *(longlong *)(*(longlong *)(lVar2 + 0xbe8) + (longlong)iVar1 * 8) = *param_1;
  return;
}



// FUNCTION 142a1059e FUN_142a1059e body=29 status=ok
// SIG undefined FUN_142a1059e(void)

undefined8 FUN_142a1059e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a105bc FUN_142a105bc body=207 status=ok
// SIG undefined FUN_142a105bc(void)

void FUN_142a105bc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = param_1[1];
  if (*(longlong *)(lVar2 + 0x1c0) != 0) {
    FUN_140991e66(*(longlong *)(lVar2 + 0x1c0) + 0x2f8,*(undefined8 *)(*param_1 + 0x48));
  }
  FUN_14081b5ce(*param_1,lVar2);
  iVar1 = *(int *)(lVar2 + 0xa68);
  plVar4 = (longlong *)*param_1;
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar2 + 0xa60);
    lVar7 = (longlong)iVar1 * 8;
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (*(longlong **)(lVar3 + lVar5 * 8) == plVar4) {
        if ((uint)lVar5 != 0xffffffff) {
          memmove((void *)(lVar3 + (lVar6 >> 0x20) * 8),(void *)(lVar3 + (lVar6 >> 0x20) * 8 + 8),
                  (longlong)(int)(~(uint)lVar5 + iVar1) << 3);
          *(int *)(lVar2 + 0xa68) = *(int *)(lVar2 + 0xa68) + -1;
          plVar4 = (longlong *)*param_1;
        }
        break;
      }
      lVar6 = lVar6 + 0x100000000;
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  if (plVar4 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000142a10680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 8))(plVar4,1);
  return;
}



// FUNCTION 142a106a2 FUN_142a106a2 body=29 status=ok
// SIG undefined FUN_142a106a2(void)

undefined8 FUN_142a106a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a106c0 FUN_142a106c0 body=57 status=ok
// SIG undefined FUN_142a106c0(void)

void FUN_142a106c0(longlong param_1)

{
  longlong *plVar1;
  
  FUN_141121ef8(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a106ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 142a10710 FUN_142a10710 body=29 status=ok
// SIG undefined FUN_142a10710(void)

undefined8 FUN_142a10710(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a1072e FUN_142a1072e body=154 status=ok
// SIG undefined FUN_142a1072e(void)

void FUN_142a1072e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong local_40;
  int local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  if ((*(longlong *)(lVar1 + 0x1c0) != 0) && (*(int *)(param_2 + 0x10) != 0)) {
    FUN_14488ddfe(local_50);
    if (local_40 != 0) {
      iVar2 = 0;
      do {
        FUN_1400e6312(*(undefined8 *)(lVar1 + 0x1c0),
                      *(undefined8 *)(*(longlong *)(local_40 + 0x98) + (longlong)local_38 * 8),iVar2
                     );
        FUN_144b02030(local_50);
        iVar2 = iVar2 + 1;
      } while (local_40 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a107e8 FUN_142a107e8 body=12 status=ok
// SIG undefined FUN_142a107e8(void)

void FUN_142a107e8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142a107f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142a107f4 FUN_142a107f4 body=29 status=ok
// SIG undefined FUN_142a107f4(void)

undefined8 FUN_142a107f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a10812 FUN_142a10812 body=583 status=ok
// SIG undefined FUN_142a10812(void)

void FUN_142a10812(longlong *param_1,int *param_2)

{
  int *piVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  
  uVar6 = 0;
  iVar9 = *param_2;
  do {
    piVar1 = (int *)(*param_1 + uVar6 * 4);
    iVar8 = iVar9 - *piVar1;
    if (iVar9 < *piVar1) goto LAB_142a10843;
    uVar6 = uVar6 + 1;
    iVar9 = iVar8;
  } while (uVar6 != 0xd);
  uVar6 = 0xd;
LAB_142a10843:
  plVar10 = (longlong *)param_1[1];
  lVar7 = *(longlong *)(*param_1 + 0x38 + (uVar6 & 0xffffffff) * 0x10);
  lVar3 = *(longlong *)(lVar7 + (longlong)iVar9 * 0x20);
  if (*(longlong *)(lVar3 + 8) != *plVar10) {
    return;
  }
  if (10 < *(int *)(lVar3 + 0x1c) - 2U) {
    return;
  }
  lVar7 = lVar7 + (longlong)iVar9 * 0x20;
  switch(*(int *)(lVar3 + 0x1c)) {
  case 2:
    break;
  default:
    goto switchD_142a1088a_caseD_3;
  case 8:
  case 9:
  case 10:
    plVar4 = *(longlong **)(lVar3 + 0x40);
    if ((plVar4 != (longlong *)0x0) && (plVar4[2] != 0)) {
      lVar5 = plVar10[2];
      plVar10 = plVar4 + 3;
      *(undefined4 *)(lVar7 + 8) = (int)plVar4[3];
      (**(code **)(*plVar4 + 8))(plVar4,lVar5,iVar9,(undefined4 *)(lVar7 + 8));
      goto LAB_142a1098c;
    }
    break;
  case 0xb:
    lVar5 = *(longlong *)(lVar3 + 0x40);
    if (((*(uint *)(lVar5 + 0x94) & 4) != 0 && lVar5 != 0) && 1 < *(byte *)(lVar5 + 0x90)) {
      dVar2 = (double)plVar10[1];
      *(float *)(lVar5 + 0x160) = (float)((double)*(float *)(lVar5 + 0x160) * dVar2);
      *(float *)(lVar5 + 0x164) = (float)((double)*(float *)(lVar5 + 0x164) * dVar2);
      *(float *)(lVar5 + 0x168) = (float)((double)*(float *)(lVar5 + 0x168) * dVar2);
      *(float *)(lVar5 + 0x16c) = (float)((double)*(float *)(lVar5 + 0x16c) * dVar2);
      *(float *)(lVar5 + 0x170) = (float)((double)*(float *)(lVar5 + 0x170) * dVar2);
      *(float *)(lVar5 + 0x174) = (float)((double)*(float *)(lVar5 + 0x174) * dVar2);
    }
    if ((*(uint *)(lVar5 + 0x94) & 0x10) != 0) {
      FUN_141729d70(lVar5);
    }
    FUN_1447d1bb6(lVar5,plVar10[2],iVar9,lVar7 + 8,lVar7 + 0x10,plVar10[3]);
    lVar7 = *(longlong *)(lVar3 + 0x40);
    if ((lVar7 != 0) && (1 < *(byte *)(lVar7 + 0x90))) {
      *(undefined8 *)(lVar7 + 0x180) = 0;
      *(undefined8 *)(lVar7 + 0x188) = 0;
      *(undefined8 *)(lVar7 + 0x170) = 0;
      *(undefined8 *)(lVar7 + 0x178) = 0;
      *(undefined8 *)(lVar7 + 0x160) = 0;
      *(undefined8 *)(lVar7 + 0x168) = 0;
      lVar7 = *(longlong *)(lVar3 + 0x40);
    }
LAB_142a10985:
    plVar10 = (longlong *)(lVar7 + 0x94);
LAB_142a1098c:
    *(undefined4 *)plVar10 = 0;
    break;
  case 0xc:
    FUN_142a13698(lVar3,plVar10[2],iVar9,lVar7 + 8);
    lVar7 = *(longlong *)(lVar3 + 0x128);
    if (lVar7 != 0) goto LAB_142a10985;
  }
  *(undefined4 *)(lVar3 + 0x18) = 0xffffffff;
switchD_142a1088a_caseD_3:
  return;
}



// FUNCTION 142a10a5a FUN_142a10a5a body=82 status=ok
// SIG undefined FUN_142a10a5a(void)

undefined8
FUN_142a10a5a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             byte *param_5)

{
  longlong lVar1;
  byte *pbVar2;
  
  lVar1 = (ulonglong)*param_5 * 0x10 + param_1 + 0x20;
  pbVar2 = param_5;
  FUN_144a1a61a();
  if (param_5[1] == 0) {
    FUN_14043c816(param_1,param_2,param_3,param_4,lVar1,pbVar2);
  }
  FUN_1447dd35a(param_1);
  return param_2;
}



// FUNCTION 142a10aac FUN_142a10aac body=3481 status=ok
// SIG undefined FUN_142a10aac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a10aac(void)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined **local_60;
  undefined8 uStack_58;
  char *local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = "ProximityProperties";
  local_40 = 0x13;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c996fe0 = (ulonglong)uVar3;
  local_48 = "DistanceThreshold";
  local_40 = 0x11;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c996fe8 = (ulonglong)uVar3;
  local_48 = "DetectionMethod";
  local_40 = 0xf;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c996ff0 = (ulonglong)uVar3;
  local_48 = "AsConnectionGraph";
  local_40 = 0x11;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c996ff8 = (ulonglong)uVar3;
  local_48 = "ConnectionGraphContactAmount";
  local_40 = 0x1c;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c997000 = (ulonglong)uVar3;
  local_48 = "RequireContactAmount";
  local_40 = 0x14;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c997008 = (ulonglong)uVar3;
  local_48 = "ContactMethod";
  local_40 = 0xd;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c997010 = (ulonglong)uVar3;
  local_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = (undefined8 *)0x1;
  FUN_14282b410(L"/Script/Chaos",0,0,&PTR_FUN_149f64e00);
  local_48 = "GUID";
  local_40 = 4;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c997030 = (ulonglong)uVar3;
  uStack_58 = 1;
  local_60 = &PTR_FUN_149f65e50;
  local_68 = (undefined8 *)0x5;
  FUN_14282b410(L"/Script/Chaos",0,0,&PTR_FUN_149f65e70);
  local_48 = (char *)((ulonglong)local_48 & 0xffffffff00000000);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14c9970c8,L"p.gc.logcachereduction",&local_48,
                L"Logs amount of data removed from a cache after processing");
  atexit(FUN_142a09993);
  local_48 = "Transform";
  local_40 = 9;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c9974a8 = (ulonglong)uVar3;
  local_48 = "Transform";
  local_40 = 9;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c9974b0 = (ulonglong)uVar3;
  local_48 = "Parent";
  local_40 = 6;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c9974b8 = (ulonglong)uVar3;
  local_48 = "Children";
  local_40 = 8;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c9974c0 = (ulonglong)uVar3;
  local_48 = "Particles";
  local_40 = 9;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  _DAT_14c9970e0 = (ulonglong)uVar3;
  local_48 = "Level";
  local_40 = 5;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c9974a0 = (ulonglong)uVar3;
  local_48 = "Convex";
  local_40 = 6;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c9974c8 = (ulonglong)uVar3;
  local_48 = "ConvexHull";
  local_40 = 10;
  local_3c = 0;
  uVar3 = FUN_14001a6c0(&local_48,1);
  DAT_14c9974d0 = (ulonglong)uVar3;
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c9970e8,L"p.Chaos.Solver.UseParticlePool",&DAT_14c75f324,
                L"Whether or not to use dirty particle pool (Optim)");
  atexit(FUN_142a099d8);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9970f8,L"p.Chaos.Solver.ParticlePoolNumFrameUntilShrink",&DAT_14c75f328,
                L"Num Frame until we can potentially shrink the pool");
  atexit(FUN_142a09a1d);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c997108,L"p.Chaos.Solver.Joint.UseLinearSolver",&DAT_14c75f32c,
                L"Use linear version of joint solver. (default is true");
  atexit(FUN_142a09a62);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c997118,L"p.Chaos.Solver.Collision.Enabled",&DAT_14c75f32d,
                L"Enable/Disable collisions in the main scene.");
  atexit(FUN_142a09aa7);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c997130,L"p.Chaos.Solver.ShrinkArrays",&DAT_14c997128,
                L"Enable/Disable particle array shrinking in the main scene");
  atexit(FUN_142a09aec);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c997140,L"p.Chaos.ArrayCollection.MaxSlackFraction",&DAT_14c75f330,
                L"Shrink particle arrays if the number of slack elements exceeds the number of elements by this fraction"
               );
  atexit(FUN_142a09b31);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997150,L"p.Chaos.ArrayCollection.MinSlack",&DAT_14c75f334,
                L"Do not reduce the size of particle arrays if it would leave less slack than this")
  ;
  atexit(FUN_142a09b76);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997160,L"p.Chaos.Solver.Collision.PositionFrictionIterations",&DAT_14c75f338
                ,L"Override number of position iterations where friction is applied (if >= 0)");
  atexit(FUN_142a09bbb);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997170,L"p.Chaos.Solver.Collision.VelocityFrictionIterations",&DAT_14c75f33c
                ,L"Override number of velocity iterations where friction is applied (if >= 0)");
  atexit(FUN_142a09c00);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997180,L"p.Chaos.Solver.Collision.PositionShockPropagationIterations",
                &DAT_14c75f340,
                L"Override number of position iterations where shock propagation is applied (if >= 0)"
               );
  atexit(FUN_142a09c45);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997190,L"p.Chaos.Solver.Collision.VelocityShockPropagationIterations",
                &DAT_14c75f344,
                L"Override number of velocity iterations where shock propagation is applied (if >= 0)"
               );
  atexit(FUN_142a09c8a);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9971a0,L"p.Chaos.Solver.Iterations.Position",&DAT_14c75f348,
                L"Override number of solver position iterations (-1 to use config)");
  atexit(FUN_142a09ccf);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9971b0,L"p.Chaos.Solver.Iterations.Velocity",&DAT_14c75f34c,
                L"Override number of solver velocity iterations (-1 to use config)");
  atexit(FUN_142a09d14);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9971c0,L"p.Chaos.Solver.Iterations.Projection",&DAT_14c75f350,
                L"Override number of solver projection iterations (-1 to use config)");
  atexit(FUN_142a09d59);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9971d0,L"p.Chaos.Solver.Deterministic",&DAT_14c75f354,
                L"Override determinism. 0: disabled; 1: enabled; -1: use config");
  atexit(FUN_142a09d9e);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c9971e0,L"p.Chaos.Solver.Joint.PositionTolerance",&DAT_14c75f358,
                L"PositionTolerance.");
  atexit(FUN_142a09de3);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c9971f0,L"p.Chaos.Solver.Joint.AngleTolerance",&DAT_14c75f35c,
                L"AngleTolerance.");
  atexit(FUN_142a09e28);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c997200,L"p.Chaos.Solver.Joint.MinParentMassRatio",&DAT_14c75f360,
                L"6Dof joint MinParentMassRatio (if > 0)");
  atexit(FUN_142a09e6d);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c997210,L"p.Chaos.Solver.Joint.MaxInertiaRatio",&DAT_14c75f364,
                L"6Dof joint MaxInertiaRatio (if > 0)");
  atexit(FUN_142a09eb2);
  DAT_14c997228 = (undefined8 *)0x0;
  DAT_14c997230 = 0;
  FUN_1446efa72(&DAT_14c997228,0,2,0x10);
  puVar1 = DAT_14c997228;
  DAT_14c997230 = 2;
  *DAT_14c997228 = &PTR_LAB_149e170a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  puVar1[2] = lVar4;
  *puVar1 = &PTR_FUN_149f6adc0;
  atexit(FUN_142a09ef7);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_1417288fa(&DAT_14c997238,L"p.Chaos.Solver.Collision.CullDistance",&DAT_14c75f368,
                L"Override cull distance (if >= 0)");
  atexit(FUN_142a09f52);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_1417288fa(&DAT_14c997248,L"p.Chaos.Solver.Collision.VelocityBoundsMultiplier",&DAT_14c75f36c,
                L"Override velocity bounds multiplier (if >= 0)");
  atexit(FUN_142a09f97);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_1417288fa(&DAT_14c997258,L"p.Chaos.Solver.Collision.MaxVelocityBoundsExpansion",&DAT_14c75f370
                ,L"Override max velocity bounds expansion (if >= 0)");
  atexit(FUN_142a09fdc);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_1417288fa(&DAT_14c997268,L"p.Chaos.Solver.Collision.VelocityBoundsMultiplierMACD",
                &DAT_14c75f374,L"Override velocity bounds multiplier for MACD (if >= 0)");
  atexit(FUN_142a0a021);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_1417288fa(&DAT_14c997278,L"p.Chaos.Solver.Collision.MaxVelocityBoundsExpansionMACD",
                &DAT_14c75f378,L"Override max velocity bounds expansion for MACD (if >= 0)");
  atexit(FUN_142a0a066);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_1417288fa(&DAT_14c997288,L"p.Chaos.Solver.Collision.MaxPushOutVelocity",&DAT_14c75f37c,
                L"Override max pushout velocity (if >= 0)");
  atexit(FUN_142a0a0ab);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_1417288fa(&DAT_14c997298,L"p.Chaos.Solver.Collision.DepenetrationVelocity",&DAT_14c75f380,
                L"Override initial overlap depenetration velocity (if >= 0)");
  atexit(FUN_142a0a0f0);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9972a8,L"p.Chaos.Solver.CleanupCommandsOnDestruction",&DAT_14c75f384,
                L"Whether or not to run internal command queue cleanup on solver destruction (0 = no cleanup, >0 = cleanup all commands)"
               );
  atexit(FUN_142a0a135);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9972c0,L"p.Chaos.Solver.Collision.DeferNarrowPhase",&DAT_14c9972b8,
                L"Create contacts for all broadphase pairs, perform NarrowPhase later.");
  atexit(FUN_142a0a17a);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9972d0,L"p.Chaos.Solver.Collision.UseManifolds",&DAT_14c75f388,
                L"Enable/Disable use of manifolds in collision.");
  atexit(FUN_142a0a1bf);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c9972e0,L"p.Chaos.Solver.Collision.AllowManifoldUpdate",&DAT_14c75f38c,
                L"Enable/Disable reuse of manifolds between ticks (for small movement).");
  atexit(FUN_142a0a204);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_14171ec12(&DAT_14c9972f0,L"p.Chaos.Solver.UseCCD",&DAT_14c75f390,
                L"Global flag to turn CCD on or off. Default is true (on)");
  atexit(FUN_142a0a249);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_14171ec12(&DAT_14c997300,L"p.Chaos.Solver.UseMACD",&DAT_14c75f3b1,
                L"Global flag to turn Movement-Aware Collision Detection (MACD) on or off. Default is true (on)"
               );
  atexit(FUN_142a0a28e);
  local_60 = (undefined **)((ulonglong)local_60 & 0xffffffff00000000);
  local_68 = &DAT_14c997228;
  FUN_14171ec12(&DAT_14c997310,L"p.Chaos.Solver.bChaosForceMACD",&DAT_14c9974ec,
                L"Force all collisions to use MACD for testing");
  atexit(FUN_142a0a2d3);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c997328,L"p.Chaos.Solver.Joint.MinSolverStiffness",&DAT_14c75f394,
                L"Solver stiffness on first iteration, increases each iteration toward MaxSolverStiffness."
               );
  atexit(FUN_142a0a318);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c997338,L"p.Chaos.Solver.Joint.MaxSolverStiffness",&DAT_14c75f398,
                L"Solver stiffness on last iteration, increases each iteration from MinSolverStiffness."
               );
  atexit(FUN_142a0a35d);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997348,L"p.Chaos.Solver.Joint.NumIterationsAtMaxSolverStiffness",
                &DAT_14c75f39c,L"How many iterations we want at MaxSolverStiffness.");
  atexit(FUN_142a0a3a2);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c997358,L"p.Chaos.Solver.Joint.SolvePositionLast",&DAT_14c75f3a0,
                L"Should we solve joints in position-then-rotation order (false) or rotation-then-position order (true, default)"
               );
  atexit(FUN_142a0a3e7);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c997368,L"p.Chaos.Solver.Joint.UsePBDDrives",&DAT_14c75f3a1,
                L"Whether to solve drives in the position or velocity phase of the solver (default true"
               );
  atexit(FUN_142a0a42c);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997378,L"p.Chaos.Solver.Joint.NumShockPropagationIterations",&DAT_14c997320,
                L"How many iterations to enable SHockProagation for.");
  atexit(FUN_142a0a471);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c997388,L"p.Chaos.Solver.Joint.ShockPropagation",&DAT_14c75f3a4,
                L"6Dof joint shock propagation override (if >= 0).");
  atexit(FUN_142a0a4b6);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997398,L"p.Chaos.VisualDebuggerEnable",&DAT_14c75f3a8,
                L"Enable/Disable pushing/saving data to the visual debugger");
  atexit(FUN_142a0a4fb);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c9973a8,L"p.Chaos.RemoveParticleFromMovingKinematicsOnDisable",&DAT_14c75f3b3
                ,&DAT_149dfb77a);
  atexit(FUN_142a0a540);
  local_48 = (char *)((ulonglong)local_48 & 0xffffffff00000000);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14c9973b8,L"p.gbx.Chaos.GbxValidProxyParticleOwnership",&local_48,
                L"To enable validation on proxies owning particles referencing them.\n0: Disable.\n1: Enable the refcounting and try to avoid crash."
               );
  atexit(FUN_142a0a585);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c9973d8,L"np2.Resim.ApplyTargetsWhileResimulating",&DAT_14c9973d0,
                L"If false, target states from the server are only applied on rewind. If true, target states from the server are applied during resimulation if there are any available."
               );
  atexit(FUN_142a0a5ca);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_1415c789c(&DAT_14c9973e8,L"p.MaxBoundsForTree",&DAT_14c75f3ac,
                L"The max bounds before moving object into a large objects structure. Only applies on object registration"
               );
  atexit(FUN_142a0acbb);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997400,L"p.LogCorruptMap",&DAT_14c9973f8,&DAT_149dfb77a);
  atexit(FUN_142a0ad00);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_14153156c(&DAT_14c997410,L"p.Resim.DelayDestroyObject",&DAT_14c75f3b0,
                L"Keep physics objects and physics proxy available until after they go out of rewind history. Disabled by default due to not fully implemented."
               );
  atexit(FUN_142a0ad45);
  local_68 = (undefined8 *)((ulonglong)local_68 & 0xffffffff00000000);
  FUN_141471170(&DAT_14c997428,L"p.LogDirtyParticles",&DAT_14c997420,
                L"Logs out which particles are dirty every frame");
  atexit(FUN_142a0d514);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a11848 FUN_142a11848 body=69 status=ok
// SIG undefined FUN_142a11848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a11848(void)

{
  _DAT_14c9974f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a1188a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9974f8,1);
  return;
}



// FUNCTION 142a1188e FUN_142a1188e body=794 status=ok
// SIG undefined FUN_142a1188e(void)

void FUN_142a1188e(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong *plVar15;
  byte bVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x128) != 0)) {
    *(byte *)(param_1 + 0x40) =
         (*(byte *)(param_1 + 0x40) & 0xfc | *(char *)(param_1 + 0x91) * '\x02') + 1;
    if (*(longlong *)(param_2 + 0x9c8) != 0) {
      local_1c = *(undefined4 *)(*(longlong *)(param_1 + 0x128) + 0x58);
      local_38 = &local_1c;
      lVar18 = *(longlong *)(param_2 + 0x9c8) + 0x560;
      local_40 = 0xffffffff;
      local_30 = *(undefined4 *)(param_1 + 0x110);
      local_2c = *(undefined4 *)(param_1 + 0x114);
      local_28 = *(undefined4 *)(param_1 + 0x11c);
      uVar14 = FUN_14298b25c(lVar18,param_1 + 0x48);
      *(undefined4 *)(param_1 + 0x150) = uVar14;
      plVar15 = (longlong *)FUN_1401961f6(lVar18,uVar14);
      if (plVar15 != (longlong *)0x0) {
        plVar8 = (longlong *)*plVar15;
        *(longlong **)(param_1 + 0x148) = plVar8;
        *(longlong *)(*(longlong *)(*plVar8 + 200) + (longlong)(int)plVar8[1] * 8) = param_1;
        *(undefined8 *)
         (*(longlong *)(**(longlong **)(param_1 + 0x148) + 0xb0) +
         (longlong)(int)(*(longlong **)(param_1 + 0x148))[1] * 8) = *(undefined8 *)(param_1 + 0x128)
        ;
        lVar17 = (longlong)(int)(*(longlong **)(param_1 + 0x148))[1];
        lVar18 = *(longlong *)(**(longlong **)(param_1 + 0x148) + 0x680);
        *(byte *)(lVar18 + lVar17) =
             *(byte *)(lVar18 + lVar17) & 0xfb | *(char *)(param_1 + 0x119) << 2;
        uVar10 = *(undefined8 *)(param_1 + 0xd8);
        uVar4 = *(undefined8 *)(param_1 + 0xe0);
        lVar17 = (longlong)(int)(*(longlong **)(param_1 + 0x148))[1];
        lVar18 = *(longlong *)(**(longlong **)(param_1 + 0x148) + 0x28);
        puVar1 = (undefined8 *)(lVar18 + lVar17 * 0x18);
        *puVar1 = *(undefined8 *)(param_1 + 0xd0);
        puVar1[1] = uVar10;
        *(undefined8 *)(lVar18 + 0x10 + lVar17 * 0x18) = uVar4;
        dVar5 = *(double *)(param_1 + 200);
        dVar6 = *(double *)(param_1 + 0xc0);
        dVar7 = *(double *)(param_1 + 0xb8);
        lVar18 = *(longlong *)(**(longlong **)(param_1 + 0x148) + 0x48);
        lVar17 = (longlong)(int)(*(longlong **)(param_1 + 0x148))[1] * 0x10;
        *(float *)(lVar18 + lVar17) = (float)*(double *)(param_1 + 0xb0);
        *(float *)(lVar18 + 4 + lVar17) = (float)dVar7;
        *(float *)(lVar18 + 8 + lVar17) = (float)dVar6;
        *(float *)(lVar18 + 0xc + lVar17) = (float)dVar5;
        lVar17 = (longlong)(int)(*(longlong **)(param_1 + 0x148))[1];
        lVar18 = *(longlong *)(**(longlong **)(param_1 + 0x148) + 0x278);
        *(undefined8 *)(lVar18 + lVar17 * 0xc) = 0;
        *(undefined4 *)(lVar18 + 8 + lVar17 * 0xc) = 0;
        lVar17 = (longlong)(int)(*(longlong **)(param_1 + 0x148))[1];
        lVar18 = *(longlong *)(**(longlong **)(param_1 + 0x148) + 0x290);
        *(undefined8 *)(lVar18 + lVar17 * 0xc) = 0;
        *(undefined4 *)(lVar18 + 8 + lVar17 * 0xc) = 0;
        lVar18 = **(longlong **)(param_1 + 0x148);
        lVar17 = *(longlong *)(lVar18 + 0x28);
        lVar9 = (longlong)(int)(*(longlong **)(param_1 + 0x148))[1] * 0x18;
        lVar18 = *(longlong *)(lVar18 + 0x530);
        *(undefined8 *)(lVar18 + 0x10 + lVar9) = *(undefined8 *)(lVar17 + 0x10 + lVar9);
        puVar1 = (undefined8 *)(lVar17 + lVar9);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(lVar18 + lVar9);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        lVar18 = **(longlong **)(param_1 + 0x148);
        lVar17 = (longlong)(int)(*(longlong **)(param_1 + 0x148))[1] * 0x10;
        puVar1 = (undefined8 *)(*(longlong *)(lVar18 + 0x48) + lVar17);
        uVar4 = puVar1[1];
        puVar2 = (undefined8 *)(*(longlong *)(lVar18 + 0x548) + lVar17);
        *puVar2 = *puVar1;
        puVar2[1] = uVar4;
        dVar5 = (double)DAT_14c846338;
        dVar6 = (double)DAT_14c846330._4_4_;
        lVar17 = (longlong)(int)(*(longlong **)(param_1 + 0x148))[1];
        lVar18 = *(longlong *)(**(longlong **)(param_1 + 0x148) + 0x3e0);
        *(double *)(lVar18 + lVar17 * 0x18) = (double)(float)DAT_14c846330;
        *(double *)(lVar18 + 8 + lVar17 * 0x18) = dVar6;
        *(double *)(lVar18 + 0x10 + lVar17 * 0x18) = dVar5;
        uVar4 = DAT_14c8463e8;
        uVar13 = DAT_14c8463d8._4_4_;
        uVar12 = (undefined4)DAT_14c8463d8;
        uVar11 = DAT_14c8463d0._4_4_;
        uVar14 = (undefined4)DAT_14c8463d0;
        lVar18 = *(longlong *)(**(longlong **)(param_1 + 0x148) + 0x3f8);
        lVar17 = (longlong)(int)(*(longlong **)(param_1 + 0x148))[1] * 0x20;
        puVar1 = (undefined8 *)(lVar18 + 0x10 + lVar17);
        *puVar1 = DAT_14c8463e0;
        puVar1[1] = uVar4;
        puVar3 = (undefined4 *)(lVar18 + lVar17);
        *puVar3 = uVar14;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
        puVar3[3] = uVar13;
        bVar16 = *(byte *)(plVar15 + 0x1f);
        *(byte *)(plVar15 + 0x1f) = bVar16 & 0xfe;
        bVar16 = bVar16 & 0xfa | *(char *)(param_1 + 0x118) << 2;
        *(byte *)(plVar15 + 0x1f) = bVar16;
        *(byte *)(plVar15 + 0x1f) = bVar16 & 0xf6 | *(char *)(param_1 + 0x11a) << 3;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a11baa FUN_142a11baa body=3454 status=ok
// SIG undefined FUN_142a11baa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a11baa(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  double *pdVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  float *pfVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  double *pdVar30;
  longlong lVar31;
  uint uVar32;
  longlong lVar33;
  double dVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
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
  double dVar59;
  double dVar60;
  undefined1 auStack_318 [32];
  undefined1 local_2f8;
  undefined8 local_2e8;
  uint local_2dc;
  longlong local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined8 local_2c8;
  double dStack_2c0;
  undefined8 local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298 [12];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined1 local_1e8 [16];
  longlong local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  double dStack_190;
  undefined1 local_188 [16];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined1 local_108 [24];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if (((*(longlong *)(param_1 + 8) == 0) || (lVar31 = *(longlong *)(param_1 + 0x148), lVar31 == 0))
     || (lVar33 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x9c8), lVar33 == 0))
  goto LAB_142a11cfb;
  uVar16 = *(uint *)(param_4 + 8);
  pdVar30 = (double *)((longlong)param_3 * 0x30 + *(longlong *)(param_2 + 0x120));
  if (pdVar30 != (double *)0x0 && (uVar16 >> 0x12 & 1) != 0) {
    dStack_1a0 = (double)*(float *)((longlong)pdVar30 + 0x2c);
    local_1a8 = (double)*(float *)(pdVar30 + 5);
    dStack_1b0 = (double)*(float *)((longlong)pdVar30 + 0x24);
    local_1b8 = (double)*(float *)(pdVar30 + 4);
    local_198 = *pdVar30;
    dStack_190 = pdVar30[1];
    local_188._8_8_ = 0;
    local_188._0_8_ = pdVar30[2];
    local_178 = 0;
    uStack_174 = 0x3ff00000;
    uStack_170 = 0;
    uStack_16c = 0x3ff00000;
    local_168 = 0x3ff0000000000000;
    uStack_160 = 0;
    local_1c8 = 0.0;
    uStack_1c0 = 0;
    lVar25 = lVar33 + 0x560;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_2a8 = param_4;
    local_2a0 = param_2;
    lVar18 = FUN_1401961f6(lVar25,*(undefined4 *)(param_1 + 0x150));
    auVar15 = _DAT_149931180;
    local_2d8 = lVar33;
    if (((lVar18 != 0) && ((*(byte *)(lVar18 + 0xf8) & 1) == 0)) &&
       (iVar3 = *(int *)(lVar18 + 0x18), (longlong)iVar3 != 0)) {
      lVar31 = *(longlong *)(lVar18 + 0x10);
      lVar33 = 0;
      local_2c8 = 0.0;
      dStack_2c0 = 1.0;
      local_2e8 = lVar25;
      do {
        uVar26 = uStack_1c0;
        auVar43 = ZEXT816(0x3ff0000000000000);
        plVar5 = *(longlong **)(lVar31 + lVar33);
        if (((plVar5 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar5 + 0xc))) &&
           ((*(byte *)(*(longlong *)(*plVar5 + 0x680) + (longlong)(int)plVar5[1]) & 8) == 0)) {
          lVar25 = (longlong)(int)uStack_1c0;
          uVar16 = (int)uStack_1c0 + 1;
          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar16);
          if (uStack_1c0._4_4_ < uVar16) {
            FUN_1406b7a4a(&local_1c8,uVar26 & 0xffffffff);
          }
          puVar19 = local_298;
          *(longlong **)((longlong)local_1c8 + lVar25 * 8) = plVar5;
          lVar22 = (longlong)(int)plVar5[1];
          lVar25 = *(longlong *)(*plVar5 + 0x48);
          lVar23 = lVar22 * 0x10;
          lVar18 = *(longlong *)(*plVar5 + 0x28);
          local_238 = (double)*(float *)(lVar25 + lVar23);
          dStack_230 = (double)*(float *)(lVar25 + 4 + lVar23);
          local_228 = (double)*(float *)(lVar25 + 8 + lVar23);
          dStack_220 = (double)*(float *)(lVar25 + 0xc + lVar23);
          pdVar1 = (double *)(lVar18 + lVar22 * 0x18);
          local_218 = *pdVar1;
          dStack_210 = pdVar1[1];
          local_208 = *(double *)(lVar18 + 0x10 + lVar22 * 0x18);
          uStack_200 = 0;
          local_1f8 = 0;
          uStack_1f4 = 0x3ff00000;
          uStack_1f0 = 0;
          uStack_1ec = 0x3ff00000;
          local_1e8 = auVar43;
          local_158 = ZEXT816(0);
          local_148 = local_2c8;
          dStack_140 = dStack_2c0;
          local_128 = ZEXT816(0);
          local_138 = 0.0;
          dStack_130 = 0.0;
          local_118 = 1.0;
          dStack_110 = 1.0;
          dVar39 = local_1a8 * local_1a8 + local_1b8 * local_1b8;
          dVar44 = dStack_1a0 * dStack_1a0 + dStack_1b0 * dStack_1b0;
          local_108._0_16_ = auVar43;
          uVar26 = auVar15._0_8_;
          uVar27 = auVar15._8_8_;
          auVar37._8_8_ =
               -(ulonglong)
                (0.009999999776482582 < (double)((ulonglong)(1.0 - (dVar39 + dVar44)) & uVar27));
          auVar37._0_8_ =
               -(ulonglong)
                (0.009999999776482582 < (double)((ulonglong)(1.0 - (dVar39 + dVar44)) & uVar26));
          iVar17 = movmskpd((int)&local_138,auVar37);
          if (iVar17 == 0) {
            auVar36._8_8_ = 0x3ff0000000000000;
            auVar36._0_8_ = 0x3ff0000000000000;
            auVar40._4_4_ = uStack_174;
            auVar40._0_4_ = local_178;
            auVar40._8_4_ = uStack_170;
            auVar40._12_4_ = uStack_16c;
            auVar37 = minpd(auVar36,auVar40);
            auVar13._8_8_ = uStack_160;
            auVar13._0_8_ = local_168;
            auVar40 = minpd(auVar43,auVar13);
            auVar43._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
            auVar43._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
            iVar17 = movmskpd(0,auVar43);
            auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
            auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
            uVar16 = movmskpd((int)lVar23,auVar41);
            if ((uVar16 & 0x3fffffff) == 0 && iVar17 == 0) {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c8460b0) &&
                 (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1)) {
                DAT_14c8460a0 = 0x322bcc77322bcc77;
                DAT_14c8460a8 = 0x322bcc77322bcc77;
                _Init_thread_footer(&DAT_14c8460b0);
              }
              auVar12._8_4_ = uStack_170;
              auVar12._0_8_ = CONCAT44(uStack_174,local_178);
              auVar12._12_4_ = uStack_16c;
              auVar42._8_8_ = 0x3ff0000000000000;
              auVar42._0_8_ = 0x3ff0000000000000;
              auVar43 = divpd(auVar42,auVar12);
              auVar14._8_8_ = uStack_160;
              auVar14._0_8_ = local_168;
              auVar37 = divpd(ZEXT816(0x3ff0000000000000),auVar14);
              dVar34 = (double)(-(ulonglong)
                                 ((double)(float)DAT_14c8460a0 <
                                 (double)(CONCAT44(uStack_174,local_178) & uVar26)) & auVar43._0_8_)
              ;
              dVar38 = (double)(-(ulonglong)
                                 ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) <
                                 (double)(auVar12._8_8_ & uVar27)) & auVar43._8_8_);
              dVar48 = (double)(-(ulonglong)
                                 ((double)(float)DAT_14c8460a8 < (double)(local_168 & uVar26)) &
                               auVar37._0_8_);
              dVar7 = local_218 - local_198;
              dVar8 = dStack_210 - dStack_190;
              dVar47 = local_208 - (double)local_188._0_8_;
              dVar10 = -local_1b8;
              dVar11 = -dStack_1b0;
              dVar39 = local_1a8 * -1.0;
              dVar44 = dStack_1a0 * 1.0;
              dVar45 = dVar8 * dVar10 - dVar7 * dVar11;
              dVar46 = dVar47 * dVar11 - dVar8 * dVar39;
              dVar59 = dVar7 * dVar39 - dVar47 * dVar10;
              dVar60 = dVar44 * 0.0 - dVar44 * 0.0;
              dVar46 = dVar46 + dVar46;
              dVar59 = dVar59 + dVar59;
              dVar45 = dVar45 + dVar45;
              dVar60 = dVar60 + dVar60;
              dVar9 = ((dVar60 * dVar44 - dVar60 * dVar44) + dVar44 * dVar60 + 0.0) * 0.0;
              dVar60 = local_238 * dVar39 * 1.0 +
                       ((dStack_230 * dVar44 - local_1b8 * local_228 * -1.0) -
                       dStack_220 * dStack_1b0);
              local_118 = (double)CONCAT44(uStack_1f4,local_1f8) * dVar34;
              dStack_110 = (double)CONCAT44(uStack_1ec,uStack_1f0) * dVar38;
              local_108._8_8_ = (double)local_1e8._8_8_ * 0.0;
              local_108._0_8_ = (double)local_1e8._0_8_ * dVar48;
              local_138 = ((dVar45 * dVar11 - dVar39 * dVar59) + dVar44 * dVar46 + dVar7) * dVar34;
              dStack_130 = ((dVar46 * dVar39 - dVar45 * dVar10) + dVar44 * dVar59 + dVar8) * dVar38;
              local_128._8_4_ = SUB84(dVar9,0);
              local_128._0_8_ =
                   ((dVar59 * dVar10 - dVar11 * dVar46) + dVar44 * dVar45 + dVar47) * dVar48;
              local_128._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
              local_158._8_4_ = SUB84(dVar60,0);
              local_158._0_8_ =
                   dStack_230 * dVar39 * -1.0 +
                   ((local_238 * dVar44 - local_1b8 * dStack_220 * 1.0) - local_228 * dStack_1b0);
              local_158._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
              local_148 = dStack_220 * dVar39 * 1.0 +
                          dStack_1b0 * local_238 +
                          (dVar44 * local_228 - local_1b8 * dStack_230 * 1.0);
              dStack_140 = local_228 * dVar39 * -1.0 +
                           dStack_1b0 * dStack_230 +
                           (dVar44 * dStack_220 - local_1b8 * local_238 * -1.0);
            }
            else {
              FUN_1402db8fa(local_158,&local_238,&local_1b8);
            }
            lVar25 = 0xc;
            puVar20 = (undefined8 *)local_158;
            puVar19 = local_298;
          }
          else {
            lVar25 = 0xc;
            puVar20 = &DAT_14c846480;
          }
          for (; uVar26 = uStack_1d0, lVar25 != 0; lVar25 = lVar25 + -1) {
            *puVar19 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar19 = puVar19 + 1;
          }
          lVar25 = (longlong)(int)uStack_1d0;
          uVar16 = (int)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar16);
          if (uStack_1d0._4_4_ < uVar16) {
            FUN_144a2c682(&local_1d8,uVar26 & 0xffffffff);
          }
          puVar19 = local_298;
          puVar20 = (undefined8 *)(lVar25 * 0x60 + local_1d8);
          for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
            *puVar20 = *puVar19;
            puVar19 = puVar19 + 1;
            puVar20 = puVar20 + 1;
          }
        }
        lVar33 = lVar33 + 8;
      } while ((longlong)iVar3 * 8 != lVar33);
      lVar31 = *(longlong *)(param_1 + 0x148);
      lVar25 = local_2e8;
    }
    lVar33 = local_2d8;
    dStack_140 = (double)*(float *)((longlong)pdVar30 + 0x2c);
    local_148 = (double)*(float *)(pdVar30 + 5);
    local_158._8_8_ = (double)*(float *)((longlong)pdVar30 + 0x24);
    local_158._0_8_ = (double)*(float *)(pdVar30 + 4);
    local_2f8 = 1;
    FUN_1447eb820(local_2d8,lVar31,pdVar30);
    if (((int)uStack_1c0 != 0) && ((int)uStack_1d0 != 0)) {
      local_2f8 = 0;
      FUN_142991092(lVar25,*(undefined4 *)(param_1 + 0x150),&local_1c8,&local_1d8);
    }
    FUN_1456cc230(*(undefined8 *)(lVar33 + 0x2c8),*(undefined8 *)(param_1 + 0x148),1);
    plVar5 = *(longlong **)(param_1 + 0x148);
    lVar18 = (longlong)(int)plVar5[1];
    lVar25 = lVar18 * 3;
    lVar31 = *(longlong *)(*plVar5 + 0x48);
    lVar22 = lVar18 * 0x10;
    dStack_140 = (double)*(float *)(lVar31 + 0xc + lVar22);
    lVar33 = *(longlong *)(*plVar5 + 0x28);
    local_148 = (double)*(float *)(lVar31 + 8 + lVar22);
    local_158._8_8_ = (double)*(float *)(lVar31 + 4 + lVar22);
    local_158._0_8_ = (double)*(float *)(lVar31 + lVar22);
    pdVar30 = (double *)(lVar33 + lVar18 * 0x18);
    local_138 = *pdVar30;
    dStack_130 = pdVar30[1];
    local_128._8_8_ = 0;
    local_128._0_8_ = *(ulonglong *)(lVar33 + 0x10 + lVar18 * 0x18);
    local_118 = 1.0;
    dStack_110 = 1.0;
    local_108._0_16_ = ZEXT816(0x3ff0000000000000);
    lVar33 = *plVar5;
    lVar18 = plVar5[1];
    lVar31 = *(longlong *)(lVar33 + 0xf8) + (longlong)(int)lVar18 * 0x18;
    iVar3 = *(int *)(lVar31 + 0x10);
    lVar22 = *(longlong *)(lVar31 + 8);
    if (*(longlong *)(lVar31 + 8) == 0) {
      lVar22 = lVar31;
    }
    if ((longlong)iVar3 < 1) {
      uVar50 = 0;
      uVar52 = 0;
      uVar35 = 0;
      uVar57 = 0;
      uVar58 = 0;
      uVar55 = 0;
      uVar56 = 0;
      dVar45 = 0.0;
      dVar44 = 0.0;
      dVar39 = 0.0;
      uVar49 = uVar50;
      uVar51 = uVar52;
      if (iVar3 != 0) goto LAB_142a12569;
    }
    else {
      uVar35 = 0x7fefffffffffffff;
      uVar49 = 0xffffffff;
      uVar51 = 0xffefffff;
LAB_142a12569:
      lVar31 = 0;
      dVar39 = (double)CONCAT44(uVar51,uVar49);
      uVar50 = (undefined4)uVar35;
      uVar52 = (undefined4)((ulonglong)uVar35 >> 0x20);
      uVar53 = uVar49;
      uVar54 = uVar51;
      uVar55 = uVar50;
      uVar56 = uVar52;
      uVar57 = uVar50;
      uVar58 = uVar52;
      do {
        lVar23 = *(longlong *)(lVar22 + lVar31);
        if ((*(byte *)(lVar23 + 8) & 3) == 0) {
          FUN_146e22506(lVar23,local_158);
        }
        else {
          FUN_1447269c8(lVar23,local_158);
        }
        lVar23 = *(longlong *)(lVar22 + lVar31);
        dVar44 = *(double *)(lVar23 + 0x28);
        if (dVar44 <= (double)CONCAT44(uVar56,uVar55)) {
          uVar55 = SUB84(dVar44,0);
          uVar56 = (undefined4)((ulonglong)dVar44 >> 0x20);
        }
        dVar44 = *(double *)(lVar23 + 0x20);
        if (dVar44 <= (double)CONCAT44(uVar58,uVar57)) {
          uVar57 = SUB84(dVar44,0);
          uVar58 = (undefined4)((ulonglong)dVar44 >> 0x20);
        }
        dVar44 = *(double *)(lVar23 + 0x18);
        if (dVar44 <= (double)CONCAT44(uVar52,uVar50)) {
          uVar50 = SUB84(dVar44,0);
          uVar52 = (undefined4)((ulonglong)dVar44 >> 0x20);
        }
        if (dVar39 <= *(double *)(lVar23 + 0x40)) {
          dVar39 = *(double *)(lVar23 + 0x40);
        }
        dVar44 = *(double *)(lVar23 + 0x38);
        if ((double)CONCAT44(uVar51,uVar49) <= dVar44) {
          uVar49 = SUB84(dVar44,0);
          uVar51 = (undefined4)((ulonglong)dVar44 >> 0x20);
        }
        dVar44 = *(double *)(lVar23 + 0x30);
        if ((double)CONCAT44(uVar54,uVar53) <= dVar44) {
          uVar53 = SUB84(dVar44,0);
          uVar54 = (undefined4)((ulonglong)dVar44 >> 0x20);
        }
        lVar31 = lVar31 + 8;
      } while ((longlong)iVar3 * 8 != lVar31);
      dVar45 = (double)CONCAT44(uVar54,uVar53) + 0.0;
      dVar44 = (double)CONCAT44(uVar51,uVar49) + 0.0;
      dVar39 = dVar39 + 0.0;
    }
    lVar31 = *(longlong *)(lVar33 + 0x140);
    lVar33 = (longlong)(int)lVar18 * 0x30;
    *(ulonglong *)(lVar31 + lVar33) = CONCAT44(uVar52,uVar50);
    *(ulonglong *)(lVar31 + 8 + lVar33) = CONCAT44(uVar58,uVar57);
    *(ulonglong *)(lVar31 + 0x10 + lVar33) = CONCAT44(uVar56,uVar55);
    *(double *)(lVar31 + 0x18 + lVar33) = dVar45;
    *(double *)(lVar31 + 0x20 + lVar33) = dVar44;
    *(double *)(lVar31 + 0x28 + lVar33) = dVar39;
    plVar5 = *(longlong **)(param_1 + 0x148);
    bVar2 = *(byte *)((longlong)plVar5 + 0xc);
    lVar25 = CONCAT71((int7)((ulonglong)lVar25 >> 8),1 < bVar2);
    lVar31 = *plVar5;
    lVar18 = (longlong)(int)plVar5[1];
    lVar33 = local_2d8;
    if ((plVar5 == (longlong *)0x0 || 1 >= bVar2) ||
       (lVar25 = lVar18 * 0x10, *(char *)(*(longlong *)(lVar31 + 0x2c0) + 0xd + lVar25) != '\x01'))
    {
LAB_142a126c0:
      if ((*(char *)(*(longlong *)(lVar31 + 0xe0) + lVar18) != '\0') || (DAT_14c9978a0 != 0)) {
        uVar49 = *(undefined4 *)(*(longlong *)(lVar31 + 0x80) + lVar18 * 4);
        puVar19 = (undefined8 *)
                  FUN_1447eab44(local_2d8 + 0x360,uVar49,CONCAT71((int7)((ulonglong)lVar25 >> 8),1))
        ;
        lVar33 = local_2d8;
        *(undefined1 *)(puVar19 + 8) = 2;
        lVar31 = *plVar5;
        lVar25 = (longlong)(int)plVar5[1];
        uVar26 = *(ulonglong *)(lVar31 + 0xb0);
        local_2b0 = *(undefined8 *)(uVar26 + lVar25 * 8);
        local_2d0 = *(undefined4 *)(*(longlong *)(lVar31 + 0x80) + lVar25 * 4);
        lVar31 = *(longlong *)(lVar31 + 0xf8) + lVar25 * 0x18;
        lVar25 = *(longlong *)(lVar31 + 8);
        if (*(longlong *)(lVar31 + 8) == 0) {
          lVar25 = lVar31;
        }
        if ((longlong)*(int *)(lVar31 + 0x10) == 0) {
          local_2dc = 0;
          uVar28 = 0;
          local_2e8 = (ulonglong)local_2e8._4_4_ << 0x20;
          local_2c8 = (double)((ulonglong)local_2c8._4_4_ << 0x20);
          uVar32 = 0;
          uVar29 = 0;
          uVar16 = 0;
          uVar21 = 0;
        }
        else {
          lVar18 = (longlong)*(int *)(lVar31 + 0x10) * 8;
          lVar31 = 0;
          local_2c8 = (double)((ulonglong)local_2c8._4_4_ << 0x20);
          local_2e8 = (ulonglong)local_2e8._4_4_ << 0x20;
          uVar28 = 0;
          local_2dc = 0;
          do {
            lVar22 = *(longlong *)(lVar25 + lVar31);
            if (lVar22 != 0) {
              uVar26 = (ulonglong)((*(uint *)(lVar22 + 8) & 3) == 0);
              if ((*(byte *)(lVar22 + 0x71 + uVar26 * 8) & 2) != 0) {
                uVar26 = (ulonglong)((*(uint *)(lVar22 + 8) & 3) == 0);
                uVar28 = uVar28 | *(uint *)(lVar22 + 0x48 + uVar26 * 8);
                local_2e8 = CONCAT44(local_2e8._4_4_,
                                     (uint)local_2e8 | *(uint *)(lVar22 + 0x4c + uVar26 * 8));
                local_2c8 = (double)CONCAT44(local_2c8._4_4_,
                                             (uint)local_2c8 | *(uint *)(lVar22 + 0x50 + uVar26 * 8)
                                            );
                local_2dc = local_2dc | *(uint *)(lVar22 + 0x54 + uVar26 * 8);
              }
            }
            lVar31 = lVar31 + 8;
          } while (lVar18 != lVar31);
          lVar31 = 0;
          uVar32 = 0;
          uVar29 = 0;
          uVar16 = 0;
          uVar21 = 0;
          do {
            lVar22 = *(longlong *)(lVar25 + lVar31);
            if (lVar22 != 0) {
              uVar4 = *(uint *)(lVar22 + 8);
              uVar26 = (ulonglong)uVar4;
              if ((*(byte *)(lVar22 + 0x71 + (ulonglong)((uVar4 & 3) == 0) * 8) & 5) != 0) {
                uVar27 = (ulonglong)((uVar4 & 3) == 0);
                uVar32 = uVar32 | *(uint *)(lVar22 + 0x58 + uVar27 * 8);
                uVar29 = uVar29 | *(uint *)(lVar22 + 0x5c + uVar27 * 8);
                uVar16 = uVar16 | *(uint *)(lVar22 + 0x60 + uVar27 * 8);
                uVar21 = uVar21 | *(uint *)(lVar22 + 100 + uVar27 * 8);
              }
            }
            lVar31 = lVar31 + 8;
          } while (lVar18 != lVar31);
        }
        *puVar19 = local_2b0;
        puVar19[1] = plVar5;
        *(undefined4 *)(puVar19 + 2) = local_2d0;
        *(uint *)((longlong)puVar19 + 0x14) = uVar28;
        *(uint *)(puVar19 + 3) = (uint)local_2e8;
        *(uint *)((longlong)puVar19 + 0x1c) = (uint)local_2c8;
        *(uint *)(puVar19 + 4) = local_2dc;
        *(uint *)((longlong)puVar19 + 0x24) = uVar32;
        *(uint *)(puVar19 + 5) = uVar29;
        *(uint *)((longlong)puVar19 + 0x2c) = uVar16;
        *(uint *)(puVar19 + 6) = uVar21;
        *(undefined1 *)((longlong)puVar19 + 0x34) = 1;
        *(undefined2 *)(puVar19 + 7) =
             *(undefined2 *)(*(longlong *)(*plVar5 + 0x170) + (longlong)(int)plVar5[1] * 2);
        local_2cc = uVar49;
        puVar20 = (undefined8 *)
                  FUN_1447eab44(local_2d8 + 0x380,uVar49,CONCAT71((int7)(uVar26 >> 8),1));
        for (lVar31 = 9; lVar31 != 0; lVar31 = lVar31 + -1) {
          *puVar20 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
        }
      }
    }
    else if ((2 < bVar2) &&
            ((plVar6 = *(longlong **)(*(longlong *)(lVar31 + 0x5a8) + lVar25),
             plVar6 != (longlong *)0x0 && (2 < *(byte *)((longlong)plVar6 + 0xc))))) {
      if (((*(byte *)(*(longlong *)(*plVar6 + 0x680) + (longlong)(int)plVar6[1]) & 1) != 0) &&
         (lVar25 = *(longlong *)(lVar31 + 200),
         *(longlong *)(*(longlong *)(*plVar6 + 200) + (longlong)(int)plVar6[1] * 8) ==
         *(longlong *)(lVar25 + lVar18 * 8))) goto LAB_142a126c0;
    }
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
    if (local_1c8 != 0.0) {
      FUN_1400020a8();
    }
    uVar16 = *(uint *)(local_2a8 + 8);
    param_2 = local_2a0;
  }
  pfVar24 = (float *)((longlong)param_3 * 0x18 + *(longlong *)(param_2 + 0x130));
  if (pfVar24 != (float *)0x0 && (uVar16 >> 0x13 & 1) != 0) {
    local_1b8 = *(double *)(pfVar24 + 3);
    dStack_1b0 = (double)CONCAT44(dStack_1b0._4_4_,pfVar24[5]);
    local_148 = (double)pfVar24[2];
    local_158._8_8_ = (double)pfVar24[1];
    local_158._0_8_ = (double)*pfVar24;
    FUN_1400d2704(lVar33,*(undefined8 *)(param_1 + 0x148));
  }
LAB_142a11cfb:
  if ((local_f0 ^ (ulonglong)auStack_318) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a1292a FUN_142a1292a body=2083 status=ok
// SIG undefined FUN_142a1292a(void)

void FUN_142a1292a(longlong param_1,longlong param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  longlong lVar32;
  longlong *plVar33;
  longlong lVar34;
  longlong lVar35;
  undefined8 *puVar36;
  longlong lVar37;
  undefined8 **ppuVar38;
  undefined4 uVar39;
  uint uVar40;
  longlong lVar41;
  longlong *plVar42;
  int iVar43;
  ulonglong *puVar44;
  undefined1 auStack_108 [32];
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined4 local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar42 = *(longlong **)(param_1 + 0x148);
  if (param_1 != 0 && plVar42 != (longlong *)0x0) {
    FUN_146eeda9a(param_2,param_1);
    lVar34 = plVar42[1];
    lVar32 = *(longlong *)(*plVar42 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar32 + 0x10 + (longlong)(int)lVar34 * 0x18);
    puVar36 = (undefined8 *)(lVar32 + (longlong)(int)lVar34 * 0x18);
    uVar10 = puVar36[1];
    *(undefined8 *)(param_2 + 0x18) = *puVar36;
    *(undefined8 *)(param_2 + 0x20) = uVar10;
    lVar32 = *(longlong *)(*plVar42 + 0x48);
    lVar34 = (longlong)(int)plVar42[1] * 0x10;
    fVar5 = *(float *)(lVar32 + 0xc + lVar34);
    fVar6 = *(float *)(lVar32 + 8 + lVar34);
    fVar7 = *(float *)(lVar32 + 4 + lVar34);
    *(double *)(param_2 + 0x30) = (double)*(float *)(lVar32 + lVar34);
    *(double *)(param_2 + 0x38) = (double)fVar7;
    *(double *)(param_2 + 0x40) = (double)fVar6;
    *(double *)(param_2 + 0x48) = (double)fVar5;
    lVar34 = (longlong)(int)plVar42[1];
    lVar32 = *(longlong *)(*plVar42 + 0x278);
    fVar5 = *(float *)(lVar32 + 8 + lVar34 * 0xc);
    fVar6 = *(float *)(lVar32 + 4 + lVar34 * 0xc);
    *(double *)(param_2 + 0x50) = (double)*(float *)(lVar32 + lVar34 * 0xc);
    *(double *)(param_2 + 0x58) = (double)fVar6;
    *(double *)(param_2 + 0x60) = (double)fVar5;
    lVar34 = (longlong)(int)plVar42[1];
    lVar32 = *(longlong *)(*plVar42 + 0x290);
    fVar5 = *(float *)(lVar32 + 8 + lVar34 * 0xc);
    fVar6 = *(float *)(lVar32 + 4 + lVar34 * 0xc);
    *(double *)(param_2 + 0x68) = (double)*(float *)(lVar32 + lVar34 * 0xc);
    *(double *)(param_2 + 0x70) = (double)fVar6;
    *(double *)(param_2 + 0x78) = (double)fVar5;
    *(float *)(param_2 + 0x80) =
         (float)*(double *)(*(longlong *)(*plVar42 + 0x3b0) + (longlong)(int)plVar42[1] * 8);
    uVar10 = *(undefined8 *)(*(longlong *)(*plVar42 + 0x368) + (longlong)(int)plVar42[1] * 0xc);
    *(undefined4 *)(param_2 + 0x8c) =
         *(undefined4 *)(*(longlong *)(*plVar42 + 0x368) + 8 + (longlong)(int)plVar42[1] * 0xc);
    *(undefined8 *)(param_2 + 0x84) = uVar10;
    *(undefined1 *)(param_2 + 0x90) =
         *(undefined1 *)(*(longlong *)(*plVar42 + 0x2c0) + 0xb + (longlong)(int)plVar42[1] * 0x10);
    puVar36 = *(undefined8 **)(param_2 + 0xa8);
    if (puVar36 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 0xa8) = 0;
      LOCK();
      piVar1 = (int *)(puVar36 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar36 + 0xc) == 0)) {
        (**(code **)*puVar36)(puVar36,1);
      }
    }
    iVar43 = *(int *)(*(longlong *)(*plVar42 + 0xf8) + 0x10 + (longlong)(int)plVar42[1] * 0x18);
    if (iVar43 < 0) goto LAB_142a13146;
    lVar32 = *(longlong *)(*plVar42 + 0xf8) + (longlong)(int)plVar42[1] * 0x18;
    local_d0 = param_2 + 0xc0;
    *(undefined4 *)(param_2 + 200) = 0;
    if (*(int *)(param_2 + 0xcc) != iVar43) {
      FUN_146eedb2e(local_d0);
    }
    iVar43 = *(int *)(lVar32 + 0x10);
    if (iVar43 < 0) goto LAB_142a13146;
    local_d8 = param_2 + 0xd0;
    *(undefined4 *)(param_2 + 0xd8) = 0;
    if (*(int *)(param_2 + 0xdc) != iVar43) {
      FUN_146eedb9e(local_d8);
    }
    iVar43 = *(int *)(lVar32 + 0x10);
    if (iVar43 < 0) goto LAB_142a13146;
    local_e8 = (longlong *)(param_2 + 0xe0);
    *(undefined4 *)(param_2 + 0xe8) = 0;
    local_c8 = plVar42;
    if (*(int *)(param_2 + 0xec) != iVar43) {
      FUN_146eedb9e(local_e8);
    }
    lVar34 = *(longlong *)(lVar32 + 8);
    if (*(longlong *)(lVar32 + 8) == 0) {
      lVar34 = lVar32;
    }
    local_e0 = (longlong)*(int *)(lVar32 + 0x10);
    if (local_e0 != 0) {
      local_e0 = local_e0 << 3;
      lVar32 = 0;
      do {
        lVar35 = *(longlong *)(lVar34 + lVar32);
        bVar8 = *(byte *)(lVar35 + 8);
        iVar43 = *(int *)(param_2 + 200);
        *(uint *)(param_2 + 200) = iVar43 + 1U;
        if (*(uint *)(param_2 + 0xcc) < iVar43 + 1U) {
          FUN_14172f350(local_d0,iVar43);
        }
        lVar35 = lVar35 + (ulonglong)((bVar8 & 3) == 0) * 8;
        lVar41 = *(longlong *)(param_2 + 0xc0);
        lVar37 = (longlong)iVar43 * 0x30;
        uVar39 = *(undefined4 *)(lVar35 + 0x48);
        uVar9 = *(undefined4 *)(lVar35 + 0x4c);
        uVar11 = *(undefined4 *)(lVar35 + 0x50);
        uVar12 = *(undefined4 *)(lVar35 + 0x54);
        uVar13 = *(undefined4 *)(lVar35 + 0x58);
        uVar14 = *(undefined4 *)(lVar35 + 0x5c);
        uVar15 = *(undefined4 *)(lVar35 + 0x60);
        uVar16 = *(undefined4 *)(lVar35 + 100);
        uVar17 = *(undefined4 *)(lVar35 + 0x6c);
        uVar18 = *(undefined4 *)(lVar35 + 0x70);
        uVar19 = *(undefined4 *)(lVar35 + 0x74);
        puVar4 = (undefined4 *)(lVar41 + 0x20 + lVar37);
        *puVar4 = *(undefined4 *)(lVar35 + 0x68);
        puVar4[1] = uVar17;
        puVar4[2] = uVar18;
        puVar4[3] = uVar19;
        puVar4 = (undefined4 *)(lVar41 + 0x10 + lVar37);
        *puVar4 = uVar13;
        puVar4[1] = uVar14;
        puVar4[2] = uVar15;
        puVar4[3] = uVar16;
        puVar4 = (undefined4 *)(lVar41 + lVar37);
        *puVar4 = uVar39;
        puVar4[1] = uVar9;
        puVar4[2] = uVar11;
        puVar4[3] = uVar12;
        lVar35 = *(longlong *)(lVar34 + lVar32);
        bVar8 = *(byte *)(lVar35 + 8);
        iVar43 = *(int *)(param_2 + 0xd8);
        *(uint *)(param_2 + 0xd8) = iVar43 + 1U;
        if (*(uint *)(param_2 + 0xdc) < iVar43 + 1U) {
          FUN_146eedbfe(local_d8,iVar43);
        }
        lVar35 = lVar35 + (ulonglong)((bVar8 & 3) == 0) * 8;
        uVar39 = *(undefined4 *)(lVar35 + 0x4c);
        uVar9 = *(undefined4 *)(lVar35 + 0x50);
        uVar11 = *(undefined4 *)(lVar35 + 0x54);
        puVar4 = (undefined4 *)(*(longlong *)(param_2 + 0xd0) + (longlong)iVar43 * 0x10);
        *puVar4 = *(undefined4 *)(lVar35 + 0x48);
        puVar4[1] = uVar39;
        puVar4[2] = uVar9;
        puVar4[3] = uVar11;
        lVar35 = *(longlong *)(lVar34 + lVar32);
        bVar8 = *(byte *)(lVar35 + 8);
        iVar43 = *(int *)(param_2 + 0xe8);
        *(uint *)(param_2 + 0xe8) = iVar43 + 1U;
        if (*(uint *)(param_2 + 0xec) < iVar43 + 1U) {
          FUN_146eedbfe(local_e8,iVar43);
        }
        lVar35 = lVar35 + (ulonglong)((bVar8 & 3) == 0) * 8;
        uVar39 = *(undefined4 *)(lVar35 + 0x5c);
        uVar9 = *(undefined4 *)(lVar35 + 0x60);
        uVar11 = *(undefined4 *)(lVar35 + 100);
        puVar4 = (undefined4 *)(*local_e8 + (longlong)iVar43 * 0x10);
        *puVar4 = *(undefined4 *)(lVar35 + 0x58);
        puVar4[1] = uVar39;
        puVar4[2] = uVar9;
        puVar4[3] = uVar11;
        lVar32 = lVar32 + 8;
      } while (local_e0 != lVar32);
    }
    *(byte *)(param_2 + 0x91) =
         *(byte *)(*(longlong *)(*local_c8 + 0x680) + (longlong)(int)local_c8[1]) >> 1 & 1;
  }
  lVar32 = FUN_1401961f6(*(longlong *)(*(longlong *)(param_1 + 8) + 0x9c8) + 0x560,
                         *(undefined4 *)(param_1 + 0x150));
  if (lVar32 == 0) goto LAB_142a12d00;
  iVar43 = *(int *)(lVar32 + 0x18);
  if (iVar43 < 0) {
LAB_142a13146:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar43);
  }
  local_e8 = (longlong *)(param_2 + 0x98);
  *(undefined4 *)(param_2 + 0xa0) = 0;
  if (*(int *)(param_2 + 0xa4) != iVar43) {
    FUN_146eedc84(local_e8);
  }
  local_e0 = lVar32;
  if ((longlong)*(int *)(lVar32 + 0x18) != 0) {
    puVar44 = *(ulonglong **)(lVar32 + 0x10);
    puVar2 = puVar44 + *(int *)(lVar32 + 0x18);
    plVar42 = local_e8;
    do {
      plVar33 = (longlong *)*puVar44;
      if (plVar33 != (longlong *)0x0) {
        lVar32 = *plVar33;
        lVar35 = (longlong)(int)plVar33[1];
        lVar34 = *(longlong *)(*(longlong *)(lVar32 + 200) + lVar35 * 8);
        if (lVar34 != 0) {
          puVar36 = &DAT_14c846480;
          if (2 < *(byte *)((longlong)plVar33 + 0xc)) {
            puVar36 = (undefined8 *)(lVar35 * 0x60 + *(longlong *)(lVar32 + 0x5c0));
          }
          uVar39 = 0xffffffff;
          if ((*(int *)(lVar34 + 0x1c) == 2) &&
             (plVar42 = local_e8, *(int *)(lVar34 + 0x358) != *(int *)(lVar34 + 900))) {
            uVar40 = ((uint)((ulonglong)plVar33 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar33 >> 4))
                     * -0x7a143595;
            uVar40 = (uVar40 >> 0xd ^ uVar40) * -0x3d4d51cb;
            lVar41 = lVar34 + 0x388;
            if (*(longlong *)(lVar34 + 0x390) != 0) {
              lVar41 = *(longlong *)(lVar34 + 0x390);
            }
            iVar43 = *(int *)(lVar41 + (ulonglong)
                                       (*(int *)(lVar34 + 0x398) - 1U & (uVar40 >> 0x10 ^ uVar40)) *
                                       4);
            if (iVar43 != -1) {
              do {
                puVar3 = (ulonglong *)(*(longlong *)(lVar34 + 0x350) + (longlong)iVar43 * 0x18);
                if ((longlong *)*puVar3 == plVar33) {
                  if ((puVar3 != (ulonglong *)0x0) && (puVar3 + 1 != (ulonglong *)0x0)) {
                    uVar39 = (undefined4)puVar3[1];
                  }
                  break;
                }
                iVar43 = (int)puVar3[2];
              } while (iVar43 != -1);
            }
          }
          uVar9 = *(undefined4 *)(*(longlong *)(lVar32 + 0x80) + lVar35 * 4);
          uVar20 = *puVar36;
          uVar21 = puVar36[1];
          uVar22 = puVar36[2];
          uVar23 = puVar36[3];
          uVar24 = puVar36[4];
          uVar25 = puVar36[5];
          uVar26 = puVar36[6];
          uVar27 = puVar36[7];
          uVar28 = puVar36[8];
          uVar29 = puVar36[9];
          uVar30 = puVar36[10];
          uVar31 = puVar36[0xb];
          uVar10 = *(undefined8 *)(lVar34 + 0x10);
          iVar43 = *(int *)(param_2 + 0xa0);
          *(uint *)(param_2 + 0xa0) = iVar43 + 1U;
          if (*(uint *)(param_2 + 0xa4) < iVar43 + 1U) {
            FUN_146eedcf4(plVar42,iVar43);
            plVar42 = local_e8;
          }
          lVar32 = *plVar42;
          lVar35 = (longlong)iVar43 * 0x90;
          *(undefined4 *)(lVar32 + lVar35) = uVar9;
          puVar36 = (undefined8 *)(lVar32 + 0x10 + lVar35);
          *puVar36 = uVar20;
          puVar36[1] = uVar21;
          puVar36 = (undefined8 *)(lVar32 + 0x20 + lVar35);
          *puVar36 = uVar22;
          puVar36[1] = uVar23;
          puVar36 = (undefined8 *)(lVar32 + 0x30 + lVar35);
          *puVar36 = uVar24;
          puVar36[1] = uVar25;
          puVar36 = (undefined8 *)(lVar32 + 0x40 + lVar35);
          *puVar36 = uVar26;
          puVar36[1] = uVar27;
          puVar36 = (undefined8 *)(lVar32 + 0x50 + lVar35);
          *puVar36 = uVar28;
          puVar36[1] = uVar29;
          puVar36 = (undefined8 *)(lVar32 + 0x60 + lVar35);
          *puVar36 = uVar30;
          puVar36[1] = uVar31;
          *(longlong *)(lVar32 + 0x70 + lVar35) = lVar34;
          *(undefined8 *)(lVar32 + 0x78 + lVar35) = uVar10;
          *(undefined4 *)(lVar32 + 0x80 + lVar35) = uVar39;
        }
      }
      puVar44 = puVar44 + 1;
    } while (puVar44 != puVar2);
  }
  lVar32 = local_e0;
  if (((*(byte *)(local_e0 + 0xf8) & 0x10) == 0) || (*(int *)(local_e0 + 0x18) == 0))
  goto LAB_142a12d00;
  plVar42 = *(longlong **)(local_e0 + 8);
  plVar33 = (longlong *)0x0;
  if (*(char *)((longlong)plVar42 + 0x1c) == '\x0f') {
    plVar33 = plVar42;
  }
  if (*(char *)((longlong)plVar42 + 0x1c) == '\x05') {
    plVar33 = plVar42;
  }
  if ((DAT_14c75f3b4 == 0) || (plVar33 == (longlong *)0x0)) {
    (**(code **)(*plVar42 + 0x38))(plVar42,&local_c0);
    ppuVar38 = (undefined8 **)(param_2 + 0xa8);
    if (ppuVar38 != &local_c0) {
      puVar36 = *ppuVar38;
      *ppuVar38 = local_c0;
      local_c0 = (undefined8 *)0x0;
      if (puVar36 == (undefined8 *)0x0) goto LAB_142a12cf9;
      LOCK();
      piVar1 = (int *)(puVar36 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar36 + 0xc) == 0)) {
        (**(code **)*puVar36)(puVar36,1);
      }
    }
    if (local_c0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_c0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_c0 + 0xc) == 0)) {
        (**(code **)*local_c0)(local_c0,1);
      }
    }
  }
  else {
    local_c0 = (undefined8 *)0x0;
    iVar43 = (int)plVar33[5];
    lVar34 = plVar33[4];
    local_b8 = iVar43;
    if (iVar43 == 0) {
      local_b4 = 0;
    }
    else {
      FUN_146d8ad50(&local_c0,iVar43,0);
      FUN_146d8adb2(local_c0,lVar34,iVar43);
    }
    lVar34 = FUN_14001cc68(0x70,0x10);
    FUN_14014f414(lVar34,&local_c0);
    if (lVar34 != 0) {
      LOCK();
      *(int *)(lVar34 + 8) = *(int *)(lVar34 + 8) + 1;
      UNLOCK();
    }
    puVar36 = *(undefined8 **)(param_2 + 0xa8);
    *(longlong *)(param_2 + 0xa8) = lVar34;
    if (puVar36 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar36 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar36 + 0xc) == 0)) {
        (**(code **)*puVar36)(puVar36,1);
      }
    }
    FUN_144756766(local_c0,local_b8);
    if (local_c0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_142a12cf9:
  *(byte *)(lVar32 + 0xf8) = *(byte *)(lVar32 + 0xf8) & 0xef;
LAB_142a12d00:
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a13150 FUN_142a13150 body=1351 status=ok
// SIG undefined FUN_142a13150(void)

void FUN_142a13150(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  longlong lVar36;
  int iVar37;
  longlong lVar38;
  undefined4 *puVar39;
  longlong lVar40;
  undefined4 *puVar41;
  
  lVar40 = *(longlong *)(param_1 + 0x128);
  if (param_1 != 0 && lVar40 != 0) {
    FUN_146eeda9a(param_2,param_1);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(lVar40 + 0x30);
    uVar11 = *(undefined8 *)(lVar40 + 0x28);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lVar40 + 0x20);
    *(undefined8 *)(param_2 + 0x20) = uVar11;
    fVar4 = *(float *)(lVar40 + 0x4c);
    fVar5 = *(float *)(lVar40 + 0x48);
    fVar6 = *(float *)(lVar40 + 0x44);
    *(double *)(param_2 + 0x30) = (double)*(float *)(lVar40 + 0x40);
    *(double *)(param_2 + 0x38) = (double)fVar6;
    *(double *)(param_2 + 0x40) = (double)fVar5;
    *(double *)(param_2 + 0x48) = (double)fVar4;
    fVar4 = *(float *)(lVar40 + 0xa0);
    fVar5 = *(float *)(lVar40 + 0x9c);
    *(double *)(param_2 + 0x50) = (double)*(float *)(lVar40 + 0x98);
    *(double *)(param_2 + 0x58) = (double)fVar5;
    *(double *)(param_2 + 0x60) = (double)fVar4;
    fVar4 = *(float *)(lVar40 + 0xac);
    fVar5 = *(float *)(lVar40 + 0xa8);
    *(double *)(param_2 + 0x68) = (double)*(float *)(lVar40 + 0xa4);
    *(double *)(param_2 + 0x70) = (double)fVar5;
    *(double *)(param_2 + 0x78) = (double)fVar4;
    *(float *)(param_2 + 0x80) = (float)*(double *)(lVar40 + 0x148);
    uVar11 = *(undefined8 *)(lVar40 + 0x130);
    *(undefined4 *)(param_2 + 0x8c) = *(undefined4 *)(lVar40 + 0x138);
    *(undefined8 *)(param_2 + 0x84) = uVar11;
    *(undefined1 *)(param_2 + 0x90) = *(undefined1 *)(lVar40 + 0x1ac);
    puVar3 = *(undefined8 **)(param_2 + 0xa8);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(param_2 + 0xa8) = 0;
      LOCK();
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    iVar37 = *(int *)(lVar40 + 0x88);
    if (iVar37 < 0) goto LAB_142a1368f;
    *(undefined4 *)(param_2 + 200) = 0;
    if (*(int *)(param_2 + 0xcc) != iVar37) {
      FUN_146eedb2e(param_2 + 0xc0);
    }
    iVar37 = *(int *)(lVar40 + 0x88);
    if (iVar37 < 0) goto LAB_142a1368f;
    *(undefined4 *)(param_2 + 0xd8) = 0;
    if (*(int *)(param_2 + 0xdc) != iVar37) {
      FUN_146eedb9e(param_2 + 0xd0);
    }
    iVar37 = *(int *)(lVar40 + 0x88);
    if (iVar37 < 0) goto LAB_142a1368f;
    plVar2 = (longlong *)(param_2 + 0xe0);
    *(undefined4 *)(param_2 + 0xe8) = 0;
    if (*(int *)(param_2 + 0xec) != iVar37) {
      FUN_146eedb9e(plVar2);
    }
    lVar36 = lVar40 + 0x78;
    if (*(longlong *)(lVar40 + 0x80) != 0) {
      lVar36 = *(longlong *)(lVar40 + 0x80);
    }
    iVar37 = *(int *)(lVar40 + 0x88);
    if ((longlong)iVar37 != 0) {
      lVar40 = 0;
      do {
        lVar13 = *(longlong *)(lVar36 + lVar40);
        bVar7 = *(byte *)(lVar13 + 8);
        iVar10 = *(int *)(param_2 + 200);
        *(uint *)(param_2 + 200) = iVar10 + 1U;
        if (*(uint *)(param_2 + 0xcc) < iVar10 + 1U) {
          FUN_14172f350(param_2 + 0xc0,iVar10);
        }
        lVar13 = lVar13 + (ulonglong)((bVar7 & 3) == 0) * 8;
        lVar14 = *(longlong *)(param_2 + 0xc0);
        lVar38 = (longlong)iVar10 * 0x30;
        uVar8 = *(undefined4 *)(lVar13 + 0x48);
        uVar9 = *(undefined4 *)(lVar13 + 0x4c);
        uVar15 = *(undefined4 *)(lVar13 + 0x50);
        uVar16 = *(undefined4 *)(lVar13 + 0x54);
        uVar17 = *(undefined4 *)(lVar13 + 0x58);
        uVar18 = *(undefined4 *)(lVar13 + 0x5c);
        uVar19 = *(undefined4 *)(lVar13 + 0x60);
        uVar20 = *(undefined4 *)(lVar13 + 100);
        uVar21 = *(undefined4 *)(lVar13 + 0x6c);
        uVar22 = *(undefined4 *)(lVar13 + 0x70);
        uVar23 = *(undefined4 *)(lVar13 + 0x74);
        puVar39 = (undefined4 *)(lVar14 + 0x20 + lVar38);
        *puVar39 = *(undefined4 *)(lVar13 + 0x68);
        puVar39[1] = uVar21;
        puVar39[2] = uVar22;
        puVar39[3] = uVar23;
        puVar39 = (undefined4 *)(lVar14 + 0x10 + lVar38);
        *puVar39 = uVar17;
        puVar39[1] = uVar18;
        puVar39[2] = uVar19;
        puVar39[3] = uVar20;
        puVar39 = (undefined4 *)(lVar14 + lVar38);
        *puVar39 = uVar8;
        puVar39[1] = uVar9;
        puVar39[2] = uVar15;
        puVar39[3] = uVar16;
        lVar13 = *(longlong *)(lVar36 + lVar40);
        bVar7 = *(byte *)(lVar13 + 8);
        iVar10 = *(int *)(param_2 + 0xd8);
        *(uint *)(param_2 + 0xd8) = iVar10 + 1U;
        if (*(uint *)(param_2 + 0xdc) < iVar10 + 1U) {
          FUN_146eedbfe(param_2 + 0xd0,iVar10);
        }
        lVar13 = lVar13 + (ulonglong)((bVar7 & 3) == 0) * 8;
        uVar8 = *(undefined4 *)(lVar13 + 0x4c);
        uVar9 = *(undefined4 *)(lVar13 + 0x50);
        uVar15 = *(undefined4 *)(lVar13 + 0x54);
        puVar39 = (undefined4 *)(*(longlong *)(param_2 + 0xd0) + (longlong)iVar10 * 0x10);
        *puVar39 = *(undefined4 *)(lVar13 + 0x48);
        puVar39[1] = uVar8;
        puVar39[2] = uVar9;
        puVar39[3] = uVar15;
        lVar13 = *(longlong *)(lVar36 + lVar40);
        bVar7 = *(byte *)(lVar13 + 8);
        iVar10 = *(int *)(param_2 + 0xe8);
        *(uint *)(param_2 + 0xe8) = iVar10 + 1U;
        if (*(uint *)(param_2 + 0xec) < iVar10 + 1U) {
          FUN_146eedbfe(plVar2,iVar10);
        }
        lVar13 = lVar13 + (ulonglong)((bVar7 & 3) == 0) * 8;
        uVar8 = *(undefined4 *)(lVar13 + 0x5c);
        uVar9 = *(undefined4 *)(lVar13 + 0x60);
        uVar15 = *(undefined4 *)(lVar13 + 100);
        puVar39 = (undefined4 *)(*plVar2 + (longlong)iVar10 * 0x10);
        *puVar39 = *(undefined4 *)(lVar13 + 0x58);
        puVar39[1] = uVar8;
        puVar39[2] = uVar9;
        puVar39[3] = uVar15;
        lVar40 = lVar40 + 8;
      } while ((longlong)iVar37 * 8 != lVar40);
    }
  }
  *(undefined1 *)(param_2 + 0x91) = *(undefined1 *)(param_1 + 0x130);
  iVar37 = *(int *)(param_1 + 0x140);
  if (-1 < iVar37) {
    plVar2 = (longlong *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0xa0) = 0;
    if (*(int *)(param_2 + 0xa4) != iVar37) {
      FUN_146eedc84(plVar2);
    }
    if ((longlong)*(int *)(param_1 + 0x140) != 0) {
      puVar39 = *(undefined4 **)(param_1 + 0x138);
      puVar41 = puVar39 + (longlong)*(int *)(param_1 + 0x140) * 0x24;
      do {
        uVar8 = *puVar39;
        uVar24 = *(undefined8 *)(puVar39 + 4);
        uVar25 = *(undefined8 *)(puVar39 + 6);
        uVar26 = *(undefined8 *)(puVar39 + 8);
        uVar27 = *(undefined8 *)(puVar39 + 10);
        uVar28 = *(undefined8 *)(puVar39 + 0xc);
        uVar29 = *(undefined8 *)(puVar39 + 0xe);
        uVar30 = *(undefined8 *)(puVar39 + 0x10);
        uVar31 = *(undefined8 *)(puVar39 + 0x12);
        uVar32 = *(undefined8 *)(puVar39 + 0x14);
        uVar33 = *(undefined8 *)(puVar39 + 0x16);
        uVar34 = *(undefined8 *)(puVar39 + 0x18);
        uVar35 = *(undefined8 *)(puVar39 + 0x1a);
        uVar11 = *(undefined8 *)(puVar39 + 0x1c);
        uVar12 = *(undefined8 *)(puVar39 + 0x1e);
        uVar9 = puVar39[0x20];
        iVar37 = *(int *)(param_2 + 0xa0);
        *(uint *)(param_2 + 0xa0) = iVar37 + 1U;
        if (*(uint *)(param_2 + 0xa4) < iVar37 + 1U) {
          FUN_146eedcf4(plVar2,iVar37);
        }
        lVar40 = *plVar2;
        lVar36 = (longlong)iVar37 * 0x90;
        *(undefined4 *)(lVar40 + lVar36) = uVar8;
        puVar3 = (undefined8 *)(lVar40 + 0x10 + lVar36);
        *puVar3 = uVar24;
        puVar3[1] = uVar25;
        puVar3 = (undefined8 *)(lVar40 + 0x20 + lVar36);
        *puVar3 = uVar26;
        puVar3[1] = uVar27;
        puVar3 = (undefined8 *)(lVar40 + 0x30 + lVar36);
        *puVar3 = uVar28;
        puVar3[1] = uVar29;
        puVar3 = (undefined8 *)(lVar40 + 0x40 + lVar36);
        *puVar3 = uVar30;
        puVar3[1] = uVar31;
        puVar3 = (undefined8 *)(lVar40 + 0x50 + lVar36);
        *puVar3 = uVar32;
        puVar3[1] = uVar33;
        puVar3 = (undefined8 *)(lVar40 + 0x60 + lVar36);
        *puVar3 = uVar34;
        puVar3[1] = uVar35;
        *(undefined8 *)(lVar40 + 0x70 + lVar36) = uVar11;
        *(undefined8 *)(lVar40 + 0x78 + lVar36) = uVar12;
        *(undefined4 *)(lVar40 + 0x80 + lVar36) = uVar9;
        puVar39 = puVar39 + 0x24;
      } while (puVar39 != puVar41);
    }
    return;
  }
LAB_142a1368f:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar37);
}



// FUNCTION 142a13698 FUN_142a13698 body=167 status=ok
// SIG undefined FUN_142a13698(void)

void FUN_142a13698(longlong param_1,longlong param_2,int param_3,uint *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  
  if (*(longlong *)(param_1 + 0x128) != 0) {
    *(undefined1 *)(param_4 + 1) = *(undefined1 *)(*(longlong *)(param_1 + 0x128) + 0x90);
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x128) + 0x94);
    uVar11 = uVar2 & 0xfffc0000;
    *param_4 = uVar11;
    lVar10 = (longlong)param_3;
    if ((uVar2 >> 0x12 & 1) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x128);
      lVar4 = *(longlong *)(param_2 + 0x120);
      lVar12 = lVar10 * 0x30;
      uVar5 = *(undefined8 *)(lVar3 + 0x20);
      uVar6 = *(undefined8 *)(lVar3 + 0x28);
      uVar7 = *(undefined8 *)(lVar3 + 0x30);
      uVar8 = *(undefined8 *)(lVar3 + 0x38);
      uVar9 = *(undefined8 *)(lVar3 + 0x48);
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar12);
      *puVar1 = *(undefined8 *)(lVar3 + 0x40);
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar12);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined8 *)(lVar4 + lVar12) = uVar5;
      ((undefined8 *)(lVar4 + lVar12))[1] = uVar6;
      uVar11 = *param_4;
    }
    if ((uVar11 >> 0x13 & 1) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x128);
      lVar4 = *(longlong *)(param_2 + 0x130);
      *(undefined8 *)(lVar4 + 0x10 + lVar10 * 0x18) = *(undefined8 *)(lVar3 + 0xa8);
      uVar5 = *(undefined8 *)(lVar3 + 0xa0);
      puVar1 = (undefined8 *)(lVar4 + lVar10 * 0x18);
      *puVar1 = *(undefined8 *)(lVar3 + 0x98);
      puVar1[1] = uVar5;
    }
  }
  return;
}



// FUNCTION 142a1373f FUN_142a1373f body=69 status=ok
// SIG undefined FUN_142a1373f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a1373f(void)

{
  _DAT_14c997520 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a13781. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997528,1);
  return;
}



// FUNCTION 142a13784 FUN_142a13784 body=69 status=ok
// SIG undefined FUN_142a13784(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13784(void)

{
  _DAT_14c997538 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a137c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997540,1);
  return;
}



// FUNCTION 142a137c9 FUN_142a137c9 body=69 status=ok
// SIG undefined FUN_142a137c9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a137c9(void)

{
  _DAT_14c997550 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a1380b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997558,1);
  return;
}



// FUNCTION 142a1380e FUN_142a1380e body=69 status=ok
// SIG undefined FUN_142a1380e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a1380e(void)

{
  _DAT_14c997560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a13850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997568,1);
  return;
}



// FUNCTION 142a13853 FUN_142a13853 body=69 status=ok
// SIG undefined FUN_142a13853(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13853(void)

{
  _DAT_14c997570 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a13895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997578,1);
  return;
}



// FUNCTION 142a13898 FUN_142a13898 body=69 status=ok
// SIG undefined FUN_142a13898(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13898(void)

{
  _DAT_14c997588 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a138da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997590,1);
  return;
}



// FUNCTION 142a138dd FUN_142a138dd body=69 status=ok
// SIG undefined FUN_142a138dd(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a138dd(void)

{
  _DAT_14c9975a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a1391f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9975a8,1);
  return;
}



// FUNCTION 142a13922 FUN_142a13922 body=69 status=ok
// SIG undefined FUN_142a13922(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13922(void)

{
  _DAT_14c9975b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a13964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9975c0,1);
  return;
}



// FUNCTION 142a13967 FUN_142a13967 body=69 status=ok
// SIG undefined FUN_142a13967(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13967(void)

{
  _DAT_14c9975c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a139a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9975d0,1);
  return;
}



// FUNCTION 142a139ac FUN_142a139ac body=69 status=ok
// SIG undefined FUN_142a139ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a139ac(void)

{
  _DAT_14c9975d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a139ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9975e0,1);
  return;
}



// FUNCTION 142a139f1 FUN_142a139f1 body=69 status=ok
// SIG undefined FUN_142a139f1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a139f1(void)

{
  _DAT_14c9975e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a13a33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9975f0,1);
  return;
}



// FUNCTION 142a13a36 FUN_142a13a36 body=69 status=ok
// SIG undefined FUN_142a13a36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13a36(void)

{
  _DAT_14c9975f8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a13a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997600,1);
  return;
}



// FUNCTION 142a13a7b FUN_142a13a7b body=69 status=ok
// SIG undefined FUN_142a13a7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13a7b(void)

{
  _DAT_14c997608 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a13abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997610,1);
  return;
}



// FUNCTION 142a13ac0 FUN_142a13ac0 body=69 status=ok
// SIG undefined FUN_142a13ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13ac0(void)

{
  _DAT_14c997618 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a13b02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997620,1);
  return;
}



// FUNCTION 142a13b05 FUN_142a13b05 body=69 status=ok
// SIG undefined FUN_142a13b05(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13b05(void)

{
  _DAT_14c997630 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a13b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997638,1);
  return;
}



// FUNCTION 142a13b4a FUN_142a13b4a body=1420 status=ok
// SIG undefined FUN_142a13b4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a13b4a(longlong *param_1,longlong param_2,undefined8 param_3,longlong *param_4,
                  undefined4 *param_5,undefined8 *param_6,double param_7,float *param_8,
                  double *param_9,byte param_10,short param_11,undefined4 param_12)

{
  int *piVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  longlong lVar9;
  double dVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar32;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_f8 [32];
  undefined4 *local_d8;
  undefined8 *local_d0;
  double *local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x2c0) + 0xd + (longlong)(int)param_1[1] * 0x10) = 0;
  dVar26 = param_9[5];
  dVar8 = param_9[6];
  lVar21 = param_1[1];
  lVar20 = *(longlong *)(*param_1 + 0x28);
  pdVar2 = (double *)(lVar20 + (longlong)(int)lVar21 * 0x18);
  *pdVar2 = param_9[4];
  pdVar2[1] = dVar26;
  *(double *)(lVar20 + 0x10 + (longlong)(int)lVar21 * 0x18) = dVar8;
  lVar21 = param_1[1];
  lVar20 = *(longlong *)(*param_1 + 0x278);
  *(undefined8 *)(lVar20 + (longlong)(int)lVar21 * 0xc) = 0;
  *(undefined4 *)(lVar20 + 8 + (longlong)(int)lVar21 * 0xc) = 0;
  dVar8 = *param_9;
  dVar26 = param_9[1];
  dVar29 = param_9[2];
  dVar10 = param_9[3];
  dVar28 = dVar29 * dVar29 + dVar8 * dVar8;
  dVar32 = dVar10 * dVar10 + dVar26 * dVar26;
  auVar30._0_8_ = dVar28 + dVar32;
  auVar30._8_8_ = dVar28 + dVar32;
  uVar23 = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
  auVar31 = sqrtpd(auVar30,auVar30);
  auVar33 = divpd(_DAT_149934d80,auVar31);
  auVar34._0_8_ = auVar33._0_8_ * dVar29;
  auVar34._8_8_ = auVar33._8_8_ * dVar10;
  auVar31._8_4_ = (int)uVar23;
  auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
  auVar31._12_4_ = (int)(uVar23 >> 0x20);
  auVar31 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar34,auVar31);
  lVar20 = *(longlong *)(*param_1 + 0x48);
  lVar21 = (longlong)(int)param_1[1] * 0x10;
  *(float *)(lVar20 + lVar21) =
       (float)(double)((ulonglong)(dVar8 * auVar33._0_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
  *(float *)(lVar20 + 4 + lVar21) = (float)(double)((ulonglong)(dVar26 * auVar33._8_8_) & uVar23);
  *(float *)(lVar20 + 8 + lVar21) = (float)auVar31._0_8_;
  *(float *)(lVar20 + 0xc + lVar21) = (float)auVar31._8_8_;
  lVar21 = param_1[1];
  lVar20 = *(longlong *)(*param_1 + 0x290);
  *(undefined8 *)(lVar20 + (longlong)(int)lVar21 * 0xc) = 0;
  *(undefined4 *)(lVar20 + 8 + (longlong)(int)lVar21 * 0xc) = 0;
  lVar20 = *(longlong *)(*param_1 + 0x28);
  lVar9 = (longlong)(int)param_1[1] * 0x18;
  lVar21 = *(longlong *)(*param_1 + 0x530);
  *(undefined8 *)(lVar21 + 0x10 + lVar9) = *(undefined8 *)(lVar20 + 0x10 + lVar9);
  puVar3 = (undefined8 *)(lVar20 + lVar9);
  uVar11 = puVar3[1];
  puVar4 = (undefined8 *)(lVar21 + lVar9);
  *puVar4 = *puVar3;
  puVar4[1] = uVar11;
  lVar20 = (longlong)(int)param_1[1] * 0x10;
  puVar3 = (undefined8 *)(*(longlong *)(*param_1 + 0x48) + lVar20);
  uVar11 = puVar3[1];
  puVar4 = (undefined8 *)(*(longlong *)(*param_1 + 0x548) + lVar20);
  *puVar4 = *puVar3;
  puVar4[1] = uVar11;
  dVar8 = (double)DAT_14c846338;
  dVar26 = (double)DAT_14c846330._4_4_;
  lVar21 = (longlong)(int)param_1[1];
  lVar20 = *(longlong *)(*param_1 + 0x3e0);
  *(double *)(lVar20 + lVar21 * 0x18) = (double)(float)DAT_14c846330;
  *(double *)(lVar20 + 8 + lVar21 * 0x18) = dVar26;
  *(double *)(lVar20 + 0x10 + lVar21 * 0x18) = dVar8;
  uVar18 = DAT_14c8463e8._4_4_;
  uVar17 = (undefined4)DAT_14c8463e8;
  uVar16 = DAT_14c8463e0._4_4_;
  uVar15 = DAT_14c8463d8._4_4_;
  uVar14 = (undefined4)DAT_14c8463d8;
  uVar13 = DAT_14c8463d0._4_4_;
  uVar12 = (undefined4)DAT_14c8463d0;
  lVar20 = *(longlong *)(*param_1 + 0x3f8);
  lVar21 = (longlong)(int)param_1[1] * 0x20;
  puVar5 = (undefined4 *)(lVar20 + 0x10 + lVar21);
  *puVar5 = (undefined4)DAT_14c8463e0;
  puVar5[1] = uVar16;
  puVar5[2] = uVar17;
  puVar5[3] = uVar18;
  puVar5 = (undefined4 *)(lVar20 + lVar21);
  *puVar5 = uVar12;
  puVar5[1] = uVar13;
  puVar5[2] = uVar14;
  puVar5[3] = uVar15;
  local_b8 = param_3;
  FUN_1403f44de(*param_1,(int)param_1[1],0);
  dVar8 = (double)*(float *)(param_2 + 0x10);
  dVar26 = (double)*(float *)(param_2 + 0x14);
  if ((param_7 < dVar8) || (dVar26 < param_7)) {
    if (dVar26 <= param_7) {
      param_7 = dVar26;
    }
    if (param_7 <= dVar8) {
      param_7 = dVar8;
    }
  }
  iVar19 = _isnan((double)*param_8);
  if (((iVar19 == 0) && (iVar19 = _isnan((double)param_8[1]), iVar19 == 0)) &&
     (iVar19 = _isnan((double)param_8[2]), iVar19 == 0)) {
    fVar25 = *param_8;
    fVar24 = param_8[1];
    fVar6 = *(float *)(param_2 + 0x20);
    fVar7 = *(float *)(param_2 + 0x24);
    if ((fVar25 < fVar6) || (fVar7 < fVar25)) {
      fVar27 = param_8[2];
    }
    else {
      fVar27 = param_8[2];
      if (((fVar6 <= fVar24) && (fVar24 <= fVar7)) && ((fVar6 <= fVar27 && (fVar27 <= fVar7))))
      goto LAB_142a13dff;
    }
    if (fVar7 <= fVar25) {
      fVar25 = fVar7;
    }
    if (fVar25 <= fVar6) {
      fVar25 = fVar6;
    }
    *param_8 = fVar25;
    if (*(float *)(param_2 + 0x24) <= fVar24) {
      fVar24 = *(float *)(param_2 + 0x24);
    }
    if (fVar24 <= *(float *)(param_2 + 0x20)) {
      fVar24 = *(float *)(param_2 + 0x20);
    }
    param_8[1] = fVar24;
    if (*(float *)(param_2 + 0x24) <= fVar27) {
      fVar27 = *(float *)(param_2 + 0x24);
    }
    if (fVar27 <= *(float *)(param_2 + 0x20)) {
      fVar27 = *(float *)(param_2 + 0x20);
    }
    param_8[2] = fVar27;
  }
  else {
    *(undefined1 **)param_8 = &DAT_3f8000003f800000;
    param_8[2] = 1.0;
  }
LAB_142a13dff:
  *(double *)(*(longlong *)(*param_1 + 0x3b0) + (longlong)(int)param_1[1] * 8) = param_7;
  lVar21 = param_1[1];
  lVar20 = *(longlong *)(*param_1 + 0x368);
  *(float *)(lVar20 + 8 + (longlong)(int)lVar21 * 0xc) = param_8[2];
  *(undefined8 *)(lVar20 + (longlong)(int)lVar21 * 0xc) = *(undefined8 *)param_8;
  dVar26 = DAT_14c8464e0;
  dVar8 = DAT_14c8464f0;
  dVar29 = DAT_14c8464e8;
  if (0.0 < param_7) {
    fVar25 = param_8[2];
    fVar24 = *param_8;
    fVar6 = param_8[1];
    dVar26 = 1.0 / (double)fVar24;
    if ((fVar24 == 0.0) && (!NAN(fVar24))) {
      dVar26 = 3.3999999521443642e+38;
    }
    dVar29 = 1.0 / (double)fVar6;
    if ((fVar6 == 0.0) && (!NAN(fVar6))) {
      dVar29 = 3.3999999521443642e+38;
    }
    dVar8 = 1.0 / (double)fVar25;
    if ((fVar25 == 0.0) && (!NAN(fVar25))) {
      dVar8 = 3.3999999521443642e+38;
    }
  }
  *(ulonglong *)(*(longlong *)(*param_1 + 0x3c8) + (longlong)(int)param_1[1] * 8) =
       -(ulonglong)(0.0 < param_7) & (ulonglong)(1.0 / param_7);
  lVar21 = (longlong)(int)param_1[1];
  lVar20 = *(longlong *)(*param_1 + 0x380);
  *(float *)(lVar20 + lVar21 * 0xc) = (float)dVar26;
  *(float *)(lVar20 + 4 + lVar21 * 0xc) = (float)dVar29;
  *(float *)(lVar20 + 8 + lVar21 * 0xc) = (float)dVar8;
  FUN_1403f44de(*param_1,(int)param_1[1],4);
  *(int *)(*(longlong *)(*param_1 + 0x2c0) + (longlong)(int)param_1[1] * 0x10) = (int)param_11;
  local_98 = *param_6;
  uStack_90 = param_6[1];
  local_a8 = *param_5;
  uStack_a4 = param_5[1];
  uStack_a0 = param_5[2];
  uStack_9c = param_5[3];
  local_b0 = *param_4;
  if (local_b0 != 0) {
    LOCK();
    *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
    UNLOCK();
  }
  local_c0 = param_12;
  local_c8 = param_9;
  local_d0 = &local_98;
  local_d8 = &local_a8;
  FUN_14172fdd2(param_1,param_2,local_b8,&local_b0);
  uVar22 = 4;
  if (param_10 < 4) {
    uVar22 = 0x3020104 >> (param_10 * '\b' & 0x1f);
  }
  FUN_1403f44de(*param_1,(int)param_1[1],uVar22);
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
  if ((local_80 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a140d7 FUN_142a140d7 body=69 status=ok
// SIG undefined FUN_142a140d7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a140d7(void)

{
  _DAT_14c997640 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a14119. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997648,1);
  return;
}



// FUNCTION 142a1411c FUN_142a1411c body=69 status=ok
// SIG undefined FUN_142a1411c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a1411c(void)

{
  _DAT_14c997650 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a1415e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997658,1);
  return;
}



// FUNCTION 142a14161 FUN_142a14161 body=69 status=ok
// SIG undefined FUN_142a14161(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a14161(void)

{
  _DAT_14c997660 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a141a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997668,1);
  return;
}



// FUNCTION 142a141a6 FUN_142a141a6 body=69 status=ok
// SIG undefined FUN_142a141a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a141a6(void)

{
  _DAT_14c997670 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a141e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997678,1);
  return;
}



// FUNCTION 142a141eb FUN_142a141eb body=69 status=ok
// SIG undefined FUN_142a141eb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a141eb(void)

{
  _DAT_14c997688 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a1422d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997690,1);
  return;
}



// FUNCTION 142a14230 FUN_142a14230 body=5560 status=ok
// SIG undefined FUN_142a14230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a14230(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int *piVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined **ppuVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  void *pvVar15;
  int iVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  code *pcVar30;
  int iVar31;
  longlong lVar32;
  bool bVar33;
  undefined1 auStack_298 [47];
  byte local_269;
  longlong *local_268;
  longlong local_260;
  void *local_258;
  ulonglong local_250;
  longlong local_248;
  ulonglong local_240;
  int local_238;
  uint local_234;
  longlong local_230;
  ulonglong local_228;
  ulonglong local_220;
  int local_214;
  ulonglong local_210;
  ulonglong local_208;
  undefined8 local_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined2 local_1e0;
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_168;
  undefined4 local_160;
  longlong local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined *local_148;
  undefined4 local_140;
  undefined **local_138;
  undefined8 local_130;
  longlong local_d8;
  ulonglong uStack_d0;
  uint local_c8 [4];
  uint *local_b8;
  uint local_b0;
  uint local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined1 local_a0 [8];
  longlong local_98;
  undefined4 local_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar24 = *(longlong *)(param_1 + 0x828);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  local_200 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c997720) && (FUN_144b3d300(&DAT_14c997720), DAT_14c997720 == -1)) {
    _DAT_14c9976c0 = DAT_14c9974b0;
    _DAT_14c9976c8 = DAT_14c9974a8;
    _DAT_14c9976d0 = DAT_14c9974b8;
    _DAT_14c9976d8 = DAT_14c9974a8;
    _DAT_14c9976e0 = DAT_14c9974c0;
    _DAT_14c9976e8 = DAT_14c9974a8;
    _DAT_14c9976f0 = DAT_14c996a70;
    _DAT_14c9976f8 = DAT_14c9974a8;
    _DAT_14c997700 = DAT_14c9968b8;
    _DAT_14c997708 = DAT_14c9974a8;
    _DAT_14c997710 = DAT_14c9968a8;
    _DAT_14c997718 = DAT_14c9974a8;
    _Init_thread_footer(&DAT_14c997720);
  }
  local_1d8 = 0;
  uStack_1d0 = CONCAT62(uStack_1d0._2_6_,1);
  FUN_140dff43c(lVar24,DAT_14c9968a0,DAT_14c9974a8);
  ppuVar7 = &local_148;
  local_148 = &DAT_14c9976c0;
  local_140 = 6;
  FUN_140cea7a2(lVar24,uVar3,ppuVar7);
  if (*(char *)(param_1 + 0x18d) == '\0') {
    FUN_140676024(&local_d8,lVar24);
    FUN_14067630e(&local_d8,1,0);
    FUN_14067630e(local_a0,1,0);
    uStack_150 = *(undefined4 *)(param_1 + 0x1b4);
    local_158 = *(longlong *)(param_1 + 0x1ac);
    local_160 = *(undefined4 *)(param_1 + 0x1a8);
    local_168 = *(undefined8 *)(param_1 + 0x1a0);
    FUN_1429f8094(&local_d8);
  }
  uVar5 = *(uint *)(lVar24 + 0x1b8);
  cVar4 = FUN_140498cd4(uVar3,DAT_14c996a18,DAT_14c9974a8);
  local_260 = lVar24;
  if ((cVar4 == '\0') && (0 < (int)uVar5)) {
    uVar19 = 0;
    do {
      cVar4 = FUN_1448c2a90(local_260,uVar19);
      uVar17 = 1 << ((byte)uVar19 & 0x1f);
      uVar23 = uVar19 >> 5;
      if (cVar4 == '\0') {
        lVar27 = *(longlong *)(local_260 + 0x140);
        if (*(longlong *)(local_260 + 0x140) == 0) {
          lVar27 = lVar24 + 0x130;
        }
        lVar32 = *(longlong *)(local_260 + 0x1b0);
        if (*(longlong *)(local_260 + 0x1b0) == 0) {
          lVar32 = lVar24 + 0x1a0;
        }
        if ((*(uint *)(lVar27 + uVar23 * 4) & uVar17) == 0) goto LAB_142a1579c;
        puVar26 = (uint *)(lVar32 + uVar23 * 4);
        *puVar26 = *puVar26 | uVar17;
      }
      else {
        lVar32 = *(longlong *)(local_260 + 0x1b0);
        if (*(longlong *)(local_260 + 0x1b0) == 0) {
          lVar32 = lVar24 + 0x1a0;
        }
LAB_142a1579c:
        puVar26 = (uint *)(lVar32 + uVar23 * 4);
        *puVar26 = *puVar26 & ~uVar17;
      }
      uVar17 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar17;
    } while (uVar5 != uVar17);
  }
  lVar24 = local_260;
  uVar5 = FUN_1401f66f6(local_260);
  *(uint *)(param_1 + 0x300) = uVar5;
  *(undefined4 *)(param_1 + 0x308) = 0;
  local_269 = *(byte *)(param_1 + 0x1c0);
  local_214 = (int)*(short *)(param_1 + 0x18a);
  local_138 = (undefined **)0x0;
  local_130 = 0x8000000000;
  if (DAT_14c75f3bd == '\0') {
    uVar17 = uVar5 + 0x1f;
    local_250 = (ulonglong)(uVar17 >> 5);
  }
  else {
    local_130 = CONCAT44(0x80,uVar5);
    uVar17 = uVar5 + 0x1f;
    local_228 = (ulonglong)uVar17;
    local_250 = (ulonglong)(uVar17 >> 5);
    if (0x1f < uVar17) {
      if (uVar17 < 0xa0) {
LAB_142a14425:
        uVar17 = (uint)local_228;
        uVar22 = (uint)(local_228 >> 3) & 0x1ffffffc;
      }
      else {
        FUN_1446efa72(&local_138,0,local_250);
        uVar17 = (uint)local_228;
        local_130 = CONCAT44(uVar17,(int)local_130) & 0xffffffe0ffffffff;
        ppuVar7 = &local_148;
        if (local_138 != (undefined **)0x0) {
          ppuVar7 = local_138;
        }
        if (uVar17 < 0x120) goto LAB_142a14425;
        uVar22 = (int)local_250 * 4;
      }
      memset(ppuVar7,0,(ulonglong)uVar22);
      iVar31 = (int)local_130 + 0x1f;
      if (-1 < (int)local_130) {
        iVar31 = (int)local_130;
      }
      if ((int)local_130 % 0x20 != 0) {
        ppuVar7 = local_138;
        if (local_138 == (undefined **)0x0) {
          ppuVar7 = &local_148;
        }
        bVar10 = -(char)((int)local_130 % 0x20);
        *(uint *)((longlong)ppuVar7 + (longlong)(iVar31 >> 5) * 4) =
             (uint)(*(int *)((longlong)ppuVar7 + (longlong)(iVar31 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    local_268 = (longlong *)FUN_142a1c318(lVar24,DAT_14c9968a0,DAT_14c9974a8);
    local_1d8 = 0;
    uStack_1d0 = 0;
    uStack_1d0._0_4_ = 0;
    if (0 < (int)uVar5) {
      uVar17 = 0;
      do {
        cVar4 = FUN_1448c2a90(lVar24);
        if (cVar4 == '\0') {
          lVar27 = (longlong)(int)uStack_1d0;
          uVar22 = (int)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar22);
          if (uStack_1d0._4_4_ < uVar22) {
            FUN_1446f48e2(&local_1d8);
          }
          *(uint *)(local_1d8 + lVar27 * 4) = uVar17;
        }
        uVar17 = uVar17 + 1;
      } while (uVar5 != uVar17);
      uVar17 = (uint)local_228;
    }
    local_b8 = (uint *)0x0;
    local_b0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_ac = 0x80;
    uStack_a8 = 0xffffffff;
    local_a4 = 0;
    local_98 = 0;
    local_90 = 0;
    if ((int)uStack_1d0 != 0) {
      pvVar15 = (void *)(lVar24 + 0xd8);
      iVar31 = (int)uStack_1d0;
      local_240 = (ulonglong)uVar5;
      do {
        lVar27 = local_1d8;
        lVar32 = 0;
        plVar9 = local_268;
        do {
          uVar5 = *(uint *)(lVar27 + lVar32);
          if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar24 + 0xf0))) {
            lVar25 = *(longlong *)(lVar24 + 0xe8);
            if (*(longlong *)(lVar24 + 0xe8) == 0) {
              lVar25 = (longlong)pvVar15;
            }
            if ((*(uint *)(lVar25 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
              iVar11 = *(int *)(*(longlong *)(*(longlong *)(lVar24 + 0xb8) + 0x120) +
                               (ulonglong)uVar5 * 4);
              local_158 = CONCAT44(local_158._4_4_,iVar11);
              if (iVar11 != -1) {
                FUN_1447cbafe(&local_d8,&local_168,&local_158);
                plVar9 = local_268;
              }
            }
          }
          lVar32 = lVar32 + 4;
        } while ((longlong)iVar31 * 4 != lVar32);
        uVar19 = (ulonglong)local_b0;
        uVar5 = (uint)local_240;
        if (local_b0 == 0) {
          uVar28 = 1;
          iVar31 = 0;
          uVar23 = 0;
          uVar17 = 0;
        }
        else {
          puVar26 = local_b8;
          if (local_b8 == (uint *)0x0) {
            puVar26 = local_c8;
          }
          uVar17 = *puVar26;
          if (uVar17 == 0) {
            iVar31 = local_b0 + 0x1e;
            if (-1 < (int)(local_b0 - 1)) {
              iVar31 = local_b0 - 1;
            }
            uVar23 = 0;
            uVar28 = (ulonglong)(uint)(iVar31 >> 5);
            if (iVar31 >> 5 < 1) {
              uVar28 = uVar23;
            }
            iVar31 = 0;
            do {
              if (uVar28 == uVar23) goto LAB_142a14b45;
              iVar31 = iVar31 + 0x20;
              uVar17 = puVar26[uVar23 + 1];
              uVar23 = uVar23 + 1;
            } while (uVar17 == 0);
          }
          else {
            iVar31 = 0;
            uVar23 = 0;
          }
          uVar28 = (ulonglong)(-uVar17 & uVar17);
          uVar29 = uVar28 * 2 + 1;
          lVar27 = 0x3f;
          if (uVar29 != 0) {
            for (; uVar29 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          uVar17 = (iVar31 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
          if ((int)local_b0 <= (int)uVar17) {
            uVar17 = local_b0;
          }
        }
        if (uVar17 != local_b0) {
          local_248 = CONCAT44(local_248._4_4_,0xffffffff);
          uVar29 = local_240;
          do {
            uVar5 = *(uint *)(local_d8 + (longlong)(int)uVar17 * 0xc);
            local_220 = uVar28;
            if (*(longlong *)(*(longlong *)((longlong)plVar9 + 0x10) + (longlong)(int)uVar5 * 8) ==
                0) {
              local_234 = 1 << ((byte)uVar5 & 0x1f);
              ppuVar7 = local_138;
              if (local_138 == (undefined **)0x0) {
                ppuVar7 = &local_148;
              }
              uVar17 = uVar5 + 0x1f;
              if (-1 < (int)uVar5) {
                uVar17 = uVar5;
              }
              lVar27 = (longlong)((int)uVar17 >> 5);
              uVar17 = *(uint *)((longlong)ppuVar7 + lVar27 * 4);
              if ((uVar17 >> (uVar5 & 0x1f) & 1) == 0) {
                puVar26 = (uint *)((longlong)ppuVar7 + lVar27 * 4);
                local_238 = iVar31;
                local_230 = lVar27;
                local_210 = uVar23;
                if (((-1 < (int)uVar5) && (lVar24 = *(longlong *)(lVar24 + 0xb8), lVar24 != 0)) &&
                   ((int)uVar5 < *(int *)(lVar24 + 0x148))) {
                  lVar27 = (longlong)(int)uVar5 * 0x50;
                  plVar8 = (longlong *)(*(longlong *)(lVar24 + 0x140) + lVar27);
                  lVar27 = *(longlong *)(lVar24 + 0x140) + lVar27;
                  puVar26 = (uint *)(lVar27 + 0x10);
                  iVar31 = *(int *)(lVar27 + 0x28);
                  local_258 = pvVar15;
                  local_208 = uVar19;
                  if (iVar31 == 0) {
                    uVar23 = 1;
                    uVar19 = 0;
                    iVar11 = 0;
                    iVar16 = 0;
                  }
                  else {
                    puVar14 = (uint *)plVar8[4];
                    if ((uint *)plVar8[4] == (uint *)0x0) {
                      puVar14 = puVar26;
                    }
                    uVar5 = *puVar14;
                    if (uVar5 == 0) {
                      iVar11 = iVar31 + 0x1e;
                      if (-1 < iVar31 + -1) {
                        iVar11 = iVar31 + -1;
                      }
                      uVar19 = 0;
                      uVar23 = (ulonglong)(uint)(iVar11 >> 5);
                      if (iVar11 >> 5 < 1) {
                        uVar23 = uVar19;
                      }
                      iVar16 = 0;
                      do {
                        if (uVar23 == uVar19) goto LAB_142a14a22;
                        iVar16 = iVar16 + 0x20;
                        uVar5 = puVar14[uVar19 + 1];
                        uVar19 = uVar19 + 1;
                      } while (uVar5 == 0);
                    }
                    else {
                      uVar19 = 0;
                      iVar16 = 0;
                    }
                    uVar23 = (ulonglong)(-uVar5 & uVar5);
                    uVar28 = uVar23 * 2 + 1;
                    lVar24 = 0x3f;
                    if (uVar28 != 0) {
                      for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                      }
                    }
                    iVar11 = (iVar16 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                    if (iVar31 <= iVar11) {
                      iVar11 = iVar31;
                    }
                  }
                  if (iVar11 != iVar31) {
                    uVar5 = 0xffffffff;
                    iVar6 = iVar31;
                    do {
                      uVar17 = *(uint *)(*plVar8 + (longlong)iVar11 * 0xc);
                      pvVar15 = (void *)*(longlong *)(local_260 + 0xe8);
                      if (*(longlong *)(local_260 + 0xe8) == 0) {
                        pvVar15 = local_258;
                      }
                      uVar22 = uVar17 + 0x1f;
                      if (-1 < (longlong)(int)uVar17) {
                        uVar22 = uVar17;
                      }
                      if (((*(uint *)((longlong)pvVar15 + (longlong)((int)uVar22 >> 5) * 4) >>
                            (uVar17 & 0x1f) & 1) != 0) &&
                         (*(longlong *)
                           (*(longlong *)((longlong)plVar9 + 0x10) + (longlong)(int)uVar17 * 8) == 0
                         )) {
                        ppuVar7 = local_138;
                        if (local_138 == (undefined **)0x0) {
                          ppuVar7 = &local_148;
                        }
                        if ((*(uint *)((longlong)ppuVar7 + (longlong)((int)uVar22 >> 5) * 4) &
                            1 << ((byte)uVar17 & 0x1f)) == 0) {
                          cVar4 = FUN_1448c2a90(local_260);
                          plVar9 = local_268;
                          if (cVar4 != '\0') {
                            ppuVar7 = local_138;
                            if (local_138 == (undefined **)0x0) {
                              ppuVar7 = &local_148;
                            }
                            puVar26 = (uint *)((longlong)ppuVar7 + local_230 * 4);
                            *puVar26 = *puVar26 & ~local_234;
                            pvVar15 = local_258;
                            uVar19 = local_208;
                            uVar23 = local_210;
                            lVar24 = local_260;
                            uVar29 = local_240;
                            iVar31 = local_238;
                            goto LAB_142a14a70;
                          }
                          iVar6 = (int)plVar8[5];
                        }
                      }
                      uVar5 = uVar5 & ~(uint)uVar23;
                      puVar14 = (uint *)plVar8[4];
                      if ((uint *)plVar8[4] == (uint *)0x0) {
                        puVar14 = puVar26;
                      }
                      iVar11 = (int)uVar19;
                      lVar24 = (longlong)iVar11;
                      uVar17 = puVar14[lVar24] & uVar5;
                      if (uVar17 == 0) {
                        iVar12 = iVar6 + 0x1e;
                        if (-1 < iVar6 + -1) {
                          iVar12 = iVar6 + -1;
                        }
                        iVar12 = iVar12 >> 5;
                        iVar16 = iVar16 + 0x20;
                        iVar13 = iVar12;
                        if (iVar12 < iVar11) {
                          iVar13 = iVar11;
                        }
                        if (iVar11 < iVar12) {
                          lVar27 = 0;
                          do {
                            uVar17 = puVar14[lVar24 + lVar27 + 1];
                            if (uVar17 != 0) {
                              uVar19 = (ulonglong)(iVar11 + (int)lVar27 + 1);
                              uVar5 = 0xffffffff;
                              goto LAB_142a1498b;
                            }
                            iVar16 = iVar16 + 0x20;
                            lVar27 = lVar27 + 1;
                          } while (iVar13 - lVar24 != lVar27);
                          uVar5 = 0xffffffff;
                          iVar11 = iVar13;
                        }
                        uVar19 = (ulonglong)(iVar11 + 1);
                        plVar9 = local_268;
                        iVar11 = iVar6;
                      }
                      else {
LAB_142a1498b:
                        uVar23 = (ulonglong)(-uVar17 & uVar17);
                        uVar28 = uVar23 * 2 + 1;
                        lVar24 = 0x3f;
                        if (uVar28 != 0) {
                          for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                          }
                        }
                        iVar11 = (iVar16 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
                        if (iVar6 <= iVar11) {
                          iVar11 = iVar6;
                        }
                      }
                    } while (iVar11 != iVar31);
                  }
LAB_142a14a22:
                  ppuVar7 = local_138;
                  if (local_138 == (undefined **)0x0) {
                    ppuVar7 = &local_148;
                  }
                  puVar26 = (uint *)((longlong)ppuVar7 + local_230 * 4);
                  uVar17 = *puVar26;
                  pvVar15 = local_258;
                  uVar19 = local_208;
                  uVar29 = local_240;
                }
                *puVar26 = uVar17 | local_234;
                uVar23 = local_210;
                lVar24 = local_260;
                iVar31 = local_238;
              }
            }
LAB_142a14a70:
            uVar5 = (uint)local_248 & ~(uint)local_220;
            puVar26 = local_b8;
            if (local_b8 == (uint *)0x0) {
              puVar26 = local_c8;
            }
            iVar11 = (int)uVar23;
            lVar27 = (longlong)iVar11;
            local_248 = CONCAT44(local_248._4_4_,uVar5);
            uVar5 = puVar26[lVar27] & uVar5;
            if (uVar5 == 0) {
              iVar16 = local_b0 + 0x1e;
              if (-1 < (int)(local_b0 - 1)) {
                iVar16 = local_b0 - 1;
              }
              iVar16 = iVar16 >> 5;
              iVar31 = iVar31 + 0x20;
              iVar6 = iVar16;
              if (iVar16 < iVar11) {
                iVar6 = iVar11;
              }
              if (iVar11 < iVar16) {
                lVar32 = 0;
                do {
                  uVar5 = puVar26[lVar27 + lVar32 + 1];
                  if (uVar5 != 0) {
                    uVar23 = (ulonglong)((int)lVar32 + iVar11 + 1);
                    local_248 = CONCAT44(local_248._4_4_,0xffffffff);
                    goto LAB_142a14b16;
                  }
                  iVar31 = iVar31 + 0x20;
                  lVar32 = lVar32 + 1;
                } while (iVar6 - lVar27 != lVar32);
                local_248 = CONCAT44(local_248._4_4_,0xffffffff);
                iVar11 = iVar6;
              }
              uVar23 = (ulonglong)(iVar11 + 1);
              plVar9 = local_268;
              lVar24 = local_260;
              uVar28 = local_220;
              uVar29 = local_240;
              uVar17 = local_b0;
            }
            else {
LAB_142a14b16:
              uVar28 = (ulonglong)(-uVar5 & uVar5);
              uVar1 = uVar28 * 2 + 1;
              lVar27 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                }
              }
              uVar17 = (iVar31 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
              if ((int)local_b0 <= (int)uVar17) {
                uVar17 = local_b0;
              }
            }
            uVar5 = (uint)uVar29;
          } while (uVar17 != (uint)uVar19);
        }
LAB_142a14b45:
        FUN_140619b9c(&local_d8);
        if (local_1d8 != 0) {
          FUN_1400020a8();
        }
        local_1d8 = local_158;
        uStack_1d0 = CONCAT44(uStack_14c,uStack_150);
        FUN_1402226aa(&local_d8);
        iVar31 = (int)uStack_1d0;
      } while ((int)uStack_1d0 != 0);
      local_90 = 0;
      uVar17 = (uint)local_228;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    uVar19 = uStack_d0 >> 0x20;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    if ((int)uVar19 != 0) {
      FUN_1447a08a2(&local_d8);
    }
    uStack_a8 = 0xffffffff;
    local_a4 = 0;
    local_b0 = 0;
    if (0x80 < local_ac) {
      local_ac = 0x80;
      FUN_1446efbd8();
    }
    if (local_b8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_1d8 != 0) {
      FUN_1400020a8();
    }
  }
  local_258 = (void *)(param_1 + 0x420);
  *(uint *)(param_1 + 0x438) = uVar5;
  if (0x1f < uVar17) {
    if (*(int *)(param_1 + 0x43c) + 0x1fU >> 5 < (uint)local_250) {
      if ((0x9f < uVar17) || (*(longlong *)(param_1 + 0x430) != 0)) {
        uVar19 = 0;
        if (0x9f < uVar17) {
          uVar19 = local_250 & 0xffffffff;
        }
        FUN_1446efa72(param_1 + 0x430,0,uVar19,4);
      }
      *(uint *)(param_1 + 0x43c) = uVar17 & 0xffffffe0;
    }
    pvVar15 = *(void **)(param_1 + 0x430);
    if (*(void **)(param_1 + 0x430) == (void *)0x0) {
      pvVar15 = local_258;
    }
    if (uVar17 < 0x120) {
      uVar17 = uVar17 >> 3 & 0x3c;
    }
    else {
      uVar17 = (int)local_250 << 2;
    }
    memset(pvVar15,0,(ulonglong)uVar17);
    iVar31 = *(int *)(param_1 + 0x438);
    iVar11 = iVar31 + 0x1f;
    if (-1 < iVar31) {
      iVar11 = iVar31;
    }
    if (iVar31 % 0x20 != 0) {
      pvVar15 = *(void **)(param_1 + 0x430);
      if (*(void **)(param_1 + 0x430) == (void *)0x0) {
        pvVar15 = local_258;
      }
      bVar10 = -(char)(iVar31 % 0x20);
      *(uint *)((longlong)pvVar15 + (longlong)(iVar11 >> 5) * 4) =
           (uint)(*(int *)((longlong)pvVar15 + (longlong)(iVar11 >> 5) * 4) << (bVar10 & 0x1f)) >>
           (bVar10 & 0x1f);
    }
  }
  iVar31 = local_214;
  if (DAT_14c75f3dc < local_214) {
    iVar31 = DAT_14c75f3dc;
  }
  lVar27 = FUN_142a1c318(lVar24,DAT_14c9968a0);
  FUN_1401c0b60(lVar24,&local_d8);
  if ((int)uVar5 < 1) {
    iVar11 = 0;
  }
  else {
    uVar19 = 0;
    iVar11 = 0;
    do {
      if (((local_269 & 2) == 0) ||
         (*(int *)(*(longlong *)(CONCAT44(local_a4,uStack_a8) + 0x10) + uVar19 * 4) <= iVar31)) {
        if ((int)local_130 < 1) {
          bVar33 = false;
        }
        else {
          ppuVar7 = local_138;
          if (local_138 == (undefined **)0x0) {
            ppuVar7 = &local_148;
          }
          bVar33 = (*(uint *)((longlong)ppuVar7 + (uVar19 >> 5 & 0x7ffffff) * 4) >>
                    ((uint)uVar19 & 0x1f) & 1) != 0;
        }
        if ((bVar33) || (*(longlong *)(*(longlong *)(lVar27 + 0x10) + uVar19 * 8) != 0)) {
          pvVar15 = *(void **)(param_1 + 0x430);
          if (*(void **)(param_1 + 0x430) == (void *)0x0) {
            pvVar15 = local_258;
          }
          puVar26 = (uint *)((longlong)pvVar15 + (uVar19 >> 5 & 0x7ffffff) * 4);
          *puVar26 = *puVar26 | 1 << ((byte)uVar19 & 0x1f);
          iVar11 = iVar11 + 1;
        }
      }
      uVar19 = uVar19 + 1;
    } while (uVar5 != uVar19);
  }
  if (local_138 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  *(int *)(param_1 + 0x304) = iVar11;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar11);
  }
  plVar9 = (longlong *)(param_1 + 800);
  *(undefined4 *)(param_1 + 0x328) = 0;
  if (*(int *)(param_1 + 0x32c) != iVar11) {
    FUN_14043d0a6(plVar9,iVar11);
  }
  for (; iVar11 != 0; iVar11 = iVar11 + -1) {
    iVar31 = *(int *)(param_1 + 0x328);
    *(uint *)(param_1 + 0x328) = iVar31 + 1U;
    if (*(uint *)(param_1 + 0x32c) < iVar31 + 1U) {
      FUN_1406b7a4a(plVar9,iVar31);
    }
    *(undefined8 *)(*plVar9 + (longlong)iVar31 * 8) = 0;
  }
  local_d8 = 0;
  FUN_140a2c23a(param_1 + 0x330,&local_d8,*(undefined4 *)(param_1 + 0x304));
  local_d8 = 0;
  FUN_140a2c23a(param_1 + 0x340,&local_d8,*(undefined4 *)(param_1 + 0x304));
  local_268 = (longlong *)(param_1 + 0x440);
  FUN_140c5dd0e(local_268,*(undefined4 *)(param_1 + 0x304),1);
  local_248 = param_1 + 0x3f0;
  FUN_140071562(local_248,*(undefined4 *)(param_1 + 0x304),1);
  plVar9 = (longlong *)(param_1 + 0x400);
  iVar11 = *(int *)(param_1 + 0x304);
  iVar31 = *(int *)(param_1 + 0x408);
  if (iVar31 < iVar11) {
    *(int *)(param_1 + 0x408) = iVar11;
    if ((uint)(*(int *)(param_1 + 0x40c) - iVar31) < (uint)(iVar11 - iVar31)) {
      FUN_1446f48e2(plVar9);
    }
    memset((void *)((longlong)iVar31 * 4 + *plVar9),0,(longlong)(iVar11 - iVar31) << 2);
  }
  else {
    if (iVar11 < 0) goto LAB_142a1571d;
    if (iVar11 < iVar31) {
      *(int *)(param_1 + 0x408) = iVar11;
      FUN_14479f406(plVar9);
    }
  }
  plVar9 = (longlong *)(param_1 + 0x410);
  iVar11 = *(int *)(param_1 + 0x300);
  iVar31 = *(int *)(param_1 + 0x418);
  if (iVar31 < iVar11) {
    *(int *)(param_1 + 0x418) = iVar11;
    if ((uint)(*(int *)(param_1 + 0x41c) - iVar31) < (uint)(iVar11 - iVar31)) {
      FUN_1446f48e2(plVar9);
    }
    memset((void *)((longlong)iVar31 * 4 + *plVar9),0,(longlong)(iVar11 - iVar31) << 2);
  }
  else {
    if (iVar11 < 0) {
LAB_142a1571d:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    if (iVar11 < iVar31) {
      *(int *)(param_1 + 0x418) = iVar11;
      FUN_14479f406(plVar9);
    }
  }
  plVar9 = (longlong *)(param_1 + 0x230);
  FUN_1408bc63f(*(undefined8 *)(param_1 + 0x230),*(undefined4 *)(param_1 + 0x238));
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (*(int *)(param_1 + 0x23c) != 0) {
    FUN_1417313b0(plVar9,0);
  }
  iVar31 = *(int *)(param_1 + 0x304);
  if (iVar31 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar31);
  }
  if (*(int *)(param_1 + 0x23c) < iVar31) {
    FUN_1417313b0(plVar9);
  }
  if (0 < *(int *)(param_1 + 0x300)) {
    lVar24 = 8;
    uVar19 = 0;
    iVar31 = 0;
    do {
      pvVar15 = *(void **)(param_1 + 0x430);
      if (*(void **)(param_1 + 0x430) == (void *)0x0) {
        pvVar15 = local_258;
      }
      uVar5 = (uint)uVar19;
      if ((*(uint *)((longlong)pvVar15 + (uVar19 >> 5 & 0x7ffffff) * 4) >> (uVar5 & 0x1f) & 1) == 0)
      {
        *(undefined4 *)(*(longlong *)(param_1 + 0x410) + uVar19 * 4) = 0xffffffff;
      }
      else {
        *(int *)(*(longlong *)(param_1 + 0x410) + uVar19 * 4) = iVar31;
        *(uint *)(*(longlong *)(param_1 + 0x400) + (longlong)iVar31 * 4) = uVar5;
        lVar27 = *(longlong *)(*(longlong *)(param_1 + 0x58) + 0xe0);
        iVar11 = *(int *)(lVar27 + lVar24);
        iVar16 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar16 = 0;
        }
        FUN_1446f82e2(&local_d8,iVar16,*(undefined8 *)(lVar27 + -8 + lVar24),1);
        lVar27 = local_d8;
        plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar8 = param_1;
        *(uint *)(plVar8 + 1) = uVar5;
        *(longlong *)((longlong)plVar8 + 0xc) = lVar27;
        iVar11 = *(int *)(param_1 + 0x238);
        *(uint *)(param_1 + 0x238) = iVar11 + 1U;
        if (*(uint *)(param_1 + 0x23c) < iVar11 + 1U) {
          FUN_146eede04(plVar9,iVar11);
        }
        *(longlong **)(*plVar9 + (longlong)iVar11 * 8) = plVar8;
        iVar31 = iVar31 + 1;
      }
      uVar19 = uVar19 + 1;
      lVar24 = lVar24 + 0x10;
    } while ((longlong)uVar19 < (longlong)*(int *)(param_1 + 0x300));
  }
  lVar24 = local_260;
  puVar18 = (undefined8 *)(param_1 + 0xa0);
  puVar20 = (undefined8 *)(param_1 + 0x240);
  for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
    *puVar20 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar20 = puVar20 + 1;
  }
  puVar18 = (undefined8 *)(param_1 + 0xa0);
  puVar20 = (undefined8 *)(param_1 + 0x2a0);
  for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
    *puVar20 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar20 = puVar20 + 1;
  }
  *(float *)(param_1 + 0x30c) = *(float *)(param_1 + 0x19c) * DAT_14c75f3b8;
  FUN_140757a08(&local_148,local_260);
  lVar27 = param_1 + 0x5d0;
  FUN_140757a08(&local_1d8,lVar27);
  FUN_140757bfc(&local_1d8,&local_148);
  FUN_14061a004(*(undefined8 *)(param_1 + 0x58),DAT_14c997508,DAT_14c9974a8);
  plVar9 = (longlong *)FUN_140dff482(*(undefined8 *)(param_1 + 0x828),DAT_14c9968a0,DAT_14c9974a8);
  iVar31 = *(int *)(param_1 + 0x300);
  iVar11 = (**(code **)(*plVar9 + 0x60))(plVar9);
  if ((iVar31 == iVar11) && (*(int *)(param_1 + 0x304) == *(int *)(param_1 + 0x448))) {
    *(byte *)(param_1 + 0x319) = *(byte *)(param_1 + 0x319) & 0xfb | DAT_14c75f3d4 << 2;
    FUN_140614a00(param_1,plVar9,local_200,1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9976b0) && (FUN_144b3d300(&DAT_14c9976b0), DAT_14c9976b0 == -1)) {
      _DAT_14c9976a0 = DAT_14c9968b8;
      _DAT_14c9976a8 = DAT_14c9974a8;
      _Init_thread_footer(&DAT_14c9976b0);
    }
    local_1e8 = 0;
    local_1e0 = 1;
    FUN_140dff43c(lVar27,DAT_14c9968a0,DAT_14c9974a8);
    local_1f8 = &DAT_14c9976a0;
    local_1f0 = 1;
    FUN_140cea7a2(lVar27,lVar24);
    FUN_140676024(&local_d8,lVar27);
    FUN_140676218(&local_d8,lVar24);
    if (((*(byte *)(param_1 + 0x1c0) & 2) != 0) && (0 < *(int *)(param_1 + 0x304))) {
      lVar24 = 0;
      pcVar30 = AcquireSRWLockExclusive_exref;
      do {
        uVar5 = *(uint *)(*(longlong *)(param_1 + 0x400) + lVar24 * 4);
        lVar27 = *(longlong *)(param_1 + 0x828);
        uVar17 = 1 << ((byte)uVar5 & 0x1f);
        lVar32 = lVar27 + 0xd8;
        if (*(longlong *)(lVar27 + 0xe8) != 0) {
          lVar32 = *(longlong *)(lVar27 + 0xe8);
        }
        uVar22 = uVar5 + 0x1f;
        if (-1 < (int)uVar5) {
          uVar22 = uVar5;
        }
        lVar25 = (longlong)((int)uVar22 >> 5);
        uVar22 = *(uint *)(lVar32 + lVar25 * 4);
        lVar32 = lVar27 + 0x130;
        if (*(longlong *)(lVar27 + 0x140) != 0) {
          lVar32 = *(longlong *)(lVar27 + 0x140);
        }
        if ((uVar22 >> (uVar5 & 0x1f) & 1) == 0) {
          puVar26 = (uint *)(lVar32 + lVar25 * 4);
          *puVar26 = *puVar26 | uVar17;
          lVar27 = *(longlong *)(param_1 + 0x710);
          if (*(longlong *)(param_1 + 0x710) == 0) {
            lVar27 = param_1 + 0x700;
          }
          puVar26 = (uint *)(lVar27 + lVar25 * 4);
          uVar5 = *puVar26 | uVar17;
        }
        else {
          puVar26 = (uint *)(lVar32 + lVar25 * 4);
          *puVar26 = *puVar26 & ~uVar17;
          lVar27 = *(longlong *)(param_1 + 0x710);
          if (*(longlong *)(param_1 + 0x710) == 0) {
            lVar27 = param_1 + 0x700;
          }
          puVar26 = (uint *)(lVar27 + lVar25 * 4);
          uVar5 = ~uVar17 & *puVar26;
        }
        *puVar26 = uVar5;
        lVar27 = *(longlong *)(*local_268 + lVar24 * 8);
        if (lVar27 != 0) {
          lVar32 = *(longlong *)(lVar27 + 0x10);
          *(bool *)(lVar27 + 0x1b9) = (uVar22 & uVar17) != 0;
          *(byte *)(lVar27 + 0x94) = *(byte *)(lVar27 + 0x94) | 8;
          if ((lVar32 != 0) && (lVar27 = *(longlong *)(lVar32 + 8), lVar27 != 0)) {
            if (DAT_14c992a90 == '\x01') {
              (*pcVar30)((PSRWLOCK)(lVar27 + 0x128));
              if (*(int *)(lVar32 + 0x18) == -1) {
                lVar25 = *(longlong *)(lVar27 + 0x98);
                uVar5 = *(uint *)(lVar32 + 0x1c);
                piVar2 = (int *)(lVar25 + 0x160 + (ulonglong)uVar5 * 4);
                *piVar2 = *piVar2 + 1;
                *(int *)(lVar25 + 0x194) = *(int *)(lVar25 + 0x194) + 1;
                lVar25 = lVar25 + (ulonglong)uVar5 * 0x10;
                iVar31 = *(int *)(lVar25 + 0x1a0);
                *(int *)(lVar32 + 0x18) = iVar31;
                *(uint *)(lVar25 + 0x1a0) = iVar31 + 1U;
                if (*(uint *)(lVar25 + 0x1a4) < iVar31 + 1U) {
                  FUN_140431d5c((longlong *)(lVar25 + 0x198),iVar31);
                }
                lVar25 = *(longlong *)(lVar25 + 0x198);
                lVar21 = (longlong)iVar31 * 0x20;
                *(longlong *)(lVar25 + lVar21) = lVar32;
                *(undefined4 *)(lVar25 + 8 + lVar21) = 0;
                puVar18 = (undefined8 *)(lVar25 + 0x10 + lVar21);
                *puVar18 = 0;
                puVar18[1] = 0;
                pcVar30 = AcquireSRWLockExclusive_exref;
              }
              ReleaseSRWLockExclusive((PSRWLOCK)(lVar27 + 0x128));
            }
            else if (*(int *)(lVar32 + 0x18) == -1) {
              lVar27 = *(longlong *)(lVar27 + 0x98);
              uVar5 = *(uint *)(lVar32 + 0x1c);
              piVar2 = (int *)(lVar27 + 0x160 + (ulonglong)uVar5 * 4);
              *piVar2 = *piVar2 + 1;
              *(int *)(lVar27 + 0x194) = *(int *)(lVar27 + 0x194) + 1;
              lVar27 = lVar27 + (ulonglong)uVar5 * 0x10;
              iVar31 = *(int *)(lVar27 + 0x1a0);
              *(int *)(lVar32 + 0x18) = iVar31;
              *(uint *)(lVar27 + 0x1a0) = iVar31 + 1U;
              if (*(uint *)(lVar27 + 0x1a4) < iVar31 + 1U) {
                FUN_140431d5c((longlong *)(lVar27 + 0x198),iVar31);
              }
              lVar27 = *(longlong *)(lVar27 + 0x198);
              lVar25 = (longlong)iVar31 * 0x20;
              *(longlong *)(lVar27 + lVar25) = lVar32;
              *(undefined4 *)(lVar27 + 8 + lVar25) = 0;
              puVar18 = (undefined8 *)(lVar27 + 0x10 + lVar25);
              *puVar18 = 0;
              puVar18[1] = 0;
            }
          }
        }
        lVar24 = lVar24 + 1;
      } while (lVar24 < *(int *)(param_1 + 0x304));
    }
  }
  if (((*(byte *)(param_1 + 0x319) & 4) != 0) || (DAT_14c997680 == '\x01')) {
    FUN_140498ea8(*(undefined8 *)(param_1 + 0x828),DAT_14c9968a0,DAT_14c9974a8);
  }
  if ((((DAT_14c75f3d4 != '\0') || (DAT_14c75f3d5 == '\x01')) && (DAT_14c997628 == '\x01')) &&
     (*(undefined4 *)(param_1 + 0x3f8) = 0, *(int *)(param_1 + 0x3fc) != 0)) {
    FUN_1409caef4(local_248,0);
  }
  if ((local_60 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a157ea FUN_142a157ea body=69 status=ok
// SIG undefined FUN_142a157ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a157ea(void)

{
  _DAT_14c997728 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a1582c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997730,1);
  return;
}



// FUNCTION 142a15830 FUN_142a15830 body=188 status=ok
// SIG undefined FUN_142a15830(void)

undefined8 FUN_142a15830(longlong param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar1 = *param_2;
  if ((longlong)(int)uVar1 < -1) {
    if (*(int *)(param_1 + 0x3a8) != *(int *)(param_1 + 0x3d4)) {
      lVar3 = param_1 + 0x3d8;
      if (*(longlong *)(param_1 + 0x3e0) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x3e0);
      }
      uVar4 = *(uint *)(lVar3 + (ulonglong)(*(int *)(param_1 + 1000) - 1U & uVar1 & 0x7fffffff) * 4)
      ;
      if (uVar4 != 0xffffffff) {
        while (puVar5 = (uint *)(*(longlong *)(param_1 + 0x3a0) + (longlong)(int)uVar4 * 0x18),
              *puVar5 != (uVar1 & 0x7fffffff)) {
          uVar4 = puVar5[4];
          if (uVar4 == 0xffffffff) {
            return 0;
          }
        }
        if (puVar5 == (uint *)0x0) {
          return 0;
        }
        puVar5 = puVar5 + 2;
        if (puVar5 == (uint *)0x0) {
          return 0;
        }
LAB_142a158ad:
        return *(undefined8 *)puVar5;
      }
    }
  }
  else if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x418))) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x410) + (longlong)(int)uVar1 * 4);
    if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x348))) {
      puVar5 = (uint *)((longlong)iVar2 * 8 + *(longlong *)(param_1 + 0x340));
      goto LAB_142a158ad;
    }
  }
  return 0;
}



// FUNCTION 142a158ec FUN_142a158ec body=27178 status=ok
// SIG undefined FUN_142a158ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a158ec(undefined1 param_1 [8],longlong param_2)

{
  ulonglong uVar1;
  double *pdVar2;
  longlong *plVar3;
  longlong *plVar5;
  longlong *plVar7;
  ushort uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong *plVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [8];
  undefined1 auVar20 [16];
  longlong *plVar21;
  longlong *plVar22;
  longlong *plVar23;
  longlong *plVar24;
  double dVar25;
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
  char cVar39;
  int iVar40;
  uint uVar41;
  longlong lVar42;
  longlong lVar43;
  uint *puVar44;
  undefined8 uVar45;
  undefined4 *puVar46;
  uint *puVar47;
  double *pdVar48;
  undefined8 *puVar49;
  undefined8 *puVar50;
  undefined8 *puVar51;
  byte *pbVar52;
  byte bVar53;
  longlong lVar54;
  longlong lVar55;
  longlong **pplVar56;
  undefined1 *puVar57;
  undefined8 **ppuVar58;
  uint uVar59;
  int iVar60;
  byte bVar61;
  ushort uVar62;
  longlong lVar63;
  ulonglong uVar64;
  byte bVar65;
  int iVar66;
  double **ppdVar67;
  uint *puVar68;
  undefined8 uVar69;
  undefined1 auVar70 [8];
  bool bVar71;
  uint *puVar72;
  uint uVar73;
  int iVar74;
  uint uVar75;
  int iVar76;
  uint uVar77;
  ulonglong uVar78;
  float fVar79;
  undefined4 uVar80;
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  double dVar97;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar98;
  double dVar99;
  double dVar100;
  undefined1 auVar101 [16];
  double dVar107;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar108;
  double dVar109;
  double dVar110;
  double dVar116;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar117;
  longlong *plVar118;
  double dVar124;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar125;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  float fVar129;
  double dVar130;
  double dVar131;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  double dVar135;
  double dVar136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  float fVar146;
  float fVar147;
  undefined1 auVar148 [16];
  double dVar149;
  double dVar153;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  double dVar154;
  double dVar155;
  double dVar160;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  double dVar161;
  double dVar162;
  undefined8 uVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  double dVar168;
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auStack_6c8 [32];
  double **local_6a8;
  double **local_6a0;
  double **local_698;
  undefined8 *local_690;
  double **local_688;
  undefined1 local_680;
  undefined2 local_678;
  undefined4 local_670;
  undefined1 local_668 [8];
  double dStack_660;
  longlong local_658;
  undefined1 *local_650;
  undefined1 local_648 [8];
  double dStack_640;
  double local_638;
  double local_630;
  undefined1 local_628 [8];
  double dStack_620;
  undefined1 local_618 [8];
  double dStack_610;
  undefined1 local_608 [16];
  uint *local_5f8;
  uint *local_5f0;
  double local_5e8;
  double dStack_5e0;
  longlong local_5d8;
  longlong local_5d0;
  longlong local_5c8;
  undefined1 (*local_5c0) [16];
  undefined8 *local_5b8;
  longlong local_5b0;
  double local_5a8;
  double dStack_5a0;
  undefined8 local_590;
  float local_588;
  undefined4 local_580;
  uint local_57c;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  uint *local_548;
  int local_540;
  longlong local_538;
  undefined8 uStack_530;
  longlong local_528;
  undefined8 uStack_520;
  longlong local_518;
  undefined8 uStack_510;
  undefined1 local_508 [112];
  longlong **local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  longlong local_480;
  undefined8 *local_478;
  double dStack_470;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  double local_438;
  undefined2 local_430;
  undefined4 local_42e;
  undefined2 local_42a;
  longlong local_420;
  undefined1 local_418 [16];
  double *local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  float local_3f0;
  undefined8 *local_3e8;
  int local_3e0;
  undefined4 local_3dc;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  longlong *local_3b8;
  longlong *plStack_3b0;
  undefined1 local_3a8 [16];
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  longlong *local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  longlong *local_358;
  longlong *plStack_350;
  longlong *local_348;
  double dStack_340;
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  longlong local_310;
  undefined4 local_2fe;
  undefined2 local_2fa;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined8 *local_2d8;
  double dStack_2d0;
  longlong *local_2c8;
  uint *puStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined8 *local_298;
  double dStack_290;
  longlong *local_288;
  longlong local_258;
  longlong local_220;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 *local_198;
  double dStack_190;
  longlong *local_188;
  undefined8 uStack_180;
  double *local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  longlong *local_148;
  double dStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  longlong *local_118;
  longlong *plStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  longlong *plVar4;
  longlong *plVar6;
  longlong *plVar8;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6c8;
  lVar54 = *(longlong *)((longlong)param_1 + 0x58);
  *(byte *)((longlong)param_1 + 0x319) =
       *(byte *)((longlong)param_1 + 0x319) & 0xf5 | DAT_14c75f3e0 * '\x02' | 8;
  local_480 = param_2;
  if ((lVar54 != 0) && ((*(byte *)((longlong)param_1 + 0x1c0) & 1) != 0)) {
    puVar57 = (undefined1 *)((longlong)param_1 + 0x5d0);
    lVar42 = FUN_14061a004(lVar54,DAT_14c997508,DAT_14c9974a8);
    lVar43 = FUN_1429aa594(lVar54,DAT_14c997510,DAT_14c9974a8);
    local_658 = lVar54;
    puVar44 = (uint *)FUN_1401466c8(lVar54,DAT_14c997500,DAT_14c9974a8);
    uVar69 = DAT_14c9974a8;
    uVar45 = FUN_142a1c318(puVar57,DAT_14c9968a0,DAT_14c9974a8);
    local_488 = 0;
    if (*(char *)((longlong)param_1 + 0x1c2) < '\0') {
      local_488 = FUN_146ee70ec(local_658,DAT_14c9968b8,uVar69);
    }
    local_5f0 = (uint *)((longlong)param_1 + 0x720);
    puVar51 = (undefined8 *)((longlong)param_1 + 0xa0);
    puVar49 = (undefined8 *)((longlong)param_1 + 0x100);
    for (lVar54 = 0xc; lVar54 != 0; lVar54 = lVar54 + -1) {
      *puVar49 = *puVar51;
      puVar51 = puVar51 + 1;
      puVar49 = puVar49 + 1;
    }
    local_498 = (longlong **)0x0;
    uStack_490 = 0;
    local_650 = puVar57;
    FUN_1407a5729(puVar57);
    local_628 = (undefined1  [8])local_480;
    *(undefined4 *)((longlong)param_1 + 0x308) = 0;
    local_178 = (double *)0x0;
    uStack_170 = (undefined1 *)0x0;
    iVar40 = (**(code **)(*(longlong *)((longlong)param_1 + 0x760) + 0x60))
                       ((longlong)param_1 + 0x760);
    if (iVar40 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar40);
    }
    if (iVar40 != 0) {
      FUN_1409caef4(&local_178,iVar40);
    }
    local_618 = (undefined1  [8])uVar45;
    iVar40 = *(int *)((longlong)param_1 + 0x304);
    local_5f8 = puVar44;
    local_5d8 = lVar43;
    local_5d0 = lVar42;
    if (iVar40 < 1) {
      iVar66 = 0;
      uVar73 = 0;
    }
    else {
      auVar70 = (undefined1  [8])((longlong)param_1 + 0x770);
      lVar42 = 0;
      uVar73 = 0;
      iVar66 = 0;
      local_648 = auVar70;
      lVar54 = local_658;
      do {
        dVar136 = (double)uStack_170;
        iVar74 = *(int *)(*(longlong *)((longlong)param_1 + 0x400) + lVar42 * 4);
        lVar55 = (longlong)iVar74;
        uVar59 = 1 << ((byte)iVar74 & 0x1f);
        lVar43 = *(longlong *)((longlong)param_1 + 0x780);
        if (*(longlong *)((longlong)param_1 + 0x780) == 0) {
          lVar43 = (longlong)auVar70;
        }
        iVar76 = iVar74 + 0x1f;
        if (-1 < lVar55) {
          iVar76 = iVar74;
        }
        uVar75 = *(uint *)(lVar43 + (longlong)(iVar76 >> 5) * 4);
        if ((((uVar75 & uVar59) != 0) && (*(int *)(*(longlong *)(lVar54 + 0x1b0) + lVar55 * 4) != 2)
            ) && (*(int *)(*(longlong *)(lVar54 + 400) + lVar55 * 4) != -1)) {
          lVar43 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x440) + lVar42 * 8);
          if (lVar43 == 0) {
            puVar46 = (undefined4 *)(lVar42 * 4 + *(longlong *)((longlong)param_1 + 0x3f0));
          }
          else {
            puVar46 = (undefined4 *)(lVar43 + 0x58);
          }
          uVar80 = *puVar46;
          lVar43 = (longlong)(int)uStack_170;
          uVar41 = (int)uStack_170 + 1;
          uStack_170 = (undefined1 *)CONCAT44(uStack_170._4_4_,uVar41);
          if (uStack_170._4_4_ < uVar41) {
            FUN_140543018(&local_178,(ulonglong)dVar136 & 0xffffffff);
            lVar54 = local_658;
            auVar70 = local_648;
          }
          uVar73 = uVar73 + 1;
          *(undefined4 *)((longlong)local_178 + lVar43 * 4) = uVar80;
          iVar40 = *(int *)((longlong)param_1 + 0x304);
        }
        iVar66 = iVar66 + (uint)((uVar75 & uVar59) != 0);
        lVar42 = lVar42 + 1;
      } while (lVar42 < iVar40);
    }
    auVar70 = local_628;
    FUN_140feaab4(*(undefined8 *)((longlong)local_628 + 0x9c8),iVar66);
    local_6a8 = (double **)local_2f8;
    local_2f8._0_4_ = 0x10000;
    ppdVar67 = (double **)(ulonglong)uVar73;
    FUN_1403f36fc(*(undefined8 *)((longlong)auVar70 + 0x9c8),local_1f8,ppdVar67,local_178);
    if (0 < *(int *)((longlong)param_1 + 0x304)) {
      lVar42 = 0;
      iVar40 = 0;
      lVar54 = local_658;
      do {
        uVar73 = *(uint *)(*(longlong *)((longlong)param_1 + 0x400) + lVar42 * 4);
        local_3d8._0_4_ = uVar73;
        *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x340) + lVar42 * 8) = 0;
        lVar43 = *(longlong *)((longlong)param_1 + 0x430);
        if (*(longlong *)((longlong)param_1 + 0x430) == 0) {
          lVar43 = (longlong)param_1 + 0x420;
        }
        uVar59 = uVar73 + 0x1f;
        if (-1 < (longlong)(int)uVar73) {
          uVar59 = uVar73;
        }
        uVar75 = *(uint *)(lVar43 + (longlong)((int)uVar59 >> 5) * 4);
        ppdVar67 = (double **)(ulonglong)uVar75;
        if ((uVar75 >> (uVar73 & 0x1f) & 1) != 0) {
          ppdVar67 = *(double ***)((longlong)param_1 + 0x780);
          if (*(double ***)((longlong)param_1 + 0x780) == (double **)0x0) {
            ppdVar67 = (double **)((longlong)param_1 + 0x770);
          }
          if (((*(uint *)((longlong)ppdVar67 + (longlong)((int)uVar59 >> 5) * 4) &
               1 << ((byte)uVar73 & 0x1f)) != 0) &&
             (*(int *)(*(longlong *)(lVar54 + 0x1b0) + (longlong)(int)uVar73 * 4) != 2)) {
            lVar54 = (longlong)iVar40;
            iVar40 = iVar40 + 1;
            plVar118 = *(longlong **)(local_1f8._0_8_ + lVar54 * 8);
            *(longlong **)(*(longlong *)((longlong)param_1 + 0x340) + lVar42 * 8) = plVar118;
            *(undefined1 (*) [8])(*(longlong *)(*plVar118 + 200) + (longlong)(int)plVar118[1] * 8) =
                 param_1;
            local_2f8._8_8_ = local_3d8;
            local_2f8._0_8_ = &local_378;
            ppdVar67 = (double **)local_2f8;
            local_378 = plVar118;
            FUN_140b47de6((longlong)param_1 + 0x350,local_508);
            *(undefined8 *)(*(longlong *)(*plVar118 + 0xb0) + (longlong)(int)plVar118[1] * 8) =
                 *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x440) + lVar42 * 8);
            FUN_14172fb54(*(undefined8 *)((longlong)auVar70 + 0x9c8),plVar118);
            lVar54 = local_658;
          }
        }
        lVar42 = lVar42 + 1;
      } while (lVar42 < *(int *)((longlong)param_1 + 0x304));
    }
    puVar44 = local_5f8;
    if ((double *)local_1f8._0_8_ != (double *)0x0) {
      FUN_1400020a8();
    }
    lVar42 = local_5d0;
    lVar54 = local_5d8;
    if (local_178 != (double *)0x0) {
      FUN_1400020a8();
    }
    puVar57 = local_650;
    FUN_140757a08(local_508);
    local_518 = 0;
    uStack_510 = 0;
    local_528 = 0;
    uStack_520 = 0;
    local_538 = 0;
    uStack_530 = 0;
    if (0 < *(int *)((longlong)param_1 + 0x300)) {
      lVar43 = 8;
      lVar55 = 0;
      auVar82 = _DAT_1499319a0;
      do {
        uVar80 = SUB84(ppdVar67,0);
        iVar66 = (int)puVar57;
        dVar136 = *(double *)((longlong)param_1 + 0xf0);
        dVar161 = *(double *)((longlong)param_1 + 0xe0);
        dVar130 = *(double *)((longlong)param_1 + 0xe8);
        fVar129 = *(float *)((longlong)param_1 + 0x1bc);
        fVar79 = *(float *)(*(longlong *)(lVar42 + 0x10) + lVar55 * 4);
        lVar63 = *(longlong *)(lVar54 + 0x10);
        fVar147 = *(float *)(lVar63 + -8 + lVar43);
        fVar125 = *(float *)(lVar63 + -4 + lVar43);
        fVar98 = *(float *)(lVar63 + lVar43);
        fVar146 = (fVar147 + fVar125 + fVar98) * 0.5;
        iVar40 = (int)uStack_510;
        lVar63 = (longlong)(int)uStack_510;
        uVar73 = (int)uStack_510 + 1;
        uStack_510 = CONCAT44(uStack_510._4_4_,uVar73);
        if (uStack_510._4_4_ < uVar73) {
          iVar66 = iVar40;
          FUN_14475e4ac(&local_518);
        }
        uVar59 = auVar82._0_4_;
        *(uint *)(local_518 + lVar63 * 4) =
             (uint)((float)(dVar161 * dVar130 * dVar136) * fVar129 * fVar79) & uVar59;
        iVar40 = (int)uStack_520;
        lVar63 = (longlong)(int)uStack_520;
        uVar73 = (int)uStack_520 + 1;
        uStack_520 = CONCAT44(uStack_520._4_4_,uVar73);
        if (uStack_520._4_4_ < uVar73) {
          iVar66 = iVar40;
          FUN_140aacb36(&local_528);
        }
        fVar108 = (float)((uint)(float)dVar136 & uVar59);
        fVar117 = (float)((uint)(float)dVar130 & uVar59);
        fVar79 = (float)((uint)(float)dVar161 & uVar59);
        fVar98 = (fVar146 - fVar98) * fVar108 * fVar108;
        fVar125 = (fVar146 - fVar125) * fVar117 * fVar117;
        fVar147 = (fVar146 - fVar147) * fVar79 * fVar79;
        fVar108 = fVar79 * fVar117 * fVar108;
        *(float *)(local_528 + lVar63 * 0xc) = (fVar125 + fVar98) * fVar108 * fVar129;
        *(float *)(local_528 + 4 + lVar63 * 0xc) = (fVar98 + fVar147) * fVar108 * fVar129;
        *(float *)(local_528 + 8 + lVar63 * 0xc) = fVar108 * (fVar147 + fVar125) * fVar129;
        lVar63 = *(longlong *)(puVar44 + 4);
        auVar82 = *(undefined1 (*) [16])(local_498 + lVar43);
        dVar136 = auVar82._0_8_;
        dVar130 = auVar82._8_8_;
        auVar132 = *(undefined1 (*) [16])(local_498 + lVar43 + 2);
        dVar161 = auVar132._0_8_;
        auVar138 = *(undefined1 (*) [16])(lVar63 + lVar43 * 8);
        auVar105 = *(undefined1 (*) [16])(lVar63 + 0x10 + lVar43 * 8);
        auVar82 = minpd(auVar138,auVar82);
        auVar101 = minpd(auVar105,auVar132);
        auVar83._8_8_ = -(ulonglong)(auVar82._8_8_ < 0.0);
        auVar83._0_8_ = -(ulonglong)(auVar82._0_8_ < 0.0);
        uVar73 = movmskpd(iVar66,auVar83);
        puVar57 = (undefined1 *)(ulonglong)uVar73;
        auVar82._8_8_ = -(ulonglong)(auVar101._8_8_ < 0.0);
        auVar82._0_8_ = -(ulonglong)(auVar101._0_8_ < 0.0);
        uVar59 = movmskpd(uVar80,auVar82);
        if ((uVar59 & 0x3fffffff) == 0 && uVar73 == 0) {
          pdVar48 = (double *)(lVar63 + -0x40 + lVar43 * 8);
          dVar81 = *pdVar48;
          dVar97 = pdVar48[1];
          pdVar48 = (double *)(lVar63 + -0x30 + lVar43 * 8);
          dVar99 = *pdVar48;
          dVar100 = pdVar48[1];
          plVar21 = local_498[lVar43 + -8];
          plVar22 = (local_498 + lVar43 + -8)[1];
          plVar23 = local_498[lVar43 + -6];
          plVar24 = (local_498 + lVar43 + -6)[1];
          plVar118 = local_498[lVar43 + -5];
          plVar12 = local_498[lVar43 + -5];
          plVar3 = local_498[lVar43 + -8];
          plVar4 = local_498[lVar43 + -8];
          plVar5 = local_498[lVar43 + -7];
          plVar6 = local_498[lVar43 + -7];
          plVar7 = local_498[lVar43 + -6];
          plVar8 = local_498[lVar43 + -6];
          dVar107 = dVar97 * (double)plVar7 * -1.0 +
                    dVar99 * (double)plVar5 +
                    dVar100 * (double)plVar3 * 1.0 + dVar81 * (double)plVar118;
          dVar135 = dVar81 * (double)plVar8 * 1.0 +
                    dVar100 * (double)plVar6 +
                    dVar99 * (double)plVar4 * -1.0 + dVar97 * (double)plVar12;
          auVar101._0_8_ =
               dVar100 * (double)plVar7 * 1.0 +
               (((double)plVar3 * dVar97 * 1.0 + dVar99 * (double)plVar118) -
               dVar81 * (double)plVar5);
          auVar101._8_8_ =
               dVar99 * (double)plVar8 * -1.0 +
               (((double)plVar4 * dVar81 * -1.0 + dVar100 * (double)plVar12) -
               dVar97 * (double)plVar6);
          pdVar48 = (double *)(lVar63 + -0x20 + lVar43 * 8);
          dVar116 = *pdVar48 * dVar136;
          dVar124 = pdVar48[1] * dVar130;
          pdVar48 = (double *)(lVar63 + -0x10 + lVar43 * 8);
          dVar109 = *pdVar48 * dVar161;
          dVar110 = pdVar48[1] * auVar132._8_8_;
          dVar99 = dVar124 * (double)plVar21 - (double)plVar22 * dVar116;
          dVar100 = dVar109 * (double)plVar22 - (double)plVar23 * dVar124;
          dVar81 = dVar116 * (double)plVar23 - (double)plVar21 * dVar109;
          dVar97 = dVar110 * (double)plVar24 - (double)plVar24 * dVar110;
          dVar100 = dVar100 + dVar100;
          dVar81 = dVar81 + dVar81;
          dVar99 = dVar99 + dVar99;
          dVar97 = dVar97 + dVar97;
          auVar70 = (undefined1  [8])(auVar138._0_8_ * dVar136);
          dVar130 = auVar138._8_8_ * dVar130;
          puVar51 = (undefined8 *)
                    ((dVar99 * (double)plVar22 - (double)plVar23 * dVar81) +
                     (double)plVar118 * dVar100 + dVar116 + (double)local_498[lVar43 + -4]);
          dVar136 = (dVar100 * (double)plVar23 - dVar99 * (double)plVar21) +
                    (double)plVar12 * dVar81 + dVar124 + (double)(local_498 + lVar43 + -4)[1];
          plVar118 = (longlong *)
                     ((dVar81 * (double)plVar21 - (double)plVar22 * dVar100) +
                      (double)plVar118 * dVar99 + dVar109 + (double)local_498[lVar43 + -2]);
          dVar81 = (dVar97 * (double)plVar24 - dVar97 * (double)plVar24) +
                   (double)plVar12 * dVar97 + dVar110 + (double)(local_498 + lVar43 + -2)[1];
          ppdVar67 = (double **)0x0;
          pplVar56 = local_498;
        }
        else {
          dVar81 = auVar138._8_8_ * dVar130;
          unique0x100017c4 = SUB84(dVar81,0);
          local_648 = (undefined1  [8])(auVar138._0_8_ * dVar136);
          unique0x100017c8 = (int)((ulonglong)dVar81 >> 0x20);
          plVar12 = local_498[lVar43 + -8];
          plVar3 = (local_498 + lVar43 + -8)[1];
          plVar4 = local_498[lVar43 + -6];
          dVar97 = (double)plVar3 + (double)plVar3;
          dVar99 = (double)plVar4 + (double)plVar4;
          dVar135 = (double)plVar12 * ((double)plVar12 + (double)plVar12);
          local_178 = (double *)
                      ((1.0 - ((double)plVar4 * dVar99 + (double)plVar3 * dVar97)) * dVar136);
          plVar118 = local_498[lVar43 + -5];
          dVar100 = dVar99 * (double)plVar118;
          dVar107 = ((double)plVar12 + (double)plVar12) * (double)local_498[lVar43 + -5];
          dVar81 = dVar97 * (double)plVar118;
          uStack_170 = (undefined1 *)((dVar97 * (double)plVar12 + dVar100) * dVar136);
          local_148 = (longlong *)((dVar99 * (double)plVar3 + dVar107) * dVar130);
          local_168._8_8_ = 0;
          local_168._0_8_ = ((double)local_498[lVar43 + -8] * dVar99 - dVar81) * dVar136;
          local_158._8_8_ = (1.0 - ((double)plVar4 * dVar99 + dVar135)) * dVar130;
          local_158._0_8_ = (dVar97 * (double)plVar12 - dVar100) * dVar130;
          dStack_140 = 0.0;
          local_138._8_8_ = (dVar99 * (double)plVar3 - dVar107) * dVar161;
          local_138._0_8_ = (dVar81 + (double)local_498[lVar43 + -8] * dVar99) * dVar161;
          local_128._8_8_ = 0;
          local_128._0_8_ = (1.0 - (dVar135 + (double)plVar3 * dVar97)) * dVar161;
          local_118 = local_498[lVar43 + -4];
          plStack_110 = (local_498 + lVar43 + -4)[1];
          local_108 = local_498[lVar43 + -2];
          uStack_100 = 0x3ff0000000000000;
          pdVar48 = (double *)(lVar63 + -0x40 + lVar43 * 8);
          dVar81 = *pdVar48;
          dVar97 = pdVar48[1];
          dVar99 = *(double *)(lVar63 + -0x30 + lVar43 * 8);
          pdVar48 = (double *)(lVar63 + lVar43 * 8);
          dVar100 = *pdVar48;
          dVar107 = pdVar48[1];
          dVar135 = *(double *)(lVar63 + 0x10 + lVar43 * 8);
          dVar124 = dVar97 + dVar97;
          dVar109 = dVar99 + dVar99;
          dVar136 = dVar81 * (dVar81 + dVar81);
          dVar130 = (1.0 - (dVar99 * dVar109 + dVar136)) * dVar107;
          local_1a8 = (1.0 - (dVar136 + dVar97 * dVar124)) * dVar135;
          dVar149 = *(double *)(lVar63 + -0x40 + lVar43 * 8) * dVar109;
          pdVar48 = (double *)(lVar63 + -0x28 + lVar43 * 8);
          dVar136 = *pdVar48;
          dVar110 = dVar109 * dVar136;
          dVar116 = (dVar81 + dVar81) * *pdVar48;
          dVar136 = dVar124 * dVar136;
          local_1e8 = (dVar149 - dVar136) * dVar100;
          local_1f8._8_8_ = (dVar124 * dVar81 + dVar110) * dVar100;
          local_1f8._0_8_ = (1.0 - (dVar99 * dVar109 + dVar97 * dVar124)) * dVar100;
          dStack_1e0 = 0.0;
          local_1d8._8_4_ = SUB84(dVar130,0);
          local_1d8._0_8_ = (dVar124 * dVar81 - dVar110) * dVar107;
          local_1d8._12_4_ = (int)((ulonglong)dVar130 >> 0x20);
          local_1c8._8_8_ = 0;
          local_1c8._0_8_ = (dVar109 * dVar97 + dVar116) * dVar107;
          local_1b8._8_8_ = (dVar109 * dVar97 - dVar116) * dVar135;
          local_1b8._0_8_ = (dVar136 + dVar149) * dVar135;
          uStack_1a0 = 0;
          pdVar48 = (double *)(lVar63 + -0x20 + lVar43 * 8);
          local_198 = (undefined8 *)*pdVar48;
          dStack_190 = pdVar48[1];
          local_188 = *(longlong **)(lVar63 + -0x10 + lVar43 * 8);
          uStack_180 = 0x3ff0000000000000;
          ppdVar67 = &local_178;
          FUN_1447fea8d(local_2f8,local_1f8);
          local_628 = (undefined1  [8])local_2e8._0_8_;
          dVar130 = (double)local_2e8._0_8_ * (double)local_2e8._0_8_ +
                    (double)local_2f8._0_8_ * (double)local_2f8._0_8_ +
                    (double)local_2f8._8_8_ * (double)local_2f8._8_8_;
          local_668 = (undefined1  [8])local_2d8;
          dVar81 = (double)local_2c8 * (double)local_2c8 +
                   (double)local_2d8 * (double)local_2d8 + dStack_2d0 * dStack_2d0;
          dVar136 = (double)local_2a8._0_8_ * (double)local_2a8._0_8_ +
                    (double)local_2b8._0_8_ * (double)local_2b8._0_8_ +
                    (double)local_2b8._8_8_ * (double)local_2b8._8_8_;
          uVar78 = -(ulonglong)(0.0 <= dVar130 + -9.99999993922529e-09);
          dVar97 = (double)(~uVar78 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar130)) & uVar78
                           );
          uVar78 = -(ulonglong)(0.0 <= dVar81 + -9.99999993922529e-09);
          dVar81 = (double)(~uVar78 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar81)) & uVar78)
          ;
          uVar78 = -(ulonglong)(0.0 <= dVar136 + -9.99999993922529e-09);
          auVar70 = local_648;
          dVar130 = dStack_640;
          dVar136 = (double)(~uVar78 & 0x3ff0000000000000 |
                            (ulonglong)(1.0 / SQRT(dVar136)) & uVar78);
          auVar138._8_8_ = -(ulonglong)(0.0 <= dStack_640);
          auVar138._0_8_ = -(ulonglong)(0.0 <= (double)local_648);
          auVar82 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar138);
          uVar78 = -(ulonglong)(0.0 <= auVar105._0_8_ * dVar161);
          dVar99 = (double)(~uVar78 & 0xbff0000000000000 | uVar78 & 0x3ff0000000000000);
          dVar100 = auVar82._0_8_;
          local_2f8._8_8_ = (double)local_2f8._8_8_ * dVar97 * dVar100;
          local_2f8._0_8_ = (double)local_2f8._0_8_ * dVar97 * dVar100;
          local_2e8._0_8_ = dVar97 * (double)local_2e8._0_8_ * dVar100;
          dVar97 = auVar82._8_8_;
          local_2c8 = (longlong *)(dVar81 * (double)local_2c8 * dVar97);
          dStack_2d0 = dStack_2d0 * dVar81 * dVar97;
          local_2d8 = (undefined8 *)(dVar97 * (double)local_2d8 * dVar81);
          local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar136 * dVar99;
          local_2b8._0_8_ = dVar99 * (double)local_2b8._0_8_ * dVar136;
          local_2a8._0_8_ = dVar136 * (double)local_2a8._0_8_ * dVar99;
          pplVar56 = &local_378;
          puVar57 = local_2f8;
          lVar63 = FUN_14481fd10();
          dVar136 = local_368 * local_368 + (double)local_378 * (double)local_378;
          dVar81 = dStack_360 * dStack_360 + dStack_370 * dStack_370;
          auVar119._0_8_ = dVar136 + dVar81;
          auVar119._8_8_ = dVar136 + dVar81;
          auVar84._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar119._8_8_);
          auVar84._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar119._0_8_);
          auVar82 = sqrtpd(auVar119,auVar119);
          auVar82 = divpd(_DAT_149934d80,auVar82);
          auVar126._0_8_ = auVar82._0_8_ * local_368;
          auVar126._8_8_ = auVar82._8_8_ * dStack_360;
          dVar107 = (double)((ulonglong)((double)local_378 * auVar82._0_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar119._0_8_));
          dVar135 = (double)((ulonglong)(dStack_370 * auVar82._8_8_) &
                            -(ulonglong)(9.99999993922529e-09 <= auVar119._8_8_));
          auVar101 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar126,auVar84);
          dVar81 = 0.0;
          plVar118 = local_288;
          puVar51 = local_298;
          dVar136 = dStack_290;
        }
        dVar110 = auVar105._8_8_ * auVar132._8_8_;
        dVar161 = auVar105._0_8_ * dVar161;
        auVar82 = *(undefined1 (*) [16])((longlong)param_1 + 0xe0);
        dVar97 = auVar82._0_8_;
        dVar100 = auVar82._8_8_;
        auVar132 = *(undefined1 (*) [16])((longlong)param_1 + 0xf0);
        dVar99 = auVar132._0_8_;
        dVar109 = auVar132._8_8_;
        auVar105._8_8_ = dVar130;
        auVar105._0_8_ = auVar70;
        auVar82 = minpd(auVar105,auVar82);
        auVar137._8_8_ = dVar110;
        auVar137._0_8_ = dVar161;
        auVar138 = minpd(auVar137,auVar132);
        auVar132._8_8_ = -(ulonglong)(auVar82._8_8_ < 0.0);
        auVar132._0_8_ = -(ulonglong)(auVar82._0_8_ < 0.0);
        iVar40 = movmskpd((int)lVar63,auVar132);
        auVar139._8_8_ = -(ulonglong)(auVar138._8_8_ < 0.0);
        auVar139._0_8_ = -(ulonglong)(auVar138._0_8_ < 0.0);
        uVar73 = movmskpd((int)pplVar56,auVar139);
        dVar116 = auVar101._0_8_;
        dVar124 = auVar101._8_8_;
        if ((uVar73 & 0x3fffffff) == 0 && iVar40 == 0) {
          dVar13 = *(double *)((longlong)param_1 + 0xa0);
          dVar14 = *(double *)((longlong)param_1 + 0xa8);
          unique0x10001998 = SUB84(dVar130,0);
          local_648 = auVar70;
          unique0x1000199c = (int)((ulonglong)dVar130 >> 0x20);
          dVar15 = *(double *)((longlong)param_1 + 0xb0);
          dVar16 = *(double *)((longlong)param_1 + 0xb8);
          dVar130 = *(double *)((longlong)param_1 + 0xb8);
          dVar149 = *(double *)((longlong)param_1 + 0xb8);
          dVar153 = *(double *)((longlong)param_1 + 0xa0);
          dVar131 = *(double *)((longlong)param_1 + 0xa0);
          unique0x10002914 = SUB84(dVar110,0);
          local_628 = (undefined1  [8])dVar161;
          unique0x10002918 = (int)((ulonglong)dVar110 >> 0x20);
          dVar168 = (double)DAT_149931170;
          dVar162 = DAT_149931170._8_8_;
          dVar154 = *(double *)((longlong)param_1 + 0xa8);
          dVar110 = *(double *)((longlong)param_1 + 0xa8);
          dVar160 = *(double *)((longlong)param_1 + 0xb0);
          dVar155 = *(double *)((longlong)param_1 + 0xb0);
          auVar150._0_8_ =
               dVar135 * dVar160 * -1.0 +
               dVar116 * dVar154 + dVar124 * dVar153 * dVar168 + dVar107 * dVar130;
          auVar150._8_8_ =
               dVar107 * dVar155 * 1.0 +
               dVar124 * dVar110 + dVar116 * dVar131 * dVar162 + dVar135 * dVar149;
          auVar171._0_8_ =
               dVar124 * dVar160 * dVar168 +
               ((dVar153 * dVar135 * dVar168 + dVar116 * dVar130) - dVar107 * dVar154);
          auVar171._8_8_ =
               dVar116 * dVar155 * dVar162 +
               ((dVar131 * dVar107 * dVar162 + dVar124 * dVar149) - dVar135 * dVar110);
          dVar107 = (double)puVar51 * dVar97;
          dVar136 = dVar136 * dVar100;
          dVar135 = (double)plVar118 * dVar99;
          dVar81 = dVar81 * dVar109;
          dVar110 = dVar136 * dVar13 - dVar107 * dVar14;
          dVar124 = dVar135 * dVar14 - dVar136 * dVar15;
          dVar131 = dVar107 * dVar15 - dVar135 * dVar13;
          dVar116 = dVar81 * dVar16 - dVar81 * dVar16;
          dVar124 = dVar124 + dVar124;
          dVar131 = dVar131 + dVar131;
          dVar110 = dVar110 + dVar110;
          dVar116 = dVar116 + dVar116;
          auVar70 = (undefined1  [8])((double)auVar70 * dVar97);
          dVar100 = dStack_640 * dVar100;
          auVar19 = (undefined1  [8])(dVar161 * dVar99);
          dVar109 = dStack_620 * dVar109;
          auVar140._0_8_ =
               (dVar110 * dVar14 - dVar15 * dVar131) + dVar130 * dVar124 + dVar107 +
               *(double *)((longlong)param_1 + 0xc0);
          auVar140._8_8_ =
               (dVar124 * dVar15 - dVar110 * dVar13) + dVar149 * dVar131 + dVar136 +
               *(double *)((longlong)param_1 + 200);
          auVar164._0_8_ =
               (dVar131 * dVar13 - dVar14 * dVar124) + dVar130 * dVar110 + dVar135 +
               *(double *)((longlong)param_1 + 0xd0);
          auVar164._8_8_ =
               (dVar116 * dVar16 - dVar116 * dVar16) + dVar149 * dVar116 + dVar81 +
               *(double *)((longlong)param_1 + 0xd8);
        }
        else {
          dStack_640 = dVar110 * dVar109;
          local_648 = (undefined1  [8])(dVar161 * dVar99);
          dVar109 = *(double *)((longlong)param_1 + 0xa0);
          dVar110 = *(double *)((longlong)param_1 + 0xa8);
          dVar149 = *(double *)((longlong)param_1 + 0xb0);
          dVar153 = dVar110 + dVar110;
          dVar154 = dVar149 + dVar149;
          dVar168 = dVar109 * (dVar109 + dVar109);
          dVar131 = *(double *)((longlong)param_1 + 0xa0) * dVar154;
          dVar81 = *(double *)((longlong)param_1 + 0xb8);
          dVar155 = dVar154 * dVar81;
          dVar160 = (dVar109 + dVar109) * *(double *)((longlong)param_1 + 0xb8);
          dVar81 = dVar153 * dVar81;
          dStack_620 = dVar130 * dVar100;
          local_628 = (undefined1  [8])((double)auVar70 * dVar97);
          local_178 = (double *)((1.0 - (dVar149 * dVar154 + dVar110 * dVar153)) * dVar97);
          uStack_170 = (undefined1 *)((dVar153 * dVar109 + dVar155) * dVar97);
          local_148 = (longlong *)((dVar154 * dVar110 + dVar160) * dVar100);
          local_168._8_8_ = 0;
          local_168._0_8_ = (dVar131 - dVar81) * dVar97;
          local_158._8_8_ = (1.0 - (dVar149 * dVar154 + dVar168)) * dVar100;
          local_158._0_8_ = (dVar153 * dVar109 - dVar155) * dVar100;
          dStack_140 = 0.0;
          local_138._8_8_ = (dVar154 * dVar110 - dVar160) * dVar99;
          local_138._0_8_ = (dVar81 + dVar131) * dVar99;
          local_128._8_8_ = 0;
          local_128._0_8_ = (1.0 - (dVar168 + dVar110 * dVar153)) * dVar99;
          local_118 = *(longlong **)((longlong)param_1 + 0xc0);
          plStack_110 = *(longlong **)((longlong)param_1 + 200);
          local_108 = *(longlong **)((longlong)param_1 + 0xd0);
          uStack_100 = 0x3ff0000000000000;
          dVar97 = dVar135 + dVar135;
          dVar99 = dVar116 + dVar116;
          dVar81 = dVar107 * (dVar107 + dVar107);
          local_1a8 = (1.0 - (dVar81 + dVar135 * dVar97)) * dVar161;
          dVar100 = (dVar107 + dVar107) * dVar124;
          dVar81 = (1.0 - (dVar116 * dVar99 + dVar81)) * dVar130;
          local_1e8 = (dVar107 * dVar99 - dVar97 * dVar124) * (double)auVar70;
          local_1f8._8_8_ = (dVar97 * dVar107 + dVar99 * dVar124) * (double)auVar70;
          local_1f8._0_8_ = (1.0 - (dVar116 * dVar99 + dVar135 * dVar97)) * (double)auVar70;
          dStack_1e0 = 0.0;
          local_1d8._8_4_ = SUB84(dVar81,0);
          local_1d8._0_8_ = (dVar97 * dVar107 - dVar99 * dVar124) * dVar130;
          local_1d8._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
          local_1c8._8_8_ = 0;
          local_1c8._0_8_ = (dVar99 * dVar135 + dVar100) * dVar130;
          local_1b8._8_8_ = (dVar99 * dVar135 - dVar100) * dVar161;
          local_1b8._0_8_ = (dVar97 * dVar124 + dVar107 * dVar99) * dVar161;
          uStack_1a0 = 0;
          uStack_180 = 0x3ff0000000000000;
          ppdVar67 = &local_178;
          local_198 = puVar51;
          dStack_190 = dVar136;
          local_188 = plVar118;
          FUN_1447fea8d(local_2f8,local_1f8);
          auVar82 = _DAT_149934d80;
          local_668 = (undefined1  [8])local_2e8._0_8_;
          dVar136 = (double)local_2e8._0_8_ * (double)local_2e8._0_8_ +
                    (double)local_2f8._0_8_ * (double)local_2f8._0_8_ +
                    (double)local_2f8._8_8_ * (double)local_2f8._8_8_;
          dVar161 = (double)local_2c8 * (double)local_2c8 +
                    (double)local_2d8 * (double)local_2d8 + dStack_2d0 * dStack_2d0;
          dVar81 = (double)local_2a8._0_8_ * (double)local_2a8._0_8_ +
                   (double)local_2b8._0_8_ * (double)local_2b8._0_8_ +
                   (double)local_2b8._8_8_ * (double)local_2b8._8_8_;
          uVar78 = -(ulonglong)(0.0 <= dVar136 + -9.99999993922529e-09);
          dVar130 = (double)(~uVar78 & 0x3ff0000000000000 |
                            (ulonglong)(1.0 / SQRT(dVar136)) & uVar78);
          uVar78 = -(ulonglong)(0.0 <= dVar161 + -9.99999993922529e-09);
          dVar136 = (double)(~uVar78 & 0x3ff0000000000000 |
                            (ulonglong)(1.0 / SQRT(dVar161)) & uVar78);
          uVar78 = -(ulonglong)(0.0 <= dVar81 + -9.99999993922529e-09);
          dVar161 = (double)(~uVar78 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar81)) & uVar78
                            );
          auVar19 = local_648;
          dVar109 = dStack_640;
          auVar70 = local_628;
          dVar100 = dStack_620;
          auVar85._8_8_ = -(ulonglong)(0.0 <= dStack_620);
          auVar85._0_8_ = -(ulonglong)(0.0 <= (double)local_628);
          auVar132 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar85);
          dVar81 = (double)(~-(ulonglong)(0.0 <= (double)local_648) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= (double)local_648) & 0x3ff0000000000000);
          dVar97 = auVar132._0_8_;
          local_2f8._8_8_ = (double)local_2f8._8_8_ * dVar130 * dVar97;
          local_2f8._0_8_ = (double)local_2f8._0_8_ * dVar130 * dVar97;
          local_2e8._0_8_ = dVar130 * (double)local_2e8._0_8_ * dVar97;
          dVar130 = auVar132._8_8_;
          local_2c8 = (longlong *)(dVar136 * (double)local_2c8 * dVar130);
          dStack_2d0 = dStack_2d0 * dVar136 * dVar130;
          local_2d8 = (undefined8 *)(dVar130 * (double)local_2d8 * dVar136);
          local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar161 * dVar81;
          local_2b8._0_8_ = dVar81 * (double)local_2b8._0_8_ * dVar161;
          local_2a8._0_8_ = dVar161 * (double)local_2a8._0_8_ * dVar81;
          puVar57 = local_2f8;
          FUN_14481fd10(&local_378);
          dVar136 = local_368 * local_368 + (double)local_378 * (double)local_378;
          dVar161 = dStack_360 * dStack_360 + dStack_370 * dStack_370;
          auVar111._0_8_ = dVar136 + dVar161;
          auVar111._8_8_ = dVar136 + dVar161;
          auVar86._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar111._8_8_);
          auVar86._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar111._0_8_);
          auVar132 = sqrtpd(auVar111,auVar111);
          auVar82 = divpd(auVar82,auVar132);
          auVar120._0_8_ = auVar82._0_8_ * local_368;
          auVar120._8_8_ = auVar82._8_8_ * dStack_360;
          auVar150._0_8_ =
               (double)((ulonglong)((double)local_378 * auVar82._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar111._0_8_));
          auVar150._8_8_ =
               (double)((ulonglong)(dStack_370 * auVar82._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar111._8_8_));
          auVar171 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar120,auVar86);
          auVar140._8_8_ = dStack_290;
          auVar140._0_8_ = (double)local_298;
          auVar164._8_8_ = 0.0;
          auVar164._0_8_ = (double)local_288;
        }
        uVar78 = uStack_530;
        auVar82 = _DAT_1499319a0;
        lVar63 = (longlong)(int)uStack_530;
        uVar73 = (int)uStack_530 + 1;
        uStack_530 = CONCAT44(uStack_530._4_4_,uVar73);
        if (uStack_530._4_4_ < uVar73) {
          puVar57 = (undefined1 *)(uVar78 & 0xffffffff);
          FUN_144a2c682(&local_538);
        }
        lVar63 = lVar63 * 0x60;
        *(undefined1 (*) [16])(local_538 + lVar63) = auVar150;
        *(undefined1 (*) [16])(local_538 + 0x10 + lVar63) = auVar171;
        *(undefined1 (*) [16])(local_538 + 0x20 + lVar63) = auVar140;
        *(undefined1 (*) [16])(local_538 + 0x30 + lVar63) = auVar164;
        auVar20._8_4_ = SUB84(dVar100,0);
        auVar20._0_8_ = auVar70;
        auVar20._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
        *(undefined1 (*) [16])(local_538 + 0x40 + lVar63) = auVar20;
        auVar18._8_4_ = SUB84(dVar109,0);
        auVar18._0_8_ = auVar19;
        auVar18._12_4_ = (int)((ulonglong)dVar109 >> 0x20);
        *(undefined1 (*) [16])(local_538 + 0x50 + lVar63) = auVar18;
        lVar55 = lVar55 + 1;
        lVar43 = lVar43 + 0xc;
      } while (lVar55 < *(int *)((longlong)param_1 + 0x300));
    }
    local_2f8._8_8_ = local_508;
    local_2f8._0_8_ = param_1;
    local_2e8._8_8_ = lVar54;
    local_2e8._0_8_ = lVar42;
    local_2d8 = &local_488;
    dStack_2d0 = (double)local_618;
    local_2c8 = &local_538;
    puStack_2c0 = local_5f0;
    local_2b8._0_8_ = &local_480;
    local_698 = &local_178;
    local_178 = (double *)0x0;
    uStack_170 = (undefined1 *)((ulonglong)uStack_170 & 0xffffffff00000000);
    local_1f8._8_8_ = local_2f8;
    local_1f8._0_8_ = FUN_142a259fc;
    local_6a0 = (double **)CONCAT44(local_6a0._4_4_,1);
    FUN_1427ae281(L"ParallelFor Task",*(undefined4 *)((longlong)param_1 + 0x304),1);
    iVar40 = *(int *)((longlong)param_1 + 0x348);
    if ((longlong)iVar40 != 0) {
      lVar54 = *(longlong *)((longlong)param_1 + 0x340);
      lVar42 = 0;
      do {
        plVar118 = *(longlong **)(lVar54 + lVar42);
        if ((plVar118 != (longlong *)0x0) &&
           (*(char *)(*(longlong *)(*plVar118 + 0x2c0) + 0xd + (longlong)(int)plVar118[1] * 0x10) ==
            '\0')) {
          FUN_140a36458(*(undefined8 *)(local_480 + 0x9c8),plVar118);
          lVar43 = *(longlong *)(*(longlong *)(*plVar118 + 0x60) + (longlong)(int)plVar118[1] * 8);
          if ((lVar43 != 0) &&
             (((*(char *)(lVar43 + 0x1c) == '\x0f' || (*(char *)(lVar43 + 0x1c) == '\x05')) &&
              ((*(byte *)(lVar43 + 0x6c) & 1) == 0)))) {
            *(byte *)(lVar43 + 0x6c) = *(byte *)(lVar43 + 0x6c) | 1;
            FUN_1401183f6(lVar43);
            FUN_14011842e(lVar43);
          }
        }
        lVar42 = lVar42 + 8;
      } while ((longlong)iVar40 * 8 != lVar42);
    }
    lVar54 = *(longlong *)((longlong)param_1 + 0x160);
    if ((longlong)*(int *)((longlong)param_1 + 0x168) == 0) {
      uVar80 = 0;
    }
    else {
      lVar42 = (longlong)*(int *)((longlong)param_1 + 0x168) * 200 + lVar54;
      do {
        plVar118 = (longlong *)(lVar54 + 0x78);
        if (*(int *)(lVar54 + 0x80) != *(int *)(lVar54 + 0xac)) {
          lVar43 = lVar54 + 0xb0;
          if (*(longlong *)(lVar54 + 0xb8) != 0) {
            lVar43 = *(longlong *)(lVar54 + 0xb8);
          }
          iVar40 = *(int *)(lVar43 + (ulonglong)(~*(uint *)(lVar54 + 0xc0) & 1) * 4);
          if (iVar40 != -1) {
            do {
              if (*(int *)(*plVar118 + (longlong)iVar40 * 0x18) == 1) {
                FUN_146eee098(plVar118);
                break;
              }
              iVar40 = *(int *)(*plVar118 + (longlong)iVar40 * 0x18 + 0x10);
            } while (iVar40 != -1);
          }
        }
        local_178 = (double *)FUN_14001cc68(0x10,0x10);
        *local_178 = (double)&PTR_FUN_149f6da10;
        *(undefined4 *)(local_178 + 1) = 2;
        local_378 = (longlong *)CONCAT44(local_378._4_4_,1);
        local_2f8._8_8_ = &local_178;
        local_2f8._0_8_ = &local_378;
        FUN_146eee17a(plVar118,local_1f8,local_2f8);
        if (local_178 != (double *)0x0) {
          (**(code **)*local_178)(local_178,1);
        }
        plVar118 = (longlong *)(local_480 + 0xa40);
        iVar40 = *(int *)(local_480 + 0xa48);
        *(uint *)(local_480 + 0xa48) = iVar40 + 1U;
        if (*(uint *)(local_480 + 0xa4c) < iVar40 + 1U) {
          FUN_14172f9f2(plVar118,iVar40);
        }
        *(undefined1 (*) [8])(*plVar118 + (longlong)iVar40 * 8) = param_1;
        plVar118 = *(longlong **)((longlong)param_1 + 0x310);
        if (plVar118 == (longlong *)0x0) {
          plVar118 = (longlong *)FUN_14001cc68(0x110);
          memset(plVar118,0,0x110);
          *(longlong **)((longlong)param_1 + 0x310) = plVar118;
        }
        iVar40 = (int)plVar118[1];
        *(uint *)(plVar118 + 1) = iVar40 + 1U;
        if (*(uint *)((longlong)plVar118 + 0xc) < iVar40 + 1U) {
          FUN_14173150e(plVar118,iVar40);
        }
        FUN_1403c2a98((longlong)iVar40 * 200 + *plVar118,lVar54);
        lVar54 = lVar54 + 200;
      } while (lVar54 != lVar42);
      uVar80 = *(undefined4 *)((longlong)param_1 + 0x168);
      lVar54 = *(longlong *)((longlong)param_1 + 0x160);
    }
    FUN_1408bc7be(lVar54,uVar80);
    *(undefined4 *)((longlong)param_1 + 0x168) = 0;
    if (*(int *)((longlong)param_1 + 0x16c) != 0) {
      FUN_146eee2a6((longlong)param_1 + 0x160,0);
    }
    FUN_142a1c3fc(param_1,local_480,0);
    if (*(char *)((longlong)param_1 + 0x18d) == '\0') {
      FUN_1406768e0(local_2f8,local_650);
      iVar40 = *(int *)((longlong)param_1 + 0x304);
      if (0 < iVar40) {
        lVar54 = 0;
        do {
          plVar118 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x340) + lVar54 * 8);
          if ((plVar118 != (longlong *)0x0) &&
             (lVar42 = (longlong)*(int *)(*(longlong *)((longlong)param_1 + 0x400) + lVar54 * 4),
             *(char *)(*(longlong *)((longlong)param_1 + 0x730) + lVar42) == '\x04')) {
            lVar42 = lVar42 * 0xc;
            uVar80 = *(undefined4 *)(local_2c8[2] + 8 + lVar42);
            lVar55 = plVar118[1];
            lVar43 = *(longlong *)(*plVar118 + 0x278);
            *(undefined8 *)(lVar43 + (longlong)(int)lVar55 * 0xc) =
                 *(undefined8 *)(local_2c8[2] + lVar42);
            *(undefined4 *)(lVar43 + 8 + (longlong)(int)lVar55 * 0xc) = uVar80;
            uVar80 = *(undefined4 *)(*(longlong *)((longlong)dStack_290 + 0x10) + 8 + lVar42);
            lVar55 = plVar118[1];
            lVar43 = *(longlong *)(*plVar118 + 0x290);
            *(undefined8 *)(lVar43 + (longlong)(int)lVar55 * 0xc) =
                 *(undefined8 *)(*(longlong *)((longlong)dStack_290 + 0x10) + lVar42);
            *(undefined4 *)(lVar43 + 8 + (longlong)(int)lVar55 * 0xc) = uVar80;
            iVar40 = *(int *)((longlong)param_1 + 0x304);
          }
          lVar54 = lVar54 + 1;
        } while (lVar54 < iVar40);
      }
    }
    if ((*(byte *)((longlong)param_1 + 0x1c0) & 2) != 0) {
      FUN_1406bf0a6(&local_548,local_658);
      auVar82 = ZEXT816(0);
      local_558 = auVar82;
      FUN_1403ed7b2(local_558,local_540,1);
      lVar54 = local_658;
      local_578 = auVar82;
      local_568 = auVar82;
      if ((longlong)local_540 != 0) {
        local_628 = (undefined1  [8])(local_548 + local_540);
        local_668 = (undefined1  [8])((longlong)param_1 + 0x770);
        local_5d0 = (longlong)param_1 + 0x420;
        local_5d8 = (longlong)param_1 + 0x6a8;
        puVar44 = local_548;
        do {
          uVar73 = *puVar44;
          lVar43 = (longlong)(int)uVar73;
          lVar42 = *(longlong *)((longlong)param_1 + 0x780);
          if (*(longlong *)((longlong)param_1 + 0x780) == 0) {
            lVar42 = (longlong)param_1 + 0x770;
          }
          uVar59 = uVar73 + 0x1f;
          if (-1 < lVar43) {
            uVar59 = uVar73;
          }
          if (((*(uint *)(lVar42 + (longlong)((int)uVar59 >> 5) * 4) >> (uVar73 & 0x1f) & 1) == 0)
             || (*(int *)(*(longlong *)(local_658 + 0x1b0) + lVar43 * 4) == 2)) {
            lVar42 = *(longlong *)((longlong)param_1 + 0x688);
            if ((-1 < (int)uVar73 && lVar42 != 0) && ((int)uVar73 < *(int *)(lVar42 + 0x148))) {
              plVar118 = (longlong *)(*(longlong *)(lVar42 + 0x140) + lVar43 * 0x50);
              lVar42 = *(longlong *)(lVar42 + 0x140) + lVar43 * 0x50;
              puVar72 = (uint *)(lVar42 + 0x10);
              iVar40 = *(int *)(lVar42 + 0x28);
              local_648 = (undefined1  [8])plVar118;
              if (iVar40 == 0) {
                uVar78 = 1;
                iVar74 = 0;
                uVar64 = 0;
                iVar66 = 0;
              }
              else {
                puVar68 = (uint *)plVar118[4];
                if ((uint *)plVar118[4] == (uint *)0x0) {
                  puVar68 = puVar72;
                }
                uVar73 = *puVar68;
                if (uVar73 == 0) {
                  iVar66 = iVar40 + 0x1e;
                  if (-1 < iVar40 + -1) {
                    iVar66 = iVar40 + -1;
                  }
                  uVar64 = 0;
                  uVar78 = (ulonglong)(uint)(iVar66 >> 5);
                  if (iVar66 >> 5 < 1) {
                    uVar78 = uVar64;
                  }
                  iVar74 = 0;
                  do {
                    if (uVar78 == uVar64) goto LAB_142a177d6;
                    iVar74 = iVar74 + 0x20;
                    uVar73 = puVar68[uVar64 + 1];
                    uVar64 = uVar64 + 1;
                  } while (uVar73 == 0);
                }
                else {
                  iVar74 = 0;
                  uVar64 = 0;
                }
                uVar78 = (ulonglong)(-uVar73 & uVar73);
                uVar1 = uVar78 * 2 + 1;
                lVar42 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar42 == 0; lVar42 = lVar42 + -1) {
                  }
                }
                iVar66 = (iVar74 - ((uint)lVar42 ^ 0x3f)) + 0x3e;
                if (iVar40 <= iVar66) {
                  iVar66 = iVar40;
                }
              }
              if (iVar66 != iVar40) {
                lVar42 = *(longlong *)((longlong)param_1 + 0x6b8);
                if (*(longlong *)((longlong)param_1 + 0x6b8) == 0) {
                  lVar42 = local_5d8;
                }
                local_5f0 = (uint *)CONCAT44(local_5f0._4_4_,local_558._8_4_);
                local_5f8 = (uint *)local_558._0_8_;
                iVar76 = iVar40 + 0x1e;
                if (-1 < iVar40 + -1) {
                  iVar76 = iVar40 + -1;
                }
                iVar76 = iVar76 >> 5;
                uVar73 = 0xffffffff;
                do {
                  uVar59 = *(uint *)(*plVar118 + (longlong)iVar66 * 0xc);
                  uVar75 = uVar59 + 0x1f;
                  if (-1 < (longlong)(int)uVar59) {
                    uVar75 = uVar59;
                  }
                  if (((((*(uint *)(lVar42 + (longlong)((int)uVar75 >> 5) * 4) >> (uVar59 & 0x1f) &
                         1) != 0) && (-1 < (int)uVar59)) && ((int)uVar59 < (int)local_558._8_4_)) &&
                     (*(char *)(local_558._0_8_ + (longlong)(int)uVar59) == '\x01')) {
                    *(undefined1 *)(local_558._0_8_ + lVar43) = 1;
                    break;
                  }
                  uVar73 = uVar73 & ~(uint)uVar78;
                  puVar68 = (uint *)plVar118[4];
                  if ((uint *)plVar118[4] == (uint *)0x0) {
                    puVar68 = puVar72;
                  }
                  iVar66 = (int)uVar64;
                  lVar55 = (longlong)iVar66;
                  uVar59 = puVar68[lVar55] & uVar73;
                  if (uVar59 == 0) {
                    iVar60 = iVar76;
                    if (iVar76 < iVar66) {
                      iVar60 = iVar66;
                    }
                    if (iVar76 <= iVar66) break;
                    lVar63 = 0;
                    while( true ) {
                      iVar74 = iVar74 + 0x20;
                      uVar59 = puVar68[lVar55 + lVar63 + 1];
                      if (uVar59 != 0) break;
                      lVar63 = lVar63 + 1;
                      if (iVar60 - lVar55 == lVar63) goto LAB_142a177d6;
                    }
                    uVar64 = (ulonglong)(iVar66 + (int)lVar63 + 1);
                    uVar73 = 0xffffffff;
                  }
                  uVar78 = (ulonglong)(-uVar59 & uVar59);
                  uVar1 = uVar78 * 2 + 1;
                  lVar55 = 0x3f;
                  if (uVar1 != 0) {
                    for (; uVar1 >> lVar55 == 0; lVar55 = lVar55 + -1) {
                    }
                  }
                  iVar66 = (iVar74 - ((uint)lVar55 ^ 0x3f)) + 0x3e;
                } while (iVar66 < iVar40);
              }
            }
          }
          else {
            lVar42 = (longlong)*(int *)(*(longlong *)((longlong)param_1 + 0x410) + lVar43 * 4);
            if ((lVar42 == -1) ||
               (bVar71 = true,
               *(longlong *)(*(longlong *)((longlong)param_1 + 0x340) + lVar42 * 8) == 0)) {
              lVar42 = *(longlong *)((longlong)param_1 + 0x430);
              if (*(longlong *)((longlong)param_1 + 0x430) == 0) {
                lVar42 = local_5d0;
              }
              bVar71 = (*(uint *)(lVar42 + (longlong)((int)uVar59 >> 5) * 4) &
                       1 << ((byte)uVar73 & 0x1f)) == 0;
            }
            *(bool *)(local_558._0_8_ + lVar43) = bVar71;
          }
LAB_142a177d6:
          puVar44 = puVar44 + 1;
        } while (puVar44 != local_548 + local_540);
        local_568 = ZEXT816(0);
        local_578 = ZEXT816(0);
        if ((longlong)local_540 != 0) {
          puVar44 = local_548 + local_540;
          local_5b0 = (longlong)param_1 + 0x350;
          local_5b8 = (undefined8 *)((longlong)param_1 + 0x500);
          local_5c0 = (undefined1 (*) [16])((longlong)param_1 + 0x4f0);
          local_5c8 = (longlong)param_1 + 0x68;
          puVar72 = local_548;
          local_5f8 = puVar44;
          do {
            local_57c = *puVar72;
            if (*(char *)(local_558._0_8_ + (longlong)(int)local_57c) == '\x01') {
              lVar42 = *(longlong *)((longlong)param_1 + 0x430);
              if (*(longlong *)((longlong)param_1 + 0x430) == 0) {
                lVar42 = local_5d0;
              }
              uVar73 = local_57c + 0x1f;
              if (-1 < (int)local_57c) {
                uVar73 = local_57c;
              }
              if ((*(uint *)(lVar42 + (longlong)((int)uVar73 >> 5) * 4) >> (local_57c & 0x1f) & 1)
                  != 0) {
                iVar40 = *(int *)((longlong)param_1 + 0x300);
                if (iVar40 < 0) {
LAB_142a1c119:
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar40);
                }
                local_568._8_4_ = 0;
                if ((int)local_568._12_4_ < iVar40) {
                  FUN_14043d0a6(local_568);
                  iVar40 = *(int *)((longlong)param_1 + 0x300);
                  if (iVar40 < 0) goto LAB_142a1c119;
                }
                local_578._8_4_ = 0;
                if ((int)local_578._12_4_ < iVar40) {
                  FUN_14481578e(local_578);
                }
                cVar39 = FUN_1448c2a90(local_650);
                auVar82 = _local_668;
                if (cVar39 != '\0') {
                  *(undefined4 *)(local_518 + (longlong)(int)local_57c * 4) = 0;
                  *(undefined8 *)(local_528 + (longlong)(int)local_57c * 0xc) = 0;
                  *(undefined4 *)(local_528 + 8 + (longlong)(int)local_57c * 0xc) = 0;
                }
                lVar42 = *(longlong *)((longlong)param_1 + 0x688);
                lVar54 = local_658;
                if ((-1 < (int)local_57c && lVar42 != 0) &&
                   ((int)local_57c < *(int *)(lVar42 + 0x148))) {
                  plVar118 = (longlong *)
                             (*(longlong *)(lVar42 + 0x140) + (ulonglong)local_57c * 0x50);
                  lVar42 = *(longlong *)(lVar42 + 0x140) + (ulonglong)local_57c * 0x50;
                  puVar68 = (uint *)(lVar42 + 0x10);
                  uVar73 = *(uint *)(lVar42 + 0x28);
                  local_668._4_4_ = 0;
                  local_668._0_4_ = uVar73;
                  local_628 = (undefined1  [8])puVar68;
                  if (uVar73 == 0) {
                    uVar64 = 1;
                    uVar78 = 0;
                    auVar29._12_4_ = 0;
                    auVar29._0_12_ = stack0xfffffffffffff9bc;
                    _local_648 = auVar29 << 0x20;
                    uVar59 = 0;
                  }
                  else {
                    puVar47 = (uint *)plVar118[4];
                    if ((uint *)plVar118[4] == (uint *)0x0) {
                      puVar47 = puVar68;
                    }
                    uVar59 = *puVar47;
                    if (uVar59 == 0) {
                      iVar40 = uVar73 + 0x1e;
                      if (-1 < (int)(uVar73 - 1)) {
                        iVar40 = uVar73 - 1;
                      }
                      uVar78 = 0;
                      uVar64 = (ulonglong)(uint)(iVar40 >> 5);
                      if (iVar40 >> 5 < 1) {
                        uVar64 = uVar78;
                      }
                      auVar28._12_4_ = 0;
                      auVar28._0_12_ = stack0xfffffffffffff9bc;
                      _local_648 = auVar28 << 0x20;
                      do {
                        if (uVar64 == uVar78) goto LAB_142a17d53;
                        local_648._0_4_ = local_648._0_4_ + 0x20;
                        uVar59 = puVar47[uVar78 + 1];
                        uVar78 = uVar78 + 1;
                      } while (uVar59 == 0);
                    }
                    else {
                      uVar78 = 0;
                      auVar34._12_4_ = 0;
                      auVar34._0_12_ = stack0xfffffffffffff9bc;
                      _local_648 = auVar34 << 0x20;
                    }
                    uVar64 = (ulonglong)(-uVar59 & uVar59);
                    uVar1 = uVar64 * 2 + 1;
                    lVar42 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar42 == 0; lVar42 = lVar42 + -1) {
                      }
                    }
                    uVar59 = (local_648._0_4_ - ((uint)lVar42 ^ 0x3f)) + 0x3e;
                    if ((int)uVar73 <= (int)uVar59) {
                      uVar59 = uVar73;
                    }
                  }
                  if (uVar59 != uVar73) {
                    uVar75 = 0xffffffff;
                    auVar141 = ZEXT816(0);
                    auVar156 = ZEXT816(0);
                    auVar165 = ZEXT816(0);
                    dStack_660 = auVar82._8_8_;
                    local_5f0 = puVar72;
                    do {
                      uVar59 = *(uint *)(*plVar118 + (longlong)(int)uVar59 * 0xc);
                      lVar43 = (longlong)(int)uVar59;
                      lVar42 = *(longlong *)((longlong)param_1 + 0x6b8);
                      if (*(longlong *)((longlong)param_1 + 0x6b8) == 0) {
                        lVar42 = local_5d8;
                      }
                      uVar41 = uVar59 + 0x1f;
                      if (-1 < lVar43) {
                        uVar41 = uVar59;
                      }
                      if ((*(uint *)(lVar42 + (longlong)((int)uVar41 >> 5) * 4) >> (uVar59 & 0x1f) &
                          1) != 0) {
                        *(float *)(local_518 + (longlong)(int)local_57c * 4) =
                             *(float *)(local_518 + lVar43 * 4) +
                             *(float *)(local_518 + (longlong)(int)local_57c * 4);
                        local_1e8 = (double)*(float *)(local_528 + 8 + lVar43 * 0xc);
                        local_1f8._8_8_ = (double)*(float *)(local_528 + 4 + lVar43 * 0xc);
                        local_1f8._0_8_ = (double)*(float *)(local_528 + lVar43 * 0xc);
                        puVar51 = (undefined8 *)(local_538 + lVar43 * 0x60);
                        local_178 = (double *)*puVar51;
                        uStack_170 = (undefined1 *)puVar51[1];
                        local_168 = *(undefined1 (*) [16])(local_538 + 0x10 + lVar43 * 0x60);
                        FUN_1409353c1(local_2f8,&local_178,local_1f8);
                        auVar141._0_8_ = auVar141._0_8_ + (double)local_2f8._0_8_;
                        auVar165._0_8_ = auVar165._0_8_ + dStack_2d0;
                        auVar156._0_8_ = auVar156._0_8_ + (double)local_2a8._0_8_;
                        lVar54 = (longlong)(int)local_57c;
                        *(float *)(local_528 + lVar54 * 0xc) = (float)auVar141._0_8_;
                        *(float *)(local_528 + 4 + lVar54 * 0xc) = (float)auVar165._0_8_;
                        *(float *)(local_528 + 8 + lVar54 * 0xc) = (float)auVar156._0_8_;
                        lVar54 = *(longlong *)((longlong)param_1 + 0x430);
                        if (*(longlong *)((longlong)param_1 + 0x430) == 0) {
                          lVar54 = local_5d0;
                        }
                        if (((*(uint *)(lVar54 + (longlong)((int)uVar41 >> 5) * 4) &
                             1 << ((byte)uVar59 & 0x1f)) != 0) &&
                           (lVar54 = *(longlong *)
                                      (*(longlong *)((longlong)param_1 + 0x340) +
                                      (longlong)
                                      *(int *)(*(longlong *)((longlong)param_1 + 0x410) + lVar43 * 4
                                              ) * 8), lVar54 != 0)) {
                          uVar80 = local_568._8_4_;
                          lVar42 = (longlong)(int)local_568._8_4_;
                          uVar73 = local_568._8_4_ + 1;
                          local_568._8_4_ = uVar73;
                          if ((uint)local_568._12_4_ < uVar73) {
                            FUN_1406b7a4a(local_568,uVar80);
                          }
                          *(longlong *)(local_568._0_8_ + lVar42 * 8) = lVar54;
                          uVar80 = local_578._8_4_;
                          lVar54 = (longlong)(int)local_578._8_4_;
                          uVar73 = local_578._8_4_ + 1;
                          local_578._8_4_ = uVar73;
                          if ((uint)local_578._12_4_ < uVar73) {
                            FUN_1446f48e2(local_578,uVar80);
                          }
                          *(uint *)(local_578._0_8_ + lVar54 * 4) = uVar59;
                        }
                        uVar73 = *(uint *)(plVar118 + 5);
                        lVar54 = local_658;
                      }
                      uVar75 = uVar75 & ~(uint)uVar64;
                      auVar70 = (undefined1  [8])plVar118[4];
                      if (plVar118[4] == 0) {
                        auVar70 = local_628;
                      }
                      iVar40 = (int)uVar78;
                      lVar42 = (longlong)iVar40;
                      uVar59 = *(uint *)((longlong)auVar70 + lVar42 * 4) & uVar75;
                      if (uVar59 == 0) {
                        iVar66 = uVar73 + 0x1e;
                        if (-1 < (int)(uVar73 - 1)) {
                          iVar66 = uVar73 - 1;
                        }
                        iVar66 = iVar66 >> 5;
                        local_648._0_4_ = local_648._0_4_ + 0x20;
                        iVar74 = iVar66;
                        if (iVar66 < iVar40) {
                          iVar74 = iVar40;
                        }
                        if (iVar40 < iVar66) {
                          lVar43 = 0;
                          do {
                            uVar59 = *(uint *)((longlong)auVar70 + lVar42 * 4 + 4 + lVar43 * 4);
                            if (uVar59 != 0) {
                              uVar78 = (ulonglong)(iVar40 + (int)lVar43 + 1);
                              uVar75 = 0xffffffff;
                              goto LAB_142a17ce1;
                            }
                            local_648._0_4_ = local_648._0_4_ + 0x20;
                            lVar43 = lVar43 + 1;
                          } while (iVar74 - lVar42 != lVar43);
                          uVar75 = 0xffffffff;
                          iVar40 = iVar74;
                        }
                        uVar78 = (ulonglong)(iVar40 + 1);
                        lVar54 = local_658;
                        uVar59 = uVar73;
                      }
                      else {
LAB_142a17ce1:
                        uVar64 = (ulonglong)(-uVar59 & uVar59);
                        uVar1 = uVar64 * 2 + 1;
                        lVar42 = 0x3f;
                        if (uVar1 != 0) {
                          for (; uVar1 >> lVar42 == 0; lVar42 = lVar42 + -1) {
                          }
                        }
                        uVar59 = (local_648._0_4_ - ((uint)lVar42 ^ 0x3f)) + 0x3e;
                        if ((int)uVar73 <= (int)uVar59) {
                          uVar59 = uVar73;
                        }
                      }
                      puVar44 = local_5f8;
                      puVar72 = local_5f0;
                      auVar82 = _local_668;
                    } while (uVar59 != local_668._0_4_);
                  }
                }
LAB_142a17d53:
                _local_668 = auVar82;
                lVar42 = local_480;
                uVar73 = local_57c;
                lVar55 = (longlong)(int)local_57c;
                lVar43 = (longlong)*(int *)(*(longlong *)((longlong)param_1 + 0x410) + lVar55 * 4);
                if ((lVar43 != -1) &&
                   (*(longlong *)(*(longlong *)((longlong)param_1 + 0x340) + lVar43 * 8) == 0)) {
                  local_208 = 0;
                  uStack_204 = 0;
                  uStack_200 = 0;
                  uStack_1fc = 0;
                  lVar54 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x440) + lVar43 * 8);
                  if (lVar54 == 0) {
                    puVar46 = (undefined4 *)(lVar43 * 4 + *(longlong *)((longlong)param_1 + 0x3f0));
                  }
                  else {
                    puVar46 = (undefined4 *)(lVar54 + 0x58);
                  }
                  local_628 = (undefined1  [8])lVar54;
                  local_648 = (undefined1  [8])lVar43;
                  local_580 = *puVar46;
                  local_5f0 = puVar72;
                  if (local_568._8_4_ == 0) {
                    local_590 = *(undefined8 *)(local_528 + lVar55 * 0xc);
                    local_588 = *(float *)(local_528 + 8 + lVar55 * 0xc);
                    local_638 = (double)CONCAT44(local_638._4_4_,
                                                 *(undefined4 *)(local_518 + lVar55 * 4));
                    lVar54 = FUN_1401466c8(*(undefined8 *)((longlong)param_1 + 0x58),DAT_14c997500,
                                           DAT_14c9974a8);
                    uVar69 = DAT_14c9974a8;
                    local_630 = (double)FUN_142a1c318(local_650,DAT_14c9968a0,DAT_14c9974a8);
                    local_608._0_8_ = lVar42;
                    if (*(char *)((longlong)param_1 + 0x1c2) < '\0') {
                      local_5e8 = (double)FUN_146ee70ec(*(undefined8 *)((longlong)param_1 + 0x58),
                                                        DAT_14c9968b8,uVar69);
                    }
                    else {
                      local_5e8 = 0.0;
                    }
                    puVar57 = local_650;
                    FUN_140757a08(&local_378,local_650);
                    FUN_1429fddac(local_3d8,puVar57,uVar73);
                    lVar54 = *(longlong *)(lVar54 + 0x10);
                    lVar42 = lVar55 * 0x60;
                    pdVar48 = (double *)(lVar54 + lVar42);
                    auVar26._8_8_ = dStack_390;
                    auVar26._0_8_ = local_398;
                    auVar27._8_8_ = dStack_380;
                    auVar27._0_8_ = local_388;
                    auVar82 = *(undefined1 (*) [16])(lVar54 + 0x40 + lVar42);
                    auVar132 = *(undefined1 (*) [16])(lVar54 + 0x50 + lVar42);
                    auVar138 = minpd(auVar82,auVar26);
                    auVar105 = minpd(auVar132,auVar27);
                    auVar92._8_8_ = -(ulonglong)(auVar138._8_8_ < 0.0);
                    auVar92._0_8_ = -(ulonglong)(auVar138._0_8_ < 0.0);
                    iVar40 = movmskpd((int)lVar54,auVar92);
                    auVar106._8_8_ = -(ulonglong)(auVar105._8_8_ < 0.0);
                    auVar106._0_8_ = -(ulonglong)(auVar105._0_8_ < 0.0);
                    uVar59 = movmskpd((int)puVar57,auVar106);
                    if ((uVar59 & 0x3fffffff) == 0 && iVar40 == 0) {
                      dVar136 = *pdVar48;
                      dVar161 = pdVar48[1];
                      dVar97 = pdVar48[2];
                      dVar99 = pdVar48[3];
                      dVar130 = dVar161 * local_3c8 * -1.0 +
                                dVar97 * (double)local_3d8._8_8_ +
                                dVar99 * (double)local_3d8._0_8_ * 1.0 + dVar136 * dStack_3c0;
                      dVar81 = dVar136 * local_3c8 * 1.0 +
                               dVar99 * (double)local_3d8._8_8_ +
                               dVar97 * (double)local_3d8._0_8_ * -1.0 + dVar161 * dStack_3c0;
                      auVar114._0_8_ =
                           dVar99 * local_3c8 * 1.0 +
                           (((double)local_3d8._0_8_ * dVar161 * 1.0 + dVar97 * dStack_3c0) -
                           dVar136 * (double)local_3d8._8_8_);
                      auVar114._8_8_ =
                           dVar97 * local_3c8 * -1.0 +
                           (((double)local_3d8._0_8_ * dVar136 * -1.0 + dVar99 * dStack_3c0) -
                           dVar161 * (double)local_3d8._8_8_);
                      dVar109 = pdVar48[4] * local_398;
                      dVar110 = pdVar48[5] * dStack_390;
                      dVar107 = pdVar48[6] * local_388;
                      dVar135 = pdVar48[7] * dStack_380;
                      dVar161 = dVar110 * (double)local_3d8._0_8_ -
                                (double)local_3d8._8_8_ * dVar109;
                      dVar100 = dVar107 * (double)local_3d8._8_8_ - local_3c8 * dVar110;
                      dVar99 = dVar109 * local_3c8 - (double)local_3d8._0_8_ * dVar107;
                      dVar97 = dVar135 * dStack_3c0 - dStack_3c0 * dVar135;
                      dVar100 = dVar100 + dVar100;
                      dVar99 = dVar99 + dVar99;
                      dVar161 = dVar161 + dVar161;
                      dVar97 = dVar97 + dVar97;
                      auVar158._0_8_ = auVar82._0_8_ * local_398;
                      auVar158._8_8_ = auVar82._8_8_ * dStack_390;
                      auVar70 = (undefined1  [8])(auVar132._0_8_ * local_388);
                      dVar136 = auVar132._8_8_ * dStack_380;
                      dVar97 = (dVar97 * dStack_3c0 - dVar97 * dStack_3c0) +
                               dStack_3c0 * dVar97 + dVar135 + (double)local_3a8._8_8_;
                      plVar118 = (longlong *)
                                 ((dVar99 * (double)local_3d8._0_8_ -
                                  (double)local_3d8._8_8_ * dVar100) +
                                  dStack_3c0 * dVar161 + dVar107 + (double)local_3a8._0_8_);
                      puVar51 = (undefined8 *)
                                ((dVar161 * (double)local_3d8._8_8_ - local_3c8 * dVar99) +
                                 dStack_3c0 * dVar100 + dVar109 + (double)local_3b8);
                      dVar161 = (dVar100 * local_3c8 - dVar161 * (double)local_3d8._0_8_) +
                                dStack_3c0 * dVar99 + dVar110 + (double)plStack_3b0;
                    }
                    else {
                      dVar136 = auVar132._8_8_ * dStack_380;
                      unique0x10002884 = SUB84(dVar136,0);
                      local_618 = (undefined1  [8])(auVar132._0_8_ * local_388);
                      unique0x10002888 = (int)((ulonglong)dVar136 >> 0x20);
                      dVar136 = (double)local_3d8._8_8_ + (double)local_3d8._8_8_;
                      dVar161 = local_3c8 + local_3c8;
                      dVar81 = (double)local_3d8._0_8_ *
                               ((double)local_3d8._0_8_ + (double)local_3d8._0_8_);
                      dVar130 = ((double)local_3d8._0_8_ + (double)local_3d8._0_8_) * dStack_3c0;
                      dStack_660 = auVar82._8_8_ * dStack_390;
                      local_668 = (undefined1  [8])(auVar82._0_8_ * local_398);
                      local_178 = (double *)
                                  ((1.0 - (local_3c8 * dVar161 + (double)local_3d8._8_8_ * dVar136))
                                  * local_398);
                      uStack_170 = (undefined1 *)
                                   ((dVar136 * (double)local_3d8._0_8_ + dVar161 * dStack_3c0) *
                                   local_398);
                      local_148 = (longlong *)
                                  ((dVar161 * (double)local_3d8._8_8_ + dVar130) * dStack_390);
                      local_168._8_8_ = 0;
                      local_168._0_8_ =
                           ((double)local_3d8._0_8_ * dVar161 - dVar136 * dStack_3c0) * local_398;
                      local_158._8_8_ = (1.0 - (local_3c8 * dVar161 + dVar81)) * dStack_390;
                      local_158._0_8_ =
                           (dVar136 * (double)local_3d8._0_8_ - dVar161 * dStack_3c0) * dStack_390;
                      dStack_140 = 0.0;
                      local_138._8_8_ = (dVar161 * (double)local_3d8._8_8_ - dVar130) * local_388;
                      local_138._0_8_ =
                           (dVar136 * dStack_3c0 + (double)local_3d8._0_8_ * dVar161) * local_388;
                      local_128._8_8_ = 0;
                      local_128._0_8_ =
                           (1.0 - (dVar81 + (double)local_3d8._8_8_ * dVar136)) * local_388;
                      local_118 = local_3b8;
                      plStack_110 = plStack_3b0;
                      local_108 = (longlong *)local_3a8._0_8_;
                      uStack_100 = 0x3ff0000000000000;
                      dVar161 = *pdVar48;
                      dVar130 = pdVar48[1];
                      dVar81 = pdVar48[2];
                      dVar97 = pdVar48[8];
                      dVar99 = pdVar48[9];
                      dVar100 = pdVar48[10];
                      dVar110 = dVar130 + dVar130;
                      dVar107 = dVar81 + dVar81;
                      dVar116 = dVar161 * (dVar161 + dVar161);
                      local_1a8 = (1.0 - (dVar116 + dVar130 * dVar110)) * dVar100;
                      dVar136 = pdVar48[3];
                      dVar135 = dVar107 * dVar136;
                      dVar109 = (dVar161 + dVar161) * pdVar48[3];
                      dVar136 = dVar110 * dVar136;
                      local_1e8 = (*pdVar48 * dVar107 - dVar136) * dVar97;
                      local_1f8._8_8_ = (dVar110 * dVar161 + dVar135) * dVar97;
                      local_1f8._0_8_ = (1.0 - (dVar81 * dVar107 + dVar130 * dVar110)) * dVar97;
                      dStack_1e0 = 0.0;
                      local_1d8._8_8_ = (1.0 - (dVar81 * dVar107 + dVar116)) * dVar99;
                      local_1d8._0_8_ = (dVar110 * dVar161 - dVar135) * dVar99;
                      local_1c8._8_8_ = 0;
                      local_1c8._0_8_ = (dVar107 * dVar130 + dVar109) * dVar99;
                      local_1b8._8_8_ = (dVar107 * dVar130 - dVar109) * dVar100;
                      local_1b8._0_8_ = (dVar136 + *pdVar48 * dVar107) * dVar100;
                      uStack_1a0 = 0;
                      local_198 = (undefined8 *)pdVar48[4];
                      dStack_190 = pdVar48[5];
                      local_188 = (longlong *)pdVar48[6];
                      uStack_180 = 0x3ff0000000000000;
                      FUN_1447fea8d(local_2f8,local_1f8,&local_178);
                      auVar158 = _local_668;
                      auVar82 = _DAT_149934d80;
                      dVar161 = (double)local_2e8._0_8_ * (double)local_2e8._0_8_ +
                                (double)local_2f8._0_8_ * (double)local_2f8._0_8_ +
                                (double)local_2f8._8_8_ * (double)local_2f8._8_8_;
                      dVar130 = (double)local_2c8 * (double)local_2c8 +
                                (double)local_2d8 * (double)local_2d8 + dStack_2d0 * dStack_2d0;
                      dVar136 = (double)local_2a8._0_8_ * (double)local_2a8._0_8_ +
                                (double)local_2b8._0_8_ * (double)local_2b8._0_8_ +
                                (double)local_2b8._8_8_ * (double)local_2b8._8_8_;
                      uVar78 = -(ulonglong)(0.0 <= dVar161 + -9.99999993922529e-09);
                      dVar161 = (double)(~uVar78 & 0x3ff0000000000000 |
                                        (ulonglong)(1.0 / SQRT(dVar161)) & uVar78);
                      uVar78 = -(ulonglong)(0.0 <= dVar130 + -9.99999993922529e-09);
                      dVar130 = (double)(~uVar78 & 0x3ff0000000000000 |
                                        (ulonglong)(1.0 / SQRT(dVar130)) & uVar78);
                      uVar78 = -(ulonglong)(0.0 <= dVar136 + -9.99999993922529e-09);
                      dVar81 = (double)(~uVar78 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar136)) & uVar78);
                      auVar70 = local_618;
                      dVar136 = dStack_610;
                      auVar93._8_8_ = -(ulonglong)(0.0 <= dStack_660);
                      auVar93._0_8_ = -(ulonglong)(0.0 <= (double)local_668);
                      auVar132 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar93);
                      dVar97 = (double)(~-(ulonglong)(0.0 <= (double)local_618) & 0xbff0000000000000
                                       | -(ulonglong)(0.0 <= (double)local_618) & 0x3ff0000000000000
                                       );
                      dVar99 = auVar132._0_8_;
                      local_2f8._8_8_ = (double)local_2f8._8_8_ * dVar161 * dVar99;
                      local_2f8._0_8_ = (double)local_2f8._0_8_ * dVar161 * dVar99;
                      local_2e8._0_8_ = dVar161 * (double)local_2e8._0_8_ * dVar99;
                      dVar161 = auVar132._8_8_;
                      local_2c8 = (longlong *)(dVar130 * (double)local_2c8 * dVar161);
                      dStack_2d0 = dStack_2d0 * dVar130 * dVar161;
                      local_2d8 = (undefined8 *)(dVar161 * (double)local_2d8 * dVar130);
                      local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar81 * dVar97;
                      local_2b8._0_8_ = dVar97 * (double)local_2b8._0_8_ * dVar81;
                      local_2a8._0_8_ = dVar81 * (double)local_2a8._0_8_ * dVar97;
                      ppuVar58 = &local_478;
                      pdVar48 = (double *)FUN_14481fd10(ppuVar58,local_2f8);
                      iVar40 = (int)ppuVar58;
                      dVar161 = (double)CONCAT44(uStack_464,local_468);
                      dVar130 = (double)CONCAT44(uStack_45c,uStack_460);
                      dVar81 = dVar161 * dVar161 + (double)local_478 * (double)local_478;
                      dVar97 = dVar130 * dVar130 + dStack_470 * dStack_470;
                      auVar123._0_8_ = dVar81 + dVar97;
                      auVar123._8_8_ = dVar81 + dVar97;
                      auVar94._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar123._8_8_);
                      auVar94._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar123._0_8_);
                      auVar132 = sqrtpd(auVar123,auVar123);
                      auVar82 = divpd(auVar82,auVar132);
                      auVar128._0_8_ = auVar82._0_8_ * dVar161;
                      auVar128._8_8_ = auVar82._8_8_ * dVar130;
                      dVar130 = (double)((ulonglong)((double)local_478 * auVar82._0_8_) &
                                        -(ulonglong)(9.99999993922529e-09 <= auVar123._0_8_));
                      dVar81 = (double)((ulonglong)(dStack_470 * auVar82._8_8_) &
                                       -(ulonglong)(9.99999993922529e-09 <= auVar123._8_8_));
                      auVar114 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar128,auVar94);
                      dVar97 = 0.0;
                      plVar118 = local_288;
                      puVar51 = local_298;
                      dVar161 = dStack_290;
                    }
                    auVar82 = *(undefined1 (*) [16])((longlong)param_1 + 0xe0);
                    dVar99 = auVar82._0_8_;
                    dVar107 = auVar82._8_8_;
                    auVar132 = *(undefined1 (*) [16])((longlong)param_1 + 0xf0);
                    dVar100 = auVar132._0_8_;
                    dVar135 = auVar132._8_8_;
                    dVar109 = auVar158._0_8_;
                    dVar110 = auVar158._8_8_;
                    auVar82 = minpd(auVar158,auVar82);
                    auVar143._8_8_ = dVar136;
                    auVar143._0_8_ = auVar70;
                    auVar132 = minpd(auVar143,auVar132);
                    auVar134._8_8_ = -(ulonglong)(auVar82._8_8_ < 0.0);
                    auVar134._0_8_ = -(ulonglong)(auVar82._0_8_ < 0.0);
                    iVar66 = movmskpd((int)pdVar48,auVar134);
                    auVar144._8_8_ = -(ulonglong)(auVar132._8_8_ < 0.0);
                    auVar144._0_8_ = -(ulonglong)(auVar132._0_8_ < 0.0);
                    uVar59 = movmskpd(iVar40,auVar144);
                    unique0x100027d0 = SUB84(dVar136,0);
                    local_618 = auVar70;
                    unique0x100027d4 = (int)((ulonglong)dVar136 >> 0x20);
                    dVar116 = auVar114._0_8_;
                    dVar124 = auVar114._8_8_;
                    if ((uVar59 & 0x3fffffff) == 0 && iVar66 == 0) {
                      dVar162 = SUB168(*(undefined1 (*) [16])((longlong)param_1 + 0xa0),0);
                      dVar15 = SUB168(*(undefined1 (*) [16])((longlong)param_1 + 0xa0),8);
                      dVar13 = SUB168(*(undefined1 (*) [16])((longlong)param_1 + 0xb0),0);
                      dVar16 = SUB168(*(undefined1 (*) [16])((longlong)param_1 + 0xb0),8);
                      dVar136 = *(double *)((longlong)param_1 + 0xb8);
                      dVar149 = *(double *)((longlong)param_1 + 0xb8);
                      dVar153 = *(double *)((longlong)param_1 + 0xa0);
                      dVar131 = *(double *)((longlong)param_1 + 0xa0);
                      dVar14 = (double)DAT_149931170;
                      dVar17 = DAT_149931170._8_8_;
                      dVar155 = *(double *)((longlong)param_1 + 0xa8);
                      dVar154 = *(double *)((longlong)param_1 + 0xa8);
                      dVar160 = *(double *)((longlong)param_1 + 0xb0);
                      dVar168 = *(double *)((longlong)param_1 + 0xb0);
                      local_2f8._0_8_ =
                           dVar81 * dVar160 * -1.0 +
                           dVar116 * dVar155 + dVar124 * dVar153 * dVar14 + dVar130 * dVar136;
                      local_2f8._8_8_ =
                           dVar130 * dVar168 * 1.0 +
                           dVar124 * dVar154 + dVar116 * dVar131 * dVar17 + dVar81 * dVar149;
                      local_2e8._0_8_ =
                           dVar124 * dVar160 * dVar14 +
                           ((dVar153 * dVar81 * dVar14 + dVar116 * dVar136) - dVar130 * dVar155);
                      local_2e8._8_8_ =
                           dVar116 * dVar168 * dVar17 +
                           ((dVar131 * dVar130 * dVar17 + dVar124 * dVar149) - dVar81 * dVar154);
                      dVar116 = (double)puVar51 * dVar99;
                      dVar161 = dVar161 * dVar107;
                      dVar153 = (double)plVar118 * dVar100;
                      dVar97 = dVar97 * dVar135;
                      dVar130 = dVar161 * dVar162 - dVar116 * dVar15;
                      dVar124 = dVar153 * dVar15 - dVar161 * dVar13;
                      dVar131 = dVar116 * dVar13 - dVar153 * dVar162;
                      dVar81 = dVar97 * dVar16 - dVar97 * dVar16;
                      dVar124 = dVar124 + dVar124;
                      dVar131 = dVar131 + dVar131;
                      dVar130 = dVar130 + dVar130;
                      dVar81 = dVar81 + dVar81;
                      dVar109 = dVar109 * dVar99;
                      dVar110 = dVar110 * dVar107;
                      auVar70 = (undefined1  [8])((double)auVar70 * dVar100);
                      dVar135 = dStack_610 * dVar135;
                      puStack_2c0 = (uint *)((dVar81 * dVar16 - dVar81 * dVar16) +
                                             dVar149 * dVar81 + dVar97 +
                                            *(double *)((longlong)param_1 + 0xd8));
                      local_2c8 = (longlong *)
                                  ((dVar131 * dVar162 - dVar15 * dVar124) +
                                   dVar136 * dVar130 + dVar153 +
                                  *(double *)((longlong)param_1 + 0xd0));
                      local_2d8 = (undefined8 *)
                                  ((dVar130 * dVar15 - dVar13 * dVar131) +
                                   dVar136 * dVar124 + dVar116 +
                                  *(double *)((longlong)param_1 + 0xc0));
                      dStack_2d0 = (dVar124 * dVar13 - dVar130 * dVar162) +
                                   dVar149 * dVar131 + dVar161 +
                                   *(double *)((longlong)param_1 + 200);
                      _local_668 = auVar158;
                    }
                    else {
                      dStack_660 = dVar136 * dVar135;
                      local_668 = (undefined1  [8])((double)auVar70 * dVar100);
                      dVar149 = *(double *)((longlong)param_1 + 0xa0);
                      dVar131 = *(double *)((longlong)param_1 + 0xa8);
                      dVar153 = *(double *)((longlong)param_1 + 0xb0);
                      dVar154 = dVar131 + dVar131;
                      dVar155 = dVar153 + dVar153;
                      dVar97 = dVar149 * (dVar149 + dVar149);
                      dVar135 = *(double *)((longlong)param_1 + 0xa0) * dVar155;
                      dVar136 = *(double *)((longlong)param_1 + 0xb8);
                      dVar160 = dVar155 * dVar136;
                      dVar168 = (dVar149 + dVar149) * *(double *)((longlong)param_1 + 0xb8);
                      dVar136 = dVar154 * dVar136;
                      local_5a8 = dVar109 * dVar99;
                      dStack_5a0 = dVar110 * dVar107;
                      local_178 = (double *)
                                  ((1.0 - (dVar153 * dVar155 + dVar131 * dVar154)) * dVar99);
                      uStack_170 = (undefined1 *)((dVar154 * dVar149 + dVar160) * dVar99);
                      local_148 = (longlong *)((dVar155 * dVar131 + dVar168) * dVar107);
                      local_168._8_8_ = 0;
                      local_168._0_8_ = (dVar135 - dVar136) * dVar99;
                      local_158._8_8_ = (1.0 - (dVar153 * dVar155 + dVar97)) * dVar107;
                      local_158._0_8_ = (dVar154 * dVar149 - dVar160) * dVar107;
                      dStack_140 = 0.0;
                      local_138._8_8_ = (dVar155 * dVar131 - dVar168) * dVar100;
                      local_138._0_8_ = (dVar136 + dVar135) * dVar100;
                      local_128._8_8_ = 0;
                      local_128._0_8_ = (1.0 - (dVar97 + dVar131 * dVar154)) * dVar100;
                      local_118 = *(longlong **)((longlong)param_1 + 0xc0);
                      plStack_110 = *(longlong **)((longlong)param_1 + 200);
                      local_108 = *(longlong **)((longlong)param_1 + 0xd0);
                      uStack_100 = 0x3ff0000000000000;
                      dVar97 = dVar81 + dVar81;
                      dVar99 = dVar116 + dVar116;
                      dVar136 = dVar130 * (dVar130 + dVar130);
                      local_1a8 = (1.0 - (dVar136 + dVar81 * dVar97)) * (double)auVar70;
                      dVar100 = (dVar130 + dVar130) * dVar124;
                      dVar136 = (1.0 - (dVar116 * dVar99 + dVar136)) * dVar110;
                      local_1e8 = (dVar130 * dVar99 - dVar97 * dVar124) * dVar109;
                      local_1f8._8_8_ = (dVar97 * dVar130 + dVar99 * dVar124) * dVar109;
                      local_1f8._0_8_ = (1.0 - (dVar116 * dVar99 + dVar81 * dVar97)) * dVar109;
                      dStack_1e0 = 0.0;
                      local_1d8._8_4_ = SUB84(dVar136,0);
                      local_1d8._0_8_ = (dVar97 * dVar130 - dVar99 * dVar124) * dVar110;
                      local_1d8._12_4_ = (int)((ulonglong)dVar136 >> 0x20);
                      local_1c8._8_8_ = 0;
                      local_1c8._0_8_ = (dVar99 * dVar81 + dVar100) * dVar110;
                      local_1b8._8_8_ = (dVar99 * dVar81 - dVar100) * (double)auVar70;
                      local_1b8._0_8_ = (dVar130 * dVar99 + dVar97 * dVar124) * (double)auVar70;
                      uStack_1a0 = 0;
                      uStack_180 = 0x3ff0000000000000;
                      local_198 = puVar51;
                      dStack_190 = dVar161;
                      local_188 = plVar118;
                      FUN_1447fea8d(local_2f8,local_1f8,&local_178);
                      dVar110 = dStack_5a0;
                      dVar109 = local_5a8;
                      auVar82 = _DAT_149934d80;
                      dVar161 = (double)local_2e8._0_8_ * (double)local_2e8._0_8_ +
                                (double)local_2f8._0_8_ * (double)local_2f8._0_8_ +
                                (double)local_2f8._8_8_ * (double)local_2f8._8_8_;
                      dVar130 = (double)local_2c8 * (double)local_2c8 +
                                (double)local_2d8 * (double)local_2d8 + dStack_2d0 * dStack_2d0;
                      dVar136 = (double)local_2a8._0_8_ * (double)local_2a8._0_8_ +
                                (double)local_2b8._0_8_ * (double)local_2b8._0_8_ +
                                (double)local_2b8._8_8_ * (double)local_2b8._8_8_;
                      uVar78 = -(ulonglong)(0.0 <= dVar161 + -9.99999993922529e-09);
                      dVar161 = (double)(~uVar78 & 0x3ff0000000000000 |
                                        (ulonglong)(1.0 / SQRT(dVar161)) & uVar78);
                      uVar78 = -(ulonglong)(0.0 <= dVar130 + -9.99999993922529e-09);
                      dVar130 = (double)(~uVar78 & 0x3ff0000000000000 |
                                        (ulonglong)(1.0 / SQRT(dVar130)) & uVar78);
                      uVar78 = -(ulonglong)(0.0 <= dVar136 + -9.99999993922529e-09);
                      auVar70 = local_668;
                      dVar135 = dStack_660;
                      dVar136 = (double)(~uVar78 & 0x3ff0000000000000 |
                                        (ulonglong)(1.0 / SQRT(dVar136)) & uVar78);
                      auVar95._8_8_ = -(ulonglong)(0.0 <= dStack_5a0);
                      auVar95._0_8_ = -(ulonglong)(0.0 <= local_5a8);
                      auVar132 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar95);
                      dVar81 = (double)(~-(ulonglong)(0.0 <= (double)local_668) & 0xbff0000000000000
                                       | -(ulonglong)(0.0 <= (double)local_668) & 0x3ff0000000000000
                                       );
                      dVar97 = auVar132._0_8_;
                      local_2f8._8_8_ = (double)local_2f8._8_8_ * dVar161 * dVar97;
                      local_2f8._0_8_ = (double)local_2f8._0_8_ * dVar161 * dVar97;
                      local_2e8._0_8_ = dVar161 * (double)local_2e8._0_8_ * dVar97;
                      dVar161 = auVar132._8_8_;
                      local_2c8 = (longlong *)(dVar130 * (double)local_2c8 * dVar161);
                      dStack_2d0 = dStack_2d0 * dVar130 * dVar161;
                      local_2d8 = (undefined8 *)(dVar161 * (double)local_2d8 * dVar130);
                      local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar136 * dVar81;
                      local_2b8._0_8_ = dVar81 * (double)local_2b8._0_8_ * dVar136;
                      local_2a8._0_8_ = dVar136 * (double)local_2a8._0_8_ * dVar81;
                      FUN_14481fd10(&local_478,local_2f8);
                      dVar136 = (double)CONCAT44(uStack_464,local_468);
                      dVar161 = (double)CONCAT44(uStack_45c,uStack_460);
                      dVar130 = dVar136 * dVar136 + (double)local_478 * (double)local_478;
                      dVar81 = dVar161 * dVar161 + dStack_470 * dStack_470;
                      auVar115._0_8_ = dVar130 + dVar81;
                      auVar115._8_8_ = dVar130 + dVar81;
                      auVar96._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar115._8_8_);
                      auVar96._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar115._0_8_);
                      auVar132 = sqrtpd(auVar115,auVar115);
                      auVar82 = divpd(auVar82,auVar132);
                      auVar170._0_8_ = auVar82._0_8_ * dVar136;
                      auVar170._8_8_ = auVar82._8_8_ * dVar161;
                      local_2f8._0_8_ =
                           (ulonglong)((double)local_478 * auVar82._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar115._0_8_);
                      local_2f8._8_8_ =
                           (ulonglong)(dStack_470 * auVar82._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar115._8_8_);
                      local_2e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar170,auVar96);
                      puStack_2c0 = (uint *)0x0;
                      local_2c8 = local_288;
                      local_2d8 = local_298;
                      dStack_2d0 = dStack_290;
                    }
                    local_2b8._8_4_ = SUB84(dVar110,0);
                    local_2b8._0_8_ = dVar109;
                    local_2b8._12_4_ = (int)((ulonglong)dVar110 >> 0x20);
                    local_2a8._8_4_ = SUB84(dVar135,0);
                    local_2a8._0_8_ = auVar70;
                    local_2a8._12_4_ = (int)((ulonglong)dVar135 >> 0x20);
                    local_478 = (undefined8 *)0x0;
                    dStack_470 = 4.94065645841247e-324;
                    FUN_140543018(&local_478,0);
                    *(undefined4 *)local_478 = local_580;
                    uVar69 = local_608._0_8_;
                    FUN_140feaab4(*(undefined8 *)(local_608._0_8_ + 0x9c8),1);
                    local_178 = (double *)CONCAT44(local_178._4_4_,0x10000);
                    local_6a8 = &local_178;
                    FUN_1403f36fc(*(undefined8 *)(uVar69 + 0x9c8),&local_3e8,1,local_478);
                    pdVar48 = (double *)*local_3e8;
                    *(undefined1 (*) [8])
                     (*(longlong *)((longlong)*pdVar48 + 200) + (longlong)*(int *)(pdVar48 + 1) * 8)
                         = param_1;
                    lVar54 = (longlong)
                             *(int *)(*(longlong *)((longlong)param_1 + 0x410) + lVar55 * 4);
                    *(double **)(*(longlong *)((longlong)param_1 + 0x340) + lVar54 * 8) = pdVar48;
                    local_418._0_4_ = uVar73;
                    local_1f8._0_8_ = pdVar48;
                    uStack_170 = local_418;
                    local_178 = (double *)local_1f8;
                    FUN_146eee31a(local_5b0,&local_408,&local_178);
                    *(undefined8 *)
                     (*(longlong *)((longlong)*pdVar48 + 0xb0) + (longlong)*(int *)(pdVar48 + 1) * 8
                     ) = *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x440) + lVar54 * 8);
                    FUN_14172fb54(*(undefined8 *)(uVar69 + 0x9c8),pdVar48);
                    if (local_310 != 0) {
                      lVar54 = local_310 + 0x10;
                      if (*(longlong *)(local_310 + 0x20) != 0) {
                        lVar54 = *(longlong *)(local_310 + 0x20);
                      }
                      uVar59 = uVar73 + 0x1f;
                      if (-1 < (int)uVar73) {
                        uVar59 = uVar73;
                      }
                      if ((*(uint *)(lVar54 + (longlong)((int)uVar59 >> 5) * 4) >> (uVar73 & 0x1f) &
                          1) != 0) {
                        *(byte *)(*(longlong *)((longlong)param_1 + 0x730) + lVar55) =
                             *(char *)(*(longlong *)((longlong)*pdVar48 + 0x2c0) + 0xb +
                                      (longlong)*(int *)(pdVar48 + 1) * 0x10) == '\x03' | 2;
                      }
                    }
                    local_670 = *(undefined4 *)((longlong)param_1 + 0x30c);
                    local_678 = *(undefined2 *)((longlong)param_1 + 0x198);
                    local_680 = *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x730) + lVar55);
                    local_3f0 = local_588;
                    local_3f8 = local_590;
                    local_408 = (double *)*local_5b8;
                    uStack_400 = local_5b8[1];
                    local_418 = *local_5c0;
                    if ((DAT_14c75f3e0 == '\0') && (*(uint *)((longlong)param_1 + 0x180) != uVar73))
                    {
                      local_420 = 0;
                    }
                    else {
                      local_420 = *(longlong *)
                                   (*(longlong *)((longlong)local_630 + 0x10) + lVar55 * 8);
                      if (local_420 != 0) {
                        LOCK();
                        *(int *)(local_420 + 8) = *(int *)(local_420 + 8) + 1;
                        UNLOCK();
                      }
                    }
                    if (local_5e8 == 0.0) {
                      uVar69 = 0;
                    }
                    else {
                      uVar69 = *(undefined8 *)
                                (*(longlong *)((longlong)local_5e8 + 0x10) + lVar55 * 8);
                    }
                    local_698 = (double **)(double)local_638._0_4_;
                    local_688 = (double **)local_2f8;
                    local_690 = &local_3f8;
                    local_6a0 = &local_408;
                    local_6a8 = (double **)local_418;
                    FUN_142a13b4a(pdVar48,local_5c8,uVar69,&local_420);
                    if (local_310 == 0) {
                      pbVar52 = (byte *)((longlong)*(int *)(pdVar48 + 1) +
                                        *(longlong *)((longlong)*pdVar48 + 0x680));
                      bVar53 = 0;
                    }
                    else {
                      lVar54 = local_310 + 0x10;
                      if (*(longlong *)(local_310 + 0x20) != 0) {
                        lVar54 = *(longlong *)(local_310 + 0x20);
                      }
                      uVar59 = uVar73 + 0x1f;
                      if (-1 < (int)uVar73) {
                        uVar59 = uVar73;
                      }
                      pbVar52 = (byte *)((longlong)*(int *)(pdVar48 + 1) +
                                        *(longlong *)((longlong)*pdVar48 + 0x680));
                      bVar53 = ((*(uint *)(lVar54 + (longlong)((int)uVar59 >> 5) * 4) >>
                                 (uVar73 & 0x1f) & 1) != 0) * '\x02';
                    }
                    *pbVar52 = *pbVar52 & 0xfd | bVar53;
                    if ((*(byte *)((longlong)param_1 + 0x1c0) & 2) != 0) {
                      *(undefined4 *)
                       (*(longlong *)((longlong)*pdVar48 + 0x5d8) +
                       (longlong)*(int *)(pdVar48 + 1) * 4) =
                           *(undefined4 *)((longlong)param_1 + 0x184);
                    }
                    uVar73 = *(uint *)((longlong)param_1 + 0x1b8);
                    if (0xffffff < uVar73) {
                      lVar54 = *(longlong *)((longlong)param_1 + 8);
                      uVar59 = uVar73 & 0xffffff;
                      if ((int)uVar59 < *(int *)(lVar54 + 0xb58)) {
                        lVar42 = lVar54 + 0xb40;
                        if (*(longlong *)(lVar54 + 0xb50) != 0) {
                          lVar42 = *(longlong *)(lVar54 + 0xb50);
                        }
                        if ((((*(uint *)(lVar42 + (ulonglong)(uVar59 >> 5) * 4) >> (uVar73 & 0x1f) &
                              1) != 0) &&
                            ((uVar73 ^ *(uint *)(*(longlong *)(lVar54 + 0xb30) +
                                                (ulonglong)uVar59 * 4)) < 0x1000000)) &&
                           (lVar54 = (ulonglong)(uVar59 << 7) + *(longlong *)(lVar54 + 0xb60),
                           lVar54 != 0)) {
                          *(undefined8 *)
                           (*(longlong *)((longlong)*pdVar48 + 0x410) +
                           (longlong)*(int *)(pdVar48 + 1) * 8) = *(undefined8 *)(lVar54 + 0x20);
                          *(undefined8 *)
                           (*(longlong *)((longlong)*pdVar48 + 0x428) +
                           (longlong)*(int *)(pdVar48 + 1) * 8) = *(undefined8 *)(lVar54 + 0x28);
                        }
                      }
                    }
                    lVar54 = *(longlong *)((longlong)*pdVar48 + 0xf8) +
                             (longlong)*(int *)(pdVar48 + 1) * 0x18;
                    lVar42 = *(longlong *)(lVar54 + 8);
                    if (*(longlong *)(lVar54 + 8) == 0) {
                      lVar42 = lVar54;
                    }
                    iVar40 = *(int *)(lVar54 + 0x10);
                    if ((longlong)iVar40 != 0) {
                      lVar54 = 0;
                      do {
                        lVar43 = *(longlong *)(lVar42 + lVar54);
                        uVar80 = *(undefined4 *)((longlong)param_1 + 0x1b8);
                        uVar73 = *(uint *)(lVar43 + 8);
                        if ((uVar73 & 3) == 0) {
                          local_178 = (double *)CONCAT44(local_178._4_4_,uVar80);
                          local_6a8 = (double **)CONCAT44(local_6a8._4_4_,uVar73 >> 3);
                          local_6a0 = &local_178;
                          FUN_1401c2fdc(lVar43 + 0x80,CONCAT71((int7)((ulonglong)&local_178 >> 8),1)
                                        ,lVar43 + 0xc,*(undefined8 *)(lVar43 + 0x48));
                        }
                        else {
                          if ((uVar73 & 4) == 0) {
                            local_668 = param_1;
                            plVar118 = *(longlong **)(lVar43 + 0x78);
                            if (plVar118 != (longlong *)0x0) {
                              if (plVar118[6] != 0) {
                                FUN_1400020a8();
                              }
                              if (plVar118[4] != 0) {
                                FUN_1400020a8();
                              }
                              if (plVar118[2] != 0) {
                                FUN_1400020a8();
                              }
                              if (*plVar118 != 0) {
                                FUN_1400020a8();
                              }
                              FUN_1400020a8(plVar118);
                              uVar73 = *(uint *)(lVar43 + 8);
                            }
                            *(uint *)(lVar43 + 8) = uVar73 | 4;
                            param_1 = local_668;
                          }
                          *(undefined4 *)(lVar43 + 0x78) = uVar80;
                        }
                        lVar54 = lVar54 + 8;
                      } while ((longlong)iVar40 * 8 != lVar54);
                    }
                    FUN_1429fddac(&local_178,local_650);
                    lVar54 = *(longlong *)
                              (*(longlong *)((longlong)*pdVar48 + 0x60) +
                              (longlong)*(int *)(pdVar48 + 1) * 8);
                    if ((lVar54 != 0) && (*(char *)(lVar54 + 0x1a) == '\x01')) {
                      *(undefined1 *)
                       (*(longlong *)((longlong)*pdVar48 + 0x158) + (longlong)*(int *)(pdVar48 + 1))
                           = 1;
                      plVar118 = *(longlong **)
                                  (*(longlong *)((longlong)*pdVar48 + 0x60) +
                                  (longlong)*(int *)(pdVar48 + 1) * 8);
                      (**(code **)(*plVar118 + 0x80))(plVar118,local_1f8);
                      lVar54 = *(longlong *)((longlong)*pdVar48 + 0x110);
                      lVar42 = (longlong)*(int *)(pdVar48 + 1) * 0x30;
                      *(double *)(lVar54 + 0x10 + lVar42) = local_1e8;
                      *(undefined8 *)(lVar54 + lVar42) = local_1f8._0_8_;
                      ((undefined8 *)(lVar54 + lVar42))[1] = local_1f8._8_8_;
                      pdVar2 = (double *)(lVar54 + 0x18 + lVar42);
                      *pdVar2 = dStack_1e0;
                      pdVar2[1] = (double)local_1d8._0_8_;
                      *(undefined8 *)(lVar54 + 0x28 + lVar42) = local_1d8._8_8_;
                      lVar55 = (longlong)*(int *)(pdVar48 + 1);
                      lVar54 = *(longlong *)((longlong)*pdVar48 + 0x48);
                      lVar43 = lVar55 * 3;
                      lVar63 = lVar55 * 0x10;
                      dStack_1e0 = (double)*(float *)(lVar54 + 0xc + lVar63);
                      lVar42 = *(longlong *)((longlong)*pdVar48 + 0x28);
                      local_1e8 = (double)*(float *)(lVar54 + 8 + lVar63);
                      local_1f8._0_8_ = (undefined8)*(float *)(lVar54 + lVar63);
                      local_1f8._8_8_ = (double)*(float *)(lVar54 + 4 + lVar63);
                      local_1d8 = *(undefined1 (*) [16])(lVar42 + lVar55 * 0x18);
                      local_1c8._8_8_ = 0;
                      local_1c8._0_8_ = *(ulonglong *)(lVar42 + 0x10 + lVar55 * 0x18);
                      local_1b8._8_8_ = 0x3ff0000000000000;
                      local_1b8._0_8_ = 0x3ff0000000000000;
                      local_1a8 = 1.0;
                      uStack_1a0 = 0;
                      dVar136 = *pdVar48;
                      iVar40 = *(int *)(pdVar48 + 1);
                      lVar54 = *(longlong *)((longlong)dVar136 + 0xf8) + (longlong)iVar40 * 0x18;
                      iVar66 = *(int *)(lVar54 + 0x10);
                      lVar42 = *(longlong *)(lVar54 + 8);
                      if (*(longlong *)(lVar54 + 8) == 0) {
                        lVar42 = lVar54;
                      }
                      if ((longlong)iVar66 < 1) {
                        dVar161 = 0.0;
                        uVar69 = 0;
                        uVar78 = 0;
                        uVar163 = 0;
                        uVar45 = 0;
                        dVar81 = 0.0;
                        dVar130 = 0.0;
                        dVar97 = 0.0;
                        if (iVar66 != 0) goto LAB_142a1b5b9;
                      }
                      else {
                        dVar161 = -1.79769313486232e+308;
                        uVar78 = 0x7fefffffffffffff;
LAB_142a1b5b9:
                        lVar54 = 0;
                        auVar159._8_8_ = 0;
                        auVar159._0_8_ = uVar78;
                        auVar167._8_8_ = 0;
                        auVar167._0_8_ = uVar78;
                        auVar145._8_8_ = 0;
                        auVar145._0_8_ = uVar78;
                        dVar130 = dVar161;
                        dVar81 = dVar161;
                        do {
                          lVar55 = *(longlong *)(lVar42 + lVar54);
                          if ((*(byte *)(lVar55 + 8) & 3) == 0) {
                            FUN_146e22506(lVar55,local_1f8);
                          }
                          else {
                            FUN_1447269c8(lVar55,local_1f8);
                          }
                          lVar55 = *(longlong *)(lVar42 + lVar54);
                          if (*(double *)(lVar55 + 0x28) <= auVar159._0_8_) {
                            auVar159._0_8_ = *(double *)(lVar55 + 0x28);
                          }
                          uVar45 = auVar159._0_8_;
                          if (*(double *)(lVar55 + 0x20) <= auVar167._0_8_) {
                            auVar167._0_8_ = *(double *)(lVar55 + 0x20);
                          }
                          uVar163 = auVar167._0_8_;
                          if (*(double *)(lVar55 + 0x18) <= auVar145._0_8_) {
                            auVar145._0_8_ = *(double *)(lVar55 + 0x18);
                          }
                          uVar69 = auVar145._0_8_;
                          if (dVar161 <= *(double *)(lVar55 + 0x40)) {
                            dVar161 = *(double *)(lVar55 + 0x40);
                          }
                          if (dVar130 <= *(double *)(lVar55 + 0x38)) {
                            dVar130 = *(double *)(lVar55 + 0x38);
                          }
                          if (dVar81 <= *(double *)(lVar55 + 0x30)) {
                            dVar81 = *(double *)(lVar55 + 0x30);
                          }
                          lVar54 = lVar54 + 8;
                        } while ((longlong)iVar66 * 8 != lVar54);
                        dVar81 = dVar81 + 0.0;
                        dVar130 = dVar130 + 0.0;
                        dVar97 = dVar161 + 0.0;
                      }
                      lVar54 = *(longlong *)((longlong)dVar136 + 0x140);
                      lVar42 = (longlong)iVar40 * 0x30;
                      *(undefined8 *)(lVar54 + lVar42) = uVar69;
                      *(undefined8 *)(lVar54 + 8 + lVar42) = uVar163;
                      *(undefined8 *)(lVar54 + 0x10 + lVar42) = uVar45;
                      *(double *)(lVar54 + 0x18 + lVar42) = dVar81;
                      *(double *)(lVar54 + 0x20 + lVar42) = dVar130;
                      *(double *)(lVar54 + 0x28 + lVar42) = dVar97;
                      lVar54 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x9c8);
                      bVar53 = *(byte *)((longlong)pdVar48 + 0xc);
                      lVar42 = CONCAT71((int7)((ulonglong)lVar43 >> 8),1 < bVar53);
                      dVar136 = *pdVar48;
                      lVar43 = (longlong)*(int *)(pdVar48 + 1);
                      if ((pdVar48 == (double *)0x0 || 1 >= bVar53) ||
                         (lVar42 = lVar43 * 0x10,
                         *(char *)(*(longlong *)((longlong)dVar136 + 0x2c0) + 0xd + lVar42) !=
                         '\x01')) {
LAB_142a1b715:
                        if ((*(char *)(*(longlong *)((longlong)dVar136 + 0xe0) + lVar43) != '\0') ||
                           (DAT_14c9978a0 != 0)) {
                          uVar80 = *(undefined4 *)
                                    (*(longlong *)((longlong)dVar136 + 0x80) + lVar43 * 4);
                          local_668._0_4_ = uVar80;
                          puVar51 = (undefined8 *)
                                    FUN_1447eab44(lVar54 + 0x360,uVar80,
                                                  CONCAT71((int7)((ulonglong)lVar42 >> 8),1));
                          *(undefined1 *)(puVar51 + 8) = 2;
                          local_638 = *pdVar48;
                          lVar55 = (longlong)*(int *)(pdVar48 + 1);
                          local_618 = (undefined1  [8])lVar55;
                          lVar42 = *(longlong *)((longlong)local_638 + 0xf8) + lVar55 * 0x18;
                          lVar43 = *(longlong *)(lVar42 + 8);
                          if (*(longlong *)(lVar42 + 8) == 0) {
                            lVar43 = lVar42;
                          }
                          if ((longlong)*(int *)(lVar42 + 0x10) == 0) {
                            local_608._0_4_ = 0;
                            uVar41 = 0;
                            local_630._0_4_ = 0;
                            local_5e8._0_4_ = 0;
                            uVar59 = 0;
                            uVar77 = 0;
                            uVar75 = 0;
                            uVar73 = 0;
                          }
                          else {
                            lVar63 = (longlong)*(int *)(lVar42 + 0x10) * 8;
                            lVar42 = 0;
                            local_5e8._0_4_ = 0;
                            local_630._0_4_ = 0;
                            uVar41 = 0;
                            local_608._0_4_ = 0;
                            do {
                              lVar11 = *(longlong *)(lVar43 + lVar42);
                              if ((lVar11 != 0) &&
                                 ((*(byte *)(lVar11 + 0x71 +
                                            (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0) * 8) & 2)
                                  != 0)) {
                                uVar78 = (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0);
                                uVar41 = uVar41 | *(uint *)(lVar11 + 0x48 + uVar78 * 8);
                                local_630._0_4_ =
                                     local_630._0_4_ | *(uint *)(lVar11 + 0x4c + uVar78 * 8);
                                local_5e8._0_4_ =
                                     local_5e8._0_4_ | *(uint *)(lVar11 + 0x50 + uVar78 * 8);
                                local_608._0_4_ =
                                     local_608._0_4_ | *(uint *)(lVar11 + 0x54 + uVar78 * 8);
                              }
                              lVar42 = lVar42 + 8;
                            } while (lVar63 != lVar42);
                            lVar42 = 0;
                            uVar59 = 0;
                            uVar77 = 0;
                            uVar75 = 0;
                            uVar73 = 0;
                            do {
                              lVar11 = *(longlong *)(lVar43 + lVar42);
                              if ((lVar11 != 0) &&
                                 ((*(byte *)(lVar11 + 0x71 +
                                            (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0) * 8) & 5)
                                  != 0)) {
                                uVar78 = (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0);
                                uVar59 = uVar59 | *(uint *)(lVar11 + 0x58 + uVar78 * 8);
                                uVar77 = uVar77 | *(uint *)(lVar11 + 0x5c + uVar78 * 8);
                                uVar75 = uVar75 | *(uint *)(lVar11 + 0x60 + uVar78 * 8);
                                uVar73 = uVar73 | *(uint *)(lVar11 + 100 + uVar78 * 8);
                              }
                              lVar42 = lVar42 + 8;
                            } while (lVar63 != lVar42);
                          }
                          uVar80 = *(undefined4 *)
                                    (*(longlong *)((longlong)local_638 + 0x80) + lVar55 * 4);
                          *puVar51 = *(undefined8 *)
                                      (*(longlong *)((longlong)local_638 + 0xb0) + lVar55 * 8);
                          puVar51[1] = pdVar48;
                          *(undefined4 *)(puVar51 + 2) = uVar80;
                          *(uint *)((longlong)puVar51 + 0x14) = uVar41;
                          *(uint *)(puVar51 + 3) = local_630._0_4_;
                          *(uint *)((longlong)puVar51 + 0x1c) = local_5e8._0_4_;
                          *(undefined4 *)(puVar51 + 4) = local_608._0_4_;
                          *(uint *)((longlong)puVar51 + 0x24) = uVar59;
                          *(uint *)(puVar51 + 5) = uVar77;
                          *(uint *)((longlong)puVar51 + 0x2c) = uVar75;
                          *(uint *)(puVar51 + 6) = uVar73;
                          *(undefined1 *)((longlong)puVar51 + 0x34) = 1;
                          *(undefined2 *)(puVar51 + 7) =
                               *(undefined2 *)
                                (*(longlong *)((longlong)*pdVar48 + 0x170) +
                                (longlong)*(int *)(pdVar48 + 1) * 2);
                          puVar49 = (undefined8 *)FUN_1447eab44(lVar54 + 0x380,local_668._0_4_);
                          for (lVar54 = 9; lVar54 != 0; lVar54 = lVar54 + -1) {
                            *puVar49 = *puVar51;
                            puVar51 = puVar51 + 1;
                            puVar49 = puVar49 + 1;
                          }
                        }
                      }
                      else if ((2 < bVar53) &&
                              ((plVar118 = *(longlong **)
                                            (*(longlong *)((longlong)dVar136 + 0x5a8) + lVar42),
                               plVar118 != (longlong *)0x0 &&
                               (2 < *(byte *)((longlong)plVar118 + 0xc))))) {
                        if (((*(byte *)(*(longlong *)(*plVar118 + 0x680) +
                                       (longlong)(int)plVar118[1]) & 1) != 0) &&
                           (lVar42 = *(longlong *)((longlong)dVar136 + 200),
                           *(longlong *)
                            (*(longlong *)(*plVar118 + 200) + (longlong)(int)plVar118[1] * 8) ==
                           *(longlong *)(lVar42 + lVar43 * 8))) goto LAB_142a1b715;
                      }
                    }
                    puVar51 = local_478;
                    if (local_3e8 != (undefined8 *)0x0) {
                      FUN_1400020a8();
                      puVar51 = local_478;
                    }
                  }
                  else {
                    local_638 = *(double *)((longlong)param_1 + 0xf0);
                    _local_618 = *(undefined1 (*) [16])((longlong)param_1 + 0xe0);
                    lVar54 = FUN_1401466c8(*(undefined8 *)((longlong)param_1 + 0x58),DAT_14c997500,
                                           DAT_14c9974a8);
                    puVar57 = local_650;
                    lVar42 = FUN_142a1c318(local_650,DAT_14c9968a0,DAT_14c9974a8);
                    FUN_1429fddac(&local_378,puVar57,uVar73);
                    lVar54 = *(longlong *)(lVar54 + 0x10);
                    local_668 = (undefined1  [8])(lVar55 * 3);
                    lVar43 = lVar55 * 0x60;
                    pdVar48 = (double *)(lVar54 + lVar43);
                    dVar136 = local_338._0_8_;
                    dVar97 = local_338._8_8_;
                    dVar161 = local_328._0_8_;
                    dVar99 = local_328._8_8_;
                    auVar82 = *(undefined1 (*) [16])(lVar54 + 0x40 + lVar43);
                    dVar130 = auVar82._0_8_;
                    dVar100 = auVar82._8_8_;
                    auVar132 = *(undefined1 (*) [16])(lVar54 + 0x50 + lVar43);
                    dVar81 = auVar132._0_8_;
                    auVar82 = minpd(auVar82,local_338);
                    auVar138 = minpd(auVar132,local_328);
                    auVar87._8_8_ = -(ulonglong)(auVar82._8_8_ < 0.0);
                    auVar87._0_8_ = -(ulonglong)(auVar82._0_8_ < 0.0);
                    iVar40 = movmskpd((int)lVar54,auVar87);
                    auVar102._8_8_ = -(ulonglong)(auVar138._8_8_ < 0.0);
                    auVar102._0_8_ = -(ulonglong)(auVar138._0_8_ < 0.0);
                    uVar59 = movmskpd((int)lVar43,auVar102);
                    if ((uVar59 & 0x3fffffff) == 0 && iVar40 == 0) {
                      dVar107 = *pdVar48;
                      dVar135 = pdVar48[1];
                      dVar109 = pdVar48[2];
                      dVar110 = pdVar48[3];
                      dVar116 = dVar135 * local_368 * -1.0 +
                                dVar109 * dStack_370 +
                                dVar110 * (double)local_378 * 1.0 + dVar107 * dStack_360;
                      dVar124 = dVar107 * local_368 * 1.0 +
                                dVar110 * dStack_370 +
                                dVar109 * (double)local_378 * -1.0 + dVar135 * dStack_360;
                      auVar151._0_8_ =
                           dVar110 * local_368 * 1.0 +
                           (((double)local_378 * dVar135 * 1.0 + dVar109 * dStack_360) -
                           dVar107 * dStack_370);
                      auVar151._8_8_ =
                           dVar109 * local_368 * -1.0 +
                           (((double)local_378 * dVar107 * -1.0 + dVar110 * dStack_360) -
                           dVar135 * dStack_370);
                      dVar153 = pdVar48[4] * dVar136;
                      dVar154 = pdVar48[5] * dVar97;
                      dVar149 = pdVar48[6] * dVar161;
                      dVar131 = pdVar48[7] * dVar99;
                      dVar107 = dVar154 * (double)local_378 - dStack_370 * dVar153;
                      dVar110 = dVar149 * dStack_370 - local_368 * dVar154;
                      dVar109 = dVar153 * local_368 - (double)local_378 * dVar149;
                      dVar135 = dVar131 * dStack_360 - dStack_360 * dVar131;
                      dVar110 = dVar110 + dVar110;
                      dVar109 = dVar109 + dVar109;
                      dVar107 = dVar107 + dVar107;
                      dVar135 = dVar135 + dVar135;
                      dVar130 = dVar130 * dVar136;
                      dVar100 = dVar100 * dVar97;
                      puVar51 = (undefined8 *)
                                ((dVar107 * dStack_370 - local_368 * dVar109) +
                                 dStack_360 * dVar110 + dVar153 + (double)local_358);
                      dVar136 = (dVar110 * local_368 - dVar107 * (double)local_378) +
                                dStack_360 * dVar109 + dVar154 + (double)plStack_350;
                      plVar118 = (longlong *)
                                 ((dVar109 * (double)local_378 - dStack_370 * dVar110) +
                                  dStack_360 * dVar107 + dVar149 + (double)local_348);
                      dVar97 = (dVar135 * dStack_360 - dVar135 * dStack_360) +
                               dStack_360 * dVar135 + dVar131 + dStack_340;
                      auVar169._8_8_ = auVar132._8_8_ * dVar99;
                      auVar169._0_8_ = dVar81 * dVar161;
                    }
                    else {
                      dVar107 = dStack_370 + dStack_370;
                      dVar135 = local_368 + local_368;
                      dVar110 = (double)local_378 * ((double)local_378 + (double)local_378);
                      dVar109 = ((double)local_378 + (double)local_378) * dStack_360;
                      local_608._8_8_ = dVar99 * auVar132._8_8_;
                      local_608._0_8_ = dVar161 * dVar81;
                      local_178 = (double *)
                                  ((1.0 - (local_368 * dVar135 + dStack_370 * dVar107)) * dVar136);
                      uStack_170 = (undefined1 *)
                                   ((dVar107 * (double)local_378 + dVar135 * dStack_360) * dVar136);
                      local_148 = (longlong *)((dVar135 * dStack_370 + dVar109) * dVar97);
                      local_168._8_8_ = 0;
                      local_168._0_8_ =
                           ((double)local_378 * dVar135 - dVar107 * dStack_360) * dVar136;
                      local_158._8_8_ = (1.0 - (local_368 * dVar135 + dVar110)) * dVar97;
                      local_158._0_8_ =
                           (dVar107 * (double)local_378 - dVar135 * dStack_360) * dVar97;
                      dStack_140 = 0.0;
                      local_138._8_8_ = (dVar135 * dStack_370 - dVar109) * dVar161;
                      local_138._0_8_ =
                           (dVar107 * dStack_360 + (double)local_378 * dVar135) * dVar161;
                      local_128._8_8_ = 0;
                      local_128._0_8_ = (1.0 - (dVar110 + dStack_370 * dVar107)) * dVar161;
                      local_118 = local_358;
                      plStack_110 = plStack_350;
                      local_108 = local_348;
                      uStack_100 = 0x3ff0000000000000;
                      dVar99 = *pdVar48;
                      dVar107 = pdVar48[1];
                      dVar135 = pdVar48[2];
                      dVar109 = dVar107 + dVar107;
                      dVar110 = dVar135 + dVar135;
                      dVar149 = dVar99 * (dVar99 + dVar99);
                      local_1a8 = (1.0 - (dVar149 + dVar107 * dVar109)) * dVar81;
                      dVar161 = pdVar48[3];
                      dVar116 = dVar110 * dVar161;
                      dVar124 = (dVar99 + dVar99) * pdVar48[3];
                      dVar161 = dVar109 * dVar161;
                      local_5e8 = dVar136 * dVar130;
                      dStack_5e0 = dVar97 * dVar100;
                      local_1e8 = (*pdVar48 * dVar110 - dVar161) * dVar130;
                      local_1f8._8_8_ = (dVar109 * dVar99 + dVar116) * dVar130;
                      local_1f8._0_8_ = (1.0 - (dVar135 * dVar110 + dVar107 * dVar109)) * dVar130;
                      dStack_1e0 = 0.0;
                      local_1d8._8_8_ = (1.0 - (dVar135 * dVar110 + dVar149)) * dVar100;
                      local_1d8._0_8_ = (dVar109 * dVar99 - dVar116) * dVar100;
                      local_1c8._8_8_ = 0;
                      local_1c8._0_8_ = (dVar110 * dVar107 + dVar124) * dVar100;
                      local_1b8._8_8_ = (dVar110 * dVar107 - dVar124) * dVar81;
                      local_1b8._0_8_ = (dVar161 + *pdVar48 * dVar110) * dVar81;
                      uStack_1a0 = 0;
                      local_198 = (undefined8 *)pdVar48[4];
                      dStack_190 = pdVar48[5];
                      local_188 = (longlong *)pdVar48[6];
                      uStack_180 = 0x3ff0000000000000;
                      FUN_1447fea8d(local_2f8,local_1f8,&local_178);
                      dVar100 = dStack_5e0;
                      dVar130 = local_5e8;
                      auVar169 = local_608;
                      auVar82 = _DAT_149934d80;
                      dVar136 = (double)local_2e8._0_8_ * (double)local_2e8._0_8_ +
                                (double)local_2f8._0_8_ * (double)local_2f8._0_8_ +
                                (double)local_2f8._8_8_ * (double)local_2f8._8_8_;
                      dVar161 = (double)local_2c8 * (double)local_2c8 +
                                (double)local_2d8 * (double)local_2d8 + dStack_2d0 * dStack_2d0;
                      dVar81 = (double)local_2a8._0_8_ * (double)local_2a8._0_8_ +
                               (double)local_2b8._0_8_ * (double)local_2b8._0_8_ +
                               (double)local_2b8._8_8_ * (double)local_2b8._8_8_;
                      uVar78 = -(ulonglong)(0.0 <= dVar136 + -9.99999993922529e-09);
                      dVar136 = (double)(~uVar78 & 0x3ff0000000000000 |
                                        (ulonglong)(1.0 / SQRT(dVar136)) & uVar78);
                      uVar78 = -(ulonglong)(0.0 <= dVar161 + -9.99999993922529e-09);
                      dVar161 = (double)(~uVar78 & 0x3ff0000000000000 |
                                        (ulonglong)(1.0 / SQRT(dVar161)) & uVar78);
                      uVar78 = -(ulonglong)(0.0 <= dVar81 + -9.99999993922529e-09);
                      dVar81 = (double)(~uVar78 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar81)) & uVar78);
                      auVar88._8_8_ = -(ulonglong)(0.0 <= dStack_5e0);
                      auVar88._0_8_ = -(ulonglong)(0.0 <= local_5e8);
                      auVar132 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar88);
                      uVar78 = -(ulonglong)(0.0 <= local_608._0_8_);
                      dVar97 = (double)(~uVar78 & 0xbff0000000000000 | uVar78 & 0x3ff0000000000000);
                      dVar99 = auVar132._0_8_;
                      local_2f8._8_8_ = (double)local_2f8._8_8_ * dVar136 * dVar99;
                      local_2f8._0_8_ = (double)local_2f8._0_8_ * dVar136 * dVar99;
                      local_2e8._0_8_ = dVar136 * (double)local_2e8._0_8_ * dVar99;
                      dVar136 = auVar132._8_8_;
                      local_2c8 = (longlong *)(dVar161 * (double)local_2c8 * dVar136);
                      dStack_2d0 = dStack_2d0 * dVar161 * dVar136;
                      local_2d8 = (undefined8 *)(dVar136 * (double)local_2d8 * dVar161);
                      local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar81 * dVar97;
                      local_2b8._0_8_ = dVar97 * (double)local_2b8._0_8_ * dVar81;
                      local_2a8._0_8_ = dVar81 * (double)local_2a8._0_8_ * dVar97;
                      puVar57 = local_3d8;
                      pdVar48 = (double *)FUN_14481fd10(puVar57,local_2f8);
                      iVar40 = (int)puVar57;
                      dVar136 = local_3c8 * local_3c8 +
                                (double)local_3d8._0_8_ * (double)local_3d8._0_8_;
                      dVar161 = dStack_3c0 * dStack_3c0 +
                                (double)local_3d8._8_8_ * (double)local_3d8._8_8_;
                      auVar112._0_8_ = dVar136 + dVar161;
                      auVar112._8_8_ = dVar136 + dVar161;
                      auVar89._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar112._8_8_);
                      auVar89._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar112._0_8_);
                      auVar132 = sqrtpd(auVar112,auVar112);
                      auVar82 = divpd(auVar82,auVar132);
                      auVar121._0_8_ = auVar82._0_8_ * local_3c8;
                      auVar121._8_8_ = auVar82._8_8_ * dStack_3c0;
                      dVar116 = (double)((ulonglong)((double)local_3d8._0_8_ * auVar82._0_8_) &
                                        -(ulonglong)(9.99999993922529e-09 <= auVar112._0_8_));
                      dVar124 = (double)((ulonglong)((double)local_3d8._8_8_ * auVar82._8_8_) &
                                        -(ulonglong)(9.99999993922529e-09 <= auVar112._8_8_));
                      auVar151 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar121,auVar89);
                      dVar97 = 0.0;
                      plVar118 = local_288;
                      puVar51 = local_298;
                      dVar136 = dStack_290;
                    }
                    auVar82 = *(undefined1 (*) [16])((longlong)param_1 + 0xe0);
                    dVar161 = auVar82._0_8_;
                    dVar99 = auVar82._8_8_;
                    auVar132 = *(undefined1 (*) [16])((longlong)param_1 + 0xf0);
                    dVar81 = auVar132._0_8_;
                    dVar107 = auVar132._8_8_;
                    auVar103._8_8_ = dVar100;
                    auVar103._0_8_ = dVar130;
                    auVar82 = minpd(auVar103,auVar82);
                    dVar110 = auVar169._0_8_;
                    auVar132 = minpd(auVar169,auVar132);
                    auVar104._8_8_ = -(ulonglong)(auVar82._8_8_ < 0.0);
                    auVar104._0_8_ = -(ulonglong)(auVar82._0_8_ < 0.0);
                    iVar66 = movmskpd((int)pdVar48,auVar104);
                    auVar113._8_8_ = -(ulonglong)(auVar132._8_8_ < 0.0);
                    auVar113._0_8_ = -(ulonglong)(auVar132._0_8_ < 0.0);
                    uVar59 = movmskpd(iVar40,auVar113);
                    dVar135 = auVar151._0_8_;
                    dVar109 = auVar151._8_8_;
                    if ((uVar59 & 0x3fffffff) == 0 && iVar66 == 0) {
                      dVar13 = SUB168(*(undefined1 (*) [16])((longlong)param_1 + 0xa0),0);
                      dVar15 = SUB168(*(undefined1 (*) [16])((longlong)param_1 + 0xa0),8);
                      dVar17 = *(double *)((longlong)param_1 + 0xb0);
                      dVar25 = *(double *)((longlong)param_1 + 0xb8);
                      dVar149 = *(double *)((longlong)param_1 + 0xb8);
                      dVar131 = *(double *)((longlong)param_1 + 0xb8);
                      dVar153 = *(double *)((longlong)param_1 + 0xa0);
                      dVar154 = *(double *)((longlong)param_1 + 0xa0);
                      dVar14 = (double)DAT_149931170;
                      dVar16 = DAT_149931170._8_8_;
                      dVar160 = *(double *)((longlong)param_1 + 0xa8);
                      dVar155 = *(double *)((longlong)param_1 + 0xa8);
                      dVar162 = *(double *)((longlong)param_1 + 0xb0);
                      dVar168 = *(double *)((longlong)param_1 + 0xb0);
                      local_178 = (double *)
                                  (dVar124 * dVar162 * -1.0 +
                                  dVar135 * dVar160 + dVar109 * dVar153 * dVar14 + dVar116 * dVar149
                                  );
                      uStack_170 = (undefined1 *)
                                   (dVar116 * dVar168 * 1.0 +
                                   dVar109 * dVar155 +
                                   dVar135 * dVar154 * dVar16 + dVar124 * dVar131);
                      local_168._0_8_ =
                           dVar109 * dVar162 * dVar14 +
                           ((dVar153 * dVar124 * dVar14 + dVar135 * dVar149) - dVar116 * dVar160);
                      local_168._8_8_ =
                           dVar135 * dVar168 * dVar16 +
                           ((dVar154 * dVar116 * dVar16 + dVar109 * dVar131) - dVar124 * dVar155);
                      dVar116 = (double)puVar51 * dVar161;
                      dVar136 = dVar136 * dVar99;
                      dVar124 = (double)plVar118 * dVar81;
                      dVar97 = dVar97 * dVar107;
                      dVar153 = dVar136 * dVar13 - dVar116 * dVar15;
                      dVar154 = dVar124 * dVar15 - dVar136 * dVar17;
                      dVar135 = dVar116 * dVar17 - dVar124 * dVar13;
                      dVar109 = dVar97 * dVar25 - dVar97 * dVar25;
                      dVar154 = dVar154 + dVar154;
                      dVar135 = dVar135 + dVar135;
                      dVar153 = dVar153 + dVar153;
                      dVar109 = dVar109 + dVar109;
                      dVar130 = dVar130 * dVar161;
                      dVar100 = dVar100 * dVar99;
                      local_158._0_8_ =
                           (dVar153 * dVar15 - dVar17 * dVar135) + dVar149 * dVar154 + dVar116 +
                           *(double *)((longlong)param_1 + 0xc0);
                      local_158._8_8_ =
                           (dVar154 * dVar17 - dVar153 * dVar13) + dVar131 * dVar135 + dVar136 +
                           *(double *)((longlong)param_1 + 200);
                      local_148 = (longlong *)
                                  ((dVar135 * dVar13 - dVar15 * dVar154) +
                                   dVar149 * dVar153 + dVar124 +
                                  *(double *)((longlong)param_1 + 0xd0));
                      dStack_140 = (dVar109 * dVar25 - dVar109 * dVar25) +
                                   dVar131 * dVar109 + dVar97 +
                                   *(double *)((longlong)param_1 + 0xd8);
                      auVar172._8_8_ = auVar169._8_8_ * dVar107;
                      auVar172._0_8_ = dVar110 * dVar81;
                      local_608 = auVar169;
                    }
                    else {
                      local_608._8_8_ = auVar169._8_8_ * dVar107;
                      local_608._0_8_ = dVar110 * dVar81;
                      dVar149 = *(double *)((longlong)param_1 + 0xa0);
                      dVar131 = *(double *)((longlong)param_1 + 0xa8);
                      dVar107 = *(double *)((longlong)param_1 + 0xb0);
                      dVar153 = dVar131 + dVar131;
                      dVar154 = dVar107 + dVar107;
                      dVar168 = dVar149 * (dVar149 + dVar149);
                      dVar162 = *(double *)((longlong)param_1 + 0xa0) * dVar154;
                      dVar97 = *(double *)((longlong)param_1 + 0xb8);
                      dVar155 = dVar154 * dVar97;
                      dVar160 = (dVar149 + dVar149) * *(double *)((longlong)param_1 + 0xb8);
                      dVar97 = dVar153 * dVar97;
                      local_5e8 = dVar130 * dVar161;
                      dStack_5e0 = dVar100 * dVar99;
                      local_178 = (double *)
                                  ((1.0 - (dVar107 * dVar154 + dVar131 * dVar153)) * dVar161);
                      dVar107 = (1.0 - (dVar107 * dVar154 + dVar168)) * dVar99;
                      uStack_170 = (undefined1 *)((dVar153 * dVar149 + dVar155) * dVar161);
                      local_148 = (longlong *)((dVar154 * dVar131 + dVar160) * dVar99);
                      local_168._8_8_ = 0;
                      local_168._0_8_ = (dVar162 - dVar97) * dVar161;
                      local_158._8_4_ = SUB84(dVar107,0);
                      local_158._0_8_ = (dVar153 * dVar149 - dVar155) * dVar99;
                      local_158._12_4_ = (int)((ulonglong)dVar107 >> 0x20);
                      dStack_140 = 0.0;
                      local_138._8_8_ = (dVar154 * dVar131 - dVar160) * dVar81;
                      local_138._0_8_ = (dVar97 + dVar162) * dVar81;
                      local_128._8_8_ = 0;
                      local_128._0_8_ = (1.0 - (dVar168 + dVar131 * dVar153)) * dVar81;
                      local_118 = *(longlong **)((longlong)param_1 + 0xc0);
                      plStack_110 = *(longlong **)((longlong)param_1 + 200);
                      local_108 = *(longlong **)((longlong)param_1 + 0xd0);
                      uStack_100 = 0x3ff0000000000000;
                      dVar97 = dVar124 + dVar124;
                      dVar99 = dVar135 + dVar135;
                      dVar161 = dVar116 * (dVar116 + dVar116);
                      local_1a8 = (1.0 - (dVar161 + dVar124 * dVar97)) * dVar110;
                      dVar107 = (dVar116 + dVar116) * dVar109;
                      dVar81 = (dVar99 * dVar124 - dVar107) * dVar110;
                      local_1e8 = (dVar116 * dVar99 - dVar97 * dVar109) * dVar130;
                      local_1f8._8_8_ = (dVar97 * dVar116 + dVar99 * dVar109) * dVar130;
                      local_1f8._0_8_ = (1.0 - (dVar135 * dVar99 + dVar124 * dVar97)) * dVar130;
                      dStack_1e0 = 0.0;
                      local_1d8._8_8_ = (1.0 - (dVar135 * dVar99 + dVar161)) * dVar100;
                      local_1d8._0_8_ = (dVar97 * dVar116 - dVar99 * dVar109) * dVar100;
                      local_1c8._8_8_ = 0;
                      local_1c8._0_8_ = (dVar99 * dVar124 + dVar107) * dVar100;
                      local_1b8._8_4_ = SUB84(dVar81,0);
                      local_1b8._0_8_ = (dVar116 * dVar99 + dVar97 * dVar109) * dVar110;
                      local_1b8._12_4_ = (int)((ulonglong)dVar81 >> 0x20);
                      uStack_1a0 = 0;
                      uStack_180 = 0x3ff0000000000000;
                      local_198 = puVar51;
                      dStack_190 = dVar136;
                      local_188 = plVar118;
                      FUN_1447fea8d(local_2f8,local_1f8,&local_178);
                      dVar100 = dStack_5e0;
                      dVar130 = local_5e8;
                      auVar172 = local_608;
                      auVar82 = _DAT_149934d80;
                      local_630 = (double)local_2e8._0_8_;
                      dVar136 = (double)local_2e8._0_8_ * (double)local_2e8._0_8_ +
                                (double)local_2f8._0_8_ * (double)local_2f8._0_8_ +
                                (double)local_2f8._8_8_ * (double)local_2f8._8_8_;
                      dVar81 = (double)local_2c8 * (double)local_2c8 +
                               (double)local_2d8 * (double)local_2d8 + dStack_2d0 * dStack_2d0;
                      dVar97 = (double)local_2a8._0_8_ * (double)local_2a8._0_8_ +
                               (double)local_2b8._0_8_ * (double)local_2b8._0_8_ +
                               (double)local_2b8._8_8_ * (double)local_2b8._8_8_;
                      uVar78 = -(ulonglong)(0.0 <= dVar136 + -9.99999993922529e-09);
                      dVar161 = (double)(~uVar78 & 0x3ff0000000000000 |
                                        (ulonglong)(1.0 / SQRT(dVar136)) & uVar78);
                      uVar78 = -(ulonglong)(0.0 <= dVar81 + -9.99999993922529e-09);
                      dVar81 = (double)(~uVar78 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar81)) & uVar78);
                      uVar78 = -(ulonglong)(0.0 <= dVar97 + -9.99999993922529e-09);
                      dVar97 = (double)(~uVar78 & 0x3ff0000000000000 |
                                       (ulonglong)(1.0 / SQRT(dVar97)) & uVar78);
                      auVar90._8_8_ = -(ulonglong)(0.0 <= dStack_5e0);
                      auVar90._0_8_ = -(ulonglong)(0.0 <= local_5e8);
                      auVar132 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar90);
                      uVar78 = -(ulonglong)(0.0 <= local_608._0_8_);
                      dVar136 = (double)(~uVar78 & 0xbff0000000000000 | uVar78 & 0x3ff0000000000000)
                      ;
                      dVar99 = auVar132._0_8_;
                      local_2f8._8_8_ = (double)local_2f8._8_8_ * dVar161 * dVar99;
                      local_2f8._0_8_ = (double)local_2f8._0_8_ * dVar161 * dVar99;
                      local_2e8._0_8_ = dVar161 * (double)local_2e8._0_8_ * dVar99;
                      dVar161 = auVar132._8_8_;
                      local_2c8 = (longlong *)(dVar81 * (double)local_2c8 * dVar161);
                      dStack_2d0 = dStack_2d0 * dVar81 * dVar161;
                      local_2d8 = (undefined8 *)(dVar161 * (double)local_2d8 * dVar81);
                      local_2b8._8_8_ = (double)local_2b8._8_8_ * dVar97 * dVar136;
                      local_2b8._0_8_ = dVar136 * (double)local_2b8._0_8_ * dVar97;
                      local_2a8._0_8_ = dVar97 * (double)local_2a8._0_8_ * dVar136;
                      FUN_14481fd10(local_3d8,local_2f8);
                      dVar136 = local_3c8 * local_3c8 +
                                (double)local_3d8._0_8_ * (double)local_3d8._0_8_;
                      dVar161 = dStack_3c0 * dStack_3c0 +
                                (double)local_3d8._8_8_ * (double)local_3d8._8_8_;
                      auVar122._0_8_ = dVar136 + dVar161;
                      auVar122._8_8_ = dVar136 + dVar161;
                      auVar91._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar122._8_8_);
                      auVar91._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar122._0_8_);
                      auVar132 = sqrtpd(auVar122,auVar122);
                      auVar82 = divpd(auVar82,auVar132);
                      auVar127._0_8_ = auVar82._0_8_ * local_3c8;
                      auVar127._8_8_ = auVar82._8_8_ * dStack_3c0;
                      local_178 = (double *)
                                  ((ulonglong)((double)local_3d8._0_8_ * auVar82._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar122._0_8_));
                      uStack_170 = (undefined1 *)
                                   ((ulonglong)((double)local_3d8._8_8_ * auVar82._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar122._8_8_));
                      local_168 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar127,auVar91);
                      dStack_140 = 0.0;
                      local_148 = local_288;
                      local_158._0_8_ = local_298;
                      local_158._8_8_ = dStack_290;
                    }
                    local_138._8_4_ = SUB84(dVar100,0);
                    local_138._0_8_ = dVar130;
                    local_138._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
                    local_478 = (undefined8 *)0x3fd3333333333333;
                    uStack_454 = uStack_1fc;
                    uStack_464 = uStack_20c;
                    uStack_460 = local_208;
                    uStack_45c = uStack_204;
                    uStack_458 = uStack_200;
                    local_450 = 0;
                    local_448 = local_618;
                    uStack_440 = dStack_610;
                    local_438 = local_638;
                    local_430 = 0x100;
                    local_42a = local_2fa;
                    local_42e = local_2fe;
                    dStack_470 = (double)CONCAT17(dStack_470._7_1_,0x10100000064);
                    local_468 = *(undefined4 *)((longlong)param_1 + 400);
                    lVar54 = CONCAT44(uStack_1fc,uStack_200);
                    local_128 = auVar172;
                    if (lVar54 != 0) {
                      dVar161 = (double)*(uint *)(lVar54 + 0x18);
                      dVar136 = (double)*(float *)((longlong)param_1 + 0x30c) * dVar161;
                      if (dVar161 <= dVar136) {
                        dVar136 = dVar161;
                      }
                      dVar161 = 0.0;
                      if (0.0 <= dVar136) {
                        dVar161 = dVar136;
                      }
                      *(int *)(lVar54 + 0x18) = (int)dVar161;
                      iVar40 = *(int *)(lVar54 + 0x10);
                      if ((longlong)iVar40 != 0) {
                        lVar54 = *(longlong *)(lVar54 + 8);
                        lVar43 = 0;
                        do {
                          plVar118 = *(longlong **)(lVar54 + lVar43);
                          if (plVar118 != (longlong *)0x0) {
                            (**(code **)(*plVar118 + 8))(plVar118,(int)dVar161);
                          }
                          lVar43 = lVar43 + 8;
                        } while ((longlong)iVar40 * 8 != lVar43);
                      }
                    }
                    FUN_140757a08(local_2f8,local_650);
                    if (dStack_290 == 0.0) {
                      bVar71 = false;
                    }
                    else {
                      lVar54 = (longlong)dStack_290 + 0x10;
                      if (*(longlong *)((longlong)dStack_290 + 0x20) != 0) {
                        lVar54 = *(longlong *)((longlong)dStack_290 + 0x20);
                      }
                      uVar59 = uVar73 + 0x1f;
                      if (-1 < (int)uVar73) {
                        uVar59 = uVar73;
                      }
                      bVar71 = (*(uint *)(lVar54 + (longlong)((int)uVar59 >> 5) * 4) >>
                                (uVar73 & 0x1f) & 1) != 0;
                    }
                    local_430 = CONCAT11(local_430._1_1_,bVar71);
                    local_3e8 = (undefined8 *)0x0;
                    lVar54 = (longlong)(int)local_568._8_4_;
                    uVar69 = local_568._0_8_;
                    local_3e0 = local_568._8_4_;
                    if (lVar54 == 0) {
                      local_3dc = 0;
                    }
                    else {
                      FUN_140509e62(&local_3e8,local_568._8_4_,0);
                      memcpy(local_3e8,(void *)uVar69,lVar54 << 3);
                    }
                    auVar70 = local_668;
                    local_6a8 = (double **)(lVar55 * 8 + *(longlong *)(lVar42 + 0x10));
                    lVar54 = *(longlong *)((longlong)param_1 + 0x6b8);
                    if (*(longlong *)((longlong)param_1 + 0x6b8) == 0) {
                      lVar54 = local_5d8;
                    }
                    uVar59 = uVar73 + 0x1f;
                    if (-1 < (int)uVar73) {
                      uVar59 = uVar73;
                    }
                    uVar80 = 0;
                    if ((*(uint *)(lVar54 + (longlong)((int)uVar59 >> 5) * 4) >> (uVar73 & 0x1f) & 1
                        ) == 0) {
                      uVar80 = *(undefined4 *)((longlong)param_1 + 0x184);
                    }
                    local_698 = (double **)&local_580;
                    local_6a0 = &local_178;
                    pdVar48 = (double *)
                              FUN_1429c0b5e(*(longlong *)
                                             (*(longlong *)((longlong)param_1 + 8) + 0x9c8) + 0x448,
                                            uVar80,&local_3e8,&local_478);
                    dVar136 = *(double *)
                               (*(longlong *)((longlong)*pdVar48 + 0x3c8) +
                               (longlong)*(int *)(pdVar48 + 1) * 8);
                    if ((dVar136 == 0.0) && (!NAN(dVar136))) {
                      *(byte *)(*(longlong *)((longlong)param_1 + 0x730) + lVar55) =
                           *(char *)(*(longlong *)((longlong)*pdVar48 + 0x2c0) + 0xb +
                                    (longlong)*(int *)(pdVar48 + 1) * 0x10) == '\x03' | 2;
                    }
                    lVar42 = FUN_14061a004(*(undefined8 *)((longlong)param_1 + 0x58),DAT_14c997508,
                                           DAT_14c9974a8);
                    lVar54 = FUN_1429aa594(*(undefined8 *)((longlong)param_1 + 0x58),DAT_14c997510,
                                           DAT_14c9974a8);
                    fVar129 = *(float *)((longlong)param_1 + 0x1bc);
                    uVar59 = DAT_1499319a0;
                    lVar54 = *(longlong *)(lVar54 + 0x10);
                    fVar79 = *(float *)(lVar54 + (longlong)auVar70 * 4);
                    fVar147 = *(float *)(lVar54 + 4 + (longlong)auVar70 * 4);
                    fVar125 = *(float *)(lVar54 + 8 + (longlong)auVar70 * 4);
                    fVar146 = (float)((uint)(float)*(double *)((longlong)param_1 + 0xf0) & uVar59);
                    fVar117 = (float)((uint)(float)*(double *)((longlong)param_1 + 0xe8) & uVar59);
                    fVar98 = (float)((uint)(float)*(double *)((longlong)param_1 + 0xe0) & uVar59);
                    fVar108 = (fVar79 + fVar147 + fVar125) * 0.5;
                    fVar125 = (fVar108 - fVar125) * fVar146 * fVar146;
                    fVar147 = (fVar108 - fVar147) * fVar117 * fVar117;
                    fVar79 = (fVar108 - fVar79) * fVar98 * fVar98;
                    fVar146 = fVar98 * fVar117 * fVar146;
                    local_3f0 = fVar146 * (fVar79 + fVar147) * fVar129;
                    local_670 = *(undefined4 *)((longlong)param_1 + 0x30c);
                    local_680 = *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x730) + lVar55);
                    local_3f8 = CONCAT44((fVar125 + fVar79) * fVar146 * fVar129,
                                         (fVar147 + fVar125) * fVar146 * fVar129);
                    local_698 = (double **)
                                (double)(float)((uint)((float)(*(double *)((longlong)param_1 + 0xe0)
                                                               * *(double *)
                                                                  ((longlong)param_1 + 0xe8) *
                                                              *(double *)((longlong)param_1 + 0xf0))
                                                       * fVar129 *
                                                      *(float *)(*(longlong *)(lVar42 + 0x10) +
                                                                lVar55 * 4)) & uVar59);
                    local_408 = (double *)*local_5b8;
                    uStack_400 = local_5b8[1];
                    local_418 = *local_5c0;
                    local_420 = 0;
                    local_688 = &local_178;
                    local_690 = &local_3f8;
                    local_6a0 = &local_408;
                    local_6a8 = (double **)local_418;
                    local_678 = 0;
                    FUN_142a13b4a(pdVar48,local_5c8,0,&local_420);
                    *(double **)
                     (*(longlong *)((longlong)param_1 + 0x330) +
                     (longlong)*(int *)(*(longlong *)((longlong)param_1 + 0x410) + lVar55 * 4) * 8)
                         = pdVar48;
                    uVar59 = *(uint *)((longlong)param_1 + 0x1b8);
                    if (0xffffff < uVar59) {
                      lVar54 = *(longlong *)((longlong)param_1 + 8);
                      uVar75 = uVar59 & 0xffffff;
                      if ((int)uVar75 < *(int *)(lVar54 + 0xb58)) {
                        lVar42 = lVar54 + 0xb40;
                        if (*(longlong *)(lVar54 + 0xb50) != 0) {
                          lVar42 = *(longlong *)(lVar54 + 0xb50);
                        }
                        if ((((*(uint *)(lVar42 + (ulonglong)(uVar75 >> 5) * 4) >> (uVar59 & 0x1f) &
                              1) != 0) &&
                            ((uVar59 ^ *(uint *)(*(longlong *)(lVar54 + 0xb30) +
                                                (ulonglong)uVar75 * 4)) < 0x1000000)) &&
                           (lVar54 = (ulonglong)(uVar75 << 7) + *(longlong *)(lVar54 + 0xb60),
                           lVar54 != 0)) {
                          *(undefined8 *)
                           (*(longlong *)((longlong)*pdVar48 + 0x410) +
                           (longlong)*(int *)(pdVar48 + 1) * 8) = *(undefined8 *)(lVar54 + 0x20);
                          *(undefined8 *)
                           (*(longlong *)((longlong)*pdVar48 + 0x428) +
                           (longlong)*(int *)(pdVar48 + 1) * 8) = *(undefined8 *)(lVar54 + 0x28);
                        }
                      }
                    }
                    lVar54 = *(longlong *)((longlong)*pdVar48 + 0xf8) +
                             (longlong)*(int *)(pdVar48 + 1) * 0x18;
                    lVar42 = *(longlong *)(lVar54 + 8);
                    if (*(longlong *)(lVar54 + 8) == 0) {
                      lVar42 = lVar54;
                    }
                    iVar40 = *(int *)(lVar54 + 0x10);
                    if ((longlong)iVar40 != 0) {
                      lVar54 = 0;
                      do {
                        lVar43 = *(longlong *)(lVar42 + lVar54);
                        uVar80 = *(undefined4 *)((longlong)param_1 + 0x1b8);
                        uVar59 = *(uint *)(lVar43 + 8);
                        if ((uVar59 & 3) == 0) {
                          local_1f8._0_4_ = uVar80;
                          local_6a0 = (double **)local_1f8;
                          local_6a8 = (double **)CONCAT44(local_6a8._4_4_,uVar59 >> 3);
                          FUN_1401c2fdc(lVar43 + 0x80,CONCAT71((int7)((ulonglong)local_6a0 >> 8),1),
                                        lVar43 + 0xc,*(undefined8 *)(lVar43 + 0x48));
                        }
                        else {
                          if ((uVar59 & 4) == 0) {
                            local_668 = param_1;
                            plVar118 = *(longlong **)(lVar43 + 0x78);
                            if (plVar118 != (longlong *)0x0) {
                              if (plVar118[6] != 0) {
                                FUN_1400020a8();
                              }
                              if (plVar118[4] != 0) {
                                FUN_1400020a8();
                              }
                              if (plVar118[2] != 0) {
                                FUN_1400020a8();
                              }
                              if (*plVar118 != 0) {
                                FUN_1400020a8();
                              }
                              FUN_1400020a8(plVar118);
                              uVar59 = *(uint *)(lVar43 + 8);
                            }
                            *(uint *)(lVar43 + 8) = uVar59 | 4;
                            param_1 = local_668;
                          }
                          *(undefined4 *)(lVar43 + 0x78) = uVar80;
                        }
                        lVar54 = lVar54 + 8;
                      } while ((longlong)iVar40 * 8 != lVar54);
                    }
                    uVar78 = (ulonglong)uVar73;
                    FUN_1429fddac(local_1f8,local_650);
                    if ((int)local_568._8_4_ < 1) {
                      iVar40 = 0x7fffffff;
                    }
                    else {
                      iVar40 = 0x7fffffff;
                      lVar54 = 0;
                      do {
                        plVar118 = *(longlong **)(local_568._0_8_ + lVar54 * 8);
                        *(double **)
                         (*(longlong *)((longlong)param_1 + 0x330) +
                         (longlong)
                         *(int *)(*(longlong *)((longlong)param_1 + 0x410) +
                                 (longlong)*(int *)(local_578._0_8_ + lVar54 * 4) * 4) * 8) =
                             pdVar48;
                        uVar78 = *(ulonglong *)(*plVar118 + 0x2c0);
                        iVar66 = *(int *)(uVar78 + (longlong)(int)plVar118[1] * 0x10);
                        if (iVar66 < iVar40) {
                          iVar40 = iVar66;
                        }
                        lVar54 = lVar54 + 1;
                      } while (lVar54 < (int)local_568._8_4_);
                    }
                    *(int *)(*(longlong *)((longlong)*pdVar48 + 0x2c0) +
                            (longlong)*(int *)(pdVar48 + 1) * 0x10) = iVar40;
                    lVar54 = *(longlong *)
                              (*(longlong *)((longlong)*pdVar48 + 0x60) +
                              (longlong)*(int *)(pdVar48 + 1) * 8);
                    puVar51 = local_3e8;
                    if ((lVar54 != 0) && (*(char *)(lVar54 + 0x1a) == '\x01')) {
                      *(undefined1 *)
                       (*(longlong *)((longlong)*pdVar48 + 0x158) + (longlong)*(int *)(pdVar48 + 1))
                           = 1;
                      plVar118 = *(longlong **)
                                  (*(longlong *)((longlong)*pdVar48 + 0x60) +
                                  (longlong)*(int *)(pdVar48 + 1) * 8);
                      (**(code **)(*plVar118 + 0x80))(plVar118,local_3d8);
                      lVar54 = *(longlong *)((longlong)*pdVar48 + 0x110);
                      lVar42 = (longlong)*(int *)(pdVar48 + 1) * 0x30;
                      *(double *)(lVar54 + 0x10 + lVar42) = local_3c8;
                      *(undefined8 *)(lVar54 + lVar42) = local_3d8._0_8_;
                      ((undefined8 *)(lVar54 + lVar42))[1] = local_3d8._8_8_;
                      pdVar2 = (double *)(lVar54 + 0x18 + lVar42);
                      *pdVar2 = dStack_3c0;
                      pdVar2[1] = (double)local_3b8;
                      *(longlong **)(lVar54 + 0x28 + lVar42) = plStack_3b0;
                      dVar136 = *pdVar48;
                      lVar55 = (longlong)*(int *)(pdVar48 + 1);
                      lVar54 = *(longlong *)((longlong)dVar136 + 0x48);
                      lVar42 = lVar55 * 0x10;
                      dStack_3c0 = (double)*(float *)(lVar54 + 0xc + lVar42);
                      local_3c8 = (double)*(float *)(lVar54 + 8 + lVar42);
                      local_3d8._0_8_ = (undefined8)*(float *)(lVar54 + lVar42);
                      local_3d8._8_8_ = (double)*(float *)(lVar54 + 4 + lVar42);
                      lVar43 = lVar55 * 0x18;
                      puVar51 = (undefined8 *)(*(longlong *)((longlong)dVar136 + 0x28) + lVar43);
                      local_3b8 = (longlong *)*puVar51;
                      plStack_3b0 = (longlong *)puVar51[1];
                      local_3a8._8_8_ = 0;
                      local_3a8._0_8_ =
                           *(ulonglong *)(*(longlong *)((longlong)dVar136 + 0x28) + 0x10 + lVar43);
                      local_398 = 1.0;
                      dStack_390 = 1.0;
                      local_388 = 1.0;
                      dStack_380 = 0.0;
                      lVar54 = *(longlong *)((longlong)dVar136 + 0xf8);
                      iVar40 = *(int *)(lVar54 + 0x10 + lVar43);
                      lVar42 = *(longlong *)(lVar54 + 8 + lVar43);
                      lVar54 = lVar54 + lVar43;
                      if (lVar42 != 0) {
                        lVar54 = lVar42;
                      }
                      if ((longlong)iVar40 < 1) {
                        auVar133 = ZEXT416(0);
                        uVar69 = 0;
                        uVar64 = 0;
                        uVar163 = 0;
                        uVar45 = 0;
                        dVar81 = 0.0;
                        dVar130 = 0.0;
                        dVar161 = 0.0;
                        if (iVar40 != 0) goto LAB_142a196b1;
                      }
                      else {
                        auVar133 = ZEXT816(0xffefffffffffffff);
                        uVar64 = 0x7fefffffffffffff;
LAB_142a196b1:
                        lVar42 = 0;
                        auVar157._8_8_ = 0;
                        auVar157._0_8_ = uVar64;
                        auVar166._8_8_ = 0;
                        auVar166._0_8_ = uVar64;
                        auVar142._8_8_ = 0;
                        auVar142._0_8_ = uVar64;
                        auVar148 = auVar133;
                        auVar152 = auVar133;
                        do {
                          lVar43 = *(longlong *)(lVar54 + lVar42);
                          if ((*(byte *)(lVar43 + 8) & 3) == 0) {
                            FUN_146e22506(lVar43,local_3d8);
                          }
                          else {
                            FUN_1447269c8(lVar43,local_3d8);
                          }
                          lVar43 = *(longlong *)(lVar54 + lVar42);
                          if (*(double *)(lVar43 + 0x28) <= auVar157._0_8_) {
                            auVar157._0_8_ = *(double *)(lVar43 + 0x28);
                          }
                          uVar45 = auVar157._0_8_;
                          if (*(double *)(lVar43 + 0x20) <= auVar166._0_8_) {
                            auVar166._0_8_ = *(double *)(lVar43 + 0x20);
                          }
                          uVar163 = auVar166._0_8_;
                          if (*(double *)(lVar43 + 0x18) <= auVar142._0_8_) {
                            auVar142._0_8_ = *(double *)(lVar43 + 0x18);
                          }
                          uVar69 = auVar142._0_8_;
                          if (auVar133._0_8_ <= *(double *)(lVar43 + 0x40)) {
                            auVar133._0_8_ = *(double *)(lVar43 + 0x40);
                          }
                          if (auVar148._0_8_ <= *(double *)(lVar43 + 0x38)) {
                            auVar148._0_8_ = *(double *)(lVar43 + 0x38);
                          }
                          if (auVar152._0_8_ <= *(double *)(lVar43 + 0x30)) {
                            auVar152._0_8_ = *(double *)(lVar43 + 0x30);
                          }
                          lVar42 = lVar42 + 8;
                        } while ((longlong)iVar40 * 8 != lVar42);
                        dVar81 = auVar152._0_8_ + 0.0;
                        dVar130 = auVar148._0_8_ + 0.0;
                        dVar161 = auVar133._0_8_ + 0.0;
                      }
                      lVar54 = *(longlong *)((longlong)dVar136 + 0x140);
                      lVar55 = lVar55 * 0x30;
                      *(undefined8 *)(lVar54 + lVar55) = uVar69;
                      *(undefined8 *)(lVar54 + 8 + lVar55) = uVar163;
                      *(undefined8 *)(lVar54 + 0x10 + lVar55) = uVar45;
                      *(double *)(lVar54 + 0x18 + lVar55) = dVar81;
                      *(double *)(lVar54 + 0x20 + lVar55) = dVar130;
                      *(double *)(lVar54 + 0x28 + lVar55) = dVar161;
                      lVar54 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x9c8);
                      bVar53 = *(byte *)((longlong)pdVar48 + 0xc);
                      lVar42 = CONCAT71((int7)(uVar78 >> 8),1 < bVar53);
                      dVar136 = *pdVar48;
                      lVar43 = (longlong)*(int *)(pdVar48 + 1);
                      puVar51 = local_3e8;
                      if ((pdVar48 == (double *)0x0 || 1 >= bVar53) ||
                         (lVar42 = lVar43 * 0x10,
                         *(char *)(*(longlong *)((longlong)dVar136 + 0x2c0) + 0xd + lVar42) !=
                         '\x01')) {
LAB_142a1980e:
                        if ((*(char *)(*(longlong *)((longlong)dVar136 + 0xe0) + lVar43) != '\0') ||
                           (DAT_14c9978a0 != 0)) {
                          uVar80 = *(undefined4 *)
                                    (*(longlong *)((longlong)dVar136 + 0x80) + lVar43 * 4);
                          puVar49 = (undefined8 *)
                                    FUN_1447eab44(lVar54 + 0x360,uVar80,
                                                  CONCAT71((int7)((ulonglong)lVar42 >> 8),1));
                          *(undefined1 *)(puVar49 + 8) = 2;
                          local_5e8 = *pdVar48;
                          lVar55 = (longlong)*(int *)(pdVar48 + 1);
                          lVar42 = *(longlong *)((longlong)local_5e8 + 0xf8) + lVar55 * 0x18;
                          lVar43 = *(longlong *)(lVar42 + 8);
                          if (*(longlong *)(lVar42 + 8) == 0) {
                            lVar43 = lVar42;
                          }
                          local_638 = (double)CONCAT44(local_638._4_4_,uVar80);
                          local_608._0_8_ = lVar55;
                          if ((longlong)*(int *)(lVar42 + 0x10) == 0) {
                            local_630._0_4_ = 0;
                            uVar41 = 0;
                            auVar37._12_4_ = 0;
                            auVar37._0_12_ = stack0xfffffffffffff9ec;
                            _local_618 = auVar37 << 0x20;
                            auVar38._12_4_ = 0;
                            auVar38._0_12_ = stack0xfffffffffffff99c;
                            _local_668 = auVar38 << 0x20;
                            uVar59 = 0;
                            uVar77 = 0;
                            uVar75 = 0;
                            uVar73 = 0;
                          }
                          else {
                            lVar63 = (longlong)*(int *)(lVar42 + 0x10) * 8;
                            lVar42 = 0;
                            auVar30._12_4_ = 0;
                            auVar30._0_12_ = stack0xfffffffffffff99c;
                            _local_668 = auVar30 << 0x20;
                            auVar31._12_4_ = 0;
                            auVar31._0_12_ = stack0xfffffffffffff9ec;
                            _local_618 = auVar31 << 0x20;
                            uVar41 = 0;
                            local_630._0_4_ = 0;
                            do {
                              lVar11 = *(longlong *)(lVar43 + lVar42);
                              if ((lVar11 != 0) &&
                                 ((*(byte *)(lVar11 + 0x71 +
                                            (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0) * 8) & 2)
                                  != 0)) {
                                uVar78 = (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0);
                                uVar41 = uVar41 | *(uint *)(lVar11 + 0x48 + uVar78 * 8);
                                local_618._0_4_ =
                                     local_618._0_4_ | *(uint *)(lVar11 + 0x4c + uVar78 * 8);
                                local_668._0_4_ =
                                     local_668._0_4_ | *(uint *)(lVar11 + 0x50 + uVar78 * 8);
                                local_630._0_4_ =
                                     local_630._0_4_ | *(uint *)(lVar11 + 0x54 + uVar78 * 8);
                              }
                              lVar42 = lVar42 + 8;
                            } while (lVar63 != lVar42);
                            lVar42 = 0;
                            uVar59 = 0;
                            uVar77 = 0;
                            uVar75 = 0;
                            uVar73 = 0;
                            do {
                              lVar11 = *(longlong *)(lVar43 + lVar42);
                              if ((lVar11 != 0) &&
                                 ((*(byte *)(lVar11 + 0x71 +
                                            (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0) * 8) & 5)
                                  != 0)) {
                                uVar78 = (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0);
                                uVar59 = uVar59 | *(uint *)(lVar11 + 0x58 + uVar78 * 8);
                                uVar77 = uVar77 | *(uint *)(lVar11 + 0x5c + uVar78 * 8);
                                uVar75 = uVar75 | *(uint *)(lVar11 + 0x60 + uVar78 * 8);
                                uVar73 = uVar73 | *(uint *)(lVar11 + 100 + uVar78 * 8);
                              }
                              lVar42 = lVar42 + 8;
                            } while (lVar63 != lVar42);
                          }
                          uVar10 = *(undefined4 *)
                                    (*(longlong *)((longlong)local_5e8 + 0x80) + lVar55 * 4);
                          *puVar49 = *(undefined8 *)
                                      (*(longlong *)((longlong)local_5e8 + 0xb0) + lVar55 * 8);
                          puVar49[1] = pdVar48;
                          *(undefined4 *)(puVar49 + 2) = uVar10;
                          *(uint *)((longlong)puVar49 + 0x14) = uVar41;
                          *(undefined4 *)(puVar49 + 3) = local_618._0_4_;
                          *(undefined4 *)((longlong)puVar49 + 0x1c) = local_668._0_4_;
                          *(uint *)(puVar49 + 4) = local_630._0_4_;
                          *(uint *)((longlong)puVar49 + 0x24) = uVar59;
                          *(uint *)(puVar49 + 5) = uVar77;
                          *(uint *)((longlong)puVar49 + 0x2c) = uVar75;
                          *(uint *)(puVar49 + 6) = uVar73;
                          *(undefined1 *)((longlong)puVar49 + 0x34) = 1;
                          *(undefined2 *)(puVar49 + 7) =
                               *(undefined2 *)
                                (*(longlong *)((longlong)*pdVar48 + 0x170) +
                                (longlong)*(int *)(pdVar48 + 1) * 2);
                          puVar50 = (undefined8 *)FUN_1447eab44(lVar54 + 0x380,uVar80);
                          for (lVar54 = 9; puVar51 = local_3e8, lVar54 != 0; lVar54 = lVar54 + -1) {
                            *puVar50 = *puVar49;
                            puVar49 = puVar49 + 1;
                            puVar50 = puVar50 + 1;
                          }
                        }
                      }
                      else if ((2 < bVar53) &&
                              ((plVar118 = *(longlong **)
                                            (*(longlong *)((longlong)dVar136 + 0x5a8) + lVar42),
                               plVar118 != (longlong *)0x0 &&
                               (2 < *(byte *)((longlong)plVar118 + 0xc))))) {
                        if (((*(byte *)(*(longlong *)(*plVar118 + 0x680) +
                                       (longlong)(int)plVar118[1]) & 1) != 0) &&
                           (lVar42 = *(longlong *)((longlong)dVar136 + 200),
                           *(longlong *)
                            (*(longlong *)(*plVar118 + 200) + (longlong)(int)plVar118[1] * 8) ==
                           *(longlong *)(lVar42 + lVar43 * 8))) goto LAB_142a1980e;
                      }
                    }
                  }
                  if (puVar51 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_628 != (undefined1  [8])0x0) {
                    *(undefined1 (*) [8])
                     (*(longlong *)((longlong)*pdVar48 + 0xb0) + (longlong)*(int *)(pdVar48 + 1) * 8
                     ) = local_628;
                  }
                  if ((longlong)(int)local_578._8_4_ != 0) {
                    lVar54 = 0;
                    iVar40 = 0;
                    do {
                      lVar42 = (longlong)
                               *(int *)(*(longlong *)((longlong)param_1 + 0x410) +
                                       (longlong)*(int *)(local_578._0_8_ + lVar54) * 4);
                      if (lVar42 != -1) {
                        plVar118 = *(longlong **)(local_568._0_8_ + (longlong)iVar40 * 8);
                        if (*(byte *)((longlong)plVar118 + 0xc) < 3) {
                          plVar118 = (longlong *)0x0;
                        }
                        iVar40 = iVar40 + 1;
                        *(undefined8 *)(*(longlong *)((longlong)param_1 + 800) + lVar42 * 8) =
                             *(undefined8 *)
                              (*(longlong *)(*plVar118 + 0x5a8) + (longlong)(int)plVar118[1] * 0x10)
                        ;
                      }
                      lVar54 = lVar54 + 4;
                    } while ((longlong)(int)local_578._8_4_ * 4 != lVar54);
                  }
                  *(undefined8 *)(*(longlong *)((longlong)param_1 + 800) + (longlong)local_648 * 8)
                       = *(undefined8 *)
                          (*(longlong *)((longlong)*pdVar48 + 0x5a8) +
                          (longlong)*(int *)(pdVar48 + 1) * 0x10);
                  *(double **)(*(longlong *)((longlong)param_1 + 0x330) + (longlong)local_648 * 8) =
                       pdVar48;
                  *(double **)(*(longlong *)((longlong)param_1 + 0x340) + (longlong)local_648 * 8) =
                       pdVar48;
                  local_2f8._8_8_ = &local_57c;
                  local_2f8._0_8_ = &local_178;
                  puVar57 = local_2f8;
                  local_178 = pdVar48;
                  FUN_140b47de6(local_5b0,local_1f8,puVar57);
                  *(undefined1 (*) [8])
                   (*(longlong *)((longlong)*pdVar48 + 200) + (longlong)*(int *)(pdVar48 + 1) * 8) =
                       param_1;
                  lVar54 = *(longlong *)(local_480 + 0x9c8);
                  bVar53 = *(byte *)((longlong)pdVar48 + 0xc);
                  lVar42 = CONCAT71((int7)((ulonglong)puVar57 >> 8),1 < bVar53);
                  dVar136 = *pdVar48;
                  lVar43 = (longlong)*(int *)(pdVar48 + 1);
                  if ((pdVar48 == (double *)0x0 || 1 >= bVar53) ||
                     (lVar42 = lVar43 * 0x10,
                     *(char *)(*(longlong *)((longlong)dVar136 + 0x2c0) + 0xd + lVar42) != '\x01'))
                  {
LAB_142a19bf7:
                    if ((*(char *)(*(longlong *)((longlong)dVar136 + 0xe0) + lVar43) != '\0') ||
                       (DAT_14c9978a0 != 0)) {
                      uVar80 = *(undefined4 *)(*(longlong *)((longlong)dVar136 + 0x80) + lVar43 * 4)
                      ;
                      puVar51 = (undefined8 *)
                                FUN_1447eab44(lVar54 + 0x360,uVar80,
                                              CONCAT71((int7)((ulonglong)lVar42 >> 8),1));
                      *(undefined1 *)(puVar51 + 8) = 2;
                      local_638 = *pdVar48;
                      iVar40 = *(int *)(pdVar48 + 1);
                      lVar55 = (longlong)iVar40;
                      lVar42 = *(longlong *)((longlong)local_638 + 0xf8) + lVar55 * 0x18;
                      lVar43 = *(longlong *)(lVar42 + 8);
                      if (*(longlong *)(lVar42 + 8) == 0) {
                        lVar43 = lVar42;
                      }
                      local_668._0_4_ = uVar80;
                      local_618 = (undefined1  [8])lVar55;
                      if ((longlong)*(int *)(lVar42 + 0x10) == 0) {
                        uVar41 = 0;
                        auVar35._12_4_ = 0;
                        auVar35._0_12_ = stack0xfffffffffffff9dc;
                        _local_628 = auVar35 << 0x20;
                        auVar36._12_4_ = 0;
                        auVar36._0_12_ = stack0xfffffffffffff9bc;
                        _local_648 = auVar36 << 0x20;
                        local_608._0_4_ = 0;
                        uVar59 = 0;
                        uVar77 = 0;
                        uVar75 = 0;
                        uVar73 = 0;
                      }
                      else {
                        lVar63 = (longlong)*(int *)(lVar42 + 0x10) * 8;
                        lVar42 = 0;
                        local_608._0_4_ = 0;
                        auVar32._12_4_ = 0;
                        auVar32._0_12_ = stack0xfffffffffffff9bc;
                        _local_648 = auVar32 << 0x20;
                        auVar33._12_4_ = 0;
                        auVar33._0_12_ = stack0xfffffffffffff9dc;
                        _local_628 = auVar33 << 0x20;
                        uVar41 = 0;
                        do {
                          lVar11 = *(longlong *)(lVar43 + lVar42);
                          if ((lVar11 != 0) &&
                             ((*(byte *)(lVar11 + 0x71 +
                                        (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0) * 8) & 2) != 0
                             )) {
                            uVar78 = (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0);
                            uVar41 = uVar41 | *(uint *)(lVar11 + 0x48 + uVar78 * 8);
                            local_628._0_4_ =
                                 local_628._0_4_ | *(uint *)(lVar11 + 0x4c + uVar78 * 8);
                            local_648._0_4_ =
                                 local_648._0_4_ | *(uint *)(lVar11 + 0x50 + uVar78 * 8);
                            local_608._0_4_ =
                                 local_608._0_4_ | *(uint *)(lVar11 + 0x54 + uVar78 * 8);
                          }
                          lVar42 = lVar42 + 8;
                        } while (lVar63 != lVar42);
                        lVar42 = 0;
                        uVar59 = 0;
                        uVar77 = 0;
                        uVar75 = 0;
                        uVar73 = 0;
                        do {
                          lVar11 = *(longlong *)(lVar43 + lVar42);
                          if ((lVar11 != 0) &&
                             ((*(byte *)(lVar11 + 0x71 +
                                        (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0) * 8) & 5) != 0
                             )) {
                            uVar78 = (ulonglong)((*(uint *)(lVar11 + 8) & 3) == 0);
                            uVar73 = uVar73 | *(uint *)(lVar11 + 0x58 + uVar78 * 8);
                            uVar75 = uVar75 | *(uint *)(lVar11 + 0x5c + uVar78 * 8);
                            uVar77 = uVar77 | *(uint *)(lVar11 + 0x60 + uVar78 * 8);
                            uVar59 = uVar59 | *(uint *)(lVar11 + 100 + uVar78 * 8);
                          }
                          lVar42 = lVar42 + 8;
                        } while (lVar63 != lVar42);
                      }
                      uVar10 = *(undefined4 *)
                                (*(longlong *)((longlong)local_638 + 0x80) + lVar55 * 4);
                      *puVar51 = *(undefined8 *)
                                  (*(longlong *)((longlong)local_638 + 0xb0) + lVar55 * 8);
                      puVar51[1] = pdVar48;
                      *(undefined4 *)(puVar51 + 2) = uVar10;
                      *(uint *)((longlong)puVar51 + 0x14) = uVar41;
                      *(undefined4 *)(puVar51 + 3) = local_628._0_4_;
                      *(undefined4 *)((longlong)puVar51 + 0x1c) = local_648._0_4_;
                      *(undefined4 *)(puVar51 + 4) = local_608._0_4_;
                      *(uint *)((longlong)puVar51 + 0x24) = uVar73;
                      *(uint *)(puVar51 + 5) = uVar75;
                      *(uint *)((longlong)puVar51 + 0x2c) = uVar77;
                      *(uint *)(puVar51 + 6) = uVar59;
                      *(undefined1 *)((longlong)puVar51 + 0x34) = 1;
                      *(undefined2 *)(puVar51 + 7) =
                           *(undefined2 *)
                            (*(longlong *)((longlong)*pdVar48 + 0x170) +
                            (longlong)*(int *)(pdVar48 + 1) * 2);
                      puVar49 = (undefined8 *)
                                FUN_1447eab44(lVar54 + 0x380,uVar80,
                                              CONCAT71((int7)(int3)((uint)iVar40 >> 8),1));
                      for (lVar54 = 9; lVar54 != 0; lVar54 = lVar54 + -1) {
                        *puVar49 = *puVar51;
                        puVar51 = puVar51 + 1;
                        puVar49 = puVar49 + 1;
                      }
                    }
                  }
                  else if ((2 < bVar53) &&
                          ((plVar118 = *(longlong **)
                                        (*(longlong *)((longlong)dVar136 + 0x5a8) + lVar42),
                           plVar118 != (longlong *)0x0 && (2 < *(byte *)((longlong)plVar118 + 0xc)))
                          )) {
                    if (((*(byte *)(*(longlong *)(*plVar118 + 0x680) + (longlong)(int)plVar118[1]) &
                         1) != 0) &&
                       (lVar42 = *(longlong *)((longlong)dVar136 + 200),
                       *(longlong *)
                        (*(longlong *)(*plVar118 + 200) + (longlong)(int)plVar118[1] * 8) ==
                       *(longlong *)(lVar42 + lVar43 * 8))) goto LAB_142a19bf7;
                  }
                  lVar54 = local_658;
                  puVar44 = local_5f8;
                  puVar72 = local_5f0;
                  if ((*(byte *)((longlong)param_1 + 0x1c0) & 1) == 0) {
                    FUN_1456cc230(*(undefined8 *)(*(longlong *)(local_480 + 0x9c8) + 0x2c8),pdVar48,
                                  1);
                    lVar54 = local_658;
                    puVar44 = local_5f8;
                    puVar72 = local_5f0;
                  }
                }
              }
            }
            puVar72 = puVar72 + 1;
          } while (puVar72 != puVar44);
        }
      }
      FUN_140b35cce(local_2f8,lVar54);
      if ((((dStack_290 == 0.0) || (local_258 == 0)) || (DAT_14c997580 != '\0')) ||
         (cVar39 = FUN_146e9aa00(local_2f8), cVar39 == '\0')) {
        iVar40 = *(int *)((longlong)param_1 + 0x304);
        if (0 < iVar40) {
          lVar42 = 0;
          lVar54 = local_658;
          do {
            if ((*(int *)(*(longlong *)(lVar54 + 0x1b0) +
                         (longlong)*(int *)(*(longlong *)((longlong)param_1 + 0x400) + lVar42 * 4) *
                         4) == 2) &&
               (lVar43 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x340) + lVar42 * 8),
               lVar43 != 0)) {
              local_148 = DAT_14c846510;
              dStack_140 = DAT_14c846518;
              local_178 = (double *)0x3fd3333333333333;
              uStack_170 = (undefined1 *)CONCAT17(uStack_170._7_1_,0x1010100000064);
              local_158 = ZEXT816(0);
              local_138._8_2_ = 0x100;
              local_138._0_8_ = DAT_14c846520;
              local_168._0_4_ = *(undefined4 *)((longlong)param_1 + 400);
              local_168._8_8_ = (double)*(float *)((longlong)param_1 + 0x194);
              FUN_1409ee4e2(*(longlong *)(local_480 + 0x9c8) + 0x448,lVar43,&local_178);
              iVar40 = *(int *)((longlong)param_1 + 0x304);
              lVar54 = local_658;
            }
            lVar42 = lVar42 + 1;
          } while (lVar42 < iVar40);
          if ((0 < iVar40) && (*(char *)((longlong)param_1 + 399) == '\x01')) {
            lVar54 = 0;
            do {
              plVar118 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x340) + lVar54 * 8);
              if (plVar118 != (longlong *)0x0) {
                lVar42 = (longlong)(int)plVar118[1] * 0x10;
                lVar43 = (longlong)*(int *)(*(longlong *)(*plVar118 + 0x668) + 8 + lVar42);
                if (lVar43 != 0) {
                  lVar42 = *(longlong *)(*(longlong *)(*plVar118 + 0x668) + lVar42);
                  lVar55 = 0;
                  do {
                    plVar12 = *(longlong **)(lVar42 + lVar55);
                    if (plVar12 != (longlong *)0x0) {
                      uVar80 = FUN_142a1e4fe((longlong)(int)plVar118[1] * 0x30 +
                                             *(longlong *)(*plVar118 + 0x140),
                                             (longlong)(int)plVar12[1] * 0x30 +
                                             *(longlong *)(*plVar12 + 0x140));
                      *(undefined4 *)(lVar42 + 8 + lVar55) = uVar80;
                    }
                    lVar55 = lVar55 + 0x10;
                  } while (lVar43 * 0x10 != lVar55);
                  iVar40 = *(int *)((longlong)param_1 + 0x304);
                }
              }
              lVar54 = lVar54 + 1;
            } while (lVar54 < iVar40);
          }
        }
      }
      else if (((dStack_290 != 0.0) && (local_258 != 0)) &&
              (uVar73 = FUN_1401f66f6(puStack_2c0,DAT_14c996660), 0 < (int)uVar73)) {
        uVar78 = 0;
        do {
          if (local_220 == 0) {
            fVar129 = 0.0;
          }
          else {
            fVar129 = *(float *)(*(longlong *)(local_220 + 0x10) + uVar78 * 4);
          }
          lVar54 = (longlong)
                   *(int *)(*(longlong *)((longlong)param_1 + 0x410) +
                           (longlong)
                           *(int *)(*(longlong *)((longlong)dStack_290 + 0x10) + uVar78 * 4) * 4);
          if ((lVar54 != -1) &&
             (iVar40 = *(int *)(*(longlong *)((longlong)param_1 + 0x410) +
                               (longlong)*(int *)(*(longlong *)(local_258 + 0x10) + uVar78 * 4) * 4)
             , iVar40 != -1)) {
            plVar118 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x340) + lVar54 * 8);
            if ((plVar118 != (longlong *)0x0) &&
               (plVar12 = *(longlong **)
                           (*(longlong *)((longlong)param_1 + 0x340) + (longlong)iVar40 * 8),
               plVar12 != (longlong *)0x0)) {
              lVar54 = *plVar118;
              lVar42 = (longlong)(int)plVar118[1];
              if (local_220 == 0) {
                fVar129 = (*(float *)(*(longlong *)(lVar54 + 0x650) + lVar42 * 4) +
                          *(float *)(*(longlong *)(*plVar12 + 0x650) + (longlong)(int)plVar12[1] * 4
                                    )) * 0.5;
                if (*(char *)((longlong)param_1 + 399) == '\x01') {
                  fVar129 = (float)FUN_142a1e4fe(lVar42 * 0x30 + *(longlong *)(lVar54 + 0x140),
                                                 (longlong)(int)plVar12[1] * 0x30 +
                                                 *(longlong *)(*plVar12 + 0x140));
                }
              }
              lVar54 = *(longlong *)(lVar54 + 0x668);
              lVar42 = lVar42 * 0x10;
              iVar40 = *(int *)(lVar54 + 8 + lVar42);
              *(uint *)(lVar54 + 8 + lVar42) = iVar40 + 1U;
              if (*(uint *)(lVar54 + 0xc + lVar42) < iVar40 + 1U) {
                FUN_141725732((longlong *)(lVar54 + lVar42),iVar40);
              }
              lVar54 = *(longlong *)(lVar54 + lVar42);
              *(longlong **)(lVar54 + (longlong)iVar40 * 0x10) = plVar12;
              *(float *)(lVar54 + 8 + (longlong)iVar40 * 0x10) = fVar129;
              lVar54 = *(longlong *)(*plVar12 + 0x668);
              lVar42 = (longlong)(int)plVar12[1] * 0x10;
              iVar40 = *(int *)(lVar54 + 8 + lVar42);
              *(uint *)(lVar54 + 8 + lVar42) = iVar40 + 1U;
              if (*(uint *)(lVar54 + 0xc + lVar42) < iVar40 + 1U) {
                FUN_141725732((longlong *)(lVar54 + lVar42),iVar40);
              }
              lVar54 = *(longlong *)(lVar54 + lVar42);
              *(longlong **)(lVar54 + (longlong)iVar40 * 0x10) = plVar118;
              *(float *)(lVar54 + 8 + (longlong)iVar40 * 0x10) = fVar129;
            }
          }
          uVar78 = uVar78 + 1;
        } while (uVar73 != uVar78);
      }
      if (local_578._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_568._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_558._0_8_ != 0) {
        FUN_1400020a8();
      }
      if (local_548 != (uint *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((*(char *)((longlong)param_1 + 0x18c) == '\x01') ||
       ((*(char *)((longlong)param_1 + 0x18c) == '\x04' &&
        ((*(byte *)((longlong)param_1 + 0x1c0) & 0x20) == 0)))) {
      FUN_1417306bc(param_1,local_480);
    }
    uVar62 = 0;
    if ((*(byte *)((longlong)param_1 + 0x1c2) & 1) != 0) {
      uVar62 = DAT_14c997530 ^ 1;
    }
    FUN_1401c0b60(local_650,local_2f8);
    iVar40 = *(int *)((longlong)param_1 + 0x348);
    if (0 < iVar40) {
      lVar54 = 0;
      do {
        plVar118 = *(longlong **)(*(longlong *)((longlong)param_1 + 0x340) + lVar54 * 8);
        if (plVar118 != (longlong *)0x0) {
          if (*(int *)((longlong)param_1 + 0x1e4) < 0) {
            bVar71 = false;
          }
          else {
            bVar71 = *(int *)((longlong)param_1 + 0x1e4) <= *(int *)(local_2c8[2] + lVar54 * 4);
          }
          lVar42 = (longlong)(int)plVar118[1] * 0x10;
          *(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) =
               *(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) & 0xfffe | uVar62;
          lVar42 = (longlong)(int)plVar118[1] * 0x10;
          *(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) =
               *(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) & 0xff1f |
               (ushort)(byte)(*(int *)((longlong)param_1 + 0x1e0) << 5);
          lVar42 = (longlong)(int)plVar118[1] * 0x10;
          *(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) =
               *(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) & 0xfffd |
               *(byte *)((longlong)param_1 + 0x1c2) >> 1 & 2;
          lVar42 = (longlong)(int)plVar118[1] * 0x10;
          *(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) =
               *(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) & 0xfdff |
               (*(byte *)((longlong)param_1 + 0x1c2) & 8) << 6;
          bVar53 = *(byte *)((longlong)param_1 + 0x1c6);
          bVar61 = *(byte *)((longlong)param_1 + 0x1c5);
          bVar65 = (byte)*(undefined4 *)((longlong)param_1 + 0x1c4);
          if (0x7e < bVar65) {
            bVar65 = 0x7f;
          }
          if (0x7e < bVar61) {
            bVar61 = 0x7f;
          }
          if (0x7e < bVar53) {
            bVar53 = 0x7f;
          }
          lVar42 = *(longlong *)(*plVar118 + 0x500);
          lVar43 = (longlong)(int)plVar118[1] * 3;
          *(byte *)(lVar42 + lVar43) = bVar65;
          *(byte *)(lVar42 + 1 + lVar43) = bVar61;
          *(byte *)(lVar42 + 2 + lVar43) = bVar53;
          lVar42 = (longlong)(int)plVar118[1] * 0x10;
          *(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) =
               (*(ushort *)(*(longlong *)(*plVar118 + 0x2c0) + 8 + lVar42) & 0xfffb) +
               (ushort)bVar71 * 4;
          lVar42 = *plVar118;
          lVar43 = (longlong)(int)plVar118[1];
          uVar9 = *(ushort *)(*(longlong *)(lVar42 + 0x2c0) + 8 + lVar43 * 0x10);
          if (((*(byte *)((longlong)param_1 + 0x1c2) & 2) != 0) != SUB41((uVar9 & 0x10) >> 4,0)) {
            *(ushort *)(*(longlong *)(lVar42 + 0x2c0) + lVar43 * 0x10 + 8) =
                 uVar9 & 0xffef | (*(byte *)((longlong)param_1 + 0x1c2) & 2) << 3;
            pbVar52 = (byte *)(*(longlong *)(*plVar118 + 0x2c0) + 10 +
                              (longlong)(int)plVar118[1] * 0x10);
            *pbVar52 = *pbVar52 | 1;
            lVar42 = *plVar118;
            lVar43 = (longlong)(int)plVar118[1];
          }
          *(double *)(*(longlong *)(lVar42 + 0x410) + lVar43 * 8) =
               (double)*(float *)((longlong)param_1 + 0x1d0);
          *(double *)(*(longlong *)(*plVar118 + 0x428) + (longlong)(int)plVar118[1] * 8) =
               (double)*(float *)((longlong)param_1 + 0x1d4);
          *(undefined4 *)(*(longlong *)(*plVar118 + 0x470) + (longlong)(int)plVar118[1] * 4) =
               *(undefined4 *)((longlong)param_1 + 0x1d8);
          *(undefined4 *)(*(longlong *)(*plVar118 + 0x488) + (longlong)(int)plVar118[1] * 4) =
               *(undefined4 *)((longlong)param_1 + 0x1dc);
          iVar40 = *(int *)((longlong)param_1 + 0x348);
        }
        lVar54 = lVar54 + 1;
      } while (lVar54 < iVar40);
    }
    FUN_141730a34(param_1);
    FUN_14173072a(param_1,local_480);
    if (((*(byte *)((longlong)param_1 + 0x319) & 2) != 0) || (DAT_14c997680 == '\x01')) {
      FUN_140498ea8(local_650,DAT_14c9968a0,DAT_14c9974a8);
    }
    if (local_538 != 0) {
      FUN_1400020a8();
    }
    if (local_528 != 0) {
      FUN_1400020a8();
    }
    if (local_518 != 0) {
      FUN_1400020a8();
    }
    if (local_498 != (longlong **)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_6c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a1c318 FUN_142a1c318 body=227 status=ok
// SIG undefined FUN_142a1c318(void)

undefined8 FUN_142a1c318(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      do {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        lVar1 = 0;
      } while (iVar4 != -1);
      goto LAB_142a1c3e2;
    }
  }
  lVar1 = 0;
LAB_142a1c3e2:
  return *(undefined8 *)(lVar1 + 0x30);
}



// FUNCTION 142a1c3fc FUN_142a1c3fc body=8449 status=ok
// SIG undefined FUN_142a1c3fc(void)

void FUN_142a1c3fc(longlong param_1,longlong param_2,byte param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  double *pdVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  char cVar16;
  byte bVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  ulonglong *puVar23;
  uint *puVar24;
  longlong *plVar25;
  longlong *plVar26;
  undefined1 *puVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  undefined1 uVar33;
  longlong lVar34;
  byte bVar35;
  longlong lVar36;
  uint *puVar37;
  longlong lVar38;
  longlong lVar39;
  ulonglong uVar40;
  int *piVar41;
  longlong lVar42;
  undefined1 auStack_3b8 [32];
  uint **local_398;
  undefined4 *local_390;
  uint **local_388;
  undefined4 *local_380;
  byte local_371;
  longlong local_370;
  uint *local_368;
  longlong *local_360;
  ulonglong local_358;
  uint *local_350;
  longlong local_348;
  longlong local_340;
  longlong *local_338;
  uint *local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined8 local_318;
  uint *local_308;
  double dStack_300;
  double local_2f8;
  uint *local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_288;
  longlong local_280;
  uint *local_278;
  int local_270;
  uint local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  longlong local_258;
  undefined8 uStack_250;
  uint *local_248;
  double dStack_240;
  double local_238;
  undefined8 local_228;
  int iStack_220;
  uint uStack_21c;
  undefined4 local_208;
  undefined4 uStack_204;
  int iStack_200;
  uint auStack_1fc [5];
  undefined1 local_1e8 [64];
  longlong local_1a8;
  undefined4 local_1a0;
  undefined8 *local_198;
  longlong *local_168;
  ulonglong uStack_160;
  undefined1 local_158 [16];
  longlong local_148;
  undefined4 local_140;
  uint local_13c;
  undefined4 uStack_138;
  int local_134;
  undefined1 local_130 [8];
  undefined1 *local_128;
  int local_120;
  undefined **local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  longlong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  local_371 = param_3;
  local_370 = param_2;
  puVar21 = (undefined8 *)FUN_14172f29e();
  local_108 = *puVar21;
  uStack_100 = puVar21[1];
  local_f8 = 0xffffffff;
  local_110 = &PTR_FUN_149f6aff0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0x3ff0000000000000;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_148 = 0;
  local_140 = 0;
  local_168 = (longlong *)0x0;
  uStack_160 = 0;
  local_13c = 0x80;
  uStack_138 = 0xffffffff;
  local_134 = 0;
  local_128 = (undefined1 *)0x0;
  local_120 = 0;
  plVar26 = *(longlong **)(param_1 + 0x310);
  if (plVar26 == (longlong *)0x0) {
    plVar26 = (longlong *)FUN_14001cc68(0x110);
    memset(plVar26,0,0x110);
    *(longlong **)(param_1 + 0x310) = plVar26;
  }
  uVar32 = (ulonglong)*(uint *)(plVar26 + 1);
  if (((uVar32 == 0) || (*(char *)(local_370 + 0x220) != '\0')) ||
     (*(int *)(*(longlong *)(param_1 + 0x688) + 200) == 0)) {
    local_120 = 0;
  }
  else {
    local_258 = 0;
    uStack_250 = 0;
    if ((int)*(uint *)(plVar26 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar32);
    }
    local_348 = param_1 + 0x5d0;
    FUN_14481578e(&local_258,uVar32);
    local_25c = 3;
    local_260 = 6;
    local_264 = 5;
    local_268 = 2;
    local_338 = plVar26 + 2;
    plVar1 = plVar26 + 8;
    local_350 = (uint *)(plVar26 + 0x16);
    local_330 = (uint *)(plVar26 + 0x12);
    local_340 = param_1 + 0x388;
    local_368 = (uint *)(plVar26 + 0x1a);
    uVar31 = 0;
    local_360 = plVar26;
    local_358 = uVar32;
    do {
      uVar30 = *plVar26 + uVar31 * 200;
      iVar18 = (**(code **)(**(longlong **)(*plVar26 + 8 + uVar31 * 200) + 8))();
      if (iVar18 == 2) {
        uVar20 = *(uint *)(uVar30 + 0x58);
        if (uVar20 < 0x11) {
          uVar19 = 0x18002;
          goto LAB_142a1c67f;
        }
LAB_142a1c809:
        if (uVar20 - 0x11 < 2) goto LAB_142a1c688;
      }
      else {
        iVar18 = (**(code **)(**(longlong **)(uVar30 + 8) + 8))();
        if (iVar18 != 3) {
          iVar18 = (**(code **)(**(longlong **)(uVar30 + 8) + 8))();
          uVar20 = *(uint *)(uVar30 + 0x58);
          if ((iVar18 == 4) && (uVar20 < 0x14)) {
            uVar19 = 0x80060;
            goto LAB_142a1c67f;
          }
          goto LAB_142a1c809;
        }
        uVar20 = *(uint *)(uVar30 + 0x58);
        if (10 < uVar20) goto LAB_142a1c809;
        uVar19 = 0x718;
LAB_142a1c67f:
        if ((uVar19 >> (uVar20 & 0x1f) & 1) == 0) goto LAB_142a1c809;
LAB_142a1c688:
        local_380 = &local_268;
        local_388 = (uint **)&local_264;
        local_390 = &local_260;
        local_398 = (uint **)&local_25c;
        cVar16 = FUN_142a23f8f(param_1,local_370,uVar30,local_338);
        if (cVar16 != '\0') {
          FUN_1407225a4(&local_208,local_338,uVar30 + 0x78,
                        *(double *)(local_370 + 0x1f8) - (double)*(float *)(uVar30 + 0x18));
          iVar18 = (**(code **)(**(longlong **)(uVar30 + 8) + 8))();
          if (iVar18 == 2) {
            uVar20 = *(uint *)(plVar26 + 3);
            uVar40 = (ulonglong)uVar20;
            iVar18 = (int)plVar26[0x1b];
            if (iVar18 < (int)uVar20) {
              *(uint *)(plVar26 + 0x1b) = uVar20;
              if ((uint)(*(int *)((longlong)plVar26 + 0xdc) - iVar18) < uVar20 - iVar18) {
                FUN_1446f48e2();
              }
              memset((void *)((longlong)iVar18 * 4 + *(longlong *)local_368),0,
                     (longlong)(int)(uVar20 - iVar18) << 2);
            }
            else {
              if ((int)uVar20 < 0) {
LAB_142a1e4e2:
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(uVar40);
              }
              if ((int)uVar20 < iVar18) {
                *(uint *)(plVar26 + 0x1b) = uVar20;
              }
            }
            uVar32 = local_358;
            if (0 < (int)uVar20) {
              uVar22 = 0;
              do {
                *(undefined4 *)(*(longlong *)local_368 + uVar22 * 4) = 0;
                uVar22 = uVar22 + 1;
              } while (uVar40 != uVar22);
            }
            local_26c = *(uint *)(plVar26 + 0x1b);
            local_270 = 0;
            local_278 = local_368;
            if (*(int *)(uVar30 + 0x58) == 1) {
              FUN_142a247a1(plVar1,&local_208);
              (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                        (*(longlong **)(uVar30 + 8),&local_208,&local_278);
              FUN_140676024(&local_2e8);
              if (*(char *)(local_198 + 1) == '\0') {
                local_228 = (uint *)CONCAT44(uStack_204,local_208);
                iStack_220 = iStack_200;
                uStack_21c = auStack_1fc[0];
              }
              else {
                local_228 = (uint *)local_198[2];
                iStack_220 = 0;
                uStack_21c = local_228[2];
              }
              plVar26 = local_360;
              if (uStack_21c != 0) {
                piVar41 = (int *)((longlong)iStack_220 * 8 + *(longlong *)local_228);
                piVar2 = piVar41 + (longlong)(int)uStack_21c * 2;
                bVar35 = 0;
                do {
                  uVar32 = *(ulonglong *)(*plVar1 + (longlong)*piVar41 * 8);
                  if ((uVar32 != 0) && (1 < *(byte *)(uVar32 + 0xc))) {
                    if (*(int *)(param_1 + 0x358) != *(int *)(param_1 + 900)) {
                      uVar20 = ((uint)(uVar32 >> 0x14) & 0xffff ^ (uint)(uVar32 >> 4)) * -0x7a143595
                      ;
                      uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
                      lVar42 = *(longlong *)(param_1 + 0x390);
                      if (*(longlong *)(param_1 + 0x390) == 0) {
                        lVar42 = local_340;
                      }
                      iVar18 = *(int *)(lVar42 + (ulonglong)
                                                 (*(int *)(param_1 + 0x398) - 1U &
                                                 (uVar20 >> 0x10 ^ uVar20)) * 4);
                      if (iVar18 != -1) {
                        do {
                          puVar23 = (ulonglong *)
                                    (*(longlong *)(param_1 + 0x350) + (longlong)iVar18 * 0x18);
                          if (*puVar23 == uVar32) goto LAB_142a1cb7d;
                          iVar18 = (int)puVar23[2];
                        } while (iVar18 != -1);
                      }
                    }
                    puVar23 = (ulonglong *)0x0;
LAB_142a1cb7d:
                    uVar11 = *(undefined1 *)
                              (*(longlong *)local_278 +
                              ((longlong)local_270 + (longlong)piVar41[1]) * 4);
                    uVar30 = CONCAT71((int7)(uVar30 >> 8),uVar11);
                    uVar32 = puVar23[1];
                    uVar33 = 0;
                    local_238 = 0.0;
                    local_248 = (uint *)0x0;
                    dStack_240 = 0.0;
                    local_2f8 = 0.0;
                    local_308 = (uint *)0x0;
                    dStack_300 = 0.0;
                    if (local_371 != 0) {
                      if (*(char *)(param_1 + 0x18d) == '\0') {
                        lVar42 = *(longlong *)(local_2b8 + 0x10);
                        lVar36 = (longlong)(int)uVar32 * 0xc;
                        local_238 = (double)*(float *)(lVar42 + 8 + lVar36);
                        dStack_240 = (double)*(float *)(lVar42 + 4 + lVar36);
                        local_248 = (uint *)(double)*(float *)(lVar42 + lVar36);
                        lVar42 = *(longlong *)(local_280 + 0x10);
                        local_2f8 = (double)*(float *)(lVar42 + 8 + lVar36);
                        dStack_300 = (double)*(float *)(lVar42 + 4 + lVar36);
                        local_308 = (uint *)(double)*(float *)(lVar42 + lVar36);
                        uVar33 = 1;
                      }
                      else {
                        uVar33 = 0;
                      }
                    }
                    local_388 = &local_308;
                    local_390 = (undefined4 *)CONCAT71(local_390._1_7_,uVar33);
                    local_398 = &local_248;
                    bVar17 = FUN_142a24842(local_370,uVar30 & 0xffffffff);
                    bVar35 = bVar35 | bVar17;
                    *(undefined1 *)(*(longlong *)(param_1 + 0x730) + (longlong)(int)uVar32) = uVar11
                    ;
                  }
                  uVar32 = local_358;
                  piVar41 = piVar41 + 2;
                } while (piVar41 != piVar2);
                plVar26 = local_360;
                if ((local_371 & bVar35) != 0) {
                  FUN_142a24987(local_370,&local_228,plVar1);
                  plVar26 = local_360;
                }
              }
            }
            else {
              dStack_300 = (double)((ulonglong)local_26c << 0x20);
              iVar18 = *(int *)(uVar30 + 0x58);
              local_308 = local_368;
              if (iVar18 < 0xf) {
                if (iVar18 == 1) {
                  FUN_142a247a1(plVar1,&local_208,local_368);
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_308);
                  if (*(char *)(local_198 + 1) == '\0') {
                    local_228 = (uint *)CONCAT44(uStack_204,local_208);
                    iStack_220 = iStack_200;
                    uStack_21c = auStack_1fc[0];
                  }
                  else {
                    local_228 = (uint *)local_198[2];
                    iStack_220 = 0;
                    uStack_21c = local_228[2];
                  }
                  if (uStack_21c != 0) {
                    lVar38 = (longlong)(int)uStack_21c;
                    lVar42 = *(longlong *)local_228 + (longlong)iStack_220 * 8;
                    lVar36 = 0;
                    bVar35 = 0;
                    do {
                      lVar34 = *(longlong *)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                      if ((lVar34 != 0) && (1 < *(byte *)(lVar34 + 0xc))) {
                        lVar28 = (longlong)dStack_300._0_4_ +
                                 (longlong)*(int *)(lVar42 + 4 + lVar36);
                        local_2d8 = 0.0;
                        local_2e8 = (uint *)0x0;
                        uStack_2e0 = (uint **)0x0;
                        local_238 = 0.0;
                        local_248 = (uint *)0x0;
                        dStack_240 = 0.0;
                        local_388 = &local_2e8;
                        local_398 = &local_248;
                        local_390 = (undefined4 *)((ulonglong)local_390 & 0xffffffffffffff00);
                        bVar17 = FUN_142a24842(local_370,
                                               CONCAT71((int7)((ulonglong)lVar28 >> 8),
                                                        *(undefined1 *)
                                                         (*(longlong *)local_308 + lVar28 * 4)),
                                               lVar34,0);
                        bVar35 = bVar35 | bVar17;
                      }
                      lVar36 = lVar36 + 8;
                    } while (lVar38 * 8 != lVar36);
                    if ((bVar35 & 1) != 0) {
                      FUN_142a24987(local_370,&local_228,plVar1);
                    }
                  }
                }
                else if (iVar18 == 0xb) {
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_308);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar26 = (longlong *)CONCAT44(uStack_204,local_208);
                    lVar42 = (longlong)iStack_200;
                    puVar24 = auStack_1fc;
                  }
                  else {
                    plVar26 = (longlong *)local_198[2];
                    puVar24 = (uint *)(plVar26 + 1);
                    lVar42 = 0;
                  }
                  if ((longlong)(int)*puVar24 != 0) {
                    puVar37 = (uint *)(lVar42 * 8 + *plVar26);
                    puVar24 = puVar37 + (longlong)(int)*puVar24 * 2;
LAB_142a1cf76:
                    uVar20 = *puVar37;
                    plVar26 = *(longlong **)(*plVar1 + (longlong)(int)uVar20 * 8);
                    if (((plVar26 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar26 + 0xc)))
                       && (*(int *)(*(longlong *)local_308 +
                                   ((longlong)dStack_300._0_4_ + (longlong)(int)puVar37[1]) * 4) !=
                           0)) {
                      if ((int)uStack_160 != local_134) {
                        puVar27 = local_128;
                        if (local_128 == (undefined1 *)0x0) {
                          puVar27 = local_130;
                        }
                        iVar18 = *(int *)(puVar27 + (ulonglong)(local_120 - 1U & uVar20) * 4);
                        for (iVar15 = iVar18; iVar15 != -1;
                            iVar15 = (int)local_168[(longlong)iVar15 * 2 + 1]) {
                          if (*(uint *)(local_168 + (longlong)iVar15 * 2) == uVar20)
                          goto LAB_142a1d085;
                        }
                      }
                      local_228 = (uint *)CONCAT44(local_228._4_4_,(undefined4)uStack_d8);
                      FUN_146eece88(&local_110,plVar26,
                                    (longlong)(int)plVar26[1] * 0x18 +
                                    *(longlong *)(*plVar26 + 0x28));
                      uStack_2e0 = (uint **)&local_228;
                      local_2e8 = puVar37;
                      FUN_140263e2a(&local_168,&local_248,&local_2e8,0);
                    }
                    goto LAB_142a1d0d5;
                  }
                }
              }
              else if (iVar18 == 0xf) {
                (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                          (*(longlong **)(uVar30 + 8),&local_208,&local_308);
                if (*(char *)(local_198 + 1) == '\0') {
                  plVar26 = (longlong *)CONCAT44(uStack_204,local_208);
                  lVar42 = (longlong)iStack_200;
                  puVar24 = auStack_1fc;
                }
                else {
                  plVar26 = (longlong *)local_198[2];
                  puVar24 = (uint *)(plVar26 + 1);
                  lVar42 = 0;
                }
                uVar20 = *puVar24;
                if ((longlong)(int)uVar20 != 0) {
                  lVar42 = *plVar26 + lVar42 * 8;
                  lVar36 = 0;
                  do {
                    plVar26 = *(longlong **)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                    if ((plVar26 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar26 + 0xc))) {
                      *(undefined4 *)
                       (*(longlong *)(*plVar26 + 0x2c0) + (longlong)(int)plVar26[1] * 0x10) =
                           *(undefined4 *)
                            (*(longlong *)local_308 +
                            ((longlong)dStack_300._0_4_ + (longlong)*(int *)(lVar42 + 4 + lVar36)) *
                            4);
                    }
                    lVar36 = lVar36 + 8;
                  } while ((longlong)(int)uVar20 * 8 != lVar36);
                }
              }
              else if (iVar18 == 0x10) {
                if (*(char *)(local_198 + 1) == '\0') {
                  plVar26 = (longlong *)CONCAT44(uStack_204,local_208);
                  lVar42 = (longlong)iStack_200;
                  puVar24 = auStack_1fc;
                }
                else {
                  plVar26 = (longlong *)local_198[2];
                  puVar24 = (uint *)(plVar26 + 1);
                  lVar42 = 0;
                }
                uVar20 = *puVar24;
                if ((longlong)(int)uVar20 != 0) {
                  lVar42 = *plVar26 + lVar42 * 8;
                  lVar36 = 0;
                  do {
                    plVar26 = *(longlong **)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                    if ((plVar26 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar26 + 0xc))) {
                      *(uint *)(*(longlong *)local_368 + (longlong)*(int *)(lVar42 + 4 + lVar36) * 4
                               ) = (uint)*(byte *)(*(longlong *)(*plVar26 + 0x2c0) + 0xd +
                                                  (longlong)(int)plVar26[1] * 0x10);
                    }
                    lVar36 = lVar36 + 8;
                  } while ((longlong)(int)uVar20 * 8 != lVar36);
                }
                (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                          (*(longlong **)(uVar30 + 8),&local_208,&local_308);
                if (*(char *)(local_198 + 1) == '\0') {
                  plVar26 = (longlong *)CONCAT44(uStack_204,local_208);
                  lVar42 = (longlong)iStack_200;
                  puVar24 = auStack_1fc;
                }
                else {
                  plVar26 = (longlong *)local_198[2];
                  puVar24 = (uint *)(plVar26 + 1);
                  lVar42 = 0;
                }
                uVar20 = *puVar24;
                if ((longlong)(int)uVar20 != 0) {
                  lVar42 = *plVar26 + lVar42 * 8;
                  lVar36 = 0;
                  do {
                    lVar38 = local_370;
                    plVar26 = *(longlong **)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                    if ((((plVar26 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar26 + 0xc)))
                        && (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + 0xd +
                                     (longlong)(int)plVar26[1] * 0x10) == '\x01')) &&
                       (*(int *)(*(longlong *)local_308 +
                                ((longlong)dStack_300._0_4_ +
                                (longlong)*(int *)(lVar42 + 4 + lVar36)) * 4) == 0)) {
                      FUN_140a36458(*(undefined8 *)(local_370 + 0x9c8),plVar26);
                      FUN_142a252aa(lVar38,4,plVar26);
                    }
                    lVar36 = lVar36 + 8;
                  } while ((longlong)(int)uVar20 * 8 != lVar36);
                }
              }
switchD_142a1c9df_caseD_5:
              uVar32 = local_358;
              plVar26 = local_360;
            }
          }
          else {
            iVar18 = (**(code **)(**(longlong **)(uVar30 + 8) + 8))();
            puVar24 = local_330;
            if (iVar18 == 4) {
              local_318 = DAT_14c8464f0;
              local_328 = (undefined4)DAT_14c8464e0;
              uStack_324 = DAT_14c8464e0._4_4_;
              uStack_320 = (undefined4)DAT_14c8464e8;
              uStack_31c = DAT_14c8464e8._4_4_;
              iVar18 = (int)plVar26[3];
              FUN_14051b394(local_330,iVar18,0);
              if (0 < (longlong)iVar18) {
                lVar42 = 0;
                do {
                  lVar36 = *(longlong *)puVar24;
                  *(undefined8 *)(lVar36 + 0x10 + lVar42) = local_318;
                  puVar3 = (undefined4 *)(lVar36 + lVar42);
                  *puVar3 = local_328;
                  puVar3[1] = uStack_324;
                  puVar3[2] = uStack_320;
                  puVar3[3] = uStack_31c;
                  lVar42 = lVar42 + 0x18;
                } while ((longlong)iVar18 * 0x18 != lVar42);
              }
              local_308 = puVar24;
              dStack_300 = (double)((ulonglong)*(uint *)(plVar26 + 0x13) << 0x20);
              if (*(int *)(uVar30 + 0x58) == 0x12) {
                if (((*(char *)(param_1 + 0x18d) == '\0') &&
                    (FUN_140676024(&local_2e8,local_348), local_2b8 != 0)) && (local_280 != 0)) {
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_308);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar25 = (longlong *)CONCAT44(uStack_204,local_208);
                    iVar18 = iStack_200;
                    uVar20 = auStack_1fc[0];
                  }
                  else {
                    plVar25 = (longlong *)local_198[2];
                    iVar18 = 0;
                    uVar20 = *(uint *)(plVar25 + 1);
                  }
                  if (uVar20 != 0) {
                    piVar41 = (int *)((longlong)iVar18 * 8 + *plVar25);
                    piVar2 = piVar41 + (longlong)(int)uVar20 * 2;
                    do {
                      uVar30 = *(ulonglong *)(*plVar1 + (longlong)*piVar41 * 8);
                      if ((uVar30 != 0) && (1 < *(byte *)(uVar30 + 0xc))) {
                        if (*(int *)(param_1 + 0x358) != *(int *)(param_1 + 900)) {
                          uVar20 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) *
                                   -0x7a143595;
                          uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
                          lVar42 = *(longlong *)(param_1 + 0x390);
                          if (*(longlong *)(param_1 + 0x390) == 0) {
                            lVar42 = local_340;
                          }
                          iVar18 = *(int *)(lVar42 + (ulonglong)
                                                     (*(int *)(param_1 + 0x398) - 1U &
                                                     (uVar20 >> 0x10 ^ uVar20)) * 4);
                          if (iVar18 != -1) {
                            do {
                              puVar23 = (ulonglong *)
                                        (*(longlong *)(param_1 + 0x350) + (longlong)iVar18 * 0x18);
                              if (*puVar23 == uVar30) goto LAB_142a1e297;
                              iVar18 = (int)puVar23[2];
                            } while (iVar18 != -1);
                          }
                        }
                        puVar23 = (ulonglong *)0x0;
LAB_142a1e297:
                        lVar38 = (longlong)dStack_300._0_4_ + (longlong)piVar41[1];
                        lVar42 = *(longlong *)local_308;
                        dVar8 = *(double *)(lVar42 + 0x10 + lVar38 * 0x18);
                        dVar9 = *(double *)(lVar42 + 8 + lVar38 * 0x18);
                        lVar36 = (longlong)(int)puVar23[1];
                        dVar10 = *(double *)(lVar42 + lVar38 * 0x18);
                        *(undefined1 *)(local_288 + 8) = 1;
                        lVar42 = *(longlong *)(local_288 + 0x10);
                        *(float *)(lVar42 + lVar36 * 0xc) = (float)dVar10;
                        *(float *)(lVar42 + 4 + lVar36 * 0xc) = (float)dVar9;
                        *(float *)(lVar42 + 8 + lVar36 * 0xc) = (float)dVar8;
                      }
                      piVar41 = piVar41 + 2;
                    } while (piVar41 != piVar2);
                  }
                }
              }
              else if (*(int *)(uVar30 + 0x58) == 0x11) {
                if (((*(char *)(param_1 + 0x18d) == '\0') &&
                    (FUN_140676024(&local_2e8,local_348), local_2b8 != 0)) && (local_280 != 0)) {
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_308);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar25 = (longlong *)CONCAT44(uStack_204,local_208);
                    iVar18 = iStack_200;
                    uVar20 = auStack_1fc[0];
                  }
                  else {
                    plVar25 = (longlong *)local_198[2];
                    iVar18 = 0;
                    uVar20 = *(uint *)(plVar25 + 1);
                  }
                  if (uVar20 != 0) {
                    piVar41 = (int *)((longlong)iVar18 * 8 + *plVar25);
                    piVar2 = piVar41 + (longlong)(int)uVar20 * 2;
                    do {
                      uVar30 = *(ulonglong *)(*plVar1 + (longlong)*piVar41 * 8);
                      if ((uVar30 != 0) && (1 < *(byte *)(uVar30 + 0xc))) {
                        if (*(int *)(param_1 + 0x358) != *(int *)(param_1 + 900)) {
                          uVar20 = ((uint)(uVar30 >> 0x14) & 0xffff ^ (uint)(uVar30 >> 4)) *
                                   -0x7a143595;
                          uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
                          lVar42 = *(longlong *)(param_1 + 0x390);
                          if (*(longlong *)(param_1 + 0x390) == 0) {
                            lVar42 = local_340;
                          }
                          iVar18 = *(int *)(lVar42 + (ulonglong)
                                                     (*(int *)(param_1 + 0x398) - 1U &
                                                     (uVar20 >> 0x10 ^ uVar20)) * 4);
                          if (iVar18 != -1) {
                            do {
                              puVar23 = (ulonglong *)
                                        (*(longlong *)(param_1 + 0x350) + (longlong)iVar18 * 0x18);
                              if (*puVar23 == uVar30) goto LAB_142a1e13c;
                              iVar18 = (int)puVar23[2];
                            } while (iVar18 != -1);
                          }
                        }
                        puVar23 = (ulonglong *)0x0;
LAB_142a1e13c:
                        lVar38 = (longlong)dStack_300._0_4_ + (longlong)piVar41[1];
                        lVar42 = *(longlong *)local_308;
                        dVar8 = *(double *)(lVar42 + 0x10 + lVar38 * 0x18);
                        dVar9 = *(double *)(lVar42 + 8 + lVar38 * 0x18);
                        lVar36 = (longlong)(int)puVar23[1];
                        dVar10 = *(double *)(lVar42 + lVar38 * 0x18);
                        *(undefined1 *)(local_2c0 + 8) = 1;
                        lVar42 = *(longlong *)(local_2c0 + 0x10);
                        *(float *)(lVar42 + lVar36 * 0xc) = (float)dVar10;
                        *(float *)(lVar42 + 4 + lVar36 * 0xc) = (float)dVar9;
                        *(float *)(lVar42 + 8 + lVar36 * 0xc) = (float)dVar8;
                      }
                      piVar41 = piVar41 + 2;
                    } while (piVar41 != piVar2);
                  }
                }
              }
              else {
                local_248 = puVar24;
                dStack_240 = (double)((ulonglong)*(uint *)(plVar26 + 0x13) << 0x20);
                iVar18 = *(int *)(uVar30 + 0x58);
                plVar26 = local_360;
                if (iVar18 < 0xd) {
                  if (iVar18 == 5) {
                    (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                              (*(longlong **)(uVar30 + 8),&local_208,&local_248);
                    if (*(char *)(local_198 + 1) == '\0') {
                      plVar25 = (longlong *)CONCAT44(uStack_204,local_208);
                      lVar42 = (longlong)iStack_200;
                      puVar24 = auStack_1fc;
                    }
                    else {
                      plVar25 = (longlong *)local_198[2];
                      puVar24 = (uint *)(plVar25 + 1);
                      lVar42 = 0;
                    }
                    uVar20 = *puVar24;
                    plVar26 = local_360;
                    if ((longlong)(int)uVar20 != 0) {
                      lVar42 = *plVar25 + lVar42 * 8;
                      lVar36 = 0;
                      do {
                        plVar25 = *(longlong **)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                        if ((plVar25 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar25 + 0xc))
                           ) {
                          lVar38 = (longlong)(int)plVar25[1];
                          if (*(char *)(*(longlong *)(*plVar25 + 0x2c0) + 0xb + lVar38 * 0x10) ==
                              '\x04') {
                            lVar34 = *(longlong *)(*plVar25 + 0x278);
                            lVar29 = (longlong)dStack_240._0_4_ +
                                     (longlong)*(int *)(lVar42 + 4 + lVar36);
                            lVar28 = *(longlong *)local_248;
                            dVar8 = *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
                            dVar9 = *(double *)(lVar28 + 8 + lVar29 * 0x18);
                            *(float *)(lVar34 + lVar38 * 0xc) =
                                 (float)((double)*(float *)(lVar34 + lVar38 * 0xc) +
                                        *(double *)(lVar28 + lVar29 * 0x18));
                            *(float *)(lVar34 + 4 + lVar38 * 0xc) =
                                 (float)((double)*(float *)(lVar34 + 4 + lVar38 * 0xc) + dVar9);
                            *(float *)(lVar34 + 8 + lVar38 * 0xc) =
                                 (float)((double)*(float *)(lVar34 + 8 + lVar38 * 0xc) + dVar8);
                          }
                        }
                        lVar36 = lVar36 + 8;
                      } while ((longlong)(int)uVar20 * 8 != lVar36);
                    }
                  }
                  else if (iVar18 == 6) {
                    (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                              (*(longlong **)(uVar30 + 8),&local_208,&local_248);
                    if (*(char *)(local_198 + 1) == '\0') {
                      plVar25 = (longlong *)CONCAT44(uStack_204,local_208);
                      lVar42 = (longlong)iStack_200;
                      puVar24 = auStack_1fc;
                    }
                    else {
                      plVar25 = (longlong *)local_198[2];
                      puVar24 = (uint *)(plVar25 + 1);
                      lVar42 = 0;
                    }
                    uVar20 = *puVar24;
                    plVar26 = local_360;
                    if ((longlong)(int)uVar20 != 0) {
                      lVar42 = *plVar25 + lVar42 * 8;
                      lVar36 = 0;
                      do {
                        plVar25 = *(longlong **)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                        if ((plVar25 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar25 + 0xc))
                           ) {
                          lVar38 = (longlong)(int)plVar25[1];
                          if (*(char *)(*(longlong *)(*plVar25 + 0x2c0) + 0xb + lVar38 * 0x10) ==
                              '\x04') {
                            lVar34 = *(longlong *)(*plVar25 + 0x290);
                            lVar29 = (longlong)dStack_240._0_4_ +
                                     (longlong)*(int *)(lVar42 + 4 + lVar36);
                            lVar28 = *(longlong *)local_248;
                            dVar8 = *(double *)(lVar28 + 0x10 + lVar29 * 0x18);
                            dVar9 = *(double *)(lVar28 + 8 + lVar29 * 0x18);
                            *(float *)(lVar34 + lVar38 * 0xc) =
                                 (float)((double)*(float *)(lVar34 + lVar38 * 0xc) +
                                        *(double *)(lVar28 + lVar29 * 0x18));
                            *(float *)(lVar34 + 4 + lVar38 * 0xc) =
                                 (float)((double)*(float *)(lVar34 + 4 + lVar38 * 0xc) + dVar9);
                            *(float *)(lVar34 + 8 + lVar38 * 0xc) =
                                 (float)((double)*(float *)(lVar34 + 8 + lVar38 * 0xc) + dVar8);
                          }
                        }
                        lVar36 = lVar36 + 8;
                      } while ((longlong)(int)uVar20 * 8 != lVar36);
                    }
                  }
                }
                else if (iVar18 == 0xd) {
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_248);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar25 = (longlong *)CONCAT44(uStack_204,local_208);
                    lVar42 = (longlong)iStack_200;
                    puVar24 = auStack_1fc;
                  }
                  else {
                    plVar25 = (longlong *)local_198[2];
                    puVar24 = (uint *)(plVar25 + 1);
                    lVar42 = 0;
                  }
                  plVar26 = local_360;
                  if ((longlong)(int)*puVar24 != 0) {
                    puVar37 = (uint *)(lVar42 * 8 + *plVar25);
                    puVar24 = puVar37 + (longlong)(int)*puVar24 * 2;
LAB_142a1dec9:
                    uVar20 = *puVar37;
                    lVar42 = *(longlong *)(*plVar1 + (longlong)(int)uVar20 * 8);
                    if ((lVar42 != 0) && (2 < *(byte *)(lVar42 + 0xc))) {
                      pdVar5 = (double *)
                               (*(longlong *)local_248 +
                               ((longlong)dStack_240._0_4_ + (longlong)(int)puVar37[1]) * 0x18);
                      if ((*pdVar5 != 3.4028234663852886e+38) ||
                         (((pdVar5[1] != 3.4028234663852886e+38 ||
                           (pdVar5[2] != 3.4028234663852886e+38)) || (NAN(pdVar5[2]))))) {
                        if ((int)uStack_160 != local_134) {
                          puVar27 = local_128;
                          if (local_128 == (undefined1 *)0x0) {
                            puVar27 = local_130;
                          }
                          iVar18 = *(int *)(puVar27 + (ulonglong)(local_120 - 1U & uVar20) * 4);
                          for (iVar15 = iVar18; iVar15 != -1;
                              iVar15 = (int)local_168[(longlong)iVar15 * 2 + 1]) {
                            if (*(uint *)(local_168 + (longlong)iVar15 * 2) == uVar20)
                            goto LAB_142a1e011;
                          }
                        }
                        local_278 = (uint *)CONCAT44(local_278._4_4_,(undefined4)uStack_d8);
                        local_2e8 = (uint *)*pdVar5;
                        uStack_2e0 = (uint **)pdVar5[1];
                        local_2d8 = pdVar5[2];
                        FUN_146eece88(&local_110,lVar42,&local_2e8);
                        uStack_2e0 = &local_278;
                        local_2e8 = puVar37;
                        FUN_140263e2a(&local_168,&local_228,&local_2e8,0);
                      }
                    }
                    goto LAB_142a1e050;
                  }
                }
                else if (iVar18 == 0x13) {
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_248);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar25 = (longlong *)CONCAT44(uStack_204,local_208);
                    lVar42 = (longlong)iStack_200;
                    puVar24 = auStack_1fc;
                  }
                  else {
                    plVar25 = (longlong *)local_198[2];
                    puVar24 = (uint *)(plVar25 + 1);
                    lVar42 = 0;
                  }
                  uVar20 = *puVar24;
                  plVar26 = local_360;
                  if ((longlong)(int)uVar20 != 0) {
                    lVar42 = *plVar25 + lVar42 * 8;
                    lVar36 = 0;
                    do {
                      plVar25 = *(longlong **)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                      if ((plVar25 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar25 + 0xc)))
                      {
                        lVar38 = *plVar25;
                        lVar34 = (longlong)(int)plVar25[1];
                        if (*(char *)(*(longlong *)(lVar38 + 0x2c0) + 0xb + lVar34 * 0x10) == '\x04'
                           ) {
                          lVar39 = (longlong)dStack_240._0_4_ +
                                   (longlong)*(int *)(lVar42 + 4 + lVar36);
                          lVar28 = *(longlong *)local_248;
                          lVar29 = *(longlong *)(lVar38 + 0x338);
                          dVar8 = *(double *)(*(longlong *)(lVar38 + 0x3c8) + lVar34 * 8);
                          dVar9 = *(double *)(lVar28 + 0x10 + lVar39 * 0x18);
                          dVar10 = *(double *)(lVar28 + 8 + lVar39 * 0x18);
                          *(double *)(lVar29 + lVar34 * 0x18) =
                               dVar8 * *(double *)(lVar28 + lVar39 * 0x18) +
                               *(double *)(lVar29 + lVar34 * 0x18);
                          *(double *)(lVar29 + 8 + lVar34 * 0x18) =
                               dVar10 * dVar8 + *(double *)(lVar29 + 8 + lVar34 * 0x18);
                          *(double *)(lVar29 + 0x10 + lVar34 * 0x18) =
                               dVar9 * dVar8 + *(double *)(lVar29 + 0x10 + lVar34 * 0x18);
                        }
                      }
                      lVar36 = lVar36 + 8;
                    } while ((longlong)(int)uVar20 * 8 != lVar36);
                  }
                }
              }
            }
            else {
              iVar18 = (**(code **)(**(longlong **)(uVar30 + 8) + 8))();
              if (iVar18 == 3) {
                uVar20 = *(uint *)(plVar26 + 3);
                uVar40 = (ulonglong)uVar20;
                iVar18 = (int)plVar26[0x17];
                if (iVar18 < (int)uVar20) {
                  *(uint *)(plVar26 + 0x17) = uVar20;
                  if ((uint)(*(int *)((longlong)plVar26 + 0xbc) - iVar18) < uVar20 - iVar18) {
                    FUN_14475e4ac(local_350);
                  }
                  memset((void *)((longlong)iVar18 * 4 + *(longlong *)local_350),0,
                         (longlong)(int)(uVar20 - iVar18) << 2);
                }
                else {
                  if ((int)uVar20 < 0) goto LAB_142a1e4e2;
                  if ((int)uVar20 < iVar18) {
                    *(uint *)(plVar26 + 0x17) = uVar20;
                  }
                }
                if (0 < (int)uVar20) {
                  uVar32 = 0;
                  do {
                    *(undefined4 *)(*(longlong *)local_350 + uVar32 * 4) = 0;
                    uVar32 = uVar32 + 1;
                  } while (uVar40 != uVar32);
                }
                local_2e8 = local_350;
                uStack_2e0 = (uint **)((ulonglong)*(uint *)(plVar26 + 0x17) << 0x20);
                switch(*(undefined4 *)(uVar30 + 0x58)) {
                case 3:
                  lVar42 = *(longlong *)(local_370 + 0x9c8);
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_2e8);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar26 = (longlong *)CONCAT44(uStack_204,local_208);
                    lVar36 = (longlong)iStack_200;
                    puVar24 = auStack_1fc;
                  }
                  else {
                    plVar26 = (longlong *)local_198[2];
                    puVar24 = (uint *)(plVar26 + 1);
                    lVar36 = 0;
                  }
                  uVar20 = *puVar24;
                  if ((longlong)(int)uVar20 != 0) {
                    lVar36 = *plVar26 + lVar36 * 8;
                    lVar38 = 0;
                    do {
                      fVar6 = *(float *)(*(longlong *)local_2e8 +
                                        ((longlong)(int)uStack_2e0 +
                                        (longlong)*(int *)(lVar36 + 4 + lVar38)) * 4);
                      if (((0.0 < fVar6) &&
                          (plVar26 = *(longlong **)
                                      (*plVar1 + (longlong)*(int *)(lVar36 + lVar38) * 8),
                          plVar26 != (longlong *)0x0)) && (2 < *(byte *)((longlong)plVar26 + 0xc)))
                      {
                        fVar7 = *(float *)(*(longlong *)(*plVar26 + 0x638) +
                                          (longlong)(int)plVar26[1] * 4);
                        if (fVar7 <= fVar6) {
                          fVar7 = fVar6;
                        }
                        *(float *)(*(longlong *)(*plVar26 + 0x638) + (longlong)(int)plVar26[1] * 4)
                             = fVar7;
                        FUN_1402bf4a4(lVar42 + 0x448);
                      }
                      lVar38 = lVar38 + 8;
                    } while ((longlong)(int)uVar20 * 8 != lVar38);
                  }
                  break;
                case 4:
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_2e8);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar26 = (longlong *)CONCAT44(uStack_204,local_208);
                    lVar42 = (longlong)iStack_200;
                    puVar24 = auStack_1fc;
                  }
                  else {
                    plVar26 = (longlong *)local_198[2];
                    puVar24 = (uint *)(plVar26 + 1);
                    lVar42 = 0;
                  }
                  uVar20 = *puVar24;
                  if ((longlong)(int)uVar20 != 0) {
                    lVar42 = *plVar26 + lVar42 * 8;
                    lVar36 = 0;
                    do {
                      lVar38 = *(longlong *)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                      if (((lVar38 != 0) && (1 < *(byte *)(lVar38 + 0xc))) &&
                         (0.0 < *(float *)(*(longlong *)local_2e8 +
                                          ((longlong)(int)uStack_2e0 +
                                          (longlong)*(int *)(lVar42 + 4 + lVar36)) * 4))) {
                        FUN_14016e00e(*(undefined8 *)(local_370 + 0x9c8));
                      }
                      lVar36 = lVar36 + 8;
                    } while ((longlong)(int)uVar20 * 8 != lVar36);
                  }
                  break;
                case 8:
                  lVar42 = *(longlong *)(local_370 + 0x9c8);
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_2e8);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar26 = (longlong *)CONCAT44(uStack_204,local_208);
                    lVar36 = (longlong)iStack_200;
                    puVar24 = auStack_1fc;
                  }
                  else {
                    plVar26 = (longlong *)local_198[2];
                    puVar24 = (uint *)(plVar26 + 1);
                    lVar36 = 0;
                  }
                  uVar20 = *puVar24;
                  if ((longlong)(int)uVar20 != 0) {
                    lVar36 = *plVar26 + lVar36 * 8;
                    lVar38 = 0;
                    do {
                      plVar26 = *(longlong **)(*plVar1 + (longlong)*(int *)(lVar36 + lVar38) * 8);
                      if ((plVar26 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar26 + 0xc)))
                      {
                        lVar34 = (longlong)(int)plVar26[1];
                        if (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + lVar34 * 0x10 + 0xb) ==
                            '\x04') {
                          lVar28 = *(longlong *)(*plVar26 + 0x650);
                          *(float *)(lVar28 + lVar34 * 4) =
                               *(float *)(lVar28 + lVar34 * 4) +
                               *(float *)(*(longlong *)local_2e8 +
                                         ((longlong)(int)uStack_2e0 +
                                         (longlong)*(int *)(lVar36 + 4 + lVar38)) * 4);
                          FUN_1402bf4a4(lVar42 + 0x448);
                        }
                      }
                      lVar38 = lVar38 + 8;
                    } while ((longlong)(int)uVar20 * 8 != lVar38);
                  }
                  break;
                case 9:
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_2e8);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar26 = (longlong *)CONCAT44(uStack_204,local_208);
                    lVar42 = (longlong)iStack_200;
                    puVar24 = auStack_1fc;
                  }
                  else {
                    plVar26 = (longlong *)local_198[2];
                    puVar24 = (uint *)(plVar26 + 1);
                    lVar42 = 0;
                  }
                  uVar20 = *puVar24;
                  if ((longlong)(int)uVar20 != 0) {
                    lVar42 = *plVar26 + lVar42 * 8;
                    lVar36 = 0;
                    do {
                      plVar26 = *(longlong **)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                      if ((((plVar26 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar26 + 0xc))
                           ) && (*(char *)(*(longlong *)(*plVar26 + 0x2c0) + 0xb +
                                          (longlong)(int)plVar26[1] * 0x10) == '\x04')) &&
                         (0 < uStack_2e0._4_4_)) {
                        dVar8 = (double)*(float *)(*(longlong *)local_2e8 +
                                                  ((longlong)(int)uStack_2e0 +
                                                  (longlong)*(int *)(lVar42 + 4 + lVar36)) * 4);
                        lVar38 = *(longlong *)(local_370 + 0x9c8);
                        lVar29 = plVar26[2];
                        lVar34 = *(longlong *)(lVar38 + 0x2a0);
                        lVar28 = *(longlong *)(lVar34 + (longlong)(int)lVar29 * 8);
                        if (lVar28 == 0) {
                          local_248 = (uint *)FUN_14001cc68(0x80);
                          local_248[0] = 0;
                          local_248[1] = 0x3fe00000;
                          local_248[2] = 0;
                          local_248[3] = 0;
                          local_248[4] = 0xa0000000;
                          local_248[5] = 0x3fb99999;
                          local_248[6] = 0;
                          local_248[7] = 0x3ff00000;
                          local_248[8] = 0;
                          local_248[9] = 0;
                          local_248[10] = 0;
                          local_248[0xb] = 0;
                          local_248[0xc] = 0;
                          local_248[0xd] = 0x3ff00000;
                          local_248[0xe] = 0;
                          local_248[0xf] = 0x3ff00000;
                          local_248[0x14] = 0;
                          local_248[0x16] = 0;
                          local_248[0x17] = 0;
                          *(undefined8 *)((longlong)local_248 + 0x5e) = 0;
                          local_248[0x1a] = 0x469c4000;
                          local_248[0x1b] = 0x48435000;
                          local_248[0x1c] = 0x476a6000;
                          local_248[0x1d] = 0x3f800000;
                          *(undefined1 *)(local_248 + 0x1e) = 0;
                          local_248[0x1f] = 0;
                          *(double *)(local_248 + 0x10) = dVar8;
                          *(double *)(local_248 + 0x12) = dVar8;
                          *(uint **)(*(longlong *)(lVar38 + 0x288) + (longlong)(int)plVar26[2] * 8)
                               = local_248;
                          lVar34 = *(longlong *)
                                    (*(longlong *)(*plVar26 + 0x1e8) + (longlong)(int)plVar26[1] * 8
                                    );
                          if ((lVar34 != 0) && ((*(byte *)(lVar34 + 0x2c) & 1) != 0)) {
                            FUN_14082044e(lVar38 + 0x100);
                          }
                          FUN_146eed06a(*(undefined8 *)(local_370 + 0x9c8),plVar26,&local_248);
                          if (local_248 != (uint *)0x0) {
                            FUN_1400020a8();
                          }
                        }
                        else if ((*(double *)(lVar28 + 0x40) != dVar8) ||
                                (NAN(*(double *)(lVar28 + 0x40)) || NAN(dVar8))) {
                          *(double *)(lVar28 + 0x40) = dVar8;
                          *(double *)(*(longlong *)(lVar34 + (longlong)(int)lVar29 * 8) + 0x48) =
                               dVar8;
                        }
                      }
                      lVar36 = lVar36 + 8;
                    } while ((longlong)(int)uVar20 * 8 != lVar36);
                  }
                  break;
                case 10:
                  (**(code **)(**(longlong **)(uVar30 + 8) + 0x50))
                            (*(longlong **)(uVar30 + 8),&local_208,&local_2e8);
                  if (*(char *)(local_198 + 1) == '\0') {
                    plVar26 = (longlong *)CONCAT44(uStack_204,local_208);
                    lVar42 = (longlong)iStack_200;
                    puVar24 = auStack_1fc;
                  }
                  else {
                    plVar26 = (longlong *)local_198[2];
                    puVar24 = (uint *)(plVar26 + 1);
                    lVar42 = 0;
                  }
                  uVar20 = *puVar24;
                  if ((longlong)(int)uVar20 != 0) {
                    lVar42 = *plVar26 + lVar42 * 8;
                    lVar36 = 0;
                    do {
                      plVar26 = *(longlong **)(*plVar1 + (longlong)*(int *)(lVar42 + lVar36) * 8);
                      if (*(byte *)((longlong)plVar26 + 0xc) < 2) {
                        plVar26 = (longlong *)0x0;
                      }
                      if ((plVar26 != (longlong *)0x0) && (0 < uStack_2e0._4_4_)) {
                        dVar8 = (double)*(float *)(*(longlong *)local_2e8 +
                                                  ((longlong)(int)uStack_2e0 +
                                                  (longlong)*(int *)(lVar42 + 4 + lVar36)) * 4);
                        lVar38 = *(longlong *)(local_370 + 0x9c8);
                        lVar29 = plVar26[2];
                        lVar34 = *(longlong *)(lVar38 + 0x2a0);
                        lVar28 = *(longlong *)(lVar34 + (longlong)(int)lVar29 * 8);
                        if (lVar28 == 0) {
                          local_248 = (uint *)FUN_14001cc68(0x80);
                          local_248[0] = 0;
                          local_248[1] = 0x3fe00000;
                          local_248[2] = 0;
                          local_248[3] = 0;
                          local_248[4] = 0xa0000000;
                          local_248[5] = 0x3fb99999;
                          local_248[6] = 0;
                          local_248[7] = 0x3ff00000;
                          local_248[8] = 0;
                          local_248[9] = 0;
                          local_248[10] = 0;
                          local_248[0xb] = 0;
                          local_248[0x10] = 0;
                          local_248[0x11] = 0;
                          local_248[0x12] = 0;
                          local_248[0x13] = 0;
                          local_248[0x14] = 0;
                          local_248[0x16] = 0;
                          local_248[0x17] = 0;
                          *(undefined8 *)((longlong)local_248 + 0x5e) = 0;
                          local_248[0x1a] = 0x469c4000;
                          local_248[0x1b] = 0x48435000;
                          local_248[0x1c] = 0x476a6000;
                          local_248[0x1d] = 0x3f800000;
                          *(undefined1 *)(local_248 + 0x1e) = 0;
                          local_248[0x1f] = 0;
                          *(double *)(local_248 + 0xc) = dVar8;
                          *(double *)(local_248 + 0xe) = dVar8;
                          *(uint **)(*(longlong *)(lVar38 + 0x288) + (longlong)(int)plVar26[2] * 8)
                               = local_248;
                          lVar34 = *(longlong *)
                                    (*(longlong *)(*plVar26 + 0x1e8) + (longlong)(int)plVar26[1] * 8
                                    );
                          if ((lVar34 != 0) && ((*(byte *)(lVar34 + 0x2c) & 1) != 0)) {
                            FUN_14082044e(lVar38 + 0x100);
                          }
                          FUN_146eed06a(*(undefined8 *)(local_370 + 0x9c8),plVar26,&local_248);
                          if (local_248 != (uint *)0x0) {
                            FUN_1400020a8();
                          }
                        }
                        else if ((*(double *)(lVar28 + 0x40) != dVar8) ||
                                (NAN(*(double *)(lVar28 + 0x40)) || NAN(dVar8))) {
                          *(double *)(lVar28 + 0x30) = dVar8;
                          *(double *)(*(longlong *)(lVar34 + (longlong)(int)lVar29 * 8) + 0x38) =
                               dVar8;
                        }
                      }
                      lVar36 = lVar36 + 8;
                    } while ((longlong)(int)uVar20 * 8 != lVar36);
                  }
                }
                goto switchD_142a1c9df_caseD_5;
              }
            }
          }
LAB_142a1db14:
          if (local_198 != (undefined8 *)0x0) {
            (**(code **)*local_198)(local_198,1);
          }
          local_1a0 = 0;
          if (local_1a8 != 0) {
            FUN_1400020a8();
          }
          FUN_1402a03ba(local_1e8);
        }
        uVar30 = uStack_250;
        lVar42 = (longlong)(int)uStack_250;
        uVar20 = (int)uStack_250 + 1;
        uStack_250 = CONCAT44(uStack_250._4_4_,uVar20);
        if (uStack_250._4_4_ < uVar20) {
          FUN_1446f48e2(&local_258,uVar30 & 0xffffffff);
        }
        *(int *)(local_258 + lVar42 * 4) = (int)uVar31;
      }
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar32);
    if (0 < (longlong)(int)uStack_250) {
      uVar32 = (longlong)(int)uStack_250 + 1;
      do {
        FUN_14046b56a(plVar26,*(undefined4 *)(local_258 + -8 + uVar32 * 4),1);
        uVar32 = uVar32 - 1;
      } while (1 < uVar32);
    }
    if (local_258 != 0) {
      FUN_1400020a8();
    }
    local_120 = 0;
    if (local_128 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar32 = uStack_160 >> 0x20;
  uStack_160 = uStack_160 & 0xffffffff00000000;
  if ((int)uVar32 != 0) {
    FUN_14472eb64(&local_168,0);
  }
  uStack_138 = 0xffffffff;
  local_134 = 0;
  local_140 = 0;
  if (0x80 < local_13c) {
    local_13c = 0x80;
    FUN_1446efbd8(local_158,0);
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if (local_168 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_142a0f4d8(&local_110);
  if ((local_a0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar18 = (int)plVar25[1], iVar18 != -1) {
LAB_142a1d085:
    plVar25 = local_168 + (longlong)iVar18 * 2;
    if (*(uint *)(local_168 + (longlong)iVar18 * 2) == uVar20) goto LAB_142a1d0a3;
  }
  plVar25 = (longlong *)0x0;
LAB_142a1d0a3:
  iVar18 = *(int *)((longlong)plVar25 + 4);
  lVar36 = plVar26[1];
  lVar42 = *(longlong *)(*plVar26 + 0x28);
  *(undefined8 *)(local_f0 + ((longlong)iVar18 * 3 + 2) * 8) =
       *(undefined8 *)(lVar42 + 0x10 + (longlong)(int)lVar36 * 0x18);
  puVar3 = (undefined4 *)(lVar42 + (longlong)(int)lVar36 * 0x18);
  uVar12 = puVar3[1];
  uVar13 = puVar3[2];
  uVar14 = puVar3[3];
  puVar4 = (undefined4 *)(local_f0 + (longlong)iVar18 * 0x18);
  *puVar4 = *puVar3;
  puVar4[1] = uVar12;
  puVar4[2] = uVar13;
  puVar4[3] = uVar14;
LAB_142a1d0d5:
  puVar37 = puVar37 + 2;
  if (puVar37 == puVar24) goto switchD_142a1c9df_caseD_5;
  goto LAB_142a1cf76;
  while (iVar18 = (int)plVar26[1], iVar18 != -1) {
LAB_142a1e011:
    plVar26 = local_168 + (longlong)iVar18 * 2;
    if (*(uint *)(local_168 + (longlong)iVar18 * 2) == uVar20) goto LAB_142a1e02e;
  }
  plVar26 = (longlong *)0x0;
LAB_142a1e02e:
  iVar18 = *(int *)((longlong)plVar26 + 4);
  dVar8 = *pdVar5;
  dVar9 = pdVar5[1];
  *(double *)(local_f0 + ((longlong)iVar18 * 3 + 2) * 8) = pdVar5[2];
  pdVar5 = (double *)(local_f0 + (longlong)iVar18 * 0x18);
  *pdVar5 = dVar8;
  pdVar5[1] = dVar9;
LAB_142a1e050:
  puVar37 = puVar37 + 2;
  plVar26 = local_360;
  if (puVar37 == puVar24) goto LAB_142a1db14;
  goto LAB_142a1dec9;
}



// FUNCTION 142a1e4fe FUN_142a1e4fe body=612 status=ok
// SIG undefined FUN_142a1e4fe(void)

ulonglong FUN_142a1e4fe(double *param_1,double *param_2)

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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  dVar13 = param_1[3];
  dVar1 = param_2[4];
  dVar11 = param_1[4];
  dVar2 = param_2[5];
  dVar12 = param_1[5];
  dVar3 = param_2[1];
  dVar4 = *param_1;
  dVar5 = param_1[1];
  uVar22 = SUB84(dVar5,0);
  uVar23 = (undefined4)((ulonglong)dVar5 >> 0x20);
  dVar6 = param_2[2];
  dVar7 = param_1[2];
  uVar20 = SUB84(dVar7,0);
  uVar21 = (undefined4)((ulonglong)dVar7 >> 0x20);
  dVar8 = param_2[3];
  dVar9 = *param_2;
  dVar14 = ((dVar12 - dVar7) * 0.5 + dVar7) - ((dVar2 - dVar6) * 0.5 + dVar6);
  dVar18 = ((dVar11 - dVar5) * 0.5 + dVar5) - ((dVar1 - dVar3) * 0.5 + dVar3);
  dVar16 = ((dVar13 - dVar4) * 0.5 + dVar4) - ((dVar8 - dVar9) * 0.5 + dVar9);
  dVar10 = dVar14 * dVar14 + dVar16 * dVar16 + dVar18 * dVar18;
  if (((dVar10 != 1.0) || (dVar15 = dVar14, dVar17 = dVar16, dVar19 = dVar18, NAN(dVar10))) &&
     (dVar15 = DAT_14c8464f0, dVar17 = DAT_14c8464e0, dVar19 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar15 = dVar14 * dVar10;
    dVar17 = dVar16 * dVar10;
    dVar19 = dVar18 * dVar10;
  }
  if (dVar8 <= dVar13) {
    dVar13 = dVar8;
  }
  uVar24 = SUB84(dVar4,0);
  uVar25 = (int)((ulonglong)dVar4 >> 0x20);
  if (dVar4 <= dVar9) {
    uVar24 = SUB84(dVar9,0);
    uVar25 = (int)((ulonglong)dVar9 >> 0x20);
  }
  dVar13 = dVar13 - (double)CONCAT44(uVar25,uVar24);
  if (dVar1 <= dVar11) {
    dVar11 = dVar1;
  }
  if (dVar5 <= dVar3) {
    uVar22 = SUB84(dVar3,0);
    uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
  }
  dVar11 = dVar11 - (double)CONCAT44(uVar23,uVar22);
  if (dVar2 <= dVar12) {
    dVar12 = dVar2;
  }
  if (dVar7 <= dVar6) {
    uVar20 = SUB84(dVar6,0);
    uVar21 = (undefined4)((ulonglong)dVar6 >> 0x20);
  }
  dVar12 = dVar12 - (double)CONCAT44(uVar21,uVar20);
  dVar13 = ABS(dVar11 * dVar13) * dVar15 +
           ABS(dVar11 * dVar12) * dVar17 + ABS(dVar12 * dVar13) * dVar19;
  return CONCAT44((int)((ulonglong)dVar13 >> 0x20),(float)dVar13) & 0x7fffffff7fffffff;
}



// FUNCTION 142a1e762 FUN_142a1e762 body=69 status=ok
// SIG undefined FUN_142a1e762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a1e762(void)

{
  _DAT_14c997740 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a1e7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997748,1);
  return;
}



// FUNCTION 142a1e7a7 FUN_142a1e7a7 body=69 status=ok
// SIG undefined FUN_142a1e7a7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a1e7a7(void)

{
  _DAT_14c997750 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a1e7e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c997758,1);
  return;
}



// FUNCTION 142a1e7ec FUN_142a1e7ec body=179 status=ok
// SIG undefined FUN_142a1e7ec(void)

longlong FUN_142a1e7ec(longlong *param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  uVar1 = DAT_14c9974a8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = &DAT_149eda610;
  local_38 = 4;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  lVar4 = FUN_146d84416(param_2,uVar2,uVar1);
  if (lVar4 == 0) {
    uVar3 = FUN_146eccc37(param_1,param_4);
  }
  else {
    uVar3 = FUN_146eccbf3(param_1,(double)*(float *)(*(longlong *)(lVar4 + 0x10) +
                                                    (longlong)param_3 * 4));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return (ulonglong)uVar3 * 0x18 + *param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a1e8a0 FUN_142a1e8a0 body=76 status=ok
// SIG undefined FUN_142a1e8a0(void)

void FUN_142a1e8a0(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    iVar1 = *param_3;
    if ((((-2 < (longlong)iVar1) && (-1 < iVar1)) && (iVar1 < *(int *)(param_1 + 0x418))) &&
       ((lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x410) + (longlong)iVar1 * 4),
        lVar3 != -1 &&
        (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x230) + lVar3 * 8), lVar3 != 0)))) {
      uVar2 = *(undefined8 *)(lVar3 + 0xc);
      goto LAB_142a1e8e4;
    }
  }
  uVar2 = 0;
LAB_142a1e8e4:
  *param_2 = uVar2;
  return;
}



// FUNCTION 142a1e8ec FUN_142a1e8ec body=46 status=ok
// SIG undefined FUN_142a1e8ec(void)

undefined8 FUN_142a1e8ec(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x418))) &&
     (lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x410) + (ulonglong)param_2 * 4),
     lVar1 != -1)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x230) + lVar1 * 8);
  }
  return 0;
}



// FUNCTION 142a1e91a FUN_142a1e91a body=2770 status=ok
// SIG undefined FUN_142a1e91a(void)

void FUN_142a1e91a(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 uVar3;
  void *_Src;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  undefined1 auStack_188 [32];
  undefined8 **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  uint *local_138;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined8 *local_d0;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8 [2];
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar17 = *(longlong *)(param_2 + 0x9c8);
  iVar21 = 0;
  local_98 = (uint *)0x0;
  local_90 = 0;
  local_b8[0] = 0;
  local_b8[1] = 0;
  local_8c = 0xffffffff00000080;
  local_84 = 0;
  local_78 = 0;
  local_70 = 0;
  iVar16 = *(int *)(param_1 + 0x348);
  if (0 < iVar16) {
    lVar14 = 0;
    do {
      lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x340) + lVar14 * 8);
      if (lVar18 != 0) {
        local_120 = (longlong *)((ulonglong)local_120 & 0xffffffffffffff00);
        local_120 = (longlong *)FUN_1400c73fa(lVar17 + 0x448,lVar18,&local_120);
        if (local_120 != (longlong *)0x0) {
          if ((*(longlong *)(*(longlong *)(*local_120 + 200) + (longlong)(int)local_120[1] * 8) ==
               param_1) &&
             ((*(byte *)(*(longlong *)(*local_120 + 0x680) + (longlong)(int)local_120[1]) & 1) != 0)
             ) {
            FUN_140a3609c(local_b8,&local_c8,&local_120,0);
          }
        }
        iVar16 = *(int *)(param_1 + 0x348);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar16);
  }
  plVar12 = (longlong *)(param_1 + 0x888);
  local_138 = (uint *)(param_1 + 0x898);
  iVar16 = *(int *)(param_1 + 0x8b0);
  iVar9 = iVar16;
  local_150 = plVar12;
  local_148 = param_1;
  local_140 = lVar17;
  if (iVar16 == 0) {
    uVar22 = 1;
    uVar15 = 0;
    iVar6 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x8a8);
    if (*(uint **)(param_1 + 0x8a8) == (uint *)0x0) {
      puVar4 = local_138;
    }
    uVar7 = *puVar4;
    if (uVar7 == 0) {
      iVar21 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar21 = iVar16 + -1;
      }
      uVar15 = 0;
      uVar22 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar22 = uVar15;
      }
      iVar21 = 0;
      do {
        if (uVar22 == uVar15) goto LAB_142a1eade;
        iVar21 = iVar21 + 0x20;
        uVar7 = puVar4[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar7 == 0);
    }
    else {
      iVar21 = 0;
      uVar15 = 0;
    }
    uVar22 = (ulonglong)(-uVar7 & uVar7);
    uVar20 = uVar22 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar6 = (iVar21 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16;
    }
  }
  if (iVar6 != iVar16) {
    local_128 = lVar17 + 0x448;
    local_130 = (longlong *)(lVar17 + 0x338);
    uVar7 = 0xffffffff;
    do {
      lVar17 = local_140;
      plVar5 = *(longlong **)(*plVar12 + (longlong)iVar6 * 0x10);
      if ((plVar5 == (longlong *)0x0) || (*(byte *)((longlong)plVar5 + 0xc) < 3)) {
        uVar3 = *(undefined4 *)(*(longlong *)(*plVar5 + 0x80) + (longlong)(int)plVar5[1] * 4);
        FUN_14016e00e(local_140,plVar5);
        FUN_1400c7952(lVar17,plVar5);
        iVar9 = *(int *)(lVar17 + 0x340);
        *(uint *)(lVar17 + 0x340) = iVar9 + 1U;
        if (*(uint *)(lVar17 + 0x344) < iVar9 + 1U) {
          FUN_140543018(local_130,iVar9);
        }
        *(undefined4 *)(*local_130 + (longlong)iVar9 * 4) = uVar3;
        plVar12 = local_150;
        param_1 = local_148;
      }
      else {
        local_120 = (longlong *)((ulonglong)local_120 & 0xffffffffffffff00);
        local_120 = (longlong *)FUN_1400c73fa(local_128,plVar5,&local_120);
        if (local_120 != (longlong *)0x0) {
          if ((*(longlong *)(*(longlong *)(*local_120 + 200) + (longlong)(int)local_120[1] * 8) ==
               param_1) &&
             ((*(byte *)(*(longlong *)(*local_120 + 0x680) + (longlong)(int)local_120[1]) & 1) != 0)
             ) {
            FUN_140a3609c(local_b8,&local_c8,&local_120,0);
          }
        }
      }
      uVar7 = uVar7 & ~(uint)uVar22;
      puVar4 = *(uint **)(param_1 + 0x8a8);
      if (*(uint **)(param_1 + 0x8a8) == (uint *)0x0) {
        puVar4 = local_138;
      }
      iVar9 = *(int *)(param_1 + 0x8b0);
      iVar6 = (int)uVar15;
      lVar17 = (longlong)iVar6;
      uVar13 = puVar4[lVar17] & uVar7;
      if (uVar13 == 0) {
        iVar11 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar11 = iVar9 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar21 = iVar21 + 0x20;
        iVar8 = iVar11;
        if (iVar11 < iVar6) {
          iVar8 = iVar6;
        }
        if (iVar6 < iVar11) {
          lVar14 = 0;
          do {
            uVar13 = puVar4[lVar17 + lVar14 + 1];
            if (uVar13 != 0) {
              uVar15 = (ulonglong)(iVar6 + (int)lVar14 + 1);
              uVar7 = 0xffffffff;
              goto LAB_142a1edfa;
            }
            iVar21 = iVar21 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar8 - lVar17 != lVar14);
          uVar7 = 0xffffffff;
          iVar6 = iVar8;
        }
        uVar15 = (ulonglong)(iVar6 + 1);
        plVar12 = local_150;
        param_1 = local_148;
        iVar6 = iVar9;
      }
      else {
LAB_142a1edfa:
        uVar22 = (ulonglong)(-uVar13 & uVar13);
        uVar20 = uVar22 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar6 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar6) {
          iVar6 = iVar9;
        }
      }
    } while (iVar6 != iVar16);
  }
LAB_142a1eade:
  lVar17 = local_140;
  iVar16 = *(int *)(param_1 + 0x8d0);
  if (iVar16 < 2) {
    lVar14 = param_1 + 0x8c0;
    if (*(longlong *)(param_1 + 0x8c8) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x8c8);
    }
    iVar21 = iVar16 + 3;
    if (-1 < iVar16) {
      iVar21 = iVar16;
    }
    if (*(int *)(param_1 + 0x890) - *(int *)(param_1 + 0x8bc) < iVar21 >> 2) {
      if (iVar9 != 0) {
        puVar4 = *(uint **)(param_1 + 0x8a8);
        if (*(uint **)(param_1 + 0x8a8) == (uint *)0x0) {
          puVar4 = local_138;
        }
        uVar7 = *puVar4;
        plVar12 = local_150;
        param_1 = local_148;
        if (uVar7 == 0) {
          iVar16 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar16 = iVar9 + -1;
          }
          uVar15 = 0;
          uVar22 = (ulonglong)(uint)(iVar16 >> 5);
          if (iVar16 >> 5 < 1) {
            uVar22 = uVar15;
          }
          iVar16 = 0;
          do {
            if (uVar22 == uVar15) goto LAB_142a1eb35;
            iVar16 = iVar16 + 0x20;
            uVar7 = puVar4[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar7 == 0);
        }
        else {
          uVar15 = 0;
          iVar16 = 0;
        }
        uVar20 = (ulonglong)(-uVar7 & uVar7);
        uVar22 = uVar20 * 2 + 1;
        lVar18 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
          }
        }
        iVar21 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
        if (iVar21 < iVar9) {
          uVar7 = 0xffffffff;
          do {
            *(undefined4 *)
             (lVar14 + (longlong)
                       *(int *)(*(longlong *)(local_148 + 0x888) + 0xc + (longlong)iVar21 * 0x10) *
                       4) = 0xffffffff;
            uVar7 = ~(uint)uVar20 & uVar7;
            puVar4 = *(uint **)(local_148 + 0x8a8);
            if (*(uint **)(local_148 + 0x8a8) == (uint *)0x0) {
              puVar4 = local_138;
            }
            iVar6 = *(int *)(local_148 + 0x8b0);
            iVar21 = (int)uVar15;
            lVar18 = (longlong)iVar21;
            uVar13 = puVar4[lVar18] & uVar7;
            if (uVar13 == 0) {
              iVar11 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar11 = iVar6 + -1;
              }
              iVar11 = iVar11 >> 5;
              iVar16 = iVar16 + 0x20;
              iVar8 = iVar11;
              if (iVar11 < iVar21) {
                iVar8 = iVar21;
              }
              if (iVar21 < iVar11) {
                lVar19 = 0;
                do {
                  uVar13 = puVar4[lVar18 + lVar19 + 1];
                  if (uVar13 != 0) {
                    uVar15 = (ulonglong)(iVar21 + (int)lVar19 + 1);
                    uVar7 = 0xffffffff;
                    goto LAB_142a1f391;
                  }
                  iVar16 = iVar16 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar8 - lVar18 != lVar19);
                uVar7 = 0xffffffff;
                iVar21 = iVar8;
              }
              uVar15 = (ulonglong)(iVar21 + 1);
              iVar21 = iVar6;
            }
            else {
LAB_142a1f391:
              uVar20 = (ulonglong)(-uVar13 & uVar13);
              uVar22 = uVar20 * 2 + 1;
              lVar18 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                }
              }
              iVar21 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
              if (iVar6 <= iVar21) {
                iVar21 = iVar6;
              }
            }
          } while (iVar21 != iVar9);
        }
      }
    }
    else if (iVar16 == 1) {
      lVar18 = 0;
      do {
        *(undefined4 *)(lVar14 + lVar18 * 4) = 0xffffffff;
        lVar18 = lVar18 + 1;
      } while (lVar18 < *(int *)(param_1 + 0x8d0));
    }
LAB_142a1eb35:
    FUN_1400c7dd8(plVar12,0);
  }
  else {
    FUN_1400c7dd8(plVar12,0);
    *(undefined4 *)(param_1 + 0x8d0) = 1;
    FUN_1400c98fa(plVar12);
    lVar17 = local_140;
  }
  FUN_14298e9e8();
  iVar16 = *(int *)(param_1 + 0x348);
  if (0 < iVar16) {
    lVar14 = 0;
    do {
      plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar14 * 8);
      if (plVar12 != (longlong *)0x0) {
        uVar3 = *(undefined4 *)(*(longlong *)(*plVar12 + 0x80) + (longlong)(int)plVar12[1] * 4);
        FUN_1400c7952(lVar17);
        iVar16 = *(int *)(lVar17 + 0x340);
        *(uint *)(lVar17 + 0x340) = iVar16 + 1U;
        if (*(uint *)(lVar17 + 0x344) < iVar16 + 1U) {
          FUN_140543018((longlong *)(lVar17 + 0x338),iVar16);
        }
        *(undefined4 *)(*(longlong *)(lVar17 + 0x338) + (longlong)iVar16 * 4) = uVar3;
        *(undefined8 *)(*(longlong *)(param_1 + 0x340) + lVar14 * 8) = 0;
        iVar16 = *(int *)(param_1 + 0x348);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar16);
  }
  plVar12 = (longlong *)(ulonglong)local_90;
  if (local_90 == 0) {
    uVar15 = 1;
    uVar22 = 0;
    iVar16 = 0;
    uVar7 = 0;
  }
  else {
    puVar4 = local_98;
    if (local_98 == (uint *)0x0) {
      puVar4 = local_a8;
    }
    uVar7 = *puVar4;
    if (uVar7 == 0) {
      iVar16 = local_90 + 0x1e;
      if (-1 < (int)(local_90 - 1)) {
        iVar16 = local_90 - 1;
      }
      uVar22 = 0;
      uVar15 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar15 = uVar22;
      }
      iVar16 = 0;
      do {
        if (uVar15 == uVar22) goto LAB_142a1ee53;
        iVar16 = iVar16 + 0x20;
        uVar7 = puVar4[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar22 = 0;
      iVar16 = 0;
    }
    uVar15 = (ulonglong)(-uVar7 & uVar7);
    uVar20 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar7 = (iVar16 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)local_90 <= (int)uVar7) {
      uVar7 = local_90;
    }
  }
  if (uVar7 == local_90) {
LAB_142a1ee53:
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_140d9ce6e(local_b8);
    if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_138 = (uint *)(lVar17 + 0x448);
  lVar14 = lVar17 + 0x548;
  uVar10 = 0xffffffff;
  uVar13 = local_90;
  local_150 = plVar12;
  local_148 = lVar14;
LAB_142a1eedb:
  if (*(int *)(lVar17 + 0x518) != *(int *)(lVar17 + 0x544)) {
    plVar5 = *(longlong **)(local_b8[0] + (longlong)(int)uVar7 * 0x10);
    uVar7 = ((uint)((ulonglong)plVar5 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar5 >> 4)) *
            -0x7a143595;
    uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
    lVar18 = *(longlong *)(lVar17 + 0x550);
    if (*(longlong *)(lVar17 + 0x550) == 0) {
      lVar18 = lVar14;
    }
    iVar21 = *(int *)(lVar18 + (ulonglong)(*(int *)(lVar17 + 0x558) - 1U & (uVar7 >> 0x10 ^ uVar7))
                               * 4);
    if (iVar21 != -1) {
      lVar18 = *(longlong *)(lVar17 + 0x510);
      iVar9 = iVar21;
      do {
        if (*(longlong **)(lVar18 + (longlong)iVar9 * 0x20) == plVar5) {
          local_130 = (longlong *)
                      CONCAT44(local_130._4_4_,
                               *(undefined4 *)
                                (*(longlong *)(*plVar5 + 0x5d8) + (longlong)(int)plVar5[1] * 4));
          goto LAB_142a1ef90;
        }
        iVar9 = *(int *)((longlong)iVar9 * 0x20 + lVar18 + 0x18);
      } while (iVar9 != -1);
    }
  }
  goto LAB_142a1f121;
  while (iVar21 = *(int *)(lVar14 + 0x18), iVar21 != -1) {
LAB_142a1ef90:
    lVar14 = lVar18 + (longlong)iVar21 * 0x20;
    if (*(longlong **)(lVar18 + (longlong)iVar21 * 0x20) == plVar5) goto LAB_142a1efab;
  }
  lVar14 = 0;
LAB_142a1efab:
  local_c8 = (void *)0x0;
  local_c0 = *(int *)(lVar14 + 0x10);
  lVar18 = (longlong)local_c0;
  _Src = *(void **)(lVar14 + 8);
  if (lVar18 == 0) {
    local_bc = 0;
  }
  else {
    FUN_140509e62(&local_c8,local_c0,0);
    memcpy(local_c8,_Src,lVar18 << 3);
  }
  plVar12 = local_150;
  local_120 = (longlong *)((ulonglong)local_120 & 0xffffffffffffff00);
  FUN_1400c73fa(local_138,plVar5,&local_120);
  if (local_c0 != 0) {
    local_d0 = (undefined8 *)0x0;
    local_e0 = DAT_14c846520;
    local_f0 = (undefined4)DAT_14c846510;
    uStack_ec = DAT_14c846510._4_4_;
    uStack_e8 = (undefined4)DAT_14c846518;
    uStack_e4 = DAT_14c846518._4_4_;
    local_120 = (longlong *)0x3fd3333333333333;
    local_118 = 100;
    local_114 = 0x101;
    local_112 = 1;
    local_110 = 2;
    local_f8 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_d8 = 0x100;
    local_160 = 0;
    uStack_158 = 0;
    local_168 = &local_d0;
    plVar5 = (longlong *)
             FUN_1429c0b5e(local_138,(ulonglong)local_130 & 0xffffffff,&local_c8,&local_120);
    if (local_d0 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_d0 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((*piVar1 == 0) && (*(int *)((longlong)local_d0 + 0xc) == 0)) {
        (**(code **)*local_d0)(local_d0,1);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      pbVar2 = (byte *)(*(longlong *)(*plVar5 + 0x680) + (longlong)(int)plVar5[1]);
      *pbVar2 = *pbVar2 | 1;
    }
  }
  lVar14 = local_148;
  uVar13 = local_90;
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
    lVar14 = local_148;
    uVar13 = local_90;
  }
LAB_142a1f121:
  uVar10 = uVar10 & ~(uint)uVar15;
  puVar4 = local_98;
  if (local_98 == (uint *)0x0) {
    puVar4 = local_a8;
  }
  iVar21 = (int)uVar22;
  lVar18 = (longlong)iVar21;
  uVar7 = puVar4[lVar18] & uVar10;
  if (uVar7 == 0) {
    iVar9 = uVar13 + 0x1e;
    if (-1 < (int)(uVar13 - 1)) {
      iVar9 = uVar13 - 1;
    }
    iVar9 = iVar9 >> 5;
    iVar16 = iVar16 + 0x20;
    iVar6 = iVar9;
    if (iVar9 < iVar21) {
      iVar6 = iVar21;
    }
    if (iVar21 < iVar9) {
      lVar19 = 0;
      do {
        uVar7 = puVar4[lVar18 + lVar19 + 1];
        if (uVar7 != 0) {
          uVar22 = (ulonglong)(iVar21 + (int)lVar19 + 1);
          uVar10 = 0xffffffff;
          goto LAB_142a1f195;
        }
        iVar16 = iVar16 + 0x20;
        lVar19 = lVar19 + 1;
      } while (iVar6 - lVar18 != lVar19);
      uVar10 = 0xffffffff;
      iVar21 = iVar6;
    }
    uVar22 = (ulonglong)(iVar21 + 1);
    lVar17 = local_140;
    lVar14 = local_148;
    plVar12 = local_150;
    uVar7 = uVar13;
  }
  else {
LAB_142a1f195:
    uVar15 = (ulonglong)(-uVar7 & uVar7);
    uVar20 = uVar15 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    uVar7 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if ((int)uVar13 <= (int)uVar7) {
      uVar7 = uVar13;
    }
  }
  if (uVar7 == (uint)plVar12) goto LAB_142a1ee53;
  goto LAB_142a1eedb;
}



// FUNCTION 142a1f3ee FUN_142a1f3ee body=1519 status=ok
// SIG undefined FUN_142a1f3ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a1f3ee(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char *pcVar14;
  longlong *plVar15;
  undefined4 uVar16;
  longlong lVar17;
  double *pdVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  int iVar22;
  char **ppcVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  double dVar27;
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auStack_178 [32];
  longlong *local_158;
  undefined8 *local_150;
  longlong local_148;
  ulonglong uStack_140;
  char *local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  
  uVar19 = DAT_14c9974a8;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((((*(byte *)(param_1 + 0x1c2) & 0x20) == 0) != (bool)param_2) ||
     (*(longlong *)(param_1 + 0x510) == 0)) goto LAB_142a1f95f;
  lVar25 = (longlong)*(int *)(param_1 + 0x180);
  iVar22 = *(int *)(*(longlong *)(param_1 + 0x410) + lVar25 * 4);
  if (((longlong)iVar22 < 0) || (*(int *)(param_1 + 0x448) <= iVar22)) goto LAB_142a1f95f;
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x440) + (longlong)iVar22 * 8);
  if (lVar5 != 0) {
    if (param_2 == '\0') {
      pcVar14 = *(char **)(param_1 + 0x280);
      dVar9 = *(double *)(param_1 + 0x288);
      dVar8 = *(double *)(param_1 + 0x290);
      lVar17 = FUN_140dff482(*(undefined8 *)(param_1 + 0x828),DAT_14c9968a0,DAT_14c9974a8);
      plVar21 = *(longlong **)(*(longlong *)(lVar17 + 0x10) + lVar25 * 8);
      if (plVar21 == (longlong *)0x0) {
        local_158 = (longlong *)0x0;
LAB_142a1f8fd:
        FUN_1406188f0(lVar5,&local_158);
      }
      else {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        if (((9.999999747378752e-05 < ABS((double)pcVar14 - DAT_14c846510)) ||
            (9.999999747378752e-05 < ABS(dVar9 - DAT_14c846518))) ||
           (9.999999747378752e-05 < ABS(dVar8 - DAT_14c846520))) {
          plVar1 = plVar21 + 1;
          local_128._0_8_ = dVar8;
          local_138 = pcVar14;
          dStack_130 = dVar9;
          (**(code **)(*plVar21 + 0x30))(plVar21,&local_d8);
          plVar15 = local_d8;
          local_d8 = (longlong *)0x0;
          LOCK();
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if (((int)*plVar1 == 0) && (*(int *)((longlong)plVar21 + 0xc) == 0)) {
            (**(code **)*plVar21)(plVar21,1);
          }
          if (local_d8 != (longlong *)0x0) {
            LOCK();
            plVar21 = local_d8 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if (((int)*plVar21 == 0) && (*(int *)((longlong)local_d8 + 0xc) == 0)) {
              (**(code **)*local_d8)(local_d8,1);
            }
          }
          local_158 = plVar15;
          plVar21 = plVar15;
          if (plVar15 == (longlong *)0x0) goto LAB_142a1f8fd;
        }
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        local_158 = plVar21;
        FUN_1406188f0(lVar5,&local_158);
        LOCK();
        plVar1 = plVar21 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)*plVar1 == 0) && (*(int *)((longlong)plVar21 + 0xc) == 0)) {
          (**(code **)*plVar21)(plVar21,1);
        }
      }
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x58);
      local_138 = "MassToLocal";
      dStack_130 = (double)CONCAT35(dStack_130._5_3_,0xb);
      uVar16 = FUN_14001a6c0(&local_138,1);
      lVar17 = FUN_1401466c8(uVar6);
      lVar17 = *(longlong *)(lVar17 + 0x10);
      lVar25 = lVar25 * 0x60;
      auVar3 = *(undefined1 (*) [16])(lVar17 + 0x40 + lVar25);
      auVar4 = *(undefined1 (*) [16])(lVar17 + 0x50 + lVar25);
      lVar26 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
      auVar28._8_4_ = (int)lVar26;
      auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
      auVar28._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      iVar22 = movmskpd(uVar16,auVar28);
      lVar26 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._8_8_));
      auVar30._8_4_ = (int)lVar26;
      auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_));
      auVar30._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      uVar24 = movmskpd((int)uVar19,auVar30);
      if ((uVar24 & 0x3fffffff) == 0 && iVar22 == 0) {
        puVar20 = &DAT_14c846480;
        ppcVar23 = &local_138;
        for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
          *ppcVar23 = (char *)*puVar20;
          puVar20 = puVar20 + 1;
          ppcVar23 = ppcVar23 + 1;
        }
      }
      else {
        pdVar18 = (double *)(lVar17 + lVar25);
        auVar30 = divpd(_DAT_149934d80,auVar3);
        auVar28 = divpd(ZEXT816(0x3ff0000000000000),auVar4);
        local_f8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar30._0_8_);
        dStack_f0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_)) & auVar30._8_8_)
        ;
        local_e8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar4._0_8_)) & auVar28._0_8_);
        local_138 = (char *)-*pdVar18;
        dStack_130 = -pdVar18[1];
        dVar9 = pdVar18[2] * -1.0;
        dVar10 = pdVar18[3] * 1.0;
        dVar27 = pdVar18[4] * local_f8;
        dVar29 = pdVar18[5] * dStack_f0;
        dVar8 = pdVar18[6] * local_e8;
        local_128._8_4_ = SUB84(dVar10,0);
        local_128._0_8_ = dVar9;
        local_128._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        dVar12 = dVar29 * (double)local_138 - dStack_130 * dVar27;
        dVar13 = dVar8 * dStack_130 - dVar9 * dVar29;
        dVar11 = dVar27 * dVar9 - (double)local_138 * dVar8;
        dVar13 = dVar13 + dVar13;
        dVar11 = dVar11 + dVar11;
        dVar12 = dVar12 + dVar12;
        local_118 = 0.0 - ((dVar12 * dStack_130 - dVar11 * dVar9) + dVar10 * dVar13 + dVar27);
        dStack_110 = 0.0 - (dVar12 * *pdVar18 + dVar9 * dVar13 + dVar10 * dVar11 + dVar29);
        local_108 = 0.0 - (dVar10 * dVar12 + dVar8 +
                          (dVar11 * (double)local_138 - dVar13 * dStack_130));
        uStack_100 = 0;
        uStack_e0 = 0;
      }
      local_148 = 0;
      uStack_140 = 0;
      local_d0 = 0;
      local_c8 = 0x100000000;
      pcVar7 = *(code **)(param_1 + 0x510);
      plVar21 = (longlong *)(param_1 + 0x530);
      if (*(longlong **)(param_1 + 0x520) != (longlong *)0x0) {
        plVar21 = *(longlong **)(param_1 + 0x520);
      }
      uVar19 = (**(code **)(*plVar21 + 8))();
      (*pcVar7)(uVar19,&local_138,&local_148,&local_d8);
      puVar20 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      FUN_14014f414(puVar20,&local_148);
      if (puVar20 == (undefined8 *)0x0) {
        local_150 = (undefined8 *)0x0;
        FUN_1406188f0(lVar5);
      }
      else {
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
        LOCK();
        *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
        UNLOCK();
        local_150 = puVar20;
        FUN_1406188f0(lVar5);
        LOCK();
        piVar2 = (int *)(puVar20 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if ((*piVar2 == 0) && (*(int *)((longlong)puVar20 + 0xc) == 0)) {
          (**(code **)*puVar20)(puVar20,1);
        }
      }
      FUN_140711b04(&local_d8);
      FUN_144756766(local_148,uStack_140 & 0xffffffff);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
    }
  }
  *(byte *)(param_1 + 0x1c2) = *(byte *)(param_1 + 0x1c2) & 0xdf | param_2 << 5;
LAB_142a1f95f:
  if ((local_c0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a1f9de FUN_142a1f9de body=15427 status=ok
// SIG undefined FUN_142a1f9de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a1f9de(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  float *pfVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  double *pdVar23;
  byte bVar24;
  undefined4 uVar25;
  uint uVar26;
  longlong lVar27;
  uint *puVar28;
  double *pdVar29;
  undefined4 *puVar30;
  longlong lVar31;
  int iVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  uint uVar36;
  ulonglong unaff_RBP;
  undefined8 *puVar37;
  longlong *plVar38;
  double *pdVar39;
  undefined8 *puVar40;
  byte bVar41;
  longlong lVar42;
  ulonglong uVar43;
  int iVar44;
  longlong lVar45;
  int iVar46;
  ushort uVar47;
  ulonglong uVar48;
  longlong lVar49;
  uint uVar50;
  longlong lVar51;
  ulonglong uVar52;
  float fVar53;
  double dVar54;
  float fVar68;
  double dVar69;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar70;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar71;
  double dVar72;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar73;
  double dVar74;
  double dVar87;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar86;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  double dVar93;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  double dVar100;
  undefined1 auVar99 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  double dVar104;
  undefined1 auVar103 [16];
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  double dVar110;
  double dVar111;
  double dVar115;
  double dVar116;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  double dVar117;
  double dVar119;
  undefined1 auVar118 [16];
  float fVar120;
  double dVar121;
  double dVar122;
  double dVar123;
  undefined8 uVar124;
  double dVar125;
  float fVar126;
  double dVar127;
  undefined1 auVar128 [16];
  undefined1 auStack_688 [32];
  double *local_668;
  longlong local_658;
  uint *local_650;
  longlong local_648;
  uint local_63c;
  undefined1 local_638 [16];
  longlong local_628;
  undefined4 local_61c;
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [24];
  longlong *local_5e0;
  longlong local_5d8;
  longlong local_5d0;
  float local_5c8;
  float local_5c4;
  float local_5c0;
  float local_5bc;
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [24];
  longlong *local_590;
  undefined1 local_588 [16];
  double local_578;
  double dStack_570;
  double local_560;
  ulonglong local_558;
  float local_550;
  float local_54c;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  longlong local_528;
  undefined8 *local_520;
  longlong local_518;
  longlong *local_510;
  longlong *local_508;
  longlong *local_500;
  longlong *local_4f8;
  float *local_4f0;
  undefined1 local_4e8 [16];
  double local_4d8;
  double dStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  longlong local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  longlong local_498;
  longlong local_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  double local_458;
  double dStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  undefined8 uStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  undefined1 local_388 [16];
  double local_378;
  double dStack_370;
  double local_368;
  double dStack_360;
  double local_358 [4];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined1 local_2e8 [16];
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [12];
  undefined4 uStack_14c;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_688;
  if ((*(byte *)(param_1 + 0x319) & 0x40) == 0) {
    uVar19 = *(undefined8 *)(param_2 + 0x1f0);
    local_518 = param_2;
    FUN_1401f6576(param_3,param_1);
    *(byte *)(param_1 + 0x319) = *(byte *)(param_1 + 0x319) & 0xef;
    lVar31 = *(longlong *)(param_3 + 0x18);
    *(undefined8 *)(lVar31 + 0x10) = uVar19;
    local_528 = param_1 + 0x5d0;
    uVar19 = FUN_1401f660a(lVar31,param_1 + 0x5d0);
    *(byte *)(param_1 + 0x319) = *(byte *)(param_1 + 0x319) & 0xef;
    local_458 = *(double *)(param_1 + 0xe0);
    dStack_450 = *(double *)(param_1 + 0xe8);
    dVar121 = *(double *)(param_1 + 0xf0);
    if ((9.999999747378752e-05 < ABS(local_458 - DAT_14c846510)) ||
       (9.999999747378752e-05 < ABS(dStack_450 - DAT_14c846518))) {
      local_61c = 0;
    }
    else {
      local_61c = (undefined4)
                  CONCAT71((int7)((ulonglong)uVar19 >> 8),
                           ABS(dVar121 - DAT_14c846520) <= 9.999999747378752e-05);
    }
    lVar31 = *(longlong *)(param_3 + 0x18);
    local_478 = DAT_14c8463d0;
    dStack_470 = DAT_14c8463d8;
    local_4d8 = DAT_14c8463e0;
    dStack_4d0 = DAT_14c8463e8;
    local_468 = DAT_14c8464e0;
    dStack_460 = DAT_14c8464e8;
    local_488 = DAT_14c8464f0;
    dStack_480 = 0.0;
    local_5e0 = (longlong *)(param_1 + 0x3a0);
    local_658 = param_1;
    local_648 = lVar31;
    if (*(int *)(param_1 + 0x3a8) != *(int *)(param_1 + 0x3d4)) {
      lVar20 = param_1 + 0x3d8;
      if (*(longlong *)(param_1 + 0x3e0) != 0) {
        lVar20 = *(longlong *)(param_1 + 0x3e0);
      }
      iVar17 = *(int *)(param_1 + 1000);
      iVar15 = iVar17 + 3;
      if (-1 < iVar17) {
        iVar15 = iVar17;
      }
      if (*(int *)(param_1 + 0x3a8) - *(int *)(param_1 + 0x3d4) < iVar15 >> 2) {
        uVar16 = *(uint *)(param_1 + 0x3c8);
        if (uVar16 != 0) {
          puVar28 = *(uint **)(param_1 + 0x3c0);
          if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
            puVar28 = (uint *)(param_1 + 0x3b0);
          }
          uVar50 = *puVar28;
          if (uVar50 == 0) {
            iVar17 = uVar16 + 0x1e;
            if (-1 < (int)(uVar16 - 1)) {
              iVar17 = uVar16 - 1;
            }
            uVar52 = 0;
            uVar35 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar35 = uVar52;
            }
            iVar17 = 0;
            do {
              if (uVar35 == uVar52) goto LAB_142a1fcbf;
              iVar17 = iVar17 + 0x20;
              uVar50 = puVar28[uVar52 + 1];
              uVar52 = uVar52 + 1;
            } while (uVar50 == 0);
          }
          else {
            uVar52 = 0;
            iVar17 = 0;
          }
          uVar48 = (ulonglong)(-uVar50 & uVar50);
          uVar35 = uVar48 * 2 + 1;
          lVar49 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar49 == 0; lVar49 = lVar49 + -1) {
            }
          }
          uVar50 = (iVar17 - ((uint)lVar49 ^ 0x3f)) + 0x3e;
          if ((int)uVar50 < (int)uVar16) {
            uVar26 = 0xffffffff;
            do {
              *(undefined4 *)
               (lVar20 + (longlong)
                         *(int *)(*(longlong *)(param_1 + 0x3a0) + 0x14 +
                                 (longlong)(int)uVar50 * 0x18) * 4) = 0xffffffff;
              uVar26 = ~(uint)uVar48 & uVar26;
              puVar28 = *(uint **)(param_1 + 0x3c0);
              if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
                puVar28 = (uint *)(param_1 + 0x3b0);
              }
              uVar36 = *(uint *)(param_1 + 0x3c8);
              iVar15 = (int)uVar52;
              lVar49 = (longlong)iVar15;
              uVar50 = puVar28[lVar49] & uVar26;
              if (uVar50 == 0) {
                uVar1 = uVar36 - 1;
                uVar50 = uVar36 + 0x1e;
                if (-1 < (int)uVar1) {
                  uVar50 = uVar1;
                }
                iVar46 = (int)uVar50 >> 5;
                iVar17 = iVar17 + 0x20;
                iVar44 = iVar46;
                if (iVar46 < iVar15) {
                  iVar44 = iVar15;
                }
                if (iVar15 < iVar46) {
                  lVar51 = 0;
                  do {
                    uVar50 = puVar28[lVar49 + lVar51 + 1];
                    if (uVar50 != 0) {
                      uVar52 = (ulonglong)(iVar15 + (int)lVar51 + 1);
                      uVar26 = 0xffffffff;
                      goto LAB_142a235ae;
                    }
                    iVar17 = iVar17 + 0x20;
                    lVar51 = lVar51 + 1;
                  } while (iVar44 - lVar49 != lVar51);
                  uVar26 = 0xffffffff;
                  lVar49 = (longlong)iVar44;
                }
                uVar52 = lVar49 + 1U & 0xffffffff;
                uVar50 = uVar36;
              }
              else {
LAB_142a235ae:
                uVar48 = (ulonglong)(-uVar50 & uVar50);
                uVar35 = uVar48 * 2 + 1;
                lVar49 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar49 == 0; lVar49 = lVar49 + -1) {
                  }
                }
                uVar50 = (iVar17 - ((uint)lVar49 ^ 0x3f)) + 0x3e;
                uVar1 = uVar50;
                if ((int)uVar36 <= (int)uVar50) {
                  uVar50 = uVar36;
                  uVar1 = uVar36;
                }
              }
              unaff_RBP = (ulonglong)uVar1;
            } while (uVar50 != uVar16);
          }
        }
      }
      else if (0 < iVar17) {
        lVar49 = 0;
        do {
          *(undefined4 *)(lVar20 + lVar49 * 4) = 0xffffffff;
          lVar49 = lVar49 + 1;
        } while (lVar49 < *(int *)(param_1 + 1000));
      }
LAB_142a1fcbf:
      *(undefined4 *)(param_1 + 0x3a8) = 0;
      if (*(int *)(param_1 + 0x3ac) < 0) {
        FUN_144727cd0(local_5e0,0);
      }
      *(undefined8 *)(param_1 + 0x3d0) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x3c8) = 0;
    }
    local_520 = (undefined8 *)(param_1 + 0xa0);
    if (0 < *(int *)(param_1 + 0x300)) {
      local_4a8 = FUN_1401466c8(*(undefined8 *)(param_1 + 0x58),DAT_14c997500,DAT_14c9974a8);
      if ((((longlong)*(int *)(param_1 + 0x180) != -1) &&
          (lVar20 = (longlong)
                    *(int *)(*(longlong *)(param_1 + 0x410) +
                            (longlong)*(int *)(param_1 + 0x180) * 4), lVar20 != -1)) &&
         (plVar38 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar20 * 8),
         plVar38 != (longlong *)0x0)) {
        lVar20 = (longlong)(int)plVar38[1] * 0x10;
        if ((*(char *)(*(longlong *)(*plVar38 + 0x2c0) + 0xd + lVar20) == '\x01') &&
           ((lVar20 = *(longlong *)(*(longlong *)(*plVar38 + 0x5a8) + lVar20), lVar20 == 0 ||
            (*(byte *)(lVar20 + 0xc) < 3)))) {
          bVar41 = 4;
        }
        else {
          bVar41 = 0;
        }
        *(byte *)(lVar31 + 0x68) = *(byte *)(lVar31 + 0x68) & 0xfb | bVar41;
      }
      if (0 < *(int *)(param_1 + 0x304)) {
        local_4e8._8_8_ = 0;
        local_4e8._0_8_ = dVar121;
        lVar20 = param_1 + 0x700;
        local_5d8 = param_1 + 0x3d8;
        local_590 = (longlong *)(param_1 + 0x3e0);
        dVar69 = dStack_470 + dStack_470;
        dVar72 = local_4d8 + local_4d8;
        dVar94 = local_478 * (local_478 + local_478);
        local_3b8 = (1.0 - (local_4d8 * dVar72 + dStack_470 * dVar69)) * local_458;
        dStack_360 = (1.0 - (local_4d8 * dVar72 + dVar94)) * dStack_450;
        local_398 = (1.0 - (dVar94 + dStack_470 * dVar69)) * dVar121;
        local_3d8 = local_478;
        dStack_3d0 = local_478;
        dVar94 = (local_478 + local_478) * dStack_4d0;
        local_3e8 = dStack_4d0;
        dStack_3e0 = dStack_4d0;
        dStack_3b0 = (dVar69 * local_478 + dVar72 * dStack_4d0) * local_458;
        local_378 = (dVar69 * dStack_4d0 + local_478 * dVar72) * dVar121;
        local_368 = (dVar69 * local_478 - dVar72 * dStack_4d0) * dStack_450;
        dStack_370 = (dVar72 * dStack_470 - dVar94) * dVar121;
        local_3a8 = (local_478 * dVar72 - dVar69 * dStack_4d0) * local_458;
        dStack_390 = 0.0;
        dStack_3a0 = 0.0;
        local_388._8_8_ = 0;
        local_388._0_8_ = (dVar72 * dStack_470 + dVar94) * dStack_450;
        local_3c8 = local_488;
        uStack_3c0 = 0x3ff0000000000000;
        local_3f8 = dStack_470;
        dStack_3f0 = dStack_470;
        local_408 = local_478;
        dStack_400 = dStack_4d0;
        local_418._8_8_ = local_4d8;
        local_418._0_8_ = dStack_470;
        local_500 = (longlong *)(lVar31 + 0x38);
        local_508 = (longlong *)(lVar31 + 0x48);
        local_510 = (longlong *)(lVar31 + 0x58);
        local_498 = param_1 + 0x6a8;
        local_650 = (uint *)(param_1 + 0x3b0);
        local_4f8 = (longlong *)(param_1 + 0x6d8);
        local_4a0 = lVar31 + 0x18;
        local_4b0 = param_1 + 0x6c8;
        lVar49 = 0;
        local_428._8_8_ = local_4d8;
        local_428._0_8_ = local_4d8;
        local_490 = lVar20;
        do {
          lVar42 = local_648;
          lVar51 = local_658;
          uVar16 = *(uint *)(*(longlong *)(param_1 + 0x400) + lVar49 * 4);
          lVar27 = (longlong)(int)uVar16;
          uVar50 = 1 << ((byte)uVar16 & 0x1f);
          lVar34 = *(longlong *)(param_1 + 0x710);
          if (*(longlong *)(param_1 + 0x710) == 0) {
            lVar34 = lVar20;
          }
          uVar26 = uVar16 + 0x1f;
          if (-1 < lVar27) {
            uVar26 = uVar16;
          }
          plVar38 = *(longlong **)(*(longlong *)(param_1 + 0x340) + lVar49 * 8);
          lVar33 = (longlong)((int)uVar26 >> 5);
          if (plVar38 == (longlong *)0x0) {
            puVar28 = (uint *)(lVar34 + lVar33 * 4);
            *puVar28 = *puVar28 & ~uVar50;
          }
          else {
            lVar31 = *plVar38;
            local_638._0_8_ = plVar38;
            lVar20 = (longlong)(int)plVar38[1];
            lVar45 = lVar20 * 0x10;
            bVar41 = *(byte *)(*(longlong *)(lVar31 + 0x2c0) + 0xd + lVar45);
            lVar21 = *(longlong *)(param_1 + 0x6b8);
            if (*(longlong *)(param_1 + 0x6b8) == 0) {
              lVar21 = local_498;
            }
            uVar26 = *(uint *)(lVar21 + lVar33 * 4);
            local_618._0_4_ = uVar26;
            local_558 = (ulonglong)CONCAT31((int3)(uVar26 >> 8),(uVar26 & uVar50) != 0);
            if ((bVar41 == 1) &&
               ((lVar5 = *(longlong *)(*(longlong *)(lVar31 + 0x5a8) + lVar45), lVar5 == 0 ||
                (*(byte *)(lVar5 + 0xc) < 3)))) {
              uVar47 = 0x200;
            }
            else {
              uVar47 = 0;
            }
            lVar5 = *(longlong *)(lVar31 + 0x28);
            lVar6 = *(longlong *)(lVar31 + 0x48);
            uVar19 = *(undefined8 *)(lVar5 + lVar20 * 0x18);
            uVar124 = 0;
            local_4c8 = *(undefined8 *)(lVar5 + 8 + lVar20 * 0x18);
            uStack_4c0 = 0;
            dVar69 = (double)*(float *)(lVar6 + 0xc + lVar45);
            dVar121 = (double)*(float *)(lVar6 + 8 + lVar45);
            local_538 = *(double *)(lVar5 + 0x10 + lVar20 * 0x18);
            dStack_530 = 0.0;
            local_5a8._0_8_ = (undefined8)*(float *)(lVar6 + lVar45);
            local_5a8._8_8_ = (double)*(float *)(lVar6 + 4 + lVar45);
            lVar5 = *(longlong *)(lVar31 + 0x278);
            lVar20 = lVar20 * 0xc;
            fVar53 = *(float *)(lVar5 + 8 + lVar20);
            fVar68 = *(float *)(lVar5 + lVar20);
            fVar71 = *(float *)(lVar5 + 4 + lVar20);
            lVar5 = *(longlong *)(lVar31 + 0x290);
            fVar86 = *(float *)(lVar5 + 8 + lVar20);
            bVar24 = *(byte *)(*(longlong *)(lVar31 + 0x2c0) + 0xb + lVar45);
            fVar120 = *(float *)(lVar5 + lVar20);
            uVar36 = (uint)(0x3000200010004 >> ((bVar24 & 3) << 4));
            if (3 < bVar24) {
              uVar36 = 4;
            }
            fVar126 = *(float *)(lVar5 + 4 + lVar20);
            uVar36 = uVar36 | (uint)uVar47 | (uint)unaff_RBP & 0xffffe000 | (uint)bVar41 << 8;
            unaff_RBP = (ulonglong)uVar36;
            bVar41 = (*(uint *)(lVar34 + lVar33 * 4) & uVar50) == 0 & bVar41;
            bVar24 = bVar41 ^ 1;
            plVar38 = *(longlong **)(*(longlong *)(lVar31 + 0x5a8) + lVar45);
            local_628 = lVar33;
            local_5d0 = lVar27;
            if (plVar38 == (longlong *)0x0) {
              lVar31 = *(longlong *)(local_658 + 800);
              if (*(longlong *)(lVar31 + lVar49 * 8) != 0) {
                plVar22 = (longlong *)0x0;
                goto LAB_142a2018f;
              }
              local_618._0_4_ = uVar26 & uVar50;
              plVar22 = (longlong *)0x0;
              if ((uVar26 & uVar50) != 0) goto LAB_142a2018f;
LAB_142a201fa:
              uVar16 = 0xffffffff;
              plVar38 = (longlong *)0x0;
              local_558 = 0;
              uVar26 = 0xffffffff;
              if (bVar41 == 0) goto LAB_142a20856;
LAB_142a206b7:
              uVar16 = uVar26;
              if (((uint)unaff_RBP >> 9 & 1) != 0) goto LAB_142a20856;
            }
            else {
              plVar22 = (longlong *)0x0;
              if (2 < *(byte *)((longlong)plVar38 + 0xc)) {
                plVar22 = plVar38;
              }
              lVar31 = *(longlong *)(local_658 + 800);
              if (*(longlong **)(lVar31 + lVar49 * 8) == plVar22) {
                if (plVar22 == (longlong *)0x0) {
                  if ((uVar26 & uVar50) == 0) goto LAB_142a201fa;
                  plVar22 = (longlong *)0x0;
                  goto LAB_142a2018f;
                }
LAB_142a20234:
                lVar31 = *plVar38;
                lVar20 = (longlong)(int)plVar38[1];
                uVar16 = 0xffffffff;
                lVar33 = local_628;
                if ((*(byte *)(*(longlong *)(lVar31 + 0x680) + lVar20) & 1) != 0) {
                  if (*(longlong *)(*(longlong *)(lVar31 + 200) + lVar20 * 8) == lVar51) {
                    uVar16 = *(uint *)(*(longlong *)(lVar31 + 0x80) + lVar20 * 4);
                    uVar26 = *(uint *)(lVar51 + 0x3a8);
                    dVar121 = (double)(ulonglong)uVar26;
                    uVar36 = *(uint *)(lVar51 + 0x3d4);
                    if (uVar26 != uVar36) {
                      lVar34 = *(longlong *)(lVar51 + 0x3e0);
                      if (*(longlong *)(lVar51 + 0x3e0) == 0) {
                        lVar34 = local_5d8;
                      }
                      iVar17 = *(int *)(lVar34 + (ulonglong)(*(int *)(lVar51 + 1000) - 1U & uVar16)
                                                 * 4);
                      if (iVar17 != -1) {
                        do {
                          if (*(uint *)(*local_5e0 + (longlong)iVar17 * 0x18) == uVar16)
                          goto LAB_142a2046d;
                          iVar17 = *(int *)(*local_5e0 + (longlong)iVar17 * 0x18 + 0x10);
                        } while (iVar17 != -1);
                      }
                    }
                    local_63c = uVar16;
                    if (uVar36 == 0) {
                      *(uint *)(lVar51 + 0x3a8) = uVar26 + 1;
                      if (*(uint *)(lVar51 + 0x3ac) == uVar26) {
                        FUN_14482b872(local_5e0,dVar121);
                      }
                      iVar17 = *(int *)(lVar51 + 0x3c8);
                      if (iVar17 == 0) {
                        iVar15 = -1;
                      }
                      else {
                        iVar15 = iVar17 + 0x1e;
                        if (-1 < iVar17 + -1) {
                          iVar15 = iVar17 + -1;
                        }
                        iVar15 = iVar15 >> 5;
                      }
                      iVar44 = iVar17 + 1;
                      iVar46 = iVar17 + 0x1f;
                      if (-1 < iVar17) {
                        iVar46 = iVar17;
                      }
                      iVar46 = iVar46 >> 5;
                      if (iVar46 == iVar15) {
                        *(int *)(lVar51 + 0x3c8) = iVar44;
                      }
                      else {
                        if (*(int *)(lVar51 + 0x3cc) <= iVar17) {
                          local_5a8._0_4_ = iVar46;
                          iVar15 = iVar17;
                          if (iVar17 + 0x20U < 0xa0) {
                            iVar44 = 0x80;
                          }
                          else {
                            uVar16 = iVar17 + 0x20U >> 5;
                            if (*(int *)(lVar51 + 0x3cc) + 0x1fU < 0xa0) {
                              uVar26 = 4;
                              if (4 < uVar16) {
                                uVar26 = uVar16;
                              }
                            }
                            else {
                              uVar26 = uVar16 + (uVar16 * 3 >> 3) + 0x10;
                            }
                            uVar52 = (ulonglong)(uVar26 * 4);
                            if (DAT_14c872d28 != (longlong *)0x0) {
                              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                                uVar36 = (uint)(uVar52 + 0xf);
                                if (uVar26 < 0x1ffd) {
                                  uVar52 = (ulonglong)
                                           (ushort)(&DAT_14c841d90)
                                                   [0x32 - (byte)(&DAT_14c841e00)[uVar52 + 0xf >> 4]
                                                   ];
                                }
                                else {
                                  uVar35 = (ulonglong)(uVar36 & 0xfffffff0);
                                  lVar51 = local_658;
                                  lVar42 = local_648;
                                  if (uVar35 < 0x7ff1) {
                                    bVar41 = (&DAT_14c841e00)[uVar36 >> 4];
                                    uVar48 = 0x32;
                                    if (0x32 < bVar41) {
                                      uVar48 = (ulonglong)bVar41;
                                    }
                                    uVar43 = 0x32 - (ulonglong)bVar41;
                                    do {
                                      uVar52 = (ulonglong)
                                               (ushort)(&DAT_14c841d90)[uVar43 & 0xffffffff];
                                      if (((&DAT_14c841d90)[uVar43 & 0xffffffff] & 0xf) == 0)
                                      goto LAB_142a230e4;
                                      lVar31 = uVar48 + 1 + uVar43;
                                      uVar43 = uVar43 - 1;
                                    } while (lVar31 != 0x33);
                                  }
                                  uVar52 = (ulonglong)DAT_14c841df8;
                                  if (DAT_14c841df8 < 0x11) {
                                    uVar52 = 0x10;
                                  }
                                  uVar52 = -uVar52 & (uVar35 + uVar52) - 1;
                                }
                              }
                              else {
                                local_538 = dVar121;
                                uVar52 = (**(code **)(*DAT_14c872d28 + 0x60))
                                                   (DAT_14c872d28,uVar52,0);
                                dVar121 = local_538;
                                iVar15 = *(int *)(lVar51 + 0x3c8);
                              }
                            }
LAB_142a230e4:
                            iVar46 = (int)(uVar52 >> 2);
                            iVar44 = iVar46 << 5;
                            if (iVar46 < (int)uVar16) {
                              iVar44 = -0x20;
                            }
                          }
                          *(int *)(lVar51 + 0x3cc) = iVar44;
                          FUN_1446efbd8(local_650,iVar15);
                          iVar44 = *(int *)(lVar51 + 0x3c8) + 1;
                          iVar46 = local_5a8._0_4_;
                        }
                        iVar15 = iVar44 + 0x1f;
                        if (-1 < iVar44) {
                          iVar15 = iVar44;
                        }
                        *(int *)(lVar51 + 0x3c8) = iVar44;
                        if (iVar44 % 0x20 != 0) {
                          puVar28 = *(uint **)(lVar51 + 0x3c0);
                          if (*(uint **)(lVar51 + 0x3c0) == (uint *)0x0) {
                            puVar28 = local_650;
                          }
                          bVar41 = -(char)(iVar44 % 0x20);
                          puVar28[iVar15 >> 5] =
                               (puVar28[iVar15 >> 5] << (bVar41 & 0x1f)) >> (bVar41 & 0x1f);
                        }
                      }
                      lVar31 = (longlong)SUB84(dVar121,0);
                      puVar28 = *(uint **)(lVar51 + 0x3c0);
                      if (*(uint **)(lVar51 + 0x3c0) == (uint *)0x0) {
                        puVar28 = local_650;
                      }
                      bVar41 = (byte)iVar17 & 0x1f;
                      puVar28[iVar46] =
                           puVar28[iVar46] & (-2 << bVar41 | 0xfffffffeU >> 0x20 - bVar41);
                    }
                    else {
                      plVar22 = (longlong *)(lVar51 + 0x3a0);
                      dVar121 = (double)(ulonglong)*(uint *)(lVar51 + 0x3d0);
                      lVar31 = (longlong)(int)*(uint *)(lVar51 + 0x3d0);
                      iVar17 = *(int *)(*plVar22 + 4 + lVar31 * 0x18);
                      *(int *)(lVar51 + 0x3d0) = iVar17;
                      *(uint *)(lVar51 + 0x3d4) = uVar36 - 1;
                      lVar51 = local_658;
                      lVar42 = local_648;
                      if (uVar36 - 1 != 0) {
                        *(undefined4 *)(*plVar22 + (longlong)iVar17 * 0x18) = 0xffffffff;
                      }
                    }
                    iVar17 = SUB84(dVar121,0);
                    puVar28 = *(uint **)(lVar51 + 0x3c0);
                    if (*(uint **)(lVar51 + 0x3c0) == (uint *)0x0) {
                      puVar28 = local_650;
                    }
                    iVar15 = iVar17 + 0x1f;
                    if (-1 < iVar17) {
                      iVar15 = iVar17;
                    }
                    puVar28[iVar15 >> 5] = puVar28[iVar15 >> 5] | 1 << (SUB81(dVar121,0) & 0x1f);
                    puVar28 = (uint *)(*(longlong *)(lVar51 + 0x3a0) + lVar31 * 0x18);
                    *puVar28 = local_63c;
                    *(longlong **)(puVar28 + 2) = plVar38;
                    puVar28[4] = 0xffffffff;
                    uVar16 = *(int *)(lVar51 + 0x3a8) - *(int *)(lVar51 + 0x3d4);
                    if (1 < uVar16) {
                      lVar31 = *(longlong *)(lVar51 + 0x3e0);
                      if (*(longlong *)(lVar51 + 0x3e0) == 0) {
                        lVar31 = local_5d8;
                      }
                      uVar26 = *(uint *)(lVar31 + (ulonglong)
                                                  (*(int *)(lVar51 + 1000) - 1U & local_63c) * 4);
                      if (uVar26 != 0xffffffff) {
                        do {
                          puVar2 = (uint *)(*local_5e0 + (longlong)(int)uVar26 * 0x18);
                          if (*puVar2 == local_63c) {
                            uVar19 = *(undefined8 *)(puVar28 + 2);
                            *(undefined8 *)puVar2 = *(undefined8 *)puVar28;
                            *(undefined8 *)(puVar2 + 2) = uVar19;
                            FUN_146eee468(local_5e0,(ulonglong)dVar121 & 0xffffffff);
                            goto LAB_142a2045c;
                          }
                          uVar26 = puVar2[4];
                        } while (uVar26 != 0xffffffff);
                      }
                    }
                    uVar26 = 1;
                    if (3 < uVar16) {
                      uVar52 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
                      lVar31 = 0x3f;
                      if (uVar52 != 0) {
                        for (; uVar52 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                        }
                      }
                      uVar26 = 1 << ((byte)lVar31 & 0x1f);
                    }
                    if (((int)uVar16 < 1) || ((int)uVar26 <= *(int *)(lVar51 + 1000))) {
                      uVar16 = *(int *)(lVar51 + 1000) - 1U & local_63c;
                      puVar28[5] = uVar16;
                      lVar31 = *(longlong *)(lVar51 + 0x3e0);
                      if (*(longlong *)(lVar51 + 0x3e0) == 0) {
                        lVar31 = local_5d8;
                      }
                      puVar28[4] = *(uint *)(lVar31 + ((longlong)*(int *)(lVar51 + 1000) - 1U &
                                                      (longlong)(int)uVar16) * 4);
                      lVar31 = *(longlong *)(lVar51 + 0x3e0);
                      if (*(longlong *)(lVar51 + 0x3e0) == 0) {
                        lVar31 = local_5d8;
                      }
                      *(int *)(lVar31 + ((longlong)*(int *)(lVar51 + 1000) - 1U &
                                        (longlong)(int)uVar16) * 4) = iVar17;
                    }
                    else {
                      *(uint *)(lVar51 + 1000) = uVar26;
                      if (*(longlong *)(lVar51 + 0x3e0) != 0) {
                        FUN_1446efa72(local_590,0,0,4);
                        uVar26 = *(uint *)(lVar51 + 1000);
                      }
                      if (uVar26 == 1) {
                        if (*local_590 != 0) {
                          FUN_1446efa72(local_590,0,0,4);
                        }
LAB_142a22e10:
                        uVar16 = 0;
                        do {
                          lVar31 = *(longlong *)(lVar51 + 0x3e0);
                          if (*(longlong *)(lVar51 + 0x3e0) == 0) {
                            lVar31 = local_5d8;
                          }
                          *(undefined4 *)
                           (lVar31 + (ulonglong)(*(int *)(lVar51 + 1000) + 0x7fffffffU & uVar16) * 4
                           ) = 0xffffffff;
                          uVar16 = uVar16 + 1;
                        } while (uVar26 != uVar16);
                      }
                      else {
                        if (uVar26 == 0) goto LAB_142a2045c;
                        FUN_1446efa72(local_590,0,uVar26,4);
                        if (0 < (int)uVar26) goto LAB_142a22e10;
                      }
                      iVar17 = *(int *)(lVar51 + 0x3c8);
                      if (iVar17 == 0) {
                        uVar52 = 0;
                        uVar35 = 1;
                        iVar44 = 0;
                        iVar15 = 0;
                      }
                      else {
                        puVar28 = *(uint **)(lVar51 + 0x3c0);
                        if (*(uint **)(lVar51 + 0x3c0) == (uint *)0x0) {
                          puVar28 = local_650;
                        }
                        uVar16 = *puVar28;
                        if (uVar16 == 0) {
                          iVar15 = iVar17 + 0x1e;
                          if (-1 < iVar17 + -1) {
                            iVar15 = iVar17 + -1;
                          }
                          uVar52 = 0;
                          uVar35 = (ulonglong)(uint)(iVar15 >> 5);
                          if (iVar15 >> 5 < 1) {
                            uVar35 = uVar52;
                          }
                          iVar15 = 0;
                          do {
                            if (uVar35 == uVar52) goto LAB_142a2045c;
                            iVar15 = iVar15 + 0x20;
                            uVar16 = puVar28[uVar52 + 1];
                            uVar52 = uVar52 + 1;
                          } while (uVar16 == 0);
                        }
                        else {
                          uVar52 = 0;
                          iVar15 = 0;
                        }
                        uVar35 = (ulonglong)(-uVar16 & uVar16);
                        uVar48 = uVar35 * 2 + 1;
                        lVar31 = 0x3f;
                        if (uVar48 != 0) {
                          for (; uVar48 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                          }
                        }
                        iVar44 = (iVar15 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                        if (iVar17 <= iVar44) {
                          iVar44 = iVar17;
                        }
                      }
                      if (iVar44 < iVar17) {
                        uVar16 = 0xffffffff;
                        local_618._0_8_ = unaff_RBP;
                        do {
                          local_5a8._0_4_ = iVar15;
                          lVar31 = *(longlong *)(lVar51 + 0x3a0);
                          lVar42 = (longlong)iVar44;
                          uVar48 = (longlong)*(int *)(lVar51 + 1000) - 1U &
                                   (longlong)*(int *)(lVar31 + lVar42 * 0x18);
                          iVar17 = (int)uVar48;
                          *(int *)(lVar31 + 0x14 + lVar42 * 0x18) = iVar17;
                          lVar20 = *(longlong *)(lVar51 + 0x3e0);
                          if (*(longlong *)(lVar51 + 0x3e0) == 0) {
                            lVar20 = local_5d8;
                          }
                          *(undefined4 *)(lVar31 + 0x10 + lVar42 * 0x18) =
                               *(undefined4 *)
                                (lVar20 + ((longlong)*(int *)(lVar51 + 1000) - 1U & uVar48) * 4);
                          lVar31 = *(longlong *)(lVar51 + 0x3e0);
                          if (*(longlong *)(lVar51 + 0x3e0) == 0) {
                            lVar31 = local_5d8;
                          }
                          *(int *)(lVar31 + ((longlong)iVar17 &
                                            (longlong)*(int *)(lVar51 + 1000) - 1U) * 4) = iVar44;
                          uVar16 = ~(uint)uVar35 & uVar16;
                          puVar28 = *(uint **)(lVar51 + 0x3c0);
                          if (*(uint **)(lVar51 + 0x3c0) == (uint *)0x0) {
                            puVar28 = local_650;
                          }
                          iVar17 = *(int *)(lVar51 + 0x3c8);
                          iVar44 = (int)uVar52;
                          lVar31 = (longlong)iVar44;
                          uVar26 = puVar28[lVar31] & uVar16;
                          lVar42 = local_648;
                          if (uVar26 == 0) {
                            iVar46 = iVar17 + 0x1e;
                            if (-1 < iVar17 + -1) {
                              iVar46 = iVar17 + -1;
                            }
                            iVar46 = iVar46 >> 5;
                            iVar32 = iVar46;
                            if (iVar46 < iVar44) {
                              iVar32 = iVar44;
                            }
                            if (iVar46 <= iVar44) break;
                            lVar20 = 0;
                            while( true ) {
                              iVar15 = iVar15 + 0x20;
                              uVar26 = puVar28[lVar31 + lVar20 + 1];
                              if (uVar26 != 0) break;
                              lVar20 = lVar20 + 1;
                              if (iVar32 - lVar31 == lVar20) goto LAB_142a2045c;
                            }
                            uVar52 = (ulonglong)(iVar44 + (int)lVar20 + 1);
                            uVar16 = 0xffffffff;
                          }
                          uVar35 = (ulonglong)(-uVar26 & uVar26);
                          uVar48 = uVar35 * 2 + 1;
                          lVar31 = 0x3f;
                          if (uVar48 != 0) {
                            for (; uVar48 >> lVar31 == 0; lVar31 = lVar31 + -1) {
                            }
                          }
                          iVar44 = (iVar15 - ((uint)lVar31 ^ 0x3f)) + 0x3e;
                        } while (iVar44 < iVar17);
                      }
                    }
LAB_142a2045c:
                    lVar20 = (longlong)(int)plVar38[1];
                    lVar31 = *plVar38;
                    uVar16 = local_63c;
                  }
LAB_142a2046d:
                  lVar33 = local_628;
                  lVar34 = *(longlong *)(lVar31 + 0x48);
                  lVar27 = lVar20 * 0x10;
                  dStack_1e0 = (double)*(float *)(lVar34 + 0xc + lVar27);
                  local_1e8 = (double)*(float *)(lVar34 + 8 + lVar27);
                  local_1f8._8_8_ = (double)*(float *)(lVar34 + 4 + lVar27);
                  local_1f8._0_8_ = (double)*(float *)(lVar34 + lVar27);
                  pdVar23 = (double *)(*(longlong *)(lVar31 + 0x28) + lVar20 * 0x18);
                  local_1d8 = *pdVar23;
                  dStack_1d0 = pdVar23[1];
                  local_1c8 = *(double *)(*(longlong *)(lVar31 + 0x28) + 0x10 + lVar20 * 0x18);
                  uStack_1c0 = 0;
                  local_1b8 = 1.0;
                  dStack_1b0 = 1.0;
                  local_1a8 = 1.0;
                  dStack_1a0 = 0.0;
                  FUN_1447dc19e((longlong)(int)*(longlong *)(local_638._0_8_ + 8) * 0x60 +
                                *(longlong *)(*(longlong *)local_638._0_8_ + 0x5c0),&local_178);
                  dVar69 = dStack_160;
                  dVar121 = local_168;
                  local_5a8._8_8_ = dStack_170;
                  local_5a8._0_8_ = local_178;
                  uVar19 = local_158._0_8_;
                  uVar124 = stack0xfffffffffffffeb0;
                  local_538 = local_148;
                  dStack_530 = dStack_140;
                  local_278 = local_138;
                  dStack_270 = dStack_130;
                  local_268 = (double)local_128._0_8_;
                  uStack_260 = local_128._8_8_;
                  local_4c8 = stack0xfffffffffffffeb0;
                  uStack_4c0 = 0;
                  lVar20 = (longlong)(int)plVar38[1];
                  lVar31 = *(longlong *)(*plVar38 + 0x2c0);
                  if (DAT_14c75f3cd == '\x01') {
                    uVar47 = (ushort)*(byte *)(lVar31 + 0xd + lVar20 * 0x10);
                  }
                  else {
                    uVar47 = 0;
                  }
                  cVar4 = *(char *)(lVar31 + 0xb + lVar20 * 0x10);
                  unaff_RBP = (ulonglong)
                              ((uint)unaff_RBP & 0xffffe2ff | (uint)uVar47 << 8 |
                               (uint)(cVar4 == '\x01' || cVar4 == '\x04') << 0xb |
                               (uint)(*(int *)(*(longlong *)
                                                (*(longlong *)(*plVar38 + 200) + lVar20 * 8) + 0x1c)
                                     == 0xc) << 0xc | 0x400);
                  FUN_142a23622(local_518,local_638._0_8_,&local_178);
                  bVar24 = 1;
                }
                if (DAT_14c75f3bc == '\x01') {
                  lVar31 = *plVar38;
                  lVar20 = (longlong)(int)plVar38[1];
                  lVar34 = lVar20 * 0x10;
                  if (*(char *)(*(longlong *)(lVar31 + 0x2c0) + 0xd + lVar34) == '\0') {
                    uVar14 = local_638._0_8_;
                    lVar27 = *(longlong *)(lVar31 + 0x48);
                    dStack_1e0 = (double)*(float *)(lVar27 + 0xc + lVar34);
                    local_1e8 = (double)*(float *)(lVar27 + 8 + lVar34);
                    local_1f8._0_8_ = (undefined8)*(float *)(lVar27 + lVar34);
                    local_1f8._8_8_ = (double)*(float *)(lVar27 + 4 + lVar34);
                    pdVar23 = (double *)(*(longlong *)(lVar31 + 0x28) + lVar20 * 0x18);
                    local_1d8 = *pdVar23;
                    dStack_1d0 = pdVar23[1];
                    local_1c8 = *(double *)(*(longlong *)(lVar31 + 0x28) + 0x10 + lVar20 * 0x18);
                    uStack_1c0 = 0;
                    local_1b8 = 1.0;
                    dStack_1b0 = 1.0;
                    local_1a8 = 1.0;
                    dStack_1a0 = 0.0;
                    FUN_1447dc19e((longlong)(int)*(longlong *)(local_638._0_8_ + 8) * 0x60 +
                                  *(longlong *)(*(longlong *)local_638._0_8_ + 0x5c0),&local_178,
                                  local_1f8);
                    lVar31 = *(longlong *)uVar14;
                    lVar34 = (longlong)(int)*(longlong *)(uVar14 + 8);
                    lVar20 = *(longlong *)(lVar31 + 0x28);
                    dVar72 = *(double *)(lVar20 + lVar34 * 0x18);
                    if ((dVar72 != (double)local_158._0_8_) ||
                       (NAN(dVar72) || NAN((double)local_158._0_8_))) {
LAB_142a20815:
                      FUN_142a23622(local_518,local_638._0_8_,&local_178);
                    }
                    else {
                      dVar72 = *(double *)(lVar20 + 8 + lVar34 * 0x18);
                      if ((dVar72 != stack0xfffffffffffffeb0) ||
                         (((NAN(dVar72) || NAN(stack0xfffffffffffffeb0) ||
                           (dVar72 = *(double *)(lVar20 + 0x10 + lVar34 * 0x18), dVar72 != local_148
                           )) || (NAN(dVar72) || NAN(local_148))))) goto LAB_142a20815;
                      lVar31 = *(longlong *)(lVar31 + 0x48);
                      lVar34 = lVar34 * 0x10;
                      auVar75._8_8_ =
                           -(ulonglong)((double)*(float *)(lVar31 + 4 + lVar34) != dStack_170);
                      auVar75._0_8_ = -(ulonglong)((double)*(float *)(lVar31 + lVar34) != local_178)
                      ;
                      auVar55._8_8_ =
                           -(ulonglong)((double)*(float *)(lVar31 + 0xc + lVar34) != dStack_160);
                      auVar55._0_8_ =
                           -(ulonglong)((double)*(float *)(lVar31 + 8 + lVar34) != local_168);
                      iVar17 = movmskpd((int)lVar34,auVar75);
                      uVar26 = movmskpd((int)lVar31,auVar55);
                      if ((uVar26 & 0x3fffffff) != 0 || iVar17 != 0) goto LAB_142a20815;
                    }
                    fVar53 = (float)DAT_14c8464f0;
                    fVar71 = (float)DAT_14c8464e8;
                    fVar68 = (float)DAT_14c8464e0;
                    fVar86 = fVar53;
                    fVar120 = fVar68;
                    fVar126 = fVar71;
                    goto LAB_142a20856;
                  }
                }
                uVar26 = uVar16;
                if (bVar24 == 0) goto LAB_142a206b7;
              }
              else {
LAB_142a2018f:
                plVar38 = plVar22;
                if (((((int)uVar16 < 0) || (*(int *)(local_658 + 0x6c0) <= (int)uVar16)) ||
                    ((*(uint *)(lVar21 + (ulonglong)(uVar16 >> 5) * 4) & uVar50) == 0)) ||
                   (*(int *)(*(longlong *)(*(longlong *)(local_658 + 0x688) + 0x120) +
                            (ulonglong)uVar16 * 4) == -1)) {
                  *(longlong **)(lVar31 + lVar49 * 8) = plVar38;
                  if (plVar38 != (longlong *)0x0) goto LAB_142a20234;
                  plVar38 = (longlong *)0x0;
                  uVar26 = 0xffffffff;
                  if (bVar41 != 0) goto LAB_142a206b7;
                }
                else {
                  local_558 = 0;
                  FUN_140148510(local_528,local_5a8._0_8_,0);
                  unaff_RBP = (ulonglong)(uVar36 & 0xfe07);
                  *(longlong **)(*(longlong *)(lVar51 + 800) + lVar49 * 8) = plVar38;
                  bVar24 = 1;
                  if (plVar38 != (longlong *)0x0) goto LAB_142a20234;
                }
                uVar16 = 0xffffffff;
                plVar38 = (longlong *)0x0;
              }
LAB_142a20856:
              local_54c = fVar86;
              uVar18 = (undefined4)((ulonglong)dVar69 >> 0x20);
              plVar22 = local_4f8;
              if (*(char *)(lVar51 + 0x6e8) == '\0') {
                plVar22 = (longlong *)(*(longlong *)(lVar51 + 0x688) + 0xc0);
              }
              lVar31 = local_5d0 * 0x30;
              local_4f0 = (float *)(*plVar22 + lVar31);
              local_63c = uVar16;
              local_550 = fVar71;
              if ((plVar38 == (longlong *)0x0) ||
                 ((*(byte *)(*(longlong *)(*plVar38 + 0x680) + (longlong)(int)plVar38[1]) & 1) != 0)
                 ) {
                local_2f8 = local_5a8._0_8_;
                uStack_2f0 = local_5a8._8_8_;
                local_2e8._8_4_ = SUB84(dVar69,0);
                local_2e8._0_8_ = dVar121;
                local_2e8._12_4_ = uVar18;
                uStack_2d0 = local_4c8;
                local_2c8 = local_538;
                uStack_2c0 = 0;
                local_2b8 = 0x3ff0000000000000;
                uStack_2b0 = 0x3ff0000000000000;
                local_2a8 = 0x3ff0000000000000;
                uStack_2a0 = 0;
                pdVar23 = local_358;
                pdVar29 = (double *)(local_5d0 * 0x60 + *(longlong *)(local_4a8 + 0x10));
                pdVar39 = pdVar23;
                local_2d8 = uVar19;
                for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
                  *pdVar39 = *pdVar29;
                  pdVar29 = pdVar29 + 1;
                  pdVar39 = pdVar39 + 1;
                }
                FUN_144a2c3ca(pdVar23,local_1f8,&local_2f8);
                uVar25 = SUB84(pdVar23,0);
                local_178 = 0.0;
                dStack_170 = 0.0;
                local_168 = 0.0;
                dStack_160 = 1.0;
                local_148 = 0.0;
                dStack_140 = 0.0;
                _local_158 = ZEXT816(0);
                local_138 = 1.0;
                dStack_130 = 1.0;
                local_128 = ZEXT816(0x3ff0000000000000);
                dVar72 = *(double *)(lVar51 + 0xb0) * *(double *)(lVar51 + 0xb0) +
                         *(double *)(lVar51 + 0xa0) * *(double *)(lVar51 + 0xa0);
                dVar94 = *(double *)(lVar51 + 0xb8) * *(double *)(lVar51 + 0xb8) +
                         *(double *)(lVar51 + 0xa8) * *(double *)(lVar51 + 0xa8);
                auVar88._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar72 + dVar94)));
                auVar88._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar72 + dVar94)));
                iVar17 = movmskpd((int)&local_138,auVar88);
                local_438._8_4_ = SUB84(dVar69,0);
                local_438._0_8_ = dVar121;
                local_438._12_4_ = uVar18;
                local_5c8 = fVar126;
                local_5c4 = fVar120;
                local_5c0 = fVar68;
                local_5bc = fVar53;
                local_448 = uVar19;
                uStack_440 = uVar124;
                if (iVar17 == 0) {
                  auVar12._8_8_ = dStack_1b0;
                  auVar12._0_8_ = local_1b8;
                  auVar13._8_8_ = dStack_1a0;
                  auVar13._0_8_ = local_1a8;
                  auVar55 = minpd(auVar12,*(undefined1 (*) [16])(lVar51 + 0xe0));
                  auVar75 = minpd(auVar13,*(undefined1 (*) [16])(lVar51 + 0xf0));
                  auVar56._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
                  auVar56._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
                  iVar17 = movmskpd(0,auVar56);
                  auVar76._8_8_ = -(ulonglong)(auVar75._8_8_ < 0.0);
                  auVar76._0_8_ = -(ulonglong)(auVar75._0_8_ < 0.0);
                  uVar16 = movmskpd(uVar25,auVar76);
                  if ((uVar16 & 0x3fffffff) != 0 || iVar17 != 0) {
                    pdVar23 = &local_178;
                    pdVar29 = pdVar23;
                    FUN_1402db8fa(pdVar23,local_1f8,local_520);
                    uVar25 = SUB84(pdVar29,0);
                    local_578 = local_148;
                    dStack_570 = dStack_140;
                    local_588._8_8_ = dStack_130;
                    local_588._0_8_ = local_138;
                    local_638 = local_128;
                    uVar18 = local_158._0_4_;
                    uVar105 = local_158._4_4_;
                    uVar106 = local_158._8_4_;
                    uVar107 = uStack_14c;
                    dVar72 = local_168;
                    dVar94 = dStack_160;
                    goto LAB_142a22d5d;
                  }
                  puVar30 = *(undefined4 **)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
                  if ((int)puVar30[0x44] < DAT_14c8460b0) {
                    puVar30 = &DAT_14c8460b0;
                    FUN_144b3d300();
                    if (DAT_14c8460b0 == -1) {
                      DAT_14c8460a0 = 0x322bcc77322bcc77;
                      DAT_14c8460a8 = 0x322bcc77322bcc77;
                      puVar30 = &DAT_14c8460b0;
                      _Init_thread_footer();
                    }
                  }
                  uVar25 = SUB84(puVar30,0);
                  auVar55 = *(undefined1 (*) [16])(lVar51 + 0xe0);
                  auVar75 = divpd(_DAT_149934d80,auVar55);
                  auVar88 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(lVar51 + 0xf0))
                  ;
                  dVar54 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar55._0_8_))
                                   & auVar75._0_8_);
                  dVar70 = (double)(-(ulonglong)
                                     ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) <
                                     ABS(auVar55._8_8_)) & auVar75._8_8_);
                  local_578 = (double)(-(ulonglong)
                                        ((double)(float)DAT_14c8460a8 <
                                        ABS(SUB168(*(undefined1 (*) [16])(lVar51 + 0xf0),0))) &
                                      auVar88._0_8_);
                  dVar110 = local_1d8 - *(double *)(lVar51 + 0xc0);
                  dVar115 = dStack_1d0 - *(double *)(lVar51 + 200);
                  dVar117 = local_1c8 - *(double *)(lVar51 + 0xd0);
                  dVar94 = -*(double *)(lVar51 + 0xa0);
                  dVar100 = -*(double *)(lVar51 + 0xa8);
                  dVar73 = *(double *)(lVar51 + 0xb0) * -1.0;
                  dVar87 = *(double *)(lVar51 + 0xb8) * 1.0;
                  dVar121 = dVar115 * dVar94 - dVar110 * dVar100;
                  dVar69 = dVar117 * dVar100 - dVar115 * dVar73;
                  dVar72 = dVar110 * dVar73 - dVar117 * dVar94;
                  dVar125 = dVar87 * 0.0 - dVar87 * 0.0;
                  dVar69 = dVar69 + dVar69;
                  dVar72 = dVar72 + dVar72;
                  dVar121 = dVar121 + dVar121;
                  dVar125 = dVar125 + dVar125;
                  local_588._0_8_ = local_1b8 * dVar54;
                  local_588._8_8_ = dStack_1b0 * dVar70;
                  dVar74 = local_1a8 * local_578;
                  uVar18 = SUB84(dStack_1a0 * 0.0,0);
                  uVar105 = (undefined4)((ulonglong)(dStack_1a0 * 0.0) >> 0x20);
                  dVar54 = ((dVar121 * dVar100 - dVar73 * dVar72) + dVar87 * dVar69 + dVar110) *
                           dVar54;
                  dVar70 = ((dVar69 * dVar73 - dVar121 * dVar94) + dVar87 * dVar72 + dVar115) *
                           dVar70;
                  local_578 = ((dVar72 * dVar94 - dVar100 * dVar69) + dVar87 * dVar121 + dVar117) *
                              local_578;
                  dStack_570 = ((dVar125 * dVar87 - dVar125 * dVar87) + dVar87 * dVar125 + 0.0) *
                               0.0;
                  dVar69 = *(double *)(lVar51 + 0xa0);
                  dVar121 = *(double *)(lVar51 + 0xa0);
                  dVar110 = *(double *)(lVar51 + 0xa8);
                  dVar100 = *(double *)(lVar51 + 0xa8);
                  dVar72 = dStack_1e0 * dVar73 * 1.0 +
                           dVar110 * (double)local_1f8._0_8_ +
                           (dVar87 * local_1e8 - dVar69 * (double)local_1f8._8_8_ * 1.0);
                  dVar94 = local_1e8 * dVar73 * -1.0 +
                           dVar100 * (double)local_1f8._8_8_ +
                           (dVar87 * dStack_1e0 - dVar121 * (double)local_1f8._0_8_ * -1.0);
                  local_138 = (double)local_588._0_8_;
                  dStack_130 = (double)local_588._8_8_;
                  local_638._8_4_ = uVar18;
                  local_638._0_8_ = dVar74;
                  local_638._12_4_ = uVar105;
                  local_128._8_4_ = uVar18;
                  local_128._0_8_ = dVar74;
                  local_128._12_4_ = uVar105;
                  local_158._8_4_ = SUB84(dVar70,0);
                  local_158._0_8_ = dVar54;
                  uStack_14c = (int)((ulonglong)dVar70 >> 0x20);
                  local_148 = local_578;
                  dStack_140 = dStack_570;
                  local_178 = (double)local_1f8._8_8_ * dVar73 * -1.0 +
                              (((double)local_1f8._0_8_ * dVar87 - dVar69 * dStack_1e0 * 1.0) -
                              local_1e8 * dVar110);
                  dStack_170 = (double)local_1f8._0_8_ * dVar73 * 1.0 +
                               (((double)local_1f8._8_8_ * dVar87 - dVar121 * local_1e8 * -1.0) -
                               dStack_1e0 * dVar100);
                  pdVar23 = &local_178;
                  dVar121 = (double)local_438._0_8_;
                  dVar69 = (double)local_438._8_8_;
                  uVar19 = local_448;
                  fVar53 = local_5bc;
                  fVar68 = local_5c0;
                  fVar120 = local_5c4;
                  fVar126 = local_5c8;
                }
                else {
                  local_578 = DAT_14c8464b0;
                  dStack_570 = DAT_14c8464b8;
                  local_588._8_8_ = DAT_14c8464c8;
                  local_588._0_8_ = DAT_14c8464c0;
                  local_638._8_8_ = dRam000000014c8464d8;
                  local_638._0_8_ = DAT_14c8464d0;
                  pdVar23 = &DAT_14c846480;
                  uVar18 = (undefined4)DAT_14c8464a0;
                  uVar105 = DAT_14c8464a0._4_4_;
                  uVar106 = (undefined4)DAT_14c8464a8;
                  uVar107 = DAT_14c8464a8._4_4_;
                  dVar72 = DAT_14c846490;
                  dVar94 = DAT_14c846498;
LAB_142a22d5d:
                  dVar70 = (double)CONCAT44(uVar107,uVar106);
                  dVar54 = (double)CONCAT44(uVar105,uVar18);
                }
                dVar100 = *pdVar23;
                dVar110 = pdVar23[1];
                dVar74 = dVar72 * dVar72 + dVar100 * dVar100;
                dVar73 = dVar94 * dVar94 + dVar110 * dVar110;
                auVar77._0_8_ = dVar74 + dVar73;
                auVar77._8_8_ = dVar74 + dVar73;
                auVar57._8_8_ = -(ulonglong)(1e-08 <= auVar77._8_8_);
                auVar57._0_8_ = -(ulonglong)(1e-08 <= auVar77._0_8_);
                auVar55 = sqrtpd(auVar77,auVar77);
                auVar55 = divpd(_DAT_149934d80,auVar55);
                auVar89._0_8_ = auVar55._0_8_ * dVar72;
                auVar89._8_8_ = auVar55._8_8_ * dVar94;
                local_548 = (double)((ulonglong)(dVar100 * auVar55._0_8_) &
                                    -(ulonglong)(1e-08 <= auVar77._0_8_));
                dStack_540 = (double)((ulonglong)(dVar110 * auVar55._8_8_) &
                                     -(ulonglong)(1e-08 <= auVar77._8_8_));
                local_618 = blendvpd(_DAT_149935300,auVar89,auVar57);
                auVar128 = local_588;
                if ((char)local_61c == '\0') {
                  auVar78._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_318._8_8_));
                  auVar78._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_318._0_8_));
                  uVar16 = movmskpd((int)pdVar23,auVar78);
                  auVar79._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_308._8_8_));
                  auVar79._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_308._0_8_));
                  iVar17 = movmskpd(uVar25,auVar79);
                  uVar26 = iVar17 << 2 | uVar16;
                  local_608 = local_308;
                  if (uVar26 == 0) {
                    dVar121 = (double)CONCAT44(DAT_14c8464a0._4_4_,(undefined4)DAT_14c8464a0);
                    dVar69 = (double)CONCAT44(DAT_14c8464a8._4_4_,(undefined4)DAT_14c8464a8);
                    dVar72 = DAT_14c8464c0;
                    dVar94 = DAT_14c8464c8;
                    dVar100 = DAT_14c8464d0;
                    dVar110 = dRam000000014c8464d8;
                    dVar74 = DAT_14c846480;
                    dVar73 = DAT_14c846488;
                    dVar87 = DAT_14c846490;
                    dVar115 = DAT_14c846498;
                    dVar117 = DAT_14c8464b0;
                    dVar125 = DAT_14c8464b8;
                  }
                  else {
                    auVar75 = divpd(_DAT_149934d80,local_318);
                    auVar55 = divpd(ZEXT816(0x3ff0000000000000),local_308);
                    dVar72 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_318._0_8_)) &
                                     auVar75._0_8_);
                    dVar94 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_318._8_8_)) &
                                     auVar75._8_8_);
                    dVar100 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_308._0_8_)) &
                                      auVar55._0_8_);
                    dVar74 = -local_358[0];
                    dVar73 = -local_358[1];
                    dVar87 = local_358[2] * -1.0;
                    dVar115 = local_358[3] * 1.0;
                    dVar121 = local_338 * dVar72;
                    dVar69 = dStack_330 * dVar94;
                    dVar122 = local_328 * dVar100;
                    dVar125 = dVar69 * dVar74 - dVar73 * dVar121;
                    dVar119 = dVar122 * dVar73 - dVar87 * dVar69;
                    dVar117 = dVar121 * dVar87 - dVar74 * dVar122;
                    dVar119 = dVar119 + dVar119;
                    dVar117 = dVar117 + dVar117;
                    dVar125 = dVar125 + dVar125;
                    dVar121 = 0.0 - ((dVar125 * dVar73 - dVar117 * dVar87) +
                                    dVar115 * dVar119 + dVar121);
                    dVar69 = 0.0 - (dVar125 * local_358[0] + dVar87 * dVar119 +
                                   dVar115 * dVar117 + dVar69);
                    dVar110 = 0.0;
                    dVar117 = 0.0 - (dVar115 * dVar125 + dVar122 +
                                    (dVar117 * dVar74 - dVar119 * dVar73));
                    dVar125 = 0.0;
                  }
                  auVar58._8_8_ = dVar94;
                  auVar58._0_8_ = dVar72;
                  auVar11._8_8_ = dStack_450;
                  auVar11._0_8_ = local_458;
                  auVar55 = minpd(auVar58,auVar11);
                  auVar101._8_8_ = dVar110;
                  auVar101._0_8_ = dVar100;
                  auVar75 = minpd(auVar101,local_4e8);
                  auVar59._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
                  auVar59._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
                  iVar17 = movmskpd(uVar16,auVar59);
                  auVar102._8_8_ = -(ulonglong)(auVar75._8_8_ < 0.0);
                  auVar102._0_8_ = -(ulonglong)(auVar75._0_8_ < 0.0);
                  uVar16 = movmskpd(uVar26,auVar102);
                  dVar119 = local_4e8._8_8_;
                  if ((uVar16 & 0x3fffffff) == 0 && iVar17 == 0) {
                    dVar122 = dVar73 * (double)local_428._0_8_ * -1.0 +
                              local_3d8 * dVar115 * 1.0 + local_3e8 * dVar74 + local_3f8 * dVar87;
                    dVar93 = dVar74 * (double)local_428._8_8_ * 1.0 +
                             dStack_3d0 * dVar87 * -1.0 + dStack_3e0 * dVar73 + dStack_3f0 * dVar115
                    ;
                    auVar80._0_8_ =
                         dVar115 * (double)local_428._0_8_ * 1.0 +
                         ((local_3d8 * dVar73 * 1.0 + local_3e8 * dVar87) - local_3f8 * dVar74);
                    auVar80._8_8_ =
                         dVar87 * (double)local_428._8_8_ * -1.0 +
                         ((dStack_3d0 * dVar74 * -1.0 + dStack_3e0 * dVar115) - dStack_3f0 * dVar73)
                    ;
                    dVar121 = dVar121 * local_458;
                    dVar69 = dVar69 * dStack_450;
                    dVar117 = dVar117 * (double)local_4e8._0_8_;
                    dVar125 = dVar125 * dVar119;
                    dVar111 = dVar69 * local_478 - (double)local_418._0_8_ * dVar121;
                    dVar104 = dVar117 * dStack_470 - (double)local_418._8_8_ * dVar69;
                    dVar87 = dVar121 * local_4d8 - local_408 * dVar117;
                    dVar115 = dVar125 * dStack_4d0 - dStack_400 * dVar125;
                    dVar104 = dVar104 + dVar104;
                    dVar87 = dVar87 + dVar87;
                    dVar111 = dVar111 + dVar111;
                    dVar115 = dVar115 + dVar115;
                    dVar74 = (dVar111 * dStack_470 - (double)local_418._8_8_ * dVar87) +
                             local_3e8 * dVar104 + dVar121 + local_468;
                    dVar73 = (dVar104 * local_4d8 - dVar111 * local_408) +
                             dStack_3e0 * dVar87 + dVar69 + dStack_460;
                    dVar121 = (dVar87 * local_478 - (double)local_418._0_8_ * dVar104) +
                              local_3e8 * dVar111 + dVar117 + local_488;
                    dVar69 = (dVar115 * dStack_4d0 - dVar115 * dStack_400) +
                             dStack_3e0 * dVar115 + dVar125 + dStack_480;
                    auVar108._8_8_ = dVar110 * dVar119;
                    auVar108._0_8_ = dVar100 * (double)local_4e8._0_8_;
                    local_5b8._8_8_ = dVar94 * dStack_450;
                    local_5b8._0_8_ = dVar72 * local_458;
                    uVar18 = 0;
                    auVar55 = _DAT_149934d80;
                  }
                  else {
                    local_5f8._8_8_ = dVar119 * dVar110;
                    local_5f8._0_8_ = (double)local_4e8._0_8_ * dVar100;
                    dVar110 = dVar73 + dVar73;
                    dVar125 = dVar87 + dVar87;
                    dVar122 = dVar74 * (dVar74 + dVar74);
                    local_228 = (1.0 - (dVar122 + dVar73 * dVar110)) * dVar100;
                    dVar119 = (dVar74 + dVar74) * dVar115;
                    local_238 = (dVar74 * dVar125 + dVar110 * dVar115) * dVar100;
                    local_258 = (dVar110 * dVar74 - dVar125 * dVar115) * dVar94;
                    dStack_230 = (dVar125 * dVar73 - dVar119) * dVar100;
                    local_5b8._8_8_ = dStack_450 * dVar94;
                    local_5b8._0_8_ = local_458 * dVar72;
                    local_278 = (1.0 - (dVar87 * dVar125 + dVar73 * dVar110)) * dVar72;
                    dStack_250 = (1.0 - (dVar87 * dVar125 + dVar122)) * dVar94;
                    dStack_270 = (dVar110 * dVar74 + dVar125 * dVar115) * dVar72;
                    local_248 = (dVar125 * dVar73 + dVar119) * dVar94;
                    local_268 = (dVar74 * dVar125 - dVar110 * dVar115) * dVar72;
                    uStack_260 = 0;
                    uStack_240 = 0;
                    uStack_220 = 0;
                    local_218._8_4_ = SUB84(dVar69,0);
                    local_218._0_8_ = dVar121;
                    local_218._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
                    local_208._8_8_ = 0x3ff0000000000000;
                    local_208._0_8_ = dVar117;
                    local_1f8._8_8_ = dStack_3b0;
                    local_1f8._0_8_ = local_3b8;
                    local_1e8 = local_3a8;
                    dStack_1e0 = dStack_3a0;
                    local_1d8 = local_368;
                    dStack_1d0 = dStack_360;
                    local_1c8 = (double)local_388._0_8_;
                    uStack_1c0 = local_388._8_8_;
                    local_1b8 = local_378;
                    dStack_1b0 = dStack_370;
                    local_1a8 = local_398;
                    dStack_1a0 = dStack_390;
                    local_198._8_8_ = dStack_460;
                    local_198._0_8_ = local_468;
                    local_188 = local_3c8;
                    uStack_180 = uStack_3c0;
                    FUN_1447fea8d(&local_178,&local_278,local_1f8);
                    auVar108 = local_5f8._0_16_;
                    auVar55 = _DAT_149934d80;
                    local_608._0_8_ = local_168;
                    dVar121 = local_168 * local_168 +
                              local_178 * local_178 + dStack_170 * dStack_170;
                    local_560 = (double)local_158._0_8_;
                    dVar69 = local_148 * local_148 +
                             (double)local_158._0_8_ * (double)local_158._0_8_ +
                             stack0xfffffffffffffeb0 * stack0xfffffffffffffeb0;
                    dVar72 = (double)local_128._0_8_ * (double)local_128._0_8_ +
                             local_138 * local_138 + dStack_130 * dStack_130;
                    uVar52 = -(ulonglong)(0.0 <= dVar121 + -9.99999993922529e-09);
                    dVar121 = (double)(~uVar52 & 0x3ff0000000000000 |
                                      (ulonglong)(1.0 / SQRT(dVar121)) & uVar52);
                    uVar52 = -(ulonglong)(0.0 <= dVar69 + -9.99999993922529e-09);
                    dVar69 = (double)(~uVar52 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar69)) & uVar52);
                    uVar52 = -(ulonglong)(0.0 <= dVar72 + -9.99999993922529e-09);
                    dVar72 = (double)(~uVar52 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar72)) & uVar52);
                    auVar60._8_8_ = -(ulonglong)(0.0 <= (double)local_5b8._8_8_);
                    auVar60._0_8_ = -(ulonglong)(0.0 <= (double)local_5b8._0_8_);
                    auVar75 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar60);
                    uVar52 = -(ulonglong)(0.0 <= local_5f8._0_8_);
                    dVar94 = (double)(~uVar52 & 0xbff0000000000000 | uVar52 & 0x3ff0000000000000);
                    dVar100 = auVar75._0_8_;
                    local_178 = local_178 * dVar121 * dVar100;
                    dStack_170 = dStack_170 * dVar121 * dVar100;
                    local_168 = dVar121 * local_168 * dVar100;
                    dVar121 = auVar75._8_8_;
                    local_148 = dVar69 * local_148 * dVar121;
                    stack0xfffffffffffffeb0 = stack0xfffffffffffffeb0 * dVar69 * dVar121;
                    local_158._0_8_ = dVar121 * (double)local_158._0_8_ * dVar69;
                    dStack_130 = dStack_130 * dVar72 * dVar94;
                    local_138 = dVar94 * local_138 * dVar72;
                    local_128._0_8_ = dVar72 * (double)local_128._0_8_ * dVar94;
                    pdVar23 = &local_298;
                    iVar17 = FUN_14481fd10(pdVar23,&local_178);
                    uVar18 = SUB84(pdVar23,0);
                    dVar121 = local_288 * local_288 + local_298 * local_298;
                    dVar69 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                    auVar95._0_8_ = dVar121 + dVar69;
                    auVar95._8_8_ = dVar121 + dVar69;
                    auVar61._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar95._8_8_);
                    auVar61._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar95._0_8_);
                    auVar75 = sqrtpd(auVar95,auVar95);
                    auVar75 = divpd(auVar55,auVar75);
                    auVar99._0_8_ = auVar75._0_8_ * local_288;
                    auVar99._8_8_ = auVar75._8_8_ * dStack_280;
                    auVar80 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar99,auVar61);
                    dVar122 = (double)((ulonglong)(local_298 * auVar75._0_8_) &
                                      -(ulonglong)(9.99999993922529e-09 <= auVar95._0_8_));
                    dVar93 = (double)((ulonglong)(dStack_290 * auVar75._8_8_) &
                                     -(ulonglong)(9.99999993922529e-09 <= auVar95._8_8_));
                    dVar69 = 0.0;
                    dVar121 = local_108;
                    dVar74 = local_118;
                    dVar73 = dStack_110;
                  }
                  auVar75 = minpd(local_5b8,local_318);
                  dVar100 = auVar108._0_8_;
                  auVar88 = minpd(auVar108,local_308);
                  auVar62._8_8_ = -(ulonglong)(auVar75._8_8_ < 0.0);
                  auVar62._0_8_ = -(ulonglong)(auVar75._0_8_ < 0.0);
                  iVar17 = movmskpd(iVar17,auVar62);
                  auVar96._8_8_ = -(ulonglong)(auVar88._8_8_ < 0.0);
                  auVar96._0_8_ = -(ulonglong)(auVar88._0_8_ < 0.0);
                  uVar16 = movmskpd(uVar18,auVar96);
                  dVar87 = local_318._8_8_;
                  dVar110 = local_318._0_8_;
                  dVar72 = auVar80._0_8_;
                  dVar94 = auVar80._8_8_;
                  local_608._8_8_ = local_308._8_8_;
                  local_608._0_8_ = local_308._0_8_;
                  if ((uVar16 & 0x3fffffff) == 0 && iVar17 == 0) {
                    dVar125 = dVar93 * local_358[2] * -1.0 +
                              dVar72 * local_358[1] +
                              dVar94 * local_358[0] * 1.0 + dVar122 * local_358[3];
                    dVar119 = dVar122 * local_358[2] * 1.0 +
                              dVar94 * local_358[1] +
                              dVar72 * local_358[0] * -1.0 + dVar93 * local_358[3];
                    auVar97._0_8_ =
                         dVar94 * local_358[2] * 1.0 +
                         ((local_358[0] * dVar93 * 1.0 + dVar72 * local_358[3]) -
                         dVar122 * local_358[1]);
                    auVar97._8_8_ =
                         dVar72 * local_358[2] * -1.0 +
                         ((local_358[0] * dVar122 * -1.0 + dVar94 * local_358[3]) -
                         dVar93 * local_358[1]);
                    dVar74 = dVar74 * dVar110;
                    dVar73 = dVar73 * dVar87;
                    dVar121 = dVar121 * (double)local_608._0_8_;
                    dVar69 = dVar69 * (double)local_608._8_8_;
                    dVar115 = dVar73 * local_358[0] - dVar74 * local_358[1];
                    dVar93 = dVar121 * local_358[1] - dVar73 * local_358[2];
                    dVar122 = dVar74 * local_358[2] - dVar121 * local_358[0];
                    dVar117 = dVar69 * local_358[3] - dVar69 * local_358[3];
                    dVar93 = dVar93 + dVar93;
                    dVar122 = dVar122 + dVar122;
                    dVar115 = dVar115 + dVar115;
                    dVar117 = dVar117 + dVar117;
                    dVar72 = (dVar115 * local_358[1] - local_358[2] * dVar122) +
                             local_358[3] * dVar93 + dVar74 + local_338;
                    dVar94 = (dVar93 * local_358[2] - dVar115 * local_358[0]) +
                             local_358[3] * dVar122 + dVar73 + dStack_330;
                    dVar121 = (dVar122 * local_358[0] - local_358[1] * dVar93) +
                              local_358[3] * dVar115 + dVar121 + local_328;
                    dVar69 = (dVar117 * local_358[3] - dVar117 * local_358[3]) +
                             local_358[3] * dVar117 + dVar69 + dStack_320;
                    local_5f8._8_8_ = auVar108._8_8_ * (double)local_608._8_8_;
                    local_5f8._0_8_ = dVar100 * (double)local_608._0_8_;
                    local_608._8_8_ = (double)local_5b8._8_8_ * dVar87;
                    local_608._0_8_ = (double)local_5b8._0_8_ * dVar110;
                    uVar18 = 0;
                    auVar55 = _DAT_149934d80;
                  }
                  else {
                    dVar69 = local_358[1] + local_358[1];
                    dVar117 = local_358[2] + local_358[2];
                    dVar115 = local_358[0] * (local_358[0] + local_358[0]);
                    dStack_1d0 = (auVar55._8_8_ - (local_358[2] * dVar117 + dVar115)) * dVar87;
                    dVar125 = (local_358[0] + local_358[0]) * local_358[3];
                    local_1d8 = (dVar69 * local_358[0] - dVar117 * local_358[3]) * dVar87;
                    dStack_1b0 = (dVar117 * local_358[1] - dVar125) * (double)local_608._0_8_;
                    local_1b8 = (dVar69 * local_358[3] + local_358[0] * dVar117) *
                                (double)local_608._0_8_;
                    local_1a8 = (1.0 - (dVar115 + local_358[1] * dVar69)) * (double)local_608._0_8_;
                    local_5f8._8_8_ = (double)local_608._8_8_ * auVar108._8_8_;
                    local_5f8._0_8_ = (double)local_608._0_8_ * dVar100;
                    local_1c8 = (dVar117 * local_358[1] + dVar125) * dVar87;
                    local_1f8._8_8_ = (dVar69 * local_358[0] + dVar117 * local_358[3]) * dVar110;
                    local_1f8._0_8_ =
                         (auVar55._0_8_ - (local_358[2] * dVar117 + local_358[1] * dVar69)) *
                         dVar110;
                    local_1e8 = (local_358[0] * dVar117 - dVar69 * local_358[3]) * dVar110;
                    dStack_1e0 = 0.0;
                    uStack_1c0 = 0;
                    dStack_1a0 = 0.0;
                    local_198._8_8_ = dStack_330;
                    local_198._0_8_ = local_338;
                    local_188 = local_328;
                    uStack_180 = 0x3ff0000000000000;
                    dVar115 = dVar93 + dVar93;
                    dVar117 = dVar72 + dVar72;
                    dVar69 = dVar122 * (dVar122 + dVar122);
                    local_228 = (1.0 - (dVar69 + dVar93 * dVar115)) * dVar100;
                    dVar125 = (dVar122 + dVar122) * dVar94;
                    local_238 = (dVar122 * dVar117 + dVar115 * dVar94) * dVar100;
                    local_258 = (dVar115 * dVar122 - dVar117 * dVar94) * (double)local_5b8._8_8_;
                    dStack_230 = (dVar117 * dVar93 - dVar125) * dVar100;
                    local_608._8_8_ = dVar87 * (double)local_5b8._8_8_;
                    local_608._0_8_ = dVar110 * (double)local_5b8._0_8_;
                    local_278 = (1.0 - (dVar72 * dVar117 + dVar93 * dVar115)) *
                                (double)local_5b8._0_8_;
                    dStack_250 = (1.0 - (dVar72 * dVar117 + dVar69)) * (double)local_5b8._8_8_;
                    dStack_270 = (dVar115 * dVar122 + dVar117 * dVar94) * (double)local_5b8._0_8_;
                    local_248 = (dVar117 * dVar93 + dVar125) * (double)local_5b8._8_8_;
                    local_268 = (dVar122 * dVar117 - dVar115 * dVar94) * (double)local_5b8._0_8_;
                    uStack_260 = 0;
                    uStack_240 = 0;
                    uStack_220 = 0;
                    local_218._8_8_ = dVar73;
                    local_218._0_8_ = dVar74;
                    local_208._8_4_ = 0;
                    local_208._0_8_ = dVar121;
                    local_208._12_4_ = 0x3ff00000;
                    FUN_1447fea8d(&local_178,&local_278,local_1f8);
                    auVar55 = _DAT_149934d80;
                    local_5b8._0_8_ = local_168;
                    dVar121 = local_168 * local_168 +
                              local_178 * local_178 + dStack_170 * dStack_170;
                    local_560 = local_148;
                    dVar69 = local_148 * local_148 +
                             (double)local_158._0_8_ * (double)local_158._0_8_ +
                             stack0xfffffffffffffeb0 * stack0xfffffffffffffeb0;
                    dVar72 = (double)local_128._0_8_ * (double)local_128._0_8_ +
                             local_138 * local_138 + dStack_130 * dStack_130;
                    uVar52 = -(ulonglong)(0.0 <= dVar121 + -9.99999993922529e-09);
                    dVar121 = (double)(~uVar52 & 0x3ff0000000000000 |
                                      (ulonglong)(1.0 / SQRT(dVar121)) & uVar52);
                    uVar52 = -(ulonglong)(0.0 <= dVar69 + -9.99999993922529e-09);
                    dVar69 = (double)(~uVar52 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar69)) & uVar52);
                    uVar52 = -(ulonglong)(0.0 <= dVar72 + -9.99999993922529e-09);
                    dVar72 = (double)(~uVar52 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar72)) & uVar52);
                    auVar63._8_8_ = -(ulonglong)(0.0 <= (double)local_608._8_8_);
                    auVar63._0_8_ = -(ulonglong)(0.0 <= (double)local_608._0_8_);
                    auVar75 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar63);
                    dVar94 = (double)(~-(ulonglong)(0.0 <= (double)local_5f8._0_8_) &
                                      0xbff0000000000000 |
                                     -(ulonglong)(0.0 <= (double)local_5f8._0_8_) &
                                     0x3ff0000000000000);
                    dVar100 = auVar75._0_8_;
                    local_178 = local_178 * dVar121 * dVar100;
                    dStack_170 = dStack_170 * dVar121 * dVar100;
                    local_168 = dVar121 * local_168 * dVar100;
                    dVar121 = auVar75._8_8_;
                    local_148 = dVar69 * local_148 * dVar121;
                    stack0xfffffffffffffeb0 = stack0xfffffffffffffeb0 * dVar69 * dVar121;
                    local_158._0_8_ = dVar121 * (double)local_158._0_8_ * dVar69;
                    dStack_130 = dStack_130 * dVar72 * dVar94;
                    local_138 = dVar94 * local_138 * dVar72;
                    local_128._0_8_ = dVar72 * (double)local_128._0_8_ * dVar94;
                    pdVar23 = &local_298;
                    iVar17 = FUN_14481fd10(pdVar23,&local_178);
                    uVar18 = SUB84(pdVar23,0);
                    dVar121 = local_288 * local_288 + local_298 * local_298;
                    dVar69 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                    auVar90._0_8_ = dVar121 + dVar69;
                    auVar90._8_8_ = dVar121 + dVar69;
                    auVar64._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar90._8_8_);
                    auVar64._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar90._0_8_);
                    auVar75 = sqrtpd(auVar90,auVar90);
                    auVar75 = divpd(auVar55,auVar75);
                    auVar103._0_8_ = auVar75._0_8_ * local_288;
                    auVar103._8_8_ = auVar75._8_8_ * dStack_280;
                    dVar125 = (double)((ulonglong)(local_298 * auVar75._0_8_) &
                                      -(ulonglong)(9.99999993922529e-09 <= auVar90._0_8_));
                    dVar119 = (double)((ulonglong)(dStack_290 * auVar75._8_8_) &
                                      -(ulonglong)(9.99999993922529e-09 <= auVar90._8_8_));
                    auVar97 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar103,auVar64);
                    dVar69 = 0.0;
                    dVar121 = local_108;
                    dVar72 = local_118;
                    dVar94 = dStack_110;
                  }
                  dVar100 = local_588._0_8_;
                  dVar74 = local_588._8_8_;
                  auVar75 = minpd(local_608,local_588);
                  auVar88 = minpd(local_5f8._0_16_,local_638);
                  auVar65._8_8_ = -(ulonglong)(auVar75._8_8_ < 0.0);
                  auVar65._0_8_ = -(ulonglong)(auVar75._0_8_ < 0.0);
                  iVar17 = movmskpd(iVar17,auVar65);
                  auVar81._8_8_ = -(ulonglong)(auVar88._8_8_ < 0.0);
                  auVar81._0_8_ = -(ulonglong)(auVar88._0_8_ < 0.0);
                  uVar16 = movmskpd(uVar18,auVar81);
                  dVar73 = auVar97._0_8_;
                  dVar87 = auVar97._8_8_;
                  dVar110 = local_618._0_8_;
                  if ((uVar16 & 0x3fffffff) == 0 && iVar17 == 0) {
                    auVar118._8_4_ = local_618._8_4_;
                    auVar118._0_8_ = local_618._8_8_;
                    auVar118._12_4_ = local_618._12_4_;
                    dVar104 = auVar118._8_8_;
                    dVar127 = (double)local_618._8_8_ * dVar73;
                    auVar10._8_8_ = dStack_540;
                    auVar10._0_8_ = local_548;
                    auVar9._8_4_ = SUB84(local_548,0);
                    auVar9._0_8_ = local_548;
                    auVar9._12_4_ = (int)((ulonglong)local_548 >> 0x20);
                    dVar72 = dVar72 * dVar100;
                    dVar94 = dVar94 * dVar74;
                    dVar121 = dVar121 * (double)local_638._0_8_;
                    dVar69 = dVar69 * (double)local_638._8_8_;
                    auVar7._16_16_ = local_618;
                    auVar7._0_16_ = auVar10;
                    local_5b8 = auVar7._8_16_;
                    dVar115 = local_548 * dVar119;
                    dVar117 = local_548 * dVar125;
                    dVar122 = dVar94 * local_548 - dVar72 * dStack_540;
                    dVar93 = dVar121 * dStack_540 - dVar94 * dVar110;
                    auVar55 = blendpd(auVar10,local_618,2);
                    dVar111 = dVar72 * dVar110 - dVar121 * auVar55._0_8_;
                    dVar116 = dVar69 * (double)local_618._8_8_ - dVar69 * auVar55._8_8_;
                    dVar93 = dVar93 + dVar93;
                    dVar111 = dVar111 + dVar111;
                    dVar122 = dVar122 + dVar122;
                    dVar116 = dVar116 + dVar116;
                    dVar123 = dVar111 * local_548;
                    auVar112._8_4_ = SUB84(dStack_540,0);
                    auVar112._0_8_ = dStack_540;
                    auVar112._12_4_ = (int)((ulonglong)dStack_540 >> 0x20);
                    auVar113._8_4_ = local_618._0_4_;
                    auVar113._0_8_ = dVar110;
                    auVar113._12_4_ = local_618._4_4_;
                    local_548 = dVar119 * dVar110 * -1.0 +
                                dVar73 * dStack_540 +
                                local_548 * dVar87 * 1.0 + (double)local_618._8_8_ * dVar125;
                    dVar54 = dVar54 + (dVar122 * dStack_540 - dVar111 * dVar110) +
                                      (double)local_618._8_8_ * dVar93 + dVar72;
                    dVar70 = dVar70 + (dVar93 * dVar110 - dVar122 * auVar55._0_8_) +
                                      dVar104 * dVar111 + dVar94;
                    local_578 = local_578 +
                                (dVar123 - dVar93 * dStack_540) +
                                (double)local_618._8_8_ * dVar122 + dVar121;
                    dStack_570 = dStack_570 +
                                 (dVar116 * (double)local_618._8_8_ - dVar116 * auVar55._8_8_) +
                                 dVar104 * dVar116 + dVar69;
                    auVar128._0_8_ = dVar100 * (double)local_608._0_8_;
                    auVar128._8_8_ = dVar74 * (double)local_608._8_8_;
                    local_638._8_8_ = (double)local_638._8_8_ * (double)local_5f8._8_8_;
                    local_638._0_8_ = (double)local_638._0_8_ * (double)local_5f8._0_8_;
                    local_618._8_8_ =
                         dVar73 * auVar113._8_8_ * -1.0 +
                         ((dVar117 * -1.0 + dVar104 * dVar87) - auVar112._8_8_ * dVar119);
                    local_618._0_8_ =
                         dVar87 * dVar110 * 1.0 + ((dVar115 * 1.0 + dVar127) - dStack_540 * dVar125)
                    ;
                    dStack_540 = dVar125 * auVar113._8_8_ * 1.0 +
                                 dVar87 * auVar112._8_8_ +
                                 auVar9._8_8_ * dVar73 * -1.0 + dVar104 * dVar119;
                  }
                  else {
                    dVar115 = dStack_540 + dStack_540;
                    dVar117 = dVar110 + dVar110;
                    dVar69 = (local_548 + local_548) * local_548;
                    auVar82._8_4_ = local_618._8_4_;
                    auVar82._0_8_ = local_618._8_8_;
                    auVar82._12_4_ = local_618._12_4_;
                    dVar122 = (local_548 + local_548) * auVar82._8_8_;
                    local_1d8 = (dVar115 * local_548 - dVar117 * (double)local_618._8_8_) * dVar74;
                    dStack_1b0 = (dVar117 * dStack_540 - dVar122) * (double)local_638._0_8_;
                    dStack_1d0 = (auVar55._8_8_ - (dVar117 * dVar110 + dVar69)) * dVar74;
                    local_1b8 = (local_548 * dVar117 + dVar115 * (double)local_618._8_8_) *
                                (double)local_638._0_8_;
                    local_1c8 = (dVar117 * dStack_540 + dVar122) * dVar74;
                    local_1f8._8_8_ =
                         (dVar115 * local_548 + dVar117 * (double)local_618._8_8_) * dVar100;
                    local_1f8._0_8_ =
                         (auVar55._0_8_ - (dVar117 * dVar110 + dVar115 * dStack_540)) * dVar100;
                    local_1e8 = (local_548 * dVar117 - dVar115 * (double)local_618._8_8_) * dVar100;
                    dStack_1e0 = 0.0;
                    local_1a8 = (1.0 - (dVar69 + dVar115 * dStack_540)) * (double)local_638._0_8_;
                    local_638._0_8_ = (double)local_638._0_8_ * (double)local_5f8._0_8_;
                    local_638._8_8_ = (double)local_638._8_8_ * (double)local_5f8._8_8_;
                    uStack_1c0 = 0;
                    dStack_1a0 = 0.0;
                    local_198._8_4_ = SUB84(dVar70,0);
                    local_198._0_8_ = dVar54;
                    local_198._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
                    local_188 = local_578;
                    uStack_180 = 0x3ff0000000000000;
                    dVar69 = dVar119 + dVar119;
                    dVar70 = dVar73 + dVar73;
                    dVar54 = dVar125 * (dVar125 + dVar125);
                    local_228 = (1.0 - (dVar54 + dVar119 * dVar69)) * (double)local_5f8._0_8_;
                    dVar110 = (dVar125 + dVar125) * dVar87;
                    local_238 = (dVar125 * dVar70 + dVar69 * dVar87) * (double)local_5f8._0_8_;
                    local_258 = (dVar69 * dVar125 - dVar70 * dVar87) * (double)local_608._8_8_;
                    dStack_230 = (dVar70 * dVar119 - dVar110) * (double)local_5f8._0_8_;
                    local_588._8_4_ = SUB84(dVar74 * (double)local_608._8_8_,0);
                    local_588._0_8_ = dVar100 * (double)local_608._0_8_;
                    local_588._12_4_ = (int)((ulonglong)(dVar74 * (double)local_608._8_8_) >> 0x20);
                    local_278 = (1.0 - (dVar73 * dVar70 + dVar119 * dVar69)) *
                                (double)local_608._0_8_;
                    dStack_250 = (1.0 - (dVar73 * dVar70 + dVar54)) * (double)local_608._8_8_;
                    dStack_270 = (dVar69 * dVar125 + dVar70 * dVar87) * (double)local_608._0_8_;
                    local_248 = (dVar70 * dVar119 + dVar110) * (double)local_608._8_8_;
                    local_268 = (dVar125 * dVar70 - dVar69 * dVar87) * (double)local_608._0_8_;
                    uStack_260 = 0;
                    uStack_240 = 0;
                    uStack_220 = 0;
                    local_218._8_8_ = dVar94;
                    local_218._0_8_ = dVar72;
                    local_208._8_8_ = 0x3ff0000000000000;
                    local_208._0_8_ = dVar121;
                    FUN_1447fea8d(&local_178,&local_278,local_1f8);
                    auVar128 = local_588;
                    uVar124 = local_638._8_8_;
                    uVar19 = local_638._0_8_;
                    dVar69 = local_168 * local_168 + local_178 * local_178 + dStack_170 * dStack_170
                    ;
                    dVar72 = local_148 * local_148 +
                             (double)local_158._0_8_ * (double)local_158._0_8_ +
                             stack0xfffffffffffffeb0 * stack0xfffffffffffffeb0;
                    dVar121 = (double)local_128._0_8_ * (double)local_128._0_8_ +
                              local_138 * local_138 + dStack_130 * dStack_130;
                    uVar52 = -(ulonglong)(0.0 <= dVar69 + -9.99999993922529e-09);
                    dVar69 = (double)(~uVar52 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar69)) & uVar52);
                    uVar52 = -(ulonglong)(0.0 <= dVar72 + -9.99999993922529e-09);
                    dVar72 = (double)(~uVar52 & 0x3ff0000000000000 |
                                     (ulonglong)(1.0 / SQRT(dVar72)) & uVar52);
                    uVar52 = -(ulonglong)(0.0 <= dVar121 + -9.99999993922529e-09);
                    dVar121 = (double)(~uVar52 & 0x3ff0000000000000 |
                                      (ulonglong)(1.0 / SQRT(dVar121)) & uVar52);
                    auVar66._8_8_ = -(ulonglong)(0.0 <= local_588._8_8_);
                    auVar66._0_8_ = -(ulonglong)(0.0 <= local_588._0_8_);
                    auVar55 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar66);
                    dVar94 = (double)(~-(ulonglong)(0.0 <= (double)local_638._0_8_) &
                                      0xbff0000000000000 |
                                     -(ulonglong)(0.0 <= (double)local_638._0_8_) &
                                     0x3ff0000000000000);
                    dVar54 = auVar55._0_8_;
                    local_178 = local_178 * dVar69 * dVar54;
                    dStack_170 = dStack_170 * dVar69 * dVar54;
                    local_168 = dVar69 * local_168 * dVar54;
                    dVar69 = auVar55._8_8_;
                    local_148 = dVar72 * local_148 * dVar69;
                    stack0xfffffffffffffeb0 = stack0xfffffffffffffeb0 * dVar72 * dVar69;
                    local_158._0_8_ = dVar69 * (double)local_158._0_8_ * dVar72;
                    dStack_130 = dStack_130 * dVar121 * dVar94;
                    local_138 = dVar94 * local_138 * dVar121;
                    local_128._0_8_ = dVar121 * (double)local_128._0_8_ * dVar94;
                    FUN_14481fd10(&local_298,&local_178);
                    dVar121 = local_288 * local_288 + local_298 * local_298;
                    dVar69 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                    auVar91._0_8_ = dVar121 + dVar69;
                    auVar91._8_8_ = dVar121 + dVar69;
                    auVar67._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar91._8_8_);
                    auVar67._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar91._0_8_);
                    auVar55 = sqrtpd(auVar91,auVar91);
                    auVar55 = divpd(_DAT_149934d80,auVar55);
                    auVar98._0_8_ = auVar55._0_8_ * local_288;
                    auVar98._8_8_ = auVar55._8_8_ * dStack_280;
                    local_618 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar98,auVar67);
                    local_548 = (double)((ulonglong)(local_298 * auVar55._0_8_) &
                                        -(ulonglong)(9.99999993922529e-09 <= auVar91._0_8_));
                    local_578 = local_108;
                    dStack_570 = 0.0;
                    local_638 = CONCAT88(uVar124,uVar19);
                    dVar54 = local_118;
                    dVar70 = dStack_110;
                    dStack_540 = (double)((ulonglong)(dStack_290 * auVar55._8_8_) &
                                         -(ulonglong)(9.99999993922529e-09 <= auVar91._8_8_));
                  }
                  dVar121 = (double)local_438._0_8_;
                  dVar69 = (double)local_438._8_8_;
                  uVar19 = local_448;
                  fVar53 = local_5bc;
                  fVar68 = local_5c0;
                  fVar120 = local_5c4;
                  fVar126 = local_5c8;
                }
              }
              else {
                local_618._8_8_ = (double)(float)((ulonglong)*(undefined8 *)(local_4f0 + 2) >> 0x20)
                ;
                local_618._0_8_ = (double)(float)*(undefined8 *)(local_4f0 + 2);
                local_548 = (double)(float)*(undefined8 *)local_4f0;
                dStack_540 = (double)(float)((ulonglong)*(undefined8 *)local_4f0 >> 0x20);
                local_578 = (double)(float)*(undefined8 *)(local_4f0 + 6);
                dStack_570 = (double)(float)((ulonglong)*(undefined8 *)(local_4f0 + 6) >> 0x20);
                dVar54 = (double)(float)*(undefined8 *)(local_4f0 + 4);
                dVar70 = (double)(float)((ulonglong)*(undefined8 *)(local_4f0 + 4) >> 0x20);
                local_638._8_8_ =
                     (double)(float)((ulonglong)*(undefined8 *)(local_4f0 + 10) >> 0x20);
                local_638._0_8_ = (double)(float)*(undefined8 *)(local_4f0 + 10);
                auVar128._0_8_ = (double)(float)*(undefined8 *)(local_4f0 + 8);
                auVar128._8_8_ = (double)(float)((ulonglong)*(undefined8 *)(local_4f0 + 8) >> 0x20);
              }
              lVar20 = *(longlong *)(lVar42 + 0x28);
              if (*(longlong *)(lVar42 + 0x28) == 0) {
                lVar20 = local_4a0;
              }
              puVar28 = (uint *)(lVar20 + local_628 * 4);
              *puVar28 = *puVar28 | uVar50;
              iVar17 = *(int *)(lVar42 + 0x40);
              lVar20 = (longlong)iVar17;
              *(uint *)(lVar42 + 0x40) = iVar17 + 1U;
              if (*(uint *)(lVar42 + 0x44) < iVar17 + 1U) {
                FUN_141730f88(local_500,iVar17);
              }
              iVar17 = *(int *)(lVar42 + 0x50);
              *(uint *)(lVar42 + 0x50) = iVar17 + 1U;
              if (*(uint *)(lVar42 + 0x54) < iVar17 + 1U) {
                FUN_1417310fe(local_508,iVar17);
              }
              FUN_144b075fd((longlong)iVar17 * 0x40 + *(longlong *)(lVar42 + 0x48));
              uVar16 = *(int *)(lVar42 + 0x60) + 1;
              *(uint *)(lVar42 + 0x60) = uVar16;
              if (*(uint *)(lVar42 + 100) < uVar16) {
                FUN_1417311fe(local_510);
              }
              lVar27 = local_528;
              lVar34 = *local_500;
              *(int *)(lVar34 + lVar20 * 0xc) = (int)local_5d0;
              *(uint *)(lVar34 + 4 + lVar20 * 0xc) = local_63c;
              *(char *)(lVar34 + 8 + lVar20 * 0xc) = (char)local_558;
              *(short *)(lVar34 + 10 + lVar20 * 0xc) = (short)unaff_RBP;
              lVar34 = *local_508;
              lVar33 = lVar20 * 0x40;
              *(undefined8 *)(lVar34 + lVar33) = uVar19;
              *(undefined8 *)(lVar34 + 8 + lVar33) = local_4c8;
              *(double *)(lVar34 + 0x10 + lVar33) = local_538;
              puVar37 = (undefined8 *)(lVar34 + 0x20 + lVar33);
              *puVar37 = local_5a8._0_8_;
              puVar37[1] = local_5a8._8_8_;
              auVar8._8_4_ = SUB84(dVar69,0);
              auVar8._0_8_ = dVar121;
              auVar8._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
              *(undefined1 (*) [16])(lVar34 + 0x30 + lVar33) = auVar8;
              lVar34 = *local_510;
              *(float *)(lVar34 + lVar20 * 0x18) = fVar68;
              *(float *)(lVar34 + 4 + lVar20 * 0x18) = local_550;
              *(float *)(lVar34 + 8 + lVar20 * 0x18) = fVar53;
              *(float *)(lVar34 + 0xc + lVar20 * 0x18) = fVar120;
              *(float *)(lVar34 + 0x10 + lVar20 * 0x18) = fVar126;
              auVar109._12_4_ = (float)(double)local_638._8_8_;
              auVar109._8_4_ = (float)(double)local_638._0_8_;
              auVar109._0_4_ = (float)auVar128._0_8_;
              auVar109._4_4_ = (float)auVar128._8_8_;
              *(float *)(lVar34 + 0x14 + lVar20 * 0x18) = local_54c;
              fVar53 = (float)local_578;
              fVar68 = (float)dStack_570;
              fVar71 = (float)(double)local_618._0_8_;
              fVar86 = (float)(double)local_618._8_8_;
              auVar114._12_4_ = fVar86;
              auVar114._8_4_ = fVar71;
              auVar114._0_4_ = (float)local_548;
              auVar114._4_4_ = (float)dStack_540;
              auVar83._4_4_ = -(uint)(0.0001 < ABS((float)dVar70 - local_4f0[5]));
              auVar83._0_4_ = -(uint)(0.0001 < ABS((float)dVar54 - local_4f0[4]));
              auVar83._8_4_ = -(uint)(0.0001 < ABS(fVar53 - local_4f0[6]));
              auVar83._12_4_ = -(uint)(0.0001 < ABS(fVar68 - local_4f0[7]));
              iVar17 = movmskps((int)lVar34,auVar83);
              if (iVar17 == 0) {
                auVar92._4_4_ = -(uint)(0.0001 < ABS(auVar114._4_4_ - local_4f0[1]));
                auVar92._0_4_ = -(uint)(0.0001 < ABS(auVar114._0_4_ - *local_4f0));
                auVar92._8_4_ = -(uint)(0.0001 < ABS(fVar71 - local_4f0[2]));
                auVar92._12_4_ = -(uint)(0.0001 < ABS(fVar86 - local_4f0[3]));
                iVar17 = movmskps(0,auVar92);
                uVar18 = 0;
                if (((iVar17 != 0) &&
                    (auVar84._4_4_ = -(uint)(0.0001 < ABS(local_4f0[1] + auVar114._4_4_)),
                    auVar84._0_4_ = -(uint)(0.0001 < ABS(*local_4f0 + auVar114._0_4_)),
                    auVar84._8_4_ = -(uint)(0.0001 < ABS(local_4f0[2] + fVar71)),
                    auVar84._12_4_ = -(uint)(0.0001 < ABS(local_4f0[3] + fVar86)),
                    uVar18 = movmskps(iVar17,auVar84), (char)uVar18 != '\0')) ||
                   (auVar85._4_4_ = -(uint)(0.0001 < ABS(auVar109._4_4_ - local_4f0[9])),
                   auVar85._0_4_ = -(uint)(0.0001 < ABS(auVar109._0_4_ - local_4f0[8])),
                   auVar85._8_4_ =
                        -(uint)(0.0001 < ABS((float)(double)local_638._0_8_ - local_4f0[10])),
                   auVar85._12_4_ =
                        -(uint)(0.0001 < ABS((float)(double)local_638._8_8_ - local_4f0[0xb])),
                   iVar17 = movmskps(uVar18,auVar85), iVar17 != 0)) goto LAB_142a22a75;
              }
              else {
LAB_142a22a75:
                if (*(char *)(lVar51 + 0x6e8) == '\0') {
                  local_178 = 0.0;
                  dStack_170 = (double)CONCAT62(dStack_170._2_6_,1);
                  local_668 = &local_178;
                  FUN_140b19abe(local_528,DAT_14c9974b0,DAT_14c9974a8,local_4b0);
                  local_668 = (double *)DAT_14c9974a8;
                  FUN_1408a6bca(lVar27,*(undefined8 *)(lVar51 + 0x688),DAT_14c9974b0,DAT_14c9974b0);
                  *(undefined1 *)(lVar51 + 0x6e8) = 1;
                }
                lVar20 = *local_4f8;
                *(undefined1 (*) [16])(lVar20 + lVar31) = auVar114;
                pfVar3 = (float *)(lVar20 + 0x10 + lVar31);
                *pfVar3 = (float)dVar54;
                pfVar3[1] = (float)dVar70;
                pfVar3[2] = fVar53;
                pfVar3[3] = fVar68;
                *(undefined1 (*) [16])(lVar20 + 0x20 + lVar31) = auVar109;
              }
              *(byte *)(lVar51 + 0x319) = *(byte *)(lVar51 + 0x319) | 0x10;
              lVar33 = local_628;
            }
            lVar31 = *(longlong *)(lVar51 + 0x710);
            if (*(longlong *)(lVar51 + 0x710) == 0) {
              lVar31 = local_490;
            }
            if (((uint)unaff_RBP >> 8 & 1) == 0) {
              uVar50 = uVar50 | *(uint *)(lVar31 + lVar33 * 4);
            }
            else {
              uVar50 = ~uVar50 & *(uint *)(lVar31 + lVar33 * 4);
            }
            *(uint *)(lVar31 + lVar33 * 4) = uVar50;
            param_1 = lVar51;
            lVar20 = local_490;
            lVar31 = lVar42;
          }
          lVar49 = lVar49 + 1;
        } while (lVar49 < *(int *)(param_1 + 0x304));
      }
    }
    bVar24 = *(byte *)(param_1 + 0x319) >> 4 & 1;
    bVar41 = *(byte *)(lVar31 + 0x68);
    *(byte *)(lVar31 + 0x68) = bVar41 & 0xfe | bVar24;
    *(byte *)(lVar31 + 0x68) = bVar41 & 0xfc | bVar24 | *(byte *)(param_1 + 0x319) >> 4 & 2;
    puVar37 = local_520;
    puVar40 = (undefined8 *)(param_1 + 0x100);
    for (lVar31 = 0xc; lVar31 != 0; lVar31 = lVar31 + -1) {
      *puVar40 = *puVar37;
      puVar37 = puVar37 + 1;
      puVar40 = puVar40 + 1;
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_688) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a23622 FUN_142a23622 body=1124 status=ok
// SIG undefined FUN_142a23622(void)

void FUN_142a23622(longlong param_1,longlong *param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
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
  undefined4 uVar36;
  uint local_c0;
  undefined4 local_bc;
  
  dVar3 = param_3[5];
  dVar2 = param_3[6];
  lVar12 = param_2[1];
  lVar16 = *(longlong *)(*param_2 + 0x28);
  pdVar1 = (double *)(lVar16 + (longlong)(int)lVar12 * 0x18);
  *pdVar1 = param_3[4];
  pdVar1[1] = dVar3;
  *(double *)(lVar16 + 0x10 + (longlong)(int)lVar12 * 0x18) = dVar2;
  dVar2 = param_3[3];
  dVar3 = param_3[2];
  dVar4 = param_3[1];
  lVar16 = *(longlong *)(*param_2 + 0x48);
  lVar12 = (longlong)(int)param_2[1] * 0x10;
  *(float *)(lVar16 + lVar12) = (float)*param_3;
  *(float *)(lVar16 + 4 + lVar12) = (float)dVar4;
  *(float *)(lVar16 + 8 + lVar12) = (float)dVar3;
  *(float *)(lVar16 + 0xc + lVar12) = (float)dVar2;
  lVar12 = *param_2;
  lVar13 = param_2[1];
  lVar16 = *(longlong *)(lVar12 + 0xf8) + (longlong)(int)lVar13 * 0x18;
  iVar5 = *(int *)(lVar16 + 0x10);
  lVar22 = *(longlong *)(lVar16 + 8);
  if (*(longlong *)(lVar16 + 8) == 0) {
    lVar22 = lVar16;
  }
  if ((longlong)iVar5 < 1) {
    uVar26 = 0;
    uVar28 = 0;
    uVar23 = 0;
    uVar24 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar33 = 0;
    uVar34 = 0;
    dVar4 = 0.0;
    dVar3 = 0.0;
    dVar2 = 0.0;
    uVar25 = uVar26;
    uVar27 = uVar28;
    if (iVar5 == 0) goto LAB_142a2378e;
  }
  else {
    uVar23 = 0xffffffff;
    uVar24 = 0x7fefffff;
    uVar25 = 0xffffffff;
    uVar27 = 0xffefffff;
  }
  lVar16 = 0;
  uVar26 = uVar23;
  uVar28 = uVar24;
  uVar29 = uVar25;
  uVar30 = uVar27;
  uVar31 = uVar25;
  uVar32 = uVar27;
  uVar33 = uVar23;
  uVar34 = uVar24;
  uVar35 = uVar23;
  uVar36 = uVar24;
  do {
    lVar6 = *(longlong *)(lVar22 + lVar16);
    if ((*(byte *)(lVar6 + 8) & 3) == 0) {
      FUN_146e22506(lVar6,param_3);
    }
    else {
      FUN_1447269c8(lVar6,param_3);
    }
    lVar6 = *(longlong *)(lVar22 + lVar16);
    dVar2 = *(double *)(lVar6 + 0x28);
    if (dVar2 <= (double)CONCAT44(uVar34,uVar33)) {
      uVar33 = SUB84(dVar2,0);
      uVar34 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar2 = *(double *)(lVar6 + 0x20);
    if (dVar2 <= (double)CONCAT44(uVar36,uVar35)) {
      uVar35 = SUB84(dVar2,0);
      uVar36 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar2 = *(double *)(lVar6 + 0x18);
    if (dVar2 <= (double)CONCAT44(uVar28,uVar26)) {
      uVar26 = SUB84(dVar2,0);
      uVar28 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar2 = *(double *)(lVar6 + 0x40);
    if ((double)CONCAT44(uVar27,uVar25) <= dVar2) {
      uVar25 = SUB84(dVar2,0);
      uVar27 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar2 = *(double *)(lVar6 + 0x38);
    if ((double)CONCAT44(uVar30,uVar29) <= dVar2) {
      uVar29 = SUB84(dVar2,0);
      uVar30 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar2 = *(double *)(lVar6 + 0x30);
    if ((double)CONCAT44(uVar32,uVar31) <= dVar2) {
      uVar31 = SUB84(dVar2,0);
      uVar32 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    lVar16 = lVar16 + 8;
  } while ((longlong)iVar5 * 8 != lVar16);
  dVar4 = (double)CONCAT44(uVar32,uVar31) + 0.0;
  dVar3 = (double)CONCAT44(uVar30,uVar29) + 0.0;
  dVar2 = (double)CONCAT44(uVar27,uVar25) + 0.0;
LAB_142a2378e:
  lVar16 = *(longlong *)(lVar12 + 0x140);
  lVar12 = (longlong)(int)lVar13 * 0x30;
  *(ulonglong *)(lVar16 + lVar12) = CONCAT44(uVar28,uVar26);
  *(ulonglong *)(lVar16 + 8 + lVar12) = CONCAT44(uVar36,uVar35);
  *(ulonglong *)(lVar16 + 0x10 + lVar12) = CONCAT44(uVar34,uVar33);
  *(double *)(lVar16 + 0x18 + lVar12) = dVar4;
  *(double *)(lVar16 + 0x20 + lVar12) = dVar3;
  *(double *)(lVar16 + 0x28 + lVar12) = dVar2;
  lVar16 = *(longlong *)(param_1 + 0x9c8);
  lVar12 = *param_2;
  lVar13 = (longlong)(int)param_2[1];
  if ((1 < *(byte *)((longlong)param_2 + 0xc)) &&
     (*(char *)(*(longlong *)(lVar12 + 0x2c0) + 0xd + lVar13 * 0x10) == '\x01')) {
    if (*(byte *)((longlong)param_2 + 0xc) == 2) {
      return;
    }
    plVar7 = *(longlong **)(*(longlong *)(lVar12 + 0x5a8) + lVar13 * 0x10);
    if (plVar7 == (longlong *)0x0) {
      return;
    }
    if (*(byte *)((longlong)plVar7 + 0xc) < 3) {
      return;
    }
    if ((*(byte *)(*(longlong *)(*plVar7 + 0x680) + (longlong)(int)plVar7[1]) & 1) == 0) {
      return;
    }
    if (*(longlong *)(*(longlong *)(*plVar7 + 200) + (longlong)(int)plVar7[1] * 8) !=
        *(longlong *)(*(longlong *)(lVar12 + 200) + lVar13 * 8)) {
      return;
    }
  }
  if ((*(char *)(*(longlong *)(lVar12 + 0xe0) + lVar13) != '\0') || (DAT_14c9978a0 != 0)) {
    uVar26 = *(undefined4 *)(*(longlong *)(lVar12 + 0x80) + lVar13 * 4);
    puVar10 = (ulonglong *)FUN_1447eab44(lVar16 + 0x360,uVar26,1);
    *(undefined1 *)(puVar10 + 8) = 2;
    lVar12 = *param_2;
    lVar13 = (longlong)(int)param_2[1];
    uVar8 = *(ulonglong *)(*(longlong *)(lVar12 + 0xb0) + lVar13 * 8);
    uVar25 = *(undefined4 *)(*(longlong *)(lVar12 + 0x80) + lVar13 * 4);
    lVar12 = *(longlong *)(lVar12 + 0xf8) + lVar13 * 0x18;
    lVar13 = *(longlong *)(lVar12 + 8);
    if (*(longlong *)(lVar12 + 8) == 0) {
      lVar13 = lVar12;
    }
    if ((longlong)*(int *)(lVar12 + 0x10) == 0) {
      local_bc = 0;
      uVar19 = 0;
      uVar18 = 0;
      local_c0 = 0;
      uVar15 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar9 = 0;
      uVar17 = uVar8;
    }
    else {
      lVar22 = (longlong)*(int *)(lVar12 + 0x10) * 8;
      lVar12 = 0;
      local_c0 = 0;
      uVar18 = 0;
      uVar19 = 0;
      uVar17 = 0;
      do {
        lVar6 = *(longlong *)(lVar13 + lVar12);
        if ((lVar6 != 0) &&
           ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) & 2) != 0))
        {
          uVar14 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
          uVar19 = uVar19 | *(uint *)(lVar6 + 0x48 + uVar14 * 8);
          uVar18 = uVar18 | *(uint *)(lVar6 + 0x4c + uVar14 * 8);
          local_c0 = local_c0 | *(uint *)(lVar6 + 0x50 + uVar14 * 8);
          uVar17 = (ulonglong)((uint)uVar17 | *(uint *)(lVar6 + 0x54 + uVar14 * 8));
        }
        lVar12 = lVar12 + 8;
      } while (lVar22 != lVar12);
      local_bc = (undefined4)uVar17;
      lVar12 = 0;
      uVar15 = 0;
      uVar20 = 0;
      uVar21 = 0;
      uVar9 = 0;
      do {
        lVar6 = *(longlong *)(lVar13 + lVar12);
        if (lVar6 != 0) {
          uVar17 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
          if ((*(byte *)(lVar6 + 0x71 + uVar17 * 8) & 5) != 0) {
            uVar17 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
            uVar15 = uVar15 | *(uint *)(lVar6 + 0x58 + uVar17 * 8);
            uVar20 = uVar20 | *(uint *)(lVar6 + 0x5c + uVar17 * 8);
            uVar21 = uVar21 | *(uint *)(lVar6 + 0x60 + uVar17 * 8);
            uVar9 = uVar9 | *(uint *)(lVar6 + 100 + uVar17 * 8);
          }
        }
        lVar12 = lVar12 + 8;
      } while (lVar22 != lVar12);
    }
    *puVar10 = uVar8;
    puVar10[1] = (ulonglong)param_2;
    *(undefined4 *)(puVar10 + 2) = uVar25;
    *(uint *)((longlong)puVar10 + 0x14) = uVar19;
    *(uint *)(puVar10 + 3) = uVar18;
    *(uint *)((longlong)puVar10 + 0x1c) = local_c0;
    *(undefined4 *)(puVar10 + 4) = local_bc;
    *(uint *)((longlong)puVar10 + 0x24) = uVar15;
    *(uint *)(puVar10 + 5) = uVar20;
    *(uint *)((longlong)puVar10 + 0x2c) = uVar21;
    *(uint *)(puVar10 + 6) = uVar9;
    *(undefined1 *)((longlong)puVar10 + 0x34) = 1;
    *(undefined2 *)(puVar10 + 7) =
         *(undefined2 *)(*(longlong *)(*param_2 + 0x170) + (longlong)(int)param_2[1] * 2);
    puVar11 = (ulonglong *)FUN_1447eab44(lVar16 + 0x380,uVar26,CONCAT71((int7)(uVar17 >> 8),1));
    for (lVar16 = 9; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
    }
  }
  return;
}



// FUNCTION 142a23a86 FUN_142a23a86 body=701 status=ok
// SIG undefined FUN_142a23a86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142a23a86(longlong param_1,double *param_2,undefined1 (*param_3) [16],char param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  bool bVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((((param_4 != '\0') ||
       (dVar3 = (double)_DAT_14c75f3c4, dVar3 < ABS(*param_2 - *(double *)(param_1 + 0x20)))) ||
      (dVar3 < ABS(param_2[1] - *(double *)(param_1 + 0x28)))) ||
     (dVar3 < ABS(param_2[2] - *(double *)(param_1 + 0x30)))) {
    *(double *)(param_1 + 0x30) = param_2[2];
    dVar3 = param_2[1];
    *(double *)(param_1 + 0x20) = *param_2;
    *(double *)(param_1 + 0x28) = dVar3;
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if (param_4 == '\0') {
    dVar3 = (double)*(float *)(param_1 + 0x4c);
    dVar6 = (double)*(float *)(param_1 + 0x48);
    dVar5 = (double)*(float *)(param_1 + 0x44);
    dVar7 = (double)*(float *)(param_1 + 0x40);
    dVar4 = (double)_DAT_14c75f3c8;
    auVar1 = *param_3;
    uVar19 = auVar1._0_4_;
    uVar20 = auVar1._4_4_;
    auVar2 = param_3[1];
    uVar21 = auVar2._0_4_;
    uVar22 = auVar2._4_4_;
    lVar18 = -(ulonglong)(dVar4 < ABS(auVar1._8_8_ - dVar5));
    auVar11._8_4_ = (int)lVar18;
    auVar11._0_8_ = -(ulonglong)(dVar4 < ABS(auVar1._0_8_ - dVar7));
    auVar11._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    uVar14 = movmskpd((int)param_2,auVar11);
    lVar18 = -(ulonglong)(dVar4 < ABS(auVar2._8_8_ - dVar3));
    auVar10._8_4_ = (int)lVar18;
    auVar10._0_8_ = -(ulonglong)(dVar4 < ABS(auVar2._0_8_ - dVar6));
    auVar10._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
    iVar15 = movmskpd((int)param_3,auVar10);
    uVar16 = iVar15 << 2 | uVar14;
    if (uVar16 != 0) {
      auVar9._8_8_ = -(ulonglong)(dVar4 < ABS(dVar5 + auVar1._8_8_));
      auVar9._0_8_ = -(ulonglong)(dVar4 < ABS(dVar7 + auVar1._0_8_));
      iVar15 = movmskpd(uVar14,auVar9);
      lVar18 = -(ulonglong)(dVar4 < ABS(dVar3 + auVar2._8_8_));
      auVar8._8_4_ = (int)lVar18;
      auVar8._0_8_ = -(ulonglong)(dVar4 < ABS(dVar6 + auVar2._0_8_));
      auVar8._12_4_ = (int)((ulonglong)lVar18 >> 0x20);
      uVar14 = movmskpd(uVar16,auVar8);
      if ((uVar14 & 0x3fffffff) != 0 || iVar15 != 0) {
        uVar23 = auVar1._8_4_;
        uVar24 = auVar1._12_4_;
        uVar25 = auVar2._8_4_;
        uVar26 = auVar2._12_4_;
        goto LAB_142a23c1d;
      }
    }
    if (!bVar12) {
      uVar13 = 0;
      goto LAB_142a23cf1;
    }
  }
  else {
    uVar25 = (undefined4)*(undefined8 *)(param_3[1] + 8);
    uVar26 = (undefined4)((ulonglong)*(undefined8 *)(param_3[1] + 8) >> 0x20);
    uVar21 = (undefined4)*(undefined8 *)param_3[1];
    uVar22 = (undefined4)((ulonglong)*(undefined8 *)param_3[1] >> 0x20);
    uVar19 = (undefined4)*(undefined8 *)*param_3;
    uVar20 = (undefined4)((ulonglong)*(undefined8 *)*param_3 >> 0x20);
    uVar23 = (undefined4)*(undefined8 *)(*param_3 + 8);
    uVar24 = (undefined4)((ulonglong)*(undefined8 *)(*param_3 + 8) >> 0x20);
LAB_142a23c1d:
    *(float *)(param_1 + 0x40) = (float)(double)CONCAT44(uVar20,uVar19);
    *(float *)(param_1 + 0x44) = (float)(double)CONCAT44(uVar24,uVar23);
    *(float *)(param_1 + 0x48) = (float)(double)CONCAT44(uVar22,uVar21);
    *(float *)(param_1 + 0x4c) = (float)(double)CONCAT44(uVar26,uVar25);
    dVar3 = (double)(float)(double)CONCAT44(uVar26,uVar25);
    dVar6 = (double)(float)(double)CONCAT44(uVar22,uVar21);
    dVar5 = (double)(float)(double)CONCAT44(uVar24,uVar23);
    dVar7 = (double)(float)(double)CONCAT44(uVar20,uVar19);
  }
  local_c8._8_4_ = SUB84(dVar5,0);
  local_c8._0_8_ = dVar7;
  local_c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_b8._8_4_ = SUB84(dVar3,0);
  local_b8._0_8_ = dVar6;
  local_b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_a8 = *(undefined4 *)(param_1 + 0x20);
  uStack_a4 = *(undefined4 *)(param_1 + 0x24);
  uStack_a0 = (undefined4)*(undefined8 *)(param_1 + 0x28);
  uStack_9c = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  local_98 = *(undefined8 *)(param_1 + 0x30);
  uStack_90 = 0;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0x3ff0000000000000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  if ((*(longlong *)(param_1 + 0x50) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x50) + 0x1a) == '\x01')) {
    lVar18 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar18 = *(longlong *)(param_1 + 0x80);
    }
    iVar15 = *(int *)(param_1 + 0x88);
    if ((longlong)iVar15 != 0) {
      lVar17 = 0;
      do {
        FUN_14484a332(*(undefined8 *)(lVar18 + lVar17),local_c8);
        lVar17 = lVar17 + 8;
      } while ((longlong)iVar15 * 8 != lVar17);
    }
  }
  uVar13 = 1;
LAB_142a23cf1:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a23d44 FUN_142a23d44 body=559 status=ok
// SIG undefined FUN_142a23d44(void)

void FUN_142a23d44(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar9 = *(int *)(param_1 + 0x304);
  if (0 < iVar9) {
    lVar16 = 0;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x440) + lVar16 * 8);
      if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x88), 0 < (longlong)iVar1)) {
        lVar14 = 0;
        do {
          lVar10 = *(longlong *)(lVar3 + 0x80);
          if (*(longlong *)(lVar3 + 0x80) == 0) {
            lVar10 = lVar3 + 0x78;
          }
          lVar10 = *(longlong *)(lVar10 + lVar14 * 8);
          uVar15 = *(uint *)(lVar10 + 8);
          if ((uVar15 & 3) == 0) {
            lVar4 = *(longlong *)(lVar10 + 0x48);
            uVar5 = *(undefined4 *)((longlong)param_2 + 4);
            uVar6 = *(undefined4 *)(param_2 + 1);
            uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
            *(undefined4 *)(lVar10 + 0x60) = *(undefined4 *)param_2;
            *(undefined4 *)(lVar10 + 100) = uVar5;
            *(undefined4 *)(lVar10 + 0x68) = uVar6;
            *(undefined4 *)(lVar10 + 0x6c) = uVar7;
            uVar2 = *(uint *)(lVar10 + 0xc);
            *(uint *)(lVar10 + 0xc) = uVar2 | 1;
            if ((lVar4 != 0 && uVar2 == 0) && (local_70 = param_1, *(longlong *)(lVar4 + 8) != 0)) {
              FUN_144821112(*(longlong *)(lVar4 + 8) + 0x70,lVar4,uVar15 >> 3);
              uVar15 = *(uint *)(lVar10 + 8);
              param_1 = local_70;
            }
          }
          else {
            uVar8 = param_2[1];
            *(undefined8 *)(lVar10 + 0x58) = *param_2;
            *(undefined8 *)(lVar10 + 0x60) = uVar8;
          }
          if ((uVar15 & 3) == 0) {
            lVar4 = *(longlong *)(lVar10 + 0x48);
            uVar5 = *(undefined4 *)((longlong)param_3 + 4);
            uVar6 = *(undefined4 *)(param_3 + 1);
            uVar7 = *(undefined4 *)((longlong)param_3 + 0xc);
            *(undefined4 *)(lVar10 + 0x50) = *(undefined4 *)param_3;
            *(undefined4 *)(lVar10 + 0x54) = uVar5;
            *(undefined4 *)(lVar10 + 0x58) = uVar6;
            *(undefined4 *)(lVar10 + 0x5c) = uVar7;
            uVar2 = *(uint *)(lVar10 + 0xc);
            *(uint *)(lVar10 + 0xc) = uVar2 | 1;
            if ((lVar4 != 0 && uVar2 == 0) && (*(longlong *)(lVar4 + 8) != 0)) {
              FUN_144821112(*(longlong *)(lVar4 + 8) + 0x70,lVar4,uVar15 >> 3);
            }
          }
          else {
            uVar8 = param_3[1];
            *(undefined8 *)(lVar10 + 0x48) = *param_3;
            *(undefined8 *)(lVar10 + 0x50) = uVar8;
          }
          lVar14 = lVar14 + 1;
        } while (iVar1 != lVar14);
        iVar9 = *(int *)(param_1 + 0x304);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar9);
  }
  local_58 = *param_2;
  uStack_50 = param_2[1];
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  if (*(longlong *)(param_1 + 8) == 0) {
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  puVar11 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
  puVar12 = (undefined8 *)FUN_14001cc68(0x30,8);
  *puVar12 = &PTR_LAB_149f6d840;
  puVar12[1] = param_1;
  puVar12[2] = local_58;
  puVar12[3] = uStack_50;
  puVar13 = &LAB_142a28a88;
  if (puVar12 + 1 == (longlong *)0x0) {
    puVar13 = (undefined1 *)0x0;
  }
  puVar12[4] = CONCAT44(uStack_64,local_68);
  puVar12[5] = CONCAT44(uStack_5c,uStack_60);
  *(undefined2 *)(puVar11 + 1) = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  *(undefined2 *)(puVar11 + 8) = 1;
  *puVar11 = &PTR_FUN_149f45dc0;
  puVar11[10] = puVar13;
  puVar11[0xc] = puVar12;
  puVar11[0x12] = 0;
  puVar11[0x14] = 0;
  *(undefined1 *)(puVar11 + 0x1a) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
}



// FUNCTION 142a23f8f FUN_142a23f8f body=2065 status=ok
// SIG undefined FUN_142a23f8f(void)

ulonglong FUN_142a23f8f(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                       undefined4 *param_5,int *param_6,undefined4 *param_7,uint *param_8)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  char cVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  undefined4 uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_138 [36];
  undefined4 local_114;
  ulonglong local_110;
  undefined8 local_108;
  uint local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar23 = 0;
  if (param_2 == 0 || param_1 == 0) goto LAB_142a243de;
  cVar15 = FUN_142a28df8(param_3,1);
  if (cVar15 != '\0') {
    lVar16 = FUN_146eee930(param_3,1);
    uVar23 = (ulonglong)*(uint *)(lVar16 + 8);
  }
  cVar15 = FUN_142a28df8(param_3,5);
  uVar21 = (undefined4)uVar23;
  if (cVar15 == '\0') {
    local_110 = 5;
    local_fc = 2;
    uVar19 = local_110;
LAB_142a24519:
    local_110 = uVar19;
    FUN_146ee83e6(param_1,param_4 + 0x20,param_2,uVar23);
    iVar20 = 6;
    uVar19 = local_110;
  }
  else {
    lVar16 = FUN_142a28e7c(param_3,5);
    iVar20 = *(int *)(lVar16 + 8);
    uVar5 = *(uint *)(lVar16 + 0xc);
    uVar19 = (ulonglong)uVar5;
    local_fc = *(uint *)(lVar16 + 0x10);
    plVar22 = (longlong *)(param_4 + 0x20);
    if (iVar20 == 6) goto LAB_142a24519;
    FUN_141730e74(plVar22,0,0);
    if ((uVar5 == 2) || (uVar5 - 4 < 2)) {
      iVar6 = *(int *)(param_1 + 0x348);
      if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar6);
      }
      if (*(int *)(param_4 + 0x2c) < iVar6) {
        FUN_140992e4e(plVar22);
      }
      local_114 = uVar21;
      local_108 = param_3;
      if (iVar20 == 0) {
        iVar20 = *(int *)(param_1 + 0x348);
        if ((longlong)iVar20 != 0) {
          lVar16 = *(longlong *)(param_1 + 0x340);
          lVar17 = 0;
          do {
            plVar7 = *(longlong **)(lVar16 + lVar17);
            if ((plVar7 != (longlong *)0x0) &&
               (*(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xb + (longlong)(int)plVar7[1] * 0x10) ==
                '\x04')) {
              iVar6 = *(int *)(param_4 + 0x28);
              *(uint *)(param_4 + 0x28) = iVar6 + 1U;
              if (*(uint *)(param_4 + 0x2c) < iVar6 + 1U) {
                local_110 = uVar19;
                FUN_140125d6e(plVar22,iVar6);
                uVar19 = local_110;
              }
              *(longlong **)(*plVar22 + (longlong)iVar6 * 8) = plVar7;
            }
            lVar17 = lVar17 + 8;
          } while ((longlong)iVar20 * 8 != lVar17);
        }
        iVar20 = 0;
        param_3 = local_108;
        uVar21 = local_114;
      }
      else {
        switch(iVar20) {
        case 1:
          iVar6 = *(int *)(param_1 + 0x348);
          iVar20 = 1;
          if ((longlong)iVar6 != 0) {
            lVar16 = *(longlong *)(param_1 + 0x340);
            lVar17 = 0;
            do {
              plVar7 = *(longlong **)(lVar16 + lVar17);
              if ((plVar7 != (longlong *)0x0) &&
                 (*(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xb + (longlong)(int)plVar7[1] * 0x10)
                  == '\x02')) {
                iVar20 = *(int *)(param_4 + 0x28);
                *(uint *)(param_4 + 0x28) = iVar20 + 1U;
                local_110 = uVar19;
                if (*(uint *)(param_4 + 0x2c) < iVar20 + 1U) {
                  FUN_140125d6e(plVar22,iVar20);
                }
                *(longlong **)(*plVar22 + (longlong)iVar20 * 8) = plVar7;
                uVar19 = local_110;
              }
              iVar20 = 1;
              lVar17 = lVar17 + 8;
              param_3 = local_108;
              uVar21 = local_114;
            } while ((longlong)iVar6 * 8 != lVar17);
          }
          break;
        case 2:
          iVar20 = *(int *)(param_1 + 0x348);
          local_110 = uVar19;
          if ((longlong)iVar20 != 0) {
            lVar16 = *(longlong *)(param_1 + 0x340);
            lVar17 = 0;
            do {
              plVar7 = *(longlong **)(lVar16 + lVar17);
              if ((plVar7 != (longlong *)0x0) &&
                 (*(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xb + (longlong)(int)plVar7[1] * 0x10)
                  == '\x03')) {
                iVar6 = *(int *)(param_4 + 0x28);
                *(uint *)(param_4 + 0x28) = iVar6 + 1U;
                if (*(uint *)(param_4 + 0x2c) < iVar6 + 1U) {
                  FUN_140125d6e(plVar22,iVar6);
                }
                *(longlong **)(*plVar22 + (longlong)iVar6 * 8) = plVar7;
              }
              lVar17 = lVar17 + 8;
            } while ((longlong)iVar20 * 8 != lVar17);
          }
          iVar20 = 2;
          param_3 = local_108;
          uVar19 = local_110;
          uVar21 = local_114;
          break;
        case 3:
          iVar20 = *(int *)(param_1 + 0x348);
          local_110 = uVar19;
          if ((longlong)iVar20 != 0) {
            lVar16 = *(longlong *)(param_1 + 0x340);
            lVar17 = 0;
            do {
              plVar7 = *(longlong **)(lVar16 + lVar17);
              if ((plVar7 != (longlong *)0x0) &&
                 (*(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xb + (longlong)(int)plVar7[1] * 0x10)
                  != '\0')) {
                iVar6 = *(int *)(param_4 + 0x28);
                *(uint *)(param_4 + 0x28) = iVar6 + 1U;
                if (*(uint *)(param_4 + 0x2c) < iVar6 + 1U) {
                  FUN_140125d6e(plVar22,iVar6);
                }
                *(longlong **)(*plVar22 + (longlong)iVar6 * 8) = plVar7;
              }
              lVar17 = lVar17 + 8;
            } while ((longlong)iVar20 * 8 != lVar17);
          }
          iVar20 = 3;
          param_3 = local_108;
          uVar19 = local_110;
          uVar21 = local_114;
          break;
        case 4:
          iVar20 = *(int *)(param_1 + 0x348);
          local_110 = uVar19;
          if ((longlong)iVar20 != 0) {
            lVar16 = *(longlong *)(param_1 + 0x340);
            lVar17 = 0;
            do {
              plVar7 = *(longlong **)(lVar16 + lVar17);
              if ((plVar7 != (longlong *)0x0) &&
                 (*(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xb + (longlong)(int)plVar7[1] * 0x10)
                  == '\x01')) {
                iVar6 = *(int *)(param_4 + 0x28);
                *(uint *)(param_4 + 0x28) = iVar6 + 1U;
                if (*(uint *)(param_4 + 0x2c) < iVar6 + 1U) {
                  FUN_140125d6e(plVar22,iVar6);
                }
                *(longlong **)(*plVar22 + (longlong)iVar6 * 8) = plVar7;
              }
              lVar17 = lVar17 + 8;
            } while ((longlong)iVar20 * 8 != lVar17);
          }
          iVar20 = 4;
          param_3 = local_108;
          uVar19 = local_110;
          uVar21 = local_114;
          break;
        case 5:
          iVar20 = *(int *)(param_1 + 0x348);
          local_110 = uVar19;
          if ((longlong)iVar20 != 0) {
            lVar16 = *(longlong *)(param_1 + 0x340);
            lVar17 = 0;
            do {
              plVar7 = *(longlong **)(lVar16 + lVar17);
              if ((plVar7 != (longlong *)0x0) &&
                 (*(char *)(*(longlong *)(*plVar7 + 0x2c0) + 0xd + (longlong)(int)plVar7[1] * 0x10)
                  == '\x01')) {
                iVar6 = *(int *)(param_4 + 0x28);
                *(uint *)(param_4 + 0x28) = iVar6 + 1U;
                if (*(uint *)(param_4 + 0x2c) < iVar6 + 1U) {
                  FUN_140125d6e(plVar22,iVar6);
                }
                *(longlong **)(*plVar22 + (longlong)iVar6 * 8) = plVar7;
              }
              lVar17 = lVar17 + 8;
            } while ((longlong)iVar20 * 8 != lVar17);
          }
          iVar20 = 5;
          param_3 = local_108;
          uVar19 = local_110;
          uVar21 = local_114;
        }
      }
    }
  }
  uVar5 = local_fc;
  lVar16 = param_4 + 0x30;
  *param_5 = uVar21;
  *param_6 = iVar20;
  *param_7 = (int)uVar19;
  plVar22 = (longlong *)(ulonglong)local_fc;
  *param_8 = local_fc;
  FUN_14051b394(param_4,*(undefined4 *)(param_4 + 0x28),0);
  FUN_1406ea1ca(param_4 + 0x10,*(undefined4 *)(param_4 + 0x28),0);
  FUN_141730e74(lVar16,*(undefined4 *)(param_4 + 0x28),0);
  local_bc = 0;
  iVar20 = *(int *)(param_4 + 0x28);
  local_b8 = param_4;
  local_b0 = param_3;
  local_a8 = lVar16;
  if (uVar5 == 0) {
    if (0 < iVar20) {
      lVar17 = 0;
      plVar22 = &local_b8;
      do {
        plVar7 = *(longlong **)(*(longlong *)(param_4 + 0x20) + lVar17 * 8);
        if ((plVar7 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar7 + 0xc))) {
          lVar8 = *plVar7;
          lVar9 = *(longlong *)(lVar8 + 0x3e0);
          lVar10 = *(longlong *)(lVar8 + 0x530);
          lVar14 = (longlong)(int)plVar7[1] * 0x18;
          lVar8 = *(longlong *)(lVar8 + 0x548);
          lVar18 = (longlong)(int)plVar7[1] * 0x10;
          dVar25 = (double)*(float *)(lVar8 + 0xc + lVar18);
          dVar26 = (double)*(float *)(lVar8 + 8 + lVar18);
          dVar24 = (double)*(float *)(lVar8 + 4 + lVar18);
          dVar11 = (double)*(float *)(lVar8 + lVar18);
          dVar2 = *(double *)(lVar9 + lVar14);
          dVar3 = *(double *)(lVar9 + 8 + lVar14);
          dVar4 = *(double *)(lVar9 + 0x10 + lVar14);
          dVar27 = dVar11 * dVar3 - dVar2 * dVar24;
          dVar27 = dVar27 + dVar27;
          dVar13 = dVar26 * dVar2 - dVar4 * dVar11;
          dVar13 = dVar13 + dVar13;
          dVar12 = dVar24 * dVar4 - dVar3 * dVar26;
          dVar12 = dVar12 + dVar12;
          local_c8 = (dVar11 * dVar13 - dVar12 * dVar24) + dVar27 * dVar25 + dVar4 +
                     *(double *)(lVar10 + 0x10 + lVar14);
          local_d0 = (dVar26 * dVar12 - dVar27 * dVar11) + dVar13 * dVar25 + dVar3 +
                     *(double *)(lVar10 + 8 + lVar14);
          local_d8 = (dVar24 * dVar27 - dVar13 * dVar26) + dVar25 * dVar12 + dVar2 +
                     *(double *)(lVar10 + lVar14);
          FUN_142a28ee0(plVar22,&local_d8,plVar7,&local_bc);
          iVar20 = *(int *)(param_4 + 0x28);
        }
        lVar17 = lVar17 + 1;
      } while (lVar17 < iVar20);
    }
  }
  else if (0 < iVar20) {
    lVar17 = 0;
    plVar22 = &local_b8;
    do {
      plVar7 = *(longlong **)(*(longlong *)(param_4 + 0x20) + lVar17 * 8);
      if (plVar7 != (longlong *)0x0) {
        local_e8 = *(undefined8 *)
                    (*(longlong *)(*plVar7 + 0x28) + 0x10 + (longlong)(int)plVar7[1] * 0x18);
        puVar1 = (undefined4 *)(*(longlong *)(*plVar7 + 0x28) + (longlong)(int)plVar7[1] * 0x18);
        local_f8 = *puVar1;
        uStack_f4 = puVar1[1];
        uStack_f0 = puVar1[2];
        uStack_ec = puVar1[3];
        FUN_142a28ee0(plVar22,&local_f8,plVar7,&local_bc);
        iVar20 = *(int *)(param_4 + 0x28);
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 < iVar20);
  }
  uVar21 = local_bc;
  FUN_14051b394(param_4,local_bc,0);
  FUN_1406ea1ca(param_4 + 0x10,uVar21,0);
  FUN_141730e74(lVar16,uVar21,0);
  uVar23 = CONCAT71((int7)((ulonglong)plVar22 >> 8),0 < *(int *)(param_4 + 0x38));
LAB_142a243de:
  if ((local_a0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar23 & 0xffffffff;
}



// FUNCTION 142a247a1 FUN_142a247a1 body=161 status=ok
// SIG undefined FUN_142a247a1(void)

void FUN_142a247a1(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  longlong *plVar5;
  char cVar6;
  
  if (*(char *)(param_2[0xe] + 8) == '\0') {
    plVar5 = (longlong *)*param_2;
    lVar3 = (longlong)(int)param_2[1];
    param_2 = (longlong *)((longlong)param_2 + 0xc);
  }
  else {
    plVar5 = *(longlong **)(param_2[0xe] + 0x10);
    param_2 = plVar5 + 1;
    lVar3 = 0;
  }
  if ((longlong)(int)*param_2 != 0) {
    piVar4 = (int *)(lVar3 * 8 + *plVar5);
    piVar1 = piVar4 + (longlong)(int)*param_2 * 2;
    do {
      plVar5 = *(longlong **)(*param_1 + (longlong)*piVar4 * 8);
      cVar6 = '\x03';
      if ((plVar5 != (longlong *)0x0 && *(byte *)((longlong)plVar5 + 0xc) != 0) &&
         (cVar6 = '\x02', 1 < *(byte *)((longlong)plVar5 + 0xc))) {
        cVar2 = *(char *)(*(longlong *)(*plVar5 + 0x2c0) + 0xb + (longlong)(int)plVar5[1] * 0x10);
        cVar6 = '\x04';
        if (cVar2 != '\0') {
          cVar6 = cVar2;
        }
      }
      *(int *)(*param_3 + (longlong)piVar4[1] * 4) = (int)cVar6;
      piVar4 = piVar4 + 2;
    } while (piVar4 != piVar1);
  }
  return;
}



// FUNCTION 142a24842 FUN_142a24842 body=325 status=ok
// SIG undefined FUN_142a24842(void)

undefined8
FUN_142a24842(undefined8 param_1,undefined4 param_2,longlong *param_3,char param_4,double *param_5,
             char param_6,double *param_7)

{
  double dVar1;
  double dVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = *(longlong *)(*param_3 + 0x2c0);
  bVar3 = *(byte *)(lVar4 + 0xb + (longlong)(int)param_3[1] * 0x10);
  bVar6 = (byte)param_2;
  if (bVar6 == 4) {
    dVar1 = *(double *)(*(longlong *)(*param_3 + 0x3b0) + (longlong)(int)param_3[1] * 8);
    if (dVar1 <= 1.1920928955078125e-07) {
      return 0;
    }
    if (bVar3 == 4) {
      return 0;
    }
    FUN_142a252aa(dVar1,CONCAT71((int7)((ulonglong)lVar4 >> 8),4),param_3);
    if (param_4 != '\0') {
      dVar1 = param_5[2];
      lVar5 = (longlong)(int)param_3[1];
      dVar2 = param_5[1];
      lVar4 = *(longlong *)(*param_3 + 0x278);
      *(float *)(lVar4 + lVar5 * 0xc) = (float)*param_5;
      *(float *)(lVar4 + 4 + lVar5 * 0xc) = (float)dVar2;
      *(float *)(lVar4 + 8 + lVar5 * 0xc) = (float)dVar1;
    }
    if (param_6 == '\0') {
      return 1;
    }
    fVar7 = (float)param_7[2];
    fVar9 = (float)param_7[1];
    fVar8 = (float)*param_7;
  }
  else {
    if (bVar3 == bVar6) {
      return 0;
    }
    FUN_142a252aa(param_1,param_2,param_3);
    if ((bVar6 & 0xfe) != 2) {
      return 1;
    }
    lVar5 = param_3[1];
    lVar4 = *(longlong *)(*param_3 + 0x278);
    *(undefined8 *)(lVar4 + (longlong)(int)lVar5 * 0xc) = 0;
    *(undefined4 *)(lVar4 + 8 + (longlong)(int)lVar5 * 0xc) = 0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar7 = 0.0;
  }
  lVar5 = (longlong)(int)param_3[1];
  lVar4 = *(longlong *)(*param_3 + 0x290);
  *(float *)(lVar4 + lVar5 * 0xc) = fVar8;
  *(float *)(lVar4 + 4 + lVar5 * 0xc) = fVar9;
  *(float *)(lVar4 + 8 + lVar5 * 0xc) = fVar7;
  return 1;
}



// FUNCTION 142a24987 FUN_142a24987 body=831 status=ok
// SIG undefined FUN_142a24987(void)

void FUN_142a24987(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_f8 [36];
  undefined1 local_d4 [4];
  longlong *local_d0;
  longlong local_c8 [2];
  uint local_b8 [4];
  uint *local_a8;
  int local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (0 < (longlong)*(int *)((longlong)param_2 + 0xc)) {
    local_a8 = (uint *)0x0;
    local_a0 = 0;
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_9c = 0xffffffff00000080;
    local_94 = 0;
    local_88 = 0;
    local_80 = 0;
    piVar15 = (int *)((longlong)*(int *)(param_2 + 1) * 8 + *(longlong *)*param_2);
    piVar1 = piVar15 + (longlong)*(int *)((longlong)param_2 + 0xc) * 2;
    do {
      plVar4 = *(longlong **)(*param_3 + (longlong)*piVar15 * 8);
      if ((plVar4 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar4 + 0xc))) {
        do {
          local_d0 = plVar4;
          plVar4 = *(longlong **)
                    (*(longlong *)(*local_d0 + 0x5a8) + (longlong)(int)local_d0[1] * 0x10);
          if (plVar4 == (longlong *)0x0) break;
        } while (2 < *(byte *)((longlong)plVar4 + 0xc));
        FUN_140a3609c(local_c8,local_d4,&local_d0,0);
      }
      iVar6 = local_a0;
      piVar15 = piVar15 + 2;
    } while (piVar15 != piVar1);
    lVar5 = *(longlong *)(param_1 + 0x9c8);
    if (local_a0 == 0) {
      uVar16 = 1;
      uVar18 = 0;
      iVar12 = 0;
      iVar7 = 0;
    }
    else {
      puVar8 = local_a8;
      if (local_a8 == (uint *)0x0) {
        puVar8 = local_b8;
      }
      uVar17 = *puVar8;
      if (uVar17 == 0) {
        iVar7 = local_a0 + 0x1e;
        if (-1 < local_a0 + -1) {
          iVar7 = local_a0 + -1;
        }
        uVar18 = 0;
        uVar16 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar16 = uVar18;
        }
        iVar12 = 0;
        do {
          if (uVar16 == uVar18) goto LAB_142a24b01;
          iVar12 = iVar12 + 0x20;
          uVar17 = puVar8[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar18 = 0;
        iVar12 = 0;
      }
      uVar16 = (ulonglong)(-uVar17 & uVar17);
      uVar2 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (local_a0 <= iVar7) {
        iVar7 = local_a0;
      }
    }
    if (iVar7 != local_a0) {
      uVar17 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(local_c8[0] + (longlong)iVar7 * 0x10);
        if (plVar4 != (longlong *)0x0) {
          lVar13 = *plVar4;
          lVar14 = (longlong)(int)plVar4[1] * 0x10;
          if (*(char *)(*(longlong *)(lVar13 + 0x2c0) + 0xd + lVar14) == '\0') {
            if (*(int *)(*(longlong *)(lVar13 + 0x5a8) + 8 + lVar14) == 0) {
              if ((*(char *)(*(longlong *)(lVar13 + 0x2c0) + 0xb + lVar14) == '\x04') &&
                 (*(char *)((longlong)plVar4 + 0xc) == '\x01')) {
                lVar13 = *(longlong *)(lVar13 + 0x2a8);
                lVar14 = (longlong)(int)plVar4[1] * 0x40;
                *(undefined8 *)(lVar13 + lVar14) = 0;
                ((undefined8 *)(lVar13 + lVar14))[1] = 0;
                *(undefined8 *)(lVar13 + 0x10 + lVar14) = 0;
                puVar3 = (undefined8 *)(lVar13 + 0x20 + lVar14);
                *puVar3 = 0;
                puVar3[1] = 0x3f80000000000000;
                *(undefined4 *)(lVar13 + 0x30 + lVar14) = 0;
              }
            }
            else {
              FUN_140a357a8(plVar4,lVar5 + 0x510,*(undefined8 *)(param_1 + 0x9c8));
            }
          }
        }
        uVar17 = uVar17 & ~(uint)uVar16;
        puVar8 = local_a8;
        if (local_a8 == (uint *)0x0) {
          puVar8 = local_b8;
        }
        iVar7 = (int)uVar18;
        lVar13 = (longlong)iVar7;
        uVar11 = puVar8[lVar13] & uVar17;
        if (uVar11 == 0) {
          iVar9 = local_a0 + 0x1e;
          if (-1 < local_a0 + -1) {
            iVar9 = local_a0 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar7 < iVar9) {
            lVar14 = 0;
            do {
              uVar11 = puVar8[lVar13 + lVar14 + 1];
              if (uVar11 != 0) {
                uVar18 = (ulonglong)(iVar7 + (int)lVar14 + 1);
                uVar17 = 0xffffffff;
                goto LAB_142a24c54;
              }
              iVar12 = iVar12 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar10 - lVar13 != lVar14);
            uVar17 = 0xffffffff;
            iVar7 = iVar10;
          }
          uVar18 = (ulonglong)(iVar7 + 1);
          iVar7 = local_a0;
        }
        else {
LAB_142a24c54:
          uVar16 = (ulonglong)(-uVar11 & uVar11);
          uVar2 = uVar16 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar7 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (local_a0 <= iVar7) {
            iVar7 = local_a0;
          }
        }
      } while (iVar7 != iVar6);
    }
LAB_142a24b01:
    local_80 = 0;
    if (local_88 != 0) {
      FUN_1400020a8();
    }
    FUN_140d9ce6e(local_c8);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a24cc8 FUN_142a24cc8 body=1458 status=ok
// SIG undefined FUN_142a24cc8(void)

void FUN_142a24cc8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *_Dst;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined4 *local_190;
  undefined4 *local_188;
  undefined4 *local_180;
  longlong *local_170;
  longlong local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  longlong local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  int local_e0;
  longlong local_dc [2];
  undefined1 local_c8 [64];
  longlong local_88;
  undefined4 local_80;
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  _Dst = *(longlong **)(param_1 + 0x310);
  if (_Dst == (longlong *)0x0) {
    _Dst = (longlong *)FUN_14001cc68(0x110);
    memset(_Dst,0,0x110);
    *(longlong **)(param_1 + 0x310) = _Dst;
  }
  uVar16 = (ulonglong)*(uint *)(_Dst + 1);
  if ((uVar16 != 0) && (*(char *)(param_2 + 0x220) == '\0')) {
    local_128 = 0;
    uStack_120 = 0;
    if ((int)*(uint *)(_Dst + 1) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar16);
    }
    FUN_14481578e(&local_128,uVar16);
    local_12c = 3;
    local_130 = 6;
    local_134 = 5;
    local_138 = 2;
    local_170 = _Dst + 2;
    plVar1 = _Dst + 0x12;
    uVar15 = 0;
    local_168 = param_1;
    local_160 = param_2;
    do {
      lVar21 = *_Dst;
      iVar9 = (**(code **)(**(longlong **)(lVar21 + 8 + uVar15 * 200) + 8))();
      if (iVar9 == 4) {
        lVar21 = lVar21 + uVar15 * 200;
        if ((*(int *)(lVar21 + 0x58) == 7) || (*(int *)(lVar21 + 0x58) == 2)) {
          local_180 = &local_138;
          local_188 = &local_134;
          local_190 = &local_130;
          local_198 = &local_12c;
          cVar8 = FUN_142a23f8f(param_1,param_2,lVar21,local_170);
          if (cVar8 != '\0') {
            FUN_1407225a4(&local_e8,local_170,lVar21 + 0x78,
                          *(double *)(param_2 + 0x1f8) - (double)*(float *)(lVar21 + 0x18));
            iVar9 = (**(code **)(**(longlong **)(lVar21 + 8) + 8))();
            if (iVar9 == 4) {
              local_148 = DAT_14c8464f0;
              local_158 = (undefined4)DAT_14c8464e0;
              uStack_154 = DAT_14c8464e0._4_4_;
              uStack_150 = (undefined4)DAT_14c8464e8;
              uStack_14c = DAT_14c8464e8._4_4_;
              iVar9 = (int)_Dst[3];
              FUN_14051b394(plVar1,iVar9,0);
              if (0 < (longlong)iVar9) {
                lVar12 = 0;
                do {
                  lVar20 = *plVar1;
                  *(undefined8 *)(lVar20 + 0x10 + lVar12) = local_148;
                  puVar2 = (undefined4 *)(lVar20 + lVar12);
                  *puVar2 = local_158;
                  puVar2[1] = uStack_154;
                  puVar2[2] = uStack_150;
                  puVar2[3] = uStack_14c;
                  lVar12 = lVar12 + 0x18;
                } while ((longlong)iVar9 * 0x18 != lVar12);
              }
              local_ec = (undefined4)_Dst[0x13];
              local_f0 = 0;
              local_f8 = plVar1;
              (**(code **)(**(longlong **)(lVar21 + 8) + 0x50))
                        (*(longlong **)(lVar21 + 8),&local_e8,&local_f8);
              param_1 = local_168;
              param_2 = local_160;
              if (*(int *)(lVar21 + 0x58) == 7) {
                if (*(char *)(local_78 + 1) == '\0') {
                  lVar21 = (longlong)local_e0;
                  plVar13 = local_dc;
                  plVar11 = local_e8;
                }
                else {
                  plVar13 = (longlong *)local_78[2] + 1;
                  lVar21 = 0;
                  plVar11 = (longlong *)local_78[2];
                }
                lVar12 = *plVar13;
                if ((longlong)(int)lVar12 != 0) {
                  lVar21 = *plVar11 + lVar21 * 8;
                  lVar20 = 0;
                  do {
                    plVar13 = *(longlong **)(_Dst[8] + (longlong)*(int *)(lVar21 + lVar20) * 8);
                    if ((plVar13 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar13 + 0xc))) {
                      lVar18 = (longlong)(int)plVar13[1] * 0x10;
                      cVar8 = *(char *)(*(longlong *)(*plVar13 + 0x2c0) + 0xb + lVar18);
                      if (cVar8 != '\x04') {
                        if (cVar8 != '\x01') goto LAB_142a25135;
                        FUN_1403f44de(*plVar13,(longlong)(int)plVar13[1],
                                      CONCAT71((int7)((ulonglong)lVar18 >> 8),4));
                      }
                      lVar18 = (longlong)local_f0 + (longlong)*(int *)(lVar21 + 4 + lVar20);
                      local_108 = *(undefined8 *)(*local_f8 + 0x10 + lVar18 * 0x18);
                      puVar2 = (undefined4 *)(*local_f8 + lVar18 * 0x18);
                      local_118 = *puVar2;
                      uStack_114 = puVar2[1];
                      uStack_110 = puVar2[2];
                      uStack_10c = puVar2[3];
                      FUN_1409339b8(plVar13,&local_118,1);
                    }
LAB_142a25135:
                    lVar20 = lVar20 + 8;
                    param_1 = local_168;
                    param_2 = local_160;
                  } while ((longlong)(int)lVar12 * 8 != lVar20);
                }
              }
              else if (*(int *)(lVar21 + 0x58) == 2) {
                if (*(char *)(local_78 + 1) == '\0') {
                  lVar21 = (longlong)local_e0;
                  plVar13 = local_dc;
                  plVar11 = local_e8;
                }
                else {
                  plVar13 = (longlong *)local_78[2] + 1;
                  lVar21 = 0;
                  plVar11 = (longlong *)local_78[2];
                }
                lVar12 = *plVar13;
                if ((longlong)(int)lVar12 != 0) {
                  lVar21 = *plVar11 + lVar21 * 8;
                  lVar20 = 0;
                  do {
                    plVar13 = *(longlong **)(_Dst[8] + (longlong)*(int *)(lVar21 + lVar20) * 8);
                    if ((plVar13 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar13 + 0xc))) {
                      lVar18 = *plVar13;
                      lVar14 = (longlong)(int)plVar13[1];
                      lVar17 = lVar14 * 0x10;
                      if (*(char *)(*(longlong *)(lVar18 + 0x2c0) + 0xd + lVar17) == '\0') {
                        cVar8 = *(char *)(*(longlong *)(lVar18 + 0x2c0) + 0xb + lVar17);
                        if (cVar8 != '\x04') {
                          if (cVar8 != '\x01') goto LAB_142a25057;
                          FUN_1403f44de(lVar18,lVar14,CONCAT71((int7)((ulonglong)lVar17 >> 8),4));
                          lVar18 = *plVar13;
                          lVar14 = (longlong)(int)plVar13[1];
                        }
                        lVar19 = (longlong)local_f0 + (longlong)*(int *)(lVar21 + 4 + lVar20);
                        lVar17 = *local_f8;
                        lVar6 = *(longlong *)(lVar18 + 0x308);
                        dVar3 = *(double *)(*(longlong *)(lVar18 + 0x3c8) + lVar14 * 8);
                        dVar4 = *(double *)(lVar17 + 0x10 + lVar19 * 0x18);
                        dVar5 = *(double *)(lVar17 + 8 + lVar19 * 0x18);
                        *(double *)(lVar6 + lVar14 * 0x18) =
                             dVar3 * *(double *)(lVar17 + lVar19 * 0x18) +
                             *(double *)(lVar6 + lVar14 * 0x18);
                        *(double *)(lVar6 + 8 + lVar14 * 0x18) =
                             dVar5 * dVar3 + *(double *)(lVar6 + 8 + lVar14 * 0x18);
                        *(double *)(lVar6 + 0x10 + lVar14 * 0x18) =
                             dVar4 * dVar3 + *(double *)(lVar6 + 0x10 + lVar14 * 0x18);
                      }
                    }
LAB_142a25057:
                    lVar20 = lVar20 + 8;
                    param_1 = local_168;
                    param_2 = local_160;
                  } while ((longlong)(int)lVar12 * 8 != lVar20);
                }
              }
            }
            if (local_78 != (undefined8 *)0x0) {
              (**(code **)*local_78)(local_78,1);
            }
            local_80 = 0;
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            FUN_1402a03ba(local_c8);
          }
          uVar7 = uStack_120;
          lVar21 = (longlong)(int)uStack_120;
          uVar10 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar10);
          if (uStack_120._4_4_ < uVar10) {
            FUN_1446f48e2(&local_128,uVar7 & 0xffffffff);
          }
          *(int *)(local_128 + lVar21 * 4) = (int)uVar15;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar16);
    if (0 < (longlong)(int)uStack_120) {
      uVar16 = (longlong)(int)uStack_120 + 1;
      do {
        FUN_14046b56a(_Dst,*(undefined4 *)(local_128 + -8 + uVar16 * 4),1);
        uVar16 = uVar16 - 1;
      } while (1 < uVar16);
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a2527c FUN_142a2527c body=46 status=ok
// SIG undefined FUN_142a2527c(void)

undefined8 FUN_142a2527c(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x418))) &&
     (lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x410) + (ulonglong)param_2 * 4),
     lVar1 != -1)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x440) + lVar1 * 8);
  }
  return 0;
}



// FUNCTION 142a252aa FUN_142a252aa body=143 status=ok
// SIG undefined FUN_142a252aa(void)

void FUN_142a252aa(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(char *)((longlong)param_3 + 0xc) == '\x03') {
    lVar1 = *param_3;
    uVar2 = (ulonglong)(int)param_3[1];
    if ((*(byte *)(*(longlong *)(lVar1 + 0x680) + uVar2) & 1) != 0) goto LAB_142a25308;
  }
  else {
    if (*(char *)((longlong)param_3 + 0xc) != '\x06') {
LAB_142a25308:
      FUN_1400d2fee(*(undefined8 *)(param_1 + 0x9c8),param_3,param_2);
      return;
    }
    lVar1 = *param_3;
    uVar2 = (ulonglong)*(uint *)(param_3 + 1);
  }
  FUN_1403f44de(lVar1,uVar2);
  if (*(char *)(*(longlong *)(*param_3 + 0x2c0) + 0xd + (longlong)(int)param_3[1] * 0x10) != '\0') {
    return;
  }
  FUN_140a3679e(*(undefined8 *)(*(longlong *)(param_1 + 0x9c8) + 0x2c8),param_3);
  return;
}



// FUNCTION 142a2533a FUN_142a2533a body=1 status=ok
// SIG undefined FUN_142a2533a(void)

void FUN_142a2533a(void)

{
  return;
}



// FUNCTION 142a25344 FUN_142a25344 body=180 status=ok
// SIG undefined FUN_142a25344(void)

void FUN_142a25344(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong local_50;
  undefined4 local_48;
  longlong local_40 [2];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x9c8), lVar2 != 0)) {
    local_50 = param_1[1];
    local_48 = (undefined4)param_1[2];
    FUN_146e20a90(&local_29,local_40,&local_50,0);
    local_58 = local_40;
    FUN_146cb7fae(lVar2 + 0x560,lVar2 + 0x570,*(undefined4 *)(lVar1 + 0x150),0);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a25410 FUN_142a25410 body=57 status=ok
// SIG undefined FUN_142a25410(void)

undefined8 * FUN_142a25410(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6d300;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a2544a FUN_142a2544a body=221 status=ok
// SIG undefined FUN_142a2544a(void)

void FUN_142a2544a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  longlong local_40 [2];
  undefined1 local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar1 + 8) + 0x9c8), lVar2 != 0)) {
    FUN_146eed3bc(param_1 + 1,&local_60);
    local_50 = local_60;
    local_48 = local_58;
    FUN_146e20a90(&local_29,local_40,&local_50,0);
    local_68 = local_40;
    FUN_146cb7fae(lVar2 + 0x560,lVar2 + 0x570,*(undefined4 *)(lVar1 + 0x150),2);
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a25532 FUN_142a25532 body=29 status=ok
// SIG undefined FUN_142a25532(void)

void FUN_142a25532(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a25550 FUN_142a25550 body=73 status=ok
// SIG undefined FUN_142a25550(void)

undefined8 * FUN_142a25550(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6d320;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_146eecb48(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a2559a FUN_142a2559a body=220 status=ok
// SIG undefined FUN_142a2559a(void)

void FUN_142a2559a(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  plVar3 = *(longlong **)(lVar2 + 0x148);
  if (((lVar2 != 0 && plVar3 != (longlong *)0x0) && (*(longlong *)(lVar2 + 8) != 0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(lVar2 + 8) + 0x9c8), lVar4 != 0)) {
    bVar1 = *(byte *)(*(longlong *)(*plVar3 + 0x680) + (longlong)(int)plVar3[1]);
    *(byte *)(*(longlong *)(*plVar3 + 0x680) + (longlong)(int)plVar3[1]) =
         bVar1 & 0xfd | (char)param_1[1] * '\x02';
    lVar5 = FUN_1401961f6(lVar4 + 0x560,*(undefined4 *)(lVar2 + 0x150));
    if (lVar5 != 0) {
      *(byte *)(lVar5 + 0xf8) = *(byte *)(lVar5 + 0xf8) | 2;
    }
    if ((bool)(char)param_1[1] != ((bVar1 >> 1 & 1) != 0)) {
      local_2c = *(undefined4 *)(lVar2 + 0x150);
      pbVar6 = (byte *)FUN_146ceb568(lVar4 + 0x700);
      *pbVar6 = *pbVar6 | 8;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a2568e FUN_142a2568e body=29 status=ok
// SIG undefined FUN_142a2568e(void)

undefined8 FUN_142a2568e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a2570e FUN_142a2570e body=29 status=ok
// SIG undefined FUN_142a2570e(void)

undefined8 FUN_142a2570e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a25778 FUN_142a25778 body=29 status=ok
// SIG undefined FUN_142a25778(void)

undefined8 FUN_142a25778(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a25844 FUN_142a25844 body=29 status=ok
// SIG undefined FUN_142a25844(void)

void FUN_142a25844(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a25862 FUN_142a25862 body=29 status=ok
// SIG undefined FUN_142a25862(void)

undefined8 FUN_142a25862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a25880 FUN_142a25880 body=167 status=ok
// SIG undefined FUN_142a25880(void)

void FUN_142a25880(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  int local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_48 = param_1[1];
  local_40 = (undefined4)param_1[2];
  FUN_146e20a90(&local_21,&local_38,&local_48,1);
  if (local_30 == (int)param_1[2]) {
    local_58 = (undefined1)param_1[5];
    FUN_142991092(*(longlong *)(*(longlong *)(lVar1 + 8) + 0x9c8) + 0x560,
                  *(undefined4 *)(lVar1 + 0x150),&local_38,param_1 + 3);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a25932 FUN_142a25932 body=29 status=ok
// SIG undefined FUN_142a25932(void)

void FUN_142a25932(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a25950 FUN_142a25950 body=71 status=ok
// SIG undefined FUN_142a25950(void)

undefined8 * FUN_142a25950(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6d3c0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a259c2 FUN_142a259c2 body=29 status=ok
// SIG undefined FUN_142a259c2(void)

undefined8 FUN_142a259c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a259e0 FUN_142a259e0 body=1 status=ok
// SIG undefined FUN_142a259e0(void)

void FUN_142a259e0(void)

{
  return;
}



// FUNCTION 142a259fc FUN_142a259fc body=1253 status=ok
// SIG undefined FUN_142a259fc(void)

void FUN_142a259fc(longlong *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  byte *pbVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_148 [32];
  undefined4 *local_128;
  undefined8 *local_120;
  double local_118;
  float *local_110;
  longlong local_108;
  undefined1 local_100;
  undefined2 local_f8;
  undefined4 local_f0;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar8 = *param_1;
  plVar9 = *(longlong **)(*(longlong *)(lVar8 + 0x340) + (longlong)*param_2 * 8);
  if (plVar9 != (longlong *)0x0) {
    iVar6 = *(int *)(*(longlong *)(lVar8 + 0x400) + (longlong)*param_2 * 4);
    lVar17 = (longlong)iVar6;
    dVar3 = *(double *)(lVar8 + 0xf0);
    dVar4 = *(double *)(lVar8 + 0xe0);
    dVar5 = *(double *)(lVar8 + 0xe8);
    fVar1 = *(float *)(lVar8 + 0x1bc);
    fVar2 = *(float *)(*(longlong *)(param_1[2] + 0x10) + lVar17 * 4);
    lVar16 = *(longlong *)(param_1[3] + 0x10);
    fVar23 = *(float *)(lVar16 + lVar17 * 0xc);
    fVar25 = *(float *)(lVar16 + 4 + lVar17 * 0xc);
    fVar20 = *(float *)(lVar16 + 8 + lVar17 * 0xc);
    fVar21 = ABS((float)dVar3);
    fVar24 = ABS((float)dVar5);
    fVar19 = ABS((float)dVar4);
    fVar22 = (fVar23 + fVar25 + fVar20) * 0.5;
    fVar20 = (fVar22 - fVar20) * fVar21 * fVar21;
    fVar25 = (fVar22 - fVar25) * fVar24 * fVar24;
    fVar23 = (fVar22 - fVar23) * fVar19 * fVar19;
    fVar21 = fVar19 * fVar24 * fVar21;
    local_a8 = fVar21 * (fVar23 + fVar25) * fVar1;
    local_ac = (fVar20 + fVar23) * fVar21 * fVar1;
    local_b0 = (fVar25 + fVar20) * fVar21 * fVar1;
    local_f0 = *(undefined4 *)(lVar8 + 0x30c);
    local_f8 = *(undefined2 *)(lVar8 + 0x198);
    local_100 = *(undefined1 *)(*(longlong *)(param_1[7] + 0x10) + lVar17);
    local_108 = lVar17 * 0x60 + *(longlong *)param_1[6];
    local_c8 = *(undefined8 *)(lVar8 + 0x500);
    uStack_c0 = *(undefined8 *)(lVar8 + 0x508);
    local_d8 = *(undefined4 *)(lVar8 + 0x4f0);
    uStack_d4 = *(undefined4 *)(lVar8 + 0x4f4);
    uStack_d0 = *(undefined4 *)(lVar8 + 0x4f8);
    uStack_cc = *(undefined4 *)(lVar8 + 0x4fc);
    if ((DAT_14c75f3e0 == '\0') && (iVar6 != *(int *)(lVar8 + 0x180))) {
      local_e0 = 0;
    }
    else {
      local_e0 = *(longlong *)(*(longlong *)(param_1[5] + 0x10) + lVar17 * 8);
      if (local_e0 != 0) {
        LOCK();
        *(int *)(local_e0 + 8) = *(int *)(local_e0 + 8) + 1;
        UNLOCK();
      }
    }
    local_118 = (double)ABS((float)(dVar4 * dVar5 * dVar3) * fVar1 * fVar2);
    if (*(longlong *)param_1[4] == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(undefined8 *)(*(longlong *)(*(longlong *)param_1[4] + 0x10) + lVar17 * 8);
    }
    local_110 = &local_b0;
    local_120 = &local_c8;
    local_128 = &local_d8;
    FUN_142a13b4a(plVar9,lVar8 + 0x68,uVar18,&local_e0);
    lVar16 = *(longlong *)(param_1[1] + 0x68);
    if (lVar16 == 0) {
      pbVar12 = (byte *)((longlong)(int)plVar9[1] + *(longlong *)(*plVar9 + 0x680));
      bVar13 = 0;
    }
    else {
      lVar17 = lVar16 + 0x10;
      if (*(longlong *)(lVar16 + 0x20) != 0) {
        lVar17 = *(longlong *)(lVar16 + 0x20);
      }
      iVar14 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar14 = iVar6;
      }
      pbVar12 = (byte *)((longlong)(int)plVar9[1] + *(longlong *)(*plVar9 + 0x680));
      bVar13 = ((1 << ((byte)iVar6 & 0x1f) & *(uint *)(lVar17 + (longlong)(iVar14 >> 5) * 4)) != 0)
               * '\x02';
    }
    *pbVar12 = *pbVar12 & 0xfd | bVar13;
    if ((*(byte *)(lVar8 + 0x1c0) & 2) != 0) {
      *(undefined4 *)(*(longlong *)(*plVar9 + 0x5d8) + (longlong)(int)plVar9[1] * 4) =
           *(undefined4 *)(lVar8 + 0x184);
    }
    uVar11 = *(uint *)(lVar8 + 0x1b8);
    if (0xffffff < uVar11) {
      lVar16 = *(longlong *)param_1[8];
      uVar15 = uVar11 & 0xffffff;
      if ((int)uVar15 < *(int *)(lVar16 + 0xb58)) {
        lVar17 = lVar16 + 0xb40;
        if (*(longlong *)(lVar16 + 0xb50) != 0) {
          lVar17 = *(longlong *)(lVar16 + 0xb50);
        }
        if ((((*(uint *)(lVar17 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0) &&
            ((uVar11 ^ *(uint *)(*(longlong *)(lVar16 + 0xb30) + (ulonglong)uVar15 * 4)) < 0x1000000
            )) && (lVar16 = (ulonglong)(uVar15 << 7) + *(longlong *)(lVar16 + 0xb60), lVar16 != 0))
        {
          *(undefined8 *)(*(longlong *)(*plVar9 + 0x410) + (longlong)(int)plVar9[1] * 8) =
               *(undefined8 *)(lVar16 + 0x20);
          *(undefined8 *)(*(longlong *)(*plVar9 + 0x428) + (longlong)(int)plVar9[1] * 8) =
               *(undefined8 *)(lVar16 + 0x28);
        }
      }
    }
    lVar16 = *(longlong *)(*plVar9 + 0xf8) + (longlong)(int)plVar9[1] * 0x18;
    lVar17 = *(longlong *)(lVar16 + 8);
    if (*(longlong *)(lVar16 + 8) == 0) {
      lVar17 = lVar16;
    }
    iVar6 = *(int *)(lVar16 + 0x10);
    if ((longlong)iVar6 != 0) {
      lVar16 = 0;
      do {
        lVar10 = *(longlong *)(lVar17 + lVar16);
        uVar7 = *(undefined4 *)(lVar8 + 0x1b8);
        uVar11 = *(uint *)(lVar10 + 8);
        if ((uVar11 & 3) == 0) {
          local_128 = (undefined4 *)CONCAT44(local_128._4_4_,uVar11 >> 3);
          local_120 = (undefined8 *)&local_a4;
          local_a4 = uVar7;
          FUN_1401c2fdc(lVar10 + 0x80,1,lVar10 + 0xc,*(undefined8 *)(lVar10 + 0x48));
        }
        else {
          if ((uVar11 & 4) == 0) {
            plVar9 = *(longlong **)(lVar10 + 0x78);
            if (plVar9 != (longlong *)0x0) {
              if (plVar9[6] != 0) {
                FUN_1400020a8();
              }
              if (plVar9[4] != 0) {
                FUN_1400020a8();
              }
              if (plVar9[2] != 0) {
                FUN_1400020a8();
              }
              if (*plVar9 != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(plVar9);
              uVar11 = *(uint *)(lVar10 + 8);
            }
            *(uint *)(lVar10 + 8) = uVar11 | 4;
          }
          *(undefined4 *)(lVar10 + 0x78) = uVar7;
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)iVar6 * 8 != lVar16);
    }
  }
  if ((local_a0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a25f40 FUN_142a25f40 body=29 status=ok
// SIG undefined FUN_142a25f40(void)

undefined8 FUN_142a25f40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a25f5e FUN_142a25f5e body=140 status=ok
// SIG undefined FUN_142a25f5e(void)

void FUN_142a25f5e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_1[3];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[2];
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      lVar4 = (longlong)
              *(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)*(int *)(lVar1 + lVar5) * 4);
      FUN_1407ddbc4(*(undefined8 *)(param_1[1] + 0x9c8),
                    *(undefined8 *)(*(longlong *)(lVar2 + 0x340) + lVar4 * 8));
      FUN_1456cc230(param_1[1] + 0x2b0,*(undefined8 *)(*(longlong *)(lVar2 + 0x340) + lVar4 * 8),1);
      lVar5 = lVar5 + 4;
    } while ((longlong)(int)lVar3 * 4 != lVar5);
  }
  return;
}



// FUNCTION 142a25ff4 FUN_142a25ff4 body=29 status=ok
// SIG undefined FUN_142a25ff4(void)

void FUN_142a25ff4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a26012 FUN_142a26012 body=57 status=ok
// SIG undefined FUN_142a26012(void)

undefined8 * FUN_142a26012(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6d4a0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a2604c FUN_142a2604c body=1195 status=ok
// SIG undefined FUN_142a2604c(void)

void FUN_142a2604c(longlong *param_1)

{
  ulonglong uVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = *param_1;
  lVar6 = *(longlong *)(param_1[7] + 0x9c8);
  iVar5 = *(int *)(lVar6 + 0x498);
  local_c8 = param_1;
  if (iVar5 == 0) {
    uVar22 = 1;
    uVar18 = 0;
    iVar20 = 0;
    iVar23 = 0;
  }
  else {
    puVar16 = *(uint **)(lVar6 + 0x490);
    if (*(uint **)(lVar6 + 0x490) == (uint *)0x0) {
      puVar16 = (uint *)(lVar6 + 0x480);
    }
    uVar14 = *puVar16;
    if (uVar14 == 0) {
      iVar23 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar23 = iVar5 + -1;
      }
      uVar18 = 0;
      uVar22 = (ulonglong)(uint)(iVar23 >> 5);
      if (iVar23 >> 5 < 1) {
        uVar22 = uVar18;
      }
      iVar20 = 0;
      do {
        if (uVar22 == uVar18) goto LAB_142a264a0;
        iVar20 = iVar20 + 0x20;
        uVar14 = puVar16[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar18 = 0;
      iVar20 = 0;
    }
    uVar22 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar22 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar23 = (iVar20 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar23) {
      iVar23 = iVar5;
    }
  }
  if (iVar23 != iVar5) {
    puVar16 = (uint *)(lVar6 + 0x480);
    if (*(uint **)(lVar6 + 0x490) != (uint *)0x0) {
      puVar16 = *(uint **)(lVar6 + 0x490);
    }
    iVar17 = iVar5 + 0x1e;
    if (-1 < iVar5 + -1) {
      iVar17 = iVar5 + -1;
    }
    iVar17 = iVar17 >> 5;
    uVar14 = 0xffffffff;
    plVar11 = (longlong *)0x0;
    dVar33 = 1.79769313486232e+308;
    do {
      plVar7 = *(longlong **)(*(longlong *)(lVar6 + 0x470) + (longlong)iVar23 * 0x10);
      plVar12 = plVar11;
      dVar26 = dVar33;
      if (plVar7 != (longlong *)0x0) {
        lVar21 = *plVar7;
        lVar13 = (longlong)(int)plVar7[1];
        if ((*(longlong *)(*(longlong *)(lVar21 + 200) + lVar13 * 8) == local_c0) &&
           ((cVar4 = *(char *)(*(longlong *)(lVar21 + 0x2c0) + 0xb + lVar13 * 0x10), cVar4 == '\x04'
            || (cVar4 == '\x01')))) {
          lVar21 = *(longlong *)(lVar21 + 0x28);
          dVar26 = (double)param_1[6] - *(double *)(lVar21 + 0x10 + lVar13 * 0x18);
          dVar30 = (double)param_1[5] - *(double *)(lVar21 + 8 + lVar13 * 0x18);
          dVar28 = (double)param_1[4] - *(double *)(lVar21 + lVar13 * 0x18);
          dVar26 = dVar26 * dVar26 + dVar28 * dVar28 + dVar30 * dVar30;
          plVar12 = plVar7;
          if (dVar33 <= dVar26) {
            plVar12 = plVar11;
            dVar26 = dVar33;
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar22;
      iVar23 = (int)uVar18;
      lVar21 = (longlong)iVar23;
      uVar24 = puVar16[lVar21] & uVar14;
      if (uVar24 == 0) {
        iVar15 = iVar17;
        if (iVar17 < iVar23) {
          iVar15 = iVar23;
        }
        if (iVar17 <= iVar23) break;
        lVar13 = 0;
        while( true ) {
          iVar20 = iVar20 + 0x20;
          uVar24 = puVar16[lVar21 + lVar13 + 1];
          if (uVar24 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar15 - lVar21 == lVar13) goto LAB_142a262af;
        }
        uVar18 = (ulonglong)(iVar23 + (int)lVar13 + 1);
        uVar14 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar24 & uVar24);
      uVar1 = uVar22 * 2 + 1;
      lVar21 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar21 == 0; lVar21 = lVar21 + -1) {
        }
      }
      iVar23 = (iVar20 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
      plVar11 = plVar12;
      dVar33 = dVar26;
    } while (iVar23 < iVar5);
LAB_142a262af:
    if (plVar12 != (longlong *)0x0) {
      lVar6 = *plVar12;
      lVar10 = (longlong)(int)plVar12[1] * 0x18;
      lVar21 = *(longlong *)(lVar6 + 0x48);
      lVar19 = (longlong)(int)plVar12[1] * 0x10;
      dVar29 = (double)*(float *)(lVar21 + 0xc + lVar19);
      dVar31 = (double)*(float *)(lVar21 + 8 + lVar19);
      dVar25 = (double)*(float *)(lVar21 + 4 + lVar19);
      lVar13 = *(longlong *)(lVar6 + 0x28);
      dVar27 = (double)*(float *)(lVar21 + lVar19);
      lVar6 = *(longlong *)(lVar6 + 0x3e0);
      dVar33 = *(double *)(lVar6 + lVar10);
      dVar26 = *(double *)(lVar6 + 8 + lVar10);
      dVar28 = *(double *)(lVar6 + 0x10 + lVar10);
      dVar32 = dVar27 * dVar26 - dVar33 * dVar25;
      dVar32 = dVar32 + dVar32;
      dVar9 = dVar31 * dVar33 - dVar28 * dVar27;
      dVar9 = dVar9 + dVar9;
      dVar8 = dVar25 * dVar28 - dVar26 * dVar31;
      dVar8 = dVar8 + dVar8;
      dVar30 = (double)param_1[1];
      dVar2 = (double)param_1[2];
      dVar3 = (double)param_1[3];
      dVar28 = (double)param_1[6] -
               ((dVar27 * dVar9 - dVar8 * dVar25) + dVar32 * dVar29 + dVar28 +
               *(double *)(lVar13 + 0x10 + lVar10));
      dVar26 = (double)param_1[5] -
               ((dVar31 * dVar8 - dVar32 * dVar27) + dVar9 * dVar29 + dVar26 +
               *(double *)(lVar13 + 8 + lVar10));
      dVar33 = (double)param_1[4] -
               ((dVar25 * dVar32 - dVar9 * dVar31) + dVar29 * dVar8 + dVar33 +
               *(double *)(lVar13 + lVar10));
      local_a8 = dVar33 * dVar2 - dVar30 * dVar26;
      local_b0 = dVar28 * dVar30 - dVar3 * dVar33;
      local_b8 = dVar26 * dVar3 - dVar2 * dVar28;
      lVar21 = (longlong)(int)plVar12[1];
      lVar6 = *(longlong *)(*plVar12 + 0x308);
      dVar33 = *(double *)(*(longlong *)(*plVar12 + 0x3c8) + lVar21 * 8);
      *(double *)(lVar6 + lVar21 * 0x18) = dVar30 * dVar33 + *(double *)(lVar6 + lVar21 * 0x18);
      *(double *)(lVar6 + 8 + lVar21 * 0x18) =
           dVar2 * dVar33 + *(double *)(lVar6 + 8 + lVar21 * 0x18);
      *(double *)(lVar6 + 0x10 + lVar21 * 0x18) =
           dVar3 * dVar33 + *(double *)(lVar6 + 0x10 + lVar21 * 0x18);
      FUN_1409339b8(dVar33,&local_b8,CONCAT71((int7)((ulonglong)(lVar21 * 3) >> 8),1));
    }
  }
LAB_142a264a0:
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a26502 FUN_142a26502 body=29 status=ok
// SIG undefined FUN_142a26502(void)

void FUN_142a26502(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a26520 FUN_142a26520 body=29 status=ok
// SIG undefined FUN_142a26520(void)

undefined8 FUN_142a26520(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a2653e FUN_142a2653e body=1696 status=ok
// SIG undefined FUN_142a2653e(void)

void FUN_142a2653e(longlong *param_1)

{
  double *pdVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  longlong *plVar22;
  uint *puVar23;
  longlong lVar24;
  uint uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  int iVar29;
  longlong lVar30;
  int iVar31;
  longlong lVar32;
  ulonglong uVar33;
  int iVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_1b8 [32];
  longlong *local_198;
  longlong *local_190;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar10 = *(longlong *)(param_1[7] + 0x9c8);
  iVar9 = *(int *)(lVar10 + 0x498);
  local_190 = param_1;
  if (iVar9 == 0) {
    uVar33 = 1;
    uVar28 = 0;
    iVar29 = 0;
    iVar34 = 0;
  }
  else {
    puVar23 = *(uint **)(lVar10 + 0x490);
    if (*(uint **)(lVar10 + 0x490) == (uint *)0x0) {
      puVar23 = (uint *)(lVar10 + 0x480);
    }
    uVar25 = *puVar23;
    if (uVar25 == 0) {
      iVar34 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar34 = iVar9 + -1;
      }
      uVar28 = 0;
      uVar33 = (ulonglong)(uint)(iVar34 >> 5);
      if (iVar34 >> 5 < 1) {
        uVar33 = uVar28;
      }
      iVar29 = 0;
      do {
        if (uVar33 == uVar28) goto LAB_142a26b69;
        iVar29 = iVar29 + 0x20;
        uVar25 = puVar23[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar28 = 0;
      iVar29 = 0;
    }
    uVar33 = (ulonglong)(-uVar25 & uVar25);
    uVar2 = uVar33 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar34 = (iVar29 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar34) {
      iVar34 = iVar9;
    }
  }
  if (iVar34 != iVar9) {
    puVar23 = (uint *)(lVar10 + 0x480);
    if (*(uint **)(lVar10 + 0x490) != (uint *)0x0) {
      puVar23 = *(uint **)(lVar10 + 0x490);
    }
    iVar31 = iVar9 + 0x1e;
    if (-1 < iVar9 + -1) {
      iVar31 = iVar9 + -1;
    }
    iVar31 = iVar31 >> 5;
    uVar25 = 0xffffffff;
    local_198 = (longlong *)0x0;
    dVar37 = 1.79769313486232e+308;
    do {
      plVar11 = *(longlong **)(*(longlong *)(lVar10 + 0x470) + (longlong)iVar34 * 0x10);
      dVar39 = dVar37;
      plVar22 = local_198;
      if (plVar11 != (longlong *)0x0) {
        lVar32 = *plVar11;
        lVar27 = (longlong)(int)plVar11[1];
        if ((*(longlong *)(*(longlong *)(lVar32 + 200) + lVar27 * 8) == *param_1) &&
           ((cVar8 = *(char *)(*(longlong *)(lVar32 + 0x2c0) + 0xb + lVar27 * 0x10), cVar8 == '\x04'
            || (cVar8 == '\x01')))) {
          lVar32 = *(longlong *)(lVar32 + 0x28);
          dVar38 = (double)param_1[6] - *(double *)(lVar32 + 0x10 + lVar27 * 0x18);
          dVar42 = (double)param_1[5] - *(double *)(lVar32 + 8 + lVar27 * 0x18);
          dVar39 = (double)param_1[4] - *(double *)(lVar32 + lVar27 * 0x18);
          dVar39 = dVar38 * dVar38 + dVar39 * dVar39 + dVar42 * dVar42;
          plVar22 = plVar11;
          if (dVar37 <= dVar39) {
            dVar39 = dVar37;
            plVar22 = local_198;
          }
        }
      }
      local_198 = plVar22;
      plVar11 = local_198;
      uVar25 = uVar25 & ~(uint)uVar33;
      iVar34 = (int)uVar28;
      lVar32 = (longlong)iVar34;
      uVar35 = puVar23[lVar32] & uVar25;
      if (uVar35 == 0) {
        iVar26 = iVar31;
        if (iVar31 < iVar34) {
          iVar26 = iVar34;
        }
        if (iVar31 <= iVar34) break;
        lVar27 = 0;
        while( true ) {
          iVar29 = iVar29 + 0x20;
          uVar35 = puVar23[lVar32 + lVar27 + 1];
          if (uVar35 != 0) break;
          lVar27 = lVar27 + 1;
          if (iVar26 - lVar32 == lVar27) goto LAB_142a267ce;
        }
        uVar28 = (ulonglong)(iVar34 + (int)lVar27 + 1);
        uVar25 = 0xffffffff;
      }
      uVar33 = (ulonglong)(-uVar35 & uVar35);
      uVar2 = uVar33 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar34 = (iVar29 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      dVar37 = dVar39;
    } while (iVar34 < iVar9);
LAB_142a267ce:
    if (local_198 != (longlong *)0x0) {
      lVar10 = *local_198;
      lVar24 = (longlong)(int)local_198[1];
      lVar17 = lVar24 * 0x18;
      lVar32 = *(longlong *)(lVar10 + 0x28);
      lVar27 = *(longlong *)(lVar10 + 0x48);
      lVar30 = lVar24 * 0x10;
      dVar36 = (double)*(float *)(lVar27 + 0xc + lVar30);
      dVar40 = (double)*(float *)(lVar27 + 8 + lVar30);
      dVar13 = (double)*(float *)(lVar27 + 4 + lVar30);
      dVar14 = (double)*(float *)(lVar27 + lVar30);
      lVar27 = *(longlong *)(lVar10 + 0x3e0);
      dVar37 = *(double *)(lVar27 + lVar17);
      dVar39 = *(double *)(lVar27 + 8 + lVar17);
      dVar38 = *(double *)(lVar27 + 0x10 + lVar17);
      dVar12 = dVar14 * dVar39 - dVar37 * dVar13;
      dVar12 = dVar12 + dVar12;
      dVar15 = dVar40 * dVar37 - dVar38 * dVar14;
      dVar15 = dVar15 + dVar15;
      dVar43 = dVar13 * dVar38 - dVar39 * dVar40;
      dVar43 = dVar43 + dVar43;
      dVar42 = *(double *)(lVar32 + 0x10 + lVar17);
      dVar3 = *(double *)(lVar32 + 8 + lVar17);
      dVar4 = *(double *)(lVar32 + lVar17);
      dVar5 = *(double *)(*(longlong *)(lVar10 + 0x3c8) + lVar24 * 8);
      lVar10 = *(longlong *)(lVar10 + 0x338);
      dVar6 = (double)param_1[3];
      dVar7 = (double)param_1[2];
      *(double *)(lVar10 + lVar17) = dVar5 * (double)param_1[1] + *(double *)(lVar10 + lVar17);
      *(double *)(lVar10 + 8 + lVar17) = dVar7 * dVar5 + *(double *)(lVar10 + 8 + lVar17);
      *(double *)(lVar10 + 0x10 + lVar17) = dVar6 * dVar5 + *(double *)(lVar10 + 0x10 + lVar17);
      lVar32 = (longlong)(int)local_198[1];
      lVar10 = *(longlong *)(*local_198 + 0x380);
      local_150 = (double)*(float *)(lVar10 + 8 + lVar32 * 0xc);
      local_158 = (double)*(float *)(lVar10 + 4 + lVar32 * 0xc);
      local_160 = (double)*(float *)(lVar10 + lVar32 * 0xc);
      lVar10 = *(longlong *)(*local_198 + 0x48);
      lVar32 = (longlong)(int)local_198[1] * 0x10;
      dVar5 = (double)*(float *)(lVar10 + 0xc + lVar32);
      dVar41 = (double)*(float *)(lVar10 + 8 + lVar32);
      dVar7 = (double)*(float *)(lVar10 + 4 + lVar32);
      dVar44 = (double)*(float *)(lVar10 + lVar32);
      lVar10 = *(longlong *)(*local_198 + 0x3f8);
      lVar32 = (longlong)(int)local_198[1] * 0x20;
      pdVar1 = (double *)(lVar10 + lVar32);
      dVar18 = *pdVar1;
      dVar19 = pdVar1[1];
      pdVar1 = (double *)(lVar10 + 0x10 + lVar32);
      dVar20 = *pdVar1;
      dVar21 = pdVar1[1];
      dVar16 = dVar18 * dVar41 * 1.0 + dVar21 * dVar7 + dVar44 * dVar20 * -1.0 + dVar5 * dVar19;
      dVar6 = dVar20 * dVar41 * -1.0 + ((dVar44 * dVar18 * -1.0 + dVar5 * dVar21) - dVar7 * dVar19);
      local_188._8_4_ = SUB84(dVar16,0);
      local_188._0_8_ =
           dVar19 * dVar41 * -1.0 + dVar20 * dVar7 + dVar44 * dVar21 * 1.0 + dVar5 * dVar18;
      local_188._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
      local_178._8_4_ = SUB84(dVar6,0);
      local_178._0_8_ =
           dVar21 * dVar41 * 1.0 + ((dVar44 * dVar19 * 1.0 + dVar5 * dVar20) - dVar7 * dVar18);
      local_178._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      FUN_1409353c1(&local_148);
      dVar38 = (double)param_1[6] -
               ((dVar14 * dVar15 - dVar43 * dVar13) + dVar12 * dVar36 + dVar38 + dVar42);
      dVar42 = (double)param_1[5] -
               ((dVar40 * dVar43 - dVar12 * dVar14) + dVar15 * dVar36 + dVar39 + dVar3);
      dVar37 = (double)param_1[4] -
               ((dVar13 * dVar12 - dVar15 * dVar40) + dVar36 * dVar43 + dVar37 + dVar4);
      dVar39 = dVar37 * (double)param_1[2] - (double)param_1[1] * dVar42;
      dVar37 = dVar38 * (double)param_1[1] - (double)param_1[3] * dVar37;
      dVar38 = dVar42 * (double)param_1[3] - dVar38 * (double)param_1[2];
      lVar32 = (longlong)(int)plVar11[1];
      lVar10 = *(longlong *)(*plVar11 + 0x350);
      *(double *)(lVar10 + lVar32 * 0x18) =
           dVar39 * local_138 + dVar38 * local_148 + dVar37 * local_140 +
           *(double *)(lVar10 + lVar32 * 0x18);
      *(double *)(lVar10 + 8 + lVar32 * 0x18) =
           local_118 * dVar39 + local_128 * dVar38 + local_120 * dVar37 +
           *(double *)(lVar10 + 8 + lVar32 * 0x18);
      *(double *)(lVar10 + 0x10 + lVar32 * 0x18) =
           local_f8 * dVar39 + local_108 * dVar38 + local_100 * dVar37 +
           *(double *)(lVar10 + 0x10 + lVar32 * 0x18);
    }
  }
LAB_142a26b69:
  if ((local_c0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a26bea FUN_142a26bea body=29 status=ok
// SIG undefined FUN_142a26bea(void)

void FUN_142a26bea(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a26c08 FUN_142a26c08 body=29 status=ok
// SIG undefined FUN_142a26c08(void)

undefined8 FUN_142a26c08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a26c26 FUN_142a26c26 body=152 status=ok
// SIG undefined FUN_142a26c26(void)

void FUN_142a26c26(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 3);
  if ((longlong)iVar1 != 0) {
    uVar2 = *param_1;
    lVar3 = *(longlong *)(param_1[1] + 0x9c8);
    lVar4 = param_1[2];
    lVar6 = 0;
    do {
      local_3c = *(undefined4 *)(lVar4 + lVar6);
      lVar5 = FUN_142a15830(uVar2,&local_3c);
      if (lVar5 != 0) {
        FUN_141491ae8(lVar3 + 0x448,lVar5);
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a26cca FUN_142a26cca body=29 status=ok
// SIG undefined FUN_142a26cca(void)

void FUN_142a26cca(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a26ce8 FUN_142a26ce8 body=57 status=ok
// SIG undefined FUN_142a26ce8(void)

undefined8 * FUN_142a26ce8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6d500;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a26d50 FUN_142a26d50 body=29 status=ok
// SIG undefined FUN_142a26d50(void)

undefined8 FUN_142a26d50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a26d6e FUN_142a26d6e body=155 status=ok
// SIG undefined FUN_142a26d6e(void)

void FUN_142a26d6e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0x410) + (longlong)(int)param_1[1] * 4);
  lVar6 = (longlong)iVar1;
  if ((-1 < lVar6) && (iVar1 < *(int *)(lVar2 + 0x348))) {
    lVar3 = *(longlong *)(param_1[2] + 0x9c8);
    FUN_142a26e3d(lVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x340) + lVar6 * 8),
                  *(undefined1 *)((longlong)param_1 + 0xc));
    plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x340) + lVar6 * 8);
    while (plVar5 = plVar4, plVar5 != (longlong *)0x0) {
      plVar4 = *(longlong **)(*(longlong *)(*plVar5 + 0x5a8) + (longlong)(int)plVar5[1] * 0x10);
      if ((plVar4 == (longlong *)0x0) || (*(byte *)((longlong)plVar4 + 0xc) < 3)) {
        FUN_140a357a8(plVar5,lVar3 + 0x510,lVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142a26e20 FUN_142a26e20 body=29 status=ok
// SIG undefined FUN_142a26e20(void)

undefined8 FUN_142a26e20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a26e3d FUN_142a26e3d body=213 status=ok
// SIG undefined FUN_142a26e3d(void)

void FUN_142a26e3d(longlong param_1,longlong *param_2,char param_3)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((param_2 != (longlong *)0x0) &&
       (*(byte *)(*(longlong *)(*param_2 + 0x680) + (longlong)(int)param_2[1]) =
             *(byte *)(*(longlong *)(*param_2 + 0x680) + (longlong)(int)param_2[1]) & 0xfd |
             param_3 * '\x02', param_1 != 0 && param_3 == '\0')) &&
      (cVar2 = *(char *)(*(longlong *)(*param_2 + 0x2c0) + 0xb + (longlong)(int)param_2[1] * 0x10),
      cVar2 != '\x01')) && (cVar2 != '\x04')) {
    FUN_1400d2fee(param_1,param_2,4);
    if (*(char *)((longlong)param_2 + 0xc) != '\0') {
      if (*(char *)((longlong)param_2 + 0xc) == '\x01') {
        lVar4 = *param_2;
        lVar3 = (longlong)(int)param_2[1];
      }
      else {
        lVar4 = *param_2;
        lVar3 = (longlong)(int)param_2[1];
        if (*(char *)(*(longlong *)(lVar4 + 0x2c0) + 0xb + lVar3 * 0x10) != '\x02') {
          return;
        }
      }
      lVar4 = *(longlong *)(lVar4 + 0x2a8);
      lVar3 = lVar3 * 0x40;
      *(undefined8 *)(lVar4 + lVar3) = 0;
      ((undefined8 *)(lVar4 + lVar3))[1] = 0;
      *(undefined8 *)(lVar4 + 0x10 + lVar3) = 0;
      puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar3);
      *puVar1 = 0;
      puVar1[1] = 0x3f80000000000000;
      *(undefined4 *)(lVar4 + 0x30 + lVar3) = 0;
    }
  }
  return;
}



// FUNCTION 142a26f12 FUN_142a26f12 body=1488 status=ok
// SIG undefined FUN_142a26f12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a26f12(longlong *param_1)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong *plVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined1 auStack_1c8 [36];
  undefined1 local_1a4 [4];
  longlong *local_1a0;
  double local_198 [3];
  undefined1 local_180 [48];
  longlong local_150;
  longlong local_148 [2];
  uint local_138 [4];
  uint *local_128;
  int local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  lVar20 = *param_1;
  local_128 = (uint *)0x0;
  local_120 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_11c = 0xffffffff00000080;
  local_114 = 0;
  local_108 = 0;
  local_100 = 0;
  FUN_1401c0b60(lVar20 + 0x5d0,local_180);
  auVar7 = _DAT_149934d80;
  iVar17 = *(int *)(lVar20 + 0x348);
  if (0 < iVar17) {
    uVar16 = -(uint)(local_150 == 0) | *(uint *)((longlong)param_1 + 0xa4);
    lVar3 = *(longlong *)(param_1[0x15] + 0x9c8);
    lVar15 = 0;
    do {
      plVar21 = *(longlong **)(*(longlong *)(lVar20 + 0x340) + lVar15 * 8);
      if (plVar21 == (longlong *)0x0) goto LAB_142a272a3;
      lVar11 = (longlong)(int)plVar21[1];
      lVar19 = *(longlong *)(*plVar21 + 0x28);
      pdVar1 = (double *)(lVar19 + lVar11 * 0x18);
      dVar28 = *pdVar1 - (double)param_1[0xc];
      dVar29 = pdVar1[1] - (double)param_1[0xd];
      dVar24 = *(double *)(lVar19 + 0x10 + lVar11 * 0x18) - (double)param_1[0xe];
      dVar4 = -(double)param_1[8];
      dVar5 = -(double)param_1[9];
      dVar26 = (double)param_1[10] * -1.0;
      dVar27 = (double)param_1[0xb] * 1.0;
      dVar31 = dVar28 * dVar26 - dVar4 * dVar24;
      dVar30 = dVar29 * dVar4 - dVar28 * dVar5;
      dVar6 = dVar24 * dVar5 - dVar29 * dVar26;
      dVar6 = dVar6 + dVar6;
      dVar31 = dVar31 + dVar31;
      dVar30 = dVar30 + dVar30;
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x10);
      auVar25 = divpd(auVar7,auVar2);
      local_198[0] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar25._0_8_
                             ) * ((dVar30 * dVar5 - dVar31 * dVar26) + dVar27 * dVar6 + dVar28);
      local_198[1] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar25._8_8_
                             ) *
                     ((double)param_1[8] * dVar30 + dVar26 * dVar6 + dVar27 * dVar31 + dVar29);
      local_198[2] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS((double)param_1[0x12])) &
                             (ulonglong)(1.0 / (double)param_1[0x12])) *
                     (dVar27 * dVar30 + dVar24 + (dVar31 * dVar4 - dVar6 * dVar5));
      lVar19 = 0;
      do {
        dVar4 = local_198[lVar19];
        if ((dVar4 < (double)param_1[lVar19 + 1]) ||
           ((double)param_1[lVar19 + 4] <= dVar4 && dVar4 != (double)param_1[lVar19 + 4]))
        goto LAB_142a272a3;
        lVar19 = lVar19 + 1;
      } while (lVar19 != 3);
      uVar23 = 0;
      if ((int)uVar16 < 0) {
LAB_142a27242:
        if (plVar21 != (longlong *)0x0) {
          FUN_142a26e3d(lVar3,plVar21,CONCAT71((int7)(uVar23 >> 8),(char)param_1[0x14]));
          do {
            local_1a0 = plVar21;
            plVar21 = *(longlong **)
                       (*(longlong *)(*local_1a0 + 0x5a8) + (longlong)(int)local_1a0[1] * 0x10);
            if (plVar21 == (longlong *)0x0) break;
          } while (2 < *(byte *)((longlong)plVar21 + 0xc));
          FUN_140a3609c(local_148,local_1a4,&local_1a0,0);
          iVar17 = *(int *)(lVar20 + 0x348);
        }
      }
      else {
        uVar18 = *(uint *)(*(longlong *)(local_150 + 0x10) +
                          (longlong)*(int *)(*(longlong *)(lVar20 + 0x400) + lVar15 * 4) * 4);
        uVar23 = (ulonglong)uVar18;
        if ((int)uVar18 <= (int)uVar16) goto LAB_142a27242;
        plVar21 = *(longlong **)(*(longlong *)(*plVar21 + 0x5a8) + lVar11 * 0x10);
        if (plVar21 != (longlong *)0x0) {
          if (*(byte *)((longlong)plVar21 + 0xc) < 3) {
            plVar21 = (longlong *)0x0;
          }
          else {
            uVar23 = (ulonglong)(uVar18 - 1);
            if (uVar16 < uVar18 - 1) goto LAB_142a272a3;
          }
          goto LAB_142a27242;
        }
      }
LAB_142a272a3:
      iVar8 = local_120;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar17);
    if (local_120 != 0) {
      puVar10 = local_128;
      if (local_128 == (uint *)0x0) {
        puVar10 = local_138;
      }
      uVar16 = *puVar10;
      if (uVar16 == 0) {
        iVar17 = local_120 + 0x1e;
        if (-1 < local_120 + -1) {
          iVar17 = local_120 + -1;
        }
        uVar23 = 0;
        uVar12 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar12 = uVar23;
        }
        iVar17 = 0;
        do {
          if (uVar12 == uVar23) goto LAB_142a27429;
          iVar17 = iVar17 + 0x20;
          uVar16 = puVar10[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar23 = 0;
        iVar17 = 0;
      }
      uVar22 = (ulonglong)(-uVar16 & uVar16);
      uVar12 = uVar22 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar9 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar9 < local_120) {
        uVar16 = 0xffffffff;
        do {
          FUN_140a357a8(*(undefined8 *)(local_148[0] + (longlong)iVar9 * 0x10),lVar3 + 0x510,lVar3);
          uVar16 = ~(uint)uVar22 & uVar16;
          puVar10 = local_128;
          if (local_128 == (uint *)0x0) {
            puVar10 = local_138;
          }
          iVar9 = (int)uVar23;
          lVar20 = (longlong)iVar9;
          uVar18 = puVar10[lVar20] & uVar16;
          if (uVar18 == 0) {
            iVar13 = local_120 + 0x1e;
            if (-1 < local_120 + -1) {
              iVar13 = local_120 + -1;
            }
            iVar13 = iVar13 >> 5;
            iVar17 = iVar17 + 0x20;
            iVar14 = iVar13;
            if (iVar13 < iVar9) {
              iVar14 = iVar9;
            }
            if (iVar9 < iVar13) {
              lVar15 = 0;
              do {
                uVar18 = puVar10[lVar20 + lVar15 + 1];
                if (uVar18 != 0) {
                  uVar23 = (ulonglong)(iVar9 + (int)lVar15 + 1);
                  uVar16 = 0xffffffff;
                  goto LAB_142a273e2;
                }
                iVar17 = iVar17 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar14 - lVar20 != lVar15);
              uVar16 = 0xffffffff;
              iVar9 = iVar14;
            }
            uVar23 = (ulonglong)(iVar9 + 1);
            iVar9 = local_120;
          }
          else {
LAB_142a273e2:
            uVar22 = (ulonglong)(-uVar18 & uVar18);
            uVar12 = uVar22 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar12 != 0) {
              for (; uVar12 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar9 = (iVar17 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
            if (local_120 <= iVar9) {
              iVar9 = local_120;
            }
          }
        } while (iVar9 != iVar8);
      }
    }
  }
LAB_142a27429:
  local_100 = 0;
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  FUN_140d9ce6e(local_148);
  if ((local_f0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a274ee FUN_142a274ee body=29 status=ok
// SIG undefined FUN_142a274ee(void)

void FUN_142a274ee(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a2750c FUN_142a2750c body=29 status=ok
// SIG undefined FUN_142a2750c(void)

undefined8 FUN_142a2750c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a2752a FUN_142a2752a body=83 status=ok
// SIG undefined FUN_142a2752a(void)

void FUN_142a2752a(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = (longlong)*(int *)(*param_1 + 0x348);
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1[1] + 0x9c8);
    lVar2 = *(longlong *)(*param_1 + 0x340);
    lVar4 = 0;
    do {
      FUN_142a26e3d(uVar1,*(undefined8 *)(lVar2 + lVar4),0);
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  return;
}



// FUNCTION 142a27594 FUN_142a27594 body=29 status=ok
// SIG undefined FUN_142a27594(void)

undefined8 FUN_142a27594(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a275b2 FUN_142a275b2 body=798 status=ok
// SIG undefined FUN_142a275b2(void)

void FUN_142a275b2(undefined8 *param_1)

{
  float fVar1;
  int iVar2;
  ulonglong uVar3;
  void *pvVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_f8 [32];
  double local_d8;
  undefined1 local_d0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  void *local_a0;
  uint local_98;
  uint local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_bc = *(undefined4 *)(param_1 + 7);
  plVar6 = (longlong *)FUN_142a15830(*param_1);
  if (plVar6 != (longlong *)0x0) {
    fVar1 = *(float *)((longlong)param_1 + 0xc);
    lVar7 = (longlong)(int)plVar6[1];
    lVar9 = *(longlong *)(param_1[3] + 0x9c8) + 0x448;
    if (*(int *)(*(longlong *)(*plVar6 + 0x5a8) + 8 + lVar7 * 0x10) < 1) {
      lVar9 = *(longlong *)(*plVar6 + 0x638);
      fVar15 = *(float *)(lVar9 + lVar7 * 4);
      if (fVar15 <= fVar1) {
        fVar15 = fVar1;
      }
      *(float *)(lVar9 + lVar7 * 4) = fVar15;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_f8);
    }
    fVar15 = *(float *)((longlong)param_1 + 0x14);
    iVar8 = *(int *)(param_1 + 2);
    local_d8 = (double)*(float *)(param_1 + 1);
    local_a8 = param_1[6];
    local_b8 = param_1[4];
    uStack_b0 = param_1[5];
    local_d0 = 1;
    FUN_146dfbb8e(lVar9,&local_a0,plVar6);
    if (local_98 != 0) {
      local_b8 = 0;
      uStack_b0 = 0;
      if (-1 < iVar8) {
        fVar17 = 1.0;
        uVar10 = local_98;
        while( true ) {
          pvVar4 = local_a0;
          if (uVar10 != 0) {
            lVar7 = 0;
            do {
              plVar6 = *(longlong **)((longlong)pvVar4 + lVar7);
              if ((plVar6 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar6 + 0xc))) {
                fVar16 = *(float *)(*(longlong *)(*plVar6 + 0x638) + (longlong)(int)plVar6[1] * 4);
                if (fVar16 <= fVar1 * fVar17) {
                  fVar16 = fVar1 * fVar17;
                }
                *(float *)(*(longlong *)(*plVar6 + 0x638) + (longlong)(int)plVar6[1] * 4) = fVar16;
                FUN_1402bf4a4(lVar9);
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)(int)uVar10 * 8 != lVar7);
          }
          uVar3 = uStack_b0;
          bVar14 = iVar8 == 0;
          iVar8 = iVar8 + -1;
          if (bVar14) break;
          lVar7 = (longlong)(int)local_98;
          uVar10 = 0;
          if (lVar7 != 0) {
            iVar2 = (int)uStack_b0;
            lVar13 = (longlong)(int)uStack_b0;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,local_98 + (int)uStack_b0);
            if ((uint)(uStack_b0._4_4_ - iVar2) < local_98) {
              FUN_1406b7a4a(&local_b8,uVar3 & 0xffffffff);
            }
            memmove((void *)(lVar13 * 8 + local_b8),local_a0,lVar7 << 3);
            local_98 = 0;
            iVar5 = (int)uStack_b0;
            if (iVar2 < (int)uStack_b0) {
              do {
                plVar6 = *(longlong **)(local_b8 + lVar13 * 8);
                if ((plVar6 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar6 + 0xc))) {
                  lVar7 = (longlong)(int)plVar6[1] * 0x10;
                  lVar11 = (longlong)*(int *)(*(longlong *)(*plVar6 + 0x668) + 8 + lVar7);
                  if (lVar11 != 0) {
                    plVar6 = *(longlong **)(*(longlong *)(*plVar6 + 0x668) + lVar7);
                    plVar12 = plVar6 + lVar11 * 2;
                    do {
                      uVar10 = local_98;
                      if (*plVar6 != 0) {
                        lVar7 = (longlong)(int)local_98;
                        if (lVar7 != 0) {
                          lVar11 = 0;
                          do {
                            if (*(longlong *)((longlong)local_a0 + lVar11) == *plVar6)
                            goto LAB_142a2787b;
                            lVar11 = lVar11 + 8;
                          } while (lVar7 * 8 - lVar11 != 0);
                        }
                        local_98 = local_98 + 1;
                        if (local_94 < local_98) {
                          FUN_1406b7a4a(&local_a0,uVar10);
                        }
                        *(longlong *)((longlong)local_a0 + lVar7 * 8) = *plVar6;
                      }
LAB_142a2787b:
                      plVar6 = plVar6 + 2;
                    } while (plVar6 != plVar12);
                    iVar5 = (int)uStack_b0;
                  }
                }
                lVar13 = lVar13 + 1;
                uVar10 = local_98;
              } while (lVar13 < iVar5);
            }
          }
          fVar17 = fVar17 * fVar15;
        }
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a27918 FUN_142a27918 body=29 status=ok
// SIG undefined FUN_142a27918(void)

void FUN_142a27918(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a27936 FUN_142a27936 body=29 status=ok
// SIG undefined FUN_142a27936(void)

undefined8 FUN_142a27936(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a27954 FUN_142a27954 body=826 status=ok
// SIG undefined FUN_142a27954(void)

void FUN_142a27954(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  void *pvVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_f8 [32];
  double local_d8;
  undefined1 local_d0;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  void *local_a0;
  uint local_98;
  uint local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_bc = *(undefined4 *)(param_1 + 7);
  plVar6 = (longlong *)FUN_142a15830(*param_1);
  if (plVar6 != (longlong *)0x0) {
    fVar14 = *(float *)((longlong)param_1 + 0xc);
    lVar1 = param_1[3];
    lVar7 = (longlong)(int)plVar6[1];
    if (*(int *)(*(longlong *)(*plVar6 + 0x5a8) + 8 + lVar7 * 0x10) < 1) {
      lVar1 = *(longlong *)(*plVar6 + 0x650);
      fVar14 = *(float *)(lVar1 + lVar7 * 4) - fVar14;
      fVar16 = 0.0;
      if (0.0 <= fVar14) {
        fVar16 = fVar14;
      }
      *(float *)(lVar1 + lVar7 * 4) = fVar16;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_90 ^ (ulonglong)auStack_f8);
    }
    fVar16 = *(float *)((longlong)param_1 + 0x14);
    iVar9 = *(int *)(param_1 + 2);
    local_d8 = (double)*(float *)(param_1 + 1);
    local_a8 = param_1[6];
    local_b8 = param_1[4];
    uStack_b0 = param_1[5];
    local_d0 = 1;
    FUN_146dfbb8e(*(longlong *)(lVar1 + 0x9c8) + 0x448,&local_a0,plVar6);
    if (local_98 != 0) {
      local_b8 = 0;
      uStack_b0 = 0;
      if (-1 < iVar9) {
        fVar18 = 1.0;
        uVar10 = local_98;
        while( true ) {
          pvVar4 = local_a0;
          if (uVar10 != 0) {
            lVar7 = 0;
            do {
              plVar6 = *(longlong **)((longlong)pvVar4 + lVar7);
              if ((plVar6 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar6 + 0xc))) {
                fVar15 = *(float *)(*(longlong *)(*plVar6 + 0x650) + (longlong)(int)plVar6[1] * 4) +
                         -fVar14 * fVar18;
                fVar17 = 0.0;
                if (0.0 <= fVar15) {
                  fVar17 = fVar15;
                }
                lVar8 = *(longlong *)(lVar1 + 0x9c8);
                *(float *)(*(longlong *)(*plVar6 + 0x650) + (longlong)(int)plVar6[1] * 4) = fVar17;
                FUN_1402bf4a4(lVar8 + 0x448);
              }
              lVar7 = lVar7 + 8;
            } while ((longlong)(int)uVar10 * 8 != lVar7);
          }
          uVar3 = uStack_b0;
          bVar13 = iVar9 == 0;
          iVar9 = iVar9 + -1;
          if (bVar13) break;
          lVar7 = (longlong)(int)local_98;
          uVar10 = 0;
          if (lVar7 != 0) {
            iVar2 = (int)uStack_b0;
            lVar8 = (longlong)(int)uStack_b0;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,local_98 + (int)uStack_b0);
            if ((uint)(uStack_b0._4_4_ - iVar2) < local_98) {
              FUN_1406b7a4a(&local_b8,uVar3 & 0xffffffff);
            }
            memmove((void *)(lVar8 * 8 + local_b8),local_a0,lVar7 << 3);
            local_98 = 0;
            iVar5 = (int)uStack_b0;
            if (iVar2 < (int)uStack_b0) {
              do {
                plVar6 = *(longlong **)(local_b8 + lVar8 * 8);
                if ((plVar6 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar6 + 0xc))) {
                  lVar7 = (longlong)(int)plVar6[1] * 0x10;
                  lVar11 = (longlong)*(int *)(*(longlong *)(*plVar6 + 0x668) + 8 + lVar7);
                  if (lVar11 != 0) {
                    plVar6 = *(longlong **)(*(longlong *)(*plVar6 + 0x668) + lVar7);
                    plVar12 = plVar6 + lVar11 * 2;
                    do {
                      uVar10 = local_98;
                      if (*plVar6 != 0) {
                        lVar7 = (longlong)(int)local_98;
                        if (lVar7 != 0) {
                          lVar11 = 0;
                          do {
                            if (*(longlong *)((longlong)local_a0 + lVar11) == *plVar6)
                            goto LAB_142a27c39;
                            lVar11 = lVar11 + 8;
                          } while (lVar7 * 8 - lVar11 != 0);
                        }
                        local_98 = local_98 + 1;
                        if (local_94 < local_98) {
                          FUN_1406b7a4a(&local_a0,uVar10);
                        }
                        *(longlong *)((longlong)local_a0 + lVar7 * 8) = *plVar6;
                      }
LAB_142a27c39:
                      plVar6 = plVar6 + 2;
                    } while (plVar6 != plVar12);
                    iVar5 = (int)uStack_b0;
                  }
                }
                lVar8 = lVar8 + 1;
                uVar10 = local_98;
              } while (lVar8 < iVar5);
            }
          }
          fVar18 = fVar18 * fVar16;
        }
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a27cd6 FUN_142a27cd6 body=29 status=ok
// SIG undefined FUN_142a27cd6(void)

void FUN_142a27cd6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a27cf4 FUN_142a27cf4 body=29 status=ok
// SIG undefined FUN_142a27cf4(void)

undefined8 FUN_142a27cf4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a27d12 FUN_142a27d12 body=696 status=ok
// SIG undefined FUN_142a27d12(void)

void FUN_142a27d12(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_74 = *(undefined4 *)(param_1 + 2);
  plVar8 = (longlong *)FUN_142a15830(*param_1);
  if (plVar8 != (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1[1] + 0x9c8);
    lVar10 = *plVar8;
    lVar13 = (longlong)(int)plVar8[1];
    lVar12 = lVar13 * 0x10;
    lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x5a8) + lVar12);
    lVar11 = 0;
    if ((lVar5 != 0) && (2 < *(byte *)(lVar5 + 0xc))) {
      lVar11 = lVar5;
    }
    dVar1 = (double)param_1[3];
    dVar2 = (double)param_1[4];
    dVar3 = (double)param_1[5];
    iVar9 = *(int *)(*(longlong *)(lVar10 + 0x5a8) + 8 + lVar12);
    cVar6 = FUN_140a356c4(lVar4 + 0x560,lVar11);
    if ((cVar6 != '\0') || (*(char *)(*(longlong *)(lVar10 + 0x2c0) + 0xd + lVar12) == '\0')) {
      if (iVar9 < 1) {
        if (*(float *)(*(longlong *)(lVar10 + 0x650) + lVar13 * 4) <=
            *(float *)(*(longlong *)(lVar10 + 0x638) + lVar13 * 4)) {
          lVar4 = *(longlong *)(lVar10 + 0x278);
          *(float *)(lVar4 + lVar13 * 0xc) =
               (float)(dVar1 + (double)*(float *)(lVar4 + lVar13 * 0xc));
          *(float *)(lVar4 + 4 + lVar13 * 0xc) =
               (float)(dVar2 + (double)*(float *)(lVar4 + 4 + lVar13 * 0xc));
          *(float *)(lVar4 + 8 + lVar13 * 0xc) =
               (float)(dVar3 + (double)*(float *)(lVar4 + 8 + lVar13 * 0xc));
        }
      }
      else if (*(int *)(lVar4 + 0x518) != *(int *)(lVar4 + 0x544)) {
        uVar7 = ((uint)((ulonglong)plVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar8 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        lVar10 = lVar4 + 0x548;
        if (*(longlong *)(lVar4 + 0x550) != 0) {
          lVar10 = *(longlong *)(lVar4 + 0x550);
        }
        iVar9 = *(int *)(lVar10 + (ulonglong)
                                  (*(int *)(lVar4 + 0x558) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar9 != -1) {
          do {
            lVar10 = *(longlong *)(lVar4 + 0x510) + (longlong)iVar9 * 0x20;
            if (*(longlong **)(*(longlong *)(lVar4 + 0x510) + (longlong)iVar9 * 0x20) == plVar8) {
              if (((lVar10 + 8U & 0xfffffffffffffff7) != 0) &&
                 (iVar9 = *(int *)(lVar10 + 0x10), (longlong)iVar9 != 0)) {
                lVar4 = *(longlong *)(lVar10 + 8);
                lVar10 = 0;
                do {
                  plVar8 = *(longlong **)(lVar4 + lVar10);
                  if ((plVar8 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar8 + 0xc))) {
                    lVar5 = *plVar8;
                    lVar11 = (longlong)(int)plVar8[1];
                    if (*(float *)(*(longlong *)(lVar5 + 0x650) + lVar11 * 4) <=
                        *(float *)(*(longlong *)(lVar5 + 0x638) + lVar11 * 4)) {
                      lVar5 = *(longlong *)(lVar5 + 0x278);
                      *(float *)(lVar5 + lVar11 * 0xc) =
                           (float)((double)*(float *)(lVar5 + lVar11 * 0xc) + dVar1);
                      *(float *)(lVar5 + 4 + lVar11 * 0xc) =
                           (float)((double)*(float *)(lVar5 + 4 + lVar11 * 0xc) + dVar2);
                      *(float *)(lVar5 + 8 + lVar11 * 0xc) =
                           (float)((double)*(float *)(lVar5 + 8 + lVar11 * 0xc) + dVar3);
                    }
                  }
                  lVar10 = lVar10 + 8;
                } while ((longlong)iVar9 * 8 != lVar10);
              }
              break;
            }
            iVar9 = *(int *)(lVar10 + 0x18);
          } while (iVar9 != -1);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a27fd6 FUN_142a27fd6 body=29 status=ok
// SIG undefined FUN_142a27fd6(void)

void FUN_142a27fd6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a27ff4 FUN_142a27ff4 body=29 status=ok
// SIG undefined FUN_142a27ff4(void)

undefined8 FUN_142a27ff4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a28012 FUN_142a28012 body=696 status=ok
// SIG undefined FUN_142a28012(void)

void FUN_142a28012(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_74 = *(undefined4 *)(param_1 + 2);
  plVar8 = (longlong *)FUN_142a15830(*param_1);
  if (plVar8 != (longlong *)0x0) {
    lVar4 = *(longlong *)(param_1[1] + 0x9c8);
    lVar10 = *plVar8;
    lVar13 = (longlong)(int)plVar8[1];
    lVar12 = lVar13 * 0x10;
    lVar5 = *(longlong *)(*(longlong *)(lVar10 + 0x5a8) + lVar12);
    lVar11 = 0;
    if ((lVar5 != 0) && (2 < *(byte *)(lVar5 + 0xc))) {
      lVar11 = lVar5;
    }
    dVar1 = (double)param_1[3];
    dVar2 = (double)param_1[4];
    dVar3 = (double)param_1[5];
    iVar9 = *(int *)(*(longlong *)(lVar10 + 0x5a8) + 8 + lVar12);
    cVar6 = FUN_140a356c4(lVar4 + 0x560,lVar11);
    if ((cVar6 != '\0') || (*(char *)(*(longlong *)(lVar10 + 0x2c0) + 0xd + lVar12) == '\0')) {
      if (iVar9 < 1) {
        if (*(float *)(*(longlong *)(lVar10 + 0x650) + lVar13 * 4) <=
            *(float *)(*(longlong *)(lVar10 + 0x638) + lVar13 * 4)) {
          lVar4 = *(longlong *)(lVar10 + 0x290);
          *(float *)(lVar4 + lVar13 * 0xc) =
               (float)(dVar1 + (double)*(float *)(lVar4 + lVar13 * 0xc));
          *(float *)(lVar4 + 4 + lVar13 * 0xc) =
               (float)(dVar2 + (double)*(float *)(lVar4 + 4 + lVar13 * 0xc));
          *(float *)(lVar4 + 8 + lVar13 * 0xc) =
               (float)(dVar3 + (double)*(float *)(lVar4 + 8 + lVar13 * 0xc));
        }
      }
      else if (*(int *)(lVar4 + 0x518) != *(int *)(lVar4 + 0x544)) {
        uVar7 = ((uint)((ulonglong)plVar8 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar8 >> 4)) *
                -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        lVar10 = lVar4 + 0x548;
        if (*(longlong *)(lVar4 + 0x550) != 0) {
          lVar10 = *(longlong *)(lVar4 + 0x550);
        }
        iVar9 = *(int *)(lVar10 + (ulonglong)
                                  (*(int *)(lVar4 + 0x558) - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
        if (iVar9 != -1) {
          do {
            lVar10 = *(longlong *)(lVar4 + 0x510) + (longlong)iVar9 * 0x20;
            if (*(longlong **)(*(longlong *)(lVar4 + 0x510) + (longlong)iVar9 * 0x20) == plVar8) {
              if (((lVar10 + 8U & 0xfffffffffffffff7) != 0) &&
                 (iVar9 = *(int *)(lVar10 + 0x10), (longlong)iVar9 != 0)) {
                lVar4 = *(longlong *)(lVar10 + 8);
                lVar10 = 0;
                do {
                  plVar8 = *(longlong **)(lVar4 + lVar10);
                  if ((plVar8 != (longlong *)0x0) && (2 < *(byte *)((longlong)plVar8 + 0xc))) {
                    lVar5 = *plVar8;
                    lVar11 = (longlong)(int)plVar8[1];
                    if (*(float *)(*(longlong *)(lVar5 + 0x650) + lVar11 * 4) <=
                        *(float *)(*(longlong *)(lVar5 + 0x638) + lVar11 * 4)) {
                      lVar5 = *(longlong *)(lVar5 + 0x290);
                      *(float *)(lVar5 + lVar11 * 0xc) =
                           (float)((double)*(float *)(lVar5 + lVar11 * 0xc) + dVar1);
                      *(float *)(lVar5 + 4 + lVar11 * 0xc) =
                           (float)((double)*(float *)(lVar5 + 4 + lVar11 * 0xc) + dVar2);
                      *(float *)(lVar5 + 8 + lVar11 * 0xc) =
                           (float)((double)*(float *)(lVar5 + 8 + lVar11 * 0xc) + dVar3);
                    }
                  }
                  lVar10 = lVar10 + 8;
                } while ((longlong)iVar9 * 8 != lVar10);
              }
              break;
            }
            iVar9 = *(int *)(lVar10 + 0x18);
          } while (iVar9 != -1);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a282d6 FUN_142a282d6 body=29 status=ok
// SIG undefined FUN_142a282d6(void)

void FUN_142a282d6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a282f4 FUN_142a282f4 body=29 status=ok
// SIG undefined FUN_142a282f4(void)

undefined8 FUN_142a282f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a28312 FUN_142a28312 body=153 status=ok
// SIG undefined FUN_142a28312(void)

void FUN_142a28312(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(undefined4 *)(param_1 + 1);
  plVar4 = (longlong *)FUN_142a15830(*param_1);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (longlong)(int)plVar4[1];
    lVar3 = *(longlong *)(*plVar4 + 0x278);
    dVar1 = (double)param_1[4];
    dVar2 = (double)param_1[3];
    *(float *)(lVar3 + lVar5 * 0xc) =
         (float)((double)*(float *)(lVar3 + lVar5 * 0xc) + (double)param_1[2]);
    *(float *)(lVar3 + 4 + lVar5 * 0xc) =
         (float)((double)*(float *)(lVar3 + 4 + lVar5 * 0xc) + dVar2);
    *(float *)(lVar3 + 8 + lVar5 * 0xc) =
         (float)((double)*(float *)(lVar3 + 8 + lVar5 * 0xc) + dVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a283b6 FUN_142a283b6 body=29 status=ok
// SIG undefined FUN_142a283b6(void)

void FUN_142a283b6(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a283d4 FUN_142a283d4 body=29 status=ok
// SIG undefined FUN_142a283d4(void)

undefined8 FUN_142a283d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a283f2 FUN_142a283f2 body=153 status=ok
// SIG undefined FUN_142a283f2(void)

void FUN_142a283f2(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = *(undefined4 *)(param_1 + 1);
  plVar4 = (longlong *)FUN_142a15830(*param_1);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (longlong)(int)plVar4[1];
    lVar3 = *(longlong *)(*plVar4 + 0x290);
    dVar1 = (double)param_1[4];
    dVar2 = (double)param_1[3];
    *(float *)(lVar3 + lVar5 * 0xc) =
         (float)((double)*(float *)(lVar3 + lVar5 * 0xc) + (double)param_1[2]);
    *(float *)(lVar3 + 4 + lVar5 * 0xc) =
         (float)((double)*(float *)(lVar3 + 4 + lVar5 * 0xc) + dVar2);
    *(float *)(lVar3 + 8 + lVar5 * 0xc) =
         (float)((double)*(float *)(lVar3 + 8 + lVar5 * 0xc) + dVar1);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a28496 FUN_142a28496 body=29 status=ok
// SIG undefined FUN_142a28496(void)

void FUN_142a28496(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a284b4 FUN_142a284b4 body=29 status=ok
// SIG undefined FUN_142a284b4(void)

undefined8 FUN_142a284b4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a28504 FUN_142a28504 body=29 status=ok
// SIG undefined FUN_142a28504(void)

undefined8 FUN_142a28504(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a28554 FUN_142a28554 body=29 status=ok
// SIG undefined FUN_142a28554(void)

undefined8 FUN_142a28554(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a285bc FUN_142a285bc body=29 status=ok
// SIG undefined FUN_142a285bc(void)

undefined8 FUN_142a285bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a2862e FUN_142a2862e body=29 status=ok
// SIG undefined FUN_142a2862e(void)

undefined8 FUN_142a2862e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a28696 FUN_142a28696 body=29 status=ok
// SIG undefined FUN_142a28696(void)

undefined8 FUN_142a28696(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a286d2 FUN_142a286d2 body=29 status=ok
// SIG undefined FUN_142a286d2(void)

void FUN_142a286d2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 142a286f0 FUN_142a286f0 body=29 status=ok
// SIG undefined FUN_142a286f0(void)

undefined8 FUN_142a286f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a2870e FUN_142a2870e body=117 status=ok
// SIG undefined FUN_142a2870e(void)

void FUN_142a2870e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  
  lVar3 = *param_1;
  plVar1 = (longlong *)(lVar3 + 0x170);
  if (plVar1 != param_1 + 1) {
    iVar2 = (int)param_1[2];
    _Src = (void *)param_1[1];
    *(int *)(lVar3 + 0x178) = iVar2;
    if (iVar2 == 0 && *(int *)(lVar3 + 0x17c) == 0) {
      *(undefined4 *)(lVar3 + 0x17c) = 0;
    }
    else {
      FUN_1447c510a(plVar1,iVar2);
      if (iVar2 != 0) {
        memcpy((void *)*plVar1,_Src,(longlong)iVar2 << 2);
      }
    }
  }
  FUN_141730a34(lVar3);
  return;
}



// FUNCTION 142a2879a FUN_142a2879a body=57 status=ok
// SIG undefined FUN_142a2879a(void)

undefined8 * FUN_142a2879a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149f6d720;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a28810 FUN_142a28810 body=29 status=ok
// SIG undefined FUN_142a28810(void)

undefined8 FUN_142a28810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a28862 FUN_142a28862 body=29 status=ok
// SIG undefined FUN_142a28862(void)

undefined8 FUN_142a28862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a288b8 FUN_142a288b8 body=29 status=ok
// SIG undefined FUN_142a288b8(void)

undefined8 FUN_142a288b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a288fc FUN_142a288fc body=29 status=ok
// SIG undefined FUN_142a288fc(void)

undefined8 FUN_142a288fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


