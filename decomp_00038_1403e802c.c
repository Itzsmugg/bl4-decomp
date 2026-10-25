// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1403e802c FUN_1403e802c body=198 status=ok
// SIG undefined FUN_1403e802c(void)

longlong FUN_1403e802c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x110;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x110) == *param_3) {
          if (lVar3 != 0) goto LAB_1403e80d5;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x108);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_14570ac9a(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x110 + *param_1;
LAB_1403e80d5:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x18;
}



// FUNCTION 1403e80f4 FUN_1403e80f4 body=305 status=ok
// SIG undefined FUN_1403e80f4(void)

undefined4 *
FUN_1403e80f4(longlong *param_1,undefined4 *param_2,undefined8 param_3,undefined4 *param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined7 uStack_57;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar1 = FUN_14477b072(param_1,DAT_14cb27290);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_60 = DAT_14c8464f0;
    local_70 = DAT_14c8464e0;
    uStack_68 = DAT_14c8464e8;
    uStack_58 = 0;
    local_98 = *param_4;
    uStack_94 = param_4[1];
    uStack_90 = param_4[2];
    uStack_8c = param_4[3];
    local_88 = param_4[4];
    uStack_84 = param_4[5];
    uStack_80 = param_4[6];
    uStack_7c = param_4[7];
    local_78 = param_5;
    local_a0 = param_3;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_a0);
    *(undefined8 *)(param_2 + 4) = local_60;
    *(ulonglong *)(param_2 + 6) = CONCAT71(uStack_57,uStack_58);
    *param_2 = (undefined4)local_70;
    param_2[1] = local_70._4_4_;
    param_2[2] = (undefined4)uStack_68;
    param_2[3] = uStack_68._4_4_;
  }
  else {
    local_c8 = *param_4;
    uStack_c4 = param_4[1];
    uStack_c0 = param_4[2];
    uStack_bc = param_4[3];
    local_b8 = param_4[4];
    uStack_b4 = param_4[5];
    uStack_b0 = param_4[6];
    uStack_ac = param_4[7];
    local_d8 = param_5;
    (**(code **)(*param_1 + 0x2a0))(param_1,param_2,param_3);
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e830c FUN_1403e830c body=4929 status=ok
// SIG undefined FUN_1403e830c(void)

void FUN_1403e830c(longlong param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  uint *puVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  void *pvVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined4 *puVar21;
  longlong *plVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  int iVar28;
  longlong lVar29;
  uint *puVar30;
  uint uVar31;
  uint uVar32;
  bool bVar33;
  bool bVar34;
  undefined1 auStack_128 [40];
  longlong *local_100;
  undefined1 local_f1;
  longlong *local_f0;
  int local_e4;
  longlong local_e0;
  int local_d8;
  uint local_d4;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  uint *local_a8;
  ulonglong local_a0;
  longlong local_98 [3];
  longlong local_80;
  longlong *local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f1 = param_3;
  local_b8 = param_4;
  plVar9 = (longlong *)FUN_14032f648();
  local_d0 = plVar9[0x22];
  if (local_d0 == 0) {
    (**(code **)(*plVar9 + 1000))(plVar9);
    local_d0 = plVar9[0x22];
  }
  plVar9 = (longlong *)(param_1 + 0x7e0);
  iVar28 = *(int *)(param_1 + 0x7e8);
  iVar14 = iVar28;
  local_100 = plVar9;
  if (iVar28 != *(int *)(param_1 + 0x814)) {
    FUN_144a7d214();
    iVar28 = *(int *)(param_1 + 0x808);
    plVar9 = local_100;
    if (iVar28 == 0) {
      uVar24 = 0;
      uVar19 = 1;
      iVar14 = 0;
      iVar25 = 0;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x800);
      if (*(uint **)(param_1 + 0x800) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x7f0);
      }
      uVar31 = *puVar10;
      if (uVar31 == 0) {
        iVar14 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar14 = iVar28 + -1;
        }
        uVar24 = 0;
        uVar19 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar19 = uVar24;
        }
        iVar25 = 0;
        do {
          if (uVar19 == uVar24) goto LAB_1403e852f;
          iVar25 = iVar25 + 0x20;
          uVar31 = puVar10[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar31 == 0);
      }
      else {
        uVar24 = 0;
        iVar25 = 0;
      }
      uVar19 = (ulonglong)(-uVar31 & uVar31);
      uVar23 = uVar19 * 2 + 1;
      lVar29 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      iVar14 = (iVar25 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      if (iVar28 <= iVar14) {
        iVar14 = iVar28;
      }
    }
    if (iVar14 < iVar28) {
      uVar31 = 0xffffffff;
      do {
        plVar3 = *(longlong **)(*plVar9 + 0x10 + (longlong)iVar14 * 0x28);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar22 = plVar3 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar9 = local_100;
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
              plVar9 = local_100;
            }
          }
        }
        uVar31 = uVar31 & ~(uint)uVar19;
        puVar10 = *(uint **)(param_1 + 0x800);
        if (*(uint **)(param_1 + 0x800) == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 0x7f0);
        }
        iVar28 = *(int *)(param_1 + 0x808);
        iVar14 = (int)uVar24;
        lVar29 = (longlong)iVar14;
        uVar15 = puVar10[lVar29] & uVar31;
        if (uVar15 == 0) {
          iVar16 = iVar28 + 0x1e;
          if (-1 < iVar28 + -1) {
            iVar16 = iVar28 + -1;
          }
          iVar16 = iVar16 >> 5;
          iVar17 = iVar16;
          if (iVar16 < iVar14) {
            iVar17 = iVar14;
          }
          if (iVar16 <= iVar14) break;
          lVar20 = 0;
          while( true ) {
            iVar25 = iVar25 + 0x20;
            uVar15 = puVar10[lVar29 + lVar20 + 1];
            if (uVar15 != 0) break;
            lVar20 = lVar20 + 1;
            if (iVar17 - lVar29 == lVar20) goto LAB_1403e852f;
          }
          uVar24 = (ulonglong)(iVar14 + (int)lVar20 + 1);
          uVar31 = 0xffffffff;
        }
        uVar19 = (ulonglong)(-uVar15 & uVar15);
        uVar23 = uVar19 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar14 = (iVar25 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
      } while (iVar14 < iVar28);
    }
LAB_1403e852f:
    iVar28 = 0;
    *(undefined4 *)(param_1 + 0x7e8) = 0;
    iVar14 = 0;
    if (*(int *)(param_1 + 0x7ec) < 0) {
      FUN_140549ad6(plVar9);
      iVar14 = *(int *)(param_1 + 0x7e8);
      plVar9 = local_100;
    }
    *(undefined8 *)(param_1 + 0x810) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x808) = 0;
  }
  uVar24 = (longlong)*(int *)(param_1 + 0x2e8) - (longlong)*(int *)(param_1 + 0x314);
  uVar31 = (uint)uVar24;
  if ((uint)(iVar14 - iVar28) < uVar31) {
    if ((int)uVar31 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar24);
    }
    uVar15 = uVar31 - iVar14;
    if (uVar15 != 0 && iVar14 <= (int)uVar31) {
      iVar28 = *(int *)(param_1 + 0x7ec);
      iVar25 = iVar14;
      if (iVar28 < (int)uVar31) {
        FUN_140549ad6(plVar9);
        iVar25 = *(int *)(param_1 + 0x7e8);
        iVar28 = *(int *)(param_1 + 0x7ec);
        plVar9 = local_100;
      }
      *(uint *)(param_1 + 0x7e8) = uVar15 + iVar25;
      if ((uint)(iVar28 - iVar25) < uVar15) {
        FUN_140549c28(plVar9);
        plVar9 = local_100;
      }
      if (iVar25 < (int)uVar31) {
        lVar29 = *plVar9;
        uVar24 = uVar24 & 0xffffffff;
        iVar28 = *(int *)(param_1 + 0x814);
        puVar21 = (undefined4 *)(lVar29 + uVar24 * 0x28 + -0x24);
        do {
          iVar16 = (int)uVar24;
          if (iVar28 != 0) {
            *(int *)(lVar29 + (longlong)*(int *)(param_1 + 0x810) * 0x28) = iVar16 + -1;
          }
          puVar21[-1] = 0xffffffff;
          if (*(int *)(param_1 + 0x814) < 1) {
            uVar8 = 0xffffffff;
          }
          else {
            uVar8 = *(undefined4 *)(param_1 + 0x810);
          }
          uVar24 = uVar24 - 1;
          *puVar21 = uVar8;
          *(int *)(param_1 + 0x810) = iVar16 + -1;
          iVar28 = *(int *)(param_1 + 0x814) + 1;
          *(int *)(param_1 + 0x814) = iVar28;
          puVar21 = puVar21 + -10;
        } while ((longlong)iVar25 < (longlong)uVar24);
      }
      if (iVar14 == 0) {
        *(uint *)(param_1 + 0x808) = uVar15;
        uVar32 = uVar15 + 0x1f >> 5;
        if (*(int *)(param_1 + 0x80c) + 0x1fU >> 5 < uVar32) {
          if ((0x80 < uVar15) || (*(longlong *)(param_1 + 0x800) != 0)) {
            uVar6 = 0;
            if (0x80 < uVar15) {
              uVar6 = uVar32;
            }
            FUN_1446efa72(param_1 + 0x800,0,uVar6,4);
          }
          *(uint *)(param_1 + 0x80c) = uVar15 + 0x1f & 0xffffffe0;
        }
        pvVar18 = *(void **)(param_1 + 0x800);
        if (*(void **)(param_1 + 0x800) == (void *)0x0) {
          pvVar18 = (void *)(param_1 + 0x7f0);
        }
        if (uVar15 < 0x101) {
          uVar32 = uVar32 + (uVar32 == 0);
        }
        memset(pvVar18,0,(ulonglong)(uVar32 << 2));
        iVar28 = *(int *)(param_1 + 0x808);
        iVar14 = iVar28 + 0x1f;
        if (-1 < iVar28) {
          iVar14 = iVar28;
        }
        plVar9 = local_100;
        if (iVar28 % 0x20 != 0) {
          pvVar18 = (void *)(param_1 + 0x7f0);
          if (*(void **)(param_1 + 0x800) != (void *)0x0) {
            pvVar18 = *(void **)(param_1 + 0x800);
          }
          bVar11 = -(char)(iVar28 % 0x20);
          *(uint *)((longlong)pvVar18 + (longlong)(iVar14 >> 5) * 4) =
               (uint)(*(int *)((longlong)pvVar18 + (longlong)(iVar14 >> 5) * 4) << (bVar11 & 0x1f))
               >> (bVar11 & 0x1f);
        }
      }
      else if (-1 < (int)uVar15) {
        uVar8 = FUN_144a54ea4(param_1 + 0x7f0,uVar15);
        FUN_1447c6044(param_1 + 0x7f0,uVar8,uVar15,0);
        plVar9 = local_100;
      }
    }
    iVar28 = 1;
    if (3 < uVar31) {
      uVar31 = (uVar31 | 1) + 0xe;
      iVar28 = 0x1f;
      if (uVar31 != 0) {
        for (; uVar31 >> iVar28 == 0; iVar28 = iVar28 + -1) {
        }
      }
      iVar28 = 1 << ((byte)iVar28 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x828) == 0) || (*(int *)(param_1 + 0x828) < iVar28)) {
      *(int *)(param_1 + 0x828) = iVar28;
      FUN_1403d5084(plVar9);
      plVar9 = local_100;
    }
  }
  uVar31 = *(uint *)(param_1 + 0x308);
  if (uVar31 == 0) {
    uVar19 = 1;
    uVar24 = 0;
    iVar28 = 0;
    uVar15 = 0;
  }
  else {
    puVar10 = *(uint **)(param_1 + 0x300);
    if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 0x2f0);
    }
    uVar15 = *puVar10;
    if (uVar15 == 0) {
      iVar28 = uVar31 + 0x1e;
      if (-1 < (int)(uVar31 - 1)) {
        iVar28 = uVar31 - 1;
      }
      uVar24 = 0;
      uVar19 = (ulonglong)(uint)(iVar28 >> 5);
      if (iVar28 >> 5 < 1) {
        uVar19 = uVar24;
      }
      iVar28 = 0;
      do {
        if (uVar19 == uVar24) goto LAB_1403e87bb;
        iVar28 = iVar28 + 0x20;
        uVar15 = puVar10[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar24 = 0;
      iVar28 = 0;
    }
    uVar19 = (ulonglong)(-uVar15 & uVar15);
    uVar23 = uVar19 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar23 != 0) {
      for (; uVar23 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    uVar15 = (iVar28 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
    if ((int)uVar31 <= (int)uVar15) {
      uVar15 = uVar31;
    }
  }
  if (uVar15 == uVar31) {
LAB_1403e87bb:
    bVar11 = 0;
  }
  else {
    local_e0 = param_1 + 0x7f0;
    local_c8 = param_1 + 0x818;
    uVar32 = 0xffffffff;
    bVar11 = 0;
    local_b0 = (ulonglong)uVar31;
    local_a8 = (uint *)(param_1 + 0x2f0);
    do {
      plVar3 = (longlong *)(*(longlong *)(param_1 + 0x2e0) + (longlong)(int)uVar15 * 0x110);
      bVar33 = true;
      if (((*(byte *)(*(longlong *)(param_1 + 0x2e0) + 0x4c + (longlong)(int)uVar15 * 0x110) & 2) ==
           0) && ((int)plVar3[0xb] == 0)) {
        bVar33 = (int)plVar3[0xf] != 0;
      }
      lVar29 = plVar3[1];
      local_e4 = iVar28;
      local_d4 = uVar32;
      local_a0 = uVar24;
      if (lVar29 == 0) {
        local_98[0] = *plVar3;
        local_98[1] = 0;
        local_98[2] = plVar3[2];
        if (local_98[2] != 0) {
          LOCK();
          *(int *)(local_98[2] + 8) = *(int *)(local_98[2] + 8) + 1;
          UNLOCK();
        }
        FUN_1402df5c4(&local_80,local_98);
        plVar22 = local_78;
        plVar3[1] = local_80;
        local_80 = 0;
        plVar9 = (longlong *)plVar3[2];
        if (local_78 == plVar9) {
LAB_1403e90c5:
          plVar9 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar22 = local_78 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)*local_78)(local_78);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
        }
        else {
          local_78 = (longlong *)0x0;
          plVar3[2] = (longlong)plVar22;
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar22 = plVar9 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
            goto LAB_1403e90c5;
          }
        }
        lVar29 = plVar3[1];
        plVar9 = local_100;
        if (lVar29 != 0) goto LAB_1403e89a4;
LAB_1403e8a86:
        bVar13 = 0;
      }
      else {
LAB_1403e89a4:
        if (2 < (byte)(*(char *)(lVar29 + 0x42) - 2U)) goto LAB_1403e8a86;
        bVar13 = -((double)plVar3[5] * (double)plVar3[5] +
                   (double)plVar3[3] * (double)plVar3[3] + (double)plVar3[4] * (double)plVar3[4] !=
                  0.0) & 1;
      }
      if ((((((*(byte *)(param_1 + 0x830) & 1) == 0) || ((*(byte *)(local_d0 + 0xe0) & 1) == 0)) ||
           (((double)plVar3[6] == 0.0 &&
            ((((!NAN((double)plVar3[6]) && ((double)plVar3[7] == 0.0)) && (!NAN((double)plVar3[7])))
             && (((double)plVar3[8] == 0.0 && (!NAN((double)plVar3[8]))))))))) ||
          ((double)plVar3[3] != 0.0)) ||
         (((NAN((double)plVar3[3]) || ((double)plVar3[4] != 0.0)) ||
          ((NAN((double)plVar3[4]) || (((double)plVar3[5] != 0.0 || (NAN((double)plVar3[5])))))))))
      {
        bVar34 = false;
      }
      else {
        bVar34 = (*(byte *)((longlong)plVar3 + 0x4c) & 1) == 0;
      }
      if (*(int *)(param_1 + 0x814) == 0) {
        iVar28 = *(int *)(param_1 + 0x7e8);
        *(int *)(param_1 + 0x7e8) = iVar28 + 1;
        if (*(int *)(param_1 + 0x7ec) == iVar28) {
          FUN_140549c28(plVar9,iVar28);
          plVar9 = local_100;
        }
        uVar31 = *(uint *)(param_1 + 0x808);
        plVar22 = (longlong *)(ulonglong)uVar31;
        if (uVar31 == 0) {
          iVar14 = -1;
        }
        else {
          iVar14 = uVar31 + 0x1e;
          if (-1 < (int)(uVar31 - 1)) {
            iVar14 = uVar31 - 1;
          }
          iVar14 = iVar14 >> 5;
        }
        iVar25 = uVar31 + 1;
        uVar15 = uVar31 + 0x1f;
        if (-1 < (int)uVar31) {
          uVar15 = uVar31;
        }
        iVar16 = (int)uVar15 >> 5;
        if (iVar16 == iVar14) {
          *(int *)(param_1 + 0x808) = iVar25;
        }
        else {
          if (*(int *)(param_1 + 0x80c) <= (int)uVar31) {
            local_f0 = plVar22;
            local_d8 = iVar16;
            if (uVar31 + 0x20 < 0xa0) {
              plVar22 = (longlong *)(ulonglong)uVar31;
              iVar14 = 0x80;
            }
            else {
              uVar15 = uVar31 + 0x20 >> 5;
              if (*(int *)(param_1 + 0x80c) + 0x1fU < 0xa0) {
                uVar32 = 4;
                if (4 < uVar15) {
                  uVar32 = uVar15;
                }
              }
              else {
                uVar32 = uVar15 + (uVar15 * 3 >> 3) + 0x10;
              }
              uVar24 = (ulonglong)(uVar32 * 4);
              if (DAT_14c872d28 == (longlong *)0x0) {
LAB_1403e8f68:
                plVar22 = (longlong *)(ulonglong)uVar31;
              }
              else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar6 = (uint)(uVar24 + 0xf);
                if (uVar32 < 0x1ffd) {
                  uVar24 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
                  goto LAB_1403e8f68;
                }
                uVar23 = uVar24 + 0xf & 0xfffffffffffffff0;
                if (uVar23 < 0x7ff1) {
                  bVar12 = (&DAT_14c841e00)[uVar6 >> 4];
                  uVar27 = 0x32;
                  if (0x32 < bVar12) {
                    uVar27 = (ulonglong)bVar12;
                  }
                  uVar26 = 0x32 - (ulonglong)bVar12;
                  do {
                    uVar24 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0) goto LAB_1403e8f6b;
                    lVar29 = uVar27 + 1 + uVar26;
                    uVar26 = uVar26 - 1;
                  } while (lVar29 != 0x33);
                }
                uVar24 = (ulonglong)DAT_14c841df8;
                if (DAT_14c841df8 < 0x11) {
                  uVar24 = 0x10;
                }
                uVar24 = -uVar24 & (uVar23 + uVar24) - 1;
              }
              else {
                local_c0 = (ulonglong)uVar15;
                uVar24 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar24,0);
                uVar15 = (uint)local_c0;
                plVar22 = (longlong *)(ulonglong)*(uint *)(param_1 + 0x808);
              }
LAB_1403e8f6b:
              iVar25 = (int)(uVar24 >> 2);
              iVar14 = iVar25 << 5;
              if (iVar25 < (int)uVar15) {
                iVar14 = -0x20;
              }
            }
            *(int *)(param_1 + 0x80c) = iVar14;
            FUN_1446efbd8(local_e0,plVar22);
            iVar25 = *(int *)(param_1 + 0x808) + 1;
            plVar9 = local_100;
            plVar22 = local_f0;
            iVar16 = local_d8;
          }
          iVar14 = iVar25 + 0x1f;
          if (-1 < iVar25) {
            iVar14 = iVar25;
          }
          *(int *)(param_1 + 0x808) = iVar25;
          if (iVar25 % 0x20 != 0) {
            lVar29 = *(longlong *)(param_1 + 0x800);
            if (*(longlong *)(param_1 + 0x800) == 0) {
              lVar29 = local_e0;
            }
            bVar12 = -(char)(iVar25 % 0x20);
            *(uint *)(lVar29 + (longlong)(iVar14 >> 5) * 4) =
                 (uint)(*(int *)(lVar29 + (longlong)(iVar14 >> 5) * 4) << (bVar12 & 0x1f)) >>
                 (bVar12 & 0x1f);
          }
        }
        lVar20 = (longlong)iVar28;
        lVar29 = *(longlong *)(param_1 + 0x800);
        if (*(longlong *)(param_1 + 0x800) == 0) {
          lVar29 = local_e0;
        }
        bVar12 = (byte)plVar22 & 0x1f;
        puVar10 = (uint *)(lVar29 + (longlong)iVar16 * 4);
        *puVar10 = *puVar10 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
      }
      else {
        iVar28 = *(int *)(param_1 + 0x810);
        lVar20 = (longlong)iVar28;
        iVar14 = *(int *)(*(longlong *)(param_1 + 0x7e0) + 4 + lVar20 * 0x28);
        *(int *)(param_1 + 0x810) = iVar14;
        iVar25 = *(int *)(param_1 + 0x814) + -1;
        *(int *)(param_1 + 0x814) = iVar25;
        if (iVar25 != 0) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x7e0) + (longlong)iVar14 * 0x28) = 0xffffffff;
        }
      }
      puVar10 = local_a8;
      lVar29 = *(longlong *)(param_1 + 0x800);
      if (*(longlong *)(param_1 + 0x800) == 0) {
        lVar29 = local_e0;
      }
      iVar14 = iVar28 + 0x1f;
      if (-1 < iVar28) {
        iVar14 = iVar28;
      }
      puVar30 = (uint *)(lVar29 + (longlong)(iVar14 >> 5) * 4);
      *puVar30 = *puVar30 | 1 << ((byte)iVar28 & 0x1f);
      plVar22 = (longlong *)(*(longlong *)(param_1 + 0x7e0) + lVar20 * 0x28);
      lVar29 = *plVar3;
      *plVar22 = lVar29;
      plVar22[1] = plVar3[1];
      lVar20 = plVar3[2];
      plVar22[2] = lVar20;
      if (lVar20 != 0) {
        LOCK();
        *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
        UNLOCK();
        lVar29 = *plVar22;
      }
      bVar13 = bVar33 | bVar13 | bVar34;
      *(byte *)(plVar22 + 3) = bVar13;
      *(undefined4 *)(plVar22 + 4) = 0xffffffff;
      uVar31 = (uint)((ulonglong)lVar29 >> 0x10);
      uVar15 = (uint)lVar29 & 0xffff;
      uVar31 = ((uint)lVar29 << 0x10 | uVar15) + (int)((ulonglong)lVar29 >> 0x20) +
               (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar15 >> 4);
      uVar15 = *(int *)(param_1 + 0x7e8) - *(int *)(param_1 + 0x814);
      if ((uVar15 != 0) && (uVar15 != 1)) {
        lVar20 = *(longlong *)(param_1 + 0x820);
        if (*(longlong *)(param_1 + 0x820) == 0) {
          lVar20 = local_c8;
        }
        iVar14 = *(int *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0x828) - 1U & uVar31) * 4);
        if (iVar14 != -1) {
          do {
            plVar3 = (longlong *)(*plVar9 + (longlong)iVar14 * 0x28);
            if (*plVar3 == lVar29) {
              plVar4 = (longlong *)plVar3[2];
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar4 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  local_f0 = plVar4;
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar2 = (int *)((longlong)local_f0 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  plVar9 = local_100;
                  if (*piVar2 == 0) {
                    (**(code **)(*local_f0 + 0x10))();
                    plVar9 = local_100;
                  }
                }
              }
              lVar29 = *plVar22;
              lVar20 = plVar22[1];
              lVar5 = plVar22[3];
              plVar3[2] = plVar22[2];
              plVar3[3] = lVar5;
              *plVar3 = lVar29;
              plVar3[1] = lVar20;
              FUN_1403d4ffa(plVar9,iVar28,1);
              plVar9 = local_100;
              goto LAB_1403e8cc2;
            }
            iVar14 = (int)plVar3[4];
          } while (iVar14 != -1);
        }
      }
      if (uVar15 < 4) {
        iVar14 = 1;
      }
      else {
        uVar24 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
        lVar29 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        iVar14 = 1 << ((byte)lVar29 & 0x1f);
      }
      if (((int)uVar15 < 1) || (iVar14 <= *(int *)(param_1 + 0x828))) {
        uVar31 = *(int *)(param_1 + 0x828) - 1U & uVar31;
        *(uint *)((longlong)plVar22 + 0x24) = uVar31;
        lVar29 = *(longlong *)(param_1 + 0x820);
        if (*(longlong *)(param_1 + 0x820) == 0) {
          lVar29 = local_c8;
        }
        *(undefined4 *)(plVar22 + 4) =
             *(undefined4 *)
              (lVar29 + ((longlong)*(int *)(param_1 + 0x828) - 1U & (longlong)(int)uVar31) * 4);
        lVar29 = *(longlong *)(param_1 + 0x820);
        if (*(longlong *)(param_1 + 0x820) == 0) {
          lVar29 = local_c8;
        }
        *(int *)(lVar29 + ((longlong)*(int *)(param_1 + 0x828) - 1U & (longlong)(int)uVar31) * 4) =
             iVar28;
      }
      else {
        *(int *)(param_1 + 0x828) = iVar14;
        FUN_1403d5084(plVar9);
        plVar9 = local_100;
      }
LAB_1403e8cc2:
      uVar32 = local_d4 & ~(uint)uVar19;
      puVar30 = *(uint **)(param_1 + 0x300);
      if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
        puVar30 = puVar10;
      }
      uVar31 = *(uint *)(param_1 + 0x308);
      iVar14 = (int)local_a0;
      lVar29 = (longlong)iVar14;
      uVar15 = puVar30[lVar29] & uVar32;
      uVar24 = local_a0;
      iVar28 = local_e4;
      if (uVar15 == 0) {
        iVar25 = uVar31 + 0x1e;
        if (-1 < (int)(uVar31 - 1)) {
          iVar25 = uVar31 - 1;
        }
        iVar25 = iVar25 >> 5;
        iVar28 = local_e4 + 0x20;
        iVar16 = iVar25;
        if (iVar25 < iVar14) {
          iVar16 = iVar14;
        }
        if (iVar14 < iVar25) {
          lVar20 = 0;
          do {
            uVar15 = puVar30[lVar29 + lVar20 + 1];
            if (uVar15 != 0) {
              uVar32 = 0xffffffff;
              uVar24 = (ulonglong)(iVar14 + (int)lVar20 + 1);
              goto LAB_1403e8d5d;
            }
            iVar28 = iVar28 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar16 - lVar29 != lVar20);
          uVar32 = 0xffffffff;
          iVar14 = iVar16;
        }
        uVar24 = (ulonglong)(iVar14 + 1);
        plVar9 = local_100;
        uVar15 = uVar31;
      }
      else {
LAB_1403e8d5d:
        uVar19 = (ulonglong)(-uVar15 & uVar15);
        uVar23 = uVar19 * 2 + 1;
        lVar29 = 0x3f;
        if (uVar23 != 0) {
          for (; uVar23 >> lVar29 == 0; lVar29 = lVar29 + -1) {
          }
        }
        uVar15 = (iVar28 - ((uint)lVar29 ^ 0x3f)) + 0x3e;
        if ((int)uVar31 <= (int)uVar15) {
          uVar15 = uVar31;
        }
      }
      bVar11 = bVar11 | bVar13;
    } while (uVar15 != (uint)local_b0);
  }
  if (*(int *)(param_1 + 0x814) == 0) {
    iVar28 = *(int *)(param_1 + 0x7e8);
    *(int *)(param_1 + 0x7e8) = iVar28 + 1;
    if (*(int *)(param_1 + 0x7ec) == iVar28) {
      FUN_140549c28(plVar9,iVar28);
      plVar9 = local_100;
    }
    iVar14 = *(int *)(param_1 + 0x808);
    if (iVar14 == 0) {
      iVar25 = -1;
    }
    else {
      iVar25 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar25 = iVar14 + -1;
      }
      iVar25 = iVar25 >> 5;
    }
    lVar20 = param_1 + 0x7f0;
    iVar16 = iVar14 + 1;
    iVar17 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar17 = iVar14;
    }
    if (iVar17 >> 5 == iVar25) {
      *(int *)(param_1 + 0x808) = iVar16;
    }
    else {
      if (*(int *)(param_1 + 0x80c) <= iVar14) {
        iVar25 = iVar14;
        if (iVar14 + 0x20U < 0xa0) {
          iVar16 = 0x80;
        }
        else {
          uVar31 = iVar14 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x80c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar31) {
              uVar15 = uVar31;
            }
          }
          else {
            uVar15 = uVar31 + (uVar31 * 3 >> 3) + 0x10;
          }
          uVar24 = (ulonglong)(uVar15 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar32 = (uint)(uVar24 + 0xf);
              if (uVar15 < 0x1ffd) {
                uVar24 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar32 >> 4]];
              }
              else {
                uVar19 = uVar24 + 0xf & 0xfffffffffffffff0;
                if (uVar19 < 0x7ff1) {
                  bVar13 = (&DAT_14c841e00)[uVar32 >> 4];
                  uVar23 = 0x32;
                  if (0x32 < bVar13) {
                    uVar23 = (ulonglong)bVar13;
                  }
                  uVar27 = 0x32 - (ulonglong)bVar13;
                  do {
                    uVar24 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar27 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar27 & 0xffffffff] & 0xf) == 0) goto LAB_1403e940f;
                    lVar29 = uVar23 + 1 + uVar27;
                    uVar27 = uVar27 - 1;
                  } while (lVar29 != 0x33);
                }
                uVar24 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar24 = (ulonglong)DAT_14c841df8;
                }
                uVar24 = -uVar24 & (uVar19 + uVar24) - 1;
              }
            }
            else {
              uVar24 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar24,0);
              iVar25 = *(int *)(param_1 + 0x808);
            }
          }
LAB_1403e940f:
          iVar7 = (int)(uVar24 >> 2);
          iVar16 = -0x20;
          if ((int)uVar31 <= iVar7) {
            iVar16 = iVar7 << 5;
          }
        }
        *(int *)(param_1 + 0x80c) = iVar16;
        FUN_1446efbd8(lVar20,iVar25);
        iVar16 = *(int *)(param_1 + 0x808) + 1;
        plVar9 = local_100;
      }
      iVar25 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar25 = iVar16;
      }
      *(int *)(param_1 + 0x808) = iVar16;
      if (iVar16 % 0x20 != 0) {
        lVar29 = *(longlong *)(param_1 + 0x800);
        if (*(longlong *)(param_1 + 0x800) == 0) {
          lVar29 = lVar20;
        }
        bVar13 = -(char)(iVar16 % 0x20);
        *(uint *)(lVar29 + (longlong)(iVar25 >> 5) * 4) =
             (uint)(*(int *)(lVar29 + (longlong)(iVar25 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar29 = (longlong)iVar28;
    if (*(longlong *)(param_1 + 0x800) != 0) {
      lVar20 = *(longlong *)(param_1 + 0x800);
    }
    bVar13 = (byte)iVar14 & 0x1f;
    puVar10 = (uint *)(lVar20 + (longlong)(iVar17 >> 5) * 4);
    *puVar10 = *puVar10 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar28 = *(int *)(param_1 + 0x810);
    lVar29 = (longlong)iVar28;
    iVar14 = *(int *)(*(longlong *)(param_1 + 0x7e0) + 4 + lVar29 * 0x28);
    *(int *)(param_1 + 0x810) = iVar14;
    iVar25 = *(int *)(param_1 + 0x814) + -1;
    *(int *)(param_1 + 0x814) = iVar25;
    if (iVar25 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x7e0) + (longlong)iVar14 * 0x28) = 0xffffffff;
    }
  }
  lVar20 = param_1 + 0x7f0;
  if (*(longlong *)(param_1 + 0x800) != 0) {
    lVar20 = *(longlong *)(param_1 + 0x800);
  }
  iVar14 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar14 = iVar28;
  }
  puVar10 = (uint *)(lVar20 + (longlong)(iVar14 >> 5) * 4);
  *puVar10 = *puVar10 | 1 << ((byte)iVar28 & 0x1f);
  lVar20 = DAT_14c966e68;
  plVar3 = (longlong *)(*(longlong *)(param_1 + 0x7e0) + lVar29 * 0x28);
  *plVar3 = DAT_14c966e68;
  plVar3[1] = DAT_14c966e70;
  lVar29 = DAT_14c966e78;
  plVar3[2] = DAT_14c966e78;
  if (lVar29 != 0) {
    LOCK();
    piVar2 = (int *)(lVar29 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    lVar20 = *plVar3;
  }
  *(byte *)(plVar3 + 3) = bVar11;
  *(undefined4 *)(plVar3 + 4) = 0xffffffff;
  uVar31 = (uint)((ulonglong)lVar20 >> 0x10);
  uVar15 = (uint)lVar20 & 0xffff;
  uVar31 = ((uint)lVar20 << 0x10 | uVar15) + (int)((ulonglong)lVar20 >> 0x20) +
           (uVar31 << 0x13 | uVar31 & 0xffff) + (uVar15 >> 4);
  uVar15 = *(int *)(param_1 + 0x7e8) - *(int *)(param_1 + 0x814);
  if ((uVar15 != 0) && (uVar15 != 1)) {
    lVar29 = param_1 + 0x818;
    if (*(longlong *)(param_1 + 0x820) != 0) {
      lVar29 = *(longlong *)(param_1 + 0x820);
    }
    iVar14 = *(int *)(lVar29 + (ulonglong)(*(int *)(param_1 + 0x828) - 1U & uVar31) * 4);
    if (iVar14 != -1) {
      do {
        plVar22 = (longlong *)(*plVar9 + (longlong)iVar14 * 0x28);
        if (*plVar22 == lVar20) {
          plVar4 = (longlong *)plVar22[2];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar4 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar4)(plVar4);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              plVar9 = local_100;
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
                plVar9 = local_100;
              }
            }
          }
          lVar29 = *plVar3;
          lVar20 = plVar3[1];
          lVar5 = plVar3[3];
          plVar22[2] = plVar3[2];
          plVar22[3] = lVar5;
          *plVar22 = lVar29;
          plVar22[1] = lVar20;
          FUN_1403d4ffa(plVar9,iVar28,1);
          goto LAB_1403e91f3;
        }
        iVar14 = (int)plVar22[4];
      } while (iVar14 != -1);
    }
  }
  if (uVar15 < 4) {
    iVar14 = 1;
  }
  else {
    uVar24 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar29 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar29 & 0x1f);
  }
  if (((int)uVar15 < 1) || (iVar14 <= *(int *)(param_1 + 0x828))) {
    uVar31 = *(int *)(param_1 + 0x828) - 1U & uVar31;
    *(uint *)((longlong)plVar3 + 0x24) = uVar31;
    lVar29 = *(longlong *)(param_1 + 0x820);
    if (*(longlong *)(param_1 + 0x820) == 0) {
      lVar29 = param_1 + 0x818;
    }
    *(undefined4 *)(plVar3 + 4) =
         *(undefined4 *)
          (lVar29 + ((longlong)*(int *)(param_1 + 0x828) - 1U & (longlong)(int)uVar31) * 4);
    lVar29 = *(longlong *)(param_1 + 0x820);
    if (*(longlong *)(param_1 + 0x820) == 0) {
      lVar29 = param_1 + 0x818;
    }
    *(int *)(lVar29 + ((longlong)*(int *)(param_1 + 0x828) - 1U & (longlong)(int)uVar31) * 4) =
         iVar28;
  }
  else {
    *(int *)(param_1 + 0x828) = iVar14;
    FUN_1403d5084(plVar9);
  }
LAB_1403e91f3:
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    FUN_143774ce2(param_1,param_2,local_f1,local_b8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e964e FUN_1403e964e body=188 status=ok
// SIG undefined FUN_1403e964e(void)

void FUN_1403e964e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  uVar1 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar1 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 == -1) {
      uVar1 = 0;
    }
    else {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x110);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x110) == *param_3) {
          FUN_147d9cbd0(_Dst);
          memmove(_Dst,param_3,0x108);
          FUN_147da1fc4(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x108);
        uVar1 = 0;
      } while (iVar3 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1403e970a FUN_1403e970a body=395 status=ok
// SIG undefined FUN_1403e970a(void)

undefined8 * FUN_1403e970a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_138 [32];
  longlong local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined6 uStack_f0;
  undefined2 uStack_ea;
  undefined6 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memset(&local_e0,0,0xb8);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_ea = 0;
  uStack_e8 = 0;
  puVar1 = (undefined8 *)*param_1;
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  lVar2 = puVar1[2];
  param_2[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)param_2 + 0x46) = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  lVar2 = 0x38;
  do {
    *(undefined8 *)((longlong)param_2 + lVar2 + 0x18) =
         *(undefined8 *)((longlong)&local_118 + lVar2);
    *(undefined8 *)((longlong)&local_118 + lVar2) = 0;
    *(undefined4 *)((longlong)param_2 + lVar2 + 0x20) =
         *(undefined4 *)((longlong)&uStack_110 + lVar2);
    *(undefined4 *)((longlong)param_2 + lVar2 + 0x24) =
         *(undefined4 *)((longlong)&uStack_110 + lVar2 + 4);
    *(undefined8 *)((longlong)&uStack_110 + lVar2) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x88);
  lVar2 = 0x88;
  do {
    *(undefined8 *)((longlong)param_2 + lVar2 + 0x18) =
         *(undefined8 *)((longlong)&local_118 + lVar2);
    *(undefined8 *)((longlong)&local_118 + lVar2) = 0;
    *(undefined4 *)((longlong)param_2 + lVar2 + 0x20) =
         *(undefined4 *)((longlong)&uStack_110 + lVar2);
    *(undefined4 *)((longlong)param_2 + lVar2 + 0x24) =
         *(undefined4 *)((longlong)&uStack_110 + lVar2 + 4);
    *(undefined8 *)((longlong)&uStack_110 + lVar2) = 0;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0xd8);
  param_2[0x20] = local_30;
  *(undefined4 *)(param_2 + 0x1e) = local_40;
  *(undefined4 *)((longlong)param_2 + 0xf4) = uStack_3c;
  *(undefined4 *)(param_2 + 0x1f) = uStack_38;
  *(undefined4 *)((longlong)param_2 + 0xfc) = uStack_34;
  lVar2 = 200;
  do {
    if (*(longlong *)((longlong)&local_118 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x78);
  lVar2 = 0x78;
  do {
    if (*(longlong *)((longlong)&local_118 + lVar2) != 0) {
      FUN_1400020a8();
    }
    lVar2 = lVar2 + -0x10;
  } while (lVar2 != 0x28);
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e9896 FUN_1403e9896 body=490 status=ok
// SIG undefined FUN_1403e9896(void)

int * FUN_1403e9896(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140e30e3a(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x110);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x110) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x110 + *param_1;
  return param_2;
}



// FUNCTION 1403e9a80 FUN_1403e9a80 body=616 status=ok
// SIG undefined FUN_1403e9a80(void)

void FUN_1403e9a80(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x110;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x10c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x108 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_1403e9c82;
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
LAB_1403e9c82:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e9cea FUN_1403e9cea body=371 status=ok
// SIG undefined FUN_1403e9cea(void)

void FUN_1403e9cea(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = DAT_14cb91638;
  if ((int)DAT_14cb91638 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (DAT_14cb9163c == 0) {
    uVar3 = 4;
    if (4 < DAT_14cb91638) {
      uVar3 = DAT_14cb91638;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)DAT_14cb91638 * 3) >> 3) + (longlong)(int)DAT_14cb91638 +
            0x10;
  }
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403e9d82;
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
LAB_1403e9d82:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  DAT_14cb9163c = (int)uVar7;
  FUN_1446f8d3c(&DAT_14cb91630,param_1,uVar7,0x48,8);
  return;
}



// FUNCTION 1403e9e5e FUN_1403e9e5e body=318 status=ok
// SIG undefined FUN_1403e9e5e(void)

ulonglong FUN_1403e9e5e(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  uint local_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  if (param_2 == 0) {
    local_28 = 0;
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      param_2 = DAT_14c9647c8;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        param_2 = 0x23d;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = param_1[1];
  local_24 = uVar3;
  if ((uVar6 != local_28) || (uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1), uVar1 != uVar3))
  {
    if (((uVar1 == 0) ||
        ((((int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
         (lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar5 == 0)))) ||
       ((*(uint *)(lVar5 + 0x10) != uVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      uVar3 = FUN_144729dda(&local_28);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1403e9f9e FUN_1403e9f9e body=9000 status=ok
// SIG undefined FUN_1403e9f9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403e9f9e(double param_1,uint *param_2,undefined4 param_3,longlong *param_4)

{
  int *piVar1;
  undefined1 (*pauVar2) [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  DWORD DVar17;
  DWORD DVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined4 *puVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  double *pdVar26;
  longlong *plVar27;
  longlong *plVar28;
  longlong lVar29;
  uint *puVar30;
  undefined8 *puVar31;
  code **ppcVar32;
  undefined8 *puVar33;
  longlong lVar34;
  code *pcVar35;
  longlong *plVar36;
  longlong lVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar58;
  undefined1 auVar55 [16];
  double dVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  double dVar73;
  undefined1 auVar74 [16];
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auStack_3c8 [32];
  code **local_3a8;
  undefined4 local_3a0;
  undefined4 local_398;
  undefined8 local_390;
  wchar_t *local_388;
  undefined1 *local_380;
  undefined1 *local_378;
  code **local_370;
  undefined1 *local_368;
  code *local_360;
  double local_358;
  double dStack_350;
  double local_340;
  double *local_338;
  longlong *local_330;
  double local_328;
  double dStack_320;
  code *local_318;
  undefined8 uStack_310;
  longlong **local_300;
  undefined4 *local_2f8;
  double *local_2f0;
  uint **local_2e8;
  double *local_2e0;
  double local_2d8;
  undefined8 uStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  longlong *local_2b0;
  uint *local_2a8;
  undefined4 local_29c;
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
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  double dStack_1e0;
  undefined8 local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  code *local_178;
  double dStack_170;
  double *local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  local_2b0 = (longlong *)0x0;
  local_2a8 = param_2;
  local_29c = param_3;
  if (param_2 == (uint *)0x0) goto LAB_1403eba21;
  if ((((((param_2[1] == 0) || (uVar24 = *param_2, (int)uVar24 < 0)) ||
        (DAT_14c9647dc <= (int)uVar24)) ||
       ((plVar27 = (longlong *)
                   ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
        plVar27 == (longlong *)0x0 || (*(uint *)(plVar27 + 2) != param_2[1])))) ||
      ((*(uint *)(plVar27 + 1) & 0x10200000) != 0)) ||
     (plVar27 = (longlong *)*plVar27, plVar27 == (longlong *)0x0)) {
LAB_1403ea0c5:
    plVar27 = (longlong *)0x0;
    if (param_4 == (longlong *)0x0) {
LAB_1403ea152:
      if ((((param_2[0x15] == 0) || (uVar24 = param_2[0x14], (int)uVar24 < 0)) ||
          (DAT_14c9647dc <= (int)uVar24)) ||
         (((param_4 = (longlong *)
                      ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
           param_4 == (longlong *)0x0 || (*(uint *)(param_4 + 2) != param_2[0x15])) ||
          (((*(uint *)(param_4 + 1) & 0x10200000) != 0 ||
           (param_4 = (longlong *)*param_4, local_2b0 = param_4, param_4 == (longlong *)0x0))))))
      goto LAB_1403eba21;
    }
  }
  else {
    if (DAT_14cad2858 == 0) {
      local_370 = &local_178;
      local_178 = FUN_144a7958c;
      local_360 = FUN_14081d0ea;
      local_368 = &LAB_146395584;
      local_378 = &LAB_147a0ba80;
      local_380 = &LAB_14575ccce;
      local_388 = L"Engine";
      local_390 = 0x40000000000;
      local_398 = 0x10000004;
      local_3a0 = 0x10;
      local_3a8 = (code **)CONCAT44(local_3a8._4_4_,0x1180);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(plVar27[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar27[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
        DAT_14cad2858 + 0x30)) goto LAB_1403ea0c5;
    if (param_4 == (longlong *)0x0) {
      param_4 = (longlong *)plVar27[0xcb];
      if (param_4 == (longlong *)0x0) {
        param_4 = (longlong *)plVar27[0xcc];
        if ((DAT_14c950c29 == '\x01') && (param_4 != (longlong *)0x0)) goto LAB_1403ec29e;
        if (param_4 != (longlong *)0x0) goto LAB_1403ea0fb;
      }
      else {
        if (DAT_14c950c29 == '\x01') {
LAB_1403ec29e:
          FUN_1456cec3c(param_4);
        }
LAB_1403ea0fb:
        if (DAT_14cb06da8 == 0) {
          local_370 = &local_178;
          local_178 = FUN_1449e2820;
          local_360 = FUN_14081d0ea;
          local_368 = &LAB_1464003b0;
          local_378 = &LAB_147d17bdf;
          local_380 = &LAB_1417edf22;
          local_388 = L"Engine";
          local_390 = 0;
          local_398 = 0x10000000;
          local_3a0 = 8;
          local_3a8 = (code **)CONCAT44(local_3a8._4_4_,0x588);
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(param_4[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(param_4[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
            DAT_14cb06da8 + 0x30)) goto LAB_1403ea1bf;
      }
      local_2b0 = (longlong *)0x0;
      goto LAB_1403ea152;
    }
  }
LAB_1403ea1bf:
  local_2f0 = &local_2c8;
  local_2c8 = 0.0;
  uStack_2c0 = 0.0;
  local_2e0 = &local_2d8;
  local_2d8 = 0.0;
  uStack_2d0 = 0.0;
  local_300 = &local_2b0;
  local_2f8 = &local_29c;
  local_2e8 = &local_2a8;
  local_340 = param_1;
  local_2b0 = param_4;
  if (plVar27 == (longlong *)0x0) {
    lVar37 = (**(code **)(*param_4 + 0x310))(param_4);
    local_318 = (code *)0x0;
    uStack_310 = 0;
    iVar16 = *(int *)((longlong)param_1 + 0x10);
    if (iVar16 < 0) {
LAB_1403ebe66:
      uStack_310 = 0;
      local_318 = (code *)0x0;
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar16);
    }
    if (iVar16 != 0) {
      FUN_1401a2688(&local_318);
    }
    lVar19 = (**(code **)(*local_2b0 + 0x310))();
    if (0 < *(int *)(lVar19 + 0x38)) {
      lVar29 = 8;
      lVar34 = 0;
      do {
        lVar25 = *(longlong *)(lVar19 + 0x30);
        pdVar26 = (double *)(lVar25 + -0x40 + lVar29 * 8);
        dVar73 = *pdVar26;
        dVar60 = pdVar26[1];
        auVar46 = *(undefined1 (*) [16])(lVar25 + -0x30 + lVar29 * 8);
        dVar45 = auVar46._0_8_;
        dVar71 = auVar46._8_8_;
        pdVar26 = (double *)(lVar25 + -0x20 + lVar29 * 8);
        dVar75 = *pdVar26;
        dVar52 = pdVar26[1];
        pdVar26 = (double *)(lVar25 + -0x10 + lVar29 * 8);
        dVar76 = *pdVar26;
        dVar79 = pdVar26[1];
        auVar53 = *(undefined1 (*) [16])(lVar25 + lVar29 * 8);
        dVar40 = auVar53._0_8_;
        dVar78 = auVar53._8_8_;
        auVar83 = *(undefined1 (*) [16])(lVar25 + 0x10 + lVar29 * 8);
        dVar67 = auVar83._0_8_;
        dVar51 = auVar83._8_8_;
        iVar16 = (int)uStack_310;
        if ((lVar34 < *(int *)(lVar37 + 0x28)) &&
           (uVar24 = *(uint *)(*(longlong *)(lVar37 + 0x20) + lVar29),
           (int)uVar24 < (int)uStack_310 && -1 < (int)uVar24)) {
          lVar25 = (ulonglong)uVar24 * 0x60;
          pauVar2 = (undefined1 (*) [16])(local_318 + lVar25);
          auVar46 = *(undefined1 (*) [16])(local_318 + lVar25 + 0x40);
          dVar63 = auVar46._0_8_;
          dVar4 = auVar46._8_8_;
          auVar49 = *(undefined1 (*) [16])(local_318 + lVar25 + 0x50);
          dVar65 = auVar49._0_8_;
          dVar5 = auVar49._8_8_;
          auVar46 = minpd(auVar53,auVar46);
          auVar53 = minpd(auVar83,auVar49);
          auVar49._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
          auVar49._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
          iVar23 = movmskpd((int)local_318,auVar49);
          auVar56._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
          auVar56._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
          uVar24 = movmskpd((int)lVar25,auVar56);
          if ((uVar24 & 0x3fffffff) == 0 && iVar23 == 0) {
            dVar69 = SUB168(*pauVar2,0);
            dVar6 = SUB168(*pauVar2,8);
            local_358 = *(double *)pauVar2[1];
            dStack_350 = *(double *)(pauVar2[1] + 8);
            dVar58 = *(double *)(pauVar2[1] + 8);
            dVar3 = *(double *)(pauVar2[1] + 8);
            dVar80 = *(double *)*pauVar2 * dVar60;
            dVar81 = *(double *)*pauVar2 * dVar73;
            dVar62 = *(double *)(*pauVar2 + 8);
            dVar61 = *(double *)(*pauVar2 + 8);
            dVar59 = dVar73 * dVar62;
            dVar68 = dVar60 * dVar61;
            dVar66 = *(double *)pauVar2[1];
            dVar64 = *(double *)pauVar2[1];
            dVar70 = dVar73 * dVar64;
            dVar73 = dVar60 * dVar66 * -1.0 +
                     dVar45 * dVar62 + dVar71 * *(double *)*pauVar2 * 1.0 + dVar73 * dVar58;
            dVar60 = dVar70 * 1.0 +
                     dVar71 * dVar61 + dVar45 * *(double *)*pauVar2 * -1.0 + dVar60 * dVar3;
            dVar75 = dVar75 * dVar63;
            dVar52 = dVar52 * dVar4;
            dVar76 = dVar76 * dVar65;
            dVar79 = dVar79 * dVar5;
            dVar61 = dVar52 * dVar69 - dVar75 * dVar6;
            dVar62 = dVar76 * dVar6 - dVar52 * local_358;
            dVar70 = dVar75 * local_358 - dVar76 * dVar69;
            dVar77 = dVar79 * dStack_350 - dVar79 * dStack_350;
            dVar62 = dVar62 + dVar62;
            dVar70 = dVar70 + dVar70;
            dVar61 = dVar61 + dVar61;
            dVar77 = dVar77 + dVar77;
            auVar53._0_8_ = dVar40 * dVar63;
            auVar53._8_8_ = dVar78 * dVar4;
            dVar75 = (dVar61 * dVar6 - local_358 * dVar70) + dVar58 * dVar62 + dVar75 +
                     *(double *)pauVar2[2];
            dVar52 = (dVar62 * local_358 - dVar61 * dVar69) + dVar3 * dVar70 + dVar52 +
                     *(double *)(pauVar2[2] + 8);
            dVar76 = (dVar70 * dVar69 - dVar6 * dVar62) + dVar58 * dVar61 + dVar76 +
                     *(double *)pauVar2[3];
            dVar79 = (dVar77 * dStack_350 - dVar77 * dStack_350) + dVar3 * dVar77 + dVar79 +
                     *(double *)(pauVar2[3] + 8);
            auVar83._0_8_ = dVar67 * dVar65;
            auVar83._8_8_ = dVar51 * dVar5;
            auVar46._8_8_ = dVar45 * dVar64 * -1.0 + ((dVar81 * -1.0 + dVar71 * dVar3) - dVar68);
            auVar46._0_8_ = dVar71 * dVar66 * 1.0 + ((dVar80 * 1.0 + dVar45 * dVar58) - dVar59);
          }
          else {
            local_328 = dVar67 * dVar65;
            dStack_320 = dVar51 * dVar5;
            dVar79 = *(double *)*pauVar2;
            dVar5 = *(double *)(*pauVar2 + 8);
            dVar3 = *(double *)pauVar2[1];
            dVar58 = dVar5 + dVar5;
            dVar61 = dVar3 + dVar3;
            dVar66 = dVar79 * (dVar79 + dVar79);
            local_1a8 = (1.0 - (dVar66 + dVar5 * dVar58)) * dVar65;
            dVar69 = *(double *)*pauVar2 * dVar61;
            dVar51 = *(double *)(pauVar2[1] + 8);
            dVar62 = dVar61 * dVar51;
            dVar64 = (dVar79 + dVar79) * *(double *)(pauVar2[1] + 8);
            dVar51 = dVar58 * dVar51;
            local_1b8 = (dVar51 + dVar69) * dVar65;
            local_1d8 = (dVar58 * dVar79 - dVar62) * dVar4;
            dStack_1b0 = (dVar61 * dVar5 - dVar64) * dVar65;
            local_358 = dVar40 * dVar63;
            dStack_350 = dVar78 * dVar4;
            local_1f8 = (1.0 - (dVar3 * dVar61 + dVar5 * dVar58)) * dVar63;
            dStack_1d0 = (1.0 - (dVar3 * dVar61 + dVar66)) * dVar4;
            dStack_1f0 = (dVar58 * dVar79 + dVar62) * dVar63;
            local_1c8 = (dVar61 * dVar5 + dVar64) * dVar4;
            local_1e8 = (dVar69 - dVar51) * dVar63;
            dStack_1e0 = 0.0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = *(double *)pauVar2[2];
            dStack_190 = *(double *)(pauVar2[2] + 8);
            local_188 = *(double *)pauVar2[3];
            uStack_180 = 0x3ff0000000000000;
            dVar51 = dVar60 + dVar60;
            dVar63 = dVar45 + dVar45;
            dVar79 = dVar73 * (dVar73 + dVar73);
            local_228 = (1.0 - (dVar79 + dVar60 * dVar51)) * dVar67;
            dVar65 = (dVar73 + dVar73) * dVar71;
            local_238 = (dVar51 * dVar71 + dVar73 * dVar63) * dVar67;
            local_258 = (dVar51 * dVar73 - dVar63 * dVar71) * dVar78;
            dStack_230 = (dVar63 * dVar60 - dVar65) * dVar67;
            local_278 = (1.0 - (dVar45 * dVar63 + dVar60 * dVar51)) * dVar40;
            dStack_250 = (1.0 - (dVar45 * dVar63 + dVar79)) * dVar78;
            dStack_270 = (dVar51 * dVar73 + dVar63 * dVar71) * dVar40;
            local_248 = (dVar63 * dVar60 + dVar65) * dVar78;
            local_268 = (dVar73 * dVar63 - dVar51 * dVar71) * dVar40;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_208._8_4_ = 0;
            local_208._0_8_ = dVar76;
            local_208._12_4_ = 0x3ff00000;
            local_218 = dVar75;
            dStack_210 = dVar52;
            FUN_1447fea8d(&local_178,&local_278,&local_1f8);
            auVar46 = _DAT_149934d80;
            local_338 = local_168;
            dVar67 = (double)local_168 * (double)local_168 +
                     (double)local_178 * (double)local_178 + dStack_170 * dStack_170;
            dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
            dVar40 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
            uVar38 = -(ulonglong)(0.0 <= dVar67 + -9.99999993922529e-09);
            dVar71 = (double)(~uVar38 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar67)) & uVar38);
            uVar38 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
            dVar78 = (double)(~uVar38 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar45)) & uVar38);
            uVar38 = -(ulonglong)(0.0 <= dVar40 + -9.99999993922529e-09);
            dVar45 = (double)(~uVar38 & 0x3ff0000000000000 |
                             (ulonglong)(1.0 / SQRT(dVar40)) & uVar38);
            auVar43._8_8_ = -(ulonglong)(0.0 <= dStack_350);
            auVar43._0_8_ = -(ulonglong)(0.0 <= local_358);
            auVar53 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar43);
            auVar83._8_8_ = dStack_320;
            auVar83._0_8_ = local_328;
            dVar40 = (double)(~-(ulonglong)(0.0 <= local_328) & 0xbff0000000000000 |
                             -(ulonglong)(0.0 <= local_328) & 0x3ff0000000000000);
            dVar67 = auVar53._0_8_;
            local_178 = (code *)((double)local_178 * dVar71 * dVar67);
            dStack_170 = dStack_170 * dVar71 * dVar67;
            local_168 = (double *)(dVar71 * (double)local_168 * dVar67);
            dVar67 = auVar53._8_8_;
            local_148 = dVar78 * local_148 * dVar67;
            local_150 = local_150 * dVar78 * dVar67;
            local_158 = dVar67 * local_158 * dVar78;
            local_128 = dVar45 * local_128 * dVar40;
            local_130 = local_130 * dVar45 * dVar40;
            local_138 = dVar40 * local_138 * dVar45;
            FUN_14481fd10(&local_298,&local_178);
            dVar45 = local_288 * local_288 + local_298 * local_298;
            dVar40 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar50._0_8_ = dVar45 + dVar40;
            auVar50._8_8_ = dVar45 + dVar40;
            auVar44._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
            auVar44._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
            auVar53 = sqrtpd(auVar50,auVar50);
            auVar53 = divpd(auVar46,auVar53);
            auVar57._0_8_ = auVar53._0_8_ * local_288;
            auVar57._8_8_ = auVar53._8_8_ * dStack_280;
            auVar46 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar57,auVar44);
            dVar73 = (double)((ulonglong)(local_298 * auVar53._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
            dVar60 = (double)((ulonglong)(dStack_290 * auVar53._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
            dVar79 = 0.0;
            auVar53._8_8_ = dStack_350;
            auVar53._0_8_ = local_358;
            iVar16 = (int)uStack_310;
            dVar76 = local_108;
            dVar75 = local_118;
            dVar52 = dStack_110;
          }
        }
        uStack_310 = CONCAT44(uStack_310._4_4_,iVar16 + 1U);
        if (uStack_310._4_4_ < iVar16 + 1U) {
          FUN_144a2c682(&local_318,iVar16);
        }
        lVar25 = (longlong)iVar16 * 0x60;
        auVar7._8_4_ = SUB84(dVar60,0);
        auVar7._0_8_ = dVar73;
        auVar7._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
        *(undefined1 (*) [16])(local_318 + lVar25) = auVar7;
        *(undefined1 (*) [16])(local_318 + lVar25 + 0x10) = auVar46;
        *(double *)(local_318 + lVar25 + 0x20) = dVar75;
        *(double *)((longlong)(local_318 + lVar25 + 0x20) + 8) = dVar52;
        auVar10._8_4_ = SUB84(dVar79,0);
        auVar10._0_8_ = dVar76;
        auVar10._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
        *(undefined1 (*) [16])(local_318 + lVar25 + 0x30) = auVar10;
        *(undefined1 (*) [16])(local_318 + lVar25 + 0x40) = auVar53;
        *(undefined1 (*) [16])(local_318 + lVar25 + 0x50) = auVar83;
        lVar34 = lVar34 + 1;
        lVar29 = lVar29 + 0xc;
      } while (lVar34 < *(int *)(lVar19 + 0x38));
    }
    FUN_143a65764(&local_300,&local_318,lVar37);
    param_1 = local_340;
    if (local_318 != (code *)0x0) {
      FUN_1400020a8();
      param_1 = local_340;
    }
  }
  else {
    if ((((*(int *)((longlong)plVar27 + 0x66c) == 0) ||
         (uVar24 = *(uint *)(plVar27 + 0xcd), (int)uVar24 < 0)) || (DAT_14c9647dc <= (int)uVar24))
       || (((plVar28 = (longlong *)
                       ((ulonglong)((uVar24 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar24 >> 0x10) * 8)),
            plVar28 == (longlong *)0x0 || ((int)plVar28[2] != *(int *)((longlong)plVar27 + 0x66c)))
           || (((*(uint *)(plVar28 + 1) & 0x10200000) != 0 || (lVar37 = *plVar28, lVar37 == 0))))))
    {
      lVar37 = plVar27[0xe3];
      if (0 < (int)plVar27[(longlong)(int)lVar37 * 2 + 0xdb]) {
        lVar19 = plVar27[0xcb];
        if (lVar19 == 0) {
          lVar19 = plVar27[0xcc];
          if ((DAT_14c950c29 == '\x01') && (lVar19 != 0)) goto LAB_1403ec1be;
          if (lVar19 != 0) goto LAB_1403eb65e;
        }
        else {
          if (DAT_14c950c29 == '\x01') {
LAB_1403ec1be:
            FUN_1456cec3c(lVar19);
          }
LAB_1403eb65e:
          if (DAT_14cb06da8 == 0) {
            local_370 = &local_178;
            local_178 = FUN_1449e2820;
            local_360 = FUN_14081d0ea;
            local_368 = &LAB_1464003b0;
            local_378 = &LAB_147d17bdf;
            local_380 = &LAB_1417edf22;
            local_388 = L"Engine";
            local_390 = 0;
            local_398 = 0x10000000;
            local_3a0 = 8;
            local_3a8 = (code **)CONCAT44(local_3a8._4_4_,0x588);
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          param_4 = local_2b0;
          if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
            param_4 = (longlong *)plVar27[0xcb];
            if (param_4 == (longlong *)0x0) {
              param_4 = (longlong *)plVar27[0xcc];
              if ((DAT_14c950c29 == '\x01') && (param_4 != (longlong *)0x0)) goto LAB_1403ec1cb;
              if (param_4 != (longlong *)0x0) goto LAB_1403eb6ae;
            }
            else {
              if (DAT_14c950c29 != '\0') {
LAB_1403ec1cb:
                FUN_1456cec3c(param_4);
                if (DAT_14cb06da8 == 0) {
                  local_370 = &local_178;
                  local_178 = FUN_1449e2820;
                  local_360 = FUN_14081d0ea;
                  local_368 = &LAB_1464003b0;
                  local_378 = &LAB_147d17bdf;
                  local_380 = &LAB_1417edf22;
                  local_388 = L"Engine";
                  local_390 = 0;
                  local_398 = 0x10000000;
                  local_3a0 = 8;
                  local_3a8 = (code **)CONCAT44(local_3a8._4_4_,0x588);
                  FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                }
              }
LAB_1403eb6ae:
              if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(param_4[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(param_4[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
                  == DAT_14cb06da8 + 0x30)) goto LAB_1403eb6d1;
            }
            param_4 = (longlong *)0x0;
          }
        }
LAB_1403eb6d1:
        uVar20 = (**(code **)(*param_4 + 0x310))(param_4);
        FUN_143a65764(&local_300,plVar27 + (longlong)(int)lVar37 * 2 + 0xda,uVar20);
        goto LAB_1403eb6f0;
      }
      ppcVar32 = &local_178;
      local_178 = (code *)0x0;
      dStack_170 = 0.0;
      FUN_146ed49ae(ppcVar32,*(undefined4 *)((longlong)param_1 + 0x10));
      lVar19 = 0;
    }
    else {
      plVar28 = (longlong *)(**(code **)(*plVar27 + 0xa78))(plVar27,0);
      uVar24 = *(uint *)(plVar28 + 1);
      local_318 = (code *)0x0;
      uStack_310 = 0;
      iVar16 = *(int *)((longlong)param_1 + 0x10);
      if (iVar16 < 0) goto LAB_1403ebe66;
      if (iVar16 != 0) {
        FUN_1401a2688(&local_318);
      }
      if ((ulonglong)uVar24 == 0) {
        FUN_146ed49ae(&local_318,*(undefined4 *)((longlong)param_1 + 0x10));
        lVar19 = 0;
      }
      else {
        lVar19 = plVar27[0xcb];
        if (lVar19 == 0) {
          lVar19 = plVar27[0xcc];
          if ((DAT_14c950c29 == '\x01') && (lVar19 != 0)) goto LAB_1403ec0f8;
          plVar36 = local_2b0;
          if (lVar19 != 0) goto LAB_1403ea2fb;
        }
        else {
          if (DAT_14c950c29 == '\x01') {
LAB_1403ec0f8:
            FUN_1456cec3c(lVar19);
          }
LAB_1403ea2fb:
          if (DAT_14cb06da8 == 0) {
            local_370 = &local_178;
            local_178 = FUN_1449e2820;
            local_360 = FUN_14081d0ea;
            local_368 = &LAB_1464003b0;
            local_378 = &LAB_147d17bdf;
            local_380 = &LAB_1417edf22;
            local_388 = L"Engine";
            local_390 = 0;
            local_398 = 0x10000000;
            local_3a0 = 8;
            local_3a8 = (code **)CONCAT44(local_3a8._4_4_,0x588);
            FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
          }
          plVar36 = local_2b0;
          if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(lVar19 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
            plVar36 = (longlong *)plVar27[0xcb];
            if (plVar36 == (longlong *)0x0) {
              plVar36 = (longlong *)plVar27[0xcc];
              if ((DAT_14c950c29 == '\x01') && (plVar36 != (longlong *)0x0)) goto LAB_1403ec105;
              if (plVar36 != (longlong *)0x0) goto LAB_1403ea34b;
            }
            else {
              if (DAT_14c950c29 != '\0') {
LAB_1403ec105:
                FUN_1456cec3c(plVar36);
                if (DAT_14cb06da8 == 0) {
                  local_370 = &local_178;
                  local_178 = FUN_1449e2820;
                  local_360 = FUN_14081d0ea;
                  local_368 = &LAB_1464003b0;
                  local_378 = &LAB_147d17bdf;
                  local_380 = &LAB_1417edf22;
                  local_388 = L"Engine";
                  local_390 = 0;
                  local_398 = 0x10000000;
                  local_3a0 = 8;
                  local_3a8 = (code **)CONCAT44(local_3a8._4_4_,0x588);
                  FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
                }
              }
LAB_1403ea34b:
              if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar36[2] + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(plVar36[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
                  == DAT_14cb06da8 + 0x30)) goto LAB_1403ea36e;
            }
            plVar36 = (longlong *)0x0;
          }
        }
LAB_1403ea36e:
        lVar19 = (**(code **)(*plVar36 + 0x310))(plVar36);
        param_1 = local_340;
        if (0 < (int)uVar24) {
          local_330 = (longlong *)((longlong)*(int *)(lVar37 + 0x718) * 0x10 + lVar37 + 0x6d0);
          lVar37 = 8;
          uVar38 = 0;
          do {
            uVar39 = uStack_310;
            if ((longlong)uVar38 < (longlong)(int)plVar28[1]) {
              iVar16 = *(int *)(*plVar28 + uVar38 * 4);
              if (((longlong)iVar16 == -1) || ((int)local_330[1] <= iVar16)) goto LAB_1403ea42e;
              lVar29 = *local_330;
              lVar34 = (longlong)(int)uStack_310;
              uVar15 = (int)uStack_310 + 1;
              uStack_310 = CONCAT44(uStack_310._4_4_,uVar15);
              if (uStack_310._4_4_ < uVar15) {
                FUN_144a2c682(&local_318,uVar39 & 0xffffffff);
              }
              puVar31 = (undefined8 *)((longlong)iVar16 * 0x60 + lVar29);
              pcVar35 = local_318 + lVar34 * 0x60;
              for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
                *(undefined8 *)pcVar35 = *puVar31;
                puVar31 = puVar31 + 1;
                pcVar35 = pcVar35 + 8;
              }
            }
            else {
LAB_1403ea42e:
              uVar15 = 0xffffffff;
              if ((longlong)uVar38 < (longlong)*(int *)(lVar19 + 0x28)) {
                uVar15 = *(uint *)(*(longlong *)(lVar19 + 0x20) + lVar37);
              }
              lVar29 = *(longlong *)(lVar19 + 0x30);
              pdVar26 = (double *)(lVar29 + -0x40 + lVar37 * 8);
              dVar76 = *pdVar26;
              dVar79 = pdVar26[1];
              auVar74 = *(undefined1 (*) [16])(lVar29 + -0x30 + lVar37 * 8);
              dVar45 = auVar74._0_8_;
              dVar71 = auVar74._8_8_;
              pdVar26 = (double *)(lVar29 + -0x20 + lVar37 * 8);
              dVar73 = *pdVar26;
              dVar75 = pdVar26[1];
              pdVar26 = (double *)(lVar29 + -0x10 + lVar37 * 8);
              dVar60 = *pdVar26;
              dVar52 = pdVar26[1];
              auVar72 = *(undefined1 (*) [16])(lVar29 + lVar37 * 8);
              dVar40 = auVar72._0_8_;
              dVar78 = auVar72._8_8_;
              auVar82 = *(undefined1 (*) [16])(lVar29 + 0x10 + lVar37 * 8);
              dVar67 = auVar82._0_8_;
              dVar51 = auVar82._8_8_;
              iVar16 = (int)uStack_310;
              if ((int)uVar15 < (int)uStack_310 && -1 < (int)uVar15) {
                lVar29 = (ulonglong)uVar15 * 0x60;
                pdVar26 = (double *)(local_318 + lVar29);
                auVar46 = *(undefined1 (*) [16])(local_318 + lVar29 + 0x40);
                dVar63 = auVar46._0_8_;
                dVar4 = auVar46._8_8_;
                auVar53 = *(undefined1 (*) [16])(local_318 + lVar29 + 0x50);
                dVar65 = auVar53._0_8_;
                dVar5 = auVar53._8_8_;
                auVar46 = minpd(auVar72,auVar46);
                auVar53 = minpd(auVar82,auVar53);
                auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
                auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
                iVar23 = movmskpd((int)local_318,auVar47);
                auVar54._8_8_ = -(ulonglong)(auVar53._8_8_ < 0.0);
                auVar54._0_8_ = -(ulonglong)(auVar53._0_8_ < 0.0);
                uVar15 = movmskpd((int)lVar29,auVar54);
                if ((uVar15 & 0x3fffffff) == 0 && iVar23 == 0) {
                  dVar69 = *pdVar26;
                  dVar6 = pdVar26[1];
                  local_358 = pdVar26[2];
                  dStack_350 = pdVar26[3];
                  dVar58 = pdVar26[3];
                  dVar3 = pdVar26[3];
                  dVar68 = *pdVar26 * dVar79;
                  dVar70 = *pdVar26 * dVar76;
                  dVar61 = pdVar26[1];
                  dVar62 = pdVar26[1];
                  dVar77 = dVar76 * dVar61;
                  dVar80 = dVar79 * dVar62;
                  dVar66 = pdVar26[2];
                  dVar64 = pdVar26[2];
                  dVar59 = dVar76 * dVar64;
                  dVar76 = dVar79 * dVar66 * -1.0 +
                           dVar45 * dVar61 + dVar71 * *pdVar26 * 1.0 + dVar76 * dVar58;
                  dVar79 = dVar59 * 1.0 +
                           dVar71 * dVar62 + dVar45 * *pdVar26 * -1.0 + dVar79 * dVar3;
                  dVar73 = dVar73 * dVar63;
                  dVar75 = dVar75 * dVar4;
                  dVar60 = dVar60 * dVar65;
                  dVar52 = dVar52 * dVar5;
                  dVar61 = dVar75 * dVar69 - dVar73 * dVar6;
                  dVar62 = dVar60 * dVar6 - dVar75 * local_358;
                  dVar59 = dVar73 * local_358 - dVar60 * dVar69;
                  dVar81 = dVar52 * dStack_350 - dVar52 * dStack_350;
                  dVar62 = dVar62 + dVar62;
                  dVar59 = dVar59 + dVar59;
                  dVar61 = dVar61 + dVar61;
                  dVar81 = dVar81 + dVar81;
                  auVar72._0_8_ = dVar40 * dVar63;
                  auVar72._8_8_ = dVar78 * dVar4;
                  dVar73 = (dVar61 * dVar6 - local_358 * dVar59) + dVar58 * dVar62 + dVar73 +
                           pdVar26[4];
                  dVar75 = (dVar62 * local_358 - dVar61 * dVar69) + dVar3 * dVar59 + dVar75 +
                           pdVar26[5];
                  dVar60 = (dVar59 * dVar69 - dVar6 * dVar62) + dVar58 * dVar61 + dVar60 +
                           pdVar26[6];
                  dVar52 = (dVar81 * dStack_350 - dVar81 * dStack_350) + dVar3 * dVar81 + dVar52 +
                           pdVar26[7];
                  auVar82._0_8_ = dVar67 * dVar65;
                  auVar82._8_8_ = dVar51 * dVar5;
                  auVar74._8_8_ =
                       dVar45 * dVar64 * -1.0 + ((dVar70 * -1.0 + dVar71 * dVar3) - dVar80);
                  auVar74._0_8_ =
                       dVar71 * dVar66 * 1.0 + ((dVar68 * 1.0 + dVar45 * dVar58) - dVar77);
                }
                else {
                  local_358 = dVar67 * dVar65;
                  dStack_350 = dVar51 * dVar5;
                  dVar52 = *pdVar26;
                  dVar5 = pdVar26[1];
                  dVar3 = pdVar26[2];
                  dVar58 = dVar5 + dVar5;
                  dVar61 = dVar3 + dVar3;
                  dVar66 = dVar52 * (dVar52 + dVar52);
                  local_1a8 = (1.0 - (dVar66 + dVar5 * dVar58)) * dVar65;
                  dVar51 = pdVar26[3];
                  dVar62 = dVar61 * dVar51;
                  dVar64 = (dVar52 + dVar52) * pdVar26[3];
                  dVar51 = dVar58 * dVar51;
                  local_1b8 = (dVar51 + *pdVar26 * dVar61) * dVar65;
                  local_1d8 = (dVar58 * dVar52 - dVar62) * dVar4;
                  dStack_1b0 = (dVar61 * dVar5 - dVar64) * dVar65;
                  local_328 = dVar40 * dVar63;
                  dStack_320 = dVar78 * dVar4;
                  local_1f8 = (1.0 - (dVar3 * dVar61 + dVar5 * dVar58)) * dVar63;
                  dStack_1d0 = (1.0 - (dVar3 * dVar61 + dVar66)) * dVar4;
                  dStack_1f0 = (dVar58 * dVar52 + dVar62) * dVar63;
                  local_1c8 = (dVar61 * dVar5 + dVar64) * dVar4;
                  local_1e8 = (*pdVar26 * dVar61 - dVar51) * dVar63;
                  dStack_1e0 = 0.0;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  local_198 = pdVar26[4];
                  dStack_190 = pdVar26[5];
                  local_188 = pdVar26[6];
                  uStack_180 = 0x3ff0000000000000;
                  dVar51 = dVar79 + dVar79;
                  dVar63 = dVar45 + dVar45;
                  dVar52 = dVar76 * (dVar76 + dVar76);
                  local_228 = (1.0 - (dVar52 + dVar79 * dVar51)) * dVar67;
                  dVar65 = (dVar76 + dVar76) * dVar71;
                  local_238 = (dVar51 * dVar71 + dVar76 * dVar63) * dVar67;
                  local_258 = (dVar51 * dVar76 - dVar63 * dVar71) * dVar78;
                  dStack_230 = (dVar63 * dVar79 - dVar65) * dVar67;
                  local_278 = (1.0 - (dVar45 * dVar63 + dVar79 * dVar51)) * dVar40;
                  dStack_250 = (1.0 - (dVar45 * dVar63 + dVar52)) * dVar78;
                  dStack_270 = (dVar51 * dVar76 + dVar63 * dVar71) * dVar40;
                  local_248 = (dVar63 * dVar79 + dVar65) * dVar78;
                  local_268 = (dVar76 * dVar63 - dVar51 * dVar71) * dVar40;
                  uStack_260 = 0;
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_208._8_4_ = 0;
                  local_208._0_8_ = dVar60;
                  local_208._12_4_ = 0x3ff00000;
                  local_218 = dVar73;
                  dStack_210 = dVar75;
                  FUN_1447fea8d(&local_178,&local_278,&local_1f8);
                  auVar46 = _DAT_149934d80;
                  local_338 = local_168;
                  dVar67 = (double)local_168 * (double)local_168 +
                           (double)local_178 * (double)local_178 + dStack_170 * dStack_170;
                  dVar45 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
                  dVar40 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
                  uVar39 = -(ulonglong)(0.0 <= dVar67 + -9.99999993922529e-09);
                  dVar67 = (double)(~uVar39 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar67)) & uVar39);
                  uVar39 = -(ulonglong)(0.0 <= dVar45 + -9.99999993922529e-09);
                  dVar71 = (double)(~uVar39 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar45)) & uVar39);
                  uVar39 = -(ulonglong)(0.0 <= dVar40 + -9.99999993922529e-09);
                  dVar45 = (double)(~uVar39 & 0x3ff0000000000000 |
                                   (ulonglong)(1.0 / SQRT(dVar40)) & uVar39);
                  auVar41._8_8_ = -(ulonglong)(0.0 <= dStack_320);
                  auVar41._0_8_ = -(ulonglong)(0.0 <= local_328);
                  auVar53 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar41);
                  dVar40 = (double)(~-(ulonglong)(0.0 <= local_358) & 0xbff0000000000000 |
                                   (ulonglong)
                                   ((uint)(-(ulonglong)(0.0 <= local_358) >> 0x20) & 0x3ff00000) <<
                                   0x20);
                  dVar78 = auVar53._0_8_;
                  local_178 = (code *)((double)local_178 * dVar67 * dVar78);
                  dStack_170 = dStack_170 * dVar67 * dVar78;
                  local_168 = (double *)(dVar67 * (double)local_168 * dVar78);
                  dVar67 = auVar53._8_8_;
                  local_148 = dVar71 * local_148 * dVar67;
                  local_150 = local_150 * dVar71 * dVar67;
                  local_158 = dVar67 * local_158 * dVar71;
                  local_128 = dVar45 * local_128 * dVar40;
                  local_130 = local_130 * dVar45 * dVar40;
                  local_138 = dVar40 * local_138 * dVar45;
                  FUN_14481fd10(&local_298,&local_178);
                  dVar45 = local_288 * local_288 + local_298 * local_298;
                  dVar40 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
                  auVar48._0_8_ = dVar45 + dVar40;
                  auVar48._8_8_ = dVar45 + dVar40;
                  auVar42._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
                  auVar42._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
                  auVar53 = sqrtpd(auVar48,auVar48);
                  auVar46 = divpd(auVar46,auVar53);
                  auVar55._0_8_ = auVar46._0_8_ * local_288;
                  auVar55._8_8_ = auVar46._8_8_ * dStack_280;
                  auVar74 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar42);
                  dVar76 = (double)((ulonglong)(local_298 * auVar46._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_));
                  dVar79 = (double)((ulonglong)(dStack_290 * auVar46._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_));
                  dVar52 = 0.0;
                  auVar82._8_8_ = dStack_350;
                  auVar82._0_8_ = local_358;
                  auVar72._8_8_ = dStack_320;
                  auVar72._0_8_ = local_328;
                  iVar16 = (int)uStack_310;
                  dVar60 = local_108;
                  dVar73 = local_118;
                  dVar75 = dStack_110;
                }
              }
              uStack_310 = CONCAT44(uStack_310._4_4_,iVar16 + 1U);
              if (uStack_310._4_4_ < iVar16 + 1U) {
                FUN_144a2c682(&local_318,iVar16);
              }
              lVar29 = (longlong)iVar16 * 0x60;
              *(double *)(local_318 + lVar29) = dVar76;
              *(double *)((longlong)(local_318 + lVar29) + 8) = dVar79;
              *(undefined1 (*) [16])(local_318 + lVar29 + 0x10) = auVar74;
              auVar8._8_4_ = SUB84(dVar75,0);
              auVar8._0_8_ = dVar73;
              auVar8._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
              *(undefined1 (*) [16])(local_318 + lVar29 + 0x20) = auVar8;
              auVar9._8_4_ = SUB84(dVar52,0);
              auVar9._0_8_ = dVar60;
              auVar9._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
              *(undefined1 (*) [16])(local_318 + lVar29 + 0x30) = auVar9;
              *(undefined1 (*) [16])(local_318 + lVar29 + 0x40) = auVar72;
              *(undefined1 (*) [16])(local_318 + lVar29 + 0x50) = auVar82;
            }
            uVar38 = uVar38 + 1;
            lVar37 = lVar37 + 0xc;
            param_1 = local_340;
          } while (uVar24 != uVar38);
        }
      }
      ppcVar32 = &local_318;
    }
    FUN_143a65764(&local_300,ppcVar32,lVar19);
    if (*ppcVar32 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1403eb6f0:
  dVar40 = local_2c8;
  dVar45 = local_2d8;
  dStack_1f0 = local_2c8;
  local_2c8 = 0.0;
  uVar13 = (undefined4)uStack_2c0;
  uVar14 = uStack_2c0._4_4_;
  local_1e8 = uStack_2c0;
  uStack_2c0 = 0.0;
  dStack_1e0 = local_2d8;
  local_2d8 = 0.0;
  uVar11 = (undefined4)uStack_2d0;
  uVar12 = uStack_2d0._4_4_;
  local_1d8 = uStack_2d0;
  uStack_2d0 = 0.0;
  lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar37 + 0xc60);
  local_1f8 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar16 != 2) {
      if (iVar16 != 1) goto LAB_1403eb79d;
      DVar17 = FUN_140ad26c0();
      DVar18 = GetCurrentThreadId();
      if (DVar17 == DVar18) goto LAB_1403eb7a6;
      goto LAB_1403eb8e1;
    }
LAB_1403eb7a6:
    FUN_143a6fc9e(&local_1f8,&DAT_14ca85100);
  }
  else {
LAB_1403eb79d:
    if (iVar16 == 0x10) goto LAB_1403eb7a6;
LAB_1403eb8e1:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar37 + 0xc60), iVar16 == 2))
      goto LAB_1403eb7a6;
      if (iVar16 == 1) {
        DVar17 = FUN_140ad26c0();
        DVar18 = GetCurrentThreadId();
        if (DVar17 == DVar18) goto LAB_1403eb7a6;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar31 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar22 = (uint *)*puVar31;
      if (puVar22 != (uint *)0x0) goto LAB_1403ebb47;
      while( true ) {
        uVar24 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar24 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar24 | 1;
          __tlregdtor(&LAB_143a6cf3b);
        }
        lVar37 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar21 = *(undefined4 **)(lVar37 + 0x310);
        *(undefined8 *)(lVar37 + 0x310) = 0;
        if (puVar21 == (undefined4 *)0x0) {
          puVar21 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar21 = 0xffffffff;
        *(undefined4 **)(puVar21 + 0x10) = puVar21 + 0x16;
        puVar21[0x12] = 0;
        *puVar31 = puVar21;
        FUN_140217a48(puVar31);
        puVar22 = (uint *)*puVar31;
LAB_1403ebb47:
        puVar33 = (undefined8 *)(*(longlong *)(puVar22 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar30 = (uint *)(puVar33 + 0x1a);
        uVar24 = puVar22[0x12];
        if (puVar30 <= puVar22 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar22 + 0x10) = puVar22 + 0x4000;
          LOCK();
          uVar15 = *puVar22;
          *puVar22 = *puVar22 + uVar24 + 1;
          UNLOCK();
          if ((uVar15 ^ uVar24) != 0xffffffff) break;
          puVar22 = (uint *)*puVar31;
          *puVar22 = 0xffffffff;
          *(uint **)(puVar22 + 0x10) = puVar22 + 0x16;
          puVar22[0x12] = 0;
          *puVar31 = puVar22;
          puVar33 = (undefined8 *)((longlong)puVar22 + 0x5fU & 0xfffffffffffffff8);
          puVar30 = (uint *)(puVar33 + 0x1a);
          uVar24 = 0;
          if (puVar30 <= puVar22 + 0x4000) {
            uVar24 = 1;
            goto LAB_1403ebbc7;
          }
        }
      }
      uVar24 = uVar24 + 1;
LAB_1403ebbc7:
      *(uint **)(puVar22 + 0x10) = puVar30;
      puVar22[0x12] = uVar24;
      iVar16 = 0;
      FUN_1447247dc(puVar33,0);
      *puVar33 = &PTR_FUN_14addd530;
      puVar33[0x15] = local_1f8;
      puVar33[0x16] = dStack_1f0;
      dStack_1f0 = 0.0;
      *(undefined4 *)(puVar33 + 0x17) = (undefined4)local_1e8;
      *(undefined4 *)((longlong)puVar33 + 0xbc) = local_1e8._4_4_;
      local_1e8 = 0.0;
      puVar33[0x18] = dStack_1e0;
      dStack_1e0 = 0.0;
      *(undefined4 *)(puVar33 + 0x19) = (undefined4)local_1d8;
      *(undefined4 *)((longlong)puVar33 + 0xcc) = local_1d8._4_4_;
      local_1d8 = 0.0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar24 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar24 < 2) {
          uVar38 = (ulonglong)(byte)(&DAT_149e38edc)[uVar24];
        }
        else {
          uVar38 = 2;
        }
      }
      else {
        iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar38 = 5;
      }
      if (*(code **)(puVar33[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar33[0xe] + 0x18))(puVar33 + 0xe,puVar33 + 9);
      }
      puVar33[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar33[9] = puVar33;
      puVar33[10] = puVar33;
      lVar37 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar37 == 0) {
        uVar39 = 1;
        if ((char)uVar38 != '\x06') {
          uVar39 = uVar38;
        }
        uVar38 = uVar39;
        uVar20 = 0;
      }
      else {
        if ((char)uVar38 == '\x06') {
          uVar38 = *(ulonglong *)(lVar37 + 0x38) >> 0x3b;
        }
        uVar20 = *(undefined8 *)(lVar37 + 0x30);
      }
      puVar33[0xf] = uVar20;
      puVar33[0x10] = uVar38 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar33 + 0x1c) = iVar16;
      if (puVar33 == (undefined8 *)0x0) {
        local_178 = (code *)CONCAT71(local_178._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar33 + 1) = *(int *)(puVar33 + 1) + 1;
        UNLOCK();
        local_178 = (code *)CONCAT71(local_178._1_7_,1);
        FUN_1447439e4(puVar33);
        LOCK();
        piVar1 = (int *)(puVar33 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar33)(puVar33,1);
        }
      }
    }
    else {
      local_178 = (code *)0x0;
      local_168 = (double *)FUN_14001cc68(0x30,8);
      *local_168 = (double)&PTR_LAB_14addd4d0;
      dStack_1f0 = 0.0;
      dStack_1e0 = 0.0;
      local_168[1] = local_340;
      local_168[2] = dVar40;
      *(undefined4 *)(local_168 + 3) = uVar13;
      *(undefined4 *)((longlong)local_168 + 0x1c) = uVar14;
      local_168[4] = dVar45;
      *(undefined4 *)(local_168 + 5) = uVar11;
      *(undefined4 *)((longlong)local_168 + 0x2c) = uVar12;
      if (local_168 + 1 != (double *)0x0) {
        local_178 = (code *)&LAB_143a6fe78;
      }
      local_3a8 = &local_178;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateSpawnInfoForSkinnedMesh",&DAT_14cb3d674);
      if (local_178 != (code *)0x0) {
        pdVar26 = local_168;
        if (local_168 == (double *)0x0) {
          pdVar26 = &local_158;
        }
        (**(code **)((longlong)*pdVar26 + 0x10))();
      }
    }
  }
  if (dStack_1e0 != 0.0) {
    FUN_1400020a8();
  }
  if (dStack_1f0 != 0.0) {
    FUN_1400020a8();
  }
  if (local_2d8 != 0.0) {
    FUN_1400020a8();
  }
  if (local_2c8 != 0.0) {
    FUN_1400020a8();
  }
LAB_1403eba21:
  if ((local_f0 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ec2c8 FUN_1403ec2c8 body=1695 status=ok
// SIG undefined FUN_1403ec2c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403ec2c8(uint *param_1)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  uint *puVar12;
  undefined8 *puVar13;
  code **ppcVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar27;
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined1 auVar38 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auStack_298 [32];
  undefined4 local_278;
  undefined4 local_270;
  undefined4 local_268;
  undefined8 local_260;
  wchar_t *local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  code **local_240;
  undefined1 *local_238;
  code *local_230;
  uint *local_220;
  code *local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  undefined1 local_1a8 [16];
  float local_198;
  float fStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  float local_188;
  float fStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  float local_158;
  float fStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  float local_148;
  float fStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [16];
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  undefined1 local_f8 [16];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  if (((((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
      && ((plVar10 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == param_1[1])))) &&
     (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar16 = *plVar10, lVar16 != 0)))) {
    if (DAT_14cad2858 == 0) {
      local_240 = &local_218;
      local_218 = FUN_144a7958c;
      local_230 = FUN_14081d0ea;
      local_238 = &LAB_146395584;
      local_248 = &LAB_147a0ba80;
      local_250 = &LAB_14575ccce;
      local_258 = L"Engine";
      local_260 = 0x40000000000;
      local_268 = 0x10000004;
      local_270 = 0x10;
      local_278 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar16 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar16 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) goto LAB_1403ec3b3;
  }
  lVar16 = 0;
LAB_1403ec3b3:
  if (0 < (int)param_1[0xac]) {
    puVar12 = param_1 + (ulonglong)param_1[0xaf] * 4 + 0xb0;
    lVar11 = 0x20;
    lVar17 = 0;
    lVar15 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0xaa);
      iVar7 = *(int *)(lVar3 + 0x30 + lVar17);
      if (iVar7 == -1) {
        puVar13 = &DAT_14c846480;
        ppcVar14 = &local_218;
        for (lVar9 = 0xc; puVar8 = puVar12, lVar9 != 0; lVar9 = lVar9 + -1) {
          *ppcVar14 = (code *)*puVar13;
          puVar13 = puVar13 + 1;
          ppcVar14 = ppcVar14 + 1;
        }
      }
      else {
        puVar8 = (uint *)FUN_140084aae(lVar16,&local_218,iVar7,&DAT_14c846480);
      }
      auVar19 = _DAT_149e1ef10;
      fVar18 = (float)local_1c8;
      fVar20 = (float)dStack_1c0;
      auVar22._12_4_ = fVar20;
      auVar22._8_4_ = fVar18;
      auVar22._0_4_ = (float)local_1d8;
      auVar22._4_4_ = (float)dStack_1d0;
      auVar45._12_4_ = (float)dStack_1e0;
      auVar45._8_4_ = (float)local_1e8;
      auVar45._0_4_ = (float)local_1f8;
      auVar45._4_4_ = (float)dStack_1f0;
      fVar25 = (float)local_208;
      fVar27 = (float)dStack_200;
      fVar36 = (float)(double)local_218;
      fVar39 = (float)dStack_210;
      auVar28 = *(undefined1 (*) [16])(lVar3 + 0x20 + lVar17);
      fVar4 = auVar28._0_4_;
      fVar5 = auVar28._4_4_;
      fVar6 = auVar28._12_4_;
      fVar21 = auVar28._8_4_;
      auVar28 = minps(auVar28,auVar22);
      auVar29._4_4_ = -(uint)(auVar28._4_4_ < 0.0);
      auVar29._0_4_ = -(uint)(auVar28._0_4_ < 0.0);
      auVar29._8_4_ = -(uint)(auVar28._8_4_ < 0.0);
      auVar29._12_4_ = -(uint)(auVar28._12_4_ < 0.0);
      iVar7 = movmskps((int)puVar8,auVar29);
      if (iVar7 == 0) {
        pfVar1 = (float *)(lVar3 + lVar17);
        fVar32 = *pfVar1;
        fVar33 = pfVar1[1];
        fVar34 = pfVar1[2];
        fVar35 = pfVar1[3];
        auVar26._0_4_ =
             fVar25 * fVar33 * -1.0 +
             fVar39 * fVar34 * 1.0 + fVar36 * fVar35 * 1.0 + fVar27 * fVar32;
        auVar26._4_4_ =
             fVar25 * fVar32 * 1.0 +
             fVar39 * fVar35 * 1.0 + fVar36 * fVar34 * -1.0 + fVar27 * fVar33;
        auVar26._8_4_ =
             fVar25 * fVar35 * 1.0 +
             fVar39 * fVar32 * -1.0 + fVar36 * fVar33 * 1.0 + fVar27 * fVar34;
        auVar26._12_4_ =
             fVar25 * fVar34 * -1.0 +
             fVar39 * fVar33 * -1.0 + fVar36 * fVar32 * -1.0 + fVar27 * fVar35;
        pfVar1 = (float *)(lVar3 + 0x10 + lVar17);
        fVar32 = *pfVar1 * auVar22._0_4_;
        fVar33 = pfVar1[1] * auVar22._4_4_;
        fVar34 = pfVar1[2] * fVar18;
        fVar35 = pfVar1[3] * fVar20;
        fVar37 = fVar33 * fVar36 - fVar39 * fVar32;
        fVar40 = fVar34 * fVar39 - fVar25 * fVar33;
        fVar41 = fVar32 * fVar25 - fVar36 * fVar34;
        fVar42 = fVar35 * fVar27 - fVar27 * fVar35;
        fVar37 = fVar37 + fVar37;
        fVar40 = fVar40 + fVar40;
        fVar41 = fVar41 + fVar41;
        fVar42 = fVar42 + fVar42;
        auVar38._4_4_ =
             auVar45._4_4_ + (fVar40 * fVar25 - fVar37 * fVar36) + fVar27 * fVar41 + fVar33;
        auVar38._0_4_ =
             auVar45._0_4_ + (fVar37 * fVar39 - fVar41 * fVar25) + fVar27 * fVar40 + fVar32;
        auVar38._8_4_ =
             (float)local_1e8 + (fVar41 * fVar36 - fVar40 * fVar39) + fVar27 * fVar37 + fVar34;
        auVar38._12_4_ =
             (float)dStack_1e0 + (fVar42 * fVar27 - fVar42 * fVar27) + fVar27 * fVar42 + fVar35;
      }
      else {
        fVar32 = fVar36 + fVar36;
        fVar33 = fVar39 + fVar39;
        fVar34 = fVar25 + fVar25;
        fVar35 = fVar27 * (fVar27 + fVar27);
        auVar43._0_4_ = ((float)DAT_149e1ef10 - (fVar25 * fVar34 + fVar39 * fVar33)) * auVar22._0_4_
        ;
        auVar43._4_4_ = (DAT_149e1ef10._4_4_ - (fVar25 * fVar34 + fVar36 * fVar32)) * auVar22._4_4_;
        auVar43._8_4_ = (DAT_149e1ef10._8_4_ - (fVar39 * fVar33 + fVar36 * fVar32)) * fVar18;
        auVar43._12_4_ = (DAT_149e1ef10._12_4_ - (fVar35 + fVar35)) * fVar20;
        fVar25 = (fVar33 * fVar36 + fVar27 * fVar34) * auVar22._0_4_;
        auVar46._4_4_ = (fVar34 * fVar39 + fVar27 * fVar32) * auVar22._4_4_;
        auVar46._0_4_ = fVar25;
        local_148 = (fVar34 * fVar36 + fVar27 * fVar33) * fVar18;
        local_158 = (fVar33 * fVar36 - fVar27 * fVar34) * auVar22._4_4_;
        fStack_144 = (fVar34 * fVar39 - fVar27 * fVar32) * fVar18;
        auVar29 = ZEXT816(0);
        auVar28 = blendps(auVar43,auVar29,8);
        auVar46._8_4_ = local_148;
        auVar46._12_4_ = (fVar32 * fVar36 + fVar27 * fVar32) * fVar20;
        local_168._4_4_ = fVar25;
        local_168._0_4_ = auVar43._0_4_;
        local_168._8_4_ = (fVar34 * fVar36 - fVar27 * fVar33) * auVar22._0_4_;
        local_168._12_4_ = 0;
        auVar47 = insertps(auVar46,auVar46,0x4c);
        uStack_150 = auVar47._0_4_;
        uStack_14c = auVar47._8_4_;
        uStack_140 = auVar28._8_4_;
        uStack_13c = auVar28._12_4_;
        auVar23._0_12_ = ZEXT812(0x3f800000);
        auVar23._12_4_ = 0;
        local_138 = insertps(auVar45,auVar23,0x30);
        pfVar1 = (float *)(lVar3 + lVar17);
        fVar25 = *pfVar1;
        fVar27 = pfVar1[1];
        fVar36 = pfVar1[2];
        fVar39 = pfVar1[3];
        fVar33 = fVar25 + fVar25;
        fVar34 = fVar27 + fVar27;
        fVar35 = fVar36 + fVar36;
        fVar32 = fVar39 * (fVar39 + fVar39);
        auVar30._0_4_ = ((float)DAT_149e1ef10 - (fVar36 * fVar35 + fVar27 * fVar34)) * fVar4;
        auVar30._4_4_ = (DAT_149e1ef10._4_4_ - (fVar36 * fVar35 + fVar25 * fVar33)) * fVar5;
        auVar30._8_4_ = (DAT_149e1ef10._8_4_ - (fVar27 * fVar34 + fVar25 * fVar33)) * fVar21;
        auVar30._12_4_ = (DAT_149e1ef10._12_4_ - (fVar32 + fVar32)) * fVar6;
        fVar36 = (fVar34 * fVar25 + fVar35 * fVar39) * fVar4;
        auVar44._4_4_ = (fVar35 * fVar27 + fVar33 * fVar39) * fVar5;
        auVar44._0_4_ = fVar36;
        local_188 = (fVar35 * fVar25 + fVar34 * fVar39) * fVar21;
        auVar47._0_4_ = (fVar34 * fVar25 - fVar35 * fVar39) * fVar5;
        auVar47._4_4_ = (fVar35 * fVar27 - fVar33 * fVar39) * fVar21;
        auVar47._8_4_ = (fVar35 * fVar25 - fVar34 * fVar39) * fVar4;
        auVar47._12_4_ = (fVar33 * fVar25 - fVar33 * fVar39) * fVar6;
        auVar28 = blendps(auVar30,auVar29,8);
        auVar44._8_4_ = local_188;
        auVar44._12_4_ = (fVar33 * fVar25 + fVar33 * fVar39) * fVar6;
        local_1a8._4_4_ = fVar36;
        local_1a8._0_4_ = auVar30._0_4_;
        local_1a8._8_4_ = auVar47._8_4_;
        local_1a8._12_4_ = 0;
        auVar45 = insertps(auVar44,auVar44,0x4c);
        uStack_190 = auVar45._0_4_;
        uStack_18c = auVar45._8_4_;
        uStack_180 = auVar28._8_4_;
        uStack_17c = auVar28._12_4_;
        local_178 = insertps(*(undefined1 (*) [16])(lVar3 + 0x10 + lVar17),auVar23,0x30);
        local_220 = puVar12;
        local_198 = auVar47._0_4_;
        fStack_194 = auVar30._4_4_;
        fStack_184 = auVar47._4_4_;
        fStack_154 = auVar43._4_4_;
        FUN_144afeb32(&local_128,auVar47._8_8_);
        FUN_144afd82e(&local_128);
        auVar28._4_4_ = -(uint)(0.0 <= auVar22._4_4_ * fVar5);
        auVar28._0_4_ = -(uint)(0.0 <= auVar22._0_4_ * fVar4);
        auVar28._8_4_ = -(uint)(0.0 <= fVar18 * fVar21);
        auVar28._12_4_ = -(uint)(0.0 <= fVar20 * fVar6);
        auVar28 = blendvps(_DAT_149f63320,auVar19,auVar28);
        fVar25 = auVar28._0_4_;
        local_120 = local_120 * fVar25;
        local_124 = local_124 * fVar25;
        local_128 = local_128 * fVar25;
        fVar25 = auVar28._4_4_;
        local_110 = local_110 * fVar25;
        local_114 = local_114 * fVar25;
        local_118 = fVar25 * local_118;
        fVar25 = auVar28._8_4_;
        local_100 = local_100 * fVar25;
        local_104 = local_104 * fVar25;
        local_108 = fVar25 * local_108;
        FUN_14066c2ac(&local_1b8,&local_128);
        fVar25 = local_1b8 * local_1b8 + fStack_1b4 * fStack_1b4;
        fVar27 = fStack_1b0 * fStack_1b0 + fStack_1ac * fStack_1ac;
        auVar24._0_4_ = fVar27 + fVar25;
        auVar24._4_4_ = fVar27 + fVar25;
        auVar24._8_4_ = fVar25 + fVar27;
        auVar24._12_4_ = fVar25 + fVar27;
        auVar19._4_4_ = -(uint)(1e-08 <= auVar24._4_4_);
        auVar19._0_4_ = -(uint)(1e-08 <= auVar24._0_4_);
        auVar19._8_4_ = -(uint)(1e-08 <= auVar24._8_4_);
        auVar19._12_4_ = -(uint)(1e-08 <= auVar24._12_4_);
        auVar28 = sqrtps(auVar24,auVar24);
        auVar28 = divps(_DAT_1499314a0,auVar28);
        auVar31._0_4_ = auVar28._0_4_ * local_1b8;
        auVar31._4_4_ = auVar28._4_4_ * fStack_1b4;
        auVar31._8_4_ = auVar28._8_4_ * fStack_1b0;
        auVar31._12_4_ = auVar28._12_4_ * fStack_1ac;
        auVar26 = blendvps(_DAT_149932320,auVar31,auVar19);
        auVar38 = blendps(auVar29,local_f8,7);
        puVar12 = local_220;
      }
      lVar3 = *(longlong *)puVar12;
      *(undefined1 (*) [16])(lVar3 + -0x20 + lVar11) = auVar26;
      *(undefined1 (*) [16])(lVar3 + -0x10 + lVar11) = auVar38;
      pfVar1 = (float *)(lVar3 + lVar11);
      *pfVar1 = fVar4 * auVar22._0_4_;
      pfVar1[1] = fVar5 * auVar22._4_4_;
      pfVar1[2] = fVar21 * fVar18;
      pfVar1[3] = fVar6 * fVar20;
      lVar15 = lVar15 + 1;
      lVar11 = lVar11 + 0x30;
      lVar17 = lVar17 + 0x40;
    } while (lVar15 < (int)param_1[0xac]);
  }
  if ((local_e0 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403ec968 FUN_1403ec968 body=87 status=ok
// SIG undefined FUN_1403ec968(void)

longlong * FUN_1403ec968(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 8))();
  if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
    *param_2 = lVar1;
    if (lVar1 == 0) {
      lVar1 = 0;
      goto LAB_1403ec9a0;
    }
  }
  else {
    FUN_1456cec3c(lVar1);
    *param_2 = lVar1;
  }
  uVar2 = FUN_1403ec9c0();
  lVar1 = FUN_144718840(lVar1,uVar2);
LAB_1403ec9a0:
  param_2[1] = lVar1;
  return param_2;
}



// FUNCTION 1403ec9c0 FUN_1403ec9c0 body=228 status=ok
// SIG undefined FUN_1403ec9c0(void)

longlong FUN_1403ec9c0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb56470 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14863119b;
    local_40 = FUN_1464b74db;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageCauserInterface",&DAT_14cb56470,&DAT_14863119a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb56470;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ecaae FUN_1403ecaae body=239 status=ok
// SIG undefined FUN_1403ecaae(void)

undefined8 * FUN_1403ecaae(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4046b0;
  param_1[8] = &PTR_FUN_149eacb10;
  if (*(char *)(param_1 + 0xc) == '\x01') {
    if ((((*(int *)((longlong)param_1 + 0x4c) != 0) &&
         (uVar1 = *(uint *)(param_1 + 9), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar3 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)((longlong)param_1 + 0x4c))) &&
        (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
         (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))))) {
      lVar2 = param_1[10];
      if (lVar2 != 0) {
        if (*(code **)(*plVar3 + 0x2f0) == FUN_1401f99c8) {
          FUN_1401f99c8(plVar3,lVar2,1);
        }
        else {
          (**(code **)(*plVar3 + 0x2f0))(plVar3,lVar2,1);
        }
      }
      param_1[9] = 0;
    }
    if (param_1[10] != 0) {
      FUN_1400020a8();
      param_1[10] = 0;
    }
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403ecb9e FUN_1403ecb9e body=96 status=ok
// SIG undefined FUN_1403ecb9e(void)

void FUN_1403ecb9e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1b6ba0;
  FUN_1403ecbfe(param_1,0);
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  if (*(int *)((longlong)param_1 + 0x34) < 0) {
    FUN_1470e845c(param_1 + 5,0);
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1403ecbfe FUN_1403ecbfe body=203 status=ok
// SIG undefined FUN_1403ecbfe(void)

void FUN_1403ecbfe(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 == param_2) {
    return;
  }
  if (lVar1 != 0) {
    uVar3 = *(uint *)(lVar1 + 0x30);
    if (0 < (int)uVar3) {
      iVar5 = 1;
      lVar6 = 0;
      lVar2 = *(longlong *)(lVar1 + 0x28);
      do {
        if ((*(longlong *)(lVar2 + lVar6) == param_1) && (*(char *)(lVar2 + 8 + lVar6) == '\x01')) {
          if (uVar3 - iVar5 != 0) {
            memmove((void *)(lVar2 + lVar6),(void *)(lVar6 + lVar2 + 0x20),
                    (longlong)(int)(uVar3 - iVar5) << 5);
            uVar3 = *(uint *)(lVar1 + 0x30);
          }
          *(uint *)(lVar1 + 0x30) = uVar3 - 1;
          FUN_1470e84bc((longlong *)(lVar1 + 0x28));
          break;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x20;
      } while ((ulonglong)uVar3 << 5 != lVar6);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  if (param_2 != 0) {
    plVar4 = (longlong *)FUN_1403eccca(param_2 + 0x28);
    *(undefined1 *)(plVar4 + 1) = 1;
    *plVar4 = param_1;
    *(longlong *)(param_1 + 0x20) = param_2;
  }
  FUN_14024bea0(param_1,1);
  return;
}



// FUNCTION 1403eccca FUN_1403eccca body=66 status=ok
// SIG undefined FUN_1403eccca(void)

longlong FUN_1403eccca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1406f8fea(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1403ecd0c(lVar2,1);
  return lVar2;
}



// FUNCTION 1403ecd0c FUN_1403ecd0c body=31 status=ok
// SIG undefined FUN_1403ecd0c(void)

void FUN_1403ecd0c(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x14) = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1403ecd2c FUN_1403ecd2c body=73 status=ok
// SIG undefined FUN_1403ecd2c(void)

void FUN_1403ecd2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149eb5dd0;
  FUN_1403ecdae();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecd76(param_1 + 1);
  return;
}



// FUNCTION 1403ecd76 FUN_1403ecd76 body=55 status=ok
// SIG undefined FUN_1403ecd76(void)

void FUN_1403ecd76(longlong *param_1)

{
  FUN_1403ece58(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403ecdae FUN_1403ecdae body=62 status=ok
// SIG undefined FUN_1403ecdae(void)

void FUN_1403ecdae(longlong param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  FUN_1403ecdec(param_1 + 8,0);
                    /* WARNING: Could not recover jumptable at 0x0001403ecde5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  return;
}



// FUNCTION 1403ecdec FUN_1403ecdec body=107 status=ok
// SIG undefined FUN_1403ecdec(void)

void FUN_1403ecdec(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1403ece3b:
      FUN_1403ece58(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1406b01e4(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1403ece3b;
  FUN_1403eced2(param_1);
  FUN_1403ece58(param_1,param_2);
  return;
}



// FUNCTION 1403ece58 FUN_1403ece58 body=121 status=ok
// SIG undefined FUN_1403ece58(void)

void FUN_1403ece58(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403eced2 FUN_1403eced2 body=325 status=ok
// SIG undefined FUN_1403eced2(void)

void FUN_1403eced2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403ed018 FUN_1403ed018 body=64 status=ok
// SIG undefined FUN_1403ed018(void)

void FUN_1403ed018(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1403ed058(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1403ed058 FUN_1403ed058 body=301 status=ok
// SIG undefined FUN_1403ed058(void)

ulonglong FUN_1403ed058(undefined8 param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = (ulonglong)param_3;
  if (((((longlong)(int)(param_3 - param_2) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_2 * 3) < (int)(param_3 * 2))) &&
     ((param_2 == 0 || (0x40 < (int)(param_3 - param_2))))) {
    if ((int)param_2 < 1) {
      uVar3 = (ulonglong)param_2;
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
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1403ed0ef;
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
LAB_1403ed0ef:
      uVar3 = uVar3 >> 3;
    }
  }
  return uVar3;
}



// FUNCTION 1403ed186 FUN_1403ed186 body=135 status=ok
// SIG undefined FUN_1403ed186(void)

void FUN_1403ed186(longlong param_1,uint param_2)

{
  longlong *plVar1;
  uint uVar2;
  
  if (0 < (int)param_2) {
    plVar1 = (longlong *)(param_1 + 0x3318);
    uVar2 = *(uint *)(param_1 + 0x3320);
    if ((int)uVar2 < (int)param_2) {
      *(uint *)(param_1 + 0x3320) = param_2;
      if (*(int *)(param_1 + 0x3324) - uVar2 < param_2 - uVar2) {
        FUN_1403ed20e(plVar1,uVar2);
      }
      FUN_144988f37((longlong)(int)uVar2 * 400 + *plVar1,param_2 - uVar2);
    }
    else if (param_2 < uVar2) {
      FUN_1472d3ab6(plVar1,param_2,uVar2 - param_2);
      FUN_1472d3b18(plVar1);
    }
    *(undefined1 *)(param_1 + 0x3310) = 1;
  }
  return;
}



// FUNCTION 1403ed20e FUN_1403ed20e body=271 status=ok
// SIG undefined FUN_1403ed20e(void)

void FUN_1403ed20e(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
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
    uVar5 = lVar4 * 400;
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
    iVar6 = SUB164(auVar2 * ZEXT816(0xa3d70a3d70a3d71),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,400,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1403ed31e FUN_1403ed31e body=110 status=ok
// SIG undefined FUN_1403ed31e(void)

void FUN_1403ed31e(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = 0xff;
  local_18 = 0xffffffff;
  local_14 = 0;
  local_48 = 1;
  cVar1 = (**(code **)(*param_1 + 0x3c0))(param_1,0,param_2);
  if (cVar1 != '\0') {
    *param_3 = local_40;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ed38e FUN_1403ed38e body=147 status=ok
// SIG undefined FUN_1403ed38e(void)

void FUN_1403ed38e(longlong param_1,longlong *param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  FUN_1403ed482();
  *(longlong *)(param_1 + 0x78) = param_2[0x97];
  FUN_1403ed422(param_1 + 0x80,param_2 + 0x98);
  *(char *)(param_1 + 0x98) = (char)param_2[0x9b];
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x4dc);
  *(int *)(param_1 + 0xa0) = (int)param_2[0x9c];
  if ((char)param_2[0x8d] == '\x01') {
    *(undefined1 *)(param_1 + 0x72) = 1;
    uVar2 = FUN_1403ed672(param_2 + 0x91);
  }
  else {
    *(undefined1 *)(param_1 + 0x72) = 0;
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  uVar1 = (**(code **)(*param_2 + 0x70))(param_2);
  *(undefined2 *)(param_1 + 0x70) = uVar1;
  return;
}



// FUNCTION 1403ed422 FUN_1403ed422 body=96 status=ok
// SIG undefined FUN_1403ed422(void)

undefined8 * FUN_1403ed422(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 2) == '\x01') {
      if (*(char *)(param_1 + 2) != '\0') {
        FUN_1449db362(param_1);
      }
      *param_1 = 0;
      *(undefined4 *)(param_1 + 1) = 0;
      FUN_14867b726(param_1,param_2);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 2) == '\0') {
        return param_1;
      }
      FUN_1449db362(param_1);
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 2) = uVar1;
  }
  return param_1;
}



// FUNCTION 1403ed482 FUN_1403ed482 body=402 status=ok
// SIG undefined FUN_1403ed482(void)

void FUN_1403ed482(longlong param_1,longlong *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar2 = *(undefined4 *)((longlong)param_2 + 700);
  lVar9 = param_2[0x58];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c4);
  *(int *)(param_1 + 0x40) = (int)param_2[0x57];
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *(int *)(param_1 + 0x48) = (int)lVar9;
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  *(longlong *)(param_1 + 0x50) = param_2[0x59];
  uVar8 = (**(code **)(*param_2 + 0x50))(param_2);
  *(undefined1 *)(param_1 + 0x58) = uVar8;
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)((longlong)param_2 + 0x13);
  if (((((*(int *)((longlong)param_2 + 0x2d4) == 0) ||
        (uVar1 = *(uint *)(param_2 + 0x5a), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar10 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)((longlong)param_2 + 0x2d4))))) ||
     (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
      ((lVar9 = *plVar10, lVar9 == 0 || (*(char *)(lVar9 + 0x1fb) != '\x02')))))) {
    FUN_1403ed616(&local_38,param_2 + 0x48,*(undefined8 *)(param_2[1] + 0x430));
    local_48 = param_2[0x67];
    lVar4 = param_2[0x65];
    lVar5 = param_2[0x66];
    *(undefined8 *)(param_1 + 0x38) = local_28;
    *(undefined8 *)(param_1 + 0x28) = local_38;
    *(undefined8 *)(param_1 + 0x30) = uStack_30;
    local_58._0_4_ = (undefined4)lVar4;
    local_58._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    uStack_50._0_4_ = (undefined4)lVar5;
    uStack_50._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
    *(undefined4 *)(param_1 + 0x10) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x14) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_50;
    *(undefined4 *)(param_1 + 0x1c) = uStack_50._4_4_;
    *(longlong *)(param_1 + 0x20) = local_48;
    *(undefined8 *)(param_1 + 0x60) = 0;
    lVar9 = 0;
    local_58 = lVar4;
    uStack_50 = lVar5;
  }
  else {
    plVar10 = param_2 + 0x54;
    if (DAT_14c7613d8 == 0) {
      plVar10 = param_2 + 0x65;
    }
    local_48 = plVar10[2];
    lVar4 = *plVar10;
    lVar5 = plVar10[1];
    lVar6 = param_2[0x51];
    lVar7 = param_2[0x52];
    *(longlong *)(param_1 + 0x38) = param_2[0x53];
    *(longlong *)(param_1 + 0x28) = lVar6;
    *(longlong *)(param_1 + 0x30) = lVar7;
    local_58._0_4_ = (undefined4)lVar4;
    local_58._4_4_ = (undefined4)((ulonglong)lVar4 >> 0x20);
    uStack_50._0_4_ = (undefined4)lVar5;
    uStack_50._4_4_ = (undefined4)((ulonglong)lVar5 >> 0x20);
    *(undefined4 *)(param_1 + 0x10) = (undefined4)local_58;
    *(undefined4 *)(param_1 + 0x14) = local_58._4_4_;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_50;
    *(undefined4 *)(param_1 + 0x1c) = uStack_50._4_4_;
    *(longlong *)(param_1 + 0x20) = local_48;
    *(longlong *)(param_1 + 0x60) = lVar9;
    lVar9 = param_2[0x5b];
    local_58 = lVar4;
    uStack_50 = lVar5;
  }
  *(longlong *)(param_1 + 0x68) = lVar9;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ed616 FUN_1403ed616 body=92 status=ok
// SIG undefined FUN_1403ed616(void)

undefined8 * FUN_1403ed616(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_3 == 0) || (DAT_14cad86e8 < 1)) {
    param_1[2] = param_2[2];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  else {
    lVar2 = *(longlong *)(param_3 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_3);
    }
    FUN_147a92d32(param_1,param_2,lVar2 + 0x710);
  }
  return param_1;
}



// FUNCTION 1403ed672 FUN_1403ed672 body=311 status=ok
// SIG undefined FUN_1403ed672(void)

int FUN_1403ed672(double *param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double _X;
  
  dVar4 = *param_1;
  dVar3 = param_1[1];
  if (((9.999999747378752e-05 < ABS(dVar4)) || (9.999999747378752e-05 < ABS(dVar3))) ||
     (iVar1 = 0, 9.999999747378752e-05 < ABS(param_1[2]))) {
    dVar2 = 0.0;
    if (((dVar4 != 0.0) || (NAN(dVar4))) || ((dVar3 != 0.0 || (NAN(dVar3))))) {
      dVar2 = atan2(dVar3,dVar4);
      dVar4 = *param_1;
      dVar3 = param_1[1];
      dVar2 = dVar2 * 57.29577951308232 * 65536.0;
    }
    _X = SQRT(dVar4 * dVar4 + dVar3 * dVar3);
    dVar4 = param_1[2];
    dVar3 = 0.0;
    if (((dVar4 != 0.0) || (NAN(dVar4))) || ((_X != 0.0 || (NAN(_X))))) {
      dVar4 = atan2(dVar4,_X);
      dVar3 = dVar4 * 57.29577951308232 * 32767.0;
    }
    iVar1 = ((uint)(longlong)ROUND(dVar3 / 360.0 + dVar3 / 360.0 + 0.5) & 0xfffe) * 0x8000 +
            ((uint)((ulonglong)(longlong)ROUND(dVar2 / 360.0 + dVar2 / 360.0 + 0.5) >> 1) & 0xffff)
            + -0x80000000;
  }
  return iVar1;
}



// FUNCTION 1403ed7aa FUN_1403ed7aa body=3 status=ok
// SIG undefined FUN_1403ed7aa(void)

undefined8 FUN_1403ed7aa(void)

{
  return 0;
}



// FUNCTION 1403ed7ae FUN_1403ed7ae body=3 status=ok
// SIG undefined FUN_1403ed7ae(void)

undefined8 FUN_1403ed7ae(void)

{
  return 0;
}



// FUNCTION 1403ed7b2 FUN_1403ed7b2 body=116 status=ok
// SIG undefined FUN_1403ed7b2(void)

void FUN_1403ed7b2(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1401c3474(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1403ed828(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1403ed828 FUN_1403ed828 body=343 status=ok
// SIG undefined FUN_1403ed828(void)

void FUN_1403ed828(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar7 = (ulonglong)uVar3;
  iVar4 = *(int *)(param_1 + 0xc);
  if (((0x3fff < iVar4 - uVar3) || ((int)(uVar3 * 3) < iVar4 * 2)) &&
     (uVar3 == 0 || 0x40 < (int)(iVar4 - uVar3))) {
    if ((0 < (int)uVar3) && (DAT_14c872d28 != (longlong *)0x0)) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar7 = uVar7 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
        }
        else {
          uVar5 = (ulonglong)((uint)uVar7 & 0xfffffff0);
          if (uVar5 < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar7 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403ed8be;
              lVar1 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar7 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar7 = (ulonglong)DAT_14c841df8;
          }
          uVar7 = -uVar7 & (uVar5 + uVar7) - 1;
        }
      }
      else {
        uVar7 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar7,1);
        iVar4 = *(int *)(param_1 + 0xc);
      }
    }
LAB_1403ed8be:
    if ((int)uVar7 != iVar4) {
      *(int *)(param_1 + 0xc) = (int)uVar7;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar7,1,1);
    }
  }
  return;
}



// FUNCTION 1403ed980 FUN_1403ed980 body=38 status=ok
// SIG undefined FUN_1403ed980(void)

undefined8 FUN_1403ed980(undefined8 param_1,int param_2)

{
  FUN_1403ed9a6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403ed9a6 FUN_1403ed9a6 body=160 status=ok
// SIG undefined FUN_1403ed9a6(void)

void FUN_1403ed9a6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a161830;
  if (*(char *)((longlong)param_1 + 0x51) == '\0') {
    FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0xb61,
                  L"IAsyncReadRequests must not be deleted until they are completed.");
  }
  FUN_140320d2a(param_1[0xb],param_1,param_1[0xc],param_1[0xd],(longlong)param_1 + 0x81);
  if ((param_1[1] != 0) && (*(char *)((longlong)param_1 + 0x55) == '\0')) {
    FUN_1400020a8();
  }
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_1403b9902(param_1 + 0x11);
  FUN_1400e0f74(param_1);
  return;
}



// FUNCTION 1403eda46 FUN_1403eda46 body=300 status=ok
// SIG undefined FUN_1403eda46(void)

void FUN_1403eda46(longlong param_1,longlong *param_2)

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
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  if ((DAT_14c762968 != 0) && (lVar3 = *(longlong *)(param_1 + 8), lVar3 != 0)) {
    iVar11 = *(int *)(lVar3 + 0x38);
    iVar10 = (int)param_2[1] + iVar11;
    if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar10);
    }
    if (*(int *)((longlong)param_2 + 0xc) < iVar10) {
      FUN_1403edb72(param_2);
    }
    iVar11 = iVar11 + (int)param_2[3];
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    if (*(int *)((longlong)param_2 + 0x1c) < iVar11) {
      FUN_1403edb8c(param_2 + 2,iVar11);
    }
    iVar11 = *(int *)(lVar3 + 0x38);
    if ((longlong)iVar11 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x30);
      lVar13 = 0;
      do {
        iVar10 = (int)param_2[3];
        *(uint *)(param_2 + 3) = iVar10 + 1U;
        if (*(uint *)((longlong)param_2 + 0x1c) < iVar10 + 1U) {
          FUN_141766356(param_2 + 2,iVar10);
        }
        lVar12 = lVar3 + lVar13;
        lVar4 = param_2[2];
        *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar10 * 0x18) = *(undefined8 *)(lVar12 + 0x38);
        uVar5 = *(undefined4 *)(lVar12 + 0x2c);
        uVar6 = *(undefined4 *)(lVar12 + 0x30);
        uVar7 = *(undefined4 *)(lVar12 + 0x34);
        puVar1 = (undefined4 *)(lVar4 + (longlong)iVar10 * 0x18);
        *puVar1 = *(undefined4 *)(lVar12 + 0x28);
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        iVar10 = (int)param_2[1];
        lVar12 = (longlong)iVar10;
        *(uint *)(param_2 + 1) = iVar10 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
          FUN_1417662f8(param_2,iVar10);
        }
        puVar1 = (undefined4 *)(lVar3 + lVar13);
        lVar4 = *param_2;
        *(undefined8 *)(lVar4 + 0x20 + lVar12 * 0x28) = *(undefined8 *)(puVar1 + 8);
        uVar5 = *puVar1;
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        uVar9 = *(undefined8 *)(puVar1 + 6);
        puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar12 * 0x28);
        *puVar2 = *(undefined8 *)(puVar1 + 4);
        puVar2[1] = uVar9;
        puVar1 = (undefined4 *)(lVar4 + lVar12 * 0x28);
        *puVar1 = uVar5;
        puVar1[1] = uVar6;
        puVar1[2] = uVar7;
        puVar1[3] = uVar8;
        lVar13 = lVar13 + 0x40;
      } while ((longlong)iVar11 * 0x40 != lVar13);
    }
  }
  return;
}



// FUNCTION 1403edb72 FUN_1403edb72 body=26 status=ok
// SIG undefined FUN_1403edb72(void)

void FUN_1403edb72(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1403edba6(param_1,*(undefined4 *)(param_1 + 8),param_2,0x28);
    return;
  }
  return;
}



// FUNCTION 1403edb8c FUN_1403edb8c body=26 status=ok
// SIG undefined FUN_1403edb8c(void)

void FUN_1403edb8c(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1403edd7c(param_1,*(undefined4 *)(param_1 + 8),param_2,0x18);
    return;
  }
  return;
}



// FUNCTION 1403edba6 FUN_1403edba6 body=469 status=ok
// SIG undefined FUN_1403edba6(void)

void FUN_1403edba6(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1403edcd6:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1403edd13:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1403edc10;
LAB_1403edc05:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1403edc10:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa5) goto code_r0x0001403edc3d;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1403edc93:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1403edd13;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1403edcd6;
code_r0x0001403edc3d:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1403edc93;
    }
  }
  goto LAB_1403edc05;
}



// FUNCTION 1403edd7c FUN_1403edd7c body=469 status=ok
// SIG undefined FUN_1403edd7c(void)

void FUN_1403edd7c(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  if (((int)param_3 < 0) || (param_4 - 0x80000000U < 0xffffffff80000001)) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_3,param_4);
  }
  _Size = (ulonglong)param_3 * param_4;
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1403edeac:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1403edee9:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1403edde6;
LAB_1403edddb:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1403edde6:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001403ede13;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1403ede69:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1403edee9;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1403edeac;
code_r0x0001403ede13:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1403ede69;
    }
  }
  goto LAB_1403edddb;
}



// FUNCTION 1403edf60 FUN_1403edf60 body=59 status=ok
// SIG undefined FUN_1403edf60(void)

undefined8 * FUN_1403edf60(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3de8d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403edf9c FUN_1403edf9c body=1197 status=ok
// SIG undefined FUN_1403edf9c(void)

void FUN_1403edf9c(undefined8 *param_1,undefined8 *param_2,longlong *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  longlong *plVar7;
  void *pvVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  float *local_88;
  uint local_80;
  undefined4 local_7c;
  float *local_78;
  uint local_70;
  undefined4 local_6c;
  float *local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar1) {
    pfVar5 = (float *)*param_2;
    pfVar6 = (float *)*param_1;
    if (param_4 == 1) {
      fVar14 = *pfVar5;
      plVar7 = *(longlong **)pfVar6;
      if (plVar7 != param_3) {
        iVar2 = (int)plVar7[1];
        pvVar8 = (void *)*plVar7;
        *(int *)(param_3 + 1) = iVar2;
        if (iVar2 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_3 + 0xc) = 0;
        }
        else {
          FUN_14471726c(param_3);
          if (iVar2 != 0) {
            memcpy((void *)*param_3,pvVar8,(longlong)iVar2 << 4);
          }
        }
      }
      *(char *)(param_3 + 2) = (char)plVar7[2];
      if ((1e-08 < ABS(fVar14 + -1.0)) && (lVar11 = param_3[1], (longlong)(int)lVar11 != 0)) {
        lVar9 = *param_3;
        lVar10 = 0;
        do {
          *(float *)(lVar9 + 8 + lVar10) = *(float *)(lVar9 + 8 + lVar10) * fVar14;
          lVar10 = lVar10 + 0x10;
        } while ((longlong)(int)lVar11 * 0x10 != lVar10);
      }
      if (uVar1 != 1) {
        uVar13 = 2;
        if (2 < (int)uVar1) {
          uVar13 = (ulonglong)uVar1;
        }
        uVar12 = 1;
        do {
          FUN_1403ee44a(param_3,*(undefined8 *)(pfVar6 + uVar12 * 2));
          uVar12 = uVar12 + 1;
        } while (uVar13 != uVar12);
      }
    }
    else if (param_4 - 2U < 5) {
      uVar3 = (uint)param_2[1];
      uVar4 = *(undefined4 *)((longlong)param_1 + 0xc);
      switch(param_4) {
      case 2:
        if (uVar3 != 0) {
          fVar14 = 0.0;
          lVar11 = 0;
          do {
            fVar14 = fVar14 + *(float *)((longlong)pfVar5 + lVar11);
            lVar11 = lVar11 + 4;
          } while ((longlong)(int)uVar3 * 4 != lVar11);
          if (1e-05 < fVar14) {
            local_68 = (float *)0x0;
            uStack_60 = (ulonglong)uVar3;
            FUN_14475e4ac(&local_68,0);
            if (0 < (int)uVar3) {
              uVar13 = 0;
              do {
                local_68[uVar13] = pfVar5[uVar13] / fVar14;
                uVar13 = uVar13 + 1;
              } while (uVar3 != uVar13);
            }
            local_78 = local_68;
            local_70 = (uint)uStack_60;
            local_88 = pfVar6;
            local_80 = uVar1;
            local_7c = uVar4;
            FUN_1417b3a00(&local_88,&local_78,param_3);
            if (local_68 != (float *)0x0) {
              FUN_1400020a8();
            }
            break;
          }
        }
      case 3:
        local_78 = pfVar6;
        local_70 = uVar1;
        local_6c = uVar4;
        local_68 = pfVar5;
        uStack_60 = param_2[1];
        FUN_1417b3a00(&local_78,&local_68,param_3);
        break;
      case 4:
        fVar14 = *pfVar5;
        lVar11 = *(longlong *)pfVar6;
        FUN_144717214(param_3);
        *(undefined1 *)(param_3 + 2) = *(undefined1 *)(lVar11 + 0x10);
        if ((1e-08 < ABS(fVar14 + -1.0)) && (lVar11 = param_3[1], (longlong)(int)lVar11 != 0)) {
          lVar9 = *param_3;
          lVar10 = 0;
          do {
            *(float *)(lVar9 + 8 + lVar10) = *(float *)(lVar9 + 8 + lVar10) * fVar14;
            lVar10 = lVar10 + 0x10;
          } while ((longlong)(int)lVar11 * 0x10 != lVar10);
        }
        break;
      case 5:
        fVar14 = *pfVar5;
        plVar7 = *(longlong **)pfVar6;
        if (plVar7 != param_3) {
          iVar2 = (int)plVar7[1];
          pvVar8 = (void *)*plVar7;
          *(int *)(param_3 + 1) = iVar2;
          if (iVar2 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
            *(undefined4 *)((longlong)param_3 + 0xc) = 0;
          }
          else {
            FUN_14471726c(param_3);
            if (iVar2 != 0) {
              memcpy((void *)*param_3,pvVar8,(longlong)iVar2 << 4);
            }
          }
        }
        *(char *)(param_3 + 2) = (char)plVar7[2];
        if ((1e-08 < ABS(fVar14 + -1.0)) && (lVar11 = param_3[1], (longlong)(int)lVar11 != 0)) {
          lVar9 = *param_3;
          lVar10 = 0;
          do {
            *(float *)(lVar9 + 8 + lVar10) = *(float *)(lVar9 + 8 + lVar10) * fVar14;
            lVar10 = lVar10 + 0x10;
          } while ((longlong)(int)lVar11 * 0x10 != lVar10);
        }
        if (uVar1 != 1) {
          uVar13 = 2;
          if (2 < (int)uVar1) {
            uVar13 = (ulonglong)uVar1;
          }
          uVar12 = 1;
          do {
            FUN_14498a2d8(param_3,*(undefined8 *)(pfVar6 + uVar12 * 2));
            uVar12 = uVar12 + 1;
          } while (uVar13 != uVar12);
        }
        break;
      case 6:
        fVar14 = *pfVar5;
        lVar11 = *(longlong *)pfVar6;
        FUN_144717214(param_3);
        *(undefined1 *)(param_3 + 2) = *(undefined1 *)(lVar11 + 0x10);
        if ((1e-08 < ABS(fVar14 + -1.0)) && (lVar11 = param_3[1], (longlong)(int)lVar11 != 0)) {
          lVar9 = *param_3;
          lVar10 = 0;
          do {
            *(float *)(lVar9 + 8 + lVar10) = *(float *)(lVar9 + 8 + lVar10) * fVar14;
            lVar10 = lVar10 + 0x10;
          } while ((longlong)(int)lVar11 * 0x10 != lVar10);
        }
        if (uVar1 != 1) {
          uVar13 = 2;
          if (2 < (int)uVar1) {
            uVar13 = (ulonglong)uVar1;
          }
          uVar12 = 1;
          do {
            FUN_1478daede(param_3,*(undefined8 *)(pfVar6 + uVar12 * 2));
            uVar12 = uVar12 + 1;
          } while (uVar13 != uVar12);
        }
      }
    }
    else {
      fVar14 = *pfVar5;
      lVar11 = *(longlong *)pfVar6;
      FUN_144717214(param_3);
      *(undefined1 *)(param_3 + 2) = *(undefined1 *)(lVar11 + 0x10);
      if ((1e-08 < ABS(fVar14 + -1.0)) && (lVar11 = param_3[1], (longlong)(int)lVar11 != 0)) {
        lVar9 = *param_3;
        lVar10 = 0;
        do {
          *(float *)(lVar9 + 8 + lVar10) = *(float *)(lVar9 + 8 + lVar10) * fVar14;
          lVar10 = lVar10 + 0x10;
        } while ((longlong)(int)lVar11 * 0x10 != lVar10);
      }
      if (uVar1 != 1) {
        uVar13 = 2;
        if (2 < (int)uVar1) {
          uVar13 = (ulonglong)uVar1;
        }
        uVar12 = 1;
        do {
          FUN_1449802a2(param_3,*(undefined8 *)(pfVar6 + uVar12 * 2));
          uVar12 = uVar12 + 1;
        } while (uVar13 != uVar12);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403ee44a FUN_1403ee44a body=650 status=ok
// SIG undefined FUN_1403ee44a(void)

void FUN_1403ee44a(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  
  uVar1 = *(uint *)(param_2 + 1);
  if (uVar1 == 0) {
    return;
  }
  uVar6 = *(uint *)(param_1 + 1);
  if ((char)param_1[2] == '\0') {
    FUN_144716af1(*param_1,uVar6);
    *(undefined1 *)(param_1 + 2) = 1;
  }
  if ((char)param_2[2] == '\0') {
    FUN_144716af1(*param_2,(int)param_2[1]);
    *(undefined1 *)(param_2 + 2) = 1;
  }
  uVar11 = uVar6;
  if ((int)uVar6 < (int)uVar1) {
    uVar11 = uVar1;
  }
  iVar4 = (int)uVar11 / 2 + uVar11;
  if (-1 < iVar4) {
    if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
      FUN_14480ffb8();
    }
    if (uVar6 == 0 && 0 < (int)uVar1) {
      uVar11 = 0;
    }
    else {
      uVar12 = 1;
      iVar4 = 0;
      lVar10 = 0;
      uVar11 = 0;
      do {
        if ((uVar11 == uVar1) && ((longlong)(uVar12 - 1) <= (longlong)(int)uVar6)) {
          return;
        }
        lVar5 = *param_1;
        lVar7 = *param_2;
        lVar2 = *(longlong *)(lVar7 + (longlong)(int)uVar11 * 0x10);
        lVar3 = *(longlong *)(lVar5 + lVar10);
        if (lVar3 == lVar2) {
          uVar11 = uVar11 + 1;
        }
        else {
          iVar9 = (int)lVar3 - (int)lVar2;
          if (iVar9 == 0) {
            iVar9 = (int)((ulonglong)lVar3 >> 0x20) - (int)((ulonglong)lVar2 >> 0x20);
          }
          if (-1 < iVar9) {
            iVar9 = (int)param_1[1];
            *(int *)(param_1 + 1) = iVar9 + 1;
            if (*(int *)((longlong)param_1 + 0xc) == iVar9) {
              FUN_1406de67a(param_1,iVar9);
              lVar5 = *param_1;
            }
            puVar8 = (undefined8 *)(lVar7 + (longlong)(int)uVar11 * 0x10);
            memmove((void *)(lVar5 + lVar10 + 0x10),(void *)(lVar5 + lVar10),
                    (ulonglong)(uint)(iVar9 + iVar4) << 4);
            lVar5 = *param_1;
            FUN_14470c6f4(lVar5 + lVar10,1);
            uVar6 = *(uint *)(param_1 + 1);
            *(undefined8 *)(lVar5 + lVar10) = *puVar8;
            *(undefined4 *)(lVar5 + 8 + lVar10) = *(undefined4 *)(puVar8 + 1);
            *(undefined1 *)(lVar5 + 0xc + lVar10) = *(undefined1 *)((longlong)puVar8 + 0xc);
            uVar11 = uVar11 + 1;
          }
        }
        bVar13 = uVar12 != uVar6;
        uVar12 = uVar12 + 1;
        lVar10 = lVar10 + 0x10;
        iVar4 = iVar4 + -1;
      } while (bVar13 || (int)uVar1 <= (int)uVar11);
    }
    iVar4 = (uVar1 - uVar11) + (int)param_1[1];
    if (-1 < iVar4) {
      if (*(int *)((longlong)param_1 + 0xc) < iVar4) {
        FUN_14480ffb8();
      }
      iVar4 = uVar1 - uVar11;
      if (iVar4 == 0 || (int)uVar1 < (int)uVar11) {
        return;
      }
      uVar12 = (longlong)(int)uVar11 << 4 | 0xc;
      do {
        lVar10 = *param_2;
        iVar9 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar9 + 1U) {
          FUN_1406de67a(param_1,iVar9);
        }
        lVar5 = *param_1;
        lVar7 = (longlong)iVar9 * 0x10;
        FUN_14470c6f4(lVar5 + lVar7,1);
        *(undefined8 *)(lVar5 + lVar7) = *(undefined8 *)(lVar10 + -0xc + uVar12);
        *(undefined4 *)(lVar5 + 8 + lVar7) = *(undefined4 *)(lVar10 + -4 + uVar12);
        *(undefined1 *)(lVar5 + 0xc + lVar7) = *(undefined1 *)(lVar10 + uVar12);
        uVar12 = uVar12 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar4);
}



// FUNCTION 1403ee6d4 FUN_1403ee6d4 body=77 status=ok
// SIG undefined FUN_1403ee6d4(void)

ulonglong FUN_1403ee6d4(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x118))(param_1 + 0x178);
  if (((((char)uVar1 == '\0') || ((*(byte *)(param_1 + 0x1c8) & 2) == 0)) ||
      (*(char *)(param_1 + 0x1b98) != '\0')) || (*(char *)(param_1 + 0x11f0) != '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)uVar1 >> 8),*(undefined1 *)(param_1 + 0x1b70)) ^ 1;
  }
  return uVar2;
}



// FUNCTION 1403ee722 FUN_1403ee722 body=21 status=ok
// SIG undefined FUN_1403ee722(void)

undefined8 FUN_1403ee722(longlong *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  
  puVar1 = (undefined1 *)(**(code **)(*param_1 + 0x30))();
  uVar2 = CONCAT71((int7)((ulonglong)puVar1 >> 8),*puVar1) & 0xffffffffffffff02;
  return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 1);
}



// FUNCTION 1403ee73e FUN_1403ee73e body=128 status=ok
// SIG undefined FUN_1403ee73e(void)

longlong FUN_1403ee73e(longlong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[3];
  if ((longlong)iVar1 == 0) {
    iVar2 = (int)param_1[1];
    lVar3 = (longlong)iVar2;
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar2) {
      FUN_140332f3e(param_1,iVar2);
    }
    FUN_1403ee7be(lVar3 * 0x30 + *param_1,1);
  }
  else {
    iVar2 = *(int *)(param_1[2] + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 3) = iVar1 + -1;
    FUN_14479f406(param_1 + 2);
    lVar3 = (longlong)iVar2;
  }
  *param_2 = iVar2;
  return lVar3 * 0x30 + *param_1;
}



// FUNCTION 1403ee7be FUN_1403ee7be body=23 status=ok
// SIG undefined FUN_1403ee7be(void)

void FUN_1403ee7be(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x20);
    do {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1 = puVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403ee7d6 FUN_1403ee7d6 body=272 status=ok
// SIG undefined FUN_1403ee7d6(void)

longlong FUN_1403ee7d6(int *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = *param_1;
  plVar1 = (longlong *)(param_1 + 4);
  if (iVar3 < param_1[6]) {
    lVar6 = *plVar1;
    *(undefined4 *)(lVar6 + 4 + (longlong)iVar3 * 8) = param_2;
    lVar6 = (longlong)*(int *)(lVar6 + (longlong)iVar3 * 8) * 0x40 + *(longlong *)(param_3 + 0xc0);
  }
  else {
    plVar2 = (longlong *)(param_3 + 0xc0);
    iVar3 = *(int *)(param_3 + 0xd8);
    if ((longlong)iVar3 == 0) {
      iVar5 = *(int *)(param_3 + 200);
      lVar6 = (longlong)iVar5;
      *(int *)(param_3 + 200) = iVar5 + 1;
      if (*(int *)(param_3 + 0xcc) == iVar5) {
        FUN_140332e3e(plVar2,iVar5);
      }
      FUN_140331d12(lVar6 * 0x40 + *plVar2);
    }
    else {
      iVar5 = *(int *)(*(longlong *)(param_3 + 0xd0) + -4 + (longlong)iVar3 * 4);
      *(int *)(param_3 + 0xd8) = iVar3 + -1;
      FUN_14479f406(param_3 + 0xd0);
      lVar6 = (longlong)iVar5;
    }
    lVar6 = lVar6 * 0x40 + *plVar2;
    iVar3 = param_1[6];
    uVar4 = iVar3 + 1;
    param_1[6] = uVar4;
    if ((uint)param_1[7] < uVar4) {
      FUN_1400e6b38(plVar1);
    }
    *(ulonglong *)(*plVar1 + (longlong)iVar3 * 8) = CONCAT44(param_2,iVar5);
  }
  iVar3 = param_1[2];
  iVar5 = 0;
  if (*param_1 + 1 != iVar3) {
    iVar5 = *param_1 + 1;
  }
  *param_1 = iVar5;
  iVar5 = param_1[1] + 1;
  if (iVar3 <= param_1[1] + 1) {
    iVar5 = iVar3;
  }
  param_1[1] = iVar5;
  return lVar6;
}



// FUNCTION 1403ee8e6 FUN_1403ee8e6 body=213 status=ok
// SIG undefined FUN_1403ee8e6(void)

longlong FUN_1403ee8e6(int *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *param_1;
  plVar1 = (longlong *)(param_1 + 4);
  if (iVar2 < param_1[6]) {
    lVar4 = *plVar1;
    *(undefined4 *)(lVar4 + 4 + (longlong)iVar2 * 8) = param_2;
    lVar4 = (longlong)*(int *)(lVar4 + (longlong)iVar2 * 8) * 0x18 + *(longlong *)(param_3 + 0x20);
  }
  else {
    lVar4 = FUN_1400e6ab8(param_3 + 0x20,&local_3c);
    iVar2 = param_1[6];
    param_1[6] = iVar2 + 1U;
    if ((uint)param_1[7] < iVar2 + 1U) {
      FUN_1400e6b38(plVar1,iVar2);
    }
    *(ulonglong *)(*plVar1 + (longlong)iVar2 * 8) = CONCAT44(param_2,local_3c);
  }
  iVar2 = param_1[2];
  iVar3 = 0;
  if (*param_1 + 1 != iVar2) {
    iVar3 = *param_1 + 1;
  }
  *param_1 = iVar3;
  iVar3 = param_1[1] + 1;
  if (iVar2 <= param_1[1] + 1) {
    iVar3 = iVar2;
  }
  param_1[1] = iVar3;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ee9bc FUN_1403ee9bc body=236 status=ok
// SIG undefined FUN_1403ee9bc(void)

void FUN_1403ee9bc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*param_1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_1403ee9ff;
    *param_1 = 0;
LAB_1403eea68:
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
    if (puVar2 == (undefined8 *)0x0) goto LAB_1403ee9ff;
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    puVar3 = (undefined8 *)*param_1;
    if (puVar3 != puVar2) {
      *param_1 = (longlong)puVar2;
      LOCK();
      *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
      UNLOCK();
      if (puVar3 != (undefined8 *)0x0) goto LAB_1403eea68;
    }
  }
  LOCK();
  piVar1 = (int *)(puVar2 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
LAB_1403ee9ff:
  *(undefined4 *)(param_1 + 1) =
       *(undefined4 *)(*(longlong *)(*param_2 + 0x80) + (longlong)(int)param_2[1] * 4);
  *(undefined2 *)((longlong)param_1 + 0xc) =
       *(undefined2 *)(*(longlong *)(*param_2 + 0x170) + (longlong)(int)param_2[1] * 2);
  *(undefined1 *)(param_1 + 3) =
       *(undefined1 *)(*(longlong *)(*param_2 + 0x200) + (longlong)(int)param_2[1]);
  *(undefined1 *)((longlong)param_1 + 0x19) =
       *(undefined1 *)(*(longlong *)(*param_2 + 0x218) + (longlong)(int)param_2[1]);
  return;
}



// FUNCTION 1403eeaa8 FUN_1403eeaa8 body=287 status=ok
// SIG undefined FUN_1403eeaa8(void)

longlong FUN_1403eeaa8(int *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = *param_1;
  plVar1 = (longlong *)(param_1 + 4);
  if (iVar3 < param_1[6]) {
    lVar5 = *plVar1;
    *(undefined4 *)(lVar5 + 4 + (longlong)iVar3 * 8) = param_2;
    lVar5 = (longlong)*(int *)(lVar5 + (longlong)iVar3 * 8) * 0x20 + *(longlong *)(param_3 + 0x80);
  }
  else {
    plVar2 = (longlong *)(param_3 + 0x80);
    iVar3 = *(int *)(param_3 + 0x98);
    if ((longlong)iVar3 == 0) {
      iVar6 = *(int *)(param_3 + 0x88);
      lVar5 = (longlong)iVar6;
      *(int *)(param_3 + 0x88) = iVar6 + 1;
      if (*(int *)(param_3 + 0x8c) == iVar6) {
        FUN_140332d3e(plVar2,iVar6);
      }
      FUN_14033231d(lVar5 * 0x20 + *plVar2);
    }
    else {
      iVar6 = *(int *)(*(longlong *)(param_3 + 0x90) + -4 + (longlong)iVar3 * 4);
      *(int *)(param_3 + 0x98) = iVar3 + -1;
      FUN_14479f406(param_3 + 0x90);
      lVar5 = (longlong)iVar6;
    }
    lVar5 = lVar5 * 0x20 + *plVar2;
    iVar3 = param_1[6];
    uVar4 = iVar3 + 1;
    param_1[6] = uVar4;
    if ((uint)param_1[7] < uVar4) {
      FUN_1400e6b38(plVar1);
    }
    *(ulonglong *)(*plVar1 + (longlong)iVar3 * 8) = CONCAT44(param_2,iVar6);
  }
  iVar3 = param_1[2];
  iVar6 = 0;
  if (*param_1 + 1 != iVar3) {
    iVar6 = *param_1 + 1;
  }
  *param_1 = iVar6;
  iVar6 = param_1[1] + 1;
  if (iVar3 <= param_1[1] + 1) {
    iVar6 = iVar3;
  }
  param_1[1] = iVar6;
  return lVar5;
}



// FUNCTION 1403eebc8 FUN_1403eebc8 body=1512 status=ok
// SIG undefined FUN_1403eebc8(void)

longlong FUN_1403eebc8(longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
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
  uint uVar17;
  longlong *plVar18;
  int iVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined1 auStack_88 [36];
  int local_64;
  ulonglong local_60;
  ulonglong *local_58;
  int *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar17 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    plVar18 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar18 = (longlong *)param_1[8];
    }
    iVar19 = *(int *)((longlong)plVar18 +
                     (ulonglong)((int)param_1[9] - 1U & (uVar17 >> 0x10 ^ uVar17)) * 4);
    if (iVar19 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar19 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 + 1 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) {
            iVar19 = (int)puVar1[1];
            goto LAB_1403ef0aa;
          }
          break;
        }
        iVar19 = (int)puVar1[2];
      } while (iVar19 != -1);
    }
  }
  iVar19 = (int)param_1[0xb];
  *(uint *)(param_1 + 0xb) = iVar19 + 1U;
  if (*(uint *)((longlong)param_1 + 0x5c) < iVar19 + 1U) {
    FUN_1403ef578(param_1 + 10,iVar19);
  }
  lVar4 = param_1[10];
  lVar20 = (longlong)iVar19 * 0x1a0;
  lVar2 = lVar4 + lVar20;
  *(undefined4 *)(lVar4 + lVar20) = *(undefined4 *)param_3;
  *(undefined4 *)(lVar4 + 4 + lVar20) = *(undefined4 *)((longlong)param_3 + 4);
  *(undefined4 *)(lVar4 + 8 + lVar20) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar4 + 0x10 + lVar20) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar20) = param_3[2];
  param_3[2] = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar20) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)(lVar4 + 0x1c + lVar20) = *(undefined4 *)((longlong)param_3 + 0x1c);
  param_3[3] = 0;
  *param_3 = 0;
  *(undefined4 *)(lVar4 + 0x20 + lVar20) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(lVar4 + 0x24 + lVar20) = *(undefined4 *)((longlong)param_3 + 0x24);
  *(undefined4 *)(lVar4 + 0x28 + lVar20) = *(undefined4 *)(param_3 + 5);
  *(undefined8 *)(lVar4 + 0x30 + lVar20) = 0;
  *(undefined8 *)(lVar4 + 0x30 + lVar20) = param_3[6];
  param_3[6] = 0;
  *(undefined4 *)(lVar4 + 0x38 + lVar20) = *(undefined4 *)(param_3 + 7);
  *(undefined4 *)(lVar4 + 0x3c + lVar20) = *(undefined4 *)((longlong)param_3 + 0x3c);
  param_3[7] = 0;
  param_3[4] = 0;
  *(undefined4 *)(lVar4 + 0x40 + lVar20) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(lVar4 + 0x44 + lVar20) = *(undefined4 *)((longlong)param_3 + 0x44);
  *(undefined4 *)(lVar4 + 0x48 + lVar20) = *(undefined4 *)(param_3 + 9);
  *(undefined8 *)(lVar4 + 0x50 + lVar20) = 0;
  *(undefined8 *)(lVar4 + 0x50 + lVar20) = param_3[10];
  param_3[10] = 0;
  *(undefined4 *)(lVar4 + 0x58 + lVar20) = *(undefined4 *)(param_3 + 0xb);
  *(undefined4 *)(lVar4 + 0x5c + lVar20) = *(undefined4 *)((longlong)param_3 + 0x5c);
  param_3[0xb] = 0;
  param_3[8] = 0;
  *(undefined4 *)(lVar4 + 0x68 + lVar20) = *(undefined4 *)(param_3 + 0xd);
  *(undefined8 *)(lVar4 + 0x60 + lVar20) = param_3[0xc];
  *(undefined8 *)(lVar4 + 0x70 + lVar20) = 0;
  iVar3 = *(int *)(param_3 + 0xf);
  pvVar5 = (void *)param_3[0xe];
  *(int *)(lVar4 + 0x78 + lVar20) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)(lVar2 + 0x7c) = 0;
  }
  else {
    puVar21 = (undefined8 *)(lVar4 + lVar20 + 0x70);
    FUN_146ef0e5c(puVar21,iVar3);
    memcpy((void *)*puVar21,pvVar5,(longlong)iVar3 << 3);
  }
  *(undefined4 *)(lVar2 + 0x80) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(lVar2 + 0x84) = *(undefined4 *)((longlong)param_3 + 0x84);
  *(undefined4 *)(lVar2 + 0x88) = *(undefined4 *)(param_3 + 0x11);
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x90) = param_3[0x12];
  param_3[0x12] = 0;
  *(undefined4 *)(lVar2 + 0x98) = *(undefined4 *)(param_3 + 0x13);
  *(undefined4 *)(lVar2 + 0x9c) = *(undefined4 *)((longlong)param_3 + 0x9c);
  param_3[0x13] = 0;
  param_3[0x10] = 0;
  *(undefined4 *)(lVar2 + 0xa0) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(lVar2 + 0xa4) = *(undefined4 *)((longlong)param_3 + 0xa4);
  *(undefined4 *)(lVar2 + 0xa8) = *(undefined4 *)(param_3 + 0x15);
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = param_3[0x16];
  param_3[0x16] = 0;
  *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(param_3 + 0x17);
  *(undefined4 *)(lVar2 + 0xbc) = *(undefined4 *)((longlong)param_3 + 0xbc);
  param_3[0x17] = 0;
  param_3[0x14] = 0;
  *(undefined4 *)(lVar2 + 0xc0) = *(undefined4 *)(param_3 + 0x18);
  *(undefined4 *)(lVar2 + 0xc4) = *(undefined4 *)((longlong)param_3 + 0xc4);
  *(undefined4 *)(lVar2 + 200) = *(undefined4 *)(param_3 + 0x19);
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  *(undefined8 *)(lVar2 + 0xd0) = param_3[0x1a];
  param_3[0x1a] = 0;
  *(undefined4 *)(lVar2 + 0xd8) = *(undefined4 *)(param_3 + 0x1b);
  *(undefined4 *)(lVar2 + 0xdc) = *(undefined4 *)((longlong)param_3 + 0xdc);
  param_3[0x1b] = 0;
  param_3[0x18] = 0;
  *(undefined4 *)(lVar2 + 0xe8) = *(undefined4 *)(param_3 + 0x1d);
  *(undefined8 *)(lVar2 + 0xe0) = param_3[0x1c];
  *(undefined8 *)(lVar2 + 0xf0) = 0;
  iVar3 = *(int *)(param_3 + 0x1f);
  pvVar5 = (void *)param_3[0x1e];
  *(int *)(lVar2 + 0xf8) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)(lVar2 + 0xfc) = 0;
  }
  else {
    FUN_146ef0e5c((undefined8 *)(lVar2 + 0xf0),iVar3);
    memcpy(*(void **)(lVar2 + 0xf0),pvVar5,(longlong)iVar3 << 3);
  }
  *(undefined4 *)(lVar2 + 0x108) = *(undefined4 *)(param_3 + 0x21);
  *(undefined8 *)(lVar2 + 0x100) = param_3[0x20];
  *(undefined8 *)(lVar2 + 0x110) = 0;
  iVar3 = *(int *)(param_3 + 0x23);
  pvVar5 = (void *)param_3[0x22];
  *(int *)(lVar2 + 0x118) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)(lVar2 + 0x11c) = 0;
  }
  else {
    FUN_146ef0e5c((undefined8 *)(lVar2 + 0x110),iVar3);
    memcpy(*(void **)(lVar2 + 0x110),pvVar5,(longlong)iVar3 << 3);
  }
  *(undefined4 *)(lVar2 + 0x128) = *(undefined4 *)(param_3 + 0x25);
  *(undefined8 *)(lVar2 + 0x120) = param_3[0x24];
  *(undefined8 *)(lVar2 + 0x130) = 0;
  iVar3 = *(int *)(param_3 + 0x27);
  pvVar5 = (void *)param_3[0x26];
  *(int *)(lVar2 + 0x138) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)(lVar2 + 0x13c) = 0;
  }
  else {
    FUN_146ef0e5c((undefined8 *)(lVar2 + 0x130),iVar3);
    memcpy(*(void **)(lVar2 + 0x130),pvVar5,(longlong)iVar3 << 3);
  }
  *(undefined8 *)(lVar2 + 0x140) = 0;
  *(undefined8 *)(lVar2 + 0x140) = param_3[0x28];
  param_3[0x28] = 0;
  *(undefined4 *)(lVar2 + 0x148) = *(undefined4 *)(param_3 + 0x29);
  *(undefined4 *)(lVar2 + 0x14c) = *(undefined4 *)((longlong)param_3 + 0x14c);
  param_3[0x29] = 0;
  uVar6 = *(undefined4 *)(param_3 + 0x2a);
  uVar7 = *(undefined4 *)((longlong)param_3 + 0x154);
  uVar8 = *(undefined4 *)(param_3 + 0x2b);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x15c);
  uVar10 = *(undefined4 *)(param_3 + 0x2c);
  uVar11 = *(undefined4 *)((longlong)param_3 + 0x164);
  uVar12 = *(undefined4 *)(param_3 + 0x2d);
  uVar13 = *(undefined4 *)((longlong)param_3 + 0x16c);
  uVar14 = *(undefined4 *)((longlong)param_3 + 0x174);
  uVar15 = *(undefined4 *)(param_3 + 0x2f);
  uVar16 = *(undefined4 *)((longlong)param_3 + 0x17c);
  *(undefined4 *)(lVar2 + 0x170) = *(undefined4 *)(param_3 + 0x2e);
  *(undefined4 *)(lVar2 + 0x174) = uVar14;
  *(undefined4 *)(lVar2 + 0x178) = uVar15;
  *(undefined4 *)(lVar2 + 0x17c) = uVar16;
  *(undefined4 *)(lVar2 + 0x160) = uVar10;
  *(undefined4 *)(lVar2 + 0x164) = uVar11;
  *(undefined4 *)(lVar2 + 0x168) = uVar12;
  *(undefined4 *)(lVar2 + 0x16c) = uVar13;
  *(undefined4 *)(lVar2 + 0x150) = uVar6;
  *(undefined4 *)(lVar2 + 0x154) = uVar7;
  *(undefined4 *)(lVar2 + 0x158) = uVar8;
  *(undefined4 *)(lVar2 + 0x15c) = uVar9;
  *(undefined8 *)(lVar2 + 0x180) = param_3[0x30];
  *(undefined8 *)(lVar2 + 0x188) = param_3[0x31];
  *(undefined4 *)(lVar2 + 400) = 0xffffffff;
  *(undefined4 *)(lVar2 + 0x194) = *(undefined4 *)((longlong)param_3 + 0x194);
  *(undefined4 *)(lVar2 + 0x198) = *(undefined4 *)(param_3 + 0x33);
  *(undefined1 *)(lVar2 + 0x19c) = 1;
  *(undefined1 *)(lVar2 + 0x19d) = *(undefined1 *)((longlong)param_3 + 0x19d);
  param_3[0x31] = 0;
  local_50 = &local_64;
  local_58 = &local_60;
  local_64 = iVar19;
  FUN_1403ef1b2(param_1,local_44);
  iVar19 = local_64;
LAB_1403ef0aa:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return (longlong)iVar19 * 0x1a0 + param_1[10];
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ef1b2 FUN_1403ef1b2 body=342 status=ok
// SIG undefined FUN_1403ef1b2(void)

undefined4 * FUN_1403ef1b2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1403ef3a2(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_40 = uVar4;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_58 = 0;
  cVar2 = FUN_1403ef30a(param_1,uVar3,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1403ef98c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ef30a FUN_1403ef30a body=152 status=ok
// SIG undefined FUN_1403ef30a(void)

void FUN_1403ef30a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1400c9056((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1403ef373;
    }
  }
  uVar5 = 0;
LAB_1403ef373:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1403ef3a2 FUN_1403ef3a2 body=470 status=ok
// SIG undefined FUN_1403ef3a2(void)

int * FUN_1403ef3a2(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1403ef578 FUN_1403ef578 body=274 status=ok
// SIG undefined FUN_1403ef578(void)

void FUN_1403ef578(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x1a0;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x1a0)) {
      uVar5 = uVar4 / 0x1a0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x1a0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1403ef68c FUN_1403ef68c body=210 status=ok
// SIG undefined FUN_1403ef68c(void)

longlong FUN_1403ef68c(int *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = *param_1;
  plVar1 = (longlong *)(param_1 + 4);
  if (iVar2 < param_1[6]) {
    lVar3 = *plVar1;
    *(undefined4 *)(lVar3 + 4 + (longlong)iVar2 * 8) = param_2;
    lVar3 = (longlong)*(int *)(lVar3 + (longlong)iVar2 * 8) * 0x2c + *(longlong *)(param_3 + 0x60);
  }
  else {
    lVar3 = FUN_1400e6a40(param_3 + 0x60,&local_3c);
    iVar2 = param_1[6];
    param_1[6] = iVar2 + 1U;
    if ((uint)param_1[7] < iVar2 + 1U) {
      FUN_1400e6b38(plVar1,iVar2);
    }
    *(ulonglong *)(*plVar1 + (longlong)iVar2 * 8) = CONCAT44(param_2,local_3c);
  }
  iVar2 = param_1[2];
  iVar4 = 0;
  if (*param_1 + 1 != iVar2) {
    iVar4 = *param_1 + 1;
  }
  *param_1 = iVar4;
  iVar4 = param_1[1] + 1;
  if (iVar2 <= param_1[1] + 1) {
    iVar4 = iVar2;
  }
  param_1[1] = iVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ef760 FUN_1403ef760 body=275 status=ok
// SIG undefined FUN_1403ef760(void)

void FUN_1403ef760(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x60;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x60)) {
      uVar5 = uVar4 / 0x60 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x60,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1403ef874 FUN_1403ef874 body=280 status=ok
// SIG undefined FUN_1403ef874(void)

longlong FUN_1403ef874(int *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = *param_1;
  plVar1 = (longlong *)(param_1 + 4);
  if (iVar3 < param_1[6]) {
    lVar6 = *plVar1;
    *(undefined4 *)(lVar6 + 4 + (longlong)iVar3 * 8) = param_2;
    lVar6 = (longlong)*(int *)(lVar6 + (longlong)iVar3 * 8) * 0x70 + *(longlong *)(param_3 + 0xa0);
  }
  else {
    plVar2 = (longlong *)(param_3 + 0xa0);
    iVar3 = *(int *)(param_3 + 0xb8);
    if ((longlong)iVar3 == 0) {
      iVar5 = *(int *)(param_3 + 0xa8);
      lVar6 = (longlong)iVar5;
      *(int *)(param_3 + 0xa8) = iVar5 + 1;
      if (*(int *)(param_3 + 0xac) == iVar5) {
        FUN_140333166(plVar2,iVar5);
      }
      FUN_140331e5b(lVar6 * 0x70 + *plVar2);
    }
    else {
      iVar5 = *(int *)(*(longlong *)(param_3 + 0xb0) + -4 + (longlong)iVar3 * 4);
      *(int *)(param_3 + 0xb8) = iVar3 + -1;
      FUN_14479f406(param_3 + 0xb0);
      lVar6 = (longlong)iVar5;
    }
    lVar6 = lVar6 * 0x70 + *plVar2;
    iVar3 = param_1[6];
    uVar4 = iVar3 + 1;
    param_1[6] = uVar4;
    if ((uint)param_1[7] < uVar4) {
      FUN_1400e6b38(plVar1);
    }
    *(ulonglong *)(*plVar1 + (longlong)iVar3 * 8) = CONCAT44(param_2,iVar5);
  }
  iVar3 = param_1[2];
  iVar5 = 0;
  if (*param_1 + 1 != iVar3) {
    iVar5 = *param_1 + 1;
  }
  *param_1 = iVar5;
  iVar5 = param_1[1] + 1;
  if (iVar3 <= param_1[1] + 1) {
    iVar5 = iVar3;
  }
  param_1[1] = iVar5;
  return lVar6;
}



// FUNCTION 1403ef98c FUN_1403ef98c body=587 status=ok
// SIG undefined FUN_1403ef98c(void)

void FUN_1403ef98c(longlong *param_1)

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
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1403efb92;
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
LAB_1403efb92:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403efbd8 FUN_1403efbd8 body=587 status=ok
// SIG undefined FUN_1403efbd8(void)

void FUN_1403efbd8(longlong *param_1)

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
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1403efdde;
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
LAB_1403efdde:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403efe32 FUN_1403efe32 body=337 status=ok
// SIG undefined FUN_1403efe32(void)

void FUN_1403efe32(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  uint local_40;
  undefined4 uStack_3c;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_2 + 0x10) == '\0') && (*(longlong *)(param_1 + 4) == 0)) {
    local_48 = DAT_14cb7bf30;
    local_50 = DAT_14cb7bf28;
    FUN_1448075d0(&local_40);
    pbVar2 = (byte *)*param_3;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar3 = &DAT_14c9a1288;
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
        plVar7 = plVar3 + 8;
        if ((longlong *)plVar3[9] != (longlong *)0x0) {
          plVar7 = (longlong *)plVar3[9];
        }
        iVar6 = *(int *)((longlong)plVar7 + (ulonglong)((int)plVar3[10] - 1U & local_40) * 4);
        if (iVar6 != -1) {
          do {
            lVar1 = *plVar3 + (longlong)iVar6 * 0x40;
            if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == local_40) {
              if ((((lVar1 != 0) &&
                   (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
              goto LAB_1403eff0a;
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x38);
          } while (iVar6 != -1);
        }
      }
    }
    puVar5 = &DAT_14c9a1308;
LAB_1403eff0a:
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    pbVar2 = (byte *)*puVar5;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) != 0)) {
      if ((*pbVar2 & 3) == 1) {
        uVar4 = *(undefined8 *)(pbVar2 + 8);
      }
      else {
        uVar4 = 0;
      }
      FUN_1446ddc76(&local_40,uVar4,1);
      *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_3c,local_40);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403eff84 FUN_1403eff84 body=209 status=ok
// SIG undefined FUN_1403eff84(void)

longlong * FUN_1403eff84(longlong *param_1,undefined8 *param_2)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0x128))(0,&local_58);
  _Src = local_48;
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0xc) = local_58._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_2 + 3);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_2 + 4) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_2 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f0056 FUN_1403f0056 body=53 status=ok
// SIG undefined FUN_1403f0056(void)

longlong FUN_1403f0056(longlong param_1,undefined8 param_2)

{
  FUN_14010d536(param_2,param_1);
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1403f008c(*(longlong *)(param_1 + 0xc0),param_2);
  }
  return param_1;
}



// FUNCTION 1403f008c FUN_1403f008c body=384 status=ok
// SIG undefined FUN_1403f008c(void)

void FUN_1403f008c(longlong *param_1,longlong *param_2)

{
  PSRWLOCK SRWLock;
  void *_Src;
  char cVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1403f020e(*param_1);
  if ((cVar1 == '\0') || ((*(byte *)(*param_1 + 0x180) & 1) == 0)) goto LAB_1403f00b4;
  FUN_1403f0254(*param_1,&local_40,param_2);
  _Src = local_30;
  if ((CONCAT44(uStack_3c,local_40) == *param_2) && (CONCAT44(uStack_34,uStack_38) == param_2[1])) {
    if (local_28 == (int)param_2[3]) {
      if (1 < local_28) {
        lVar2 = 0;
        while( true ) {
          uVar3 = *(ushort *)((longlong)local_30 + lVar2);
          uVar4 = (ulonglong)uVar3;
          uVar5 = *(ushort *)(param_2[2] + lVar2);
          if (uVar3 != uVar5) break;
          if (uVar3 == 0) goto LAB_1403f0182;
LAB_1403f01cc:
          lVar2 = lVar2 + 2;
        }
        if ((uVar5 | uVar3) < 0x80) {
          uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          uVar6 = (ulonglong)uVar5;
          uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_1403f01cc;
        }
        if (uVar3 != uVar5) goto LAB_1403f00fa;
      }
    }
    else if ((int)param_2[3] + local_28 != 1) goto LAB_1403f00fa;
LAB_1403f0182:
    SRWLock = (PSRWLOCK)*param_1;
    AcquireSRWLockShared(SRWLock);
    FUN_1403f047c(SRWLock + 1,param_2);
    ReleaseSRWLockShared(SRWLock);
  }
  else {
LAB_1403f00fa:
    *(undefined4 *)param_2 = local_40;
    *(undefined4 *)((longlong)param_2 + 4) = uStack_3c;
    *(undefined4 *)(param_2 + 1) = uStack_38;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_34;
    if ((longlong *)&local_40 != param_2) {
      *(int *)(param_2 + 3) = local_28;
      if (local_28 == 0 && *(int *)((longlong)param_2 + 0x1c) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
      }
      else {
        FUN_1446dd670(param_2 + 2,local_28);
        if (local_28 != 0) {
          memcpy((void *)param_2[2],_Src,(longlong)local_28 * 2);
        }
      }
    }
  }
  if (local_30 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1403f00b4:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403f020e FUN_1403f020e body=69 status=ok
// SIG undefined FUN_1403f020e(void)

ulonglong FUN_1403f020e(PSRWLOCK param_1)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined7 uVar2;
  
  AcquireSRWLockShared(param_1);
  uVar2 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar1 = CONCAT71(uVar2,1);
  if ((*(char *)&param_1[0x12].Ptr == '\0') && (param_1[0x14].Ptr == (PVOID)0x0)) {
    uVar1 = CONCAT71(uVar2,*(int *)((longlong)&param_1[0x22].Ptr + 4) < *(int *)&param_1[0x1d].Ptr);
  }
  ReleaseSRWLockShared(param_1);
  return uVar1 & 0xffffffff;
}



// FUNCTION 1403f0254 FUN_1403f0254 body=551 status=ok
// SIG undefined FUN_1403f0254(void)

undefined4 * FUN_1403f0254(PSRWLOCK param_1,undefined4 *param_2,longlong *param_3)

{
  longlong *plVar1;
  void *pvVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  PSRWLOCK pRVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockShared(param_1);
  if (*(int *)&param_1[0x1d].Ptr != *(int *)((longlong)&param_1[0x22].Ptr + 4)) {
    lVar11 = *param_3;
    lVar3 = param_3[1];
    uVar12 = (uint)((ulonglong)lVar11 >> 0x10);
    uVar10 = (uint)lVar11 & 0xffff;
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    uVar12 = (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar10) +
             (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar10 >> 4);
    pRVar9 = param_1 + 0x23;
    if (param_1[0x24].Ptr != (PSRWLOCK)0x0) {
      pRVar9 = param_1[0x24].Ptr;
    }
    iVar8 = *(int *)((longlong)&pRVar9->Ptr +
                    (ulonglong)
                    (*(int *)&param_1[0x25].Ptr - 1U &
                    ((uVar12 >> 2) +
                     ((uint)lVar3 << 0x10 | uVar7) + (int)((ulonglong)lVar3 >> 0x20) +
                     (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4) + uVar12 * 0x40 + 0x9e3779b9 ^
                    uVar12)) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)((longlong)param_1[0x1c].Ptr + (longlong)iVar8 * 0x28);
        if ((*plVar1 == lVar11) &&
           (*(longlong *)((longlong)param_1[0x1c].Ptr + (longlong)iVar8 * 0x28 + 8) == lVar3)) {
          if (plVar1 + 2 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            local_50 = (void *)0x0;
            local_48 = (int)param_3[3];
            lVar11 = (longlong)local_48;
            pvVar2 = (void *)param_3[2];
            if (lVar11 == 0) {
              local_44 = 0;
            }
            else {
              FUN_1446dd670(&local_50,local_48,0);
              memcpy(local_50,pvVar2,lVar11 * 2);
            }
            local_68 = (undefined4)plVar1[2];
            uStack_64 = *(undefined4 *)((longlong)plVar1 + 0x14);
            uStack_60 = (undefined4)plVar1[3];
            uStack_5c = *(undefined4 *)((longlong)plVar1 + 0x1c);
            FUN_14587a656(param_2,&local_68,&local_50);
            goto LAB_1403f02b8;
          }
          break;
        }
        iVar8 = (int)plVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar5 = *(undefined4 *)((longlong)param_3 + 4);
  lVar11 = param_3[1];
  uVar6 = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = (int)*param_3;
  param_2[1] = uVar5;
  param_2[2] = (int)lVar11;
  param_2[3] = uVar6;
  *(undefined8 *)(param_2 + 4) = 0;
  iVar8 = (int)param_3[3];
  pvVar2 = (void *)param_3[2];
  param_2[6] = iVar8;
  if ((longlong)iVar8 == 0) {
    param_2[7] = 0;
  }
  else {
    FUN_1446dd670(param_2 + 4,iVar8,0);
    memcpy(*(void **)(param_2 + 4),pvVar2,(longlong)iVar8 * 2);
  }
LAB_1403f02b8:
  ReleaseSRWLockShared(param_1);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403f047c FUN_1403f047c body=1608 status=ok
// SIG undefined FUN_1403f047c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_1403f047c(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  undefined1 auStack_1158 [40];
  undefined1 *local_1130;
  undefined1 *local_1128;
  longlong local_1120;
  void *local_1118;
  int local_1110;
  undefined4 local_110c;
  undefined8 local_1108;
  undefined8 uStack_1100;
  longlong local_10f8;
  undefined4 local_10f0;
  undefined4 local_10ec;
  void *local_10e0;
  int local_10d8;
  undefined4 local_10d4;
  longlong local_10d0;
  longlong local_10c8;
  longlong local_10c0;
  undefined2 *local_10b8;
  undefined2 *local_10b0;
  undefined1 *local_10a8;
  char local_10a0;
  undefined2 local_1098 [1035];
  undefined1 local_882 [2];
  undefined8 local_880;
  undefined8 uStack_878;
  undefined1 *local_870;
  uint local_868;
  undefined4 local_864;
  undefined1 local_860 [2070];
  undefined1 local_4a [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1158;
  if (*(char *)(param_1 + 0x88) == '\x01') {
    lVar14 = *param_2;
    local_10c8 = lVar14;
    FUN_1403f0ac6(param_1,&local_10d0);
    if (local_10d0 != lVar14) {
      local_10e0 = (void *)0x0;
      local_10d8 = (int)param_2[3];
      lVar14 = (longlong)local_10d8;
      pvVar3 = (void *)param_2[2];
      if (lVar14 == 0) {
        local_10d4 = 0;
      }
      else {
        FUN_1446dd670(&local_10e0,local_10d8,0);
        memcpy(local_10e0,pvVar3,lVar14 * 2);
      }
      FUN_1403f0b60(&local_880,local_10d0,param_2[1],&local_10e0);
      *(undefined4 *)param_2 = (undefined4)local_880;
      *(undefined4 *)((longlong)param_2 + 4) = local_880._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_878;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_878._4_4_;
      if (&local_880 == param_2) {
        puVar10 = local_870;
        if (local_870 != (undefined1 *)0x0) {
LAB_1403f0a84:
          FUN_1400020a8(puVar10);
        }
      }
      else {
        if (param_2[2] != 0) {
          FUN_1400020a8();
        }
        param_2[2] = (longlong)local_870;
        *(uint *)(param_2 + 3) = local_868;
        *(undefined4 *)((longlong)param_2 + 0x1c) = local_864;
      }
LAB_1403f06da:
      uVar9 = 1;
      goto LAB_1403f060f;
    }
    if (*(int *)(param_1 + 0x60) < 2) goto LAB_1403f060d;
    local_880 = local_860;
    local_868 = local_868 & 0xffffff00;
    local_870 = local_4a;
    uStack_878 = local_880;
    FUN_140007958(param_2,&local_880);
    uVar4 = *(uint *)(param_1 + 0x60);
    iVar7 = uVar4 - 1;
    if (uVar4 == 0) {
      iVar7 = 0;
    }
    iVar5 = (int)((ulonglong)((longlong)uStack_878 - (longlong)local_880) >> 1);
    iVar18 = 0;
    if (0 < iVar5) {
      iVar18 = iVar5;
    }
    puVar10 = local_880 + (longlong)iVar5 * 2;
    puVar8 = (undefined2 *)(puVar10 + -(ulonglong)(uint)(iVar18 * 2));
    if (iVar7 == 1) {
      local_10b0 = (undefined2 *)CONCAT44(local_10b0._4_4_,iVar18);
      local_10b8 = puVar8;
      uVar4 = FUN_144aff2e5(&local_10b8,**(undefined2 **)(param_1 + 0x58),1);
LAB_1403f05f6:
      if (uVar4 != 0xffffffff) {
        iVar18 = *(int *)(param_1 + 0x70) + -1;
        if (*(int *)(param_1 + 0x70) == 0) {
          iVar18 = 0;
        }
        local_10b8 = &DAT_149e065c6;
        local_10b0 = (undefined2 *)CONCAT44(local_10b0._4_4_,1);
        iVar15 = iVar5 - (iVar18 + iVar7);
        if (iVar5 <= iVar15) {
          iVar15 = iVar5;
        }
        if (iVar15 < 1) {
          iVar15 = 0;
        }
        local_1108 = puVar10 + -(ulonglong)(uint)(iVar15 * 2);
        uStack_1100 = CONCAT44(uStack_1100._4_4_,iVar15);
        iVar5 = FUN_144a08910(&local_1108,&local_10b8,1);
        if ((iVar5 == -1) || (iVar5 + iVar18 + iVar7 == -1)) {
          local_10b8 = local_1098;
          local_10a0 = '\0';
          local_10a8 = local_882;
          local_10b0 = local_10b8;
          if (*(char *)(param_1 + 0x50) == '\0') {
            iVar7 = *(int *)(param_1 + 0x70) + -1;
            if (*(int *)(param_1 + 0x70) == 0) {
              iVar7 = 0;
            }
            FUN_1449668a2(&local_10b8,*(undefined8 *)(param_1 + 0x68),iVar7);
          }
          local_10c0 = *param_2;
          if (local_10c0 == 0) {
            local_1108 = (undefined1 *)0x0;
            uStack_1100 = 0;
            uStack_1100._0_4_ = 0;
          }
          else {
            FUN_1400021e4(&local_10c0,&local_1108);
          }
          uVar13 = (int)uStack_1100 - 1;
          if ((int)uStack_1100 == 0) {
            uVar13 = 0;
          }
          if ((int)uVar13 <= (int)uVar4) {
            uVar4 = uVar13;
          }
          if ((0 < (int)uVar4) && ((int)uStack_1100 - uVar4 != 0)) {
            memmove(local_1108,local_1108 + (ulonglong)uVar4 * 2,
                    (longlong)(int)((int)uStack_1100 - uVar4) * 2);
          }
          puVar10 = local_1108;
          local_1108 = (undefined1 *)0x0;
          uStack_1100 = 0;
          FUN_1449668a2(&local_10b8,puVar10);
          if (puVar10 != (undefined1 *)0x0) {
            FUN_1400020a8(puVar10);
          }
          if (local_1108 != (undefined1 *)0x0) {
            FUN_1400020a8();
          }
          puVar8 = local_10b0;
          puVar12 = local_10b8;
          uVar4 = *(uint *)(param_1 + 0x80);
          uVar13 = uVar4 - 1;
          if (uVar4 == 0) {
            uVar13 = 0;
          }
          uVar6 = (uint)((ulonglong)((longlong)local_10b0 - (longlong)local_10b8) >> 1);
          uVar11 = uVar6;
          if ((int)uVar13 < (int)uVar6) {
            uVar11 = uVar13;
          }
          uVar16 = 0;
          if (0 < (int)uVar11) {
            uVar16 = uVar11;
          }
          uVar9 = *(undefined8 *)(param_1 + 0x78);
          if (*(char *)(param_1 + 0x50) == '\0') {
            if ((uVar13 != uVar16) ||
               (((1 < uVar4 && (0 < (int)uVar11)) &&
                (iVar7 = FUN_144a54874(uVar9,local_10b8 + ((longlong)(int)uVar6 - (ulonglong)uVar13)
                                      ), iVar7 != 0)))) {
              FUN_1449668a2(&local_10b8,uVar9,uVar13);
              puVar12 = local_10b8;
              puVar8 = local_10b0;
            }
          }
          else if ((uVar13 == uVar16) &&
                  (((uVar4 < 2 || ((int)uVar11 < 1)) ||
                   (iVar7 = FUN_144a54874(uVar9,local_10b8 +
                                                ((longlong)(int)uVar6 - (ulonglong)uVar13),
                                          (ulonglong)uVar13), iVar7 == 0)))) {
            puVar8 = puVar8 + -(ulonglong)uVar13;
            local_10b0 = puVar8;
          }
          lVar14 = param_2[1];
          FUN_1446f82e2(&local_1108,
                        (ulonglong)((longlong)puVar8 - (longlong)puVar12) >> 1 & 0xffffffff,puVar12,
                        1);
          local_1128 = local_1108;
          local_1118 = (void *)0x0;
          local_1110 = (int)param_2[3];
          lVar17 = (longlong)local_1110;
          pvVar3 = (void *)param_2[2];
          if (lVar17 == 0) {
            local_110c = 0;
          }
          else {
            FUN_1446dd670(&local_1118,local_1110,0);
            memcpy(local_1118,pvVar3,lVar17 * 2);
          }
          local_1120 = lVar14;
          FUN_14587a656(&local_1108,&local_1128,&local_1118);
          *(undefined4 *)param_2 = (undefined4)local_1108;
          *(undefined4 *)((longlong)param_2 + 4) = local_1108._4_4_;
          *(int *)(param_2 + 1) = (int)uStack_1100;
          *(undefined4 *)((longlong)param_2 + 0xc) = uStack_1100._4_4_;
          if (&local_1108 == param_2) {
            if (local_10f8 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (param_2[2] != 0) {
              FUN_1400020a8();
            }
            param_2[2] = local_10f8;
            local_10f8 = 0;
            *(undefined4 *)(param_2 + 3) = local_10f0;
            *(undefined4 *)((longlong)param_2 + 0x1c) = local_10ec;
          }
          if (local_10a0 == '\x01') {
            FUN_1400020a8(local_10b8);
          }
          puVar10 = local_880;
          if ((char)local_868 == '\x01') goto LAB_1403f0a84;
          goto LAB_1403f06da;
        }
      }
    }
    else if (iVar7 <= iVar18) {
      puVar12 = puVar8;
      if (1 < uVar4) {
LAB_1403f0589:
        lVar17 = 0;
        lVar14 = (longlong)iVar7;
        do {
          uVar1 = *(ushort *)((longlong)puVar12 + lVar17);
          uVar2 = *(ushort *)((longlong)*(undefined2 **)(param_1 + 0x58) + lVar17);
          if (uVar1 == uVar2) {
            if (uVar1 == 0) break;
          }
          else {
            local_1130 = puVar10;
            if (0x7f < (uVar2 | uVar1)) {
              iVar18 = (uint)uVar1 - (uint)uVar2;
              goto LAB_1403f06e4;
            }
            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto LAB_1403f06e1;
          }
          if (lVar14 == 1) break;
          lVar14 = lVar14 + -1;
          lVar17 = lVar17 + 2;
        } while( true );
      }
LAB_1403f05f0:
      uVar4 = (uint)((ulonglong)((longlong)puVar12 - (longlong)puVar8) >> 1);
      goto LAB_1403f05f6;
    }
LAB_1403f05ff:
    if ((char)local_868 == '\x01') {
      FUN_1400020a8(local_880);
    }
  }
LAB_1403f060d:
  uVar9 = 0;
LAB_1403f060f:
  if ((local_48 ^ (ulonglong)auStack_1158) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1403f06e1:
  iVar18 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1403f06e4:
  if (iVar18 == 0) goto LAB_1403f05f0;
  puVar12 = puVar12 + 1;
  if (puVar10 + (longlong)iVar7 * -2 < puVar12) goto LAB_1403f05ff;
  goto LAB_1403f0589;
}



// FUNCTION 1403f0ac6 FUN_1403f0ac6 body=154 status=ok
// SIG undefined FUN_1403f0ac6(void)

void FUN_1403f0ac6(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar5 * 0x18);
        if (*plVar3 == lVar1) {
          if ((plVar3 != (longlong *)0x0) && (plVar3 = plVar3 + 1, plVar3 != (longlong *)0x0))
          goto LAB_1403f0b4b;
          break;
        }
        iVar5 = (int)plVar3[2];
      } while (iVar5 != -1);
    }
  }
  plVar3 = param_3;
LAB_1403f0b4b:
  *param_2 = *plVar3;
  return;
}



// FUNCTION 1403f0b60 FUN_1403f0b60 body=146 status=ok
// SIG undefined FUN_1403f0b60(void)

undefined8 *
FUN_1403f0b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_28 = *param_4;
  *param_4 = 0;
  local_20 = (undefined4)param_4[1];
  local_1c = *(undefined4 *)((longlong)param_4 + 0xc);
  param_4[1] = 0;
  local_38 = param_2;
  local_30 = param_3;
  FUN_1400b3bc2(param_1,&local_38,&local_28);
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f0bf4 FUN_1403f0bf4 body=242 status=ok
// SIG undefined FUN_1403f0bf4(void)

undefined8 *
FUN_1403f0bf4(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_1403f0ce6();
  puVar6[3] = uVar3;
  lVar4 = DAT_14ca69a70;
  puVar6[4] = DAT_14ca69a70;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14ca69a28;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a333418;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 1403f0ce6 FUN_1403f0ce6 body=434 status=ok
// SIG undefined FUN_1403f0ce6(void)

undefined * FUN_1403f0ce6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca69aa8) {
    FUN_144b3d300(&DAT_14ca69aa8);
    if (DAT_14ca69aa8 == -1) {
      FUN_1403f0e9a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"RenderVolumetricCloudParameters";
      local_78 = L"FRenderVolumetricCloudGlobalParameters";
      local_38 = 0;
      local_50 = 0xc00;
      local_58 = 0x277;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca69a28,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430f735e);
      _Init_thread_footer(&DAT_14ca69aa8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca69a28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f0e9a FUN_1403f0e9a body=226 status=ok
// SIG undefined FUN_1403f0e9a(void)

longlong * FUN_1403f0e9a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14631401a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f0f7e FUN_1403f0f7e body=484 status=ok
// SIG undefined FUN_1403f0f7e(void)

void FUN_1403f0f7e(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((int)param_1[9] != 0x80) {
    FUN_1403f117c(param_1,0x80);
    *(undefined4 *)(param_1 + 9) = 0x80;
    if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1403f11ea(param_1);
    return;
  }
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < 0x20) {
    puVar1 = (uint *)(param_1 + 2);
    iVar2 = (int)param_1[5];
    local_4c = 1;
    if (iVar2 == 0) {
      local_38 = 0;
      local_50 = 0;
      local_3c = 0;
    }
    else {
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = puVar1;
      }
      uVar6 = *puVar4;
      if (uVar6 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        uVar9 = 0;
        uVar8 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar8 = uVar9;
        }
        local_50 = (int)uVar8 + 1;
        local_38 = (int)uVar8 * 0x20 + 0x20;
        iVar7 = 0;
        do {
          local_3c = iVar2;
          if (uVar8 == uVar9) goto LAB_1403f1064;
          iVar7 = iVar7 + 0x20;
          uVar6 = puVar4[uVar9 + 1];
          uVar9 = uVar9 + 1;
        } while (uVar6 == 0);
        local_50 = (int)uVar9;
        local_38 = iVar7;
      }
      else {
        local_38 = 0;
        local_50 = 0;
      }
      local_4c = -uVar6 & uVar6;
      uVar8 = (ulonglong)local_4c * 2 + 1;
      lVar3 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_3c = (local_38 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
      if (iVar2 <= local_3c) {
        local_3c = iVar2;
      }
    }
LAB_1403f1064:
    local_40 = 0xffffffff;
    local_58 = param_1;
    local_48 = puVar1;
    if (local_3c != iVar2) {
      do {
        do {
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_58 + 0x14 + (longlong)local_3c * 0x18) * 4)
               = 0xffffffff;
          local_40 = local_40 & ~local_4c;
          FUN_1449c0562(&local_50);
        } while (local_3c != iVar2);
      } while ((local_48 != puVar1) || (local_58 != param_1));
    }
  }
  else {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
}



// FUNCTION 1403f117c FUN_1403f117c body=110 status=ok
// SIG undefined FUN_1403f117c(void)

void FUN_1403f117c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403f11ea FUN_1403f11ea body=649 status=ok
// SIG undefined FUN_1403f11ea(void)

void FUN_1403f11ea(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar8 = *(uint *)(param_1 + 9);
  if (uVar8 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar8 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar8,4);
    if ((int)uVar8 < 1) goto LAB_1403f125d;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar8 != uVar3);
LAB_1403f125d:
  iVar15 = (int)param_1[5];
  if (iVar15 == 0) {
    uVar4 = 0;
    uVar12 = 1;
    iVar14 = 0;
    iVar5 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = (uint *)(param_1 + 2);
    }
    uVar8 = *puVar11;
    if (uVar8 == 0) {
      iVar14 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar14 = iVar15 + -1;
      }
      uVar4 = 0;
      uVar12 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar12 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar12 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar8 = puVar11[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar12 = (ulonglong)(-uVar8 & uVar8);
    uVar16 = uVar12 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar14) {
      iVar14 = iVar15;
    }
  }
  if (iVar14 < iVar15) {
    uVar8 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar13 = (longlong)iVar14;
      uVar2 = *(undefined8 *)(lVar7 + lVar13 * 0x18);
      uVar16 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x14 + lVar13 * 0x18) = iVar15;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar13 * 0x18) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar16) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar15 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar8 = ~(uint)uVar12 & uVar8;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 2);
      }
      iVar15 = (int)param_1[5];
      iVar14 = (int)uVar4;
      lVar7 = (longlong)iVar14;
      uVar3 = puVar11[lVar7] & uVar8;
      if (uVar3 == 0) {
        iVar9 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar9 = iVar15 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar9 <= iVar14) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar11[lVar7 + lVar13 + 1];
          if (uVar3 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar10 - lVar7 == lVar13) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar14 + (int)lVar13 + 1);
        uVar8 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar3 & uVar3);
      uVar16 = uVar12 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar14 = (iVar5 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar15);
  }
  return;
}



// FUNCTION 1403f1474 FUN_1403f1474 body=55 status=ok
// SIG undefined FUN_1403f1474(void)

void FUN_1403f1474(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14498be06(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001403f14a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,param_2);
    return;
  }
  return;
}



// FUNCTION 1403f14ac FUN_1403f14ac body=572 status=ok
// SIG undefined FUN_1403f14ac(void)

ulonglong FUN_1403f14ac(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                       undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined1 param_8)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 auStack_188 [32];
  char *local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined8 local_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong *local_100;
  char local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_f8[0] = '\0';
  local_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  plVar4 = (longlong *)param_4[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  if ((*(int *)(param_1 + 0x3c0) == 0) ||
     (plVar5 = *(longlong **)(param_1 + 0x3b8), plVar5 == (longlong *)0x0)) {
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar4 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    local_168 = local_f8;
    local_110 = uVar2;
    local_108 = uVar3;
    local_100 = plVar4;
    cVar6 = (**(code **)(*plVar5 + 0x60))(plVar5,param_3,&local_110,param_5);
    if (cVar6 != '\0') goto LAB_1403f1598;
  }
  local_128 = *param_4;
  local_120 = param_4[1];
  local_118 = param_4[2];
  if (local_118 != 0) {
    LOCK();
    *(int *)(local_118 + 8) = *(int *)(local_118 + 8) + 1;
    UNLOCK();
  }
  local_168 = local_f8;
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x3b8))
            ((longlong *)(param_1 + -0x28),param_3,&local_128,param_5);
LAB_1403f1598:
  if (local_f8[0] == '\0') {
    local_140 = *param_4;
    local_138 = param_4[1];
    local_130 = param_4[2];
    if (local_130 != 0) {
      LOCK();
      *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
      UNLOCK();
    }
    local_150 = param_8;
    local_158 = param_7;
    local_160 = param_6;
    local_168 = (char *)CONCAT44(local_168._4_4_,param_5);
    uVar7 = FUN_1403f1a64(param_1,param_2,param_3,&local_140);
    uVar8 = (ulonglong)uVar7;
  }
  else {
    uVar8 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  }
  FUN_14493db24(local_f8);
  plVar4 = (longlong *)param_4[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1403f16ea FUN_1403f16ea body=477 status=ok
// SIG undefined FUN_1403f16ea(void)

void FUN_1403f16ea(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [44];
  int local_ec;
  undefined1 local_e8 [8];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_c8;
  undefined1 local_c0 [136];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_14593912e(plVar5,1,1);
    DAT_14c9670a0 = plVar5;
  }
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_ec);
  lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x80) + 0x38) + lVar7);
      if ((lVar6 != 0) && (*(int *)(lVar6 + 0x100) == local_ec)) goto LAB_1403f1776;
      lVar7 = lVar7 + 8;
    } while (lVar4 * 8 != lVar7);
  }
  lVar6 = 0;
LAB_1403f1776:
  local_e8[0] = 0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  memset(local_c0,0,0x88);
  local_38 = 0x20702;
  FUN_1403d4924(param_5);
  FUN_14493db24(local_e8);
  if (lVar6 != 0) {
    lVar4 = FUN_1403f18c8(lVar6);
    if (lVar4 != 0) {
      cVar3 = FUN_148229960(lVar4);
      if (cVar3 == '\0') {
        local_e8[0] = 1;
        local_c8 = 0;
        local_e0 = 0;
        uStack_d8 = 0;
        memset(local_c0,0,0x88);
        local_38 = 0x20702;
        FUN_1403d4924(param_5,local_e8);
        FUN_14493db24(local_e8);
      }
    }
  }
  plVar5 = *(longlong **)(param_3 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f18c8 FUN_1403f18c8 body=105 status=ok
// SIG undefined FUN_1403f18c8(void)

void FUN_1403f18c8(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1403f197e();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1403f1932(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f1932 FUN_1403f1932 body=76 status=ok
// SIG undefined FUN_1403f1932(void)

void FUN_1403f1932(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1403f197e();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1403f196f;
    }
  }
  lVar2 = 0;
LAB_1403f196f:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1403f197e FUN_1403f197e body=228 status=ok
// SIG undefined FUN_1403f197e(void)

longlong FUN_1403f197e(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb46150 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_14115fc28;
    local_38 = &LAB_14823f9b9;
    local_40 = &LAB_145cc3c82;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x178;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonUIActionRouterBase",&DAT_14cb46150,&DAT_14823f9b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46150;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f1a64 FUN_1403f1a64 body=1937 status=ok
// SIG undefined FUN_1403f1a64(void)

ulonglong FUN_1403f1a64(longlong *param_1,longlong param_2,undefined4 param_3,undefined8 *param_4,
                       float param_5,undefined4 param_6,undefined4 param_7)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined1 auStack_178 [32];
  undefined4 *local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined1 local_135;
  uint local_134;
  longlong *local_130;
  undefined8 *local_128;
  ulonglong local_120;
  undefined4 local_114;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar9 = (**(code **)(*param_1 + 0x180))();
  if (cVar9 != '\0') {
    plVar20 = (longlong *)0x0;
    goto LAB_1403f1e6b;
  }
  local_98 = *param_4;
  uStack_90 = param_4[1];
  plVar20 = (longlong *)param_4[2];
  if (plVar20 == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
    UNLOCK();
    local_88 = plVar20;
  }
  local_80 = 0x3f80000000000004;
  local_78 = 0;
  local_a8 = param_2;
  local_9c = param_3;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar14 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_14593912e(plVar14,1,1);
    DAT_14c9670a0 = plVar14;
  }
  plVar14 = param_1 + -5;
  local_110 = param_2;
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_108,param_3);
  local_a0 = (undefined4)local_108;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar20 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  (**(code **)(param_1[-5] + 0x2d0))(plVar14,&local_a8);
  local_128 = &local_98;
  uVar10 = FUN_140230656(&local_98);
  plVar20 = local_88;
  uVar8 = uStack_90;
  uVar7 = local_98;
  uVar6 = local_a0;
  uVar5 = param_6;
  fVar4 = param_5;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_88 + 1) = (int)local_88[1] + 1;
    UNLOCK();
  }
  iVar12 = *(int *)((longlong)param_1 + 0x38c);
  *(int *)((longlong)param_1 + 0x38c) = iVar12 + 1;
  uVar17 = (ulonglong)(int)param_1[0x70];
  if ((longlong)uVar17 < 1) {
    *(int *)((longlong)param_1 + 0x38c) = iVar12;
  }
  else {
    local_114 = param_7;
    local_130 = param_1 + 0x6f;
    local_134 = 0;
    local_135 = uVar10;
    do {
      lVar19 = uVar17 * 0x10 + -8;
      local_120 = uVar17;
      while ((lVar13 = *local_130, *(int *)(lVar13 + lVar19) != 0 &&
             (plVar15 = *(longlong **)(lVar13 + -8 + lVar19), plVar15 != (longlong *)0x0))) {
        local_108 = uVar7;
        local_100 = uVar8;
        local_f8 = plVar20;
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
        }
        local_140 = local_135;
        local_148 = local_114;
        local_150 = uVar5;
        local_158 = (undefined4 *)CONCAT44(local_158._4_4_,fVar4);
        lVar13 = (**(code **)(*plVar15 + 0x60))(plVar15,local_110,uVar6,&local_108);
        if ((char)lVar13 == '\0') break;
        uVar17 = local_120 - 1;
        lVar19 = lVar19 + -0x10;
        bVar3 = local_120 < 2;
        local_120 = uVar17;
        if (bVar3) {
          iVar12 = *(int *)((longlong)param_1 + 0x38c) + -1;
          *(int *)((longlong)param_1 + 0x38c) = iVar12;
          if ((local_134 & 1) != 0) goto LAB_1403f20c0;
          goto LAB_1403f1c2c;
        }
      }
      uVar17 = local_120 - 1;
      local_134 = (uint)CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
    } while (1 < local_120);
    iVar12 = *(int *)((longlong)param_1 + 0x38c) + -1;
    *(int *)((longlong)param_1 + 0x38c) = iVar12;
LAB_1403f20c0:
    plVar15 = local_130;
    if (iVar12 < 1) {
      iVar12 = (int)param_1[0x70];
      iVar16 = iVar12;
      if (0 < iVar12) {
        iVar18 = 0;
        do {
          if (((*(int *)(*local_130 + 8 + (longlong)iVar18 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*local_130 + (longlong)iVar18 * 0x10),
              plVar2 == (longlong *)0x0)) ||
             (cVar9 = (**(code **)(*plVar2 + 0x28))(), cVar9 != '\0')) {
            FUN_14005b288(plVar15,iVar18);
            FUN_14005b248(plVar15);
          }
          else {
            iVar18 = iVar18 + 1;
          }
          iVar16 = (int)param_1[0x70];
        } while (iVar18 < iVar16);
      }
      iVar18 = 2;
      if (2 < iVar16 * 2) {
        iVar18 = iVar16 * 2;
      }
      *(int *)(param_1 + 0x71) = iVar18;
      if ((iVar18 < iVar12) && (*(int *)((longlong)param_1 + 900) != iVar16)) {
        FUN_14045812c(local_130);
      }
    }
  }
LAB_1403f1c2c:
  lVar19 = local_110;
  if (plVar20 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar20 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
    LOCK();
    plVar15 = plVar20 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar20)(plVar20);
      LOCK();
      piVar1 = (int *)((longlong)plVar20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  if ((lVar19 == 0) ||
     ((((~*(uint *)(lVar19 + 0xb0) & 0x18) == 0 && ((longlong *)param_1[3] != (longlong *)0x0)) &&
      (cVar9 = (**(code **)(*(longlong *)param_1[3] + 0x3c8))(), cVar9 != '\0')))) {
    plVar20 = (longlong *)0x0;
  }
  else {
    plVar15 = (longlong *)param_1[3];
    plVar20 = plVar14;
    if (plVar15 == (longlong *)0x0) {
LAB_1403f1d0f:
      if ((((int)param_1[0x69] != 0) && ((longlong *)param_1[0x68] != (longlong *)0x0)) &&
         (cVar9 = (**(code **)(*(longlong *)param_1[0x68] + 0x30))(), cVar9 != '\0')) {
        if ((int)param_1[0x69] == 0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          plVar15 = (longlong *)param_1[0x68];
        }
        local_158 = &param_7;
        cVar9 = (**(code **)(*plVar15 + 0x58))(plVar15,&local_a8,&param_5,&param_6);
        plVar20 = (longlong *)CONCAT71((int7)((ulonglong)plVar20 >> 8),1);
        if (cVar9 != '\0') goto LAB_1403f1e2d;
      }
      lVar13 = FUN_140248ea4(DAT_14cb0d2b0,plVar14,local_9c);
      if (lVar13 == 0) {
        if (((DAT_14cadb908 != 0) && (cVar9 = FUN_140230656(local_128), cVar9 != '\0')) &&
           (lVar13 = FUN_147d80932(DAT_14cb0d2b0,plVar14), lVar13 != 0)) {
          plVar20 = *(longlong **)(lVar13 + 0x30);
          goto LAB_1403f1da3;
        }
      }
      else {
        plVar20 = *(longlong **)(lVar13 + 0x30);
        if (plVar20 != (longlong *)0x0) {
LAB_1403f1da3:
          uVar5 = local_9c;
          local_c8 = FUN_140230656(local_128);
          plVar14 = local_88;
          local_e0 = (double)param_5;
          if (local_88 == (longlong *)0x0) {
            local_f8 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(local_88 + 1) = (int)local_88[1] + 1;
            UNLOCK();
            local_f8 = local_88;
            LOCK();
            *(int *)(local_88 + 1) = (int)local_88[1] + 1;
            UNLOCK();
          }
          local_100 = uStack_90;
          local_108 = local_98;
          local_f0 = uVar5;
          local_ec = 0;
          local_e8 = param_7;
          local_e4 = param_6;
          local_d8 = 0;
          uStack_d0 = 0;
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_88 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
          uVar11 = (**(code **)(*plVar20 + 0xd08))(plVar20,&local_108);
          plVar14 = local_f8;
          plVar20 = (longlong *)(ulonglong)uVar11;
          if (local_f8 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_f8 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*local_f8)(local_f8);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
          goto LAB_1403f1e2d;
        }
      }
      plVar20 = (longlong *)0x0;
    }
    else {
      uVar10 = FUN_140230656(local_128);
      local_c0 = (undefined4)local_98;
      uStack_bc = local_98._4_4_;
      uStack_b8 = (undefined4)uStack_90;
      uStack_b4 = uStack_90._4_4_;
      local_b0 = local_88;
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      local_148 = CONCAT31(local_148._1_3_,uVar10);
      local_150 = param_7;
      local_158 = (undefined4 *)CONCAT44(local_158._4_4_,param_6);
      cVar9 = (**(code **)(*plVar15 + 0x388))(plVar15,local_9c,&local_c0,param_5);
      plVar20 = (longlong *)CONCAT71((int7)((ulonglong)plVar14 >> 8),1);
      if (cVar9 == '\0') goto LAB_1403f1d0f;
    }
LAB_1403f1e2d:
    if ((*(uint *)(lVar19 + 0xb0) & 0x10) != 0) {
      plVar20 = (longlong *)
                CONCAT71((int7)((ulonglong)plVar20 >> 8),
                         (byte)plVar20 | (byte)((*(uint *)(lVar19 + 0xb0) & 8) >> 3));
    }
  }
  plVar14 = local_88;
  if (local_88 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_88 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_88)(local_88);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
LAB_1403f1e6b:
  plVar14 = (longlong *)param_4[2];
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar14 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar14)(plVar14);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar20 & 0xffffffff;
}



// FUNCTION 1403f21f6 FUN_1403f21f6 body=1719 status=ok
// SIG undefined FUN_1403f21f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403f21f6(longlong param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  undefined8 *puVar12;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar9 = puVar12 + 0x4c;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x270);
    puVar12 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar9 = puVar12 + 0x4c;
  }
  *puVar1 = (ulonglong)puVar9;
  *puVar12 = &PTR_FUN_14a240928;
  lVar8 = 0x1ec;
  do {
    puVar9 = (undefined8 *)((longlong)puVar12 + lVar8 + -0xc);
    *puVar9 = 0;
    puVar9[1] = 0x3f80000000000000;
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x24c);
  puVar12[0x4a] = 0;
  puVar12[0x4b] = 0;
  puVar12[0x48] = 0;
  puVar12[0x49] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar12;
  uVar4 = _DAT_14c846288;
  puVar12[8] = _DAT_14c846280;
  puVar12[9] = uVar4;
  uVar4 = CONCAT44(DAT_14c84627c,DAT_14c846278);
  puVar12[6] = CONCAT44(DAT_14c846274,DAT_14c846270);
  puVar12[7] = uVar4;
  uVar4 = _DAT_14c846268;
  puVar12[4] = _DAT_14c846260;
  puVar12[5] = uVar4;
  uVar4 = DAT_14c846258;
  puVar12[2] = _DAT_14c846250;
  puVar12[3] = uVar4;
  uVar4 = _DAT_14c846288;
  puVar12[0x10] = _DAT_14c846280;
  puVar12[0x11] = uVar4;
  uVar4 = CONCAT44(DAT_14c84627c,DAT_14c846278);
  puVar12[0xe] = CONCAT44(DAT_14c846274,DAT_14c846270);
  puVar12[0xf] = uVar4;
  uVar4 = _DAT_14c846268;
  puVar12[0xc] = _DAT_14c846260;
  puVar12[0xd] = uVar4;
  uVar4 = DAT_14c846258;
  puVar12[10] = _DAT_14c846250;
  puVar12[0xb] = uVar4;
  uVar4 = DAT_14c846258;
  puVar12[0x12] = _DAT_14c846250;
  puVar12[0x13] = uVar4;
  uVar4 = _DAT_14c846268;
  puVar12[0x14] = _DAT_14c846260;
  puVar12[0x15] = uVar4;
  uVar4 = CONCAT44(DAT_14c84627c,DAT_14c846278);
  puVar12[0x16] = CONCAT44(DAT_14c846274,DAT_14c846270);
  puVar12[0x17] = uVar4;
  uVar4 = _DAT_14c846288;
  puVar12[0x18] = _DAT_14c846280;
  puVar12[0x19] = uVar4;
  uVar4 = DAT_14c846258;
  puVar12[0x1a] = _DAT_14c846250;
  puVar12[0x1b] = uVar4;
  uVar4 = _DAT_14c846268;
  puVar12[0x1c] = _DAT_14c846260;
  puVar12[0x1d] = uVar4;
  uVar4 = CONCAT44(DAT_14c84627c,DAT_14c846278);
  puVar12[0x1e] = CONCAT44(DAT_14c846274,DAT_14c846270);
  puVar12[0x1f] = uVar4;
  uVar4 = _DAT_14c846288;
  puVar12[0x20] = _DAT_14c846280;
  puVar12[0x21] = uVar4;
  uVar4 = DAT_14c846258;
  puVar12[0x22] = _DAT_14c846250;
  puVar12[0x23] = uVar4;
  uVar4 = _DAT_14c846268;
  puVar12[0x24] = _DAT_14c846260;
  puVar12[0x25] = uVar4;
  uVar4 = CONCAT44(DAT_14c84627c,DAT_14c846278);
  puVar12[0x26] = CONCAT44(DAT_14c846274,DAT_14c846270);
  puVar12[0x27] = uVar4;
  uVar4 = _DAT_14c846288;
  puVar12[0x28] = _DAT_14c846280;
  puVar12[0x29] = uVar4;
  uVar4 = DAT_14c846258;
  puVar12[0x2a] = _DAT_14c846250;
  puVar12[0x2b] = uVar4;
  uVar4 = _DAT_14c846268;
  puVar12[0x2c] = _DAT_14c846260;
  puVar12[0x2d] = uVar4;
  uVar4 = _DAT_14c846288;
  puVar12[0x30] = _DAT_14c846280;
  puVar12[0x31] = uVar4;
  uVar7 = DAT_14c84627c;
  uVar6 = DAT_14c846278;
  uVar5 = DAT_14c846274;
  *(undefined4 *)(puVar12 + 0x2e) = DAT_14c846270;
  *(undefined4 *)((longlong)puVar12 + 0x174) = uVar5;
  *(undefined4 *)(puVar12 + 0x2f) = uVar6;
  *(undefined4 *)((longlong)puVar12 + 0x17c) = uVar7;
  lVar8 = FUN_144735828(&DAT_14ca63b10,param_1,4);
  if ((*(byte *)(lVar8 + 0x68) & 0x80) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x1c;
  }
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x50);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar10 + 9;
  }
  lVar2 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  puVar10[1] = *(undefined8 *)(lVar8 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 3;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar10 + 5) = uVar11;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
  puVar10[7] = 0;
  puVar10[8] = lVar8;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12[0x48] = puVar10;
  lVar8 = FUN_144735828(&DAT_14ca63b10,param_1,8);
  if ((*(byte *)(lVar8 + 0x68) & 0x80) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x1c;
  }
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x50);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar10 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  puVar10[1] = *(undefined8 *)(lVar8 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 3;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar10 + 5) = uVar11;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
  puVar10[7] = 0;
  puVar10[8] = lVar8;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12[0x49] = puVar10;
  lVar8 = FUN_144735828(&DAT_14ca63b10,param_1,8);
  if ((*(byte *)(lVar8 + 0x68) & 0x80) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x1c;
  }
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x50);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar10 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  puVar10[1] = *(undefined8 *)(lVar8 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 3;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar10 + 5) = uVar11;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
  puVar10[7] = 0;
  puVar10[8] = lVar8;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(lVar2,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12[0x4a] = puVar10;
  lVar8 = FUN_144735828(&DAT_14ca63b10,param_1,8);
  if ((*(byte *)(lVar8 + 0x68) & 0x80) == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = 0x1c;
  }
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar9 = puVar10 + 9;
  local_60 = lVar2;
  if (*(undefined8 **)(param_1 + 0x78) < puVar9) {
    FUN_140023dd8(puVar1,0x50);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar10 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar9;
  puVar10[1] = *(undefined8 *)(lVar8 + 8);
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 3;
  *(undefined8 *)((longlong)puVar10 + 0x1c) = 0xffffffffffffffff;
  *puVar10 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar10 + 5) = uVar11;
  *(undefined8 *)((longlong)puVar10 + 0x2c) = 0xffffffff00000000;
  puVar10[7] = 0;
  puVar10[8] = lVar8;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(local_60,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar12[0x4b] = puVar10;
  puVar12[0x32] = 0;
  *(undefined4 *)(puVar12 + 0x33) = 0;
  puVar12[0x34] = 0;
  *(undefined4 *)(puVar12 + 0x35) = 0;
  puVar12[0x36] = 0;
  *(undefined4 *)(puVar12 + 0x37) = 0;
  puVar12[0x38] = 0;
  puVar12[0x39] = 0;
  puVar12[0x3a] = 0;
  *(undefined4 *)(puVar12 + 0x3b) = 0x3f800000;
  local_50 = puVar12 + 2;
  FUN_1403f28ae();
  local_58 = DAT_14c9e2938;
  FUN_1403f2a56(param_1 + 0x1a8,puVar1,&local_50);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f28ae FUN_1403f28ae body=423 status=ok
// SIG undefined FUN_1403f28ae(void)

undefined * FUN_1403f28ae(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e29a0) {
    FUN_144b3d300(&DAT_14c9e29a0);
    if (DAT_14c9e29a0 == -1) {
      FUN_1403f2b48(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"FrustumGridUniformBuffer";
      local_78 = L"FFrustumVoxelGridUniformBufferParameters";
      local_50 = 0x250;
      local_58 = 0x106;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e2920,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cad7ef);
      _Init_thread_footer(&DAT_14c9e29a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9e2920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f2a56 FUN_1403f2a56 body=242 status=ok
// SIG undefined FUN_1403f2a56(void)

undefined8 *
FUN_1403f2a56(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar5 = puVar6 + 9;
  if ((undefined8 *)param_2[1] < puVar5) {
    FUN_140023dd8(param_2,0x50);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar6 + 9;
  }
  *param_2 = (ulonglong)puVar5;
  uVar3 = *param_3;
  puVar6[1] = *param_4;
  puVar6[2] = 0;
  *puVar6 = &PTR_FUN_14a1fb9b8;
  FUN_1403f28ae();
  puVar6[3] = uVar3;
  lVar4 = DAT_14c9e2968;
  puVar6[4] = DAT_14c9e2968;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14c9e2920;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a240930;
  puVar6[8] = uVar3;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1402aa76e(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar6;
  *(int *)(puVar6 + 7) = (int)param_1[1] + -1;
  return puVar6;
}



// FUNCTION 1403f2b48 FUN_1403f2b48 body=226 status=ok
// SIG undefined FUN_1403f2b48(void)

longlong * FUN_1403f2b48(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d1a22;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f2c2c FUN_1403f2c2c body=295 status=ok
// SIG undefined FUN_1403f2c2c(void)

void FUN_1403f2c2c(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_2;
  FUN_1400748c2(param_3,param_4);
  plVar1 = *(longlong **)(param_1 + 0x68);
  FUN_1400748c2(param_3,plVar1 == param_2);
  if (plVar1 != param_2) {
    (**(code **)(*param_3 + 0x150))(param_3,&local_30);
    cVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x3c0))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*local_30 + 0x1f8))();
      if (cVar2 == '\0') {
        FUN_1400748c2(param_3,0);
        FUN_1400748c2(param_3,0);
        local_38 = local_30[2];
        (**(code **)(*param_3 + 0x150))(param_3);
        local_40 = (longlong *)local_30[4];
        if (*(longlong **)(param_1 + 0x68) != local_40) {
          uVar3 = (**(code **)(*local_40 + 0x200))();
          FUN_1400748c2(param_3,uVar3 ^ 1);
          if ((char)(uVar3 ^ 1) == '\0') {
            (**(code **)(*param_3 + 0x150))(param_3,&local_40);
          }
          goto LAB_1403f2c74;
        }
      }
      FUN_1400748c2(param_3,1);
    }
  }
LAB_1403f2c74:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f2d54 FUN_1403f2d54 body=264 status=ok
// SIG undefined FUN_1403f2d54(void)

longlong FUN_1403f2d54(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  if (DAT_14c927740 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_146856450;
    local_50 = FUN_1427b121c;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000021;
    local_70 = 8;
    local_78 = CONCAT44(local_78._4_4_,0x28);
    FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
  }
  local_78 = 0;
  (**(code **)(*plVar1 + 0x2a8))(plVar1,param_1,DAT_14c927740,param_2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f2e5e FUN_1403f2e5e body=181 status=ok
// SIG undefined FUN_1403f2e5e(void)

void FUN_1403f2e5e(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar3 = (undefined8 *)FUN_1403f2f14(param_1[0x2e]);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      uVar1 = *(undefined4 *)(puVar3 + 1);
      uVar2 = *puVar3;
      local_30 = puVar3[6];
      local_28 = puVar3[7];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      local_38 = (longlong)puVar3 + 0xc;
      (**(code **)(*param_1 + 0x350))(param_1,&local_30,uVar2,uVar1);
      FUN_1470797e8(puVar3);
      FUN_1400020a8(puVar3);
      puVar3 = (undefined8 *)FUN_1403f2f14(param_1[0x2e]);
    } while (puVar3 != (undefined8 *)0x0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403f2f14 FUN_1403f2f14 body=72 status=ok
// SIG undefined FUN_1403f2f14(void)

undefined8 FUN_1403f2f14(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = **(longlong **)(param_1 + 0x228);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 0x228);
    *(longlong *)(param_1 + 0x228) = lVar1;
    *(undefined8 *)(lVar1 + 8) = 0;
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  return uVar3;
}



// FUNCTION 1403f2f5c FUN_1403f2f5c body=185 status=ok
// SIG undefined FUN_1403f2f5c(void)

void FUN_1403f2f5c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_1403f3016(param_3);
  if (param_1 == 0) {
    local_30 = 0;
  }
  else {
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_1 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar2 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar2);
      DAT_14c947fe0 = lVar2;
    }
    FUN_140045924(DAT_14c947fe0,&local_30,puVar3,1);
  }
  if (*plVar1 != local_30) {
    plVar1[2] = 0;
  }
  *plVar1 = local_30;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f3016 FUN_1403f3016 body=92 status=ok
// SIG undefined FUN_1403f3016(void)

longlong FUN_1403f3016(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0xf88);
  *(uint *)(param_1 + 0xf88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xf8c) < iVar1 + 1U) {
    FUN_14034cf98(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xf80);
  if (*(longlong *)(param_1 + 0xf80) == 0) {
    lVar2 = param_1;
  }
  lVar2 = (longlong)iVar1 * 0xf8 + lVar2;
  FUN_1403f3072(lVar2,1);
  return lVar2;
}



// FUNCTION 1403f3072 FUN_1403f3072 body=192 status=ok
// SIG undefined FUN_1403f3072(void)

void FUN_1403f3072(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0x4000;
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 3) = 0x3f800000;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 10) = 0xf00000d0;
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
    *(undefined4 *)(param_1 + 0xd) = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0xf00000d0;
    param_1[0x15] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
    param_1[0x17] = 0;
    *(undefined2 *)(param_1 + 0x1b) = 4;
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x1c) = 1;
    *(bool *)(param_1 + 0x1d) = (DAT_14c9a8634 & 0x20) == 0;
    *(undefined4 *)(param_1 + 0x1e) = 0x3f800000;
    *(undefined2 *)((longlong)param_1 + 0xf4) = 0;
    param_1 = param_1 + 0x1f;
  }
  return;
}



// FUNCTION 1403f3132 FUN_1403f3132 body=1167 status=ok
// SIG undefined FUN_1403f3132(void)

void FUN_1403f3132(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  size_t sVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  int iVar9;
  char **ppcVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_88 [40];
  char *local_60;
  undefined4 local_58;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (0 < (int)param_2[1]) {
    iVar9 = 0;
    do {
      lVar11 = (longlong)iVar9;
      cVar3 = FUN_1403f35db(*(undefined8 *)(*param_2 + lVar11 * 8),&DAT_14cc074d8);
      if (cVar3 != '\0') {
        FUN_1446f57c6(&DAT_14cc074e8,&local_60);
        cVar3 = (**(code **)(*param_1 + 0x2f8))(param_1,&local_60);
        if (cVar3 != '\0') {
          FUN_1446f57c6(&DAT_14cc074e8,&local_60);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_2,iVar1);
          }
          iVar9 = iVar9 + 1;
          lVar11 = (longlong)iVar9;
          memmove((void *)(*param_2 + lVar11 * 8 + 8),(void *)(*param_2 + lVar11 * 8),
                  (ulonglong)(uint)(iVar1 - iVar9) << 3);
          *(char **)(*param_2 + lVar11 * 8) = local_60;
        }
      }
      cVar3 = FUN_1403f35db(*(undefined8 *)(*param_2 + lVar11 * 8),&DAT_14cc07488);
      if (cVar3 != '\0') {
        if ((longlong)DAT_14cc07498 < 0) {
          pcVar7 = (char *)(DAT_14cc07498 & 0x7fffffffffffffff);
          if (DAT_14cc074a4 == '\x01') {
            ppcVar10 = &local_60;
            FUN_1446f470e(ppcVar10,pcVar7,1);
          }
          else {
            local_60 = pcVar7;
            if (pcVar7 == (char *)0x0) {
              local_58 = 0;
            }
            else {
              sVar5 = strlen(pcVar7);
              local_58 = (undefined4)sVar5;
            }
            ppcVar10 = &local_50;
            FUN_14001c09c(ppcVar10,&local_60,1);
          }
          uVar4 = (ulonglong)*(uint *)ppcVar10;
          uVar6 = (ulonglong)DAT_14cc074a0 << 0x20;
          DAT_14cc07498 = uVar4;
        }
        else {
          uVar4 = (ulonglong)DAT_14cc074a0 << 0x20;
          uVar6 = DAT_14cc07498 & 0xffffffff;
        }
        local_50 = (char *)(uVar6 | uVar4);
        cVar3 = (**(code **)(*param_1 + 0x2f8))(param_1,&local_50);
        if (cVar3 != '\0') {
          FUN_1446f57c6(&DAT_14cc07498,&local_60);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_2,iVar1);
          }
          memmove((void *)(*param_2 + lVar11 * 8 + 8),(void *)(*param_2 + lVar11 * 8),
                  (ulonglong)(uint)(iVar1 - iVar9) << 3);
          *(char **)(*param_2 + lVar11 * 8) = local_60;
          iVar9 = iVar9 + 1;
        }
        if ((longlong)DAT_14cc074a8 < 0) {
          pcVar7 = (char *)(DAT_14cc074a8 & 0x7fffffffffffffff);
          if (DAT_14cc074b4 == '\x01') {
            ppcVar10 = &local_60;
            FUN_1446f470e(ppcVar10,pcVar7,1);
          }
          else {
            local_60 = pcVar7;
            if (pcVar7 == (char *)0x0) {
              local_58 = 0;
            }
            else {
              sVar5 = strlen(pcVar7);
              local_58 = (undefined4)sVar5;
            }
            ppcVar10 = &local_50;
            FUN_14001c09c(ppcVar10,&local_60,1);
          }
          uVar4 = (ulonglong)*(uint *)ppcVar10;
          uVar6 = (ulonglong)DAT_14cc074b0 << 0x20;
          DAT_14cc074a8 = uVar4;
        }
        else {
          uVar4 = (ulonglong)DAT_14cc074b0 << 0x20;
          uVar6 = DAT_14cc074a8 & 0xffffffff;
        }
        local_50 = (char *)(uVar6 | uVar4);
        cVar3 = (**(code **)(*param_1 + 0x2f8))(param_1,&local_50);
        if (cVar3 != '\0') {
          FUN_1446f57c6(&DAT_14cc074a8,&local_60);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_2,iVar1);
          }
          iVar9 = iVar9 + 1;
          lVar11 = (longlong)iVar9;
          memmove((void *)(*param_2 + lVar11 * 8 + 8),(void *)(*param_2 + lVar11 * 8),
                  (ulonglong)(uint)(iVar1 - iVar9) << 3);
          *(char **)(*param_2 + lVar11 * 8) = local_60;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)param_2[1]);
  }
  if (*(char *)((longlong)param_1 + 0x7ec) != '\0') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc06b20) {
      FUN_144b3d300(&DAT_14cc06b20);
      if (DAT_14cc06b20 == -1) {
        FUN_1446f57c6(&DAT_14cc06a40,&DAT_14cc06b24);
        DAT_14cc06b18 = (undefined8 *)&DAT_14cc06b24;
        _Init_thread_footer(&DAT_14cc06b20);
      }
    }
    cVar3 = (**(code **)(*param_1 + 0x2f8))(param_1,DAT_14cc06b18);
    puVar8 = DAT_14cc06b18;
    if (cVar3 != '\0') {
      lVar11 = param_2[1];
      if ((longlong)(int)lVar11 == 0) {
        *(undefined4 *)(param_2 + 1) = 1;
        if (*(int *)((longlong)param_2 + 0xc) == 0) {
          FUN_1446f84a2(param_2,0);
        }
        puVar12 = (undefined8 *)*param_2;
      }
      else {
        lVar2 = *param_2;
        lVar13 = 0;
        do {
          cVar3 = FUN_1403f35db(*(undefined8 *)(lVar2 + lVar13),&DAT_14cc074d8);
          puVar8 = DAT_14cc06b18;
          if (cVar3 != '\0') goto LAB_1403f3231;
          lVar13 = lVar13 + 8;
        } while ((longlong)(int)lVar11 * 8 != lVar13);
        iVar9 = (int)param_2[1];
        lVar11 = (longlong)iVar9;
        *(uint *)(param_2 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
          FUN_1446f84a2(param_2,iVar9);
        }
        *(undefined8 *)(*param_2 + lVar11 * 8) = *(undefined8 *)(*param_2 + -8 + lVar11 * 8);
        puVar12 = (undefined8 *)((lVar11 + -1) * 8 + *param_2);
      }
      *puVar12 = *puVar8;
    }
  }
LAB_1403f3231:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f35db FUN_1403f35db body=257 status=ok
// SIG undefined FUN_1403f35db(void)

void FUN_1403f35db(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  size_t sVar2;
  char *_Str;
  undefined1 auStack_68 [40];
  char *local_40;
  undefined4 local_38;
  uint local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  if (-1 < (longlong)uVar1 || param_1 != 0) {
    if ((longlong)uVar1 < 0) {
      _Str = (char *)(uVar1 & 0x7fffffffffffffff);
      if (*(char *)((longlong)param_2 + 0xc) == '\x01') {
        FUN_1446f470e(&local_40,_Str,1);
        local_30[0] = (uint)local_40;
      }
      else {
        local_40 = _Str;
        if (_Str == (char *)0x0) {
          local_38 = 0;
        }
        else {
          sVar2 = strlen(_Str);
          local_38 = (undefined4)sVar2;
        }
        FUN_14001c09c(local_30,&local_40,1);
      }
      *param_2 = (ulonglong)local_30[0];
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if (*(char *)((longlong)param_2 + 0xc) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1402ca022(0,uVar1 & 0x7fffffffffffffff);
  return;
}



// FUNCTION 1403f36fc FUN_1403f36fc body=1527 status=ok
// SIG undefined FUN_1403f36fc(void)

longlong *
FUN_1403f36fc(longlong param_1,longlong *param_2,uint param_3,undefined4 *param_4,char *param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong *unaff_RBP;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined4 *puVar21;
  uint uVar22;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  longlong *local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined4 *local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar10 = *(longlong *)(param_1 + 0x2c8);
  local_98 = param_2;
  local_78 = param_4;
  local_70 = param_1;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar19 = *(longlong *)(lVar10 + 0x40);
    local_80 = (ulonglong)*(int *)(lVar19 + 0x18);
    iVar11 = *(int *)(lVar19 + 0x18) + param_3;
    *(int *)(lVar19 + 0x18) = iVar11;
    iVar9 = *(int *)(lVar19 + 0x10);
    if ((longlong)iVar9 != 0) {
      lVar19 = *(longlong *)(lVar19 + 8);
      lVar20 = 0;
      do {
        plVar5 = *(longlong **)(lVar19 + lVar20);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5,iVar11);
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar9 * 8 != lVar20);
    }
    *local_98 = 0;
    local_98[1] = 0;
    *(uint *)(local_98 + 1) = param_3;
    FUN_1403f4be0(local_98,0);
    iVar9 = *(int *)(lVar10 + 0x6e8);
    uVar12 = iVar9 + param_3;
    unaff_RBP = (longlong *)(ulonglong)uVar12;
    *(uint *)(lVar10 + 0x6e8) = uVar12;
    iVar11 = *(int *)(lVar10 + 0x6e0);
    if ((longlong)iVar11 != 0) {
      lVar19 = *(longlong *)(lVar10 + 0x6d8);
      lVar20 = 0;
      do {
        plVar5 = *(longlong **)(lVar19 + lVar20);
        if (plVar5 != (longlong *)0x0) {
          (**(code **)(*plVar5 + 8))(plVar5,uVar12);
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar11 * 8 != lVar20);
    }
    if (0 < (int)param_3) {
      local_68 = (ulonglong)param_3;
      local_88 = (longlong)iVar9 * 8;
      lVar19 = local_80 << 0x20;
      local_90 = local_80 & 0xffffffff;
      uVar15 = 0;
      puVar21 = local_78;
      do {
        local_4c = 0x10000;
        lVar20 = *(longlong *)(lVar10 + 0x40);
        plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
        local_a8 = &local_4c;
        FUN_1403f4226(plVar5,lVar20,(int)local_90 + (int)uVar15);
        *plVar5 = lVar20;
        *(longlong **)(*(longlong *)(lVar20 + 0x98) + (lVar19 >> 0x1d)) = plVar5;
        uVar12 = *(uint *)(lVar10 + 0x710);
        iVar9 = uVar12 + 1;
        *(int *)(lVar10 + 0x710) = iVar9;
        if (iVar9 != 0) {
          *(ulonglong *)(*(longlong *)(*plVar5 + 0x260) + (longlong)(int)plVar5[1] * 8) =
               (ulonglong)uVar12 << 0x20 | 0xffffffff;
        }
        puVar1 = (uint *)(*(longlong *)(*plVar5 + 0x248) + (longlong)(int)plVar5[1] * 4);
        *puVar1 = *puVar1 | *(uint *)(*(longlong *)(lVar10 + 0x40) + 0x74);
        *(longlong **)(*local_98 + uVar15 * 8) = plVar5;
        unaff_RBP = *(longlong **)(*local_98 + uVar15 * 8);
        puVar18 = puVar21;
        if (local_78 == (undefined4 *)0x0) {
          puVar18 = &local_50;
          (**(code **)(**(longlong **)(lVar10 + 0x708) + 8))(*(longlong **)(lVar10 + 0x708),puVar18)
          ;
        }
        *(undefined4 *)(*(longlong *)(*unaff_RBP + 0x80) + (longlong)(int)unaff_RBP[1] * 4) =
             *puVar18;
        lVar6 = *(longlong *)(lVar10 + 0x6f8) + local_88;
        lVar20 = *(longlong *)(lVar6 + uVar15 * 8);
        *(longlong **)(lVar6 + uVar15 * 8) = plVar5;
        if (lVar20 != 0) {
          FUN_1400811d6(lVar20);
          FUN_1400020a8(lVar20);
        }
        *(undefined1 *)(uVar15 + *(longlong *)(*(longlong *)(lVar10 + 0x40) + 0xe0) + local_80) = 1;
        uVar15 = uVar15 + 1;
        puVar21 = puVar21 + 1;
        lVar19 = lVar19 + 0x100000000;
      } while (local_68 != uVar15);
    }
  }
  lVar19 = local_98[1];
  if ((longlong)(int)lVar19 != 0) {
    lVar20 = *local_98;
    lVar6 = 0;
    do {
      puVar7 = *(undefined8 **)(lVar20 + lVar6);
      unaff_RBP = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5[1]);
      FUN_1403f44de(*puVar7,*(undefined4 *)(puVar7 + 1),(param_5[1] == '\0') * '\x03' + '\x01');
      FUN_1403f4a1c(*puVar7,*(undefined4 *)(puVar7 + 1),(ulonglong)unaff_RBP & 0xffffffff);
      if (*param_5 == '\0') {
        FUN_1403f3cf4(lVar10,puVar7);
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar19 * 8 != lVar6);
  }
  FUN_1447dd35a(lVar10);
  if ((longlong)(int)local_98[1] != 0) {
    plVar5 = (longlong *)*local_98;
    local_58 = plVar5 + (int)local_98[1];
    local_60 = local_70 + 0x360;
    local_70 = local_70 + 0x380;
    do {
      puVar3 = (ulonglong *)*plVar5;
      uVar15 = *puVar3;
      lVar10 = (longlong)(int)puVar3[1];
      if (((puVar3 == (ulonglong *)0x0) || (*(byte *)((longlong)puVar3 + 0xc) < 2)) ||
         (*(char *)(*(longlong *)(uVar15 + 0x2c0) + 0xd + lVar10 * 0x10) != '\x01')) {
LAB_1403f3a2b:
        if ((*(char *)(*(longlong *)(uVar15 + 0xe0) + lVar10) != '\0') || (DAT_14c9978a0 != 0)) {
          local_78 = (undefined4 *)
                     CONCAT44(local_78._4_4_,
                              *(undefined4 *)(*(longlong *)(uVar15 + 0x80) + lVar10 * 4));
          puVar7 = (undefined8 *)FUN_1447eab44(local_60);
          *(undefined1 *)(puVar7 + 8) = 2;
          local_68 = *puVar3;
          local_80 = (ulonglong)(int)puVar3[1];
          lVar10 = *(longlong *)(local_68 + 0xf8) + local_80 * 0x18;
          lVar19 = *(longlong *)(lVar10 + 8);
          if (*(longlong *)(lVar10 + 8) == 0) {
            lVar19 = lVar10;
          }
          if ((longlong)*(int *)(lVar10 + 0x10) == 0) {
            uVar17 = 0;
            uVar16 = 0;
            local_90._0_4_ = 0;
            local_88._0_4_ = 0;
            uVar12 = 0;
            uVar13 = 0;
            uVar22 = 0;
            uVar14 = 0;
          }
          else {
            lVar20 = (longlong)*(int *)(lVar10 + 0x10) * 8;
            lVar10 = 0;
            local_88._0_4_ = 0;
            local_90._0_4_ = 0;
            uVar16 = 0;
            uVar17 = 0;
            do {
              lVar6 = *(longlong *)(lVar19 + lVar10);
              if ((lVar6 != 0) &&
                 ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) & 2)
                  != 0)) {
                uVar15 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
                uVar17 = uVar17 | *(uint *)(lVar6 + 0x48 + uVar15 * 8);
                uVar16 = uVar16 | *(uint *)(lVar6 + 0x4c + uVar15 * 8);
                local_90._0_4_ = (uint)local_90 | *(uint *)(lVar6 + 0x50 + uVar15 * 8);
                local_88._0_4_ = (uint)local_88 | *(uint *)(lVar6 + 0x54 + uVar15 * 8);
              }
              lVar10 = lVar10 + 8;
            } while (lVar20 != lVar10);
            lVar10 = 0;
            uVar12 = 0;
            uVar13 = 0;
            uVar22 = 0;
            uVar14 = 0;
            do {
              lVar6 = *(longlong *)(lVar19 + lVar10);
              if (lVar6 != 0) {
                if ((*(byte *)(lVar6 + 0x71 + (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0) * 8) & 5)
                    != 0) {
                  uVar15 = (ulonglong)((*(uint *)(lVar6 + 8) & 3) == 0);
                  uVar13 = uVar13 | *(uint *)(lVar6 + 0x58 + uVar15 * 8);
                  uVar12 = uVar12 | *(uint *)(lVar6 + 0x5c + uVar15 * 8);
                  uVar22 = uVar22 | *(uint *)(lVar6 + 0x60 + uVar15 * 8);
                  uVar14 = uVar14 | *(uint *)(lVar6 + 100 + uVar15 * 8);
                }
              }
              lVar10 = lVar10 + 8;
            } while (lVar20 != lVar10);
          }
          uVar2 = *(undefined4 *)(*(longlong *)(local_68 + 0x80) + local_80 * 4);
          *puVar7 = *(undefined8 *)(*(longlong *)(local_68 + 0xb0) + local_80 * 8);
          puVar7[1] = puVar3;
          *(undefined4 *)(puVar7 + 2) = uVar2;
          *(uint *)((longlong)puVar7 + 0x14) = uVar17;
          *(uint *)(puVar7 + 3) = uVar16;
          *(uint *)((longlong)puVar7 + 0x1c) = (uint)local_90;
          *(uint *)(puVar7 + 4) = (uint)local_88;
          *(uint *)((longlong)puVar7 + 0x24) = uVar13;
          *(uint *)(puVar7 + 5) = uVar12;
          *(uint *)((longlong)puVar7 + 0x2c) = uVar22;
          *(uint *)(puVar7 + 6) = uVar14;
          *(undefined1 *)((longlong)puVar7 + 0x34) = 1;
          *(undefined2 *)(puVar7 + 7) =
               *(undefined2 *)(*(longlong *)(*puVar3 + 0x170) + (longlong)(int)puVar3[1] * 2);
          puVar8 = (undefined8 *)FUN_1447eab44(local_70,(ulonglong)local_78 & 0xffffffff,1);
          for (lVar10 = 9; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
        }
      }
      else if (((2 < *(byte *)((longlong)puVar3 + 0xc)) &&
               (plVar4 = *(longlong **)(*(longlong *)(uVar15 + 0x5a8) + lVar10 * 0x10),
               plVar4 != (longlong *)0x0)) && (2 < *(byte *)((longlong)plVar4 + 0xc))) {
        if (((*(byte *)(*(longlong *)(*plVar4 + 0x680) + (longlong)(int)plVar4[1]) & 1) != 0) &&
           (*(longlong *)(*(longlong *)(*plVar4 + 200) + (longlong)(int)plVar4[1] * 8) ==
            *(longlong *)(*(longlong *)(uVar15 + 200) + lVar10 * 8))) goto LAB_1403f3a2b;
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_98;
}



// FUNCTION 1403f3cf4 FUN_1403f3cf4 body=95 status=ok
// SIG undefined FUN_1403f3cf4(void)

void FUN_1403f3cf4(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(*param_2 + 0x2c0);
  lVar4 = (longlong)(int)param_2[1] * 0x10;
  if ((*(char *)(lVar2 + 0xd + lVar4) == '\0') &&
     (bVar3 = *(char *)(lVar2 + 0xb + lVar4) - 1, bVar3 < 4)) {
    lVar4 = (ulonglong)bVar3 * 8;
    lVar2 = *(longlong *)(&DAT_149f4c270 + lVar4);
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 | *(uint *)(param_1 + *(longlong *)(&DAT_149f4c290 + lVar4));
    FUN_1403f3d54(lVar2 + param_1);
    return;
  }
  return;
}



// FUNCTION 1403f3d54 FUN_1403f3d54 body=262 status=ok
// SIG undefined FUN_1403f3d54(void)

void FUN_1403f3d54(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  ulonglong *local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x18) == param_2) goto LAB_1403f3e0e;
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_44 = (undefined4)param_1[0xb];
  local_30 = &local_44;
  local_38 = &local_40;
  FUN_1403f3e5c(param_1,local_24,&local_38,0);
  iVar3 = (int)param_1[0xb];
  *(uint *)(param_1 + 0xb) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x5c) < iVar3 + 1U) {
    FUN_1403f4be0(param_1 + 10,iVar3);
  }
  *(ulonglong *)(param_1[10] + (longlong)iVar3 * 8) = local_40;
LAB_1403f3e0e:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403f3e5c FUN_1403f3e5c body=347 status=ok
// SIG undefined FUN_1403f3e5c(void)

undefined4 *
FUN_1403f3e5c(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1403f4050(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_1403f3fb8(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1403f4e50(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f3fb8 FUN_1403f3fb8 body=152 status=ok
// SIG undefined FUN_1403f3fb8(void)

void FUN_1403f3fb8(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 uVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*plVar6 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_1400c9d8c((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1403f4003;
    }
  }
  uVar5 = 0;
LAB_1403f4003:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1403f4050 FUN_1403f4050 body=470 status=ok
// SIG undefined FUN_1403f4050(void)

int * FUN_1403f4050(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_14482b872(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1403f4226 FUN_1403f4226 body=695 status=ok
// SIG undefined FUN_1403f4226(void)

longlong *
FUN_1403f4226(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  FUN_140125b88(param_1,param_2,param_3,param_4,param_5);
  lVar6 = param_1[1];
  lVar7 = *(longlong *)(*param_1 + 0x278);
  *(undefined8 *)(lVar7 + (longlong)(int)lVar6 * 0xc) = 0;
  *(undefined4 *)(lVar7 + 8 + (longlong)(int)lVar6 * 0xc) = 0;
  lVar6 = param_1[1];
  lVar7 = *(longlong *)(*param_1 + 0x290);
  *(undefined8 *)(lVar7 + (longlong)(int)lVar6 * 0xc) = 0;
  *(undefined4 *)(lVar7 + 8 + (longlong)(int)lVar6 * 0xc) = 0;
  *(ushort *)(*(longlong *)(*param_1 + 0x170) + (longlong)(int)param_1[1] * 2) =
       (ushort)(DAT_14c75f288 == 1) << 3;
  FUN_1403f47c8(param_1,param_5);
  *(undefined4 *)(*(longlong *)(*param_1 + 0x2c0) + 4 + (longlong)(int)param_1[1] * 0x10) = 0;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x2c0) + 0xd + (longlong)(int)param_1[1] * 0x10) =
       *param_5;
  lVar7 = *(longlong *)(*param_1 + 0x278);
  lVar8 = (longlong)(int)param_1[1] * 0xc;
  lVar6 = *(longlong *)(*param_1 + 0x560);
  uVar5 = *(undefined8 *)(lVar7 + lVar8);
  *(undefined4 *)(lVar6 + 8 + lVar8) = *(undefined4 *)(lVar7 + 8 + lVar8);
  *(undefined8 *)(lVar6 + lVar8) = uVar5;
  lVar7 = *(longlong *)(*param_1 + 0x290);
  lVar8 = (longlong)(int)param_1[1] * 0xc;
  lVar6 = *(longlong *)(*param_1 + 0x578);
  uVar5 = *(undefined8 *)(lVar7 + lVar8);
  *(undefined4 *)(lVar6 + 8 + lVar8) = *(undefined4 *)(lVar7 + 8 + lVar8);
  *(undefined8 *)(lVar6 + lVar8) = uVar5;
  *(undefined4 *)(*(longlong *)(*param_1 + 0x590) + (longlong)(int)param_1[1] * 4) = 0xffffffff;
  lVar7 = *(longlong *)(*param_1 + 0x28);
  lVar8 = (longlong)(int)param_1[1] * 0x18;
  lVar6 = *(longlong *)(*param_1 + 0x530);
  *(undefined8 *)(lVar6 + 0x10 + lVar8) = *(undefined8 *)(lVar7 + 0x10 + lVar8);
  puVar1 = (undefined8 *)(lVar7 + lVar8);
  uVar5 = puVar1[1];
  puVar2 = (undefined8 *)(lVar6 + lVar8);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  lVar7 = (longlong)(int)param_1[1] * 0x10;
  puVar1 = (undefined8 *)(*(longlong *)(*param_1 + 0x48) + lVar7);
  uVar5 = puVar1[1];
  puVar2 = (undefined8 *)(*(longlong *)(*param_1 + 0x548) + lVar7);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  lVar8 = (longlong)(int)param_1[1];
  lVar7 = *(longlong *)(*param_1 + 0x278);
  fVar3 = *(float *)(lVar7 + 8 + lVar8 * 0xc);
  fVar4 = *(float *)(lVar7 + 4 + lVar8 * 0xc);
  lVar6 = *(longlong *)(*param_1 + 0x2d8);
  *(double *)(lVar6 + lVar8 * 0x18) = (double)*(float *)(lVar7 + lVar8 * 0xc);
  *(double *)(lVar6 + 8 + lVar8 * 0x18) = (double)fVar4;
  *(double *)(lVar6 + 0x10 + lVar8 * 0x18) = (double)fVar3;
  lVar8 = (longlong)(int)param_1[1];
  lVar7 = *(longlong *)(*param_1 + 0x290);
  fVar3 = *(float *)(lVar7 + 8 + lVar8 * 0xc);
  fVar4 = *(float *)(lVar7 + 4 + lVar8 * 0xc);
  lVar6 = *(longlong *)(*param_1 + 0x2f0);
  *(double *)(lVar6 + lVar8 * 0x18) = (double)*(float *)(lVar7 + lVar8 * 0xc);
  *(double *)(lVar6 + 8 + lVar8 * 0x18) = (double)fVar4;
  *(double *)(lVar6 + 0x10 + lVar8 * 0x18) = (double)fVar3;
  lVar6 = param_1[1];
  lVar7 = *(longlong *)(*param_1 + 0x308);
  *(undefined8 *)(lVar7 + 0x10 + (longlong)(int)lVar6 * 0x18) = 0;
  puVar1 = (undefined8 *)(lVar7 + (longlong)(int)lVar6 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar6 = param_1[1];
  lVar7 = *(longlong *)(*param_1 + 800);
  *(undefined8 *)(lVar7 + 0x10 + (longlong)(int)lVar6 * 0x18) = 0;
  puVar1 = (undefined8 *)(lVar7 + (longlong)(int)lVar6 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  FUN_1403f44de(*param_1,(int)param_1[1],(param_5[1] == '\0') * '\x03' + '\x01');
  lVar7 = (longlong)(int)param_1[1] * 0x10;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x2c0) + 0xc + lVar7) =
       *(undefined1 *)(*(longlong *)(*param_1 + 0x2c0) + 0xb + lVar7);
  *(undefined1 *)(*(longlong *)(*param_1 + 0x4b8) + (longlong)(int)param_1[1]) = 0;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x4d0) + (longlong)(int)param_1[1]) = 0;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x4e8) + (longlong)(int)param_1[1]) = 0;
  lVar6 = param_1[1];
  lVar7 = *(longlong *)(*param_1 + 0x398);
  *(undefined1 **)(lVar7 + (longlong)(int)lVar6 * 0xc) = &DAT_3f8000003f800000;
  *(undefined4 *)(lVar7 + 8 + (longlong)(int)lVar6 * 0xc) = 0x3f800000;
  return param_1;
}



// FUNCTION 1403f44de FUN_1403f44de body=746 status=ok
// SIG undefined FUN_1403f44de(void)

void FUN_1403f44de(longlong param_1,undefined8 param_2,uint param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  double dVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  char cVar17;
  ulonglong uVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar15 = (longlong)(int)param_2;
  lVar19 = lVar15 * 0x10;
  bVar7 = *(byte *)(*(longlong *)(param_1 + 0x2c0) + 0xb + lVar19);
  cVar17 = (char)param_3;
  if (bVar7 == 4) {
LAB_1403f450d:
    uVar18 = (ulonglong)param_3 & 0xfffffffffffffffe;
    if ((char)uVar18 == '\x02') {
      *(undefined8 *)(*(longlong *)(param_1 + 0x3c8) + lVar15 * 8) = 0;
      lVar16 = *(longlong *)(param_1 + 0x380);
      *(undefined8 *)(lVar16 + lVar15 * 0xc) = 0;
      *(undefined4 *)(lVar16 + 8 + lVar15 * 0xc) = 0;
      goto LAB_1403f452f;
    }
    if ((bVar7 & 0xfe) != 2) {
LAB_1403f4526:
      if (cVar17 == '\x01') {
        FUN_1403f4a1c(param_1,param_2,CONCAT71((int7)(uVar18 >> 8),1));
        return;
      }
      goto LAB_1403f452f;
    }
  }
  else if (bVar7 == 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x3c8) + lVar15 * 8) = 0;
    lVar16 = *(longlong *)(param_1 + 0x380);
    *(undefined8 *)(lVar16 + lVar15 * 0xc) = 0;
    *(undefined4 *)(lVar16 + 8 + lVar15 * 0xc) = 0;
  }
  else {
    uVar18 = (ulonglong)(bVar7 - 2);
    if (1 < bVar7 - 2) {
      if (bVar7 == 1) goto LAB_1403f450d;
      goto LAB_1403f4526;
    }
  }
  if ((cVar17 == '\x04') || ((param_3 & 0xff) == 1)) {
    dVar6 = *(double *)(*(longlong *)(param_1 + 0x3b0) + lVar15 * 8);
    *(ulonglong *)(*(longlong *)(param_1 + 0x3c8) + lVar15 * 8) =
         ~-(ulonglong)(ABS(dVar6) <= 1e-08) & (ulonglong)(1.0 / dVar6);
    pfVar1 = (float *)(*(longlong *)(param_1 + 0x368) + lVar15 * 0xc);
    fVar22 = DAT_14c846330._4_4_;
    fVar20 = (float)DAT_14c846330;
    fVar21 = DAT_14c846338;
    if (((0.0001 < ABS(*pfVar1)) || ((0.0001 < ABS(pfVar1[1]) || (0.0001 < ABS(pfVar1[2]))))) &&
       (1e-08 < ABS(*(double *)(*(longlong *)(param_1 + 0x3b0) + lVar15 * 8)))) {
      fVar22 = 1.0 / pfVar1[1];
      fVar20 = 1.0 / *pfVar1;
      fVar21 = 1.0 / pfVar1[2];
    }
    lVar16 = *(longlong *)(param_1 + 0x380);
    *(float *)(lVar16 + lVar15 * 0xc) = fVar20;
    *(float *)(lVar16 + 4 + lVar15 * 0xc) = fVar22;
    *(float *)(lVar16 + 8 + lVar15 * 0xc) = fVar21;
    lVar16 = *(longlong *)(param_1 + 0x28);
    lVar11 = lVar15 * 0x18;
    lVar9 = *(longlong *)(param_1 + 0x530);
    *(undefined8 *)(lVar9 + 0x10 + lVar11) = *(undefined8 *)(lVar16 + 0x10 + lVar11);
    puVar2 = (undefined8 *)(lVar16 + lVar11);
    uVar10 = puVar2[1];
    puVar3 = (undefined8 *)(lVar9 + lVar11);
    *puVar3 = *puVar2;
    puVar3[1] = uVar10;
    puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x48) + lVar19);
    uVar12 = puVar4[1];
    uVar13 = puVar4[2];
    uVar14 = puVar4[3];
    puVar5 = (undefined4 *)(*(longlong *)(param_1 + 0x548) + lVar19);
    *puVar5 = *puVar4;
    puVar5[1] = uVar12;
    puVar5[2] = uVar13;
    puVar5[3] = uVar14;
  }
LAB_1403f452f:
  lVar16 = *(longlong *)(param_1 + 0x2c0);
  if ((*(char *)(lVar16 + 0xb + lVar19) != '\x01') == (cVar17 == '\x01')) {
    uVar10 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar15 * 8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x520));
    iVar8 = *(int *)(param_1 + 0x518);
    *(uint *)(param_1 + 0x518) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x51c) < iVar8 + 1U) {
      FUN_1403f4d42(param_1 + 0x510,iVar8);
    }
    lVar15 = *(longlong *)(param_1 + 0x510);
    *(undefined8 *)(lVar15 + (longlong)iVar8 * 0x10) = uVar10;
    *(bool *)(lVar15 + 8 + (longlong)iVar8 * 0x10) = cVar17 == '\x01';
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x520));
    lVar16 = *(longlong *)(param_1 + 0x2c0);
  }
  *(char *)(lVar16 + 0xb + lVar19) = cVar17;
  return;
}



// FUNCTION 1403f47c8 FUN_1403f47c8 body=596 status=ok
// SIG undefined FUN_1403f47c8(void)

void FUN_1403f47c8(longlong *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  ushort *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  *(undefined4 *)(*(longlong *)(*param_1 + 0x2c0) + (longlong)(int)param_1[1] * 0x10) = 0;
  lVar4 = param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x338);
  *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)lVar4 * 0x18) = 0;
  puVar1 = (undefined8 *)(lVar3 + (longlong)(int)lVar4 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar4 = param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x350);
  *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)lVar4 * 0x18) = 0;
  puVar1 = (undefined8 *)(lVar3 + (longlong)(int)lVar4 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(*(longlong *)(*param_1 + 0x440) + (longlong)(int)param_1[1] * 8) =
       0x7fefffffffffffff;
  *(undefined8 *)(*(longlong *)(*param_1 + 0x458) + (longlong)(int)param_1[1] * 8) =
       0x7fefffffffffffff;
  *(undefined4 *)(*(longlong *)(*param_1 + 0x470) + (longlong)(int)param_1[1] * 4) = 0xbf800000;
  *(undefined4 *)(*(longlong *)(*param_1 + 0x488) + (longlong)(int)param_1[1] * 4) = 0x3f800000;
  *(undefined8 *)(*(longlong *)(*param_1 + 0x3b0) + (longlong)(int)param_1[1] * 8) =
       0x3ff0000000000000;
  *(undefined8 *)(*(longlong *)(*param_1 + 0x3c8) + (longlong)(int)param_1[1] * 8) =
       0x3ff0000000000000;
  lVar4 = param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x3e0);
  *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)lVar4 * 0x18) = 0;
  puVar1 = (undefined8 *)(lVar3 + (longlong)(int)lVar4 * 0x18);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = *(longlong *)(*param_1 + 0x3f8);
  lVar4 = (longlong)(int)param_1[1] * 0x20;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  ((undefined8 *)(lVar3 + lVar4))[1] = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar4) = 0x3ff0000000000000;
  lVar4 = param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x368);
  *(undefined1 **)(lVar3 + (longlong)(int)lVar4 * 0xc) = &DAT_3f8000003f800000;
  *(undefined4 *)(lVar3 + 8 + (longlong)(int)lVar4 * 0xc) = 0x3f800000;
  lVar4 = param_1[1];
  lVar3 = *(longlong *)(*param_1 + 0x380);
  *(undefined1 **)(lVar3 + (longlong)(int)lVar4 * 0xc) = &DAT_3f8000003f800000;
  *(undefined4 *)(lVar3 + 8 + (longlong)(int)lVar4 * 0xc) = 0x3f800000;
  *(undefined8 *)(*(longlong *)(*param_1 + 0x410) + (longlong)(int)param_1[1] * 8) = 0;
  *(undefined8 *)(*(longlong *)(*param_1 + 0x428) + (longlong)(int)param_1[1] * 8) = 0;
  lVar3 = (longlong)(int)param_1[1] * 0x10;
  *(ushort *)(*(longlong *)(*param_1 + 0x2c0) + 8 + lVar3) =
       *(ushort *)(*(longlong *)(*param_1 + 0x2c0) + 8 + lVar3) & 0xfffe | (ushort)(byte)param_2[2];
  puVar2 = (ushort *)(*(longlong *)(*param_1 + 0x2c0) + 8 + (longlong)(int)param_1[1] * 0x10);
  *puVar2 = *puVar2 & 0xff1f;
  lVar3 = (longlong)(int)param_1[1] * 0x10;
  *(ushort *)(*(longlong *)(*param_1 + 0x2c0) + 8 + lVar3) =
       (*(ushort *)(*(longlong *)(*param_1 + 0x2c0) + 8 + lVar3) & 0xfffd) +
       (ushort)(byte)param_2[3] * 2;
  puVar2 = (ushort *)(*(longlong *)(*param_1 + 0x2c0) + 8 + (longlong)(int)param_1[1] * 0x10);
  *puVar2 = *puVar2 & 0xfdff;
  lVar3 = *(longlong *)(*param_1 + 0x500);
  lVar4 = (longlong)(int)param_1[1] * 3;
  *(undefined2 *)(lVar3 + lVar4) = 0xffff;
  *(undefined1 *)(lVar3 + 2 + lVar4) = 0xff;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x2c0) + 0xd + (longlong)(int)param_1[1] * 0x10) =
       *param_2;
  *(undefined1 *)(*(longlong *)(*param_1 + 0x4b8) + (longlong)(int)param_1[1]) = 0;
  return;
}



// FUNCTION 1403f4a1c FUN_1403f4a1c body=451 status=ok
// SIG undefined FUN_1403f4a1c(void)

void FUN_1403f4a1c(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  lVar4 = *(longlong *)(param_1 + 0x2c0);
  lVar5 = (longlong)param_2;
  lVar7 = lVar5 * 0x10;
  cVar6 = *(char *)(lVar4 + 0xb + lVar7);
  if (cVar6 == '\x01' && param_3 == '\0') {
    lVar3 = lVar5 * 0xc;
    uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x278) + 8 + lVar3);
    lVar4 = *(longlong *)(param_1 + 0x560);
    *(undefined8 *)(lVar4 + lVar3) = *(undefined8 *)(*(longlong *)(param_1 + 0x278) + lVar3);
    *(undefined4 *)(lVar4 + 8 + lVar3) = uVar9;
    lVar4 = *(longlong *)(param_1 + 0x290);
    uVar9 = *(undefined4 *)(lVar4 + 8 + lVar3);
    uVar8 = *(undefined4 *)(lVar4 + lVar3);
    uVar10 = *(undefined4 *)(lVar4 + 4 + lVar3);
    lVar4 = 0x578;
  }
  else {
    if (param_3 == '\0') goto LAB_1403f4a59;
    lVar4 = *(longlong *)(param_1 + 0x278);
    *(undefined8 *)(lVar4 + lVar5 * 0xc) = 0;
    *(undefined4 *)(lVar4 + 8 + lVar5 * 0xc) = 0;
    uVar8 = 0;
    lVar4 = 0x290;
    uVar10 = 0;
    uVar9 = 0;
  }
  lVar4 = *(longlong *)(param_1 + lVar4);
  *(undefined4 *)(lVar4 + lVar5 * 0xc) = uVar8;
  *(undefined4 *)(lVar4 + 4 + lVar5 * 0xc) = uVar10;
  *(undefined4 *)(lVar4 + 8 + lVar5 * 0xc) = uVar9;
  lVar4 = *(longlong *)(param_1 + 0x2c0);
  cVar6 = *(char *)(lVar4 + 0xb + lVar7);
LAB_1403f4a59:
  if ((cVar6 != '\x01') == (bool)param_3) {
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar5 * 8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x520));
    iVar1 = *(int *)(param_1 + 0x518);
    *(uint *)(param_1 + 0x518) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x51c) < iVar1 + 1U) {
      FUN_1403f4d42(param_1 + 0x510,iVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0x510);
    *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
    *(char *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = param_3;
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x520));
    lVar4 = *(longlong *)(param_1 + 0x2c0);
    cVar6 = *(char *)(lVar4 + 0xb + lVar7);
  }
  if ((cVar6 == '\x04') || (cVar6 == '\x01')) {
    *(char *)(lVar4 + 0xb + lVar7) = (param_3 == '\0') * '\x03' + '\x01';
    lVar4 = *(longlong *)(param_1 + 0x2c0);
    cVar6 = *(char *)(lVar4 + 0xb + lVar7);
  }
  if (param_3 == '\x01' && cVar6 == '\x02') {
    *(undefined1 *)(lVar4 + 0xb + lVar7) = 1;
  }
  return;
}



// FUNCTION 1403f4be0 FUN_1403f4be0 body=353 status=ok
// SIG undefined FUN_1403f4be0(void)

void FUN_1403f4be0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403f4c65;
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
LAB_1403f4c65:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1403f4d42 FUN_1403f4d42 body=269 status=ok
// SIG undefined FUN_1403f4d42(void)

void FUN_1403f4d42(longlong param_1,int param_2)

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



// FUNCTION 1403f4e50 FUN_1403f4e50 body=667 status=ok
// SIG undefined FUN_1403f4e50(void)

void FUN_1403f4e50(longlong *param_1)

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
  longlong lVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1403f4ec3;
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
LAB_1403f4ec3:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar13 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar13 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar13 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
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
    iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar13) {
      iVar13 = iVar14;
    }
  }
  if (iVar13 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar12 = (longlong)iVar13;
      uVar15 = *(ulonglong *)(lVar6 + lVar12 * 0x18);
      uVar2 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x14 + lVar12 * 0x18) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar12 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar13;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar13 = (int)uVar3;
      lVar6 = (longlong)iVar13;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar13) {
          iVar9 = iVar13;
        }
        if (iVar8 <= iVar13) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar9 - lVar6 == lVar12) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar13 + (int)lVar12 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar13 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar13 < iVar14);
  }
  return;
}



// FUNCTION 1403f50ec FUN_1403f50ec body=46 status=ok
// SIG undefined FUN_1403f50ec(void)

undefined8 FUN_1403f50ec(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
    uVar2 = FUN_1403f511a(param_1 + 0x1b);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1403f511a FUN_1403f511a body=204 status=ok
// SIG undefined FUN_1403f511a(void)

undefined8 FUN_1403f511a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if (((*(longlong *)(param_1 + 0xe8) != 0) ||
      (FUN_140a41730(param_1), *(longlong *)(param_1 + 0xe8) != 0)) &&
     (cVar3 = FUN_143881f24(), cVar3 != '\0')) {
    lVar2 = *(longlong *)(param_1 + 0xe8);
    if (((lVar2 == 0) || (*(float *)(lVar2 + 0x178) <= 0.0)) ||
       ((*(char *)(lVar2 + 0x17d) != '\0' ||
        (*(float *)(*(longlong *)(lVar2 + 0x40) + 0xb4) + 0.1 <=
         *(float *)(lVar2 + 0x160) - *(float *)(lVar2 + 0x178))))) {
      *(undefined1 *)(lVar2 + 0xc70) = 0;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
    iVar1 = *(int *)(lVar2 + 0x4f0);
    if ((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar2 + 0x880))) {
      lVar4 = lVar2 + 0x4f8;
      if (*(longlong *)(lVar2 + 0x878) != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x878);
      }
      return CONCAT71((int7)((ulonglong)lVar4 >> 8),((longlong)iVar1 * 0x38 + lVar4 != 0) * '\x02');
    }
  }
  return 0;
}



// FUNCTION 1403f51e6 FUN_1403f51e6 body=224 status=ok
// SIG undefined FUN_1403f51e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1403f51e6(longlong param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(longlong *)(param_1 + 0x538) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x538) + 0x58) + 1;
  }
  if (*(longlong *)(param_1 + 0x788) != lVar4) {
    *(longlong *)(param_1 + 0x788) = lVar4;
    iVar3 = FUN_1403f52c6(*(undefined8 *)(param_1 + 0x230),(undefined8 *)(param_1 + 0x748));
    if (-1 < iVar3) {
      _DAT_14ca84ed8 = *(undefined8 *)(param_1 + 0x768);
      if (((DAT_14c760b88 == '\x01') && (DAT_14ca76788 == '\x01')) &&
         (cVar2 = FUN_142770a9a(), cVar2 == '\0')) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined8 *)(param_1 + 0x748);
      }
      if (DAT_14c760da4 != 0) {
        uVar7 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
        uVar6 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        do {
          *(undefined8 *)(*(longlong *)(param_1 + 2000 + (ulonglong)uVar6 * 8) + 0x90) = uVar5;
          bVar1 = (byte)uVar6 & 0x1f;
          uVar7 = (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1) & uVar7;
          if (uVar7 == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar6 = 0;
            if (uVar7 != 0) {
              for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
              }
            }
          }
        } while (uVar7 != 0);
      }
    }
  }
  return param_1 + 0x748;
}



// FUNCTION 1403f52c6 FUN_1403f52c6 body=489 status=ok
// SIG undefined FUN_1403f52c6(void)

ulonglong FUN_1403f52c6(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_38 = (longlong *)0x0;
  uVar3 = (**(code **)*param_1)(param_1,&DAT_14a1e7f70);
  if (-1 < (int)uVar3) {
    uVar3 = (**(code **)(*local_38 + 0x70))(local_38,0,0,&local_58);
    if (-1 < (int)uVar3) {
      uVar3 = (**(code **)(*local_38 + 0x70))(local_38,0,1,&local_78);
      if (-1 < (int)uVar3) {
        if ((DAT_14ca81480 == 0) && (1 < DAT_14c760da4)) {
          uVar4 = 1;
          do {
            uVar3 = (**(code **)(*local_38 + 0x70))(local_38,uVar4,0,&local_98);
            if ((int)uVar3 < 0) goto LAB_1403f545f;
            uVar3 = (**(code **)(*local_38 + 0x70))(local_38,uVar4,1,&local_b8);
            if ((int)uVar3 < 0) goto LAB_1403f545f;
            if (local_58 < local_98) {
              local_48 = local_88;
              uStack_40 = uStack_80;
              local_58 = local_98;
              uStack_50 = uStack_90;
              local_78 = local_b8;
              uStack_74 = uStack_b4;
              uStack_70 = uStack_b0;
              uStack_6c = uStack_ac;
              local_68 = local_a8;
              uStack_60 = uStack_a0;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < DAT_14c760da4);
        }
        *param_2 = local_58;
        uVar1 = CONCAT44(uStack_74,local_78);
        param_2[1] = uVar1;
        param_2[2] = uStack_50;
        uVar2 = CONCAT44(uStack_6c,uStack_70);
        uVar5 = 0;
        uVar7 = local_58 - uStack_50;
        if (local_58 < uStack_50) {
          uVar7 = uVar5;
        }
        param_2[3] = uVar2;
        uVar6 = uStack_50 - local_58;
        if (uStack_50 < local_58) {
          uVar6 = uVar5;
        }
        param_2[6] = uVar7;
        param_2[4] = uVar6;
        if (uVar2 < uVar1 || uVar2 - uVar1 == 0) {
          param_2[7] = uVar1 - uVar2;
          param_2[5] = 0;
        }
        else {
          param_2[7] = 0;
          param_2[5] = uVar2 - uVar1;
        }
        goto LAB_1403f5461;
      }
    }
  }
LAB_1403f545f:
  uVar5 = (ulonglong)uVar3;
LAB_1403f5461:
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f54b0 FUN_1403f54b0 body=555 status=ok
// SIG undefined FUN_1403f54b0(void)

uint FUN_1403f54b0(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_28);
  uVar2 = *param_2;
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar6 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar7 >> 4);
  puVar4 = (ulonglong *)FUN_144741050(param_2 + 1);
  uVar1 = (ushort)puVar4[1];
  uVar3 = ((uint)(*puVar4 >> 0x14) & 0xffff ^ (uint)(*puVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = (uint)(uVar1 >> 0xd) ^ (uVar3 >> 0x10 ^ uVar3) - (uint)uVar1;
  uVar7 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - (uint)uVar1;
  uVar8 = uVar7 >> 0xd ^ (uVar1 - uVar3) - uVar7;
  uVar3 = uVar8 >> 0xc ^ (uVar3 - uVar7) - uVar8;
  uVar7 = uVar3 << 0x10 ^ (uVar7 - uVar8) - uVar3;
  uVar8 = uVar7 >> 5 ^ (uVar8 - uVar3) - uVar7;
  uVar9 = uVar8 >> 3 ^ (uVar3 - uVar7) - uVar8;
  uVar3 = uVar9 << 10 ^ (uVar7 - uVar8) - uVar9;
  uVar3 = uVar3 >> 0xf ^ uVar8 - (uVar9 + uVar3);
  iVar5 = uVar3 - *(byte *)((longlong)puVar4 + 10);
  uVar7 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar3;
  uVar8 = uVar7 >> 0xd ^ ((uint)*(byte *)((longlong)puVar4 + 10) - iVar5) - uVar7;
  uVar3 = uVar8 >> 0xc ^ (iVar5 - uVar7) - uVar8;
  uVar7 = uVar3 << 0x10 ^ (uVar7 - uVar8) - uVar3;
  uVar9 = uVar7 >> 5 ^ (uVar8 - uVar3) - uVar7;
  uVar8 = uVar9 >> 3 ^ (uVar3 - uVar7) - uVar9;
  uVar3 = uVar8 << 10 ^ (uVar7 - uVar9) - uVar8;
  uVar8 = uVar6 >> 0xd ^ (uVar3 >> 0xf ^ uVar9 - (uVar8 + uVar3)) - uVar6;
  uVar7 = uVar8 << 8 ^ (-0x61c88647 - uVar6) - uVar8;
  uVar3 = uVar7 >> 0xd ^ (uVar6 - uVar8) - uVar7;
  uVar6 = uVar3 >> 0xc ^ (uVar8 - uVar7) - uVar3;
  uVar8 = uVar6 << 0x10 ^ (uVar7 - uVar3) - uVar6;
  uVar7 = uVar8 >> 5 ^ (uVar3 - uVar6) - uVar8;
  uVar6 = uVar7 >> 3 ^ (uVar6 - uVar8) - uVar7;
  uVar3 = uVar6 << 10 ^ (uVar8 - uVar7) - uVar6;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3 >> 0xf ^ uVar7 - (uVar6 + uVar3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f56ea FUN_1403f56ea body=42 status=ok
// SIG undefined FUN_1403f56ea(void)

void FUN_1403f56ea(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1403f5714 FUN_1403f5714 body=336 status=ok
// SIG undefined FUN_1403f5714(void)

longlong FUN_1403f5714(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
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
  if (((((*(int *)(param_1 + 0x4c) != 0) && (uVar1 = *(uint *)(param_1 + 0x48), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == *(int *)(param_1 + 0x4c))))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (lVar3 = *plVar2, lVar3 != 0)))) {
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
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_1403f57a1;
  }
  lVar3 = 0;
LAB_1403f57a1:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f5866 FUN_1403f5866 body=2246 status=ok
// SIG undefined FUN_1403f5866(void)

void FUN_1403f5866(undefined8 *param_1,undefined ******param_2)

{
  undefined ****ppppuVar1;
  longlong *plVar2;
  undefined *****pppppuVar3;
  code *pcVar4;
  byte bVar5;
  ushort uVar6;
  int iVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined ******ppppppuVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  uint uVar16;
  undefined8 *****pppppuVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_278 [32];
  wchar_t *local_258;
  undefined8 local_250;
  undefined8 local_248;
  code *local_240;
  undefined4 local_238;
  code *local_230;
  undefined1 *local_228;
  undefined8 ****local_220;
  undefined8 ****local_210;
  undefined *****local_208;
  undefined *****pppppuStack_200;
  undefined *****local_1f8;
  undefined *****local_1f0;
  byte local_1e8;
  undefined8 ****local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (((ulonglong)param_2[5] & 1) == 0) {
    ppppuVar1 = *param_2[1];
    if (param_2[1][1] < (undefined ****)((longlong)ppppuVar1 + 1U)) {
      (*(code *)(*param_2)[0x2e])(param_2,param_1 + 4,1);
    }
    else {
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)ppppuVar1;
      *param_2[1] = (undefined ****)((longlong)*param_2[1] + 1);
    }
  }
  else {
    local_208 = (undefined *****)CONCAT71(local_208._1_7_,*(undefined1 *)(param_1 + 4));
    pppppuVar3 = param_2[1];
    ppppuVar1 = (undefined ****)((longlong)*pppppuVar3 + 1);
    if (pppppuVar3[1] < ppppuVar1) {
      (*(code *)(*param_2)[0x2e])(param_2,&local_208,1);
      bVar5 = (byte)local_208;
    }
    else {
      bVar5 = *(byte *)*pppppuVar3;
      local_208 = (undefined *****)CONCAT71(local_208._1_7_,bVar5);
      *pppppuVar3 = ppppuVar1;
    }
    if (bVar5 != *(byte *)(param_1 + 4)) {
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
      if (pcVar4 != (code *)0x0) {
        puVar14 = param_1;
        if (0x18 < *(ushort *)(param_1 + 3)) {
          puVar14 = (undefined8 *)*param_1;
        }
        (*pcVar4)(puVar14);
      }
      if (0x18 < *(ushort *)(param_1 + 3)) {
        FUN_1400020a8(*param_1);
      }
      bVar5 = (byte)local_208;
      uVar8 = (ulonglong)((uint)(byte)local_208 * 0x120);
      uVar16 = *(uint *)((longlong)&DAT_14c9a8510 + uVar8);
      uVar6 = (ushort)uVar16;
      *(ushort *)(param_1 + 3) = uVar6;
      puVar14 = param_1;
      if (0x18 < uVar6) {
        puVar14 = (undefined8 *)FUN_14001cc68(uVar16 & 0xffff);
        *param_1 = puVar14;
      }
      if (*(code **)((longlong)&DAT_14c9a85a8 + uVar8) == (code *)0x0) {
        memset(puVar14,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85a8 + uVar8))();
      }
      *(byte *)(param_1 + 4) = bVar5;
    }
  }
  (*(code *)(*param_2)[0x43])(param_2,&DAT_14a1caa84);
  bVar5 = *(byte *)(param_1 + 4);
  if ((bVar5 < 0xf) && ((0x40c0U >> (bVar5 & 0x1f) & 1) != 0)) {
    if (0x18 < *(ushort *)(param_1 + 3)) {
      param_1 = (undefined8 *)*param_1;
    }
    (*(code *)(*param_2)[0x24])(param_2,param_1);
    goto LAB_1403f5a61;
  }
  uVar8 = (ulonglong)((uint)bVar5 * 0x120);
  if ((((ulonglong)param_2[5] & 1) == 0) ||
     (iVar7 = FUN_1448332aa(param_2,&DAT_14a1caa84), 2 < iVar7)) {
LAB_1403f5925:
    if ((*(code **)(&DAT_14c9a8528 + uVar8) != (code *)0x0) &&
       (lVar18 = (**(code **)(&DAT_14c9a8528 + uVar8))(), lVar18 != 0)) {
      if (DAT_14c948fa0 == 0) {
        local_70[0] = (undefined8 ****)&DAT_1427db2a2;
        lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948fa0 = lVar10;
        FUN_1446f470e(&local_208,L"ScriptStruct",1);
        local_228 = &LAB_1468915ce;
        local_230 = FUN_1427dc742;
        local_240 = (code *)0x149e2b68a;
        local_238 = 199;
        local_248 = 0x10;
        local_250 = CONCAT44(local_250._4_4_,0x10000020);
        local_258 = (wchar_t *)CONCAT44(local_258._4_4_,8);
        local_220 = local_70;
        FUN_14574b4b2(lVar10);
        DAT_14c948fa0 = lVar10;
        uVar11 = FUN_1446f8646();
        lVar10 = DAT_14c948fa0;
        uVar12 = FUN_1449e2fb2();
        local_258 = L"ScriptStruct";
        FUN_14574b446(uVar12,lVar10,uVar11,L"/Script/CoreUObject");
      }
      if ((*(int *)(DAT_14c948fa0 + 0x38) <= *(int *)(*(longlong *)(lVar18 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) == DAT_14c948fa0 + 0x30)) {
        if (0x18 < *(ushort *)(param_1 + 3)) {
          param_1 = (undefined8 *)*param_1;
        }
        FUN_14047320e(lVar18,param_2,param_1,0);
        goto LAB_1403f5a61;
      }
    }
    if (((((*(int *)((longlong)&DAT_14c9a853c + uVar8) == 0) ||
          (uVar16 = *(uint *)((longlong)&DAT_14c9a8538 + uVar8), (int)uVar16 < 0)) ||
         (DAT_14c9647dc <= (int)uVar16)) ||
        ((plVar15 = (longlong *)
                    ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
         plVar15 == (longlong *)0x0 ||
         ((int)plVar15[2] != *(int *)((longlong)&DAT_14c9a853c + uVar8))))) ||
       (((*(uint *)(plVar15 + 1) & 0x10200000) != 0 ||
        (plVar2 = (longlong *)((longlong)&DAT_14c9a8540 + uVar8), *plVar15 == 0)))) {
      *(undefined8 *)((longlong)&DAT_14c9a8540 + uVar8) = 0;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_248 = FUN_140342cba();
        local_240 = FUN_1468c7f1e;
        local_250 = 0;
        local_258 = (wchar_t *)0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      plVar15 = (longlong *)*plVar2;
      if ((((plVar15 != (longlong *)0x0) && (*(int *)((longlong)&DAT_14c9a854c + uVar8) != 0)) &&
          (uVar16 = *(uint *)((longlong)&DAT_14c9a8548 + uVar8), -1 < (int)uVar16)) &&
         ((((int)uVar16 < DAT_14c9647dc &&
           (lVar18 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8), lVar18 != 0))
          && ((*(int *)(lVar18 + 0x10) == *(int *)((longlong)&DAT_14c9a854c + uVar8) &&
              ((*(uint *)(lVar18 + 8) & 0x10200000) == 0)))))) {
LAB_1403f5a23:
        if (0x18 < *(ushort *)(param_1 + 3)) {
          param_1 = (undefined8 *)*param_1;
        }
        local_1f0 = (undefined *****)&local_1f8;
        local_208 = (undefined *****)&PTR_FUN_149e37810;
        local_1f8 = (undefined *****)&local_208;
        pppppuStack_200 = (undefined *****)param_2;
        (**(code **)(*plVar15 + 0xd0))(plVar15,local_1f0,param_1,0);
        goto LAB_1403f5a61;
      }
      if (*(int *)((longlong)&DAT_14c9a8558 + uVar8) == 0) {
LAB_1403f5bc8:
        if (plVar15 != (longlong *)0x0) goto LAB_1403f5a23;
      }
      else {
        plVar15 = (longlong *)FUN_14007daa4(plVar2,0,0);
        if (plVar15 != (longlong *)0x0) {
          puVar9 = (undefined *)plVar15[1];
          if (DAT_14c951a40 == 0) {
            bVar19 = puVar9 != (undefined *)0x0;
            if (puVar9 != &DAT_14c951a38 && bVar19) {
              do {
                puVar9 = *(undefined **)(puVar9 + 0x30);
                bVar19 = puVar9 != (undefined *)0x0;
                if (puVar9 == &DAT_14c951a38) break;
              } while (puVar9 != (undefined *)0x0);
            }
            if (bVar19) goto LAB_1403f5bc5;
          }
          else if ((*(ulonglong *)(puVar9 + 0x18) & DAT_14c951a40) != 0) {
LAB_1403f5bc5:
            *plVar2 = (longlong)plVar15;
            goto LAB_1403f5bc8;
          }
        }
        if (*plVar2 != 0) {
          *plVar2 = 0;
          *(undefined8 *)((longlong)&DAT_14c9a8548 + uVar8) = 0;
        }
      }
    }
    bVar5 = *(byte *)(param_1 + 4);
  }
  else {
    bVar5 = *(byte *)(param_1 + 4);
    if (bVar5 == 0x13) {
      local_210 = (undefined8 *****)0x0;
      (*(code *)(*param_2)[0x2c])(param_2,&local_210);
      local_58 = 8;
      local_70[0] = local_210;
      local_50 = 0x12;
      FUN_1400b56fe(&local_208,local_70,0x13);
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppuVar17 = local_70;
        if (0x18 < local_58) {
          pppppuVar17 = (undefined8 *****)local_70[0];
        }
        (*pcVar4)(pppppuVar17);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
      bVar5 = *(byte *)(param_1 + 4);
      if (bVar5 == local_1e8) {
        ppppppuVar13 = (undefined ******)local_208;
        if ((ushort)local_1f0 < 0x19) {
          ppppppuVar13 = &local_208;
        }
        if (0x18 < *(ushort *)(param_1 + 3)) {
          param_1 = (undefined8 *)*param_1;
        }
        uVar8 = (ulonglong)((uint)bVar5 * 0x120);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85c0 + uVar8);
        if (pcVar4 == (code *)0x0) {
          memcpy(param_1,ppppppuVar13,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
        }
        else {
          (*pcVar4)(param_1);
        }
      }
      else {
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar5 * 0x120));
        if (pcVar4 != (code *)0x0) {
          puVar14 = param_1;
          if (0x18 < *(ushort *)(param_1 + 3)) {
            puVar14 = (undefined8 *)*param_1;
          }
          (*pcVar4)(puVar14);
        }
        if (0x18 < *(ushort *)(param_1 + 3)) {
          FUN_1400020a8(*param_1);
        }
        uVar16 = (uint)local_1e8;
        *(ushort *)(param_1 + 3) = (ushort)local_1f0;
        puVar14 = param_1;
        ppppppuVar13 = &local_208;
        if (0x18 < ((ulonglong)local_1f0 & 0xffff)) {
          puVar14 = (undefined8 *)FUN_14001cc68((ulonglong)local_1f0 & 0xffff,0);
          *param_1 = puVar14;
          ppppppuVar13 = (undefined ******)local_208;
        }
        pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar16 * 0x120));
        if (pcVar4 == (code *)0x0) {
          memcpy(puVar14,ppppppuVar13,
                 (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar16 * 0x120)));
        }
        else {
          (*pcVar4)(puVar14,ppppppuVar13);
        }
        *(byte *)(param_1 + 4) = local_1e8;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_1e8 * 0x120));
      if (pcVar4 != (code *)0x0) {
        ppppppuVar13 = (undefined ******)local_208;
        if ((ushort)local_1f0 < 0x19) {
          ppppppuVar13 = &local_208;
        }
        (*pcVar4)(ppppppuVar13);
      }
      if (0x18 < (ushort)local_1f0) {
        FUN_1400020a8(local_208);
      }
      goto LAB_1403f5a61;
    }
    if (iVar7 < 0) {
      if (bVar5 == 10) {
        local_208 = (undefined *****)0x0;
        (*(code *)(*param_2)[0x2c])(param_2,&local_208);
        ppppppuVar13 = (undefined ******)local_208;
LAB_1403f5f40:
        if (((undefined ******)*param_1 != ppppppuVar13) || (*(int *)(param_1 + 1) != -0xfffff30)) {
          *param_1 = ppppppuVar13;
          *(undefined4 *)(param_1 + 1) = 0xf00000d0;
          param_1[2] = 0;
        }
        goto LAB_1403f5a61;
      }
    }
    else {
      if (iVar7 == 0) {
        if (bVar5 == 10) {
          local_208 = (undefined *****)0x0;
          pppppuStack_200 = (undefined *****)0x0;
          uVar11 = FUN_1462a94c8();
          FUN_14047320e(uVar11,param_2,&local_208,0);
          ppppppuVar13 = (undefined ******)pppppuStack_200;
          goto LAB_1403f5f40;
        }
      }
      else if (iVar7 != 1) goto LAB_1403f5925;
      if (*(code **)(&DAT_14c9a8528 + uVar8) != (code *)0x0) {
        lVar18 = (**(code **)(&DAT_14c9a8528 + uVar8))();
        if (lVar18 != 0) goto LAB_1403f5925;
        bVar5 = *(byte *)(param_1 + 4);
      }
    }
  }
  if (0x18 < *(ushort *)(param_1 + 3)) {
    param_1 = (undefined8 *)*param_1;
  }
  (*(code *)(*param_2)[0x2e])
            (param_2,param_1,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar5 * 0x120)));
LAB_1403f5a61:
  if ((local_48 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403f613c FUN_1403f613c body=57 status=ok
// SIG undefined FUN_1403f613c(void)

void FUN_1403f613c(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5c90 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5c90 = FUN_140002ddd(FUN_14173d6f8,uVar1,L"NumericRange");
  }
  return;
}



// FUNCTION 1403f61ac FUN_1403f61ac body=57 status=ok
// SIG undefined FUN_1403f61ac(void)

void FUN_1403f61ac(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5e58 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5e58 = FUN_140002ddd(FUN_14173d899,uVar1,L"TrajectoryOptions");
  }
  return;
}



// FUNCTION 1403f61f0 FUN_1403f61f0 body=92 status=ok
// SIG undefined FUN_1403f61f0(void)

void FUN_1403f61f0(longlong param_1,undefined8 param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_14006bf18();
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x10);
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != lVar3) {
    *(longlong *)(param_1 + 0x10) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_3 + 0x10);
  return;
}



// FUNCTION 1403f624c FUN_1403f624c body=250 status=ok
// SIG undefined FUN_1403f624c(void)

longlong * FUN_1403f624c(undefined8 *param_1,longlong *param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  if ((param_4 != 2) && (param_4 != 4)) {
    return param_2;
  }
  param_3 = param_3 * param_4;
  bVar6 = param_4 != 2;
  plVar5 = param_1 + (ulonglong)bVar6 * 2 + 1;
  if (*(int *)(param_1 + (ulonglong)bVar6 * 2 + 2) != 0) {
    lVar4 = *(longlong *)
             (*plVar5 + (longlong)(*(int *)(param_1 + (ulonglong)bVar6 * 2 + 2) + -1) * 8);
    uVar2 = *(uint *)(lVar4 + 0x24);
    if (uVar2 + param_3 <= *(uint *)(lVar4 + 0x20)) goto LAB_1403f62b0;
  }
  uVar3 = FUN_1403f64c2(&DAT_14ca8c190,*param_1,param_3,param_4);
  iVar1 = *(int *)(param_1 + (ulonglong)bVar6 * 2 + 2);
  uVar2 = iVar1 + 1;
  *(uint *)(param_1 + (ulonglong)bVar6 * 2 + 2) = uVar2;
  if (*(uint *)((longlong)param_1 + (ulonglong)bVar6 * 0x10 + 0x14) < uVar2) {
    FUN_1403f635c(plVar5);
  }
  *(undefined8 *)(*plVar5 + (longlong)iVar1 * 8) = uVar3;
  lVar4 = *(longlong *)(*plVar5 + (longlong)(*(int *)(param_1 + (ulonglong)bVar6 * 2 + 2) + -1) * 8)
  ;
  uVar2 = *(uint *)(lVar4 + 0x24);
LAB_1403f62b0:
  *param_2 = (ulonglong)uVar2 + *(longlong *)(lVar4 + 0x18);
  param_2[1] = lVar4;
  *(uint *)(param_2 + 2) = uVar2 / param_4;
  *(uint *)(lVar4 + 0x24) = (param_3 + 0xfU & 0xfffffff0) + uVar2;
  return param_2;
}



// FUNCTION 1403f6346 FUN_1403f6346 body=22 status=ok
// SIG undefined FUN_1403f6346(void)

void FUN_1403f6346(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 1403f635c FUN_1403f635c body=356 status=ok
// SIG undefined FUN_1403f635c(void)

void FUN_1403f635c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403f63e1;
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
LAB_1403f63e1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1403f64c2 FUN_1403f64c2 body=532 status=ok
// SIG undefined FUN_1403f64c2(void)

undefined8 * FUN_1403f64c2(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  uVar10 = 0x10000;
  if (0x10000 < param_3) {
    uVar10 = param_3;
  }
  pcVar1 = (char *)(param_1 + 0x10);
  LOCK();
  bVar12 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar12) {
    *(char *)(param_1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar12) {
    FUN_1447d2058();
  }
  iVar5 = *(int *)(param_1 + 0x30);
  if (0 < (longlong)iVar5) {
    lVar4 = *(longlong *)(param_1 + 0x28);
    uVar8 = (longlong)iVar5 + 1;
    iVar9 = 0;
    do {
      puVar6 = *(undefined8 **)(lVar4 + -0x10 + uVar8 * 8);
      if ((uVar10 <= *(uint *)(puVar6 + 4)) && (*(int *)(puVar6 + 5) == param_4)) {
        if (iVar9 != 0) {
          memmove((void *)(lVar4 + uVar8 * 8 + -0x10),(void *)(lVar4 + uVar8 * 8 + -8),
                  (longlong)iVar9 << 3);
          iVar5 = *(int *)(param_1 + 0x30);
        }
        *(int *)(param_1 + 0x30) = iVar5 + -1;
        if (puVar6 != (undefined8 *)0x0) {
          LOCK();
          cVar2 = *pcVar1;
          if (cVar2 == '\x01') {
            *pcVar1 = '\0';
          }
          UNLOCK();
          if (cVar2 != '\x01') {
            FUN_14008cdb0(pcVar1);
          }
          goto LAB_1403f65f6;
        }
        break;
      }
      iVar9 = iVar9 + 1;
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *(undefined4 *)(puVar6 + 1) = 0xffffffff;
  *(undefined2 *)((longlong)puVar6 + 0xc) = 0x105;
  *(undefined1 *)((longlong)puVar6 + 0xe) = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  *puVar6 = &PTR_FUN_14a388110;
  uVar11 = uVar10 + 0xffff & 0xffff0000;
  uVar10 = 0x10000;
  if (0x10000 < uVar11) {
    uVar10 = uVar11;
  }
  *(uint *)(puVar6 + 4) = uVar10;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  *(int *)(puVar6 + 5) = param_4;
  puVar6[6] = 0;
  iVar5 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar5 + 1U) {
    FUN_1403f635c((longlong *)(param_1 + 0x18),iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x18) + (longlong)iVar5 * 8) = puVar6;
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
  FUN_14006bf18(puVar6,param_2);
  LOCK();
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(puVar6 + 4);
  UNLOCK();
LAB_1403f65f6:
  uVar3 = *(undefined4 *)(puVar6 + 4);
  uVar7 = puVar6[2];
  cVar2 = *(char *)(param_2 + 0x69);
  if (cVar2 == '\0') {
    FUN_14002049c(param_2,1);
  }
  uVar7 = (**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,uVar7,0,uVar3,1);
  if (cVar2 == '\0') {
    FUN_14002049c(param_2,0);
  }
  puVar6[3] = uVar7;
  puVar6[6] = DAT_14c867d10;
  return puVar6;
}



// FUNCTION 1403f66d6 FUN_1403f66d6 body=15 status=ok
// SIG undefined FUN_1403f66d6(void)

void FUN_1403f66d6(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 1403f66e6 FUN_1403f66e6 body=697 status=ok
// SIG undefined FUN_1403f66e6(void)

void FUN_1403f66e6(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,double *param_6,undefined4 param_7,char param_8)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  ulonglong local_80;
  code *pcVar5;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_3;
  plVar4 = (longlong *)FUN_14485b2b4(*(undefined8 *)(param_2 + 0x30),param_7);
  if (*(code **)(*plVar4 + 0x270) == (code *)&LAB_1447f82f4) {
    plVar7 = (longlong *)plVar4[9];
    if (plVar7 == (longlong *)0x0) {
      plVar4 = (longlong *)plVar4[8];
      pcVar5 = *(code **)(*plVar4 + 0x408);
      if (pcVar5 == (code *)&LAB_14470b702) {
        bVar2 = *(byte *)((longlong)plVar4 + 0x129);
        if (bVar2 == 1) {
          bVar2 = ~*(byte *)((longlong)plVar4 + 0x1d6) & 1;
        }
        uVar3 = (uint)bVar2;
        goto LAB_1403f67ae;
      }
    }
    else {
      pcVar5 = *(code **)(*plVar7 + 0x408);
      if (pcVar5 == (code *)&LAB_14497e176) {
        uVar3 = (uint)*(byte *)(plVar7 + 0x2b);
        goto LAB_1403f67ae;
      }
    }
    uVar3 = (*pcVar5)();
  }
  else {
    uVar3 = (**(code **)(*plVar4 + 0x270))(plVar4);
  }
LAB_1403f67ae:
  plVar4 = *(longlong **)(param_2 + 0x48);
  local_98 = param_4;
  if ((uVar3 < 2) || (lVar1 = plVar4[0x14], (longlong)(int)lVar1 == 0)) {
    local_88 = (undefined4)plVar4[1];
    local_90 = *plVar4;
    local_a8 = 0;
    param_4 = FUN_143ab8ca2(param_4,param_1,local_a0);
  }
  else {
    plVar7 = plVar4 + 8;
    if ((longlong *)plVar4[0x13] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar4[0x13];
    }
    lVar6 = 0;
    do {
      local_90 = (longlong)*(int *)((longlong)plVar7 + lVar6 + 0x30) * 4 +
                 **(longlong **)(param_2 + 0x48);
      local_88 = *(undefined4 *)((longlong)plVar7 + lVar6 + 0x34);
      dVar8 = (*(double *)((longlong)plVar7 + lVar6 + 0x10) - param_6[2]) *
              *(double *)(param_5 + 0xa00) +
              (*(double *)((longlong)plVar7 + lVar6) - *param_6) * *(double *)(param_5 + 0x9c0) +
              (*(double *)((longlong)plVar7 + lVar6 + 8) - param_6[1]) *
              *(double *)(param_5 + 0x9e0);
      dVar9 = (*(double *)((longlong)plVar7 + lVar6 + 0x28) - param_6[2]) *
              *(double *)(param_5 + 0xa00) +
              (*(double *)((longlong)plVar7 + lVar6 + 0x18) - *param_6) *
              *(double *)(param_5 + 0x9c0) +
              (*(double *)((longlong)plVar7 + lVar6 + 0x20) - param_6[1]) *
              *(double *)(param_5 + 0x9e0);
      if ((param_8 != '\x01') || (local_a8 = true, dVar8 < dVar9)) {
        local_a8 = dVar8 < dVar9 && param_8 == '\0';
      }
      param_4 = FUN_143ab8ca2(param_4,param_1,local_a0,&local_90);
      lVar6 = lVar6 + 0x58;
    } while ((longlong)(int)lVar1 * 0x58 - lVar6 != 0);
  }
  *(int *)(param_1 + 0x2c) = (int)(((ulonglong)(param_4 - local_98) >> 2 & 0xffffffff) / 3);
  if ((local_80 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403f69a8 FUN_1403f69a8 body=75 status=ok
// SIG undefined FUN_1403f69a8(void)

undefined8 FUN_1403f69a8(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  if ((byte *)*param_2 == (byte *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(byte *)*param_2 & 3) != 0;
  }
  *(bool *)(param_1 + 0x18) = bVar2;
  uVar1 = FUN_14019f430();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  FUN_140aa4c80(param_1,param_2);
  return 1;
}



// FUNCTION 1403f69f4 FUN_1403f69f4 body=2130 status=ok
// SIG undefined FUN_1403f69f4(void)

undefined8 FUN_1403f69f4(longlong param_1,ulonglong param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  ulonglong uVar28;
  undefined1 auStack_c8 [40];
  uint *local_a0;
  longlong local_98 [2];
  longlong local_88;
  undefined8 uStack_80;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    uVar10 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    lVar14 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x88);
    }
    iVar25 = *(int *)(lVar14 + (ulonglong)
                               (*(int *)(param_1 + 0x90) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
    if (iVar25 != -1) {
      do {
        lVar14 = *plVar1 + (longlong)iVar25 * 0x20;
        if (*(ulonglong *)(*plVar1 + (longlong)iVar25 * 0x20) == param_2) {
          if (lVar14 != 0) goto LAB_1403f6b94;
          break;
        }
        iVar25 = *(int *)(lVar14 + 0x18);
      } while (iVar25 != -1);
    }
  }
  iVar25 = *(int *)(param_2 + 0x48);
  bVar9 = FUN_1409671e2(param_2);
  uVar10 = iVar25 - (uint)bVar9;
  local_88 = 0;
  uStack_80 = 0;
  if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar10);
  }
  if (uVar10 != 0) {
    FUN_1403f7248(&local_88,uVar10);
    local_a0 = (uint *)(ulonglong)uVar10;
    iVar25 = 0;
    puVar26 = (uint *)0x0;
    do {
      FUN_1401cfad2(param_2,local_98,puVar26);
      FUN_14000bbd8(local_70,local_98,0);
      if (local_98[0] != 0) {
        FUN_1400020a8();
      }
      uVar13 = FUN_1448fdc6e(local_70);
      uVar17 = uStack_80;
      iVar27 = (int)uStack_80;
      uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_80 + 1);
      if (uStack_80._4_4_ == iVar27) {
        FUN_1488d2e8c(&local_88,uVar17 & 0xffffffff);
      }
      memmove((void *)(local_88 + (longlong)puVar26 * 8 + 8),
              (void *)(local_88 + (longlong)puVar26 * 8),(ulonglong)(uint)(iVar27 + iVar25) << 3);
      *(undefined8 *)(local_88 + (longlong)puVar26 * 8) = uVar13;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      puVar26 = (uint *)((longlong)puVar26 + 1);
      iVar25 = iVar25 + -1;
    } while (local_a0 != puVar26);
  }
  if (*(int *)(param_1 + 0x7c) == 0) {
    iVar25 = *(int *)(param_1 + 0x50);
    *(int *)(param_1 + 0x50) = iVar25 + 1;
    if (*(int *)(param_1 + 0x54) == iVar25) {
      FUN_1447711aa(plVar1,iVar25);
    }
    iVar27 = *(int *)(param_1 + 0x70);
    if (iVar27 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar11 = iVar27 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    lVar24 = param_1 + 0x58;
    iVar15 = iVar27 + 1;
    iVar19 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar19 = iVar27;
    }
    if (iVar19 >> 5 == iVar11) {
      *(int *)(param_1 + 0x70) = iVar15;
    }
    else {
      if (*(int *)(param_1 + 0x74) <= iVar27) {
        uVar10 = iVar27 + 0x20;
        local_a0 = (uint *)(ulonglong)uVar10;
        if (uVar10 < 0xa0) {
          iVar15 = 0x80;
          iVar11 = iVar27;
        }
        else {
          uVar10 = uVar10 >> 5;
          local_a0 = (uint *)(ulonglong)uVar10;
          if (*(int *)(param_1 + 0x74) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar10) {
              uVar12 = uVar10;
            }
          }
          else {
            uVar12 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar17 = FUN_144a3809e(uVar12 << 2,0);
          iVar11 = (int)(uVar17 >> 2);
          iVar15 = -0x20;
          if ((int)local_a0 <= iVar11) {
            iVar15 = iVar11 << 5;
          }
          iVar11 = *(int *)(param_1 + 0x70);
        }
        *(int *)(param_1 + 0x74) = iVar15;
        FUN_1446efbd8(lVar24,iVar11);
        iVar15 = *(int *)(param_1 + 0x70) + 1;
      }
      iVar11 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar11 = iVar15;
      }
      *(int *)(param_1 + 0x70) = iVar15;
      if (iVar15 % 0x20 != 0) {
        lVar14 = *(longlong *)(param_1 + 0x68);
        if (*(longlong *)(param_1 + 0x68) == 0) {
          lVar14 = lVar24;
        }
        bVar9 = -(char)(iVar15 % 0x20);
        *(uint *)(lVar14 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)(lVar14 + (longlong)(iVar11 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar25;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar24 = *(longlong *)(param_1 + 0x68);
    }
    bVar9 = (byte)iVar27 & 0x1f;
    puVar26 = (uint *)(lVar24 + (longlong)(iVar19 >> 5) * 4);
    *puVar26 = *puVar26 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar25 = *(int *)(param_1 + 0x78);
    lVar14 = (longlong)iVar25;
    iVar27 = *(int *)(*(longlong *)(param_1 + 0x48) + 4 + lVar14 * 0x20);
    *(int *)(param_1 + 0x78) = iVar27;
    iVar11 = *(int *)(param_1 + 0x7c) + -1;
    *(int *)(param_1 + 0x7c) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar27 * 0x20) = 0xffffffff;
    }
  }
  puVar26 = (uint *)(param_1 + 0x58);
  puVar16 = *(uint **)(param_1 + 0x68);
  if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
    puVar16 = puVar26;
  }
  iVar27 = iVar25 + 0x1f;
  if (-1 < iVar25) {
    iVar27 = iVar25;
  }
  puVar16[iVar27 >> 5] = puVar16[iVar27 >> 5] | 1 << ((byte)iVar25 & 0x1f);
  uVar10 = 1;
  lVar24 = *(longlong *)(param_1 + 0x48);
  lVar14 = lVar14 * 0x20;
  puVar3 = (undefined4 *)(lVar24 + lVar14);
  *(ulonglong *)(lVar24 + lVar14) = param_2;
  *(longlong *)(lVar24 + 8 + lVar14) = local_88;
  local_88 = 0;
  *(int *)(lVar24 + 0x10 + lVar14) = (int)uStack_80;
  *(int *)(lVar24 + 0x14 + lVar14) = uStack_80._4_4_;
  uStack_80 = 0;
  *(undefined4 *)(lVar24 + 0x18 + lVar14) = 0xffffffff;
  uVar17 = *(ulonglong *)(lVar24 + lVar14);
  uVar12 = ((uint)(uVar17 >> 0x14) & 0xffff ^ (uint)(uVar17 >> 4)) * -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  uVar12 = uVar12 >> 0x10 ^ uVar12;
  uVar18 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x7c);
  if ((uVar18 != 0) && (uVar18 != 1)) {
    lVar14 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar14 = *(longlong *)(param_1 + 0x88);
    }
    iVar27 = *(int *)(lVar14 + (ulonglong)(*(int *)(param_1 + 0x90) - 1U & uVar12) * 4);
    if (iVar27 != -1) {
      do {
        puVar4 = (undefined4 *)(*plVar1 + (longlong)iVar27 * 0x20);
        if (*(ulonglong *)(*plVar1 + (longlong)iVar27 * 0x20) == uVar17) {
          if (*(longlong *)(puVar4 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          uVar7 = puVar3[2];
          uVar8 = puVar3[3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *puVar4 = uVar5;
          puVar4[1] = uVar6;
          puVar4[2] = uVar7;
          puVar4[3] = uVar8;
          FUN_1488d2f12(plVar1,iVar25);
          iVar25 = iVar27;
          goto LAB_1403f6dd0;
        }
        iVar27 = puVar4[6];
      } while (iVar27 != -1);
    }
  }
  if (3 < uVar18) {
    uVar17 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar17 != 0) {
      for (; uVar17 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar18 < 1) || ((int)uVar10 <= *(int *)(param_1 + 0x90))) {
    uVar12 = *(int *)(param_1 + 0x90) - 1U & uVar12;
    puVar3[7] = uVar12;
    lVar14 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar14 = param_1 + 0x80;
    }
    puVar3[6] = *(undefined4 *)
                 (lVar14 + ((longlong)*(int *)(param_1 + 0x90) - 1U & (longlong)(int)uVar12) * 4);
    lVar14 = *(longlong *)(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      lVar14 = param_1 + 0x80;
    }
    *(int *)(lVar14 + ((longlong)*(int *)(param_1 + 0x90) - 1U & (longlong)(int)uVar12) * 4) =
         iVar25;
    goto LAB_1403f6dd0;
  }
  *(uint *)(param_1 + 0x90) = uVar10;
  plVar2 = (longlong *)(param_1 + 0x88);
  local_a0 = puVar26;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1446efa72(plVar2,0,0,4);
    uVar10 = *(uint *)(param_1 + 0x90);
  }
  lVar14 = param_1 + 0x80;
  if (uVar10 == 1) {
    if (*plVar2 != 0) {
      FUN_1446efa72(plVar2,0,0,4);
    }
LAB_1403f6e82:
    uVar12 = 0;
    do {
      lVar24 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar24 = lVar14;
      }
      *(undefined4 *)(lVar24 + (ulonglong)(*(int *)(param_1 + 0x90) + 0x7fffffffU & uVar12) * 4) =
           0xffffffff;
      uVar12 = uVar12 + 1;
    } while (uVar10 != uVar12);
  }
  else {
    if (uVar10 == 0) goto LAB_1403f6dd0;
    FUN_1446efa72(plVar2,0,uVar10,4);
    if (0 < (int)uVar10) goto LAB_1403f6e82;
  }
  iVar27 = *(int *)(param_1 + 0x70);
  if (iVar27 == 0) {
    uVar17 = 0;
    uVar21 = 1;
    iVar11 = 0;
    iVar15 = 0;
  }
  else {
    puVar26 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar26 = local_a0;
    }
    uVar10 = *puVar26;
    if (uVar10 == 0) {
      iVar11 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar11 = iVar27 + -1;
      }
      uVar17 = 0;
      uVar21 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar21 = uVar17;
      }
      iVar15 = 0;
      do {
        if (uVar21 == uVar17) goto LAB_1403f6dd0;
        iVar15 = iVar15 + 0x20;
        uVar10 = puVar26[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar17 = 0;
      iVar15 = 0;
    }
    uVar21 = (ulonglong)(-uVar10 & uVar10);
    uVar28 = uVar21 * 2 + 1;
    lVar24 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar11 = (iVar15 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    if (iVar27 <= iVar11) {
      iVar11 = iVar27;
    }
  }
  if (iVar11 < iVar27) {
    uVar10 = 0xffffffff;
    do {
      lVar24 = *(longlong *)(param_1 + 0x48);
      lVar23 = (longlong)iVar11 * 0x20;
      uVar12 = ((uint)(*(ulonglong *)(lVar24 + lVar23) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar24 + lVar23) >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar28 = (longlong)(int)(uVar12 >> 0x10 ^ uVar12) & (longlong)*(int *)(param_1 + 0x90) - 1U;
      iVar27 = (int)uVar28;
      *(int *)(lVar24 + 0x1c + lVar23) = iVar27;
      lVar22 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar22 = lVar14;
      }
      *(undefined4 *)(lVar24 + 0x18 + lVar23) =
           *(undefined4 *)(lVar22 + ((longlong)*(int *)(param_1 + 0x90) - 1U & uVar28) * 4);
      lVar24 = *(longlong *)(param_1 + 0x88);
      if (*(longlong *)(param_1 + 0x88) == 0) {
        lVar24 = lVar14;
      }
      *(int *)(lVar24 + ((longlong)iVar27 & (longlong)*(int *)(param_1 + 0x90) - 1U) * 4) = iVar11;
      uVar10 = ~(uint)uVar21 & uVar10;
      puVar26 = *(uint **)(param_1 + 0x68);
      if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
        puVar26 = local_a0;
      }
      iVar27 = *(int *)(param_1 + 0x70);
      iVar11 = (int)uVar17;
      lVar24 = (longlong)iVar11;
      uVar12 = puVar26[lVar24] & uVar10;
      if (uVar12 == 0) {
        iVar19 = iVar27 + 0x1e;
        if (-1 < iVar27 + -1) {
          iVar19 = iVar27 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar20 = iVar19;
        if (iVar19 < iVar11) {
          iVar20 = iVar11;
        }
        if (iVar19 <= iVar11) break;
        lVar22 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar12 = puVar26[lVar24 + lVar22 + 1];
          if (uVar12 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar20 - lVar24 == lVar22) goto LAB_1403f6dd0;
        }
        uVar17 = (ulonglong)(iVar11 + (int)lVar22 + 1);
        uVar10 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar12 & uVar12);
      uVar28 = uVar21 * 2 + 1;
      lVar24 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      iVar11 = (iVar15 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar27);
  }
LAB_1403f6dd0:
  lVar14 = *plVar1;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  lVar14 = lVar14 + (longlong)iVar25 * 0x20;
LAB_1403f6b94:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return *(undefined8 *)(*(longlong *)(lVar14 + 8) + (longlong)param_3 * 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f7248 FUN_1403f7248 body=304 status=ok
// SIG undefined FUN_1403f7248(void)

void FUN_1403f7248(longlong param_1,uint param_2)

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
            if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1403f72a9;
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
LAB_1403f72a9:
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



// FUNCTION 1403f7378 FUN_1403f7378 body=156 status=ok
// SIG undefined FUN_1403f7378(void)

void FUN_1403f7378(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  FUN_1403f746c();
  if ((((*(longlong *)(*(longlong *)(param_1 + 0x230) + 8) != 0) &&
       (cVar5 = FUN_1403f7414(), cVar5 != '\0')) && (*(longlong *)(param_1 + 0x250) != 0)) &&
     ((plVar3 = *(longlong **)(param_1 + 600), plVar3 != (longlong *)0x0 && (0 < (int)plVar3[1]))))
  {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) {
        FUN_140163244(0,2);
        return;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar6 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
    } while (!bVar7);
    FUN_140163244(*(undefined8 *)(param_1 + 0x250),2);
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
                    /* WARNING: Could not recover jumptable at 0x0001403f7410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1403f7414 FUN_1403f7414 body=87 status=ok
// SIG undefined FUN_1403f7414(void)

bool FUN_1403f7414(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0xc0);
  if ((longlong)uVar2 < 1) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
    uVar3 = 0;
    do {
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0xb8) + 0x10 + uVar3 * 0x18);
      if (0 < (int)uVar1) {
        uVar4 = 0;
        do {
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0xb8) + uVar3 * 0x18 + 8) + uVar4 * 8) != 0) {
            return bVar5;
          }
          uVar4 = uVar4 + 1;
        } while (uVar1 != uVar4);
      }
      uVar3 = uVar3 + 1;
      bVar5 = uVar3 < uVar2;
    } while (uVar3 != uVar2);
  }
  return bVar5;
}



// FUNCTION 1403f746c FUN_1403f746c body=1266 status=ok
// SIG undefined FUN_1403f746c(void)

void FUN_1403f746c(undefined8 param_1,byte param_2,byte param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  byte bVar6;
  char cVar7;
  ulonglong uVar8;
  int iVar9;
  DWORD DVar10;
  DWORD DVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined ***pppuVar16;
  uint *puVar17;
  int iVar18;
  ulonglong uVar19;
  undefined8 *puVar20;
  undefined1 auStack_a8 [32];
  undefined1 **local_88;
  undefined1 *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_38;
  
  cVar7 = DAT_14ca964b1;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar6 = DAT_14ca964b1 * '\x02';
  bVar5 = DAT_14cb0bec4 < 1;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar18 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar18 == 2) goto LAB_1403f74cd;
    if (iVar18 != 1) goto LAB_1403f74c8;
    DVar10 = FUN_140ad26c0();
    DVar11 = GetCurrentThreadId();
    if (DVar10 == DVar11) goto LAB_1403f74cd;
  }
  else {
LAB_1403f74c8:
    if (iVar18 == 0x10) goto LAB_1403f74cd;
  }
  if (DAT_14ca9a438 == '\0') {
    if ((DAT_14c86a9f8 != '\x01') || (iVar18 = *(int *)(lVar4 + 0xc60), iVar18 == 2)) {
LAB_1403f74cd:
      DAT_14ca964b2 = cVar7;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_a8);
    }
    if (iVar18 == 1) {
      DVar10 = FUN_140ad26c0();
      DVar11 = GetCurrentThreadId();
      if (DVar10 == DVar11) goto LAB_1403f74cd;
    }
  }
  iVar18 = (uint)(bVar6 | param_2) + (uint)(bVar5 & param_3) * 4;
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar13 = (uint *)*puVar2;
    if (puVar13 != (uint *)0x0) goto LAB_1403f769b;
    while( true ) {
      uVar15 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar15 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar15 | 1;
        __tlregdtor(&LAB_14374dad0);
      }
      lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar12 = *(undefined4 **)(lVar4 + 0x310);
      *(undefined8 *)(lVar4 + 0x310) = 0;
      if (puVar12 == (undefined4 *)0x0) {
        puVar12 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar12 = 0xffffffff;
      *(undefined4 **)(puVar12 + 0x10) = puVar12 + 0x16;
      puVar12[0x12] = 0;
      *puVar2 = puVar12;
      FUN_140217a48(puVar2);
      puVar13 = (uint *)*puVar2;
LAB_1403f769b:
      puVar20 = (undefined8 *)(*(longlong *)(puVar13 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar17 = (uint *)(puVar20 + 0x17);
      uVar15 = puVar13[0x12];
      if (puVar17 <= puVar13 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x4000;
        LOCK();
        uVar3 = *puVar13;
        *puVar13 = *puVar13 + uVar15 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar15) != 0xffffffff) break;
        puVar13 = (uint *)*puVar2;
        *puVar13 = 0xffffffff;
        *(uint **)(puVar13 + 0x10) = puVar13 + 0x16;
        puVar13[0x12] = 0;
        *puVar2 = puVar13;
        puVar20 = (undefined8 *)((longlong)puVar13 + 0x5fU & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar20 + 0x17);
        uVar15 = 0;
        if (puVar17 <= puVar13 + 0x4000) {
          uVar15 = 1;
          goto LAB_1403f771b;
        }
      }
    }
    uVar15 = uVar15 + 1;
LAB_1403f771b:
    *(uint **)(puVar13 + 0x10) = puVar17;
    puVar13[0x12] = uVar15;
    iVar9 = 0;
    FUN_1447247dc(puVar20,0);
    *puVar20 = &PTR_FUN_14aae0640;
    puVar20[0x15] = param_1;
    *(int *)(puVar20 + 0x16) = iVar18;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar15 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar15 < 2) {
        uVar19 = (ulonglong)(byte)(&DAT_149e38edc)[uVar15];
        iVar9 = 0;
      }
      else {
        uVar19 = 2;
      }
    }
    else {
      iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
              *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar19 = 5;
    }
    if (*(code **)(puVar20[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar20[0xe] + 0x18))(puVar20 + 0xe,puVar20 + 9);
    }
    puVar20[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar20[9] = puVar20;
    puVar20[10] = puVar20;
    lVar4 = *(longlong *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8
             );
    if (lVar4 == 0) {
      uVar8 = 1;
      if ((char)uVar19 != '\x06') {
        uVar8 = uVar19;
      }
      uVar19 = uVar8;
      uVar14 = 0;
    }
    else {
      if ((char)uVar19 == '\x06') {
        uVar19 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
      }
      uVar14 = *(undefined8 *)(lVar4 + 0x30);
    }
    puVar20[0xf] = uVar14;
    puVar20[0x10] = uVar19 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar20 + 0x1c) = iVar9;
    if (puVar20 == (undefined8 *)0x0) {
      local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(0);
    }
    else {
      LOCK();
      *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
      UNLOCK();
      local_78[0] = (undefined1 *)CONCAT71(local_78[0]._1_7_,1);
      FUN_1447439e4(puVar20);
      LOCK();
      piVar1 = (int *)(puVar20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
  }
  else {
    local_88 = local_78;
    local_68 = (undefined ***)0x0;
    local_58 = &PTR_LAB_14aae0620;
    local_78[0] = &LAB_1437513b4;
    local_50 = param_1;
    local_48 = iVar18;
    FUN_14005a792(&DAT_14ca9a440,L"EndDrawingCommand",&DAT_14cb0ca5c);
    if (local_78[0] != (undefined1 *)0x0) {
      pppuVar16 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar16 = &local_58;
      }
      (*(code *)(*pppuVar16)[2])();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f797e FUN_1403f797e body=268 status=ok
// SIG undefined FUN_1403f797e(void)

void FUN_1403f797e(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x40);
  if ((lVar5 != 0) && (1 < *(byte *)(lVar5 + 0x90))) {
    lVar6 = *(longlong *)(lVar5 + 0x10);
    *(undefined4 *)(lVar5 + 0x1a0) = param_2;
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
                    /* WARNING: Could not recover jumptable at 0x0001403f79f9. Too many branches */
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



// FUNCTION 1403f7a8a FUN_1403f7a8a body=231 status=ok
// SIG undefined FUN_1403f7a8a(void)

void FUN_1403f7a8a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  undefined1 local_168 [312];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (0 < (int)plVar4[1]) {
    FUN_1403f85a2(param_1,local_168);
    uVar6 = (ulonglong)(int)plVar4[1];
    if (0 < (longlong)uVar6) {
      iVar7 = -(int)plVar4[1];
      lVar8 = uVar6 * 0x38;
      do {
        lVar8 = lVar8 + -0x38;
        lVar1 = *plVar4;
        lVar2 = *(longlong *)(lVar1 + 0x10 + lVar8);
        if ((lVar2 == 0) || (uVar5 = *(uint *)(lVar2 + 8), (uVar5 >> 0x1e & 1) != 0)) {
          uVar5 = *(uint *)(plVar4 + 1);
          if (uVar6 != uVar5) {
            memmove((void *)(lVar1 + lVar8),(void *)(lVar1 + lVar8 + 0x38),
                    (longlong)(int)(uVar5 + iVar7) * 0x38);
            uVar5 = *(uint *)(plVar4 + 1);
          }
          *(uint *)(plVar4 + 1) = uVar5 - 1;
        }
        else {
          FUN_1403f7dfa(uVar5,(void *)(lVar1 + lVar8),local_168);
        }
        iVar7 = iVar7 + 1;
        bVar3 = 1 < uVar6;
        uVar6 = uVar6 - 1;
      } while (bVar3);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f7b72 FUN_1403f7b72 body=646 status=ok
// SIG undefined FUN_1403f7b72(void)

void FUN_1403f7b72(longlong *param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_128 [32];
  ulonglong *local_108;
  ulonglong local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8 [12];
  undefined1 local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar5 = (**(code **)(*param_1 + 0x20))();
  bVar3 = (**(code **)(*param_1 + 0x40))();
  local_f8 = 0;
  uStack_f0 = 0;
  if ((longlong)*(int *)(lVar5 + 0x18) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x10);
    lVar9 = (longlong)*(int *)(lVar5 + 0x18) * 0x38;
    do {
      lVar7 = *plVar8;
      if ((lVar7 == 0) || (plVar8[1] == 0)) {
LAB_1403f7d2f:
        uVar6 = uStack_f0;
        lVar7 = (longlong)(int)uStack_f0;
        uVar4 = (int)uStack_f0 + 1;
        uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar4);
        if (uStack_f0._4_4_ < uVar4) {
          FUN_1488591ec(&local_f8,uVar6 & 0xffffffff);
        }
        FUN_148859392(lVar7 * 0x38 + local_f8,plVar8);
      }
      else {
        if (*(char *)(lVar7 + 0x3c) == '\x01') {
          if (*(char *)(lVar7 + 0x44) == '\x01') {
            fVar11 = *(float *)((longlong)plVar8 + 0x24);
            fVar1 = *(float *)(lVar7 + 0x48);
            fVar10 = (float)(**(code **)(*param_1 + 0x48))();
            lVar7 = *plVar8;
            if (fVar10 <= fVar11 + fVar1) goto LAB_1403f7c52;
          }
          *(float *)(plVar8 + 4) = *(float *)(lVar7 + 0x40) * param_2 + *(float *)(plVar8 + 4);
          bVar2 = true;
        }
        else {
LAB_1403f7c52:
          bVar2 = false;
        }
        fVar11 = *(float *)(plVar8 + 4);
        fVar1 = *(float *)(lVar7 + 0x30);
        if ((((fVar11 < fVar1) && (*(char *)(lVar7 + 0x38) != '\0')) ||
            ((fVar10 = *(float *)(lVar7 + 0x34), fVar10 < fVar11 &&
             (*(char *)(lVar7 + 0x39) == '\x01')))) || ((*(byte *)(lVar7 + 0x3a) & bVar3) == 1)) {
          if (*(char *)(lVar7 + 0x3b) == '\x01') {
            FUN_14107e4c6(param_1,plVar8[1],plVar8[2],0);
          }
          goto LAB_1403f7d2f;
        }
        if (bVar2) {
          if (fVar10 <= fVar11) {
            fVar11 = fVar10;
          }
          if (fVar11 <= fVar1) {
            fVar11 = fVar1;
          }
          *(float *)(plVar8 + 4) = fVar11;
          if (plVar8[5] == 0) {
            local_108 = (ulonglong *)CONCAT44(local_108._4_4_,fVar11);
            FUN_140aaa4f8(param_1,plVar8[1],plVar8[2]);
          }
          else {
            local_88 = 2;
            local_84 = 0xffffffff;
            local_e8[0] = local_e8[0] & 0xffffffffffffff00;
            local_e8[9] = 0;
            local_e8[10] = 0;
            local_e8[7] = 0;
            local_e8[8] = 0;
            local_e8[5] = 0;
            local_e8[6] = 0;
            local_e8[3] = 0;
            local_e8[4] = 0;
            local_e8[1] = 0;
            local_e8[2] = 0;
            local_108 = local_e8;
            local_e8[0xb] = plVar8[3];
            FUN_140042bb4(plVar8[5],local_e8 + 0xb);
          }
        }
      }
      plVar8 = plVar8 + 7;
      lVar9 = lVar9 + -0x38;
    } while (lVar9 != 0);
    if ((longlong)(int)uStack_f0 != 0) {
      lVar9 = (longlong)(int)uStack_f0 * 0x38;
      uVar6 = local_f8;
      do {
        local_e8[0] = uVar6;
        FUN_14885927c(lVar5 + 0x10,local_e8);
        uVar6 = uVar6 + 0x38;
        lVar9 = lVar9 + -0x38;
      } while (lVar9 != 0);
    }
    if (local_f8 != 0) {
      FUN_1400020a8(local_f8);
    }
  }
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403f7dfa FUN_1403f7dfa body=1845 status=ok
// SIG undefined FUN_1403f7dfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403f7dfa(undefined8 param_1,longlong param_2,int *param_3)

{
  float fVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 (*pauVar14) [16];
  byte bVar15;
  undefined8 unaff_RBP;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  float fVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar47;
  undefined1 auStack_148 [32];
  double *local_128;
  undefined1 local_120;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(longlong *)(param_2 + 0x10) == 0) goto LAB_1403f8301;
  bVar2 = *(byte *)(param_2 + 0x2d);
  if ((((bVar2 & 4) == 0) || (bVar15 = 1, (char)param_3[0x1e] == '\0')) &&
     (((bVar2 & 0x10) == 0 || (bVar15 = 1, *(char *)((longlong)param_3 + 0x7a) == '\0')))) {
    if ((bVar2 & 8) == 0) {
      bVar15 = 0;
    }
    else {
      bVar15 = *(byte *)((longlong)param_3 + 0x79);
    }
  }
  if ((((bVar2 & 0x20) != 0) && ((*(byte *)(param_3 + 0x48) & 2) != 0)) ||
     (((bVar2 & 0x40) != 0 && ((*(byte *)(param_3 + 0x48) & 1) != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_148);
  }
  bVar15 = *(byte *)((longlong)param_3 + 0x7b) | bVar15;
  FUN_1449e3cec(*(longlong *)(param_2 + 0x10),
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),bVar15) & 0xffffff01,1);
  if ((bVar15 & 1) != 0) goto LAB_1403f8301;
  dVar44 = *(double *)(param_2 + 0x18);
  dVar21 = *(double *)(param_2 + 0x20);
  cVar3 = *(char *)(param_2 + 0x2c);
  fVar28 = 1.0;
  dVar23 = 1.0;
  dVar22 = 1.0;
  if (cVar3 != '\x05') {
    fVar38 = *(float *)(param_2 + 0x28) * (float)param_3[3];
    fVar1 = (float)param_3[4];
    if (param_3[2] == 1 || param_3[2] == 2 && param_3[1] < *param_3) {
      fVar39 = fVar38 / fVar1;
    }
    else {
      fVar39 = fVar38;
      fVar38 = fVar38 * fVar1;
    }
    fVar32 = (float)(dVar44 / dVar21);
    fVar34 = (float)((double)fVar38 / dVar44);
    fVar38 = (float)((double)fVar39 / dVar21);
    switch(cVar3) {
    default:
switchD_1403f8013_caseD_1:
      if (cVar3 == '\x03') {
        fVar38 = (float)(~-(uint)(fVar1 < fVar32) & (uint)fVar38 |
                        (uint)fVar34 & -(uint)(fVar1 < fVar32));
      }
      dVar22 = 1.0;
      dVar23 = 1.0;
      fVar28 = fVar38;
      break;
    case '\x02':
      if (fVar1 <= fVar32) goto switchD_1403f8013_caseD_1;
    case '\0':
      dVar22 = dVar23;
      dVar23 = 1.0;
      fVar28 = fVar34;
      break;
    case '\x04':
      dVar22 = (double)fVar34;
      dVar23 = (double)fVar38;
      break;
    case '\x06':
      if (fVar1 <= fVar32) {
        dVar22 = (double)fVar34;
        dVar23 = (double)fVar38 * (double)(fVar1 / fVar32);
      }
      else {
        dVar22 = (double)fVar34 * (double)(fVar32 / fVar1);
        dVar23 = (double)fVar38;
      }
    }
  }
  dVar47 = (double)fVar28;
  dVar16 = dVar21 * *(double *)(param_3 + 0x26) * dVar23 * dVar47 * 0.5;
  dVar43 = dVar44 * *(double *)(param_3 + 0x24) * dVar22 * dVar47 * 0.5;
  dVar6 = *(double *)(param_3 + 0x28);
  dVar7 = *(double *)(param_3 + 0x2a);
  dVar8 = *(double *)(param_3 + 0x30);
  dVar9 = *(double *)(param_3 + 0x32);
  dVar10 = *(double *)(param_3 + 0x38);
  dVar11 = *(double *)(param_3 + 0x3a);
  dVar12 = *(double *)(param_3 + 0x40);
  dVar13 = *(double *)(param_3 + 0x42);
  dVar44 = *(double *)(param_3 + 0x44);
  dVar21 = *(double *)(param_3 + 0x3c);
  dVar24 = *(double *)(param_3 + 0x34);
  dVar40 = *(double *)(param_3 + 0x2c);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  dVar17 = (double)FUN_144719204(*(undefined8 *)(param_3 + 0x12));
  dVar18 = (double)FUN_144719204(*(undefined8 *)(param_3 + 0x14));
  dVar19 = sin(dVar17 * 0.017453292519943295);
  dVar17 = cos(dVar17 * 0.017453292519943295);
  dVar20 = sin(dVar18 * 0.017453292519943295);
  dVar18 = cos(dVar18 * 0.017453292519943295);
  dVar29 = (double)*(float *)(param_2 + 0x28);
  local_e8 = dVar19 * dVar29 + *(double *)(param_3 + 0x10) +
             dVar43 * dVar40 + dVar16 * dVar24 + dVar21 * 0.0 + dVar44 * 0.0;
  dStack_f0 = dVar20 * dVar17 * dVar29 + *(double *)(param_3 + 0xe) +
              dVar13 * 0.0 + dVar11 * 0.0 + dVar16 * dVar9 + dVar43 * dVar7;
  local_f8 = dVar18 * dVar17 * dVar29 + *(double *)(param_3 + 0xc) +
             dVar12 * 0.0 + dVar10 * 0.0 + dVar16 * dVar8 + dVar43 * dVar6;
  FUN_1412f6616(uVar4,&local_f8,param_3 + 6);
  local_108 = dVar23 * dVar47;
  local_110 = dVar22 * dVar47;
  local_100 = dVar47;
  FUN_141226a1c(*(undefined8 *)(param_2 + 0x10));
  lVar5 = *(longlong *)(param_2 + 0x10);
  if ((*(byte *)(lVar5 + 0x1f8) & 1) == 0) {
    auVar25 = *(undefined1 (*) [16])(lVar5 + 0x1b0);
    dVar21 = auVar25._0_8_;
    dVar22 = auVar25._8_8_;
    dVar44 = *(double *)(lVar5 + 0x1c0);
    pauVar14 = *(undefined1 (**) [16])(lVar5 + 0x230);
    if (pauVar14 == (undefined1 (*) [16])0x0) {
      pauVar14 = (undefined1 (*) [16])FUN_14001cc68(0x40,0x10);
      uVar4 = DAT_14c8463d8;
      *(undefined8 *)*pauVar14 = DAT_14c8463d0;
      *(undefined8 *)(*pauVar14 + 8) = uVar4;
      uVar4 = DAT_14c8463e8;
      *(undefined8 *)pauVar14[1] = DAT_14c8463e0;
      *(undefined8 *)(pauVar14[1] + 8) = uVar4;
      uVar4 = DAT_14c846500;
      *(undefined8 *)pauVar14[2] = DAT_14c8464f8;
      *(undefined8 *)(pauVar14[2] + 8) = uVar4;
      *(undefined8 *)pauVar14[3] = DAT_14c846508;
      *(undefined1 (**) [16])(lVar5 + 0x230) = pauVar14;
    }
    auVar31 = _DAT_1499387d0;
    if ((((*(double *)pauVar14[2] != dVar21) || (NAN(*(double *)pauVar14[2]) || NAN(dVar21))) ||
        (*(double *)(pauVar14[2] + 8) != dVar22)) ||
       (((NAN(*(double *)(pauVar14[2] + 8)) || NAN(dVar22) || (*(double *)pauVar14[3] != dVar44)) ||
        (NAN(*(double *)pauVar14[3]) || NAN(dVar44))))) {
      auVar35._8_8_ = 0;
      auVar35._0_8_ = dVar44;
      dVar23 = (double)DAT_1499387d0;
      dVar24 = DAT_1499387d0._8_8_;
      auVar25 = divpd(auVar25,_DAT_1499387d0);
      auVar30 = divpd(auVar35,_DAT_1499387d0);
      auVar25 = roundpd(auVar25,auVar25,3);
      auVar30 = roundpd(auVar30,auVar30,3);
      auVar45._0_8_ = dVar21 - auVar25._0_8_ * dVar23;
      auVar45._8_8_ = dVar22 - auVar25._8_8_ * dVar24;
      auVar36._0_8_ = dVar44 - auVar30._0_8_ * dVar23;
      auVar36._8_8_ = 0.0 - auVar30._8_8_ * dVar24;
      auVar41._0_8_ = auVar45._0_8_ + dVar23;
      auVar41._8_8_ = auVar45._8_8_ + dVar24;
      auVar33._0_8_ = auVar36._0_8_ + dVar23;
      auVar33._8_8_ = auVar36._8_8_ + dVar24;
      auVar30._8_8_ = -(ulonglong)(0.0 <= auVar45._8_8_);
      auVar30._0_8_ = -(ulonglong)(0.0 <= auVar45._0_8_);
      auVar25 = blendvpd(auVar41,auVar45,auVar30);
      auVar42._8_8_ = -(ulonglong)(0.0 <= auVar36._8_8_);
      auVar42._0_8_ = -(ulonglong)(0.0 <= auVar36._0_8_);
      auVar30 = blendvpd(auVar33,auVar36,auVar42);
      auVar37._0_8_ = auVar25._0_8_ + -360.0;
      auVar37._8_8_ = auVar25._8_8_ + -360.0;
      dVar44 = auVar30._8_8_ + 0.0;
      auVar26._8_8_ = -(ulonglong)(180.0 < auVar25._8_8_);
      auVar26._0_8_ = -(ulonglong)(180.0 < auVar25._0_8_);
      auVar42 = blendvpd(auVar25,auVar37,auVar26);
      auVar27._8_8_ = -(ulonglong)(180.0 < auVar30._8_8_);
      auVar27._0_8_ = -(ulonglong)(180.0 < auVar30._0_8_);
      auVar25._8_4_ = SUB84(dVar44,0);
      auVar25._0_8_ = auVar30._0_8_ + -360.0;
      auVar25._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      auVar25 = blendvpd(auVar30,auVar25,auVar27);
      pauVar14[2] = auVar42;
      dVar44 = auVar25._0_8_;
      *(double *)pauVar14[3] = dVar44;
      auVar46._8_8_ = 0;
      auVar46._0_8_ = dVar44;
      auVar25 = divpd(auVar42,auVar31);
      auVar31 = divpd(auVar46,auVar31);
      auVar25 = roundpd(auVar25,auVar25,3);
      auVar31 = roundpd(auVar31,auVar31,3);
      dVar40 = (auVar42._0_8_ - auVar25._0_8_ * dVar23) * 0.008726646259971648;
      dVar43 = (auVar42._8_8_ - auVar25._8_8_ * dVar24) * 0.008726646259971648;
      dVar44 = (dVar44 - auVar31._0_8_ * dVar23) * 0.008726646259971648;
      dVar47 = (0.0 - auVar31._8_8_ * dVar24) * 0.008726646259971648;
      dVar21 = sin(dVar40);
      dVar22 = sin(dVar43);
      dVar23 = sin(dVar44);
      sin(dVar47);
      dVar24 = cos(dVar40);
      dVar40 = cos(dVar43);
      dVar43 = cos(dVar44);
      cos(dVar47);
      dVar44 = -(dVar21 * dVar40 * dVar43) - dVar24 * dVar22 * dVar23;
      auVar31._8_4_ = SUB84(dVar44,0);
      auVar31._0_8_ = dVar21 * dVar22 * dVar43 - dVar24 * dVar40 * dVar23;
      auVar31._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      *pauVar14 = auVar31;
      *(double *)pauVar14[1] = -(dVar40 * dVar21 * dVar23) + dVar22 * dVar24 * dVar43;
      *(double *)(pauVar14[1] + 8) = dVar22 * dVar21 * dVar23 + dVar40 * dVar24 * dVar43;
    }
    local_f8 = *(double *)*pauVar14;
    dStack_f0 = *(double *)(*pauVar14 + 8);
    local_e8 = *(double *)pauVar14[1];
    uStack_e0 = *(undefined8 *)(pauVar14[1] + 8);
    local_120 = 0;
    local_128 = &local_f8;
    FUN_140092404(lVar5,*(undefined8 *)(lVar5 + 0x120),*(undefined8 *)(lVar5 + 0x128),0);
  }
  *(int *)(param_2 + 0x34) = *(int *)(param_2 + 0x34) + 1;
LAB_1403f8301:
  if ((local_d0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f85a2 FUN_1403f85a2 body=2453 status=ok
// SIG undefined FUN_1403f85a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_1403f85a2(longlong *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  double *pdVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_e78 [40];
  double *local_e50;
  int *local_e48;
  int *local_e40;
  int *local_e38;
  double *local_e30;
  undefined1 local_e28 [128];
  undefined1 local_da8 [128];
  undefined1 local_d28 [24];
  double local_d10;
  double local_d08;
  double local_d00;
  longlong local_450;
  longlong local_3c8;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  char local_338;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  double local_238;
  undefined8 local_230;
  double local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  double local_1f8 [16];
  undefined1 local_178 [136];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_e78;
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x50))();
  local_e30 = (double *)(param_2 + 6);
  local_e38 = param_2 + 0xc;
  pdVar10 = (double *)(param_2 + 0x12);
  piVar1 = param_2 + 0x18;
  local_e48 = param_2 + 0x20;
  piVar2 = param_2 + 0x24;
  pdVar12 = (double *)(param_2 + 0x28);
  if (plVar7 == (longlong *)0x0) {
    memset(param_2,0,0x130);
    *(undefined8 *)(param_2 + 10) = DAT_14c846508;
    uVar5 = DAT_14c846500;
    *local_e30 = DAT_14c8464f8;
    *(undefined8 *)(param_2 + 8) = uVar5;
    *(undefined8 *)(param_2 + 0x10) = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8;
    *(undefined8 *)local_e38 = DAT_14c8464e0;
    *(undefined8 *)(param_2 + 0xe) = uVar5;
    *(undefined8 *)(param_2 + 0x16) = DAT_14c846508;
    uVar5 = DAT_14c846500;
    *pdVar10 = DAT_14c8464f8;
    *(undefined8 *)(param_2 + 0x14) = uVar5;
    *(undefined8 *)(param_2 + 0x1c) = DAT_14c8464f0;
    uVar5 = DAT_14c8464e8;
    *(undefined8 *)piVar1 = DAT_14c8464e0;
    *(undefined8 *)(param_2 + 0x1a) = uVar5;
    uVar5 = DAT_14c8463f8;
    *(undefined8 *)local_e48 = DAT_14c8463f0;
    *(undefined8 *)(param_2 + 0x22) = uVar5;
    uVar5 = DAT_14c8463f8;
    *(undefined8 *)piVar2 = DAT_14c8463f0;
    *(undefined8 *)(param_2 + 0x26) = uVar5;
    pdVar10 = (double *)&DAT_14c846400;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *pdVar12 = *pdVar10;
      pdVar10 = pdVar10 + 1;
      pdVar12 = pdVar12 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_e78);
  }
  param_2[4] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)(param_2 + 10) = DAT_14c846508;
  uVar5 = DAT_14c846500;
  *local_e30 = DAT_14c8464f8;
  *(undefined8 *)(param_2 + 8) = uVar5;
  *(undefined8 *)(param_2 + 0x10) = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  *(undefined8 *)local_e38 = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0xe) = uVar5;
  *(undefined8 *)(param_2 + 0x16) = DAT_14c846508;
  uVar5 = DAT_14c846500;
  *pdVar10 = DAT_14c8464f8;
  *(undefined8 *)(param_2 + 0x14) = uVar5;
  *(undefined8 *)(param_2 + 0x1c) = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8;
  *(undefined8 *)piVar1 = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0x1a) = uVar5;
  param_2[0x1e] = 0;
  uVar5 = DAT_14c8463f8;
  *(undefined8 *)local_e48 = DAT_14c8463f0;
  *(undefined8 *)(param_2 + 0x22) = uVar5;
  uVar5 = DAT_14c8463f8;
  *(undefined8 *)piVar2 = DAT_14c8463f0;
  *(undefined8 *)(param_2 + 0x26) = uVar5;
  pdVar9 = (double *)&DAT_14c846400;
  pdVar11 = pdVar12;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pdVar11 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar11 = pdVar11 + 1;
  }
  param_2[0x48] = 0;
  iVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
  param_2[2] = iVar6;
  local_e40 = piVar1;
  (**(code **)(*plVar7 + 0x20))(plVar7,piVar1,pdVar10);
  (**(code **)(*plVar7 + 0x28))(plVar7,param_2);
  (**(code **)(*plVar7 + 0x30))(plVar7,local_d28);
  FUN_1403f8f3e(local_d28,local_178,local_da8);
  dVar14 = cos((local_d08 * 3.1415927410125732) / 180.0);
  dVar15 = sin((local_d08 * 3.1415927410125732) / 180.0);
  dVar16 = sin((local_d08 * 3.1415927410125732) / 180.0);
  local_1f8[0] = cos((local_d08 * 3.1415927410125732) / 180.0);
  local_1f8[2] = 0.0;
  local_1f8[3] = 0.0;
  local_1f8[6] = 0.0;
  local_1f8[7] = 0.0;
  local_1f8[8] = 0.0;
  local_1f8[9] = 0.0;
  local_1f8[10] = 1.0;
  local_1f8[0xb] = 0.0;
  local_1f8[0xc] = 0.0;
  local_1f8[0xd] = 0.0;
  local_1f8[0xe] = 0.0;
  local_1f8[0xf] = 1.0;
  local_e50 = pdVar12;
  local_1f8[1] = -dVar16;
  local_1f8[4] = dVar15;
  local_1f8[5] = dVar14;
  dVar14 = cos((local_d10 * 3.1415927410125732) / 180.0);
  dVar15 = sin((local_d10 * 3.1415927410125732) / 180.0);
  dVar16 = sin((local_d10 * 3.1415927410125732) / 180.0);
  local_278 = cos((local_d10 * 3.1415927410125732) / 180.0);
  dStack_270 = 0.0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0x3ff0000000000000;
  local_248 = 0;
  uStack_240 = 0;
  local_230 = 0;
  local_220 = 0;
  uStack_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_200 = 0x3ff0000000000000;
  local_268 = -dVar16;
  local_238 = dVar15;
  local_228 = dVar14;
  FUN_1447fea8d(local_178,local_1f8);
  dVar14 = cos((local_d00 * 3.1415927410125732) / 180.0);
  dVar15 = sin((local_d00 * 3.1415927410125732) / 180.0);
  dVar16 = sin((local_d00 * 3.1415927410125732) / 180.0);
  local_2d0 = cos((local_d00 * 3.1415927410125732) / 180.0);
  local_2f8 = 0x3ff0000000000000;
  local_2f0 = 0;
  uStack_2e8 = 0;
  local_2e0 = 0;
  uStack_2d8 = 0;
  local_2c0 = 0;
  uStack_2b8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0x3ff0000000000000;
  local_2c8 = dVar16;
  local_2b0 = -dVar15;
  local_2a8 = dVar14;
  FUN_1447fea8d(local_e28,local_178);
  local_1f8[0] = 0.0;
  local_1f8[1] = 0.0;
  local_1f8[2] = 1.0;
  local_1f8[3] = 0.0;
  local_1f8[4] = 1.0;
  local_1f8[5] = 0.0;
  local_1f8[6] = 0.0;
  local_1f8[7] = 0.0;
  local_1f8[8] = 0.0;
  local_1f8[9] = 1.0;
  local_1f8[10] = 0.0;
  local_1f8[0xb] = 0.0;
  local_1f8[0xc] = 0.0;
  local_1f8[0xd] = 0.0;
  local_1f8[0xe] = 0.0;
  local_1f8[0xf] = 1.0;
  FUN_1447fea8d(local_178,local_e28,local_1f8);
  *(undefined8 *)local_e48 = local_3b8;
  *(undefined8 *)(local_e48 + 2) = uStack_3b0;
  *(undefined8 *)piVar2 = local_3a8;
  *(undefined8 *)(param_2 + 0x26) = uStack_3a0;
  FUN_14007522e(local_1f8,local_178);
  pdVar10 = local_1f8;
  pdVar12 = local_e50;
  for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
    *pdVar12 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar12 = pdVar12 + 1;
  }
  if (param_2[1] < 1) {
    fVar13 = 1.778;
  }
  else {
    fVar13 = (float)*param_2 / (float)param_2[1];
  }
  param_2[4] = (int)fVar13;
  fVar13 = (float)(**(code **)(*plVar7 + 0x38))(plVar7,param_2[2]);
  dVar14 = tan((double)(fVar13 * 0.017453292) * 0.5);
  param_2[3] = (int)(float)(dVar14 + dVar14);
  uVar5 = *(undefined8 *)(local_e40 + 2);
  *(undefined8 *)local_e38 = *(undefined8 *)local_e40;
  *(undefined8 *)(local_e38 + 2) = uVar5;
  *(undefined8 *)(local_e38 + 4) = *(undefined8 *)(local_e40 + 4);
  auVar25 = divpd(*(undefined1 (*) [16])(param_2 + 0x12),_DAT_1499387d0);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = *(double *)(param_2 + 0x16);
  auVar26 = divpd(auVar26,_DAT_1499387d0);
  auVar25 = roundpd(auVar25,auVar25,3);
  auVar26 = roundpd(auVar26,auVar26,3);
  dVar14 = (*(double *)*(undefined1 (*) [16])(param_2 + 0x12) -
           auVar25._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar15 = (*(double *)(param_2 + 0x14) - auVar25._8_8_ * DAT_1499387d0._8_8_) *
           0.008726646259971648;
  dVar16 = (*(double *)(param_2 + 0x16) - auVar26._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar3 = (0.0 - auVar26._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar17 = sin(dVar14);
  dVar18 = sin(dVar15);
  dVar19 = sin(dVar16);
  sin(dVar3);
  dVar14 = cos(dVar14);
  dVar15 = cos(dVar15);
  dVar20 = cos(dVar16);
  cos(dVar3);
  dVar16 = -(dVar15 * dVar17 * dVar19) + dVar18 * dVar14 * dVar20;
  dVar3 = dVar18 * dVar17 * dVar19 + dVar15 * dVar14 * dVar20;
  dVar4 = dVar17 * dVar18 * dVar20 - dVar14 * dVar15 * dVar19;
  dVar19 = -(dVar17 * dVar15 * dVar20) - dVar14 * dVar18 * dVar19;
  auVar25 = roundpd(ZEXT816(0x3fd0000000000000) << 0x40,ZEXT816(0x3fd0000000000000) << 0x40,3);
  auVar26 = roundpd(ZEXT816(0xbfd0000000000000),ZEXT816(0xbfd0000000000000),3);
  dVar14 = (0.0 - auVar25._0_8_ * 360.0) * 0.008726646259971648;
  dVar15 = (90.0 - auVar25._8_8_ * 360.0) * 0.008726646259971648;
  dVar17 = (-90.0 - auVar26._0_8_ * 360.0) * 0.008726646259971648;
  dVar18 = (0.0 - auVar26._8_8_ * 360.0) * 0.008726646259971648;
  dVar20 = sin(dVar14);
  dVar21 = sin(dVar15);
  dVar22 = sin(dVar17);
  sin(dVar18);
  dVar23 = cos(dVar14);
  dVar24 = cos(dVar15);
  dVar17 = cos(dVar17);
  cos(dVar18);
  dVar14 = -(dVar24 * dVar20 * dVar22) + dVar21 * dVar23 * dVar17;
  dVar15 = dVar21 * dVar20 * dVar22 + dVar24 * dVar23 * dVar17;
  dVar18 = dVar20 * dVar21 * dVar17 - dVar23 * dVar24 * dVar22;
  dVar17 = -(dVar20 * dVar24 * dVar17) - dVar23 * dVar21 * dVar22;
  local_1f8[0] = dVar17 * dVar16 * -1.0 + dVar14 * dVar19 + dVar4 * dVar15 * 1.0 + dVar3 * dVar18;
  local_1f8[1] = dVar18 * dVar16 * 1.0 + dVar15 * dVar19 + dVar4 * dVar14 * -1.0 + dVar3 * dVar17;
  local_1f8[2] = dVar15 * dVar16 * 1.0 + ((dVar4 * dVar17 * 1.0 + dVar3 * dVar14) - dVar19 * dVar18)
  ;
  local_1f8[3] = dVar14 * dVar16 * -1.0 +
                 ((dVar4 * dVar18 * -1.0 + dVar3 * dVar15) - dVar19 * dVar17);
  FUN_1448052ee(local_1f8,&local_278);
  local_e30[2] = local_268;
  *local_e30 = local_278;
  local_e30[1] = dStack_270;
  (**(code **)(*plVar7 + 0x40))(plVar7,param_2);
  if (local_338 == '\x01') {
    local_338 = '\0';
  }
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  if (local_450 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_e78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f8f3e FUN_1403f8f3e body=1066 status=ok
// SIG undefined FUN_1403f8f3e(void)

double * FUN_1403f8f3e(longlong param_1,double *param_2,double *param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  cVar1 = *(char *)(param_1 + 0xa4);
  if (cVar1 == '\x01') {
    fVar5 = *(float *)(param_1 + 0x78) * 0.5;
    fVar4 = (1.0 / *(float *)(param_1 + 0x94)) * fVar5;
    dVar6 = (double)(1.0 / (*(float *)(param_1 + 0x8c) - *(float *)(param_1 + 0x88)));
    dVar8 = 1.0 / (double)fVar4;
    if ((fVar4 == 0.0) && (!NAN(fVar4))) {
      dVar8 = 1.0;
    }
    dVar7 = -dVar6;
    dVar6 = (double)*(float *)(param_1 + 0x88) * dVar6 + 1.0;
    dVar9 = 1.0 / (double)fVar5;
    if ((fVar5 == 0.0) && (!NAN(fVar5))) {
      dVar9 = 1.0;
    }
    *param_2 = dVar9;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = dVar8;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = dVar7;
    param_2[0xb] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = dVar6;
    param_2[0xf] = 1.0;
    if (param_3 == (double *)0x0) goto LAB_1403f90df;
    *param_3 = dVar9;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = dVar8;
    param_3[6] = 0.0;
    param_3[7] = 0.0;
    param_3[8] = 0.0;
    param_3[9] = 0.0;
    param_3[10] = dVar7;
    param_3[0xb] = 0.0;
    param_3[0xc] = 0.0;
    param_3[0xd] = 0.0;
    param_3[0xe] = dVar6;
    uVar3 = 0x3ff00000;
  }
  else {
    uVar3 = -(uint)(0.0 < *(float *)(param_1 + 0x90));
    fVar4 = *(float *)(param_1 + 0x94);
    fVar5 = 0.001;
    if (0.001 <= *(float *)(param_1 + 0x30)) {
      fVar5 = *(float *)(param_1 + 0x30);
    }
    dVar9 = (double)(float)(~uVar3 & DAT_14c75b140 | (uint)*(float *)(param_1 + 0x90) & uVar3);
    dVar6 = (double)((fVar5 * 3.1415927) / 360.0);
    dVar8 = tan(dVar6);
    dVar6 = tan(dVar6);
    *param_2 = 1.0 / dVar6;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = (double)fVar4 / dVar8;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 0.0;
    param_2[0xb] = 1.0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = dVar9;
    param_2[0xf] = 0.0;
    if (param_3 == (double *)0x0) goto LAB_1403f90df;
    fVar4 = *(float *)(param_1 + 0x94);
    fVar5 = 0.001;
    if (0.001 <= *(float *)(param_1 + 0x68)) {
      fVar5 = *(float *)(param_1 + 0x68);
    }
    dVar6 = (double)((fVar5 * 3.1415927) / 360.0);
    dVar8 = tan(dVar6);
    dVar6 = tan(dVar6);
    *param_3 = 1.0 / dVar6;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_3[3] = 0.0;
    param_3[4] = 0.0;
    param_3[5] = (double)fVar4 / dVar8;
    param_3[6] = 0.0;
    param_3[7] = 0.0;
    param_3[8] = 0.0;
    param_3[9] = 0.0;
    param_3[10] = 0.0;
    param_3[0xb] = 1.0;
    param_3[0xc] = 0.0;
    param_3[0xd] = 0.0;
    param_3[0xe] = dVar9;
    uVar3 = 0;
  }
  param_3[0xf] = (double)((ulonglong)uVar3 << 0x20);
LAB_1403f90df:
  dVar8 = *(double *)(param_1 + 0x970);
  dVar6 = *(double *)(param_1 + 0x978);
  if ((((dVar8 != 0.0) || (NAN(dVar8))) || (dVar6 != 0.0)) || (NAN(dVar6))) {
    fVar5 = (float)(dVar8 + -1.0);
    fVar4 = (float)(dVar6 + -1.0);
    uVar2 = (ulonglong)(cVar1 == '\x01');
    param_2[uVar2 * 4 + 8] = (double)((fVar5 + 2.0 + fVar5) / (fVar5 - (fVar5 + 2.0)));
    param_2[uVar2 * 4 + 9] = (double)((fVar4 + 2.0 + fVar4) / (fVar4 - (fVar4 + 2.0)));
  }
  if (param_3 != (double *)0x0) {
    dVar8 = *(double *)(param_1 + 0x980);
    dVar6 = *(double *)(param_1 + 0x988);
    if (((dVar8 != 0.0) || (NAN(dVar8))) || ((dVar6 != 0.0 || (NAN(dVar6))))) {
      fVar5 = (float)(dVar8 + -1.0);
      fVar4 = (float)(dVar6 + -1.0);
      param_3[8] = (double)((fVar5 + 2.0 + fVar5) / (fVar5 - (fVar5 + 2.0)));
      param_3[9] = (double)((fVar4 + 2.0 + fVar4) / (fVar4 - (fVar4 + 2.0)));
    }
  }
  return param_2;
}



// FUNCTION 1403f9368 FUN_1403f9368 body=144 status=ok
// SIG undefined FUN_1403f9368(void)

void FUN_1403f9368(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1403f93f8(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 * 0x30 + *param_1),0,(ulonglong)uVar2 * 0x30);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (iVar1 <= param_2) {
    return;
  }
  FUN_1481f86ac(param_1,param_2,iVar1 - param_2);
  FUN_1481f8712(param_1);
  return;
}



// FUNCTION 1403f93f8 FUN_1403f93f8 body=272 status=ok
// SIG undefined FUN_1403f93f8(void)

void FUN_1403f93f8(longlong param_1,int param_2)

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



// FUNCTION 1403f9520 FUN_1403f9520 body=347 status=ok
// SIG undefined FUN_1403f9520(void)

void FUN_1403f9520(short *param_1,longlong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  ushort uVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)(int)param_3[1];
  FUN_1403f967c(param_3,4);
  uVar3 = *(ushort *)(param_2 + 0xc);
  uVar2 = (uint)uVar3;
  puVar1 = *(ulonglong **)(param_2 + 0x28);
  if (uVar2 != 0) {
    lVar5 = (ulonglong)uVar3 << 5;
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == *param_1) goto LAB_1403f9571;
      puVar4 = puVar4 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1403f9571:
  lVar5 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[1]) goto LAB_1403f95c4;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1403f95c4:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 4 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    uVar2 = (uint)uVar3;
    puVar1 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    puVar4 = puVar1;
    do {
      if (*(short *)((longlong)puVar4 + 0x1e) == param_1[2]) goto LAB_1403f9611;
      puVar4 = puVar4 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar4 = (ulonglong *)0x0;
LAB_1403f9611:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar4) {
    *(int *)(lVar5 + 8 + lVar7 * 4) = (int)*puVar4 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar5 = *param_3;
    uVar3 = *(ushort *)(param_2 + 0xc);
    puVar1 = *(ulonglong **)(param_2 + 0x28);
    uVar2 = (uint)uVar3;
  }
  if (uVar3 != 0) {
    uVar6 = (ulonglong)(uVar2 << 5);
    do {
      if (*(short *)((longlong)puVar1 + 0x1e) == param_1[3]) goto LAB_1403f9656;
      puVar1 = puVar1 + 4;
      uVar6 = uVar6 - 0x20;
    } while (uVar6 != 0);
  }
  puVar1 = (ulonglong *)0x0;
LAB_1403f9656:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar1) {
    *(int *)(lVar5 + 0xc + lVar7 * 4) = (int)*puVar1 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 1403f967c FUN_1403f967c body=68 status=ok
// SIG undefined FUN_1403f967c(void)

int FUN_1403f967c(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_1403f96d4(param_1,iVar1);
  }
  FUN_1403f96c0((longlong)iVar1 * 4 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 1403f96c0 FUN_1403f96c0 body=19 status=ok
// SIG undefined FUN_1403f96c0(void)

void FUN_1403f96c0(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,CONCAT31((int3)(param_2 >> 8),0xff),(ulonglong)param_2 << 2);
    return;
  }
  return;
}



// FUNCTION 1403f96d4 FUN_1403f96d4 body=353 status=ok
// SIG undefined FUN_1403f96d4(void)

void FUN_1403f96d4(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403f9759;
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
LAB_1403f9759:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 1403f9836 FUN_1403f9836 body=779 status=ok
// SIG undefined FUN_1403f9836(void)

uint * FUN_1403f9836(longlong param_1,uint *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined8 *local_c0;
  longlong local_b0;
  uint local_a4 [3];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 uStack_7c;
  uint local_74;
  undefined1 local_70;
  undefined4 local_6c;
  wchar_t *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  uVar6 = param_4 + 0x3ffU & 0xfffffc00;
  if ((int)*(uint *)(param_1 + 0x20) < 1) {
    uVar5 = *(uint *)(param_1 + 0x10);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar5 = *(uint *)(param_1 + 0x10);
    puVar8 = (uint *)(lVar2 + 4);
    uVar9 = 0xffffffff;
    uVar7 = 0;
    do {
      if ((((*puVar8 != uVar5) && (uVar1 = puVar8[-1], (int)uVar6 <= (int)uVar1)) &&
          ((uVar9 == 0xffffffff || ((int)uVar1 < *(int *)(lVar2 + (longlong)(int)uVar9 * 0x10)))))
         && (uVar9 = (uint)uVar7, uVar1 == uVar6)) break;
      uVar7 = uVar7 + 1;
      puVar8 = puVar8 + 4;
    } while (*(uint *)(param_1 + 0x20) != uVar7);
    if (-1 < (int)uVar9) {
      lVar10 = (ulonglong)uVar9 * 0x10;
      *(undefined8 *)param_2 = *(undefined8 *)(lVar2 + lVar10);
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(lVar2 + 8 + lVar10);
      *(undefined8 *)(lVar2 + 8 + lVar10) = 0;
      param_2[1] = *(uint *)(param_1 + 0x10);
      lVar2 = *(longlong *)(param_1 + 0x18);
      lVar3 = *(longlong *)(lVar2 + 8 + lVar10);
      if (lVar3 != 0) {
        LOCK();
        puVar8 = (uint *)(lVar3 + 8);
        uVar6 = *puVar8;
        *puVar8 = *puVar8 - 1;
        UNLOCK();
        if ((uVar6 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      iVar4 = *(int *)(param_1 + 0x20);
      if (~uVar9 + iVar4 != 0) {
        _Dst = (void *)(lVar2 + lVar10);
        memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~uVar9 + iVar4) << 4);
        iVar4 = *(int *)(param_1 + 0x20);
      }
      *(int *)(param_1 + 0x20) = iVar4 + -1;
      FUN_1403f9b42(param_1 + 0x18);
      goto LAB_1403f994a;
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[1] = uVar5;
  *param_2 = uVar6;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 1;
  local_84 = 0;
  uStack_7c = 0;
  local_74 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_70 = 0;
  local_6c = 0;
  local_68 = L"FPrimitiveIdVertexBufferPool";
  local_60 = 0;
  uStack_58 = 0;
  local_a4[1] = 0;
  local_a4[2] = 0x204114;
  local_a4[0] = uVar6;
  if (uVar6 == 0) {
    FUN_14570b4be(param_3,&local_98,0x204114,0);
  }
  if (*(char *)(param_3 + 0x69) == '\0') {
    FUN_14002049c(param_3,1);
    local_c0 = &local_98;
    local_c8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_3,local_a4);
    *(undefined4 *)(local_b0 + 0x18) = 8;
    FUN_14002049c(param_3,0);
  }
  else {
    local_c0 = &local_98;
    local_c8 = 8;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_b0,param_3,local_a4);
    *(undefined4 *)(local_b0 + 0x18) = 8;
  }
  if (param_2 + 2 == (uint *)&local_b0) {
    if (local_b0 != 0) {
      LOCK();
      puVar8 = (uint *)(local_b0 + 8);
      uVar6 = *puVar8;
      *puVar8 = *puVar8 - 1;
      UNLOCK();
      if ((uVar6 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  else {
    *(longlong *)(param_2 + 2) = local_b0;
  }
LAB_1403f994a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x28));
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403f9b42 FUN_1403f9b42 body=137 status=ok
// SIG undefined FUN_1403f9b42(void)

void FUN_1403f9b42(longlong param_1)

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



// FUNCTION 1403f9bcc FUN_1403f9bcc body=360 status=ok
// SIG undefined FUN_1403f9bcc(void)

longlong * FUN_1403f9bcc(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  int local_20;
  ulonglong local_18;
  
  plVar5 = DAT_14cb7f870;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14cb7f870 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb7f870 + 0x300))(DAT_14cb7f870);
    if (cVar1 == '\0') {
      lVar4 = FUN_1400e3c00(plVar5,param_1,1);
      if (lVar4 != 0) {
        plVar10 = *(longlong **)(lVar4 + 0x30);
LAB_1403f9c37:
        if (plVar10 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar10 + 8))(plVar10);
          lVar6 = FUN_140c04244();
          if ((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar4 + 0x38))) {
            plVar5 = (longlong *)0x0;
            if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                lVar6 + 0x30) {
              plVar5 = plVar10;
            }
            goto LAB_1403f9c15;
          }
        }
      }
    }
    else {
      if ((((*param_1 == 0) || (iVar2 = param_1[1], iVar2 == 0)) || (*param_1 == DAT_14c948000)) ||
         (iVar2 < 1)) {
        local_20 = DAT_14c948620;
        local_28 = DAT_14c948618;
      }
      else {
        puVar7 = (ulonglong *)(param_1 + 2);
        if (0 < param_1[9]) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        if (iVar2 != 1) {
          puVar7 = *(ulonglong **)(param_1 + 6);
        }
        local_20 = (int)puVar7[1];
        local_28 = *puVar7;
      }
      plVar5 = plVar5 + 0x3f;
      uVar9 = local_28 & 0xffffffff;
      if (local_20 != 0) {
        uVar3 = FUN_144a78877(uVar9,local_20);
        uVar9 = (ulonglong)uVar3;
      }
      iVar2 = FUN_1448467de(plVar5,uVar9,&local_28);
      if (iVar2 != -1) {
        lVar4 = *plVar5;
        plVar5 = (longlong *)0x0;
        if ((lVar4 + (longlong)iVar2 * 0x70 == 0) ||
           (puVar8 = (undefined8 *)(lVar4 + (longlong)iVar2 * 0x70 + 0x10),
           puVar8 == (undefined8 *)0x0)) goto LAB_1403f9c15;
        plVar10 = (longlong *)*puVar8;
        goto LAB_1403f9c37;
      }
    }
  }
  plVar5 = (longlong *)0x0;
LAB_1403f9c15:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 1403f9d36 FUN_1403f9d36 body=48 status=ok
// SIG undefined FUN_1403f9d36(void)

void FUN_1403f9d36(longlong param_1,undefined8 param_2)

{
  FUN_1403f9d66(param_1 + 0xc0);
  FUN_1403f9f8e(param_1 + 0x12c8,param_2);
  return;
}



// FUNCTION 1403f9d66 FUN_1403f9d66 body=187 status=ok
// SIG undefined FUN_1403f9d66(void)

void FUN_1403f9d66(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [36];
  undefined8 local_54;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      puVar3 = (undefined8 *)FUN_1403f9e22(param_2);
      local_48 = *(undefined8 *)(lVar1 + 0x68 + lVar4);
      FUN_1401533ba(&local_54,&local_48,1);
      *(undefined4 *)(puVar3 + 1) = local_4c;
      *puVar3 = local_54;
      FUN_144976b9c((longlong)puVar3 + 0xc,*(undefined8 *)(lVar1 + 0x78 + lVar4));
      lVar4 = lVar4 + 0x88;
    } while ((longlong)(int)lVar2 * 0x88 != lVar4);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403f9e22 FUN_1403f9e22 body=66 status=ok
// SIG undefined FUN_1403f9e22(void)

longlong FUN_1403f9e22(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1403f9e8e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x20 + *param_1;
  FUN_1403f9e64(lVar2,1);
  return lVar2;
}



// FUNCTION 1403f9e64 FUN_1403f9e64 body=41 status=ok
// SIG undefined FUN_1403f9e64(void)

void FUN_1403f9e64(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x1c);
    do {
      *(undefined8 *)(puVar1 + -0xc) = 0;
      *(undefined4 *)(puVar1 + -4) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + -0x1c) = 0;
      *(undefined8 *)(puVar1 + -0x17) = 0;
      puVar1 = puVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403f9e8e FUN_1403f9e8e body=255 status=ok
// SIG undefined FUN_1403f9e8e(void)

void FUN_1403f9e8e(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1403f9f8e FUN_1403f9f8e body=214 status=ok
// SIG undefined FUN_1403f9f8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403f9f8e(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar1 = _DAT_14cb246b0;
  *(undefined4 *)(puVar1 + 1) = DAT_14cb246b8;
  FUN_1403fa066(param_1 + 0x20,local_50,0);
  if (DAT_14c947fe0 == 0) {
    lVar2 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar2);
    DAT_14c947fe0 = lVar2;
  }
  FUN_140045924(DAT_14c947fe0,&local_58,local_50,1);
  FUN_144976b9c((longlong)puVar1 + 0xc,local_58);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403fa066 FUN_1403fa066 body=288 status=ok
// SIG undefined FUN_1403fa066(void)

undefined8 * FUN_1403fa066(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*param_1 == 0) || ((-1 < (short)param_1[1] && (param_1[2] == 0)))) {
    local_40 = DAT_14cb21030;
    local_48 = DAT_14cb21028;
    FUN_1448075d0(param_2);
  }
  else {
    puVar1 = *(undefined4 **)(*param_1 + 8);
    puVar2 = &DAT_14c9485f0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
    }
    FUN_1447a97f4(&local_48,puVar2);
    if (((param_3 == '\0') && (-1 < (short)param_1[1])) &&
       (puVar1 = (undefined4 *)param_1[2], puVar1 != (undefined4 *)0x0)) {
      local_50 = CONCAT44((int)(short)param_1[1] + (int)*(short *)(puVar1 + 2),*puVar1);
      FUN_1447325ac(&local_48,local_58,1);
      FUN_140ebdabe(param_2,local_58,&local_50);
    }
    else {
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      FUN_1404e49fa(param_2,&local_48);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403fa188 FUN_1403fa188 body=69 status=ok
// SIG undefined FUN_1403fa188(void)

void FUN_1403fa188(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1403fa1cd(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1403fa314(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1403fa1cd FUN_1403fa1cd body=326 status=ok
// SIG undefined FUN_1403fa1cd(void)

void FUN_1403fa1cd(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    puVar3 = (undefined8 *)param_1[0x88];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    puVar3 = (undefined8 *)param_1[0x89];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    param_1[0x44] = &PTR_FUN_14a1ca480;
    if (param_1[0x86] != 0) {
      LOCK();
      puVar1 = (uint *)(param_1[0x86] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (param_1[0x85] != 0) {
      LOCK();
      puVar1 = (uint *)(param_1[0x85] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    FUN_1447259a8(param_1 + 0x44);
    *param_1 = &PTR_FUN_14a1ca480;
    if (param_1[0x42] != 0) {
      LOCK();
      puVar1 = (uint *)(param_1[0x42] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (param_1[0x41] != 0) {
      LOCK();
      puVar1 = (uint *)(param_1[0x41] + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    FUN_1447259a8(param_1);
    param_1 = param_1 + 0x8a;
  }
  return;
}



// FUNCTION 1403fa314 FUN_1403fa314 body=226 status=ok
// SIG undefined FUN_1403fa314(void)

void FUN_1403fa314(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x450;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x1e) {
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x450)) {
      uVar2 = uVar1 / 0x450 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x450,8);
  }
  return;
}



// FUNCTION 1403fa3f6 FUN_1403fa3f6 body=110 status=ok
// SIG undefined FUN_1403fa3f6(void)

void FUN_1403fa3f6(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_1403fa464(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_14498d612(param_1);
    return;
  }
  FUN_14570c450(param_1);
  FUN_1403fa464(param_1,param_2);
  return;
}



// FUNCTION 1403fa464 FUN_1403fa464 body=128 status=ok
// SIG undefined FUN_1403fa464(void)

void FUN_1403fa464(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1403fa4e6 FUN_1403fa4e6 body=127 status=ok
// SIG undefined FUN_1403fa4e6(void)

void FUN_1403fa4e6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((int)uVar2 <= *(int *)(param_1 + 0x2c) && *(int *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1403fa566 FUN_1403fa566 body=378 status=ok
// SIG undefined FUN_1403fa566(void)

void FUN_1403fa566(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar4 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar4 = iVar6;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
      plVar1 = param_1 + 2;
      local_50 = 0x100000000;
      local_40 = 0xffffffff;
      uStack_38 = 0;
      uStack_48 = plVar1;
      if ((int)param_1[5] == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_50);
        iVar6 = (int)param_1[5];
      }
      local_70 = (undefined4)local_50;
      uStack_6c = local_50._4_4_;
      uStack_68 = (undefined4)uStack_48;
      uStack_64 = uStack_48._4_4_;
      uStack_58 = CONCAT44(uStack_34,uStack_38);
      local_60 = local_40;
      uVar2 = local_60;
      local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
      iVar4 = local_60._4_4_;
      local_78 = param_1;
      if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
        do {
          local_60 = uVar2;
          *(undefined4 *)
           ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar4 = local_60._4_4_;
          uVar2 = local_60;
        } while (local_78 != param_1 ||
                 ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_1403fa6f6(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1403faa6c(param_1);
  return;
}



// FUNCTION 1403fa6f6 FUN_1403fa6f6 body=497 status=ok
// SIG undefined FUN_1403fa6f6(void)

void FUN_1403fa6f6(longlong *param_1,int param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
    uVar12 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar4 = local_60;
  iVar5 = (int)local_60[3];
  iVar7 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar5) {
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar7 * 0x20) != 0) {
        FUN_1400020a8();
        iVar5 = (int)plVar4[3];
      }
      uVar12 = uVar12 & ~(uint)uVar13;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar11 = (longlong)iVar14;
      uVar6 = *(uint *)((longlong)plVar8 + lVar11 * 4) & uVar12;
      if (uVar6 == 0) {
        iVar7 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar7 = iVar5 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar3 = iVar7;
        if (iVar7 < iVar14) {
          iVar3 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar6 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar11 * 4 + 4);
          if (uVar6 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar11 == lVar9) goto LAB_1403fa81c;
        }
        iVar14 = iVar14 + (int)lVar9 + 1;
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar7 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_1403fa81c:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar6 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403fa8ea FUN_1403fa8ea body=384 status=ok
// SIG undefined FUN_1403fa8ea(void)

void FUN_1403fa8ea(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403faa6c FUN_1403faa6c body=547 status=ok
// SIG undefined FUN_1403faa6c(void)

void FUN_1403faa6c(longlong *param_1)

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
      local_48._4_4_ = 0;
      uVar5 = 0xffffffff;
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
      uVar5 = (uint)local_48;
      iVar4 = (int)local_58;
    }
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1403fac35;
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
LAB_1403fac35:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403fac90 FUN_1403fac90 body=891 status=ok
// SIG undefined FUN_1403fac90(void)

bool FUN_1403fac90(uint param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  uint uVar6;
  ushort uVar7;
  undefined8 uVar8;
  bool bVar9;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3f330) && (FUN_144b3d300(&DAT_14ca3f330), DAT_14ca3f330 == -1)) {
    FUN_140056680(&DAT_14ca3f318,L"r.RayTracing.CompileMaterialCHS");
    DAT_14ca3f328 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f6fd44);
    _Init_thread_footer(&DAT_14ca3f330);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca3f350) && (FUN_144b3d300(&DAT_14ca3f350), DAT_14ca3f350 == -1)) {
    FUN_140056680(&DAT_14ca3f338,L"r.RayTracing.CompileMaterialAHS");
    DAT_14ca3f348 = (longlong *)0x0;
    atexit((_func_5014 *)&LAB_142f6fd55);
    _Init_thread_footer(&DAT_14ca3f350);
  }
  uVar7 = (ushort)param_1;
  uVar6 = param_1 & 0xffff;
  puVar3 = &DAT_14ca84468;
  if (uVar7 == 0x31) goto switchD_1403fadbd_caseD_33;
  switch(uVar6) {
  case 0x30:
switchD_1403fadbd_caseD_30:
    puVar3 = &DAT_14ca84470;
    break;
  case 0x31:
  case 0x32:
switchD_1403fadbd_caseD_31:
    if ((uVar7 & 0xfff0) == 0x20) {
      lVar4 = FUN_14741392a();
      puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_1 & 0xf) * 0x18);
      break;
    }
    uVar8 = 0;
    goto LAB_1403facfa;
  case 0x33:
    break;
  case 0x34:
switchD_1403fadbd_caseD_34:
    puVar3 = &DAT_14ca84480;
    break;
  case 0x35:
switchD_1403fadbd_caseD_35:
    puVar3 = &DAT_14ca84478;
    break;
  default:
    switch(uVar6) {
    case 0:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x14:
      break;
    default:
      goto switchD_1403fadbd_caseD_31;
    case 0xb:
    case 0xc:
      goto switchD_1403fadbd_caseD_35;
    case 0x10:
    case 0x16:
    case 0x1b:
      goto switchD_1403fadbd_caseD_34;
    case 0x15:
    case 0x18:
      goto switchD_1403fadbd_caseD_30;
    case 0x1e:
    case 0x1f:
      puVar3 = &DAT_14ca84488;
    }
  }
switchD_1403fadbd_caseD_33:
  uVar8 = *puVar3;
LAB_1403facfa:
  if (DAT_14ca3f328 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar5 = DAT_14ca3f318;
    if (DAT_14ca3f320 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    DAT_14ca3f328 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
  }
  cVar1 = FUN_14002b5e0(uVar8,"Windows",7);
  if (((cVar1 != '\0') || (DAT_14ca85550 == uVar7)) &&
     (iVar2 = (**(code **)(*DAT_14ca3f328 + 0xb0))(), iVar2 != 0)) {
    return true;
  }
  puVar3 = &DAT_14ca84468;
  if (uVar7 != 0x31) {
    switch(uVar6) {
    case 0x30:
switchD_1403fadd9_caseD_30:
      puVar3 = &DAT_14ca84470;
      break;
    case 0x31:
    case 0x32:
switchD_1403fadd9_caseD_31:
      if ((uVar7 & 0xfff0) != 0x20) {
        uVar8 = 0;
        goto LAB_1403fad52;
      }
      lVar4 = FUN_14741392a();
      puVar3 = (undefined8 *)(lVar4 + (ulonglong)(param_1 & 0xf) * 0x18);
      break;
    case 0x33:
      break;
    case 0x34:
switchD_1403fadd9_caseD_34:
      puVar3 = &DAT_14ca84480;
      break;
    case 0x35:
switchD_1403fadd9_caseD_35:
      puVar3 = &DAT_14ca84478;
      break;
    default:
      switch(uVar6) {
      case 0:
      case 0xe:
      case 0xf:
      case 0x11:
      case 0x14:
        break;
      default:
        goto switchD_1403fadd9_caseD_31;
      case 0xb:
      case 0xc:
        goto switchD_1403fadd9_caseD_35;
      case 0x10:
      case 0x16:
      case 0x1b:
        goto switchD_1403fadd9_caseD_34;
      case 0x15:
      case 0x18:
        goto switchD_1403fadd9_caseD_30;
      case 0x1e:
      case 0x1f:
        puVar3 = &DAT_14ca84488;
      }
    }
  }
  uVar8 = *puVar3;
LAB_1403fad52:
  if (DAT_14ca3f348 == (longlong *)0x0) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    puVar5 = DAT_14ca3f338;
    if (DAT_14ca3f340 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    DAT_14ca3f348 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,puVar5,1);
  }
  cVar1 = FUN_14002b5e0(uVar8,"Windows",7);
  if ((cVar1 == '\0') && (DAT_14ca85550 != uVar7)) {
    bVar9 = false;
  }
  else {
    iVar2 = (**(code **)(*DAT_14ca3f348 + 0xb0))();
    bVar9 = iVar2 != 0;
  }
  return bVar9;
}



// FUNCTION 1403fb00c FUN_1403fb00c body=413 status=ok
// SIG undefined FUN_1403fb00c(void)

undefined8 * FUN_1403fb00c(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  bool bVar6;
  char cVar7;
  
  *param_1 = &PTR_LAB_14a2f5630;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = *(undefined8 *)(param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x18);
  param_1[6] = lVar3;
  lVar1 = *(longlong *)(param_2 + 0x20);
  param_1[7] = lVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar5 = (*(byte *)(lVar3 + 0x125b0) & 0x20) == 0;
  *(undefined1 *)((longlong)param_1 + 0x4c) = uVar5;
  if (((*(char *)(lVar1 + 0x6d9) == '\x01') && (*(char *)(lVar3 + 0x23e8) == '\0')) &&
     ((*(byte *)(lVar3 + 0x125b0) & 0x10) == 0)) {
    if (*(int *)(lVar3 + 0x1dd0) != 0) {
      if ((*(byte *)(lVar1 + 0x458) & 1) == 0) {
        cVar7 = *(int *)(lVar3 + 0x1dd0) == 2;
      }
      else {
        cVar7 = FUN_144b2acba();
        uVar5 = *(undefined1 *)((longlong)param_1 + 0x4c);
        lVar3 = param_1[6];
      }
      uVar4 = 0;
      if (cVar7 != '\0') {
        uVar4 = uVar5;
      }
      *(undefined1 *)((longlong)param_1 + 0x4c) = uVar4;
    }
  }
  bVar6 = *(longlong *)
           (&DAT_14ca814b0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar3 + 0x3090) * 2) * 0x3c)
          != DAT_14ca81490;
  *(bool *)((longlong)param_1 + 0x4d) = bVar6;
  *(byte *)((longlong)param_1 + 0x4d) =
       DAT_14ca4b3e8 == 2 |
       DAT_14ca4b3e8 != 0 &
       (byte)(*(uint *)((longlong)&DAT_14ca814d0 +
                       (ulonglong)
                       *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar3 + 0x3090) * 2) * 0x3c +
                       4) >> 0xe) & bVar6;
  if ((*(int *)(lVar3 + 0x1dd0) == 0) || (*(char *)(lVar3 + 0x23e8) != '\0')) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined1 *)(param_1[7] + 0x6d9);
  }
  *(undefined1 *)((longlong)param_1 + 0x4e) = uVar5;
  iVar2 = FUN_1403fb1aa();
  *(int *)((longlong)param_1 + 0x44) = iVar2;
  *(int *)(param_1 + 8) = iVar2;
  if (DAT_14c7609d4 == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = (*(byte *)(param_1[6] + 0x125b0) & 0x20) == 0;
  }
  *(bool *)((longlong)param_1 + 0x4f) = bVar6;
  if (*(char *)((longlong)param_1 + 0x4e) == '\x01') {
    *(int *)(param_1 + 8) = iVar2 * 2;
  }
  return param_1;
}



// FUNCTION 1403fb1aa FUN_1403fb1aa body=506 status=ok
// SIG undefined FUN_1403fb1aa(void)

int FUN_1403fb1aa(int param_1)

{
  ushort uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  DWORD DVar5;
  DWORD DVar6;
  int *piVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45980) {
    FUN_144b3d300(&DAT_14ca45980);
    if (DAT_14ca45980 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar8 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.NumBufferedOcclusionQueries",1)
      ;
      if (plVar8 == (longlong *)0x0) {
        DAT_14ca45978 = 0;
      }
      else {
        DAT_14ca45978 = (**(code **)(*plVar8 + 0x68))(plVar8);
      }
      _Init_thread_footer(&DAT_14ca45980);
    }
  }
  lVar3 = DAT_14ca45930;
  uVar1 = *(ushort *)(&DAT_14ca85070 + (longlong)param_1 * 2);
  if ((param_1 < 2) || (uVar1 == 0x30)) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar11 = 0;
    if (*(int *)(lVar2 + 0xc60) == 0x40000002) {
      uVar10 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar10 = (ulonglong)(bVar4 ^ 1);
    }
    piVar7 = (int *)(lVar2 + 0xc60);
    if ((*(char *)(lVar3 + uVar10) == '\x01') &&
       (((*(longlong *)(&DAT_14ca814b0 + (ulonglong)uVar1 * 0x3c) == DAT_14ca81490 || uVar1 == 0x30)
         || *(longlong *)(&DAT_14ca814b0 + (ulonglong)uVar1 * 0x3c) == DAT_14ca81498 ||
        (iVar11 = 1, (*(byte *)((longlong)&DAT_14ca814d0 + (ulonglong)uVar1 * 0x3c + 5) & 0x20) != 0
        )))) {
      iVar11 = DAT_14c842750 + 1;
    }
  }
  else {
    piVar7 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar11 = 0;
  }
  lVar3 = DAT_14ca45978;
  iVar9 = *piVar7;
  if (((iVar9 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar9 == 2)) {
    uVar10 = 0;
  }
  else if (iVar9 == 1) {
    DVar5 = FUN_140ad26c0();
    DVar6 = GetCurrentThreadId();
    uVar10 = (ulonglong)(DVar5 != DVar6);
  }
  else {
    uVar10 = 1;
  }
  iVar11 = iVar11 + *(int *)(lVar3 + uVar10 * 4);
  iVar9 = 4;
  if (iVar11 < 4) {
    iVar9 = iVar11;
  }
  iVar11 = 1;
  if (1 < iVar9) {
    iVar11 = iVar9;
  }
  return iVar11;
}



// FUNCTION 1403fb3a4 FUN_1403fb3a4 body=278 status=ok
// SIG undefined FUN_1403fb3a4(void)

undefined8 FUN_1403fb3a4(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_238 [40];
  undefined **local_210 [17];
  longlong local_188;
  char local_68;
  undefined8 local_50;
  longlong *plStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_238;
  memset(local_210,0,0x1e0);
  FUN_1401ea154(local_210);
  local_210[0] = &PTR_FUN_14a975858;
  local_50 = 0;
  plStack_48 = (longlong *)0x0;
  local_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  FUN_1401ea2d0(local_210,param_2);
  FUN_1403fb4bc(param_1,local_210,param_3);
  plVar3 = plStack_48;
  local_210[0] = &PTR_FUN_14a975858;
  if (plStack_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_48)(plStack_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (local_68 == '\x01') {
    local_68 = '\0';
  }
  local_210[0] = &PTR_FUN_14a9758a8;
  if (local_188 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403fb4bc FUN_1403fb4bc body=291 status=ok
// SIG undefined FUN_1403fb4bc(void)

undefined8 * FUN_1403fb4bc(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  FUN_14498dc1c(param_1,param_2,1);
  *param_1 = &PTR_FUN_14a920300;
  *(undefined2 *)(param_1 + 0x117) = 0;
  param_1[0x118] = *(undefined8 *)(param_2 + 0xf8);
  FUN_1403fb5e0(param_1 + 0x119,param_2,param_3);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x1d8);
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  *(undefined4 *)(param_1 + 0x143) = 0xffffffff;
  lVar1 = param_1[0x118];
  param_1[0x14a] = *(undefined8 *)(lVar1 + 0x230);
  uVar2 = *(undefined4 *)(lVar1 + 0x200);
  uVar3 = *(undefined4 *)(lVar1 + 0x204);
  uVar4 = *(undefined4 *)(lVar1 + 0x208);
  uVar5 = *(undefined4 *)(lVar1 + 0x20c);
  uVar6 = *(undefined4 *)(lVar1 + 0x210);
  uVar7 = *(undefined4 *)(lVar1 + 0x214);
  uVar8 = *(undefined4 *)(lVar1 + 0x218);
  uVar9 = *(undefined4 *)(lVar1 + 0x21c);
  uVar10 = *(undefined4 *)(lVar1 + 0x224);
  uVar11 = *(undefined4 *)(lVar1 + 0x228);
  uVar12 = *(undefined4 *)(lVar1 + 0x22c);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(lVar1 + 0x220);
  *(undefined4 *)((longlong)param_1 + 0xa44) = uVar10;
  *(undefined4 *)(param_1 + 0x149) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0xa4c) = uVar12;
  *(undefined4 *)(param_1 + 0x146) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0xa34) = uVar7;
  *(undefined4 *)(param_1 + 0x147) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0xa3c) = uVar9;
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xa24) = uVar3;
  *(undefined4 *)(param_1 + 0x145) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xa2c) = uVar5;
  param_1[0x14f] = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  param_1[0x14b] = 0;
  param_1[0x14c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa84) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa8c) = 0;
  param_1[0x153] = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  param_1[0x155] = *(undefined8 *)(param_2 + 0x1c0);
  lVar1 = *(longlong *)(param_2 + 0x1c8);
  param_1[0x156] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  FUN_1403fb962(param_1,param_2);
  return param_1;
}



// FUNCTION 1403fb5e0 FUN_1403fb5e0 body=897 status=ok
// SIG undefined FUN_1403fb5e0(void)

longlong * FUN_1403fb5e0(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar4 = *(longlong *)(param_2 + 0x70);
  if (lVar4 != 0) {
    if (DAT_14cac1d70 == 0) {
      local_80 = &local_68;
      local_68 = FUN_144b223ce;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_1432411d6;
      local_88 = &LAB_147878f54;
      local_90 = &LAB_1417ad3ba;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0xb10;
      FUN_14081cfa3(L"/Script/Engine",L"InstancedStaticMeshComponent",&DAT_14cac1d70,FUN_14637c2da);
    }
    if ((*(int *)(DAT_14cac1d70 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac1d70 + 0x38) * 8) == DAT_14cac1d70 + 0x30)) goto LAB_1403fb653;
  }
  lVar4 = 0;
LAB_1403fb653:
  *param_1 = lVar4;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(*(longlong *)(param_2 + 0xf8) + 0x170);
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = *(longlong *)(*(longlong *)(param_2 + 0xf8) + 0xe0);
  param_1[4] = lVar4;
  *(undefined4 *)(param_1 + 5) = param_3;
  if (0 < *(int *)(lVar4 + 8)) {
    iVar6 = 0;
    do {
      puVar3 = (undefined8 *)FUN_14001cc68(0x2a0,0x10);
      lVar4 = param_1[5];
      *(undefined4 *)(puVar3 + 1) = 0xffffffff;
      *(char *)((longlong)puVar3 + 0xc) = (char)lVar4;
      *(undefined2 *)((longlong)puVar3 + 0xd) = 1;
      puVar3[0x12] = 0;
      puVar3[0x13] = 0x800000000;
      puVar3[0x18] = 0;
      puVar3[0x19] = 0x200000000;
      puVar3[0x20] = 0;
      puVar3[0x21] = 0x300000000;
      puVar3[0x24] = 0;
      puVar3[0x22] = 0;
      puVar3[0x23] = 0;
      *(undefined4 *)(puVar3 + 0x25) = 0x1ffffff;
      *(undefined4 *)(puVar3 + 0x34) = 0;
      puVar3[0x26] = 0;
      puVar3[0x27] = 0;
      puVar3[0x28] = 0;
      puVar3[0x29] = 0;
      puVar3[0x2a] = 0;
      puVar3[0x2b] = 0;
      *(undefined4 *)((longlong)puVar3 + 0x1a4) = 4;
      puVar3[0x35] = 0;
      puVar3[0x36] = 0;
      puVar3[0x37] = 0;
      puVar3[0x38] = 0;
      puVar3[0x39] = 0;
      puVar3[0x3a] = 0;
      puVar3[0x3b] = 0;
      puVar3[0x3c] = 0;
      *(undefined4 *)(puVar3 + 0x3d) = 0xffffffff;
      *(undefined2 *)((longlong)puVar3 + 0x1ec) = 0xff;
      *(undefined1 *)((longlong)puVar3 + 0x1ee) = 0;
      puVar3[0x3e] = 0;
      puVar3[0x3f] = 0;
      puVar3[0x40] = 0;
      puVar3[0x41] = 0;
      puVar3[0x42] = 0;
      *(undefined4 *)(puVar3 + 0x43) = 0xffffffff;
      *(undefined1 *)((longlong)puVar3 + 0x21c) = 0;
      *puVar3 = &PTR_FUN_14a973820;
      puVar3[0x44] = 0;
      puVar3[0x45] = 0;
      puVar3[0x46] = 0;
      puVar3[0x47] = 0;
      puVar3[0x48] = 0;
      puVar3[0x49] = 0;
      puVar3[0x4a] = 0;
      puVar3[0x4b] = 0;
      puVar3[0x4c] = 0;
      puVar3[0x4d] = 0;
      puVar3[0x4e] = 0;
      puVar3[0x4f] = 0;
      puVar3[0x50] = 0;
      puVar3[0x51] = 0;
      *(undefined4 *)(puVar3 + 0x52) = 0;
      puVar3[0x53] = 0;
      iVar1 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
        FUN_1456bd870(param_1 + 2,iVar1);
      }
      *(undefined8 **)(param_1[2] + (longlong)iVar1 * 8) = puVar3;
      iVar6 = iVar6 + 1;
      lVar4 = param_1[4];
    } while (iVar6 < *(int *)(lVar4 + 8));
    if ((*(longlong *)(*(longlong *)(param_2 + 0xf8) + 0x1c0) != 0) && (0 < *(int *)(lVar4 + 8))) {
      lVar5 = 0;
      do {
        plVar2 = *(longlong **)(param_2 + 0xa0);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x380))
                    (plVar2,*(undefined8 *)(param_1[2] + lVar5 * 8),*(undefined8 *)(param_2 + 0xf8))
          ;
          lVar4 = param_1[4];
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(lVar4 + 8));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403fb962 FUN_1403fb962 body=1055 status=ok
// SIG undefined FUN_1403fb962(void)

void FUN_1403fb962(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined8 uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfd | (*DAT_14cae4e48 != 0) * '\x02';
  uVar13 = (**(code **)(**(longlong **)(param_1 + 0xaa8) + 8))();
  *(undefined8 *)(param_1 + 0x90) = uVar13;
  *(undefined1 *)(param_1 + 0x8b8) = 0;
  iVar10 = *(int *)(param_1 + 0x2a8);
  if (0 < iVar10) {
    lVar16 = 0;
    do {
      if (0 < *(int *)(*(longlong *)(param_1 + 0x2a0) + 0x48 + lVar16 * 0x80)) {
        lVar14 = *(longlong *)(param_1 + 0x2a0) + lVar16 * 0x80;
        lVar21 = 0;
        lVar19 = 0;
        do {
          lVar20 = *(longlong *)(lVar14 + 0x40);
          if (*(longlong *)(lVar14 + 0x40) == 0) {
            lVar20 = lVar14 + 0x30;
          }
          cVar8 = (**(code **)(**(longlong **)(lVar20 + lVar21) + 0x340))
                            (*(longlong **)(lVar20 + lVar21),7);
          if (cVar8 == '\0') {
            FUN_14003fbd6();
            uVar13 = DAT_14caea080;
            *(undefined8 *)(lVar20 + lVar21) = DAT_14caea080;
          }
          else {
            uVar13 = *(undefined8 *)(lVar20 + lVar21);
          }
          bVar9 = FUN_144ae5c06(uVar13);
          *(byte *)(param_1 + 0x8b8) = *(byte *)(param_1 + 0x8b8) | bVar9;
          lVar19 = lVar19 + 1;
          lVar21 = lVar21 + 0x10;
        } while (lVar19 < *(int *)(lVar14 + 0x48));
        iVar10 = *(int *)(param_1 + 0x2a8);
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < iVar10);
  }
  if ((*(longlong **)(param_1 + 0x2c0) != (longlong *)0x0) &&
     (cVar8 = (**(code **)(**(longlong **)(param_1 + 0x2c0) + 0x340))(), cVar8 == '\0')) {
    FUN_14003fbd6();
    *(undefined8 *)(param_1 + 0x2c0) = DAT_14caea080;
  }
  *(undefined8 *)(param_1 + 0x900) = *(undefined8 *)(*(longlong *)(param_2 + 0xf8) + 0xe0);
  *(undefined4 *)(param_1 + 0x908) = *(undefined4 *)(param_2 + 0x1d0);
  *(undefined4 *)(param_1 + 0x90c) = *(undefined4 *)(param_2 + 0x1d4);
  *(undefined4 *)(param_1 + 0x910) = 0x3f800000;
  lVar16 = *(longlong *)(param_2 + 0xf8);
  dVar1 = *(double *)(lVar16 + 0x210);
  dVar2 = *(double *)(lVar16 + 0x228);
  dVar3 = *(double *)(lVar16 + 0x208);
  dVar4 = *(double *)(lVar16 + 0x220);
  *(double *)(param_1 + 0x938) =
       ((*(double *)(lVar16 + 0x200) - *(double *)(lVar16 + 0x218)) +
       *(double *)(lVar16 + 0x200) + *(double *)(lVar16 + 0x218)) * 0.5;
  *(double *)(param_1 + 0x940) = ((dVar3 - dVar4) + dVar3 + dVar4) * 0.5;
  *(double *)(param_1 + 0x948) = ((dVar1 - dVar2) + dVar1 + dVar2) * 0.5;
  *(undefined4 *)(param_1 + 0x914) = *(undefined4 *)(param_1 + 0x87c);
  *(undefined2 *)(param_1 + 0x918) = 0x101;
  *(undefined8 *)(param_1 + 0x8f8) = 0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x920) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_1 + 0x924) = uVar5;
  *(undefined4 *)(param_1 + 0x928) = uVar6;
  *(undefined4 *)(param_1 + 0x92c) = uVar7;
  *(undefined8 *)(param_1 + 0x930) = DAT_14c8464f0;
  puVar17 = (undefined8 *)(param_1 + 0x8f8);
  puVar18 = (undefined8 *)(param_1 + 0x950);
  for (lVar16 = 0xb; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  bVar9 = 0;
  *(undefined1 *)(param_1 + 0x971) = 0;
  puVar17 = (undefined8 *)(param_1 + 0x8f8);
  puVar18 = (undefined8 *)(param_1 + 0x9a8);
  for (lVar16 = 0xb; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x9c8) = 0;
  if (DAT_14ca96da8 != '\0') {
    bVar9 = *(byte *)(*(longlong *)(param_2 + 0xf8) + 0x194) >> 5 & 1;
  }
  *(byte *)(param_1 + 0x2cc) = *(byte *)(param_1 + 0x2cc) & 0xfe | bVar9;
  lVar16 = DAT_14cae4ce0;
  iVar10 = *(int *)(*(longlong *)(param_1 + 0x210) + 8);
  bVar9 = DAT_14ca96500;
  if ((longlong)iVar10 != 1) {
    if (iVar10 < 3) {
      bVar9 = 0;
    }
    else {
      lVar14 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar10 * 2) * 0x3c;
      bVar9 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar14) != DAT_14ca81490) &&
         (bVar9 = 0, *(ushort *)(&DAT_14ca85070 + (longlong)iVar10 * 2) != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar14 + 3) & 0x10) == 0) {
          bVar9 = 1;
        }
        else {
          bVar9 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar14 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  iVar10 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  if (((iVar10 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar10 == 2)) {
    uVar15 = 0;
  }
  else if (iVar10 == 1) {
    DVar11 = FUN_140ad26c0();
    DVar12 = GetCurrentThreadId();
    uVar15 = (ulonglong)(DVar11 != DVar12);
  }
  else {
    uVar15 = 1;
  }
  *(byte *)(param_1 + 0x8b9) =
       *(byte *)(param_2 + 0x1dc) & bVar9 & *(int *)(lVar16 + uVar15 * 4) != 0;
  if (((bVar9 != 0) &&
      ((&DAT_14ca814b8)
       [(ulonglong)
        *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 0x210) + 8) * 2) *
        0xf] == 1)) &&
     (((*(byte *)((longlong)&DAT_14ca814d8 +
                 (ulonglong)
                 *(ushort *)
                  (&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 0x210) + 8) * 2) *
                 0x3c + 1) & 0x10) != 0 &&
      (*(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 1, 0 < *(int *)(param_1 + 0x2a8)))))
  {
    lVar16 = 8;
    lVar14 = 0;
    do {
      *(undefined1 *)(*(longlong *)(param_1 + 0x2a0) + lVar16) = 0;
      lVar14 = lVar14 + 1;
      lVar16 = lVar16 + 0x80;
    } while (lVar14 < *(int *)(param_1 + 0x2a8));
  }
  return;
}



// FUNCTION 1403fbd81 FUN_1403fbd81 body=109 status=ok
// SIG undefined FUN_1403fbd81(void)

undefined8 FUN_1403fbd81(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14cafae70;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar6 * 4) != 0);
}



// FUNCTION 1403fbdee FUN_1403fbdee body=139 status=ok
// SIG undefined FUN_1403fbdee(void)

void FUN_1403fbdee(longlong param_1)

{
  int iVar1;
  byte bVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x210) + 8);
  bVar2 = DAT_14ca96500;
  if (iVar1 != 1) {
    if (iVar1 < 3) {
      bVar2 = 0;
    }
    else {
      lVar3 = (ulonglong)DAT_14ca85550 * 0x3c;
      bVar2 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar3) != DAT_14ca81490) &&
         (bVar2 = 0, DAT_14ca85550 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar3 + 3) & 0x10) == 0) {
          bVar2 = 1;
        }
        else {
          bVar2 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar3 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) & 0xfe | bVar2 ^ 1;
  *(byte *)(param_1 + 0x75) = *(byte *)(param_1 + 0x75) & 0xfe | iVar1 != 1 & bVar2;
  return;
}



// FUNCTION 1403fbe7a FUN_1403fbe7a body=212 status=ok
// SIG undefined FUN_1403fbe7a(void)

void FUN_1403fbe7a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x100) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 8]];
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
    if ((int)param_2 <= (int)(uVar1 >> 7)) {
      uVar2 = uVar1 >> 7 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x80,8);
  }
  return;
}



// FUNCTION 1403fbf4e FUN_1403fbf4e body=88 status=ok
// SIG undefined FUN_1403fbf4e(void)

undefined8 * FUN_1403fbf4e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1417246d8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1403fbfa6 FUN_1403fbfa6 body=187 status=ok
// SIG undefined FUN_1403fbfa6(void)

void FUN_1403fbfa6(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (1 < param_2) {
    uVar2 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    uVar1 = (uint)(uVar2 >> 4);
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar4 = uVar1;
    }
  }
  if (uVar4 != *(uint *)(param_1 + 0x1c)) {
    *(uint *)(param_1 + 0x1c) = uVar4;
    FUN_1403fc062(param_1,*(undefined4 *)(param_1 + 0x18),uVar4);
    return;
  }
  return;
}



// FUNCTION 1403fc062 FUN_1403fc062 body=132 status=ok
// SIG undefined FUN_1403fc062(void)

void FUN_1403fc062(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 1403fc0e6 FUN_1403fc0e6 body=390 status=ok
// SIG undefined FUN_1403fc0e6(void)

longlong FUN_1403fc0e6(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x660);
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
    lVar2 = *(longlong *)(param_1 + 0x660);
LAB_1403fc131:
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    if (*(longlong *)(lVar2 + 0xe0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x660);
      lVar3 = lVar2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
        lVar3 = *(longlong *)(param_1 + 0x660);
      }
      iVar1 = *(int *)(*(longlong *)(lVar2 + 0xe0) + 8);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
      if ((*(char *)(*(longlong *)(lVar3 + 0xe0) + 0x8c) != '\0') ||
         (iVar1 == *(int *)(param_1 + 0x6b0))) {
        lVar2 = *(longlong *)(param_2 + 0x28);
        if (lVar2 != 0) goto LAB_1403fc1b9;
        if ((*(longlong *)(param_1 + 0xa8) != 0) && (lVar2 = FUN_14066ef58(), lVar2 != 0)) {
          if (param_3 == '\0') {
            local_58 = *(undefined4 *)(param_2 + 0x10);
            uStack_54 = *(undefined4 *)(param_2 + 0x14);
            uStack_50 = *(undefined4 *)(param_2 + 0x18);
            uStack_4c = *(undefined4 *)(param_2 + 0x1c);
            lVar2 = FUN_147ba5dc4(lVar2);
          }
          else {
            local_48 = *(undefined4 *)(param_2 + 0x10);
            uStack_44 = *(undefined4 *)(param_2 + 0x14);
            uStack_40 = *(undefined4 *)(param_2 + 0x18);
            uStack_3c = *(undefined4 *)(param_2 + 0x1c);
            lVar2 = FUN_147ba5d64(lVar2);
          }
          goto LAB_1403fc1b9;
        }
      }
    }
  }
  else if (lVar2 != 0) goto LAB_1403fc131;
  lVar2 = 0;
LAB_1403fc1b9:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1403fc26e FUN_1403fc26e body=912 status=ok
// SIG undefined FUN_1403fc26e(void)

void FUN_1403fc26e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  ulonglong uVar6;
  bool bVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cafaeb8) && (FUN_144b3d300(&DAT_14cafaeb8), DAT_14cafaeb8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Lumen.HardwareRayTracing",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14cafaeb0 = 0;
    }
    else {
      DAT_14cafaeb0 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14cafaeb8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cafaec8) && (FUN_144b3d300(&DAT_14cafaec8), DAT_14cafaec8 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.LumenScene.FarField",1);
    if (plVar5 == (longlong *)0x0) {
      DAT_14cafaec0 = 0;
    }
    else {
      DAT_14cafaec0 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14cafaec8);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar5 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1)
    ;
    if (plVar5 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar5 + 0x68))(plVar5);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar2 = DAT_14ca97068;
  bVar7 = true;
  cVar3 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar6 = 0;
      cVar3 = '\x02';
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
      cVar3 = DAT_14ca96da8;
    }
    bVar7 = *(int *)(lVar2 + uVar6 * 4) != 0;
  }
  lVar2 = DAT_14cafaeb0;
  if (((bVar7) && (cVar3 != '\0')) && ((DAT_14ca84ef5 != '\0' || (DAT_14ca84efa == '\x01')))) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
      uVar6 = 0;
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar6 = (ulonglong)(bVar4 ^ 1);
    }
    if (*(int *)(lVar2 + uVar6 * 4) == 0) goto LAB_1403fc318;
    cVar3 = FUN_144b1ce18();
    if ((cVar3 != '\0') && (cVar3 = (**(code **)(*param_1 + 0x68))(param_1), cVar3 != '\0')) {
      if (((*(byte *)((longlong)param_1 + 0x6e) & 2) == 0) ||
         ((cVar3 = (**(code **)(*param_1 + 0x1f0))(param_1), cVar3 == '\0' &&
          ((*(byte *)(param_1 + 0xe) & 8) == 0)))) {
        lVar2 = DAT_14cafaec0;
        if ((*(byte *)((longlong)param_1 + 0x79) & 2) != 0) {
          if (*(int *)(lVar1 + 0xc60) == 0x40000002) {
            uVar6 = 0;
          }
          else {
            bVar4 = FUN_144a61b4f();
            uVar6 = (ulonglong)(bVar4 ^ 1);
          }
          if (*(int *)(lVar2 + uVar6 * 4) != 0) goto LAB_1403fc349;
        }
        goto LAB_1403fc55f;
      }
      goto LAB_1403fc349;
    }
  }
  else {
LAB_1403fc318:
    cVar3 = FUN_14498f84a();
    if ((((cVar3 != '\0') && ((*(byte *)(param_1 + 0xe) & 0x10) != 0)) &&
        ((*(byte *)((longlong)param_1 + 0x76) & 3) != 0)) &&
       ((cVar3 = (**(code **)(*param_1 + 0x1f0))(param_1), cVar3 != '\0' ||
        ((*(byte *)(param_1 + 0xe) & 8) != 0)))) {
LAB_1403fc349:
      bVar4 = 1;
      goto LAB_1403fc34b;
    }
  }
LAB_1403fc55f:
  bVar4 = 0;
LAB_1403fc34b:
  *(byte *)((longlong)param_1 + 0x6f) =
       *(byte *)((longlong)param_1 + 0x6f) & 0xfd |
       ((*(byte *)(param_1 + 0xe) & 4) >> 2 & bVar4) * '\x02';
  return;
}



// FUNCTION 1403fc5fe FUN_1403fc5fe body=5725 status=ok
// SIG undefined FUN_1403fc5fe(void)

undefined8 * FUN_1403fc5fe(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  undefined2 uVar9;
  int iVar10;
  DWORD DVar11;
  DWORD DVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  longlong lVar21;
  ulonglong uVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  longlong lVar26;
  longlong *plVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  code *local_98;
  code *local_90;
  longlong *local_88;
  longlong *local_80;
  code *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *param_1 = &PTR_LAB_14aa535f0;
  puVar4 = (undefined8 *)param_2[0x13];
  param_1[6] = 0;
  iVar10 = *(int *)(puVar4 + 1);
  pvVar5 = (void *)*puVar4;
  *(int *)(param_1 + 7) = iVar10;
  if ((longlong)iVar10 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 6,iVar10,0);
    memcpy((void *)param_1[6],pvVar5,(longlong)iVar10 << 2);
  }
  plVar15 = param_1 + 8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  FUN_14475e67c(plVar15,2);
  bVar28 = false;
  do {
    iVar10 = *(int *)(param_1 + 9);
    *(uint *)(param_1 + 9) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0x4c) < iVar10 + 1U) {
      FUN_1401c3474(plVar15,iVar10);
    }
    *(undefined1 *)(*plVar15 + (longlong)iVar10) = 1;
    bVar29 = !bVar28;
    bVar28 = true;
  } while (bVar29);
  plVar27 = param_1 + 10;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 2) {
    FUN_144750f90(plVar27,2);
  }
  bVar28 = false;
  do {
    iVar10 = *(int *)(param_1 + 0xb);
    *(uint *)(param_1 + 0xb) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0x5c) < iVar10 + 1U) {
      FUN_1467ff840(plVar27,iVar10);
    }
    puVar4 = (undefined8 *)(*plVar27 + (longlong)iVar10 * 0x10);
    *puVar4 = 0;
    puVar4[1] = 0x3f80000000000000;
    bVar29 = !bVar28;
    bVar28 = true;
  } while (bVar29);
  iVar10 = 0x7fff;
  if (*(int *)((longlong)param_2 + 0x34) < 0x7fff) {
    iVar10 = *(int *)((longlong)param_2 + 0x34);
  }
  uVar9 = 0x8000;
  if (-0x8000 < iVar10) {
    uVar9 = (undefined2)iVar10;
  }
  *(undefined2 *)(param_1 + 0xc) = uVar9;
  *(int *)((longlong)param_1 + 100) = (int)param_2[7];
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((longlong)param_2 + 0x31);
  *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)((longlong)param_2 + 0x3c);
  bVar23 = *(byte *)((longlong)param_1 + 0x6b);
  bVar16 = (byte)(*(uint *)((longlong)param_2 + 0xc) >> 7) & 2;
  *(byte *)((longlong)param_1 + 0x6b) = bVar23 & 0xfd | bVar16;
  bVar17 = (byte)(*(uint *)((longlong)param_2 + 0xc) >> 7) & 4;
  *(byte *)((longlong)param_1 + 0x6b) = bVar23 & 0xf9 | bVar16 | bVar17;
  bVar18 = (*(byte *)(param_2 + 1) & 2) << 2;
  *(byte *)((longlong)param_1 + 0x6b) = bVar23 & 0xc1 | bVar16 | bVar17 | bVar18 | 0x10;
  bVar19 = (*(byte *)(param_2 + 1) & 4) << 4;
  *(byte *)((longlong)param_1 + 0x6b) = bVar23 & 0x81 | bVar16 | bVar17 | bVar18 | 0x10 | bVar19;
  *(byte *)((longlong)param_1 + 0x6b) =
       bVar23 & 1 | bVar16 | bVar17 | bVar18 | 0x10 | bVar19 | (*(byte *)(param_2 + 1) & 8) << 4;
  bVar23 = *(byte *)((longlong)param_1 + 0x6c);
  bVar16 = (byte)(*(uint *)((longlong)param_2 + 0xc) >> 0xb) & 2;
  *(byte *)((longlong)param_1 + 0x6c) = bVar23 & 0xfd | bVar16;
  bVar17 = (byte)(*(uint *)((longlong)param_2 + 0xc) >> 9) & 4;
  *(byte *)((longlong)param_1 + 0x6c) = bVar23 & 0xf9 | bVar16 | bVar17;
  bVar18 = *(byte *)(param_2 + 1) >> 1 & 8;
  *(byte *)((longlong)param_1 + 0x6c) = bVar23 & 0xe1 | bVar16 | bVar17 | bVar18;
  *(byte *)((longlong)param_1 + 0x6c) =
       bVar23 & 0xc1 | bVar16 | bVar17 | bVar18 | *(byte *)(param_2 + 1) & 0x20;
  bVar23 = *(byte *)((longlong)param_1 + 0x6d);
  bVar16 = *(byte *)((longlong)param_2 + 0x49) & 7;
  *(byte *)((longlong)param_1 + 0x6d) = bVar23 & 0xf8 | bVar16;
  bVar17 = (*(byte *)((longlong)param_2 + 0x3d) & 7) << 3;
  *(byte *)((longlong)param_1 + 0x6d) = bVar23 & 0xc0 | bVar16 | bVar17;
  bVar18 = (byte)(*(uint *)((longlong)param_2 + 0xc) >> 0xe) & 0x40;
  *(byte *)((longlong)param_1 + 0x6d) = bVar23 & 0x80 | bVar16 | bVar17 | bVar18;
  *(byte *)((longlong)param_1 + 0x6d) = bVar16 | bVar17 | bVar18 | (char)param_2[1] * '\x02' & 0x80U
  ;
  bVar16 = *(byte *)(param_2 + 1) >> 7;
  bVar23 = *(byte *)((longlong)param_1 + 0x6e);
  *(byte *)((longlong)param_1 + 0x6e) = bVar23 & 0xfe | bVar16;
  bVar17 = (byte)(*(uint *)(param_2 + 1) >> 7) & 2;
  *(byte *)((longlong)param_1 + 0x6e) = bVar23 & 0xfc | bVar16 | bVar17;
  bVar18 = (byte)(*(uint *)(param_2 + 1) >> 7) & 4;
  *(byte *)((longlong)param_1 + 0x6e) = bVar23 & 0xf8 | bVar16 | bVar17 | bVar18;
  bVar19 = (byte)(*(uint *)(param_2 + 1) >> 7) & 8;
  *(byte *)((longlong)param_1 + 0x6e) = bVar23 & 0xe0 | bVar16 | bVar17 | bVar18 | bVar19;
  bVar20 = (byte)(*(uint *)((longlong)param_2 + 0xc) >> 9) & 0x20;
  *(byte *)((longlong)param_1 + 0x6e) = bVar23 & 0xc0 | bVar16 | bVar17 | bVar18 | bVar19 | bVar20;
  *(byte *)((longlong)param_1 + 0x6e) =
       bVar16 | bVar17 | bVar18 | bVar19 | bVar20 | (byte)(*(uint *)(param_2 + 1) >> 5) & 0x40 |
       0x80;
  *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0xc0 | 0x3c;
  *(byte *)((longlong)param_1 + 0x6f) =
       (byte)(*(uint *)((longlong)param_2 + 0xc) >> 0xf) & 0x40 | 0xbc;
  bVar28 = (*(uint *)((longlong)param_2 + 0xc) & 0x800000) == 0 &&
           (~*(uint *)(param_2 + 1) & 0x1001) == 0;
  bVar23 = *(byte *)(param_1 + 0xe);
  *(byte *)(param_1 + 0xe) = bVar23 & 0xfe | bVar28;
  bVar16 = (byte)(*(uint *)(param_2 + 1) >> 0xd) & 2;
  *(byte *)(param_1 + 0xe) = bVar23 & 0xfc | bVar28 | bVar16;
  bVar17 = (byte)(*(uint *)(param_2 + 1) >> 0xd) & 4;
  *(byte *)(param_1 + 0xe) = bVar23 & 0xf8 | bVar28 | bVar16 | bVar17;
  bVar18 = ((~*(uint *)(param_2 + 1) & 0x18000) == 0) << 3;
  *(byte *)(param_1 + 0xe) = bVar23 & 0xf0 | bVar28 | bVar16 | bVar17 | bVar18;
  bVar19 = (byte)(*(uint *)(param_2 + 1) >> 0xd) & 0x10;
  *(byte *)(param_1 + 0xe) = bVar23 & 0xe0 | bVar28 | bVar16 | bVar17 | bVar18 | bVar19;
  *(byte *)(param_1 + 0xe) =
       bVar23 & 0xc0 | bVar28 | bVar16 | bVar17 | bVar18 | bVar19 |
       ((~*(uint *)(param_2 + 1) & 0x2001) == 0) << 5;
  *(char *)((longlong)param_1 + 0x71) = (char)param_2[9];
  bVar28 = (~*(uint *)(param_2 + 1) & 0x41001) == 0;
  bVar23 = *(byte *)((longlong)param_1 + 0x72);
  *(byte *)((longlong)param_1 + 0x72) = bVar23 & 0xfe | bVar28;
  bVar16 = ((~*(uint *)(param_2 + 1) & 0x80001) == 0) * '\x02';
  *(byte *)((longlong)param_1 + 0x72) = bVar23 & 0xe0 | bVar28 | bVar16;
  bVar17 = ((~*(uint *)(param_2 + 1) & 0x100001) == 0) << 5;
  *(byte *)((longlong)param_1 + 0x72) = bVar23 & 0xc0 | bVar28 | bVar16 | bVar17;
  bVar18 = (byte)(*(uint *)(param_2 + 1) >> 0xf) & 0x40;
  *(byte *)((longlong)param_1 + 0x72) = bVar23 & 0x80 | bVar28 | bVar16 | bVar17 | bVar18;
  *(byte *)((longlong)param_1 + 0x72) =
       bVar28 | bVar16 | bVar17 | bVar18 | (byte)(*(uint *)(param_2 + 1) >> 0xf) & 0x80;
  bVar28 = (*(uint *)(param_2 + 1) & 0xc00000) != 0;
  bVar23 = *(byte *)((longlong)param_1 + 0x73);
  *(byte *)((longlong)param_1 + 0x73) = bVar23 & 0xfe | bVar28;
  bVar16 = (byte)(*(uint *)(param_2 + 1) >> 0x17) & 2;
  *(byte *)((longlong)param_1 + 0x73) = bVar23 & 0xfc | bVar28 | bVar16;
  bVar17 = (byte)(*(uint *)(param_2 + 1) >> 0x17) & 4;
  *(byte *)((longlong)param_1 + 0x73) = bVar23 & 0xf8 | bVar28 | bVar16 | bVar17;
  bVar18 = (byte)(*(uint *)(param_2 + 1) >> 0x17) & 8;
  *(byte *)((longlong)param_1 + 0x73) = bVar23 & 0xf0 | bVar28 | bVar16 | bVar17 | bVar18;
  *(byte *)((longlong)param_1 + 0x73) =
       bVar28 | bVar16 | bVar17 | bVar18 | (byte)(*(uint *)(param_2 + 1) >> 0x17) & 0x10;
  *(undefined1 *)((longlong)param_1 + 0x74) = 1;
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0x80 | 6;
  bVar23 = *(byte *)((longlong)param_1 + 0x76);
  *(byte *)((longlong)param_1 + 0x76) = bVar23 & 0xc0 | 0x30;
  bVar16 = (byte)(*(uint *)((longlong)param_2 + 0xc) >> 7) & 0x40;
  *(byte *)((longlong)param_1 + 0x76) = bVar23 & 0x80 | 0x30 | bVar16;
  *(byte *)((longlong)param_1 + 0x76) =
       (*(char *)((longlong)param_2 + 0x31) != '\x02') << 7 | bVar16 | 0x30;
  bVar23 = *(byte *)((longlong)param_1 + 0x77);
  bVar16 = *(byte *)((longlong)param_2 + 0xc) >> 6 & 1;
  *(byte *)((longlong)param_1 + 0x77) = bVar16 | bVar23 & 0xf8;
  *(byte *)((longlong)param_1 + 0x77) =
       bVar16 | bVar23 & 0xe0 | *(byte *)((longlong)param_2 + 0xc) >> 4 & 8;
  local_88 = plVar27;
  local_80 = plVar15;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cafaea0) && (FUN_144b3d300(&DAT_14cafaea0), DAT_14cafaea0 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar15 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.gbx.ProjectAllowGbxForegroundDepth",1);
    if (plVar15 == (longlong *)0x0) {
      DAT_14cafae98 = 0;
    }
    else {
      DAT_14cafae98 = (**(code **)(*plVar15 + 0x68))(plVar15);
    }
    _Init_thread_footer(&DAT_14cafaea0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cafaea8) &&
     (FUN_144b3d300(&DAT_14cafaea8), lVar14 = DAT_14cafae98, DAT_14cafaea8 == -1)) {
    iVar10 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if ((iVar10 == 0x40000002) || ((DAT_14c86a9f8 != '\x01' || (iVar10 == 2)))) {
      uVar22 = 0;
    }
    else if (iVar10 == 1) {
      DVar11 = FUN_140ad26c0();
      DVar12 = GetCurrentThreadId();
      uVar22 = (ulonglong)(DVar11 != DVar12);
    }
    else {
      uVar22 = 1;
    }
    DAT_14cafaea4 = *(int *)(lVar14 + uVar22 * 4) != 0;
    _Init_thread_footer(&DAT_14cafaea8);
  }
  uVar13 = 0;
  bVar23 = (*(byte *)(param_2 + 2) & 1) << 6;
  if (DAT_14cafaea4 == '\0') {
    bVar23 = 0;
  }
  bVar16 = *(byte *)((longlong)param_1 + 0x77);
  bVar17 = *(byte *)(param_1 + 0xf);
  *(byte *)((longlong)param_1 + 0x77) = bVar16 & 0xbf | bVar23;
  *(byte *)((longlong)param_1 + 0x77) = bVar16 & 0x3f | bVar23 | (*(byte *)(param_2 + 2) & 2) << 6;
  bVar23 = (byte)((uint)(int)param_2[1] >> 0x1c) & 1;
  *(byte *)(param_1 + 0xf) = bVar17 & 0xfe | bVar23;
  bVar16 = (byte)((uint)(int)param_2[1] >> 0x1c) & 2;
  *(byte *)(param_1 + 0xf) = bVar17 & 0xfc | bVar23 | bVar16;
  bVar18 = (byte)((uint)(int)param_2[1] >> 0x1c) & 4;
  *(byte *)(param_1 + 0xf) = bVar17 & 0xf8 | bVar23 | bVar16 | bVar18;
  bVar19 = (byte)((uint)(int)param_2[1] >> 0x1c) & 8;
  *(byte *)(param_1 + 0xf) = bVar17 & 0xf0 | bVar23 | bVar16 | bVar18 | bVar19;
  bVar20 = (*(byte *)((longlong)param_2 + 0xc) & 1) << 4;
  *(byte *)(param_1 + 0xf) = bVar17 & 0xe0 | bVar23 | bVar16 | bVar18 | bVar19 | bVar20;
  bVar24 = (*(byte *)((longlong)param_2 + 0xc) & 2) << 4;
  *(byte *)(param_1 + 0xf) = bVar17 & 0xc0 | bVar23 | bVar16 | bVar18 | bVar19 | bVar20 | bVar24;
  bVar25 = (*(byte *)((longlong)param_2 + 0xc) & 4) << 4;
  *(byte *)(param_1 + 0xf) =
       bVar17 & 0x80 | bVar23 | bVar16 | bVar18 | bVar19 | bVar20 | bVar24 | bVar25;
  *(byte *)(param_1 + 0xf) =
       bVar23 | bVar16 | bVar18 | bVar19 | bVar20 | bVar24 | bVar25 |
       (*(byte *)((longlong)param_2 + 0xc) & 8) << 4;
  bVar16 = *(byte *)((longlong)param_2 + 0xc) >> 4 & 1;
  bVar23 = *(byte *)((longlong)param_1 + 0x79);
  *(byte *)((longlong)param_1 + 0x79) = bVar23 & 0xfe | bVar16;
  *(byte *)((longlong)param_1 + 0x79) =
       bVar23 & 0xfc | bVar16 | *(byte *)((longlong)param_2 + 0xc) >> 4 & 2;
  *(uint *)((longlong)param_1 + 0x7c) =
       *(uint *)((longlong)param_1 + 0x7c) & 0xfffffffe | *(uint *)(param_2 + 2) >> 3 & 1;
  *(char *)(param_1 + 0x10) = (char)param_2[8];
  bVar23 = (byte)*(undefined4 *)((longlong)param_2 + 0x44);
  if (8 < (byte)(bVar23 - 1)) {
    bVar23 = 0;
  }
  *(byte *)((longlong)param_1 + 0x81) = bVar23;
  *(byte *)((longlong)param_1 + 0x82) = *(byte *)((longlong)param_2 + 0x45) & 7;
  *(int *)((longlong)param_1 + 0x84) = (int)param_2[0xd];
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)((longlong)param_2 + 0x46);
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_2 + 0x47);
  *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)((longlong)param_2 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)((longlong)param_2 + 0x4c);
  *(char *)((longlong)param_1 + 0xab) = (char)param_2[10];
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x41) = *(undefined4 *)((longlong)param_2 + 0x54);
  param_1[0x42] = param_2[0x14];
  param_1[0x43] = 0;
  param_1[0x44] = param_2[0x17];
  param_1[0x45] = param_2[0x18];
  if (param_2[0xf] != 0) {
    uVar13 = *(undefined8 *)(param_2[0xf] + 0x18);
  }
  param_1[0x46] = uVar13;
  param_1[0x47] = param_3;
  lVar14 = param_2[0xf];
  if (lVar14 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_a0 = &local_78;
      local_78 = (code *)&LAB_14355090c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_147b8e16d;
      local_b0 = (code *)&LAB_140810a38;
      local_b8 = L"Engine";
      local_c0 = 0x800000000;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar26 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_a0 = &local_78;
      local_78 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = 0x400000000;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar14 = *(longlong *)(lVar14 + 0x20);
    if (lVar14 != 0) {
      iVar10 = *(int *)(lVar26 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < iVar10) ||
           (lVar21 = lVar14,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar10 * 8)
           != lVar26 + 0x30)) {
          lVar21 = 0;
        }
      } while ((lVar21 == 0) && (lVar14 = *(longlong *)(lVar14 + 0x20), lVar14 != 0));
      if (lVar21 != 0) {
        lVar14 = param_2[0xf];
        if (lVar14 != 0) {
          if (DAT_14cae8b20 == 0) {
            local_a0 = &local_78;
            local_78 = (code *)&LAB_14355090c;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a8 = &LAB_147b8e16d;
            local_b0 = (code *)&LAB_140810a38;
            local_b8 = L"Engine";
            local_c0 = 0x800000000;
            local_c8 = 0x10000000;
            local_d0 = 8;
            local_d8 = 0x3f0;
            FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
          }
          lVar26 = DAT_14cae8b20;
          if (DAT_14c951858 == 0) {
            local_a0 = &local_78;
            local_78 = FUN_1449e2820;
            local_90 = FUN_14081d0ea;
            local_98 = FUN_14081d0ea;
            local_a8 = &LAB_1468c5283;
            local_b0 = FUN_142809da0;
            local_b8 = L"Engine";
            local_c0 = 0x400000000;
            local_c8 = 0x10000000;
            local_d0 = 8;
            local_d8 = 0x50;
            FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
          }
          lVar14 = *(longlong *)(lVar14 + 0x20);
          if (lVar14 != 0) {
            iVar10 = *(int *)(lVar26 + 0x38);
            do {
              if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < iVar10) ||
                 (lVar21 = lVar14,
                 *(longlong *)
                  (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar10 * 8) !=
                 lVar26 + 0x30)) {
                lVar21 = 0;
              }
            } while ((lVar21 == 0) && (lVar14 = *(longlong *)(lVar14 + 0x20), lVar14 != 0));
            goto LAB_1403fcd73;
          }
        }
        lVar21 = 0;
LAB_1403fcd73:
        lVar26 = lVar21;
        lVar14 = lVar26;
        if (*(longlong *)(lVar26 + 0x20) != 0) goto code_r0x0001403fcd82;
        goto LAB_1403fcd94;
      }
    }
  }
  uVar13 = 0;
  goto LAB_1403fcd9d;
code_r0x0001403fcd82:
  lVar21 = *(longlong *)(lVar26 + 0x20);
  if ((*(uint *)(lVar26 + 8) >> 0x1c & 1) == 0) goto LAB_1403fcd73;
  lVar14 = FUN_142840154(lVar26);
LAB_1403fcd94:
  if (lVar14 == 0) {
    lVar21 = *(longlong *)(lVar26 + 0x20);
    goto LAB_1403fcd73;
  }
  uVar13 = *(undefined8 *)(lVar14 + 0x18);
LAB_1403fcd9d:
  param_1[0x48] = uVar13;
  *(int *)(param_1 + 0x49) = (int)param_2[0xb];
  param_1[0x4a] = 0;
  lVar14 = param_2[0xe];
  if (lVar14 == 0) {
LAB_1403fcdec:
    lVar14 = 0;
  }
  else {
    if (DAT_14cac6e60 == 0) {
      local_a0 = &local_78;
      local_78 = FUN_144a7958c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_142b47bc4;
      local_a8 = &LAB_1478989f1;
      local_b0 = (code *)&LAB_146391124;
      local_b8 = L"Engine";
      local_c0 = 0x10000000000;
      local_c8 = 0x10000005;
      local_d0 = 0x10;
      local_d8 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) != DAT_14cac6e60 + 0x30)) goto LAB_1403fcdec;
  }
  param_1[0x4b] = lVar14;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  uVar30 = -(uint)(0.0 < *(float *)((longlong)param_2 + 0x5c));
  *(uint *)(param_1 + 0x4e) =
       ~uVar30 & 0x7f7fffff | (uint)*(float *)((longlong)param_2 + 0x5c) & uVar30;
  *(int *)((longlong)param_1 + 0x274) = (int)param_2[0xc];
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x27c) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x52) = 0;
  lVar14 = param_2[0xf];
  if (lVar14 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_a0 = &local_78;
      local_78 = (code *)&LAB_14355090c;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_147b8e16d;
      local_b0 = (code *)&LAB_140810a38;
      local_b8 = L"Engine";
      local_c0 = 0x800000000;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar26 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_a0 = &local_78;
      local_78 = FUN_1449e2820;
      local_90 = FUN_14081d0ea;
      local_98 = FUN_14081d0ea;
      local_a8 = &LAB_1468c5283;
      local_b0 = FUN_142809da0;
      local_b8 = L"Engine";
      local_c0 = 0x400000000;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar14 = *(longlong *)(lVar14 + 0x20);
    if (lVar14 != 0) {
      iVar10 = *(int *)(lVar26 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < iVar10) ||
           (lVar21 = lVar14,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) + (longlong)iVar10 * 8)
           != lVar26 + 0x30)) {
          lVar21 = 0;
        }
      } while ((lVar21 == 0) && (lVar14 = *(longlong *)(lVar14 + 0x20), lVar14 != 0));
      if ((lVar21 != 0) &&
         (bVar23 = *(byte *)(lVar21 + 0x241),
         *(byte *)((longlong)param_1 + 0x76) =
              *(byte *)((longlong)param_1 + 0x76) & 0xf7 | bVar23 >> 4 & 8, (char)bVar23 < '\0')) {
        *(byte *)((longlong)param_1 + 0x6e) =
             (*(byte *)((longlong)param_1 + 0x6e) & 0xef | *(byte *)(lVar21 + 0x240) >> 1 & 0x10) ^
             0x10;
      }
    }
  }
  if ((*(byte *)(param_2 + 6) & 1) != 0) {
    *(byte *)((longlong)param_1 + 0x6e) = *(byte *)((longlong)param_1 + 0x6e) | 0x10;
  }
  if ((*(byte *)((longlong)param_1 + 0x6f) & 0x60) == 0x20) {
    *(byte *)((longlong)param_1 + 0x6f) = *(byte *)((longlong)param_1 + 0x6f) & 0x9f;
  }
  bVar23 = *(byte *)((longlong)param_1 + 0x6b);
  bVar16 = bVar23 & 2;
  if (*(short *)((longlong)param_2 + 0xc) < 0) {
    bVar16 = 0;
  }
  *(byte *)((longlong)param_1 + 0x6b) = bVar23 & 0xfd | bVar16;
  if ((((0x3f < bVar23) || ((*(byte *)((longlong)param_1 + 0x6c) & 0x20) != 0)) ||
      (*(int *)((longlong)param_1 + 0x27c) != 0)) && (param_1 + 0x1d != param_2 + 0x11)) {
    if (param_1[0x1d] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1d] = param_2[0x11];
    param_2[0x11] = 0;
    *(int *)(param_1 + 0x1e) = (int)param_2[0x12];
    *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0x94);
    param_2[0x12] = 0;
  }
  cVar8 = FUN_1449d9015(*(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[0x42] + 8) * 2),
                        0);
  if ((cVar8 != '\0') && ((longlong)(int)param_2[0x1d] != 0)) {
    plVar15 = (longlong *)param_2[0x1c];
    plVar27 = plVar15 + (int)param_2[0x1d];
    do {
      lVar14 = *plVar15;
      if (lVar14 != 0) {
        iVar10 = *(int *)(param_1 + 0x1a);
        *(uint *)(param_1 + 0x1a) = iVar10 + 1U;
        if (*(uint *)((longlong)param_1 + 0xd4) < iVar10 + 1U) {
          FUN_1417ea19e(param_1 + 0x19,iVar10);
        }
        *(longlong *)(param_1[0x19] + (longlong)iVar10 * 8) = lVar14;
        cVar8 = *(char *)(lVar14 + 0x34);
        lVar14 = param_1[0x1b];
        iVar10 = *(int *)(param_1 + 0x1c);
        lVar26 = (longlong)iVar10;
        if (lVar26 != 0) {
          lVar21 = 0;
          do {
            if (*(char *)(lVar14 + lVar21) == cVar8) {
              if ((int)lVar21 != -1) goto LAB_1403fd06b;
              break;
            }
            lVar21 = lVar21 + 1;
          } while (lVar26 != lVar21);
        }
        *(uint *)(param_1 + 0x1c) = iVar10 + 1U;
        if (*(uint *)((longlong)param_1 + 0xe4) < iVar10 + 1U) {
          FUN_1417ea300(param_1 + 0x1b,iVar10);
          lVar14 = param_1[0x1b];
        }
        *(char *)(lVar14 + lVar26) = cVar8;
      }
LAB_1403fd06b:
      plVar15 = plVar15 + 1;
    } while (plVar15 != plVar27);
  }
  if (0 < (int)param_2[0x1d]) {
    *(byte *)((longlong)param_1 + 0x6b) =
         ((char)param_2[0x1e] == '\x02') << 4 |
         *(byte *)((longlong)param_1 + 0x6b) & 0xcf | ((char)param_2[0x1e] == '\0') << 5;
  }
  if ((0 < *(int *)(param_1 + 0x1a)) && (fVar1 = *(float *)((longlong)param_2 + 0xf4), 0.0 < fVar1))
  {
    fVar2 = *(float *)(param_1 + 0x4e);
    if (fVar1 <= *(float *)(param_1 + 0x4e)) {
      fVar2 = fVar1;
    }
    *(float *)(param_1 + 0x4e) = fVar2;
  }
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0xaf;
  uVar3 = *(undefined4 *)(param_1[0x42] + 8);
  local_78 = (code *)0x0;
  uStack_70 = 0;
  (**(code **)(*param_2 + 8))(param_2,&local_78,0);
  pcVar7 = local_78;
  lVar14 = (longlong)(int)uStack_70;
  if (lVar14 != 0) {
    lVar26 = 0;
    do {
      if ((*(longlong *)(pcVar7 + lVar26) != 0) &&
         (cVar8 = FUN_144ae5c06(*(longlong *)(pcVar7 + lVar26),uVar3), cVar8 != '\0')) {
        *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x10;
        break;
      }
      lVar26 = lVar26 + 8;
    } while (lVar14 * 8 != lVar26);
  }
  pcVar7 = local_78;
  plVar15 = local_88;
  if (((&DAT_14ca814b8)
       [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[0x42] + 8) * 2) * 0xf] !=
       1) && (((&DAT_14ca814cf)
               [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_1[0x42] + 8) * 2) *
                0x3c] & 0x40) != 0)) {
    lVar14 = (longlong)(int)uStack_70;
    if (lVar14 != 0) {
      lVar26 = 0;
      do {
        plVar27 = *(longlong **)(pcVar7 + lVar26);
        if (((plVar27 != (longlong *)0x0) &&
            (cVar8 = (**(code **)(*plVar27 + 0x508))(plVar27), cVar8 != '\0')) &&
           (uVar30 = (**(code **)(*plVar27 + 0x408))(plVar27), uVar30 < 2)) {
          *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 0x40;
          break;
        }
        lVar26 = lVar26 + 8;
      } while (lVar14 * 8 != lVar26);
    }
  }
  plVar27 = local_80;
  if (local_78 != (code *)0x0) {
    FUN_1400020a8(local_78);
  }
  lVar26 = DAT_14cafae58;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar10 = *(int *)(lVar14 + 0xc60);
  if (iVar10 == 0x40000002) {
    uVar22 = 0;
  }
  else {
    bVar28 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar10 != 2)) {
      if (iVar10 == 1) {
        DVar11 = FUN_140ad26c0();
        DVar12 = GetCurrentThreadId();
        bVar28 = DVar11 == DVar12;
        plVar15 = local_88;
      }
      else {
        bVar28 = false;
      }
    }
    uVar22 = (ulonglong)(bVar28 ^ 1);
  }
  bVar23 = *(byte *)(lVar26 + uVar22 * 4);
  *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) & 0x7f | bVar23 << 7;
  if (((bVar23 & 1) == 0) && ((*(byte *)((longlong)param_2 + 0xe) & 2) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cafdeb8) && (FUN_144b3d300(&DAT_14cafdeb8), DAT_14cafdeb8 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14cafdeb0 =
           (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.VelocityOutputPass",1);
      _Init_thread_footer(&DAT_14cafdeb8);
      plVar15 = local_88;
      plVar27 = local_80;
    }
    if (DAT_14cafdeb0 == (longlong *)0x0) {
      bVar28 = false;
    }
    else {
      iVar10 = (**(code **)(*DAT_14cafdeb0 + 0xb0))();
      bVar28 = iVar10 != 2;
    }
    lVar26 = DAT_14cafae40;
    iVar10 = *(int *)(lVar14 + 0xc60);
    if (iVar10 == 0x40000002) {
      uVar22 = 0;
    }
    else {
      bVar29 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar10 != 2)) {
        if (iVar10 == 1) {
          DVar11 = FUN_140ad26c0();
          DVar12 = GetCurrentThreadId();
          bVar29 = DVar11 == DVar12;
          plVar15 = local_88;
        }
        else {
          bVar29 = false;
        }
      }
      uVar22 = (ulonglong)(bVar29 ^ 1);
    }
    iVar10 = *(int *)(lVar26 + uVar22 * 4);
    if (((iVar10 == 1) || ((bool)(bVar28 & iVar10 == 2))) &&
       ((*(byte *)((longlong)param_1 + 0x75) & 0x10) != 0)) {
      *(byte *)((longlong)param_1 + 0x75) = *(byte *)((longlong)param_1 + 0x75) | 8;
    }
  }
  lVar14 = param_2[0xe];
  if (lVar14 == 0) goto LAB_1403fd415;
  if (DAT_14cac6e60 == 0) {
    local_78 = FUN_144a7958c;
    local_90 = FUN_14081d0ea;
    local_98 = FUN_142b47bc4;
    local_a8 = &LAB_1478989f1;
    local_b0 = (code *)&LAB_146391124;
    local_b8 = L"Engine";
    local_c0 = 0x10000000000;
    local_c8 = 0x10000005;
    local_d0 = 0x10;
    local_d8 = 0x620;
    local_a0 = &local_78;
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
  }
  if ((*(int *)(*(longlong *)(lVar14 + 0x10) + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) != DAT_14cac6e60 + 0x30)) goto LAB_1403fd415;
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x2f0));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar23 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 == '\x01') {
      bVar23 = DAT_14c8442b8 & 1;
      goto joined_r0x0001403fdbff;
    }
  }
  else {
joined_r0x0001403fdbff:
    if (((bVar23 == 0) && (DAT_14c760d84 != 0)) &&
       (((DAT_14ca84f5a & 1) != 0 &&
        ((((DAT_14cafb2b0 != 0 && (*(int *)(lVar14 + 0x328) != *(int *)(lVar14 + 0x32c))) &&
          ((*(byte *)(lVar14 + 0x2e8) & 0x30) == 0x10)) &&
         (puVar4 = param_1 + 0x4c, puVar4 != (undefined8 *)(lVar14 + 0x318))))))) {
      iVar10 = *(int *)(lVar14 + 800);
      pvVar5 = *(void **)(lVar14 + 0x318);
      *(int *)(param_1 + 0x4d) = iVar10;
      if (iVar10 == 0 && *(int *)((longlong)param_1 + 0x26c) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
      }
      else {
        FUN_1447bda9e(puVar4,iVar10);
        if (iVar10 != 0) {
          memcpy((void *)*puVar4,pvVar5,(longlong)iVar10 << 2);
        }
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(lVar14 + 0x2f0));
  plVar15 = local_88;
  plVar27 = local_80;
LAB_1403fd415:
  plVar6 = (longlong *)param_2[0x19];
  if (plVar27 != plVar6) {
    iVar10 = (int)plVar6[1];
    pvVar5 = (void *)*plVar6;
    *(int *)(param_1 + 9) = iVar10;
    if (iVar10 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      FUN_1447cd5fa(plVar27,iVar10);
      if (iVar10 != 0) {
        memcpy((void *)*plVar27,pvVar5,(longlong)iVar10);
      }
    }
  }
  if (plVar15 != plVar6 + 2) {
    iVar10 = (int)plVar6[3];
    pvVar5 = (void *)plVar6[2];
    *(int *)(param_1 + 0xb) = iVar10;
    if (iVar10 == 0 && *(int *)((longlong)param_1 + 0x5c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    }
    else {
      FUN_14479fa02(plVar15,iVar10);
      if (iVar10 != 0) {
        memcpy((void *)*plVar15,pvVar5,(longlong)iVar10 << 4);
      }
    }
  }
  param_1[0x50] = param_2[4];
  param_1[0x51] = param_2[5];
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403fdc5c FUN_1403fdc5c body=248 status=ok
// SIG undefined FUN_1403fdc5c(void)

longlong * FUN_1403fdc5c(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144a91e46();
  local_48 = param_3;
  local_40 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_30,param_2,DAT_14cae9720);
  *param_1 = local_30;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
    if (local_30 != 0) {
      LOCK();
      puVar1 = (uint *)(local_30 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_30 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_30 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_30;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403fdd56 FUN_1403fdd56 body=815 status=ok
// SIG undefined FUN_1403fdd56(void)

void FUN_1403fdd56(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  void *_Dst;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar7 = *piVar1;
  if (iVar7 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar7 = *piVar1;
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = 0x40000010;
  }
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x42) == '\x01') {
    lVar6 = *(longlong *)(lVar5 + 8);
    iVar3 = *(int *)(lVar6 + 0x2c8);
    if (iVar3 == 0) {
      uVar15 = 1;
      iVar19 = 0;
      uVar14 = 0;
      iVar8 = 0;
    }
    else {
      puVar9 = *(uint **)(lVar6 + 0x2c0);
      if (*(uint **)(lVar6 + 0x2c0) == (uint *)0x0) {
        puVar9 = (uint *)(lVar6 + 0x2b0);
      }
      uVar10 = *puVar9;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        uVar14 = 0;
        uVar15 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar15 = uVar14;
        }
        iVar19 = 0;
        do {
          if (uVar15 == uVar14) goto LAB_1403fdedd;
          iVar19 = iVar19 + 0x20;
          uVar10 = puVar9[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar10 == 0);
      }
      else {
        iVar19 = 0;
        uVar14 = 0;
      }
      uVar15 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar15 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar8 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar8) {
        iVar8 = iVar3;
      }
    }
    if (iVar8 != iVar3) {
      uVar10 = 0xffffffff;
      do {
        FUN_142e677e0(param_1 + 1,(longlong)iVar8 * 0x28 + *(longlong *)(lVar6 + 0x2a0));
        uVar10 = ~(uint)uVar15 & uVar10;
        puVar9 = *(uint **)(lVar6 + 0x2c0);
        if (*(uint **)(lVar6 + 0x2c0) == (uint *)0x0) {
          puVar9 = (uint *)(lVar6 + 0x2b0);
        }
        iVar4 = *(int *)(lVar6 + 0x2c8);
        iVar8 = (int)uVar14;
        lVar17 = (longlong)iVar8;
        uVar16 = puVar9[lVar17] & uVar10;
        if (uVar16 == 0) {
          iVar11 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar11 = iVar4 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar8) {
            iVar12 = iVar8;
          }
          if (iVar8 < iVar11) {
            lVar18 = 0;
            do {
              uVar16 = puVar9[lVar17 + lVar18 + 1];
              if (uVar16 != 0) {
                uVar14 = (ulonglong)(iVar8 + (int)lVar18 + 1);
                uVar10 = 0xffffffff;
                goto LAB_1403fe006;
              }
              iVar19 = iVar19 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar12 - lVar17 != lVar18);
            uVar10 = 0xffffffff;
            iVar8 = iVar12;
          }
          uVar14 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar4;
        }
        else {
LAB_1403fe006:
          uVar15 = (ulonglong)(-uVar16 & uVar16);
          uVar2 = uVar15 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar8 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar8) {
            iVar8 = iVar4;
          }
        }
      } while (iVar8 != iVar3);
    }
  }
  else {
    iVar3 = *(int *)(lVar5 + 0x28);
    if ((longlong)iVar3 != 0) {
      lVar6 = *(longlong *)(lVar5 + 0x20);
      lVar17 = 0;
      do {
        uVar10 = *(uint *)(*(longlong *)(lVar6 + lVar17) + 0x15c);
        if ((-1 < (int)uVar10) &&
           (lVar18 = *(longlong *)(lVar5 + 8), (int)uVar10 < *(int *)(lVar18 + 0x2c8))) {
          lVar13 = lVar18 + 0x2b0;
          if (*(longlong *)(lVar18 + 0x2c0) != 0) {
            lVar13 = *(longlong *)(lVar18 + 0x2c0);
          }
          if ((*(uint *)(lVar13 + (ulonglong)(uVar10 >> 5) * 4) >> (uVar10 & 0x1f) & 1) != 0) {
            FUN_142e677e0(param_1 + 1,(ulonglong)uVar10 * 0x28 + *(longlong *)(lVar18 + 0x2a0));
          }
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)iVar3 * 8 != lVar17);
    }
  }
LAB_1403fdedd:
  if (((*(char *)(lVar5 + 0x41) != '\0') || (0 < *(int *)(lVar5 + 0x38))) ||
     (0 < *(int *)(lVar5 + 0x28))) {
    _Dst = (void *)FUN_14001cc68(0xa0);
    memset(_Dst,0,0xa0);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x2e0);
    *(void **)(*(longlong *)(lVar5 + 8) + 0x2e0) = _Dst;
    if (lVar6 != 0) {
      FUN_1401a8ad8(lVar6);
      FUN_1400020a8(lVar6);
    }
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = iVar7;
  }
  return;
}



// FUNCTION 1403fe086 FUN_1403fe086 body=954 status=ok
// SIG undefined FUN_1403fe086(void)

void FUN_1403fe086(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_a8 [36];
  int local_84;
  int *local_80;
  longlong *local_78;
  uint *local_70;
  ulonglong local_68;
  undefined1 local_5c [20];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  iVar15 = *piVar14;
  if (iVar15 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar15 = *piVar14;
  }
  if ((iVar15 == 0x60000000) || (iVar15 == 0)) {
    *piVar14 = 0x40000010;
  }
  lVar5 = *param_1;
  if (*(char *)(lVar5 + 0x41) == '\x01') {
    lVar5 = *(longlong *)(lVar5 + 8);
    local_70 = (uint *)(lVar5 + 0x2b0);
    uVar3 = *(uint *)(lVar5 + 0x2c8);
    if (uVar3 == 0) {
      uVar20 = 1;
      iVar19 = 0;
      uVar16 = 0;
      uVar8 = 0;
    }
    else {
      puVar9 = *(uint **)(lVar5 + 0x2c0);
      if (*(uint **)(lVar5 + 0x2c0) == (uint *)0x0) {
        puVar9 = local_70;
      }
      uVar8 = *puVar9;
      if (uVar8 == 0) {
        iVar19 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar19 = uVar3 - 1;
        }
        uVar16 = 0;
        uVar20 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar20 = uVar16;
        }
        iVar19 = 0;
        do {
          if (uVar20 == uVar16) goto LAB_1403fe26f;
          iVar19 = iVar19 + 0x20;
          uVar8 = puVar9[uVar16 + 1];
          uVar16 = uVar16 + 1;
        } while (uVar8 == 0);
      }
      else {
        iVar19 = 0;
        uVar16 = 0;
      }
      uVar20 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar20 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      uVar8 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if ((int)uVar3 <= (int)uVar8) {
        uVar8 = uVar3;
      }
    }
    if (uVar8 != uVar3) {
      uVar10 = 0xffffffff;
      local_84 = iVar15;
      local_80 = piVar14;
      local_78 = param_1;
      local_68 = (ulonglong)uVar3;
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x2a0) + (longlong)(int)uVar8 * 0x28);
        uVar4 = *(undefined4 *)(*plVar1 + 0x15c);
        uVar7 = *(undefined8 *)(*(longlong *)(local_78[1] + 8) + 0x2e0);
        FUN_14726dbb6(plVar1,local_5c);
        FUN_14726db40(uVar7,local_5c,uVar4);
        uVar10 = ~(uint)uVar20 & uVar10;
        puVar9 = *(uint **)(lVar5 + 0x2c0);
        if (*(uint **)(lVar5 + 0x2c0) == (uint *)0x0) {
          puVar9 = local_70;
        }
        uVar3 = *(uint *)(lVar5 + 0x2c8);
        iVar15 = (int)uVar16;
        lVar17 = (longlong)iVar15;
        uVar8 = puVar9[lVar17] & uVar10;
        if (uVar8 == 0) {
          iVar12 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar12 = uVar3 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar19 = iVar19 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar15) {
            iVar13 = iVar15;
          }
          if (iVar15 < iVar12) {
            lVar18 = 0;
            do {
              uVar8 = puVar9[lVar17 + lVar18 + 1];
              if (uVar8 != 0) {
                uVar16 = (ulonglong)(iVar15 + (int)lVar18 + 1);
                uVar10 = 0xffffffff;
                goto LAB_1403fe39b;
              }
              iVar19 = iVar19 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar13 - lVar17 != lVar18);
            uVar10 = 0xffffffff;
            iVar15 = iVar13;
          }
          uVar16 = (ulonglong)(iVar15 + 1);
          uVar8 = uVar3;
        }
        else {
LAB_1403fe39b:
          uVar20 = (ulonglong)(-uVar8 & uVar8);
          uVar2 = uVar20 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          uVar8 = (iVar19 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if ((int)uVar3 <= (int)uVar8) {
            uVar8 = uVar3;
          }
        }
        piVar14 = local_80;
        iVar15 = local_84;
      } while (uVar8 != (uint)local_68);
    }
  }
  else {
    FUN_144958a06(*(undefined8 *)(lVar5 + 0x30),*(undefined4 *)(lVar5 + 0x38));
    iVar19 = *(int *)(lVar5 + 0x38);
    if ((longlong)iVar19 != 0) {
      lVar17 = *(longlong *)(lVar5 + 0x30);
      lVar18 = 0;
      uVar16 = 0xffffffff;
      do {
        uVar3 = *(uint *)(lVar17 + lVar18);
        if (((uVar3 != (uint)uVar16) && (-1 < (int)uVar3)) &&
           (lVar6 = *(longlong *)(lVar5 + 8), (int)uVar3 < *(int *)(lVar6 + 0x2c8))) {
          lVar11 = lVar6 + 0x2b0;
          if (*(longlong *)(lVar6 + 0x2c0) != 0) {
            lVar11 = *(longlong *)(lVar6 + 0x2c0);
          }
          if ((*(uint *)(lVar11 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
            plVar1 = (longlong *)(*(longlong *)(lVar6 + 0x2a0) + (ulonglong)uVar3 * 0x28);
            local_70 = (uint *)CONCAT44(local_70._4_4_,*(undefined4 *)(*plVar1 + 0x15c));
            uVar7 = *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x2e0);
            local_80 = piVar14;
            FUN_14726dbb6(plVar1,local_5c);
            piVar14 = local_80;
            FUN_14726db40(uVar7,local_5c,(ulonglong)local_70 & 0xffffffff);
          }
        }
        lVar18 = lVar18 + 4;
        uVar16 = (ulonglong)uVar3;
      } while ((longlong)iVar19 * 4 != lVar18);
    }
  }
LAB_1403fe26f:
  if ((iVar15 == 0x60000000) || (iVar15 == 0)) {
    *piVar14 = iVar15;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403fe442 FUN_1403fe442 body=1207 status=ok
// SIG undefined FUN_1403fe442(void)

void FUN_1403fe442(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_a8 [36];
  int local_84;
  int *local_80;
  longlong *local_78;
  ulonglong local_70;
  longlong local_68;
  uint *local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  piVar11 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  iVar13 = *piVar11;
  if (iVar13 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar13 = *piVar11;
  }
  if ((iVar13 == 0x60000000) || (iVar13 == 0)) {
    *piVar11 = 0x40000010;
  }
  lVar15 = *param_1;
  if (*(char *)(lVar15 + 0x41) == '\x01') {
    lVar15 = *(longlong *)(lVar15 + 8);
    uVar4 = *(uint *)(lVar15 + 0x2c8);
    if (uVar4 == 0) {
      uVar19 = 1;
      iVar17 = 0;
      uVar14 = 0;
      uVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(lVar15 + 0x2c0);
      if (*(uint **)(lVar15 + 0x2c0) == (uint *)0x0) {
        puVar6 = (uint *)(lVar15 + 0x2b0);
      }
      uVar5 = *puVar6;
      if (uVar5 == 0) {
        iVar17 = uVar4 + 0x1e;
        if (-1 < (int)(uVar4 - 1)) {
          iVar17 = uVar4 - 1;
        }
        uVar14 = 0;
        uVar19 = (ulonglong)(uint)(iVar17 >> 5);
        if (iVar17 >> 5 < 1) {
          uVar19 = uVar14;
        }
        iVar17 = 0;
        do {
          if (uVar19 == uVar14) goto LAB_1403fe69a;
          iVar17 = iVar17 + 0x20;
          uVar5 = puVar6[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar5 == 0);
      }
      else {
        iVar17 = 0;
        uVar14 = 0;
      }
      uVar19 = (ulonglong)(-uVar5 & uVar5);
      uVar9 = uVar19 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar5 = (iVar17 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar4 <= (int)uVar5) {
        uVar5 = uVar4;
      }
    }
    if (uVar5 != uVar4) {
      uVar12 = 0xffffffff;
      local_84 = iVar13;
      local_80 = piVar11;
      local_78 = param_1;
      local_70 = (ulonglong)uVar4;
      local_68 = lVar15;
      local_60 = (uint *)(lVar15 + 0x2b0);
      do {
        plVar2 = (longlong *)(*(longlong *)(local_68 + 0x2a0) + (longlong)(int)uVar5 * 0x28);
        lVar15 = local_78[1];
        lVar16 = *(longlong *)(*plVar2 + 8);
        bVar3 = *(byte *)(lVar16 + 0x328);
        FUN_14726dcbc(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x2e0) + 0x28,local_58,
                      (int)plVar2[2],*(undefined4 *)((longlong)plVar2 + 0x14));
        if ((short)plVar2[4] != 0) {
          uVar9 = 0;
          do {
            *(undefined4 *)(local_58[0] + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar16 + 0x308) + uVar9 * 4);
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)(plVar2 + 4));
        }
        FUN_14726dd5e(*(longlong *)(*(longlong *)(lVar15 + 8) + 0x2e0) + 0x50,local_58,
                      (int)plVar2[1],*(undefined4 *)((longlong)plVar2 + 0xc));
        if ((short)plVar2[4] != 0) {
          uVar9 = 0;
          do {
            *(undefined4 *)(local_58[0] + uVar9 * 4) =
                 *(undefined4 *)(*(longlong *)(lVar16 + 0x318) + uVar9 * 4);
            uVar9 = uVar9 + 1;
          } while (uVar9 < (ulonglong)*(ushort *)(plVar2 + 4) * ((ulonglong)bVar3 * 3 + 7));
        }
        uVar12 = uVar12 & ~(uint)uVar19;
        puVar6 = *(uint **)(local_68 + 0x2c0);
        if (*(uint **)(local_68 + 0x2c0) == (uint *)0x0) {
          puVar6 = local_60;
        }
        uVar4 = *(uint *)(local_68 + 0x2c8);
        iVar13 = (int)uVar14;
        lVar15 = (longlong)iVar13;
        uVar5 = puVar6[lVar15] & uVar12;
        if (uVar5 == 0) {
          iVar7 = uVar4 + 0x1e;
          if (-1 < (int)(uVar4 - 1)) {
            iVar7 = uVar4 - 1;
          }
          iVar7 = iVar7 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar13) {
            iVar8 = iVar13;
          }
          if (iVar13 < iVar7) {
            lVar16 = 0;
            do {
              uVar5 = puVar6[lVar15 + lVar16 + 1];
              if (uVar5 != 0) {
                uVar14 = (ulonglong)(iVar13 + (int)lVar16 + 1);
                uVar12 = 0xffffffff;
                goto LAB_1403fe858;
              }
              iVar17 = iVar17 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar8 - lVar15 != lVar16);
            uVar12 = 0xffffffff;
            iVar13 = iVar8;
          }
          uVar14 = (ulonglong)(iVar13 + 1);
          uVar5 = uVar4;
        }
        else {
LAB_1403fe858:
          uVar19 = (ulonglong)(-uVar5 & uVar5);
          uVar9 = uVar19 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar5 = (iVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if ((int)uVar4 <= (int)uVar5) {
            uVar5 = uVar4;
          }
        }
        piVar11 = local_80;
        iVar13 = local_84;
      } while (uVar5 != (uint)local_70);
    }
  }
  else if ((longlong)*(int *)(lVar15 + 0x28) != 0) {
    plVar18 = *(longlong **)(lVar15 + 0x20);
    plVar2 = plVar18 + *(int *)(lVar15 + 0x28);
    do {
      uVar4 = *(uint *)(*plVar18 + 0x15c);
      if ((-1 < (int)uVar4) &&
         (lVar16 = *(longlong *)(lVar15 + 8), (int)uVar4 < *(int *)(lVar16 + 0x2c8))) {
        lVar10 = lVar16 + 0x2b0;
        if (*(longlong *)(lVar16 + 0x2c0) != 0) {
          lVar10 = *(longlong *)(lVar16 + 0x2c0);
        }
        if ((*(uint *)(lVar10 + (ulonglong)(uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0) {
          plVar1 = (longlong *)(*(longlong *)(lVar16 + 0x2a0) + (ulonglong)uVar4 * 0x28);
          lVar16 = param_1[1];
          lVar10 = *(longlong *)(*plVar1 + 8);
          bVar3 = *(byte *)(lVar10 + 0x328);
          local_84 = iVar13;
          local_80 = piVar11;
          FUN_14726dcbc(*(longlong *)(*(longlong *)(lVar16 + 8) + 0x2e0) + 0x28,local_58,
                        (int)plVar1[2],*(undefined4 *)((longlong)plVar1 + 0x14));
          if ((short)plVar1[4] != 0) {
            uVar14 = 0;
            do {
              *(undefined4 *)(local_58[0] + uVar14 * 4) =
                   *(undefined4 *)(*(longlong *)(lVar10 + 0x308) + uVar14 * 4);
              uVar14 = uVar14 + 1;
            } while (uVar14 < *(ushort *)(plVar1 + 4));
          }
          FUN_14726dd5e(*(longlong *)(*(longlong *)(lVar16 + 8) + 0x2e0) + 0x50,local_58,
                        (int)plVar1[1],*(undefined4 *)((longlong)plVar1 + 0xc));
          piVar11 = local_80;
          iVar13 = local_84;
          if ((short)plVar1[4] != 0) {
            uVar14 = 0;
            do {
              *(undefined4 *)(local_58[0] + uVar14 * 4) =
                   *(undefined4 *)(*(longlong *)(lVar10 + 0x318) + uVar14 * 4);
              uVar14 = uVar14 + 1;
            } while (uVar14 < (ulonglong)*(ushort *)(plVar1 + 4) * ((ulonglong)bVar3 * 3 + 7));
          }
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar2);
  }
LAB_1403fe69a:
  if ((iVar13 == 0x60000000) || (iVar13 == 0)) {
    *piVar11 = iVar13;
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403fe8fa FUN_1403fe8fa body=1453 status=ok
// SIG undefined FUN_1403fe8fa(void)

void FUN_1403fe8fa(longlong *param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  longlong *plVar15;
  uint uVar16;
  byte bVar17;
  longlong lVar18;
  char cVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong *plVar23;
  ulonglong uVar24;
  undefined1 auStack_c8 [39];
  char local_a1;
  int local_a0;
  uint local_9c;
  ulonglong local_98;
  int *local_90;
  longlong *local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar14 = *piVar8;
  if (iVar14 == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    iVar14 = *piVar8;
  }
  if ((iVar14 == 0x60000000) || (iVar14 == 0)) {
    *piVar8 = 0x40000010;
  }
  lVar4 = *param_1;
  cVar19 = *(char *)(DAT_14ca1a520 + 1);
  if (*(char *)(lVar4 + 0x41) == '\x01') {
    lVar4 = *(longlong *)(lVar4 + 8);
    iVar3 = *(int *)(lVar4 + 0x2c8);
    if (iVar3 == 0) {
      local_98 = 1;
      iVar22 = 0;
      uVar24 = 0;
      iVar5 = 0;
    }
    else {
      puVar6 = *(uint **)(lVar4 + 0x2c0);
      if (*(uint **)(lVar4 + 0x2c0) == (uint *)0x0) {
        puVar6 = (uint *)(lVar4 + 0x2b0);
      }
      uVar16 = *puVar6;
      if (uVar16 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        uVar24 = 0;
        uVar20 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar20 = uVar24;
        }
        iVar22 = 0;
        do {
          if (uVar20 == uVar24) goto LAB_1403febcc;
          iVar22 = iVar22 + 0x20;
          uVar16 = puVar6[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar16 == 0);
      }
      else {
        iVar22 = 0;
        uVar24 = 0;
      }
      local_98 = (ulonglong)(-uVar16 & uVar16);
      uVar20 = local_98 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar5 = (iVar22 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar5) {
        iVar5 = iVar3;
      }
    }
    if (iVar5 != iVar3) {
      local_9c = 0xffffffff;
      local_a1 = cVar19;
      local_a0 = iVar14;
      local_90 = piVar8;
      local_88 = param_1;
      do {
        plVar15 = (longlong *)((longlong)iVar5 * 0x28 + *(longlong *)(lVar4 + 0x2a0));
        lVar9 = local_88[1];
        if ((cVar19 == '\0') ||
           (local_80 = local_88[1], local_78 = uVar24,
           piVar8 = (int *)FUN_147ccc4de(*(undefined8 *)(*plVar15 + 8)), lVar9 = local_80,
           uVar24 = local_78, ((piVar8[1] == 0 && *piVar8 == 0) && piVar8[2] == 0) && piVar8[3] == 0
           )) {
          FUN_14726de00(*(longlong *)(*(longlong *)(lVar9 + 8) + 0x2e0) + 0x78,local_70,
                        (int)plVar15[3],*(undefined4 *)((longlong)plVar15 + 0x1c));
          bVar17 = *(byte *)((longlong)plVar15 + 0x23);
          cVar19 = local_a1;
          if (bVar17 != 0) {
            uVar2 = *(ushort *)(plVar15 + 4);
            uVar20 = (ulonglong)uVar2;
            lVar12 = (ulonglong)(((uint)uVar2 + (uint)uVar2 * 2) * 0x10) + local_70[0];
            uVar16 = 0;
            lVar9 = local_70[0];
            do {
              if ((short)uVar20 == 0) {
                uVar20 = 0;
              }
              else {
                lVar18 = 0x2c;
                uVar21 = 0;
                do {
                  *(undefined4 *)(lVar9 + -0x2c + lVar18) = 0x3f800000;
                  puVar1 = (undefined8 *)(lVar9 + -0x28 + lVar18);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined4 *)(lVar9 + -0x18 + lVar18) = 0x3f800000;
                  puVar1 = (undefined8 *)(lVar9 + -0x14 + lVar18);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)(lVar9 + -4 + lVar18) = 0x3f800000;
                  *(undefined4 *)(lVar12 + -0x2c + lVar18) = 0x3f800000;
                  puVar1 = (undefined8 *)(lVar12 + -0x28 + lVar18);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined4 *)(lVar12 + -0x18 + lVar18) = 0x3f800000;
                  puVar1 = (undefined8 *)(lVar12 + -0x14 + lVar18);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)(lVar12 + -4 + lVar18) = 0x3f800000;
                  uVar21 = uVar21 + 1;
                  uVar20 = (ulonglong)*(ushort *)(plVar15 + 4);
                  lVar18 = lVar18 + 0x30;
                } while (uVar21 < uVar20);
                bVar17 = *(byte *)((longlong)plVar15 + 0x23);
              }
              uVar16 = uVar16 + 1;
              lVar12 = lVar12 + (ulonglong)uVar2 * 0x60;
              lVar9 = lVar9 + (ulonglong)uVar2 * 0x60;
            } while (uVar16 < bVar17);
          }
        }
        local_9c = local_9c & ~(uint)local_98;
        puVar6 = *(uint **)(lVar4 + 0x2c0);
        if (*(uint **)(lVar4 + 0x2c0) == (uint *)0x0) {
          puVar6 = (uint *)(lVar4 + 0x2b0);
        }
        iVar14 = *(int *)(lVar4 + 0x2c8);
        iVar5 = (int)uVar24;
        lVar9 = (longlong)iVar5;
        uVar16 = puVar6[lVar9] & local_9c;
        if (uVar16 == 0) {
          iVar10 = iVar14 + 0x1e;
          if (-1 < iVar14 + -1) {
            iVar10 = iVar14 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar22 = iVar22 + 0x20;
          iVar11 = iVar10;
          if (iVar10 < iVar5) {
            iVar11 = iVar5;
          }
          if (iVar5 < iVar10) {
            lVar12 = 0;
            do {
              uVar16 = puVar6[lVar9 + lVar12 + 1];
              if (uVar16 != 0) {
                uVar24 = (ulonglong)(iVar5 + (int)lVar12 + 1);
                local_9c = 0xffffffff;
                goto LAB_1403fedfb;
              }
              iVar22 = iVar22 + 0x20;
              lVar12 = lVar12 + 1;
            } while (iVar11 - lVar9 != lVar12);
            local_9c = 0xffffffff;
            iVar5 = iVar11;
          }
          uVar24 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar14;
        }
        else {
LAB_1403fedfb:
          local_98 = (ulonglong)(-uVar16 & uVar16);
          uVar20 = local_98 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar20 != 0) {
            for (; uVar20 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar5 = (iVar22 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if (iVar14 <= iVar5) {
            iVar5 = iVar14;
          }
        }
        piVar8 = local_90;
        iVar14 = local_a0;
      } while (iVar5 != iVar3);
    }
  }
  else if ((longlong)*(int *)(lVar4 + 0x28) != 0) {
    plVar13 = *(longlong **)(lVar4 + 0x20);
    plVar15 = plVar13 + *(int *)(lVar4 + 0x28);
    do {
      uVar16 = *(uint *)(*plVar13 + 0x15c);
      if ((-1 < (int)uVar16) &&
         (lVar9 = *(longlong *)(lVar4 + 8), (int)uVar16 < *(int *)(lVar9 + 0x2c8))) {
        lVar12 = lVar9 + 0x2b0;
        if (*(longlong *)(lVar9 + 0x2c0) != 0) {
          lVar12 = *(longlong *)(lVar9 + 0x2c0);
        }
        if ((*(uint *)(lVar12 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar16 & 0x1f) & 1) != 0) {
          plVar23 = (longlong *)((ulonglong)uVar16 * 0x28 + *(longlong *)(lVar9 + 0x2a0));
          uVar24 = param_1[1];
          if ((cVar19 == '\0') ||
             (local_a0 = iVar14, local_98 = param_1[1], local_90 = piVar8,
             piVar7 = (int *)FUN_147ccc4de(*(undefined8 *)(*plVar23 + 8)), uVar24 = local_98,
             piVar8 = local_90, iVar14 = local_a0,
             ((piVar7[1] == 0 && *piVar7 == 0) && piVar7[2] == 0) && piVar7[3] == 0)) {
            local_a1 = cVar19;
            local_88 = param_1;
            FUN_14726de00(*(longlong *)(*(longlong *)(uVar24 + 8) + 0x2e0) + 0x78,local_70,
                          (int)plVar23[3],*(undefined4 *)((longlong)plVar23 + 0x1c));
            bVar17 = *(byte *)((longlong)plVar23 + 0x23);
            param_1 = local_88;
            cVar19 = local_a1;
            if (bVar17 != 0) {
              uVar2 = *(ushort *)(plVar23 + 4);
              uVar24 = (ulonglong)uVar2;
              lVar12 = (ulonglong)(((uint)uVar2 + (uint)uVar2 * 2) * 0x10) + local_70[0];
              uVar16 = 0;
              lVar9 = local_70[0];
              do {
                if ((short)uVar24 == 0) {
                  uVar24 = 0;
                }
                else {
                  lVar18 = 0x2c;
                  uVar20 = 0;
                  do {
                    *(undefined4 *)(lVar9 + -0x2c + lVar18) = 0x3f800000;
                    puVar1 = (undefined8 *)(lVar9 + -0x28 + lVar18);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    *(undefined4 *)(lVar9 + -0x18 + lVar18) = 0x3f800000;
                    puVar1 = (undefined8 *)(lVar9 + -0x14 + lVar18);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    *(undefined8 *)(lVar9 + -4 + lVar18) = 0x3f800000;
                    *(undefined4 *)(lVar12 + -0x2c + lVar18) = 0x3f800000;
                    puVar1 = (undefined8 *)(lVar12 + -0x28 + lVar18);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    *(undefined4 *)(lVar12 + -0x18 + lVar18) = 0x3f800000;
                    puVar1 = (undefined8 *)(lVar12 + -0x14 + lVar18);
                    *puVar1 = 0;
                    puVar1[1] = 0;
                    *(undefined8 *)(lVar12 + -4 + lVar18) = 0x3f800000;
                    uVar20 = uVar20 + 1;
                    uVar24 = (ulonglong)*(ushort *)(plVar23 + 4);
                    lVar18 = lVar18 + 0x30;
                  } while (uVar20 < uVar24);
                  bVar17 = *(byte *)((longlong)plVar23 + 0x23);
                }
                uVar16 = uVar16 + 1;
                lVar12 = lVar12 + (ulonglong)uVar2 * 0x60;
                lVar9 = lVar9 + (ulonglong)uVar2 * 0x60;
              } while (uVar16 < bVar17);
            }
          }
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar15);
  }
LAB_1403febcc:
  if ((iVar14 == 0x60000000) || (iVar14 == 0)) {
    *piVar8 = iVar14;
  }
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403feeac FUN_1403feeac body=12 status=ok
// SIG undefined FUN_1403feeac(void)

void FUN_1403feeac(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001403feeb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1403feeb8 FUN_1403feeb8 body=31 status=ok
// SIG undefined FUN_1403feeb8(void)

undefined8 FUN_1403feeb8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403feed8 FUN_1403feed8 body=194 status=ok
// SIG undefined FUN_1403feed8(void)

undefined8 FUN_1403feed8(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  puVar1 = (uint *)(param_1 + 0x804);
  cVar3 = FUN_1403fef9a(puVar1,0);
  if (cVar3 != '\0') {
    lVar5 = FUN_1403fefe0(*(undefined8 *)(param_1 + 0x150));
    lVar5 = FUN_14570d2f0(*(undefined8 *)(lVar5 + 0x148));
    if (lVar5 != 0) {
      FUN_14485c47a(puVar1,lVar5);
    }
    cVar3 = FUN_1403fef9a(puVar1,0);
    if (cVar3 != '\0') {
      uVar6 = FUN_1491722d0(param_1);
      FUN_14485c47a(puVar1,uVar6);
    }
  }
  if (*(int *)(param_1 + 0x808) != 0) {
    uVar2 = *puVar1;
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x808))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      return *puVar4;
    }
  }
  return 0;
}



// FUNCTION 1403fef9a FUN_1403fef9a body=70 status=ok
// SIG undefined FUN_1403fef9a(void)

bool FUN_1403fef9a(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 1403fefe0 FUN_1403fefe0 body=154 status=ok
// SIG undefined FUN_1403fefe0(void)

longlong FUN_1403fefe0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(int *)((longlong)param_1 + 0xbc) != 0) {
    uVar1 = *(uint *)(param_1 + 0x17);
    lVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1403ff033;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)((longlong)param_1 + 0xbc) &&
        ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      lVar5 = *plVar4;
      goto LAB_1403ff033;
    }
  }
  lVar5 = 0;
LAB_1403ff033:
  lVar2 = FUN_1403ff07a();
  if (((lVar2 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    uVar3 = FUN_1403ff07a();
    (**(code **)(*param_1 + 8))(param_1,uVar3);
  }
  return param_1[0x18];
}



// FUNCTION 1403ff07a FUN_1403ff07a body=57 status=ok
// SIG undefined FUN_1403ff07a(void)

void FUN_1403ff07a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc0b0c8 == 0) {
    uVar1 = FUN_1408c25db();
    DAT_14cc0b0c8 = FUN_140002ddd(FUN_141907206,uVar1,L"ControlRigExecuteContext");
  }
  return;
}



// FUNCTION 1403ff0b4 FUN_1403ff0b4 body=226 status=ok
// SIG undefined FUN_1403ff0b4(void)

void FUN_1403ff0b4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1403ff196(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1403ff196 FUN_1403ff196 body=1324 status=ok
// SIG undefined FUN_1403ff196(void)

void FUN_1403ff196(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403ff6c4 FUN_1403ff6c4 body=226 status=ok
// SIG undefined FUN_1403ff6c4(void)

void FUN_1403ff6c4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1403ff7a6(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1403ff7a6 FUN_1403ff7a6 body=1324 status=ok
// SIG undefined FUN_1403ff7a6(void)

void FUN_1403ff7a6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403ffcd4 FUN_1403ffcd4 body=226 status=ok
// SIG undefined FUN_1403ffcd4(void)

void FUN_1403ffcd4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1403ffdb6(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1403ffdb6 FUN_1403ffdb6 body=1324 status=ok
// SIG undefined FUN_1403ffdb6(void)

void FUN_1403ffdb6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404002e4 FUN_1404002e4 body=226 status=ok
// SIG undefined FUN_1404002e4(void)

void FUN_1404002e4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1404003c6(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1404003c6 FUN_1404003c6 body=1324 status=ok
// SIG undefined FUN_1404003c6(void)

void FUN_1404003c6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404008f4 FUN_1404008f4 body=226 status=ok
// SIG undefined FUN_1404008f4(void)

void FUN_1404008f4(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1404009d6(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1404009d6 FUN_1404009d6 body=1324 status=ok
// SIG undefined FUN_1404009d6(void)

void FUN_1404009d6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140400f04 FUN_140400f04 body=226 status=ok
// SIG undefined FUN_140400f04(void)

void FUN_140400f04(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140400fe6(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140400fe6 FUN_140400fe6 body=1324 status=ok
// SIG undefined FUN_140400fe6(void)

void FUN_140400fe6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140401514 FUN_140401514 body=226 status=ok
// SIG undefined FUN_140401514(void)

void FUN_140401514(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_1404015f6(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 1404015f6 FUN_1404015f6 body=1324 status=ok
// SIG undefined FUN_1404015f6(void)

void FUN_1404015f6(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140401b24 FUN_140401b24 body=1820 status=ok
// SIG undefined FUN_140401b24(void)

void FUN_140401b24(undefined8 param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4,
                  byte param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint *puVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  undefined1 auStack_f8 [32];
  code **local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_98;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar6 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1404021dc;
    bVar6 = DAT_14c8442b8 & 1;
  }
  if (bVar6 != 0) goto LAB_1404021dc;
  local_c8 = *param_2;
  uStack_c4 = param_2[1];
  uStack_c0 = param_2[2];
  uStack_bc = param_2[3];
  local_b8 = (void *)0x0;
  local_b0 = *(int *)(param_3 + 1);
  lVar18 = (longlong)local_b0;
  pvVar4 = (void *)*param_3;
  if (lVar18 == 0) {
    local_ac = 0;
  }
  else {
    FUN_141724ade(&local_b8,local_b0,0);
    memcpy(local_b8,pvVar4,lVar18 << 4);
  }
  local_a8 = *param_4;
  local_98 = param_5;
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar16 = *(int *)(lVar18 + 0xc60);
  uStack_a0 = param_1;
  if (DAT_14c86a9fc == 0) {
    if (iVar16 == 2) goto LAB_140401c3b;
    if (iVar16 != 1) goto LAB_140401c36;
    DVar8 = FUN_140ad26c0();
    DVar9 = GetCurrentThreadId();
    if (DVar8 != DVar9) goto LAB_140401c79;
    if ((local_98 & 1) != 0) goto LAB_140401c44;
LAB_1404021b1:
    bVar6 = 0;
LAB_1404021b3:
    local_d8 = (code **)(CONCAT71(local_d8._1_7_,bVar6) & 0xffffffffffffff01);
    FUN_14358278c(uStack_a0,&local_c8,&local_b8,&local_a8);
  }
  else {
LAB_140401c36:
    if (iVar16 == 0x10) {
LAB_140401c3b:
      if (param_5 == 0) goto LAB_1404021b1;
LAB_140401c44:
      FUN_14490df4a();
      bVar6 = local_98;
      goto LAB_1404021b3;
    }
LAB_140401c79:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar18 + 0xc60), iVar16 == 2)) {
LAB_1404021a6:
        if (local_98 != 1) goto LAB_1404021b1;
        goto LAB_140401c44;
      }
      if (iVar16 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1404021a6;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar2;
      if (puVar12 != (uint *)0x0) goto LAB_140401e3e;
      while( true ) {
        uVar7 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar7 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar7 | 1;
          __tlregdtor(&LAB_143590326);
        }
        lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar18 + 0x310);
        *(undefined8 *)(lVar18 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        FUN_140217a48(puVar2);
        puVar12 = (uint *)*puVar2;
LAB_140401e3e:
        puVar17 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar14 = (uint *)(puVar17 + 0x1c);
        uVar7 = puVar12[0x12];
        if (puVar14 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar3 = *puVar12;
          *puVar12 = *puVar12 + uVar7 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar7) != 0xffffffff) break;
          puVar12 = (uint *)*puVar2;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          puVar17 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar14 = (uint *)(puVar17 + 0x1c);
          uVar7 = 0;
          if (puVar14 <= puVar12 + 0x4000) {
            uVar7 = 1;
            goto LAB_140401ebe;
          }
        }
      }
      uVar7 = uVar7 + 1;
LAB_140401ebe:
      *(uint **)(puVar12 + 0x10) = puVar14;
      puVar12[0x12] = uVar7;
      FUN_1447247dc(puVar17,0);
      pvVar4 = local_b8;
      *puVar17 = &PTR_FUN_14a9e4950;
      *(undefined4 *)(puVar17 + 0x15) = local_c8;
      *(undefined4 *)((longlong)puVar17 + 0xac) = uStack_c4;
      *(undefined4 *)(puVar17 + 0x16) = uStack_c0;
      *(undefined4 *)((longlong)puVar17 + 0xb4) = uStack_bc;
      puVar17[0x17] = 0;
      lVar18 = (longlong)local_b0;
      *(int *)(puVar17 + 0x18) = local_b0;
      if (lVar18 == 0) {
        *(undefined4 *)((longlong)puVar17 + 0xc4) = 0;
      }
      else {
        FUN_141724ade(puVar17 + 0x17,local_b0,0);
        memcpy((void *)puVar17[0x17],pvVar4,lVar18 << 4);
      }
      *(byte *)(puVar17 + 0x1b) = local_98;
      *(undefined4 *)(puVar17 + 0x19) = (undefined4)local_a8;
      *(undefined4 *)((longlong)puVar17 + 0xcc) = local_a8._4_4_;
      *(undefined4 *)(puVar17 + 0x1a) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)puVar17 + 0xd4) = uStack_a0._4_4_;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar7 = DAT_14c7585c8 >> 10 & 3;
        iVar16 = 0;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar7 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar7];
          iVar16 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
      }
      puVar17[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar17[9] = puVar17;
      puVar17[10] = puVar17;
      lVar18 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar18 == 0) {
        uVar5 = 1;
        if ((char)uVar15 != '\x06') {
          uVar5 = uVar15;
        }
        uVar15 = uVar5;
        uVar13 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar18 + 0x30);
      }
      puVar17[0xf] = uVar13;
      puVar17[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar16;
      if (puVar17 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar17);
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      local_88[0] = (code *)0x0;
      plVar10 = (longlong *)FUN_14001cc68(0x40,8);
      pvVar4 = local_b8;
      *plVar10 = (longlong)&PTR_LAB_14a9e4900;
      *(undefined4 *)(plVar10 + 1) = local_c8;
      *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_c4;
      *(undefined4 *)(plVar10 + 2) = uStack_c0;
      *(undefined4 *)((longlong)plVar10 + 0x14) = uStack_bc;
      plVar10[3] = 0;
      lVar18 = (longlong)local_b0;
      *(int *)(plVar10 + 4) = local_b0;
      local_78 = plVar10;
      if (lVar18 == 0) {
        *(undefined4 *)((longlong)plVar10 + 0x24) = 0;
      }
      else {
        FUN_141724ade(plVar10 + 3,local_b0,0);
        memcpy((void *)plVar10[3],pvVar4,lVar18 << 4);
      }
      *(byte *)(plVar10 + 7) = local_98;
      *(undefined4 *)(plVar10 + 5) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar10 + 0x2c) = local_a8._4_4_;
      *(undefined4 *)(plVar10 + 6) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)plVar10 + 0x34) = uStack_a0._4_4_;
      if (plVar10 != (longlong *)&DAT_fffffffffffffff8) {
        local_88[0] = FUN_14359143a;
      }
      local_d8 = local_88;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateCollectionCommand",&DAT_14caf1ee0);
      if (local_88[0] != (code *)0x0) {
        plVar10 = local_78;
        if (local_78 == (longlong *)0x0) {
          plVar10 = local_68;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
    }
  }
  if (local_b8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1404021dc:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140402242 FUN_140402242 body=40 status=ok
// SIG undefined FUN_140402242(void)

undefined1 FUN_140402242(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14040226a(param_1,0);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x148) != 0)) {
    FUN_14047944e();
  }
  return 1;
}



// FUNCTION 14040226a FUN_14040226a body=68 status=ok
// SIG undefined FUN_14040226a(void)

undefined8 FUN_14040226a(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x1e0) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1e0) + 0x38), plVar1 != (longlong *)0x0)) {
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x308))();
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001404022a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1404022ae FUN_1404022ae body=111 status=ok
// SIG undefined FUN_1404022ae(void)

undefined8 FUN_1404022ae(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  float fVar2;
  
  if (*(char *)(param_2 + 1) == '\x01') {
    *(undefined1 *)(param_2 + 1) = 0;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    *(undefined1 *)(param_2 + 3) = 0;
  }
  if (*(char *)(param_2 + 5) == '\x01') {
    *(undefined1 *)(param_2 + 5) = 0;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  param_2[2] = uVar1;
  *(undefined1 *)(param_2 + 3) = 1;
  *param_2 = *(undefined4 *)((longlong)param_1 + 0x6c);
  *(undefined1 *)(param_2 + 1) = 1;
  fVar2 = (float)(**(code **)(*param_1 + 0x50))(param_1);
  param_2[4] = (int)(fVar2 * 100.0);
  *(undefined1 *)(param_2 + 5) = 1;
  return CONCAT71((uint7)(uint3)((uint)(int)(fVar2 * 100.0) >> 8),1);
}



// FUNCTION 14040234a FUN_14040234a body=104 status=ok
// SIG undefined FUN_14040234a(void)

float FUN_14040234a(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    fVar2 = 0.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x78);
    fVar2 = 0.0;
    if ((fVar1 != 0.0) || (NAN(fVar1))) {
      fVar2 = (float)FUN_140296320(param_1);
      fVar3 = *(float *)(param_1 + 0x78) - (fVar2 - **(float **)(param_1 + 0xa0));
      fVar2 = 0.0;
      if (0.0 <= fVar3) {
        fVar2 = fVar3;
      }
      fVar2 = 1.0 - fVar2 / fVar1;
    }
  }
  return fVar2;
}



// FUNCTION 1404023b2 FUN_1404023b2 body=115 status=ok
// SIG undefined FUN_1404023b2(void)

void FUN_1404023b2(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  bool bVar3;
  
  if (0 < (int)param_2[1]) {
    iVar2 = 0;
    do {
      lVar1 = *(longlong *)(*param_2 + (longlong)iVar2 * 8);
      if (*(int *)(lVar1 + 8) == 1) {
        FUN_147d6bbfc(param_2,iVar2);
        FUN_147d6bc68(param_2);
        iVar2 = iVar2 + -1;
      }
      else {
        LOCK();
        bVar3 = *(int *)(lVar1 + 0x38) == 1;
        if (bVar3) {
          *(int *)(lVar1 + 0x38) = 2;
        }
        UNLOCK();
        if (bVar3) {
          FUN_140402426(lVar1 + 0x10,0);
          *(undefined4 *)(lVar1 + 0x38) = 3;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 140402426 FUN_140402426 body=144 status=ok
// SIG undefined FUN_140402426(void)

void FUN_140402426(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1404024f2(&local_20,*(undefined8 *)(param_1 + 0x18));
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = local_20;
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    piVar1 = (int *)(lVar3 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404024cc FUN_1404024cc body=38 status=ok
// SIG undefined FUN_1404024cc(void)

undefined8 FUN_1404024cc(undefined8 param_1,int param_2)

{
  FUN_140402654();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404024f2 FUN_1404024f2 body=144 status=ok
// SIG undefined FUN_1404024f2(void)

longlong * FUN_1404024f2(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = FUN_14001cc68(0x130,0x10);
  FUN_140402582(lVar3);
  *param_1 = lVar3;
  if (lVar3 != 0) {
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
  }
  uVar1 = *(uint *)(param_2 + 0x18);
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + uVar1;
  if ((uint)(*(int *)(lVar3 + 0x1c) - iVar2) < uVar1) {
    FUN_1404028ca(lVar3 + 0x10);
  }
  FUN_1449915dc(lVar3 + 0x20,param_2 + 0x20);
  *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  FUN_140402be6(lVar3 + 0x38,param_2 + 0x38);
  *(undefined4 *)(lVar3 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  return param_1;
}



// FUNCTION 140402582 FUN_140402582 body=209 status=ok
// SIG undefined FUN_140402582(void)

undefined8 * FUN_140402582(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = &PTR_FUN_14aacd0c0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  FUN_14499156e(param_1 + 4,0);
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0x7f7fffff;
  return param_1;
}



// FUNCTION 140402654 FUN_140402654 body=208 status=ok
// SIG undefined FUN_140402654(void)

void FUN_140402654(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aacd0c0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140402724(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_14040275c(param_1 + 0x11);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140402794(param_1 + 7);
  FUN_14499156e(param_1 + 4,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e38530;
  return;
}



// FUNCTION 140402724 FUN_140402724 body=55 status=ok
// SIG undefined FUN_140402724(void)

void FUN_140402724(longlong *param_1)

{
  FUN_14040284e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14040275c FUN_14040275c body=55 status=ok
// SIG undefined FUN_14040275c(void)

void FUN_14040275c(longlong *param_1)

{
  FUN_1404029de(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140402794 FUN_140402794 body=55 status=ok
// SIG undefined FUN_140402794(void)

void FUN_140402794(longlong *param_1)

{
  FUN_1404027cc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404027cc FUN_1404027cc body=128 status=ok
// SIG undefined FUN_1404027cc(void)

void FUN_1404027cc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14040284e FUN_14040284e body=123 status=ok
// SIG undefined FUN_14040284e(void)

void FUN_14040284e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1404028ca FUN_1404028ca body=274 status=ok
// SIG undefined FUN_1404028ca(void)

void FUN_1404028ca(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar4;
  
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
    uVar5 = lVar4 * 0x150;
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
    iVar6 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x150,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1404029de FUN_1404029de body=519 status=ok
// SIG undefined FUN_1404029de(void)

void FUN_1404029de(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar13) goto LAB_140402ac3;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 <= iVar6) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_140402ac3;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_140402ac3:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140402be6 FUN_140402be6 body=378 status=ok
// SIG undefined FUN_140402be6(void)

undefined8 * FUN_140402be6(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 9);
  plVar1 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140402c47;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  puVar6 = param_1 + 7;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*plVar1;
  }
  puVar7 = param_2 + 7;
  if ((undefined8 *)param_2[8] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_2[8];
  }
  memcpy(puVar6,puVar7,(longlong)iVar2 << 2);
LAB_140402c47:
  *(int *)(param_1 + 9) = iVar2;
  uVar3 = *(uint *)(param_2 + 1);
  FUN_1404027cc(param_1,uVar3);
  iVar2 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar2 + uVar3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar3) {
    FUN_14482b872(param_1);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar5 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar2 = *(int *)(param_2 + 5);
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 != 0) {
    puVar6 = param_2 + 2;
    if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_2[4];
    }
    puVar7 = param_1 + 2;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_1[4];
    }
    memcpy(puVar7,puVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (uVar3 != 0) {
    memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar3 * 0x18);
  }
  return param_1;
}



// FUNCTION 140402d60 FUN_140402d60 body=548 status=ok
// SIG undefined FUN_140402d60(void)

void FUN_140402d60(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  undefined1 auStack_98 [40];
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x208;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar1;
  if (*(int *)(param_1 + 0x220) == 0) {
    uVar14 = 1;
    local_58._0_4_ = 0xffffffff;
    iVar9 = 0;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar14 = local_68 >> 0x20;
    iVar9 = *(int *)(param_1 + 0x220);
  }
  lVar5 = local_60;
  iVar8 = (int)local_68;
  uVar6 = (uint)local_58;
  iVar7 = local_58._4_4_;
  iVar15 = local_50;
  local_70 = param_1;
  if (local_58._4_4_ != iVar9 || local_60 != lVar1) {
    do {
      FUN_140402f86(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar7 * 0x70 + 0x18);
      uVar6 = ~(uint)uVar14 & uVar6;
      lVar13 = *(longlong *)(lVar5 + 0x10);
      if (*(longlong *)(lVar5 + 0x10) == 0) {
        lVar13 = lVar5;
      }
      iVar3 = *(int *)(lVar5 + 0x18);
      lVar11 = (longlong)iVar8;
      uVar10 = *(uint *)(lVar13 + lVar11 * 4) & uVar6;
      if (uVar10 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar4 = iVar7;
        if (iVar7 < iVar8) {
          iVar4 = iVar8;
        }
        if (iVar8 < iVar7) {
          lVar12 = 0;
          do {
            uVar10 = *(uint *)(lVar13 + lVar11 * 4 + 4 + lVar12 * 4);
            if (uVar10 != 0) {
              iVar8 = iVar8 + (int)lVar12 + 1;
              uVar6 = 0xffffffff;
              goto LAB_140402e8f;
            }
            iVar15 = iVar15 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar4 - lVar11 != lVar12);
          uVar6 = 0xffffffff;
          iVar8 = iVar4;
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar3;
      }
      else {
LAB_140402e8f:
        uVar14 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar14 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar7 = (iVar15 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar7) {
          iVar7 = iVar3;
        }
      }
    } while (iVar7 != iVar9 || lVar5 != lVar1);
  }
  FUN_140404ce8((longlong *)(param_1 + 0x1f8));
  lVar1 = local_70;
  FUN_140402f86(local_70 + 0x248);
  FUN_140403f7c(lVar1 + 0x298);
  FUN_140403d7c(lVar1 + 0x50);
  if (*(int *)(lVar1 + 0x58) == 1) {
    FUN_141189718(lVar1 + 0x60,0);
  }
  else {
    FUN_1404045f2();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140402f86 FUN_140402f86 body=753 status=ok
// SIG undefined FUN_140402f86(void)

void FUN_140402f86(longlong param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  int local_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_140403780(&local_98,param_1);
  uVar13 = (longlong)local_90 - (longlong)local_64;
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar15 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar15 + 0xc80);
  bVar4 = *pbVar2;
  if ((bVar4 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  uVar12 = (uint)uVar13;
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < uVar12) {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar13);
    }
    FUN_140403bb0(param_1,uVar13 & 0xffffffff);
    if (uVar12 < 4) {
      iVar6 = 1;
    }
    else {
      uVar12 = (uVar12 | 1) + 0xe;
      iVar6 = 0x1f;
      if (uVar12 != 0) {
        for (; uVar12 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      iVar6 = 1 << ((byte)iVar6 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar6)) {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140403894(param_1);
    }
  }
  iVar6 = local_70;
  if ((bVar4 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (local_70 == 0) {
    uVar17 = 1;
    uVar13 = 0;
    iVar7 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar8 = local_88;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar7 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar7 = local_70 + -1;
      }
      uVar13 = 0;
      uVar17 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar17 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar17 == uVar13) goto LAB_1404031cb;
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar12 & uVar12);
    uVar3 = uVar17 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar7) {
      iVar7 = local_70;
    }
  }
  if (iVar7 != local_70) {
    uVar12 = 0xffffffff;
    do {
      local_b0 = local_98 + (longlong)iVar7 * 0x20;
      local_a8 = (longlong)iVar7 * 0x20 + local_98 + 0x10;
      FUN_14040327a(param_1,local_9c,&local_b0,0);
      uVar12 = ~(uint)uVar17 & uVar12;
      puVar8 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar8 = local_88;
      }
      iVar7 = (int)uVar13;
      lVar15 = (longlong)iVar7;
      uVar14 = puVar8[lVar15] & uVar12;
      if (uVar14 == 0) {
        iVar9 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar9 = local_70 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar7 < iVar9) {
          lVar16 = 0;
          do {
            uVar14 = puVar8[lVar15 + lVar16 + 1];
            if (uVar14 != 0) {
              uVar13 = (ulonglong)(iVar7 + (int)lVar16 + 1);
              uVar12 = 0xffffffff;
              goto LAB_140403193;
            }
            iVar11 = iVar11 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar10 - lVar15 != lVar16);
          uVar12 = 0xffffffff;
          iVar7 = iVar10;
        }
        uVar13 = (ulonglong)(iVar7 + 1);
        iVar7 = local_70;
      }
      else {
LAB_140403193:
        uVar17 = (ulonglong)(-uVar14 & uVar14);
        uVar3 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar7 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar7) {
          iVar7 = local_70;
        }
      }
    } while (iVar7 != iVar6);
  }
LAB_1404031cb:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1406d06c4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14040327a FUN_14040327a body=448 status=ok
// SIG undefined FUN_14040327a(void)

undefined4 *
FUN_14040327a(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
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
  uVar5 = local_48[2];
  uVar4 = *local_48;
  if (uVar5 != 0) {
    uVar4 = uVar5 >> 0xd ^ uVar4 - uVar5;
    uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar5) - uVar4;
    uVar8 = uVar7 >> 0xd ^ (uVar5 - uVar4) - uVar7;
    uVar4 = uVar8 >> 0xc ^ (uVar4 - uVar7) - uVar8;
    uVar5 = uVar4 << 0x10 ^ (uVar7 - uVar8) - uVar4;
    uVar7 = uVar5 >> 5 ^ (uVar8 - uVar4) - uVar5;
    uVar4 = uVar7 >> 3 ^ (uVar4 - uVar5) - uVar7;
    uVar5 = uVar4 << 10 ^ (uVar5 - uVar7) - uVar4;
    uVar4 = uVar5 >> 0xf ^ uVar7 - (uVar4 + uVar5);
  }
  local_68 = param_4;
  cVar3 = FUN_144991676(param_1,uVar4,local_48,&local_54);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar9 = 1;
    }
    else {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[7] = uVar4;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      local_48[6] = *(uint *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                       (longlong)(int)uVar4) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
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



// FUNCTION 14040343c FUN_14040343c body=138 status=ok
// SIG undefined FUN_14040343c(void)

void FUN_14040343c(longlong *param_1,int param_2,int param_3)

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
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
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



// FUNCTION 1404034c6 FUN_1404034c6 body=697 status=ok
// SIG undefined FUN_1404034c6(void)

int * FUN_1404034c6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1447711aa(param_1,iVar15);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar10 = iVar7 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar8 = iVar7 + 1;
    iVar16 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar16 = iVar7;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        iVar10 = iVar7;
        if (iVar7 + 0x20U < 0xa0) {
          iVar8 = 0x80;
        }
        else {
          uVar18 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar5 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar2 = (uint)(uVar5 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar5 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]];
              }
              else {
                uVar9 = (ulonglong)(uVar2 & 0xfffffff0);
                if (uVar9 < 0x7ff1) {
                  bVar6 = (&DAT_14c841e00)[uVar2 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar6) {
                    uVar14 = (ulonglong)bVar6;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar6;
                  do {
                    uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1404036aa;
                    lVar4 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar4 != 0x33);
                }
                uVar5 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar5 = (ulonglong)DAT_14c841df8;
                }
                uVar5 = -uVar5 & (uVar9 + uVar5) - 1;
              }
            }
            else {
              uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
              iVar10 = (int)param_1[5];
            }
          }
LAB_1404036aa:
          iVar3 = (int)(uVar5 >> 2);
          iVar8 = -0x20;
          if ((int)uVar18 <= iVar3) {
            iVar8 = iVar3 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar12,iVar10);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar10 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar10 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar6 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar10 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar4 = (longlong)iVar15;
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x20);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x20) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar7 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar7 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar4 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140403780 FUN_140403780 body=125 status=ok
// SIG undefined FUN_140403780(void)

undefined8 * FUN_140403780(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1404037fe();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1404037fe FUN_1404037fe body=150 status=ok
// SIG undefined FUN_1404037fe(void)

longlong * FUN_1404037fe(longlong *param_1,longlong *param_2)

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



// FUNCTION 140403894 FUN_140403894 body=795 status=ok
// SIG undefined FUN_140403894(void)

void FUN_140403894(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar12 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar12,4);
    if ((int)uVar12 < 1) goto LAB_1404038fa;
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
  } while (uVar12 != uVar2);
LAB_1404038fa:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar15 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar10;
    if (uVar12 == 0) {
      iVar15 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar15 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar12 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar7 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar15) {
      iVar15 = iVar6;
    }
  }
  if (iVar15 < iVar6) {
    uVar12 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar8 = (longlong)iVar15 * 0x20;
      uVar2 = *(uint *)(lVar9 + lVar8);
      uVar17 = *(uint *)(lVar9 + 8 + lVar8);
      if (uVar17 != 0) {
        uVar16 = uVar17 >> 0xd ^ uVar2 - uVar17;
        uVar2 = uVar16 << 8 ^ (-0x61c88647 - uVar17) - uVar16;
        uVar17 = uVar2 >> 0xd ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 0xc ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 0x10 ^ (uVar2 - uVar17) - uVar16;
        uVar17 = uVar2 >> 5 ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 3 ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 10 ^ (uVar2 - uVar17) - uVar16;
        uVar2 = uVar2 >> 0xf ^ uVar17 - (uVar16 + uVar2);
      }
      uVar7 = (longlong)(int)uVar2 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar9 + lVar8 + 0x1c) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar9 + lVar8 + 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar15 = (int)uVar3;
      lVar9 = (longlong)iVar15;
      uVar2 = puVar10[lVar9] & uVar12;
      if (uVar2 == 0) {
        iVar13 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar13 = iVar6 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar15) {
          iVar14 = iVar15;
        }
        if (iVar13 <= iVar15) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar9 + lVar8 + 1];
          if (uVar2 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar14 - lVar9 == lVar8) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar15 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar11 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar6);
  }
  return;
}



// FUNCTION 140403bb0 FUN_140403bb0 body=459 status=ok
// SIG undefined FUN_140403bb0(void)

void FUN_140403bb0(longlong *param_1,uint param_2)

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
      FUN_1446f4a44(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_1447711aa(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(uVar8 * 0x20 + lVar2 + -0x1c);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar10 + -1;
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
        puVar6 = puVar6 + -8;
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



// FUNCTION 140403d7c FUN_140403d7c body=193 status=ok
// SIG undefined FUN_140403d7c(void)

void FUN_140403d7c(undefined8 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  void *_Src;
  longlong lVar6;
  
  _Src = (void *)*param_1;
  *param_1 = 0;
  iVar4 = *(int *)(param_1 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140403e3e(param_1,iVar4,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar4 << 3);
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  if (_Src != (void *)0x0) {
    FUN_1400020a8(_Src);
    return;
  }
  return;
}



// FUNCTION 140403e3e FUN_140403e3e body=317 status=ok
// SIG undefined FUN_140403e3e(void)

void FUN_140403e3e(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140403eac;
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
LAB_140403eac:
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



// FUNCTION 140403f7c FUN_140403f7c body=740 status=ok
// SIG undefined FUN_140403f7c(void)

void FUN_140403f7c(longlong param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined1 auStack_e8 [40];
  ulonglong local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  int local_90;
  undefined1 local_88 [24];
  int local_70;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14570d412(&local_98,param_1);
  uVar12 = (longlong)local_90 - (longlong)local_64;
  lVar14 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar14 + 0xc7c);
  uVar5 = *puVar1;
  pbVar2 = (byte *)(lVar14 + 0xc80);
  bVar4 = *pbVar2;
  if ((bVar4 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  uVar9 = (uint)uVar12;
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < uVar9) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar12);
    }
    FUN_140403bb0(param_1,uVar12 & 0xffffffff);
    iVar11 = 1;
    if (3 < uVar9) {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar11 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar11 == 0; iVar11 = iVar11 + -1) {
        }
      }
      iVar11 = 1 << ((byte)iVar11 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar11)) {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_140404396(param_1);
    }
  }
  if ((bVar4 & 1) != 0) {
    *puVar1 = uVar5;
    *pbVar2 = 1;
  }
  local_b8 = local_88;
  local_c0 = 0x100000000;
  local_b0 = 0xffffffff;
  local_a8 = 0;
  if (local_70 == 0) {
    uVar12 = 1;
    local_b0._4_4_ = 0;
    local_70 = 0;
    uVar9 = 0xffffffff;
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_c0);
    uVar12 = local_c0 >> 0x20;
    uVar9 = (uint)local_b0;
    iVar11 = (int)local_c0;
  }
  puVar8 = local_b8;
  if (local_b0._4_4_ != local_70 || local_b8 != local_88) {
    iVar10 = local_b0._4_4_;
    iVar17 = local_a8;
    do {
      local_c0 = local_98 + (longlong)iVar10 * 0x20;
      local_b8 = (undefined1 *)((longlong)iVar10 * 0x20 + local_98 + 0x10);
      FUN_140404262(param_1,local_9c,&local_c0);
      uVar9 = ~(uint)uVar12 & uVar9;
      puVar16 = *(undefined1 **)(puVar8 + 0x10);
      if (*(undefined1 **)(puVar8 + 0x10) == (undefined1 *)0x0) {
        puVar16 = puVar8;
      }
      iVar6 = *(int *)(puVar8 + 0x18);
      lVar14 = (longlong)iVar11;
      uVar13 = *(uint *)(puVar16 + lVar14 * 4) & uVar9;
      if (uVar13 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar7 = iVar10;
        if (iVar10 < iVar11) {
          iVar7 = iVar11;
        }
        if (iVar11 < iVar10) {
          lVar15 = 0;
          do {
            uVar13 = *(uint *)(puVar16 + lVar15 * 4 + lVar14 * 4 + 4);
            if (uVar13 != 0) {
              iVar11 = iVar11 + (int)lVar15 + 1;
              uVar9 = 0xffffffff;
              goto LAB_140404118;
            }
            iVar17 = iVar17 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar7 - lVar14 != lVar15);
          uVar9 = 0xffffffff;
          iVar11 = iVar7;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar6;
      }
      else {
LAB_140404118:
        uVar12 = (ulonglong)(-uVar13 & uVar13);
        uVar3 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar10 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar10) {
          iVar10 = iVar6;
        }
      }
    } while (iVar10 != local_70 || puVar8 != local_88);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1406d06c4(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140404262 FUN_140404262 body=307 status=ok
// SIG undefined FUN_140404262(void)

undefined4 * FUN_140404262(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1404034c6(param_1,local_48);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined8 *)param_3[1];
  local_40[2] = *(uint *)(puVar1 + 1);
  *(undefined8 *)local_40 = *puVar1;
  *(undefined8 *)(local_40 + 4) = *puVar2;
  local_40[6] = 0xffffffff;
  if (local_40[2] == 0) {
    uVar3 = *local_40;
  }
  else {
    uVar3 = FUN_144a78877(*local_40,local_40[2]);
  }
  uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
  if (uVar5 < 4) {
    iVar7 = 1;
  }
  else {
    uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar7 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
    uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
    local_40[7] = uVar3;
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    local_40[6] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3)
                                    * 4);
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar6 = param_1 + 0x38;
    }
    *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4) =
         local_48[0];
  }
  else {
    *(int *)(param_1 + 0x48) = iVar7;
    FUN_140404396(param_1);
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140404396 FUN_140404396 body=602 status=ok
// SIG undefined FUN_140404396(void)

void FUN_140404396(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar12,4);
    if (0 < (int)uVar12) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar12 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_70 = plVar1;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    plVar1 = local_60;
    iVar14 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar2 = (int *)(*param_1 + (longlong)iVar7 * 0x20);
        iVar5 = *(int *)(*param_1 + 8 + (longlong)iVar7 * 0x20);
        if (iVar5 == 0) {
          iVar5 = *piVar2;
        }
        else {
          local_74 = iVar11;
          iVar5 = FUN_144a78877(*piVar2,iVar5);
          iVar11 = local_74;
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[7] = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        piVar2[6] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
        uVar12 = uVar12 & ~(uint)uVar13;
        plVar8 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        iVar5 = (int)plVar1[3];
        lVar10 = (longlong)iVar14;
        uVar4 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar12;
        if (uVar4 == 0) {
          iVar7 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar7 = iVar5 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar14) {
            iVar3 = iVar14;
          }
          if (iVar7 <= iVar14) break;
          lVar9 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar4 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar3 - lVar10 == lVar9) goto LAB_140404585;
          }
          iVar14 = iVar14 + (int)lVar9 + 1;
          uVar12 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar4 & uVar4);
        uVar6 = uVar13 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar7 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar5);
    }
  }
LAB_140404585:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404045f2 FUN_1404045f2 body=759 status=ok
// SIG undefined FUN_1404045f2(void)

void FUN_1404045f2(longlong param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  longlong local_98;
  int local_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  int local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1404048ec(&local_98);
  uVar12 = (longlong)local_90 - (longlong)local_64;
  lVar15 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar15 + 0xc7c);
  uVar4 = *puVar1;
  pbVar2 = (byte *)(lVar15 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  uVar7 = (uint)uVar12;
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < uVar7) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar12);
    }
    FUN_140404b1e(param_1,uVar12 & 0xffffffff);
    if (uVar7 < 4) {
      iVar5 = 1;
    }
    else {
      uVar7 = (uVar7 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar7 != 0) {
        for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar5)) {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_141189784(param_1);
    }
  }
  iVar5 = local_70;
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar4;
    *pbVar2 = 1;
  }
  if (local_70 == 0) {
    uVar17 = 1;
    uVar12 = 0;
    iVar11 = 0;
    iVar14 = 0;
  }
  else {
    puVar6 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar6 = local_88;
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar11 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar11 = local_70 + -1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar11 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_140404798;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar6[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar12 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar7 & uVar7);
    uVar8 = uVar17 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar14 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar14) {
      iVar14 = local_70;
    }
  }
  if (iVar14 != local_70) {
    uVar7 = 0xffffffff;
    do {
      local_b0 = local_98 + (longlong)iVar14 * 0x38;
      local_a8 = (longlong)iVar14 * 0x38 + local_98 + 0x28;
      FUN_140154246(param_1,local_9c,&local_b0,0);
      uVar7 = ~(uint)uVar17 & uVar7;
      puVar6 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar6 = local_88;
      }
      iVar14 = (int)uVar12;
      lVar15 = (longlong)iVar14;
      uVar13 = puVar6[lVar15] & uVar7;
      if (uVar13 == 0) {
        iVar9 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar9 = local_70 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar14) {
          iVar10 = iVar14;
        }
        if (iVar14 < iVar9) {
          lVar16 = 0;
          do {
            uVar13 = puVar6[lVar15 + lVar16 + 1];
            if (uVar13 != 0) {
              uVar12 = (ulonglong)(iVar14 + (int)lVar16 + 1);
              uVar7 = 0xffffffff;
              goto LAB_140404760;
            }
            iVar11 = iVar11 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar10 - lVar15 != lVar16);
          uVar7 = 0xffffffff;
          iVar14 = iVar10;
        }
        uVar12 = (ulonglong)(iVar14 + 1);
        iVar14 = local_70;
      }
      else {
LAB_140404760:
        uVar17 = (ulonglong)(-uVar13 & uVar13);
        uVar8 = uVar17 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar14 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar14) {
          iVar14 = local_70;
        }
      }
    } while (iVar14 != iVar5);
  }
LAB_140404798:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140bd508c(&local_98);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404048ec FUN_1404048ec body=125 status=ok
// SIG undefined FUN_1404048ec(void)

undefined8 * FUN_1404048ec(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_14040496a();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 14040496a FUN_14040496a body=434 status=ok
// SIG undefined FUN_14040496a(void)

longlong * FUN_14040496a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar7 = 0;
    local_48 = plVar1;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_50);
      iVar7 = (int)param_1[5];
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar5 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar6 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar7) || (local_60 = uVar5, local_48 != plVar1)) {
      do {
        local_60 = uVar5;
        if (*(longlong *)(*local_78 + 0x18 + (longlong)iVar6 * 0x38) != 0) {
          FUN_1400020a8();
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (((local_60._4_4_ != iVar7) || (local_68 != plVar1)) || (local_78 != param_1));
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar4 = param_2[3];
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)plVar1 = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(int *)(param_1 + 3) = (int)lVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
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
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140404b1e FUN_140404b1e body=457 status=ok
// SIG undefined FUN_140404b1e(void)

void FUN_140404b1e(longlong *param_1,uint param_2)

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
      FUN_144748838(param_1);
      iVar13 = (int)param_1[1];
      iVar12 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar13 + uVar9;
    if ((uint)(iVar12 - iVar13) < uVar9) {
      FUN_1447030e2(param_1);
    }
    if (iVar13 < (int)param_2) {
      lVar2 = *param_1;
      iVar12 = *(int *)((longlong)param_1 + 0x34);
      puVar6 = (undefined4 *)(uVar8 * 0x38 + lVar2 + -0x34);
      do {
        iVar10 = (int)uVar8;
        if (iVar12 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar10 + -1;
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
        puVar6 = puVar6 + -0xe;
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



// FUNCTION 140404ce8 FUN_140404ce8 body=1542 status=ok
// SIG undefined FUN_140404ce8(void)

void FUN_140404ce8(longlong param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  uint *puVar20;
  longlong lVar21;
  uint *_Dst;
  undefined1 auStack_118 [36];
  uint local_f4;
  int local_f0;
  uint local_ec;
  uint *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  uint *local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined4 local_b4;
  longlong local_b0;
  int local_a8;
  uint local_a0 [6];
  uint local_88;
  int iStack_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14570d490(&local_b0,param_1);
  uVar16 = (longlong)local_a8 - (longlong)iStack_7c;
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar19 + 0xc7c);
  uVar4 = *puVar1;
  pbVar2 = (byte *)(lVar19 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  uVar15 = (uint)uVar16;
  if ((uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 0x34)) < uVar15) {
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar16);
    }
    FUN_1404056c0(param_1,uVar16 & 0xffffffff);
    if (uVar15 < 4) {
      iVar8 = 1;
    }
    else {
      uVar15 = (uVar15 | 1) + 0xe;
      iVar8 = 0x1f;
      if (uVar15 != 0) {
        for (; uVar15 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      iVar8 = 1 << ((byte)iVar8 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x48) == 0) || (*(int *)(param_1 + 0x48) < iVar8)) {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_140405458(param_1);
    }
  }
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar4;
    *pbVar2 = 1;
  }
  local_d0 = local_a0;
  local_d8 = 0x100000000;
  local_c8 = 0xffffffff;
  local_c0 = 0;
  if (local_88 == 0) {
    uVar16 = 1;
    local_c8._0_4_ = 0xffffffff;
    local_88 = 0;
    local_c8._4_4_ = 0;
    local_d8._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_d8);
    uVar16 = local_d8 >> 0x20;
  }
  if (local_c8._4_4_ != local_88 || local_d0 != local_a0) {
    local_e0 = param_1 + 0x38;
    puVar10 = local_d0;
    iVar8 = (int)local_d8;
    uVar15 = (uint)local_c8;
    uVar9 = local_c8._4_4_;
    iVar17 = local_c0;
    local_f4 = local_88;
    local_e8 = local_d0;
    do {
      lVar19 = local_b0;
      lVar21 = (longlong)(int)uVar9 * 0x70;
      puVar20 = (uint *)(local_b0 + lVar21);
      local_f0 = iVar17;
      local_ec = uVar15;
      FUN_140405376(param_1,&local_d8);
      puVar6 = local_d0;
      local_d0[2] = *(uint *)(lVar19 + 8 + lVar21);
      *(undefined8 *)local_d0 = *(undefined8 *)(lVar19 + lVar21);
      *(undefined8 *)(local_d0 + 4) = *(undefined8 *)(lVar19 + 0x10 + lVar21);
      local_d0[0xe] = 0;
      local_d0[0xf] = 0;
      local_d0[0x10] = 0;
      local_d0[6] = 0;
      local_d0[7] = 0;
      local_d0[8] = 0;
      local_d0[9] = 0;
      local_d0[0x11] = 0x80;
      local_d0[0x12] = 0xffffffff;
      local_d0[0x13] = 0;
      local_d0[0x16] = 0;
      local_d0[0x17] = 0;
      local_d0[0x18] = 0;
      if (local_d0 != puVar20) {
        uVar15 = puVar20[0x18];
        if ((ulonglong)(longlong)(int)uVar15 < 2) {
          if (uVar15 != 0) {
            puVar10 = (uint *)0x0;
            goto LAB_140404ede;
          }
        }
        else {
          puVar10 = local_d0 + 0x16;
          FUN_1446efa72(puVar10,0,uVar15,4);
          puVar10 = *(uint **)puVar10;
LAB_140404ede:
          puVar13 = puVar6 + 0x14;
          if (puVar10 != (uint *)0x0) {
            puVar13 = puVar10;
          }
          puVar10 = puVar20 + 0x14;
          if (*(uint **)(puVar20 + 0x16) != (uint *)0x0) {
            puVar10 = *(uint **)(puVar20 + 0x16);
          }
          memcpy(puVar13,puVar10,(longlong)(int)uVar15 << 2);
        }
        puVar13 = puVar6 + 6;
        puVar6[0x18] = uVar15;
        uVar15 = puVar20[8];
        FUN_1406d06fc(puVar13,uVar15);
        uVar9 = puVar6[8];
        puVar6[8] = uVar9 + uVar15;
        if (puVar6[9] - uVar9 < uVar15) {
          FUN_1447711aa(puVar13);
        }
        puVar6[0x12] = puVar20[0x12];
        puVar6[0x13] = puVar20[0x13];
        uVar9 = puVar20[0x10] + 0x1f & 0xffffffe0;
        puVar6[0x10] = 0;
        if (((int)puVar6[0x11] < (int)uVar9) || (0x80 < (int)puVar6[0x11])) {
          if ((int)uVar9 < 0x81) {
            uVar9 = 0x80;
          }
          puVar6[0x11] = uVar9;
          FUN_1446efbd8(puVar6 + 10,0);
        }
        uVar9 = puVar20[0x10];
        puVar6[0x10] = uVar9;
        if (uVar9 != 0) {
          puVar10 = puVar20 + 10;
          if (*(uint **)(puVar20 + 0xe) != (uint *)0x0) {
            puVar10 = *(uint **)(puVar20 + 0xe);
          }
          _Dst = puVar6 + 10;
          if (*(uint **)(puVar6 + 0xe) != (uint *)0x0) {
            _Dst = *(uint **)(puVar6 + 0xe);
          }
          memcpy(_Dst,puVar10,(ulonglong)(uVar9 + 0x1f >> 3 & 0xfffffffc));
        }
        puVar10 = local_e8;
        if (uVar15 != 0) {
          memcpy(*(void **)puVar13,*(void **)(puVar20 + 6),(longlong)(int)uVar15 << 5);
        }
      }
      puVar6[0x1a] = 0xffffffff;
      local_b4 = (int)local_d8;
      uVar15 = *puVar6;
      uVar9 = puVar6[2];
      if (uVar9 != 0) {
        uVar15 = uVar9 >> 0xd ^ uVar15 - uVar9;
        uVar14 = uVar15 << 8 ^ (-0x61c88647 - uVar9) - uVar15;
        uVar18 = uVar14 >> 0xd ^ (uVar9 - uVar15) - uVar14;
        uVar15 = uVar18 >> 0xc ^ (uVar15 - uVar14) - uVar18;
        uVar9 = uVar15 << 0x10 ^ (uVar14 - uVar18) - uVar15;
        uVar14 = uVar9 >> 5 ^ (uVar18 - uVar15) - uVar9;
        uVar18 = uVar14 >> 3 ^ (uVar15 - uVar9) - uVar14;
        uVar15 = uVar18 << 10 ^ (uVar9 - uVar14) - uVar18;
        uVar15 = uVar15 >> 0xf ^ uVar14 - (uVar18 + uVar15);
      }
      cVar7 = FUN_1404052f0(param_1,uVar15,puVar6,&local_b4);
      if (cVar7 == '\0') {
        uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
        if (uVar9 < 4) {
          iVar17 = 1;
        }
        else {
          uVar11 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
          lVar19 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar17 = 1 << ((byte)lVar19 & 0x1f);
        }
        if (((int)uVar9 < 1) || (iVar17 <= *(int *)(param_1 + 0x48))) {
          uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
          puVar6[0x1b] = uVar15;
          lVar19 = *(longlong *)(param_1 + 0x40);
          if (*(longlong *)(param_1 + 0x40) == 0) {
            lVar19 = local_e0;
          }
          puVar6[0x1a] = *(uint *)(lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                            (longlong)(int)uVar15) * 4);
          lVar19 = *(longlong *)(param_1 + 0x40);
          if (*(longlong *)(param_1 + 0x40) == 0) {
            lVar19 = local_e0;
          }
          *(undefined4 *)
           (lVar19 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) =
               local_b4;
        }
        else {
          *(int *)(param_1 + 0x48) = iVar17;
          FUN_140405458(param_1);
        }
      }
      uVar15 = local_ec & ~(uint)uVar16;
      puVar20 = *(uint **)(puVar10 + 4);
      if (*(uint **)(puVar10 + 4) == (uint *)0x0) {
        puVar20 = puVar10;
      }
      uVar14 = puVar10[6];
      lVar19 = (longlong)iVar8;
      uVar9 = puVar20[lVar19] & uVar15;
      iVar17 = local_f0;
      if (uVar9 == 0) {
        iVar12 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar12 = uVar14 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar17 = local_f0 + 0x20;
        iVar5 = iVar12;
        if (iVar12 < iVar8) {
          iVar5 = iVar8;
        }
        if (iVar8 < iVar12) {
          lVar21 = 0;
          do {
            uVar9 = puVar20[lVar19 + lVar21 + 1];
            if (uVar9 != 0) {
              iVar8 = iVar8 + (int)lVar21 + 1;
              uVar15 = 0xffffffff;
              goto LAB_1404050cc;
            }
            iVar17 = iVar17 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar5 - lVar19 != lVar21);
          uVar15 = 0xffffffff;
          iVar8 = iVar5;
        }
        iVar8 = iVar8 + 1;
        puVar10 = local_e8;
        uVar9 = uVar14;
      }
      else {
LAB_1404050cc:
        uVar16 = (ulonglong)(-uVar9 & uVar9);
        uVar11 = uVar16 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar9 = (iVar17 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)uVar9) {
          uVar9 = uVar14;
        }
      }
    } while (uVar9 != local_f4 || puVar10 != local_a0);
  }
  local_68 = 0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  FUN_1406d03b4(&local_b0);
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404052f0 FUN_1404052f0 body=134 status=ok
// SIG undefined FUN_1404052f0(void)

undefined8 FUN_1404052f0(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_1448467de(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x70;
    *(undefined4 *)(lVar1 + 0x60 + lVar3) = 0;
    if (*(longlong *)(lVar1 + 0x58 + lVar3) != 0) {
      FUN_1400020a8();
    }
    FUN_1406d06c4(lVar1 + lVar3 + 0x18);
    memmove((void *)(lVar1 + lVar3),param_3,0x68);
    FUN_14709f9b4(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 140405376 FUN_140405376 body=226 status=ok
// SIG undefined FUN_140405376(void)

int * FUN_140405376(longlong *param_1,int *param_2)

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
      FUN_140275bcc(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x70);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x70) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x70 + *param_1;
  return param_2;
}


