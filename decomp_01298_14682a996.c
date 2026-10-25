// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14682a996 FUN_14682a996 body=568 status=ok
// SIG undefined FUN_14682a996(void)

void FUN_14682a996(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar12 = iVar7;
joined_r0x00014682a9cb:
    do {
      iVar10 = iVar7 * 2 + 1;
      if (iVar10 < (int)param_2) {
        iVar11 = iVar7 * 2 + 2;
        if (iVar11 < (int)param_2) {
          lVar13 = (longlong)iVar11;
          lVar9 = (longlong)iVar10;
          bVar14 = (ulonglong)param_1[lVar13 * 2] < (ulonglong)param_1[lVar9 * 2];
          if ((param_1[lVar13 * 2] == param_1[lVar9 * 2]) &&
             (bVar14 = *(uint *)(param_1 + lVar13 * 2 + 1) < *(uint *)(param_1 + lVar9 * 2 + 1),
             *(uint *)(param_1 + lVar13 * 2 + 1) == *(uint *)(param_1 + lVar9 * 2 + 1))) {
            bVar14 = *(uint *)((longlong)param_1 + lVar13 * 0x10 + 0xc) <
                     *(uint *)((longlong)param_1 + lVar9 * 0x10 + 0xc);
          }
          if (!bVar14) {
            iVar10 = iVar11;
          }
        }
        puVar2 = param_1 + (longlong)iVar7 * 2;
        puVar3 = param_1 + (longlong)iVar10 * 2;
        bVar14 = (ulonglong)param_1[(longlong)iVar7 * 2] < (ulonglong)param_1[(longlong)iVar10 * 2];
        if ((param_1[(longlong)iVar7 * 2] == param_1[(longlong)iVar10 * 2]) &&
           (bVar14 = *(uint *)(puVar2 + 1) < *(uint *)(puVar3 + 1),
           *(uint *)(puVar2 + 1) == *(uint *)(puVar3 + 1))) {
          bVar14 = *(uint *)((longlong)puVar2 + 0xc) < *(uint *)((longlong)puVar3 + 0xc);
        }
        if (bVar14) {
          uVar4 = *puVar2;
          uVar5 = puVar2[1];
          uVar6 = puVar3[1];
          *puVar2 = *puVar3;
          puVar2[1] = uVar6;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar3 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar3 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar3 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_20._4_4_;
          iVar7 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x00014682a9cb;
        }
      }
      bVar14 = iVar12 != 0;
      iVar7 = iVar12 + -1;
      iVar12 = iVar7;
    } while (bVar14);
    if (1 < (int)param_2) {
      uVar8 = (ulonglong)param_2 - 1;
      uVar4 = *param_1;
      uVar5 = param_1[1];
      uVar6 = (param_1 + uVar8 * 2)[1];
      *param_1 = param_1[uVar8 * 2];
      param_1[1] = uVar6;
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar2 = param_1 + uVar8 * 2;
      *(undefined4 *)puVar2 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar7 = 0;
          iVar10 = 1;
          iVar12 = 0;
          do {
            lVar9 = (longlong)(iVar7 + 2);
            iVar11 = iVar10;
            if (lVar9 < (longlong)uVar8) {
              lVar13 = (longlong)iVar10;
              bVar14 = (ulonglong)param_1[lVar9 * 2] < (ulonglong)param_1[lVar13 * 2];
              if ((param_1[lVar9 * 2] == param_1[lVar13 * 2]) &&
                 (bVar14 = *(uint *)(param_1 + lVar9 * 2 + 1) < *(uint *)(param_1 + lVar13 * 2 + 1),
                 *(uint *)(param_1 + lVar9 * 2 + 1) == *(uint *)(param_1 + lVar13 * 2 + 1))) {
                bVar14 = *(uint *)((longlong)param_1 + lVar9 * 0x10 + 0xc) <
                         *(uint *)((longlong)param_1 + lVar13 * 0x10 + 0xc);
              }
              if (!bVar14) {
                iVar11 = iVar7 + 2;
              }
            }
            puVar2 = param_1 + (longlong)iVar12 * 2;
            puVar3 = param_1 + (longlong)iVar11 * 2;
            bVar14 = (ulonglong)param_1[(longlong)iVar12 * 2] <
                     (ulonglong)param_1[(longlong)iVar11 * 2];
            if ((param_1[(longlong)iVar12 * 2] == param_1[(longlong)iVar11 * 2]) &&
               (bVar14 = *(uint *)(puVar2 + 1) < *(uint *)(puVar3 + 1),
               *(uint *)(puVar2 + 1) == *(uint *)(puVar3 + 1))) {
              bVar14 = *(uint *)((longlong)puVar2 + 0xc) < *(uint *)((longlong)puVar3 + 0xc);
            }
            if (!bVar14) break;
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar3[1];
            *puVar2 = *puVar3;
            puVar2[1] = uVar6;
            *puVar3 = uVar4;
            puVar3[1] = uVar5;
            iVar7 = iVar11 * 2;
            iVar10 = iVar11 * 2 + 1;
            iVar12 = iVar11;
          } while ((longlong)iVar10 < (longlong)uVar8);
          uVar1 = uVar8 - 1;
          uVar4 = *param_1;
          uVar5 = param_1[1];
          uVar6 = (param_1 + uVar1 * 2)[1];
          *param_1 = param_1[uVar1 * 2];
          param_1[1] = uVar6;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar2 = param_1 + uVar1 * 2;
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          bVar14 = 2 < uVar8;
          uVar8 = uVar1;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar14);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14682abcf FUN_14682abcf body=884 status=ok
// SIG undefined FUN_14682abcf(void)

void FUN_14682abcf(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  byte extraout_var;
  byte bVar4;
  ulonglong *puVar3;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong *puVar11;
  ulonglong *puVar12;
  ulonglong *puVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_378 [32];
  longlong local_358;
  longlong local_350;
  undefined4 local_348 [188];
  ulonglong local_58;
  undefined4 local_50;
  ulonglong local_48;
  ulonglong *puVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  if (1 < (int)param_2) {
    memset(local_348,0,0x2f0);
    local_350 = param_1 + (ulonglong)param_2 * 0xc + -0xc;
    local_358 = param_1;
    fVar15 = logf((float)(int)param_2);
    local_348[0] = (int)(longlong)(fVar15 + fVar15);
    plVar7 = &local_358;
    do {
      puVar11 = (ulonglong *)*plVar7;
      puVar13 = (ulonglong *)plVar7[1];
      iVar8 = (int)plVar7[2];
      iVar2 = (int)((ulonglong)((longlong)puVar13 - (longlong)puVar11) >> 2);
      if (iVar8 != 0) {
LAB_14682ac71:
        uVar5 = iVar2 * -0x55555555 + 1;
        if (8 < (int)uVar5) {
          uVar6 = (ulonglong)(uVar5 >> 1);
          local_50 = *(undefined4 *)((longlong)puVar11 + uVar6 * 0xc + 8);
          local_58 = *(ulonglong *)((longlong)puVar11 + uVar6 * 0xc);
          *(int *)((longlong)puVar11 + uVar6 * 0xc + 8) = (int)puVar11[1];
          *(ulonglong *)((longlong)puVar11 + uVar6 * 0xc) = *puVar11;
          *(undefined4 *)(puVar11 + 1) = local_50;
          *puVar11 = local_58;
          puVar3 = (ulonglong *)((longlong)puVar13 + 0xc);
          puVar9 = puVar11;
LAB_14682acc5:
          while (puVar10 = puVar9, puVar9 = (ulonglong *)((longlong)puVar10 + 0xc),
                puVar9 <= puVar13) {
            uVar6 = *puVar9;
            uVar1 = *puVar11;
            if (uVar1 != uVar6) goto LAB_14682ace4;
            if ((uint)puVar11[1] < *(uint *)((longlong)puVar10 + 0x14)) break;
          }
          goto LAB_14682acf7;
        }
        for (; puVar9 = puVar11, puVar3 = puVar11, puVar11 < puVar13;
            puVar13 = (ulonglong *)((longlong)puVar13 + -0xc)) {
          while (puVar10 = puVar9, puVar3 = (ulonglong *)((longlong)puVar3 + 0xc), puVar3 <= puVar13
                ) {
            uVar6 = *puVar3;
            uVar1 = *puVar10;
            if (uVar1 == uVar6) {
              bVar14 = (uint)puVar10[1] < (uint)puVar3[1];
            }
            else {
              if ((int)uVar1 == (int)uVar6) {
                bVar4 = (byte)((uint)((int)(uVar1 >> 0x20) - (int)(uVar6 >> 0x20)) >> 0x18);
              }
              else {
                FUN_14002c2bd(uVar1 & 0xffffffff);
                bVar4 = extraout_var;
              }
              bVar14 = (bool)(bVar4 >> 7);
            }
            puVar9 = puVar3;
            if (bVar14 == false) {
              puVar9 = puVar10;
            }
          }
          uVar6 = puVar10[1];
          local_50 = (int)uVar6;
          local_58 = *puVar10;
          *(int *)(puVar10 + 1) = (int)puVar13[1];
          *puVar10 = *puVar13;
          *(int *)(puVar13 + 1) = (int)uVar6;
          *puVar13 = local_58;
        }
        goto LAB_14682af04;
      }
LAB_14682ae48:
      FUN_14682af44(puVar11);
LAB_14682af04:
      plVar7 = plVar7 + -3;
    } while (&local_358 <= plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14682ace4:
  if ((int)uVar1 == (int)uVar6) {
    iVar2 = (int)(uVar1 >> 0x20) - (int)(uVar6 >> 0x20);
  }
  else {
    iVar2 = FUN_14002c2bd(uVar1 & 0xffffffff);
  }
  if (-1 < iVar2) goto LAB_14682acc5;
LAB_14682acf7:
  do {
    while( true ) {
      puVar12 = puVar3;
      puVar3 = (ulonglong *)((longlong)puVar12 + -0xc);
      if (puVar3 <= puVar11) goto LAB_14682ad4e;
      uVar6 = *puVar11;
      uVar1 = *(ulonglong *)((longlong)puVar12 + -0xc);
      if (uVar1 != uVar6) break;
      if (*(uint *)((longlong)puVar12 + -4) < (uint)puVar11[1]) goto LAB_14682ad4e;
    }
    if ((int)uVar1 == (int)uVar6) {
      iVar2 = (int)(uVar1 >> 0x20) - (int)(uVar6 >> 0x20);
    }
    else {
      iVar2 = FUN_14002c2bd(uVar1 & 0xffffffff);
    }
  } while (-1 < iVar2);
LAB_14682ad4e:
  if (puVar9 <= puVar3) {
    local_50 = *(undefined4 *)((longlong)puVar10 + 0x14);
    local_58 = *puVar9;
    *(undefined4 *)((longlong)puVar10 + 0x14) = *(undefined4 *)((longlong)puVar12 + -4);
    *puVar9 = *puVar3;
    *(undefined4 *)((longlong)puVar12 + -4) = local_50;
    *puVar3 = local_58;
    goto LAB_14682acc5;
  }
  uVar6 = puVar11[1];
  local_50 = (int)uVar6;
  local_58 = *puVar11;
  *(undefined4 *)(puVar11 + 1) = *(undefined4 *)((longlong)puVar12 + -4);
  *puVar11 = *puVar3;
  *(int *)((longlong)puVar12 + -4) = (int)uVar6;
  *puVar3 = local_58;
  iVar8 = iVar8 + -1;
  puVar12 = puVar12 + -3;
  if ((longlong)puVar12 - (longlong)puVar11 < (longlong)puVar13 - (longlong)puVar9) {
    if (puVar9 < puVar13) {
      *plVar7 = (longlong)puVar9;
      plVar7[1] = (longlong)puVar13;
      *(int *)(plVar7 + 2) = iVar8;
      plVar7 = plVar7 + 3;
    }
    if (puVar3 <= (ulonglong *)((longlong)puVar11 + 0xcU)) goto LAB_14682af04;
  }
  else {
    if ((ulonglong *)((longlong)puVar11 + 0xcU) < puVar3) {
      *plVar7 = (longlong)puVar11;
      plVar7[1] = (longlong)puVar12;
      *(int *)(plVar7 + 2) = iVar8;
      plVar7 = plVar7 + 3;
    }
    puVar12 = puVar13;
    puVar11 = puVar9;
    if (puVar13 <= puVar9) goto LAB_14682af04;
  }
  iVar2 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar11) >> 2);
  puVar13 = puVar12;
  if (iVar8 == 0) goto LAB_14682ae48;
  goto LAB_14682ac71;
}



// FUNCTION 14682af44 FUN_14682af44 body=755 status=ok
// SIG undefined FUN_14682af44(void)

void FUN_14682af44(ulonglong *param_1,uint param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  byte extraout_var;
  byte bVar6;
  byte extraout_var_00;
  longlong lVar5;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    iVar7 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar11 = iVar7;
joined_r0x00014682af85:
    do {
      iVar9 = iVar7 * 2 + 1;
      if (iVar9 < (int)param_2) {
        iVar10 = iVar7 * 2 + 2;
        if (iVar10 < (int)param_2) {
          uVar8 = *(ulonglong *)((longlong)param_1 + (longlong)iVar9 * 0xc);
          uVar3 = *(ulonglong *)((longlong)param_1 + (longlong)iVar10 * 0xc);
          if (uVar3 == uVar8) {
            bVar12 = *(uint *)((longlong)param_1 + (longlong)iVar10 * 0xc + 8) <
                     *(uint *)((longlong)param_1 + (longlong)iVar9 * 0xc + 8);
          }
          else {
            if ((int)uVar3 == (int)uVar8) {
              bVar6 = (byte)((uint)((int)(uVar3 >> 0x20) - (int)(uVar8 >> 0x20)) >> 0x18);
            }
            else {
              FUN_14002c2bd(uVar3 & 0xffffffff);
              bVar6 = extraout_var;
            }
            bVar12 = (bool)(bVar6 >> 7);
          }
          if (bVar12 == false) {
            iVar9 = iVar10;
          }
        }
        puVar1 = (ulonglong *)((longlong)param_1 + (longlong)iVar7 * 0xc);
        puVar2 = (ulonglong *)((longlong)param_1 + (longlong)iVar9 * 0xc);
        uVar8 = *puVar2;
        uVar3 = *puVar1;
        if (uVar3 == uVar8) {
          if ((uint)puVar1[1] < (uint)puVar2[1]) {
LAB_14682b021:
            local_48 = (undefined4)puVar1[1];
            local_50 = *puVar1;
            *(int *)(puVar1 + 1) = (int)puVar2[1];
            *puVar1 = *puVar2;
            *(undefined4 *)(puVar2 + 1) = local_48;
            *puVar2 = local_50;
            iVar7 = iVar9;
            goto joined_r0x00014682af85;
          }
        }
        else {
          if ((int)uVar3 == (int)uVar8) {
            iVar7 = (int)(uVar3 >> 0x20) - (int)(uVar8 >> 0x20);
          }
          else {
            iVar7 = FUN_14002c2bd(uVar3 & 0xffffffff);
          }
          if (iVar7 < 0) goto LAB_14682b021;
        }
      }
      bVar12 = iVar11 != 0;
      iVar7 = iVar11 + -1;
      iVar11 = iVar7;
    } while (bVar12);
    if (1 < (int)param_2) {
      uVar8 = (ulonglong)param_2 - 1;
      local_48 = (undefined4)param_1[1];
      local_50 = *param_1;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar8 * 0xc + 8);
      *param_1 = *(ulonglong *)((longlong)param_1 + uVar8 * 0xc);
      *(undefined4 *)((longlong)param_1 + uVar8 * 0xc + 8) = local_48;
      *(ulonglong *)((longlong)param_1 + uVar8 * 0xc) = local_50;
      if (param_2 != 2) {
        do {
          iVar7 = 0;
          iVar9 = 1;
          iVar11 = 0;
          do {
            lVar5 = (longlong)(iVar7 + 2);
            iVar10 = iVar9;
            if (lVar5 < (longlong)uVar8) {
              uVar3 = *(ulonglong *)((longlong)param_1 + (longlong)iVar9 * 0xc);
              uVar4 = *(ulonglong *)((longlong)param_1 + lVar5 * 0xc);
              if (uVar4 == uVar3) {
                bVar12 = *(uint *)((longlong)param_1 + lVar5 * 0xc + 8) <
                         *(uint *)((longlong)param_1 + (longlong)iVar9 * 0xc + 8);
              }
              else {
                if ((int)uVar4 == (int)uVar3) {
                  bVar6 = (byte)((uint)((int)(uVar4 >> 0x20) - (int)(uVar3 >> 0x20)) >> 0x18);
                }
                else {
                  FUN_14002c2bd(uVar4 & 0xffffffff);
                  bVar6 = extraout_var_00;
                }
                bVar12 = (bool)(bVar6 >> 7);
              }
              if (bVar12 == false) {
                iVar10 = iVar7 + 2;
              }
            }
            puVar1 = (ulonglong *)((longlong)param_1 + (longlong)iVar11 * 0xc);
            puVar2 = (ulonglong *)((longlong)param_1 + (longlong)iVar10 * 0xc);
            uVar3 = *puVar2;
            uVar4 = *puVar1;
            if (uVar4 == uVar3) {
              if ((uint)puVar2[1] <= (uint)puVar1[1]) break;
            }
            else {
              if ((int)uVar4 == (int)uVar3) {
                iVar7 = (int)(uVar4 >> 0x20) - (int)(uVar3 >> 0x20);
              }
              else {
                iVar7 = FUN_14002c2bd(uVar4 & 0xffffffff);
              }
              if (-1 < iVar7) break;
            }
            local_48 = (undefined4)puVar1[1];
            local_50 = *puVar1;
            *(int *)(puVar1 + 1) = (int)puVar2[1];
            *puVar1 = *puVar2;
            *(undefined4 *)(puVar2 + 1) = local_48;
            *puVar2 = local_50;
            iVar7 = iVar10 * 2;
            iVar9 = iVar10 * 2 + 1;
            iVar11 = iVar10;
          } while ((longlong)iVar9 < (longlong)uVar8);
          uVar3 = uVar8 - 1;
          local_48 = (undefined4)param_1[1];
          local_50 = *param_1;
          *(undefined4 *)(param_1 + 1) = *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 8);
          *param_1 = *(ulonglong *)((longlong)param_1 + uVar3 * 0xc);
          *(undefined4 *)((longlong)param_1 + uVar3 * 0xc + 8) = local_48;
          *(ulonglong *)((longlong)param_1 + uVar3 * 0xc) = local_50;
          bVar12 = 2 < uVar8;
          uVar8 = uVar3;
        } while (bVar12);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14682b238 FUN_14682b238 body=147 status=ok
// SIG undefined FUN_14682b238(void)

double * FUN_14682b238(double *param_1,char param_2,undefined8 param_3,double param_4,
                      undefined4 param_5)

{
  double dVar1;
  undefined1 auStack_58 [32];
  LARGE_INTEGER local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\0') {
    dVar1 = 0.0;
    param_5 = 0;
  }
  else {
    QueryPerformanceCounter(&local_38);
    dVar1 = (double)local_38.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  *param_1 = dVar1;
  FUN_1400b22c2(param_1 + 1,param_3);
  param_1[3] = param_4;
  *(undefined4 *)(param_1 + 4) = param_5;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682b2cc FUN_14682b2cc body=95 status=ok
// SIG undefined FUN_14682b2cc(void)

void FUN_14682b2cc(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  short sVar6;
  ushort uVar7;
  
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar5 = 0;
    do {
      bVar1 = *(byte *)(lVar2 + lVar5);
      bVar3 = bVar1 >> 4;
      sVar6 = bVar3 + 0x57;
      if (bVar1 < 0xa0) {
        sVar6 = bVar3 + 0x30;
      }
      *(short *)(param_2 + lVar5 * 4) = sVar6;
      uVar7 = *(byte *)(lVar2 + lVar5) & 0xf;
      sVar6 = 0x57;
      if ((byte)uVar7 < 10) {
        sVar6 = 0x30;
      }
      *(ushort *)(param_2 + 2 + lVar5 * 4) = uVar7 + sVar6;
      lVar5 = lVar5 + 1;
    } while ((int)lVar4 != lVar5);
  }
  return;
}



// FUNCTION 14682b32b FUN_14682b32b body=175 status=ok
// SIG undefined FUN_14682b32b(void)

void FUN_14682b32b(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  short sVar7;
  ushort uVar8;
  
  lVar5 = (longlong)(int)param_1[1];
  lVar4 = param_2[1];
  if ((ulonglong)param_2[2] <= (ulonglong)(lVar4 + lVar5 * 4)) {
    FUN_140213274(param_2,lVar5 * 2);
    lVar4 = param_2[1];
  }
  param_2[1] = lVar4 + lVar5 * 4;
  lVar5 = param_1[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_1;
    lVar4 = *param_2 + (longlong)(int)((ulonglong)(lVar4 - *param_2) >> 1) * 2;
    lVar6 = 0;
    do {
      bVar1 = *(byte *)(lVar2 + lVar6);
      bVar3 = bVar1 >> 4;
      sVar7 = bVar3 + 0x57;
      if (bVar1 < 0xa0) {
        sVar7 = bVar3 + 0x30;
      }
      *(short *)(lVar4 + lVar6 * 4) = sVar7;
      uVar8 = *(byte *)(lVar2 + lVar6) & 0xf;
      sVar7 = 0x57;
      if ((byte)uVar8 < 10) {
        sVar7 = 0x30;
      }
      *(ushort *)(lVar4 + 2 + lVar6 * 4) = uVar8 + sVar7;
      lVar6 = lVar6 + 1;
    } while ((int)lVar5 != lVar6);
  }
  return;
}



// FUNCTION 14682b3da FUN_14682b3da body=166 status=ok
// SIG undefined FUN_14682b3da(void)

void FUN_14682b3da(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  byte bVar6;
  char cVar7;
  
  lVar3 = param_2[1];
  lVar2 = (longlong)(int)param_1[1] * 2;
  if ((ulonglong)param_2[2] <= (ulonglong)(lVar3 + (longlong)(int)param_1[1] * 2)) {
    FUN_1402134d6(param_2,lVar2);
    lVar3 = param_2[1];
  }
  param_2[1] = lVar2 + lVar3;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar3 = (longlong)((int)lVar3 - (int)*param_2) + *param_2;
    lVar4 = 0;
    do {
      bVar6 = *(byte *)(lVar1 + lVar4);
      cVar5 = 'W';
      cVar7 = 'W';
      if (bVar6 < 0xa0) {
        cVar7 = '0';
      }
      *(byte *)(lVar3 + lVar4 * 2) = cVar7 + (bVar6 >> 4);
      bVar6 = *(byte *)(lVar1 + lVar4) & 0xf;
      if (bVar6 < 10) {
        cVar5 = '0';
      }
      *(byte *)(lVar3 + 1 + lVar4 * 2) = cVar5 + bVar6;
      lVar4 = lVar4 + 1;
    } while ((int)lVar2 != lVar4);
  }
  return;
}



// FUNCTION 14682b480 FUN_14682b480 body=671 status=ok
// SIG undefined FUN_14682b480(void)

ulonglong FUN_14682b480(undefined8 *param_1,undefined8 *param_2,int param_3,undefined4 *param_4)

{
  ushort uVar1;
  int iVar2;
  undefined2 *puVar3;
  uint uVar4;
  ushort **ppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  ushort **ppuVar10;
  ushort *puVar11;
  ushort *puVar12;
  longlong lVar13;
  undefined1 auStack_d8 [40];
  undefined4 *local_b0;
  ushort *local_a8;
  longlong local_a0;
  ushort *local_98;
  int local_90;
  undefined4 local_8c;
  ushort **local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar4 = *(uint *)(param_2 + 1);
  uVar7 = 0xffffffff;
  if ((longlong)(int)uVar4 != 0) {
    puVar3 = (undefined2 *)*param_2;
    puVar12 = (ushort *)*param_1;
    iVar2 = *(int *)(param_1 + 1);
    if (uVar4 == 1) {
      local_8c = *(undefined4 *)((longlong)param_1 + 0xc);
      local_98 = puVar12;
      local_90 = iVar2;
      uVar4 = FUN_144a98c79(&local_98,*puVar3);
      uVar7 = (ulonglong)uVar4;
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
    }
    else if (iVar2 != 0) {
      if (param_3 == 0) {
        puVar11 = puVar12 + (longlong)iVar2 + -1;
        if (puVar12 <= puVar11) {
          do {
            puVar8 = (undefined2 *)0x0;
            lVar9 = 0;
            do {
              if (puVar3[lVar9] == *puVar11) {
                if (puVar3 != puVar8) {
                  if (param_4 != (undefined4 *)0x0) {
                    *param_4 = (int)lVar9;
                  }
                  uVar7 = (ulonglong)((longlong)puVar11 - (longlong)puVar12) >> 1 & 0xffffffff;
                  goto LAB_14682b4f1;
                }
                break;
              }
              lVar9 = lVar9 + 1;
              puVar8 = puVar8 + -1;
            } while ((longlong)(int)uVar4 * -2 - (longlong)puVar8 != 0);
            puVar11 = puVar11 + -1;
          } while (puVar12 <= puVar11);
        }
      }
      else {
        local_58 = (ushort **)0x0;
        local_50 = 0x2000000000;
        if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4((ulonglong)uVar4);
        }
        local_b0 = param_4;
        local_a8 = puVar12;
        if (0x20 < uVar4) {
          FUN_14682d868(&local_98);
        }
        lVar9 = (ulonglong)uVar4 * 2;
        lVar6 = 0;
        local_a0 = lVar9;
        do {
          uVar7 = local_50;
          uVar1 = *(ushort *)((longlong)puVar3 + lVar6);
          lVar13 = (longlong)(int)local_50;
          uVar4 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar4);
          if (local_50._4_4_ < uVar4) {
            FUN_14682d932(&local_98,uVar7 & 0xffffffff);
            lVar9 = local_a0;
          }
          ppuVar5 = local_58;
          if (local_58 == (ushort **)0x0) {
            ppuVar5 = &local_98;
          }
          *(ushort *)((longlong)ppuVar5 + lVar13 * 2) =
               (ushort)(0x19 < uVar1 - 0x61) * 0x20 + uVar1 + -0x20;
          lVar6 = lVar6 + 2;
        } while (lVar9 != lVar6);
        puVar12 = puVar12 + (longlong)iVar2 + -1;
        uVar7 = 0xffffffff;
        if (local_a8 <= puVar12) {
          ppuVar5 = &local_98;
          if (local_58 != (ushort **)0x0) {
            ppuVar5 = local_58;
          }
          do {
            if ((int)local_50 != 0) {
              ppuVar10 = (ushort **)0x0;
              lVar9 = 0;
              do {
                if (*(short *)((longlong)ppuVar5 + lVar9 * 2) ==
                    (ushort)((ushort)(0x19 < *puVar12 - 0x61) * 0x20 + *puVar12 + -0x20)) {
                  if (ppuVar5 != ppuVar10) {
                    if (local_b0 != (undefined4 *)0x0) {
                      *local_b0 = (int)lVar9;
                    }
                    uVar7 = (ulonglong)((longlong)puVar12 - (longlong)local_a8) >> 1 & 0xffffffff;
                    goto LAB_14682b60a;
                  }
                  break;
                }
                lVar9 = lVar9 + 1;
                ppuVar10 = (ushort **)((longlong)ppuVar10 + -2);
              } while (-(longlong)ppuVar10 != (longlong)(int)local_50 * 2);
            }
            puVar12 = puVar12 + -1;
          } while (local_a8 <= puVar12);
        }
LAB_14682b60a:
        if (local_58 != (ushort **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_14682b4f1:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14682b721 FUN_14682b721 body=265 status=ok
// SIG undefined FUN_14682b721(void)

int FUN_14682b721(undefined8 *param_1,byte *param_2)

{
  short *psVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  short *psVar5;
  char cVar6;
  byte bVar7;
  
  iVar4 = (int)param_2;
  psVar5 = (short *)*param_1;
  psVar1 = psVar5 + (int)*(uint *)(param_1 + 1);
  if ((*(uint *)(param_1 + 1) & 0x80000001) == 1) {
    sVar2 = *psVar5;
    cVar6 = (char)sVar2;
    if ((ushort)(sVar2 - 0x30U) < 10) {
      bVar7 = cVar6 - 0x30;
    }
    else if ((ushort)(sVar2 - 0x41U) < 6) {
      bVar7 = cVar6 - 0x37;
    }
    else if ((ushort)(sVar2 - 0x61U) < 6) {
      bVar7 = cVar6 + 0xa9;
    }
    else {
      bVar7 = 0;
    }
    psVar5 = psVar5 + 1;
    *param_2 = bVar7;
    param_2 = param_2 + 1;
  }
  for (; psVar5 != psVar1; psVar5 = psVar5 + 2) {
    sVar2 = *psVar5;
    cVar6 = (char)sVar2;
    if ((ushort)(sVar2 - 0x30U) < 10) {
      cVar6 = cVar6 + -0x30;
    }
    else if ((ushort)(sVar2 - 0x41U) < 6) {
      cVar6 = cVar6 + -0x37;
    }
    else if ((ushort)(sVar2 - 0x61U) < 6) {
      cVar6 = cVar6 + -0x57;
    }
    else {
      cVar6 = '\0';
    }
    sVar2 = psVar5[1];
    cVar3 = (char)sVar2;
    if ((ushort)(sVar2 - 0x30U) < 10) {
      bVar7 = cVar3 - 0x30;
    }
    else if ((ushort)(sVar2 - 0x41U) < 6) {
      bVar7 = cVar3 - 0x37;
    }
    else if ((ushort)(sVar2 - 0x61U) < 6) {
      bVar7 = cVar3 + 0xa9;
    }
    else {
      bVar7 = 0;
    }
    *param_2 = cVar6 << 4 | bVar7;
    param_2 = param_2 + 1;
  }
  return (int)param_2 - iVar4;
}



// FUNCTION 14682b82a FUN_14682b82a body=155 status=ok
// SIG undefined FUN_14682b82a(void)

void FUN_14682b82a(int *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  ulonglong *local_a8;
  char local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = local_98;
  local_a0 = '\0';
  local_a8 = &local_18;
  local_b0 = local_b8;
  puVar2 = (undefined8 *)FUN_1449668a2(&local_b8,*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined2 *)puVar2[1] = 0;
  iVar1 = _wtoi((wchar_t *)*puVar2);
  *param_1 = iVar1;
  if (local_a0 == '\x01') {
    FUN_1400020a8(local_b8);
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682b8c6 FUN_14682b8c6 body=155 status=ok
// SIG undefined FUN_14682b8c6(void)

void FUN_14682b8c6(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  ulonglong *local_a8;
  char local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b8 = local_98;
  local_a0 = '\0';
  local_a8 = &local_18;
  local_b0 = local_b8;
  puVar1 = (undefined8 *)FUN_1449668a2(&local_b8,*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined2 *)puVar1[1] = 0;
  lVar2 = _wtoi64((wchar_t *)*puVar1);
  *param_1 = (int)lVar2;
  if (local_a0 == '\x01') {
    FUN_1400020a8(local_b8);
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682b962 FUN_14682b962 body=188 status=ok
// SIG undefined FUN_14682b962(void)

bool FUN_14682b962(longlong *param_1,undefined4 *param_2,longlong *param_3,longlong *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  uint local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  lVar2 = *param_1;
  uVar1 = *(uint *)(param_1 + 1);
  local_3c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_48 = lVar2;
  local_40 = uVar1;
  uVar3 = FUN_14682b480(&local_48,&local_38,param_5,param_6);
  if (uVar3 != 0xffffffff) {
    uVar4 = uVar1;
    if ((int)uVar3 < (int)uVar1) {
      uVar4 = uVar3;
    }
    if ((int)uVar4 < 1) {
      uVar4 = 0;
    }
    *param_3 = lVar2;
    *(uint *)(param_3 + 1) = uVar4;
    uVar4 = ~uVar3 + uVar1;
    if ((int)uVar1 <= (int)(~uVar3 + uVar1)) {
      uVar4 = uVar1;
    }
    if ((int)uVar4 < 1) {
      uVar4 = 0;
    }
    *param_4 = (lVar2 + (longlong)(int)uVar1 * 2) - (ulonglong)(uVar4 * 2);
    *(uint *)(param_4 + 1) = uVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3 != 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682ba20 thunk_FUN_14682ba26 body=5 status=ok
// SIG undefined thunk_FUN_14682ba26(void)

void thunk_FUN_14682ba26(void)

{
  FUN_14682ba26();
  return;
}



// FUNCTION 14682ba26 FUN_14682ba26 body=175 status=ok
// SIG undefined FUN_14682ba26(void)

undefined8 FUN_14682ba26(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xcb0);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x114) == '\0') {
      __dyn_tls_on_demand_init();
      iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xcb0);
    }
    uVar2 = CONCAT71((int7)(int3)((uint)(iVar1 + -1) >> 8),
                     *(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xca8)
                      + (longlong)(iVar1 + -1) * 8) == param_1);
  }
  return uVar2;
}



// FUNCTION 14682bad5 FUN_14682bad5 body=30 status=ok
// SIG undefined FUN_14682bad5(void)

undefined8 FUN_14682bad5(void)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(int *)(lVar1 + 0xcb8) != 0);
}



// FUNCTION 14682baf3 FUN_14682baf3 body=434 status=ok
// SIG undefined FUN_14682baf3(void)

undefined8 FUN_14682baf3(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined7 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ushort uVar5;
  ushort uVar6;
  ulonglong uVar7;
  
  lVar3 = 0;
  while( true ) {
    uVar5 = *(ushort *)(param_1 + lVar3);
    uVar4 = (ulonglong)uVar5;
    uVar6 = *(ushort *)((longlong)&DAT_149e3caec + lVar3);
    if (uVar5 != uVar6) break;
    if (uVar5 == 0) goto LAB_14682bc8d;
LAB_14682bb1e:
    lVar3 = lVar3 + 2;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_14682bb1e;
  }
  if (uVar5 != uVar6) {
    lVar3 = 0;
    goto LAB_14682bb57;
  }
LAB_14682bc8d:
  uVar1 = 0;
  uVar2 = 0;
  goto LAB_14682bc8f;
LAB_14682bb57:
  uVar5 = *(ushort *)(param_1 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"Normal" + lVar3);
  if (uVar5 == uVar6) {
    if (uVar5 == 0) goto LAB_14682bc95;
LAB_14682bb70:
    lVar3 = lVar3 + 2;
    goto LAB_14682bb57;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_14682bb70;
  }
  if (uVar5 != uVar6) {
    lVar3 = 0;
    goto LAB_14682bba9;
  }
LAB_14682bc95:
  uVar1 = 1;
  uVar2 = 0x149e05d;
  goto LAB_14682bc8f;
LAB_14682bba9:
  uVar5 = *(ushort *)(param_1 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"BackgroundHigh" + lVar3);
  if (uVar5 == uVar6) {
    if (uVar5 == 0) goto LAB_14682bc99;
LAB_14682bbc2:
    lVar3 = lVar3 + 2;
    goto LAB_14682bba9;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_14682bbc2;
  }
  if (uVar5 != uVar6) {
    lVar3 = 0;
    goto LAB_14682bbfb;
  }
LAB_14682bc99:
  uVar1 = 2;
  uVar2 = 0x149e05d;
  goto LAB_14682bc8f;
LAB_14682bbfb:
  uVar5 = *(ushort *)(param_1 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"BackgroundNormal" + lVar3);
  if (uVar5 == uVar6) {
    if (uVar5 == 0) goto LAB_14682bc9d;
LAB_14682bc14:
    lVar3 = lVar3 + 2;
    goto LAB_14682bbfb;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_14682bc14;
  }
  if (uVar5 != uVar6) {
    lVar3 = 0;
    goto LAB_14682bc49;
  }
LAB_14682bc9d:
  uVar1 = 3;
  uVar2 = 0x149e05d;
  goto LAB_14682bc8f;
LAB_14682bc49:
  uVar5 = *(ushort *)(param_1 + lVar3);
  uVar4 = (ulonglong)uVar5;
  uVar6 = *(ushort *)((longlong)L"BackgroundLow" + lVar3);
  if (uVar5 == uVar6) {
    if (uVar5 == 0) goto LAB_14682bca1;
LAB_14682bc5e:
    lVar3 = lVar3 + 2;
    goto LAB_14682bc49;
  }
  if ((uVar6 | uVar5) < 0x80) {
    uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
    uVar7 = (ulonglong)uVar6;
    uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
    if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar7]) goto LAB_14682bc5e;
  }
  if (uVar5 != uVar6) {
    return 0;
  }
LAB_14682bca1:
  uVar1 = 4;
  uVar2 = 0x149e05d;
LAB_14682bc8f:
  *param_2 = uVar1;
  return CONCAT71(uVar2,1);
}



// FUNCTION 14682bca6 FUN_14682bca6 body=13 status=ok
// SIG undefined FUN_14682bca6(void)

undefined4 * FUN_14682bca6(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14682bcb3 FUN_14682bcb3 body=171 status=ok
// SIG undefined FUN_14682bcb3(void)

void FUN_14682bcb3(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_44 = 0x7fffffff;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar3 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar4) != 0) {
        puVar3 = *(undefined2 **)(lVar1 + lVar4);
      }
      FUN_141369f9a(puVar3,L"num=",&local_44);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar4);
  }
  FUN_142792554(local_44,param_3);
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14682bd5f FUN_14682bd5f body=485 status=ok
// SIG undefined FUN_14682bd5f(void)

void FUN_14682bd5f(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  undefined **local_98;
  undefined2 local_90;
  undefined8 *local_88;
  longlong local_80 [2];
  undefined1 local_70 [8];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_44 = 0x7fffffff;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar7 = 0;
    do {
      puVar6 = &DAT_149dfb77a;
      if (*(int *)(lVar1 + 8 + lVar7) != 0) {
        puVar6 = *(undefined2 **)(lVar1 + lVar7);
      }
      FUN_141369f9a(puVar6,L"num=",&local_44);
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar7);
  }
  FUN_1402160b8(local_70);
  FUN_14047ad2e(local_70,&local_68,L"%Y%m%d_%H%M%S");
  puVar6 = local_68;
  if (local_60 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_98,L"FNames_(%s).txt",puVar6);
  uVar3 = FUN_14047ac8c();
  FUN_1449b8608(local_80,uVar3,L"Profiling/");
  FUN_1401c7f3e(&local_58,local_80,&local_98);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_14054d1d4();
  puVar6 = local_58;
  if (local_50 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x20))(plVar4,puVar6,0);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_146816218(param_3,2,L"Failed to open outfile file to dump FNames.");
  }
  else {
    local_98 = &PTR_FUN_149e3c730;
    local_90 = 0x101;
    local_88 = puVar5;
    FUN_142792554(local_44);
    puVar6 = local_58;
    if (local_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_140047918(param_3,L"Wrote FNames to %s",puVar6);
    (**(code **)*puVar5)(puVar5,1);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14682bf45 FUN_14682bf45 body=27 status=ok
// SIG undefined FUN_14682bf45(void)

void FUN_14682bf45(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_146816218(param_3,2,
                L"Cannot list numbered FNames as UE_FNAME_OUTLINE_NUMBER is not set so numbers are stored in FName instances rather than the name table."
               );
  return;
}



// FUNCTION 14682bf60 FUN_14682bf60 body=27 status=ok
// SIG undefined FUN_14682bf60(void)

void FUN_14682bf60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_146816218(param_3,2,
                L"Cannot dump numbered FNames as UE_FNAME_OUTLINE_NUMBER is not set so numbers are stored in FName instances rather than the name table."
               );
  return;
}



// FUNCTION 14682bf7b FUN_14682bf7b body=2129 status=ok
// SIG undefined FUN_14682bf7b(void)

wchar_t * FUN_14682bf7b(int param_1)

{
  if (param_1 == 0xef) {
    return L"Untitled";
  }
  if (param_1 < 700) {
    if (param_1 < 0x259) {
      switch(param_1) {
      case 0:
        return L"None";
      case 1:
        return L"ByteProperty";
      case 2:
        return L"IntProperty";
      case 3:
        return L"BoolProperty";
      case 4:
        return L"FloatProperty";
      case 5:
        return L"ObjectProperty";
      case 6:
        return L"NameProperty";
      case 7:
        return L"DelegateProperty";
      case 8:
        return L"DoubleProperty";
      case 9:
        return L"ArrayProperty";
      case 10:
        return L"StructProperty";
      case 0xb:
        return L"VectorProperty";
      case 0xc:
        return L"RotatorProperty";
      case 0xd:
        return L"StrProperty";
      case 0xe:
        return L"TextProperty";
      case 0xf:
        return L"InterfaceProperty";
      case 0x10:
        return L"MulticastDelegateProperty";
      case 0x11:
      case 0x1b:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 99:
      case 0x6d:
      case 0x6e:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x72:
      case 0x73:
      case 0x74:
      case 0x75:
      case 0x76:
      case 0x77:
      case 0x78:
      case 0x79:
      case 0x7a:
      case 0x7b:
      case 0x7c:
      case 0x7d:
      case 0x7e:
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
      case 0x83:
      case 0x84:
      case 0x85:
      case 0x86:
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8a:
      case 0x8b:
      case 0x8c:
      case 0x8d:
      case 0x8e:
      case 0x8f:
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
      case 0x94:
      case 0x95:
      case 0xae:
      case 0xaf:
      case 0xb0:
      case 0xb1:
      case 0xb2:
      case 0xb3:
      case 0xb4:
      case 0xb5:
      case 0xb6:
      case 0xb7:
      case 0xb8:
      case 0xb9:
      case 0xba:
      case 0xbb:
      case 0xbc:
      case 0xbd:
      case 0xbe:
      case 0xbf:
      case 0xc0:
      case 0xc1:
      case 0xc2:
      case 0xc3:
      case 0xc4:
      case 0xc5:
      case 0xc6:
      case 199:
      case 0xe4:
      case 0xe5:
      case 0xef:
      case 0x107:
      case 0x108:
      case 0x109:
      case 0x10a:
      case 0x10b:
      case 0x10c:
      case 0x10d:
      case 0x10e:
      case 0x10f:
      case 0x110:
      case 0x111:
      case 0x112:
      case 0x113:
      case 0x114:
      case 0x115:
      case 0x116:
      case 0x117:
      case 0x128:
      case 0x129:
      case 0x12a:
      case 299:
      case 0x130:
      case 0x131:
      case 0x132:
      case 0x133:
      case 0x134:
      case 0x135:
      case 0x136:
      case 0x139:
      case 0x13a:
      case 0x13b:
      case 0x13c:
      case 0x13d:
      case 0x13e:
      case 0x13f:
      case 0x141:
      case 0x143:
      case 0x144:
      case 0x146:
      case 0x147:
      case 0x148:
      case 0x149:
      case 0x14a:
      case 0x14b:
      case 0x14c:
      case 0x14d:
      case 0x14e:
      case 0x14f:
      case 0x150:
      case 0x151:
      case 0x152:
      case 0x153:
      case 0x154:
      case 0x155:
      case 0x156:
      case 0x157:
      case 0x158:
      case 0x159:
      case 0x15a:
      case 0x15b:
      case 0x15c:
      case 0x15d:
      case 0x165:
      case 0x166:
      case 0x167:
      case 0x168:
      case 0x169:
      case 0x16a:
      case 0x16b:
      case 0x16c:
      case 0x16d:
      case 0x16e:
      case 0x16f:
      case 0x170:
      case 0x171:
      case 0x172:
      case 0x173:
      case 0x174:
      case 0x175:
      case 0x176:
      case 0x177:
      case 0x178:
      case 0x179:
      case 0x17a:
      case 0x17b:
      case 0x17c:
      case 0x17d:
      case 0x17e:
      case 0x17f:
      case 0x180:
      case 0x181:
      case 0x182:
      case 0x183:
      case 0x184:
      case 0x185:
      case 0x186:
      case 0x187:
      case 0x188:
      case 0x189:
      case 0x18a:
      case 0x18b:
      case 0x18c:
      case 0x18d:
      case 0x18e:
      case 399:
      case 0x19c:
      case 0x19d:
      case 0x19e:
      case 0x19f:
      case 0x1a0:
      case 0x1a1:
      case 0x1a2:
      case 0x1a3:
      case 0x1a4:
      case 0x1a5:
      case 0x1a6:
      case 0x1a7:
      case 0x1a8:
      case 0x1a9:
      case 0x1aa:
      case 0x1ab:
      case 0x1ac:
      case 0x1ad:
      case 0x1ae:
      case 0x1af:
      case 0x1b0:
      case 0x1b1:
      case 0x1b2:
      case 0x1b3:
      case 0x1b4:
      case 0x1b5:
      case 0x1b6:
      case 0x1b7:
      case 0x1b8:
      case 0x1b9:
      case 0x1ba:
      case 0x1bb:
      case 0x1bc:
      case 0x1bd:
      case 0x1be:
      case 0x1bf:
      case 0x1c0:
      case 0x1c1:
      case 0x1c4:
      case 0x1c5:
      case 0x1c6:
      case 0x1c7:
      case 0x1c8:
      case 0x1c9:
      case 0x1ca:
      case 0x1cb:
      case 0x1cc:
      case 0x1cd:
      case 0x1ce:
      case 0x1cf:
      case 0x1d0:
      case 0x1d1:
      case 0x1d2:
      case 0x1d3:
      case 0x1d4:
      case 0x1d5:
      case 0x1d6:
      case 0x1d7:
      case 0x1d8:
      case 0x1d9:
      case 0x1da:
      case 0x1db:
      case 0x1dc:
      case 0x1dd:
      case 0x1de:
      case 0x1df:
      case 0x1e0:
      case 0x1e1:
      case 0x1e2:
      case 0x1e3:
      case 0x1e4:
      case 0x1e5:
      case 0x1e6:
      case 0x1e7:
      case 0x1e8:
      case 0x1e9:
      case 0x1ea:
      case 0x1eb:
      case 0x1ec:
      case 0x1ed:
      case 0x1ee:
      case 0x1ef:
      case 0x1f0:
      case 0x1f1:
      case 0x1f2:
      case 499:
        break;
      case 0x12:
        return L"LazyObjectProperty";
      case 0x13:
        return L"SoftObjectProperty";
      case 0x14:
        return L"Int64Property";
      case 0x15:
        return L"Int32Property";
      case 0x16:
        return L"Int16Property";
      case 0x17:
        return L"Int8Property";
      case 0x18:
        return L"UInt64Property";
      case 0x19:
        return L"UInt32Property";
      case 0x1a:
        return L"UInt16Property";
      case 0x1c:
        return L"MapProperty";
      case 0x1d:
        return L"SetProperty";
      case 0x1e:
        return L"Core";
      case 0x1f:
        return L"Engine";
      case 0x20:
        return L"Editor";
      case 0x21:
        return L"CoreUObject";
      case 0x22:
        return L"EnumProperty";
      case 0x23:
        return L"OptionalProperty";
      case 0x24:
        return L"Utf8StrProperty";
      case 0x25:
        return L"AnsiStrProperty";
      case 0x2f:
        return L"GbxDefPtrProperty";
      case 0x30:
        return L"GbxInlineStructProperty";
      case 0x31:
        return L"GameDataHandleProperty";
      case 0x32:
        return L"Cylinder";
      case 0x33:
        return L"BoxSphereBounds";
      case 0x34:
        return L"Sphere";
      case 0x35:
        return L"Box";
      case 0x36:
        return L"Vector2D";
      case 0x37:
        return L"IntRect";
      case 0x38:
        return L"IntPoint";
      case 0x39:
        return L"Vector4";
      case 0x3a:
        return L"Name";
      case 0x3b:
        return L"Vector";
      case 0x3c:
        return L"Rotator";
      case 0x3d:
        return L"SHVector";
      case 0x3e:
        return L"Color";
      case 0x3f:
        return L"Plane";
      case 0x40:
        return L"Matrix";
      case 0x41:
        return L"LinearColor";
      case 0x42:
        return L"AdvanceFrame";
      case 0x43:
        return L"Pointer";
      case 0x44:
        return L"Double";
      case 0x45:
        return L"Quat";
      case 0x46:
        return L"Self";
      case 0x47:
        return L"Transform";
      case 0x48:
        return L"Vector3f";
      case 0x49:
        return L"Vector3d";
      case 0x4a:
        return L"Plane4f";
      case 0x4b:
        return L"Plane4d";
      case 0x4c:
        return L"Matrix44f";
      case 0x4d:
        return L"Matrix44d";
      case 0x4e:
        return L"Quat4f";
      case 0x4f:
        return L"Quat4d";
      case 0x50:
        return L"Transform3f";
      case 0x51:
        return L"Transform3d";
      case 0x52:
        return L"Box3f";
      case 0x53:
        return L"Box3d";
      case 0x54:
        return L"BoxSphereBounds3f";
      case 0x55:
        return L"BoxSphereBounds3d";
      case 0x56:
        return L"Vector4f";
      case 0x57:
        return L"Vector4d";
      case 0x58:
        return L"Rotator3f";
      case 0x59:
        return L"Rotator3d";
      case 0x5a:
        return L"Vector2f";
      case 0x5b:
        return L"Vector2d";
      case 0x5c:
        return L"Box2D";
      case 0x5d:
        return L"Box2f";
      case 0x5e:
        return L"Box2d";
      case 0x5f:
        return L"IntVector";
      case 0x60:
        return L"IntVector4";
      case 0x61:
        return L"UintVector";
      case 0x62:
        return L"UintVector4";
      case 100:
        return L"Object";
      case 0x65:
        return L"Camera";
      case 0x66:
        return L"Actor";
      case 0x67:
        return L"ObjectRedirector";
      case 0x68:
        return L"ObjectArchetype";
      case 0x69:
        return L"Class";
      case 0x6a:
        return L"ScriptStruct";
      case 0x6b:
        return L"Function";
      case 0x6c:
        return L"Pawn";
      case 0x96:
        return L"Int32Vector";
      case 0x97:
        return L"Int64Vector";
      case 0x98:
        return L"Uint32Vector";
      case 0x99:
        return L"Uint64Vector";
      case 0x9a:
        return L"Int32Vector4";
      case 0x9b:
        return L"Int64Vector4";
      case 0x9c:
        return L"Uint32Vector4";
      case 0x9d:
        return L"Uint64Vector4";
      case 0x9e:
        return L"IntVector2";
      case 0x9f:
        return L"Int32Vector2";
      case 0xa0:
        return L"Int64Vector2";
      case 0xa1:
        return L"UintVector2";
      case 0xa2:
        return L"Uint32Vector2";
      case 0xa3:
        return L"Uint64Vector2";
      case 0xa4:
        return L"UintPoint";
      case 0xa5:
        return L"Int32Point";
      case 0xa6:
        return L"Int64Point";
      case 0xa7:
        return L"Uint32Point";
      case 0xa8:
        return L"Uint64Point";
      case 0xa9:
        return L"Ray";
      case 0xaa:
        return L"Ray3f";
      case 0xab:
        return L"Ray3d";
      case 0xac:
        return L"Sphere3f";
      case 0xad:
        return L"Sphere3d";
      case 200:
        return L"State";
      case 0xc9:
        return L"TRUE";
      case 0xca:
        return L"FALSE";
      case 0xcb:
        return L"Enum";
      case 0xcc:
        return L"Default";
      case 0xcd:
        return L"Skip";
      case 0xce:
        return L"Input";
      case 0xcf:
        return L"Package";
      case 0xd0:
        return L"Groups";
      case 0xd1:
        return L"Interface";
      case 0xd2:
        return L"Components";
      case 0xd3:
        return L"Global";
      case 0xd4:
        return L"Super";
      case 0xd5:
        return L"Outer";
      case 0xd6:
        return L"Map";
      case 0xd7:
        return L"Role";
      case 0xd8:
        return L"RemoteRole";
      case 0xd9:
        return L"PersistentLevel";
      case 0xda:
        return L"TheWorld";
      case 0xdb:
        return L"PackageMetaData";
      case 0xdc:
        return L"InitialState";
      case 0xdd:
        return L"Game";
      case 0xde:
        return L"SelectionColor";
      case 0xdf:
        return L"UI";
      case 0xe0:
        return L"ExecuteUbergraph";
      case 0xe1:
        return L"DeviceID";
      case 0xe2:
        return L"RootStat";
      case 0xe3:
        return L"MoveActor";
      case 0xe6:
        return L"All";
      case 0xe7:
        return L"MeshEmitterVertexColor";
      case 0xe8:
        return L"TextureOffsetParameter";
      case 0xe9:
        return L"TextureScaleParameter";
      case 0xea:
        return L"ImpactVel";
      case 0xeb:
        return L"SlideVel";
      case 0xec:
        return L"TextureOffset1Parameter";
      case 0xed:
        return L"MeshEmitterDynamicParameter";
      case 0xee:
        return L"ExpressionInput";
      case 0xf0:
        return L"Timer";
      case 0xf1:
        return L"Team";
      case 0xf2:
        return L"Low";
      case 0xf3:
        return L"High";
      case 0xf4:
        return L"NetworkGUID";
      case 0xf5:
        return L"GameThread";
      case 0xf6:
        return L"RenderThread";
      case 0xf7:
        return L"OtherChildren";
      case 0xf8:
        return L"Location";
      case 0xf9:
        return L"Rotation";
      case 0xfa:
        return L"BSP";
      case 0xfb:
        return L"EditorSettings";
      case 0xfc:
        return L"AudioThread";
      case 0xfd:
        return L"ID";
      case 0xfe:
        return L"UserDefinedEnum";
      case 0xff:
        return L"Control";
      case 0x100:
        return L"Voice";
      case 0x101:
        return L"Zlib";
      case 0x102:
        return L"Gzip";
      case 0x103:
        return L"LZ4";
      case 0x104:
        return L"Mobile";
      case 0x105:
        return L"Oodle";
      case 0x106:
        return L"TrashedPackage";
      case 0x118:
        return L"DGram";
      case 0x119:
        return L"Stream";
      case 0x11a:
        return L"GameNetDriver";
      case 0x11b:
        return L"PendingNetDriver";
      case 0x11c:
        return L"BeaconNetDriver";
      case 0x11d:
        return L"FlushNetDormancy";
      case 0x11e:
        return L"DemoNetDriver";
      case 0x11f:
        return L"GameSession";
      case 0x120:
        return L"PartySession";
      case 0x121:
        return L"GamePort";
      case 0x122:
        return L"BeaconPort";
      case 0x123:
        return L"MeshPort";
      case 0x124:
        return L"MeshNetDriver";
      case 0x125:
        return L"LiveStreamVoice";
      case 0x126:
        return L"LiveStreamAnimation";
      case 0x127:
        return L"DataStream";
      case 300:
        return L"Linear";
      case 0x12d:
        return L"Point";
      case 0x12e:
        return L"Aniso";
      case 0x12f:
        return L"LightMapResolution";
      case 0x137:
        return L"UnGrouped";
      case 0x138:
        return L"VoiceChat";
      case 0x140:
        return L"Playing";
      case 0x142:
        return L"Spectating";
      case 0x145:
        return L"Inactive";
      case 0x15e:
        return L"PerfWarning";
      case 0x15f:
        return L"Info";
      case 0x160:
        return L"Init";
      case 0x161:
        return L"Exit";
      case 0x162:
        return L"Cmd";
      case 0x163:
        return L"Warning";
      case 0x164:
        return L"Error";
      case 400:
        return L"FontCharacter";
      case 0x191:
        return L"InitChild2StartBone";
      case 0x192:
        return L"SoundCueLocalized";
      case 0x193:
        return L"SoundCue";
      case 0x194:
        return L"RawDistributionFloat";
      case 0x195:
        return L"RawDistributionVector";
      case 0x196:
        return L"InterpCurveFloat";
      case 0x197:
        return L"InterpCurveVector2D";
      case 0x198:
        return L"InterpCurveVector";
      case 0x199:
        return L"InterpCurveTwoVectors";
      case 0x19a:
        return L"InterpCurveQuat";
      case 0x19b:
        return L"FrameRate";
      case 0x1c2:
        return L"AI";
      case 0x1c3:
        return L"NavMesh";
      case 500:
        return L"PerformanceCapture";
      default:
        if (param_1 == 600) {
          return L"EditorLayout";
        }
      }
    }
    else {
      if (param_1 == 0x259) {
        return L"EditorKeyBindings";
      }
      if (param_1 == 0x25a) {
        return L"GameUserSettings";
      }
    }
  }
  else if (param_1 < 0x2be) {
    if (param_1 == 700) {
      return L"Filename";
    }
    if (param_1 == 0x2bd) {
      return L"Lerp";
    }
  }
  else {
    if (param_1 == 0x2be) {
      return L"Root";
    }
    switch(param_1) {
    case 1000:
      return L"TricksChannel";
    case 0x3e9:
      return L"FactsChannel";
    case 0x3ea:
      return L"JunkChannel";
    case 0x3eb:
      return L"NavChannel";
    case 0x3ec:
      return L"MissionsChannel";
    case 0x3ed:
      return L"WaypointsChannel";
    case 0x3ee:
      return L"PlayerProfileChannel";
    case 0x3ef:
      return L"InventoryChannel";
    case 0x3f0:
      return L"CosmeticChannel";
    case 0x3f1:
      return L"SkillsChannel";
    case 0x3f2:
      return L"SkillsGlobalChannel";
    case 0x3f3:
      return L"GbxInventoryChannel";
    case 0x3f4:
      return L"MissionTaskChannel";
    }
  }
  return L"*INVALID*";
}



// FUNCTION 14682c7cc FUN_14682c7cc body=214 status=ok
// SIG undefined FUN_14682c7cc(void)

void FUN_14682c7cc(undefined8 param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + *(int *)((longlong)&DAT_14c88eb60 + lVar2) +
            *(int *)((longlong)&DAT_14c88eb68 + lVar2);
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x4000);
  FUN_140047918(param_1,L"%i FNames using in %ikB + %ikB",iVar3,0x5d,
                DAT_14c87eb08 * 0x80 + 0x80U & 0x3fff80);
  lVar2 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + *(int *)((longlong)&DAT_14c88eb60 + lVar2) +
            *(int *)((longlong)&DAT_14c88eb68 + lVar2);
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x4000);
  lVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)((longlong)&DAT_14c88eb64 + lVar2);
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x4000);
  FUN_140047918(param_1,L"%d ansi FNames",iVar3 - iVar1);
  lVar2 = 0;
  iVar3 = 0;
  do {
    iVar3 = iVar3 + *(int *)((longlong)&DAT_14c88eb64 + lVar2);
    lVar2 = lVar2 + 0x40;
  } while (lVar2 != 0x4000);
  FUN_140047918(param_1,L"%d wide FNames",iVar3);
  return;
}



// FUNCTION 14682c8a2 FUN_14682c8a2 body=89 status=ok
// SIG undefined FUN_14682c8a2(void)

undefined8 * FUN_14682c8a2(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = 0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + *(int *)((longlong)&DAT_14c88eb60 + lVar1) +
            *(int *)((longlong)&DAT_14c88eb68 + lVar1);
    lVar1 = lVar1 + 0x40;
  } while (lVar1 != 0x4000);
  if (-1 < iVar2) {
    if (iVar2 != 0) {
      FUN_14682de88(param_1);
    }
    FUN_14682c8fc(param_1);
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar2);
}



// FUNCTION 14682c8fc FUN_14682c8fc body=109 status=ok
// SIG undefined FUN_14682c8fc(void)

void FUN_14682c8fc(undefined8 param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c87eb00);
  if (DAT_14c87eb08 == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = 0;
    do {
      FUN_14682d1b2((&DAT_14c87eb10)[uVar2],0x20000,param_1);
      uVar2 = uVar2 + 1;
      uVar1 = (ulonglong)DAT_14c87eb08;
    } while (uVar2 < uVar1);
  }
  FUN_14682d1b2((&DAT_14c87eb10)[uVar1],DAT_14c87eb0c,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014682c962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c87eb00);
  return;
}



// FUNCTION 14682c96a FUN_14682c96a body=116 status=ok
// SIG undefined FUN_14682c96a(void)

undefined8 * FUN_14682c96a(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(param_2 + 1) == 0) {
    *param_1 = 0;
  }
  else {
    uVar1 = FUN_14682dede(*param_2,param_2 + 1);
    local_38 = *(undefined4 *)param_2;
    uStack_34 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_30 = *(undefined4 *)(param_2 + 1);
    uStack_2c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_14682ca60(param_1,&local_38,param_3,uVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682c9e0 FUN_14682c9e0 body=127 status=ok
// SIG undefined FUN_14682c9e0(void)

undefined8 * FUN_14682c9e0(undefined8 *param_1,uint param_2,longlong param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  uint local_28;
  undefined1 local_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = false;
  if (0 < (int)param_2) {
    uVar1 = 0;
    do {
      local_24 = local_24 | *(byte *)(param_3 + uVar1);
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
    local_24 = 0x7f < local_24;
  }
  local_30 = param_3;
  local_28 = param_2;
  FUN_14682c96a(&local_20,&local_30,param_4);
  *param_1 = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682ca60 FUN_14682ca60 body=296 status=ok
// SIG undefined FUN_14682ca60(void)

undefined8 *
FUN_14682ca60(undefined8 *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_878 [40];
  undefined8 local_850;
  undefined4 local_848;
  undefined1 local_844;
  longlong local_840;
  uint local_838;
  undefined1 local_834;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_878;
  uVar3 = *(uint *)(param_2 + 1);
  if (uVar3 == 0) {
    *param_1 = 0;
  }
  else if (*(char *)((longlong)param_2 + 0xc) == '\0') {
    local_840 = *param_2;
    local_834 = 0;
    local_838 = uVar3;
    uVar2 = FUN_14001a6c0(&local_840,param_3);
    *(undefined4 *)param_1 = uVar2;
    *(undefined4 *)((longlong)param_1 + 4) = param_4;
  }
  else {
    lVar1 = *param_2;
    local_40 = 0;
    if (lVar1 == 0) {
      local_38 = 0;
      local_30 = 0;
    }
    else {
      bVar4 = false;
      if (0 < (int)uVar3) {
        bVar4 = *(char *)(lVar1 + (ulonglong)(uVar3 - 1)) == '\0';
        if (bVar4) {
          uVar3 = uVar3 - 1;
        }
      }
      FUN_14682d2ae(&local_840,lVar1,uVar3,bVar4);
    }
    local_844 = 1;
    local_850 = local_38;
    local_848 = local_30;
    uVar2 = FUN_14001a6c0(&local_850,param_3);
    *(undefined4 *)param_1 = uVar2;
    *(undefined4 *)((longlong)param_1 + 4) = param_4;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_878) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682cb8a FUN_14682cb8a body=152 status=ok
// SIG undefined FUN_14682cb8a(void)

undefined8 * FUN_14682cb8a(undefined8 *param_1,int param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  undefined8 local_28;
  int local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_4 == 0) {
    local_40 = param_3;
    local_38 = param_2;
    FUN_14001c09c(&local_30,&local_40,1);
  }
  else if (param_2 == 0) {
    local_30 = 0;
  }
  else {
    local_1c = 0;
    local_28 = param_3;
    local_20 = param_2;
    uVar1 = FUN_14001a6c0(&local_28,1);
    local_30 = CONCAT44(param_4,uVar1);
  }
  *param_1 = local_30;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682cc24 FUN_14682cc24 body=81 status=ok
// SIG undefined FUN_14682cc24(void)

void FUN_14682cc24(undefined8 *param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  local_10 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_10 = 0;
  }
  FUN_144a2f95e(&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682cc76 FUN_14682cc76 body=912 status=ok
// SIG undefined FUN_14682cc76(void)

void FUN_14682cc76(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  ushort uVar5;
  ulonglong *puVar6;
  ushort uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ushort *_Src;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_4c = (int)param_1[1];
  puVar6 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar6 + 1;
  if ((int *)puVar6[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
    }
    else {
      FUN_14572512c(param_2,&local_4c);
    }
  }
  else {
    local_4c = *(int *)*puVar6;
    *puVar6 = (ulonglong)piVar1;
  }
  if (local_4c == 0) {
LAB_14682cf81:
    if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  iVar12 = local_4c;
  if (-1 < local_4c) {
    FUN_1448f21ac(&local_68);
    if (local_4c < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(local_4c);
    }
    if ((int)uStack_70._4_4_ < local_4c) {
      FUN_14682df76(&local_78);
    }
    iVar12 = local_4c * 0x28;
    if (-1 < iVar12) {
      if (uStack_80._4_4_ < iVar12) {
        FUN_144893a1c(&local_88);
      }
      lVar8 = param_1[1];
      if ((longlong)(int)lVar8 != 0) {
        local_a0 = *param_1;
        lVar14 = 0;
        do {
          puVar4 = (ushort *)
                   ((&DAT_14c87eb10)[*(uint *)(local_a0 + lVar14) >> 0x10] +
                   (ulonglong)(*(uint *)(local_a0 + lVar14) & 0xffff) * 2);
          _Src = puVar4 + 1;
          uVar5 = *puVar4;
          uVar7 = uVar5 >> 6;
          if ((uVar5 & 1) == 0) {
            uVar11 = FUN_14682d53a(_Src,(uint)uVar7);
          }
          else {
            uVar11 = FUN_14682d4c1();
          }
          uVar9 = uStack_60;
          lVar13 = (longlong)(int)uStack_60;
          uVar10 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar10);
          if (uStack_60._4_4_ < uVar10) {
            FUN_14479d316(&local_68,uVar9 & 0xffffffff);
          }
          uVar9 = uStack_70;
          *(undefined8 *)(local_68 + lVar13 * 8) = uVar11;
          lVar13 = (longlong)(int)uStack_70;
          uVar10 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
          if (uStack_70._4_4_ < uVar10) {
            FUN_14682dfd4(&local_78,uVar9 & 0xffffffff);
          }
          uVar9 = uStack_80;
          uVar10 = (uint)uVar7 << ((byte)uVar5 & 1);
          *(ushort *)(local_78 + lVar13 * 2) = uVar5 >> 0xe | (uVar5 & 1) << 7 | uVar7 << 8;
          iVar12 = (int)uStack_80;
          lVar13 = (longlong)(int)uStack_80;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar10 + (int)uStack_80);
          if ((uint)(uStack_80._4_4_ - iVar12) < uVar10) {
            FUN_1447403be(&local_88,uVar9 & 0xffffffff);
          }
          if (0x3f < uVar5) {
            memcpy((void *)(lVar13 + local_88),_Src,(ulonglong)uVar10);
          }
          lVar14 = lVar14 + 4;
        } while ((longlong)(int)lVar8 * 4 != lVar14);
      }
      local_8c = (int)uStack_80;
      puVar6 = (ulonglong *)param_2[1];
      puVar2 = (undefined4 *)*puVar6 + 1;
      if ((undefined4 *)puVar6[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_8c,4);
        }
        else {
          FUN_14572512c(param_2,&local_8c);
        }
      }
      else {
        local_8c = *(undefined4 *)*puVar6;
        *puVar6 = (ulonglong)puVar2;
      }
      local_98 = 0xc1640000;
      puVar6 = (ulonglong *)param_2[1];
      puVar3 = (undefined8 *)*puVar6 + 1;
      if ((undefined8 *)puVar6[1] < puVar3) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_98,8);
        }
        else {
          thunk_FUN_146821949(param_2,&local_98);
        }
      }
      else {
        local_98 = *(undefined8 *)*puVar6;
        *puVar6 = (ulonglong)puVar3;
      }
      (**(code **)(*param_2 + 0x170))(param_2,local_68,local_4c << 3);
      (**(code **)(*param_2 + 0x170))(param_2,local_78,local_4c * 2);
      (**(code **)(*param_2 + 0x170))(param_2,local_88,(longlong)(int)uStack_80);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      goto LAB_14682cf81;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar12);
}



// FUNCTION 14682d022 FUN_14682d022 body=129 status=ok
// SIG undefined FUN_14682d022(void)

void FUN_14682d022(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_146826a24();
  cVar1 = FUN_1468263e0(lVar2);
  if ((cVar1 == '\0') && ((*(byte *)(lVar2 + 4) & 8) != 0)) {
    local_28 = *param_2;
    uVar3 = 0xc;
  }
  else {
    local_28 = *param_2;
    uVar3 = 8;
  }
  FUN_146828156(param_1,uVar3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682d0a4 FUN_14682d0a4 body=78 status=ok
// SIG undefined FUN_14682d0a4(void)

uint FUN_14682d0a4(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_1468263e0(param_1 + 8);
  if (cVar1 == '\0') {
    uVar2 = *(uint *)(param_1 + 0xc);
    *param_3 = 0;
    *(undefined4 *)param_3 = *(undefined4 *)param_2;
    *(undefined4 *)((longlong)param_3 + 4) = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = (uVar2 & 8) >> 1 | 8;
  }
  else {
    *param_3 = *param_2;
    uVar2 = 8;
  }
  return uVar2;
}



// FUNCTION 14682d0f8 FUN_14682d0f8 body=102 status=ok
// SIG undefined FUN_14682d0f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14682d0f8(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c895fc0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c895fc0,4000);
  DAT_14c896008 = 0;
  DAT_14c896010 = 0;
  DAT_14c895fe8 = 0;
  _DAT_14c895ff0 = 0;
  _DAT_14c896014 = 0xffffffff00000080;
  DAT_14c89601c = 0;
  DAT_14c896028 = 0;
  DAT_14c896030 = 0;
  return;
}



// FUNCTION 14682d15e FUN_14682d15e body=83 status=ok
// SIG undefined FUN_14682d15e(void)

undefined8 * FUN_14682d15e(undefined8 *param_1,int param_2)

{
  *param_1 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,param_1[1],1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14682d1b2 FUN_14682d1b2 body=118 status=ok
// SIG undefined FUN_14682d1b2(void)

void FUN_14682d1b2(ushort *param_1,ulonglong param_2,longlong *param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)((longlong)param_1 + ((param_2 & 0xffffffff) - 2));
  for (; (param_1 < puVar3 && (uVar1 = *param_1, 0x3f < uVar1));
      param_1 = (ushort *)
                ((longlong)param_1 +
                (ulonglong)(((uint)(uVar1 >> 6) << ((byte)*param_1 & 1)) + 3 & 0xfffffffe))) {
    iVar2 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
      FUN_14682d228(param_3,iVar2);
    }
    *(ushort **)(*param_3 + (longlong)iVar2 * 8) = param_1;
  }
  return;
}



// FUNCTION 14682d228 FUN_14682d228 body=132 status=ok
// SIG undefined FUN_14682d228(void)

void FUN_14682d228(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14682d2ae FUN_14682d2ae body=158 status=ok
// SIG undefined FUN_14682d2ae(void)

void FUN_14682d2ae(ulonglong param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  iVar1 = FUN_144a9ffb2(0);
  *(int *)(param_1 + 0x810) = iVar1;
  uVar2 = iVar1 + (uint)(param_4 == 1);
  if ((0x400 < uVar2) || (*(longlong *)(param_1 + 0x800) != 0)) {
    if (0x400 < uVar2) {
      uVar3 = (ulonglong)uVar2;
    }
    FUN_1446efa72((ulonglong *)(param_1 + 0x800),0,uVar3,2);
    uVar3 = *(ulonglong *)(param_1 + 0x800);
  }
  if (uVar3 == 0) {
    uVar3 = param_1;
  }
  *(ulonglong *)(param_1 + 0x808) = uVar3;
  FUN_1446e71a3(uVar3,uVar2,param_2,(uint)(param_4 == 1) + param_3);
  return;
}



// FUNCTION 14682d34c FUN_14682d34c body=144 status=ok
// SIG undefined FUN_14682d34c(void)

void FUN_14682d34c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x2000);
  if ((uint)param_3 < 0x201) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x2000,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x2000),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x2000,param_2,param_3,0x10);
  return;
}



// FUNCTION 14682d3dc FUN_14682d3dc body=95 status=ok
// SIG undefined FUN_14682d3dc(void)

void FUN_14682d3dc(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  longlong lVar4;
  
  FUN_14682d43c(param_1,param_2 + 0x1fU >> 5,*(int *)(param_1 + 0x4c) + 0x1fU >> 5,4);
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = iVar1 + 0x1f;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  if (iVar1 % 0x20 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar4 = param_1;
    }
    bVar3 = -(char)(iVar1 % 0x20);
    *(uint *)(lVar4 + (longlong)(iVar2 >> 5) * 4) =
         (uint)(*(int *)(lVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar3 & 0x1f)) >> (bVar3 & 0x1f);
  }
  return;
}



// FUNCTION 14682d43c FUN_14682d43c body=133 status=ok
// SIG undefined FUN_14682d43c(void)

void FUN_14682d43c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 14682d4c1 FUN_14682d4c1 body=120 status=ok
// SIG undefined FUN_14682d4c1(void)

void FUN_14682d4c1(longlong param_1,uint param_2)

{
  ushort uVar1;
  ulonglong uVar2;
  undefined1 auStack_828 [32];
  short local_808 [1024];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_828;
  if (param_2 != 0) {
    uVar2 = 0;
    do {
      uVar1 = *(ushort *)(param_1 + uVar2 * 2);
      local_808[uVar2] = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
  }
  FUN_1447addd0(local_808,param_2 * 2);
  if ((local_8 ^ (ulonglong)auStack_828) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682d53a FUN_14682d53a body=117 status=ok
// SIG undefined FUN_14682d53a(void)

void FUN_14682d53a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  undefined1 auStack_428 [32];
  char local_408 [1024];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_428;
  if (param_2 != 0) {
    uVar1 = 0;
    do {
      local_408[uVar1] =
           ((int)*(char *)(param_1 + uVar1) - 0x41U < 0x1a) * ' ' + *(char *)(param_1 + uVar1);
      uVar1 = uVar1 + 1;
    } while (param_2 != uVar1);
  }
  FUN_1447addd0(local_408);
  if ((local_8 ^ (ulonglong)auStack_428) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682d5b0 FUN_14682d5b0 body=305 status=ok
// SIG undefined FUN_14682d5b0(void)

uint * FUN_14682d5b0(uint *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  PSRWLOCK SRWLock;
  ulonglong uVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  short local_54;
  undefined8 *local_50;
  PSRWLOCK local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = (uint)((ulonglong)param_4 >> 0x20);
  local_60 = uVar5 & 0xff;
  local_58 = uVar5 & 0xe0000000;
  local_54 = (short)param_3 * 0x40 + ((ushort)(uVar5 >> 7) & 0x3e) + 1;
  local_64 = 1;
  uVar3 = (ulonglong)(local_60 << 6);
  SRWLock = (PSRWLOCK)(&DAT_14c88eb40 + uVar3);
  local_70 = param_2;
  local_68 = param_3;
  local_5c = (uint)param_4;
  AcquireSRWLockExclusive(SRWLock);
  uVar5 = *(uint *)((longlong)&DAT_14c88eb4c + uVar3);
  uVar6 = (ulonglong)(uVar5 & (uint)param_4);
  lVar1 = *(longlong *)((longlong)&DAT_14c88eb50 + uVar3);
  uVar4 = *(uint *)(lVar1 + uVar6 * 4);
  local_50 = &local_70;
  local_48 = SRWLock;
  if (uVar4 == 0) {
LAB_14682d693:
    FUN_14003ad8e(SRWLock,&local_50,lVar1 + uVar6 * 4,&local_70);
    uVar5 = (uint)local_50;
  }
  else {
    cVar2 = FUN_14682d6e2(&local_50,uVar4);
    if (cVar2 == '\0') {
      do {
        uVar6 = (ulonglong)((int)uVar6 + 1U & uVar5);
        uVar4 = *(uint *)(lVar1 + uVar6 * 4);
        if (uVar4 == 0) goto LAB_14682d693;
        cVar2 = FUN_14682d6e2(&local_50,uVar4);
      } while (cVar2 == '\0');
    }
    uVar5 = uVar4 & 0x1fffffff;
  }
  ReleaseSRWLockExclusive(SRWLock);
  *param_1 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14682d6e2 FUN_14682d6e2 body=112 status=ok
// SIG undefined FUN_14682d6e2(void)

bool FUN_14682d6e2(longlong *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  puVar1 = (undefined8 *)*param_1;
  if ((param_2 & 0xe0000000) == *(uint *)(puVar1 + 3)) {
    lVar2 = *(longlong *)
             (*(longlong *)(param_1[1] + 0x18) + 0x10 + (ulonglong)(param_2 >> 0xd & 0xfff8));
    if (*(ushort *)(lVar2 + (ulonglong)(param_2 & 0xffff) * 2) ==
        *(ushort *)((longlong)puVar1 + 0x1c)) {
      if ((*(byte *)((longlong)puVar1 + 0xc) & 1) == 0) {
        iVar3 = FUN_144afd3ce();
      }
      else {
        iVar3 = FUN_144a54874(lVar2 + (ulonglong)(param_2 & 0xffff) * 2 + 2,*puVar1,
                              *(ushort *)((longlong)puVar1 + 0x1c) >> 6);
      }
      return iVar3 == 0;
    }
  }
  return false;
}



// FUNCTION 14682d752 FUN_14682d752 body=29 status=ok
// SIG undefined FUN_14682d752(void)

undefined8 FUN_14682d752(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14682d770 FUN_14682d770 body=155 status=ok
// SIG undefined FUN_14682d770(void)

void FUN_14682d770(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 auStack_88 [32];
  double local_68;
  undefined1 local_60;
  undefined1 local_58;
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(undefined1 *)(param_1 + 8);
  uVar2 = *(undefined1 *)(param_1 + 9);
  QueryPerformanceCounter(&local_48);
  local_68 = (double)local_48.QuadPart * DAT_14c83f420 + 16777216.0;
  local_60 = uVar1;
  local_58 = uVar2;
  FUN_1448fb430(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682d80c FUN_14682d80c body=92 status=ok
// SIG undefined FUN_14682d80c(void)

int FUN_14682d80c(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 1);
  iVar1 = *(int *)(param_2 + 1);
  if (iVar3 == 0 || iVar1 == 0) {
    iVar3 = iVar3 - iVar1;
  }
  else {
    iVar2 = iVar1;
    if (iVar3 < iVar1) {
      iVar2 = iVar3;
    }
    if (param_3 == 0) {
      iVar2 = strncmp((char *)*param_1,(char *)*param_2,(longlong)iVar2);
    }
    else {
      iVar2 = FUN_14018695a((char *)*param_1,(char *)*param_2,(longlong)iVar2);
    }
    iVar3 = iVar3 - iVar1;
    if (iVar2 != 0) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}



// FUNCTION 14682d868 FUN_14682d868 body=72 status=ok
// SIG undefined FUN_14682d868(void)

void FUN_14682d868(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 2,0);
  iVar1 = (int)(uVar2 >> 1);
  iVar3 = 0x7fffffff;
  if ((int)param_2 <= iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar3;
  FUN_14682d8b0(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 14682d8b0 FUN_14682d8b0 body=130 status=ok
// SIG undefined FUN_14682d8b0(void)

void FUN_14682d8b0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,2);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,2);
  return;
}



// FUNCTION 14682d932 FUN_14682d932 body=108 status=ok
// SIG undefined FUN_14682d932(void)

void FUN_14682d932(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 * 2,0);
      iVar2 = (int)(uVar3 >> 1);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_14682d8b0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14682d9a0 FUN_14682d9a0 body=108 status=ok
// SIG undefined FUN_14682d9a0(void)

void FUN_14682d9a0(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 * 2,0);
      iVar2 = (int)(uVar3 >> 1);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_14682da0e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14682da0e FUN_14682da0e body=130 status=ok
// SIG undefined FUN_14682da0e(void)

void FUN_14682da0e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,2);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,2);
  return;
}



// FUNCTION 14682daa2 FUN_14682daa2 body=128 status=ok
// SIG undefined FUN_14682daa2(void)

void FUN_14682daa2(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14c895fe8;
  if (DAT_14c89601c != 0) {
    *(int *)(DAT_14c895fe8 + (longlong)DAT_14c896018 * 0x2c) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x2c) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14c89601c) {
    iVar4 = DAT_14c896018;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x2c) = iVar4;
  DAT_14c89601c = DAT_14c89601c + 1;
  puVar3 = &DAT_14c895ff8;
  if (DAT_14c896008 != (undefined *)0x0) {
    puVar3 = DAT_14c896008;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14c896018 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14682db38 FUN_14682db38 body=93 status=ok
// SIG undefined FUN_14682db38(void)

void FUN_14682db38(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e30fe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e3c9b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14682db96 FUN_14682db96 body=126 status=ok
// SIG undefined FUN_14682db96(void)

void FUN_14682db96(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e30fe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149e3c9b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014682dc05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14682dc24 FUN_14682dc24 body=26 status=ok
// SIG undefined FUN_14682dc24(void)

undefined8 FUN_14682dc24(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3,param_4);
  return 1;
}



// FUNCTION 14682dc3e FUN_14682dc3e body=176 status=ok
// SIG undefined FUN_14682dc3e(void)

longlong FUN_14682dc3e(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  *(undefined8 *)(param_1 + 0x100) = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  else {
    if ((int)param_3 < 1) {
      uVar3 = 0;
    }
    else {
      bVar5 = *(char *)(param_2 + (ulonglong)(param_3 - 1)) == '\0';
      uVar3 = (uint)bVar5;
      if (bVar5) {
        param_3 = param_3 - 1;
      }
    }
    *(uint *)(param_1 + 0x110) = param_3;
    FUN_144aa0790(param_1,0,uVar3 + param_3,2);
    lVar1 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar1 = param_1;
    }
    *(longlong *)(param_1 + 0x108) = lVar1;
    uVar4 = uVar3 + param_3;
    if (uVar4 != 0 && SCARRY4(uVar3,param_3) == (int)uVar4 < 0) {
      uVar2 = 0;
      do {
        *(short *)(lVar1 + uVar2 * 2) = (short)*(char *)(param_2 + uVar2);
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
  }
  return param_1;
}



// FUNCTION 14682dcee FUN_14682dcee body=125 status=ok
// SIG undefined FUN_14682dcee(void)

void FUN_14682dcee(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x2008);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x200;
    if (0x200 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x200 < *(uint *)(param_1 + 0x200c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x200c) = iVar5;
    FUN_14682d34c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14682dd6c FUN_14682dd6c body=131 status=ok
// SIG undefined FUN_14682dd6c(void)

void FUN_14682dd6c(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x4c) < param_2) {
    iVar4 = 0x200;
    if (0x21f < param_2 + 0x1fU) {
      uVar5 = param_2 + 0x1fU >> 5;
      if (*(int *)(param_1 + 0x4c) + 0x1fU < 0x220) {
        uVar3 = 4;
        if (4 < uVar5) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
      }
      uVar2 = FUN_144a3809e(uVar3 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar4 = -0x20;
      if ((int)uVar5 <= iVar1) {
        iVar4 = iVar1 << 5;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar4;
    FUN_14682d3dc(param_1,*(undefined4 *)(param_1 + 0x48));
    return;
  }
  return;
}



// FUNCTION 14682ddf0 FUN_14682ddf0 body=152 status=ok
// SIG undefined FUN_14682ddf0(void)

void FUN_14682ddf0(longlong param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x2000);
  if (*(longlong *)(param_1 + 0x2000) == 0) {
    lVar4 = param_1;
  }
  if (*(int *)(param_1 + 0x2064) != 0) {
    *(int *)(lVar4 + (longlong)*(int *)(param_1 + 0x2060) * 0x10) = param_2;
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x2064)) {
    uVar5 = *(undefined4 *)(param_1 + 0x2060);
  }
  *(undefined4 *)(lVar4 + (longlong)param_2 * 0x10 + 4) = uVar5;
  *(int *)(param_1 + 0x2060) = param_2;
  *(int *)(param_1 + 0x2064) = *(int *)(param_1 + 0x2064) + 1;
  lVar4 = param_1 + 0x2010;
  if (*(longlong *)(param_1 + 0x2050) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x2050);
  }
  iVar3 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  bVar2 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)(lVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  return;
}



// FUNCTION 14682de88 FUN_14682de88 body=86 status=ok
// SIG undefined FUN_14682de88(void)

void FUN_14682de88(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
  uVar2 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar1 >> 3)) {
    uVar2 = uVar1 >> 3 & 0xffffffff;
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14682dede FUN_14682dede body=152 status=ok
// SIG undefined FUN_14682dede(void)

int FUN_14682dede(char *param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  iVar1 = *param_2;
  lVar5 = (longlong)iVar1;
  pcVar2 = param_1 + lVar5 + -1;
  if (param_1 <= pcVar2) {
    uVar6 = 0;
    do {
      if (9 < (byte)(*pcVar2 - 0x30U)) break;
      uVar6 = uVar6 + 1;
      pcVar2 = pcVar2 + -1;
    } while (param_1 <= pcVar2);
    if (uVar6 == 0 || iVar1 <= (int)uVar6) {
      return 0;
    }
    if (10 < uVar6) {
      return 0;
    }
    lVar4 = -(ulonglong)uVar6;
    if (param_1[lVar4 + lVar5 + -1] != '_') {
      return 0;
    }
    if ((uVar6 != 1) && (param_1[lVar4 + lVar5] == '0')) {
      return 0;
    }
    lVar3 = 0;
    do {
      lVar3 = (ulonglong)(byte)param_1[lVar4 + lVar5] + lVar3 * 10 + -0x30;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0);
    if (lVar3 < 0x7fffffff) {
      *param_2 = ~uVar6 + iVar1;
      return (int)lVar3 + 1;
    }
  }
  return 0;
}



// FUNCTION 14682df76 FUN_14682df76 body=93 status=ok
// SIG undefined FUN_14682df76(void)

void FUN_14682df76(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 2,1);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 1)) {
      uVar2 = uVar1 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,2,1);
  }
  return;
}



// FUNCTION 14682dfd4 FUN_14682dfd4 body=130 status=ok
// SIG undefined FUN_14682dfd4(void)

void FUN_14682dfd4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 * 2,1);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 1)) {
      uVar5 = uVar3 >> 1 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,2,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14682e058 FUN_14682e058 body=63 status=ok
// SIG undefined FUN_14682e058(void)

void FUN_14682e058(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14682e098(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 14682e098 FUN_14682e098 body=97 status=ok
// SIG undefined FUN_14682e098(void)

ulonglong FUN_14682e098(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 14682e0fa FUN_14682e0fa body=89 status=ok
// SIG undefined FUN_14682e0fa(void)

void FUN_14682e0fa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 4,4);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 2)) {
    uVar3 = uVar1 >> 2 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,4,4);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14682e154 FUN_14682e154 body=19 status=ok
// SIG undefined FUN_14682e154(void)

undefined8 FUN_14682e154(undefined8 param_1,undefined8 *param_2)

{
  (*(code *)*param_2)();
  return param_1;
}



// FUNCTION 14682e192 FUN_14682e192 body=29 status=ok
// SIG undefined FUN_14682e192(void)

undefined8 FUN_14682e192(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14682e1af FUN_14682e1af body=203 status=ok
// SIG undefined FUN_14682e1af(void)

longlong * FUN_14682e1af(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1448c2e86();
  FUN_1446ddc76(&local_50,"VirtualizationSystem",1);
  FUN_14682e27c(uVar2,&local_48,local_50);
  lVar1 = local_48;
  if ((longlong)local_40 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar1 + lVar4);
      (**(code **)(*plVar3 + 8))(plVar3,&local_58);
      if (local_58 == param_1) goto LAB_14682e242;
      lVar4 = lVar4 + 8;
    } while ((longlong)local_40 * 8 != lVar4);
    plVar3 = (longlong *)0x0;
  }
LAB_14682e242:
  if (local_48 != 0) {
    FUN_1400020a8(local_48);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 14682e27c FUN_14682e27c body=137 status=ok
// SIG undefined FUN_14682e27c(void)

longlong * FUN_14682e27c(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar2 = (**(code **)(*param_1 + 0x18))(0,param_3);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      lVar3 = (**(code **)(*param_1 + 0x20))(param_1,param_3,iVar5);
      lVar4 = lVar3 + -8;
      if (lVar3 == 0) {
        lVar4 = 0;
      }
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1468339b2(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 14682e305 FUN_14682e305 body=107 status=ok
// SIG undefined FUN_14682e305(void)

void FUN_14682e305(undefined8 param_1,longlong param_2)

{
  longlong unaff_retaddr;
  undefined1 local_b0 [136];
  undefined1 *local_28;
  
  if (param_2 == 0) {
    param_2 = unaff_retaddr;
  }
  FUN_1405d5a96(local_b0);
  FUN_1467b3ef4(local_b0);
  FUN_14682eb3e(local_b0,param_1,param_2);
  local_28 = local_b0;
  RaiseException(0x8000,0,1,(ULONG_PTR *)&local_28);
  return;
}



// FUNCTION 14682e37b FUN_14682e37b body=139 status=ok
// SIG undefined FUN_14682e37b(void)

void FUN_14682e37b(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1405d5a96(&local_b0);
  FUN_1467b3ef4(&local_b0);
  local_b0 = param_1;
  local_a8 = param_2;
  local_28 = &local_b0;
  RaiseException((uint)DAT_14c83f1dc << 0xf | 0x4000,0,1,(ULONG_PTR *)&local_28);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682e40a FUN_14682e40a body=133 status=ok
// SIG undefined FUN_14682e40a(void)

undefined1 FUN_14682e40a(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8c2714) {
    FUN_144b3d300(&DAT_14c8c2714);
    if (DAT_14c8c2714 == -1) {
      hModule = GetModuleHandleW(L"ntdll.dll");
      if (hModule == (HMODULE)0x0) {
        DAT_14c8c2710 = false;
      }
      else {
        pFVar1 = GetProcAddress(hModule,"wine_get_version");
        DAT_14c8c2710 = pFVar1 != (FARPROC)0x0;
      }
      _Init_thread_footer(&DAT_14c8c2714);
    }
  }
  return DAT_14c8c2710;
}



// FUNCTION 14682e48f FUN_14682e48f body=30 status=ok
// SIG undefined FUN_14682e48f(void)

wchar_t * FUN_14682e48f(char param_1)

{
  if ((byte)(param_1 + 1U) < 6) {
    return (wchar_t *)(&PTR_u_Other_149e41c18)[(byte)(param_1 + 1U)];
  }
  return L"Unknown";
}



// FUNCTION 14682e4ae FUN_14682e4ae body=707 status=ok
// SIG undefined FUN_14682e4ae(void)

void FUN_14682e4ae(longlong param_1,wchar_t *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  size_t sVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  wchar_t *pwVar8;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined2 *local_80;
  int local_78;
  wchar_t *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  char local_49;
  wchar_t *local_48;
  int local_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14274ccba();
  local_49 = '\x01';
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 == 2) {
    pwVar8 = L"Ensure.RecordDump";
  }
  else {
    if (iVar2 == 9) {
      local_49 = '\0';
      goto LAB_14682e546;
    }
    if (iVar2 != 3) goto LAB_14682e546;
    pwVar8 = L"Stall.RecordDump";
  }
  local_a8 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"CrashReportClient",pwVar8,&local_49);
LAB_14682e546:
  if (local_49 == '\x01') {
    if (param_2 == (wchar_t *)0x0) {
      local_40 = 0;
      local_48 = param_2;
    }
    else {
      local_48 = param_2;
      sVar3 = wcslen(param_2);
      local_40 = (int)sVar3;
    }
    local_38 = L"UEMinidump.dmp";
    local_30 = 0xe;
    FUN_140bee87a(&local_60,&local_48,2);
    puVar5 = local_60;
    if (local_58 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    local_a8 = param_3;
    FUN_142795227(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14),param_1,puVar5);
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_146011dcc(&local_48);
  FUN_1412cfe60(&local_60,&local_48,(local_40 == 0) + '\x0f');
  FUN_1401aebe8(&local_60,L"CrashVideo.avi",0xe);
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)FUN_14054d1d4();
  puVar5 = local_60;
  if (local_58 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  cVar1 = (**(code **)(*plVar4 + 0x48))(plVar4,puVar5);
  if (cVar1 != '\0') {
    FUN_144a06ecc(&local_70,&local_60);
    pwVar8 = local_70;
    if (local_68 == 0) {
      pwVar8 = L"";
    }
    uVar7 = 0;
    iVar2 = 0;
    local_48 = param_2;
    if (param_2 != (wchar_t *)0x0) {
      sVar3 = wcslen(param_2);
      iVar2 = (int)sVar3;
    }
    local_40 = iVar2;
    local_38 = pwVar8;
    if (pwVar8 != (wchar_t *)0x0) {
      sVar3 = wcslen(pwVar8);
      uVar7 = (int)sVar3;
    }
    local_30 = uVar7;
    FUN_140bee87a(&local_80,&local_48,2);
    plVar4 = (longlong *)FUN_14054d1d4();
    puVar5 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar5 = local_60;
    }
    puVar6 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar6 = local_80;
    }
    local_88 = 0;
    local_90 = 0;
    local_a0 = 0;
    local_a8 = (undefined8 *)((ulonglong)local_a8 & 0xffffffffffffff00);
    local_98 = 0;
    (**(code **)(*plVar4 + 0x38))(plVar4,puVar6,puVar5,1);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14682e772 FUN_14682e772 body=537 status=ok
// SIG undefined FUN_14682e772(void)

void FUN_14682e772(int *param_1,wchar_t *param_2)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  int local_30;
  wchar_t *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140056680(&local_28,L"Unhandled Exception: ");
  iVar1 = *param_1;
  if (iVar1 < -0x3fffff74) {
    if (iVar1 == -0x7ffffffe) {
      pwVar2 = L"EXCEPTION_DATATYPE_MISALIGNMENT";
      goto LAB_14682e8bf;
    }
    if (iVar1 != -0x3ffffffb) {
      if (iVar1 != -0x3fffffe3) goto switchD_14682e7c4_caseD_c000008f;
      pwVar2 = L"EXCEPTION_ILLEGAL_INSTRUCTION";
      uVar3 = 0x1d;
      goto LAB_14682e8ca;
    }
    FUN_1400020e8(&local_28,L"EXCEPTION_ACCESS_VIOLATION ",0x1b);
    if (*(longlong *)(param_1 + 8) == 0) {
      pwVar2 = L"reading address ";
LAB_14682e95f:
      FUN_1400020e8(&local_28,pwVar2,0x10);
    }
    else if (*(longlong *)(param_1 + 8) == 1) {
      pwVar2 = L"writing address ";
      goto LAB_14682e95f;
    }
    FUN_140002266(&local_38,L"0x%016llx",*(undefined8 *)(param_1 + 10));
LAB_14682e840:
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_28,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    goto LAB_14682e8cf;
  }
  switch(iVar1) {
  case -0x3fffff74:
    pwVar2 = L"EXCEPTION_ARRAY_BOUNDS_EXCEEDED";
    goto LAB_14682e8bf;
  case -0x3fffff73:
    pwVar2 = L"EXCEPTION_FLT_DENORMAL_OPERAND";
    uVar3 = 0x1e;
    break;
  case -0x3fffff72:
    pwVar2 = L"EXCEPTION_FLT_DIVIDE_BY_ZERO";
    goto LAB_14682e8a2;
  case -0x3fffff71:
  case -0x3fffff6f:
  case -0x3fffff6e:
  case -0x3fffff6d:
  case -0x3fffff6b:
switchD_14682e7c4_caseD_c000008f:
    FUN_140002266(&local_38,L"0x%08x");
    goto LAB_14682e840;
  case -0x3fffff70:
    pwVar2 = L"EXCEPTION_FLT_INVALID_OPERATION";
LAB_14682e8bf:
    uVar3 = 0x1f;
    break;
  case -0x3fffff6c:
    pwVar2 = L"EXCEPTION_INT_DIVIDE_BY_ZERO";
LAB_14682e8a2:
    uVar3 = 0x1c;
    break;
  case -0x3fffff6a:
    pwVar2 = L"EXCEPTION_PRIV_INSTRUCTION";
    uVar3 = 0x1a;
    break;
  default:
    if (iVar1 != -0x3fffff03) goto switchD_14682e7c4_caseD_c000008f;
    pwVar2 = L"EXCEPTION_STACK_OVERFLOW";
    uVar3 = 0x18;
  }
LAB_14682e8ca:
  FUN_1400020e8(&local_28,pwVar2,uVar3);
LAB_14682e8cf:
  pwVar2 = local_28;
  if (local_20 == 0) {
    pwVar2 = L"";
  }
  wcsncpy(param_2,pwVar2,0xfff);
  param_2[0xfff] = L'\0';
  if (local_28 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14682e98c FUN_14682e98c body=118 status=ok
// SIG undefined FUN_14682e98c(void)

undefined8 FUN_14682e98c(longlong *param_1)

{
  DWORD DVar1;
  undefined8 uVar2;
  
  if (DAT_14c8c2598 != '\x01') {
    return 0;
  }
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(*param_1 + 0x10);
  }
  if (DAT_14c8962e8 != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject(DAT_14c8962e8,0);
    if (DVar1 == 0x102) {
      if (DAT_14c83f1dd == '\0') {
        FUN_1415534f4();
      }
      FUN_14279c81a(param_1,uVar2,DAT_14c8962d8);
    }
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(0xbdb2e);
}



// FUNCTION 14682ea02 FUN_14682ea02 body=32 status=ok
// SIG undefined FUN_14682ea02(void)

undefined8 FUN_14682ea02(void)

{
  FUN_14682ea22();
  DAT_14c868880 = 1;
  FUN_142797bc0(1,3);
  return 0;
}



// FUNCTION 14682ea22 FUN_14682ea22 body=282 status=ok
// SIG undefined FUN_14682ea22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14682ea22(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  DWORD dwMilliseconds;
  bool bVar4;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c8c2598 == '\x01') {
    FUN_144a82cde();
    uVar3 = FUN_144a82cde();
    FUN_146816410(uVar3);
    LOCK();
    iVar1 = DAT_14c8c25a0 + 1;
    UNLOCK();
    bVar4 = DAT_14c8c25a0 == 0;
    DAT_14c8c25a0 = iVar1;
    if (bVar4) {
      _DAT_14c8962d0 = param_1;
      DAT_14c8962d8 = GetCurrentThreadId();
      _DAT_14c8962e0 = GetCurrentThread();
      SetEvent(DAT_14c8962b8);
    }
    cVar2 = FUN_14682e40a();
    if (cVar2 == '\0') {
      local_18 = 60.0;
    }
    else {
      local_18 = 120.0;
    }
    if (DAT_14c872ce0 != 0) {
      local_28 = &DAT_14c872ce8;
      FUN_14612afb8(DAT_14c872ce0,L"CrashReportClient",L"CrashHandlingTimeoutSecs",&local_18);
    }
    dwMilliseconds = 0xffffffff;
    if (0.0 <= local_18) {
      dwMilliseconds = (DWORD)(longlong)(local_18 * 1000.0);
    }
    WaitForSingleObject(DAT_14c8962c8,dwMilliseconds);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682eb3e FUN_14682eb3e body=11 status=ok
// SIG undefined FUN_14682eb3e(void)

undefined8 * FUN_14682eb3e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 14682eb49 FUN_14682eb49 body=214 status=ok
// SIG undefined FUN_14682eb49(void)

void FUN_14682eb49(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  undefined1 auStack_e8 [40];
  undefined **local_c0;
  HANDLE local_b8;
  undefined4 local_ac;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (DAT_14c8c25a0 < 1) {
    cVar1 = FUN_146800676();
    if (cVar1 == '\0') {
      FUN_1467b3f80(&local_c0,5,param_1);
      local_c0 = &PTR_FUN_149e401d0;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      uStack_38 = 0;
      local_b8 = GetCurrentProcess();
      local_ac = param_4;
      FUN_1467fef34(&local_c0,param_2,param_3);
      FUN_1467fe8ca(&local_c0);
      bVar2 = FUN_1467bd725();
      FUN_1427953e2(&local_c0,0,bVar2 ^ 1);
      FUN_14682ec20(&local_c0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682ec20 FUN_14682ec20 body=62 status=ok
// SIG undefined FUN_14682ec20(void)

void FUN_14682ec20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e401d0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1467bc712(param_1);
  return;
}



// FUNCTION 14682ec5e FUN_14682ec5e body=157 status=ok
// SIG undefined FUN_14682ec5e(void)

undefined8 * FUN_14682ec5e(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  BOOL BVar1;
  undefined1 auStack_288 [36];
  undefined1 local_264 [12];
  undefined1 local_258 [24];
  LPCWSTR local_240;
  undefined2 *local_238;
  char local_228;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_140659024(&local_240,param_3);
  *local_238 = 0;
  BVar1 = GetFileAttributesExW(local_240,GetFileExInfoStandard,local_264);
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if (BVar1 == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1410c051c(param_2,local_258);
  }
  if ((local_20 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682ecfc FUN_14682ecfc body=32 status=ok
// SIG undefined FUN_14682ecfc(void)

byte FUN_14682ecfc(undefined8 param_1,LPCWSTR param_2)

{
  DWORD DVar1;
  
  DVar1 = GetFileAttributesW(param_2);
  return (byte)(DVar1 >> 10) & 1 & DVar1 != 0xffffffff;
}



// FUNCTION 14682ed1c FUN_14682ed1c body=487 status=ok
// SIG undefined FUN_14682ed1c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool FUN_14682ed1c(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  UINT UVar1;
  DWORD DVar2;
  undefined1 auStackY_1288 [32];
  longlong local_1258;
  undefined4 local_1250;
  undefined4 local_124c;
  WCHAR local_1248 [2052];
  wchar_t *local_240;
  wchar_t *local_238;
  wchar_t *local_230;
  char local_228;
  wchar_t local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStackY_1288;
  local_240 = local_220;
  local_228 = '\0';
  local_230 = (wchar_t *)&local_20;
  local_238 = local_240;
  FUN_1449668a2(&local_240,*param_2,*(undefined4 *)(param_2 + 1));
  FUN_144a08678(&local_240,1);
  if (local_230 <= local_238 + 0x10) {
    FUN_140213274(&local_240,0x10);
  }
  builtin_wcsncpy(local_238,L":Zone.Identifier",0x11);
  local_238 = local_238 + 0x10;
  UVar1 = GetPrivateProfileIntW(L"ZoneTransfer",L"ZoneId",-1,local_240);
  if (param_3 != (longlong *)0x0 && UVar1 - 2 < 3) {
    *local_238 = L'\0';
    DVar2 = GetPrivateProfileStringW
                      (L"ZoneTransfer",L"HostUrl",(LPCWSTR)0x0,local_1248,0x800,local_240);
    if (0xfffff7ff < DVar2 - 0x801) {
      FUN_14006620a(&local_1258,local_1248,DVar2);
      if (&local_1258 == param_3) {
        if (local_1258 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_1258;
        local_1258 = 0;
        *(undefined4 *)(param_3 + 1) = local_1250;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_124c;
      }
    }
  }
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if ((local_20 ^ (ulonglong)auStackY_1288) == DAT_14c707940) {
    return UVar1 - 2 < 3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682ef04 FUN_14682ef04 body=365 status=ok
// SIG undefined FUN_14682ef04(void)

ulonglong FUN_14682ef04(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 *param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined7 uVar4;
  ulonglong uVar3;
  LPCWSTR lpString;
  undefined1 auStack_268 [40];
  wchar_t *local_240;
  wchar_t *local_238;
  wchar_t *local_230;
  char local_228;
  wchar_t local_220 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_268;
  local_240 = local_220;
  local_228 = '\0';
  local_230 = (wchar_t *)&local_20;
  local_238 = local_240;
  FUN_1449668a2(&local_240,*param_2,*(undefined4 *)(param_2 + 1));
  FUN_144a08678(&local_240,1);
  if (local_230 <= local_238 + 0x10) {
    FUN_140213274(&local_240,0x10);
  }
  builtin_wcsncpy(local_238,L":Zone.Identifier",0x11);
  local_238 = local_238 + 0x10;
  uVar4 = (undefined7)((ulonglong)param_4 >> 8);
  if (param_3 == '\0') {
    BVar1 = DeleteFileW(local_240);
    uVar3 = CONCAT71(uVar4,1);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      uVar3 = CONCAT71(uVar4,DVar2 == 2);
    }
    goto LAB_14682f02f;
  }
  BVar1 = WritePrivateProfileStringW(L"ZoneTransfer",L"ZoneId",L"3",local_240);
  if (BVar1 == 0) {
LAB_14682f02d:
    uVar3 = 0;
  }
  else {
    if (param_4 != (undefined8 *)0x0) {
      *local_238 = L'\0';
      if (*(int *)(param_4 + 1) == 0) {
        lpString = L"";
      }
      else {
        lpString = (LPCWSTR)*param_4;
      }
      BVar1 = WritePrivateProfileStringW(L"ZoneTransfer",L"HostUrl",lpString,local_240);
      if (BVar1 == 0) goto LAB_14682f02d;
    }
    uVar3 = CONCAT71(uVar4,1);
  }
LAB_14682f02f:
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682f072 GetLastError body=7 status=ok
// SIG DWORD GetLastError(void)

DWORD __stdcall GetLastError(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014682f072. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetLastError();
  return DVar1;
}



// FUNCTION 14682f07a FUN_14682f07a body=333 status=ok
// SIG undefined FUN_14682f07a(void)

undefined8 * FUN_14682f07a(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  BOOL BVar1;
  undefined1 auStack_2c8 [40];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  uint local_284;
  undefined1 local_280 [8];
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined4 local_264;
  LPCWSTR local_260;
  undefined2 *local_258;
  char local_248;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  FUN_140659024(&local_260,param_3);
  *local_258 = 0;
  BVar1 = GetFileAttributesExW(local_260,GetFileExInfoStandard,&local_284);
  if (local_248 == '\x01') {
    FUN_1400020a8(local_260);
  }
  if (BVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xffffffffffffffff;
    *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) & 0xf8;
  }
  else {
    FUN_1410c051c(&local_290);
    FUN_1410c051c(&local_298,local_278);
    FUN_1410c051c(&local_2a0,local_280);
    *param_2 = local_2a0;
    param_2[1] = local_298;
    param_2[2] = local_290;
    param_2[3] = -(ulonglong)((local_284 & 0x10) != 0) | CONCAT44(local_268,local_264);
    *(byte *)(param_2 + 4) =
         (char)local_284 * '\x02' & 2U | (byte)((local_284 & 0x10) >> 4) |
         *(byte *)(param_2 + 4) & 0xf8 | 4;
  }
  if ((local_40 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682f1c8 FUN_14682f1c8 body=131 status=ok
// SIG undefined FUN_14682f1c8(void)

undefined4 FUN_14682f1c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  code *local_48;
  undefined8 *local_40;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140056680(local_38);
  local_40 = &local_58;
  local_48 = FUN_14279d6fc;
  local_58 = param_3;
  local_50 = local_38;
  uVar1 = FUN_140e9a35e(param_2);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682f24c FUN_14682f24c body=464 status=ok
// SIG undefined FUN_14682f24c(void)

longlong * FUN_14682f24c(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  int iStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *(undefined4 *)param_3;
  uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_50 = *(undefined4 *)(param_3 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
  cVar4 = FUN_14022f826();
  if (cVar4 == '\0') {
    FUN_14006620a(&local_48,*param_3,*(undefined4 *)(param_3 + 1));
    local_68 = local_48;
    iStack_60 = (int)uStack_40;
    uStack_5c = uStack_40._4_4_;
    FUN_140aa5ef8(&local_48,&local_68);
    lVar1 = local_48;
    iVar3 = (int)uStack_40;
    local_48 = 0;
    uStack_40 = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    local_68 = 0;
    iStack_60 = 0;
    local_78 = 0;
    local_70 = 0;
    local_88 = lVar1;
    local_80 = iVar3 + -1;
    if (iVar3 == 0) {
      local_80 = 0;
    }
    FUN_140a8f91e(&local_88,&local_68);
    iVar3 = iStack_60;
    lVar2 = local_68;
    if (((longlong)iStack_60 < 1) ||
       (iVar5 = FUN_144a54874(&DAT_149e31048,local_68 + (longlong)iStack_60 * 2 + -2,1), iVar5 != 0)
       ) {
      *param_2 = 0;
      param_2[1] = 0;
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
      FUN_14006620a(&local_48,lVar2,iVar3);
      if (&local_48 == param_2) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_48;
        local_48 = 0;
        *(int *)(param_2 + 1) = (int)uStack_40;
        *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
      }
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    FUN_14006620a(&local_48,*param_3,*(undefined4 *)(param_3 + 1));
    lVar1 = local_48;
    if (&local_48 != param_2) {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_48;
      *(int *)(param_2 + 1) = (int)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_40._4_4_;
      goto LAB_14682f388;
    }
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
LAB_14682f388:
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14682f41e FUN_14682f41e body=64 status=ok
// SIG undefined FUN_14682f41e(void)

void FUN_14682f41e(undefined8 param_1,undefined8 param_2,undefined1 *param_3,longlong param_4)

{
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 4;
  }
  if (param_4 != 0) {
    FUN_14020fad6(param_4,L"FileJournal is only available in editor.");
  }
  FUN_1467b73a0(param_1,param_2,0,0);
  return;
}



// FUNCTION 14682f45e FUN_14682f45e body=80 status=ok
// SIG undefined FUN_14682f45e(void)

void FUN_14682f45e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  if (param_5 != 0) {
    FUN_14020fad6(param_5,L"FileJournal is only available in editor.");
  }
  FUN_1467b73c8(param_1,param_2,param_3,param_4,0);
  return;
}



// FUNCTION 14682f4ae FUN_14682f4ae body=73 status=ok
// SIG undefined FUN_14682f4ae(void)

void FUN_14682f4ae(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  local_10 = param_3[1];
  FUN_1467b7404(param_1,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682f4f8 FUN_14682f4f8 body=22 status=ok
// SIG undefined FUN_14682f4f8(void)

undefined8 FUN_14682f4f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1467b7458();
  return param_2;
}



// FUNCTION 14682f50e FUN_14682f50e body=134 status=ok
// SIG undefined FUN_14682f50e(void)

void FUN_14682f50e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  if (param_8 != 0) {
    FUN_14020fad6(param_8,L"FileJournal is only available in editor.");
  }
  FUN_1467b74da(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}



// FUNCTION 14682f594 FUN_14682f594 body=50 status=ok
// SIG undefined FUN_14682f594(void)

void FUN_14682f594(undefined8 *param_1)

{
  if ((LPVOID)*param_1 != (LPVOID)0x0) {
    VirtualFree((LPVOID)*param_1,0,0x8000);
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14682f5c6 FUN_14682f5c6 body=3 status=ok
// SIG undefined FUN_14682f5c6(void)

undefined1 FUN_14682f5c6(void)

{
  return 1;
}



// FUNCTION 14682f5ca FUN_14682f5ca body=10 status=ok
// SIG undefined FUN_14682f5ca(void)

void FUN_14682f5ca(void)

{
  FUN_142797a38(2);
  return;
}



// FUNCTION 14682f5d4 FUN_14682f5d4 body=184 status=ok
// SIG undefined FUN_14682f5d4(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14682f5d4(undefined8 *param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_2c58 [44];
  undefined4 local_2c2c;
  longlong local_2c28 [1409];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_2c58;
  *param_1 = 0;
  param_1[1] = 0;
  local_2c2c = 0x2c00;
  plVar2 = local_2c28;
  iVar1 = GetAdaptersInfo(plVar2);
  if (iVar1 == 0) {
    do {
      iVar1 = *(int *)((longlong)plVar2 + 0x194);
      if ((longlong)iVar1 != 0) {
        *(int *)(param_1 + 1) = iVar1;
        FUN_1447403be(param_1);
        memset((void *)*param_1,0,(longlong)iVar1);
        memcpy((void *)*param_1,plVar2 + 0x33,(ulonglong)*(uint *)((longlong)plVar2 + 0x194));
        break;
      }
      plVar2 = (longlong *)*plVar2;
    } while (plVar2 != (longlong *)0x0);
  }
  if ((local_20 ^ (ulonglong)auStack_2c58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682f68e FUN_14682f68e body=42 status=ok
// SIG undefined FUN_14682f68e(void)

void FUN_14682f68e(void)

{
  FILE *_File;
  int _FileHandle;
  
  _File = (FILE *)__acrt_iob_func(1);
  _FileHandle = _fileno(_File);
                    /* WARNING: Could not recover jumptable at 0x00014682f6b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _setmode(_FileHandle,0x40000);
  return;
}



// FUNCTION 14682f6b8 FUN_14682f6b8 body=121 status=ok
// SIG undefined FUN_14682f6b8(void)

wchar_t * FUN_14682f6b8(wchar_t *param_1,DWORD param_2,DWORD param_3)

{
  wchar_t *pwVar1;
  
  *param_1 = L'\0';
  if (param_3 == 0) {
    param_3 = GetLastError();
  }
  FormatMessageW(0x1000,(LPCVOID)0x0,param_3,0x400,param_1,param_2,(va_list *)0x0);
  pwVar1 = wcschr(param_1,L'\r');
  if (pwVar1 != (wchar_t *)0x0) {
    *pwVar1 = L'\0';
  }
  pwVar1 = wcschr(param_1,L'\n');
  if (pwVar1 != (wchar_t *)0x0) {
    *pwVar1 = L'\0';
  }
  return param_1;
}



// FUNCTION 14682f732 FUN_14682f732 body=251 status=ok
// SIG undefined FUN_14682f732(void)

undefined4 FUN_14682f732(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = FUN_1467c2848();
  if (lVar2 != 0) {
    FUN_14275ab18(lVar2,0);
  }
  FUN_140056680(local_40,param_2);
  FUN_1448097c4(local_40,&DAT_149e01ea8,&DAT_149dfb77a,1);
  FUN_1448097c4(local_40,&DAT_149e01f72,&DAT_149e02010,1);
  FUN_140056680(local_50,param_3);
  uVar1 = FUN_14682f82e(0,param_1,local_40,local_50);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar2 != 0) {
    lVar2 = FUN_1467c2848();
    if (lVar2 != 0) {
      FUN_14275ad76(lVar2,0);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682f82e FUN_14682f82e body=246 status=ok
// SIG undefined FUN_14682f82e(void)

undefined4 FUN_14682f82e(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [4];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined8 uStack_3f;
  undefined4 local_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_47 = 0;
  uStack_40 = 0;
  uStack_3f = 0;
  local_34 = 4;
  FUN_144a787a6(local_88,param_3);
  FUN_144a787a6(local_88 + 2,param_4);
  uVar1 = 4;
  if (param_2 < 8) {
    local_34 = *(undefined4 *)(&DAT_149e41c58 + (ulonglong)param_2 * 4);
    local_68 = (undefined1)(0x1000101010000 >> ((char)param_2 * '\b' & 0x3fU));
    uVar1 = FUN_14279d2be(local_88,param_1,param_2 + 0x65);
  }
  if (local_88[2] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682f926 FUN_14682f926 body=617 status=ok
// SIG undefined FUN_14682f926(void)

ulonglong FUN_14682f926(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 *param_4)

{
  DWORD dwMessageId;
  BYTE *lpData;
  int iVar1;
  LPCWSTR lpValueName;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  undefined1 auStackY_8b8 [32];
  HKEY local_868;
  int local_860;
  LPCWSTR local_858;
  int local_850;
  undefined4 local_84c;
  LPCWSTR local_848;
  int local_840;
  undefined4 local_83c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_8b8;
  FUN_140056680(&local_868,L"Software");
  iVar2 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1412cfe60(&local_848,&local_868,iVar2 + 1 + (uint)(local_860 == 0));
  FUN_1401aebe8(&local_848,*param_1,iVar2);
  iVar2 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar2 = 0;
  }
  FUN_1412cfe60(&local_858,&local_848,iVar2 + 1 + (uint)(local_840 == 0));
  FUN_1401aebe8(&local_858,*param_2,iVar2);
  if (local_848 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  if (local_868 != (HKEY)0x0) {
    FUN_1400020a8();
  }
  FUN_140807d8e(&local_858,&local_848,&DAT_149e065c6,&DAT_149e01f64);
  if (local_858 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  local_858 = local_848;
  local_850 = local_840;
  local_84c = local_83c;
  puVar4 = &DAT_149dfb77a;
  if (local_840 == 0) {
    local_848 = L"";
  }
  dwMessageId = RegCreateKeyExW((HKEY)0xffffffff80000001,local_848,0,(LPWSTR)0x0,0,0x20006,
                                (LPSECURITY_ATTRIBUTES)0x0,&local_868,(LPDWORD)0x0);
  if (dwMessageId == 0) {
    iVar2 = *(int *)(param_4 + 1);
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    lpValueName = L"";
    lpData = "";
    if (iVar2 != 0) {
      lpData = (BYTE *)*param_4;
    }
    if (*(int *)(param_3 + 1) != 0) {
      lpValueName = (LPCWSTR)*param_3;
    }
    dwMessageId = RegSetValueExW(local_868,lpValueName,0,1,lpData,iVar1 * 2 + 2);
    RegCloseKey(local_868);
    if (dwMessageId == 0) {
      uVar3 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      goto LAB_14682fae5;
    }
  }
  uVar3 = 0;
  FormatMessageW(0x1000,(LPCVOID)0x0,dwMessageId,0,(LPWSTR)&local_848,0x400,(va_list *)0x0);
  if (*(int *)(param_3 + 1) != 0) {
    puVar4 = (undefined2 *)*param_3;
  }
  FUN_140047918(DAT_14c872be8,
                L"FWindowsPlatformMisc::SetStoredValue: ERROR: Could not store value for \'%s\'. Error Code %u: %s"
                ,puVar4,dwMessageId);
LAB_14682fae5:
  if (local_858 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStackY_8b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 14682fb90 SetLastError body=7 status=ok
// SIG void SetLastError(DWORD dwErrCode)

void __stdcall SetLastError(DWORD dwErrCode)

{
                    /* WARNING: Could not recover jumptable at 0x00014682fb90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetLastError(dwErrCode);
  return;
}



// FUNCTION 14682fb98 FUN_14682fb98 body=220 status=ok
// SIG undefined FUN_14682fb98(void)

undefined8 FUN_14682fb98(int *param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined2 *puVar6;
  uint uVar7;
  ushort uVar8;
  ulonglong uVar9;
  
  if ((1 < param_1[4]) && (*param_1 != 0)) {
    if (param_1[0xc] == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    else {
      puVar6 = *(undefined2 **)(param_1 + 10);
    }
    lVar5 = 0;
    while( true ) {
      uVar8 = *(ushort *)((longlong)puVar6 + lVar5);
      uVar9 = (ulonglong)uVar8;
      uVar3 = *(ushort *)((longlong)L"Unknown" + lVar5);
      if (uVar8 != uVar3) break;
      if (uVar8 == 0) {
        return 0;
      }
LAB_14682fbe2:
      lVar5 = lVar5 + 2;
    }
    if ((uVar3 | uVar8) < 0x80) {
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      uVar4 = (ulonglong)uVar3;
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      if ((&DAT_149e05da0)[uVar9] == (&DAT_149e05da0)[uVar4]) goto LAB_14682fbe2;
    }
    if (uVar8 != uVar3) {
      puVar6 = &DAT_149dfb77a;
      if (param_1[0xc] != 0) {
        puVar6 = *(undefined2 **)(param_1 + 10);
      }
      lVar5 = 0;
      while( true ) {
        uVar8 = *(ushort *)((longlong)puVar6 + lVar5);
        uVar1 = (uint)uVar8;
        uVar3 = *(ushort *)((longlong)&DAT_149dfb77a + lVar5);
        uVar7 = (uint)uVar3;
        if (uVar8 != uVar3) {
          if ((uVar3 | uVar8) < 0x80) {
            uVar1 = (uint)(byte)(&DAT_149e05da0)[uVar8];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar3]) goto LAB_14682fc32;
          }
          iVar2 = uVar1 - uVar7;
          goto LAB_14682fc61;
        }
        if (uVar8 == 0) break;
LAB_14682fc32:
        lVar5 = lVar5 + 2;
      }
      iVar2 = 0;
LAB_14682fc61:
      return CONCAT71(0x149e05d,iVar2 != 0);
    }
  }
  return 0;
}



// FUNCTION 14682fc74 FUN_14682fc74 body=107 status=ok
// SIG undefined FUN_14682fc74(void)

undefined4 * FUN_14682fc74(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  FUN_144a787a6(param_1 + 6,param_2 + 6);
  FUN_144a787a6(param_1 + 10,param_2 + 10);
  FUN_144a787a6(param_1 + 0xe,param_2 + 0xe);
  FUN_144a787a6(param_1 + 0x12,param_2 + 0x12);
  FUN_144a787a6(param_1 + 0x16,param_2 + 0x16);
  return param_1;
}



// FUNCTION 14682fce0 FUN_14682fce0 body=56 status=ok
// SIG undefined FUN_14682fce0(void)

char FUN_14682fce0(void)

{
  char cVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  cVar1 = FUN_145db1694(6,2,0);
  if (cVar1 != '\0') {
    iVar2 = GetSystemMetrics(0x2003);
    cVar3 = (iVar2 == 0) + '\x01';
  }
  return cVar3;
}



// FUNCTION 14682fd18 FUN_14682fd18 body=229 status=ok
// SIG undefined FUN_14682fd18(void)

undefined8 * FUN_14682fd18(undefined8 *param_1)

{
  DWORD dwLen;
  BOOL BVar1;
  LPCWSTR pWVar2;
  bool bVar3;
  undefined1 auStack_68 [36];
  uint local_44;
  LPVOID local_40;
  LPVOID local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 1) == 0) {
    pWVar2 = L"";
  }
  else {
    pWVar2 = (LPCWSTR)*param_1;
  }
  dwLen = GetFileVersionInfoSizeW(pWVar2,(LPDWORD)0x0);
  if (dwLen != 0) {
    local_38 = (LPVOID)0x0;
    uStack_30 = (ulonglong)dwLen;
    FUN_1447403be(&local_38);
    if (*(int *)(param_1 + 1) == 0) {
      pWVar2 = L"";
    }
    else {
      pWVar2 = (LPCWSTR)*param_1;
    }
    BVar1 = GetFileVersionInfoW(pWVar2,0,dwLen,local_38);
    if (BVar1 == 0) {
      bVar3 = true;
    }
    else {
      BVar1 = VerQueryValueW(local_38,L"\\",&local_40,&local_44);
      bVar3 = BVar1 == 0;
      if (!bVar3) {
        param_1 = (undefined8 *)
                  CONCAT44(*(undefined4 *)((longlong)local_40 + 8),
                           *(undefined4 *)((longlong)local_40 + 0xc));
      }
    }
    if (local_38 != (LPCVOID)0x0) {
      FUN_1400020a8();
    }
    if (!bVar3) goto LAB_14682fddc;
  }
  param_1 = (undefined8 *)0x0;
LAB_14682fddc:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682fdfe FUN_14682fdfe body=127 status=ok
// SIG undefined FUN_14682fdfe(void)

DWORD FUN_14682fdfe(void)

{
  BOOL BVar1;
  undefined1 auStack_118 [44];
  DEVMODEW local_ec;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_118;
  memset(&local_ec,0,0xdc);
  local_ec.dmSize = 0xdc;
  BVar1 = EnumDisplaySettingsW((LPCWSTR)0x0,0xffffffff,&local_ec);
  if ((int)local_ec.dmDisplayFrequency < 0x3d) {
    local_ec.dmDisplayFrequency = 0x3c;
  }
  if (BVar1 == 0) {
    local_ec.dmDisplayFrequency = 0x3c;
  }
  if ((local_10 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return local_ec.dmDisplayFrequency;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682fe7e FUN_14682fe7e body=192 status=ok
// SIG undefined FUN_14682fe7e(void)

void FUN_14682fe7e(void)

{
  longlong lVar1;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  ULARGE_INTEGER local_58;
  ULARGE_INTEGER local_50;
  WCHAR local_48 [4];
  ulonglong local_40;
  
  lVar1 = DAT_14c8c26e8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (longlong)DAT_14c8c26f0;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      local_48[0] = *(WCHAR *)(lVar1 + 0x18 + lVar4);
      local_48[1] = L':';
      local_48[2] = L'\\';
      local_48[3] = 0;
      BVar2 = GetDiskFreeSpaceExW(local_48,(PULARGE_INTEGER)0x0,&local_50,&local_58);
      if (BVar2 != 0) {
        ((ULARGE_INTEGER *)(lVar1 + 0x28 + lVar4))->QuadPart = (ULONGLONG)local_58;
        *(ULONGLONG *)(lVar1 + 0x20 + lVar4) = local_50.QuadPart - (longlong)local_58;
      }
      lVar4 = lVar4 + 0x38;
    } while (lVar3 * 0x38 - lVar4 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14682ff40 FUN_14682ff40 body=374 status=ok
// SIG undefined FUN_14682ff40(void)

undefined8 FUN_14682ff40(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined1 auStack_88 [40];
  longlong local_60;
  int local_58;
  longlong local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140056680(&local_40,L"Win64");
  puVar4 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar4 = (undefined2 *)*param_2;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_38 != 0) {
    puVar3 = local_40;
  }
  FUN_140002266(&local_50,L"Binaries/%s/%s",puVar3,puVar4);
  FUN_1401afab0(&local_60);
  iVar2 = local_48 + -1;
  if (local_48 == 0) {
    iVar2 = 0;
  }
  FUN_1412cfe60(param_1,&local_60,iVar2 + 1 + (uint)(local_58 == 0));
  FUN_1401aebe8(param_1,local_50,iVar2);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  FUN_145a3c032(param_1);
  if ((char)param_3 != '\x03') {
    uVar1 = FUN_1457ba796(param_3);
    puVar4 = local_40;
    if (local_38 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_50,L"-%s-%s",puVar4,uVar1);
    iVar2 = local_48 + -1;
    if (local_48 == 0) {
      iVar2 = 0;
    }
    FUN_1400020e8(param_1,local_50,iVar2);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1400020e8(param_1,L".exe",4);
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468300b8 FUN_1468300b8 body=7 status=ok
// SIG undefined FUN_1468300b8(void)

bool FUN_1468300b8(longlong param_1)

{
  return param_1 != 0;
}



// FUNCTION 1468300c0 FUN_1468300c0 body=36 status=ok
// SIG undefined FUN_1468300c0(void)

undefined8 * FUN_1468300c0(undefined8 *param_1,DWORD param_2)

{
  HANDLE pvVar1;
  
  pvVar1 = OpenProcess(0x1fffff,0,param_2);
  *param_1 = pvVar1;
  return param_1;
}



// FUNCTION 1468300e4 FUN_1468300e4 body=28 status=ok
// SIG undefined FUN_1468300e4(void)

bool FUN_1468300e4(undefined8 *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObject((HANDLE)*param_1,0);
  return DVar1 == 0x102;
}



// FUNCTION 146830100 FUN_146830100 body=35 status=ok
// SIG undefined FUN_146830100(void)

void FUN_146830100(undefined8 *param_1)

{
  if ((HANDLE)*param_1 != (HANDLE)0x0) {
    CloseHandle((HANDLE)*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 146830124 FUN_146830124 body=8 status=ok
// SIG undefined FUN_146830124(void)

void FUN_146830124(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 14683012c FUN_14683012c body=106 status=ok
// SIG undefined FUN_14683012c(void)

void FUN_14683012c(undefined8 *param_1,char param_2)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != '\0') {
    local_10 = &local_19;
    local_18 = &LAB_14279d8ee;
    FUN_14683019e();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_48);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014683015d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    TerminateProcess((HANDLE)*param_1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_8 ^ (ulonglong)auStack_48);
}



// FUNCTION 14683019e FUN_14683019e body=166 status=ok
// SIG undefined FUN_14683019e(void)

void FUN_14683019e(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  local_78 = *param_2;
  local_70 = param_2[1];
  FUN_14279b750(*param_1,&local_78,&local_68);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1468346b2(&local_68);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146830246 GetCurrentProcessId body=7 status=ok
// SIG DWORD GetCurrentProcessId(void)

DWORD __stdcall GetCurrentProcessId(void)

{
  DWORD DVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000146830246. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DVar1 = GetCurrentProcessId();
  return DVar1;
}



// FUNCTION 14683024e FUN_14683024e body=105 status=ok
// SIG undefined FUN_14683024e(void)

void FUN_14683024e(undefined8 *param_1,DWORD *param_2)

{
  BOOL BVar1;
  undefined1 auStack_48 [44];
  DWORD local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  BVar1 = GetExitCodeProcess((HANDLE)*param_1,&local_1c);
  if ((param_2 != (DWORD *)0x0) && (local_1c != 0x103 && BVar1 != 0)) {
    *param_2 = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468302b8 FUN_1468302b8 body=70 status=ok
// SIG undefined FUN_1468302b8(void)

bool FUN_1468302b8(DWORD param_1)

{
  DWORD DVar1;
  HANDLE hHandle;
  bool bVar2;
  
  bVar2 = false;
  hHandle = OpenProcess(0x100000,0,param_1);
  if (hHandle != (HANDLE)0x0) {
    DVar1 = WaitForSingleObject(hHandle,0);
    bVar2 = DVar1 == 0x102;
    CloseHandle(hHandle);
  }
  return bVar2;
}



// FUNCTION 1468302fe FUN_1468302fe body=166 status=ok
// SIG undefined FUN_1468302fe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1468302fe(undefined8 param_1,DWORD param_2)

{
  BOOL BVar1;
  HANDLE hProcess;
  undefined1 auStack_2048 [44];
  DWORD local_201c;
  WCHAR local_2018 [4096];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_2048;
  FUN_140056680(param_1,&DAT_149dfb77a);
  hProcess = OpenProcess(0x400,0,param_2);
  if (hProcess != (HANDLE)0x0) {
    local_201c = 0x1000;
    BVar1 = QueryFullProcessImageNameW(hProcess,0,local_2018,&local_201c);
    if (BVar1 != 0) {
      FUN_14020fad6(param_1,local_2018);
    }
    CloseHandle(hProcess);
  }
  if ((local_18 ^ (ulonglong)auStack_2048) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468303a6 FUN_1468303a6 body=219 status=ok
// SIG undefined FUN_1468303a6(void)

undefined8 FUN_1468303a6(LPCWSTR param_1,LPCWSTR param_2,LPDWORD param_3)

{
  BOOL BVar1;
  BOOL BVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar3;
  undefined1 auStack_a8 [32];
  SHELLEXECUTEINFOW local_88;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88.hwnd = (HWND)0x0;
  local_88.lpDirectory = (LPCWSTR)0x0;
  local_88.dwHotKey = 0;
  local_88._92_4_ = 0;
  local_88.u.hIcon = (HANDLE)0x0;
  local_88.lpClass = (LPCWSTR)0x0;
  local_88.hkeyClass = (HKEY)0x0;
  local_88.hInstApp = (HINSTANCE)0x0;
  local_88.lpIDList = (void *)0x0;
  local_88.hProcess = (HANDLE)0x0;
  local_88.cbSize = 0x70;
  local_88.fMask = 0x4040;
  local_88.lpVerb = L"runas";
  local_88.nShow = 5;
  local_88._52_4_ = 0;
  local_88.lpFile = param_1;
  local_88.lpParameters = param_2;
  BVar1 = ShellExecuteExW(&local_88);
  uVar3 = CONCAT44(extraout_var,BVar1);
  if (BVar1 != 0) {
    WaitForSingleObject(local_88.hProcess,0xffffffff);
    if (param_3 != (LPDWORD)0x0) {
      GetExitCodeProcess(local_88.hProcess,param_3);
    }
    BVar2 = CloseHandle(local_88.hProcess);
    uVar3 = CONCAT44(extraout_var_00,BVar2);
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)uVar3 >> 8),BVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146830482 FUN_146830482 body=374 status=ok
// SIG undefined FUN_146830482(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_146830482(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined2 *local_38;
  undefined8 uStack_30;
  LPVOID local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c3058) && (FUN_144b3d300(&DAT_14c8c3058), DAT_14c8c3058 == -1)) {
    DAT_14c8c3048 = (undefined2 *)0x0;
    _DAT_14c8c3050 = 0;
    atexit((_func_5014 *)&LAB_14279b983);
    _Init_thread_footer(&DAT_14c8c3058);
  }
  puVar2 = DAT_14c8c3048;
  if (DAT_14c8c3050 < 2) {
    iVar1 = SHGetKnownFolderPath(&DAT_1499d7670,0,0,&local_28);
    if (-1 < iVar1) {
      FUN_140056680(local_58,local_28);
      local_68 = 1;
      FUN_1414bc8e4(local_58,local_48,&DAT_149e01f64,&DAT_149e065c6);
      FUN_144a882a8(&local_38,local_48,&DAT_149e065c6);
      if (DAT_14c8c3048 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      DAT_14c8c3048 = local_38;
      _DAT_14c8c3050 = uStack_30;
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      CoTaskMemFree(local_28);
    }
    puVar2 = DAT_14c8c3048;
    if (DAT_14c8c3050 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar2;
}



// FUNCTION 1468305fa FUN_1468305fa body=243 status=ok
// SIG undefined FUN_1468305fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 * FUN_1468305fa(void)

{
  char cVar1;
  undefined2 *puVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8c3070) && (FUN_144b3d300(&DAT_14c8c3070), DAT_14c8c3070 == -1)) {
    DAT_14c8c3060 = (undefined2 *)0x0;
    _DAT_14c8c3068 = 0;
    atexit((_func_5014 *)&LAB_14279b994);
    _Init_thread_footer(&DAT_14c8c3070);
  }
  if (DAT_14c8c3068 < 2) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar1 = FUN_14063337c(&DAT_14c846b20,L"SaveDir=",&DAT_14c8c3060,1,0);
    if (cVar1 == '\0') {
      FUN_14020fad6(&DAT_14c8c3060,L"Borderlands 4");
    }
  }
  puVar2 = DAT_14c8c3060;
  if (DAT_14c8c3068 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  return puVar2;
}



// FUNCTION 1468306ee FUN_1468306ee body=89 status=ok
// SIG undefined FUN_1468306ee(void)

undefined2 * FUN_1468306ee(void)

{
  undefined1 auStack_38 [44];
  DWORD local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c8c3090 == 0) {
    local_c = 0x100;
    GetComputerNameW(&DAT_14c8c3090,&local_c);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c8c3090;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146830748 FUN_146830748 body=67 status=ok
// SIG undefined FUN_146830748(void)

undefined2 * FUN_146830748(void)

{
  DWORD DVar1;
  
  if (DAT_14c8c3690 == 0) {
    DVar1 = GetModuleFileNameW(DAT_14c8c26f8,&DAT_14c8c3690,0x200);
    if (DVar1 == 0) {
      DAT_14c8c3690 = 0;
    }
  }
  return &DAT_14c8c3690;
}



// FUNCTION 14683078c FUN_14683078c body=330 status=ok
// SIG undefined FUN_14683078c(void)

void FUN_14683078c(LPCWSTR param_1)

{
  char cVar1;
  LPCWSTR lpParameters;
  undefined2 *puVar2;
  undefined1 auStackY_68 [32];
  LPCWSTR local_38;
  int local_30;
  undefined2 *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStackY_68;
  FUN_140e92164();
  cVar1 = (**(code **)(DAT_14c8c2640 + 0x108))(&DAT_14c8c2640,param_1);
  if (cVar1 != '\0') {
    ShellExecuteW((HWND)0x0,L"explore",param_1,(LPCWSTR)0x0,(LPCWSTR)0x0,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStackY_68);
  }
  FUN_140056680(&local_38,param_1);
  FUN_1414bc8e4(&local_38,&local_28,&DAT_149e065c6,&DAT_149e01f64);
  if (local_38 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  puVar2 = &DAT_149dfb77a;
  if (local_20 != 0) {
    puVar2 = local_28;
  }
  FUN_140002266(&local_38,L"/select,%s",puVar2);
  lpParameters = L"";
  if (local_30 != 0) {
    lpParameters = local_38;
  }
  ShellExecuteW((HWND)0x0,L"open",L"explorer.exe",lpParameters,(LPCWSTR)0x0,1);
  if (local_38 != (LPCWSTR)0x0) {
    FUN_1400020a8();
  }
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStackY_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468308d8 FUN_1468308d8 body=21 status=ok
// SIG undefined FUN_1468308d8(void)

void FUN_1468308d8(void)

{
  do {
    Sleep(0xffffffff);
  } while( true );
}



// FUNCTION 1468308ee FUN_1468308ee body=90 status=ok
// SIG undefined FUN_1468308ee(void)

void FUN_1468308ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  HANDLE pvVar1;
  
  FUN_14490b2fc(&DAT_14c8c4544);
  pvVar1 = GetCurrentProcess();
  FUN_1468316d4(pvVar1,0);
  FUN_1467b84c0(param_1,param_2,param_3,param_4);
  FUN_144a6a7be(&DAT_14c8c4544);
  return;
}



// FUNCTION 146830948 FUN_146830948 body=97 status=ok
// SIG undefined FUN_146830948(void)

undefined8 FUN_146830948(undefined8 param_1,int param_2,undefined4 param_3,longlong param_4)

{
  HANDLE pvVar1;
  
  FUN_14490b2fc(&DAT_14c8c4544);
  pvVar1 = GetCurrentProcess();
  FUN_1468316d4(pvVar1,0);
  FUN_1467b85a8(param_1,param_2 + (uint)(param_4 == 0),param_3,param_4);
  FUN_144a6a7be(&DAT_14c8c4544);
  return param_1;
}



// FUNCTION 1468309aa FUN_1468309aa body=431 status=ok
// SIG undefined FUN_1468309aa(void)

void FUN_1468309aa(undefined8 param_1,undefined8 param_2,undefined4 param_3,DWORD param_4)

{
  BOOL BVar1;
  HANDLE pvVar2;
  undefined1 auStack_548 [32];
  undefined4 local_528 [4];
  _CONTEXT local_518;
  HANDLE local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_548;
  FUN_14490b2fc(&DAT_14c8c4544);
  pvVar2 = GetCurrentProcess();
  FUN_1468316d4(pvVar2,0);
  pvVar2 = OpenThread(0x1b,0,param_4);
  if (pvVar2 != (HANDLE)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c8c44e8) {
      FUN_144b3d300(&DAT_14c8c44e8);
      if (DAT_14c8c44e8 == -1) {
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c8c44c0);
        SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c8c44c0,4000);
        atexit((_func_5014 *)&LAB_14279bcc0);
        _Init_thread_footer(&DAT_14c8c44e8);
      }
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c8c44c0);
    SuspendThread(pvVar2);
    FUN_1403937d4(local_528);
    Sleep(9);
    FUN_140248952(local_528);
    local_528[0] = 0x5397fe56;
    memset(&local_518,0,0x4d0);
    local_518.ContextFlags = 0x100001;
    local_48 = pvVar2;
    BVar1 = GetThreadContext(pvVar2,&local_518);
    if (BVar1 != 0) {
      FUN_1467b83d4(param_1,param_2,param_3,local_528);
    }
    ResumeThread(pvVar2);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c8c44c0);
  }
  FUN_144a6a7be(&DAT_14c8c4544);
  if ((local_38 ^ (ulonglong)auStack_548) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146830b5a FUN_146830b5a body=372 status=ok
// SIG undefined FUN_146830b5a(void)

void FUN_146830b5a(longlong param_1,uint param_2,void *param_3,undefined8 param_4,uint *param_5,
                  char param_6)

{
  undefined8 uVar1;
  int iVar2;
  HANDLE pvVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_618 [152];
  undefined8 local_580;
  longlong local_578;
  undefined8 local_520;
  undefined8 local_148;
  undefined4 local_13c;
  longlong local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  
  if ((param_6 == '\0') && (FUN_1467ff424(param_1,param_2,param_3,param_4,param_5), *param_5 != 0))
  {
    return;
  }
  pvVar3 = GetCurrentProcess();
  FUN_1468316d4(pvVar3,0);
  uVar1 = DAT_14c75d690;
  memcpy(local_618,param_3,0x4d0);
  *param_5 = 0;
  FUN_1468339a4(&local_148);
  local_13c = 3;
  local_10c = 3;
  local_11c = 3;
  local_148 = local_520;
  local_118 = local_580;
  local_128 = local_578;
  uVar5 = 0;
  while( true ) {
    if (param_2 <= uVar5) {
      return;
    }
    iVar2 = StackWalk64(0x8664,uVar1,param_4,&local_148,local_618,0,SymFunctionTableAccess64_exref,
                        SymGetModuleBase64_exref,0);
    if (iVar2 == 0) break;
    if (local_128 == 0) goto LAB_146830cad;
    uVar4 = (ulonglong)uVar5;
    uVar5 = uVar5 + 1;
    *(undefined8 *)(param_1 + uVar4 * 8) = local_148;
    *param_5 = uVar5;
  }
  GetLastError();
LAB_146830cad:
  memset((void *)(param_1 + (ulonglong)uVar5 * 8),0,(ulonglong)(~uVar5 + param_2) * 8 + 8);
  return;
}



// FUNCTION 146830cd4 FUN_146830cd4 body=403 status=ok
// SIG undefined FUN_146830cd4(void)

int FUN_146830cd4(ulonglong param_1,longlong param_2,int param_3,longlong param_4)

{
  HANDLE pvVar1;
  DWORD DVar2;
  BOOL BVar3;
  int iVar4;
  HANDLE hThread;
  HANDLE pvVar5;
  _CONTEXT *p_Var6;
  bool bVar7;
  undefined1 auStack_548 [32];
  int *local_528;
  undefined1 local_520;
  int local_50c;
  _CONTEXT local_508;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_548;
  FUN_14490b2fc(&DAT_14c8c4544);
  iVar4 = 0;
  if ((param_3 == 0 || param_2 == 0) ||
     ((DVar2 = GetCurrentThreadId(), DVar2 == param_1 &&
      (iVar4 = FUN_146830e68(param_2,param_3,0), iVar4 != 0)))) goto LAB_146830d1e;
  hThread = OpenThread(0x1b,0,(DWORD)param_1);
  iVar4 = 0;
  if ((hThread == (HANDLE)0x0) ||
     (DVar2 = SuspendThread(hThread), pvVar1 = DAT_14c75d690, DVar2 == 0xffffffff))
  goto LAB_146830d1e;
  if (DAT_14c75d690 == (HANDLE)0xffffffffffffffff) {
    bVar7 = false;
  }
  else {
    pvVar5 = GetCurrentProcess();
    bVar7 = pvVar1 != pvVar5;
  }
  local_50c = 0;
  if (param_4 == 0) {
    memset(&local_508,0,0x4d0);
    local_508.ContextFlags = 0x100001;
    BVar3 = GetThreadContext(hThread,&local_508);
    if (BVar3 != 0) {
      p_Var6 = &local_508;
      goto LAB_146830e43;
    }
  }
  else {
    *(HANDLE *)(param_4 + 0x4e0) = hThread;
    p_Var6 = (_CONTEXT *)(param_4 + 0x10);
LAB_146830e43:
    local_528 = &local_50c;
    local_520 = bVar7;
    FUN_146830b5a(param_2,param_3,p_Var6,hThread);
  }
  ResumeThread(hThread);
  CloseHandle(hThread);
  iVar4 = local_50c;
LAB_146830d1e:
  FUN_144a6a7be(&DAT_14c8c4544);
  if ((local_38 ^ (ulonglong)auStack_548) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 146830e68 FUN_146830e68 body=347 status=ok
// SIG undefined FUN_146830e68(void)

ulonglong FUN_146830e68(longlong param_1,uint param_2,longlong param_3)

{
  ushort uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_468 [32];
  uint *local_448;
  uint local_43c;
  undefined8 local_438 [129];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_468;
  FUN_14490b2fc(&DAT_14c8c4544);
  uVar4 = 0;
  if (param_2 == 0 || param_1 == 0) goto LAB_146830eac;
  local_43c = 0;
  if (param_3 != 0) {
    local_448 = &local_43c;
    FUN_1467ff424(param_1,param_2,param_3 + 0x10,*(undefined8 *)(param_3 + 0x4e0));
    uVar4 = (ulonglong)local_43c;
    goto LAB_146830eac;
  }
  if (DAT_14c8c44b9 == '\x01') {
    uVar2 = 0x3e;
    if (DAT_14c8c44b8 != '\0') {
      uVar2 = 0x80;
    }
  }
  else {
    DAT_14c8c44b8 = '\x01';
    DAT_14c8c44b9 = '\x01';
    uVar2 = 0x80;
  }
  if (param_2 <= uVar2) {
    uVar2 = param_2;
  }
  uVar1 = RtlCaptureStackBackTrace(0,uVar2,local_438,0);
  if (uVar1 == 0) {
    uVar4 = 0;
    uVar1 = RtlCaptureStackBackTrace(0,uVar2,local_438,0);
    if (uVar1 != 0) goto LAB_146830f63;
    OutputDebugStringW(L"RtlCaptureStackBackTrace failed; returning an empty backtrace.");
    uVar1 = 0;
  }
  else {
LAB_146830f63:
    uVar4 = (ulonglong)uVar1;
    uVar3 = 0;
    do {
      *(undefined8 *)(param_1 + uVar3 * 8) = local_438[uVar3];
      uVar3 = uVar3 + 1;
    } while (uVar4 != uVar3);
  }
  uVar2 = (uint)uVar4;
  while (uVar2 < param_2) {
    uVar3 = (ulonglong)uVar1;
    uVar1 = uVar1 + 1;
    *(undefined8 *)(param_1 + uVar3 * 8) = 0;
    uVar2 = (uint)uVar1;
  }
LAB_146830eac:
  FUN_144a6a7be(&DAT_14c8c4544);
  if ((local_30 ^ (ulonglong)auStack_468) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146830fc4 FUN_146830fc4 body=538 status=ok
// SIG undefined FUN_146830fc4(void)

void FUN_146830fc4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  HANDLE pvVar4;
  size_t sVar5;
  char *_Source;
  undefined1 auStack_b68 [32];
  undefined8 local_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  char *pcStack_b30;
  undefined8 local_b28;
  undefined4 local_b18;
  undefined4 uStack_b14;
  char local_ad4 [1612];
  undefined4 local_488 [20];
  undefined4 local_438;
  char local_434 [1028];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b68;
  FUN_14490b2fc(&DAT_14c8c4544);
  pvVar4 = GetCurrentProcess();
  FUN_1468316d4(pvVar4,0);
  FUN_14279bcce(&local_b18);
  FUN_1468311df(param_1,&local_b18,0);
  if (CONCAT44(uStack_b14,local_b18) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(param_2 + 0xc10) = param_1;
  uVar2 = DAT_14c75d690;
  memset(local_488,0,0x458);
  local_488[0] = 0x58;
  local_438 = 0x400;
  iVar3 = SymFromAddr(uVar2,param_1,0,local_488);
  if (iVar3 == 0) {
    GetLastError();
  }
  else {
    _Source = (char *)((longlong)&local_438 + 3);
    do {
      pcVar1 = _Source + 1;
      _Source = _Source + 1;
    } while (*pcVar1 < ' ');
    pcVar1 = param_2 + 0x400;
    strncpy(pcVar1,_Source,0x400);
    param_2[0x7ff] = '\0';
    sVar5 = strlen(pcVar1);
    iVar3 = (int)sVar5;
    if (iVar3 < 0x400) {
      strncpy(pcVar1 + iVar3,"()",(ulonglong)(0x400 - iVar3));
      (pcVar1 + iVar3)[(ulonglong)(0x400 - iVar3) - 1] = '\0';
    }
  }
  uStack_b40 = 0;
  local_b38 = 0;
  pcStack_b30 = (char *)0x0;
  local_b28 = 0;
  local_b48 = 0x28;
  iVar3 = SymGetLineFromAddr64(uVar2,param_1,param_2 + 0xc04);
  if (iVar3 == 0) {
    GetLastError();
  }
  else {
    strncpy(param_2 + 0x800,pcStack_b30,0x400);
    param_2[0xbff] = '\0';
    *(undefined4 *)(param_2 + 0xc00) = (undefined4)local_b38;
  }
  memset(&local_b18,0,0x690);
  local_b18 = 0x690;
  iVar3 = SymGetModuleInfo64(uVar2,param_1,&local_b18);
  if (iVar3 == 0) {
    GetLastError();
  }
  else {
    strncpy(param_2,local_ad4,0x400);
    param_2[0x3ff] = '\0';
  }
  FUN_144a6a7be(&DAT_14c8c4544);
  if ((local_30 ^ (ulonglong)auStack_b68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468311df FUN_1468311df body=267 status=ok
// SIG undefined FUN_1468311df(void)

void FUN_1468311df(LPCWSTR param_1,undefined8 param_2,char param_3)

{
  BOOL BVar1;
  int iVar2;
  undefined1 auStack_6f8 [32];
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  HMODULE local_6b8;
  undefined4 local_6b0 [8];
  int local_690;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_6f8;
  FUN_14490b2fc(&DAT_14c8c4544);
  local_6b8 = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(6,param_1,&local_6b8);
  if (BVar1 != 0) {
    if (param_3 != '\0') {
      memset(local_6b0,0,0x690);
      local_6b0[0] = 0x690;
      iVar2 = SymGetModuleInfo64(DAT_14c75d690,param_1,local_6b0);
      if ((iVar2 != 0) && (local_690 == 0)) {
        local_6d8 = 0;
        uStack_6d0 = 0;
        local_6c8 = 0;
        (*DAT_14c8c4500)(DAT_14c75d690,local_6b8,&local_6d8,0x18);
        SymUnloadModule64(DAT_14c75d690,local_6d8);
      }
    }
    FUN_14279be4b(local_6b8,param_2);
  }
  FUN_144a6a7be(&DAT_14c8c4544);
  if ((local_20 ^ (ulonglong)auStack_6f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468312eb FUN_1468312eb body=198 status=ok
// SIG undefined FUN_1468312eb(void)

longlong FUN_1468312eb(undefined8 param_1)

{
  char cVar1;
  HANDLE pvVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pvVar2 = GetCurrentProcess();
  FUN_1468316d4(pvVar2,0);
  local_34 = 0;
  cVar1 = (*DAT_14c8c44f0)(DAT_14c75d690,0,0,&local_34);
  uVar4 = (ulonglong)(local_34 & 0xfffffff8);
  if (cVar1 == '\0') {
    uVar4 = 0;
  }
  lVar3 = FUN_14001cc68(uVar4 + 8,0);
  local_34 = 0;
  cVar1 = (*DAT_14c8c44f0)(param_1,lVar3,uVar4,&local_34);
  if (cVar1 == '\0') {
    FUN_1400020a8(lVar3);
  }
  else if (local_34 <= (uint)uVar4) {
    *(undefined8 *)(lVar3 + (ulonglong)(local_34 & 0xfffffff8)) = 0;
    goto LAB_14683138c;
  }
  lVar3 = 0;
LAB_14683138c:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468313b2 FUN_1468313b2 body=108 status=ok
// SIG undefined FUN_1468313b2(void)

uint FUN_1468313b2(void)

{
  char cVar1;
  uint uVar2;
  HANDLE pvVar3;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pvVar3 = GetCurrentProcess();
  FUN_1468316d4(pvVar3,0);
  local_1c = 0;
  cVar1 = (*DAT_14c8c44f0)(DAT_14c75d690,0,0,&local_1c);
  uVar2 = local_1c >> 3;
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146831420 FUN_146831420 body=375 status=ok
// SIG undefined FUN_146831420(void)

longlong * FUN_146831420(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = &DAT_14c872aa8;
  cVar1 = FUN_1449da20c(DAT_14c872ce0,L"/Script/UnrealEd.CrashReporterSettings",L"DownstreamStorage"
                        ,param_1);
  if ((cVar1 == '\0') || ((int)param_1[1] < 2)) {
    FUN_140056680(local_48,L"Symbols");
    FUN_14626c06e(local_58);
    FUN_146818a2a(&local_38,local_58,local_48);
    if (&local_38 == param_1) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
  }
  else {
    FUN_140d6b9b4(local_48);
    FUN_14681897e(&local_38,local_48,param_1);
    local_58[0] = local_38;
    if (&local_38 != param_1) {
      if (*param_1 != 0) {
        FUN_1400020a8();
      }
      *param_1 = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_30._4_4_;
      local_30 = 0;
      goto LAB_146831545;
    }
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
LAB_146831545:
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_145a3c032(param_1);
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146831598 FUN_146831598 body=314 status=ok
// SIG undefined FUN_146831598(void)

undefined8 * FUN_146831598(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = &DAT_14c872aa8;
  FUN_14105aa76(DAT_14c872ce0,L"/Script/UnrealEd.CrashReporterSettings",L"RemoteStorage",&local_68);
  uVar1 = uStack_60 & 0xffffffff;
  if ((int)uStack_60 < 1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
    lVar4 = 8;
    lVar3 = 0;
    do {
      if (lVar3 != 0) {
        FUN_140002184(param_1,CONCAT62((int6)(uVar1 >> 0x10),0x3b));
      }
      FUN_1400020e8(param_1,L"SRV*",4);
      iVar2 = *(int *)(param_2 + 1) + -1;
      if (*(int *)(param_2 + 1) == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_1,*param_2,iVar2);
      FUN_140002184(param_1,0x2a);
      iVar2 = *(int *)(local_68 + lVar4) + -1;
      if (*(int *)(local_68 + lVar4) == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_1,*(undefined8 *)(local_68 + -8 + lVar4),iVar2);
      lVar3 = lVar3 + 1;
      uVar1 = (ulonglong)(int)uStack_60;
      lVar4 = lVar4 + 0x10;
    } while (lVar3 < (longlong)uVar1);
  }
  FUN_1447a1747(local_68);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468316d4 FUN_1468316d4 body=412 status=ok
// SIG undefined FUN_1468316d4(void)

ulonglong FUN_1468316d4(longlong param_1,char param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  FUN_14490b2fc(&DAT_14c8c4544);
  lVar1 = param_1;
  if (DAT_14c8c4510 == 1) {
    if (DAT_14c75d690 == param_1) {
      uVar2 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      lVar1 = DAT_14c75d690;
      if (DAT_14c8c4511 == '\0') goto LAB_146831845;
      goto LAB_146831727;
    }
    if (param_2 != '\0') {
      SymCleanup();
      DAT_14c8c4510 = 0;
      DAT_14c8c4511 = '\0';
      lVar1 = param_1;
      goto LAB_146831727;
    }
LAB_146831843:
    uVar2 = 0;
  }
  else {
LAB_146831727:
    DAT_14c75d690 = lVar1;
    if (DAT_14c8c4512 != '\x01') {
      DAT_14c8c4512 = '\x01';
      lVar1 = FUN_14155261e(L"PSAPI.DLL");
      if (lVar1 == 0) goto LAB_146831843;
      DAT_14c8c4518 = FUN_14170ce66(lVar1,L"EnumProcesses");
      DAT_14c8c44f0 = FUN_14170ce66(lVar1,L"EnumProcessModules");
      DAT_14c8c44f8 = FUN_14170ce66(lVar1,L"GetModuleFileNameExW");
      DAT_14c8c4508 = FUN_14170ce66(lVar1,L"GetModuleBaseNameW");
      DAT_14c8c4500 = FUN_14170ce66(lVar1,L"GetModuleInformation");
    }
    uVar2 = 0;
    if ((((DAT_14c8c4518 != 0) && (DAT_14c8c44f0 != 0)) && (DAT_14c8c44f8 != 0)) &&
       ((uVar2 = 0, DAT_14c8c4508 != 0 && (DAT_14c8c4500 != 0)))) {
      if (DAT_14c8c4510 == 1) {
        uVar2 = 1;
        if (DAT_14c8c4511 != '\x01') goto LAB_146831845;
        SymCleanup(DAT_14c75d690);
      }
      FUN_14279c5a6();
      uVar2 = (ulonglong)DAT_14c8c4510;
    }
  }
LAB_146831845:
  FUN_144a6a7be(&DAT_14c8c4544);
  return uVar2 & 0xffffff01;
}



// FUNCTION 146831870 FUN_146831870 body=1519 status=ok
// SIG undefined FUN_146831870(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_146831870(undefined8 *param_1,ulonglong param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  DWORD DVar3;
  int iVar4;
  HANDLE hFile;
  longlong lVar5;
  LPCWSTR lpFileName;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *_Dst;
  undefined1 auStackY_d88 [32];
  undefined1 local_cd4 [12];
  int local_cc8;
  LONG local_cbc;
  DWORD local_cb8;
  char local_cb4;
  char local_cb3;
  char local_cb2;
  char local_cb1;
  char local_cb0;
  char local_caf;
  char local_cae;
  char local_cad;
  undefined8 local_cac;
  undefined8 uStack_ca4;
  undefined8 local_b98;
  undefined4 uStack_b90;
  uint auStack_b8c [637];
  short local_198 [30];
  LONG local_15c;
  short local_158;
  ushort local_156;
  short local_144 [80];
  uint local_a4;
  int local_a0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_d88;
  if (0 < (longlong)DAT_14c8c44b0) {
    lVar6 = 0;
    do {
      if ((*(ulonglong *)(DAT_14c8c44a8 + lVar6) <= param_2) &&
         (param_2 < *(ulonglong *)(DAT_14c8c44a8 + lVar6) +
                    (ulonglong)*(uint *)(DAT_14c8c44a8 + 8 + lVar6))) {
        if (*(char *)(DAT_14c8c44a8 + 0x30 + lVar6) != '\0') goto LAB_14683190a;
        if (*(int *)(DAT_14c8c44a8 + 0x18 + lVar6) == 0) {
          lpFileName = L"";
        }
        else {
          lpFileName = *(LPCWSTR *)(DAT_14c8c44a8 + 0x10 + lVar6);
        }
        hFile = CreateFileW(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
        if (hFile == (HANDLE)0xffffffffffffffff) goto LAB_14683190a;
        DVar3 = GetFileSize(hFile,(LPDWORD)0x0);
        memset(local_198,0,0x144);
        local_cb8 = 0;
        ReadFile(hFile,local_198,0x40,&local_cb8,(LPOVERLAPPED)0x0);
        if ((local_cb8 != 0x40) || (local_198[0] != 0x5a4d)) goto LAB_14683190a;
        SetFilePointer(hFile,local_15c,(PLONG)0x0,0);
        ReadFile(hFile,&local_cb4,4,&local_cb8,(LPOVERLAPPED)0x0);
        if ((((local_cb8 != 4) ||
             (((local_cb4 != 'P' || (local_cb3 != 'E')) || (local_cb2 != '\0')))) ||
            (((local_cb1 != '\0' ||
              (ReadFile(hFile,&local_158,0x14,&local_cb8,(LPOVERLAPPED)0x0), local_cb8 != 0x14)) ||
             (local_158 != -0x799c)))) ||
           ((ReadFile(hFile,local_144,0xf0,&local_cb8,(LPOVERLAPPED)0x0), local_cb8 != 0xf0 ||
            (local_144[0] != 0x20b)))) goto LAB_14683190a;
        _Dst = (undefined4 *)&local_b98;
        memset(_Dst,0,0xa00);
        if (0x40 < local_156) goto LAB_14683190a;
        if (local_156 != 0) {
          uVar7 = 0;
          goto LAB_146831ca2;
        }
        iVar4 = 0;
        goto LAB_146831d5a;
      }
      lVar6 = lVar6 + 0x38;
    } while ((longlong)DAT_14c8c44b0 * 0x38 - lVar6 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStackY_d88);
  while( true ) {
    uVar7 = uVar7 + 1;
    _Dst = _Dst + 10;
    if (local_156 <= uVar7) break;
LAB_146831ca2:
    ReadFile(hFile,_Dst,0x28,&local_cb8,(LPOVERLAPPED)0x0);
    if (local_cb8 != 0x28) goto LAB_14683190a;
  }
  if ((ulonglong)local_156 != 0) {
    lVar5 = 0;
    do {
      uVar2 = *(uint *)((longlong)auStack_b8c + lVar5);
      if ((uVar2 <= local_a4) &&
         (local_a0 + local_a4 <= *(int *)((longlong)auStack_b8c + lVar5 + 4) + uVar2)) {
        iVar4 = *(int *)((longlong)auStack_b8c + lVar5 + 8) - uVar2;
        goto LAB_146831d5a;
      }
      lVar5 = lVar5 + 0x28;
    } while ((ulonglong)local_156 * 0x28 != lVar5);
  }
  iVar4 = 0;
LAB_146831d5a:
  if ((ulonglong)(local_a4 + iVar4) + 0x1c < (ulonglong)DVar3) {
    SetFilePointer(hFile,local_a4 + iVar4,(PLONG)0x0,0);
    local_cb8 = 0;
    ReadFile(hFile,local_cd4,0x1c,&local_cb8,(LPOVERLAPPED)0x0);
    if (local_cc8 == 2) {
      SetFilePointer(hFile,local_cbc,(PLONG)0x0,0);
      ReadFile(hFile,&local_cb0,0x118,&local_cb8,(LPOVERLAPPED)0x0);
      if ((((local_cb0 == 'R') && (local_caf == 'S')) && (local_cae == 'D')) && (local_cad == 'S'))
      {
        puVar1 = (undefined8 *)(DAT_14c8c44a8 + 0x20 + lVar6);
        *puVar1 = local_cac;
        puVar1[1] = uStack_ca4;
        *(undefined1 *)(DAT_14c8c44a8 + 0x30 + lVar6) = 1;
      }
    }
  }
LAB_14683190a:
  *param_1 = 0;
  param_1[1] = 0;
  if (*(char *)(DAT_14c8c44a8 + 0x30 + lVar6) == '\x01') {
    FUN_140002266(&local_b98,
                  L"0x%016llx %02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X",
                  *(undefined8 *)(DAT_14c8c44a8 + lVar6),
                  *(uint *)(DAT_14c8c44a8 + 0x20 + lVar6) >> 0x18);
    if (&local_b98 == param_1) {
      if (CONCAT44(local_b98._4_4_,(undefined4)local_b98) != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *(undefined4 *)param_1 = (undefined4)local_b98;
      *(undefined4 *)((longlong)param_1 + 4) = local_b98._4_4_;
      *(undefined4 *)(param_1 + 1) = uStack_b90;
      *(uint *)((longlong)param_1 + 0xc) = auStack_b8c[0];
    }
  }
  if ((local_48 ^ (ulonglong)auStackY_d88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146831e60 FUN_146831e60 body=38 status=ok
// SIG undefined FUN_146831e60(void)

undefined8 FUN_146831e60(undefined8 param_1,int param_2)

{
  FUN_144a8720c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146831e86 FUN_146831e86 body=38 status=ok
// SIG undefined FUN_146831e86(void)

undefined8 FUN_146831e86(undefined8 param_1,int param_2)

{
  FUN_14682ec20();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146831ee2 FUN_146831ee2 body=38 status=ok
// SIG undefined FUN_146831ee2(void)

undefined8 FUN_146831ee2(undefined8 param_1,int param_2)

{
  FUN_14279d09c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146831f0a FUN_146831f0a body=38 status=ok
// SIG undefined FUN_146831f0a(void)

undefined8 FUN_146831f0a(undefined8 param_1,int param_2)

{
  FUN_1427964c0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146831f30 FUN_146831f30 body=82 status=ok
// SIG undefined FUN_146831f30(void)

void FUN_146831f30(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_2 < *(longlong *)(param_1 + 0x10)) {
    FUN_14016c8d4();
    lVar1 = *(longlong *)(param_1 + 0x10) - param_2;
    if (param_3 <= lVar1) {
      lVar1 = param_3;
    }
    if (0 < lVar1) {
      uVar3 = param_2 + *(longlong *)(param_1 + 8);
      uVar2 = lVar1 + uVar3;
      do {
        uVar3 = uVar3 + DAT_14c75d658;
      } while (uVar3 < uVar2);
    }
  }
  return;
}



// FUNCTION 146831f82 FUN_146831f82 body=29 status=ok
// SIG undefined FUN_146831f82(void)

undefined8 FUN_146831f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146831fa6 FUN_146831fa6 body=91 status=ok
// SIG undefined FUN_146831fa6(void)

longlong * FUN_146831fa6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar1[1] = 0;
  *(undefined4 *)(plVar1 + 2) = 1;
  lVar2 = Ordinal_2(L"ROOT\\microsoft\\windows\\storage");
  *plVar1 = lVar2;
  if ((lVar2 != 0) && (*param_1 = (longlong)plVar1, plVar1 != (longlong *)0x0)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e380(0x8007000e);
}



// FUNCTION 146832002 FUN_146832002 body=86 status=ok
// SIG undefined FUN_146832002(void)

longlong * FUN_146832002(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 1;
  uVar2 = FUN_144d8e1e0(param_2);
  *puVar1 = uVar2;
  *param_1 = (longlong)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e380(0x8007000e);
}



// FUNCTION 14683205a FUN_14683205a body=57 status=ok
// SIG undefined FUN_14683205a(void)

void FUN_14683205a(longlong *param_1)

{
  if (*param_1 != 0) {
    Ordinal_6();
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    thunk_FUN_1400020a8();
    param_1[1] = 0;
  }
  return;
}



// FUNCTION 14683209a FUN_14683209a body=101 status=ok
// SIG undefined FUN_14683209a(void)

void FUN_14683209a(HWND param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_2 == 0x110) {
    *(HWND *)(param_4 + 0x28) = param_1;
    SetWindowLongPtrW(param_1,0x10,param_4);
    lVar1 = param_4;
  }
  else {
    lVar1 = GetWindowLongPtrW(param_1,0x10);
  }
  FUN_146832100(lVar1,param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 146832100 FUN_146832100 body=1024 status=ok
// SIG undefined FUN_146832100(void)

HBRUSH FUN_146832100(longlong param_1,HWND param_2,int param_3,HDC param_4,HWND param_5)

{
  int iVar1;
  int iVar2;
  HDC hDC;
  HBRUSH pHVar3;
  HWND pHVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auStackY_108 [32];
  RECT local_b8;
  undefined1 local_a8 [12];
  int local_9c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStackY_108;
  if (param_3 < 0x110) {
    if (param_3 < 0x10) {
      if (param_3 != 2) {
        if (param_3 != 5) {
          if (param_3 == 0xf) {
            hDC = BeginPaint(param_2,(LPPAINTSTRUCT)local_a8);
            fVar6 = (float)FUN_14683300c(param_2);
            local_b8.left = *(LONG *)(param_1 + 0x30);
            local_b8.top = *(LONG *)(param_1 + 0x34);
            local_b8.right = *(LONG *)(param_1 + 0x38);
            local_b8.bottom = *(int *)(param_1 + 0x3c) - (int)(fVar6 * 45.0);
            pHVar3 = GetSysColorBrush(5);
            FillRect(hDC,&local_b8,pHVar3);
            EndPaint(param_2,(LPPAINTSTRUCT)local_a8);
          }
          goto LAB_1468322c1;
        }
        iVar1 = *(int *)(param_1 + 0x38);
        iVar2 = *(int *)(param_1 + 0x3c);
        GetClientRect(param_2,(LPRECT)(param_1 + 0x30));
        pHVar4 = GetDlgItem(param_2,0x3ed);
        if (pHVar4 != (HWND)0x0) {
          GetWindowRect(pHVar4,(LPRECT)local_a8);
          ScreenToClient(param_2,(LPPOINT)local_a8);
          ScreenToClient(param_2,(LPPOINT)(local_a8 + 8));
          SetWindowPos(pHVar4,(HWND)0x0,local_a8._0_4_,local_a8._4_4_,
                       (local_a8._8_4_ - (iVar1 + local_a8._0_4_)) + *(int *)(param_1 + 0x38),
                       (local_9c - (iVar2 + local_a8._4_4_)) + *(int *)(param_1 + 0x3c),4);
        }
        lVar5 = 0;
        do {
          pHVar4 = GetDlgItem(param_2,*(int *)((longlong)&DAT_149e40a70 + lVar5));
          if (pHVar4 != (HWND)0x0) {
            GetWindowRect(pHVar4,(LPRECT)local_a8);
            ScreenToClient(param_2,(LPPOINT)local_a8);
            ScreenToClient(param_2,(LPPOINT)(local_a8 + 8));
            SetWindowPos(pHVar4,(HWND)0x0,(local_a8._0_4_ - iVar1) + *(int *)(param_1 + 0x38),
                         (local_a8._4_4_ - iVar2) + *(int *)(param_1 + 0x3c),
                         local_a8._8_4_ - local_a8._0_4_,local_9c - local_a8._4_4_,4);
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != 0x20);
        uVar7 = FUN_14683300c(param_2);
        pHVar4 = GetDlgItem(param_2,0x3ed);
        FUN_14683306e(param_1,pHVar4,uVar7);
        InvalidateRect(param_2,(RECT *)0x0,1);
      }
    }
    else {
      if (param_3 == 0x10) {
        *(undefined1 *)(param_1 + 0x50) = 1;
        goto LAB_146832269;
      }
      if (param_3 != 0x24) goto LAB_1468322c1;
      param_5[6].unused = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x40);
      param_5[7].unused = *(int *)(param_1 + 0x4c) - *(int *)(param_1 + 0x44);
    }
    goto LAB_146832273;
  }
  if (0x137 < param_3) {
    if (param_3 == 0x138) {
      pHVar4 = GetDlgItem(param_2,0x3ed);
      if (pHVar4 == param_5) {
        SetBkMode(param_4,1);
        pHVar3 = GetSysColorBrush(5);
        goto switchD_146832256_caseD_3ed;
      }
    }
    else {
      pHVar3 = (HBRUSH)&DAT_00000001;
      if (param_3 == 0x2e0) goto switchD_146832256_caseD_3ed;
    }
LAB_1468322c1:
    pHVar3 = (HBRUSH)0x0;
    goto switchD_146832256_caseD_3ed;
  }
  if (param_3 != 0x111) {
    if (param_3 != 0x110) goto LAB_1468322c1;
    FUN_146832502(param_1);
    goto LAB_146832273;
  }
  pHVar3 = (HBRUSH)0x0;
  switch((uint)param_4 & 0xffff) {
  case 1000:
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 5;
    break;
  case 0x3e9:
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 2;
    break;
  case 0x3ea:
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 3;
    break;
  case 0x3eb:
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 1;
    break;
  case 0x3ec:
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 0;
    break;
  default:
    goto switchD_146832256_caseD_3ed;
  case 0x3ee:
    if (*(char *)(param_1 + 0x20) == '\x01') {
      *(undefined1 *)(param_1 + 0x50) = 1;
      *(undefined4 *)(param_1 + 0x54) = 4;
      break;
    }
    goto LAB_146832273;
  case 0x3ef:
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 6;
    break;
  case 0x3f0:
    *(undefined1 *)(param_1 + 0x50) = 1;
    *(undefined4 *)(param_1 + 0x54) = 7;
    break;
  case 0x3f1:
    FUN_146832f5c(param_1,param_2);
    goto LAB_146832273;
  }
LAB_146832269:
  DestroyWindow(*(HWND *)(param_1 + 0x28));
LAB_146832273:
  pHVar3 = (HBRUSH)&DAT_00000001;
switchD_146832256_caseD_3ed:
  if ((local_60 ^ (ulonglong)auStackY_108) == DAT_14c707940) {
    return pHVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146832502 FUN_146832502 body=2649 status=ok
// SIG undefined FUN_146832502(void)

void FUN_146832502(undefined8 *param_1)

{
  HWND pHVar1;
  HWND hWnd;
  undefined8 uVar2;
  HMONITOR hMonitor;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  LPCWSTR lpString;
  int iVar7;
  LPCWSTR lpString_00;
  int iVar8;
  code *pcVar9;
  float fVar10;
  undefined1 auStackY_148 [32];
  undefined8 local_108;
  LONG local_100;
  int local_fc;
  int local_f8;
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  undefined2 *local_d8;
  undefined8 uStack_d0;
  undefined2 *local_c8;
  undefined8 uStack_c0;
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  undefined8 uStack_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  int local_58;
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStackY_148;
  GetWindowRect((HWND)param_1[5],(LPRECT)(param_1 + 8));
  GetClientRect((HWND)param_1[5],(LPRECT)(param_1 + 6));
  *(undefined1 *)(param_1 + 10) = 0;
  iVar7 = *(int *)(param_1 + 7);
  iVar6 = *(int *)((longlong)param_1 + 0x3c);
  fVar10 = (float)FUN_14683300c(param_1[5]);
  local_54 = iVar7 - (int)(fVar10 * 5.0);
  local_58 = iVar6 - (int)(fVar10 * 10.0);
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  local_78 = (undefined2 *)0x0;
  uStack_70 = 0;
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  local_a8 = (undefined2 *)0x0;
  uStack_a0 = 0;
  local_b8 = (undefined2 *)0x0;
  uStack_b0 = 0;
  local_c8 = (undefined2 *)0x0;
  uStack_c0 = 0;
  local_d8 = (undefined2 *)0x0;
  uStack_d0 = 0;
  if (DAT_14c872ce0 == 0) {
    FUN_14020fad6(&local_68,L"Cancel");
    FUN_14020fad6(&local_78,L"Retry");
    FUN_14020fad6(&local_88,L"Continue");
    FUN_14020fad6(&local_98,L"No to All");
    FUN_14020fad6(&local_a8,&DAT_149e06338);
    FUN_14020fad6(&local_b8,L"Yes to All");
    FUN_14020fad6(&local_c8,&DAT_149e06384);
    FUN_14020fad6(&local_d8,&DAT_149e1d814);
  }
  else {
    local_108 = L"Cancel";
    local_100 = 6;
    FUN_1446e940c(local_dc,&local_108);
    local_108 = L"UnrealEd";
    local_100 = 8;
    FUN_1446e940c(local_e0,&local_108);
    FUN_140208bae(&local_108,local_e0,local_dc,L"Cancel");
    uVar2 = FUN_1447a1f4a(&local_108);
    FUN_144a787a6(&local_68,uVar2);
    if (local_108 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_108 + 0x10))();
    }
    local_108 = L"Retry";
    local_100 = 5;
    FUN_1446e940c(local_dc,&local_108);
    local_108 = L"UnrealEd";
    local_100 = 8;
    FUN_1446e940c(local_e0,&local_108);
    FUN_140208bae(&local_108,local_e0,local_dc,L"Retry");
    uVar2 = FUN_1447a1f4a(&local_108);
    FUN_144a787a6(&local_78,uVar2);
    if (local_108 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_108 + 0x10))();
    }
    local_108 = L"Continue";
    local_100 = 8;
    FUN_1446e940c(local_dc,&local_108);
    local_108 = L"UnrealEd";
    local_100 = 8;
    FUN_1446e940c(local_e0,&local_108);
    FUN_140208bae(&local_108,local_e0,local_dc,L"Continue");
    uVar2 = FUN_1447a1f4a(&local_108);
    FUN_144a787a6(&local_88,uVar2);
    if (local_108 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_108 + 0x10))();
    }
    local_108 = L"NoToAll";
    local_100 = 7;
    FUN_1446e940c(local_dc,&local_108);
    local_108 = L"UnrealEd";
    local_100 = 8;
    FUN_1446e940c(local_e0,&local_108);
    FUN_140208bae(&local_108,local_e0,local_dc,L"No to All");
    uVar2 = FUN_1447a1f4a(&local_108);
    FUN_144a787a6(&local_98,uVar2);
    if (local_108 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_108 + 0x10))();
    }
    local_108 = &DAT_149e06338;
    local_100 = 2;
    FUN_1446e940c(local_dc,&local_108);
    local_108 = L"UnrealEd";
    local_100 = 8;
    FUN_1446e940c(local_e0,&local_108);
    FUN_140208bae(&local_108,local_e0,local_dc,&DAT_149e06338);
    uVar2 = FUN_1447a1f4a(&local_108);
    FUN_144a787a6(&local_a8,uVar2);
    if (local_108 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_108 + 0x10))();
    }
    local_108 = L"YesToAll";
    local_100 = 8;
    FUN_1446e940c(local_dc,&local_108);
    local_108 = L"UnrealEd";
    local_100 = 8;
    FUN_1446e940c(local_e0,&local_108);
    FUN_140208bae(&local_108,local_e0,local_dc,L"Yes to All");
    uVar2 = FUN_1447a1f4a(&local_108);
    FUN_144a787a6(&local_b8,uVar2);
    if (local_108 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_108 + 0x10))();
    }
    local_108 = &DAT_149e06384;
    local_100 = 3;
    FUN_1446e940c(local_dc,&local_108);
    local_108 = L"UnrealEd";
    local_100 = 8;
    FUN_1446e940c(local_e0,&local_108);
    FUN_140208bae(&local_108,local_e0,local_dc,&DAT_149e06384);
    uVar2 = FUN_1447a1f4a(&local_108);
    FUN_144a787a6(&local_c8,uVar2);
    if (local_108 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_108 + 0x10))();
    }
    local_108 = (wchar_t *)&DAT_149e1d814;
    local_100 = 2;
    FUN_1446e940c(local_dc,&local_108);
    local_108 = L"UnrealEd";
    local_100 = 8;
    FUN_1446e940c(local_e0,&local_108);
    FUN_140208bae(&local_108,local_e0,local_dc,&DAT_149e1d814);
    uVar2 = FUN_1447a1f4a(&local_108);
    FUN_144a787a6(&local_d8,uVar2);
    if (local_108 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_108 + 0x10))();
    }
  }
  lpString = L"";
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_80 != 0) {
    puVar5 = local_88;
  }
  FUN_14683319a(param_1[5],puVar5,0x3f0,fVar10);
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_70 != 0) {
    puVar5 = local_78;
  }
  FUN_14683319a(param_1[5],puVar5,0x3ef,fVar10);
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_60 != 0) {
    puVar5 = local_68;
  }
  FUN_14683319a(param_1[5],puVar5,0x3ee,fVar10);
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_90 != 0) {
    puVar5 = local_98;
  }
  FUN_14683319a(param_1[5],puVar5,0x3ea,fVar10);
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_a0 != 0) {
    puVar5 = local_a8;
  }
  FUN_14683319a(param_1[5],puVar5,0x3ec,fVar10);
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_b0 != 0) {
    puVar5 = local_b8;
  }
  FUN_14683319a(param_1[5],puVar5,0x3e9,fVar10);
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_c0 != 0) {
    puVar5 = local_c8;
  }
  FUN_14683319a(param_1[5],puVar5,0x3eb,fVar10);
  puVar5 = &DAT_149dfb77a;
  if ((int)uStack_d0 != 0) {
    puVar5 = local_d8;
  }
  FUN_14683319a(param_1[5],puVar5,1000,fVar10);
  lpString_00 = L"";
  if (*(int *)(param_1 + 1) != 0) {
    lpString_00 = (LPCWSTR)*param_1;
  }
  SetDlgItemTextW((HWND)param_1[5],0x3ed,lpString_00);
  if (*(int *)(param_1 + 3) != 0) {
    lpString = (LPCWSTR)param_1[2];
  }
  SetWindowTextW((HWND)param_1[5],lpString);
  pHVar1 = GetDlgItem((HWND)param_1[5],0x3ed);
  FUN_14683306e(param_1,pHVar1,fVar10);
  hWnd = GetTopWindow((HWND)param_1[5]);
  pcVar9 = SetWindowPos_exref;
  if (hWnd == (HWND)0x0) {
    SetForegroundWindow((HWND)param_1[5]);
    pcVar9 = SetWindowPos_exref;
    SetWindowPos((HWND)param_1[5],(HWND)0xffffffffffffffff,0,0,0,0,3);
    hWnd = (HWND)param_1[5];
  }
  else {
    SetWindowPos(hWnd,(HWND)0xffffffffffffffff,0,0,0,0,3);
    SetForegroundWindow((HWND)param_1[5]);
    SetWindowPos((HWND)param_1[5],(HWND)0xffffffffffffffff,0,0,0,0,3);
    SetWindowPos((HWND)param_1[5],(HWND)0xfffffffffffffffe,0,0,0,0,3);
  }
  (*pcVar9)(hWnd,0xfffffffffffffffe,0,0);
  iVar8 = *(int *)(param_1 + 9) - *(int *)(param_1 + 8);
  iVar6 = *(int *)((longlong)param_1 + 0x4c) - *(int *)((longlong)param_1 + 0x44);
  iVar7 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
    iVar7 = 0;
  }
  else {
    puVar5 = (undefined2 *)*param_1;
  }
  uVar2 = FUN_1468332ec(pHVar1,puVar5,iVar7);
  hMonitor = MonitorFromWindow((HWND)param_1[5],2);
  local_108._0_4_ = 0x28;
  GetMonitorInfoW(hMonitor,(LPMONITORINFO)&local_108);
  iVar7 = (int)((float)(local_fc - local_108._4_4_) * 0.8);
  iVar4 = (int)(fVar10 * 100.0 + (float)(int)uVar2);
  if (iVar4 < iVar7) {
    iVar7 = iVar4;
  }
  if (iVar7 < iVar8) {
    iVar7 = iVar8;
  }
  iVar4 = (int)((float)(local_f8 - local_100) * 0.8);
  iVar3 = (int)(fVar10 * 165.0 + (float)(int)((ulonglong)uVar2 >> 0x20));
  if (iVar3 < iVar4) {
    iVar4 = iVar3;
  }
  if (iVar4 < iVar6) {
    iVar4 = iVar6;
  }
  SetWindowPos((HWND)param_1[5],(HWND)0xfffffffffffffffe,*(int *)(param_1 + 8) - (iVar7 - iVar8) / 2
               ,*(int *)((longlong)param_1 + 0x44) - (iVar4 - iVar6) / 2,iVar7,iVar4,4);
  if (local_d8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_b8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a8 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStackY_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146832f5c FUN_146832f5c body=176 status=ok
// SIG undefined FUN_146832f5c(void)

void FUN_146832f5c(undefined8 *param_1,HWND param_2)

{
  size_t dwBytes;
  BOOL BVar1;
  HGLOBAL hMem;
  LPVOID _Dst;
  undefined2 *_Src;
  
  dwBytes = (longlong)*(int *)((longlong)param_1 + 0xc) * 2;
  hMem = GlobalAlloc(2,dwBytes);
  if (hMem != (HGLOBAL)0x0) {
    _Dst = GlobalLock(hMem);
    if (_Dst != (LPVOID)0x0) {
      if (*(int *)(param_1 + 1) == 0) {
        _Src = &DAT_149dfb77a;
      }
      else {
        _Src = (undefined2 *)*param_1;
      }
      memcpy(_Dst,_Src,dwBytes);
      *(undefined1 *)((longlong)_Dst + dwBytes) = 0;
      GlobalUnlock(hMem);
      BVar1 = OpenClipboard(param_2);
      if (BVar1 != 0) {
        BVar1 = EmptyClipboard();
        if (BVar1 != 0) {
          SetClipboardData(0xd,hMem);
                    /* WARNING: Could not recover jumptable at 0x000146832fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          CloseClipboard();
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14683300c FUN_14683300c body=97 status=ok
// SIG undefined FUN_14683300c(void)

float FUN_14683300c(undefined8 param_1)

{
  HMODULE hModule;
  FARPROC pFVar1;
  ulonglong uVar2;
  float fVar3;
  
  hModule = GetModuleHandleW(L"user32.dll");
  fVar3 = 1.0;
  if (hModule != (HMODULE)0x0) {
    pFVar1 = GetProcAddress(hModule,"GetDpiForWindow");
    if (pFVar1 != (FARPROC)0x0) {
      uVar2 = (*pFVar1)(param_1);
      fVar3 = (float)(uVar2 & 0xffffffff) / 96.0;
    }
  }
  return fVar3;
}



// FUNCTION 14683306e FUN_14683306e body=299 status=ok
// SIG undefined FUN_14683306e(void)

void FUN_14683306e(undefined8 *param_1,HWND param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  tagRECT local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  GetWindowRect(param_2,&local_60);
  iVar1 = *(int *)(param_1 + 1);
  if (iVar1 == 0) {
    puVar4 = &DAT_149dfb77a;
  }
  else {
    puVar4 = (undefined2 *)*param_1;
  }
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  uVar3 = FUN_1468332ec(param_2,puVar4,iVar5);
  uVar2 = GetWindowLongW(param_2,-0x10);
  SetWindowLongW(param_2,-0x10,
                 (uint)(local_60.right - (local_60.left + (int)(param_3 * 20.0)) < (int)uVar3) <<
                 0x14 | uVar2 & 0xffefffff);
  uVar2 = GetWindowLongW(param_2,-0x10);
  SetWindowLongW(param_2,-0x10,
                 (uint)(local_60.bottom - (local_60.top + (int)(param_3 * 16.0)) <
                       (int)((ulonglong)uVar3 >> 0x20)) << 0x15 | uVar2 & 0xffdfffff);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683319a FUN_14683319a body=336 status=ok
// SIG undefined FUN_14683319a(void)

void FUN_14683319a(HWND param_1,wchar_t *param_2,int param_3,float param_4,int *param_5,int *param_6
                  )

{
  HDC hdc;
  size_t sVar1;
  HWND hWnd;
  int X;
  undefined1 auStackY_88 [32];
  tagSIZE local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_88;
  hdc = CreateCompatibleDC((HDC)0x0);
  sVar1 = wcslen(param_2);
  GetTextExtentPoint32W(hdc,param_2,(int)sVar1,&local_48);
  DeleteDC(hdc);
  local_48.cx = (int)(param_4 * 14.0) + local_48.cx;
  local_48.cy = (int)(param_4 * 8.0) + local_48.cy;
  if (local_48.cx <= (int)(param_4 * 73.0)) {
    local_48.cx = (int)(param_4 * 73.0);
  }
  if (local_48.cy <= (int)(param_4 * 21.0)) {
    local_48.cy = (int)(param_4 * 21.0);
  }
  hWnd = GetDlgItem(param_1,param_3);
  if (hWnd != (HWND)0x0) {
    X = *param_5 - ((int)(param_4 * 7.0) + local_48.cx);
    *param_5 = X;
    SetWindowPos(hWnd,(HWND)0x0,X,*param_6 - local_48.cy,local_48.cx,local_48.cy,0);
    SetDlgItemTextW(param_1,param_3,param_2);
  }
  if ((local_40 ^ (ulonglong)auStackY_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468332ec FUN_1468332ec body=172 status=ok
// SIG undefined FUN_1468332ec(void)

undefined8 FUN_1468332ec(HWND param_1,LPCWSTR param_2,int param_3)

{
  HDC hdc;
  HGDIOBJ h;
  undefined1 auStackY_68 [32];
  tagRECT local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStackY_68;
  hdc = CreateCompatibleDC((HDC)0x0);
  h = (HGDIOBJ)SendMessageW(param_1,0x31,0,0);
  SelectObject(hdc,h);
  local_38.left = 0;
  local_38.top = 0;
  local_38.right = 0;
  local_38.bottom = 0;
  DrawTextW(hdc,param_2,param_3,&local_38,0x2440);
  DeleteDC(hdc);
  if ((local_28 ^ (ulonglong)auStackY_68) == DAT_14c707940) {
    return CONCAT44(local_38.bottom - local_38.top,local_38.right - local_38.left);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683339a FUN_14683339a body=299 status=ok
// SIG undefined FUN_14683339a(void)

undefined4 * FUN_14683339a(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 2) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_2 + 2) = 0;
    param_1[4] = param_2[4];
    param_1[5] = param_2[5];
    *(undefined8 *)(param_2 + 4) = 0;
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_2 + 6) = 0;
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    *(undefined8 *)(param_2 + 8) = 0;
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
    if (*(longlong *)(param_1 + 0xe) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_2 + 0xe) = 0;
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    *(undefined8 *)(param_2 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0x12) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_2 + 0x12) = 0;
    param_1[0x14] = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    *(undefined8 *)(param_2 + 0x14) = 0;
    if (*(longlong *)(param_1 + 0x16) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
    *(undefined8 *)(param_2 + 0x16) = 0;
    param_1[0x18] = param_2[0x18];
    param_1[0x19] = param_2[0x19];
    *(undefined8 *)(param_2 + 0x18) = 0;
  }
  return param_1;
}



// FUNCTION 1468334c6 FUN_1468334c6 body=274 status=ok
// SIG undefined FUN_1468334c6(void)

undefined4 * FUN_1468334c6(longlong param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1468335da(param_1,local_48);
  uVar4 = *param_3;
  *local_40 = uVar4;
  local_40[1] = 0xffffffff;
  local_4c = local_48[0];
  cVar2 = FUN_1468336c0(param_1,uVar4,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar3) {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[2] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[1] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1468337ac(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468335da FUN_1468335da body=230 status=ok
// SIG undefined FUN_1468335da(void)

int * FUN_1468335da(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447cc1b4(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0xc) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0xc + *param_1;
  return param_2;
}



// FUNCTION 1468336c0 FUN_1468336c0 body=121 status=ok
// SIG undefined FUN_1468336c0(void)

undefined8 FUN_1468336c0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xc) == *param_3) {
          FUN_14683373a(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14683373a FUN_14683373a body=114 status=ok
// SIG undefined FUN_14683373a(void)

void FUN_14683373a(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1468337ac FUN_1468337ac body=419 status=ok
// SIG undefined FUN_1468337ac(void)

void FUN_1468337ac(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0xc);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 8 + lVar6 * 0xc) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 4 + lVar6 * 0xc) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146833950 FUN_146833950 body=6 status=ok
// SIG undefined FUN_146833950(void)

undefined1 FUN_146833950(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x11) = param_2;
  return 1;
}



// FUNCTION 146833970 FUN_146833970 body=29 status=ok
// SIG undefined FUN_146833970(void)

undefined8 FUN_146833970(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683398e FUN_14683398e body=22 status=ok
// SIG undefined FUN_14683398e(void)

void FUN_14683398e(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000146833996. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ResumeThread(*(HANDLE *)(param_1 + 0x38));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014683399d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SuspendThread(*(HANDLE *)(param_1 + 0x38));
  return;
}



// FUNCTION 1468339a4 FUN_1468339a4 body=13 status=ok
// SIG undefined FUN_1468339a4(void)

void FUN_1468339a4(void *param_1)

{
  memset(param_1,0,0x108);
  return;
}



// FUNCTION 1468339b2 FUN_1468339b2 body=132 status=ok
// SIG undefined FUN_1468339b2(void)

void FUN_1468339b2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146833a38 FUN_146833a38 body=52 status=ok
// SIG undefined FUN_146833a38(void)

undefined8 * FUN_146833a38(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149e417f0;
  FUN_14141661e(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146833a6c FUN_146833a6c body=3 status=ok
// SIG undefined FUN_146833a6c(void)

undefined1 FUN_146833a6c(void)

{
  return 1;
}



// FUNCTION 146833a80 FUN_146833a80 body=36 status=ok
// SIG undefined FUN_146833a80(void)

undefined1 FUN_146833a80(void)

{
  longlong in_R9;
  
  *(undefined4 *)(in_R9 + 8) = 0;
  if (*(int *)(in_R9 + 0xc) < 0) {
    FUN_146833e9e(in_R9);
  }
  return 2;
}



// FUNCTION 146833aa4 FUN_146833aa4 body=160 status=ok
// SIG undefined FUN_146833aa4(void)

undefined8 * FUN_146833aa4(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[8] = 0;
  FUN_140056680(local_40,L"Calling ::TryVirtualizePackages on FNullVirtualizationSystem");
  FUN_140233b1a(local_30,local_40);
  FUN_146833ece(param_2,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146833b46 FUN_146833b46 body=147 status=ok
// SIG undefined FUN_146833b46(void)

ulonglong FUN_146833b46(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_70 [8];
  int local_68;
  undefined1 local_60 [56];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = *param_2;
  uStack_84 = param_2[1];
  uStack_80 = param_2[2];
  uStack_7c = param_2[3];
  (**(code **)(*param_1 + 0x48))(local_88,local_70,&local_88,0);
  FUN_140a6ab98(param_3,local_60);
  FUN_140a6ab98(param_4,local_70);
  FUN_146833f0e(local_70);
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)local_60 >> 8),local_68 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146833bda FUN_146833bda body=208 status=ok
// SIG undefined FUN_146833bda(void)

undefined8 FUN_146833bda(void)

{
  int iVar1;
  longlong *in_R9;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong *local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)((longlong)in_R9 + 0xc);
  FUN_1401b9920(*in_R9,(int)in_R9[1]);
  *(undefined4 *)(in_R9 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)in_R9 + 0xc) != 0)) {
    FUN_140cd20a6(in_R9,0);
  }
  FUN_140056680(local_38,L"Calling ::TryRehydratePackages on FNullVirtualizationSystem");
  FUN_140233b1a(local_28,local_38);
  iVar1 = (int)in_R9[1];
  *(uint *)(in_R9 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)in_R9 + 0xc) < iVar1 + 1U) {
    FUN_14001d63e(in_R9,iVar1);
  }
  FUN_14023423e((longlong)iVar1 * 0x10 + *in_R9,local_28);
  if (local_28[0] != (longlong *)0x0) {
    (**(code **)(*local_28[0] + 0x10))();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146833cac FUN_146833cac body=156 status=ok
// SIG undefined FUN_146833cac(void)

undefined8 * FUN_146833cac(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  FUN_140056680(local_40,L"Calling ::TryRehydratePackages on FNullVirtualizationSystem");
  FUN_140233b1a(local_30,local_40);
  FUN_146833f88(param_2,local_30);
  if (local_30[0] != (longlong *)0x0) {
    (**(code **)(*local_30[0] + 0x10))();
  }
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146833d4a FUN_146833d4a body=112 status=ok
// SIG undefined FUN_146833d4a(void)

ulonglong FUN_146833d4a(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 unaff_RBX;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [8];
  int local_50;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  (**(code **)(*param_1 + 0x60))(local_68,local_58,&local_68,0);
  FUN_140a6ab98(param_3,local_58);
  FUN_146833fc8(local_58);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_50 != 0) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146833dbe FUN_146833dbe body=149 status=ok
// SIG undefined FUN_146833dbe(void)

void FUN_146833dbe(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x88))(param_1,&local_30);
  iVar1 = 0;
  if ((longlong)local_28 != 0) {
    lVar2 = (longlong)local_28 * 0x70;
    lVar3 = local_30;
    do {
      (*(code *)*param_2)(param_2[1],lVar3 + 0x10,lVar3,lVar3 + 0x28);
      lVar3 = lVar3 + 0x70;
      lVar2 = lVar2 + -0x70;
      iVar1 = local_28;
    } while (lVar2 != 0);
  }
  FUN_146834028(local_30,iVar1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146833e54 FUN_146833e54 body=26 status=ok
// SIG undefined FUN_146833e54(void)

undefined8 FUN_146833e54(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x90))();
  return param_2;
}



// FUNCTION 146833e9e FUN_146833e9e body=48 status=ok
// SIG undefined FUN_146833e9e(void)

void FUN_146833e9e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,1,1);
  }
  return;
}



// FUNCTION 146833ece FUN_146833ece body=63 status=ok
// SIG undefined FUN_146833ece(void)

void FUN_146833ece(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14001d63e(param_1,iVar1);
  }
  FUN_14023423e((longlong)iVar1 * 0x10 + *param_1,param_2);
  return;
}



// FUNCTION 146833f0e FUN_146833f0e body=122 status=ok
// SIG undefined FUN_146833f0e(void)

void FUN_146833f0e(longlong *param_1)

{
  FUN_1447a1747(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146833f88 FUN_146833f88 body=63 status=ok
// SIG undefined FUN_146833f88(void)

void FUN_146833f88(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14001d63e(param_1,iVar1);
  }
  FUN_14023423e((longlong)iVar1 * 0x10 + *param_1,param_2);
  return;
}



// FUNCTION 146833fc8 FUN_146833fc8 body=96 status=ok
// SIG undefined FUN_146833fc8(void)

void FUN_146833fc8(longlong *param_1)

{
  FUN_1447a1747(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1401b9920(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 146834028 FUN_146834028 body=61 status=ok
// SIG undefined FUN_146834028(void)

void FUN_146834028(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 146834066 FUN_146834066 body=874 status=ok
// SIG undefined FUN_146834066(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146834066(longlong param_1)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  longlong *plVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  wchar_t *_Source;
  undefined1 auStack_2178 [40];
  undefined **local_2150;
  HANDLE local_2148;
  undefined4 local_213c;
  undefined8 local_20e0;
  undefined8 uStack_20d8;
  undefined8 local_20d0;
  undefined8 uStack_20c8;
  longlong local_2050;
  wchar_t *local_2048;
  wchar_t local_2038 [4096];
  ulonglong local_38;
  size_t sVar7;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2178;
  plVar4 = (longlong *)FUN_141552594();
  (**(code **)(*plVar4 + 0x10))(plVar4);
  FUN_1447f69b6(&DAT_14c868888);
  piVar2 = (int *)**(undefined8 **)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(piVar2 + 4);
  iVar1 = *piVar2;
  if (iVar1 < 0xc000) {
    if (iVar1 == 0x4000) {
      if (piVar2[6] == 1) {
        _Source = (wchar_t *)**(undefined8 **)(piVar2 + 8);
        uVar9 = (*(undefined8 **)(piVar2 + 8))[1];
        uVar8 = 1;
        goto LAB_146834152;
      }
    }
    else if ((iVar1 == 0x8000) && (piVar2[6] == 1)) {
      _Source = (wchar_t *)**(undefined8 **)(piVar2 + 8);
      uVar9 = (*(undefined8 **)(piVar2 + 8))[1];
      uVar8 = 4;
      goto LAB_146834152;
    }
  }
  else {
    if (iVar1 == 0xc000) {
      _Source = (wchar_t *)**(undefined8 **)(piVar2 + 8);
      uVar9 = (*(undefined8 **)(piVar2 + 8))[1];
      uVar8 = 6;
      goto LAB_146834152;
    }
    if (iVar1 == 0xbdb30) {
      _Source = (wchar_t *)**(undefined8 **)(piVar2 + 8);
      uVar9 = (*(undefined8 **)(piVar2 + 8))[1];
      uVar8 = 2;
      goto LAB_146834152;
    }
  }
  _Source = local_2038;
  FUN_14682e772(piVar2,_Source);
  wcsncpy((wchar_t *)&DAT_14c868900,_Source,0xfff);
  _DAT_14c86a8fe = 0;
  uVar8 = 0;
LAB_146834152:
  FUN_1467b3f80(&local_2150,uVar8,_Source);
  local_2150 = &PTR_FUN_149e401d0;
  local_20e0 = 0;
  uStack_20d8 = 0;
  local_20d0 = 0;
  uStack_20c8 = 0;
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  pvVar3 = *(void **)(*(longlong *)(param_1 + 0x28) + 8);
  puVar5 = (undefined4 *)FUN_14001cc68(0x4f0,0x10);
  *puVar5 = 0x5397fe56;
  memcpy(puVar5 + 4,pvVar3,0x4d0);
  *(undefined8 *)(puVar5 + 0x138) = uVar8;
  local_2148 = GetCurrentProcess();
  local_213c = *(undefined4 *)(param_1 + 0x30);
  FUN_1467fe8ca(&local_2150);
  FUN_1467b6898(&local_2150,uVar9,puVar5);
  FUN_1427953e2(&local_2150,*(undefined8 *)(param_1 + 0x28),0);
  FUN_14682ec20(&local_2150);
  puVar6 = (undefined1 *)(**(code **)(*DAT_14c872d28 + 0x28))(DAT_14c872d28,0xffff,0);
  *puVar6 = 0;
  if (puVar5 == (undefined4 *)0x0) {
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    pvVar3 = *(void **)(*(longlong *)(param_1 + 0x28) + 8);
    puVar5 = (undefined4 *)FUN_14001cc68(0x4f0,0x10);
    *puVar5 = 0x5397fe56;
    memcpy(puVar5 + 4,pvVar3,0x4d0);
    *(undefined8 *)(puVar5 + 0x138) = uVar8;
  }
  FUN_1468308ee(puVar6,0xffff,uVar9,puVar5);
  iVar1 = *(int *)**(undefined8 **)(param_1 + 0x28);
  if ((iVar1 != 0x4000) && (iVar1 != 0xbdb30)) {
    FUN_14682e772((int *)**(undefined8 **)(param_1 + 0x28),&DAT_14c868900);
    sVar7 = wcslen((wchar_t *)&DAT_14c86aa70);
    extraout_EAX_00 = (int)sVar7;
    if (extraout_EAX_00 < 0x4000) {
      wcsncpy((wchar_t *)(&DAT_14c86aa70 + (longlong)extraout_EAX_00 * 2),(wchar_t *)&DAT_14c868900,
              (ulonglong)(0x4000 - extraout_EAX_00) - 1);
      *(undefined2 *)
       ((longlong)extraout_EAX_00 * 2 + 0x14c86aa6e + (ulonglong)(0x4000 - extraout_EAX_00) * 2) = 0
      ;
    }
    sVar7 = wcslen((wchar_t *)&DAT_14c86aa70);
    extraout_EAX_01 = (int)sVar7;
    if (extraout_EAX_01 < 0x4000) {
      wcsncpy((wchar_t *)(&DAT_14c86aa70 + (longlong)extraout_EAX_01 * 2),L"\r\n\r\n",
              (ulonglong)(0x4000 - extraout_EAX_01) - 1);
      *(undefined2 *)
       ((longlong)extraout_EAX_01 * 2 + 0x14c86aa6e + (ulonglong)(0x4000 - extraout_EAX_01) * 2) = 0
      ;
    }
  }
  FUN_144a81018(&local_2150,puVar6);
  sVar7 = wcslen((wchar_t *)&DAT_14c86aa70);
  extraout_EAX = (int)sVar7;
  if (extraout_EAX < 0x4000) {
    wcsncpy((wchar_t *)(&DAT_14c86aa70 + (longlong)extraout_EAX * 2),local_2048,
            (ulonglong)(0x4000 - extraout_EAX) - 1);
    *(undefined2 *)
     ((longlong)extraout_EAX * 2 + 0x14c86aa6e + (ulonglong)(0x4000 - extraout_EAX) * 2) = 0;
  }
  if (local_2050 != 0) {
    FUN_1400020a8();
  }
  (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,puVar6);
  if (puVar5 != (undefined4 *)0x0) {
    FUN_1400020a8(puVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_2178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468343d2 FUN_1468343d2 body=31 status=ok
// SIG undefined FUN_1468343d2(void)

undefined8 FUN_1468343d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683440e FUN_14683440e body=60 status=ok
// SIG undefined FUN_14683440e(void)

void FUN_14683440e(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149e41990;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 14683444a FUN_14683444a body=60 status=ok
// SIG undefined FUN_14683444a(void)

void FUN_14683444a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_144a72ab6(0x28);
  *puVar2 = &PTR_LAB_149e020b0;
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar2 = &PTR_FUN_149e41990;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puVar2[3] = *(undefined8 *)(param_1 + 0x18);
  puVar2[4] = uVar1;
  return;
}



// FUNCTION 146834486 FUN_146834486 body=100 status=ok
// SIG undefined FUN_146834486(void)

void FUN_146834486(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  EnterCriticalSection(param_2);
  puVar4 = (undefined8 *)FUN_144a72ab6(0x28,param_2 + 1);
  *puVar4 = &PTR_LAB_149e020b0;
  puVar4[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar4 = &PTR_FUN_149e41990;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar3 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar1;
  *(undefined4 *)(puVar4 + 4) = uVar2;
  *(undefined4 *)((longlong)puVar4 + 0x24) = uVar3;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468344db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1468344f6 FUN_1468344f6 body=31 status=ok
// SIG undefined FUN_1468344f6(void)

undefined8 FUN_1468344f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14683452c FUN_14683452c body=60 status=ok
// SIG undefined FUN_14683452c(void)

void FUN_14683452c(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_149e41aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e41a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146834568 FUN_146834568 body=60 status=ok
// SIG undefined FUN_146834568(void)

void FUN_146834568(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_149e41aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e41a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1468345a4 FUN_1468345a4 body=100 status=ok
// SIG undefined FUN_1468345a4(void)

void FUN_1468345a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_149e41aa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e41a30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468345f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146834612 FUN_146834612 body=19 status=ok
// SIG undefined FUN_146834612(void)

undefined8 FUN_146834612(longlong param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 146834628 FUN_146834628 body=138 status=ok
// SIG undefined FUN_146834628(void)

void FUN_146834628(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1468346b2 FUN_1468346b2 body=52 status=ok
// SIG undefined FUN_1468346b2(void)

void FUN_1468346b2(longlong *param_1)

{
  FUN_1468346e6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468346e6 FUN_1468346e6 body=89 status=ok
// SIG undefined FUN_1468346e6(void)

void FUN_1468346e6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1447a08a2(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 146834740 FUN_146834740 body=226 status=ok
// SIG undefined FUN_146834740(void)

void FUN_146834740(longlong param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  longlong lVar5;
  
  if (DAT_14c8c2b98 != DAT_14c8c2bc4) {
    iVar1 = FUN_144a788f7();
    puVar3 = &DAT_14c8c2bc8;
    if (DAT_14c8c2bd0 != (undefined *)0x0) {
      puVar3 = DAT_14c8c2bd0;
    }
    for (iVar1 = *(int *)(puVar3 + ((longlong)(iVar1 + (int)((ulonglong)param_1 >> 0x20)) &
                                   (longlong)DAT_14c8c2bd8 - 1U) * 4); iVar1 != -1;
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + DAT_14c8c2b90 + 0x18)) {
      if (*(longlong *)(DAT_14c8c2b90 + (longlong)iVar1 * 0x20) == param_1) {
        puVar3 = &DAT_14c8c2bc8;
        if (DAT_14c8c2bd0 != (undefined *)0x0) {
          puVar3 = DAT_14c8c2bd0;
        }
        lVar5 = (longlong)*(int *)(DAT_14c8c2b90 + 0x1c + (longlong)iVar1 * 0x20);
        iVar4 = *(int *)(puVar3 + lVar5 * 4);
        if (iVar4 == iVar1) {
          puVar2 = (undefined4 *)(puVar3 + lVar5 * 4);
        }
        else {
          do {
            lVar5 = (longlong)iVar4;
            iVar4 = *(int *)(DAT_14c8c2b90 + 0x18 + lVar5 * 0x20);
          } while (iVar4 != iVar1);
          puVar2 = (undefined4 *)(DAT_14c8c2b90 + lVar5 * 0x20 + 0x18);
        }
        *puVar2 = *(undefined4 *)(DAT_14c8c2b90 + (longlong)iVar1 * 0x20 + 0x18);
        FUN_146834822();
        return;
      }
    }
  }
  return;
}



// FUNCTION 146834822 FUN_146834822 body=79 status=ok
// SIG undefined FUN_146834822(void)

void FUN_146834822(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = DAT_14c8c2b90;
  lVar2 = (longlong)param_1 * 0x20;
  FUN_1447a1747(*(undefined8 *)(DAT_14c8c2b90 + 8 + lVar2),
                *(undefined4 *)(DAT_14c8c2b90 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_146834628(&DAT_14c8c2b90,param_1,1);
  return;
}



// FUNCTION 146834871 FUN_146834871 body=49 status=ok
// SIG undefined FUN_146834871(void)

void FUN_146834871(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1468348a2 FUN_1468348a2 body=151 status=ok
// SIG undefined FUN_1468348a2(void)

void FUN_1468348a2(int param_1)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar2 = DAT_14c8c44b0;
  if (param_1 <= (int)DAT_14c8c44b0) {
    if (DAT_14c8c44b4 == 0) {
      uVar3 = 4;
      if (4 < DAT_14c8c44b0) {
        uVar3 = DAT_14c8c44b0;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)DAT_14c8c44b0 * 3) >> 3) + (longlong)(int)DAT_14c8c44b0 +
              0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    DAT_14c8c44b4 = 0x7fffffff;
    if ((int)uVar2 <= iVar6) {
      DAT_14c8c44b4 = iVar6;
    }
    FUN_1446f8d3c(&DAT_14c8c44a8,param_1,DAT_14c8c44b4,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14683493a FUN_14683493a body=64 status=ok
// SIG undefined FUN_14683493a(void)

void FUN_14683493a(void)

{
  if (DAT_14c8c44b4 != 0) {
    DAT_14c8c44b4 = 0;
    FUN_1446f8d3c(&DAT_14c8c44a8,DAT_14c8c44b0,0,0x38,8);
  }
  return;
}



// FUNCTION 14683497a FUN_14683497a body=31 status=ok
// SIG undefined FUN_14683497a(void)

undefined8 FUN_14683497a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468349ac FUN_1468349ac body=60 status=ok
// SIG undefined FUN_1468349ac(void)

void FUN_1468349ac(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_149e41ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e41b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1468349e8 FUN_1468349e8 body=60 status=ok
// SIG undefined FUN_1468349e8(void)

void FUN_1468349e8(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_149e41ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e41b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146834a24 FUN_146834a24 body=100 status=ok
// SIG undefined FUN_146834a24(void)

void FUN_146834a24(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_149e41ba0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e41b30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146834a79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146834a98 FUN_146834a98 body=393 status=ok
// SIG undefined FUN_146834a98(void)

undefined8 FUN_146834a98(void)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  HANDLE hThread;
  double *pdVar6;
  undefined1 auStackY_98 [32];
  _FILETIME local_68;
  _FILETIME local_60;
  _FILETIME local_58;
  _FILETIME local_50;
  _FILETIME local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  local_48.dwLowDateTime = 0;
  local_48.dwHighDateTime = 0;
  local_50.dwLowDateTime = 0;
  local_50.dwHighDateTime = 0;
  local_58.dwLowDateTime = 0;
  local_58.dwHighDateTime = 0;
  local_60.dwLowDateTime = 0;
  local_60.dwHighDateTime = 0;
  local_68.dwLowDateTime = 0;
  local_68.dwHighDateTime = 0;
  hThread = GetCurrentThread();
  GetThreadTimes(hThread,&local_48,&local_50,&local_58,&local_60);
  GetSystemTimeAsFileTime(&local_68);
  dVar3 = (((double)CONCAT44(0x43300000,local_60.dwLowDateTime) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,local_60.dwHighDateTime) - 1.9342813113834067e+25)) /
          10000000.0 +
          (((double)CONCAT44(0x43300000,local_58.dwLowDateTime) - 4503599627370496.0) +
          ((double)CONCAT44(0x45300000,local_58.dwHighDateTime) - 1.9342813113834067e+25)) /
          10000000.0;
  pdVar1 = *(double **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  dVar4 = dVar3 - pdVar1[0x19c];
  pdVar6 = pdVar1;
  if (0.0 < dVar4) {
    pdVar6 = pdVar1 + 0x19b;
    dVar5 = (((double)CONCAT44(0x43300000,local_68.dwLowDateTime) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,local_68.dwHighDateTime) - 1.9342813113834067e+25)) /
            10000000.0 -
            (((double)CONCAT44(0x43300000,local_48.dwLowDateTime) - 4503599627370496.0) +
            ((double)CONCAT44(0x45300000,local_48.dwHighDateTime) - 1.9342813113834067e+25)) /
            10000000.0;
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    *(float *)(lVar2 + 0xcc8) = (float)((dVar4 / (dVar5 - *pdVar6)) * 100.0);
    *pdVar6 = dVar5;
    pdVar1[0x19c] = dVar3;
    *(double *)(lVar2 + 0xcd0) = dVar4;
  }
  if ((local_40 ^ (ulonglong)auStackY_98) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)pdVar6 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146834c22 FUN_146834c22 body=235 status=ok
// SIG undefined FUN_146834c22(void)

void FUN_146834c22(double param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  float local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c8c4560 == '\0') {
    uVar2 = FUN_1401cb356();
    local_50 = 0;
    local_48 = 0;
    puVar3 = (undefined8 *)FUN_144a72ab6(0x20,&local_50);
    *puVar3 = &PTR_LAB_149e02020;
    uVar4 = FUN_144a3f946();
    puVar3[2] = uVar4;
    *puVar3 = &PTR_FUN_149e41f40;
    puVar3[3] = FUN_146834a98;
    local_58 = (float)param_1;
    FUN_1405f67fc(uVar2,local_40,&local_50,L"FPlatformTime_UpdateThreadCPUTime");
    if (local_38 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
    FUN_1449db362(&local_50);
    DAT_14c8c4560 = '\x01';
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146834d0e FUN_146834d0e body=79 status=ok
// SIG undefined FUN_146834d0e(void)

float * FUN_146834d0e(float *param_1)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xcc8);
  iVar2 = FUN_144a885dc();
  *param_1 = fVar1 / (float)iVar2;
  param_1[1] = fVar1;
  return param_1;
}



// FUNCTION 146834d70 FUN_146834d70 body=73 status=ok
// SIG undefined FUN_146834d70(void)

wchar_t * FUN_146834d70(wchar_t *param_1,wchar_t *param_2,int param_3)

{
  int extraout_EAX;
  uint uVar2;
  size_t sVar1;
  
  sVar1 = wcslen(param_1);
  extraout_EAX = (int)sVar1;
  uVar2 = param_3 - extraout_EAX;
  if (uVar2 != 0 && extraout_EAX <= param_3) {
    wcsncpy(param_1 + extraout_EAX,param_2,(ulonglong)uVar2 - 1);
    (param_1 + extraout_EAX)[(ulonglong)uVar2 - 1] = L'\0';
  }
  return param_1;
}



// FUNCTION 146834dcc FUN_146834dcc body=60 status=ok
// SIG undefined FUN_146834dcc(void)

void FUN_146834dcc(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20);
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e41f40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146834e08 FUN_146834e08 body=100 status=ok
// SIG undefined FUN_146834e08(void)

void FUN_146834e08(longlong param_1,LPCRITICAL_SECTION param_2)

{
  undefined8 *puVar1;
  
  EnterCriticalSection(param_2);
  puVar1 = (undefined8 *)FUN_144a72ab6(0x20,param_2 + 1);
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149e41f40;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000146834e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 146834e6c FUN_146834e6c body=17 status=ok
// SIG undefined FUN_146834e6c(void)

undefined1 FUN_146834e6c(longlong param_1,undefined4 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 146834e7d FUN_146834e7d body=121 status=ok
// SIG undefined FUN_146834e7d(void)

longlong FUN_146834e7d(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong in_RAX;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 != 0) {
    if (param_1 < &DAT_14c8c47c0 && (longlong *)0x14c8c457f < param_1) {
      LOCK();
      plVar1 = param_1 + 3;
      lVar2 = *plVar1;
      *plVar1 = *plVar1 + param_2;
      UNLOCK();
      do {
        lVar3 = param_1[2];
        lVar4 = lVar3;
        if (lVar2 + param_2 <= lVar3) break;
        LOCK();
        lVar4 = param_1[2];
        bVar5 = lVar3 == lVar4;
        if (bVar5) {
          param_1[2] = lVar2 + param_2;
          lVar4 = lVar3;
        }
        UNLOCK();
      } while (!bVar5);
      if (param_2 < 1) {
        LOCK();
        param_1[1] = param_1[1] - param_2;
        UNLOCK();
        return lVar4;
      }
      LOCK();
      *param_1 = *param_1 + param_2;
      UNLOCK();
      return lVar4;
    }
    in_RAX = param_1[3] + param_2;
    param_1[3] = in_RAX;
    if (param_1[2] < in_RAX) {
      param_1[2] = in_RAX;
    }
    if (0 < param_2) {
      *param_1 = *param_1 + param_2;
      return in_RAX;
    }
    param_1[1] = param_1[1] - param_2;
  }
  return in_RAX;
}



// FUNCTION 146834ef6 FUN_146834ef6 body=1441 status=ok
// SIG undefined FUN_146834ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146834ef6(longlong *param_1)

{
  if (param_1 == (longlong *)&DAT_14c8c4580) {
    return;
  }
  if ((*param_1 != 0) || (param_1[1] != 0)) {
    LOCK();
    _DAT_14c8c4580 = _DAT_14c8c4580 + *param_1;
    UNLOCK();
    LOCK();
    _DAT_14c8c4598 = _DAT_14c8c4598 + param_1[3];
    UNLOCK();
    LOCK();
    _DAT_14c8c4588 = _DAT_14c8c4588 + param_1[1];
    UNLOCK();
    LOCK();
    _DAT_14c8c4590 = _DAT_14c8c4590 + param_1[2];
    UNLOCK();
  }
  if ((param_1[4] != 0) || (param_1[5] != 0)) {
    LOCK();
    _DAT_14c8c45a0 = _DAT_14c8c45a0 + param_1[4];
    UNLOCK();
    LOCK();
    _DAT_14c8c45b8 = _DAT_14c8c45b8 + param_1[7];
    UNLOCK();
    LOCK();
    _DAT_14c8c45a8 = _DAT_14c8c45a8 + param_1[5];
    UNLOCK();
    LOCK();
    _DAT_14c8c45b0 = _DAT_14c8c45b0 + param_1[6];
    UNLOCK();
  }
  if ((param_1[8] != 0) || (param_1[9] != 0)) {
    LOCK();
    _DAT_14c8c45c0 = _DAT_14c8c45c0 + param_1[8];
    UNLOCK();
    LOCK();
    DAT_14c8c45d8 = DAT_14c8c45d8 + param_1[0xb];
    UNLOCK();
    LOCK();
    _DAT_14c8c45c8 = _DAT_14c8c45c8 + param_1[9];
    UNLOCK();
    LOCK();
    DAT_14c8c45d0 = DAT_14c8c45d0 + param_1[10];
    UNLOCK();
  }
  if ((param_1[0xc] != 0) || (param_1[0xd] != 0)) {
    LOCK();
    _DAT_14c8c45e0 = _DAT_14c8c45e0 + param_1[0xc];
    UNLOCK();
    LOCK();
    DAT_14c8c45f8 = DAT_14c8c45f8 + param_1[0xf];
    UNLOCK();
    LOCK();
    _DAT_14c8c45e8 = _DAT_14c8c45e8 + param_1[0xd];
    UNLOCK();
    LOCK();
    DAT_14c8c45f0 = DAT_14c8c45f0 + param_1[0xe];
    UNLOCK();
  }
  if ((param_1[0x10] != 0) || (param_1[0x11] != 0)) {
    LOCK();
    _DAT_14c8c4600 = _DAT_14c8c4600 + param_1[0x10];
    UNLOCK();
    LOCK();
    _DAT_14c8c4618 = _DAT_14c8c4618 + param_1[0x13];
    UNLOCK();
    LOCK();
    _DAT_14c8c4608 = _DAT_14c8c4608 + param_1[0x11];
    UNLOCK();
    LOCK();
    _DAT_14c8c4610 = _DAT_14c8c4610 + param_1[0x12];
    UNLOCK();
  }
  if ((param_1[0x14] != 0) || (param_1[0x15] != 0)) {
    LOCK();
    _DAT_14c8c4620 = _DAT_14c8c4620 + param_1[0x14];
    UNLOCK();
    LOCK();
    _DAT_14c8c4638 = _DAT_14c8c4638 + param_1[0x17];
    UNLOCK();
    LOCK();
    _DAT_14c8c4628 = _DAT_14c8c4628 + param_1[0x15];
    UNLOCK();
    LOCK();
    _DAT_14c8c4630 = _DAT_14c8c4630 + param_1[0x16];
    UNLOCK();
  }
  if ((param_1[0x1c] != 0) || (param_1[0x1d] != 0)) {
    LOCK();
    _DAT_14c8c4660 = _DAT_14c8c4660 + param_1[0x1c];
    UNLOCK();
    LOCK();
    _DAT_14c8c4678 = _DAT_14c8c4678 + param_1[0x1f];
    UNLOCK();
    LOCK();
    _DAT_14c8c4668 = _DAT_14c8c4668 + param_1[0x1d];
    UNLOCK();
    LOCK();
    _DAT_14c8c4670 = _DAT_14c8c4670 + param_1[0x1e];
    UNLOCK();
  }
  if ((param_1[0x18] != 0) || (param_1[0x19] != 0)) {
    LOCK();
    _DAT_14c8c4640 = _DAT_14c8c4640 + param_1[0x18];
    UNLOCK();
    LOCK();
    _DAT_14c8c4658 = _DAT_14c8c4658 + param_1[0x1b];
    UNLOCK();
    LOCK();
    _DAT_14c8c4648 = _DAT_14c8c4648 + param_1[0x19];
    UNLOCK();
    LOCK();
    _DAT_14c8c4650 = _DAT_14c8c4650 + param_1[0x1a];
    UNLOCK();
  }
  if ((param_1[0x20] != 0) || (param_1[0x21] != 0)) {
    LOCK();
    _DAT_14c8c4680 = _DAT_14c8c4680 + param_1[0x20];
    UNLOCK();
    LOCK();
    DAT_14c8c4698 = DAT_14c8c4698 + param_1[0x23];
    UNLOCK();
    LOCK();
    _DAT_14c8c4688 = _DAT_14c8c4688 + param_1[0x21];
    UNLOCK();
    LOCK();
    DAT_14c8c4690 = DAT_14c8c4690 + param_1[0x22];
    UNLOCK();
  }
  if ((param_1[0x30] != 0) || (param_1[0x31] != 0)) {
    LOCK();
    _DAT_14c8c4700 = _DAT_14c8c4700 + param_1[0x30];
    UNLOCK();
    LOCK();
    _DAT_14c8c4718 = _DAT_14c8c4718 + param_1[0x33];
    UNLOCK();
    LOCK();
    _DAT_14c8c4708 = _DAT_14c8c4708 + param_1[0x31];
    UNLOCK();
    LOCK();
    _DAT_14c8c4710 = _DAT_14c8c4710 + param_1[0x32];
    UNLOCK();
  }
  if ((param_1[0x34] != 0) || (param_1[0x35] != 0)) {
    LOCK();
    _DAT_14c8c4720 = _DAT_14c8c4720 + param_1[0x34];
    UNLOCK();
    LOCK();
    _DAT_14c8c4738 = _DAT_14c8c4738 + param_1[0x37];
    UNLOCK();
    LOCK();
    _DAT_14c8c4728 = _DAT_14c8c4728 + param_1[0x35];
    UNLOCK();
    LOCK();
    _DAT_14c8c4730 = _DAT_14c8c4730 + param_1[0x36];
    UNLOCK();
  }
  if ((param_1[0x24] != 0) || (param_1[0x25] != 0)) {
    LOCK();
    _DAT_14c8c46a0 = _DAT_14c8c46a0 + param_1[0x24];
    UNLOCK();
    LOCK();
    _DAT_14c8c46b8 = _DAT_14c8c46b8 + param_1[0x27];
    UNLOCK();
    LOCK();
    _DAT_14c8c46a8 = _DAT_14c8c46a8 + param_1[0x25];
    UNLOCK();
    LOCK();
    _DAT_14c8c46b0 = _DAT_14c8c46b0 + param_1[0x26];
    UNLOCK();
  }
  if ((param_1[0x28] != 0) || (param_1[0x29] != 0)) {
    LOCK();
    _DAT_14c8c46c0 = _DAT_14c8c46c0 + param_1[0x28];
    UNLOCK();
    LOCK();
    _DAT_14c8c46d8 = _DAT_14c8c46d8 + param_1[0x2b];
    UNLOCK();
    LOCK();
    _DAT_14c8c46c8 = _DAT_14c8c46c8 + param_1[0x29];
    UNLOCK();
    LOCK();
    _DAT_14c8c46d0 = _DAT_14c8c46d0 + param_1[0x2a];
    UNLOCK();
  }
  if ((param_1[0x2c] != 0) || (param_1[0x2d] != 0)) {
    LOCK();
    _DAT_14c8c46e0 = _DAT_14c8c46e0 + param_1[0x2c];
    UNLOCK();
    LOCK();
    _DAT_14c8c46f8 = _DAT_14c8c46f8 + param_1[0x2f];
    UNLOCK();
    LOCK();
    _DAT_14c8c46e8 = _DAT_14c8c46e8 + param_1[0x2d];
    UNLOCK();
    LOCK();
    _DAT_14c8c46f0 = _DAT_14c8c46f0 + param_1[0x2e];
    UNLOCK();
  }
  LOCK();
  DAT_14c8c4740 = DAT_14c8c4740 + param_1[0x38];
  UNLOCK();
  LOCK();
  _DAT_14c8c4748 = _DAT_14c8c4748 + param_1[0x39];
  UNLOCK();
  LOCK();
  DAT_14c8c4750 = DAT_14c8c4750 + param_1[0x3a];
  UNLOCK();
  LOCK();
  _DAT_14c8c4758 = _DAT_14c8c4758 + param_1[0x3b];
  UNLOCK();
  LOCK();
  DAT_14c8c4760 = DAT_14c8c4760 + param_1[0x3c];
  UNLOCK();
  LOCK();
  _DAT_14c8c4768 = _DAT_14c8c4768 + param_1[0x3d];
  UNLOCK();
  LOCK();
  DAT_14c8c4770 = DAT_14c8c4770 + param_1[0x3e];
  UNLOCK();
  LOCK();
  _DAT_14c8c4778 = _DAT_14c8c4778 + param_1[0x3f];
  UNLOCK();
  LOCK();
  DAT_14c8c4780 = DAT_14c8c4780 + param_1[0x40];
  UNLOCK();
  LOCK();
  DAT_14c8c4788 = DAT_14c8c4788 + param_1[0x41];
  UNLOCK();
  LOCK();
  _DAT_14c8c4790 = _DAT_14c8c4790 + param_1[0x42];
  UNLOCK();
  LOCK();
  _DAT_14c8c4798 = _DAT_14c8c4798 + param_1[0x43];
  UNLOCK();
  LOCK();
  _DAT_14c8c47a0 = _DAT_14c8c47a0 + param_1[0x44];
  UNLOCK();
  LOCK();
  _DAT_14c8c47a8 = _DAT_14c8c47a8 + param_1[0x45];
  UNLOCK();
  LOCK();
  _DAT_14c8c47b0 = _DAT_14c8c47b0 + param_1[0x46];
  UNLOCK();
  LOCK();
  _DAT_14c8c47b8 = _DAT_14c8c47b8 + param_1[0x47];
  UNLOCK();
  memset(param_1,0,0x240);
  return;
}



// FUNCTION 146835497 FUN_146835497 body=1276 status=ok
// SIG undefined FUN_146835497(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_146835497(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_208 [32];
  char *local_1e8;
  char *local_1e0;
  longlong *local_1d8;
  char *local_1d0;
  char *local_1c8;
  char *local_1c0;
  undefined4 local_1b8 [2];
  longlong local_1b0;
  undefined1 local_1a8 [8];
  undefined8 local_1a0;
  undefined1 local_198 [8];
  longlong local_190;
  longlong local_188;
  longlong local_180 [3];
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 local_148 [264];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  plVar1 = local_180 + 1;
  local_160 = 0;
  local_180[1] = 0;
  local_180[2] = 0;
  local_158 = 0xff;
  local_168 = local_148;
  local_1c0 = "count  ";
  local_1c8 = "unit  ";
  local_1d0 = "current  ";
  local_1d8 = (longlong *)0x149e43033;
  local_1e0 = "total  ";
  local_1e8 = "peak  ";
  FUN_146838323(0,plVar1,"%10s: %10s %10s %10s %10s %10s %10s\n","heap stats");
  FUN_1468384f2(&DAT_14c8c45c0,"reserved",1,plVar1);
  FUN_1468384f2(&DAT_14c8c45e0,"committed",1,plVar1);
  FUN_1468384f2(&DAT_14c8c4600,"reset",1,plVar1);
  FUN_1468384f2(&DAT_14c8c4620,"touched",1,plVar1);
  FUN_1468384f2(&DAT_14c8c4580,"segments",0xffffffffffffffff,plVar1);
  FUN_1468384f2(&DAT_14c8c4640,"-abandoned",0xffffffffffffffff,plVar1);
  FUN_1468384f2(&DAT_14c8c4720,"-cached",0xffffffffffffffff,plVar1);
  FUN_1468384f2(&DAT_14c8c45a0,"pages",0xffffffffffffffff,plVar1);
  uVar4 = FUN_1468384f2(&DAT_14c8c4660,"-abandoned",0xffffffffffffffff,plVar1);
  FUN_146838323(uVar4,plVar1,"%10s:","-extended");
  lVar2 = 0;
  uVar4 = FUN_146838714(DAT_14c8c4740,0xffffffffffffffff,plVar1,0);
  uVar4 = FUN_146838323(uVar4,plVar1,&DAT_149dfc0af);
  FUN_146838323(uVar4,plVar1,"%10s:","-noretire");
  uVar4 = FUN_146838714(DAT_14c8c4770,0xffffffffffffffff,plVar1,0);
  uVar4 = FUN_146838323(uVar4,plVar1,&DAT_149dfc0af);
  FUN_146838323(uVar4,plVar1,"%10s:","mmaps");
  uVar4 = FUN_146838714(DAT_14c8c4750,0xffffffffffffffff,plVar1,0);
  uVar4 = FUN_146838323(uVar4,plVar1,&DAT_149dfc0af);
  FUN_146838323(uVar4,plVar1,"%10s:","commits");
  uVar4 = FUN_146838714(DAT_14c8c4760,0xffffffffffffffff,plVar1,0);
  FUN_146838323(uVar4,plVar1,&DAT_149dfc0af);
  FUN_1468384f2(&DAT_14c8c4680,"threads",0xffffffffffffffff,plVar1);
  if (DAT_14c8c4788 != 0) {
    lVar2 = (DAT_14c8c4780 * 10) / DAT_14c8c4788;
  }
  iVar3 = (int)(SUB168(SEXT816(lVar2) * SEXT816(0x6666666666666667),8) >> 2) -
          (SUB164(SEXT816(lVar2) * SEXT816(0x6666666666666667),0xc) >> 0x1f);
  local_1e8 = (char *)CONCAT44(local_1e8._4_4_,iVar3);
  local_1e0 = (char *)CONCAT44(local_1e0._4_4_,(int)lVar2 + iVar3 * -10);
  uVar4 = FUN_146838323(0x6666666666666667,local_180 + 1,"%10s: %5ld.%ld avg\n","searches");
  lVar2 = DAT_14c8c4800;
  if (DAT_14c8c4800 == 0) {
    lVar2 = FUN_146835fae();
    uVar4 = extraout_XMM0_Da;
  }
  plVar1 = local_180 + 1;
  local_1e8 = (char *)lVar2;
  FUN_146838323(uVar4,plVar1,"%10s: %7i\n","numa nodes");
  local_1d0 = (char *)local_1b8;
  local_1d8 = &local_1b0;
  local_1e0 = local_1a8;
  local_1e8 = (char *)&local_1a0;
  FUN_146835994(local_180,&local_188,&local_190,local_198);
  local_1e8 = (char *)(local_180[0] / 1000);
  local_1e0 = (char *)(local_180[0] % 1000);
  FUN_146838323(local_1e0,plVar1,"%10s: %7ld.%03ld s\n","elapsed");
  local_1d8 = (longlong *)(local_190 / 1000);
  local_1d0 = (char *)(local_190 % 1000);
  local_1e8 = (char *)(local_188 / 1000);
  local_1e0 = (char *)(local_188 % 1000);
  local_1c8 = (char *)CONCAT44(local_1c8._4_4_,local_1b8[0]);
  FUN_146838323(local_1d0,plVar1,"%10s: user: %ld.%03ld s, system: %ld.%03ld s, faults: %lu, rss: ",
                "process");
  uVar4 = FUN_146838714(local_1a0,1,plVar1,&DAT_149dfbe46);
  if (local_1b0 != 0) {
    FUN_146838323(uVar4,local_180 + 1,", commit: ");
    uVar4 = FUN_146838714(local_1b0,1,local_180 + 1,&DAT_149dfbe46);
  }
  FUN_146838323(uVar4,local_180 + 1,&DAT_149dfc0af);
  if ((local_40 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146835994 FUN_146835994 body=302 status=ok
// SIG undefined FUN_146835994(void)

void FUN_146835994(longlong *param_1,ulonglong *param_2,ulonglong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,ulonglong *param_8)

{
  longlong lVar1;
  longlong lVar2;
  HANDLE pvVar3;
  undefined1 auStackY_d8 [32];
  undefined1 local_b0 [4];
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_78;
  undefined8 local_70;
  _FILETIME local_68;
  _FILETIME local_60;
  _FILETIME local_58;
  _FILETIME local_50;
  ulonglong local_48;
  
  lVar1 = DAT_14c8c47c0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStackY_d8;
  lVar2 = FUN_145d75773();
  *param_1 = lVar2 - (lVar1 + DAT_14c8c47c8);
  pvVar3 = GetCurrentProcess();
  GetProcessTimes(pvVar3,&local_50,&local_68,&local_60,&local_58);
  *param_2 = (ulonglong)local_58 / 10000;
  *param_3 = (ulonglong)local_60 / 10000;
  pvVar3 = GetCurrentProcess();
  K32GetProcessMemoryInfo(pvVar3,local_b0,0x48);
  *param_4 = local_a0;
  *param_5 = local_a8;
  *param_6 = local_78;
  *param_7 = local_70;
  *param_8 = (ulonglong)local_ac;
  if ((local_48 ^ (ulonglong)auStackY_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146835ac3 FUN_146835ac3 body=194 status=ok
// SIG undefined FUN_146835ac3(void)

void FUN_146835ac3(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (DAT_14c75e9d4 == 0) {
    FUN_1412bb367(&DAT_14c75e9d0);
  }
  if (DAT_14c75e9d0 == 0) {
    if (DAT_14c75ea04 == 0) {
      FUN_1412bb367(&DAT_14c75ea00);
    }
    if (DAT_14c75ea00 == 0) goto LAB_146835b12;
  }
  LOCK();
  uVar2 = DAT_14c91eb50 + 1;
  UNLOCK();
  bVar1 = DAT_14c91eb50 <= DAT_14c75ebe8;
  DAT_14c91eb50 = uVar2;
  if (bVar1) {
    local_28 = &local_res10;
    local_18 = local_28;
    FUN_146838379(0,0,"mimalloc: warning: ",param_1);
  }
LAB_146835b12:
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146835b86 FUN_146835b86 body=119 status=ok
// SIG undefined FUN_146835b86(void)

ulonglong FUN_146835b86(ulonglong param_1)

{
  ulonglong uVar1;
  
  uVar1 = DAT_14c75d698;
  if ((((0x7ffff < param_1) && (uVar1 = 0x10000, 0x1fffff < param_1)) &&
      (uVar1 = 0x40000, 0x7fffff < param_1)) && (uVar1 = 0x400000, param_1 < 0x2000000)) {
    uVar1 = 0x100000;
  }
  if (param_1 < ~uVar1) {
    param_1 = (param_1 + uVar1) - 1;
    if ((uVar1 & uVar1 - 1) == 0) {
      param_1 = param_1 & -uVar1;
    }
    else {
      param_1 = param_1 - param_1 % uVar1;
    }
  }
  return param_1;
}



// FUNCTION 146835bfd FUN_146835bfd body=95 status=ok
// SIG undefined FUN_146835bfd(void)

FARPROC FUN_146835bfd(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = LoadLibraryW(L"kernelbase.dll");
  if (hModule == (HMODULE)0x0) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    pFVar1 = GetProcAddress(hModule,"VirtualAlloc2FromApp");
    if (pFVar1 == (FARPROC)0x0) {
      pFVar1 = GetProcAddress(hModule,"VirtualAlloc2");
    }
    FreeLibrary(hModule);
  }
  return pFVar1;
}



// FUNCTION 146835c5c FUN_146835c5c body=69 status=ok
// SIG undefined FUN_146835c5c(void)

FARPROC FUN_146835c5c(void)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = LoadLibraryW(L"ntdll.dll");
  if (hModule == (HMODULE)0x0) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    pFVar1 = GetProcAddress(hModule,"NtAllocateVirtualMemoryEx");
    FreeLibrary(hModule);
  }
  return pFVar1;
}



// FUNCTION 146835ca1 FUN_146835ca1 body=69 status=ok
// SIG undefined FUN_146835ca1(void)

void FUN_146835ca1(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar1 = FUN_146835b86();
  FUN_146835ce7(uVar1,0,0,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146835ce7 FUN_146835ce7 body=97 status=ok
// SIG undefined FUN_146835ce7(void)

longlong FUN_146835ce7(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_14683896a(0,param_1,param_2,param_3,param_4);
    lVar2 = 0;
    if (lVar1 != 0) {
      FUN_146834e7d(&DAT_14c8c45c0,param_1);
      FUN_146834e7d(&DAT_14c8c45e0,param_1);
      lVar2 = lVar1;
    }
  }
  return lVar2;
}



// FUNCTION 146835d48 FUN_146835d48 body=471 status=ok
// SIG undefined FUN_146835d48(void)

ulonglong FUN_146835d48(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  longlong local_60;
  ulonglong local_58;
  undefined1 local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    lVar1 = FUN_146835b86();
    uVar2 = DAT_14c75d698;
    uVar5 = POPCOUNT(DAT_14c75d698);
    uVar4 = DAT_14c75d698 + 0x7fffff;
    if (uVar5 < 2) {
      uVar4 = uVar4 & -DAT_14c75d698;
    }
    else {
      uVar4 = uVar4 - uVar4 % DAT_14c75d698;
    }
    if (param_2 == (undefined1 *)0x0) {
      param_2 = &local_4a;
      uVar3 = 0;
    }
    else {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),*param_2);
      *param_2 = 0;
    }
    if ((uVar4 & uVar4 - 1) == 0 && uVar2 <= uVar4) {
      uVar7 = (lVar1 + uVar2) - 1;
      if ((uint)uVar5 < 2) {
        uVar7 = uVar7 & -uVar2;
      }
      else {
        uVar7 = uVar7 - uVar7 % uVar2;
      }
      uVar2 = FUN_146835ce7(uVar7,uVar4,uVar3,param_2);
      if (uVar2 != 0) {
        if (uVar2 % uVar4 == 0) goto LAB_146835d6f;
        FUN_14279e0e4(uVar2,uVar7,1);
        if (uVar7 < ~uVar4) {
          local_60 = uVar7 + uVar4;
          local_58 = -uVar4;
          iVar6 = 3;
          do {
            uVar5 = FUN_146835ce7(local_60,uVar4,0,param_2);
            uVar2 = 0;
            if (uVar5 == 0) break;
            if (uVar5 % uVar4 == 0) {
              FUN_14279e169(uVar5 + uVar7,uVar4,&local_49);
              uVar2 = uVar5;
              break;
            }
            FUN_14279e0e4(uVar5,local_60,1);
            uVar5 = uVar5 + (uVar4 - 1) & local_58;
            local_68 = param_2;
            uVar2 = FUN_14683896a(uVar5,uVar7,uVar4,uVar3);
            if (uVar2 == uVar5) break;
            if (uVar2 != 0) {
              FUN_14279e0e4(uVar2,uVar7);
            }
            iVar6 = iVar6 + -1;
            uVar2 = 0;
          } while (iVar6 != 0);
          goto LAB_146835d6f;
        }
      }
    }
  }
  uVar2 = 0;
LAB_146835d6f:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 146835f20 FUN_146835f20 body=131 status=ok
// SIG undefined FUN_146835f20(void)

void FUN_146835f20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c75ea4c == 0) {
    FUN_1412bb367(&DAT_14c75ea48);
  }
  if (DAT_14c75ea48 != 0) {
    FUN_14279e169(param_1,param_2,&local_21);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_14279e223(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146835fae FUN_146835fae body=100 status=ok
// SIG undefined FUN_146835fae(void)

ulonglong FUN_146835fae(void)

{
  uint uVar1;
  
  if (DAT_14c8c4800 == 0) {
    if (DAT_14c75eb6c == 0) {
      FUN_1412bb367(&DAT_14c75eb68);
    }
    uVar1 = DAT_14c75eb68;
    if ((int)DAT_14c75eb68 < 1) {
      uVar1 = FUN_146836012();
    }
    DAT_14c8c4800 = 1;
    if (1 < (int)uVar1) {
      DAT_14c8c4800 = (ulonglong)uVar1;
    }
    FUN_1412bb2e0("using %zd numa regions\n");
  }
  return DAT_14c8c4800;
}



// FUNCTION 146836012 FUN_146836012 body=152 status=ok
// SIG undefined FUN_146836012(void)

longlong FUN_146836012(void)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [44];
  ULONG local_2c;
  ULONGLONG local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  GetNumaHighestNodeNumber(&local_2c);
  if (local_2c == 0) {
    lVar2 = 1;
  }
  else {
    do {
      if (DAT_14c8c47f8 == (code *)0x0) {
        iVar1 = GetNumaNodeProcessorMask((UCHAR)local_2c,local_28);
      }
      else {
        iVar1 = (*DAT_14c8c47f8)(local_2c,local_28);
      }
    } while (((iVar1 == 0) || (local_28[0] == 0)) && (local_2c = local_2c - 1, local_2c != 0));
    lVar2 = (ulonglong)local_2c + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1468360ab FUN_1468360ab body=209 status=ok
// SIG undefined FUN_1468360ab(void)

ulonglong FUN_1468360ab(void)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ushort uVar6;
  undefined1 auStack_48 [33];
  byte local_27;
  ushort local_26;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = DAT_14c8c4800;
  if (DAT_14c8c4800 == 0) {
    uVar5 = FUN_146835fae();
  }
  uVar4 = 0;
  if (1 < uVar5) {
    if ((DAT_14c8c47e8 == (code *)0x0) || (DAT_14c8c47f0 == (code *)0x0)) {
      DVar2 = GetCurrentProcessorNumber();
      local_27 = 0;
      BVar3 = GetNumaProcessorNode((UCHAR)DVar2,&local_27);
      uVar6 = (ushort)local_27;
      if (BVar3 == 0) {
        uVar6 = 0;
      }
    }
    else {
      (*DAT_14c8c47e8)(local_24);
      local_26 = 0;
      iVar1 = (*DAT_14c8c47f0)(local_24);
      uVar6 = 0;
      if (iVar1 != 0) {
        uVar6 = local_26;
      }
    }
    uVar4 = (ulonglong)uVar6;
    if (uVar5 <= uVar4) {
      uVar4 = (ulonglong)(ushort)(uVar6 % (ushort)uVar5);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14683617d FUN_14683617d body=283 status=ok
// SIG undefined FUN_14683617d(void)

ulonglong FUN_14683617d(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  sbyte sVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  bool bVar9;
  
  uVar6 = param_3 >> 6;
  uVar1 = (uint)param_3 & 0x3f;
  uVar4 = (ulonglong)uVar1;
  sVar3 = (sbyte)uVar1;
  if (uVar4 + param_2 < 0x41) {
    uVar4 = ~(-1L << ((byte)param_2 & 0x3f)) << sVar3;
    if (0x3f < param_2) {
      uVar4 = 0xffffffffffffffff;
    }
    uVar5 = *(ulonglong *)(param_1 + uVar6 * 8);
    do {
      puVar7 = (ulonglong *)(param_1 + uVar6 * 8);
      LOCK();
      uVar8 = *puVar7;
      bVar9 = uVar5 == uVar8;
      if (bVar9) {
        *puVar7 = uVar5 & ~uVar4;
        uVar8 = uVar5;
      }
      UNLOCK();
      uVar5 = uVar8;
    } while (!bVar9);
    uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),(uVar4 & ~uVar8) == 0);
  }
  else {
    uVar8 = -(ulonglong)(uVar4 == 0) | ~(-1L << (-sVar3 & 0x3fU)) << sVar3;
    param_2 = param_2 - (0x40 - uVar4);
    uVar5 = -1L << ((byte)param_2 & 0x3f);
    puVar7 = (ulonglong *)(param_1 + uVar6 * 8);
    uVar6 = ~uVar8;
    uVar4 = *puVar7;
    do {
      LOCK();
      uVar2 = *puVar7;
      bVar9 = uVar4 == uVar2;
      if (bVar9) {
        *puVar7 = uVar4 & uVar6;
        uVar2 = uVar4;
      }
      UNLOCK();
      uVar4 = uVar2;
    } while (!bVar9);
    uVar4 = CONCAT71((int7)(uVar6 >> 8),(uVar8 & ~uVar2) == 0);
    puVar7 = puVar7 + 1;
    if (0x3f < param_2) {
      uVar6 = param_2 >> 6;
      do {
        LOCK();
        uVar8 = *puVar7;
        *puVar7 = 0;
        UNLOCK();
        uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & uVar8 == 0xffffffffffffffff);
        puVar7 = puVar7 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if ((param_2 & 0x3f) != 0) {
      uVar6 = *puVar7;
      do {
        LOCK();
        uVar8 = *puVar7;
        bVar9 = uVar6 == uVar8;
        if (bVar9) {
          *puVar7 = uVar6 & uVar5;
          uVar8 = uVar6;
        }
        UNLOCK();
        uVar6 = uVar8;
      } while (!bVar9);
      uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 & (uVar8 | uVar5) == 0xffffffffffffffff);
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 146836298 FUN_146836298 body=324 status=ok
// SIG undefined FUN_146836298(void)

void FUN_146836298(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0 || param_1 == 0) {
LAB_1468362c6:
    if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if (param_3 == 0) {
    FUN_146835b86(param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
  }
  lVar1 = *(longlong *)(&DAT_14c8c4838 + (param_3 & 0xff) * 8);
  if (lVar1 == 0) {
    pcVar3 = "trying to free from non-existent arena: %p, size %zu, memid: 0x%zx\n";
  }
  else {
    if (param_3 >> 0xe < *(ulonglong *)(lVar1 + 0x10)) {
      uVar4 = param_2 + 0x7fffffU >> 0x17;
      if (*(char *)(lVar1 + 0x1d) == '\0') {
        FUN_14279e169(param_1,param_2 + 0x7fffffU & 0xffffffffff800000,&local_39);
        FUN_14683617d(*(undefined8 *)(lVar1 + 0x30),uVar4,param_3 >> 8);
      }
      cVar2 = FUN_14683617d(lVar1 + 0x38,uVar4,param_3 >> 8);
      if (cVar2 == '\0') {
        FUN_1468363fc(0xb,"trying to free an already freed block: %p, size %zu\n",param_1,param_2);
      }
      goto LAB_1468362c6;
    }
    pcVar3 = "trying to free from non-existent arena block: %p, size %zu, memid: 0x%zx\n";
  }
  local_48 = param_3;
  FUN_1468363fc(0x16,pcVar3,param_1,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1468363fc FUN_1468363fc body=221 status=ok
// SIG undefined FUN_1468363fc(void)

void FUN_1468363fc(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulonglong uVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res18;
  if (DAT_14c75e9d4 == 0) {
    FUN_1412bb367(&DAT_14c75e9d0);
  }
  if (DAT_14c75e9d0 == 0) {
    if (DAT_14c75ea04 == 0) {
      FUN_1412bb367(&DAT_14c75ea00);
    }
    if (DAT_14c75ea00 == 0) goto LAB_146836455;
  }
  LOCK();
  uVar2 = DAT_14c926c68 + 1;
  UNLOCK();
  bVar1 = DAT_14c926c68 <= DAT_14c75ebe0;
  DAT_14c926c68 = uVar2;
  if (bVar1) {
    local_38 = &local_res18;
    FUN_146838379(0,0,"mimalloc: error: ",param_2);
  }
LAB_146836455:
  if (DAT_14c91eb58 != (code *)0x0) {
    (*DAT_14c91eb58)(param_1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468364da FUN_1468364da body=241 status=ok
// SIG undefined FUN_1468364da(void)

bool FUN_1468364da(undefined8 param_1,longlong param_2,undefined1 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar3 = param_2 + 0x7fffffU >> 0x17;
  uVar5 = uVar3 + 0x3f >> 6;
  puVar2 = (undefined8 *)FUN_146835ca1();
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = uVar3;
    puVar2[2] = uVar5;
    *puVar2 = param_1;
    *(undefined4 *)(puVar2 + 3) = param_4;
    *(undefined1 *)((longlong)puVar2 + 0x1e) = param_3;
    *(undefined2 *)((longlong)puVar2 + 0x1c) = 0x101;
    puVar2[4] = 0;
    puVar2[5] = puVar2 + uVar5 + 7;
    puVar2[6] = 0;
    uVar5 = uVar3 + 0x3f & 0xffffffffffffffc0;
    uVar4 = uVar5 - uVar3;
    if (uVar4 != 0 && uVar3 <= uVar5) {
      uVar3 = ~(-1L << ((byte)uVar4 & 0x3f)) << ((byte)uVar3 & 0x3f);
      if (0x3f < uVar4) {
        uVar3 = 0xffffffffffffffff;
      }
      LOCK();
      puVar2[(param_2 + 0x7fffffU >> 0x1d) + 7] = puVar2[(param_2 + 0x7fffffU >> 0x1d) + 7] | uVar3;
      UNLOCK();
    }
    LOCK();
    UNLOCK();
    if (DAT_14c8c4a40 < 0x40) {
      lVar1 = DAT_14c8c4a40 * 8;
      DAT_14c8c4a40 = DAT_14c8c4a40 + 1;
      *(undefined8 **)(&DAT_14c8c4840 + lVar1) = puVar2;
    }
    else {
      LOCK();
      UNLOCK();
    }
  }
  return puVar2 != (undefined8 *)0x0;
}



// FUNCTION 1468365cb FUN_1468365cb body=219 status=ok
// SIG undefined FUN_1468365cb(void)

void FUN_1468365cb(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = FUN_146835b86();
  local_19 = '\x01';
  lVar3 = FUN_146835d48(lVar2);
  if (lVar3 != 0) {
    cVar1 = FUN_1468364da(lVar3,lVar2,local_19,0xffffffff);
    if (cVar1 == '\0') {
      if (lVar2 != 0) {
        uVar4 = FUN_146835b86(lVar2);
        FUN_14279e0e4(lVar3,uVar4,1);
      }
      FUN_1412bb2e0("failed to reserve %zu k memory\n",lVar2 + 0x3ffU >> 10);
    }
    else {
      pcVar5 = "";
      if (local_19 != '\0') {
        pcVar5 = " (in large os pages)";
      }
      FUN_1412bb2e0("reserved %zu kb memory%s\n",lVar2 + 0x3ffU >> 10,pcVar5);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468366a7 FUN_1468366a7 body=327 status=ok
// SIG undefined FUN_1468366a7(void)

undefined8 FUN_1468366a7(longlong param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  ulonglong *local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = 0;
  if (param_1 != 0) {
    uVar4 = 0xffffffff;
    if (-1 < (int)param_2) {
      uVar4 = DAT_14c8c4800;
      if (DAT_14c8c4800 == 0) {
        uVar4 = FUN_146835fae();
      }
      uVar4 = (ulonglong)param_2 % uVar4;
    }
    uVar3 = 0;
    local_48 = &local_38;
    local_38 = 0;
    local_40 = 0;
    lVar2 = FUN_14279e2d4(param_1,uVar4 & 0xffffffff,param_3,&local_40);
    if (local_40 == 0 || lVar2 == 0) {
      FUN_146835ac3("failed to reserve %zu gb huge pages\n",param_1);
      uVar3 = 0xc;
    }
    else {
      FUN_1412bb2e0("numa node %i: reserved %zu gb huge pages (of the %zu gb requested)\n",
                    uVar4 & 0xffffffff,local_40,param_1);
      cVar1 = FUN_1468364da(lVar2,local_38,1,uVar4 & 0xffffffff);
      if (cVar1 == '\0') {
        uVar3 = 0xc;
        for (uVar4 = local_38; 0x3fffffff < uVar4; uVar4 = uVar4 - 0x40000000) {
          FUN_14279e0e4(lVar2,0x40000000,1);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1468367ef FUN_1468367ef body=181 status=ok
// SIG undefined FUN_1468367ef(void)

void FUN_1468367ef(ulonglong param_1,ulonglong param_2)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if (param_1 != 0) {
    uVar4 = DAT_14c8c4800;
    if (DAT_14c8c4800 == 0) {
      uVar4 = FUN_146835fae();
    }
    uVar5 = uVar4 + (uVar4 == 0);
    lVar9 = 0;
    if (param_2 != 0) {
      lVar9 = param_2 / uVar5 + 0x32;
    }
    uVar7 = 0;
    uVar6 = param_1;
    while( true ) {
      uVar8 = param_1 / uVar5 + (ulonglong)(uVar7 < param_1 % uVar5);
      iVar2 = FUN_1468366a7(uVar8,uVar7 & 0xffffffff,lVar9);
      if (iVar2 != 0) break;
      uVar3 = 0;
      if (uVar8 <= uVar6) {
        uVar3 = uVar6 - uVar8;
      }
      uVar7 = uVar7 + 1;
      if (uVar4 <= uVar7) {
        return;
      }
      bVar1 = uVar6 <= uVar8;
      uVar6 = uVar3;
      if (bVar1) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 1468368a4 FUN_1468368a4 body=511 status=ok
// SIG undefined FUN_1468368a4(void)

undefined8
FUN_1468368a4(ulonglong param_1,longlong param_2,longlong param_3,char param_4,char param_5)

{
  undefined1 auVar1 [16];
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  bool bVar13;
  
  if ((param_1 & 0x7fffff) == 0) {
    if ((DAT_14c8c4800 == 1) || (uVar3 = FUN_1468360ab(), uVar3 == 0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = DAT_14c8c4800;
      if (DAT_14c8c4800 == 0) {
        uVar11 = FUN_146835fae();
      }
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar11;
      uVar11 = (ulonglong)uVar3 * SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x10)) / auVar1,0);
      if (0xf < uVar11) {
        uVar11 = 0;
      }
    }
    FUN_146836aa3();
    lVar9 = 0;
    do {
      if (0xf < uVar11) {
        uVar11 = 0;
      }
      uVar5 = (&DAT_14c8cea80)[uVar11];
      if (uVar5 != 0xffffffffffffffff) {
        uVar7 = uVar5 ^ 0xffffffffffffffff;
        if (uVar7 == 0) {
          lVar12 = 0x40;
        }
        else {
          lVar12 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
            }
          }
        }
        uVar7 = 1L << ((byte)lVar12 & 0x3f);
        do {
          plVar10 = (longlong *)(&DAT_14c8c4a98 + lVar12 * 0x28 + uVar11 * 0xa00);
          while ((uVar7 & uVar5) != 0) {
            lVar12 = lVar12 + 1;
            uVar7 = uVar7 * 2;
            plVar10 = plVar10 + 5;
            if (lVar12 == 0x40) goto LAB_146836975;
          }
          LOCK();
          uVar4 = (&DAT_14c8cea80)[uVar11];
          bVar13 = uVar5 == uVar4;
          if (bVar13) {
            (&DAT_14c8cea80)[uVar11] = uVar7 | uVar5;
            uVar4 = uVar5;
          }
          UNLOCK();
          uVar5 = uVar4;
          if (bVar13) {
            plVar10[-3] = param_1;
            plVar10[-2] = param_2;
            *(char *)(plVar10 + -1) = param_5;
            plVar10[1] = 0;
            *plVar10 = param_3;
            if ((param_3 != 0 && param_4 == '\0') && param_5 == '\0') {
              if (DAT_14c75eb24 == 0) {
                FUN_1412bb367(&DAT_14c75eb20);
              }
              if (DAT_14c75eb20 != 0) {
                if (DAT_14c75eb54 == 0) {
                  FUN_1412bb367(&DAT_14c75eb50);
                }
                lVar9 = (longlong)DAT_14c75eb50;
                if (lVar9 == 0) {
                  FUN_146836bc3(plVar10,param_1);
                }
                else {
                  lVar6 = FUN_145d75773();
                  plVar10[1] = lVar6 + lVar9;
                }
              }
            }
            puVar8 = &DAT_14c75d740;
            if (param_4 != '\0') {
              puVar8 = &DAT_14c75d6c0;
            }
            bVar2 = (byte)lVar12 & 0x3f;
            uVar5 = -2L << bVar2 | 0xfffffffffffffffeU >> 0x40 - bVar2;
            LOCK();
            puVar8[uVar11 & 0x3ffffffffffffff] = puVar8[uVar11 & 0x3ffffffffffffff] & uVar5;
            UNLOCK();
            return CONCAT71((int7)(uVar5 >> 8),1);
          }
        } while( true );
      }
LAB_146836975:
      lVar9 = lVar9 + 1;
      uVar11 = uVar11 + 1;
    } while (lVar9 != 0x10);
  }
  return 0;
}



// FUNCTION 146836aa3 FUN_146836aa3 body=288 status=ok
// SIG undefined FUN_146836aa3(void)

void FUN_146836aa3(void)

{
  byte *pbVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = FUN_145d75773();
  uVar4 = 0x11;
  if (uVar3 != 0) {
    uVar4 = uVar3;
  }
  uVar4 = (uVar4 >> 0x1e ^ uVar4) * -0x40a7b892e31b1a47;
  uVar4 = (uVar4 >> 0x1b ^ uVar4) * -0x6b2fb644ecceee15;
  uVar4 = (ulonglong)(((uint)(uVar4 >> 0x1f) ^ (uint)uVar4) & 0x3ff);
  lVar7 = 0x10;
  uVar6 = 0;
  do {
    uVar8 = 0;
    if (uVar4 < 0x400) {
      uVar8 = uVar4;
    }
    if ((longlong)(&DAT_14c8c4aa0)[uVar8 * 5] <= (longlong)uVar3 && (&DAT_14c8c4aa0)[uVar8 * 5] != 0
       ) {
      uVar5 = (uint)uVar8 & 0x3f;
      LOCK();
      pbVar1 = (byte *)((longlong)&DAT_14c75d740 +
                       ((longlong)(ulonglong)uVar5 >> 3) + (uVar8 >> 6) * 8);
      uVar4 = (ulonglong)uVar5 & 7;
      bVar2 = *pbVar1;
      *pbVar1 = *pbVar1 | '\x01' << uVar4;
      UNLOCK();
      if ((bVar2 >> uVar4 & 1) == 0) {
        if ((longlong)(&DAT_14c8c4aa0)[uVar8 * 5] <= (longlong)uVar3 &&
            (&DAT_14c8c4aa0)[uVar8 * 5] != 0) {
          (&DAT_14c8c4aa0)[uVar8 * 5] = 0;
          FUN_146836bc3(&DAT_14c8c4a98 + uVar8 * 0x28,(&DAT_14c8c4a80)[uVar8 * 5]);
        }
        LOCK();
        (&DAT_14c75d740)[uVar8 >> 6] = (&DAT_14c75d740)[uVar8 >> 6] & ~(1L << (sbyte)uVar5);
        UNLOCK();
      }
      uVar6 = uVar6 + 1;
      if (4 < uVar6) {
        return;
      }
    }
    uVar4 = uVar8 + 1;
    lVar7 = lVar7 + -1;
    if (lVar7 == 0) {
      return;
    }
  } while( true );
}



// FUNCTION 146836bc3 FUN_146836bc3 body=198 status=ok
// SIG undefined FUN_146836bc3(void)

void FUN_146836bc3(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [46];
  undefined1 local_3a;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = *param_1;
  if (uVar5 == 0xffffffffffffffff) {
    FUN_14279e169(param_2,0x800000,&local_3a);
  }
  else if (uVar5 != 0) {
    lVar6 = 0;
    do {
      if ((uVar5 & 1) == 0) {
LAB_146836c01:
        lVar3 = 0;
      }
      else {
        lVar2 = 0;
        lVar3 = 0;
        uVar4 = uVar5;
        do {
          uVar5 = uVar4 >> 1;
          lVar3 = lVar3 + 1;
          lVar2 = lVar2 + 0x20000;
          uVar1 = uVar4 & 2;
          uVar4 = uVar5;
        } while (uVar1 != 0);
        if (lVar3 == 0) goto LAB_146836c01;
        FUN_14279e169(lVar6 * 0x20000 + param_2,lVar2,&local_39);
      }
      lVar6 = lVar6 + lVar3 + 1;
      bVar7 = uVar5 != 0;
      uVar5 = uVar5 >> 1;
    } while (bVar7);
  }
  *param_1 = 0;
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146836c8a FUN_146836c8a body=188 status=ok
// SIG undefined FUN_146836c8a(void)

longlong FUN_146836c8a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = *(longlong *)(param_1 + 0x390);
  if (lVar2 != 0) {
    *(longlong *)(param_1 + 0x380) = *(longlong *)(param_1 + 0x380) + -1;
    *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(lVar2 + 0x30);
    *(undefined8 *)(lVar2 + 0x30) = 0;
    lVar3 = *(longlong *)(param_1 + 0x398);
    if ((undefined *)(lVar3 + 0x1a0) < (undefined *)0x14c8c47c0 &&
        &DAT_14c8c4580 <= (undefined *)(lVar3 + 0x1a0)) {
      LOCK();
      plVar1 = (longlong *)(lVar3 + 0x1b8);
      lVar5 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      do {
        lVar4 = *(longlong *)(lVar3 + 0x1b0);
        if (lVar5 + -1 <= lVar4) break;
        LOCK();
        bVar6 = lVar4 == *(longlong *)(lVar3 + 0x1b0);
        if (bVar6) {
          *(longlong *)(lVar3 + 0x1b0) = lVar5 + -1;
        }
        UNLOCK();
      } while (!bVar6);
      LOCK();
      *(longlong *)(lVar3 + 0x1a8) = *(longlong *)(lVar3 + 0x1a8) + 1;
      UNLOCK();
    }
    else {
      lVar5 = *(longlong *)(lVar3 + 0x1b8) + -1;
      *(longlong *)(lVar3 + 0x1b8) = lVar5;
      if (*(longlong *)(lVar3 + 0x1b0) < lVar5) {
        *(longlong *)(lVar3 + 0x1b0) = lVar5;
      }
      *(longlong *)(lVar3 + 0x1a8) = *(longlong *)(lVar3 + 0x1a8) + 1;
    }
  }
  return lVar2;
}



// FUNCTION 146836d46 FUN_146836d46 body=266 status=ok
// SIG undefined FUN_146836d46(void)

void FUN_146836d46(undefined8 *param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  
  param_1[0xe] = 0;
  if ((undefined8 *)0x1fffffff < param_1 && (uint)((ulonglong)param_1 >> 0x2a) < 5) {
    bVar1 = (byte)((ulonglong)param_1 >> 0x17) & 0x3f;
    uVar3 = *(ulonglong *)(&DAT_14c8ceb00 + ((ulonglong)param_1 >> 0x1d) * 8);
    do {
      LOCK();
      uVar4 = *(ulonglong *)(&DAT_14c8ceb00 + ((ulonglong)param_1 >> 0x1d) * 8);
      bVar6 = uVar3 == uVar4;
      if (bVar6) {
        *(ulonglong *)(&DAT_14c8ceb00 + ((ulonglong)param_1 >> 0x1d) * 8) =
             uVar3 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
        uVar4 = uVar3;
      }
      UNLOCK();
      uVar3 = uVar4;
    } while (!bVar6);
  }
  FUN_146838b08();
  uVar3 = param_1[0xb];
  lVar5 = uVar3 << 0x10;
  if (lVar5 == 0x800000) {
    cVar2 = FUN_1468368a4(param_1,*param_1,param_1[4],*(undefined1 *)((longlong)param_1 + 9),
                          *(undefined1 *)(param_1 + 1));
    if (cVar2 != '\0') {
      return;
    }
  }
  uVar4 = param_1[4];
  if (uVar4 != 0xffffffffffffffff) {
    if (uVar4 == 0) goto LAB_146836e33;
    lVar5 = 0;
    do {
      lVar5 = lVar5 + (ulonglong)((uint)uVar4 & 1);
      bVar6 = 1 < uVar4;
      uVar4 = uVar4 >> 1;
    } while (bVar6);
    lVar5 = (uVar3 & 0xffffffffffff) * 0x400 * lVar5;
  }
  if ((lVar5 != 0) && (*(char *)(param_1 + 1) == '\0')) {
    FUN_146834e7d(&DAT_14c8c45e0,-lVar5);
  }
LAB_146836e33:
  FUN_146836298(param_1,param_1[0xb] << 0x10,*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



// FUNCTION 146836e50 FUN_146836e50 body=91 status=ok
// SIG undefined FUN_146836e50(void)

void FUN_146836e50(ulonglong param_1,undefined4 param_2,undefined8 param_3)

{
  ulonglong uVar1;
  
  uVar1 = param_1 & 0xffffffffff800000;
  FUN_146836eab(param_1,param_3);
  if (*(longlong *)(uVar1 + 0x48) == 0) {
    FUN_1468370b5(uVar1,param_2,param_3);
    return;
  }
  if (*(longlong *)(uVar1 + 0x48) != *(longlong *)(uVar1 + 0x38)) {
    return;
  }
  FUN_14683727d(uVar1,param_3);
  return;
}



// FUNCTION 146836eab FUN_146836eab body=521 status=ok
// SIG undefined FUN_146836eab(void)

void FUN_146836eab(uint *param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = (ulonglong)param_1[7];
  if (0x7ffffff < uVar6) {
    uVar6 = (ulonglong)*param_1 << 0x10;
  }
  uVar7 = (ulonglong)param_1 & 0xffffffffff800000;
  FUN_146834e7d(*(longlong *)(param_2 + 0x398) + 0xa0,-(uVar6 * *(ushort *)((longlong)param_1 + 10))
               );
  lVar8 = *(longlong *)(param_2 + 0x398);
  if ((undefined *)(lVar8 + 0x20) < (undefined *)0x14c8c47c0 &&
      &DAT_14c8c4580 <= (undefined *)(lVar8 + 0x20)) {
    LOCK();
    plVar1 = (longlong *)(lVar8 + 0x38);
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    do {
      lVar3 = *(longlong *)(lVar8 + 0x30);
      if (lVar5 + -1 <= lVar3) break;
      LOCK();
      bVar9 = lVar3 == *(longlong *)(lVar8 + 0x30);
      if (bVar9) {
        *(longlong *)(lVar8 + 0x30) = lVar5 + -1;
      }
      UNLOCK();
    } while (!bVar9);
    LOCK();
    *(longlong *)(lVar8 + 0x28) = *(longlong *)(lVar8 + 0x28) + 1;
    UNLOCK();
  }
  else {
    lVar5 = *(longlong *)(lVar8 + 0x38) + -1;
    *(longlong *)(lVar8 + 0x38) = lVar5;
    if (*(longlong *)(lVar8 + 0x30) < lVar5) {
      *(longlong *)(lVar8 + 0x30) = lVar5;
    }
    *(longlong *)(lVar8 + 0x28) = *(longlong *)(lVar8 + 0x28) + 1;
  }
  if ((*(char *)(uVar7 + 8) == '\0') && ((param_1[2] & 1) == 0)) {
    if (DAT_14c75eac4 == 0) {
      FUN_1412bb367(&DAT_14c75eac0);
    }
    if (DAT_14c75eac0 != 0) {
      uVar2 = *param_1;
      lVar8 = ((longlong)param_1 + (-0x80 - uVar7) >> 4) * -0x3333333333330000 + uVar7;
      *(byte *)(param_1 + 2) = (byte)param_1[2] | 1;
      cVar4 = FUN_146835f20(lVar8,(ulonglong)uVar2 << 0x10);
      if (cVar4 != '\0') {
        if (DAT_14c75ea4c == 0) {
          FUN_1412bb367(&DAT_14c75ea48);
        }
        if ((DAT_14c75ea48 != 0) && (*(int *)(uVar7 + 0x68) != 1)) {
          local_50 = local_48;
          local_58 = local_40;
          uVar6 = FUN_146838c0b(uVar7,0,lVar8,(ulonglong)uVar2 << 0x10);
          *(ulonglong *)(uVar7 + 0x20) = *(ulonglong *)(uVar7 + 0x20) & ~uVar6;
        }
      }
    }
  }
  *(byte *)(param_1 + 2) = (byte)param_1[2] & 0xfb;
  *(undefined8 *)((longlong)param_1 + 0x3a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22) = 0;
  *(undefined8 *)((longlong)param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x12) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[7] = 1;
  FUN_146838cf8(param_1,param_2);
  *(longlong *)(uVar7 + 0x48) = *(longlong *)(uVar7 + 0x48) + -1;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468370b5 FUN_1468370b5 body=456 status=ok
// SIG undefined FUN_1468370b5(void)

longlong FUN_1468370b5(longlong param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint *puVar9;
  bool bVar10;
  
  lVar6 = *(longlong *)(param_1 + 0x78);
  if (0 < lVar6) {
    puVar9 = (uint *)(param_1 + 0x80);
    do {
      if ((puVar9[7] == 0) && (*(int *)(param_1 + 0x68) != 1)) {
        FUN_146838de9(puVar9,param_3);
      }
      puVar9 = puVar9 + (ulonglong)*puVar9 * 0x14;
    } while (puVar9 < (uint *)(param_1 + lVar6 * 0x50 + 0x80));
  }
  FUN_146834e7d(*(longlong *)(param_3 + 0x398) + 0xa0,*(longlong *)(param_1 + 0x60) * -0x10000);
  if ((param_2 == '\0') && (*(longlong *)(param_1 + 0x58) == 0x80)) {
    if (DAT_14c75eaac == 0) {
      FUN_1412bb367(&DAT_14c75eaa8);
    }
    uVar8 = (ulonglong)DAT_14c75eaa8;
    uVar3 = *(ulonglong *)(param_3 + 0x380);
    if ((uVar3 < uVar8) && (uVar3 <= *(ulonglong *)(param_3 + 0x368) >> 3)) {
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0x390);
      *(longlong *)(param_3 + 0x390) = param_1;
      *(longlong *)(param_3 + 0x380) = *(longlong *)(param_3 + 0x380) + 1;
      lVar6 = *(longlong *)(param_3 + 0x398);
      plVar7 = (longlong *)(lVar6 + 0x1a0);
      if (plVar7 < (longlong *)0x14c8c47c0 && &DAT_14c8c4580 <= plVar7) {
        LOCK();
        plVar1 = (longlong *)(lVar6 + 0x1b8);
        lVar2 = *plVar1;
        *plVar1 = *plVar1 + 1;
        UNLOCK();
        do {
          lVar4 = *(longlong *)(lVar6 + 0x1b0);
          lVar5 = lVar4;
          if (lVar2 < lVar4) break;
          LOCK();
          lVar5 = *(longlong *)(lVar6 + 0x1b0);
          bVar10 = lVar4 == lVar5;
          if (bVar10) {
            *(longlong *)(lVar6 + 0x1b0) = lVar2 + 1;
            lVar5 = lVar4;
          }
          UNLOCK();
        } while (!bVar10);
        LOCK();
        *plVar7 = *plVar7 + 1;
        UNLOCK();
      }
      else {
        lVar2 = *(longlong *)(lVar6 + 0x1b8);
        lVar5 = lVar2 + 1;
        *(longlong *)(lVar6 + 0x1b8) = lVar5;
        if (*(longlong *)(lVar6 + 0x1b0) <= lVar2) {
          *(longlong *)(lVar6 + 0x1b0) = lVar5;
        }
        *plVar7 = *plVar7 + 1;
      }
      return lVar5;
    }
    while (uVar8 < uVar3) {
      lVar6 = FUN_146836c8a(param_3);
      if (lVar6 != 0) {
        FUN_146836d46(lVar6,param_3);
      }
      uVar3 = *(ulonglong *)(param_3 + 0x380);
    }
  }
  lVar6 = FUN_146836d46(param_1,param_3);
  return lVar6;
}



// FUNCTION 14683727d FUN_14683727d body=373 status=ok
// SIG undefined FUN_14683727d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14683727d(ulonglong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint *puVar8;
  bool bVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x78);
  if (0 < lVar3) {
    puVar8 = (uint *)(param_1 + 0x80);
    do {
      if (puVar8[7] == 0) {
        FUN_146838de9(puVar8,param_2);
        puVar8[7] = 0;
      }
      puVar8 = puVar8 + (ulonglong)*puVar8 * 0x14;
    } while (puVar8 < (uint *)(param_1 + lVar3 * 0x50 + 0x80));
  }
  if (DAT_14c75eadc == 0) {
    FUN_1412bb367(&DAT_14c75ead8);
  }
  FUN_146839183(param_1,DAT_14c75ead8 != 0);
  lVar3 = *(longlong *)(param_2 + 0x398);
  plVar7 = (longlong *)(lVar3 + 0xc0);
  if (plVar7 < (longlong *)0x14c8c47c0 && &DAT_14c8c4580 <= plVar7) {
    LOCK();
    plVar1 = (longlong *)(lVar3 + 0xd8);
    lVar2 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    do {
      lVar4 = *(longlong *)(lVar3 + 0xd0);
      if (lVar2 < lVar4) break;
      LOCK();
      bVar9 = lVar4 == *(longlong *)(lVar3 + 0xd0);
      if (bVar9) {
        *(longlong *)(lVar3 + 0xd0) = lVar2 + 1;
      }
      UNLOCK();
    } while (!bVar9);
    LOCK();
    *plVar7 = *plVar7 + 1;
    UNLOCK();
  }
  else {
    lVar4 = *(longlong *)(lVar3 + 0xd8);
    lVar2 = lVar4 + 1;
    *(longlong *)(lVar3 + 0xd8) = lVar2;
    if (*(longlong *)(lVar3 + 0xd0) <= lVar4) {
      *(longlong *)(lVar3 + 0xd0) = lVar2;
    }
    *plVar7 = *plVar7 + 1;
  }
  FUN_146838b08(*(int *)(param_1 + 0x58) * -0x10000,param_2);
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x40) = 1;
  uVar6 = DAT_14c91ec00;
  do {
    *(ulonglong *)(param_1 + 0x28) = uVar6 & 0xffffffffff800000;
    LOCK();
    bVar9 = uVar6 != DAT_14c91ec00;
    uVar5 = (int)uVar6 + 1U & 0x7fffff | param_1;
    if (bVar9) {
      uVar6 = DAT_14c91ec00;
      uVar5 = DAT_14c91ec00;
    }
    DAT_14c91ec00 = uVar5;
    UNLOCK();
  } while (bVar9);
  LOCK();
  _DAT_14c91ec40 = _DAT_14c91ec40 + 1;
  UNLOCK();
  return;
}


