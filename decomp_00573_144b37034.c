// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144b37034 FUN_144b37034 body=3723 status=ok
// SIG undefined FUN_144b37034(void)

void FUN_144b37034(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  longlong *plVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  longlong lVar11;
  byte bVar12;
  uint uVar13;
  int *piVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float fVar17;
  int *piVar18;
  int *piVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_378 [36];
  float local_354;
  uint local_350;
  uint local_34c;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  uVar22 = *(uint *)(param_2 + 1);
  if (*(char *)(param_1 + 8) == '\x01') {
    if (1 < (int)uVar22) {
      lVar11 = *param_2;
      memset(local_338,0,0x2f0);
      local_340 = lVar11 + (ulonglong)uVar22 * 4 + -4;
      local_348 = lVar11;
      fVar27 = logf((float)(int)uVar22);
      local_338[0] = (int)(longlong)(fVar27 + fVar27);
      plVar4 = &local_348;
      do {
        piVar6 = (int *)*plVar4;
        piVar9 = (int *)plVar4[1];
        iVar20 = (int)plVar4[2];
        uVar22 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar6) >> 2) + 1;
        piVar18 = piVar9;
        piVar14 = piVar6;
        if (iVar20 != 0) {
LAB_144b370de:
          if (8 < (int)uVar22) {
            iVar21 = piVar6[uVar22 >> 1];
            piVar6[uVar22 >> 1] = *piVar6;
            *piVar6 = iVar21;
            piVar10 = piVar18 + 1;
            piVar5 = piVar6;
            do {
              piVar3 = piVar5 + 1;
              piVar19 = piVar5 + 1;
              do {
                piVar8 = piVar19;
                piVar5 = piVar3;
                if (piVar18 < piVar5) break;
                lVar11 = *(longlong *)(param_1 + 0x10);
                if (*(char *)(param_1 + 9) == '\0') {
                  uVar1 = *(ushort *)(lVar11 + (longlong)*piVar6 * 2);
                  local_354 = (float)(uint)uVar1;
                  uVar22 = (uint)uVar1 << 0xd;
                  if ((uVar22 & 0xf800000) == 0xf800000) {
                    fVar27 = (float)(uVar22 | 0x70000000);
                  }
                  else if ((uVar22 & 0xf800000) == 0) {
                    fVar27 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar27 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                  }
                  uVar2 = *(ushort *)(lVar11 + (longlong)*piVar5 * 2);
                  local_350 = (uint)uVar2;
                  uVar22 = (uint)uVar2 << 0xd;
                  if ((uVar22 & 0xf800000) == 0xf800000) {
                    fVar17 = (float)(uVar22 | 0x70000000);
                  }
                  else if ((uVar22 & 0xf800000) == 0) {
                    fVar17 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar17 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                  }
                  fVar27 = (float)((uint)fVar27 | (int)(short)uVar1 & 0x80000000U);
                  fVar17 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar17);
                }
                else {
                  fVar27 = *(float *)(lVar11 + (longlong)*piVar6 * 4);
                  fVar17 = *(float *)(lVar11 + (longlong)*piVar5 * 4);
                }
                piVar3 = piVar5 + 1;
                piVar19 = piVar8 + 1;
              } while (fVar17 <= fVar27);
              piVar3 = piVar10 + -2;
              do {
                piVar19 = piVar10;
                piVar25 = piVar3;
                piVar10 = piVar19 + -1;
                if (piVar10 <= piVar6) break;
                lVar11 = *(longlong *)(param_1 + 0x10);
                if (*(char *)(param_1 + 9) == '\0') {
                  uVar1 = *(ushort *)(lVar11 + (longlong)*piVar10 * 2);
                  local_350 = (uint)uVar1;
                  uVar22 = local_350 << 0xd;
                  if ((uVar22 & 0xf800000) == 0xf800000) {
                    local_354 = (float)(uVar22 | 0x70000000);
                  }
                  else if ((uVar22 & 0xf800000) == 0) {
                    local_354 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    local_354 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                  }
                  uVar2 = *(ushort *)(lVar11 + (longlong)*piVar6 * 2);
                  local_34c = (uint)uVar2;
                  uVar22 = (uint)uVar2 << 0xd;
                  if ((uVar22 & 0xf800000) == 0xf800000) {
                    fVar27 = (float)(uVar22 | 0x70000000);
                  }
                  else if ((uVar22 & 0xf800000) == 0) {
                    fVar27 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar27 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                  }
                  fVar17 = (float)((uint)local_354 | (int)(short)uVar1 & 0x80000000U);
                  fVar27 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar27);
                }
                else {
                  fVar17 = *(float *)(lVar11 + (longlong)*piVar10 * 4);
                  fVar27 = *(float *)(lVar11 + (longlong)*piVar6 * 4);
                }
                piVar3 = piVar25 + -1;
              } while (fVar27 <= fVar17);
              if (piVar10 < piVar5) goto LAB_144b3719b;
              iVar21 = *piVar5;
              *piVar5 = *piVar10;
              *piVar10 = iVar21;
            } while( true );
          }
          if (piVar6 < piVar18) {
            do {
              piVar9 = piVar6;
              if (piVar6 + 1 <= piVar18) {
                lVar11 = *(longlong *)(param_1 + 0x10);
                piVar14 = piVar6 + 1;
                do {
                  if (*(char *)(param_1 + 9) == '\0') {
                    uVar1 = *(ushort *)(lVar11 + (longlong)*piVar9 * 2);
                    local_354 = (float)(uint)uVar1;
                    uVar22 = (uint)uVar1 << 0xd;
                    if ((uVar22 & 0xf800000) == 0xf800000) {
                      fVar27 = (float)(uVar22 | 0x70000000);
                    }
                    else if ((uVar22 & 0xf800000) == 0) {
                      fVar27 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar27 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                    }
                    uVar2 = *(ushort *)(lVar11 + (longlong)*piVar14 * 2);
                    uVar22 = (uint)uVar2 << 0xd;
                    if ((uVar22 & 0xf800000) == 0xf800000) {
                      fVar17 = (float)(uVar22 | 0x70000000);
                    }
                    else if ((uVar22 & 0xf800000) == 0) {
                      fVar17 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar17 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                    }
                    fVar27 = (float)((uint)fVar27 | (int)(short)uVar1 & 0x80000000U);
                    fVar17 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar17);
                  }
                  else {
                    fVar27 = *(float *)(lVar11 + (longlong)*piVar9 * 4);
                    fVar17 = *(float *)(lVar11 + (longlong)*piVar14 * 4);
                  }
                  piVar10 = piVar14;
                  if (fVar17 <= fVar27) {
                    piVar10 = piVar9;
                  }
                  piVar9 = piVar10;
                  piVar14 = piVar14 + 1;
                } while (piVar14 <= piVar18);
              }
              iVar20 = *piVar9;
              *piVar9 = *piVar18;
              *piVar18 = iVar20;
              piVar18 = piVar18 + -1;
            } while (piVar6 < piVar18);
          }
          goto LAB_144b37364;
        }
LAB_144b378ee:
        if (uVar22 != 0) {
          iVar20 = (int)((uVar22 - ((int)(uVar22 - 2) >> 0x1f)) + -2) >> 1;
          iVar21 = iVar20;
joined_r0x000144b37381:
          do {
            iVar23 = iVar20 * 2 + 1;
            if (iVar23 < (int)uVar22) {
              iVar7 = iVar20 * 2 + 2;
              if (iVar7 < (int)uVar22) {
                bVar12 = *(byte *)(param_1 + 9);
                lVar11 = *(longlong *)(param_1 + 0x10);
                if (bVar12 == 0) {
                  uVar1 = *(ushort *)(lVar11 + (longlong)piVar6[iVar7] * 2);
                  local_354 = (float)(uint)uVar1;
                  uVar13 = (uint)uVar1 << 0xd;
                  if ((uVar13 & 0xf800000) == 0xf800000) {
                    fVar27 = (float)(uVar13 | 0x70000000);
                  }
                  else if ((uVar13 & 0xf800000) == 0) {
                    fVar27 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar27 = (float)((uVar13 & 0xfffe000) + 0x38000000);
                  }
                  uVar2 = *(ushort *)(lVar11 + (longlong)piVar6[iVar23] * 2);
                  local_350 = (uint)uVar2;
                  uVar13 = (uint)uVar2 << 0xd;
                  if ((uVar13 & 0xf800000) == 0xf800000) {
                    fVar17 = (float)(uVar13 | 0x70000000);
                  }
                  else if ((uVar13 & 0xf800000) == 0) {
                    fVar17 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
                  }
                  else {
                    fVar17 = (float)((uVar13 & 0xfffe000) + 0x38000000);
                  }
                  fVar27 = (float)((uint)fVar27 | (int)(short)uVar1 & 0x80000000U);
                  fVar17 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar17);
                }
                else {
                  fVar27 = *(float *)(lVar11 + (longlong)piVar6[iVar7] * 4);
                  fVar17 = *(float *)(lVar11 + (longlong)piVar6[iVar23] * 4);
                }
                if (fVar17 <= fVar27) {
                  iVar23 = iVar7;
                }
              }
              else {
                bVar12 = *(byte *)(param_1 + 9);
                lVar11 = *(longlong *)(param_1 + 0x10);
              }
              iVar7 = piVar6[iVar20];
              if ((bVar12 & 1) == 0) {
                uVar1 = *(ushort *)(lVar11 + (longlong)iVar7 * 2);
                local_354 = (float)(uint)uVar1;
                uVar13 = (uint)uVar1 << 0xd;
                if ((uVar13 & 0xf800000) == 0xf800000) {
                  fVar27 = (float)(uVar13 | 0x70000000);
                }
                else if ((uVar13 & 0xf800000) == 0) {
                  fVar27 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
                }
                else {
                  fVar27 = (float)((uVar13 & 0xfffe000) + 0x38000000);
                }
                iVar24 = piVar6[iVar23];
                uVar2 = *(ushort *)(lVar11 + (longlong)iVar24 * 2);
                local_350 = (uint)uVar2;
                uVar13 = (uint)uVar2 << 0xd;
                if ((uVar13 & 0xf800000) == 0xf800000) {
                  fVar17 = (float)(uVar13 | 0x70000000);
                }
                else if ((uVar13 & 0xf800000) == 0) {
                  fVar17 = (float)(uVar13 | 0x38800000) + -6.1035156e-05;
                }
                else {
                  fVar17 = (float)((uVar13 & 0xfffe000) + 0x38000000);
                }
                fVar27 = (float)((uint)fVar27 | (int)(short)uVar1 & 0x80000000U);
                fVar17 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar17);
              }
              else {
                fVar27 = *(float *)(lVar11 + (longlong)iVar7 * 4);
                iVar24 = piVar6[iVar23];
                fVar17 = *(float *)(lVar11 + (longlong)iVar24 * 4);
              }
              if (fVar27 < fVar17) {
                piVar6[iVar20] = iVar24;
                piVar6[iVar23] = iVar7;
                iVar20 = iVar23;
                goto joined_r0x000144b37381;
              }
            }
            bVar26 = iVar21 != 0;
            iVar20 = iVar21 + -1;
            iVar21 = iVar20;
          } while (bVar26);
          if (1 < (int)uVar22) {
            uVar15 = (ulonglong)uVar22;
            iVar20 = *piVar6;
            *piVar6 = piVar6[uVar15 - 1];
            piVar6[uVar15 - 1] = iVar20;
            if (uVar22 != 2) {
              do {
                uVar16 = uVar15 - 1;
                iVar20 = 0;
                iVar23 = 1;
                iVar21 = 0;
                do {
                  iVar20 = iVar20 + 2;
                  iVar7 = iVar23;
                  if ((longlong)iVar20 < (longlong)uVar16) {
                    bVar12 = *(byte *)(param_1 + 9);
                    lVar11 = *(longlong *)(param_1 + 0x10);
                    if (bVar12 == 0) {
                      uVar1 = *(ushort *)(lVar11 + (longlong)piVar6[iVar20] * 2);
                      local_354 = (float)(uint)uVar1;
                      uVar22 = (uint)uVar1 << 0xd;
                      if ((uVar22 & 0xf800000) == 0xf800000) {
                        fVar27 = (float)(uVar22 | 0x70000000);
                      }
                      else if ((uVar22 & 0xf800000) == 0) {
                        fVar27 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar27 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                      }
                      uVar2 = *(ushort *)(lVar11 + (longlong)piVar6[iVar23] * 2);
                      uVar22 = (uint)uVar2 << 0xd;
                      if ((uVar22 & 0xf800000) == 0xf800000) {
                        fVar17 = (float)(uVar22 | 0x70000000);
                      }
                      else if ((uVar22 & 0xf800000) == 0) {
                        fVar17 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                      }
                      else {
                        fVar17 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                      }
                      fVar27 = (float)((uint)fVar27 | (int)(short)uVar1 & 0x80000000U);
                      fVar17 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar17);
                    }
                    else {
                      fVar27 = *(float *)(lVar11 + (longlong)piVar6[iVar20] * 4);
                      fVar17 = *(float *)(lVar11 + (longlong)piVar6[iVar23] * 4);
                    }
                    if (fVar17 <= fVar27) {
                      iVar7 = iVar20;
                    }
                  }
                  else {
                    bVar12 = *(byte *)(param_1 + 9);
                    lVar11 = *(longlong *)(param_1 + 0x10);
                  }
                  iVar20 = piVar6[iVar21];
                  if ((bVar12 & 1) == 0) {
                    uVar1 = *(ushort *)(lVar11 + (longlong)iVar20 * 2);
                    local_354 = (float)(uint)uVar1;
                    uVar22 = (uint)uVar1 << 0xd;
                    if ((uVar22 & 0xf800000) == 0xf800000) {
                      fVar27 = (float)(uVar22 | 0x70000000);
                    }
                    else if ((uVar22 & 0xf800000) == 0) {
                      fVar27 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar27 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                    }
                    iVar23 = piVar6[iVar7];
                    uVar2 = *(ushort *)(lVar11 + (longlong)iVar23 * 2);
                    uVar22 = (uint)uVar2 << 0xd;
                    if ((uVar22 & 0xf800000) == 0xf800000) {
                      fVar17 = (float)(uVar22 | 0x70000000);
                    }
                    else if ((uVar22 & 0xf800000) == 0) {
                      fVar17 = (float)(uVar22 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar17 = (float)((uVar22 & 0xfffe000) + 0x38000000);
                    }
                    fVar27 = (float)((uint)fVar27 | (int)(short)uVar1 & 0x80000000U);
                    fVar17 = (float)((int)(short)uVar2 & 0x80000000U | (uint)fVar17);
                  }
                  else {
                    fVar27 = *(float *)(lVar11 + (longlong)iVar20 * 4);
                    iVar23 = piVar6[iVar7];
                    fVar17 = *(float *)(lVar11 + (longlong)iVar23 * 4);
                  }
                  if (fVar17 <= fVar27) break;
                  piVar6[iVar21] = iVar23;
                  piVar6[iVar7] = iVar20;
                  iVar20 = iVar7 * 2;
                  iVar23 = iVar7 * 2 + 1;
                  iVar21 = iVar7;
                } while ((longlong)iVar23 < (longlong)uVar16);
                iVar20 = *piVar6;
                *piVar6 = piVar6[uVar15 - 2];
                piVar6[uVar15 - 2] = iVar20;
                uVar15 = uVar16;
              } while (2 < uVar16);
            }
          }
        }
LAB_144b37364:
        plVar4 = plVar4 + -3;
      } while (&local_348 <= plVar4);
    }
  }
  else if (1 < (int)uVar22) {
    lVar11 = *param_2;
    memset(local_338,0,0x2f0);
    local_340 = lVar11 + (ulonglong)uVar22 * 4 + -4;
    local_348 = lVar11;
    fVar27 = logf((float)(int)uVar22);
    local_338[0] = (int)(longlong)(fVar27 + fVar27);
    plVar4 = &local_348;
    do {
      piVar6 = (int *)*plVar4;
      piVar9 = (int *)plVar4[1];
      uVar22 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar6) >> 2) + 1;
      piVar18 = piVar9;
      piVar14 = piVar6;
      fVar27 = *(float *)(plVar4 + 2);
      if (*(float *)(plVar4 + 2) != 0.0) {
LAB_144b374a7:
        fVar17 = fVar27;
        piVar10 = piVar6;
        if (8 < (int)uVar22) {
          iVar20 = piVar10[uVar22 >> 1];
          piVar10[uVar22 >> 1] = *piVar10;
          *piVar10 = iVar20;
          piVar5 = piVar18 + 1;
          piVar6 = piVar10;
          do {
            piVar3 = piVar6 + 1;
            piVar19 = piVar6 + 1;
            do {
              piVar8 = piVar19;
              piVar6 = piVar3;
              if (piVar18 < piVar6) break;
              piVar3 = piVar6 + 1;
              piVar19 = piVar8 + 1;
            } while (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)*piVar10 * 4) <=
                     *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)*piVar6 * 4));
            piVar3 = piVar5 + -2;
            do {
              piVar19 = piVar5;
              piVar25 = piVar3;
              piVar5 = piVar19 + -1;
              if (piVar5 <= piVar10) break;
              piVar3 = piVar25 + -1;
            } while (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)*piVar5 * 4) <=
                     *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)*piVar10 * 4));
            if (piVar5 < piVar6) goto LAB_144b37545;
            iVar20 = *piVar6;
            *piVar6 = *piVar5;
            *piVar5 = iVar20;
          } while( true );
        }
        if (piVar10 < piVar18) {
          do {
            piVar6 = piVar10;
            if (piVar10 + 1 <= piVar18) {
              iVar20 = *piVar10;
              piVar9 = piVar10 + 1;
              piVar14 = piVar10;
              do {
                piVar6 = piVar9;
                iVar21 = *piVar9;
                if (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar20 * 4) <=
                    *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)*piVar9 * 4)) {
                  piVar6 = piVar14;
                  iVar21 = iVar20;
                }
                iVar20 = iVar21;
                piVar9 = piVar9 + 1;
                piVar14 = piVar6;
              } while (piVar9 <= piVar18);
            }
            iVar20 = *piVar6;
            *piVar6 = *piVar18;
            *piVar18 = iVar20;
            piVar18 = piVar18 + -1;
          } while (piVar10 < piVar18);
        }
        goto LAB_144b376d4;
      }
LAB_144b3797d:
      if (uVar22 != 0) {
        iVar20 = (int)((uVar22 - ((int)(uVar22 - 2) >> 0x1f)) + -2) >> 1;
        iVar21 = iVar20;
joined_r0x000144b376f6:
        do {
          iVar23 = iVar20 * 2 + 1;
          if (iVar23 < (int)uVar22) {
            iVar7 = iVar20 * 2 + 2;
            if (iVar7 < (int)uVar22) {
              lVar11 = *(longlong *)(param_1 + 0x20);
              if (*(int *)(lVar11 + (longlong)piVar6[iVar7] * 4) <=
                  *(int *)(lVar11 + (longlong)piVar6[iVar23] * 4)) {
                iVar23 = iVar7;
              }
            }
            else {
              lVar11 = *(longlong *)(param_1 + 0x20);
            }
            iVar7 = piVar6[iVar20];
            if (*(int *)(lVar11 + (longlong)piVar6[iVar23] * 4) <
                *(int *)(lVar11 + (longlong)iVar7 * 4)) {
              piVar6[iVar20] = piVar6[iVar23];
              piVar6[iVar23] = iVar7;
              iVar20 = iVar23;
              goto joined_r0x000144b376f6;
            }
          }
          bVar26 = iVar21 != 0;
          iVar20 = iVar21 + -1;
          iVar21 = iVar20;
        } while (bVar26);
        if (1 < (int)uVar22) {
          uVar15 = (ulonglong)uVar22;
          iVar20 = *piVar6;
          *piVar6 = piVar6[uVar15 - 1];
          piVar6[uVar15 - 1] = iVar20;
          if (uVar22 != 2) {
            do {
              uVar16 = uVar15 - 1;
              iVar20 = 0;
              iVar23 = 1;
              iVar21 = 0;
              do {
                iVar20 = iVar20 + 2;
                iVar7 = iVar23;
                if ((longlong)iVar20 < (longlong)uVar16) {
                  lVar11 = *(longlong *)(param_1 + 0x20);
                  if (*(int *)(lVar11 + (longlong)piVar6[iVar20] * 4) <=
                      *(int *)(lVar11 + (longlong)piVar6[iVar23] * 4)) {
                    iVar7 = iVar20;
                  }
                }
                else {
                  lVar11 = *(longlong *)(param_1 + 0x20);
                }
                iVar20 = piVar6[iVar21];
                if (*(int *)(lVar11 + (longlong)iVar20 * 4) <=
                    *(int *)(lVar11 + (longlong)piVar6[iVar7] * 4)) break;
                piVar6[iVar21] = piVar6[iVar7];
                piVar6[iVar7] = iVar20;
                iVar20 = iVar7 * 2;
                iVar23 = iVar7 * 2 + 1;
                iVar21 = iVar7;
              } while ((longlong)iVar23 < (longlong)uVar16);
              iVar20 = *piVar6;
              *piVar6 = piVar6[uVar15 - 2];
              piVar6[uVar15 - 2] = iVar20;
              uVar15 = uVar16;
            } while (2 < uVar16);
          }
        }
      }
LAB_144b376d4:
      plVar4 = plVar4 + -3;
    } while (&local_348 <= plVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_144b37545:
  iVar20 = *piVar10;
  *piVar10 = *piVar5;
  *piVar5 = iVar20;
  fVar27 = (float)((int)fVar17 - 1);
  piVar19 = piVar19 + -2;
  local_354 = fVar17;
  if ((longlong)piVar25 - (longlong)piVar14 < (longlong)piVar9 - (longlong)piVar8) {
    if (piVar6 < piVar18) {
      *plVar4 = (longlong)piVar6;
      plVar4[1] = (longlong)piVar18;
      *(float *)(plVar4 + 2) = fVar27;
      plVar4 = plVar4 + 3;
    }
    piVar6 = piVar10;
    piVar9 = piVar25;
    if (piVar5 <= piVar10 + 1) goto LAB_144b376d4;
  }
  else {
    if (piVar10 + 1 < piVar5) {
      *plVar4 = (longlong)piVar10;
      plVar4[1] = (longlong)piVar19;
      *(float *)(plVar4 + 2) = fVar27;
      plVar4 = plVar4 + 3;
    }
    piVar10 = piVar8;
    piVar19 = piVar18;
    piVar9 = piVar18;
    if (piVar18 <= piVar6) goto LAB_144b376d4;
  }
  uVar22 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar10) >> 2) + 1;
  piVar18 = piVar19;
  piVar14 = piVar10;
  if (fVar27 == 0.0) goto LAB_144b3797d;
  goto LAB_144b374a7;
LAB_144b3719b:
  iVar21 = *piVar6;
  *piVar6 = *piVar10;
  *piVar10 = iVar21;
  iVar20 = iVar20 + -1;
  piVar19 = piVar19 + -2;
  if ((longlong)piVar25 - (longlong)piVar14 < (longlong)piVar9 - (longlong)piVar8) {
    if (piVar5 < piVar18) {
      *plVar4 = (longlong)piVar5;
      plVar4[1] = (longlong)piVar18;
      *(int *)(plVar4 + 2) = iVar20;
      plVar4 = plVar4 + 3;
    }
    piVar8 = piVar6;
    piVar5 = piVar6;
    piVar18 = piVar19;
    piVar9 = piVar25;
    if (piVar10 <= piVar6 + 1) goto LAB_144b37364;
  }
  else {
    if (piVar6 + 1 < piVar10) {
      *plVar4 = (longlong)piVar6;
      plVar4[1] = (longlong)piVar19;
      *(int *)(plVar4 + 2) = iVar20;
      plVar4 = plVar4 + 3;
    }
    piVar9 = piVar18;
    if (piVar18 <= piVar5) goto LAB_144b37364;
  }
  uVar22 = (int)((ulonglong)((longlong)piVar9 - (longlong)piVar8) >> 2) + 1;
  piVar6 = piVar5;
  piVar14 = piVar8;
  if (iVar20 == 0) goto LAB_144b378ee;
  goto LAB_144b370de;
}



// FUNCTION 144b37ece FUN_144b37ece body=229 status=ok
// SIG undefined FUN_144b37ece(void)

void FUN_144b37ece(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = 0xffffffff;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    param_1[0xc] = 0;
    *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x12) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0x16) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x1a) = 0;
    *(undefined8 *)(param_1 + 0x1c) = 0x3ff0000000000000;
    *(undefined1 *)(param_1 + 0x1e) = 0;
    param_1[0x1f] = 0xffffffff;
    param_1[0x20] = 0xffffffff;
    param_1[0x21] = 0xffffffff;
    param_1[0x22] = 0xffffffff;
    *(undefined8 *)(param_1 + 0x23) = 0xffffffff00000000;
    *(undefined8 *)(param_1 + 0x25) = 0;
    *(undefined8 *)(param_1 + 0x27) = 0;
    *(undefined8 *)(param_1 + 0x29) = 0;
    *(undefined8 *)(param_1 + 0x2b) = 0;
    *(undefined8 *)(param_1 + 0x2d) = 0;
    *(undefined8 *)(param_1 + 0x2f) = 0;
    *(undefined8 *)(param_1 + 0x31) = 0;
    *(undefined8 *)(param_1 + 0x33) = 0;
    param_1[0x35] = 0x7f7fffff;
    *(undefined8 *)(param_1 + 0x38) = 0x4000000000000000;
    *(undefined8 *)(param_1 + 0x3a) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x9c) = 0xc00000000;
    param_1[0xa0] = 0;
    *(undefined8 *)(param_1 + 0xa2) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0xffffffffffffffff;
    param_1[0xa6] = 0xffffffff;
    param_1[0xa8] = 0;
    param_1 = param_1 + 0xac;
  }
  return;
}



// FUNCTION 144b37fbe FUN_144b37fbe body=63 status=ok
// SIG undefined FUN_144b37fbe(void)

void FUN_144b37fbe(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  
  if ((param_2 == 0) && (param_3 != (longlong *)0x0)) {
    if (*(code **)(*param_3 + 0x2f0) == (code *)&LAB_1447e2612) {
      lVar1 = param_3[0x49];
    }
    else {
      lVar1 = (**(code **)(*param_3 + 0x2f0))(param_3);
    }
    *(longlong *)(param_1 + 0x30) = lVar1;
  }
  return;
}



// FUNCTION 144b37ffe FUN_144b37ffe body=1260 status=ok
// SIG undefined FUN_144b37ffe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_144b37ffe(longlong param_1,double *param_2,undefined8 param_3,longlong param_4,
                      int param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ushort uVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  ushort uVar11;
  float fVar12;
  ushort uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  int iVar17;
  int iVar18;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  int iVar19;
  undefined1 in_XMM3 [16];
  undefined1 auVar20 [16];
  longlong lVar21;
  double dVar22;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_c8 [32];
  float local_a8 [7];
  undefined1 auStack_8c [12];
  undefined4 local_80;
  undefined1 auStack_7c [12];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_5 == 0) || (iVar2 = *(int *)(param_1 + 0xc), iVar2 == -1)) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    *(undefined1 *)(param_2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_c8);
  }
  uVar5 = 0;
  local_a8[3] = 0.0;
  local_a8[4] = 0.0;
  local_a8[5] = 0.0;
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  bVar1 = *(byte *)(param_1 + 8);
  lVar4 = *(longlong *)(param_4 + 0x78);
  auStack_7c = SUB1612((undefined1  [16])0x0,4);
  auStack_8c = SUB1612((undefined1  [16])0x0,0);
  local_80 = 0;
  if (lVar4 != 0) {
    bVar8 = bVar1 ^ 1;
    uVar3 = *(undefined4 *)(lVar4 + 0x128 + (ulonglong)bVar8 * 8);
    lVar10 = *(longlong *)(lVar4 + 0x18 + (ulonglong)bVar8 * 0x20);
    auVar15._4_4_ = uVar3;
    auVar15._0_4_ = uVar3;
    auVar15._8_8_ = 0;
    auVar16 = pmovsxbd(in_XMM2,0x100);
    auVar20 = pmovsxbq(in_XMM3,0x100);
    lVar9 = 0;
    auVar23 = pmovsxbq(unaff_XMM6,0x202);
    auVar25 = pmovsxbd(unaff_XMM7,0x2020202);
    do {
      auVar26._0_4_ = iVar2 + auVar16._0_4_;
      iVar17 = auVar16._4_4_;
      auVar26._4_4_ = iVar2 + iVar17;
      iVar18 = auVar16._8_4_;
      auVar26._8_4_ = iVar18;
      iVar19 = auVar16._12_4_;
      auVar26._12_4_ = iVar19;
      auVar26 = pmulld(auVar26,auVar15);
      auVar26 = pmovzxdq(auVar26,auVar26);
      if (SUB168(auVar20 ^ _DAT_149931e80,0) < -0x7ffffffffffffffd) {
        *(longlong *)(auStack_8c + lVar9 * 8 + 4) = auVar26._0_8_ + lVar10;
      }
      if (SUB168(auVar20 ^ _DAT_149931e80,8) < -0x7ffffffffffffffd) {
        *(longlong *)(auStack_7c + lVar9 * 8 + -4) = auVar26._8_8_ + lVar10;
      }
      lVar9 = lVar9 + 2;
      lVar21 = auVar20._8_8_;
      auVar20._0_8_ = auVar20._0_8_ + auVar23._0_8_;
      auVar20._8_8_ = lVar21 + auVar23._8_8_;
      auVar16._0_4_ = auVar16._0_4_ + auVar25._0_4_;
      auVar16._4_4_ = iVar17 + auVar25._4_4_;
      auVar16._8_4_ = iVar18 + auVar25._8_4_;
      auVar16._12_4_ = iVar19 + auVar25._12_4_;
    } while (lVar9 != 4);
    uVar5 = (ulonglong)*(uint *)(lVar4 + 0x120);
  }
  lVar10 = 0;
  do {
    if (bVar1 == 0) {
      if ((int)uVar5 < 1) {
        uVar13 = 0;
        uVar7 = 0xfc00;
        uVar6 = 0xf800000;
LAB_144b383a5:
        fVar12 = (float)(uVar6 | 0x70000000);
      }
      else {
        uVar13 = 0x7c00;
        uVar14 = 0;
        uVar11 = 0xfc00;
        do {
          uVar7 = *(ushort *)(*(longlong *)(auStack_8c + lVar10 * 8 + 4) + uVar14 * 2);
          if ((short)uVar7 <= (short)uVar13) {
            uVar13 = uVar7;
          }
          if ((short)uVar7 <= (short)uVar11) {
            uVar7 = uVar11;
          }
          uVar14 = uVar14 + 1;
          uVar11 = uVar7;
        } while (uVar5 != uVar14);
        uVar6 = (uint)uVar13 << 0xd;
        if ((uVar6 & 0xf800000) == 0xf800000) goto LAB_144b383a5;
        if ((uVar6 & 0xf800000) == 0) {
          fVar12 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar12 = (float)((uVar6 & 0xfffe000) + 0x38000000);
        }
      }
      local_a8[lVar10 + 3] = (float)((int)(short)uVar13 & 0x80000000U | (uint)fVar12);
      uVar6 = (uint)uVar7 << 0xd;
      if ((uVar6 & 0xf800000) == 0xf800000) {
        fVar12 = (float)(uVar6 | 0x70000000);
      }
      else if ((uVar6 & 0xf800000) == 0) {
        fVar12 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar12 = (float)((uVar6 & 0xfffe000) + 0x38000000);
      }
      fVar12 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar12);
    }
    else {
      auVar25 = ZEXT816(0x7f7fffff);
      auVar23 = ZEXT816(0xff7fffff);
      if (0 < (int)uVar5) {
        uVar14 = 0;
        auVar23 = ZEXT816(0xff7fffff);
        auVar25 = ZEXT816(0x7f7fffff);
        do {
          fVar12 = *(float *)(*(longlong *)(auStack_8c + lVar10 * 8 + 4) + uVar14 * 4);
          if (fVar12 <= auVar25._0_4_) {
            auVar25._0_4_ = fVar12;
          }
          if (auVar23._0_4_ <= fVar12) {
            auVar23._0_4_ = fVar12;
          }
          uVar14 = uVar14 + 1;
        } while (uVar5 != uVar14);
      }
      local_a8[lVar10 + 3] = auVar25._0_4_;
      fVar12 = auVar23._0_4_;
    }
    local_a8[lVar10] = fVar12;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  iVar2 = *(int *)(param_1 + 0x24);
  if (iVar2 == -1) {
    fVar12 = 50.0;
    goto LAB_144b38259;
  }
  if (lVar4 == 0) {
    if (*(char *)(param_1 + 0x20) == '\0') {
LAB_144b3849d:
      uVar7 = 0xfc00;
      uVar6 = 0x1f800000;
LAB_144b384a6:
      fVar12 = (float)(uVar6 | 0x70000000);
      goto LAB_144b384ac;
    }
  }
  else {
    uVar6 = *(uint *)(lVar4 + 0x120);
    if (*(char *)(param_1 + 0x20) == '\0') {
      if ((int)uVar6 < 1) goto LAB_144b3849d;
      uVar5 = 0;
      uVar13 = 0xfc00;
      do {
        uVar7 = *(ushort *)
                 ((ulonglong)(uint)(iVar2 * *(int *)(lVar4 + 0x130)) + *(longlong *)(lVar4 + 0x38) +
                 uVar5 * 2);
        if ((short)uVar7 <= (short)uVar13) {
          uVar7 = uVar13;
        }
        uVar5 = uVar5 + 1;
        uVar13 = uVar7;
      } while (uVar6 != uVar5);
      uVar6 = (uint)uVar7 << 0xd;
      if ((uVar6 & 0xf800000) == 0xf800000) goto LAB_144b384a6;
      if ((uVar6 & 0xf800000) == 0) {
        fVar12 = (float)(uVar6 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar12 = (float)((uVar6 & 0xfffe000) + 0x38000000);
      }
LAB_144b384ac:
      fVar12 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar12);
      goto LAB_144b38259;
    }
    if (0 < (int)uVar6) {
      fVar12 = -3.4028235e+38;
      uVar5 = 0;
      do {
        fVar24 = *(float *)((ulonglong)(uint)(iVar2 * *(int *)(lVar4 + 0x128)) +
                            *(longlong *)(lVar4 + 0x18) + uVar5 * 4);
        if (fVar12 <= fVar24) {
          fVar12 = fVar24;
        }
        uVar5 = uVar5 + 1;
      } while (uVar6 != uVar5);
      goto LAB_144b38259;
    }
  }
  fVar12 = -3.4028235e+38;
LAB_144b38259:
  fVar24 = (float)(~-(uint)(ABS(fVar12) <= 1e-08) & (uint)fVar12 |
                  -(uint)(ABS(fVar12) <= 1e-08) & 0x3f800000);
  fVar12 = 0.0001;
  if (0.0001 <= fVar24) {
    fVar12 = fVar24;
  }
  dVar22 = (double)fVar12;
  *param_2 = (double)local_a8[3] - dVar22;
  param_2[1] = (double)local_a8[4] - dVar22;
  param_2[2] = (double)local_a8[5] - dVar22;
  param_2[3] = (double)local_a8[0] + dVar22;
  param_2[4] = (double)local_a8[1] + dVar22;
  param_2[5] = (double)local_a8[2] + dVar22;
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b384f0 FUN_144b384f0 body=152 status=ok
// SIG undefined FUN_144b384f0(void)

undefined4 * FUN_144b384f0(longlong param_1,undefined4 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double *pdVar4;
  undefined1 auStack_68 [40];
  double local_40;
  double dStack_38;
  double local_30;
  double local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') {
    pdVar4 = &local_40;
    local_40 = (double)*(float *)(param_1 + 0xc) * 65536.0;
    dStack_38 = (double)*(float *)(param_1 + 0x10) * 65536.0;
    local_30 = (double)*(float *)(param_1 + 0x14) * 65536.0;
  }
  else {
    pdVar4 = &local_28;
    local_18 = DAT_14c8464f0;
    local_28 = DAT_14c8464e0;
    uStack_20 = DAT_14c8464e8;
  }
  *(double *)(param_2 + 4) = pdVar4[2];
  uVar1 = *(undefined4 *)((longlong)pdVar4 + 4);
  uVar2 = *(undefined4 *)(pdVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)pdVar4 + 0xc);
  *param_2 = *(undefined4 *)pdVar4;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b3858a FUN_144b3858a body=409 status=ok
// SIG undefined FUN_144b3858a(void)

void FUN_144b3858a(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  longlong local_78;
  double local_70;
  double local_68;
  double local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar6 = *(uint *)(param_1 + 0x60);
    if ((uVar6 & 2) != 0) {
      *(uint *)(param_1 + 0x60) = uVar6 & 0xfffffffd;
      local_60 = (double)*(float *)(lVar2 + 0x14) * 65536.0;
      local_68 = (double)*(float *)(lVar2 + 0x10) * 65536.0;
      local_70 = (double)*(float *)(lVar2 + 0xc) * 65536.0;
      FUN_144aefa36(*(undefined8 *)(param_1 + 0x28));
      FUN_14472d10a(*(undefined8 *)(param_1 + 0x28));
      uVar6 = *(uint *)(param_1 + 0x60);
    }
    if ((uVar6 & 4) != 0) {
      *(uint *)(param_1 + 0x60) = uVar6 & 0xfffffffb;
      FUN_14090c93a(param_1);
      uVar6 = *(uint *)(param_1 + 0x60);
    }
    if ((uVar6 & 1) != 0) {
      FUN_14098c1d0(param_2,lVar2,param_1);
      *(byte *)(param_1 + 0x60) = *(byte *)(param_1 + 0x60) & 0xfe;
    }
    if (0 < *(int *)(param_2 + 0x18)) {
      lVar7 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x38) + 0x478);
      if (lVar7 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + 0x470);
        local_78 = lVar7 * 0xc;
        lVar7 = 0;
        do {
          iVar1 = *(int *)(lVar3 + 8 + lVar7);
          if ((((-1 < (longlong)iVar1) && (iVar1 < *(int *)(param_2 + 0x18))) &&
              (plVar4 = *(longlong **)
                         (*(longlong *)(lVar2 + 0x108) + (longlong)*(int *)(lVar3 + lVar7) * 0x10),
              1 < *(int *)((longlong)plVar4 + 0xd4) - 3U)) &&
             (plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x10) + (longlong)iVar1 * 8),
             plVar5 != (longlong *)0x0)) {
            iVar1 = *(int *)(lVar3 + 4 + lVar7);
            (**(code **)(*plVar4 + 0x78))(plVar4,local_58);
            (**(code **)(*plVar5 + 0x70))
                      (plVar5,*(undefined8 *)(local_58[0] + (longlong)iVar1 * 8),plVar4);
          }
          lVar7 = lVar7 + 0xc;
        } while (local_78 != lVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b38724 FUN_144b38724 body=508 status=ok
// SIG undefined FUN_144b38724(void)

void FUN_144b38724(undefined8 param_1,longlong *param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  lVar6 = *param_2;
  if (*(longlong *)(lVar6 + 0xc0) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(*(longlong *)(lVar6 + 0xc0) + 0x88);
  }
  uVar3 = *(undefined8 *)(lVar6 + 0x58);
  uVar4 = *(undefined8 *)(*(longlong *)(lVar6 + 8) + 600);
  uVar1 = *(undefined4 *)(*(longlong *)(lVar6 + 8) + 0x260);
  *(undefined4 *)(param_3 + 0x68) = 0;
  if (*(int *)(param_3 + 0x6c) < 3) {
    FUN_1481c9adc(param_3,3);
  }
  lVar6 = param_3 + 0x70;
  *(undefined4 *)(param_3 + 0xa8) = 0;
  if (*(int *)(param_3 + 0xac) < 3) {
    FUN_1481c9bc8(lVar6,3);
  }
  iVar2 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar2 + 1U) {
    FUN_1481c9c2e(param_3,iVar2);
  }
  lVar5 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    lVar5 = param_3;
  }
  *(undefined8 *)(lVar5 + (longlong)iVar2 * 8) = param_1;
  iVar2 = *(int *)(param_3 + 0xa8);
  *(uint *)(param_3 + 0xa8) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0xac) < iVar2 + 1U) {
    FUN_146beb88a(lVar6,iVar2);
  }
  lVar5 = *(longlong *)(param_3 + 0xa0);
  if (*(longlong *)(param_3 + 0xa0) == 0) {
    lVar5 = lVar6;
  }
  *(undefined4 *)(lVar5 + (longlong)iVar2 * 4) = 0x20;
  iVar2 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar2 + 1U) {
    FUN_1481c9c2e(param_3,iVar2);
  }
  lVar5 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    lVar5 = param_3;
  }
  *(undefined8 *)(lVar5 + (longlong)iVar2 * 8) = uVar3;
  iVar2 = *(int *)(param_3 + 0xa8);
  *(uint *)(param_3 + 0xa8) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0xac) < iVar2 + 1U) {
    FUN_146beb88a(lVar6,iVar2);
  }
  lVar5 = *(longlong *)(param_3 + 0xa0);
  if (*(longlong *)(param_3 + 0xa0) == 0) {
    lVar5 = lVar6;
  }
  *(undefined4 *)(lVar5 + (longlong)iVar2 * 4) = uVar7;
  iVar2 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar2 + 1U) {
    FUN_1481c9c2e(param_3,iVar2);
  }
  lVar5 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    lVar5 = param_3;
  }
  *(undefined8 *)(lVar5 + (longlong)iVar2 * 8) = uVar4;
  iVar2 = *(int *)(param_3 + 0xa8);
  *(uint *)(param_3 + 0xa8) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0xac) < iVar2 + 1U) {
    FUN_146beb88a(lVar6,iVar2);
  }
  if (*(longlong *)(param_3 + 0xa0) != 0) {
    lVar6 = *(longlong *)(param_3 + 0xa0);
  }
  *(undefined4 *)(lVar6 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 144b38920 FUN_144b38920 body=1396 status=ok
// SIG undefined FUN_144b38920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_144b38920(longlong param_1,double *param_2,undefined8 param_3,longlong param_4,
                      int param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  ushort uVar7;
  uint uVar8;
  byte bVar9;
  longlong lVar10;
  float *pfVar11;
  ushort uVar12;
  float fVar13;
  longlong lVar14;
  ushort uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  int iVar21;
  int iVar22;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  int iVar23;
  undefined1 in_XMM3 [16];
  undefined1 auVar24 [16];
  longlong lVar25;
  double dVar26;
  undefined1 unaff_XMM6 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 unaff_XMM7 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_d8 [40];
  float local_b0;
  float local_ac;
  float local_a8 [7];
  undefined4 uStack_8c;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((param_5 == 0) || (iVar2 = *(int *)(param_1 + 0xc), iVar2 == -1)) {
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    *param_2 = 0.0;
    param_2[1] = 0.0;
    *(undefined1 *)(param_2 + 6) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
  }
  uVar18 = 0;
  local_a8[3] = 0.0;
  local_a8[4] = 0.0;
  local_a8[5] = 0.0;
  local_a8[0] = 0.0;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  bVar1 = *(byte *)(param_1 + 8);
  lVar14 = *(longlong *)(param_4 + 0x78);
  local_80._4_4_ = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_80._0_4_ = 0;
  if (lVar14 != 0) {
    bVar9 = bVar1 ^ 1;
    uVar3 = *(undefined4 *)(lVar14 + 0x128 + (ulonglong)bVar9 * 8);
    lVar6 = *(longlong *)(lVar14 + 0x18 + (ulonglong)bVar9 * 0x20);
    auVar19._4_4_ = uVar3;
    auVar19._0_4_ = uVar3;
    auVar19._8_8_ = 0;
    auVar20 = pmovsxbd(in_XMM2,0x100);
    auVar24 = pmovsxbq(in_XMM3,0x100);
    lVar10 = 0;
    auVar27 = pmovsxbq(unaff_XMM6,0x202);
    auVar29 = pmovsxbd(unaff_XMM7,0x2020202);
    do {
      auVar30._0_4_ = iVar2 + auVar20._0_4_;
      iVar21 = auVar20._4_4_;
      auVar30._4_4_ = iVar2 + iVar21;
      iVar22 = auVar20._8_4_;
      auVar30._8_4_ = iVar22;
      iVar23 = auVar20._12_4_;
      auVar30._12_4_ = iVar23;
      auVar30 = pmulld(auVar30,auVar19);
      auVar30 = pmovzxdq(auVar30,auVar30);
      if (SUB168(auVar24 ^ _DAT_149931e80,0) < -0x7ffffffffffffffd) {
        (&local_88)[lVar10] = auVar30._0_8_ + lVar6;
      }
      if (SUB168(auVar24 ^ _DAT_149931e80,8) < -0x7ffffffffffffffd) {
        (&local_80)[lVar10] = auVar30._8_8_ + lVar6;
      }
      lVar10 = lVar10 + 2;
      lVar25 = auVar24._8_8_;
      auVar24._0_8_ = auVar24._0_8_ + auVar27._0_8_;
      auVar24._8_8_ = lVar25 + auVar27._8_8_;
      auVar20._0_4_ = auVar20._0_4_ + auVar29._0_4_;
      auVar20._4_4_ = iVar21 + auVar29._4_4_;
      auVar20._8_4_ = iVar22 + auVar29._8_4_;
      auVar20._12_4_ = iVar23 + auVar29._12_4_;
    } while (lVar10 != 4);
    uVar18 = (ulonglong)*(uint *)(lVar14 + 0x120);
  }
  lVar6 = CONCAT44(local_80._4_4_,(undefined4)local_80);
  lVar10 = 0;
  do {
    if (bVar1 == 0) {
      if ((int)uVar18 < 1) {
        uVar15 = 0;
        uVar7 = 0xfc00;
        uVar8 = 0xf800000;
LAB_144b38dc2:
        fVar13 = (float)(uVar8 | 0x70000000);
      }
      else {
        uVar15 = 0x7c00;
        uVar17 = 0;
        uVar12 = 0xfc00;
        do {
          uVar7 = *(ushort *)((&local_88)[lVar10] + uVar17 * 2);
          if ((short)uVar7 <= (short)uVar15) {
            uVar15 = uVar7;
          }
          if ((short)uVar7 <= (short)uVar12) {
            uVar7 = uVar12;
          }
          uVar17 = uVar17 + 1;
          uVar12 = uVar7;
        } while (uVar18 != uVar17);
        uVar8 = (uint)uVar15 << 0xd;
        if ((uVar8 & 0xf800000) == 0xf800000) goto LAB_144b38dc2;
        if ((uVar8 & 0xf800000) == 0) {
          fVar13 = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
        }
        else {
          fVar13 = (float)((uVar8 & 0xfffe000) + 0x38000000);
        }
      }
      local_a8[lVar10 + 3] = (float)((int)(short)uVar15 & 0x80000000U | (uint)fVar13);
      uVar8 = (uint)uVar7 << 0xd;
      if ((uVar8 & 0xf800000) == 0xf800000) {
        fVar13 = (float)(uVar8 | 0x70000000);
      }
      else if ((uVar8 & 0xf800000) == 0) {
        fVar13 = (float)(uVar8 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar13 = (float)((uVar8 & 0xfffe000) + 0x38000000);
      }
      fVar13 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar13);
    }
    else {
      auVar29 = ZEXT816(0x7f7fffff);
      auVar27 = ZEXT816(0xff7fffff);
      if (0 < (int)uVar18) {
        uVar17 = 0;
        auVar27 = ZEXT816(0xff7fffff);
        auVar29 = ZEXT816(0x7f7fffff);
        do {
          fVar13 = *(float *)((&local_88)[lVar10] + uVar17 * 4);
          if (fVar13 <= auVar29._0_4_) {
            auVar29._0_4_ = fVar13;
          }
          if (auVar27._0_4_ <= fVar13) {
            auVar27._0_4_ = fVar13;
          }
          uVar17 = uVar17 + 1;
        } while (uVar18 != uVar17);
      }
      local_a8[lVar10 + 3] = auVar29._0_4_;
      fVar13 = auVar27._0_4_;
    }
    local_a8[lVar10] = fVar13;
    lVar10 = lVar10 + 1;
  } while (lVar10 != 3);
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 == -1) {
    local_ac = 50.0;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x10);
    local_88 = 0;
    local_80._0_4_ = 0;
    local_80._4_4_ = 0;
    lVar6 = 0;
    if (lVar14 == 0) {
      uVar8 = 0;
    }
    else {
      bVar9 = bVar1 ^ 1;
      iVar21 = *(int *)(lVar14 + 0x128 + (ulonglong)bVar9 * 8);
      lVar6 = *(longlong *)(lVar14 + 0x18 + (ulonglong)bVar9 * 0x20);
      local_88 = (ulonglong)(uint)(iVar21 * iVar2) + lVar6;
      lVar6 = (ulonglong)(uint)((iVar2 + 1) * iVar21) + lVar6;
      local_80._0_4_ = (undefined4)lVar6;
      local_80._4_4_ = (undefined4)((ulonglong)lVar6 >> 0x20);
      uVar8 = *(uint *)(lVar14 + 0x120);
    }
    lVar14 = 0;
    pfVar11 = &local_ac;
    bVar4 = true;
    do {
      bVar5 = bVar4;
      if (bVar1 == 0) {
        if ((int)uVar8 < 1) {
          uVar7 = 0xfc00;
          uVar16 = 0x1f800000;
LAB_144b38e2a:
          fVar13 = (float)(uVar16 | 0x70000000);
        }
        else {
          uVar18 = 0;
          uVar15 = 0xfc00;
          do {
            uVar7 = *(ushort *)((&local_88)[lVar14] + uVar18 * 2);
            if ((short)uVar7 <= (short)uVar15) {
              uVar7 = uVar15;
            }
            uVar18 = uVar18 + 1;
            uVar15 = uVar7;
          } while (uVar8 != uVar18);
          uVar16 = (uint)uVar7 << 0xd;
          if ((uVar16 & 0xf800000) == 0xf800000) goto LAB_144b38e2a;
          if ((uVar16 & 0xf800000) == 0) {
            fVar13 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
          }
          else {
            fVar13 = (float)((uVar16 & 0xfffe000) + 0x38000000);
          }
        }
        fVar13 = (float)((int)(short)uVar7 & 0x80000000U | (uint)fVar13);
      }
      else {
        fVar13 = -3.4028235e+38;
        if (0 < (int)uVar8) {
          uVar18 = 0;
          fVar13 = -3.4028235e+38;
          do {
            fVar28 = *(float *)((&local_88)[lVar14] + uVar18 * 4);
            if (fVar13 <= fVar28) {
              fVar13 = fVar28;
            }
            uVar18 = uVar18 + 1;
          } while (uVar8 != uVar18);
        }
      }
      *pfVar11 = fVar13;
      lVar14 = 1;
      pfVar11 = &local_b0;
      bVar4 = false;
    } while (bVar5);
    if (local_ac <= local_b0) {
      local_ac = local_b0;
    }
  }
  uStack_8c = 0;
  fVar28 = (float)(~-(uint)(ABS(local_ac) <= 1e-08) & (uint)local_ac |
                  -(uint)(ABS(local_ac) <= 1e-08) & 0x3f800000);
  fVar13 = 0.0001;
  if (0.0001 <= fVar28) {
    fVar13 = fVar28;
  }
  dVar26 = (double)fVar13;
  *param_2 = (double)local_a8[3] - dVar26;
  param_2[1] = (double)local_a8[4] - dVar26;
  param_2[2] = (double)local_a8[5] - dVar26;
  param_2[3] = (double)local_a8[0] + dVar26;
  param_2[4] = (double)local_a8[1] + dVar26;
  param_2[5] = (double)local_a8[2] + dVar26;
  *(undefined1 *)(param_2 + 6) = 1;
  if ((local_70 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
  local_80 = lVar6;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b38ea8 FUN_144b38ea8 body=128 status=ok
// SIG undefined FUN_144b38ea8(void)

void FUN_144b38ea8(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 4;
  if (param_2 < 5) {
LAB_144b38ebd:
    uVar1 = (uint)uVar2;
    if ((uVar1 < 5) && (*(longlong *)(param_1 + 0x20) == 0)) goto LAB_144b38ecb;
    uVar3 = 0;
    if (4 < uVar1) {
      uVar3 = uVar2 & 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
    uVar2 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
    uVar2 = uVar2 >> 3;
    if ((int)param_2 <= (int)uVar2) {
      if ((int)uVar2 < 1) goto LAB_144b38ecb;
      goto LAB_144b38ebd;
    }
    uVar1 = 0x7fffffff;
    uVar3 = 0x7fffffff;
  }
  FUN_1446efa72(param_1 + 0x20,0,uVar3,8);
LAB_144b38ecb:
  *(uint *)(param_1 + 0x2c) = uVar1;
  return;
}



// FUNCTION 144b38f2e FUN_144b38f2e body=52 status=ok
// SIG undefined FUN_144b38f2e(void)

void FUN_144b38f2e(undefined4 *param_1,int param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2;
  *param_1 = *(undefined4 *)(*param_4 + lVar1 * 4);
  param_1[1] = *(undefined4 *)(*param_3 + lVar1 * 4);
  param_1[2] = *(undefined4 *)(param_3[1] + lVar1 * 4);
  param_1[3] = *(undefined4 *)(param_4[1] + lVar1 * 4);
  return;
}



// FUNCTION 144b38f62 FUN_144b38f62 body=18 status=ok
// SIG undefined FUN_144b38f62(void)

void FUN_144b38f62(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



// FUNCTION 144b38f74 FUN_144b38f74 body=61 status=ok
// SIG undefined FUN_144b38f74(void)

float * FUN_144b38f74(double *param_1,float *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_3[1];
  dVar2 = param_3[2];
  dVar3 = param_1[2];
  dVar4 = param_1[1];
  *param_2 = (float)(*param_3 - *param_1);
  param_2[1] = (float)(dVar1 - dVar4);
  param_2[2] = (float)(dVar2 - dVar3);
  return param_2;
}



// FUNCTION 144b38fb2 FUN_144b38fb2 body=49 status=ok
// SIG undefined FUN_144b38fb2(void)

double * FUN_144b38fb2(double *param_1,double *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  fVar1 = param_3[2];
  fVar2 = param_3[1];
  dVar3 = param_1[2];
  dVar4 = param_1[1];
  *param_2 = (double)*param_3 + *param_1;
  param_2[1] = (double)fVar2 + dVar4;
  param_2[2] = (double)fVar1 + dVar3;
  return param_2;
}



// FUNCTION 144b38fe4 FUN_144b38fe4 body=49 status=ok
// SIG undefined FUN_144b38fe4(void)

double * FUN_144b38fe4(double *param_1,double *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  
  fVar1 = param_3[2];
  fVar2 = param_3[1];
  dVar3 = param_1[2];
  dVar4 = param_1[1];
  *param_2 = (double)*param_3 + *param_1;
  param_2[1] = (double)fVar2 + dVar4;
  param_2[2] = (double)fVar1 + dVar3;
  return param_2;
}



// FUNCTION 144b39016 FUN_144b39016 body=5 status=ok
// SIG undefined FUN_144b39016(void)

undefined8 FUN_144b39016(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 144b39038 FUN_144b39038 body=186 status=ok
// SIG undefined FUN_144b39038(void)

longlong * FUN_144b39038(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = _Query_perf_frequency();
  lVar2 = _Query_perf_counter();
  if (lVar1 == 10000000) {
    lVar2 = lVar2 * 100;
  }
  else if (lVar1 == 24000000) {
    lVar2 = ((lVar2 % 24000000) * 1000000000) / 24000000 + (lVar2 / 24000000) * 1000000000;
  }
  else {
    lVar2 = ((lVar2 % lVar1) * 1000000000) / lVar1 + (lVar2 / lVar1) * 1000000000;
  }
  *param_1 = lVar2;
  return param_1;
}



// FUNCTION 144b39110 FUN_144b39110 body=658 status=ok
// SIG undefined FUN_144b39110(void)

ulonglong * FUN_144b39110(longlong param_1,ulonglong *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_68 [46];
  byte local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((((*(byte *)(param_1 + 0x6e) & 0x10) == 0) &&
      (bVar1 = *(byte *)(param_1 + 0x6b), (bVar1 & 2) != 0)) &&
     (((bVar1 & 0x10) != 0 ||
      ((((bVar1 & 0x20) == 0 &&
        ((**(code **)(**(longlong **)(param_1 + 0x210) + 0x210))(),
        (local_3a & *(byte *)(*(longlong *)(param_1 + 0x218) + 0x170) >> 1) == 0)) ||
       (*(char *)(param_3 + 0x23ed) == '\x01')))))) {
    lVar8 = (longlong)*(int *)(param_1 + 0xf0);
    if (lVar8 != 0) {
      lVar10 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar10) == *(longlong *)(param_3 + 0x4c0))
        {
          if (*(char *)(param_1 + 0x6b) < '\0') goto LAB_144b3919c;
          goto LAB_144b39163;
        }
        lVar10 = lVar10 + 8;
      } while (lVar8 * 8 - lVar10 != 0);
    }
    if ((*(byte *)(param_1 + 0x6b) & 0x40) == 0) {
LAB_144b39163:
      uVar5 = *(uint *)(param_1 + 0x27c);
      if ((uVar5 == 0) || (*(uint *)(param_3 + 0x30b8) == 0)) {
LAB_144b39171:
        if (*(char *)(param_3 + 0x23e8) == '\x01') {
          uVar5 = 6;
          if ((*(byte *)(param_1 + 0x79) & 1) == 0) goto LAB_144b391a1;
        }
        else {
          uVar5 = 6;
          if (-1 < *(char *)(param_1 + 0x78)) goto LAB_144b391a1;
        }
      }
      else {
        if (*(int *)(param_1 + 0xf0) == 0) {
          bVar11 = false;
        }
        else {
          lVar10 = 0;
          do {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar10);
            bVar11 = lVar4 == *(longlong *)(param_3 + 0x30b0);
            if (bVar11) break;
            bVar12 = lVar8 * 8 + -8 != lVar10;
            lVar10 = lVar10 + 8;
          } while (bVar12);
          lVar10 = 0;
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar10) ==
                *(longlong *)(param_3 + 0x4c0)) {
              if ((lVar4 == *(longlong *)(param_3 + 0x30b0)) ||
                 ((*(uint *)(param_3 + 0x30c4) & uVar5) == 0)) goto LAB_144b39314;
              goto LAB_144b3919c;
            }
            lVar10 = lVar10 + 8;
          } while (lVar8 * 8 != lVar10);
        }
        if (((*(uint *)(param_3 + 0x30c0) & uVar5) == 0) &&
           (bVar11 || (*(uint *)(param_3 + 0x30c4) & uVar5) == 0)) {
          uVar5 = uVar5 & *(uint *)(param_3 + 0x30bc);
LAB_144b39314:
          if ((uVar5 & ~*(uint *)(param_3 + 0x30b8)) == 0) goto LAB_144b39171;
        }
      }
    }
  }
LAB_144b3919c:
  uVar5 = 2;
LAB_144b391a1:
  uVar6 = *(byte *)(param_1 + 0x6e) & 8;
  uVar7 = 0;
  if ((DAT_14c761ae8 - 1U < 3) && (uVar7 = 0, (*(byte *)(param_1 + 0x78) & 0x40) != 0)) {
    uVar7 = 0x20;
  }
  cVar2 = *(char *)(param_1 + 0x82);
  bVar1 = *(byte *)(param_1 + 0x72);
  uVar3 = *(ulonglong *)(param_1 + 0x298);
  *param_2 = uVar3;
  if ((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) ||
     (uVar9 = 0, (*(byte *)(param_1 + 0x75) & 200) != 0)) {
    uVar9 = 0;
    if ((uVar3 >> 0x21 & 1) != 0) {
      uVar9 = uVar6 << 1;
    }
  }
  *(uint *)(param_2 + 2) =
       (bVar1 & 1) << 0xe | uVar7 | uVar6 << 4 | uVar5 | (uint)(cVar2 != '\x01') << 0xd | uVar9;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144b393ac FUN_144b393ac body=31 status=ok
// SIG undefined FUN_144b393ac(void)

undefined8 FUN_144b393ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b393d6 FUN_144b393d6 body=143 status=ok
// SIG undefined FUN_144b393d6(void)

undefined1 *
FUN_144b393d6(undefined1 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb51ce0;
  if ((code *)*param_2 == FUN_1485f3816) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar1 == 2)) {
      uVar6 = 0;
    }
    else if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    uVar3 = *(undefined1 *)(lVar2 + uVar6);
  }
  else {
    uVar3 = (*(code *)*param_2)(*param_3,param_4);
  }
  *param_1 = uVar3;
  param_1[1] = 1;
  return param_1;
}



// FUNCTION 144b3946c FUN_144b3946c body=76 status=ok
// SIG undefined FUN_144b3946c(void)

PRTL_CRITICAL_SECTION_DEBUG FUN_144b3946c(longlong param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x18);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
    p_Var1 = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  }
  else {
    EnterCriticalSection(lpCriticalSection);
    if (lpCriticalSection[1].LockCount != param_2) {
      lpCriticalSection[1].LockCount = param_2;
      (*DAT_14cb52770)(lpCriticalSection + 1,&lpCriticalSection[1].LockCount);
    }
    p_Var1 = lpCriticalSection[1].DebugInfo;
    LeaveCriticalSection(lpCriticalSection);
  }
  return p_Var1;
}



// FUNCTION 144b394b8 FUN_144b394b8 body=57 status=ok
// SIG undefined FUN_144b394b8(void)

void FUN_144b394b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55590 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55590 = FUN_140002ddd(FUN_1464b27a6,uVar1,L"BreadcrumbDef");
  }
  return;
}



// FUNCTION 144b39528 FUN_144b39528 body=145 status=ok
// SIG undefined FUN_144b39528(void)

void FUN_144b39528(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xb00);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x58);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xb00,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xb00),param_1,(longlong)param_2 * 0x58);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xb00,param_2,param_3,param_4);
  return;
}



// FUNCTION 144b395cc FUN_144b395cc body=57 status=ok
// SIG undefined FUN_144b395cc(void)

void FUN_144b395cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62b20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62b20 = FUN_140002ddd(FUN_1464fa00b,uVar1,L"GbxRotationChannel");
  }
  return;
}



// FUNCTION 144b39630 FUN_144b39630 body=57 status=ok
// SIG undefined FUN_144b39630(void)

void FUN_144b39630(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6d990 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6d990 = FUN_140002ddd(FUN_146536cae,uVar1,L"GbxActivityAreaStampDef");
  }
  return;
}



// FUNCTION 144b39676 FUN_144b39676 body=187 status=ok
// SIG undefined FUN_144b39676(void)

undefined8 FUN_144b39676(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  if (*param_1 == *param_2) {
    if ((int)param_1[1] != (int)param_2[1]) {
      return 0;
    }
    if (*(int *)((longlong)param_1 + 0xc) != *(int *)((longlong)param_2 + 0xc)) {
      return 0;
    }
    if ((int)param_1[2] != (int)param_2[2]) {
      return 0;
    }
    if (*(int *)((longlong)param_1 + 0x14) != *(int *)((longlong)param_2 + 0x14)) {
      return 0;
    }
    if (param_1[3] == param_2[3]) {
      uVar4 = *(uint *)(param_1 + 5);
      uVar3 = (ulonglong)uVar4;
      if (uVar4 == *(uint *)(param_2 + 5)) {
        if ((int)uVar4 < 2) {
          return CONCAT71((uint7)(uint3)(uVar4 >> 8),1);
        }
        uVar3 = param_2[4];
        lVar6 = 0;
        while( true ) {
          uVar1 = *(ushort *)(param_1[4] + lVar6);
          uVar4 = (uint)uVar1;
          uVar2 = *(ushort *)(uVar3 + lVar6);
          uVar7 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_144b396ec;
            }
            iVar5 = uVar4 - uVar7;
            goto LAB_144b39719;
          }
          if (uVar1 == 0) break;
LAB_144b396ec:
          lVar6 = lVar6 + 2;
        }
        iVar5 = 0;
      }
      else {
        iVar5 = *(uint *)(param_2 + 5) + uVar4 + -1;
      }
LAB_144b39719:
      return CONCAT71((int7)(uVar3 >> 8),iVar5 == 0);
    }
  }
  return 0;
}



// FUNCTION 144b397c8 FUN_144b397c8 body=33 status=ok
// SIG undefined FUN_144b397c8(void)

longlong * FUN_144b397c8(longlong *param_1)

{
  longlong *plVar1;
  
  if (*(code **)(*param_1 + 0x10) == (code *)&LAB_144944cea) {
    return param_1 + 0xe1;
  }
                    /* WARNING: Could not recover jumptable at 0x000144b397e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x10))();
  return plVar1;
}



// FUNCTION 144b397ea FUN_144b397ea body=40 status=ok
// SIG undefined FUN_144b397ea(void)

longlong FUN_144b397ea(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    lVar1 = 0;
    if (*(char *)(param_1 + 0x34b0) != '\0') {
      lVar1 = param_1 + 0x3210;
    }
    return lVar1;
  }
  return *(longlong *)(param_1 + 0x3170) + 0xd8;
}



// FUNCTION 144b39846 FUN_144b39846 body=285 status=ok
// SIG undefined FUN_144b39846(void)

void FUN_144b39846(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  
  if (*(code **)(*param_1 + 0xbf0) == (code *)&LAB_1447a6898) {
    if ((int)param_1[0x2cc] < 1) {
      return;
    }
  }
  else {
    cVar3 = (**(code **)(*param_1 + 0xbf0))(param_1);
    if (cVar3 == '\0') {
      return;
    }
  }
  if ((longlong)(int)param_1[0x2c2] != 0) {
    plVar5 = (longlong *)param_1[0x2c1];
    plVar1 = plVar5 + (longlong)(int)param_1[0x2c2] * 3;
    uVar4 = *param_2;
    do {
      if (((*plVar5 != 0) && (plVar5[1] != 0)) && (*(int *)(plVar5[1] + 0xb8) != -1)) {
        lVar6 = *(longlong *)(*plVar5 + 0x40);
        uVar7 = (uint)*(byte *)(lVar6 + 0x1c);
        if ((int)uVar4 < (int)uVar7) {
          uVar4 = uVar7;
        }
        *param_2 = uVar4;
        uVar7 = (uint)*(byte *)(lVar6 + 0x1b);
        if (uVar4 < uVar7) {
          uVar4 = uVar7;
        }
        *param_2 = uVar4;
      }
      plVar5 = plVar5 + 3;
    } while (plVar5 != plVar1);
  }
  lVar6 = param_1[0x115];
  if (lVar6 == 0) {
    return;
  }
  pcVar2 = *(code **)(*param_1 + 0xc10);
  if (pcVar2 != FUN_148811d38) {
    uVar4 = (*pcVar2)(param_1);
    goto LAB_144b39918;
  }
  pcVar2 = *(code **)(*param_1 + 0xbf0);
  if (pcVar2 == (code *)&LAB_1447a6898) {
    if ((int)param_1[0x2cc] < 1) {
LAB_144b39954:
      uVar4 = *(int *)(*(longlong *)(lVar6 + 0x40) + 8) - 1;
      goto LAB_144b39918;
    }
  }
  else {
    cVar3 = (*pcVar2)(param_1);
    if (cVar3 == '\0') {
      lVar6 = param_1[0x115];
      if (lVar6 == 0) {
        uVar4 = 0;
        goto LAB_144b39918;
      }
      goto LAB_144b39954;
    }
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x167c);
LAB_144b39918:
  if ((int)*param_2 < (int)uVar4) {
    uVar4 = *param_2;
  }
  *param_2 = uVar4;
  return;
}



// FUNCTION 144b39986 FUN_144b39986 body=84 status=ok
// SIG undefined FUN_144b39986(void)

void FUN_144b39986(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x60);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144b399d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144b399da FUN_144b399da body=136 status=ok
// SIG undefined FUN_144b399da(void)

void FUN_144b399da(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144b39a76 FUN_144b39a76 body=334 status=ok
// SIG undefined FUN_144b39a76(void)

undefined8 FUN_144b39a76(double *param_1,double *param_2)

{
  double _X;
  double _X_00;
  double _X_01;
  int iVar1;
  undefined4 extraout_var;
  
  _X = *param_1;
  if (((((-DAT_14cb7e378 < _X) && (_X < DAT_14cb7e378)) &&
       (_X_00 = param_1[1], -DAT_14cb7e380 < _X_00)) &&
      ((_X_00 < DAT_14cb7e380 && (_X_01 = param_1[2], -DAT_14cb7e388 < _X_01)))) &&
     ((_X_01 < DAT_14cb7e388 &&
      ((iVar1 = _finite(_X), iVar1 != 0 && (iVar1 = _finite(_X_00), iVar1 != 0)))))) {
    iVar1 = _finite(_X_01);
    if ((iVar1 != 0) &&
       ((float)((*param_2 - *param_1) * (*param_2 - *param_1) +
               (param_2[1] - param_1[1]) * (param_2[1] - param_1[1])) <=
        *(float *)(param_1 + 9) * *(float *)(param_1 + 9) + 0.01)) {
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),
                      ABS((float)((double)(float)param_2[2] - param_1[2])) <=
                      *(float *)((longlong)param_1 + 0x4c) + 0.01);
    }
  }
  return 0;
}



// FUNCTION 144b39bc4 FUN_144b39bc4 body=126 status=ok
// SIG undefined FUN_144b39bc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144b39bc4(undefined8 *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_144b39c18:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_144b39c18;
      }
    }
    param_1 = (undefined8 *)*param_1;
  } while( true );
}



// FUNCTION 144b39ca2 FUN_144b39ca2 body=98 status=ok
// SIG undefined FUN_144b39ca2(void)

longlong FUN_144b39ca2(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x20c) & 1) == 0) && ((longlong)*(int *)(param_1 + 0x40) != 0)) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar2);
      if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
         (*(longlong *)(lVar1 + 0xa8) == param_2)) {
        lVar2 = 0;
        if (param_3 != '\0') {
          lVar2 = lVar1;
        }
        if ((*(byte *)(lVar1 + 0x248) & 2) != 0) {
          return lVar1;
        }
        return lVar2;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 144b39d0c FUN_144b39d0c body=468 status=ok
// SIG undefined FUN_144b39d0c(void)

void FUN_144b39d0c(longlong param_1,float param_2,float param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined1 uVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  *(float *)(param_1 + 0x34) =
       (param_2 - *(float *)(param_1 + 0x38)) * param_3 + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x38) = param_2;
  iVar2 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar2 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x20);
    lVar12 = 0;
    do {
      cVar1 = *(char *)(lVar8 + 0x14 + lVar12);
      if (cVar1 == '\0') {
        if (*(float *)(lVar8 + 4 + lVar12) <= *(float *)(param_1 + 0x34)) {
          if (*(char *)(lVar8 + lVar12) == '\x01') {
            *(undefined1 *)(lVar8 + 0x14 + lVar12) = 1;
            uVar13 = *(undefined8 *)(lVar8 + 0xc + lVar12);
            iVar5 = *(int *)(param_4 + 0x38);
            uVar4 = iVar5 + 1;
            *(uint *)(param_4 + 0x38) = uVar4;
            uVar7 = 1;
          }
          else {
            *(undefined1 *)(lVar8 + 0x14 + lVar12) = 2;
            uVar13 = *(undefined8 *)(lVar8 + 0xc + lVar12);
            iVar5 = *(int *)(param_4 + 0x38);
            uVar4 = iVar5 + 1;
            *(uint *)(param_4 + 0x38) = uVar4;
            uVar7 = 0;
          }
LAB_144b39e75:
          if (*(uint *)(param_4 + 0x3c) < uVar4) {
            FUN_1489ac756(param_4,iVar5);
          }
          lVar10 = *(longlong *)(param_4 + 0x30);
          if (*(longlong *)(param_4 + 0x30) == 0) {
            lVar10 = param_4;
          }
          *(undefined8 *)(lVar10 + (longlong)iVar5 * 0xc) = uVar13;
          *(undefined1 *)(lVar10 + 8 + (longlong)iVar5 * 0xc) = uVar7;
        }
      }
      else if ((cVar1 == '\x01') && (*(float *)(lVar8 + 8 + lVar12) <= *(float *)(param_1 + 0x34)))
      {
        *(undefined1 *)(lVar8 + 0x14 + lVar12) = 2;
        uVar13 = *(undefined8 *)(lVar8 + 0xc + lVar12);
        iVar5 = *(int *)(param_4 + 0x38);
        uVar4 = iVar5 + 1;
        *(uint *)(param_4 + 0x38) = uVar4;
        uVar7 = 2;
        goto LAB_144b39e75;
      }
      lVar12 = lVar12 + 0x18;
    } while ((longlong)iVar2 * 0x18 != lVar12);
  }
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = *(int *)(param_1 + 0x28);
    lVar8 = (longlong)iVar2;
    if (lVar8 != 0) {
      lVar12 = *(longlong *)(param_1 + 0x20);
      iVar14 = 0;
      bVar6 = *(char *)(lVar12 + 0x14) == '\x02';
      iVar5 = 0;
      do {
        lVar10 = (longlong)iVar5;
        iVar3 = iVar5 + 1;
        if (iVar5 + 1 < iVar2) {
          iVar3 = iVar2;
        }
        pcVar9 = (char *)(lVar12 + 0x2c + lVar10 * 0x18);
        iVar15 = iVar5;
        lVar11 = lVar10;
        do {
          lVar11 = lVar11 + 1;
          iVar16 = iVar3;
          if (lVar8 <= lVar11) break;
          cVar1 = *pcVar9;
          iVar15 = iVar15 + 1;
          pcVar9 = pcVar9 + 0x18;
          iVar16 = iVar15;
        } while (bVar6 == (cVar1 == '\x02'));
        if (bVar6 == false) {
          if (iVar14 != iVar5) {
            memmove((void *)(lVar12 + (longlong)iVar14 * 0x18),(void *)(lVar12 + lVar10 * 0x18),
                    (longlong)(iVar16 - iVar5) * 0x18);
          }
          iVar14 = iVar14 + (iVar16 - iVar5);
        }
        bVar6 = (bool)(bVar6 ^ 1);
        iVar5 = iVar16;
      } while (lVar11 < lVar8);
      *(int *)(param_1 + 0x28) = iVar14;
    }
  }
  return;
}



// FUNCTION 144b39ee0 FUN_144b39ee0 body=316 status=ok
// SIG undefined FUN_144b39ee0(void)

longlong * FUN_144b39ee0(longlong *param_1)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(code **)(*param_1 + 8) == (code *)&LAB_1449493aa) {
    param_1 = param_1 + -0xa6;
  }
  else {
    param_1 = (longlong *)(**(code **)(*param_1 + 8))(param_1);
  }
  if (param_1 != (longlong *)0x0) {
    if (DAT_14cac9ca8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_14081d0ea;
      local_38 = &LAB_1478c0a72;
      local_40 = &LAB_1417b2375;
      local_48 = L"Engine";
      local_50 = 0x1000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) ==
        DAT_14cac9ca8 + 0x30)) goto LAB_144b39f4c;
  }
  param_1 = (longlong *)0x0;
LAB_144b39f4c:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b3a01e FUN_144b3a01e body=196 status=ok
// SIG undefined FUN_144b3a01e(void)

void FUN_144b3a01e(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((longlong)*(int *)(param_1 + 0x178) != 0) {
    uVar3 = 0;
    lVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x170) + uVar3) == param_2) {
        if ((int)(~uVar3 >> 4) == 0) {
          return;
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x170) + 8 + (lVar2 >> 0x20) * 0x10);
        uVar1 = *(undefined8 *)(lVar2 + 0x10);
        if (DAT_14ca85169 == '\0') {
          FUN_14002049c(&DAT_14ca85100,1);
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar1);
          FUN_14002049c(&DAT_14ca85100,0);
        }
        else {
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar1);
        }
        *(undefined8 *)(lVar2 + 0x20) = 0;
        return;
      }
      lVar2 = lVar2 + 0x100000000;
      uVar3 = uVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x178) * 0x10 != uVar3);
  }
  return;
}



// FUNCTION 144b3a0e2 FUN_144b3a0e2 body=196 status=ok
// SIG undefined FUN_144b3a0e2(void)

void FUN_144b3a0e2(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((longlong)*(int *)(param_1 + 0x188) != 0) {
    uVar3 = 0;
    lVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x180) + uVar3) == param_2) {
        if ((int)(~uVar3 >> 4) == 0) {
          return;
        }
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x180) + 8 + (lVar2 >> 0x20) * 0x10);
        uVar1 = *(undefined8 *)(lVar2 + 0x10);
        if (DAT_14ca85169 == '\0') {
          FUN_14002049c(&DAT_14ca85100,1);
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar1);
          FUN_14002049c(&DAT_14ca85100,0);
        }
        else {
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,&DAT_14ca85100,uVar1);
        }
        *(undefined8 *)(lVar2 + 0x28) = 0;
        return;
      }
      lVar2 = lVar2 + 0x100000000;
      uVar3 = uVar3 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x188) * 0x10 != uVar3);
  }
  return;
}



// FUNCTION 144b3a1ca FUN_144b3a1ca body=124 status=ok
// SIG undefined FUN_144b3a1ca(void)

longlong FUN_144b3a1ca(longlong *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  puVar4 = (ulonglong *)((longlong)*(int *)(lVar2 + 0x44) + *param_1);
  bVar1 = *(byte *)(lVar2 + 0x70);
  plVar3 = *(longlong **)(lVar2 + 0x78);
  if (*(code **)(*plVar3 + 0x178) != (code *)&LAB_1448fa8ce) {
    (**(code **)(*plVar3 + 0x178))();
    plVar3 = *(longlong **)(lVar2 + 0x78);
  }
  if ((int)puVar4[1] == 0) {
    lVar2 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      uVar5 = *puVar4;
    }
    else {
      uVar5 = *puVar4;
      if ((uVar5 & 1) != 0) {
        uVar5 = (longlong)puVar4 + ((longlong)uVar5 >> 0x18);
      }
    }
    lVar2 = (longlong)param_2 * (longlong)*(int *)((longlong)plVar3 + 0x34) + uVar5;
  }
  return lVar2;
}



// FUNCTION 144b3a246 FUN_144b3a246 body=177 status=ok
// SIG undefined FUN_144b3a246(void)

void FUN_144b3a246(longlong *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  puVar4 = (ulonglong *)((longlong)*(int *)(lVar2 + 0x44) + *param_1);
  bVar1 = *(byte *)(lVar2 + 0x70);
  plVar3 = *(longlong **)(lVar2 + 0x78);
  if (*(code **)(*plVar3 + 0x178) != (code *)&LAB_1448fa8ce) {
    (**(code **)(*plVar3 + 0x178))();
    plVar3 = *(longlong **)(lVar2 + 0x78);
  }
  if ((int)puVar4[1] == 0) {
    lVar2 = 0;
  }
  else {
    if ((bVar1 & 1) == 0) {
      uVar5 = *puVar4;
    }
    else {
      uVar5 = *puVar4;
      if ((uVar5 & 1) != 0) {
        uVar5 = (longlong)puVar4 + ((longlong)uVar5 >> 0x18);
      }
    }
    lVar2 = (longlong)param_2 * (longlong)*(int *)((longlong)plVar3 + 0x34) + uVar5;
  }
  plVar3 = (longlong *)param_1[2];
  if ((plVar3 != (longlong *)0x0) && (*(code **)(*plVar3 + 0x80) != (code *)&LAB_1489e59b2)) {
                    /* WARNING: Could not recover jumptable at 0x000144b3a2eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x80))(plVar3,lVar2);
    return;
  }
  return;
}



// FUNCTION 144b3a2f7 FUN_144b3a2f7 body=59 status=ok
// SIG undefined FUN_144b3a2f7(void)

longlong FUN_144b3a2f7(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(param_1[1] + 0x44);
  pcVar3 = *(code **)(**(longlong **)(param_1[1] + 0x78) + 0x178);
  if (pcVar3 != (code *)&LAB_1448fa8ce) {
    (*pcVar3)();
  }
  return (longlong)*(int *)(lVar2 + 8 + (longlong)iVar1);
}



// FUNCTION 144b3a332 FUN_144b3a332 body=304 status=ok
// SIG undefined FUN_144b3a332(void)

undefined8 FUN_144b3a332(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == 0) {
LAB_144b3a45b:
    uVar2 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(lVar1 + 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951d20) {
      FUN_144b3d300(&DAT_14c951d20);
      if (DAT_14c951d20 == -1) {
        uVar2 = FUN_1446ddbd2();
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,uVar2,FUN_14067a048);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
    }
    if (DAT_14c951cd8 == 0) {
      bVar4 = puVar3 != (undefined8 *)0x0;
      if (puVar3 != &DAT_14c951cd0 && bVar4) {
        do {
          puVar3 = (undefined8 *)puVar3[6];
          bVar4 = puVar3 != (undefined8 *)0x0;
          if (puVar3 == &DAT_14c951cd0) break;
        } while (puVar3 != (undefined8 *)0x0);
      }
      if (!bVar4) goto LAB_144b3a45b;
    }
    else if ((puVar3[3] & DAT_14c951cd8) == 0) goto LAB_144b3a45b;
    *(bool *)param_3 =
         (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + param_2 + *(int *)(lVar1 + 0x44)) &
         *(byte *)(lVar1 + 0x73)) != 0;
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 144b3a466 FUN_144b3a466 body=160 status=ok
// SIG undefined FUN_144b3a466(void)

double FUN_144b3a466(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar1;
  longlong *plVar2;
  float fVar3;
  double dVar4;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x20);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    dVar4 = 0.0;
  }
  else {
    plVar2 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar2 = *(longlong **)(param_1 + 0x30);
    }
    pcVar1 = *(code **)(*plVar2 + 8);
    if ((pcVar1 == (code *)&LAB_148a66114) || (pcVar1 == (code *)&LAB_148a66148)) {
      plVar2 = plVar2 + 1;
    }
    else {
      plVar2 = (longlong *)(*pcVar1)(plVar2);
    }
    if (UNRECOVERED_JUMPTABLE == (code *)&LAB_148a660f2) {
                    /* WARNING: Could not recover jumptable at 0x000144b3a4ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      dVar4 = (double)(*(code *)*plVar2)(param_2);
      return dVar4;
    }
    if (UNRECOVERED_JUMPTABLE != FUN_148a6611a) {
                    /* WARNING: Could not recover jumptable at 0x000144b3a4ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      dVar4 = (double)(*UNRECOVERED_JUMPTABLE)(plVar2,param_2);
      return dVar4;
    }
    fVar3 = (float)(*(code *)*plVar2)(param_2);
    dVar4 = (double)fVar3;
  }
  return dVar4;
}



// FUNCTION 144b3a506 FUN_144b3a506 body=122 status=ok
// SIG undefined FUN_144b3a506(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_144b3a506(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_144b3a554:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_144b3a554;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 144b3a5b8 FUN_144b3a5b8 body=789 status=ok
// SIG undefined FUN_144b3a5b8(void)

double * FUN_144b3a5b8(longlong *param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  double *pdVar7;
  longlong lVar8;
  longlong *plVar9;
  double dVar10;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pcVar4 = *(code **)(*param_1 + 0x5e8);
  if (pcVar4 == FUN_140972dde) {
    lVar8 = param_1[0x76];
    if (lVar8 == 0) {
      pcVar4 = *(code **)(*param_1 + 0x5f8);
      if (pcVar4 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)param_1 + 0x75b4) == 0) ||
               (uVar3 = *(uint *)(param_1 + 0xeb6), (int)uVar3 < 0)) ||
              (DAT_14c9647dc <= (int)uVar3)) ||
             (((plVar9 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)((longlong)param_1 + 0x75b4))
               ) || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_144b3a678;
          if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
            lVar8 = *plVar9;
          }
          else {
            lVar8 = 0;
          }
          lVar8 = lVar8 + 0x110;
        }
        else {
          lVar8 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
        }
        if (lVar8 == 0) goto LAB_144b3a678;
        lVar8 = *(longlong *)(lVar8 + 0x20);
      }
      else {
        lVar8 = (*pcVar4)(param_1);
      }
      if (lVar8 == 0) goto LAB_144b3a678;
      lVar8 = *(longlong *)(lVar8 + 0x3b0);
      goto LAB_144b3a71d;
    }
  }
  else {
    lVar8 = (*pcVar4)(param_1);
LAB_144b3a71d:
    if (lVar8 == 0) goto LAB_144b3a678;
  }
  if (((*(byte *)(lVar8 + 0x39a) & 8) == 0) && (lVar8 = param_1[0x78], lVar8 != 0)) {
    if (DAT_14caf9cd0 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463c0cc2;
      local_48 = &LAB_147c9db5b;
      local_50 = &LAB_1463f9c44;
      local_58 = &DAT_149e063b2;
      local_60 = 0x2000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar8 = param_1[0x78];
      if (lVar8 == 0) goto LAB_144b3a678;
    }
    if (((((DAT_14caf9cd0 != 0) && (lVar5 = *(longlong *)(lVar8 + 0x10), lVar5 != 0)) &&
         (*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
          == DAT_14caf9cd0 + 0x30 && (*(longlong **)(lVar8 + 0x448) != (longlong *)0x0)))) &&
       ((cVar6 = (**(code **)(**(longlong **)(lVar8 + 0x448) + 0x878))(), cVar6 != '\0' &&
        (plVar9 = *(longlong **)(lVar8 + 0x448), 0.0 < *(float *)(plVar9 + 800))))) {
      (**(code **)(*plVar9 + 0x730))(plVar9,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
LAB_144b3a678:
  lVar8 = param_1[0x39];
  if (lVar8 == 0) {
    pdVar7 = (double *)&DAT_14c8464e0;
    dVar10 = DAT_14c8464f0;
  }
  else {
    pdVar7 = (double *)(lVar8 + 0x260);
    dVar10 = *(double *)(lVar8 + 0x270);
  }
  fVar1 = *(float *)((longlong)param_1 + 0x39c);
  dVar2 = pdVar7[1];
  *param_2 = *pdVar7 + 0.0;
  param_2[1] = dVar2 + 0.0;
  param_2[2] = (double)fVar1 + dVar10;
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 144b3a8d4 FUN_144b3a8d4 body=501 status=ok
// SIG undefined FUN_144b3a8d4(void)

undefined8 FUN_144b3a8d4(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = param_1 + 0x784;
  if (*(code **)(param_1[0x784] + 0x10) == (code *)&LAB_1409caa5c) {
    if (((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
          (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
        ((plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0x75b4))))) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar5;
      }
      else {
        lVar3 = 0;
      }
      lVar3 = lVar3 + 0x110;
      goto LAB_144b3a95b;
    }
  }
  else {
    lVar3 = (**(code **)(param_1[0x784] + 0x10))(plVar6);
LAB_144b3a95b:
    if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x20) != 0)) &&
       (plVar5 = *(longlong **)(*(longlong *)(lVar3 + 0x20) + 0x3c0), plVar5 != (longlong *)0x0))
    goto LAB_144b3a979;
  }
  plVar5 = (longlong *)param_1[0x78];
  if (plVar5 != (longlong *)0x0) goto LAB_144b3a979;
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar3 = param_1[0x76];
    if (lVar3 == 0) {
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(*plVar6 + 0x18) == (code *)&LAB_144904684) {
          if (*(int *)((longlong)param_1 + 0x75b4) == 0) {
            return 0;
          }
          uVar1 = *(uint *)(param_1 + 0xeb6);
          if ((int)uVar1 < 0) {
            return 0;
          }
          if (DAT_14c9647dc <= (int)uVar1) {
            return 0;
          }
          plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (plVar6 == (longlong *)0x0) {
            return 0;
          }
          if ((int)plVar6[2] != *(int *)((longlong)param_1 + 0x75b4)) {
            return 0;
          }
          if ((*(uint *)(plVar6 + 1) & 0x10200000) != 0) {
            return 0;
          }
          if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
            lVar3 = *plVar6;
          }
          else {
            lVar3 = 0;
          }
          lVar3 = lVar3 + 0x110;
        }
        else {
          lVar3 = (**(code **)(*plVar6 + 0x18))(plVar6);
        }
        if (lVar3 == 0) {
          return 0;
        }
        lVar3 = *(longlong *)(lVar3 + 0x20);
      }
      else {
        lVar3 = (*pcVar2)(param_1);
      }
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = *(longlong *)(lVar3 + 0x3b0);
      goto LAB_144b3aa57;
    }
  }
  else {
    lVar3 = (*pcVar2)(param_1);
LAB_144b3aa57:
    if (lVar3 == 0) {
      return 0;
    }
  }
  if (((*(byte *)(lVar3 + 0x39a) & 8) != 0) ||
     ((plVar5 = (longlong *)param_1[0x78], plVar5 == (longlong *)0x0 &&
      (plVar5 = (longlong *)param_1[0x2d], plVar5 == (longlong *)0x0)))) {
    return 0;
  }
LAB_144b3a979:
                    /* WARNING: Could not recover jumptable at 0x000144b3a982. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar5 + 0x498))();
  return uVar4;
}



// FUNCTION 144b3aaca FUN_144b3aaca body=260 status=ok
// SIG undefined FUN_144b3aaca(void)

bool FUN_144b3aaca(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong *plVar3;
  longlong lVar4;
  
  pcVar2 = *(code **)(*(longlong *)(param_1 + -0x3b20) + 0x5e8);
  if (pcVar2 != FUN_140972dde) {
    lVar4 = (*pcVar2)(param_1 + -0x3b20);
    goto LAB_144b3ab7b;
  }
  lVar4 = *(longlong *)(param_1 + -0x3770);
  if (lVar4 != 0) goto LAB_144b3ab7b;
  pcVar2 = *(code **)(*(longlong *)(param_1 + -0x3b20) + 0x5f8);
  if (pcVar2 == FUN_144784df4) {
    pcVar2 = *(code **)(*(longlong *)(param_1 + 0x100) + 0x18);
    if (pcVar2 == (code *)&LAB_144904684) {
      if (*(int *)(param_1 + 0x3a94) != 0) {
        uVar1 = *(uint *)(param_1 + 0x3a90);
        lVar4 = 0;
        if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_144b3ab7b;
        plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar3 != (longlong *)0x0) &&
           (((int)plVar3[2] == *(int *)(param_1 + 0x3a94) &&
            ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar3;
          }
          else {
            lVar4 = 0;
          }
          lVar4 = lVar4 + 0x110;
          goto LAB_144b3ab9a;
        }
      }
    }
    else {
      lVar4 = (*pcVar2)(param_1 + 0x100);
LAB_144b3ab9a:
      if (lVar4 != 0) {
        lVar4 = *(longlong *)(lVar4 + 0x20);
        goto LAB_144b3aba3;
      }
    }
  }
  else {
    lVar4 = (*pcVar2)(param_1 + -0x3b20);
LAB_144b3aba3:
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x3b0);
      goto LAB_144b3ab7b;
    }
  }
  lVar4 = 0;
LAB_144b3ab7b:
  return lVar4 != 0;
}



// FUNCTION 144b3ad2a FUN_144b3ad2a body=2424 status=ok
// SIG undefined FUN_144b3ad2a(void)

float FUN_144b3ad2a(longlong param_1)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_f8 [32];
  uint local_d8;
  float local_d0;
  float local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  uint local_b0;
  float local_a8;
  float local_98;
  uint local_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = *(longlong *)(param_1 + 0x120);
  fVar19 = 1.0;
  fVar20 = 1.0;
  if (lVar5 != 0) {
    local_98 = (float)(byte)((*(byte *)(param_1 + 0x118) & 0xf) * '\n') / -100.0 + 1.0;
    iVar4 = *(int *)(lVar5 + 0xa8);
    if ((longlong)iVar4 < 2) {
      if (iVar4 == 0) {
        fVar17 = (float)(~-(uint)(*(float *)(lVar5 + 0x98) == 3.4028235e+38) &
                        (uint)*(float *)(lVar5 + 0x98));
        fVar20 = 0.0;
      }
      else {
        lVar13 = *(longlong *)(lVar5 + 0xa0);
        fVar20 = 0.0;
LAB_144b3b395:
        fVar17 = *(float *)(lVar13 + 8);
      }
    }
    else {
      lVar13 = *(longlong *)(lVar5 + 0xa0);
      fVar17 = *(float *)(lVar13 + 4);
      if (local_98 <= fVar17) {
        bVar3 = *(byte *)(lVar5 + 0x9c);
        fVar20 = 0.0;
        if (1 < bVar3 - 3) {
          lVar6 = (ulonglong)(iVar4 - 1) * 0x1c;
          fVar14 = *(float *)(lVar13 + 4 + lVar6);
          local_94 = 0;
          FUN_147a40fa2(fVar17,fVar14,&local_98);
          fVar20 = 0.0;
          if (bVar3 == 2) goto LAB_144b3b5b9;
          if (bVar3 == 1) {
            fVar20 = *(float *)(lVar13 + 8) - *(float *)(lVar13 + 8 + lVar6);
            goto LAB_144b3b156;
          }
        }
      }
      else {
        lVar6 = (ulonglong)(iVar4 - 1) * 0x1c;
        fVar14 = *(float *)(lVar13 + 4 + lVar6);
        fVar20 = 0.0;
        if ((fVar14 <= local_98) && (bVar3 = *(byte *)(lVar5 + 0x9d), 1 < bVar3 - 3)) {
          local_94 = 0;
          FUN_147a40fa2(fVar17,fVar14,&local_98);
          fVar20 = 0.0;
          if (bVar3 == 2) {
LAB_144b3b5b9:
            fVar20 = 0.0;
            if ((local_94 & 0x80000001) == 1) {
              local_98 = (fVar14 - local_98) + fVar17;
            }
          }
          else if (bVar3 == 1) {
            fVar20 = *(float *)(lVar13 + 8 + lVar6) - *(float *)(lVar13 + 8);
LAB_144b3b156:
            fVar20 = (float)(int)local_94 * fVar20;
          }
        }
      }
      if (local_98 < fVar17) {
        if ((*(char *)(lVar5 + 0x9c) != '\x03') ||
           (fVar14 = *(float *)(lVar13 + 0x20) - fVar17, ABS(fVar14) <= 1e-08)) goto LAB_144b3b395;
        fVar17 = (local_98 - fVar17) *
                 ((*(float *)(lVar13 + 0x24) - *(float *)(lVar13 + 8)) / fVar14) +
                 *(float *)(lVar13 + 8);
      }
      else {
        lVar6 = (longlong)iVar4 * 0x1c;
        fVar17 = *(float *)(lVar13 + -0x18 + lVar6);
        if (fVar17 < local_98) {
          lVar13 = lVar13 + lVar6;
          if ((*(char *)(lVar5 + 0x9d) != '\x03') ||
             (fVar14 = *(float *)(lVar13 + -0x34) - fVar17, ABS(fVar14) <= 1e-08)) {
            fVar17 = *(float *)(lVar13 + -0x14);
          }
          else {
            fVar17 = (local_98 - fVar17) *
                     ((*(float *)(lVar13 + -0x30) - *(float *)(lVar13 + -0x14)) / fVar14) +
                     *(float *)(lVar13 + -0x14);
          }
        }
        else {
          if (iVar4 == 2) {
            uVar9 = 1;
          }
          else {
            uVar12 = iVar4 - 2;
            uVar7 = 1;
            do {
              uVar10 = uVar12 >> 1;
              if (*(float *)(lVar13 + 4 + (ulonglong)(uVar10 + uVar7) * 0x1c) <= local_98) {
                uVar7 = uVar7 + uVar10 + 1;
                uVar10 = uVar12 + ~uVar10;
              }
              uVar12 = uVar10;
            } while (0 < (int)uVar12);
            uVar9 = (ulonglong)uVar7;
          }
          lVar5 = uVar9 * 0x1c;
          pcVar8 = (char *)(lVar13 + lVar5);
          fVar17 = *(float *)(lVar13 + -0x18 + lVar5);
          fVar14 = *(float *)(lVar13 + 4 + lVar5);
          fVar18 = fVar14 - fVar17;
          if (fVar18 <= 0.0) {
            fVar17 = *(float *)(pcVar8 + -0x14);
          }
          else {
            pcVar11 = (char *)(lVar13 + lVar5 + -0x1c);
            cVar2 = *pcVar11;
            if (cVar2 == '\x01') {
              if (local_98 < fVar14) {
                pcVar8 = pcVar11;
              }
              fVar17 = *(float *)(pcVar8 + 8);
            }
            else {
              fVar16 = (local_98 - fVar17) / fVar18;
              fVar17 = *(float *)(pcVar8 + -0x14);
              fVar1 = *(float *)(pcVar8 + 8);
              if (cVar2 == '\0') {
                fVar17 = fVar16 * (fVar1 - fVar17) + fVar17;
              }
              else {
                bVar3 = pcVar8[2];
                if (((byte)pcVar8[-0x1a] < 2) && ((bVar3 & 0xfd) == 0)) {
                  fVar14 = *(float *)(pcVar8 + -8) * fVar18 * 0.33333334 + fVar17;
                  fVar18 = fVar1 - fVar18 * *(float *)(pcVar8 + 0xc) * 0.33333334;
                  fVar15 = (fVar18 - fVar14) * fVar16 + fVar14;
                  fVar17 = (fVar14 - fVar17) * fVar16 + fVar17;
                  fVar17 = (fVar15 - fVar17) * fVar16 + fVar17;
                  fVar17 = (((((fVar1 - fVar18) * fVar16 + fVar18) - fVar15) * fVar16 + fVar15) -
                           fVar17) * fVar16 + fVar17;
                }
                else {
                  local_b8 = *(undefined4 *)(pcVar8 + 0x10);
                  local_c0 = *(undefined4 *)(pcVar8 + 0xc);
                  local_a8 = local_98;
                  local_d8 = (uint)(byte)pcVar8[-0x1a];
                  local_d0 = fVar1;
                  local_c8 = fVar14;
                  local_b0 = (uint)bVar3;
                  fVar17 = (float)FUN_147a3e1e7(fVar17,bVar3,*(undefined4 *)(pcVar8 + -8),
                                                *(undefined4 *)(pcVar8 + -4));
                }
              }
            }
          }
        }
      }
    }
    fVar20 = fVar20 + fVar17;
  }
  lVar5 = *(longlong *)(param_1 + 0x128);
  if (lVar5 == 0) goto LAB_144b3b03e;
  local_98 = (float)(byte)((*(byte *)(param_1 + 0x118) >> 4) * '\n') / -100.0 + 1.0;
  iVar4 = *(int *)(lVar5 + 0xa8);
  if ((longlong)iVar4 < 2) {
    if (iVar4 == 0) {
      fVar17 = (float)(~-(uint)(*(float *)(lVar5 + 0x98) == 3.4028235e+38) &
                      (uint)*(float *)(lVar5 + 0x98));
      fVar19 = 0.0;
    }
    else {
      lVar13 = *(longlong *)(lVar5 + 0xa0);
      fVar19 = 0.0;
LAB_144b3b3a9:
      fVar17 = *(float *)(lVar13 + 8);
    }
  }
  else {
    lVar13 = *(longlong *)(lVar5 + 0xa0);
    fVar17 = *(float *)(lVar13 + 4);
    if (local_98 <= fVar17) {
      bVar3 = *(byte *)(lVar5 + 0x9c);
      fVar19 = 0.0;
      if (1 < bVar3 - 3) {
        lVar6 = (ulonglong)(iVar4 - 1) * 0x1c;
        fVar14 = *(float *)(lVar13 + 4 + lVar6);
        local_94 = 0;
        FUN_147a40fa2(fVar17,fVar14,&local_98);
        fVar19 = 0.0;
        if (bVar3 == 2) goto LAB_144b3b5e3;
        if (bVar3 == 1) {
          fVar19 = *(float *)(lVar13 + 8) - *(float *)(lVar13 + 8 + lVar6);
          goto LAB_144b3b1c0;
        }
      }
    }
    else {
      lVar6 = (ulonglong)(iVar4 - 1) * 0x1c;
      fVar14 = *(float *)(lVar13 + 4 + lVar6);
      fVar19 = 0.0;
      if ((fVar14 <= local_98) && (bVar3 = *(byte *)(lVar5 + 0x9d), 1 < bVar3 - 3)) {
        local_94 = 0;
        FUN_147a40fa2(fVar17,fVar14,&local_98);
        fVar19 = 0.0;
        if (bVar3 == 2) {
LAB_144b3b5e3:
          fVar19 = 0.0;
          if ((local_94 & 0x80000001) == 1) {
            local_98 = (fVar14 - local_98) + fVar17;
          }
        }
        else if (bVar3 == 1) {
          fVar19 = *(float *)(lVar13 + 8 + lVar6) - *(float *)(lVar13 + 8);
LAB_144b3b1c0:
          fVar19 = (float)(int)local_94 * fVar19;
        }
      }
    }
    if (local_98 < fVar17) {
      if ((*(char *)(lVar5 + 0x9c) != '\x03') ||
         (fVar14 = *(float *)(lVar13 + 0x20) - fVar17, ABS(fVar14) <= 1e-08)) goto LAB_144b3b3a9;
      fVar17 = (local_98 - fVar17) * ((*(float *)(lVar13 + 0x24) - *(float *)(lVar13 + 8)) / fVar14)
               + *(float *)(lVar13 + 8);
    }
    else {
      lVar6 = (longlong)iVar4 * 0x1c;
      fVar17 = *(float *)(lVar13 + -0x18 + lVar6);
      if (fVar17 < local_98) {
        lVar13 = lVar13 + lVar6;
        if ((*(char *)(lVar5 + 0x9d) != '\x03') ||
           (fVar14 = *(float *)(lVar13 + -0x34) - fVar17, ABS(fVar14) <= 1e-08)) {
          fVar17 = *(float *)(lVar13 + -0x14);
        }
        else {
          fVar17 = (local_98 - fVar17) *
                   ((*(float *)(lVar13 + -0x30) - *(float *)(lVar13 + -0x14)) / fVar14) +
                   *(float *)(lVar13 + -0x14);
        }
      }
      else {
        if (iVar4 == 2) {
          uVar9 = 1;
        }
        else {
          uVar12 = iVar4 - 2;
          uVar7 = 1;
          do {
            uVar10 = uVar12 >> 1;
            if (*(float *)(lVar13 + 4 + (ulonglong)(uVar10 + uVar7) * 0x1c) <= local_98) {
              uVar7 = uVar7 + uVar10 + 1;
              uVar10 = uVar12 + ~uVar10;
            }
            uVar12 = uVar10;
          } while (0 < (int)uVar12);
          uVar9 = (ulonglong)uVar7;
        }
        lVar5 = uVar9 * 0x1c;
        pcVar8 = (char *)(lVar13 + lVar5);
        fVar17 = *(float *)(lVar13 + -0x18 + lVar5);
        fVar14 = *(float *)(lVar13 + 4 + lVar5);
        fVar18 = fVar14 - fVar17;
        if (fVar18 <= 0.0) {
          fVar17 = *(float *)(pcVar8 + -0x14);
        }
        else {
          pcVar11 = (char *)(lVar13 + lVar5 + -0x1c);
          cVar2 = *pcVar11;
          if (cVar2 == '\x01') {
            if (local_98 < fVar14) {
              pcVar8 = pcVar11;
            }
            fVar17 = *(float *)(pcVar8 + 8);
          }
          else {
            fVar16 = (local_98 - fVar17) / fVar18;
            fVar17 = *(float *)(pcVar8 + -0x14);
            fVar1 = *(float *)(pcVar8 + 8);
            if (cVar2 == '\0') {
              fVar17 = fVar16 * (fVar1 - fVar17) + fVar17;
            }
            else {
              bVar3 = pcVar8[2];
              if (((byte)pcVar8[-0x1a] < 2) && ((bVar3 & 0xfd) == 0)) {
                fVar14 = *(float *)(pcVar8 + -8) * fVar18 * 0.33333334 + fVar17;
                fVar18 = fVar1 - fVar18 * *(float *)(pcVar8 + 0xc) * 0.33333334;
                fVar15 = (fVar18 - fVar14) * fVar16 + fVar14;
                fVar17 = (fVar14 - fVar17) * fVar16 + fVar17;
                fVar17 = (fVar15 - fVar17) * fVar16 + fVar17;
                fVar17 = (((((fVar1 - fVar18) * fVar16 + fVar18) - fVar15) * fVar16 + fVar15) -
                         fVar17) * fVar16 + fVar17;
              }
              else {
                local_b8 = *(undefined4 *)(pcVar8 + 0x10);
                local_c0 = *(undefined4 *)(pcVar8 + 0xc);
                local_a8 = local_98;
                local_d8 = (uint)(byte)pcVar8[-0x1a];
                local_d0 = fVar1;
                local_c8 = fVar14;
                local_b0 = (uint)bVar3;
                fVar17 = (float)FUN_147a3e1e7(fVar17,bVar3,*(undefined4 *)(pcVar8 + -8),
                                              *(undefined4 *)(pcVar8 + -4));
              }
            }
          }
        }
      }
    }
  }
  fVar19 = fVar19 + fVar17;
LAB_144b3b03e:
  fVar20 = ABS(fVar20);
  if (1.0 <= fVar20) {
    fVar20 = 1.0;
  }
  fVar17 = ABS(fVar19);
  if (fVar20 <= ABS(fVar19)) {
    fVar17 = fVar20;
  }
  if ((local_90 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return fVar17;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b3b6a4 FUN_144b3b6a4 body=657 status=ok
// SIG undefined FUN_144b3b6a4(void)

undefined8 FUN_144b3b6a4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(code **)(*(longlong *)(param_1 + -0x38) + 0x180) != FUN_14475ec7e) {
LAB_144b3b923:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  plVar3 = *(longlong **)(param_1 + -0x18);
  if (plVar3 != (longlong *)0x0) {
    if (*(code **)(*plVar3 + 0x180) != FUN_1447210f0) goto LAB_144b3b923;
    if ((((*(uint *)(plVar3 + 1) & 0x10) == 0) && (lVar6 = plVar3[4], lVar6 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar6 + 8))) {
      uVar1 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
        if (DAT_14cae8b20 == 0) {
          local_40 = &local_20;
          local_20 = (code *)&LAB_14355090c;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_147b8e16d;
          local_50 = (code *)&LAB_140810a38;
          local_58 = L"Engine";
          local_60 = 0x800000000;
          local_68 = 0x10000000;
          local_70 = 8;
          local_78 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar6 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_1468c5283;
          local_50 = FUN_142809da0;
          local_58 = L"Engine";
          local_60 = 0x400000000;
          local_68 = 0x10000000;
          local_70 = 8;
          local_78 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar4 = plVar3[4];
        if (lVar4 != 0) {
          iVar2 = *(int *)(lVar6 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
               (lVar7 = lVar4,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
               lVar6 + 0x30)) {
              lVar7 = 0;
            }
          } while ((lVar7 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
          if (lVar7 != 0) {
            uVar5 = *(undefined8 *)(lVar7 + 0xc0);
            goto LAB_144b3b7bd;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_144b3b7bd:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 144b3b94a FUN_144b3b94a body=657 status=ok
// SIG undefined FUN_144b3b94a(void)

undefined8 FUN_144b3b94a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(code **)(*(longlong *)(param_1 + -0x38) + 0x180) != FUN_14475ec7e) {
LAB_144b3bbc9:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  plVar3 = *(longlong **)(param_1 + -0x18);
  if (plVar3 != (longlong *)0x0) {
    if (*(code **)(*plVar3 + 0x180) != FUN_1447210f0) goto LAB_144b3bbc9;
    if ((((*(uint *)(plVar3 + 1) & 0x10) == 0) && (lVar6 = plVar3[4], lVar6 != 0)) &&
       (-1 < (short)*(undefined4 *)(lVar6 + 8))) {
      uVar1 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
        if (DAT_14cae8b20 == 0) {
          local_40 = &local_20;
          local_20 = (code *)&LAB_14355090c;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_147b8e16d;
          local_50 = (code *)&LAB_140810a38;
          local_58 = L"Engine";
          local_60 = 0x800000000;
          local_68 = 0x10000000;
          local_70 = 8;
          local_78 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar6 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_40 = &local_20;
          local_20 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_1468c5283;
          local_50 = FUN_142809da0;
          local_58 = L"Engine";
          local_60 = 0x400000000;
          local_68 = 0x10000000;
          local_70 = 8;
          local_78 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar4 = plVar3[4];
        if (lVar4 != 0) {
          iVar2 = *(int *)(lVar6 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
               (lVar7 = lVar4,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
               lVar6 + 0x30)) {
              lVar7 = 0;
            }
          } while ((lVar7 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
          if (lVar7 != 0) {
            uVar5 = *(undefined8 *)(lVar7 + 0xc0);
            goto LAB_144b3ba63;
          }
        }
      }
    }
  }
  uVar5 = 0;
LAB_144b3ba63:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 144b3bbf2 FUN_144b3bbf2 body=31 status=ok
// SIG undefined FUN_144b3bbf2(void)

undefined8 FUN_144b3bbf2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b3bc12 FUN_144b3bc12 body=475 status=ok
// SIG undefined FUN_144b3bc12(void)

void FUN_144b3bc12(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  uint uVar8;
  longlong *plVar9;
  undefined4 **ppuVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_78 [32];
  undefined4 *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_1 == 1) {
    iVar12 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar12 + 1;
    plVar9 = (longlong *)
             ((longlong)**(int **)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12 * 8) * 8 +
             *(longlong *)(param_1 + 0x48));
    pbVar7 = param_1 + 0x3c;
  }
  else {
    puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar2 = *puVar4;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
    uVar8 = uVar2 & 0x7fff;
    lVar5 = *(longlong *)(param_1 + 0x80);
    iVar12 = **(int **)(lVar5 + 0x20);
    lVar11 = 0;
    if (iVar12 <= (int)uVar8) {
      do {
        uVar8 = uVar8 - iVar12;
        iVar12 = (*(int **)(lVar5 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar12 <= (int)uVar8);
    }
    plVar9 = (longlong *)
             ((longlong)
              *(int *)(*(longlong *)(*(longlong *)(lVar5 + 0x18) + lVar11 * 8) +
                      (longlong)(int)uVar8) * 8 + *(longlong *)(lVar5 + 0x38));
    pbVar7 = (byte *)(lVar5 + 0x40);
    if ((*param_1 & 1) != 0) {
      pbVar7 = param_1 + 0x3c;
    }
  }
  if (0 < *(int *)pbVar7) {
    lVar5 = *plVar9;
    iVar12 = 0;
    do {
      lVar11 = 0;
      do {
        if ((&DAT_14cbe7adc)[lVar11] == '\x01') {
          if (*param_1 == 1) {
            iVar3 = *(int *)(param_1 + 0x30);
            bVar1 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3);
            *(int *)(param_1 + 0x30) = iVar3 + 1;
            ppuVar10 = (undefined4 **)
                       ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar1 * 4 +
                       *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8));
          }
          else {
            puVar4 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
            uVar2 = *puVar4;
            *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar4 + 1;
            uVar8 = uVar2 & 0x7fff;
            ppuVar10 = local_58;
            if (uVar8 != 0x7fff) {
              lVar6 = *(longlong *)(param_1 + 0x80);
              ppuVar10 = (undefined4 **)
                         ((ulonglong)(uVar8 * *(int *)(lVar6 + 0x80)) + *(longlong *)(lVar6 + 0x70)
                         + (longlong)*(int *)(lVar6 + 0x4c) * 4);
            }
          }
          *(undefined4 *)ppuVar10 =
               *(undefined4 *)(lVar5 + (longlong)*(int *)((longlong)&DAT_14cbe7ad8 + lVar11) * 4);
        }
        else {
          FUN_144a76cd4(local_58,param_1);
          *local_58[0] = *(undefined4 *)
                          (lVar5 + 0x30 + (longlong)*(int *)((longlong)&DAT_14cbe7ad8 + lVar11) * 4)
          ;
        }
        lVar11 = lVar11 + 0x40;
      } while (lVar11 != 0x180);
      iVar12 = iVar12 + 1;
      pbVar7 = (byte *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != 0) {
        pbVar7 = param_1 + 0x3c;
      }
    } while (iVar12 < *(int *)pbVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b3bdee FUN_144b3bdee body=724 status=ok
// SIG undefined FUN_144b3bdee(void)

void FUN_144b3bdee(int param_1,char *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  undefined1 auStack_38 [32];
  undefined4 *local_18;
  uint local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_2 == '\x01') {
    iVar9 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar9 + 1;
    piVar11 = *(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8);
    plVar8 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar5;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
    uVar10 = uVar3 & 0x7fff;
    lVar6 = *(longlong *)(param_2 + 0x80);
    iVar9 = **(int **)(lVar6 + 0x20);
    lVar12 = 0;
    if (iVar9 <= (int)uVar10) {
      do {
        uVar10 = uVar10 - iVar9;
        iVar9 = (*(int **)(lVar6 + 0x20))[lVar12 + 1];
        lVar12 = lVar12 + 1;
      } while (iVar9 <= (int)uVar10);
    }
    piVar11 = (int *)((longlong)(int)uVar10 +
                     *(longlong *)(*(longlong *)(lVar6 + 0x18) + lVar12 * 8));
    plVar8 = (longlong *)(lVar6 + 0x38);
  }
  lVar6 = *(longlong *)(*plVar8 + (longlong)*piVar11 * 8);
  lVar12 = (longlong)param_1;
  if ((&DAT_14cbe7adc)[lVar12 * 0x40] == '\x01') {
    if (*param_2 == '\x01') {
      iVar9 = *(int *)(param_2 + 0x30);
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
      local_10 = (uint)bVar2;
      *(int *)(param_2 + 0x30) = iVar9 + 1;
      local_18 = (undefined4 *)
                 ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
                 *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8));
    }
    else {
      puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
      uVar3 = *puVar5;
      *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
      uVar10 = uVar3 & 0x7fff;
      if (uVar10 == 0x7fff) {
        local_18 = &local_c;
        local_10 = 0;
      }
      else {
        lVar7 = *(longlong *)(param_2 + 0x80);
        local_10 = 1;
        local_18 = (undefined4 *)
                   ((ulonglong)(uVar10 * *(int *)(lVar7 + 0x80)) + *(longlong *)(lVar7 + 0x70) +
                   (longlong)*(int *)(lVar7 + 0x4c) * 4);
      }
    }
    piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar11 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar11) {
      uVar4 = *(undefined4 *)(lVar6 + (longlong)(int)(&DAT_14cbe7ad8)[lVar12 * 0x10] * 4);
      iVar9 = 0;
      do {
        puVar1 = local_18 + (int)local_10;
        *local_18 = uVar4;
        iVar9 = iVar9 + 1;
        piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar11 = (int *)(param_2 + 0x3c);
        }
        local_18 = puVar1;
      } while (iVar9 < *piVar11);
    }
  }
  else {
    if (*param_2 == '\x01') {
      iVar9 = *(int *)(param_2 + 0x30);
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar9);
      local_10 = (uint)bVar2;
      *(int *)(param_2 + 0x30) = iVar9 + 1;
      local_18 = (undefined4 *)
                 ((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar2 * 4 +
                 *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar9 * 8));
    }
    else {
      puVar5 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
      uVar3 = *puVar5;
      *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar5 + 1;
      uVar10 = uVar3 & 0x7fff;
      if (uVar10 == 0x7fff) {
        local_18 = &local_c;
        local_10 = 0;
      }
      else {
        lVar7 = *(longlong *)(param_2 + 0x80);
        local_10 = 1;
        local_18 = (undefined4 *)
                   ((ulonglong)(uVar10 * *(int *)(lVar7 + 0x80)) + *(longlong *)(lVar7 + 0x70) +
                   (longlong)*(int *)(lVar7 + 0x4c) * 4);
      }
    }
    piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar11 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar11) {
      uVar4 = *(undefined4 *)(lVar6 + 0x30 + (longlong)(int)(&DAT_14cbe7ad8)[lVar12 * 0x10] * 4);
      iVar9 = 0;
      do {
        puVar1 = local_18 + (int)local_10;
        *local_18 = uVar4;
        iVar9 = iVar9 + 1;
        piVar11 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar11 = (int *)(param_2 + 0x3c);
        }
        local_18 = puVar1;
      } while (iVar9 < *piVar11);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b3c0c4 FUN_144b3c0c4 body=2537 status=ok
// SIG undefined FUN_144b3c0c4(void)

void FUN_144b3c0c4(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

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
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
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
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float local_16c;
  
  lVar10 = *param_3;
  lVar11 = *param_4;
  fVar16 = tanf(*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x18));
  fVar1 = *(float *)(param_1 + 0x28);
  fVar33 = *(float *)(param_1 + 0x2c);
  fVar17 = sinf(*(float *)(param_1 + 0x30) * fVar33);
  fVar36 = *(float *)(param_1 + 0x34);
  fVar18 = powf(10.0,ABS(fVar1) * 0.05);
  fVar36 = (fVar18 / fVar17) * fVar36;
  fVar17 = *(float *)(param_1 + 0x34) / fVar17;
  local_16c = fVar17;
  if (fVar1 <= 0.0) {
    local_16c = fVar36;
  }
  fVar19 = tanf(fVar33 * *(float *)(param_1 + 0x24));
  fVar33 = *(float *)(param_1 + 0x38);
  fVar18 = *(float *)(param_1 + 0x3c);
  fVar20 = sinf(*(float *)(param_1 + 0x30) * fVar18);
  fVar22 = *(float *)(param_1 + 0x34);
  fVar21 = powf(10.0,ABS(fVar33) * 0.05);
  fVar22 = (fVar21 / fVar20) * fVar22;
  fVar20 = *(float *)(param_1 + 0x34) / fVar20;
  fVar21 = fVar20;
  if (fVar33 <= 0.0) {
    fVar21 = fVar22;
  }
  fVar23 = tanf(fVar18 * *(float *)(param_1 + 0x24));
  fVar18 = *(float *)(param_1 + 0x20);
  fVar2 = *(float *)(param_1 + 0x40);
  fVar28 = *(float *)(param_1 + 0x1048);
  fVar24 = powf(10.0,*(float *)(param_1 + 0x105c) * 0.05);
  fVar3 = *(float *)(param_1 + 0x20ac);
  fVar4 = *(float *)(param_1 + 0x20b0);
  fVar25 = powf(10.0,*(float *)(param_1 + 0x20b4) * 0.05);
  fVar26 = powf(10.0,*(float *)(param_1 + 0x20b8) * 0.05);
  fVar27 = powf(10.0,*(float *)(param_1 + 0x20dc) * 0.05);
  if (0 < (int)param_2) {
    fVar31 = (float)(~-(uint)(0.0 < fVar1) & (uint)fVar17 | (uint)fVar36 & -(uint)(0.0 < fVar1));
    fVar36 = 1.0 / fVar19;
    fVar38 = 1.0 / ((1.0 / fVar16 + 1.4142135) / fVar16 + 1.0);
    fVar17 = 1.0 / fVar23;
    fVar1 = (float)(~-(uint)(0.0 < fVar33) & (uint)fVar20 | (uint)fVar22 & -(uint)(0.0 < fVar33));
    fVar33 = fVar18 * fVar28 + -1.0;
    if (fVar33 <= 0.0) {
      fVar33 = 0.0;
    }
    if (960.0 <= fVar33) {
      fVar33 = 960.0;
    }
    fVar37 = -1.0 / (fVar16 * fVar16) + 1.0;
    fVar34 = -1.0 / (fVar19 * fVar19) + 1.0;
    fVar37 = fVar37 + fVar37;
    fVar32 = (1.0 / fVar16 + -1.4142135) / fVar16 + 1.0;
    fVar39 = (local_16c + fVar36) * fVar36 + 1.0;
    fVar40 = (fVar21 + fVar17) * fVar17 + 1.0;
    fVar35 = -1.0 / (fVar23 * fVar23) + 1.0;
    uVar12 = *(uint *)(param_1 + 0x44);
    iVar13 = *(int *)(param_1 + 0x14);
    uVar15 = 0;
    fVar16 = *(float *)(param_1 + 0x1070);
    fVar18 = *(float *)(param_1 + 0x1064);
    fVar22 = *(float *)(param_1 + 0x1050);
    fVar5 = *(float *)(param_1 + 0x1058);
    fVar19 = *(float *)(param_1 + 0xc);
    fVar20 = *(float *)(param_1 + 0x1068);
    fVar28 = *(float *)(param_1 + 0x1074);
    fVar6 = *(float *)(param_1 + 0x1080);
    fVar7 = *(float *)(param_1 + 0x107c);
    fVar8 = *(float *)(param_1 + 0x108c);
    fVar23 = *(float *)(param_1 + 0x1088);
    fVar30 = *(float *)(param_1 + 0x20a8);
    do {
      fVar9 = *(float *)(lVar10 + uVar15 * 4);
      *(float *)(param_1 + 8) = fVar9;
      *(undefined4 *)(param_1 + 0x10) = 1;
      fVar22 = fVar22 * -fVar2 + fVar9;
      *(float *)(param_1 + 0x48 + (ulonglong)(uVar12 & 0x3ff) * 4) = fVar22;
      *(undefined4 *)(param_1 + 0x104c) =
           *(undefined4 *)(param_1 + 0x48 + (ulonglong)(uVar12 - (int)fVar33 & 0x3ff) * 4);
      *(float *)(param_1 + 0x1054) = fVar22;
      fVar18 = fVar18 * (fVar35 + fVar35);
      fVar22 = ((fVar5 - fVar19) * fVar24 + fVar9) -
               (fVar20 * (1.0 - (fVar21 - fVar17) * fVar17) + fVar18) / fVar40;
      *(float *)(param_1 + 0x1060) = fVar22;
      fVar16 = fVar16 * (fVar34 + fVar34);
      fVar18 = (fVar20 * ((fVar17 - fVar1) * fVar17 + 1.0) +
               fVar22 * ((fVar1 + fVar17) * fVar17 + 1.0) + fVar18) / fVar40 -
               (fVar28 * ((fVar36 - local_16c) * fVar36 + 1.0) + fVar16) / fVar39;
      *(float *)(param_1 + 0x106c) = fVar18;
      fVar16 = (fVar32 * fVar6 + fVar37 * fVar7) * -fVar38 +
               (fVar28 * ((fVar36 - fVar31) * fVar36 + 1.0) +
               fVar18 * ((fVar31 + fVar36) * fVar36 + 1.0) + fVar16) / fVar39;
      *(float *)(param_1 + 0x1078) = fVar16;
      fVar16 = ((fVar7 + fVar7 + fVar16 + fVar6) - (fVar32 * fVar8 + fVar37 * fVar23)) * fVar38;
      *(float *)(param_1 + 0x1084) = fVar16;
      fVar16 = (fVar23 + fVar23 + fVar16 + fVar8) * fVar38;
      *(float *)(param_1 + 0x1090 + (ulonglong)(uVar12 & 0x3ff) * 4) = fVar30 * 0.8 - fVar16;
      fVar18 = 0.0;
      if (iVar13 == 1) {
        fVar18 = *(float *)(param_1 + 0x2098) + *(float *)(param_1 + 0x20a0);
      }
      auVar29 = roundss(ZEXT416(0),ZEXT416((uint)fVar18),9);
      fVar18 = fVar18 - auVar29._0_4_;
      *(float *)(param_1 + 0x209c) = fVar18;
      fVar18 = 1.0 - ABS(fVar18 + fVar18 + -1.0);
      fVar18 = ((fVar18 + fVar18 + -1.0) * 0.1 + 1.0) * *(float *)(param_1 + 0x2090);
      iVar14 = (int)fVar18;
      iVar13 = 0;
      if (0 < iVar14) {
        iVar13 = iVar14;
      }
      fVar22 = *(float *)(param_1 + 0x2094);
      fVar19 = (float)iVar13;
      if (fVar22 <= (float)iVar13) {
        fVar19 = fVar22;
      }
      if (iVar14 < 0) {
        iVar14 = -1;
      }
      auVar29 = roundss(ZEXT416(0),ZEXT416((uint)fVar18),9);
      fVar20 = (float)(iVar14 + 1);
      if (fVar22 <= (float)(iVar14 + 1)) {
        fVar20 = fVar22;
      }
      fVar18 = ((1.0 - fVar18) + auVar29._0_4_) *
               *(float *)(param_1 + 0x1090 + (ulonglong)(uVar12 - (int)fVar19 & 0x3ff) * 4) +
               (fVar18 - auVar29._0_4_) *
               *(float *)(param_1 + 0x1090 + (ulonglong)(uVar12 - (int)fVar20 & 0x3ff) * 4);
      *(float *)(param_1 + 0x20a4) = fVar18;
      fVar16 = fVar18 * fVar3 + fVar16;
      fVar22 = fVar25 * 256.0 * fVar16 + 1024.0;
      fVar18 = 0.0;
      if (0.0 <= fVar22) {
        fVar18 = fVar22;
      }
      fVar22 = 2047.0;
      if (fVar18 <= 2047.0) {
        fVar22 = fVar18;
      }
      fVar19 = (float)(&DAT_14cbf0340)[(int)fVar22] * fVar26 * fVar4 + fVar16 * (1.0 - fVar4) * 0.5;
      fVar18 = ABS(fVar19);
      fVar16 = *(float *)(param_1 + 0x20bc + (ulonglong)(*(float *)(param_1 + 0x20c8) < fVar18) * 4)
      ;
      fVar22 = (1.0 - fVar16) * fVar18 + *(float *)(param_1 + 0x20c8) * fVar16;
      *(float *)(param_1 + 0x20c4) = fVar22;
      fVar16 = *(float *)(param_1 + 0x20cc);
      fVar18 = *(float *)(param_1 + 0x20d0);
      if (fVar22 <= 1.1754944e-38) {
        fVar22 = 1.1754944e-38;
      }
      fVar20 = *(float *)(param_1 + 0x20d8);
      fVar22 = log10f(fVar22);
      fVar28 = fVar22 * 20.0 + 14.0;
      fVar22 = 0.0;
      if (0.0 <= fVar28) {
        fVar22 = fVar28;
      }
      fVar16 = fVar16 * fVar20 - fVar22 * fVar18;
      *(float *)(param_1 + 0x20d4) = fVar16;
      fVar16 = powf(10.0,fVar16 * 0.05);
      *(float *)(lVar11 + uVar15 * 4) = fVar16 * fVar19 * fVar27;
      fVar19 = *(float *)(param_1 + 8);
      *(float *)(param_1 + 0xc) = fVar19;
      iVar13 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x14) = iVar13;
      uVar12 = *(int *)(param_1 + 0x44) + 1;
      *(uint *)(param_1 + 0x44) = uVar12;
      fVar22 = *(float *)(param_1 + 0x104c);
      *(float *)(param_1 + 0x1050) = fVar22;
      fVar5 = *(float *)(param_1 + 0x1054);
      *(float *)(param_1 + 0x1058) = fVar5;
      fVar20 = *(float *)(param_1 + 0x1064);
      *(float *)(param_1 + 0x1068) = fVar20;
      fVar18 = *(float *)(param_1 + 0x1060);
      *(float *)(param_1 + 0x1064) = fVar18;
      fVar28 = *(float *)(param_1 + 0x1070);
      *(float *)(param_1 + 0x1074) = fVar28;
      fVar16 = *(float *)(param_1 + 0x106c);
      *(float *)(param_1 + 0x1070) = fVar16;
      fVar6 = *(float *)(param_1 + 0x107c);
      *(float *)(param_1 + 0x1080) = fVar6;
      fVar7 = *(float *)(param_1 + 0x1078);
      fVar23 = *(float *)(param_1 + 0x1084);
      *(float *)(param_1 + 0x107c) = fVar7;
      fVar8 = *(float *)(param_1 + 0x1088);
      *(float *)(param_1 + 0x108c) = fVar8;
      *(float *)(param_1 + 0x1088) = fVar23;
      *(undefined4 *)(param_1 + 0x20a0) = *(undefined4 *)(param_1 + 0x209c);
      fVar30 = *(float *)(param_1 + 0x20a4);
      *(float *)(param_1 + 0x20a8) = fVar30;
      *(undefined4 *)(param_1 + 0x20c8) = *(undefined4 *)(param_1 + 0x20c4);
      *(undefined4 *)(param_1 + 0x20d8) = *(undefined4 *)(param_1 + 0x20d4);
      uVar15 = uVar15 + 1;
    } while (param_2 != uVar15);
  }
  return;
}



// FUNCTION 144b3caae FUN_144b3caae body=312 status=ok
// SIG undefined FUN_144b3caae(void)

longlong FUN_144b3caae(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    puVar4 = *(undefined8 **)(param_2 + 8);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &DAT_14cc07c00;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60) {
        FUN_144b3d300(&DAT_14cc07c60);
        if (DAT_14cc07c60 == -1) {
          puVar4 = &DAT_14cc07c00;
          puVar2 = &DAT_14c846480;
          puVar3 = &DAT_14cc07c00;
          for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 8);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    puVar4 = *(undefined8 **)(param_2 + 0x18);
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &DAT_14cc07c00;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cc07c60) {
        FUN_144b3d300(&DAT_14cc07c60);
        if (DAT_14cc07c60 == -1) {
          puVar4 = &DAT_14cc07c00;
          puVar2 = &DAT_14c846480;
          puVar3 = &DAT_14cc07c00;
          for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          _Init_thread_footer(&DAT_14cc07c60);
        }
      }
    }
    puVar2 = *(undefined8 **)(param_1 + 0x18);
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return param_1;
}



// FUNCTION 144b3cbe6 FUN_144b3cbe6 body=127 status=ok
// SIG undefined FUN_144b3cbe6(void)

undefined8 * FUN_144b3cbe6(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = &DAT_14cc07c00;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc07c60) {
      FUN_144b3d300(&DAT_14cc07c60);
      if (DAT_14cc07c60 == -1) {
        puVar2 = &DAT_14cc07c00;
        puVar3 = &DAT_14c846480;
        puVar4 = &DAT_14cc07c00;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        _Init_thread_footer(&DAT_14cc07c60);
      }
    }
  }
  return puVar2;
}



// FUNCTION 144b3cc66 FUN_144b3cc66 body=101 status=ok
// SIG undefined FUN_144b3cc66(void)

void FUN_144b3cc66(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_2 + 0x78);
  if (iVar3 != 0) {
    iVar4 = 0;
    do {
      puVar5 = (undefined8 *)
               ((ulonglong)*(ushort *)(*(longlong *)(param_2 + 0x70) + (longlong)iVar4 * 4) +
               param_1);
      if (puVar5 != (undefined8 *)0x0) {
        *puVar5 = 0;
        *(undefined1 *)(puVar5 + 1) = 1;
        *(undefined4 *)((longlong)puVar5 + 9) = 0;
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
  }
  if (param_2 != 0) {
    LOCK();
    puVar1 = (uint *)(param_2 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812(param_2);
      return;
    }
  }
  return;
}



// FUNCTION 144b3cccc FUN_144b3cccc body=1052 status=ok
// SIG undefined FUN_144b3cccc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_144b3cccc(float *param_1,undefined1 (*param_2) [16],float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar19;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar30;
  float fVar31;
  undefined1 auVar28 [16];
  float fVar32;
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_178 [32];
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  float local_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  float local_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined1 local_98 [16];
  ulonglong local_80;
  
  auVar11 = _DAT_149e1ef10;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  auVar15 = *(undefined1 (*) [16])(param_3 + 8);
  fVar1 = auVar15._0_4_;
  fVar3 = auVar15._4_4_;
  fVar5 = auVar15._8_4_;
  fVar6 = auVar15._12_4_;
  auVar38 = *(undefined1 (*) [16])(param_1 + 8);
  fVar2 = auVar38._0_4_;
  fVar4 = auVar38._4_4_;
  fVar7 = auVar38._12_4_;
  fVar13 = auVar38._8_4_;
  auVar15 = minps(auVar38,auVar15);
  auVar28._0_12_ = ZEXT812(0);
  auVar28._12_4_ = 0;
  auVar38._4_4_ = -(uint)(auVar15._4_4_ < 0.0);
  auVar38._0_4_ = -(uint)(auVar15._0_4_ < 0.0);
  auVar38._8_4_ = -(uint)(auVar15._8_4_ < 0.0);
  auVar38._12_4_ = -(uint)(auVar15._12_4_ < 0.0);
  iVar9 = movmskps((int)local_80,auVar38);
  if (iVar9 == 0) {
    fVar10 = *param_1;
    fVar12 = param_1[1];
    fVar20 = param_1[2];
    fVar8 = param_1[3];
    fVar19 = *param_3;
    fVar24 = param_3[1];
    fVar25 = param_3[2];
    fVar26 = param_3[3];
    fVar33 = param_1[4] * fVar1;
    fVar34 = param_1[5] * fVar3;
    fVar35 = param_1[6] * fVar5;
    fVar36 = param_1[7] * fVar6;
    fVar27 = fVar34 * fVar19 - fVar24 * fVar33;
    fVar30 = fVar35 * fVar24 - fVar25 * fVar34;
    fVar31 = fVar33 * fVar25 - fVar19 * fVar35;
    fVar32 = fVar36 * fVar26 - fVar26 * fVar36;
    fVar27 = fVar27 + fVar27;
    fVar30 = fVar30 + fVar30;
    fVar31 = fVar31 + fVar31;
    fVar32 = fVar32 + fVar32;
    auVar18._0_4_ =
         fVar25 * fVar12 * -1.0 + fVar24 * fVar20 * 1.0 + fVar19 * fVar8 * 1.0 + fVar10 * fVar26;
    auVar18._4_4_ =
         fVar25 * fVar10 * 1.0 + fVar24 * fVar8 * 1.0 + fVar19 * fVar20 * -1.0 + fVar12 * fVar26;
    auVar18._8_4_ =
         fVar25 * fVar8 * 1.0 + fVar24 * fVar10 * -1.0 + fVar19 * fVar12 * 1.0 + fVar20 * fVar26;
    auVar18._12_4_ =
         fVar25 * fVar20 * -1.0 + fVar24 * fVar12 * -1.0 + fVar19 * fVar10 * -1.0 + fVar8 * fVar26;
    auVar29._0_4_ = (fVar27 * fVar24 - fVar31 * fVar25) + fVar26 * fVar30 + fVar33 + param_3[4];
    auVar29._4_4_ = (fVar30 * fVar25 - fVar27 * fVar19) + fVar26 * fVar31 + fVar34 + param_3[5];
    auVar29._8_4_ = (fVar31 * fVar19 - fVar30 * fVar24) + fVar26 * fVar27 + fVar35 + param_3[6];
    auVar29._12_4_ = (fVar32 * fVar26 - fVar32 * fVar26) + fVar26 * fVar32 + fVar36 + param_3[7];
  }
  else {
    fVar10 = *param_3;
    fVar12 = param_3[1];
    fVar20 = param_3[2];
    fVar8 = param_3[3];
    fVar24 = fVar10 + fVar10;
    fVar25 = fVar12 + fVar12;
    fVar26 = fVar20 + fVar20;
    fVar19 = fVar8 * (fVar8 + fVar8);
    auVar22._0_4_ = ((float)DAT_149e1ef10 - (fVar20 * fVar26 + fVar12 * fVar25)) * fVar1;
    auVar22._4_4_ = (DAT_149e1ef10._4_4_ - (fVar20 * fVar26 + fVar10 * fVar24)) * fVar3;
    auVar22._8_4_ = (DAT_149e1ef10._8_4_ - (fVar12 * fVar25 + fVar10 * fVar24)) * fVar5;
    auVar22._12_4_ = (DAT_149e1ef10._12_4_ - (fVar19 + fVar19)) * fVar6;
    fVar20 = (fVar25 * fVar10 + fVar26 * fVar8) * fVar1;
    auVar37._4_4_ = (fVar26 * fVar12 + fVar24 * fVar8) * fVar3;
    auVar37._0_4_ = fVar20;
    local_e8 = (fVar26 * fVar10 + fVar25 * fVar8) * fVar5;
    local_f8 = (fVar25 * fVar10 - fVar26 * fVar8) * fVar3;
    fStack_e4 = (fVar26 * fVar12 - fVar24 * fVar8) * fVar5;
    auVar15 = blendps(auVar22,auVar28,8);
    auVar37._8_4_ = local_e8;
    auVar37._12_4_ = (fVar24 * fVar10 + fVar24 * fVar8) * fVar6;
    local_108._4_4_ = fVar20;
    local_108._0_4_ = auVar22._0_4_;
    local_108._8_4_ = (fVar26 * fVar10 - fVar25 * fVar8) * fVar1;
    local_108._12_4_ = 0;
    auVar38 = insertps(auVar37,auVar37,0x4c);
    uStack_f0 = auVar38._0_4_;
    uStack_ec = auVar38._8_4_;
    uStack_e0 = auVar15._8_4_;
    uStack_dc = auVar15._12_4_;
    auVar14._0_12_ = ZEXT812(0x3f800000);
    auVar14._12_4_ = 0;
    local_d8 = insertps(*(undefined1 (*) [16])(param_3 + 4),auVar14,0x30);
    fVar10 = *param_1;
    fVar12 = param_1[1];
    fVar20 = param_1[2];
    fVar8 = param_1[3];
    fVar24 = fVar10 + fVar10;
    fVar25 = fVar12 + fVar12;
    fVar26 = fVar20 + fVar20;
    fVar19 = fVar8 * (fVar8 + fVar8);
    auVar23._0_4_ = ((float)DAT_149e1ef10 - (fVar20 * fVar26 + fVar12 * fVar25)) * fVar2;
    auVar23._4_4_ = (DAT_149e1ef10._4_4_ - (fVar20 * fVar26 + fVar10 * fVar24)) * fVar4;
    auVar23._8_4_ = (DAT_149e1ef10._8_4_ - (fVar12 * fVar25 + fVar10 * fVar24)) * fVar13;
    auVar23._12_4_ = (DAT_149e1ef10._12_4_ - (fVar19 + fVar19)) * fVar7;
    fVar20 = (fVar25 * fVar10 + fVar26 * fVar8) * fVar2;
    auVar39._4_4_ = (fVar26 * fVar12 + fVar24 * fVar8) * fVar4;
    auVar39._0_4_ = fVar20;
    local_128 = (fVar26 * fVar10 + fVar25 * fVar8) * fVar13;
    auVar16._0_4_ = (fVar25 * fVar10 - fVar26 * fVar8) * fVar4;
    auVar16._4_4_ = (fVar26 * fVar12 - fVar24 * fVar8) * fVar13;
    auVar16._8_4_ = (fVar26 * fVar10 - fVar25 * fVar8) * fVar2;
    auVar16._12_4_ = (fVar24 * fVar10 - fVar24 * fVar8) * fVar7;
    auVar15 = blendps(auVar23,auVar28,8);
    auVar39._8_4_ = local_128;
    auVar39._12_4_ = (fVar24 * fVar10 + fVar24 * fVar8) * fVar7;
    local_148._4_4_ = fVar20;
    local_148._0_4_ = auVar23._0_4_;
    local_148._8_4_ = auVar16._8_4_;
    local_148._12_4_ = 0;
    auVar38 = insertps(auVar39,auVar39,0x4c);
    uStack_130 = auVar38._0_4_;
    uStack_12c = auVar38._8_4_;
    uStack_120 = auVar15._8_4_;
    uStack_11c = auVar15._12_4_;
    local_118 = insertps(*(undefined1 (*) [16])(param_1 + 4),auVar14,0x30);
    local_138 = auVar16._0_4_;
    fStack_134 = auVar23._4_4_;
    fStack_124 = auVar16._4_4_;
    fStack_f4 = auVar22._4_4_;
    FUN_144afeb32(&local_c8,local_148,auVar16._8_8_);
    FUN_144afd82e(&local_c8);
    auVar15._4_4_ = -(uint)(0.0 <= fVar3 * fVar4);
    auVar15._0_4_ = -(uint)(0.0 <= fVar1 * fVar2);
    auVar15._8_4_ = -(uint)(0.0 <= fVar5 * fVar13);
    auVar15._12_4_ = -(uint)(0.0 <= fVar6 * fVar7);
    auVar15 = blendvps(_DAT_149f63320,auVar11,auVar15);
    fVar10 = auVar15._0_4_;
    local_c0 = local_c0 * fVar10;
    local_c4 = local_c4 * fVar10;
    local_c8 = local_c8 * fVar10;
    fVar10 = auVar15._4_4_;
    local_b0 = local_b0 * fVar10;
    local_b4 = local_b4 * fVar10;
    local_b8 = fVar10 * local_b8;
    fVar10 = auVar15._8_4_;
    local_a0 = local_a0 * fVar10;
    local_a4 = local_a4 * fVar10;
    local_a8 = fVar10 * local_a8;
    FUN_14066c2ac(&local_158,&local_c8);
    fVar10 = local_158 * local_158 + fStack_154 * fStack_154;
    fVar12 = fStack_150 * fStack_150 + fStack_14c * fStack_14c;
    auVar17._0_4_ = fVar12 + fVar10;
    auVar17._4_4_ = fVar12 + fVar10;
    auVar17._8_4_ = fVar10 + fVar12;
    auVar17._12_4_ = fVar10 + fVar12;
    auVar11._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
    auVar11._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
    auVar11._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
    auVar11._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
    auVar15 = sqrtps(auVar17,auVar17);
    auVar15 = divps(_DAT_1499314a0,auVar15);
    auVar21._0_4_ = auVar15._0_4_ * local_158;
    auVar21._4_4_ = auVar15._4_4_ * fStack_154;
    auVar21._8_4_ = auVar15._8_4_ * fStack_150;
    auVar21._12_4_ = auVar15._12_4_ * fStack_14c;
    auVar18 = blendvps(_DAT_149932320,auVar21,auVar11);
    auVar29 = blendps(auVar28,local_98,7);
  }
  *param_2 = auVar18;
  param_2[1] = auVar29;
  *(float *)param_2[2] = fVar2 * fVar1;
  *(float *)(param_2[2] + 4) = fVar4 * fVar3;
  *(float *)(param_2[2] + 8) = fVar13 * fVar5;
  *(float *)(param_2[2] + 0xc) = fVar7 * fVar6;
  if ((local_80 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b3d0ea FUN_144b3d0ea body=358 status=ok
// SIG undefined FUN_144b3d0ea(void)

void FUN_144b3d0ea(longlong *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar7 = param_1[1];
  lVar13 = (longlong)*(int *)(*param_1 + 0x10) + (longlong)*param_2;
  fVar1 = *(float *)(*(longlong *)(lVar7 + 0x90) + lVar13 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    fVar1 = *(float *)param_1[2];
    fVar2 = *(float *)param_1[3];
    fVar3 = *(float *)param_1[4];
    lVar8 = *(longlong *)param_1[5];
    lVar11 = (longlong)*param_2 * 0xc;
    lVar9 = *(longlong *)param_1[6];
    lVar10 = *(longlong *)(lVar7 + 0xa8);
    lVar12 = lVar13 * 0x10;
    fVar14 = *(float *)(lVar10 + 8 + lVar12);
    fVar4 = *(float *)(lVar8 + 8 + lVar11);
    fVar15 = *(float *)(lVar10 + 4 + lVar12);
    fVar5 = *(float *)(lVar8 + 4 + lVar11);
    fVar16 = *(float *)(lVar10 + lVar12) -
             (*(float *)(lVar10 + lVar12) - *(float *)(lVar8 + lVar11)) * fVar1;
    *(float *)(lVar10 + lVar12) = fVar16;
    fVar15 = fVar15 - (fVar15 - fVar5) * fVar1;
    *(float *)(lVar10 + 4 + lVar12) = fVar15;
    fVar14 = fVar14 - (fVar14 - fVar4) * fVar1;
    *(float *)(lVar10 + 8 + lVar12) = fVar14;
    lVar7 = *(longlong *)(lVar7 + 0x28);
    fVar1 = *(float *)(lVar7 + 8 + lVar13 * 0xc);
    fVar4 = *(float *)(lVar7 + 4 + lVar13 * 0xc);
    fVar5 = *(float *)(lVar9 + 8 + lVar11);
    fVar6 = *(float *)(lVar9 + 4 + lVar11);
    *(float *)(lVar10 + lVar12) =
         fVar16 - ((fVar16 - *(float *)(lVar7 + lVar13 * 0xc)) - fVar3 * *(float *)(lVar9 + lVar11))
                  * fVar2;
    *(float *)(lVar10 + 4 + lVar12) = fVar15 - ((fVar15 - fVar4) - fVar6 * fVar3) * fVar2;
    *(float *)(lVar10 + 8 + lVar12) = fVar14 - ((fVar14 - fVar1) - fVar5 * fVar3) * fVar2;
  }
  return;
}



// FUNCTION 144b3d250 FUN_144b3d250 body=35 status=ok
// SIG undefined FUN_144b3d250(void)

void FUN_144b3d250(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      lVar1 = lVar1 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 144b3d27c atexit body=23 status=ok
// SIG int atexit(_func_5014 * param_1)

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// FUNCTION 144b3d294 _Init_thread_footer body=105 status=ok
// SIG undefined _Init_thread_footer(void)

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c7929c0);
  uVar1 = (ulonglong)_tls_index;
  DAT_14c7078f0 = DAT_14c7078f0 + 1;
  *param_1 = DAT_14c7078f0;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x110) = DAT_14c7078f0;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c7929c0);
                    /* WARNING: Could not recover jumptable at 0x000144b3d2f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable((PCONDITION_VARIABLE)&DAT_14c7929b8);
  return;
}



// FUNCTION 144b3d300 FUN_144b3d300 body=120 status=ok
// SIG undefined FUN_144b3d300(void)

void FUN_144b3d300(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c7929c0);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_144b3d365:
                    /* WARNING: Could not recover jumptable at 0x000144b3d371. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c7929c0);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) =
           DAT_14c7078f0;
      goto LAB_144b3d365;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_14c7929b8,(PSRWLOCK)&DAT_14c7929c0,0xffffffff,0);
  } while( true );
}



// FUNCTION 144b3d378 __tlregdtor body=152 status=ok
// SIG undefined __tlregdtor(void)

/* Library Function - Single Match
    __tlregdtor
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8 __tlregdtor(undefined8 param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  piVar2 = *(int **)(lVar1 + 0x120);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)(lVar1 + 0x130);
  }
  else {
    if (*piVar2 != 0x1e) goto LAB_144b3d3ee;
    piVar2 = malloc(0x100);
    free((void *)0x0);
    if (piVar2 == (int *)0x0) {
      return 0xffffffff;
    }
    *(undefined8 *)(piVar2 + 2) = *(undefined8 *)(lVar1 + 0x120);
  }
  *piVar2 = 0;
  *(int **)(lVar1 + 0x120) = piVar2;
LAB_144b3d3ee:
  *(undefined8 *)(piVar2 + (longlong)*piVar2 * 2 + 4) = param_1;
  *piVar2 = *piVar2 + 1;
  return 0;
}



// FUNCTION 144b3d410 FUN_144b3d410 body=11 status=ok
// SIG undefined FUN_144b3d410(void)

void FUN_144b3d410(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144b3d414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 8));
  return;
}



// FUNCTION 144b3d420 FUN_144b3d420 body=48 status=ok
// SIG undefined FUN_144b3d420(void)

undefined8 * FUN_144b3d420(undefined8 *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = DAT_14c783de0;
  *param_1 = *DAT_14c783de8;
  param_1[1] = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  return param_1;
}



// FUNCTION 144b3d450 FUN_144b3d450 body=17 status=ok
// SIG undefined FUN_144b3d450(void)

longlong * FUN_144b3d450(longlong *param_1)

{
  *param_1 = *(longlong *)(*param_1 + 0x598);
  return param_1;
}



// FUNCTION 144b3d470 FUN_144b3d470 body=5 status=ok
// SIG undefined FUN_144b3d470(void)

void FUN_144b3d470(void *param_1,void *param_2,size_t param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014992ce60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  memcpy(param_1,param_2,param_3);
  return;
}



// FUNCTION 144b3d480 FUN_144b3d480 body=8 status=ok
// SIG undefined FUN_144b3d480(void)

undefined * FUN_144b3d480(void)

{
  return &DAT_14c6e4728;
}



// FUNCTION 144b3d490 SetObjectObstructionAndOcclusion body=217 status=ok
// SIG AKRESULT SetObjectObstructionAndOcclusion(__uint64 param_1, __uint64 param_2, float param_3, float param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::SetObjectObstructionAndOcclusion(unsigned __int64,unsigned
   __int64,float,float) */

AKRESULT __cdecl
AK::SoundEngine::SetObjectObstructionAndOcclusion
          (__uint64 param_1,__uint64 param_2,float param_3,float param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  float fVar3;
  
                    /* 0x4b3d490  299
                       ?SetObjectObstructionAndOcclusion@SoundEngine@AK@@YA?AW4AKRESULT@@_K0MM@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if ((uint)ABS(param_3) < 0x7f800000) {
    if (0.0 <= param_3) {
      if (1.0 <= param_3) {
        param_3 = 1.0;
      }
    }
    else {
      param_3 = 0.0;
    }
    if ((uint)ABS(param_4) < 0x7f800000) {
      fVar3 = 0.0;
      if ((0.0 <= param_4) && (fVar3 = param_4, 1.0 <= param_4)) {
        fVar3 = 1.0;
      }
      uVar1 = FUN_145087f40();
      lVar2 = FUN_145080f50(DAT_14c790fd8,0x15,uVar1);
      *(float *)(lVar2 + 0x14) = param_3;
      *(float *)(lVar2 + 0x18) = fVar3;
      *(__uint64 *)(lVar2 + 4) = param_1;
      *(__uint64 *)(lVar2 + 0xc) = param_2;
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
      return 1;
    }
  }
  return 0x5f;
}



// FUNCTION 144b3d570 SetMultipleObstructionAndOcclusion body=358 status=ok
// SIG AKRESULT SetMultipleObstructionAndOcclusion(__uint64 param_1, __uint64 param_2, AkObstructionOcclusionValues * param_3, uint param_4)

/* enum AKRESULT __cdecl AK::SoundEngine::SetMultipleObstructionAndOcclusion(unsigned
   __int64,unsigned __int64,struct AkObstructionOcclusionValues * __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::SetMultipleObstructionAndOcclusion
          (__uint64 param_1,__uint64 param_2,AkObstructionOcclusionValues *param_3,uint param_4)

{
  ushort uVar1;
  uint uVar2;
  AKRESULT AVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  float fVar7;
  
                    /* 0x4b3d570  296
                       ?SetMultipleObstructionAndOcclusion@SoundEngine@AK@@YA?AW4AKRESULT@@_K0PEAUAkObstructionOcclusionValues@@I@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    AVar3 = 0x66;
  }
  else {
    uVar1 = FUN_145087e50();
    uVar2 = *(uint *)(DAT_14c790fd8 + 0x30);
    if (0xffff < uVar2) {
      uVar2 = 0xffff;
    }
    if (uVar2 < (uint)uVar1 + param_4 * 8) {
      FUN_145087e50();
      AVar3 = 0x1f;
    }
    else {
      uVar6 = 0;
      uVar1 = uVar6;
      if (param_4 != 0) {
        do {
          uVar5 = (ulonglong)uVar1;
          fVar7 = *(float *)(param_3 + uVar5 * 8 + 4);
          if (0x7f7fffff < (uint)ABS(fVar7)) {
            return 0x5f;
          }
          if (0.0 <= fVar7) {
            if (1.0 <= fVar7) {
              fVar7 = 1.0;
            }
          }
          else {
            fVar7 = 0.0;
          }
          *(float *)(param_3 + uVar5 * 8 + 4) = fVar7;
          fVar7 = *(float *)(param_3 + uVar5 * 8);
          if (0x7f7fffff < (uint)ABS(fVar7)) {
            return 0x5f;
          }
          if (0.0 <= fVar7) {
            if (1.0 <= fVar7) {
              fVar7 = 1.0;
            }
          }
          else {
            fVar7 = 0.0;
          }
          uVar1 = uVar1 + 1;
          *(float *)(param_3 + uVar5 * 8) = fVar7;
        } while (uVar1 < param_4);
      }
      lVar4 = FUN_145080f50(DAT_14c790fd8,0x16);
      if (lVar4 == 0) {
        AVar3 = 0x51;
      }
      else {
        *(__uint64 *)(lVar4 + 4) = param_1;
        *(__uint64 *)(lVar4 + 0xc) = param_2;
        *(uint *)(lVar4 + 0x14) = param_4;
        if (param_4 != 0) {
          do {
            uVar5 = (ulonglong)uVar6;
            uVar6 = uVar6 + 1;
            *(undefined8 *)(lVar4 + 0x18 + uVar5 * 8) = *(undefined8 *)(param_3 + uVar5 * 8);
          } while (uVar6 < param_4);
        }
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
        AVar3 = 1;
      }
    }
  }
  return AVar3;
}



// FUNCTION 144b3d6e0 SetGameObjectOutputBusVolume body=170 status=ok
// SIG AKRESULT SetGameObjectOutputBusVolume(__uint64 param_1, __uint64 param_2, float param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetGameObjectOutputBusVolume(unsigned __int64,unsigned
   __int64,float) */

AKRESULT __cdecl
AK::SoundEngine::SetGameObjectOutputBusVolume(__uint64 param_1,__uint64 param_2,float param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  float fVar3;
  
                    /* 0x4b3d6e0  285
                       ?SetGameObjectOutputBusVolume@SoundEngine@AK@@YA?AW4AKRESULT@@_K0M@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if ((uint)ABS(param_3) < 0x7f800000) {
    fVar3 = 0.0;
    if ((0.0 <= param_3) && (fVar3 = param_3, 16.0 <= param_3)) {
      fVar3 = 16.0;
    }
    uVar1 = FUN_145087f30();
    lVar2 = FUN_145080f50(DAT_14c790fd8,0x14,uVar1);
    *(float *)(lVar2 + 0x14) = fVar3;
    *(__uint64 *)(lVar2 + 4) = param_1;
    *(__uint64 *)(lVar2 + 0xc) = param_2;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
    return 1;
  }
  return 0x5f;
}



// FUNCTION 144b3d790 SetGameObjectAuxSendValues body=243 status=ok
// SIG AKRESULT SetGameObjectAuxSendValues(__uint64 param_1, AkAuxSendValue * param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetGameObjectAuxSendValues(unsigned __int64,struct
   AkAuxSendValue * __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::SetGameObjectAuxSendValues(__uint64 param_1,AkAuxSendValue *param_2,uint param_3)

{
  ushort uVar1;
  longlong lVar2;
  AkAuxSendValue *pAVar3;
  uint uVar4;
  float fVar5;
  
                    /* 0x4b3d790  284
                       ?SetGameObjectAuxSendValues@SoundEngine@AK@@YA?AW4AKRESULT@@_KPEAUAkAuxSendValue@@I@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar4 = 0;
  if (param_3 != 0) {
    pAVar3 = param_2 + 0xc;
    do {
      fVar5 = *(float *)pAVar3;
      if (0x7f7fffff < (uint)ABS(fVar5)) {
        return 0x5f;
      }
      if (0.0 <= fVar5) {
        if (16.0 <= fVar5) {
          fVar5 = 16.0;
        }
      }
      else {
        fVar5 = 0.0;
      }
      *(float *)pAVar3 = fVar5;
      uVar4 = uVar4 + 1;
      pAVar3 = pAVar3 + 0x10;
    } while (uVar4 < param_3);
  }
  uVar1 = FUN_145087f20();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0x13,(uint)uVar1 + (param_3 - 1) * 0x10);
  *(uint *)(lVar2 + 0xc) = param_3;
  *(__uint64 *)(lVar2 + 4) = param_1;
  memcpy((void *)(lVar2 + 0x10),param_2,(ulonglong)(param_3 << 4));
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144b3d890 SetPosition body=17 status=ok
// SIG AKRESULT SetPosition(__uint64 param_1, AkWorldTransform * param_2, AkSetPositionFlags param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetPosition(unsigned __int64,class AkWorldTransform const
   & __ptr64,enum AkSetPositionFlags) */

AKRESULT __cdecl
AK::SoundEngine::SetPosition(__uint64 param_1,AkWorldTransform *param_2,AkSetPositionFlags param_3)

{
  AKRESULT AVar1;
  
                    /* 0x4b3d890  305
                       ?SetPosition@SoundEngine@AK@@YA?AW4AKRESULT@@_KAEBVAkWorldTransform@@W4AkSetPositionFlags@@@Z
                        */
  if (0xffffffffffffffdf < param_1) {
    return 0x1f;
  }
  AVar1 = SetPositionInternal(param_1,param_2,param_3);
  return AVar1;
}



// FUNCTION 144b3d8b0 SetMultiplePositions body=37 status=ok
// SIG AKRESULT SetMultiplePositions(__uint64 param_1, AkChannelEmitter * param_2, ushort param_3, MultiPositionType param_4, AkSetPositionFlags param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::SetMultiplePositions(unsigned __int64,struct
   AkChannelEmitter const * __ptr64,unsigned short,enum AK::SoundEngine::MultiPositionType,enum
   AkSetPositionFlags) */

AKRESULT __cdecl
AK::SoundEngine::SetMultiplePositions
          (__uint64 param_1,AkChannelEmitter *param_2,ushort param_3,MultiPositionType param_4,
          AkSetPositionFlags param_5)

{
  AKRESULT AVar1;
  
                    /* 0x4b3d8b0  297
                       ?SetMultiplePositions@SoundEngine@AK@@YA?AW4AKRESULT@@_KPEBUAkChannelEmitter@@GW4MultiPositionType@12@W4AkSetPositionFlags@@@Z
                        */
  if (((byte)param_4 < 3) && ((param_3 == 0 || (param_2 != (AkChannelEmitter *)0x0)))) {
    AVar1 = FUN_144d4c5f0();
    return AVar1;
  }
  return 0x1f;
}



// FUNCTION 144b3d8e0 SetRTPCValue body=39 status=ok
// SIG AKRESULT SetRTPCValue(uint param_1, float param_2, __uint64 param_3, int param_4, AkCurveInterpolation param_5, bool param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::SetRTPCValue(unsigned int,float,unsigned __int64,int,enum
   AkCurveInterpolation,bool) */

AKRESULT __cdecl
AK::SoundEngine::SetRTPCValue
          (uint param_1,float param_2,__uint64 param_3,int param_4,AkCurveInterpolation param_5,
          bool param_6)

{
  AKRESULT AVar1;
  
                    /* 0x4b3d8e0  307
                       ?SetRTPCValue@SoundEngine@AK@@YA?AW4AKRESULT@@IM_KHW4AkCurveInterpolation@@_N@Z
                        */
  AVar1 = FUN_144d4caa0();
  return AVar1;
}



// FUNCTION 144b3d910 FUN_144b3d910 body=13 status=ok
// SIG undefined FUN_144b3d910(void)

void FUN_144b3d910(longlong param_1)

{
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144b3d920 FUN_144b3d920 body=17 status=ok
// SIG undefined FUN_144b3d920(void)

void FUN_144b3d920(undefined8 param_1)

{
  if (DAT_14c79294c != 0) {
    FUN_144d6ee70(param_1,0);
    return;
  }
  return;
}



// FUNCTION 144b3d940 FUN_144b3d940 body=22 status=ok
// SIG undefined FUN_144b3d940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b3d940(undefined8 *param_1)

{
  _DAT_14c792980 = *param_1;
  DAT_14c792988 = param_1[1];
  _DAT_14c792990 = param_1[2];
  _DAT_14c792998 = param_1[3];
  return;
}



// FUNCTION 144b3d960 FUN_144b3d960 body=81 status=ok
// SIG undefined FUN_144b3d960(void)

void FUN_144b3d960(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = FUN_144d6ec30();
  if (iVar1 != 0) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
    bVar2 = DAT_14c707870 == -1;
    DAT_14c707870 = DAT_14c707870 + 1;
    if (bVar2) {
      DAT_14c707870 = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x000144b3d9a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
    return;
  }
  return;
}



// FUNCTION 144b3d9c0 FUN_144b3d9c0 body=119 status=ok
// SIG undefined FUN_144b3d9c0(void)

void FUN_144b3d9c0(undefined8 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined8 local_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = param_3;
  if ((param_2 != 0) && (uVar1 = param_2, param_3 == 0)) {
    param_3 = param_2;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (param_3 == 0) {
    param_3 = 1;
  }
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  if (0xfffe < param_3) {
    param_3 = 0xffff;
  }
  local_24 = uVar1 << 6;
  local_20 = param_3 << 6;
  local_28 = 0;
  local_1c = 0;
  FUN_144b54c60(param_1,&local_28);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144b3da40 FUN_144b3da40 body=422 status=ok
// SIG undefined FUN_144b3da40(void)

int FUN_144b3da40(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,uint *param_5)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = 0;
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_5 == (uint *)0x0) {
    return 6;
  }
  lVar8 = *(longlong *)(param_1 + 0x90);
  param_5[0] = 0;
  param_5[1] = 0;
  pcVar2 = *(code **)(*(longlong *)(lVar8 + 0x18) + 0x80);
  if (pcVar2 != (code *)0x0) {
    iVar5 = (*pcVar2)();
    if ((iVar5 == 0) && (param_4 != 2)) {
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x1c) * (longlong)(int)*param_5;
      uVar6 = (uint)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
      *param_5 = uVar6;
      lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x20) * (longlong)(int)param_5[1];
      uVar9 = (uint)((ulonglong)(lVar8 + (lVar8 >> 0x3f) + 0x8000) >> 0x10);
      param_5[1] = uVar9;
      if (param_4 != 1) {
        iVar10 = 1;
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x80) + 0x18);
        if (uVar1 < 0x19) {
          lVar8 = (longlong)(int)uVar6;
          iVar11 = iVar10;
          if ((int)uVar6 < 0) {
            lVar8 = -lVar8;
            iVar11 = -1;
          }
          uVar7 = (ulonglong)uVar1 * lVar8 + 0xc;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = uVar7;
          lVar8 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar3,8);
          uVar6 = (uint)((uVar7 - lVar8 >> 1) + lVar8 >> 4);
          if (iVar11 < 0) {
            uVar6 = -uVar6;
          }
          *param_5 = uVar6;
        }
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x80) + 0x1a);
        if (uVar1 < 0x19) {
          lVar8 = (longlong)(int)uVar9;
          if ((int)uVar9 < 0) {
            lVar8 = -lVar8;
            iVar10 = -1;
          }
          uVar7 = (ulonglong)uVar1 * lVar8 + 0xc;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar7;
          lVar8 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar4,8);
          uVar6 = (uint)((uVar7 - lVar8 >> 1) + lVar8 >> 4);
          if (iVar10 < 0) {
            uVar6 = -uVar6;
          }
          param_5[1] = uVar6;
        }
        *param_5 = *param_5 + 0x20 & 0xffffffc0;
        param_5[1] = param_5[1] + 0x20 & 0xffffffc0;
      }
    }
  }
  return iVar5;
}



// FUNCTION 144b3dbf0 PrepareBank body=92 status=ok
// SIG AKRESULT PrepareBank(PreparationType param_1, uint param_2, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_3, void * param_4, AkBankContent param_5, uint param_6)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareBank(enum AK::SoundEngine::PreparationType,unsigned
   int,void (__cdecl*)(unsigned int,void const * __ptr64,enum AKRESULT,void * __ptr64),void *
   __ptr64,enum AK::SoundEngine::AkBankContent,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::PrepareBank
          (PreparationType param_1,uint param_2,_func_void_uint_void_ptr_AKRESULT_void_ptr *param_3,
          void *param_4,AkBankContent param_5,uint param_6)

{
  AKRESULT AVar1;
  undefined8 local_18;
  uint uStack_10;
  
                    /* 0x4b3dbf0  191
                       ?PrepareBank@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@IP6AXIPEBXW43@PEAX@Z3W4AkBankContent@12@I@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uStack_10 = uStack_10 & 0xffffff00;
  local_18 = 0;
  AVar1 = FUN_144d4d450(0,param_2,param_6,&local_18,param_3,param_4,param_5);
  return AVar1;
}



// FUNCTION 144b3dc50 FUN_144b3dc50 body=236 status=ok
// SIG undefined FUN_144b3dc50(void)

undefined8 FUN_144b3dc50(undefined4 param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  char *local_res18 [2];
  
  if (DAT_14c7929a8 == '\0') {
    return 0x80920005;
  }
  if (param_2 == (int *)0x0) {
    return 0x80920001;
  }
  iVar2 = FUN_1451684d0();
  if (iVar2 != 0) {
    return 0x809200ff;
  }
  iVar2 = FUN_14515b410(param_1,0);
  if (iVar2 < 0) {
    FUN_145168500();
    return 0x80920003;
  }
  iVar2 = FUN_14515b260(param_1,local_res18,0,1);
  if (iVar2 != 0) {
    FUN_145168500();
    return 0x80920003;
  }
  if (*local_res18[0] != '\0') {
    bVar1 = FUN_14515bd30(*(undefined2 *)(local_res18[0] + 2),*(undefined2 *)(local_res18[0] + 4));
    *param_2 = bVar1 + 1;
    FUN_145168500();
    return 0;
  }
  *param_2 = 0;
  FUN_145168500();
  return 0;
}



// FUNCTION 144b3dd40 FUN_144b3dd40 body=153 status=ok
// SIG undefined FUN_144b3dd40(void)

void FUN_144b3dd40(longlong param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_res8 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_res8[0] = *param_2;
  FUN_144c58020(*(undefined8 *)(param_1 + 0x20),local_res8,&local_18);
  fVar4 = fStack_14 * *(float *)(param_1 + 0x70) + local_18 * *(float *)(param_1 + 0x60) +
          fStack_10 * *(float *)(param_1 + 0x80);
  fVar5 = fStack_14 * *(float *)(param_1 + 0x74) + local_18 * *(float *)(param_1 + 100) +
          fStack_10 * *(float *)(param_1 + 0x84);
  fVar6 = fStack_14 * *(float *)(param_1 + 0x78) + local_18 * *(float *)(param_1 + 0x68) +
          fStack_10 * *(float *)(param_1 + 0x88);
  fVar1 = *(float *)(param_1 + 0x90);
  fVar2 = *(float *)(param_1 + 0x94);
  fVar3 = *(float *)(param_1 + 0x98);
  *param_3 = fVar4;
  param_3[1] = fVar5;
  param_3[2] = fVar6;
  param_3[3] = fStack_c - (fVar5 * fVar2 + fVar4 * fVar1 + fVar6 * fVar3);
  return;
}



// FUNCTION 144b3dde0 FUN_144b3dde0 body=1488 status=ok
// SIG undefined FUN_144b3dde0(void)

/* WARNING: Removing unreachable block (ram,0x000144b3de6b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b3dde0(longlong param_1,int *param_2,float *param_3,float *param_4)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [12];
  float fVar23;
  uint uVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar42;
  undefined1 auVar41 [12];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  undefined1 local_c8 [8];
  float fStack_c0;
  float fStack_bc;
  
  _local_c8 = *(undefined1 (*) [16])(param_1 + 0xc0);
  fVar34 = local_c8._0_4_;
  fVar35 = local_c8._4_4_;
  fVar36 = local_c8._8_4_;
  fVar37 = local_c8._12_4_;
  FUN_144b3fa50(&local_d8,param_1 + 0x60);
  auVar14._0_4_ = fVar34 * fVar34;
  auVar14._4_4_ = fVar35 * fVar35;
  auVar14._8_4_ = fVar36 * fVar36;
  auVar14._12_4_ = fVar37 * fVar37;
  fVar19 = auVar14._0_4_ + auVar14._4_4_;
  fVar20 = auVar14._0_4_ + auVar14._8_4_;
  auVar15._4_4_ = fVar19;
  auVar15._0_4_ = auVar14._0_4_ + auVar14._0_4_;
  auVar15._8_4_ = fVar20;
  auVar15._12_4_ = auVar14._0_4_ + auVar14._12_4_;
  auVar15 = sqrtps(auVar14,auVar15);
  auVar15 = divps(_DAT_14c6daca0,auVar15);
  uVar28 = ~-(uint)(fVar19 == 0.0) & auVar15._4_4_;
  uVar29 = ~-(uint)(fVar20 == 0.0) & auVar15._8_4_;
  uVar24 = -(uint)((int)fVar20 < (int)fVar19);
  uVar26 = -(uint)((int)fVar20 < (int)fVar19);
  uVar27 = -(uint)((int)fVar20 < (int)fVar19);
  auVar41._0_4_ = ~uVar24 & (uint)fVar36;
  auVar41._4_4_ = 0;
  auVar41._8_4_ = ~uVar27 & (uint)fVar34;
  auVar22._0_4_ = (uint)fVar35 & uVar24;
  auVar22._4_4_ = (uint)fVar34 & uVar26;
  auVar22._8_4_ = 0;
  auVar41 = auVar41 | auVar22;
  fVar19 = -auVar41._0_4_;
  fVar31 = auVar41._4_4_;
  fVar23 = auVar41._8_4_;
  fVar20 = (float)(~uVar24 & uVar29 | uVar28 & uVar24);
  fVar42 = (float)(~uVar26 & uVar29 | uVar28 & uVar26);
  fVar43 = (float)(~uVar27 & uVar29 | uVar28 & uVar27);
  fVar44 = fVar20 * fVar19;
  fVar45 = fVar42 * fVar31;
  fVar46 = fVar43 * fVar23;
  fVar20 = (fVar23 * fVar35 - fVar36 * fVar31) * fVar20;
  fVar42 = (fVar19 * fVar36 - fVar34 * fVar23) * fVar42;
  fVar43 = (fVar31 * fVar34 - fVar35 * fVar19) * fVar43;
  fVar19 = 0.0 - (fStack_d4 * fVar45 + local_d8 * fVar44 + fStack_d0 * fVar46);
  lVar2 = *(longlong *)(param_1 + 0x20);
  iVar12 = *param_2;
  lVar8 = (longlong)iVar12;
  fVar31 = 0.0 - (fStack_d4 * fVar42 + local_d8 * fVar20 + fStack_d0 * fVar43);
  if (iVar12 < *(int *)(lVar2 + 0x20)) {
    if (*(int *)(lVar2 + 0x98) != 0) {
      iVar12 = *(int *)(*(longlong *)(lVar2 + 0x90) + lVar8 * 4);
    }
    if (iVar12 == -1) {
      lVar9 = *(longlong *)(lVar2 + 0x18);
      lVar8 = lVar8 * 3;
    }
    else {
      lVar8 = (longlong)iVar12 * 3;
      lVar9 = *(longlong *)(lVar2 + 0xb0);
    }
  }
  else {
    lVar8 = (longlong)(iVar12 - *(int *)(lVar2 + 0x20)) * 3;
    lVar9 = *(longlong *)(lVar2 + 0xd0);
  }
  piVar1 = (int *)(lVar9 + lVar8 * 4);
  iVar10 = *(int *)(lVar9 + lVar8 * 4);
  iVar11 = *(short *)(lVar9 + 8 + lVar8 * 4) + iVar10;
  iVar12 = iVar11 + -1;
  if (iVar12 < *(int *)(lVar2 + 0x30)) {
    lVar8 = (longlong)iVar12;
    if (*(int *)(lVar2 + 0x78) != 0) {
      iVar12 = *(int *)(*(longlong *)(lVar2 + 0x70) + lVar8 * 4);
    }
    if (iVar12 == -1) {
      lVar9 = *(longlong *)(lVar2 + 0x28);
      lVar8 = lVar8 * 5;
    }
    else {
      lVar8 = (longlong)iVar12 * 5;
      lVar9 = *(longlong *)(lVar2 + 0xc0);
    }
  }
  else {
    lVar8 = (longlong)(iVar12 - *(int *)(lVar2 + 0x30)) * 5;
    lVar9 = *(longlong *)(lVar2 + 0xe0);
  }
  iVar12 = *(int *)(lVar9 + lVar8 * 4 + 4);
  if (iVar12 < *(int *)(lVar2 + 0x40)) {
    pfVar13 = (float *)((longlong)iVar12 * 0x10 + *(longlong *)(lVar2 + 0x38));
  }
  else {
    pfVar13 = (float *)((longlong)(iVar12 - *(int *)(lVar2 + 0x40)) * 0x10 +
                       *(longlong *)(lVar2 + 0xf0));
  }
  fVar23 = *pfVar13;
  fVar38 = pfVar13[1];
  fVar39 = pfVar13[2];
  fVar40 = pfVar13[3];
  fVar33 = 1.8446726e+19;
  fVar32 = fVar19 + fVar39 * fVar46 + fVar38 * fVar45 + fVar23 * fVar44;
  fVar17 = fVar31 + fVar39 * fVar43 + fVar38 * fVar42 + fVar23 * fVar20;
  bVar3 = 0.0 < fVar17;
  bVar4 = 0.0 < fVar32;
  iVar12 = 0;
  if (iVar10 < iVar11) {
    do {
      if (iVar10 < *(int *)(lVar2 + 0x30)) {
        iVar11 = iVar10;
        if (*(int *)(lVar2 + 0x78) != 0) {
          iVar11 = *(int *)(*(longlong *)(lVar2 + 0x70) + (longlong)iVar10 * 4);
        }
        if (iVar11 == -1) {
          lVar8 = *(longlong *)(lVar2 + 0x28);
          lVar9 = (longlong)iVar10 * 5;
        }
        else {
          lVar9 = (longlong)iVar11 * 5;
          lVar8 = *(longlong *)(lVar2 + 0xc0);
        }
      }
      else {
        lVar9 = (longlong)(iVar10 - *(int *)(lVar2 + 0x30)) * 5;
        lVar8 = *(longlong *)(lVar2 + 0xe0);
      }
      iVar11 = *(int *)(lVar8 + lVar9 * 4 + 4);
      if (iVar11 < *(int *)(lVar2 + 0x40)) {
        pfVar13 = (float *)((longlong)iVar11 * 0x10 + *(longlong *)(lVar2 + 0x38));
      }
      else {
        pfVar13 = (float *)((longlong)(iVar11 - *(int *)(lVar2 + 0x40)) * 0x10 +
                           *(longlong *)(lVar2 + 0xf0));
      }
      fVar34 = *pfVar13;
      fVar35 = pfVar13[1];
      fVar36 = pfVar13[2];
      fVar37 = pfVar13[3];
      fVar21 = fVar19 + fVar46 * fVar36 + fVar45 * fVar35 + fVar44 * fVar34;
      fVar25 = fVar31 + fVar43 * fVar36 + fVar42 * fVar35 + fVar20 * fVar34;
      fVar16 = fVar21 * fVar21 + fVar25 * fVar25;
      if (fVar16 < fVar33) {
        fVar33 = fVar16;
        local_e8 = fVar34;
        fStack_e4 = fVar35;
        fStack_e0 = fVar36;
        fStack_dc = fVar37;
      }
      fVar30 = fVar32 * fVar25 - fVar17 * fVar21;
      fVar16 = (fVar17 - fVar25) * (fVar17 - fVar25) + (fVar32 - fVar21) * (fVar32 - fVar21);
      if (fVar30 * fVar30 < fVar16 * fVar33) {
        fVar18 = fVar17 * (fVar25 - fVar17) + fVar32 * (fVar21 - fVar32);
        if ((fVar18 < 0.0) && (0.0 < fVar25 * (fVar25 - fVar17) + fVar21 * (fVar21 - fVar32))) {
          fVar17 = -fVar18 / fVar16;
          fVar33 = (fVar30 * fVar30) / fVar16;
          local_e8 = fVar17 * (fVar34 - fVar23) + fVar23;
          fStack_e4 = fVar17 * (fVar35 - fVar38) + fVar38;
          fStack_e0 = fVar17 * (fVar36 - fVar39) + fVar39;
          fStack_dc = fVar17 * (fVar37 - fVar40) + fVar40;
        }
      }
      bVar5 = 0.0 < fVar25;
      bVar6 = 0.0 < fVar21;
      if (bVar3) {
        if (!bVar5) {
          if (bVar4) {
            if (!bVar6) {
LAB_144b3e2b3:
              if (0.0 < fVar30) goto LAB_144b3e2bc;
            }
            iVar12 = iVar12 + -1;
          }
          else if (bVar6) goto LAB_144b3e2b3;
        }
      }
      else if (bVar5) {
        if (bVar4) {
          if (bVar6) {
            iVar12 = iVar12 + 1;
          }
          else {
LAB_144b3e295:
            if (0.0 < fVar30) {
              iVar12 = iVar12 + 1;
            }
          }
        }
        else if (bVar6) goto LAB_144b3e295;
      }
LAB_144b3e2bc:
      iVar10 = iVar10 + 1;
      fVar17 = fVar25;
      fVar32 = fVar21;
      fVar23 = fVar34;
      fVar38 = fVar35;
      fVar39 = fVar36;
      fVar40 = fVar37;
      bVar3 = bVar5;
      bVar4 = bVar6;
    } while (iVar10 < (int)(short)piVar1[2] + *piVar1);
    if (iVar12 != 0) {
      uVar7 = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_4 = *(undefined8 *)param_3;
      *(undefined8 *)(param_4 + 2) = uVar7;
      return;
    }
    fVar34 = (float)local_c8._0_4_;
    fVar35 = (float)local_c8._4_4_;
    fVar36 = fStack_c0;
    fVar37 = fStack_bc;
  }
  FUN_144bfa5a0(&local_e8,param_1 + 0x60,&local_e8);
  fVar19 = fVar34 * local_e8;
  fVar20 = fVar35 * fStack_e4;
  fVar42 = fVar36 * fStack_e0;
  fVar43 = fVar34 * *param_3;
  fVar31 = fVar35 * param_3[1];
  fVar23 = fVar36 * param_3[2];
  *param_4 = (local_e8 - (fVar20 + fVar19 + fVar42) * fVar34) + (fVar31 + fVar43 + fVar23) * fVar34;
  param_4[1] = (fStack_e4 - (fVar20 + fVar19 + fVar42) * fVar35) +
               (fVar31 + fVar43 + fVar23) * fVar35;
  param_4[2] = (fStack_e0 - (fVar20 + fVar19 + fVar42) * fVar36) +
               (fVar31 + fVar43 + fVar23) * fVar36;
  param_4[3] = (fStack_dc - (fVar20 + fVar19 + fVar42) * fVar37) +
               (fVar31 + fVar43 + fVar23) * fVar37;
  return;
}



// FUNCTION 144b3e3b0 FUN_144b3e3b0 body=8 status=ok
// SIG undefined FUN_144b3e3b0(void)

undefined8 FUN_144b3e3b0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// FUNCTION 144b3e3c0 FUN_144b3e3c0 body=577 status=ok
// SIG undefined FUN_144b3e3c0(void)

undefined4 FUN_144b3e3c0(longlong param_1,undefined8 *param_2,float *param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  char *local_68;
  char *local_60;
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
    local_68 = "TtResolveEdgePenetration";
    local_60 = "";
    FUN_144b3f370(lVar1,&local_68);
  }
  local_58 = *param_2;
  uStack_50 = param_2[1];
  fVar12 = *(float *)(param_2 + 3);
  if (*(int *)((longlong)param_2 + 0x44) < 0) {
    uVar4 = param_2[10];
  }
  else {
    local_68 = (char *)param_2[8];
    local_60 = (char *)CONCAT44(local_60._4_4_,*(undefined4 *)(param_2 + 9));
    uVar4 = FUN_144fe77a0(*(undefined8 *)(param_1 + 0x58),&local_68);
  }
  iVar2 = *(int *)((longlong)param_2 + 0x1c);
  uVar5 = 0;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      if ((*(float *)((longlong)param_2 + 0x14) < fVar12) || (fVar9 = fVar12, iVar6 == iVar2 + -1))
      {
        fVar9 = *(float *)((longlong)param_2 + 0x14);
      }
      local_48 = *(undefined4 *)(param_2 + 2);
      uStack_44 = local_48;
      uStack_40 = local_48;
      uStack_3c = local_48;
      iVar2 = FUN_144feef40(param_1,param_2 + 6,*(undefined4 *)(param_2 + 4),uVar4,param_2[0xb],
                            param_2[0xc],&local_58,&local_48,fVar12,fVar9,param_3,param_4);
      if (iVar2 != 0) {
        fVar9 = (*param_3 - (float)local_58) * (*param_3 - (float)local_58);
        fVar10 = (param_3[1] - local_58._4_4_) * (param_3[1] - local_58._4_4_);
        fVar11 = (param_3[2] - (float)uStack_50) * (param_3[2] - (float)uStack_50);
        auVar7._4_4_ = fVar9;
        auVar7._0_4_ = fVar9;
        auVar7._8_4_ = fVar9;
        auVar7._12_4_ = fVar9;
        auVar8._4_4_ = fVar10 + fVar9 + fVar11;
        auVar8._0_4_ = fVar10 + fVar9 + fVar11;
        auVar8._8_4_ = fVar10 + fVar9 + fVar11;
        auVar8._12_4_ = fVar10 + fVar9 + fVar11;
        auVar8 = sqrtps(auVar7,auVar8);
        if ((auVar8._0_4_ < fVar12) || (iVar6 == *(int *)((longlong)param_2 + 0x1c) + -1)) {
          uVar5 = 1;
          break;
        }
      }
      iVar2 = *(int *)((longlong)param_2 + 0x1c);
      fVar12 = fVar12 + fVar12;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
  }
  if (lVar1 != 0) {
    local_68 = "Et";
    local_60 = "";
    FUN_144b3f260(lVar1,&local_68);
  }
  return uVar5;
}



// FUNCTION 144b3e610 FUN_144b3e610 body=77 status=ok
// SIG undefined FUN_144b3e610(void)

uint FUN_144b3e610(float *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar6._0_4_ = -(uint)(((uint)*param_1 & 0x7f800000) == 0x7f800000);
  auVar6._4_4_ = -(uint)(((uint)param_1[1] & 0x7f800000) == 0x7f800000);
  auVar6._8_4_ = -(uint)(((uint)param_1[2] & 0x7f800000) == 0x7f800000);
  auVar6._12_4_ = -(uint)(((uint)param_1[3] & 0x7f800000) == 0x7f800000);
  bVar4 = SUB161(auVar6 >> 0x47,0) & 1;
  uVar5 = (uint)(ushort)((ushort)bVar4 << 8 | (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                         (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                         (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                         (ushort)((byte)(auVar6._12_4_ >> 7) & 1) << 0xc |
                         (ushort)((byte)(auVar6._12_4_ >> 0xf) & 1) << 0xd |
                         (ushort)((byte)(auVar6._12_4_ >> 0x17) & 1) << 0xe |
                        (ushort)(byte)(auVar6._12_4_ >> 0x1f) << 0xf);
  if (((SUB161(auVar6 >> 7,0) & 1) == 0 && (SUB161(auVar6 >> 0x27,0) & 1) == 0) && bVar4 == 0) {
    auVar7._0_4_ = -(uint)(((uint)param_1[4] & 0x7f800000) == 0x7f800000);
    auVar7._4_4_ = -(uint)(((uint)param_1[5] & 0x7f800000) == 0x7f800000);
    auVar7._8_4_ = -(uint)(((uint)param_1[6] & 0x7f800000) == 0x7f800000);
    auVar7._12_4_ = -(uint)(((uint)param_1[7] & 0x7f800000) == 0x7f800000);
    uVar2 = (ushort)(SUB161(auVar7 >> 7,0) & 1);
    uVar3 = (ushort)(SUB161(auVar7 >> 0x27,0) & 1);
    bVar4 = SUB161(auVar7 >> 0x47,0) & 1;
    uVar1 = uVar2 | (ushort)(SUB161(auVar7 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar7 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar7 >> 0x1f,0) & 1) << 3 | uVar3 << 4 |
            (ushort)(SUB161(auVar7 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar7 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar7 >> 0x3f,0) & 1) << 7 | (ushort)bVar4 << 8 |
            (ushort)(SUB161(auVar7 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar7 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar7 >> 0x5f,0) & 1) << 0xb |
            (ushort)((byte)(auVar7._12_4_ >> 7) & 1) << 0xc |
            (ushort)((byte)(auVar7._12_4_ >> 0xf) & 1) << 0xd |
            (ushort)((byte)(auVar7._12_4_ >> 0x17) & 1) << 0xe |
            (ushort)(byte)(auVar7._12_4_ >> 0x1f) << 0xf;
    uVar5 = (uint)uVar1;
    if ((uVar2 == 0 && uVar3 == 0) && bVar4 == 0) {
      auVar8._4_4_ = -(uint)(param_1[1] <= param_1[5]);
      auVar8._0_4_ = -(uint)(*param_1 <= param_1[4]);
      auVar8._8_4_ = -(uint)(param_1[2] <= param_1[6]);
      auVar8._12_4_ = -(uint)(param_1[3] <= param_1[7]);
      uVar5 = movmskps((uint)uVar1,auVar8);
      uVar5 = uVar5 & 7;
      if ((char)uVar5 == '\a') {
        return 1;
      }
    }
  }
  return uVar5 & 0xffffff00;
}



// FUNCTION 144b3e660 SendPluginCustomGameData body=317 status=ok
// SIG AKRESULT SendPluginCustomGameData(uint param_1, __uint64 param_2, AkPluginType param_3, uint param_4, uint param_5, void * param_6, uint param_7)

/* enum AKRESULT __cdecl AK::SoundEngine::SendPluginCustomGameData(unsigned int,unsigned
   __int64,enum AkPluginType,unsigned int,unsigned int,void const * __ptr64,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::SendPluginCustomGameData
          (uint param_1,__uint64 param_2,AkPluginType param_3,uint param_4,uint param_5,
          void *param_6,uint param_7)

{
  undefined2 uVar1;
  longlong lVar2;
  void *_Dst;
  AKRESULT AVar3;
  
                    /* 0x4b3e660  264
                       ?SendPluginCustomGameData@SoundEngine@AK@@YA?AW4AKRESULT@@I_KW4AkPluginType@@IIPEBXI@Z
                        */
  if (DAT_14c790ff4 != '\0') {
    AVar3 = 1;
    if (param_7 == 0) {
      uVar1 = FUN_1450880f0();
      lVar2 = FUN_145080f50(DAT_14c790fd8,0x37,uVar1);
      *(uint *)(lVar2 + 0x18) = param_5;
      *(undefined8 *)(lVar2 + 0x1c) = 0;
      *(undefined4 *)(lVar2 + 0x24) = 0;
      *(uint *)(lVar2 + 4) = param_1;
      *(__uint64 *)(lVar2 + 8) = param_2;
      *(char *)(lVar2 + 0x10) = (char)param_3;
      *(uint *)(lVar2 + 0x14) = param_4;
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
    }
    else {
      _Dst = MemoryMgr::Malloc(5,(ulonglong)param_7);
      if (_Dst == (void *)0x0) {
        AVar3 = 0x34;
      }
      else {
        uVar1 = FUN_1450880f0();
        lVar2 = FUN_145080f50(DAT_14c790fd8,0x37,uVar1);
        memcpy(_Dst,param_6,(ulonglong)param_7);
        *(uint *)(lVar2 + 4) = param_1;
        *(uint *)(lVar2 + 0x18) = param_5;
        *(__uint64 *)(lVar2 + 8) = param_2;
        *(char *)(lVar2 + 0x10) = (char)param_3;
        *(uint *)(lVar2 + 0x14) = param_4;
        *(void **)(lVar2 + 0x1c) = _Dst;
        *(uint *)(lVar2 + 0x24) = param_7;
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
      }
    }
    return AVar3;
  }
  return 0x66;
}



// FUNCTION 144b3e7a0 PrepareEvent body=57 status=ok
// SIG AKRESULT PrepareEvent(PreparationType param_1, uint * param_2, uint param_3, _func_void_uint_void_ptr_AKRESULT_void_ptr * param_4, void * param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::PrepareEvent(enum
   AK::SoundEngine::PreparationType,unsigned int * __ptr64,unsigned int,void (__cdecl*)(unsigned
   int,void const * __ptr64,enum AKRESULT,void * __ptr64),void * __ptr64) */

AKRESULT __cdecl
AK::SoundEngine::PrepareEvent
          (PreparationType param_1,uint *param_2,uint param_3,
          _func_void_uint_void_ptr_AKRESULT_void_ptr *param_4,void *param_5)

{
  AKRESULT AVar1;
  
                    /* 0x4b3e7a0  198
                       ?PrepareEvent@SoundEngine@AK@@YA?AW4AKRESULT@@W4PreparationType@12@PEAIIP6AXIPEBXW43@PEAX@Z4@Z
                        */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  AVar1 = FUN_144d4ce80(param_1,param_4,param_5,param_2,param_3,1);
  return AVar1;
}



// FUNCTION 144b3e7e0 FUN_144b3e7e0 body=111 status=ok
// SIG undefined FUN_144b3e7e0(void)

void FUN_144b3e7e0(longlong *param_1)

{
  char cVar1;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar1 = (**(code **)(*param_1 + 0x90))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x80))(param_1,&local_38,&local_28);
    (**(code **)(*param_1 + 0x88))(param_1,&local_18);
    param_1[6] = local_38;
    param_1[7] = lStack_30;
    param_1[8] = local_28;
    param_1[9] = lStack_20;
    *(undefined4 *)(param_1 + 0x16) = local_18;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uStack_14;
    *(undefined4 *)(param_1 + 0x17) = uStack_10;
    *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_1 + 0xbc);
  }
  return;
}



// FUNCTION 144b3e850 FUN_144b3e850 body=57 status=ok
// SIG undefined FUN_144b3e850(void)

undefined8 * FUN_144b3e850(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_144c6f5f0();
  *param_1 = hkaiPhysicsBodySilhouetteGeneratorBase::vftable;
  uVar1 = uRam000000014c6daccc;
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar1;
  return param_1;
}



// FUNCTION 144b3e890 FUN_144b3e890 body=61 status=ok
// SIG undefined FUN_144b3e890(void)

undefined8 * FUN_144b3e890(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkGeometry::vftable;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  return param_1;
}



// FUNCTION 144b3e8d0 FUN_144b3e8d0 body=98 status=ok
// SIG undefined FUN_144b3e8d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b3e8d0(undefined1 (*param_1) [16],int param_2,undefined1 (*param_3) [16])

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  uVar1 = uRam000000014c6dae88;
  *(ulonglong *)*param_3 = _DAT_14c6dae80;
  *(undefined8 *)(*param_3 + 8) = uVar1;
  auVar4._8_8_ = uRam000000014c6dae88;
  auVar4._0_8_ = _DAT_14c6dae80;
  auVar3._0_8_ = _DAT_14c6dae80 ^ 0x8000000080000000;
  auVar3._8_4_ = (uint)uRam000000014c6dae88 ^ 0x80000000;
  auVar3._12_4_ = (uint)((ulonglong)uRam000000014c6dae88 >> 0x20) ^ 0x80000000;
  param_3[1] = auVar3;
  if (0 < param_2) {
    lVar2 = (longlong)param_2;
    do {
      auVar4 = minps(auVar4,*param_1);
      *param_3 = auVar4;
      auVar3 = maxps(auVar3,*param_1);
      param_3[1] = auVar3;
      lVar2 = lVar2 + -1;
      param_1 = param_1 + 1;
    } while (lVar2 != 0);
    *(int *)*param_3 = auVar4._0_4_;
    *(int *)(*param_3 + 4) = auVar4._4_4_;
    *(int *)(*param_3 + 8) = auVar4._8_4_;
    *(undefined4 *)(*param_3 + 0xc) = 0;
    *(int *)param_3[1] = auVar3._0_4_;
    *(int *)(param_3[1] + 4) = auVar3._4_4_;
    *(int *)(param_3[1] + 8) = auVar3._8_4_;
    *(undefined4 *)(param_3[1] + 0xc) = 0;
  }
  return;
}



// FUNCTION 144b3e940 FUN_144b3e940 body=164 status=ok
// SIG undefined FUN_144b3e940(void)

void FUN_144b3e940(undefined8 *param_1)

{
  *param_1 = hkGeometry::vftable;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 4);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 4);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144b3e9f0 FUN_144b3e9f0 body=88 status=ok
// SIG undefined FUN_144b3e9f0(void)

undefined4 * FUN_144b3e9f0(undefined4 *param_1,char param_2)

{
  *param_1 = 0;
  MXCSR = MXCSR & 0xffff7fbf | -(uint)(param_2 != '\0') & 0x8000 | -(uint)(param_2 != '\0') & 0x40;
  return param_1;
}



// FUNCTION 144b3ea50 FUN_144b3ea50 body=121 status=ok
// SIG undefined FUN_144b3ea50(void)

void FUN_144b3ea50(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0xc;
  local_18 = 0x5000010;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_18);
  puVar2 = *(undefined8 **)(param_1 + 0x210);
  puVar1 = puVar2 + *(int *)(param_1 + 0x218);
  for (; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    (**(code **)(*(longlong *)*puVar2 + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x220) = 1;
  return;
}



// FUNCTION 144b3ead0 FUN_144b3ead0 body=298 status=ok
// SIG undefined FUN_144b3ead0(void)

void FUN_144b3ead0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 local_28;
  undefined4 local_24;
  longlong local_18;
  longlong lStack_10;
  
  *(undefined1 *)(param_1 + 0x220) = 0;
  local_24 = 0x13;
  local_28 = 0x5000010;
  lVar1 = 0;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_28);
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x140) + 0x40);
  if ((int)uVar4 < 1) {
    uVar2 = 0;
    uVar4 = 0x80000000;
  }
  else {
    lVar1 = (**(code **)(PTR_vftable_14c6e47c0 + 8))
                      (&PTR_vftable_14c6e47c0,(longlong)(int)uVar4 * 0x60);
    uVar2 = uVar4;
  }
  lVar3 = (longlong)(int)uVar2 * 0x60 + lVar1;
  local_18 = lVar1;
  lStack_10 = lVar3;
  FUN_144ca4fb0(*(undefined8 *)(param_1 + 0x140),&local_18);
  local_18 = lVar1;
  lStack_10 = lVar3;
  FUN_144fafd30(*(undefined8 *)(param_1 + 0x180),param_2,*(char *)(param_1 + 0x208) != '\0',
                &local_18);
  if ((-1 < (int)uVar4) && (lVar1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,lVar1,(ulonglong)(uVar4 & 0x7fffffff) * 0x60);
  }
  return;
}



// FUNCTION 144b3ec00 FUN_144b3ec00 body=18 status=ok
// SIG undefined FUN_144b3ec00(void)

void FUN_144b3ec00(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &DAT_14c6e4728;
  return;
}



// FUNCTION 144b3ec20 FUN_144b3ec20 body=482 status=ok
// SIG undefined FUN_144b3ec20(void)

undefined1 * FUN_144b3ec20(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  undefined1 local_228 [16];
  undefined1 local_218 [512];
  
  FUN_144c6d6a0(param_2);
  iVar6 = *(int *)(param_1 + 0x4b8);
  if (iVar6 != 0) {
    if (((iVar6 == 1) || (iVar6 == 2)) || (iVar6 == 3)) goto LAB_144b3edf1;
    FUN_144bde670(local_228,local_218,0x200);
    FUN_144be6160(local_228,"Unknown stepping mode");
    iVar6 = FUN_144bfc110(0xa612b2a,local_218,"World\\hkaiWorld_async.cpp",0x51);
    if (iVar6 != 0) {
      pcVar4 = (code *)swi(3);
      puVar7 = (undefined1 *)(*pcVar4)();
      return puVar7;
    }
    FUN_144bde6e0(local_228);
  }
  *param_2 = 1;
  plVar1 = (longlong *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(*(longlong *)(param_1 + 0x180) + 0x150);
  param_2[0x24] = 1;
  if (plVar1 != (longlong *)(param_1 + 0x158)) {
    iVar6 = *(int *)(param_1 + 0x160);
    lVar3 = *(longlong *)(param_1 + 0x158);
    if ((int)(*(uint *)(param_2 + 0x34) & 0x7fffffff) < iVar6) {
      FUN_140069f0e(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar6);
    }
    lVar10 = *plVar1;
    iVar5 = iVar6;
    if (*(int *)(param_2 + 0x30) < iVar6) {
      iVar5 = *(int *)(param_2 + 0x30);
    }
    if ((lVar10 != lVar3) && (lVar9 = (longlong)iVar5, 0 < iVar5)) {
      puVar8 = (undefined4 *)(lVar10 + 4);
      lVar10 = lVar3 - lVar10;
      do {
        puVar8[-1] = *(undefined4 *)(lVar10 + -4 + (longlong)puVar8);
        *puVar8 = *(undefined4 *)(lVar10 + (longlong)puVar8);
        puVar8[1] = *(undefined4 *)(lVar10 + 4 + (longlong)puVar8);
        puVar8[2] = *(undefined4 *)(lVar10 + 8 + (longlong)puVar8);
        puVar8 = puVar8 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    puVar8 = (undefined4 *)((longlong)iVar5 * 0x10 + lVar3);
    if (0 < iVar6 - iVar5) {
      uVar12 = (ulonglong)(uint)(iVar6 - iVar5);
      puVar11 = (undefined4 *)(*plVar1 + (longlong)iVar5 * 0x10);
      do {
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = *puVar8;
          puVar11[1] = puVar8[1];
          puVar11[2] = puVar8[2];
          puVar2 = puVar8 + 3;
          puVar8 = puVar8 + 4;
          puVar11[3] = *puVar2;
        }
        uVar12 = uVar12 - 1;
        puVar11 = puVar11 + 4;
      } while (uVar12 != 0);
    }
    *(int *)(param_2 + 0x30) = iVar6;
    FUN_140069e50(param_2 + 0x38,param_1 + 0x168);
  }
  param_2[0x48] = 1;
  *(undefined4 *)(param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x23c);
LAB_144b3edf1:
  param_2[0x58] = 1;
  return param_2;
}



// FUNCTION 144b3ee10 FUN_144b3ee10 body=966 status=ok
// SIG undefined FUN_144b3ee10(void)

void FUN_144b3ee10(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong local_res8;
  char *local_e8;
  char *local_e0;
  char *local_d8;
  char *local_d0;
  char *local_b8;
  char *local_b0;
  longlong local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [8];
  undefined1 local_88 [32];
  undefined1 local_68 [64];
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  cVar4 = *(char *)(lVar1 + 0x114);
  if (cVar4 == '\0') {
    __dyn_tls_on_demand_init();
    cVar4 = *(char *)(lVar1 + 0x114);
  }
  lVar3 = *(longlong *)(lVar1 + 0xf0);
  if (lVar3 == 0) {
    if (cVar4 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = FUN_144b3f4a0();
    *(longlong *)(lVar1 + 0xf0) = lVar3;
  }
  local_a8 = *(longlong *)(lVar3 + 0x3e0);
  if (local_a8 != 0) {
    local_e8 = "TtdoSynchronousProcessingRun";
    local_e0 = "";
    FUN_144b3f370(local_a8,&local_e8);
  }
  local_94 = 0x20;
  local_98 = 0x5000070;
  FUN_144c6d6a0(local_90);
  FUN_14475e23c(local_90,param_2);
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_98);
  FUN_144c2d020(param_1,&local_res8,param_2,0,param_4);
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
  lVar3 = *(longlong *)(lVar3 + 0x3e0);
  if (lVar3 != 0) {
    local_b8 = "TtInitialProcessing";
    local_b0 = "";
    FUN_144b3f370(lVar3,&local_b8);
  }
  FUN_144c2d050(param_1,&local_e8,local_res8);
  if ((local_e8 != (char *)0x0) &&
     ((**(code **)(*param_3 + 0x98))(param_3,local_e8,0), local_e8 != (char *)0x0)) {
    FUN_144b3f230();
  }
  if (lVar3 != 0) {
    local_b0 = "";
    local_b8 = "Et";
    FUN_144b3f260(lVar3,&local_b8);
  }
  while( true ) {
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
    lVar3 = *(longlong *)(lVar3 + 0x3e0);
    if (lVar3 != 0) {
      local_b8 = "TtPhases";
      local_b0 = "";
      FUN_144b3f370(lVar3,&local_b8);
    }
    FUN_144c2d070(param_1,&local_e8,local_res8);
    lVar2 = local_a8;
    if (local_e8 == (char *)0x0) break;
    (**(code **)(*param_3 + 0x98))(param_3,local_e8,0);
    if (local_e8 != (char *)0x0) {
      FUN_144b3f230();
    }
    if (lVar3 != 0) {
      local_d8 = "Et";
      local_d0 = "";
      FUN_144b3f260(lVar3,&local_d8);
    }
  }
  if (lVar3 != 0) {
    local_d8 = "Et";
    local_d0 = "";
    FUN_144b3f260(lVar3,&local_d8);
  }
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
    local_d8 = "TtFinalProcessing";
    local_d0 = "";
    FUN_144b3f370(lVar1,&local_d8);
  }
  FUN_144c2d090(param_1,&local_e8,local_res8);
  if (local_e8 != (char *)0x0) {
    FUN_144be4a80(&local_d8);
    FUN_144be50a0(&local_d8,local_e8,0);
    FUN_144be4aa0(&local_d8);
    if (local_e8 != (char *)0x0) {
      FUN_144b3f230();
    }
  }
  if (lVar1 != 0) {
    local_d8 = "Et";
    local_d0 = "";
    FUN_144b3f260(lVar1,&local_d8);
  }
  if (local_res8 != 0) {
    FUN_144b3f230();
  }
  FUN_144c2be80(local_68);
  FUN_144bf90d0(local_88);
  if (lVar2 != 0) {
    local_d8 = "Et";
    local_d0 = "";
    FUN_144b3f260(lVar2,&local_d8);
  }
  return;
}



// FUNCTION 144b3f1e0 FUN_144b3f1e0 body=8 status=ok
// SIG undefined FUN_144b3f1e0(void)

undefined8 FUN_144b3f1e0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



// FUNCTION 144b3f1f0 FUN_144b3f1f0 body=49 status=ok
// SIG undefined FUN_144b3f1f0(void)

longlong FUN_144b3f1f0(longlong param_1)

{
  byte bVar1;
  uint7 uVar2;
  undefined1 auVar3 [16];
  
  auVar3._0_4_ = -(uint)((*(uint *)(param_1 + 0x30) & 0x7f800000) == 0x7f800000);
  auVar3._4_4_ = -(uint)((*(uint *)(param_1 + 0x34) & 0x7f800000) == 0x7f800000);
  auVar3._8_4_ = -(uint)((*(uint *)(param_1 + 0x38) & 0x7f800000) == 0x7f800000);
  auVar3._12_4_ = -(uint)((*(uint *)(param_1 + 0x3c) & 0x7f800000) == 0x7f800000);
  bVar1 = SUB161(auVar3 >> 0x47,0) & 1;
  uVar2 = (uint7)(byte)(bVar1 | (byte)((ushort)((ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9) >> 8) |
                        (byte)((ushort)((ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10) >> 8) |
                        (byte)((ushort)((ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb) >> 8) |
                        (byte)((ushort)((ushort)((byte)(auVar3._12_4_ >> 7) & 1) << 0xc) >> 8) |
                        (byte)((ushort)((ushort)((byte)(auVar3._12_4_ >> 0xf) & 1) << 0xd) >> 8) |
                        (byte)((ushort)((ushort)((byte)(auVar3._12_4_ >> 0x17) & 1) << 0xe) >> 8) |
                       (byte)((ushort)((ushort)(byte)(auVar3._12_4_ >> 0x1f) << 0xf) >> 8));
  if ((((SUB161(auVar3 >> 7,0) & 1) == 0 && (SUB161(auVar3 >> 0x27,0) & 1) == 0) && bVar1 == 0) &&
     (0.0 < *(float *)(param_1 + 0x40))) {
    return CONCAT71(uVar2,1);
  }
  return (ulonglong)uVar2 << 8;
}



// FUNCTION 144b3f230 FUN_144b3f230 body=34 status=ok
// SIG undefined FUN_144b3f230(void)

void FUN_144b3f230(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_1[1] != 0) {
    LOCK();
    plVar1 = param_1 + 2;
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000144b3f24d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 144b3f260 FUN_144b3f260 body=259 status=ok
// SIG undefined FUN_144b3f260(void)

void FUN_144b3f260(longlong *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  lVar2 = *param_1;
  if ((((*(byte *)(lVar2 + 0x40) & 1) != 0) && (param_1[6] != 0)) &&
     (puVar6 = (undefined8 *)param_1[2], puVar6 != (undefined8 *)0x0)) {
    uVar5 = (longlong)puVar6 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar5) {
      cVar4 = FUN_144bea600(param_1,(int)uVar5 - (int)puVar6);
      if (cVar4 == '\0') goto LAB_144b3f2de;
      puVar6 = (undefined8 *)param_1[2];
      uVar5 = (longlong)puVar6 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar5;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = &DAT_149982548;
      puVar6[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
LAB_144b3f2de:
  puVar6 = (undefined8 *)param_1[2];
  if (puVar6 != (undefined8 *)0x0) {
    uVar5 = (longlong)puVar6 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar5) {
      cVar4 = FUN_144bea600(param_1,(int)uVar5 - (int)puVar6);
      if (cVar4 == '\0') goto LAB_144b3f335;
      puVar6 = (undefined8 *)param_1[2];
      uVar5 = (longlong)puVar6 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar5;
    if (puVar6 != (undefined8 *)0x0) {
      uVar3 = *param_2;
      *puVar6 = uVar3;
      uVar5 = rdtsc();
      puVar6[1] = CONCAT44((int)((ulonglong)uVar3 >> 0x20),(int)uVar5) | uVar5 & 0xffffffff00000000;
    }
  }
LAB_144b3f335:
  if (*(code **)(lVar2 + 0x20) != (code *)0x0) {
    (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x30));
  }
  piVar1 = (int *)((longlong)param_1 + 0x6c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    param_1[9] = param_1[2];
  }
  return;
}



// FUNCTION 144b3f370 FUN_144b3f370 body=303 status=ok
// SIG undefined FUN_144b3f370(void)

void FUN_144b3f370(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong local_18;
  longlong local_10;
  
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
    local_18 = *param_2 + 2;
    local_10 = param_2[1];
    (**(code **)(lVar1 + 0x18))
              (&local_18,*(undefined1 *)(*param_2 + 1),*(undefined8 *)(lVar1 + 0x30));
  }
  plVar6 = (longlong *)param_1[2];
  if (plVar6 == (longlong *)0x0) {
LAB_144b3f406:
    if (plVar6 != (longlong *)0x0) {
      lVar2 = *param_2;
      *plVar6 = lVar2;
      uVar4 = rdtsc();
      plVar6[1] = CONCAT44((int)((ulonglong)lVar2 >> 0x20),(int)uVar4) | uVar4 & 0xffffffff00000000;
    }
  }
  else {
    uVar4 = (longlong)plVar6 + 0x17U & 0xfffffffffffffff8;
    if (uVar4 < param_1[3] + 0x20U) {
LAB_144b3f402:
      param_1[2] = uVar4;
      goto LAB_144b3f406;
    }
    cVar3 = FUN_144bea600(param_1,(int)uVar4 - (int)plVar6);
    if (cVar3 != '\0') {
      plVar6 = (longlong *)param_1[2];
      uVar4 = (longlong)plVar6 + 0x17U & 0xfffffffffffffff8;
      goto LAB_144b3f402;
    }
  }
  if ((((*(byte *)(lVar1 + 0x40) & 1) != 0) && (param_1[6] != 0)) &&
     (puVar5 = (undefined8 *)param_1[2], puVar5 != (undefined8 *)0x0)) {
    uVar4 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
    if (param_1[3] + 0x20U <= uVar4) {
      cVar3 = FUN_144bea600(param_1,(int)uVar4 - (int)puVar5);
      if (cVar3 == '\0') goto LAB_144b3f491;
      puVar5 = (undefined8 *)param_1[2];
      uVar4 = (longlong)puVar5 + 0x17U & 0xfffffffffffffff8;
    }
    param_1[2] = uVar4;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = &DAT_149982548;
      puVar5[1] = *(undefined8 *)(param_1[6] + 8);
    }
  }
LAB_144b3f491:
  *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + 1;
  return;
}



// FUNCTION 144b3f4a0 FUN_144b3f4a0 body=960 status=ok
// SIG undefined FUN_144b3f4a0(void)

undefined8 * FUN_144b3f4a0(void)

{
  LPCRITICAL_SECTION p_Var1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *lpFlsData;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_res8;
  undefined8 local_res10;
  
  lVar3 = FUN_144b46fa0();
  p_Var1 = DAT_14c783de0;
  EnterCriticalSection(DAT_14c783de0);
  puVar6 = (undefined8 *)*DAT_14c783de8;
  while( true ) {
    if (puVar6 == (undefined8 *)0x0) {
      LeaveCriticalSection(p_Var1);
      local_res10 = 0x618;
      lpFlsData = (undefined8 *)(**(code **)(*DAT_14c783df8 + 8))(DAT_14c783df8,&local_res10);
      FlsSetValue(DAT_14c783dd0,lpFlsData);
      puVar6 = (undefined8 *)0x0;
      *(undefined8 **)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0) =
           lpFlsData;
      puVar7 = puVar6;
      if (lpFlsData != (undefined8 *)0x0) {
        *lpFlsData = 0;
        FUN_144f63570(lpFlsData + 1);
        lpFlsData[0x7b] = 0;
        lpFlsData[0x7c] = 0;
        memset(lpFlsData + 0x7d,0,0x100);
        lpFlsData[0x9d] = 0;
        lpFlsData[0x9e] = 0;
        lpFlsData[0x9f] = 0;
        lpFlsData[0xa0] = 0;
        lpFlsData[0xa1] = 0;
        lpFlsData[0xa2] = 0;
        lpFlsData[0xa3] = 0;
        lpFlsData[0xa4] = 0;
        lpFlsData[0xa5] = 0;
        lpFlsData[0xa6] = 0;
        lpFlsData[0xa7] = 0;
        lpFlsData[0xa8] = 0;
        lpFlsData[0xa9] = 0;
        lpFlsData[0xaa] = 0;
        lpFlsData[0xab] = 0;
        lpFlsData[0xac] = 0;
        lpFlsData[0xad] = 0;
        lpFlsData[0xae] = 0;
        lpFlsData[0xaf] = 0;
        *(undefined4 *)(lpFlsData + 0xb0) = 0;
        *(undefined2 *)((longlong)lpFlsData + 0x584) = 0;
        *(undefined4 *)(lpFlsData + 0xb1) = 0;
        lpFlsData[0xb2] = 0;
        lpFlsData[0xb3] = 0;
        lpFlsData[0xb4] = 0;
        lpFlsData[0xb5] = 0;
        lpFlsData[0xb6] = 0;
        lpFlsData[0xb7] = 0;
        lpFlsData[0xb8] = 0;
        lpFlsData[0xb9] = 0xffffffffffffffff;
        lpFlsData[0xba] = 0;
        lpFlsData[0xbb] = 0;
        FUN_144bea700(lpFlsData + 0xbc);
        *(undefined1 *)(lpFlsData + 0xc1) = 0;
        *(undefined4 *)((longlong)lpFlsData + 0x60c) = 0;
        lpFlsData[0xc2] = 0xffffffffffffffff;
        FUN_144b3e9f0(&local_res8,1);
        uVar4 = FUN_144b46fa0();
        lpFlsData[0xc2] = uVar4;
        uVar4 = FUN_144f64b10(DAT_14c783df8);
        lpFlsData[0x7b] = uVar4;
        lpFlsData[0x7c] = lpFlsData + 0xb4;
        p_Var1 = DAT_14c783de0;
        EnterCriticalSection(DAT_14c783de0);
        *DAT_14c783df0 = *DAT_14c783df0 + 1;
        if (*DAT_14c783df0 == 1) {
          FUN_144f64a80();
        }
        LeaveCriticalSection(p_Var1);
        puVar7 = lpFlsData;
      }
      p_Var1 = DAT_14c783de0;
      EnterCriticalSection(DAT_14c783de0);
      plVar2 = DAT_14c783de8;
      if (DAT_14c783de8[1] == 0) {
        DAT_14c783de8[1] = (longlong)puVar7;
        *plVar2 = (longlong)puVar7;
        puVar7[0xb2] = 0;
        puVar7[0xb3] = 0;
        puVar5 = DAT_14c783e20;
      }
      else {
        *(undefined8 **)(DAT_14c783de8[1] + 0x598) = puVar7;
        puVar7[0xb2] = plVar2[1];
        puVar7[0xb3] = 0;
        plVar2[1] = (longlong)puVar7;
        puVar5 = DAT_14c783e20;
      }
      for (; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)puVar5[1]) {
        (*(code *)*puVar5)(lpFlsData);
      }
      FUN_144bea410();
      if (DAT_14c783e00 != (code *)0x0) {
        (*DAT_14c783e00)(puVar7,DAT_14c783e10);
      }
      LeaveCriticalSection(p_Var1);
      lVar3 = puVar7[0x7a];
      local_res8 = 0x58;
      puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(puVar5,"LifoAllocator");
      }
      puVar8 = puVar6;
      if (puVar5 != (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x10);
        FUN_144be8120(puVar5,uVar4,uVar4,0xfd00);
        *puVar5 = hkMemory::LifoAllocator::vftable;
        puVar8 = puVar5;
      }
      local_res8 = 0x58;
      puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(puVar5,"LifoAllocator");
      }
      if (puVar5 != (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)(lVar3 + 0x28);
        FUN_144be8120(puVar5,uVar4,uVar4,0xfd00);
        *puVar5 = hkMemory::LifoAllocator::vftable;
        puVar6 = puVar5;
      }
      lVar3 = FUN_144f63780(puVar7 + 1);
      *(undefined8 **)(lVar3 + 0x10) = puVar8;
      *(undefined8 **)(lVar3 + 0x28) = puVar6;
      return lpFlsData;
    }
    if (puVar6[0xc2] == lVar3) break;
    puVar6 = (undefined8 *)puVar6[0xb3];
  }
  *(undefined8 **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xf0) = puVar6;
  LeaveCriticalSection(p_Var1);
  return puVar6;
}



// FUNCTION 144b3f860 FUN_144b3f860 body=16 status=ok
// SIG undefined FUN_144b3f860(void)

longlong FUN_144b3f860(longlong param_1,int param_2)

{
  return (longlong)param_2 * 0x90 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 144b3f870 FUN_144b3f870 body=411 status=ok
// SIG undefined FUN_144b3f870(void)

uint * FUN_144b3f870(uint *param_1,uint *param_2,longlong param_3,uint *param_4)

{
  short sVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  uint local_res8 [2];
  uint local_res18 [2];
  int local_res20 [2];
  int local_38 [4];
  
  uVar3 = *param_1;
  if (param_3 != 0) {
    local_res18[0] = uVar3 & 0x3fffff;
    uVar7 = (ulonglong)local_res18[0];
    lVar2 = *(longlong *)((ulonglong)(uVar3 >> 0x16) * 0x120 + *(longlong *)(param_3 + 0x38));
    FUN_144c42800(*(undefined8 *)(lVar2 + 0x20),local_res8,local_res18,local_res20,local_38);
    if ((char)local_res8[0] == '\0') {
      lVar2 = *(longlong *)(lVar2 + 0x20);
      if ((((*(int *)(lVar2 + 0x108) == 0) ||
           ((*(byte *)(uVar7 + *(longlong *)(lVar2 + 0x100)) & 1) == 0)) &&
          (*(int *)(*(longlong *)(lVar2 + 0x168) + uVar7 * 4) != -3)) && ((short)param_1[1] == -1))
      {
        uVar3 = *param_1;
        goto LAB_144b3f936;
      }
    }
    else if (((short)param_1[1] != -1) &&
            (uVar3 = (short)param_1[1] + local_res20[0], (int)uVar3 < local_38[0])) {
      uVar3 = *param_1 & 0xffc00000 | uVar3;
      goto LAB_144b3f936;
    }
    uVar3 = 0xffffffff;
  }
LAB_144b3f936:
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar3;
  }
  if (uVar3 != 0xffffffff) {
    uVar4 = uVar3 >> 0x16;
    lVar2 = *(longlong *)((ulonglong)uVar4 * 0x120 + *(longlong *)(param_3 + 0x38));
    if ((lVar2 != 0) && ((short)param_1[2] != -1)) {
      local_res8[0] = uVar3 & 0x3fffff;
      piVar5 = (int *)FUN_144c64f60(lVar2,local_res8);
      iVar6 = (int)(short)param_1[2];
      sVar1 = (short)piVar5[2];
      if ((short)param_1[2] < sVar1) {
        *param_2 = uVar4 << 0x16 | *piVar5 + iVar6;
        return param_2;
      }
      if (iVar6 < (int)*(short *)((longlong)piVar5 + 10) + (int)sVar1) {
        *param_2 = uVar4 << 0x16 | (piVar5[1] - (int)sVar1) + iVar6;
        return param_2;
      }
      if (param_4 != (uint *)0x0) {
        *param_4 = 0xffffffff;
      }
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 144b3fa10 FUN_144b3fa10 body=4 status=ok
// SIG undefined FUN_144b3fa10(void)

undefined4 FUN_144b3fa10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 144b3fa20 FUN_144b3fa20 body=45 status=ok
// SIG undefined FUN_144b3fa20(void)

undefined8 FUN_144b3fa20(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  FUN_144ca81d0(*(longlong *)(param_1 + 0x18) + 0x70 + (longlong)param_4 * 0x90);
  return param_2;
}



// FUNCTION 144b3fa50 FUN_144b3fa50 body=64 status=ok
// SIG undefined FUN_144b3fa50(void)

void FUN_144b3fa50(float *param_1,float *param_2,float *param_3)

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
  
  fVar7 = *param_3 - param_2[0xc];
  fVar8 = param_3[1] - param_2[0xd];
  fVar9 = param_3[2] - param_2[0xe];
  fVar1 = param_2[8];
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar10 = (param_3[3] - param_2[0xf]) * param_2[0xb];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  *param_1 = fVar8 * param_2[1] + fVar7 * *param_2 + fVar9 * param_2[2];
  param_1[1] = fVar8 * fVar5 + fVar7 * fVar4 + fVar9 * fVar6;
  param_1[2] = fVar8 * fVar2 + fVar7 * fVar1 + fVar9 * fVar3;
  param_1[3] = fVar10 + fVar8 * fVar2 + fVar10;
  return;
}



// FUNCTION 144b3fa90 FUN_144b3fa90 body=130 status=ok
// SIG undefined FUN_144b3fa90(void)

void FUN_144b3fa90(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
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
  FUN_144fe7010(param_1 + 0x48,*(undefined8 *)(lVar2 + 0x3e0));
  return;
}



// FUNCTION 144b3fb20 FUN_144b3fb20 body=181 status=ok
// SIG undefined FUN_144b3fb20(void)

undefined4 * FUN_144b3fb20(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  
  *param_1 = *(undefined4 *)(param_2 + 2);
  param_1[1] = *(undefined4 *)((longlong)param_2 + 0x14);
  param_1[2] = *(undefined4 *)(param_2 + 3);
  *(undefined8 *)(param_1 + 4) = param_2[4];
  *(undefined8 *)(param_1 + 6) = param_2[5];
  *(undefined8 *)(param_1 + 8) = *param_2;
  param_1[10] = *(undefined4 *)(param_2 + 1);
  param_1[0xb] = *(undefined4 *)((longlong)param_2 + 0xc);
  param_1[0xc] = *(undefined4 *)(param_2 + 7);
  *(undefined8 *)(param_1 + 0xe) = param_2[6];
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_144c47080(param_1 + 0x12);
  local_14 = param_1[1];
  if (-1 < local_14) {
    local_18 = *param_1;
    local_10 = param_1[2];
    uVar1 = FUN_144fe77a0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x58),&local_18);
    *(undefined8 *)(param_1 + 4) = uVar1;
    return param_1;
  }
  *(undefined8 *)(param_1 + 4) = param_2[4];
  return param_1;
}



// FUNCTION 144b3fbe0 FUN_144b3fbe0 body=56 status=ok
// SIG undefined FUN_144b3fbe0(void)

/* WARNING: Removing unreachable block (ram,0x000144c5a8e5) */
/* WARNING: Removing unreachable block (ram,0x000144c5a78f) */
/* WARNING: Removing unreachable block (ram,0x000144c5a785) */
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_144b3fbe0(longlong param_1,int param_2,char param_3,undefined8 param_4,longlong param_5,
             undefined8 param_6,float *param_7)

{
  undefined4 *puVar1;
  short sVar2;
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
  float *pfVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  uint *puVar20;
  float *******pppppppfVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  float *pfVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined4 *puVar29;
  uint uVar30;
  float *pfVar31;
  longlong lVar32;
  undefined8 *puVar33;
  int iVar34;
  int iVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  int iVar41;
  int iVar42;
  undefined1 *puVar43;
  uint uVar44;
  bool bVar45;
  bool bVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  uint auStackX_18 [2];
  uint uStack_154;
  uint auStack_150 [2];
  longlong lStack_148;
  float fStack_140;
  undefined4 uStack_13c;
  longlong *plStack_138;
  uint auStack_130 [2];
  float ******ppppppfStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float *******pppppppfStack_118;
  undefined4 uStack_110;
  float fStack_10c;
  float *******pppppppfStack_108;
  undefined8 uStack_100;
  float ******ppppppfStack_f8;
  undefined8 uStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  longlong lStack_d8;
  longlong lStack_d0;
  float *******pppppppfStack_c8;
  undefined8 uStack_c0;
  float ******ppppppfStack_b8;
  undefined8 uStack_b0;
  float *******pppppppfStack_a8;
  undefined8 uStack_a0;
  float ******ppppppfStack_98;
  undefined8 uStack_90;
  
  if (DAT_14c6e5890 < *(int *)(param_1 + 0x20)) {
    return 2;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0x18) + 0x80 + (longlong)param_2 * 0x90) & 0x10) == 0) {
    uVar19 = FUN_144c5a0f0();
    return uVar19;
  }
  lStack_d0 = (longlong)param_2;
  plStack_138 = (longlong *)(param_1 + 0x18);
  pfVar31 = (float *)(lStack_d0 * 0x90 + *plStack_138);
  fVar53 = *param_7 * *param_7;
  fVar3 = pfVar31[8];
  fVar4 = pfVar31[9];
  fVar5 = pfVar31[10];
  fStack_dc = pfVar31[0xb];
  pfVar26 = pfVar31 + 4;
  pfVar15 = pfVar31;
  if (param_3 == '\0') {
    pfVar26 = pfVar31;
    pfVar15 = pfVar31 + 4;
  }
  fVar7 = *pfVar15;
  fVar8 = pfVar15[1];
  lStack_148 = *(longlong *)pfVar15;
  fVar6 = pfVar15[2];
  fVar10 = *pfVar26;
  fVar11 = pfVar26[1];
  fVar9 = pfVar26[2];
  uStack_13c = 0;
  fStack_140 = fVar6;
  fStack_e8 = fVar3;
  fStack_e4 = fVar4;
  fStack_e0 = fVar5;
  puVar20 = (uint *)FUN_144b40820(auStackX_18,pfVar31,param_5,auStack_150);
  uVar25 = *puVar20;
  uVar36 = uVar25 & 0x3fffff;
  lStack_d8 = (ulonglong)(uVar25 >> 0x16) * 0x120;
  lVar32 = *(longlong *)(*(longlong *)(lStack_d8 + *(longlong *)(param_5 + 0x38)) + 0x20);
  if ((int)uVar36 < *(int *)(lVar32 + 0x30)) {
    uVar17 = uVar36;
    if (*(int *)(lVar32 + 0x78) != 0) {
      uVar17 = *(uint *)(*(longlong *)(lVar32 + 0x70) + (ulonglong)uVar36 * 4);
    }
    if (uVar17 == 0xffffffff) {
      lVar40 = *(longlong *)(lVar32 + 0x28);
      lVar23 = (ulonglong)uVar36 * 5;
    }
    else {
      lVar23 = (longlong)(int)uVar17 * 5;
      lVar40 = *(longlong *)(lVar32 + 0xc0);
    }
  }
  else {
    lVar23 = (longlong)(int)(uVar36 - *(int *)(lVar32 + 0x30)) * 5;
    lVar40 = *(longlong *)(lVar32 + 0xe0);
  }
  uVar17 = *(uint *)(lVar40 + lVar23 * 4 + 8);
  if ((*(byte *)(lVar40 + 0x10 + lVar23 * 4) & 0x40) == 0) {
    if (uVar17 == 0xffffffff) {
      return 2;
    }
    uVar17 = *(int *)(lVar32 + 0x17c) << 0x16 | uVar17 & 0x3fffff;
  }
  if (uVar17 != 0xffffffff) {
    auStackX_18[0] = uVar17 & 0x3fffff;
    FUN_144c2ead0(*(undefined8 *)
                   ((ulonglong)(uVar17 >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38)),auStackX_18
                  ,&pppppppfStack_118,&ppppppfStack_128);
    pppppppfStack_108 = pppppppfStack_118;
    uStack_100 = CONCAT44(fStack_10c,uStack_110);
    uVar17 = 0xffffffff;
    pppppppfVar21 = (float *******)&pppppppfStack_108;
    if (param_3 == '\0') {
      pppppppfVar21 = &ppppppfStack_f8;
    }
    ppppppfStack_f8 = ppppppfStack_128;
    uStack_f0 = CONCAT44(uStack_11c,uStack_120);
    fVar13 = *(float *)pppppppfVar21;
    fVar14 = *(float *)((longlong)pppppppfVar21 + 4);
    fVar12 = *(float *)(pppppppfVar21 + 1);
    FUN_144c5bd10(auStackX_18,
                  *(undefined8 *)
                   ((ulonglong)(auStack_150[0] >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38)),
                  auStack_150[0],&lStack_148,&fStack_e8,param_6,&pppppppfStack_118);
    uVar44 = auStack_150[0];
    if (((auStackX_18[0] != 0xffffffff) && (fStack_10c < fVar53)) &&
       (uVar17 = auStack_150[0] & 0xffc00000 | auStackX_18[0], uVar17 != 0xffffffff)) {
      uVar44 = auStackX_18[0] & 0x3fffff;
      lVar32 = *(longlong *)
                (*(longlong *)((ulonglong)(uVar17 >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38))
                + 0x20);
      if ((int)uVar44 < *(int *)(lVar32 + 0x30)) {
        uVar22 = (ulonglong)uVar44;
        if (*(int *)(lVar32 + 0x78) != 0) {
          uVar44 = *(uint *)(*(longlong *)(lVar32 + 0x70) + (ulonglong)uVar44 * 4);
        }
        if (uVar44 == 0xffffffff) {
          lVar40 = *(longlong *)(lVar32 + 0x28);
          lVar23 = uVar22 * 5;
        }
        else {
          lVar23 = (longlong)(int)uVar44 * 5;
          lVar40 = *(longlong *)(lVar32 + 0xc0);
        }
      }
      else {
        lVar23 = (longlong)(int)(uVar44 - *(int *)(lVar32 + 0x30)) * 5;
        lVar40 = *(longlong *)(lVar32 + 0xe0);
      }
      uVar44 = *(uint *)(lVar40 + lVar23 * 4 + 0xc);
      if (((*(byte *)(lVar40 + 0x10 + lVar23 * 4) & 0x40) == 0) && (uVar44 != 0xffffffff)) {
        uVar44 = *(int *)(lVar32 + 0x17c) << 0x16 | uVar44 & 0x3fffff;
      }
    }
    uVar30 = uVar44 & 0x3fffff;
    lVar32 = *(longlong *)
              (*(longlong *)((ulonglong)(uVar44 >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38)) +
              0x20);
    if ((int)uVar30 < *(int *)(lVar32 + 0x20)) {
      uVar22 = (ulonglong)uVar30;
      if (*(int *)(lVar32 + 0x98) != 0) {
        uVar30 = *(uint *)(*(longlong *)(lVar32 + 0x90) + (ulonglong)uVar30 * 4);
      }
      if (uVar30 == 0xffffffff) {
        lVar32 = *(longlong *)(lVar32 + 0x18);
        lVar40 = uVar22 * 3;
      }
      else {
        lVar40 = (longlong)(int)uVar30 * 3;
        lVar32 = *(longlong *)(lVar32 + 0xb0);
      }
    }
    else {
      lVar40 = (longlong)(int)(uVar30 - *(int *)(lVar32 + 0x20)) * 3;
      lVar32 = *(longlong *)(lVar32 + 0xd0);
    }
    ppppppfStack_128 = (float ******)(lVar32 + lVar40 * 4);
    uVar30 = 0xffffffff;
    param_7._0_4_ = 0;
    auStack_130[0] = uVar44;
    if (0 < *(short *)((longlong)ppppppfStack_128 + 10)) {
      do {
        if (uVar30 != 0xffffffff) goto LAB_144c5add7;
        uVar37 = *(int *)((longlong)ppppppfStack_128 + 4) + (int)param_7;
        uVar38 = uVar37 | uVar44 & 0xffc00000;
        uVar18 = uVar30;
        if (uVar38 != uVar25) {
          uVar37 = uVar37 & 0x3fffff;
          uVar22 = (ulonglong)uVar37;
          lStack_148 = (ulonglong)(uVar38 >> 0x16) * 0x120;
          lVar32 = *(longlong *)(*(longlong *)(lStack_148 + *(longlong *)(param_5 + 0x38)) + 0x20);
          if ((int)uVar37 < *(int *)(lVar32 + 0x30)) {
            uVar24 = uVar37;
            if (*(int *)(lVar32 + 0x78) != 0) {
              uVar24 = *(uint *)(*(longlong *)(lVar32 + 0x70) + uVar22 * 4);
            }
            if (uVar24 == 0xffffffff) {
              lVar32 = *(longlong *)(lVar32 + 0x28);
              lVar40 = uVar22 * 5;
            }
            else {
              lVar40 = (longlong)(int)uVar24 * 5;
              lVar32 = *(longlong *)(lVar32 + 0xc0);
            }
          }
          else {
            lVar40 = (longlong)(int)(uVar37 - *(int *)(lVar32 + 0x30)) * 5;
            lVar32 = *(longlong *)(lVar32 + 0xe0);
          }
          if (((*(int *)(lVar32 + 8 + lVar40 * 4) != -1) &&
              ((*(byte *)(lVar32 + lVar40 * 4 + 0x10) & 0x20) == 0)) &&
             (cVar16 = FUN_144c49370(param_6,uVar38,6), cVar16 != '\0')) {
            puVar43 = &DAT_149995410;
            uStack_154 = uVar37;
            do {
              auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,*puVar43);
              FUN_144c2ead0(*(undefined8 *)(*(longlong *)(param_5 + 0x38) + lStack_148),&uStack_154,
                            &pppppppfStack_c8,&ppppppfStack_b8);
              ppppppfStack_f8 = ppppppfStack_b8;
              uStack_f0 = uStack_b0;
              pppppppfStack_108 = pppppppfStack_c8;
              uStack_100 = uStack_c0;
              pppppppfVar21 = &ppppppfStack_f8;
              if ((byte)auStackX_18[0] == '\0') {
                pppppppfVar21 = (float *******)&pppppppfStack_108;
              }
              fVar50 = *(float *)pppppppfVar21 - fVar7;
              fVar51 = *(float *)((longlong)pppppppfVar21 + 4) - fVar8;
              fVar52 = *(float *)(pppppppfVar21 + 1) - fVar6;
              fVar47 = fVar50 * fVar3;
              fVar48 = fVar51 * fVar4;
              fVar49 = fVar52 * fVar5;
              fVar50 = fVar50 - (fVar48 + fVar47 + fVar49) * fVar3;
              fVar51 = fVar51 - (fVar48 + fVar47 + fVar49) * fVar4;
              fVar52 = fVar52 - (fVar48 + fVar47 + fVar49) * fVar5;
              if (fVar51 * fVar51 + fVar50 * fVar50 + fVar52 * fVar52 <= fVar53) {
                pppppppfStack_118 = (float *******)&pppppppfStack_108;
                if ((byte)auStackX_18[0] == '\0') {
                  pppppppfStack_118 = &ppppppfStack_f8;
                }
                if (0.0 <= (*(float *)((longlong)pppppppfStack_118 + 4) -
                           *(float *)((longlong)pppppppfVar21 + 4)) * (fVar8 - fVar11) +
                           (*(float *)pppppppfStack_118 - *(float *)pppppppfVar21) *
                           (fVar7 - fVar10) +
                           (*(float *)(pppppppfStack_118 + 1) - *(float *)(pppppppfVar21 + 1)) *
                           (fVar6 - fVar9)) {
                  lVar32 = *(longlong *)
                            (*(longlong *)(*(longlong *)(param_5 + 0x38) + lStack_148) + 0x20);
                  if ((int)uVar37 < *(int *)(lVar32 + 0x30)) {
                    uVar18 = uVar37;
                    if (*(int *)(lVar32 + 0x78) != 0) {
                      uVar18 = *(uint *)(*(longlong *)(lVar32 + 0x70) + uVar22 * 4);
                    }
                    if (uVar18 == 0xffffffff) {
                      lVar40 = *(longlong *)(lVar32 + 0x28);
                      lVar23 = uVar22 * 5;
                    }
                    else {
                      lVar23 = (longlong)(int)uVar18 * 5;
                      lVar40 = *(longlong *)(lVar32 + 0xc0);
                    }
                  }
                  else {
                    lVar23 = (longlong)(int)(uVar37 - *(int *)(lVar32 + 0x30)) * 5;
                    lVar40 = *(longlong *)(lVar32 + 0xe0);
                  }
                  uVar18 = *(uint *)(lVar40 + lVar23 * 4 + 8);
                  if ((*(byte *)(lVar40 + 0x10 + lVar23 * 4) & 0x40) == 0) {
                    if (uVar18 == 0xffffffff) goto LAB_144c5ad88;
                    uVar18 = *(int *)(lVar32 + 0x17c) << 0x16 | uVar18 & 0x3fffff;
                  }
                  if (uVar18 != 0xffffffff) {
                    auStackX_18[0] = uVar18 & 0x3fffff;
                    FUN_144c2ead0(*(undefined8 *)
                                   ((ulonglong)(uVar18 >> 0x16) * 0x120 +
                                   *(longlong *)(param_5 + 0x38)),auStackX_18,&pppppppfStack_a8,
                                  &ppppppfStack_98);
                    ppppppfStack_f8 = ppppppfStack_98;
                    uStack_f0 = uStack_90;
                    pppppppfStack_108 = pppppppfStack_a8;
                    uStack_100 = uStack_a0;
                    fVar51 = *(float *)((longlong)pppppppfStack_118 + 4) - fVar14;
                    fVar47 = fVar3 * (*(float *)pppppppfStack_118 - fVar13);
                    fVar48 = fVar4 * fVar51;
                    fVar49 = fVar5 * (*(float *)(pppppppfStack_118 + 1) - fVar12);
                    fVar50 = (*(float *)pppppppfStack_118 - fVar13) -
                             (fVar48 + fVar47 + fVar49) * fVar3;
                    fVar51 = fVar51 - (fVar48 + fVar47 + fVar49) * fVar4;
                    fVar47 = (*(float *)(pppppppfStack_118 + 1) - fVar12) -
                             (fVar48 + fVar47 + fVar49) * fVar5;
                    uVar18 = uVar38;
                    if (fVar51 * fVar51 + fVar50 * fVar50 + fVar47 * fVar47 < fVar53) break;
                  }
                }
              }
LAB_144c5ad88:
              puVar43 = puVar43 + 1;
              uVar18 = uVar30;
            } while (puVar43 != &DAT_149995412);
          }
        }
        uVar30 = uVar18;
        param_7._0_4_ = (int)param_7 + 1;
      } while ((int)param_7 < *(short *)((longlong)ppppppfStack_128 + 10));
      if (uVar30 != 0xffffffff) {
LAB_144c5add7:
        uVar25 = 0xffffffff;
        uVar22 = (ulonglong)uVar36;
        lVar32 = *(longlong *)(*(longlong *)(lStack_d8 + *(longlong *)(param_5 + 0x38)) + 0x20);
        if ((int)uVar36 < *(int *)(lVar32 + 0x30)) {
          if (*(int *)(lVar32 + 0x78) != 0) {
            uVar36 = *(uint *)(*(longlong *)(lVar32 + 0x70) + uVar22 * 4);
          }
          if (uVar36 == 0xffffffff) {
            lVar40 = *(longlong *)(lVar32 + 0x28);
            lVar23 = uVar22 * 5;
          }
          else {
            lVar23 = (longlong)(int)uVar36 * 5;
            lVar40 = *(longlong *)(lVar32 + 0xc0);
          }
        }
        else {
          lVar23 = (longlong)(int)(uVar36 - *(int *)(lVar32 + 0x30)) * 5;
          lVar40 = *(longlong *)(lVar32 + 0xe0);
        }
        uVar36 = *(uint *)(lVar40 + lVar23 * 4 + 0xc);
        if (((*(byte *)(lVar40 + 0x10 + lVar23 * 4) & 0x40) == 0) && (uVar36 != 0xffffffff)) {
          uVar36 = *(int *)(lVar32 + 0x17c) << 0x16 | uVar36 & 0x3fffff;
        }
        uVar37 = uVar30 & 0x3fffff;
        lVar32 = *(longlong *)
                  (*(longlong *)
                    ((ulonglong)(uVar30 >> 0x16) * 0x120 + *(longlong *)(param_5 + 0x38)) + 0x20);
        if ((int)uVar37 < *(int *)(lVar32 + 0x30)) {
          uVar22 = (ulonglong)uVar37;
          if (*(int *)(lVar32 + 0x78) != 0) {
            uVar37 = *(uint *)(*(longlong *)(lVar32 + 0x70) + (ulonglong)uVar37 * 4);
          }
          if (uVar37 == 0xffffffff) {
            lVar40 = *(longlong *)(lVar32 + 0x28);
            lVar23 = uVar22 * 5;
          }
          else {
            lVar23 = (longlong)(int)uVar37 * 5;
            lVar40 = *(longlong *)(lVar32 + 0xc0);
          }
        }
        else {
          lVar23 = (longlong)(int)(uVar37 - *(int *)(lVar32 + 0x30)) * 5;
          lVar40 = *(longlong *)(lVar32 + 0xe0);
        }
        uVar37 = *(uint *)(lVar40 + lVar23 * 4 + 0xc);
        if (((*(byte *)(lVar40 + 0x10 + lVar23 * 4) & 0x40) == 0) && (uVar37 != 0xffffffff)) {
          uVar37 = *(int *)(lVar32 + 0x17c) << 0x16 | uVar37 & 0x3fffff;
        }
        ppppppfStack_128 = (float ******)CONCAT44(ppppppfStack_128._4_4_,uVar37);
        if ((uVar36 != 0xffffffff) && (uVar37 != 0xffffffff)) {
          bVar45 = uVar17 != 0xffffffff;
          param_7._0_4_ = param_2;
          auStackX_18[0]._0_1_ = bVar45;
          if ((bVar45) && (param_7._0_4_ = param_2, 0 < param_2)) {
            puVar20 = (uint *)FUN_144ca81d0((longlong)param_2 * 0x90 + *plStack_138 + -0x20,
                                            &lStack_148,param_5);
            param_7._0_4_ = param_2;
            if (*puVar20 == uVar44) {
              auStackX_18[0]._0_1_ = 0;
              param_7._0_4_ = param_2 + -1;
            }
          }
          iVar41 = param_2 + 1;
          bVar45 = uVar36 != uVar37;
          if (((uVar36 == uVar37) || (*(int *)(param_1 + 0x20) <= param_2 + 2)) ||
             (puVar20 = (uint *)FUN_144ca81d0((lStack_d0 + 2) * 0x90 + 0x70 +
                                              *(longlong *)(param_1 + 0x18),&lStack_148,param_5),
             *puVar20 != uVar37)) {
            if (bVar45) {
              uVar25 = uVar37 & 0x3fffff;
              lStack_148 = *(longlong *)(param_5 + 0x38);
              lVar32 = *(longlong *)
                        (*(longlong *)((ulonglong)(uVar37 >> 0x16) * 0x120 + lStack_148) + 0x20);
              if ((int)uVar25 < *(int *)(lVar32 + 0x20)) {
                uVar22 = (ulonglong)uVar25;
                if (*(int *)(lVar32 + 0x98) != 0) {
                  uVar25 = *(uint *)(*(longlong *)(lVar32 + 0x90) + (ulonglong)uVar25 * 4);
                }
                if (uVar25 == 0xffffffff) {
                  lVar32 = *(longlong *)(lVar32 + 0x18);
                }
                else {
                  uVar22 = (ulonglong)(int)uVar25;
                  lVar32 = *(longlong *)(lVar32 + 0xb0);
                }
              }
              else {
                uVar22 = (ulonglong)(int)(uVar25 - *(int *)(lVar32 + 0x20));
                lVar32 = *(longlong *)(lVar32 + 0xd0);
              }
              sVar2 = *(short *)(lVar32 + 8 + uVar22 * 0xc);
              iVar34 = 0;
              if (sVar2 < 1) {
                return 2;
              }
              while( true ) {
                uVar18 = *(int *)(lVar32 + uVar22 * 0xc) + iVar34;
                uVar25 = uVar18 | uVar37 & 0xffc00000;
                uVar18 = uVar18 & 0x3fffff;
                lVar40 = *(longlong *)
                          (*(longlong *)((ulonglong)(uVar25 >> 0x16) * 0x120 + lStack_148) + 0x20);
                if ((int)uVar18 < *(int *)(lVar40 + 0x30)) {
                  uVar39 = (ulonglong)uVar18;
                  if (*(int *)(lVar40 + 0x78) != 0) {
                    uVar18 = *(uint *)(*(longlong *)(lVar40 + 0x70) + (ulonglong)uVar18 * 4);
                  }
                  if (uVar18 == 0xffffffff) {
                    lVar23 = *(longlong *)(lVar40 + 0x28);
                    lVar27 = uVar39 * 5;
                  }
                  else {
                    lVar27 = (longlong)(int)uVar18 * 5;
                    lVar23 = *(longlong *)(lVar40 + 0xc0);
                  }
                }
                else {
                  lVar27 = (longlong)(int)(uVar18 - *(int *)(lVar40 + 0x30)) * 5;
                  lVar23 = *(longlong *)(lVar40 + 0xe0);
                }
                uVar18 = *(uint *)(lVar23 + lVar27 * 4 + 0xc);
                if (((*(byte *)(lVar23 + 0x10 + lVar27 * 4) & 0x40) == 0) && (uVar18 != 0xffffffff))
                {
                  uVar18 = *(int *)(lVar40 + 0x17c) << 0x16 | uVar18 & 0x3fffff;
                }
                if (uVar18 == uVar36) break;
                iVar34 = iVar34 + 1;
                if (sVar2 <= iVar34) {
                  return 2;
                }
              }
              if (uVar25 == 0xffffffff) {
                return 2;
              }
              cVar16 = FUN_144c49370(param_6,uVar25,6);
              if (cVar16 == '\0') {
                return 2;
              }
            }
          }
          else {
            bVar45 = false;
            iVar41 = param_2 + 2;
          }
          iVar41 = iVar41 - (int)param_7;
          iVar34 = (byte)auStackX_18[0] + 1 + (uint)bVar45;
          if (iVar34 < iVar41) {
            iVar41 = iVar41 - iVar34;
            iVar35 = (int)plStack_138[1] - iVar41;
            iVar34 = iVar35 - (int)param_7;
            if ((int)(*(uint *)((longlong)plStack_138 + 0xc) & 0x7fffffff) < iVar35) {
              FUN_144c5c270(plStack_138,&PTR_vftable_14c6e47a0,(longlong)iVar35);
            }
            puVar28 = (undefined8 *)((longlong)(int)param_7 * 0x90 + *plStack_138);
            if (0 < iVar34) {
              puVar33 = puVar28 + (longlong)iVar41 * 0x12;
              if (puVar28 < puVar33) {
                if ((longlong)iVar34 * 0x90 != 0) {
                  lVar32 = ((longlong)iVar34 * 0x90 - 1U >> 3) + 1;
                  do {
                    *puVar28 = puVar28[(longlong)iVar41 * 0x12];
                    puVar28 = puVar28 + 1;
                    lVar32 = lVar32 + -1;
                  } while (lVar32 != 0);
                }
              }
              else if (puVar28 != puVar33) {
                FUN_144bfb260(puVar28,puVar33,(longlong)iVar34 * 0x90);
              }
            }
            *(int *)(plStack_138 + 1) = iVar35;
            uStack_154 = *(int *)(param_1 + 0x38) * (int)param_7;
            iVar41 = *(int *)(param_1 + 0x38) * iVar41;
            iVar34 = *(int *)(param_1 + 0x30) - iVar41;
            iVar35 = (*(int *)(param_1 + 0x30) - uStack_154) - iVar41;
            lStack_148 = CONCAT44(lStack_148._4_4_,iVar34);
            if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar34) {
              FUN_141807aa8((longlong *)(param_1 + 0x28),&PTR_vftable_14c6e47a0,(longlong)iVar34);
            }
            puVar29 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)(int)uStack_154 * 4);
            if (0 < iVar35) {
              puVar1 = puVar29 + iVar41;
              if (puVar29 < puVar1) {
                if ((longlong)iVar35 * 4 != 0) {
                  lVar32 = ((longlong)iVar35 * 4 - 1U >> 2) + 1;
                  do {
                    *puVar29 = puVar29[iVar41];
                    puVar29 = puVar29 + 1;
                    lVar32 = lVar32 + -1;
                  } while (lVar32 != 0);
                  *(int *)(param_1 + 0x30) = (int)lStack_148;
                  goto LAB_144c5b4e8;
                }
              }
              else if (puVar29 != puVar1) {
                FUN_144bfb260(puVar29,puVar1,(longlong)iVar35 << 2);
              }
            }
            *(int *)(param_1 + 0x30) = (int)lStack_148;
          }
          else if (iVar41 < iVar34) {
            iVar34 = iVar34 - iVar41;
            iVar41 = iVar34 + (int)plStack_138[1];
            iVar35 = (int)plStack_138[1] - (int)param_7;
            lStack_148 = CONCAT44(lStack_148._4_4_,iVar41);
            if ((int)(*(uint *)((longlong)plStack_138 + 0xc) & 0x7fffffff) < iVar41) {
              FUN_144c5c270(plStack_138,&PTR_vftable_14c6e47a0,(longlong)iVar41);
            }
            puVar33 = (undefined8 *)((longlong)(int)param_7 * 0x90 + *plStack_138);
            puVar28 = puVar33 + (longlong)iVar34 * 0x12;
            if (iVar35 != 0) {
              if (puVar28 < puVar33) {
                if ((longlong)iVar35 * 0x90 != 0) {
                  lVar32 = (longlong)puVar33 - (longlong)puVar28;
                  lVar40 = ((longlong)iVar35 * 0x90 - 1U >> 3) + 1;
                  do {
                    *puVar28 = *(undefined8 *)(lVar32 + (longlong)puVar28);
                    puVar28 = puVar28 + 1;
                    lVar40 = lVar40 + -1;
                  } while (lVar40 != 0);
                }
              }
              else if (puVar28 != puVar33) {
                FUN_144bfb260(puVar28,puVar33,(longlong)iVar35 * 0x90);
              }
            }
            *(int *)(plStack_138 + 1) = (int)lStack_148;
            iVar35 = (int)param_7 * *(int *)(param_1 + 0x38);
            iVar34 = iVar34 * *(int *)(param_1 + 0x38);
            lStack_148 = CONCAT44(lStack_148._4_4_,iVar35);
            iVar41 = iVar34 + *(int *)(param_1 + 0x30);
            iVar42 = *(int *)(param_1 + 0x30) - iVar35;
            if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar41) {
              FUN_141807aa8(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar41);
              iVar35 = (int)lStack_148;
            }
            puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar35 * 4);
            puVar29 = puVar1 + iVar34;
            if (iVar42 != 0) {
              if (puVar29 < puVar1) {
                if ((longlong)iVar42 * 4 != 0) {
                  lVar40 = (longlong)puVar1 - (longlong)puVar29;
                  lVar32 = ((longlong)iVar42 * 4 - 1U >> 2) + 1;
                  do {
                    *puVar29 = *(undefined4 *)(lVar40 + (longlong)puVar29);
                    puVar29 = puVar29 + 1;
                    lVar32 = lVar32 + -1;
                  } while (lVar32 != 0);
                }
              }
              else if (puVar29 != puVar1) {
                FUN_144bfb260(puVar29,puVar1,(longlong)iVar42 << 2);
              }
            }
            *(int *)(param_1 + 0x30) = iVar41;
          }
LAB_144c5b4e8:
          bVar46 = (byte)auStackX_18[0] != 0;
          if (bVar46) {
            uStack_154 = auStack_150[0] >> 0x16;
            auStackX_18[0]._0_1_ =
                 *(byte *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                ((ulonglong)uStack_154 * 0x120 + *(longlong *)(param_5 + 0x38)) +
                              0x20) + 0x68) + 0x80) & 1;
            FUN_144c59290(param_1,param_5,param_6,uVar17,&fStack_e8,auStack_150,&uStack_154,
                          auStackX_18,(int)param_7);
          }
          lVar32 = (longlong)(int)param_7;
          uStack_154 = uVar44 >> 0x16;
          iVar41 = (uint)bVar46 + (int)param_7;
          auStackX_18[0]._0_1_ =
               *(byte *)(*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              ((ulonglong)uStack_154 * 0x120 + *(longlong *)(param_5 + 0x38)) + 0x20
                            ) + 0x68) + 0x80) & 1;
          FUN_144c59290(param_1,param_5,param_6,uVar30,&fStack_e8,auStack_130,&uStack_154,
                        auStackX_18,iVar41);
          if (bVar45 != false) {
            uStack_154 = uVar37 >> 0x16;
            auStackX_18[0] =
                 CONCAT31(auStackX_18[0]._1_3_,
                          *(undefined1 *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 ((ulonglong)uStack_154 * 0x120 + *(longlong *)(param_5 + 0x38)) +
                               0x20) + 0x68) + 0x80)) & 0xffffff01;
            FUN_144c59290(param_1,param_5,param_6,uVar25,&fStack_e8,&ppppppfStack_128,&uStack_154,
                          auStackX_18,iVar41 + 1);
          }
          if ((int)param_7 != 0) {
            lVar40 = 0;
            do {
              *(undefined2 *)(lVar40 + 0x7c + *(longlong *)(param_1 + 0x18)) = 0;
              *(undefined2 *)(lVar40 + 0x7e + *(longlong *)(param_1 + 0x18)) = 0;
              lVar32 = lVar32 + -1;
              lVar40 = lVar40 + 0x90;
            } while (lVar32 != 0);
          }
          return 0;
        }
      }
    }
  }
  return 2;
}



// FUNCTION 144b3fc20 FUN_144b3fc20 body=41 status=ok
// SIG undefined FUN_144b3fc20(void)

longlong * FUN_144b3fc20(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar3 = (longlong)(iVar1 * param_3);
  *param_2 = lVar2 + lVar3 * 4;
  param_2[1] = lVar2 + (lVar3 + iVar1) * 4;
  return param_2;
}



// FUNCTION 144b3fc50 FUN_144b3fc50 body=3020 status=ok
// SIG undefined FUN_144b3fc50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144b3fc50(undefined8 param_1,undefined4 param_2,float *param_3,undefined4 *param_4,
                       undefined8 param_5,undefined8 *param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined7 uVar15;
  float *pfVar16;
  longlong lVar17;
  float *pfVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined1 auVar32 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
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
  undefined4 local_res18 [2];
  float *local_298 [2];
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined8 local_268;
  undefined8 uStack_260;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float *local_1c8 [2];
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
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
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
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
  
  lVar13 = FUN_144b3f860(param_1,0);
  fVar38 = *param_3;
  fVar47 = param_3[1];
  fVar53 = param_3[2];
  fVar3 = param_3[3];
  local_1d8 = fVar38;
  fStack_1d4 = fVar47;
  fStack_1d0 = fVar53;
  fStack_1cc = fVar3;
  local_1a8 = fVar38;
  fStack_1a4 = fVar47;
  fStack_1a0 = fVar53;
  fStack_19c = fVar3;
  FUN_144c59120(param_1,param_2,local_1c8,local_298);
  if (local_1c8[0] == local_298[0]) {
    uVar14 = 4;
  }
  else {
    local_res18[0] = *param_4;
    fVar48 = local_1c8[0][8];
    fVar54 = local_1c8[0][9];
    fVar55 = local_1c8[0][10];
    fVar56 = local_1c8[0][0xb];
    local_238 = fVar48;
    fStack_234 = fVar54;
    fStack_230 = fVar55;
    fStack_22c = fVar56;
    uVar14 = FUN_144c5c910(local_res18,local_1c8[0],param_5,&local_198);
    if ((int)uVar14 == 0) {
      uVar9 = 0;
      local_d8 = 0.0;
      fStack_d4 = 0.0;
      fStack_d0 = 0.0;
      fStack_cc = 0.0;
      local_res18[0] = 0x3a83126f;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_248 = 0;
      uStack_240 = 0;
      local_1f8 = 0.0;
      fStack_1f4 = 0.0;
      fStack_1f0 = 0.0;
      fStack_1ec = 0.0;
      local_258 = 0.0;
      fStack_254 = 0.0;
      fStack_250 = 0.0;
      fStack_24c = 0.0;
      local_138 = 0.001;
      uStack_134 = 0x3a83126f;
      uStack_130 = 0x3a83126f;
      uStack_12c = 0x3a83126f;
      pfVar16 = local_1c8[0];
      fVar35 = 0.0;
      fVar36 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      local_f8 = fVar38;
      fStack_f4 = fVar47;
      fStack_f0 = fVar53;
      fStack_ec = fVar3;
      fVar30 = local_288;
      fVar31 = fStack_284;
      fVar33 = fStack_280;
      fVar34 = fStack_27c;
      if (local_1c8[0] != local_298[0]) {
        pfVar18 = local_1c8[0] + 0x14;
        local_1b8 = local_178;
        fStack_1b4 = fStack_174;
        fStack_1b0 = fStack_170;
        fStack_1ac = fStack_16c;
        fVar57 = local_178;
        fVar58 = fStack_174;
        fVar59 = fStack_170;
        local_128 = local_188;
        fStack_124 = fStack_184;
        fStack_120 = fStack_180;
        fStack_11c = fStack_17c;
        fVar64 = fVar3;
        local_118 = local_198;
        fStack_114 = fStack_194;
        fStack_110 = fStack_190;
        fStack_10c = fStack_18c;
        local_108 = local_168;
        fStack_104 = fStack_164;
        fStack_100 = fStack_160;
        fStack_fc = fStack_15c;
        do {
          fVar30 = *pfVar16;
          fVar31 = pfVar16[1];
          fVar33 = pfVar16[2];
          local_228 = CONCAT44(fVar30 * fStack_114 + fStack_104 + fVar31 * fStack_124 +
                               fVar33 * fVar58,
                               fVar30 * local_118 + local_108 + fVar31 * local_128 + fVar33 * fVar57
                              );
          uStack_220 = CONCAT44(pfVar16[3],
                                fVar30 * fStack_110 + fStack_100 + fVar31 * fStack_120 +
                                fVar33 * fVar59);
          fVar30 = pfVar18[-0x10];
          fVar31 = pfVar18[-0xf];
          fVar33 = pfVar18[-0xe];
          fStack_27c = pfVar18[-0xd];
          fVar34 = pfVar18[-4];
          fVar35 = pfVar18[-3];
          fVar36 = pfVar18[-2];
          fVar39 = pfVar18[4];
          fVar40 = pfVar18[5];
          fVar60 = pfVar18[6];
          fVar61 = *pfVar18;
          fVar62 = pfVar18[1];
          fVar63 = pfVar18[2];
          local_288 = fVar30 * local_118 + local_108 + fVar31 * local_128 + fVar33 * fVar57;
          fStack_284 = fVar30 * fStack_114 + fStack_104 + fVar31 * fStack_124 + fVar33 * fVar58;
          fStack_280 = fVar30 * fStack_110 + fStack_100 + fVar31 * fStack_120 + fVar33 * fVar59;
          fVar30 = pfVar18[-8];
          fVar31 = pfVar18[-7];
          fVar33 = pfVar18[-6];
          fStack_15c = fVar60 * fStack_1ac;
          local_198 = fVar31 * local_128 + fVar30 * local_118 + fVar33 * local_1b8;
          fStack_194 = fVar31 * fStack_124 + fVar30 * fStack_114 + fVar33 * fStack_1b4;
          fStack_190 = fVar31 * fStack_120 + fVar30 * fStack_110 + fVar33 * fStack_1b0;
          fStack_18c = fVar31 * fStack_11c + fVar30 * fStack_10c + fVar33 * fStack_1ac;
          local_188 = fVar36 * local_1b8 + fVar35 * local_128 + fVar34 * local_118;
          fStack_184 = fVar36 * fStack_1b4 + fVar35 * fStack_124 + fVar34 * fStack_114;
          fStack_180 = fVar36 * fStack_1b0 + fVar35 * fStack_120 + fVar34 * fStack_110;
          fStack_17c = fVar36 * fStack_1ac + fVar35 * fStack_11c + fVar34 * fStack_10c;
          local_214 = 0;
          fVar57 = fVar63 * local_1b8 + fVar62 * local_128 + fVar61 * local_118;
          fVar58 = fVar63 * fStack_1b4 + fVar62 * fStack_124 + fVar61 * fStack_114;
          fVar59 = fVar63 * fStack_1b0 + fVar62 * fStack_120 + fVar61 * fStack_110;
          fStack_1ac = fVar63 * fStack_1ac + fVar62 * fStack_11c + fVar61 * fStack_10c;
          local_274 = 0x3f800000;
          lVar17 = ((-0x50 - lVar13) + (longlong)pfVar18) / 0x90;
          local_168 = local_108 + fVar39 * local_118 + fVar40 * local_128 + fVar60 * local_1b8;
          fStack_164 = fStack_104 + fVar39 * fStack_114 + fVar40 * fStack_124 + fVar60 * fStack_1b4;
          fStack_160 = fStack_100 + fVar39 * fStack_110 + fVar40 * fStack_120 + fVar60 * fStack_1b0;
          fStack_15c = fStack_fc + fVar39 * fStack_10c + fVar40 * fStack_11c + fStack_15c;
          local_278 = (undefined4)lVar17;
          local_218 = local_278;
          local_1b8 = fVar57;
          fStack_1b4 = fVar58;
          fStack_1b0 = fVar59;
          local_178 = fVar57;
          fStack_174 = fVar58;
          fStack_170 = fVar59;
          fStack_16c = fStack_1ac;
          local_128 = local_188;
          fStack_124 = fStack_184;
          fStack_120 = fStack_180;
          fStack_11c = fStack_17c;
          local_118 = local_198;
          fStack_114 = fStack_194;
          fStack_110 = fStack_190;
          fStack_10c = fStack_18c;
          local_108 = local_168;
          fStack_104 = fStack_164;
          fStack_100 = fStack_160;
          fStack_fc = fStack_15c;
          uVar10 = FUN_144c5d220(param_1,lVar17,&local_1a8,&local_238,&local_198,&local_228,
                                 &local_288);
          fVar34 = fRam000000014c6dac8c;
          fVar33 = fRam000000014c6dac88;
          fVar31 = fRam000000014c6dac84;
          fVar30 = _DAT_14c6dac80;
          fVar60 = (float)local_228;
          fVar61 = local_228._4_4_;
          fVar62 = (float)uStack_220;
          fVar63 = uStack_220._4_4_;
          if (fVar3 == 0.0) {
            local_208 = CONCAT44(fVar47,fVar38);
            uStack_200 = CONCAT44(fVar64,fVar53);
            local_268 = CONCAT44(fVar47,fVar38);
            uStack_260 = CONCAT44(fVar64,fVar53);
            fVar30 = ((float)local_228 - fVar38) * fVar48;
            fVar33 = (local_228._4_4_ - fVar47) * fVar54;
            fVar35 = ((float)uStack_220 - fVar53) * fVar55;
            fVar31 = (local_288 - fVar38) * fVar48;
            fVar34 = (fStack_284 - fVar47) * fVar54;
            fVar36 = (fStack_280 - fVar53) * fVar55;
            fVar39 = ((float)local_228 - fVar38) - (fVar33 + fVar30 + fVar35) * fVar48;
            fVar40 = (local_228._4_4_ - fVar47) - (fVar33 + fVar30 + fVar35) * fVar54;
            fVar57 = ((float)uStack_220 - fVar53) - (fVar33 + fVar30 + fVar35) * fVar55;
            auVar41._0_4_ = (local_288 - fVar38) - (fVar34 + fVar31 + fVar36) * fVar48;
            auVar41._4_4_ = (fStack_284 - fVar47) - (fVar34 + fVar31 + fVar36) * fVar54;
            auVar41._8_4_ = (fStack_280 - fVar53) - (fVar34 + fVar31 + fVar36) * fVar55;
            auVar41._12_4_ = (fStack_27c - fVar64) - (fVar34 + fVar31 + fVar36) * fVar56;
            fVar53 = fVar40 * fVar40 + fVar39 * fVar39 + fVar57 * fVar57;
            fVar38 = auVar41._0_4_ * auVar41._0_4_;
            auVar21._4_4_ = fVar38;
            auVar21._0_4_ = fVar38;
            auVar21._8_4_ = fVar38;
            auVar21._12_4_ = fVar38;
            fVar38 = auVar41._4_4_ * auVar41._4_4_ + fVar38 + auVar41._8_4_ * auVar41._8_4_;
            auVar2._4_4_ = fVar38;
            auVar2._0_4_ = fVar53;
            auVar2._8_4_ = fVar53;
            auVar2._12_4_ = fVar38;
            auVar22 = sqrtps(auVar21,auVar2);
            auVar22 = divps(_DAT_14c6daca0,auVar22);
            fVar47 = (float)(~-(uint)(fVar53 == 0.0) & auVar22._0_4_);
            fVar48 = (float)(~-(uint)(fVar38 == 0.0) & auVar22._4_4_);
            fVar39 = fVar47 * fVar39;
            fVar40 = fVar47 * fVar40;
            fVar57 = fVar47 * fVar57;
            fVar31 = fVar47 * ((uStack_220._4_4_ - fVar64) - (fVar33 + fVar30 + fVar35) * fVar56);
            fVar33 = fVar48 * auVar41._0_4_;
            fVar34 = fVar48 * auVar41._4_4_;
            fVar35 = fVar48 * auVar41._8_4_;
            fVar36 = fVar48 * auVar41._12_4_;
            uVar49 = (uint)(uStack_220._4_4_ < 0.0) * -0x80000000;
            uVar50 = (uint)(uStack_220._4_4_ < 0.0) * -0x80000000;
            uVar51 = (uint)(uStack_220._4_4_ < 0.0) * -0x80000000;
            uVar52 = (uint)(uStack_220._4_4_ < 0.0) * -0x80000000;
            fVar66 = (float)((uint)(fVar57 * fStack_234 - fStack_230 * fVar40) ^ uVar49);
            fVar68 = (float)((uint)(fVar39 * fStack_230 - local_238 * fVar57) ^ uVar50);
            fVar69 = (float)((uint)(fVar40 * local_238 - fStack_234 * fVar39) ^ uVar51);
            fVar70 = (float)((uint)(fVar31 * fStack_22c - fStack_22c * fVar31) ^ uVar52);
            uVar43 = (uint)(fStack_27c < 0.0) * -0x80000000;
            uVar44 = (uint)(fStack_27c < 0.0) * -0x80000000;
            uVar45 = (uint)(fStack_27c < 0.0) * -0x80000000;
            uVar46 = (uint)(fStack_27c < 0.0) * -0x80000000;
            fVar54 = fVar53 - uStack_220._4_4_ * uStack_220._4_4_;
            fVar55 = fVar38 - fStack_27c * fStack_27c;
            fVar56 = fVar53 - uStack_220._4_4_ * uStack_220._4_4_;
            fVar30 = fVar38 - fStack_27c * fStack_27c;
            fVar58 = (float)((uint)(fVar35 * fStack_234 - fStack_230 * fVar34) ^ uVar43);
            fVar59 = (float)((uint)(fVar33 * fStack_230 - local_238 * fVar35) ^ uVar44);
            fVar64 = (float)((uint)(fVar34 * local_238 - fStack_234 * fVar33) ^ uVar45);
            fVar65 = (float)((uint)(fVar36 * fStack_22c - fStack_22c * fVar36) ^ uVar46);
            uVar19 = -(uint)(fVar54 <= 0.0);
            uVar20 = -(uint)(fVar55 <= 0.0);
            auVar23._0_4_ = ~uVar19 & (uint)(uStack_220._4_4_ * uStack_220._4_4_ * fVar54);
            auVar23._4_4_ = ~uVar20 & (uint)(fStack_27c * fStack_27c * fVar55);
            auVar23._8_4_ = ~-(uint)(fVar56 <= 0.0) & (uint)(fVar56 * fVar56);
            auVar23._12_4_ = ~-(uint)(fVar30 <= 0.0) & (uint)(fVar30 * fVar30);
            auVar1._8_8_ = 0;
            auVar1._0_8_ = CONCAT44(uVar20,uVar19) & 0x38d1b71738d1b717;
            auVar42 = sqrtps(auVar41,auVar23 | auVar1);
            fVar47 = auVar42._0_4_ * fVar47;
            fVar48 = auVar42._4_4_ * fVar48;
            fVar53 = auVar42._8_4_ * (float)(~-(uint)(fVar53 == 0.0) & auVar22._8_4_);
            fVar54 = auVar42._12_4_ * (float)(~-(uint)(fVar38 == 0.0) & auVar22._12_4_);
            local_1f8 = fVar53 * fVar39 + fVar66 * fVar47;
            fStack_1f4 = fVar53 * fVar40 + fVar68 * fVar47;
            fStack_1f0 = fVar53 * fVar57 + fVar69 * fVar47;
            fStack_1ec = fVar53 * fVar31 + fVar70 * fVar47;
            local_d8 = fVar54 * fVar33 + fVar58 * fVar48;
            fStack_d4 = fVar54 * fVar34 + fVar59 * fVar48;
            fStack_d0 = fVar54 * fVar35 + fVar64 * fVar48;
            fStack_cc = fVar54 * fVar36 + fVar65 * fVar48;
            fVar67 = (float)((uint)(fVar66 * fVar53 - fVar47 * fVar39) ^ uVar49);
            fVar68 = (float)((uint)(fVar68 * fVar53 - fVar47 * fVar40) ^ uVar50);
            fVar66 = (float)((uint)(fVar69 * fVar53 - fVar47 * fVar57) ^ uVar51);
            fVar69 = (float)((uint)(fVar70 * fVar53 - fVar47 * fVar31) ^ uVar52);
            local_1e8 = CONCAT44(fVar68,fVar67);
            uStack_1e0 = CONCAT44(fVar69,fVar66);
            auVar24._4_4_ = -(uint)(ABS(fStack_1f4) <= fRam000000014c6dac84);
            auVar24._0_4_ = -(uint)(ABS(local_1f8) <= _DAT_14c6dac80);
            auVar24._8_4_ = -(uint)(ABS(fStack_1f0) <= fRam000000014c6dac88);
            auVar24._12_4_ = -(uint)(ABS(fStack_1ec) <= fRam000000014c6dac8c);
            uVar19 = movmskps(uVar10,auVar24);
            local_258 = local_d8;
            fStack_254 = fStack_d4;
            fStack_250 = fStack_d0;
            fStack_24c = fStack_cc;
            fVar47 = (float)((uint)(fVar58 * fVar54 - fVar48 * fVar33) ^ uVar43);
            fVar53 = (float)((uint)(fVar59 * fVar54 - fVar48 * fVar34) ^ uVar44);
            fVar38 = (float)((uint)(fVar64 * fVar54 - fVar48 * fVar35) ^ uVar45);
            fVar30 = (float)((uint)(fVar65 * fVar54 - fVar48 * fVar36) ^ uVar46);
            local_248 = CONCAT44(fVar53,fVar47);
            uStack_240 = CONCAT44(fVar30,fVar38);
            if ((char)(uVar19 & 7) == '\a') {
              local_1f8 = 0.0;
              fStack_1f4 = 0.0;
              fStack_1f0 = 0.0;
              fStack_1ec = 0.0;
              fVar67 = 0.0;
              fVar68 = 0.0;
              fVar66 = 0.0;
              fVar69 = 0.0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_218 = 0xffffffff;
            }
            auVar32._4_4_ = -(uint)(ABS(fStack_d4) <= fRam000000014c6dac84);
            auVar32._0_4_ = -(uint)(ABS(local_d8) <= _DAT_14c6dac80);
            auVar32._8_4_ = -(uint)(ABS(fStack_d0) <= fRam000000014c6dac88);
            auVar32._12_4_ = -(uint)(ABS(fStack_cc) <= fRam000000014c6dac8c);
            uVar19 = movmskps(uVar19 & 7,auVar32);
            uVar14 = (ulonglong)(uVar19 & 7);
            fVar35 = local_1f8;
            fVar36 = fStack_1f4;
            fVar39 = fStack_1f0;
            fVar40 = fStack_1ec;
            fVar57 = local_1b8;
            fVar58 = fStack_1b4;
            fVar59 = fStack_1b0;
            fVar48 = local_238;
            fVar54 = fStack_234;
            fVar55 = fStack_230;
            fVar56 = fStack_22c;
            if ((char)(uVar19 & 7) == '\a') {
LAB_144b40236:
              local_d8 = 0.0;
              fStack_d4 = 0.0;
              fStack_d0 = 0.0;
              fStack_cc = 0.0;
              local_248 = 0;
              uStack_240 = 0;
              fVar47 = 0.0;
              fVar53 = 0.0;
              fVar38 = 0.0;
              fVar30 = 0.0;
              local_278 = 0xffffffff;
              fVar35 = local_1f8;
              fVar36 = fStack_1f4;
              fVar39 = fStack_1f0;
              fVar40 = fStack_1ec;
              goto LAB_144b403b0;
            }
          }
          else {
            fVar35 = (fVar38 - (float)local_228) * fVar48;
            fVar36 = (fVar47 - local_228._4_4_) * fVar54;
            fVar39 = (fVar53 - (float)uStack_220) * fVar55;
            auVar22._4_4_ =
                 -(uint)(ABS((fVar47 - local_228._4_4_) - (fVar36 + fVar35 + fVar39) * fVar54) <=
                        fRam000000014c6dac84);
            auVar22._0_4_ =
                 -(uint)(ABS((fVar38 - (float)local_228) - (fVar36 + fVar35 + fVar39) * fVar48) <=
                        _DAT_14c6dac80);
            auVar22._8_4_ =
                 -(uint)(ABS((fVar53 - (float)uStack_220) - (fVar36 + fVar35 + fVar39) * fVar55) <=
                        fRam000000014c6dac88);
            auVar22._12_4_ =
                 -(uint)(ABS((fVar64 - uStack_220._4_4_) - (fVar36 + fVar35 + fVar39) * fVar56) <=
                        fRam000000014c6dac8c);
            uVar19 = movmskps(uVar10,auVar22);
            uVar19 = uVar19 & 7;
            if ((char)uVar19 == '\a') {
              local_1f8 = 0.0;
              fStack_1f4 = 0.0;
              fStack_1f0 = 0.0;
              fStack_1ec = 0.0;
              fVar67 = 0.0;
              fVar68 = 0.0;
              fVar66 = 0.0;
              fVar69 = 0.0;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_218 = 0xffffffff;
            }
            else {
              uVar19 = FUN_144c39240(&local_1a8,&local_228,&local_238,&local_208,&local_158);
              local_1f8 = local_158 - (float)local_208;
              fStack_1f4 = fStack_154 - local_208._4_4_;
              fStack_1f0 = fStack_150 - (float)uStack_200;
              fStack_1ec = fStack_14c - uStack_200._4_4_;
              fVar66 = fStack_1f4 * fVar48 - fVar54 * local_1f8;
              fVar67 = fStack_1f0 * fVar54 - fVar55 * fStack_1f4;
              fVar68 = local_1f8 * fVar55 - fVar48 * fStack_1f0;
              fVar69 = fStack_1ec * fVar56 - fVar56 * fStack_1ec;
              local_1e8 = CONCAT44(fVar68,fVar67);
              uStack_1e0 = CONCAT44(fVar69,fVar66);
              fVar60 = (float)local_228;
              fVar61 = local_228._4_4_;
              fVar62 = (float)uStack_220;
              fVar63 = uStack_220._4_4_;
            }
            fVar40 = fStack_1ec;
            fVar39 = fStack_1f0;
            fVar36 = fStack_1f4;
            fVar35 = local_1f8;
            fVar65 = (fVar38 - local_288) * fVar48;
            fVar70 = (fVar47 - fStack_284) * fVar54;
            fVar37 = (fVar53 - fStack_280) * fVar55;
            auVar42._4_4_ =
                 -(uint)(ABS((fVar47 - fStack_284) - (fVar70 + fVar65 + fVar37) * fVar54) <= fVar31)
            ;
            auVar42._0_4_ =
                 -(uint)(ABS((fVar38 - local_288) - (fVar70 + fVar65 + fVar37) * fVar48) <= fVar30);
            auVar42._8_4_ =
                 -(uint)(ABS((fVar53 - fStack_280) - (fVar70 + fVar65 + fVar37) * fVar55) <= fVar33)
            ;
            auVar42._12_4_ =
                 -(uint)(ABS((fVar64 - fStack_27c) - (fVar70 + fVar65 + fVar37) * fVar56) <= fVar34)
            ;
            uVar19 = movmskps(uVar19,auVar42);
            uVar14 = (ulonglong)(uVar19 & 7);
            if ((char)(uVar19 & 7) == '\a') goto LAB_144b40236;
            uVar14 = FUN_144c39240(&local_1a8,&local_288,&local_238,&local_268,&local_148);
            local_d8 = local_148 - (float)local_268;
            fStack_d4 = fStack_144 - local_268._4_4_;
            fStack_d0 = fStack_140 - (float)uStack_260;
            fStack_cc = fStack_13c - uStack_260._4_4_;
            fVar38 = fStack_d4 * fVar48 - fVar54 * local_d8;
            fVar47 = fStack_d0 * fVar54 - fVar55 * fStack_d4;
            fVar53 = local_d8 * fVar55 - fVar48 * fStack_d0;
            fVar30 = fStack_cc * fVar56 - fVar56 * fStack_cc;
            local_248 = CONCAT44(fVar53,fVar47);
            uStack_240 = CONCAT44(fVar30,fVar38);
LAB_144b403b0:
            local_258 = local_d8;
            fStack_254 = fStack_d4;
            fStack_250 = fStack_d0;
            fStack_24c = fStack_cc;
          }
          uVar5 = uStack_200;
          uVar4 = local_208;
          uVar8 = local_214;
          uVar10 = local_218;
          local_258 = local_d8;
          fStack_254 = fStack_d4;
          fStack_250 = fStack_d0;
          fStack_24c = fStack_cc;
          if (((uint)pfVar18[0xc] & 0x10) != 0) {
            auVar27._4_4_ = -(uint)(fVar36 == 0.0);
            auVar27._0_4_ = -(uint)(fVar35 == 0.0);
            auVar27._8_4_ = -(uint)(fVar39 == 0.0);
            auVar27._12_4_ = -(uint)(fVar40 == 0.0);
            uVar19 = movmskps((int)uVar14,auVar27);
            if ((((char)(uVar19 & 7) != '\a') &&
                (auVar28._4_4_ = -(uint)(fStack_d4 == 0.0), auVar28._0_4_ = -(uint)(local_d8 == 0.0)
                , auVar28._8_4_ = -(uint)(fStack_d0 == 0.0),
                auVar28._12_4_ = -(uint)(fStack_cc == 0.0), uVar11 = movmskps(uVar19 & 7,auVar28),
                ((byte)uVar11 & 7) != 7)) &&
               (0.0 < fStack_d4 * fVar68 + local_d8 * fVar67 + fStack_d0 * fVar66)) {
              local_228 = CONCAT44(fStack_284,local_288);
              uStack_220 = CONCAT44(fStack_27c,fStack_280);
              local_214 = local_274;
              local_208 = local_268;
              uStack_200 = uStack_260;
              local_274 = uVar8;
              local_218 = local_278;
              local_1e8 = CONCAT44(fVar53,fVar47);
              uStack_1e0 = CONCAT44(fVar30,fVar38);
              local_278 = uVar10;
              local_268 = uVar4;
              uStack_260 = uVar5;
              local_248 = CONCAT44(fVar68,fVar67);
              uStack_240 = CONCAT44(fVar69,fVar66);
              local_288 = fVar60;
              fStack_284 = fVar61;
              fStack_280 = fVar62;
              fStack_27c = fVar63;
              local_258 = fVar35;
              fStack_254 = fVar36;
              fStack_250 = fVar39;
              fStack_24c = fVar40;
              local_1f8 = local_d8;
              fStack_1f4 = fStack_d4;
              fStack_1f0 = fStack_d0;
              fStack_1ec = fStack_cc;
            }
            fStack_cc = fStack_24c;
            fStack_d0 = fStack_250;
            fStack_d4 = fStack_254;
            local_d8 = local_258;
            fVar34 = fStack_27c;
            fVar33 = fStack_280;
            fVar31 = fStack_284;
            fVar30 = local_288;
            uVar14 = FUN_144c5cb60(&local_288,&local_228,&local_238,pfVar16 + 0x24,local_298[0],
                                   &local_198,&local_198);
            uVar9 = (undefined1)uVar14;
            fVar35 = local_1f8;
            fVar36 = fStack_1f4;
            fVar39 = fStack_1f0;
            fVar40 = fStack_1ec;
            local_f8 = local_1d8;
            fStack_f4 = fStack_1d4;
            fStack_f0 = fStack_1d0;
            fStack_ec = fStack_1cc;
            break;
          }
          uVar15 = (undefined7)(uVar14 >> 8);
          uVar10 = (undefined4)CONCAT71(uVar15,!NAN(fVar63));
          fVar30 = local_288;
          fVar31 = fStack_284;
          fVar33 = fStack_280;
          fVar34 = fStack_27c;
          local_f8 = local_1d8;
          fStack_f4 = fStack_1d4;
          fStack_f0 = fStack_1d0;
          fStack_ec = fStack_1cc;
          if (fVar63 == 0.0) {
            uVar14 = CONCAT71(uVar15,!NAN(fStack_27c));
            uVar10 = (undefined4)uVar14;
            if (fStack_27c == 0.0) break;
          }
          auVar25._4_4_ = -(uint)(fVar36 == 0.0);
          auVar25._0_4_ = -(uint)(fVar35 == 0.0);
          auVar25._8_4_ = -(uint)(fVar39 == 0.0);
          auVar25._12_4_ = -(uint)(fVar40 == 0.0);
          uVar19 = movmskps(uVar10,auVar25);
          uVar19 = uVar19 & 7;
          uVar14 = (ulonglong)uVar19;
          if ((char)uVar19 == '\a') break;
          auVar26._4_4_ = -(uint)(fStack_d4 == 0.0);
          auVar26._0_4_ = -(uint)(local_d8 == 0.0);
          auVar26._8_4_ = -(uint)(fStack_d0 == 0.0);
          auVar26._12_4_ = -(uint)(fStack_cc == 0.0);
          uVar19 = movmskps(uVar19,auVar26);
          uVar14 = (ulonglong)(uVar19 & 7);
          if (((char)(uVar19 & 7) == '\a') ||
             (local_138 < fVar53 * fVar36 + fVar47 * fVar35 + fVar38 * fVar39)) break;
          if (0.0 <= ((fVar60 - local_1d8) * (fStack_280 - fStack_1d0) -
                     (local_288 - local_1d8) * (fVar62 - fStack_1d0)) * fVar54 +
                     ((fVar62 - fStack_1d0) * (fStack_284 - fStack_1d4) -
                     (fStack_280 - fStack_1d0) * (fVar61 - fStack_1d4)) * fVar48 +
                     ((fVar61 - fStack_1d4) * (local_288 - local_1d8) -
                     (fStack_284 - fStack_1d4) * (fVar60 - local_1d8)) * fVar55) {
            pfVar16 = (float *)&local_228;
            if (fStack_d4 * fStack_d4 + local_d8 * local_d8 + fStack_d0 * fStack_d0 <=
                fVar36 * fVar36 + fVar35 * fVar35 + fVar39 * fVar39) {
              pfVar16 = &local_288;
            }
            uVar4 = *(undefined8 *)(pfVar16 + 8);
            uVar5 = *(undefined8 *)(pfVar16 + 10);
            uVar6 = *(undefined8 *)pfVar16;
            uVar7 = *(undefined8 *)(pfVar16 + 2);
            *(float *)(param_6 + 6) = pfVar16[4];
            fVar38 = pfVar16[5];
            *param_6 = uVar4;
            param_6[1] = uVar5;
            uVar4 = *(undefined8 *)(pfVar16 + 0xc);
            uVar5 = *(undefined8 *)(pfVar16 + 0xe);
            *(float *)((longlong)param_6 + 0x34) = fVar38;
            param_6[2] = uVar4;
            param_6[3] = uVar5;
            param_6[4] = uVar6;
            param_6[5] = uVar7;
            return 0;
          }
          pfVar16 = pfVar16 + 0x24;
          pfVar18 = pfVar18 + 0x24;
          fVar38 = local_1d8;
          fVar47 = fStack_1d4;
          fVar53 = fStack_1d0;
          fVar64 = fStack_1cc;
          if (pfVar16 == local_298[0]) break;
        } while( true );
      }
      auVar29._4_4_ = -(uint)(pfVar16[5] == pfVar16[1]);
      auVar29._0_4_ = -(uint)(pfVar16[4] == *pfVar16);
      auVar29._8_4_ = -(uint)(pfVar16[6] == pfVar16[2]);
      auVar29._12_4_ = -(uint)(pfVar16[7] == pfVar16[3]);
      iVar12 = movmskps((int)uVar14,auVar29);
      if (iVar12 == 0xf) {
        local_e8 = fVar30 - local_f8;
        fStack_e4 = fVar31 - fStack_f4;
        fStack_e0 = fVar33 - fStack_f0;
        fStack_dc = fVar34 - fStack_ec;
        fStack_d0 = fVar54 * local_e8 - fStack_e4 * fVar48;
        local_d8 = fVar55 * fStack_e4 - fStack_e0 * fVar54;
        fStack_d4 = fVar48 * fStack_e0 - local_e8 * fVar55;
        fStack_cc = fVar56 * fStack_dc - fStack_dc * fVar56;
      }
      else {
        local_d8 = local_d8 - fVar35;
        fStack_d4 = fStack_d4 - fVar36;
        fStack_d0 = fStack_d0 - fVar39;
        fStack_cc = fStack_cc - fVar40;
        fStack_e0 = fStack_d4 * fVar48 - fVar54 * local_d8;
        local_e8 = fStack_d0 * fVar54 - fVar55 * fStack_d4;
        fStack_e4 = local_d8 * fVar55 - fVar48 * fStack_d0;
        fStack_dc = fStack_cc * fVar56 - fVar56 * fStack_cc;
      }
      lVar17 = ((longlong)pfVar16 - lVar13) + 0x90;
      lVar17 = lVar17 / 0x12 + (lVar17 >> 0x3f);
      lVar13 = FUN_144b3f860(param_1,((longlong)pfVar16 - lVar13) / 0x90);
      uVar14 = FUN_144c5d820(param_1,lVar13 + 0x20,(int)(lVar17 >> 3) - (int)(lVar17 >> 0x3f),
                             &local_1a8,&local_228,&local_288,&local_198,uVar9,&local_f8,param_6);
    }
  }
  return uVar14;
}



// FUNCTION 144b40820 FUN_144b40820 body=332 status=ok
// SIG undefined FUN_144b40820(void)

uint * FUN_144b40820(uint *param_1,float *param_2,longlong param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  uint uVar13;
  uint local_res10 [2];
  
  FUN_144b3f870(param_2 + 0x1c,local_res10);
  if (local_res10[0] != 0xffffffff) {
    uVar13 = local_res10[0] & 0x3fffff;
    lVar3 = *(longlong *)
             (*(longlong *)
               ((ulonglong)(local_res10[0] >> 0x16) * 0x120 + *(longlong *)(param_3 + 0x38)) + 0x20)
    ;
    if ((int)uVar13 < *(int *)(lVar3 + 0x30)) {
      uVar9 = (ulonglong)uVar13;
      if (*(int *)(lVar3 + 0x78) != 0) {
        uVar13 = *(uint *)(*(longlong *)(lVar3 + 0x70) + (ulonglong)uVar13 * 4);
      }
      if (uVar13 == 0xffffffff) {
        lVar8 = *(longlong *)(lVar3 + 0x28);
        lVar10 = uVar9 * 5;
      }
      else {
        lVar10 = (longlong)(int)uVar13 * 5;
        lVar8 = *(longlong *)(lVar3 + 0xc0);
      }
    }
    else {
      lVar10 = (longlong)(int)(uVar13 - *(int *)(lVar3 + 0x30)) * 5;
      lVar8 = *(longlong *)(lVar3 + 0xe0);
    }
    piVar1 = (int *)(lVar8 + lVar10 * 4);
    iVar2 = *(int *)(lVar3 + 0x40);
    iVar6 = *piVar1;
    if (iVar6 < iVar2) {
      pfVar12 = (float *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar3 + 0x38));
    }
    else {
      pfVar12 = (float *)((longlong)(iVar6 - iVar2) * 0x10 + *(longlong *)(lVar3 + 0xf0));
    }
    iVar6 = piVar1[1];
    if (iVar6 < iVar2) {
      pfVar11 = (float *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar3 + 0x38));
    }
    else {
      iVar6 = iVar6 - iVar2;
      pfVar11 = (float *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar3 + 0xf0));
    }
    auVar4._4_4_ = -(uint)(param_2[5] == pfVar12[1]);
    auVar4._0_4_ = -(uint)(param_2[4] == *pfVar12);
    auVar4._8_4_ = -(uint)(param_2[6] == pfVar12[2]);
    auVar4._12_4_ = -(uint)(param_2[7] == pfVar12[3]);
    uVar13 = movmskps(iVar6,auVar4);
    if (((char)(uVar13 & 7) == '\a') &&
       (auVar5._4_4_ = -(uint)(param_2[1] == pfVar11[1]),
       auVar5._0_4_ = -(uint)(*param_2 == *pfVar11),
       auVar5._8_4_ = -(uint)(param_2[2] == pfVar11[2]),
       auVar5._12_4_ = -(uint)(param_2[3] == pfVar11[3]), uVar7 = movmskps(uVar13 & 7,auVar5),
       ((byte)uVar7 & 7) == 7)) {
      *param_1 = local_res10[0];
      return param_1;
    }
  }
  *param_4 = 0xffffffff;
  *param_1 = 0xffffffff;
  return param_1;
}



// FUNCTION 144b40970 FUN_144b40970 body=14 status=ok
// SIG undefined FUN_144b40970(void)

void FUN_144b40970(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  return;
}



// FUNCTION 144b40980 FUN_144b40980 body=29 status=ok
// SIG undefined FUN_144b40980(void)

undefined8 * FUN_144b40980(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  param_1[4] = 0;
  param_1[5] = 0x5f7ffff000000000;
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined1 *)(param_1 + 6) = 1;
  return param_1;
}



// FUNCTION 144b409a0 FUN_144b409a0 body=102 status=ok
// SIG undefined FUN_144b409a0(void)

void FUN_144b409a0(undefined8 *param_1)

{
  *param_1 = hkaiPathfindingUtil::FindPathInput::vftable;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) << 6);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144b40a10 FUN_144b40a10 body=129 status=ok
// SIG undefined FUN_144b40a10(void)

undefined8 * FUN_144b40a10(undefined8 *param_1)

{
  param_1[2] = 1;
  *param_1 = hkaiPathfindingUtil::FindPathOutput::vftable;
  param_1[1] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0x7f7fffee;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  return param_1;
}



// FUNCTION 144b40aa0 FUN_144b40aa0 body=132 status=ok
// SIG undefined FUN_144b40aa0(void)

void FUN_144b40aa0(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x68) + 1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  if ((int)(*(uint *)(param_1 + 0x6c) & 0x7fffffff) < iVar4) {
    FUN_144c30e90((longlong *)(param_1 + 0x60),&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar3 = (undefined8 *)((longlong)*(int *)(param_1 + 0x68) * 0x40 + *(longlong *)(param_1 + 0x60))
  ;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = uVar1;
    puVar3[1] = uVar2;
    *(undefined4 *)(puVar3 + 2) = param_3;
    puVar3[4] = 0;
    puVar3[5] = 0x5f7ffff000000000;
    *(undefined1 *)(puVar3 + 6) = 1;
  }
  *(int *)(param_1 + 0x68) = iVar4;
  return;
}



// FUNCTION 144b40b30 FUN_144b40b30 body=267 status=ok
// SIG undefined FUN_144b40b30(void)

undefined8 * FUN_144b40b30(undefined8 *param_1)

{
  *param_1 = hkaiPathfindingUtil::FindPathInput::vftable;
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0x5f7ffff000000000;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xf) = 100000;
  *(undefined4 *)(param_1 + 0xe) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x40000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x15] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x17] = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x1030100;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0x101;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x1b) = 0x7f7fffee;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1c) = 0xbf800000;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 144b40c40 FUN_144b40c40 body=299 status=ok
// SIG undefined FUN_144b40c40(void)

void FUN_144b40c40(undefined8 *param_1)

{
  *param_1 = hkaiPathfindingUtil::FindPathOutput::vftable;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0x10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff) << 2);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x6c) & 0x7fffffff) * 0x30);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x5c) & 0x7fffffff) << 2);
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x4c)) && (param_1[8] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[8],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x4c) & 0x7fffffff) << 5);
  }
  param_1[8] = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144b40d70 FUN_144b40d70 body=736 status=ok
// SIG undefined FUN_144b40d70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b40d70(longlong param_1,undefined8 param_2,longlong param_3,float param_4,float param_5,
                  float param_6,longlong param_7,undefined8 param_8)

{
  void *_Dst;
  void *pvVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  float fVar12;
  uint local_res8 [2];
  uint local_res20 [2];
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
  
  lVar5 = param_7;
  *(float *)(param_1 + 0x44) = param_4;
  if (param_5 <= param_4) {
    param_5 = param_4;
  }
  *(float *)(param_1 + 0x3c) = param_5;
  fVar12 = param_6;
  if (param_6 <= param_4) {
    fVar12 = param_4;
  }
  *(float *)(param_1 + 0x40) = fVar12;
  local_res8[0] = *(uint *)(param_3 + 0x30);
  local_res20[0] = local_res8[0] >> 0x16;
  lVar6 = *(longlong *)((ulonglong)local_res20[0] * 0x120 + *(longlong *)(param_7 + 0x38));
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(*(longlong *)(lVar6 + 0x20) + 0x60);
  bVar2 = *(byte *)(*(longlong *)(*(longlong *)(lVar6 + 0x20) + 0x68) + 0x80);
  param_5._1_3_ = (undefined3)((uint)param_4 >> 8);
  param_5 = (float)(CONCAT31(param_5._1_3_,bVar2) & 0xffffff01);
  if ((bVar2 & 1) == 0) {
    local_58 = *(undefined4 *)(lVar6 + 0xc0);
    uStack_54 = *(undefined4 *)(lVar6 + 0xc4);
    uStack_50 = *(undefined4 *)(lVar6 + 200);
    uStack_4c = *(undefined4 *)(lVar6 + 0xcc);
  }
  else {
    param_6 = (float)(local_res8[0] & 0x3fffff);
    FUN_144c52b10(&local_48,lVar6,&param_6,&local_58);
  }
  FUN_144c58b50(param_1,&local_48,*(undefined4 *)(param_3 + 0x58));
  uVar4 = param_8;
  iVar9 = *(int *)(param_3 + 0x58);
  iVar8 = 0;
  if (0 < (longlong)iVar9) {
    lVar6 = 0;
    do {
      FUN_144c59290(param_1,lVar5,uVar4,*(undefined4 *)(*(longlong *)(param_3 + 0x50) + lVar6 * 4),
                    &local_58,local_res8,local_res20,&param_5,iVar8);
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar9);
  }
  if (*(char *)(param_3 + 0x7c) == '\x01') {
    puVar7 = (undefined4 *)
             ((longlong)*(int *)(param_3 + 0x74) * 0x20 + *(longlong *)(param_3 + 0x40));
    local_48 = *puVar7;
    uStack_44 = puVar7[1];
    uStack_40 = puVar7[2];
    uStack_3c = puVar7[3];
    uVar3 = puVar7[4];
    FUN_144b3fa50(&local_68,
                  *(longlong *)((ulonglong)(uVar3 >> 0x16) * 0x120 + *(longlong *)(lVar5 + 0x38)) +
                  0x60,&local_48);
    iVar9 = *(int *)(param_1 + 0x30) + *(int *)(param_1 + 0x38);
    uStack_5c = 0;
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar9) {
      FUN_141807aa8(param_1 + 0x28,&PTR_vftable_14c6e47a0,(longlong)iVar9);
    }
    *(int *)(param_1 + 0x30) = iVar9;
    iVar9 = *(int *)(param_1 + 0x20);
    iVar8 = iVar9 + 1;
    if ((int)(*(uint *)(param_1 + 0x24) & 0x7fffffff) < iVar8) {
      FUN_144c5c270(param_1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    *(int *)(param_1 + 0x20) = iVar8;
    puVar10 = (undefined8 *)((longlong)iVar9 * 0x90 + *(longlong *)(param_1 + 0x18));
    *puVar10 = CONCAT44(uStack_64,local_68);
    puVar10[1] = CONCAT44(uStack_5c,uStack_60);
    *(undefined4 *)(puVar10 + 2) = local_68;
    *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_64;
    *(undefined4 *)(puVar10 + 3) = uStack_60;
    *(undefined4 *)((longlong)puVar10 + 0x1c) = uStack_5c;
    *(undefined4 *)(puVar10 + 4) = local_58;
    *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_54;
    *(undefined4 *)(puVar10 + 5) = uStack_50;
    *(undefined4 *)((longlong)puVar10 + 0x2c) = uStack_4c;
    *(undefined2 *)(puVar10 + 0xf) = 0xffff;
    FUN_144ca8120(puVar10 + 0xe,lVar5,uVar3);
    uVar4 = uRam000000014c6dae48;
    puVar10[6] = _DAT_14c6dae40;
    puVar10[7] = uVar4;
    uVar4 = uRam000000014c6dae58;
    puVar10[8] = _DAT_14c6dae50;
    puVar10[9] = uVar4;
    uVar4 = uRam000000014c6dae68;
    puVar10[10] = _DAT_14c6dae60;
    puVar10[0xb] = uVar4;
    uVar4 = _DAT_14c6dae78;
    puVar10[0xc] = _DAT_14c6dae70;
    puVar10[0xd] = uVar4;
    *(undefined1 *)(puVar10 + 0x10) = 0;
    *(undefined4 *)((longlong)puVar10 + 0x7c) = 0;
    lVar5 = (longlong)((*(int *)(param_1 + 0x20) + -1) * *(int *)(param_1 + 0x38));
    _Dst = (void *)(*(longlong *)(param_1 + 0x28) + lVar5 * 4);
    pvVar1 = (void *)(*(longlong *)(param_1 + 0x28) + (lVar5 + *(int *)(param_1 + 0x38)) * 4);
    uVar11 = (ulonglong)((longlong)pvVar1 + (3 - (longlong)_Dst)) >> 2;
    if (pvVar1 < _Dst) {
      uVar11 = 0;
    }
    if (uVar11 != 0) {
      memset(_Dst,0,uVar11 << 2);
    }
  }
  return;
}



// FUNCTION 144b41050 FUN_144b41050 body=5123 status=ok
// SIG undefined FUN_144b41050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b41050(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  byte *pbVar8;
  int *piVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  int iVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  bool bVar21;
  float fVar22;
  undefined8 local_res10;
  undefined8 local_res18;
  int local_res20;
  undefined8 local_1a58;
  undefined8 uStack_1a50;
  undefined1 *local_1a48;
  int local_1a40;
  undefined1 *local_1a38;
  undefined4 local_1a30;
  undefined8 local_1a28;
  float fStack_1a20;
  float fStack_1a1c;
  undefined8 local_1a18;
  undefined8 uStack_1a10;
  int local_1a08;
  undefined4 local_19f8;
  undefined4 local_19f4;
  undefined4 local_19f0;
  undefined4 local_19e8;
  undefined4 uStack_19e4;
  undefined4 uStack_19e0;
  undefined4 uStack_19dc;
  int local_19d8;
  undefined8 local_19c8;
  undefined8 local_19c0;
  undefined8 local_19b8;
  longlong local_19b0;
  undefined4 local_19a8;
  uint local_19a4;
  longlong local_19a0;
  undefined4 local_1998;
  uint local_1994;
  undefined1 local_1990 [24];
  longlong local_1978;
  undefined4 local_1970;
  uint local_196c;
  longlong local_1968;
  undefined4 local_1960;
  uint local_195c;
  longlong local_1958;
  undefined1 *local_1948;
  int local_1940;
  uint local_193c;
  undefined1 local_1938 [64];
  undefined1 *local_18f8;
  int local_18f0;
  uint local_18ec;
  undefined1 local_18e8 [64];
  longlong local_18a8;
  undefined4 local_18a0;
  float local_189c;
  undefined8 local_1898;
  undefined4 local_1890;
  undefined8 local_1888;
  undefined8 local_1880;
  undefined8 local_1878;
  undefined4 local_1870;
  undefined1 *local_1868;
  int local_1860;
  uint local_185c;
  undefined1 local_1858 [256];
  longlong local_1758;
  undefined1 *local_1750;
  longlong *local_1748;
  undefined8 local_1730;
  undefined8 local_1728;
  undefined8 local_1714;
  undefined4 local_170c;
  undefined8 local_1708;
  undefined8 uStack_1700;
  undefined8 local_16bc;
  undefined4 local_16b4;
  undefined4 local_1678;
  undefined8 local_1670;
  undefined8 local_1668;
  undefined8 uStack_1660;
  undefined4 local_1648;
  undefined8 local_1640;
  undefined8 local_1638;
  undefined8 uStack_1630;
  undefined8 local_1608;
  undefined8 uStack_1600;
  undefined8 local_15f8;
  undefined4 local_15f0;
  undefined8 local_15a8;
  undefined8 uStack_15a0;
  undefined8 local_1598;
  undefined4 local_1590;
  int local_1518;
  int local_1514;
  undefined1 *local_1510;
  undefined1 *local_1508;
  undefined8 local_1500;
  undefined8 uStack_14f8;
  float local_14e8;
  float fStack_14e4;
  float fStack_14e0;
  float fStack_14dc;
  float local_14d8;
  float fStack_14d4;
  float fStack_14d0;
  float fStack_14cc;
  undefined8 local_14c8;
  uint local_14c0;
  longlong *local_14b8 [2];
  longlong local_14a8;
  longlong local_14a0;
  longlong local_1498;
  undefined1 local_1488 [16];
  int local_1478;
  float local_1470;
  undefined4 local_146c;
  int local_1468;
  undefined4 *local_1460;
  undefined4 *local_1458;
  int local_1440;
  int local_143c;
  int local_11f8;
  int local_11f4;
  undefined1 local_11e8 [608];
  undefined1 local_f88 [512];
  undefined1 local_d88 [64];
  longlong local_d48;
  
  lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  local_1a28 = 0x114;
  if (*(char *)(lVar16 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar13 = *(longlong *)(lVar16 + 0xf0);
  if (lVar13 == 0) {
    if (*(char *)(local_1a28 + lVar16) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar13 = FUN_144b3f4a0();
    *(longlong *)(lVar16 + 0xf0) = lVar13;
  }
  lVar16 = *(longlong *)(lVar13 + 0x3e0);
  local_1a18 = "Stinit";
  uStack_1a10 = "";
  local_1a58 = "LtFindMeshPath";
  uStack_1a50 = "";
  local_1958 = lVar16;
  if (lVar16 != 0) {
    local_1a18 = "Stinit";
    uStack_1a10 = "";
    local_1a58 = "LtFindMeshPath";
    uStack_1a50 = "";
    FUN_144be9870(lVar16,&local_1a58,&local_1a18);
  }
  FUN_144fc05e0(param_2 + 0x90);
  *(undefined4 *)(param_3 + 0x30) = 0xffffffff;
  if ((*(char *)(param_2 + 0xc1) != '\0') &&
     (cVar10 = FUN_144fc34e0(param_1,param_2), cVar10 == '\0')) {
    *(undefined4 *)(param_3 + 0x74) = 0xffffffff;
    *(undefined4 *)(param_3 + 0x70) = 0;
    *(undefined1 *)(param_3 + 0x7c) = 5;
    goto LAB_144b423e3;
  }
  local_res10 = (byte *)CONCAT44(local_res10._4_4_,*(undefined4 *)(param_2 + 0x90));
  FUN_144fa9ea0(*(undefined8 *)(param_1 + 0xf0),&local_res10);
  local_19f0 = *(undefined4 *)(param_2 + 0x68);
  local_1880 = *(undefined8 *)(param_2 + 0xa0);
  local_1878 = *(undefined8 *)(param_2 + 0x88);
  local_18a0 = *(undefined4 *)(param_2 + 0x90);
  local_1898 = *(undefined8 *)(param_2 + 0xa8);
  local_189c = *(float *)(param_2 + 0x80) * 0.5;
  local_1890 = *(undefined4 *)(param_2 + 0xb0);
  local_1888 = *(undefined8 *)(param_2 + 0xb8);
  local_1870 = *(undefined4 *)(param_2 + 0xd4);
  local_18a8 = param_1;
  FUN_144b3fb20(local_d88,&local_18a8);
  cVar10 = FUN_144c49600(local_d88);
  if ((((cVar10 != '\0') && (*(int *)(param_2 + 0xac) < 0)) && (*(longlong *)(param_2 + 0xb8) == 0))
     && (*(char *)(param_2 + 0xc0) == '\0')) {
    FUN_144bde670(&local_1a58,local_f88,0x200);
    FUN_144be6160(&local_1a58,
                  "A pathfind was requested without a clearance filter or a clearance cache. Failing to use a clearance cache will significantly reduce runtime performance. To force this behavior, set hkaiNavMeshPathSearchParameters::m_forceUncachedUnfilteredClearance to true."
                 );
    iVar11 = FUN_144bfc110(0x2453518d,local_f88,"Utilities\\hkaiPathfindingUtil.cpp",0x1b0);
    if (iVar11 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_144bde6e0(&local_1a58);
  }
  if (*(char *)(param_2 + 0xcf) != '\0') {
    local_d48 = param_3 + 0x80;
  }
  FUN_144be90e0(0x297c7aa2);
  FUN_144c305a0(&local_19e8,param_1,param_2,param_2 + 0x20);
  iVar11 = 0;
  *(undefined4 *)(param_3 + 0x20) = local_19e8;
  *(undefined4 *)(param_3 + 0x24) = uStack_19e4;
  *(undefined4 *)(param_3 + 0x28) = uStack_19e0;
  *(undefined4 *)(param_3 + 0x2c) = uStack_19dc;
  *(int *)(param_3 + 0x30) = local_19d8;
  if (local_19d8 == -1) {
    *(undefined4 *)(param_3 + 0x74) = 0xffffffff;
    *(undefined4 *)(param_3 + 0x70) = 0;
    *(undefined1 *)(param_3 + 0x7c) = 5;
  }
  else {
    local_1868 = local_1858;
    local_18f8 = local_18e8;
    local_1948 = local_1938;
    local_1860 = 0;
    local_185c = 0x80000010;
    local_18f0 = 0;
    local_18ec = 0x80000010;
    local_1940 = 0;
    local_193c = 0x80000010;
    if (*(int *)(param_2 + 0x68) < 1) {
LAB_144b422ce:
      *(undefined4 *)(param_3 + 0x74) = 0xffffffff;
      *(undefined4 *)(param_3 + 0x70) = 0;
      *(undefined1 *)(param_3 + 0x7c) = 5;
    }
    else {
      do {
        FUN_144c305a0(&local_1a58,param_1,param_2);
        iVar18 = *(int *)(param_3 + 0x48) + 1;
        if ((int)(*(uint *)(param_3 + 0x4c) & 0x7fffffff) < iVar18) {
          FUN_144c30d80(param_3 + 0x40,&PTR_vftable_14c6e47a0,(longlong)iVar18);
        }
        puVar15 = (undefined4 *)
                  ((longlong)*(int *)(param_3 + 0x48) * 0x20 + *(longlong *)(param_3 + 0x40));
        if (puVar15 != (undefined4 *)0x0) {
          *puVar15 = (float)local_1a58;
          puVar15[1] = local_1a58._4_4_;
          puVar15[2] = (float)uStack_1a50;
          puVar15[3] = uStack_1a50._4_4_;
          puVar15[4] = (int)local_1a48;
        }
        *(int *)(param_3 + 0x48) = iVar18;
        if ((int)local_1a48 != -1) {
          iVar18 = local_1860 + 1;
          if ((int)(local_185c & 0x7fffffff) < iVar18) {
            FUN_144bdedb0(&local_1868,&PTR_vftable_14c6e47a0,(longlong)iVar18);
          }
          puVar15 = (undefined4 *)(local_1868 + (longlong)local_1860 * 0x10);
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = (float)local_1a58;
            puVar15[1] = local_1a58._4_4_;
            puVar15[2] = (float)uStack_1a50;
            puVar15[3] = uStack_1a50._4_4_;
          }
          iVar12 = local_18f0 + 1;
          local_1860 = iVar18;
          if ((int)(local_18ec & 0x7fffffff) < iVar12) {
            FUN_144c30fb0(&local_18f8,&PTR_vftable_14c6e47a0,(longlong)iVar12);
          }
          if ((undefined4 *)(local_18f8 + (longlong)local_18f0 * 4) != (undefined4 *)0x0) {
            *(int *)(local_18f8 + (longlong)local_18f0 * 4) = (int)local_1a48;
          }
          iVar18 = local_1940 + 1;
          local_18f0 = iVar12;
          if ((int)(local_193c & 0x7fffffff) < iVar18) {
            FUN_1401f86b2(&local_1948,&PTR_vftable_14c6e47a0,(longlong)iVar18);
          }
          lVar16 = (longlong)local_1940;
          local_1940 = iVar18;
          if ((int *)(local_1948 + lVar16 * 4) != (int *)0x0) {
            *(int *)(local_1948 + lVar16 * 4) = iVar11;
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_2 + 0x68));
      if (local_1860 == 0) goto LAB_144b422ce;
      FUN_144be90e0(0xea9796e0);
      fVar22 = 3.40282e+38;
      local_res10 = (byte *)((ulonglong)local_res10 & 0xffffffffffffff00);
      local_res20 = -1;
      if (*(char *)(param_2 + 0xc3) == '\0') {
LAB_144b4171e:
        lVar13 = local_1a28;
        local_1a58 = "StinitSearch";
        uStack_1a50 = "";
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        cVar10 = *(char *)(local_1a28 + lVar16);
        if (cVar10 == '\0') {
          __dyn_tls_on_demand_init();
          cVar10 = *(char *)(lVar13 + lVar16);
        }
        lVar13 = *(longlong *)(lVar16 + 0xf0);
        if (lVar13 == 0) {
          if (cVar10 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar13 = FUN_144b3f4a0();
          *(longlong *)(lVar16 + 0xf0) = lVar13;
        }
        if (*(longlong *)(lVar13 + 0x3e0) != 0) {
          FUN_144be99f0(*(longlong *)(lVar13 + 0x3e0),&local_1a58);
        }
        uVar19 = 0xffffffff;
        local_19b0 = 0;
        local_19a8 = 0;
        local_19a4 = 0x80000000;
        local_19a0 = 0;
        local_1998 = 0;
        local_1994 = 0x80000000;
        if (*(int *)(param_2 + 200) == -1) {
          local_19c8 = 0;
          local_19b8 = 0;
          local_19c0 = 0;
        }
        else {
          local_res18._0_4_ = (int)*(undefined8 *)(param_2 + 0xec);
          local_res18._4_4_ = (uint)((ulonglong)*(undefined8 *)(param_2 + 0xec) >> 0x20);
          if ((int)local_res18 < 1) {
            local_res18._0_4_ = 0x8000;
          }
          if ((int)local_res18._4_4_ < 1) {
            local_res18._4_4_ = 0x24200;
          }
          FUN_144c2e850(&local_19c8,param_2 + 0x108,&local_res18);
          local_res18 = (int *)CONCAT44(local_res18._4_4_,*(undefined4 *)(param_2 + 200));
          local_19f8 = *(undefined4 *)(param_2 + 0x90);
          FUN_144fa9e40(*(undefined8 *)(param_1 + 0xf0),&local_19f4,&local_19f8);
          uVar19 = local_19f4;
        }
        local_res18._0_4_ = (int)*(undefined8 *)(param_2 + 0xe4);
        local_1978 = 0;
        local_res18._4_4_ = (uint)((ulonglong)*(undefined8 *)(param_2 + 0xe4) >> 0x20);
        if ((int)local_res18 < 1) {
          local_res18._0_4_ = 0x20000;
        }
        local_1970 = 0;
        local_196c = 0x80000000;
        local_1968 = 0;
        if ((int)local_res18._4_4_ < 1) {
          local_res18._4_4_ = 0x90200;
        }
        local_1960 = 0;
        local_195c = 0x80000000;
        FUN_144c2e850(local_1990,param_2 + 0xf8,&local_res18);
        FUN_144b42780(local_14b8,local_1990,&local_19c8);
        local_14d8 = *(float *)(param_2 + 0xe0);
        local_14c8 = *(undefined8 *)(param_2 + 0x98);
        local_1750 = local_d88;
        local_1708 = 0;
        uStack_1700 = 0;
        local_1668 = 0;
        uStack_1660 = 0;
        local_1638 = 0;
        uStack_1630 = 0;
        local_15a8 = 0;
        uStack_15a0 = 0;
        local_1500 = *(undefined8 *)(param_2 + 0x80);
        uStack_14f8 = *(undefined8 *)(param_2 + 0x88);
        local_1514 = local_1860;
        local_1608 = 0;
        uStack_1600 = 0;
        local_14e8 = *(float *)(param_2 + 0xdc);
        local_1730 = 0;
        local_1728 = 0;
        local_1714 = 0xffffffffffffffff;
        local_170c = 4;
        local_16bc = 0xffffffffffffffff;
        local_16b4 = 4;
        local_1678 = 0xffffffff;
        local_1670 = 0;
        local_1648 = 0xffffffff;
        local_1640 = 0;
        local_15f8 = 0;
        local_15f0 = 0xffffffff;
        local_1598 = 0;
        local_1590 = 0xffffffff;
        local_1518 = local_19d8;
        local_1510 = local_1868;
        local_1508 = local_18f8;
        local_1a40 = local_19d8;
        local_1a38 = local_18f8;
        local_1a48 = local_1868;
        uVar3 = 0.0 <= local_14e8 | 2;
        if (local_14d8 < 0.0) {
          uVar3 = (uint)(0.0 <= local_14e8);
        }
        local_146c = *(undefined4 *)(param_2 + 0xd0);
        local_1470 = *(float *)(param_2 + 0xd8);
        if (fVar22 <= *(float *)(param_2 + 0xd8)) {
          local_1470 = fVar22;
        }
        local_14c0 = uVar3 | 0x10;
        if (*(char *)(param_2 + 0xcc) == '\0') {
          local_14c0 = uVar3;
        }
        local_14c0 = local_14c0 | -(uint)(*(char *)(param_2 + 0xcd) != '\0') & 0x20;
        local_14b8[0] = &local_1758;
        local_1748 = &local_14a8;
        local_1a30 = local_19f0;
        local_1758 = param_1;
        fStack_14e4 = local_14e8;
        fStack_14e0 = local_14e8;
        fStack_14dc = local_14e8;
        fStack_14d4 = local_14d8;
        fStack_14d0 = local_14d8;
        fStack_14cc = local_14d8;
        local_res18._0_4_ = uVar19;
        FUN_144b42930(local_14b8,&local_1758,param_2 + 0x80,&local_1a58,&local_res18);
        lVar13 = local_1a28;
        local_1a58 = "StAStar";
        local_res18 = (int *)CONCAT44(local_res18._4_4_,*(undefined4 *)(param_2 + 0x78));
        uStack_1a50 = "";
        cVar10 = *(char *)(local_1a28 + lVar16);
        if (cVar10 == '\0') {
          __dyn_tls_on_demand_init();
          cVar10 = *(char *)(lVar13 + lVar16);
        }
        lVar13 = *(longlong *)(lVar16 + 0xf0);
        if (lVar13 == 0) {
          if (cVar10 == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar13 = FUN_144b3f4a0();
          *(longlong *)(lVar16 + 0xf0) = lVar13;
        }
        if (*(longlong *)(lVar13 + 0x3e0) != 0) {
          FUN_144be99f0(*(longlong *)(lVar13 + 0x3e0),&local_1a58);
        }
        iVar18 = 0;
        FUN_144be90e0(0x81244054);
        iVar11 = (int)local_res18;
        do {
          if (iVar11 <= iVar18) {
            if (local_1478 == -1) {
              iVar12 = 2;
              local_res18 = (int *)((ulonglong)local_res18._4_4_ << 0x20);
            }
            else {
              local_res18 = (int *)CONCAT44(local_res18._4_4_,1);
              iVar12 = 3;
            }
            break;
          }
          iVar18 = iVar18 + 1;
          iVar12 = FUN_144b42680(local_14b8);
          if (iVar12 == 3) {
            local_res18 = (int *)CONCAT44(local_res18._4_4_,(local_1440 < local_143c) + 2);
            FUN_144be90e0(0xaece36eb);
            break;
          }
          FUN_144be90e0(0xaece36eb);
          local_res18 = (int *)((ulonglong)local_res18 & 0xffffffff00000000);
        } while (iVar12 == 0);
        FUN_144be90e0(0x34a97cc);
        if (*(char *)(local_1a28 + lVar16) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar13 = *(longlong *)(lVar16 + 0xf0);
        if (lVar13 == 0) {
          if (*(char *)(local_1a28 + lVar16) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar13 = FUN_144b3f4a0();
          *(longlong *)(lVar16 + 0xf0) = lVar13;
        }
        FUN_144c495c0(local_d88,*(undefined8 *)(lVar13 + 0x3e0));
        if ((char)local_res10 == '\0') {
          if (iVar12 == 0) {
            iVar12 = (local_1478 != -1) + 2;
          }
LAB_144b41d11:
          uVar19 = 0xffffffff;
          *(char *)(param_3 + 0x7d) = (char)local_res18;
          *(int *)(param_3 + 0x70) = iVar18;
          *(char *)(param_3 + 0x7c) = (char)iVar12;
          *(undefined4 *)(param_3 + 0x74) = 0xffffffff;
          if (((iVar12 - 1U & 0xfffffffd) == 0) ||
             (((iVar12 == 2 && (*(char *)(param_2 + 0xce) != '\0')) && (local_1478 != -1)))) {
            iVar11 = local_1478;
            if (iVar12 == 1) {
              iVar11 = local_11f8;
            }
            if (-1 < local_11f4) {
              uVar19 = *(undefined4 *)(local_1948 + (longlong)local_11f4 * 4);
            }
            *(undefined4 *)(param_3 + 0x74) = uVar19;
            local_1460 = (undefined4 *)FUN_144c2ed50(&local_14a8,iVar11);
            local_1458 = local_1460;
            local_1468 = (int)(short)((longlong)local_1460 - local_14a8 >> 4);
            local_1a58 = "Stoutput";
            uStack_1a50 = "";
            *(undefined4 *)(param_3 + 0x78) = *local_1460;
            if (*(char *)(local_1a28 + lVar16) == '\0') {
              __dyn_tls_on_demand_init();
            }
            lVar13 = *(longlong *)(lVar16 + 0xf0);
            if (lVar13 == 0) {
              if (*(char *)(local_1a28 + lVar16) == '\0') {
                __dyn_tls_on_demand_init();
              }
              lVar13 = FUN_144b3f4a0();
              *(longlong *)(lVar16 + 0xf0) = lVar13;
            }
            if (*(longlong *)(lVar13 + 0x3e0) != 0) {
              FUN_144be99f0(*(longlong *)(lVar13 + 0x3e0),&local_1a58);
            }
            for (uVar2 = *(ushort *)
                          (local_1498 + (ulonglong)((uint)(iVar11 * -0x61c8864f) >> 0x18) * 2);
                -1 < (short)uVar2; uVar2 = *(ushort *)(local_14a0 + (ulonglong)uVar2 * 2)) {
              puVar20 = (undefined1 *)((ulonglong)uVar2 * 0x10 + local_14a8);
              if (*(int *)(puVar20 + 8) == iVar11) goto LAB_144b41e95;
            }
            puVar20 = local_1488;
LAB_144b41e95:
            if ((puVar20[0xe] & 4) == 0) {
              puVar14 = puVar20;
              iVar11 = 0;
              do {
                iVar18 = iVar11;
                local_res10 = (byte *)CONCAT44(local_res10._4_4_,iVar18);
                if (*(short *)(puVar14 + 0xc) == -1) {
                  puVar14 = (undefined1 *)0x0;
                }
                else {
                  puVar14 = (undefined1 *)((longlong)*(short *)(puVar14 + 0xc) * 0x10 + local_14a8);
                }
                iVar11 = iVar18 + 1;
              } while ((puVar14[0xe] & 4) == 0);
              iVar11 = 0x7fffffff;
              if (iVar18 < 0x7fffffff) {
                iVar11 = iVar18;
              }
              if ((int)(*(uint *)(param_3 + 0x5c) & 0x7fffffff) < iVar11) {
                FUN_144c310a0(param_3 + 0x50,&PTR_vftable_14c6e47a0,(longlong)iVar11);
                iVar18 = (int)local_res10;
              }
              if ((*(int *)(param_3 + 0x58) < iVar11) || (iVar11 < *(int *)(param_3 + 0x58))) {
                *(int *)(param_3 + 0x58) = iVar11;
              }
              if ((puVar20[0xe] & 4) == 0) {
                lVar16 = (longlong)(iVar18 + -1);
                do {
                  if (*(short *)(puVar20 + 0xc) == -1) {
                    puVar20 = (undefined1 *)0x0;
                  }
                  else {
                    puVar20 = (undefined1 *)
                              ((longlong)*(short *)(puVar20 + 0xc) * 0x10 + local_14a8);
                  }
                  if ((lVar16 < iVar11) && ((puVar20[0xe] & 4) == 0)) {
                    *(undefined4 *)(*(longlong *)(param_3 + 0x50) + lVar16 * 4) =
                         *(undefined4 *)(puVar20 + 8);
                  }
                  lVar16 = lVar16 + -1;
                } while ((puVar20[0xe] & 4) == 0);
              }
            }
            if (iVar12 == 1) {
              puVar15 = (undefined4 *)(local_1868 + (longlong)local_11f4 * 0x10);
              local_19e8 = *puVar15;
              uStack_19e4 = puVar15[1];
              uStack_19e0 = puVar15[2];
              uStack_19dc = puVar15[3];
LAB_144b41fff:
              local_1a18 = (char *)CONCAT44(uStack_19e4,local_19e8);
              uStack_1a10 = (char *)CONCAT44(uStack_19dc,uStack_19e0);
            }
            else {
              if (*(int *)(param_3 + 0x58) == 0) goto LAB_144b41fff;
              uVar3 = *(uint *)(*(longlong *)(param_3 + 0x50) + -4 +
                               (longlong)*(int *)(param_3 + 0x58) * 4);
              local_res10 = (byte *)(CONCAT44(local_res10._4_4_,uVar3) & 0xffffffff003fffff);
              FUN_144c2ead0(*(undefined8 *)
                             ((ulonglong)(uVar3 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38)),
                            &local_res10,&local_1a28,&local_1a58);
              local_1a18 = (char *)CONCAT44(local_1a28._4_4_ +
                                            (local_1a58._4_4_ - local_1a28._4_4_) *
                                            fRam000000014c6dad94,
                                            (float)local_1a28 +
                                            ((float)local_1a58 - (float)local_1a28) * _DAT_14c6dad90
                                           );
              uStack_1a10 = (char *)CONCAT44(fStack_1a1c +
                                             (uStack_1a50._4_4_ - fStack_1a1c) *
                                             fRam000000014c6dad9c,
                                             fStack_1a20 +
                                             ((float)uStack_1a50 - fStack_1a20) *
                                             fRam000000014c6dad98);
            }
            if ((*(byte *)(param_2 + 0xc2) & 1) != 0) {
              FUN_144be90e0(0xf6f5bebc);
              lVar16 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              if (*(char *)(lVar16 + 0x114) == '\0') {
                local_res10 = (byte *)(param_2 + 0xc2);
                local_res18 = (int *)(param_3 + 0x58);
                __dyn_tls_on_demand_init();
              }
              local_res18 = (int *)(param_3 + 0x58);
              local_res10 = (byte *)(param_2 + 0xc2);
              lVar13 = *(longlong *)(lVar16 + 0xf0);
              if (lVar13 == 0) {
                if (*(char *)(lVar16 + 0x114) == '\0') {
                  __dyn_tls_on_demand_init();
                }
                lVar13 = FUN_144b3f4a0();
                *(longlong *)(lVar16 + 0xf0) = lVar13;
              }
              piVar9 = local_res18;
              pbVar8 = local_res10;
              lVar16 = *(longlong *)(lVar13 + 0x3e0);
              local_1a58 = "Ttsmooth";
              uStack_1a50 = "";
              if (lVar16 != 0) {
                local_1a58 = "Ttsmooth";
                uStack_1a50 = "";
                FUN_144b3f370(lVar16,&local_1a58);
              }
              bVar1 = *pbVar8;
              fVar22 = *(float *)(param_2 + 0x80) * 0.5;
              local_res10 = (byte *)CONCAT71(local_res10._1_7_,fVar22 <= *(float *)(param_2 + 0xd4))
              ;
              local_res18 = (int *)(CONCAT44(local_res18._4_4_,(uint)bVar1) & 0xffffffff00000002);
              if ((int)(*(uint *)(param_3 + 0x6c) & 0x7fffffff) < *piVar9) {
                FUN_144c30b60(param_3 + 0x60,&PTR_vftable_14c6e47a0,(longlong)*piVar9);
              }
              FUN_144fc1780(param_1,local_d88,param_3 + 0x50,local_19d8,&local_19e8,&local_1a18,
                            (int)local_res18,bVar1 & 4,fVar22,(char)local_res10,param_3 + 0x60,0,0,0
                           );
              if (lVar16 != 0) {
                local_1a58 = "Et";
                uStack_1a50 = "";
                FUN_144b3f260(lVar16,&local_1a58);
              }
            }
          }
          uVar17 = 0x6d6b15cc;
        }
        else {
          if (iVar12 == 1) goto LAB_144b41d11;
          lVar16 = (longlong)local_res20;
          local_1a58 = *(char **)(local_1868 + lVar16 * 0x10);
          uStack_1a50 = *(char **)((longlong)(local_1868 + lVar16 * 0x10) + 8);
          local_1a18 = (char *)CONCAT44(uStack_19e4,local_19e8);
          uStack_1a10 = (char *)CONCAT44(uStack_19dc,uStack_19e0);
          local_1a48 = (undefined1 *)
                       CONCAT44(local_1a48._4_4_,*(undefined4 *)(local_18f8 + lVar16 * 4));
          local_1a08 = local_19d8;
          FUN_144c30480(param_1,local_d88,param_2,&local_1a18,&local_1a58,param_3,
                        *(undefined4 *)(local_1948 + lVar16 * 4));
          uVar17 = 0x33f1878d;
        }
        FUN_144be90e0(uVar17);
        FUN_144c2ec10(local_11e8);
        local_1960 = 0;
        if ((-1 < (int)local_195c) && (local_1968 != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_1968,local_195c & 0x7fffffff);
        }
        local_1968 = 0;
        local_195c = 0x80000000;
        local_1970 = 0;
        if ((-1 < (int)local_196c) && (local_1978 != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_1978,local_196c & 0x7fffffff);
        }
        local_1978 = 0;
        local_196c = 0x80000000;
        local_1998 = 0;
        if ((-1 < (int)local_1994) && (local_19a0 != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_19a0,local_1994 & 0x7fffffff);
        }
        local_19a0 = 0;
        local_1994 = 0x80000000;
        local_19a8 = 0;
        if ((-1 < (int)local_19a4) && (local_19b0 != 0)) {
          (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                    (&PTR_vftable_14c6e47c0,local_19b0,local_19a4 & 0x7fffffff);
        }
        local_19b0 = 0;
        local_19a4 = 0x80000000;
      }
      else {
        local_1a58 = "StcheckLineOfSight";
        uStack_1a50 = "";
        lVar16 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(char *)(local_1a28 + lVar16) == '\0') {
          __dyn_tls_on_demand_init();
        }
        lVar13 = *(longlong *)(lVar16 + 0xf0);
        if (lVar13 == 0) {
          if (*(char *)(local_1a28 + lVar16) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar13 = FUN_144b3f4a0();
          *(longlong *)(lVar16 + 0xf0) = lVar13;
        }
        if (*(longlong *)(lVar13 + 0x3e0) != 0) {
          FUN_144be99f0(*(longlong *)(lVar13 + 0x3e0),&local_1a58);
        }
        puVar20 = local_1868;
        local_res20 = FUN_144c309a0(local_1868,local_1860,&local_1a58,(ulonglong)local_res10 & 0xff)
        ;
        pcVar6 = *(char **)(puVar20 + (longlong)local_res20 * 0x10);
        pcVar7 = *(char **)((longlong)(puVar20 + (longlong)local_res20 * 0x10) + 8);
        iVar11 = *(int *)(local_18f8 + (longlong)local_res20 * 4);
        local_1a18 = pcVar6;
        uStack_1a10 = pcVar7;
        local_1a08 = iVar11;
        cVar10 = FUN_144c300f0(param_1,param_2,&local_19e8,&local_1a18,param_3);
        bVar21 = cVar10 != '\0';
        if (bVar21) {
          fVar22 = *(float *)(param_3 + 0x78);
        }
        local_res10 = (byte *)CONCAT71(local_res10._1_7_,bVar21);
        if ((*(char *)(param_2 + 0xc3) == '\x02') ||
           ((*(char *)(param_2 + 0xc3) == '\x01' && (*(longlong *)(param_2 + 0x98) == 0)))) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((!bVar21) || (!bVar5)) goto LAB_144b4171e;
        local_1a08 = local_19d8;
        local_1a18 = (char *)CONCAT44(uStack_19e4,local_19e8);
        uStack_1a10 = (char *)CONCAT44(uStack_19dc,uStack_19e0);
        local_1a48 = (undefined1 *)CONCAT44(local_1a48._4_4_,iVar11);
        local_1a58 = pcVar6;
        uStack_1a50 = pcVar7;
        FUN_144c30480(param_1,local_d88,param_2,&local_1a18,&local_1a58,param_3,
                      *(undefined4 *)(local_1948 + (longlong)local_res20 * 4));
      }
    }
    local_1940 = 0;
    if ((-1 < (int)local_193c) && (local_1948 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_1948,(ulonglong)(local_193c & 0x7fffffff) << 2);
    }
    local_1948 = (undefined1 *)0x0;
    local_193c = 0x80000000;
    local_18f0 = 0;
    if ((-1 < (int)local_18ec) && (local_18f8 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_18f8,(ulonglong)(local_18ec & 0x7fffffff) << 2);
    }
    local_18f8 = (undefined1 *)0x0;
    local_18ec = 0x80000000;
    local_1860 = 0;
    if ((-1 < (int)local_185c) && (local_1868 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_1868,(ulonglong)(local_185c & 0x7fffffff) << 4);
    }
    local_1868 = (undefined1 *)0x0;
    local_185c = 0x80000000;
    lVar16 = local_1958;
  }
  FUN_144b3fa90(local_d88);
LAB_144b423e3:
  if (lVar16 != 0) {
    local_1a58 = &DAT_14999058c;
    uStack_1a50 = &DAT_14999058e;
    FUN_144be9b20(lVar16,&local_1a58);
  }
  return;
}



// FUNCTION 144b42460 UnregisterGameObj body=101 status=ok
// SIG AKRESULT UnregisterGameObj(__uint64 param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::UnregisterGameObj(unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::UnregisterGameObj(__uint64 param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4b42460  355  ?UnregisterGameObj@SoundEngine@AK@@YA?AW4AKRESULT@@_K@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (0xffffffffffffffdf < param_1) {
    return 0x1f;
  }
  uVar1 = FUN_145087ee0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0xc,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_1;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144b424d0 StopMIDIOnEvent body=389 status=ok
// SIG AKRESULT StopMIDIOnEvent(uint param_1, __uint64 param_2, uint param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::StopMIDIOnEvent(unsigned int,unsigned __int64,unsigned
   int) */

AKRESULT __cdecl AK::SoundEngine::StopMIDIOnEvent(uint param_1,__uint64 param_2,uint param_3)

{
  int iVar1;
  undefined2 uVar2;
  AKRESULT AVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
                    /* 0x4b424d0  329  ?StopMIDIOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@I_KI@Z */
  lVar4 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar1 = *(int *)(lVar4 + 0x108), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
      if (*(int *)(lVar4 + 0x108) < 0) goto LAB_144b42537;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar4 + 0x108);
    if (bVar6) {
      *(int *)(lVar4 + 0x108) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar6);
LAB_144b42537:
  if (*(uint *)(lVar4 + 0x150) == 0) {
    lVar5 = 0;
  }
  else {
    for (lVar5 = *(longlong *)
                  (*(longlong *)(lVar4 + 0x148) +
                  ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar4 + 0x150)) * 8); lVar5 != 0;
        lVar5 = *(longlong *)(lVar5 + 8)) {
      if (*(uint *)(lVar5 + 0x10) == param_1) goto LAB_144b42567;
    }
    lVar5 = 0;
LAB_144b42567:
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar4 + 0x108);
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
LAB_144b425d4:
      if ((lVar5 == 0) && (param_1 != 0)) {
        AVar3 = 0xf;
      }
      else {
        uVar2 = FUN_145088020();
        lVar4 = FUN_145080f50(DAT_14c790fd8,0x24,uVar2);
        *(longlong *)(lVar4 + 0xc) = lVar5;
        *(uint *)(lVar4 + 0x14) = param_1;
        *(__uint64 *)(lVar4 + 4) = param_2;
        *(uint *)(lVar4 + 0x18) = param_3;
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
        AVar3 = 1;
      }
      return AVar3;
    }
    LOCK();
    bVar6 = iVar1 == *(int *)(lVar4 + 0x108);
    if (bVar6) {
      *(int *)(lVar4 + 0x108) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar6) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar4 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar4 + 0x140));
      }
      goto LAB_144b425d4;
    }
    iVar1 = *(int *)(lVar4 + 0x108);
  } while( true );
}



// FUNCTION 144b42660 CancelEventCallbackCookie body=25 status=ok
// SIG void CancelEventCallbackCookie(void * param_1)

/* void __cdecl AK::SoundEngine::CancelEventCallbackCookie(void * __ptr64) */

void __cdecl AK::SoundEngine::CancelEventCallbackCookie(void *param_1)

{
                    /* 0x4b42660  37  ?CancelEventCallbackCookie@SoundEngine@AK@@YAXPEAX@Z */
  if (DAT_14c790ff4 != '\0') {
    FUN_1450b2360(DAT_14c790fc0,param_1);
    return;
  }
  return;
}



// FUNCTION 144b42680 FUN_144b42680 body=244 status=ok
// SIG undefined FUN_144b42680(void)

undefined8 FUN_144b42680(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  ushort uVar4;
  uint local_res8 [2];
  
  if (*(int *)(param_1 + 0xf) == 0) {
    return 2;
  }
  uVar2 = *param_1;
  plVar1 = param_1 + 2;
  FUN_144c45440(local_res8,uVar2,uVar2,param_1 + 0xe,plVar1,plVar1,param_1 + 0x10,plVar1,uVar2);
  *(uint *)(param_1 + 0x58) = local_res8[0];
  uVar4 = *(ushort *)(param_1[4] + (ulonglong)(local_res8[0] * -0x61c8864f >> 0x18) * 2);
  if (-1 < (short)uVar4) {
    do {
      puVar3 = (undefined8 *)((ulonglong)uVar4 * 0x10 + *plVar1);
      if (*(uint *)(puVar3 + 1) == local_res8[0]) goto LAB_144b42726;
      uVar4 = *(ushort *)(param_1[3] + (ulonglong)uVar4 * 2);
    } while (-1 < (short)uVar4);
  }
  puVar3 = param_1 + 6;
LAB_144b42726:
  if ((*(byte *)((longlong)puVar3 + 0xe) & 8) != 0) {
    *(uint *)((longlong)param_1 + 0x2c4) = local_res8[0] & 0x3fffff;
    return 1;
  }
  if ((*(int *)(param_1 + 0xf) < *(int *)((longlong)param_1 + 0x7c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < *(int *)(param_1 + 5))) {
    uVar2 = 2;
    if (*(int *)(param_1 + 0xf) != 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 3;
}



// FUNCTION 144b42780 FUN_144b42780 body=431 status=ok
// SIG undefined FUN_144b42780(void)

longlong FUN_144b42780(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x48) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x30) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x34) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffff;
  uVar1 = *param_2;
  *(int *)(param_1 + 0x7c) = (int)((ulonglong)(longlong)*(int *)(param_2 + 2) >> 3);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  FUN_144fd6720(param_1 + 0x200,param_3);
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(longlong *)(param_1 + 0x310) = param_1 + 800;
  *(undefined4 *)(param_1 + 0x318) = 0;
  *(undefined4 *)(param_1 + 0x31c) = 0x80000032;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined8 *)(param_1 + 0x2ec) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x4b8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4d8) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x518) = 0;
  *(undefined8 *)(param_1 + 0x508) = 0;
  *(undefined8 *)(param_1 + 0x510) = 0;
  lVar2 = param_2[1];
  iVar4 = *(int *)((longlong)param_2 + 0x14);
  if (0x200 < iVar4) {
    *(longlong *)(param_1 + 0x20) = lVar2;
    iVar3 = (int)((ulonglong)(longlong)(iVar4 + -0x200) / 0x12);
    iVar4 = 0;
    if ((-1 < iVar3) && (iVar4 = iVar3, 0x8000 < iVar3)) {
      iVar4 = 0x8000;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    *(longlong *)(param_1 + 0x10) = lVar2 + 0x200;
    *(longlong *)(param_1 + 0x18) = (longlong)(iVar4 << 4) + lVar2 + 0x200;
    if (lVar2 != 0) {
      FUN_144bfb550(lVar2,0xffffffff,0x80);
      FUN_144bfb550(*(undefined8 *)(param_1 + 0x18),0xffffffff,
                    (longlong)((int)(iVar4 * 2 + (iVar4 * 2 >> 0x1f & 3U)) >> 2));
    }
  }
  return param_1;
}



// FUNCTION 144b42930 FUN_144b42930 body=791 status=ok
// SIG undefined FUN_144b42930(void)

void FUN_144b42930(longlong *param_1,longlong *param_2,undefined4 *param_3,undefined8 *param_4,
                  int *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  ushort uVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  float fVar21;
  longlong local_48;
  longlong lStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  *(undefined4 *)(param_1 + 0xa4) = *param_3;
  plVar16 = (longlong *)0x0;
  param_1[0x58] = -1;
  *param_1 = (longlong)param_2;
  iVar3 = *param_5;
  plVar17 = plVar16;
  if (iVar3 != -1) {
    param_1[0x5a] = *param_2;
    *(int *)(param_1 + 0x5b) = iVar3;
    param_1[0x9f] = 0;
    param_1[0xa0] = 0;
    plVar17 = param_1 + 0x5a;
  }
  local_38 = *param_4;
  uStack_30 = param_4[1];
  iVar3 = *(int *)(param_4 + 5);
  lVar6 = param_4[4];
  uVar19 = *(uint *)(param_4 + 3);
  plVar7 = (longlong *)*param_1;
  uVar18 = uVar19 >> 0x16;
  if (*(uint *)(plVar7 + 0x39) != uVar18) {
    lVar12 = *(longlong *)((ulonglong)uVar18 * 0x120 + *(longlong *)(*plVar7 + 0x38));
    plVar7[0x38] = *(longlong *)(lVar12 + 0x20);
    lVar10 = *(longlong *)(lVar12 + 0x68);
    plVar7[0x3a] = *(longlong *)(lVar12 + 0x60);
    plVar7[0x3b] = lVar10;
    lVar10 = *(longlong *)(lVar12 + 0x78);
    plVar7[0x3c] = *(longlong *)(lVar12 + 0x70);
    plVar7[0x3d] = lVar10;
    lVar10 = *(longlong *)(lVar12 + 0x88);
    plVar7[0x3e] = *(longlong *)(lVar12 + 0x80);
    plVar7[0x3f] = lVar10;
    uVar4 = *(undefined4 *)(lVar12 + 0x94);
    uVar8 = *(undefined4 *)(lVar12 + 0x98);
    uVar9 = *(undefined4 *)(lVar12 + 0x9c);
    *(undefined4 *)(plVar7 + 0x40) = *(undefined4 *)(lVar12 + 0x90);
    *(undefined4 *)((longlong)plVar7 + 0x204) = uVar4;
    *(undefined4 *)(plVar7 + 0x41) = uVar8;
    *(undefined4 *)((longlong)plVar7 + 0x20c) = uVar9;
    *(uint *)(plVar7 + 0x39) = uVar18;
  }
  param_5._0_4_ = uVar19 & 0x3fffff;
  local_48 = 0;
  lStack_40 = 0;
  puVar11 = (undefined4 *)FUN_144c44fc0(plVar7[0x38],&param_5,&local_48);
  *(uint *)(plVar7 + 3) = uVar19;
  *(undefined4 *)((longlong)plVar7 + 0x1c) = *puVar11;
  *(undefined4 *)(plVar7 + 4) = puVar11[1];
  *(undefined2 *)((longlong)plVar7 + 0x24) = *(undefined2 *)(puVar11 + 2);
  *(undefined2 *)((longlong)plVar7 + 0x26) = *(undefined2 *)((longlong)puVar11 + 10);
  plVar7[5] = local_48;
  plVar7[6] = lStack_40;
  *(int *)(plVar7 + 0x28) = (int)plVar7[3];
  plVar7[0x29] = (longlong)plVar7 + 0x1c;
  plVar7[0x2a] = local_48;
  plVar7[0x2b] = lStack_40;
  FUN_144fd76d0(param_1 + 0x10,*param_1,plVar17,uVar19,&local_38,param_4[4],param_4[2],iVar3);
  puVar11 = (undefined4 *)FUN_144c2ed50(param_1 + 2,0xff800000);
  *puVar11 = 0;
  fVar21 = (float)FUN_144fd7980(param_1 + 0x10,0xff800000);
  puVar11[1] = fVar21;
  *(ushort *)((longlong)puVar11 + 0xe) = *(ushort *)((longlong)puVar11 + 0xe) | 5;
  if (fVar21 < *(float *)((longlong)param_1 + 0x44)) {
    *(float *)((longlong)param_1 + 0x44) = fVar21;
    *(undefined4 *)(param_1 + 8) = 0xff800000;
  }
  if ((float)puVar11[1] <= 3.40282e+38 && (float)puVar11[1] != 3.40282e+38) {
    uVar13 = *(ushort *)(param_1[4] + 0x4e);
    if (-1 < (short)uVar13) {
      do {
        pfVar14 = (float *)((ulonglong)uVar13 * 0x10 + param_1[2]);
        if (pfVar14[2] == -INFINITY) goto LAB_144b42b66;
        uVar13 = *(ushort *)(param_1[3] + (ulonglong)uVar13 * 2);
      } while (-1 < (short)uVar13);
    }
    pfVar14 = (float *)(param_1 + 6);
LAB_144b42b66:
    uVar19 = *(uint *)(param_1 + 0xf);
    uVar20 = (ulonglong)(int)uVar19;
    fVar21 = pfVar14[1];
    fVar1 = *(float *)((longlong)param_1 + 0x4c);
    lVar12 = param_1[0xe];
    fVar2 = *pfVar14;
    *(uint *)(param_1 + 0xf) = uVar19 + 1;
    *(undefined4 *)(lVar12 + uVar20 * 8) = 0xff800000;
    *(float *)(lVar12 + 4 + uVar20 * 8) = fVar21 * fVar1 + fVar2;
    uVar4 = *(undefined4 *)(param_1[0xe] + uVar20 * 8);
    iVar5 = *(int *)(param_1[0xe] + 4 + uVar20 * 8);
    while (0 < (int)uVar19) {
      uVar18 = (int)(uVar19 - 1) / 2;
      uVar19 = (uint)uVar20;
      lVar12 = param_1[0xe];
      if (*(int *)(lVar12 + 4 + (longlong)(int)uVar18 * 8) <= iVar5) break;
      uVar15 = uVar20 & 0xffffffff;
      uVar20 = (ulonglong)uVar18;
      *(undefined8 *)(lVar12 + uVar15 * 8) = *(undefined8 *)(lVar12 + (longlong)(int)uVar18 * 8);
      uVar19 = uVar18;
    }
    *(undefined4 *)(param_1[0xe] + (longlong)(int)uVar19 * 8) = uVar4;
    *(int *)(param_1[0xe] + 4 + (longlong)(int)uVar19 * 8) = iVar5;
  }
  plVar17 = plVar16;
  if (0 < iVar3) {
    do {
      if (*(int *)(lVar6 + (longlong)plVar16 * 4) != -1) {
        lVar12 = FUN_144c2ed50(param_1 + 2,(uint)plVar17 | 0xff400000);
        *(ushort *)(lVar12 + 0xe) = *(ushort *)(lVar12 + 0xe) | 8;
        *(undefined4 *)(lVar12 + 4) = 0;
      }
      plVar16 = (longlong *)((longlong)plVar16 + 1);
      plVar17 = (longlong *)(ulonglong)((uint)plVar17 + 1);
    } while ((longlong)plVar16 < (longlong)iVar3);
  }
  return;
}



// FUNCTION 144b42c50 FUN_144b42c50 body=208 status=ok
// SIG undefined FUN_144b42c50(void)

undefined8 FUN_144b42c50(undefined8 *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  int local_res8 [8];
  
  if (*(int *)(param_1 + 0xf) == 0) {
    return 2;
  }
  uVar1 = *param_1;
  FUN_144c4b7d0(local_res8,uVar1,uVar1,param_1 + 0xe,param_1 + 2,param_1 + 0x22,param_1 + 0x10,
                param_1 + 2,uVar1);
  *(int *)(param_1 + 0x26) = local_res8[0];
  iVar4 = 0;
  if (0 < (longlong)*(int *)(param_1 + 0x11)) {
    lVar3 = 0;
    piVar2 = (int *)(param_1 + 0x14);
    do {
      if (*piVar2 == local_res8[0]) {
        if (iVar4 != -1) {
          return 1;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
      piVar2 = piVar2 + 8;
    } while (lVar3 < *(int *)(param_1 + 0x11));
  }
  if ((*(int *)(param_1 + 0xf) < *(int *)((longlong)param_1 + 0x7c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < *(int *)(param_1 + 5))) {
    uVar1 = 2;
    if (*(int *)(param_1 + 0xf) != 0) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 3;
}



// FUNCTION 144b42d20 FUN_144b42d20 body=248 status=ok
// SIG undefined FUN_144b42d20(void)

void FUN_144b42d20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x10] = param_2;
  iVar7 = (int)(*(longlong *)(param_4 + 0x30) - *(longlong *)(param_4 + 0x28) >> 2);
  if (0 < iVar7) {
    lVar9 = 0;
    lVar10 = 0;
    do {
      iVar3 = *(int *)(param_1 + 0x11);
      lVar8 = *(longlong *)(param_4 + 0x18);
      *(undefined4 *)(param_1 + (longlong)iVar3 * 4 + 0x14) =
           *(undefined4 *)(*(longlong *)(param_4 + 0x28) + lVar9 * 4);
      puVar1 = (undefined4 *)(lVar10 + lVar8);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar2 = param_1 + (longlong)iVar3 * 4 + 0x12;
      *(undefined4 *)puVar2 = *puVar1;
      *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
      *(undefined4 *)(puVar2 + 1) = uVar5;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar6;
      *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + 1;
      if (*(int *)(*(longlong *)(param_4 + 0x28) + lVar9 * 4) != -1) {
        lVar8 = FUN_144c33310(param_1 + 2);
        *(ushort *)(lVar8 + 0xe) = *(ushort *)(lVar8 + 0xe) | 8;
        *(undefined4 *)(lVar8 + 4) = 0;
      }
      lVar9 = lVar9 + 1;
      lVar10 = lVar10 + 0x10;
    } while (lVar9 < iVar7);
  }
  FUN_144c4b200(param_1,*(undefined4 *)(param_4 + 0x10),param_4,param_3);
  param_1[0x23] = *param_1;
  param_1[0x22] = param_1 + 2;
  return;
}



// FUNCTION 144b42e20 FUN_144b42e20 body=309 status=ok
// SIG undefined FUN_144b42e20(void)

longlong FUN_144b42e20(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x4c) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x48) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x30) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x34) = 0x7f7fffee;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffff;
  uVar1 = *param_2;
  *(int *)(param_1 + 0x7c) = (int)((ulonglong)(longlong)*(int *)(param_2 + 2) >> 3);
  *(undefined4 *)(param_1 + 300) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  lVar2 = param_2[1];
  iVar4 = *(int *)((longlong)param_2 + 0x14);
  if (0x200 < iVar4) {
    *(longlong *)(param_1 + 0x20) = lVar2;
    iVar3 = (int)((ulonglong)(longlong)(iVar4 + -0x200) / 0x12);
    iVar4 = 0;
    if ((-1 < iVar3) && (iVar4 = iVar3, 0x8000 < iVar3)) {
      iVar4 = 0x8000;
    }
    *(int *)(param_1 + 0x28) = iVar4;
    *(longlong *)(param_1 + 0x10) = lVar2 + 0x200;
    *(longlong *)(param_1 + 0x18) = (longlong)(iVar4 << 4) + lVar2 + 0x200;
    if (lVar2 != 0) {
      FUN_144bfb550(lVar2,0xffffffff,0x80);
      FUN_144bfb550(*(undefined8 *)(param_1 + 0x18),0xffffffff,
                    (longlong)((int)(iVar4 * 2 + (iVar4 * 2 >> 0x1f & 3U)) >> 2));
    }
  }
  return param_1;
}



// FUNCTION 144b42f60 CancelBankCallbackCookie body=27 status=ok
// SIG void CancelBankCallbackCookie(void * param_1)

/* void __cdecl AK::SoundEngine::CancelBankCallbackCookie(void * __ptr64) */

void __cdecl AK::SoundEngine::CancelBankCallbackCookie(void *param_1)

{
                    /* 0x4b42f60  35  ?CancelBankCallbackCookie@SoundEngine@AK@@YAXPEAX@Z */
  if (DAT_14c790ff4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000144b42f76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c790fe0 + 0x40))(DAT_14c790fe0,param_1);
    return;
  }
  return;
}



// FUNCTION 144b42f80 GetCurrentLanguage body=8 status=ok
// SIG wchar_t * GetCurrentLanguage(void)

/* wchar_t const * __ptr64 __cdecl AK::StreamMgr::GetCurrentLanguage(void) */

wchar_t * __cdecl AK::StreamMgr::GetCurrentLanguage(void)

{
                    /* 0x4b42f80  71  ?GetCurrentLanguage@StreamMgr@AK@@YAPEB_WXZ */
  return (wchar_t *)&DAT_14c7915a0;
}



// FUNCTION 144b42f90 FUN_144b42f90 body=69 status=ok
// SIG undefined FUN_144b42f90(void)

uint FUN_144b42f90(longlong param_1)

{
  uint uVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    uVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x10) + 0x18))();
    if (*(uint *)(param_1 + 0x10) <= uVar1) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 144b42fe0 FUN_144b42fe0 body=31 status=ok
// SIG undefined FUN_144b42fe0(void)

longlong FUN_144b42fe0(int param_1,int param_2)

{
  return (longlong)param_1 * (longlong)param_2 + ((longlong)param_1 * (longlong)param_2 >> 0x3f) +
         0x8000 >> 0x10;
}



// FUNCTION 144b43000 FUN_144b43000 body=202 status=ok
// SIG undefined FUN_144b43000(void)

undefined8 FUN_144b43000(longlong param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0x23;
  }
  else if (param_4 == 0) {
    uVar2 = 6;
  }
  else if ((uint)param_2 < *(uint *)(param_1 + 0x10)) {
    pcVar1 = *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18) + 0x90);
    if ((pcVar1 != (code *)0x0) && (((param_3 & 3) != 0 || ((param_3 & 0xf0000) == 0x10000)))) {
      uVar2 = (*pcVar1)(param_1,param_2,1,param_3,param_4);
      if ((int)uVar2 == 0) {
        uVar2 = FUN_144b58a60(param_1,param_4,1,param_3);
        return uVar2;
      }
      if ((char)uVar2 != '\a') {
        return uVar2;
      }
    }
    uVar2 = FUN_144b55730(param_1,param_2 & 0xffffffff,1,param_3,param_4);
  }
  else {
    uVar2 = 0x10;
  }
  return uVar2;
}



// FUNCTION 144b430d0 StopPlayingID body=100 status=ok
// SIG void StopPlayingID(uint param_1, int param_2, AkCurveInterpolation param_3)

/* void __cdecl AK::SoundEngine::StopPlayingID(unsigned int,int,enum AkCurveInterpolation) */

void __cdecl AK::SoundEngine::StopPlayingID(uint param_1,int param_2,AkCurveInterpolation param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4b430d0  331
                       ?StopPlayingID@SoundEngine@AK@@YAXIHW4AkCurveInterpolation@@@Z */
  if ((DAT_14c790ff4 != '\0') && (param_1 != 0)) {
    uVar1 = FUN_145087ff0();
    lVar2 = FUN_145080f50(DAT_14c790fd8,0x21,uVar1);
    *(uint *)(lVar2 + 4) = param_1;
    *(int *)(lVar2 + 8) = param_2;
    *(AkCurveInterpolation *)(lVar2 + 0xc) = param_3;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144b43140 RegisterGameObj body=105 status=ok
// SIG AKRESULT RegisterGameObj(__uint64 param_1)

/* enum AKRESULT __cdecl AK::SoundEngine::RegisterGameObj(unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::RegisterGameObj(__uint64 param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4b43140  228  ?RegisterGameObj@SoundEngine@AK@@YA?AW4AKRESULT@@_K@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (0xffffffffffffffdf < param_1) {
    return 0x1f;
  }
  uVar1 = FUN_145087ed0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,0xb,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_1;
  *(undefined1 *)(lVar2 + 0xc) = 0;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144b431b0 FUN_144b431b0 body=136 status=ok
// SIG undefined FUN_144b431b0(void)

void FUN_144b431b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_144b3f230();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x94)) && (*(longlong *)(param_1 + 0x88) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x88),
               (ulonglong)(*(uint *)(param_1 + 0x94) & 0x7fffffff) * 0x30);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  return;
}



// FUNCTION 144b43240 FUN_144b43240 body=391 status=ok
// SIG undefined FUN_144b43240(void)

void FUN_144b43240(undefined1 (*param_1) [16],float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar4 [16];
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  
  fVar3 = param_2[8];
  fVar5 = param_2[9];
  fVar6 = param_2[10];
  fVar7 = param_2[5];
  fVar8 = param_2[6];
  fVar1 = *param_2;
  fVar2 = param_2[2];
  if (0.0 <= fVar6) {
    fVar10 = param_2[1] - param_2[4];
    if (0.0 - fVar7 <= fVar1) {
      auVar9._0_4_ = fVar8 - fVar5;
      auVar9._4_4_ = fVar3 - fVar2;
      auVar9._12_4_ = fVar7 + fVar1 + fVar6 + 1.0;
      auVar9._8_4_ = fVar10;
    }
    else {
      auVar9._0_4_ = fVar3 + fVar2;
      auVar9._4_4_ = fVar5 + fVar8;
      auVar9._12_4_ = fVar10;
      auVar9._8_4_ = (fVar6 + 1.0) - (fVar7 + fVar1);
    }
  }
  else {
    fVar10 = param_2[4] + param_2[1];
    if (fVar1 <= fVar7) {
      auVar9._4_4_ = (1.0 - fVar6) - (fVar1 - fVar7);
      auVar9._0_4_ = fVar10;
      auVar9._12_4_ = fVar3 - fVar2;
      auVar9._8_4_ = fVar5 + fVar8;
    }
    else {
      auVar9._0_4_ = (1.0 - fVar6) + (fVar1 - fVar7);
      auVar9._4_4_ = fVar10;
      auVar9._12_4_ = fVar8 - fVar5;
      auVar9._8_4_ = fVar3 + fVar2;
    }
  }
  fVar3 = auVar9._0_4_ * auVar9._0_4_;
  fVar5 = auVar9._4_4_ * auVar9._4_4_;
  fVar6 = auVar9._8_4_ * auVar9._8_4_;
  fVar7 = auVar9._12_4_ * auVar9._12_4_;
  fVar8 = fVar5 + fVar3;
  fVar3 = fVar3 + fVar5;
  fVar5 = fVar7 + fVar6;
  fVar6 = fVar6 + fVar7;
  auVar4._0_4_ = fVar5 + fVar8;
  auVar4._4_4_ = fVar6 + fVar3;
  auVar4._8_4_ = fVar8 + fVar5;
  auVar4._12_4_ = fVar3 + fVar6;
  if (auVar4._0_4_ != 0.0) {
    auVar4 = sqrtps(auVar4,auVar4);
    auVar9 = divps(auVar9,auVar4);
    *param_1 = auVar9;
    return;
  }
  *(undefined8 *)*param_1 = 0;
  *(undefined8 *)(*param_1 + 8) = 0;
  return;
}



// FUNCTION 144b433d0 FUN_144b433d0 body=1137 status=ok
// SIG undefined FUN_144b433d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_144b433d0(undefined1 *param_1,longlong *param_2)

{
  float *pfVar1;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  longlong lVar24;
  undefined8 uVar25;
  uint uVar26;
  longlong lVar27;
  int iVar28;
  longlong lVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint local_res8 [2];
  
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (*(char *)((longlong)param_2 + 0x74) == '\0') {
    lVar24 = *param_2;
    if (lVar24 != 0) {
      FUN_144b3d910(lVar24);
    }
    lVar29 = *(longlong *)(param_1 + 0xf8);
    *(longlong *)(param_1 + 0xf8) = lVar24;
    if (lVar29 != 0) {
      FUN_144b3f230();
    }
    *(int *)(param_1 + 0xa8) = (int)param_2[0xe];
    *(int *)(param_1 + 0x80) = (int)param_2[0xc];
    lVar24 = param_2[5];
    if (lVar24 != 0) {
      FUN_144b3d910(lVar24);
    }
    lVar29 = *(longlong *)(param_1 + 0x100);
    *(longlong *)(param_1 + 0x100) = lVar24;
    if (lVar29 != 0) {
      FUN_144b3f230();
    }
    *(uint *)(param_1 + 0x84) = (uint)(*(float *)((longlong)param_2 + 100) == 0.0);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    iVar28 = (int)param_2[0xe];
    if (iVar28 < 0) {
      iVar28 = (int)param_2[0xc];
    }
    lVar24 = FUN_144b3f860(*(undefined8 *)(param_1 + 0xf8),iVar28);
    uVar25 = *(undefined8 *)(lVar24 + 0x28);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar24 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar25;
    *param_1 = *(undefined1 *)((longlong)param_2 + 0x75);
    uVar25 = uRam000000014c6dae48;
    *(undefined8 *)(param_1 + 0x40) = _DAT_14c6dae40;
    *(undefined8 *)(param_1 + 0x48) = uVar25;
    uVar25 = uRam000000014c6dae58;
    *(undefined8 *)(param_1 + 0x50) = _DAT_14c6dae50;
    *(undefined8 *)(param_1 + 0x58) = uVar25;
    uVar25 = CONCAT44(uRam000000014c6dae6c,uRam000000014c6dae68);
    *(ulonglong *)(param_1 + 0x60) = CONCAT44(uRam000000014c6dae64,_DAT_14c6dae60);
    *(undefined8 *)(param_1 + 0x68) = uVar25;
    uVar23 = DAT_14c6dae7c;
    uVar22 = DAT_14c6dae78;
    uVar21 = DAT_14c6dae74;
    *(undefined4 *)(param_1 + 0x70) = DAT_14c6dae70;
    *(undefined4 *)(param_1 + 0x74) = uVar21;
    *(undefined4 *)(param_1 + 0x78) = uVar22;
    *(undefined4 *)(param_1 + 0x7c) = uVar23;
    iVar28 = *(int *)(param_1 + 0xa8);
    if ((-1 < iVar28) && (iVar28 < *(int *)(param_1 + 0x80))) {
      do {
        lVar24 = FUN_144b3f860(*(undefined8 *)(param_1 + 0xf8),iVar28);
        fVar2 = *(float *)(param_1 + 0x50);
        fVar3 = *(float *)(param_1 + 0x54);
        fVar4 = *(float *)(param_1 + 0x58);
        fVar5 = *(float *)(param_1 + 0x5c);
        iVar28 = iVar28 + 1;
        fVar31 = *(float *)(param_1 + 0x40);
        fVar32 = *(float *)(param_1 + 0x44);
        fVar33 = *(float *)(param_1 + 0x48);
        fVar34 = *(float *)(param_1 + 0x4c);
        fVar35 = *(float *)(param_1 + 0x60);
        fVar6 = *(float *)(param_1 + 100);
        fVar7 = *(float *)(param_1 + 0x68);
        fVar8 = *(float *)(param_1 + 0x6c);
        fVar9 = *(float *)(lVar24 + 0x30);
        fVar10 = *(float *)(lVar24 + 0x34);
        fVar11 = *(float *)(lVar24 + 0x38);
        fVar12 = *(float *)(lVar24 + 0x40);
        fVar13 = *(float *)(lVar24 + 0x44);
        fVar14 = *(float *)(lVar24 + 0x48);
        fVar15 = *(float *)(lVar24 + 0x50);
        fVar16 = *(float *)(lVar24 + 0x54);
        fVar17 = *(float *)(lVar24 + 0x58);
        fVar18 = *(float *)(lVar24 + 0x60);
        fVar19 = *(float *)(lVar24 + 100);
        fVar20 = *(float *)(lVar24 + 0x68);
        *(float *)(param_1 + 0x40) = fVar9 * fVar31 + fVar10 * fVar2 + fVar11 * fVar35;
        *(float *)(param_1 + 0x44) = fVar9 * fVar32 + fVar10 * fVar3 + fVar11 * fVar6;
        *(float *)(param_1 + 0x48) = fVar9 * fVar33 + fVar10 * fVar4 + fVar11 * fVar7;
        *(float *)(param_1 + 0x4c) = fVar9 * fVar34 + fVar10 * fVar5 + fVar11 * fVar8;
        *(float *)(param_1 + 0x50) = fVar12 * fVar31 + fVar13 * fVar2 + fVar14 * fVar35;
        *(float *)(param_1 + 0x54) = fVar12 * fVar32 + fVar13 * fVar3 + fVar14 * fVar6;
        *(float *)(param_1 + 0x58) = fVar12 * fVar33 + fVar13 * fVar4 + fVar14 * fVar7;
        *(float *)(param_1 + 0x5c) = fVar12 * fVar34 + fVar13 * fVar5 + fVar14 * fVar8;
        *(float *)(param_1 + 0x60) = fVar15 * fVar31 + fVar16 * fVar2 + fVar17 * fVar35;
        *(float *)(param_1 + 100) = fVar15 * fVar32 + fVar16 * fVar3 + fVar17 * fVar6;
        *(float *)(param_1 + 0x68) = fVar15 * fVar33 + fVar16 * fVar4 + fVar17 * fVar7;
        *(float *)(param_1 + 0x6c) = fVar15 * fVar34 + fVar16 * fVar5 + fVar17 * fVar8;
        *(float *)(param_1 + 0x70) =
             fVar18 * fVar31 + *(float *)(param_1 + 0x70) + fVar19 * fVar2 + fVar20 * fVar35;
        *(float *)(param_1 + 0x74) =
             fVar18 * fVar32 + *(float *)(param_1 + 0x74) + fVar19 * fVar3 + fVar20 * fVar6;
        *(float *)(param_1 + 0x78) =
             fVar18 * fVar33 + *(float *)(param_1 + 0x78) + fVar19 * fVar4 + fVar20 * fVar7;
        *(float *)(param_1 + 0x7c) =
             fVar18 * fVar34 + *(float *)(param_1 + 0x7c) + fVar19 * fVar5 + fVar20 * fVar8;
      } while (iVar28 < *(int *)(param_1 + 0x80));
    }
    fVar2 = *(float *)(param_2 + 3);
    fVar3 = *(float *)((longlong)param_2 + 0x1c);
    fVar4 = *(float *)(param_2 + 9);
    fVar5 = *(float *)((longlong)param_2 + 0x4c);
    fVar34 = *(float *)(param_2 + 2) + *(float *)(param_2 + 8);
    fVar35 = *(float *)((longlong)param_2 + 0x14) + *(float *)((longlong)param_2 + 0x44);
    pfVar1 = (float *)(param_1 + 0x30);
    fVar31 = fVar34 * *(float *)(param_1 + 0x10);
    fVar32 = fVar35 * *(float *)(param_1 + 0x14);
    fVar33 = (fVar2 + fVar4) * *(float *)(param_1 + 0x18);
    *pfVar1 = fVar34 - (fVar32 + fVar31 + fVar33) * *(float *)(param_1 + 0x10);
    *(float *)(param_1 + 0x34) = fVar35 - (fVar32 + fVar31 + fVar33) * *(float *)(param_1 + 0x14);
    *(float *)(param_1 + 0x38) =
         (fVar2 + fVar4) - (fVar32 + fVar31 + fVar33) * *(float *)(param_1 + 0x18);
    *(float *)(param_1 + 0x3c) =
         (fVar3 + fVar5) - (fVar32 + fVar31 + fVar33) * *(float *)(param_1 + 0x1c);
    uVar25 = FUN_144b3f860(*(undefined8 *)(param_1 + 0xf8),*(undefined4 *)(param_1 + 0x80));
    FUN_144c3a690(uVar25,*(undefined8 *)(param_1 + 0x100),param_1 + 0x10,param_1 + 0x40,pfVar1);
    fVar2 = *(float *)((longlong)param_2 + 0x14);
    fVar3 = *(float *)(param_2 + 3);
    fVar4 = *(float *)((longlong)param_2 + 0x1c);
    *(float *)(param_1 + 0x20) = *pfVar1 - *(float *)(param_2 + 2);
    *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x34) - fVar2;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x38) - fVar3;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x3c) - fVar4;
    uVar25 = uRam000000014c6dae48;
    *(undefined8 *)(param_1 + 0xb0) = _DAT_14c6dae40;
    *(undefined8 *)(param_1 + 0xb8) = uVar25;
    uVar25 = uRam000000014c6dae58;
    *(undefined8 *)(param_1 + 0xc0) = _DAT_14c6dae50;
    *(undefined8 *)(param_1 + 200) = uVar25;
    uVar23 = uRam000000014c6dae6c;
    uVar22 = uRam000000014c6dae68;
    uVar21 = uRam000000014c6dae64;
    *(undefined4 *)(param_1 + 0xd0) = _DAT_14c6dae60;
    *(undefined4 *)(param_1 + 0xd4) = uVar21;
    *(undefined4 *)(param_1 + 0xd8) = uVar22;
    *(undefined4 *)(param_1 + 0xdc) = uVar23;
    uVar23 = DAT_14c6dae7c;
    uVar22 = DAT_14c6dae78;
    uVar21 = DAT_14c6dae74;
    *(undefined4 *)(param_1 + 0xe0) = DAT_14c6dae70;
    *(undefined4 *)(param_1 + 0xe4) = uVar21;
    *(undefined4 *)(param_1 + 0xe8) = uVar22;
    *(undefined4 *)(param_1 + 0xec) = uVar23;
    if (-1 < (int)param_2[0xe]) {
      lVar24 = FUN_144b3f860(*(undefined8 *)(param_1 + 0xf8));
      FUN_144ca81d0(lVar24 + 0x70,local_res8,*(undefined8 *)(param_1 + 0x100));
      uVar26 = local_res8[0] & 0x3fffff;
      lVar24 = *(longlong *)
                (*(longlong *)
                  ((ulonglong)(local_res8[0] >> 0x16) * 0x120 +
                  *(longlong *)(*(longlong *)(param_1 + 0x100) + 0x38)) + 0x20);
      iVar28 = *(int *)(lVar24 + 0x50);
      lVar29 = (longlong)iVar28;
      if ((int)uVar26 < *(int *)(lVar24 + 0x20)) {
        uVar30 = uVar26;
        if (*(int *)(lVar24 + 0x98) != 0) {
          uVar30 = *(uint *)(*(longlong *)(lVar24 + 0x90) + (ulonglong)uVar26 * 4);
        }
        if (uVar30 == 0xffffffff) {
          lVar24 = *(longlong *)(lVar24 + 0x48) + (longlong)(int)(iVar28 * uVar26) * 4;
          lVar29 = lVar24 + lVar29 * 4;
        }
        else {
          lVar29 = *(longlong *)(lVar24 + 0x120) + ((int)(uVar30 * iVar28) + lVar29) * 4;
          lVar24 = *(longlong *)(lVar24 + 0x120) + (longlong)(int)(uVar30 * iVar28) * 4;
        }
      }
      else {
        lVar27 = (longlong)(int)((uVar26 - *(int *)(lVar24 + 0x20)) * iVar28);
        lVar29 = *(longlong *)(lVar24 + 0x140) + (lVar27 + lVar29) * 4;
        lVar24 = *(longlong *)(lVar24 + 0x140) + lVar27 * 4;
      }
      *(longlong *)(param_1 + 0x98) = lVar24;
      *(longlong *)(param_1 + 0xa0) = lVar29;
      FUN_144c39770(param_1,(int)param_2[0xe],(int)param_2[0xc] + 1,param_2 + 2,param_2 + 8,
                    &DAT_14c6dae40,param_1 + 0x88);
    }
    return param_1;
  }
  *(undefined4 *)(param_1 + 0xf0) = 5;
  return param_1;
}



// FUNCTION 144b43850 FUN_144b43850 body=2258 status=ok
// SIG undefined FUN_144b43850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_144b43850(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined4 uVar8;
  float fVar9;
  undefined8 uVar10;
  bool bVar11;
  int iVar12;
  float *pfVar13;
  longlong lVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  byte local_res8 [8];
  uint local_res18 [2];
  int local_res20 [2];
  uint local_1a8 [4];
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined8 local_188;
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
  undefined8 local_148;
  undefined8 uStack_140;
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
  
  if (*(int *)(param_1 + 0xf0) == 4) {
    *(undefined4 *)(param_1 + 0xf0) = 2;
    return 2;
  }
  if (*(int *)(param_1 + 0xf0) != 5) {
    puVar1 = param_2 + 9;
    puVar2 = (undefined8 *)(param_1 + 0x88);
    iVar3 = *(int *)(param_1 + 0x80);
    iVar12 = *(int *)(param_1 + 0x84);
    local_res18[0] = CONCAT31(local_res18[0]._1_3_,iVar12 != 0);
    fVar39 = *(float *)(param_1 + 0x30);
    fVar41 = *(float *)(param_1 + 0x34);
    fVar43 = *(float *)(param_1 + 0x38);
    uVar8 = *(undefined4 *)(param_1 + 0x3c);
    fVar48 = *(float *)(param_1 + 0x50);
    fVar49 = *(float *)(param_1 + 0x54);
    fVar50 = *(float *)(param_1 + 0x58);
    fVar51 = *(float *)(param_1 + 0x5c);
    fVar56 = *(float *)(param_1 + 0x60);
    fVar57 = *(float *)(param_1 + 100);
    fVar58 = *(float *)(param_1 + 0x68);
    fVar59 = *(float *)(param_1 + 0x6c);
    fVar60 = *(float *)(param_1 + 0x70);
    fVar61 = *(float *)(param_1 + 0x74);
    fVar62 = *(float *)(param_1 + 0x78);
    fVar63 = *(float *)(param_1 + 0x7c);
    uVar18 = *(undefined8 *)(param_1 + 0x20);
    uVar10 = *(undefined8 *)(param_1 + 0x28);
    fVar24 = *(float *)(param_1 + 0x40);
    fVar28 = *(float *)(param_1 + 0x44);
    fVar30 = *(float *)(param_1 + 0x48);
    fVar55 = *(float *)(param_1 + 0x4c);
    local_198 = fVar60;
    fStack_194 = fVar61;
    fStack_190 = fVar62;
    fStack_18c = fVar63;
    local_148 = uVar18;
    uStack_140 = uVar10;
    local_138 = fVar56;
    fStack_134 = fVar57;
    fStack_130 = fVar58;
    fStack_12c = fVar59;
    local_128 = fVar48;
    fStack_124 = fVar49;
    fStack_120 = fVar50;
    fStack_11c = fVar51;
    local_118 = fVar24;
    fStack_114 = fVar28;
    fStack_110 = fVar30;
    fStack_10c = fVar55;
    local_108 = fVar48;
    fStack_104 = fVar49;
    fStack_100 = fVar50;
    fStack_fc = fVar51;
    local_f8 = fVar56;
    fStack_f4 = fVar57;
    fStack_f0 = fVar58;
    fStack_ec = fVar59;
    local_e8 = fVar60;
    fStack_e4 = fVar61;
    fStack_e0 = fVar62;
    fStack_dc = fVar63;
    if (puVar2 != puVar1) {
      FUN_144c396d0(puVar1,&PTR_vftable_14c6e47a0);
      FUN_144c396d0(puVar2,&PTR_vftable_14c6e47a0);
      uVar5 = *puVar1;
      *puVar1 = *puVar2;
      *puVar2 = uVar5;
      uVar4 = *(undefined4 *)(param_2 + 10);
      *(undefined4 *)(param_2 + 10) = *(undefined4 *)(param_1 + 0x90);
      *(undefined4 *)(param_1 + 0x90) = uVar4;
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x54);
      *(undefined4 *)((longlong)param_2 + 0x54) = *(undefined4 *)(param_1 + 0x94);
      *(undefined4 *)(param_1 + 0x94) = uVar4;
    }
    *(undefined4 *)(param_1 + 0x90) = 0;
    pfVar13 = (float *)FUN_144b3f860(*(undefined8 *)(param_1 + 0xf8),iVar3);
    pfVar16 = pfVar13;
    if (iVar12 == 0) {
      pfVar16 = pfVar13 + 4;
    }
    fVar54 = *pfVar16;
    fVar33 = pfVar16[1];
    fVar35 = pfVar16[2];
    local_168 = pfVar16[3];
    *param_2 = uVar18;
    param_2[1] = uVar10;
    *(float *)(param_2 + 2) = fVar39;
    *(float *)((longlong)param_2 + 0x14) = fVar41;
    *(float *)(param_2 + 3) = fVar43;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar8;
    fVar52 = fVar60 + fVar54 * fVar24 + fVar33 * fVar48 + fVar35 * fVar56;
    fVar53 = fVar61 + fVar54 * fVar28 + fVar33 * fVar49 + fVar35 * fVar57;
    fVar54 = fVar62 + fVar54 * fVar30 + fVar33 * fVar50 + fVar35 * fVar58;
    *(float *)(param_2 + 4) = fVar52;
    *(float *)((longlong)param_2 + 0x24) = fVar53;
    *(float *)(param_2 + 5) = fVar54;
    *(float *)((longlong)param_2 + 0x2c) = local_168;
    auVar26._4_4_ = -(uint)(pfVar13[5] == pfVar13[1]);
    auVar26._0_4_ = -(uint)(pfVar13[4] == *pfVar13);
    auVar26._8_4_ = -(uint)(pfVar13[6] == pfVar13[2]);
    auVar26._12_4_ = -(uint)(pfVar13[7] == pfVar13[3]);
    iVar12 = movmskps((int)pfVar16,auVar26);
    if (iVar12 == 0xf) {
      FUN_144c39b20(param_1,0,param_2,local_168);
      *(undefined4 *)(param_1 + 0xf0) = 1;
      uVar18 = 1;
    }
    else {
      fVar39 = fVar39 - fVar52;
      fVar41 = fVar41 - fVar53;
      fVar43 = fVar43 - fVar54;
      fVar33 = *(float *)(param_1 + 0x10) * fVar39;
      fVar35 = *(float *)(param_1 + 0x14) * fVar41;
      fVar37 = *(float *)(param_1 + 0x18) * fVar43;
      fVar39 = fVar39 - (fVar37 + fVar35 + fVar33) * *(float *)(param_1 + 0x10);
      fVar41 = fVar41 - (fVar37 + fVar35 + fVar33) * *(float *)(param_1 + 0x14);
      fVar43 = fVar43 - (fVar37 + fVar35 + fVar33) * *(float *)(param_1 + 0x18);
      if (local_168 * local_168 * _DAT_14c6dafc0 <=
          fVar43 * fVar43 + fVar41 * fVar41 + fVar39 * fVar39) {
        fStack_164 = local_168;
        fStack_160 = local_168;
        fStack_15c = local_168;
        iVar12 = FUN_144c5ca80(*(undefined8 *)(param_1 + 0xf8),iVar3,(undefined1)local_res18[0],
                               local_res20,local_res8);
        if (iVar12 != 0) {
          bVar11 = false;
          fVar39 = fVar24;
          fVar41 = fVar28;
          fVar43 = fVar30;
          iVar12 = iVar3;
          while( true ) {
            lVar14 = FUN_144b3f860(*(undefined8 *)(param_1 + 0xf8),iVar12);
            if ((*(byte *)(lVar14 + 0x80) & 0x10) != 0) {
              bVar11 = true;
            }
            if (iVar12 == local_res20[0]) break;
            fVar33 = *(float *)(lVar14 + 0x40);
            fVar35 = *(float *)(lVar14 + 0x44);
            fVar37 = *(float *)(lVar14 + 0x48);
            iVar12 = iVar12 + 1;
            fVar45 = *(float *)(lVar14 + 0x50);
            fVar22 = *(float *)(lVar14 + 0x54);
            fVar46 = *(float *)(lVar14 + 0x58);
            fVar32 = *(float *)(lVar14 + 0x60);
            fVar34 = *(float *)(lVar14 + 100);
            fVar36 = *(float *)(lVar14 + 0x68);
            fVar38 = *(float *)(lVar14 + 0x30);
            fVar31 = *(float *)(lVar14 + 0x34);
            fVar9 = *(float *)(lVar14 + 0x38);
            fVar40 = fVar45 * fVar39;
            fVar42 = fVar45 * fVar41;
            fVar44 = fVar45 * fVar43;
            fVar45 = fVar45 * fVar55;
            fVar23 = fVar31 * fVar48;
            fVar27 = fVar31 * fVar49;
            fVar29 = fVar31 * fVar50;
            fVar31 = fVar31 * fVar51;
            fVar19 = fVar22 * fVar48;
            fVar20 = fVar22 * fVar49;
            fVar21 = fVar22 * fVar50;
            fVar22 = fVar22 * fVar51;
            fVar60 = fVar60 + fVar32 * fVar39 + fVar34 * fVar48 + fVar36 * fVar56;
            fVar61 = fVar61 + fVar32 * fVar41 + fVar34 * fVar49 + fVar36 * fVar57;
            fVar62 = fVar62 + fVar32 * fVar43 + fVar34 * fVar50 + fVar36 * fVar58;
            fVar63 = fVar63 + fVar32 * fVar55 + fVar34 * fVar51 + fVar36 * fVar59;
            fVar48 = fVar37 * fVar56 + fVar35 * fVar48 + fVar33 * fVar39;
            fVar49 = fVar37 * fVar57 + fVar35 * fVar49 + fVar33 * fVar41;
            fVar50 = fVar37 * fVar58 + fVar35 * fVar50 + fVar33 * fVar43;
            fVar51 = fVar37 * fVar59 + fVar35 * fVar51 + fVar33 * fVar55;
            fVar39 = fVar23 + fVar38 * fVar39 + fVar9 * fVar56;
            fVar41 = fVar27 + fVar38 * fVar41 + fVar9 * fVar57;
            fVar43 = fVar29 + fVar38 * fVar43 + fVar9 * fVar58;
            fVar55 = fVar31 + fVar38 * fVar55 + fVar9 * fVar59;
            fVar56 = fVar56 * fVar46 + fVar40 + fVar19;
            fVar57 = fVar57 * fVar46 + fVar42 + fVar20;
            fVar58 = fVar58 * fVar46 + fVar44 + fVar21;
            fVar59 = fVar59 * fVar46 + fVar45 + fVar22;
          }
          pfVar15 = (float *)FUN_144b3f860(*(undefined8 *)(param_1 + 0xf8));
          pfVar16 = pfVar15;
          if (local_res8[0] == 0) {
            pfVar16 = pfVar15 + 4;
          }
          fVar33 = *pfVar16;
          fVar35 = pfVar16[1];
          fVar37 = pfVar16[2];
          fStack_17c = pfVar16[3];
          fStack_180 = fVar33 * fVar43 + fVar62 + fVar35 * fVar50 + fVar37 * fVar58;
          fStack_14c = 0.0 - fStack_15c;
          local_188 = CONCAT44(fVar33 * fVar41 + fVar61 + fVar35 * fVar49 + fVar37 * fVar57,
                               fVar33 * fVar39 + fVar60 + fVar35 * fVar48 + fVar37 * fVar56);
          local_158 = fVar52;
          fStack_154 = fVar53;
          fStack_150 = fVar54;
          FUN_144c39240(0.0 - local_168,&local_188,param_1 + 0x10,&local_178,&local_168);
          local_188 = *(longlong *)(param_1 + 0x100);
          if (pfVar13[0x1c] != -NAN) {
            FUN_144ca81d0(pfVar13 + 0x1c,local_res18,local_188);
            local_1a8[0] = local_res18[0] & 0x3fffff;
            FUN_144c52b70(*(undefined8 *)
                           (*(longlong *)
                             ((ulonglong)(local_res18[0] >> 0x16) * 0x120 +
                             *(longlong *)(local_188 + 0x38)) + 0x20),local_1a8,&local_158);
            fVar53 = local_158 * fVar24 + fStack_154 * local_128 + fStack_150 * local_138;
            fVar37 = local_158 * fVar28 + fStack_154 * fStack_124 + fStack_150 * fStack_134;
            fVar45 = local_158 * fVar30 + fStack_154 * fStack_120 + fStack_150 * fStack_130;
            fStack_18c = fStack_14c -
                         (fVar45 * fStack_190 + fVar37 * fStack_194 + fVar53 * local_198);
            fVar33 = *(float *)(param_1 + 0x10) * fVar53;
            fVar35 = *(float *)(param_1 + 0x14) * fVar37;
            fVar52 = *(float *)(param_1 + 0x18) * fVar45;
            fVar24 = fVar37 * fStack_174 + fVar53 * local_178;
            fVar28 = fVar53 * local_178 + fVar37 * fStack_174;
            fVar30 = fStack_18c + fVar45 * fStack_170;
            fVar54 = fVar45 * fStack_170 + fStack_18c;
            auVar25._0_4_ = 0.0 - (fVar30 + fVar24);
            auVar25._4_4_ = 0.0 - (fVar54 + fVar28);
            auVar25._8_4_ = 0.0 - (fVar24 + fVar30);
            auVar25._12_4_ = 0.0 - (fVar28 + fVar54);
            auVar7._4_4_ = fVar52 + fVar35 + fVar33;
            auVar7._0_4_ = fVar52 + fVar35 + fVar33;
            auVar7._8_4_ = fVar52 + fVar35 + fVar33;
            auVar7._12_4_ = fVar52 + fVar35 + fVar33;
            auVar26 = divps(auVar25,auVar7);
            local_178 = local_178 + auVar26._0_4_ * *(float *)(param_1 + 0x10);
            fStack_174 = fStack_174 + auVar26._4_4_ * *(float *)(param_1 + 0x14);
            fStack_170 = fStack_170 + auVar26._8_4_ * *(float *)(param_1 + 0x18);
            fStack_16c = fStack_16c + auVar26._12_4_ * *(float *)(param_1 + 0x1c);
            local_198 = fVar53;
            fStack_194 = fVar37;
            fStack_190 = fVar45;
          }
          fVar54 = fStack_16c;
          fVar30 = fStack_170;
          fVar28 = fStack_174;
          fVar24 = local_178;
          lVar14 = *(longlong *)(param_1 + 0x100);
          fVar33 = local_168;
          fVar35 = fStack_164;
          fVar52 = fStack_160;
          fVar53 = fStack_15c;
          if (pfVar15[0x1c] != -NAN) {
            FUN_144ca81d0(pfVar15 + 0x1c,local_res18,lVar14);
            local_1a8[0] = local_res18[0] & 0x3fffff;
            FUN_144c52b70(*(undefined8 *)
                           (*(longlong *)
                             ((ulonglong)(local_res18[0] >> 0x16) * 0x120 +
                             *(longlong *)(lVar14 + 0x38)) + 0x20),local_1a8,&local_198);
            fVar35 = local_198 * fVar39 + fStack_194 * fVar48 + fStack_190 * fVar56;
            fVar52 = local_198 * fVar41 + fStack_194 * fVar49 + fStack_190 * fVar57;
            fVar22 = local_198 * fVar43 + fStack_194 * fVar50 + fStack_190 * fVar58;
            fStack_18c = fStack_18c - (fVar22 * fVar62 + fVar52 * fVar61 + fVar35 * fVar60);
            fVar53 = fVar35 * *(float *)(param_1 + 0x10);
            fVar37 = fVar52 * *(float *)(param_1 + 0x14);
            fVar45 = fVar22 * *(float *)(param_1 + 0x18);
            fVar33 = fVar52 * fStack_164 + fVar35 * local_168;
            fVar35 = fVar35 * local_168 + fVar52 * fStack_164;
            fVar52 = fStack_18c + fVar22 * fStack_160;
            fStack_18c = fVar22 * fStack_160 + fStack_18c;
            auVar47._0_4_ = 0.0 - (fVar52 + fVar33);
            auVar47._4_4_ = 0.0 - (fStack_18c + fVar35);
            auVar47._8_4_ = 0.0 - (fVar33 + fVar52);
            auVar47._12_4_ = 0.0 - (fVar35 + fStack_18c);
            auVar6._4_4_ = fVar37 + fVar53 + fVar45;
            auVar6._0_4_ = fVar37 + fVar53 + fVar45;
            auVar6._8_4_ = fVar37 + fVar53 + fVar45;
            auVar6._12_4_ = fVar37 + fVar53 + fVar45;
            auVar26 = divps(auVar47,auVar6);
            fVar33 = local_168 + auVar26._0_4_ * *(float *)(param_1 + 0x10);
            fVar35 = fStack_164 + auVar26._4_4_ * *(float *)(param_1 + 0x14);
            fVar52 = fStack_160 + auVar26._8_4_ * *(float *)(param_1 + 0x18);
            fVar53 = fStack_15c + auVar26._12_4_ * *(float *)(param_1 + 0x1c);
          }
          fVar37 = fVar33 - fVar24;
          fVar45 = fVar35 - fVar28;
          fVar22 = fVar52 - fVar30;
          fVar46 = fVar53 - fVar54;
          if (bVar11) {
            local_198 = fVar37;
            fStack_194 = fVar45;
            fStack_190 = fVar22;
            fStack_18c = fVar46;
            FUN_144c39770(param_1,iVar3 + 1,local_res20[0] + 1,&local_178,&local_198,&local_118,
                          param_1 + 0x88);
          }
          *(float *)(param_2 + 6) = fVar24;
          *(float *)((longlong)param_2 + 0x34) = fVar28;
          *(float *)(param_2 + 7) = fVar30;
          *(float *)((longlong)param_2 + 0x3c) = fVar54;
          fVar24 = *(float *)(param_1 + 0x10);
          fVar28 = *(float *)(param_1 + 0x14);
          fStack_18c = *(float *)(param_1 + 0x18);
          fVar30 = fVar24 * (float)local_148;
          fVar54 = fVar28 * local_148._4_4_;
          fVar32 = fStack_18c * (float)uStack_140;
          local_148._0_4_ = (float)local_148 - (fVar32 + fVar54 + fVar30) * fVar24;
          local_148._4_4_ = local_148._4_4_ - (fVar32 + fVar54 + fVar30) * fVar28;
          uStack_140._0_4_ = (float)uStack_140 - (fVar32 + fVar54 + fVar30) * fStack_18c;
          fVar30 = fVar24 * fVar37;
          fVar54 = fVar28 * fVar45;
          fVar32 = fStack_18c * fVar22;
          fVar34 = fVar37 - (fVar32 + fVar54 + fVar30) * fVar24;
          fVar36 = fVar45 - (fVar32 + fVar54 + fVar30) * fVar28;
          fVar30 = fVar22 - (fVar32 + fVar54 + fVar30) * fStack_18c;
          fVar54 = fVar34 * (float)local_148;
          fVar32 = fVar36 * local_148._4_4_;
          fVar38 = fVar30 * (float)uStack_140;
          fVar24 = (fVar30 * local_148._4_4_ - (float)uStack_140 * fVar36) * fVar24;
          fVar28 = (fVar34 * (float)uStack_140 - (float)local_148 * fVar30) * fVar28;
          fStack_18c = (fVar36 * (float)local_148 - local_148._4_4_ * fVar34) * fStack_18c;
          local_148 = CONCAT44(fVar38 + fVar32 + fVar54,fVar38 + fVar32 + fVar54);
          uStack_140 = CONCAT44(fVar38 + fVar32 + fVar54,fVar38 + fVar32 + fVar54);
          local_198 = fStack_18c + fVar28 + fVar24;
          fStack_194 = fStack_18c + fVar28 + fVar24;
          fStack_190 = fStack_18c + fVar28 + fVar24;
          fStack_18c = fStack_18c + fVar28 + fVar24;
          puVar17 = (undefined4 *)FUN_144bea890(&local_138,&local_198,&local_148);
          *(undefined4 *)(param_2 + 8) = *puVar17;
          FUN_144c39b20(param_1,1,param_2);
          *(int *)(param_1 + 0x80) = local_res20[0];
          *(uint *)(param_1 + 0x84) = (uint)local_res8[0];
          *(float *)(param_1 + 0x40) = fVar39;
          *(float *)(param_1 + 0x44) = fVar41;
          *(float *)(param_1 + 0x48) = fVar43;
          *(float *)(param_1 + 0x4c) = fVar55;
          *(float *)(param_1 + 0x60) = fVar56;
          *(float *)(param_1 + 100) = fVar57;
          *(float *)(param_1 + 0x68) = fVar58;
          *(float *)(param_1 + 0x6c) = fVar59;
          *(float *)(param_1 + 0x70) = fVar60;
          *(float *)(param_1 + 0x74) = fVar61;
          *(float *)(param_1 + 0x78) = fVar62;
          *(float *)(param_1 + 0x7c) = fVar63;
          *(float *)(param_1 + 0x30) = fVar33;
          *(float *)(param_1 + 0x34) = fVar35;
          *(float *)(param_1 + 0x38) = fVar52;
          *(float *)(param_1 + 0x3c) = fVar53;
          *(float *)(param_1 + 0x20) = fVar37;
          *(float *)(param_1 + 0x24) = fVar45;
          *(float *)(param_1 + 0x28) = fVar22;
          *(float *)(param_1 + 0x2c) = fVar46;
          *(float *)(param_1 + 0x50) = fVar48;
          *(float *)(param_1 + 0x54) = fVar49;
          *(float *)(param_1 + 0x58) = fVar50;
          *(float *)(param_1 + 0x5c) = fVar51;
          *(undefined4 *)(param_1 + 0xf0) = 0;
          return 0;
        }
      }
      *(undefined4 *)(param_1 + 0xf0) = 2;
      uVar18 = 2;
    }
    return uVar18;
  }
  *(undefined4 *)(param_1 + 0xf0) = 3;
  return 3;
}



// FUNCTION 144b44130 FUN_144b44130 body=430 status=ok
// SIG undefined FUN_144b44130(void)

void FUN_144b44130(uint *param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  short sVar5;
  ulonglong uVar6;
  longlong lVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = param_4 & 0x3fffff;
  uVar9 = param_4;
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 1) = 0xffff;
  }
  else {
    lVar4 = *(longlong *)
             (*(longlong *)((ulonglong)(param_4 >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38)) +
             0x20);
    iVar2 = *(int *)(lVar4 + 0x20);
    if ((int)uVar10 < iVar2) {
      sVar8 = -1;
    }
    else {
      lVar4 = *(longlong *)(lVar4 + 0x168);
      uVar9 = *(uint *)(lVar4 + (ulonglong)uVar10 * 4);
      iVar3 = *(int *)(lVar4 + (longlong)(int)uVar9 * 4);
      *param_1 = param_4;
      sVar8 = (short)iVar2;
      sVar5 = (short)iVar3 - sVar8;
      if (iVar3 == -2) {
        sVar5 = -1;
      }
      uVar9 = param_4 & 0xffc00000 | uVar9;
      sVar8 = ((short)uVar10 - sVar5) - sVar8;
    }
    *(short *)(param_1 + 1) = sVar8;
  }
  *param_1 = uVar9;
  lVar4 = *(longlong *)
           (*(longlong *)((ulonglong)(param_4 >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38)) +
           0x20);
  if ((int)uVar10 < *(int *)(lVar4 + 0x20)) {
    uVar6 = (ulonglong)uVar10;
    if (*(int *)(lVar4 + 0x98) != 0) {
      uVar10 = *(uint *)(*(longlong *)(lVar4 + 0x90) + (ulonglong)uVar10 * 4);
    }
    if (uVar10 == 0xffffffff) {
      lVar4 = *(longlong *)(lVar4 + 0x18);
      lVar7 = uVar6 * 3;
    }
    else {
      lVar7 = (longlong)(int)uVar10 * 3;
      lVar4 = *(longlong *)(lVar4 + 0xb0);
    }
  }
  else {
    lVar7 = (longlong)(int)(uVar10 - *(int *)(lVar4 + 0x20)) * 3;
    lVar4 = *(longlong *)(lVar4 + 0xd0);
  }
  puVar1 = (undefined4 *)(lVar4 + lVar7 * 4);
  uVar9 = param_3 & 0x3fffff;
  lVar4 = *(longlong *)
           (*(longlong *)((ulonglong)(param_3 >> 0x16) * 0x120 + *(longlong *)(param_2 + 0x38)) +
           0x20);
  if ((int)uVar9 < *(int *)(lVar4 + 0x30)) {
    uVar10 = uVar9;
    if (*(int *)(lVar4 + 0x78) != 0) {
      uVar10 = *(uint *)(*(longlong *)(lVar4 + 0x70) + (ulonglong)uVar9 * 4);
    }
    if (uVar10 == 0xffffffff) {
      lVar4 = *(longlong *)(lVar4 + 0x28);
      lVar7 = (ulonglong)uVar9 * 5;
    }
    else {
      lVar7 = (longlong)(int)uVar10 * 5;
      lVar4 = *(longlong *)(lVar4 + 0xc0);
    }
  }
  else {
    lVar7 = (longlong)(int)(uVar9 - *(int *)(lVar4 + 0x30)) * 5;
    lVar4 = *(longlong *)(lVar4 + 0xe0);
  }
  if ((*(byte *)(lVar4 + 0x10 + lVar7 * 4) & 0x10) == 0) {
    *(short *)(param_1 + 2) = (short)uVar9 - (short)*puVar1;
    return;
  }
  *(short *)(param_1 + 2) = (*(short *)(puVar1 + 2) - (short)puVar1[1]) + (short)uVar9;
  return;
}



// FUNCTION 144b442e0 FUN_144b442e0 body=724 status=ok
// SIG undefined FUN_144b442e0(void)

void FUN_144b442e0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
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
  undefined1 auVar13 [12];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar19;
  float fVar20;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar21;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar22 [16];
  float fVar23;
  float local_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  
  auVar13 = SUB1612(ZEXT816(0),0);
  local_98 = *param_3;
  fStack_94 = param_3[1];
  fStack_90 = param_3[2];
  fStack_8c = param_3[3];
  fVar7 = local_98 * (*param_2 - *param_1);
  fVar8 = fStack_94 * (param_2[1] - param_1[1]);
  fVar9 = fStack_90 * (param_2[2] - param_1[2]);
  auVar22._0_4_ = (*param_2 - *param_1) - (fVar8 + fVar7 + fVar9) * local_98;
  auVar22._4_4_ = (param_2[1] - param_1[1]) - (fVar8 + fVar7 + fVar9) * fStack_94;
  auVar22._8_4_ = (param_2[2] - param_1[2]) - (fVar8 + fVar7 + fVar9) * fStack_90;
  auVar22._12_4_ = (param_2[3] - param_1[3]) - (fVar8 + fVar7 + fVar9) * fStack_8c;
  fVar7 = auVar22._0_4_ * auVar22._0_4_;
  fVar8 = auVar22._4_4_ * auVar22._4_4_;
  fVar9 = auVar22._8_4_ * auVar22._8_4_;
  fVar10 = fVar8 + fVar7 + fVar9;
  if (fVar10 == 0.0) {
    local_b8 = ZEXT816(0);
    auVar6 = ZEXT816(0);
  }
  else {
    auVar6._4_4_ = fVar8 + fVar7 + fVar9;
    auVar6._0_4_ = fVar10;
    auVar6._8_4_ = fVar8 + fVar7 + fVar9;
    auVar6._12_4_ = fVar8 + fVar7 + fVar9;
    auVar6 = sqrtps(unaff_XMM8,auVar6);
    local_b8 = divps(auVar22,auVar6);
  }
  fVar9 = local_b8._4_4_ * local_98 - fStack_94 * local_b8._0_4_;
  fVar7 = local_b8._8_4_ * fStack_94 - fStack_90 * local_b8._4_4_;
  fVar8 = local_b8._0_4_ * fStack_90 - local_98 * local_b8._8_4_;
  auVar15._12_4_ = local_b8._12_4_ * fStack_8c - fStack_8c * local_b8._12_4_;
  auVar15._4_4_ = fVar8;
  auVar15._0_4_ = fVar7;
  auVar15._8_4_ = fVar9;
  fVar7 = fVar7 * fVar7;
  fVar8 = fVar8 * fVar8;
  fVar9 = fVar9 * fVar9;
  auVar18._4_4_ = fVar7;
  auVar18._0_4_ = fVar7;
  auVar18._8_4_ = fVar7;
  auVar18._12_4_ = fVar7;
  fVar10 = fVar8 + fVar7 + fVar9;
  if (fVar10 == 0.0) {
    local_a8 = ZEXT816(0);
  }
  else {
    auVar2._4_4_ = fVar8 + fVar7 + fVar9;
    auVar2._0_4_ = fVar10;
    auVar2._8_4_ = fVar8 + fVar7 + fVar9;
    auVar2._12_4_ = fVar8 + fVar7 + fVar9;
    auVar22 = sqrtps(auVar18,auVar2);
    local_a8 = divps(auVar15,auVar22);
  }
  fStack_e0 = *param_6;
  fStack_dc = param_6[1];
  fStack_c0 = param_6[2];
  fStack_cc = param_6[3];
  fVar7 = fStack_e0 * (*param_5 - *param_4);
  fVar8 = fStack_dc * (param_5[1] - param_4[1]);
  fVar9 = fStack_c0 * (param_5[2] - param_4[2]);
  auVar17._0_4_ = (*param_5 - *param_4) - (fVar8 + fVar7 + fVar9) * fStack_e0;
  auVar17._4_4_ = (param_5[1] - param_4[1]) - (fVar8 + fVar7 + fVar9) * fStack_dc;
  auVar17._8_4_ = (param_5[2] - param_4[2]) - (fVar8 + fVar7 + fVar9) * fStack_c0;
  auVar17._12_4_ = (param_5[3] - param_4[3]) - (fVar8 + fVar7 + fVar9) * fStack_cc;
  fVar7 = auVar17._0_4_ * auVar17._0_4_;
  fVar8 = auVar17._4_4_ * auVar17._4_4_;
  fVar9 = auVar17._8_4_ * auVar17._8_4_;
  auVar4._4_4_ = fVar7;
  auVar4._0_4_ = fVar7;
  auVar4._8_4_ = fVar7;
  auVar4._12_4_ = fVar7;
  fVar10 = fVar8 + fVar7 + fVar9;
  if (fVar10 == 0.0) {
    auVar18 = ZEXT816(0);
    auVar22 = ZEXT816(0);
  }
  else {
    auVar1._4_4_ = fVar8 + fVar7 + fVar9;
    auVar1._0_4_ = fVar10;
    auVar1._8_4_ = fVar8 + fVar7 + fVar9;
    auVar1._12_4_ = fVar8 + fVar7 + fVar9;
    auVar22 = sqrtps(auVar4,auVar1);
    auVar18 = divps(auVar17,auVar22);
  }
  auVar22 = divps(auVar6,auVar22);
  local_e8 = auVar18._0_4_;
  local_d8 = auVar18._4_4_;
  local_c8 = auVar18._8_4_;
  fVar10 = local_d8 * fStack_e0 - fStack_dc * local_e8;
  fVar11 = local_c8 * fStack_dc - fStack_c0 * local_d8;
  fVar12 = local_e8 * fStack_c0 - fStack_e0 * local_c8;
  fVar7 = fVar11 * fVar11;
  fVar8 = fVar12 * fVar12;
  fVar9 = fVar10 * fVar10;
  auVar5._4_4_ = fVar7;
  auVar5._0_4_ = fVar7;
  auVar5._8_4_ = fVar7;
  auVar5._12_4_ = fVar7;
  fVar21 = fVar8 + fVar7 + fVar9;
  if (fVar21 != 0.0) {
    auVar3._4_4_ = fVar8 + fVar7 + fVar9;
    auVar3._0_4_ = fVar21;
    auVar3._8_4_ = fVar8 + fVar7 + fVar9;
    auVar3._12_4_ = fVar8 + fVar7 + fVar9;
    auVar6 = sqrtps(auVar5,auVar3);
    auVar14._4_4_ = fVar12;
    auVar14._0_4_ = fVar11;
    auVar14._8_4_ = fVar10;
    auVar14._12_4_ = auVar18._12_4_ * fStack_cc - fStack_cc * auVar18._12_4_;
    auVar6 = divps(auVar14,auVar6);
    auVar13 = auVar6._0_12_;
  }
  uStack_d4 = auVar13._4_4_;
  uStack_e4 = auVar13._0_4_;
  uStack_c4 = auVar13._8_4_;
  fStack_d0 = fStack_dc;
  fStack_bc = fStack_cc;
  FUN_144f75870(&local_88,local_b8,&local_e8);
  fVar7 = *param_4;
  fVar8 = param_4[1];
  fVar9 = param_4[2];
  fVar10 = *param_1;
  fVar11 = param_1[1];
  fVar12 = param_1[2];
  fVar21 = param_1[3];
  fVar16 = auVar22._0_4_;
  fVar19 = auVar22._4_4_;
  fVar23 = auVar22._12_4_;
  local_68 = fVar16 * local_68;
  fStack_64 = fVar19 * fStack_64;
  fVar20 = auVar22._8_4_;
  fStack_60 = fVar20 * fStack_60;
  local_88 = fVar16 * local_88;
  fStack_84 = fVar19 * fStack_84;
  fStack_80 = fVar20 * fStack_80;
  fVar16 = fVar16 * local_78;
  fVar19 = fVar19 * fStack_74;
  fVar20 = fVar20 * fStack_70;
  *param_7 = local_88;
  param_7[1] = fStack_84;
  param_7[2] = fStack_80;
  param_7[3] = fVar23 * fStack_7c;
  param_7[8] = local_68;
  param_7[9] = fStack_64;
  param_7[10] = fStack_60;
  param_7[0xb] = fVar23 * fStack_5c;
  param_7[4] = fVar16;
  param_7[5] = fVar19;
  param_7[6] = fVar20;
  param_7[7] = fVar23 * fStack_6c;
  fVar10 = fVar10 - (fVar8 * fVar16 + fVar7 * local_88 + fVar9 * local_68);
  fVar11 = fVar11 - (fVar8 * fVar19 + fVar7 * fStack_84 + fVar9 * fStack_64);
  fVar12 = fVar12 - (fVar8 * fVar20 + fVar7 * fStack_80 + fVar9 * fStack_60);
  param_7[0xc] = fVar10;
  param_7[0xd] = fVar11;
  param_7[0xe] = fVar12;
  param_7[0xf] = fVar21 - (fVar8 * fVar23 * fStack_6c + fVar7 * fVar23 * fStack_7c +
                          fVar9 * fVar23 * fStack_5c);
  *param_7 = local_88;
  param_7[1] = fStack_84;
  param_7[2] = fStack_80;
  param_7[3] = 0.0;
  param_7[4] = fVar16;
  param_7[5] = fVar19;
  param_7[6] = fVar20;
  param_7[7] = 0.0;
  param_7[8] = local_68;
  param_7[9] = fStack_64;
  param_7[10] = fStack_60;
  param_7[0xb] = 0.0;
  fVar7 = fRam000000014c6dacac;
  param_7[0xc] = fVar10;
  param_7[0xd] = fVar11;
  param_7[0xe] = fVar12;
  param_7[0xf] = fVar7;
  return;
}



// FUNCTION 144b445c0 SetSwitch body=123 status=ok
// SIG AKRESULT SetSwitch(uint param_1, uint param_2, __uint64 param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::SetSwitch(unsigned int,unsigned int,unsigned __int64) */

AKRESULT __cdecl AK::SoundEngine::SetSwitch(uint param_1,uint param_2,__uint64 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4b445c0  319  ?SetSwitch@SoundEngine@AK@@YA?AW4AKRESULT@@II_K@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  uVar1 = FUN_145087eb0();
  lVar2 = FUN_145080f50(DAT_14c790fd8,8,uVar1);
  *(__uint64 *)(lVar2 + 4) = param_3;
  *(uint *)(lVar2 + 0xc) = param_1;
  *(uint *)(lVar2 + 0x10) = param_2;
  LOCK();
  *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
  UNLOCK();
  return 1;
}



// FUNCTION 144b44640 FUN_144b44640 body=37 status=ok
// SIG undefined FUN_144b44640(void)

void FUN_144b44640(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **local_18;
  undefined8 local_10;
  
  local_18 = _anon_AD23383B::ListFacesCollector::vftable;
  local_10 = param_3;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_18);
  return;
}



// FUNCTION 144b44670 SeekOnEvent body=392 status=ok
// SIG AKRESULT SeekOnEvent(uint param_1, __uint64 param_2, float param_3, bool param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::SeekOnEvent(unsigned int,unsigned
   __int64,float,bool,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::SeekOnEvent(uint param_1,__uint64 param_2,float param_3,bool param_4,uint param_5)

{
  int iVar1;
  undefined2 uVar2;
  AKRESULT AVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
                    /* 0x4b44670  259  ?SeekOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@I_KM_NI@Z */
  lVar4 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    AVar3 = 0x66;
  }
  else {
    do {
      while (iVar1 = *(int *)(lVar4 + 0x108), iVar1 < 0) {
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
        if (*(int *)(lVar4 + 0x108) < 0) goto LAB_144b446cc;
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
      }
      LOCK();
      bVar6 = iVar1 == *(int *)(lVar4 + 0x108);
      if (bVar6) {
        *(int *)(lVar4 + 0x108) = iVar1 + 1;
      }
      UNLOCK();
    } while (!bVar6);
LAB_144b446cc:
    if (*(uint *)(lVar4 + 0x150) == 0) {
      lVar5 = 0;
    }
    else {
      for (lVar5 = *(longlong *)
                    (*(longlong *)(lVar4 + 0x148) +
                    ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar4 + 0x150)) * 8); lVar5 != 0;
          lVar5 = *(longlong *)(lVar5 + 8)) {
        if (*(uint *)(lVar5 + 0x10) == param_1) goto LAB_144b44700;
      }
      lVar5 = 0;
LAB_144b44700:
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0x14) = *(int *)(lVar5 + 0x14) + 1;
        UNLOCK();
      }
    }
    iVar1 = *(int *)(lVar4 + 0x108);
    while (-1 < iVar1) {
      LOCK();
      bVar6 = iVar1 == *(int *)(lVar4 + 0x108);
      if (bVar6) {
        *(int *)(lVar4 + 0x108) = iVar1 + -1;
      }
      UNLOCK();
      if (bVar6) {
        if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar4 + 0x138))) {
          SetEvent(*(HANDLE *)(lVar4 + 0x140));
        }
        goto LAB_144b44764;
      }
      iVar1 = *(int *)(lVar4 + 0x108);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x110));
LAB_144b44764:
    if (lVar5 == 0) {
      AVar3 = 0xf;
    }
    else {
      uVar2 = FUN_145088050();
      lVar4 = FUN_145080f50(DAT_14c790fd8,0x28,uVar2);
      *(float *)(lVar4 + 0x18) = param_3;
      *(longlong *)(lVar4 + 0xc) = lVar5;
      *(__uint64 *)(lVar4 + 4) = param_2;
      *(uint *)(lVar4 + 0x1c) = param_5;
      *(undefined2 *)(lVar4 + 0x20) = 1;
      *(ushort *)(lVar4 + 0x22) = (ushort)param_4;
      AVar3 = 1;
      LOCK();
      *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
      UNLOCK();
    }
  }
  return AVar3;
}



// FUNCTION 144b44800 FUN_144b44800 body=16 status=ok
// SIG undefined FUN_144b44800(void)

undefined8 * FUN_144b44800(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 144b44810 FUN_144b44810 body=21 status=ok
// SIG undefined FUN_144b44810(void)

void FUN_144b44810(longlong *param_1)

{
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144b44820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 144b44830 FUN_144b44830 body=23 status=ok
// SIG undefined FUN_144b44830(void)

undefined8 FUN_144b44830(undefined8 param_1)

{
  FUN_144c072c0();
  return param_1;
}



// FUNCTION 144b44850 FUN_144b44850 body=3144 status=ok
// SIG undefined FUN_144b44850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b44850(longlong param_1,uint param_2,undefined1 (*param_3) [16],longlong *param_4,
                  undefined8 param_5,longlong *param_6)

{
  uint uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  char cVar10;
  longlong lVar11;
  ulonglong *puVar12;
  undefined1 (*pauVar13) [16];
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  float *pfVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
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
  float fVar38;
  float fVar39;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar40;
  undefined4 uVar41;
  float fVar47;
  float fVar49;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined4 uVar48;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar57;
  float fVar59;
  undefined1 auVar54 [16];
  undefined4 uVar58;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
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
  uint local_198 [2];
  undefined8 local_190;
  char *local_188;
  char *pcStack_180;
  ulonglong *local_178;
  undefined8 local_170;
  longlong local_168;
  uint local_160;
  uint local_15c;
  int local_158;
  longlong local_150;
  longlong local_148;
  int *local_140;
  longlong local_138;
  undefined4 local_130;
  uint local_12c;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  char *local_108;
  char *pcStack_100;
  undefined1 local_f8 [8];
  ulonglong local_f0;
  longlong local_e8;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined1 local_c8 [6] [16];
  
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar15 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar15 + 0xf0);
  if (lVar11 == 0) {
    if (*(char *)(lVar15 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar15 + 0xf0) = lVar11;
  }
  local_e8 = *(longlong *)(lVar11 + 0x3e0);
  local_108 = "TtgetNearbyBoundariesFlood";
  pcStack_100 = "";
  if (local_e8 != 0) {
    local_188 = "TtgetNearbyBoundariesFlood";
    pcStack_180 = "";
    FUN_144b3f370(local_e8,&local_188);
  }
  if (param_2 == 0xffffffff) goto LAB_144b45423;
  fVar75 = (*(float *)param_3[1] - *(float *)*param_3) * _DAT_14c6dad90;
  fVar76 = (*(float *)(param_3[1] + 4) - *(float *)(*param_3 + 4)) * fRam000000014c6dad94;
  fVar77 = (*(float *)(param_3[1] + 8) - *(float *)(*param_3 + 8)) * fRam000000014c6dad98;
  fVar78 = (*(float *)*param_3 + *(float *)param_3[1]) * _DAT_14c6dad90;
  fVar79 = (*(float *)(*param_3 + 4) + *(float *)(param_3[1] + 4)) * fRam000000014c6dad94;
  fVar80 = (*(float *)(*param_3 + 8) + *(float *)(param_3[1] + 8)) * fRam000000014c6dad98;
  lVar11 = *(longlong *)((ulonglong)(param_2 >> 0x16) * 0x120 + *(longlong *)(param_1 + 0x38));
  cVar10 = *(char *)(lVar15 + 0x114);
  fVar5 = *(float *)(lVar11 + 0xc0);
  fVar6 = *(float *)(lVar11 + 0xc4);
  fVar7 = *(float *)(lVar11 + 200);
  if (cVar10 == '\0') {
    __dyn_tls_on_demand_init();
    cVar10 = *(char *)(lVar15 + 0x114);
  }
  lVar11 = *(longlong *)(lVar15 + 0xf0);
  if (lVar11 == 0) {
    if (cVar10 == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar15 + 0xf0) = lVar11;
  }
  local_170 = 0x200;
  local_108 = *(char **)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
  if (*(longlong *)(local_108 + 8) != 0) {
    local_108 = (char *)0x0;
  }
  if (local_108 == (char *)0x0) {
    puVar12 = (ulonglong *)(*DAT_14c787670)(1,&local_170,0x40);
  }
  else {
    local_148 = 0x200;
    if (0x1ff < *(ulonglong *)(local_108 + 0x28)) {
      puVar12 = *(ulonglong **)(local_108 + 0x38);
      local_178 = puVar12;
      if (puVar12 + 0x40 <= *(ulonglong **)(local_108 + 0x40)) {
        *(ulonglong **)(local_108 + 0x38) = puVar12 + 0x40;
        goto LAB_144b44a72;
      }
    }
    puVar12 = (ulonglong *)FUN_144b454a0(local_108,&local_148);
  }
LAB_144b44a72:
  iVar23 = 8;
  do {
    iVar18 = iVar23;
    iVar23 = iVar18 * 2;
  } while (iVar23 < 0x80);
  uVar16 = iVar18 * 8;
  local_130 = 0;
  local_178 = puVar12;
  if (*(char *)(lVar15 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar11 = *(longlong *)(lVar15 + 0xf0);
  if (lVar11 == 0) {
    if (*(char *)(lVar15 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar11 = FUN_144b3f4a0();
    *(longlong *)(lVar15 + 0xf0) = lVar11;
  }
  uVar24 = (ulonglong)(int)uVar16;
  lVar15 = *(longlong *)(*(longlong *)(lVar11 + 0x3d0) + 0x10);
  local_148 = 0;
  if (*(longlong *)(lVar15 + 8) == 0) {
    local_148 = lVar15;
  }
  local_190 = uVar24;
  local_128 = local_148;
  local_118 = uVar24;
  if (local_148 == 0) {
    local_150 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar15 >> 8),1),&local_190,0x40);
  }
  else {
    local_170 = uVar24;
    if (uVar24 <= *(ulonglong *)(local_148 + 0x28)) {
      local_150 = *(longlong *)(local_148 + 0x38);
      if (local_150 + uVar24 <= *(ulonglong *)(local_148 + 0x40)) {
        *(ulonglong *)(local_148 + 0x38) = local_150 + uVar24;
        goto LAB_144b44b4d;
      }
    }
    local_150 = FUN_144b454a0(local_148,&local_170);
  }
LAB_144b44b4d:
  local_12c = uVar16 | 0x80000000;
  local_138 = local_150;
  local_120 = local_150;
  if ((int)(uVar16 & 0x7fffffff) < (int)uVar16) {
    FUN_14039ab22(&local_138,&PTR_vftable_14c6e47a0,uVar24);
    local_148 = local_128;
  }
  uVar9 = local_12c;
  local_150 = local_138;
  FUN_144c57f50(&local_168,local_138,uVar16);
  local_190 = CONCAT44(0xffffffff,param_2);
  if (puVar12 != (ulonglong *)0x0) {
    *puVar12 = local_190;
  }
  iVar23 = 1;
  lVar15 = local_168;
  do {
    iVar23 = iVar23 + -1;
    uVar22 = local_160 - 1;
    uVar24 = puVar12[iVar23];
    local_f0 = uVar24 >> 0x20;
    uVar19 = (uint)uVar24;
    uVar16 = local_160;
    if (0 < (int)uVar22) {
      uVar16 = uVar19 * -0x61c8864f;
      uVar17 = (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
               uVar19 * -0x4f000000) & uVar22;
      uVar1 = *(uint *)(lVar15 + (longlong)(int)uVar17 * 4);
      while ((uVar16 = local_160, uVar1 != 0xffffffff && (uVar16 = uVar17, uVar1 != uVar19))) {
        uVar17 = uVar17 + 1 & uVar22;
        uVar1 = *(uint *)(lVar15 + (longlong)(int)uVar17 * 4);
      }
    }
    if ((int)uVar22 < (int)uVar16) {
      if ((int)uVar22 < local_158 * 2) break;
      local_190 = uVar24 >> 0x16 & 0x3ff;
      local_198[0] = uVar19 & 0x3fffff;
      local_188 = (char *)0x0;
      pcStack_180 = (char *)0x0;
      lVar11 = *(longlong *)(local_190 * 0x120 + *(longlong *)(param_1 + 0x38));
      local_140 = (int *)FUN_144c44fc0(*(undefined8 *)(lVar11 + 0x20),local_198,&local_188);
      if ((param_4 == (longlong *)0x0) ||
         (cVar10 = (**(code **)(*param_4 + 0x18))
                             (param_4,param_1,uVar24 & 0xffffffff,local_140,&local_188),
         cVar10 != '\0')) {
        if ((int)(local_160 - 1) < local_158 * 2) {
          FUN_144c30700(&local_168,local_f8,(local_160 - 1) * 2 + 2);
        }
        uVar16 = uVar19 * -0x61c8864f;
        iVar18 = 1;
        uVar22 = (uVar16 >> 0x18 | (uVar16 & 0xff0000) >> 8 | (uVar16 & 0xff00) << 8 |
                 uVar19 * -0x4f000000) & local_160 - 1;
        uVar16 = *(uint *)(local_168 + (longlong)(int)uVar22 * 4);
        while (uVar16 != 0xffffffff) {
          if (uVar16 == uVar19) {
            iVar18 = 0;
            break;
          }
          uVar22 = uVar22 + 1 & local_160 - 1;
          uVar16 = *(uint *)(local_168 + (longlong)(int)uVar22 * 4);
        }
        local_158 = local_158 + iVar18;
        iVar18 = 0;
        *(uint *)(local_168 + (longlong)(int)uVar22 * 4) = uVar19;
        lVar15 = local_168;
        puVar12 = local_178;
        if (0 < (short)local_140[2]) {
          local_190 = (ulonglong)(uint)((int)local_190 << 0x16);
          do {
            local_198[0] = *local_140 + iVar18;
            uVar16 = (uint)local_190 | local_198[0];
            local_188 = (char *)0x0;
            pcStack_180 = (char *)0x0;
            piVar14 = (int *)FUN_144c450c0(*(undefined8 *)(lVar11 + 0x20),local_198,&local_188);
            if ((uint)local_f0 == 0xffffffff) {
LAB_144b44e75:
              lVar15 = *(longlong *)(lVar11 + 0x20);
              iVar2 = *piVar14;
              iVar21 = *(int *)(lVar15 + 0x40);
              if (iVar2 < iVar21) {
                pfVar20 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar15 + 0x38));
              }
              else {
                pfVar20 = (float *)((longlong)(iVar2 - iVar21) * 0x10 + *(longlong *)(lVar15 + 0xf0)
                                   );
              }
              iVar2 = piVar14[1];
              fVar53 = *pfVar20;
              fVar57 = pfVar20[1];
              fVar59 = pfVar20[2];
              if (iVar2 < iVar21) {
                pfVar20 = (float *)((longlong)iVar2 * 0x10 + *(longlong *)(lVar15 + 0x38));
              }
              else {
                pfVar20 = (float *)((longlong)(iVar2 - iVar21) * 0x10 + *(longlong *)(lVar15 + 0xf0)
                                   );
              }
              fVar67 = *pfVar20;
              fVar34 = pfVar20[1];
              fVar38 = pfVar20[2];
              fVar60 = fVar57 * *(float *)(lVar11 + 0x70) + fVar53 * *(float *)(lVar11 + 0x60) +
                       fVar59 * *(float *)(lVar11 + 0x80) + *(float *)(lVar11 + 0x90);
              fVar61 = fVar57 * *(float *)(lVar11 + 0x74) + fVar53 * *(float *)(lVar11 + 100) +
                       fVar59 * *(float *)(lVar11 + 0x84) + *(float *)(lVar11 + 0x94);
              fVar62 = fVar57 * *(float *)(lVar11 + 0x78) + fVar53 * *(float *)(lVar11 + 0x68) +
                       fVar59 * *(float *)(lVar11 + 0x88) + *(float *)(lVar11 + 0x98);
              fVar63 = fVar57 * *(float *)(lVar11 + 0x7c) + fVar53 * *(float *)(lVar11 + 0x6c) +
                       fVar59 * *(float *)(lVar11 + 0x8c) + *(float *)(lVar11 + 0x9c);
              fVar53 = fVar60 - fVar78;
              fVar57 = fVar61 - fVar79;
              fVar59 = fVar62 - fVar80;
              fVar64 = fVar34 * *(float *)(lVar11 + 0x70) + fVar67 * *(float *)(lVar11 + 0x60) +
                       fVar38 * *(float *)(lVar11 + 0x80) + *(float *)(lVar11 + 0x90);
              fVar65 = fVar34 * *(float *)(lVar11 + 0x74) + fVar67 * *(float *)(lVar11 + 100) +
                       fVar38 * *(float *)(lVar11 + 0x84) + *(float *)(lVar11 + 0x94);
              fVar66 = fVar34 * *(float *)(lVar11 + 0x78) + fVar67 * *(float *)(lVar11 + 0x68) +
                       fVar38 * *(float *)(lVar11 + 0x88) + *(float *)(lVar11 + 0x98);
              fVar67 = fVar34 * *(float *)(lVar11 + 0x7c) + fVar67 * *(float *)(lVar11 + 0x6c) +
                       fVar38 * *(float *)(lVar11 + 0x8c) + *(float *)(lVar11 + 0x9c);
              if (0.0 <= ((fVar65 - fVar61) * fVar53 - fVar57 * (fVar64 - fVar60)) * fVar7 +
                         ((fVar64 - fVar60) * fVar59 - fVar53 * (fVar66 - fVar62)) * fVar6 +
                         ((fVar66 - fVar62) * fVar57 - fVar59 * (fVar65 - fVar61)) * fVar5) {
                fVar50 = fVar60 - fVar64;
                fVar51 = fVar61 - fVar65;
                fVar52 = fVar62 - fVar66;
                fVar34 = fVar53 * fVar50;
                fVar38 = fVar57 * fVar51;
                fVar39 = fVar59 * fVar52;
                fVar40 = fVar50 * fVar50;
                fVar47 = fVar51 * fVar51;
                fVar49 = fVar52 * fVar52;
                auVar69._0_4_ = fVar49 + fVar47 + fVar40;
                auVar69._4_4_ = fVar49 + fVar47 + fVar40;
                auVar69._8_4_ = fVar49 + fVar47 + fVar40;
                auVar69._12_4_ = fVar49 + fVar47 + fVar40;
                auVar35._0_4_ = fVar39 + fVar38 + fVar34;
                auVar35._4_4_ = fVar39 + fVar38 + fVar34;
                auVar35._8_4_ = fVar39 + fVar38 + fVar34;
                auVar35._12_4_ = fVar39 + fVar38 + fVar34;
                auVar35 = divps(auVar35,auVar69);
                auVar35 = minps(auVar35,_DAT_1499314a0);
                auVar35 = maxps(auVar35,ZEXT816(0));
                fVar53 = fVar53 - auVar35._0_4_ * fVar50;
                fVar57 = fVar57 - auVar35._4_4_ * fVar51;
                fVar59 = fVar59 - auVar35._8_4_ * fVar52;
                if (fVar59 * fVar59 + fVar57 * fVar57 + fVar53 * fVar53 <
                    fVar77 * fVar77 + fVar76 * fVar76 + fVar75 * fVar75) {
                  if ((piVar14[2] == -1) || ((*(byte *)(piVar14 + 4) & 0x20) != 0)) {
LAB_144b450a0:
                    auVar35 = *param_3;
                    fVar53 = auVar35._0_4_;
                    fVar57 = auVar35._4_4_;
                    fVar59 = auVar35._12_4_;
                    fVar34 = *(float *)param_3[1];
                    fVar38 = *(float *)(param_3[1] + 4);
                    fVar39 = *(float *)(param_3[1] + 8);
                    fVar40 = *(float *)(param_3[1] + 0xc);
                    fVar52 = auVar35._8_4_;
                    auVar56._0_4_ = -(uint)(fVar60 <= fVar34 && fVar53 <= fVar60);
                    auVar56._4_4_ = -(uint)(fVar61 <= fVar38 && fVar57 <= fVar61);
                    auVar56._8_4_ = -(uint)(fVar62 <= fVar39 && fVar52 <= fVar62);
                    auVar56._12_4_ = -(uint)(fVar63 <= fVar40 && fVar59 <= fVar63);
                    uVar16 = movmskps((int)param_3,auVar56);
                    auVar30._0_4_ = -(uint)(fVar53 <= fVar64 && fVar64 <= fVar34);
                    auVar30._4_4_ = -(uint)(fVar57 <= fVar65 && fVar65 <= fVar38);
                    auVar30._8_4_ = -(uint)(fVar52 <= fVar66 && fVar66 <= fVar39);
                    auVar30._12_4_ = -(uint)(fVar59 <= fVar67 && fVar67 <= fVar40);
                    uVar19 = movmskps(iVar21,auVar30);
                    fVar47 = fVar60;
                    fVar49 = fVar61;
                    fVar50 = fVar62;
                    fVar51 = fVar63;
                    if (((uVar16 & 7) != 7) || ((uVar19 & 7) != 7)) {
                      fVar71 = DAT_14c6daca0._12_4_;
                      if ((uVar16 & 7) != 7) {
                        auVar42._0_4_ =
                             (float)(~-(uint)(fVar64 - fVar60 == 0.0) & (uint)(fVar64 - fVar60));
                        auVar42._4_4_ =
                             (float)(~-(uint)(fVar65 - fVar61 == 0.0) & (uint)(fVar65 - fVar61));
                        auVar42._8_4_ =
                             (float)(~-(uint)(fVar66 - fVar62 == 0.0) & (uint)(fVar66 - fVar62));
                        auVar42._12_4_ = (float)(~-(uint)(fVar71 == 0.0) & (uint)fVar71);
                        auVar35 = divps(_DAT_14c6daca0,auVar42);
                        fVar47 = (float)(-(uint)(auVar42._0_4_ == 0.0) & 0x7f7fffee |
                                        ~-(uint)(auVar42._0_4_ == 0.0) & auVar35._0_4_);
                        fVar49 = (float)(-(uint)(auVar42._4_4_ == 0.0) & 0x7f7fffee |
                                        ~-(uint)(auVar42._4_4_ == 0.0) & auVar35._4_4_);
                        fVar50 = (float)(-(uint)(auVar42._8_4_ == 0.0) & 0x7f7fffee |
                                        ~-(uint)(auVar42._8_4_ == 0.0) & auVar35._8_4_);
                        fVar51 = (float)(-(uint)(auVar42._12_4_ == 0.0) & 0x7f7fffee |
                                        ~-(uint)(auVar42._12_4_ == 0.0) & auVar35._12_4_);
                        auVar43._0_8_ =
                             CONCAT44((fVar57 - fVar61) * fVar49,(fVar53 - fVar60) * fVar47);
                        auVar43._8_4_ = (fVar52 - fVar62) * fVar50;
                        auVar43._12_4_ = (fVar59 - fVar63) * fVar51;
                        auVar25._0_4_ = (fVar34 - fVar60) * fVar47;
                        auVar25._4_4_ = (fVar38 - fVar61) * fVar49;
                        auVar25._8_4_ = (fVar39 - fVar62) * fVar50;
                        auVar25._12_4_ = (fVar40 - fVar63) * fVar51;
                        auVar68._8_4_ = auVar43._8_4_;
                        auVar68._0_8_ = auVar43._0_8_;
                        auVar68._12_4_ = auVar43._12_4_;
                        auVar69 = minps(auVar68,auVar25);
                        auVar35 = maxps(auVar43,auVar25);
                        uVar41 = auVar69._0_4_;
                        uVar58 = auVar69._4_4_;
                        auVar70._8_4_ = auVar69._8_4_;
                        auVar26._4_4_ = uVar41;
                        auVar26._0_4_ = uVar41;
                        auVar26._8_4_ = uVar41;
                        auVar26._12_4_ = uVar41;
                        uVar41 = auVar35._0_4_;
                        uVar48 = auVar35._4_4_;
                        auVar44._8_4_ = auVar35._8_4_;
                        auVar36._4_4_ = uVar58;
                        auVar36._0_4_ = uVar58;
                        auVar36._8_4_ = uVar58;
                        auVar36._12_4_ = uVar58;
                        auVar69 = maxps(auVar36,auVar26);
                        auVar31._4_4_ = uVar48;
                        auVar31._0_4_ = uVar48;
                        auVar31._8_4_ = uVar48;
                        auVar31._12_4_ = uVar48;
                        auVar27._4_4_ = uVar41;
                        auVar27._0_4_ = uVar41;
                        auVar27._8_4_ = uVar41;
                        auVar27._12_4_ = uVar41;
                        auVar35 = minps(auVar31,auVar27);
                        auVar70._4_4_ = auVar70._8_4_;
                        auVar70._0_4_ = auVar70._8_4_;
                        auVar70._12_4_ = auVar70._8_4_;
                        auVar44._4_4_ = auVar44._8_4_;
                        auVar44._0_4_ = auVar44._8_4_;
                        auVar44._12_4_ = auVar44._8_4_;
                        auVar35 = minps(auVar44,auVar35);
                        auVar69 = maxps(auVar70,auVar69);
                        auVar35 = minps(auVar35,_DAT_14c6daca0);
                        auVar69 = maxps(auVar69,ZEXT816(0));
                        if (auVar35._0_4_ < auVar69._0_4_) goto LAB_144b45292;
                        fVar47 = (fVar64 - fVar60) * auVar69._0_4_ + fVar60;
                        fVar49 = (fVar65 - fVar61) * auVar69._4_4_ + fVar61;
                        fVar50 = (fVar66 - fVar62) * auVar69._8_4_ + fVar62;
                        fVar51 = (fVar67 - fVar63) * auVar69._12_4_ + fVar63;
                      }
                      if ((uVar19 & 7) != 7) {
                        auVar32._0_4_ =
                             (float)(~-(uint)(fVar60 - fVar64 == 0.0) & (uint)(fVar60 - fVar64));
                        auVar32._4_4_ =
                             (float)(~-(uint)(fVar61 - fVar65 == 0.0) & (uint)(fVar61 - fVar65));
                        auVar32._8_4_ =
                             (float)(~-(uint)(fVar62 - fVar66 == 0.0) & (uint)(fVar62 - fVar66));
                        auVar32._12_4_ = (float)(~-(uint)(fVar71 == 0.0) & (uint)fVar71);
                        auVar35 = divps(_DAT_14c6daca0,auVar32);
                        fVar71 = (float)(-(uint)(auVar32._0_4_ == 0.0) & 0x7f7fffee |
                                        ~-(uint)(auVar32._0_4_ == 0.0) & auVar35._0_4_);
                        fVar72 = (float)(-(uint)(auVar32._4_4_ == 0.0) & 0x7f7fffee |
                                        ~-(uint)(auVar32._4_4_ == 0.0) & auVar35._4_4_);
                        fVar73 = (float)(-(uint)(auVar32._8_4_ == 0.0) & 0x7f7fffee |
                                        ~-(uint)(auVar32._8_4_ == 0.0) & auVar35._8_4_);
                        fVar74 = (float)(-(uint)(auVar32._12_4_ == 0.0) & 0x7f7fffee |
                                        ~-(uint)(auVar32._12_4_ == 0.0) & auVar35._12_4_);
                        auVar54._0_8_ =
                             CONCAT44((fVar57 - fVar65) * fVar72,(fVar53 - fVar64) * fVar71);
                        auVar54._8_4_ = (fVar52 - fVar66) * fVar73;
                        auVar54._12_4_ = (fVar59 - fVar67) * fVar74;
                        fVar71 = (fVar34 - fVar64) * fVar71;
                        fVar72 = (fVar38 - fVar65) * fVar72;
                        fVar73 = (fVar39 - fVar66) * fVar73;
                        fVar74 = (fVar40 - fVar67) * fVar74;
                        auVar45._8_4_ = auVar54._8_4_;
                        auVar45._0_8_ = auVar54._0_8_;
                        auVar45._12_4_ = auVar54._12_4_;
                        auVar3._4_4_ = fVar72;
                        auVar3._0_4_ = fVar71;
                        auVar3._8_4_ = fVar73;
                        auVar3._12_4_ = fVar74;
                        auVar35 = minps(auVar45,auVar3);
                        auVar4._4_4_ = fVar72;
                        auVar4._0_4_ = fVar71;
                        auVar4._8_4_ = fVar73;
                        auVar4._12_4_ = fVar74;
                        auVar69 = maxps(auVar54,auVar4);
                        uVar41 = auVar35._0_4_;
                        uVar48 = auVar35._4_4_;
                        auVar46._8_4_ = auVar35._8_4_;
                        auVar28._4_4_ = uVar41;
                        auVar28._0_4_ = uVar41;
                        auVar28._8_4_ = uVar41;
                        auVar28._12_4_ = uVar41;
                        uVar41 = auVar69._0_4_;
                        uVar58 = auVar69._4_4_;
                        auVar55._8_4_ = auVar69._8_4_;
                        auVar37._4_4_ = uVar48;
                        auVar37._0_4_ = uVar48;
                        auVar37._8_4_ = uVar48;
                        auVar37._12_4_ = uVar48;
                        auVar69 = maxps(auVar37,auVar28);
                        auVar33._4_4_ = uVar58;
                        auVar33._0_4_ = uVar58;
                        auVar33._8_4_ = uVar58;
                        auVar33._12_4_ = uVar58;
                        auVar29._4_4_ = uVar41;
                        auVar29._0_4_ = uVar41;
                        auVar29._8_4_ = uVar41;
                        auVar29._12_4_ = uVar41;
                        auVar35 = minps(auVar33,auVar29);
                        auVar46._4_4_ = auVar46._8_4_;
                        auVar46._0_4_ = auVar46._8_4_;
                        auVar46._12_4_ = auVar46._8_4_;
                        auVar55._4_4_ = auVar55._8_4_;
                        auVar55._0_4_ = auVar55._8_4_;
                        auVar55._12_4_ = auVar55._8_4_;
                        auVar56 = minps(auVar55,auVar35);
                        auVar35 = maxps(auVar46,auVar69);
                        auVar69 = minps(auVar56,_DAT_14c6daca0);
                        auVar35 = maxps(auVar35,ZEXT816(0));
                        if (auVar69._0_4_ < auVar35._0_4_) goto LAB_144b45292;
                        fVar64 = fVar64 + (fVar60 - fVar64) * auVar35._0_4_;
                        fVar65 = fVar65 + (fVar61 - fVar65) * auVar35._4_4_;
                        fVar66 = fVar66 + (fVar62 - fVar66) * auVar35._8_4_;
                        fVar67 = fVar67 + (fVar63 - fVar67) * auVar35._12_4_;
                      }
                    }
                    iVar2 = (int)param_6[1];
                    pfVar20 = (float *)((longlong)iVar2 * 0x10 + *param_6);
                    if (pfVar20 != (float *)0x0) {
                      *pfVar20 = fVar47;
                      pfVar20[1] = fVar49;
                      pfVar20[2] = fVar50;
                      pfVar20[3] = fVar51;
                    }
                    pfVar20 = (float *)(((longlong)iVar2 + 1) * 0x10 + *param_6);
                    if (pfVar20 != (float *)0x0) {
                      *pfVar20 = fVar64;
                      pfVar20[1] = fVar65;
                      pfVar20[2] = fVar66;
                      pfVar20[3] = fVar67;
                    }
                    *(uint *)(param_6 + 1) = iVar2 + 2U;
                    lVar15 = local_168;
                    puVar12 = local_178;
                    if (iVar2 + 2U == (*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff))
                    goto LAB_144b452d5;
                  }
                  else {
                    if (param_4 != (longlong *)0x0) {
                      lVar15 = param_1;
                      cVar10 = (**(code **)(*param_4 + 0x20))
                                         (param_4,param_1,uVar16,piVar14,&local_188);
                      iVar21 = (int)lVar15;
                      if (cVar10 == '\0') goto LAB_144b450a0;
                    }
                    if (iVar23 < 0x40) {
                      uVar19 = piVar14[3];
                      if (((*(byte *)(piVar14 + 4) & 0x40) == 0) && (uVar19 != 0xffffffff)) {
                        uVar19 = *(int *)(*(longlong *)(lVar11 + 0x20) + 0x17c) << 0x16 |
                                 uVar19 & 0x3fffff;
                      }
                      lVar15 = (longlong)iVar23;
                      iVar23 = iVar23 + 1;
                      local_170 = CONCAT44(uVar16,uVar19);
                      if (local_178 + lVar15 != (ulonglong *)0x0) {
                        local_178[lVar15] = local_170;
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar19 = piVar14[2];
              if (((*(byte *)(piVar14 + 4) & 0x40) == 0) && (uVar19 != 0xffffffff)) {
                uVar19 = *(int *)(*(longlong *)(lVar11 + 0x20) + 0x17c) << 0x16 | uVar19 & 0x3fffff;
              }
              if (uVar19 != (uint)local_f0) goto LAB_144b44e75;
            }
LAB_144b45292:
            iVar18 = iVar18 + 1;
            lVar15 = local_168;
            puVar12 = local_178;
          } while (iVar18 < (short)local_140[2]);
        }
      }
      else {
        uVar16 = (uint)(uVar24 >> 0x20);
        lVar15 = local_168;
        if (uVar16 != 0xffffffff) {
          local_198[0] = uVar16 & 0x3fffff;
          FUN_144c2ead0(*(undefined8 *)((uVar24 >> 0x36) * 0x120 + *(longlong *)(param_1 + 0x38)),
                        local_198,local_c8,&local_d8);
          iVar18 = (int)param_6[1];
          pauVar13 = (undefined1 (*) [16])((longlong)iVar18 * 0x10 + *param_6);
          if (pauVar13 != (undefined1 (*) [16])0x0) {
            *pauVar13 = local_c8[0];
          }
          pauVar13 = (undefined1 (*) [16])(((longlong)iVar18 + 1) * 0x10 + *param_6);
          if (pauVar13 != (undefined1 (*) [16])0x0) {
            auVar8._8_8_ = puStack_d0;
            auVar8._0_8_ = local_d8;
            *pauVar13 = auVar8;
          }
          *(uint *)(param_6 + 1) = iVar18 + 2U;
          lVar15 = local_168;
          if (iVar18 + 2U == (*(uint *)((longlong)param_6 + 0xc) & 0x7fffffff)) break;
        }
      }
    }
  } while (iVar23 != 0);
LAB_144b452d5:
  local_160 = 0;
  if ((-1 < (int)local_15c) && (lVar15 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar15,(ulonglong)(local_15c & 0x7fffffff) << 2);
  }
  local_168 = 0;
  local_15c = 0x80000000;
  if (local_148 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar24 = local_118 + 0x3f & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_148 + 0x28) < uVar24) ||
       (uVar24 + local_120 != *(longlong *)(local_148 + 0x38))) {
      FUN_144be8550();
    }
    else {
      *(longlong *)(local_148 + 0x38) = local_120;
      if (*(longlong *)(local_148 + 0x48) == local_120) {
        FUN_144be8430();
      }
    }
  }
  if ((-1 < (int)uVar9) && (local_150 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0,local_150,uVar9 & 0x7fffffff)
    ;
  }
  if (local_108 == (char *)0x0) {
    (*DAT_14c787678)(1,puVar12,0x200);
  }
  else if ((*(ulonglong *)(local_108 + 0x28) < 0x200) ||
          (puVar12 + 0x40 != *(ulonglong **)(local_108 + 0x38))) {
    FUN_144be8550(local_108,puVar12,0x200);
  }
  else {
    *(ulonglong **)(local_108 + 0x38) = puVar12;
    if (*(ulonglong **)(local_108 + 0x48) == puVar12) {
      FUN_144be8430();
    }
  }
LAB_144b45423:
  if (local_e8 != 0) {
    local_188 = "Et";
    pcStack_180 = "";
    local_d8 = &DAT_149981764;
    puStack_d0 = &DAT_149981766;
    FUN_144b3f260(local_e8,&local_d8);
  }
  return;
}



// FUNCTION 144b454a0 FUN_144b454a0 body=425 status=ok
// SIG undefined FUN_144b454a0(void)

ulonglong FUN_144b454a0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  longlong local_res8;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  if (*(ulonglong *)(param_1 + 0x28) < *param_2 + 0x40U) {
    *(int *)(*plVar1 + 0x20) = *(int *)(*plVar1 + 0x20) + 1;
    local_res8 = *param_2 + 0x44;
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x10) + 8))
                      (*(longlong **)(param_1 + 0x10),&local_res8);
    uVar7 = lVar6 + 0x40U & 0xffffffffffffffc0;
    *(uint *)(uVar7 - 4) = ((uint)(lVar6 + 0x40U) & 0xffffffc0) - (int)lVar6;
    if (lVar6 == 0) {
      FUN_144f65d50();
    }
    *param_2 = local_res8 + -0x44;
    return uVar7;
  }
  lVar6 = *(longlong *)(param_1 + 0x50);
  if (lVar6 == 0) {
    *(int *)(*plVar1 + 0x20) = *(int *)(*plVar1 + 0x20) + 1;
    lVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 8))
                      (*(longlong **)(param_1 + 0x18),param_1 + 0x28);
    if (lVar6 == 0) {
      FUN_144f65d50();
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  plVar3 = (longlong *)*plVar1;
  uVar7 = lVar6 + 0x3fU & 0xffffffffffffffc0;
  local_res8 = uVar7 - lVar6;
  if ((int)plVar3[3] != 0) {
    iVar8 = (int)plVar3[1] + 1;
    if ((int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff) < iVar8) {
      FUN_144be8a90(plVar3,*(undefined8 *)(param_1 + 0x20),(longlong)iVar8);
    }
    lVar5 = plVar3[1];
    *(int *)(plVar3 + 1) = iVar8;
    lVar4 = *plVar3;
    *(ulonglong *)(lVar4 + 8 + (longlong)(int)lVar5 * 0x18) = uVar7;
    puVar2 = (undefined8 *)(lVar4 + (longlong)(int)lVar5 * 0x18);
    *puVar2 = *(undefined8 *)(param_1 + 0x38);
    *(int *)(puVar2 + 2) = *(int *)(*plVar1 + 0x18) + -1;
    *(ulonglong *)(param_1 + 0x48) = uVar7;
  }
  lVar4 = *plVar1;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x28) + lVar6;
  *(longlong *)(param_1 + 0x38) = *param_2 + local_res8 + lVar6;
  iVar8 = *(int *)(lVar4 + 0x18) + 1;
  if ((int)(*(uint *)(lVar4 + 0x1c) & 0x7fffffff) < iVar8) {
    FUN_144be8ba0(lVar4 + 0x10,*(undefined8 *)(param_1 + 0x20),(longlong)iVar8);
  }
  plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)*(int *)(lVar4 + 0x18) * 8);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = lVar6;
  }
  *(int *)(lVar4 + 0x18) = iVar8;
  return uVar7;
}



// FUNCTION 144b45650 FUN_144b45650 body=123 status=ok
// SIG undefined FUN_144b45650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b45650(float *param_1,float *param_2)

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
  
  fVar4 = fRam000000014c6dae48;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar7 = param_2[2];
  fVar3 = param_2[3];
  fVar5 = fVar2 + fVar2;
  fVar6 = fVar7 + fVar7;
  fVar8 = fVar1 * (fVar1 + fVar1);
  fVar12 = -(fVar3 * (fVar1 + fVar1));
  fVar10 = -(fVar7 * fVar6) + _DAT_14c6dae40;
  fVar9 = _DAT_14c6dae40 - fVar8;
  fVar7 = fVar12 - -(fVar6 * fVar2);
  *param_1 = fVar10 - fVar5 * fVar2;
  param_1[1] = fVar3 * fVar6 - -(fVar5 * fVar1);
  param_1[2] = -(fVar3 * fVar5) - -(fVar6 * fVar1);
  param_1[3] = fVar7;
  fVar11 = --(fVar3 * fVar5) - -(fVar6 * fVar1);
  param_1[8] = fVar11;
  param_1[9] = fVar7;
  param_1[10] = fVar9 - fVar5 * fVar2;
  param_1[0xb] = fVar4;
  param_1[4] = -(fVar3 * fVar6) - -(fVar5 * fVar1);
  param_1[5] = fVar10 - fVar8;
  param_1[6] = -fVar12 - -(fVar6 * fVar2);
  param_1[7] = fVar11;
  return;
}



// FUNCTION 144b456d0 FUN_144b456d0 body=171 status=ok
// SIG undefined FUN_144b456d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_144b456d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 3) = 0x3c23d70a;
  FUN_144b469b0((longlong)param_1 + 0x1c);
  param_1[0xb] = 0;
  uVar1 = uRam000000014c6dae48;
  param_1[0xc] = _DAT_14c6dae40;
  param_1[0xd] = uVar1;
  uVar1 = uRam000000014c6dae58;
  param_1[0xe] = _DAT_14c6dae50;
  param_1[0xf] = uVar1;
  uVar1 = uRam000000014c6dae68;
  param_1[0x10] = _DAT_14c6dae60;
  param_1[0x11] = uVar1;
  uVar1 = _DAT_14c6dae78;
  param_1[0x12] = _DAT_14c6dae70;
  param_1[0x13] = uVar1;
  uVar1 = uRam000000014c6dae48;
  param_1[0x14] = _DAT_14c6dae40;
  param_1[0x15] = uVar1;
  uVar1 = uRam000000014c6dae58;
  param_1[0x16] = _DAT_14c6dae50;
  param_1[0x17] = uVar1;
  uVar1 = uRam000000014c6dae68;
  param_1[0x18] = _DAT_14c6dae60;
  param_1[0x19] = uVar1;
  uVar1 = _DAT_14c6dae78;
  param_1[0x1a] = _DAT_14c6dae70;
  param_1[0x1b] = uVar1;
  return param_1;
}



// FUNCTION 144b45780 FUN_144b45780 body=254 status=ok
// SIG undefined FUN_144b45780(void)

undefined1 * FUN_144b45780(undefined1 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_res10;
  
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  local_res10 = 0x80;
  lVar5 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar5,"hkaiStreamingSet");
  }
  lVar6 = 0;
  if (lVar5 != 0) {
    lVar6 = FUN_144c339c0(lVar5);
  }
  *(undefined4 *)(lVar6 + 0x18) = uVar1;
  *(undefined4 *)(lVar6 + 0x1c) = uVar2;
  FUN_144c33cc0(param_2,lVar6);
  FUN_144c35880(uVar3,uVar4,lVar6);
  if (*(int *)(lVar6 + 0x28) == 0) {
    lVar5 = *param_3;
    *param_3 = 0;
    if (lVar5 != 0) {
      FUN_144b3f230();
    }
    *param_1 = 0;
  }
  else {
    if (*param_3 != lVar6) {
      FUN_144b3d910(lVar6);
      lVar5 = *param_3;
      *param_3 = lVar6;
      if (lVar5 != 0) {
        FUN_144b3f230();
      }
    }
    *param_1 = 1;
  }
  FUN_144b3f230(lVar6);
  return param_1;
}



// FUNCTION 144b45880 FUN_144b45880 body=305 status=ok
// SIG undefined FUN_144b45880(void)

void FUN_144b45880(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 local_res8;
  undefined4 local_18 [2];
  longlong local_10;
  
  FUN_144c6c710(local_18,param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    local_res8 = 0x28;
    puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar2,"CacheDataSet");
    }
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      puVar2[4] = 0;
      puVar2[1] = 0xffffffff;
      *puVar2 = hkaiNavMeshClearanceCacheSeeding::CacheDataSet::vftable;
      puVar2[2] = 1;
      puVar2[3] = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0x80000000;
      puVar3 = puVar2;
    }
    lVar1 = *(longlong *)(param_1 + 0xe0);
    *(undefined8 **)(param_1 + 0xe0) = puVar3;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  lVar1 = *(longlong *)(param_1 + 0xe0);
  iVar5 = *(int *)(lVar1 + 0x20) + 1;
  if ((int)(*(uint *)(lVar1 + 0x24) & 0x7fffffff) < iVar5) {
    FUN_144c6d2d0(lVar1 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar5);
  }
  puVar4 = (undefined4 *)((longlong)*(int *)(lVar1 + 0x20) * 0x10 + *(longlong *)(lVar1 + 0x18));
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = local_18[0];
    *(longlong *)(puVar4 + 2) = local_10;
    if (local_10 != 0) {
      FUN_144b3d910(local_10);
    }
  }
  *(int *)(lVar1 + 0x20) = iVar5;
  if (local_10 != 0) {
    FUN_144b3f230(local_10);
  }
  return;
}



// FUNCTION 144b459c0 FUN_144b459c0 body=740 status=ok
// SIG undefined FUN_144b459c0(void)

char * FUN_144b459c0(char *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined8 local_res10;
  longlong *local_res18;
  longlong local_res20;
  
  local_res10 = 0x80;
  local_res18 = param_3;
  lVar3 = (*DAT_14c787670)(0,&local_res10,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkaiStreamingSet");
  }
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_144c339c0(lVar3);
  }
  cVar9 = '\0';
  *(int *)(lVar3 + 0x18) = *param_2;
  *(int *)(lVar3 + 0x1c) = param_2[1];
  plVar10 = *(longlong **)(param_2 + 0xc);
  plVar1 = plVar10 + param_2[0xe];
  for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
    lVar8 = *plVar10;
    if (((*(int *)(lVar8 + 0x18) == *param_2) && (*(int *)(lVar8 + 0x1c) == param_2[1])) ||
       ((*(int *)(lVar8 + 0x18) == param_2[1] && (*(int *)(lVar8 + 0x1c) == *param_2)))) {
      local_res20 = lVar3;
      FUN_144b3d910(lVar3);
      pcVar4 = (char *)FUN_144c35a10(&local_res10,param_2,lVar8,&local_res20);
      if ((cVar9 != '\0') || (*pcVar4 != '\0')) {
        cVar9 = '\x01';
      }
    }
  }
  pcVar4 = *(char **)(*(longlong *)(param_2 + 8) + 0x48);
  pcVar11 = pcVar4 + (longlong)*(int *)(*(longlong *)(param_2 + 8) + 0x50) * 0x10;
  for (; pcVar4 != pcVar11; pcVar4 = pcVar4 + 0x10) {
    cVar2 = *pcVar4;
    if (cVar2 == '\0') {
      piVar5 = (int *)(*(longlong *)(pcVar4 + 8) + 0x18);
    }
    else {
      piVar5 = (int *)(*(longlong *)(pcVar4 + 8) + 0x1c);
    }
    lVar7 = 0x1c;
    lVar8 = *(longlong *)(pcVar4 + 8);
    if (*piVar5 == *param_2) {
      if (cVar2 != '\0') {
        lVar7 = 0x18;
      }
      if (*(int *)(lVar7 + lVar8) != param_2[1]) goto LAB_144b45b0a;
LAB_144b45b35:
      local_res20 = lVar3;
      FUN_144b3d910(lVar3);
      pcVar6 = (char *)FUN_144c35a10(&local_res10,param_2,*(undefined8 *)(pcVar4 + 8),&local_res20);
      if ((cVar9 != '\0') || (*pcVar6 != '\0')) {
        cVar9 = '\x01';
      }
    }
    else {
LAB_144b45b0a:
      piVar5 = (int *)(lVar8 + 0x18);
      if (cVar2 != '\0') {
        piVar5 = (int *)(lVar8 + 0x1c);
      }
      if (*piVar5 == param_2[1]) {
        piVar5 = (int *)(lVar8 + 0x1c);
        if (cVar2 != '\0') {
          piVar5 = (int *)(lVar8 + 0x18);
        }
        if (*piVar5 == *param_2) goto LAB_144b45b35;
      }
    }
  }
  pcVar4 = *(char **)(*(longlong *)(param_2 + 10) + 0x48);
  pcVar11 = pcVar4 + (longlong)*(int *)(*(longlong *)(param_2 + 10) + 0x50) * 0x10;
  do {
    if (pcVar4 == pcVar11) {
      lVar8 = lVar3;
      if (cVar9 == '\0') {
        lVar8 = 0;
        FUN_144b3f230(lVar3);
      }
      plVar1 = local_res18;
      if (*local_res18 != lVar8) {
        if (lVar8 != 0) {
          FUN_144b3d910(lVar8);
        }
        lVar3 = *plVar1;
        *plVar1 = lVar8;
        if (lVar3 != 0) {
          FUN_144b3f230();
        }
      }
      *param_1 = cVar9;
      if (lVar8 != 0) {
        FUN_144b3f230(lVar8);
      }
      return param_1;
    }
    cVar2 = *pcVar4;
    if (cVar2 == '\0') {
      piVar5 = (int *)(*(longlong *)(pcVar4 + 8) + 0x18);
    }
    else {
      piVar5 = (int *)(*(longlong *)(pcVar4 + 8) + 0x1c);
    }
    lVar8 = *(longlong *)(pcVar4 + 8);
    if (*piVar5 == *param_2) {
      lVar7 = 0x1c;
      if (cVar2 != '\0') {
        lVar7 = 0x18;
      }
      if (*(int *)(lVar7 + lVar8) != param_2[1]) goto LAB_144b45bd6;
LAB_144b45bfe:
      local_res20 = lVar3;
      FUN_144b3d910(lVar3);
      pcVar6 = (char *)FUN_144c35a10(&local_res10,param_2,*(undefined8 *)(pcVar4 + 8),&local_res20);
      if ((cVar9 != '\0') || (*pcVar6 != '\0')) {
        cVar9 = '\x01';
      }
    }
    else {
LAB_144b45bd6:
      piVar5 = (int *)(lVar8 + 0x18);
      if (cVar2 != '\0') {
        piVar5 = (int *)(lVar8 + 0x1c);
      }
      if (*piVar5 == param_2[1]) {
        piVar5 = (int *)(lVar8 + 0x1c);
        if (cVar2 != '\0') {
          piVar5 = (int *)(lVar8 + 0x18);
        }
        if (*piVar5 == *param_2) goto LAB_144b45bfe;
      }
    }
    pcVar4 = pcVar4 + 0x10;
  } while( true );
}



// FUNCTION 144b45cb0 FUN_144b45cb0 body=124 status=ok
// SIG undefined FUN_144b45cb0(void)

void FUN_144b45cb0(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0xd0);
    piVar1[6] = 0;
    if (param_2 == (int *)0x0) {
      piVar1[0] = 0x10000;
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0x10000;
      param_2 = piVar1;
    }
    else {
      uVar2 = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)piVar1 = *(undefined8 *)param_2;
      *(undefined8 *)(piVar1 + 2) = uVar2;
    }
    if (((param_2[2] != 0 || param_2[1] != 0) || (*param_2 != 0x10000)) || (param_2[3] != 0x10000))
    {
      piVar1[6] = 1;
    }
    if (param_3 == (int *)0x0) {
      param_3 = piVar1 + 4;
      piVar1[5] = 0;
      *param_3 = 0;
    }
    else {
      *(undefined8 *)(piVar1 + 4) = *(undefined8 *)param_3;
    }
    if (param_3[1] != 0 || *param_3 != 0) {
      piVar1[6] = piVar1[6] | 2;
    }
  }
  return;
}



// FUNCTION 144b45d30 FUN_144b45d30 body=13 status=ok
// SIG undefined FUN_144b45d30(void)

void FUN_144b45d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_144b50080(param_1,0,param_2,param_3);
  return;
}



// FUNCTION 144b45d40 FUN_144b45d40 body=15 status=ok
// SIG undefined FUN_144b45d40(void)

void FUN_144b45d40(undefined8 *param_1)

{
  *param_1 = hkaiPhysicsBodySilhouetteGeneratorBase::vftable;
  FUN_144c6f6a0();
  return;
}



// FUNCTION 144b45d50 FUN_144b45d50 body=121 status=ok
// SIG undefined FUN_144b45d50(void)

uint * FUN_144b45d50(ulonglong *param_1,uint *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  do {
    uVar2 = *param_1;
    if ((uVar2 >> 0x15 & 1) == 0) {
LAB_144b45d9f:
      uVar3 = 0;
    }
    else {
      iVar1 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0x1fffff);
      uVar2 = *param_1;
      if (param_1 + (longlong)iVar1 + 2 == (ulonglong *)0x0) goto LAB_144b45d9f;
      uVar3 = param_1[(longlong)iVar1 + 2];
    }
    uVar4 = uVar4 | uVar3;
    if (((uVar2 & 1) != 0) || (param_1 = (ulonglong *)param_1[1], param_1 == (ulonglong *)0x0)) {
      *param_2 = (uint)uVar4 & 0xffff;
      return param_2;
    }
  } while( true );
}



// FUNCTION 144b45dd0 FUN_144b45dd0 body=242 status=ok
// SIG undefined FUN_144b45dd0(void)

undefined8 FUN_144b45dd0(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *local_res8;
  ulonglong *local_res10;
  
  puVar5 = param_1;
  if (param_1 != param_2) {
    while( true ) {
      uVar2 = *puVar5;
      puVar6 = (ulonglong *)0x0;
      puVar7 = param_2;
      if ((uVar2 >> 0xd & 1) != 0) break;
      local_res8 = puVar6;
      if (((uVar2 & 1) != 0) ||
         (puVar1 = puVar5 + 1, puVar5 = (ulonglong *)*puVar1,
         (ulonglong *)*puVar1 == (ulonglong *)0x0)) goto LAB_144b45e30;
    }
    iVar3 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0x1fff);
    local_res8 = puVar5 + (longlong)iVar3 + 2;
LAB_144b45e30:
    uVar2 = *puVar7;
    if ((uVar2 >> 0xd & 1) == 0) {
      if (((uVar2 & 1) != 0) ||
         (puVar5 = puVar7 + 1, puVar7 = (ulonglong *)*puVar5,
         (ulonglong *)*puVar5 == (ulonglong *)0x0)) goto LAB_144b45e66;
      goto LAB_144b45e30;
    }
    iVar3 = (*(code *)PTR_FUN_14c6da350)((uint)uVar2 & 0x1fff);
    puVar6 = puVar7 + (longlong)iVar3 + 2;
LAB_144b45e66:
    local_res10 = puVar6;
    if ((local_res8 != (ulonglong *)0x0) && (puVar6 != (ulonglong *)0x0)) {
      uVar4 = FUN_144f69000(&local_res8,&local_res10);
      return uVar4;
    }
    puVar5 = (ulonglong *)FUN_144f69980(param_2);
    while( true ) {
      if (param_1 == (ulonglong *)0x0) {
        return 0;
      }
      if (param_1 == puVar5) break;
      param_1 = (ulonglong *)param_1[1];
    }
  }
  return 1;
}



// FUNCTION 144b45ed0 FUN_144b45ed0 body=1078 status=ok
// SIG undefined FUN_144b45ed0(void)

longlong *
FUN_144b45ed0(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
             ulonglong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  uint *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char *local_res18;
  char *local_228;
  char *local_220;
  longlong local_218;
  char *pcStack_210;
  ulonglong local_208;
  undefined8 local_200;
  code *local_1f8;
  undefined8 *local_1f0;
  code *local_1e8;
  char **local_1e0;
  undefined1 local_1d8 [8];
  undefined1 local_1d0 [80];
  undefined1 local_180 [344];
  
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
  lVar1 = *(longlong *)(lVar5 + 0x3e0);
  if (lVar1 != 0) {
    local_228 = "TthkSerialize::Load::toVarInplace";
    local_220 = "";
    FUN_144b3f370(lVar1,&local_228);
  }
  if (param_3 != 0) {
    plVar6 = (longlong *)*param_1;
    if (plVar6 == (longlong *)0x0) {
      local_res18 = (char *)0x20;
      lVar5 = (*DAT_14c787670)(0,&local_res18,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar5,"TagfileReadFormat");
      }
      if (lVar5 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        plVar6 = (longlong *)FUN_144c070e0(lVar5);
      }
      plVar2 = (longlong *)*param_1;
      *param_1 = (longlong)plVar6;
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
        plVar6 = (longlong *)*param_1;
      }
    }
    if ((char)param_1[2] == '\0') {
      plVar6 = (longlong *)
               (**(code **)(*plVar6 + 0x28))(plVar6,&local_228,param_3,param_4,local_1d8,param_1[1])
      ;
    }
    else {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x30))(plVar6,&local_res18);
    }
    plVar6 = (longlong *)*plVar6;
    if (plVar6 == (longlong *)0x0) {
      if ((1 < DAT_14c787730) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar8 = FUN_144bdc640(local_1d0);
          local_res18 = (char *)0x0;
          lVar5 = FUN_144bdc480(uVar8,"Failed to load",&local_res18,0);
          *(char **)(lVar5 + 0x38) = "hkSerialize.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x38a;
          FUN_144bdc690(local_1d0);
        }
        else {
          uVar8 = FUN_144bdc810(local_180,&DAT_14c7876e0,2);
          local_res18 = (char *)0x0;
          lVar5 = FUN_144bdc480(uVar8,"Failed to load",&local_res18,0);
          *(char **)(lVar5 + 0x38) = "hkSerialize.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x38a;
          FUN_144bdc8a0(local_180);
        }
      }
    }
    else {
      (**(code **)(*plVar6 + 8))(plVar6,&local_218);
      pcVar3 = pcStack_210;
      lVar5 = local_218;
      if ((param_5 < 2) ||
         ((((pcStack_210 != (char *)0x0 && (cVar4 = FUN_144b45dd0(pcStack_210), cVar4 != '\0')) &&
           (puVar7 = (uint *)FUN_144b45d50(pcVar3,&local_res18), (*puVar7 >> 3 & 1) == 0)) &&
          (lVar5 != 0)))) {
        uVar9 = local_208;
        *param_2 = local_218;
        param_2[1] = (longlong)pcStack_210;
        local_208 = 0;
        local_218 = 0;
        pcStack_210 = (char *)0x0;
        goto LAB_144b462b4;
      }
      if ((1 < DAT_14c787730) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          local_res18 = pcStack_210;
          uVar8 = FUN_144bdc640(local_1d0);
          local_200 = 2;
          local_1f8 = FUN_144c00d20;
          local_1f0 = &param_5;
          local_1e8 = FUN_144c00d20;
          local_1e0 = &local_res18;
          lVar5 = FUN_144bdc480(uVar8,"Type mismatch - requested {}, but got {}",&local_200,0);
          *(char **)(lVar5 + 0x38) = "hkSerialize.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x385;
          FUN_144bdc690(local_1d0);
        }
        else {
          local_228 = pcStack_210;
          uVar8 = FUN_144bdc810(local_180,&DAT_14c7876e0,2);
          local_200 = 2;
          local_1f8 = FUN_144c00d20;
          local_1f0 = &param_5;
          local_1e8 = FUN_144c00d20;
          local_1e0 = &local_228;
          lVar5 = FUN_144bdc480(uVar8,"Type mismatch - requested {}, but got {}",&local_200,0);
          *(char **)(lVar5 + 0x38) = "hkSerialize.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x385;
          FUN_144bdc8a0(local_180);
        }
      }
      if ((local_208 & 1) != 0) {
        FUN_144be6b30(local_208 & 0xfffffffffffffffe);
      }
    }
  }
  uVar9 = 0;
  *param_2 = 0;
  param_2[1] = 0;
LAB_144b462b4:
  param_2[2] = uVar9;
  if (lVar1 != 0) {
    local_228 = "Et";
    local_220 = "";
    FUN_144b3f260(lVar1,&local_228);
  }
  return param_2;
}



// FUNCTION 144b46310 FUN_144b46310 body=36 status=ok
// SIG undefined FUN_144b46310(void)

void FUN_144b46310(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_144f12ea0(param_1,param_2,param_3);
  return;
}



// FUNCTION 144b46340 FUN_144b46340 body=313 status=ok
// SIG undefined FUN_144b46340(void)

void FUN_144b46340(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_28 [32];
  
  lVar1 = param_3[1];
  plVar7 = (longlong *)
           ((longlong)*(int *)(*(longlong *)(param_2 + 0x20) + 0x17c) * 0x120 +
           *(longlong *)(param_1 + 0x38));
  plVar7[8] = *param_3;
  plVar7[9] = lVar1;
  lVar1 = param_3[3];
  plVar7[10] = param_3[2];
  plVar7[0xb] = lVar1;
  lVar1 = param_3[5];
  plVar7[0xc] = param_3[4];
  plVar7[0xd] = lVar1;
  lVar1 = param_3[7];
  plVar7[0xe] = param_3[6];
  plVar7[0xf] = lVar1;
  lVar1 = *plVar7;
  if (lVar1 != 0) {
    lVar4 = param_3[1];
    *(longlong *)(lVar1 + 0x60) = *param_3;
    *(longlong *)(lVar1 + 0x68) = lVar4;
    lVar4 = param_3[3];
    *(longlong *)(lVar1 + 0x70) = param_3[2];
    *(longlong *)(lVar1 + 0x78) = lVar4;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
    lVar4 = param_3[5];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
    *(int *)(lVar1 + 0x80) = (int)param_3[4];
    *(undefined4 *)(lVar1 + 0x84) = uVar2;
    *(int *)(lVar1 + 0x88) = (int)lVar4;
    *(undefined4 *)(lVar1 + 0x8c) = uVar3;
    uVar2 = *(undefined4 *)((longlong)param_3 + 0x34);
    lVar4 = param_3[7];
    uVar3 = *(undefined4 *)((longlong)param_3 + 0x3c);
    *(int *)(lVar1 + 0x90) = (int)param_3[6];
    *(undefined4 *)(lVar1 + 0x94) = uVar2;
    *(int *)(lVar1 + 0x98) = (int)lVar4;
    *(undefined4 *)(lVar1 + 0x9c) = uVar3;
    FUN_144ca8090(*(longlong *)(lVar1 + 0x20) + 400,param_3,lVar1 + 0xc0);
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_144c3ed40(lVar1,local_28);
      lVar1 = plVar7[4];
      if (*(char *)(param_1 + 0x30) == '\x01') {
        uVar5 = *(undefined8 *)(param_1 + 0x20);
      }
      else {
        uVar5 = FUN_144ca6690(param_1 + 0x20);
      }
      FUN_144fcd920(uVar5,(int)lVar1,local_28);
    }
  }
  plVar6 = (longlong *)plVar7[2];
  plVar7 = plVar6 + (int)plVar7[3];
  for (; plVar6 != plVar7; plVar6 = plVar6 + 1) {
    lVar1 = *plVar6;
    if (lVar1 != 0) {
      lVar4 = param_3[1];
      *(longlong *)(lVar1 + 0x40) = *param_3;
      *(longlong *)(lVar1 + 0x48) = lVar4;
      lVar4 = param_3[3];
      *(longlong *)(lVar1 + 0x50) = param_3[2];
      *(longlong *)(lVar1 + 0x58) = lVar4;
      lVar4 = param_3[5];
      *(longlong *)(lVar1 + 0x60) = param_3[4];
      *(longlong *)(lVar1 + 0x68) = lVar4;
      lVar4 = param_3[7];
      *(longlong *)(lVar1 + 0x70) = param_3[6];
      *(longlong *)(lVar1 + 0x78) = lVar4;
    }
  }
  return;
}



// FUNCTION 144b46480 FUN_144b46480 body=94 status=ok
// SIG undefined FUN_144b46480(void)

void FUN_144b46480(undefined8 *param_1)

{
  *param_1 = 0xbb67ae856a09e667;
  param_1[1] = 0xa54ff53a3c6ef372;
  param_1[2] = 0x9b05688c510e527f;
  param_1[3] = 0x5be0cd191f83d9ab;
  param_1[4] = 0xbb67ae856a09e667;
  param_1[5] = 0xa54ff53a3c6ef372;
  param_1[8] = 0;
  param_1[6] = 0x9b05688c510e527f;
  param_1[7] = 0x5be0cd191f83d9ab;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}



// FUNCTION 144b464e0 FUN_144b464e0 body=312 status=ok
// SIG undefined FUN_144b464e0(void)

undefined8 *
FUN_144b464e0(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8;
  char *local_38;
  char *local_30;
  
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
    local_38 = "TthkSerialize::Load::toVar";
    local_30 = "";
    FUN_144b3f370(lVar1,&local_38);
  }
  FUN_144f769c0(*(undefined8 *)(param_1 + 0x18));
  FUN_144bfd370(param_1,&local_res8,param_3,param_4,param_6);
  if (local_res8 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  else {
    FUN_144bfd810(param_1,param_2,local_res8,param_5);
  }
  if (lVar1 != 0) {
    local_38 = "Et";
    local_30 = "";
    FUN_144b3f260(lVar1,&local_38);
  }
  return param_2;
}



// FUNCTION 144b46620 FUN_144b46620 body=526 status=ok
// SIG undefined FUN_144b46620(void)

void FUN_144b46620(longlong param_1,undefined8 param_2)

{
  FUN_144bfd110();
  FUN_144bfd110(param_1 + 8,param_2);
  FUN_144bfd110(param_1 + 0x10,param_2);
  FUN_144bfd110(param_1 + 0x18,param_2);
  FUN_144bfd110(param_1 + 0x20,param_2);
  FUN_144bfd110(param_1 + 0x28,param_2);
  FUN_144bfd110(param_1 + 0x30,param_2);
  FUN_144bfd110(param_1 + 0x38,param_2);
  FUN_144bfd110(param_1 + 0x40,param_2);
  FUN_144bfd110(param_1 + 0x48,param_2);
  FUN_144bfd110(param_1 + 0x50,param_2);
  FUN_144bfd110(param_1 + 0x58,param_2);
  FUN_144bfd110(param_1 + 0x60,param_2);
  FUN_144bfd110(param_1 + 0x68,param_2);
  FUN_144bfd110(param_1 + 0x70,param_2);
  FUN_144bfd110(param_1 + 0x78,param_2);
  FUN_144bfd110(param_1 + 0x80,param_2);
  FUN_144bfd110(param_1 + 0x88,param_2);
  FUN_144bfd110(param_1 + 0x90,param_2);
  FUN_144bfd110(param_1 + 0x98,param_2);
  FUN_144bfd110(param_1 + 0xa0,param_2);
  FUN_144bfd110(param_1 + 0xa8,param_2);
  FUN_144bfd110(param_1 + 0xb0,param_2);
  FUN_144bfd110(param_1 + 0xb8,param_2);
  FUN_144bfd110(param_1 + 0xc0,param_2);
  FUN_144bfd110(param_1 + 200,param_2);
  FUN_144bfd110(param_1 + 0xd0,param_2);
  FUN_144bfd110(param_1 + 0xd8,param_2);
  FUN_144bfd110(param_1 + 0xe0,param_2);
  FUN_144bfd110(param_1 + 0xe8,param_2);
  FUN_144bfd110(param_1 + 0xf0,param_2);
  FUN_144bfd110(param_1 + 0xf8,param_2);
  FUN_144bfd110(param_1 + 0x100,param_2);
  FUN_144bfd110(param_1 + 0x108,param_2);
  FUN_144bfd110(param_1 + 0x110,param_2);
  FUN_144bfd110(param_1 + 0x118,param_2);
  FUN_144bfd110(param_1 + 0x120,param_2);
  return;
}



// FUNCTION 144b46830 ExecuteActionOnPlayingID body=116 status=ok
// SIG void ExecuteActionOnPlayingID(AkActionOnEventType param_1, uint param_2, int param_3, AkCurveInterpolation param_4)

/* void __cdecl AK::SoundEngine::ExecuteActionOnPlayingID(enum
   AK::SoundEngine::AkActionOnEventType,unsigned int,int,enum AkCurveInterpolation) */

void __cdecl
AK::SoundEngine::ExecuteActionOnPlayingID
          (AkActionOnEventType param_1,uint param_2,int param_3,AkCurveInterpolation param_4)

{
  undefined2 uVar1;
  longlong lVar2;
  
                    /* 0x4b46830  59
                       ?ExecuteActionOnPlayingID@SoundEngine@AK@@YAXW4AkActionOnEventType@12@IHW4AkCurveInterpolation@@@Z
                        */
  if ((DAT_14c790ff4 != '\0') && (param_2 != 0)) {
    uVar1 = FUN_145088000();
    lVar2 = FUN_145080f50(DAT_14c790fd8,0x3b,uVar1);
    *(AkActionOnEventType *)(lVar2 + 4) = param_1;
    *(uint *)(lVar2 + 8) = param_2;
    *(int *)(lVar2 + 0xc) = param_3;
    *(AkCurveInterpolation *)(lVar2 + 0x10) = param_4;
    LOCK();
    *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144b468b0 FUN_144b468b0 body=73 status=ok
// SIG undefined FUN_144b468b0(void)

undefined8 * FUN_144b468b0(undefined8 *param_1)

{
  param_1[2] = 0xffffffffffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 3) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 4) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 5) = 0x3f000000;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 144b46900 FUN_144b46900 body=170 status=ok
// SIG undefined FUN_144b46900(void)

bool FUN_144b46900(undefined8 *param_1,undefined8 param_2)

{
  bool bVar1;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  longlong local_18;
  int local_10;
  uint local_c;
  
  local_c = 0x80000000;
  local_18 = 0;
  local_10 = 0;
  FUN_144c2d3e0(param_1,&local_18);
  bVar1 = local_10 != 0;
  if (bVar1) {
    local_res18[0] = *(undefined4 *)((longlong)param_1 + 0x14);
    local_res20[0] = *(undefined4 *)(param_1 + 2);
    FUN_144c2dcf0(*param_1,param_1[1],local_res20,local_res18,&local_18,param_2);
  }
  if ((-1 < (int)local_c) && (local_18 != 0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,local_18,(ulonglong)(local_c & 0x7fffffff) << 3);
  }
  return bVar1;
}



// FUNCTION 144b469b0 FUN_144b469b0 body=332 status=ok
// SIG undefined FUN_144b469b0(void)

undefined4 * FUN_144b469b0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [48];
  
  *param_1 = 0x3f000000;
  param_1[1] = 0x3dcccccd;
  param_1[2] = 0x3c23d70a;
  param_1[3] = 0x38d1b717;
  local_48 = 0x3db2b8c2;
  uStack_44 = 0x3db2b8c2;
  uStack_40 = 0x3db2b8c2;
  uStack_3c = 0x3db2b8c2;
  puVar2 = (undefined4 *)FUN_144beaab0(local_38,&local_48);
  param_1[4] = *puVar2;
  local_48 = 0x3f860a92;
  uStack_44 = 0x3f860a92;
  uStack_40 = 0x3f860a92;
  uStack_3c = 0x3f860a92;
  puVar2 = (undefined4 *)FUN_144beaab0(local_38,&local_48);
  param_1[5] = *puVar2;
  param_1[6] = 0x3ca3d70a;
  param_1[7] = 0x3c23d70a;
  param_1[8] = 0x3c23d70a;
  local_48 = 0x40060a92;
  uStack_44 = 0x40060a92;
  uStack_40 = 0x40060a92;
  uStack_3c = 0x40060a92;
  puVar2 = (undefined4 *)FUN_144beaab0(local_38,&local_48);
  param_1[9] = *puVar2;
  local_48 = 0x3db2b8c2;
  uStack_44 = 0x3db2b8c2;
  uStack_40 = 0x3db2b8c2;
  uStack_3c = 0x3db2b8c2;
  puVar2 = (undefined4 *)FUN_144beaab0(local_38,&local_48);
  uVar1 = *puVar2;
  param_1[0xc] = 0x3727c5ac;
  param_1[10] = uVar1;
  param_1[0xb] = 0x3fc25c20;
  *(undefined1 *)(param_1 + 0xd) = 0;
  return param_1;
}



// FUNCTION 144b46b00 FUN_144b46b00 body=181 status=ok
// SIG undefined FUN_144b46b00(void)

void FUN_144b46b00(undefined4 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  if ((((DAT_14c7929a8 != '\0') && (param_2 != 0)) && (iVar1 = FUN_144d70cb0(param_2), iVar1 != 0))
     && (iVar1 = FUN_1451684d0(), iVar1 == 0)) {
    iVar1 = FUN_14515b410(param_1,1);
    if (iVar1 < 0) {
      FUN_145168500();
    }
    else {
      FUN_144d70eb0(param_2,&local_28);
      iVar1 = FUN_14515a420(param_1,&local_28);
      if (iVar1 < 0) {
        FUN_145168500();
      }
      else {
        FUN_145168500();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
}



// FUNCTION 144b46bc0 GetSourcePlayPosition body=106 status=ok
// SIG AKRESULT GetSourcePlayPosition(uint param_1, int * param_2, bool param_3)

/* enum AKRESULT __cdecl AK::SoundEngine::GetSourcePlayPosition(unsigned int,int * __ptr64,bool) */

AKRESULT __cdecl AK::SoundEngine::GetSourcePlayPosition(uint param_1,int *param_2,bool param_3)

{
  AKRESULT AVar1;
  undefined4 local_res20 [2];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
                    /* 0x4b46bc0  123
                       ?GetSourcePlayPosition@SoundEngine@AK@@YA?AW4AKRESULT@@IPEAH_N@Z */
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  if (param_2 == (int *)0x0) {
    return 0x1f;
  }
  local_res20[0] = 1;
  local_18 = 0;
  local_28 = 0;
  uStack_20 = 0;
  AVar1 = FUN_1450c9100(DAT_14c791050,param_1,&local_28,local_res20,param_3);
  *param_2 = (int)uStack_20;
  return AVar1;
}



// FUNCTION 144b46c30 FUN_144b46c30 body=449 status=ok
// SIG undefined FUN_144b46c30(void)

void FUN_144b46c30(undefined1 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  undefined4 in_EAX;
  uint uVar6;
  undefined *puVar7;
  byte bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[4];
  fVar17 = param_2[5];
  fVar4 = param_2[8];
  fVar16 = param_2[9];
  fVar13 = ABS(fVar1);
  fVar14 = ABS(fVar3);
  fVar15 = ABS(fVar4);
  *param_1 = 0;
  auVar11._0_8_ = CONCAT44(fVar3,fVar3) & 0x7fffffff7fffffff;
  auVar11._8_4_ = fVar14;
  auVar11._12_4_ = fVar14;
  auVar9._0_8_ = CONCAT44(fVar4,fVar4) & 0x7fffffff7fffffff;
  auVar9._8_4_ = fVar15;
  auVar9._12_4_ = fVar15;
  auVar12._8_4_ = fVar13;
  auVar12._0_8_ = CONCAT44(fVar1,fVar1) & 0x7fffffff7fffffff;
  auVar12._12_4_ = fVar13;
  auVar12 = maxps(auVar11,auVar12);
  auVar12 = maxps(auVar9,auVar12);
  auVar10._4_4_ = -(uint)(auVar12._4_4_ <= fVar14);
  auVar10._0_4_ = -(uint)(auVar12._0_4_ <= fVar13);
  auVar10._8_4_ = -(uint)(auVar12._8_4_ <= fVar15);
  auVar10._12_4_ = -(uint)(auVar12._12_4_ <= 0.0);
  uVar6 = movmskps(in_EAX,auVar10);
  if ((&DAT_14998f5c0)[uVar6 & 7] == '\0') {
    bVar8 = 0;
    if (fVar1 < 0.0) {
      *param_1 = 8;
      fVar17 = -fVar17;
      bVar8 = 8;
    }
  }
  else if ((&DAT_14998f5c0)[uVar6 & 7] == '\x01') {
    if (0.0 <= fVar3) {
      fVar17 = -fVar2;
      bVar8 = 9;
      *param_1 = 9;
    }
    else {
      *param_1 = 7;
      bVar8 = 7;
      fVar17 = fVar2;
    }
  }
  else if (0.0 <= fVar4) {
    fVar16 = -fVar2;
    *param_1 = 4;
    bVar8 = 4;
  }
  else {
    *param_1 = 6;
    bVar8 = 6;
    fVar16 = fVar2;
  }
  if (ABS(fVar16) <= ABS(fVar17)) {
    if (0.0 <= fVar17) {
      return;
    }
    uVar5 = (&UNK_1499901a0)[bVar8];
  }
  else {
    puVar7 = &DAT_149990188;
    if (0.0 <= fVar16) {
      puVar7 = &DAT_1499901b8;
    }
    uVar5 = puVar7[bVar8];
  }
  *param_1 = uVar5;
  return;
}



// FUNCTION 144b46e00 SeekOnEvent body=410 status=ok
// SIG AKRESULT SeekOnEvent(uint param_1, __uint64 param_2, int param_3, bool param_4, uint param_5)

/* enum AKRESULT __cdecl AK::SoundEngine::SeekOnEvent(unsigned int,unsigned
   __int64,int,bool,unsigned int) */

AKRESULT __cdecl
AK::SoundEngine::SeekOnEvent(uint param_1,__uint64 param_2,int param_3,bool param_4,uint param_5)

{
  int iVar1;
  longlong lVar2;
  undefined2 uVar3;
  AKRESULT AVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
                    /* 0x4b46e00  258  ?SeekOnEvent@SoundEngine@AK@@YA?AW4AKRESULT@@I_KH_NI@Z */
  lVar5 = DAT_14c791060;
  if (DAT_14c790ff4 == '\0') {
    return 0x66;
  }
  do {
    while (iVar1 = *(int *)(lVar5 + 0x108), iVar1 < 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x110));
      if (*(int *)(lVar5 + 0x108) < 0) goto LAB_144b46e67;
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x110));
    }
    LOCK();
    bVar8 = iVar1 == *(int *)(lVar5 + 0x108);
    if (bVar8) {
      *(int *)(lVar5 + 0x108) = iVar1 + 1;
    }
    UNLOCK();
  } while (!bVar8);
LAB_144b46e67:
  lVar6 = 0;
  if (*(uint *)(lVar5 + 0x150) != 0) {
    for (lVar2 = *(longlong *)
                  (*(longlong *)(lVar5 + 0x148) +
                  ((ulonglong)param_1 % (ulonglong)*(uint *)(lVar5 + 0x150)) * 8);
        (lVar7 = lVar6, lVar2 != 0 && (lVar7 = lVar2, *(uint *)(lVar2 + 0x10) != param_1));
        lVar2 = *(longlong *)(lVar2 + 8)) {
    }
    lVar6 = lVar7;
    if (lVar7 != 0) {
      LOCK();
      *(int *)(lVar7 + 0x14) = *(int *)(lVar7 + 0x14) + 1;
      UNLOCK();
    }
  }
  iVar1 = *(int *)(lVar5 + 0x108);
  do {
    if (iVar1 < 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x110));
LAB_144b46f06:
      if (lVar6 == 0) {
        AVar4 = 0xf;
      }
      else {
        uVar3 = FUN_145088050();
        lVar5 = FUN_145080f50(DAT_14c790fd8,0x28,uVar3);
        *(longlong *)(lVar5 + 0xc) = lVar6;
        *(uint *)(lVar5 + 0x14) = param_1;
        *(__uint64 *)(lVar5 + 4) = param_2;
        *(uint *)(lVar5 + 0x1c) = param_5;
        *(undefined2 *)(lVar5 + 0x20) = 0;
        *(int *)(lVar5 + 0x18) = param_3;
        *(ushort *)(lVar5 + 0x22) = (ushort)param_4;
        LOCK();
        *(int *)(DAT_14c790fd8 + 0xb4) = *(int *)(DAT_14c790fd8 + 0xb4) + -1;
        UNLOCK();
        AVar4 = 1;
      }
      return AVar4;
    }
    LOCK();
    bVar8 = iVar1 == *(int *)(lVar5 + 0x108);
    if (bVar8) {
      *(int *)(lVar5 + 0x108) = iVar1 + -1;
    }
    UNLOCK();
    if (bVar8) {
      if ((iVar1 + -1 == 0) && (0 < *(int *)(lVar5 + 0x138))) {
        SetEvent(*(HANDLE *)(lVar5 + 0x140));
      }
      goto LAB_144b46f06;
    }
    iVar1 = *(int *)(lVar5 + 0x108);
  } while( true );
}



// FUNCTION 144b46fa0 FUN_144b46fa0 body=17 status=ok
// SIG undefined FUN_144b46fa0(void)

DWORD FUN_144b46fa0(void)

{
  DWORD DVar1;
  
  DVar1 = GetCurrentThreadId();
  return DVar1;
}



// FUNCTION 144b46fc0 FUN_144b46fc0 body=46 status=ok
// SIG undefined FUN_144b46fc0(void)

undefined8 FUN_144b46fc0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  local_res18 = param_3;
  local_res20 = param_4;
  uVar1 = FUN_144bb70c0(param_1,param_2,&local_res18);
  return uVar1;
}



// FUNCTION 144b46ff0 FUN_144b46ff0 body=106 status=ok
// SIG undefined FUN_144b46ff0(void)

undefined8 FUN_144b46ff0(void)

{
  int iVar1;
  undefined8 local_res8 [4];
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c781ac0);
  if (DAT_14c781ab8 == 0) {
    iVar1 = FUN_144bb6eb0(3,1);
    if (iVar1 != 0) {
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c781ac0);
      return 0;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c781ac0);
  iVar1 = FUN_144f0e270(local_res8);
  if (iVar1 != 0) {
    local_res8[0] = 0;
  }
  return local_res8[0];
}



// FUNCTION 144b47060 FUN_144b47060 body=417 status=ok
// SIG undefined FUN_144b47060(void)

void FUN_144b47060(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14ab9efa0;
  if (param_1[0x1b] != 0) {
    FUN_144b3f230();
  }
  lVar2 = param_1[0xb];
  lVar3 = (longlong)*(int *)(param_1 + 0xc) * 0x10 + lVar2;
  while (lVar3 != lVar2) {
    plVar1 = (longlong *)(lVar3 + -8);
    lVar3 = lVar3 + -0x10;
    if (*plVar1 != 0) {
      FUN_144b3f230();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 100)) && (param_1[0xb] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xb],
               (ulonglong)(*(uint *)((longlong)param_1 + 100) & 0x7fffffff) << 4);
  }
  param_1[0xb] = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 2);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff) * 0x18);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 3);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144b47210 FUN_144b47210 body=59 status=ok
// SIG undefined FUN_144b47210(void)

undefined4 FUN_144b47210(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    iVar1 = WSASetEvent(*(undefined8 *)(param_1 + 0x6a));
    uVar2 = 9;
    if (iVar1 != 0) {
      uVar2 = 0;
    }
    return uVar2;
  }
  return 1;
}



// FUNCTION 144b47250 FUN_144b47250 body=29 status=ok
// SIG undefined FUN_144b47250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_144b47250(undefined8 param_1)

{
  FUN_144eff330(param_1,&DAT_14997ba40);
  return;
}



// FUNCTION 144b47270 FUN_144b47270 body=37 status=ok
// SIG undefined FUN_144b47270(void)

void FUN_144b47270(int *param_1)

{
  int *local_res8 [4];
  
  if ((param_1 != (int *)0x0) && (*param_1 == -0x3f212453)) {
    local_res8[0] = param_1;
    FUN_144f0e6d0(local_res8);
  }
  return;
}



// FUNCTION 144b472a0 FUN_144b472a0 body=81 status=ok
// SIG undefined FUN_144b472a0(void)

void FUN_144b472a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    (*(code *)PTR_free_14c6d9f28)(*param_1);
    *param_1 = 0;
    (*(code *)PTR_free_14c6d9f28)(param_1);
    param_1 = puVar1;
  }
  return;
}



// FUNCTION 144b47330 PostEvent body=215 status=ok
// SIG uint PostEvent(uint param_1, __uint64 param_2, uint param_3, _func_void_AkCallbackType_AkCallbackInfo_ptr * param_4, void * param_5, uint param_6, AkExternalSourceInfo * param_7, uint param_8)

/* unsigned int __cdecl AK::SoundEngine::PostEvent(unsigned int,unsigned __int64,unsigned int,void
   (__cdecl*)(enum AkCallbackType,struct AkCallbackInfo * __ptr64),void * __ptr64,unsigned
   int,struct AkExternalSourceInfo * __ptr64,unsigned int) */

uint __cdecl
AK::SoundEngine::PostEvent
          (uint param_1,__uint64 param_2,uint param_3,
          _func_void_AkCallbackType_AkCallbackInfo_ptr *param_4,void *param_5,uint param_6,
          AkExternalSourceInfo *param_7,uint param_8)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  
                    /* 0x4b47330  182
                       ?PostEvent@SoundEngine@AK@@YAII_KIP6AXW4AkCallbackType@@PEAUAkCallbackInfo@@@ZPEAXIPEAUAkExternalSourceInfo@@I@Z
                        */
  puVar4 = (undefined8 *)0x0;
  if (param_6 != 0) {
    local_20 = 0;
    local_18 = 0;
    iVar2 = FUN_144d4a250(param_6,param_7,&local_30,local_38);
    if (iVar2 != 1) {
      return 0;
    }
    puVar4 = &local_28;
    local_28 = local_30;
  }
  uVar1 = local_28;
  uVar3 = FUN_144d41600(param_1,param_2,param_3,param_4,param_5,puVar4,param_8);
  if ((uVar3 == 0) && (param_6 != 0)) {
    FUN_144d4a460(uVar1);
  }
  return uVar3;
}



// FUNCTION 144b47410 FUN_144b47410 body=5242 status=ok
// SIG undefined FUN_144b47410(void)

void FUN_144b47410(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char cVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  void *pvVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_618 [32];
  ulonglong local_5f8;
  undefined8 *local_5f0;
  byte local_5e8;
  undefined1 local_5e0;
  undefined1 local_5d8;
  undefined8 *local_5d0;
  void *local_5c8;
  ulonglong local_5c0;
  undefined4 local_5b8;
  undefined4 uStack_5b4;
  undefined4 uStack_5b0;
  undefined4 uStack_5ac;
  undefined4 local_5a8;
  undefined4 uStack_5a4;
  undefined4 uStack_5a0;
  undefined4 uStack_59c;
  ulonglong local_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 local_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined8 uStack_560;
  undefined8 local_558;
  char cStack_550;
  byte bStack_54f;
  undefined2 uStack_54e;
  undefined4 uStack_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 local_538;
  undefined8 uStack_530;
  ulonglong local_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  byte local_4e0;
  byte bStack_4df;
  byte local_4de;
  undefined1 uStack_4dd;
  undefined4 uStack_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  ulonglong local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  ulonglong uStack_470;
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
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  ulonglong uStack_380;
  undefined1 local_368;
  undefined1 uStack_367;
  undefined1 uStack_366;
  undefined1 uStack_365;
  undefined1 uStack_364;
  undefined1 uStack_363;
  undefined1 uStack_362;
  undefined1 uStack_361;
  undefined1 uStack_360;
  undefined1 uStack_35f;
  undefined1 uStack_35e;
  undefined1 uStack_35d;
  undefined1 uStack_35c;
  undefined1 uStack_35b;
  undefined1 uStack_35a;
  undefined1 uStack_359;
  undefined1 local_358;
  undefined1 uStack_357;
  undefined1 uStack_356;
  undefined1 uStack_355;
  undefined1 uStack_354;
  undefined1 uStack_353;
  undefined1 uStack_352;
  undefined1 uStack_351;
  undefined1 uStack_350;
  undefined1 uStack_34f;
  undefined1 uStack_34e;
  undefined1 uStack_34d;
  undefined1 uStack_34c;
  undefined1 uStack_34b;
  undefined1 uStack_34a;
  undefined1 uStack_349;
  undefined8 local_348 [4];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_148 [32];
  ulonglong local_48;
  
  if (param_3 == 0) {
    return;
  }
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_618;
  uVar6 = (ulonglong)*(byte *)(param_1 + 0x11);
  local_5c8 = param_2;
  if ((ulonglong)*(byte *)((longlong)param_1 + 0x89) * 0x40 + uVar6 != 0) {
    uVar12 = (0x10 - (ulonglong)*(byte *)((longlong)param_1 + 0x89)) * 0x40 - uVar6;
    if (param_3 < uVar12) {
      uVar12 = param_3;
    }
    uVar11 = uVar12;
    pvVar13 = param_2;
    if (*(byte *)(param_1 + 0x11) != 0) {
      if (0x40 - uVar6 <= uVar12) {
        uVar11 = 0x40 - uVar6;
      }
      memcpy((void *)(uVar6 + 0x48 + (longlong)param_1),param_2,uVar11);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + (char)uVar11;
      pvVar13 = (void *)((longlong)param_2 + uVar11);
      uVar11 = uVar12 - uVar11;
      if (uVar11 != 0) {
        local_5f8 = CONCAT71(local_5f8._1_7_,
                             *(char *)((longlong)param_1 + 0x89) == '\0' |
                             *(byte *)((longlong)param_1 + 0x8a));
        FUN_144d91290(param_1 + 4,param_1 + 9,0x40,param_1[8]);
        *(char *)((longlong)param_1 + 0x89) = *(char *)((longlong)param_1 + 0x89) + '\x01';
        *(undefined1 *)(param_1 + 0x11) = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
      }
    }
    if (0x40 < uVar11) {
      cVar10 = *(char *)((longlong)param_1 + 0x89);
      lVar8 = (uVar11 - 0x41 >> 6) + 1;
      uVar11 = uVar11 + lVar8 * -0x40;
      do {
        local_5f8 = CONCAT71(local_5f8._1_7_,cVar10 == '\0' | *(byte *)((longlong)param_1 + 0x8a));
        FUN_144d91290(param_1 + 4,pvVar13,0x40,param_1[8]);
        *(char *)((longlong)param_1 + 0x89) = *(char *)((longlong)param_1 + 0x89) + '\x01';
        pvVar13 = (void *)((longlong)pvVar13 + 0x40);
        cVar10 = *(char *)((longlong)param_1 + 0x89);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar6 = 0x40 - (ulonglong)*(byte *)(param_1 + 0x11);
    if (uVar6 <= uVar11) {
      uVar11 = uVar6;
    }
    memcpy((void *)((ulonglong)*(byte *)(param_1 + 0x11) + 0x48 + (longlong)param_1),pvVar13,uVar11)
    ;
    cVar10 = (char)uVar11 + *(char *)(param_1 + 0x11);
    param_2 = (void *)((longlong)param_2 + uVar12);
    *(char *)(param_1 + 0x11) = cVar10;
    param_3 = param_3 - uVar12;
    local_5c8 = param_2;
    if (param_3 == 0) goto LAB_144b4885a;
    uStack_590 = param_1[9];
    local_588 = param_1[10];
    local_598 = param_1[8];
    uStack_580 = param_1[0xb];
    local_578 = param_1[0xc];
    local_5b8 = *(undefined4 *)(param_1 + 4);
    uStack_5b4 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_5b0 = *(undefined4 *)(param_1 + 5);
    uStack_5ac = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_5a8 = *(undefined4 *)(param_1 + 6);
    uStack_5a4 = *(undefined4 *)((longlong)param_1 + 0x34);
    uStack_5a0 = *(undefined4 *)(param_1 + 7);
    uStack_59c = *(undefined4 *)((longlong)param_1 + 0x3c);
    bStack_54f = (*(char *)((longlong)param_1 + 0x89) == '\0') + 2U |
                 *(byte *)((longlong)param_1 + 0x8a);
    uStack_570 = param_1[0xd];
    local_568 = param_1[0xe];
    local_5f8 = CONCAT71(local_5f8._1_7_,bStack_54f);
    uStack_560 = param_1[0xf];
    local_558 = param_1[0x10];
    uStack_54e = CONCAT11(uStack_4dd,local_4de);
    uStack_54c = uStack_4dc;
    cStack_550 = cVar10;
    local_528 = local_598;
    uStack_520 = uStack_590;
    uStack_518 = local_588;
    uStack_510 = uStack_580;
    uStack_508 = local_578;
    local_500 = uStack_570;
    uStack_4f8 = local_568;
    local_4f0 = uStack_560;
    uStack_4e8 = local_558;
    local_4e0 = cVar10;
    bStack_4df = bStack_54f;
    local_468 = local_5b8;
    uStack_464 = uStack_5b4;
    uStack_460 = uStack_5b0;
    uStack_45c = uStack_5ac;
    local_458 = local_5a8;
    uStack_454 = uStack_5a4;
    uStack_450 = uStack_5a0;
    uStack_44c = uStack_59c;
    FUN_144d91290(&local_468,&uStack_590,cVar10);
    uStack_367 = (undefined1)((uint)local_468 >> 8);
    uStack_366 = (undefined1)((uint)local_468 >> 0x10);
    local_368 = (undefined1)local_468;
    uStack_365 = (undefined1)((uint)local_468 >> 0x18);
    uStack_363 = (undefined1)((uint)uStack_464 >> 8);
    uStack_362 = (undefined1)((uint)uStack_464 >> 0x10);
    uStack_364 = (undefined1)uStack_464;
    uStack_361 = (undefined1)((uint)uStack_464 >> 0x18);
    uStack_35f = (undefined1)((uint)uStack_460 >> 8);
    uStack_35e = (undefined1)((uint)uStack_460 >> 0x10);
    uStack_360 = (undefined1)uStack_460;
    uStack_35d = (undefined1)((uint)uStack_460 >> 0x18);
    uStack_35b = (undefined1)((uint)uStack_45c >> 8);
    uStack_35c = (undefined1)uStack_45c;
    uStack_35a = (undefined1)((uint)uStack_45c >> 0x10);
    uStack_359 = (undefined1)((uint)uStack_45c >> 0x18);
    local_358 = (undefined1)local_458;
    uStack_357 = (undefined1)((uint)local_458 >> 8);
    uVar7 = 0;
    uStack_356 = (undefined1)((uint)local_458 >> 0x10);
    uStack_355 = (undefined1)((uint)local_458 >> 0x18);
    uStack_353 = (undefined1)((uint)uStack_454 >> 8);
    uStack_352 = (undefined1)((uint)uStack_454 >> 0x10);
    uStack_354 = (undefined1)uStack_454;
    uStack_351 = (undefined1)((uint)uStack_454 >> 0x18);
    uStack_34f = (undefined1)((uint)uStack_450 >> 8);
    uStack_350 = (undefined1)uStack_450;
    uStack_34e = (undefined1)((uint)uStack_450 >> 0x10);
    uStack_34d = (undefined1)((uint)uStack_450 >> 0x18);
    uStack_34b = (undefined1)((uint)uStack_44c >> 8);
    uStack_34c = (undefined1)uStack_44c;
    uStack_349 = (undefined1)((uint)uStack_44c >> 0x18);
    uStack_34a = (undefined1)((uint)uStack_44c >> 0x10);
    for (uVar6 = param_1[8]; uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
      uVar7 = uVar7 + 1;
    }
    bVar5 = *(byte *)(param_1 + 0x12);
    while ((ulonglong)uVar7 < (ulonglong)bVar5) {
      local_4d8 = *(undefined4 *)param_1;
      uStack_4d4 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_4d0 = *(undefined4 *)(param_1 + 1);
      uStack_4cc = *(undefined4 *)((longlong)param_1 + 0xc);
      local_528 = 0;
      local_4c8 = *(undefined4 *)(param_1 + 2);
      uStack_4c4 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_4c0 = *(undefined4 *)(param_1 + 3);
      uStack_4bc = *(undefined4 *)((longlong)param_1 + 0x1c);
      puVar9 = (undefined8 *)
               ((longlong)param_1 + (longlong)(int)((*(byte *)(param_1 + 0x12) - 2) * 0x20) + 0x91);
      local_4e0 = '@';
      bVar5 = *(byte *)((longlong)param_1 + 0x8a);
      bStack_4df = bVar5 | 4;
      uStack_520 = *puVar9;
      uStack_518 = puVar9[1];
      local_5f8._1_7_ = (undefined7)(local_5f8 >> 8);
      local_5f8 = CONCAT71(local_5f8._1_7_,bVar5) | 4;
      uStack_510 = puVar9[2];
      uStack_508 = puVar9[3];
      local_500 = puVar9[4];
      uStack_4f8 = puVar9[5];
      local_4f0 = puVar9[6];
      uStack_4e8 = puVar9[7];
      local_4b8 = 0;
      uStack_470 = CONCAT44(uStack_4dc,CONCAT13(uStack_4dd,CONCAT12(local_4de,CONCAT11(bVar5,0x40)))
                           ) | 0x400;
      uStack_4b0 = uStack_520;
      local_4a8 = uStack_518;
      uStack_4a0 = uStack_510;
      local_498 = uStack_508;
      uStack_490 = local_500;
      local_488 = uStack_4f8;
      uStack_480 = local_4f0;
      local_478 = uStack_4e8;
      local_468 = local_4d8;
      uStack_464 = uStack_4d4;
      uStack_460 = uStack_4d0;
      uStack_45c = uStack_4cc;
      local_458 = local_4c8;
      uStack_454 = uStack_4c4;
      uStack_450 = uStack_4c0;
      uStack_44c = uStack_4bc;
      FUN_144d91290(local_4c8,local_4d8,0x40,0);
      *(char *)((longlong)puVar9 + 1) = (char)((uint)local_468 >> 8);
      *(char *)((longlong)puVar9 + 2) = (char)((uint)local_468 >> 0x10);
      *(char *)puVar9 = (char)local_468;
      *(char *)((longlong)puVar9 + 3) = (char)((uint)local_468 >> 0x18);
      *(char *)((longlong)puVar9 + 5) = (char)((uint)uStack_464 >> 8);
      *(char *)((longlong)puVar9 + 6) = (char)((uint)uStack_464 >> 0x10);
      *(char *)((longlong)puVar9 + 4) = (char)uStack_464;
      *(char *)((longlong)puVar9 + 7) = (char)((uint)uStack_464 >> 0x18);
      *(char *)((longlong)puVar9 + 9) = (char)((uint)uStack_460 >> 8);
      *(char *)((longlong)puVar9 + 10) = (char)((uint)uStack_460 >> 0x10);
      *(char *)(puVar9 + 1) = (char)uStack_460;
      *(char *)((longlong)puVar9 + 0xb) = (char)((uint)uStack_460 >> 0x18);
      *(char *)((longlong)puVar9 + 0xd) = (char)((uint)uStack_45c >> 8);
      *(char *)((longlong)puVar9 + 0xe) = (char)((uint)uStack_45c >> 0x10);
      *(char *)((longlong)puVar9 + 0xc) = (char)uStack_45c;
      *(char *)((longlong)puVar9 + 0xf) = (char)((uint)uStack_45c >> 0x18);
      *(char *)((longlong)puVar9 + 0x11) = (char)((uint)local_458 >> 8);
      *(char *)((longlong)puVar9 + 0x12) = (char)((uint)local_458 >> 0x10);
      *(char *)(puVar9 + 2) = (char)local_458;
      *(char *)((longlong)puVar9 + 0x13) = (char)((uint)local_458 >> 0x18);
      *(char *)((longlong)puVar9 + 0x15) = (char)((uint)uStack_454 >> 8);
      *(char *)((longlong)puVar9 + 0x16) = (char)((uint)uStack_454 >> 0x10);
      *(char *)((longlong)puVar9 + 0x14) = (char)uStack_454;
      *(char *)((longlong)puVar9 + 0x17) = (char)((uint)uStack_454 >> 0x18);
      *(char *)((longlong)puVar9 + 0x19) = (char)((uint)uStack_450 >> 8);
      *(char *)((longlong)puVar9 + 0x1a) = (char)((uint)uStack_450 >> 0x10);
      *(char *)(puVar9 + 3) = (char)uStack_450;
      *(char *)((longlong)puVar9 + 0x1b) = (char)((uint)uStack_450 >> 0x18);
      *(char *)((longlong)puVar9 + 0x1d) = (char)((uint)uStack_44c >> 8);
      *(char *)((longlong)puVar9 + 0x1e) = (char)((uint)uStack_44c >> 0x10);
      *(char *)((longlong)puVar9 + 0x1c) = (char)uStack_44c;
      *(char *)((longlong)puVar9 + 0x1f) = (char)((uint)uStack_44c >> 0x18);
      bVar5 = *(char *)(param_1 + 0x12) - 1;
      *(byte *)(param_1 + 0x12) = bVar5;
    }
    lVar8 = (ulonglong)bVar5 * 0x20;
    puVar9 = (undefined8 *)(lVar8 + 0x91 + (longlong)param_1);
    *puVar9 = CONCAT17(uStack_361,
                       CONCAT16(uStack_362,
                                CONCAT15(uStack_363,
                                         CONCAT14(uStack_364,
                                                  CONCAT13(uStack_365,
                                                           CONCAT12(uStack_366,
                                                                    CONCAT11(uStack_367,local_368)))
                                                 ))));
    puVar9[1] = CONCAT17(uStack_359,
                         CONCAT16(uStack_35a,
                                  CONCAT15(uStack_35b,
                                           CONCAT14(uStack_35c,
                                                    CONCAT13(uStack_35d,
                                                             CONCAT12(uStack_35e,
                                                                      CONCAT11(uStack_35f,uStack_360
                                                                              )))))));
    puVar9 = (undefined8 *)(lVar8 + 0xa1 + (longlong)param_1);
    *puVar9 = CONCAT17(uStack_351,
                       CONCAT16(uStack_352,
                                CONCAT15(uStack_353,
                                         CONCAT14(uStack_354,
                                                  CONCAT13(uStack_355,
                                                           CONCAT12(uStack_356,
                                                                    CONCAT11(uStack_357,local_358)))
                                                 ))));
    puVar9[1] = CONCAT17(uStack_349,
                         CONCAT16(uStack_34a,
                                  CONCAT15(uStack_34b,
                                           CONCAT14(uStack_34c,
                                                    CONCAT13(uStack_34d,
                                                             CONCAT12(uStack_34e,
                                                                      CONCAT11(uStack_34f,uStack_350
                                                                              )))))));
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
    param_1[4] = *param_1;
    param_1[5] = param_1[1];
    param_1[8] = param_1[8] + 1;
    *(undefined2 *)(param_1 + 0x11) = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_1 + 2);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x14);
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_1 + 3);
    *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_1 + 0x1c);
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  if (0x400 < param_3) {
    uVar6 = param_1[8];
    do {
      lVar8 = 0x3f;
      if ((param_3 | 1) != 0) {
        for (; (param_3 | 1) >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar12 = 1L << ((byte)lVar8 & 0x3f);
      if ((uVar6 << 10 & uVar12 - 1) != 0) {
        do {
          uVar12 = uVar12 >> 1;
        } while ((uVar6 << 10 & uVar12 - 1) != 0);
        uVar6 = param_1[8];
      }
      bVar5 = *(byte *)((longlong)param_1 + 0x8a);
      local_5c0 = uVar12 >> 10;
      if (uVar12 < 0x401) {
        local_548 = *param_1;
        uStack_540 = param_1[1];
        local_538 = param_1[2];
        uStack_530 = param_1[3];
        local_4e0 = 0;
        bStack_4df = 0;
        uStack_520 = 0;
        uStack_518 = 0;
        uStack_510 = 0;
        uStack_508 = 0;
        local_500 = 0;
        uStack_4f8 = 0;
        local_4f0 = 0;
        uStack_4e8 = 0;
        pvVar13 = local_5c8;
        uVar11 = uVar12;
        local_528 = uVar6;
        local_4de = bVar5;
        if (0x40 < uVar12) {
          lVar8 = (uVar12 - 0x41 >> 6) + 1;
          uVar11 = lVar8 * -0x40 + uVar12;
          do {
            local_5f8 = CONCAT71(local_5f8._1_7_,bStack_4df == 0 | local_4de);
            FUN_144d91290(&local_548,pvVar13,0x40,local_528);
            pvVar13 = (void *)((longlong)pvVar13 + 0x40);
            bStack_4df = bStack_4df + 1;
            lVar8 = lVar8 + -1;
          } while (lVar8 != 0);
        }
        uVar6 = 0x40 - (ulonglong)local_4e0;
        if (uVar6 <= uVar11) {
          uVar11 = uVar6;
        }
        memcpy((void *)((longlong)&uStack_520 + (ulonglong)local_4e0),pvVar13,uVar11);
        cStack_550 = local_4e0 + (char)uVar11;
        uStack_590 = uStack_520;
        local_588 = uStack_518;
        local_598 = local_528;
        bVar5 = bStack_4df == 0 | local_4de;
        uStack_580 = uStack_510;
        local_578 = uStack_508;
        bStack_54f = bVar5 | 2;
        uStack_570 = local_500;
        local_568 = uStack_4f8;
        local_5f8 = CONCAT71(local_5f8._1_7_,bVar5) | 2;
        uStack_560 = local_4f0;
        local_558 = uStack_4e8;
        local_4b8 = local_528;
        uStack_4b0 = uStack_520;
        local_4a8 = uStack_518;
        uStack_4a0 = uStack_510;
        local_498 = uStack_508;
        uStack_490 = local_500;
        local_4d8 = (undefined4)local_548;
        uStack_4d4 = local_548._4_4_;
        uStack_4d0 = (undefined4)uStack_540;
        uStack_4cc = uStack_540._4_4_;
        local_478 = uStack_4e8;
        uStack_470 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,cStack_550))) | 0x200;
        local_4c8 = (undefined4)local_538;
        uStack_4c4 = local_538._4_4_;
        uStack_4c0 = (undefined4)uStack_530;
        uStack_4bc = uStack_530._4_4_;
        local_488 = uStack_4f8;
        uStack_480 = local_4f0;
        local_468 = (undefined4)local_548;
        uStack_464 = local_548._4_4_;
        uStack_460 = (undefined4)uStack_540;
        uStack_45c = uStack_540._4_4_;
        local_458 = (undefined4)local_538;
        uStack_454 = local_538._4_4_;
        uStack_450 = (undefined4)uStack_530;
        uStack_44c = uStack_530._4_4_;
        local_4e0 = cStack_550;
        FUN_144d91290(&local_468);
        uStack_367 = (undefined1)((uint)local_468 >> 8);
        uStack_366 = (undefined1)((uint)local_468 >> 0x10);
        local_368 = (undefined1)local_468;
        uStack_365 = (undefined1)((uint)local_468 >> 0x18);
        uStack_363 = (undefined1)((uint)uStack_464 >> 8);
        uStack_364 = (undefined1)uStack_464;
        uStack_362 = (undefined1)((uint)uStack_464 >> 0x10);
        uStack_361 = (undefined1)((uint)uStack_464 >> 0x18);
        uStack_35f = (undefined1)((uint)uStack_460 >> 8);
        uStack_360 = (undefined1)uStack_460;
        uStack_35d = (undefined1)((uint)uStack_460 >> 0x18);
        uStack_35c = (undefined1)uStack_45c;
        uStack_35e = (undefined1)((uint)uStack_460 >> 0x10);
        uVar7 = 0;
        uStack_35b = (undefined1)((uint)uStack_45c >> 8);
        uStack_35a = (undefined1)((uint)uStack_45c >> 0x10);
        uStack_359 = (undefined1)((uint)uStack_45c >> 0x18);
        uStack_357 = (undefined1)((uint)local_458 >> 8);
        uStack_356 = (undefined1)((uint)local_458 >> 0x10);
        local_358 = (undefined1)local_458;
        uStack_355 = (undefined1)((uint)local_458 >> 0x18);
        uStack_353 = (undefined1)((uint)uStack_454 >> 8);
        uStack_352 = (undefined1)((uint)uStack_454 >> 0x10);
        uStack_354 = (undefined1)uStack_454;
        uStack_351 = (undefined1)((uint)uStack_454 >> 0x18);
        uStack_34f = (undefined1)((uint)uStack_450 >> 8);
        uStack_350 = (undefined1)uStack_450;
        uStack_34e = (undefined1)((uint)uStack_450 >> 0x10);
        uStack_34d = (undefined1)((uint)uStack_450 >> 0x18);
        uStack_34b = (undefined1)((uint)uStack_44c >> 8);
        uStack_34c = (undefined1)uStack_44c;
        uStack_349 = (undefined1)((uint)uStack_44c >> 0x18);
        uStack_34a = (undefined1)((uint)uStack_44c >> 0x10);
        for (uVar6 = local_528; uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
          uVar7 = uVar7 + 1;
        }
        bVar5 = *(byte *)(param_1 + 0x12);
        param_2 = local_5c8;
        uVar6 = local_5c0;
        while (uVar11 = (ulonglong)bVar5, local_5c0 = uVar6, uVar7 < uVar11) {
          local_428 = *(undefined4 *)param_1;
          uStack_424 = *(undefined4 *)((longlong)param_1 + 4);
          uStack_420 = *(undefined4 *)(param_1 + 1);
          uStack_41c = *(undefined4 *)((longlong)param_1 + 0xc);
          local_598 = 0;
          local_418 = *(undefined4 *)(param_1 + 2);
          uStack_414 = *(undefined4 *)((longlong)param_1 + 0x14);
          uStack_410 = *(undefined4 *)(param_1 + 3);
          uStack_40c = *(undefined4 *)((longlong)param_1 + 0x1c);
          puVar9 = (undefined8 *)
                   ((longlong)param_1 +
                   (longlong)(int)((*(byte *)(param_1 + 0x12) - 2) * 0x20) + 0x91);
          cStack_550 = '@';
          bVar5 = *(byte *)((longlong)param_1 + 0x8a);
          bStack_54f = bVar5 | 4;
          uStack_590 = *puVar9;
          local_588 = puVar9[1];
          local_5f8._1_7_ = (undefined7)(local_5f8 >> 8);
          local_5f8 = CONCAT71(local_5f8._1_7_,bVar5) | 4;
          uStack_580 = puVar9[2];
          local_578 = puVar9[3];
          uStack_570 = puVar9[4];
          local_568 = puVar9[5];
          uStack_560 = puVar9[6];
          local_558 = puVar9[7];
          local_3c8 = 0;
          uStack_380 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,0x40))) | 0x400;
          local_5c8 = param_2;
          local_3e8._0_4_ = local_428;
          local_3e8._4_4_ = uStack_424;
          uStack_3e0 = uStack_420;
          uStack_3dc = uStack_41c;
          local_3d8 = local_418;
          uStack_3d4 = uStack_414;
          uStack_3d0 = uStack_410;
          uStack_3cc = uStack_40c;
          uStack_3c0 = uStack_590;
          local_3b8 = local_588;
          uStack_3b0 = uStack_580;
          local_3a8 = local_578;
          uStack_3a0 = uStack_570;
          local_398 = local_568;
          uStack_390 = uStack_560;
          local_388 = local_558;
          FUN_144d91290(local_418,local_428,0x40,0);
          *(char *)((longlong)puVar9 + 1) = (char)((uint)local_428 >> 8);
          *(char *)((longlong)puVar9 + 2) = (char)((uint)local_428 >> 0x10);
          *(char *)puVar9 = (char)local_428;
          *(char *)((longlong)puVar9 + 3) = (char)((uint)local_428 >> 0x18);
          *(char *)((longlong)puVar9 + 5) = (char)((uint)uStack_424 >> 8);
          *(char *)((longlong)puVar9 + 6) = (char)((uint)uStack_424 >> 0x10);
          *(char *)((longlong)puVar9 + 4) = (char)uStack_424;
          *(char *)((longlong)puVar9 + 7) = (char)((uint)uStack_424 >> 0x18);
          *(char *)((longlong)puVar9 + 9) = (char)((uint)uStack_420 >> 8);
          *(char *)((longlong)puVar9 + 10) = (char)((uint)uStack_420 >> 0x10);
          *(char *)(puVar9 + 1) = (char)uStack_420;
          *(char *)((longlong)puVar9 + 0xb) = (char)((uint)uStack_420 >> 0x18);
          *(char *)((longlong)puVar9 + 0xd) = (char)((uint)uStack_41c >> 8);
          *(char *)((longlong)puVar9 + 0xe) = (char)((uint)uStack_41c >> 0x10);
          *(char *)((longlong)puVar9 + 0xc) = (char)uStack_41c;
          *(char *)((longlong)puVar9 + 0xf) = (char)((uint)uStack_41c >> 0x18);
          *(char *)((longlong)puVar9 + 0x11) = (char)((uint)local_418 >> 8);
          *(char *)((longlong)puVar9 + 0x12) = (char)((uint)local_418 >> 0x10);
          *(char *)(puVar9 + 2) = (char)local_418;
          *(char *)((longlong)puVar9 + 0x13) = (char)((uint)local_418 >> 0x18);
          *(char *)((longlong)puVar9 + 0x15) = (char)((uint)uStack_414 >> 8);
          *(char *)((longlong)puVar9 + 0x16) = (char)((uint)uStack_414 >> 0x10);
          *(char *)((longlong)puVar9 + 0x14) = (char)uStack_414;
          *(char *)((longlong)puVar9 + 0x17) = (char)((uint)uStack_414 >> 0x18);
          *(char *)((longlong)puVar9 + 0x19) = (char)((uint)uStack_410 >> 8);
          *(char *)((longlong)puVar9 + 0x1a) = (char)((uint)uStack_410 >> 0x10);
          *(char *)(puVar9 + 3) = (char)uStack_410;
          *(char *)((longlong)puVar9 + 0x1b) = (char)((uint)uStack_410 >> 0x18);
          *(char *)((longlong)puVar9 + 0x1d) = (char)((uint)uStack_40c >> 8);
          *(char *)((longlong)puVar9 + 0x1e) = (char)((uint)uStack_40c >> 0x10);
          *(char *)((longlong)puVar9 + 0x1c) = (char)uStack_40c;
          *(char *)((longlong)puVar9 + 0x1f) = (char)((uint)uStack_40c >> 0x18);
          bVar5 = *(char *)(param_1 + 0x12) - 1;
          *(byte *)(param_1 + 0x12) = bVar5;
          param_2 = local_5c8;
          uVar6 = local_5c0;
        }
        uVar14 = CONCAT13(uStack_365,CONCAT12(uStack_366,CONCAT11(uStack_367,local_368)));
        uVar15 = CONCAT13(uStack_361,CONCAT12(uStack_362,CONCAT11(uStack_363,uStack_364)));
        uVar16 = CONCAT13(uStack_35d,CONCAT12(uStack_35e,CONCAT11(uStack_35f,uStack_360)));
        uVar17 = CONCAT13(uStack_359,CONCAT12(uStack_35a,CONCAT11(uStack_35b,uStack_35c)));
        uVar18 = CONCAT13(uStack_355,CONCAT12(uStack_356,CONCAT11(uStack_357,local_358)));
        uVar19 = CONCAT13(uStack_351,CONCAT12(uStack_352,CONCAT11(uStack_353,uStack_354)));
        uVar20 = CONCAT13(uStack_34d,CONCAT12(uStack_34e,CONCAT11(uStack_34f,uStack_350)));
        uVar21 = CONCAT13(uStack_349,CONCAT12(uStack_34a,CONCAT11(uStack_34b,uStack_34c)));
      }
      else {
        local_5f0 = local_348;
        local_5f8 = CONCAT71(local_5f8._1_7_,bVar5);
        uVar6 = FUN_144b50560(param_2,uVar12,param_1);
        while ((2 < uVar6 && (uVar6 < 0x11))) {
          uVar11 = 0;
          if (1 < uVar6) {
            lVar8 = 0;
            puVar9 = local_348;
            do {
              lVar8 = lVar8 + 2;
              (&local_3e8)[uVar11] = puVar9;
              uVar11 = uVar11 + 1;
              puVar9 = puVar9 + 8;
            } while (1 < uVar6 - lVar8);
          }
          local_5d0 = local_148;
          local_5e8 = bVar5 | 4;
          local_5d8 = 0;
          local_5e0 = 0;
          local_5f0 = (undefined8 *)((ulonglong)local_5f0 & 0xffffffffffffff00);
          local_5f8 = 0;
          FUN_144d913d0(&local_3e8,uVar11,1,param_1);
          if (uVar11 * 2 < uVar6) {
            uVar2 = local_348[uVar11 * 8 + 1];
            uVar3 = local_348[uVar11 * 8 + 2];
            uVar4 = local_348[uVar11 * 8 + 3];
            local_148[uVar11 * 4] = local_348[uVar11 * 8];
            local_148[uVar11 * 4 + 1] = uVar2;
            local_148[uVar11 * 4 + 2] = uVar3;
            local_148[uVar11 * 4 + 3] = uVar4;
            uVar11 = uVar11 + 1;
          }
          memcpy(local_348,local_148,uVar11 << 5);
          uVar6 = uVar11;
        }
        uVar7 = 0;
        for (uVar6 = param_1[8]; uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
          uVar7 = uVar7 + 1;
        }
        bVar5 = *(byte *)(param_1 + 0x12);
        uVar6 = local_5c0;
        while (local_5c0 = uVar6, (ulonglong)uVar7 < (ulonglong)bVar5) {
          local_408 = *(undefined4 *)param_1;
          uStack_404 = *(undefined4 *)((longlong)param_1 + 4);
          uStack_400 = *(undefined4 *)(param_1 + 1);
          uStack_3fc = *(undefined4 *)((longlong)param_1 + 0xc);
          local_598 = 0;
          local_3f8 = *(undefined4 *)(param_1 + 2);
          uStack_3f4 = *(undefined4 *)((longlong)param_1 + 0x14);
          uStack_3f0 = *(undefined4 *)(param_1 + 3);
          uStack_3ec = *(undefined4 *)((longlong)param_1 + 0x1c);
          puVar9 = (undefined8 *)
                   ((longlong)param_1 +
                   (longlong)(int)((*(byte *)(param_1 + 0x12) - 2) * 0x20) + 0x91);
          cStack_550 = '@';
          bVar5 = *(byte *)((longlong)param_1 + 0x8a);
          bStack_54f = bVar5 | 4;
          uStack_590 = *puVar9;
          local_588 = puVar9[1];
          local_5f8._1_7_ = (undefined7)(local_5f8 >> 8);
          local_5f8 = CONCAT71(local_5f8._1_7_,bVar5) | 4;
          uStack_580 = puVar9[2];
          local_578 = puVar9[3];
          uStack_570 = puVar9[4];
          local_568 = puVar9[5];
          uStack_560 = puVar9[6];
          local_558 = puVar9[7];
          local_3c8 = 0;
          uStack_380 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,0x40))) | 0x400;
          local_3e8._0_4_ = local_408;
          local_3e8._4_4_ = uStack_404;
          uStack_3e0 = uStack_400;
          uStack_3dc = uStack_3fc;
          local_3d8 = local_3f8;
          uStack_3d4 = uStack_3f4;
          uStack_3d0 = uStack_3f0;
          uStack_3cc = uStack_3ec;
          uStack_3c0 = uStack_590;
          local_3b8 = local_588;
          uStack_3b0 = uStack_580;
          local_3a8 = local_578;
          uStack_3a0 = uStack_570;
          local_398 = local_568;
          uStack_390 = uStack_560;
          local_388 = local_558;
          FUN_144d91290(local_3f8,local_408,0x40,0);
          *(char *)((longlong)puVar9 + 1) = (char)((uint)local_408 >> 8);
          *(char *)((longlong)puVar9 + 2) = (char)((uint)local_408 >> 0x10);
          *(char *)puVar9 = (char)local_408;
          *(char *)((longlong)puVar9 + 3) = (char)((uint)local_408 >> 0x18);
          *(char *)((longlong)puVar9 + 5) = (char)((uint)uStack_404 >> 8);
          *(char *)((longlong)puVar9 + 6) = (char)((uint)uStack_404 >> 0x10);
          *(char *)((longlong)puVar9 + 4) = (char)uStack_404;
          *(char *)((longlong)puVar9 + 7) = (char)((uint)uStack_404 >> 0x18);
          *(char *)((longlong)puVar9 + 9) = (char)((uint)uStack_400 >> 8);
          *(char *)((longlong)puVar9 + 10) = (char)((uint)uStack_400 >> 0x10);
          *(char *)(puVar9 + 1) = (char)uStack_400;
          *(char *)((longlong)puVar9 + 0xb) = (char)((uint)uStack_400 >> 0x18);
          *(char *)((longlong)puVar9 + 0xd) = (char)((uint)uStack_3fc >> 8);
          *(char *)((longlong)puVar9 + 0xe) = (char)((uint)uStack_3fc >> 0x10);
          *(char *)((longlong)puVar9 + 0xc) = (char)uStack_3fc;
          *(char *)((longlong)puVar9 + 0xf) = (char)((uint)uStack_3fc >> 0x18);
          *(char *)((longlong)puVar9 + 0x11) = (char)((uint)local_3f8 >> 8);
          *(char *)((longlong)puVar9 + 0x12) = (char)((uint)local_3f8 >> 0x10);
          *(char *)(puVar9 + 2) = (char)local_3f8;
          *(char *)((longlong)puVar9 + 0x13) = (char)((uint)local_3f8 >> 0x18);
          *(char *)((longlong)puVar9 + 0x15) = (char)((uint)uStack_3f4 >> 8);
          *(char *)((longlong)puVar9 + 0x16) = (char)((uint)uStack_3f4 >> 0x10);
          *(char *)((longlong)puVar9 + 0x14) = (char)uStack_3f4;
          *(char *)((longlong)puVar9 + 0x17) = (char)((uint)uStack_3f4 >> 0x18);
          *(char *)((longlong)puVar9 + 0x19) = (char)((uint)uStack_3f0 >> 8);
          *(char *)((longlong)puVar9 + 0x1a) = (char)((uint)uStack_3f0 >> 0x10);
          *(char *)(puVar9 + 3) = (char)uStack_3f0;
          *(char *)((longlong)puVar9 + 0x1b) = (char)((uint)uStack_3f0 >> 0x18);
          *(char *)((longlong)puVar9 + 0x1d) = (char)((uint)uStack_3ec >> 8);
          *(char *)((longlong)puVar9 + 0x1e) = (char)((uint)uStack_3ec >> 0x10);
          *(char *)((longlong)puVar9 + 0x1c) = (char)uStack_3ec;
          *(char *)((longlong)puVar9 + 0x1f) = (char)((uint)uStack_3ec >> 0x18);
          bVar5 = *(char *)(param_1 + 0x12) - 1;
          *(byte *)(param_1 + 0x12) = bVar5;
          uVar6 = local_5c0;
        }
        uVar7 = 0;
        lVar8 = (ulonglong)bVar5 * 0x20;
        puVar9 = (undefined8 *)(lVar8 + 0x91 + (longlong)param_1);
        *puVar9 = local_348[0];
        puVar9[1] = local_348[1];
        puVar9 = (undefined8 *)(lVar8 + 0xa1 + (longlong)param_1);
        *puVar9 = local_348[2];
        puVar9[1] = local_348[3];
        *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
        bVar5 = *(byte *)(param_1 + 0x12);
        uVar11 = (uVar6 >> 1) + param_1[8];
        if (uVar11 != 0) {
          do {
            uVar7 = uVar7 + 1;
            uVar11 = uVar11 & uVar11 - 1;
          } while (uVar11 != 0);
          bVar5 = *(byte *)(param_1 + 0x12);
        }
        uVar14 = local_328;
        uVar15 = uStack_324;
        uVar16 = uStack_320;
        uVar17 = uStack_31c;
        uVar18 = local_318;
        uVar19 = uStack_314;
        uVar20 = uStack_310;
        uVar21 = uStack_30c;
        while (uVar11 = (ulonglong)bVar5, local_328 = uVar14, uStack_324 = uVar15,
              uStack_320 = uVar16, uStack_31c = uVar17, local_318 = uVar18, uStack_314 = uVar19,
              uStack_310 = uVar20, uStack_30c = uVar21, uVar7 < uVar11) {
          local_448 = *(undefined4 *)param_1;
          uStack_444 = *(undefined4 *)((longlong)param_1 + 4);
          uStack_440 = *(undefined4 *)(param_1 + 1);
          uStack_43c = *(undefined4 *)((longlong)param_1 + 0xc);
          local_598 = 0;
          local_438 = *(undefined4 *)(param_1 + 2);
          uStack_434 = *(undefined4 *)((longlong)param_1 + 0x14);
          uStack_430 = *(undefined4 *)(param_1 + 3);
          uStack_42c = *(undefined4 *)((longlong)param_1 + 0x1c);
          puVar9 = (undefined8 *)
                   ((longlong)param_1 +
                   (longlong)(int)((*(byte *)(param_1 + 0x12) - 2) * 0x20) + 0x91);
          cStack_550 = '@';
          bVar5 = *(byte *)((longlong)param_1 + 0x8a);
          bStack_54f = bVar5 | 4;
          uStack_590 = *puVar9;
          local_588 = puVar9[1];
          local_5f8._1_7_ = (undefined7)(local_5f8 >> 8);
          local_5f8 = CONCAT71(local_5f8._1_7_,bVar5) | 4;
          uStack_580 = puVar9[2];
          local_578 = puVar9[3];
          uStack_570 = puVar9[4];
          local_568 = puVar9[5];
          uStack_560 = puVar9[6];
          local_558 = puVar9[7];
          local_3c8 = 0;
          uStack_380 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,0x40))) | 0x400;
          local_3e8._0_4_ = local_448;
          local_3e8._4_4_ = uStack_444;
          uStack_3e0 = uStack_440;
          uStack_3dc = uStack_43c;
          local_3d8 = local_438;
          uStack_3d4 = uStack_434;
          uStack_3d0 = uStack_430;
          uStack_3cc = uStack_42c;
          uStack_3c0 = uStack_590;
          local_3b8 = local_588;
          uStack_3b0 = uStack_580;
          local_3a8 = local_578;
          uStack_3a0 = uStack_570;
          local_398 = local_568;
          uStack_390 = uStack_560;
          local_388 = local_558;
          FUN_144d91290(local_438,local_448,0x40,0);
          *(char *)((longlong)puVar9 + 1) = (char)((uint)local_448 >> 8);
          *(char *)((longlong)puVar9 + 2) = (char)((uint)local_448 >> 0x10);
          *(char *)puVar9 = (char)local_448;
          *(char *)((longlong)puVar9 + 3) = (char)((uint)local_448 >> 0x18);
          *(char *)((longlong)puVar9 + 5) = (char)((uint)uStack_444 >> 8);
          *(char *)((longlong)puVar9 + 6) = (char)((uint)uStack_444 >> 0x10);
          *(char *)((longlong)puVar9 + 4) = (char)uStack_444;
          *(char *)((longlong)puVar9 + 7) = (char)((uint)uStack_444 >> 0x18);
          *(char *)((longlong)puVar9 + 9) = (char)((uint)uStack_440 >> 8);
          *(char *)((longlong)puVar9 + 10) = (char)((uint)uStack_440 >> 0x10);
          *(char *)(puVar9 + 1) = (char)uStack_440;
          *(char *)((longlong)puVar9 + 0xb) = (char)((uint)uStack_440 >> 0x18);
          *(char *)((longlong)puVar9 + 0xd) = (char)((uint)uStack_43c >> 8);
          *(char *)((longlong)puVar9 + 0xe) = (char)((uint)uStack_43c >> 0x10);
          *(char *)((longlong)puVar9 + 0xc) = (char)uStack_43c;
          *(char *)((longlong)puVar9 + 0xf) = (char)((uint)uStack_43c >> 0x18);
          *(char *)((longlong)puVar9 + 0x11) = (char)((uint)local_438 >> 8);
          *(char *)((longlong)puVar9 + 0x12) = (char)((uint)local_438 >> 0x10);
          *(char *)(puVar9 + 2) = (char)local_438;
          *(char *)((longlong)puVar9 + 0x13) = (char)((uint)local_438 >> 0x18);
          *(char *)((longlong)puVar9 + 0x15) = (char)((uint)uStack_434 >> 8);
          *(char *)((longlong)puVar9 + 0x16) = (char)((uint)uStack_434 >> 0x10);
          *(char *)((longlong)puVar9 + 0x14) = (char)uStack_434;
          *(char *)((longlong)puVar9 + 0x17) = (char)((uint)uStack_434 >> 0x18);
          *(char *)((longlong)puVar9 + 0x19) = (char)((uint)uStack_430 >> 8);
          *(char *)((longlong)puVar9 + 0x1a) = (char)((uint)uStack_430 >> 0x10);
          *(char *)(puVar9 + 3) = (char)uStack_430;
          *(char *)((longlong)puVar9 + 0x1b) = (char)((uint)uStack_430 >> 0x18);
          *(char *)((longlong)puVar9 + 0x1d) = (char)((uint)uStack_42c >> 8);
          *(char *)((longlong)puVar9 + 0x1c) = (char)uStack_42c;
          *(char *)((longlong)puVar9 + 0x1e) = (char)((uint)uStack_42c >> 0x10);
          *(char *)((longlong)puVar9 + 0x1f) = (char)((uint)uStack_42c >> 0x18);
          bVar5 = *(char *)(param_1 + 0x12) - 1;
          *(byte *)(param_1 + 0x12) = bVar5;
          uVar14 = local_328;
          uVar15 = uStack_324;
          uVar16 = uStack_320;
          uVar17 = uStack_31c;
          uVar18 = local_318;
          uVar19 = uStack_314;
          uVar20 = uStack_310;
          uVar21 = uStack_30c;
        }
      }
      param_2 = (void *)((longlong)param_2 + uVar12);
      param_3 = param_3 - uVar12;
      puVar1 = (undefined4 *)(uVar11 * 0x20 + 0x91 + (longlong)param_1);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1[2] = uVar16;
      puVar1[3] = uVar17;
      puVar1 = (undefined4 *)(uVar11 * 0x20 + 0xa1 + (longlong)param_1);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      puVar1[2] = uVar20;
      puVar1[3] = uVar21;
      param_1[8] = param_1[8] + uVar6;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
      uVar6 = param_1[8];
      local_5c8 = param_2;
    } while (0x400 < param_3);
  }
  if (param_3 != 0) {
    bVar5 = *(byte *)(param_1 + 0x11);
    if (bVar5 != 0) {
      puVar9 = param_1 + 9;
      uVar6 = 0x40 - (ulonglong)bVar5;
      if (param_3 < uVar6) {
        uVar6 = param_3;
      }
      memcpy((void *)((longlong)puVar9 + (ulonglong)bVar5),param_2,uVar6);
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + (char)uVar6;
      param_2 = (void *)((longlong)param_2 + uVar6);
      param_3 = param_3 - uVar6;
      if (param_3 != 0) {
        local_5f8 = CONCAT71(local_5f8._1_7_,
                             *(char *)((longlong)param_1 + 0x89) == '\0' |
                             *(byte *)((longlong)param_1 + 0x8a));
        FUN_144d91290(param_1 + 4,puVar9,0x40,param_1[8]);
        *(char *)((longlong)param_1 + 0x89) = *(char *)((longlong)param_1 + 0x89) + '\x01';
        *(undefined1 *)(param_1 + 0x11) = 0;
        *puVar9 = 0;
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
      }
    }
    if (0x40 < param_3) {
      cVar10 = *(char *)((longlong)param_1 + 0x89);
      lVar8 = (param_3 - 0x41 >> 6) + 1;
      param_3 = param_3 + lVar8 * -0x40;
      do {
        local_5f8 = CONCAT71(local_5f8._1_7_,cVar10 == '\0' | *(byte *)((longlong)param_1 + 0x8a));
        FUN_144d91290(param_1 + 4,param_2,0x40,param_1[8]);
        *(char *)((longlong)param_1 + 0x89) = *(char *)((longlong)param_1 + 0x89) + '\x01';
        param_2 = (void *)((longlong)param_2 + 0x40);
        cVar10 = *(char *)((longlong)param_1 + 0x89);
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar6 = 0x40 - (ulonglong)*(byte *)(param_1 + 0x11);
    if (uVar6 <= param_3) {
      param_3 = uVar6;
    }
    memcpy((void *)((longlong)param_1 + (ulonglong)*(byte *)(param_1 + 0x11) + 0x48),param_2,param_3
          );
    *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + (char)param_3;
    uVar7 = 0;
    for (uVar6 = param_1[8]; uVar6 != 0; uVar6 = uVar6 & uVar6 - 1) {
      uVar7 = uVar7 + 1;
    }
    bVar5 = *(byte *)(param_1 + 0x12);
    while (uVar7 < bVar5) {
      local_448 = *(undefined4 *)param_1;
      uStack_444 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_440 = *(undefined4 *)(param_1 + 1);
      uStack_43c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_598 = 0;
      local_438 = *(undefined4 *)(param_1 + 2);
      uStack_434 = *(undefined4 *)((longlong)param_1 + 0x14);
      uStack_430 = *(undefined4 *)(param_1 + 3);
      uStack_42c = *(undefined4 *)((longlong)param_1 + 0x1c);
      puVar9 = (undefined8 *)
               ((longlong)param_1 + (longlong)(int)((*(byte *)(param_1 + 0x12) - 2) * 0x20) + 0x91);
      cStack_550 = '@';
      bVar5 = *(byte *)((longlong)param_1 + 0x8a);
      bStack_54f = bVar5 | 4;
      uStack_590 = *puVar9;
      local_588 = puVar9[1];
      local_5f8._1_7_ = (undefined7)(local_5f8 >> 8);
      local_5f8 = CONCAT71(local_5f8._1_7_,bVar5) | 4;
      uStack_580 = puVar9[2];
      local_578 = puVar9[3];
      uStack_570 = puVar9[4];
      local_568 = puVar9[5];
      uStack_560 = puVar9[6];
      local_558 = puVar9[7];
      local_3c8 = 0;
      uStack_380 = CONCAT44(uStack_54c,CONCAT22(uStack_54e,CONCAT11(bVar5,0x40))) | 0x400;
      local_3e8._0_4_ = local_448;
      local_3e8._4_4_ = uStack_444;
      uStack_3e0 = uStack_440;
      uStack_3dc = uStack_43c;
      local_3d8 = local_438;
      uStack_3d4 = uStack_434;
      uStack_3d0 = uStack_430;
      uStack_3cc = uStack_42c;
      uStack_3c0 = uStack_590;
      local_3b8 = local_588;
      uStack_3b0 = uStack_580;
      local_3a8 = local_578;
      uStack_3a0 = uStack_570;
      local_398 = local_568;
      uStack_390 = uStack_560;
      local_388 = local_558;
      FUN_144d91290(local_438,local_448,0x40,0);
      *(char *)((longlong)puVar9 + 1) = (char)((uint)local_448 >> 8);
      *(char *)((longlong)puVar9 + 2) = (char)((uint)local_448 >> 0x10);
      *(char *)puVar9 = (char)local_448;
      *(char *)((longlong)puVar9 + 3) = (char)((uint)local_448 >> 0x18);
      *(char *)((longlong)puVar9 + 5) = (char)((uint)uStack_444 >> 8);
      *(char *)((longlong)puVar9 + 6) = (char)((uint)uStack_444 >> 0x10);
      *(char *)((longlong)puVar9 + 4) = (char)uStack_444;
      *(char *)((longlong)puVar9 + 7) = (char)((uint)uStack_444 >> 0x18);
      *(char *)((longlong)puVar9 + 9) = (char)((uint)uStack_440 >> 8);
      *(char *)((longlong)puVar9 + 10) = (char)((uint)uStack_440 >> 0x10);
      *(char *)(puVar9 + 1) = (char)uStack_440;
      *(char *)((longlong)puVar9 + 0xb) = (char)((uint)uStack_440 >> 0x18);
      *(char *)((longlong)puVar9 + 0xd) = (char)((uint)uStack_43c >> 8);
      *(char *)((longlong)puVar9 + 0xe) = (char)((uint)uStack_43c >> 0x10);
      *(char *)((longlong)puVar9 + 0xc) = (char)uStack_43c;
      *(char *)((longlong)puVar9 + 0xf) = (char)((uint)uStack_43c >> 0x18);
      *(char *)((longlong)puVar9 + 0x11) = (char)((uint)local_438 >> 8);
      *(char *)((longlong)puVar9 + 0x12) = (char)((uint)local_438 >> 0x10);
      *(char *)(puVar9 + 2) = (char)local_438;
      *(char *)((longlong)puVar9 + 0x13) = (char)((uint)local_438 >> 0x18);
      *(char *)((longlong)puVar9 + 0x15) = (char)((uint)uStack_434 >> 8);
      *(char *)((longlong)puVar9 + 0x16) = (char)((uint)uStack_434 >> 0x10);
      *(char *)((longlong)puVar9 + 0x14) = (char)uStack_434;
      *(char *)((longlong)puVar9 + 0x17) = (char)((uint)uStack_434 >> 0x18);
      *(char *)((longlong)puVar9 + 0x19) = (char)((uint)uStack_430 >> 8);
      *(char *)((longlong)puVar9 + 0x1a) = (char)((uint)uStack_430 >> 0x10);
      *(char *)(puVar9 + 3) = (char)uStack_430;
      *(char *)((longlong)puVar9 + 0x1b) = (char)((uint)uStack_430 >> 0x18);
      *(char *)((longlong)puVar9 + 0x1d) = (char)((uint)uStack_42c >> 8);
      *(char *)((longlong)puVar9 + 0x1c) = (char)uStack_42c;
      *(char *)((longlong)puVar9 + 0x1e) = (char)((uint)uStack_42c >> 0x10);
      *(char *)((longlong)puVar9 + 0x1f) = (char)((uint)uStack_42c >> 0x18);
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
      bVar5 = *(byte *)(param_1 + 0x12);
    }
  }
LAB_144b4885a:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_618);
}



// FUNCTION 144b488a0 FUN_144b488a0 body=176 status=ok
// SIG undefined FUN_144b488a0(void)

void FUN_144b488a0(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    if (*(short *)(param_1 + 2) == 0) {
      *param_2 = 0;
      param_2[2] = 0;
      param_2[1] = 0;
      param_2[3] = 0;
      return;
    }
    piVar3 = *(int **)(param_1 + 8);
    iVar6 = *piVar3;
    iVar7 = piVar3[1];
    piVar1 = piVar3 + (longlong)*(short *)(param_1 + 2) * 2;
    iVar5 = iVar6;
    iVar4 = iVar7;
    while (piVar3 = piVar3 + 2, piVar3 < piVar1) {
      iVar2 = *piVar3;
      if (iVar2 < iVar5) {
        iVar5 = iVar2;
      }
      if (iVar6 < iVar2) {
        iVar6 = iVar2;
      }
      iVar2 = piVar3[1];
      if (iVar2 < iVar7) {
        iVar7 = iVar2;
      }
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
    }
    *param_2 = iVar5;
    param_2[2] = iVar6;
    param_2[1] = iVar7;
    param_2[3] = iVar4;
  }
  return;
}



// FUNCTION 144b48950 FUN_144b48950 body=319 status=ok
// SIG undefined FUN_144b48950(void)

int FUN_144b48950(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 != 0) {
    if (param_3 == 0) {
      return 6;
    }
    FUN_144b488a0(param_2,&local_18);
    if ((((-0x1000001 < local_18) && (-0x1000001 < local_14)) && (local_10 < 0x1000001)) &&
       (local_c < 0x1000001)) {
      lVar1 = *(longlong *)(param_1 + 0x128);
      iVar3 = 0x13;
      lVar2 = *(longlong *)(param_1 + 0x118);
      *(longlong *)(param_3 + 8) = param_2;
      while (((lVar1 != 0 &&
              (iVar3 = (**(code **)(lVar1 + 0x68))(*(undefined8 *)(lVar1 + 0x60),param_3),
              iVar3 != 0)) && ((char)iVar3 == '\x13'))) {
        lVar4 = *(longlong *)(param_1 + 0x118);
        if (lVar2 != 0) {
          lVar4 = *(longlong *)(lVar2 + 8);
        }
        while ((lVar1 = 0, lVar2 = 0, lVar4 != 0 &&
               (lVar1 = *(longlong *)(lVar4 + 0x10), lVar2 = lVar4,
               *(int *)(lVar1 + 0x20) != 0x6f75746c))) {
          lVar4 = *(longlong *)(lVar4 + 8);
        }
      }
      return iVar3;
    }
  }
  return 0x14;
}



// FUNCTION 144b48a90 FUN_144b48a90 body=14 status=ok
// SIG undefined FUN_144b48a90(void)

void FUN_144b48a90(longlong param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 144b48aa0 FUN_144b48aa0 body=141 status=ok
// SIG undefined FUN_144b48aa0(void)

void FUN_144b48aa0(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0x98) != (code *)0x0) {
      (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0x10));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x120) = FUN_144b62a40;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x120) = param_2;
      *(undefined8 *)(param_1 + 0x10) = param_3;
      *(code **)(param_1 + 0x98) = param_4;
    }
  }
  return;
}



// FUNCTION 144b48b30 FUN_144b48b30 body=141 status=ok
// SIG undefined FUN_144b48b30(void)

void FUN_144b48b30(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0xa8) != (code *)0x0) {
      (**(code **)(param_1 + 0xa8))(*(undefined8 *)(param_1 + 0x20));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x130) = FUN_144b62c50;
      *(undefined8 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0xa8) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x130) = param_2;
      *(undefined8 *)(param_1 + 0x20) = param_3;
      *(code **)(param_1 + 0xa8) = param_4;
    }
  }
  return;
}



// FUNCTION 144b48bc0 FUN_144b48bc0 body=141 status=ok
// SIG undefined FUN_144b48bc0(void)

void FUN_144b48bc0(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0xb0) != (code *)0x0) {
      (**(code **)(param_1 + 0xb0))(*(undefined8 *)(param_1 + 0x28));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x138) = FUN_144b62cd0;
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x138) = param_2;
      *(undefined8 *)(param_1 + 0x28) = param_3;
      *(code **)(param_1 + 0xb0) = param_4;
    }
  }
  return;
}



// FUNCTION 144b48c50 FUN_144b48c50 body=141 status=ok
// SIG undefined FUN_144b48c50(void)

void FUN_144b48c50(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0xc0) != (code *)0x0) {
      (**(code **)(param_1 + 0xc0))(*(undefined8 *)(param_1 + 0x38));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x148) = FUN_144b62e20;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x148) = param_2;
      *(undefined8 *)(param_1 + 0x38) = param_3;
      *(code **)(param_1 + 0xc0) = param_4;
    }
  }
  return;
}



// FUNCTION 144b48ce0 FUN_144b48ce0 body=141 status=ok
// SIG undefined FUN_144b48ce0(void)

void FUN_144b48ce0(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0xd0) != (code *)0x0) {
      (**(code **)(param_1 + 0xd0))(*(undefined8 *)(param_1 + 0x48));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x158) = FUN_144b62f90;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x158) = param_2;
      *(undefined8 *)(param_1 + 0x48) = param_3;
      *(code **)(param_1 + 0xd0) = param_4;
    }
  }
  return;
}



// FUNCTION 144b48d70 FUN_144b48d70 body=141 status=ok
// SIG undefined FUN_144b48d70(void)

void FUN_144b48d70(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 200) != (code *)0x0) {
      (**(code **)(param_1 + 200))(*(undefined8 *)(param_1 + 0x40));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x150) = FUN_144b62ee0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x150) = param_2;
      *(undefined8 *)(param_1 + 0x40) = param_3;
      *(code **)(param_1 + 200) = param_4;
    }
  }
  return;
}



// FUNCTION 144b48e00 FUN_144b48e00 body=141 status=ok
// SIG undefined FUN_144b48e00(void)

void FUN_144b48e00(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0xd8) != (code *)0x0) {
      (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0x50));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x160) = FUN_144b630c0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x160) = param_2;
      *(undefined8 *)(param_1 + 0x50) = param_3;
      *(code **)(param_1 + 0xd8) = param_4;
    }
  }
  return;
}



// FUNCTION 144b48e90 FUN_144b48e90 body=141 status=ok
// SIG undefined FUN_144b48e90(void)

void FUN_144b48e90(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0xe8) != (code *)0x0) {
      (**(code **)(param_1 + 0xe8))(*(undefined8 *)(param_1 + 0x60));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x170) = FUN_144b632c0;
      *(undefined8 *)(param_1 + 0x60) = 0;
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x170) = param_2;
      *(undefined8 *)(param_1 + 0x60) = param_3;
      *(code **)(param_1 + 0xe8) = param_4;
    }
  }
  return;
}



// FUNCTION 144b48f20 FUN_144b48f20 body=141 status=ok
// SIG undefined FUN_144b48f20(void)

void FUN_144b48f20(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0xf0) != (code *)0x0) {
      (**(code **)(param_1 + 0xf0))(*(undefined8 *)(param_1 + 0x68));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x178) = FUN_144b63380;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x178) = param_2;
      *(undefined8 *)(param_1 + 0x68) = param_3;
      *(code **)(param_1 + 0xf0) = param_4;
    }
  }
  return;
}



// FUNCTION 144b48fb0 FUN_144b48fb0 body=141 status=ok
// SIG undefined FUN_144b48fb0(void)

void FUN_144b48fb0(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0x100) != (code *)0x0) {
      (**(code **)(param_1 + 0x100))(*(undefined8 *)(param_1 + 0x78));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 0x188) = FUN_144b63460;
      *(undefined8 *)(param_1 + 0x78) = 0;
      *(undefined8 *)(param_1 + 0x100) = 0;
    }
    else {
      *(longlong *)(param_1 + 0x188) = param_2;
      *(undefined8 *)(param_1 + 0x78) = param_3;
      *(code **)(param_1 + 0x100) = param_4;
    }
  }
  return;
}



// FUNCTION 144b49040 FUN_144b49040 body=150 status=ok
// SIG undefined FUN_144b49040(void)

void FUN_144b49040(longlong param_1,longlong param_2,undefined8 param_3,code *param_4)

{
  if (*(int *)(param_1 + 4) == 0) {
    if (param_4 != (code *)0x0) {
      (*param_4)(param_3);
    }
  }
  else {
    if (*(code **)(param_1 + 0x108) != (code *)0x0) {
      (**(code **)(param_1 + 0x108))(*(undefined8 *)(param_1 + 0x80));
    }
    if (param_2 == 0) {
      *(code **)(param_1 + 400) = FUN_144b63590;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x108) = 0;
    }
    else {
      *(longlong *)(param_1 + 400) = param_2;
      *(undefined8 *)(param_1 + 0x80) = param_3;
      *(code **)(param_1 + 0x108) = param_4;
    }
  }
  return;
}



// FUNCTION 144b490e0 FUN_144b490e0 body=194 status=ok
// SIG undefined FUN_144b490e0(void)

undefined4 * FUN_144b490e0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_142864336(1,0x1a8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(code **)(puVar1 + 0x48) = FUN_144b62a40;
    *(code **)(puVar1 + 0x4a) = FUN_144b62b50;
    *(code **)(puVar1 + 0x4c) = FUN_144b62c50;
    *(code **)(puVar1 + 0x4e) = FUN_144b62cd0;
    *(undefined1 **)(puVar1 + 0x50) = &LAB_144b62de0;
    *(code **)(puVar1 + 0x52) = FUN_144b62e20;
    *(code **)(puVar1 + 0x54) = FUN_144b62ee0;
    *(code **)(puVar1 + 0x56) = FUN_144b62f90;
    *(code **)(puVar1 + 0x58) = FUN_144b630c0;
    *(code **)(puVar1 + 0x5a) = FUN_144b63200;
    *(code **)(puVar1 + 0x5c) = FUN_144b632c0;
    *(code **)(puVar1 + 0x5e) = FUN_144b63380;
    *(code **)(puVar1 + 0x60) = FUN_144b633f0;
    *(code **)(puVar1 + 0x62) = FUN_144b63460;
    *(code **)(puVar1 + 100) = FUN_144b63590;
    *(undefined1 **)(puVar1 + 0x66) = &LAB_144b63660;
    *(undefined1 **)(puVar1 + 0x68) = &LAB_144b636a0;
    return puVar1;
  }
  return &DAT_149970bd0;
}



// FUNCTION 144b491b0 FUN_144b491b0 body=65 status=ok
// SIG undefined FUN_144b491b0(void)

void FUN_144b491b0(longlong param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  
  local_24 = 9;
  local_28 = 0x5000020;
  local_18 = param_2;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_28);
  FUN_144c2d170(param_1,&local_28);
  return;
}



// FUNCTION 144b491f4 InitOnceBeginInitialize body=7 status=ok
// SIG BOOL InitOnceBeginInitialize(LPINIT_ONCE lpInitOnce, DWORD dwFlags, PBOOL fPending, LPVOID * lpContext)

BOOL __stdcall
InitOnceBeginInitialize(LPINIT_ONCE lpInitOnce,DWORD dwFlags,PBOOL fPending,LPVOID *lpContext)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144b491f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitOnceBeginInitialize(lpInitOnce,dwFlags,fPending,lpContext);
  return BVar1;
}



// FUNCTION 144b491fc InitOnceComplete body=7 status=ok
// SIG BOOL InitOnceComplete(LPINIT_ONCE lpInitOnce, DWORD dwFlags, LPVOID lpContext)

BOOL __stdcall InitOnceComplete(LPINIT_ONCE lpInitOnce,DWORD dwFlags,LPVOID lpContext)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144b491fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = InitOnceComplete(lpInitOnce,dwFlags,lpContext);
  return BVar1;
}



// FUNCTION 144b49210 FUN_144b49210 body=430 status=ok
// SIG undefined FUN_144b49210(void)

void FUN_144b49210(int *param_1)

{
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    LOCK();
    iVar1 = *param_1;
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 2);
      *param_1 = -0xdead;
      LOCK();
      UNLOCK();
      if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
        FUN_144b61790(lpCriticalSection + 1,lpCriticalSection);
        DeleteCriticalSection(lpCriticalSection);
        thunk_FUN_1400020a8(lpCriticalSection);
      }
      if (*(code **)(param_1 + 0x26) != (code *)0x0) {
        (**(code **)(param_1 + 0x26))(*(undefined8 *)(param_1 + 4));
      }
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 6));
      }
      if (*(code **)(param_1 + 0x2a) != (code *)0x0) {
        (**(code **)(param_1 + 0x2a))(*(undefined8 *)(param_1 + 8));
      }
      if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
        (**(code **)(param_1 + 0x2c))(*(undefined8 *)(param_1 + 10));
      }
      if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
        (**(code **)(param_1 + 0x2e))(*(undefined8 *)(param_1 + 0xc));
      }
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(*(undefined8 *)(param_1 + 0xe));
      }
      if (*(code **)(param_1 + 0x32) != (code *)0x0) {
        (**(code **)(param_1 + 0x32))(*(undefined8 *)(param_1 + 0x10));
      }
      if (*(code **)(param_1 + 0x34) != (code *)0x0) {
        (**(code **)(param_1 + 0x34))(*(undefined8 *)(param_1 + 0x12));
      }
      if (*(code **)(param_1 + 0x36) != (code *)0x0) {
        (**(code **)(param_1 + 0x36))(*(undefined8 *)(param_1 + 0x14));
      }
      if (*(code **)(param_1 + 0x38) != (code *)0x0) {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x16));
      }
      if (*(code **)(param_1 + 0x3a) != (code *)0x0) {
        (**(code **)(param_1 + 0x3a))(*(undefined8 *)(param_1 + 0x18));
      }
      if (*(code **)(param_1 + 0x3c) != (code *)0x0) {
        (**(code **)(param_1 + 0x3c))(*(undefined8 *)(param_1 + 0x1a));
      }
      if (*(code **)(param_1 + 0x3e) != (code *)0x0) {
        (**(code **)(param_1 + 0x3e))(*(undefined8 *)(param_1 + 0x1c));
      }
      if (*(code **)(param_1 + 0x40) != (code *)0x0) {
        (**(code **)(param_1 + 0x40))(*(undefined8 *)(param_1 + 0x1e));
      }
      if (*(code **)(param_1 + 0x42) != (code *)0x0) {
        (**(code **)(param_1 + 0x42))(*(undefined8 *)(param_1 + 0x20));
      }
      if (*(code **)(param_1 + 0x44) != (code *)0x0) {
        (**(code **)(param_1 + 0x44))(*(undefined8 *)(param_1 + 0x22));
      }
      if (*(code **)(param_1 + 0x46) != (code *)0x0) {
        (**(code **)(param_1 + 0x46))(*(undefined8 *)(param_1 + 0x24));
      }
      thunk_FUN_1400020a8(param_1);
    }
  }
  return;
}



// FUNCTION 144b493c0 FUN_144b493c0 body=513 status=ok
// SIG undefined FUN_144b493c0(void)

undefined4 FUN_144b493c0(longlong *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  char *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  char *pcVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  char **ppcVar16;
  char *local_38 [2];
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  *(int *)(param_1 + 0x2e) = (int)param_1[0x2e] + -1;
  if ((int)param_1[0x2e] < 1) {
    lVar15 = 2;
    lVar4 = *param_1;
    ppcVar16 = local_38;
    local_38[0] = "type42";
    local_38[1] = (char *)0x0;
    do {
      uVar11 = 0;
      if (*(int *)((longlong)param_1 + 0x14) != 0) {
        pcVar5 = *ppcVar16;
        do {
          plVar6 = (longlong *)param_1[uVar11 + 3];
          if (pcVar5 == (char *)0x0) {
LAB_144b49476:
            if ((*(byte *)*plVar6 & 1) != 0) {
              lVar12 = plVar6[4];
              while (lVar12 != 0) {
                FUN_144b54b00(*(undefined8 *)(lVar12 + 0x10));
                lVar12 = plVar6[4];
              }
            }
          }
          else {
            pcVar8 = *(char **)(*plVar6 + 8);
            lVar12 = (longlong)pcVar5 - (longlong)pcVar8;
            do {
              cVar1 = *pcVar8;
              cVar2 = pcVar8[lVar12];
              if (cVar1 != cVar2) break;
              pcVar8 = pcVar8 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) goto LAB_144b49476;
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
        } while (uVar10 < *(uint *)((longlong)param_1 + 0x14));
      }
      ppcVar16 = ppcVar16 + 1;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    while (iVar3 != 0) {
      uVar10 = *(uint *)((longlong)param_1 + 0x14) - 1;
      plVar6 = (longlong *)param_1[(ulonglong)uVar10 + 3];
      if (plVar6 != (longlong *)0x0) {
        plVar13 = param_1 + 3;
        plVar9 = plVar13 + *(uint *)((longlong)param_1 + 0x14);
        if (plVar13 < plVar9) {
LAB_144b494f6:
          if ((longlong *)*plVar13 != plVar6) goto code_r0x000144b494fb;
          plVar9 = plVar9 + -1;
          *(uint *)((longlong)param_1 + 0x14) = uVar10;
          if (plVar13 < plVar9) {
            plVar14 = plVar13;
            for (lVar15 = ((ulonglong)((longlong)plVar9 + (-1 - (longlong)plVar13)) >> 3) + 1;
                plVar13 = plVar13 + 1, lVar15 != 0; lVar15 = lVar15 + -1) {
              *plVar14 = *plVar13;
              plVar14 = plVar14 + 1;
            }
          }
          *plVar9 = 0;
          lVar15 = plVar6[1];
          lVar12 = plVar6[2];
          lVar7 = *plVar6;
          if ((lVar15 != 0) && (*(longlong **)(lVar15 + 0x130) == plVar6)) {
            *(undefined8 *)(lVar15 + 0x130) = 0;
          }
          if ((*(byte *)*plVar6 & 2) != 0) {
            FUN_144b5ded0(plVar6);
          }
          if ((*(byte *)*plVar6 & 1) != 0) {
            FUN_144b5c890(plVar6);
          }
          if (*(code **)(lVar7 + 0x28) != (code *)0x0) {
            (**(code **)(lVar7 + 0x28))(plVar6);
          }
          (**(code **)(lVar12 + 0x10))(lVar12,plVar6);
        }
      }
LAB_144b4958f:
      iVar3 = *(int *)((longlong)param_1 + 0x14);
    }
    (**(code **)(lVar4 + 0x10))(lVar4,param_1);
  }
  return 0;
code_r0x000144b494fb:
  plVar13 = plVar13 + 1;
  if (plVar9 <= plVar13) goto LAB_144b4958f;
  goto LAB_144b494f6;
}



// FUNCTION 144b495d0 NVSDK_NGX_D3D12_ReleaseFeature body=69 status=ok
// SIG undefined NVSDK_NGX_D3D12_ReleaseFeature(void)

undefined8 NVSDK_NGX_D3D12_ReleaseFeature(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4b495d0  399  NVSDK_NGX_D3D12_ReleaseFeature */
  UNRECOVERED_JUMPTABLE = DAT_14c791818;
  if (DAT_14c791818 == (code *)0x0) {
    return 0xbad00007;
  }
  _guard_check_icall(DAT_14c791818);
                    /* WARNING: Could not recover jumptable at 0x000144b49612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144b49620 NVSDK_NGX_D3D12_DestroyParameters body=91 status=ok
// SIG undefined NVSDK_NGX_D3D12_DestroyParameters(void)

undefined8 NVSDK_NGX_D3D12_DestroyParameters(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
                    /* 0x4b49620  392  NVSDK_NGX_D3D12_DestroyParameters */
  UNRECOVERED_JUMPTABLE = DAT_14c791838;
  if (DAT_14c7917d0 == 0) {
    return 0xbad00007;
  }
  if (DAT_14c791838 == (code *)0x0) {
    return 0xbad0000c;
  }
  _guard_check_icall(DAT_14c791838);
                    /* WARNING: Could not recover jumptable at 0x000144b49678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(param_1);
  return uVar1;
}



// FUNCTION 144b49680 DeleteCriticalSection body=7 status=ok
// SIG void DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

void __stdcall DeleteCriticalSection(LPCRITICAL_SECTION lpCriticalSection)

{
                    /* WARNING: Could not recover jumptable at 0x000144b49680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 144b49690 FUN_144b49690 body=10 status=ok
// SIG undefined FUN_144b49690(void)

void FUN_144b49690(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144b49693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle((HANDLE)*param_1);
  return;
}



// FUNCTION 144b496a0 NVSDK_NGX_Parameter_SetUI body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_SetUI(void)

void NVSDK_NGX_Parameter_SetUI(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4b496a0  415  NVSDK_NGX_Parameter_SetUI */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x20);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144b496ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144b49700 NVSDK_NGX_Parameter_SetI body=82 status=ok
// SIG undefined NVSDK_NGX_Parameter_SetI(void)

void NVSDK_NGX_Parameter_SetI(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
                    /* 0x4b49700  414  NVSDK_NGX_Parameter_SetI */
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
  _guard_check_icall(UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000144b4974f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3);
  return;
}



// FUNCTION 144b49760 GetSpeakerConfiguration body=131 status=ok
// SIG AkChannelConfig GetSpeakerConfiguration(__uint64 param_1)

/* struct AkChannelConfig __cdecl AK::SoundEngine::GetSpeakerConfiguration(unsigned __int64) */

__uint64 __cdecl AK::SoundEngine::GetSpeakerConfiguration(__uint64 param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  
                    /* 0x4b49760  127
                       ?GetSpeakerConfiguration@SoundEngine@AK@@YA?AUAkChannelConfig@@_K@Z */
  *(undefined1 *)param_1 = 0;
  *(uint *)param_1 = *(uint *)param_1 & 0xff;
  iVar2 = FUN_144d4cba0();
  if (iVar2 == 1) {
    FUN_1450719c0(local_res8);
    lVar3 = FUN_1450a19c0();
    if ((((lVar3 != 0) && (*(longlong *)(lVar3 + 0x4d0) != 0)) &&
        (uVar1 = *(uint *)(lVar3 + 0x60), *(uint *)param_1 = uVar1, (uVar1 & 0xf00) == 0x300)) &&
       (lVar3 != -0x4e0)) {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + 0x4e8);
    }
    FUN_1450719f0(local_res8);
  }
  return param_1;
}



// FUNCTION 144b497f0 GetDefaultSettings body=3 status=ok
// SIG void GetDefaultSettings(AkStreamMgrSettings * param_1)

/* void __cdecl AK::StreamMgr::GetDefaultSettings(struct AkStreamMgrSettings & __ptr64) */

void __cdecl AK::StreamMgr::GetDefaultSettings(AkStreamMgrSettings *param_1)

{
                    /* 0x4b497f0  80
                       ?GetDefaultSettings@StreamMgr@AK@@YAXAEAUAkStreamMgrSettings@@@Z */
  return;
}



// FUNCTION 144b49800 GetDefaultPlatformInitSettings body=5 status=ok
// SIG void GetDefaultPlatformInitSettings(AkPlatformInitSettings * param_1)

/* void __cdecl AK::SoundEngine::GetDefaultPlatformInitSettings(struct AkPlatformInitSettings &
   __ptr64) */

void __cdecl AK::SoundEngine::GetDefaultPlatformInitSettings(AkPlatformInitSettings *param_1)

{
  HWND pHVar1;
  
                    /* 0x4b49800  78
                       ?GetDefaultPlatformInitSettings@SoundEngine@AK@@YAXAEAUAkPlatformInitSettings@@@Z
                        */
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  pHVar1 = GetForegroundWindow();
  *(HWND *)param_1 = pHVar1;
  FUN_1450a4ae0(param_1);
  *(undefined4 *)(param_1 + 0x28) = 0x20000;
  *(undefined2 *)(param_1 + 0x38) = 4;
  *(undefined4 *)(param_1 + 0x3c) = 48000;
  param_1[0x40] = (AkPlatformInitSettings)0x1;
  *(undefined4 *)(param_1 + 0x44) = 0x80;
  return;
}



// FUNCTION 144b49810 FUN_144b49810 body=12 status=ok
// SIG undefined FUN_144b49810(void)

longlong FUN_144b49810(void)

{
  return DAT_14c783b00 + 0x48;
}



// FUNCTION 144b49820 FUN_144b49820 body=38 status=ok
// SIG undefined FUN_144b49820(void)

undefined8 * FUN_144b49820(undefined8 *param_1)

{
  param_1[2] = 1;
  param_1[1] = 0xffffffff;
  *param_1 = hkLog::Output::vftable;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 144b49850 FUN_144b49850 body=39 status=ok
// SIG undefined FUN_144b49850(void)

void FUN_144b49850(int param_1)

{
  int local_res8 [8];
  undefined1 local_18 [24];
  
  if (param_1 != 0) {
    local_res8[0] = param_1;
    FUN_144bdd4d0(&DAT_14c6da208,local_18,local_res8);
  }
  return;
}



// FUNCTION 144b49880 FUN_144b49880 body=143 status=ok
// SIG undefined FUN_144b49880(void)

void FUN_144b49880(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = -1;
  lVar2 = 0;
LAB_144b498a1:
  lVar4 = (longlong)iVar3;
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0xf0), lVar2 == 0)) goto LAB_144b498b5;
  goto LAB_144b498d7;
LAB_144b498b5:
  iVar3 = iVar3 + 1;
  if (*(int *)(DAT_14c783b00 + 0x40) <= iVar3) {
    return;
  }
  lVar2 = **(longlong **)(*(longlong *)(DAT_14c783b00 + 0x38) + 8 + lVar4 * 8);
  if (lVar2 != 0) {
LAB_144b498d7:
    if (param_1 != (char *)0x0) {
      pcVar1 = strstr(*(char **)(lVar2 + 0x58),param_1);
      if (pcVar1 == (char *)0x0) goto LAB_144b498a1;
    }
    FUN_144bdc1a0(lVar2,param_2);
  }
  goto LAB_144b498a1;
}



// FUNCTION 144b49910 FUN_144b49910 body=125 status=ok
// SIG undefined FUN_144b49910(void)

void FUN_144b49910(undefined8 param_1,undefined1 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = -1;
  lVar1 = 0;
LAB_144b49931:
  lVar3 = (longlong)iVar2;
  if ((lVar1 == 0) || (lVar1 = *(longlong *)(lVar1 + 0xf0), lVar1 == 0)) goto LAB_144b49945;
  goto LAB_144b49967;
LAB_144b49945:
  iVar2 = iVar2 + 1;
  if (*(int *)(DAT_14c783b00 + 0x40) <= iVar2) {
    return;
  }
  lVar1 = **(longlong **)(*(longlong *)(DAT_14c783b00 + 0x38) + 8 + lVar3 * 8);
  if (lVar1 != 0) {
LAB_144b49967:
    FUN_144bdc030(lVar1,param_1,param_2);
  }
  goto LAB_144b49931;
}



// FUNCTION 144b49990 GetDefaultInitSettings body=7 status=ok
// SIG void GetDefaultInitSettings(AkMusicSettings * param_1)

/* void __cdecl AK::MusicEngine::GetDefaultInitSettings(struct AkMusicSettings & __ptr64) */

void __cdecl AK::MusicEngine::GetDefaultInitSettings(AkMusicSettings *param_1)

{
                    /* 0x4b49990  76
                       ?GetDefaultInitSettings@MusicEngine@AK@@YAXAEAUAkMusicSettings@@@Z */
  *(undefined4 *)param_1 = 0x3f800000;
  return;
}



// FUNCTION 144b499a0 FUN_144b499a0 body=15 status=ok
// SIG undefined FUN_144b499a0(void)

undefined * FUN_144b499a0(undefined *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_FUN_14c6d9368;
  PTR_FUN_14c6d9368 = param_1;
  return puVar1;
}



// FUNCTION 144b499b0 FUN_144b499b0 body=52 status=ok
// SIG undefined FUN_144b499b0(void)

void FUN_144b499b0(undefined4 *param_1)

{
  *param_1 = DAT_14c6d94f0;
  param_1[1] = DAT_14c6d94f4;
  param_1[2] = DAT_14c6d94f8;
  param_1[3] = DAT_14c6d94fc;
  param_1[5] = DAT_14c6d9500;
  param_1[6] = 0x2e090e30;
  return;
}



// FUNCTION 144b499f0 FUN_144b499f0 body=54 status=ok
// SIG undefined FUN_144b499f0(void)

void FUN_144b499f0(undefined4 *param_1)

{
  if (param_1[6] == 0x2e090e30) {
    DAT_14c6d94f0 = *param_1;
    DAT_14c6d94f4 = param_1[1];
    DAT_14c6d94f8 = param_1[2];
    DAT_14c6d94fc = param_1[3];
    DAT_14c6d9500 = param_1[5];
  }
  return;
}



// FUNCTION 144b49a30 FUN_144b49a30 body=54 status=ok
// SIG undefined FUN_144b49a30(void)

void FUN_144b49a30(undefined *param_1,undefined *param_2)

{
  if ((param_1 != (undefined *)0x0) && (param_2 != (undefined *)0x0)) {
    PTR_FUN_14c6d9350 = param_1;
    PTR_FUN_14c6d9358 = param_2;
    return;
  }
  PTR_FUN_14c6d9350 = FUN_144b50c40;
  PTR_FUN_14c6d9358 = &DAT_144b50c70;
  return;
}



// FUNCTION 144b49a70 DestroyDevice body=14 status=ok
// SIG AKRESULT DestroyDevice(uint param_1)

/* enum AKRESULT __cdecl AK::StreamMgr::DestroyDevice(unsigned int) */

AKRESULT __cdecl AK::StreamMgr::DestroyDevice(uint param_1)

{
  AKRESULT AVar1;
  
                    /* 0x4b49a70  51  ?DestroyDevice@StreamMgr@AK@@YA?AW4AKRESULT@@I@Z */
  AVar1 = FUN_144d51000(IAkStreamMgr::m_pStreamMgr,param_1);
  return AVar1;
}



// FUNCTION 144b49a80 GetFileLocationResolver body=8 status=ok
// SIG IAkFileLocationResolver * GetFileLocationResolver(void)

/* class AK::StreamMgr::IAkFileLocationResolver * __ptr64 __cdecl
   AK::StreamMgr::GetFileLocationResolver(void) */

IAkFileLocationResolver * __cdecl AK::StreamMgr::GetFileLocationResolver(void)

{
                    /* 0x4b49a80  89
                       ?GetFileLocationResolver@StreamMgr@AK@@YAPEAVIAkFileLocationResolver@12@XZ */
  return DAT_14c791570;
}



// FUNCTION 144b49a90 SetFileLocationResolver body=8 status=ok
// SIG void SetFileLocationResolver(IAkFileLocationResolver * param_1)

/* void __cdecl AK::StreamMgr::SetFileLocationResolver(class AK::StreamMgr::IAkFileLocationResolver
   * __ptr64) */

void __cdecl AK::StreamMgr::SetFileLocationResolver(IAkFileLocationResolver *param_1)

{
                    /* 0x4b49a90  283
                       ?SetFileLocationResolver@StreamMgr@AK@@YAXPEAVIAkFileLocationResolver@12@@Z
                        */
  DAT_14c791570 = param_1;
  return;
}



// FUNCTION 144b49aa0 CreateDevice body=357 status=ok
// SIG uint CreateDevice(AkDeviceSettings * param_1, IAkLowLevelIOHook * param_2)

/* unsigned int __cdecl AK::StreamMgr::CreateDevice(struct AkDeviceSettings const & __ptr64,class
   AK::StreamMgr::IAkLowLevelIOHook * __ptr64) */

uint __cdecl AK::StreamMgr::CreateDevice(AkDeviceSettings *param_1,IAkLowLevelIOHook *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
                    /* 0x4b49aa0  49
                       ?CreateDevice@StreamMgr@AK@@YAIAEBUAkDeviceSettings@@PEAVIAkLowLevelIOHook@12@@Z
                        */
  uVar9 = (ulonglong)DAT_14c791588;
  uVar8 = 0;
  if (DAT_14c791588 != 0) {
    do {
      if (*(longlong *)(DAT_14c791580 + uVar8 * 8) == 0) {
        if ((int)uVar8 != -1) goto LAB_144b49b62;
        break;
      }
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < DAT_14c791588);
  }
  uVar6 = (ulonglong)DAT_14c79158c;
  uVar8 = uVar9;
  if (uVar6 <= uVar9) {
    cVar2 = FUN_144d51570(&DAT_14c791580);
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    uVar6 = (ulonglong)DAT_14c79158c;
    uVar8 = (ulonglong)DAT_14c791588;
  }
  if (uVar9 < uVar6) {
    DAT_14c791588 = (int)uVar8 + 1;
    puVar1 = (undefined8 *)(DAT_14c791580 + uVar8 * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = 0;
      uVar8 = (ulonglong)(DAT_14c791588 - 1);
      *(undefined8 *)(DAT_14c791580 + -8 + (ulonglong)DAT_14c791588 * 8) = 0;
LAB_144b49b62:
      if ((*(uint *)(param_1 + 0x18) & 1) == 0) {
        if ((*(uint *)(param_1 + 0x18) & 2) == 0) {
          return 0xffffffff;
        }
        pvVar4 = MemoryMgr::Malloc(7,0x468);
        if (pvVar4 == (void *)0x0) {
          return 0xffffffff;
        }
        plVar5 = (longlong *)FUN_1450e3920(pvVar4,param_2);
      }
      else {
        pvVar4 = MemoryMgr::Malloc(7,0x460);
        if (pvVar4 == (void *)0x0) {
          return 0xffffffff;
        }
        plVar5 = (longlong *)FUN_1450e2670(pvVar4,param_2);
      }
      if (plVar5 != (longlong *)0x0) {
        iVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,param_1,uVar8);
        if (iVar3 == 1) {
          *(longlong **)(DAT_14c791580 + uVar8 * 8) = plVar5;
          return (uint)uVar8;
        }
        (**(code **)(*plVar5 + 0x28))(plVar5);
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 144b49c10 FUN_144b49c10 body=439 status=ok
// SIG undefined FUN_144b49c10(void)

void FUN_144b49c10(void)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if ((DAT_14c792948 == 0) && (DAT_14c792940 == 0)) {
    return;
  }
  while (DAT_14c792958 != 0) {
    (*(code *)PTR_thunk_FUN_1451562f0_14c72fbb0)(&DAT_14c7922c0);
    for (lVar1 = DAT_14c792958; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0xd0)) {
      *(undefined4 *)(lVar1 + 0xe0) = 1;
    }
    (*(code *)PTR_thunk_FUN_1451563e0_14c72fbb8)(&DAT_14c7922c0);
    if (DAT_14c79294c != 0) {
      FUN_144d6ee70(0xffffffff,0);
    }
  }
  puVar5 = &DAT_14c792290;
  iVar2 = 0;
  DAT_14c792940 = 0;
  DAT_14c792948 = 0;
  DAT_14c792958 = 0;
  if ((PTR_thunk_FUN_145157710_14c72fc48 != (undefined *)0x0) && (0 < DAT_14c7922b0)) {
    puVar3 = &DAT_14c792290;
    iVar4 = iVar2;
    do {
      (*(code *)PTR_thunk_FUN_145157710_14c72fc48)(*puVar3);
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_14c7922b0);
  }
  if ((PTR_thunk_FUN_1451577c0_14c72fc50 != (undefined *)0x0) && (0 < DAT_14c7922b0)) {
    do {
      (*(code *)PTR_thunk_FUN_1451577c0_14c72fc50)(*puVar5);
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar2 < DAT_14c7922b0);
  }
  DAT_14c7922b0 = 0;
  (*(code *)(&PTR_FUN_14c707888)[(ulonglong)DAT_14c707864 * 10])();
  DAT_14c707864 = 0x20;
  DAT_14c792968 = 0;
  if (DAT_14c7929a0 != 0) {
    if (PTR_FUN_14c72fb78 != (undefined *)0x0) {
      (*(code *)PTR_FUN_14c72fb80)(PTR_FUN_14c72fc08,0xffffffffffffffff,0);
    }
    DAT_14c7929a0 = 0;
  }
  if (PTR_FUN_14c72fbe8 != (undefined *)0x0) {
    (*(code *)PTR_FUN_14c72fbe8)();
  }
  if (PTR_thunk_FUN_145156470_14c72fba8 != (undefined *)0x0) {
    (*(code *)PTR_thunk_FUN_145156470_14c72fba8)(&DAT_14c7922c0);
  }
  FUN_145140e20();
  return;
}



// FUNCTION 144b49dd0 FUN_144b49dd0 body=24 status=ok
// SIG undefined FUN_144b49dd0(void)

void FUN_144b49dd0(ulonglong *param_1)

{
  if ((*param_1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000144b49de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_14c787678)(0,*param_1 - 1,0);
    return;
  }
  return;
}



// FUNCTION 144b49df0 FUN_144b49df0 body=281 status=ok
// SIG undefined FUN_144b49df0(void)

undefined4 *
FUN_144b49df0(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = param_6;
  uVar1 = param_5;
  local_30 = *param_3;
  local_20 = param_5;
  local_34 = 0x23;
  local_38 = 0x5000020;
  local_1c = param_6;
  local_28 = param_4;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_38);
  param_5 = *param_3;
  FUN_144fe7590(*(undefined8 *)(param_1 + 0x150),param_2,&param_5,param_4,uVar1,uVar2);
  local_58 = *param_2;
  local_54 = param_2[1];
  local_50 = CONCAT44(local_50._4_4_,param_2[2]);
  FUN_144ca5090(*(undefined8 *)(param_1 + 0x140),&local_58);
  local_58 = *param_3;
  local_48 = uVar1;
  local_44 = uVar2;
  local_50 = param_4;
  FUN_144c4da70(param_1 + 0xc0,param_1,&local_58);
  return param_2;
}



// FUNCTION 144b49f10 FUN_144b49f10 body=308 status=ok
// SIG undefined FUN_144b49f10(void)

void FUN_144b49f10(longlong param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  int local_res8 [2];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  
  local_38 = *param_2;
  local_34 = param_2[1];
  local_30 = param_2[2];
  FUN_144fe7be0(*(undefined8 *)(param_1 + 0x150),&local_38);
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_24 = 0x26;
  local_28 = 0x5000020;
  local_14 = param_3;
  FUN_144c2c1d0(param_1 + 0x28,param_1,&local_28);
  plVar3 = (longlong *)(param_1 + 0x158);
  if (param_3 < 1) {
    lVar1 = FUN_144c4dc50(plVar3,param_2);
    if (lVar1 != 0) {
      FUN_144c4d940(plVar3,lVar1);
      return;
    }
  }
  else {
    FUN_144c4db20(plVar3,local_res8,param_2);
    if (local_res8[0] == *(int *)(param_1 + 0x160)) {
      iVar4 = *(int *)(param_1 + 0x160) + 1;
      if ((int)(*(uint *)(param_1 + 0x164) & 0x7fffffff) < iVar4) {
        FUN_144c4dce0(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar4);
      }
      puVar2 = (undefined4 *)((longlong)*(int *)(param_1 + 0x160) * 0x10 + *plVar3);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *param_2;
        puVar2[1] = param_2[1];
        puVar2[2] = param_2[2];
        puVar2[3] = param_3;
      }
      *(int *)(param_1 + 0x160) = iVar4;
    }
    else {
      *(int *)(*plVar3 + 0xc + (longlong)local_res8[0] * 0x10) = param_3;
    }
  }
  return;
}



// FUNCTION 144b4a050 FUN_144b4a050 body=164 status=ok
// SIG undefined FUN_144b4a050(void)

void FUN_144b4a050(undefined8 *param_1)

{
  *param_1 = hkaiVolumePathfindingUtil::FindPathInput::vftable;
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 2);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x3c) & 0x7fffffff) << 4);
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144b4a100 FUN_144b4a100 body=327 status=ok
// SIG undefined FUN_144b4a100(void)

undefined2 * FUN_144b4a100(undefined2 *param_1)

{
  *param_1 = 0x101;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 100;
  *(undefined4 *)(param_1 + 0x46) = 0x400;
  *(undefined4 *)(param_1 + 0x48) = 0x3f000000;
  FUN_144b40b30(param_1 + 0x50);
  FUN_144c31710(param_1 + 0xe0,0);
  *(undefined4 *)(param_1 + 2) = 0x3fc00000;
  *(undefined4 *)(param_1 + 4) = 0x3fc00000;
  *(undefined4 *)(param_1 + 6) = 0x3fc00000;
  *(undefined4 *)(param_1 + 8) = 0x3fc00000;
  *(undefined4 *)(param_1 + 10) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0xc) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0xe) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x10) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x12) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x14) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x16) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x18) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x1a) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x1c) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x1e) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x20) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x22) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x24) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x26) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x28) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x2a) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x2e) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x30) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x32) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x34) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x36) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x38) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x3a) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x3c) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x3e) = 0x3fc00000;
  *(undefined4 *)(param_1 + 0x40) = 0x3fc00000;
  *(undefined8 *)(param_1 + 0x138) = 0;
  return param_1;
}



// FUNCTION 144b4a250 FUN_144b4a250 body=61 status=ok
// SIG undefined FUN_144b4a250(void)

LPCRITICAL_SECTION FUN_144b4a250(LPCRITICAL_SECTION param_1,DWORD param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    if (DAT_14c787698 == 0) {
      iVar1 = FUN_144bfce90(0);
    }
    else {
      iVar1 = *(int *)(DAT_14c787698 + 0x18);
    }
    param_2 = iVar1 * 1000;
  }
  InitializeCriticalSectionAndSpinCount(param_1,param_2);
  return param_1;
}



// FUNCTION 144b4a290 FUN_144b4a290 body=55 status=ok
// SIG undefined FUN_144b4a290(void)

undefined8 * FUN_144b4a290(undefined8 *param_1,LONG param_2,LONG param_3,undefined4 param_4)

{
  HANDLE pvVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  pvVar1 = CreateSemaphoreW((LPSECURITY_ATTRIBUTES)0x0,param_2,param_3,(LPCWSTR)0x0);
  *param_1 = pvVar1;
  *(undefined4 *)(param_1 + 1) = param_4;
  return param_1;
}



// FUNCTION 144b4a2d0 FUN_144b4a2d0 body=2078 status=ok
// SIG undefined FUN_144b4a2d0(void)

undefined8 * FUN_144b4a2d0(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  void *_Dst;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined8 *local_38;
  undefined8 *puStack_30;
  
  puVar6 = (undefined8 *)0x0;
  param_1[2] = 1;
  param_1[3] = 0;
  *param_1 = hkaiWorld::vftable;
  param_1[1] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[0x2d] = uVar1;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x80000000;
  *(undefined1 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  FUN_144b40b30(param_1 + 0x4a);
  FUN_144c31710(param_1 + 0x6e,0);
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(undefined1 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0x3b449ba6;
  FUN_144fae550(param_1 + 0x98);
  param_1[0x99] = 0;
  param_1[0x9b] = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  param_1[0x9d] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50c) = 0x80000000;
  FUN_144be3700(param_1 + 0xa2,param_2 + 0x270);
  puVar4 = param_1 + 0x31;
  *(undefined1 *)(param_1 + 0x2f) = param_2[1];
  FUN_144b3d470(puVar4,param_2 + 4,0x80);
  *(undefined4 *)((longlong)param_1 + 0x23c) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)((longlong)param_1 + 0x244) = *(undefined4 *)(param_2 + 0x8c);
  FUN_144c2f0b0(param_1 + 0x4a,param_2 + 0xa0);
  FUN_144c319d0(param_1 + 0x6e,param_2 + 0x1c0);
  local_res8 = 0x330;
  _Dst = (void *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(_Dst);
  }
  puVar2 = puVar6;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,0x330);
    puVar2 = (undefined8 *)FUN_144c2bf00(_Dst);
  }
  lVar3 = param_1[0x2a];
  param_1[0x2a] = puVar2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0xf8;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkaiStreamingCollection");
  }
  puVar2 = puVar6;
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_144ca1cf0(lVar3,param_1[0x2a]);
  }
  lVar3 = param_1[0x28];
  param_1[0x28] = puVar2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0x18;
  puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar2,"hkaiDefaultDynamicCuttingController");
  }
  puVar7 = puVar6;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0xffffffff;
    *puVar2 = hkaiDefaultDynamicCuttingController::vftable;
    puVar2[2] = 1;
    puVar7 = puVar2;
  }
  lVar3 = param_1[0x45];
  param_1[0x45] = puVar7;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0x168;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkaiNavMeshCutter");
  }
  puVar2 = puVar6;
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_144fb6e80(lVar3);
  }
  lVar3 = param_1[0x29];
  param_1[0x29] = puVar2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  FUN_144fb70f0(param_1[0x29],param_1[0x28]);
  local_38 = puVar4;
  puStack_30 = param_1 + 0x41;
  FUN_144fb9ae0(param_1[0x29],&local_38);
  local_res8 = 0x160;
  *(undefined1 *)(param_1[0x29] + 0x108) = *param_2;
  *(undefined1 *)(param_1[0x29] + 0x110) = *(undefined1 *)(param_1 + 0x2f);
  *(undefined4 *)(param_1[0x29] + 0x114) = *(undefined4 *)(param_2 + 0x90);
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkaiOverlapManager");
  }
  puVar2 = puVar6;
  if (lVar3 != 0) {
    puVar2 = (undefined8 *)FUN_144faf5c0(lVar3);
  }
  lVar3 = param_1[0x30];
  param_1[0x30] = puVar2;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  local_38 = puVar4;
  puStack_30 = param_1 + 0x41;
  FUN_144fb0600(param_1[0x30],&local_38);
  local_res8 = 0x30;
  *(undefined4 *)(param_1[0x30] + 0x150) = *(undefined4 *)(param_2 + 0x84);
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkaiPathRequestManager");
  }
  puVar4 = puVar6;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_144faa930(lVar3);
  }
  lVar3 = param_1[0x46];
  param_1[0x46] = puVar4;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  puVar5 = (undefined1 *)FUN_144faaaa0(param_1[0x46],&local_res8);
  *(undefined1 *)(param_1 + 0x47) = *puVar5;
  local_res8 = 0x30;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkaiNavigatorManager");
  }
  puVar4 = puVar6;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_144fbc020(lVar3,param_1);
  }
  lVar3 = param_1[0x87];
  param_1[0x87] = puVar4;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0x38;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkaiVolumeNavigatorManager");
  }
  puVar4 = puVar6;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_144fad070(lVar3,param_1);
  }
  lVar3 = param_1[0x8f];
  param_1[0x8f] = puVar4;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0x68;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkDynamicBlockStreamAllocator");
  }
  puVar4 = puVar6;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)FUN_144fbd430(lVar3,0,0);
  }
  lVar3 = param_1[0x99];
  param_1[0x99] = puVar4;
  if (lVar3 != 0) {
    FUN_144b3f230();
  }
  local_res8 = 0x60;
  lVar3 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar3,"hkThreadLocalBlockStreamAllocator");
  }
  if (lVar3 != 0) {
    puVar6 = (undefined8 *)FUN_144fad4f0(lVar3,param_1[0x99]);
  }
  param_1[0x9a] = puVar6;
  local_res8 = 0x100;
  puVar4 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar4,"hkTypedBlockStream");
  }
  if (puVar4 == (undefined8 *)0x0) {
    param_1[0x85] = 0;
  }
  else {
    uVar1 = param_1[0x9a];
    puVar4[2] = puVar4 + 6;
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 3) = 0;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = 0x80000018;
    FUN_144fad160(puVar4,uVar1,0);
    param_1[0x85] = puVar4;
  }
  return param_1;
}



// FUNCTION 144b4aaf0 FUN_144b4aaf0 body=190 status=ok
// SIG undefined FUN_144b4aaf0(void)

undefined4 * FUN_144b4aaf0(undefined4 *param_1)

{
  bool bVar1;
  undefined1 local_res8 [8];
  undefined **local_res10 [3];
  
  bVar1 = DAT_14c787609 != '\0';
  *param_1 = 0;
  if (bVar1) {
    DAT_14c78760b = 1;
    local_res10[0] = &PTR_s_CommonInitNode_14c6e4758;
    FUN_144bfadc0(local_res8,local_res10);
    if ((DAT_14c798f98 != '\0') && (PTR_FUN_14c727b10 != (undefined *)0x0)) {
      (*(code *)PTR_FUN_14c727b10)();
      DAT_14c798f98 = '\0';
    }
    if (DAT_14c787610 != (longlong *)0x0) {
      (**(code **)(*DAT_14c787610 + 8))(DAT_14c787610,0);
      DAT_14c787610 = (longlong *)0x0;
    }
    DAT_14c78760b = 0;
    FUN_144be56f0();
    if (DAT_14c787658 != (code *)0x0) {
      (*DAT_14c787658)(DAT_14c787660,DAT_14c787668);
      DAT_14c787658 = (code *)0x0;
    }
    DAT_14c787609 = '\0';
  }
  return param_1;
}



// FUNCTION 144b4abb0 FUN_144b4abb0 body=11 status=ok
// SIG undefined FUN_144b4abb0(void)

void FUN_144b4abb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 144b4abc0 FUN_144b4abc0 body=193 status=ok
// SIG undefined FUN_144b4abc0(void)

undefined1 *
FUN_144b4abc0(ulonglong *param_1,undefined1 *param_2,longlong param_3,undefined8 param_4,
             undefined4 param_5)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  
  uVar2 = *param_1;
  puVar1 = param_1;
  while( true ) {
    plVar3 = (longlong *)(uVar2 & 0xfffffffffffffffc);
    if (plVar3 == (longlong *)0x0) {
      *param_2 = 0;
      return param_2;
    }
    if ((plVar3[2] == param_3) &&
       (iVar4 = (**(code **)(*plVar3 + 8))(plVar3,param_4,param_5), iVar4 != 0)) break;
    puVar1 = (ulonglong *)(plVar3 + 1);
    uVar2 = plVar3[1];
  }
  if ((*param_1 & 3) != 0) {
    plVar3[1] = plVar3[1] & 0xfffffffffffffffd;
    plVar3[1] = plVar3[1] | 1;
    *param_2 = 1;
    return param_2;
  }
  *puVar1 = *puVar1 ^ (*puVar1 ^ plVar3[1]) & 0xfffffffffffffffc;
  (**(code **)*plVar3)(plVar3,1);
  *param_2 = 1;
  return param_2;
}



// FUNCTION 144b4ac90 FUN_144b4ac90 body=115 status=ok
// SIG undefined FUN_144b4ac90(void)

void FUN_144b4ac90(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = -1;
  lVar2 = 0;
LAB_144b4acb0:
  lVar1 = (longlong)iVar3;
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0xf0), lVar2 == 0)) goto LAB_144b4acc4;
  goto LAB_144b4ace6;
LAB_144b4acc4:
  iVar3 = iVar3 + 1;
  if (*(int *)(DAT_14c783b00 + 0x40) <= iVar3) {
    return;
  }
  lVar2 = **(longlong **)(*(longlong *)(DAT_14c783b00 + 0x38) + 8 + lVar1 * 8);
  if (lVar2 != 0) {
LAB_144b4ace6:
    FUN_144bdc1a0(lVar2,param_1);
  }
  goto LAB_144b4acb0;
}



// FUNCTION 144b4ad10 FUN_144b4ad10 body=30 status=ok
// SIG undefined FUN_144b4ad10(void)

void FUN_144b4ad10(void)

{
  if (DAT_14c7929a8 != '\0') {
    FUN_145168030();
    DAT_14c7929a8 = '\0';
  }
  return;
}



// FUNCTION 144b4ad30 GetDefaultDeviceSettings body=74 status=ok
// SIG void GetDefaultDeviceSettings(AkDeviceSettings * param_1)

/* void __cdecl AK::StreamMgr::GetDefaultDeviceSettings(struct AkDeviceSettings & __ptr64) */

void __cdecl AK::StreamMgr::GetDefaultDeviceSettings(AkDeviceSettings *param_1)

{
                    /* 0x4b4ad30  75
                       ?GetDefaultDeviceSettings@StreamMgr@AK@@YAXAEAUAkDeviceSettings@@@Z */
  *(undefined4 *)(param_1 + 8) = 0x200000;
  *(undefined8 *)param_1 = 0;
  param_1[0x30] = (AkDeviceSettings)0x0;
  *(undefined8 *)(param_1 + 0xc) = 0x1000;
  *(undefined4 *)(param_1 + 0x14) = 0x4000;
  *(undefined4 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x24) = 0x20000;
  *(undefined8 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0x43be0000;
  *(undefined4 *)(param_1 + 0x2c) = 8;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  return;
}



// FUNCTION 144b4ad80 FUN_144b4ad80 body=136 status=ok
// SIG undefined FUN_144b4ad80(void)

void FUN_144b4ad80(undefined8 *param_1)

{
  *param_1 = hkDefaultError::vftable;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 10));
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x34)) && (param_1[5] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[5],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x34) & 0x7fffffff) << 2);
  }
  param_1[5] = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  FUN_144f5ff60(param_1 + 3,&PTR_vftable_14c6e47a0);
  FUN_144f5fe20(param_1 + 3);
  FUN_144bde530(param_1);
  return;
}


