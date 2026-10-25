// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142a89a7e FUN_142a89a7e body=243 status=ok
// SIG undefined FUN_142a89a7e(void)

void FUN_142a89a7e(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined4 uVar11;
  
  lVar9 = *(longlong *)(param_1 + 0x30);
  uVar1 = *(undefined4 *)(lVar9 + 0x30);
  uVar2 = *(undefined4 *)(lVar9 + 0x34);
  uVar4 = *(uint *)(lVar9 + 0x2c);
  iVar5 = (int)param_2[1];
  lVar6 = *param_2;
  if (*(char *)(lVar9 + 0x38) == '\x01') {
    if (iVar5 != 0) {
      lVar9 = 0;
      uVar10 = 0;
      do {
        uVar7 = (ulonglong)*(uint *)(lVar6 + lVar9);
        uVar3 = *(ushort *)(param_2[3] + uVar7 * 8);
        uVar8 = (uint)*(ushort *)(param_2[3] + 2 + uVar7 * 8);
        if (((*(uint *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar3 >> 5) * 4) >>
              (uVar3 & 0x1f) & 1) != 0) || (*(uint *)(param_2 + 4) == uVar8)) {
          uVar11 = uVar2;
          if (*(uint *)(param_2 + 4) != uVar8) {
            if (uVar4 <= uVar10) goto LAB_142a89b04;
            uVar10 = uVar10 + 1;
            uVar11 = uVar1;
          }
          *(undefined4 *)(param_2[2] + uVar7 * 4) = uVar11;
        }
LAB_142a89b04:
        lVar9 = lVar9 + 4;
      } while ((longlong)iVar5 * 4 != lVar9);
    }
  }
  else if (iVar5 != 0) {
    lVar9 = 0;
    uVar10 = 0;
    do {
      uVar7 = (ulonglong)*(uint *)(lVar6 + lVar9);
      uVar3 = *(ushort *)(param_2[3] + uVar7 * 8);
      if ((*(uint *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f)
          & 1) != 0) {
        uVar11 = uVar2;
        if (*(uint *)(param_2 + 4) != (uint)*(ushort *)(param_2[3] + 2 + uVar7 * 8)) {
          uVar11 = uVar1;
        }
        *(undefined4 *)(param_2[2] + uVar7 * 4) = uVar11;
        uVar10 = uVar10 + 1;
        if (uVar10 == uVar4) {
          return;
        }
      }
      lVar9 = lVar9 + 4;
    } while ((longlong)iVar5 * 4 != lVar9);
  }
  return;
}



// FUNCTION 142a89b72 FUN_142a89b72 body=3177 status=ok
// SIG undefined FUN_142a89b72(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142a89b72(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 **ppuVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  uint uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined8 *puVar34;
  longlong lVar35;
  undefined8 *puVar36;
  char cVar37;
  bool bVar38;
  float fVar39;
  undefined4 uVar40;
  undefined *apuStack_3e0 [4];
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  longlong *local_3a0;
  undefined1 *local_398;
  int local_38c;
  undefined1 *local_388;
  undefined1 *local_380;
  undefined4 local_378 [16];
  undefined1 local_338 [688];
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)local_338;
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x88);
  uVar20 = *(uint *)(param_2 + 4);
  *(uint *)(param_1 + 0x84) = uVar20;
  plVar2 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)(int)uVar20 * 0x10);
  uVar6 = *(uint *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)uVar20 * 0x10);
  uVar7 = *(uint *)(param_1 + 0x58);
  if (uVar6 < uVar7) {
    if ((int)uVar6 < (int)uVar7) {
      *(uint *)(plVar2 + 1) = uVar7;
      if (*(int *)((longlong)plVar2 + 0xc) - uVar6 < uVar7 - uVar6) {
        apuStack_3e0[0] = (undefined *)0x142a89c12;
        FUN_1447808da(plVar2);
      }
      apuStack_3e0[0] = (undefined *)0x142a89c32;
      memset((void *)((longlong)(int)uVar6 * 4 + *plVar2),0,(longlong)(int)(uVar7 - uVar6) << 2);
    }
    else {
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        apuStack_3e0[0] = &UNK_142a8a7e0;
        FUN_1456afac4(uVar7);
      }
      if ((int)uVar7 < (int)uVar6) {
        *(uint *)(plVar2 + 1) = uVar7;
        apuStack_3e0[0] = (undefined *)0x142a8a7c5;
        FUN_144780a3c(plVar2);
      }
    }
  }
  puVar22 = &local_3b8;
  uVar6 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar6 != 0) {
    lVar23 = *plVar2;
    local_3b8 = (longlong)(int)uVar6;
    lVar21 = (ulonglong)uVar6 * 0x10;
    uStack_3c0 = 0x142a89c63;
    lVar10 = -(lVar21 + 0x10);
    puVar22 = (undefined8 *)((longlong)&local_3b8 + lVar10);
    lVar8 = *param_2;
    lVar9 = param_2[3];
    iVar30 = *(int *)(param_1 + 0x88);
    lVar15 = local_3b8 * 4;
    lVar27 = 0;
    local_3b0 = param_1;
    local_3a8 = lVar23;
    local_3a0 = param_2;
    do {
      uVar7 = *(uint *)(lVar8 + lVar27);
      uVar5 = *(ushort *)(lVar9 + (ulonglong)uVar7 * 8);
      *(uint *)((longlong)&local_3b8 + lVar27 * 4 + lVar10) = uVar7;
      *(uint *)((longlong)&local_3b8 + lVar27 * 4 + lVar10 + 4) = (uint)uVar5;
      lVar35 = local_3a8;
      *(int *)((longlong)&local_3b0 + lVar27 * 4 + lVar10) =
           iVar30 - *(int *)(lVar23 + (ulonglong)uVar5 * 4);
      *(bool *)((longlong)&local_3b0 + lVar27 * 4 + lVar10 + 4) =
           uVar20 == *(ushort *)(lVar9 + 2 + (ulonglong)uVar7 * 8);
      lVar27 = lVar27 + 4;
    } while (lVar15 - lVar27 != 0);
    lVar15 = *(longlong *)(local_3b0 + 0x30);
    uVar3 = *(undefined4 *)(lVar15 + 0x30);
    uVar4 = *(undefined4 *)(lVar15 + 0x34);
    local_38c = *(int *)(lVar15 + 0x2c);
    if (*(char *)(lVar15 + 0x38) == '\0') {
      local_398 = (undefined1 *)((longlong)&local_3b8 + lVar10);
      if (1 < (int)uVar6) {
        local_398 = (undefined1 *)((longlong)&local_3b8 + lVar10);
        *(undefined8 *)((longlong)apuStack_3e0 + lVar10) = 0x142a8a263;
        memset(local_378,0,0x2f0);
        local_388 = local_398;
        local_380 = local_398 + lVar21 + -0x10;
        *(undefined8 *)((longlong)apuStack_3e0 + lVar10) = 0x142a8a289;
        fVar39 = logf((float)(int)uVar6);
        puVar22 = (undefined8 *)((longlong)&local_3b8 + lVar10);
        local_378[0] = (int)(longlong)(fVar39 + fVar39);
        ppuVar17 = &local_388;
        do {
          puVar19 = (undefined8 *)*ppuVar17;
          puVar28 = (undefined8 *)ppuVar17[1];
          iVar30 = *(int *)(ppuVar17 + 2);
          iVar33 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar19) >> 4);
          uVar20 = iVar33 + 1;
          puVar18 = puVar19;
          puVar16 = puVar19;
          puVar14 = puVar28;
          if (iVar30 != 0) {
LAB_142a8a2c4:
            if (8 < (int)uVar20) {
              uVar11 = puVar16[(ulonglong)(uVar20 >> 1) * 2];
              uVar12 = (puVar16 + (ulonglong)(uVar20 >> 1) * 2)[1];
              uVar13 = puVar16[1];
              puVar16[(ulonglong)(uVar20 >> 1) * 2] = *puVar16;
              (puVar16 + (ulonglong)(uVar20 >> 1) * 2)[1] = uVar13;
              *puVar16 = uVar11;
              puVar16[1] = uVar12;
              puVar34 = puVar28 + 2;
              puVar19 = puVar16;
              do {
                puVar24 = puVar19 + 2;
                puVar29 = puVar19 + 2;
                do {
                  puVar25 = puVar29;
                  puVar19 = puVar24;
                  if (puVar28 < puVar19) break;
                  bVar38 = *(uint *)(puVar19 + 1) < *(uint *)(puVar16 + 1);
                  if (*(uint *)(puVar16 + 1) == *(uint *)(puVar19 + 1)) {
                    bVar38 = *(uint *)((longlong)puVar16 + 4) < *(uint *)((longlong)puVar19 + 4);
                  }
                  puVar24 = puVar19 + 2;
                  puVar29 = puVar25 + 2;
                } while (!bVar38);
                puVar24 = puVar34 + -4;
                do {
                  puVar29 = puVar34;
                  puVar36 = puVar24;
                  puVar34 = puVar29 + -2;
                  if (puVar34 <= puVar16) break;
                  bVar38 = *(uint *)(puVar16 + 1) < *(uint *)(puVar29 + -1);
                  if (*(uint *)(puVar29 + -1) == *(uint *)(puVar16 + 1)) {
                    bVar38 = *(uint *)((longlong)puVar29 + -0xc) < *(uint *)((longlong)puVar16 + 4);
                  }
                  puVar24 = puVar36 + -2;
                } while (!bVar38);
                if (puVar34 < puVar19) goto LAB_142a8a3ab;
                uVar11 = *puVar19;
                uVar12 = puVar19[1];
                uVar13 = puVar29[-1];
                *puVar19 = *puVar34;
                puVar19[1] = uVar13;
                *puVar34 = uVar11;
                puVar29[-1] = uVar12;
              } while( true );
            }
            for (; puVar19 = puVar16, puVar18 = puVar16, puVar16 < puVar28; puVar28 = puVar28 + -2)
            {
              while (puVar14 = puVar19, puVar19 = puVar18 + 2, puVar19 <= puVar28) {
                bVar38 = *(uint *)(puVar19 + 1) < *(uint *)(puVar14 + 1);
                if (*(uint *)(puVar14 + 1) == *(uint *)(puVar19 + 1)) {
                  bVar38 = *(uint *)((longlong)puVar14 + 4) < *(uint *)((longlong)puVar18 + 0x14);
                }
                puVar18 = puVar19;
                if (!bVar38) {
                  puVar19 = puVar14;
                }
              }
              local_88 = *puVar14;
              uStack_80 = puVar14[1];
              uVar11 = puVar28[1];
              *puVar14 = *puVar28;
              puVar14[1] = uVar11;
              *puVar28 = local_88;
              puVar28[1] = uStack_80;
            }
            goto LAB_142a8a6f1;
          }
LAB_142a8a453:
          if (uVar20 != 0) {
            iVar30 = (iVar33 - (iVar33 + -1 >> 0x1f)) + -1 >> 1;
            iVar33 = iVar30;
joined_r0x000142a8a474:
            do {
              iVar32 = iVar30 * 2 + 1;
              if (iVar32 < (int)uVar20) {
                iVar31 = iVar30 * 2 + 2;
                if (iVar31 < (int)uVar20) {
                  bVar38 = *(uint *)(puVar19 + (longlong)iVar32 * 2 + 1) <
                           *(uint *)(puVar19 + (longlong)iVar31 * 2 + 1);
                  if (*(uint *)(puVar19 + (longlong)iVar31 * 2 + 1) ==
                      *(uint *)(puVar19 + (longlong)iVar32 * 2 + 1)) {
                    bVar38 = *(uint *)((longlong)puVar19 + (longlong)iVar31 * 0x10 + 4) <
                             *(uint *)((longlong)puVar19 + (longlong)iVar32 * 0x10 + 4);
                  }
                  if (!bVar38) {
                    iVar32 = iVar31;
                  }
                }
                lVar15 = (longlong)iVar30;
                lVar23 = (longlong)iVar32;
                bVar38 = *(uint *)(puVar19 + lVar23 * 2 + 1) < *(uint *)(puVar19 + lVar15 * 2 + 1);
                if (*(uint *)(puVar19 + lVar15 * 2 + 1) == *(uint *)(puVar19 + lVar23 * 2 + 1)) {
                  bVar38 = *(uint *)((longlong)puVar19 + lVar15 * 0x10 + 4) <
                           *(uint *)((longlong)puVar19 + lVar23 * 0x10 + 4);
                }
                if (bVar38) {
                  puVar28 = puVar19 + lVar15 * 2;
                  puVar16 = puVar19 + lVar23 * 2;
                  local_88 = *puVar28;
                  uStack_80 = puVar28[1];
                  uVar11 = puVar16[1];
                  *puVar28 = *puVar16;
                  puVar28[1] = uVar11;
                  *puVar16 = local_88;
                  puVar16[1] = uStack_80;
                  iVar30 = iVar32;
                  goto joined_r0x000142a8a474;
                }
              }
              bVar38 = iVar33 != 0;
              iVar30 = iVar33 + -1;
              iVar33 = iVar30;
            } while (bVar38);
            if (1 < (int)uVar20) {
              uVar26 = (ulonglong)uVar20 - 1;
              local_88 = *puVar19;
              uStack_80 = puVar19[1];
              uVar11 = (puVar19 + uVar26 * 2)[1];
              *puVar19 = puVar19[uVar26 * 2];
              puVar19[1] = uVar11;
              puVar19[uVar26 * 2] = local_88;
              (puVar19 + uVar26 * 2)[1] = uStack_80;
              if (uVar20 != 2) {
                do {
                  iVar30 = 0;
                  iVar32 = 1;
                  iVar33 = 0;
                  do {
                    lVar15 = (longlong)(iVar30 + 2);
                    iVar31 = iVar32;
                    if (lVar15 < (longlong)uVar26) {
                      bVar38 = *(uint *)(puVar19 + (longlong)iVar32 * 2 + 1) <
                               *(uint *)(puVar19 + lVar15 * 2 + 1);
                      if (*(uint *)(puVar19 + lVar15 * 2 + 1) ==
                          *(uint *)(puVar19 + (longlong)iVar32 * 2 + 1)) {
                        bVar38 = *(uint *)((longlong)puVar19 + lVar15 * 0x10 + 4) <
                                 *(uint *)((longlong)puVar19 + (longlong)iVar32 * 0x10 + 4);
                      }
                      if (!bVar38) {
                        iVar31 = iVar30 + 2;
                      }
                    }
                    lVar15 = (longlong)iVar33;
                    lVar23 = (longlong)iVar31;
                    bVar38 = *(uint *)(puVar19 + lVar23 * 2 + 1) <
                             *(uint *)(puVar19 + lVar15 * 2 + 1);
                    if (*(uint *)(puVar19 + lVar15 * 2 + 1) == *(uint *)(puVar19 + lVar23 * 2 + 1))
                    {
                      bVar38 = *(uint *)((longlong)puVar19 + lVar15 * 0x10 + 4) <
                               *(uint *)((longlong)puVar19 + lVar23 * 0x10 + 4);
                    }
                    if (!bVar38) break;
                    puVar28 = puVar19 + lVar15 * 2;
                    puVar16 = puVar19 + lVar23 * 2;
                    uVar11 = *puVar28;
                    uVar12 = puVar28[1];
                    uVar13 = puVar16[1];
                    *puVar28 = *puVar16;
                    puVar28[1] = uVar13;
                    *puVar16 = uVar11;
                    puVar16[1] = uVar12;
                    iVar30 = iVar31 * 2;
                    iVar32 = iVar31 * 2 + 1;
                    iVar33 = iVar31;
                  } while ((longlong)iVar32 < (longlong)uVar26);
                  uVar1 = uVar26 - 1;
                  local_88 = *puVar19;
                  uStack_80 = puVar19[1];
                  uVar11 = (puVar19 + uVar1 * 2)[1];
                  *puVar19 = puVar19[uVar1 * 2];
                  puVar19[1] = uVar11;
                  puVar19[uVar1 * 2] = local_88;
                  (puVar19 + uVar1 * 2)[1] = uStack_80;
                  bVar38 = 2 < uVar26;
                  uVar26 = uVar1;
                } while (bVar38);
              }
            }
          }
LAB_142a8a6f1:
          ppuVar17 = ppuVar17 + -3;
          lVar35 = local_3a8;
        } while (&local_388 <= ppuVar17);
      }
      lVar15 = 0;
      iVar30 = local_38c;
      do {
        iVar30 = iVar30 + -1;
        *(undefined4 *)(lVar35 + (ulonglong)*(uint *)(local_398 + lVar15 + 4) * 4) =
             *(undefined4 *)(local_3b0 + 0x88);
        uVar40 = uVar4;
        if (local_398[lVar15 + 0xc] == '\0') {
          uVar40 = uVar3;
        }
        *(undefined4 *)(local_3a0[2] + (ulonglong)*(uint *)(local_398 + lVar15) * 4) = uVar40;
      } while ((iVar30 != 0) &&
              (bVar38 = local_3b8 * 0x10 + -0x10 != lVar15, lVar15 = lVar15 + 0x10, bVar38));
    }
    else {
      puVar22 = (undefined8 *)((longlong)&local_3b8 + lVar10);
      local_398 = (undefined1 *)((longlong)&local_3b8 + lVar10);
      if (1 < (int)uVar6) {
        local_398 = (undefined1 *)((longlong)&local_3b8 + lVar10);
        *(undefined8 *)((longlong)apuStack_3e0 + lVar10) = 0x142a89d1b;
        memset(local_378,0,0x2f0);
        local_388 = local_398;
        local_380 = local_398 + lVar21 + -0x10;
        *(undefined8 *)((longlong)apuStack_3e0 + lVar10) = 0x142a89d41;
        fVar39 = logf((float)(int)uVar6);
        puVar22 = (undefined8 *)((longlong)&local_3b8 + lVar10);
        local_378[0] = (int)(longlong)(fVar39 + fVar39);
        ppuVar17 = &local_388;
        do {
          puVar19 = (undefined8 *)*ppuVar17;
          puVar28 = (undefined8 *)ppuVar17[1];
          iVar30 = *(int *)(ppuVar17 + 2);
          iVar33 = (int)((ulonglong)((longlong)puVar28 - (longlong)puVar19) >> 4);
          uVar20 = iVar33 + 1;
          if (iVar30 != 0) {
LAB_142a89d7e:
            if (8 < (int)uVar20) {
              uVar11 = puVar19[(ulonglong)(uVar20 >> 1) * 2];
              uVar12 = (puVar19 + (ulonglong)(uVar20 >> 1) * 2)[1];
              uVar13 = puVar19[1];
              puVar19[(ulonglong)(uVar20 >> 1) * 2] = *puVar19;
              (puVar19 + (ulonglong)(uVar20 >> 1) * 2)[1] = uVar13;
              *puVar19 = uVar11;
              puVar19[1] = uVar12;
              puVar16 = puVar28 + 2;
              puVar18 = puVar19;
              do {
                puVar18 = puVar18 + 2;
                if (puVar18 <= puVar28) {
                  do {
                    if (*(char *)((longlong)puVar19 + 0xc) == *(char *)((longlong)puVar18 + 0xc)) {
                      if (*(uint *)(puVar19 + 1) == *(uint *)(puVar18 + 1)) {
                        if (*(uint *)((longlong)puVar19 + 4) < *(uint *)((longlong)puVar18 + 4))
                        break;
                      }
                      else if (*(uint *)(puVar18 + 1) < *(uint *)(puVar19 + 1)) break;
                    }
                    else if (*(char *)((longlong)puVar19 + 0xc) != '\0') break;
                    puVar18 = puVar18 + 2;
                  } while (puVar18 <= puVar28);
                }
                puVar14 = puVar16 + -2;
                if (puVar19 < puVar14) {
                  puVar34 = puVar16;
                  do {
                    puVar24 = puVar14;
                    puVar16 = puVar34;
                    puVar14 = puVar24;
                    if (*(char *)((longlong)puVar16 - 4) == *(char *)((longlong)puVar19 + 0xc)) {
                      if (*(uint *)(puVar16 + -1) == *(uint *)(puVar19 + 1)) {
                        if (*(uint *)((longlong)puVar16 - 0xc) < *(uint *)((longlong)puVar19 + 4))
                        goto LAB_142a89e4f;
                      }
                      else if (*(uint *)(puVar19 + 1) < *(uint *)(puVar16 + -1)) {
                        puVar14 = puVar16 + -2;
                        goto LAB_142a89e4f;
                      }
                    }
                    else if (*(char *)((longlong)puVar16 - 4) != '\0') goto LAB_142a89e4f;
                    puVar34 = puVar16 + -2;
                    puVar14 = puVar24 + -2;
                  } while (puVar19 < puVar16 + -4);
                  puVar14 = puVar16 + -4;
                  puVar16 = puVar24;
                }
LAB_142a89e4f:
                if (puVar14 < puVar18) goto LAB_142a89e73;
                uVar11 = *puVar18;
                uVar12 = puVar18[1];
                uVar13 = puVar14[1];
                *puVar18 = *puVar14;
                puVar18[1] = uVar13;
                *puVar14 = uVar11;
                puVar14[1] = uVar12;
                puVar16 = puVar14;
              } while( true );
            }
            for (; puVar16 = puVar19, puVar18 = puVar19, puVar19 < puVar28; puVar28 = puVar28 + -2)
            {
              while (puVar14 = puVar16, puVar16 = puVar18 + 2, puVar16 <= puVar28) {
                cVar37 = *(char *)((longlong)puVar14 + 0xc);
                if (cVar37 == *(char *)((longlong)puVar18 + 0x1c)) {
                  if (*(uint *)(puVar14 + 1) == *(uint *)(puVar16 + 1)) {
                    cVar37 = *(uint *)((longlong)puVar14 + 4) < *(uint *)((longlong)puVar18 + 0x14);
                  }
                  else {
                    cVar37 = *(uint *)(puVar16 + 1) < *(uint *)(puVar14 + 1);
                  }
                }
                puVar18 = puVar16;
                if (cVar37 == '\0') {
                  puVar16 = puVar14;
                }
              }
              local_88 = *puVar14;
              uStack_80 = puVar14[1];
              uVar11 = puVar28[1];
              *puVar14 = *puVar28;
              puVar14[1] = uVar11;
              *puVar28 = local_88;
              puVar28[1] = uStack_80;
            }
            goto LAB_142a8a1bf;
          }
LAB_142a89f0d:
          if (uVar20 != 0) {
            iVar30 = (iVar33 - (iVar33 + -1 >> 0x1f)) + -1 >> 1;
            iVar33 = iVar30;
joined_r0x000142a89f31:
            do {
              iVar32 = iVar30 * 2 + 1;
              if (iVar32 < (int)uVar20) {
                iVar31 = iVar30 * 2 + 2;
                if (iVar31 < (int)uVar20) {
                  lVar23 = (longlong)iVar31 * 0x10;
                  lVar15 = (longlong)iVar32 * 0x10;
                  cVar37 = *(char *)((longlong)puVar19 + lVar23 + 0xc);
                  if (cVar37 == *(char *)((longlong)puVar19 + lVar15 + 0xc)) {
                    if (*(uint *)(puVar19 + (longlong)iVar31 * 2 + 1) ==
                        *(uint *)(puVar19 + (longlong)iVar32 * 2 + 1)) {
                      cVar37 = *(uint *)((longlong)puVar19 + lVar23 + 4) <
                               *(uint *)((longlong)puVar19 + lVar15 + 4);
                    }
                    else {
                      cVar37 = *(uint *)(puVar19 + (longlong)iVar32 * 2 + 1) <
                               *(uint *)(puVar19 + (longlong)iVar31 * 2 + 1);
                    }
                  }
                  if (cVar37 == '\0') {
                    iVar32 = iVar31;
                  }
                }
                puVar28 = puVar19 + (longlong)iVar30 * 2;
                puVar16 = puVar19 + (longlong)iVar32 * 2;
                cVar37 = *(char *)((longlong)puVar19 + (longlong)iVar30 * 0x10 + 0xc);
                if (cVar37 == *(char *)((longlong)puVar19 + (longlong)iVar32 * 0x10 + 0xc)) {
                  if (*(uint *)(puVar28 + 1) == *(uint *)(puVar16 + 1)) {
                    if (*(uint *)((longlong)puVar28 + 4) < *(uint *)((longlong)puVar16 + 4)) {
LAB_142a89fcc:
                      local_88 = *puVar28;
                      uStack_80 = puVar28[1];
                      uVar11 = puVar16[1];
                      *puVar28 = *puVar16;
                      puVar28[1] = uVar11;
                      *puVar16 = local_88;
                      puVar16[1] = uStack_80;
                      iVar30 = iVar32;
                      goto joined_r0x000142a89f31;
                    }
                  }
                  else if (*(uint *)(puVar16 + 1) < *(uint *)(puVar28 + 1)) goto LAB_142a89fcc;
                }
                else if (cVar37 != '\0') goto LAB_142a89fcc;
              }
              bVar38 = iVar33 != 0;
              iVar30 = iVar33 + -1;
              iVar33 = iVar30;
            } while (bVar38);
            if (1 < (int)uVar20) {
              uVar26 = (ulonglong)uVar20 - 1;
              local_88 = *puVar19;
              uStack_80 = puVar19[1];
              uVar11 = (puVar19 + uVar26 * 2)[1];
              *puVar19 = puVar19[uVar26 * 2];
              puVar19[1] = uVar11;
              puVar19[uVar26 * 2] = local_88;
              (puVar19 + uVar26 * 2)[1] = uStack_80;
              if (uVar20 != 2) {
                do {
                  iVar30 = 0;
                  iVar32 = 1;
                  iVar33 = 0;
                  do {
                    lVar15 = (longlong)(iVar30 + 2);
                    iVar31 = iVar32;
                    if (lVar15 < (longlong)uVar26) {
                      lVar23 = (longlong)iVar32 * 0x10;
                      cVar37 = *(char *)((longlong)puVar19 + lVar15 * 0x10 + 0xc);
                      if (cVar37 == *(char *)((longlong)puVar19 + lVar23 + 0xc)) {
                        if (*(uint *)(puVar19 + lVar15 * 2 + 1) ==
                            *(uint *)(puVar19 + (longlong)iVar32 * 2 + 1)) {
                          cVar37 = *(uint *)((longlong)puVar19 + lVar15 * 0x10 + 4) <
                                   *(uint *)((longlong)puVar19 + lVar23 + 4);
                        }
                        else {
                          cVar37 = *(uint *)(puVar19 + (longlong)iVar32 * 2 + 1) <
                                   *(uint *)(puVar19 + lVar15 * 2 + 1);
                        }
                      }
                      if (cVar37 == '\0') {
                        iVar31 = iVar30 + 2;
                      }
                    }
                    puVar28 = puVar19 + (longlong)iVar33 * 2;
                    puVar16 = puVar19 + (longlong)iVar31 * 2;
                    cVar37 = *(char *)((longlong)puVar19 + (longlong)iVar33 * 0x10 + 0xc);
                    if (cVar37 == *(char *)((longlong)puVar19 + (longlong)iVar31 * 0x10 + 0xc)) {
                      if (*(uint *)(puVar28 + 1) == *(uint *)(puVar16 + 1)) {
                        if (*(uint *)((longlong)puVar16 + 4) <= *(uint *)((longlong)puVar28 + 4))
                        break;
                      }
                      else if (*(uint *)(puVar28 + 1) <= *(uint *)(puVar16 + 1)) break;
                    }
                    else if (cVar37 == '\0') break;
                    uVar11 = *puVar28;
                    uVar12 = puVar28[1];
                    uVar13 = puVar16[1];
                    *puVar28 = *puVar16;
                    puVar28[1] = uVar13;
                    *puVar16 = uVar11;
                    puVar16[1] = uVar12;
                    iVar30 = iVar31 * 2;
                    iVar32 = iVar31 * 2 + 1;
                    iVar33 = iVar31;
                  } while ((longlong)iVar32 < (longlong)uVar26);
                  uVar1 = uVar26 - 1;
                  local_88 = *puVar19;
                  uStack_80 = puVar19[1];
                  uVar11 = (puVar19 + uVar1 * 2)[1];
                  *puVar19 = puVar19[uVar1 * 2];
                  puVar19[1] = uVar11;
                  puVar19[uVar1 * 2] = local_88;
                  (puVar19 + uVar1 * 2)[1] = uStack_80;
                  bVar38 = 2 < uVar26;
                  uVar26 = uVar1;
                } while (bVar38);
              }
            }
          }
LAB_142a8a1bf:
          ppuVar17 = ppuVar17 + -3;
          lVar35 = local_3a8;
        } while (&local_388 <= ppuVar17);
      }
      iVar30 = 0;
      lVar15 = 0;
      do {
        *(undefined4 *)(lVar35 + (ulonglong)*(uint *)(local_398 + lVar15 + 4) * 4) =
             *(undefined4 *)(local_3b0 + 0x88);
        uVar40 = uVar4;
        if (local_398[lVar15 + 0xc] == '\0') {
          uVar40 = uVar3;
        }
        *(undefined4 *)(local_3a0[2] + (ulonglong)*(uint *)(local_398 + lVar15) * 4) = uVar40;
        iVar30 = iVar30 + ((byte)local_398[lVar15 + 0xc] ^ 1);
      } while ((iVar30 != local_38c) &&
              (bVar38 = local_3b8 * 0x10 + -0x10 != lVar15, lVar15 = lVar15 + 0x10, bVar38));
    }
  }
  if ((local_70 ^ (ulonglong)local_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar22 + -0x28) = &UNK_142a8a79c;
    FUN_144d8e3a0();
  }
  return;
LAB_142a89e73:
  local_88 = *puVar19;
  uStack_80 = puVar19[1];
  uVar11 = puVar14[1];
  *puVar19 = *puVar14;
  puVar19[1] = uVar11;
  *puVar14 = local_88;
  puVar14[1] = uStack_80;
  iVar30 = iVar30 + -1;
  puVar16 = puVar16 + -4;
  if ((longlong)puVar16 - (longlong)puVar19 < (longlong)puVar28 - (longlong)puVar18) {
    if (puVar18 < puVar28) {
      *ppuVar17 = (undefined1 *)puVar18;
      ppuVar17[1] = (undefined1 *)puVar28;
      *(int *)(ppuVar17 + 2) = iVar30;
      ppuVar17 = ppuVar17 + 3;
    }
    if (puVar14 <= puVar19 + 2) goto LAB_142a8a1bf;
  }
  else {
    if (puVar19 + 2 < puVar14) {
      *ppuVar17 = (undefined1 *)puVar19;
      ppuVar17[1] = (undefined1 *)puVar16;
      *(int *)(ppuVar17 + 2) = iVar30;
      ppuVar17 = ppuVar17 + 3;
    }
    puVar16 = puVar28;
    puVar19 = puVar18;
    if (puVar28 <= puVar18) goto LAB_142a8a1bf;
  }
  iVar33 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar19) >> 4);
  uVar20 = iVar33 + 1;
  puVar28 = puVar16;
  if (iVar30 == 0) goto LAB_142a89f0d;
  goto LAB_142a89d7e;
LAB_142a8a3ab:
  local_88 = *puVar16;
  uStack_80 = puVar16[1];
  uVar11 = puVar29[-1];
  *puVar16 = *puVar34;
  puVar16[1] = uVar11;
  *puVar34 = local_88;
  puVar29[-1] = uStack_80;
  iVar30 = iVar30 + -1;
  puVar29 = puVar29 + -4;
  if ((longlong)puVar36 - (longlong)puVar18 < (longlong)puVar14 - (longlong)puVar25) {
    if (puVar19 < puVar28) {
      *ppuVar17 = (undefined1 *)puVar19;
      ppuVar17[1] = (undefined1 *)puVar28;
      *(int *)(ppuVar17 + 2) = iVar30;
      ppuVar17 = ppuVar17 + 3;
    }
    puVar19 = puVar16;
    if (puVar34 <= puVar16 + 2) goto LAB_142a8a6f1;
  }
  else {
    if (puVar16 + 2 < puVar34) {
      *ppuVar17 = (undefined1 *)puVar16;
      ppuVar17[1] = (undefined1 *)puVar29;
      *(int *)(ppuVar17 + 2) = iVar30;
      ppuVar17 = ppuVar17 + 3;
    }
    puVar16 = puVar25;
    puVar29 = puVar28;
    puVar36 = puVar28;
    if (puVar28 <= puVar19) goto LAB_142a8a6f1;
  }
  iVar33 = (int)((ulonglong)((longlong)puVar36 - (longlong)puVar16) >> 4);
  uVar20 = iVar33 + 1;
  puVar18 = puVar16;
  puVar16 = puVar19;
  puVar28 = puVar29;
  puVar14 = puVar36;
  if (iVar30 == 0) goto LAB_142a8a453;
  goto LAB_142a8a2c4;
}



// FUNCTION 142a8a7e2 FUN_142a8a7e2 body=363 status=ok
// SIG undefined FUN_142a8a7e2(void)

void FUN_142a8a7e2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      FUN_1400021e4(lVar2 + 8 + lVar6,&local_58);
      puVar5 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar5 = local_58;
      }
      uVar3 = FUN_1459d3174();
      local_60 = 0;
      local_68 = 0x2000;
      lVar4 = FUN_141433b6f(uVar3,0,puVar5,0);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar4);
      }
      *(longlong *)(lVar2 + 0x10 + lVar6) = lVar4;
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar2 + 0x18 + lVar6) != 0) {
        FUN_1400021e4(lVar2 + 0x18 + lVar6,&local_58);
        puVar5 = &DAT_149dfb77a;
        if (local_50 != 0) {
          puVar5 = local_58;
        }
        uVar3 = FUN_145985b52();
        local_60 = 0;
        local_68 = 0x2000;
        lVar4 = FUN_141433b6f(uVar3,0,puVar5,0);
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        *(longlong *)(lVar2 + 0x20 + lVar6) = lVar4;
        if (local_58 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar6 = lVar6 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8a94e FUN_142a8a94e body=627 status=ok
// SIG undefined FUN_142a8a94e(void)

void FUN_142a8a94e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  longlong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_80;
  longlong local_78;
  ulonglong uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = FUN_146f38f5e(DAT_14c951640);
  if (lVar4 != 0) {
    FUN_1401924dc(lVar4);
  }
  if ((param_1[3] != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  param_1[3] = lVar4;
  local_78 = 0;
  uStack_70 = 0;
  FUN_146f380a0(lVar4,&local_78);
  if ((int)uStack_70 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_70 & 0xffffffff);
  }
  plVar1 = param_1 + 8;
  if (*(int *)((longlong)param_1 + 0x4c) < (int)uStack_70) {
    FUN_146f4075a(plVar1);
  }
  lVar4 = local_78;
  if ((int)uStack_70 != 0) {
    lVar5 = (longlong)(int)uStack_70;
    lVar9 = 0;
    do {
      local_b8 = 0;
      FUN_140af9fb2(&local_80,0,*(undefined8 *)(lVar4 + 0x10 + lVar9),*(undefined8 *)(lVar4 + lVar9)
                   );
      plVar6 = (longlong *)
               FUN_146f38ff3(DAT_14c951640,*(undefined8 *)(lVar4 + 0x10 + lVar9),local_80);
      if (plVar6 != (longlong *)0x0) {
        FUN_1401924dc(plVar6);
      }
      uStack_98 = 0;
      uStack_94 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      uStack_9c = 0;
      lVar8 = *param_1;
      if (DAT_14c950c29 == '\x01') {
        if (lVar8 == 0) {
          lVar8 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar8 = *param_1;
        }
      }
      local_a8 = lVar8;
      if (*(longlong *)(lVar4 + 0x20 + lVar9) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_146f390b8(DAT_14c951640);
      }
      uStack_a0 = (undefined4)uVar7;
      uStack_9c = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_98 = *(undefined4 *)param_1[2];
      uStack_94 = CONCAT44(*(undefined4 *)(param_1[1] + 0x30),(int)param_1[0x11]);
      (**(code **)(*plVar6 + 0x2a0))(plVar6);
      lVar8 = param_1[9];
      uVar3 = (int)lVar8 + 1;
      *(uint *)(param_1 + 9) = uVar3;
      if (*(uint *)((longlong)param_1 + 0x4c) < uVar3) {
        FUN_146f407ca(plVar1);
      }
      puVar2 = (undefined8 *)(*plVar1 + (longlong)(int)lVar8 * 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      if (plVar6 == (longlong *)0x0) {
        puVar2[1] = *(undefined8 *)(lVar4 + lVar9);
        *(undefined4 *)(puVar2 + 2) = 0;
      }
      else {
        FUN_1401924dc(plVar6);
        *puVar2 = plVar6;
        puVar2[1] = *(undefined8 *)(lVar4 + lVar9);
        *(undefined4 *)(puVar2 + 2) = 0;
        if (DAT_14c872a72 == '\0') {
          FUN_140113f48(plVar6);
        }
      }
      lVar9 = lVar9 + 0x28;
    } while (lVar5 * 0x28 != lVar9);
  }
  if (local_78 != 0) {
    FUN_1400020a8(local_78);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8abc4 FUN_142a8abc4 body=385 status=ok
// SIG undefined FUN_142a8abc4(void)

undefined8 FUN_142a8abc4(longlong param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  int *piVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_3 == 0xffffffff) || (*(uint *)(param_1 + 0x48) <= param_3)) {
    uVar7 = 0;
  }
  else {
    lVar11 = (longlong)(int)param_2;
    *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar11 * 4) = 0;
    lVar4 = *(longlong *)(param_1 + 0x30);
    puVar10 = (undefined8 *)(lVar11 * 8 + *(longlong *)(param_1 + 0x20));
    bVar3 = *(byte *)(lVar4 + lVar11);
    uVar9 = (ulonglong)bVar3;
    if (uVar9 != 0xff) {
      lVar5 = *(longlong *)(param_1 + 0x40);
      piVar2 = (int *)(lVar5 + 0x10 + uVar9 * 0x18);
      *piVar2 = *piVar2 + -1;
      plVar6 = *(longlong **)(lVar5 + uVar9 * 0x18);
      (**(code **)(*plVar6 + 0x2d0))(plVar6,param_2,puVar10);
    }
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x270) +
             (longlong)((int)param_2 / 100) * 8);
    lVar8 = (longlong)((int)param_2 % 100) * 0x38;
    *puVar10 = 0;
    local_60 = *(undefined8 *)(lVar5 + 0x18 + lVar8);
    local_58 = *(undefined8 *)(lVar5 + 0x10 + lVar8);
    local_50 = *(undefined8 *)
                (*(longlong *)
                  (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x290) +
                  (longlong)((int)param_2 / 100) * 8) + (longlong)((int)param_2 % 100) * 8);
    lVar5 = *(longlong *)(param_1 + 0x40);
    plVar6 = *(longlong **)(lVar5 + (longlong)(int)param_3 * 0x18);
    local_68 = puVar10;
    uVar7 = (**(code **)(*plVar6 + 0x2c8))(plVar6,param_2);
    if ((char)uVar7 == '\0') {
      if (bVar3 != 0xff) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar11 * 4) = 0x3f800000;
        *(undefined1 *)(lVar4 + lVar11) = 0xff;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x70) + (ulonglong)(param_2 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
      }
    }
    else {
      *(char *)(lVar4 + lVar11) = (char)param_3;
      piVar2 = (int *)(lVar5 + (longlong)(int)param_3 * 0x18 + 0x10);
      *piVar2 = *piVar2 + 1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8ad46 FUN_142a8ad46 body=1146 status=ok
// SIG undefined FUN_142a8ad46(void)

void FUN_142a8ad46(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  code **ppcVar3;
  code *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined ***pppuVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_198 [44];
  uint local_16c;
  ulonglong local_168;
  int *local_160;
  ulonglong local_158;
  int *local_150;
  longlong local_148;
  undefined8 uStack_140;
  int *local_130;
  uint local_128;
  int local_124;
  int *local_120;
  uint local_118;
  int local_114 [2];
  int local_10c;
  code *local_108;
  longlong *local_f8;
  longlong local_e8 [4];
  code *local_c8 [2];
  undefined ***local_b8;
  undefined **local_a8;
  longlong *local_a0;
  longlong local_98;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar16 = *(longlong *)(param_1 + 0x10);
  local_114[0] = *(int *)(lVar16 + 0x100);
  local_120 = *(int **)(lVar16 + 0xf0);
  local_118 = local_114[0] + 0x1fU >> 5;
  if (local_114[0] == 0) {
    local_120 = local_114;
  }
  local_124 = *(int *)(lVar16 + 0xe8);
  local_130 = *(int **)(lVar16 + 0xd8);
  local_128 = local_124 + 0x1fU >> 5;
  if (local_124 == 0) {
    local_130 = &local_124;
  }
  local_148 = 0;
  uStack_140 = 0;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_FUN_149f9c870;
  local_60 = &DAT_142a950f8;
  local_88[0] = FUN_146f405be;
  local_b8 = (undefined ***)0x0;
  local_a8 = &PTR_FUN_149f9c890;
  local_a0 = &local_148;
  local_98 = param_1;
  local_108 = FUN_142a950fa;
  local_c8[0] = FUN_142a950fa;
  bVar17 = *(int *)(param_1 + 0x8c) == 0;
  if (bVar17) {
    local_108 = FUN_146f405be;
  }
  local_f8 = (longlong *)0x0;
  ppcVar3 = local_c8;
  if (bVar17) {
    ppcVar3 = local_88;
  }
  (**(code **)ppcVar3[4])();
  if (*(int *)(param_1 + 0x8c) != 0) {
    uVar15 = 0x400;
    if (*(uint *)(param_1 + 0x88) < 0x400) {
      uVar15 = *(uint *)(param_1 + 0x88);
    }
    if ((int)uStack_140._4_4_ < (int)uVar15) {
      FUN_14480809c();
    }
  }
  local_168 = (ulonglong)local_128;
  iVar13 = 0;
  local_16c = 0xffffffff >> (-(char)local_124 & 0x1fU);
  if (local_168 != 0) {
    local_160 = local_120;
    local_150 = local_130;
    local_158 = (ulonglong)(local_128 - 1);
    uVar10 = 0;
    do {
      uVar15 = local_150[uVar10];
      uVar14 = 0xffffffff;
      if (uVar10 == local_158) {
        uVar14 = local_16c;
      }
      uVar14 = uVar14 & (local_160[uVar10] ^ uVar15);
      iVar11 = iVar13;
      if (uVar14 != 0) {
        do {
          pcVar4 = local_108;
          if ((uVar14 & 1) != 0) {
            if ((uVar15 & 1) == 0) {
              lVar16 = *(longlong *)(param_1 + 0x30);
              lVar12 = (longlong)iVar11;
              uVar6 = (ulonglong)*(byte *)(lVar16 + lVar12);
              if (uVar6 != 0xff) {
                lVar2 = *(longlong *)(param_1 + 0x40);
                piVar1 = (int *)(lVar2 + 0x10 + uVar6 * 0x18);
                *piVar1 = *piVar1 + -1;
                plVar7 = *(longlong **)(lVar2 + uVar6 * 0x18);
                (**(code **)(*plVar7 + 0x2d0))
                          (plVar7,iVar11,lVar12 * 8 + *(longlong *)(param_1 + 0x20));
              }
              *(undefined1 *)(lVar16 + lVar12) = 0xff;
              *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar12 * 4) = 0x3f800000;
            }
            else {
              plVar7 = local_f8;
              if (local_f8 == (longlong *)0x0) {
                plVar7 = local_e8;
              }
              local_10c = iVar11;
              (**(code **)(*plVar7 + 8))();
              (*pcVar4)();
            }
          }
          uVar15 = uVar15 >> 1;
          bVar17 = 1 < uVar14;
          uVar14 = uVar14 >> 1;
          iVar11 = iVar11 + 1;
        } while (bVar17);
      }
      uVar10 = uVar10 + 1;
      iVar13 = iVar13 + 0x20;
    } while (uVar10 != local_168);
  }
  if ((*(uint *)(param_1 + 0x90) & 1) != 0) {
    *(uint *)(param_1 + 0x90) = *(uint *)(param_1 + 0x90) & 0xfffffffe;
    if (*(int *)(param_1 + 0x8c) != 0) {
      uVar15 = *(uint *)(param_1 + 0x78);
      local_168 = (ulonglong)uVar15;
      iVar13 = 0;
      local_16c = 0xffffffff >> (-*(char *)(param_1 + 0x80) & 0x1fU);
      if (local_168 != 0) {
        local_160 = *(int **)(param_1 + 0x70);
        uVar10 = 0;
        do {
          uVar14 = 0xffffffff;
          if (uVar10 == uVar15 - 1) {
            uVar14 = local_16c;
          }
          uVar14 = uVar14 & local_160[uVar10];
          iVar11 = iVar13;
          if (uVar14 != 0) {
            do {
              if ((uVar14 & 1) != 0) {
                lVar16 = (longlong)(int)uStack_140;
                uVar5 = (int)uStack_140 + 1;
                uStack_140 = CONCAT44(uStack_140._4_4_,uVar5);
                if (uStack_140._4_4_ < uVar5) {
                  FUN_1447808da(&local_148);
                }
                *(int *)(local_148 + lVar16 * 4) = iVar11;
              }
              bVar17 = 1 < uVar14;
              uVar14 = uVar14 >> 1;
              iVar11 = iVar11 + 1;
            } while (bVar17);
          }
          uVar10 = uVar10 + 1;
          iVar13 = iVar13 + 0x20;
        } while (uVar10 != local_168);
      }
    }
    memset(*(void **)(param_1 + 0x70),0,(longlong)*(int *)(param_1 + 0x78) << 2);
  }
  if (((0 < (int)uStack_140) && (*(int *)(param_1 + 0x8c) != 0)) &&
     ((longlong)*(int *)(param_1 + 0x58) != 0)) {
    plVar9 = *(longlong **)(param_1 + 0x50);
    plVar7 = plVar9 + (longlong)*(int *)(param_1 + 0x58) * 3;
    do {
      if ((*(byte *)((longlong)plVar9 + 0x14) & 1) != 0) {
        lVar16 = 0;
        do {
          *(undefined4 *)(*plVar9 + (longlong)*(int *)(local_148 + lVar16) * 4) =
               *(undefined4 *)
                (*(longlong *)(param_1 + 0x60) + (longlong)*(int *)(local_148 + lVar16) * 4);
          lVar16 = lVar16 + 4;
        } while ((uStack_140 & 0xffffffff) << 2 != lVar16);
      }
      plVar9 = plVar9 + 3;
    } while (plVar9 != plVar7);
  }
  if (local_108 != (code *)0x0) {
    plVar7 = local_f8;
    if (local_f8 == (longlong *)0x0) {
      plVar7 = local_e8;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_c8[0] != (code *)0x0) {
    pppuVar8 = &local_a8;
    if (local_b8 != (undefined ***)0x0) {
      pppuVar8 = local_b8;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar8 = &local_68;
    if (local_78 != (undefined ***)0x0) {
      pppuVar8 = local_78;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8b1c2 FUN_142a8b1c2 body=205 status=ok
// SIG undefined FUN_142a8b1c2(void)

void FUN_142a8b1c2(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_a18 [32];
  int *local_9f8;
  undefined4 local_9f0;
  int local_9e8 [512];
  undefined1 local_1e8 [440];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a18;
  FUN_146f38b6c(local_1e8,*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x48));
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  iVar3 = 0;
  do {
    local_9f0 = 0x200;
    local_9f8 = local_9e8;
    uVar2 = FUN_146efd1b6(*param_2,iVar1,iVar3,0xffffffff);
    if (uVar2 == 0) break;
    FUN_146f38c3a(param_1,local_1e8,local_9e8,uVar2);
    if (uVar2 < 0x200) break;
    iVar3 = local_9e8[uVar2 - 1] + 1;
    iVar1 = *(int *)((longlong)param_2 + 0xc);
  } while (iVar3 != iVar1);
  FUN_146f38d3a(local_1e8);
  if ((local_30 ^ (ulonglong)auStack_a18) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8b290 FUN_142a8b290 body=1145 status=ok
// SIG undefined FUN_142a8b290(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142a8b290(longlong param_1,int param_2,longlong *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined1 auStack_1208 [32];
  longlong *local_11e8;
  undefined4 local_11e0;
  uint local_11d4;
  longlong local_11d0;
  longlong *local_11c8;
  undefined8 local_11c0;
  undefined8 *local_11b8;
  longlong local_11b0;
  longlong local_11a8;
  undefined8 local_11a0;
  uint local_1198;
  undefined8 local_1190;
  undefined8 local_1188;
  int local_1180;
  undefined1 local_1178 [288];
  longlong local_1058;
  undefined8 local_1050;
  longlong local_1048;
  undefined4 local_1040;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1208;
  lVar1 = *(longlong *)(param_1 + 0x50);
  lVar5 = (longlong)param_2;
  local_1058 = 0;
  local_1050 = 0x400000000;
  local_1190 = *(undefined8 *)(lVar1 + lVar5 * 0x18);
  local_1188 = *(undefined8 *)(param_1 + 0x20);
  puVar6 = (undefined1 *)(lVar5 * 0x130 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x10));
  local_1180 = param_2;
  if (local_1178 != puVar6) {
    puVar12 = *(undefined1 **)(puVar6 + 0x120);
    if (*(undefined1 **)(puVar6 + 0x120) == (undefined1 *)0x0) {
      puVar12 = puVar6;
    }
    FUN_146f2a024(local_1178,puVar12,*(undefined4 *)(puVar6 + 0x128),4);
  }
  *(undefined4 *)(param_3 + 0x32) = 0;
  plVar15 = (longlong *)param_3[0x30];
  if ((longlong *)param_3[0x30] == (longlong *)0x0) {
    plVar15 = param_3;
  }
  if ((longlong)(int)param_3[0x31] == 0) {
    uVar3 = 0;
  }
  else {
    plVar10 = plVar15 + (longlong)(int)param_3[0x31] * 3;
    do {
      FUN_146f3c18e(plVar15);
      *(undefined4 *)(plVar15 + 2) = 0;
      plVar15 = plVar15 + 3;
    } while (plVar15 != plVar10);
    uVar3 = *(uint *)(param_3 + 0x32);
  }
  local_11c8 = (longlong *)(lVar1 + lVar5 * 0x18);
  uVar13 = *(uint *)((longlong)param_4 + 0xc);
  lVar1 = param_1;
  puVar2 = param_4;
  if (uVar3 < uVar13) {
    do {
      local_11b8 = puVar2;
      local_11d0 = lVar1;
      lVar1 = *(longlong *)(param_1 + 0x30);
      local_11a8 = *(longlong *)(param_1 + 0x60);
      local_11c0 = *local_11b8;
      local_11b0 = *local_11c8;
      plVar15 = (longlong *)param_3[0x30];
      plVar10 = plVar15;
      if (plVar15 == (longlong *)0x0) {
        plVar10 = param_3;
      }
      local_11e8 = &local_1048;
      local_11e0 = 0x400;
      uVar3 = FUN_146efd1b6(local_11c0,uVar13,uVar3,0xffffffff);
      local_11d4 = uVar13;
joined_r0x000142a8b3f7:
      if (uVar3 == 0) {
LAB_142a8b5ff:
        param_1 = local_11d0;
        if (plVar15 == (longlong *)0x0) {
          plVar15 = param_3;
        }
        if ((longlong)(int)param_3[0x31] == 0) break;
        plVar10 = plVar15 + (longlong)(int)param_3[0x31] * 3;
        goto LAB_142a8b62c;
      }
      if (0x3ff < uVar3) {
        uVar13 = *(int *)((longlong)&local_1048 + (ulonglong)(uVar3 - 1) * 4) + 1;
      }
      *(uint *)(param_3 + 0x32) = uVar13;
      lVar5 = 0;
      do {
        uVar13 = *(uint *)((longlong)&local_1048 + lVar5);
        uVar14 = (ulonglong)uVar13;
        uVar7 = (ulonglong)*(byte *)(lVar1 + uVar14);
        if (uVar7 != 0xff) {
          puVar8 = (uint *)FUN_146f3c1e8(plVar10 + uVar7 * 3);
          *puVar8 = uVar13;
          *(undefined4 *)(local_11b0 + uVar14 * 4) = *(undefined4 *)(local_11a8 + uVar14 * 4);
        }
        param_1 = local_11d0;
        uVar13 = local_11d4;
        lVar5 = lVar5 + 4;
      } while ((longlong)(int)uVar3 * 4 != lVar5);
      plVar15 = (longlong *)param_3[0x30];
      if (uVar3 < 0x400) goto LAB_142a8b5ff;
      plVar11 = plVar15;
      if (plVar15 == (longlong *)0x0) {
        plVar11 = param_3;
      }
      if ((longlong)(int)param_3[0x31] == 0) {
LAB_142a8b4b0:
        local_11e8 = &local_1048;
        local_11e0 = 0x400;
        uVar3 = FUN_146efd1b6(local_11c0,local_11d4,(int)param_3[0x32],0xffffffff);
        goto joined_r0x000142a8b3f7;
      }
      lVar5 = (longlong)(int)param_3[0x31] * 0x18;
      lVar9 = 0;
      while (*(uint *)((longlong)plVar11 + lVar9 + 0x10) < 0x400) {
        lVar9 = lVar9 + 0x18;
        if (lVar5 == lVar9) goto LAB_142a8b4b0;
      }
      plVar15 = plVar11;
      do {
        uVar3 = *(uint *)(plVar15 + 2);
        if (0x3ff < uVar3) {
          if ((undefined8 *)*plVar15 == (undefined8 *)0x0) {
            local_11a0 = 0;
          }
          else {
            local_11a0 = *(undefined8 *)*plVar15;
          }
          if (0x3ff < (int)uVar3) {
            uVar3 = 0x400;
          }
          plVar10 = (longlong *)param_3[0x30];
          if ((longlong *)param_3[0x30] == (longlong *)0x0) {
            plVar10 = param_3;
          }
          plVar10 = *(longlong **)
                     (*(longlong *)(param_1 + 0x40) +
                     (longlong)
                     ((int)((ulonglong)((longlong)plVar11 - (longlong)plVar10) >> 3) * -0x55555555)
                     * 0x18);
          local_1198 = uVar3;
          (**(code **)(*plVar10 + 0x2e8))(plVar10,&local_11a0);
          uVar3 = *(uint *)(plVar15 + 2);
          if (0 < (int)uVar3) {
            iVar4 = uVar3 - 0x400;
            if (uVar3 < 0x400) {
              iVar4 = 0;
            }
            *(int *)(plVar15 + 2) = iVar4;
            FUN_146f4060e(plVar15);
          }
        }
        plVar15 = plVar15 + 3;
        plVar11 = plVar11 + 3;
        lVar5 = lVar5 + -0x18;
      } while (lVar5 != 0);
      uVar13 = *(uint *)((longlong)local_11b8 + 0xc);
      uVar3 = *(uint *)(param_3 + 0x32);
      lVar1 = local_11d0;
      puVar2 = local_11b8;
      if (uVar13 <= uVar3) break;
    } while( true );
  }
  goto LAB_142a8b5b2;
LAB_142a8b62c:
  do {
    uVar3 = *(uint *)(plVar15 + 2);
    if (0 < (int)uVar3) {
      if ((undefined8 *)*plVar15 == (undefined8 *)0x0) {
        local_11a0 = 0;
      }
      else {
        local_11a0 = *(undefined8 *)*plVar15;
      }
      if (0x3ff < uVar3) {
        uVar3 = 0x400;
      }
      plVar11 = (longlong *)param_3[0x30];
      if ((longlong *)param_3[0x30] == (longlong *)0x0) {
        plVar11 = param_3;
      }
      plVar11 = *(longlong **)
                 (*(longlong *)(param_1 + 0x40) +
                 (longlong)
                 ((int)((ulonglong)((longlong)plVar15 - (longlong)plVar11) >> 3) * -0x55555555) *
                 0x18);
      local_1198 = uVar3;
      (**(code **)(*plVar11 + 0x2e8))(plVar11,&local_11a0);
      uVar3 = *(uint *)(plVar15 + 2);
      if (0 < (int)uVar3) {
        iVar4 = uVar3 - 0x400;
        if (uVar3 < 0x400) {
          iVar4 = 0;
        }
        *(int *)(plVar15 + 2) = iVar4;
        FUN_146f4060e(plVar15);
        goto LAB_142a8b62c;
      }
    }
    plVar15 = plVar15 + 3;
  } while (plVar15 != plVar10);
LAB_142a8b5b2:
  if (0 < DAT_14c75f424) {
    local_1048 = *local_11c8;
    local_1040 = (undefined4)local_11c8[1];
    FUN_146f38992(param_1,&local_1048,local_1178);
  }
  if (local_1058 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8b70a FUN_142a8b70a body=819 status=ok
// SIG undefined FUN_142a8b70a(void)

void FUN_142a8b70a(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  DWORD DVar13;
  DWORD dwTlsIndex;
  DWORD DVar14;
  LPVOID lpTlsValue;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined4 *puVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStack_318 [32];
  undefined8 *local_2f8;
  longlong *local_2e8;
  undefined8 *local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  char local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8 [544];
  longlong local_98;
  undefined8 local_90;
  uint local_84;
  undefined4 *local_80;
  longlong local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_318;
  dwTlsIndex = DAT_14c7585d0;
  local_2e8 = param_2;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar14 = 0xffffffff;
    LOCK();
    bVar23 = DAT_14c7585d0 != 0xffffffff;
    DVar13 = dwTlsIndex;
    if (bVar23) {
      DVar14 = DAT_14c7585d0;
      DVar13 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar13;
    UNLOCK();
    if (bVar23) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar14;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(local_2b8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  plVar12 = local_2e8;
  local_2f8 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_2d8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_2d0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_2c8 = '\0';
  local_2c0 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_2e0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  uVar17 = (int)local_2e8[1] + 3U & 0xfffffffc;
  if (0x3ff < uVar17) {
    uVar17 = 0x400;
  }
  local_98 = 0;
  local_90 = 0x400000000;
  local_2e0 = local_2f8;
  FUN_146f391f8(param_1,local_2b8,local_2e8,uVar17);
  uVar17 = *(uint *)(plVar12 + 1);
  if (uVar17 != 0) {
    uVar22 = 0;
    do {
      uVar5 = uVar17 - uVar22;
      if (0x3ff < uVar17 - uVar22) {
        uVar5 = 0x400;
      }
      uVar16 = 0;
      uVar19 = uVar17 - uVar22;
      if (uVar19 != 0) {
        lVar3 = *local_2e8;
        lVar4 = local_2e8[2];
        lVar18 = local_2e8[3];
        if (0x3ff < uVar19) {
          uVar19 = 0x400;
        }
        lVar20 = 0;
        do {
          *(undefined4 *)(local_78 + lVar20 * 4) =
               *(undefined4 *)
                (lVar4 + (ulonglong)*(uint *)(lVar3 + (ulonglong)(uVar22 + (int)lVar20) * 4) * 4);
          lVar20 = lVar20 + 1;
        } while (uVar19 != (uint)lVar20);
        uVar16 = 0;
        if (uVar5 != 0) {
          uVar16 = 0;
          puVar21 = local_80;
          do {
            iVar15 = *(int *)(lVar18 + 4 +
                             (ulonglong)*(uint *)(lVar3 + (ulonglong)(uVar22 + (int)uVar16) * 4) * 8
                             );
            iVar6 = iVar15 + 0x7ff;
            if (-1 < iVar15) {
              iVar6 = iVar15;
            }
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar6 >> 0xb) * 8);
            lVar20 = (longlong)(iVar15 % 0x800) * 0x20;
            puVar1 = (undefined4 *)(lVar4 + lVar20);
            uVar7 = *puVar1;
            uVar8 = puVar1[1];
            uVar9 = puVar1[2];
            uVar10 = puVar1[3];
            puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar20);
            uVar11 = puVar2[1];
            *(undefined8 *)(puVar21 + 4) = *puVar2;
            *(undefined8 *)(puVar21 + 6) = uVar11;
            *puVar21 = uVar7;
            puVar21[1] = uVar8;
            puVar21[2] = uVar9;
            puVar21[3] = uVar10;
            uVar19 = (int)uVar16 + 1;
            uVar16 = (ulonglong)uVar19;
            puVar21 = puVar21 + 8;
          } while (uVar5 != uVar19);
        }
      }
      for (iVar15 = uVar22 - (uVar22 + 3 & 0xfffffffc); iVar15 != 0; iVar15 = iVar15 + 1) {
        *(undefined4 *)(local_78 + uVar16 * 4) = 0;
        *(undefined8 *)(local_80 + uVar16 * 8 + 4) = 0;
        *(undefined8 *)((longlong)(local_80 + uVar16 * 8 + 4) + 8) = 0;
        *(undefined8 *)(local_80 + uVar16 * 8) = 0;
        *(undefined8 *)((longlong)(local_80 + uVar16 * 8) + 8) = 0;
        uVar16 = (ulonglong)((int)uVar16 + 1);
      }
      local_84 = uVar5;
      FUN_146f39302(local_2b8);
      if (local_84 != 0) {
        lVar3 = *local_2e8;
        lVar4 = local_2e8[2];
        lVar18 = 0;
        do {
          *(undefined4 *)
           (lVar4 + (ulonglong)*(uint *)(lVar3 + (ulonglong)(uVar22 + (int)lVar18) * 4) * 4) =
               *(undefined4 *)(local_78 + lVar18 * 4);
          lVar18 = lVar18 + 1;
        } while (local_84 != (uint)lVar18);
      }
      uVar22 = uVar5 + uVar22;
    } while (uVar22 < uVar17);
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_2c8 == '\0') {
    local_2c8 = '\x01';
    *(int *)(local_2e0 + 4) = *(int *)(local_2e0 + 4) + -1;
    if (local_2d0 != local_2e0[2]) {
      FUN_14004673c();
    }
    *local_2e0 = local_2d8;
    local_2e0[3] = local_2c0;
  }
  if ((local_60 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8ba3e FUN_142a8ba3e body=460 status=ok
// SIG undefined FUN_142a8ba3e(void)

void FUN_142a8ba3e(double *param_1)

{
  float *pfVar1;
  double dVar2;
  undefined8 uVar3;
  uint uVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double *pdVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
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
  
  pdVar11 = param_1 + 0x20;
  if ((double *)param_1[0x44] != (double *)0x0) {
    pdVar11 = (double *)param_1[0x44];
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x234);
  if ((ulonglong)uVar4 != 0) {
    dVar9 = pdVar11[2];
    dVar10 = pdVar11[3];
    dVar2 = pdVar11[4];
    dVar5 = param_1[0x48];
    pdVar11 = (double *)((longlong)param_1[0x47] + 0x70);
    uVar12 = 0;
    do {
      auVar20._0_8_ = (pdVar11[-2] - dVar9) * (pdVar11[-2] - dVar9);
      auVar20._8_8_ = (pdVar11[-1] - dVar10) * (pdVar11[-1] - dVar10);
      dVar7 = (pdVar11[-8] - dVar2) * (pdVar11[-8] - dVar2) +
              (pdVar11[-10] - dVar9) * (pdVar11[-10] - dVar9) +
              (pdVar11[-7] - 0.0) * (pdVar11[-7] - 0.0) +
              (pdVar11[-9] - dVar10) * (pdVar11[-9] - dVar10);
      auVar16._0_8_ = (*pdVar11 - dVar2) * (*pdVar11 - dVar2) + auVar20._0_8_;
      auVar16._8_8_ = (pdVar11[1] - 0.0) * (pdVar11[1] - 0.0) + auVar20._8_8_;
      auVar17._8_4_ = SUB84(dVar7,0);
      auVar17._0_8_ =
           (pdVar11[-0xc] - dVar2) * (pdVar11[-0xc] - dVar2) +
           (pdVar11[-0xe] - dVar9) * (pdVar11[-0xe] - dVar9) +
           (pdVar11[-0xb] - 0.0) * (pdVar11[-0xb] - 0.0) +
           (pdVar11[-0xd] - dVar10) * (pdVar11[-0xd] - dVar10);
      auVar17._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar17 = sqrtpd(auVar16,auVar17);
      auVar8._8_4_ = SUB84(auVar16._0_8_ + auVar16._8_8_,0);
      auVar8._0_8_ = (pdVar11[-4] - dVar2) * (pdVar11[-4] - dVar2) +
                     (pdVar11[-6] - dVar9) * (pdVar11[-6] - dVar9) +
                     (pdVar11[-3] - 0.0) * (pdVar11[-3] - 0.0) +
                     (pdVar11[-5] - dVar10) * (pdVar11[-5] - dVar10);
      auVar8._12_4_ = (int)((ulonglong)(auVar16._0_8_ + auVar16._8_8_) >> 0x20);
      auVar21 = sqrtpd(auVar20,auVar8);
      auVar18._0_8_ = auVar17._0_8_ - *param_1;
      auVar18._8_8_ = auVar17._8_8_ - param_1[1];
      auVar22._0_8_ = auVar21._0_8_ - param_1[2];
      auVar22._8_8_ = auVar21._8_8_ - param_1[3];
      auVar17 = maxpd(auVar18,ZEXT816(0));
      auVar23 = maxpd(auVar22,ZEXT816(0));
      auVar15._0_8_ = param_1[0xc] * auVar17._0_8_ * param_1[0x1c] + param_1[0x10];
      auVar15._8_8_ = param_1[0xd] * auVar17._8_8_ * param_1[0x1d] + param_1[0x11];
      auVar24._0_8_ = param_1[0xe] * auVar23._0_8_ * param_1[0x1e] + param_1[0x12];
      auVar24._8_8_ = param_1[0xf] * auVar23._8_8_ * param_1[0x1f] + param_1[0x13];
      lVar13 = -(ulonglong)(param_1[9] < auVar17._8_8_);
      lVar14 = -(ulonglong)(param_1[0xb] < auVar23._8_8_);
      uVar3 = *(undefined8 *)((longlong)dVar5 + uVar12 * 4);
      auVar19._0_8_ = (double)(float)uVar3;
      auVar19._8_8_ = (double)(float)((ulonglong)uVar3 >> 0x20);
      auVar21._8_4_ = (int)lVar13;
      auVar21._0_8_ = -(ulonglong)(param_1[8] < auVar17._0_8_);
      auVar21._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      auVar17 = blendvpd(auVar15,*(undefined1 (*) [16])(param_1 + 0x18),auVar21);
      auVar6._8_4_ = (int)lVar14;
      auVar6._0_8_ = -(ulonglong)(param_1[10] < auVar23._0_8_);
      auVar6._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
      auVar21 = blendvpd(auVar24,*(undefined1 (*) [16])(param_1 + 0x1a),auVar6);
      uVar3 = *(undefined8 *)((longlong)dVar5 + 8 + uVar12 * 4);
      dVar7 = (double)(float)((ulonglong)uVar3 >> 0x20);
      auVar23._8_4_ = SUB84(dVar7,0);
      auVar23._0_8_ = (double)(float)uVar3;
      auVar23._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar21 = maxpd(auVar21,auVar23);
      auVar17 = maxpd(auVar17,auVar19);
      pfVar1 = (float *)((longlong)dVar5 + uVar12 * 4);
      *pfVar1 = (float)auVar17._0_8_;
      pfVar1[1] = (float)auVar17._8_8_;
      pfVar1[2] = (float)auVar21._0_8_;
      pfVar1[3] = (float)auVar21._8_8_;
      uVar12 = uVar12 + 4;
      pdVar11 = pdVar11 + 0x10;
    } while (uVar12 < uVar4);
  }
  return;
}



// FUNCTION 142a8bc0a FUN_142a8bc0a body=759 status=ok
// SIG undefined FUN_142a8bc0a(void)

void FUN_142a8bc0a(double *param_1)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  uint uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double *pdVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar33;
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar35;
  double dVar36;
  double dVar40;
  double dVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar42;
  double dVar45;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  double dVar49;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  
  pdVar14 = param_1 + 0x20;
  if ((double *)param_1[0x44] != (double *)0x0) {
    pdVar14 = (double *)param_1[0x44];
  }
  uVar5 = *(uint *)((longlong)param_1 + 0x234);
  if ((ulonglong)uVar5 != 0) {
    dVar10 = pdVar14[2];
    dVar11 = pdVar14[3];
    dVar2 = pdVar14[4];
    dVar12 = pdVar14[0xb];
    dVar13 = pdVar14[0xc];
    dVar3 = pdVar14[0xd];
    dVar6 = param_1[0x48];
    pdVar14 = (double *)((longlong)param_1[0x47] + 0x70);
    uVar15 = 0;
    do {
      dVar35 = pdVar14[-0xe] - dVar10;
      dVar40 = pdVar14[-0xd] - dVar11;
      dVar28 = pdVar14[-0xc] - dVar2;
      dVar33 = pdVar14[-0xb] - 0.0;
      dVar29 = dVar28 * dVar28 + dVar35 * dVar35;
      dVar34 = dVar33 * dVar33 + dVar40 * dVar40;
      dVar28 = pdVar14[-10] - dVar10;
      dVar33 = pdVar14[-9] - dVar11;
      dVar35 = pdVar14[-8] - dVar2;
      dVar40 = pdVar14[-7] - 0.0;
      dVar36 = dVar35 * dVar35 + dVar28 * dVar28;
      dVar41 = dVar40 * dVar40 + dVar33 * dVar33;
      dVar35 = pdVar14[-0xe] - dVar12;
      dVar40 = pdVar14[-0xd] - dVar13;
      dVar28 = pdVar14[-0xc] - dVar3;
      dVar33 = pdVar14[-0xb] - 0.0;
      dVar20 = dVar28 * dVar28 + dVar35 * dVar35;
      dVar23 = dVar33 * dVar33 + dVar40 * dVar40;
      dVar28 = pdVar14[-6] - dVar10;
      dVar33 = pdVar14[-5] - dVar11;
      dVar35 = pdVar14[-4] - dVar2;
      dVar40 = pdVar14[-3] - 0.0;
      dVar46 = dVar35 * dVar35 + dVar28 * dVar28;
      dVar49 = dVar40 * dVar40 + dVar33 * dVar33;
      dVar35 = pdVar14[-10] - dVar12;
      dVar40 = pdVar14[-9] - dVar13;
      dVar28 = pdVar14[-8] - dVar3;
      dVar33 = pdVar14[-7] - 0.0;
      dVar24 = dVar28 * dVar28 + dVar35 * dVar35;
      dVar27 = dVar33 * dVar33 + dVar40 * dVar40;
      dVar28 = pdVar14[-2] - dVar10;
      dVar33 = pdVar14[-1] - dVar11;
      dVar35 = *pdVar14 - dVar2;
      dVar40 = pdVar14[1] - 0.0;
      dVar42 = dVar35 * dVar35 + dVar28 * dVar28;
      dVar45 = dVar40 * dVar40 + dVar33 * dVar33;
      dVar35 = pdVar14[-6] - dVar12;
      dVar40 = pdVar14[-5] - dVar13;
      dVar28 = pdVar14[-4] - dVar3;
      dVar33 = pdVar14[-3] - 0.0;
      dVar28 = dVar28 * dVar28 + dVar35 * dVar35;
      dVar33 = dVar33 * dVar33 + dVar40 * dVar40;
      auVar21._0_8_ = dVar20 + dVar23;
      auVar21._8_8_ = dVar20 + dVar23;
      dVar40 = pdVar14[-2] - dVar12;
      dVar20 = pdVar14[-1] - dVar13;
      auVar25._0_8_ = dVar24 + dVar27;
      auVar25._8_8_ = dVar24 + dVar27;
      dVar23 = *pdVar14 - dVar3;
      dVar24 = pdVar14[1] - 0.0;
      auVar31._8_4_ = SUB84(dVar33,0);
      auVar31._0_8_ = dVar28;
      auVar31._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      dVar35 = dVar28 + auVar31._8_8_;
      auVar30._0_8_ = dVar29 + dVar34;
      auVar30._8_8_ = dVar29 + dVar34;
      auVar37._0_8_ = dVar36 + dVar41;
      auVar37._8_8_ = dVar36 + dVar41;
      dVar40 = dVar23 * dVar23 + dVar40 * dVar40;
      dVar20 = dVar24 * dVar24 + dVar20 * dVar20;
      auVar18._0_8_ = dVar40 + dVar20;
      auVar18._8_8_ = dVar40 + dVar20;
      auVar31 = minpd(auVar30,auVar21);
      auVar47._0_8_ = dVar46 + dVar49;
      auVar47._8_8_ = dVar46 + dVar49;
      auVar38 = minpd(auVar37,auVar25);
      auVar43._0_8_ = dVar42 + dVar45;
      auVar43._8_8_ = dVar42 + dVar45;
      auVar39._8_8_ = auVar38._8_8_;
      auVar39._0_8_ = auVar31._8_8_;
      auVar38._8_4_ = SUB84(dVar35,0);
      auVar38._0_8_ = dVar28 + dVar33;
      auVar38._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
      auVar48 = minpd(auVar47,auVar38);
      auVar38 = minpd(auVar43,auVar18);
      auVar44._8_8_ = auVar38._8_8_;
      auVar44._0_8_ = auVar48._8_8_;
      auVar38 = sqrtpd(auVar31,auVar44);
      auVar31 = sqrtpd(auVar18,auVar39);
      auVar19._0_8_ = auVar31._0_8_ - *param_1;
      auVar19._8_8_ = auVar31._8_8_ - param_1[1];
      auVar32._0_8_ = auVar38._0_8_ - param_1[2];
      auVar32._8_8_ = auVar38._8_8_ - param_1[3];
      auVar31 = maxpd(auVar19,ZEXT816(0));
      auVar38 = maxpd(auVar32,ZEXT816(0));
      lVar16 = -(ulonglong)(param_1[9] < auVar31._8_8_);
      lVar17 = -(ulonglong)(param_1[0xb] < auVar38._8_8_);
      auVar22._0_8_ = param_1[0xc] * auVar31._0_8_ * param_1[0x1c] + param_1[0x10];
      auVar22._8_8_ = param_1[0xd] * auVar31._8_8_ * param_1[0x1d] + param_1[0x11];
      auVar48._8_4_ = (int)lVar16;
      auVar48._0_8_ = -(ulonglong)(param_1[8] < auVar31._0_8_);
      auVar48._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
      auVar31 = blendvpd(auVar22,*(undefined1 (*) [16])(param_1 + 0x18),auVar48);
      auVar26._0_8_ = param_1[0xe] * auVar38._0_8_ * param_1[0x1e] + param_1[0x12];
      auVar26._8_8_ = param_1[0xf] * auVar38._8_8_ * param_1[0x1f] + param_1[0x13];
      auVar7._8_4_ = (int)lVar17;
      auVar7._0_8_ = -(ulonglong)(param_1[10] < auVar38._0_8_);
      auVar7._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
      auVar38 = blendvpd(auVar26,*(undefined1 (*) [16])(param_1 + 0x1a),auVar7);
      uVar4 = *(undefined8 *)((longlong)dVar6 + 8 + uVar15 * 4);
      dVar28 = (double)(float)((ulonglong)uVar4 >> 0x20);
      auVar8._8_4_ = SUB84(dVar28,0);
      auVar8._0_8_ = (double)(float)uVar4;
      auVar8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      auVar38 = maxpd(auVar38,auVar8);
      uVar4 = *(undefined8 *)((longlong)dVar6 + uVar15 * 4);
      dVar28 = (double)(float)((ulonglong)uVar4 >> 0x20);
      auVar9._8_4_ = SUB84(dVar28,0);
      auVar9._0_8_ = (double)(float)uVar4;
      auVar9._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      auVar31 = maxpd(auVar31,auVar9);
      pfVar1 = (float *)((longlong)dVar6 + uVar15 * 4);
      *pfVar1 = (float)auVar31._0_8_;
      pfVar1[1] = (float)auVar31._8_8_;
      pfVar1[2] = (float)auVar38._0_8_;
      pfVar1[3] = (float)auVar38._8_8_;
      uVar15 = uVar15 + 4;
      pdVar14 = pdVar14 + 0x10;
    } while (uVar15 < uVar5);
  }
  return;
}



// FUNCTION 142a8bf02 FUN_142a8bf02 body=1023 status=ok
// SIG undefined FUN_142a8bf02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8bf02(double *param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined8 *puVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  uint uVar33;
  double *pdVar34;
  longlong lVar35;
  ulonglong uVar36;
  double *pdVar37;
  double *pdVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auStack_258 [32];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208 [32];
  double *local_108;
  undefined8 local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_108 = (double *)0x0;
  local_f8 = 0x800000000;
  pdVar37 = param_1 + 0x20;
  if ((double *)param_1[0x44] != (double *)0x0) {
    pdVar37 = (double *)param_1[0x44];
  }
  iVar8 = *(int *)(param_1 + 0x45);
  if ((longlong)iVar8 != 0) {
    lVar39 = 0;
    do {
      uVar36 = local_f8;
      pdVar34 = (double *)((longlong)pdVar37 + lVar39 + 0x10);
      dVar9 = *pdVar34;
      dVar12 = pdVar34[1];
      dVar5 = *(double *)((longlong)pdVar37 + lVar39 + 0x20);
      lVar35 = (longlong)(int)local_f8;
      uVar33 = (int)local_f8 + 1;
      local_f8 = CONCAT44(local_f8._4_4_,uVar33);
      if (local_f8._4_4_ < uVar33) {
        FUN_146f4085e(local_208,uVar36 & 0xffffffff);
      }
      pdVar34 = local_108;
      if (local_108 == (double *)0x0) {
        pdVar34 = local_208;
      }
      pdVar34[lVar35 * 4] = dVar9;
      (pdVar34 + lVar35 * 4)[1] = dVar12;
      pdVar34[lVar35 * 4 + 2] = dVar5;
      (pdVar34 + lVar35 * 4 + 2)[1] = 0.0;
      lVar39 = lVar39 + 0x48;
    } while ((longlong)iVar8 * 0x48 != lVar39);
  }
  uVar33 = *(uint *)((longlong)param_1 + 0x234);
  if ((ulonglong)uVar33 != 0) {
    dVar5 = param_1[0x47];
    dVar9 = param_1[0x48];
    uVar36 = 0;
    do {
      pdVar37 = local_108;
      if (local_108 == (double *)0x0) {
        pdVar37 = local_208;
      }
      auVar40 = _DAT_149934db0;
      auVar44 = _DAT_149934db0;
      auVar48 = _DAT_149934db0;
      auVar50 = _DAT_149934db0;
      if ((longlong)(int)local_f8 != 0) {
        lVar39 = uVar36 * 0x20;
        local_218 = *(double *)((longlong)dVar5 + lVar39);
        dStack_210 = ((double *)((longlong)dVar5 + lVar39))[1];
        pdVar34 = (double *)((longlong)dVar5 + 0x10 + lVar39);
        local_228 = *pdVar34;
        dStack_220 = pdVar34[1];
        pdVar34 = (double *)((longlong)dVar5 + 0x20 + lVar39);
        local_238 = *pdVar34;
        dStack_230 = pdVar34[1];
        pdVar34 = (double *)((longlong)dVar5 + 0x30 + lVar39);
        pdVar1 = (double *)((longlong)dVar5 + 0x40 + lVar39);
        in_XMM5 = *(undefined1 (*) [16])((longlong)dVar5 + 0x50 + lVar39);
        pdVar2 = (double *)((longlong)dVar5 + 0x60 + lVar39);
        pdVar3 = (double *)((longlong)dVar5 + 0x70 + lVar39);
        pdVar38 = pdVar37 + (longlong)(int)local_f8 * 4;
        do {
          dVar18 = *pdVar37;
          dVar32 = pdVar37[1];
          dVar12 = pdVar37[2];
          dVar13 = pdVar37[3];
          dVar19 = *pdVar1 - dVar18;
          dVar20 = pdVar1[1] - dVar32;
          dVar30 = *pdVar2 - dVar18;
          dVar31 = pdVar2[1] - dVar32;
          dVar16 = *pdVar34 - dVar12;
          dVar17 = pdVar34[1] - dVar13;
          dVar27 = (local_228 - dVar12) * (local_228 - dVar12) +
                   (local_218 - dVar18) * (local_218 - dVar18);
          dVar28 = (dStack_220 - dVar13) * (dStack_220 - dVar13) +
                   (dStack_210 - dVar32) * (dStack_210 - dVar32);
          auVar25._8_4_ = SUB84(dVar28,0);
          auVar25._0_8_ = dVar27;
          auVar25._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
          dVar29 = dVar27 + auVar25._8_8_;
          dVar23 = in_XMM5._0_8_ - dVar12;
          dVar24 = in_XMM5._8_8_ - dVar13;
          dVar16 = dVar16 * dVar16 + (local_238 - dVar18) * (local_238 - dVar18);
          dVar17 = dVar17 * dVar17 + (dStack_230 - dVar32) * (dStack_230 - dVar32);
          auVar14._8_4_ = SUB84(dVar17,0);
          auVar14._0_8_ = dVar16;
          auVar14._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          dVar18 = dVar16 + auVar14._8_8_;
          dVar12 = *pdVar3 - dVar12;
          dVar13 = pdVar3[1] - dVar13;
          dVar19 = dVar23 * dVar23 + dVar19 * dVar19;
          dVar20 = dVar24 * dVar24 + dVar20 * dVar20;
          auVar21._8_4_ = SUB84(dVar20,0);
          auVar21._0_8_ = dVar19;
          auVar21._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
          dVar23 = dVar19 + auVar21._8_8_;
          auVar26._8_4_ = SUB84(dVar29,0);
          auVar26._0_8_ = dVar27 + dVar28;
          auVar26._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
          auVar48 = minpd(auVar48,auVar26);
          auVar15._8_4_ = SUB84(dVar18,0);
          auVar15._0_8_ = dVar16 + dVar17;
          auVar15._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          auVar40 = minpd(auVar40,auVar15);
          dVar12 = dVar12 * dVar12 + dVar30 * dVar30;
          dVar13 = dVar13 * dVar13 + dVar31 * dVar31;
          auVar10._8_4_ = SUB84(dVar13,0);
          auVar10._0_8_ = dVar12;
          auVar10._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          dVar16 = dVar12 + auVar10._8_8_;
          auVar22._8_4_ = SUB84(dVar23,0);
          auVar22._0_8_ = dVar19 + dVar20;
          auVar22._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
          auVar50 = minpd(auVar50,auVar22);
          auVar11._8_4_ = SUB84(dVar16,0);
          auVar11._0_8_ = dVar12 + dVar13;
          auVar11._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
          auVar44 = minpd(auVar44,auVar11);
          pdVar37 = pdVar37 + 4;
        } while (pdVar37 != pdVar38);
      }
      auVar45._8_8_ = auVar44._8_8_;
      auVar45._0_8_ = auVar50._8_8_;
      auVar50._8_8_ = auVar40._8_8_;
      auVar50._0_8_ = auVar48._8_8_;
      uVar6 = *(undefined8 *)((longlong)dVar9 + uVar36 * 4);
      puVar4 = (undefined8 *)((longlong)dVar9 + 8 + uVar36 * 4);
      uVar7 = *puVar4;
      auVar42._8_8_ = *puVar4;
      auVar42._0_8_ = uVar7;
      auVar40 = sqrtpd(auVar42,auVar45);
      auVar44 = sqrtpd(in_XMM5,auVar50);
      auVar47._0_8_ = auVar44._0_8_ - *param_1;
      auVar47._8_8_ = auVar44._8_8_ - param_1[1];
      auVar43._0_8_ = auVar40._0_8_ - param_1[2];
      auVar43._8_8_ = auVar40._8_8_ - param_1[3];
      in_XMM5 = maxpd(auVar47,ZEXT816(0));
      auVar40 = maxpd(auVar43,ZEXT816(0));
      auVar46._0_8_ = param_1[0xc] * in_XMM5._0_8_ * param_1[0x1c] + param_1[0x10];
      auVar46._8_8_ = param_1[0xd] * in_XMM5._8_8_ * param_1[0x1d] + param_1[0x11];
      auVar49._0_8_ = param_1[0xe] * auVar40._0_8_ * param_1[0x1e] + param_1[0x12];
      auVar49._8_8_ = param_1[0xf] * auVar40._8_8_ * param_1[0x1f] + param_1[0x13];
      auVar48._8_8_ = -(ulonglong)(param_1[9] < in_XMM5._8_8_);
      auVar48._0_8_ = -(ulonglong)(param_1[8] < in_XMM5._0_8_);
      auVar44 = blendvpd(auVar46,*(undefined1 (*) [16])(param_1 + 0x18),auVar48);
      auVar41._8_8_ = -(ulonglong)(param_1[0xb] < auVar40._8_8_);
      auVar41._0_8_ = -(ulonglong)(param_1[10] < auVar40._0_8_);
      auVar40._8_8_ = (double)(float)((ulonglong)uVar6 >> 0x20);
      auVar40._0_8_ = (double)(float)uVar6;
      auVar40 = maxpd(auVar44,auVar40);
      auVar48 = blendvpd(auVar49,*(undefined1 (*) [16])(param_1 + 0x1a),auVar41);
      auVar44._8_8_ = (double)(float)((ulonglong)uVar7 >> 0x20);
      auVar44._0_8_ = (double)(float)uVar7;
      auVar44 = maxpd(auVar48,auVar44);
      puVar4 = (undefined8 *)((longlong)dVar9 + uVar36 * 4);
      *puVar4 = CONCAT44((float)auVar40._8_8_,(float)auVar40._0_8_);
      puVar4[1] = CONCAT44((float)auVar44._8_8_,(float)auVar44._0_8_);
      uVar36 = uVar36 + 4;
    } while (uVar36 < uVar33);
  }
  if (local_108 != (double *)0x0) {
    FUN_1400020a8();
  }
  if ((local_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8c302 FUN_142a8c302 body=1059 status=ok
// SIG undefined FUN_142a8c302(void)

void FUN_142a8c302(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  DWORD DVar12;
  int iVar13;
  uint uVar14;
  DWORD dwTlsIndex;
  DWORD DVar15;
  LPVOID lpTlsValue;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  bool bVar25;
  undefined1 auStack_348 [32];
  undefined8 *local_328;
  longlong *local_318;
  ulonglong local_310;
  uint local_308;
  uint local_304;
  longlong local_300;
  longlong local_2f8;
  undefined8 *local_2f0;
  undefined8 local_2e8;
  longlong local_2e0;
  char local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8 [544];
  longlong local_a8;
  undefined8 local_a0;
  uint local_94;
  undefined4 *local_90;
  longlong local_88;
  longlong local_80;
  uint local_78;
  float local_74;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  dwTlsIndex = DAT_14c7585d0;
  local_318 = param_2;
  local_300 = param_1;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar15 = 0xffffffff;
    LOCK();
    bVar25 = DAT_14c7585d0 != 0xffffffff;
    DVar12 = dwTlsIndex;
    if (bVar25) {
      DVar15 = DAT_14c7585d0;
      DVar12 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar12;
    UNLOCK();
    if (bVar25) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar15;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(local_2c8);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  plVar10 = local_318;
  local_328 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_2e8 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_2e0 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_2d8 = '\0';
  local_2d0 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_2f0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  local_a8 = 0;
  local_a0 = 0x400000000;
  local_2f0 = local_328;
  FUN_146f396bc(local_300,local_2c8,local_318);
  lVar11 = local_300;
  if (*(uint *)(plVar10 + 1) != 0) {
    uVar14 = 0;
    local_308 = *(uint *)(plVar10 + 1);
    do {
      local_304 = local_308 - uVar14;
      if (0x3ff < local_304) {
        local_304 = 0x400;
      }
      local_310 = (ulonglong)uVar14;
      local_78 = 0;
      uVar19 = 0;
      uVar17 = local_308 - uVar14;
      if (uVar17 != 0) {
        lVar3 = *local_318;
        lVar4 = local_318[2];
        lVar21 = local_318[3];
        local_2f8 = local_80;
        if (0x3ff < uVar17) {
          uVar17 = 0x400;
        }
        lVar22 = 0;
        do {
          *(undefined4 *)(local_88 + lVar22 * 4) =
               *(undefined4 *)
                (lVar4 + (ulonglong)*(uint *)(lVar3 + (ulonglong)(uVar14 + (int)lVar22) * 4) * 4);
          lVar22 = lVar22 + 1;
        } while (uVar17 != (uint)lVar22);
        local_78 = 0;
        uVar19 = 0;
        if (local_304 != 0) {
          uVar17 = *(uint *)(local_318 + 4);
          uVar19 = 0;
          puVar16 = local_90;
          uVar20 = 0;
          do {
            iVar18 = (int)uVar19;
            uVar19 = (ulonglong)*(uint *)(lVar3 + (ulonglong)(uVar14 + iVar18) * 4);
            iVar13 = *(int *)(lVar21 + 4 + uVar19 * 8);
            iVar24 = iVar13 + 0x7ff;
            if (-1 < iVar13) {
              iVar24 = iVar13;
            }
            lVar4 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + (longlong)(iVar24 >> 0xb) * 8);
            lVar22 = (longlong)(iVar13 % 0x800) * 0x20;
            puVar1 = (undefined4 *)(lVar4 + lVar22);
            uVar5 = *puVar1;
            uVar6 = puVar1[1];
            uVar7 = puVar1[2];
            uVar8 = puVar1[3];
            puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar22);
            uVar9 = puVar2[1];
            *(undefined8 *)(puVar16 + 4) = *puVar2;
            *(undefined8 *)(puVar16 + 6) = uVar9;
            *puVar16 = uVar5;
            puVar16[1] = uVar6;
            puVar16[2] = uVar7;
            puVar16[3] = uVar8;
            iVar13 = *(int *)(lVar21 + 4 + uVar19 * 8);
            iVar24 = iVar13 + 0x3ff;
            if (-1 < iVar13) {
              iVar24 = iVar13;
            }
            uVar23 = uVar20;
            if (uVar17 == *(ushort *)
                           (*(longlong *)
                             (*(longlong *)(lVar11 + 0x68) + (longlong)(iVar24 >> 10) * 8) +
                           (longlong)(iVar13 % 0x400) * 2)) {
              uVar23 = (ulonglong)((int)uVar20 + 1);
              *(int *)(local_80 + uVar20 * 4) = iVar18;
            }
            local_78 = (uint)uVar23;
            uVar19 = (ulonglong)(iVar18 + 1U);
            puVar16 = puVar16 + 8;
            uVar20 = uVar23;
          } while (local_304 != iVar18 + 1U);
        }
      }
      for (iVar13 = uVar14 - (uVar14 + 3 & 0xfffffffc); iVar13 != 0; iVar13 = iVar13 + 1) {
        *(undefined4 *)(local_88 + uVar19 * 4) = 0;
        *(undefined8 *)(local_90 + uVar19 * 8 + 4) = 0;
        *(undefined8 *)((longlong)(local_90 + uVar19 * 8 + 4) + 8) = 0;
        *(undefined8 *)(local_90 + uVar19 * 8) = 0;
        *(undefined8 *)((longlong)(local_90 + uVar19 * 8) + 8) = 0;
        uVar19 = (ulonglong)((int)uVar19 + 1);
      }
      local_94 = local_304;
      FUN_146f39302(local_2c8);
      if ((ulonglong)local_78 != 0) {
        uVar19 = 0;
        do {
          uVar20 = (ulonglong)*(uint *)(local_80 + uVar19 * 4);
          *(float *)(local_88 + uVar20 * 4) = *(float *)(local_88 + uVar20 * 4) + local_74;
          uVar19 = uVar19 + 1;
        } while (local_78 != uVar19);
      }
      if (local_94 != 0) {
        lVar3 = *local_318;
        lVar4 = local_318[2];
        lVar21 = 0;
        do {
          *(undefined4 *)
           (lVar4 + (ulonglong)
                    *(uint *)(lVar3 + (ulonglong)(uint)((int)local_310 + (int)lVar21) * 4) * 4) =
               *(undefined4 *)(local_88 + lVar21 * 4);
          lVar21 = lVar21 + 1;
        } while (local_94 != (uint)lVar21);
      }
      uVar14 = local_304 + uVar14;
    } while (uVar14 < local_308);
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_2d8 == '\0') {
    local_2d8 = '\x01';
    *(int *)(local_2f0 + 4) = *(int *)(local_2f0 + 4) + -1;
    if (local_2e0 != local_2f0[2]) {
      FUN_14004673c();
    }
    *local_2f0 = local_2e8;
    local_2f0[3] = local_2d0;
  }
  if ((local_60 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8c726 FUN_142a8c726 body=69 status=ok
// SIG undefined FUN_142a8c726(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8c726(void)

{
  _DAT_14c9998c0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8c768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9998c8,1);
  return;
}



// FUNCTION 142a8c76c FUN_142a8c76c body=261 status=ok
// SIG undefined FUN_142a8c76c(void)

void FUN_142a8c76c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  byte local_58;
  byte local_57;
  undefined1 local_48 [24];
  longlong *local_30;
  byte local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_146f10eb6(local_48,*param_2,param_2[2]);
  if ((*(uint *)(param_2 + 4) & 1) == 0 || *(longlong *)(param_1 + 0x18) != 0) {
    local_58 = (byte)*(uint *)(param_2 + 4) & 1;
    local_57 = DAT_14c9998d0 ^ 1;
    local_60 = *(longlong *)(param_1 + 0x18);
    FUN_142a6f1cc(local_48,*(undefined8 *)(param_1 + 0x28));
    if ((DAT_14c9998d0 == 1) && (lVar1 = *(longlong *)(param_1 + 0x18), lVar1 != 0)) {
      if ((*(byte *)(param_2 + 4) & 1) == 0) {
        FUN_146f11622(lVar1,local_48);
      }
      else {
        FUN_146f10f92(lVar1,local_48);
      }
    }
  }
  else {
    FUN_146f10f20(&local_60,*param_2);
    local_28 = *(byte *)(param_2 + 4) & 1;
    local_27 = 0;
    local_30 = &local_60;
    FUN_142a6f1cc(local_48,*(undefined8 *)(param_1 + 0x28));
    FUN_146f11042(&local_60);
  }
  FUN_146f11042(local_48);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8c872 FUN_142a8c872 body=134 status=ok
// SIG undefined FUN_142a8c872(void)

void FUN_142a8c872(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146f10eb6(local_28,*param_2,param_2[2]);
  if ((DAT_14c9998d0 == '\0') && (*(longlong *)(param_1 + 0x18) != 0)) {
    FUN_142a6ee22(*(longlong *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x28),local_28);
  }
  FUN_142a6ef28(local_28,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28),0);
  FUN_146f11042(local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8c8f9 FUN_142a8c8f9 body=69 status=ok
// SIG undefined FUN_142a8c8f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8c8f9(void)

{
  _DAT_14c9998d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8c93b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9998e0,1);
  return;
}



// FUNCTION 142a8c93e FUN_142a8c93e body=69 status=ok
// SIG undefined FUN_142a8c93e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8c93e(void)

{
  _DAT_14c9998e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8c980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9998f0,1);
  return;
}



// FUNCTION 142a8c983 FUN_142a8c983 body=69 status=ok
// SIG undefined FUN_142a8c983(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8c983(void)

{
  _DAT_14c999900 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8c9c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999908,1);
  return;
}



// FUNCTION 142a8c9c8 FUN_142a8c9c8 body=336 status=ok
// SIG undefined FUN_142a8c9c8(void)

void FUN_142a8c9c8(longlong *param_1,undefined8 param_2,int param_3,uint param_4)

{
  ushort uVar1;
  longlong lVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_88 [44];
  uint local_5c;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar4 = FUN_146f18900(param_1[8]);
  if (iVar4 != 0) {
    FUN_146f3c612(param_1[8] + 0x300,&local_58,iVar4);
    if ((longlong)local_50 != 0) {
      local_5c = param_4 | 1;
      lVar8 = 0;
      do {
        lVar2 = *(longlong *)
                 (*(longlong *)(param_1[8] + 0x270) +
                 (longlong)(*(int *)(local_58 + lVar8) / 100) * 8);
        lVar6 = (ulonglong)(uint)(*(int *)(local_58 + lVar8) % 100) * 0x38;
        uVar1 = *(ushort *)(lVar2 + 0x32 + lVar6);
        uVar3 = uVar1 & 0x20;
        uVar7 = param_4;
        if (uVar3 == 0) {
          uVar7 = param_4 & 0xfffffffe;
        }
        *(ushort *)(lVar2 + 0x32 + lVar6) = uVar1 & 0xfefd | (ushort)(param_3 == 1) * 2 + 0x100;
        if (((param_3 == 0) && (uVar3 != 0)) && (DAT_14c75f471 == '\x01')) {
          lVar5 = *param_1;
          iVar4 = 2;
          uVar7 = local_5c;
        }
        else {
          lVar5 = *param_1;
          iVar4 = param_3;
        }
        (**(code **)(lVar5 + 0x300))(param_1,*(undefined8 *)(lVar2 + lVar6),iVar4,uVar7);
        lVar8 = lVar8 + 4;
      } while ((longlong)local_50 * 4 != lVar8);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8cb1a FUN_142a8cb1a body=199 status=ok
// SIG undefined FUN_142a8cb1a(void)

void FUN_142a8cb1a(longlong *param_1,longlong param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = FUN_146f18900(param_1[8]);
  lVar1 = *(longlong *)(*(longlong *)(param_1[8] + 0x270) + (longlong)(iVar2 / 100) * 8);
  lVar3 = (ulonglong)(uint)(iVar2 % 100) * 0x38;
  *(ushort *)(lVar1 + 0x32 + lVar3) =
       (*(ushort *)(lVar1 + 0x32 + lVar3) & 0xfefd) + (ushort)(param_3 == 1) * 2 + 0x100;
  FUN_142a8c9c8(param_1,param_2,param_3,param_4);
  (**(code **)(*param_1 + 0x300))(param_1,param_2,param_3,param_4);
  FUN_142a8cbe2(param_1,param_2);
  FUN_146f39b7c(param_1,param_2);
  return;
}



// FUNCTION 142a8cbe2 FUN_142a8cbe2 body=179 status=ok
// SIG undefined FUN_142a8cbe2(void)

void FUN_142a8cbe2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar1 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40));
  lVar2 = FUN_142a80a2c(*(undefined8 *)(param_1 + 0x40),iVar1);
  if (lVar2 != 0) {
    if ((*(byte *)(lVar2 + 0x12) & 4) != 0) {
      local_28 = 0;
      FUN_146f39e02(&local_28,lVar2,
                    *(undefined8 *)
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) +
                       (longlong)(iVar1 / 100) * 8) + 0x10 + (ulonglong)(uint)(iVar1 % 100) * 0x38))
      ;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8cca6 FUN_142a8cca6 body=299 status=ok
// SIG undefined FUN_142a8cca6(void)

undefined8 FUN_142a8cca6(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) {
    lVar3 = param_1 + 0xe8;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xf0);
    }
    iVar1 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xf8) - 1U &
                             (int)param_3 + ((uint)(param_3 >> 0x20) & 0xfffffff) * 0x17) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0xb0) + (longlong)iVar1 * 0x30;
        if (((*(ulonglong *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar1 * 0x30) ^ param_3) &
            0xfffffffffffffff) == 0) {
          if ((undefined4 *)(lVar3 + 8) != (undefined4 *)0x0 && lVar3 != 0) {
            uVar2 = *(undefined8 *)(*(longlong *)(*param_2 + 0xf0) + 8);
            local_28 = *(undefined4 *)(lVar3 + 8);
            uStack_24 = *(undefined4 *)(lVar3 + 0xc);
            uStack_20 = *(undefined4 *)(lVar3 + 0x10);
            uStack_1c = *(undefined4 *)(lVar3 + 0x14);
            goto LAB_142a8cd60;
          }
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x28);
      } while (iVar1 != -1);
    }
  }
  uVar2 = *(undefined8 *)(*(longlong *)(*param_2 + 0xf0) + 8);
  local_28 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
LAB_142a8cd60:
  FUN_142a84392(uVar2);
  lVar3 = *param_2;
  if (((*(longlong *)(lVar3 + 8) == 0) &&
      ((*(longlong *)(lVar3 + 0xd8) == 0 || (*(int *)(*(longlong *)(lVar3 + 0xd8) + 0x14) == 0))))
     && ((lVar3 = *(longlong *)(lVar3 + 0xe0), lVar3 == 0 || (*(int *)(lVar3 + 0x18) == 0)))) {
    uVar2 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  else {
    uVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 142a8cdd2 FUN_142a8cdd2 body=289 status=ok
// SIG undefined FUN_142a8cdd2(void)

void FUN_142a8cdd2(longlong *param_1,longlong *param_2)

{
  ushort *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_142a84138(*(undefined8 *)(*(longlong *)(*param_2 + 0xf0) + 8),*param_2,&local_38);
  local_28 = 0;
  FUN_142a836ac(param_1[9],&local_38,*(longlong *)(*param_2 + 0xf0) + 0x10,&local_28);
  lVar2 = local_28;
  if (local_28 != 0) {
    iVar4 = FUN_146f18900(param_1[8],local_38);
    if (iVar4 != 0) {
      puVar1 = (ushort *)
               (*(longlong *)(*(longlong *)(param_1[8] + 0x270) + (longlong)(iVar4 / 100) * 8) +
                0x32 + (ulonglong)(uint)(iVar4 % 100) * 0x38);
      *puVar1 = *puVar1 | 0x100;
    }
    uVar3 = (**(code **)(*param_1 + 800))(param_1,lVar2);
    FUN_142a8c9c8(param_1,local_38,2,uVar3);
    (**(code **)(*param_1 + 0x300))(param_1,local_38,2,uVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8cef4 FUN_142a8cef4 body=137 status=ok
// SIG undefined FUN_142a8cef4(void)

void FUN_142a8cef4(longlong *param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_3 & 0x18) != 0) {
    uVar1 = FUN_146f18900(param_1[8],param_2);
    if ((param_3 & 8) != 0) {
      FUN_146f39e8a(param_1,uVar1);
    }
    if ((param_3 & 0x10) != 0) {
      FUN_146f39f12(param_1,uVar1);
    }
  }
  FUN_142a8cbe2(param_1,param_2);
  (**(code **)(*param_1 + 0x308))(param_1,param_2);
  FUN_146f45e3c(param_1[5],param_2);
  FUN_142a8cf7e(param_1,param_2,param_3);
  FUN_146f39b7c(param_1,param_2);
  return;
}



// FUNCTION 142a8cf7e FUN_142a8cf7e body=268 status=ok
// SIG undefined FUN_142a8cf7e(void)

void FUN_142a8cf7e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40));
  if (iVar5 != 0) {
    FUN_146f3c612(*(longlong *)(param_1 + 0x40) + 0x300,&local_40,iVar5);
    if ((longlong)local_38 != 0) {
      lVar7 = 0;
      do {
        uVar2 = *(uint *)(local_40 + lVar7);
        lVar3 = *(longlong *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) +
                 (longlong)((int)uVar2 / 100) * 8);
        lVar6 = (ulonglong)(uint)((int)uVar2 % 100) * 0x38;
        uVar1 = *(ushort *)(lVar3 + 0x32 + lVar6);
        if (((uVar1 & 4) != 0) &&
           ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb8) +
                      (ulonglong)(uVar2 >> 5) * 4) >> (uVar2 & 0x1f) & 1) != 0)) {
          uVar4 = *(undefined8 *)(lVar3 + lVar6);
          *(ushort *)(lVar3 + lVar6 + 0x32) = uVar1 | 0x100;
          FUN_142a8cef4(param_1,uVar4,param_3);
        }
        lVar7 = lVar7 + 4;
      } while ((longlong)local_38 * 4 != lVar7);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8d08c FUN_142a8d08c body=1230 status=ok
// SIG undefined FUN_142a8d08c(void)

void FUN_142a8d08c(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong *plVar2;
  int *piVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_258 [32];
  uint local_238;
  uint local_228;
  uint local_224;
  ulonglong local_220;
  longlong local_218;
  longlong *local_210;
  int *local_208;
  uint local_200;
  int local_1fc;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8 [26];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  byte local_88;
  undefined1 local_78 [8];
  undefined1 *local_70;
  undefined8 local_68;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar5 = FUN_146f18900(param_1[8]);
  if (uVar5 == 0) goto LAB_142a8d103;
  lVar13 = *(longlong *)(*(longlong *)(param_1[8] + 0x270) + (longlong)((int)uVar5 / 100) * 8);
  lVar8 = (ulonglong)(uint)((int)uVar5 % 100) * 0x38;
  if ((*(byte *)(lVar13 + 0x32 + lVar8) & 2) != 0) goto LAB_142a8d103;
  lVar13 = lVar13 + lVar8;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x100000000;
  local_58 = 0;
  local_50 = 0x100000000;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1c8 = 0;
  uStack_1c0 = 0;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  lVar8 = 0x18;
  do {
    *(undefined8 *)((longlong)local_1a8 + lVar8) = 0;
    lVar8 = lVar8 + 0x18;
  } while (lVar8 != 0xd8);
  uStack_a8 = 0;
  local_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0xffffffff00000000;
  local_88 = local_88 & 0xfc;
  local_1f8 = param_1[5];
  plStack_b8 = &local_1f8;
  local_1f0 = *(longlong *)(local_1f8 + 0x28) + 0xd38;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1dc = 0;
  local_1d8 = *(undefined8 *)(*(longlong *)(local_1f8 + 0x28) + 0x810);
  local_1d0 = 0;
  if (*(char *)(*(longlong *)(local_1f8 + 0x28) + 0x12c0) == '\x01') {
    uStack_a8 = *(undefined8 *)(*(longlong *)(local_1f8 + 0x28) + 0x12a0);
  }
  local_218 = lVar13;
  if (*(longlong *)(lVar13 + 0x18) == 0) {
LAB_142a8d297:
    uVar12 = local_68;
    lVar8 = (longlong)(int)local_68;
    uVar6 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,uVar6);
    if (local_68._4_4_ < uVar6) {
      FUN_146f3c6ac(local_78,uVar12 & 0xffffffff);
    }
    puVar9 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar9 = local_78;
    }
    *(ulonglong *)(puVar9 + lVar8 * 8) = (ulonglong)uVar5;
    uVar12 = local_68;
    uVar6 = *(uint *)(lVar13 + 0x28);
    if ((ulonglong)uVar6 != 0) {
      lVar13 = (longlong)(int)local_68;
      uVar7 = (int)local_68 + 1;
      local_68 = CONCAT44(local_68._4_4_,uVar7);
      if (local_68._4_4_ < uVar7) {
        FUN_146f3c6ac(local_78,uVar12 & 0xffffffff);
      }
      puVar9 = local_78;
      if (local_70 != (undefined1 *)0x0) {
        puVar9 = local_70;
      }
      *(ulonglong *)(puVar9 + lVar13 * 8) = (ulonglong)uVar6 | 0x100000000000000;
    }
  }
  else {
    if ((*(byte *)(*(longlong *)(lVar13 + 0x18) + 0x12) & 9) != 0) {
      (**(code **)(*param_1 + 0x2c8))(param_1,param_2);
    }
    bVar4 = (**(code **)(*param_1 + 0x2e0))(param_1,param_2);
    *(ushort *)(lVar13 + 0x32) = *(ushort *)(lVar13 + 0x32) & 0xfdff | (ushort)bVar4 << 9;
    if ((*(longlong *)(lVar13 + 0x18) == 0) || (*(int *)(*(longlong *)(lVar13 + 0x10) + 0xc) == 0))
    goto LAB_142a8d297;
    local_238 = uVar5;
    FUN_142a8e260(&local_1c8,local_78,param_1[8],local_1a8);
    local_1fc = *(int *)(param_1[8] + 0x148);
    local_208 = *(int **)(param_1[8] + 0x138);
    local_200 = local_1fc + 0x1fU >> 5;
    if (local_1fc == 0) {
      local_208 = &local_1fc;
    }
    bVar4 = (byte)uVar5 & 0x1f;
    local_208[uVar5 >> 5] = local_208[uVar5 >> 5] & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  lVar13 = *(longlong *)(param_1[5] + 0x28);
  uVar6 = *(uint *)(lVar13 + 0x870);
  local_220 = (ulonglong)uVar6;
  uVar7 = 0;
  local_224 = 0xffffffff >> (-*(char *)(lVar13 + 0x878) & 0x1fU);
  local_228 = uVar5;
  local_210 = param_1;
  if (local_220 != 0) {
    lVar8 = *(longlong *)(lVar13 + 0x868);
    uVar12 = 0;
    do {
      uVar5 = 0xffffffff;
      if (uVar12 == uVar6 - 1) {
        uVar5 = local_224;
      }
      uVar5 = uVar5 & *(uint *)(lVar8 + uVar12 * 4);
      uVar11 = uVar7;
      if (uVar5 != 0) {
        do {
          if ((uVar5 & 1) != 0) {
            if ((*(uint *)(*(longlong *)(lVar13 + 0x868) + (ulonglong)(uVar11 >> 5) * 4) >>
                 (uVar11 & 0x1f) & 1) == 0) {
              lVar10 = 0;
            }
            else {
              lVar10 = (longlong)(int)uVar11 * 0x28 + *(longlong *)(lVar13 + 0x848);
            }
            FUN_146f47e0c(*(undefined8 *)(lVar10 + 8),local_78,0,1);
          }
          bVar1 = 1 < uVar5;
          uVar5 = uVar5 >> 1;
          uVar11 = uVar11 + 1;
        } while (bVar1);
      }
      uVar12 = uVar12 + 1;
      uVar7 = uVar7 + 0x20;
    } while (uVar12 != local_220);
  }
  plVar2 = local_210;
  FUN_146f3c612(local_210[8] + 0x300,&local_208,local_228);
  piVar3 = local_208;
  lVar13 = (longlong)(int)local_200;
  if (lVar13 != 0) {
    lVar8 = 0;
    do {
      FUN_142a8d08c(plVar2,*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(plVar2[8] + 0x270) +
                              (longlong)(*(int *)((longlong)piVar3 + lVar8) / 100) * 8) +
                            (longlong)(*(int *)((longlong)piVar3 + lVar8) % 100) * 0x38));
      lVar8 = lVar8 + 4;
    } while (lVar13 * 4 != lVar8);
  }
  *(ushort *)(local_218 + 0x32) = *(ushort *)(local_218 + 0x32) & 0xfffc | 2;
  if (((uint)local_1b8 < ((int)uStack_1c0 + 0x1fU & 0xffffffe0)) &&
     ((uStack_1b0 & 0x400000000) == 0)) {
    *(undefined4 *)(local_1c8 + (ulonglong)((uint)local_1b8 >> 5) * 4) = local_1b8._4_4_;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
LAB_142a8d103:
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8d55c FUN_142a8d55c body=696 status=ok
// SIG undefined FUN_142a8d55c(void)

void FUN_142a8d55c(longlong param_1)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_238 [32];
  int local_218;
  ulonglong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  longlong local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  ulonglong uStack_1b0;
  undefined8 local_1a8 [26];
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong *plStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  byte local_88;
  undefined1 local_78 [8];
  longlong local_70;
  undefined8 local_68;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  iVar4 = FUN_146f18900();
  if (iVar4 != 0) {
    local_70 = 0;
    local_68 = 0x100000000;
    local_58 = 0;
    local_50 = 0x100000000;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    lVar6 = 0x18;
    do {
      *(undefined8 *)((longlong)local_1a8 + lVar6) = 0;
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != 0xd8);
    uStack_a8 = 0;
    local_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0xffffffff00000000;
    local_88 = local_88 & 0xfc;
    local_1f8 = *(longlong *)(param_1 + 0x28);
    plStack_b8 = &local_1f8;
    lVar6 = *(longlong *)(local_1f8 + 0x28);
    local_1f0 = lVar6 + 0xd38;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1dc = 0;
    local_1d8 = *(undefined8 *)(lVar6 + 0x810);
    local_1d0 = 0;
    if (*(char *)(lVar6 + 0x12c0) == '\x01') {
      uStack_a8 = *(undefined8 *)(lVar6 + 0x12a0);
    }
    local_218 = iVar4;
    FUN_142a8e0c6(param_1,local_1a8,local_78,&local_1c8);
    if (0 < (int)local_68) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
      uVar2 = *(uint *)(lVar6 + 0x870);
      local_208 = (ulonglong)uVar2;
      cVar1 = *(char *)(lVar6 + 0x878);
      if (local_208 != 0) {
        local_200 = *(longlong *)(lVar6 + 0x868);
        uVar8 = 0;
        uVar10 = 0;
        do {
          uVar7 = 0xffffffff;
          if (uVar8 == uVar2 - 1) {
            uVar7 = 0xffffffff >> (-cVar1 & 0x1fU);
          }
          uVar7 = uVar7 & *(uint *)(local_200 + uVar8 * 4);
          uVar9 = uVar10;
          if (uVar7 != 0) {
            do {
              if ((uVar7 & 1) != 0) {
                if ((*(uint *)(*(longlong *)(lVar6 + 0x868) + (ulonglong)(uVar9 >> 5) * 4) >>
                     (uVar9 & 0x1f) & 1) == 0) {
                  lVar5 = 0;
                }
                else {
                  lVar5 = (longlong)(int)uVar9 * 0x28 + *(longlong *)(lVar6 + 0x848);
                }
                FUN_146f47e0c(*(undefined8 *)(lVar5 + 8),local_78,1,0);
              }
              bVar3 = 1 < uVar7;
              uVar7 = uVar7 >> 1;
              uVar9 = uVar9 + 1;
            } while (bVar3);
          }
          uVar8 = uVar8 + 1;
          uVar10 = uVar10 + 0x20;
        } while (uVar8 != local_208);
      }
    }
    if (((uint)local_1b8 < ((int)uStack_1c0 + 0x1fU & 0xffffffe0)) &&
       ((uStack_1b0 & 0x400000000) == 0)) {
      *(undefined4 *)(local_1c8 + (ulonglong)((uint)local_1b8 >> 5) * 4) = local_1b8._4_4_;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8d816 FUN_142a8d816 body=1556 status=ok
// SIG undefined FUN_142a8d816(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_142a8d816(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  uint *puVar6;
  undefined1 *puVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auStack_1298 [40];
  longlong local_1270;
  undefined1 local_1268 [1536];
  undefined1 *local_c68;
  undefined8 local_c60;
  undefined1 local_c58 [3072];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1298;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x28);
  if (param_2 != 0) {
    lVar23 = *(longlong *)(param_1 + 0x50);
    cVar5 = FUN_146f1a26a(lVar23);
    if (cVar5 == '\0') {
      plVar16 = (longlong *)0x0;
    }
    else {
      plVar16 = (longlong *)
                ((ulonglong)(((uint)param_2 & 0xffffff) << 5) + *(longlong *)(lVar23 + 8));
    }
    local_58 = (undefined1 *)0x0;
    local_50 = 0x18000000000;
    local_c68 = (undefined1 *)0x0;
    local_c60 = 0x18000000000;
    lVar23 = plVar16[1];
    if ((longlong)(int)lVar23 != 0) {
      lVar3 = *plVar16;
      lVar24 = param_1 + 0xb0;
      lVar13 = 0;
      local_1270 = lVar24;
      do {
        uVar20 = *(uint *)(lVar3 + lVar13);
        if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x1b0) +
                      (ulonglong)(uVar20 >> 5) * 4) >> (uVar20 & 0x1f) & 1) != 0) {
          puVar22 = (undefined8 *)
                    ((ulonglong)(uint)((int)uVar20 % 100) * 0x38 +
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x270) +
                     (longlong)((int)uVar20 / 100) * 8));
          iVar18 = FUN_146f40a70(lVar24,puVar22);
          uVar19 = local_50;
          if (iVar18 != 0) {
            lVar24 = (longlong)(int)local_50;
            uVar11 = (int)local_50 + 1;
            local_50 = CONCAT44(local_50._4_4_,uVar11);
            if (local_50._4_4_ < uVar11) {
              FUN_146f40bd6(local_c58,uVar19 & 0xffffffff);
            }
            uVar19 = local_c60;
            puVar7 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar7 = local_c58;
            }
            *(undefined8 *)(puVar7 + lVar24 * 8) = *puVar22;
            lVar24 = (longlong)(int)local_c60;
            uVar11 = (int)local_c60 + 1;
            local_c60 = CONCAT44(local_c60._4_4_,uVar11);
            if (local_c60._4_4_ < uVar11) {
              FUN_146f40ce4(local_1268,uVar19 & 0xffffffff);
            }
            puVar7 = local_c68;
            if (local_c68 == (undefined1 *)0x0) {
              puVar7 = local_1268;
            }
            *(uint *)(puVar7 + lVar24 * 4) = uVar20;
            lVar24 = local_1270;
          }
        }
        lVar13 = lVar13 + 4;
      } while ((longlong)(int)lVar23 * 4 != lVar13);
      lVar23 = (longlong)(int)local_50;
      puVar7 = local_c58;
      if (local_58 != (undefined1 *)0x0) {
        puVar7 = local_58;
      }
      if (lVar23 != 0) {
        lVar24 = 0;
        do {
          FUN_146f284c6(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(puVar7 + lVar24));
          lVar24 = lVar24 + 8;
        } while (lVar23 * 8 != lVar24);
      }
    }
    puVar7 = local_c68;
    if (local_c68 == (undefined1 *)0x0) {
      puVar7 = local_1268;
    }
    if ((longlong)(int)local_c60 != 0) {
      lVar23 = 0;
      do {
        bVar4 = (byte)*(uint *)(puVar7 + lVar23) & 0x1f;
        uVar20 = -2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4;
        uVar19 = (ulonglong)(*(uint *)(puVar7 + lVar23) >> 5);
        puVar1 = (uint *)(*(longlong *)(lVar2 + 0x1080) + uVar19 * 4);
        *puVar1 = *puVar1 & uVar20;
        puVar1 = (uint *)(*(longlong *)(lVar2 + 0x1098) + uVar19 * 4);
        *puVar1 = *puVar1 & uVar20;
        puVar1 = (uint *)(*(longlong *)(lVar2 + 0x10b0) + uVar19 * 4);
        *puVar1 = *puVar1 & uVar20;
        lVar23 = lVar23 + 4;
      } while ((longlong)(int)local_c60 * 4 != lVar23);
    }
    if (local_c68 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_1298);
  }
  puVar1 = (uint *)(param_1 + 0xc0);
  iVar18 = *(int *)(param_1 + 0xd8);
  iVar10 = iVar18;
  if (iVar18 == 0) {
    uVar21 = 1;
    uVar19 = 0;
    iVar15 = 0;
    iVar17 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar20 = *puVar6;
    if (uVar20 == 0) {
      iVar15 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar15 = iVar18 + -1;
      }
      uVar19 = 0;
      uVar9 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar9 = uVar19;
      }
      iVar15 = 0;
      do {
        if (uVar9 == uVar19) goto LAB_142a8d917;
        iVar15 = iVar15 + 0x20;
        uVar20 = puVar6[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar19 = 0;
      iVar15 = 0;
    }
    uVar21 = (ulonglong)(-uVar20 & uVar20);
    uVar9 = uVar21 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar17 = (iVar15 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar18 <= iVar17) {
      iVar17 = iVar18;
    }
  }
  if (iVar17 != iVar18) {
    uVar20 = 0xffffffff;
    do {
      FUN_146f284c6(*(undefined8 *)(param_1 + 0x40),
                    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar17 * 0x30));
      uVar20 = ~(uint)uVar21 & uVar20;
      puVar6 = *(uint **)(param_1 + 0xd0);
      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
        puVar6 = puVar1;
      }
      iVar10 = *(int *)(param_1 + 0xd8);
      iVar17 = (int)uVar19;
      lVar23 = (longlong)iVar17;
      uVar11 = puVar6[lVar23] & uVar20;
      if (uVar11 == 0) {
        iVar12 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar12 = iVar10 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar8 = iVar12;
        if (iVar12 < iVar17) {
          iVar8 = iVar17;
        }
        if (iVar17 < iVar12) {
          lVar24 = 0;
          do {
            uVar11 = puVar6[lVar23 + lVar24 + 1];
            if (uVar11 != 0) {
              uVar19 = (ulonglong)(iVar17 + (int)lVar24 + 1);
              uVar20 = 0xffffffff;
              goto LAB_142a8dcd3;
            }
            iVar15 = iVar15 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar8 - lVar23 != lVar24);
          uVar20 = 0xffffffff;
          lVar23 = (longlong)iVar8;
        }
        uVar19 = lVar23 + 1U & 0xffffffff;
        iVar17 = iVar10;
      }
      else {
LAB_142a8dcd3:
        uVar21 = (ulonglong)(-uVar11 & uVar11);
        uVar9 = uVar21 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar17 = (iVar15 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar17) {
          iVar17 = iVar10;
        }
      }
    } while (iVar17 != iVar18);
  }
LAB_142a8d917:
  if (iVar10 == 0) {
    uVar21 = 1;
    uVar19 = 0;
    iVar18 = 0;
    iVar15 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0xd0);
    if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar20 = *puVar6;
    if (uVar20 == 0) {
      iVar18 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar18 = iVar10 + -1;
      }
      uVar19 = 0;
      uVar9 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar9 = uVar19;
      }
      iVar18 = 0;
      do {
        if (uVar9 == uVar19) goto LAB_142a8dbf9;
        iVar18 = iVar18 + 0x20;
        uVar20 = puVar6[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar19 = 0;
      iVar18 = 0;
    }
    uVar21 = (ulonglong)(-uVar20 & uVar20);
    uVar9 = uVar21 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar15 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar15) {
      iVar15 = iVar10;
    }
  }
  if (iVar15 != iVar10) {
    uVar20 = 0xffffffff;
    do {
      uVar11 = *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x20 + (longlong)iVar15 * 0x30);
      bVar4 = (byte)uVar11 & 0x1f;
      uVar14 = -2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4;
      uVar9 = (ulonglong)(uVar11 >> 5);
      puVar6 = (uint *)(*(longlong *)(lVar2 + 0x1080) + uVar9 * 4);
      *puVar6 = *puVar6 & uVar14;
      puVar6 = (uint *)(*(longlong *)(lVar2 + 0x1098) + uVar9 * 4);
      *puVar6 = *puVar6 & uVar14;
      puVar6 = (uint *)(*(longlong *)(lVar2 + 0x10b0) + uVar9 * 4);
      *puVar6 = *puVar6 & uVar14;
      uVar20 = ~(uint)uVar21 & uVar20;
      puVar6 = *(uint **)(param_1 + 0xd0);
      if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
        puVar6 = puVar1;
      }
      iVar17 = *(int *)(param_1 + 0xd8);
      iVar15 = (int)uVar19;
      lVar23 = (longlong)iVar15;
      uVar11 = puVar6[lVar23] & uVar20;
      if (uVar11 == 0) {
        iVar12 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar12 = iVar17 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar8 = iVar12;
        if (iVar12 < iVar15) {
          iVar8 = iVar15;
        }
        if (iVar15 < iVar12) {
          lVar24 = 0;
          do {
            uVar11 = puVar6[lVar23 + lVar24 + 1];
            if (uVar11 != 0) {
              uVar19 = (ulonglong)(iVar15 + (int)lVar24 + 1);
              uVar20 = 0xffffffff;
              goto LAB_142a8dde6;
            }
            iVar18 = iVar18 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar8 - lVar23 != lVar24);
          uVar20 = 0xffffffff;
          lVar23 = (longlong)iVar8;
        }
        uVar19 = lVar23 + 1U & 0xffffffff;
        iVar15 = iVar17;
      }
      else {
LAB_142a8dde6:
        uVar21 = (ulonglong)(-uVar11 & uVar11);
        uVar9 = uVar21 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar15 = (iVar18 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar17 <= iVar15) {
          iVar15 = iVar17;
        }
      }
    } while (iVar15 != iVar10);
  }
LAB_142a8dbf9:
  if ((local_48 ^ (ulonglong)auStack_1298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_146f40df2(param_1 + 0xb0);
  return;
}



// FUNCTION 142a8de40 FUN_142a8de40 body=644 status=ok
// SIG undefined FUN_142a8de40(void)

void FUN_142a8de40(longlong param_1)

{
  uint *puVar1;
  ushort *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 auStack_288 [32];
  longlong local_268;
  int local_260;
  undefined1 local_258 [512];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x2000000000;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0x100);
    puVar12 = puVar13 + (longlong)*(int *)(param_1 + 0x108) * 2;
    do {
      uVar6 = *puVar13;
      uVar4 = *(undefined4 *)(puVar13 + 1);
      cVar3 = *(char *)((longlong)puVar13 + 0xc);
      uVar7 = FUN_146f18900(*(undefined8 *)(param_1 + 0x40),uVar6);
      if (uVar7 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x40);
        if ((*(short *)(*(longlong *)
                         (*(longlong *)(lVar10 + 0x2b0) + (longlong)((int)uVar7 / 100) * 8) +
                       (longlong)((int)uVar7 % 100) * 2) == 0) || (cVar3 == '\0')) {
          puVar2 = (ushort *)
                   (*(longlong *)(*(longlong *)(lVar10 + 0x270) + (longlong)((int)uVar7 / 100) * 8)
                    + 0x32 + (ulonglong)(uint)((int)uVar7 % 100) * 0x38);
          *puVar2 = *puVar2 | 0x100;
          FUN_142a8cef4(param_1,uVar6,uVar4);
        }
        else {
          uVar11 = 1 << ((byte)uVar7 & 0x1f);
          uVar9 = (ulonglong)(uVar7 >> 5);
          uVar5 = *(uint *)(*(longlong *)(lVar10 + 0xb8) + uVar9 * 4);
          if ((uVar5 >> (uVar7 & 0x1f) & 1) != 0) {
            if ((*(uint *)(*(longlong *)(lVar10 + 0x150) + uVar9 * 4) & uVar11) != 0) {
              *(uint *)(*(longlong *)(lVar10 + 0xb8) + uVar9 * 4) = uVar5 & ~uVar11;
              lVar10 = *(longlong *)(param_1 + 0x40);
            }
            FUN_146f1b984(lVar10 + 0x300,&local_268);
            if ((longlong)local_260 != 0) {
              lVar10 = 0;
              do {
                uVar7 = *(uint *)(local_268 + lVar10);
                if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x150) +
                              (ulonglong)(uVar7 >> 5) * 4) >> (uVar7 & 0x1f) & 1) != 0) {
                  puVar1 = (uint *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0xb8) +
                                   (ulonglong)(uVar7 >> 5) * 4);
                  *puVar1 = *puVar1 & ~(1 << ((byte)uVar7 & 0x1f));
                }
                lVar10 = lVar10 + 4;
              } while ((longlong)local_260 * 4 != lVar10);
            }
          }
          uVar9 = local_50;
          lVar10 = (longlong)(int)local_50;
          uVar7 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar7);
          if (local_50._4_4_ < uVar7) {
            FUN_146f41146(local_258,uVar9 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_258;
          }
          lVar10 = lVar10 * 0x10;
          *(undefined8 *)(puVar8 + lVar10) = uVar6;
          *(undefined4 *)(puVar8 + lVar10 + 8) = uVar4;
          puVar8[lVar10 + 0xc] = 1;
        }
      }
      puVar13 = puVar13 + 2;
    } while (puVar13 != puVar12);
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (*(int *)(param_1 + 0x10c) < 0) {
    FUN_146f4124c(param_1 + 0x100);
  }
  puVar8 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar8 = local_258;
  }
  FUN_146f3a040(param_1 + 0x100,puVar8,local_50 & 0xffffffff);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8e0c6 FUN_142a8e0c6 body=409 status=ok
// SIG undefined FUN_142a8e0c6(void)

void FUN_142a8e0c6(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  uint local_68;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_5 != 0) {
    lVar6 = param_1[8];
    lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x270) + (longlong)((int)param_5 / 100) * 8);
    lVar3 = (ulonglong)(uint)((int)param_5 % 100) * 0x38;
    if ((*(byte *)(lVar4 + 0x32 + lVar3) & 2) == 0) {
      puVar5 = (undefined8 *)(lVar4 + lVar3);
      if (puVar5[3] != 0) {
        if ((*(byte *)(puVar5[3] + 0x12) & 9) != 0) {
          (**(code **)(*param_1 + 0x2c8))(param_1,*puVar5);
        }
        bVar2 = (**(code **)(*param_1 + 0x2e0))(param_1,*puVar5);
        *(ushort *)((longlong)puVar5 + 0x32) =
             *(ushort *)((longlong)puVar5 + 0x32) & 0xfdff | (ushort)bVar2 << 9;
        local_68 = param_5;
        FUN_142a8e260(param_4,param_3,param_1[8],param_2);
        local_4c = *(int *)(param_1[8] + 0x148);
        local_58 = *(int **)(param_1[8] + 0x138);
        local_50 = local_4c + 0x1fU >> 5;
        if (local_4c == 0) {
          local_58 = &local_4c;
        }
        bVar2 = (byte)param_5 & 0x1f;
        local_58[param_5 >> 5] =
             local_58[param_5 >> 5] & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
        lVar6 = param_1[8];
      }
      FUN_146f3c612(lVar6 + 0x300,&local_58,param_5);
      piVar1 = local_58;
      lVar6 = (longlong)(int)local_50;
      if (lVar6 != 0) {
        lVar4 = 0;
        do {
          local_68 = *(uint *)((longlong)piVar1 + lVar4);
          FUN_142a8e0c6(param_1,param_2,param_3,param_4);
          lVar4 = lVar4 + 4;
        } while (lVar6 * 4 != lVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8e260 FUN_142a8e260 body=1682 status=ok
// SIG undefined FUN_142a8e260(void)

undefined8
FUN_142a8e260(longlong *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint **ppuVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_158 [32];
  longlong *local_138;
  uint local_12c;
  longlong *local_128;
  longlong *local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  ulonglong local_100;
  uint local_f4;
  undefined4 *local_f0;
  longlong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  uint **local_b8;
  longlong local_b0;
  uint *local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  ulonglong uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  cVar5 = DAT_14c999940;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  uVar14 = 0;
  uVar12 = 0;
  if ((*(uint *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(param_5 >> 5) * 4) >> (param_5 & 0x1f)
      & 1) == 0) goto LAB_142a8e37b;
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x270) + (longlong)((int)param_5 / 100) * 8);
  lVar18 = (ulonglong)(uint)((int)param_5 % 100) * 0x38;
  lVar9 = lVar2 + lVar18;
  if ((*(longlong *)(lVar2 + 0x18 + lVar18) == 0) ||
     (*(int *)(*(longlong *)(lVar9 + 0x10) + 0xc) == 0)) {
    uVar17 = *(uint *)(lVar9 + 0x28);
    if (((ulonglong)uVar17 != 0) &&
       ((((*(byte *)(lVar9 + 0x32) & 1) != 0 &&
         (uVar14 = uVar12,
         (*(uint *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar17 >> 5) * 4) >> (uVar17 & 0x1f)
         & 1) != 0)) &&
        ((*(byte *)(*(longlong *)
                     (*(longlong *)(param_3 + 0x270) + (longlong)((int)uVar17 / 100) * 8) + 0x32 +
                   (ulonglong)(uint)((int)uVar17 % 100) * 0x38) & 1) != 0)))) {
      iVar7 = *(int *)(param_2 + 0x10);
      *(uint *)(param_2 + 0x10) = iVar7 + 1U;
      if (*(uint *)(param_2 + 0x14) < iVar7 + 1U) {
        FUN_146f3c6ac(param_2,iVar7);
      }
      lVar9 = *(longlong *)(param_2 + 8);
      if (*(longlong *)(param_2 + 8) == 0) {
        lVar9 = param_2;
      }
      *(ulonglong *)(lVar9 + (longlong)iVar7 * 8) = (ulonglong)uVar17 | 0x100000000000000;
    }
    goto LAB_142a8e37b;
  }
  uVar1 = *(ushort *)(lVar9 + 0x32);
  uVar19 = (uint)uVar1;
  *(ushort *)(lVar9 + 0x32) = uVar1 & 0xffbf;
  local_110 = param_4;
  lVar8 = FUN_146f3b376(param_2,param_5,*(undefined4 *)(*(longlong *)(lVar9 + 0x10) + 0x24));
  lVar2 = local_110;
  uVar17 = *(int *)(*(longlong *)(lVar9 + 0x10) + 0x24) + 0x1f;
  local_e8 = param_2 + 0x18;
  lVar18 = *(longlong *)(param_2 + 0x20);
  if (*(longlong *)(param_2 + 0x20) == 0) {
    lVar18 = local_e8;
  }
  local_f0 = (undefined4 *)(lVar18 + (ulonglong)(*(uint *)(lVar8 + 4) & 0xffffff) * 4);
  *param_1 = (longlong)local_f0;
  uVar15 = uVar17 & 0xffffffe0;
  *(uint *)(param_1 + 1) = uVar15;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (0x1f < uVar17) {
    *(undefined4 *)((longlong)param_1 + 0x14) = *local_f0;
  }
  plVar3 = *(longlong **)(lVar9 + 0x10);
  lVar18 = *(longlong *)
            (*(longlong *)(*(longlong *)(param_3 + 0x290) + (longlong)((int)param_5 / 100) * 8) +
            (ulonglong)(uint)((int)param_5 % 100) * 8);
  local_12c = uVar15;
  local_120 = param_1;
  if ((char)((uVar1 & 0x40) >> 6) == '\0' && cVar5 == '\0') {
    local_118 = **(longlong **)(lVar9 + 0x18);
    local_b0 = *plVar3;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = (uint *)0x0;
    uStack_a0 = 0;
    uVar6 = 0;
    if ((*(byte *)((longlong)plVar3 + 0x3c) & 4) == 0) {
      ppuVar10 = (uint **)0x0;
    }
    else {
      uVar11 = *(int *)((longlong)plVar3 + 0x24) + 0x1f;
      ppuVar10 = &local_a8;
      local_a8 = (uint *)((ulonglong)*(uint *)(plVar3 + 5) + lVar18);
      uStack_a0 = (ulonglong)uVar11 & 0xffffffffffffffe0;
      if (0x1f < uVar11) {
        local_98 = (ulonglong)*(uint *)((ulonglong)*(uint *)(plVar3 + 5) + lVar18) << 0x20;
      }
    }
    local_108 = plVar3;
    if ((int)plVar3[1] != 0) {
      local_f4 = (uint)uVar1;
      uVar16 = 0;
      local_e0 = (ulonglong)uVar17;
      local_d8 = lVar8;
      local_d0 = lVar9;
      local_c8 = param_3;
      local_c0 = param_2;
      local_b8 = ppuVar10;
      do {
        local_128 = *(longlong **)(local_b0 + uVar16 * 8);
        uVar13 = -(ulonglong)*(ushort *)((longlong)local_128 + 0x7a) &
                 ((ulonglong)*(ushort *)((longlong)local_128 + 0x7a) + lVar18) - 1;
        local_100 = uVar16;
        cVar5 = FUN_142a8f033(local_120,local_b8,*(undefined8 *)(local_118 + uVar16 * 8));
        if (cVar5 != '\0') {
          if (((*(byte *)(local_128 + 0x17) & 1) == 0) && (DAT_14c75f473 != '\0')) {
            uVar1 = *(ushort *)((longlong)local_128 + 0x86);
            local_88 = (ulonglong)*(uint *)(local_128 + 0x11) +
                       *(longlong *)(local_118 + local_100 * 8);
            uStack_80 = (ulonglong)CONCAT24(uVar1,uVar1 + 0x1f >> 5);
            if (uVar1 == 0) {
              local_88 = (longlong)&uStack_80 + 4;
            }
            *(longlong **)(local_110 + 0x108) = &local_88;
            local_138 = local_128;
            FUN_146f3a8e4(local_110,&local_88,uVar13,*(undefined8 *)(local_118 + local_100 * 8));
          }
          else {
            uVar1 = *(ushort *)((longlong)local_128 + 0x7c);
            if (uVar1 != 0) {
              lVar9 = *(longlong *)(local_118 + local_100 * 8);
              lVar18 = *local_128;
              lVar8 = local_128[2];
              lVar20 = 0;
              do {
                uStack_80 = 0;
                local_78 = 0;
                local_88 = *(longlong *)(lVar8 + 8 + lVar20 * 2);
                local_70 = (ulonglong)*(uint *)(lVar18 + lVar20) + lVar9;
                local_68 = *(uint *)(lVar18 + 4 + lVar20) + uVar13;
                (**(code **)(*(longlong *)(lVar8 + lVar20 * 2) + 0x28))(lVar2,&local_88);
                lVar20 = lVar20 + 8;
              } while ((ulonglong)uVar1 * 8 != lVar20);
            }
          }
        }
        lVar18 = uVar13 + *(uint *)((longlong)local_128 + 0x74);
        uVar16 = local_100 + 1;
      } while (uVar16 < *(uint *)(local_108 + 1));
      uVar15 = *(uint *)(local_120 + 1);
      uVar6 = *(uint *)(local_120 + 2);
      uVar17 = (uint)local_e0;
      ppuVar10 = local_b8;
      lVar9 = local_d0;
      param_3 = local_c8;
      lVar8 = local_d8;
      param_2 = local_c0;
      uVar19 = local_f4;
    }
    if ((uVar6 < (uVar15 + 0x1f & 0xffffffe0)) && ((*(uint *)((longlong)local_120 + 0x1c) & 4) == 0)
       ) {
      *(undefined4 *)(*local_120 + (ulonglong)(uVar6 >> 5) * 4) =
           *(undefined4 *)((longlong)local_120 + 0x14);
    }
    if (((ppuVar10 != (uint **)0x0) &&
        (*(uint *)(ppuVar10 + 2) < (*(int *)(ppuVar10 + 1) + 0x1fU & 0xffffffe0))) &&
       ((*(uint *)((longlong)ppuVar10 + 0x1c) & 4) == 0)) {
      (*ppuVar10)[*(uint *)(ppuVar10 + 2) >> 5] = *(uint *)((longlong)ppuVar10 + 0x14);
    }
    if (((uint)local_98 < ((int)uStack_a0 + 0x1fU & 0xffffffe0)) && ((uStack_90 & 0x400000000) == 0)
       ) {
      local_a8[(uint)local_98 >> 5] = local_98._4_4_;
    }
  }
  else {
    local_138 = plVar3;
    FUN_146f3aea8(local_110,lVar18,param_1);
  }
  if (local_12c != 0) {
    iVar7 = 0;
    uVar16 = 0;
LAB_142a8e7a4:
    uVar15 = local_f0[uVar16];
    if (uVar15 == 0) goto code_r0x000142a8e7ac;
    iVar4 = 0;
    if (uVar15 != 0) {
      for (; (uVar15 >> iVar4 & 1) == 0; iVar4 = iVar4 + 1) {
      }
    }
    uVar17 = (uint)((uint)(iVar4 - iVar7) < local_12c) << 0x19;
    goto LAB_142a8e7cb;
  }
LAB_142a8e7b7:
  uVar17 = 0;
LAB_142a8e7cb:
  *(uint *)(lVar8 + 4) = *(uint *)(lVar8 + 4) & 0xfdffffff | uVar17;
  uVar17 = *(uint *)(lVar9 + 0x28);
  if (((ulonglong)uVar17 == 0) ||
     ((*(uint *)(*(longlong *)(param_3 + 0xb8) + (ulonglong)(uVar17 >> 5) * 4) >> (uVar17 & 0x1f) &
      1) == 0)) {
    uVar14 = 1;
    if ((uVar19 & 1) != 0) goto LAB_142a8e37b;
LAB_142a8e877:
    lVar9 = *(longlong *)(param_2 + 8);
    if (*(longlong *)(param_2 + 8) == 0) {
      lVar9 = param_2;
    }
    FUN_146f3c83a(local_e8,*(uint *)(lVar9 + 4 + (longlong)(*(int *)(param_2 + 0x10) + -1) * 8) &
                           0xffffff);
    *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + -1;
  }
  else {
    if (((uVar19 & 1) == 0) ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x270) + (longlong)((int)uVar17 / 100) * 8)
                   + 0x32 + (ulonglong)(uint)((int)uVar17 % 100) * 0x38) & 1) == 0))
    goto LAB_142a8e877;
    iVar7 = *(int *)(param_2 + 0x10);
    *(uint *)(param_2 + 0x10) = iVar7 + 1U;
    if (*(uint *)(param_2 + 0x14) < iVar7 + 1U) {
      FUN_146f3c6ac(param_2,iVar7);
    }
    lVar9 = *(longlong *)(param_2 + 8);
    if (*(longlong *)(param_2 + 8) == 0) {
      lVar9 = param_2;
    }
    *(ulonglong *)(lVar9 + (longlong)iVar7 * 8) = (ulonglong)uVar17 | 0x100000000000000;
  }
  uVar14 = 1;
LAB_142a8e37b:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
code_r0x000142a8e7ac:
  uVar16 = uVar16 + 1;
  iVar7 = iVar7 + -0x20;
  if (uVar17 >> 5 == uVar16) goto LAB_142a8e7b7;
  goto LAB_142a8e7a4;
}



// FUNCTION 142a8e8f3 FUN_142a8e8f3 body=69 status=ok
// SIG undefined FUN_142a8e8f3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8e8f3(void)

{
  _DAT_14c999910 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8e935. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999918,1);
  return;
}



// FUNCTION 142a8e938 FUN_142a8e938 body=69 status=ok
// SIG undefined FUN_142a8e938(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8e938(void)

{
  _DAT_14c999920 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8e97a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999928,1);
  return;
}



// FUNCTION 142a8e97e FUN_142a8e97e body=170 status=ok
// SIG undefined FUN_142a8e97e(void)

void FUN_142a8e97e(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ushort *)((longlong)param_3 + 0x7c);
  if (uVar1 != 0) {
    lVar2 = *param_3;
    lVar3 = param_3[2];
    lVar4 = 0;
    do {
      local_58 = 0;
      local_60 = 0;
      local_68 = *(undefined8 *)(lVar3 + 8 + lVar4 * 2);
      local_50 = (ulonglong)*(uint *)(lVar2 + 4 + lVar4) + param_2;
      (**(code **)(*(longlong *)(lVar3 + lVar4 * 2) + 8))(param_1,&local_68);
      lVar4 = lVar4 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8ea2a FUN_142a8ea2a body=183 status=ok
// SIG undefined FUN_142a8ea2a(void)

void FUN_142a8ea2a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(ushort *)((longlong)param_3 + 0x7c);
  if (uVar1 != 0) {
    lVar2 = *param_3;
    lVar3 = param_3[2];
    lVar4 = param_3[0xd];
    lVar5 = 0;
    do {
      FUN_146f5b83a(param_1,*(undefined8 *)(lVar4 + lVar5));
      local_58 = 0;
      local_60 = 0;
      local_68 = *(undefined8 *)(lVar3 + 8 + lVar5 * 2);
      local_50 = (ulonglong)*(uint *)(lVar2 + 4 + lVar5) + param_2;
      (**(code **)(*(longlong *)(lVar3 + lVar5 * 2) + 0x10))(param_1,&local_68);
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8eae2 FUN_142a8eae2 body=180 status=ok
// SIG undefined FUN_142a8eae2(void)

void FUN_142a8eae2(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)((longlong)param_4 + 0x7c);
  if (uVar1 != 0) {
    lVar2 = *param_4;
    lVar3 = param_4[2];
    lVar5 = 0;
    do {
      local_60 = 0;
      local_68 = 0;
      local_70 = *(undefined8 *)(lVar3 + 8 + lVar5 * 2);
      uVar4 = (ulonglong)*(uint *)(lVar2 + 4 + lVar5);
      local_58 = param_2 + uVar4;
      local_50 = uVar4 + param_3;
      (**(code **)(*(longlong *)(lVar3 + lVar5 * 2) + 0x18))(param_1,&local_70);
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8eb98 FUN_142a8eb98 body=196 status=ok
// SIG undefined FUN_142a8eb98(void)

void FUN_142a8eb98(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(ushort *)((longlong)param_4 + 0x7c);
  if (uVar1 != 0) {
    lVar2 = *param_4;
    lVar3 = param_4[2];
    lVar4 = param_4[0xd];
    lVar6 = 0;
    do {
      FUN_146f5b83a(param_1,*(undefined8 *)(lVar4 + lVar6));
      local_60 = 0;
      local_68 = 0;
      local_70 = *(undefined8 *)(lVar3 + 8 + lVar6 * 2);
      uVar5 = (ulonglong)*(uint *)(lVar2 + 4 + lVar6);
      local_58 = param_2 + uVar5;
      local_50 = uVar5 + param_3;
      (**(code **)(*(longlong *)(lVar3 + lVar6 * 2) + 0x20))(param_1,&local_70);
      lVar6 = lVar6 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8ec5e FUN_142a8ec5e body=316 status=ok
// SIG undefined FUN_142a8ec5e(void)

void FUN_142a8ec5e(undefined8 param_1,longlong *param_2,int param_3,longlong param_4,
                  longlong *param_5)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined4 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ushort *)((longlong)param_5 + 0x7c);
  local_70 = param_4;
  if (uVar1 != 0) {
    local_78 = *param_5;
    local_80 = param_5[2];
    local_88 = param_5[0xd];
    uVar5 = 0;
    do {
      lVar2 = param_5[1];
      uVar4 = (uint)*(ushort *)(lVar2 + uVar5 * 2) + param_3;
      if (*(short *)(lVar2 + 2 + uVar5 * 2) == 1) {
        if ((*(uint *)(*param_2 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
LAB_142a8ed09:
          FUN_146f5b83a(param_1);
          local_68 = *(undefined8 *)(local_80 + 8 + uVar5 * 8);
          local_50 = (ulonglong)*(uint *)(local_78 + 4 + uVar5 * 4) + local_70;
          local_60 = (ulonglong)CONCAT24(*(undefined2 *)(lVar2 + 2 + uVar5 * 2),uVar4);
          local_58 = 0;
          (**(code **)(*(longlong *)(local_80 + uVar5 * 8) + 0x10))(param_1,&local_68);
        }
      }
      else {
        cVar3 = FUN_146f0ff32(*param_2,*(undefined4 *)((longlong)param_2 + 0xc),uVar4);
        if (cVar3 != '\0') goto LAB_142a8ed09;
      }
      uVar5 = uVar5 + 2;
    } while ((uint)uVar1 * 2 != uVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8ed9c FUN_142a8ed9c body=323 status=ok
// SIG undefined FUN_142a8ed9c(void)

void FUN_142a8ed9c(undefined8 param_1,longlong *param_2,int param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(ushort *)((longlong)param_6 + 0x7c);
  local_80 = param_1;
  local_78 = param_4;
  if (uVar1 != 0) {
    local_88 = *param_6;
    lVar2 = param_6[2];
    uVar7 = 0;
    do {
      lVar3 = param_6[1];
      uVar6 = (uint)*(ushort *)(lVar3 + uVar7 * 2) + param_3;
      if (*(short *)(lVar3 + 2 + uVar7 * 2) == 1) {
        if ((*(uint *)(*param_2 + (ulonglong)(uVar6 >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
LAB_142a8ee30:
          local_70 = *(undefined8 *)(lVar2 + 8 + uVar7 * 8);
          uVar5 = (ulonglong)*(uint *)(local_88 + 4 + uVar7 * 4);
          local_58 = local_78 + uVar5;
          local_50 = uVar5 + param_5;
          local_68 = (ulonglong)CONCAT24(*(undefined2 *)(lVar3 + 2 + uVar7 * 2),uVar6);
          local_60 = 0;
          (**(code **)(*(longlong *)(lVar2 + uVar7 * 8) + 0x18))(local_80,&local_70);
        }
      }
      else {
        cVar4 = FUN_146f0ff32(*param_2,*(undefined4 *)((longlong)param_2 + 0xc),uVar6);
        if (cVar4 != '\0') goto LAB_142a8ee30;
      }
      uVar7 = uVar7 + 2;
    } while ((uint)uVar1 * 2 != uVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8eee0 FUN_142a8eee0 body=338 status=ok
// SIG undefined FUN_142a8eee0(void)

void FUN_142a8eee0(undefined8 param_1,longlong *param_2,int param_3,longlong param_4,
                  longlong param_5,longlong *param_6)

{
  ushort uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [40];
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(ushort *)((longlong)param_6 + 0x7c);
  local_78 = param_4;
  if (uVar1 != 0) {
    local_80 = *param_6;
    local_88 = param_6[2];
    local_90 = param_6[0xd];
    uVar6 = 0;
    do {
      lVar2 = param_6[1];
      uVar5 = (uint)*(ushort *)(lVar2 + uVar6 * 2) + param_3;
      if (*(short *)(lVar2 + 2 + uVar6 * 2) == 1) {
        if ((*(uint *)(*param_2 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0) {
LAB_142a8ef8e:
          FUN_146f5b83a(param_1,*(undefined8 *)(local_90 + uVar6 * 4));
          local_70 = *(undefined8 *)(local_88 + 8 + uVar6 * 8);
          uVar4 = (ulonglong)*(uint *)(local_80 + 4 + uVar6 * 4);
          local_58 = local_78 + uVar4;
          local_50 = uVar4 + param_5;
          local_68 = (ulonglong)CONCAT24(*(undefined2 *)(lVar2 + 2 + uVar6 * 2),uVar5);
          local_60 = 0;
          (**(code **)(*(longlong *)(local_88 + uVar6 * 8) + 0x20))(param_1,&local_70);
        }
      }
      else {
        cVar3 = FUN_146f0ff32(*param_2,*(undefined4 *)((longlong)param_2 + 0xc));
        if (cVar3 != '\0') goto LAB_142a8ef8e;
      }
      uVar6 = uVar6 + 2;
    } while ((uint)uVar1 * 2 != uVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8f033 FUN_142a8f033 body=201 status=ok
// SIG undefined FUN_142a8f033(void)

uint FUN_142a8f033(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ushort uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)(param_4 + 0x86);
  if (uVar1 != 0) {
    puVar3 = (undefined4 *)((ulonglong)*(uint *)(param_4 + 0x88) + param_3);
    uVar4 = (uint)uVar1;
    if (uVar1 < 0x21) {
      FUN_146f5435e(param_1,*puVar3,uVar4);
    }
    else {
      FUN_146f59ca6(param_1,puVar3,0,uVar4);
    }
    if (param_2 != 0) {
      if ((*(byte *)(param_4 + 0xb8) & 2) == 0) {
        FUN_146f5b2fa(param_2,(uVar4 + *(int *)(param_2 + 0x10)) - *(int *)(param_2 + 0xc));
      }
      else {
        puVar3 = (undefined4 *)
                 ((ulonglong)
                  ((*(ushort *)(param_4 + 0x86) + 0x1f >> 3 & 0xfffffffc) + *(int *)(param_4 + 0x88)
                  ) + param_3);
        if (uVar1 < 0x21) {
          FUN_146f5435e(param_2,*puVar3,uVar4);
        }
        else {
          FUN_146f59ca6(param_2,puVar3,0,uVar4);
        }
      }
    }
  }
  if ((*(byte *)(param_4 + 0xb9) & 8) == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (ulonglong)*(uint *)(param_4 + 0x88) - 4;
  }
  return *(uint *)(param_3 + lVar2) >> 0x1f;
}



// FUNCTION 142a8f0fc FUN_142a8f0fc body=612 status=ok
// SIG undefined FUN_142a8f0fc(void)

void FUN_142a8f0fc(longlong param_1,int *param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  uint local_bc;
  longlong *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  int *local_98;
  uint local_90;
  int local_8c;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined4 local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    local_b0 = *param_4;
    local_8c = *(int *)((longlong)param_4 + 0x24);
    local_90 = local_8c + 0x1fU >> 5;
    local_98 = param_2;
    if (local_8c == 0) {
      local_98 = &local_8c;
    }
    *(int ***)(param_1 + 0x108) = &local_98;
    local_c8 = param_1;
    FUN_146f5b12d(*(undefined8 *)(param_1 + 0xe0),param_2,*(undefined4 *)((longlong)param_4 + 0x24),
                  0);
    if ((int)param_4[1] != 0) {
      local_bc = *(uint *)(local_c8 + 0x120);
      uVar5 = 0;
      iVar8 = 0;
      local_b8 = param_4;
      do {
        plVar2 = *(longlong **)(local_b0 + uVar5 * 8);
        uVar6 = -(ulonglong)*(ushort *)((longlong)plVar2 + 0x7a) &
                (param_3 + (ulonglong)*(ushort *)((longlong)plVar2 + 0x7a)) - 1;
        local_a8 = uVar5;
        if ((*(byte *)(plVar2 + 0x17) & 1) == 0) {
          uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
          if (uVar1 != 0) {
            local_a0 = *plVar2;
            lVar3 = plVar2[2];
            lVar9 = 0;
            do {
              lVar10 = plVar2[1];
              uVar7 = (uint)*(ushort *)(lVar10 + lVar9) + iVar8;
              if (*(short *)(lVar10 + 2 + lVar9) == 1) {
                if (((uint)local_98[uVar7 >> 5] >> (uVar7 & 0x1f) & 1) != 0) {
LAB_142a8f261:
                  local_88 = *(undefined8 *)(lVar3 + 8 + lVar9 * 4);
                  local_70 = *(uint *)(local_a0 + 4 + lVar9 * 2) + uVar6;
                  uStack_80 = (ulonglong)CONCAT24(*(undefined2 *)(lVar10 + 2 + lVar9),uVar7);
                  local_78 = 0;
                  (**(code **)(*(longlong *)(lVar3 + lVar9 * 4) + 8))(local_c8,&local_88);
                }
              }
              else {
                cVar4 = FUN_146f0ff32(local_98,local_8c,uVar7);
                if (cVar4 != '\0') goto LAB_142a8f261;
              }
              lVar9 = lVar9 + 4;
            } while ((ulonglong)uVar1 * 4 != lVar9);
          }
        }
        else if (((local_bc & 1) != 0) && (uVar1 = *(ushort *)((longlong)plVar2 + 0x7c), uVar1 != 0)
                ) {
          lVar3 = *plVar2;
          lVar9 = plVar2[2];
          lVar10 = 0;
          do {
            uStack_80 = 0;
            local_78 = 0;
            local_88 = *(undefined8 *)(lVar9 + 8 + lVar10 * 2);
            local_70 = *(uint *)(lVar3 + 4 + lVar10) + uVar6;
            (**(code **)(*(longlong *)(lVar9 + lVar10 * 2) + 8))(local_c8,&local_88);
            lVar10 = lVar10 + 8;
          } while ((ulonglong)uVar1 * 8 != lVar10);
        }
        param_3 = uVar6 + *(uint *)((longlong)plVar2 + 0x74);
        iVar8 = iVar8 + (uint)*(ushort *)((longlong)plVar2 + 0x86);
        uVar5 = local_a8 + 1;
      } while (uVar5 < *(uint *)(local_b8 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8f362 FUN_142a8f362 body=350 status=ok
// SIG undefined FUN_142a8f362(void)

void FUN_142a8f362(longlong param_1,int *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    lVar2 = *param_4;
    local_4c = *(int *)((longlong)param_4 + 0x24);
    local_50 = local_4c + 0x1fU >> 5;
    if (local_4c == 0) {
      local_58 = &local_4c;
    }
    else {
      param_2[local_50 - 1] =
           (uint)(param_2[local_50 - 1] << (-(char)local_4c & 0x1fU)) >> (-(char)local_4c & 0x1fU);
      local_58 = param_2;
    }
    *(int ***)(param_1 + 0x108) = &local_58;
    FUN_146f5b7da(param_1,L"ChangeMask");
    iVar5 = 0;
    FUN_146f5b1d3(*(undefined8 *)(param_1 + 0xd8),param_2,*(undefined4 *)((longlong)param_4 + 0x24),
                  0);
    if ((int)param_4[1] != 0) {
      uVar1 = *(uint *)(param_1 + 0x120);
      uVar6 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + uVar6 * 8);
        uVar4 = -(ulonglong)*(ushort *)(lVar3 + 0x7a) &
                (param_3 + (ulonglong)*(ushort *)(lVar3 + 0x7a)) - 1;
        FUN_146f5b83a(param_1,*(undefined8 *)(lVar3 + 0x60));
        if ((*(byte *)(lVar3 + 0xb8) & 1) == 0) {
          local_68 = lVar3;
          FUN_142a8ec5e(param_1,&local_58,iVar5,uVar4);
        }
        else if ((uVar1 & 1) != 0) {
          FUN_142a8ea2a(param_1,uVar4,lVar3);
        }
        param_3 = uVar4 + *(uint *)(lVar3 + 0x74);
        iVar5 = iVar5 + (uint)*(ushort *)(lVar3 + 0x86);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_4 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8f4c2 FUN_142a8f4c2 body=479 status=ok
// SIG undefined FUN_142a8f4c2(void)

void FUN_142a8f4c2(longlong param_1,int *param_2,longlong param_3,longlong *param_4)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  int local_b4;
  longlong *local_b0;
  longlong local_a8;
  ulonglong local_a0;
  int *local_98;
  uint local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14c75f472 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
  }
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    local_a8 = *param_4;
    local_8c = *(int *)((longlong)param_4 + 0x24);
    local_90 = local_8c + 0x1fU >> 5;
    local_98 = param_2;
    if (local_8c == 0) {
      local_98 = &local_8c;
    }
    *(int ***)(param_1 + 0x108) = &local_98;
    FUN_146f5b12d(*(undefined8 *)(param_1 + 0xe0),param_2,*(undefined4 *)((longlong)param_4 + 0x24),
                  1);
    if ((int)param_4[1] != 0) {
      uVar7 = 0;
      local_b0 = param_4;
      iVar6 = 0;
      do {
        local_b4 = iVar6;
        plVar2 = *(longlong **)(local_a8 + uVar7 * 8);
        uVar8 = -(ulonglong)*(ushort *)((longlong)plVar2 + 0x7a) &
                (param_3 + (ulonglong)*(ushort *)((longlong)plVar2 + 0x7a)) - 1;
        lVar3 = plVar2[0x18];
        local_a0 = uVar7;
        if ((*(byte *)(plVar2 + 0x17) & 1) == 0) {
          local_c8 = lVar3;
          local_c0 = plVar2;
          FUN_142a8ed9c(param_1,&local_98,local_b4,uVar8);
        }
        else {
          uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
          if (uVar1 != 0) {
            lVar4 = *plVar2;
            lVar5 = plVar2[2];
            lVar9 = 0;
            do {
              uStack_80 = 0;
              local_78 = 0;
              local_88 = *(undefined8 *)(lVar5 + 8 + lVar9 * 2);
              local_70 = *(uint *)(lVar4 + 4 + lVar9) + uVar8;
              local_68 = (ulonglong)*(uint *)(lVar4 + 4 + lVar9) + lVar3;
              (**(code **)(*(longlong *)(lVar5 + lVar9 * 2) + 0x18))(param_1,&local_88);
              lVar9 = lVar9 + 8;
            } while ((ulonglong)uVar1 * 8 != lVar9);
          }
        }
        param_3 = uVar8 + *(uint *)((longlong)plVar2 + 0x74);
        uVar7 = local_a0 + 1;
        iVar6 = local_b4 + (uint)*(ushort *)((longlong)plVar2 + 0x86);
      } while (uVar7 < *(uint *)(local_b0 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8f6ce FUN_142a8f6ce body=404 status=ok
// SIG undefined FUN_142a8f6ce(void)

void FUN_142a8f6ce(longlong param_1,int *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  ulonglong uVar4;
  void *_Dst;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c75f472 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
  }
  if (*(int *)((longlong)param_4 + 0xc) != 0) {
    lVar1 = *param_4;
    local_4c = *(int *)((longlong)param_4 + 0x24);
    local_50 = local_4c + 0x1fU >> 5;
    if (local_4c == 0) {
      local_58 = &local_4c;
    }
    else {
      param_2[local_50 - 1] =
           (uint)(param_2[local_50 - 1] << (-(char)local_4c & 0x1fU)) >> (-(char)local_4c & 0x1fU);
      local_58 = param_2;
    }
    *(int ***)(param_1 + 0x108) = &local_58;
    FUN_146f5b1d3(*(undefined8 *)(param_1 + 0xd8),param_2,*(undefined4 *)((longlong)param_4 + 0x24),
                  1);
    if ((int)param_4[1] != 0) {
      uVar4 = 0;
      iVar3 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
        _Dst = (void *)(-(ulonglong)*(ushort *)(lVar2 + 0x7a) &
                       (param_3 + (ulonglong)*(ushort *)(lVar2 + 0x7a)) - 1);
        if ((ulonglong)*(uint *)(lVar2 + 0x74) != 0) {
          _Src = *(void **)(lVar2 + 0xc0);
          memcpy(_Dst,_Src,(ulonglong)*(uint *)(lVar2 + 0x74));
          if ((*(byte *)(lVar2 + 0xb8) & 0x40) != 0) {
            FUN_146f3b482(param_1,_Dst,_Src,lVar2);
          }
        }
        if ((*(byte *)(lVar2 + 0xb8) & 1) == 0) {
          local_68 = *(undefined8 *)(lVar2 + 0xc0);
          local_60 = lVar2;
          FUN_142a8eee0(param_1,&local_58,iVar3,_Dst);
        }
        else {
          FUN_142a8eb98(param_1,_Dst,*(undefined8 *)(lVar2 + 0xc0),lVar2);
        }
        param_3 = (longlong)_Dst + (ulonglong)*(uint *)(lVar2 + 0x74);
        iVar3 = iVar3 + (uint)*(ushort *)(lVar2 + 0x86);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_4 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8f884 FUN_142a8f884 body=494 status=ok
// SIG undefined FUN_142a8f884(void)

void FUN_142a8f884(longlong param_1,int *param_2,longlong param_3,longlong param_4,longlong *param_5
                  )

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  longlong *local_c0;
  longlong local_b8;
  uint local_ac;
  longlong local_a8;
  ulonglong local_a0;
  int *local_98;
  uint local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    local_a8 = *param_5;
    local_8c = *(int *)((longlong)param_5 + 0x24);
    local_90 = local_8c + 0x1fU >> 5;
    local_98 = param_2;
    if (local_8c == 0) {
      local_98 = &local_8c;
    }
    *(int ***)(param_1 + 0x108) = &local_98;
    uVar8 = 0;
    local_b8 = param_1;
    FUN_146f5b12d(*(undefined8 *)(param_1 + 0xe0),param_2,*(undefined4 *)((longlong)param_5 + 0x24),
                  0);
    if ((int)param_5[1] != 0) {
      local_ac = *(uint *)(local_b8 + 0x120);
      uVar10 = 0;
      lVar5 = local_b8;
      do {
        plVar2 = *(longlong **)(local_a8 + uVar10 * 8);
        uVar6 = (ulonglong)*(ushort *)((longlong)plVar2 + 0x7a);
        uVar7 = (param_3 + uVar6) - 1 & -uVar6;
        uVar6 = -uVar6 & (uVar6 + param_4) - 1;
        local_a0 = uVar8;
        if ((*(byte *)(plVar2 + 0x17) & 1) == 0) {
          local_c8 = uVar6;
          local_c0 = plVar2;
          FUN_142a8ed9c(lVar5,&local_98,uVar8,uVar7);
          lVar5 = local_b8;
        }
        else if (((local_ac & 1) != 0) && (uVar1 = *(ushort *)((longlong)plVar2 + 0x7c), uVar1 != 0)
                ) {
          lVar3 = *plVar2;
          lVar4 = plVar2[2];
          lVar9 = 0;
          do {
            uStack_80 = 0;
            local_78 = 0;
            local_88 = *(undefined8 *)(lVar4 + 8 + lVar9 * 2);
            local_70 = *(uint *)(lVar3 + 4 + lVar9) + uVar7;
            local_68 = *(uint *)(lVar3 + 4 + lVar9) + uVar6;
            (**(code **)(*(longlong *)(lVar4 + lVar9 * 2) + 0x18))(lVar5,&local_88);
            lVar9 = lVar9 + 8;
            lVar5 = local_b8;
          } while ((ulonglong)uVar1 * 8 != lVar9);
        }
        param_3 = uVar7 + *(uint *)((longlong)plVar2 + 0x74);
        param_4 = uVar6 + *(uint *)((longlong)plVar2 + 0x74);
        uVar8 = (ulonglong)((int)local_a0 + (uint)*(ushort *)((longlong)plVar2 + 0x86));
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_5 + 1));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8fa74 FUN_142a8fa74 body=390 status=ok
// SIG undefined FUN_142a8fa74(void)

void FUN_142a8fa74(longlong param_1,int *param_2,longlong param_3,longlong param_4,longlong *param_5
                  )

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong local_70;
  uint local_5c;
  int *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)((longlong)param_5 + 0xc) != 0) {
    lVar1 = *param_5;
    local_4c = *(int *)((longlong)param_5 + 0x24);
    local_50 = local_4c + 0x1fU >> 5;
    if (local_4c == 0) {
      local_58 = &local_4c;
    }
    else {
      param_2[local_50 - 1] =
           (uint)(param_2[local_50 - 1] << (-(char)local_4c & 0x1fU)) >> (-(char)local_4c & 0x1fU);
      local_58 = param_2;
    }
    *(int ***)(param_1 + 0x108) = &local_58;
    FUN_146f5b7da(param_1,L"ChangeMask");
    iVar5 = 0;
    FUN_146f5b1d3(*(undefined8 *)(param_1 + 0xd8),param_2,*(undefined4 *)((longlong)param_5 + 0x24),
                  0);
    if ((int)param_5[1] != 0) {
      local_5c = *(uint *)(param_1 + 0x120);
      uVar6 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + uVar6 * 8);
        uVar3 = (ulonglong)*(ushort *)(lVar2 + 0x7a);
        uVar4 = (param_3 + uVar3) - 1 & -uVar3;
        uVar3 = -uVar3 & (uVar3 + param_4) - 1;
        FUN_146f5b83a(param_1,*(undefined8 *)(lVar2 + 0x60));
        if ((*(byte *)(lVar2 + 0xb8) & 1) == 0) {
          local_78 = uVar3;
          local_70 = lVar2;
          FUN_142a8eee0(param_1,&local_58,iVar5,uVar4);
        }
        else if ((local_5c & 1) != 0) {
          FUN_142a8eb98(param_1,uVar4,uVar3,lVar2);
        }
        param_3 = uVar4 + *(uint *)(lVar2 + 0x74);
        param_4 = uVar3 + *(uint *)(lVar2 + 0x74);
        iVar5 = iVar5 + (uint)*(ushort *)(lVar2 + 0x86);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_5 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8fbfb FUN_142a8fbfb body=69 status=ok
// SIG undefined FUN_142a8fbfb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a8fbfb(void)

{
  _DAT_14c999930 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a8fc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999938,1);
  return;
}



// FUNCTION 142a8fc48 FUN_142a8fc48 body=182 status=ok
// SIG undefined FUN_142a8fc48(void)

void FUN_142a8fc48(longlong param_1,uint param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(uint *)(*(longlong *)(param_1 + 0x198) + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f)
      & 1) != 0) {
    FUN_146f3d3b0(param_1 + 0x300,&local_40,param_2);
    if ((longlong)local_38 != 0) {
      lVar2 = 0;
      do {
        puVar1 = (uint *)(*(longlong *)*param_3 + (ulonglong)(*(uint *)(local_40 + lVar2) >> 5) * 4)
        ;
        *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(local_40 + lVar2) & 0x1f);
        FUN_142a8fc48(param_1,*(undefined4 *)(local_40 + lVar2),param_3);
        lVar2 = lVar2 + 8;
      } while ((longlong)local_38 * 8 != lVar2);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a8fd00 FUN_142a8fd00 body=29 status=ok
// SIG undefined FUN_142a8fd00(void)

undefined8 FUN_142a8fd00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a8fd32 FUN_142a8fd32 body=93 status=ok
// SIG undefined FUN_142a8fd32(void)

void FUN_142a8fd32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f9c330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c2c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142a8fd90 FUN_142a8fd90 body=93 status=ok
// SIG undefined FUN_142a8fd90(void)

void FUN_142a8fd90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f9c330;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c2c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142a8fdee FUN_142a8fdee body=126 status=ok
// SIG undefined FUN_142a8fdee(void)

void FUN_142a8fdee(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f9c330;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c2c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a8fe5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a8fe6c FUN_142a8fe6c body=89 status=ok
// SIG undefined FUN_142a8fe6c(void)

void FUN_142a8fe6c(longlong param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_c;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  local_9 = param_4;
  FUN_142a8ff22(param_1 + 0x18,&local_18,&local_c,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8fec6 FUN_142a8fec6 body=91 status=ok
// SIG undefined FUN_142a8fec6(void)

undefined8 FUN_142a8fec6(longlong param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_c;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  local_9 = param_4;
  FUN_142a8ff22(param_1 + 0x18,&local_18,&local_c,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8ff22 FUN_142a8ff22 body=162 status=ok
// SIG undefined FUN_142a8ff22(void)

void FUN_142a8ff22(longlong *param_1,undefined8 *param_2,undefined2 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_4;
  uVar2 = *param_3;
  uVar3 = *param_2;
  lVar4 = *param_1;
  FUN_146f33cf2(lVar4,&local_38,uVar3,0);
  if (local_38 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x28);
    uVar5 = FUN_146f18900(lVar4 + 0x160);
    local_48 = uVar1;
    FUN_142a73e6e(lVar4 + 0xbe0,uVar5,uVar3,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a8ffc8 FUN_142a8ffc8 body=29 status=ok
// SIG undefined FUN_142a8ffc8(void)

undefined8 FUN_142a8ffc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a8fffa FUN_142a8fffa body=93 status=ok
// SIG undefined FUN_142a8fffa(void)

void FUN_142a8fffa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f9c410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c3a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142a90058 FUN_142a90058 body=93 status=ok
// SIG undefined FUN_142a90058(void)

void FUN_142a90058(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149f9c410;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c3a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 142a900b6 FUN_142a900b6 body=126 status=ok
// SIG undefined FUN_142a900b6(void)

void FUN_142a900b6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149f9c410;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c3a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a90125. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a90134 FUN_142a90134 body=89 status=ok
// SIG undefined FUN_142a90134(void)

void FUN_142a90134(longlong param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_e;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_e = param_3;
  local_c = param_4;
  FUN_142a901ea(param_1 + 0x18,&local_18,&local_e,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a9018e FUN_142a9018e body=91 status=ok
// SIG undefined FUN_142a9018e(void)

undefined8 FUN_142a9018e(longlong param_1,undefined8 param_2,undefined2 param_3,undefined4 param_4)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_e;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_e = param_3;
  local_c = param_4;
  FUN_142a901ea(param_1 + 0x18,&local_18,&local_e,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a901ea FUN_142a901ea body=161 status=ok
// SIG undefined FUN_142a901ea(void)

void FUN_142a901ea(longlong *param_1,undefined8 *param_2,undefined2 *param_3,undefined4 *param_4)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_4;
  uVar1 = *param_3;
  uVar3 = *param_2;
  lVar4 = *param_1;
  FUN_146f33cf2(lVar4,&local_38,uVar3,0);
  if (local_38 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x28);
    uVar5 = FUN_146f18900(lVar4 + 0x160);
    local_48 = uVar2;
    FUN_142a74350(lVar4 + 0xbe0,uVar5,uVar3,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a9028e FUN_142a9028e body=288 status=ok
// SIG undefined FUN_142a9028e(void)

ulonglong FUN_142a9028e(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar7 = *(longlong *)(param_2 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0 || *(longlong *)(param_1 + 0x18) == lVar7) {
    uVar5 = 0;
  }
  else if (lVar7 == 0) {
    uVar5 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
  }
  else {
    local_40 = *(undefined2 **)(lVar7 + 0x18);
    FUN_1400021e4(&local_40,&local_30);
    local_20 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x18);
    FUN_1400021e4(&local_20,&local_40);
    puVar6 = local_30;
    if (local_28 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    puVar3 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar3 = local_40;
    }
    lVar7 = 0;
    while( true ) {
      uVar1 = *(ushort *)((longlong)puVar3 + lVar7);
      uVar4 = (uint)uVar1;
      uVar2 = *(ushort *)((longlong)puVar6 + lVar7);
      uVar8 = (uint)uVar2;
      if (uVar1 != uVar2) {
        if ((uVar2 | uVar1) < 0x80) {
          uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
          uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
          if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142a90342;
        }
        uVar4 = uVar4 - uVar8;
        goto LAB_142a9036b;
      }
      if (uVar1 == 0) break;
LAB_142a90342:
      lVar7 = lVar7 + 2;
    }
    uVar4 = 0;
LAB_142a9036b:
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8(local_40);
    }
    uVar5 = (ulonglong)(uVar4 >> 0x1f);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a903b0 FUN_142a903b0 body=83 status=ok
// SIG undefined FUN_142a903b0(void)

bool FUN_142a903b0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  bVar3 = false;
  if (((uVar1 != 0) &&
      (uVar2 = *(ulonglong *)(param_2 + 8), ((uVar2 ^ uVar1) & 0xfffffffffffffff) != 0)) &&
     (bVar3 = true, uVar2 != 0)) {
    if (((byte)uVar1 & (uVar2 & 1) == 0) == 0) {
      if (((uVar1 & 1) == 0 & (byte)uVar2) == 0) {
        return (uVar1 & 0xfffffffffffffff) < (uVar2 & 0xfffffffffffffff);
      }
    }
    else {
      bVar3 = false;
    }
  }
  return bVar3;
}



// FUNCTION 142a90404 FUN_142a90404 body=29 status=ok
// SIG undefined FUN_142a90404(void)

undefined8 FUN_142a90404(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a90436 FUN_142a90436 body=85 status=ok
// SIG undefined FUN_142a90436(void)

void FUN_142a90436(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c4e0;
  return;
}



// FUNCTION 142a9048c FUN_142a9048c body=85 status=ok
// SIG undefined FUN_142a9048c(void)

void FUN_142a9048c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c4e0;
  return;
}



// FUNCTION 142a904e2 FUN_142a904e2 body=118 status=ok
// SIG undefined FUN_142a904e2(void)

void FUN_142a904e2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c4e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a90549. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a90560 FUN_142a90560 body=19 status=ok
// SIG undefined FUN_142a90560(void)

undefined1 FUN_142a90560(undefined8 param_1,undefined8 param_2)

{
  FUN_142a90574(param_2);
  return 1;
}



// FUNCTION 142a90574 FUN_142a90574 body=964 status=ok
// SIG undefined FUN_142a90574(void)

void FUN_142a90574(void)

{
  ulonglong *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  undefined1 auStack_118 [32];
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  ulonglong local_e8;
  longlong local_e0;
  ulonglong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  int local_84;
  longlong local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar11 = FUN_146f372bc();
  if ((lVar11 != 0) && (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + 0x808), lVar11 != 0))
  {
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    FUN_146f3bc1c(&local_b8,lVar11 + 0x2e0);
    if (local_84 < (int)uStack_b0) {
      FUN_146f3f30e(&local_b8);
      local_f8 = (int)uStack_b0 - local_84;
      if (local_f8 != 0 && local_84 <= (int)uStack_b0) {
        local_d8 = (ulonglong)local_f8;
        local_c8 = local_b8;
        puVar20 = (ulonglong *)(local_b8 + 0x20);
        lVar11 = 0;
        do {
          if (lVar11 + 1U < local_d8) {
            uVar12 = *puVar20;
            if ((int)uVar12 == (int)puVar20[-4]) {
              iVar9 = (int)(uVar12 >> 0x20) - (int)(puVar20[-4] >> 0x20);
            }
            else {
              iVar9 = FUN_14002c2bd(uVar12 & 0xffffffff);
            }
            if (iVar9 < 0) {
              uVar12 = puVar20[-4];
              uVar3 = puVar20[-3];
              local_58 = puVar20[-2];
              uStack_50 = puVar20[-1];
              puVar20[-2] = puVar20[2];
              puVar20[-1] = puVar20[3];
              puVar20[-4] = *puVar20;
              puVar20[-3] = puVar20[1];
              local_68._0_4_ = (undefined4)uVar12;
              local_68._4_4_ = (undefined4)(uVar12 >> 0x20);
              uStack_60._0_4_ = (undefined4)uVar3;
              uStack_60._4_4_ = (undefined4)(uVar3 >> 0x20);
              puVar20[2] = local_58;
              puVar20[3] = uStack_50;
              *(undefined4 *)puVar20 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar20 + 4) = local_68._4_4_;
              *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_60._4_4_;
              local_68 = uVar12;
              uStack_60 = uVar3;
            }
          }
          lVar11 = lVar11 + 2;
          puVar20 = puVar20 + 8;
        } while ((int)lVar11 < (int)local_f8);
        if (2 < (int)local_f8) {
          uVar12 = 2;
          do {
            local_f0 = (int)uVar12 * 2;
            local_c0 = (longlong)(int)local_f0;
            lVar11 = 0;
            local_e8 = uVar12;
            do {
              local_f4 = local_f8 - (int)lVar11;
              if ((int)local_f0 <= (int)local_f4) {
                local_f4 = local_f0;
              }
              local_d0 = lVar11;
              if ((0 < (int)local_e8) && ((int)local_e8 < (int)local_f4)) {
                local_e0 = lVar11 * 0x20 + local_c8;
                iVar9 = 0;
                uVar12 = local_e8 & 0xffffffff;
                while( true ) {
                  local_ec = (uint)uVar12;
                  puVar20 = (ulonglong *)((longlong)(int)local_ec * 0x20 + local_e0);
                  iVar17 = 0;
                  if (local_ec - iVar9 != 0 && iVar9 <= (int)local_ec) {
                    lVar11 = (longlong)iVar9 * 0x20 + local_e0;
                    iVar17 = 0;
                    uVar18 = local_ec - iVar9;
                    do {
                      iVar16 = (uVar18 >> 1) + iVar17;
                      uVar2 = *(undefined8 *)(lVar11 + (longlong)iVar16 * 0x20);
                      uVar12 = *puVar20;
                      if ((int)uVar12 == (int)uVar2) {
                        iVar10 = (int)(uVar12 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
                      }
                      else {
                        iVar10 = FUN_14002c2bd(uVar12 & 0xffffffff);
                      }
                      if (-1 < iVar10) {
                        iVar17 = iVar16 + (uVar18 & 1);
                      }
                      bVar4 = 1 < uVar18;
                      uVar18 = uVar18 >> 1;
                    } while (bVar4);
                  }
                  iVar17 = iVar17 + iVar9;
                  uVar12 = (ulonglong)local_ec;
                  iVar9 = local_ec - iVar17;
                  if (iVar9 == 0 || (int)local_ec < iVar17) break;
                  uVar18 = local_f4 - local_ec;
                  if (uVar18 == 0 || (int)local_f4 < (int)local_ec) {
                    iVar16 = 0;
                  }
                  else {
                    puVar19 = (ulonglong *)((longlong)iVar17 * 0x20 + local_e0);
                    iVar16 = 0;
                    uVar12 = (ulonglong)uVar18;
                    do {
                      uVar12 = uVar12 >> 1;
                      uVar15 = (uint)uVar12 + iVar16;
                      uVar3 = puVar20[(ulonglong)uVar15 * 4];
                      if ((int)uVar3 == (int)*puVar19) {
                        iVar10 = (int)(uVar3 >> 0x20) - (int)(*puVar19 >> 0x20);
                      }
                      else {
                        iVar10 = FUN_14002c2bd(uVar3 & 0xffffffff);
                      }
                      if (iVar10 < 0) {
                        iVar16 = uVar15 + (uVar18 & 1);
                      }
                      bVar4 = 1 < uVar18;
                      uVar18 = (uint)uVar12;
                    } while (bVar4);
                    uVar12 = (ulonglong)(local_ec + iVar16);
                    if (0 < iVar16) {
                      puVar13 = puVar19 + (longlong)(int)((local_ec + iVar16) - iVar17) * 4;
                      puVar20 = puVar19 + (longlong)iVar9 * 4;
                      puVar14 = puVar19 + (longlong)iVar9 * 4;
                      do {
                        while( true ) {
                          puVar1 = puVar20 + 4;
                          uVar3 = *puVar19;
                          uVar5 = puVar19[1];
                          local_58 = puVar19[2];
                          uStack_50 = puVar19[3];
                          uVar6 = *puVar20;
                          uVar7 = puVar20[1];
                          uVar8 = puVar20[3];
                          puVar19[2] = puVar20[2];
                          puVar19[3] = uVar8;
                          *puVar19 = uVar6;
                          puVar19[1] = uVar7;
                          puVar19 = puVar19 + 4;
                          local_68._0_4_ = (undefined4)uVar3;
                          local_68._4_4_ = (undefined4)(uVar3 >> 0x20);
                          uStack_60._0_4_ = (undefined4)uVar5;
                          uStack_60._4_4_ = (undefined4)(uVar5 >> 0x20);
                          puVar20[2] = local_58;
                          puVar20[3] = uStack_50;
                          *(undefined4 *)puVar20 = (undefined4)local_68;
                          *(undefined4 *)((longlong)puVar20 + 4) = local_68._4_4_;
                          *(undefined4 *)(puVar20 + 1) = (undefined4)uStack_60;
                          *(undefined4 *)((longlong)puVar20 + 0xc) = uStack_60._4_4_;
                          if (puVar1 == puVar13) break;
                          puVar20 = puVar1;
                          if (puVar19 == puVar14) {
                            puVar14 = puVar1;
                          }
                        }
                        puVar20 = puVar14;
                        local_68 = uVar3;
                        uStack_60 = uVar5;
                      } while (puVar19 != puVar14);
                    }
                  }
                  if (((int)local_f4 <= (int)uVar12) ||
                     (iVar9 = iVar17 + iVar16 + 1, (int)uVar12 <= iVar9)) break;
                }
              }
              lVar11 = local_d0 + local_c0;
            } while (lVar11 < (longlong)local_d8);
            uVar12 = (ulonglong)local_f0;
          } while ((int)local_f0 < (int)local_f8);
        }
      }
    }
    FUN_146f3e234(&local_b8);
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_145a41b7e(&local_b8);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a9093a FUN_142a9093a body=29 status=ok
// SIG undefined FUN_142a9093a(void)

undefined8 FUN_142a9093a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a9096c FUN_142a9096c body=85 status=ok
// SIG undefined FUN_142a9096c(void)

void FUN_142a9096c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c550;
  return;
}



// FUNCTION 142a909c2 FUN_142a909c2 body=85 status=ok
// SIG undefined FUN_142a909c2(void)

void FUN_142a909c2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c550;
  return;
}



// FUNCTION 142a90a18 FUN_142a90a18 body=118 status=ok
// SIG undefined FUN_142a90a18(void)

void FUN_142a90a18(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c550;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a90a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a90a96 FUN_142a90a96 body=19 status=ok
// SIG undefined FUN_142a90a96(void)

undefined1 FUN_142a90a96(undefined8 param_1,undefined8 param_2)

{
  FUN_142a90aaa(param_2);
  return 1;
}



// FUNCTION 142a90aaa FUN_142a90aaa body=551 status=ok
// SIG undefined FUN_142a90aaa(void)

void FUN_142a90aaa(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_bc [4];
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  longlong local_88;
  undefined8 local_80;
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  longlong local_50;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_146f372bc();
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x808), lVar3 != 0)) {
    uVar2 = FUN_146f364e0(param_1);
    local_a8 = (int *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_146f14ba4(&local_a8,*(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0xc));
    local_b8 = local_a8;
    uStack_d0 = local_98 + 0x1fU >> 5;
    uStack_b0 = uStack_d0;
    iStack_ac = local_98;
    piVar4 = local_a8;
    if (local_98 == 0) {
      piVar4 = &iStack_ac;
      local_b8 = piVar4;
    }
    lVar8 = *(longlong *)(lVar3 + 0x40);
    iVar1 = *(int *)(lVar8 + 0x178);
    lVar5 = *(longlong *)(lVar8 + 0x168);
    local_88 = lVar5;
    local_80 = (longlong *)CONCAT44(iVar1,iVar1 + 0x1fU >> 5);
    if (iVar1 == 0) {
      lVar5 = (longlong)&local_80 + 4;
      local_88 = lVar5;
    }
    puVar9 = *(undefined1 **)(lVar8 + 0xb8);
    if (*(int *)(lVar8 + 200) == 0) {
      puVar9 = auStack_bc;
    }
    local_88 = lVar5;
    if (0x1f < local_98 + 0x1fU) {
      uVar7 = 0;
      do {
        piVar4[uVar7] = ~*(uint *)(lVar5 + uVar7 * 4) & *(uint *)(puVar9 + uVar7 * 4);
        uVar7 = uVar7 + 1;
      } while (uStack_d0 != uVar7);
      lVar8 = *(longlong *)(lVar3 + 0x40);
    }
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8._0_4_ = SUB84(piVar4,0);
    local_b8._4_4_ = (undefined4)((ulonglong)piVar4 >> 0x20);
    local_d8 = (undefined4)local_b8;
    uStack_d4 = local_b8._4_4_;
    iStack_cc = iStack_ac;
    local_b8 = piVar4;
    FUN_146f36613(&local_c8,&local_d8,lVar8);
    if ((uVar2 & 0x300) == 0x200) {
      FUN_146f36d10(&local_c8);
    }
    else if ((uVar2 & 0x300) == 0x100) {
      FUN_146f36764(&local_c8);
    }
    local_88 = *(longlong *)(lVar3 + 0x40);
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_149f9c5c0;
    local_78 = FUN_142a90cd2;
    local_38 = 0;
    local_80 = &local_c8;
    local_50 = lVar3;
    FUN_142a8853c(&local_88,uVar2 & 0xffffff01);
    if (local_78 != (code *)0x0) {
      pppuVar6 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar6 = &local_58;
      }
      (*(code *)(*pppuVar6)[2])();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a90cd2 FUN_142a90cd2 body=256 status=ok
// SIG undefined FUN_142a90cd2(void)

undefined8 FUN_142a90cd2(undefined8 param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = *param_3 % 100;
  lVar3 = (longlong)(*param_3 / 100);
  lVar1 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(*param_2 + 0x40) + 0x2d0) + lVar3 * 8) +
           (longlong)(int)uVar2 * 8);
  if (lVar1 == 0) {
    FUN_140002266(param_1,L"Class %s",
                  **(undefined8 **)
                    (*(longlong *)
                      (*(longlong *)
                        (*(longlong *)(*(longlong *)(*param_2 + 0x40) + 0x270) + lVar3 * 8) + 0x10 +
                      (ulonglong)uVar2 * 0x38) + 0x30));
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
  }
  local_20 = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  puVar4 = local_30;
  if (local_28 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  FUN_140002266(param_1,L"Class %s",puVar4);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142a90df4 FUN_142a90df4 body=12 status=ok
// SIG undefined FUN_142a90df4(void)

void FUN_142a90df4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142a90dfd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142a90e00 FUN_142a90e00 body=29 status=ok
// SIG undefined FUN_142a90e00(void)

undefined8 FUN_142a90e00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a90e1e FUN_142a90e1e body=29 status=ok
// SIG undefined FUN_142a90e1e(void)

undefined8 FUN_142a90e1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a90e50 FUN_142a90e50 body=85 status=ok
// SIG undefined FUN_142a90e50(void)

void FUN_142a90e50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c600;
  return;
}



// FUNCTION 142a90ea6 FUN_142a90ea6 body=85 status=ok
// SIG undefined FUN_142a90ea6(void)

void FUN_142a90ea6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c600;
  return;
}



// FUNCTION 142a90efc FUN_142a90efc body=118 status=ok
// SIG undefined FUN_142a90efc(void)

void FUN_142a90efc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c600;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a90f63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a90f7a FUN_142a90f7a body=19 status=ok
// SIG undefined FUN_142a90f7a(void)

undefined1 FUN_142a90f7a(undefined8 param_1,undefined8 param_2)

{
  FUN_142a90f8e(param_2);
  return 1;
}



// FUNCTION 142a90f8e FUN_142a90f8e body=518 status=ok
// SIG undefined FUN_142a90f8e(void)

void FUN_142a90f8e(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  uint uStack_d0;
  int iStack_cc;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_bc [4];
  undefined8 local_b8;
  uint uStack_b0;
  int iStack_ac;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = FUN_146f372bc();
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x808), lVar3 != 0)) {
    uVar2 = FUN_146f364e0(param_1);
    local_a8 = (int *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_146f14ba4(&local_a8,*(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0xc));
    local_b8 = local_a8;
    uStack_d0 = local_98 + 0x1fU >> 5;
    uStack_b0 = uStack_d0;
    iStack_ac = local_98;
    piVar4 = local_a8;
    if (local_98 == 0) {
      piVar4 = &iStack_ac;
      local_b8 = piVar4;
    }
    lVar8 = *(longlong *)(lVar3 + 0x40);
    iVar1 = *(int *)(lVar8 + 0x178);
    lVar5 = *(longlong *)(lVar8 + 0x168);
    local_88 = lVar5;
    local_80 = (longlong *)CONCAT44(iVar1,iVar1 + 0x1fU >> 5);
    if (iVar1 == 0) {
      lVar5 = (longlong)&local_80 + 4;
      local_88 = lVar5;
    }
    puVar9 = *(undefined1 **)(lVar8 + 0x108);
    if (*(int *)(lVar8 + 0x118) == 0) {
      puVar9 = auStack_bc;
    }
    local_88 = lVar5;
    if (0x1f < local_98 + 0x1fU) {
      uVar7 = 0;
      do {
        piVar4[uVar7] = ~*(uint *)(lVar5 + uVar7 * 4) & *(uint *)(puVar9 + uVar7 * 4);
        uVar7 = uVar7 + 1;
      } while (uStack_d0 != uVar7);
      lVar8 = *(longlong *)(lVar3 + 0x40);
    }
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8._0_4_ = SUB84(piVar4,0);
    local_b8._4_4_ = (undefined4)((ulonglong)piVar4 >> 0x20);
    local_d8 = (undefined4)local_b8;
    uStack_d4 = local_b8._4_4_;
    iStack_cc = iStack_ac;
    local_b8 = piVar4;
    FUN_146f36613(&local_c8,&local_d8,lVar8);
    if ((uVar2 & 0x300) == 0x200) {
      FUN_146f36d10(&local_c8);
    }
    else if ((uVar2 & 0x300) == 0x100) {
      FUN_146f36764(&local_c8);
    }
    local_88 = *(longlong *)(lVar3 + 0x40);
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_38 = 0;
    local_80 = &local_c8;
    FUN_142a8853c(&local_88,uVar2 & 0xffffff01);
    if (local_78 != 0) {
      plVar6 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar6 = local_58;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a91196 FUN_142a91196 body=29 status=ok
// SIG undefined FUN_142a91196(void)

undefined8 FUN_142a91196(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a911c8 FUN_142a911c8 body=85 status=ok
// SIG undefined FUN_142a911c8(void)

void FUN_142a911c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c670;
  return;
}



// FUNCTION 142a9121e FUN_142a9121e body=85 status=ok
// SIG undefined FUN_142a9121e(void)

void FUN_142a9121e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c670;
  return;
}



// FUNCTION 142a91274 FUN_142a91274 body=118 status=ok
// SIG undefined FUN_142a91274(void)

void FUN_142a91274(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c670;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a912db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a912f2 FUN_142a912f2 body=19 status=ok
// SIG undefined FUN_142a912f2(void)

undefined1 FUN_142a912f2(undefined8 param_1,undefined8 param_2)

{
  FUN_142a91306(param_2);
  return 1;
}



// FUNCTION 142a91306 FUN_142a91306 body=644 status=ok
// SIG undefined FUN_142a91306(void)

void FUN_142a91306(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_108 [32];
  int *local_e8;
  uint local_e0;
  int local_dc;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_cc [4];
  int *local_c8;
  uint local_c0;
  int local_bc;
  int *local_b8;
  uint local_b0;
  int local_ac;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 local_80;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = FUN_146f372bc();
  if ((lVar3 != 0) && (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x808), lVar3 != 0)) {
    uVar1 = FUN_146f364e0(param_1);
    lVar6 = *(longlong *)(*(longlong *)(lVar3 + 0x28) + 0x28);
    local_a8 = (int *)0x0;
    uStack_a0 = 0;
    local_98 = 0;
    FUN_146f14ba4(&local_a8,*(undefined4 *)(*(longlong *)(lVar3 + 0x40) + 0xc));
    local_ac = *(int *)(lVar6 + 0x228);
    local_b8 = *(int **)(lVar6 + 0x218);
    local_b0 = local_ac + 0x1fU >> 5;
    if (local_ac == 0) {
      local_b8 = &local_ac;
    }
    local_c8 = local_a8;
    local_c0 = local_98 + 0x1fU >> 5;
    local_bc = local_98;
    if (local_98 == 0) {
      local_c8 = &local_bc;
    }
    FUN_146f214ba(lVar6 + 0x880,&local_c8,&local_b8);
    local_88 = local_a8;
    local_e0 = local_98 + 0x1fU >> 5;
    local_80 = (longlong *)CONCAT44(local_98,local_e0);
    if (local_98 == 0) {
      local_88 = (int *)((longlong)&local_80 + 4);
    }
    lVar6 = *(longlong *)(lVar3 + 0x40);
    puVar7 = *(undefined1 **)(lVar6 + 0x168);
    if (*(int *)(lVar6 + 0x178) == 0) {
      puVar7 = auStack_cc;
    }
    if (0x1f < local_98 + 0x1fU) {
      uVar4 = 0;
      do {
        local_88[uVar4] = local_88[uVar4] & ~*(uint *)(puVar7 + uVar4 * 4);
        uVar4 = uVar4 + 1;
      } while (local_e0 != uVar4);
      lVar6 = *(longlong *)(lVar3 + 0x40);
      local_e0 = local_98 + 0x1fU >> 5;
    }
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = local_a8;
    local_dc = local_98;
    if (local_98 == 0) {
      local_e8 = &local_dc;
    }
    FUN_146f36613(&local_d8,&local_e8,lVar6);
    uVar2 = 0x100;
    if ((uVar1 & 0x300) != 0) {
      uVar2 = uVar1 & 0x300;
    }
    if (uVar2 == 0x200) {
      FUN_146f36d10(&local_d8);
    }
    else if (uVar2 == 0x100) {
      FUN_146f36764(&local_d8);
    }
    local_88 = *(int **)(lVar3 + 0x40);
    local_78 = 0;
    local_68 = (longlong *)0x0;
    local_38 = 0;
    local_80 = &local_d8;
    FUN_142a8853c(&local_88,uVar1 & 0xffffff01);
    if (local_78 != 0) {
      plVar5 = local_68;
      if (local_68 == (longlong *)0x0) {
        plVar5 = local_58;
      }
      (**(code **)(*plVar5 + 0x10))();
    }
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    if (local_a8 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a9158c FUN_142a9158c body=29 status=ok
// SIG undefined FUN_142a9158c(void)

undefined8 FUN_142a9158c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a915be FUN_142a915be body=85 status=ok
// SIG undefined FUN_142a915be(void)

void FUN_142a915be(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c6e0;
  return;
}



// FUNCTION 142a91614 FUN_142a91614 body=85 status=ok
// SIG undefined FUN_142a91614(void)

void FUN_142a91614(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c6e0;
  return;
}



// FUNCTION 142a9166a FUN_142a9166a body=118 status=ok
// SIG undefined FUN_142a9166a(void)

void FUN_142a9166a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c6e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a916d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a916e8 FUN_142a916e8 body=19 status=ok
// SIG undefined FUN_142a916e8(void)

undefined1 FUN_142a916e8(undefined8 param_1,undefined8 param_2)

{
  FUN_142a916fc(param_2);
  return 1;
}



// FUNCTION 142a916fc FUN_142a916fc body=1700 status=ok
// SIG undefined FUN_142a916fc(void)

void FUN_142a916fc(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  int iVar16;
  undefined1 auStack_1f8 [32];
  undefined4 local_1d8;
  undefined4 local_1d0;
  uint local_1bc;
  longlong *local_1b8;
  uint local_1b0;
  uint local_1ac;
  int local_1a8;
  uint local_1a4;
  int local_1a0;
  uint local_19c;
  ulonglong local_198;
  ulonglong local_190;
  void *local_188;
  longlong local_180;
  longlong local_178;
  ulonglong local_170;
  longlong local_168;
  int local_160;
  void *local_158;
  ulonglong uStack_150;
  undefined4 local_148;
  int *local_138;
  uint local_130;
  int local_12c;
  int *local_128;
  uint local_120;
  int local_11c;
  longlong local_118;
  undefined8 uStack_110;
  int *local_108;
  undefined8 uStack_100;
  int local_f8;
  longlong local_e8 [3];
  int local_cc;
  int *local_c8;
  undefined8 local_c0;
  code *local_b8;
  undefined ***local_a8;
  undefined **local_98;
  longlong local_90;
  int *local_88;
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  lVar7 = FUN_146f372bc();
  if ((lVar7 != 0) &&
     (plVar2 = *(longlong **)(*(longlong *)(lVar7 + 0x28) + 0x808), plVar2 != (longlong *)0x0)) {
    lVar7 = *(longlong *)(plVar2[5] + 0x28);
    local_158 = (void *)0x0;
    uStack_150 = 0;
    local_148 = 0;
    FUN_146f2a4d8(&local_158,*(undefined4 *)(lVar7 + 0x878));
    if (((uStack_150 & 0xffffffff) != 0) && (*(int *)(lVar7 + 0x870) != 0)) {
      memcpy(local_158,*(void **)(lVar7 + 0x868),(uStack_150 & 0xffffffff) << 2);
    }
    (**(code **)(*plVar2 + 0x378))(plVar2,&local_168,param_1);
    if (local_160 != 0) {
      memset(local_158,0,(longlong)(int)uStack_150 << 2);
      if ((longlong)local_160 != 0) {
        lVar14 = 0;
        do {
          uVar12 = *(uint *)(local_168 + lVar14);
          if ((*(uint *)(*(longlong *)(lVar7 + 0x868) + (ulonglong)(uVar12 >> 5) * 4) >>
               (uVar12 & 0x1f) & 1) != 0) {
            puVar1 = (uint *)((longlong)local_158 + (ulonglong)(uVar12 >> 5) * 4);
            *puVar1 = *puVar1 | 1 << ((byte)uVar12 & 0x1f);
          }
          lVar14 = lVar14 + 4;
        } while ((longlong)local_160 * 4 != lVar14);
      }
    }
    local_1b8 = plVar2;
    if ((longlong)(int)param_1[1] != 0) {
      lVar14 = *param_1;
      lVar11 = (longlong)(int)param_1[1] * 0x10;
      do {
        lVar11 = lVar11 + -0x10;
        local_1d0 = 0xffffffff;
        local_1d8 = 0;
        iVar6 = FUN_1447ee042(lVar14,L"WithFilter",10,1);
        if (iVar6 != -1) break;
        lVar14 = lVar14 + 0x10;
      } while (lVar11 != 0);
    }
    local_1bc = FUN_146f364e0();
    local_198 = uStack_150 & 0xffffffff;
    local_1b0 = 0xffffffff >> (-(char)local_148 & 0x1fU);
    if (local_198 != 0) {
      local_180 = lVar7 + 0x880;
      local_188 = local_158;
      local_190 = (ulonglong)((int)uStack_150 - 1);
      local_1ac = 0x100;
      if ((local_1bc & 0x300) != 0) {
        local_1ac = local_1bc & 0x300;
      }
      uVar10 = 0;
      iVar6 = 0;
      local_178 = lVar7;
      do {
        uVar12 = 0xffffffff;
        if (uVar10 == local_190) {
          uVar12 = local_1b0;
        }
        uVar12 = uVar12 & *(uint *)((longlong)local_188 + uVar10 * 4);
        iVar4 = iVar6;
        uVar5 = uVar10;
        iVar16 = iVar6;
        if (uVar12 != 0) {
          do {
            local_170 = uVar5;
            local_1a8 = iVar4;
            uVar13 = uVar12;
            if ((uVar12 & 1) != 0) {
              lVar7 = *(longlong *)(lVar7 + 0x858);
              lVar8 = (longlong)iVar16 * 0x130;
              local_e8[0] = 0;
              local_e8[1] = 0;
              lVar14 = *(longlong *)(lVar7 + 0x120 + lVar8);
              lVar11 = lVar7 + lVar8;
              if (lVar14 != 0) {
                lVar11 = lVar14;
              }
              lVar7 = (longlong)*(int *)(lVar7 + 0x128 + lVar8);
              local_1a0 = iVar16;
              local_19c = uVar12;
              local_cc = iVar16;
              if (lVar7 != 0) {
                lVar7 = lVar7 * 0x48;
                lVar11 = lVar11 + 0x10;
                do {
                  FUN_141706e52(lVar11,&local_108);
                  piVar15 = (int *)&DAT_149dfb77a;
                  if ((int)uStack_100 != 0) {
                    piVar15 = local_108;
                  }
                  FUN_140002266(&local_c8,&DAT_149f9c75e,piVar15);
                  iVar6 = (int)local_c0 + -1;
                  if ((int)local_c0 == 0) {
                    iVar6 = 0;
                  }
                  FUN_1400020e8(local_e8,local_c8,iVar6);
                  if (local_c8 != (int *)0x0) {
                    FUN_1400020a8();
                  }
                  if (local_108 != (int *)0x0) {
                    FUN_1400020a8();
                  }
                  lVar11 = lVar11 + 0x48;
                  lVar7 = lVar7 + -0x48;
                } while (lVar7 != 0);
              }
              plVar2 = local_1b8;
              local_108 = (int *)0x0;
              uStack_100 = 0;
              local_f8 = 0;
              FUN_146f14ba4(&local_108,*(undefined4 *)(local_1b8[8] + 0xc));
              uVar12 = local_1ac;
              plVar3 = local_1b8;
              local_c8 = local_108;
              local_1a4 = local_f8 + 0x1f;
              local_130 = local_1a4 >> 5;
              local_c0 = (longlong *)CONCAT44(local_f8,local_130);
              if (local_f8 == 0) {
                local_c8 = (int *)((longlong)&local_c0 + 4);
              }
              lVar7 = plVar2[8];
              iVar6 = *(int *)(lVar7 + 0x178);
              local_118 = *(longlong *)(lVar7 + 0x168);
              uStack_110 = CONCAT44(iVar6,iVar6 + 0x1fU >> 5);
              if (iVar6 == 0) {
                local_118 = (longlong)&uStack_110 + 4;
              }
              lVar14 = *(longlong *)(*(longlong *)(local_1b8[5] + 0x28) + 0x8b0);
              local_11c = *(int *)(lVar14 + 0x70 + (longlong)local_cc * 0x160);
              local_128 = *(int **)(lVar14 + 0x60 + (longlong)local_cc * 0x160);
              local_120 = local_11c + 0x1fU >> 5;
              if (local_11c == 0) {
                local_128 = &local_11c;
              }
              if (0x1f < local_1a4) {
                uVar10 = 0;
                do {
                  local_c8[uVar10] = ~*(uint *)(local_118 + uVar10 * 4) & local_128[uVar10];
                  uVar10 = uVar10 + 1;
                } while (local_130 != uVar10);
                lVar7 = local_1b8[8];
                local_130 = local_f8 + 0x1fU >> 5;
              }
              local_118 = 0;
              uStack_110 = 0;
              local_138 = local_108;
              local_12c = local_f8;
              if (local_f8 == 0) {
                local_138 = &local_12c;
              }
              FUN_146f36613(&local_118,&local_138,lVar7);
              if (uVar12 == 0x200) {
                FUN_146f36d10(&local_118);
              }
              else if (uVar12 == 0x100) {
                FUN_146f36764(&local_118);
              }
              local_c8 = (int *)plVar3[8];
              local_c0 = &local_118;
              local_a8 = (undefined ***)0x0;
              local_98 = &PTR_LAB_149f9c770;
              local_90 = local_180;
              local_88 = &local_cc;
              local_b8 = FUN_142a91da2;
              local_78 = 0;
              FUN_142a8853c(&local_c8,local_1bc & 0xffffff01);
              if (local_b8 != (code *)0x0) {
                pppuVar9 = local_a8;
                if (local_a8 == (undefined ***)0x0) {
                  pppuVar9 = &local_98;
                }
                (*(code *)(*pppuVar9)[2])();
              }
              lVar7 = local_178;
              if (local_118 != 0) {
                FUN_1400020a8();
              }
              if (local_108 != (int *)0x0) {
                FUN_1400020a8();
              }
              uVar10 = local_170;
              uVar13 = local_19c;
              iVar16 = local_1a0;
              iVar6 = local_1a8;
              if (local_e8[0] != 0) {
                FUN_1400020a8();
                uVar10 = local_170;
                uVar13 = local_19c;
                iVar16 = local_1a0;
                iVar6 = local_1a8;
              }
            }
            uVar12 = uVar13 >> 1;
            iVar4 = local_1a8;
            uVar5 = local_170;
            iVar16 = iVar16 + 1;
          } while (1 < uVar13);
        }
        uVar10 = uVar10 + 1;
        iVar6 = iVar6 + 0x20;
      } while (uVar10 != local_198);
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    if (local_158 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a91da2 FUN_142a91da2 body=132 status=ok
// SIG undefined FUN_142a91da2(void)

undefined8 FUN_142a91da2(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_146f227ce(*param_2,&local_28,*param_3,*(undefined4 *)param_2[1]);
  puVar1 = local_28;
  if (local_20 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(param_1,&DAT_149e8bac8,puVar1);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142a91e46 FUN_142a91e46 body=12 status=ok
// SIG undefined FUN_142a91e46(void)

void FUN_142a91e46(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142a91e4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142a91e52 FUN_142a91e52 body=29 status=ok
// SIG undefined FUN_142a91e52(void)

undefined8 FUN_142a91e52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a91e70 FUN_142a91e70 body=29 status=ok
// SIG undefined FUN_142a91e70(void)

undefined8 FUN_142a91e70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a91ea2 FUN_142a91ea2 body=85 status=ok
// SIG undefined FUN_142a91ea2(void)

void FUN_142a91ea2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c790;
  return;
}



// FUNCTION 142a91ef8 FUN_142a91ef8 body=85 status=ok
// SIG undefined FUN_142a91ef8(void)

void FUN_142a91ef8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c790;
  return;
}



// FUNCTION 142a91f4e FUN_142a91f4e body=118 status=ok
// SIG undefined FUN_142a91f4e(void)

void FUN_142a91f4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c790;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a91fb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a91fcc FUN_142a91fcc body=19 status=ok
// SIG undefined FUN_142a91fcc(void)

undefined1 FUN_142a91fcc(undefined8 param_1,undefined8 param_2)

{
  FUN_142a91fe0(param_2);
  return 1;
}



// FUNCTION 142a91fe0 FUN_142a91fe0 body=7206 status=ok
// SIG undefined FUN_142a91fe0(void)

void FUN_142a91fe0(undefined8 *param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int *piVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  uint uVar16;
  undefined2 *puVar17;
  longlong *plVar18;
  float *pfVar19;
  float *pfVar20;
  uint uVar21;
  int **ppiVar22;
  ulonglong uVar23;
  int iVar24;
  longlong lVar25;
  int *piVar26;
  int **ppiVar27;
  uint uVar28;
  int **ppiVar29;
  uint uVar30;
  undefined8 *puVar31;
  int **ppiVar32;
  int **ppiVar33;
  longlong *plVar34;
  int **ppiVar35;
  float *pfVar36;
  ulonglong uVar37;
  byte bVar38;
  uint uVar39;
  int **ppiVar40;
  float *pfVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  float *pfVar44;
  float *pfVar45;
  int iVar46;
  int **ppiVar47;
  float *pfVar48;
  float *pfVar49;
  int iVar50;
  int **ppiVar51;
  float *pfVar52;
  bool bVar53;
  float fVar54;
  float fVar55;
  undefined1 auStack_518 [32];
  int *local_4f8;
  undefined4 local_4f0;
  int **local_4e8;
  int **local_4e0;
  int **local_4d8;
  int **local_4d0;
  ulonglong local_4c8;
  longlong local_4c0;
  uint local_4b4;
  longlong local_4b0;
  longlong *local_4a8;
  longlong local_4a0;
  longlong local_498;
  int **local_490;
  int *local_488;
  int *local_480;
  uint local_478;
  int local_474;
  undefined1 local_470 [8];
  int *local_468;
  ulonglong uStack_460;
  int local_458;
  undefined4 local_44c;
  int local_448;
  float local_444;
  longlong local_440;
  int *local_438;
  undefined8 uStack_430;
  uint local_428 [4];
  uint *local_418;
  uint local_410;
  uint local_40c;
  uint uStack_408;
  int local_404;
  undefined1 local_400 [8];
  undefined1 *local_3f8;
  int local_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  int *local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 uStack_330;
  longlong local_328;
  ulonglong uStack_320;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_518;
  lVar11 = FUN_146f372bc();
  if ((lVar11 != 0) && (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + 0x808), lVar11 != 0))
  {
    local_44c = 0;
    if ((longlong)*(int *)(param_1 + 1) != 0) {
      puVar31 = (undefined8 *)*param_1;
      lVar25 = (longlong)*(int *)(param_1 + 1) << 4;
      do {
        local_4f0 = 0xffffffff;
        local_4f8 = (int *)((ulonglong)local_4f8 & 0xffffffff00000000);
        iVar6 = FUN_1447ee042(puVar31,L"NumClasses=",0xb,1);
        if (iVar6 != -1) {
          if (puVar31 != (undefined8 *)0x0) {
            if (*(int *)(puVar31 + 1) == 0) {
              puVar17 = &DAT_149dfb77a;
            }
            else {
              puVar17 = (undefined2 *)*puVar31;
            }
            FUN_141369f9a(puVar17,L"NumClasses=",&local_44c);
          }
          break;
        }
        puVar31 = puVar31 + 2;
        lVar25 = lVar25 + -0x10;
      } while (lVar25 != 0);
    }
    lVar25 = *(longlong *)(*(longlong *)(lVar11 + 0x28) + 0x28);
    local_418 = (uint *)0x0;
    local_410 = 0;
    local_438 = (int *)0x0;
    uStack_430 = 0;
    local_40c = 0x80;
    uStack_408 = 0xffffffff;
    local_404 = 0;
    local_3f8 = (undefined1 *)0x0;
    local_3f0 = 0;
    local_458 = 0;
    local_468 = (int *)0x0;
    uStack_460 = 0;
    iVar6 = *(int *)(*(longlong *)(lVar11 + 0x40) + 200);
    piVar26 = (int *)((longlong)&uStack_370 + 4);
    uStack_370 = (int *)CONCAT44(iVar6,iVar6 + 0x1fU >> 5);
    local_378 = *(int **)(*(longlong *)(lVar11 + 0x40) + 0xb8);
    if (iVar6 == 0) {
      local_378 = piVar26;
    }
    FUN_146f2a4d8(&local_468);
    if (((uStack_460 & 0xffffffff) != 0) && ((int)uStack_370 != 0)) {
      memcpy(local_468,local_378,(uStack_460 & 0xffffffff) << 2);
    }
    local_378 = local_468;
    uVar30 = local_458 + 0x1fU >> 5;
    uStack_370 = (int *)CONCAT44(local_458,uVar30);
    piVar12 = local_468;
    if (local_458 == 0) {
      local_378 = piVar26;
      piVar12 = piVar26;
    }
    iVar6 = *(int *)(lVar25 + 0x1090);
    local_3e8 = *(longlong *)(lVar25 + 0x1080);
    uStack_3e0 = CONCAT44(iVar6,iVar6 + 0x1fU >> 5);
    if (iVar6 == 0) {
      local_3e8 = (longlong)&uStack_3e0 + 4;
    }
    if (0x1f < local_458 + 0x1fU) {
      uVar42 = 0;
      do {
        piVar12[uVar42] = piVar12[uVar42] & *(uint *)(local_3e8 + uVar42 * 4);
        uVar42 = uVar42 + 1;
      } while (uVar30 != uVar42);
    }
    local_378 = (int *)0x0;
    uStack_370 = (int *)0x0;
    local_368 = (ulonglong)local_368._4_4_ << 0x20;
    FUN_146f14ba4(&local_378,*(undefined4 *)(*(longlong *)(lVar11 + 0x40) + 0xc));
    FUN_1446f470e(local_470,L"Spatial",1);
    local_480 = local_378;
    local_478 = (int)local_368 + 0x1fU >> 5;
    local_474 = (int)local_368;
    if ((int)local_368 == 0) {
      local_480 = &local_474;
    }
    FUN_146f2296a(lVar25 + 0x880,&local_480);
    if ((uStack_460 & 0xffffffff) != 0) {
      uVar42 = 0;
      do {
        local_468[uVar42] = local_468[uVar42] & local_378[uVar42];
        uVar42 = uVar42 + 1;
      } while ((uStack_460 & 0xffffffff) != uVar42);
    }
    if (local_378 != (int *)0x0) {
      FUN_1400020a8();
    }
    local_4e8 = (int **)(uStack_460 & 0xffffffff);
    uVar42 = 0;
    local_4b4 = 0xffffffff >> (-(char)local_458 & 0x1fU);
    if (local_4e8 != (int **)0x0) {
      local_488 = local_468;
      local_490 = (int **)(ulonglong)((int)uStack_460 - 1);
      local_4a8 = (longlong *)(lVar11 + 0x170);
      ppiVar47 = (int **)0x0;
      local_4c0 = lVar11;
      local_498 = lVar25;
      do {
        uVar30 = 0xffffffff;
        if (ppiVar47 == local_490) {
          uVar30 = local_4b4;
        }
        uVar30 = uVar30 & local_488[(longlong)ppiVar47];
        uVar37 = uVar42;
        if (uVar30 != 0) {
          do {
            uVar39 = (uint)uVar37;
            if ((uVar30 & 1) != 0) {
              lVar1 = *(longlong *)
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar11 + 0x40) + 0x2d0) +
                         (longlong)((int)uVar39 / 100) * 8) + (longlong)((int)uVar39 % 100) * 8);
              if (lVar1 != 0) {
                local_444 = 0.0;
                if ((*(uint *)(*(longlong *)(lVar25 + 0x1080) + (uVar37 >> 5) * 4) >>
                     (uVar39 & 0x1f) & 1) != 0) {
                  uVar7 = uVar39 + 0x7ff;
                  if (-1 < (int)uVar39) {
                    uVar7 = uVar39;
                  }
                  local_444 = *(float *)(*(longlong *)
                                          (*(longlong *)(lVar25 + 0x10c8) +
                                          (longlong)((int)uVar7 >> 0xb) * 8) + 0x18 +
                                        (longlong)(int)(uVar39 - (uVar7 & 0xfffff800)) * 0x20);
                }
                plVar34 = *(longlong **)(lVar1 + 0x10);
                local_4d0 = ppiVar47;
                local_4c8 = uVar42;
                if ((*(uint *)(*(longlong *)(lVar25 + 0x1050) + (uVar37 >> 5) * 4) &
                    1 << ((byte)uVar37 & 0x1f)) != 0) {
                  uVar7 = uVar39 + 0x3ff;
                  if (-1 < (int)uVar39) {
                    uVar7 = uVar39;
                  }
                  fVar54 = *(float *)(*(longlong *)
                                       (*(longlong *)(lVar25 + 0x1068) +
                                       (longlong)((int)uVar7 >> 10) * 8) +
                                     (longlong)(int)(uVar39 - (uVar7 & 0xfffffc00)) * 4);
                  if (fVar54 < 0.0) {
                    local_444 = sqrtf(fVar54);
                  }
                  else {
                    local_444 = SQRT(fVar54);
                  }
                }
                uVar7 = ((uint)((ulonglong)plVar34 >> 0x14) & 0xffff ^
                        (uint)((ulonglong)plVar34 >> 4)) * -0x7a143595;
                uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
                uVar7 = uVar7 >> 0x10 ^ uVar7;
                iVar6 = (uint)uStack_430;
                ppiVar47 = (int **)(uStack_430 & 0xffffffff);
                if ((uint)uStack_430 != local_404) {
                  puVar13 = local_3f8;
                  if (local_3f8 == (undefined1 *)0x0) {
                    puVar13 = local_400;
                  }
                  iVar10 = *(int *)(puVar13 + (ulonglong)(local_3f0 - 1U & uVar7) * 4);
                  while (iVar10 != -1) {
                    piVar26 = local_438 + (longlong)iVar10 * 0x1c;
                    if (*(longlong **)(local_438 + (longlong)iVar10 * 0x1c) == plVar34) {
                      if (piVar26 != (int *)0x0) goto LAB_142a9288a;
                      break;
                    }
                    iVar10 = piVar26[0x1a];
                  }
                }
                local_4e0 = (int **)CONCAT44(local_4e0._4_4_,uVar7);
                if (local_404 == 0) {
                  uStack_430 = CONCAT44(uStack_430._4_4_,(uint)uStack_430 + 1);
                  if (uStack_430._4_4_ == iVar6) {
                    FUN_140275bcc(&local_438,ppiVar47);
                  }
                  uVar7 = local_410;
                  if (local_410 == 0) {
                    iVar6 = -1;
                  }
                  else {
                    iVar6 = local_410 + 0x1e;
                    if (-1 < (int)(local_410 - 1)) {
                      iVar6 = local_410 - 1;
                    }
                    iVar6 = iVar6 >> 5;
                  }
                  uVar28 = local_410 + 1;
                  uVar16 = local_410 + 0x1f;
                  if (-1 < (int)local_410) {
                    uVar16 = local_410;
                  }
                  if ((int)uVar16 >> 5 == iVar6) {
                    local_410 = uVar28;
                  }
                  else {
                    if ((int)local_40c <= (int)local_410) {
                      if (local_410 + 0x20 < 0xa0) {
                        local_40c = 0x80;
                      }
                      else {
                        uVar28 = local_410 + 0x20 >> 5;
                        if (local_40c + 0x1f < 0xa0) {
                          uVar21 = 4;
                          if (4 < uVar28) {
                            uVar21 = uVar28;
                          }
                        }
                        else {
                          uVar21 = uVar28 + (uVar28 * 3 >> 3) + 0x10;
                        }
                        uVar42 = (ulonglong)(uVar21 * 4);
                        if (DAT_14c872d28 != (longlong *)0x0) {
                          if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                            uVar8 = (uint)(uVar42 + 0xf);
                            if (uVar21 < 0x1ffd) {
                              uVar42 = (ulonglong)
                                       (ushort)(&DAT_14c841d90)
                                               [0x32 - (byte)(&DAT_14c841e00)[uVar42 + 0xf >> 4]];
                            }
                            else {
                              uVar37 = (ulonglong)(uVar8 & 0xfffffff0);
                              if (uVar37 < 0x7ff1) {
                                bVar38 = (&DAT_14c841e00)[uVar8 >> 4];
                                uVar23 = 0x32;
                                if (0x32 < bVar38) {
                                  uVar23 = (ulonglong)bVar38;
                                }
                                uVar43 = 0x32 - (ulonglong)bVar38;
                                do {
                                  uVar42 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar43 & 0xffffffff];
                                  if (((&DAT_14c841d90)[uVar43 & 0xffffffff] & 0xf) == 0)
                                  goto LAB_142a92b50;
                                  lVar11 = uVar23 + 1 + uVar43;
                                  uVar43 = uVar43 - 1;
                                } while (lVar11 != 0x33);
                              }
                              uVar42 = (ulonglong)DAT_14c841df8;
                              if (DAT_14c841df8 < 0x11) {
                                uVar42 = 0x10;
                              }
                              uVar42 = -uVar42 & (uVar37 + uVar42) - 1;
                            }
                          }
                          else {
                            local_4d8 = ppiVar47;
                            uVar42 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar42,0);
                            ppiVar47 = local_4d8;
                          }
                        }
LAB_142a92b50:
                        iVar6 = (int)(uVar42 >> 2);
                        local_40c = iVar6 << 5;
                        if (iVar6 < (int)uVar28) {
                          local_40c = 0xffffffe0;
                        }
                      }
                      FUN_1446efbd8(local_428,local_410);
                      uVar28 = local_410 + 1;
                    }
                    uVar21 = uVar28 + 0x1f;
                    if (-1 < (int)uVar28) {
                      uVar21 = uVar28;
                    }
                    local_410 = uVar28;
                    if ((int)uVar28 % 0x20 != 0) {
                      puVar15 = local_418;
                      if (local_418 == (uint *)0x0) {
                        puVar15 = local_428;
                      }
                      bVar38 = -(char)((int)uVar28 % 0x20);
                      puVar15[(int)uVar21 >> 5] =
                           (puVar15[(int)uVar21 >> 5] << (bVar38 & 0x1f)) >> (bVar38 & 0x1f);
                    }
                  }
                  lVar11 = (longlong)(int)ppiVar47;
                  puVar15 = local_418;
                  if (local_418 == (uint *)0x0) {
                    puVar15 = local_428;
                  }
                  bVar38 = (byte)uVar7 & 0x1f;
                  puVar15[(int)uVar16 >> 5] =
                       puVar15[(int)uVar16 >> 5] & (-2 << bVar38 | 0xfffffffeU >> 0x20 - bVar38);
                }
                else {
                  ppiVar47 = (int **)(ulonglong)uStack_408;
                  lVar11 = (longlong)(int)uStack_408;
                  uStack_408 = local_438[lVar11 * 0x1c + 1];
                  local_404 = local_404 + -1;
                  if (local_404 != 0) {
                    local_438[(longlong)local_438[lVar11 * 0x1c + 1] * 0x1c] = -1;
                  }
                }
                piVar26 = local_438;
                iVar6 = (int)ppiVar47;
                uVar7 = 1 << ((byte)ppiVar47 & 0x1f);
                puVar15 = local_418;
                if (local_418 == (uint *)0x0) {
                  puVar15 = local_428;
                }
                iVar10 = iVar6 + 0x1f;
                if (-1 < iVar6) {
                  iVar10 = iVar6;
                }
                local_4a0 = (longlong)(iVar10 >> 5);
                puVar15[local_4a0] = puVar15[local_4a0] | uVar7;
                lVar25 = lVar11 * 0x70;
                local_348 = 0;
                uStack_330 = 0;
                local_328 = 0;
                uStack_320 = 0;
                local_358 = 0;
                uStack_350 = 0;
                local_368 = 0;
                uStack_360 = 0;
                local_378 = (int *)0x0;
                uStack_370 = (int *)0x0;
                uStack_340 = 0x8000000000;
                local_338 = 0xffffffff;
                piVar12 = local_438 + lVar11 * 0x1c + 6;
                *(longlong **)(piVar12 + -6) = plVar34;
                piVar12[-4] = 0;
                piVar12[-3] = 0;
                piVar12[-2] = 0;
                piVar12[-1] = 0;
                local_4d8 = ppiVar47;
                FUN_146f3f522(piVar12,&local_368);
                uStack_320 = uStack_320 & 0xffffffff00000000;
                if (local_328 != 0) {
                  FUN_1400020a8();
                }
                plVar18 = (longlong *)(piVar26 + lVar11 * 0x1c);
                FUN_146f3bd0c(&local_368);
                *(undefined4 *)(plVar18 + 0xd) = 0xffffffff;
                uVar28 = (uint)uStack_430 - local_404;
                iVar6 = 1;
                if (uVar28 != 1) {
                  local_4b0 = lVar25;
                  if ((uint)uStack_430 != local_404) {
                    puVar13 = local_3f8;
                    if (local_3f8 == (undefined1 *)0x0) {
                      puVar13 = local_400;
                    }
                    iVar10 = *(int *)(puVar13 + (ulonglong)(local_3f0 - 1U & (uint)local_4e0) * 4);
                    if (iVar10 != -1) {
                      do {
                        piVar26 = local_438 + (longlong)iVar10 * 0x1c;
                        if (*(longlong *)(local_438 + (longlong)iVar10 * 0x1c) == *plVar18) {
                          piVar26[0x18] = 0;
                          if (*(longlong *)(piVar26 + 0x16) != 0) {
                            FUN_1400020a8();
                          }
                          FUN_146f3bd0c(piVar26 + 6);
                          memmove(piVar26,plVar18,0x68);
                          if (local_404 != 0) {
                            local_438[(longlong)(int)uStack_408 * 0x1c] = (uint)local_4d8;
                          }
                          *(undefined4 *)((longlong)local_438 + local_4b0) = 0xffffffff;
                          uVar28 = 0xffffffff;
                          if (0 < local_404) {
                            uVar28 = uStack_408;
                          }
                          *(uint *)((longlong)local_438 + local_4b0 + 4) = uVar28;
                          uStack_408 = (uint)local_4d8;
                          local_404 = local_404 + 1;
                          puVar15 = local_418;
                          if (local_418 == (uint *)0x0) {
                            puVar15 = local_428;
                          }
                          puVar15[local_4a0] = puVar15[local_4a0] & (uVar7 ^ 0xffffffff);
                          lVar25 = local_4b0;
                          goto LAB_142a9287b;
                        }
                        iVar10 = piVar26[0x1a];
                      } while (iVar10 != -1);
                    }
                  }
                  if (3 < uVar28) {
                    uVar42 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
                    lVar11 = 0x3f;
                    if (uVar42 != 0) {
                      for (; uVar42 >> lVar11 == 0; lVar11 = lVar11 + -1) {
                      }
                    }
                    iVar6 = 1 << ((byte)lVar11 & 0x1f);
                  }
                }
                if (((int)uVar28 < 1) || (iVar6 <= local_3f0)) {
                  uVar7 = local_3f0 - 1U & (uint)local_4e0;
                  *(uint *)((longlong)plVar18 + 0x6c) = uVar7;
                  puVar13 = local_3f8;
                  if (local_3f8 == (undefined1 *)0x0) {
                    puVar13 = local_400;
                  }
                  *(undefined4 *)(plVar18 + 0xd) =
                       *(undefined4 *)
                        (puVar13 + ((longlong)local_3f0 - 1U & (longlong)(int)uVar7) * 4);
                  puVar13 = local_3f8;
                  if (local_3f8 == (undefined1 *)0x0) {
                    puVar13 = local_400;
                  }
                  *(int *)(puVar13 + ((longlong)local_3f0 - 1U & (longlong)(int)uVar7) * 4) =
                       (int)local_4d8;
                }
                else {
                  local_3f0 = iVar6;
                  FUN_142a93c08(&local_438);
                }
LAB_142a9287b:
                piVar26 = (int *)(lVar25 + (longlong)local_438);
                lVar11 = local_4c0;
LAB_142a9288a:
                if (*(ulonglong *)(piVar26 + 2) == 0) {
                  lVar25 = plVar34[0x22];
                  if (lVar25 == 0) {
                    (**(code **)(*plVar34 + 1000))(plVar34);
                    lVar25 = plVar34[0x22];
                  }
                  local_448 = 0;
                  pcVar2 = *(code **)(lVar11 + 0x150);
                  if (pcVar2 != (code *)0x0) {
                    local_3e8 = *(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(lVar11 + 0x40) + 0x270) +
                                   (longlong)((int)uVar39 / 100) * 8) +
                                 (longlong)((int)uVar39 % 100) * 0x38);
                    plVar18 = *(longlong **)(lVar11 + 0x160);
                    if (*(longlong **)(lVar11 + 0x160) == (longlong *)0x0) {
                      plVar18 = local_4a8;
                    }
                    local_440 = lVar25;
                    uVar14 = (**(code **)(*plVar18 + 8))();
                    local_4f8 = &local_448;
                    (*pcVar2)(uVar14,&local_3e8,&local_440,&local_378);
                  }
                  *(longlong **)(piVar26 + 2) = plVar34;
                  piVar26[4] = local_448;
                }
                piVar26[5] = piVar26[5] + 1;
                local_378 = (int *)((ulonglong)local_378 & 0xffffffff00000000);
                piVar26 = (int *)FUN_146f3f630(piVar26 + 6,local_444,&local_444,&local_378);
                *piVar26 = *piVar26 + 1;
                lVar25 = local_498;
                uVar42 = local_4c8;
                ppiVar47 = local_4d0;
              }
            }
            bVar53 = 1 < uVar30;
            uVar37 = (ulonglong)(uVar39 + 1);
            uVar30 = uVar30 >> 1;
          } while (bVar53);
        }
        ppiVar47 = (int **)((longlong)ppiVar47 + 1);
        uVar42 = (ulonglong)((int)uVar42 + 0x20);
      } while (ppiVar47 != local_4e8);
    }
    uVar42 = uStack_430;
    piVar26 = local_438;
    uVar30 = (uint)uStack_430;
    ppiVar47 = (int **)(longlong)local_404;
    uVar39 = (uint)uStack_430 - local_404;
    if (uVar39 != 0 && local_404 <= (int)(uint)uStack_430) {
      iVar6 = 0;
      if (local_404 != 0) {
        uVar7 = uStack_408;
        uVar28 = (uint)uStack_430;
        uVar16 = uVar39;
        if (uStack_408 != 0xffffffff) {
          do {
            local_4e0 = ppiVar47;
            uVar21 = piVar26[(longlong)(int)uVar7 * 0x1c + 1];
            if ((int)uVar7 < (int)uVar39) {
              puVar15 = local_418;
              if (local_418 == (uint *)0x0) {
                puVar15 = local_428;
              }
              piVar12 = piVar26 + (longlong)(int)(uVar28 - 1) * 0x1c + 0x1c;
              uVar8 = uVar28;
              do {
                uVar28 = uVar8 - 1;
                uVar9 = uVar8 + 0x1e;
                if (-1 < (int)uVar28) {
                  uVar9 = uVar28;
                }
                piVar12 = piVar12 + -0x1c;
                uVar8 = uVar28;
              } while ((puVar15[(int)uVar9 >> 5] >> (uVar28 & 0x1f) & 1) == 0);
              memmove(piVar26 + (longlong)(int)uVar7 * 0x1c,piVar12,0x70);
              uVar8 = uVar7 + 0x1f;
              if (-1 < (int)uVar7) {
                uVar8 = uVar7;
              }
              puVar15[(int)uVar8 >> 5] = puVar15[(int)uVar8 >> 5] | 1 << ((byte)uVar7 & 0x1f);
            }
            ppiVar47 = local_4e0;
            uVar7 = uVar21;
          } while (uVar21 != 0xffffffff);
          iVar6 = (uint)uStack_430 - uVar30;
          if (iVar6 != 0) {
            memmove(local_438 + (ulonglong)uVar39 * 0x1c,
                    local_438 + (ulonglong)uVar39 * 0x1c + (longlong)local_4e0 * 0x1c,
                    (longlong)iVar6 * 0x70);
            uVar16 = (uint)uStack_430 - (int)ppiVar47;
          }
        }
        uStack_430 = CONCAT44(uStack_430._4_4_,uVar16);
        iVar6 = local_410 - uVar30;
        if (iVar6 != 0) {
          puVar15 = local_418;
          if (local_418 == (uint *)0x0) {
            puVar15 = local_428;
          }
          local_4f8 = (int *)CONCAT44(local_4f8._4_4_,iVar6);
          FUN_14493566c(puVar15,uVar39,puVar15,uVar42 & 0xffffffff);
          uVar39 = local_410 - (int)ppiVar47;
        }
        uVar30 = uVar39 + 0x1f;
        if (-1 < (int)uVar39) {
          uVar30 = uVar39;
        }
        local_410 = uVar39;
        if ((int)uVar39 % 0x20 != 0) {
          puVar15 = local_428;
          if (local_418 != (uint *)0x0) {
            puVar15 = local_418;
          }
          bVar38 = -(char)((int)uVar39 % 0x20);
          puVar15[(int)uVar30 >> 5] =
               (puVar15[(int)uVar30 >> 5] << (bVar38 & 0x1f)) >> (bVar38 & 0x1f);
        }
        uStack_408 = 0xffffffff;
        local_404 = 0;
        uVar30 = uStack_430._4_4_;
        iVar6 = 0;
        if (uStack_430._4_4_ != (uint)uStack_430) {
          FUN_140875b54(&local_438);
          uVar30 = (uint)uStack_430;
          iVar6 = local_404;
        }
      }
      piVar26 = local_438;
      uVar30 = uVar30 - iVar6;
      if (1 < (int)uVar30) {
        memset(&local_368,0,0x2f0);
        local_378 = piVar26;
        uStack_370 = piVar26 + (ulonglong)uVar30 * 0x1c + -0x1c;
        fVar54 = logf((float)(int)uVar30);
        local_368 = CONCAT44(local_368._4_4_,(int)(longlong)(fVar54 + fVar54));
        ppiVar47 = &local_378;
        do {
          ppiVar22 = (int **)*ppiVar47;
          ppiVar27 = (int **)ppiVar47[1];
          iVar6 = *(int *)(ppiVar47 + 2);
          iVar10 = (int)((ulonglong)((longlong)ppiVar27 - (longlong)ppiVar22) >> 4) * -0x49249249;
          uVar42 = (ulonglong)(iVar10 + 1);
          ppiVar35 = ppiVar22;
          ppiVar40 = ppiVar27;
          local_4e8 = ppiVar47;
          if (iVar6 != 0) {
LAB_142a92e97:
            ppiVar47 = local_4e8;
            local_4e0 = ppiVar22;
            if (8 < (int)(uint)uVar42) {
              local_4c8 = CONCAT44(local_4c8._4_4_,iVar6);
              ppiVar47 = ppiVar22 + (ulonglong)((uint)uVar42 >> 1) * 0xe;
              plVar34 = &local_3e8;
              for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar34 = (longlong)*ppiVar47;
                ppiVar47 = ppiVar47 + 1;
                plVar34 = plVar34 + 1;
              }
              ppiVar47 = ppiVar22;
              ppiVar29 = ppiVar22 + (ulonglong)((uint)uVar42 >> 1) * 0xe;
              for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                *ppiVar29 = *ppiVar47;
                ppiVar47 = ppiVar47 + 1;
                ppiVar29 = ppiVar29 + 1;
              }
              plVar34 = &local_3e8;
              ppiVar47 = ppiVar22;
              for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                *ppiVar47 = (int *)*plVar34;
                plVar34 = plVar34 + 1;
                ppiVar47 = ppiVar47 + 1;
              }
              ppiVar29 = ppiVar40 + 0xe;
              ppiVar47 = ppiVar22 + 1;
              local_4d8 = ppiVar35;
              local_4d0 = ppiVar27;
              do {
                ppiVar33 = local_4e0;
                ppiVar27 = ppiVar22 + 0xe;
                ppiVar32 = ppiVar22 + 0xe;
                do {
                  ppiVar22 = ppiVar32;
                  ppiVar35 = ppiVar27;
                  if (ppiVar40 < ppiVar22) break;
                  fVar54 = (float)FUN_142a93e98(ppiVar47);
                  fVar55 = (float)FUN_142a93e98(ppiVar22 + 1);
                  ppiVar27 = ppiVar35 + 0xe;
                  ppiVar32 = ppiVar22 + 0xe;
                } while (fVar54 < fVar55);
                ppiVar32 = ppiVar29 + -0x1c;
                do {
                  ppiVar51 = ppiVar29;
                  ppiVar27 = ppiVar32;
                  ppiVar29 = ppiVar51 + -0xe;
                  if (ppiVar29 <= ppiVar33) break;
                  fVar54 = (float)FUN_142a93e98(ppiVar51 + -0xd);
                  fVar55 = (float)FUN_142a93e98(ppiVar47);
                  ppiVar32 = ppiVar27 + -0xe;
                } while (fVar54 < fVar55);
                lVar11 = 0xe;
                ppiVar33 = local_4e0;
                ppiVar32 = ppiVar22;
                plVar34 = &local_3e8;
                if (ppiVar29 < ppiVar22) goto code_r0x000142a92fc0;
                for (; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *plVar34 = (longlong)*ppiVar32;
                  ppiVar32 = ppiVar32 + 1;
                  plVar34 = plVar34 + 1;
                }
                ppiVar27 = ppiVar29;
                ppiVar35 = ppiVar22;
                for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *ppiVar35 = *ppiVar27;
                  ppiVar27 = ppiVar27 + 1;
                  ppiVar35 = ppiVar35 + 1;
                }
                plVar34 = &local_3e8;
                ppiVar27 = ppiVar29;
                for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *ppiVar27 = (int *)*plVar34;
                  plVar34 = plVar34 + 1;
                  ppiVar27 = ppiVar27 + 1;
                }
              } while( true );
            }
            if (ppiVar22 < ppiVar40) {
              ppiVar35 = ppiVar22 + 0xf;
              ppiVar27 = ppiVar22;
              ppiVar29 = ppiVar22 + 0xe;
              do {
                while (ppiVar29 <= ppiVar40) {
                  fVar54 = (float)FUN_142a93e98(ppiVar27 + 1);
                  fVar55 = (float)FUN_142a93e98(ppiVar35);
                  if (fVar55 <= fVar54) {
                    ppiVar27 = ppiVar35 + -1;
                  }
                  ppiVar29 = ppiVar35 + 0xd;
                  ppiVar35 = ppiVar35 + 0xe;
                }
                ppiVar33 = ppiVar40 + -0xe;
                ppiVar35 = ppiVar27;
                plVar34 = &local_3e8;
                for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *plVar34 = (longlong)*ppiVar35;
                  ppiVar35 = ppiVar35 + 1;
                  plVar34 = plVar34 + 1;
                }
                ppiVar35 = ppiVar40;
                for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *ppiVar27 = *ppiVar35;
                  ppiVar35 = ppiVar35 + 1;
                  ppiVar27 = ppiVar27 + 1;
                }
                plVar34 = &local_3e8;
                for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                  *ppiVar40 = (int *)*plVar34;
                  plVar34 = plVar34 + 1;
                  ppiVar40 = ppiVar40 + 1;
                }
                ppiVar35 = ppiVar22 + 0xf;
                ppiVar27 = local_4e0;
                ppiVar29 = ppiVar22 + 0xe;
                ppiVar40 = ppiVar33;
              } while (local_4e0 < ppiVar33);
            }
            goto LAB_142a9339e;
          }
LAB_142a93095:
          iVar6 = (int)uVar42;
          ppiVar47 = local_4e8;
          if (iVar6 != 0) {
            iVar50 = (iVar10 - (iVar10 + -1 >> 0x1f)) + -1 >> 1;
            iVar10 = iVar50;
joined_r0x000142a930b8:
            do {
              iVar46 = iVar10 * 2 + 1;
              if (iVar46 < iVar6) {
                iVar24 = iVar10 * 2 + 2;
                if (iVar24 < iVar6) {
                  fVar54 = (float)FUN_142a93e98(ppiVar22 + (longlong)iVar24 * 0xe + 1);
                  fVar55 = (float)FUN_142a93e98(ppiVar22 + (longlong)iVar46 * 0xe + 1);
                  if (fVar54 < fVar55) {
                    iVar46 = iVar24;
                  }
                }
                fVar54 = (float)FUN_142a93e98(ppiVar22 + (longlong)iVar10 * 0xe + 1);
                fVar55 = (float)FUN_142a93e98(ppiVar22 + (longlong)iVar46 * 0xe + 1);
                if (fVar55 <= fVar54) {
                  ppiVar47 = ppiVar22 + (longlong)iVar10 * 0xe;
                  plVar34 = &local_3e8;
                  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *plVar34 = (longlong)*ppiVar47;
                    ppiVar47 = ppiVar47 + 1;
                    plVar34 = plVar34 + 1;
                  }
                  ppiVar47 = ppiVar22 + (longlong)iVar46 * 0xe;
                  ppiVar27 = ppiVar22 + (longlong)iVar10 * 0xe;
                  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *ppiVar27 = *ppiVar47;
                    ppiVar47 = ppiVar47 + 1;
                    ppiVar27 = ppiVar27 + 1;
                  }
                  plVar34 = &local_3e8;
                  ppiVar47 = ppiVar22 + (longlong)iVar46 * 0xe;
                  for (lVar11 = 0xe; iVar10 = iVar46, lVar11 != 0; lVar11 = lVar11 + -1) {
                    *ppiVar47 = (int *)*plVar34;
                    plVar34 = plVar34 + 1;
                    ppiVar47 = ppiVar47 + 1;
                  }
                  goto joined_r0x000142a930b8;
                }
              }
              bVar53 = iVar50 != 0;
              iVar50 = iVar50 + -1;
              iVar10 = iVar50;
            } while (bVar53);
            ppiVar47 = local_4e8;
            if (1 < iVar6) {
              ppiVar27 = ppiVar22;
              plVar34 = &local_3e8;
              for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                *plVar34 = (longlong)*ppiVar27;
                ppiVar27 = ppiVar27 + 1;
                plVar34 = plVar34 + 1;
              }
              ppiVar27 = ppiVar22 + (uVar42 - 1) * 0xe;
              ppiVar40 = ppiVar22;
              for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                *ppiVar40 = *ppiVar27;
                ppiVar27 = ppiVar27 + 1;
                ppiVar40 = ppiVar40 + 1;
              }
              plVar34 = &local_3e8;
              ppiVar27 = ppiVar22 + (uVar42 - 1) * 0xe;
              for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                *ppiVar27 = (int *)*plVar34;
                plVar34 = plVar34 + 1;
                ppiVar27 = ppiVar27 + 1;
              }
              uVar42 = uVar42 - 1;
              if (iVar6 != 2) {
                do {
                  iVar6 = 0;
                  iVar50 = 1;
                  iVar10 = 0;
                  do {
                    iVar6 = iVar6 + 2;
                    iVar46 = iVar50;
                    if ((longlong)iVar6 < (longlong)uVar42) {
                      fVar54 = (float)FUN_142a93e98(ppiVar22 + (longlong)iVar6 * 0xe + 1);
                      fVar55 = (float)FUN_142a93e98(ppiVar22 + (longlong)iVar50 * 0xe + 1);
                      if (fVar54 < fVar55) {
                        iVar46 = iVar6;
                      }
                    }
                    fVar54 = (float)FUN_142a93e98(ppiVar22 + (longlong)iVar10 * 0xe + 1);
                    fVar55 = (float)FUN_142a93e98(ppiVar22 + (longlong)iVar46 * 0xe + 1);
                    if (fVar54 < fVar55) break;
                    ppiVar47 = ppiVar22 + (longlong)iVar10 * 0xe;
                    plVar34 = &local_3e8;
                    for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                      *plVar34 = (longlong)*ppiVar47;
                      ppiVar47 = ppiVar47 + 1;
                      plVar34 = plVar34 + 1;
                    }
                    ppiVar47 = ppiVar22 + (longlong)iVar46 * 0xe;
                    ppiVar27 = ppiVar22 + (longlong)iVar10 * 0xe;
                    for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                      *ppiVar27 = *ppiVar47;
                      ppiVar47 = ppiVar47 + 1;
                      ppiVar27 = ppiVar27 + 1;
                    }
                    plVar34 = &local_3e8;
                    ppiVar47 = ppiVar22 + (longlong)iVar46 * 0xe;
                    for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                      *ppiVar47 = (int *)*plVar34;
                      plVar34 = plVar34 + 1;
                      ppiVar47 = ppiVar47 + 1;
                    }
                    iVar6 = iVar46 * 2;
                    iVar50 = iVar46 * 2 + 1;
                    iVar10 = iVar46;
                  } while ((longlong)iVar50 < (longlong)uVar42);
                  ppiVar47 = ppiVar22;
                  plVar34 = &local_3e8;
                  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *plVar34 = (longlong)*ppiVar47;
                    ppiVar47 = ppiVar47 + 1;
                    plVar34 = plVar34 + 1;
                  }
                  ppiVar47 = ppiVar22 + (uVar42 - 1) * 0xe;
                  ppiVar27 = ppiVar22;
                  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *ppiVar27 = *ppiVar47;
                    ppiVar47 = ppiVar47 + 1;
                    ppiVar27 = ppiVar27 + 1;
                  }
                  plVar34 = &local_3e8;
                  ppiVar47 = ppiVar22 + (uVar42 - 1) * 0xe;
                  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
                    *ppiVar47 = (int *)*plVar34;
                    plVar34 = plVar34 + 1;
                    ppiVar47 = ppiVar47 + 1;
                  }
                  bVar53 = 2 < uVar42;
                  ppiVar47 = local_4e8;
                  uVar42 = uVar42 - 1;
                } while (bVar53);
              }
            }
          }
LAB_142a9339e:
          ppiVar47 = ppiVar47 + -3;
        } while (&local_378 <= ppiVar47);
      }
    }
    FUN_142a93c08();
    if (local_410 == 0) {
      uVar37 = 1;
      uVar42 = 0;
      iVar6 = 0;
      uVar30 = 0;
    }
    else {
      puVar15 = local_418;
      if (local_418 == (uint *)0x0) {
        puVar15 = local_428;
      }
      uVar30 = *puVar15;
      if (uVar30 == 0) {
        iVar6 = local_410 + 0x1e;
        if (-1 < (int)(local_410 - 1)) {
          iVar6 = local_410 - 1;
        }
        uVar42 = 0;
        uVar37 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar37 = uVar42;
        }
        iVar6 = 0;
        do {
          if (uVar37 == uVar42) goto LAB_142a9399f;
          iVar6 = iVar6 + 0x20;
          uVar30 = puVar15[uVar42 + 1];
          uVar42 = uVar42 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar42 = 0;
        iVar6 = 0;
      }
      uVar37 = (ulonglong)(-uVar30 & uVar30);
      uVar23 = uVar37 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar30 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)local_410 <= (int)uVar30) {
        uVar30 = local_410;
      }
    }
    if ((int)uVar30 < (int)local_410) {
      uVar39 = 0xffffffff;
      local_4c8 = CONCAT44(local_4c8._4_4_,local_44c);
      iVar10 = 0;
      do {
        piVar26 = local_438;
        local_4e0 = (int **)CONCAT44(local_4e0._4_4_,uVar39);
        lVar11 = (longlong)(int)uVar30;
        ppiVar47 = (int **)(local_438 + lVar11 * 0x1c + 6);
        if (local_438[lVar11 * 0x1c + 0x13] < local_438[lVar11 * 0x1c + 8]) {
          local_4d0 = (int **)CONCAT44(local_4d0._4_4_,iVar6);
          piVar12 = local_438 + lVar11 * 0x1c + 8;
          local_4d8 = (int **)(local_438 + lVar11 * 0x1c + 6);
          FUN_146f3fb98();
          uVar30 = *piVar12 - piVar26[lVar11 * 0x1c + 0x13];
          ppiVar47 = local_4d8;
          iVar6 = (int)local_4d0;
          if (1 < (int)uVar30) {
            piVar26 = *local_4d8;
            memset(&local_368,0,0x2f0);
            uStack_370 = piVar26 + (ulonglong)uVar30 * 4 + -4;
            local_378 = piVar26;
            fVar54 = logf((float)(int)uVar30);
            local_368 = CONCAT44(local_368._4_4_,(int)(longlong)(fVar54 + fVar54));
            ppiVar47 = &local_378;
            do {
              pfVar20 = (float *)*ppiVar47;
              pfVar44 = (float *)ppiVar47[1];
              iVar6 = *(int *)(ppiVar47 + 2);
              iVar50 = (int)((ulonglong)((longlong)pfVar44 - (longlong)pfVar20) >> 4);
              uVar30 = iVar50 + 1;
              pfVar36 = pfVar20;
              pfVar49 = pfVar44;
              if (iVar6 != 0) {
LAB_142a93542:
                if (8 < (int)uVar30) {
                  uVar14 = *(undefined8 *)(pfVar20 + (ulonglong)(uVar30 >> 1) * 4);
                  uVar3 = *(undefined8 *)(pfVar20 + (ulonglong)(uVar30 >> 1) * 4 + 2);
                  uVar4 = *(undefined8 *)(pfVar20 + 2);
                  *(undefined8 *)(pfVar20 + (ulonglong)(uVar30 >> 1) * 4) = *(undefined8 *)pfVar20;
                  *(undefined8 *)(pfVar20 + (ulonglong)(uVar30 >> 1) * 4 + 2) = uVar4;
                  *(undefined8 *)pfVar20 = uVar14;
                  *(undefined8 *)(pfVar20 + 2) = uVar3;
                  pfVar48 = pfVar44 + 4;
                  pfVar19 = pfVar20;
                  do {
                    pfVar5 = pfVar19 + 4;
                    pfVar45 = pfVar19 + 4;
                    do {
                      pfVar52 = pfVar45;
                      pfVar19 = pfVar5;
                      if (pfVar44 < pfVar19) break;
                      pfVar5 = pfVar19 + 4;
                      pfVar45 = pfVar52 + 4;
                    } while (*pfVar20 < *pfVar19);
                    pfVar5 = pfVar48 + -8;
                    do {
                      pfVar45 = pfVar48;
                      pfVar41 = pfVar5;
                      pfVar48 = pfVar45 + -4;
                      if (pfVar48 <= pfVar20) break;
                      pfVar5 = pfVar41 + -4;
                    } while (*pfVar48 < *pfVar20);
                    if (pfVar48 < pfVar19) goto LAB_142a935ed;
                    uVar14 = *(undefined8 *)pfVar19;
                    uVar3 = *(undefined8 *)(pfVar19 + 2);
                    uVar4 = *(undefined8 *)(pfVar45 + -2);
                    *(undefined8 *)pfVar19 = *(undefined8 *)pfVar48;
                    *(undefined8 *)(pfVar19 + 2) = uVar4;
                    *(undefined8 *)pfVar48 = uVar14;
                    *(undefined8 *)(pfVar45 + -2) = uVar3;
                  } while( true );
                }
                if (pfVar20 < pfVar44) {
                  do {
                    pfVar36 = pfVar20;
                    if (pfVar20 + 4 <= pfVar44) {
                      fVar54 = *pfVar20;
                      pfVar49 = pfVar20 + 4;
                      do {
                        fVar55 = *pfVar49;
                        if (fVar55 <= fVar54) {
                          pfVar36 = pfVar49;
                        }
                        fVar54 = (float)(~-(uint)(fVar55 <= fVar54) & (uint)fVar54 |
                                        (uint)fVar55 & -(uint)(fVar55 <= fVar54));
                        pfVar49 = pfVar49 + 4;
                      } while (pfVar49 <= pfVar44);
                    }
                    local_3e8 = *(longlong *)pfVar36;
                    uStack_3e0 = *(undefined8 *)(pfVar36 + 2);
                    lVar11 = local_3e8;
                    uVar3 = uStack_3e0;
                    uVar14 = *(undefined8 *)(pfVar44 + 2);
                    *(undefined8 *)pfVar36 = *(undefined8 *)pfVar44;
                    *(undefined8 *)(pfVar36 + 2) = uVar14;
                    local_3e8._4_4_ = (float)((ulonglong)local_3e8 >> 0x20);
                    uStack_3e0._4_4_ = (float)((ulonglong)uStack_3e0 >> 0x20);
                    *pfVar44 = (float)local_3e8;
                    pfVar44[1] = local_3e8._4_4_;
                    pfVar44[2] = (float)uStack_3e0;
                    pfVar44[3] = uStack_3e0._4_4_;
                    pfVar44 = pfVar44 + -4;
                    local_3e8 = lVar11;
                    uStack_3e0 = uVar3;
                  } while (pfVar20 < pfVar44);
                }
                goto LAB_142a938c5;
              }
LAB_142a93695:
              if (uVar30 != 0) {
                iVar6 = (iVar50 - (iVar50 + -1 >> 0x1f)) + -1 >> 1;
                iVar50 = iVar6;
joined_r0x000142a936b6:
                do {
                  iVar46 = iVar6 * 2 + 1;
                  if (iVar46 < (int)uVar30) {
                    iVar24 = iVar6 * 2 + 2;
                    if ((iVar24 < (int)uVar30) &&
                       (pfVar20[(longlong)iVar24 * 4] < pfVar20[(longlong)iVar46 * 4])) {
                      iVar46 = iVar24;
                    }
                    if (pfVar20[(longlong)iVar46 * 4] <= pfVar20[(longlong)iVar6 * 4]) {
                      pfVar44 = pfVar20 + (longlong)iVar6 * 4;
                      pfVar36 = pfVar20 + (longlong)iVar46 * 4;
                      local_3e8 = *(longlong *)pfVar44;
                      uStack_3e0 = *(undefined8 *)(pfVar44 + 2);
                      lVar11 = local_3e8;
                      uVar3 = uStack_3e0;
                      uVar14 = *(undefined8 *)(pfVar36 + 2);
                      *(undefined8 *)pfVar44 = *(undefined8 *)pfVar36;
                      *(undefined8 *)(pfVar44 + 2) = uVar14;
                      local_3e8._4_4_ = (float)((ulonglong)local_3e8 >> 0x20);
                      uStack_3e0._4_4_ = (float)((ulonglong)uStack_3e0 >> 0x20);
                      *pfVar36 = (float)local_3e8;
                      pfVar36[1] = local_3e8._4_4_;
                      pfVar36[2] = (float)uStack_3e0;
                      pfVar36[3] = uStack_3e0._4_4_;
                      iVar6 = iVar46;
                      local_3e8 = lVar11;
                      uStack_3e0 = uVar3;
                      goto joined_r0x000142a936b6;
                    }
                  }
                  bVar53 = iVar50 != 0;
                  iVar6 = iVar50 + -1;
                  iVar50 = iVar6;
                } while (bVar53);
                if (1 < (int)uVar30) {
                  uVar23 = (ulonglong)uVar30 - 1;
                  local_3e8 = *(longlong *)pfVar20;
                  uStack_3e0 = *(undefined8 *)(pfVar20 + 2);
                  lVar11 = local_3e8;
                  uVar3 = uStack_3e0;
                  uVar14 = *(undefined8 *)(pfVar20 + uVar23 * 4 + 2);
                  *(undefined8 *)pfVar20 = *(undefined8 *)(pfVar20 + uVar23 * 4);
                  *(undefined8 *)(pfVar20 + 2) = uVar14;
                  local_3e8._4_4_ = (float)((ulonglong)local_3e8 >> 0x20);
                  uStack_3e0._4_4_ = (float)((ulonglong)uStack_3e0 >> 0x20);
                  pfVar44 = pfVar20 + uVar23 * 4;
                  *pfVar44 = (float)local_3e8;
                  pfVar44[1] = local_3e8._4_4_;
                  pfVar44[2] = (float)uStack_3e0;
                  pfVar44[3] = uStack_3e0._4_4_;
                  local_3e8 = lVar11;
                  uStack_3e0 = uVar3;
                  if (uVar30 != 2) {
                    do {
                      iVar6 = 0;
                      iVar46 = 1;
                      iVar50 = 0;
                      do {
                        iVar6 = iVar6 + 2;
                        iVar24 = iVar46;
                        if (((longlong)iVar6 < (longlong)uVar23) &&
                           (pfVar20[(longlong)iVar6 * 4] < pfVar20[(longlong)iVar46 * 4])) {
                          iVar24 = iVar6;
                        }
                        if (pfVar20[(longlong)iVar50 * 4] < pfVar20[(longlong)iVar24 * 4]) break;
                        pfVar44 = pfVar20 + (longlong)iVar50 * 4;
                        pfVar36 = pfVar20 + (longlong)iVar24 * 4;
                        uVar14 = *(undefined8 *)pfVar44;
                        uVar3 = *(undefined8 *)(pfVar44 + 2);
                        uVar4 = *(undefined8 *)(pfVar36 + 2);
                        *(undefined8 *)pfVar44 = *(undefined8 *)pfVar36;
                        *(undefined8 *)(pfVar44 + 2) = uVar4;
                        *(undefined8 *)pfVar36 = uVar14;
                        *(undefined8 *)(pfVar36 + 2) = uVar3;
                        iVar6 = iVar24 * 2;
                        iVar46 = iVar24 * 2 + 1;
                        iVar50 = iVar24;
                      } while ((longlong)iVar46 < (longlong)uVar23);
                      uVar43 = uVar23 - 1;
                      local_3e8 = *(longlong *)pfVar20;
                      uStack_3e0 = *(undefined8 *)(pfVar20 + 2);
                      lVar11 = local_3e8;
                      uVar3 = uStack_3e0;
                      uVar14 = *(undefined8 *)(pfVar20 + uVar43 * 4 + 2);
                      *(undefined8 *)pfVar20 = *(undefined8 *)(pfVar20 + uVar43 * 4);
                      *(undefined8 *)(pfVar20 + 2) = uVar14;
                      local_3e8._4_4_ = (float)((ulonglong)local_3e8 >> 0x20);
                      uStack_3e0._4_4_ = (float)((ulonglong)uStack_3e0 >> 0x20);
                      pfVar44 = pfVar20 + uVar43 * 4;
                      *pfVar44 = (float)local_3e8;
                      pfVar44[1] = local_3e8._4_4_;
                      pfVar44[2] = (float)uStack_3e0;
                      pfVar44[3] = uStack_3e0._4_4_;
                      bVar53 = 2 < uVar23;
                      uVar23 = uVar43;
                      local_3e8 = lVar11;
                      uStack_3e0 = uVar3;
                    } while (bVar53);
                  }
                }
              }
LAB_142a938c5:
              ppiVar47 = ppiVar47 + -3;
            } while (&local_378 <= ppiVar47);
            ppiVar47 = local_4d8;
            iVar6 = (int)local_4d0;
          }
        }
        FUN_146f3f9f0(ppiVar47);
        iVar10 = iVar10 + 1;
        if (iVar10 == (int)local_4c8) break;
        uVar39 = (uint)local_4e0 & ~(uint)uVar37;
        puVar15 = local_418;
        if (local_418 == (uint *)0x0) {
          puVar15 = local_428;
        }
        iVar50 = (int)uVar42;
        lVar11 = (longlong)iVar50;
        uVar30 = puVar15[lVar11] & uVar39;
        if (uVar30 == 0) {
          iVar46 = local_410 + 0x1e;
          if (-1 < (int)(local_410 - 1)) {
            iVar46 = local_410 - 1;
          }
          iVar46 = iVar46 >> 5;
          iVar24 = iVar46;
          if (iVar46 < iVar50) {
            iVar24 = iVar50;
          }
          if (iVar46 <= iVar50) break;
          lVar25 = 0;
          while( true ) {
            iVar6 = iVar6 + 0x20;
            uVar30 = puVar15[lVar11 + lVar25 + 1];
            if (uVar30 != 0) break;
            lVar25 = lVar25 + 1;
            if (iVar24 - lVar11 == lVar25) goto LAB_142a9399f;
          }
          uVar42 = (ulonglong)(iVar50 + (int)lVar25 + 1);
          uVar39 = 0xffffffff;
        }
        uVar37 = (ulonglong)(-uVar30 & uVar30);
        uVar23 = uVar37 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar30 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while ((int)uVar30 < (int)local_410);
    }
LAB_142a9399f:
    if (local_468 != (int *)0x0) {
      FUN_1400020a8();
    }
    local_3f0 = 0;
    if (local_3f8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_410 == 0) {
      uVar37 = 1;
      uVar42 = 0;
      iVar6 = 0;
      uVar30 = 0;
    }
    else {
      puVar15 = local_418;
      if (local_418 == (uint *)0x0) {
        puVar15 = local_428;
      }
      uVar30 = *puVar15;
      if (uVar30 == 0) {
        iVar6 = local_410 + 0x1e;
        if (-1 < (int)(local_410 - 1)) {
          iVar6 = local_410 - 1;
        }
        uVar42 = 0;
        uVar37 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar37 = uVar42;
        }
        iVar6 = 0;
        do {
          if (uVar37 == uVar42) goto LAB_142a93b3b;
          iVar6 = iVar6 + 0x20;
          uVar30 = puVar15[uVar42 + 1];
          uVar42 = uVar42 + 1;
        } while (uVar30 == 0);
      }
      else {
        uVar42 = 0;
        iVar6 = 0;
      }
      uVar37 = (ulonglong)(-uVar30 & uVar30);
      uVar23 = uVar37 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar30 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if ((int)local_410 <= (int)uVar30) {
        uVar30 = local_410;
      }
    }
    if ((int)uVar30 < (int)local_410) {
      uVar39 = 0xffffffff;
      do {
        piVar26 = local_438;
        lVar11 = (longlong)(int)uVar30;
        local_438[lVar11 * 0x1c + 0x18] = 0;
        if (*(longlong *)(local_438 + lVar11 * 0x1c + 0x16) != 0) {
          FUN_1400020a8();
        }
        FUN_146f3bd0c(piVar26 + lVar11 * 0x1c + 6);
        uVar39 = uVar39 & ~(uint)uVar37;
        puVar15 = local_418;
        if (local_418 == (uint *)0x0) {
          puVar15 = local_428;
        }
        iVar10 = (int)uVar42;
        lVar11 = (longlong)iVar10;
        uVar30 = puVar15[lVar11] & uVar39;
        if (uVar30 == 0) {
          iVar50 = local_410 + 0x1e;
          if (-1 < (int)(local_410 - 1)) {
            iVar50 = local_410 - 1;
          }
          iVar50 = iVar50 >> 5;
          iVar46 = iVar50;
          if (iVar50 < iVar10) {
            iVar46 = iVar10;
          }
          if (iVar50 <= iVar10) break;
          lVar25 = 0;
          while( true ) {
            iVar6 = iVar6 + 0x20;
            uVar30 = puVar15[lVar11 + lVar25 + 1];
            if (uVar30 != 0) break;
            lVar25 = lVar25 + 1;
            if (iVar46 - lVar11 == lVar25) goto LAB_142a93b3b;
          }
          uVar42 = (ulonglong)(iVar10 + (int)lVar25 + 1);
          uVar39 = 0xffffffff;
        }
        uVar37 = (ulonglong)(-uVar30 & uVar30);
        uVar23 = uVar37 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        uVar30 = (iVar6 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while ((int)uVar30 < (int)local_410);
    }
LAB_142a93b3b:
    uVar42 = uStack_430 >> 0x20;
    uStack_430 = uStack_430 & 0xffffffff00000000;
    if ((int)uVar42 != 0) {
      FUN_140875b54(&local_438,0);
    }
    uStack_408 = 0xffffffff;
    local_404 = 0;
    local_410 = 0;
    if (0x80 < local_40c) {
      local_40c = 0x80;
      FUN_1446efbd8(local_428,0);
    }
    if (local_418 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_438 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_70 ^ (ulonglong)auStack_518) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000142a92fc0:
  for (; lVar11 != 0; lVar11 = lVar11 + -1) {
    *plVar34 = (longlong)*ppiVar33;
    ppiVar33 = ppiVar33 + 1;
    plVar34 = plVar34 + 1;
  }
  ppiVar47 = ppiVar29;
  ppiVar33 = local_4e0;
  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
    *ppiVar33 = *ppiVar47;
    ppiVar47 = ppiVar47 + 1;
    ppiVar33 = ppiVar33 + 1;
  }
  plVar34 = &local_3e8;
  ppiVar47 = ppiVar29;
  for (lVar11 = 0xe; lVar11 != 0; lVar11 = lVar11 + -1) {
    *ppiVar47 = (int *)*plVar34;
    plVar34 = plVar34 + 1;
    ppiVar47 = ppiVar47 + 1;
  }
  iVar6 = (int)local_4c8 + -1;
  ppiVar51 = ppiVar51 + -0x1c;
  if ((longlong)ppiVar27 - (longlong)local_4d8 < (longlong)local_4d0 - (longlong)ppiVar35) {
    if (ppiVar22 < ppiVar40) {
      *local_4e8 = (int *)ppiVar22;
      local_4e8[1] = (int *)ppiVar40;
      *(int *)(local_4e8 + 2) = iVar6;
      local_4e8 = local_4e8 + 3;
    }
    ppiVar35 = local_4e0;
    ppiVar47 = local_4e8;
    ppiVar22 = local_4e0;
    if (ppiVar29 <= local_4e0 + 0xe) goto LAB_142a9339e;
  }
  else {
    ppiVar47 = local_4e8;
    if (local_4e0 + 0xe < ppiVar29) {
      *local_4e8 = (int *)local_4e0;
      local_4e8[1] = (int *)ppiVar51;
      *(int *)(local_4e8 + 2) = iVar6;
      ppiVar47 = local_4e8 + 3;
    }
    ppiVar27 = ppiVar40;
    ppiVar51 = ppiVar40;
    if (ppiVar40 <= ppiVar22) goto LAB_142a9339e;
  }
  local_4e8 = ppiVar47;
  iVar10 = (int)((ulonglong)((longlong)ppiVar27 - (longlong)ppiVar35) >> 4) * -0x49249249;
  uVar42 = (ulonglong)(iVar10 + 1);
  ppiVar40 = ppiVar51;
  if (iVar6 == 0) goto LAB_142a93095;
  goto LAB_142a92e97;
LAB_142a935ed:
  local_3e8 = *(longlong *)pfVar20;
  uStack_3e0 = *(undefined8 *)(pfVar20 + 2);
  lVar11 = local_3e8;
  uVar3 = uStack_3e0;
  uVar14 = *(undefined8 *)(pfVar45 + -2);
  *(undefined8 *)pfVar20 = *(undefined8 *)pfVar48;
  *(undefined8 *)(pfVar20 + 2) = uVar14;
  local_3e8._4_4_ = (float)((ulonglong)local_3e8 >> 0x20);
  uStack_3e0._4_4_ = (float)((ulonglong)uStack_3e0 >> 0x20);
  *pfVar48 = (float)local_3e8;
  pfVar45[-3] = local_3e8._4_4_;
  pfVar45[-2] = (float)uStack_3e0;
  pfVar45[-1] = uStack_3e0._4_4_;
  iVar6 = iVar6 + -1;
  pfVar45 = pfVar45 + -8;
  local_3e8 = lVar11;
  uStack_3e0 = uVar3;
  if ((longlong)pfVar41 - (longlong)pfVar36 < (longlong)pfVar49 - (longlong)pfVar52) {
    if (pfVar19 < pfVar44) {
      *ppiVar47 = (int *)pfVar19;
      ppiVar47[1] = (int *)pfVar44;
      *(int *)(ppiVar47 + 2) = iVar6;
      ppiVar47 = ppiVar47 + 3;
    }
    pfVar52 = pfVar20;
    if (pfVar48 <= pfVar20 + 4) goto LAB_142a938c5;
  }
  else {
    if (pfVar20 + 4 < pfVar48) {
      *ppiVar47 = (int *)pfVar20;
      ppiVar47[1] = (int *)pfVar45;
      *(int *)(ppiVar47 + 2) = iVar6;
      ppiVar47 = ppiVar47 + 3;
    }
    pfVar20 = pfVar19;
    pfVar41 = pfVar44;
    pfVar45 = pfVar44;
    if (pfVar44 <= pfVar19) goto LAB_142a938c5;
  }
  iVar50 = (int)((ulonglong)((longlong)pfVar41 - (longlong)pfVar52) >> 4);
  uVar30 = iVar50 + 1;
  pfVar36 = pfVar52;
  pfVar44 = pfVar45;
  pfVar49 = pfVar41;
  if (iVar6 == 0) goto LAB_142a93695;
  goto LAB_142a93542;
}



// FUNCTION 142a93c08 FUN_142a93c08 body=656 status=ok
// SIG undefined FUN_142a93c08(void)

void FUN_142a93c08(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 0) {
    return;
  }
  plVar1 = param_1 + 7;
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_142a93c83;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_142a93c83:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x70;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x6c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x68 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 142a93e98 FUN_142a93e98 body=378 status=ok
// SIG undefined FUN_142a93e98(void)

float FUN_142a93e98(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar12 = 0;
    iVar13 = 0;
    iVar7 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x20);
    }
    uVar11 = *puVar3;
    if (uVar11 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar10 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar10 = uVar12;
      }
      iVar13 = 0;
      do {
        if (uVar10 == uVar12) {
          return 0.0;
        }
        iVar13 = iVar13 + 0x20;
        uVar11 = puVar3[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar12 = 0;
      iVar13 = 0;
    }
    uVar10 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar7) {
      iVar7 = iVar2;
    }
  }
  fVar15 = 0.0;
  if (iVar7 != iVar2) {
    puVar3 = (uint *)(param_1 + 0x20);
    if (*(uint **)(param_1 + 0x30) != (uint *)0x0) {
      puVar3 = *(uint **)(param_1 + 0x30);
    }
    iVar4 = iVar2 + 0x1e;
    if (-1 < iVar2 + -1) {
      iVar4 = iVar2 + -1;
    }
    iVar4 = iVar4 >> 5;
    uVar5 = 0xffffffff;
    uVar11 = 0;
    fVar16 = fVar15;
    do {
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x10) + 4 + (longlong)iVar7 * 0x10);
      fVar15 = fVar16;
      if ((uVar11 <= uVar8) &&
         (fVar15 = *(float *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0x10)),
         uVar11 = uVar8, fVar15 <= fVar16)) {
        fVar15 = fVar16;
      }
      uVar5 = uVar5 & ~(uint)uVar10;
      iVar7 = (int)uVar12;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar3[lVar14] & uVar5;
      if (uVar8 == 0) {
        iVar9 = iVar4;
        if (iVar4 < iVar7) {
          iVar9 = iVar7;
        }
        if (iVar4 <= iVar7) {
          return fVar15;
        }
        lVar6 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar3[lVar14 + lVar6 + 1];
          if (uVar8 != 0) break;
          lVar6 = lVar6 + 1;
          if (iVar9 - lVar14 == lVar6) {
            return fVar15;
          }
        }
        uVar12 = (ulonglong)(iVar7 + (int)lVar6 + 1);
        uVar5 = 0xffffffff;
      }
      uVar10 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar10 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      fVar16 = fVar15;
    } while (iVar7 < iVar2);
  }
  return fVar15;
}



// FUNCTION 142a94012 FUN_142a94012 body=29 status=ok
// SIG undefined FUN_142a94012(void)

undefined8 FUN_142a94012(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a94044 FUN_142a94044 body=85 status=ok
// SIG undefined FUN_142a94044(void)

void FUN_142a94044(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c800;
  return;
}



// FUNCTION 142a9409a FUN_142a9409a body=85 status=ok
// SIG undefined FUN_142a9409a(void)

void FUN_142a9409a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e001f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149f9c800;
  return;
}



// FUNCTION 142a940f0 FUN_142a940f0 body=118 status=ok
// SIG undefined FUN_142a940f0(void)

void FUN_142a940f0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e001f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149f9c800;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142a94157. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 142a9416e FUN_142a9416e body=19 status=ok
// SIG undefined FUN_142a9416e(void)

undefined1 FUN_142a9416e(undefined8 param_1,undefined8 param_2)

{
  FUN_142a94182(param_2);
  return 1;
}



// FUNCTION 142a94182 FUN_142a94182 body=3694 status=ok
// SIG undefined FUN_142a94182(void)

void FUN_142a94182(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  int iVar17;
  undefined2 *puVar18;
  uint *puVar19;
  longlong *plVar20;
  int iVar21;
  uint uVar22;
  longlong *plVar23;
  uint *puVar24;
  undefined2 *puVar25;
  longlong lVar26;
  ulonglong uVar27;
  uint uVar28;
  byte bVar29;
  uint uVar30;
  longlong *plVar31;
  ulonglong uVar32;
  float fVar33;
  undefined1 auStack_3e8 [40];
  undefined8 *local_3c0;
  uint *local_3b8;
  longlong *local_3b0;
  ulonglong local_3a8;
  undefined8 uStack_3a0;
  undefined2 *local_390;
  int local_388;
  undefined8 local_380;
  undefined8 local_378;
  longlong lStack_370;
  undefined4 local_368 [188];
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  lVar10 = FUN_146f372bc();
  if (((lVar10 != 0) && (lVar10 = FUN_146f23e78(), lVar10 != 0)) &&
     (plVar11 = *(longlong **)(lVar10 + 0x30), plVar11 != (longlong *)0x0)) {
    puVar24 = (uint *)(plVar11 + 2);
    local_3a8 = 0;
    uStack_3a0 = 0;
    iVar17 = (int)plVar11[5];
    if (iVar17 == 0) {
      uVar27 = 1;
      uVar32 = 0;
      iVar21 = 0;
      iVar12 = 0;
    }
    else {
      puVar19 = (uint *)plVar11[4];
      if ((uint *)plVar11[4] == (uint *)0x0) {
        puVar19 = puVar24;
      }
      uVar28 = *puVar19;
      if (uVar28 == 0) {
        iVar12 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar12 = iVar17 + -1;
        }
        uVar32 = 0;
        uVar27 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar27 = uVar32;
        }
        iVar21 = 0;
        do {
          if (uVar27 == uVar32) goto LAB_142a941b9;
          iVar21 = iVar21 + 0x20;
          uVar28 = puVar19[uVar32 + 1];
          uVar32 = uVar32 + 1;
        } while (uVar28 == 0);
      }
      else {
        uVar32 = 0;
        iVar21 = 0;
      }
      uVar27 = (ulonglong)(-uVar28 & uVar28);
      uVar1 = uVar27 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar12 = (iVar21 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if (iVar17 <= iVar12) {
        iVar12 = iVar17;
      }
    }
    if (iVar12 < iVar17) {
      uVar28 = 0xffffffff;
      local_3b8 = puVar24;
      do {
        uVar1 = uStack_3a0;
        lVar10 = *(longlong *)(*plVar11 + 0x10 + (longlong)iVar12 * 0x20);
        if (lVar10 != 0) {
          plVar16 = *(longlong **)(*plVar11 + 8 + (longlong)iVar12 * 0x20);
          if ((longlong)(int)plVar16[1] != 0) {
            lVar26 = 0;
            do {
              if ((*(byte *)(*(longlong *)(*plVar16 + lVar26) + 0xb9) & 0x20) == 0) {
                uVar6 = *(undefined8 *)(lVar10 + 0x10);
                lVar10 = plVar16[8];
                lVar26 = (longlong)(int)uStack_3a0;
                uVar9 = (int)uStack_3a0 + 1;
                uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar9);
                if (uStack_3a0._4_4_ < uVar9) {
                  FUN_142a94ff2(&local_3a8,uVar1 & 0xffffffff);
                  puVar24 = local_3b8;
                }
                lVar26 = lVar26 * 0x10;
                *(undefined8 *)(local_3a8 + lVar26) = uVar6;
                *(int *)(local_3a8 + 8 + lVar26) = (int)lVar10;
                *(undefined1 *)(local_3a8 + 0xc + lVar26) = 0;
                goto LAB_142a94377;
              }
              lVar26 = lVar26 + 8;
            } while ((longlong)(int)plVar16[1] * 8 != lVar26);
          }
          uVar6 = *(undefined8 *)(lVar10 + 0x10);
          lVar10 = plVar16[8];
          lVar26 = (longlong)(int)uStack_3a0;
          uVar9 = (int)uStack_3a0 + 1;
          uStack_3a0 = CONCAT44(uStack_3a0._4_4_,uVar9);
          if (uStack_3a0._4_4_ < uVar9) {
            FUN_142a94ff2(&local_3a8,uVar1 & 0xffffffff);
            puVar24 = local_3b8;
          }
          lVar26 = lVar26 * 0x10;
          *(undefined8 *)(local_3a8 + lVar26) = uVar6;
          *(int *)(local_3a8 + 8 + lVar26) = (int)lVar10;
          *(undefined1 *)(local_3a8 + 0xc + lVar26) = 1;
LAB_142a94377:
          *(undefined2 *)(local_3a8 + 0xd + lVar26) = (undefined2)local_378;
          *(undefined1 *)(local_3a8 + 0xf + lVar26) = local_378._2_1_;
        }
        uVar1 = local_3a8;
        uVar28 = uVar28 & ~(uint)uVar27;
        puVar19 = (uint *)plVar11[4];
        if ((uint *)plVar11[4] == (uint *)0x0) {
          puVar19 = puVar24;
        }
        iVar17 = (int)plVar11[5];
        iVar12 = (int)uVar32;
        lVar10 = (longlong)iVar12;
        uVar9 = puVar19[lVar10] & uVar28;
        if (uVar9 == 0) {
          iVar13 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar13 = iVar17 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar14 = iVar13;
          if (iVar13 < iVar12) {
            iVar14 = iVar12;
          }
          if (iVar13 <= iVar12) break;
          lVar26 = 0;
          while( true ) {
            iVar21 = iVar21 + 0x20;
            uVar9 = puVar19[lVar10 + lVar26 + 1];
            if (uVar9 != 0) break;
            lVar26 = lVar26 + 1;
            if (iVar14 - lVar10 == lVar26) goto LAB_142a94421;
          }
          uVar32 = (ulonglong)(iVar12 + (int)lVar26 + 1);
          uVar28 = 0xffffffff;
        }
        uVar27 = (ulonglong)(-uVar9 & uVar9);
        uVar2 = uVar27 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar12 = (iVar21 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar17);
LAB_142a94421:
      iVar17 = (int)uStack_3a0;
      lVar10 = (longlong)(int)uStack_3a0;
      if (1 < lVar10) {
        memset(local_368,0,0x2f0);
        local_378 = uVar1;
        lStack_370 = lVar10 * 0x10 + uVar1 + -0x10;
        fVar33 = logf((float)iVar17);
        local_368[0] = (int)(longlong)(fVar33 + fVar33);
        puVar15 = &local_378;
        do {
          plVar16 = (longlong *)*puVar15;
          plVar11 = (longlong *)puVar15[1];
          iVar17 = *(int *)(puVar15 + 2);
          iVar12 = (int)((ulonglong)((longlong)plVar11 - (longlong)plVar16) >> 4);
          puVar24 = (uint *)(ulonglong)(iVar12 + 1);
          local_3c0 = puVar15;
          if (iVar17 == 0) {
LAB_142a94816:
            puVar15 = local_3c0;
            if ((int)puVar24 != 0) {
              uVar28 = (iVar12 - (iVar12 + -1 >> 0x1f)) + -1 >> 1;
              local_3b8 = puVar24;
              do {
                plVar11 = (longlong *)(ulonglong)uVar28;
                uVar9 = uVar28 * 2 + 1;
                local_3b0 = plVar11;
                if ((int)uVar9 < (int)puVar24) {
                  do {
                    uVar22 = uVar28 * 2 + 2;
                    uVar28 = uVar9;
                    if ((int)uVar22 < (int)puVar24) {
                      bVar29 = *(byte *)((longlong)plVar16 + (longlong)(int)uVar9 * 0x10 + 0xc);
                      if (*(byte *)((longlong)plVar16 + (longlong)(int)uVar22 * 0x10 + 0xc) ==
                          bVar29) {
                        iVar17 = (int)(plVar16 + (longlong)(int)uVar9 * 2)[1];
                        iVar12 = (int)(plVar16 + (longlong)(int)uVar22 * 2)[1];
                        if (iVar12 == iVar17) {
                          local_390 = *(undefined2 **)(plVar16[(longlong)(int)uVar9 * 2] + 0x18);
                          FUN_1400021e4(&local_390,&local_78);
                          local_380 = *(undefined8 *)(plVar16[(longlong)(int)uVar22 * 2] + 0x18);
                          FUN_1400021e4(&local_380,&local_390);
                          puVar18 = local_78;
                          if ((int)uStack_70 == 0) {
                            puVar18 = &DAT_149dfb77a;
                          }
                          puVar25 = local_390;
                          if (local_388 == 0) {
                            puVar25 = &DAT_149dfb77a;
                          }
                          lVar10 = 0;
                          while( true ) {
                            uVar4 = *(ushort *)((longlong)puVar25 + lVar10);
                            uVar30 = (uint)uVar4;
                            uVar5 = *(ushort *)((longlong)puVar18 + lVar10);
                            uVar28 = (uint)uVar5;
                            if (uVar4 != uVar5) {
                              if ((uVar5 | uVar4) < 0x80) {
                                uVar30 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                                uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                                if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5])
                                goto LAB_142a94903;
                              }
                              bVar29 = (byte)(uVar30 - uVar28 >> 0x18);
                              goto LAB_142a94941;
                            }
                            if (uVar4 == 0) break;
LAB_142a94903:
                            lVar10 = lVar10 + 2;
                          }
                          bVar29 = 0;
LAB_142a94941:
                          if (local_390 != (undefined2 *)0x0) {
                            FUN_1400020a8(local_390);
                          }
                          if (local_78 != (undefined2 *)0x0) {
                            FUN_1400020a8();
                          }
                          bVar29 = bVar29 >> 7;
                          puVar24 = local_3b8;
                        }
                        else {
                          bVar29 = iVar17 < iVar12;
                        }
                      }
                      uVar28 = uVar22;
                      if (bVar29 != 0) {
                        uVar28 = uVar9;
                      }
                    }
                    plVar20 = plVar16 + (longlong)(int)plVar11 * 2;
                    plVar8 = plVar16 + (longlong)(int)uVar28 * 2;
                    cVar3 = *(char *)((longlong)plVar16 + (longlong)(int)uVar28 * 0x10 + 0xc);
                    if (*(char *)((longlong)plVar16 + (longlong)(int)plVar11 * 0x10 + 0xc) == cVar3)
                    {
                      if ((int)plVar20[1] == (int)plVar8[1]) {
                        local_390 = *(undefined2 **)(*plVar8 + 0x18);
                        FUN_1400021e4(&local_390,&local_78);
                        local_380 = *(undefined8 *)(*plVar20 + 0x18);
                        FUN_1400021e4(&local_380,&local_390);
                        puVar18 = local_78;
                        if ((int)uStack_70 == 0) {
                          puVar18 = &DAT_149dfb77a;
                        }
                        puVar25 = local_390;
                        if (local_388 == 0) {
                          puVar25 = &DAT_149dfb77a;
                        }
                        lVar10 = 0;
                        while( true ) {
                          uVar4 = *(ushort *)((longlong)puVar25 + lVar10);
                          uVar9 = (uint)uVar4;
                          uVar5 = *(ushort *)((longlong)puVar18 + lVar10);
                          uVar22 = (uint)uVar5;
                          if (uVar4 != uVar5) {
                            if ((uVar5 | uVar4) < 0x80) {
                              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                              uVar22 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                              if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5])
                              goto LAB_142a94a1b;
                            }
                            iVar17 = uVar9 - uVar22;
                            goto LAB_142a94a58;
                          }
                          if (uVar4 == 0) break;
LAB_142a94a1b:
                          lVar10 = lVar10 + 2;
                        }
                        iVar17 = 0;
LAB_142a94a58:
                        if (local_390 != (undefined2 *)0x0) {
                          FUN_1400020a8(local_390);
                        }
                        if (local_78 != (undefined2 *)0x0) {
                          FUN_1400020a8();
                        }
                        puVar24 = local_3b8;
                        if (-1 < iVar17) break;
                      }
                      else if ((int)plVar20[1] <= (int)plVar8[1]) break;
                    }
                    else if (cVar3 == '\0') break;
                    local_78 = (undefined2 *)*plVar20;
                    uStack_70 = plVar20[1];
                    puVar18 = local_78;
                    lVar26 = uStack_70;
                    lVar10 = plVar8[1];
                    *plVar20 = *plVar8;
                    plVar20[1] = lVar10;
                    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
                    *(undefined4 *)plVar8 = (undefined4)local_78;
                    *(undefined4 *)((longlong)plVar8 + 4) = local_78._4_4_;
                    *(int *)(plVar8 + 1) = (int)uStack_70;
                    *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_70._4_4_;
                    uVar9 = uVar28 * 2 + 1;
                    plVar11 = (longlong *)(ulonglong)uVar28;
                    local_78 = puVar18;
                    uStack_70 = lVar26;
                  } while ((int)uVar9 < (int)puVar24);
                }
                uVar28 = (int)local_3b0 - 1;
              } while ((int)local_3b0 != 0);
              puVar15 = local_3c0;
              if (1 < (int)puVar24) {
                puVar19 = (uint *)(((ulonglong)puVar24 & 0xffffffff) - 1);
                local_78 = (undefined2 *)*plVar16;
                uStack_70 = plVar16[1];
                puVar18 = local_78;
                lVar26 = uStack_70;
                lVar10 = (plVar16 + (longlong)puVar19 * 2)[1];
                *plVar16 = plVar16[(longlong)puVar19 * 2];
                plVar16[1] = lVar10;
                local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
                plVar11 = plVar16 + (longlong)puVar19 * 2;
                *(undefined4 *)plVar11 = (undefined4)local_78;
                *(undefined4 *)((longlong)plVar11 + 4) = local_78._4_4_;
                *(int *)(plVar11 + 1) = (int)uStack_70;
                *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_70._4_4_;
                local_78 = puVar18;
                uStack_70 = lVar26;
                if ((int)puVar24 != 2) {
                  do {
                    iVar21 = 0;
                    iVar12 = 1;
                    local_3b8 = puVar19;
                    iVar17 = 0;
                    do {
                      lVar10 = (longlong)(iVar21 + 2);
                      iVar13 = iVar12;
                      if (lVar10 < (longlong)puVar19) {
                        bVar29 = *(byte *)((longlong)plVar16 + (longlong)iVar12 * 0x10 + 0xc);
                        if (*(byte *)((longlong)plVar16 + lVar10 * 0x10 + 0xc) == bVar29) {
                          iVar13 = (int)(plVar16 + (longlong)iVar12 * 2)[1];
                          iVar14 = (int)(plVar16 + lVar10 * 2)[1];
                          if (iVar14 == iVar13) {
                            local_390 = *(undefined2 **)(plVar16[(longlong)iVar12 * 2] + 0x18);
                            FUN_1400021e4(&local_390,&local_78);
                            local_380 = *(undefined8 *)(plVar16[lVar10 * 2] + 0x18);
                            FUN_1400021e4(&local_380,&local_390);
                            puVar18 = local_78;
                            if ((int)uStack_70 == 0) {
                              puVar18 = &DAT_149dfb77a;
                            }
                            puVar25 = local_390;
                            if (local_388 == 0) {
                              puVar25 = &DAT_149dfb77a;
                            }
                            lVar10 = 0;
                            while( true ) {
                              uVar4 = *(ushort *)((longlong)puVar25 + lVar10);
                              uVar28 = (uint)uVar4;
                              uVar5 = *(ushort *)((longlong)puVar18 + lVar10);
                              uVar9 = (uint)uVar5;
                              if (uVar4 != uVar5) {
                                if ((uVar5 | uVar4) < 0x80) {
                                  uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                                  uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                                  if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5])
                                  goto LAB_142a94bd1;
                                }
                                bVar29 = (byte)(uVar28 - uVar9 >> 0x18);
                                goto LAB_142a94c0e;
                              }
                              if (uVar4 == 0) break;
LAB_142a94bd1:
                              lVar10 = lVar10 + 2;
                            }
                            bVar29 = 0;
LAB_142a94c0e:
                            if (local_390 != (undefined2 *)0x0) {
                              FUN_1400020a8(local_390);
                            }
                            if (local_78 != (undefined2 *)0x0) {
                              FUN_1400020a8();
                            }
                            bVar29 = bVar29 >> 7;
                            puVar19 = local_3b8;
                          }
                          else {
                            bVar29 = iVar13 < iVar14;
                          }
                        }
                        iVar13 = iVar21 + 2;
                        if (bVar29 != 0) {
                          iVar13 = iVar12;
                        }
                      }
                      plVar11 = plVar16 + (longlong)iVar17 * 2;
                      plVar20 = plVar16 + (longlong)iVar13 * 2;
                      cVar3 = *(char *)((longlong)plVar16 + (longlong)iVar13 * 0x10 + 0xc);
                      if (*(char *)((longlong)plVar16 + (longlong)iVar17 * 0x10 + 0xc) == cVar3) {
                        if ((int)plVar11[1] == (int)plVar20[1]) {
                          local_390 = *(undefined2 **)(*plVar20 + 0x18);
                          FUN_1400021e4(&local_390,&local_78);
                          local_380 = *(undefined8 *)(*plVar11 + 0x18);
                          FUN_1400021e4(&local_380,&local_390);
                          puVar18 = local_78;
                          if ((int)uStack_70 == 0) {
                            puVar18 = &DAT_149dfb77a;
                          }
                          puVar25 = local_390;
                          if (local_388 == 0) {
                            puVar25 = &DAT_149dfb77a;
                          }
                          lVar10 = 0;
                          while( true ) {
                            uVar4 = *(ushort *)((longlong)puVar25 + lVar10);
                            uVar9 = (uint)uVar4;
                            uVar5 = *(ushort *)((longlong)puVar18 + lVar10);
                            uVar28 = (uint)uVar5;
                            if (uVar4 != uVar5) {
                              if ((uVar5 | uVar4) < 0x80) {
                                uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                                uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                                if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5])
                                goto LAB_142a94ce4;
                              }
                              iVar17 = uVar9 - uVar28;
                              goto LAB_142a94d21;
                            }
                            if (uVar4 == 0) break;
LAB_142a94ce4:
                            lVar10 = lVar10 + 2;
                          }
                          iVar17 = 0;
LAB_142a94d21:
                          if (local_390 != (undefined2 *)0x0) {
                            FUN_1400020a8(local_390);
                          }
                          if (local_78 != (undefined2 *)0x0) {
                            FUN_1400020a8();
                          }
                          puVar19 = local_3b8;
                          if (-1 < iVar17) break;
                        }
                        else if ((int)plVar11[1] <= (int)plVar20[1]) break;
                      }
                      else if (cVar3 == '\0') break;
                      puVar18 = (undefined2 *)*plVar11;
                      lVar10 = plVar11[1];
                      lVar26 = plVar20[1];
                      *plVar11 = *plVar20;
                      plVar11[1] = lVar26;
                      local_78._0_4_ = SUB84(puVar18,0);
                      local_78._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
                      uStack_70._0_4_ = (int)lVar10;
                      uStack_70._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
                      *(undefined4 *)plVar20 = (undefined4)local_78;
                      *(undefined4 *)((longlong)plVar20 + 4) = local_78._4_4_;
                      *(int *)(plVar20 + 1) = (int)uStack_70;
                      *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_70._4_4_;
                      iVar21 = iVar13 * 2;
                      iVar12 = iVar13 * 2 + 1;
                      local_78 = puVar18;
                      uStack_70 = lVar10;
                      iVar17 = iVar13;
                    } while ((longlong)iVar12 < (longlong)puVar19);
                    puVar24 = (uint *)((longlong)puVar19 + -1);
                    local_78 = (undefined2 *)*plVar16;
                    uStack_70 = plVar16[1];
                    puVar18 = local_78;
                    lVar26 = uStack_70;
                    lVar10 = (plVar16 + (longlong)puVar24 * 2)[1];
                    *plVar16 = plVar16[(longlong)puVar24 * 2];
                    plVar16[1] = lVar10;
                    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
                    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
                    plVar11 = plVar16 + (longlong)puVar24 * 2;
                    *(undefined4 *)plVar11 = (undefined4)local_78;
                    *(undefined4 *)((longlong)plVar11 + 4) = local_78._4_4_;
                    *(int *)(plVar11 + 1) = (int)uStack_70;
                    *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_70._4_4_;
                    bVar7 = (uint *)0x2 < puVar19;
                    puVar15 = local_3c0;
                    puVar19 = puVar24;
                    local_78 = puVar18;
                    uStack_70 = lVar26;
                  } while (bVar7);
                }
              }
            }
          }
          else {
LAB_142a944b7:
            if (8 < (int)(uint)puVar24) {
              local_3b8 = (uint *)CONCAT44(local_3b8._4_4_,iVar17);
              uVar27 = (ulonglong)((uint)puVar24 >> 1);
              puVar18 = (undefined2 *)plVar16[uVar27 * 2];
              lVar10 = (plVar16 + uVar27 * 2)[1];
              lVar26 = plVar16[1];
              plVar16[uVar27 * 2] = *plVar16;
              (plVar16 + uVar27 * 2)[1] = lVar26;
              local_78._0_4_ = SUB84(puVar18,0);
              local_78._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
              uStack_70._0_4_ = (int)lVar10;
              uStack_70._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
              *(undefined4 *)plVar16 = (undefined4)local_78;
              *(undefined4 *)((longlong)plVar16 + 4) = local_78._4_4_;
              *(int *)(plVar16 + 1) = (int)uStack_70;
              *(undefined4 *)((longlong)plVar16 + 0xc) = uStack_70._4_4_;
              plVar20 = plVar11 + 2;
              plVar8 = plVar16;
              local_3b0 = plVar11;
              local_78 = puVar18;
              uStack_70 = lVar10;
LAB_142a944fc:
              do {
                while( true ) {
                  plVar23 = plVar8;
                  plVar8 = plVar23 + 2;
                  if (plVar11 < plVar8) goto joined_r0x000142a94614;
                  if (*(char *)((longlong)plVar16 + 0xc) != *(char *)((longlong)plVar23 + 0x1c))
                  goto LAB_142a945cd;
                  if ((int)plVar16[1] != (int)plVar23[3]) break;
                  local_390 = *(undefined2 **)(*plVar8 + 0x18);
                  FUN_1400021e4(&local_390,&local_78);
                  local_380 = *(undefined8 *)(*plVar16 + 0x18);
                  FUN_1400021e4(&local_380,&local_390);
                  puVar18 = local_78;
                  if ((int)uStack_70 == 0) {
                    puVar18 = &DAT_149dfb77a;
                  }
                  puVar25 = local_390;
                  if (local_388 == 0) {
                    puVar25 = &DAT_149dfb77a;
                  }
                  lVar10 = 0;
                  while( true ) {
                    uVar4 = *(ushort *)((longlong)puVar25 + lVar10);
                    uVar9 = (uint)uVar4;
                    uVar5 = *(ushort *)((longlong)puVar18 + lVar10);
                    uVar28 = (uint)uVar5;
                    if (uVar4 != uVar5) {
                      if ((uVar5 | uVar4) < 0x80) {
                        uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                        uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_142a9459d;
                      }
                      iVar17 = uVar9 - uVar28;
                      goto LAB_142a945e2;
                    }
                    if (uVar4 == 0) break;
LAB_142a9459d:
                    lVar10 = lVar10 + 2;
                  }
                  iVar17 = 0;
LAB_142a945e2:
                  if (local_390 != (undefined2 *)0x0) {
                    FUN_1400020a8(local_390);
                  }
                  if (local_78 != (undefined2 *)0x0) {
                    FUN_1400020a8();
                  }
                  if (iVar17 < 0) goto joined_r0x000142a94614;
                }
              } while ((int)plVar16[1] <= (int)plVar23[3]);
              goto joined_r0x000142a94614;
            }
            for (; puVar15 = local_3c0, plVar20 = plVar16, plVar8 = plVar16, plVar16 < plVar11;
                plVar11 = plVar11 + -2) {
              while (plVar23 = plVar20 + 2, plVar23 <= plVar11) {
                bVar29 = *(byte *)((longlong)plVar20 + 0x1c);
                if (*(byte *)((longlong)plVar8 + 0xc) == bVar29) {
                  if ((int)plVar8[1] == (int)plVar20[3]) {
                    local_390 = *(undefined2 **)(*plVar23 + 0x18);
                    FUN_1400021e4(&local_390,&local_78);
                    local_380 = *(undefined8 *)(*plVar8 + 0x18);
                    FUN_1400021e4(&local_380,&local_390);
                    puVar18 = local_78;
                    if ((int)uStack_70 == 0) {
                      puVar18 = &DAT_149dfb77a;
                    }
                    puVar25 = local_390;
                    if (local_388 == 0) {
                      puVar25 = &DAT_149dfb77a;
                    }
                    lVar10 = 0;
                    while( true ) {
                      uVar4 = *(ushort *)((longlong)puVar25 + lVar10);
                      uVar9 = (uint)uVar4;
                      uVar5 = *(ushort *)((longlong)puVar18 + lVar10);
                      uVar28 = (uint)uVar5;
                      if (uVar4 != uVar5) {
                        if ((uVar5 | uVar4) < 0x80) {
                          uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
                          uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar5];
                          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5])
                          goto LAB_142a94e7b;
                        }
                        bVar29 = (byte)(uVar9 - uVar28 >> 0x18);
                        goto LAB_142a94eb5;
                      }
                      if (uVar4 == 0) break;
LAB_142a94e7b:
                      lVar10 = lVar10 + 2;
                    }
                    bVar29 = 0;
LAB_142a94eb5:
                    if (local_390 != (undefined2 *)0x0) {
                      FUN_1400020a8(local_390);
                    }
                    if (local_78 != (undefined2 *)0x0) {
                      FUN_1400020a8();
                    }
                    bVar29 = bVar29 >> 7;
                  }
                  else {
                    bVar29 = (int)plVar20[3] < (int)plVar8[1];
                  }
                }
                plVar20 = plVar23;
                if (bVar29 != 0) {
                  plVar8 = plVar23;
                }
              }
              local_78 = (undefined2 *)*plVar8;
              uStack_70 = plVar8[1];
              puVar18 = local_78;
              lVar26 = uStack_70;
              lVar10 = plVar11[1];
              *plVar8 = *plVar11;
              plVar8[1] = lVar10;
              local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
              uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
              *(undefined4 *)plVar11 = (undefined4)local_78;
              *(undefined4 *)((longlong)plVar11 + 4) = local_78._4_4_;
              *(int *)(plVar11 + 1) = (int)uStack_70;
              *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_70._4_4_;
              local_78 = puVar18;
              uStack_70 = lVar26;
            }
          }
LAB_142a94f20:
          puVar15 = puVar15 + -3;
        } while (&local_378 <= puVar15);
      }
      uVar27 = local_3a8;
      if ((int)uStack_3a0 != 0) {
        lVar10 = (longlong)(int)uStack_3a0;
        lVar26 = 0;
        do {
          if (*(char *)(uVar27 + 0xc + lVar26) == '\0') {
            local_378 = 0;
            lStack_370 = 0;
            plVar11 = *(longlong **)(uVar27 + lVar26);
            iVar17 = (int)plVar11[0x1f];
            if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar17);
            }
            if (iVar17 != 0) {
              FUN_141714720(&local_378);
              plVar11 = *(longlong **)(uVar27 + lVar26);
            }
            plVar16 = (longlong *)plVar11[0x22];
            if (plVar16 == (longlong *)0x0) {
              (**(code **)(*plVar11 + 1000))(plVar11);
              plVar16 = (longlong *)plVar11[0x22];
            }
            (**(code **)(*plVar16 + 0x1e0))(plVar16,&local_378);
            if (local_378 != 0) {
              FUN_1400020a8();
            }
          }
          lVar26 = lVar26 + 0x10;
        } while (lVar10 * 0x10 != lVar26);
      }
      if (local_3a8 != 0) {
        FUN_1400020a8(local_3a8);
      }
    }
  }
LAB_142a941b9:
  if ((local_60 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142a945cd:
  if (*(char *)((longlong)plVar23 + 0x1c) == '\0') goto LAB_142a944fc;
joined_r0x000142a94614:
  do {
    while( true ) {
      plVar31 = plVar20;
      plVar20 = plVar31 + -2;
      if (plVar20 <= plVar16) goto LAB_142a94729;
      if (*(char *)((longlong)plVar31 + -4) != *(char *)((longlong)plVar16 + 0xc)) break;
      if ((int)plVar31[-1] == (int)plVar16[1]) {
        local_390 = *(undefined2 **)(*plVar16 + 0x18);
        FUN_1400021e4(&local_390,&local_78);
        local_380 = *(undefined8 *)(*plVar20 + 0x18);
        FUN_1400021e4(&local_380,&local_390);
        puVar18 = local_78;
        if ((int)uStack_70 == 0) {
          puVar18 = &DAT_149dfb77a;
        }
        puVar25 = local_390;
        if (local_388 == 0) {
          puVar25 = &DAT_149dfb77a;
        }
        lVar10 = 0;
        while( true ) {
          uVar4 = *(ushort *)((longlong)puVar25 + lVar10);
          uVar9 = (uint)uVar4;
          uVar5 = *(ushort *)((longlong)puVar18 + lVar10);
          uVar28 = (uint)uVar5;
          if (uVar4 != uVar5) {
            if ((uVar5 | uVar4) < 0x80) {
              uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              uVar28 = (uint)(byte)(&DAT_149e05da0)[uVar5];
              if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar5]) goto LAB_142a946ae;
            }
            iVar17 = uVar9 - uVar28;
            goto LAB_142a946eb;
          }
          if (uVar4 == 0) break;
LAB_142a946ae:
          lVar10 = lVar10 + 2;
        }
        iVar17 = 0;
LAB_142a946eb:
        if (local_390 != (undefined2 *)0x0) {
          FUN_1400020a8(local_390);
        }
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (iVar17 < 0) goto LAB_142a94729;
      }
      else if ((int)plVar16[1] < (int)plVar31[-1]) goto LAB_142a94729;
    }
  } while (*(char *)((longlong)plVar16 + 0xc) == '\0');
LAB_142a94729:
  if (plVar8 <= plVar20) {
    puVar18 = (undefined2 *)*plVar8;
    lVar10 = plVar23[3];
    lVar26 = plVar20[1];
    *plVar8 = *plVar20;
    plVar23[3] = lVar26;
    local_78._0_4_ = SUB84(puVar18,0);
    local_78._4_4_ = (undefined4)((ulonglong)puVar18 >> 0x20);
    uStack_70._0_4_ = (int)lVar10;
    uStack_70._4_4_ = (undefined4)((ulonglong)lVar10 >> 0x20);
    *(undefined4 *)plVar20 = (undefined4)local_78;
    *(undefined4 *)((longlong)plVar20 + 4) = local_78._4_4_;
    *(int *)(plVar20 + 1) = (int)uStack_70;
    *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_70._4_4_;
    local_78 = puVar18;
    uStack_70 = lVar10;
    goto LAB_142a944fc;
  }
  local_78 = (undefined2 *)*plVar16;
  uStack_70 = plVar16[1];
  puVar18 = local_78;
  lVar26 = uStack_70;
  lVar10 = plVar20[1];
  *plVar16 = *plVar20;
  plVar16[1] = lVar10;
  local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
  uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
  *(undefined4 *)plVar20 = (undefined4)local_78;
  *(undefined4 *)((longlong)plVar20 + 4) = local_78._4_4_;
  *(int *)(plVar20 + 1) = (int)uStack_70;
  *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_70._4_4_;
  iVar17 = (int)local_3b8 + -1;
  plVar31 = plVar31 + -4;
  local_78 = puVar18;
  uStack_70 = lVar26;
  if ((longlong)plVar31 - (longlong)plVar16 < (longlong)local_3b0 - (longlong)plVar8) {
    if (plVar8 < plVar11) {
      *local_3c0 = plVar8;
      local_3c0[1] = plVar11;
      *(int *)(local_3c0 + 2) = iVar17;
      local_3c0 = local_3c0 + 3;
    }
    puVar15 = local_3c0;
    if (plVar20 <= plVar16 + 2) goto LAB_142a94f20;
  }
  else {
    puVar15 = local_3c0;
    if (plVar16 + 2 < plVar20) {
      *local_3c0 = plVar16;
      local_3c0[1] = plVar31;
      *(int *)(local_3c0 + 2) = iVar17;
      puVar15 = local_3c0 + 3;
    }
    plVar16 = plVar8;
    plVar31 = plVar11;
    if (plVar11 <= plVar8) goto LAB_142a94f20;
  }
  local_3c0 = puVar15;
  iVar12 = (int)((ulonglong)((longlong)plVar31 - (longlong)plVar16) >> 4);
  puVar24 = (uint *)(ulonglong)(iVar12 + 1);
  plVar11 = plVar31;
  if (iVar17 == 0) goto LAB_142a94816;
  goto LAB_142a944b7;
}



// FUNCTION 142a94ff2 FUN_142a94ff2 body=262 status=ok
// SIG undefined FUN_142a94ff2(void)

void FUN_142a94ff2(longlong param_1,int param_2)

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



// FUNCTION 142a950fa FUN_142a950fa body=78 status=ok
// SIG undefined FUN_142a950fa(void)

void FUN_142a950fa(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  
  uVar2 = *param_2;
  plVar4 = (longlong *)*param_1;
  lVar5 = param_1[1];
  iVar3 = (int)plVar4[1];
  *(uint *)(plVar4 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)plVar4 + 0xc) < iVar3 + 1U) {
    FUN_1447808da(plVar4,iVar3);
  }
  *(uint *)(*plVar4 + (longlong)iVar3 * 4) = uVar2;
  bVar6 = (byte)uVar2 & 0x1f;
  puVar1 = (uint *)(*(longlong *)(lVar5 + 0x70) + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  return;
}



// FUNCTION 142a95148 FUN_142a95148 body=24 status=ok
// SIG undefined FUN_142a95148(void)

longlong FUN_142a95148(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_149f9c890;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  return param_2 + 0x18;
}



// FUNCTION 142a95166 FUN_142a95166 body=12 status=ok
// SIG undefined FUN_142a95166(void)

void FUN_142a95166(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000142a9516f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 142a95172 FUN_142a95172 body=29 status=ok
// SIG undefined FUN_142a95172(void)

undefined8 FUN_142a95172(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142a9518f FUN_142a9518f body=2504 status=ok
// SIG undefined FUN_142a9518f(void)

void FUN_142a9518f(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  FUN_14153156c(&DAT_14c9997c0,L"net.Iris.UseFrequencyBasedPolling",&DAT_14c75f46c,
                L"Whether to use frequency based polling or not. Default is true.");
  atexit(FUN_142a858e4);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9997d0,L"net.Iris.UseDormancyToFilterPolling",&DAT_14c75f46d,
                L"Whether we should use dormancy to filter out objects that we should not poll. Default is true."
               );
  atexit(FUN_142a85929);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9997e0,L"net.Iris.AllowPollPeriodOverrides",&DAT_14c75f46e,
                L"Whether we allow poll period overrides set in ObjectReplicationBridgeConfig. Default is true."
               );
  atexit(FUN_142a8596e);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9997f0,L"net.Iris.EnableFilterMappings",&DAT_14c75f46f,
                L"Whether we honor filter mappings set in ObjectReplicationBridgeConfig. If filter mappings are enabled then objects may also be assigned the default spatial filter even if there aren\'t any specific mappings. Default is true."
               );
  atexit(FUN_142a859b3);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999800,L"net.Iris.EnableForceNetUpdate",&DAT_14c999810,
                L"When true the system only allows ForceNetUpdate to skip the poll frequency of objects. When false any MarkDirty object will be immediately polled."
               );
  atexit(FUN_142a859f8);
  local_38 = 0;
  FUN_141471170(&DAT_14c999818,L"net.Iris.EnsureNetRefHandleError",&DAT_14c999828,
                L"Chooses if we should ensure when a NetRefHandleError was reported. -1=never ensure. 0=always ensure. 1..X=ensure only for specific error type"
               );
  atexit(FUN_142a85a3d);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999830,L"net.Iris.UseVerboseIrisCsvStats",&DAT_14c999840,
                L"Whether to use verbose per-class csv stats. Default is false in Shipping, otherwise True."
               );
  atexit(FUN_142a85a82);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_149f9c4e0;
  local_38 = 0;
  FUN_1415c7246(&DAT_14c999848,L"Net.Iris.PrintDynamicFilterClassConfig",
                L"Prints the dynamic filter configured to be assigned to specific classes.",
                &local_28);
  if (local_20 == 0) {
LAB_142a953c0:
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
    goto LAB_142a953c0;
  }
  atexit(FUN_142a885d8);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_149f9c550;
  local_38 = 0;
  FUN_1415c7246(&DAT_14c999858,L"Net.Iris.PrintReplicatedObjects",
                L"Prints the list of replicated objects registered for replication in Iris",
                &local_28);
  if (local_20 == 0) {
LAB_142a9549a:
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
    goto LAB_142a9549a;
  }
  atexit(FUN_142a8861d);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_149f9c600;
  local_38 = 0;
  FUN_1415c7246(&DAT_14c999868,L"Net.Iris.PrintRelevantObjects",
                L"Prints the list of netobjects currently relevant to any connection",&local_28);
  if (local_20 == 0) {
LAB_142a95574:
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
    goto LAB_142a95574;
  }
  atexit(FUN_142a88662);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_149f9c670;
  local_38 = 0;
  FUN_1415c7246(&DAT_14c999878,L"Net.Iris.PrintAlwaysRelevantObjects",
                L"Prints the list of netobjects always relevant to every connection",&local_28);
  if (local_20 == 0) {
LAB_142a9564e:
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
    goto LAB_142a9564e;
  }
  atexit(FUN_142a886a7);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_149f9c6e0;
  local_38 = 0;
  FUN_1415c7246(&DAT_14c999888,L"Net.Iris.PrintRelevantObjectsToConnection",
                L"Prints the list of replicated objects relevant to a specific connection. OptionalParams: WithFilter"
                ,&local_28);
  if (local_20 == 0) {
LAB_142a95728:
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
    goto LAB_142a95728;
  }
  atexit(FUN_142a886ec);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_149f9c790;
  local_38 = 0;
  FUN_1415c7246(&DAT_14c999898,L"Net.Iris.PrintNetCullDistances",
                L"Prints the list of replicated objects and their current netculldistance. Add -NumClasses=X to limit the printing to the X classes with the largest net cull distances."
                ,&local_28);
  if (local_20 == 0) {
LAB_142a95802:
    if (local_28 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_28 != (undefined8 *)0x0) {
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
    goto LAB_142a95802;
  }
  atexit(FUN_142a88731);
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,2,0x10);
  local_20 = 2;
  *local_28 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_28[2] = lVar2;
  *local_28 = &PTR_FUN_149f9c800;
  local_38 = 0;
  FUN_1415c7246(&DAT_14c9998a8,L"Net.Iris.PrintPushBasedStatuses",
                L"Prints the push-based statuses of all classes.",&local_28);
  if (local_20 != 0) {
    if (local_28 == (undefined8 *)0x0) goto LAB_142a958ea;
    (**(code **)*local_28)(local_28,0);
    FUN_1446efa72(&local_28,0,0,0x10);
    local_20 = 0;
  }
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_142a958ea:
  atexit(FUN_142a88776);
  FUN_1446f470e(&DAT_14c9998b8,L"DefaultPrioritizer",1);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9998c0,L"net.Iris.UsePrevReceivedStateForOnReps",&DAT_14c9998d0,
                L"If true OnReps will use the previous received state when doing onreps and not do any compares, if set to false we will copy the local state and do a compare before issuing onreps"
               );
  atexit(FUN_142a8c726);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9998d8,L"net.Iris.EnableFlushReliableRPCOnDestroy",&DAT_14c75f470,
                L"When true EEndReplicationFlags::Flush flag will be appended in EndReplication if we have pending unprocessed attachments/RPC:s when destroying a replicated object."
               );
  atexit(FUN_142a8c8f9);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9998e8,L"net.Iris.AllowDestroyToCancelFlushAndTearOff",&DAT_14c9998f8,
                L"When true issuing a EndReplication on an object that is already Tear-off or pending endreplication will cancel destroy/flush and destroy the replicated objects."
               );
  atexit(FUN_142a8c93e);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999900,
                L"net.Iris.AlwaysDestroyDynamicSubObjectInstancesOnDetachFromStaticRoot",
                &DAT_14c75f471,
                L"When true, We will always destroy instance for dynamic subobjects during EndReplication of a static rootobject."
               );
  atexit(FUN_142a8c983);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999910,L"net.Iris.DeltaCompressInitialState",&DAT_14c75f472,
                L"if true we compare with default state when serializing inital state.");
  atexit(FUN_142a8e8f3);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999920,L"net.Iris.OnlyQuantizeDirtyMembers",&DAT_14c75f473,
                L"if true we only quantize members marked as dirty unless this is a new object.");
  atexit(FUN_142a8e938);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999930,L"net.iris.ForceFullCopyAndQuantize",&DAT_14c999940,
                L"When enabled a full copy and quantize will be used, if disabled we will only copy and quantize dirty state data."
               );
  atexit(FUN_142a8fbfb);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a95b58 FUN_142a95b58 body=69 status=ok
// SIG undefined FUN_142a95b58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a95b58(void)

{
  _DAT_14c999948 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a95b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999950,1);
  return;
}



// FUNCTION 142a95b9e FUN_142a95b9e body=94 status=ok
// SIG undefined FUN_142a95b9e(void)

byte FUN_142a95b9e(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  byte bVar5;
  
  uVar1 = *(uint *)(param_2 + 0x61);
  bVar5 = 1;
  if (*(uint *)(param_1 + 1) == uVar1) {
    plVar4 = (longlong *)param_2[0x60];
    if ((longlong *)param_2[0x60] == (longlong *)0x0) {
      plVar4 = param_2;
    }
    if ((ulonglong)uVar1 != 0) {
      bVar5 = 1;
      uVar3 = 0;
      do {
        lVar2 = *(longlong *)(*param_1 + uVar3 * 8);
        if (*plVar4 == lVar2) {
          bVar5 = *(longlong *)(*plVar4 + 0x90) == *(longlong *)(lVar2 + 0x90) & bVar5;
        }
        else {
          bVar5 = 0;
        }
        uVar3 = uVar3 + 1;
        plVar4 = plVar4 + 3;
      } while (uVar1 != uVar3);
    }
  }
  return bVar5;
}



// FUNCTION 142a95bfc FUN_142a95bfc body=891 status=ok
// SIG undefined FUN_142a95bfc(void)

longlong *
FUN_142a95bfc(longlong param_1,int param_2,longlong param_3,wchar_t *param_4,undefined8 *param_5)

{
  wchar_t *pwVar1;
  size_t sVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined2 uVar13;
  uint uVar14;
  uint uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [36];
  int local_c4;
  int local_c0;
  uint local_bc;
  ulonglong local_b8;
  int local_ac;
  wchar_t *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  int local_64;
  longlong **local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_64 = param_2;
  if (*(char *)(param_5 + 1) == '\x01') {
    iVar9 = FUN_146f41d8a(param_3);
    if (iVar9 != param_2) {
      plVar16 = (longlong *)0x0;
      goto LAB_142a95c54;
    }
  }
  uVar14 = *(uint *)(param_3 + 0x308);
  plVar16 = (longlong *)0x0;
  if ((ulonglong)uVar14 < 0x10001) {
    local_ac = param_2;
    local_a8 = param_4;
    local_70 = (longlong *)FUN_14153c902((ulonglong)uVar14 * 8 + 0x48,8);
    *(undefined4 *)(local_70 + 8) = 0;
    plVar5 = (longlong *)0;
    if (uVar14 != 0) {
      plVar5 = local_70 + 9;
    }
    *local_70 = (longlong)plVar5;
    *(uint *)(local_70 + 1) = uVar14;
    local_88 = *(longlong *)(param_3 + 0x300);
    if (*(longlong *)(param_3 + 0x300) == 0) {
      local_88 = param_3;
    }
    local_a0 = param_1;
    if ((longlong)*(int *)(param_3 + 0x308) == 0) {
      uVar14 = 0;
      uVar10 = 0;
      iVar9 = 0;
      iVar8 = 0;
      uVar13 = 0;
      uVar15 = 0;
      iVar12 = 0xffff;
      uVar4 = 0;
      iVar11 = -1;
    }
    else {
      local_90 = param_1 + 0xa0;
      local_98 = (longlong)*(int *)(param_3 + 0x308) * 0x18;
      local_c0 = -1;
      lVar7 = 0;
      uVar15 = 0;
      uVar17 = 0;
      local_b8 = 0;
      local_c4 = -1;
      iVar8 = 0;
      iVar9 = 0;
      uVar10 = 0;
      uVar14 = 0;
      plVar16 = (longlong *)0x0;
      local_bc = 0;
      do {
        local_60 = *(longlong ***)(local_88 + lVar7);
        *(longlong ***)(*local_70 + uVar17 * 8) = local_60;
        if (((ulonglong)local_60[0x17] & 8) != 0) {
          LOCK();
          *(int *)((longlong)local_60 + 0xbc) = *(int *)((longlong)local_60 + 0xbc) + 1;
          UNLOCK();
        }
        FUN_146f4d0e0(local_90,&local_60,&local_70);
        if (uVar15 < *(uint *)(local_60 + 0xe)) {
          uVar15 = *(uint *)(local_60 + 0xe);
        }
        if (uVar14 < *(ushort *)(local_60 + 0xf)) {
          uVar14 = (uint)*(ushort *)(local_60 + 0xf);
        }
        uVar4 = (uint)*(ushort *)((longlong)local_60 + 0x7a);
        if (uVar10 < uVar4) {
          uVar10 = uVar4;
        }
        iVar9 = (-uVar4 & (iVar9 + uVar4) - 1) + *(int *)((longlong)local_60 + 0x74);
        if ((*(uint *)(local_60 + 0x17) & 2) != 0) {
          local_bc = local_bc | 6;
          if ((int)local_b8 == 0) {
            local_b8 = 1;
            local_c4 = (int)uVar17;
            local_c0 = iVar8;
          }
          else {
            local_b8 = (ulonglong)((int)local_b8 + 1);
          }
        }
        iVar8 = iVar8 + (uint)*(ushort *)((longlong)local_60 + 0x86);
        plVar16 = (longlong *)(ulonglong)((uint)plVar16 | *(uint *)(local_60 + 0x17));
        uVar17 = (ulonglong)((int)uVar17 + 1);
        lVar7 = lVar7 + 0x18;
      } while (local_98 != lVar7);
      uVar13 = (undefined2)local_b8;
      iVar12 = local_c4;
      uVar4 = local_bc;
      iVar11 = local_c0;
    }
    pwVar1 = local_a8;
    uVar6 = uVar4 | (uint)((ulonglong)plVar16 >> 9) & 8 |
            (int)plVar16 * 4 & 0x10U | (uint)((ulonglong)plVar16 >> 6) & 1;
    uVar4 = uVar6 | 0x20;
    if (iVar9 == 0) {
      uVar4 = uVar6;
    }
    if (((ulonglong)plVar16 & 0x4000) == 0) {
      uVar4 = uVar6;
    }
    if ((uVar4 & 4) != 0) {
      if (uVar10 < 5) {
        uVar10 = 4;
      }
      uVar6 = iVar9 + 3U & 0xfffffffc;
      *(uint *)(local_70 + 5) = uVar6;
      *(short *)((longlong)local_70 + 0x1c) = (short)iVar12;
      *(undefined2 *)((longlong)local_70 + 0x1e) = uVar13;
      *(int *)(local_70 + 4) = iVar11;
      iVar9 = uVar6 + (iVar8 + 0x1fU >> 5) * 4;
    }
    *(uint *)(local_70 + 2) = uVar10 + (uVar10 == 0);
    *(int *)((longlong)local_70 + 0xc) = iVar9;
    *(uint *)((longlong)local_70 + 0x14) = uVar15;
    *(uint *)(local_70 + 3) = uVar14 + (uVar14 == 0);
    *(int *)((longlong)local_70 + 0x24) = iVar8;
    *(int *)((longlong)local_70 + 0x2c) = local_ac;
    *(short *)((longlong)local_70 + 0x3c) = (short)uVar4;
    sVar2 = wcslen(local_a8);
    lVar3 = FUN_146efdb37(pwVar1,sVar2 & 0xffffffff);
    lVar7 = local_a0;
    local_70[6] = lVar3;
    iVar9 = *(int *)((longlong)param_5 + 0xc);
    if (*(int *)((longlong)param_5 + 0xc) < 1) {
      iVar9 = 0;
    }
    *(int *)(local_70 + 7) = iVar9;
    LOCK();
    *(undefined4 *)(local_70 + 8) = 0;
    UNLOCK();
    local_78 = *param_5;
    local_80 = local_70;
    FUN_146f4d5ee(local_a0,&local_64,&local_80);
    local_60 = &local_70;
    local_58 = &local_80;
    FUN_146f4da66(lVar7 + 0x50,local_4c);
    plVar16 = local_70;
  }
LAB_142a95c54:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return plVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a95f78 FUN_142a95f78 body=121 status=ok
// SIG undefined FUN_142a95f78(void)

void FUN_142a95f78(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != (longlong *)0x0) {
    lVar3 = param_2[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = *param_2;
      lVar4 = 0;
      do {
        uVar2 = *(undefined8 *)(lVar1 + lVar4);
        FUN_146f4217e(param_1 + 0xa0,uVar2,param_2);
        FUN_146f11920(uVar2);
        lVar4 = lVar4 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar4);
    }
    FUN_1400020a8(param_2);
    return;
  }
  return;
}



// FUNCTION 142a95ff1 FUN_142a95ff1 body=69 status=ok
// SIG undefined FUN_142a95ff1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a95ff1(void)

{
  _DAT_14c999960 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a96033. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999968,1);
  return;
}



// FUNCTION 142a96036 FUN_142a96036 body=69 status=ok
// SIG undefined FUN_142a96036(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a96036(void)

{
  _DAT_14c999970 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a96078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999978,1);
  return;
}



// FUNCTION 142a9607b FUN_142a9607b body=69 status=ok
// SIG undefined FUN_142a9607b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9607b(void)

{
  _DAT_14c999980 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a960bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999988,1);
  return;
}



// FUNCTION 142a960c0 FUN_142a960c0 body=69 status=ok
// SIG undefined FUN_142a960c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a960c0(void)

{
  _DAT_14c999990 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a96102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999998,1);
  return;
}



// FUNCTION 142a96105 FUN_142a96105 body=69 status=ok
// SIG undefined FUN_142a96105(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a96105(void)

{
  _DAT_14c9999a8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a96147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9999b0,1);
  return;
}



// FUNCTION 142a9614a FUN_142a9614a body=69 status=ok
// SIG undefined FUN_142a9614a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9614a(void)

{
  _DAT_14c9999b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a9618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9999c0,1);
  return;
}



// FUNCTION 142a9618f FUN_142a9618f body=69 status=ok
// SIG undefined FUN_142a9618f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9618f(void)

{
  _DAT_14c9999c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a961d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9999d0,1);
  return;
}



// FUNCTION 142a961d4 FUN_142a961d4 body=69 status=ok
// SIG undefined FUN_142a961d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a961d4(void)

{
  _DAT_14c9999e0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a96216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9999e8,1);
  return;
}



// FUNCTION 142a96219 FUN_142a96219 body=69 status=ok
// SIG undefined FUN_142a96219(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a96219(void)

{
  _DAT_14c9999f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a9625b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c9999f8,1);
  return;
}



// FUNCTION 142a9625e FUN_142a9625e body=619 status=ok
// SIG undefined FUN_142a9625e(void)

void FUN_142a9625e(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  
  lVar11 = *(longlong *)(param_1 + 0x2d0);
  uVar6 = 0;
  if ((longlong)*(int *)(param_1 + 0x2d8) != 0) {
    lVar9 = (longlong)*(int *)(param_1 + 0x2d8) * 0x128 + lVar11;
    do {
      if (*(longlong *)(param_1 + 0x420) != 0) {
        lVar16 = lVar11 + 0xf0;
        if (*(longlong *)(lVar11 + 0x110) != 0) {
          lVar16 = *(longlong *)(lVar11 + 0x110);
        }
        iVar1 = *(int *)(lVar11 + 0x118);
        if ((longlong)iVar1 != 0) {
          lVar14 = 0;
          do {
            FUN_146f29e7c(*(undefined8 *)(param_1 + 0x420),*(undefined8 *)(lVar16 + lVar14));
            lVar14 = lVar14 + 8;
          } while ((longlong)iVar1 * 8 != lVar14);
        }
      }
      lVar11 = lVar11 + 0x128;
    } while (lVar11 != lVar9);
    uVar6 = *(undefined4 *)(param_1 + 0x2d8);
    lVar11 = *(longlong *)(param_1 + 0x2d0);
  }
  FUN_146f4aa93(lVar11,uVar6);
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if (*(int *)(param_1 + 0x2dc) != 0) {
    FUN_146f4e54a(param_1 + 0x2d0);
  }
  iVar1 = *(int *)(param_1 + 0x1f0);
  if (iVar1 == 0) {
    uVar15 = 1;
    uVar17 = 0;
    iVar10 = 0;
    iVar13 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x1e8);
    if (*(uint **)(param_1 + 0x1e8) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x1d8);
    }
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar17 = 0;
      uVar5 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar5 = uVar17;
      }
      iVar10 = 0;
      do {
        if (uVar5 == uVar17) goto LAB_142a963b6;
        iVar10 = iVar10 + 0x20;
        uVar4 = puVar3[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar4 == 0);
    }
    else {
      uVar17 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar4 & uVar4);
    uVar5 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar13 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar13) {
      iVar13 = iVar1;
    }
  }
  if (iVar13 != iVar1) {
    uVar4 = 0xffffffff;
    do {
      FUN_146f42f1a(param_1,*(longlong *)(param_1 + 0x1c8) + (longlong)iVar13 * 0x178 + 8);
      uVar4 = ~(uint)uVar15 & uVar4;
      puVar3 = *(uint **)(param_1 + 0x1e8);
      if (*(uint **)(param_1 + 0x1e8) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x1d8);
      }
      iVar2 = *(int *)(param_1 + 0x1f0);
      iVar13 = (int)uVar17;
      lVar11 = (longlong)iVar13;
      uVar12 = puVar3[lVar11] & uVar4;
      if (uVar12 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar13) {
          iVar8 = iVar13;
        }
        if (iVar13 < iVar7) {
          lVar9 = 0;
          do {
            uVar12 = puVar3[lVar11 + lVar9 + 1];
            if (uVar12 != 0) {
              uVar17 = (ulonglong)(iVar13 + (int)lVar9 + 1);
              uVar4 = 0xffffffff;
              goto LAB_142a96474;
            }
            iVar10 = iVar10 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar8 - lVar11 != lVar9);
          uVar4 = 0xffffffff;
          iVar13 = iVar8;
        }
        uVar17 = (ulonglong)(iVar13 + 1);
        iVar13 = iVar2;
      }
      else {
LAB_142a96474:
        uVar15 = (ulonglong)(-uVar12 & uVar12);
        uVar5 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar13 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar13) {
          iVar13 = iVar2;
        }
      }
    } while (iVar13 != iVar1);
  }
LAB_142a963b6:
  FUN_146f4e57a(param_1 + 0x1c8);
  return;
}



// FUNCTION 142a964ca FUN_142a964ca body=74 status=ok
// SIG undefined FUN_142a964ca(void)

ulonglong * FUN_142a964ca(ulonglong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar2 = FUN_146f5aaa4(param_3);
  uVar1 = DAT_14c99c008;
  if (uVar2 >> 0x3c != 0) {
    FUN_146f5b89e(param_2);
    if (*(longlong *)(param_2 + 8) == 0) {
      *(undefined8 *)(param_2 + 8) = uVar1;
    }
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return param_1;
}



// FUNCTION 142a96514 FUN_142a96514 body=1003 status=ok
// SIG undefined FUN_142a96514(void)

void FUN_142a96514(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  longlong local_70;
  uint *local_68;
  longlong local_60;
  undefined4 local_54;
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_74 = *(undefined4 *)(param_2 + 0x158);
  local_60 = param_2 + 8;
  local_68 = (uint *)(param_2 + 0x18);
  iVar1 = *(int *)(param_2 + 0x30);
  local_70 = param_1;
  local_54 = local_74;
  if (iVar1 == 0) {
    uVar9 = 1;
    uVar16 = 0;
    iVar10 = 0;
    iVar12 = 0;
  }
  else {
    puVar4 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar4 = local_68;
    }
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar16 = 0;
      uVar6 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar6 = uVar16;
      }
      iVar10 = 0;
      do {
        if (uVar6 == uVar16) goto LAB_142a965e2;
        iVar10 = iVar10 + 0x20;
        uVar5 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar16 = 0;
      iVar10 = 0;
    }
    uVar9 = (ulonglong)(-uVar5 & uVar5);
    uVar6 = uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar12) {
      iVar12 = iVar1;
    }
  }
  if (iVar12 != iVar1) {
    uVar5 = 0xffffffff;
    do {
      puVar3 = *(undefined4 **)(*(longlong *)(param_2 + 8) + 8 + (longlong)iVar12 * 0x18);
      local_50 = puVar3;
      FUN_146f43db6(param_1 + 0x230,&local_50,local_74);
      FUN_146f43952(local_70,puVar3);
      uVar5 = ~(uint)uVar9 & uVar5;
      puVar4 = *(uint **)(param_2 + 0x28);
      if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
        puVar4 = local_68;
      }
      iVar2 = *(int *)(param_2 + 0x30);
      iVar12 = (int)uVar16;
      lVar13 = (longlong)iVar12;
      uVar11 = puVar4[lVar13] & uVar5;
      if (uVar11 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar8;
        if (iVar8 < iVar12) {
          iVar7 = iVar12;
        }
        if (iVar12 < iVar8) {
          lVar14 = 0;
          do {
            uVar11 = puVar4[lVar13 + lVar14 + 1];
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar12 + (int)lVar14 + 1);
              uVar5 = 0xffffffff;
              goto LAB_142a967a9;
            }
            iVar10 = iVar10 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar7 - lVar13 != lVar14);
          uVar5 = 0xffffffff;
          lVar13 = (longlong)iVar7;
        }
        uVar16 = lVar13 + 1U & 0xffffffff;
        iVar12 = iVar2;
      }
      else {
LAB_142a967a9:
        uVar9 = (ulonglong)(-uVar11 & uVar11);
        uVar6 = uVar9 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar12) {
          iVar12 = iVar2;
        }
      }
    } while (iVar12 != iVar1);
  }
LAB_142a965e2:
  FUN_146f4ff20(local_60);
  FUN_146f500a8(param_2 + 0xa8);
  local_68 = (uint *)(param_2 + 0x58);
  iVar1 = *(int *)(param_2 + 0x80);
  if (iVar1 == 0) {
    uVar9 = 1;
    uVar16 = 0;
    iVar10 = 0;
    iVar12 = 0;
  }
  else {
    puVar4 = *(uint **)(param_2 + 0x78);
    if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
      puVar4 = (uint *)(param_2 + 0x68);
    }
    uVar5 = *puVar4;
    if (uVar5 == 0) {
      iVar10 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar10 = iVar1 + -1;
      }
      uVar16 = 0;
      uVar6 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar6 = uVar16;
      }
      iVar10 = 0;
      do {
        if (uVar6 == uVar16) goto LAB_142a9668c;
        iVar10 = iVar10 + 0x20;
        uVar5 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar16 = 0;
      iVar10 = 0;
    }
    uVar9 = (ulonglong)(-uVar5 & uVar5);
    uVar6 = uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar12 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar12) {
      iVar12 = iVar1;
    }
  }
  if (iVar12 != iVar1) {
    lVar13 = local_70 + 0x280;
    uVar5 = 0xffffffff;
    do {
      local_50 = *(undefined4 **)(*(longlong *)(param_2 + 0x58) + 8 + (longlong)iVar12 * 0x18);
      FUN_146f43db6(lVar13,&local_50,local_74);
      uVar5 = ~(uint)uVar9 & uVar5;
      puVar4 = *(uint **)(param_2 + 0x78);
      if (*(uint **)(param_2 + 0x78) == (uint *)0x0) {
        puVar4 = (uint *)(param_2 + 0x68);
      }
      iVar2 = *(int *)(param_2 + 0x80);
      iVar12 = (int)uVar16;
      lVar14 = (longlong)iVar12;
      uVar11 = puVar4[lVar14] & uVar5;
      if (uVar11 == 0) {
        iVar8 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar8 = iVar2 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar8;
        if (iVar8 < iVar12) {
          iVar7 = iVar12;
        }
        if (iVar12 < iVar8) {
          lVar15 = 0;
          do {
            uVar11 = puVar4[lVar14 + lVar15 + 1];
            if (uVar11 != 0) {
              uVar16 = (ulonglong)(iVar12 + (int)lVar15 + 1);
              uVar5 = 0xffffffff;
              goto LAB_142a968a4;
            }
            iVar10 = iVar10 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar14 != lVar15);
          uVar5 = 0xffffffff;
          iVar12 = iVar7;
        }
        uVar16 = (ulonglong)(iVar12 + 1);
        iVar12 = iVar2;
      }
      else {
LAB_142a968a4:
        uVar9 = (ulonglong)(-uVar11 & uVar11);
        uVar6 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar12 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar12) {
          iVar12 = iVar2;
        }
      }
    } while (iVar12 != iVar1);
  }
LAB_142a9668c:
  FUN_146f4ff20(local_68);
  FUN_146f500a8(param_2 + 0xf8);
  local_50 = &local_54;
  FUN_140b16dce(local_70 + 0x220);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a96900 FUN_142a96900 body=2515 status=ok
// SIG undefined FUN_142a96900(void)

void FUN_142a96900(longlong param_1,ulonglong *param_2,ulonglong param_3,char param_4)

{
  undefined8 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  void *_Src;
  void *_Dst;
  ulonglong uVar4;
  byte bVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined *puVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *plVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_d8 [32];
  ulonglong **local_b8;
  uint local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  ulonglong local_98;
  longlong local_90;
  longlong *local_88;
  uint local_7c;
  int local_78;
  uint local_74;
  longlong local_70;
  uint local_68;
  ulonglong *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar3 = param_2[0x1b];
  uVar4 = param_3;
  if (param_4 != '\0') {
    FUN_142a964ca(&local_50,param_2,uVar3);
    uVar4 = local_50;
  }
  local_50 = uVar4;
  uVar4 = local_50;
  uVar6 = 0;
  if (local_50 != 0) {
    uVar6 = FUN_146f546d2(uVar3,3);
  }
  local_98 = CONCAT44(local_98._4_4_,uVar6);
  uVar7 = FUN_146f546d2(uVar3,1);
  plVar19 = (longlong *)(ulonglong)(uVar7 & 1);
  if ((uVar7 & 1) == 0) {
    bVar5 = 0;
  }
  else {
    bVar5 = FUN_146f546d2(uVar3,1);
    bVar5 = bVar5 & 1;
  }
  if (((uVar4 ^ param_3) & 0xfffffffffffffff) != 0) {
    *param_2 = uVar4;
  }
  uVar7 = (uint)bVar5;
  *(uint *)(param_2 + 0x24) = (uint)param_2[0x24] & 0xfffffffe | uVar7;
  if (bVar5 == 0) {
    uVar18 = DAT_14c99c008;
    if (((param_2[1] != 0) || ((param_2[0x1b] != 0 && (*(int *)(param_2[0x1b] + 0x14) != 0)))) ||
       ((param_2[0x1c] != 0 && (*(int *)(param_2[0x1c] + 0x18) != 0)))) goto LAB_142a96bd1;
    local_a8 = 2;
    local_74 = uVar7;
    if (uVar4 == 0) {
      uVar24 = 0;
      local_90 = param_1;
LAB_142a96bf3:
      uVar7 = 0;
      local_a4 = 0;
    }
    else {
      local_90 = param_1;
      uVar11 = FUN_146f18900(*(undefined8 *)(param_1 + 0x70),uVar4);
      uVar24 = 0;
      if ((int)uVar11 != 0) {
        uVar24 = uVar11 & 0xffffffff;
        goto LAB_142a96bf3;
      }
      uVar18 = DAT_14c99c008;
      if ((local_98 & 2) == 0) goto LAB_142a96bd1;
      local_a4 = (undefined4)CONCAT71((int7)(uVar11 >> 8),1);
      uVar7 = 0;
    }
LAB_142a96bfb:
    iVar23 = (int)uVar24;
    lVar13 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_90 + 0x70) + 0x270) + (longlong)(iVar23 / 100) * 8)
    ;
    lVar21 = (ulonglong)(uint)(iVar23 % 100) * 0x38;
    lVar22 = *(longlong *)(lVar13 + 0x10 + lVar21);
    if (lVar22 == 0) {
      puVar16 = &DAT_149f9d5ac;
    }
    else {
      puVar16 = (undefined *)**(undefined8 **)(lVar22 + 0x30);
    }
    local_88 = (longlong *)(lVar13 + lVar21);
    FUN_146f5b7da(param_2,puVar16);
    plVar17 = *(longlong **)(local_90 + 0x218);
    FUN_146f4487c(plVar17,1,local_90 + 0x30);
    lVar13 = *plVar17;
    uVar9 = *(uint *)(plVar17 + 1);
    puVar1 = (undefined8 *)(lVar13 + (ulonglong)uVar9 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar13 + 0x10 + (ulonglong)uVar9 * 0x18) = 0;
    piVar2 = (int *)(*plVar17 + (ulonglong)*(uint *)(plVar17 + 1) * 0x18);
    piVar2[4] = ((uint)local_98 & 1) * 0x10 + (uint)((local_98 & 5) != 0) * 8 |
                (uint)((local_98 & 3) != 0) << 5 | uVar7 << 6 | piVar2[4] & 0xffffff87U;
    if ((int)plVar19 != 0) {
      FUN_146f5b7da(param_2,L"State");
      lVar13 = local_90;
      uVar18 = DAT_14c99c010;
      if ((iVar23 != 0 & ((byte)local_a4 ^ 1)) == 0) goto LAB_142a96bd1;
      local_98 = FUN_146f4320c(local_90,uVar24);
      lVar22 = local_88[2];
      plVar17 = (longlong *)(piVar2 + 2);
      if (*(uint *)(lVar22 + 0x24) < 0x41) {
        if (bVar5 == 0) {
          if ((*(byte *)(local_98 + 0x15e) & 0x20) != 0) goto LAB_142a96fac;
LAB_142a96f46:
          FUN_142a8f362(param_2,plVar17,local_88[4],lVar22);
        }
        else {
LAB_142a96e50:
          FUN_142a8f6ce(param_2,plVar17,local_88[4],lVar22);
        }
      }
      else {
        local_90 = lVar13;
        plVar12 = (longlong *)
                  FUN_146f16038(lVar13 + 0x58,*(uint *)(lVar22 + 0x24) + 0x1f >> 3 & 0xfffffffc,4);
        *plVar17 = (longlong)plVar12;
        if (bVar5 != 0) {
          lVar22 = local_88[2];
          plVar17 = plVar12;
          goto LAB_142a96e50;
        }
        lVar13 = local_90;
        if ((*(byte *)(local_98 + 0x15e) & 0x20) == 0) {
          lVar22 = local_88[2];
          plVar17 = plVar12;
          goto LAB_142a96f46;
        }
LAB_142a96fac:
        uVar18 = param_2[0x1b];
        local_a0 = plVar17;
        uVar7 = FUN_146f546d2(uVar18,2);
        if (uVar7 == 2) {
          uVar7 = FUN_146f546d2(uVar18,2);
          if (*(int *)(uVar18 + 0x14) == 0) {
            plVar17 = local_a0;
            if (0x40 < *(ushort *)(local_98 + 0x15c)) {
              plVar17 = (longlong *)*local_a0;
            }
            FUN_142a8f362(param_2,plVar17,local_88[4],local_88[2]);
            local_a8 = uVar7;
          }
        }
        else {
          local_7c = uVar7;
          uVar15 = FUN_146f546d2(uVar18,1);
          uVar11 = local_98;
          if (*(int *)(uVar18 + 0x14) == 0) {
            if ((uVar15 & 1) == 0) {
              uVar7 = *(uint *)(local_98 + 0x15c);
              if ((local_7c == (uVar7 >> 0x16 & 3)) && (uVar9 = uVar7 >> 0x18 & 3, uVar9 != 2)) {
                FUN_146f14d5e(*(undefined8 *)(lVar13 + 0x78),uVar24,
                              *(undefined8 *)(local_98 + 0x148 + (ulonglong)uVar9 * 8));
                *(undefined8 *)(uVar11 + 0x148 + (ulonglong)(*(byte *)(uVar11 + 0x15f) & 3) * 8) = 0
                ;
                uVar7 = *(uint *)(uVar11 + 0x15c) & 0xfcffffff | 0x2000000;
                *(uint *)(uVar11 + 0x15c) = uVar7;
              }
            }
            else {
              local_a8 = ~local_7c & 1;
              uVar7 = (uint)*(ushort *)(local_98 + 0x15c);
            }
            local_b8 = (ulonglong **)local_88[2];
            plVar17 = local_a0;
            if (0x40 < (uVar7 & 0xffff)) {
              plVar17 = (longlong *)*local_a0;
            }
            FUN_142a8fa74(param_2,plVar17,local_88[4],
                          *(undefined8 *)(uVar11 + 0x148 + (ulonglong)local_7c * 8));
          }
        }
      }
      plVar17 = local_88;
      uVar18 = local_98;
      if (local_a8 != 2) {
        uVar11 = (ulonglong)local_a8;
        lVar13 = *(longlong *)(local_98 + 0x148 + uVar11 * 8);
        local_a0 = plVar19;
        local_78 = iVar23;
        if (lVar13 == 0) {
          uVar14 = FUN_142a7293e(*(undefined8 *)(local_90 + 0x78),uVar24,4);
          *(undefined8 *)(uVar18 + 0x148 + uVar11 * 8) = uVar14;
        }
        else {
          FUN_146f3b202(param_2,lVar13,local_88[2]);
          lVar13 = plVar17[2];
          _Src = (void *)plVar17[4];
          _Dst = *(void **)(uVar18 + 0x148 + uVar11 * 8);
          memcpy(_Dst,_Src,(ulonglong)*(uint *)(lVar13 + 0xc));
          if ((*(byte *)(lVar13 + 0x3c) & 1) != 0) {
            FUN_146f3ba08(param_2,_Dst,_Src,lVar13);
          }
        }
        iVar23 = local_78;
        plVar19 = local_a0;
        uVar7 = *(uint *)(uVar18 + 0x15c);
        uVar10 = uVar7 >> 0x18 & 3;
        uVar20 = uVar7 >> 0x16 & 3;
        uVar9 = 2;
        if (local_a8 != uVar20) {
          uVar9 = uVar20;
        }
        uVar7 = uVar7 & 0xfcffffff | uVar9 << 0x18;
        *(uint *)(uVar18 + 0x15c) = uVar7;
        if ((uVar10 != 2) && (uVar9 == 2)) {
          uVar14 = *(undefined8 *)(uVar18 + 0x148 + (ulonglong)uVar10 * 8);
          *(undefined8 *)(uVar18 + 0x148 + (ulonglong)uVar10 * 8) = 0;
          FUN_146f14d5e(*(undefined8 *)(local_90 + 0x78),local_78,uVar14);
          uVar7 = *(uint *)(uVar18 + 0x15c);
        }
        *(uint *)(uVar18 + 0x15c) = uVar7 & 0xff3fffff | (local_a8 & 3) << 0x16;
      }
    }
    uVar7 = FUN_146f546d2(uVar3,1);
    lVar13 = local_90;
    bVar25 = true;
    if ((uVar7 & 1) != 0) {
      local_a0 = plVar19;
      FUN_146f5b7da(param_2,L"Attachments");
      iVar8 = 0;
      if (iVar23 == 0) {
        uVar18 = DAT_14c99c008;
        if ((char)local_a4 == '\0') {
          uVar9 = FUN_146f546d2(uVar3,1);
          iVar8 = (uVar9 & 1) + 1;
          if (((uVar9 & 1) != 0) || (uVar18 = DAT_14c99c008, *(char *)(lVar13 + 0x19) != '\0'))
          goto LAB_142a97143;
        }
LAB_142a96bd1:
        FUN_146f5b89e(param_2);
        if (param_2[1] == 0) goto LAB_142a96be4;
        goto LAB_142a96d15;
      }
LAB_142a97143:
      local_b8 = (ulonglong **)*local_88;
      FUN_146f15f7c(lVar13 + 0x3b0,param_2,iVar8,iVar23);
      bVar25 = iVar8 != 2;
      plVar19 = local_a0;
    }
    if (((param_2[1] == 0) && ((param_2[0x1b] == 0 || (*(int *)(param_2[0x1b] + 0x14) == 0)))) &&
       ((param_2[0x1c] == 0 || (*(int *)(param_2[0x1c] + 0x18) == 0)))) {
      if ((bVar25 & ((byte)local_a4 ^ 1)) == 1) {
        *piVar2 = iVar23;
        piVar2[4] = (piVar2[4] & 0xfffffff8U) + (int)plVar19 * 2 + (uVar7 & 1) * 4 + local_74;
        piVar2 = (int *)(*(longlong *)(lVar13 + 0x218) + 8);
        *piVar2 = *piVar2 + 1;
      }
      goto LAB_142a96d18;
    }
  }
  else {
    local_74 = (uint)bVar5;
    FUN_146f5b7da(param_2,L"ReadCreationInfo");
    if (param_4 == '\0') {
      uVar14 = 0;
LAB_142a96ad6:
      local_90 = param_1;
      uVar9 = FUN_146f546d2(uVar3,1);
      uVar7 = 2;
      if ((uVar9 & 1) != 0) {
        uVar7 = FUN_146f546d2(uVar3,2);
      }
      lVar13 = local_90;
      uVar18 = DAT_14c99c028;
      uVar11 = DAT_14c99c010;
      iVar23 = *(int *)(uVar3 + 0x14);
      if (uVar4 == 0 || iVar23 != 0) {
        FUN_146f5b89e(param_2);
        if (param_2[1] == 0) {
          if (iVar23 == 0) {
            uVar18 = uVar11;
          }
LAB_142a96be4:
          param_2[1] = uVar18;
        }
      }
      else {
        local_58 = *(undefined4 *)(local_90 + 0xc);
        local_b8 = &local_60;
        local_54 = 0;
        local_a8 = uVar7;
        local_a0 = plVar19;
        local_60 = param_2;
        FUN_146f39da2(*(undefined8 *)(local_90 + 0x80),&local_70,uVar14,uVar4);
        if (local_70 != 0) {
          FUN_146f43952(lVar13,local_70);
          uVar10 = FUN_146f18900(*(undefined8 *)(lVar13 + 0x70),local_70);
          lVar22 = *(longlong *)
                    (*(longlong *)(*(longlong *)(lVar13 + 0x70) + 0x270) +
                    (longlong)((int)uVar10 / 100) * 8);
          lVar21 = (ulonglong)(uint)((int)uVar10 % 100) * 0x38;
          *(ushort *)(lVar22 + 0x32 + lVar21) =
               *(ushort *)(lVar22 + 0x32 + lVar21) & 0xffdf | (ushort)((local_68 & 1) << 5);
          uVar7 = (local_68 & 2) >> 1;
          lVar13 = FUN_146f42d1a(lVar13);
          uVar24 = (ulonglong)uVar10;
          *(uint *)(lVar13 + 0x15c) = *(uint *)(lVar13 + 0x15c) & 0xffdfffff | (uVar9 & 1) << 0x15;
          local_a4 = 0;
          plVar19 = local_a0;
          goto LAB_142a96bfb;
        }
        if (param_2[1] == 0) {
          param_2[1] = DAT_14c99c020;
        }
      }
    }
    else {
      iVar8 = FUN_146f18900(*(undefined8 *)(param_1 + 0x70),param_3);
      uVar11 = DAT_14c99c028;
      uVar18 = DAT_14c99c008;
      iVar23 = *(int *)(uVar3 + 0x14);
      if (iVar8 != 0 && iVar23 == 0) {
        uVar14 = *(undefined8 *)
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x270) +
                    (longlong)(iVar8 / 100) * 8) + (ulonglong)(uint)(iVar8 % 100) * 0x38);
        goto LAB_142a96ad6;
      }
      FUN_146f5b89e(param_2);
      if (param_2[1] == 0) {
        if (iVar23 != 0) {
          uVar18 = uVar11;
        }
        param_2[1] = uVar18;
      }
    }
  }
LAB_142a96d15:
  *param_2 = uVar4;
LAB_142a96d18:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a972d4 FUN_142a972d4 body=6457 status=ok
// SIG undefined FUN_142a972d4(void)

void FUN_142a972d4(longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4,
                  longlong param_5,longlong *param_6,longlong *param_7)

{
  ulonglong *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStack_178 [32];
  longlong *local_158;
  longlong local_150;
  ulonglong local_148;
  uint local_13c;
  uint *local_138;
  uint *local_130;
  longlong local_128;
  longlong *local_120;
  longlong *local_118;
  ulonglong local_110;
  undefined4 local_104;
  ulonglong *local_100;
  undefined4 *local_f8;
  uint local_ec;
  uint *local_e8;
  ulonglong **ppuStack_e0;
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  undefined8 local_bc;
  int local_b4;
  undefined1 local_b0 [8];
  undefined1 *local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  uint local_88 [4];
  uint *local_78;
  uint local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = (longlong *)(param_2 + 8);
  uVar3 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0x3c);
  uVar15 = ((int)param_6[1] - *(int *)((longlong)param_6 + 0x34)) + uVar3;
  local_128 = param_1;
  if (uVar3 < uVar15) {
    if ((int)uVar15 < 0) goto LAB_142a98c06;
    FUN_146f4f452(local_158,uVar15);
    iVar4 = 1;
    if (3 < uVar15) {
      uVar3 = (uVar15 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((*(int *)(param_2 + 0x50) == 0) || (*(int *)(param_2 + 0x50) < iVar4)) {
      *(int *)(param_2 + 0x50) = iVar4;
      FUN_146f4b31a();
    }
  }
  iVar4 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar15 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0x3c);
  if (uVar15 != 0) {
    if ((int)uVar15 < 0) goto LAB_142a98c06;
    FUN_146f2f030(&local_98,uVar15);
    iVar5 = 1;
    if (3 < uVar15) {
      uVar3 = (uVar15 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_146f2f1de();
    }
  }
  local_138 = (uint *)CONCAT71(local_138._1_7_,param_4);
  local_130 = (uint *)(param_2 + 0x18);
  iVar5 = *(int *)(param_2 + 0x30);
  uVar18 = 1;
  uVar17 = 0;
  iVar6 = 0;
  local_150 = param_2;
  local_120 = param_3;
  if (iVar5 != 0) {
    puVar7 = *(uint **)(param_2 + 0x28);
    if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
      puVar7 = local_130;
    }
    uVar3 = *puVar7;
    if (uVar3 == 0) {
      iVar4 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar4 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar18 = 0;
      }
      iVar4 = 0;
      do {
        if (uVar18 == uVar17) goto LAB_142a974a4;
        iVar4 = iVar4 + 0x20;
        uVar3 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar3 == 0);
    }
    else {
      iVar4 = 0;
      uVar17 = 0;
    }
    uVar18 = (ulonglong)(-uVar3 & uVar3);
    uVar22 = uVar18 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar6 = (iVar4 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
  }
  if (iVar6 != iVar5) {
    uVar3 = 0xffffffff;
    do {
      FUN_146f2f6e8(&local_98,&local_e8,*(longlong *)(param_2 + 8) + (longlong)iVar6 * 0x18 + 8,0);
      uVar3 = ~(uint)uVar18 & uVar3;
      puVar7 = *(uint **)(param_2 + 0x28);
      if (*(uint **)(param_2 + 0x28) == (uint *)0x0) {
        puVar7 = local_130;
      }
      iVar8 = *(int *)(param_2 + 0x30);
      iVar6 = (int)uVar17;
      lVar20 = (longlong)iVar6;
      uVar15 = puVar7[lVar20] & uVar3;
      if (uVar15 == 0) {
        iVar10 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar10 = iVar8 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar4 = iVar4 + 0x20;
        iVar12 = iVar10;
        if (iVar10 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar21 = 0;
          do {
            uVar15 = puVar7[lVar20 + lVar21 + 1];
            if (uVar15 != 0) {
              uVar17 = (ulonglong)(iVar6 + (int)lVar21 + 1);
              uVar3 = 0xffffffff;
              goto LAB_142a97b39;
            }
            iVar4 = iVar4 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar12 - lVar20 != lVar21);
          uVar3 = 0xffffffff;
          iVar6 = iVar12;
        }
        uVar17 = (ulonglong)(iVar6 + 1);
        param_2 = local_150;
        iVar6 = iVar8;
      }
      else {
LAB_142a97b39:
        uVar18 = (ulonglong)(-uVar15 & uVar15);
        uVar22 = uVar18 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar6 = (iVar4 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar6) {
          iVar6 = iVar8;
        }
      }
    } while (iVar6 != iVar5);
  }
LAB_142a974a4:
  uVar3 = *(uint *)(local_120 + 1);
  local_148 = (ulonglong)uVar3;
  uVar15 = 0;
  local_13c = 0xffffffff >> (-*(char *)((longlong)local_120 + 0xc) & 0x1fU);
  if (local_148 != 0) {
    lVar20 = *local_120;
    local_118 = param_6 + 7;
    uVar17 = 0;
    do {
      uVar23 = 0xffffffff;
      if (uVar17 == uVar3 - 1) {
        uVar23 = local_13c;
      }
      uVar23 = uVar23 & *(uint *)(lVar20 + uVar17 * 4);
      uVar16 = uVar15;
      if (uVar23 != 0) {
        do {
          if ((uVar23 & 1) != 0) {
            local_ec = uVar16;
            FUN_146f4afae(local_158,uVar16,&local_ec);
            uVar24 = local_ec;
            if ((int)param_6[9] != 0) {
              lVar21 = *param_6;
              plVar13 = (longlong *)param_6[8];
              if ((longlong *)param_6[8] == (longlong *)0x0) {
                plVar13 = local_118;
              }
              iVar4 = *(int *)((longlong)plVar13 +
                              (longlong)(int)((int)param_6[9] - 1U & local_ec) * 4);
              while (iVar5 = iVar4, iVar5 != -1) {
                iVar4 = *(int *)(lVar21 + 0x10 + (longlong)iVar5 * 0x18);
                if (*(uint *)(lVar21 + (longlong)iVar5 * 0x18) == local_ec) {
                  do {
                    local_100 = *(ulonglong **)(lVar21 + 8 + (longlong)iVar5 * 0x18);
                    local_e8 = &local_ec;
                    ppuStack_e0 = &local_100;
                    FUN_146f4b0f4(local_158,&local_110,uVar16,&local_e8);
                    lVar21 = *param_6;
                    do {
                      iVar5 = iVar4;
                      if (iVar5 == -1) goto LAB_142a97514;
                      iVar4 = *(int *)(lVar21 + 0x10 + (longlong)iVar5 * 0x18);
                    } while (*(uint *)(lVar21 + (longlong)iVar5 * 0x18) != uVar24);
                  } while( true );
                }
              }
            }
          }
LAB_142a97514:
          bVar2 = 1 < uVar23;
          uVar23 = uVar23 >> 1;
          uVar16 = uVar16 + 1;
        } while (bVar2);
      }
      uVar17 = uVar17 + 1;
      uVar15 = uVar15 + 0x20;
    } while (uVar17 != local_148);
  }
  if ((char)local_138 != '\0') {
    local_ec = 0xffffffff;
    FUN_146f4afae(local_158,0xffffffff,&local_ec);
    uVar3 = local_ec;
    if ((int)param_6[9] != 0) {
      lVar20 = *param_6;
      plVar13 = param_6 + 7;
      if ((longlong *)param_6[8] != (longlong *)0x0) {
        plVar13 = (longlong *)param_6[8];
      }
      iVar4 = *(int *)((longlong)plVar13 + (longlong)(int)((int)param_6[9] - 1U & local_ec) * 4);
      while (iVar5 = iVar4, iVar5 != -1) {
        iVar4 = *(int *)(lVar20 + 0x10 + (longlong)iVar5 * 0x18);
        if (*(uint *)(lVar20 + (longlong)iVar5 * 0x18) == local_ec) {
          do {
            local_100 = *(ulonglong **)(lVar20 + 8 + (longlong)iVar5 * 0x18);
            local_e8 = &local_ec;
            ppuStack_e0 = &local_100;
            FUN_146f4b0f4(local_158,&local_110,0xffffffff,&local_e8);
            lVar20 = *param_6;
            do {
              iVar5 = iVar4;
              if (iVar5 == -1) goto LAB_142a97708;
              iVar4 = *(int *)(lVar20 + 0x10 + (longlong)iVar5 * 0x18);
            } while (*(uint *)(lVar20 + (longlong)iVar5 * 0x18) != uVar3);
          } while( true );
        }
      }
    }
  }
LAB_142a97708:
  lVar20 = local_150;
  iVar4 = 0;
  local_c8 = (uint *)0x0;
  local_c0 = 0;
  local_e8 = (uint *)0x0;
  ppuStack_e0 = (ulonglong **)0x0;
  local_bc = 0xffffffff00000080;
  local_b4 = 0;
  local_a8 = (undefined1 *)0x0;
  local_a0 = 0;
  uVar15 = (int)param_6[1] - *(int *)((longlong)param_6 + 0x34);
  if (uVar15 != 0) {
    if ((int)uVar15 < 0) goto LAB_142a98c06;
    FUN_146f2f030(&local_e8,uVar15);
    iVar5 = 1;
    if (3 < uVar15) {
      uVar3 = (uVar15 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_a0 == 0) || (local_a0 < iVar5)) {
      local_a0 = iVar5;
      FUN_146f2f1de();
    }
  }
  iVar5 = *(int *)(lVar20 + 0x30);
  uVar18 = 1;
  uVar17 = 0;
  iVar6 = 0;
  if (iVar5 != 0) {
    puVar7 = *(uint **)(lVar20 + 0x28);
    if (*(uint **)(lVar20 + 0x28) == (uint *)0x0) {
      puVar7 = local_130;
    }
    uVar3 = *puVar7;
    if (uVar3 == 0) {
      iVar4 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar4 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar18 = 0;
      }
      iVar4 = 0;
      do {
        if (uVar18 == uVar17) goto LAB_142a97832;
        iVar4 = iVar4 + 0x20;
        uVar3 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar3 == 0);
    }
    else {
      iVar4 = 0;
      uVar17 = 0;
    }
    uVar18 = (ulonglong)(-uVar3 & uVar3);
    uVar22 = uVar18 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar6 = (iVar4 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
  }
  if (iVar6 != iVar5) {
    uVar3 = 0xffffffff;
    do {
      FUN_146f2f6e8(&local_e8,&local_100,*(longlong *)(lVar20 + 8) + (longlong)iVar6 * 0x18 + 8,0);
      uVar3 = ~(uint)uVar18 & uVar3;
      puVar7 = *(uint **)(lVar20 + 0x28);
      if (*(uint **)(lVar20 + 0x28) == (uint *)0x0) {
        puVar7 = local_130;
      }
      iVar8 = *(int *)(lVar20 + 0x30);
      iVar6 = (int)uVar17;
      lVar21 = (longlong)iVar6;
      uVar15 = puVar7[lVar21] & uVar3;
      if (uVar15 == 0) {
        iVar10 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar10 = iVar8 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar4 = iVar4 + 0x20;
        iVar12 = iVar10;
        if (iVar10 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar19 = 0;
          do {
            uVar15 = puVar7[lVar21 + lVar19 + 1];
            if (uVar15 != 0) {
              uVar17 = (ulonglong)(iVar6 + (int)lVar19 + 1);
              uVar3 = 0xffffffff;
              goto LAB_142a97c30;
            }
            iVar4 = iVar4 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar12 - lVar21 != lVar19);
          uVar3 = 0xffffffff;
          lVar21 = (longlong)iVar12;
        }
        uVar17 = lVar21 + 1U & 0xffffffff;
        lVar20 = local_150;
        iVar6 = iVar8;
      }
      else {
LAB_142a97c30:
        uVar18 = (ulonglong)(-uVar15 & uVar15);
        uVar22 = uVar18 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar6 = (iVar4 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar6) {
          iVar6 = iVar8;
        }
      }
    } while (iVar6 != iVar5);
  }
LAB_142a97832:
  uVar15 = (uint)(local_b4 < (int)ppuStack_e0) << 0x10;
  uVar3 = *(uint *)(lVar20 + 0x15c);
  *(uint *)(lVar20 + 0x15c) = uVar3 & 0xfffeffff | uVar15;
  uVar17 = 0;
  if (*(int *)(lVar20 + 0x10) != *(int *)(lVar20 + 0x3c)) {
    lVar21 = lVar20 + 0x40;
    if (*(longlong *)(lVar20 + 0x48) != 0) {
      lVar21 = *(longlong *)(lVar20 + 0x48);
    }
    iVar4 = *(int *)(lVar21 + (ulonglong)(*(int *)(lVar20 + 0x50) - 1) * 4);
    if (iVar4 != -1) {
      do {
        piVar11 = (int *)(*local_158 + (longlong)iVar4 * 0x18);
        if (*piVar11 == -1) goto LAB_142a978a8;
        iVar4 = piVar11[4];
      } while (iVar4 != -1);
    }
  }
  piVar11 = (int *)0x0;
LAB_142a978a8:
  *(uint *)(lVar20 + 0x15c) = uVar3 & 0xfffcffff | uVar15 | (uint)(piVar11 != (int *)0x0) << 0x11;
  local_104 = *(undefined4 *)(lVar20 + 0x158);
  plVar13 = (longlong *)(ulonglong)local_70;
  uVar18 = 1;
  iVar4 = 0;
  uVar3 = 0;
  if (local_70 != 0) {
    puVar7 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar7 = local_88;
    }
    uVar3 = *puVar7;
    if (uVar3 == 0) {
      iVar4 = local_70 + 0x1e;
      if (-1 < (int)(local_70 - 1)) {
        iVar4 = local_70 - 1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar18 = uVar17;
      }
      iVar4 = 0;
      do {
        if (uVar18 == uVar17) goto LAB_142a97969;
        iVar4 = iVar4 + 0x20;
        uVar3 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar17 = 0;
    }
    uVar18 = (ulonglong)(-uVar3 & uVar3);
    uVar22 = uVar18 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    uVar3 = (iVar4 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if ((int)local_70 <= (int)uVar3) {
      uVar3 = local_70;
    }
  }
  if (uVar3 != local_70) {
    local_148 = local_128 + 0x230;
    uVar23 = 0xffffffff;
    uVar15 = local_70;
    local_158 = plVar13;
    do {
      puVar1 = *(ulonglong **)(local_98 + (longlong)(int)uVar3 * 0x10);
      local_100 = puVar1;
      if ((int)ppuStack_e0 != local_b4) {
        puVar14 = local_a8;
        if (local_a8 == (undefined1 *)0x0) {
          puVar14 = local_b0;
        }
        for (uVar3 = *(uint *)(puVar14 +
                              (ulonglong)
                              (local_a0 - 1U &
                              (int)puVar1 + ((uint)((ulonglong)puVar1 >> 0x20) & 0xfffffff) * 0x17)
                              * 4); uVar3 != 0xffffffff;
            uVar3 = local_e8[(longlong)(int)uVar3 * 4 + 2]) {
          if (((*(ulonglong *)(local_e8 + (longlong)(int)uVar3 * 4) ^ (ulonglong)puVar1) &
              0xfffffffffffffff) == 0) goto LAB_142a97dae;
        }
      }
      iVar5 = *(int *)(param_5 + 0x108);
      *(uint *)(param_5 + 0x108) = iVar5 + 1U;
      if (*(uint *)(param_5 + 0x10c) < iVar5 + 1U) {
        FUN_146f1b220(param_5,iVar5);
      }
      lVar20 = *(longlong *)(param_5 + 0x100);
      if (*(longlong *)(param_5 + 0x100) == 0) {
        lVar20 = param_5;
      }
      *(ulonglong **)(lVar20 + (longlong)iVar5 * 8) = puVar1;
      FUN_146f43a38(local_148,&local_100,local_104);
      FUN_146f43952(local_128,puVar1);
      plVar13 = local_158;
      uVar15 = local_70;
LAB_142a97dae:
      uVar23 = uVar23 & ~(uint)uVar18;
      puVar7 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar7 = local_88;
      }
      iVar5 = (int)uVar17;
      lVar20 = (longlong)iVar5;
      uVar3 = puVar7[lVar20] & uVar23;
      if (uVar3 == 0) {
        iVar6 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar6 = uVar15 - 1;
        }
        iVar6 = iVar6 >> 5;
        iVar4 = iVar4 + 0x20;
        iVar8 = iVar6;
        if (iVar6 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar6) {
          lVar21 = 0;
          do {
            uVar3 = puVar7[lVar20 + lVar21 + 1];
            if (uVar3 != 0) {
              uVar17 = (ulonglong)(iVar5 + (int)lVar21 + 1);
              uVar23 = 0xffffffff;
              goto LAB_142a97e26;
            }
            iVar4 = iVar4 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar8 - lVar20 != lVar21);
          uVar23 = 0xffffffff;
          lVar20 = (longlong)iVar8;
        }
        uVar17 = lVar20 + 1U & 0xffffffff;
        uVar3 = uVar15;
      }
      else {
LAB_142a97e26:
        uVar18 = (ulonglong)(-uVar3 & uVar3);
        uVar22 = uVar18 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        uVar3 = (iVar4 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if ((int)uVar15 <= (int)uVar3) {
          uVar3 = uVar15;
        }
      }
    } while (uVar3 != (uint)plVar13);
  }
LAB_142a97969:
  iVar4 = local_c0;
  if (local_c0 == 0) {
    uVar22 = 1;
    uVar17 = 0;
    iVar5 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = local_c8;
    if (local_c8 == (uint *)0x0) {
      puVar7 = local_d8;
    }
    uVar3 = *puVar7;
    if (uVar3 == 0) {
      iVar5 = local_c0 + 0x1e;
      if (-1 < local_c0 + -1) {
        iVar5 = local_c0 + -1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar18 = uVar17;
      }
      iVar5 = 0;
      do {
        if (uVar18 == uVar17) goto LAB_142a979f6;
        iVar5 = iVar5 + 0x20;
        uVar3 = puVar7[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar17 = 0;
      iVar5 = 0;
    }
    uVar22 = (ulonglong)(-uVar3 & uVar3);
    uVar18 = uVar22 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar18 != 0) {
      for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar6 = (iVar5 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (local_c0 <= iVar6) {
      iVar6 = local_c0;
    }
  }
  if (iVar6 != local_c0) {
    lVar20 = local_128 + 0x230;
    uVar3 = 0xffffffff;
    iVar8 = local_c0;
    do {
      local_110 = *(ulonglong *)(local_e8 + (longlong)iVar6 * 4);
      if ((int)uStack_90 != local_64) {
        puVar14 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar14 = local_60;
        }
        for (iVar6 = *(int *)(puVar14 +
                             (ulonglong)
                             (local_50 - 1U &
                             (int)local_110 + ((uint)(local_110 >> 0x20) & 0xfffffff) * 0x17) * 4);
            iVar6 != -1; iVar6 = *(int *)((longlong)iVar6 * 0x10 + local_98 + 8)) {
          if (((*(ulonglong *)(local_98 + (longlong)iVar6 * 0x10) ^ local_110) & 0xfffffffffffffff)
              == 0) goto LAB_142a97f56;
        }
      }
      local_100 = &local_110;
      local_f8 = &local_104;
      FUN_146f4f64c(lVar20,&local_ec,&local_100);
      iVar8 = local_c0;
LAB_142a97f56:
      uVar3 = uVar3 & ~(uint)uVar22;
      puVar7 = local_c8;
      if (local_c8 == (uint *)0x0) {
        puVar7 = local_d8;
      }
      iVar6 = (int)uVar17;
      lVar21 = (longlong)iVar6;
      uVar15 = puVar7[lVar21] & uVar3;
      if (uVar15 == 0) {
        iVar10 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar10 = iVar8 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar5 = iVar5 + 0x20;
        iVar12 = iVar10;
        if (iVar10 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar19 = 0;
          do {
            uVar15 = puVar7[lVar21 + lVar19 + 1];
            if (uVar15 != 0) {
              uVar17 = (ulonglong)(iVar6 + (int)lVar19 + 1);
              uVar3 = 0xffffffff;
              goto LAB_142a97fcc;
            }
            iVar5 = iVar5 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar12 - lVar21 != lVar19);
          uVar3 = 0xffffffff;
          lVar21 = (longlong)iVar12;
        }
        uVar17 = lVar21 + 1U & 0xffffffff;
        iVar6 = iVar8;
      }
      else {
LAB_142a97fcc:
        uVar22 = (ulonglong)(-uVar15 & uVar15);
        uVar18 = uVar22 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        iVar6 = (iVar5 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar6) {
          iVar6 = iVar8;
        }
      }
    } while (iVar6 != iVar4);
  }
LAB_142a979f6:
  local_a0 = 0;
  if (local_a8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1459ad93e(&local_e8);
  lVar20 = local_150;
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1459ad93e(&local_98);
  if (DAT_14c75f482 != '\0') {
    local_158 = (longlong *)(lVar20 + 0x58);
    uVar3 = *(int *)(lVar20 + 0x60) - *(int *)(lVar20 + 0x8c);
    uVar15 = ((int)param_7[1] - *(int *)((longlong)param_7 + 0x34)) + uVar3;
    if (uVar3 < uVar15) {
      if ((int)uVar15 < 0) goto LAB_142a98c06;
      FUN_146f4f452(local_158,uVar15);
      iVar4 = 1;
      if (3 < uVar15) {
        uVar3 = (uVar15 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((*(int *)(lVar20 + 0xa0) == 0) || (*(int *)(lVar20 + 0xa0) < iVar4)) {
        *(int *)(lVar20 + 0xa0) = iVar4;
        FUN_146f4b31a();
      }
    }
    uVar17 = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = (undefined1 *)0x0;
    local_50 = 0;
    uVar15 = *(int *)(lVar20 + 0x60) - *(int *)(lVar20 + 0x8c);
    if (uVar15 != 0) {
      if ((int)uVar15 < 0) goto LAB_142a98c06;
      FUN_146f2f030(&local_98,uVar15);
      iVar4 = 1;
      if (3 < uVar15) {
        uVar3 = (uVar15 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar4)) {
        local_50 = iVar4;
        FUN_146f2f1de();
      }
    }
    lVar21 = local_150;
    local_138 = (uint *)(lVar20 + 0x68);
    iVar4 = *(int *)(lVar20 + 0x80);
    uVar18 = 1;
    iVar6 = 0;
    iVar5 = 0;
    if (iVar4 != 0) {
      puVar7 = *(uint **)(lVar20 + 0x78);
      if (*(uint **)(lVar20 + 0x78) == (uint *)0x0) {
        puVar7 = local_138;
      }
      uVar3 = *puVar7;
      if (uVar3 == 0) {
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        uVar17 = 0;
        uVar18 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar18 = uVar17;
        }
        iVar6 = 0;
        do {
          if (uVar18 == uVar17) goto LAB_142a981ec;
          iVar6 = iVar6 + 0x20;
          uVar3 = puVar7[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar17 = 0;
      }
      uVar18 = (ulonglong)(-uVar3 & uVar3);
      uVar22 = uVar18 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar5 = (iVar6 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 != iVar4) {
      uVar3 = 0xffffffff;
      do {
        FUN_146f2f6e8(&local_98,&local_e8,*(longlong *)(lVar21 + 0x58) + (longlong)iVar5 * 0x18 + 8,
                      0);
        uVar3 = ~(uint)uVar18 & uVar3;
        puVar7 = *(uint **)(lVar21 + 0x78);
        if (*(uint **)(lVar21 + 0x78) == (uint *)0x0) {
          puVar7 = local_138;
        }
        iVar8 = *(int *)(lVar21 + 0x80);
        iVar5 = (int)uVar17;
        lVar20 = (longlong)iVar5;
        uVar15 = puVar7[lVar20] & uVar3;
        if (uVar15 == 0) {
          iVar10 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar10 = iVar8 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar6 = iVar6 + 0x20;
          iVar12 = iVar10;
          if (iVar10 < iVar5) {
            iVar12 = iVar5;
          }
          if (iVar5 < iVar10) {
            lVar19 = 0;
            do {
              uVar15 = puVar7[lVar20 + lVar19 + 1];
              if (uVar15 != 0) {
                uVar17 = (ulonglong)(iVar5 + (int)lVar19 + 1);
                uVar3 = 0xffffffff;
                goto LAB_142a98714;
              }
              iVar6 = iVar6 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar12 - lVar20 != lVar19);
            uVar3 = 0xffffffff;
            iVar5 = iVar12;
          }
          uVar17 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar8;
        }
        else {
LAB_142a98714:
          uVar18 = (ulonglong)(-uVar15 & uVar15);
          uVar22 = uVar18 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar5 = (iVar6 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar5) {
            iVar5 = iVar8;
          }
        }
      } while (iVar5 != iVar4);
    }
LAB_142a981ec:
    uVar3 = *(uint *)(local_120 + 1);
    local_148 = (ulonglong)uVar3;
    uVar15 = 0;
    local_13c = 0xffffffff >> (-*(char *)((longlong)local_120 + 0xc) & 0x1fU);
    if (local_148 != 0) {
      local_118 = (longlong *)*local_120;
      local_130 = (uint *)(param_7 + 7);
      uVar17 = 0;
      do {
        uVar23 = 0xffffffff;
        if (uVar17 == uVar3 - 1) {
          uVar23 = local_13c;
        }
        uVar23 = uVar23 & *(uint *)((longlong)local_118 + uVar17 * 4);
        uVar18 = (ulonglong)uVar23;
        uVar16 = uVar15;
        if (uVar23 != 0) {
          do {
            if ((uVar18 & 1) != 0) {
              local_ec = uVar16;
              FUN_146f4afae(local_158,uVar16,&local_ec);
              uVar23 = local_ec;
              if ((int)param_7[9] != 0) {
                lVar20 = *param_7;
                puVar7 = (uint *)param_7[8];
                if ((uint *)param_7[8] == (uint *)0x0) {
                  puVar7 = local_130;
                }
                uVar24 = puVar7[(int)((int)param_7[9] - 1U & local_ec)];
                while (uVar9 = uVar24, uVar9 != 0xffffffff) {
                  uVar24 = *(uint *)(lVar20 + 0x10 + (longlong)(int)uVar9 * 0x18);
                  if (*(uint *)(lVar20 + (longlong)(int)uVar9 * 0x18) == local_ec) {
                    do {
                      local_100 = *(ulonglong **)(lVar20 + 8 + (longlong)(int)uVar9 * 0x18);
                      local_e8 = &local_ec;
                      ppuStack_e0 = &local_100;
                      FUN_146f4b0f4(local_158,&local_110,uVar16,&local_e8);
                      lVar20 = *param_7;
                      do {
                        uVar9 = uVar24;
                        if (uVar9 == 0xffffffff) goto LAB_142a98260;
                        uVar24 = *(uint *)(lVar20 + 0x10 + (longlong)(int)uVar9 * 0x18);
                      } while (*(uint *)(lVar20 + (longlong)(int)uVar9 * 0x18) != uVar23);
                    } while( true );
                  }
                }
              }
            }
LAB_142a98260:
            uVar23 = (uint)uVar18;
            uVar18 = uVar18 >> 1;
            uVar16 = uVar16 + 1;
          } while (1 < uVar23);
        }
        uVar17 = uVar17 + 1;
        uVar15 = uVar15 + 0x20;
      } while (uVar17 != local_148);
    }
    lVar20 = local_150;
    uVar17 = 0;
    local_c8 = (uint *)0x0;
    local_c0 = 0;
    local_e8 = (uint *)0x0;
    ppuStack_e0 = (ulonglong **)0x0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = (undefined1 *)0x0;
    local_a0 = 0;
    uVar15 = *(int *)(local_150 + 0x60) - *(int *)(local_150 + 0x8c);
    if (uVar15 != 0) {
      if ((int)uVar15 < 0) {
LAB_142a98c06:
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar15);
      }
      FUN_146f2f030(&local_e8,uVar15);
      iVar4 = 1;
      if (3 < uVar15) {
        uVar3 = (uVar15 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar3 != 0) {
          for (; uVar3 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((local_a0 == 0) || (local_a0 < iVar4)) {
        local_a0 = iVar4;
        FUN_146f2f1de();
      }
    }
    lVar21 = local_150;
    iVar4 = *(int *)(lVar20 + 0x80);
    uVar18 = 1;
    iVar6 = 0;
    iVar5 = 0;
    if (iVar4 != 0) {
      puVar7 = *(uint **)(lVar20 + 0x78);
      if (puVar7 == (uint *)0x0) {
        puVar7 = local_138;
      }
      uVar3 = *puVar7;
      if (uVar3 == 0) {
        iVar5 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar5 = iVar4 + -1;
        }
        uVar17 = 0;
        uVar18 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar18 = uVar17;
        }
        iVar6 = 0;
        do {
          if (uVar18 == uVar17) goto LAB_142a984b7;
          iVar6 = iVar6 + 0x20;
          uVar3 = puVar7[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar17 = 0;
      }
      uVar18 = (ulonglong)(-uVar3 & uVar3);
      uVar22 = uVar18 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar5 = (iVar6 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar5) {
        iVar5 = iVar4;
      }
    }
    if (iVar5 != iVar4) {
      uVar3 = 0xffffffff;
      do {
        FUN_146f2f6e8(&local_e8,&local_100,*(longlong *)(lVar21 + 0x58) + (longlong)iVar5 * 0x18 + 8
                      ,0);
        uVar3 = ~(uint)uVar18 & uVar3;
        puVar7 = *(uint **)(lVar21 + 0x78);
        if (*(uint **)(lVar21 + 0x78) == (uint *)0x0) {
          puVar7 = local_138;
        }
        iVar8 = *(int *)(lVar21 + 0x80);
        iVar5 = (int)uVar17;
        lVar20 = (longlong)iVar5;
        uVar15 = puVar7[lVar20] & uVar3;
        if (uVar15 == 0) {
          iVar10 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar10 = iVar8 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar6 = iVar6 + 0x20;
          iVar12 = iVar10;
          if (iVar10 < iVar5) {
            iVar12 = iVar5;
          }
          if (iVar5 < iVar10) {
            lVar19 = 0;
            do {
              uVar15 = puVar7[lVar20 + lVar19 + 1];
              if (uVar15 != 0) {
                uVar17 = (ulonglong)(iVar5 + (int)lVar19 + 1);
                uVar3 = 0xffffffff;
                goto LAB_142a9882f;
              }
              iVar6 = iVar6 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar12 - lVar20 != lVar19);
            uVar3 = 0xffffffff;
            iVar5 = iVar12;
          }
          uVar17 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar8;
        }
        else {
LAB_142a9882f:
          uVar18 = (ulonglong)(-uVar15 & uVar15);
          uVar22 = uVar18 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar22 != 0) {
            for (; uVar22 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar5 = (iVar6 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar5) {
            iVar5 = iVar8;
          }
        }
      } while (iVar5 != iVar4);
    }
LAB_142a984b7:
    uVar3 = local_70;
    local_104 = *(undefined4 *)(local_150 + 0x158);
    local_158 = (longlong *)CONCAT44(local_158._4_4_,local_104);
    if (local_70 == 0) {
      uVar22 = 1;
      uVar17 = 0;
      iVar4 = 0;
      uVar15 = 0;
    }
    else {
      puVar7 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar7 = local_88;
      }
      uVar15 = *puVar7;
      if (uVar15 == 0) {
        iVar4 = local_70 + 0x1e;
        if (-1 < (int)(local_70 - 1)) {
          iVar4 = local_70 - 1;
        }
        uVar17 = 0;
        uVar18 = (ulonglong)(uint)(iVar4 >> 5);
        if (iVar4 >> 5 < 1) {
          uVar18 = uVar17;
        }
        iVar4 = 0;
        do {
          if (uVar18 == uVar17) goto LAB_142a98562;
          iVar4 = iVar4 + 0x20;
          uVar15 = puVar7[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar17 = 0;
        iVar4 = 0;
      }
      uVar22 = (ulonglong)(-uVar15 & uVar15);
      uVar18 = uVar22 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      uVar15 = (iVar4 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if ((int)local_70 <= (int)uVar15) {
        uVar15 = local_70;
      }
    }
    if (uVar15 != local_70) {
      lVar20 = local_128 + 0x280;
      uVar16 = 0xffffffff;
      uVar23 = local_70;
      do {
        local_100 = *(ulonglong **)(local_98 + (longlong)(int)uVar15 * 0x10);
        if ((int)ppuStack_e0 != local_b4) {
          puVar14 = local_a8;
          if (local_a8 == (undefined1 *)0x0) {
            puVar14 = local_b0;
          }
          for (uVar15 = *(uint *)(puVar14 +
                                 (ulonglong)
                                 (local_a0 - 1U &
                                 (int)local_100 +
                                 ((uint)((ulonglong)local_100 >> 0x20) & 0xfffffff) * 0x17) * 4);
              uVar15 != 0xffffffff; uVar15 = local_e8[(longlong)(int)uVar15 * 4 + 2]) {
            if (((*(ulonglong *)(local_e8 + (longlong)(int)uVar15 * 4) ^ (ulonglong)local_100) &
                0xfffffffffffffff) == 0) goto LAB_142a9895a;
          }
        }
        FUN_146f43a38(lVar20,&local_100,(ulonglong)local_158 & 0xffffffff);
        uVar23 = local_70;
LAB_142a9895a:
        uVar16 = uVar16 & ~(uint)uVar22;
        puVar7 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar7 = local_88;
        }
        iVar5 = (int)uVar17;
        lVar21 = (longlong)iVar5;
        uVar15 = puVar7[lVar21] & uVar16;
        if (uVar15 == 0) {
          iVar6 = uVar23 + 0x1e;
          if (-1 < (int)(uVar23 - 1)) {
            iVar6 = uVar23 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar4 = iVar4 + 0x20;
          iVar8 = iVar6;
          if (iVar6 < iVar5) {
            iVar8 = iVar5;
          }
          if (iVar5 < iVar6) {
            lVar19 = 0;
            do {
              uVar15 = puVar7[lVar21 + lVar19 + 1];
              if (uVar15 != 0) {
                uVar17 = (ulonglong)(iVar5 + (int)lVar19 + 1);
                uVar16 = 0xffffffff;
                goto LAB_142a989d9;
              }
              iVar4 = iVar4 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar8 - lVar21 != lVar19);
            uVar16 = 0xffffffff;
            iVar5 = iVar8;
          }
          uVar17 = (ulonglong)(iVar5 + 1);
          uVar15 = uVar23;
        }
        else {
LAB_142a989d9:
          uVar22 = (ulonglong)(-uVar15 & uVar15);
          uVar18 = uVar22 * 2 + 1;
          lVar21 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          uVar15 = (iVar4 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
          if ((int)uVar23 <= (int)uVar15) {
            uVar15 = uVar23;
          }
        }
      } while (uVar15 != uVar3);
    }
LAB_142a98562:
    iVar4 = local_c0;
    if (local_c0 == 0) {
      uVar22 = 1;
      uVar17 = 0;
      iVar5 = 0;
      iVar6 = 0;
    }
    else {
      puVar7 = local_c8;
      if (local_c8 == (uint *)0x0) {
        puVar7 = local_d8;
      }
      uVar3 = *puVar7;
      if (uVar3 == 0) {
        iVar5 = local_c0 + 0x1e;
        if (-1 < local_c0 + -1) {
          iVar5 = local_c0 + -1;
        }
        uVar17 = 0;
        uVar18 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar18 = uVar17;
        }
        iVar5 = 0;
        do {
          if (uVar18 == uVar17) goto LAB_142a985f5;
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar7[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar3 == 0);
      }
      else {
        uVar17 = 0;
        iVar5 = 0;
      }
      uVar22 = (ulonglong)(-uVar3 & uVar3);
      uVar18 = uVar22 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar6 = (iVar5 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
      if (local_c0 <= iVar6) {
        iVar6 = local_c0;
      }
    }
    if (iVar6 != local_c0) {
      local_128 = local_128 + 0x280;
      uVar3 = 0xffffffff;
      iVar8 = local_c0;
      do {
        local_110 = *(ulonglong *)(local_e8 + (longlong)iVar6 * 4);
        if ((local_110 & 1) == 0 && local_110 != 0) {
          if ((int)uStack_90 != local_64) {
            puVar14 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar14 = local_60;
            }
            for (iVar6 = *(int *)(puVar14 +
                                 (ulonglong)
                                 (local_50 - 1U &
                                 (int)local_110 + ((uint)(local_110 >> 0x20) & 0xfffffff) * 0x17) *
                                 4); iVar6 != -1;
                iVar6 = *(int *)((longlong)iVar6 * 0x10 + local_98 + 8)) {
              if (((*(ulonglong *)(local_98 + (longlong)iVar6 * 0x10) ^ local_110) &
                  0xfffffffffffffff) == 0) goto LAB_142a98b22;
            }
          }
          local_100 = &local_110;
          local_f8 = &local_104;
          FUN_146f4f64c(local_128,&local_ec,&local_100);
          iVar8 = local_c0;
        }
LAB_142a98b22:
        uVar3 = uVar3 & ~(uint)uVar22;
        puVar7 = local_c8;
        if (local_c8 == (uint *)0x0) {
          puVar7 = local_d8;
        }
        iVar6 = (int)uVar17;
        lVar20 = (longlong)iVar6;
        uVar15 = puVar7[lVar20] & uVar3;
        if (uVar15 == 0) {
          iVar10 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar10 = iVar8 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar5 = iVar5 + 0x20;
          iVar12 = iVar10;
          if (iVar10 < iVar6) {
            iVar12 = iVar6;
          }
          if (iVar6 < iVar10) {
            lVar21 = 0;
            do {
              uVar15 = puVar7[lVar20 + lVar21 + 1];
              if (uVar15 != 0) {
                uVar17 = (ulonglong)(iVar6 + (int)lVar21 + 1);
                uVar3 = 0xffffffff;
                goto LAB_142a98b97;
              }
              iVar5 = iVar5 + 0x20;
              lVar21 = lVar21 + 1;
            } while (iVar12 - lVar20 != lVar21);
            uVar3 = 0xffffffff;
            iVar6 = iVar12;
          }
          uVar17 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar8;
        }
        else {
LAB_142a98b97:
          uVar22 = (ulonglong)(-uVar15 & uVar15);
          uVar18 = uVar22 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar6 = (iVar5 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar8 <= iVar6) {
            iVar6 = iVar8;
          }
        }
      } while (iVar6 != iVar4);
    }
LAB_142a985f5:
    local_a0 = 0;
    if (local_a8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1459ad93e(&local_e8);
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1459ad93e(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a98c10 FUN_142a98c10 body=1771 status=ok
// SIG undefined FUN_142a98c10(void)

void FUN_142a98c10(longlong param_1,uint *param_2,longlong *param_3,undefined1 param_4,
                  undefined8 param_5,uint *param_6,longlong *param_7)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  short *psVar5;
  uint uVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_f8 [32];
  uint *local_d8;
  ulonglong local_d0;
  uint *local_c8;
  longlong local_c0;
  uint *local_b8;
  longlong *local_b0;
  uint *local_a8;
  uint local_9c;
  uint *local_98;
  uint *local_90;
  longlong local_88;
  uint *local_80;
  uint *local_78;
  undefined8 local_70;
  longlong local_68;
  uint local_5c;
  undefined8 local_58;
  uint local_50;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = param_2 + 2;
  uVar13 = (param_6[2] - param_6[0xd]) + (param_2[4] - param_2[0xf]);
  local_c0 = param_1;
  if (param_2[4] - param_2[0xf] < uVar13) {
    if ((int)uVar13 < 0) goto LAB_142a992ec;
    FUN_146f4f452(local_d8,uVar13);
    uVar11 = 1;
    if (3 < uVar13) {
      uVar13 = (uVar13 | 1) + 0xe;
      iVar15 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      uVar11 = 1 << ((byte)iVar15 & 0x1f);
    }
    if ((param_2[0x14] == 0) || ((int)param_2[0x14] < (int)uVar11)) {
      param_2[0x14] = uVar11;
      FUN_146f4b31a(local_d8);
    }
  }
  local_d0 = CONCAT71(local_d0._1_7_,param_4);
  uVar13 = (param_6[2] - param_6[0xd]) + (param_2[4] - param_2[0xf]);
  if (param_2[0x2c] - param_2[0x37] < uVar13) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar13);
    }
    FUN_146f4f92e(param_2 + 0x2a,uVar13);
    uVar11 = 1;
    if (3 < uVar13) {
      uVar13 = (uVar13 | 1) + 0xe;
      iVar15 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
        }
      }
      uVar11 = 1 << ((byte)iVar15 & 0x1f);
    }
    if ((param_2[0x3c] == 0) || ((int)param_2[0x3c] < (int)uVar11)) {
      param_2[0x3c] = uVar11;
      FUN_146f4b658();
    }
  }
  local_78 = param_6;
  local_70 = param_5;
  local_68 = local_c0;
  uVar13 = *(uint *)(param_3 + 1);
  iVar15 = 0;
  cVar2 = *(char *)((longlong)param_3 + 0xc);
  local_c8 = param_2;
  local_b0 = param_3;
  local_80 = param_2;
  if ((ulonglong)uVar13 != 0) {
    local_a8 = (uint *)*param_3;
    uVar17 = 0;
    do {
      uVar11 = 0xffffffff;
      if (uVar17 == uVar13 - 1) {
        uVar11 = 0xffffffff >> (-cVar2 & 0x1fU);
      }
      uVar11 = uVar11 & local_a8[uVar17];
      iVar16 = iVar15;
      if (uVar11 != 0) {
        do {
          if ((uVar11 & 1) != 0) {
            FUN_142a992fe(&local_80,iVar16);
          }
          bVar10 = 1 < uVar11;
          uVar11 = uVar11 >> 1;
          iVar16 = iVar16 + 1;
        } while (bVar10);
      }
      uVar17 = uVar17 + 1;
      iVar15 = iVar15 + 0x20;
    } while (uVar17 != uVar13);
  }
  if ((char)local_d0 != '\0') {
    FUN_142a992fe(&local_80,0xffffffff);
  }
  plVar7 = local_b0;
  puVar12 = local_c8;
  uVar11 = (uint)((int)local_c8[0x37] < (int)local_c8[0x2c]) << 0x10;
  uVar13 = local_c8[0x57];
  local_c8[0x57] = uVar13 & 0xfffeffff | uVar11;
  uVar6 = 0;
  if (local_c8[4] != local_c8[0xf]) {
    puVar9 = local_c8 + 0x10;
    if (*(uint **)(local_c8 + 0x12) != (uint *)0x0) {
      puVar9 = *(uint **)(local_c8 + 0x12);
    }
    uVar14 = puVar9[local_c8[0x14] - 1];
    if (uVar14 != 0xffffffff) {
      do {
        piVar1 = (int *)(*(longlong *)local_d8 + (longlong)(int)uVar14 * 0x18);
        if (*piVar1 == -1) {
          uVar6 = (uint)(piVar1 != (int *)0x0) << 0x11;
          break;
        }
        uVar14 = piVar1[4];
      } while (uVar14 != 0xffffffff);
    }
  }
  local_c8[0x57] = uVar13 & 0xfffcffff | uVar11 | uVar6;
  if (DAT_14c75f482 == '\x01') {
    puVar9 = local_c8 + 0x16;
    uVar13 = ((int)param_7[1] - *(int *)((longlong)param_7 + 0x34)) +
             (local_c8[0x18] - local_c8[0x23]);
    if (local_c8[0x18] - local_c8[0x23] < uVar13) {
      if ((int)uVar13 < 0) goto LAB_142a992ec;
      FUN_146f4f452(puVar9,uVar13);
      uVar11 = 1;
      if (3 < uVar13) {
        uVar13 = (uVar13 | 1) + 0xe;
        iVar15 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
          }
        }
        uVar11 = 1 << ((byte)iVar15 & 0x1f);
      }
      if ((puVar12[0x28] == 0) || ((int)puVar12[0x28] < (int)uVar11)) {
        puVar12[0x28] = uVar11;
        FUN_146f4b31a(puVar9);
      }
    }
    local_b8 = puVar12 + 0x3e;
    uVar13 = ((int)param_7[1] - *(int *)((longlong)param_7 + 0x34)) +
             (puVar12[0x18] - puVar12[0x23]);
    if (puVar12[0x40] - puVar12[0x4b] < uVar13) {
      if ((int)uVar13 < 0) {
LAB_142a992ec:
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar13);
      }
      FUN_146f4f92e(local_b8,uVar13);
      uVar11 = 1;
      if (3 < uVar13) {
        uVar13 = (uVar13 | 1) + 0xe;
        iVar15 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar15 == 0; iVar15 = iVar15 + -1) {
          }
        }
        uVar11 = 1 << ((byte)iVar15 & 0x1f);
      }
      if ((puVar12[0x50] == 0) || ((int)puVar12[0x50] < (int)uVar11)) {
        puVar12[0x50] = uVar11;
        FUN_146f4b658();
      }
    }
    local_98 = (uint *)(ulonglong)*(uint *)(plVar7 + 1);
    local_d0 = 0;
    local_9c = 0xffffffff >> (-*(char *)((longlong)plVar7 + 0xc) & 0x1fU);
    if (local_98 != (uint *)0x0) {
      local_88 = *plVar7;
      local_90 = (uint *)(ulonglong)(*(uint *)(plVar7 + 1) - 1);
      local_a8 = puVar12 + 0x24;
      local_c0 = local_c0 + 0x280;
      local_b0 = param_7 + 7;
      puVar8 = (uint *)0x0;
      do {
        uVar13 = 0xffffffff;
        if (puVar8 == local_90) {
          uVar13 = local_9c;
        }
        uVar13 = uVar13 & *(uint *)(local_88 + (longlong)puVar8 * 4);
        uVar17 = local_d0;
        local_d8 = puVar8;
        if (uVar13 != 0) {
          do {
            uVar11 = (uint)uVar17;
            if ((uVar13 & 1) != 0) {
              local_50 = uVar11;
              if (puVar12[0x28] != 0) {
                puVar8 = *(uint **)(puVar12 + 0x26);
                if (*(uint **)(puVar12 + 0x26) == (uint *)0x0) {
                  puVar8 = local_a8;
                }
                uVar6 = puVar8[(int)(puVar12[0x28] - 1 & uVar11)];
                while (uVar14 = uVar6, uVar14 != 0xffffffff) {
                  lVar3 = *(longlong *)puVar9;
                  uVar6 = *(uint *)(lVar3 + 0x10 + (longlong)(int)uVar14 * 0x18);
                  if (*(uint *)(lVar3 + (longlong)(int)uVar14 * 0x18) == uVar11) {
                    bVar10 = false;
                    do {
                      puVar12 = *(uint **)(lVar3 + 8 + (longlong)(int)uVar14 * 0x18);
                      local_80 = puVar12;
                      lVar3 = FUN_146f4b4be(param_7,uVar17,&local_80);
                      if (lVar3 == 0) {
                        FUN_146f4b02a(puVar9,uVar14);
                        cVar2 = FUN_146f4268e(local_c8,puVar12);
                        if (cVar2 != '\0') {
                          FUN_146f43db6(local_c0,&local_80,local_c8[0x56]);
                          bVar10 = true;
                        }
                      }
                      do {
                        uVar14 = uVar6;
                        if (uVar14 == 0xffffffff) goto LAB_142a98fd8;
                        lVar3 = *(longlong *)puVar9;
                        uVar6 = *(uint *)(lVar3 + 0x10 + (longlong)(int)uVar14 * 0x18);
                      } while (*(uint *)(lVar3 + (longlong)(int)uVar14 * 0x18) != uVar11);
                      uVar17 = (ulonglong)local_50;
                    } while( true );
                  }
                }
              }
              bVar10 = false;
LAB_142a98fd8:
              uVar6 = local_50;
              if ((int)param_7[9] != 0) {
                lVar3 = *param_7;
                plVar7 = (longlong *)param_7[8];
                if ((longlong *)param_7[8] == (longlong *)0x0) {
                  plVar7 = local_b0;
                }
                iVar15 = *(int *)((longlong)plVar7 +
                                 (longlong)(int)((int)param_7[9] - 1U & local_50) * 4);
                while (iVar16 = iVar15, iVar16 != -1) {
                  iVar15 = *(int *)(lVar3 + 0x10 + (longlong)iVar16 * 0x18);
                  if (*(uint *)(lVar3 + (longlong)iVar16 * 0x18) == local_50) {
                    do {
                      local_58 = *(undefined8 *)(lVar3 + 8 + (longlong)iVar16 * 0x18);
                      lVar4 = FUN_146f4b4be(puVar9,local_50,&local_58);
                      if (lVar4 == 0) {
                        local_80 = &local_50;
                        local_78 = (uint *)&local_58;
                        FUN_146f4faca(puVar9,local_4c,&local_80);
                        local_80 = (uint *)((ulonglong)local_80 & 0xffffffffffff0000);
                        psVar5 = (short *)FUN_146f4fbc2(local_b8,((uint)((ulonglong)local_58 >> 0x20
                                                                        ) & 0xfffffff) * 0x17 +
                                                                 (int)local_58,&local_58,&local_80);
                        *psVar5 = *psVar5 + 1;
                        local_5c = local_c8[0x56];
                        local_78 = &local_5c;
                        local_80 = (uint *)&local_58;
                        FUN_146f4f64c(local_c0,local_4c,&local_80);
                        lVar3 = *param_7;
                      }
                      do {
                        iVar16 = iVar15;
                        if (iVar16 == -1) goto LAB_142a99121;
                        iVar15 = *(int *)(lVar3 + 0x10 + (longlong)iVar16 * 0x18);
                      } while (*(uint *)(lVar3 + (longlong)iVar16 * 0x18) != uVar6);
                    } while( true );
                  }
                }
              }
LAB_142a99121:
              puVar8 = local_b8;
              puVar12 = local_c8;
              if (bVar10) {
                FUN_146f4b550(local_b8);
                FUN_146f4b614(puVar8,puVar12[0x40] - puVar12[0x4b]);
              }
            }
            bVar10 = 1 < uVar13;
            uVar17 = (ulonglong)(uVar11 + 1);
            uVar13 = uVar13 >> 1;
          } while (bVar10);
        }
        puVar8 = (uint *)((longlong)local_d8 + 1);
        local_d0 = (ulonglong)((int)local_d0 + 0x20);
      } while (puVar8 != local_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a992fe FUN_142a992fe body=750 status=ok
// SIG undefined FUN_142a992fe(void)

void FUN_142a992fe(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  short *psVar8;
  longlong *plVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined4 local_74;
  undefined8 local_70;
  uint local_64;
  uint *local_60;
  uint *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  int iVar13;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar6 = *param_1;
  lVar7 = param_1[3];
  plVar1 = (longlong *)(lVar6 + 8);
  local_64 = param_2;
  if (*(int *)(lVar6 + 0x50) != 0) {
    lVar5 = lVar6 + 0x40;
    if (*(longlong *)(lVar6 + 0x48) != 0) {
      lVar5 = *(longlong *)(lVar6 + 0x48);
    }
    iVar12 = *(int *)(lVar5 + (longlong)(int)(*(int *)(lVar6 + 0x50) - 1U & param_2) * 4);
    while (iVar13 = iVar12, iVar13 != -1) {
      lVar6 = *plVar1;
      iVar12 = *(int *)(lVar6 + 0x10 + (longlong)iVar13 * 0x18);
      if (*(uint *)(lVar6 + (longlong)iVar13 * 0x18) == param_2) {
        local_80 = lVar7 + 0x230;
        bVar11 = false;
        local_88 = lVar7;
        do {
          puVar2 = *(uint **)(lVar6 + 8 + (longlong)iVar13 * 0x18);
          local_60 = puVar2;
          lVar6 = FUN_146f4b4be(param_1[1],param_2);
          if (lVar6 == 0) {
            FUN_146f4b02a(plVar1,iVar13);
            cVar4 = FUN_146f4259e(*param_1,puVar2);
            if (cVar4 != '\0') {
              lVar6 = param_1[2];
              iVar13 = *(int *)(lVar6 + 0x108);
              *(uint *)(lVar6 + 0x108) = iVar13 + 1U;
              if (*(uint *)(lVar6 + 0x10c) < iVar13 + 1U) {
                FUN_146f1b220(lVar6,iVar13);
              }
              lVar7 = *(longlong *)(lVar6 + 0x100);
              if (*(longlong *)(lVar6 + 0x100) == 0) {
                lVar7 = lVar6;
              }
              *(uint **)(lVar7 + (longlong)iVar13 * 8) = puVar2;
              FUN_146f43db6(local_80,&local_60,*(undefined4 *)(*param_1 + 0x158));
              FUN_146f43952(local_88,puVar2);
              bVar11 = true;
            }
          }
          do {
            iVar13 = iVar12;
            lVar7 = local_88;
            if (iVar13 == -1) goto LAB_142a99462;
            lVar6 = *plVar1;
            iVar12 = *(int *)(lVar6 + 0x10 + (longlong)iVar13 * 0x18);
          } while (*(uint *)(lVar6 + (longlong)iVar13 * 0x18) != param_2);
        } while( true );
      }
    }
  }
  bVar11 = false;
LAB_142a99462:
  plVar3 = (longlong *)param_1[1];
  if ((int)plVar3[9] != 0) {
    plVar9 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar3[8];
    }
    iVar12 = *(int *)((longlong)plVar9 + (longlong)(int)((int)plVar3[9] - 1U & param_2) * 4);
    while (iVar13 = iVar12, iVar13 != -1) {
      lVar6 = *plVar3;
      iVar12 = *(int *)(lVar6 + 0x10 + (longlong)iVar13 * 0x18);
      if (*(uint *)(lVar6 + (longlong)iVar13 * 0x18) == param_2) {
        uVar10 = param_2;
        do {
          local_70 = *(undefined8 *)(lVar6 + 8 + (longlong)iVar13 * 0x18);
          lVar6 = FUN_146f4b4be(plVar1,uVar10,&local_70);
          if (lVar6 == 0) {
            local_60 = &local_64;
            local_58 = (uint *)&local_70;
            FUN_146f4faca(plVar1,local_4c,&local_60);
            local_60 = (uint *)((ulonglong)local_60 & 0xffffffffffff0000);
            psVar8 = (short *)FUN_146f4fbc2(*param_1 + 0xa8,
                                            ((uint)((ulonglong)local_70 >> 0x20) & 0xfffffff) * 0x17
                                            + (int)local_70,&local_70,&local_60);
            *psVar8 = *psVar8 + 1;
            local_74 = *(undefined4 *)(*param_1 + 0x158);
            local_58 = &local_74;
            local_60 = (uint *)&local_70;
            FUN_146f4f64c(lVar7 + 0x230,local_4c,&local_60);
          }
          do {
            iVar13 = iVar12;
            if (iVar13 == -1) goto LAB_142a99597;
            lVar6 = *plVar3;
            iVar12 = *(int *)(lVar6 + 0x10 + (longlong)iVar13 * 0x18);
            uVar10 = local_64;
          } while (*(uint *)(lVar6 + (longlong)iVar13 * 0x18) != param_2);
        } while( true );
      }
    }
  }
LAB_142a99597:
  if (bVar11) {
    lVar6 = *param_1;
    FUN_146f4b550(lVar6 + 0xa8);
    FUN_146f4b614(lVar6 + 0xa8,*(int *)(lVar6 + 0xb0) - *(int *)(lVar6 + 0xdc));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a995ee FUN_142a995ee body=804 status=ok
// SIG undefined FUN_142a995ee(void)

undefined8 FUN_142a995ee(uint *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint *puVar2;
  undefined8 uVar3;
  short *psVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  undefined1 auStack_b8 [36];
  uint local_94;
  uint *local_90;
  uint *local_88;
  uint local_7c;
  uint *local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_68;
  uint *local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar9 = param_1[0x57];
  local_6c = uVar9 & 0xffff;
  local_78 = param_1;
  if (0x40 < local_6c) {
    local_78 = *(uint **)param_1;
  }
  uVar12 = uVar9 >> 0x10;
  uVar10 = uVar9 >> 0x11;
  local_70 = local_6c + 0x1f >> 5;
  if (local_6c == 0) {
    local_78 = &local_6c;
  }
  uVar5 = param_1[0x20];
  local_68 = param_2;
  if (uVar5 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar17 = 0;
    uVar6 = 0;
  }
  else {
    puVar2 = *(uint **)(param_1 + 0x1e);
    if (*(uint **)(param_1 + 0x1e) == (uint *)0x0) {
      puVar2 = param_1 + 0x1a;
    }
    uVar6 = *puVar2;
    if (uVar6 == 0) {
      iVar17 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar17 = uVar5 - 1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar17 >> 5);
      if (iVar17 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar17 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_142a998a5;
        iVar17 = iVar17 + 0x20;
        uVar6 = puVar2[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar15 = 0;
      iVar17 = 0;
    }
    uVar16 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar6 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar6) {
      uVar6 = uVar5;
    }
  }
  if ((int)uVar6 < (int)uVar5) {
    local_88 = param_1 + 2;
    local_90 = param_1 + 0x2a;
    uVar9 = 0xffffffff;
    uVar3 = 0;
    local_94 = uVar12;
    do {
      lVar13 = *(longlong *)(param_1 + 0x16);
      if (((local_68 ^ *(ulonglong *)(lVar13 + 8 + (longlong)(int)uVar6 * 0x18)) & 0xfffffffffffffff
          ) == 0) {
        local_7c = *(uint *)(lVar13 + (longlong)(int)uVar6 * 0x18);
        uVar12 = 1;
        if (local_7c != 0xffffffff) {
          local_78[local_7c >> 5] = local_78[local_7c >> 5] | 1 << ((byte)local_7c & 0x1f);
          local_94 = (uint)CONCAT71((int7)((ulonglong)local_78 >> 8),1);
          uVar12 = uVar10;
        }
        uVar10 = uVar12;
        FUN_146f4b02a(param_1 + 0x16);
        if (DAT_14c9999a0 == '\x01') {
          FUN_146f4268e(param_1,local_68);
        }
        local_60 = &local_7c;
        local_58 = &local_68;
        FUN_146f4faca(local_88,local_4c,&local_60);
        if (DAT_14c9999a0 == '\x01') {
          local_60 = (uint *)((ulonglong)local_60 & 0xffffffffffff0000);
          psVar4 = (short *)FUN_146f4fbc2(local_90,((uint)(local_68 >> 0x20) & 0xfffffff) * 0x17 +
                                                   (int)local_68,&local_68,&local_60);
          *psVar4 = *psVar4 + 1;
        }
        uVar5 = param_1[0x20];
        uVar3 = 1;
      }
      uVar9 = uVar9 & ~(uint)uVar16;
      puVar2 = *(uint **)(param_1 + 0x1e);
      if (*(uint **)(param_1 + 0x1e) == (uint *)0x0) {
        puVar2 = param_1 + 0x1a;
      }
      iVar14 = (int)uVar15;
      lVar13 = (longlong)iVar14;
      uVar12 = puVar2[lVar13] & uVar9;
      if (uVar12 == 0) {
        iVar7 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar7 = uVar5 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar14) {
          iVar8 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar11 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar12 = puVar2[lVar13 + lVar11 + 1];
          if (uVar12 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar8 - lVar13 == lVar11) goto LAB_142a998a9;
        }
        uVar15 = (ulonglong)(iVar14 + (int)lVar11 + 1);
        uVar9 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar6 = (iVar17 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while ((int)uVar6 < (int)uVar5);
LAB_142a998a9:
    uVar9 = param_1[0x57];
    uVar12 = local_94;
  }
  else {
LAB_142a998a5:
    uVar3 = 0;
  }
  param_1[0x57] = (uint)((byte)uVar12 & 1) << 0x10 | uVar9 & 0xfffcffff | (uVar10 & 1) << 0x11;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a99914 FUN_142a99914 body=840 status=ok
// SIG undefined FUN_142a99914(void)

void FUN_142a99914(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  bool bVar12;
  undefined1 auStack_4c8 [40];
  uint local_4a0;
  int local_49c;
  undefined1 *local_498;
  longlong local_490;
  longlong local_488;
  undefined8 local_480;
  undefined1 *local_478;
  longlong local_470;
  int local_464;
  undefined1 local_460 [1024];
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4c8;
  if (param_4 == 0) goto LAB_142a9993e;
  if ((*(char *)(param_1 + 0x1a) == '\x01') && (*(longlong **)(param_1 + 0x438) != (longlong *)0x0))
  {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0xb0))();
    local_4a0 = (uint)CONCAT71((int7)((ulonglong)uVar4 >> 8),0 < (int)uVar4);
  }
  else {
    local_4a0 = 0;
  }
  iVar9 = *(int *)(param_3 + 0x158);
  lVar10 = param_1 + 0x3b0;
  local_464 = iVar9;
  lVar5 = FUN_146f15fd0(lVar10,iVar9 == 0,iVar9);
  uVar4 = DAT_14c999a08;
  if (lVar5 == 0) {
    FUN_146f5b89e(param_2);
    if (*(longlong *)(param_2 + 8) == 0) {
      *(undefined8 *)(param_2 + 8) = uVar4;
    }
    goto LAB_142a99c24;
  }
  if ((param_4 & 1) != 0) {
    local_470 = param_1 + 0x2d0;
    local_4a0 = local_4a0 ^ 1;
    do {
      lVar6 = *(longlong *)(lVar5 + 0x10);
      if (((lVar6 == 0) || (*(int *)(lVar6 + 0x10) == *(int *)(lVar6 + 0x14))) ||
         (plVar7 = (longlong *)FUN_146f15b0a(), plVar7 == (longlong *)0x0)) goto LAB_142a999db;
      if ((*(byte *)(*plVar7 + 0xc) & 1) != 0 && (char)local_4a0 == '\0') {
        local_60 = (undefined1 *)0x0;
        local_58 = 0x2000000000;
        local_50 = 0;
        local_490 = lVar10;
        FUN_146f234fc(*plVar7,param_2,local_460);
        local_478 = local_60;
        if (local_60 == (undefined1 *)0x0) {
          local_478 = local_460;
        }
        if ((longlong)(int)local_58 == 0) {
          bVar2 = 1;
          puVar8 = local_60;
        }
        else {
          local_498 = local_60;
          local_480 = *(undefined8 *)(param_1 + 0x420);
          local_488 = (longlong)(int)local_58 * 0x20 + -0x20;
          lVar10 = 0;
          local_49c = iVar9;
          do {
            bVar2 = FUN_146f29af2(local_480,*(undefined8 *)(local_478 + lVar10 + 8),local_470);
            if (bVar2 != 0) break;
            bVar12 = local_488 != lVar10;
            lVar10 = lVar10 + 0x20;
          } while (bVar12);
          bVar2 = bVar2 ^ 1;
          puVar8 = local_498;
          iVar9 = local_49c;
        }
        if (puVar8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        lVar10 = local_490;
        if (bVar2 == 0) goto LAB_142a999db;
      }
      FUN_142a7d9fe(*(undefined8 *)(param_1 + 0x3a0),param_2,plVar7);
      FUN_146f15b92(lVar5);
    } while (*(longlong *)(param_2 + 8) == 0);
    goto LAB_142a9993e;
  }
LAB_142a999db:
  if ((param_4 & 2) != 0) {
    do {
      lVar6 = *(longlong *)(lVar5 + 8);
      if (((lVar6 == 0) || (*(int *)(lVar6 + 0x10) == *(int *)(lVar6 + 0x14))) ||
         (lVar6 = FUN_146f15b0a(), lVar6 == 0)) goto LAB_142a99b8a;
      FUN_142a7d9fe(*(undefined8 *)(param_1 + 0x3a0),param_2,lVar6);
      FUN_146f15bd4(lVar5);
    } while (*(longlong *)(param_2 + 8) == 0);
    goto LAB_142a9993e;
  }
LAB_142a99b8a:
  cVar3 = FUN_146f15aba(lVar5);
  if (cVar3 == '\0') {
    lVar10 = *(longlong *)(lVar5 + 8);
    if (((lVar10 == 0) || (*(int *)(lVar10 + 0x10) == *(int *)(lVar10 + 0x14))) &&
       ((lVar10 = *(longlong *)(lVar5 + 0x10), lVar10 == 0 ||
        (*(int *)(lVar10 + 0x10) == *(int *)(lVar10 + 0x14))))) goto LAB_142a99c24;
    uVar11 = 0x40000;
    if ((*(byte *)(param_3 + 0x15e) & 4) == 0) {
      iVar1 = *(int *)(param_1 + 0x228);
      *(uint *)(param_1 + 0x228) = iVar1 + 1U;
      if (*(uint *)(param_1 + 0x22c) < iVar1 + 1U) {
        FUN_1447808da((longlong *)(param_1 + 0x220),iVar1);
      }
      *(int *)(*(longlong *)(param_1 + 0x220) + (longlong)iVar1 * 4) = iVar9;
    }
  }
  else {
    FUN_146f1ddb4(lVar10,iVar9);
LAB_142a99c24:
    uVar11 = 0;
    if ((*(byte *)(param_3 + 0x15e) & 4) != 0) {
      FUN_146f44b3e(param_1 + 0x220,&local_464);
    }
  }
  *(uint *)(param_3 + 0x15c) = *(uint *)(param_3 + 0x15c) & 0xfffbffff | uVar11;
LAB_142a9993e:
  if ((local_48 ^ (ulonglong)auStack_4c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a99c5e FUN_142a99c5e body=2305 status=ok
// SIG undefined FUN_142a99c5e(void)

void FUN_142a99c5e(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined8 ******ppppppuVar10;
  undefined1 *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  int *piVar19;
  undefined1 auStack_aa8 [32];
  uint **local_a88;
  undefined8 *****local_a80;
  undefined8 local_a78;
  ulonglong local_a68;
  longlong local_a60;
  uint local_a58;
  uint local_a54;
  undefined8 *****local_a50;
  longlong local_a48;
  longlong local_a40;
  undefined8 *****local_a38;
  int *local_a30;
  undefined4 local_a28;
  undefined4 uStack_a24;
  undefined4 uStack_a20;
  undefined4 uStack_a1c;
  undefined8 *****local_a18;
  undefined1 local_a10 [16];
  undefined8 *****local_a00;
  undefined8 local_9f8;
  undefined8 uStack_9f0;
  undefined8 *****local_9e8;
  uint *local_9e0;
  uint local_9d8;
  uint local_9d4;
  undefined8 *****local_9d0;
  uint uStack_9c8;
  uint uStack_9c4;
  ulonglong local_9c0;
  uint *local_9b8;
  longlong local_9b0;
  longlong local_9a8;
  uint local_99c;
  undefined8 *****local_998;
  undefined1 local_990 [8];
  uint *puStack_988;
  undefined8 local_980;
  undefined1 uStack_978;
  undefined7 uStack_977;
  undefined1 uStack_970;
  undefined7 uStack_96f;
  byte bStack_968;
  undefined8 *****local_898;
  undefined8 local_890;
  undefined8 *****local_888;
  uint local_880;
  uint local_87c [253];
  longlong local_488;
  undefined8 local_480;
  undefined1 local_478 [1024];
  undefined1 *local_78;
  undefined8 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_aa8;
  puVar4 = *(undefined8 **)(param_1 + 0x218);
  lVar14 = (ulonglong)*(uint *)(puVar4 + 1) * 0x20;
  ppppppuVar10 = (undefined8 ******)(param_1 + 0x30);
  uVar18 = *(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0;
  uVar15 = uVar18 + lVar14;
  if (*(ulonglong *)(param_1 + 0x38) < uVar15) {
    FUN_140023dd8(ppppppuVar10,(uint)lVar14 | 0x10);
    puVar4 = *(undefined8 **)(param_1 + 0x218);
    uVar18 = *(longlong *)(param_1 + 0x30) + 0xfU & 0xfffffffffffffff0;
    uVar15 = lVar14 + uVar18;
  }
  *(ulonglong *)(param_1 + 0x30) = uVar15;
  local_9b8 = &local_99c;
  local_99c = 0;
  local_a60 = param_2;
  local_a38 = ppppppuVar10;
  local_9c0 = uVar18;
  local_9b0 = param_1;
  local_9a8 = param_2;
  if ((longlong)*(int *)(puVar4 + 1) != 0) {
    piVar19 = (int *)*puVar4;
    local_a30 = piVar19 + (longlong)*(int *)(puVar4 + 1) * 6;
    local_a48 = param_1 + 0x58;
    local_a40 = param_1 + 0x428;
    iVar12 = 0;
    do {
      iVar2 = *piVar19;
      puVar5 = (uint *)FUN_146f4320c(param_1,iVar2);
      lVar14 = *(longlong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x270) + (longlong)(iVar2 / 100) * 8)
      ;
      lVar9 = (ulonglong)(uint)(iVar2 % 100) * 0x38;
      puVar4 = (undefined8 *)(lVar14 + lVar9);
      iVar8 = *(int *)(lVar14 + 0x28 + lVar9);
      iVar13 = iVar8;
      if (iVar8 == 0) {
        iVar13 = iVar2;
      }
      if ((iVar13 != iVar12) && (local_99c != 0)) {
        FUN_142a9a560(&local_9c0);
        iVar8 = *(int *)(puVar4 + 5);
      }
      uVar3 = piVar19[4];
      if (((uVar3 & 0x40) != 0) && (iVar8 != 0)) {
        (**(code **)(**(longlong **)(param_1 + 0x80) + 0x2f0))
                  (*(longlong **)(param_1 + 0x80),*puVar4);
        uVar3 = piVar19[4];
      }
      uVar17 = 0;
      if ((((uVar3 & 4) != 0) && ((uVar3 & 1) == 0)) && (uVar17 = 0, DAT_14c75f480 != '\0')) {
        uVar17 = 1;
        FUN_142a99914(param_1,local_a60,puVar5,1);
        uVar3 = piVar19[4] & 0xfffffffbU | puVar5[0x57] >> 0x10 & 4;
        piVar19[4] = uVar3;
      }
      if ((uVar3 & 2) == 0) {
        uVar6 = 0;
      }
      else {
        local_a54 = puVar5[0x57];
        uStack_9c4 = local_a54 & 0xffff;
        local_a68 = (ulonglong)uStack_9c4;
        local_a50 = (undefined8 *****)(piVar19 + 2);
        local_9d0 = local_a50;
        if (0x40 < uStack_9c4) {
          local_9d0 = *(undefined8 ******)(piVar19 + 2);
        }
        local_a58 = uStack_9c4 + 0x1f;
        uVar3 = local_a58 >> 5;
        uStack_9c8 = uVar3;
        if (uStack_9c4 == 0) {
          local_9d0 = (undefined8 *****)&uStack_9c4;
          local_9e0 = &local_9d4;
        }
        else {
          local_9e0 = puVar5;
          if (0x40 < uStack_9c4) {
            local_9e0 = *(uint **)puVar5;
          }
        }
        local_9d8 = uVar3;
        local_9d4 = uStack_9c4;
        local_9e8 = (undefined8 ******)0x0;
        local_9f8 = (undefined8 ******)((longlong)&uStack_9f0 + 4);
        uStack_9f0 = 0;
        if ((local_a54 >> 0x10 & 1) == 0) {
LAB_142a99f34:
          local_9f8 = (undefined8 ******)local_9d0;
          uStack_9f0 = CONCAT44(uStack_9c4,uVar3);
        }
        else {
          if (DAT_14c9999d8 == 1) {
            if (uStack_9c4 != 0) {
              uVar15 = 0;
              do {
                puVar1 = (uint *)((longlong)local_9d0 + uVar15 * 4);
                *puVar1 = *puVar1 | local_9e0[uVar15];
                uVar15 = uVar15 + 1;
              } while (uVar3 != uVar15);
            }
            goto LAB_142a99f34;
          }
          if (uStack_9c4 < 0x41) {
            local_888 = &local_9e8;
            local_880 = uVar3;
            local_87c[0] = uStack_9c4;
            if (uStack_9c4 == 0) {
              local_888 = (undefined8 *****)local_87c;
            }
          }
          else {
            local_9e8 = (undefined8 *****)FUN_146f16038(local_a48,local_a58 >> 3 & 0xfffffffc,4);
            local_888 = local_9e8;
            local_880 = uVar3;
            local_87c[0] = (uint)local_a68;
          }
          local_9f8 = (undefined8 ******)local_888;
          uStack_9f0 = CONCAT44(local_87c[0],uVar3);
          local_880 = uVar3;
          if (uVar3 != 0) {
            uVar15 = 0;
            do {
              *(uint *)((longlong)local_888 + uVar15 * 4) =
                   *(uint *)((longlong)local_9d0 + uVar15 * 4) | local_9e0[uVar15];
              uVar15 = uVar15 + 1;
            } while (uVar3 != uVar15);
          }
        }
        local_488 = 0;
        local_480 = 0x2000000000;
        local_78 = (undefined1 *)0x0;
        local_70 = 0x2000000000;
        local_68 = 0;
        local_a78 = puVar4[2];
        local_a80 = (undefined8 *****)puVar4[4];
        local_a88 = (uint **)&local_9f8;
        FUN_146f44092(&local_888,*(undefined8 *)(param_1 + 0x420),local_a40,
                      (puVar5[0x57] >> 0x11 | piVar19[4]) & 0xffffff01);
        if ((((local_a54 >> 0x10 & 1) != 0) || (0 < (int)local_480)) || (0 < (int)local_70)) {
          local_a00 = (undefined8 ******)0x0;
          local_a18 = (undefined8 *****)(local_a10 + 4);
          local_a10._0_8_ = (undefined8 ******)0x0;
          if (((local_a54 >> 0x10 & 1) == 0) || ((DAT_14c9999d8 & 1) != 0)) {
            local_898 = (undefined8 ******)0x0;
            local_890 = 0x2000000000;
            local_a28 = (undefined4)local_9f8;
            uStack_a24 = local_9f8._4_4_;
            uStack_a20 = (undefined4)uStack_9f0;
            uStack_a1c = uStack_9f0._4_4_;
            local_a80 = &local_998;
            local_a88 = &local_9e0;
            FUN_146f43e8c(param_1,&local_888,&local_a28,puVar5);
          }
          else {
            uVar16 = (uint)local_a68;
            if (uVar16 < 0x41) {
              local_998 = &local_a00;
              local_990._4_4_ = uVar16;
              local_990._0_4_ = uVar3;
              if (uVar16 == 0) {
                local_998 = (undefined8 *****)(local_990 + 4);
              }
            }
            else {
              local_a00 = (undefined8 *****)FUN_146f16038(local_a48,local_a58 >> 3 & 0xfffffffc,4);
              local_990._4_4_ = (int)local_a68;
              local_990._0_4_ = uVar3;
              local_998 = local_a00;
            }
            local_a18 = local_998;
            local_a10._0_8_ = local_990;
            if ((local_990._0_4_ != 0) && (local_9d8 != 0)) {
              memcpy(local_998,local_9e0,((ulonglong)local_990 & 0xffffffff) << 2);
            }
            local_898 = (undefined8 ******)0x0;
            local_890 = 0x2000000000;
            local_a28 = (undefined4)local_9f8;
            uStack_a24 = local_9f8._4_4_;
            uStack_a20 = (undefined4)uStack_9f0;
            uStack_a1c = uStack_9f0._4_4_;
            local_a80 = &local_998;
            local_a88 = &local_9e0;
            FUN_146f43e8c(param_1,&local_888,&local_a28);
            if ((ulonglong)uStack_9c8 != 0) {
              uVar15 = 0;
              do {
                puVar1 = (uint *)((longlong)local_9d0 + uVar15 * 4);
                *puVar1 = *puVar1 | ~local_9e0[uVar15] & *(uint *)((longlong)local_a18 + uVar15 * 4)
                ;
                uVar15 = uVar15 + 1;
              } while (uStack_9c8 != uVar15);
            }
            if ((int)local_890 != 0) {
              puVar7 = local_78;
              if (local_78 == (undefined1 *)0x0) {
                puVar7 = local_478;
              }
              if ((longlong)(int)local_70 != 0) {
                puVar11 = puVar7 + (longlong)(int)local_70 * 0x20;
                do {
                  ppppppuVar10 = (undefined8 ******)local_898;
                  if ((undefined8 ******)local_898 == (undefined8 ******)0x0) {
                    ppppppuVar10 = &local_998;
                  }
                  if ((longlong)(int)local_890 != 0) {
                    lVar14 = (longlong)(int)local_890 << 3;
                    do {
                      if ((((ulonglong)*ppppppuVar10 ^ *(ulonglong *)(puVar7 + 8)) &
                          0xfffffffffffffff) == 0) {
                        if (ppppppuVar10 != (undefined8 ******)0x0) {
                          puVar1 = (uint *)((longlong)local_9d0 +
                                           (ulonglong)(*(uint *)(puVar7 + 0x18) >> 5) * 4);
                          *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(puVar7 + 0x18) & 0x1f);
                        }
                        break;
                      }
                      ppppppuVar10 = ppppppuVar10 + 1;
                      lVar14 = lVar14 + -8;
                    } while (lVar14 != 0);
                  }
                  puVar7 = puVar7 + 0x20;
                } while (puVar7 != puVar11);
              }
            }
          }
          if ((undefined8 ******)local_898 != (undefined8 ******)0x0) {
            FUN_1400020a8();
          }
        }
        lVar14 = local_a60;
        if (puVar4[3] == 0) {
          uVar6 = 0;
        }
        else {
          *(uint *)(local_a60 + 0x120) = *(uint *)(local_a60 + 0x120) & 0xfffffffe | piVar19[4] & 1U
          ;
          local_998 = local_a38;
          if ((uint)local_a68 < 0x41) {
            local_990 = (undefined1  [8])local_a50;
            uVar3 = puVar5[0x57];
            puStack_988 = puVar5;
            if ((uVar3 >> 0x10 & 1) == 0) {
              puStack_988 = (uint *)0x0;
            }
          }
          else {
            local_990 = (undefined1  [8])*local_a50;
            uVar3 = puVar5[0x57];
            if ((uVar3 >> 0x10 & 1) == 0) {
              puStack_988 = (uint *)0x0;
            }
            else {
              puStack_988 = *(uint **)puVar5;
            }
          }
          uStack_978 = (undefined1)puVar4[3];
          uStack_977 = (undefined7)((ulonglong)puVar4[3] >> 8);
          uStack_970 = (undefined1)puVar4[2];
          uStack_96f = (undefined7)((ulonglong)puVar4[2] >> 8);
          local_980 = puVar4[4];
          bStack_968 = (byte)(uVar3 >> 0x11) & 1;
          uVar6 = FUN_142a75fac(local_a60,&local_998);
          FUN_142a765e6(uVar6,lVar14);
        }
        if (local_78 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        if (local_488 != 0) {
          FUN_1400020a8();
        }
      }
      uVar15 = (ulonglong)local_99c;
      local_99c = local_99c + 1;
      lVar14 = uVar15 * 0x20;
      *(uint **)(uVar18 + lVar14) = puVar5;
      *(int **)(uVar18 + 8 + lVar14) = piVar19;
      *(undefined8 *)(uVar18 + 0x10 + lVar14) = uVar6;
      *(undefined4 *)(uVar18 + 0x18 + lVar14) = uVar17;
      piVar19 = piVar19 + 6;
      iVar12 = iVar13;
    } while (piVar19 != local_a30);
  }
  FUN_142a9a560(&local_9c0);
  if ((local_60 ^ (ulonglong)auStack_aa8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a9a560 FUN_142a9a560 body=264 status=ok
// SIG undefined FUN_142a9a560(void)

void FUN_142a9a560(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  
  piVar7 = (int *)param_1[1];
  iVar1 = *piVar7;
  if ((longlong)iVar1 != 0) {
    lVar2 = param_1[2];
    lVar3 = *param_1;
    lVar8 = 0;
    do {
      uVar6 = *(uint *)(*(longlong *)(lVar3 + 8 + lVar8) + 0x10);
      if (((uVar6 & 2) != 0) && (*(longlong *)(lVar3 + 0x10 + lVar8) != 0)) {
        *(uint *)(param_1[3] + 0x120) = *(uint *)(param_1[3] + 0x120) & 0xfffffffe | uVar6 & 1;
        FUN_142a76700(*(undefined8 *)(lVar3 + 0x10 + lVar8),param_1[3]);
      }
      lVar8 = lVar8 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar8);
    piVar7 = (int *)param_1[1];
    iVar1 = *piVar7;
    if ((longlong)iVar1 != 0) {
      lVar3 = *param_1;
      lVar8 = 0;
      do {
        puVar4 = *(undefined4 **)(lVar3 + 8 + lVar8);
        uVar6 = puVar4[4];
        if ((~uVar6 & 3) == 0) {
          plVar5 = *(longlong **)(lVar2 + 0x80);
          (**(code **)(*plVar5 + 0x2f8))(plVar5,*puVar4);
          uVar6 = puVar4[4];
        }
        if ((uVar6 & 4) != 0) {
          FUN_142a99914(lVar2,param_1[3],*(undefined8 *)(lVar3 + lVar8),
                        *(uint *)(lVar3 + 0x18 + lVar8) & 0xfffffffd ^ 3);
        }
        if (*(longlong *)(lVar3 + 0x10 + lVar8) != 0) {
          FUN_146f17d52();
        }
        lVar8 = lVar8 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar8);
      piVar7 = (int *)param_1[1];
    }
  }
  *piVar7 = 0;
  return;
}



// FUNCTION 142a9a668 FUN_142a9a668 body=4031 status=ok
// SIG undefined FUN_142a9a668(void)

void FUN_142a9a668(longlong param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint *puVar6;
  undefined8 ****ppppuVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 *puVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined8 ***pppuVar18;
  longlong lVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  LARGE_INTEGER LVar24;
  ulonglong uVar25;
  undefined1 auStack_bf8 [32];
  uint **local_bd8;
  ulonglong *local_bd0;
  longlong local_bc8;
  uint *local_bb8;
  ulonglong local_bb0;
  undefined8 ***local_ba8;
  longlong *local_ba0;
  undefined8 ***local_b98;
  ulonglong local_b90;
  uint *local_b88;
  ulonglong local_b80;
  longlong local_b78;
  uint *local_b70;
  longlong local_b68;
  undefined8 local_b60;
  undefined4 local_b58;
  int local_b4c;
  longlong local_b48;
  longlong local_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 local_b28;
  undefined4 local_b20;
  longlong local_b18;
  undefined8 ***local_b10;
  uint *local_b08;
  longlong local_b00;
  longlong local_af8;
  longlong local_af0;
  byte local_ae8;
  undefined8 ***local_ae0;
  undefined4 local_ad8;
  undefined4 local_ad4;
  undefined8 ***local_ad0;
  uint local_ac8;
  uint local_ac4;
  undefined8 ***local_ac0;
  uint *local_ab8;
  uint local_ab0;
  uint local_aac;
  undefined8 local_aa8 [26];
  undefined4 local_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  longlong *plStack_9b8;
  undefined8 local_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined4 local_990;
  undefined4 local_98c;
  uint local_988;
  ulonglong local_980 [32];
  ulonglong *local_880;
  undefined8 local_878;
  LARGE_INTEGER local_870;
  int *local_868;
  longlong local_470;
  undefined8 local_468;
  undefined1 local_460 [1024];
  undefined1 *local_60;
  undefined8 local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_bf8;
  local_b20 = 0;
  local_b48 = *(longlong *)(param_1 + 0x10);
  local_b68 = param_1 + 0x428;
  local_b38 = *(undefined8 *)(param_1 + 0x428);
  uStack_b30 = *(undefined8 *)(param_1 + 0x430);
  local_b28 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x7b0);
  local_b40 = *(longlong *)(local_b48 + 0x28) + 0xd38;
  local_aa8[0] = 0;
  local_aa8[1] = 0;
  lVar4 = 0x18;
  do {
    *(undefined8 *)((longlong)local_aa8 + lVar4) = 0;
    lVar4 = lVar4 + 0x18;
  } while (lVar4 != 0xd8);
  iVar15 = 0;
  local_9d8 = 0;
  local_9d0 = 0;
  uStack_9c8 = 0;
  local_9c0 = 0;
  local_9b0 = 0;
  uStack_9a8 = 0;
  local_9a0 = 0;
  uStack_998 = 0;
  local_98c = 0xffffffff;
  local_988 = local_988 & 0xfffffffc;
  local_990 = *(undefined4 *)(param_1 + 0x430);
  plStack_9b8 = &local_b48;
  local_bb8 = (uint *)(param_1 + 0x128);
  FUN_146f442ce();
  local_b90 = param_1 + 0x178;
  FUN_146f44312();
  QueryPerformanceCounter(&local_870);
  local_b4c = (int)(longlong)(((double)local_870.QuadPart * DAT_14c83f420 + 16777216.0) * 1000.0);
  iVar3 = DAT_14c75f478;
  if (DAT_14c75f478 < 1) {
    iVar3 = 0;
  }
  local_b80 = CONCAT44(local_b80._4_4_,iVar3);
  iVar3 = DAT_14c75f47c;
  if (DAT_14c75f47c < 1) {
    iVar3 = iVar15;
  }
  local_b78 = CONCAT44(local_b78._4_4_,iVar3);
  puVar5 = (uint *)(param_1 + 0x240);
  iVar3 = *(int *)(param_1 + 600);
  uVar16 = 1;
  uVar25 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar6 = *(uint **)(param_1 + 0x250);
    if (*(uint **)(param_1 + 0x250) == (uint *)0x0) {
      puVar6 = puVar5;
    }
    uVar22 = *puVar6;
    if (uVar22 == 0) {
      iVar15 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar15 = iVar3 + -1;
      }
      uVar25 = 0;
      uVar16 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar16 = 0;
      }
      iVar15 = 0;
      do {
        if (uVar16 == uVar25) goto LAB_142a9a883;
        iVar15 = iVar15 + 0x20;
        uVar22 = puVar6[uVar25 + 1];
        uVar25 = uVar25 + 1;
      } while (uVar22 == 0);
    }
    else {
      iVar15 = 0;
      uVar25 = 0;
    }
    uVar16 = (ulonglong)(-uVar22 & uVar22);
    uVar23 = uVar16 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar8 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
  }
  if (iVar8 != iVar3) {
    local_b98 = (undefined8 ***)(param_1 + 0x160);
    local_ba0 = (longlong *)(param_1 + 0x88);
    local_ba8 = (undefined8 ***)(param_1 + 0xc0);
    local_b88 = (uint *)(param_1 + 0xd8);
    local_bb0 = param_1 + 0x110;
    uVar22 = 0xffffffff;
    iVar2 = iVar3;
    local_b70 = puVar5;
    do {
      LVar24.QuadPart = (longlong)iVar8 * 0x18 + *(longlong *)(param_1 + 0x230);
      if (*(int *)(param_1 + 0x130) != *(int *)(param_1 + 0x15c)) {
        uVar23 = *(ulonglong *)LVar24;
        ppppuVar7 = *(undefined8 *****)(param_1 + 0x168);
        if (*(undefined8 *****)(param_1 + 0x168) == (undefined8 ****)0x0) {
          ppppuVar7 = (undefined8 ****)local_b98;
        }
        uVar12 = *(uint *)((longlong)ppppuVar7 +
                          (ulonglong)
                          (*(int *)(param_1 + 0x170) - 1U &
                          (int)uVar23 + ((uint)(uVar23 >> 0x20) & 0xfffffff) * 0x17) * 4);
        if (uVar12 != 0xffffffff) {
          do {
            if (((*(ulonglong *)(*(longlong *)local_bb8 + (longlong)(int)uVar12 * 0x10) ^ uVar23) &
                0xfffffffffffffff) == 0) goto LAB_142a9ac5d;
            uVar12 = *(uint *)((longlong)(int)uVar12 * 0x10 + *(longlong *)local_bb8 + 8);
          } while (uVar12 != 0xffffffff);
        }
      }
      if (DAT_14c75f474 == '\x01') {
        if (*(int *)(param_1 + 0x90) != *(int *)(param_1 + 0xbc)) {
          uVar23 = *(ulonglong *)LVar24;
          pppuVar18 = (undefined8 ***)*(ulonglong *)(param_1 + 200);
          if (*(ulonglong *)(param_1 + 200) == 0) {
            pppuVar18 = local_ba8;
          }
          iVar8 = *(int *)((longlong)pppuVar18 +
                          (ulonglong)
                          (*(int *)(param_1 + 0xd0) - 1U &
                          (int)uVar23 + ((uint)(uVar23 >> 0x20) & 0xfffffff) * 0x17) * 4);
          if (iVar8 != -1) {
            do {
              puVar11 = (ulonglong *)(*local_ba0 + (longlong)iVar8 * 0x18);
              if (((*puVar11 ^ uVar23) & 0xfffffffffffffff) == 0) {
                if (puVar11 + 1 != (ulonglong *)0x0 && puVar11 != (ulonglong *)0x0) {
                  if ((uint)local_b80 < (uint)(local_b4c - (int)puVar11[1])) {
                    FUN_146f504d2(local_ba0,LVar24.QuadPart);
                    local_870.QuadPart = LVar24.QuadPart;
                    FUN_146f50546(local_b88,local_980,&local_870);
                  }
                  goto LAB_142a9ac37;
                }
                break;
              }
              iVar8 = (int)puVar11[2];
            } while (iVar8 != -1);
          }
        }
        if (*(int *)(param_1 + 0xe0) != *(int *)(param_1 + 0x10c)) {
          uVar23 = *(ulonglong *)LVar24;
          uVar21 = *(ulonglong *)(param_1 + 0x118);
          if (*(ulonglong *)(param_1 + 0x118) == 0) {
            uVar21 = local_bb0;
          }
          iVar8 = *(int *)(uVar21 + (ulonglong)
                                    (*(int *)(param_1 + 0x120) - 1U &
                                    (int)uVar23 + ((uint)(uVar23 >> 0x20) & 0xfffffff) * 0x17) * 4);
          if (iVar8 != -1) {
            do {
              puVar11 = (ulonglong *)(*(longlong *)local_b88 + (longlong)iVar8 * 0x18);
              if (((*puVar11 ^ uVar23) & 0xfffffffffffffff) == 0) {
                if ((puVar11 != (ulonglong *)0x0) &&
                   (puVar11 = puVar11 + 1, puVar11 != (ulonglong *)0x0)) {
                  if ((uint)(local_b4c - (int)*puVar11) < (uint)local_b78) goto LAB_142a9ac5d;
                  *(int *)puVar11 = local_b4c;
                  goto LAB_142a9ac37;
                }
                break;
              }
              iVar8 = (int)puVar11[2];
            } while (iVar8 != -1);
          }
        }
        local_868 = &local_b4c;
        local_870.QuadPart = LVar24.QuadPart;
        FUN_146f301ae(local_ba0,local_980,&local_870,0);
      }
LAB_142a9ac37:
      FUN_146f2f6e8(local_bb8,&local_870,LVar24.QuadPart,0);
      iVar2 = *(int *)(param_1 + 600);
      puVar5 = local_b70;
LAB_142a9ac5d:
      uVar22 = uVar22 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x250);
      if (*(uint **)(param_1 + 0x250) == (uint *)0x0) {
        puVar6 = puVar5;
      }
      iVar8 = (int)uVar25;
      lVar4 = (longlong)iVar8;
      uVar12 = puVar6[lVar4] & uVar22;
      if (uVar12 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar9 = iVar10;
        if (iVar10 < iVar8) {
          iVar9 = iVar8;
        }
        if (iVar8 < iVar10) {
          lVar19 = 0;
          do {
            uVar12 = puVar6[lVar4 + lVar19 + 1];
            if (uVar12 != 0) {
              uVar25 = (ulonglong)(iVar8 + (int)lVar19 + 1);
              uVar22 = 0xffffffff;
              goto LAB_142a9acd7;
            }
            iVar15 = iVar15 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar9 - lVar4 != lVar19);
          uVar22 = 0xffffffff;
          iVar8 = iVar9;
        }
        uVar25 = (ulonglong)(iVar8 + 1);
        puVar5 = local_b70;
        iVar8 = iVar2;
      }
      else {
LAB_142a9acd7:
        uVar16 = (ulonglong)(-uVar12 & uVar12);
        uVar23 = uVar16 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar8 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar8) {
          iVar8 = iVar2;
        }
      }
    } while (iVar8 != iVar3);
  }
LAB_142a9a883:
  local_b88 = (uint *)(param_1 + 0x138);
  iVar3 = *(int *)(param_1 + 0x150);
  if (iVar3 == 0) {
    uVar23 = 1;
    uVar16 = 0;
    iVar15 = 0;
    iVar8 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x148);
    if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
      puVar5 = local_b88;
    }
    uVar22 = *puVar5;
    if (uVar22 == 0) {
      iVar15 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar15 = iVar3 + -1;
      }
      uVar16 = 0;
      uVar25 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar25 = uVar16;
      }
      iVar15 = 0;
      do {
        if (uVar25 == uVar16) goto LAB_142a9a91d;
        iVar15 = iVar15 + 0x20;
        uVar22 = puVar5[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar16 = 0;
      iVar15 = 0;
    }
    uVar23 = (ulonglong)(-uVar22 & uVar22);
    uVar25 = uVar23 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar25 != 0) {
      for (; uVar25 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar8 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
  }
  if (iVar8 != iVar3) {
    local_b78 = param_1 + 0x268;
    uVar22 = 0xffffffff;
    do {
      local_bb0 = CONCAT44(local_bb0._4_4_,iVar15);
      uVar25 = *(ulonglong *)(*(longlong *)(param_1 + 0x128) + (longlong)iVar8 * 0x10);
      lVar4 = FUN_142a82794(*(undefined8 *)(param_1 + 0x420),uVar25,local_b68,&local_870);
      if ((lVar4 != 0) && (*(int *)(param_1 + 0x278) != 0)) {
        lVar4 = *(longlong *)(param_1 + 0x270);
        if (*(longlong *)(param_1 + 0x270) == 0) {
          lVar4 = local_b78;
        }
        iVar15 = *(int *)(lVar4 + (longlong)
                                  (int)(*(int *)(param_1 + 0x278) - 1U &
                                       ((uint)(uVar25 >> 0x20) & 0xfffffff) * 0x17 + (int)uVar25) *
                                  4);
        while (iVar8 = iVar15, iVar8 != -1) {
          lVar4 = *(longlong *)(param_1 + 0x230);
          iVar15 = *(int *)(lVar4 + 0x10 + (longlong)iVar8 * 0x18);
          if (((*(ulonglong *)(lVar4 + (longlong)iVar8 * 0x18) ^ uVar25) & 0xfffffffffffffff) == 0)
          {
            do {
              FUN_144980568(local_b90,&local_870,lVar4 + (longlong)iVar8 * 0x18 + 8,0);
              do {
                iVar8 = iVar15;
                if (iVar8 == -1) goto LAB_142a9ae74;
                lVar4 = *(longlong *)(param_1 + 0x230);
                iVar15 = *(int *)(lVar4 + 0x10 + (longlong)iVar8 * 0x18);
              } while (((*(ulonglong *)(lVar4 + (longlong)iVar8 * 0x18) ^ uVar25) &
                       0xfffffffffffffff) != 0);
            } while( true );
          }
        }
      }
LAB_142a9ae74:
      uVar22 = uVar22 & ~(uint)uVar23;
      puVar5 = *(uint **)(param_1 + 0x148);
      if (*(uint **)(param_1 + 0x148) == (uint *)0x0) {
        puVar5 = local_b88;
      }
      iVar2 = *(int *)(param_1 + 0x150);
      iVar8 = (int)uVar16;
      lVar4 = (longlong)iVar8;
      uVar12 = puVar5[lVar4] & uVar22;
      iVar15 = (int)local_bb0;
      if (uVar12 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar15 = (int)local_bb0 + 0x20;
        iVar9 = iVar10;
        if (iVar10 < iVar8) {
          iVar9 = iVar8;
        }
        if (iVar8 < iVar10) {
          lVar19 = 0;
          do {
            uVar12 = puVar5[lVar4 + lVar19 + 1];
            if (uVar12 != 0) {
              uVar16 = (ulonglong)(iVar8 + (int)lVar19 + 1);
              uVar22 = 0xffffffff;
              goto LAB_142a9aef7;
            }
            iVar15 = iVar15 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar9 - lVar4 != lVar19);
          uVar22 = 0xffffffff;
          iVar8 = iVar9;
        }
        uVar16 = (ulonglong)(iVar8 + 1);
        iVar8 = iVar2;
      }
      else {
LAB_142a9aef7:
        uVar23 = (ulonglong)(-uVar12 & uVar12);
        uVar25 = uVar23 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar25 != 0) {
          for (; uVar25 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar8 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar8) {
          iVar8 = iVar2;
        }
      }
    } while (iVar8 != iVar3);
  }
LAB_142a9a91d:
  local_b60 = *(undefined8 *)(param_1 + 0x220);
  local_b58 = *(undefined4 *)(param_1 + 0x228);
  FUN_146f44354(local_b90);
  puVar5 = (uint *)(param_1 + 0x188);
  iVar3 = *(int *)(param_1 + 0x1a0);
  if (iVar3 == 0) {
    uVar16 = 1;
    uVar25 = 0;
    iVar8 = 0;
    iVar15 = 0;
  }
  else {
    puVar6 = *(uint **)(param_1 + 0x198);
    if (*(uint **)(param_1 + 0x198) == (uint *)0x0) {
      puVar6 = puVar5;
    }
    uVar22 = *puVar6;
    if (uVar22 == 0) {
      iVar15 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar15 = iVar3 + -1;
      }
      uVar25 = 0;
      uVar16 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar16 = uVar25;
      }
      iVar8 = 0;
      do {
        if (uVar16 == uVar25) goto LAB_142a9af48;
        iVar8 = iVar8 + 0x20;
        uVar22 = puVar6[uVar25 + 1];
        uVar25 = uVar25 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar25 = 0;
      iVar8 = 0;
    }
    uVar16 = (ulonglong)(-uVar22 & uVar22);
    uVar23 = uVar16 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar15 = (iVar8 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar15) {
      iVar15 = iVar3;
    }
  }
  if (iVar15 != iVar3) {
    local_b88 = (uint *)(param_1 + 0x58);
    local_b78 = param_1 + 0x30;
    uVar22 = 0xffffffff;
    do {
      puVar6 = (uint *)FUN_146f4320c(param_1,*(undefined4 *)
                                              (*(longlong *)(param_1 + 0x178) +
                                              (longlong)iVar15 * 0xc));
      if (puVar6 != (uint *)0x0) {
        uVar12 = puVar6[0x57];
        uVar23 = (ulonglong)uVar12;
        uVar21 = 3;
        if ((uVar12 & 0x30000) != 0) {
          local_b80 = (ulonglong)(ushort)uVar12;
          local_aac = uVar12 & 0xffff;
          local_ab8 = puVar6;
          if (0x40 < local_aac) {
            local_ab8 = *(uint **)puVar6;
          }
          local_ba0 = (longlong *)
                      ((ulonglong)(uint)((int)puVar6[0x56] % 100) * 0x38 +
                      *(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x270) +
                       (longlong)((int)puVar6[0x56] / 100) * 8));
          uVar13 = (uVar12 & 0xffff) + 0x1f;
          uVar17 = uVar13 >> 5;
          local_bb8 = puVar6;
          local_b90 = uVar23;
          local_ab0 = uVar17;
          if ((uVar12 & 0xffff) == 0) {
            local_ab8 = &local_aac;
            local_ac0 = (undefined8 ****)0x0;
            local_ac4 = 0;
            ppppuVar7 = (undefined8 ****)&local_ac4;
            uVar1 = local_ac4;
          }
          else {
            local_ac0 = (undefined8 ****)0x0;
            ppppuVar7 = &local_ac0;
            uVar1 = uVar12 & 0xffff;
            if (0x40 < (uVar12 & 0xffff)) {
              local_bb0 = (ulonglong)uVar17;
              ppppuVar7 = (undefined8 ****)FUN_146f16038(local_b88,uVar13 >> 3 & 0xfffffffc,4);
              uVar17 = (uint)local_bb0;
              uVar1 = (uint)local_b80;
              local_ac0 = ppppuVar7;
            }
          }
          local_ac4 = uVar1;
          local_b70 = puVar5;
          local_ad0 = ppppuVar7;
          local_ac8 = uVar17;
          memset(ppppuVar7,0,(ulonglong)(uVar17 << 2));
          pppuVar18 = local_ad0;
          local_bb0 = (ulonglong)local_ac8;
          local_b98 = (undefined8 ***)CONCAT44(local_b98._4_4_,local_ac4);
          if ((local_bb0 != 0) && (local_ab0 != 0)) {
            memcpy(local_ad0,local_ab8,local_bb0 * 4);
          }
          local_ba8 = pppuVar18;
          uVar23 = 0;
          local_470 = 0;
          local_468 = 0x2000000000;
          local_60 = (undefined1 *)0x0;
          local_58 = 0x2000000000;
          local_50 = 0;
          local_bc8 = local_ba0[2];
          local_bd0 = (ulonglong *)local_ba0[4];
          local_bd8 = &local_ab8;
          FUN_146f44092(&local_870,*(undefined8 *)(param_1 + 0x420),local_b68,
                        local_bb8[0x57] >> 0x11 & 1);
          local_880 = (ulonglong *)0x0;
          local_878 = 0x2000000000;
          local_ae0 = local_ba8;
          local_ad8 = (undefined4)local_bb0;
          local_ad4 = local_b98._0_4_;
          local_bd0 = local_980;
          local_bd8 = &local_ab8;
          FUN_146f43e8c(param_1,&local_870,&local_ae0,local_bb8);
          memset(local_ad0,0,(ulonglong)local_ac8 << 2);
          local_b98 = local_ad0;
          local_bb0 = (ulonglong)local_ac8;
          if ((int)local_878 != 0) {
            puVar14 = local_60;
            if (local_60 == (undefined1 *)0x0) {
              puVar14 = local_460;
            }
            if ((longlong)(int)local_58 == 0) {
              uVar23 = 0;
            }
            else {
              local_ba8 = (undefined8 ***)((ulonglong)local_ba8 & 0xffffffff00000000);
              puVar20 = puVar14 + (longlong)(int)local_58 * 0x20;
              uVar21 = 0;
              do {
                puVar11 = local_880;
                if (local_880 == (ulonglong *)0x0) {
                  puVar11 = local_980;
                }
                uVar23 = uVar21;
                if ((longlong)(int)local_878 != 0) {
                  lVar4 = (longlong)(int)local_878 << 3;
                  do {
                    if (((*puVar11 ^ *(ulonglong *)(puVar14 + 8)) & 0xfffffffffffffff) == 0) {
                      if ((puVar11 != (ulonglong *)0x0) &&
                         (uVar23 = local_b90 >> 0x11 & 1, *(int *)(puVar14 + 0x1c) != 0)) {
                        puVar5 = (uint *)((longlong)local_ad0 +
                                         (ulonglong)(*(uint *)(puVar14 + 0x18) >> 5) * 4);
                        *puVar5 = *puVar5 | 1 << ((byte)*(uint *)(puVar14 + 0x18) & 0x1f);
                        uVar23 = uVar21;
                      }
                      break;
                    }
                    puVar11 = puVar11 + 1;
                    lVar4 = lVar4 + -8;
                  } while (lVar4 != 0);
                }
                puVar14 = puVar14 + 0x20;
                uVar21 = uVar23;
              } while (puVar14 != puVar20);
            }
          }
          local_ba8 = (undefined8 ***)CONCAT44(local_ba8._4_4_,3);
          if (local_ba0[3] != 0) {
            uVar12 = (uint)local_b80;
            if (local_bb0 != 0) {
              uVar21 = 0;
              do {
                if (*(uint *)((longlong)local_ad0 + uVar21 * 4) != 0) goto LAB_142a9b4a0;
                uVar21 = uVar21 + 1;
              } while (local_bb0 != uVar21);
            }
            if (uVar23 != 0) {
LAB_142a9b4a0:
              local_ba8 = (undefined8 ***)CONCAT44(local_ba8._4_4_,3);
              if ((((uint)local_b90 >> 0x12 & 1) != 0) &&
                 ((~DAT_14c75f480 & 1) == 0 && (char)uVar23 == '\0')) {
                FUN_142a99914(param_1,local_aa8,local_bb8,1);
                uVar12 = (uint)local_b80;
                local_ba8 = (undefined8 ***)CONCAT44(local_ba8._4_4_,2);
              }
              local_988 = local_988 & 0xfffffffe | (uint)uVar23;
              local_b18 = local_b78;
              uVar17 = local_bb8[0x57] & 0x10000;
              if (uVar17 == 0) {
                puVar6 = (uint *)0x0;
              }
              if ((0x40 < uVar12) && (uVar17 != 0)) {
                puVar6 = *(uint **)local_bb8;
              }
              local_af8 = local_ba0[3];
              local_af0 = local_ba0[2];
              local_b00 = local_ba0[4];
              local_ae8 = (byte)(local_bb8[0x57] >> 0x11) & 1;
              local_b10 = local_b98;
              local_b08 = puVar6;
              FUN_146f3b1d8(local_aa8,&local_b18);
            }
          }
          if (local_880 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
          puVar5 = local_b70;
          if (local_60 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          if (local_470 != 0) {
            FUN_1400020a8();
          }
          uVar12 = (uint)local_b90;
          uVar21 = (ulonglong)local_ba8 & 0xffffffff;
          puVar6 = local_bb8;
        }
        if ((uVar12 >> 0x12 & 1) != 0) {
          FUN_142a99914(param_1,local_aa8,puVar6,uVar21);
        }
      }
      uVar22 = uVar22 & ~(uint)uVar16;
      puVar6 = *(uint **)(param_1 + 0x198);
      if (*(uint **)(param_1 + 0x198) == (uint *)0x0) {
        puVar6 = puVar5;
      }
      iVar2 = *(int *)(param_1 + 0x1a0);
      iVar15 = (int)uVar25;
      lVar4 = (longlong)iVar15;
      uVar12 = puVar6[lVar4] & uVar22;
      if (uVar12 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar9 = iVar10;
        if (iVar10 < iVar15) {
          iVar9 = iVar15;
        }
        if (iVar15 < iVar10) {
          lVar19 = 0;
          do {
            uVar12 = puVar6[lVar4 + lVar19 + 1];
            if (uVar12 != 0) {
              uVar25 = (ulonglong)(iVar15 + (int)lVar19 + 1);
              uVar22 = 0xffffffff;
              goto LAB_142a9b089;
            }
            iVar8 = iVar8 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar9 - lVar4 != lVar19);
          uVar22 = 0xffffffff;
          iVar15 = iVar9;
        }
        uVar25 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar2;
      }
      else {
LAB_142a9b089:
        uVar16 = (ulonglong)(-uVar12 & uVar12);
        uVar23 = uVar16 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar15 = (iVar8 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar15) {
          iVar15 = iVar2;
        }
      }
    } while (iVar15 != iVar3);
  }
LAB_142a9af48:
  iVar3 = *(int *)(param_1 + 0x130) - *(int *)(param_1 + 0x15c);
  if ((*(int *)(param_1 + 0x440) != iVar3) || (0 < *(int *)(param_1 + 0x228))) {
    *(int *)(param_1 + 0x440) = iVar3;
  }
  if ((local_48 ^ (ulonglong)auStack_bf8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a9b628 FUN_142a9b628 body=1644 status=ok
// SIG undefined FUN_142a9b628(void)

void FUN_142a9b628(longlong param_1,undefined8 *param_2,int param_3,uint param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  ulonglong *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined1 auStack_e8 [32];
  uint local_c8;
  ulonglong local_b8;
  uint local_ac;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  ulonglong local_88;
  longlong local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((param_3 != 0) && (param_2[1] == 0)) {
    local_78 = (ulonglong)(param_4 & 1) * 4 + 0x24;
    local_98 = param_1 + 0x2f0;
    local_80 = param_1 + 0x2e0;
    while (((plVar2 = (longlong *)param_2[0x1b], plVar2 == (longlong *)0x0 ||
            (*(int *)((longlong)plVar2 + 0x14) == 0)) &&
           ((param_2[0x1c] == 0 || (*(int *)(param_2[0x1c] + 0x18) == 0))))) {
      FUN_146f5b7da(param_2,L"ReadObjectBatch");
      uVar6 = FUN_146f546d2(plVar2,1);
      if ((uVar6 & 1) == 0) {
        FUN_142a964ca(&local_70,param_2,plVar2);
        uVar10 = FUN_146f546d2(plVar2,*(undefined4 *)(param_1 + local_78));
        puVar3 = local_70;
        *param_2 = local_70;
        uVar13 = DAT_14c99c018;
        if (((param_2[1] == 0) && ((param_2[0x1b] == 0 || (*(int *)(param_2[0x1b] + 0x14) == 0))))
           && ((param_2[0x1c] == 0 || (*(int *)(param_2[0x1c] + 0x18) == 0)))) {
          uVar4 = 0;
          if (*(int *)((longlong)plVar2 + 0x14) == 0) {
            uVar4 = (int)plVar2[1] - *(int *)((longlong)plVar2 + 0xc);
          }
          if (uVar10 <= uVar4) {
            uVar10 = uVar10 + *(int *)((longlong)plVar2 + 0xc);
            local_ac = FUN_146f546d2(plVar2,1);
            uVar6 = FUN_146f546d2(plVar2,1);
            *(undefined4 *)(param_1 + 0x2f8) = 0;
            if (*(int *)(param_1 + 0x2fc) < 0) {
              local_b8 = CONCAT44(local_b8._4_4_,(int)uVar6);
              FUN_146f2abc6(local_98,0);
              uVar6 = local_b8 & 0xffffffff;
            }
            uVar12 = (ulonglong)uVar10;
            if ((uVar6 & 1) != 0) {
              uVar4 = *(uint *)(plVar2 + 1);
              local_b8 = (ulonglong)*(uint *)((longlong)plVar2 + 0xc);
              if (uVar10 < uVar4 || uVar10 - uVar4 == 0) {
                *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
                *(uint *)((longlong)plVar2 + 0xc) = uVar10;
                if ((uVar10 & 0xffffffe0) < uVar4) {
                  *(undefined4 *)(plVar2 + 2) =
                       *(undefined4 *)(*plVar2 + (ulonglong)(uVar10 >> 5) * 4);
                }
              }
              else {
                *(uint *)((longlong)plVar2 + 0x14) = uVar10 - uVar4;
              }
              FUN_142a84af4(*(undefined8 *)(param_1 + 0x420),param_2,local_98);
              if (((param_2[1] != 0) ||
                  ((param_2[0x1b] != 0 && (*(int *)(param_2[0x1b] + 0x14) != 0)))) ||
                 ((param_2[0x1c] != 0 && (*(int *)(param_2[0x1c] + 0x18) != 0))))
              goto LAB_142a9b779;
              uVar4 = *(uint *)(plVar2 + 1);
              uVar12 = (ulonglong)*(uint *)((longlong)plVar2 + 0xc);
              uVar11 = (uint)local_b8;
              if (uVar11 < uVar4 || uVar11 - uVar4 == 0) {
                *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
                *(uint *)((longlong)plVar2 + 0xc) = uVar11;
                if ((uVar11 & 0xffffffe0) < uVar4) {
                  *(undefined4 *)(plVar2 + 2) =
                       *(undefined4 *)(*plVar2 + (ulonglong)(uVar11 >> 5) * 4);
                }
              }
              else {
                *(uint *)((longlong)plVar2 + 0x14) = uVar11 - uVar4;
              }
            }
            if ((longlong)*(int *)(param_1 + 0x2e8) != 0) {
              puVar9 = *(ulonglong **)(param_1 + 0x2e0);
              lVar7 = (longlong)*(int *)(param_1 + 0x2e8) << 3;
              do {
                if (((*puVar9 ^ (ulonglong)puVar3) & 0xfffffffffffffff) == 0) {
                  if (puVar9 != (ulonglong *)0x0) {
                    uVar10 = *(uint *)(plVar2 + 1);
                    uVar4 = (uint)uVar12;
                    iVar8 = uVar4 - uVar10;
                    if (uVar10 <= uVar4 && iVar8 != 0) goto LAB_142a9b8c4;
                    *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
                    *(uint *)((longlong)plVar2 + 0xc) = uVar4;
                    if (uVar10 <= (uVar4 & 0xffffffe0)) goto LAB_142a9b779;
                    uVar5 = *(undefined4 *)(*plVar2 + (ulonglong)(uVar4 >> 5) * 4);
                    goto LAB_142a9b996;
                  }
                  break;
                }
                puVar9 = puVar9 + 1;
                lVar7 = lVar7 + -8;
              } while (lVar7 != 0);
            }
            local_ac = local_ac & 1;
            local_b8 = uVar12;
            if (DAT_14c75f465 == '\x01') {
              cVar1 = *(char *)(*(longlong *)(param_1 + 0x420) + 0x170);
              if (((cVar1 != '\x02') &&
                  ((cVar1 != '\0' || (*(char *)(*(longlong *)(param_1 + 0x420) + 0x171) != '\x01')))
                  ) || (lVar7 = FUN_146f4327e(param_1,puVar3,local_98), lVar7 == 0))
              goto LAB_142a9bb0e;
              uVar14 = uVar10 - *(int *)((longlong)plVar2 + 0xc);
              uVar11 = uVar14 + 0x1f >> 5;
              uVar4 = *(uint *)(lVar7 + 0x88);
              local_88 = (ulonglong)uVar4;
              *(uint *)(lVar7 + 0x88) = uVar11 + uVar4;
              local_a8 = lVar7;
              local_a0 = lVar7;
              if (*(int *)(lVar7 + 0x8c) - uVar4 < uVar11) {
                FUN_140724a48();
              }
              uVar14 = uVar14 & 0x3fffffff;
              lVar7 = *(longlong *)(local_a0 + 0x80);
              if (*(longlong *)(local_a0 + 0x80) == 0) {
                lVar7 = local_a8;
              }
              FUN_146f59f56(plVar2,lVar7 + local_88 * 4,uVar14);
              if (((param_2[1] != 0) ||
                  ((param_2[0x1b] != 0 && (*(int *)(param_2[0x1b] + 0x14) != 0)))) ||
                 ((param_2[0x1c] != 0 && (*(int *)(param_2[0x1c] + 0x18) != 0))))
              goto LAB_142a9b779;
              local_a8 = local_a8 + 0x90;
              local_90 = (longlong)*(int *)(local_a0 + 0xb8);
              uVar4 = *(int *)(local_a0 + 0xb8) + 1;
              *(uint *)(local_a0 + 0xb8) = uVar4;
              if (*(uint *)(local_a0 + 0xbc) < uVar4) {
                FUN_146f4f35e(local_a8,local_90);
              }
              lVar7 = local_a8;
              if (*(longlong *)(local_a0 + 0xb0) != 0) {
                lVar7 = *(longlong *)(local_a0 + 0xb0);
              }
              *(ulonglong *)(lVar7 + local_90 * 8) =
                   ((ulonglong)(uVar14 | local_ac << 0x1e) << 0x20) + local_88;
LAB_142a9bc01:
              uVar13 = DAT_14c99c028;
              if (*(uint *)((longlong)plVar2 + 0xc) != uVar10) goto LAB_142a9b81b;
              uVar10 = *(uint *)(plVar2 + 1);
              uVar4 = (uint)local_b8;
              iVar8 = uVar4 - uVar10;
              if (uVar10 <= uVar4 && iVar8 != 0) {
LAB_142a9b8c4:
                *(int *)((longlong)plVar2 + 0x14) = iVar8;
                goto LAB_142a9b779;
              }
              *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
            }
            else {
LAB_142a9bb0e:
              local_c8 = uVar10;
              FUN_146f438a4(param_1,param_2,puVar3,local_ac);
              uVar6 = local_b8;
              if (((param_2[1] == 0) &&
                  ((param_2[0x1b] == 0 || (*(int *)(param_2[0x1b] + 0x14) == 0)))) &&
                 ((param_2[0x1c] == 0 || (*(int *)(param_2[0x1c] + 0x18) == 0))))
              goto LAB_142a9bc01;
              if (param_2[1] != DAT_14c99c020) goto LAB_142a9b779;
              (**(code **)(**(longlong **)(param_1 + 0x80) + 0x338))
                        (*(longlong **)(param_1 + 0x80),2,puVar3,*(undefined4 *)(param_1 + 0xc));
              FUN_146f4eff6(local_80,&local_70);
              *param_2 = 0;
              param_2[1] = 0;
              uVar10 = *(uint *)(plVar2 + 1);
              iVar8 = (uint)uVar6 - uVar10;
              if (uVar10 <= (uint)uVar6 && iVar8 != 0) goto LAB_142a9b8c4;
              *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
              uVar4 = (uint)local_b8;
            }
            *(uint *)((longlong)plVar2 + 0xc) = uVar4;
            if ((uVar4 & 0xffffffe0) < uVar10) {
              uVar5 = *(undefined4 *)(*plVar2 + (ulonglong)(uVar4 >> 5) * 4);
LAB_142a9b996:
              *(undefined4 *)(plVar2 + 2) = uVar5;
            }
            goto LAB_142a9b779;
          }
        }
LAB_142a9b81b:
        FUN_146f5b89e(param_2);
        if (param_2[1] == 0) {
          param_2[1] = uVar13;
        }
      }
      else {
        local_68 = *(undefined4 *)(param_1 + 0xc);
        local_64 = 1;
        lVar7 = param_2[0x1e];
        if (lVar7 == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(lVar7 + 0x28) & 2;
          *(uint *)(lVar7 + 0x28) = *(uint *)(lVar7 + 0x28) | 2;
        }
        local_70 = param_2;
        FUN_142a8cdd2(*(undefined8 *)(param_1 + 0x80),&local_70);
        uVar13 = DAT_14c99c010;
        if ((((param_2[1] != 0) || ((param_2[0x1b] != 0 && (*(int *)(param_2[0x1b] + 0x14) != 0))))
            || ((param_2[0x1c] != 0 && (*(int *)(param_2[0x1c] + 0x18) != 0)))) &&
           (FUN_146f5b89e(param_2), param_2[1] == 0)) {
          param_2[1] = uVar13;
        }
        if (lVar7 != 0) {
          *(uint *)(lVar7 + 0x28) = *(uint *)(lVar7 + 0x28) & 0xfffffffd | uVar10;
        }
      }
LAB_142a9b779:
      param_3 = param_3 + -1;
      if ((param_3 == 0) || (param_2[1] != 0)) break;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a9bc96 FUN_142a9bc96 body=361 status=ok
// SIG undefined FUN_142a9bc96(void)

void FUN_142a9bc96(longlong param_1,void *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_198 [40];
  uint *local_170;
  int local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined1 local_158 [8];
  longlong local_150;
  uint **local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar1 = *param_3;
  uVar3 = DAT_14c9997b8;
  if (*(int *)(lVar1 + 8) == *(int *)(param_1 + 0x3a8)) {
    local_160 = 0;
    local_168 = *(int *)(lVar1 + 0x38);
    local_170 = *(uint **)(lVar1 + 0x28);
    local_164 = 0;
    if (local_168 != 0) {
      local_160 = (ulonglong)*local_170;
    }
    memcpy(local_158,param_2,0x128);
    local_80 = &local_170;
    local_78 = 0;
    uStack_70 = 0;
    iVar2 = FUN_146f546d2(local_80,0x10);
    if ((iVar2 != 0 && (local_160._4_4_ == 0 && local_150 == 0)) ||
       (uVar3 = DAT_14c99c010, *(longlong *)((longlong)param_2 + 8) != 0)) {
      FUN_146f4487c(*(undefined8 *)(param_1 + 0x218),iVar2 + 0x20,param_1 + 0x30);
      FUN_142a9b628(param_1,local_158,iVar2,1);
      uVar3 = DAT_14c99c010;
      if (((local_150 == 0) &&
          ((local_80 == (uint **)0x0 || (*(int *)((longlong)local_80 + 0x14) == 0)))) &&
         ((local_78 == 0 || (*(int *)(local_78 + 0x18) == 0)))) goto LAB_142a9bdd7;
    }
  }
  FUN_146f5b89e(param_2);
  if (*(longlong *)((longlong)param_2 + 8) == 0) {
    *(undefined8 *)((longlong)param_2 + 8) = uVar3;
  }
LAB_142a9bdd7:
  if ((local_30 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a9be00 FUN_142a9be00 body=1407 status=ok
// SIG undefined FUN_142a9be00(void)

void FUN_142a9be00(longlong param_1)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint *puVar14;
  undefined1 auStack_268 [32];
  uint local_248;
  int local_23c;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  ulonglong local_220;
  undefined8 *local_218;
  undefined1 local_210 [16];
  undefined8 *local_200;
  undefined8 local_1f8;
  longlong local_1f0;
  char local_1e8;
  undefined8 local_1e0;
  undefined4 *local_1d8;
  ulonglong uStack_1d0;
  undefined8 local_1c8;
  longlong local_1b8;
  longlong local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  longlong local_188 [26];
  undefined4 local_b8;
  undefined4 **local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  iVar12 = *(int *)(param_1 + 0x2d8);
  if (iVar12 != 0) {
    local_190 = 0;
    local_1b8 = *(longlong *)(param_1 + 0x10);
    local_1a8 = *(undefined8 *)(param_1 + 0x428);
    uStack_1a0 = *(undefined8 *)(param_1 + 0x430);
    lVar13 = *(longlong *)(param_1 + 0x68);
    local_198 = *(undefined8 *)(lVar13 + 0x7b0);
    local_1b0 = *(longlong *)(local_1b8 + 0x28) + 0xd38;
    lVar5 = param_1 + 0x2d0;
    local_1d8 = (undefined4 *)0x0;
    uStack_1d0 = 0;
    local_1c8 = 0;
    local_188[0] = 0;
    local_188[1] = 0;
    lVar8 = 0x18;
    do {
      *(undefined8 *)((longlong)local_188 + lVar8) = 0;
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != 0xd8);
    local_b8 = 0;
    local_b0 = &local_1d8;
    local_a8 = 0;
    uStack_a0 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_6c = 0xffffffff;
    local_68 = local_68 & 0xfc;
    local_70 = *(undefined4 *)(param_1 + 0x430);
    local_98 = &local_1b8;
    local_78 = lVar13 + 0xea0;
    if (0 < iVar12) {
      lVar13 = param_1 + 0x2f0;
      local_238 = param_1 + 0x2e0;
      local_218 = (undefined8 *)(param_1 + 0x30);
      iVar12 = 0;
      do {
        lVar8 = (longlong)iVar12 * 0x128 + *(longlong *)(param_1 + 0x2d0);
        *(undefined4 *)(param_1 + 0x2f8) = 0;
        if (*(int *)(param_1 + 0x2fc) < 0) {
          FUN_146f2abc6(lVar13,0);
        }
        FUN_146f4327e(param_1,*(undefined8 *)(lVar8 + 0x120),lVar13);
        if (*(int *)(lVar8 + 0xe8) == 0) {
          puVar14 = (uint *)(lVar8 + 0x90);
          if (*(uint **)(lVar8 + 0xb0) != (uint *)0x0) {
            puVar14 = *(uint **)(lVar8 + 0xb0);
          }
          local_23c = iVar12;
          local_230 = lVar13;
          local_228 = lVar5;
          if ((longlong)*(int *)(lVar8 + 0xb8) != 0) {
            puVar1 = (ulonglong *)(lVar8 + 0x120);
            puVar2 = puVar14 + (longlong)*(int *)(lVar8 + 0xb8) * 2;
            do {
              lVar5 = *(longlong *)(lVar8 + 0x80);
              if (*(longlong *)(lVar8 + 0x80) == 0) {
                lVar5 = lVar8;
              }
              local_1d8 = (undefined4 *)(lVar5 + (ulonglong)*puVar14 * 4);
              uStack_1d0 = (ulonglong)(puVar14[1] & 0x3fffffff);
              if ((puVar14[1] & 0x3fffffff) != 0) {
                local_1c8 = CONCAT44(local_1c8._4_4_,*local_1d8);
              }
              if ((int)puVar14[1] < 0) {
                uVar3 = FUN_146f546d2(&local_1d8,0x20);
                local_220 = (ulonglong)uVar3;
                uVar3 = FUN_146f546d2(&local_1d8,0x20);
                uVar4 = FUN_146f546d2(&local_1d8,1);
                uVar11 = ((ulonglong)(uVar3 & 0xfffffff) << 0x20) + local_220;
                iVar12 = FUN_146f18900(*(undefined8 *)(param_1 + 0x70),uVar11);
                if (iVar12 != 0) {
                  FUN_146f42fa6(param_1,iVar12,0,uVar4 & 0xffffff01);
                }
                puVar6 = *(ulonglong **)(param_1 + 0x2e0);
                puVar10 = puVar6;
                if ((longlong)*(int *)(param_1 + 0x2e8) != 0) {
                  puVar9 = puVar6 + *(int *)(param_1 + 0x2e8);
                  puVar7 = puVar6;
                  do {
                    while (puVar10 = puVar7, uVar11 == (*puVar10 & 0xfffffffffffffff)) {
                      while( true ) {
                        puVar9 = puVar9 + -1;
                        if ((*puVar9 & 0xfffffffffffffff) != uVar11) break;
                        if (puVar9 == puVar10) goto LAB_142a9c334;
                      }
                      *puVar10 = *puVar9;
                      puVar7 = puVar10 + 1;
                      if (puVar9 == puVar10 + 1) {
                        puVar10 = puVar10 + 1;
                        goto LAB_142a9c334;
                      }
                    }
                    puVar7 = puVar10 + 1;
                    puVar10 = puVar9;
                  } while (puVar7 != puVar9);
                }
LAB_142a9c334:
                FUN_146f44938(local_238,(ulonglong)((longlong)puVar10 - (longlong)puVar6) >> 3);
              }
              else {
                if ((longlong)*(int *)(param_1 + 0x2e8) != 0) {
                  puVar6 = *(ulonglong **)(param_1 + 0x2e0);
                  lVar5 = (longlong)*(int *)(param_1 + 0x2e8) << 3;
                  do {
                    if (((*puVar6 ^ *puVar1) & 0xfffffffffffffff) == 0) {
                      if (puVar6 != (ulonglong *)0x0) goto LAB_142a9c0eb;
                      break;
                    }
                    puVar6 = puVar6 + 1;
                    lVar5 = lVar5 + -8;
                  } while (lVar5 != 0);
                }
                local_200 = local_218;
                local_1f8 = *(undefined8 *)(param_1 + 0x30);
                local_1f0 = *(longlong *)(param_1 + 0x40);
                local_1e8 = '\0';
                local_1e0 = *(undefined8 *)(param_1 + 0x48);
                *(undefined8 ***)(param_1 + 0x48) = &local_200;
                *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
                FUN_146f449a6(local_210,0x20);
                *(undefined1 **)(param_1 + 0x218) = local_210;
                local_248 = puVar14[1] & 0x3fffffff;
                FUN_146f438a4(param_1,local_188,*puVar1,puVar14[1] >> 0x1e & 1);
                if ((local_188[1] == 0) &&
                   ((local_b0 == (undefined4 **)0x0 || (*(int *)((longlong)local_b0 + 0x14) == 0))))
                {
                  if (((local_a8 != 0) && (*(int *)(local_a8 + 0x18) != 0)) && (DAT_14c99c020 == 0))
                  {
LAB_142a9c1c6:
                    FUN_146f4eff6(local_238,puVar1);
                    local_188[0] = 0;
                    local_188[1] = 0;
                  }
                }
                else if (local_188[1] == DAT_14c99c020) goto LAB_142a9c1c6;
                FUN_142a99c5e(param_1,local_188);
                FUN_142a9a668(param_1);
                FUN_146f44810(param_1);
                *(undefined8 *)(param_1 + 0x218) = 0;
                if (local_1e8 == '\0') {
                  local_1e8 = '\x01';
                  *(int *)(local_200 + 4) = *(int *)(local_200 + 4) + -1;
                  if (local_1f0 != local_200[2]) {
                    FUN_14004673c();
                  }
                  *local_200 = local_1f8;
                  local_200[3] = local_1e0;
                }
              }
LAB_142a9c0eb:
              puVar14 = puVar14 + 2;
            } while (puVar14 != puVar2);
          }
          lVar5 = lVar8 + 0xf0;
          if (*(longlong *)(lVar8 + 0x110) != 0) {
            lVar5 = *(longlong *)(lVar8 + 0x110);
          }
          iVar12 = *(int *)(lVar8 + 0x118);
          if ((longlong)iVar12 != 0) {
            lVar13 = 0;
            do {
              FUN_146f29e7c(*(undefined8 *)(param_1 + 0x420),*(undefined8 *)(lVar5 + lVar13));
              lVar13 = lVar13 + 8;
            } while ((longlong)iVar12 * 8 != lVar13);
          }
          lVar5 = local_228;
          iVar12 = local_23c;
          FUN_146f44a40(local_228);
          lVar13 = local_230;
        }
        else {
          iVar12 = iVar12 + 1;
        }
      } while (iVar12 < *(int *)(param_1 + 0x2d8));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a9c380 FUN_142a9c380 body=1707 status=ok
// SIG undefined FUN_142a9c380(void)

void FUN_142a9c380(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  char cVar14;
  uint *puVar15;
  bool bVar16;
  undefined1 auStack_138 [35];
  char local_115;
  uint local_114;
  uint *local_110;
  ulonglong local_108;
  ulonglong local_100;
  int local_f4;
  undefined1 local_f0 [16];
  undefined8 *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  char local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  uint *local_88;
  uint *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar11 = *(longlong *)(param_2 + 0xd8);
  local_90 = 0;
  local_b8 = *(longlong *)(param_1 + 0x10);
  local_98 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 0x7b0);
  local_a8 = *(undefined4 *)(param_1 + 0x428);
  uStack_a4 = *(undefined4 *)(param_1 + 0x42c);
  uStack_a0 = *(undefined4 *)(param_1 + 0x430);
  uStack_9c = *(undefined4 *)(param_1 + 0x434);
  local_b0 = *(longlong *)(local_b8 + 0x28) + 0xd38;
  *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_1 + 0xc);
  *(longlong **)(param_2 + 0xf0) = &local_b8;
  *(longlong *)(param_2 + 0x110) = *(longlong *)(param_1 + 0x68) + 0xea0;
  puVar1 = (undefined8 *)(param_1 + 0x30);
  local_d8 = *(undefined8 *)(param_1 + 0x30);
  local_d0 = *(longlong *)(param_1 + 0x40);
  local_c8 = '\0';
  local_c0 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 ***)(param_1 + 0x48) = &local_e0;
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + 1;
  local_e0 = puVar1;
  uVar5 = FUN_146f546d2(lVar11,0x10);
  uVar4 = DAT_14c99c028;
  uVar12 = DAT_14c99c010;
  iVar8 = *(int *)(lVar11 + 0x14);
  if ((uVar5 < 0x2000) && (iVar8 == 0)) {
    if (uVar5 != 0) {
      FUN_146f449a6(local_f0,uVar5 + 0x20,puVar1);
      *(undefined1 **)(param_1 + 0x218) = local_f0;
      uVar12 = *(undefined8 *)(param_2 + 0xd8);
      uVar6 = FUN_146f546d2(uVar12,0x10);
      if (*(longlong *)(param_2 + 8) == 0) {
        if ((((*(longlong *)(param_2 + 0xd8) == 0) ||
             (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)) &&
            ((*(longlong *)(param_2 + 0xe0) == 0 ||
             (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) && (uVar6 != 0)) {
          local_f4 = *(int *)(param_1 + 0x2d8);
          uVar9 = 0;
          do {
            FUN_142a964ca(&local_88,param_2,uVar12);
            puVar15 = local_88;
            uVar10 = FUN_146f546d2(uVar12,1);
            local_110 = puVar15;
            if ((uVar10 & 1) != 0) {
              FUN_142a964ca(&local_80,param_2,uVar12);
              puVar15 = local_80;
            }
            uVar7 = FUN_146f546d2(uVar12,1);
            lVar11 = *(longlong *)(param_2 + 8);
            if (((lVar11 != 0) ||
                ((*(longlong *)(param_2 + 0xd8) != 0 &&
                 (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) != 0)))) ||
               ((*(longlong *)(param_2 + 0xe0) != 0 &&
                (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) != 0)))) goto LAB_142a9c8f4;
            uVar10 = (ulonglong)(uVar7 & 1);
            local_114 = uVar9;
            if ((local_f4 != 0) && ((longlong)*(int *)(param_1 + 0x2d8) != 0)) {
              lVar13 = *(longlong *)(param_1 + 0x2d0) + 0x90;
              lVar11 = (longlong)*(int *)(param_1 + 0x2d8) * 0x128;
              do {
                if (((*(ulonglong *)(lVar13 + 0x90) ^ (ulonglong)puVar15) & 0xfffffffffffffff) == 0)
                {
                  lVar11 = lVar13 + -0x90;
                  if (lVar11 != 0) {
                    uVar9 = *(uint *)(lVar13 + -8);
                    *(uint *)(lVar13 + -8) = uVar9 + 3;
                    local_108 = lVar11;
                    local_100 = uVar10;
                    if (*(int *)(lVar13 + -4) - uVar9 < 3) {
                      FUN_140724a48(lVar11,uVar9);
                    }
                    puVar15 = local_110;
                    local_68 = 0;
                    if (*(longlong *)(lVar13 + -0x10) != 0) {
                      local_108 = *(longlong *)(lVar13 + -0x10);
                    }
                    local_80 = (uint *)(local_108 + (ulonglong)uVar9 * 4);
                    local_78 = 0x60;
                    uStack_70 = (ulonglong)*local_80 << 0x20;
                    local_108 = (ulonglong)uVar9;
                    FUN_146f5435e(&local_80,(ulonglong)local_110 & 0xffffffff,0x20);
                    FUN_146f5435e(&local_80,(uint)((ulonglong)puVar15 >> 0x20) & 0xfffffff,0x20);
                    local_115 = (char)local_100;
                    FUN_146f5435e(&local_80,local_115 != '\0',1);
                    bVar16 = (uint)uStack_70 < ((int)local_78 + 0x1fU & 0xffffffe0);
                    cVar14 = (char)((local_68._4_4_ & 4) >> 2);
                    if (cVar14 == '\0' && bVar16) {
                      local_80[(uint)uStack_70 >> 5] = uStack_70._4_4_;
                    }
                    uVar9 = (uint)uStack_70;
                    if ((int)local_68 == 0) {
                      iVar8 = *(int *)(lVar13 + 0x28);
                      *(uint *)(lVar13 + 0x28) = iVar8 + 1U;
                      uVar10 = (longlong)iVar8;
                      if (*(uint *)(lVar13 + 0x2c) < iVar8 + 1U) {
                        local_110 = (uint *)(uStack_70 & 0xffffffff);
                        local_100 = (longlong)iVar8;
                        FUN_146f4f35e(lVar13);
                        uVar9 = (uint)local_110;
                        uVar10 = local_100;
                      }
                      lVar11 = *(longlong *)(lVar13 + 0x20);
                      if (*(longlong *)(lVar13 + 0x20) == 0) {
                        lVar11 = lVar13;
                      }
                      *(ulonglong *)(lVar11 + uVar10 * 8) = local_108 | 0x8000004100000000;
                    }
                    if (cVar14 == '\0' && bVar16) {
                      local_80[uVar9 >> 5] = uStack_70._4_4_;
                    }
                    goto LAB_142a9c6a6;
                  }
                  break;
                }
                lVar13 = lVar13 + 0x128;
                lVar11 = lVar11 + -0x128;
              } while (lVar11 != 0);
            }
            iVar8 = FUN_146f18900(*(undefined8 *)(param_1 + 0x70),local_110);
            if (iVar8 != 0) {
              if (DAT_14c75f481 == '\x01') {
                local_110 = *(uint **)(param_1 + 0x218);
                FUN_146f4487c(local_110,1,puVar1);
                lVar11 = *(longlong *)local_110;
                uVar9 = local_110[2];
                puVar3 = (undefined8 *)(lVar11 + (ulonglong)uVar9 * 0x18);
                *puVar3 = 0;
                puVar3[1] = 0;
                *(undefined8 *)(lVar11 + 0x10 + (ulonglong)uVar9 * 0x18) = 0;
                lVar11 = *(longlong *)local_110;
                uVar10 = (ulonglong)local_110[2];
                *(int *)(lVar11 + uVar10 * 0x18) = iVar8;
                *(uint *)(lVar11 + 0x10 + uVar10 * 0x18) =
                     (*(uint *)(lVar11 + 0x10 + uVar10 * 0x18) & 0xffffff80) + (uVar7 & 1) * 8 +
                     0x20;
                piVar2 = (int *)(*(longlong *)(param_1 + 0x218) + 8);
                *piVar2 = *piVar2 + 1;
              }
              else {
                FUN_146f42fa6(param_1,iVar8,0,uVar10);
              }
            }
LAB_142a9c6a6:
            uVar9 = local_114 + 1;
          } while (uVar9 != uVar6);
          lVar11 = *(longlong *)(param_2 + 8);
LAB_142a9c8f4:
          if (lVar11 != 0) goto LAB_142a9c471;
        }
        if ((((*(longlong *)(param_2 + 0xd8) == 0) ||
             (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)) &&
            ((*(longlong *)(param_2 + 0xe0) == 0 ||
             (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) &&
           ((((((((uVar5 != uVar6 || (*(int *)(*(longlong *)(param_1 + 0x218) + 8) != 0)) &&
                 (FUN_142a9b628(param_1,param_2,uVar5 - uVar6,0), *(longlong *)(param_2 + 8) == 0))
                && ((*(longlong *)(param_2 + 0xd8) == 0 ||
                    (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)))) &&
               ((*(longlong *)(param_2 + 0xe0) == 0 ||
                (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) &&
              ((FUN_146f44a98(param_1,param_2), *(longlong *)(param_2 + 8) == 0 &&
               ((*(longlong *)(param_2 + 0xd8) == 0 ||
                (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)))))) &&
             ((*(longlong *)(param_2 + 0xe0) == 0 ||
              (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))) &&
            (((FUN_142a99c5e(param_1,param_2), *(longlong *)(param_2 + 8) == 0 &&
              ((*(longlong *)(param_2 + 0xd8) == 0 ||
               (*(int *)(*(longlong *)(param_2 + 0xd8) + 0x14) == 0)))) &&
             ((*(longlong *)(param_2 + 0xe0) == 0 ||
              (*(int *)(*(longlong *)(param_2 + 0xe0) + 0x18) == 0)))))))) {
          FUN_142a9a668(param_1);
          FUN_146f44810(param_1);
          *(undefined8 *)(param_1 + 0x218) = 0;
        }
      }
    }
  }
  else {
    FUN_146f5b89e(param_2);
    if (*(longlong *)(param_2 + 8) == 0) {
      if (iVar8 != 0) {
        uVar12 = uVar4;
      }
      *(undefined8 *)(param_2 + 8) = uVar12;
    }
  }
LAB_142a9c471:
  if (local_c8 == '\0') {
    local_c8 = '\x01';
    *(int *)(local_e0 + 4) = *(int *)(local_e0 + 4) + -1;
    if (local_d0 != local_e0[2]) {
      FUN_14004673c();
    }
    *local_e0 = local_d8;
    local_e0[3] = local_c0;
  }
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a9ca2c FUN_142a9ca2c body=69 status=ok
// SIG undefined FUN_142a9ca2c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9ca2c(void)

{
  _DAT_14c999a10 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a9ca6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999a18,1);
  return;
}



// FUNCTION 142a9ca71 FUN_142a9ca71 body=69 status=ok
// SIG undefined FUN_142a9ca71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9ca71(void)

{
  _DAT_14c999a28 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a9cab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999a30,1);
  return;
}



// FUNCTION 142a9cab6 FUN_142a9cab6 body=69 status=ok
// SIG undefined FUN_142a9cab6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9cab6(void)

{
  _DAT_14c999a38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a9caf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999a40,1);
  return;
}



// FUNCTION 142a9cafc FUN_142a9cafc body=1558 status=ok
// SIG undefined FUN_142a9cafc(void)

void FUN_142a9cafc(longlong param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_238 [40];
  int *local_210;
  uint local_208;
  int local_204;
  longlong *local_200;
  undefined1 local_1f8 [8];
  longlong local_1f0;
  undefined4 *local_1e8;
  longlong **local_1e0;
  int *local_1d8;
  uint local_1d0;
  int local_1cc;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ulonglong uStack_180;
  undefined4 local_16c;
  longlong *local_168;
  longlong lStack_160;
  int local_158;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_238;
  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x1320) = *param_2;
  lVar3 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar3 + 0x1320) == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_238);
  }
  if (*(int *)(lVar3 + 0x1320) == 2) {
    *(double *)(param_1 + 0x40) = (double)(float)param_2[1] + *(double *)(param_1 + 0x40);
    local_204 = *(int *)(lVar3 + 0x878);
    local_210 = *(int **)(lVar3 + 0x868);
    local_208 = local_204 + 0x1fU >> 5;
    if (local_204 == 0) {
      local_210 = &local_204;
    }
    uVar4 = *(uint *)(param_1 + 0x50);
    if (((uVar4 & 4) != 0) || (lVar6 = lVar3, DAT_14c999a20 == '\x01')) {
      (**(code **)(**(longlong **)(lVar3 + 0x808) + 0x310))();
      FUN_142a726d4(*(longlong *)(param_1 + 0x28) + 0x7b0);
      uVar4 = *(uint *)(param_1 + 0x50) & 0xfffffffb;
      *(uint *)(param_1 + 0x50) = uVar4;
      lVar6 = *(longlong *)(param_1 + 0x28);
    }
    if ((uVar4 & 2) != 0) {
      *(undefined1 *)(lVar6 + 0x12e4) = 1;
      (**(code **)(**(longlong **)(lVar6 + 0x808) + 0x2b8))();
      if (((ulonglong)*(uint *)(lVar6 + 0x240) != 0) && (*(int *)(lVar6 + 0x220) != 0)) {
        memcpy(*(void **)(lVar6 + 0x238),*(void **)(lVar6 + 0x218),
               (ulonglong)*(uint *)(lVar6 + 0x240) << 2);
      }
      *(byte *)(lVar6 + 0x230) = *(byte *)(lVar6 + 0x230) | 1;
      FUN_142a768ce(*(longlong *)(param_1 + 0x28) + 0x5b0);
      lVar6 = *(longlong *)(param_1 + 0x28);
      memset(*(void **)(lVar6 + 0x1098),0,(longlong)*(int *)(lVar6 + 0x10a0) << 2);
      (**(code **)(**(longlong **)(lVar6 + 0x808) + 0x2d0))();
      FUN_142a7872e(*(longlong *)(param_1 + 0x28) + 0x880);
      FUN_146f39d48(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x808),param_2[1]);
      lVar6 = *(longlong *)(param_1 + 0x28);
      uVar4 = *(uint *)(lVar6 + 0x5b8);
      if ((ulonglong)uVar4 != 0) {
        lVar5 = *(longlong *)(lVar6 + 0x5e0);
        lVar6 = *(longlong *)(lVar6 + 0x5b0);
        uVar8 = 0;
        do {
          puVar1 = (uint *)(lVar6 + uVar8 * 4);
          *puVar1 = *puVar1 | *(uint *)(lVar5 + uVar8 * 4);
          uVar8 = uVar8 + 1;
        } while (uVar4 != uVar8);
        lVar6 = *(longlong *)(param_1 + 0x28);
      }
      FUN_146f166fa(lVar6 + 0xbe0);
      lVar6 = *(longlong *)(param_1 + 0x28);
      local_16c = 0;
      *(undefined4 *)(lVar6 + 0x828) = 0;
      if (*(int *)(lVar6 + 0x82c) < 0x800) {
        FUN_146f4bcce(lVar6 + 0x818,0x800);
      }
      if (*(int *)(lVar6 + 0x844) < 0x4098) {
        *(undefined4 *)(lVar6 + 0x840) = 0;
        FUN_14475fe8c(lVar6 + 0x830,0x4098);
      }
      else {
        *(undefined4 *)(lVar6 + 0x840) = 0;
      }
      local_188 = 0;
      uStack_180 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_168 = (longlong *)0x0;
      lStack_160 = 0;
      lVar5 = 0x18;
      do {
        *(undefined8 *)((longlong)&local_168 + lVar5) = 0;
        lVar5 = lVar5 + 0x18;
      } while (lVar5 != 0xd8);
      uStack_68 = 0;
      local_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_70 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0xffffffff00000000;
      local_48 = local_48 & 0xfc;
      local_1c8 = *(longlong *)(lVar6 + 0x50);
      plStack_78 = &local_1c8;
      local_1c0 = *(longlong *)(local_1c8 + 0x28) + 0xd38;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 0;
      local_1a8 = *(undefined8 *)(*(longlong *)(local_1c8 + 0x28) + 0x810);
      local_1a0 = 0;
      if (*(char *)(lVar6 + 0x12c0) == '\x01') {
        uStack_68 = *(undefined8 *)(lVar6 + 0x12a0);
      }
      local_1cc = *(int *)(lVar6 + 0x2a8);
      local_1d8 = *(int **)(lVar6 + 0x298);
      local_1d0 = local_1cc + 0x1fU >> 5;
      if (local_1cc == 0) {
        local_1d8 = &local_1cc;
      }
      local_1f0 = lVar6 + 0x160;
      local_200 = &local_198;
      local_1e8 = &local_16c;
      local_1e0 = &local_168;
      local_1f8 = (undefined1  [8])(lVar6 + 0x818);
      FUN_146f4bd22();
      if (((uint)local_188 < ((int)uStack_190 + 0x1fU & 0xffffffe0)) &&
         ((uStack_180 & 0x400000000) == 0)) {
        *(undefined4 *)(local_198 + (ulonglong)((uint)local_188 >> 5) * 4) = local_188._4_4_;
      }
      FUN_146f2421c(*(longlong *)(param_1 + 0x28) + 0xf00,0);
      lVar6 = *(longlong *)(param_1 + 0x28);
      local_168 = (longlong *)(lVar6 + 0x880);
      lStack_160 = lVar6 + 0x848;
      FUN_146f4bdc2(*(undefined8 *)(lVar6 + 0x868),*(undefined4 *)(lVar6 + 0x870),
                    *(undefined4 *)(lVar6 + 0x878),&local_168);
      lVar6 = *(longlong *)(param_1 + 0x28);
      local_168 = (longlong *)(lVar6 + 0x848);
      lStack_160 = lVar6 + 0x818;
      FUN_146f4bef6(*(undefined8 *)(lVar6 + 0x868),*(undefined4 *)(lVar6 + 0x870),
                    *(undefined4 *)(lVar6 + 0x878),&local_168);
      lVar6 = *(longlong *)(param_1 + 0x28);
    }
    FUN_146f2421c(lVar6 + 0xf00,1);
    FUN_146f244d4(*(longlong *)(param_1 + 0x28) + 0xf18);
    if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x28);
      local_158 = *(int *)(lVar6 + 0x278);
      local_1c8 = *(longlong *)(lVar6 + 0x268);
      local_1c0 = CONCAT44(local_158,local_158 + 0x1fU >> 5);
      if (local_158 == 0) {
        local_1c8 = (longlong)&local_1c0 + 4;
      }
      local_168 = (longlong *)0x0;
      lStack_160 = 0;
      FUN_146f2a4d8(&local_168);
      lVar5 = local_1c8;
      local_1f8._0_4_ = local_158 + 0x1fU >> 5;
      local_1f8._4_4_ = local_158;
      local_200 = local_168;
      if (local_158 == 0) {
        local_200 = (longlong *)(local_1f8 + 4);
      }
      iVar2 = *(int *)(lVar6 + 0x5c0);
      lVar7 = *(longlong *)(lVar6 + 0x5b0);
      uStack_190 = CONCAT44(iVar2,iVar2 + 0x1fU >> 5);
      if (iVar2 == 0) {
        lVar7 = (longlong)&uStack_190 + 4;
      }
      local_198 = lVar7;
      if (0x1f < local_158 + 0x1fU) {
        uVar8 = 0;
        do {
          *(uint *)((longlong)local_200 + uVar8 * 4) =
               *(uint *)(lVar5 + uVar8 * 4) & *(uint *)(lVar7 + uVar8 * 4);
          uVar8 = uVar8 + 1;
        } while ((uint)local_1f8._0_4_ != uVar8);
      }
      FUN_146f38530(lVar6 + 0xca0,&local_210,&local_200);
      if (local_168 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      local_168 = (longlong *)(lVar3 + 0x818);
      FUN_142a756c6(lVar3 + 0x1110);
    }
    lVar6 = *(longlong *)(param_1 + 0x28);
    local_168 = (longlong *)(lVar6 + 0x848);
    FUN_146f4bfca(*(undefined8 *)(lVar6 + 0x868),*(undefined4 *)(lVar6 + 0x870),
                  *(undefined4 *)(lVar6 + 0x878));
    FUN_142a80e28(lVar3 + 0x160);
  }
  if ((local_38 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a9d134 FUN_142a9d134 body=104 status=ok
// SIG undefined FUN_142a9d134(void)

void FUN_142a9d134(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (*(int *)(lVar1 + 0x1320) != 0) {
    if (*(int *)(lVar1 + 0x1320) == 2) {
      if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
        FUN_142a9d19c(lVar1);
        lVar1 = *(longlong *)(param_1 + 0x28);
      }
      FUN_146f456b6(lVar1);
      lVar1 = *(longlong *)(param_1 + 0x28);
      if ((*(byte *)(param_1 + 0x50) & 2) != 0) {
        FUN_146f16d92(lVar1 + 0x1110,lVar1 + 0x11e0);
        lVar1 = *(longlong *)(param_1 + 0x28);
      }
    }
    *(undefined4 *)(lVar1 + 0x1320) = 0;
  }
  return;
}



// FUNCTION 142a9d19c FUN_142a9d19c body=244 status=ok
// SIG undefined FUN_142a9d19c(void)

void FUN_142a9d19c(longlong param_1)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  int *local_38;
  uint local_30;
  int local_2c;
  int *local_28;
  uint local_20;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_1c = *(int *)(param_1 + 0x290);
  local_28 = *(int **)(param_1 + 0x280);
  local_20 = local_1c + 0x1fU >> 5;
  if (local_1c == 0) {
    local_28 = &local_1c;
  }
  local_2c = *(int *)(param_1 + 0x2a8);
  local_38 = *(int **)(param_1 + 0x298);
  local_30 = local_2c + 0x1fU >> 5;
  if (local_2c == 0) {
    local_38 = &local_2c;
  }
  local_40 = param_1 + 0x160;
  if (DAT_14c75f484 == '\x01') {
    FUN_146f4c09e(local_38,local_30,local_2c);
  }
  else {
    FUN_146f4c128();
  }
  memset(local_38,0,(ulonglong)local_30 << 2);
  FUN_146f18146(param_1 + 0x5b0,&local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a9d292 FUN_142a9d292 body=782 status=ok
// SIG undefined FUN_142a9d292(void)

void FUN_142a9d292(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  void *_Dst;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  undefined1 auStack_a8 [40];
  int local_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  undefined8 local_70;
  undefined4 uStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar2 = (uint *)(*(longlong *)(param_1 + 0x868) + (ulonglong)(param_2 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)param_2 & 0x1f);
  if ((*(uint *)(*(longlong *)(param_1 + 0x868) + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f)
      & 1) == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = (longlong)(int)param_2 * 0x28 + *(longlong *)(param_1 + 0x848);
  }
  iStack_64 = 0xa0;
  iStack_60 = 10;
  iStack_5c = 0x10;
  iStack_58 = 0x20;
  local_70 = *(longlong *)(param_1 + 0x50);
  iStack_78 = 0x100;
  local_80 = *(int *)(param_1 + 0x16c);
  iStack_7c = *(int *)(param_1 + 0x5ac);
  uStack_68 = CONCAT31(uStack_68._1_3_,~*(byte *)(local_70 + 0x50)) & 0xffffff01;
  uVar7 = uStack_68;
  uStack_68._0_2_ = CONCAT11(1,(undefined1)uStack_68);
  uStack_68._3_1_ = SUB41(uVar7,3);
  uStack_68 = CONCAT13(uStack_68._3_1_,CONCAT12(~*(byte *)(local_70 + 0x50),(undefined2)uStack_68))
              & 0xff01ffff;
  uStack_74 = param_2;
  _Dst = (void *)FUN_14001cc68(0x3b8);
  memset(_Dst,0,0x3b8);
  FUN_146f4c200(_Dst);
  *(void **)(lVar10 + 8) = _Dst;
  uVar8 = FUN_14001cc68(0x448,0x10);
  FUN_146f4277e(uVar8);
  *(undefined8 *)(lVar10 + 0x10) = uVar8;
  piVar4 = *(int **)(lVar10 + 8);
  piVar4[4] = (int)local_70;
  piVar4[5] = local_70._4_4_;
  piVar4[6] = uStack_68;
  piVar4[7] = iStack_64;
  piVar4[8] = iStack_60;
  piVar4[9] = iStack_5c;
  piVar4[10] = iStack_58;
  piVar4[0xb] = iStack_54;
  *piVar4 = local_80;
  piVar4[1] = iStack_7c;
  piVar4[2] = iStack_78;
  piVar4[3] = uStack_74;
  lVar5 = *(longlong *)(*(longlong *)(piVar4 + 4) + 0x28);
  *(longlong *)(piVar4 + 0x5e) = lVar5 + 0x60;
  *(longlong *)(piVar4 + 0x60) = lVar5 + 0x160;
  *(undefined8 *)(piVar4 + 0x62) =
       *(undefined8 *)(*(longlong *)(*(longlong *)(piVar4 + 4) + 0x28) + 0x808);
  *(longlong *)(piVar4 + 100) = lVar5 + 0x1110;
  *(longlong *)(piVar4 + 0x66) = lVar5 + 0xd38;
  *(longlong *)(piVar4 + 0x68) = lVar5 + 0x880;
  *(longlong *)(piVar4 + 0x6a) = lVar5 + 0xbe0;
  *(undefined8 *)(piVar4 + 0x6c) = *(undefined8 *)(lVar5 + 0xfc0);
  *(undefined8 *)(piVar4 + 0x6e) = *(undefined8 *)(lVar5 + 0xfc8);
  *(longlong *)(piVar4 + 0x72) = lVar5 + 0x12a0;
  iVar9 = piVar4[1];
  if (iVar9 == 0) {
    iVar9 = *piVar4;
  }
  FUN_146f46b04(piVar4 + 0x26,iVar9);
  FUN_146f46b7c(piVar4 + 0x2a);
  plVar1 = (longlong *)(piVar4 + 0x2e);
  iVar3 = piVar4[0x30];
  if (iVar3 < iVar9) {
    piVar4[0x30] = iVar9;
    if ((uint)(piVar4[0x31] - iVar3) < (uint)(iVar9 - iVar3)) {
      FUN_14475e4ac(plVar1);
    }
    memset((void *)((longlong)iVar3 * 4 + *plVar1),0,(longlong)(iVar9 - iVar3) << 2);
  }
  else {
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar9 < iVar3) {
      piVar4[0x30] = iVar9;
      FUN_1401fef06(plVar1);
    }
  }
  FUN_146f46bf4(piVar4,*piVar4);
  FUN_146f46c3e(*(longlong *)(piVar4 + 0x60) + 0x400,local_50,piVar4);
  puVar6 = *(undefined8 **)(piVar4 + 0x26);
  *puVar6 = 0;
  puVar6[1] = 0x10000;
  **(undefined4 **)(piVar4 + 0x2a) = 0x80008000;
  *(undefined1 *)(piVar4 + 0xec) = 0;
  FUN_146f42c04(*(undefined8 *)(lVar10 + 0x10),&local_80);
  FUN_146f162ba((longlong)(int)param_2 * 0x10 + *(longlong *)(param_1 + 0xc18),
                *(undefined4 *)(param_1 + 0xc90),1);
  FUN_142a7c14a(param_1 + 0x880,param_2);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_146f38808(param_1 + 0xca0,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a9d5a2 FUN_142a9d5a2 body=34 status=ok
// SIG undefined FUN_142a9d5a2(void)

undefined8 FUN_142a9d5a2(longlong param_1,undefined8 param_2)

{
  FUN_142a776d0(*(longlong *)(param_1 + 0x28) + 0xb68);
  return param_2;
}



// FUNCTION 142a9d5c4 FUN_142a9d5c4 body=129 status=ok
// SIG undefined FUN_142a9d5c4(void)

void FUN_142a9d5c4(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  if (param_2 != 0) {
    cVar2 = FUN_146f1a26a(*(longlong *)(param_1 + 0x28) + 0xb68);
    if (cVar2 != '\0') {
      iVar3 = FUN_146f18900(*(longlong *)(param_1 + 0x28) + 0x160,param_3);
      if ((iVar3 != 0) && (lVar1 = *(longlong *)(param_1 + 0x28), *(char *)(lVar1 + 0x12e4) == '\0')
         ) {
        FUN_142a77806(lVar1 + 0xb68,param_2,iVar3);
        FUN_142a7d0ae(lVar1 + 0x880,param_2,iVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142a9d645 FUN_142a9d645 body=49 status=ok
// SIG undefined FUN_142a9d645(void)

void FUN_142a9d645(void)

{
  FUN_144760e21(DAT_14c999a48,DAT_14c999a50);
  if (DAT_14c999a48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142a9d676 FUN_142a9d676 body=49 status=ok
// SIG undefined FUN_142a9d676(void)

void FUN_142a9d676(void)

{
  FUN_144760e21(DAT_14c999a68,DAT_14c999a70);
  if (DAT_14c999a68 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142a9d6a8 FUN_142a9d6a8 body=268 status=ok
// SIG undefined FUN_142a9d6a8(void)

longlong FUN_142a9d6a8(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (*param_1 != 0) {
    plVar5 = &DAT_14c999ae0;
    uVar4 = 0;
    do {
      if (*plVar5 == 0) {
        lVar2 = FUN_146f46517(DAT_14c951640);
        *plVar5 = lVar2;
        uVar1 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        FUN_1447f71cc(lVar3,0x40000000);
        if (DAT_14c999a84 < (uint)uVar4) {
          DAT_14c999a84 = (uint)uVar4;
        }
        FUN_146f44c00(lVar2,uVar4 & 0xffffffff,param_1);
        FUN_146f4642c();
        if ((longlong)DAT_14c999a50 != 0) {
          lVar3 = 0;
          while ((*(int *)(DAT_14c999a48 + 8 + lVar3) == 0 ||
                 (*(longlong *)(DAT_14c999a48 + lVar3) == 0))) {
            lVar3 = lVar3 + 0x10;
            if ((longlong)DAT_14c999a50 * 0x10 == lVar3) {
              return lVar2;
            }
          }
          FUN_146f4642c();
          FUN_146f3d30c(&DAT_14c999a48,lVar2);
          return lVar2;
        }
        return lVar2;
      }
      uVar4 = uVar4 + 1;
      plVar5 = plVar5 + 1;
    } while (uVar4 != 0x10);
    FUN_140033559(".\\Runtime/Experimental/Iris/Core/Private/Iris/ReplicationSystem/ReplicationSystem.cpp"
                  ,0x759,L"Too many ReplicationSystems have already been created (%u)",0x10);
  }
  return 0;
}



// FUNCTION 142a9d7b4 FUN_142a9d7b4 body=325 status=ok
// SIG undefined FUN_142a9d7b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9d7b4(longlong param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x48);
    if ((ulonglong)uVar1 < 0x10) {
      (&DAT_14c999ae0)[uVar1] = 0;
      lVar3 = 0;
      auVar5 = (undefined1  [16])0x0;
      do {
        auVar6._0_8_ = -(ulonglong)(*(longlong *)((longlong)&DAT_14c999ae0 + lVar3) == 0);
        auVar6._8_8_ = -(ulonglong)(*(longlong *)((longlong)&DAT_14c999ae8 + lVar3) == 0);
        auVar2._8_4_ = 0xffffffff;
        auVar2._0_8_ = 0xffffffffffffffff;
        auVar2._12_4_ = 0xffffffff;
        auVar5 = auVar5 | auVar6 ^ auVar2;
        lVar3 = lVar3 + 0x10;
      } while (lVar3 != 0x80);
      DAT_14c999a84 = 0;
      if ((_DAT_149934d50 & auVar5) != (undefined1  [16])0x0) {
        DAT_14c999a84 = uVar1;
      }
    }
    FUN_146f464a2();
    if ((longlong)DAT_14c999a70 != 0) {
      lVar3 = 0;
      do {
        if ((*(int *)(DAT_14c999a68 + 8 + lVar3) != 0) &&
           (*(longlong *)(DAT_14c999a68 + lVar3) != 0)) {
          FUN_146f464a2();
          FUN_146f3d30c(&DAT_14c999a68,param_1);
          break;
        }
        lVar3 = lVar3 + 0x10;
      } while ((longlong)DAT_14c999a70 * 0x10 != lVar3);
    }
    FUN_146f45220(param_1);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    FUN_14482b126(lVar3,0x40000000);
    FUN_144757f48(param_1,0x40000000);
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    do {
      uVar1 = *(uint *)(lVar3 + 8);
      if ((uVar1 >> 0x15 & 1) != 0) {
        return;
      }
      LOCK();
      bVar4 = uVar1 == *(uint *)(lVar3 + 8);
      if (bVar4) {
        *(uint *)(lVar3 + 8) = uVar1 | 0x200000;
      }
      UNLOCK();
    } while (!bVar4);
  }
                    /* WARNING: Read-only address (ram,0x000149934d50) is written */
  return;
}



// FUNCTION 142a9d8f9 FUN_142a9d8f9 body=69 status=ok
// SIG undefined FUN_142a9d8f9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9d8f9(void)

{
  _DAT_14c999a88 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a9d93b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999a90,1);
  return;
}



// FUNCTION 142a9d93e FUN_142a9d93e body=69 status=ok
// SIG undefined FUN_142a9d93e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9d93e(void)

{
  _DAT_14c999aa0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a9d980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999aa8,1);
  return;
}



// FUNCTION 142a9d983 FUN_142a9d983 body=69 status=ok
// SIG undefined FUN_142a9d983(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9d983(void)

{
  _DAT_14c999ab0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a9d9c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999ab8,1);
  return;
}



// FUNCTION 142a9d9c8 FUN_142a9d9c8 body=69 status=ok
// SIG undefined FUN_142a9d9c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142a9d9c8(void)

{
  _DAT_14c999ac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142a9da0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c999ac8,1);
  return;
}



// FUNCTION 142a9da0e FUN_142a9da0e body=441 status=ok
// SIG undefined FUN_142a9da0e(void)

undefined8
FUN_142a9da0e(longlong param_1,uint param_2,uint param_3,undefined4 *param_4,byte param_5)

{
  uint *puVar1;
  ulonglong *puVar2;
  char cVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (0 < (int)param_4[2]) {
    if (param_3 == 0) {
      param_3 = param_2;
    }
    uVar7 = 1 << ((byte)param_3 & 0x1f) &
            *(uint *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)(param_3 >> 5) * 4);
    if ((uVar7 != 0) || (*(char *)(param_1 + 0x18) == '\x01')) {
      if ((param_5 & 1) != 0) {
        lVar8 = (longlong)(int)param_3;
        param_3 = 0;
        uVar4 = 0;
        if (5 < (byte)((*(byte *)(*(longlong *)(param_1 + 0x98) + 10 + lVar8 * 0x10) & 0x1e) - 4))
        goto LAB_142a9db38;
      }
      if (uVar7 == 0) {
        param_3 = 0;
      }
      local_38 = *param_4;
      uStack_34 = param_4[1];
      uStack_30 = param_4[2];
      uStack_2c = param_4[3];
      uVar4 = FUN_146f15664(param_1 + 0x110,uVar7 == 0 | param_5 & 1,param_3);
      if (param_3 == 0 || (char)uVar4 != '\x01') goto LAB_142a9db38;
      lVar8 = (longlong)(int)param_3 * 0x10;
      puVar2 = (ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar8);
      *puVar2 = *puVar2 | 0x1000000;
      cVar3 = DAT_14c75f490;
      if (DAT_14c75f490 == '\x01') {
        lVar6 = *(longlong *)(param_1 + 0x98);
        uVar5 = CONCAT71((int7)((ulonglong)lVar8 >> 8),*(undefined1 *)(lVar6 + 10 + lVar8)) &
                0xffffffffffffff1f;
        if ((byte)((char)uVar5 - 1U) < 9) goto LAB_142a9db08;
        uVar4 = CONCAT71((int7)(uVar5 >> 8),1);
        if (param_3 == param_2) goto LAB_142a9db38;
LAB_142a9db5d:
        uVar5 = *(ulonglong *)(lVar6 + 8 + (longlong)(int)param_2 * 0x10);
        if ((byte)(((byte)(uVar5 >> 0x10) & 0x1f) - 1) < 9) goto LAB_142a9db85;
      }
      else {
LAB_142a9db08:
        lVar8 = *(longlong *)(param_1 + 0xe0);
        puVar1 = (uint *)(lVar8 + (ulonglong)(param_3 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)param_3 & 0x1f);
        uVar4 = CONCAT71((int7)((ulonglong)lVar8 >> 8),1);
        if (param_3 == param_2) goto LAB_142a9db38;
        if (cVar3 != '\0') {
          lVar6 = *(longlong *)(param_1 + 0x98);
          goto LAB_142a9db5d;
        }
LAB_142a9db85:
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(param_2 >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
        lVar6 = *(longlong *)(param_1 + 0x98);
        uVar5 = *(ulonglong *)(lVar6 + 8 + (longlong)(int)param_2 * 0x10);
      }
      *(ulonglong *)(lVar6 + 8 + (longlong)(int)param_2 * 0x10) = uVar5 | 0x200000;
      uVar4 = CONCAT71((int7)((ulonglong)((longlong)(int)param_2 * 0x10) >> 8),1);
      goto LAB_142a9db38;
    }
  }
  uVar4 = 0;
LAB_142a9db38:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 142a9dbc8 FUN_142a9dbc8 body=909 status=ok
// SIG undefined FUN_142a9dbc8(void)

void FUN_142a9dbc8(longlong param_1,uint param_2)

{
  byte *pbVar1;
  short *psVar2;
  uint *puVar3;
  ushort uVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  undefined4 uVar21;
  
  lVar20 = (longlong)(int)param_2;
  lVar18 = lVar20 * 0x10;
  puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar18);
  if (param_2 != 0) {
    cVar5 = FUN_146f156ba(param_1 + 0x110,0,param_2);
    if (cVar5 != '\0') {
      FUN_146f1d6c4(param_1 + 0x110,param_2);
    }
  }
  *puVar19 = 0;
  puVar19[1] = 0x500000000;
  uVar9 = 1 << ((byte)param_2 & 0x1f);
  uVar17 = param_2 >> 5;
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x1b0) + (ulonglong)uVar17 * 4) >>
       (param_2 & 0x1f) & 1) == 0) {
    lVar11 = *(longlong *)(param_1 + 0x98);
    uVar16 = 0;
  }
  else {
    iVar6 = FUN_146f46dd2(*(longlong *)(param_1 + 0x180),param_2);
    lVar11 = *(longlong *)(param_1 + 0x98);
    uVar16 = 0x4000000;
    if ((((iVar6 != 0) &&
         (uVar13 = *(ulonglong *)(lVar11 + 8 + (longlong)iVar6 * 0x10),
         ((uint)uVar13 >> 0x1b & 1) != 0)) && ((uVar13 >> 0x10 & 0x1f) != 0)) &&
       (((uint)(uVar13 >> 0x10) & 0x1f) != 0xb)) {
      *(ulonglong *)(lVar11 + 8 + lVar18) =
           *(ulonglong *)(lVar11 + 8 + lVar18) & 0xffffffffffe0ffff | 0xd0000;
      *(byte *)((longlong)puVar19 + 0xb) = *(byte *)((longlong)puVar19 + 0xb) | 0xc;
      psVar2 = (short *)(*(longlong *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x2b0) +
                          (longlong)((int)param_2 / 100) * 8) +
                        (ulonglong)(uint)((int)param_2 % 100) * 2);
      *psVar2 = *psVar2 + 1;
      return;
    }
  }
  *(ulonglong *)(lVar11 + 8 + lVar18) =
       *(ulonglong *)(lVar11 + 8 + lVar18) & 0xffffffffffe0ffff | 0x30000;
  uVar10 = (int)param_2 % 100;
  lVar12 = (longlong)((int)param_2 / 100);
  lVar18 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) + lVar12 * 8);
  lVar11 = (ulonglong)uVar10 * 0x38;
  psVar2 = (short *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x2b0) + lVar12 * 8) +
                    (ulonglong)uVar10 * 2);
  *psVar2 = *psVar2 + 1;
  uVar4 = *(ushort *)(*(longlong *)(lVar18 + 0x10 + lVar11) + 0x24);
  uVar13 = (ulonglong)uVar4 + (puVar19[1] & 0xffffffffffdf0000) + 0x200000;
  puVar19[1] = uVar13;
  uVar14 = (uVar13 & 0xfffffffffe3fffff) +
           (ulonglong)
           ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x168) +
                      (ulonglong)(uVar17 * 4)) & uVar9) != 0) * 0x400000 + 0x800000;
  puVar19[1] = uVar14;
  uVar16 = (*(ushort *)(*(longlong *)(lVar18 + 0x10 + lVar11) + 0x3c) & 4) << 0x17 | uVar16;
  puVar19[1] = uVar14 & 0xfffffffff0ffffff | uVar16;
  uVar15 = (ulonglong)((*(ushort *)(lVar18 + 0x32 + lVar11) & 2) << 0x1b);
  puVar19[1] = uVar14 & 0xffffffc7c0ffffff | uVar16 | uVar15 | 0x1000000000;
  uVar13 = 0x540000000;
  if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 400) + 0x38) + (ulonglong)(uVar17 * 4)) &
      uVar9) == 0) {
    uVar13 = 0x500000000;
  }
  uVar13 = uVar13 | uVar14 & 0xffffffc000ffffff | uVar16 | uVar15 | 0x1000000000;
  puVar19[1] = uVar13;
  if (0x40 < uVar4) {
    uVar7 = FUN_14001cc68(uVar4 + 0x1f >> 3 & 0xfffffffc,4);
    *puVar19 = uVar7;
    uVar13 = (ulonglong)*(ushort *)(puVar19 + 1);
  }
  puVar8 = puVar19;
  if (0x40 < ((uint)uVar13 & 0xffff)) {
    puVar8 = (undefined8 *)*puVar19;
  }
  FUN_146f46d50(puVar8,*(undefined8 *)(lVar18 + lVar11 + 0x10));
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + lVar20 * 4) = 0x80008000;
  uVar21 = 0;
  if (((*(byte *)(lVar18 + lVar11 + 0x32) & 8) == 0) &&
     ((*(byte *)((longlong)puVar19 + 10) & 0x40) == 0)) {
    uVar21 = 0x3f800000;
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + lVar20 * 4) = uVar21;
  puVar3 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)uVar17 * 4);
  *puVar3 = *puVar3 | uVar9;
  if ((param_2 != 0) && ((puVar19[1] & 0x400000) != 0)) {
    uVar9 = *(uint *)(*(longlong *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) + lVar12 * 8) + 0x28 +
                     (longlong)(int)uVar10 * 0x38);
    if ((longlong)(int)uVar9 != 0) {
      lVar18 = *(longlong *)(param_1 + 0x98);
      lVar20 = (longlong)(int)uVar9 * 0x10;
      if ((byte)((*(byte *)(lVar18 + 10 + lVar20) & 0x1f) - 1) < 9) {
        puVar3 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar9 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << ((byte)uVar9 & 0x1f);
        pbVar1 = (byte *)(lVar18 + lVar20 + 10);
        *pbVar1 = *pbVar1 | 0x20;
      }
    }
  }
  return;
}



// FUNCTION 142a9df56 FUN_142a9df56 body=151 status=ok
// SIG undefined FUN_142a9df56(void)

void FUN_142a9df56(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *(uint *)(param_1 + 0xe8);
  uVar8 = 0;
  cVar1 = *(char *)(param_1 + 0xf0);
  if ((ulonglong)uVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xe0);
    uVar6 = 0;
    do {
      uVar7 = 0xffffffff;
      if (uVar6 == uVar2 - 1) {
        uVar7 = 0xffffffff >> (-cVar1 & 0x1fU);
      }
      uVar7 = uVar7 & *(uint *)(lVar3 + uVar6 * 4);
      uVar5 = uVar8;
      if (uVar7 != 0) {
        do {
          if ((uVar7 & 1) != 0) {
            *(float *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar5 * 4) =
                 *(float *)(param_2 + (ulonglong)uVar5 * 4) +
                 *(float *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar5 * 4);
          }
          bVar4 = 1 < uVar7;
          uVar7 = uVar7 >> 1;
          uVar5 = uVar5 + 1;
        } while (bVar4);
      }
      uVar6 = uVar6 + 1;
      uVar8 = uVar8 + 0x20;
    } while (uVar6 != uVar2);
  }
  return;
}



// FUNCTION 142a9dfee FUN_142a9dfee body=357 status=ok
// SIG undefined FUN_142a9dfee(void)

uint FUN_142a9dfee(longlong param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  uint local_58;
  uint local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(param_1 + (ulonglong)param_3 * 8);
  puVar2 = (undefined8 *)(param_1 + (ulonglong)param_2 * 8);
  puVar6 = (undefined8 *)(param_1 + (ulonglong)param_3 * 8 + 0x400);
  puVar7 = puVar2;
  if (puVar6 < puVar2) {
    puVar7 = puVar6;
  }
  if (puVar1 != puVar7) {
    lVar5 = (longlong)puVar7 - (longlong)puVar1;
    local_58 = param_3;
    local_54 = param_2;
    if (0 < lVar5 >> 4) {
      uVar9 = lVar5 >> 4;
      do {
        uVar8 = uVar9 - 1;
        local_50 = puVar1[uVar8];
        FUN_142aa2174(puVar1,uVar8,lVar5 >> 3,&local_50);
        bVar3 = 1 < uVar9;
        uVar9 = uVar8;
      } while (bVar3);
    }
    param_3 = local_58;
    if (puVar6 < puVar2) {
      do {
        if (*(float *)((longlong)puVar1 + 4U) <= *(float *)((longlong)puVar6 + 4) &&
            *(float *)((longlong)puVar6 + 4) != *(float *)((longlong)puVar1 + 4U)) {
          local_50 = *puVar6;
          *puVar6 = *puVar1;
          FUN_142aa2174(puVar1,0,lVar5 >> 3,&local_50);
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 < puVar2);
    }
    param_2 = local_54;
    if (8 < lVar5) {
      do {
        puVar7 = puVar7 + -1;
        local_50 = *puVar7;
        *puVar7 = *puVar1;
        lVar5 = lVar5 + -8;
        FUN_142aa2174(puVar1,0,lVar5 >> 3,&local_50);
      } while (8 < lVar5);
    }
  }
  uVar4 = param_2 - param_3;
  if (0x7f < param_2 - param_3) {
    uVar4 = 0x80;
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142a9e154 FUN_142a9e154 body=1630 status=ok
// SIG undefined FUN_142a9e154(void)

void FUN_142a9e154(longlong param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  byte *pbVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  byte bVar11;
  char cVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  byte bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  longlong local_68;
  int local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = *(ulonglong *)(param_3 + 8);
  bVar11 = (byte)(uVar7 >> 0x10) & 0x1f;
  if ((uVar7 & 0x1f0000) != 0) {
    uVar3 = *(uint *)(param_2 + 8);
    bVar16 = (byte)(uVar3 >> 0x14) & 0x1f;
    uVar10 = uVar3 & 0xfffff;
    if ((uVar3 & 0x60000000) != 0x40000000) {
      uVar15 = uVar3;
      if (((uint)(uVar7 >> 0x1f) & 3) != 2) {
        local_78 = local_78 & 0xffffffff00000000;
        FUN_146f176da(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0xc),uVar10);
        uVar15 = *(uint *)(param_2 + 8);
        uVar7 = *(ulonglong *)(param_3 + 8);
      }
      uVar7 = (uVar7 & 0xfffffff87fffffff) + (ulonglong)(uVar15 & 0x60000000) * 4 | 0x400000000;
      *(ulonglong *)(param_3 + 8) = uVar7;
    }
    if (bVar16 < 4) {
      if (bVar16 == 1) {
        local_78 = param_4;
        FUN_146f15a0e(param_1 + 0x110,0,1,0);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
      }
      if (bVar16 == 2) {
        local_78 = param_4;
        FUN_146f15a0e(param_1 + 0x110,0,2,0);
        local_50 = &local_68;
        local_58 = FUN_142aa220e;
        local_68 = param_1;
        FUN_146f48222(param_1 + 0x318);
        goto LAB_142a9e6b7;
      }
    }
    else if (bVar16 == 4) {
      if (bVar11 == 4) {
        if (((uint)uVar7 >> 0x1a & 1) == 0) {
          if ((*(byte *)(param_2 + 0xb) & 8) == 0) {
            *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) =
                 *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) &
                 0xffffffffffe0ffff | 0x50000;
            if ((*(byte *)(param_3 + 0xb) & 0x10) == 0) {
              if ((*(uint *)(*(longlong *)(param_1 + 200) + (ulonglong)(uVar10 >> 5) * 4) >>
                   (uVar3 & 0x1f) & 1) != 0) {
                *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) =
                     *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) &
                     0xffffffffffe0ffff | 0x60000;
              }
            }
            else {
              *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) =
                   *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) &
                   0xffffffffffe0ffff | 0x60000;
            }
          }
          else {
            if (((uint)uVar7 >> 0x16 & 1) != 0) {
              lVar14 = *(longlong *)
                        (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                        ((ulonglong)uVar10 / 100) * 8);
              lVar8 = (ulonglong)(uVar10 % 100) * 0x38;
              uVar15 = *(uint *)(lVar14 + 0x28 + lVar8);
              if (((longlong)(int)uVar15 != 0) && ((*(byte *)(lVar14 + lVar8 + 0x32) & 4) != 0)) {
                lVar14 = *(longlong *)(param_1 + 0x98);
                lVar8 = (longlong)(int)uVar15 * 0x10;
                if ((byte)((*(byte *)(lVar14 + 10 + lVar8) & 0x1f) - 1) < 9) {
                  puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar15 >> 5) * 4);
                  *puVar2 = *puVar2 | 1 << ((byte)uVar15 & 0x1f);
                  pbVar1 = (byte *)(lVar14 + lVar8 + 10);
                  *pbVar1 = *pbVar1 | 0x20;
                }
              }
            }
            uVar7 = (ulonglong)(uVar10 << 4);
            *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + uVar7) =
                 *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + uVar7) & 0xffffffffffe0ffff |
                 0x70000;
            *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + uVar7) =
                 *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + uVar7) & 0xffffffffffe0ffff |
                 0xc0000;
            FUN_146f46e4c(param_1,uVar10);
          }
        }
        else {
          *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) =
               *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) &
               0xffffffffffe0ffff | 0xd0000;
        }
      }
      *(byte *)(param_3 + 0xb) = *(byte *)(param_3 + 0xb) | 8;
    }
    else if (bVar16 == 0xb) {
      *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) =
           *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) &
           0xffffffffffe0ffff | 0xc0000;
      FUN_146f46e4c(param_1,uVar10);
      if (bVar11 == 9) {
        FUN_142a9dbc8(param_1,uVar10);
        puVar2 = (uint *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)(uVar10 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
      }
    }
    if ((*(byte *)(param_2 + 0xb) & 4) != 0) {
      local_78 = param_4;
      FUN_146f15a0e(param_1 + 0x110,0,0,uVar10);
    }
    uVar7 = *(ulonglong *)(param_3 + 8);
    uVar15 = (uint)uVar7;
    if ((uVar15 & 0x1f0000) == 0x60000) {
      uVar4 = *(uint *)(param_2 + 8);
      bVar17 = (uVar4 >> 0x19 & 1) != 0;
      bVar19 = (uVar7 & 0x800000) != 0;
      bVar18 = (uVar7 >> 0x23 & 1) != 0;
      if ((char)((uVar15 & 0x800000) >> 0x17) == '\0' && (bVar18 && (bVar19 || bVar17))) {
        if (*(ushort *)(param_2 + 0xc) != 0x8000) {
          uVar13 = (uint)*(ushort *)(param_2 + 0xc) - (uint)*(ushort *)(param_1 + 0x90);
          while (lVar14 = (ulonglong)
                          (*(uint *)(param_1 + 0x38) & *(int *)(param_1 + 0x34) + (uVar13 & 0x7fff))
                          * 0x10 + *(longlong *)(param_1 + 0x40), lVar14 != 0) {
            if ((*(byte *)(lVar14 + 0xb) & 2) != 0) {
              cVar12 = '\x01';
              goto LAB_142a9e493;
            }
            if (*(ushort *)(lVar14 + 0xc) == 0x8000) break;
            uVar13 = (uint)*(ushort *)(lVar14 + 0xc) - (uint)*(ushort *)(param_1 + 0x90);
          }
        }
        cVar12 = FUN_146f49b96(param_1 + 0x318,uVar10,1);
      }
      else {
        cVar12 = bVar18 && (bVar19 || bVar17);
      }
LAB_142a9e493:
      if (((uVar7 >> 0x24 & 1) == 0) || ((uVar15 >> 0x18 & 1) == 0 && (uVar4 >> 0x1a & 1) == 0)) {
        if (cVar12 != '\0') goto LAB_142a9e6b7;
      }
      else {
        cVar5 = FUN_146f1575a(param_1 + 0x110,0,uVar10);
        if (cVar12 != '\0' || cVar5 != '\x01') goto LAB_142a9e6b7;
      }
      if ((uVar15 >> 0x16 & 1) == 0) {
        FUN_146f1b984(*(longlong *)(param_1 + 0x180) + 0x300,&local_68,uVar10);
        lVar14 = local_68;
        if ((longlong)local_60 != 0) {
          lVar8 = 0;
          do {
            iVar6 = FUN_146f46fb6(param_1,(longlong)*(int *)(lVar14 + lVar8),
                                  (longlong)*(int *)(lVar14 + lVar8) * 0x10 +
                                  *(longlong *)(param_1 + 0x98),
                                  (uint)((ulonglong)*(undefined8 *)(param_3 + 8) >> 0x23) & 7);
            if (iVar6 != 0) goto LAB_142a9e6b7;
            lVar8 = lVar8 + 4;
          } while ((longlong)local_60 * 4 != lVar8);
        }
        uVar7 = *(ulonglong *)(param_3 + 8);
      }
      if (((uint)uVar7 >> 0x1c & 1) == 0) {
        FUN_146f4719e(param_1,uVar10,param_3);
      }
      else {
        *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) =
             *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + (ulonglong)(uVar10 << 4)) &
             0xffffffffffe0ffff | 0x70000;
        puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar10 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
        if ((*(byte *)(param_3 + 10) & 0x40) != 0) {
          lVar14 = *(longlong *)
                    (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                    ((ulonglong)uVar10 / 100) * 8);
          lVar9 = (ulonglong)(uVar10 % 100) * 0x38;
          uVar3 = *(uint *)(lVar14 + 0x28 + lVar9);
          lVar8 = (longlong)(int)uVar3;
          if ((lVar8 != 0) && ((*(byte *)(lVar14 + lVar9 + 0x32) & 4) != 0)) {
            lVar14 = *(longlong *)(param_1 + 0x98);
            if ((DAT_14c75f490 != '\x01') ||
               (uVar7 = *(ulonglong *)(lVar14 + 8 + lVar8 * 0x10),
               (byte)(((byte)(uVar7 >> 0x10) & 0x1f) - 1) < 9)) {
              puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar3 >> 5) * 4);
              *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
              uVar7 = *(ulonglong *)(lVar14 + 8 + lVar8 * 0x10);
            }
            *(ulonglong *)(lVar14 + 8 + lVar8 * 0x10) = uVar7 | 0x200000;
          }
        }
      }
    }
  }
LAB_142a9e6b7:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142a9e7b8 FUN_142a9e7b8 body=530 status=ok
// SIG undefined FUN_142a9e7b8(void)

ulonglong FUN_142a9e7b8(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  ulonglong uVar6;
  uint *puVar7;
  ulonglong uVar8;
  undefined1 auStack_88 [40];
  uint *local_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)(int)param_2 * 0x10);
  if ((((byte)((ulonglong)uVar2 >> 0x10) & 0x1f) < 0xc) &&
     ((0xa10U >> ((uint)((ulonglong)uVar2 >> 0x10) & 0x1f) & 1) != 0)) {
LAB_142a9e80d:
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    cVar5 = FUN_146f49b96(param_1 + 0x318,param_2,0);
    if ((((uint)uVar2 >> 0x16 & 1) != 0) || (cVar5 == '\0')) {
      if (((uint)uVar2 >> 0x15 & 1) != 0) {
        FUN_146f1b984(*(longlong *)(param_1 + 0x180) + 0x300,&local_58,param_2);
        puVar7 = local_58;
        uVar6 = 0;
        if ((longlong)(int)local_50 != 0) {
          uVar6 = (longlong)(int)local_50 * 4;
          uVar8 = 0;
          do {
            cVar5 = FUN_142a9e7b8(param_1,*(undefined4 *)((longlong)puVar7 + uVar8));
            if (cVar5 == '\0') goto LAB_142a9e80d;
            uVar8 = uVar8 + 4;
          } while (uVar6 != uVar8);
        }
      }
      lVar3 = *(longlong *)(param_1 + 0x180);
      local_4c = *(uint *)(lVar3 + 0x1a8);
      local_58 = *(uint **)(lVar3 + 0x198);
      local_50 = local_4c + 0x1f >> 5;
      if (local_4c == 0) {
        local_58 = &local_4c;
      }
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
      if ((local_58[param_2 >> 5] >> (param_2 & 0x1f) & 1) != 0) {
        FUN_146f3d3b0(lVar3 + 0x300,&local_58,param_2);
        if ((longlong)(int)local_50 != 0) {
          local_60 = local_58 + (longlong)(int)local_50 * 2;
          puVar7 = local_58;
          do {
            uVar1 = *puVar7;
            uVar4 = puVar7[1];
            if (((((*(uint *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)(uVar1 >> 5) * 4) >>
                    (uVar1 & 0x1f) & 1) == 0) ||
                 (cVar5 = FUN_146f49b96(param_1 + 0x318,uVar1,0), cVar5 != '\0')) &&
                ((byte)((*(byte *)(*(longlong *)(param_1 + 0x98) + 10 + (longlong)(int)uVar1 * 0x10)
                        & 0x1f) - 3) < 2)) &&
               ((cVar5 = FUN_142a9e7b8(param_1,uVar1), cVar5 == '\0' ||
                (((char)uVar4 == '\x01' &&
                 ((*(uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar1 >> 5) * 4) &
                  1 << ((byte)uVar1 & 0x1f)) != 0)))))) goto LAB_142a9e80d;
            puVar7 = puVar7 + 2;
          } while (puVar7 != local_60);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 142a9e9cc FUN_142a9e9cc body=5655 status=ok
// SIG undefined FUN_142a9e9cc(void)

uint FUN_142a9e9cc(longlong param_1,void *param_2,uint param_3,uint param_4,ulonglong param_5)

{
  byte *pbVar1;
  uint *puVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint **ppuVar16;
  longlong lVar17;
  int iVar18;
  longlong lVar19;
  uint *puVar20;
  undefined8 *puVar21;
  byte bVar22;
  uint uVar23;
  undefined4 *puVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  byte bVar27;
  longlong lVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined1 auStack_298 [32];
  undefined8 local_278;
  undefined4 *local_270;
  uint *local_268;
  uint local_254;
  longlong local_250;
  void *local_248;
  undefined8 *local_240;
  uint *local_238;
  uint local_230;
  byte local_229;
  ulonglong *local_228;
  ulonglong local_220;
  ulonglong local_218;
  uint **local_210;
  uint local_204;
  undefined4 *local_200;
  int local_1f8;
  int local_1f4;
  longlong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  void *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  ulonglong uStack_1c0;
  undefined8 local_1b8;
  longlong lStack_1b0;
  LARGE_INTEGER local_1a8;
  uint *local_1a0;
  uint local_198;
  uint auStack_194 [29];
  uint **local_120;
  undefined8 local_118;
  undefined8 local_c8;
  void **local_c0;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int iStack_60;
  uint uStack_5c;
  uint local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  puVar20 = *(uint **)(param_1 + 0x98);
  lVar28 = (longlong)(int)param_3;
  uVar13 = *(ulonglong *)(puVar20 + (lVar28 * 2 + 1) * 2);
  ppuVar16 = (uint **)(uVar13 >> 0x10 & 0xff1f);
  uVar15 = 1;
  if (8 < (byte)((char)ppuVar16 - 1U)) goto LAB_142a9edd4;
  puVar21 = *(undefined8 **)((longlong)param_2 + 0xe0);
  lVar30 = *(longlong *)(param_1 + 0x180);
  lVar17 = *(longlong *)(*(longlong *)(lVar30 + 0x270) + (longlong)((int)param_3 / 100) * 8);
  lVar19 = (ulonglong)(uint)((int)param_3 % 100) * 0x38;
  local_228 = (ulonglong *)(lVar17 + lVar19);
  uVar25 = *(ulonglong *)(lVar17 + lVar19);
  uVar15 = *(uint *)((ulonglong)((param_4 & 8) >> 1) + 0x24 + param_1);
  local_1e0 = (ulonglong)uVar15;
  local_1f4 = *(int *)(puVar21 + 2) - *(int *)((longlong)puVar21 + 0xc);
  local_210 = ppuVar16;
  local_204 = param_4;
  local_1f0 = lVar28;
  if (((uint)uVar13 >> 0x16 & 1) == 0) {
    local_1a0 = (uint *)((ulonglong)local_1a0 & 0xffffffffffffff00);
    local_250 = param_1;
    local_238 = puVar20;
    local_220 = uVar25;
    local_218 = uVar13;
    FUN_146f5435e(puVar21,0,1);
    FUN_146f5aa41(*(undefined8 *)((longlong)param_2 + 0xe0),local_220 & 0xfffffffffffffff);
    local_1e8 = (ulonglong)(uint)(*(int *)(puVar21 + 2) - *(int *)((longlong)puVar21 + 0xc));
    FUN_146f5435e(puVar21,0,local_1e0);
    local_1a0 = (uint *)((ulonglong)local_1a0 & 0xffffffffffffff00);
    FUN_146f5435e(puVar21,0,1);
    local_1a0 = (uint *)((ulonglong)local_1a0 & 0xffffffffffffff00);
    FUN_146f5435e(puVar21,0,1);
    lVar30 = *(longlong *)(local_250 + 0x180);
    uVar25 = local_220;
    puVar20 = local_238;
    uVar13 = local_218;
    param_1 = local_250;
  }
  else {
    local_1e8 = 0;
    local_58 = uVar15;
  }
  local_58 = local_58 & 0xfffffe00;
  uStack_68 = 0;
  uStack_64 = 0;
  iStack_60 = 0;
  uStack_5c = uStack_5c & 0xffffff00;
  local_78 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  local_1b8 = 0;
  lStack_1b0 = 0;
  puVar24 = *(undefined4 **)
             (*(longlong *)(*(longlong *)(lVar30 + 0x290) + (longlong)((int)param_3 / 100) * 8) +
             (ulonglong)(uint)((int)param_3 % 100) * 8);
  uVar29 = (ulonglong)param_3;
  if ((param_3 == 0) || (uVar15 = 3, local_228[2] != 0)) {
    puVar20 = puVar20 + lVar28 * 4;
    bVar22 = (char)local_210 - 3;
    ppuVar16 = (uint **)CONCAT71((int7)((ulonglong)local_210 >> 8),bVar22);
    local_229 = 1 < bVar22;
    uVar26 = *(ulonglong *)(puVar20 + 2);
    local_220 = uVar25;
    local_218 = uVar13;
    if ((!(bool)local_229 || (uVar26 & 0x4000800000) != 0) && ((uVar26 & 0x2000000) != 0)) {
      local_268 = (uint *)CONCAT71(local_268._1_7_,bVar22 < 2);
      local_278 = local_228[2];
      local_270 = puVar24;
      local_210 = ppuVar16;
      FUN_146f49804(param_1,*(undefined4 *)(param_5 + 0x290),uVar29,puVar20);
      uVar26 = *(ulonglong *)(puVar20 + 2);
      ppuVar16 = local_210;
    }
    if ((uVar26 & 0x4000400000) == 0x4000000000) {
      local_254 = param_3;
      local_250 = param_1;
      local_248 = param_2;
      local_240 = puVar21;
      local_238 = puVar20;
      local_200 = puVar24;
      FUN_146f1b984(*(longlong *)(param_1 + 0x180) + 0x300,&local_1a0,uVar29);
      puVar20 = local_1a0;
      lVar28 = (longlong)(int)local_198;
      param_1 = local_250;
      if (lVar28 != 0) {
        lVar30 = 0;
        local_210 = ppuVar16;
        do {
          uVar15 = *(uint *)((longlong)puVar20 + lVar30);
          if ((*(uint *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)(uVar15 >> 5) * 4) >>
               (uVar15 & 0x1f) & 1) != 0) {
            lVar17 = *(longlong *)(param_1 + 0x98);
            lVar19 = (longlong)(int)uVar15 * 0x10;
            if (((byte)((*(byte *)(lVar17 + 10 + lVar19) & 0x1f) - 1) < 9) &&
               (cVar7 = FUN_142a9e7b8(param_1), ppuVar16 = local_210, param_1 = local_250,
               cVar7 != '\0')) {
              if ((DAT_14c75f490 != '\x01') ||
                 ((byte)((*(byte *)(*(longlong *)(local_250 + 0x98) + 10 + lVar19) & 0x1f) - 1) < 9)
                 ) {
                puVar2 = (uint *)(*(longlong *)(local_250 + 0xe0) + (ulonglong)(uVar15 >> 5) * 4);
                *puVar2 = *puVar2 | 1 << ((byte)uVar15 & 0x1f);
              }
              puVar12 = (ulonglong *)(lVar17 + lVar19 + 8);
              *puVar12 = *puVar12 | 0x4000000000;
            }
            *(byte *)((longlong)local_238 + 10) = *(byte *)((longlong)local_238 + 10) | 0x20;
          }
          lVar30 = lVar30 + 4;
        } while (lVar28 << 2 != lVar30);
      }
      uVar26 = *(ulonglong *)(local_238 + 2);
      uVar29 = (ulonglong)local_254;
      puVar20 = local_238;
      puVar24 = local_200;
      param_2 = local_248;
      puVar21 = local_240;
    }
    *(ulonglong *)(puVar20 + 2) = uVar26 & 0xffffffbfffffffff;
    bVar22 = (byte)ppuVar16;
    if ((bVar22 < 2) || ((uVar26 & 0x800000) != 0)) {
      bVar27 = (byte)local_204 & 1;
    }
    else {
      bVar27 = 0;
    }
    uVar23 = (uint)uVar29;
    bVar6 = (byte)(uVar26 >> 0x18) & 1 | uVar23 == 0;
    if (bVar6 == 0) {
      cVar7 = '\0';
    }
    else {
      cVar7 = (char)((local_204 & 2) >> 1);
    }
    uStack_5c = CONCAT31(uStack_5c._1_3_,bVar6);
    if (((uint)uVar26 >> 0x1c & 1) == 0) {
      uVar13 = 0;
    }
    else {
      local_240 = puVar21;
      local_238 = puVar20;
      iVar9 = FUN_146f46fb6(param_1,uVar29,puVar20,(uint)(uVar26 >> 0x23) & 3 | 4);
      uVar13 = CONCAT71((int7)((ulonglong)ppuVar16 >> 8),iVar9 == 0);
      puVar20 = local_238;
      puVar21 = local_240;
    }
    *(uint *)((longlong)param_2 + 0x120) =
         *(uint *)((longlong)param_2 + 0x120) & 0xfffffffe | (uint)(bVar22 < 2);
    uVar11 = 2;
    if ((*(ulonglong *)(puVar20 + 2) >> 0x1d & 1) == 0 &&
        ((bVar27 == 0 && cVar7 == '\0') && (char)uVar13 == '\0')) {
LAB_142a9ec3f:
      iVar9 = *(int *)(param_5 + 0x288);
      lVar28 = (longlong)iVar9;
      *(uint *)(param_5 + 0x288) = iVar9 + 1U;
      if (*(uint *)(param_5 + 0x28c) < iVar9 + 1U) {
        local_230 = (uint)uVar13;
        local_254 = uVar23;
        local_210 = ppuVar16;
        FUN_146f53198(param_5,iVar9);
        uVar29 = (ulonglong)local_254;
        uVar13 = (ulonglong)local_230;
        ppuVar16 = local_210;
      }
      iVar9 = (int)uVar29;
      uVar25 = *(ulonglong *)(param_5 + 0x280);
      if (*(ulonglong *)(param_5 + 0x280) == 0) {
        uVar25 = param_5;
      }
      puVar24 = (undefined4 *)(uVar25 + lVar28 * 0x28);
      *puVar24 = (undefined4)local_78;
      puVar24[1] = local_78._4_4_;
      puVar24[2] = uStack_70;
      puVar24[3] = uStack_6c;
      *(ulonglong *)(uVar25 + 0x20 + lVar28 * 0x28) = CONCAT44(uStack_54,local_58);
      puVar24 = (undefined4 *)(uVar25 + 0x10 + lVar28 * 0x28);
      *puVar24 = uStack_68;
      puVar24[1] = uStack_64;
      puVar24[2] = iStack_60;
      puVar24[3] = uStack_5c;
      *(int *)(uVar25 + 8 + lVar28 * 0x28) = iVar9;
      uVar15 = ((uint)uVar13 & 0xff) * 0x40 + (uint)((byte)ppuVar16 < 2) * 4 | local_58 & 0xffffff9b
      ;
      *(uint *)(uVar25 + 0x20 + lVar28 * 0x28) = uVar15;
      *(uint *)(uVar25 + 0x20 + lVar28 * 0x28) =
           uVar15 & 0xffffff5c | uVar11 | puVar20[2] >> 0x16 & 0x80;
      if (iVar9 != 0) {
        puVar2 = (uint *)(*(longlong *)(param_1 + 0x1d0) + (uVar29 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar29 & 0x1f);
      }
      iVar18 = 0;
      if ((puVar20[2] & 0x600000) == 0x200000) {
        local_1f0 = CONCAT44(local_1f0._4_4_,*(undefined4 *)((longlong)puVar21 + 0xc));
        iVar18 = *(int *)(puVar21 + 2);
        local_120 = (uint **)0x0;
        local_118 = 0x2000000000;
        local_250 = param_1;
        local_248 = param_2;
        local_238 = puVar20;
        local_230 = (uint)uVar13;
        FUN_146f16782(*(undefined8 *)(param_1 + 0x1a8),*(undefined4 *)(param_1 + 0xc),uVar29,
                      &local_1a0);
        local_210 = local_120;
        if (local_120 == (uint **)0x0) {
          local_210 = &local_1a0;
        }
        lVar30 = (longlong)(int)local_118;
        param_2 = local_248;
        if (lVar30 == 0) {
          uVar15 = 0;
        }
        else {
          local_220 = CONCAT44(local_220._4_4_,iVar18);
          lVar19 = 0;
          local_228 = (ulonglong *)0x0;
          lVar17 = local_250;
          do {
            uVar15 = *(uint *)((longlong)local_210 + lVar19);
            if ((*(uint *)(*(longlong *)(lVar17 + 0xe0) + (ulonglong)(uVar15 >> 5) * 4) >>
                 (uVar15 & 0x1f) & 1) != 0) {
              iVar18 = *(int *)(param_5 + 0x288);
              local_278 = param_5;
              uVar15 = FUN_142a9e9cc(lVar17,param_2,uVar15,local_204);
              param_2 = local_248;
              if (1 < uVar15) {
                bVar5 = false;
                iVar18 = 0;
                goto LAB_142a9f4f0;
              }
              iVar3 = *(int *)(param_5 + 0x288);
              lVar17 = local_250;
              if (iVar18 < iVar3) {
                uVar13 = *(ulonglong *)(param_5 + 0x280);
                if (*(ulonglong *)(param_5 + 0x280) == 0) {
                  uVar13 = param_5;
                }
                uVar25 = 1;
                if ((*(byte *)((uVar13 - 8) + (longlong)iVar3 * 0x28) & 0x20) == 0) {
                  uVar25 = (ulonglong)*(uint *)((uVar13 - 0xc) + (longlong)iVar3 * 0x28);
                }
                local_228 = (ulonglong *)
                            CONCAT71((int7)(uVar25 >> 8),(byte)uVar25 | (byte)local_228);
              }
            }
            lVar19 = lVar19 + 4;
          } while (lVar30 * 4 != lVar19);
          uVar15 = ((byte)local_228 & 1) << 5;
          iVar18 = (int)local_220;
        }
        iVar18 = ((int)local_1f0 + *(int *)(puVar21 + 2)) -
                 (iVar18 + *(int *)((longlong)puVar21 + 0xc));
        uVar13 = *(ulonglong *)(param_5 + 0x280);
        if (*(ulonglong *)(param_5 + 0x280) == 0) {
          uVar13 = param_5;
        }
        puVar20 = (uint *)(uVar13 + 0x20 + lVar28 * 0x28);
        *puVar20 = *puVar20 | uVar15;
        uVar15 = 2;
        bVar5 = true;
LAB_142a9f4f0:
        uVar23 = local_230;
        if (local_120 != (uint **)0x0) {
          FUN_1400020a8();
          param_2 = local_248;
        }
        uVar13 = (ulonglong)uVar23;
        puVar20 = local_238;
        param_1 = local_250;
        if (!bVar5) goto LAB_142a9edc9;
      }
      uVar14 = DAT_14c999ad0;
      if (*(int *)(param_5 + 0x290) == iVar9) {
        uVar25 = *(ulonglong *)(param_5 + 0x280);
        if (*(ulonglong *)(param_5 + 0x280) == 0) {
          uVar25 = param_5;
        }
        bVar22 = 1;
        if ((char)uVar13 == '\0' && (*(byte *)(uVar25 + 0x20 + lVar28 * 0x28) & 0x18) == 0) {
          bVar22 = ((byte)(*(ulonglong *)(puVar20 + 2) >> 0x18) & 0x20) >> 5;
          if ((iVar18 == 0) && ((*(ulonglong *)(puVar20 + 2) & 0x20000000) == 0)) {
            FUN_146f5b2fa(puVar21,local_1f4);
            goto LAB_142a9edc6;
          }
        }
        uVar15 = ~(-1 << ((byte)local_1e0 & 0x1f));
        if ((int)local_1e0 == 0x20) {
          uVar15 = 0xffffffff;
        }
        uVar23 = *(int *)(puVar21 + 2) -
                 ((int)local_1e0 + (int)local_1e8 + *(int *)((longlong)puVar21 + 0xc));
        if (uVar23 < uVar15) {
          iVar9 = FUN_142a845f4(*(undefined8 *)(param_1 + 0x198),param_2,uVar29);
          uVar15 = 2;
          if (iVar9 != 1) {
            if (((uint)local_218 >> 0x16 & 1) == 0) {
              iVar18 = *(int *)(puVar21 + 2);
              iVar3 = *(int *)((longlong)puVar21 + 0xc);
              FUN_146f5b2fa(puVar21,local_1e8);
              FUN_146f5435e(puVar21,uVar23,local_1e0);
              local_1a0._0_1_ = bVar22;
              FUN_146f5435e(puVar21,bVar22 != 0,1);
              local_1a0 = (uint *)CONCAT71(local_1a0._1_7_,iVar9 == 0);
              FUN_146f5435e(puVar21,iVar9 == 0,1);
              FUN_146f5b2fa(puVar21,iVar18 - iVar3);
            }
            pbVar1 = (byte *)(uVar25 + lVar28 * 0x28 + 0x21);
            *pbVar1 = *pbVar1 | 1;
            goto LAB_142a9edc6;
          }
        }
        else {
          FUN_146f5b89e(param_2);
          if (*(longlong *)((longlong)param_2 + 8) == 0) {
            *(undefined8 *)((longlong)param_2 + 8) = uVar14;
          }
          uVar15 = 2;
          if (*(int *)(puVar21 + 3) == 0) {
            FUN_146f5b2fa(puVar21,*(int *)(puVar21 + 1) + 1);
          }
        }
      }
      else {
LAB_142a9edc6:
        uVar15 = 0;
      }
    }
    else {
      local_250 = param_1;
      local_248 = param_2;
      local_240 = puVar21;
      local_238 = puVar20;
      local_200 = puVar24;
      if (((uint)*(ulonglong *)(puVar20 + 2) >> 0x16 & 1) != 0) {
        FUN_146f5aa41(*(undefined8 *)((longlong)param_2 + 0xe0),local_220 & 0xfffffffffffffff);
      }
      puVar21 = local_240;
      local_1f8 = *(int *)(local_240 + 2) - *(int *)((longlong)local_240 + 0xc);
      if (uVar23 != 0) {
        FUN_146f5435e(local_240,0,3);
      }
      local_1a0 = (uint *)CONCAT71(local_1a0._1_7_,bVar27);
      FUN_146f5435e(puVar21,bVar27 != 0,1);
      local_254 = 2;
      if ((byte)local_1a0 == '\0') {
LAB_142a9f1c5:
        iVar9 = *(int *)(puVar21 + 2);
        iVar18 = *(int *)((longlong)puVar21 + 0xc);
        local_1a0 = (uint *)CONCAT71(local_1a0._1_7_,cVar7);
        FUN_146f5435e(puVar21,cVar7 != '\0',1);
        if (*(int *)(puVar21 + 3) == 0 && cVar7 == '\x01') {
          local_230 = (uint)uVar13;
          local_1d8 = (void *)*local_240;
          local_1c8 = local_240[2];
          uStack_1c0 = local_240[3] & 0xfffffffcffffffff | 0x200000000;
          *(byte *)((longlong)local_240 + 0x1c) = *(byte *)((longlong)local_240 + 0x1c) | 1;
          uStack_1d0 = CONCAT44(*(undefined4 *)(local_240 + 2),*(undefined4 *)(local_240 + 1));
          memcpy(&local_1a0,local_248,0x128);
          local_c8 = 0;
          iStack_60 = 0;
          local_c0 = &local_1d8;
          if (uVar23 == 0) {
            iStack_60 = 2 - (uint)((local_204 & 4) == 0);
            local_1a8.s.LowPart._0_1_ = (undefined1)((local_204 & 4) >> 2);
            FUN_146f5435e(&local_1d8,local_1a8.s.LowPart._0_1_ != '\0',1);
          }
          lVar28 = local_250 + 0x110;
          local_278 = local_220;
          local_270 = &uStack_6c;
          local_268 = &uStack_5c;
          iVar10 = FUN_146f159ae(lVar28,&local_1a0,iStack_60,uVar29);
          iVar3 = iStack_60;
          uVar15 = local_230;
          puVar20 = local_238;
          uVar13 = (ulonglong)local_230;
          if (iStack_60 == 2) {
            if (iVar10 == 2) {
              QueryPerformanceCounter(&local_1a8);
              uVar14 = CONCAT71(local_1a8.QuadPart._1_7_,local_1a8.s.LowPart._0_1_);
            }
            else {
              uVar14 = 0;
            }
            *(undefined8 *)(local_250 + 0x328) = uVar14;
          }
          puVar21 = local_240;
          if (((uint)local_1c8 == uStack_1d0._4_4_) || ((int)uStack_1c0 != 0)) {
            local_58 = local_58 & 0xffffffef;
            uVar11 = 0;
            if (*(int *)(local_240 + 3) == 0) {
              uVar11 = *(int *)(local_240 + 1) - *(int *)(local_240 + 2);
            }
            FUN_146f5b442(local_240,&local_1d8);
            iVar3 = *(int *)(puVar21 + 2);
            iVar10 = *(int *)((longlong)puVar21 + 0xc);
            FUN_146f5b2fa(puVar21,iVar9 - iVar18);
            local_1a8.s.LowPart._0_1_ = '\0';
            FUN_146f5435e(puVar21,0,1);
            FUN_146f5b2fa(puVar21,iVar3 - iVar10);
            puVar20 = local_238;
            uVar25 = *(ulonglong *)(local_238 + 2);
            *(ulonglong *)(local_238 + 2) =
                 uVar25 & 0xfffffffffeffffff | (ulonglong)(uStack_5c << 0x18);
            if (((iStack_60 == 2) || ((char)uStack_5c == '\0')) ||
               (uVar11 < (uint)(*(int *)(*(longlong *)(*(longlong *)(local_250 + 0x1b0) + 0x40) +
                                        0x30) * 2))) {
              if (((local_58 & 8) == 0 && (char)uVar15 == '\0') &&
                 (iVar9 = local_1f4,
                 (uVar25 & 0x20200000) == 0 && ((uint)local_218 >> 0x16 & 1) != 0))
              goto LAB_142a9ffc3;
            }
            else if (*(int *)(local_240 + 3) == 0) {
              iVar9 = *(int *)(local_240 + 1) + 1;
LAB_142a9ffc3:
              FUN_146f5b2fa(local_240,iVar9);
            }
          }
          else {
            local_58 = local_58 | 0x10;
            FUN_146f5b3a6(local_240,&local_1d8);
            bVar22 = FUN_146f156ba(lVar28,iVar3,uVar29);
            *(ulonglong *)(puVar20 + 2) =
                 *(ulonglong *)(puVar20 + 2) & 0xfffffffffeffffff | (ulonglong)bVar22 << 0x18;
          }
          if (((uint)local_1c8 < ((int)uStack_1d0 + 0x1fU & 0xffffffe0)) &&
             ((uStack_1c0 & 0x400000000) == 0)) {
            *(undefined4 *)((longlong)local_1d8 + (ulonglong)((uint)local_1c8 >> 5) * 4) =
                 local_1c8._4_4_;
          }
          iVar9 = *(int *)(local_240 + 3);
        }
        else {
          uVar15 = 2;
          if (*(int *)(puVar21 + 3) != 0) goto LAB_142a9f934;
          iVar9 = 0;
          puVar20 = local_238;
        }
        puVar21 = local_240;
        param_1 = local_250;
        param_2 = local_248;
        uVar11 = local_254;
        if ((uVar23 != 0) && (iVar9 == 0)) {
          if ((char)uVar13 == '\0') {
            if (((uint)*(longlong *)(puVar20 + 2) >> 0x1d & 1) != 0) {
              uVar15 = 2;
LAB_142a9fecc:
              if ((*local_228 != 0 && (*local_228 & 1) == 0) ||
                 (uVar11 = 0,
                 (*(uint *)(*(longlong *)(*(longlong *)(local_250 + 0x180) + 0x1b0) +
                           (uVar29 >> 5) * 4) >> (uVar23 & 0x1f) & 1) != 0)) {
                uVar11 = 4;
              }
              uVar11 = uVar15 | uVar11;
              goto LAB_142a9ff08;
            }
            if ((((uint)local_218 >> 0x16 & 1) != 0) || ((local_58 & 0x18) != 0))
            goto LAB_142a9ec3f;
          }
          else {
            uVar15 = 3;
            uVar11 = 1;
            if (((uint)*(longlong *)(puVar20 + 2) >> 0x1d & 1) != 0) goto LAB_142a9fecc;
LAB_142a9ff08:
            iVar9 = *(int *)(local_240 + 2);
            iVar18 = *(int *)((longlong)local_240 + 0xc);
            FUN_146f5b2fa(local_240,local_1f8);
            FUN_146f5435e(puVar21,uVar11,3);
            puVar20 = local_238;
            local_1f8 = iVar9 - iVar18;
          }
          puVar21 = local_240;
          FUN_146f5b2fa(local_240,local_1f8);
          param_1 = local_250;
          param_2 = local_248;
          uVar11 = local_254;
          goto LAB_142a9ec3f;
        }
        uVar15 = 2;
        if (iVar9 == 0) goto LAB_142a9ec3f;
      }
      else {
        local_58 = local_58 | 8;
        uVar25 = *(ulonglong *)(local_238 + 2);
        local_230 = (uint)uVar13;
        if (((uint)uVar25 >> 0x1e & 1) == 0) {
          local_254 = 2;
        }
        else {
          if ((uVar25 & 0x180000000) == 0x100000000) {
            local_254 = 2;
          }
          else {
            local_254 = 2;
            local_278 = CONCAT44(local_278._4_4_,(int)(uVar25 >> 0x1f)) & 0xffffffff00000003;
            FUN_146f177c8(*(undefined8 *)(local_250 + 400),&local_1b8,
                          *(undefined4 *)(local_250 + 0xc),uVar29);
            puVar20 = local_238;
            if (lStack_1b0 == 0) {
              FUN_146f498d0(local_250,uVar29,local_238);
              uVar25 = *(ulonglong *)(puVar20 + 2);
            }
          }
          if ((uVar25 & 0x600000000) == 0x400000000) {
            uVar11 = (uint)(-1 < (int)uVar25 & local_229);
            local_278 = CONCAT44(local_278._4_4_,uVar11);
            FUN_146f1729e(*(undefined8 *)(local_250 + 400),&local_1a0,
                          *(undefined4 *)(local_250 + 0xc),uVar29);
            puVar20 = local_238;
            lVar28 = local_250;
            uVar15 = 2;
            if ((CONCAT44(auStack_194[0],local_198) != 0) &&
               (cVar8 = FUN_146f4996e(local_250,uVar29,local_238), uVar15 = uVar11, cVar8 != '\0'))
            {
              local_278 = local_228[2];
              local_268 = (uint *)CONCAT71(local_268._1_7_,bVar22 < 2);
              local_270 = local_200;
              FUN_146f49804(lVar28,*(undefined4 *)(param_5 + 0x290),uVar29,puVar20);
            }
            uVar25 = *(ulonglong *)(local_238 + 2);
            local_254 = uVar15;
          }
        }
        auStack_194[0] = (uint)uVar25 & 0xffff;
        local_1a0 = local_238;
        if (0x40 < auStack_194[0]) {
          local_1a0 = *(uint **)local_238;
        }
        local_198 = auStack_194[0] + 0x1f >> 5;
        if ((uVar25 & 0xffff) == 0) {
          local_1a0 = auStack_194;
        }
        *(uint ***)((longlong)local_248 + 0x108) = &local_1a0;
        FUN_146f49ab4(local_250,local_248,local_200,local_228[2]);
        lVar28 = *(longlong *)((longlong)local_248 + 0xf0);
        uVar15 = *(uint *)((longlong)local_248 + 0x118);
        lVar30 = *(longlong *)(local_250 + 0x1a0);
        if ((*(byte *)(lVar30 + 0x2e0) & 8) == 0) {
          uVar11 = (uint)*(ushort *)(*(longlong *)(lVar30 + 0xc0) + local_1f0 * 2);
        }
        else {
          uVar11 = FUN_146f2180c(lVar30,uVar29);
        }
        *(uint *)(lVar28 + 0x28) = *(uint *)(lVar28 + 0x28) & 0xfffffffe | (uint)(uVar15 != uVar11);
        local_1d8 = (void *)CONCAT71(local_1d8._1_7_,bVar22 < 2);
        FUN_146f5435e(local_240,bVar22 < 2,1);
        uVar15 = local_230;
        puVar20 = local_238;
        if ((char)local_1d8 == '\0') {
          uVar11 = (uint)*(ulonglong *)(local_238 + 2);
          if ((uVar11 >> 0x1e & 1) == 0) {
            if (0x40 < (uVar11 & 0xffff)) {
              puVar20 = *(uint **)local_238;
            }
            FUN_142a8f0fc(local_248,puVar20,local_200,local_228[2]);
            puVar21 = local_240;
          }
          else {
            uVar14 = *(undefined8 *)((longlong)local_248 + 0xe0);
            FUN_146f5435e(uVar14,(uint)(*(ulonglong *)(local_238 + 2) >> 0x1f) & 3,2);
            if ((*(ulonglong *)(puVar20 + 2) & 0x180000000) == 0x100000000) {
              FUN_146f5435e(uVar14,local_254,2);
              if (0x40 < (ushort)puVar20[2]) {
                puVar20 = *(uint **)local_238;
              }
              FUN_142a8f0fc(local_248,puVar20,local_200,local_228[2]);
              puVar21 = local_240;
              uVar15 = local_230;
            }
            else {
              local_1d8 = (void *)CONCAT71(local_1d8._1_7_,local_254 != 2);
              FUN_146f5435e(uVar14,local_254 != 2,1);
              local_278 = local_228[2];
              if (0x40 < (ushort)puVar20[2]) {
                puVar20 = *(uint **)local_238;
              }
              FUN_142a8f884(local_248,puVar20,local_200,lStack_1b0);
              puVar21 = local_240;
              uVar15 = local_230;
            }
          }
LAB_142a9fea1:
          uVar13 = (ulonglong)uVar15;
          goto LAB_142a9f1c5;
        }
        uVar15 = 3;
        if ((local_228[2] != 0) &&
           ((local_228[3] != 0 || ((*(byte *)((longlong)local_228 + 0x33) & 2) != 0)))) {
          local_1d8 = (void *)(CONCAT71(local_1d8._1_7_,(byte)(local_238[2] >> 0x1e)) &
                              0xffffffffffffff01);
          FUN_146f5435e(local_240,(char)local_1d8 != '\0',1);
          if ((char)local_1d8 != '\0') {
            FUN_146f5435e(local_240,local_254,2);
          }
          local_1d8 = local_248;
          uStack_1d0 = CONCAT35(uStack_1d0._5_3_,
                                CONCAT14((byte)(puVar20[2] >> 0x1a),*(undefined4 *)(local_250 + 0xc)
                                        )) & 0xffffff01ffffffff;
          plVar4 = *(longlong **)(local_250 + 0x188);
          if ((puVar20[2] >> 0x1a & 1) == 0) {
            cVar8 = (**(code **)(*plVar4 + 0x2d8))(plVar4,&local_1d8,local_220);
          }
          else {
            cVar8 = FUN_142a8cca6(plVar4,&local_1d8,local_220);
          }
          puVar21 = local_240;
          if (cVar8 != '\0') {
            if (0x40 < (ushort)puVar20[2]) {
              puVar20 = *(uint **)local_238;
            }
            FUN_142a8f4c2(local_248,puVar20,local_200,local_228[2]);
            uVar15 = local_230;
            goto LAB_142a9fea1;
          }
          uVar15 = 5;
          if (*(longlong *)((longlong)local_248 + 8) == 0) {
            if ((*(longlong *)((longlong)local_248 + 0xd8) == 0) ||
               (*(int *)(*(longlong *)((longlong)local_248 + 0xd8) + 0x14) == 0)) {
              uVar15 = 3;
              if ((*(longlong *)((longlong)local_248 + 0xe0) == 0) ||
                 (*(int *)(*(longlong *)((longlong)local_248 + 0xe0) + 0x18) == 0))
              goto LAB_142a9f934;
            }
            uVar15 = 2;
          }
        }
      }
LAB_142a9f934:
      puVar21 = local_240;
      if (local_254 != 2) {
        local_278 = local_278 & 0xffffffff00000000;
        FUN_146f176da(*(undefined8 *)(local_250 + 400),*(undefined4 *)(local_250 + 0xc),uVar29);
      }
    }
  }
LAB_142a9edc9:
  if (*(int *)(puVar21 + 3) != 0) {
    FUN_146f5b2fa(puVar21,local_1f4);
  }
LAB_142a9edd4:
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 142a9ffe4 FUN_142a9ffe4 body=310 status=ok
// SIG undefined FUN_142a9ffe4(void)

undefined8
FUN_142a9ffe4(longlong param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_2 + 0xf8) != 0) {
    FUN_146f29d94();
  }
  local_68 = param_5;
  uVar3 = FUN_142a9e9cc(param_1,param_2,param_3,param_4);
  if ((uint)uVar3 < 2) {
    uVar1 = *(undefined4 *)(param_5 + 0x290);
    FUN_146f3d3b0(*(longlong *)(param_1 + 0x180) + 0x300,&local_58,param_3);
    if ((longlong)local_50 != 0) {
      lVar4 = 0;
      do {
        uVar2 = *(uint *)(local_58 + lVar4);
        if (((byte)((*(byte *)(*(longlong *)(param_1 + 0x98) + 10 + (longlong)(int)uVar2 * 0x10) &
                    0x1f) - 3) < 2) &&
           ((*(uint *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)(uVar2 >> 5) * 4) >>
             (uVar2 & 0x1f) & 1) == 0)) {
          *(uint *)(param_5 + 0x290) = uVar2;
          local_68 = param_5;
          uVar3 = FUN_142a9ffe4(param_1,param_2,(longlong)(int)uVar2,param_4);
          if (1 < (uint)uVar3) {
            *(undefined4 *)(param_5 + 0x290) = uVar1;
            goto LAB_142aa003e;
          }
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)local_50 * 8 != lVar4);
    }
    *(undefined4 *)(param_5 + 0x290) = uVar1;
    uVar3 = 0;
  }
LAB_142aa003e:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa011c FUN_142aa011c body=300 status=ok
// SIG undefined FUN_142aa011c(void)

undefined1 FUN_142aa011c(longlong param_1,int param_2,longlong param_3,int *param_4)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 uVar9;
  
  lVar8 = *(longlong *)(param_3 + 0x280);
  if (*(longlong *)(param_3 + 0x280) == 0) {
    lVar8 = param_3;
  }
  iVar4 = *(int *)(param_3 + 0x288);
  if ((longlong)iVar4 != 0) {
    lVar7 = 0;
    do {
      uVar6 = *(uint *)(lVar8 + 0x20 + lVar7);
      if (((uVar6 & 8) != 0) && (uVar6 = uVar6 & 3, uVar6 != 2)) {
        FUN_146f176da(*(undefined8 *)(param_1 + 400),*(undefined4 *)(param_1 + 0xc),
                      *(undefined4 *)(lVar8 + 8 + lVar7),uVar6,1);
      }
      uVar6 = *(uint *)(lVar8 + 8 + lVar7);
      if (uVar6 != 0) {
        bVar2 = (byte)uVar6 & 0x1f;
        puVar1 = (uint *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)(uVar6 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      }
      lVar7 = lVar7 + 0x28;
    } while ((longlong)iVar4 * 0x28 != lVar7);
  }
  uVar9 = 1;
  if (1 < param_2 - 3U) {
    uVar6 = (*param_4 - param_4[1]) + param_4[2];
    uVar9 = 0;
    if (*(uint *)(param_1 + 0x1c) <= uVar6) {
      uVar5 = 1;
      iVar4 = DAT_14c75f48c;
      if (DAT_14c75f48c < 2) {
        iVar4 = 1;
      }
      if ((((iVar4 < *(int *)(param_1 + 0x348) - *(int *)(param_1 + 0x374)) ||
           (cVar3 = FUN_146f1591a(param_1 + 0x110,2,0), cVar3 == '\0')) ||
          (*(longlong *)(param_1 + 0x1b0) == 0)) ||
         (uVar9 = 2, uVar6 <= *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x40) + 0x30)
         )) {
        if (*(char *)(param_1 + 0x298) == '\0') {
          uVar5 = *(uint *)(param_1 + 0x20);
        }
        uVar9 = *(uint *)(param_1 + 0x290) < uVar5;
      }
    }
  }
  return uVar9;
}



// FUNCTION 142aa0248 FUN_142aa0248 body=1099 status=ok
// SIG undefined FUN_142aa0248(void)

int FUN_142aa0248(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  float fVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  float fVar19;
  undefined1 auStack_a8 [40];
  int local_80;
  int local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  uint *local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar15 = *(int *)(param_2 + 0x288);
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar15);
  }
  if (*(int *)(param_3 + 0x18c) < iVar15) {
    FUN_146f532b8(param_3);
    iVar15 = *(int *)(param_2 + 0x288);
  }
  lVar14 = *(longlong *)(param_2 + 0x280);
  if (*(longlong *)(param_2 + 0x280) == 0) {
    lVar14 = param_2;
  }
  if (iVar15 == 0) {
    iVar17 = 0;
    iVar15 = 0;
  }
  else {
    local_60 = lVar14 + (longlong)iVar15 * 0x28;
    local_68 = param_1 + 0x110;
    local_70 = param_1 + 0x1e8;
    iVar15 = 0;
    iVar17 = 0;
    local_78 = param_3;
    do {
      lVar18 = local_78;
      lVar16 = *(longlong *)(param_1 + 0x98);
      lVar7 = (longlong)*(int *)(lVar14 + 8) * 0x10;
      puVar1 = (uint *)(lVar16 + lVar7);
      uVar4 = *(uint *)(lVar14 + 0x20);
      if ((uVar4 & 4) == 0) {
        uVar13 = *(ulonglong *)(puVar1 + 2);
        if (((uint)uVar13 >> 0x1c & 1) == 0) {
          if ((char)uVar4 < '\0') {
            uVar13 = uVar13 & 0xffffffffefe0ffff;
LAB_142aa0368:
            uVar13 = uVar13 | 0xb0000;
            goto LAB_142aa036f;
          }
        }
        else {
          puVar8 = (ulonglong *)(lVar7 + lVar16 + 8);
          if ((uVar4 & 0x40) != 0) {
            *puVar8 = uVar13 & 0xffffffffffe0ffff | 0x70000;
            lVar16 = *(longlong *)(param_1 + 0x98);
            lVar7 = (longlong)*(int *)(lVar14 + 8) * 0x10;
            uVar13 = *(ulonglong *)(lVar16 + 8 + lVar7) & 0xffffffffffe0ffff;
            goto LAB_142aa0368;
          }
          *puVar8 = uVar13 & 0xffffffffffe0ffff | 0x60000;
        }
      }
      else {
        uVar13 = *(ulonglong *)(lVar16 + 8 + lVar7) & 0xffffffffffe0ffff | 0x40000;
LAB_142aa036f:
        *(ulonglong *)(lVar16 + 8 + lVar7) = uVar13;
      }
      if ((*(int *)(lVar14 + 0x14) != 0) ||
         (0x3ff < (ushort)(*(ushort *)(lVar14 + 0xe) | *(ushort *)(lVar14 + 0xc) |
                           *(ushort *)(lVar14 + 0x10) | *(ushort *)(lVar14 + 0x12)))) {
        uVar9 = FUN_146f1594e(local_68,*(undefined4 *)(lVar14 + 0x18),*(undefined4 *)(lVar14 + 8));
        FUN_146f15562(uVar9,lVar14 + 0xc);
      }
      local_80 = iVar17;
      local_7c = iVar15;
      if ((*(uint *)(lVar14 + 0x20) & 8) == 0) {
        if (((*(int *)(lVar14 + 0x14) != 0) || ((*(uint *)(lVar14 + 0x20) & 0xc0) != 0)) ||
           (0x3ff < (ushort)(*(ushort *)(lVar14 + 0xe) | *(ushort *)(lVar14 + 0xc) |
                             *(ushort *)(lVar14 + 0x10) | *(ushort *)(lVar14 + 0x12)))) {
          uVar9 = FUN_146f4a018(lVar18);
          FUN_146f49584(0,puVar1,lVar14,uVar9);
        }
      }
      else {
        uVar3 = (ushort)puVar1[2];
        local_4c = (uint)uVar3;
        local_58 = puVar1;
        if (0x40 < local_4c) {
          local_58 = *(uint **)puVar1;
        }
        local_50 = uVar3 + 0x1f >> 5;
        if (uVar3 == 0) {
          local_58 = &local_4c;
        }
        uVar9 = FUN_146f4a018(lVar18);
        FUN_146f49584(&local_58,puVar1,lVar14,uVar9);
        memset(local_58,0,(ulonglong)local_50 << 2);
      }
      FUN_146f3d3b0(*(longlong *)(param_1 + 0x180) + 0x300,&local_58,*(undefined4 *)(lVar14 + 8));
      puVar6 = local_58;
      lVar16 = (longlong)(int)local_50;
      if (lVar16 != 0) {
        lVar18 = 0;
        do {
          uVar4 = *(uint *)((longlong)puVar6 + lVar18);
          if (((*(uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar4 >> 5) * 4) >>
                (uVar4 & 0x1f) & 1) != 0) &&
             ((*(uint *)(*(longlong *)(param_1 + 0x1d0) + (ulonglong)(uVar4 >> 5) * 4) &
              1 << ((byte)uVar4 & 0x1f)) == 0)) {
            iVar15 = *(int *)(param_1 + 0x270);
            *(uint *)(param_1 + 0x270) = iVar15 + 1U;
            if (*(uint *)(param_1 + 0x274) < iVar15 + 1U) {
              FUN_140724a48(local_70,iVar15);
            }
            lVar7 = *(longlong *)(param_1 + 0x268);
            if (*(longlong *)(param_1 + 0x268) == 0) {
              lVar7 = local_70;
            }
            *(uint *)(lVar7 + (longlong)iVar15 * 4) = uVar4;
            lVar7 = *(longlong *)(param_1 + 0xb8);
            fVar19 = *(float *)(lVar7 + (longlong)*(int *)(lVar14 + 8) * 4);
            fVar2 = *(float *)(lVar7 + (longlong)(int)uVar4 * 4);
            if (fVar19 <= fVar2) {
              fVar19 = fVar2;
            }
            *(float *)(lVar7 + (longlong)(int)uVar4 * 4) = fVar19;
          }
          lVar18 = lVar18 + 8;
        } while (lVar16 * 8 != lVar18);
      }
      iVar15 = (local_7c + 1) - (uint)((*(uint *)(lVar14 + 0x20) & 0xd8) == 0);
      iVar17 = local_80 + (uint)((*(uint *)(lVar14 + 0x20) >> 8 & 1) != 0);
      uVar13 = *(ulonglong *)(puVar1 + 2);
      *(ulonglong *)(puVar1 + 2) = uVar13 & 0xffffffffff7fffff;
      uVar10 = (ulonglong)((*(uint *)(lVar14 + 0x20) & 0x20) << 0x10);
      *(ulonglong *)(puVar1 + 2) = uVar13 & 0xffffffffff5fffff | uVar10;
      uVar11 = (ulonglong)(uint)(*(int *)(lVar14 + 0x1c) << 0x18);
      *(ulonglong *)(puVar1 + 2) = uVar13 & 0xfffffffffe5fffff | uVar10 | uVar11;
      uVar12 = (ulonglong)(*(uint *)(lVar14 + 0x20) & 3);
      if (uVar12 != 2 && (*(uint *)(lVar14 + 0x20) & 8) != 0) {
        *(ulonglong *)(puVar1 + 2) = uVar13 & 0xfffffff9fe5fffff | uVar10 | uVar11 | uVar12 << 0x21;
      }
      if (*(char *)(lVar14 + 0x1c) == '\0') {
        uVar4 = *(uint *)(lVar14 + 8);
        uVar5 = *(uint *)(lVar14 + 0x20);
        *(uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar4 >> 5) * 4) =
             *(uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar4 >> 5) * 4) &
             ~(1 << (uVar4 & 0x1f)) | 1 << ((byte)uVar4 & 0x1f) & (int)(uVar5 << 0x1a) >> 0x1f;
        if ((uVar5 & 0x20) == 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + (longlong)*(int *)(lVar14 + 8) * 4) = 0;
        }
      }
      else {
        puVar1 = (uint *)(*(longlong *)(param_1 + 0xe0) +
                         (ulonglong)(*(uint *)(lVar14 + 8) >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)*(uint *)(lVar14 + 8) & 0x1f);
      }
      lVar14 = lVar14 + 0x28;
      param_3 = local_78;
    } while (lVar14 != local_60);
  }
  *(int *)(param_3 + 400) = iVar17;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar15;
}



// FUNCTION 142aa0696 FUN_142aa0696 body=3230 status=ok
// SIG undefined FUN_142aa0696(void)

uint FUN_142aa0696(longlong param_1,LARGE_INTEGER param_2,uint param_3,ulonglong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  uint *puVar3;
  ulonglong *puVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  longlong lVar19;
  LARGE_INTEGER *pLVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  longlong lVar23;
  undefined1 auStack_ee8 [32];
  LARGE_INTEGER *local_ec8;
  int local_ebc;
  longlong local_eb8;
  undefined4 local_eb0;
  longlong local_ea8;
  ulonglong uStack_ea0;
  uint *local_e90;
  uint local_e88;
  longlong *local_e80;
  uint *local_e78;
  undefined8 local_e70;
  undefined8 uStack_e68;
  undefined4 local_e60;
  uint local_e5c;
  uint *local_e58;
  ulonglong uStack_e50;
  LARGE_INTEGER local_e48;
  LARGE_INTEGER local_e40;
  undefined4 local_e38;
  undefined1 local_e34;
  LARGE_INTEGER *local_cc0;
  undefined8 local_cb8;
  undefined4 local_cb0;
  LARGE_INTEGER local_ca8;
  undefined8 local_ca0;
  undefined8 local_c98;
  LARGE_INTEGER *local_c90;
  longlong local_a28;
  undefined4 local_a20;
  undefined4 uStack_a1c;
  undefined4 uStack_a18;
  undefined4 uStack_a14;
  LARGE_INTEGER local_a10;
  undefined4 local_a08;
  undefined4 local_a04;
  undefined4 local_a00;
  undefined4 local_9fc;
  LARGE_INTEGER *local_890;
  undefined8 local_888;
  int local_880;
  longlong local_790;
  undefined8 local_788;
  uint local_780;
  undefined4 local_77c;
  LARGE_INTEGER local_778;
  uint auStack_770 [3];
  undefined8 uStack_763;
  uint local_758;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined4 local_5e0;
  undefined1 local_5d8 [224];
  longlong local_4f8;
  undefined8 local_4f0;
  uint local_4e8;
  int local_4e4;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_448;
  undefined8 local_440;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [216];
  undefined8 local_b0;
  uint **local_a8;
  LARGE_INTEGER *local_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_ee8;
  lVar23 = (longlong)(int)param_3 * 0x10;
  lVar19 = *(longlong *)(param_2.QuadPart + 0xe0);
  iVar18 = *(int *)(lVar19 + 0x10) - *(int *)(lVar19 + 0xc);
  if ((*(byte *)(*(longlong *)(param_1 + 0x98) + 0xb + lVar23) & 4) != 0) {
    local_a08 = 0;
    local_a04 = 0;
    local_a00 = 0;
    local_9fc = 0;
    if (*(longlong *)(param_2.QuadPart + 0xf8) != 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_2.QuadPart + 0xf8) + 8);
      local_a08 = *(undefined4 *)(lVar6 + 0x108);
      local_a04 = *(undefined4 *)(lVar6 + 0x198);
      local_a00 = *(undefined4 *)(lVar6 + 0x3a8);
      local_9fc = *(undefined4 *)(lVar6 + 0x438);
    }
    lVar6 = *(longlong *)
             (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
             (longlong)((int)param_3 / 100) * 8);
    local_778.s.LowPart._0_1_ = 1;
    local_a10 = param_2;
    FUN_146f5435e(lVar19,1,1);
    local_e38 = *(undefined4 *)(param_1 + 0xc);
    local_e34 = 1;
    lVar7 = *(longlong *)(param_2.QuadPart + 0xf0);
    uVar13 = 0;
    if (lVar7 != 0) {
      uVar13 = *(uint *)(lVar7 + 0x28) & 2;
      *(uint *)(lVar7 + 0x28) = *(uint *)(lVar7 + 0x28) | 2;
    }
    local_e40 = param_2;
    cVar11 = FUN_142a8cca6(*(undefined8 *)(param_1 + 0x188),&local_e40,
                           *(undefined8 *)((ulonglong)(uint)((int)param_3 % 100) * 0x38 + lVar6));
    if (cVar11 == '\0') {
      uVar14 = 0;
      if (*(int *)(lVar19 + 0x18) == 0) {
        FUN_146f5b2fa(lVar19,*(int *)(lVar19 + 8) + 1);
      }
    }
    else {
      uVar14 = 0xffffffff;
      if (*(int *)(lVar19 + 0x18) == 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar23) =
             *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar23) & 0xffffffffffe0ffff |
             0x40000;
        lVar6 = *(longlong *)(param_1 + 0x98);
        local_778.QuadPart = 0;
        auStack_770[1] = 0;
        stack0xfffffffffffff898 = 0;
        uStack_763 = 0;
        local_758 = local_758 & 0xfffffe00;
        local_ca8.QuadPart = 0;
        local_c98 = (undefined1 *)0x0;
        auStack_770[0] = param_3;
        FUN_146f49584(0,lVar6 + lVar23);
        FUN_146f496da(param_1,param_3,&local_ca8);
        puVar4 = (ulonglong *)(lVar6 + 8 + lVar23);
        *puVar4 = *puVar4 & 0xfffffffffe5fffff;
        bVar12 = (byte)param_3 & 0x1f;
        puVar3 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(param_3 >> 5) * 4);
        *puVar3 = *puVar3 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
        *(undefined4 *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)param_3 * 4) = 0;
        *(int *)(param_1 + 0x2ec) = *(int *)(param_1 + 0x2ec) + 1;
        *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + 1;
        uVar14 = -(uint)(*(int *)(lVar19 + 0x18) != 0) | 1;
      }
    }
    if (lVar7 != 0) {
      *(uint *)(lVar7 + 0x28) = *(uint *)(lVar7 + 0x28) & 0xfffffffd | uVar13;
    }
    if (((*(longlong *)(local_a10.QuadPart + 8) != 0) ||
        ((*(longlong *)(local_a10.QuadPart + 0xd8) != 0 &&
         (*(int *)(*(longlong *)(local_a10.QuadPart + 0xd8) + 0x14) != 0)))) ||
       ((*(longlong *)(local_a10.QuadPart + 0xe0) != 0 &&
        (*(int *)(*(longlong *)(local_a10.QuadPart + 0xe0) + 0x18) != 0)))) {
      FUN_146f154f2(&local_a10);
    }
    if (*(int *)(lVar19 + 0x18) != 0) {
      FUN_146f5b2fa(lVar19,iVar18);
    }
    goto LAB_142aa0904;
  }
  uVar15 = 0;
  uVar17 = 0;
  uVar21 = 0;
  uVar22 = 0;
  if (*(longlong *)(param_2.QuadPart + 0xf8) != 0) {
    lVar23 = *(longlong *)(*(longlong *)(param_2.QuadPart + 0xf8) + 8);
    uVar15 = *(undefined4 *)(lVar23 + 0x108);
    uVar17 = *(undefined4 *)(lVar23 + 0x198);
    uVar21 = *(undefined4 *)(lVar23 + 0x3a8);
    uVar22 = *(undefined4 *)(lVar23 + 0x438);
  }
  local_ca0 = (undefined1 *)CONCAT44(uVar17,uVar15);
  local_c98 = (undefined1 *)CONCAT44(uVar22,uVar21);
  *(int *)(param_1 + 0x30c) = iVar18;
  local_ec8 = &local_778;
  local_4f8 = 0;
  local_4f0 = 0x1000000000;
  local_4e4 = ((param_4 & 4) == 0) + 1;
  if (param_3 != 0) {
    local_4e4 = 0;
  }
  local_ebc = iVar18;
  local_ca8 = param_2;
  local_4e8 = param_3;
  uVar13 = FUN_142a9ffe4(param_1,param_2.QuadPart,param_3);
  if (uVar13 < 2) {
    local_890 = (LARGE_INTEGER *)0x0;
    local_888 = 0x1000000000;
    local_880 = 0;
    uVar14 = FUN_142aa0248(param_1,&local_778,&local_a10);
    *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + local_880;
    pLVar20 = local_890;
    if (local_890 == (LARGE_INTEGER *)0x0) {
      pLVar20 = &local_a10;
    }
    if ((longlong)(int)local_888 != 0) {
      lVar23 = (longlong)(int)local_888 * 0x18;
      do {
        FUN_146f496da(param_1,pLVar20[1].s.LowPart & 0xfffff,pLVar20);
        pLVar20 = pLVar20 + 3;
        lVar23 = lVar23 + -0x18;
      } while (lVar23 != 0);
    }
    if (local_890 != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
LAB_142aa087c:
    bVar10 = false;
  }
  else {
    uVar14 = FUN_142aa011c(param_1,uVar13,&local_778,param_1 + 0x308);
    FUN_146f5b2fa(lVar19,local_ebc);
    FUN_146f154f2(&local_ca8);
    if (uVar14 == 0) {
      uVar14 = 0xffffffff;
      goto LAB_142aa087c;
    }
    if (uVar14 == 1) {
      *(int *)(param_1 + 0x290) = *(int *)(param_1 + 0x290) + 1;
      bVar10 = false;
      uVar14 = 0;
    }
    else {
      bVar10 = true;
    }
  }
  if (local_4f8 != 0) {
    FUN_1400020a8();
  }
  if (((*(longlong *)(local_ca8.QuadPart + 8) != 0) ||
      ((*(longlong *)(local_ca8.QuadPart + 0xd8) != 0 &&
       (*(int *)(*(longlong *)(local_ca8.QuadPart + 0xd8) + 0x14) != 0)))) ||
     ((*(longlong *)(local_ca8.QuadPart + 0xe0) != 0 &&
      (*(int *)(*(longlong *)(local_ca8.QuadPart + 0xe0) + 0x18) != 0)))) {
    FUN_146f154f2(&local_ca8);
  }
  if (*(int *)(lVar19 + 0x18) != 0) {
    FUN_146f5b2fa(lVar19,local_ebc);
  }
  if (!bVar10) goto LAB_142aa0904;
  iVar18 = 1;
  if (1 < DAT_14c75f48c) {
    iVar18 = DAT_14c75f48c;
  }
  if (*(int *)(param_1 + 0x348) - *(int *)(param_1 + 0x374) <= iVar18) {
    pLVar20 = (LARGE_INTEGER *)(param_1 + 0x318);
    uVar13 = param_3;
    cVar11 = FUN_146f49b96(pLVar20,param_3,0);
    if (cVar11 == '\0') {
      local_e58 = (uint *)0x0;
      lVar19 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0x40);
      uVar16 = *(int *)(lVar19 + 0x2c) * *(int *)(lVar19 + 0x28) + 0x1f;
      uVar14 = uVar16 >> 5;
      uStack_e50 = (ulonglong)uVar14;
      if (0x1f < uVar16) {
        FUN_1447808da(&local_e58,0);
        uVar14 = (uint)uStack_e50;
        uVar13 = local_e5c;
      }
      uStack_e68 = 0;
      local_e5c = uVar13 & 0xfffffff8;
      local_e70 = (ulonglong)(uVar14 << 5);
      local_e60 = 0;
      if ((uVar14 & 0x3fffffff) != 0) {
        uStack_e68 = (ulonglong)*local_e58 << 0x20;
      }
      local_e78 = local_e58;
      memcpy(local_188,(void *)param_2,0x128);
      local_b0 = 0;
      local_a8 = &local_e78;
      FUN_146f5435e(local_a8,0,0x10);
      local_778.QuadPart = (ulonglong)(uint)local_778.s.HighPart << 0x20;
      local_5f0 = 0;
      local_5e8 = 0x1000000000;
      local_5e0 = 0;
      local_4d8 = 0;
      local_4d0 = 0x2000000000;
      local_448 = 0;
      local_440 = 0x2000000000;
      local_238 = 0;
      local_230 = 0x2000000000;
      local_1a8 = 0;
      local_1a0 = 0x2000000000;
      local_198 = 0;
      uStack_190 = 0;
      local_790 = 0;
      local_788 = 0x1000000000;
      local_77c = 3;
      bVar12 = *(byte *)(param_2.QuadPart + 0x120);
      local_780 = param_3;
      FUN_146f49c60(local_5d8);
      local_ca8.QuadPart = *(longlong *)(param_1 + 0x1c0) + 0x68;
      local_c90 = local_90;
      local_ec8 = &local_a10;
      local_ca0 = local_5d8;
      local_c98 = local_188;
      local_90 = &local_ca8;
      uVar13 = FUN_142a9ffe4(param_1,local_188,param_3,((bVar12 & 1) == 0) * '\x02' + '\t');
      if (uVar13 == 2) {
        FUN_142aa011c(param_1,2,&local_a10,param_1 + 0x308);
        lVar19 = DAT_14c999ad0;
        FUN_146f5b89e(param_2.QuadPart);
        uVar14 = 0xffffffff;
        if (*(longlong *)(param_2.QuadPart + 8) == 0) {
          *(longlong *)(param_2.QuadPart + 8) = lVar19;
        }
LAB_142aa0ff6:
        *(LARGE_INTEGER **)(local_c98 + 0xf8) = local_c90;
      }
      else {
        if (1 < uVar13) {
          FUN_142aa011c(param_1,uVar13,&local_a10,param_1 + 0x308);
          uVar14 = 0;
          goto LAB_142aa0ff6;
        }
        *(LARGE_INTEGER **)(local_c98 + 0xf8) = local_c90;
        if (*(int *)(param_1 + 0x348) == *(int *)(param_1 + 0x374)) {
          QueryPerformanceCounter(&local_ca8);
          pLVar20->QuadPart = (LONGLONG)local_ca8;
        }
        local_778.s.LowPart = param_3;
        FUN_142aa0248(param_1,&local_a10,auStack_770);
        uVar15 = local_5e0;
        iVar18 = (uint)uStack_e68 - local_e70._4_4_;
        FUN_146f5b2fa(&local_e78,0);
        FUN_146f5435e(local_a8,uVar15,0x10);
        FUN_146f5b2fa(&local_e78,iVar18);
        if (((uint)uStack_e68 < ((int)local_e70 + 0x1fU & 0xffffffe0)) && ((local_e5c & 4) == 0)) {
          local_e78[(uint)uStack_e68 >> 5] = uStack_e68._4_4_;
        }
        local_e88 = ((uint)uStack_e68 - local_e70._4_4_) + 0x1f >> 5;
        local_e90 = local_e58;
        FUN_146f24c28(*(undefined8 *)(param_1 + 0x1b8),&local_e80);
        plVar2 = local_e80;
        local_ea8 = 0;
        uStack_ea0 = 0;
        uVar8 = *(undefined8 *)(param_1 + 0x1b0);
        uVar9 = *(undefined8 *)(param_1 + 0x338);
        local_ca8.QuadPart = (LONGLONG)local_e80;
        if (local_e80 == (longlong *)0x0) {
          cVar11 = FUN_146f25b92(uVar8,&local_ca8,&local_ea8,uVar9);
          lVar19 = DAT_14c999ad0;
          if (cVar11 == '\0') goto LAB_142aa126d;
LAB_142aa10ca:
          local_eb8 = local_ea8;
          local_eb0 = (undefined4)uStack_ea0;
          cVar11 = FUN_146f15664(param_1 + 0x110,2,0);
          lVar19 = DAT_14c99c030;
          if (cVar11 == '\0') goto LAB_142aa126d;
          FUN_146f1d59a(&local_198,&local_ea8);
          cVar11 = FUN_146f49cfa(pLVar20,&local_778);
          lVar19 = DAT_14c99c030;
          if (cVar11 == '\0') {
            FUN_146f5b89e(param_2.QuadPart);
            if (*(longlong *)(param_2.QuadPart + 8) == 0) {
              *(longlong *)(param_2.QuadPart + 8) = lVar19;
            }
            uVar14 = 0xffffffff;
          }
          else {
            lVar19 = *(longlong *)(param_2.QuadPart + 0xe0);
            iVar18 = *(int *)(lVar19 + 0x10);
            iVar5 = *(int *)(lVar19 + 0xc);
            local_a28 = 0;
            local_a20 = 0;
            uStack_a1c = 0x10;
            uStack_a18 = 0;
            uStack_a14 = 1;
            local_ec8 = &local_ca8;
            uVar14 = 0;
            uVar13 = FUN_142a9ffe4(param_1,param_2.QuadPart,0,6);
            if (uVar13 < 2) {
              local_cc0 = (LARGE_INTEGER *)0x0;
              local_cb8 = 0x1000000000;
              local_cb0 = 0;
              FUN_142aa0248(param_1,&local_ca8,&local_e40);
              pLVar20 = local_cc0;
              if (local_cc0 == (LARGE_INTEGER *)0x0) {
                pLVar20 = &local_e40;
              }
              if ((longlong)(int)local_cb8 != 0) {
                lVar23 = (longlong)(int)local_cb8 * 0x18;
                do {
                  FUN_146f496da(param_1,pLVar20[1].s.LowPart & 0xfffff,pLVar20);
                  pLVar20 = pLVar20 + 3;
                  lVar23 = lVar23 + -0x18;
                } while (lVar23 != 0);
              }
              bVar12 = FUN_146f156ba(param_1 + 0x110,2,0);
              *(uint *)(param_1 + 0x2a0) =
                   (*(uint *)(param_1 + 0x2a0) & 0xfffffffb) + (uint)bVar12 * 4;
              if (bVar12 == 0) {
                QueryPerformanceCounter(&local_e48);
                *(LARGE_INTEGER *)(param_1 + 800) = local_e48;
              }
              if (local_cc0 != (LARGE_INTEGER *)0x0) {
                FUN_1400020a8();
              }
              uVar14 = 1;
            }
            else {
              FUN_142aa011c(param_1,uVar13,&local_ca8,param_1 + 0x308);
              *(byte *)(param_1 + 0x2a0) = *(byte *)(param_1 + 0x2a0) | 4;
            }
            if (local_a28 != 0) {
              FUN_1400020a8();
            }
            if (*(int *)(lVar19 + 0x18) != 0) {
              FUN_146f5b2fa(lVar19,iVar18 - iVar5);
            }
          }
        }
        else {
          LOCK();
          *(int *)(local_e80 + 4) = (int)local_e80[4] + 1;
          UNLOCK();
          cVar11 = FUN_146f25b92(uVar8,&local_ca8,&local_ea8,uVar9);
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar2 + 4;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)(*plVar2 + 0x20))(plVar2,1);
            }
          }
          lVar19 = DAT_14c999ad0;
          if (cVar11 != '\0') goto LAB_142aa10ca;
LAB_142aa126d:
          FUN_146f5b89e(param_2.QuadPart);
          uVar14 = 0xffffffff;
          if (*(longlong *)(param_2.QuadPart + 8) == 0) {
            *(longlong *)(param_2.QuadPart + 8) = lVar19;
          }
        }
        FUN_146f1d381(local_ea8,uStack_ea0 & 0xffffffff);
        if (local_ea8 != 0) {
          FUN_1400020a8();
        }
        if (local_e80 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_e80 + 4;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)(*local_e80 + 0x20))(local_e80,1);
          }
        }
      }
      if (local_790 != 0) {
        FUN_1400020a8();
      }
      FUN_146f49dd2(&local_778);
      if (((uint)uStack_e68 < ((int)local_e70 + 0x1fU & 0xffffffe0)) && ((local_e5c & 4) == 0)) {
        local_e78[(uint)uStack_e68 >> 5] = uStack_e68._4_4_;
      }
      if (local_e58 != (uint *)0x0) {
        FUN_1400020a8();
      }
      if (uVar14 == 1) {
        *(int *)(param_1 + 0x28c) = *(int *)(param_1 + 0x28c) + 1;
        uVar14 = 1;
      }
      goto LAB_142aa0904;
    }
  }
  uVar14 = 0;
LAB_142aa0904:
  if ((local_60 ^ (ulonglong)auStack_ee8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 142aa1336 FUN_142aa1336 body=99 status=ok
// SIG undefined FUN_142aa1336(void)

ulonglong FUN_142aa1336(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((*(uint *)(*(longlong *)(lVar1 + 0x1d0) + (param_2 >> 5 & 0x7ffffff) * 4) >>
       ((uint)param_2 & 0x1f) & 1) == 0) {
    cVar2 = FUN_142a9e7b8(lVar1);
    if (cVar2 != '\0') {
      iVar3 = FUN_142aa0696(lVar1,param_1[1],param_2 & 0xffffffff,3);
      if (iVar3 < 0) {
        uVar4 = 0;
      }
      else {
        *(int *)param_1[2] = *(int *)param_1[2] + iVar3;
      }
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 142aa139a FUN_142aa139a body=947 status=ok
// SIG undefined FUN_142aa139a(void)

undefined8 FUN_142aa139a(longlong param_1,int *param_2)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  uint *local_b0;
  uint local_9c;
  int *local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  uint local_74;
  int *local_70;
  uint local_68;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = 0;
  if (*(char *)(param_1 + 0x3b0) == '\x01') {
    uVar14 = *(uint *)(param_1 + 0x2a0) & 0xfffffff0;
    *(uint *)(param_1 + 0x2a0) = uVar14;
    *(undefined4 *)(param_1 + 0x280) = 0;
    iVar2 = *param_2;
    *(int *)(param_1 + 0x29c) = iVar2;
    if (iVar2 == 1) {
      uVar9 = 0;
      lVar7 = FUN_146f156fa(param_1 + 0x110,1,0);
      if ((lVar7 == 0) || (*(int *)(lVar7 + 8) == *(int *)(lVar7 + 0xc))) goto LAB_142aa13cf;
      *(uint *)(param_1 + 0x2a0) = uVar14 | 8;
      *(char *)(param_1 + 0x298) = (char)param_2[1];
      uVar14 = 0;
      local_98 = param_2;
    }
    else {
      uVar8 = (ulonglong)*(uint *)(param_1 + 0xe8);
      uVar11 = 0;
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = 1;
        if (**(int **)(param_1 + 0xe0) == 0) {
          uVar15 = 1;
          do {
            uVar13 = uVar15;
            if (uVar8 == uVar13) break;
            uVar15 = uVar13 + 1;
          } while ((*(int **)(param_1 + 0xe0))[uVar13] == 0);
          uVar12 = (uint)(uVar13 < uVar8);
        }
      }
      uVar8 = (ulonglong)*(uint *)(param_1 + 0xd0);
      if (uVar8 != 0) {
        uVar11 = 1;
        if (**(int **)(param_1 + 200) == 0) {
          uVar15 = 1;
          do {
            uVar13 = uVar15;
            if (uVar8 == uVar13) break;
            uVar15 = uVar13 + 1;
          } while ((*(int **)(param_1 + 200))[uVar13] == 0);
          uVar11 = (uint)(uVar13 < uVar8);
        }
      }
      uVar9 = 0;
      uVar6 = FUN_146f156ba(param_1 + 0x110,1,0);
      bVar5 = FUN_146f156ba(param_1 + 0x110,2,0);
      uVar12 = uVar12 | uVar6 & 0xff | (uint)bVar5;
      if (uVar12 == 0 && uVar11 == 0) goto LAB_142aa13cf;
      *(uint *)(param_1 + 0x2a0) =
           uVar14 | uVar11 | (uint)bVar5 * 4 + uVar12 * 2 + (uVar6 & 0xff) * 8;
      local_98 = param_2;
      lVar7 = FUN_14001cc68((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x180) + 0xc) << 3,0);
      *(longlong *)(param_1 + 0x278) = lVar7;
      local_74 = 0;
      **(uint **)(param_1 + 0xe0) = **(uint **)(param_1 + 0xe0) & 0xfffffffe;
      uVar8 = (ulonglong)*(uint *)(param_1 + 0xe8);
      uVar14 = 0xffffffff >> (-*(char *)(param_1 + 0xf0) & 0x1fU);
      if (uVar8 != 0) {
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x180) + 0x168);
        lVar10 = *(longlong *)(param_1 + 0xe0);
        uVar15 = (ulonglong)(*(uint *)(param_1 + 0xe8) - 1);
        uVar13 = 0;
        uVar11 = 0;
        local_9c = uVar14;
        local_90 = uVar15;
        local_88 = lVar10;
        local_80 = uVar8;
        do {
          uVar12 = 0xffffffff;
          if (uVar13 == uVar15) {
            uVar12 = uVar14;
          }
          uVar12 = uVar12 & *(uint *)(lVar10 + uVar13 * 4) & ~*(uint *)(lVar3 + uVar13 * 4);
          uVar6 = uVar11;
          if (uVar12 != 0) {
            do {
              if ((uVar12 & 1) != 0) {
                fVar1 = *(float *)(*(longlong *)(param_1 + 0xb8) + (longlong)(int)uVar6 * 4);
                *(uint *)(lVar7 + (ulonglong)local_74 * 8) = uVar6;
                *(float *)(lVar7 + 4 + (ulonglong)local_74 * 8) = fVar1;
                if (1.0 <= fVar1) {
                  local_74 = local_74 + 1;
                  local_64 = *(int *)(*(longlong *)(param_1 + 0x180) + 0x1a8);
                  local_70 = *(int **)(*(longlong *)(param_1 + 0x180) + 0x198);
                  local_68 = local_64 + 0x1fU >> 5;
                  if (local_64 == 0) {
                    local_70 = &local_64;
                  }
                  if (((uint)local_70[uVar6 >> 5] >> (uVar6 & 0x1f) & 1) != 0) {
                    local_b0 = &local_74;
                    local_b8 = lVar7;
                    FUN_146f48030(param_1,uVar6,fVar1,(longlong *)(param_1 + 0xb8));
                    uVar8 = local_80;
                    lVar10 = local_88;
                    uVar15 = local_90;
                    uVar14 = local_9c;
                  }
                }
              }
              bVar4 = 1 < uVar12;
              uVar12 = uVar12 >> 1;
              uVar6 = uVar6 + 1;
            } while (bVar4);
          }
          uVar13 = uVar13 + 1;
          uVar11 = uVar11 + 0x20;
        } while (uVar13 != uVar8);
      }
      *(uint *)(param_1 + 0x280) = local_74;
      uVar14 = local_74;
    }
    if (*(int *)(param_1 + 0x274) < 0) {
      *(undefined4 *)(param_1 + 0x270) = 0;
      FUN_1417335d8(param_1 + 0x1e8,0);
      uVar14 = *(uint *)(param_1 + 0x280);
    }
    else {
      *(undefined4 *)(param_1 + 0x270) = 0;
    }
    *(undefined8 *)(param_1 + 0x290) = 0;
    *(undefined8 *)(param_1 + 0x284) = 0;
    *(char *)(param_1 + 0x298) = (char)local_98[1];
    *(uint *)(param_1 + 0x2e0) = uVar14;
    *(byte *)(param_1 + 0x2a0) = *(byte *)(param_1 + 0x2a0) | 0x10;
    uVar9 = 2;
  }
LAB_142aa13cf:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 142aa174e FUN_142aa174e body=53 status=ok
// SIG undefined FUN_142aa174e(void)

void FUN_142aa174e(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x2a0) & 0x10) != 0) {
    FUN_1400020a8(*(undefined8 *)(param_1 + 0x278));
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(byte *)(param_1 + 0x2a0) = *(byte *)(param_1 + 0x2a0) & 0xef;
  }
  return;
}



// FUNCTION 142aa1784 FUN_142aa1784 body=2429 status=ok
// SIG undefined FUN_142aa1784(void)

undefined8 FUN_142aa1784(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  short sVar6;
  short sVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong *puVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  undefined1 auStack_138 [40];
  longlong local_110;
  ulonglong *local_108;
  uint local_fc;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  int local_e4;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0 [2];
  undefined8 local_90;
  LARGE_INTEGER local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined5 uStack_78;
  undefined8 uStack_73;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar16 = 0;
  if ((*(uint *)(param_1 + 0x2a0) & 0x10) == 0 || (*(uint *)(param_1 + 0x2a0) & 0xf) == 0)
  goto LAB_142aa17ca;
  *(undefined8 *)(param_1 + 0x28c) = 0;
  lVar25 = *(longlong *)(param_2 + 0xe0);
  local_d0 = *(longlong *)(param_1 + 0x10);
  local_c8 = *(longlong *)(local_d0 + 0x28) + 0xd38;
  local_c0 = 0;
  iVar10 = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_b0 = *(undefined8 *)(*(longlong *)(local_d0 + 0x28) + 0x810);
  local_a8 = 0;
  *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_1 + 0xc);
  *(longlong **)(param_2 + 0xf0) = &local_d0;
  uVar16 = 0;
  if (*(char *)(*(undefined8 **)(param_1 + 0x1c8) + 4) == '\x01') {
    uVar16 = **(undefined8 **)(param_1 + 0x1c8);
  }
  *(undefined8 *)(param_2 + 0x100) = uVar16;
  *(int *)(param_1 + 0x308) = *(int *)(lVar25 + 0x10) - *(int *)(lVar25 + 0xc);
  if (*(int *)(lVar25 + 0x18) == 0) {
    iVar10 = *(int *)(lVar25 + 8) - *(int *)(lVar25 + 0x10);
  }
  *(int *)(param_1 + 0x310) = iVar10;
  iVar10 = *(int *)(lVar25 + 0x10) - *(int *)(lVar25 + 0xc);
  local_ec = *(undefined4 *)(param_1 + 0x30);
  local_e8 = *(undefined4 *)(param_1 + 0x34);
  uVar16 = 0;
  FUN_146f5435e(lVar25,0,0x10);
  lVar14 = *(longlong *)(param_2 + 0xe0);
  local_e4 = *(int *)(lVar14 + 0x10) - *(int *)(lVar14 + 0xc);
  uVar13 = FUN_146f5435e(lVar14,0,0x10);
  uVar18 = 0;
  if (*(int *)(lVar14 + 0x18) == 0) {
    uVar18 = *(uint *)(param_1 + 0xd0);
    local_f0 = iVar10;
    local_d8 = lVar25;
    if (uVar18 == 0) {
      local_f8 = (undefined4)CONCAT71((int7)((ulonglong)uVar13 >> 8),1);
      local_fc = 0;
    }
    else {
      local_e0 = param_1 + 0x318;
      local_f8 = (undefined4)CONCAT71((int7)((ulonglong)local_e0 >> 8),1);
      uVar19 = 0xfffffffe;
      uVar15 = 0;
      uVar20 = 0;
      local_fc = 0;
      do {
        uVar17 = (ulonglong)uVar15;
        while (uVar19 = uVar19 & *(uint *)(*(longlong *)(param_1 + 200) + uVar17 * 4), uVar19 == 0)
        {
          uVar17 = uVar17 + 1;
          uVar20 = uVar20 + 0x20;
          uVar19 = 0xffffffff;
          if (uVar18 <= uVar17) goto LAB_142aa1920;
        }
        uVar18 = 0;
        if (uVar19 != 0) {
          for (; (uVar19 >> uVar18 & 1) == 0; uVar18 = uVar18 + 1) {
          }
        }
        uVar19 = uVar20 + uVar18;
        if (*(uint *)(param_1 + 0xd8) <= uVar19) break;
        lVar25 = (longlong)(int)uVar19 * 0x10;
        uVar13 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + 8 + lVar25);
        if ((((uint)uVar13 >> 0x1b & 1) == 0) || (((byte)((ulonglong)uVar13 >> 0x10) & 0x1f) == 0xb)
           ) goto LAB_142aa1c3b;
        lVar23 = *(longlong *)(param_1 + 0x98) + lVar25;
        puVar22 = (ulonglong *)
                  ((ulonglong)(uint)((int)uVar19 % 100) * 0x38 +
                  *(longlong *)
                   (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                   (longlong)((int)uVar19 / 100) * 8));
        if (((uint)((ulonglong)uVar13 >> 0x10) & 0x1f) == 6) {
          local_110 = lVar14;
          local_108 = puVar22;
          iVar10 = FUN_146f46fb6(param_1,uVar19,lVar23,(uint)((ulonglong)uVar13 >> 0x23) & 7);
          lVar14 = local_110;
          if (iVar10 != 0) goto LAB_142aa1c3b;
          FUN_146f4719e(param_1,uVar19,lVar23);
          puVar22 = local_108;
          lVar14 = local_110;
        }
        uVar15 = (uint)puVar22[5];
        if (uVar15 == 0) {
          uVar12 = (uint)*(undefined8 *)(lVar23 + 8);
LAB_142aa1c2f:
          if ((uVar12 & 0x1f0000) == 0xa0000) {
            local_110 = lVar14;
            local_108 = puVar22;
            cVar8 = FUN_146f49b96(local_e0,uVar19,1);
            if (cVar8 == '\0') {
              local_f4 = *(int *)(local_110 + 0x10) - *(int *)(local_110 + 0xc);
              FUN_146f5aa41(*(undefined8 *)(param_2 + 0xe0),*local_108 & 0xfffffffffffffff);
              if ((int)local_108[5] == 0) {
                bVar9 = 0;
              }
              else {
                bVar9 = (*(byte *)((longlong)local_108 + 0x32) & 4) >> 2;
              }
              local_88.s.LowPart._0_1_ = bVar9;
              FUN_146f5435e(local_110,bVar9 != 0,1);
              if (local_88.s.LowPart._0_1_ != '\0') {
                FUN_146f5aa41(*(undefined8 *)(param_2 + 0xe0),
                              *(ulonglong *)
                               (*(longlong *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x270) +
                                 (longlong)((int)local_108[5] / 100) * 8) +
                               (ulonglong)(uint)((int)local_108[5] % 100) * 0x38) &
                              0xfffffffffffffff);
              }
              bVar26 = true;
              if (*local_108 == 0 || (*local_108 & 1) != 0) {
                bVar26 = (*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x180) + 0x1b0) +
                                   (ulonglong)(uVar20 >> 3)) >> (uVar18 & 0x1f) & 1) != 0;
              }
              local_88.s.LowPart._0_1_ = bVar26;
              FUN_146f5435e(local_110,bVar26 != false,1);
              lVar14 = local_110;
              if (*(int *)(local_110 + 0x18) != 0) {
                FUN_146f5b2fa(local_110,local_f4);
                local_f8 = 0;
                break;
              }
              *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar25) =
                   *(ulonglong *)(*(longlong *)(param_1 + 0x98) + 8 + lVar25) & 0xffffffffffe0ffff |
                   0xb0000;
              *(byte *)(lVar23 + 10) = *(byte *)(lVar23 + 10) & 0x7f;
              local_88.QuadPart = 0;
              uStack_7c = 0;
              uStack_78 = 0;
              uStack_73 = 0;
              local_68 = local_68 & 0xfffffe00;
              local_a0[0] = 0;
              local_90 = 0;
              uStack_80 = uVar19;
              FUN_146f49584(0,lVar23,&local_88,local_a0);
              FUN_146f496da(param_1,uVar19,local_a0);
              local_fc = local_fc + 1;
              lVar14 = local_110;
              if (*(int *)(local_110 + 0x18) != 0) {
                FUN_146f5b2fa(local_110,local_f4);
                lVar14 = local_110;
              }
            }
            else {
              local_f8 = 0;
              lVar14 = local_110;
            }
          }
        }
        else {
          uVar17 = *(ulonglong *)(lVar23 + 8);
          uVar12 = (uint)uVar17;
          if ((*(byte *)((longlong)puVar22 + 0x32) & 4) == 0) goto LAB_142aa1c2f;
          uVar21 = 1 << ((byte)uVar15 & 0x1f) &
                   *(uint *)(*(longlong *)(param_1 + 200) + (ulonglong)(uVar15 >> 5) * 4);
          if ((uVar12 >> 0x1d & 1) == 0) {
            if (uVar21 != 0) {
LAB_142aa1c2a:
              uVar12 = (uint)uVar17;
              local_108 = puVar22;
              goto LAB_142aa1c2f;
            }
            lVar5 = *(longlong *)(param_1 + 0x98);
            local_108 = puVar22;
            if ((byte)((*(byte *)(lVar5 + 10 + (longlong)(int)uVar15 * 0x10) & 0x1f) - 10) < 0xf7)
            goto LAB_142aa1c2f;
            *(ulonglong *)(lVar5 + 8 + lVar25) =
                 *(ulonglong *)(lVar5 + 8 + lVar25) & 0xffffffffffe0ffff | 0x80000;
            *(byte *)(lVar23 + 0xb) = *(byte *)(lVar23 + 0xb) | 0x20;
            pbVar1 = (byte *)(lVar5 + (longlong)(int)uVar15 * 0x10 + 10);
            *pbVar1 = *pbVar1 | 0x20;
            puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)((uint)puVar22[5] >> 5) * 4
                             );
            *puVar2 = *puVar2 | 1 << ((byte)(uint)puVar22[5] & 0x1f);
            puVar2 = (uint *)(*(longlong *)(param_1 + 0xe0) + (ulonglong)(uVar20 >> 3));
            *puVar2 = *puVar2 | 1 << ((byte)uVar18 & 0x1f);
          }
          else {
            lVar5 = *(longlong *)(param_1 + 0x98);
            if ((uVar21 != 0) ||
               (local_108 = puVar22,
               (*(byte *)(lVar5 + 10 + (longlong)(int)uVar15 * 0x10) & 0x1f) == 0)) {
              *(ulonglong *)(lVar5 + 8 + lVar25) =
                   *(ulonglong *)(lVar5 + 8 + lVar25) & 0xffffffffffe0ffff | 0xa0000;
              uVar17 = *(ulonglong *)(lVar23 + 8) & 0xffffffffdfffffff;
              *(ulonglong *)(lVar23 + 8) = uVar17;
              goto LAB_142aa1c2a;
            }
          }
        }
LAB_142aa1c3b:
        uVar15 = uVar20 + uVar18 + 1;
        uVar18 = *(uint *)(param_1 + 0xd0);
        uVar19 = -1 << ((byte)uVar15 & 0x1f);
        uVar20 = uVar15 & 0xffffffe0;
        uVar15 = uVar15 >> 5;
      } while (uVar15 < uVar18);
    }
LAB_142aa1920:
    iVar10 = *(int *)(lVar14 + 0x10);
    iVar24 = *(int *)(lVar14 + 0xc);
    FUN_146f5b2fa(lVar14,local_e4);
    uVar18 = local_fc & 0xffff;
    FUN_146f5435e(lVar14,(undefined2)local_fc,0x10);
    FUN_146f5b2fa(lVar14,iVar10 - iVar24);
    *(uint *)(param_1 + 0x2a0) =
         *(uint *)(param_1 + 0x2a0) & 0xfffffffe | (uint)(~(byte)local_f8 & 1);
    lVar25 = local_d8;
    iVar10 = local_f0;
  }
  if (*(int *)(lVar25 + 0x18) == 0) {
    uVar19 = *(uint *)(param_1 + 0x2a0);
    if (*(int *)(param_1 + 0x29c) == 1) {
      iVar24 = 0;
      if ((uVar19 & 8) != 0) {
        cVar8 = FUN_142a9e7b8(param_1,0);
        iVar24 = 0;
        if (cVar8 != '\0') {
          iVar11 = FUN_142aa0696(param_1,param_2,0,2);
          iVar24 = 0;
          if (iVar11 != -1) {
            uVar19 = 0;
            lVar14 = FUN_146f156fa(param_1 + 0x110,1,0);
            if (lVar14 != 0) {
              uVar19 = (uint)(*(int *)(lVar14 + 8) != *(int *)(lVar14 + 0xc)) << 3;
            }
            *(uint *)(param_1 + 0x2a0) = *(uint *)(param_1 + 0x2a0) & 0xfffffff7 | uVar19;
            iVar24 = iVar11;
          }
        }
      }
    }
    else {
      iVar24 = 0;
      if ((uVar19 & 4) != 0) {
        iVar24 = 0;
        iVar11 = FUN_142aa0696(param_1,param_2,0,6);
        if (iVar11 == -1) goto LAB_142aa1fba;
        bVar9 = FUN_146f156ba(param_1 + 0x110,2,0);
        uVar19 = (*(uint *)(param_1 + 0x2a0) & 0xfffffffb) + (uint)bVar9 * 4;
        *(uint *)(param_1 + 0x2a0) = uVar19;
        iVar24 = iVar11;
        if (bVar9 == 0) {
          QueryPerformanceCounter(&local_88);
          *(LARGE_INTEGER *)(param_1 + 800) = local_88;
          uVar19 = *(uint *)(param_1 + 0x2a0);
        }
      }
      if ((((uVar19 & 8) != 0) && (cVar8 = FUN_142a9e7b8(param_1,0), cVar8 != '\0')) &&
         (iVar11 = FUN_142aa0696(param_1,param_2,0,2), iVar11 != -1)) {
        bVar9 = FUN_146f156ba(param_1 + 0x110,1,0);
        *(uint *)(param_1 + 0x2a0) = (*(uint *)(param_1 + 0x2a0) & 0xfffffff7) + (uint)bVar9 * 8;
        iVar24 = iVar11 + iVar24;
      }
    }
LAB_142aa1fba:
    iVar11 = FUN_146f49e26(param_1,param_2);
    uVar19 = *(uint *)(param_1 + 0x2a0);
    uVar16 = 1;
    if ((((uVar19 & 0x10) != 0 && (uVar19 & 0xf) != 0) && (uVar16 = 2, (uVar19 & 4) == 0)) &&
       ((*(char *)(param_1 + 0x298) != '\x01' || (DAT_14c75f488 <= *(int *)(param_1 + 0x294))))) {
      uVar16 = 1;
    }
    if (iVar24 + uVar18 + iVar11 == 0 || *(int *)(lVar25 + 0x18) != 0) {
      uVar16 = 0;
      if (*(int *)(lVar25 + 0x18) == 0) {
        FUN_146f5b2fa(lVar25,*(int *)(lVar25 + 8) + 1);
      }
    }
    else {
      iVar24 = *(int *)(lVar25 + 0x10);
      iVar11 = *(int *)(lVar25 + 0xc);
      FUN_146f5b2fa(lVar25,iVar10);
      FUN_146f5435e(lVar25,uVar18 + *(int *)(param_1 + 0x28c),0x10);
      FUN_146f5b2fa(lVar25,iVar24 - iVar11);
      uVar3 = *(undefined4 *)(param_1 + 0x30);
      sVar7 = (short)local_e8;
      uVar4 = *(undefined4 *)(param_1 + 0x34);
      sVar6 = (short)local_ec;
      uVar18 = *(uint *)(param_1 + 0x50);
      uVar17 = (ulonglong)(uVar18 - *(int *)(param_1 + 0x54));
      if ((ulonglong)(longlong)*(int *)(param_1 + 0x68) <= uVar17) {
        FUN_146f4c83a((uint *)(param_1 + 0x50),uVar17 + 1);
        uVar18 = *(uint *)(param_1 + 0x50);
      }
      *(uint *)(param_1 + 0x50) = uVar18 + 1;
      *(short *)(*(longlong *)(param_1 + 0x60) + (ulonglong)(uVar18 & *(uint *)(param_1 + 0x58)) * 2
                ) = (sVar7 + (short)uVar3) - (sVar6 + (short)uVar4);
      *(int *)(param_1 + 0x294) = *(int *)(param_1 + 0x294) + 1;
    }
    if (*(int *)(lVar25 + 0x18) == 0) goto LAB_142aa17ca;
  }
  FUN_146f5b2fa(lVar25,iVar10);
LAB_142aa17ca:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 142aa2102 FUN_142aa2102 body=114 status=ok
// SIG undefined FUN_142aa2102(void)

undefined8 FUN_142aa2102(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 & 0xfffff;
  if ((uVar1 == 0) ||
     (((param_2 >> 0x17 & 1) == 0) != ((int)(*(longlong **)(param_1 + 0x18))[5] == 1))) {
    param_3 = **(longlong **)(param_1 + 0x18);
  }
  if (((param_3 != 0 && uVar1 != 0) &&
      (uVar2 = param_2 >> 0x14 & 7, uVar2 == *(uint *)(param_1 + 0x20))) &&
     (uVar3 = (ulonglong)(uVar2 << 4), (int)uVar1 < *(int *)(param_3 + 8 + uVar3))) {
    uVar1 = *(uint *)(*(longlong *)(param_3 + uVar3) + (ulonglong)uVar1 * 4);
    if (((longlong)(int)uVar1 != 0) && (uVar1 < *(uint *)(param_1 + 0x80))) {
      return *(undefined8 *)(*(longlong *)(param_1 + 0x78) + (longlong)(int)uVar1 * 8);
    }
  }
  return 0;
}



// FUNCTION 142aa2174 FUN_142aa2174 body=154 status=ok
// SIG undefined FUN_142aa2174(void)

void FUN_142aa2174(longlong param_1,longlong param_2,ulonglong param_3,undefined8 *param_4)

{
  float *pfVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  while (lVar3 < lVar5) {
    fVar2 = *(float *)(param_1 + 0x14 + lVar3 * 0x10);
    pfVar1 = (float *)(param_1 + 0xc + lVar3 * 0x10);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      lVar4 = lVar3 * 2 + 1;
    }
    else {
      lVar4 = lVar3 * 2 + 2;
    }
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + lVar4 * 8);
    lVar3 = lVar4;
  }
  if (((param_3 & 1) == 0) && (lVar3 == lVar5)) {
    *(undefined8 *)(param_1 + lVar5 * 8) = *(undefined8 *)(param_1 + -8 + param_3 * 8);
    lVar3 = param_3 - 1;
  }
  while ((param_2 < lVar3 &&
         (lVar5 = lVar3 + -1 >> 1, fVar2 = *(float *)(param_1 + 4 + lVar5 * 8),
         *(float *)((longlong)param_4 + 4) <= fVar2 && fVar2 != *(float *)((longlong)param_4 + 4))))
  {
    *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_1 + lVar5 * 8);
    lVar3 = lVar5;
  }
  *(undefined8 *)(param_1 + lVar3 * 8) = *param_4;
  return;
}



// FUNCTION 142aa220e FUN_142aa220e body=165 status=ok
// SIG undefined FUN_142aa220e(void)

void FUN_142aa220e(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  puVar4 = (undefined8 *)(param_2 + 8);
  if (*(undefined8 **)(param_2 + 0x188) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x188);
  }
  if ((longlong)*(int *)(param_2 + 400) != 0) {
    lVar5 = (longlong)*(int *)(param_2 + 400) * 0x18;
    do {
      uVar3 = (ulonglong)((*(uint *)(puVar4 + 1) & 0xfffff) << 4);
      uVar1 = *(ushort *)(*(longlong *)(lVar2 + 0x98) + 8 + uVar3);
      FUN_142a9e154(lVar2,puVar4,*(longlong *)(lVar2 + 0x98) + uVar3,puVar4 + 2);
      if (((*(byte *)((longlong)puVar4 + 0xb) & 2) != 0) && (0x40 < uVar1)) {
        FUN_1400020a8(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  FUN_146f26ce8(*(undefined8 *)(lVar2 + 0x1c0),param_2 + 0x1a0);
  return;
}



// FUNCTION 142aa22b4 FUN_142aa22b4 body=133 status=ok
// SIG undefined FUN_142aa22b4(void)

void FUN_142aa22b4(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(param_2 + 8);
  if (*(undefined8 **)(param_2 + 0x188) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x188);
  }
  if ((longlong)*(int *)(param_2 + 400) != 0) {
    lVar2 = *param_1;
    lVar3 = (longlong)*(int *)(param_2 + 400) * 0x18;
    do {
      uVar1 = *(ushort *)
               (*(longlong *)(lVar2 + 0x98) + 8 +
               (ulonglong)((*(uint *)(puVar4 + 1) & 0xfffff) << 4));
      FUN_146f482fe(lVar2,puVar4,puVar4 + 2);
      if (((*(byte *)((longlong)puVar4 + 0xb) & 2) != 0) && (0x40 < uVar1)) {
        FUN_1400020a8(*puVar4);
      }
      puVar4 = puVar4 + 3;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 142aa233a FUN_142aa233a body=117 status=ok
// SIG undefined FUN_142aa233a(void)

void FUN_142aa233a(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = param_2 + 8;
  if (*(longlong *)(param_2 + 0x188) != 0) {
    lVar4 = *(longlong *)(param_2 + 0x188);
  }
  iVar1 = *(int *)(param_2 + 400);
  if ((longlong)iVar1 != 0) {
    lVar3 = *param_1;
    lVar5 = 0;
    do {
      uVar2 = *(uint *)(lVar4 + 8 + lVar5);
      if (((uVar2 >> 0x19 & 1) != 0) &&
         (0x40 < *(ushort *)(*(longlong *)(lVar3 + 0x98) + 8 + (ulonglong)((uVar2 & 0xfffff) << 4)))
         ) {
        FUN_1400020a8(*(undefined8 *)(lVar4 + lVar5));
      }
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
  }
  return;
}



// FUNCTION 142aa23af FUN_142aa23af body=978 status=ok
// SIG undefined FUN_142aa23af(void)

void FUN_142aa23af(void)

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
  FUN_14153156c(&DAT_14c999948,L"net.Iris.LogReplicationProtocols",&DAT_14c999958,
                L"If true, log all created replication protocols.");
  atexit(FUN_142a95b58);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999960,L"net.Iris.UseResolvingHandleCache",&DAT_14c75f474,
                L"Enable the use of a hot and cold cache when resolving unresolved caches to reduce the time spent resolving references."
               );
  atexit(FUN_142a95ff1);
  local_38 = 0;
  FUN_141471170(&DAT_14c999970,L"net.Iris.HotResolvingLifetimeMS",&DAT_14c75f478,
                L"An unresolved reference is considered hot if it was created within this many milliseconds, and cold otherwise."
               );
  atexit(FUN_142a96036);
  local_38 = 0;
  FUN_141471170(&DAT_14c999980,L"net.Iris.ColdResolvingRetryTimeMS",&DAT_14c75f47c,
                L"Resolve unresolved cold references after this many milliseconds.");
  atexit(FUN_142a9607b);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999990,L"net.Iris.UseOptObjectRefTracking",&DAT_14c9999a0,
                L"Use a more optimized version of FReplicationReader::UpdateObjectReferenceTracking()."
               );
  atexit(FUN_142a960c0);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9999a8,L"net.Iris.ExecuteReliableRPCsBeforeApplyState",&DAT_14c75f480,
                L"If true and Iris runs in backwards compatibility mode then reliable RPCs will be executed before we apply state data on the target object unless we first need to spawn the object."
               );
  atexit(FUN_142a96105);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9999b8,L"net.Iris.DeferEndReplication",&DAT_14c75f481,
                L"bDeferEndReplication if true calls to EndReplication will be defered until after we have applied statedata. Default is true."
               );
  atexit(FUN_142a9614a);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9999c8,L"net.Iris.DispatchUnresolvedPreviouslyReceivedChanges",
                &DAT_14c9999d8,
                L"Whether to include previously received changes with unresolved object references to data received this frame when applying state data. This can call rep notify functions to be called despite being unchanged. Default is false."
               );
  atexit(FUN_142a9618f);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9999e0,L"net.Iris.RemapDynamicObjects",&DAT_14c75f482,
                L"Allow remapping of dynamic objects on the receiving end. This allows properties previously pointing to a particular object to be updated if the object is re-created. Default is true."
               );
  atexit(FUN_142a961d4);
  local_38 = 0;
  FUN_14153156c(&DAT_14c9999f0,L"net.Iris.ResolvedObjectsDispatchDebugging",&DAT_14c999a00,
                L"Debug logging of resolved object state dispatching. Default is false.");
  atexit(FUN_142a96219);
  local_28 = "Failed to find attachment queue";
  local_20 = 0x1f;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c999a08 = (ulonglong)uVar1;
  local_38 = 0;
  FUN_14153156c(&DAT_14c999a10,L"net.Iris.ForcePruneBeforeUpdate",&DAT_14c999a20,
                L"Verify integrity of all tracked instances at the start of every update.");
  atexit(FUN_142a9ca2c);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999a28,L"net.Iris.Attachments.AllowSendPolicyFlags",&DAT_14c75f483,
                L"Allow use of ENetObjectAttachmentSendPolicyFlags to specify behavior of RPCs.");
  atexit(FUN_142a9ca71);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999a38,L"net.Iris.OnlyResetDirtinessForQuantizedObjects",&DAT_14c75f484,
                L"Only Reset Dirtiness For QuantizedObjects, optimization that only resets dirtiness for objects actually considered dirty."
               );
  atexit(FUN_142a9cab6);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999a88,L"net.Iris.WarnAboutDroppedAttachmentsToObjectsNotInScope",
                &DAT_14c999a98,
                L"Warn when attachments are dropped due to object not in scope. Default is false.");
  atexit(FUN_142a9d8f9);
  local_38 = 0;
  FUN_141471170(&DAT_14c999aa0,L"net.Iris.ReplicationWriterMaxAllowedPacketsIfNotHugeObject",
                &DAT_14c75f488,
                L"Allow ReplicationWriter to overcommit data if we have more data to write.");
  atexit(FUN_142a9d93e);
  local_38 = 0;
  FUN_141471170(&DAT_14c999ab0,L"net.Iris.ReplicationWriterMaxHugeObjectsInTransit",&DAT_14c75f48c,
                L"How many very large objects, one whose payload doesn\'t fit in a single packet, is allowed to be scheduled for send. Needs to be at least 1."
               );
  atexit(FUN_142a9d983);
  local_38 = 0;
  FUN_14153156c(&DAT_14c999ac0,L"net.Iris.ReplicationWriter.ValidateObjectsWithDirtyChanges",
                &DAT_14c75f490,
                L"Ensure that we don\'t try to mark invalid objects as dirty when they shouldn\'t.")
  ;
  atexit(FUN_142a9d9c8);
  local_28 = "Object state is too large to be split.";
  local_20 = 0x26;
  local_1c = 0;
  uVar1 = FUN_14001a6c0(&local_28,1);
  DAT_14c999ad0 = (ulonglong)uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa2784 FUN_142aa2784 body=154 status=ok
// SIG undefined FUN_142aa2784(void)

void FUN_142aa2784(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar5 = *(uint *)(*param_1 + (ulonglong)(param_2 >> 5) * 4);
  if ((uVar5 >> (param_2 & 0x1f) & 1) == 0) {
    *(uint *)(*param_1 + (ulonglong)(param_2 >> 5) * 4) = uVar5 | 1 << ((byte)param_2 & 0x1f);
    plVar7 = param_1 + 9;
    if (*(uint *)(param_1 + 0xb) <= param_2) {
      FUN_146f53f54(plVar7,(param_2 - *(uint *)(param_1 + 0xb)) + 1);
    }
    uVar4 = DAT_14c8464e8;
    uVar3 = DAT_14c8464e0;
    uVar5 = param_2 + 0x7ff;
    if (-1 < (int)param_2) {
      uVar5 = param_2;
    }
    lVar2 = *(longlong *)(*plVar7 + (longlong)((int)uVar5 >> 0xb) * 8);
    lVar6 = (ulonglong)(uint)((int)param_2 % 0x800) * 0x20;
    *(undefined8 *)(lVar2 + 0x10 + lVar6) = DAT_14c8464f0;
    puVar1 = (undefined8 *)(lVar2 + lVar6);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    *(undefined4 *)(*(longlong *)(*plVar7 + (longlong)((int)uVar5 >> 0xb) * 8) + 0x18 + lVar6) = 0;
  }
  return;
}



// FUNCTION 142aa281e FUN_142aa281e body=196 status=ok
// SIG undefined FUN_142aa281e(void)

void FUN_142aa281e(undefined8 param_1,uint param_2,int param_3,longlong param_4,uint param_5,
                  byte param_6)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = param_2 - param_3 << (-param_6 & 0x1f);
  bVar3 = -param_6 & 0x1f;
  uVar5 = (ulonglong)param_5 * 2 + 1;
  lVar1 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
    }
  }
  uVar6 = (uVar7 >> bVar3 ^ 1 << (param_6 - 1 & 0x1f)) - (1 << ((byte)(param_6 - 1) & 0x1f));
  uVar5 = (ulonglong)((int)uVar6 >> 0x1f ^ uVar6) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar4 = ((uint)lVar2 ^ 0xffffffc0) + 0x41;
  if (uVar4 <= *(byte *)(param_4 + (ulonglong)(param_5 - 1))) {
    if (param_5 != 0) {
      uVar5 = 0;
      do {
        param_6 = *(byte *)(param_4 + uVar5);
        if ((uVar7 >> bVar3 == 0) || (uVar4 <= param_6)) {
          FUN_146f5435e(param_1,(int)uVar5 + 1,lVar1);
          param_2 = uVar6;
          goto LAB_142aa28d5;
        }
        uVar5 = uVar5 + 1;
      } while (param_5 != uVar5);
    }
    return;
  }
  FUN_146f5435e(param_1,0,lVar1);
LAB_142aa28d5:
  FUN_146f5435e(param_1,param_2,param_6);
  return;
}



// FUNCTION 142aa28e2 FUN_142aa28e2 body=276 status=ok
// SIG undefined FUN_142aa28e2(void)

void FUN_142aa28e2(undefined8 param_1,ulonglong param_2,longlong param_3,longlong param_4,
                  uint param_5,byte param_6)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  
  uVar6 = (uint)param_6;
  uVar7 = (param_2 - param_3 << (-param_6 & 0x3f)) >> (-param_6 & 0x3f);
  uVar5 = (ulonglong)param_5 * 2 + 1;
  lVar2 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar5 = (uVar7 ^ 1L << ((ulonglong)(param_6 - 1) & 0x3f)) - (1L << ((byte)(param_6 - 1) & 0x3f));
  uVar4 = (longlong)uVar5 >> 0x3f ^ uVar5;
  if (uVar4 == 0) {
    uVar8 = 0x40;
  }
  else {
    lVar3 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar8 = (uint)lVar3 ^ 0x3f;
  }
  if ((uint)*(byte *)(param_4 + (ulonglong)(param_5 - 1)) < 0x41 - uVar8) {
    FUN_146f5435e(param_1,0,lVar2);
    uVar5 = param_2;
    if (0x20 < param_6) {
      FUN_146f5435e(param_1,param_2 & 0xffffffff,0x20);
      uVar6 = uVar6 - 0x20;
      uVar5 = param_2 >> 0x20;
    }
LAB_142aa29e8:
    FUN_146f5435e(param_1,uVar5 & 0xffffffff,uVar6);
    return;
  }
  if (param_5 != 0) {
    uVar4 = 0;
    do {
      bVar1 = *(byte *)(param_4 + uVar4);
      uVar6 = (uint)bVar1;
      if ((uVar7 == 0) || (0x41 - uVar8 <= (uint)bVar1)) {
        FUN_146f5435e(param_1,(int)uVar4 + 1,lVar2);
        if (0x20 < bVar1) {
          FUN_146f5435e(param_1,uVar5 & 0xffffffff,0x20);
          uVar6 = bVar1 - 0x20;
          uVar5 = uVar5 >> 0x20;
        }
        goto LAB_142aa29e8;
      }
      uVar4 = uVar4 + 1;
    } while (param_5 != uVar4);
  }
  return;
}



// FUNCTION 142aa2a40 FUN_142aa2a40 body=69 status=ok
// SIG undefined FUN_142aa2a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142aa2a40(void)

{
  _DAT_14c99a3d0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142aa2a82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99a3d8,1);
  return;
}



// FUNCTION 142aa2a92 FUN_142aa2a92 body=57 status=ok
// SIG undefined FUN_142aa2a92(void)

void FUN_142aa2a92(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    FUN_146f68584(param_1 + 0x90);
    iVar1 = param_2;
  }
  FUN_146f57da8(param_1 + 0x28,iVar1);
  *(int *)(param_1 + 0x140) = iVar1;
  return;
}



// FUNCTION 142aa2acb FUN_142aa2acb body=49 status=ok
// SIG undefined FUN_142aa2acb(void)

void FUN_142aa2acb(void)

{
  FUN_144760e21(DAT_14c99a488,DAT_14c99a490);
  if (DAT_14c99a488 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142aa2afc FUN_142aa2afc body=49 status=ok
// SIG undefined FUN_142aa2afc(void)

void FUN_142aa2afc(void)

{
  FUN_144760e21(DAT_14c99a4a8,DAT_14c99a4b0);
  if (DAT_14c99a4a8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142aa2b2d FUN_142aa2b2d body=49 status=ok
// SIG undefined FUN_142aa2b2d(void)

void FUN_142aa2b2d(void)

{
  FUN_144760e21(DAT_14c99a4c8,DAT_14c99a4d0);
  if (DAT_14c99a4c8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142aa2b5e FUN_142aa2b5e body=69 status=ok
// SIG undefined FUN_142aa2b5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142aa2b5e(void)

{
  _DAT_14c99aac8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142aa2ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99aad0,1);
  return;
}



// FUNCTION 142aa2ba4 FUN_142aa2ba4 body=768 status=ok
// SIG undefined FUN_142aa2ba4(void)

void FUN_142aa2ba4(longlong param_1,void *param_2)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *pvVar6;
  undefined1 auStack_98 [32];
  undefined ***local_78;
  undefined8 local_70;
  undefined4 local_68;
  void *local_60;
  undefined **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  uVar4 = FUN_146f546d2(uVar1,1);
  if ((uVar4 & 1) == 0) {
    if (*(void **)((longlong)param_2 + 0x40) != (void *)0x0) {
      uVar3 = 4;
      if (*(uint *)((longlong)param_2 + 0x48) < 4) {
        uVar3 = *(uint *)((longlong)param_2 + 0x48);
      }
      memmove(param_2,*(void **)((longlong)param_2 + 0x40),(ulonglong)(uVar3 << 4));
      if (*(longlong *)((longlong)param_2 + 0x40) != 0) {
        (**(code **)(*DAT_14c872d28 + 0x48))();
        *(undefined8 *)((longlong)param_2 + 0x40) = 0;
      }
    }
    *(undefined8 *)((longlong)param_2 + 0x48) = 0x400000000;
LAB_142aa2cdc:
    uVar4 = FUN_146f546d2(uVar1,1);
    if ((uVar4 & 1) == 0) {
      if (*(void **)((longlong)param_2 + 0xb0) != (void *)0x0) {
        uVar3 = 4;
        if (*(uint *)((longlong)param_2 + 0xb8) < 4) {
          uVar3 = *(uint *)((longlong)param_2 + 0xb8);
        }
        memmove((void *)((longlong)param_2 + 0x50),*(void **)((longlong)param_2 + 0xb0),
                (ulonglong)(uVar3 * 0x18));
        if (*(longlong *)((longlong)param_2 + 0xb0) != 0) {
          (**(code **)(*DAT_14c872d28 + 0x48))();
          *(undefined8 *)((longlong)param_2 + 0xb0) = 0;
        }
      }
      *(undefined8 *)((longlong)param_2 + 0xb8) = 0x400000000;
    }
    else {
      iVar2 = FUN_146f546d2(uVar1,2);
      uVar3 = FUN_146f546d2(uVar1,iVar2 * 8 + 8);
      if (0x80 < uVar3) goto LAB_142aa2e82;
      FUN_146f5934e((void *)((longlong)param_2 + 0x50),uVar3);
      local_58 = &PTR_FUN_149f897c8;
      local_50 = 0;
      pvVar6 = *(void **)((longlong)param_2 + 0xb0);
      if (*(void **)((longlong)param_2 + 0xb0) == (void *)0x0) {
        pvVar6 = (void *)((longlong)param_2 + 0x50);
      }
      if ((longlong)*(int *)((longlong)param_2 + 0xb8) != 0) {
        lVar5 = (longlong)*(int *)((longlong)param_2 + 0xb8) * 0x18;
        do {
          local_68 = 0;
          local_70 = 0;
          local_78 = &local_58;
          local_60 = pvVar6;
          (*DAT_14c99aae8)(param_1,&local_78);
          pvVar6 = (void *)((longlong)pvVar6 + 0x18);
          lVar5 = lVar5 + -0x18;
        } while (lVar5 != 0);
      }
    }
    if (*(void **)((longlong)param_2 + 0xd0) != (void *)0x0) {
      uVar3 = 4;
      if (*(uint *)((longlong)param_2 + 0xd8) < 4) {
        uVar3 = *(uint *)((longlong)param_2 + 0xd8);
      }
      memmove((void *)((longlong)param_2 + 0xc0),*(void **)((longlong)param_2 + 0xd0),
              (ulonglong)(uVar3 << 2));
      if (*(longlong *)((longlong)param_2 + 0xd0) != 0) {
        (**(code **)(*DAT_14c872d28 + 0x48))();
        *(undefined8 *)((longlong)param_2 + 0xd0) = 0;
      }
    }
    *(undefined8 *)((longlong)param_2 + 0xd8) = 0x400000000;
  }
  else {
    iVar2 = FUN_146f546d2(uVar1,2);
    uVar3 = FUN_146f546d2(uVar1,iVar2 * 8 + 8);
    if (uVar3 < 0x81) {
      FUN_146f592f4(param_2,uVar3);
      local_50 = 0;
      local_58 = &PTR_FUN_149f8c5d0;
      pvVar6 = *(void **)((longlong)param_2 + 0x40);
      if (*(void **)((longlong)param_2 + 0x40) == (void *)0x0) {
        pvVar6 = param_2;
      }
      if ((longlong)*(int *)((longlong)param_2 + 0x48) != 0) {
        lVar5 = (longlong)*(int *)((longlong)param_2 + 0x48) << 4;
        do {
          local_68 = 0;
          local_70 = 0;
          local_78 = &local_58;
          local_60 = pvVar6;
          (*DAT_14c99a4f8)(param_1,&local_78);
          pvVar6 = (void *)((longlong)pvVar6 + 0x10);
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
      }
      goto LAB_142aa2cdc;
    }
LAB_142aa2e82:
    uVar1 = DAT_14c999b78;
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar1;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142aa2ea6 FUN_142aa2ea6 body=149 status=ok
// SIG undefined FUN_142aa2ea6(void)

void FUN_142aa2ea6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  
  if ((*(byte *)(param_1 + 0x120) & 2) == 0) {
    lVar1 = *(longlong *)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0xd8);
    FUN_142aa2ba4(param_1,lVar1);
    iVar4 = FUN_146f546d2(uVar2,2);
    uVar5 = FUN_146f546d2(uVar2,iVar4 * 8 + 8);
    uVar3 = DAT_14c999b78;
    if (uVar5 < 0x10000) {
      FUN_146f59e88(lVar1,uVar5);
      FUN_146f59f56(uVar2,*(undefined8 *)(lVar1 + 0xe8),uVar5);
      return;
    }
    FUN_146f5b89e(param_1);
    if (*(longlong *)(param_1 + 8) == 0) {
      *(undefined8 *)(param_1 + 8) = uVar3;
    }
  }
  return;
}



// FUNCTION 142aa2f3b FUN_142aa2f3b body=581 status=ok
// SIG undefined FUN_142aa2f3b(void)

void FUN_142aa2f3b(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined1 auStack_468 [32];
  uint *local_448;
  uint local_43c;
  undefined1 local_438 [1024];
  undefined1 *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_468;
  uVar1 = *(uint *)(param_2 + 1);
  uVar8 = (ulonglong)uVar1;
  if (0xffff < uVar8) {
    local_438[0] = 0;
    FUN_146f5435e(param_1,0,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_468);
  }
  local_38 = (undefined1 *)0x0;
  local_30 = 0x40000000000;
  if (uVar8 == 0) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
    if (*(ushort *)*param_2 < 0x80) {
      uVar3 = 1;
      do {
        uVar7 = uVar3;
        if (uVar8 == uVar7) break;
        uVar3 = uVar7 + 1;
      } while (((ushort *)*param_2)[uVar7] < 0x80);
      bVar11 = uVar7 < uVar8;
    }
  }
  local_43c = CONCAT31(local_43c._1_3_,bVar11);
  FUN_146f5435e(param_1,bVar11 != false,1);
  if ((char)local_43c == '\0') {
    FUN_146f5435e(param_1,uVar8);
    if ((uVar8 == 0) || (*(int *)(param_1 + 0x18) != 0)) goto LAB_142aa3038;
    FUN_146f5abf6(local_438,uVar1 + 3 & 0x1fffc);
    puVar6 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar6 = local_438;
    }
    if ((longlong)(int)param_2[1] != 0) {
      lVar2 = *param_2;
      lVar5 = (longlong)(int)param_2[1] * 2;
      lVar9 = 0;
      do {
        puVar10 = local_38;
        if (local_38 == (undefined1 *)0x0) {
          puVar10 = local_438;
        }
        puVar10[(int)lVar9] = *(undefined1 *)(lVar2 + lVar9 * 2);
        lVar9 = lVar9 + 1;
        lVar5 = lVar5 + -2;
      } while (lVar5 != 0);
    }
  }
  else {
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_142aa3038;
    FUN_146f5abf6(local_438,uVar1 * 3 + 3 & 0x7fffc);
    local_448 = &local_43c;
    local_43c = 0;
    puVar6 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar6 = local_438;
    }
    bVar4 = FUN_146f5f722(puVar6,local_30 & 0xffffffff,*param_2,(int)param_2[1]);
    uVar1 = local_43c;
    if ((bVar4 & local_43c < 0x10000) == 0) {
      FUN_146f5435e(param_1,0,0x10);
      goto LAB_142aa3038;
    }
    FUN_146f5435e(param_1,local_43c,0x10);
    puVar6 = local_438;
    if (local_38 != (undefined1 *)0x0) {
      puVar6 = local_38;
    }
  }
  FUN_146f59ca6(param_1,puVar6,0,uVar1 << 3);
LAB_142aa3038:
  if (local_38 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142aa319d FUN_142aa319d body=735 status=ok
// SIG undefined FUN_142aa319d(void)

void FUN_142aa319d(undefined8 *param_1,ulonglong *param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 auStack_488 [32];
  ulonglong *local_468;
  ulonglong local_458;
  undefined4 local_450;
  undefined4 local_44c;
  undefined1 local_448 [1024];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_488;
  uVar2 = FUN_146f546d2(param_1,1);
  uVar3 = FUN_146f546d2(param_1,0x10);
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
    if ((uVar2 & 1) == 0) {
      local_48 = (undefined1 *)0x0;
      local_40 = 0x40000000000;
      FUN_146f5ac4a(local_448,(uVar3 & 0xfffffffc) + 4);
      puVar4 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar4 = local_448;
      }
      FUN_146f59f56(param_1,puVar4,uVar3 * 8);
      puVar4 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar4 = local_448;
      }
      puVar4[(int)uVar3] = 0;
      if (*(int *)((longlong)param_1 + 0x14) == 0) {
        puVar4 = local_448;
        if (local_48 != (undefined1 *)0x0) {
          puVar4 = local_48;
        }
        FUN_142746720(&local_458,puVar4,uVar3);
        if (&local_458 == param_2) {
          if (local_458 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          if (*param_2 != 0) {
            FUN_1400020a8();
          }
          *param_2 = local_458;
          local_458 = 0;
          *(undefined4 *)(param_2 + 1) = local_450;
          *(undefined4 *)((longlong)param_2 + 0xc) = local_44c;
        }
      }
    }
    else {
      local_48 = (undefined1 *)0x0;
      local_40 = 0x40000000000;
      FUN_146f5abf6(local_448,(uVar3 & 0xfffffffc) + 4);
      FUN_146f59f56(param_1);
      puVar4 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar4 = local_448;
      }
      puVar4[(int)uVar3] = 0;
      if (*(int *)((longlong)param_1 + 0x14) == 0) {
        puVar4 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar4 = local_448;
        }
        if (uVar3 != 0) {
          uVar2 = 0;
          uVar5 = 0;
          do {
            do {
              if ((uVar2 == uVar3) || (2 < uVar5)) {
                if (*(int *)(param_1 + 1) == -1) {
                  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
                  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
                  *(undefined4 *)(param_1 + 2) = *(undefined4 *)*param_1;
                }
                else {
                  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
                }
                goto LAB_142aa3431;
              }
              uVar5 = uVar5 + 1;
              uVar6 = (ulonglong)uVar2;
              uVar2 = uVar2 + ((byte)puVar4[uVar6] >> 7);
            } while ((char)puVar4[uVar6] < '\0');
            uVar2 = uVar2 + 1;
            uVar5 = 0;
          } while (uVar2 != uVar3);
        }
        uVar2 = (uVar3 + 1) * 4;
        uVar5 = uVar2 / 3;
        if (*(int *)((longlong)param_2 + 0xc) < (int)(uVar2 / 3)) {
          FUN_1446f8c06(param_2,uVar5);
        }
        local_468 = &local_458;
        local_458 = local_458 & 0xffffffff00000000;
        puVar4 = local_448;
        if (local_48 != (undefined1 *)0x0) {
          puVar4 = local_48;
        }
        cVar1 = FUN_146f5f84a(*param_2,uVar5,puVar4,uVar3 + 1);
        if (cVar1 == '\0') {
          if (*(int *)((longlong)param_1 + 0x14) == 0) {
            if (*(int *)(param_1 + 1) == -1) {
              *(undefined4 *)((longlong)param_1 + 0x14) = 0;
              *(undefined4 *)((longlong)param_1 + 0xc) = 0;
              *(undefined4 *)(param_1 + 2) = *(undefined4 *)*param_1;
            }
            else {
              *(undefined4 *)((longlong)param_1 + 0x14) = 1;
            }
          }
        }
        else {
          FUN_1409ee492(param_2,local_458 & 0xffffffff,0);
        }
      }
    }
LAB_142aa3431:
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa347d FUN_142aa347d body=393 status=ok
// SIG undefined FUN_142aa347d(void)

void FUN_142aa347d(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar1 = 0xffffffff >> (-(char)param_3 & 0x1fU);
  uVar10 = param_3 + 0x1f >> 5;
  uVar6 = 0;
  uVar9 = 0;
  if (0x1f < param_3 + 0x1f) {
    uVar3 = 1;
    uVar4 = 0;
    uVar9 = 0;
    uVar6 = 0;
    do {
      bVar11 = uVar10 - 1 == uVar4;
      uVar5 = 0xffffffff;
      if (bVar11) {
        uVar5 = uVar1;
      }
      uVar2 = 0;
      if (bVar11) {
        uVar2 = ~uVar1;
      }
      uVar5 = uVar5 & *(uint *)(param_2 + uVar4 * 4);
      bVar11 = (uVar2 | uVar5) != 0xffffffff;
      uVar2 = uVar3;
      if (bVar11) {
        uVar2 = 0;
      }
      uVar8 = 0;
      if (bVar11) {
        uVar8 = uVar3;
      }
      if (uVar5 == 0) {
        uVar8 = 0;
      }
      uVar9 = uVar9 | uVar8;
      uVar6 = uVar6 | uVar2;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 * 2;
    } while (uVar10 != uVar4);
  }
  FUN_146f5435e(param_1,uVar9,uVar10);
  uVar3 = 1;
  FUN_146f5435e(param_1,uVar6 != 0,1);
  if (uVar6 != 0) {
    FUN_146f5435e(param_1,uVar6,uVar10);
  }
  if (param_3 < 0x20) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulonglong)((param_3 - 0x20 >> 5) + 1);
    uVar3 = 1;
    uVar7 = 0;
    do {
      if ((uVar3 & uVar9) != 0) {
        FUN_142aa3606(param_1,*(undefined4 *)(param_2 + uVar7 * 4),0x20);
      }
      uVar7 = uVar7 + 1;
      uVar3 = uVar3 * 2;
    } while (uVar4 != uVar7);
    param_3 = param_3 & 0x1f;
  }
  if ((uVar3 & uVar9) == 0 || param_3 == 0) {
    return;
  }
  FUN_142aa3606(param_1,uVar1 & *(uint *)(param_2 + uVar4 * 4),param_3);
  return;
}



// FUNCTION 142aa3606 FUN_142aa3606 body=326 status=ok
// SIG undefined FUN_142aa3606(void)

void FUN_142aa3606(undefined8 param_1,uint param_2,uint param_3)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  
  uVar8 = (ulonglong)param_2;
  uVar5 = (ulonglong)param_2 - (ulonglong)(param_2 >> 1 & 0x55555555);
  uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  if ((byte)(uVar5 >> 0x38) - 1 < 3) {
    FUN_146f5435e(param_1,uVar5 >> 0x38,DAT_14c99acd8);
    if (param_2 != 0) {
      uVar7 = 0;
      do {
        uVar9 = (uint)uVar8;
        uVar8 = (ulonglong)(~uVar7 + param_3) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        uVar4 = 0;
        if (uVar9 != 0) {
          for (; (uVar9 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        FUN_146f5435e(param_1,uVar4 - uVar7,lVar2);
        uVar9 = uVar9 - 1 & uVar9;
        uVar8 = (ulonglong)uVar9;
        uVar7 = uVar4;
      } while (uVar9 != 0);
    }
    return;
  }
  uVar9 = 0;
  FUN_146f5435e(param_1,0,DAT_14c99acd8);
  iVar10 = 0;
  uVar7 = 0;
  if (0 < (int)param_3) {
    uVar4 = 1;
    uVar7 = 0;
    iVar10 = 0;
    uVar9 = 0;
    uVar3 = param_3;
    do {
      if ((uVar8 & 0xff) != 0) {
        uVar7 = uVar7 | uVar4;
        uVar9 = uVar9 | ((uint)uVar8 & 0xff) << ((byte)iVar10 & 0x1f);
        uVar6 = 8;
        if (uVar3 < 8) {
          uVar6 = uVar3;
        }
        iVar10 = iVar10 + uVar6;
      }
      uVar8 = uVar8 >> 8;
      uVar4 = uVar4 * 2;
      bVar1 = 8 < (int)uVar3;
      uVar3 = uVar3 - 8;
    } while (bVar1);
  }
  FUN_146f5435e(param_1,uVar7,param_3 + 7 >> 3);
  FUN_146f5435e(param_1,uVar9,iVar10);
  return;
}



// FUNCTION 142aa374c FUN_142aa374c body=399 status=ok
// SIG undefined FUN_142aa374c(void)

void FUN_142aa374c(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar1 = 0xffffffff >> (-(char)param_3 & 0x1fU);
  uVar10 = param_3 + 0x1f >> 5;
  uVar6 = 0;
  uVar9 = 0;
  if (0x1f < param_3 + 0x1f) {
    uVar3 = 1;
    uVar4 = 0;
    uVar9 = 0;
    uVar6 = 0;
    do {
      bVar11 = uVar10 - 1 == uVar4;
      uVar5 = 0xffffffff;
      if (bVar11) {
        uVar5 = uVar1;
      }
      uVar2 = 0;
      if (bVar11) {
        uVar2 = ~uVar1;
      }
      uVar5 = uVar5 & *(uint *)(param_2 + uVar4 * 4);
      bVar11 = (uVar2 | uVar5) != 0xffffffff;
      uVar2 = uVar3;
      if (bVar11) {
        uVar2 = 0;
      }
      uVar8 = 0;
      if (bVar11) {
        uVar8 = uVar3;
      }
      if (uVar5 == 0) {
        uVar8 = 0;
      }
      uVar9 = uVar9 | uVar8;
      uVar6 = uVar6 | uVar2;
      uVar4 = uVar4 + 1;
      uVar3 = uVar3 * 2;
    } while (uVar10 != uVar4);
  }
  FUN_146f5435e(param_1,uVar9,uVar10);
  uVar3 = 1;
  FUN_146f5435e(param_1,uVar6 != 0,1);
  if (uVar6 != 0) {
    FUN_146f5435e(param_1,uVar6,uVar10);
  }
  if (param_3 < 0x20) {
    uVar4 = 0;
  }
  else {
    uVar4 = (ulonglong)((param_3 - 0x20 >> 5) + 1);
    uVar3 = 1;
    uVar7 = 0;
    do {
      if ((uVar3 & uVar9) != 0) {
        FUN_142aa3606(param_1,~*(uint *)(param_2 + uVar7 * 4),0x20);
      }
      uVar7 = uVar7 + 1;
      uVar3 = uVar3 * 2;
    } while (uVar4 != uVar7);
    param_3 = param_3 & 0x1f;
  }
  if ((uVar3 & uVar9) == 0 || param_3 == 0) {
    return;
  }
  FUN_142aa3606(param_1,uVar1 & ~*(uint *)(param_2 + uVar4 * 4),param_3);
  return;
}



// FUNCTION 142aa38db FUN_142aa38db body=265 status=ok
// SIG undefined FUN_142aa38db(void)

void FUN_142aa38db(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar7 = param_3 + 0x1f >> 5;
  uVar1 = 0xffffffff >> (-(char)param_3 & 0x1fU);
  uVar2 = FUN_146f546d2(param_1,uVar7);
  uVar4 = 1;
  uVar6 = FUN_146f546d2(param_1,1);
  uVar5 = 0;
  if ((uVar6 & 1) != 0) {
    uVar5 = FUN_146f546d2(param_1,uVar7);
  }
  uVar6 = 0;
  if (param_3 < 0x20) {
    uVar8 = 0;
  }
  else {
    uVar8 = (ulonglong)((param_3 - 0x20 >> 5) + 1);
    uVar4 = 1;
    do {
      if ((uVar4 & uVar2) == 0) {
        iVar3 = -(uint)((uVar4 & uVar5) != 0);
      }
      else {
        iVar3 = FUN_142aa39e4(param_1,0x20);
      }
      *(int *)(param_2 + uVar6 * 4) = iVar3;
      uVar4 = uVar4 * 2;
      uVar6 = uVar6 + 1;
    } while (uVar8 != uVar6);
    param_3 = param_3 & 0x1f;
  }
  if (param_3 != 0) {
    if ((uVar4 & uVar2) == 0) {
      uVar2 = 0;
      if ((uVar4 & uVar5) != 0) {
        uVar2 = uVar1;
      }
    }
    else {
      uVar4 = FUN_142aa39e4(param_1);
      uVar2 = uVar4 & uVar1;
    }
    *(uint *)(param_2 + uVar8 * 4) = ~uVar1 & *(uint *)(param_2 + uVar8 * 4) | uVar2;
  }
  return;
}



// FUNCTION 142aa39e4 FUN_142aa39e4 body=310 status=ok
// SIG undefined FUN_142aa39e4(void)

uint FUN_142aa39e4(undefined8 param_1,int param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  iVar3 = FUN_146f546d2(param_1,DAT_14c99acd8);
  if (iVar3 == 0) {
    uVar11 = param_2 + 7U >> 3;
    uVar7 = FUN_146f546d2(param_1,uVar11);
    uVar5 = (ulonglong)uVar7 - (ulonglong)(uVar7 >> 1 & 0x55555555);
    uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
    uVar8 = -param_2 & 7;
    uVar10 = 0;
    if ((uVar7 >> (uVar11 - 1 & 0x1f) & 1) == 0) {
      uVar8 = 0;
    }
    uVar5 = FUN_146f546d2(param_1,((uint)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) *
                                          0x101010101010101 >> 0x35) & 0xfffffff8) - uVar8);
    if (7 < param_2 + 7U) {
      uVar8 = 1;
      bVar6 = 0;
      uVar10 = 0;
      do {
        uVar9 = ((uint)uVar5 & 0xff) << (bVar6 & 0x1f);
        uVar2 = uVar5 >> 8;
        bVar12 = (uVar8 & uVar7) == 0;
        if (bVar12) {
          uVar9 = 0;
        }
        uVar5 = uVar5 & 0xffffffff;
        if (!bVar12) {
          uVar5 = uVar2 & 0xffffff;
        }
        uVar10 = uVar10 | uVar9;
        bVar6 = bVar6 + 8;
        uVar8 = uVar8 * 2;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  else {
    uVar7 = 1;
    uVar10 = 0;
    uVar11 = 0;
    do {
      uVar5 = (ulonglong)(~uVar11 + param_2) * 2 + 1;
      lVar1 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = FUN_146f546d2(param_1,lVar1);
      uVar7 = uVar7 << ((byte)iVar4 & 0x1f);
      uVar11 = uVar11 + iVar4;
      uVar10 = uVar10 | uVar7;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar10;
}



// FUNCTION 142aa3b1a FUN_142aa3b1a body=269 status=ok
// SIG undefined FUN_142aa3b1a(void)

void FUN_142aa3b1a(undefined8 param_1,longlong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar6 = param_3 + 0x1f >> 5;
  uVar1 = 0xffffffff >> (-(char)param_3 & 0x1fU);
  uVar2 = FUN_146f546d2(param_1,uVar6);
  uVar3 = 1;
  uVar5 = FUN_146f546d2(param_1,1);
  uVar4 = 0;
  if ((uVar5 & 1) != 0) {
    uVar4 = FUN_146f546d2(param_1,uVar6);
  }
  uVar5 = 0;
  if (param_3 < 0x20) {
    uVar7 = 0;
  }
  else {
    uVar7 = (ulonglong)((param_3 - 0x20 >> 5) + 1);
    uVar3 = 1;
    do {
      if ((uVar3 & uVar2) == 0) {
        uVar6 = -(uint)((uVar3 & uVar4) != 0);
      }
      else {
        uVar6 = FUN_142aa39e4(param_1,0x20);
        uVar6 = ~uVar6;
      }
      *(uint *)(param_2 + uVar5 * 4) = uVar6;
      uVar3 = uVar3 * 2;
      uVar5 = uVar5 + 1;
    } while (uVar7 != uVar5);
    param_3 = param_3 & 0x1f;
  }
  if (param_3 != 0) {
    if ((uVar3 & uVar2) == 0) {
      uVar2 = 0;
      if ((uVar3 & uVar4) != 0) {
        uVar2 = uVar1;
      }
    }
    else {
      uVar3 = FUN_142aa39e4(param_1);
      uVar2 = ~uVar3 & uVar1;
    }
    *(uint *)(param_2 + uVar7 * 4) = ~uVar1 & *(uint *)(param_2 + uVar7 * 4) | uVar2;
  }
  return;
}



// FUNCTION 142aa3c28 FUN_142aa3c28 body=1730 status=ok
// SIG undefined FUN_142aa3c28(void)

void FUN_142aa3c28(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong *plVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_3e8 [40];
  longlong *local_3c0;
  int local_3b4;
  longlong *local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  longlong local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  uint local_378;
  longlong local_368;
  longlong lStack_360;
  undefined8 local_358;
  uint local_350;
  undefined4 local_34c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  local_398 = 0;
  uStack_390 = 0;
  iVar4 = (int)param_1[1];
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_146f6a15e(&local_398);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_1457538dc(&local_388,0x10,1);
  uVar13 = (ulonglong)local_378;
  local_3b0 = param_1;
  if ((-1 < (int)local_378) && ((int)local_378 < (int)uStack_380)) {
    do {
      if (param_2 != 0) {
        lVar1 = *(longlong *)(local_388 + (uVar13 & 0xffffffff) * 8);
        if ((*(int *)(param_2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8) ==
            param_2 + 0x30)) {
          if (lVar1 != 0) {
            uVar11 = *(uint *)(param_1 + 1);
            if ((longlong)(int)uVar11 != 0) {
              lVar15 = 0;
              iVar4 = 0;
              do {
                if (*(longlong *)(*param_1 + lVar15) == lVar1) {
                  if (iVar4 != 1) {
                    lVar15 = *param_1 + (ulonglong)(uint)-iVar4 * 0x10;
                    if (uVar11 <= (uint)-iVar4) {
                      lVar15 = 0;
                    }
                    lVar15 = *(longlong *)(lVar15 + 8);
                    if (lVar15 == 0) goto LAB_142aa3d86;
                    if ((*(byte *)(lVar15 + 0xb8) & 8) != 0) {
                      LOCK();
                      *(int *)(lVar15 + 0xbc) = *(int *)(lVar15 + 0xbc) + 1;
                      UNLOCK();
                    }
                    goto LAB_142aa3dfd;
                  }
                  break;
                }
                iVar4 = iVar4 + -1;
                lVar15 = lVar15 + 0x10;
              } while ((longlong)(int)uVar11 << 4 != lVar15);
            }
          }
          local_368 = 0;
          lStack_360 = 0;
          local_358 = 0;
          local_350 = local_350 & 0xffffffe0 | 7;
          local_34c = 0xffffffff;
          FUN_142a6f4a0(&local_3a0,*(undefined8 *)(local_388 + (longlong)(int)uVar13 * 8),&local_368
                       );
          lVar15 = local_3a0;
          if (local_3a0 != 0) {
LAB_142aa3dfd:
            uVar13 = uStack_390;
            lVar17 = (longlong)(int)uStack_390;
            uVar11 = (int)uStack_390 + 1;
            uStack_390 = CONCAT44(uStack_390._4_4_,uVar11);
            if (uStack_390._4_4_ < uVar11) {
              FUN_146f6a1b4(&local_398,uVar13 & 0xffffffff);
            }
            param_1 = local_3b0;
            *(longlong *)(local_398 + lVar17 * 0x10) = lVar1;
            *(longlong *)(local_398 + 8 + lVar17 * 0x10) = lVar15;
            uVar11 = *(uint *)(lVar15 + 0xb8);
            if ((uVar11 & 8) != 0) {
              LOCK();
              *(int *)(lVar15 + 0xbc) = *(int *)(lVar15 + 0xbc) + 1;
              UNLOCK();
              uVar11 = *(uint *)(lVar15 + 0xb8);
            }
            *(uint *)(local_3b0 + 2) = *(uint *)(local_3b0 + 2) | uVar11 & 4;
            FUN_146f11920(lVar15);
          }
        }
      }
LAB_142aa3d86:
      uVar13 = (longlong)(int)local_378;
      do {
        uVar14 = uVar13;
        uVar13 = uVar14 + 1;
        local_378 = (uint)uVar13;
        if ((longlong)(int)uStack_380 <= (longlong)uVar13) break;
      } while (*(longlong *)(local_388 + uVar13 * 8) == 0);
    } while ((-2 < (longlong)uVar14) && ((int)local_378 < (int)uStack_380));
  }
  if (local_388 != 0) {
    FUN_1400020a8();
  }
  lVar1 = local_398;
  iVar4 = (int)uStack_390;
  lVar15 = (longlong)(int)uStack_390;
  if (1 < lVar15) {
    memset(&local_358,0,0x2f0);
    local_368 = lVar1;
    lStack_360 = lVar15 * 0x10 + lVar1 + -0x10;
    fVar22 = logf((float)iVar4);
    local_358 = CONCAT44(local_358._4_4_,(int)(longlong)(fVar22 + fVar22));
    plVar6 = &local_368;
    do {
      plVar8 = (longlong *)*plVar6;
      plVar10 = (longlong *)plVar6[1];
      iVar4 = (int)plVar6[2];
      iVar3 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar8) >> 4);
      uVar11 = iVar3 + 1;
      plVar16 = plVar8;
      plVar18 = plVar10;
      local_3c0 = plVar6;
      if (iVar4 != 0) {
LAB_142aa3efb:
        if (8 < (int)uVar11) {
          lVar1 = plVar8[(ulonglong)(uVar11 >> 1) * 2];
          lVar15 = (plVar8 + (ulonglong)(uVar11 >> 1) * 2)[1];
          lVar17 = plVar8[1];
          plVar8[(ulonglong)(uVar11 >> 1) * 2] = *plVar8;
          (plVar8 + (ulonglong)(uVar11 >> 1) * 2)[1] = lVar17;
          local_388._0_4_ = (undefined4)lVar1;
          local_388._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
          uStack_380._0_4_ = (int)lVar15;
          uStack_380._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
          *(undefined4 *)plVar8 = (undefined4)local_388;
          *(undefined4 *)((longlong)plVar8 + 4) = local_388._4_4_;
          *(int *)(plVar8 + 1) = (int)uStack_380;
          *(undefined4 *)((longlong)plVar8 + 0xc) = uStack_380._4_4_;
          plVar20 = plVar18 + 2;
          plVar12 = plVar8;
          local_3b4 = iVar4;
          local_3a8 = plVar16;
          local_388 = lVar1;
          uStack_380 = lVar15;
          do {
            plVar6 = plVar12 + 2;
            plVar19 = plVar12 + 2;
            do {
              plVar12 = plVar19;
              plVar16 = plVar6;
              if (plVar18 < plVar12) break;
              cVar2 = FUN_142aa498c(plVar8,plVar12);
              plVar6 = plVar16 + 2;
              plVar19 = plVar12 + 2;
            } while (cVar2 == '\0');
            plVar6 = plVar20 + -4;
            do {
              plVar19 = plVar20;
              plVar5 = plVar6;
              plVar20 = plVar19 + -2;
              if (plVar20 <= plVar8) break;
              cVar2 = FUN_142aa498c(plVar20,plVar8);
              plVar6 = plVar5 + -2;
            } while (cVar2 == '\0');
            if (plVar20 < plVar12) goto LAB_142aa3fab;
            lVar1 = *plVar12;
            lVar15 = plVar12[1];
            lVar17 = plVar19[-1];
            *plVar12 = *plVar20;
            plVar12[1] = lVar17;
            local_388._0_4_ = (undefined4)lVar1;
            local_388._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
            uStack_380._0_4_ = (int)lVar15;
            uStack_380._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
            *(undefined4 *)plVar20 = (undefined4)local_388;
            *(undefined4 *)((longlong)plVar19 + -0xc) = local_388._4_4_;
            *(int *)(plVar19 + -1) = (int)uStack_380;
            *(undefined4 *)((longlong)plVar19 + -4) = uStack_380._4_4_;
            local_388 = lVar1;
            uStack_380 = lVar15;
          } while( true );
        }
        for (; plVar6 = local_3c0, plVar16 = plVar8, plVar10 = plVar8, plVar8 < plVar18;
            plVar18 = plVar18 + -2) {
          while (plVar6 = plVar16, plVar10 = plVar10 + 2, plVar10 <= plVar18) {
            cVar2 = FUN_142aa498c(plVar6,plVar10);
            plVar16 = plVar10;
            if (cVar2 == '\0') {
              plVar16 = plVar6;
            }
          }
          lVar1 = *plVar6;
          lVar15 = plVar6[1];
          lVar17 = plVar18[1];
          *plVar6 = *plVar18;
          plVar6[1] = lVar17;
          local_388._0_4_ = (undefined4)lVar1;
          local_388._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
          uStack_380._0_4_ = (int)lVar15;
          uStack_380._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
          *(undefined4 *)plVar18 = (undefined4)local_388;
          *(undefined4 *)((longlong)plVar18 + 4) = local_388._4_4_;
          *(int *)(plVar18 + 1) = (int)uStack_380;
          *(undefined4 *)((longlong)plVar18 + 0xc) = uStack_380._4_4_;
          local_388 = lVar1;
          uStack_380 = lVar15;
        }
        goto LAB_142aa426b;
      }
LAB_142aa406d:
      plVar6 = local_3c0;
      if (uVar11 != 0) {
        iVar4 = (iVar3 - (iVar3 + -1 >> 0x1f)) + -1 >> 1;
        iVar3 = iVar4;
joined_r0x000142aa4090:
        do {
          iVar7 = iVar4 * 2 + 1;
          if (iVar7 < (int)uVar11) {
            iVar9 = iVar4 * 2 + 2;
            if ((iVar9 < (int)uVar11) &&
               (cVar2 = FUN_142aa498c(plVar8 + (longlong)iVar9 * 2,plVar8 + (longlong)iVar7 * 2),
               cVar2 == '\0')) {
              iVar7 = iVar9;
            }
            plVar6 = plVar8 + (longlong)iVar4 * 2;
            plVar18 = plVar8 + (longlong)iVar7 * 2;
            cVar2 = FUN_142aa498c(plVar6,plVar18);
            if (cVar2 != '\0') {
              lVar1 = *plVar6;
              lVar15 = plVar6[1];
              lVar17 = plVar18[1];
              *plVar6 = *plVar18;
              plVar6[1] = lVar17;
              local_388._0_4_ = (undefined4)lVar1;
              local_388._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
              uStack_380._0_4_ = (int)lVar15;
              uStack_380._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
              *(undefined4 *)plVar18 = (undefined4)local_388;
              *(undefined4 *)((longlong)plVar18 + 4) = local_388._4_4_;
              *(int *)(plVar18 + 1) = (int)uStack_380;
              *(undefined4 *)((longlong)plVar18 + 0xc) = uStack_380._4_4_;
              iVar4 = iVar7;
              local_388 = lVar1;
              uStack_380 = lVar15;
              goto joined_r0x000142aa4090;
            }
          }
          bVar21 = iVar3 != 0;
          iVar4 = iVar3 + -1;
          iVar3 = iVar4;
        } while (bVar21);
        plVar6 = local_3c0;
        if (1 < (int)uVar11) {
          uVar13 = (ulonglong)uVar11 - 1;
          lVar1 = *plVar8;
          lVar15 = plVar8[1];
          lVar17 = (plVar8 + uVar13 * 2)[1];
          *plVar8 = plVar8[uVar13 * 2];
          plVar8[1] = lVar17;
          local_388._0_4_ = (undefined4)lVar1;
          local_388._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
          uStack_380._0_4_ = (int)lVar15;
          uStack_380._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
          plVar18 = plVar8 + uVar13 * 2;
          *(undefined4 *)plVar18 = (undefined4)local_388;
          *(undefined4 *)((longlong)plVar18 + 4) = local_388._4_4_;
          *(int *)(plVar18 + 1) = (int)uStack_380;
          *(undefined4 *)((longlong)plVar18 + 0xc) = uStack_380._4_4_;
          local_388 = lVar1;
          uStack_380 = lVar15;
          if (uVar11 != 2) {
            do {
              iVar4 = 0;
              iVar7 = 1;
              iVar3 = 0;
              do {
                iVar4 = iVar4 + 2;
                iVar9 = iVar7;
                if (((longlong)iVar4 < (longlong)uVar13) &&
                   (cVar2 = FUN_142aa498c(plVar8 + (longlong)iVar4 * 2,plVar8 + (longlong)iVar7 * 2)
                   , cVar2 == '\0')) {
                  iVar9 = iVar4;
                }
                plVar6 = plVar8 + (longlong)iVar3 * 2;
                plVar18 = plVar8 + (longlong)iVar9 * 2;
                cVar2 = FUN_142aa498c(plVar6,plVar18);
                if (cVar2 == '\0') break;
                lVar1 = *plVar6;
                lVar15 = plVar6[1];
                lVar17 = plVar18[1];
                *plVar6 = *plVar18;
                plVar6[1] = lVar17;
                local_388._0_4_ = (undefined4)lVar1;
                local_388._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
                uStack_380._0_4_ = (int)lVar15;
                uStack_380._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
                *(undefined4 *)plVar18 = (undefined4)local_388;
                *(undefined4 *)((longlong)plVar18 + 4) = local_388._4_4_;
                *(int *)(plVar18 + 1) = (int)uStack_380;
                *(undefined4 *)((longlong)plVar18 + 0xc) = uStack_380._4_4_;
                iVar4 = iVar9 * 2;
                iVar7 = iVar9 * 2 + 1;
                local_388 = lVar1;
                uStack_380 = lVar15;
                iVar3 = iVar9;
              } while ((longlong)iVar7 < (longlong)uVar13);
              uVar14 = uVar13 - 1;
              lVar1 = *plVar8;
              lVar15 = plVar8[1];
              lVar17 = (plVar8 + uVar14 * 2)[1];
              *plVar8 = plVar8[uVar14 * 2];
              plVar8[1] = lVar17;
              local_388._0_4_ = (undefined4)lVar1;
              local_388._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
              uStack_380._0_4_ = (int)lVar15;
              uStack_380._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
              plVar6 = plVar8 + uVar14 * 2;
              *(undefined4 *)plVar6 = (undefined4)local_388;
              *(undefined4 *)((longlong)plVar6 + 4) = local_388._4_4_;
              *(int *)(plVar6 + 1) = (int)uStack_380;
              *(undefined4 *)((longlong)plVar6 + 0xc) = uStack_380._4_4_;
              bVar21 = 2 < uVar13;
              plVar6 = local_3c0;
              uVar13 = uVar14;
              local_388 = lVar1;
              uStack_380 = lVar15;
            } while (bVar21);
          }
        }
      }
LAB_142aa426b:
      plVar6 = plVar6 + -3;
      param_1 = local_3b0;
    } while (&local_368 <= plVar6);
  }
  FUN_146f5d53c(param_1,&local_398);
  FUN_145a37fb9(local_398,uStack_390 & 0xffffffff);
  if (local_398 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_142aa3fab:
  lVar1 = *plVar8;
  lVar15 = plVar8[1];
  lVar17 = plVar19[-1];
  *plVar8 = *plVar20;
  plVar8[1] = lVar17;
  local_388._0_4_ = (undefined4)lVar1;
  local_388._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
  uStack_380._0_4_ = (int)lVar15;
  uStack_380._4_4_ = (undefined4)((ulonglong)lVar15 >> 0x20);
  *(undefined4 *)plVar20 = (undefined4)local_388;
  *(undefined4 *)((longlong)plVar19 + -0xc) = local_388._4_4_;
  *(int *)(plVar19 + -1) = (int)uStack_380;
  *(undefined4 *)((longlong)plVar19 + -4) = uStack_380._4_4_;
  iVar4 = local_3b4 + -1;
  plVar19 = plVar19 + -4;
  local_388 = lVar1;
  uStack_380 = lVar15;
  if ((longlong)plVar5 - (longlong)local_3a8 < (longlong)plVar10 - (longlong)plVar16) {
    plVar6 = local_3c0;
    if (plVar12 < plVar18) {
      *local_3c0 = (longlong)plVar12;
      local_3c0[1] = (longlong)plVar18;
      *(int *)(local_3c0 + 2) = iVar4;
      plVar6 = local_3c0 + 3;
    }
    plVar16 = plVar8;
    plVar10 = plVar5;
    if (plVar20 <= plVar8 + 2) goto LAB_142aa426b;
  }
  else {
    if (plVar8 + 2 < plVar20) {
      *local_3c0 = (longlong)plVar8;
      local_3c0[1] = (longlong)plVar19;
      *(int *)(local_3c0 + 2) = iVar4;
      local_3c0 = local_3c0 + 3;
    }
    plVar6 = local_3c0;
    plVar8 = plVar12;
    plVar19 = plVar18;
    plVar10 = plVar18;
    if (plVar18 <= plVar12) goto LAB_142aa426b;
  }
  local_3c0 = plVar6;
  iVar3 = (int)((ulonglong)((longlong)plVar10 - (longlong)plVar16) >> 4);
  uVar11 = iVar3 + 1;
  plVar18 = plVar19;
  if (iVar4 == 0) goto LAB_142aa406d;
  goto LAB_142aa3efb;
}



// FUNCTION 142aa42ec FUN_142aa42ec body=344 status=ok
// SIG undefined FUN_142aa42ec(void)

void FUN_142aa42ec(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x120) & 2) == 0) {
    puVar1 = *(undefined4 **)(param_2 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0xd8);
    uVar6 = FUN_146f546d2(lVar2);
    if ((uVar6 & 1) == 0) {
      uVar5 = FUN_146f546d2(lVar2,DAT_14c99b908);
      if (uVar5 != 0) {
        if (DAT_14c87ead8 == '\0') {
          FUN_140024d3a(&DAT_14c87eb00);
          DAT_14c87ead8 = '\x01';
        }
        uVar3 = DAT_14c99c010;
        if (0x44c < uVar5) {
          FUN_146f5b89e(param_1);
          if (*(longlong *)(param_1 + 8) == 0) {
            *(undefined8 *)(param_1 + 8) = uVar3;
          }
          goto LAB_142aa430d;
        }
      }
      *(byte *)(puVar1 + 2) = *(byte *)(puVar1 + 2) & 0xfc;
      puVar1[1] = uVar5;
      *puVar1 = 0;
    }
    else {
      *(byte *)(puVar1 + 2) = *(byte *)(puVar1 + 2) | 1;
      if ((*(longlong **)(param_1 + 0xf0) == (longlong *)0x0) ||
         (lVar7 = **(longlong **)(param_1 + 0xf0), lVar7 == 0)) {
        lVar7 = 0;
      }
      else {
        lVar7 = *(longlong *)(*(longlong *)(lVar7 + 0x28) + 0x58);
      }
      uVar4 = 0;
      if ((longlong)*(int *)(lVar7 + 0x20) != 0) {
        plVar8 = *(longlong **)(lVar7 + 0x18);
        lVar7 = (longlong)*(int *)(lVar7 + 0x20) << 4;
        do {
          if (*plVar8 == DAT_14c9995fc) {
            uVar4 = 0;
            if ((plVar8 != (longlong *)0x0) && (plVar8[1] != 0)) {
              FUN_146f2921e(&local_2c,param_1,*(undefined4 *)(plVar8[1] + 0x20));
              uVar4 = local_2c;
            }
            break;
          }
          plVar8 = plVar8 + 2;
          lVar7 = lVar7 + -0x10;
          uVar4 = 0;
        } while (lVar7 != 0);
      }
      if (*(int *)(lVar2 + 0x14) == 0) {
        *puVar1 = uVar4;
      }
    }
  }
LAB_142aa430d:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142aa4446 FUN_142aa4446 body=173 status=ok
// SIG undefined FUN_142aa4446(void)

void FUN_142aa4446(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(*param_2 + 0x10);
  uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
  if (uVar1 != 0) {
    lVar3 = *plVar2;
    lVar4 = plVar2[2];
    lVar5 = 0;
    do {
      local_50 = 0;
      local_60 = *(undefined8 *)(lVar4 + 8 + lVar5 * 2);
      local_48 = (ulonglong)*(uint *)(lVar3 + 4 + lVar5) + param_2[3];
      local_58 = param_2[1];
      (**(code **)(*(longlong *)(lVar4 + lVar5 * 2) + 8))(param_1,&local_60);
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa44f4 FUN_142aa44f4 body=220 status=ok
// SIG undefined FUN_142aa44f4(void)

void FUN_142aa44f4(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(*param_2 + 0x10);
  uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
  if (uVar1 != 0) {
    lVar3 = *plVar2;
    lVar4 = plVar2[2];
    lVar5 = 0;
    do {
      local_50 = 0;
      local_60 = *(undefined8 *)(lVar4 + 8 + lVar5 * 2);
      local_48 = (ulonglong)*(uint *)(lVar3 + 4 + lVar5) + param_2[3];
      local_58 = param_2[1];
      (**(code **)(*(longlong *)(lVar4 + lVar5 * 2) + 0x10))(param_1,&local_60);
      if (((*(longlong *)(param_1 + 8) != 0) ||
          ((*(longlong *)(param_1 + 0xd8) != 0 &&
           (*(int *)(*(longlong *)(param_1 + 0xd8) + 0x14) != 0)))) ||
         ((*(longlong *)(param_1 + 0xe0) != 0 &&
          (*(int *)(*(longlong *)(param_1 + 0xe0) + 0x18) != 0)))) break;
      lVar5 = lVar5 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar5);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa45d2 FUN_142aa45d2 body=330 status=ok
// SIG undefined FUN_142aa45d2(void)

void FUN_142aa45d2(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_a8 [39];
  char local_81;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(*param_2 + 0x10);
  uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
  if (uVar1 != 0) {
    lVar3 = *plVar2;
    lVar4 = plVar2[2];
    local_80 = *(undefined8 *)(param_1 + 0xe0);
    lVar7 = 0;
    do {
      puVar5 = *(undefined **)(lVar4 + lVar7 * 2);
      if (puVar5 == &DAT_14c99c038) {
        local_68 = 0;
        local_50 = 1;
        local_78 = *(undefined8 *)(lVar4 + 8 + lVar7 * 2);
        uVar6 = (ulonglong)*(uint *)(lVar3 + 4 + lVar7);
        local_60 = param_2[3] + uVar6;
        local_58 = uVar6 + param_2[4];
        local_70 = param_2[1];
        local_81 = FUN_146f5fa22(param_1,&local_78);
        FUN_146f5435e(local_80,local_81 != '\0',1);
        if (local_81 == '\0') goto LAB_142aa463b;
      }
      else {
LAB_142aa463b:
        local_68 = 0;
        local_78 = *(undefined8 *)(lVar4 + 8 + lVar7 * 2);
        uVar6 = (ulonglong)*(uint *)(lVar3 + 4 + lVar7);
        local_60 = param_2[3] + uVar6;
        local_58 = uVar6 + param_2[4];
        local_70 = param_2[1];
        (**(code **)(puVar5 + 0x18))(param_1,&local_78);
      }
      lVar7 = lVar7 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142aa471e FUN_142aa471e body=356 status=ok
// SIG undefined FUN_142aa471e(void)

void FUN_142aa471e(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = *(longlong **)(*param_2 + 0x10);
  uVar1 = *(ushort *)((longlong)plVar2 + 0x7c);
  if (uVar1 != 0) {
    lVar3 = *plVar2;
    lVar4 = plVar2[2];
    local_78 = *(undefined8 *)(param_1 + 0xd8);
    lVar7 = 0;
    do {
      puVar5 = *(undefined **)(lVar4 + lVar7 * 2);
      if ((puVar5 == &DAT_14c99c038) && (uVar6 = FUN_146f546d2(local_78,1), (uVar6 & 1) != 0)) {
        local_68 = 0;
        local_70 = *(undefined8 *)(lVar4 + 8 + lVar7 * 2);
        local_60 = (undefined4)param_2[2];
        uVar6 = (ulonglong)*(uint *)(lVar3 + 4 + lVar7);
        local_58 = param_2[4] + uVar6;
        local_50 = uVar6 + param_2[3];
        FUN_146f5fb64(param_1,&local_70);
      }
      else {
        local_60 = 0;
        local_70 = *(undefined8 *)(lVar4 + 8 + lVar7 * 2);
        uVar6 = (ulonglong)*(uint *)(lVar3 + 4 + lVar7);
        local_58 = param_2[3] + uVar6;
        local_50 = uVar6 + param_2[4];
        local_68 = param_2[1];
        (**(code **)(puVar5 + 0x20))(param_1,&local_70);
        if (((*(longlong *)(param_1 + 8) != 0) ||
            ((*(longlong *)(param_1 + 0xd8) != 0 &&
             (*(int *)(*(longlong *)(param_1 + 0xd8) + 0x14) != 0)))) ||
           ((*(longlong *)(param_1 + 0xe0) != 0 &&
            (*(int *)(*(longlong *)(param_1 + 0xe0) + 0x18) != 0)))) break;
      }
      lVar7 = lVar7 + 8;
    } while ((ulonglong)uVar1 * 8 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142aa4883 FUN_142aa4883 body=69 status=ok
// SIG undefined FUN_142aa4883(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142aa4883(void)

{
  _DAT_14c99bea0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142aa48c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14c99bea8,1);
  return;
}



// FUNCTION 142aa48d6 FUN_142aa48d6 body=108 status=ok
// SIG undefined FUN_142aa48d6(void)

void FUN_142aa48d6(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xf0) + 8);
  if ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 0x28) & 2) == 0) {
    local_18 = *param_2;
    uStack_14 = param_2[1];
    uStack_10 = param_2[2];
    uStack_c = param_2[3];
    FUN_142a844e6(uVar1,param_1);
  }
  else {
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    FUN_142a84392(uVar1,param_1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa4943 FUN_142aa4943 body=32 status=ok
// SIG undefined FUN_142aa4943(void)

void FUN_142aa4943(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined4 uStack_34;
  ulonglong uStack_30;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 8);
  if ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 0x28) & 2) == 0) {
    FUN_142a84236();
    return;
  }
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_146f546d2(*(undefined8 *)(param_1 + 0xd8),1);
  if ((uVar2 & 1) == 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0xf0) + 0x28) & 2) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(uStack_30 ^ (ulonglong)auStack_68);
    }
    uStack_48 = 0;
    uStack_40 = 0;
    FUN_142a83e5a(lVar1,param_1,&uStack_48,0);
    *(undefined4 *)param_2 = (undefined4)uStack_48;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_48._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
  }
  else {
    FUN_146f5b9f7(&uStack_48,param_1);
    FUN_146f2921e(&uStack_34,param_1,*(undefined4 *)(*(longlong *)(lVar1 + 0x108) + 0x20));
    FUN_146f2962e(*(undefined8 *)(lVar1 + 0x100),param_1,uStack_34);
    *param_2 = uStack_48;
    *(undefined4 *)(param_2 + 1) = uStack_34;
  }
  if ((uStack_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa4964 FUN_142aa4964 body=36 status=ok
// SIG undefined FUN_142aa4964(void)

undefined8 FUN_142aa4964(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 142aa498c FUN_142aa498c body=436 status=ok
// SIG undefined FUN_142aa498c(void)

bool FUN_142aa498c(longlong *param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *(undefined2 **)(*param_2 + 0x18);
  FUN_1400021e4(&local_68,&local_58);
  iVar9 = (int)uStack_50;
  puVar4 = local_58;
  uVar5 = (int)uStack_50 - 1;
  if ((int)uStack_50 == 0) {
    uVar5 = 0;
  }
  if (0 < (int)uVar5) {
    uVar7 = 0;
    do {
      local_58[uVar7] = (ushort)((ushort)local_58[uVar7] - 0x41 < 0x1a) * 0x20 + local_58[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  local_48 = *(undefined8 *)(*param_1 + 0x18);
  FUN_1400021e4();
  puVar3 = local_68;
  uVar5 = (int)uStack_60 - 1;
  if ((int)uStack_60 == 0) {
    uVar5 = 0;
  }
  if (0 < (int)uVar5) {
    uVar7 = 0;
    do {
      local_68[uVar7] = (ushort)((ushort)local_68[uVar7] - 0x41 < 0x1a) * 0x20 + local_68[uVar7];
      uVar7 = uVar7 + 1;
    } while (uVar5 != uVar7);
  }
  puVar8 = puVar4;
  if (iVar9 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  puVar6 = &DAT_149dfb77a;
  if ((int)uStack_60 != 0) {
    puVar6 = local_68;
  }
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  lVar10 = 0;
  while( true ) {
    uVar1 = *(ushort *)((longlong)puVar6 + lVar10);
    uVar5 = (uint)uVar1;
    uVar2 = *(ushort *)((longlong)puVar8 + lVar10);
    uVar11 = (uint)uVar2;
    if (uVar1 != uVar2) {
      if ((uVar2 | uVar1) < 0x80) {
        uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
        uVar11 = (uint)(byte)(&DAT_149e05da0)[uVar2];
        if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_142aa4ab7;
      }
      iVar9 = uVar5 - uVar11;
      goto LAB_142aa4ae2;
    }
    if (uVar1 == 0) break;
LAB_142aa4ab7:
    lVar10 = lVar10 + 2;
  }
  iVar9 = 0;
LAB_142aa4ae2:
  if ((puVar3 != (undefined2 *)0x0) && (FUN_1400020a8(), local_68 != (undefined2 *)0x0)) {
    FUN_1400020a8();
  }
  if (puVar4 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0 < iVar9;
}



// FUNCTION 142aa4b41 FUN_142aa4b41 body=12387 status=ok
// SIG undefined FUN_142aa4b41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142aa4b41(void)

{
  uint uVar1;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_14282b410(L"/Script/IrisCore",&PTR_FUN_149f9e500,1,0);
  _DAT_14c99bf88 = 0x300000000;
  _DAT_14c99bf90 = FUN_146f541e8;
  _DAT_14c99bf98 = FUN_146f54556;
  _DAT_14c99bfa0 = FUN_146f54860;
  _DAT_14c99bfa8 = FUN_146f54ad8;
  _DAT_14c99bfb0 = FUN_146f54d72;
  DAT_14c99bfb8 = FUN_146f55032;
  DAT_14c99bfc0 = FUN_146f552aa;
  _DAT_14c99bfc8 = FUN_146f555b6;
  _DAT_14c99bfd0 = FUN_146f55776;
  _DAT_14c99bfd8 = &LAB_146f55886;
  _DAT_14c99bfe0 = FUN_146f5442c;
  _DAT_14c99bfe8 = 0;
  uRam000000014c99bff0 = 0;
  _DAT_14c99bff8 = 0x8004000080010;
  _DAT_14c99c000 = L"FArrayPropertyNetSerializer";
  _DAT_14c999b80 = 0;
  _DAT_14c999b88 = &LAB_146f55a0a;
  _DAT_14c999b90 = FUN_146f55a24;
  _DAT_14c999b98 = &LAB_146f6044e;
  _DAT_14c999ba0 = FUN_146f60467;
  _DAT_14c999ba8 = &LAB_146f55a4a;
  _DAT_14c999bb0 = &LAB_146f55a5e;
  _DAT_14c999bb8 = &LAB_146f55a80;
  _DAT_14c999bc0 = &LAB_146f55aa2;
  _DAT_14c999be8 = 0;
  _DAT_14c999bd8 = 0;
  uRam000000014c999be0 = 0;
  _DAT_14c999bc8 = 0;
  uRam000000014c999bd0 = 0;
  _DAT_14c999bf0 = 0x8001800010001;
  _DAT_14c999bf8 = L"FBitfieldNetSerializer";
  _DAT_14c999c00 = 0;
  _DAT_14c999c08 = &LAB_146f55e48;
  _DAT_14c999c10 = FUN_146f55e66;
  _DAT_14c999c18 = &LAB_146f6048c;
  _DAT_14c999c20 = FUN_146f604aa;
  _DAT_14c999c28 = &LAB_146f604cf;
  _DAT_14c999c30 = &LAB_146f604dc;
  _DAT_14c999c38 = &LAB_146f55e8c;
  _DAT_14c999c40 = &LAB_146f55ea4;
  _DAT_14c999c48 = 0;
  uRam000000014c999c50 = 0;
  _DAT_14c999c58 = 0;
  uRam000000014c999c60 = 0;
  _DAT_14c999c68 = &DAT_14c999c80;
  _DAT_14c999c70 = 0x8001000010001;
  _DAT_14c999c78 = L"FBoolNetSerializer";
  _DAT_14c999c88 = 0;
  _DAT_14c999c80 = &PTR_FUN_149f8c180;
  _DAT_14c999c98 = 0;
  _DAT_14c999c90 = &PTR_FUN_149f897c0;
  _DAT_14c999ca0 = 0;
  _DAT_14c999ca8 = FUN_146f55eb0;
  _DAT_14c999cb0 = FUN_146f55eee;
  _DAT_14c999cb8 = FUN_146f604e9;
  _DAT_14c999cc0 = FUN_146f6056c;
  _DAT_14c999cc8 = &LAB_146f55f32;
  _DAT_14c999cd0 = &LAB_146f55f42;
  _DAT_14c999cd8 = &LAB_146f55f52;
  _DAT_14c999ce0 = &LAB_146f605d7;
  _DAT_14c999cf8 = 0;
  uRam000000014c999d00 = 0;
  _DAT_14c999ce8 = 0;
  uRam000000014c999cf0 = 0;
  _DAT_14c999d08 = &DAT_14c999c90;
  _DAT_14c999d10 = 0x8001000080008;
  _DAT_14c999d18 = L"FDateTimeNetSerializer";
  _DAT_14c999d20 = 0;
  _DAT_14c999d28 = &LAB_146f605da;
  _DAT_14c999d30 = &LAB_146f60646;
  _DAT_14c999d38 = &LAB_146f60694;
  _DAT_14c999d40 = &LAB_146f6070c;
  _DAT_14c999d48 = &LAB_146f607b4;
  _DAT_14c999d50 = FUN_146f607e0;
  _DAT_14c999d58 = &LAB_146f6083e;
  _DAT_14c999d60 = FUN_146f6088c;
  _DAT_14c999d88 = 0;
  _DAT_14c999d78 = 0;
  uRam000000014c999d80 = 0;
  _DAT_14c999d68 = 0;
  uRam000000014c999d70 = 0;
  _DAT_14c999d90 = 0x8002000010001;
  _DAT_14c999d98 = L"FEnumInt8NetSerializer";
  _DAT_14c999da0 = 0;
  _DAT_14c999da8 = &LAB_146f608e6;
  _DAT_14c999db0 = &LAB_146f60952;
  _DAT_14c999db8 = &LAB_146f609a0;
  _DAT_14c999dc0 = &LAB_146f60a18;
  _DAT_14c999dc8 = &LAB_146f60ac2;
  _DAT_14c999dd0 = FUN_146f60af0;
  _DAT_14c999dd8 = &LAB_146f60b52;
  _DAT_14c999de0 = FUN_146f60ba8;
  _DAT_14c999e08 = 0;
  _DAT_14c999df8 = 0;
  uRam000000014c999e00 = 0;
  _DAT_14c999de8 = 0;
  uRam000000014c999df0 = 0;
  _DAT_14c999e10 = 0x8002000020002;
  _DAT_14c999e18 = L"FEnumInt16NetSerializer";
  _DAT_14c999e20 = 0;
  _DAT_14c999e28 = &LAB_146f60c06;
  _DAT_14c999e30 = &LAB_146f60c70;
  _DAT_14c999e38 = &LAB_146f60cbe;
  _DAT_14c999e40 = &LAB_146f60d34;
  _DAT_14c999e48 = &LAB_146f60db2;
  _DAT_14c999e50 = FUN_146f60ddc;
  _DAT_14c999e58 = &LAB_146f60e36;
  _DAT_14c999e60 = FUN_146f60e7e;
  _DAT_14c999e88 = 0;
  _DAT_14c999e78 = 0;
  uRam000000014c999e80 = 0;
  _DAT_14c999e68 = 0;
  uRam000000014c999e70 = 0;
  _DAT_14c999e90 = 0x8002800040004;
  _DAT_14c999e98 = L"FEnumInt32NetSerializer";
  _DAT_14c999ea0 = 0;
  _DAT_14c999ea8 = &LAB_146f60ed6;
  _DAT_14c999eb0 = &LAB_146f60f66;
  _DAT_14c999eb8 = &LAB_146f60fe2;
  _DAT_14c999ec0 = &LAB_146f61058;
  _DAT_14c999ec8 = &LAB_146f610d6;
  _DAT_14c999ed0 = FUN_146f61102;
  _DAT_14c999ed8 = &LAB_146f6115e;
  _DAT_14c999ee0 = FUN_146f611b0;
  _DAT_14c999f08 = 0;
  _DAT_14c999ef8 = 0;
  uRam000000014c999f00 = 0;
  _DAT_14c999ee8 = 0;
  uRam000000014c999ef0 = 0;
  _DAT_14c999f10 = 0x8003000080008;
  _DAT_14c999f18 = L"FEnumInt64NetSerializer";
  _DAT_14c999f20 = 0;
  _DAT_14c999f28 = &LAB_146f6120a;
  _DAT_14c999f30 = &LAB_146f61276;
  _DAT_14c999f38 = &LAB_146f612c4;
  _DAT_14c999f40 = &LAB_146f6133c;
  _DAT_14c999f48 = &LAB_146f613e4;
  _DAT_14c999f50 = FUN_146f6140e;
  _DAT_14c999f58 = &LAB_146f6146c;
  _DAT_14c999f60 = FUN_146f614ba;
  _DAT_14c999f88 = 0;
  _DAT_14c999f78 = 0;
  uRam000000014c999f80 = 0;
  _DAT_14c999f68 = 0;
  uRam000000014c999f70 = 0;
  _DAT_14c999f90 = 0x8002000010001;
  _DAT_14c999f98 = L"FEnumUint8NetSerializer";
  _DAT_14c999fa0 = 0;
  _DAT_14c999fa8 = &LAB_146f61510;
  _DAT_14c999fb0 = &LAB_146f6157c;
  _DAT_14c999fb8 = &LAB_146f615ca;
  _DAT_14c999fc0 = &LAB_146f61642;
  _DAT_14c999fc8 = &LAB_146f616ec;
  _DAT_14c999fd0 = FUN_146f61718;
  _DAT_14c999fd8 = &LAB_146f6177a;
  _DAT_14c999fe0 = FUN_146f617d0;
  _DAT_14c99a008 = 0;
  _DAT_14c999ff8 = 0;
  uRam000000014c99a000 = 0;
  _DAT_14c999fe8 = 0;
  uRam000000014c999ff0 = 0;
  _DAT_14c99a010 = 0x8002000020002;
  _DAT_14c99a018 = L"FEnumUint16NetSerializer";
  _DAT_14c99a020 = 0;
  _DAT_14c99a028 = &LAB_146f6182a;
  _DAT_14c99a030 = &LAB_146f61894;
  _DAT_14c99a038 = &LAB_146f618e2;
  _DAT_14c99a040 = &LAB_146f61958;
  _DAT_14c99a048 = &LAB_146f619d6;
  _DAT_14c99a050 = FUN_146f619fc;
  _DAT_14c99a058 = &LAB_146f61a56;
  _DAT_14c99a060 = FUN_146f61a9e;
  _DAT_14c99a088 = 0;
  _DAT_14c99a078 = 0;
  uRam000000014c99a080 = 0;
  _DAT_14c99a068 = 0;
  uRam000000014c99a070 = 0;
  _DAT_14c99a090 = 0x8002800040004;
  _DAT_14c99a098 = L"FEnumUint32NetSerializer";
  _DAT_14c99a0a0 = 0;
  _DAT_14c99a0a8 = &LAB_146f61af6;
  _DAT_14c99a0b0 = &LAB_146f61b86;
  _DAT_14c99a0b8 = &LAB_146f61c02;
  _DAT_14c99a0c0 = &LAB_146f61c78;
  _DAT_14c99a0c8 = &LAB_146f61cf6;
  _DAT_14c99a0d0 = FUN_146f61d1e;
  _DAT_14c99a0d8 = &LAB_146f61d7a;
  _DAT_14c99a0e0 = FUN_146f61dcc;
  _DAT_14c99a108 = 0;
  _DAT_14c99a0f8 = 0;
  uRam000000014c99a100 = 0;
  _DAT_14c99a0e8 = 0;
  uRam000000014c99a0f0 = 0;
  _DAT_14c99a110 = 0x8003000080008;
  _DAT_14c99a118 = L"FEnumUint64NetSerializer";
  _DAT_14c99a120 = 0xb00000000;
  _DAT_14c99a128 = FUN_146f55f9a;
  _DAT_14c99a130 = FUN_146f55fec;
  _DAT_14c99a138 = FUN_146f5603e;
  _DAT_14c99a140 = FUN_146f5609c;
  _DAT_14c99a148 = FUN_146f560fa;
  _DAT_14c99a150 = FUN_146f561be;
  _DAT_14c99a158 = FUN_146f562a4;
  _DAT_14c99a160 = FUN_146f5640c;
  _DAT_14c99a168 = FUN_146f5653e;
  _DAT_14c99a170 = FUN_146f5659c;
  _DAT_14c99a178 = FUN_146f564cc;
  _DAT_14c99a180 = 0;
  _DAT_14c99a188 = &DAT_14c99a1a0;
  _DAT_14c99a190 = 0x8003000080020;
  _DAT_14c99a198 = L"FFieldPathNetSerializer";
  _DAT_14c99a1a8 = 0;
  _DAT_14c99a1a0 = &PTR_FUN_149f8aeb0;
  DAT_14c99a1c0 = 0;
  uRam000000014c99a1c8 = 0;
  _DAT_14c99a1b0 = 0;
  uRam000000014c99a1b8 = 0;
  atexit((_func_5014 *)&LAB_142aa29f6);
  FUN_14588533c(&DAT_14c99a1d0,0);
  _DAT_14c99a1d0 = &PTR_FUN_149f9fae0;
  atexit((_func_5014 *)&LAB_142aa2a15);
  _DAT_14c99a1f0 = &PTR_FUN_149f9f140;
  DAT_14c99a200 = 0;
  _DAT_14c99a1f8 = 1;
  atexit((_func_5014 *)&LAB_142aa2a21);
  _DAT_14c99a218 = 0;
  _DAT_14c99a220 = FUN_146f56716;
  _DAT_14c99a228 = FUN_146f5676e;
  _DAT_14c99a230 = FUN_146f567b0;
  _DAT_14c99a238 = FUN_146f567e8;
  _DAT_14c99a240 = &LAB_146f61e51;
  _DAT_14c99a248 = &LAB_146f61e5e;
  _DAT_14c99a250 = &LAB_146f61e6b;
  _DAT_14c99a258 = &LAB_146f605d7;
  _DAT_14c99a260 = 0;
  uRam000000014c99a268 = 0;
  _DAT_14c99a270 = 0;
  uRam000000014c99a278 = 0;
  _DAT_14c99a280 = &DAT_14c99a208;
  _DAT_14c99a288 = 0x8001000040004;
  _DAT_14c99a290 = L"FFloatNetSerializer";
  _DAT_14c99a2a8 = 0;
  _DAT_14c99a2b0 = FUN_146f56820;
  _DAT_14c99a2b8 = FUN_146f5688e;
  _DAT_14c99a2c0 = FUN_146f568e6;
  _DAT_14c99a2c8 = FUN_146f5691e;
  _DAT_14c99a2d0 = &LAB_146f61e7b;
  _DAT_14c99a2d8 = &LAB_146f61e8a;
  _DAT_14c99a2e0 = &LAB_146f61e99;
  _DAT_14c99a2e8 = &LAB_146f605d7;
  _DAT_14c99a300 = 0;
  uRam000000014c99a308 = 0;
  _DAT_14c99a2f0 = 0;
  uRam000000014c99a2f8 = 0;
  _DAT_14c99a310 = &DAT_14c99a298;
  _DAT_14c99a318 = 0x8001000080008;
  _DAT_14c99a320 = L"FDoubleNetSerializer";
  _DAT_14c99a328 = 0;
  _DAT_14c99a330 = FUN_146f56956;
  _DAT_14c99a338 = FUN_146f569e8;
  _DAT_14c99a340 = FUN_146f61eab;
  _DAT_14c99a348 = FUN_146f61f55;
  _DAT_14c99a350 = &LAB_146f61f9c;
  _DAT_14c99a358 = &LAB_146f61fab;
  _DAT_14c99a360 = &LAB_146f61f26;
  _DAT_14c99a368 = &LAB_146f605d7;
  _DAT_14c99a370 = 0;
  uRam000000014c99a378 = 0;
  _DAT_14c99a380 = 0;
  uRam000000014c99a388 = 0;
  _DAT_14c99a390 = &DAT_14c99a3a8;
  _DAT_14c99a398 = 0x8001000040010;
  _DAT_14c99a3a0 = L"FGuidNetSerializer";
  _DAT_14c99a3b0 = 0;
  _DAT_14c99a3a8 = &PTR_FUN_149f8a790;
  uStack_80 = 0;
  local_78 = 0;
  local_88 = 1;
  FUN_14282b410(L"/Script/IrisCore",0,0,&PTR_FUN_149f9ea80);
  local_88 = local_88 & 0xffffffff00000000;
  FUN_141471170(&DAT_14c99a3d0,L"InstancedStruct.MaxCachedReplicationStateDescriptors",
                &DAT_14c75f494,
                L"How many ReplicationStateDescriptors the InstancedStructNetSerializer is allowed to cache for InstancedStructs without a type allow list. Warning: A value <= 0 means an unlimited amount of descriptors."
               );
  atexit(FUN_142aa2a40);
  local_70 = "Invalid struct type";
  local_68 = 0x13;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  _DAT_14c99a3e0 = (ulonglong)uVar1;
  _DAT_14c99a408 = 0xb00000000;
  _DAT_14c99a410 = FUN_146f56bfc;
  _DAT_14c99a418 = FUN_146f56e7c;
  _DAT_14c99a420 = &LAB_146f5730a;
  _DAT_14c99a428 = &LAB_146f57310;
  _DAT_14c99a430 = FUN_146f57316;
  _DAT_14c99a438 = FUN_146f5757e;
  _DAT_14c99a440 = FUN_146f5771a;
  _DAT_14c99a448 = &LAB_146f57774;
  _DAT_14c99a450 = FUN_146f57778;
  _DAT_14c99a458 = FUN_146f578c6;
  _DAT_14c99a460 = FUN_146f579c2;
  _DAT_14c99a468 = 0;
  uRam000000014c99a470 = 0;
  _DAT_14c99a478 = 0x8016800080038;
  _DAT_14c99a480 = L"FInstancedStructNetSerializer";
  _DAT_14c99a680 = 0;
  _DAT_14c99a688 = FUN_146f623b6;
  _DAT_14c99a690 = FUN_146f6241c;
  _DAT_14c99a698 = FUN_146f62474;
  _DAT_14c99a6a0 = FUN_146f624e6;
  _DAT_14c99a6a8 = &LAB_146f62588;
  _DAT_14c99a6b0 = &LAB_146f625ba;
  _DAT_14c99a6b8 = &LAB_146f625c8;
  _DAT_14c99a6c0 = &LAB_146f625fe;
  _DAT_14c99a6d8 = 0;
  uRam000000014c99a6e0 = 0;
  _DAT_14c99a6c8 = 0;
  uRam000000014c99a6d0 = 0;
  _DAT_14c99a6e8 = &DAT_14c99a668;
  _DAT_14c99a6f0 = 0x8001800010001;
  _DAT_14c99a6f8 = L"FInt8NetSerializer";
  _DAT_14c99a718 = 0;
  _DAT_14c99a720 = FUN_146f62638;
  _DAT_14c99a728 = FUN_146f6269e;
  _DAT_14c99a730 = FUN_146f626f8;
  _DAT_14c99a738 = FUN_146f6276a;
  _DAT_14c99a740 = &LAB_146f6280e;
  _DAT_14c99a748 = &LAB_146f62840;
  _DAT_14c99a750 = &LAB_146f62850;
  _DAT_14c99a758 = &LAB_146f6288a;
  _DAT_14c99a760 = 0;
  uRam000000014c99a768 = 0;
  _DAT_14c99a770 = 0;
  uRam000000014c99a778 = 0;
  _DAT_14c99a780 = &DAT_14c99a700;
  _DAT_14c99a788 = 0x8001800020002;
  _DAT_14c99a790 = L"FInt16NetSerializer";
  _DAT_14c99a7b0 = 0;
  _DAT_14c99a7b8 = FUN_146f628c6;
  _DAT_14c99a7c0 = FUN_146f6292a;
  _DAT_14c99a7c8 = FUN_146f62984;
  _DAT_14c99a7d0 = FUN_146f629f4;
  _DAT_14c99a7d8 = &LAB_146f62a6c;
  _DAT_14c99a7e0 = &LAB_146f62aa2;
  _DAT_14c99a7e8 = &LAB_146f62ab0;
  _DAT_14c99a7f0 = &LAB_146f62ae4;
  _DAT_14c99a808 = 0;
  uRam000000014c99a810 = 0;
  _DAT_14c99a7f8 = 0;
  uRam000000014c99a800 = 0;
  _DAT_14c99a818 = &DAT_14c99a798;
  _DAT_14c99a820 = 0x8001800040004;
  _DAT_14c99a828 = L"FInt32NetSerializer";
  _DAT_14c99a848 = 0;
  _DAT_14c99a850 = FUN_146f62b1c;
  _DAT_14c99a858 = FUN_146f62ba6;
  _DAT_14c99a860 = FUN_146f62c2e;
  _DAT_14c99a868 = FUN_146f62c9e;
  _DAT_14c99a870 = &LAB_146f62d16;
  _DAT_14c99a878 = &LAB_146f62d4c;
  _DAT_14c99a880 = &LAB_146f62d5c;
  _DAT_14c99a888 = &LAB_146f62d92;
  _DAT_14c99a8a0 = 0;
  uRam000000014c99a8a8 = 0;
  _DAT_14c99a890 = 0;
  uRam000000014c99a898 = 0;
  _DAT_14c99a8b0 = &DAT_14c99a830;
  _DAT_14c99a8b8 = 0x8001800080008;
  _DAT_14c99a8c0 = L"FInt64NetSerializer";
  _DAT_14c99a8c8 = 0;
  _DAT_14c99a8d0 = &LAB_146f62dd4;
  _DAT_14c99a8d8 = &LAB_146f62e40;
  _DAT_14c99a8e0 = &LAB_146f62e8e;
  _DAT_14c99a8e8 = &LAB_146f62f06;
  _DAT_14c99a8f0 = &LAB_146f62fae;
  _DAT_14c99a8f8 = FUN_146f62fda;
  _DAT_14c99a900 = &LAB_146f63038;
  _DAT_14c99a908 = &LAB_146f63086;
  _DAT_14c99a930 = 0;
  _DAT_14c99a920 = 0;
  uRam000000014c99a928 = 0;
  _DAT_14c99a910 = 0;
  uRam000000014c99a918 = 0;
  _DAT_14c99a938 = 0x8001800010001;
  _DAT_14c99a940 = L"FInt8RangeNetSerializer";
  _DAT_14c99a948 = 0;
  _DAT_14c99a950 = &LAB_146f630b0;
  _DAT_14c99a958 = &LAB_146f6311c;
  _DAT_14c99a960 = &LAB_146f6316a;
  _DAT_14c99a968 = &LAB_146f631e2;
  _DAT_14c99a970 = &LAB_146f6328c;
  _DAT_14c99a978 = FUN_146f632ba;
  _DAT_14c99a980 = &LAB_146f6331c;
  _DAT_14c99a988 = &LAB_146f63372;
  _DAT_14c99a9b0 = 0;
  _DAT_14c99a9a0 = 0;
  uRam000000014c99a9a8 = 0;
  _DAT_14c99a990 = 0;
  uRam000000014c99a998 = 0;
  _DAT_14c99a9b8 = 0x8001800020002;
  _DAT_14c99a9c0 = L"FInt16RangeNetSerializer";
  _DAT_14c99a9c8 = 0;
  _DAT_14c99a9d0 = &LAB_146f633a0;
  _DAT_14c99a9d8 = &LAB_146f6340a;
  _DAT_14c99a9e0 = &LAB_146f63458;
  _DAT_14c99a9e8 = &LAB_146f634ce;
  _DAT_14c99a9f0 = &LAB_146f6354c;
  _DAT_14c99a9f8 = FUN_146f63576;
  _DAT_14c99aa00 = &LAB_146f635d0;
  _DAT_14c99aa08 = &LAB_146f63618;
  _DAT_14c99aa30 = 0;
  _DAT_14c99aa20 = 0;
  uRam000000014c99aa28 = 0;
  _DAT_14c99aa10 = 0;
  uRam000000014c99aa18 = 0;
  _DAT_14c99aa38 = 0x8002000040004;
  _DAT_14c99aa40 = L"FInt32RangeNetSerializer";
  _DAT_14c99aa48 = 0;
  _DAT_14c99aa50 = &LAB_146f63640;
  _DAT_14c99aa58 = &LAB_146f636d0;
  _DAT_14c99aa60 = &LAB_146f6374c;
  _DAT_14c99aa68 = &LAB_146f637c2;
  _DAT_14c99aa70 = &LAB_146f63840;
  _DAT_14c99aa78 = FUN_146f6386c;
  _DAT_14c99aa80 = &LAB_146f638c8;
  _DAT_14c99aa88 = &LAB_146f6391a;
  _DAT_14c99aab0 = 0;
  _DAT_14c99aaa0 = 0;
  uRam000000014c99aaa8 = 0;
  _DAT_14c99aa90 = 0;
  uRam000000014c99aa98 = 0;
  _DAT_14c99aab8 = 0x8002800080008;
  _DAT_14c99aac0 = L"FInt64RangeNetSerializer";
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c99aac8,L"net.iris.EnableIrisPackageMapNameExports",&DAT_14c75f498,
                L"If enabled, iris captures and exports fnames when calling into old serialziation code instead of serializing a strings."
               );
  atexit(FUN_142aa2b5e);
  _DAT_14c99ab58 = 0xa00000000;
  _DAT_14c99ab60 = &LAB_146f59c06;
  _DAT_14c99ab68 = FUN_142aa2ea6;
  _DAT_14c99ab70 = FUN_146f63a9b;
  _DAT_14c99ab78 = FUN_146f63b54;
  _DAT_14c99ab80 = FUN_146f5a076;
  _DAT_14c99ab88 = FUN_146f5a33a;
  _DAT_14c99ab90 = FUN_146f5a582;
  _DAT_14c99ab98 = &LAB_146f605d7;
  _DAT_14c99aba0 = FUN_146f5a6b8;
  _DAT_14c99aba8 = FUN_146f5a75e;
  _DAT_14c99abb0 = FUN_146f5a988;
  _DAT_14c99abb8 = 0;
  uRam000000014c99abc0 = 0;
  _DAT_14c99abc8 = 0xf0;
  _DAT_14c99abca = 8;
  _DAT_14c99abcc = 0x30;
  _DAT_14c99abce = 8;
  _DAT_14c99abd0 = L"FLastResortPropertyNetSerializer";
  DAT_14c99acd8 = 2;
  local_70 = "BitStream overflow";
  local_68 = 0x12;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c99c028 = (ulonglong)uVar1;
  local_70 = "BitStream error";
  local_68 = 0xf;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c99c010 = (ulonglong)uVar1;
  local_70 = "Array size is too large";
  local_68 = 0x17;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c999b78 = (ulonglong)uVar1;
  local_70 = "Invalid NetHandle";
  local_68 = 0x11;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c99c008 = (ulonglong)uVar1;
  local_70 = "Broken NetHandle";
  local_68 = 0x10;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c99c020 = (ulonglong)uVar1;
  local_70 = "Invalid value";
  local_68 = 0xd;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c99c018 = (ulonglong)uVar1;
  local_70 = "Internal error";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c99c030 = (ulonglong)uVar1;
  DAT_14c99ace8 = 0;
  _DAT_14c99ace0 = &PTR_FUN_149f8ad40;
  DAT_14c99ad00 = 0;
  _DAT_14c99acf0 = 0;
  _DAT_14c99acf5 = 0;
  _DAT_14c99acf8 = 0;
  _DAT_14c99bf08 = 0;
  _DAT_14c99bf10 = FUN_146f5b48c;
  _DAT_14c99bf18 = &LAB_146f5b516;
  _DAT_14c99bf20 = &LAB_146f63c2d;
  _DAT_14c99bf28 = &LAB_146f63c32;
  _DAT_14c99bf30 = &LAB_146f5b51c;
  _DAT_14c99bf38 = FUN_146f5b546;
  _DAT_14c99bf40 = &LAB_146f5b5aa;
  _DAT_14c99bf48 = &LAB_146f5b5f8;
  _DAT_14c99bf50 = 0;
  uRam000000014c99bf58 = 0;
  _DAT_14c99bf60 = 0;
  uRam000000014c99bf68 = 0;
  _DAT_14c99bf70 = 0;
  _DAT_14c99bf78 = 0x8002800010001;
  _DAT_14c99bf80 = L"FNetRoleNetSerializer";
  _DAT_14c99ad10 = 0;
  _DAT_14c99ad08 = &PTR_FUN_149f8c460;
  _DAT_14c99ad18 = 0;
  _DAT_14c99ad20 = &DAT_146f63c38;
  _DAT_14c99ad28 = &DAT_146f63c3a;
  _DAT_14c99ad30 = &DAT_146f63c3c;
  _DAT_14c99ad38 = &DAT_146f63c3e;
  _DAT_14c99ad40 = &DAT_146f63c40;
  _DAT_14c99ad48 = &DAT_146f63c42;
  _DAT_14c99ad50 = &LAB_146f63c44;
  _DAT_14c99ad58 = &LAB_146f63c48;
  _DAT_14c99ad60 = 0;
  uRam000000014c99ad68 = 0;
  _DAT_14c99ad70 = 0;
  uRam000000014c99ad78 = 0;
  _DAT_14c99ad80 = &DAT_14c99ad08;
  _DAT_14c99ad88 = 0x8001000010000;
  _DAT_14c99ad90 = L"FNopNetSerializer";
  _DAT_14c99a4e8 = 0;
  DAT_14c99a4f0 = &LAB_146f63c4c;
  DAT_14c99a4f8 = &LAB_146f63c56;
  _DAT_14c99a500 = FUN_146f63c5f;
  _DAT_14c99a508 = FUN_146f63d02;
  DAT_14c99a510 = FUN_146f63d4a;
  DAT_14c99a518 = FUN_146f63db6;
  DAT_14c99a520 = &LAB_146f63cce;
  _DAT_14c99a528 = &LAB_146f605d7;
  _DAT_14c99a540 = 0;
  uRam000000014c99a548 = 0;
  _DAT_14c99a530 = 0;
  uRam000000014c99a538 = 0;
  DAT_14c99a550 = &DAT_14c99ad98;
  _DAT_14c99a558 = 0x8001000080010;
  _DAT_14c99a560 = L"FObjectNetSerializer";
  _DAT_14c99a568 = 0;
  _DAT_14c99a570 = &LAB_146f63e24;
  _DAT_14c99a578 = &LAB_146f63e2e;
  _DAT_14c99a580 = FUN_146f63e37;
  _DAT_14c99a588 = FUN_146f63f6f;
  _DAT_14c99a590 = FUN_146f63fb8;
  _DAT_14c99a598 = FUN_146f6402e;
  _DAT_14c99a5a0 = FUN_146f63ef4;
  _DAT_14c99a5a8 = &LAB_146f605d7;
  _DAT_14c99a5c0 = 0;
  uRam000000014c99a5c8 = 0;
  _DAT_14c99a5b0 = 0;
  uRam000000014c99a5b8 = 0;
  _DAT_14c99a5d0 = &DAT_14c99ada8;
  _DAT_14c99a5d8 = 0x8001000080010;
  _DAT_14c99a5e0 = L"FWeakObjectNetSerializer";
  _DAT_14c99a5e8 = 0;
  _DAT_14c99a5f0 = &LAB_146f640b2;
  _DAT_14c99a5f8 = &LAB_146f640bc;
  _DAT_14c99a600 = FUN_146f640c5;
  _DAT_14c99a608 = FUN_146f64221;
  _DAT_14c99a610 = FUN_146f6426a;
  _DAT_14c99a618 = FUN_146f5bade;
  _DAT_14c99a620 = FUN_146f64182;
  _DAT_14c99a628 = FUN_146f5bbaa;
  _DAT_14c99a650 = 0;
  _DAT_14c99a640 = 0;
  uRam000000014c99a648 = 0;
  _DAT_14c99a630 = 0;
  uRam000000014c99a638 = 0;
  _DAT_14c99a658 = 0x8001800080010;
  _DAT_14c99a660 = L"FScriptInterfaceNetSerializer";
  _DAT_14c99adc8 = 0;
  _DAT_14c99add0 = FUN_146f5bc46;
  _DAT_14c99add8 = FUN_146f5bcc4;
  _DAT_14c99ade0 = FUN_146f5bd4a;
  _DAT_14c99ade8 = FUN_146f5bd82;
  _DAT_14c99adf0 = &LAB_146f642d6;
  _DAT_14c99adf8 = &LAB_146f642e5;
  _DAT_14c99ae00 = &LAB_146f642f4;
  _DAT_14c99ae08 = &LAB_146f605d7;
  _DAT_14c99ae20 = 0;
  uRam000000014c99ae28 = 0;
  _DAT_14c99ae10 = 0;
  uRam000000014c99ae18 = 0;
  _DAT_14c99ae30 = &DAT_14c99adb8;
  _DAT_14c99ae38 = 0x8001000080008;
  _DAT_14c99ae40 = L"FPackedInt64NetSerializer";
  _DAT_14c99ae58 = 0;
  _DAT_14c99ae60 = FUN_146f5bdba;
  _DAT_14c99ae68 = FUN_146f5be28;
  _DAT_14c99ae70 = FUN_146f5be9a;
  _DAT_14c99ae78 = FUN_146f5bed2;
  _DAT_14c99ae80 = &LAB_146f61e7b;
  _DAT_14c99ae88 = &LAB_146f61e8a;
  _DAT_14c99ae90 = &LAB_146f61e99;
  _DAT_14c99ae98 = &LAB_146f605d7;
  _DAT_14c99aeb0 = 0;
  uRam000000014c99aeb8 = 0;
  _DAT_14c99aea0 = 0;
  uRam000000014c99aea8 = 0;
  _DAT_14c99aec0 = &DAT_14c99ae48;
  _DAT_14c99aec8 = 0x8001000080008;
  _DAT_14c99aed0 = L"FPackedUint64NetSerializer";
  _DAT_14c99aee8 = 0;
  _DAT_14c99aef0 = FUN_146f5bf0a;
  _DAT_14c99aef8 = FUN_146f5bf64;
  _DAT_14c99af00 = FUN_146f5bfb4;
  _DAT_14c99af08 = FUN_146f5bfec;
  _DAT_14c99af10 = &LAB_146f64306;
  _DAT_14c99af18 = &LAB_146f64313;
  _DAT_14c99af20 = &LAB_146f64320;
  _DAT_14c99af28 = &LAB_146f605d7;
  _DAT_14c99af40 = 0;
  uRam000000014c99af48 = 0;
  _DAT_14c99af30 = 0;
  uRam000000014c99af38 = 0;
  _DAT_14c99af50 = &DAT_14c99aed8;
  _DAT_14c99af58 = 0x8001000040004;
  _DAT_14c99af60 = L"FPackedInt32NetSerializer";
  _DAT_14c99af78 = 0;
  _DAT_14c99af80 = FUN_146f5c024;
  _DAT_14c99af88 = FUN_146f5c078;
  _DAT_14c99af90 = FUN_146f5c0b2;
  _DAT_14c99af98 = FUN_146f5c0ea;
  _DAT_14c99afa0 = &LAB_146f61e51;
  _DAT_14c99afa8 = &LAB_146f61e5e;
  _DAT_14c99afb0 = &LAB_146f61e6b;
  _DAT_14c99afb8 = &LAB_146f605d7;
  _DAT_14c99afd0 = 0;
  uRam000000014c99afd8 = 0;
  _DAT_14c99afc0 = 0;
  uRam000000014c99afc8 = 0;
  _DAT_14c99afe0 = &DAT_14c99af68;
  _DAT_14c99afe8 = 0x8001000040004;
  _DAT_14c99aff0 = L"FPackedUint32NetSerializer";
  _DAT_14c99aff8 = 0;
  _DAT_14c99b000 = &DAT_146f64330;
  _DAT_14c99b008 = &DAT_146f64336;
  _DAT_14c99b010 = &LAB_146f6433c;
  _DAT_14c99b018 = &LAB_146f64342;
  _DAT_14c99b020 = &LAB_146f64348;
  _DAT_14c99b028 = &LAB_146f64350;
  _DAT_14c99b030 = &LAB_146f64358;
  _DAT_14c99b038 = FUN_146f5d0a6;
  _DAT_14c99b050 = 0;
  uRam000000014c99b058 = 0;
  _DAT_14c99b040 = 0;
  uRam000000014c99b048 = 0;
  _DAT_14c99b060 = &DAT_14c99beb0;
  _DAT_14c99b068 = 0x8001000080020;
  _DAT_14c99b070 = L"FVectorNetQuantizeNetSerializer";
  _DAT_14c99b078 = 0;
  DAT_14c99b080 = &DAT_146f64360;
  DAT_14c99b088 = &DAT_146f64366;
  DAT_14c99b090 = &LAB_146f6436c;
  DAT_14c99b098 = &LAB_146f64372;
  DAT_14c99b0a0 = &LAB_146f64378;
  DAT_14c99b0a8 = &LAB_146f64382;
  _DAT_14c99b0b0 = &LAB_146f6438c;
  DAT_14c99b0b8 = FUN_146f5d0a6;
  _DAT_14c99b0d0 = 0;
  uRam000000014c99b0d8 = 0;
  _DAT_14c99b0c0 = 0;
  uRam000000014c99b0c8 = 0;
  DAT_14c99b0e0 = &DAT_14c99bec0;
  _DAT_14c99b0e8 = 0x8001000080020;
  _DAT_14c99b0f0 = L"FVectorNetQuantize10NetSerializer";
  _DAT_14c99b0f8 = 0;
  _DAT_14c99b100 = &DAT_146f64396;
  _DAT_14c99b108 = &DAT_146f6439c;
  _DAT_14c99b110 = &LAB_146f643a2;
  _DAT_14c99b118 = &LAB_146f643a8;
  _DAT_14c99b120 = &LAB_146f643ae;
  _DAT_14c99b128 = &LAB_146f643b8;
  _DAT_14c99b130 = &LAB_146f643c2;
  _DAT_14c99b138 = FUN_146f5d0a6;
  _DAT_14c99b150 = 0;
  uRam000000014c99b158 = 0;
  _DAT_14c99b140 = 0;
  uRam000000014c99b148 = 0;
  _DAT_14c99b160 = &DAT_14c99bed0;
  _DAT_14c99b168 = 0x8001000080020;
  _DAT_14c99b170 = L"FVectorNetQuantize100NetSerializer";
  _DAT_14c99b180 = 0;
  _DAT_14c99b178 = &PTR_FUN_149f97788;
  _DAT_14c99b188 = 0;
  _DAT_14c99b190 = &LAB_146f5d0ba;
  _DAT_14c99b198 = FUN_146f5d104;
  _DAT_14c99b1a0 = FUN_146f643cc;
  _DAT_14c99b1a8 = FUN_146f64485;
  _DAT_14c99b1b0 = FUN_146f5d184;
  _DAT_14c99b1b8 = &LAB_146f5d288;
  _DAT_14c99b1c0 = FUN_146f5d2d0;
  _DAT_14c99b1c8 = FUN_146f5d4b4;
  _DAT_14c99b1e0 = 0;
  uRam000000014c99b1e8 = 0;
  _DAT_14c99b1d0 = 0;
  uRam000000014c99b1d8 = 0;
  _DAT_14c99b1f0 = &DAT_14c99b178;
  _DAT_14c99b1f8 = 0x8001000040010;
  _DAT_14c99b200 = L"FVectorNetQuantizeNormalNetSerializer";
  FUN_1446f470e(&DAT_14c99b208,L"Invalid struct type",1);
  _DAT_14c99b218 = 0;
  _DAT_14c99b210 = &PTR_FUN_149f97790;
  _DAT_14c99b220 = 0;
  _DAT_14c99b228 = &LAB_146f644cc;
  _DAT_14c99b230 = FUN_146f6457a;
  _DAT_14c99b238 = FUN_146f646a7;
  _DAT_14c99b240 = FUN_146f6496e;
  _DAT_14c99b248 = FUN_146f649be;
  _DAT_14c99b250 = &LAB_146f64bb4;
  _DAT_14c99b258 = FUN_146f64760;
  _DAT_14c99b260 = &LAB_146f64c62;
  _DAT_14c99b268 = 0;
  uRam000000014c99b270 = 0;
  _DAT_14c99b278 = 0;
  uRam000000014c99b280 = 0;
  _DAT_14c99b288 = &DAT_14c99b210;
  _DAT_14c99b290 = 0x20;
  _DAT_14c99b292 = 8;
  _DAT_14c99b294 = 0x10;
  _DAT_14c99b296 = 8;
  _DAT_14c99b298 = L"FUnitQuatNetSerializer";
  _DAT_14c99b2a8 = 0;
  _DAT_14c99b2a0 = &PTR_FUN_149f97798;
  _DAT_14c99b2b0 = 0;
  _DAT_14c99b2b8 = &LAB_146f64caa;
  _DAT_14c99b2c0 = FUN_146f64d24;
  _DAT_14c99b2c8 = FUN_146f64de3;
  _DAT_14c99b2d0 = FUN_146f65063;
  _DAT_14c99b2d8 = FUN_146f650aa;
  _DAT_14c99b2e0 = &LAB_146f65274;
  _DAT_14c99b2e8 = FUN_146f64e9c;
  _DAT_14c99b2f0 = &LAB_146f6531c;
  _DAT_14c99b2f8 = 0;
  uRam000000014c99b300 = 0;
  _DAT_14c99b308 = 0;
  uRam000000014c99b310 = 0;
  _DAT_14c99b318 = &DAT_14c99b2a0;
  _DAT_14c99b320 = 0x8001000040010;
  _DAT_14c99b328 = L"FUnitQuat4fNetSerializer";
  _DAT_14c99b338 = 0;
  _DAT_14c99b330 = &PTR_FUN_149f977a0;
  _DAT_14c99b340 = 0;
  _DAT_14c99b348 = &LAB_146f644cc;
  _DAT_14c99b350 = FUN_146f6457a;
  _DAT_14c99b358 = FUN_146f646a7;
  _DAT_14c99b360 = FUN_146f6496e;
  _DAT_14c99b368 = FUN_146f649be;
  _DAT_14c99b370 = &LAB_146f64bb4;
  _DAT_14c99b378 = FUN_146f64760;
  _DAT_14c99b380 = &LAB_146f64c62;
  _DAT_14c99b398 = 0;
  uRam000000014c99b3a0 = 0;
  _DAT_14c99b388 = 0;
  uRam000000014c99b390 = 0;
  _DAT_14c99b3a8 = &DAT_14c99b330;
  _DAT_14c99b3b0 = 0x8001000080020;
  _DAT_14c99b3b8 = L"FUnitQuat4dNetSerializer";
  _DAT_14c99ac58 = 0;
  DAT_14c99ac60 = FUN_146f6535c;
  DAT_14c99ac68 = FUN_146f653da;
  _DAT_14c99ac70 = FUN_146f65468;
  _DAT_14c99ac78 = FUN_146f6554e;
  DAT_14c99ac80 = &LAB_146f6560c;
  DAT_14c99ac88 = &LAB_146f656b8;
  _DAT_14c99ac90 = &LAB_146f65710;
  _DAT_14c99ac98 = FUN_146f6578a;
  _DAT_14c99acb0 = 0;
  uRam000000014c99acb8 = 0;
  _DAT_14c99aca0 = 0;
  uRam000000014c99aca8 = 0;
  DAT_14c99acc0 = &DAT_14c99b3c0;
  _DAT_14c99acc8 = 0x8001000020008;
  _DAT_14c99acd0 = L"FRotatorNetSerializer";
  _DAT_14c99b3e0 = 0;
  _DAT_14c99b3e8 = FUN_146f6579e;
  _DAT_14c99b3f0 = FUN_146f6581a;
  _DAT_14c99b3f8 = FUN_146f658a6;
  _DAT_14c99b400 = FUN_146f65972;
  _DAT_14c99b408 = &LAB_146f65a24;
  _DAT_14c99b410 = &LAB_146f65ac6;
  _DAT_14c99b418 = &LAB_146f65b1e;
  _DAT_14c99b420 = FUN_146f65b8e;
  _DAT_14c99b438 = 0;
  uRam000000014c99b440 = 0;
  _DAT_14c99b428 = 0;
  uRam000000014c99b430 = 0;
  _DAT_14c99b448 = &DAT_14c99b3d0;
  _DAT_14c99b450 = 0x8001000010004;
  _DAT_14c99b458 = L"FRotatorAsByteNetSerializer";
  _DAT_14c99b470 = 0;
  _DAT_14c99b478 = FUN_146f6535c;
  _DAT_14c99b480 = FUN_146f653da;
  _DAT_14c99b488 = FUN_146f65468;
  _DAT_14c99b490 = FUN_146f6554e;
  _DAT_14c99b498 = &LAB_146f6560c;
  _DAT_14c99b4a0 = &LAB_146f656b8;
  _DAT_14c99b4a8 = &LAB_146f65710;
  _DAT_14c99b4b0 = FUN_146f6578a;
  _DAT_14c99b4c8 = 0;
  uRam000000014c99b4d0 = 0;
  _DAT_14c99b4b8 = 0;
  uRam000000014c99b4c0 = 0;
  _DAT_14c99b4d8 = &DAT_14c99b460;
  _DAT_14c99b4e0 = 0x8001000020008;
  _DAT_14c99b4e8 = L"FRotatorAsShortNetSerializer";
  _DAT_14c99b500 = 0;
  _DAT_14c99b508 = FUN_146f65ba2;
  _DAT_14c99b510 = FUN_146f65c20;
  _DAT_14c99b518 = FUN_146f65cae;
  _DAT_14c99b520 = FUN_146f65d94;
  _DAT_14c99b528 = &LAB_146f65e52;
  _DAT_14c99b530 = &LAB_146f65efc;
  _DAT_14c99b538 = &LAB_146f65f54;
  _DAT_14c99b540 = FUN_146f65fca;
  _DAT_14c99b558 = 0;
  uRam000000014c99b560 = 0;
  _DAT_14c99b548 = 0;
  uRam000000014c99b550 = 0;
  _DAT_14c99b568 = &DAT_14c99b4f0;
  _DAT_14c99b570 = 0x8001000020008;
  _DAT_14c99b578 = L"FRotator3fNetSerializer";
  _DAT_14c99b590 = 0;
  _DAT_14c99b598 = FUN_146f6535c;
  _DAT_14c99b5a0 = FUN_146f653da;
  _DAT_14c99b5a8 = FUN_146f65468;
  _DAT_14c99b5b0 = FUN_146f6554e;
  _DAT_14c99b5b8 = &LAB_146f6560c;
  _DAT_14c99b5c0 = &LAB_146f656b8;
  _DAT_14c99b5c8 = &LAB_146f65710;
  _DAT_14c99b5d0 = FUN_146f6578a;
  _DAT_14c99b5e8 = 0;
  uRam000000014c99b5f0 = 0;
  _DAT_14c99b5d8 = 0;
  uRam000000014c99b5e0 = 0;
  _DAT_14c99b5f8 = &DAT_14c99b580;
  _DAT_14c99b600 = 0x8001000020008;
  _DAT_14c99b608 = L"FRotator3dNetSerializer";
  _DAT_14c99b628 = 0xb00000000;
  _DAT_14c99b630 = &LAB_146f5ddce;
  _DAT_14c99b638 = FUN_146f5df30;
  _DAT_14c99b640 = &LAB_146f5e130;
  _DAT_14c99b648 = &LAB_146f5e1ee;
  _DAT_14c99b650 = FUN_146f5d668;
  _DAT_14c99b658 = FUN_146f5d9ce;
  _DAT_14c99b660 = FUN_146f5e2d2;
  _DAT_14c99b668 = FUN_146f5e44a;
  _DAT_14c99b670 = FUN_146f5e4b4;
  _DAT_14c99b678 = FUN_146f5e5ac;
  _DAT_14c99b680 = FUN_146f5e5d8;
  _DAT_14c99b688 = 0;
  _DAT_14c99b690 = &DAT_14c99b610;
  _DAT_14c99b698 = 0x8001000080028;
  _DAT_14c99b6a0 = L"FSoftObjectNetSerializer";
  _DAT_14c99b6b8 = 0x200000000;
  _DAT_14c99b6c0 = FUN_146f5de90;
  _DAT_14c99b6c8 = FUN_146f5e032;
  _DAT_14c99b6d0 = FUN_146f65fde;
  _DAT_14c99b6d8 = FUN_146f66097;
  _DAT_14c99b6e0 = FUN_146f5e632;
  _DAT_14c99b6e8 = FUN_146f5e69a;
  _DAT_14c99b6f0 = FUN_146f5e714;
  _DAT_14c99b6f8 = FUN_146f5e7ee;
  _DAT_14c99b700 = FUN_146f5e53e;
  _DAT_14c99b708 = FUN_146f5d86a;
  _DAT_14c99b710 = 0;
  uRam000000014c99b718 = 0;
  _DAT_14c99b720 = &DAT_14c99b6a8;
  _DAT_14c99b728 = 0x8001000080010;
  _DAT_14c99b730 = L"FSoftObjectPathNetSerializer";
  _DAT_14c99b738 = 0x200000000;
  _DAT_14c99b740 = FUN_146f5de90;
  _DAT_14c99b748 = FUN_146f5e032;
  _DAT_14c99b750 = FUN_146f6615e;
  _DAT_14c99b758 = FUN_146f66097;
  _DAT_14c99b760 = FUN_146f5e854;
  _DAT_14c99b768 = FUN_146f5e8bc;
  _DAT_14c99b770 = FUN_146f5e936;
  _DAT_14c99b778 = FUN_146f5ea10;
  _DAT_14c99b780 = FUN_146f5e53e;
  _DAT_14c99b788 = FUN_146f5d86a;
  _DAT_14c99b790 = 0;
  uRam000000014c99b798 = 0;
  _DAT_14c99b7a0 = &DAT_14c99b7b8;
  _DAT_14c99b7a8 = 0x8001000080010;
  _DAT_14c99b7b0 = L"FSoftClassPathNetSerializer";
  _DAT_14c99b7c0 = 0;
  _DAT_14c99b7b8 = &PTR_FUN_149f977e0;
  _DAT_14c99b7c8 = 0x200000000;
  _DAT_14c99b7d0 = &LAB_146f5ea76;
  _DAT_14c99b7d8 = FUN_146f5ebc4;
  _DAT_14c99b7e0 = FUN_146f66217;
  _DAT_14c99b7e8 = FUN_146f662d0;
  _DAT_14c99b7f0 = FUN_146f5ee14;
  _DAT_14c99b7f8 = FUN_146f5efca;
  _DAT_14c99b800 = FUN_146f5f18a;
  _DAT_14c99b808 = &LAB_146f5f290;
  _DAT_14c99b810 = FUN_146f5f29c;
  _DAT_14c99b818 = FUN_146f5f312;
  _DAT_14c99b820 = 0;
  uRam000000014c99b828 = 0;
  _DAT_14c99b830 = &DAT_14c99b848;
  _DAT_14c99b838 = 0x8001000080018;
  _DAT_14c99b840 = L"FNameNetSerializer";
  _DAT_14c99b850 = 0;
  _DAT_14c99b848 = &PTR_FUN_149f977e8;
  _DAT_14c99b860 = 0x200000000;
  _DAT_14c99b868 = FUN_146f5de90;
  _DAT_14c99b870 = FUN_146f5e032;
  _DAT_14c99b878 = FUN_146f663af;
  _DAT_14c99b880 = FUN_146f66097;
  _DAT_14c99b888 = &LAB_146f5f340;
  _DAT_14c99b890 = &LAB_146f5f34a;
  _DAT_14c99b898 = FUN_146f5f354;
  _DAT_14c99b8a0 = &LAB_146f5f3a4;
  _DAT_14c99b8a8 = FUN_146f5e53e;
  _DAT_14c99b8b0 = FUN_146f5d86a;
  _DAT_14c99b8b8 = 0;
  uRam000000014c99b8c0 = 0;
  _DAT_14c99b8c8 = &DAT_14c99b8e0;
  _DAT_14c99b8d0 = 0x8001000080010;
  _DAT_14c99b8d8 = L"FStringNetSerializer";
  _DAT_14c99b8e8 = 0;
  _DAT_14c99b8e0 = &PTR_FUN_149f977f0;
  _DAT_14c99aad8 = 0;
  DAT_14c99aae0 = &DAT_146f5f3be;
  DAT_14c99aae8 = FUN_142aa42ec;
  _DAT_14c99aaf0 = FUN_146f66468;
  _DAT_14c99aaf8 = FUN_146f66521;
  DAT_14c99ab00 = FUN_146f5f446;
  DAT_14c99ab08 = FUN_146f5f5ba;
  _DAT_14c99ab10 = FUN_146f5f650;
  _DAT_14c99ab18 = &LAB_146f5f716;
  _DAT_14c99ab20 = 0;
  uRam000000014c99ab28 = 0;
  _DAT_14c99ab30 = 0;
  uRam000000014c99ab38 = 0;
  _DAT_14c99ab40 = &DAT_14c99b8f8;
  _DAT_14c99ab48 = 0x800100004000c;
  _DAT_14c99ab50 = L"FNameAsNetTokenNetSerializer";
  _DAT_14c99b900 = 0;
  _DAT_14c99b8f8 = &PTR_FUN_149f977f8;
  DAT_14c99b858 = 0xc;
  DAT_14c99b908 = 0xc;
  local_70 = "Corrupt string";
  local_68 = 0xe;
  local_64 = 0;
  uVar1 = FUN_14001a6c0(&local_70,1);
  DAT_14c99b8f0 = (ulonglong)uVar1;
  _DAT_14c99c038 = 0x100000000;
  DAT_14c99c040 = FUN_142aa4446;
  DAT_14c99c048 = FUN_142aa44f4;
  DAT_14c99c050 = FUN_142aa45d2;
  DAT_14c99c058 = FUN_142aa471e;
  DAT_14c99c060 = FUN_146f5fc16;
  DAT_14c99c068 = FUN_146f5fcd2;
  DAT_14c99c070 = FUN_146f5fa22;
  DAT_14c99c078 = FUN_146f5fda0;
  DAT_14c99c080 = &LAB_146f5fe6e;
  DAT_14c99c088 = FUN_146f5ff3e;
  DAT_14c99c090 = FUN_146f60002;
  _DAT_14c99c098 = 0;
  uRam000000014c99c0a0 = 0;
  _DAT_14c99c0a8 = 0;
  _DAT_14c99c0aa = 1;
  _DAT_14c99c0ac = 0x18;
  _DAT_14c99c0ae = 8;
  _DAT_14c99c0b0 = L"FStructNetSerializer";
  _DAT_14c99b928 = 0;
  _DAT_14c99b930 = FUN_146f6656e;
  _DAT_14c99b938 = FUN_146f665d4;
  _DAT_14c99b940 = FUN_146f6661c;
  _DAT_14c99b948 = FUN_146f6668e;
  _DAT_14c99b950 = &LAB_146f66730;
  _DAT_14c99b958 = &LAB_146f6674e;
  _DAT_14c99b960 = &LAB_146f6675c;
  _DAT_14c99b968 = &LAB_146f66792;
  _DAT_14c99b970 = 0;
  uRam000000014c99b978 = 0;
  _DAT_14c99b980 = 0;
  uRam000000014c99b988 = 0;
  _DAT_14c99b990 = &DAT_14c99b910;
  _DAT_14c99b998 = 0x8001800010001;
  _DAT_14c99b9a0 = L"FUint8NetSerializer";
  _DAT_14c99b9c0 = 0;
  _DAT_14c99b9c8 = FUN_146f667be;
  _DAT_14c99b9d0 = FUN_146f66824;
  _DAT_14c99b9d8 = FUN_146f6686c;
  _DAT_14c99b9e0 = FUN_146f668de;
  _DAT_14c99b9e8 = &LAB_146f66982;
  _DAT_14c99b9f0 = &LAB_146f669a2;
  _DAT_14c99b9f8 = &LAB_146f669b2;
  _DAT_14c99ba00 = &LAB_146f669ec;
  _DAT_14c99ba18 = 0;
  uRam000000014c99ba20 = 0;
  _DAT_14c99ba08 = 0;
  uRam000000014c99ba10 = 0;
  _DAT_14c99ba28 = &DAT_14c99b9a8;
  _DAT_14c99ba30 = 0x8001800020002;
  _DAT_14c99ba38 = L"FUint16NetSerializer";
  _DAT_14c99ba58 = 0;
  _DAT_14c99ba60 = FUN_146f66a18;
  _DAT_14c99ba68 = FUN_146f66a7c;
  _DAT_14c99ba70 = FUN_146f66ac4;
  _DAT_14c99ba78 = FUN_146f66b34;
  _DAT_14c99ba80 = &LAB_146f66bac;
  _DAT_14c99ba88 = &LAB_146f66bca;
  _DAT_14c99ba90 = &LAB_146f66bd8;
  _DAT_14c99ba98 = &LAB_146f66c0c;
  _DAT_14c99bab0 = 0;
  uRam000000014c99bab8 = 0;
  _DAT_14c99baa0 = 0;
  uRam000000014c99baa8 = 0;
  _DAT_14c99bac0 = &DAT_14c99ba40;
  _DAT_14c99bac8 = 0x8001800040004;
  _DAT_14c99bad0 = L"FUint32NetSerializer";
  _DAT_14c99baf0 = 0;
  _DAT_14c99baf8 = FUN_146f66c36;
  _DAT_14c99bb00 = FUN_146f66cc0;
  _DAT_14c99bb08 = FUN_146f66d36;
  _DAT_14c99bb10 = FUN_146f66da6;
  _DAT_14c99bb18 = &LAB_146f66e1e;
  _DAT_14c99bb20 = &LAB_146f66e3c;
  _DAT_14c99bb28 = &LAB_146f66e4c;
  _DAT_14c99bb30 = &LAB_146f66e82;
  _DAT_14c99bb48 = 0;
  uRam000000014c99bb50 = 0;
  _DAT_14c99bb38 = 0;
  uRam000000014c99bb40 = 0;
  _DAT_14c99bb58 = &DAT_14c99bad8;
  _DAT_14c99bb60 = 0x8001800080008;
  _DAT_14c99bb68 = L"FUint64NetSerializer";
  _DAT_14c99bb70 = 0;
  _DAT_14c99bb78 = &LAB_146f66ebe;
  _DAT_14c99bb80 = &LAB_146f66f2a;
  _DAT_14c99bb88 = &LAB_146f66f78;
  _DAT_14c99bb90 = &LAB_146f66ff0;
  _DAT_14c99bb98 = &LAB_146f67098;
  _DAT_14c99bba0 = FUN_146f670c2;
  _DAT_14c99bba8 = &LAB_146f67120;
  _DAT_14c99bbb0 = &LAB_146f6716e;
  _DAT_14c99bbd8 = 0;
  _DAT_14c99bbc8 = 0;
  uRam000000014c99bbd0 = 0;
  _DAT_14c99bbb8 = 0;
  uRam000000014c99bbc0 = 0;
  _DAT_14c99bbe0 = 0x8001800010001;
  _DAT_14c99bbe8 = L"FUint8RangeNetSerializer";
  _DAT_14c99bbf0 = 0;
  _DAT_14c99bbf8 = &LAB_146f67198;
  _DAT_14c99bc00 = &LAB_146f67204;
  _DAT_14c99bc08 = &LAB_146f67252;
  _DAT_14c99bc10 = &LAB_146f672ca;
  _DAT_14c99bc18 = &LAB_146f67374;
  _DAT_14c99bc20 = FUN_146f673a0;
  _DAT_14c99bc28 = &LAB_146f67402;
  _DAT_14c99bc30 = &LAB_146f67458;
  _DAT_14c99bc58 = 0;
  _DAT_14c99bc48 = 0;
  uRam000000014c99bc50 = 0;
  _DAT_14c99bc38 = 0;
  uRam000000014c99bc40 = 0;
  _DAT_14c99bc60 = 0x8001800020002;
  _DAT_14c99bc68 = L"FUint16RangeNetSerializer";
  _DAT_14c99bc70 = 0;
  _DAT_14c99bc78 = &LAB_146f67486;
  _DAT_14c99bc80 = &LAB_146f674f0;
  _DAT_14c99bc88 = &LAB_146f6753e;
  _DAT_14c99bc90 = &LAB_146f675b4;
  _DAT_14c99bc98 = &LAB_146f67632;
  _DAT_14c99bca0 = FUN_146f67658;
  _DAT_14c99bca8 = &LAB_146f676b2;
  _DAT_14c99bcb0 = &LAB_146f676fa;
  _DAT_14c99bcd8 = 0;
  _DAT_14c99bcc8 = 0;
  uRam000000014c99bcd0 = 0;
  _DAT_14c99bcb8 = 0;
  uRam000000014c99bcc0 = 0;
  _DAT_14c99bce0 = 0x8002000040004;
  _DAT_14c99bce8 = L"FUint32RangeNetSerializer";
  _DAT_14c99bcf0 = 0;
  _DAT_14c99bcf8 = &LAB_146f67722;
  _DAT_14c99bd00 = &LAB_146f677b2;
  _DAT_14c99bd08 = &LAB_146f6782e;
  _DAT_14c99bd10 = &LAB_146f678a4;
  _DAT_14c99bd18 = &LAB_146f67922;
  _DAT_14c99bd20 = FUN_146f6794a;
  _DAT_14c99bd28 = &LAB_146f679a6;
  _DAT_14c99bd30 = &LAB_146f679f8;
  _DAT_14c99bd58 = 0;
  _DAT_14c99bd48 = 0;
  uRam000000014c99bd50 = 0;
  _DAT_14c99bd38 = 0;
  uRam000000014c99bd40 = 0;
  _DAT_14c99bd60 = 0x8002800080008;
  _DAT_14c99bd68 = L"FUint64RangeNetSerializer";
  _DAT_14c99bd78 = 0;
  _DAT_14c99bd70 = &PTR_FUN_149f97808;
  _DAT_14c99abd8 = 0;
  _DAT_14c99abe0 = FUN_146f67a28;
  DAT_14c99abe8 = FUN_146f67b44;
  _DAT_14c99abf0 = FUN_146f67c25;
  _DAT_14c99abf8 = FUN_146f67cc5;
  DAT_14c99ac00 = &LAB_146f67d14;
  _DAT_14c99ac08 = &LAB_146f67d2b;
  _DAT_14c99ac10 = &LAB_146f67c9b;
  _DAT_14c99ac18 = &LAB_146f605d7;
  _DAT_14c99ac30 = 0;
  uRam000000014c99ac38 = 0;
  _DAT_14c99ac20 = 0;
  uRam000000014c99ac28 = 0;
  DAT_14c99ac40 = &DAT_14c99bd70;
  _DAT_14c99ac48 = 0x8001000080018;
  _DAT_14c99ac50 = L"FVectorNetSerializer";
  _DAT_14c99bd88 = 0;
  _DAT_14c99bd80 = &PTR_FUN_149f97810;
  _DAT_14c99bd90 = 0;
  _DAT_14c99bd98 = FUN_146f67d42;
  _DAT_14c99bda0 = FUN_146f67e16;
  _DAT_14c99bda8 = FUN_146f67ea9;
  _DAT_14c99bdb0 = FUN_146f67f41;
  _DAT_14c99bdb8 = &LAB_146f67f8e;
  _DAT_14c99bdc0 = &LAB_146f67fa3;
  _DAT_14c99bdc8 = &LAB_146f67f1d;
  _DAT_14c99bdd0 = &LAB_146f605d7;
  _DAT_14c99bde8 = 0;
  uRam000000014c99bdf0 = 0;
  _DAT_14c99bdd8 = 0;
  uRam000000014c99bde0 = 0;
  _DAT_14c99bdf8 = &DAT_14c99bd80;
  _DAT_14c99be00 = 0x800100004000c;
  _DAT_14c99be08 = L"FVector3fNetSerializer";
  _DAT_14c99be18 = 0;
  _DAT_14c99be10 = &PTR_FUN_149f97818;
  _DAT_14c99be20 = 0;
  _DAT_14c99be28 = FUN_146f67a28;
  _DAT_14c99be30 = FUN_146f67b44;
  _DAT_14c99be38 = FUN_146f67c25;
  _DAT_14c99be40 = FUN_146f67cc5;
  _DAT_14c99be48 = &LAB_146f67d14;
  _DAT_14c99be50 = &LAB_146f67d2b;
  _DAT_14c99be58 = &LAB_146f67c9b;
  _DAT_14c99be60 = &LAB_146f605d7;
  _DAT_14c99be78 = 0;
  uRam000000014c99be80 = 0;
  _DAT_14c99be68 = 0;
  uRam000000014c99be70 = 0;
  _DAT_14c99be88 = &DAT_14c99be10;
  _DAT_14c99be90 = 0x8001000080018;
  _DAT_14c99be98 = L"FVector3dNetSerializer";
  local_88 = local_88 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14c99bea0,L"net.Iris.Stats.ShouldIncludeSubObjectWithRoot",&DAT_14c75f499,
                L"If enabled SubObjects will reports stats with RootObject, if set to false SubObjects will be treated as separate objects."
               );
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    atexit(FUN_142aa4883);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
}



// FUNCTION 142aa7ba8 FUN_142aa7ba8 body=609 status=ok
// SIG undefined FUN_142aa7ba8(void)

void FUN_142aa7ba8(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 auStack_98 [40];
  uint *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar16 = (uint *)(param_2 + 2);
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar9 = 1;
    uVar15 = 0;
    iVar10 = 0;
    iVar5 = 0;
  }
  else {
    puVar4 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar4 = puVar16;
    }
    uVar17 = *puVar4;
    if (uVar17 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_142aa7c56;
        iVar10 = iVar10 + 0x20;
        uVar17 = puVar4[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar9 = (ulonglong)(-uVar17 & uVar17);
    uVar1 = uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    local_68 = param_1 + 7;
    uVar17 = 0xffffffff;
    iVar3 = iVar2;
    local_70 = puVar16;
    do {
      if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
        lVar11 = *(longlong *)(*param_2 + (longlong)iVar5 * 0x18);
        uVar6 = (uint)((ulonglong)lVar11 >> 0x10);
        uVar14 = (uint)lVar11 & 0xffff;
        plVar13 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar13 = local_68;
        }
        iVar7 = *(int *)((longlong)plVar13 +
                        (ulonglong)
                        ((int)param_1[9] - 1U &
                        (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar14) +
                        (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar14 >> 4)) * 4);
        puVar16 = local_70;
        if (iVar7 != -1) {
          do {
            if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x18) == lVar11) goto LAB_142aa7d4b;
            iVar7 = *(int *)(*param_1 + (longlong)iVar7 * 0x18 + 0x10);
          } while (iVar7 != -1);
        }
      }
      local_60 = *param_2 + (longlong)iVar5 * 0x18;
      local_58 = local_60 + 8;
      FUN_146f982e4(param_1,local_4c,&local_60);
      iVar3 = (int)param_2[5];
LAB_142aa7d4b:
      uVar17 = uVar17 & ~(uint)uVar9;
      puVar4 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar4 = puVar16;
      }
      iVar5 = (int)uVar15;
      lVar11 = (longlong)iVar5;
      uVar6 = puVar4[lVar11] & uVar17;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar6 = puVar4[lVar11 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar17 = 0xffffffff;
              goto LAB_142aa7dbf;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar17 = 0xffffffff;
          lVar11 = (longlong)iVar8;
        }
        uVar15 = lVar11 + 1U & 0xffffffff;
        puVar16 = local_70;
        iVar5 = iVar3;
      }
      else {
LAB_142aa7dbf:
        uVar9 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar9 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_142aa7c56:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142aa7e0a FUN_142aa7e0a body=55 status=ok
// SIG undefined FUN_142aa7e0a(void)

void FUN_142aa7e0a(void)

{
  undefined8 uVar1;
  
  if (DAT_14c99c130 == 0) {
    uVar1 = FUN_141235669();
    DAT_14c99c130 = FUN_14171c317(FUN_14628e0ac,uVar1,L"EComputeNTBsOptions");
  }
  return;
}



// FUNCTION 142aa7e42 FUN_142aa7e42 body=1948 status=ok
// SIG undefined FUN_142aa7e42(void)

/* WARNING: Removing unreachable block (ram,0x000142aa7ec8) */
/* WARNING: Removing unreachable block (ram,0x000142aa819c) */
/* WARNING: Removing unreachable block (ram,0x000142aa7ed9) */
/* WARNING: Removing unreachable block (ram,0x000142aa8124) */
/* WARNING: Removing unreachable block (ram,0x000142aa813d) */
/* WARNING: Removing unreachable block (ram,0x000142aa7ee7) */

void FUN_142aa7e42(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  uint uVar12;
  undefined ***pppuVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong *plVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined1 auStack_148 [44];
  int local_11c;
  ulonglong local_118;
  uint *local_110;
  longlong *local_108;
  longlong *local_100;
  undefined **local_f8 [5];
  byte local_d0;
  byte local_cf;
  undefined8 *local_a0;
  char local_78;
  undefined8 local_70;
  longlong local_68;
  int local_5c;
  undefined8 *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  pppuVar13 = local_f8;
  FUN_1407134c4(pppuVar13);
  local_70 = *(undefined8 *)(param_2 + 0x88);
  *(undefined ****)(param_2 + 0x88) = pppuVar13;
  local_f8[0] = &PTR_FUN_149f3b840;
  local_68 = param_2;
  if ((local_d0 & 1) == 0) {
    uVar21 = CONCAT71((int7)((ulonglong)pppuVar13 >> 8),local_cf >> 5);
    pppuVar13 = (undefined ***)(uVar21 & 0xffffffffffffff01);
    uVar6 = FUN_144a8a784(local_f8);
    local_58 = (undefined8 *)0xa8264fbe9c54d522;
    uStack_50 = 0x94210746;
    uStack_4c = 0x61b482d0;
    FUN_14486d2bc(uVar6,&local_58,uVar21 & 0xffffff01);
  }
  if ((local_d0 & 1) == 0) {
    uVar21 = CONCAT71((int7)((ulonglong)pppuVar13 >> 8),local_cf >> 5);
    pppuVar13 = (undefined ***)(uVar21 & 0xffffffffffffff01);
    if ((code *)local_f8[0][0xb] == FUN_1447a7ed6) {
      if (local_a0 == (undefined8 *)0x0) {
        local_a0 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *local_a0 = 0;
        local_a0[1] = 0;
      }
      puVar7 = local_a0;
      if (local_78 == '\x01') {
        local_78 = '\0';
        *(undefined4 *)(local_a0 + 1) = 0;
        if (*(int *)((longlong)local_a0 + 0xc) != 0) {
          FUN_1401255f0(local_a0,0);
          puVar7 = local_a0;
        }
      }
    }
    else {
      puVar7 = (undefined8 *)(*(code *)local_f8[0][0xb])(local_f8);
    }
    local_58 = (undefined8 *)0xf49442e9e4b068ed;
    uStack_50 = 0xa231da0b;
    uStack_4c = 0x2e46bb41;
    FUN_14486d2bc(puVar7,&local_58,uVar21 & 0xffffff01);
  }
  if ((local_d0 & 1) == 0) {
    if ((code *)local_f8[0][0xb] == FUN_1447a7ed6) {
      if (local_a0 == (undefined8 *)0x0) {
        local_a0 = (undefined8 *)FUN_14001cc68(0x10,0x10);
        *local_a0 = 0;
        local_a0[1] = 0;
      }
      puVar7 = local_a0;
      if (local_78 == '\x01') {
        local_78 = '\0';
        *(undefined4 *)(local_a0 + 1) = 0;
        if (*(int *)((longlong)local_a0 + 0xc) != 0) {
          FUN_1401255f0(local_a0,0);
          puVar7 = local_a0;
        }
      }
    }
    else {
      puVar7 = (undefined8 *)(*(code *)local_f8[0][0xb])(local_f8);
    }
    local_58 = (undefined8 *)0xe64f41ab697dd581;
    uStack_50 = 0xaa4a51ec;
    uStack_4c = 0xbeb7b628;
    FUN_14486d2bc(puVar7,&local_58,
                  CONCAT71((int7)((ulonglong)pppuVar13 >> 8),local_cf >> 5) & 0xffffff01);
    if ((local_d0 & 1) != 0) goto LAB_142aa7f7d;
  }
  else {
LAB_142aa7f7d:
    FUN_1448332aa(local_f8,&DAT_149e31250);
    if ((((local_d0 & 1) != 0) && (iVar1 = FUN_1448332aa(local_f8,&DAT_149e31250), iVar1 != 0x1f))
       && (iVar1 = FUN_1448332aa(local_f8,&DAT_149e3cc78), iVar1 < 4)) {
      FUN_146f6ccec(param_1,local_f8);
      goto LAB_142aa8066;
    }
  }
  FUN_146f98cf8(local_f8,param_1);
  if ((local_d0 & 1) != 0) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      uVar2 = (uint)((ulonglong)DAT_14c99c150 >> 0x10);
      uVar22 = (uint)DAT_14c99c150 & 0xffff;
      plVar10 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar10 = (longlong *)param_1[8];
      }
      iVar1 = *(int *)((longlong)plVar10 +
                      (ulonglong)
                      ((int)param_1[9] - 1U &
                      (int)((ulonglong)DAT_14c99c150 >> 0x20) +
                      ((uint)DAT_14c99c150 << 0x10 | uVar22) + (uVar2 << 0x13 | uVar2 & 0xffff) +
                      (uVar22 >> 4)) * 4);
      if (iVar1 != -1) {
        do {
          plVar10 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
          if (*plVar10 == DAT_14c99c150) {
            if (((ulonglong)(plVar10 + 1) & 0xfffffffffffffff7) != 0) goto LAB_142aa824a;
            break;
          }
          iVar1 = (int)plVar10[2];
        } while (iVar1 != -1);
      }
    }
    local_58 = &DAT_14c99c150;
    FUN_1412e6a90(param_1,&local_5c,&local_58,0);
    param_1[0xc] = *(longlong *)(*param_1 + 8 + (longlong)local_5c * 0x18);
LAB_142aa824a:
    FUN_146f6c1aa(param_1);
    puVar20 = *(uint **)((uint *)param_1[0xe] + 0x20);
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)param_1[0xe];
    }
    uVar2 = puVar20[6];
    if (uVar2 == 0) {
      uVar23 = 1;
      iVar1 = 0;
      uVar16 = 0;
      uVar21 = 0;
    }
    else {
      puVar3 = *(uint **)(puVar20 + 4);
      if (*(uint **)(puVar20 + 4) == (uint *)0x0) {
        puVar3 = puVar20;
      }
      uVar22 = *puVar3;
      if (uVar22 == 0) {
        iVar1 = uVar2 + 0x1e;
        if (-1 < (int)(uVar2 - 1)) {
          iVar1 = uVar2 - 1;
        }
        uVar21 = 0;
        uVar16 = (ulonglong)(uint)(iVar1 >> 5);
        if (iVar1 >> 5 < 1) {
          uVar16 = uVar21;
        }
        iVar1 = 0;
        do {
          if (uVar16 == uVar21) goto LAB_142aa82e5;
          iVar1 = iVar1 + 0x20;
          uVar22 = puVar3[uVar21 + 1];
          uVar21 = uVar21 + 1;
        } while (uVar22 == 0);
      }
      else {
        iVar1 = 0;
        uVar21 = 0;
      }
      uVar23 = (ulonglong)(-uVar22 & uVar22);
      uVar16 = uVar23 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      uVar22 = (iVar1 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      uVar16 = (ulonglong)uVar22;
      if ((int)uVar2 <= (int)uVar22) {
        uVar16 = (ulonglong)uVar2;
      }
    }
    if ((uint)uVar16 != uVar2) {
      local_100 = param_1 + 0x2e;
      local_108 = param_1 + 0x35;
      uVar22 = 0xffffffff;
      local_118 = (ulonglong)uVar2;
      local_110 = puVar20;
      do {
        if ((int)uVar2 <= (int)uVar16) {
          uVar16 = 0xffffffff;
        }
        iVar15 = (int)uVar16;
        uVar24 = uVar16 & 0xff;
        lVar17 = (longlong)(iVar15 >> 8) * 0xc18;
        lVar14 = 0;
        local_11c = iVar1;
        do {
          plVar10 = *(longlong **)(param_1[0x14] + 0x30);
          plVar4 = (longlong *)(param_1[0x14] + 0x18);
          if (plVar10 != (longlong *)0x0) {
            plVar4 = plVar10;
          }
          if ((int)param_1[0x15] == 0) {
            plVar4 = (longlong *)(*plVar4 + lVar17);
            iVar1 = *(int *)((longlong)plVar4 + uVar24 * 4 + 0x10);
          }
          else {
            iVar1 = (int)plVar4[2] * iVar15;
          }
          plVar10 = *(longlong **)(param_1[0x11] + 0x30);
          plVar18 = (longlong *)(param_1[0x11] + 0x18);
          if (plVar10 != (longlong *)0x0) {
            plVar18 = plVar10;
          }
          plVar10 = *(longlong **)(param_1[0x19] + 0x30);
          plVar19 = (longlong *)(param_1[0x19] + 0x18);
          if (plVar10 != (longlong *)0x0) {
            plVar19 = plVar10;
          }
          if ((int)param_1[0x1a] == 0) {
            plVar19 = (longlong *)(*plVar19 + lVar17);
            iVar8 = *(int *)((longlong)plVar19 + uVar24 * 4 + 0x10);
          }
          else {
            iVar8 = (int)plVar19[2] * iVar15;
          }
          iVar1 = *(int *)((longlong)iVar1 * 4 + *plVar4 + lVar14 * 4);
          *(undefined4 *)((longlong)iVar8 * 4 + *plVar19 + lVar14 * 4) =
               *(undefined4 *)(*plVar18 + (longlong)((int)plVar18[2] * iVar1) * 4);
          FUN_146f6de70(local_100,iVar1,uVar16,0);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 3);
        lVar14 = 1;
        do {
          plVar10 = *(longlong **)(param_1[0x19] + 0x30);
          plVar4 = (longlong *)(param_1[0x19] + 0x18);
          if (plVar10 != (longlong *)0x0) {
            plVar4 = plVar10;
          }
          if ((int)param_1[0x1a] == 0) {
            plVar4 = (longlong *)(*plVar4 + lVar17);
            iVar1 = *(int *)((longlong)plVar4 + uVar24 * 4 + 0x10);
          }
          else {
            iVar1 = (int)plVar4[2] * iVar15;
          }
          lVar11 = (longlong)iVar1 * 4 + *plVar4;
          lVar5 = 0;
          if (lVar14 != 3) {
            lVar5 = lVar14;
          }
          FUN_146f6df8a(param_1,&local_58,*(undefined4 *)(lVar11 + -4 + lVar14 * 4),
                        *(undefined4 *)(lVar11 + lVar5 * 4));
          plVar10 = *(longlong **)(param_1[0x17] + 0x30);
          plVar4 = (longlong *)(param_1[0x17] + 0x18);
          if (plVar10 != (longlong *)0x0) {
            plVar4 = plVar10;
          }
          if ((int)param_1[0x18] == 0) {
            plVar4 = (longlong *)(*plVar4 + lVar17);
            iVar1 = *(int *)((longlong)plVar4 + uVar24 * 4 + 0x10);
          }
          else {
            iVar1 = (int)plVar4[2] * iVar15;
          }
          *(undefined4 *)((longlong)iVar1 * 4 + *plVar4 + -4 + lVar14 * 4) = local_58._0_4_;
          FUN_146f6de70(local_108,(ulonglong)local_58 & 0xffffffff,uVar16,0);
          lVar14 = lVar14 + 1;
        } while (lVar14 != 4);
        uVar22 = uVar22 & ~(uint)uVar23;
        puVar20 = *(uint **)(local_110 + 4);
        if (*(uint **)(local_110 + 4) == (uint *)0x0) {
          puVar20 = local_110;
        }
        uVar2 = local_110[6];
        iVar15 = (int)uVar21;
        lVar14 = (longlong)iVar15;
        uVar12 = puVar20[lVar14] & uVar22;
        iVar1 = local_11c;
        if (uVar12 == 0) {
          iVar8 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar8 = uVar2 - 1;
          }
          iVar8 = iVar8 >> 5;
          iVar1 = local_11c + 0x20;
          iVar9 = iVar8;
          if (iVar8 < iVar15) {
            iVar9 = iVar15;
          }
          if (iVar15 < iVar8) {
            lVar17 = 0;
            do {
              uVar12 = puVar20[lVar14 + lVar17 + 1];
              if (uVar12 != 0) {
                uVar21 = (ulonglong)(iVar15 + (int)lVar17 + 1);
                uVar22 = 0xffffffff;
                goto LAB_142aa8557;
              }
              iVar1 = iVar1 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar9 - lVar14 != lVar17);
            uVar22 = 0xffffffff;
            iVar15 = iVar9;
          }
          uVar16 = (ulonglong)uVar2;
          uVar21 = (ulonglong)(iVar15 + 1);
        }
        else {
LAB_142aa8557:
          uVar23 = (ulonglong)(-uVar12 & uVar12);
          uVar16 = uVar23 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar12 = (iVar1 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          uVar16 = (ulonglong)uVar12;
          if ((int)uVar2 <= (int)uVar12) {
            uVar16 = (ulonglong)uVar2;
          }
        }
      } while ((int)uVar16 != (int)local_118);
    }
LAB_142aa82e5:
    FUN_146f6e096(param_1);
  }
LAB_142aa8066:
  FUN_14041e0ea(local_f8);
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa85e0 FUN_142aa85e0 body=65 status=ok
// SIG undefined FUN_142aa85e0(void)

void FUN_142aa85e0(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f72746(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8622 FUN_142aa8622 body=167 status=ok
// SIG undefined FUN_142aa8622(void)

undefined4 * FUN_142aa8622(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < (int)*(uint *)(lVar3 + 0x18))) {
    lVar2 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar2 = lVar3;
    }
    if (((((*(uint *)(lVar2 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) &&
         (-1 < (int)param_4)) && (param_4 < *(uint *)(lVar3 + 0x18))) &&
       ((*(uint *)(lVar2 + (ulonglong)(param_4 >> 5) * 4) >> (param_4 & 0x1f) & 1) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x90);
      }
      uVar1 = FUN_146f70732(lVar3);
      *param_2 = uVar1;
      FUN_146f70188(param_1 + 0x28,uVar1,param_3,param_4);
      return param_2;
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 142aa86ca FUN_142aa86ca body=199 status=ok
// SIG undefined FUN_142aa86ca(void)

void FUN_142aa86ca(longlong param_1,uint param_2,uint param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x90);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar3 + 0x18))) {
    lVar1 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar1 = lVar3;
    }
    if ((*(uint *)(lVar1 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      return;
    }
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < (int)*(uint *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if (((((*(uint *)(lVar2 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) &&
         (uVar4 = (uint)param_4, -1 < (int)uVar4)) && (uVar4 < *(uint *)(lVar1 + 0x18))) &&
       ((*(uint *)(lVar2 + (param_4 >> 5 & 0x7ffffff) * 4) >> (uVar4 & 0x1f) & 1) != 0)) {
      FUN_146f6e144(lVar3,param_2);
      FUN_146f70188(param_1 + 0x28,param_2,param_3,param_4 & 0xffffffff);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8792 FUN_142aa8792 body=215 status=ok
// SIG undefined FUN_142aa8792(void)

undefined4 *
FUN_142aa8792(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0xa8);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar4 + 0x18))) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar5 = lVar4;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      uVar2 = *param_4;
      uVar1 = *(undefined4 *)(param_4 + 1);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 0xa0);
      }
      uVar3 = FUN_146f70732(lVar4);
      *param_2 = uVar3;
      local_58 = param_5;
      local_48 = uVar2;
      local_40 = uVar1;
      FUN_146f70e56(param_1 + 0x28,uVar3,param_3);
      goto LAB_142aa87f4;
    }
  }
  *param_2 = 0xffffffff;
LAB_142aa87f4:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa886a FUN_142aa886a body=70 status=ok
// SIG undefined FUN_142aa886a(void)

void FUN_142aa886a(longlong param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0xa8);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar4 + 0x18))) {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar3 = lVar4;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      return;
    }
  }
  iVar2 = *(int *)(lVar4 + 0x18);
  if ((int)param_2 < iVar2) {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar3 = lVar4;
    }
    uVar5 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar5 = param_2;
    }
    puVar1 = (uint *)(lVar3 + (longlong)((int)uVar5 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
    *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + -1;
    return;
  }
  FUN_144a686e6(lVar4,param_2 + 1);
  FUN_1447c6044(lVar4,iVar2,param_2 - iVar2,0);
  lVar3 = *(longlong *)(lVar4 + 0x10);
  if (*(longlong *)(lVar4 + 0x10) == 0) {
    lVar3 = lVar4;
  }
  uVar5 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  puVar1 = (uint *)(lVar3 + (longlong)((int)uVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + (param_2 - iVar2);
  FUN_146f911f8(lVar4 + 0x20,param_2);
  return;
}



// FUNCTION 142aa88b0 FUN_142aa88b0 body=236 status=ok
// SIG undefined FUN_142aa88b0(void)

void FUN_142aa88b0(longlong param_1,uint param_2,ulonglong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar4 + 0x18))) {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar3 = lVar4;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
    goto LAB_142aa893f;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  uVar6 = (uint)param_3;
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar3 + 0x18))) {
    lVar5 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar5 = lVar3;
    }
    if ((*(uint *)(lVar5 + (param_3 >> 5 & 0x7ffffff) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
      uVar2 = *param_4;
      uVar1 = *(undefined4 *)(param_4 + 1);
      FUN_146f6e144(lVar4,param_2);
      local_58 = param_5;
      local_48 = uVar2;
      local_40 = uVar1;
      FUN_146f70e56(param_1 + 0x28,param_2,param_3 & 0xffffffff);
    }
  }
LAB_142aa893f:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa899e FUN_142aa899e body=215 status=ok
// SIG undefined FUN_142aa899e(void)

undefined4 *
FUN_142aa899e(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0xa8);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar4 + 0x18))) {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar5 = lVar4;
    }
    if ((*(uint *)(lVar5 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      uVar2 = *param_4;
      uVar1 = *(undefined4 *)(param_4 + 1);
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + 0x98);
      }
      uVar3 = FUN_146f70732(lVar4);
      *param_2 = uVar3;
      local_58 = param_5;
      local_48 = uVar2;
      local_40 = uVar1;
      FUN_146f7039a(param_1 + 0x28,uVar3,param_3);
      goto LAB_142aa8a00;
    }
  }
  *param_2 = 0xffffffff;
LAB_142aa8a00:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa8a76 FUN_142aa8a76 body=236 status=ok
// SIG undefined FUN_142aa8a76(void)

void FUN_142aa8a76(longlong param_1,uint param_2,ulonglong param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x98);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar4 + 0x18))) {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar3 = lVar4;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
    goto LAB_142aa8b05;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0xa8);
  }
  uVar6 = (uint)param_3;
  if ((-1 < (int)uVar6) && ((int)uVar6 < *(int *)(lVar3 + 0x18))) {
    lVar5 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar5 = lVar3;
    }
    if ((*(uint *)(lVar5 + (param_3 >> 5 & 0x7ffffff) * 4) >> (uVar6 & 0x1f) & 1) != 0) {
      uVar2 = *param_4;
      uVar1 = *(undefined4 *)(param_4 + 1);
      FUN_146f6e144(lVar4,param_2);
      local_58 = param_5;
      local_48 = uVar2;
      local_40 = uVar1;
      FUN_146f7039a(param_1 + 0x28,param_2,param_3 & 0xffffffff);
    }
  }
LAB_142aa8b05:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa8b64 FUN_142aa8b64 body=176 status=ok
// SIG undefined FUN_142aa8b64(void)

int * FUN_142aa8b64(longlong param_1,int *param_2,uint param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar3 + 0x18))) {
    lVar4 = *(longlong *)(lVar3 + 0x10);
    if (*(longlong *)(lVar3 + 0x10) == 0) {
      lVar4 = lVar3;
    }
    if ((*(uint *)(lVar4 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x80);
      }
      iVar2 = FUN_146f70732(lVar3);
      *param_2 = iVar2;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(uint *)(*plVar5 + (longlong)((int)plVar5[2] * iVar2) * 4) = param_3;
      FUN_146f6de70(param_1 + 0x128,param_3,iVar2,0);
      return param_2;
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142aa8c14 FUN_142aa8c14 body=204 status=ok
// SIG undefined FUN_142aa8c14(void)

void FUN_142aa8c14(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar2 + 0x18))) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar3 = lVar2;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
      if (lVar2 == 0) {
        lVar2 = *(longlong *)(param_1 + 0x80);
      }
      if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x18))) {
        lVar3 = *(longlong *)(lVar2 + 0x10);
        if (*(longlong *)(lVar2 + 0x10) == 0) {
          lVar3 = lVar2;
        }
        if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
          return;
        }
      }
      FUN_146f6e144(lVar2,param_2);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x30);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xb0) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar4 = plVar1;
      }
      *(uint *)(*plVar4 + (longlong)(int)((int)plVar4[2] * param_2) * 4) = param_3;
      FUN_146f6de70(param_1 + 0x128,param_3,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8ce0 FUN_142aa8ce0 body=67 status=ok
// SIG undefined FUN_142aa8ce0(void)

void FUN_142aa8ce0(longlong param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar4 + 0x18))) {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar3 = lVar4;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      return;
    }
  }
  iVar2 = *(int *)(lVar4 + 0x18);
  if ((int)param_2 < iVar2) {
    lVar3 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar3 = lVar4;
    }
    uVar5 = param_2 + 0x1f;
    if (-1 < (int)param_2) {
      uVar5 = param_2;
    }
    puVar1 = (uint *)(lVar3 + (longlong)((int)uVar5 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
    *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + -1;
    return;
  }
  FUN_144a686e6(lVar4,param_2 + 1);
  FUN_1447c6044(lVar4,iVar2,param_2 - iVar2,0);
  lVar3 = *(longlong *)(lVar4 + 0x10);
  if (*(longlong *)(lVar4 + 0x10) == 0) {
    lVar3 = lVar4;
  }
  uVar5 = param_2 + 0x1f;
  if (-1 < (int)param_2) {
    uVar5 = param_2;
  }
  puVar1 = (uint *)(lVar3 + (longlong)((int)uVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
  *(int *)(lVar4 + 0x78) = *(int *)(lVar4 + 0x78) + (param_2 - iVar2);
  FUN_146f911f8(lVar4 + 0x20,param_2);
  return;
}



// FUNCTION 142aa8d24 FUN_142aa8d24 body=65 status=ok
// SIG undefined FUN_142aa8d24(void)

void FUN_142aa8d24(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f7021a(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8d66 FUN_142aa8d66 body=65 status=ok
// SIG undefined FUN_142aa8d66(void)

void FUN_142aa8d66(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f71008(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8da8 FUN_142aa8da8 body=65 status=ok
// SIG undefined FUN_142aa8da8(void)

void FUN_142aa8da8(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0xa8);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f70d54(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8dea FUN_142aa8dea body=65 status=ok
// SIG undefined FUN_142aa8dea(void)

void FUN_142aa8dea(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f70952(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8e2c FUN_142aa8e2c body=62 status=ok
// SIG undefined FUN_142aa8e2c(void)

void FUN_142aa8e2c(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x78);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f70ddc(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8e6a FUN_142aa8e6a body=65 status=ok
// SIG undefined FUN_142aa8e6a(void)

void FUN_142aa8e6a(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x80);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f70056(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8eac FUN_142aa8eac body=65 status=ok
// SIG undefined FUN_142aa8eac(void)

void FUN_142aa8eac(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f78b86(param_1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 142aa8eee FUN_142aa8eee body=203 status=ok
// SIG undefined FUN_142aa8eee(void)

void FUN_142aa8eee(longlong param_1,uint param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar2 = lVar1;
    }
    if ((*(uint *)(lVar2 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f716d6(param_1 + 0x1d0,&local_30,param_2,0);
      *(int *)(param_3 + 1) = local_28;
      if (local_28 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_146f92816(param_3,local_28);
        if (local_28 != 0) {
          memcpy((void *)*param_3,local_30,(longlong)local_28 << 2);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa8fba FUN_142aa8fba body=170 status=ok
// SIG undefined FUN_142aa8fba(void)

void FUN_142aa8fba(longlong param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x90);
  }
  uVar2 = 0xffffffff;
  if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(lVar4 + 0x18))) {
    lVar6 = *(longlong *)(lVar4 + 0x10);
    if (*(longlong *)(lVar4 + 0x10) == 0) {
      lVar6 = lVar4;
    }
    if (param_4 < 2 &&
        (*(uint *)(lVar6 + (ulonglong)(param_3 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
      plVar5 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
      if (plVar1 != (longlong *)0x0) {
        plVar5 = plVar1;
      }
      if (*(int *)(param_1 + 0xc0) == 0) {
        plVar5 = (longlong *)((ulonglong)(param_3 >> 8) * 0xc18 + *plVar5);
        iVar3 = *(int *)((longlong)plVar5 + (ulonglong)(param_3 & 0xff) * 4 + 0x10);
      }
      else {
        iVar3 = param_3 * (int)plVar5[2];
      }
      uVar2 = *(undefined4 *)((longlong)iVar3 * 4 + *plVar5 + (ulonglong)param_4 * 4);
    }
  }
  *param_2 = uVar2;
  return;
}



// FUNCTION 142aa9064 FUN_142aa9064 body=237 status=ok
// SIG undefined FUN_142aa9064(void)

void FUN_142aa9064(longlong param_1,uint param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar8 == 0) {
    lVar8 = *(longlong *)(param_1 + 0x90);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar8 + 0x18))) {
    lVar7 = *(longlong *)(lVar8 + 0x10);
    if (*(longlong *)(lVar8 + 0x10) == 0) {
      lVar7 = lVar8;
    }
    if ((*(uint *)(lVar7 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      lVar8 = (longlong)*(int *)(param_1 + 0xc0);
      plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xb8) + 0x30);
      plVar4 = (longlong *)(*(longlong *)(param_1 + 0xb8) + 0x18);
      if (plVar3 != (longlong *)0x0) {
        plVar4 = plVar3;
      }
      if (lVar8 == 0) {
        lVar5 = (ulonglong)(param_2 >> 8) * 0xc18;
        lVar7 = *plVar4 + lVar5;
        lVar8 = (longlong)*(int *)(lVar7 + 0x410 + (ulonglong)(param_2 & 0xff) * 4);
        if (lVar8 == 0) {
          return;
        }
        puVar6 = (undefined4 *)
                 ((longlong)*(int *)(lVar7 + 0x10 + (ulonglong)(param_2 & 0xff) * 4) * 4 +
                 *(longlong *)(*plVar4 + lVar5));
      }
      else {
        puVar6 = (undefined4 *)((longlong)(int)(param_2 * (int)plVar4[2]) * 4 + *plVar4);
      }
      puVar1 = puVar6 + lVar8;
      do {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_146f9d70c(param_3,iVar2);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar2 * 4) = *puVar6;
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar1);
    }
  }
  return;
}



// FUNCTION 142aa9152 FUN_142aa9152 body=67 status=ok
// SIG undefined FUN_142aa9152(void)

undefined8 FUN_142aa9152(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
  }
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar1 + 0x18))) {
    lVar3 = *(longlong *)(lVar1 + 0x10);
    if (*(longlong *)(lVar1 + 0x10) == 0) {
      lVar3 = lVar1;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      uVar2 = FUN_146f78c58(param_1 + 0x28);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142aa9196 FUN_142aa9196 body=140 status=ok
// SIG undefined FUN_142aa9196(void)

undefined4 FUN_142aa9196(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
  }
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x18))) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar3 = lVar2;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f92b68(param_1 + 0x1d0,local_20,param_2,0);
      uVar1 = local_18;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa9224 FUN_142aa9224 body=140 status=ok
// SIG undefined FUN_142aa9224(void)

undefined4 FUN_142aa9224(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
  }
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x18))) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar3 = lVar2;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f92b68(param_1 + 0x2b0,local_20,param_2,0);
      uVar1 = local_18;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa92b2 FUN_142aa92b2 body=142 status=ok
// SIG undefined FUN_142aa92b2(void)

int FUN_142aa92b2(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
  }
  iVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x18))) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar3 = lVar2;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f92b68(param_1 + 0x240,local_20,param_2,0);
      iVar1 = local_18 + -1;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa9342 FUN_142aa9342 body=140 status=ok
// SIG undefined FUN_142aa9342(void)

undefined4 FUN_142aa9342(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
  }
  uVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x18))) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar3 = lVar2;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f92b68(param_1 + 0x240,local_20,param_2,0);
      uVar1 = local_18;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142aa93d0 FUN_142aa93d0 body=143 status=ok
// SIG undefined FUN_142aa93d0(void)

int FUN_142aa93d0(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x80);
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
  }
  iVar1 = 0;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar2 + 0x18))) {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    if (*(longlong *)(lVar2 + 0x10) == 0) {
      lVar3 = lVar2;
    }
    if ((*(uint *)(lVar3 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0) {
      FUN_146f716d6(param_1 + 0x240,local_20,param_2,0);
      iVar1 = local_18 + 2;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


