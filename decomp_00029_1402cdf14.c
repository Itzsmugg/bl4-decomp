// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1402cdf14 FUN_1402cdf14 body=553 status=ok
// SIG undefined FUN_1402cdf14(void)

void FUN_1402cdf14(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x310;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + 0x2d0 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x30c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x308 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_1402ce0f4;
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
LAB_1402ce0f4:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ce13e FUN_1402ce13e body=607 status=ok
// SIG undefined FUN_1402ce13e(void)

void FUN_1402ce13e(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined1 local_68 [32];
  undefined1 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  plVar7 = DAT_14c82b500;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar9 = DAT_14c760d80 ^ 1;
  if ((*(byte *)puVar3 & 0x20) != 0) {
    uVar9 = 1;
  }
  lVar1 = param_1 + 0x18;
  plVar4 = *(longlong **)(param_1 + 0x18 + (ulonglong)(uVar9 << 4));
  if (((plVar4 == (longlong *)0x0) || (puVar5 = (undefined8 *)*plVar4, puVar5 == (undefined8 *)0x0))
     || ((*(byte *)(puVar5 + 0x14) & 1) != 0)) {
    bVar8 = false;
  }
  else {
    LOCK();
    *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
    UNLOCK();
    local_48 = (undefined1 *)0x0;
    local_40 = 1;
    local_70 = puVar5;
    FUN_144727e94(local_68,1,0);
    puVar12 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar12 = local_68;
    }
    FUN_144727e6e(puVar12,&local_70,1);
    (**(code **)(*plVar7 + 0x60))(plVar7,local_68,0xff);
    puVar12 = local_48;
    if (local_48 == (undefined1 *)0x0) {
      puVar12 = local_68;
    }
    FUN_144717c65(puVar12,local_40);
    if (local_48 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_70 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_70 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*local_70)(local_70,1);
      }
    }
    bVar8 = true;
  }
  uVar13 = DAT_14c760d80 ^ 1;
  uVar11 = *puVar3 & 0x20;
  uVar9 = 1;
  if (uVar11 == 0) {
    uVar9 = uVar13;
  }
  lVar6 = *(longlong *)(lVar1 + (ulonglong)(uVar9 << 4));
  if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 8), lVar6 != 0)) {
    if ((!bVar8) && ((*(int *)(lVar6 + 0x10) == 0 && (*(longlong *)(lVar6 + 0x20) != 0)))) {
      (**(code **)(**(longlong **)(lVar6 + 0x18) + 0x20))(*(longlong **)(lVar6 + 0x18),0xffffffff,0)
      ;
      *(undefined8 *)(lVar6 + 0x20) = 0;
    }
    FUN_140187fa0(lVar6,1,0);
    uVar11 = *puVar3 & 0x20;
    uVar13 = DAT_14c760d80 ^ 1;
  }
  uVar9 = 1;
  if (uVar11 == 0) {
    uVar9 = uVar13;
  }
  uVar10 = (ulonglong)(uVar9 << 4);
  *(undefined8 *)(lVar1 + uVar10) = 0;
  plVar7 = *(longlong **)(param_1 + 0x20 + uVar10);
  if (plVar7 != (longlong *)0x0) {
    *(undefined8 *)(uVar10 + lVar1 + 8) = 0;
    LOCK();
    plVar4 = plVar7 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (((*(byte *)puVar3 & 0x20) == 0) && (DAT_14c760d80 == 0)) {
    uVar10 = (ulonglong)((uVar9 ^ 1) << 4);
    *(undefined8 *)(lVar1 + uVar10) = 0;
    plVar7 = *(longlong **)(param_1 + 0x20 + uVar10);
    if (plVar7 != (longlong *)0x0) {
      *(undefined8 *)(lVar1 + uVar10 + 8) = 0;
      LOCK();
      plVar4 = plVar7 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ce39e FUN_1402ce39e body=159 status=ok
// SIG undefined FUN_1402ce39e(void)

ulonglong FUN_1402ce39e(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  uVar2 = 1;
  if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) & 0x20) == 0) {
    uVar2 = DAT_14c760d80 ^ 1;
  }
  plVar3 = *(longlong **)(param_1 + 0x18 + (ulonglong)(uVar2 << 4));
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (plVar3 == (longlong *)0x0) goto LAB_1402ce40e;
  if (*plVar3 == 0) {
LAB_1402ce3fc:
    lVar1 = plVar3[1];
    if (lVar1 == 0) goto LAB_1402ce40e;
    if (*(int *)(lVar1 + 0x10) == 0) {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                  (*(longlong **)(lVar1 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
      goto LAB_1402ce40e;
    }
  }
  else if ((*(byte *)(*plVar3 + 0xa0) & 1) != 0) {
    plVar3 = *(longlong **)((ulonglong)(uVar2 << 4) + param_1 + 0x18);
    goto LAB_1402ce3fc;
  }
  uVar4 = 0;
LAB_1402ce40e:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1402ce43e FUN_1402ce43e body=552 status=ok
// SIG undefined FUN_1402ce43e(void)

void FUN_1402ce43e(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = (int)param_1[9];
    iVar13 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar13 = iVar2;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar13 >> 2) {
      iVar2 = (int)param_1[5];
      if (iVar2 == 0) {
        uVar10 = 0;
        uVar12 = 1;
        iVar13 = 0;
        iVar9 = 0;
      }
      else {
        puVar11 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 2);
        }
        uVar8 = *puVar11;
        if (uVar8 == 0) {
          iVar13 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar13 = iVar2 + -1;
          }
          uVar10 = 0;
          uVar12 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar12 = uVar10;
          }
          iVar9 = 0;
          do {
            if (uVar12 == uVar10) goto LAB_1402ce5da;
            iVar9 = iVar9 + 0x20;
            uVar8 = puVar11[uVar10 + 1];
            uVar10 = uVar10 + 1;
          } while (uVar8 == 0);
        }
        else {
          uVar10 = 0;
          iVar9 = 0;
        }
        uVar12 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar12 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar13) {
          iVar13 = iVar2;
        }
      }
      if (iVar13 != iVar2) {
        uVar8 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0x14 + (longlong)iVar13 * 0x18) * 4) =
               0xffffffff;
          uVar8 = ~(uint)uVar12 & uVar8;
          puVar11 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar11 = (uint *)(param_1 + 2);
          }
          iVar3 = (int)param_1[5];
          iVar13 = (int)uVar10;
          lVar15 = (longlong)iVar13;
          uVar7 = puVar11[lVar15] & uVar8;
          if (uVar7 == 0) {
            iVar5 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar5 = iVar3 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar6 = iVar5;
            if (iVar5 < iVar13) {
              iVar6 = iVar13;
            }
            if (iVar13 < iVar5) {
              lVar14 = 0;
              do {
                uVar7 = puVar11[lVar15 + lVar14 + 1];
                if (uVar7 != 0) {
                  uVar10 = (ulonglong)(iVar13 + (int)lVar14 + 1);
                  uVar8 = 0xffffffff;
                  goto LAB_1402ce5a5;
                }
                iVar9 = iVar9 + 0x20;
                lVar14 = lVar14 + 1;
              } while (iVar6 - lVar15 != lVar14);
              uVar8 = 0xffffffff;
              iVar13 = iVar6;
            }
            uVar10 = (ulonglong)(iVar13 + 1);
            iVar13 = iVar3;
          }
          else {
LAB_1402ce5a5:
            uVar12 = (ulonglong)(-uVar7 & uVar7);
            uVar1 = uVar12 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar13 = (iVar9 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar13) {
              iVar13 = iVar3;
            }
          }
        } while (iVar13 != iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar15 = 0;
      do {
        *(undefined4 *)((longlong)plVar4 + lVar15 * 4) = 0xffffffff;
        lVar15 = lVar15 + 1;
      } while (lVar15 < (int)param_1[9]);
    }
LAB_1402ce5da:
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 1402ce666 FUN_1402ce666 body=885 status=ok
// SIG undefined FUN_1402ce666(void)

void FUN_1402ce666(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  byte param_5)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  undefined4 *puVar22;
  ulonglong uVar23;
  undefined1 auStack_a8 [35];
  byte local_85;
  uint local_84;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  uint *local_68;
  undefined8 *local_60;
  ulonglong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar15 = (int)param_4[5];
  if (iVar15 == 0) {
    uVar23 = 1;
    uVar20 = 0;
    iVar13 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_4[4];
    if ((uint *)param_4[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_4 + 2);
    }
    uVar17 = *puVar10;
    if (uVar17 == 0) {
      iVar13 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar13 = iVar15 + -1;
      }
      uVar20 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar20;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar20) goto LAB_1402ce6af;
        iVar13 = iVar13 + 0x20;
        uVar17 = puVar10[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar20 = 0;
      iVar13 = 0;
    }
    uVar23 = (ulonglong)(-uVar17 & uVar17);
    uVar11 = uVar23 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar12 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar12) {
      iVar12 = iVar15;
    }
  }
  if (iVar12 < iVar15) {
    uVar17 = 0xffffffff;
    local_85 = param_5 ^ 1;
    local_70 = param_1;
    local_68 = (uint *)(param_4 + 2);
    do {
      lVar16 = *param_4;
      lVar8 = (longlong)iVar12;
      puVar21 = (ulonglong *)(lVar16 + lVar8 * 0x18 + 8);
      if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
        uVar11 = *(ulonglong *)(lVar16 + lVar8 * 0x18);
        uVar14 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        plVar9 = param_2 + 7;
        if ((longlong *)param_2[8] != (longlong *)0x0) {
          plVar9 = (longlong *)param_2[8];
        }
        iVar15 = *(int *)((longlong)plVar9 +
                         (ulonglong)((int)param_2[9] - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4);
        if (iVar15 != -1) {
          do {
            puVar1 = (ulonglong *)(*param_2 + (longlong)iVar15 * 0x18);
            if (*puVar1 == uVar11) {
              if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                if (puVar1[1] != *puVar21) {
                  local_78 = local_70 + 0x45;
                  *(int *)((longlong)local_70 + 0x2ac) = *(int *)((longlong)local_70 + 0x2ac) + 1;
                  iVar15 = (int)local_70[0x46];
                  *(uint *)(local_70 + 0x46) = iVar15 + 1U;
                  local_84 = uVar17;
                  local_80 = param_3;
                  if (*(uint *)((longlong)local_70 + 0x234) < iVar15 + 1U) {
                    FUN_1402cf380(local_78,iVar15);
                  }
                  *(ulonglong *)(*local_78 + (longlong)iVar15 * 8) = *puVar21;
                  FUN_1402cea7c(param_4,iVar12);
                  param_3 = local_80;
                  uVar17 = local_84;
                }
                goto LAB_1402ce827;
              }
              break;
            }
            iVar15 = (int)puVar1[2];
          } while (iVar15 != -1);
        }
      }
      puVar2 = (undefined8 *)(lVar16 + lVar8 * 0x18);
      local_84 = uVar17;
      local_80 = param_3;
      local_60 = puVar2;
      local_58 = puVar21;
      FUN_1402ceb44(param_2,local_4c,&local_60,0);
      cVar7 = FUN_1402ce9dc(local_80,*puVar2);
      plVar9 = local_70;
      param_3 = local_80;
      uVar17 = local_84;
      if (cVar7 == '\0' && local_85 == 0) {
        puVar22 = (undefined4 *)(lVar8 * 0x18 + *param_4);
        iVar15 = (int)local_70[1];
        *(uint *)(local_70 + 1) = iVar15 + 1U;
        if (*(uint *)((longlong)local_70 + 0xc) < iVar15 + 1U) {
          FUN_1456f60d2(local_70,iVar15);
        }
        uVar4 = puVar22[1];
        uVar5 = puVar22[2];
        uVar6 = puVar22[3];
        puVar3 = (undefined4 *)(*plVar9 + (longlong)iVar15 * 0x10);
        *puVar3 = *puVar22;
        puVar3[1] = uVar4;
        puVar3[2] = uVar5;
        puVar3[3] = uVar6;
        param_3 = local_80;
        uVar17 = local_84;
      }
LAB_1402ce827:
      uVar17 = uVar17 & ~(uint)uVar23;
      puVar10 = (uint *)param_4[4];
      if ((uint *)param_4[4] == (uint *)0x0) {
        puVar10 = local_68;
      }
      iVar15 = (int)param_4[5];
      iVar12 = (int)uVar20;
      lVar16 = (longlong)iVar12;
      uVar14 = puVar10[lVar16] & uVar17;
      if (uVar14 == 0) {
        iVar18 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar18 = iVar15 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar19 = iVar18;
        if (iVar18 < iVar12) {
          iVar19 = iVar12;
        }
        if (iVar18 <= iVar12) break;
        lVar8 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar14 = puVar10[lVar16 + lVar8 + 1];
          if (uVar14 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar19 - lVar16 == lVar8) goto LAB_1402ce6af;
        }
        uVar20 = (ulonglong)(iVar12 + (int)lVar8 + 1);
        uVar17 = 0xffffffff;
      }
      uVar23 = (ulonglong)(-uVar14 & uVar14);
      uVar11 = uVar23 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar12 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar15);
  }
LAB_1402ce6af:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ce9dc FUN_1402ce9dc body=160 status=ok
// SIG undefined FUN_1402ce9dc(void)

undefined8 FUN_1402ce9dc(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1402cea7c(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1402cea7c FUN_1402cea7c body=85 status=ok
// SIG undefined FUN_1402cea7c(void)

void FUN_1402cea7c(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1402cead2();
  return;
}



// FUNCTION 1402cead2 FUN_1402cead2 body=114 status=ok
// SIG undefined FUN_1402cead2(void)

void FUN_1402cead2(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1402ceb44 FUN_1402ceb44 body=1100 status=ok
// SIG undefined FUN_1402ceb44(void)

int * FUN_1402ceb44(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  int iVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_14482b872(param_1,iVar21);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar6 = iVar18 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar15 = param_1 + 2;
    iVar14 = iVar18 + 1;
    iVar22 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar22 = iVar18;
    }
    if (iVar22 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        iVar6 = iVar18;
        if (iVar18 + 0x20U < 0xa0) {
          iVar14 = 0x80;
        }
        else {
          uVar13 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = uVar13 + (uVar13 * 3 >> 3) + 0x10;
          }
          uVar16 = (ulonglong)(uVar7 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar8 = (uint)(uVar16 + 0xf);
              if (uVar7 < 0x1ffd) {
                uVar16 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar16 + 0xf >> 4]];
              }
              else {
                uVar17 = (ulonglong)(uVar8 & 0xfffffff0);
                if (uVar17 < 0x7ff1) {
                  bVar12 = (&DAT_14c841e00)[uVar8 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar12) {
                    uVar20 = (ulonglong)bVar12;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar12;
                  do {
                    uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_1402cee8a;
                    lVar10 = uVar20 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar10 != 0x33);
                }
                uVar16 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar16 = (ulonglong)DAT_14c841df8;
                }
                uVar16 = -uVar16 & (uVar17 + uVar16) - 1;
              }
            }
            else {
              uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
              iVar6 = (int)param_1[5];
            }
          }
LAB_1402cee8a:
          iVar9 = (int)(uVar16 >> 2);
          iVar14 = -0x20;
          if ((int)uVar13 <= iVar9) {
            iVar14 = iVar9 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar15,iVar6);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar6 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar6 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar15;
        }
        bVar12 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar6 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar18 & 0x1f;
    puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar22 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar10 = (longlong)iVar21;
    iVar18 = *(int *)(*param_1 + 4 + lVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar18;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x18) = 0xffffffff;
    }
  }
  plVar15 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar15 = (longlong *)param_1[4];
  }
  iVar18 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar18 = iVar21;
  }
  puVar2 = (uint *)((longlong)plVar15 + (longlong)(iVar18 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar21 & 0x1f);
  puVar1 = (ulonglong *)(*param_1 + lVar10 * 0x18);
  puVar3 = (ulonglong *)param_3[1];
  uVar16 = *(ulonglong *)*param_3;
  *puVar1 = uVar16;
  puVar1[1] = *puVar3;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar13 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar13 = uVar13 >> 0x10 ^ uVar13;
  cVar11 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar13) * 4);
    if (iVar18 == -1) {
      cVar11 = '\0';
    }
    else {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar18 * 0x18);
        if (*puVar3 == uVar16) {
          uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
          uVar16 = puVar1[1];
          uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
          *(int *)puVar3 = (int)*puVar1;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
          *(int *)(puVar3 + 1) = (int)uVar16;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar5;
          FUN_1402cead2(param_1,iVar21);
          cVar11 = '\x01';
          iVar21 = iVar18;
          break;
        }
        iVar18 = (int)puVar3[2];
        cVar11 = '\0';
      } while (iVar18 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar11;
  }
  if (cVar11 == '\0') {
    uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar7 < 4) {
      iVar18 = 1;
    }
    else {
      uVar16 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar18 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar18 <= (int)param_1[9])) {
      uVar13 = (int)param_1[9] - 1U & uVar13;
      *(uint *)((longlong)puVar1 + 0x14) = uVar13;
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      *(undefined4 *)(puVar1 + 2) =
           *(undefined4 *)
            ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
      plVar15 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar15 = param_1 + 7;
      }
      *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
           iVar21;
    }
    else {
      *(int *)(param_1 + 9) = iVar18;
      FUN_1402cf4e2(param_1);
    }
  }
  *param_2 = iVar21;
  return param_2;
}



// FUNCTION 1402cef90 FUN_1402cef90 body=1006 status=ok
// SIG undefined FUN_1402cef90(void)

int FUN_1402cef90(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined8 *local_130;
  undefined1 local_128 [64];
  longlong local_e8;
  undefined4 local_e0;
  code *local_d8 [2];
  undefined8 *local_c8;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca813a8) {
    FUN_144b3d300(&DAT_14ca813a8);
    if (DAT_14ca813a8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca813a0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
      _Init_thread_footer(&DAT_14ca813a8);
    }
  }
  if ((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) {
    iVar2 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
    iVar7 = 0;
    if (0 < iVar2) goto LAB_1402cf098;
  }
  lVar8 = *param_3;
  iVar7 = *(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x34);
  if (iVar7 != 0 && *(int *)(lVar8 + 0x34) <= *(int *)(lVar8 + 8)) {
    FUN_14740f39e(local_128);
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (DAT_14c86a9fc == 0) {
      if (iVar2 != 2) {
        if (iVar2 != 1) goto LAB_1402cf0f8;
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        if (DVar3 == DVar4) goto LAB_1402cf101;
        goto LAB_1402cf208;
      }
LAB_1402cf101:
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      lStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_145cb65f4(&local_98,local_128);
      if (DAT_14ca85164 == '\x01') {
        FUN_1431e7fea(&local_98);
      }
      else {
        puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
        puVar5 = puVar6 + 0xc;
        if (DAT_14ca85108 < puVar5) {
          FUN_140023dd8(&DAT_14ca85100,0x68);
          puVar6 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
          puVar5 = puVar6 + 0xc;
        }
        DAT_14ca85160 = DAT_14ca85160 + 1;
        DAT_14ca85100 = puVar5;
        *DAT_14ca85130 = puVar6;
        DAT_14ca85130 = puVar6 + 1;
        puVar6[1] = 0;
        *puVar6 = &PTR_FUN_14a37d5a8;
        FUN_14740f39e(puVar6 + 2,&local_98);
      }
    }
    else {
LAB_1402cf0f8:
      if (iVar2 == 0x10) goto LAB_1402cf101;
LAB_1402cf208:
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      lStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_145cb65f4(&local_98,local_128);
      local_d8[0] = (code *)0x0;
      puVar5 = (undefined8 *)FUN_14001cc68(0x58,8);
      *puVar5 = &PTR_LAB_14a37d5b0;
      local_c8 = puVar5;
      FUN_14740f39e(puVar5 + 1,&local_98);
      if (puVar5 != (undefined8 *)&DAT_fffffffffffffff8) {
        local_d8[0] = FUN_1431e81be;
      }
      local_138 = 2;
      FUN_14014aede(&local_130,local_d8);
      if (local_130 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_130 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_130)(local_130,1);
        }
      }
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_140dab95c(&local_98);
    local_e0 = 0;
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
    FUN_140dab95c(local_128);
    lVar8 = *param_3;
  }
  *param_3 = *param_2;
  *param_2 = lVar8;
  lVar8 = (longlong)(int)param_1[1];
  if (0 < lVar8) {
    uVar9 = lVar8 + 1;
    lVar8 = lVar8 << 4;
    do {
      lVar8 = lVar8 + -0x10;
      iVar2 = FUN_1402ce9dc(*param_3,*(undefined8 *)(*param_1 + lVar8));
      if (iVar2 != 0) {
        lStack_90 = *param_1 + lVar8 + 8;
        local_98 = *param_1 + lVar8;
        FUN_1402ceb44(*param_2,local_128,&local_98,0);
      }
      uVar9 = uVar9 - 1;
    } while (1 < uVar9);
  }
LAB_1402cf098:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402cf380 FUN_1402cf380 body=353 status=ok
// SIG undefined FUN_1402cf380(void)

void FUN_1402cf380(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402cf405;
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
LAB_1402cf405:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402cf4e2 FUN_1402cf4e2 body=667 status=ok
// SIG undefined FUN_1402cf4e2(void)

void FUN_1402cf4e2(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1402cf555;
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
LAB_1402cf555:
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



// FUNCTION 1402cf77e FUN_1402cf77e body=14 status=ok
// SIG undefined FUN_1402cf77e(void)

void FUN_1402cf77e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1402cf78c();
    return;
  }
  return;
}



// FUNCTION 1402cf78c FUN_1402cf78c body=449 status=ok
// SIG undefined FUN_1402cf78c(void)

void FUN_1402cf78c(undefined8 *param_1,uint param_2)

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
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x78);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1402cf8a6:
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
LAB_1402cf8e3:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x78;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402cf7e1;
LAB_1402cf7d6:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402cf7e1:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x222) goto code_r0x0001402cf80d;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x1e + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1402cf863:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402cf8e3;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1402cf8a6;
code_r0x0001402cf80d:
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
      goto LAB_1402cf863;
    }
  }
  goto LAB_1402cf7d6;
}



// FUNCTION 1402cf94e FUN_1402cf94e body=60 status=ok
// SIG undefined FUN_1402cf94e(void)

longlong FUN_1402cf94e(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2a0);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
    }
  }
  return lVar1;
}



// FUNCTION 1402cf98a FUN_1402cf98a body=228 status=ok
// SIG undefined FUN_1402cf98a(void)

longlong FUN_1402cf98a(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac2340 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1457dfdaa;
    local_28 = &LAB_14637ddd6;
    local_38 = &LAB_14787f4cb;
    local_40 = &LAB_1459be59e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x1c0;
    FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingPersistent",&DAT_14cac2340,&DAT_14787f4ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac2340;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402cfa70 FUN_1402cfa70 body=138 status=ok
// SIG undefined FUN_1402cfa70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402cfa70(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c842718) {
    FUN_144b3d300(&DAT_14c842718);
    if (DAT_14c842718 == -1) {
      uVar1 = FUN_14001cc68(0x58,0x10);
      FUN_1456f62ee(uVar1);
      _DAT_14c842708 = uVar1;
      DAT_14c842710 = uVar1;
      atexit(FUN_14275b56c);
      _Init_thread_footer(&DAT_14c842718);
    }
  }
  return DAT_14c842710;
}



// FUNCTION 1402cfafa FUN_1402cfafa body=595 status=ok
// SIG undefined FUN_1402cfafa(void)

void FUN_1402cfafa(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  puVar4 = DAT_14ca9f070;
  puVar3 = DAT_14ca9f058;
  puVar2 = DAT_14ca9f040;
  if (DAT_14ca9f278 == 0) {
    return;
  }
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar5 = *piVar1;
  bVar8 = DAT_14c86a9f8;
  if (param_1 == 1) {
    lVar10 = DAT_14ca9f0a0;
    if (iVar5 != 0x40000002) {
      if (DAT_14c86a9f8 == 0) {
        DAT_14ca9f230 = *DAT_14ca9f058;
        lVar10 = DAT_14ca9f0a0;
        bVar8 = 0;
      }
      else {
        if (iVar5 != 2) {
          uVar9 = 1;
          if (iVar5 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            uVar9 = (ulonglong)(DVar6 != DVar7);
            iVar5 = *piVar1;
          }
          DAT_14ca9f230 = puVar3[uVar9];
          lVar10 = DAT_14ca9f0a0;
          goto LAB_1402cfc36;
        }
        DAT_14ca9f230 = *DAT_14ca9f058;
        iVar5 = 2;
      }
      goto LAB_1402cfc87;
    }
    DAT_14ca9f230 = *DAT_14ca9f058;
  }
  else if (param_1 == 2) {
    lVar10 = DAT_14ca9f0b8;
    if (iVar5 == 0x40000002) {
      DAT_14ca9f230 = *DAT_14ca9f070;
    }
    else {
      if (DAT_14c86a9f8 == 0) {
        DAT_14ca9f230 = *DAT_14ca9f070;
        bVar8 = 0;
      }
      else if (iVar5 == 2) {
        DAT_14ca9f230 = *DAT_14ca9f070;
        iVar5 = 2;
      }
      else {
        uVar9 = 1;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          uVar9 = (ulonglong)(DVar6 != DVar7);
          iVar5 = *piVar1;
        }
        DAT_14ca9f230 = puVar4[uVar9];
        lVar10 = DAT_14ca9f0b8;
LAB_1402cfc36:
        bVar8 = DAT_14c86a9f8;
        if (iVar5 == 0x40000002) goto LAB_1402cfc3d;
      }
LAB_1402cfc87:
      if (((bVar8 & 1) != 0) && (iVar5 != 2)) {
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          uVar9 = (ulonglong)(DVar6 != DVar7);
        }
        else {
          uVar9 = 1;
        }
        goto LAB_1402cfc9b;
      }
    }
  }
  else {
    lVar10 = DAT_14ca9f088;
    if (iVar5 != 0x40000002) {
      if (DAT_14c86a9f8 == 0) {
        DAT_14ca9f230 = *DAT_14ca9f040;
        lVar10 = DAT_14ca9f088;
        bVar8 = 0;
      }
      else {
        if (iVar5 != 2) {
          uVar9 = 1;
          if (iVar5 == 1) {
            DVar6 = FUN_140ad26c0();
            DVar7 = GetCurrentThreadId();
            uVar9 = (ulonglong)(DVar6 != DVar7);
            iVar5 = *piVar1;
          }
          DAT_14ca9f230 = puVar2[uVar9];
          lVar10 = DAT_14ca9f088;
          goto LAB_1402cfc36;
        }
        DAT_14ca9f230 = *DAT_14ca9f040;
        iVar5 = 2;
      }
      goto LAB_1402cfc87;
    }
    DAT_14ca9f230 = *DAT_14ca9f040;
  }
LAB_1402cfc3d:
  uVar9 = 0;
LAB_1402cfc9b:
  DAT_14ca9f234 = *(undefined4 *)(lVar10 + uVar9 * 4);
  return;
}



// FUNCTION 1402cfd4d FUN_1402cfd4d body=34 status=ok
// SIG undefined FUN_1402cfd4d(void)

void FUN_1402cfd4d(undefined4 param_1)

{
  FUN_1402cfd6f(0x35,param_1,0,0,0);
  return;
}



// FUNCTION 1402cfd6f FUN_1402cfd6f body=478 status=ok
// SIG undefined FUN_1402cfd6f(void)

void FUN_1402cfd6f(byte param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  byte bVar5;
  uint uVar6;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402cfdba;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar4 = (uint *)*puVar1;
LAB_1402cfdba:
    puVar3 = (undefined8 *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar6 = puVar4[0x12];
    if (puVar3 + 0x10 <= puVar4 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
      LOCK();
      uVar2 = *puVar4;
      *puVar4 = *puVar4 + uVar6 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar6) != 0xffffffff) break;
      puVar4 = (uint *)*puVar1;
      *puVar4 = 0xffffffff;
      *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
      puVar4[0x12] = 0;
      *puVar1 = puVar4;
      puVar3 = (undefined8 *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
      uVar6 = 0;
      if (puVar3 + 0x10 <= puVar4 + 0x4000) {
        uVar6 = 1;
        goto LAB_1402cfe36;
      }
    }
  }
  uVar6 = uVar6 + 1;
LAB_1402cfe36:
  *(undefined8 **)(puVar4 + 0x10) = puVar3 + 0x11;
  puVar4[0x12] = uVar6;
  *(int *)(puVar3 + -1) = ((int)puVar3 + -8) - (int)puVar4;
  *(undefined4 *)((longlong)puVar3 + -4) = 0x80;
  if (param_1 != 0x3a) {
    *(undefined4 *)(puVar3 + 1) =
         (&DAT_14ca11f20)[(ulonglong)(2 < param_2) * 0x3a + (ulonglong)param_1];
    *puVar3 = &PTR_LAB_14a28c900;
    *(byte *)(puVar3 + 2) = param_1;
    bVar5 = 0;
    switch(param_1) {
    case 0x26:
    case 0x34:
      bVar5 = 0x26;
      break;
    case 0x27:
    case 0x35:
      bVar5 = 0x27;
      break;
    case 0x28:
    case 0x36:
      bVar5 = 0x28;
      break;
    case 0x2a:
      break;
    case 0x2b:
switchD_1402cfea9_caseD_2b:
      bVar5 = 2;
      break;
    default:
      if (param_1 == 2) goto switchD_1402cfea9_caseD_2b;
      if (param_1 == 0) break;
    case 0x29:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
switchD_1402cfea9_caseD_29:
      bVar5 = 0x29;
      if (param_1 != 0x37) {
        bVar5 = param_1;
      }
    }
    *(byte *)((longlong)puVar3 + 0x11) = bVar5;
    puVar3[3] = param_3;
    *(int *)(puVar3 + 4) = param_2;
    puVar3[5] = param_4;
    puVar3[6] = param_5;
    *(undefined1 *)(puVar3 + 7) = 0x3a;
    *puVar3 = &PTR_FUN_14a204c90;
    *(undefined4 *)(puVar3 + 10) = 0x11;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[8] = DAT_14c9c0d50;
    puVar3[9] = DAT_14c9c0ea0;
    *(undefined4 *)(puVar3 + 0xf) = 0;
    return;
  }
  *(undefined4 *)(puVar3 + 1) = 0xffffffff;
  *puVar3 = &PTR_LAB_14a28c900;
  *(undefined1 *)(puVar3 + 2) = 0x3a;
  goto switchD_1402cfea9_caseD_29;
}



// FUNCTION 1402cff4e FUN_1402cff4e body=14 status=ok
// SIG undefined FUN_1402cff4e(void)

void FUN_1402cff4e(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1402cff5c();
    return;
  }
  return;
}



// FUNCTION 1402cff5c FUN_1402cff5c body=450 status=ok
// SIG undefined FUN_1402cff5c(void)

void FUN_1402cff5c(undefined8 *param_1,uint param_2)

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
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1402d0077:
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
LAB_1402d00b4:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402cffb2;
LAB_1402cffa7:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402cffb2:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001402cffde;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1402d0034:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402d00b4;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1402d0077;
code_r0x0001402cffde:
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
      goto LAB_1402d0034;
    }
  }
  goto LAB_1402cffa7;
}



// FUNCTION 1402d011e FUN_1402d011e body=21 status=ok
// SIG undefined FUN_1402d011e(void)

undefined8 FUN_1402d011e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1402d0136 FUN_1402d0136 body=198 status=ok
// SIG undefined FUN_1402d0136(void)

void FUN_1402d0136(undefined8 *param_1)

{
  PVOID pvVar1;
  int iVar2;
  PSRWLOCK SRWLock;
  PVOID pvVar3;
  uint uVar4;
  int iVar5;
  PSRWLOCK pRVar6;
  longlong lVar7;
  
  SRWLock = (PSRWLOCK)*param_1;
  iVar2 = *(int *)(param_1 + 6);
  AcquireSRWLockExclusive(SRWLock);
  if (*(int *)&SRWLock[4].Ptr != *(int *)((longlong)&SRWLock[9].Ptr + 4)) {
    uVar4 = FUN_14490dc6d(param_1 + 1);
    pRVar6 = SRWLock + 10;
    if (SRWLock[0xb].Ptr != (PSRWLOCK)0x0) {
      pRVar6 = SRWLock[0xb].Ptr;
    }
    iVar5 = *(int *)((longlong)&pRVar6->Ptr +
                    (ulonglong)(*(int *)&SRWLock[0xc].Ptr - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      pvVar3 = SRWLock[3].Ptr;
      do {
        lVar7 = (longlong)iVar5 * 0x98;
        if ((((*(int *)((longlong)pvVar3 + lVar7) == *(int *)(param_1 + 1)) &&
             (pvVar1 = (PVOID)((longlong)pvVar3 + lVar7),
             *(longlong *)((longlong)pvVar1 + 8) == param_1[2])) &&
            (*(longlong *)((longlong)pvVar1 + 0x10) == param_1[3])) &&
           ((*(longlong *)((longlong)pvVar1 + 0x18) == param_1[4] &&
            (*(longlong *)((longlong)pvVar1 + 0x20) == param_1[5])))) {
          if ((pvVar1 != (PVOID)0x0) &&
             (((longlong)pvVar1 + 0x28 != 0 && (*(int *)&SRWLock[0xd].Ptr == iVar2)))) {
            FUN_1402d01fc((longlong)pvVar1 + 0x28,0);
          }
          break;
        }
        iVar5 = *(int *)((longlong)pvVar3 + lVar7 + 0x90);
      } while (iVar5 != -1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001402d01f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(SRWLock);
  return;
}



// FUNCTION 1402d01fc FUN_1402d01fc body=300 status=ok
// SIG undefined FUN_1402d01fc(void)

void FUN_1402d01fc(longlong param_1,char param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (*(char *)(param_1 + 4) == '\x02') {
    iVar5 = *(int *)(param_1 + 0x58);
    if (0 < iVar5) {
      lVar1 = param_1 + 0x10;
      uVar7 = 0;
      do {
        lVar9 = *(longlong *)(param_1 + 0x50);
        if (*(longlong *)(param_1 + 0x50) == 0) {
          lVar9 = lVar1;
        }
        lVar8 = (longlong)(int)uVar7 * 0x10;
        cVar4 = FUN_1449401f0(lVar9 + lVar8);
        if (cVar4 == '\0') {
          lVar9 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar9 = lVar1;
          }
          puVar3 = *(undefined8 **)(lVar9 + 8 + lVar8);
          if (puVar3 != (undefined8 *)0x0) {
            LOCK();
            piVar2 = (int *)(puVar3 + 1);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)*puVar3)(puVar3,1);
            }
          }
          iVar5 = *(int *)(param_1 + 0x58);
          iVar6 = ~uVar7 + iVar5;
          if (iVar6 != 0) {
            if (0 < iVar6) {
              iVar6 = 1;
            }
            memmove((void *)(lVar8 + lVar9),(void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar9),
                    (longlong)iVar6 << 4);
            iVar5 = *(int *)(param_1 + 0x58);
          }
          *(int *)(param_1 + 0x58) = iVar5 + -1;
          FUN_1402d0422(lVar1);
          uVar7 = uVar7 - 1;
        }
        else if (param_2 != '\0') {
          FUN_1402d03e6(*(undefined1 *)(param_1 + 0x60),lVar9 + lVar8);
        }
        uVar7 = uVar7 + 1;
        iVar5 = *(int *)(param_1 + 0x58);
      } while ((int)uVar7 < iVar5);
    }
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 4) = 3;
      puVar3 = *(undefined8 **)(param_1 + 8);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 8) = 0;
        LOCK();
        piVar2 = (int *)(puVar3 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001402d0316. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)*puVar3)(puVar3,1);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1402d0328 FUN_1402d0328 body=190 status=ok
// SIG undefined FUN_1402d0328(void)

char FUN_1402d0328(longlong param_1,longlong param_2)

{
  PSRWLOCK SRWLock;
  byte bVar1;
  int iVar2;
  longlong lVar3;
  
  SRWLock = (PSRWLOCK)(param_1 + 8);
  AcquireSRWLockShared(SRWLock);
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar3 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar2 * 0x20) == param_2) {
          if ((lVar3 != 0) && (lVar3 != -8)) {
            bVar1 = *(byte *)(lVar3 + 0x14);
            ReleaseSRWLockShared(SRWLock);
            if ((bVar1 & 6) == 0) {
              return '\x01';
            }
            return ((bVar1 & 4) >> 2) * '\x03' + '\x02';
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  ReleaseSRWLockShared(SRWLock);
  return '\x03';
}



// FUNCTION 1402d03e6 FUN_1402d03e6 body=59 status=ok
// SIG undefined FUN_1402d03e6(void)

void FUN_1402d03e6(undefined4 param_1,uint *param_2)

{
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    if ((*param_2 & 3) == 1) {
      FUN_1402d04b2(DAT_14ca811c8);
      return;
    }
    FUN_1402d0652(DAT_14ca811d0,param_1);
    return;
  }
  return;
}



// FUNCTION 1402d0422 FUN_1402d0422 body=143 status=ok
// SIG undefined FUN_1402d0422(void)

void FUN_1402d0422(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar1 = *(uint *)(param_1 + 0x4c);
  if ((ulonglong)uVar4 < 5) {
    uVar4 = 4;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0xffffffffffffc00U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 4,0);
      uVar4 = (uint)(uVar2 >> 4);
      uVar1 = *(uint *)(param_1 + 0x4c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x4c) = uVar4;
  FUN_1407217e2(param_1,*(undefined4 *)(param_1 + 0x48));
  return;
}



// FUNCTION 1402d04b2 FUN_1402d04b2 body=245 status=ok
// SIG undefined FUN_1402d04b2(void)

void FUN_1402d04b2(longlong param_1,char param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 8));
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) != *(uint *)(param_1 + 0x54)) {
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(*param_3 >> 2) * 8);
    lVar7 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x60);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)uVar3 + (int)(uVar3 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x20) == uVar3)
        goto LAB_1402d0537;
        iVar5 = *(int *)(lVar7 + 0x18);
      } while (iVar5 != -1);
    }
  }
  lVar7 = 0;
LAB_1402d0537:
  puVar4 = (undefined8 *)(lVar7 + 8);
  if (lVar7 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  uVar6 = CONCAT71((int7)((ulonglong)lVar7 >> 8),(param_2 == '\x02') << 4) | 8;
  uVar3 = CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)((longlong)puVar4 + 0xc));
  do {
    bVar2 = (byte)uVar3;
    LOCK();
    bVar1 = *(byte *)((longlong)puVar4 + 0xc);
    if (bVar2 == bVar1) {
      *(byte *)((longlong)puVar4 + 0xc) = bVar2 | (byte)uVar6;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar1);
    }
    UNLOCK();
  } while (bVar2 != bVar1);
  if ((((byte)uVar3 & 0x17) == 1) && ((param_2 == '\x02' || ((uVar3 & 8) == 0)))) {
    FUN_1402d05a8(param_1,uVar6,uVar3 & 0xffffffff,*puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001402d0594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 8));
  return;
}



// FUNCTION 1402d05a8 FUN_1402d05a8 body=170 status=ok
// SIG undefined FUN_1402d05a8(void)

void FUN_1402d05a8(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_1415b29d6();
  if (0 < iVar2) {
    uVar3 = 1;
    if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) & 0x20) == 0) {
      uVar3 = DAT_14c760d80 ^ 1;
    }
    lVar1 = *(longlong *)(param_4 + 0x18 + (ulonglong)(uVar3 << 4));
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
      uVar4 = FUN_1415b2962(&DAT_14ca80898);
      FUN_1431e52de(lVar1,uVar4,((param_2 & 0x10) == 0) + '\x01');
    }
  }
  if ((param_2 & 0x10) == 0) {
    LOCK();
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    UNLOCK();
    if ((param_3 & 8) != 0) {
      LOCK();
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1402d0652 FUN_1402d0652 body=235 status=ok
// SIG undefined FUN_1402d0652(void)

void FUN_1402d0652(longlong param_1,char param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 8));
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) != *(uint *)(param_1 + 0x54)) {
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + (ulonglong)(*param_3 >> 2) * 8);
    lVar6 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)uVar3 + (int)(uVar3 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x20;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar5 * 0x20) == uVar3)
        goto LAB_1402d06d9;
        iVar5 = *(int *)(lVar6 + 0x18);
      } while (iVar5 != -1);
    }
  }
  lVar6 = 0;
LAB_1402d06d9:
  puVar4 = (undefined8 *)(lVar6 + 8);
  if (lVar6 == 0) {
    puVar4 = (undefined8 *)0x0;
  }
  uVar7 = CONCAT71((int7)((ulonglong)lVar6 >> 8),(param_2 == '\x02') << 4) | 8;
  uVar3 = CONCAT71((int7)(uVar3 >> 8),*(undefined1 *)((longlong)puVar4 + 0xc));
  do {
    bVar2 = (byte)uVar3;
    LOCK();
    bVar1 = *(byte *)((longlong)puVar4 + 0xc);
    if (bVar2 == bVar1) {
      *(byte *)((longlong)puVar4 + 0xc) = bVar2 | (byte)uVar7;
    }
    else {
      uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar1);
    }
    UNLOCK();
  } while (bVar2 != bVar1);
  if ((((byte)uVar3 & 0x17) == 1) && ((param_2 == '\x02' || ((uVar3 & 8) == 0)))) {
    FUN_1402d073e(param_1,uVar7,uVar3 & 0xffffffff,*puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0001402d0736. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 8));
  return;
}



// FUNCTION 1402d073e FUN_1402d073e body=170 status=ok
// SIG undefined FUN_1402d073e(void)

void FUN_1402d073e(longlong param_1,ulonglong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = FUN_1415b29d6();
  if (0 < iVar2) {
    uVar3 = 1;
    if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60) & 0x20) == 0) {
      uVar3 = DAT_14c760d80 ^ 1;
    }
    lVar1 = *(longlong *)(param_4 + 0x18 + (ulonglong)(uVar3 << 4));
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 8), lVar1 != 0)) {
      uVar4 = FUN_1415b2962(&DAT_14ca80898);
      FUN_1431e52de(lVar1,uVar4,((param_2 & 0x10) == 0) + '\x01');
    }
  }
  if ((param_2 & 0x10) == 0) {
    LOCK();
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
    UNLOCK();
  }
  else {
    LOCK();
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    UNLOCK();
    if ((param_3 & 8) != 0) {
      LOCK();
      *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + -1;
      UNLOCK();
    }
  }
  return;
}



// FUNCTION 1402d084a FUN_1402d084a body=405 status=ok
// SIG undefined FUN_1402d084a(void)

void FUN_1402d084a(undefined8 param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_1d8 [32];
  undefined **local_1b8;
  longlong *plStack_1b0;
  undefined ***local_1a8;
  undefined8 **local_1a0;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca68);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  local_1a0 = &local_1a8;
  local_1b8 = &PTR_FUN_149e37810;
  local_1a8 = &local_1b8;
  plStack_1b0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3ca68);
    if (3 < iVar3) {
      uVar4 = 0;
      if (param_2[0xd] != 0) {
        uVar4 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
      }
      puVar2 = (ulonglong *)param_2[1];
      puVar1 = (uint *)*puVar2 + 1;
      if ((uint *)puVar2[1] < puVar1) {
        local_1b8 = (undefined **)CONCAT44(local_1b8._4_4_,uVar4);
        (**(code **)(*param_2 + 0x170))(param_2,&local_1b8,4);
        uVar4 = (uint)local_1b8;
        if (1 < (uint)local_1b8) {
          FUN_14572541c(param_2);
          uVar4 = (uint)local_1b8;
        }
      }
      else {
        uVar4 = *(uint *)*puVar2;
        *puVar2 = (ulonglong)puVar1;
      }
      if (uVar4 != 0) {
        local_1b8 = (undefined **)0x0;
        plStack_1b0 = (longlong *)0x0;
        FUN_14021219d(param_2,&local_1b8);
        if (local_1b8 != (undefined **)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (((param_2[0xd] != 0) && (*(longlong *)(param_2[0xd] + 0x10) != 0)) ||
     ((*(byte *)(param_2 + 5) & 2) != 0)) {
    iVar3 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
    if (0x95 < iVar3) {
      FUN_1402ac13a(param_2,param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d09e0 FUN_1402d09e0 body=71 status=ok
// SIG undefined FUN_1402d09e0(void)

bool FUN_1402d09e0(longlong *param_1)

{
  char cVar1;
  bool bVar2;
  float extraout_XMM0_Da;
  
  cVar1 = FUN_1402d0bce();
  if ((cVar1 == '\0') || ((param_1[0x91] != 0 && (*(char *)(param_1[0x91] + 0x90) != '\0')))) {
    bVar2 = false;
  }
  else {
    (**(code **)(*param_1 + 0x140))(param_1,0);
    bVar2 = 0.0 < extraout_XMM0_Da;
  }
  return bVar2;
}



// FUNCTION 1402d0a28 FUN_1402d0a28 body=44 status=ok
// SIG undefined FUN_1402d0a28(void)

float FUN_1402d0a28(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x550);
  fVar2 = *(float *)(param_1 + 0x554);
  fVar3 = (float)FUN_1402d0a54();
  return fVar3 + (fVar1 - fVar2);
}



// FUNCTION 1402d0a54 FUN_1402d0a54 body=377 status=ok
// SIG undefined FUN_1402d0a54(void)

float FUN_1402d0a54(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  if ((longlong)*(int *)(param_1 + 0x368) < 2) {
    if (*(char *)(param_1 + 0x358) == '\x01') {
      fVar5 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
              *(float *)(param_1 + 0x348) *
              (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
              *(float *)(param_1 + 0x344);
      *(float *)(param_1 + 0x354) = fVar5;
      *(undefined1 *)(param_1 + 0x358) = 0;
    }
    else {
      fVar5 = *(float *)(param_1 + 0x354);
    }
  }
  else {
    fVar5 = 0.0;
    lVar3 = 1;
    do {
      if ((*(uint *)(param_1 + 0x370) >> ((uint)lVar3 & 0x1f) & 1) == 0) {
        fVar5 = fVar5 + *(float *)(*(longlong *)(param_1 + 0x360) + lVar3 * 4);
      }
      lVar3 = lVar3 + 1;
    } while (*(int *)(param_1 + 0x368) != lVar3);
    if (*(char *)(param_1 + 0x358) == '\x01') {
      fVar4 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
              *(float *)(param_1 + 0x348) *
              (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
              *(float *)(param_1 + 0x344);
      *(float *)(param_1 + 0x354) = fVar4;
      *(undefined1 *)(param_1 + 0x358) = 0;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x354);
    }
    fVar5 = fVar5 + fVar4 + *(float *)(param_1 + 0x398);
  }
  if ((param_2 != '\0') && ((longlong)*(int *)(param_1 + 1000) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x3e0);
    lVar2 = (longlong)*(int *)(param_1 + 1000) * 0x28;
    do {
      lVar1 = FUN_1402179b4(lVar3);
      if (*(char *)(lVar1 + 0x260) == '\0') {
        fVar5 = fVar5 + *(float *)(lVar3 + 0x20);
      }
      lVar3 = lVar3 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  return fVar5;
}



// FUNCTION 1402d0bce FUN_1402d0bce body=142 status=ok
// SIG undefined FUN_1402d0bce(void)

uint FUN_1402d0bce(longlong param_1)

{
  uint uVar1;
  undefined ***pppuVar2;
  undefined1 auStack_78 [32];
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b3f76d0;
  local_30 = &LAB_143d0a67c;
  local_58[0] = &LAB_1402d0d18;
  uVar1 = FUN_1402d0c8a(param_1 + 0x58,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar2 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar2 = &local_38;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d0c5e FUN_1402d0c5e body=12 status=ok
// SIG undefined FUN_1402d0c5e(void)

void FUN_1402d0c5e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001402d0c67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1402d0c6a FUN_1402d0c6a body=31 status=ok
// SIG undefined FUN_1402d0c6a(void)

undefined8 FUN_1402d0c6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402d0c8a FUN_1402d0c8a body=135 status=ok
// SIG undefined FUN_1402d0c8a(void)

undefined8 FUN_1402d0c8a(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  bVar1 = *(byte *)(param_1 + 0x38);
  if (bVar1 != 0) {
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(param_1 + 0x30);
      if (*(longlong *)(param_1 + 0x30) == 0) {
        lVar4 = param_1;
      }
      lVar4 = FUN_14033465a(lVar4 + lVar7);
      if (lVar4 == 0) {
        return 0;
      }
      pcVar2 = (code *)*param_2;
      plVar6 = (longlong *)param_2[2];
      if ((longlong *)param_2[2] == (longlong *)0x0) {
        plVar6 = param_2 + 4;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      cVar3 = (*pcVar2)(uVar5,lVar4);
      if (cVar3 != '\0') {
        return 1;
      }
      lVar7 = lVar7 + 0x18;
    } while ((ulonglong)bVar1 * 0x18 != lVar7);
  }
  return 0;
}



// FUNCTION 1402d0d22 FUN_1402d0d22 body=44 status=ok
// SIG undefined FUN_1402d0d22(void)

longlong FUN_1402d0d22(longlong param_1,int param_2)

{
  FUN_1402d0d4e(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402d0d4e FUN_1402d0d4e body=422 status=ok
// SIG undefined FUN_1402d0d4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_1402d0d4e(undefined8 *param_1)

{
  size_t _Size;
  uint uVar1;
  undefined8 *puVar2;
  void *_Src;
  int iVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  puVar2 = (undefined8 *)param_1[0x10];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar7 = (int *)(puVar2 + 1);
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140020148(param_1 + 0xd);
  lVar9 = param_1[0xb];
  if (lVar9 != 0) {
    piVar7 = (int *)((lVar9 + -8) - (ulonglong)*(uint *)(lVar9 + -8));
    LOCK();
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (*piVar7 == 0) {
      if (*(longlong *)(piVar7 + 0x10) - (longlong)piVar7 == 0x10000) {
        lVar9 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar9 = FUN_145bdc178();
        }
        FUN_140028df4(lVar9,piVar7);
      }
      else {
        FUN_144705e74(piVar7);
      }
    }
  }
  cVar4 = '0';
  *param_1 = &PTR_LAB_14a2f5630;
  lVar9 = param_1[1];
  if (lVar9 != 0) {
    uVar1 = *(uint *)(param_1 + 3);
    if ((longlong)(int)uVar1 != 0) {
      _Src = (void *)param_1[2];
      _Size = (longlong)(int)uVar1 * 8;
      lVar8 = 0;
      do {
        FUN_140152f5c(*(undefined8 *)((longlong)_Src + lVar8),lVar9);
        lVar8 = lVar8 + 8;
      } while (_Size - lVar8 != 0);
      LOCK();
      bVar10 = DAT_14ca8c140 == '\0';
      if (bVar10) {
        DAT_14ca8c140 = '\x01';
      }
      UNLOCK();
      if (!bVar10) {
        FUN_1447d2058(&DAT_14ca8c140);
      }
      iVar3 = DAT_14ca8c180;
      lVar9 = (longlong)DAT_14ca8c180;
      iVar5 = DAT_14ca8c180 + uVar1;
      uVar6 = DAT_14ca8c184 - DAT_14ca8c180;
      DAT_14ca8c180 = iVar5;
      if (uVar6 < uVar1) {
        FUN_1400f7990(&DAT_14ca8c178,iVar3);
      }
      memcpy((void *)(lVar9 * 8 + _DAT_14ca8c178),_Src,_Size);
      LOCK();
      bVar10 = DAT_14ca8c140 == '\x01';
      cVar4 = DAT_14ca8c140;
      if (bVar10) {
        DAT_14ca8c140 = '\0';
        cVar4 = '\x01';
      }
      UNLOCK();
      if (!bVar10) {
        cVar4 = FUN_14008cdb0(&DAT_14ca8c140);
      }
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) < 0) {
      cVar4 = FUN_145ccb7b2(param_1 + 2,0);
    }
  }
  if (param_1[2] != 0) {
    cVar4 = FUN_1400020a8();
    return cVar4;
  }
  return cVar4;
}



// FUNCTION 1402d0ef4 FUN_1402d0ef4 body=14 status=ok
// SIG undefined FUN_1402d0ef4(void)

void FUN_1402d0ef4(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1402d0f02();
    return;
  }
  return;
}



// FUNCTION 1402d0f02 FUN_1402d0f02 body=453 status=ok
// SIG undefined FUN_1402d0f02(void)

void FUN_1402d0f02(undefined8 *param_1,uint param_2)

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
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x18);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1402d1020:
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
LAB_1402d105d:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x18;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402d0f5b;
LAB_1402d0f50:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402d0f5b:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0xaa7) goto code_r0x0001402d0f87;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 6 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1402d0fdd:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402d105d;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1402d1020;
code_r0x0001402d0f87:
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
      goto LAB_1402d0fdd;
    }
  }
  goto LAB_1402d0f50;
}



// FUNCTION 1402d10c8 FUN_1402d10c8 body=2810 status=ok
// SIG undefined FUN_1402d10c8(void)

void FUN_1402d10c8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  float fVar3;
  longlong lVar4;
  int *piVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 ***pppuVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined8 ****ppppuVar26;
  undefined1 uVar27;
  uint uVar28;
  longlong *plVar29;
  undefined4 uVar30;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_140;
  longlong *local_130;
  longlong local_128;
  undefined1 local_120 [16];
  undefined1 local_110 [24];
  longlong *local_f8;
  undefined8 local_f0;
  longlong *plStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 ***local_d0;
  longlong local_c8;
  longlong lStack_c0;
  ushort local_b8;
  byte local_b0;
  undefined8 ***local_a8;
  longlong *plStack_a0;
  undefined8 ***local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar15 = (**(code **)(*param_1 + 0x20))();
  if (cVar15 != '\0') goto LAB_1402d1780;
  if (((longlong *)param_1[3] == (longlong *)0x0) ||
     (cVar15 = (**(code **)(*(longlong *)param_1[3] + 0x20))(), cVar15 == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x92) = 6;
    goto LAB_1402d1780;
  }
  if (((int)param_1[5] == 0) ||
     (((((uVar28 = *(uint *)((longlong)param_1 + 0x24), (int)uVar28 < 0 ||
         (DAT_14c9647dc <= (int)uVar28)) ||
        (plVar24 = (longlong *)
                   ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8)),
        plVar24 == (longlong *)0x0)) ||
       (((int)plVar24[2] != (int)param_1[5] || ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)))) ||
      (lVar4 = *plVar24, lVar4 == 0)))) goto LAB_1402d1780;
  *(undefined1 *)((longlong)param_1 + 0x292) = *(undefined1 *)(param_2 + 0x8b);
  if (((char)param_1[0x52] == '\x01') && (lVar25 = param_1[3], *(char *)(lVar25 + 0xb9) != '\0')) {
LAB_1402d18f2:
    *(undefined1 *)((longlong)param_1 + 0x92) = 6;
    lVar25 = FUN_148d0872c(lVar25);
    if (lVar25 != 0) {
      lVar20 = *(longlong *)(lVar4 + 0xb0);
      if (lVar20 == 0) {
        lVar20 = FUN_1448abda6(lVar4);
      }
      local_140 = 1;
      local_148 = 1;
      plVar24 = (longlong *)FUN_1405837ac(lVar20,lVar25,param_1 + 6,1);
      if (plVar24 != (longlong *)0x0) {
        lVar4 = param_1[3];
        plVar29 = (longlong *)(lVar4 + 0x200);
        plVar1 = (longlong *)(lVar4 + 0x210);
        local_a8 = (undefined8 ***)&DAT_100000000;
        local_98 = (undefined8 ***)&DAT_ffffffff;
        uStack_90 = 0;
        plStack_a0 = plVar1;
        if (*(int *)(lVar4 + 0x228) == 0) {
          iVar16 = 0;
        }
        else {
          FUN_1449c0562(&local_a8);
          iVar16 = *(int *)(lVar4 + 0x228);
        }
        uStack_d8 = CONCAT44(uStack_8c,uStack_90);
        local_e0 = (undefined8 ****)local_98;
        ppppuVar26 = local_e0;
        local_f0 = (undefined8 ****)local_a8;
        plStack_e8 = plStack_a0;
        local_e0._4_4_ = (int)((ulonglong)local_98 >> 0x20);
        iVar17 = local_e0._4_4_;
        local_f8 = plVar29;
        if ((local_e0._4_4_ != iVar16) ||
           (local_e0 = (undefined8 ****)local_98, plStack_a0 != plVar1)) {
          do {
            local_e0 = ppppuVar26;
            lVar4 = *local_f8;
            puVar23 = (undefined8 *)(lVar4 + (longlong)iVar17 * 0x48);
            local_a8 = (undefined8 ***)((ulonglong)local_a8 & 0xffffffffffffff00);
            local_80 = 0;
            FUN_1456bb102(&local_a8,plVar24);
            FUN_1447c3578(lVar4 + (longlong)iVar17 * 0x48 + 8,&local_d0,&local_a8);
            FUN_144a5ac3a(&local_a8);
            switch(local_b0) {
            case 1:
              uVar30 = FUN_144a7fca4(&local_d0);
              (**(code **)(*plVar24 + 0x9f8))(plVar24,*puVar23,uVar30);
              break;
            case 2:
              uVar30 = FUN_1405d5f74(&local_d0);
              (**(code **)(*plVar24 + 0xa00))(plVar24,*puVar23,uVar30);
              break;
            case 3:
              uVar30 = FUN_144a7ecd0(&local_d0);
              (**(code **)(*plVar24 + 0xa08))(plVar24,*puVar23,uVar30);
              break;
            case 4:
              FUN_144a7b7fe(&local_d0,local_110);
              (**(code **)(*plVar24 + 0xa10))(plVar24,*puVar23,local_110);
              break;
            case 5:
            case 6:
              break;
            case 7:
switchD_1402d1acc_caseD_7:
              uVar19 = FUN_14030a32e(&local_d0);
              (**(code **)(*plVar24 + 0xa20))(plVar24,*puVar23,uVar19);
              break;
            default:
              if (local_b0 == 0x13) goto switchD_1402d1acc_caseD_7;
              if (local_b0 == 0x18) {
                FUN_140a1ca64(&local_d0,local_120);
                (**(code **)(*plVar24 + 0xa18))(plVar24,*puVar23,local_120);
              }
            }
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_b0 * 0x120));
            if (pcVar6 != (code *)0x0) {
              ppppuVar26 = &local_d0;
              if (0x18 < local_b8) {
                ppppuVar26 = (undefined8 ****)local_d0;
              }
              (*pcVar6)(ppppuVar26);
            }
            if (0x18 < local_b8) {
              FUN_1400020a8(local_d0);
            }
            local_e0 = (undefined8 ****)CONCAT44(local_e0._4_4_,(uint)local_e0 & ~local_f0._4_4_);
            FUN_1449c0562(&local_f0);
            iVar17 = local_e0._4_4_;
            ppppuVar26 = local_e0;
          } while (local_f8 != plVar29 || (plStack_e8 != plVar1 || local_e0._4_4_ != iVar16));
        }
      }
    }
    goto LAB_1402d1780;
  }
  if ((longlong)*(int *)(lVar4 + 0xb48) != 0) {
    lVar25 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar4 + 0xb40) + lVar25) == (int)param_1[4]) {
        lVar25 = param_1[3];
        goto LAB_1402d18f2;
      }
      lVar25 = lVar25 + 4;
    } while ((longlong)*(int *)(lVar4 + 0xb48) * 4 != lVar25);
  }
  if (*(char *)((longlong)param_1 + 0xdd) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xdd) = 0;
    local_148 = 1;
    FUN_1402d325e(lVar4,(int)param_1[4],(int)param_1[0x1b],*(undefined4 *)((longlong)param_1 + 0xd4)
                 );
  }
  if (((char)param_1[0x12] != '\0') || (*(char *)((longlong)param_1 + 0x91) == '\x01')) {
    *(char *)((longlong)param_1 + 0x91) = (char)param_1[0x12];
    *(undefined1 *)(param_1 + 0x12) = 0;
    if ((*(char *)((longlong)param_1 + 0x291) == '\0') &&
       (((*(char *)((longlong)param_1 + 0x92) == '\x02' ||
         (*(char *)((longlong)param_1 + 0x92) == '\x04')) && ((char)param_1[0x5b] != '\0')))) {
      lVar25 = param_1[3];
      local_c8 = 0;
      lStack_c0 = 0;
      uVar19 = FUN_1402d1c56();
      lVar20 = FUN_14477b664(uVar19);
      lVar21 = FUN_1402d1c90();
      uVar19 = FUN_1402d1c90();
      FUN_1402d1bfa(&local_a8,uVar19,lVar25);
      pppuVar14 = local_a8;
      if ((undefined8 ****)local_a8 != (undefined8 ****)0x0) {
        lStack_c0 = 0;
      }
      local_d0 = local_a8;
      lVar22 = FUN_1402d1c56();
      if (lVar21 == 0) {
LAB_1402d14ad:
        lVar22 = lVar21;
      }
      else if (lVar22 == 0) {
        lVar22 = 0;
      }
      else if ((*(int *)(lVar22 + 0x38) <= *(int *)(lVar21 + 0x38)) &&
              (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar22 + 0x38) * 8)
               == lVar22 + 0x30)) goto LAB_1402d14ad;
      if (lVar20 != lVar22) {
        lStack_c0 = 0;
      }
      FUN_14477b664(lVar22);
      local_c8 = FUN_14477b664();
      if (((undefined8 ****)pppuVar14 != (undefined8 ****)0x0) && (local_c8 != 0)) {
        lStack_c0 = lVar25;
      }
      dVar11 = (double)param_1[10];
      dVar12 = (double)param_1[0xb];
      dVar13 = (double)param_1[0xc];
      if (*(int *)((longlong)param_1 + 0x14) == 0) {
LAB_1402d16f8:
        local_f8 = (longlong *)0x0;
      }
      else {
        uVar28 = *(uint *)(param_1 + 2);
        local_f8 = (longlong *)0x0;
        if ((-1 < (int)uVar28) && ((int)uVar28 < DAT_14c9647dc)) {
          puVar23 = (undefined8 *)
                    ((ulonglong)((uVar28 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar28 >> 0x10) * 8));
          if ((puVar23 == (undefined8 *)0x0) ||
             ((*(int *)(puVar23 + 2) != *(int *)((longlong)param_1 + 0x14) ||
              ((*(uint *)(puVar23 + 1) & 0x10200000) != 0)))) goto LAB_1402d16f8;
          local_f8 = (longlong *)*puVar23;
        }
      }
      FUN_1402d2668(&local_a8,&local_f8);
      local_f8 = plStack_a0;
      local_f0 = (undefined8 ****)local_98;
      LOCK();
      *(int *)(local_98 + 1) = *(int *)(local_98 + 1) + 1;
      UNLOCK();
      plStack_e8 = (longlong *)CONCAT44(uStack_8c,uStack_90);
      lVar25 = CONCAT44(uStack_7c,local_80);
      LOCK();
      piVar5 = (int *)(lVar25 + 8);
      *piVar5 = *piVar5 + 1;
      UNLOCK();
      uVar27 = 0;
      if (plStack_a0 != local_88) {
        do {
          plVar24 = local_f8;
          lVar20 = local_f8[2];
          dVar7 = *(double *)(lVar20 + 0x260) - dVar11;
          dVar8 = *(double *)(lVar20 + 0x268) - dVar12;
          dVar9 = *(double *)(lVar20 + 0x270) - dVar13;
          if ((float)(dVar7 * dVar7 + dVar8 * dVar8 + dVar9 * dVar9) <=
              *(float *)(lVar20 + 0x640) * *(float *)(lVar20 + 0x640)) {
            if ((longlong)*(int *)(lVar20 + 0x650) == 0) {
              uVar27 = 1;
              break;
            }
            plVar29 = *(longlong **)(lVar20 + 0x648);
            local_128 = (longlong)*(int *)(lVar20 + 0x650) * 0x18;
            do {
              lVar20 = plVar29[1];
              if (lVar20 == 0) {
                uVar19 = FUN_1415289f2();
                lVar20 = FUN_14477b664(uVar19);
                plVar29[1] = lVar20;
              }
              lVar21 = plVar29[2];
              if (lVar21 == 0) {
                if ((lVar20 != 0) && (*plVar29 != 0)) {
                  local_130 = *(longlong **)(lVar20 + 0xb8);
                  if ((local_130 == (longlong *)0x0) ||
                     (cVar15 = (**(code **)(*local_130 + 0x108))(), cVar15 == '\0')) {
                    plVar29[2] = 0;
                  }
                  else {
                    uVar19 = (**(code **)(*local_130 + 0x110))();
                    lVar21 = FUN_144aff482(uVar19,plVar29);
                    plVar29[2] = lVar21;
                    if (lVar21 != 0) goto LAB_1402d18c2;
                  }
                }
              }
              else {
LAB_1402d18c2:
                cVar15 = FUN_148d0820c(lVar21 + 0x28,&local_d0);
                if (cVar15 != '\0') {
                  uVar27 = 1;
                  break;
                }
              }
              plVar29 = plVar29 + 3;
              local_128 = local_128 + -0x18;
            } while (local_128 != 0);
          }
          local_f8 = (longlong *)FUN_1402d1d46(*plVar24);
          FUN_1402d26f2(&local_f8);
        } while (local_f8 != local_88);
      }
      LOCK();
      piVar5 = (int *)(lVar25 + 8);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_f0 + 1) = *(int *)(local_f0 + 1) + -1;
      UNLOCK();
      LOCK();
      piVar5 = (int *)(CONCAT44(uStack_7c,local_80) + 8);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_98 + 1) = *(int *)(local_98 + 1) + -1;
      UNLOCK();
      *(undefined1 *)((longlong)param_1 + 0x291) = uVar27;
    }
    FUN_1402d281e(lVar4,(int)param_1[4],param_1 + 6);
  }
  if ((char)param_1[0x24] == '\x01') {
    uVar30 = *(undefined4 *)((longlong)param_1 + 0x11c);
    iVar16 = (int)param_1[4];
    iVar17 = *(int *)(lVar4 + 0xb58);
    if (((longlong)iVar16 < 0) || (iVar17 <= iVar16)) {
      uVar28 = (iVar16 - iVar17) + 1;
      *(int *)(lVar4 + 0xb58) = iVar16 + 1;
      if ((uint)(*(int *)(lVar4 + 0xb5c) - iVar17) < uVar28) {
        FUN_14475e4ac((longlong *)(lVar4 + 0xb50));
      }
      memset((void *)((longlong)iVar17 * 4 + *(longlong *)(lVar4 + 0xb50)),0,
             (longlong)(int)uVar28 << 2);
    }
    *(undefined4 *)(*(longlong *)(lVar4 + 0xb50) + (longlong)iVar16 * 4) = uVar30;
    FUN_1402d2dd6(lVar4,iVar16);
    if ((char)param_1[0x24] == '\x01') {
      *(undefined1 *)(param_1 + 0x24) = 0;
    }
  }
  FUN_1402d2016(param_1);
  if ((((param_1[0x1e] == 0) || (lVar4 = param_1[0x1f], lVar4 == 0)) || ((DAT_14cb26569 & 1) == 0))
     || ((char)param_1[0x23] == '\0')) goto LAB_1402d1780;
  fVar3 = *(float *)(param_1[0x1e] + 0x210);
  piVar5 = *(int **)(lVar4 + 0x50);
  LOCK();
  *piVar5 = *piVar5 + 1;
  UNLOCK();
  if (DAT_14cb259f8 == 0) {
    iVar16 = 5;
LAB_1402d1262:
    LOCK();
    piVar5[2] = iVar16;
    UNLOCK();
  }
  else {
    if ((char)piVar5[1] == '\x01') {
      iVar16 = 2;
      goto LAB_1402d1262;
    }
    FUN_14003fb24(*(undefined8 *)(DAT_14cb259f8 + 0x60),lVar4);
  }
  if ((DAT_14cb26569 & 1) == 0) {
    bVar10 = false;
  }
  else {
    iVar16 = _finite((double)*(float *)(lVar4 + 0x4c));
    bVar10 = true;
    if ((iVar16 != 0) && (0.0001 < *(float *)(lVar4 + 0x4c))) {
      bVar10 = fVar3 < *(float *)(lVar4 + 0x4c) * 1.1;
    }
  }
  if ((DAT_14cb26569 & 1) != 0) {
    FUN_1400848c0(*(undefined8 *)(lVar4 + 0x50),lVar4);
  }
  plVar24 = param_1 + 0x20;
  cVar15 = FUN_144904448(plVar24);
  if (cVar15 == '\0') {
    if (bVar10) {
      FUN_140088d96(param_1 + 0x1e,0);
    }
  }
  else if ((!bVar10) && (cVar15 = FUN_144904448(plVar24), cVar15 != '\0')) {
    FUN_14072d42a(plVar24,0);
  }
  lVar4 = param_1[0x1e];
  if (lVar4 != 0) {
    lVar21 = param_1[10];
    lVar22 = param_1[0xb];
    lVar20 = param_1[0xc];
    lVar25 = lVar4 + 0x140;
    uVar28 = *(uint *)(lVar4 + 0x1d4);
    iVar16 = 0;
    *(undefined4 *)(lVar4 + 0x1d0) = 0;
    if ((int)uVar28 < 0) {
      FUN_147f80112(lVar25,0);
      iVar16 = *(int *)(lVar4 + 0x1d0);
      uVar28 = *(uint *)(lVar4 + 0x1d4);
    }
    *(undefined1 *)(lVar4 + 0x26c) = 0;
    *(uint *)(lVar4 + 0x1d0) = iVar16 + 1U;
    if (uVar28 < iVar16 + 1U) {
      FUN_140089f7a(lVar25,iVar16);
    }
    if (*(longlong *)(lVar4 + 0x1c0) != 0) {
      lVar25 = *(longlong *)(lVar4 + 0x1c0);
    }
    lVar18 = (longlong)iVar16 * 0x80;
    *(undefined8 *)(lVar25 + lVar18) = 0;
    ((undefined8 *)(lVar25 + lVar18))[1] = 0;
    puVar2 = (undefined4 *)(lVar25 + 0x10 + lVar18);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x3ff00000;
    plVar24 = (longlong *)(lVar25 + 0x20 + lVar18);
    *plVar24 = lVar21;
    plVar24[1] = lVar22;
    plVar24 = (longlong *)(lVar25 + 0x30 + lVar18);
    *plVar24 = lVar20;
    plVar24[1] = 0;
    puVar2 = (undefined4 *)(lVar25 + 0x40 + lVar18);
    *puVar2 = 0;
    puVar2[1] = 0x3ff00000;
    puVar2[2] = 0;
    puVar2[3] = 0x3ff00000;
    puVar23 = (undefined8 *)(lVar25 + 0x50 + lVar18);
    *puVar23 = 0x3ff0000000000000;
    puVar23[1] = 0;
    *(undefined8 *)(lVar25 + 0x60 + lVar18) = 0x3f800000;
    *(undefined2 *)(lVar25 + 0x68 + lVar18) = 0;
    *(undefined8 *)(lVar25 + 0x6c + lVar18) = 0;
    FUN_1447906c0(lVar4,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_168);
  }
LAB_1402d1780:
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402d1bfa FUN_1402d1bfa body=92 status=ok
// SIG undefined FUN_1402d1bfa(void)

undefined8 * FUN_1402d1bfa(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if (((param_2 != 0) && (plVar1 = *(longlong **)(param_2 + 0xb8), plVar1 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    FUN_1427b4392(uVar3,param_1,param_3);
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1402d1c56 FUN_1402d1c56 body=57 status=ok
// SIG undefined FUN_1402d1c56(void)

void FUN_1402d1c56(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9440 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9440 = FUN_140002ddd(FUN_1465d39b4,uVar1,L"OakCritterDef");
  }
  return;
}



// FUNCTION 1402d1c90 FUN_1402d1c90 body=57 status=ok
// SIG undefined FUN_1402d1c90(void)

void FUN_1402d1c90(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba94d0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba94d0 = FUN_140002ddd(FUN_1465d3c94,uVar1,L"OakCritterDef_Mesh");
  }
  return;
}



// FUNCTION 1402d1cca FUN_1402d1cca body=124 status=ok
// SIG undefined FUN_1402d1cca(void)

bool FUN_1402d1cca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1402d24da(param_1 + 0x28);
  if ((((lVar1 != 0) || (*(longlong *)(param_1 + 0x30) == 0)) &&
      ((lVar1 = FUN_1402d1dc0(param_1 + 0x1d8), lVar1 != 0 || (*(longlong *)(param_1 + 0x1e0) == 0))
      )) && ((lVar1 = FUN_1402d2278(param_1 + 0x250), lVar1 != 0 ||
             (*(longlong *)(param_1 + 600) == 0)))) {
    lVar1 = FUN_1402d20ea(param_1 + 0x278);
    return *(longlong *)(param_1 + 0x280) == 0 || lVar1 != 0;
  }
  return false;
}



// FUNCTION 1402d1d46 FUN_1402d1d46 body=122 status=ok
// SIG undefined FUN_1402d1d46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1402d1d46(longlong *param_1)

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
LAB_1402d1d94:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_1402d1d94;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 1402d1dc0 FUN_1402d1dc0 body=375 status=ok
// SIG undefined FUN_1402d1dc0(void)

longlong FUN_1402d1dc0(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1402d1f38();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1402d1f38 FUN_1402d1f38 body=221 status=ok
// SIG undefined FUN_1402d1f38(void)

longlong FUN_1402d1f38(void)

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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac60e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147888cc1;
    local_40 = &LAB_14638c092;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Engine",L"FXSystemAsset",&DAT_14cac60e0,&DAT_147888cc0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac60e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d2016 FUN_1402d2016 body=212 status=ok
// SIG undefined FUN_1402d2016(void)

void FUN_1402d2016(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_1 + 0x18);
      if (lVar3 == 0) goto switchD_1402d2080_default;
      switch(*(undefined1 *)(lVar2 + lVar5)) {
      case 1:
        lVar3 = lVar3 + 0xe0;
        break;
      case 2:
        lVar3 = lVar3 + 0x110;
        uVar4 = 2;
        goto LAB_1402d20a8;
      case 3:
        lVar3 = lVar3 + 0x140;
        break;
      case 4:
        lVar3 = lVar3 + 0x170;
        uVar4 = 4;
LAB_1402d20a8:
        FUN_1402d346e(param_1,lVar3,uVar4);
        goto switchD_1402d2080_default;
      case 5:
        lVar3 = lVar3 + 0x1a0;
        break;
      default:
        goto switchD_1402d2080_default;
      }
      FUN_1402d32c2(param_1,lVar3);
switchD_1402d2080_default:
      lVar5 = lVar5 + 1;
    } while (iVar1 != lVar5);
  }
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) < 0) {
    FUN_148d0d282(param_1 + 0xe0);
    return;
  }
  return;
}



// FUNCTION 1402d20ea FUN_1402d20ea body=398 status=ok
// SIG undefined FUN_1402d20ea(void)

longlong FUN_1402d20ea(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_1402d2740();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1402d2278 FUN_1402d2278 body=380 status=ok
// SIG undefined FUN_1402d2278(void)

longlong FUN_1402d2278(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1402d23f4();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1402d23f4 FUN_1402d23f4 body=228 status=ok
// SIG undefined FUN_1402d23f4(void)

longlong FUN_1402d23f4(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba93a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14595d230;
    local_38 = &LAB_148c06019;
    local_40 = FUN_1418c989d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCritterAnimTextureData",&DAT_14cba93a8,&DAT_148c06018);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba93a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d24da FUN_1402d24da body=398 status=ok
// SIG undefined FUN_1402d24da(void)

longlong FUN_1402d24da(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_1402d3178();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 1402d2668 FUN_1402d2668 body=137 status=ok
// SIG undefined FUN_1402d2668(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1402d2668(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  LOCK();
  _DAT_14cbc65c8 = _DAT_14cbc65c8 + 1;
  UNLOCK();
  uVar1 = FUN_1402d1d46(DAT_14cbc65c0);
  param_1[1] = uVar1;
  param_1[2] = &DAT_14cbc65c0;
  LOCK();
  _DAT_14cbc65c8 = _DAT_14cbc65c8 + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_1402d26f2(param_1 + 1);
  LOCK();
  UNLOCK();
  LOCK();
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = &DAT_14cbc65c0;
  LOCK();
  _DAT_14cbc65c8 = _DAT_14cbc65c8 + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_1402d26f2(param_1 + 4);
  LOCK();
  _DAT_14cbc65c8 = _DAT_14cbc65c8 + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 1402d26f2 FUN_1402d26f2 body=77 status=ok
// SIG undefined FUN_1402d26f2(void)

void FUN_1402d26f2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_1402d1d46(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 1402d2740 FUN_1402d2740 body=221 status=ok
// SIG undefined FUN_1402d2740(void)

longlong FUN_1402d2740(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  code *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cac4818 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1401bee58;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14788281b;
    local_40 = &LAB_14638646b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialInterface",&DAT_14cac4818,FUN_146386444);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4818;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d281e FUN_1402d281e body=208 status=ok
// SIG undefined FUN_1402d281e(void)

void FUN_1402d281e(longlong *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar2 = (int)param_1[0x119];
  uVar1 = param_2;
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1[0x11a] + (longlong)(int)param_2 * 4);
  }
  if ((-1 < (int)uVar1) && ((int)uVar1 < (int)param_1[0xe5])) {
    FUN_1448ac920(local_88,(ulonglong)uVar1 * 0x80 + param_1[0xe4]);
    FUN_1402d28f0(param_1,param_2,local_88,0);
    iVar2 = (int)param_1[0x119];
  }
  if (iVar2 != 0) {
    param_2 = *(uint *)(param_1[0x11a] + (longlong)(int)param_2 * 4);
  }
  local_90 = 0;
  local_98 = 0;
  (**(code **)(*param_1 + 0xb30))(param_1,param_2,param_3,1);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d28f0 FUN_1402d28f0 body=821 status=ok
// SIG undefined FUN_1402d28f0(void)

void FUN_1402d28f0(longlong param_1,int param_2,double *param_3,char param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  byte bVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  double local_f8 [4];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar11 = param_2;
  if (*(int *)(param_1 + 0x8c8) != 0) {
    iVar11 = *(int *)(*(longlong *)(param_1 + 0x8d0) + (longlong)param_2 * 4);
  }
  if (param_4 == '\0') {
    pdVar12 = local_f8;
    for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
      *pdVar12 = *param_3;
      param_3 = param_3 + 1;
      pdVar12 = pdVar12 + 1;
    }
  }
  else {
    FUN_1449437a2(param_3,local_f8,param_1 + 0x240);
  }
  dVar15 = local_f8[1] + local_f8[1];
  dVar13 = local_f8[2] + local_f8[2];
  dVar5 = local_f8[0] * (local_f8[0] + local_f8[0]);
  dVar14 = (local_f8[0] + local_f8[0]) * local_f8[3];
  dVar6 = (dVar15 * local_f8[0] + dVar13 * local_f8[3]) * local_b8;
  lVar8 = *(longlong *)(param_1 + 0x730);
  lVar9 = (longlong)iVar11 * 0x80;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = (1.0 - (local_f8[2] * dVar13 + local_f8[1] * dVar15)) * local_b8;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *(undefined1 (*) [16])(lVar8 + lVar9) = auVar4;
  pdVar12 = (double *)(lVar8 + 0x10 + lVar9);
  *pdVar12 = (local_f8[0] * dVar13 - dVar15 * local_f8[3]) * local_b8;
  pdVar12[1] = 0.0;
  pdVar12 = (double *)(lVar8 + 0x20 + lVar9);
  *pdVar12 = (dVar15 * local_f8[0] - dVar13 * local_f8[3]) * dStack_b0;
  pdVar12[1] = (1.0 - (local_f8[2] * dVar13 + dVar5)) * dStack_b0;
  pdVar12 = (double *)(lVar8 + 0x30 + lVar9);
  *pdVar12 = (dVar13 * local_f8[1] + dVar14) * dStack_b0;
  pdVar12[1] = 0.0;
  pdVar12 = (double *)(lVar8 + 0x40 + lVar9);
  *pdVar12 = (dVar15 * local_f8[3] + local_f8[0] * dVar13) * local_a8;
  pdVar12[1] = (dVar13 * local_f8[1] - dVar14) * local_a8;
  pdVar12 = (double *)(lVar8 + 0x50 + lVar9);
  *pdVar12 = (1.0 - (dVar5 + local_f8[1] * dVar15)) * local_a8;
  pdVar12[1] = 0.0;
  puVar1 = (undefined4 *)(lVar8 + 0x60 + lVar9);
  *puVar1 = local_d8;
  puVar1[1] = uStack_d4;
  puVar1[2] = uStack_d0;
  puVar1[3] = uStack_cc;
  puVar2 = (undefined8 *)(lVar8 + 0x70 + lVar9);
  *puVar2 = local_c8;
  puVar2[1] = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x95d) == '\x01') {
    iVar11 = *(int *)(param_1 + 0x8c8);
    if (iVar11 == 0) {
      iVar11 = *(int *)(param_1 + 0x8e0);
    }
    else {
      param_2 = *(int *)(*(longlong *)(param_1 + 0x8d0) + (longlong)param_2 * 4);
    }
    if (iVar11 <= param_2) {
      iVar11 = param_2;
    }
    iVar10 = iVar11 + 0xe;
    if (-1 < iVar11 + 7) {
      iVar10 = iVar11 + 7;
    }
    if (*(int *)(param_1 + 0x8f0) < iVar10 >> 3) {
      FUN_1402d2c96(param_1 + 0x8e8,iVar10 >> 3,1);
    }
    *(int *)(param_1 + 0x918) = iVar11;
    iVar11 = *(int *)(param_1 + 0x920);
    if (param_2 <= *(int *)(param_1 + 0x920)) {
      iVar11 = param_2;
    }
    *(int *)(param_1 + 0x920) = iVar11;
    iVar11 = *(int *)(param_1 + 0x924);
    if (*(int *)(param_1 + 0x924) < param_2) {
      iVar11 = param_2;
    }
    *(int *)(param_1 + 0x924) = iVar11;
    iVar11 = param_2 + 7;
    if (-1 < param_2) {
      iVar11 = param_2;
    }
    bVar7 = ((char)param_2 - ((byte)iVar11 & 0xf8)) * '\x04';
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x8e8) + (longlong)(iVar11 >> 3) * 4);
    if ((uVar3 >> (bVar7 & 0x1f) & 3) == 0) {
      *(int *)(param_1 + 0x92c) = *(int *)(param_1 + 0x92c) + 1;
    }
    *(uint *)(*(longlong *)(param_1 + 0x8e8) + (longlong)(iVar11 >> 3) * 4) =
         uVar3 | 2 << (bVar7 & 0x1f);
  }
  else {
    *(byte *)(param_1 + 0x95e) = *(byte *)(param_1 + 0x95e) | 0x10;
  }
  FUN_1402d2c26(param_1 + 0x8c0);
  if ((local_90 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d2c26 FUN_1402d2c26 body=112 status=ok
// SIG undefined FUN_1402d2c26(void)

void FUN_1402d2c26(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  if (((((*(byte *)(param_1 + 0x9e) & 0x20) == 0) && (*(int *)(param_1 + 0xb4) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0xb0), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0xb4))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      FUN_1402d2d12();
      *(byte *)(param_1 + 0x9e) = *(byte *)(param_1 + 0x9e) | 0x20;
    }
  }
  return;
}



// FUNCTION 1402d2c96 FUN_1402d2c96 body=122 status=ok
// SIG undefined FUN_1402d2c96(void)

void FUN_1402d2c96(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1447808da(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_144780a3c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1402d2d12 FUN_1402d2d12 body=195 status=ok
// SIG undefined FUN_1402d2d12(void)

void FUN_1402d2d12(longlong *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (((~*(byte *)((longlong)param_1 + 0x9c) & 3) != 0) ||
     (*(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 8,
     (*(byte *)((longlong)param_1 + 0x9e) & 1) != 0)) {
    return;
  }
  lVar3 = param_1[0x16];
  if ((lVar3 == 0) && (lVar3 = FUN_1448abda6(), lVar3 == 0)) {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) != 0) {
      return;
    }
    FUN_14342d574(param_1);
    return;
  }
  if (*(code **)(*param_1 + 0x3d8) == (code *)&LAB_1479b7ec0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x3d8))(param_1);
  }
  FUN_144821660(lVar3,param_1,uVar2);
  return;
}



// FUNCTION 1402d2dd6 FUN_1402d2dd6 body=433 status=ok
// SIG undefined FUN_1402d2dd6(void)

void FUN_1402d2dd6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  float *_Dst;
  int *piVar4;
  int *piVar5;
  undefined1 auStack_98 [32];
  float *local_78;
  undefined8 uStack_70;
  uint *local_60;
  undefined4 local_58;
  float *local_50;
  undefined4 local_48;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = param_2;
  if ((int)param_1[0x119] != 0) {
    uVar3 = *(uint *)(param_1[0x11a] + (longlong)(int)param_2 * 4);
  }
  if ((((uVar3 != 0xffffffff) && (-1 < (int)uVar3)) && ((int)uVar3 < (int)param_1[0x167])) &&
     (lVar1 = param_1[0x165], lVar1 != 0)) {
    piVar5 = (int *)((ulonglong)uVar3 * 0x10 + param_1[0x166]);
    iVar2 = *piVar5;
    if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(lVar1 + 0x40))) {
      piVar4 = (int *)((longlong)iVar2 * 0xc + *(longlong *)(lVar1 + 0x38));
      local_78 = (float *)0x0;
      uStack_70 = 0;
      iVar2 = (**(code **)(*param_1 + 0xbf0))();
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar2);
      if (iVar2 == 0) {
        _Dst = (float *)0x0;
      }
      else {
        FUN_14475e4ac(&local_78);
        _Dst = local_78;
      }
      memset(_Dst,0,(longlong)iVar2 << 2);
      *local_78 = (float)*piVar4;
      local_78[1] = (float)piVar4[2];
      local_78[2] = (float)piVar5[2];
      local_78[3] = (float)(int)(char)piVar5[3];
      local_78[4] = (float)piVar5[1];
      local_78[5] = *(float *)(param_1[0x165] + 0x34);
      (**(code **)(*param_1 + 0xbf8))(param_1,param_2,local_78);
      local_60 = &local_3c;
      local_50 = local_78;
      local_48 = (undefined4)uStack_70;
      local_58 = 1;
      local_3c = param_2;
      FUN_1402d2f88(param_1);
      if (local_78 != (float *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d2f88 FUN_1402d2f88 body=173 status=ok
// SIG undefined FUN_1402d2f88(void)

void FUN_1402d2f88(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (0 < (int)param_2[1]) {
    lVar2 = 0;
    do {
      iVar1 = *(int *)(*param_2 + lVar2 * 4);
      local_38 = (int)param_1[0xf4];
      local_40 = (longlong)((int)lVar2 * local_38) * 4 + *param_3;
      if ((int)param_1[0x119] != 0) {
        iVar1 = *(int *)(param_1[0x11a] + (longlong)iVar1 * 4);
      }
      (**(code **)(*param_1 + 0xb20))(param_1,iVar1,&local_40,0);
      lVar2 = lVar2 + 1;
    } while (lVar2 < (int)param_2[1]);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d3036 FUN_1402d3036 body=322 status=ok
// SIG undefined FUN_1402d3036(void)

undefined8 FUN_1402d3036(longlong param_1,uint param_2,undefined8 *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  
  if ((((int)param_2 < 0) || (uVar5 = (ulonglong)param_2, *(int *)(param_1 + 0x728) <= (int)param_2)
      ) || (iVar2 = *(int *)(param_3 + 1), iVar2 == 0)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x7a0);
  if (iVar1 <= iVar2) {
    iVar2 = iVar1;
  }
  memcpy((void *)((longlong)(int)(iVar1 * param_2) * 4 + *(longlong *)(param_1 + 0x7a8)),
         (void *)*param_3,(longlong)iVar2 << 2);
  if (*(char *)(param_1 + 0x95d) == '\x01') {
    uVar6 = *(uint *)(param_1 + 0x8c8);
    if (uVar6 == 0) {
      uVar6 = *(uint *)(param_1 + 0x8e0);
    }
    if ((int)uVar6 <= (int)param_2) {
      uVar6 = param_2;
    }
    uVar4 = uVar6 + 7 >> 3;
    if (*(int *)(param_1 + 0x8f0) < (int)uVar4) {
      FUN_1402d2c96(param_1 + 0x8e8,uVar4,1);
    }
    *(uint *)(param_1 + 0x918) = uVar6;
    uVar6 = *(uint *)(param_1 + 0x920);
    if ((int)param_2 <= (int)*(uint *)(param_1 + 0x920)) {
      uVar6 = param_2;
    }
    *(uint *)(param_1 + 0x920) = uVar6;
    uVar6 = *(uint *)(param_1 + 0x924);
    if ((int)*(uint *)(param_1 + 0x924) < (int)param_2) {
      uVar6 = param_2;
    }
    *(uint *)(param_1 + 0x924) = uVar6;
    bVar3 = (char)param_2 * '\x04' & 0x1c;
    uVar5 = (ulonglong)(param_2 >> 3);
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x8e8) + uVar5 * 4);
    if ((uVar6 >> bVar3 & 5) == 0) {
      *(int *)(param_1 + 0x930) = *(int *)(param_1 + 0x930) + 1;
    }
    *(uint *)(*(longlong *)(param_1 + 0x8e8) + uVar5 * 4) = uVar6 | 4 << bVar3;
  }
  else {
    if (*(char *)(param_1 + 0x95d) == '\x02') goto LAB_1402d3149;
    *(byte *)(param_1 + 0x95e) = *(byte *)(param_1 + 0x95e) | 0x10;
  }
  FUN_1402d2c26(param_1 + 0x8c0);
LAB_1402d3149:
  if (param_4 != '\0') {
    FUN_1448215fa(param_1);
  }
  return CONCAT71((int7)(uVar5 >> 8),1);
}



// FUNCTION 1402d3178 FUN_1402d3178 body=228 status=ok
// SIG undefined FUN_1402d3178(void)

longlong FUN_1402d3178(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1bb68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147e31db9;
    local_40 = FUN_14641d6b4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavAreaUserData",&DAT_14cb1bb68,&DAT_147e31db8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1bb68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d325e FUN_1402d325e body=99 status=ok
// SIG undefined FUN_1402d325e(void)

void FUN_1402d325e(longlong *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  float *_Dst;
  int *piVar6;
  int *piVar7;
  undefined1 auStack_98 [32];
  float *pfStack_78;
  undefined8 uStack_70;
  uint *puStack_60;
  undefined4 uStack_58;
  float *pfStack_50;
  undefined4 uStack_48;
  uint uStack_3c;
  ulonglong uStack_38;
  
  uVar5 = param_2;
  if ((int)param_1[0x119] != 0) {
    uVar5 = *(uint *)(param_1[0x11a] + (longlong)(int)param_2 * 4);
  }
  if ((-1 < (int)uVar5) && ((int)uVar5 < (int)param_1[0x167])) {
    lVar2 = param_1[0x164];
    lVar1 = param_1[0x166];
    lVar4 = (ulonglong)uVar5 * 0x10;
    *(undefined4 *)(lVar1 + lVar4) = param_3;
    *(int *)(lVar1 + 4 + lVar4) = (int)lVar2;
    *(undefined4 *)(lVar1 + 8 + lVar4) = param_4;
    *(undefined1 *)(lVar1 + 0xc + lVar4) = param_5;
    FUN_1402d2dd6();
    return;
  }
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar5 = param_2;
  if ((int)param_1[0x119] != 0) {
    uVar5 = *(uint *)(param_1[0x11a] + (longlong)(int)param_2 * 4);
  }
  if ((((uVar5 != 0xffffffff) && (-1 < (int)uVar5)) && ((int)uVar5 < (int)param_1[0x167])) &&
     (lVar1 = param_1[0x165], lVar1 != 0)) {
    piVar7 = (int *)((ulonglong)uVar5 * 0x10 + param_1[0x166]);
    iVar3 = *piVar7;
    if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar1 + 0x40))) {
      piVar6 = (int *)((longlong)iVar3 * 0xc + *(longlong *)(lVar1 + 0x38));
      pfStack_78 = (float *)0x0;
      uStack_70 = 0;
      iVar3 = (**(code **)(*param_1 + 0xbf0))();
      uStack_70 = CONCAT44(uStack_70._4_4_,iVar3);
      if (iVar3 == 0) {
        _Dst = (float *)0x0;
      }
      else {
        FUN_14475e4ac(&pfStack_78);
        _Dst = pfStack_78;
      }
      memset(_Dst,0,(longlong)iVar3 << 2);
      *pfStack_78 = (float)*piVar6;
      pfStack_78[1] = (float)piVar6[2];
      pfStack_78[2] = (float)piVar7[2];
      pfStack_78[3] = (float)(int)(char)piVar7[3];
      pfStack_78[4] = (float)piVar7[1];
      pfStack_78[5] = *(float *)(param_1[0x165] + 0x34);
      (**(code **)(*param_1 + 0xbf8))(param_1,param_2,pfStack_78);
      puStack_60 = &uStack_3c;
      pfStack_50 = pfStack_78;
      uStack_48 = (undefined4)uStack_70;
      uStack_58 = 1;
      uStack_3c = param_2;
      FUN_1402d2f88(param_1);
      if (pfStack_78 != (float *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((uStack_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d32c2 FUN_1402d32c2 body=427 status=ok
// SIG undefined FUN_1402d32c2(void)

void FUN_1402d32c2(longlong param_1,char *param_2)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c0 [24];
  undefined8 local_a8 [12];
  undefined8 local_48;
  undefined2 local_40;
  undefined8 local_3c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar3 = FUN_144904448(param_1 + 0x100);
  if (cVar3 != '\0') {
    FUN_14072d42a(param_1 + 0x100,0);
  }
  FUN_140b3e76a(param_1 + 0xf0);
  *(undefined1 *)(param_1 + 0x118) = 0;
  lVar5 = *(longlong *)(param_2 + 0x18);
  if (lVar5 == 0) {
    uVar4 = FUN_140067708();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x18) = lVar5;
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_2 + 0x10) != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        param_2[0x20] = '\0';
        param_2[0x21] = '\0';
        param_2[0x22] = '\0';
        param_2[0x23] = '\0';
        param_2[0x24] = '\0';
        param_2[0x25] = '\0';
        param_2[0x26] = '\0';
        param_2[0x27] = '\0';
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,param_2 + 0x10);
        *(longlong *)(param_2 + 0x20) = lVar5;
        if (lVar5 != 0) goto LAB_1402d3333;
      }
    }
    if ((*param_2 != '\x01') || (*(longlong *)(param_2 + 4) == 0)) goto LAB_1402d33c1;
  }
LAB_1402d3333:
  puVar6 = (undefined8 *)(param_1 + 0x30);
  puVar7 = local_a8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  local_48 = 0x3f800000;
  local_40 = 0;
  local_3c = 0;
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1402d3408:
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x14) ||
          ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_1402d3408;
      uVar4 = *puVar6;
    }
  }
  local_d8 = 0;
  uStack_d0 = 0;
  FUN_140cb5d65(local_c0,uVar4,param_2,local_a8);
LAB_1402d33c1:
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402d346e FUN_1402d346e body=740 status=ok
// SIG undefined FUN_1402d346e(void)

void FUN_1402d346e(longlong param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  uint uVar2;
  void *_Src;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [40];
  longlong local_90;
  void *local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  int local_70;
  void *local_68;
  int local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(char *)(param_1 + 0x118) == param_3))
  goto LAB_1402d3685;
  if (*(char *)(param_1 + 0x118) != '\0') {
    cVar3 = FUN_144904448(param_1 + 0x100);
    if (cVar3 != '\0') {
      FUN_14072d42a(param_1 + 0x100,0);
    }
    FUN_140b3e76a(param_1 + 0xf0);
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  local_58 = 0;
  uStack_50 = 0;
  lVar4 = FUN_140206ee8(param_2);
  if (lVar4 == 0) goto LAB_1402d3685;
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  lVar5 = FUN_1402d2278(*(longlong *)(param_1 + 0x18) + 0x250);
  if (lVar5 == 0) {
    FUN_140056680(&local_78,&DAT_149e01fe8);
  }
  else {
    local_68 = *(void **)(lVar5 + 0x18);
    FUN_1400021e4(&local_68,&local_78);
  }
  plVar8 = local_78;
  if (local_70 == 0) {
    plVar8 = (longlong *)&DAT_149dfb77a;
  }
  FUN_140002266(&local_68,L"Critter: %s - Id: %d",plVar8,uVar1);
  if (local_78 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  _Src = local_68;
  local_88 = (void *)0x0;
  local_80 = local_60;
  if ((longlong)local_60 == 0) {
    local_7c = 0;
  }
  else {
    FUN_1446dd670(&local_88,local_60,0);
    memcpy(local_88,_Src,(longlong)local_60 * 2);
  }
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1402d36ae:
    uVar6 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x10);
    uVar6 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x14) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1402d36ae;
      uVar6 = *puVar7;
    }
  }
  FUN_14084feb6(&local_78,uVar6,&local_88);
  if (local_78 != (longlong *)0x0) {
    FUN_140d27362(param_1 + 0xf0,&local_78);
    local_90 = lVar4;
    FUN_140942716(&local_90);
    FUN_1407ec87c(param_1 + 0xf8,&local_90);
    if ((local_90 != 0) && ((DAT_14cb26569 & 1) != 0)) {
      FUN_1400848c0(*(undefined8 *)(local_90 + 0x50));
    }
    *(char *)(param_1 + 0x118) = param_3;
    if (((local_78 != (longlong *)0x0) &&
        (*(int *)(local_78 + 0x21) = (int)local_78[0x21] + -1, (int)local_78[0x26] < 1)) &&
       (FUN_1400847bc(local_78 + 0x17,0), (int)local_78[0x21] == 0)) {
      FUN_140087e46(local_78);
      if (*local_78 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_1402d3676;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_78);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_78);
      }
    }
  }
LAB_1402d3676:
  if (local_68 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1402d3685:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402d3754 FUN_1402d3754 body=99 status=ok
// SIG undefined FUN_1402d3754(void)

void FUN_1402d3754(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001402d37b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001402d3796. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1402d37b8 FUN_1402d37b8 body=130 status=ok
// SIG undefined FUN_1402d37b8(void)

void FUN_1402d37b8(longlong param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar4 = param_1;
  }
  _Dst = (void *)(lVar4 + (ulonglong)param_2 * 0x18);
  FUN_1402d383a(_Dst,1);
  iVar1 = *(int *)(param_1 + 0xc08);
  iVar2 = ~param_2 + iVar1;
  if (iVar2 != 0) {
    iVar3 = 1;
    if (iVar2 < 1) {
      iVar3 = iVar2;
    }
    memmove(_Dst,(void *)(lVar4 + (longlong)(iVar1 - iVar3) * 0x18),(longlong)iVar3 * 0x18);
    iVar1 = *(int *)(param_1 + 0xc08);
  }
  *(int *)(param_1 + 0xc08) = iVar1 + -1;
  return;
}



// FUNCTION 1402d383a FUN_1402d383a body=56 status=ok
// SIG undefined FUN_1402d383a(void)

void FUN_1402d383a(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 0x10);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1402d3872 FUN_1402d3872 body=287 status=ok
// SIG undefined FUN_1402d3872(void)

ulonglong FUN_1402d3872(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0xc08);
  lVar11 = (longlong)iVar3;
  *(uint *)(param_1 + 0xc08) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xc0c) < iVar3 + 1U) {
    FUN_1456f6506(param_1,iVar3);
  }
  lVar9 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar9 = param_1;
  }
  *(undefined4 *)(lVar9 + lVar11 * 0x18) = *param_2;
  *(undefined8 *)(lVar9 + 8 + lVar11 * 0x18) = *(undefined8 *)(param_2 + 2);
  lVar4 = *(longlong *)(param_2 + 4);
  *(longlong *)(lVar9 + 0x10 + lVar11 * 0x18) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  uVar8 = (ulonglong)(*(int *)(param_1 + 0xc08) - 1);
  lVar11 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar11 = param_1;
  }
  if (1 < *(int *)(param_1 + 0xc08)) {
    do {
      uVar12 = (int)uVar8 - 1;
      uVar10 = (ulonglong)(uVar12 >> 1);
      if (*(uint *)(lVar11 + uVar10 * 0x18) <= *(uint *)(lVar11 + uVar8 * 0x18)) break;
      puVar1 = (undefined8 *)(lVar11 + uVar10 * 0x18);
      puVar2 = (undefined8 *)(lVar11 + uVar8 * 0x18);
      local_28 = puVar2[2];
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      puVar2[2] = puVar1[2];
      uVar7 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar1[2] = local_28;
      local_38._0_4_ = (undefined4)uVar5;
      local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar6;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      *(undefined4 *)puVar1 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar1 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_30._4_4_;
      uVar8 = uVar10;
      local_38 = uVar5;
      uStack_30 = uVar6;
    } while (1 < uVar12);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1402d3992 FUN_1402d3992 body=264 status=ok
// SIG undefined FUN_1402d3992(void)

void FUN_1402d3992(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 0xc08);
  lVar9 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar9 = param_1;
  }
  if (iVar3 != 0) {
    iVar7 = (iVar3 - (iVar3 + -2 >> 0x1f)) + -2 >> 1;
    iVar8 = iVar7;
joined_r0x0001402d39da:
    do {
      iVar10 = iVar7 * 2 + 1;
      if (iVar10 < iVar3) {
        iVar11 = iVar7 * 2 + 2;
        if ((iVar11 < iVar3) &&
           (*(uint *)(lVar9 + (longlong)iVar11 * 0x18) <= *(uint *)(lVar9 + (longlong)iVar10 * 0x18)
           )) {
          iVar10 = iVar11;
        }
        if (*(uint *)(lVar9 + (longlong)iVar10 * 0x18) < *(uint *)(lVar9 + (longlong)iVar7 * 0x18))
        {
          puVar1 = (undefined8 *)(lVar9 + (longlong)iVar7 * 0x18);
          puVar2 = (undefined8 *)(lVar9 + (longlong)iVar10 * 0x18);
          local_18 = puVar1[2];
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1[2] = puVar2[2];
          uVar6 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          puVar2[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          iVar7 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x0001402d39da;
        }
      }
      bVar12 = iVar8 != 0;
      iVar7 = iVar8 + -1;
      iVar8 = iVar7;
    } while (bVar12);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402d3a9c FUN_1402d3a9c body=166 status=ok
// SIG undefined FUN_1402d3a9c(void)

void FUN_1402d3a9c(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  if (DAT_14c761384 != 0) {
    cVar1 = FUN_1447e0190();
    if ((cVar1 != '\0') &&
       (iVar3 = *(int *)(param_1 + 0x3c0) + 1,
       lVar2 = (longlong)
               (int)(iVar3 - ((*(int *)(param_1 + 0x3c0) - (iVar3 >> 0x1f)) + 1U & 0xfffffffe)) *
               0x60, 0 < *(int *)(param_1 + 0x358 + lVar2))) {
      param_1 = param_1 + lVar2;
      lVar4 = param_1 + 0x330;
      (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,lVar4,1);
      iVar3 = *(int *)(param_1 + 0x35c);
      lVar2 = *(longlong *)(param_1 + 0x350);
      if (*(longlong *)(param_1 + 0x350) == 0) {
        lVar2 = lVar4;
      }
      FUN_144717c65(lVar2,*(undefined4 *)(param_1 + 0x358));
      *(undefined4 *)(param_1 + 0x358) = 0;
      if ((iVar3 < 0) && (*(int *)(param_1 + 0x35c) != 0)) {
        FUN_14473dbc4(lVar4,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1402d3b42 FUN_1402d3b42 body=14 status=ok
// SIG undefined FUN_1402d3b42(void)

void FUN_1402d3b42(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1402d3b50();
    return;
  }
  return;
}



// FUNCTION 1402d3b50 FUN_1402d3b50 body=455 status=ok
// SIG undefined FUN_1402d3b50(void)

void FUN_1402d3b50(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  size_t _Size;
  
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(param_2,2);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1402d3c6e:
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
LAB_1402d3cab:
    *param_1 = _Dst;
    return;
  }
  uVar3 = param_2 * 2;
  _Size = (size_t)uVar3;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402d3ba7;
LAB_1402d3b9b:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402d3ba7:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x7fd3) goto code_r0x0001402d3bd4;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(size_t *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x5c;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1402d3c2c:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(uint *)((longlong)_Dst + -4) = uVar3;
  if (_Src == (void *)0x0) goto LAB_1402d3cab;
  uVar7 = *(uint *)((longlong)_Src + -4);
  if (uVar7 != 0) {
    if (uVar7 < uVar3) {
      _Size = (size_t)uVar7;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1402d3c6e;
code_r0x0001402d3bd4:
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
      goto LAB_1402d3c2c;
    }
  }
  goto LAB_1402d3b9b;
}



// FUNCTION 1402d3d18 FUN_1402d3d18 body=325 status=ok
// SIG undefined FUN_1402d3d18(void)

void FUN_1402d3d18(longlong *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_2 < param_3) {
    lVar8 = (longlong)param_2;
    do {
      uVar5 = (uint)lVar8;
      uVar6 = uVar5 + 0xff;
      if (-1 < (int)uVar5) {
        uVar6 = uVar5;
      }
      lVar2 = *(longlong *)(*param_1 + (longlong)((int)uVar6 >> 8) * 8);
      lVar7 = (ulonglong)(uVar5 - (uVar6 & 0xffffff00)) * 0x160;
      if (1.1754944e-38 < *(float *)(lVar2 + 0x134 + lVar7)) {
        FUN_14010a58c(lVar2 + lVar7);
        plVar3 = *(longlong **)(param_1[3] + lVar8 * 8);
        if ((plVar3 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar3 + 0xc))) {
          lVar4 = *(longlong *)(*param_1 + (longlong)((int)uVar6 >> 8) * 8);
          lVar2 = lVar4 + 0x110 + lVar7;
          FUN_1402d3e5e(*plVar3,(int)plVar3[1],lVar2,lVar4 + lVar7 + 0xc0);
          uVar1 = *(undefined4 *)(lVar2 + -0xe8);
          lVar4 = plVar3[1];
          lVar7 = *(longlong *)(*plVar3 + 0x278);
          *(undefined8 *)(lVar7 + (longlong)(int)lVar4 * 0xc) = *(undefined8 *)(lVar2 + -0xf0);
          *(undefined4 *)(lVar7 + 8 + (longlong)(int)lVar4 * 0xc) = uVar1;
          uVar1 = *(undefined4 *)(lVar2 + -0xd8);
          lVar4 = plVar3[1];
          lVar7 = *(longlong *)(*plVar3 + 0x290);
          *(undefined8 *)(lVar7 + (longlong)(int)lVar4 * 0xc) = *(undefined8 *)(lVar2 + -0xe0);
          *(undefined4 *)(lVar7 + 8 + (longlong)(int)lVar4 * 0xc) = uVar1;
          *(undefined4 *)(*(longlong *)(*plVar3 + 0x590) + (longlong)(int)plVar3[1] * 4) =
               0xffffffff;
        }
      }
      lVar8 = lVar8 + 1;
    } while (param_3 != (int)lVar8);
  }
  return;
}



// FUNCTION 1402d3e5e FUN_1402d3e5e body=611 status=ok
// SIG undefined FUN_1402d3e5e(void)

void FUN_1402d3e5e(longlong param_1,int param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar3;
  double dVar5;
  double dVar7;
  
  lVar10 = (longlong)param_2;
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x3f8) + lVar10 * 0x20);
  dVar15 = *pdVar1;
  dVar16 = pdVar1[1];
  pdVar1 = (double *)(*(longlong *)(param_1 + 0x3f8) + 0x10 + lVar10 * 0x20);
  dVar12 = *pdVar1 * -1.0;
  dVar14 = pdVar1[1] * 1.0;
  dVar2 = param_4[3];
  dVar3 = param_4[3];
  dVar4 = *param_4;
  dVar5 = *param_4;
  dVar6 = param_4[1];
  dVar7 = param_4[1];
  dVar8 = param_4[2];
  dVar13 = param_4[2];
  lVar9 = *(longlong *)(param_1 + 0x548);
  lVar11 = lVar10 * 0x10;
  *(float *)(lVar9 + lVar11) =
       (float)((dVar12 * dVar6 + (dVar4 * dVar14 * 1.0 - dVar2 * dVar15)) - dVar16 * dVar8 * -1.0);
  *(float *)(lVar9 + 4 + lVar11) =
       (float)((dVar14 * dVar7 + (dVar5 * dVar12 * -1.0 - dVar3 * dVar16)) - dVar15 * dVar13 * 1.0);
  *(float *)(lVar9 + 8 + lVar11) =
       (float)(dVar14 * dVar8 * 1.0 + dVar15 * dVar6 + (dVar12 * dVar2 - dVar4 * dVar16 * 1.0));
  *(float *)(lVar9 + 0xc + lVar11) =
       (float)(dVar12 * dVar13 * -1.0 + dVar16 * dVar7 + (dVar14 * dVar3 - dVar5 * dVar15 * -1.0));
  lVar9 = *(longlong *)(param_1 + 0x548);
  dVar15 = (double)*(float *)(lVar9 + 0xc + lVar11);
  dVar12 = (double)*(float *)(lVar9 + 8 + lVar11);
  dVar13 = (double)*(float *)(lVar9 + 4 + lVar11);
  dVar16 = (double)*(float *)(lVar9 + lVar11);
  lVar10 = lVar10 * 0x18;
  lVar9 = *(longlong *)(param_1 + 0x3e0);
  lVar11 = *(longlong *)(param_1 + 0x530);
  dVar3 = *(double *)(lVar9 + lVar10);
  dVar2 = *(double *)(lVar9 + 8 + lVar10);
  dVar4 = *(double *)(lVar9 + 0x10 + lVar10);
  dVar14 = dVar16 * dVar2 - dVar3 * dVar13;
  dVar14 = dVar14 + dVar14;
  dVar8 = dVar12 * dVar3 - dVar4 * dVar16;
  dVar8 = dVar8 + dVar8;
  dVar7 = dVar13 * dVar4 - dVar2 * dVar12;
  dVar7 = dVar7 + dVar7;
  dVar5 = param_3[2];
  dVar6 = param_3[1];
  *(double *)(lVar11 + lVar10) =
       *param_3 - ((dVar13 * dVar14 - dVar8 * dVar12) + dVar15 * dVar7 + dVar3);
  *(double *)(lVar11 + 8 + lVar10) =
       dVar6 - ((dVar12 * dVar7 - dVar14 * dVar16) + dVar8 * dVar15 + dVar2);
  *(double *)(lVar11 + 0x10 + lVar10) =
       dVar5 - ((dVar16 * dVar8 - dVar7 * dVar13) + dVar14 * dVar15 + dVar4);
  return;
}



// FUNCTION 1402d40c2 FUN_1402d40c2 body=42 status=ok
// SIG undefined FUN_1402d40c2(void)

undefined1 FUN_1402d40c2(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1402d40ec(param_2,param_3);
  FUN_1402d40ec(uVar1,param_3 + 8);
  return 1;
}



// FUNCTION 1402d40ec FUN_1402d40ec body=84 status=ok
// SIG undefined FUN_1402d40ec(void)

void FUN_1402d40ec(longlong *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)param_1[1];
  if ((undefined1 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    (**(code **)(*param_1 + 0x170))(param_1,param_2,1);
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 1;
  }
  FUN_1402d4140(param_1,param_2 + 4);
  return;
}



// FUNCTION 1402d4140 FUN_1402d4140 body=82 status=ok
// SIG undefined FUN_1402d4140(void)

longlong * FUN_1402d4140(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1402d4192 FUN_1402d4192 body=45 status=ok
// SIG undefined FUN_1402d4192(void)

longlong FUN_1402d4192(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x40;
  FUN_1402d41c0(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402d41c0 FUN_1402d41c0 body=160 status=ok
// SIG undefined FUN_1402d41c0(void)

void FUN_1402d41c0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  *param_1 = &PTR_FUN_14a9d9370;
  param_1[8] = &PTR_FUN_14a9d93a0;
  lVar4 = param_1[9];
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  FUN_1406624c0(param_1);
  return;
}



// FUNCTION 1402d4266 FUN_1402d4266 body=57 status=ok
// SIG undefined FUN_1402d4266(void)

void FUN_1402d4266(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60090 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60090 = FUN_140002ddd(FUN_1464ead62,uVar1,L"GbxLevelSequenceActorDef");
  }
  return;
}



// FUNCTION 1402d42a0 FUN_1402d42a0 body=944 status=ok
// SIG undefined FUN_1402d42a0(void)

undefined4 FUN_1402d42a0(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_1b8 [32];
  undefined8 local_198 [4];
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined2 local_160;
  undefined1 local_15e;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b4;
  undefined4 local_ac;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_198[0] = 0;
  local_198[1] = DAT_14c8464e0;
  local_198[2] = DAT_14c8464e8;
  local_198[3] = DAT_14c8464f0;
  local_178 = (undefined4)DAT_14c8464f8;
  uStack_174 = DAT_14c8464f8._4_4_;
  uStack_170 = (undefined4)DAT_14c846500;
  uStack_16c = DAT_14c846500._4_4_;
  local_168 = DAT_14c846508;
  local_160 = 1;
  local_15e = 0x80;
  local_158 = DAT_14c8464e0;
  uStack_150 = DAT_14c8464e8;
  local_148 = DAT_14c8464f0;
  local_140 = 0;
  local_110 = 0;
  local_108 = 0;
  local_13c = 0;
  local_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_104 = 0x80;
  uStack_100 = 0xffffffff;
  uStack_fc = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_b4 = 0xffffffff00000080;
  local_ac = 0;
  local_a0 = 0;
  local_98 = 0;
  auStack_80._4_8_ = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  auStack_80._0_3_ = 0;
  local_70 = DAT_14c8464e0;
  uStack_68 = DAT_14c8464e8;
  local_60 = DAT_14c8464f0;
  local_48 = DAT_14c846508;
  local_58 = (undefined4)DAT_14c8464f8;
  uStack_54 = DAT_14c8464f8._4_4_;
  uStack_50 = (undefined4)DAT_14c846500;
  uStack_4c = DAT_14c846500._4_4_;
  local_40 = 0;
  uVar2 = (**(code **)*param_1)((undefined4)DAT_14c8464f8,local_198);
  if ((char)uVar2 != '\0') {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_140178088(param_2,iVar1);
    }
    lVar4 = *param_2;
    lVar5 = (longlong)iVar1 * 0x160;
    puVar8 = (undefined8 *)(lVar4 + lVar5);
    puVar6 = local_198;
    puVar7 = puVar8;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    *(undefined1 *)(lVar4 + 0x60 + lVar5) = local_138;
    *(undefined8 *)(lVar4 + 0x88 + lVar5) = 0;
    *(undefined4 *)(lVar4 + 0x90 + lVar5) = 0;
    puVar6 = (undefined8 *)(lVar4 + 0x68 + lVar5);
    *puVar6 = 0;
    puVar6[1] = 0;
    *(undefined8 *)(lVar4 + 0x94 + lVar5) = 0xffffffff00000080;
    *(undefined4 *)(lVar4 + 0x9c + lVar5) = 0;
    *(undefined8 *)(lVar4 + 0xa8 + lVar5) = 0;
    *(undefined4 *)(lVar4 + 0xb0 + lVar5) = 0;
    if (puVar8 != local_198) {
      puVar8[0xd] = local_130;
      local_130 = 0;
      *(undefined4 *)(puVar8 + 0xe) = (undefined4)uStack_128;
      *(undefined4 *)((longlong)puVar8 + 0x74) = uStack_128._4_4_;
      uStack_128 = 0;
      if (local_110 == 0) {
        *(undefined4 *)(puVar8 + 0xf) = local_120;
        *(undefined4 *)((longlong)puVar8 + 0x7c) = uStack_11c;
        *(undefined4 *)(puVar8 + 0x10) = uStack_118;
        *(undefined4 *)((longlong)puVar8 + 0x84) = uStack_114;
      }
      if (puVar8[0x11] != 0) {
        FUN_1400020a8();
      }
      puVar8[0x11] = local_110;
      local_110 = 0;
      *(undefined4 *)(puVar8 + 0x12) = local_108;
      *(undefined4 *)((longlong)puVar8 + 0x94) = uStack_104;
      local_108 = 0;
      uStack_104 = 0;
      *(undefined4 *)(puVar8 + 0x13) = uStack_100;
      *(undefined4 *)((longlong)puVar8 + 0x9c) = uStack_fc;
      uStack_100 = 0xffffffff;
      uStack_fc = 0;
    }
    if (local_f0 == 0) {
      *(undefined4 *)(puVar8 + 0x14) = local_f8;
    }
    if (puVar8[0x15] != 0) {
      FUN_1400020a8();
    }
    puVar8[0x15] = local_f0;
    local_f0 = 0;
    *(undefined4 *)(puVar8 + 0x16) = local_e8;
    local_e8 = 0;
    FUN_1402d4652(puVar8 + 0x17,&local_e0);
    puVar8[0x21] = 0;
    puVar8[0x21] = local_90;
    local_90 = 0;
    *(undefined4 *)(puVar8 + 0x22) = uStack_88;
    *(undefined4 *)((longlong)puVar8 + 0x114) = uStack_84;
    uStack_88 = 0;
    uStack_84 = 0;
    puVar6 = (undefined8 *)auStack_80;
    puVar8 = puVar8 + 0x23;
    for (lVar4 = 9; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  FUN_1448212c8(local_198);
  if ((local_38 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1402d4652 FUN_1402d4652 body=125 status=ok
// SIG undefined FUN_1402d4652(void)

undefined8 * FUN_1402d4652(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1402d46d0();
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



// FUNCTION 1402d46d0 FUN_1402d46d0 body=439 status=ok
// SIG undefined FUN_1402d46d0(void)

longlong * FUN_1402d46d0(longlong *param_1,longlong *param_2)

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
        if (*(longlong *)(*local_78 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
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



// FUNCTION 1402d4888 thunk_FUN_1402d488d body=5 status=ok
// SIG undefined thunk_FUN_1402d488d(void)

byte thunk_FUN_1402d488d(uint param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong *puVar13;
  byte bVar14;
  undefined1 auStack_bc8 [32];
  longlong lStack_ba8;
  undefined8 uStack_ba0;
  undefined8 *puStack_b98;
  undefined4 *puStack_b90;
  uint uStack_b88;
  undefined8 auStack_b78 [2];
  undefined8 uStack_b68;
  undefined8 uStack_b60;
  undefined8 uStack_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 *puStack_b40;
  ulonglong uStack_b38;
  undefined4 uStack_b30;
  undefined1 auStack_b2c [4];
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  undefined8 uStack_af8;
  undefined8 uStack_af0;
  undefined8 uStack_ae8;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong lStack_78;
  int iStack_70;
  ulonglong uStack_60;
  
  uStack_60 = DAT_14c707940 ^ (ulonglong)auStack_bc8;
  uVar9 = (int)param_4[1] + param_1;
  lStack_ba8 = param_2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar9);
  }
  if (*(int *)((longlong)param_4 + 0xc) < (int)uVar9) {
    FUN_1417bb680(param_4,uVar9);
  }
  if ((int)uVar9 < DAT_14c761380) {
    if ((int)param_1 < 1) {
      bVar14 = 0;
    }
    else {
      bVar14 = 0;
      lVar8 = 0;
      do {
        uStack_af8 = 0;
        uStack_af0 = 0;
        uStack_b08 = 0;
        uStack_b00 = 0;
        uStack_b18 = 0;
        uStack_b10 = 0;
        uStack_b28 = 0;
        uStack_b20 = 0;
        uStack_ae8 = 0;
        lVar10 = *(longlong *)(lStack_ba8 + 8 + lVar8);
        lVar7 = *(longlong *)(lStack_ba8 + lVar8);
        puVar12 = (undefined8 *)(lVar10 + 0x48 + (ulonglong)((*(byte *)(lVar10 + 8) & 3) == 0) * 8);
        auStack_b78[0] = *puVar12;
        auStack_b78[1] = puVar12[1];
        cVar3 = FUN_144b2633e(param_3,auStack_b78,0);
        uStack_ae8 = CONCAT44(uStack_ae8._4_4_,(uint)(cVar3 == '\x02'));
        if (lVar10 != 0 && lVar7 != 0) {
          FUN_144a57817(lVar10,lVar7);
        }
        bVar14 = bVar14 | cVar3 == '\x02';
        FUN_14342660b(param_4,&uStack_b28);
        lVar8 = lVar8 + 0x38;
      } while ((ulonglong)param_1 * 0x38 - lVar8 != 0);
    }
  }
  else {
    uStack_128 = 0;
    uStack_120 = 0x4000000000;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0x40;
    uStack_100 = 0xffffffff;
    uStack_fc = 0;
    lStack_78 = 0;
    iStack_70 = 0;
    if (uVar9 != 0) {
      FUN_144ae1884(&uStack_b28,uVar9);
      uVar1 = (ulonglong)(((uVar9 >> 1) - 1) + (uint)(uVar9 >> 1 == 0)) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
      if ((uint)lVar8 < 5) {
        iVar4 = 0x20;
      }
      if (uVar9 < 4) {
        iVar4 = 0x20;
      }
      if (iStack_70 < iVar4) {
        iStack_70 = iVar4;
        FUN_1449a5c52();
      }
    }
    if (0 < (int)param_4[1]) {
      lVar8 = 0x20;
      lVar10 = 0;
      do {
        lVar7 = *param_4;
        lVar10 = lVar10 + 1;
        uStack_b30 = (undefined4)lVar10;
        auStack_b78[0] = *(undefined8 *)(lVar7 + 0x18 + lVar8);
        iVar4 = *(int *)(lVar7 + 4 + lVar8);
        if ((iVar4 == 0) || (uVar9 = *(uint *)(lVar7 + lVar8), (int)uVar9 < 0)) {
LAB_1402d4b3f:
          auStack_b78[1] = 0;
        }
        else {
          auStack_b78[1] = 0;
          if ((int)uVar9 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 2) != iVar4)) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_1402d4b3f;
            auStack_b78[1] = *puVar12;
          }
        }
        uStack_b68 = CONCAT44(uStack_b68._4_4_,*(undefined4 *)(lVar7 + 8 + lVar8));
        puStack_b90 = &uStack_b30;
        puStack_b98 = auStack_b78;
        FUN_1479affe4(&uStack_b28,auStack_b2c);
        lVar8 = lVar8 + 0x48;
      } while (lVar10 < (int)param_4[1]);
    }
    if ((int)param_1 < 1) {
      bVar14 = 0;
    }
    else {
      bVar14 = 0;
      lVar8 = 0;
      uStack_ba0 = param_3;
      do {
        uStack_b48 = 0;
        puStack_b40 = (undefined8 *)0x0;
        uStack_b58 = 0;
        uStack_b50 = 0;
        uStack_b68 = 0;
        uStack_b60 = 0;
        auStack_b78[0] = 0;
        auStack_b78[1] = 0;
        uStack_b38 = 0;
        lVar10 = *(longlong *)(lStack_ba8 + 8 + lVar8);
        lVar7 = *(longlong *)(lStack_ba8 + lVar8);
        puVar12 = (undefined8 *)(lVar10 + 0x48 + (ulonglong)((*(byte *)(lVar10 + 8) & 3) == 0) * 8);
        puStack_b98 = (undefined8 *)*puVar12;
        puStack_b90 = (undefined4 *)puVar12[1];
        cVar3 = FUN_144b2633e(param_3,&puStack_b98,0);
        uStack_b38 = CONCAT44(uStack_b38._4_4_,(uint)(cVar3 == '\x02'));
        if (lVar7 == 0 || lVar10 == 0) {
          puStack_b98 = (undefined8 *)0x0;
LAB_1402d4c47:
          puStack_b90 = (undefined4 *)0x0;
        }
        else {
          FUN_144a57817(lVar10,lVar7,auStack_b78);
          puStack_b98 = puStack_b40;
          if ((((uStack_b58._4_4_ == 0) || ((int)(uint)uStack_b58 < 0)) ||
              ((DAT_14c9647dc <= (int)(uint)uStack_b58 ||
               ((puVar13 = (ulonglong *)
                           ((ulonglong)(((uint)uStack_b58 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)uStack_b58 >> 0x10) * 8))
                , puVar13 == (ulonglong *)0x0 || ((int)puVar13[2] != uStack_b58._4_4_)))))) ||
             ((puVar13[1] & 0x10200000) != 0)) goto LAB_1402d4c47;
          puStack_b90 = (undefined4 *)*puVar13;
        }
        uStack_b88 = (uint)uStack_b50;
        uVar9 = ((uint)((ulonglong)puStack_b98 >> 0x14) & 0xffff ^
                (uint)((ulonglong)puStack_b98 >> 4)) * -0x7a143595;
        uVar6 = ((uint)((ulonglong)puStack_b90 >> 0x14) & 0xffff ^
                (uint)((ulonglong)puStack_b90 >> 4)) * -0x7a143595;
        uVar9 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb ^ (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        puVar5 = (uint *)FUN_1449a590c(&uStack_b28,uVar9 ^ (uint)uStack_b50 ^ uVar9 >> 0x10);
        lVar10 = (longlong)(int)*puVar5;
        if (lVar10 == 0) {
          iVar4 = (int)param_4[1];
          lVar10 = (longlong)iVar4;
          uVar9 = iVar4 + 1;
          *(uint *)(param_4 + 1) = uVar9;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar9) {
            FUN_1414fa4c8(param_4,iVar4);
          }
          lVar7 = *param_4;
          *(undefined8 *)(lVar7 + lVar10 * 0x48) = auStack_b78[0];
          puVar12 = (undefined8 *)(lVar7 + 8 + lVar10 * 0x48);
          *puVar12 = auStack_b78[1];
          puVar12[1] = uStack_b68;
          *(undefined4 *)(lVar7 + 0x18 + lVar10 * 0x48) = (undefined4)uStack_b60;
          *(undefined1 *)(lVar7 + 0x1c + lVar10 * 0x48) = uStack_b60._4_1_;
          puVar2 = (undefined4 *)(lVar7 + 0x20 + lVar10 * 0x48);
          *puVar2 = (uint)uStack_b58;
          puVar2[1] = uStack_b58._4_4_;
          puVar2[2] = (uint)uStack_b50;
          puVar2[3] = uStack_b50._4_4_;
          puVar12 = (undefined8 *)(lVar7 + 0x30 + lVar10 * 0x48);
          *puVar12 = uStack_b48;
          puVar12[1] = puStack_b40;
          *(undefined1 *)(lVar7 + 0x40 + lVar10 * 0x48) = (undefined1)uStack_b38;
          *puVar5 = uVar9;
          param_3 = uStack_ba0;
        }
        else if (((*(byte *)(*param_4 + -8 + lVar10 * 0x48) & 1) == 0) && ((uStack_b38 & 1) != 0)) {
          puVar12 = auStack_b78;
          puVar11 = (undefined8 *)(*param_4 + lVar10 * 0x48 + -0x48);
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar11 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar11 = puVar11 + 1;
          }
        }
        bVar14 = bVar14 | cVar3 == '\x02';
        lVar8 = lVar8 + 0x38;
      } while ((ulonglong)param_1 * 0x38 != lVar8);
    }
    iStack_70 = 0;
    if (lStack_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1401caadc(&uStack_b28);
  }
  if ((uStack_60 ^ (ulonglong)auStack_bc8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar14;
}



// FUNCTION 1402d488d FUN_1402d488d body=1378 status=ok
// SIG undefined FUN_1402d488d(void)

byte FUN_1402d488d(uint param_1,longlong param_2,undefined8 param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong *puVar13;
  byte bVar14;
  undefined1 auStack_bc8 [32];
  longlong local_ba8;
  undefined8 local_ba0;
  undefined8 *local_b98;
  undefined4 *puStack_b90;
  uint local_b88;
  undefined8 local_b78 [2];
  undefined8 local_b68;
  undefined8 uStack_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 local_b48;
  undefined8 *puStack_b40;
  ulonglong local_b38;
  undefined4 local_b30;
  undefined1 local_b2c [4];
  undefined8 local_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 local_b08;
  undefined8 uStack_b00;
  undefined8 local_af8;
  undefined8 uStack_af0;
  undefined8 local_ae8;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_bc8;
  uVar9 = (int)param_4[1] + param_1;
  local_ba8 = param_2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar9);
  }
  if (*(int *)((longlong)param_4 + 0xc) < (int)uVar9) {
    FUN_1417bb680(param_4,uVar9);
  }
  if ((int)uVar9 < DAT_14c761380) {
    if ((int)param_1 < 1) {
      bVar14 = 0;
    }
    else {
      bVar14 = 0;
      lVar8 = 0;
      do {
        local_af8 = 0;
        uStack_af0 = 0;
        local_b08 = 0;
        uStack_b00 = 0;
        local_b18 = 0;
        uStack_b10 = 0;
        local_b28 = 0;
        uStack_b20 = 0;
        local_ae8 = 0;
        lVar10 = *(longlong *)(local_ba8 + 8 + lVar8);
        lVar7 = *(longlong *)(local_ba8 + lVar8);
        puVar12 = (undefined8 *)(lVar10 + 0x48 + (ulonglong)((*(byte *)(lVar10 + 8) & 3) == 0) * 8);
        local_b78[0] = *puVar12;
        local_b78[1] = puVar12[1];
        cVar3 = FUN_144b2633e(param_3,local_b78,0);
        local_ae8 = CONCAT44(local_ae8._4_4_,(uint)(cVar3 == '\x02'));
        if (lVar10 != 0 && lVar7 != 0) {
          FUN_144a57817(lVar10,lVar7);
        }
        bVar14 = bVar14 | cVar3 == '\x02';
        FUN_14342660b(param_4,&local_b28);
        lVar8 = lVar8 + 0x38;
      } while ((ulonglong)param_1 * 0x38 - lVar8 != 0);
    }
  }
  else {
    local_128 = 0;
    local_120 = 0x4000000000;
    local_110 = 0;
    local_108 = 0;
    uStack_104 = 0x40;
    uStack_100 = 0xffffffff;
    uStack_fc = 0;
    local_78 = 0;
    local_70 = 0;
    if (uVar9 != 0) {
      FUN_144ae1884(&local_b28,uVar9);
      uVar1 = (ulonglong)(((uVar9 >> 1) - 1) + (uint)(uVar9 >> 1 == 0)) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar8 & 0x1f);
      if ((uint)lVar8 < 5) {
        iVar4 = 0x20;
      }
      if (uVar9 < 4) {
        iVar4 = 0x20;
      }
      if (local_70 < iVar4) {
        local_70 = iVar4;
        FUN_1449a5c52();
      }
    }
    if (0 < (int)param_4[1]) {
      lVar8 = 0x20;
      lVar10 = 0;
      do {
        lVar7 = *param_4;
        lVar10 = lVar10 + 1;
        local_b30 = (undefined4)lVar10;
        local_b78[0] = *(undefined8 *)(lVar7 + 0x18 + lVar8);
        iVar4 = *(int *)(lVar7 + 4 + lVar8);
        if ((iVar4 == 0) || (uVar9 = *(uint *)(lVar7 + lVar8), (int)uVar9 < 0)) {
LAB_1402d4b3f:
          local_b78[1] = 0;
        }
        else {
          local_b78[1] = 0;
          if ((int)uVar9 < DAT_14c9647dc) {
            puVar12 = (undefined8 *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if (((puVar12 == (undefined8 *)0x0) || (*(int *)(puVar12 + 2) != iVar4)) ||
               ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_1402d4b3f;
            local_b78[1] = *puVar12;
          }
        }
        local_b68 = CONCAT44(local_b68._4_4_,*(undefined4 *)(lVar7 + 8 + lVar8));
        puStack_b90 = &local_b30;
        local_b98 = local_b78;
        FUN_1479affe4(&local_b28,local_b2c);
        lVar8 = lVar8 + 0x48;
      } while (lVar10 < (int)param_4[1]);
    }
    if ((int)param_1 < 1) {
      bVar14 = 0;
    }
    else {
      bVar14 = 0;
      lVar8 = 0;
      local_ba0 = param_3;
      do {
        local_b48 = 0;
        puStack_b40 = (undefined8 *)0x0;
        local_b58 = 0;
        uStack_b50 = 0;
        local_b68 = 0;
        uStack_b60 = 0;
        local_b78[0] = 0;
        local_b78[1] = 0;
        local_b38 = 0;
        lVar10 = *(longlong *)(local_ba8 + 8 + lVar8);
        lVar7 = *(longlong *)(local_ba8 + lVar8);
        puVar12 = (undefined8 *)(lVar10 + 0x48 + (ulonglong)((*(byte *)(lVar10 + 8) & 3) == 0) * 8);
        local_b98 = (undefined8 *)*puVar12;
        puStack_b90 = (undefined4 *)puVar12[1];
        cVar3 = FUN_144b2633e(param_3,&local_b98,0);
        local_b38 = CONCAT44(local_b38._4_4_,(uint)(cVar3 == '\x02'));
        if (lVar7 == 0 || lVar10 == 0) {
          local_b98 = (undefined8 *)0x0;
LAB_1402d4c47:
          puStack_b90 = (undefined4 *)0x0;
        }
        else {
          FUN_144a57817(lVar10,lVar7,local_b78);
          local_b98 = puStack_b40;
          if ((((local_b58._4_4_ == 0) || ((int)(uint)local_b58 < 0)) ||
              ((DAT_14c9647dc <= (int)(uint)local_b58 ||
               ((puVar13 = (ulonglong *)
                           ((ulonglong)(((uint)local_b58 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_b58 >> 0x10) * 8)),
                puVar13 == (ulonglong *)0x0 || ((int)puVar13[2] != local_b58._4_4_)))))) ||
             ((puVar13[1] & 0x10200000) != 0)) goto LAB_1402d4c47;
          puStack_b90 = (undefined4 *)*puVar13;
        }
        local_b88 = (uint)uStack_b50;
        uVar9 = ((uint)((ulonglong)local_b98 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_b98 >> 4))
                * -0x7a143595;
        uVar6 = ((uint)((ulonglong)puStack_b90 >> 0x14) & 0xffff ^
                (uint)((ulonglong)puStack_b90 >> 4)) * -0x7a143595;
        uVar9 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb ^ (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        puVar5 = (uint *)FUN_1449a590c(&local_b28,uVar9 ^ (uint)uStack_b50 ^ uVar9 >> 0x10);
        lVar10 = (longlong)(int)*puVar5;
        if (lVar10 == 0) {
          iVar4 = (int)param_4[1];
          lVar10 = (longlong)iVar4;
          uVar9 = iVar4 + 1;
          *(uint *)(param_4 + 1) = uVar9;
          if (*(uint *)((longlong)param_4 + 0xc) < uVar9) {
            FUN_1414fa4c8(param_4,iVar4);
          }
          lVar7 = *param_4;
          *(undefined8 *)(lVar7 + lVar10 * 0x48) = local_b78[0];
          puVar12 = (undefined8 *)(lVar7 + 8 + lVar10 * 0x48);
          *puVar12 = local_b78[1];
          puVar12[1] = local_b68;
          *(undefined4 *)(lVar7 + 0x18 + lVar10 * 0x48) = (undefined4)uStack_b60;
          *(undefined1 *)(lVar7 + 0x1c + lVar10 * 0x48) = uStack_b60._4_1_;
          puVar2 = (undefined4 *)(lVar7 + 0x20 + lVar10 * 0x48);
          *puVar2 = (uint)local_b58;
          puVar2[1] = local_b58._4_4_;
          puVar2[2] = (uint)uStack_b50;
          puVar2[3] = uStack_b50._4_4_;
          puVar12 = (undefined8 *)(lVar7 + 0x30 + lVar10 * 0x48);
          *puVar12 = local_b48;
          puVar12[1] = puStack_b40;
          *(undefined1 *)(lVar7 + 0x40 + lVar10 * 0x48) = (undefined1)local_b38;
          *puVar5 = uVar9;
          param_3 = local_ba0;
        }
        else if (((*(byte *)(*param_4 + -8 + lVar10 * 0x48) & 1) == 0) && ((local_b38 & 1) != 0)) {
          puVar12 = local_b78;
          puVar11 = (undefined8 *)(*param_4 + lVar10 * 0x48 + -0x48);
          for (lVar7 = 9; lVar7 != 0; lVar7 = lVar7 + -1) {
            *puVar11 = *puVar12;
            puVar12 = puVar12 + 1;
            puVar11 = puVar11 + 1;
          }
        }
        bVar14 = bVar14 | cVar3 == '\x02';
        lVar8 = lVar8 + 0x38;
      } while ((ulonglong)param_1 * 0x38 != lVar8);
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_1401caadc(&local_b28);
  }
  if ((local_60 ^ (ulonglong)auStack_bc8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar14;
}



// FUNCTION 1402d4df2 FUN_1402d4df2 body=69 status=ok
// SIG undefined FUN_1402d4df2(void)

void FUN_1402d4df2(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1402d4fc6(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_144942318(*(undefined8 *)(param_1 + 8),param_2);
    return;
  }
  FUN_1449e7158(*(undefined8 *)(param_1 + 8),param_2,param_3);
  return;
}



// FUNCTION 1402d4e38 FUN_1402d4e38 body=169 status=ok
// SIG undefined FUN_1402d4e38(void)

undefined8 FUN_1402d4e38(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_1402d50dc(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 1402d4ee2 FUN_1402d4ee2 body=91 status=ok
// SIG undefined FUN_1402d4ee2(void)

void FUN_1402d4ee2(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1402d4f3e(param_1,param_2,1);
  return;
}



// FUNCTION 1402d4f3e FUN_1402d4f3e body=136 status=ok
// SIG undefined FUN_1402d4f3e(void)

void FUN_1402d4f3e(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1402d4fc6 FUN_1402d4fc6 body=278 status=ok
// SIG undefined FUN_1402d4fc6(void)

void FUN_1402d4fc6(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  bool bVar5;
  
  lVar2 = *param_1;
  LOCK();
  bVar5 = *(int *)(lVar2 + 0x30) == 1;
  if (bVar5) {
    *(int *)(lVar2 + 0x30) = 2;
  }
  UNLOCK();
  if (bVar5) {
    FUN_140342504(lVar2 + 0x10,0);
    *(undefined4 *)(lVar2 + 0x30) = 3;
  }
  lVar2 = param_1[1];
  LOCK();
  bVar5 = *(int *)(lVar2 + 0x18) == 1;
  if (bVar5) {
    *(int *)(lVar2 + 0x18) = 2;
  }
  UNLOCK();
  if (bVar5) {
    FUN_14034264a(lVar2 + 0x10,0);
    *(undefined4 *)(lVar2 + 0x18) = 3;
  }
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x30) != 0) {
    while (*(int *)(lVar2 + 0x30) != 3) {
      FUN_14000f986(0);
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
      plVar4 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(lVar2 + 0x10);
    }
    (**(code **)(*plVar4 + 0x58))
              (plVar4,*(undefined4 *)(lVar2 + 0x28),*(undefined4 *)(lVar2 + 0x2c));
    puVar3 = *(undefined8 **)(lVar2 + 0x20);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0x20) = 0;
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *(undefined4 *)(lVar2 + 0x30) = 0;
  lVar2 = param_1[1];
  if (*(int *)(lVar2 + 0x18) != 0) {
    while (*(int *)(lVar2 + 0x18) != 3) {
      FUN_14000f986(0);
    }
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if (puVar3 != (undefined8 *)0x0) {
      *(undefined8 *)(lVar2 + 0x10) = 0;
      piVar1 = (int *)(puVar3 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  *(undefined4 *)(lVar2 + 0x18) = 0;
  return;
}



// FUNCTION 1402d50dc FUN_1402d50dc body=367 status=ok
// SIG undefined FUN_1402d50dc(void)

void FUN_1402d50dc(longlong param_1)

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
      ((int)(uVar3 * 3) < iVar6 * 2)) && (uVar3 == 0 || 0x40 < (int)(iVar6 - uVar3))) {
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
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402d51a6;
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
LAB_1402d51a6:
      uVar5 = uVar5 >> 3 & 0xffffffff;
    }
    if ((int)uVar5 != iVar6) {
      *(int *)(param_1 + 0xc) = (int)uVar5;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
    }
  }
  return;
}



// FUNCTION 1402d524c FUN_1402d524c body=110 status=ok
// SIG undefined FUN_1402d524c(void)

void FUN_1402d524c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0xc];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1402d52ba(param_1 + 6);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402d52ba FUN_1402d52ba body=92 status=ok
// SIG undefined FUN_1402d52ba(void)

void FUN_1402d52ba(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[2];
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 == (undefined8 *)0x0) {
      if (*param_1 == 0) {
        return;
      }
      FUN_1400020a8();
      goto LAB_1402d5306;
    }
LAB_1402d52f5:
    (**(code **)*puVar1)(puVar1,1);
  }
  else {
    (**(code **)*puVar1)(puVar1,1);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) goto LAB_1402d52f5;
  }
  param_1[1] = 0;
  param_1[2] = 0;
LAB_1402d5306:
  *param_1 = 0;
  return;
}



// FUNCTION 1402d5316 FUN_1402d5316 body=1335 status=ok
// SIG undefined FUN_1402d5316(void)

void FUN_1402d5316(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  double _X;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_238 [32];
  longlong local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  longlong *local_1d0;
  undefined4 local_1c8;
  longlong *local_1a0;
  longlong *local_128;
  char local_f8;
  char local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong *local_90;
  char local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  longlong local_60;
  char local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  char local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if ((*param_2 == 0) || (param_2[0xc] == 0)) goto LAB_1402d576e;
  (**(code **)(*param_1 + 0x40))(param_1,&local_218,param_2,param_1 + 1);
  plVar7 = local_1d0;
  *(undefined4 *)(param_1 + 0x354) = local_210;
  param_1[0x353] = local_218;
  *(undefined4 *)(param_1 + 0x355) = local_208;
  *(undefined4 *)((longlong)param_1 + 0x1aac) = uStack_204;
  *(undefined4 *)(param_1 + 0x356) = uStack_200;
  *(undefined4 *)((longlong)param_1 + 0x1ab4) = uStack_1fc;
  *(undefined4 *)(param_1 + 0x357) = local_1f8;
  *(undefined4 *)((longlong)param_1 + 0x1abc) = uStack_1f4;
  *(undefined4 *)(param_1 + 0x358) = uStack_1f0;
  *(undefined4 *)((longlong)param_1 + 0x1ac4) = uStack_1ec;
  param_1[0x359] = local_1e8;
  param_1[0x35a] = lStack_1e0;
  if (param_1 + 0x35b != &local_1d8) {
    param_1[0x35b] = local_1d8;
    local_1d8 = 0;
    plVar3 = (longlong *)param_1[0x35c];
    if (local_1d0 != plVar3) {
      local_1d0 = (longlong *)0x0;
      param_1[0x35c] = (longlong)plVar7;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar7 = plVar3 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
    }
  }
  plVar7 = local_1d0;
  *(undefined4 *)(param_1 + 0x35d) = local_1c8;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_1d0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if ((int)param_1[0x354] - 1U < 2) {
    if (((int)param_1[0x353] != -1) && (*(int *)((longlong)param_1 + 0x1a9c) != -1)) {
LAB_1402d543f:
      _X = (double)param_1[0x355];
      if ((((-DAT_14cb1d020 < _X) &&
           ((((_X < DAT_14cb1d020 && (-DAT_14cb1d028 < (double)param_1[0x356])) &&
             ((double)param_1[0x356] < DAT_14cb1d028)) &&
            ((-DAT_14cb1d030 < (double)param_1[0x357] && ((double)param_1[0x357] < DAT_14cb1d030))))
           )) && (iVar6 = _finite(_X), iVar6 != 0)) &&
         ((iVar6 = _finite((double)param_1[0x356]), iVar6 != 0 &&
          (iVar6 = _finite((double)param_1[0x357]), iVar6 != 0)))) {
        *(int *)(param_1 + 0x35f) = (int)param_1[0x354];
        param_1[0x35e] = param_1[0x353];
        *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(param_1 + 0x355);
        *(undefined4 *)((longlong)param_1 + 0x1b04) = *(undefined4 *)((longlong)param_1 + 0x1aac);
        *(int *)(param_1 + 0x361) = (int)param_1[0x356];
        *(undefined4 *)((longlong)param_1 + 0x1b0c) = *(undefined4 *)((longlong)param_1 + 0x1ab4);
        *(int *)(param_1 + 0x362) = (int)param_1[0x357];
        *(undefined4 *)((longlong)param_1 + 0x1b14) = *(undefined4 *)((longlong)param_1 + 0x1abc);
        *(int *)(param_1 + 0x363) = (int)param_1[0x358];
        *(undefined4 *)((longlong)param_1 + 0x1b1c) = *(undefined4 *)((longlong)param_1 + 0x1ac4);
        param_1[0x364] = param_1[0x359];
        param_1[0x365] = param_1[0x35a];
        lVar4 = param_1[0x35b];
        lVar5 = param_1[0x35c];
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
        }
        plVar7 = (longlong *)param_1[0x367];
        param_1[0x366] = lVar4;
        param_1[0x367] = lVar5;
        if (plVar7 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar7 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        *(int *)(param_1 + 0x368) = (int)param_1[0x35d];
      }
    }
  }
  else if ((int)param_1[0x354] == 3) goto LAB_1402d543f;
  cVar2 = *(char *)((longlong)param_2 + 0x3c4);
  if (cVar2 == '\x01') {
    plVar7 = param_2 + 0x33;
    if ((char)param_1[0x39c] != '\0') {
      plVar7 = param_1 + 0x393;
    }
    local_58 = (char)plVar7[4];
    if (local_58 == '\x01') {
      local_b8 = plVar7[3];
      local_c8 = plVar7[1];
      uStack_c0 = plVar7[2];
    }
    local_78 = (undefined4)*plVar7;
    local_38 = (char)plVar7[8];
    if (local_38 == '\x01') {
      local_d8 = plVar7[7];
      local_e8 = plVar7[5];
      uStack_e0 = plVar7[6];
    }
    local_a0 = *param_2;
    local_98 = param_2 + 3;
    local_90 = param_2 + 0xf;
    local_84 = *(undefined4 *)((longlong)param_2 + 0xc);
    local_80 = (undefined4)param_2[1];
    local_7c = (undefined4)param_2[2];
    if (local_58 != '\0') {
      local_60 = local_b8;
      local_70 = (undefined4)local_c8;
      uStack_6c = local_c8._4_4_;
      uStack_68 = (undefined4)uStack_c0;
      uStack_64 = uStack_c0._4_4_;
    }
    if (local_38 != '\0') {
      local_40 = local_d8;
      local_50 = (undefined4)local_e8;
      uStack_4c = local_e8._4_4_;
      uStack_48 = (undefined4)uStack_e0;
      uStack_44 = uStack_e0._4_4_;
    }
    local_30 = *(undefined8 *)((longlong)param_1 + 0xc);
    local_f0 = (char)param_2[0x68];
    local_a8 = param_1;
    local_88 = cVar2;
    if (local_f0 == '\x01') {
      local_f8 = -1;
      FUN_140a8a2e2(&local_218,param_2 + 0x43);
    }
    FUN_140a89f72(param_1,param_2,&local_218);
    FUN_1402f213e(param_1 + 3,&local_a8,&local_218);
    if (local_f0 == '\x01') {
      if (local_f8 == '\x01') {
        local_f8 = -1;
        plVar7 = (longlong *)CONCAT44(uStack_20c,local_210);
      }
      else {
        if (local_f8 != '\x02') goto LAB_1402d576e;
        local_f8 = -1;
        plVar7 = local_1a0;
        if (local_128 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_128 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_128)(local_128);
            LOCK();
            piVar1 = (int *)((longlong)local_128 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar7 = local_1a0;
            if (*piVar1 == 0) {
              (**(code **)(*local_128 + 0x10))(local_128);
              plVar7 = local_1a0;
            }
          }
        }
      }
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar7 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
  }
LAB_1402d576e:
  if ((local_28 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402d584e FUN_1402d584e body=856 status=ok
// SIG undefined FUN_1402d584e(void)

undefined8 * FUN_1402d584e(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
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
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar14 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar14;
  uVar14 = param_2[4];
  uVar15 = param_2[5];
  uVar16 = param_2[6];
  param_1[3] = param_2[3];
  param_1[4] = uVar14;
  param_1[5] = uVar15;
  param_1[6] = uVar16;
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  lVar17 = param_2[9];
  param_1[9] = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 0xc) = *(int *)(lVar17 + 0xc) + 1;
    UNLOCK();
  }
  cVar1 = *(char *)((longlong)param_2 + 0x54);
  *(char *)((longlong)param_1 + 0x54) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  }
  uVar3 = *(undefined4 *)(param_2 + 0xb);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x5c);
  uVar5 = *(undefined4 *)(param_2 + 0xc);
  uVar6 = *(undefined4 *)((longlong)param_2 + 100);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar8 = *(undefined4 *)(param_2 + 0xe);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar7;
  *(undefined4 *)(param_1 + 0xe) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar9;
  *(undefined4 *)(param_1 + 0xb) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)((longlong)param_1 + 100) = uVar6;
  puVar18 = param_2 + 0xf;
  puVar19 = param_1 + 0xf;
  for (lVar17 = 0xb; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar19 = *puVar18;
    puVar18 = puVar18 + 1;
    puVar19 = puVar19 + 1;
  }
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_2 + 0x1b);
  param_1[0x1a] = param_2[0x1a];
  lVar17 = param_2[0x1c];
  param_1[0x1c] = lVar17;
  if ((lVar17 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  cVar1 = *(char *)(param_2 + 0x28);
  *(char *)(param_1 + 0x28) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x21] = param_2[0x21];
    uVar3 = *(undefined4 *)(param_2 + 0x1d);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0xec);
    uVar5 = *(undefined4 *)(param_2 + 0x1e);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0xf4);
    uVar7 = *(undefined4 *)((longlong)param_2 + 0xfc);
    uVar8 = *(undefined4 *)(param_2 + 0x20);
    uVar9 = *(undefined4 *)((longlong)param_2 + 0x104);
    *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
    *(undefined4 *)((longlong)param_1 + 0xfc) = uVar7;
    *(undefined4 *)(param_1 + 0x20) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x104) = uVar9;
    *(undefined4 *)(param_1 + 0x1d) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xec) = uVar4;
    *(undefined4 *)(param_1 + 0x1e) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0xf4) = uVar6;
    param_1[0x26] = 0;
    iVar2 = *(int *)(param_2 + 0x27);
    puVar18 = (undefined8 *)param_2[0x26];
    *(int *)(param_1 + 0x27) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x13c) = 2;
    }
    else {
      puVar19 = param_2 + 0x22;
      if (puVar18 != (undefined8 *)0x0) {
        puVar19 = puVar18;
      }
      FUN_144891736(param_1 + 0x22,iVar2,0);
      puVar18 = (undefined8 *)param_1[0x26];
      if ((undefined8 *)param_1[0x26] == (undefined8 *)0x0) {
        puVar18 = param_1 + 0x22;
      }
      memcpy(puVar18,puVar19,(longlong)iVar2 << 4);
    }
  }
  uVar14 = param_2[0x29];
  uVar15 = param_2[0x2a];
  uVar3 = *(undefined4 *)(param_2 + 0x2b);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x15c);
  uVar5 = *(undefined4 *)(param_2 + 0x2c);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x164);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x16c);
  uVar8 = *(undefined4 *)(param_2 + 0x2e);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x174);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  *(undefined4 *)((longlong)param_1 + 0x16c) = uVar7;
  *(undefined4 *)(param_1 + 0x2e) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x174) = uVar9;
  *(undefined4 *)(param_1 + 0x2b) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x164) = uVar6;
  param_1[0x29] = uVar14;
  param_1[0x2a] = uVar15;
  param_1[0x2f] = param_2[0x2f];
  lVar17 = param_2[0x30];
  param_1[0x30] = lVar17;
  if (lVar17 != 0) {
    LOCK();
    *(int *)(lVar17 + 8) = *(int *)(lVar17 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  param_1[0x32] = param_2[0x32];
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  cVar1 = *(char *)(param_2 + 0x37);
  *(char *)(param_1 + 0x37) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x36] = param_2[0x36];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1a4);
    uVar4 = *(undefined4 *)(param_2 + 0x35);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1ac);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
    *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar3;
    *(undefined4 *)(param_1 + 0x35) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = uVar5;
  }
  cVar1 = *(char *)(param_2 + 0x3b);
  *(char *)(param_1 + 0x3b) = cVar1;
  if (cVar1 == '\x01') {
    param_1[0x3a] = param_2[0x3a];
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c4);
    uVar4 = *(undefined4 *)(param_2 + 0x39);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0x1cc);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
    *(undefined4 *)(param_1 + 0x39) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0x1cc) = uVar5;
  }
  cVar1 = *(char *)(param_2 + 0x42);
  *(char *)(param_1 + 0x42) = cVar1;
  if (cVar1 == '\x01') {
    uVar3 = *(undefined4 *)(param_2 + 0x3c);
    uVar4 = *(undefined4 *)((longlong)param_2 + 0x1e4);
    uVar5 = *(undefined4 *)(param_2 + 0x3d);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x1ec);
    uVar7 = *(undefined4 *)(param_2 + 0x3e);
    uVar8 = *(undefined4 *)((longlong)param_2 + 500);
    uVar9 = *(undefined4 *)(param_2 + 0x3f);
    uVar10 = *(undefined4 *)((longlong)param_2 + 0x1fc);
    uVar11 = *(undefined4 *)((longlong)param_2 + 0x204);
    uVar12 = *(undefined4 *)(param_2 + 0x41);
    uVar13 = *(undefined4 *)((longlong)param_2 + 0x20c);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
    *(undefined4 *)((longlong)param_1 + 0x204) = uVar11;
    *(undefined4 *)(param_1 + 0x41) = uVar12;
    *(undefined4 *)((longlong)param_1 + 0x20c) = uVar13;
    *(undefined4 *)(param_1 + 0x3e) = uVar7;
    *(undefined4 *)((longlong)param_1 + 500) = uVar8;
    *(undefined4 *)(param_1 + 0x3f) = uVar9;
    *(undefined4 *)((longlong)param_1 + 0x1fc) = uVar10;
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x1e4) = uVar4;
    *(undefined4 *)(param_1 + 0x3d) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x1ec) = uVar6;
  }
  cVar1 = *(char *)(param_2 + 0x68);
  *(char *)(param_1 + 0x68) = cVar1;
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x67) = 0xff;
    FUN_140a8a2e2(param_1 + 0x43,param_2 + 0x43);
  }
  cVar1 = *(char *)(param_2 + 0x76);
  *(char *)(param_1 + 0x76) = cVar1;
  if (cVar1 == '\x01') {
    puVar18 = param_2 + 0x6a;
    puVar19 = param_1 + 0x6a;
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *puVar19 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar19 = puVar19 + 1;
    }
  }
  *(undefined2 *)(param_1 + 0x79) = *(undefined2 *)(param_2 + 0x79);
  param_1[0x78] = param_2[0x78];
  return param_1;
}



// FUNCTION 1402d5ba6 FUN_1402d5ba6 body=14 status=ok
// SIG undefined FUN_1402d5ba6(void)

void FUN_1402d5ba6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1402d5bb4();
    return;
  }
  return;
}



// FUNCTION 1402d5bb4 FUN_1402d5bb4 body=452 status=ok
// SIG undefined FUN_1402d5bb4(void)

void FUN_1402d5bb4(undefined8 *param_1,uint param_2)

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
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0xd8);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1402d5cd1:
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
LAB_1402d5d0e:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0xd8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1402d5c0c;
LAB_1402d5c01:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1402d5c0c:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x12f) goto code_r0x0001402d5c38;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x36 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1402d5c8e:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1402d5d0e;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1402d5cd1;
code_r0x0001402d5c38:
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
      goto LAB_1402d5c8e;
    }
  }
  goto LAB_1402d5c01;
}



// FUNCTION 1402d5d78 FUN_1402d5d78 body=110 status=ok
// SIG undefined FUN_1402d5d78(void)

byte FUN_1402d5d78(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 in_stack_ffffffffffffffc8;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffc8 >> 0x20);
  bVar1 = FUN_1447b4afa();
  bVar2 = FUN_14009cabe(param_1 + 0x1488,param_2,param_3,param_4,CONCAT44(uVar4,1000));
  bVar3 = FUN_1402d5de6(param_1 + 0x6f90,0,param_2,param_3,param_4);
  return bVar3 | bVar2 | bVar1;
}



// FUNCTION 1402d5de6 FUN_1402d5de6 body=1164 status=ok
// SIG undefined FUN_1402d5de6(void)

ulonglong FUN_1402d5de6(longlong param_1,uint param_2,longlong param_3,undefined8 param_4,
                       uint *param_5)

{
  longlong *plVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  uint local_5c;
  uint *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar5 = *param_5;
  if ((uVar5 & 1) == 0) {
    uVar8 = 0;
    goto LAB_1402d5e1c;
  }
  lVar6 = *(longlong *)(param_1 + 0x138);
  if (lVar6 == 0) {
LAB_1402d5ee5:
    uVar8 = 0;
  }
  else {
    iVar2 = *(int *)(lVar6 + 0x48);
    local_5c = param_2;
    if ((*(byte *)(param_3 + 0x30) & 0x80) == 0) {
      plVar1 = (longlong *)(param_3 + 0x1a8);
      if (*(int *)(param_3 + 0x1b0) != *(int *)(param_3 + 0x1dc)) {
        lVar7 = param_3 + 0x1e0;
        if (*(longlong *)(param_3 + 0x1e8) != 0) {
          lVar7 = *(longlong *)(param_3 + 0x1e8);
        }
        iVar4 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_3 + 0x1f0) - 1U & param_2) * 4);
        if (iVar4 != -1) {
          do {
            lVar7 = *plVar1 + (longlong)iVar4 * 0x10;
            if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x10) == param_2) {
              if (lVar7 != 0) goto LAB_1402d5edd;
              break;
            }
            iVar4 = *(int *)(lVar7 + 8);
          } while (iVar4 != -1);
        }
      }
      local_58 = &local_5c;
      local_88 = 0;
      FUN_1407932ac(plVar1,&local_4c,param_2);
      lVar7 = (longlong)local_4c * 0x10 + *plVar1;
LAB_1402d5edd:
      if (*(int *)(lVar7 + 4) == iVar2) goto LAB_1402d5ee5;
      *(int *)(lVar7 + 4) = iVar2;
      iVar2 = *(int *)(param_3 + 0x250);
      *(uint *)(param_3 + 0x250) = iVar2 + 1U;
      if (*(uint *)(param_3 + 0x254) < iVar2 + 1U) {
        FUN_1446f48e2((longlong *)(param_3 + 0x248),iVar2);
      }
      *(uint *)(*(longlong *)(param_3 + 0x248) + (longlong)iVar2 * 4) = local_5c;
      uVar5 = *param_5;
    }
    if (((*(uint *)(lVar6 + 8) >> 0x1e & 1) != 0) || (DAT_14cad4be8 != '\0')) goto LAB_1402d5ee5;
    uVar5 = FUN_14009cd08(param_3,lVar6,param_4,uVar5);
    uVar8 = (ulonglong)uVar5;
  }
  param_2 = param_2 + 1;
  iVar2 = *(int *)(param_1 + 200);
  local_5c = param_2;
  if ((*(byte *)(param_3 + 0x30) & 0x80) == 0) {
    plVar1 = (longlong *)(param_3 + 0x1a8);
    if (*(int *)(param_3 + 0x1b0) != *(int *)(param_3 + 0x1dc)) {
      lVar6 = param_3 + 0x1e0;
      if (*(longlong *)(param_3 + 0x1e8) != 0) {
        lVar6 = *(longlong *)(param_3 + 0x1e8);
      }
      iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_3 + 0x1f0) - 1U & param_2) * 4);
      if (iVar4 != -1) {
        do {
          lVar6 = *plVar1 + (longlong)iVar4 * 0x10;
          if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x10) == param_2) {
            if (lVar6 != 0) goto LAB_1402d5f66;
            break;
          }
          iVar4 = *(int *)(lVar6 + 8);
        } while (iVar4 != -1);
      }
    }
    local_58 = &local_5c;
    local_88 = 0;
    FUN_1407932ac(plVar1,&local_4c,param_2);
    lVar6 = (longlong)local_4c * 0x10 + *plVar1;
LAB_1402d5f66:
    if (*(int *)(lVar6 + 4) == iVar2) goto LAB_1402d5e1c;
    *(int *)(lVar6 + 4) = iVar2;
    iVar2 = *(int *)(param_3 + 0x250);
    *(uint *)(param_3 + 0x250) = iVar2 + 1U;
    if (*(uint *)(param_3 + 0x254) < iVar2 + 1U) {
      FUN_1446f48e2((longlong *)(param_3 + 0x248),iVar2);
    }
    *(uint *)(*(longlong *)(param_3 + 0x248) + (longlong)iVar2 * 4) = local_5c;
  }
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    plVar10 = *(longlong **)(param_1 + 0xb0);
    plVar9 = plVar10 + *(int *)(param_1 + 0xb8);
    plVar1 = (longlong *)(param_3 + 0x1a8);
    lVar6 = param_3 + 0x1e0;
    local_68 = (longlong *)(param_3 + 0x248);
    local_70 = plVar9;
    do {
      lVar7 = *plVar10;
      if (lVar7 != 0) {
        iVar2 = *(int *)(lVar7 + 0x198);
        local_5c = *(int *)(lVar7 + 0x194) + param_2;
        if ((*(byte *)(param_3 + 0x30) & 0x80) == 0) {
          if (*(int *)(param_3 + 0x1b0) != *(int *)(param_3 + 0x1dc)) {
            lVar7 = *(longlong *)(param_3 + 0x1e8);
            if (*(longlong *)(param_3 + 0x1e8) == 0) {
              lVar7 = lVar6;
            }
            iVar4 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_3 + 0x1f0) - 1U & local_5c) * 4);
            if (iVar4 != -1) {
              do {
                lVar7 = *plVar1 + (longlong)iVar4 * 0x10;
                if (*(uint *)(*plVar1 + (longlong)iVar4 * 0x10) == local_5c) {
                  if (lVar7 != 0) goto LAB_1402d6064;
                  break;
                }
                iVar4 = *(int *)(lVar7 + 8);
              } while (iVar4 != -1);
            }
          }
          local_58 = &local_5c;
          local_88 = 0;
          local_78 = lVar6;
          FUN_1407932ac(plVar1,&local_4c,local_5c,&local_58);
          lVar7 = (longlong)local_4c * 0x10 + *plVar1;
          plVar9 = local_70;
          lVar6 = local_78;
LAB_1402d6064:
          if (*(int *)(lVar7 + 4) != iVar2) {
            *(int *)(lVar7 + 4) = iVar2;
            iVar2 = *(int *)(param_3 + 0x250);
            *(uint *)(param_3 + 0x250) = iVar2 + 1U;
            if (*(uint *)(param_3 + 0x254) < iVar2 + 1U) {
              local_78 = lVar6;
              FUN_1446f48e2(local_68,iVar2);
              lVar6 = local_78;
            }
            *(uint *)(*local_68 + (longlong)iVar2 * 4) = local_5c;
            lVar7 = *plVar10;
            if (lVar7 != 0) goto LAB_1402d60d8;
            goto LAB_1402d626c;
          }
        }
        else {
LAB_1402d60d8:
          if (((*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0) && (DAT_14cad4be8 == '\0')) {
            bVar3 = FUN_14009cd08(param_3,lVar7,param_4,*param_5);
          }
          else {
LAB_1402d626c:
            bVar3 = 0;
          }
          uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 | bVar3);
          plVar9 = local_70;
        }
      }
      plVar10 = plVar10 + 1;
    } while (plVar10 != plVar9);
  }
LAB_1402d5e1c:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffffffffff01;
}



// FUNCTION 1402d6274 FUN_1402d6274 body=433 status=ok
// SIG undefined FUN_1402d6274(void)

void FUN_1402d6274(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(**(longlong **)(param_1 + 0x10) + 0x390);
  if (pcVar1 != (code *)&LAB_1427dd5fe) {
    local_38 = 0;
    (*pcVar1)(*(longlong **)(param_1 + 0x10),param_1,1,0);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951808) {
    FUN_144b3d300(&DAT_14c951808);
    if (DAT_14c951808 == -1) {
      FUN_145dfc00c(&DAT_14c951778);
      atexit((_func_5014 *)&LAB_142809c19);
      _Init_thread_footer(&DAT_14c951808);
    }
  }
  if ((*(uint *)(param_1 + 8) & 0x410) == 0) {
    FUN_1446ddc76(&local_20,"SystemSpawnScript",1);
    local_30 = 0;
    local_38 = local_38 & 0xffffffffffffff00;
    lVar2 = FUN_1481bc03d(param_1,local_20,8,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0xd8) = lVar2;
    *(undefined1 *)(lVar2 + 0x30) = 0xb;
    FUN_1446ddc76(&local_28,"SystemUpdateScript",1);
    local_30 = 0;
    local_38 = local_38 & 0xffffffffffffff00;
    lVar2 = FUN_1481bc03d(param_1,local_28,8,0);
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    *(longlong *)(param_1 + 0xe0) = lVar2;
    *(undefined1 *)(lVar2 + 0x30) = 0xc;
  }
  FUN_1402d68f0(param_1);
  FUN_1402d64a0(param_1);
  FUN_1402d6426(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d6426 FUN_1402d6426 body=121 status=ok
// SIG undefined FUN_1402d6426(void)

void FUN_1402d6426(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(byte *)(param_1 + 0x4f8) = *(byte *)(param_1 + 0x4f8) & 0xef;
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb8);
    lVar2 = (longlong)*(int *)(param_1 + 0xc0) * 0x48;
    do {
      if (*(char *)(lVar3 + 0x20) == '\x01') {
        lVar1 = FUN_14040f60c(lVar3);
        if (lVar1 != 0) {
          *(uint *)(param_1 + 0x4f8) =
               *(uint *)(param_1 + 0x4f8) & 0xffffffef |
               (uint)(byte)((byte)((*(uint *)(param_1 + 0x4f8) & 0x10) >> 4) |
                           *(char *)(lVar1 + 0x3c) == '\x01') << 4;
        }
      }
      lVar3 = lVar3 + 0x48;
      lVar2 = lVar2 + -0x48;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 1402d64a0 FUN_1402d64a0 body=790 status=ok
// SIG undefined FUN_1402d64a0(void)

void FUN_1402d64a0(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) & 0xfffffff1 | 0xc;
  lVar6 = *(longlong *)(param_1 + 0xd8);
  if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x298) != 0)) {
    lVar5 = *(longlong *)(lVar6 + 0x290);
    lVar6 = (longlong)*(int *)(lVar6 + 0x298) * 0x48;
    do {
      plVar2 = (longlong *)FUN_1402d67b8(lVar5);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x340))(plVar2);
        if (cVar1 != '\0') {
          *(byte *)(param_1 + 0x4f8) = *(byte *)(param_1 + 0x4f8) | 2;
          cVar1 = (**(code **)(*plVar2 + 0x360))(plVar2);
          uVar4 = *(uint *)(param_1 + 0x4f8) & 4;
          if (cVar1 == '\0') {
            uVar4 = 0;
          }
          *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) & 0xfffffffb | uVar4;
        }
        cVar1 = (**(code **)(*plVar2 + 0x368))(plVar2);
        uVar4 = *(uint *)(param_1 + 0x4f8) & 8;
        if (cVar1 == '\0') {
          uVar4 = 0;
        }
        *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) & 0xfffffff7 | uVar4;
      }
      lVar5 = lVar5 + 0x48;
      lVar6 = lVar6 + -0x48;
    } while (lVar6 != 0);
  }
  lVar6 = *(longlong *)(param_1 + 0xe0);
  if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x298) != 0)) {
    lVar5 = *(longlong *)(lVar6 + 0x290);
    lVar6 = (longlong)*(int *)(lVar6 + 0x298) * 0x48;
    do {
      plVar2 = (longlong *)FUN_1402d67b8(lVar5);
      if (plVar2 != (longlong *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x340))(plVar2);
        if (cVar1 != '\0') {
          *(byte *)(param_1 + 0x4f8) = *(byte *)(param_1 + 0x4f8) | 2;
          cVar1 = (**(code **)(*plVar2 + 0x360))(plVar2);
          uVar4 = *(uint *)(param_1 + 0x4f8) & 4;
          if (cVar1 == '\0') {
            uVar4 = 0;
          }
          *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) & 0xfffffffb | uVar4;
        }
        cVar1 = (**(code **)(*plVar2 + 0x368))(plVar2);
        uVar4 = *(uint *)(param_1 + 0x4f8) & 8;
        if (cVar1 == '\0') {
          uVar4 = 0;
        }
        *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) & 0xfffffff7 | uVar4;
      }
      lVar5 = lVar5 + 0x48;
      lVar6 = lVar6 + -0x48;
    } while (lVar6 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar6 = *(longlong *)(param_1 + 0xb8);
    local_80 = lVar6 + (longlong)*(int *)(param_1 + 0xc0) * 0x48;
    do {
      if ((*(char *)(lVar6 + 0x20) == '\x01') && (lVar5 = FUN_14040f60c(lVar6), lVar5 != 0)) {
        local_78 = (longlong *)0x0;
        uStack_70 = 0;
        FUN_1401358c4(lVar5,&local_78,1,0);
        if ((longlong)(int)uStack_70 != 0) {
          plVar2 = local_78 + (int)uStack_70;
          plVar7 = local_78;
          do {
            lVar5 = *plVar7;
            if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x298) != 0)) {
              lVar8 = *(longlong *)(lVar5 + 0x290);
              lVar5 = (longlong)*(int *)(lVar5 + 0x298) * 0x48;
              do {
                plVar3 = (longlong *)FUN_1402d67b8(lVar8);
                if (plVar3 != (longlong *)0x0) {
                  cVar1 = (**(code **)(*plVar3 + 0x340))(plVar3);
                  if (cVar1 != '\0') {
                    *(byte *)(param_1 + 0x4f8) = *(byte *)(param_1 + 0x4f8) | 2;
                    cVar1 = (**(code **)(*plVar3 + 0x360))(plVar3);
                    uVar4 = *(uint *)(param_1 + 0x4f8) & 4;
                    if (cVar1 == '\0') {
                      uVar4 = 0;
                    }
                    *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) & 0xfffffffb | uVar4;
                  }
                  cVar1 = (**(code **)(*plVar3 + 0x368))(plVar3);
                  uVar4 = *(uint *)(param_1 + 0x4f8) & 8;
                  if (cVar1 == '\0') {
                    uVar4 = 0;
                  }
                  *(uint *)(param_1 + 0x4f8) = *(uint *)(param_1 + 0x4f8) & 0xfffffff7 | uVar4;
                }
                lVar8 = lVar8 + 0x48;
                lVar5 = lVar5 + -0x48;
              } while (lVar5 != 0);
            }
            plVar7 = plVar7 + 1;
          } while (plVar7 != plVar2);
        }
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8(local_78);
        }
      }
      lVar6 = lVar6 + 0x48;
    } while (lVar6 != local_80);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402d67b8 FUN_1402d67b8 body=310 status=ok
// SIG undefined FUN_1402d67b8(void)

longlong FUN_1402d67b8(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_14487ac36((longlong *)(param_1 + 0x10));
  if ((((cVar1 != '\0') && (*(short *)(param_1 + 0x18) == 1)) &&
      (lVar2 = *(longlong *)(param_1 + 0x10), lVar2 != 0)) &&
     (lVar2 = *(longlong *)(lVar2 + 0x110), lVar2 != 0)) {
    if (DAT_14cb3a798 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_145a7874c;
      local_48 = &LAB_14811919b;
      local_50 = FUN_14646e15f;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000001;
      local_70 = 8;
      local_78 = 0x38;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataInterface",&DAT_14cb3a798,&DAT_14811919a);
    }
    if ((*(int *)(DAT_14cb3a798 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb3a798 + 0x38) * 8) == DAT_14cb3a798 + 0x30)) goto LAB_1402d682a;
  }
  lVar2 = 0;
LAB_1402d682a:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d68f0 FUN_1402d68f0 body=1131 status=ok
// SIG undefined FUN_1402d68f0(void)

undefined1 FUN_1402d68f0(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  float fVar19;
  
  FUN_1402d6d5c(*(undefined8 *)(param_1 + 0x4e0));
  lVar17 = *(longlong *)(param_1 + 0x68);
  if (lVar17 != 0) {
    lVar13 = FUN_1402d6e6c(lVar17);
    lVar16 = *(longlong *)(param_1 + 0x4e0);
    FUN_1405d56d0(lVar16,lVar13);
    FUN_1405d5728(lVar16 + 0x10,lVar13 + 0x10);
    *(undefined8 *)(lVar16 + 0x20) = *(undefined8 *)(lVar13 + 0x20);
    *(undefined4 *)(lVar16 + 0x28) = *(undefined4 *)(lVar13 + 0x28);
    puVar15 = (undefined8 *)(lVar13 + 0x30);
    puVar18 = (undefined8 *)(lVar16 + 0x30);
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *puVar18 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar18 = puVar18 + 1;
    }
    *(undefined4 *)(lVar16 + 0x90) = *(undefined4 *)(lVar13 + 0x90);
    *(uint *)(param_1 + 0x4f8) =
         *(uint *)(param_1 + 0x4f8) & 0xfffffffe | (uint)*(byte *)(lVar17 + 0x28);
  }
  if ((*(byte *)(param_1 + 0x60) & 0x10) != 0) {
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      lVar17 = *(longlong *)(param_1 + 0x78);
      lVar16 = (longlong)*(int *)(param_1 + 0x80) * 0xa0;
      do {
        cVar10 = FUN_1401e6e8e(lVar17);
        if (cVar10 != '\0') {
          uVar12 = *(uint *)(lVar17 + 0x98);
          if ((uVar12 & 1) != 0) {
            *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x30) =
                 *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x30) & 0xfffffffe |
                 *(uint *)(lVar17 + 0x30) & 1;
            *(undefined4 *)(*(longlong *)(param_1 + 0x4e0) + 0x34) = *(undefined4 *)(lVar17 + 0x34);
            uVar12 = *(uint *)(lVar17 + 0x98);
          }
          if ((uVar12 & 2) != 0) {
            *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x30) =
                 *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x30) & 0xfffffffd |
                 *(uint *)(lVar17 + 0x30) & 2;
            *(undefined4 *)(*(longlong *)(param_1 + 0x4e0) + 0x3c) = *(undefined4 *)(lVar17 + 0x3c);
            uVar12 = *(uint *)(lVar17 + 0x98);
          }
          if ((uVar12 & 4) != 0) {
            *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x30) =
                 *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x30) & 0xfffffffb |
                 *(uint *)(lVar17 + 0x30) & 4;
            *(undefined4 *)(*(longlong *)(param_1 + 0x4e0) + 0x40) = *(undefined4 *)(lVar17 + 0x40);
            uVar12 = *(uint *)(lVar17 + 0x98);
          }
          if ((uVar12 & 8) != 0) {
            *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x50) =
                 *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x50) & 0xfffffffe |
                 *(uint *)(lVar17 + 0x50) & 1;
            *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x50) =
                 *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x50) & 0xfffffffd |
                 *(uint *)(lVar17 + 0x50) & 2;
            *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x50) =
                 *(uint *)(*(longlong *)(param_1 + 0x4e0) + 0x50) & 0xfffffffb |
                 *(uint *)(lVar17 + 0x50) & 4;
            *(undefined4 *)(*(longlong *)(param_1 + 0x4e0) + 0x58) = *(undefined4 *)(lVar17 + 0x58);
            *(undefined4 *)(*(longlong *)(param_1 + 0x4e0) + 0x54) = *(undefined4 *)(lVar17 + 0x54);
            uVar12 = *(uint *)(lVar17 + 0x98);
          }
          if ((uVar12 & 0x10) != 0) {
            lVar16 = *(longlong *)(param_1 + 0x4e0);
            *(undefined8 *)(lVar16 + 0x8c) = *(undefined8 *)(lVar17 + 0x8c);
            uVar4 = *(undefined8 *)(lVar17 + 0x5c);
            uVar5 = *(undefined8 *)(lVar17 + 100);
            uVar6 = *(undefined8 *)(lVar17 + 0x6c);
            uVar7 = *(undefined8 *)(lVar17 + 0x74);
            uVar8 = *(undefined8 *)(lVar17 + 0x84);
            *(undefined8 *)(lVar16 + 0x7c) = *(undefined8 *)(lVar17 + 0x7c);
            *(undefined8 *)(lVar16 + 0x84) = uVar8;
            *(undefined8 *)(lVar16 + 0x6c) = uVar6;
            *(undefined8 *)(lVar16 + 0x74) = uVar7;
            *(undefined8 *)(lVar16 + 0x5c) = uVar4;
            *(undefined8 *)(lVar16 + 100) = uVar5;
            uVar12 = *(uint *)(lVar17 + 0x98);
          }
          if ((uVar12 & 0x20) != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x4e0) + 0x48) = *(undefined4 *)(lVar17 + 0x48);
            *(undefined4 *)(*(longlong *)(param_1 + 0x4e0) + 0x4c) = *(undefined4 *)(lVar17 + 0x4c);
          }
          break;
        }
        lVar17 = lVar17 + 0xa0;
        lVar16 = lVar16 + -0xa0;
      } while (lVar16 != 0);
    }
    if ((*(uint *)(param_1 + 0x70) & 1) != 0) {
      *(uint *)(param_1 + 0x4f8) =
           *(uint *)(param_1 + 0x4f8) & 0xfffffffe | *(uint *)(param_1 + 0x70) >> 1 & 1;
    }
  }
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x4e0) + 0x34);
  fVar19 = DAT_14c7629dc;
  if (DAT_14c7629dc <= fVar1) {
    fVar19 = fVar1;
  }
  *(float *)(*(longlong *)(param_1 + 0x4e0) + 0x34) = fVar19;
  uVar12 = *(uint *)(param_1 + 0x4f8);
  uVar11 = uVar12 & 0xffffffdf;
  *(uint *)(param_1 + 0x4f8) = uVar11;
  if (((*(byte *)(*(longlong *)(param_1 + 0x4e0) + 0x30) & 6) == 0) &&
     (*(int *)(*(longlong *)(param_1 + 0x4e0) + 0x48) == 0)) {
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      uVar11 = uVar11 | (*(uint *)(*(longlong *)(param_1 + 0xd8) + 0x370) & 1) << 5;
      *(uint *)(param_1 + 0x4f8) = uVar11;
    }
    if ((*(longlong *)(param_1 + 0xe0) != 0) && ((uVar11 & 0x20) == 0)) {
      *(uint *)(param_1 + 0x4f8) =
           (*(uint *)(*(longlong *)(param_1 + 0xe0) + 0x370) & 1) << 5 | uVar11;
    }
    if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
      lVar16 = *(longlong *)(param_1 + 0xb8);
      lVar17 = lVar16 + (longlong)*(int *)(param_1 + 0xc0) * 0x48;
      do {
        if ((*(char *)(lVar16 + 0x20) == '\x01') && (lVar13 = FUN_14040f60c(lVar16), lVar13 != 0)) {
          if ((*(longlong *)(lVar13 + 0x118) != 0) && ((*(uint *)(param_1 + 0x4f8) & 0x20) == 0)) {
            *(uint *)(param_1 + 0x4f8) =
                 (*(uint *)(*(longlong *)(lVar13 + 0x118) + 0x370) & 1) << 5 |
                 *(uint *)(param_1 + 0x4f8);
          }
          if ((*(longlong *)(lVar13 + 0xf0) != 0) && ((*(uint *)(param_1 + 0x4f8) & 0x20) == 0)) {
            *(uint *)(param_1 + 0x4f8) =
                 (*(uint *)(*(longlong *)(lVar13 + 0xf0) + 0x370) & 1) << 5 |
                 *(uint *)(param_1 + 0x4f8);
          }
          if ((*(longlong *)(lVar13 + 0x268) != 0) && ((*(uint *)(param_1 + 0x4f8) & 0x20) == 0)) {
            *(uint *)(param_1 + 0x4f8) =
                 (*(uint *)(*(longlong *)(lVar13 + 0x268) + 0x370) & 1) << 5 |
                 *(uint *)(param_1 + 0x4f8);
          }
          iVar2 = *(int *)(lVar13 + 0x88);
          if ((longlong)iVar2 != 0) {
            lVar13 = *(longlong *)(lVar13 + 0x80);
            lVar14 = 0;
            do {
              lVar3 = *(longlong *)(lVar13 + lVar14);
              if ((lVar3 != 0) && ((*(uint *)(param_1 + 0x4f8) & 0x20) == 0)) {
                *(uint *)(param_1 + 0x4f8) =
                     (*(uint *)(lVar3 + 0x370) & 1) << 5 | *(uint *)(param_1 + 0x4f8);
              }
              lVar14 = lVar14 + 0x58;
            } while ((longlong)iVar2 * 0x58 - lVar14 != 0);
          }
        }
        lVar16 = lVar16 + 0x48;
      } while (lVar16 != lVar17);
    }
  }
  else {
    *(uint *)(param_1 + 0x4f8) = uVar12 | 0x20;
  }
  uVar9 = DAT_14cb44100;
  LOCK();
  DAT_14cb44100 = 1;
  UNLOCK();
  return uVar9;
}



// FUNCTION 1402d6d5c FUN_1402d6d5c body=272 status=ok
// SIG undefined FUN_1402d6d5c(void)

void FUN_1402d6d5c(longlong *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = DAT_14cb3dff0;
  uVar3 = DAT_14cb3dfec;
  uVar2 = DAT_14cb3dfe8;
  uVar1 = DAT_14cb3dfe4;
  *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) & 0xfffffff8;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  *(uint *)(param_1 + 7) = *(uint *)(param_1 + 7) & 0xfffffffe;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 **)((longlong)param_1 + 0x54) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0xf) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar3;
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x11) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar3;
  *(undefined4 *)(param_1 + 0x12) = uVar4;
  param_1[9] = 0x2000000000;
  return;
}



// FUNCTION 1402d6e6c FUN_1402d6e6c body=166 status=ok
// SIG undefined FUN_1402d6e6c(void)

undefined8 * FUN_1402d6e6c(longlong param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x50);
    lVar3 = (longlong)*(int *)(param_1 + 0x58) * 0x98;
    do {
      cVar1 = FUN_1401e6e8e(puVar2);
      if (cVar1 != '\0') {
        return puVar2;
      }
      puVar2 = puVar2 + 0x13;
      lVar3 = lVar3 + -0x98;
    } while (lVar3 != 0);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb3dfa0) && (FUN_144b3d300(&DAT_14cb3dfa0), DAT_14cb3dfa0 == -1)) {
    FUN_140bd4c70(&DAT_14cb3df08);
    atexit(FUN_143a7b5f3);
    _Init_thread_footer(&DAT_14cb3dfa0);
  }
  return &DAT_14cb3df08;
}



// FUNCTION 1402d6f12 FUN_1402d6f12 body=530 status=ok
// SIG undefined FUN_1402d6f12(void)

void FUN_1402d6f12(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  void *_Src;
  longlong lVar7;
  undefined1 auStack_f8 [45];
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined5 uStack_78;
  undefined3 uStack_73;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1402d7126();
  local_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  lVar6 = **(longlong **)(param_1 + 0x5a0);
  if (lVar6 != 0) {
    uVar4 = *(undefined4 *)(lVar6 + 8);
    uVar1 = *(undefined4 *)(lVar6 + 0xc);
    uVar2 = *(undefined4 *)(lVar6 + 0x10);
    _Src = *(void **)(lVar6 + 0x18);
    iVar5 = *(int *)(lVar6 + 0x20);
    local_c9 = *(undefined1 *)(lVar6 + 0x40);
    uVar3 = *(undefined1 *)(lVar6 + 0x41);
    local_ca = *(undefined1 *)(lVar6 + 0x42);
    local_cb = *(undefined1 *)(lVar6 + 0x43);
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    uStack_78 = (undefined5)*(undefined8 *)(lVar6 + 0x38);
    uStack_73 = (undefined3)((ulonglong)*(undefined8 *)(lVar6 + 0x38) >> 0x28);
    local_88 = *(undefined8 *)(lVar6 + 0x28);
    uStack_80 = *(undefined4 *)(lVar6 + 0x30);
    uStack_7c = *(undefined4 *)(lVar6 + 0x34);
    lVar7 = *(longlong *)(param_1 + 0x5a0);
    *(longlong *)(param_1 + 0x5a0) = lVar6;
    *(undefined4 *)(lVar6 + 8) = 0;
    *(undefined8 *)(lVar6 + 0xc) = 0;
    if (*(longlong *)(lVar6 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar6 + 0x28) = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x35) = 0;
    *(undefined4 *)(lVar6 + 0x40) = 0x1000000;
    if (lVar7 != 0) {
      if (*(longlong *)(lVar7 + 0x18) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar7);
    }
    local_b8 = (void *)0x0;
    local_c8 = uVar4;
    local_c4 = uVar1;
    local_c0 = uVar2;
    local_b0 = iVar5;
    if (iVar5 == 0) {
      local_ac = 0;
    }
    else {
      FUN_1446dd670(&local_b8,iVar5,0);
      memcpy(local_b8,_Src,(longlong)iVar5 * 2);
    }
    local_98 = CONCAT35(uStack_73,uStack_78);
    local_a8 = (undefined4)local_88;
    uStack_a4 = local_88._4_4_;
    uStack_a0 = uStack_80;
    uStack_9c = uStack_7c;
    local_90 = local_c9;
    local_8e = local_ca;
    local_8d = local_cb;
    local_8f = uVar3;
    FUN_1405244c0(param_1 + -0x28);
    if (_Src != (void *)0x0) {
      FUN_1400020a8(_Src);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d7126 FUN_1402d7126 body=1089 status=ok
// SIG undefined FUN_1402d7126(void)

void FUN_1402d7126(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  int iVar8;
  undefined4 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  ulonglong uVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  
  lVar5 = *(longlong *)(param_1 + 0x2e0);
  lVar10 = *(longlong *)(param_2 + 0x18);
  iVar8 = *(int *)(param_2 + 0x24);
  if (SBORROW4(0,iVar8)) {
    piVar14 = (int *)(param_2 + 4);
    if (*(int *)(param_2 + 0x20) == 0) {
      piVar14 = (int *)(param_2 + 0x10);
    }
    iVar8 = *piVar14;
    fVar17 = (float)piVar14[1];
  }
  else {
    fVar17 = 0.0;
  }
  if (lVar10 == lVar5) {
    puVar6 = (ulonglong *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x20) == 0) {
      puVar6 = (ulonglong *)(param_2 + 4);
    }
    uVar7 = *puVar6;
    uVar11 = uVar7 >> 0x20;
  }
  else {
    lVar15 = (lVar10 >> 0x20) * (longlong)(int)lVar5;
    lVar10 = (longlong)(int)lVar10 * (lVar5 >> 0x20);
    lVar5 = (lVar15 * iVar8) / lVar10;
    dVar18 = ((double)fVar17 * (double)lVar15) / (double)lVar10 +
             (((double)lVar15 * (double)iVar8) / (double)lVar10 - (double)lVar5);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar18;
    auVar19 = roundpd(auVar19,auVar19,1);
    fVar20 = (float)(dVar18 - auVar19._0_8_);
    lVar5 = (longlong)auVar19._0_8_ + lVar5;
    fVar17 = fVar20;
    if (0.99999994 <= fVar20) {
      fVar17 = 0.99999994;
    }
    if (0x7ffffffe < lVar5) {
      lVar5 = 0x7fffffff;
    }
    if (lVar5 < -0x7fffffff) {
      lVar5 = -0x80000000;
    }
    iVar8 = (int)lVar5;
    fVar17 = (float)(~-(uint)(0.0 < fVar20) & (uint)fVar20 | (uint)fVar17 & -(uint)(0.0 < fVar20)) +
             0.5 + -0.5;
    if (0.99999994 <= fVar17) {
      fVar17 = 0.99999994;
    }
    if (fVar17 <= 0.0) {
      fVar17 = 0.0;
    }
    lVar5 = *(longlong *)(param_1 + 0x2e0);
    lVar10 = *(longlong *)(param_2 + 0x18);
    puVar6 = (ulonglong *)(param_2 + 0x10);
    if (*(int *)(param_2 + 0x20) == 0) {
      puVar6 = (ulonglong *)(param_2 + 4);
    }
    uVar7 = *puVar6;
    uVar11 = uVar7 >> 0x20;
    if (lVar10 != lVar5) {
      lVar15 = (lVar10 >> 0x20) * (longlong)(int)lVar5;
      lVar10 = (longlong)(int)lVar10 * (lVar5 >> 0x20);
      lVar5 = (lVar15 * (int)uVar7) / lVar10;
      dVar18 = ((double)(float)(uVar7 >> 0x20) * (double)lVar15) / (double)lVar10 +
               (((double)lVar15 * (double)(int)uVar7) / (double)lVar10 - (double)lVar5);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = dVar18;
      auVar19 = roundpd(auVar22,auVar22,1);
      uVar11 = (longlong)auVar19._0_8_ + lVar5;
      fVar21 = (float)(dVar18 - auVar19._0_8_);
      fVar20 = fVar21;
      if (0.99999994 <= fVar21) {
        fVar20 = 0.99999994;
      }
      if (0x7ffffffe < (longlong)uVar11) {
        uVar11 = 0x7fffffff;
      }
      uVar7 = 0xffffffff80000000;
      if (-0x80000000 < (longlong)uVar11) {
        uVar7 = uVar11;
      }
      fVar20 = (float)(~-(uint)(0.0 < fVar21) & (uint)fVar21 | (uint)fVar20 & -(uint)(0.0 < fVar21))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar20) {
        fVar20 = 0.99999994;
      }
      if (fVar20 <= 0.0) {
        fVar20 = 0.0;
      }
      uVar11 = (ulonglong)(uint)fVar20;
    }
  }
  iVar1 = *(int *)(param_1 + 0x3e4);
  *(int *)(param_1 + 0x3e4) = iVar1 + 1;
  uVar13 = (ulonglong)*(int *)(param_1 + 0x3d8);
  if ((longlong)uVar13 < 1) {
    *(int *)(param_1 + 0x3e4) = iVar1;
  }
  else {
    bVar12 = false;
    do {
      lVar5 = uVar13 * 0x10 + -8;
      uVar16 = uVar13;
      while (((lVar10 = *(longlong *)(param_1 + 0x3d0), *(int *)(lVar10 + lVar5) != 0 &&
              (plVar2 = *(longlong **)(lVar10 + -8 + lVar5), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))
                                (plVar2,param_1 + -0x28,CONCAT44(fVar17,iVar8),
                                 uVar7 & 0xffffffff | uVar11 << 0x20), cVar4 != '\0'))) {
        lVar5 = lVar5 + -0x10;
        bVar3 = uVar16 < 2;
        uVar16 = uVar16 - 1;
        if (bVar3) {
          *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + -1;
          if (bVar12) goto LAB_1402d7558;
          goto LAB_1402d73da;
        }
      }
      uVar13 = uVar16 - 1;
      bVar12 = true;
    } while (1 < uVar16);
    *(int *)(param_1 + 0x3e4) = *(int *)(param_1 + 0x3e4) + -1;
LAB_1402d7558:
    FUN_14474d06a((longlong *)(param_1 + 0x3d0),0);
  }
LAB_1402d73da:
  lVar5 = *(longlong *)(param_1 + 0x438);
  iVar8 = *(int *)(param_1 + 0x440);
  if ((longlong)iVar8 == 0) {
    uVar9 = 0;
  }
  else {
    lVar10 = 0;
    do {
      if ((*(int *)(lVar5 + 8 + lVar10) != 0) && (*(longlong **)(lVar5 + lVar10) != (longlong *)0x0)
         ) {
        (**(code **)(**(longlong **)(lVar5 + lVar10) + 0x60))();
      }
      lVar10 = lVar10 + 0x10;
    } while ((longlong)iVar8 * 0x10 != lVar10);
    uVar9 = *(undefined4 *)(param_1 + 0x440);
    lVar5 = *(longlong *)(param_1 + 0x438);
  }
  iVar8 = *(int *)(param_1 + 0x444);
  FUN_144959b6a(lVar5,uVar9);
  *(undefined4 *)(param_1 + 0x440) = 0;
  if ((iVar8 < 0) && (*(int *)(param_1 + 0x444) != 0)) {
    FUN_145947f4c(param_1 + 0x438,0);
    return;
  }
  return;
}



// FUNCTION 1402d7568 FUN_1402d7568 body=277 status=ok
// SIG undefined FUN_1402d7568(void)

undefined8 FUN_1402d7568(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1402d7677;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1402d7677;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1402d7677:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1402d7625;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1402d7625;
    }
  }
  uVar6 = 0;
LAB_1402d7625:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d767e FUN_1402d767e body=65 status=ok
// SIG undefined FUN_1402d767e(void)

void FUN_1402d767e(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1402d76c0();
  if (cVar1 != '\0') {
    *(undefined8 *)(param_1 + 0x38c) = *(undefined8 *)(param_1 + 0x31c);
    *(undefined1 *)(param_1 + 0x394) = *(undefined1 *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_1 + 0x2ac);
  }
  return;
}



// FUNCTION 1402d76c0 FUN_1402d76c0 body=540 status=ok
// SIG undefined FUN_1402d76c0(void)

undefined4 FUN_1402d76c0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  if (DAT_14cac9ca8 == 0) {
    local_40 = &local_20;
    local_20 = FUN_141030f22;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1478c0a72;
    local_50 = (code *)&LAB_1417b2375;
    local_58 = L"Engine";
    local_60 = 0x1000000000;
    local_68 = 0x10000004;
    local_70 = 8;
    local_78 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  lVar5 = DAT_14cac9ca8;
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
  lVar4 = *(longlong *)(param_1 + 0x20);
  if (lVar4 != 0) {
    iVar1 = *(int *)(lVar5 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar1) ||
         (lVar6 = lVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar5 + 0x30)) {
        lVar6 = 0;
      }
    } while ((lVar6 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    if ((lVar6 != 0) &&
       ((*(char *)(lVar6 + 0x178) == '\x03' && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)))) {
      uVar2 = *(uint *)(param_1 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      uVar3 = CONCAT31((int3)(*(uint *)(lVar5 + 8) >> 8),(*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0);
      goto LAB_1402d773a;
    }
  }
  uVar3 = 0;
LAB_1402d773a:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d78de FUN_1402d78de body=40 status=ok
// SIG undefined FUN_1402d78de(void)

void FUN_1402d78de(longlong param_1)

{
  FUN_14010ed74();
  FUN_1402d7906(param_1 + 0x858,param_1 + 0x840);
  return;
}



// FUNCTION 1402d7906 FUN_1402d7906 body=117 status=ok
// SIG undefined FUN_1402d7906(void)

void FUN_1402d7906(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      do {
        if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_1402d795d;
        lVar1 = *(longlong *)(lVar1 + 0x20);
      } while (lVar1 != 0);
      FUN_1402d797c(&local_30,param_2);
      *(undefined4 *)(param_1 + 0x78) = local_30;
      *(undefined4 *)(param_1 + 0x7c) = uStack_2c;
      *(undefined4 *)(param_1 + 0x80) = uStack_28;
      *(undefined4 *)(param_1 + 0x84) = uStack_24;
    }
  }
LAB_1402d795d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d797c FUN_1402d797c body=204 status=ok
// SIG undefined FUN_1402d797c(void)

uint * FUN_1402d797c(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 1402d7a48 FUN_1402d7a48 body=281 status=ok
// SIG undefined FUN_1402d7a48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402d7a48(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar1 = *(int *)(param_1 + 9);
  if (*(int *)(param_1 + 1) != iVar1) {
    puVar5 = (undefined *)param_1[10];
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9eaef0) {
      FUN_144b3d300(&DAT_14c9eaef0);
      if (DAT_14c9eaef0 == -1) {
        memset(&DAT_14c9eab60,0,0x380);
        _DAT_14c9eadfc = 0x3f800000;
        _DAT_14c9eae0c = 0x3f800000;
        _DAT_14c9eae7c = 0x3f800000;
        _DAT_14c9eaee0 = 0;
        uRam000000014c9eaee4 = 0;
        uRam000000014c9eaee8 = 0;
        uRam000000014c9eaeec = 0x3f800000;
        _Init_thread_footer(&DAT_14c9eaef0);
      }
    }
    if (iVar1 == 0) {
      puVar5 = &DAT_14c9eab60;
      lVar2 = 0x390;
      iVar4 = 1;
    }
    else {
      lVar2 = (longlong)iVar1 * 0x390;
      iVar4 = iVar1;
    }
    uVar3 = FUN_144942e63(param_2,L"InstanceCulling.CullingViews",0x390,iVar4,puVar5,lVar2,
                          iVar1 == 0);
    *param_1 = uVar3;
    *(int *)(param_1 + 1) = iVar1;
  }
  return;
}



// FUNCTION 1402d7b62 FUN_1402d7b62 body=501 status=ok
// SIG undefined FUN_1402d7b62(void)

void FUN_1402d7b62(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  uint uVar9;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 **local_a8;
  longlong local_98;
  longlong lStack_90;
  uint local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_78;
  undefined1 local_77;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_1 + 0x48);
  local_77 = *(undefined1 *)(lVar2 + 0x78);
  local_7c = *(undefined4 *)(param_1 + 0x58);
  lVar4 = *param_2;
  lStack_90 = param_2[1];
  local_84 = 0x3f80000000000000;
  local_78 = 0;
  uVar5 = (uint)lStack_90;
  uVar9 = 0;
  local_98 = lVar4;
  if ((uint)lStack_90 == 0) {
LAB_1402d7c0f:
    local_88 = uVar9;
    if (uVar9 < (uint)lStack_90) {
      do {
        uVar9 = local_88;
        puVar1 = (undefined4 *)((longlong)(int)local_88 * 0x38 + lVar4);
        if (*(char *)(lVar4 + 0x20 + (longlong)(int)local_88 * 0x38) == '\x04') {
          local_a8 = *(undefined8 ***)(puVar1 + 4);
          local_b8 = *puVar1;
          uStack_b4 = puVar1[1];
          uStack_b0 = puVar1[2];
          uStack_ac = puVar1[3];
        }
        else {
          FUN_1400b56fe(local_70,puVar1,4);
          ppppuVar8 = local_70;
          if (local_50 == 0) {
            ppppuVar8 = (undefined8 ****)&DAT_14c9ab228;
          }
          local_a8 = ppppuVar8[2];
          local_b8 = *(undefined4 *)ppppuVar8;
          uStack_b4 = *(undefined4 *)((longlong)ppppuVar8 + 4);
          uStack_b0 = *(undefined4 *)(ppppuVar8 + 1);
          uStack_ac = *(undefined4 *)((longlong)ppppuVar8 + 0xc);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar8 = local_70;
            if (0x18 < local_58) {
              ppppuVar8 = (undefined8 ****)local_70[0];
            }
            (*pcVar3)(ppppuVar8);
          }
          if (0x18 < local_58) {
            FUN_1400020a8(local_70[0]);
          }
        }
        cVar6 = FUN_14052de2e(param_1 + 0x60,&local_b8);
        FUN_1402d7d58(&local_98,*(char *)(lVar2 + 0xa1) == cVar6);
        local_88 = uVar9 + 1;
        if ((local_88 < uVar5) &&
           ((*(byte *)(lVar4 + 0x34 + (longlong)(int)local_88 * 0x38) & 1) != 0)) {
          uVar9 = uVar9 + 2;
          do {
            local_88 = uVar5;
            if (uVar5 == uVar9) break;
            lVar7 = (longlong)(int)uVar9;
            local_88 = uVar9;
            uVar9 = uVar9 + 1;
          } while ((*(byte *)(lVar4 + 0x34 + lVar7 * 0x38) & 1) != 0);
        }
      } while (local_88 < uVar5);
    }
  }
  else {
    do {
      if ((*(byte *)(lVar4 + 0x34 + (longlong)(int)uVar9 * 0x38) & 1) == 0) goto LAB_1402d7c0f;
      uVar9 = uVar9 + 1;
    } while ((uint)lStack_90 != uVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402d7d58 FUN_1402d7d58 body=211 status=ok
// SIG undefined FUN_1402d7d58(void)

void FUN_1402d7d58(longlong *param_1,char param_2)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  
  if (param_2 == '\0') {
    fVar5 = -1.0;
  }
  else {
    fVar5 = 1.0;
  }
  lVar3 = (longlong)(int)param_1[2] * 0x38 + *param_1;
  cVar2 = *(char *)((longlong)param_1 + 0x21);
  if (((byte)(cVar2 - 1U) < 2) &&
     ((fVar5 < *(float *)((longlong)param_1 + 0x14) ||
      (*(float *)(param_1 + 3) <= fVar5 && fVar5 != *(float *)(param_1 + 3))))) {
LAB_1402d7dec:
    *(byte *)(lVar3 + 0x34) = *(byte *)(lVar3 + 0x34) | 1;
    return;
  }
  fVar6 = 0.0;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x03') {
      if ((char)param_1[4] == '\x01') {
        fVar6 = *(float *)((longlong)param_1 + 0x14);
        bVar4 = 1;
        if (fVar5 < *(float *)(param_1 + 3)) {
          fVar5 = fVar6;
        }
      }
      else {
        fVar6 = *(float *)((longlong)param_1 + 0x14);
        if (fVar6 < fVar5) {
          fVar5 = *(float *)(param_1 + 3);
        }
        bVar4 = 0;
      }
    }
    else {
      fVar6 = *(float *)((longlong)param_1 + 0x14);
      bVar4 = *(byte *)(param_1 + 4);
    }
    fVar1 = *(float *)(param_1 + 3);
    if (fVar1 <= fVar5) {
      fVar5 = fVar1;
    }
    if (fVar5 <= fVar6) {
      fVar5 = fVar6;
    }
    fVar6 = (fVar5 - fVar6) / (fVar1 - fVar6);
    if ((bVar4 & 1) != 0) {
      fVar6 = 1.0 - fVar6;
    }
    fVar6 = fVar6 * *(float *)((longlong)param_1 + 0x1c);
    if ((fVar6 == -3.4028235e+38) && (!NAN(fVar6))) goto LAB_1402d7dec;
  }
  *(float *)(lVar3 + 0x30) = fVar6 + *(float *)(lVar3 + 0x30);
  return;
}



// FUNCTION 1402d7e2c FUN_1402d7e2c body=1814 status=ok
// SIG undefined FUN_1402d7e2c(void)

void FUN_1402d7e2c(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  float *pfVar10;
  undefined1 auStack_428 [32];
  undefined ***local_408;
  uint local_400;
  uint local_3ec;
  longlong local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined2 local_3c8;
  undefined6 uStack_3c6;
  int local_3c0;
  longlong *local_3b0;
  undefined **local_3a8;
  undefined2 local_3a0;
  undefined1 local_39e;
  uint local_39c;
  uint local_398;
  undefined8 local_390;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  float local_378;
  float local_374;
  undefined *local_370;
  undefined8 local_368;
  undefined8 local_360;
  longlong *local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined2 local_344;
  undefined7 local_340;
  undefined4 uStack_339;
  longlong local_330;
  longlong *local_328;
  float local_320;
  float local_31c;
  undefined1 local_318 [288];
  undefined1 *local_1f8;
  ulonglong local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  longlong *plStack_1d8;
  longlong local_1d0;
  ulonglong uStack_1c8;
  float local_1c0;
  float local_1bc;
  undefined1 local_1b8 [288];
  undefined1 *local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined8 local_80;
  longlong *plStack_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_428;
  uVar9 = 0;
  if (0 < (int)param_4) {
    uVar9 = param_4;
  }
  if (param_5 != 10) {
    local_408 = (undefined ***)0x0;
    local_400 = uVar9;
    FUN_1402c1d72(param_1,param_2,param_3,0);
    goto LAB_1402d8346;
  }
  if ((int)uVar9 < *(int *)(param_1 + 0x318)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x310) + (ulonglong)uVar9 * 0x10);
    plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x310) + 8 + (ulonglong)uVar9 * 0x10);
    if (plVar4 == (longlong *)0x0) {
      if (lVar3 == 0) goto LAB_1402d83f4;
      local_328 = (longlong *)0x0;
      local_330 = lVar3;
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      if (lVar3 != 0) {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        local_330 = lVar3;
        local_328 = plVar4;
      }
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
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
      if (lVar3 == 0) goto LAB_1402d83f4;
    }
  }
  else {
LAB_1402d83f4:
    FUN_141370954(param_1,&local_330,uVar9,0);
  }
  local_3e0 = param_2;
  local_3d8 = param_3;
  if ((int)param_4 < 1) {
    (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_3c8);
  }
  else {
    local_3c8 = 0;
  }
  plVar4 = DAT_14c966e90;
  uVar8 = DAT_14c966e80;
  local_3d0 = DAT_14c966e88;
  if (DAT_14c966e90 != (longlong *)0x0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
    UNLOCK();
  }
  puVar7 = &DAT_14c98e4e0;
  if ((int)param_4 < 1) {
    puVar7 = (undefined *)(param_1 + 0x150);
  }
  pfVar10 = &local_1c0;
  local_3e8 = param_1;
  FUN_1400bbf02(local_330,pfVar10,10);
  fVar5 = local_1c0;
  FUN_14007d9be(local_330,&local_320,10);
  local_378 = local_320 - fVar5;
  local_374 = local_31c - local_1bc;
  local_3a0 = local_3c8;
  local_39e = 0;
  local_390 = 0;
  local_3a8 = &PTR_FUN_149eda650;
  local_388 = local_320;
  local_384 = local_31c;
  local_380 = fVar5;
  local_37c = local_1bc;
  local_368 = uVar8;
  local_360 = local_3d0;
  local_358 = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_350 = 10;
  local_348 = 0x3f800000;
  local_344 = 0;
  local_340 = 0;
  uStack_339 = 0;
  local_3ec = uVar9;
  local_39c = uVar9;
  local_398 = uVar9;
  local_370 = puVar7;
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
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  local_1c0 = (float)CONCAT31(local_1c0._1_3_,DAT_14c96b238);
  local_98 = (undefined1 *)0x0;
  local_90 = 0x400000000;
  local_88 = 0;
  local_80 = 0;
  plStack_78 = (longlong *)0x0;
  local_70 = 0;
  uStack_68 = 0;
  FUN_1402d8544(local_330,&local_3c8,10);
  if (local_3c0 < 1) {
    pfVar10 = (float *)0x0;
    param_3 = local_3d8;
    uVar8 = local_3e0;
    uVar9 = local_3ec;
  }
  else {
    local_320 = (float)CONCAT31(local_320._1_3_,DAT_14c96b238);
    local_1f8 = (undefined1 *)0x0;
    local_1f0 = 0x400000000;
    local_1e8 = 0;
    local_1e0 = 0;
    plStack_1d8 = (longlong *)0x0;
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_408 = (undefined ***)CONCAT71(local_408._1_7_,DAT_14c96b238);
    FUN_1404dd558(&local_3c8,&local_320,0,0);
    local_1c0 = (float)CONCAT31(local_1c0._1_3_,local_320._0_1_);
    FUN_1400e223c(local_1b8,local_318);
    plVar1 = plStack_78;
    plVar4 = plStack_1d8;
    local_88 = local_1e8;
    local_80 = local_1e0;
    local_1e0 = 0;
    if (plStack_1d8 != plStack_78) {
      plStack_1d8 = (longlong *)0x0;
      plStack_78 = plVar4;
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar1 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    FUN_1400e21ec(&local_70,&local_1d0);
    FUN_1447fa2ac(local_1d0,uStack_1c8 & 0xffffffff);
    if (local_1d0 != 0) {
      FUN_1400020a8();
    }
    plVar4 = plStack_1d8;
    param_3 = local_3d8;
    uVar8 = local_3e0;
    uVar9 = local_3ec;
    if (plStack_1d8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_1d8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_1d8)(plStack_1d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    puVar6 = local_318;
    if (local_1f8 != (undefined1 *)0x0) {
      puVar6 = local_1f8;
    }
    FUN_1447157bd(puVar6,local_1f0 & 0xffffffff);
    if (local_1f8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  local_408 = &local_3a8;
  local_400 = uVar9;
  FUN_1402c1d72(local_3e8,uVar8,param_3,pfVar10);
  if (local_3b0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_3b0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_3b0 + 0x10))();
    }
  }
  FUN_1447de57f(CONCAT62(uStack_3c6,local_3c8),local_3c0);
  if (CONCAT62(uStack_3c6,local_3c8) != 0) {
    FUN_1400020a8();
  }
  FUN_1447fa2ac(local_70,uStack_68 & 0xffffffff);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  plVar4 = plStack_78;
  if (plStack_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_78)(plStack_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  puVar6 = local_98;
  if (local_98 == (undefined1 *)0x0) {
    puVar6 = local_1b8;
  }
  FUN_1447157bd(puVar6,local_90 & 0xffffffff);
  if (local_98 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  plVar4 = local_358;
  local_3a8 = &PTR_FUN_149eda650;
  if (local_358 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_358 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_358)(local_358);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  plVar4 = local_328;
  if (local_328 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_328 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_328)(local_328);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
LAB_1402d8346:
  FUN_14493db24(param_3);
  if ((local_60 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402d8544 FUN_1402d8544 body=362 status=ok
// SIG undefined FUN_1402d8544(void)

undefined8 * FUN_1402d8544(longlong param_1,undefined8 *param_2,uint param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_1a8 [32];
  undefined1 local_188 [296];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_1 + 0x210) != *(int *)(param_1 + 0x23c)) {
    lVar2 = param_1 + 0x240;
    if (*(longlong *)(param_1 + 0x248) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x248);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x250) - 1U & param_3) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x208) + (longlong)iVar3 * 0x30;
        if (*(uint *)(*(longlong *)(param_1 + 0x208) + (longlong)iVar3 * 0x30) == param_3) {
          if (lVar2 != 0) {
            *param_2 = 0;
            iVar3 = *(int *)(lVar2 + 0x10);
            uVar1 = *(undefined8 *)(lVar2 + 8);
            *(int *)(param_2 + 1) = iVar3;
            if (iVar3 == 0) {
              *(undefined4 *)((longlong)param_2 + 0xc) = 0;
            }
            else {
              FUN_1402d86b0(param_2,iVar3,0);
              FUN_14494310f(*param_2,uVar1,iVar3);
            }
            param_2[2] = *(undefined8 *)(lVar2 + 0x18);
            lVar2 = *(longlong *)(lVar2 + 0x20);
            param_2[3] = lVar2;
            if (lVar2 != 0) {
              LOCK();
              *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
              UNLOCK();
            }
            goto LAB_1402d8616;
          }
          break;
        }
        iVar3 = *(int *)(lVar2 + 0x28);
      } while (iVar3 != -1);
    }
  }
  local_188[0] = DAT_14c96b238;
  local_60 = 0;
  local_58 = 0x400000000;
  local_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1403d040a(param_2,local_188);
  FUN_1447fa21a(local_188);
LAB_1402d8616:
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d86b0 FUN_1402d86b0 body=228 status=ok
// SIG undefined FUN_1402d86b0(void)

void FUN_1402d86b0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1402d8794 FUN_1402d8794 body=467 status=ok
// SIG undefined FUN_1402d8794(void)

undefined8
FUN_1402d8794(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  undefined4 uStack_4c;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar7 = *(longlong **)(param_2 + 0x10);
  if (plVar7 == (longlong *)0x0) {
LAB_1402d8858:
    uVar6 = 1;
  }
  else {
    do {
      if (plVar7[5] != 0) {
        lVar5 = *(longlong *)(plVar7[5] + 0x30);
        if ((((lVar5 != 0) && (*(longlong *)(lVar5 + 0x360) != 0)) &&
            (lVar5 = FUN_1400f6f32(), lVar5 != 0)) &&
           (lVar5 = *(longlong *)(lVar5 + 0x68), lVar5 != 0)) {
          uVar4 = FUN_1402d8968(lVar5,param_2 + 0x18);
          if ((*(uint *)(param_1 + 0x1e) <= uVar4) &&
             (((char)param_1[0x1f] != '\x01' ||
              ((lVar5 = FUN_140d1732e(lVar5,param_2 + 0x18), lVar5 != 0 &&
               ((cVar3 = FUN_14016169c(lVar5,&local_50), cVar3 == '\0' || (local_50 == 0)))))))) {
            local_58 = param_5;
            cVar3 = (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3,param_4);
            if (cVar3 == '\0') {
              local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffffffffff00);
              FUN_1401412e0(param_4,&local_50,0,0);
              if (param_5 != &DAT_14c9a1308) {
                if (local_48 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_48 + 1) = (int)local_48[1] + 1;
                  UNLOCK();
                }
                plVar7 = (longlong *)param_5[1];
                *param_5 = CONCAT44(uStack_4c,local_50);
                param_5[1] = local_48;
                if (plVar7 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar7 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar7)(plVar7);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar7 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                    }
                  }
                }
              }
              if (local_48 != (longlong *)0x0) {
                LOCK();
                plVar7 = local_48 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)*local_48)(local_48);
                  LOCK();
                  piVar2 = (int *)((longlong)local_48 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*local_48 + 0x10))(local_48);
                  }
                }
              }
            }
            goto LAB_1402d8858;
          }
        }
        uVar6 = 0;
        break;
      }
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x2f0))();
      uVar6 = 0;
    } while (plVar7 != (longlong *)0x0);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1402d8968 FUN_1402d8968 body=80 status=ok
// SIG undefined FUN_1402d8968(void)

undefined4 FUN_1402d8968(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  uVar1 = *param_2;
  uVar2 = 0;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar3 != 0) && (uVar2 = 0, *(uint *)(lVar3 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar3 + 4)) {
        do {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar3 + 2) * 8);
        } while (-1 < *(short *)(lVar3 + 4));
        if (lVar3 == 0) {
          return 0;
        }
      }
      uVar2 = *(undefined4 *)(lVar3 + 0x118);
    }
  }
  return uVar2;
}



// FUNCTION 1402d89b8 FUN_1402d89b8 body=3516 status=ok
// SIG undefined FUN_1402d89b8(void)

undefined4
FUN_1402d89b8(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int *piVar1;
  ulonglong uVar2;
  wchar_t *pwVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  char *pcVar9;
  uint *puVar10;
  undefined8 *puVar11;
  size_t sVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  void *pvVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  void *_Src;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  longlong *plVar29;
  undefined1 auStack_268 [32];
  undefined1 local_248;
  undefined4 local_234;
  char *local_230;
  uint local_228;
  int local_224;
  ulonglong local_220;
  ulonglong local_218;
  uint *local_210;
  ulonglong local_208;
  undefined8 local_200;
  wchar_t *local_1f8;
  uint local_1f0;
  void *local_1e8;
  uint local_1e0;
  byte *local_1d8;
  longlong *plStack_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  longlong *local_1b8;
  longlong *plStack_1b0;
  longlong local_1a8;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  longlong *local_188;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 local_164;
  longlong local_108;
  undefined8 local_100;
  undefined4 local_f8;
  longlong local_e8;
  undefined8 uStack_e0;
  uint local_d8 [4];
  uint *local_c8;
  int local_c0;
  undefined8 local_bc;
  int local_b4;
  longlong local_a8;
  int local_a0;
  undefined1 local_90 [24];
  longlong local_78;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_268;
  lVar7 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar7 != 0) && (lVar7 = FUN_1400f6f32(lVar7), lVar7 != 0)) &&
      (*(longlong *)(lVar7 + 0x68) != 0)) &&
     (plVar8 = (longlong *)FUN_140d71416(*(longlong *)(lVar7 + 0x68),param_2 + 0x18),
     plVar8 != (longlong *)0x0)) {
    pcVar9 = (char *)(**(code **)(*plVar8 + 0x7e0))(plVar8,param_1 + 0x20);
    local_234 = (undefined4)CONCAT71((int7)((ulonglong)pcVar9 >> 8),1);
    if (pcVar9 == (char *)0x0) goto LAB_1402d9280;
    if (pcVar9[0x90] == '\x01') {
      if (*pcVar9 == '\x01') {
        FUN_14009b010(param_5,3,0);
        local_90[0] = 1;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14cb8d728);
        local_e8 = DAT_14cb8d720;
        FUN_1448075d0(&local_188);
        FUN_1418b3246(param_5,&local_188,local_90);
        if (local_170 != 0) {
          FUN_1400020a8();
        }
      }
      puVar25 = (uint *)(pcVar9 + 0x48);
      uVar28 = *(uint *)(pcVar9 + 0x60);
      if (uVar28 == 0) {
        uVar23 = 1;
        uVar24 = 0;
        uVar4 = 0;
        iVar22 = 0;
      }
      else {
        puVar10 = *(uint **)(pcVar9 + 0x58);
        if (*(uint **)(pcVar9 + 0x58) == (uint *)0x0) {
          puVar10 = puVar25;
        }
        uVar4 = *puVar10;
        if (uVar4 == 0) {
          iVar22 = uVar28 + 0x1e;
          if (-1 < (int)(uVar28 - 1)) {
            iVar22 = uVar28 - 1;
          }
          uVar24 = 0;
          uVar23 = (ulonglong)(uint)(iVar22 >> 5);
          if (iVar22 >> 5 < 1) {
            uVar23 = uVar24;
          }
          iVar22 = 0;
          do {
            if (uVar23 == uVar24) goto LAB_1402d9280;
            iVar22 = iVar22 + 0x20;
            uVar4 = puVar10[uVar24 + 1];
            uVar24 = uVar24 + 1;
          } while (uVar4 == 0);
        }
        else {
          uVar24 = 0;
          iVar22 = 0;
        }
        uVar23 = (ulonglong)(-uVar4 & uVar4);
        uVar2 = uVar23 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar4 = (iVar22 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
        if ((int)uVar28 <= (int)uVar4) {
          uVar4 = uVar28;
        }
      }
      local_210 = puVar25;
      if (uVar4 != uVar28) {
        uVar20 = 0xffffffff;
        local_230 = pcVar9;
        local_220 = (ulonglong)uVar28;
        do {
          lVar7 = *(longlong *)(local_230 + 0x38);
          local_228 = uVar20;
          local_224 = iVar22;
          local_218 = uVar23;
          local_208 = uVar24;
          FUN_1447a97f4(local_90,lVar7 + (longlong)(int)uVar4 * 0x38);
          lVar7 = *(longlong *)(lVar7 + 0x28 + (longlong)(int)uVar4 * 0x38);
          local_68 = lVar7;
          if (lVar7 != 0) {
            local_1d8 = (byte *)0x0;
            plStack_1d0 = (longlong *)0x0;
            FUN_14009b010(&local_1d8,3,0);
            local_c8 = (uint *)0x0;
            local_c0 = 0;
            local_e8 = 0;
            uStack_e0 = 0;
            local_bc = 0xffffffff00000080;
            local_b4 = 0;
            local_a8 = 0;
            local_a0 = 0;
            lVar27 = *(longlong *)(lVar7 + 0x28);
            if (lVar27 == 0) {
LAB_1402d8bd6:
              iVar22 = *(int *)(lVar7 + 0x78);
              if (iVar22 == 0) {
                uVar23 = 1;
                uVar24 = 0;
                iVar13 = 0;
                iVar21 = 0;
              }
              else {
                puVar25 = *(uint **)(lVar7 + 0x70);
                if (*(uint **)(lVar7 + 0x70) == (uint *)0x0) {
                  puVar25 = (uint *)(lVar7 + 0x60);
                }
                uVar28 = *puVar25;
                if (uVar28 == 0) {
                  iVar13 = iVar22 + 0x1e;
                  if (-1 < iVar22 + -1) {
                    iVar13 = iVar22 + -1;
                  }
                  uVar24 = 0;
                  uVar23 = (ulonglong)(uint)(iVar13 >> 5);
                  if (iVar13 >> 5 < 1) {
                    uVar23 = uVar24;
                  }
                  iVar21 = 0;
                  do {
                    if (uVar23 == uVar24) goto LAB_1402d8d5a;
                    iVar21 = iVar21 + 0x20;
                    uVar28 = puVar25[uVar24 + 1];
                    uVar24 = uVar24 + 1;
                  } while (uVar28 == 0);
                }
                else {
                  uVar24 = 0;
                  iVar21 = 0;
                }
                uVar23 = (ulonglong)(-uVar28 & uVar28);
                uVar2 = uVar23 * 2 + 1;
                lVar27 = 0x3f;
                if (uVar2 != 0) {
                  for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                iVar13 = (iVar21 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                if (iVar22 <= iVar13) {
                  iVar13 = iVar22;
                }
              }
              if (iVar13 != iVar22) {
                uVar28 = 0xffffffff;
                iVar5 = iVar22;
                do {
                  lVar27 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + (longlong)iVar13 * 0x10);
                  if (lVar27 != 0) {
                    puVar18 = *(undefined4 **)(lVar27 + 8);
                    if (puVar18 == (undefined4 *)0x0) {
                      puVar18 = &DAT_14c9485f0;
                    }
                    FUN_1447a97f4(&local_188,puVar18);
                    FUN_140128f82(&local_e8,&local_1b8,&local_188,0);
                    if (local_170 != 0) {
                      FUN_1400020a8();
                    }
                    iVar5 = *(int *)(lVar7 + 0x78);
                  }
                  uVar28 = uVar28 & ~(uint)uVar23;
                  puVar25 = *(uint **)(lVar7 + 0x70);
                  if (*(uint **)(lVar7 + 0x70) == (uint *)0x0) {
                    puVar25 = (uint *)(lVar7 + 0x60);
                  }
                  iVar13 = (int)uVar24;
                  lVar27 = (longlong)iVar13;
                  uVar4 = puVar25[lVar27] & uVar28;
                  if (uVar4 == 0) {
                    iVar14 = iVar5 + 0x1e;
                    if (-1 < iVar5 + -1) {
                      iVar14 = iVar5 + -1;
                    }
                    iVar14 = iVar14 >> 5;
                    iVar21 = iVar21 + 0x20;
                    iVar15 = iVar14;
                    if (iVar14 < iVar13) {
                      iVar15 = iVar13;
                    }
                    if (iVar13 < iVar14) {
                      lVar26 = 0;
                      do {
                        uVar4 = puVar25[lVar27 + lVar26 + 1];
                        if (uVar4 != 0) {
                          uVar24 = (ulonglong)(iVar13 + (int)lVar26 + 1);
                          uVar28 = 0xffffffff;
                          goto LAB_1402d8d22;
                        }
                        iVar21 = iVar21 + 0x20;
                        lVar26 = lVar26 + 1;
                      } while (iVar15 - lVar27 != lVar26);
                      uVar28 = 0xffffffff;
                      iVar13 = iVar15;
                    }
                    uVar24 = (ulonglong)(iVar13 + 1);
                    iVar13 = iVar5;
                  }
                  else {
LAB_1402d8d22:
                    uVar23 = (ulonglong)(-uVar4 & uVar4);
                    uVar2 = uVar23 * 2 + 1;
                    lVar27 = 0x3f;
                    if (uVar2 != 0) {
                      for (; uVar2 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                      }
                    }
                    iVar13 = (iVar21 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                    if (iVar5 <= iVar13) {
                      iVar13 = iVar5;
                    }
                  }
                } while (iVar13 != iVar22);
              }
LAB_1402d8d5a:
              uVar28 = (*(int *)(lVar7 + 0xa8) - *(int *)(lVar7 + 0xd4)) +
                       ((int)uStack_e0 - local_b4);
              if ((uint)((int)uStack_e0 - local_b4) < uVar28) {
                if ((int)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456acd4b((longlong)(int)uVar28);
                }
                FUN_140129366(&local_e8,uVar28);
                iVar22 = 1;
                if (3 < uVar28) {
                  uVar28 = (uVar28 | 1) + 0xe;
                  iVar22 = 0x1f;
                  if (uVar28 != 0) {
                    for (; uVar28 >> iVar22 == 0; iVar22 = iVar22 + -1) {
                    }
                  }
                  iVar22 = 1 << ((byte)iVar22 & 0x1f);
                }
                if ((local_a0 == 0) || (local_a0 < iVar22)) {
                  local_a0 = iVar22;
                  FUN_140129534();
                }
              }
              plVar8 = (longlong *)(lVar7 + 0xb0);
              local_1b8 = (longlong *)&DAT_100000000;
              local_1a8 = 0xffffffff;
              local_1a0 = 0;
              iVar22 = 0;
              plStack_1b0 = plVar8;
              if (*(int *)(lVar7 + 200) != 0) {
                FUN_1449c0562(&local_1b8);
                iVar22 = *(int *)(lVar7 + 200);
              }
              plVar29 = (longlong *)(lVar7 + 0xa0);
              local_170 = local_1a8;
              lVar7 = local_170;
              local_168 = local_1a0;
              local_164 = uStack_19c;
              uStack_180 = local_1b8;
              local_178 = plStack_1b0;
              local_170._4_4_ = (int)((ulonglong)local_1a8 >> 0x20);
              iVar13 = local_170._4_4_;
              local_188 = plVar29;
              if ((local_170._4_4_ != iVar22) || (local_170 = lVar7, plStack_1b0 != plVar8)) {
                do {
                  do {
                    local_170 = lVar7;
                    FUN_140128f82(&local_e8,&local_1b8,(longlong)iVar13 * 0x30 + *local_188,0);
                    local_170 = CONCAT44(local_170._4_4_,(uint)local_170 & ~uStack_180._4_4_);
                    FUN_1449c0562(&uStack_180);
                    iVar13 = local_170._4_4_;
                    lVar7 = local_170;
                  } while (local_170._4_4_ != iVar22);
                } while ((local_178 != plVar8) || (local_188 != plVar29));
              }
              if ((int)uStack_e0 != local_b4) {
                local_1b8 = (longlong *)0x0;
                plStack_1b0 = (longlong *)0x0;
                uVar24 = 0;
                FUN_14009b010(&local_1b8,2,0);
                iVar22 = local_c0;
                if (local_c0 == 0) {
                  uVar23 = 1;
                  iVar13 = 0;
                  iVar21 = 0;
                }
                else {
                  puVar25 = local_c8;
                  if (local_c8 == (uint *)0x0) {
                    puVar25 = local_d8;
                  }
                  uVar28 = *puVar25;
                  if (uVar28 == 0) {
                    iVar13 = local_c0 + 0x1e;
                    if (-1 < local_c0 + -1) {
                      iVar13 = local_c0 + -1;
                    }
                    uVar24 = 0;
                    uVar23 = (ulonglong)(uint)(iVar13 >> 5);
                    if (iVar13 >> 5 < 1) {
                      uVar23 = uVar24;
                    }
                    iVar21 = 0;
                    do {
                      if (uVar23 == uVar24) goto LAB_1402d9023;
                      iVar21 = iVar21 + 0x20;
                      uVar28 = puVar25[uVar24 + 1];
                      uVar24 = uVar24 + 1;
                    } while (uVar28 == 0);
                  }
                  else {
                    uVar24 = 0;
                    iVar21 = 0;
                  }
                  uVar23 = (ulonglong)(-uVar28 & uVar28);
                  uVar2 = uVar23 * 2 + 1;
                  lVar7 = 0x3f;
                  if (uVar2 != 0) {
                    for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                    }
                  }
                  iVar13 = (iVar21 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                  if (local_c0 <= iVar13) {
                    iVar13 = local_c0;
                  }
                }
                if (iVar13 != local_c0) {
                  uVar28 = 0xffffffff;
                  do {
                    lVar7 = local_e8;
                    local_188 = (longlong *)0x0;
                    uStack_180 = (longlong *)0x0;
                    FUN_14009b010(&local_188,1,0);
                    if (local_188 != (longlong *)0x0) {
                      FUN_1402afb64(local_188,lVar7 + (longlong)iVar13 * 0x30);
                    }
                    if (local_1b8 != (longlong *)0x0) {
                      local_248 = 0;
                      FUN_140141db6(local_1b8,&local_188,0,0);
                    }
                    plVar8 = uStack_180;
                    if (uStack_180 != (longlong *)0x0) {
                      LOCK();
                      plVar29 = uStack_180 + 1;
                      *(int *)plVar29 = (int)*plVar29 + -1;
                      UNLOCK();
                      if ((int)*plVar29 == 0) {
                        (**(code **)*uStack_180)(uStack_180);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar8 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar8 + 0x10))(plVar8);
                        }
                      }
                    }
                    uVar28 = uVar28 & ~(uint)uVar23;
                    puVar25 = local_c8;
                    if (local_c8 == (uint *)0x0) {
                      puVar25 = local_d8;
                    }
                    iVar13 = (int)uVar24;
                    lVar7 = (longlong)iVar13;
                    uVar4 = puVar25[lVar7] & uVar28;
                    if (uVar4 == 0) {
                      iVar5 = local_c0 + 0x1e;
                      if (-1 < local_c0 + -1) {
                        iVar5 = local_c0 + -1;
                      }
                      iVar5 = iVar5 >> 5;
                      iVar21 = iVar21 + 0x20;
                      iVar14 = iVar5;
                      if (iVar5 < iVar13) {
                        iVar14 = iVar13;
                      }
                      if (iVar13 < iVar5) {
                        lVar27 = 0;
                        do {
                          uVar4 = puVar25[lVar7 + lVar27 + 1];
                          if (uVar4 != 0) {
                            uVar24 = (ulonglong)(iVar13 + (int)lVar27 + 1);
                            uVar28 = 0xffffffff;
                            goto LAB_1402d8ff4;
                          }
                          iVar21 = iVar21 + 0x20;
                          lVar27 = lVar27 + 1;
                        } while (iVar14 - lVar7 != lVar27);
                        uVar28 = 0xffffffff;
                        iVar13 = iVar14;
                      }
                      uVar24 = (ulonglong)(iVar13 + 1);
                      iVar13 = local_c0;
                    }
                    else {
LAB_1402d8ff4:
                      uVar23 = (ulonglong)(-uVar4 & uVar4);
                      uVar2 = uVar23 * 2 + 1;
                      lVar7 = 0x3f;
                      if (uVar2 != 0) {
                        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                        }
                      }
                      iVar13 = (iVar21 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
                      if (local_c0 <= iVar13) {
                        iVar13 = local_c0;
                      }
                    }
                  } while (iVar13 != iVar22);
                }
LAB_1402d9023:
                local_1e0 = DAT_14cb8d6f8;
                local_1e8 = DAT_14cb8d6f0;
                FUN_1448075d0(&local_188,&local_1e8);
                if (local_1d8 != (byte *)0x0) {
                  local_248 = 0;
                  FUN_14014191c(local_1d8,&local_188,&local_1b8,0);
                }
                if (local_170 != 0) {
                  FUN_1400020a8();
                }
                plVar8 = plStack_1b0;
                if (plStack_1b0 != (longlong *)0x0) {
                  LOCK();
                  plVar29 = plStack_1b0 + 1;
                  *(int *)plVar29 = (int)*plVar29 + -1;
                  UNLOCK();
                  if ((int)*plVar29 == 0) {
                    (**(code **)*plStack_1b0)(plStack_1b0);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar8 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar8 + 0x10))(plVar8);
                    }
                  }
                }
              }
              puVar11 = &DAT_14c9a1288;
              if ((local_1d8 != (byte *)0x0) && (puVar11 = &DAT_14c9a1288, (*local_1d8 & 2) != 0)) {
                puVar11 = (undefined8 *)(*(longlong *)(local_1d8 + 8) + 0x18);
              }
              if (*(int *)(puVar11 + 2) != *(int *)((longlong)puVar11 + 0x3c)) {
                pbVar16 = (byte *)*param_5;
                if ((pbVar16 == (byte *)0x0) || ((*pbVar16 & 0x6b) != 3)) {
                  FUN_14009b010(param_5,3,0);
                  pbVar16 = (byte *)*param_5;
                  if (pbVar16 == (byte *)0x0) goto LAB_1402d9109;
                }
                local_248 = 0;
                FUN_14014191c(pbVar16,local_90,&local_1d8,0);
              }
            }
            else if (*(char *)(lVar27 + 0x19) == '\x01') {
              if (*(char *)(lVar27 + 0x24) == '\x01') {
                _Src = (void *)(lVar7 + 0x30);
                iVar22 = FUN_144a79e9a(_Src,1,*(undefined4 *)(lVar7 + 0x48));
                if (-1 < iVar22) {
                  if (*local_230 == '\x01') {
                    iVar22 = *(int *)(lVar7 + 0x48);
                    if (0 < iVar22) {
                      uVar24 = 0;
                      do {
                        pvVar17 = *(void **)(lVar7 + 0x40);
                        if (*(void **)(lVar7 + 0x40) == (void *)0x0) {
                          pvVar17 = _Src;
                        }
                        if ((((*(uint *)((longlong)pvVar17 + (uVar24 >> 5 & 0x7ffffff) * 4) >>
                               ((uint)uVar24 & 0x1f) & 1) != 0) &&
                            (lVar27 = *(longlong *)(lVar7 + 0x28), lVar27 != 0)) &&
                           (((longlong)uVar24 < (longlong)*(int *)(lVar27 + 0x68) &&
                            (lVar27 = *(longlong *)(*(longlong *)(lVar27 + 0x60) + uVar24 * 8),
                            lVar27 != 0)))) {
                          puVar18 = *(undefined4 **)(lVar27 + 8);
                          puVar19 = &DAT_14c9485f0;
                          if (puVar18 != (undefined4 *)0x0) {
                            puVar19 = puVar18;
                          }
                          FUN_1447a97f4(&local_188,puVar19);
                          FUN_140128f82(&local_e8,&local_1b8,&local_188,0);
                          if (local_170 != 0) {
                            FUN_1400020a8();
                          }
                          iVar22 = *(int *)(lVar7 + 0x48);
                        }
                        uVar24 = uVar24 + 1;
                      } while ((longlong)uVar24 < (longlong)iVar22);
                    }
                  }
                  else {
                    uVar28 = iVar22 + 8U & 0x7ffffff8;
                    iVar13 = uVar28 - *(int *)(lVar7 + 0x48);
                    if (iVar13 != 0 && *(int *)(lVar7 + 0x48) <= (int)uVar28) {
                      uVar6 = FUN_144a54ea4(_Src,iVar13);
                      FUN_1447c6044(_Src,uVar6,iVar13,0);
                    }
                    uVar28 = iVar22 + 8U >> 3;
                    local_1e8 = (void *)0x0;
                    if (*(void **)(lVar7 + 0x40) != (void *)0x0) {
                      _Src = *(void **)(lVar7 + 0x40);
                    }
                    local_1e0 = uVar28;
                    FUN_1447a127e(&local_1e8,uVar28,0);
                    memcpy(local_1e8,_Src,(ulonglong)uVar28);
                    FUN_146802950(&local_1f8,&local_1e8,0);
                    pwVar3 = local_1f8;
                    if (1 < local_1f0) {
                      local_108 = 0;
                      if (local_1f8 == (wchar_t *)0x0) {
                        local_100 = 0;
                        local_f8 = 0;
                      }
                      else {
                        sVar12 = wcslen(local_1f8);
                        FUN_1446fe5a4(&local_188,pwVar3,sVar12 & 0xffffffff,1);
                      }
                      local_1c0 = DAT_14cb8d6e0;
                      local_1c8 = DAT_14cb8d6d8;
                      local_200 = local_100;
                      FUN_1448075d0(&local_1b8);
                      FUN_141863b92(&local_1d8,&local_1b8,&local_200);
                      if (CONCAT44(uStack_19c,local_1a0) != 0) {
                        FUN_1400020a8();
                      }
                      if (local_108 != 0) {
                        FUN_1400020a8();
                      }
                    }
                    if (local_1f8 != (wchar_t *)0x0) {
                      FUN_1400020a8();
                    }
                    if (local_1e8 != (void *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                }
              }
              goto LAB_1402d8bd6;
            }
LAB_1402d9109:
            local_a0 = 0;
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            FUN_1402d9776(&local_e8);
            plVar8 = plStack_1d0;
            if (plStack_1d0 != (longlong *)0x0) {
              LOCK();
              plVar29 = plStack_1d0 + 1;
              *(int *)plVar29 = (int)*plVar29 + -1;
              UNLOCK();
              if ((int)*plVar29 == 0) {
                (**(code **)*plStack_1d0)(plStack_1d0);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
          }
          iVar22 = local_224;
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          uVar20 = local_228 & ~(uint)local_218;
          puVar25 = *(uint **)(local_230 + 0x58);
          if (*(uint **)(local_230 + 0x58) == (uint *)0x0) {
            puVar25 = local_210;
          }
          uVar28 = *(uint *)(local_230 + 0x60);
          iVar13 = (int)local_208;
          lVar7 = (longlong)iVar13;
          uVar4 = puVar25[lVar7] & uVar20;
          uVar24 = local_208;
          if (uVar4 == 0) {
            iVar21 = uVar28 + 0x1e;
            if (-1 < (int)(uVar28 - 1)) {
              iVar21 = uVar28 - 1;
            }
            iVar21 = iVar21 >> 5;
            iVar22 = iVar22 + 0x20;
            iVar5 = iVar21;
            if (iVar21 < iVar13) {
              iVar5 = iVar13;
            }
            if (iVar13 < iVar21) {
              lVar27 = 0;
              do {
                uVar4 = puVar25[lVar7 + lVar27 + 1];
                if (uVar4 != 0) {
                  uVar24 = (ulonglong)(iVar13 + (int)lVar27 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_1402d91d9;
                }
                iVar22 = iVar22 + 0x20;
                lVar27 = lVar27 + 1;
              } while (iVar5 - lVar7 != lVar27);
              uVar20 = 0xffffffff;
              iVar13 = iVar5;
            }
            uVar24 = (ulonglong)(iVar13 + 1);
            uVar23 = local_218;
            uVar4 = uVar28;
          }
          else {
LAB_1402d91d9:
            uVar23 = (ulonglong)(-uVar4 & uVar4);
            uVar2 = uVar23 * 2 + 1;
            lVar7 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
              }
            }
            uVar4 = (iVar22 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
            if ((int)uVar28 <= (int)uVar4) {
              uVar4 = uVar28;
            }
          }
        } while (uVar4 != (uint)local_220);
      }
      goto LAB_1402d9280;
    }
  }
  local_234 = 0;
LAB_1402d9280:
  if ((local_60 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_234;
}



// FUNCTION 1402d9776 FUN_1402d9776 body=55 status=ok
// SIG undefined FUN_1402d9776(void)

void FUN_1402d9776(longlong *param_1)

{
  FUN_1402d97ae(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1402d97ae FUN_1402d97ae body=518 status=ok
// SIG undefined FUN_1402d97ae(void)

void FUN_1402d97ae(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_1402d98f6;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x18 + (longlong)iVar4 * 0x30) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) break;
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_1402d98f6;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1402d98f6:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar5 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1402d99b4 FUN_1402d99b4 body=116 status=ok
// SIG undefined FUN_1402d99b4(void)

void FUN_1402d99b4(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1402d9a2a(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147516bce(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1402d9a2a FUN_1402d9a2a body=353 status=ok
// SIG undefined FUN_1402d9a2a(void)

void FUN_1402d9a2a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402d9aaf;
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
LAB_1402d9aaf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402d9b8c thunk_FUN_1402d9b92 body=5 status=ok
// SIG undefined thunk_FUN_1402d9b92(void)

void thunk_FUN_1402d9b92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5cfba0;
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1402d9b92 FUN_1402d9b92 body=50 status=ok
// SIG undefined FUN_1402d9b92(void)

void FUN_1402d9b92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5cfba0;
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1402d9bc4 FUN_1402d9bc4 body=40 status=ok
// SIG undefined FUN_1402d9bc4(void)

undefined8 FUN_1402d9bc4(undefined8 param_1,int param_2)

{
  FUN_1402d9bec();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402d9bec FUN_1402d9bec body=87 status=ok
// SIG undefined FUN_1402d9bec(void)

void FUN_1402d9bec(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab22db0;
  param_1[5] = &PTR_FUN_14ab230f0;
  param_1[6] = &PTR_FUN_14ab23170;
  if (*(char *)((longlong)param_1 + 0xba) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xba) = 0;
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1402d9c44 FUN_1402d9c44 body=347 status=ok
// SIG undefined FUN_1402d9c44(void)

longlong *
FUN_1402d9c44(undefined8 param_1,longlong *param_2,undefined8 param_3,longlong *param_4,int param_5,
             undefined4 param_6,undefined8 param_7)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  int local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  if ((longlong *)*param_4 == (longlong *)0x0) {
    puVar6 = (undefined8 *)0x0;
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)(**(code **)(*(longlong *)*param_4 + 0x38))();
    puVar6 = (undefined8 *)*param_4;
  }
  if (param_5 != 0) {
    local_48 = 0;
    local_50 = puVar6 == (undefined8 *)0x0;
    local_60 = param_6;
    local_68 = param_5;
    local_58 = plVar5;
    FUN_1402b3334(&local_40,param_3,param_7);
    if (&local_40 == param_2) {
LAB_1402d9d70:
      if (local_40 != 0) {
        LOCK();
        puVar1 = (uint *)(local_40 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
    }
    else {
      lVar3 = *param_2;
      *param_2 = local_40;
      local_40 = 0;
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
        goto LAB_1402d9d70;
      }
    }
    puVar6 = (undefined8 *)*param_4;
  }
  if (puVar6 == (undefined8 *)0x0) goto LAB_1402d9d27;
  if (plVar5 == (longlong *)0x0) {
LAB_1402d9d16:
    (**(code **)*puVar6)(puVar6,1);
  }
  else {
    iVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
    if (iVar4 != 0) goto LAB_1402d9d27;
    puVar6 = (undefined8 *)*param_4;
    if (puVar6 != (undefined8 *)0x0) goto LAB_1402d9d16;
  }
  *param_4 = 0;
LAB_1402d9d27:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402d9da6 FUN_1402d9da6 body=66 status=ok
// SIG undefined FUN_1402d9da6(void)

undefined8 * FUN_1402d9da6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aa58140;
  if (param_1[2] != 0 && (param_1[2] & 1) == 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402d9de8 FUN_1402d9de8 body=59 status=ok
// SIG undefined FUN_1402d9de8(void)

int FUN_1402d9de8(longlong param_1)

{
  int iVar1;
  
  if (*(uint *)(param_1 + 0x10) < 0x15555556) {
    iVar1 = *(uint *)(param_1 + 0x10) * 0xc;
  }
  else {
    FUN_140033559("Runtime\\Core\\Public\\Containers/DynamicRHIResourceArray.h",0x47,
                  L"Resource data size too large for uint32, will overflow. Calculate with larger data type or use fewer elements. sizeof(ElementType): %d"
                  ,0xc);
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 1402d9e24 FUN_1402d9e24 body=478 status=ok
// SIG undefined FUN_1402d9e24(void)

undefined8 FUN_1402d9e24(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  FUN_140079348();
  fVar2 = *(float *)(param_1 + 0x40);
  if (0.0 < fVar2) {
    plVar13 = (longlong *)(param_1 + 0x48);
    plVar10 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x48) + 0x18))(plVar13);
    uVar14 = (ulonglong)(int)plVar10[1];
    if (0 < (longlong)uVar14) {
      do {
        uVar15 = uVar14 - 1;
        plVar3 = *(longlong **)(*plVar10 + uVar15 * 0x10);
        plVar4 = *(longlong **)(*plVar10 + 8 + uVar15 * 0x10);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        if (plVar3 != (longlong *)0x0) {
          lVar5 = plVar3[2];
          lVar11 = (**(code **)(*plVar13 + 0x28))(plVar13);
          if (lVar11 != 0) {
            if (((((*(longlong *)(lVar11 + 0x30) == 0) ||
                  (lVar12 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x2b0), lVar12 == 0)) ||
                 (*(longlong *)(lVar12 + 0x588) == 0)) ||
                (*(double *)(lVar11 + 0x6d0) < *(double *)(lVar11 + 0x708))) &&
               (((*(byte *)(lVar11 + 0x154) & 0x40) == 0 ||
                (iVar9 = FUN_14490d72a(lVar11), iVar9 != 3)))) {
              if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
                lVar12 = 0;
                do {
                  lVar6 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar12);
                  if (*(longlong *)(lVar6 + 0x360) == lVar11) {
                    if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x278) & 1) != 0)) goto LAB_1402d9f55;
                    break;
                  }
                  lVar12 = lVar12 + 8;
                } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar12);
              }
              cVar8 = FUN_144a80e00(lVar11);
              if ((cVar8 == '\0') || (-1 < *(char *)(lVar11 + 0x155))) goto LAB_1402d9f5b;
            }
LAB_1402d9f55:
            if (*(char *)(lVar5 + 0x19) != '\x01') goto LAB_1402d9f83;
          }
LAB_1402d9f5b:
          (**(code **)(*plVar3 + 8))(plVar3,param_2,fVar2,param_3,1);
          cVar8 = (**(code **)(*plVar3 + 0x18))(plVar3);
          if (cVar8 != '\0') {
            FUN_14079e688(plVar10,uVar15 & 0xffffffff,1);
          }
        }
LAB_1402d9f83:
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar4 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
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
        bVar7 = 1 < uVar14;
        uVar14 = uVar15;
      } while (bVar7);
    }
  }
  return 0;
}



// FUNCTION 1402da012 FUN_1402da012 body=18 status=ok
// SIG undefined FUN_1402da012(void)

ulonglong FUN_1402da012(longlong param_1)

{
  undefined8 in_RAX;
  
  if (0.0 < *(float *)(param_1 + 0x2c)) {
    return 0;
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)(param_1 + 0x30)) ^ 1;
}



// FUNCTION 1402da024 FUN_1402da024 body=4396 status=ok
// SIG undefined FUN_1402da024(void)

void FUN_1402da024(longlong param_1,float param_2,undefined8 param_3,double *param_4,byte param_5)

{
  float *pfVar1;
  double dVar2;
  ushort uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ushort uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 unaff_RSI;
  double *pdVar15;
  double *pdVar16;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_4f8 [40];
  float local_4d0;
  float local_4cc;
  double local_4c8;
  undefined8 uStack_4c0;
  double local_4b8;
  undefined8 uStack_4b0;
  undefined1 local_4a8 [16];
  undefined4 local_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  double local_480;
  undefined1 local_478 [128];
  undefined1 local_3f8 [128];
  undefined1 local_378 [128];
  double local_2f8;
  double local_2f0;
  double local_2e8;
  undefined8 local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  undefined8 local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  undefined8 local_2a0;
  double local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  double local_278;
  double local_270;
  double local_268;
  undefined8 local_260;
  double local_258;
  double local_250;
  double local_248;
  undefined8 local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  double local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined8 local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  double local_178 [5];
  double dStack_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double dStack_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_4f8;
  fVar17 = (float)FUN_1402db1d8(param_1,param_3,
                                CONCAT71((int7)((ulonglong)unaff_RSI >> 8),param_5) & 0xffffffff);
  fVar24 = *(float *)(param_1 + 0x2c);
  if (0.0 < fVar24) {
    fVar18 = fVar24 - param_2;
    fVar24 = 0.0;
    if (0.0 <= fVar18) {
      fVar24 = fVar18;
    }
    *(float *)(param_1 + 0x2c) = fVar24;
  }
  uVar3 = *(ushort *)(param_1 + 0x32);
  if ((uVar3 & 1) != 0) {
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + param_2;
  }
  if ((uVar3 & 2) != 0) {
    *(float *)(param_1 + 0x3c) = *(float *)(param_1 + 0x3c) + param_2;
  }
  uVar12 = uVar3;
  if ((0.0 < fVar24) && (fVar24 < *(float *)(*(longlong *)(param_1 + 0x10) + 0x24))) {
    uVar12 = uVar3 | 2;
    *(ushort *)(param_1 + 0x32) = uVar12;
    *(float *)(param_1 + 0x3c) = *(float *)(*(longlong *)(param_1 + 0x10) + 0x24) - fVar24;
  }
  if (((uVar3 & 1) != 0) &&
     (pfVar1 = (float *)(*(longlong *)(param_1 + 0x10) + 0x20),
     *pfVar1 <= *(float *)(param_1 + 0x38) && *(float *)(param_1 + 0x38) != *pfVar1)) {
    uVar12 = uVar12 & 0xfffe;
    *(ushort *)(param_1 + 0x32) = uVar12;
  }
  if (((uVar12 & 2) == 0) ||
     (fVar18 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x24),
     *(float *)(param_1 + 0x3c) <= fVar18)) {
    if ((fVar24 != 0.0) || (NAN(fVar24))) {
      fVar18 = 1.0;
      fVar24 = 1.0;
      if ((uVar12 & 1) != 0) {
        fVar24 = *(float *)(param_1 + 0x38) / *(float *)(*(longlong *)(param_1 + 0x10) + 0x20);
      }
      if ((uVar12 & 2) != 0) {
        fVar18 = 1.0 - *(float *)(param_1 + 0x3c) / *(float *)(*(longlong *)(param_1 + 0x10) + 0x24)
        ;
      }
      if (fVar18 <= fVar24) {
        fVar24 = fVar18;
      }
      fVar17 = fVar17 * fVar24;
      if ((fVar17 <= 0.0 & (param_5 ^ 1)) == 0) {
        lVar14 = *(longlong *)(param_1 + 0x10);
        fVar24 = *(float *)(&DAT_14b400d60 +
                           (ulonglong)((byte)(*(char *)(lVar14 + 0x1a) - 1U) < 2) * 4);
        if (*(char *)(lVar14 + 0x1a) == '\x02') {
          if (0.0 < *(float *)(lVar14 + 0x1c)) {
            fVar24 = 6.2831855 / *(float *)(lVar14 + 0x1c);
          }
        }
        fVar24 = fVar24 * param_2;
        lVar13 = lVar14;
        if ((*(float *)(lVar14 + 0x4c) != 0.0) || (NAN(*(float *)(lVar14 + 0x4c)))) {
          dVar2 = (double)(*(float *)(lVar14 + 0x50) * fVar24) + *(double *)(param_1 + 0x48);
          *(double *)(param_1 + 0x48) = dVar2;
          if (*(char *)(lVar14 + 0x55) == '\x01') {
            fVar18 = (float)FUN_140073f12((float)dVar2);
          }
          else {
            dVar2 = sin(dVar2);
            fVar18 = (float)dVar2;
            lVar13 = *(longlong *)(param_1 + 0x10);
          }
          fVar18 = fVar18 * *(float *)(lVar14 + 0x4c);
        }
        else {
          fVar18 = 0.0;
        }
        dVar2 = 0.0;
        lVar14 = lVar13;
        if ((*(float *)(lVar13 + 0x58) != 0.0) || (NAN(*(float *)(lVar13 + 0x58)))) {
          dVar11 = (double)(*(float *)(lVar13 + 0x5c) * fVar24) + *(double *)(param_1 + 0x50);
          *(double *)(param_1 + 0x50) = dVar11;
          if (*(char *)(lVar13 + 0x61) == '\x01') {
            fVar21 = (float)FUN_140073f12((float)dVar11);
          }
          else {
            dVar11 = sin(dVar11);
            fVar21 = (float)dVar11;
            lVar14 = *(longlong *)(param_1 + 0x10);
          }
          dVar11 = (double)(fVar21 * *(float *)(lVar13 + 0x58));
        }
        else {
          dVar11 = 0.0;
        }
        fVar21 = 0.0;
        lVar13 = lVar14;
        if ((*(float *)(lVar14 + 100) != 0.0) || (NAN(*(float *)(lVar14 + 100)))) {
          dVar2 = (double)(*(float *)(lVar14 + 0x68) * fVar24) + *(double *)(param_1 + 0x58);
          *(double *)(param_1 + 0x58) = dVar2;
          if (*(char *)(lVar14 + 0x6d) == '\x01') {
            fVar22 = (float)FUN_140073f12((float)dVar2);
          }
          else {
            dVar2 = sin(dVar2);
            fVar22 = (float)dVar2;
            lVar13 = *(longlong *)(param_1 + 0x10);
          }
          dVar2 = (double)(fVar22 * *(float *)(lVar14 + 100));
        }
        lVar14 = lVar13;
        if ((*(float *)(lVar13 + 0x28) != 0.0) || (NAN(*(float *)(lVar13 + 0x28)))) {
          dVar19 = (double)(*(float *)(lVar13 + 0x2c) * fVar24) + *(double *)(param_1 + 0x60);
          *(double *)(param_1 + 0x60) = dVar19;
          if (*(char *)(lVar13 + 0x31) == '\x01') {
            fVar21 = (float)FUN_140073f12((float)dVar19);
          }
          else {
            dVar19 = sin(dVar19);
            fVar21 = (float)dVar19;
            lVar14 = *(longlong *)(param_1 + 0x10);
          }
          fVar21 = fVar21 * *(float *)(lVar13 + 0x28);
        }
        fVar22 = 0.0;
        lVar13 = lVar14;
        if ((*(float *)(lVar14 + 0x34) != 0.0) || (NAN(*(float *)(lVar14 + 0x34)))) {
          dVar19 = (double)(*(float *)(lVar14 + 0x38) * fVar24) + *(double *)(param_1 + 0x68);
          *(double *)(param_1 + 0x68) = dVar19;
          if (*(char *)(lVar14 + 0x3d) == '\x01') {
            fVar23 = (float)FUN_140073f12((float)dVar19);
          }
          else {
            dVar19 = sin(dVar19);
            fVar23 = (float)dVar19;
            lVar13 = *(longlong *)(param_1 + 0x10);
          }
          fVar23 = fVar23 * *(float *)(lVar14 + 0x34);
        }
        else {
          fVar23 = 0.0;
        }
        dVar19 = (double)fVar17;
        if ((*(float *)(lVar13 + 0x40) != 0.0) || (NAN(*(float *)(lVar13 + 0x40)))) {
          dVar10 = (double)(*(float *)(lVar13 + 0x44) * fVar24) + *(double *)(param_1 + 0x70);
          *(double *)(param_1 + 0x70) = dVar10;
          if (*(char *)(lVar13 + 0x49) == '\x01') {
            fVar22 = (float)FUN_140073f12((float)dVar10);
          }
          else {
            dVar10 = sin(dVar10);
            fVar22 = (float)dVar10;
          }
          fVar22 = fVar22 * *(float *)(lVar13 + 0x40);
        }
        dVar10 = (double)fVar18 * dVar19;
        dVar11 = dVar11 * dVar19;
        local_4c8 = dVar2 * dVar19;
        uStack_4c0 = 0;
        local_4b8 = (double)(fVar23 * fVar17);
        uStack_4b0 = 0;
        local_4a8._0_8_ = (double)(fVar22 * fVar17);
        local_4d0 = fVar24;
        local_4cc = fVar17;
        if (*(char *)(param_1 + 0x34) == '\0') {
          dVar7 = param_4[3];
          dVar2 = param_4[4];
          dVar19 = param_4[5];
          dVar4 = sin(dVar7 * 0.01745329238474369);
          dVar5 = sin(dVar2 * 0.01745329238474369);
          dVar6 = sin(dVar19 * 0.01745329238474369);
          sin(0.0);
          dVar7 = cos(dVar7 * 0.01745329238474369);
          dVar2 = cos(dVar2 * 0.01745329238474369);
          dVar19 = cos(dVar19 * 0.01745329238474369);
          cos(0.0);
          dVar8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar9 = (double)CONCAT44(DAT_14c8464f0._4_4_,(undefined4)DAT_14c8464f0);
          *param_4 = *param_4 +
                     DAT_14c8464e0 * 0.0 +
                     local_4c8 * -(dVar4 * dVar19 * dVar2 + dVar5 * dVar6) +
                     dVar11 * (dVar4 * dVar6 * dVar2 - dVar5 * dVar19) + dVar10 * dVar7 * dVar2;
          param_4[1] = dVar8 * 0.0 +
                       local_4c8 * (dVar2 * dVar6 - dVar5 * dVar4 * dVar19) +
                       dVar11 * (dVar4 * dVar6 * dVar5 + dVar2 * dVar19) + dVar10 * dVar5 * dVar7 +
                       param_4[1];
          param_4[2] = (dVar10 * dVar4 - dVar7 * dVar6 * dVar11) + dVar7 * dVar19 * local_4c8 +
                       dVar9 * 0.0 + param_4[2];
          dVar10 = (double)(fVar21 * fVar17) * 0.01745329238474369;
          dVar4 = local_4b8 * 0.01745329238474369;
          dVar5 = (double)local_4a8._0_8_ * 0.01745329238474369;
          dVar19 = sin(dVar10);
          dVar2 = sin(dVar4);
          dVar11 = sin(dVar5);
          dVar10 = cos(dVar10);
          dVar4 = cos(dVar4);
          local_128 = cos(dVar5);
          local_178[0] = dVar10 * dVar4;
          local_178[1] = dVar2 * dVar10;
          local_178[3] = 0.0;
          local_178[4] = dVar19 * dVar11 * dVar4 - dVar2 * local_128;
          dStack_150 = dVar19 * dVar11 * dVar2 + dVar4 * local_128;
          local_148 = -dVar11 * dVar10;
          local_140 = 0;
          local_138 = -(dVar19 * local_128 * dVar4 + dVar2 * dVar11);
          dStack_130 = dVar4 * dVar11 - dVar2 * dVar19 * local_128;
          local_128 = dVar10 * local_128;
          local_120 = 0;
          local_118 = DAT_14c8464e0;
          dStack_110 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dStack_108 = (double)CONCAT44(DAT_14c8464f0._4_4_,(undefined4)DAT_14c8464f0);
          local_100 = 0x3ff0000000000000;
          dVar5 = param_4[3];
          dVar2 = param_4[4];
          dVar11 = param_4[5];
          local_178[2] = dVar19;
          dVar19 = sin(dVar5 * 0.01745329238474369);
          dVar10 = sin(dVar2 * 0.01745329238474369);
          dVar4 = sin(dVar11 * 0.01745329238474369);
          sin(0.0);
          dVar5 = cos(dVar5 * 0.01745329238474369);
          dVar2 = cos(dVar2 * 0.01745329238474369);
          dVar11 = cos(dVar11 * 0.01745329238474369);
          cos(0.0);
          local_278 = dVar5 * dVar2;
          local_270 = dVar10 * dVar5;
          local_260 = 0;
          local_258 = dVar19 * dVar4 * dVar2 - dVar10 * dVar11;
          local_250 = dVar19 * dVar4 * dVar10 + dVar2 * dVar11;
          local_248 = -dVar4 * dVar5;
          local_240 = 0;
          local_238 = -(dVar19 * dVar11 * dVar2 + dVar10 * dVar4);
          local_230 = dVar2 * dVar4 - dVar10 * dVar19 * dVar11;
          local_228 = dVar5 * dVar11;
          dVar2 = 0.0;
          uVar25 = 0;
          uVar26 = 0;
          local_220 = 0;
          local_218 = DAT_14c8464e0;
          local_210 = (undefined4)DAT_14c8464e8;
          uStack_20c = DAT_14c8464e8._4_4_;
          uStack_208 = (undefined4)DAT_14c8464f0;
          uStack_204 = DAT_14c8464f0._4_4_;
          local_200 = 0x3ff0000000000000;
          local_268 = dVar19;
          FUN_1447fea8d(&local_1f8,local_178);
          dVar7 = local_1a8;
          dVar6 = local_1b8;
          dVar5 = local_1c8;
          dVar4 = local_1d8;
          dVar10 = local_1e8;
          dVar19 = local_1f0;
          dVar11 = local_1f8;
          local_4c8 = local_1d0;
          local_4b8 = local_1b0;
          if ((((local_1f0 != 0.0) || (NAN(local_1f0))) || (local_1f8 != 0.0)) || (NAN(local_1f8)))
          {
            dVar2 = atan2(local_1f0,local_1f8);
            dVar2 = dVar2 * 57.29577951308232;
            uVar25 = extraout_XMM0_Dc;
            uVar26 = extraout_XMM0_Dd;
          }
          dVar19 = SQRT(dVar19 * dVar19 + dVar11 * dVar11);
          dVar11 = 0.0;
          if (((dVar10 != 0.0) || (NAN(dVar10))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
            dVar11 = atan2(dVar10,dVar19);
            dVar11 = dVar11 * 57.29577951308232;
          }
          local_4a8._8_4_ = uVar25;
          local_4a8._0_8_ = dVar2;
          local_4a8._12_4_ = uVar26;
          dVar19 = sin(dVar11 * 0.01745329238474369);
          dVar10 = sin(dVar2 * 0.01745329238474369);
          dVar8 = cos(dVar11 * 0.01745329238474369);
          dVar2 = cos(dVar2 * 0.01745329238474369);
          dVar9 = 0.0;
          dVar20 = dVar19 * 0.0 * dVar2 - dVar10;
          dVar2 = dVar19 * 0.0 * dVar10 + dVar2;
          dVar19 = dVar5 * dVar8 * -0.0 + dVar4 * dVar20 + local_4c8 * dVar2;
          dVar2 = dVar7 * dVar8 * -0.0 + dVar6 * dVar20 + local_4b8 * dVar2;
          if (((dVar2 != 0.0) || (NAN(dVar2))) || ((dVar19 != 0.0 || (NAN(dVar19))))) {
            dVar9 = atan2(dVar2,dVar19);
            dVar9 = dVar9 * 57.29577951308232;
          }
          param_4[3] = dVar11;
          param_4[4] = (double)local_4a8._0_8_;
          param_4[5] = dVar9;
        }
        else {
          pdVar15 = (double *)&DAT_14c846400;
          if (*(char *)(param_1 + 0x34) == '\x02') {
            pdVar15 = (double *)(param_1 + 0xc0);
          }
          pdVar16 = local_178;
          for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
            *pdVar16 = *pdVar15;
            pdVar15 = pdVar15 + 1;
            pdVar16 = pdVar16 + 1;
          }
          *param_4 = *param_4 +
                     local_118 * 0.0 +
                     local_4c8 * local_138 + dVar11 * local_178[4] + dVar10 * local_178[0];
          param_4[1] = dStack_110 * 0.0 +
                       local_4c8 * dStack_130 + dVar11 * dStack_150 + dVar10 * local_178[1] +
                       param_4[1];
          param_4[2] = dVar10 * local_178[2] + dVar11 * local_148 + local_4c8 * local_128 +
                       dStack_108 * 0.0 + param_4[2];
          dVar5 = param_4[3];
          dVar2 = param_4[4];
          dVar11 = param_4[5];
          dVar19 = sin(dVar5 * 0.01745329238474369);
          dVar10 = sin(dVar2 * 0.01745329238474369);
          dVar4 = sin(dVar11 * 0.01745329238474369);
          sin(0.0);
          dVar5 = cos(dVar5 * 0.01745329238474369);
          dVar2 = cos(dVar2 * 0.01745329238474369);
          dVar11 = cos(dVar11 * 0.01745329238474369);
          cos(0.0);
          local_1f8 = dVar5 * dVar2;
          local_1f0 = dVar10 * dVar5;
          local_1e0 = 0;
          local_1d8 = dVar19 * dVar4 * dVar2 - dVar10 * dVar11;
          local_1d0 = dVar19 * dVar4 * dVar10 + dVar2 * dVar11;
          local_1c8 = -dVar4 * dVar5;
          local_1c0 = 0;
          local_1b8 = -(dVar19 * dVar11 * dVar2 + dVar10 * dVar4);
          local_1b0 = dVar2 * dVar4 - dVar10 * dVar19 * dVar11;
          local_1a8 = dVar5 * dVar11;
          local_1a0 = 0;
          local_198 = DAT_14c8464e0;
          local_190 = (undefined4)DAT_14c8464e8;
          uStack_18c = DAT_14c8464e8._4_4_;
          uStack_188 = (undefined4)DAT_14c8464f0;
          uStack_184 = DAT_14c8464f0._4_4_;
          local_180 = 0x3ff0000000000000;
          local_1e8 = dVar19;
          FUN_14494412e(local_178,&local_2f8);
          FUN_1447fea8d(&local_278,&local_1f8,&local_2f8);
          dVar10 = (double)(fVar21 * fVar17) * 0.01745329238474369;
          dVar4 = local_4b8 * 0.01745329238474369;
          dVar5 = (double)local_4a8._0_8_ * 0.01745329238474369;
          dVar2 = sin(dVar10);
          dVar11 = sin(dVar4);
          dVar19 = sin(dVar5);
          dVar10 = cos(dVar10);
          dVar4 = cos(dVar4);
          local_2a8 = cos(dVar5);
          local_2f8 = dVar10 * dVar4;
          local_2f0 = dVar11 * dVar10;
          local_2e0 = 0;
          local_2d8 = dVar2 * dVar19 * dVar4 - dVar11 * local_2a8;
          local_2d0 = dVar2 * dVar19 * dVar11 + dVar4 * local_2a8;
          local_2c8 = -dVar19 * dVar10;
          local_2c0 = 0;
          local_2b8 = -(dVar2 * local_2a8 * dVar4 + dVar11 * dVar19);
          local_2b0 = dVar4 * dVar19 - dVar11 * dVar2 * local_2a8;
          local_2a8 = dVar10 * local_2a8;
          local_2a0 = 0;
          local_298 = DAT_14c8464e0;
          local_290 = (undefined4)DAT_14c8464e8;
          uStack_28c = DAT_14c8464e8._4_4_;
          uStack_288 = (undefined4)DAT_14c8464f0;
          uStack_284 = DAT_14c8464f0._4_4_;
          local_280 = 0x3ff0000000000000;
          local_2e8 = dVar2;
          FUN_14494412e(&local_278,local_3f8);
          FUN_1447fea8d(local_378,&local_2f8,local_3f8);
          FUN_1447fea8d(local_3f8,&local_278,local_378);
          FUN_1447fea8d(local_478,local_3f8,&local_1f8);
          FUN_144a90b9e(local_478,&local_490);
          param_4[5] = local_480;
          *(undefined4 *)(param_4 + 3) = local_490;
          *(undefined4 *)((longlong)param_4 + 0x1c) = uStack_48c;
          *(undefined4 *)(param_4 + 4) = uStack_488;
          *(undefined4 *)((longlong)param_4 + 0x24) = uStack_484;
        }
        fVar24 = local_4cc;
        fVar17 = (float)FUN_1402db152(*(longlong *)(param_1 + 0x10) + 0x70,param_1 + 0x78,local_4d0)
        ;
        *(float *)(param_4 + 6) = (fVar24 * fVar17 + 1.0) * *(float *)(param_4 + 6);
      }
    }
  }
  else {
    *(float *)(param_1 + 0x3c) = fVar18;
  }
  if ((local_f0 ^ (ulonglong)auStack_4f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402db152 FUN_1402db152 body=134 status=ok
// SIG undefined FUN_1402db152(void)

float FUN_1402db152(float *param_1,float *param_2,float param_3)

{
  double _X;
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_2;
  fVar4 = *param_1;
  fVar1 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    _X = (double)(param_3 * param_1[1]) + (double)fVar3;
    if (*(char *)((longlong)param_1 + 9) == '\x01') {
      fVar1 = (float)FUN_140073f12(CONCAT44((int)((ulonglong)_X >> 0x20),(float)_X));
    }
    else {
      dVar2 = sin(_X);
      fVar1 = (float)dVar2;
      fVar4 = *param_1;
    }
    fVar3 = (float)_X;
    fVar1 = fVar4 * fVar1;
  }
  *param_2 = fVar3;
  return fVar1;
}



// FUNCTION 1402db1d8 FUN_1402db1d8 body=699 status=ok
// SIG undefined FUN_1402db1d8(void)

float FUN_1402db1d8(longlong param_1,float param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  param_2 = param_2 * *(float *)(param_1 + 0x28);
  if ((*(longlong **)(param_1 + 0x40) != (longlong *)0x0) &&
     (lVar1 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x690))(), lVar1 != 0)) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x690))();
    lVar1 = *(longlong *)(lVar2 + 0x430);
    if (lVar1 != 0) {
      if (DAT_14cae9568 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1417de738;
        local_40 = &LAB_145893408;
        local_48 = &LAB_1458cbbd2;
        local_58 = &LAB_147ba21f1;
        local_60 = &LAB_1463e9233;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x1000000c;
        local_80 = 8;
        local_88 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar1 = *(longlong *)(lVar2 + 0x430);
        if (lVar1 == 0) goto LAB_1402db300;
      }
      if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
          (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30)) {
        lVar2 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x690))();
        lVar1 = *(longlong *)(lVar2 + 0x430);
        if (lVar1 != 0) {
          if (DAT_14cae9568 == 0) {
            local_50 = &local_38;
            local_38 = FUN_1417de738;
            local_40 = &LAB_145893408;
            local_48 = &LAB_1458cbbd2;
            local_58 = &LAB_147ba21f1;
            local_60 = &LAB_1463e9233;
            local_68 = L"Engine";
            local_70 = 0;
            local_78 = 0x1000000c;
            local_80 = 8;
            local_88 = 0x2b8;
            FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
            lVar1 = *(longlong *)(lVar2 + 0x430);
            if (lVar1 == 0) goto LAB_1402db300;
          }
          if (((DAT_14cae9568 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
             ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar2 + 0x38) &&
              (*(longlong *)
                (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
               DAT_14cae9568 + 0x30)))) {
            lVar2 = FUN_140628492();
            if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
              param_2 = param_2 * *(float *)(lVar1 + 0x2d4);
            }
          }
        }
      }
    }
  }
LAB_1402db300:
  if ((param_3 == '\0') && (param_2 <= 0.0)) {
    param_2 = 0.0;
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1402db494 FUN_1402db494 body=485 status=ok
// SIG undefined FUN_1402db494(void)

undefined8 *
FUN_1402db494(undefined8 *param_1,longlong param_2,undefined4 param_3,char param_4,char param_5,
             char param_6,char param_7,char param_8,char param_9,char param_10,char param_11,
             byte param_12,undefined4 param_13)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 0xb0);
  *(undefined2 *)((longlong)param_1 + 0x12) = 0;
  bVar4 = *(byte *)(param_2 + 0xe5);
  bVar5 = *(byte *)(param_2 + 0xde) & 0xf;
  bVar2 = *(byte *)((longlong)param_1 + 0x14);
  bVar3 = *(byte *)((longlong)param_1 + 0x15);
  *(byte *)((longlong)param_1 + 0x14) = bVar2 & 0xf0 | bVar5;
  bVar6 = *(byte *)(param_2 + 0xde) >> 3 & 0x10;
  *(byte *)((longlong)param_1 + 0x14) = bVar2 & 0xe0 | bVar5 | bVar6;
  *(byte *)((longlong)param_1 + 0x14) =
       *(byte *)(param_2 + 0xe6) & 0x80 |
       bVar2 & 0x20 | bVar5 | bVar6 | (byte)(*(uint *)(param_2 + 0xe4) >> 0x12) & 0x40;
  bVar4 = bVar4 & 1;
  *(byte *)((longlong)param_1 + 0x15) = bVar3 & 0xfe | bVar4;
  bVar2 = *(byte *)(param_2 + 0xe5) & 2;
  *(byte *)((longlong)param_1 + 0x15) = bVar3 & 0xfc | bVar4 | bVar2;
  bVar5 = *(byte *)(param_2 + 0xe5) & 4;
  *(byte *)((longlong)param_1 + 0x15) = bVar3 & 0xf8 | bVar4 | bVar2 | bVar5;
  *(byte *)((longlong)param_1 + 0x15) =
       param_6 << 5 | param_5 << 4 | *(byte *)(param_2 + 0xe5) & 8 |
       bVar3 & 0xc0 | bVar4 | bVar2 | bVar5;
  cVar1 = FUN_1402db67a(param_2,param_13);
  bVar4 = *(byte *)((longlong)param_1 + 0x16);
  *(byte *)((longlong)param_1 + 0x15) =
       param_7 << 7 | cVar1 << 6 | *(byte *)((longlong)param_1 + 0x15) & 0x3f;
  bVar2 = (byte)((uint)*(undefined4 *)(param_2 + 0xe4) >> 0x1d) & 1;
  *(byte *)((longlong)param_1 + 0x16) = bVar4 & 0xfe | bVar2;
  bVar3 = *(byte *)(param_2 + 0xe7) & 2;
  *(byte *)((longlong)param_1 + 0x16) = bVar4 & 0xfc | bVar2 | bVar3;
  *(byte *)((longlong)param_1 + 0x16) =
       param_9 << 7 | param_8 << 6 | param_4 << 5 | *(byte *)(param_2 + 0xe7) & 0x1c | bVar2 | bVar3
  ;
  *(byte *)((longlong)param_1 + 0x17) =
       (param_12 & 0x1f) << 2 | param_11 * '\x02' + param_10 |
       *(byte *)((longlong)param_1 + 0x17) & 0x80;
  return param_1;
}



// FUNCTION 1402db67a FUN_1402db67a body=50 status=ok
// SIG undefined FUN_1402db67a(void)

undefined8 FUN_1402db67a(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 3) {
    return 0;
  }
  uVar1 = FUN_14485b2b4(*(undefined8 *)(param_1 + 0xc0),3);
  uVar1 = FUN_14128e23e(uVar1,3);
  return uVar1;
}



// FUNCTION 1402db6ac FUN_1402db6ac body=473 status=ok
// SIG undefined FUN_1402db6ac(void)

void * FUN_1402db6ac(longlong param_1,void *param_2,longlong *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  longlong *plVar1;
  uint uVar2;
  undefined1 uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [208];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar5 = *param_3;
    uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar10 = (uint)lVar5 & 0xffff;
    lVar9 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar10) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar10 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar8 * 0x28);
        if (*plVar1 == lVar5) {
          if ((plVar1 == (longlong *)0x0) || (plVar11 = plVar1 + 1, plVar11 == (longlong *)0x0))
          break;
          lVar5 = plVar1[2];
          if (lVar5 == 0) {
            uVar6 = FUN_145cd6c5a();
            lVar5 = FUN_14477b664(uVar6);
            plVar1[2] = lVar5;
          }
          plVar7 = (longlong *)plVar1[3];
          if (plVar7 == (longlong *)0x0) {
            if ((*plVar11 == 0) || (lVar5 == 0)) break;
            plVar7 = *(longlong **)(lVar5 + 0xb8);
            if ((plVar7 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar4 == '\0')) {
              plVar1[3] = 0;
              break;
            }
            uVar6 = (**(code **)(*plVar7 + 0x110))(plVar7);
            plVar7 = (longlong *)FUN_144aff482(uVar6,plVar11);
            plVar1[3] = (longlong)plVar7;
            if (plVar7 == (longlong *)0x0) break;
          }
          local_120 = param_7;
          local_128 = param_6;
          (**(code **)(*plVar7 + 0x60))(plVar7,local_118,param_4,param_5);
          memcpy(param_2,local_118,0xd0);
          uVar3 = 1;
          goto LAB_1402db7cb;
        }
        iVar8 = (int)plVar1[4];
      } while (iVar8 != -1);
    }
  }
  uVar3 = 0;
LAB_1402db7cb:
  *(undefined1 *)((longlong)param_2 + 0xd0) = uVar3;
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1402db886 FUN_1402db886 body=43 status=ok
// SIG undefined FUN_1402db886(void)

undefined8
FUN_1402db886(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  FUN_1402de574(param_1,param_2,param_3,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 1402db8b2 FUN_1402db8b2 body=71 status=ok
// SIG undefined FUN_1402db8b2(void)

undefined8
FUN_1402db8b2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6)

{
  if (*(char *)(param_1 + 0x154) == '\x01') {
    FUN_1402dc19a(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    FUN_1456f724c(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return param_2;
}



// FUNCTION 1402db8fa FUN_1402db8fa body=2207 status=ok
// SIG undefined FUN_1402db8fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402db8fa(ulonglong *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar11;
  undefined1 auVar10 [16];
  double dVar12;
  double dVar15;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  undefined1 auStack_2f8 [32];
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
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
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  dVar15 = *param_2;
  dVar23 = param_2[1];
  dVar24 = param_2[2];
  dVar1 = param_2[3];
  local_278 = param_2[4];
  dStack_270 = param_2[5];
  dVar2 = *param_3;
  dVar3 = param_3[1];
  dVar16 = param_3[2];
  local_1b8 = param_3[8];
  local_1a8 = param_3[9];
  dStack_180 = param_3[10];
  dVar17 = dVar3 + dVar3;
  dVar8 = dVar16 + dVar16;
  dVar20 = dVar2 * (dVar2 + dVar2);
  local_1c8 = (1.0 - (dVar16 * dVar8 + dVar3 * dVar17)) * local_1b8;
  dStack_1a0 = (1.0 - (dVar16 * dVar8 + dVar20)) * local_1a8;
  local_178 = (1.0 - (dVar20 + dVar3 * dVar17)) * dStack_180;
  dVar16 = param_3[3];
  dVar9 = dVar8 * dVar16;
  dVar11 = (dVar2 + dVar2) * param_3[3];
  dVar16 = dVar17 * dVar16;
  dStack_1c0 = (dVar17 * dVar2 + dVar9) * local_1b8;
  local_198 = (dVar8 * dVar3 + dVar11) * local_1a8;
  local_188 = (dVar16 + *param_3 * dVar8) * dStack_180;
  local_1b8 = (*param_3 * dVar8 - dVar16) * local_1b8;
  local_2a8 = param_2[6];
  dStack_2a0 = param_2[7];
  dVar20 = param_2[8];
  dVar16 = param_2[9];
  local_1a8 = (dVar17 * dVar2 - dVar9) * local_1a8;
  dStack_180 = (dVar8 * dVar3 - dVar11) * dStack_180;
  dVar2 = param_2[10];
  dVar3 = param_2[0xb];
  uStack_1b0 = 0;
  uStack_190 = 0;
  uStack_170 = 0;
  local_158 = param_3[6];
  local_168 = param_3[4];
  dStack_160 = param_3[5];
  uStack_150 = 0x3ff0000000000000;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8460d0) {
    FUN_144b3d300(&DAT_14c8460d0);
    if (DAT_14c8460d0 == -1) {
      DAT_14c8460c0 = 0x322bcc77322bcc77;
      DAT_14c8460c8 = 0x322bcc77322bcc77;
      _Init_thread_footer(&DAT_14c8460d0);
    }
  }
  dVar21 = dVar24 + dVar24;
  dVar17 = dVar23 + dVar23;
  dVar8 = (dVar15 + dVar15) * dVar1;
  dVar9 = dVar16 * (dVar17 * dVar15 - dVar21 * dVar1);
  dVar11 = dVar2 * (dVar21 * dVar23 - dVar8);
  local_2c8 = dVar15 * (dVar15 + dVar15);
  dStack_2c0 = dVar23 * dVar17;
  auVar14 = *(undefined1 (*) [16])(param_3 + 8);
  auVar7 = divpd(_DAT_149934d80,auVar14);
  auVar10 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_3 + 10));
  dVar18 = ((double)DAT_149934d80 - (dVar24 * dVar21 + dStack_2c0)) * dVar20;
  dVar19 = (DAT_149934d80._8_8_ - (dVar24 * dVar21 + local_2c8)) * dVar16;
  dVar24 = (dVar21 * dVar1 + dVar17 * dVar15) * dVar20;
  dVar16 = (dVar8 + dVar21 * dVar23) * dVar16;
  local_298 = (double)(-(ulonglong)((double)(float)DAT_14c8460c0 < ABS(auVar14._0_8_)) &
                      auVar7._0_8_) * param_2[8];
  dStack_290 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460c0 >> 0x20) < ABS(auVar14._8_8_)) &
                       auVar7._8_8_) * param_2[9];
  local_288 = (double)(-(ulonglong)
                        ((double)(float)DAT_14c8460c8 <
                        ABS(SUB168(*(undefined1 (*) [16])(param_3 + 10),0))) & auVar10._0_8_) *
              param_2[10];
  dStack_280 = param_2[0xb] * 0.0;
  local_2b8 = dVar2;
  dStack_2b0 = dVar3;
  FUN_14494412e(&local_1c8,&local_248);
  dVar4 = dStack_280;
  dVar8 = local_288;
  dVar3 = dStack_290;
  dVar2 = local_298;
  auVar10 = _DAT_149934d80;
  dVar20 = (dVar21 * dVar15 - dVar17 * dVar1) * dVar20;
  local_2d8 = local_1f8;
  dStack_2d0 = dStack_1f0;
  dVar23 = (dVar17 * dVar1 + dVar21 * dVar15) * local_2b8;
  dVar12 = (1.0 - (local_2c8 + dStack_2c0)) * local_2b8;
  local_e8 = local_208 * local_2a8 + local_228 * dStack_270 + local_248 * local_278 + local_1e8;
  dStack_e0 = dStack_200 * local_2a8 + dStack_220 * dStack_270 + dStack_240 * local_278 + dStack_1e0
  ;
  local_1e8 = local_1e8 * 0.0;
  dStack_1e0 = dStack_1e0 * 0.0;
  local_d8 = local_2a8 * local_1f8 + dStack_270 * local_218 + local_278 * local_238 + local_1d8;
  dStack_d0 = local_2a8 * dStack_1f0 + dStack_270 * dStack_210 + local_278 * dStack_230 + dStack_1d0
  ;
  local_1d8 = local_1d8 * 0.0;
  dStack_1d0 = dStack_1d0 * 0.0;
  dVar17 = dVar20 * local_208 + dVar24 * local_228 + dVar18 * local_248 + local_1e8;
  dVar21 = dVar20 * dStack_200 + dVar24 * dStack_220 + dVar18 * dStack_240 + dStack_1e0;
  dVar1 = dVar20 * local_1f8 + dVar24 * local_218 + dVar18 * local_238 + local_1d8;
  dVar24 = dVar20 * dStack_1f0 + dVar24 * dStack_210 + dVar18 * dStack_230 + dStack_1d0;
  dVar20 = dVar16 * local_208 + dVar19 * local_228 + dVar9 * local_248 + local_1e8;
  dVar18 = dVar16 * dStack_200 + dVar19 * dStack_220 + dVar9 * dStack_240 + dStack_1e0;
  dVar15 = dVar16 * local_1f8 + dVar19 * local_218 + dVar9 * local_238 + local_1d8;
  dVar16 = dVar16 * dStack_1f0 + dVar19 * dStack_210 + dVar9 * dStack_230 + dStack_1d0;
  local_1e8 = dVar12 * local_208 + dVar11 * local_228 + dVar23 * local_248 + local_1e8;
  dStack_1e0 = dVar12 * dStack_200 + dVar11 * dStack_220 + dVar23 * dStack_240 + dStack_1e0;
  local_1d8 = dVar12 * local_1f8 + dVar11 * local_218 + dVar23 * local_238 + local_1d8;
  dStack_f0 = dVar12 * dStack_1f0 + dVar11 * dStack_210 + dVar23 * dStack_230 + dStack_1d0;
  auVar7._8_4_ = SUB84(dVar24,0);
  auVar7._0_8_ = dVar1;
  auVar7._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar14._8_4_ = SUB84(dVar16,0);
  auVar14._0_8_ = dVar15;
  auVar14._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  dVar16 = dVar1 * dVar1 + dVar17 * dVar17 + dVar21 * dVar21;
  dVar23 = dVar15 * dVar15 + dVar20 * dVar20 + dVar18 * dVar18;
  dVar24 = local_1d8 * local_1d8 + local_1e8 * local_1e8 + dStack_1e0 * dStack_1e0;
  uVar5 = -(ulonglong)(0.0 <= dVar16 + -9.99999993922529e-09);
  dVar16 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar16)) & uVar5);
  uVar5 = -(ulonglong)(0.0 <= dVar23 + -9.99999993922529e-09);
  dVar23 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar23)) & uVar5);
  uVar5 = -(ulonglong)(0.0 <= dVar24 + -9.99999993922529e-09);
  dVar24 = (double)(~uVar5 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar24)) & uVar5);
  auVar22._8_8_ = -(ulonglong)(0.0 <= dStack_290);
  auVar22._0_8_ = -(ulonglong)(0.0 <= local_298);
  auVar22 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar22);
  local_108 = (double)(~-(ulonglong)(0.0 <= local_288) & 0xbff0000000000000 |
                      -(ulonglong)(0.0 <= local_288) & 0x3ff0000000000000);
  dVar9 = auVar22._0_8_;
  local_148 = dVar17 * dVar16 * dVar9;
  local_140 = dVar21 * dVar16 * dVar9;
  uStack_130 = auVar7._8_8_;
  local_138 = dVar16 * dVar1 * dVar9;
  dVar16 = auVar22._8_8_;
  local_120 = dVar18 * dVar23 * dVar16;
  local_128 = dVar16 * dVar20 * dVar23;
  uStack_110 = auVar14._8_8_;
  local_118 = dVar23 * dVar15 * dVar16;
  local_f8 = dVar24 * local_1d8 * local_108;
  local_100 = dStack_1e0 * dVar24 * local_108;
  local_108 = local_108 * local_1e8 * dVar24;
  FUN_14481fd10(&local_268,&local_148);
  dVar16 = local_258 * local_258 + local_268 * local_268;
  dVar15 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
  auVar13._0_8_ = dVar16 + dVar15;
  auVar13._8_8_ = dVar16 + dVar15;
  auVar6._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
  auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
  auVar14 = sqrtpd(auVar13,auVar13);
  auVar7 = divpd(auVar10,auVar14);
  auVar10._0_8_ = auVar7._0_8_ * local_258;
  auVar10._8_8_ = auVar7._8_8_ * dStack_250;
  auVar14 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar10,auVar6);
  param_1[8] = (ulonglong)dVar2;
  param_1[9] = (ulonglong)dVar3;
  param_1[10] = (ulonglong)dVar8;
  param_1[0xb] = (ulonglong)dVar4;
  *param_1 = (ulonglong)(local_268 * auVar7._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar13._0_8_);
  param_1[1] = (ulonglong)(dStack_260 * auVar7._8_8_) &
               -(ulonglong)(9.99999993922529e-09 <= auVar13._8_8_);
  *(undefined1 (*) [16])(param_1 + 2) = auVar14;
  param_1[4] = (ulonglong)local_e8;
  param_1[5] = (ulonglong)dStack_e0;
  param_1[6] = (ulonglong)local_d8;
  param_1[7] = 0;
  if ((local_c0 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402dc19a FUN_1402dc19a body=9177 status=ok
// SIG undefined FUN_1402dc19a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1402dc19a(longlong param_1,double *param_2,undefined8 param_3,double *param_4,
                      double *param_5,int param_6)

{
  double dVar1;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  double *pdVar17;
  double *pdVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar48;
  undefined1 auVar47 [16];
  double dVar49;
  double dVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar64;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar70;
  undefined1 auVar69 [16];
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  double dVar77;
  double dVar78;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar82;
  undefined1 auStack_3a8 [32];
  double *local_388;
  int local_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348 [4];
  double local_328;
  double dStack_320;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8 [4];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  double dVar2;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  lVar15 = FUN_140257578(param_1 + 0x128);
  if (lVar15 == 0) {
    pdVar17 = (double *)&DAT_14c846480;
    pdVar18 = local_2e8;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *pdVar18 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      pdVar18 = pdVar18 + 1;
    }
    pdVar17 = (double *)&DAT_14c846480;
    pdVar18 = local_348;
    for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
      *pdVar18 = *pdVar17;
      pdVar17 = pdVar17 + 1;
      pdVar18 = pdVar18 + 1;
    }
  }
  else {
    FUN_144943c1c(lVar15,local_2e8);
    FUN_144943c1c(lVar15,local_348);
  }
  local_380 = param_6;
  local_388 = param_5;
  uVar13 = FUN_1402de574(param_1,param_2);
  auVar57 = _DAT_149934d80;
  dVar32 = local_2a8._0_8_;
  dVar44 = local_2a8._8_8_;
  dVar42 = local_298._0_8_;
  dVar70 = local_298._8_8_;
  uVar71 = (undefined4)param_1;
  dVar49 = (double)DAT_149934d80;
  dVar31 = DAT_149934d80._8_8_;
  if (param_6 == 2) {
    auVar33 = *(undefined1 (*) [16])(param_4 + 8);
    dVar77 = auVar33._0_8_;
    dVar65 = auVar33._8_8_;
    auVar20 = *(undefined1 (*) [16])(param_4 + 10);
    dVar29 = auVar20._0_8_;
    dVar41 = auVar20._8_8_;
    auVar45 = minpd(local_2a8,auVar33);
    auVar59 = minpd(local_298,auVar20);
    auVar61._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
    auVar61._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
    iVar14 = movmskpd(uVar13,auVar61);
    auVar45._8_8_ = -(ulonglong)(auVar59._8_8_ < 0.0);
    auVar45._0_8_ = -(ulonglong)(auVar59._0_8_ < 0.0);
    uVar16 = movmskpd(uVar71,auVar45);
    if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar64 = *param_4;
      dVar54 = param_4[1];
      dVar82 = param_4[2];
      dVar39 = param_4[3];
      dVar43 = param_4[3];
      dVar31 = param_4[3];
      dVar49 = param_4[1];
      dVar40 = param_4[1];
      dVar30 = param_4[2];
      dVar55 = param_4[2];
      dVar48 = local_2e8[1] * dVar30 * -1.0 +
               local_2e8[2] * dVar49 + local_2e8[3] * *param_4 * 1.0 + local_2e8[0] * dVar43;
      dVar53 = local_2e8[0] * dVar55 * 1.0 +
               local_2e8[3] * dVar40 + local_2e8[2] * *param_4 * -1.0 + local_2e8[1] * dVar31;
      auVar57._0_8_ =
           local_2e8[3] * dVar30 * 1.0 +
           ((*param_4 * local_2e8[1] * 1.0 + local_2e8[2] * dVar43) - local_2e8[0] * dVar49);
      auVar57._8_8_ =
           local_2e8[2] * dVar55 * -1.0 +
           ((*param_4 * local_2e8[0] * -1.0 + local_2e8[3] * dVar31) - local_2e8[1] * dVar40);
      local_2c8 = local_2c8 * dVar77;
      dStack_2c0 = dStack_2c0 * dVar65;
      local_2b8 = local_2b8 * dVar29;
      dStack_2b0 = dStack_2b0 * dVar41;
      dVar55 = dStack_2c0 * dVar64 - dVar54 * local_2c8;
      dVar78 = local_2b8 * dVar54 - dVar82 * dStack_2c0;
      dVar30 = local_2c8 * dVar82 - dVar64 * local_2b8;
      dVar49 = dStack_2b0 * dVar39 - dVar39 * dStack_2b0;
      dVar78 = dVar78 + dVar78;
      dVar30 = dVar30 + dVar30;
      dVar55 = dVar55 + dVar55;
      dVar49 = dVar49 + dVar49;
      dVar40 = (dVar49 * dVar39 - dVar49 * dVar39) + dVar31 * dVar49 + dStack_2b0 + param_4[7];
      uVar13 = 0;
      dVar49 = (dVar55 * dVar54 - dVar82 * dVar30) + dVar43 * dVar78 + local_2c8 + param_4[4];
      dVar31 = (dVar78 * dVar82 - dVar55 * dVar64) + dVar31 * dVar30 + dStack_2c0 + param_4[5];
      dVar43 = (dVar30 * dVar64 - dVar54 * dVar78) + dVar43 * dVar55 + local_2b8 + param_4[6];
    }
    else {
      dVar55 = *param_4;
      dVar64 = param_4[1];
      dVar54 = param_4[2];
      dVar82 = dVar64 + dVar64;
      dVar48 = dVar54 + dVar54;
      dVar30 = dVar55 * (dVar55 + dVar55);
      local_198 = (1.0 - (dVar30 + dVar64 * dVar82)) * dVar29;
      dVar43 = param_4[3];
      dVar53 = dVar48 * dVar43;
      dVar40 = (dVar55 + dVar55) * param_4[3];
      dVar43 = dVar82 * dVar43;
      local_1a8 = (dVar43 + *param_4 * dVar48) * dVar29;
      dStack_1a0 = (dVar48 * dVar64 - dVar40) * dVar29;
      dVar30 = (dVar31 - (dVar54 * dVar48 + dVar30)) * dVar65;
      local_1b8 = (dVar48 * dVar64 + dVar40) * dVar65;
      local_1d8 = (*param_4 * dVar48 - dVar43) * dVar77;
      local_1e8._8_8_ = (dVar82 * dVar55 + dVar53) * dVar77;
      local_1e8._0_8_ = (dVar49 - (dVar54 * dVar48 + dVar64 * dVar82)) * dVar77;
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar30,0);
      local_1c8._0_8_ = (dVar82 * dVar55 - dVar53) * dVar65;
      local_1c8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = param_4[4];
      dStack_180 = param_4[5];
      local_178 = param_4[6];
      uStack_170 = 0x3ff0000000000000;
      dVar43 = local_2e8[1] + local_2e8[1];
      dVar48 = local_2e8[2] + local_2e8[2];
      dVar40 = local_2e8[0] * (local_2e8[0] + local_2e8[0]);
      local_218 = (1.0 - (dVar40 + local_2e8[1] * dVar43)) * dVar42;
      dVar53 = (local_2e8[0] + local_2e8[0]) * local_2e8[3];
      local_268 = (dVar49 - (local_2e8[2] * dVar48 + local_2e8[1] * dVar43)) * dVar32;
      dVar49 = (dVar31 - (local_2e8[2] * dVar48 + dVar40)) * dVar44;
      dStack_260 = (dVar43 * local_2e8[0] + dVar48 * local_2e8[3]) * dVar32;
      local_238 = (dVar48 * local_2e8[1] + dVar53) * dVar44;
      local_258 = (local_2e8[0] * dVar48 - dVar43 * local_2e8[3]) * dVar32;
      uStack_250 = 0;
      local_248._8_4_ = SUB84(dVar49,0);
      local_248._0_8_ = (dVar43 * local_2e8[0] - dVar48 * local_2e8[3]) * dVar44;
      local_248._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      uStack_230 = 0;
      local_228._8_8_ = (dVar48 * local_2e8[1] - dVar53) * dVar42;
      local_228._0_8_ = (dVar43 * local_2e8[3] + local_2e8[0] * dVar48) * dVar42;
      uStack_210 = 0;
      local_208 = local_2c8;
      dStack_200 = dStack_2c0;
      local_1f8 = local_2b8;
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar33._8_8_ = -(ulonglong)(0.0 <= dVar44 * dVar65);
      auVar33._0_8_ = -(ulonglong)(0.0 <= dVar32 * dVar77);
      auVar33 = blendvpd(_DAT_149936790,auVar57,auVar33);
      uVar19 = -(ulonglong)(0.0 <= dVar42 * dVar29);
      dVar49 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
      dVar31 = auVar33._0_8_;
      local_158 = local_158 * dVar31;
      local_160 = local_160 * dVar31;
      local_168 = local_168 * dVar31;
      dVar31 = auVar33._8_8_;
      local_138 = local_138 * dVar31;
      local_140 = local_140 * dVar31;
      local_148 = dVar31 * local_148;
      local_118 = local_118 * dVar49;
      local_120 = local_120 * dVar49;
      local_128 = dVar49 * local_128;
      pdVar17 = &local_288;
      iVar14 = FUN_14481fd10(pdVar17,&local_168);
      uVar13 = SUB84(pdVar17,0);
      dVar49 = local_278 * local_278 + local_288 * local_288;
      dVar31 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar59._0_8_ = dVar49 + dVar31;
      auVar59._8_8_ = dVar49 + dVar31;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_);
      auVar33 = sqrtpd(auVar59,auVar59);
      auVar33 = divpd(auVar57,auVar33);
      auVar74._0_8_ = auVar33._0_8_ * local_278;
      auVar74._8_8_ = auVar33._8_8_ * dStack_270;
      auVar57 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar74,auVar20);
      dVar48 = (double)((ulonglong)(local_288 * auVar33._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar59._0_8_));
      dVar53 = (double)((ulonglong)(dStack_280 * auVar33._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar59._8_8_));
      dVar40 = 0.0;
      auVar33 = *(undefined1 (*) [16])(param_4 + 8);
      auVar20 = *(undefined1 (*) [16])(param_4 + 10);
      dVar49 = local_108;
      dVar31 = dStack_100;
      dVar43 = local_f8;
    }
    *param_2 = dVar48;
    param_2[1] = dVar53;
    *(undefined1 (*) [16])(param_2 + 2) = auVar57;
    param_2[4] = dVar49;
    param_2[5] = dVar31;
    param_2[6] = dVar43;
    param_2[7] = dVar40;
    auVar5._8_4_ = SUB84(dVar44 * dVar65,0);
    auVar5._0_8_ = dVar32 * dVar77;
    auVar5._12_4_ = (int)((ulonglong)(dVar44 * dVar65) >> 0x20);
    *(undefined1 (*) [16])(param_2 + 8) = auVar5;
    param_2[10] = dVar42 * dVar29;
    param_2[0xb] = dVar70 * dVar41;
    auVar57 = *(undefined1 (*) [16])(param_5 + 8);
    dVar32 = auVar57._0_8_;
    dVar49 = auVar57._8_8_;
    auVar45 = *(undefined1 (*) [16])(param_5 + 10);
    dVar42 = auVar45._0_8_;
    dVar44 = auVar45._8_8_;
    auVar57 = minpd(auVar57,auVar33);
    auVar45 = minpd(auVar45,auVar20);
    auVar50._8_8_ = -(ulonglong)(auVar57._8_8_ < 0.0);
    auVar50._0_8_ = -(ulonglong)(auVar57._0_8_ < 0.0);
    iVar14 = movmskpd(iVar14,auVar50);
    auVar60._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
    auVar60._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
    uVar16 = movmskpd(uVar13,auVar60);
    local_328 = auVar33._0_8_;
    dStack_320 = auVar33._8_8_;
    if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar43 = *param_5;
      dVar48 = param_5[1];
      dVar53 = param_5[2];
      dVar40 = param_5[3];
      uVar13 = *(undefined4 *)param_4;
      uVar71 = *(undefined4 *)((longlong)param_4 + 4);
      uVar72 = *(undefined4 *)(param_4 + 1);
      uVar73 = *(undefined4 *)((longlong)param_4 + 0xc);
      dVar30 = param_4[2];
      dVar55 = param_4[3];
      dVar65 = param_4[3];
      dVar41 = param_4[3];
      dVar70 = param_4[1];
      dVar31 = param_4[1];
      dVar77 = param_4[2];
      dVar29 = param_4[2];
      dVar64 = dVar48 * dVar77 * -1.0 + dVar53 * dVar70 + dVar40 * *param_4 * 1.0 + dVar43 * dVar65;
      dVar54 = dVar43 * dVar29 * 1.0 + dVar40 * dVar31 + dVar53 * *param_4 * -1.0 + dVar48 * dVar41;
      auVar66._0_8_ =
           dVar40 * dVar77 * 1.0 + ((*param_4 * dVar48 * 1.0 + dVar53 * dVar65) - dVar43 * dVar70);
      auVar66._8_8_ =
           dVar53 * dVar29 * -1.0 + ((*param_4 * dVar43 * -1.0 + dVar40 * dVar41) - dVar48 * dVar31)
      ;
      local_328 = param_5[4] * local_328;
      dStack_320 = param_5[5] * dStack_320;
      local_318 = *(undefined4 *)(param_5 + 6);
      uStack_314 = *(undefined4 *)((longlong)param_5 + 0x34);
      uStack_310 = *(undefined4 *)(param_5 + 7);
      uStack_30c = *(undefined4 *)((longlong)param_5 + 0x3c);
      goto LAB_1402dca06;
    }
    dVar41 = *param_4;
    dVar43 = param_4[1];
    dVar48 = param_4[2];
    dVar53 = dVar43 + dVar43;
    dVar31 = dVar48 + dVar48;
    dVar40 = dVar41 * (dVar41 + dVar41);
    dStack_1a0 = auVar20._0_8_;
    local_198 = (1.0 - (dVar40 + dVar43 * dVar53)) * dStack_1a0;
    dVar70 = param_4[3];
    dVar77 = dVar31 * dVar70;
    dVar65 = (dVar41 + dVar41) * param_4[3];
    dVar70 = dVar53 * dVar70;
    local_1a8 = (dVar70 + *param_4 * dVar31) * dStack_1a0;
    dVar29 = dStack_1a0 * dVar42;
    dVar44 = auVar20._8_8_ * dVar44;
    dVar30 = (dVar53 * dVar41 + dVar77) * local_328;
    local_1b8 = (dVar31 * dVar43 + dVar65) * dStack_320;
    dStack_1a0 = (dVar31 * dVar43 - dVar65) * dStack_1a0;
    local_1d8 = (*param_4 * dVar31 - dVar70) * local_328;
    local_1e8._8_4_ = SUB84(dVar30,0);
    local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar48 * dVar31 + dVar43 * dVar53)) * local_328;
    local_1e8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    local_1c8._8_8_ = (DAT_149934d80._8_8_ - (dVar48 * dVar31 + dVar40)) * dStack_320;
    local_1c8._0_8_ = (dVar53 * dVar41 - dVar77) * dStack_320;
    local_188 = param_4[4];
    dStack_180 = param_4[5];
    local_178 = param_4[6];
    dVar77 = *param_5;
    dVar65 = param_5[1];
    dVar41 = param_5[2];
    dVar53 = dVar65 + dVar65;
    dVar40 = dVar41 + dVar41;
    dVar31 = dVar77 * (dVar77 + dVar77);
    local_218 = (1.0 - (dVar31 + dVar65 * dVar53)) * dVar42;
    dVar70 = param_5[3];
    dVar30 = dVar40 * dVar70;
    dVar55 = (dVar77 + dVar77) * param_5[3];
    dVar70 = dVar53 * dVar70;
    dVar43 = local_328 * dVar32;
    dVar48 = dStack_320 * dVar49;
    local_268 = ((double)DAT_149934d80 - (dVar41 * dVar40 + dVar65 * dVar53)) * dVar32;
    dStack_260 = (dVar53 * dVar77 + dVar30) * dVar32;
    local_238 = (dVar40 * dVar65 + dVar55) * dVar49;
    local_258 = (*param_5 * dVar40 - dVar70) * dVar32;
    local_248._8_8_ = (DAT_149934d80._8_8_ - (dVar41 * dVar40 + dVar31)) * dVar49;
    local_248._0_8_ = (dVar53 * dVar77 - dVar30) * dVar49;
    local_228._8_8_ = (dVar40 * dVar65 - dVar55) * dVar42;
    local_228._0_8_ = (dVar70 + *param_5 * dVar40) * dVar42;
    local_208 = param_5[4];
    dStack_200 = param_5[5];
    local_1f8 = param_5[6];
LAB_1402dd5af:
    auVar57 = _DAT_149934d80;
    uStack_170 = 0x3ff0000000000000;
    uStack_190 = 0;
    uStack_1b0 = 0;
    uStack_1d0 = 0;
    uStack_1f0 = 0x3ff0000000000000;
    uStack_210 = 0;
    uStack_230 = 0;
    uStack_250 = 0;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    auVar21._8_8_ = -(ulonglong)(0.0 <= dVar48);
    auVar21._0_8_ = -(ulonglong)(0.0 <= dVar43);
    auVar33 = blendvpd(_DAT_149936790,auVar57,auVar21);
    dVar32 = (double)(~-(ulonglong)(0.0 <= dVar29) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= dVar29) & 0x3ff0000000000000);
    dVar42 = auVar33._0_8_;
    local_158 = local_158 * dVar42;
    local_160 = local_160 * dVar42;
    local_168 = local_168 * dVar42;
    dVar42 = auVar33._8_8_;
    local_138 = local_138 * dVar42;
    local_140 = local_140 * dVar42;
    local_148 = dVar42 * local_148;
    local_118 = local_118 * dVar32;
    local_120 = local_120 * dVar32;
    local_128 = dVar32 * local_128;
    FUN_14481fd10(&local_288,&local_168);
    dVar32 = local_278 * local_278 + local_288 * local_288;
    dVar42 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar35._0_8_ = dVar32 + dVar42;
    auVar35._8_8_ = dVar32 + dVar42;
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
    auVar33 = sqrtpd(auVar35,auVar35);
    auVar57 = divpd(auVar57,auVar33);
    auVar69._0_8_ = auVar57._0_8_ * local_278;
    auVar69._8_8_ = auVar57._8_8_ * dStack_270;
    dVar64 = (double)((ulonglong)(local_288 * auVar57._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
    dVar54 = (double)((ulonglong)(dStack_280 * auVar57._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
    auVar66 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar69,auVar22);
    dVar70 = 0.0;
  }
  else {
    if (param_6 == 1) {
      auVar33 = *(undefined1 (*) [16])(param_5 + 8);
      dVar77 = auVar33._0_8_;
      dVar65 = auVar33._8_8_;
      auVar20 = *(undefined1 (*) [16])(param_5 + 10);
      dVar29 = auVar20._0_8_;
      auVar33 = minpd(local_2a8,auVar33);
      auVar45 = minpd(local_298,auVar20);
      auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      iVar14 = movmskpd(uVar13,auVar34);
      auVar46._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
      auVar46._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
      uVar16 = movmskpd(uVar71,auVar46);
      if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
        dVar55 = *param_5;
        dVar64 = param_5[1];
        dVar54 = param_5[2];
        dVar82 = param_5[3];
        dVar31 = param_5[3];
        dVar41 = param_5[3];
        dVar49 = param_5[1];
        dVar53 = param_5[1];
        dVar40 = param_5[2];
        dVar30 = param_5[2];
        dVar43 = local_2e8[1] * dVar40 * -1.0 +
                 local_2e8[2] * dVar49 + local_2e8[3] * *param_5 * 1.0 + local_2e8[0] * dVar31;
        dVar48 = local_2e8[0] * dVar30 * 1.0 +
                 local_2e8[3] * dVar53 + local_2e8[2] * *param_5 * -1.0 + local_2e8[1] * dVar41;
        auVar67._0_8_ =
             local_2e8[3] * dVar40 * 1.0 +
             ((*param_5 * local_2e8[1] * 1.0 + local_2e8[2] * dVar31) - local_2e8[0] * dVar49);
        auVar67._8_8_ =
             local_2e8[2] * dVar30 * -1.0 +
             ((*param_5 * local_2e8[0] * -1.0 + local_2e8[3] * dVar41) - local_2e8[1] * dVar53);
        local_2c8 = local_2c8 * dVar77;
        dStack_2c0 = dStack_2c0 * dVar65;
        local_2b8 = local_2b8 * dVar29;
        dStack_2b0 = dStack_2b0 * auVar20._8_8_;
        dVar30 = dStack_2c0 * dVar55 - dVar64 * local_2c8;
        dVar39 = local_2b8 * dVar64 - dVar54 * dStack_2c0;
        dVar40 = local_2c8 * dVar54 - dVar55 * local_2b8;
        dVar49 = dStack_2b0 * dVar82 - dVar82 * dStack_2b0;
        dVar39 = dVar39 + dVar39;
        dVar40 = dVar40 + dVar40;
        dVar30 = dVar30 + dVar30;
        dVar49 = dVar49 + dVar49;
        dVar53 = (dVar49 * dVar82 - dVar49 * dVar82) + dVar41 * dVar49 + dStack_2b0 + param_5[7];
        uVar13 = 0;
        dVar49 = (dVar40 * dVar55 - dVar64 * dVar39) + dVar31 * dVar30 + local_2b8 + param_5[6];
        dVar31 = (dVar30 * dVar64 - dVar54 * dVar40) + dVar31 * dVar39 + local_2c8 + param_5[4];
        dVar41 = (dVar39 * dVar54 - dVar30 * dVar55) + dVar41 * dVar40 + dStack_2c0 + param_5[5];
      }
      else {
        dVar53 = *param_5;
        dVar40 = param_5[1];
        dVar30 = param_5[2];
        dVar48 = dVar40 + dVar40;
        dVar55 = dVar30 + dVar30;
        dVar43 = dVar53 * (dVar53 + dVar53);
        local_198 = (1.0 - (dVar43 + dVar40 * dVar48)) * dVar29;
        dVar41 = param_5[3];
        dVar64 = dVar55 * dVar41;
        dVar54 = (dVar53 + dVar53) * param_5[3];
        dVar41 = dVar48 * dVar41;
        local_1a8 = (dVar41 + *param_5 * dVar55) * dVar29;
        dStack_1a0 = (dVar55 * dVar40 - dVar54) * dVar29;
        dVar43 = (dVar31 - (dVar30 * dVar55 + dVar43)) * dVar65;
        local_1b8 = (dVar55 * dVar40 + dVar54) * dVar65;
        local_1d8 = (*param_5 * dVar55 - dVar41) * dVar77;
        local_1e8._8_8_ = (dVar48 * dVar53 + dVar64) * dVar77;
        local_1e8._0_8_ = (dVar49 - (dVar30 * dVar55 + dVar40 * dVar48)) * dVar77;
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar43,0);
        local_1c8._0_8_ = (dVar48 * dVar53 - dVar64) * dVar65;
        local_1c8._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = param_5[4];
        dStack_180 = param_5[5];
        local_178 = param_5[6];
        uStack_170 = 0x3ff0000000000000;
        dVar41 = local_2e8[1] + local_2e8[1];
        dVar43 = local_2e8[2] + local_2e8[2];
        dVar53 = local_2e8[0] * (local_2e8[0] + local_2e8[0]);
        local_218 = (1.0 - (dVar53 + local_2e8[1] * dVar41)) * dVar42;
        dVar48 = (local_2e8[0] + local_2e8[0]) * local_2e8[3];
        local_268 = (dVar49 - (local_2e8[2] * dVar43 + local_2e8[1] * dVar41)) * dVar32;
        dVar49 = (dVar31 - (local_2e8[2] * dVar43 + dVar53)) * dVar44;
        dStack_260 = (dVar41 * local_2e8[0] + dVar43 * local_2e8[3]) * dVar32;
        local_238 = (dVar43 * local_2e8[1] + dVar48) * dVar44;
        local_258 = (local_2e8[0] * dVar43 - dVar41 * local_2e8[3]) * dVar32;
        uStack_250 = 0;
        local_248._8_4_ = SUB84(dVar49,0);
        local_248._0_8_ = (dVar41 * local_2e8[0] - dVar43 * local_2e8[3]) * dVar44;
        local_248._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
        uStack_230 = 0;
        local_228._8_8_ = (dVar43 * local_2e8[1] - dVar48) * dVar42;
        local_228._0_8_ = (dVar41 * local_2e8[3] + local_2e8[0] * dVar43) * dVar42;
        uStack_210 = 0;
        local_208 = local_2c8;
        dStack_200 = dStack_2c0;
        local_1f8 = local_2b8;
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar23._8_8_ = -(ulonglong)(0.0 <= dVar44 * dVar65);
        auVar23._0_8_ = -(ulonglong)(0.0 <= dVar32 * dVar77);
        auVar33 = blendvpd(_DAT_149936790,auVar57,auVar23);
        uVar19 = -(ulonglong)(0.0 <= dVar42 * dVar29);
        dVar49 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
        dVar31 = auVar33._0_8_;
        local_158 = local_158 * dVar31;
        local_160 = local_160 * dVar31;
        local_168 = local_168 * dVar31;
        dVar31 = auVar33._8_8_;
        local_138 = local_138 * dVar31;
        local_140 = local_140 * dVar31;
        local_148 = dVar31 * local_148;
        local_118 = local_118 * dVar49;
        local_120 = local_120 * dVar49;
        local_128 = dVar49 * local_128;
        pdVar17 = &local_288;
        iVar14 = FUN_14481fd10(pdVar17,&local_168);
        uVar13 = SUB84(pdVar17,0);
        dVar49 = local_278 * local_278 + local_288 * local_288;
        dVar31 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar36._0_8_ = dVar49 + dVar31;
        auVar36._8_8_ = dVar49 + dVar31;
        auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
        auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
        auVar33 = sqrtpd(auVar36,auVar36);
        auVar57 = divpd(auVar57,auVar33);
        auVar81._0_8_ = auVar57._0_8_ * local_278;
        auVar81._8_8_ = auVar57._8_8_ * dStack_270;
        dVar43 = (double)((ulonglong)(local_288 * auVar57._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
        dVar48 = (double)((ulonglong)(dStack_280 * auVar57._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
        auVar67 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar81,auVar24);
        dVar53 = 0.0;
        dVar49 = local_f8;
        dVar31 = local_108;
        dVar41 = dStack_100;
      }
      dVar70 = dVar70 * auVar20._8_8_;
      dVar42 = dVar42 * dVar29;
      dVar44 = dVar44 * dVar65;
      dVar32 = dVar32 * dVar77;
      auVar57 = *(undefined1 (*) [16])(param_4 + 8);
      dVar77 = auVar57._0_8_;
      dVar65 = auVar57._8_8_;
      auVar33 = *(undefined1 (*) [16])(param_4 + 10);
      dVar29 = auVar33._0_8_;
      dVar40 = auVar33._8_8_;
      local_378._8_4_ = SUB84(dVar44,0);
      local_378._0_8_ = dVar32;
      local_378._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      auVar56._8_8_ = dVar44;
      auVar56._0_8_ = dVar32;
      auVar57 = minpd(auVar56,auVar57);
      auVar79._8_8_ = dVar70;
      auVar79._0_8_ = dVar42;
      auVar33 = minpd(auVar79,auVar33);
      auVar58._8_8_ = -(ulonglong)(auVar57._8_8_ < 0.0);
      auVar58._0_8_ = -(ulonglong)(auVar57._0_8_ < 0.0);
      iVar14 = movmskpd(iVar14,auVar58);
      auVar80._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
      auVar80._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
      uVar16 = movmskpd(uVar13,auVar80);
      dVar44 = auVar67._0_8_;
      dVar30 = auVar67._8_8_;
      uVar12 = local_378._8_8_;
      if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
        dVar8 = *param_4;
        dVar9 = param_4[1];
        dVar54 = param_4[3];
        dVar82 = param_4[3];
        dVar78 = param_4[1];
        dVar39 = param_4[1];
        dVar10 = param_4[2];
        dVar11 = param_4[3];
        dVar1 = param_4[2];
        dVar2 = param_4[2];
        dVar55 = dVar48 * dVar1 * -1.0 + dVar44 * dVar78 + dVar30 * *param_4 * 1.0 + dVar43 * dVar54
        ;
        dVar64 = dVar43 * dVar2 * 1.0 + dVar30 * dVar39 + dVar44 * *param_4 * -1.0 + dVar48 * dVar82
        ;
        auVar75._0_8_ =
             dVar30 * dVar1 * 1.0 + ((*param_4 * dVar48 * 1.0 + dVar44 * dVar54) - dVar43 * dVar78);
        auVar75._8_8_ =
             dVar44 * dVar2 * -1.0 +
             ((*param_4 * dVar43 * -1.0 + dVar30 * dVar82) - dVar48 * dVar39);
        dVar31 = dVar31 * dVar77;
        dVar41 = dVar41 * dVar65;
        dVar49 = dVar49 * dVar29;
        dVar53 = dVar53 * dVar40;
        dVar44 = dVar41 * dVar8 - dVar31 * dVar9;
        dVar48 = dVar49 * dVar9 - dVar41 * dVar10;
        dVar30 = dVar31 * dVar10 - dVar49 * dVar8;
        dVar43 = dVar53 * dVar11 - dVar53 * dVar11;
        dVar48 = dVar48 + dVar48;
        dVar30 = dVar30 + dVar30;
        dVar44 = dVar44 + dVar44;
        dVar43 = dVar43 + dVar43;
        local_108 = (dVar44 * dVar9 - dVar10 * dVar30) + dVar54 * dVar48 + dVar31 + param_4[4];
        dStack_100 = (dVar48 * dVar10 - dVar44 * dVar8) + dVar82 * dVar30 + dVar41 + param_4[5];
        local_f8 = (dVar30 * dVar8 - dVar9 * dVar48) + dVar54 * dVar44 + dVar49 + param_4[6];
        dVar49 = (dVar43 * dVar11 - dVar43 * dVar11) + dVar82 * dVar43 + dVar53 + param_4[7];
      }
      else {
        dVar1 = *param_4;
        dVar8 = param_4[1];
        dVar9 = param_4[2];
        dVar82 = dVar8 + dVar8;
        dVar39 = dVar9 + dVar9;
        dVar55 = dVar1 * (dVar1 + dVar1);
        dVar64 = dVar8 * dVar82;
        auVar6._8_4_ = SUB84(dVar64,0);
        auVar6._0_8_ = dVar55;
        auVar6._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
        dVar53 = param_4[3];
        dVar78 = dVar39 * dVar53;
        dVar2 = (dVar1 + dVar1) * param_4[3];
        dVar53 = dVar82 * dVar53;
        local_358._8_4_ = SUB84(dVar70,0);
        local_358._0_8_ = dVar42;
        local_358._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
        local_198 = (1.0 - (dVar55 + dVar64)) * dVar29;
        dVar54 = (0.0 - (dVar55 + auVar6._8_8_)) * dVar40;
        local_368._8_4_ = SUB84(dVar54,0);
        local_368._0_8_ = local_198;
        local_368._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
        local_1a8 = (dVar53 + *param_4 * dVar39) * dVar29;
        dStack_1a0 = (dVar39 * dVar8 - dVar2) * dVar29;
        dVar54 = (double)local_378._8_8_ * dVar65;
        local_1b8 = (dVar39 * dVar8 + dVar2) * dVar65;
        local_1d8 = (*param_4 * dVar39 - dVar53) * dVar77;
        local_1e8._8_8_ = (dVar82 * dVar1 + dVar78) * dVar77;
        local_1e8._0_8_ = (1.0 - (dVar9 * dVar39 + dVar64)) * dVar77;
        uStack_1d0 = 0;
        local_1c8._8_8_ = (1.0 - (dVar9 * dVar39 + dVar55)) * dVar65;
        local_1c8._0_8_ = (dVar82 * dVar1 - dVar78) * dVar65;
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = param_4[4];
        dStack_180 = param_4[5];
        local_178 = param_4[6];
        uStack_170 = 0x3ff0000000000000;
        dVar64 = dVar48 + dVar48;
        dVar82 = dVar44 + dVar44;
        dVar53 = dVar43 * (dVar43 + dVar43);
        local_218 = (1.0 - (dVar53 + dVar48 * dVar64)) * dVar42;
        dVar39 = (dVar43 + dVar43) * dVar30;
        dVar55 = (dVar82 * dVar48 - dVar39) * dVar42;
        local_268 = (1.0 - (dVar44 * dVar82 + dVar48 * dVar64)) * dVar32;
        dStack_260 = (dVar64 * dVar43 + dVar82 * dVar30) * dVar32;
        local_238 = (dVar82 * dVar48 + dVar39) * (double)local_378._8_8_;
        local_258 = (dVar43 * dVar82 - dVar64 * dVar30) * dVar32;
        uStack_250 = 0;
        local_248._8_8_ = (1.0 - (dVar44 * dVar82 + dVar53)) * (double)local_378._8_8_;
        local_248._0_8_ = (dVar64 * dVar43 - dVar82 * dVar30) * (double)local_378._8_8_;
        uStack_230 = 0;
        local_228._8_4_ = SUB84(dVar55,0);
        local_228._0_8_ = (dVar43 * dVar82 + dVar64 * dVar30) * dVar42;
        local_228._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
        uStack_210 = 0;
        uStack_1f0 = 0x3ff0000000000000;
        local_208 = dVar31;
        dStack_200 = dVar41;
        local_1f8 = dVar49;
        FUN_1447fea8d(&local_168);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar57 = _DAT_149934d80;
        auVar25._8_8_ = -(ulonglong)(0.0 <= dVar54);
        auVar25._0_8_ = -(ulonglong)(0.0 <= dVar32 * dVar77);
        auVar33 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar25);
        uVar19 = -(ulonglong)(0.0 <= dVar42 * dVar29);
        dVar49 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
        dVar44 = auVar33._0_8_;
        local_158 = local_158 * dVar44;
        local_160 = local_160 * dVar44;
        local_168 = local_168 * dVar44;
        dVar44 = auVar33._8_8_;
        local_138 = local_138 * dVar44;
        local_140 = local_140 * dVar44;
        local_148 = dVar44 * local_148;
        local_118 = local_118 * dVar49;
        local_120 = local_120 * dVar49;
        local_128 = dVar49 * local_128;
        FUN_14481fd10(&local_288,&local_168);
        dVar49 = local_278 * local_278 + local_288 * local_288;
        dVar44 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar37._0_8_ = dVar49 + dVar44;
        auVar37._8_8_ = dVar49 + dVar44;
        auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
        auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
        auVar33 = sqrtpd(auVar37,auVar37);
        auVar57 = divpd(auVar57,auVar33);
        auVar47._0_8_ = auVar57._0_8_ * local_278;
        auVar47._8_8_ = auVar57._8_8_ * dStack_270;
        dVar55 = (double)((ulonglong)(local_288 * auVar57._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
        dVar64 = (double)((ulonglong)(dStack_280 * auVar57._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
        auVar75 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar26);
        dVar49 = 0.0;
      }
      *param_2 = dVar55;
      param_2[1] = dVar64;
      *(undefined1 (*) [16])(param_2 + 2) = auVar75;
      param_2[4] = local_108;
      param_2[5] = dStack_100;
      param_2[6] = local_f8;
      param_2[7] = dVar49;
      auVar7._8_4_ = SUB84((double)uVar12 * dVar65,0);
      auVar7._0_8_ = dVar32 * dVar77;
      auVar7._12_4_ = (int)((ulonglong)((double)uVar12 * dVar65) >> 0x20);
      *(undefined1 (*) [16])(param_2 + 8) = auVar7;
      param_2[10] = dVar42 * dVar29;
      param_2[0xb] = dVar70 * dVar40;
      pdVar17 = param_2 + 0xc;
      for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
        *pdVar17 = *param_4;
        param_4 = param_4 + 1;
        pdVar17 = pdVar17 + 1;
      }
      goto LAB_1402dcb22;
    }
    auVar33 = *(undefined1 (*) [16])(param_4 + 8);
    dVar77 = auVar33._0_8_;
    dVar65 = auVar33._8_8_;
    auVar20 = *(undefined1 (*) [16])(param_4 + 10);
    dVar29 = auVar20._0_8_;
    dVar41 = auVar20._8_8_;
    auVar45 = minpd(local_2a8,auVar33);
    auVar61 = minpd(local_298,auVar20);
    auVar51._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
    auVar51._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
    iVar14 = movmskpd(uVar13,auVar51);
    auVar62._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
    auVar62._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
    uVar16 = movmskpd(uVar71,auVar62);
    if ((uVar16 & 0x3fffffff) == 0 && iVar14 == 0) {
      dVar64 = *param_4;
      dVar54 = param_4[1];
      dVar82 = param_4[2];
      dVar39 = param_4[3];
      dVar43 = param_4[3];
      dVar31 = param_4[3];
      dVar49 = param_4[1];
      dVar40 = param_4[1];
      dVar30 = param_4[2];
      dVar55 = param_4[2];
      dVar48 = local_2e8[1] * dVar30 * -1.0 +
               local_2e8[2] * dVar49 + local_2e8[3] * *param_4 * 1.0 + local_2e8[0] * dVar43;
      dVar53 = local_2e8[0] * dVar55 * 1.0 +
               local_2e8[3] * dVar40 + local_2e8[2] * *param_4 * -1.0 + local_2e8[1] * dVar31;
      auVar68._0_8_ =
           local_2e8[3] * dVar30 * 1.0 +
           ((*param_4 * local_2e8[1] * 1.0 + local_2e8[2] * dVar43) - local_2e8[0] * dVar49);
      auVar68._8_8_ =
           local_2e8[2] * dVar55 * -1.0 +
           ((*param_4 * local_2e8[0] * -1.0 + local_2e8[3] * dVar31) - local_2e8[1] * dVar40);
      local_2c8 = local_2c8 * dVar77;
      dStack_2c0 = dStack_2c0 * dVar65;
      local_2b8 = local_2b8 * dVar29;
      dStack_2b0 = dStack_2b0 * dVar41;
      dVar55 = dStack_2c0 * dVar64 - dVar54 * local_2c8;
      dVar78 = local_2b8 * dVar54 - dVar82 * dStack_2c0;
      dVar30 = local_2c8 * dVar82 - dVar64 * local_2b8;
      dVar49 = dStack_2b0 * dVar39 - dVar39 * dStack_2b0;
      dVar78 = dVar78 + dVar78;
      dVar30 = dVar30 + dVar30;
      dVar55 = dVar55 + dVar55;
      dVar49 = dVar49 + dVar49;
      dVar40 = (dVar49 * dVar39 - dVar49 * dVar39) + dVar31 * dVar49 + dStack_2b0 + param_4[7];
      uVar13 = 0;
      dVar49 = (dVar55 * dVar54 - dVar82 * dVar30) + dVar43 * dVar78 + local_2c8 + param_4[4];
      dVar31 = (dVar78 * dVar82 - dVar55 * dVar64) + dVar31 * dVar30 + dStack_2c0 + param_4[5];
      dVar43 = (dVar30 * dVar64 - dVar54 * dVar78) + dVar43 * dVar55 + local_2b8 + param_4[6];
    }
    else {
      dVar55 = *param_4;
      dVar64 = param_4[1];
      dVar54 = param_4[2];
      dVar82 = dVar64 + dVar64;
      dVar48 = dVar54 + dVar54;
      dVar30 = dVar55 * (dVar55 + dVar55);
      local_198 = (1.0 - (dVar30 + dVar64 * dVar82)) * dVar29;
      dVar43 = param_4[3];
      dVar53 = dVar48 * dVar43;
      dVar40 = (dVar55 + dVar55) * param_4[3];
      dVar43 = dVar82 * dVar43;
      local_1a8 = (dVar43 + *param_4 * dVar48) * dVar29;
      dStack_1a0 = (dVar48 * dVar64 - dVar40) * dVar29;
      dVar30 = (dVar31 - (dVar54 * dVar48 + dVar30)) * dVar65;
      local_1b8 = (dVar48 * dVar64 + dVar40) * dVar65;
      local_1d8 = (*param_4 * dVar48 - dVar43) * dVar77;
      local_1e8._8_8_ = (dVar82 * dVar55 + dVar53) * dVar77;
      local_1e8._0_8_ = (dVar49 - (dVar54 * dVar48 + dVar64 * dVar82)) * dVar77;
      uStack_1d0 = 0;
      local_1c8._8_4_ = SUB84(dVar30,0);
      local_1c8._0_8_ = (dVar82 * dVar55 - dVar53) * dVar65;
      local_1c8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
      uStack_1b0 = 0;
      uStack_190 = 0;
      local_188 = param_4[4];
      dStack_180 = param_4[5];
      local_178 = param_4[6];
      uStack_170 = 0x3ff0000000000000;
      dVar43 = local_2e8[1] + local_2e8[1];
      dVar48 = local_2e8[2] + local_2e8[2];
      dVar40 = local_2e8[0] * (local_2e8[0] + local_2e8[0]);
      local_218 = (1.0 - (dVar40 + local_2e8[1] * dVar43)) * dVar42;
      dVar53 = (local_2e8[0] + local_2e8[0]) * local_2e8[3];
      local_268 = (dVar49 - (local_2e8[2] * dVar48 + local_2e8[1] * dVar43)) * dVar32;
      dVar49 = (dVar31 - (local_2e8[2] * dVar48 + dVar40)) * dVar44;
      dStack_260 = (dVar43 * local_2e8[0] + dVar48 * local_2e8[3]) * dVar32;
      local_238 = (dVar48 * local_2e8[1] + dVar53) * dVar44;
      local_258 = (local_2e8[0] * dVar48 - dVar43 * local_2e8[3]) * dVar32;
      uStack_250 = 0;
      local_248._8_4_ = SUB84(dVar49,0);
      local_248._0_8_ = (dVar43 * local_2e8[0] - dVar48 * local_2e8[3]) * dVar44;
      local_248._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
      uStack_230 = 0;
      local_228._8_8_ = (dVar48 * local_2e8[1] - dVar53) * dVar42;
      local_228._0_8_ = (dVar43 * local_2e8[3] + local_2e8[0] * dVar48) * dVar42;
      uStack_210 = 0;
      local_208 = local_2c8;
      dStack_200 = dStack_2c0;
      local_1f8 = local_2b8;
      uStack_1f0 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_168);
      FUN_144a1c686(&local_168,0x3e45798ee0000000);
      auVar27._8_8_ = -(ulonglong)(0.0 <= dVar44 * dVar65);
      auVar27._0_8_ = -(ulonglong)(0.0 <= dVar32 * dVar77);
      auVar33 = blendvpd(_DAT_149936790,auVar57,auVar27);
      uVar19 = -(ulonglong)(0.0 <= dVar42 * dVar29);
      dVar49 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
      dVar31 = auVar33._0_8_;
      local_158 = local_158 * dVar31;
      local_160 = local_160 * dVar31;
      local_168 = local_168 * dVar31;
      dVar31 = auVar33._8_8_;
      local_138 = local_138 * dVar31;
      local_140 = local_140 * dVar31;
      local_148 = dVar31 * local_148;
      local_118 = local_118 * dVar49;
      local_120 = local_120 * dVar49;
      local_128 = dVar49 * local_128;
      pdVar17 = &local_288;
      iVar14 = FUN_14481fd10(pdVar17,&local_168);
      uVar13 = SUB84(pdVar17,0);
      dVar49 = local_278 * local_278 + local_288 * local_288;
      dVar31 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
      auVar38._0_8_ = dVar49 + dVar31;
      auVar38._8_8_ = dVar49 + dVar31;
      auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
      auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
      auVar33 = sqrtpd(auVar38,auVar38);
      auVar57 = divpd(auVar57,auVar33);
      auVar76._0_8_ = auVar57._0_8_ * local_278;
      auVar76._8_8_ = auVar57._8_8_ * dStack_270;
      auVar68 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar76,auVar28);
      dVar48 = (double)((ulonglong)(local_288 * auVar57._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
      dVar53 = (double)((ulonglong)(dStack_280 * auVar57._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
      dVar40 = 0.0;
      auVar33 = *(undefined1 (*) [16])(param_4 + 8);
      auVar20 = *(undefined1 (*) [16])(param_4 + 10);
      dVar49 = local_108;
      dVar31 = dStack_100;
      dVar43 = local_f8;
    }
    *param_2 = dVar48;
    param_2[1] = dVar53;
    *(undefined1 (*) [16])(param_2 + 2) = auVar68;
    param_2[4] = dVar49;
    param_2[5] = dVar31;
    param_2[6] = dVar43;
    param_2[7] = dVar40;
    auVar3._8_4_ = SUB84(dVar44 * dVar65,0);
    auVar3._0_8_ = dVar32 * dVar77;
    auVar3._12_4_ = (int)((ulonglong)(dVar44 * dVar65) >> 0x20);
    *(undefined1 (*) [16])(param_2 + 8) = auVar3;
    param_2[10] = dVar42 * dVar29;
    param_2[0xb] = dVar70 * dVar41;
    dVar32 = local_308._0_8_;
    dVar49 = local_308._8_8_;
    dVar42 = local_2f8._0_8_;
    dVar44 = local_2f8._8_8_;
    auVar57 = minpd(local_308,auVar33);
    auVar45 = minpd(local_2f8,auVar20);
    auVar52._8_8_ = -(ulonglong)(auVar57._8_8_ < 0.0);
    auVar52._0_8_ = -(ulonglong)(auVar57._0_8_ < 0.0);
    iVar14 = movmskpd(iVar14,auVar52);
    auVar63._8_8_ = -(ulonglong)(auVar45._8_8_ < 0.0);
    auVar63._0_8_ = -(ulonglong)(auVar45._0_8_ < 0.0);
    uVar16 = movmskpd(uVar13,auVar63);
    dVar43 = auVar33._0_8_;
    dVar48 = auVar33._8_8_;
    if ((uVar16 & 0x3fffffff) != 0 || iVar14 != 0) {
      dVar41 = *param_4;
      dVar53 = param_4[1];
      dVar40 = param_4[2];
      dVar30 = dVar53 + dVar53;
      dVar31 = dVar40 + dVar40;
      dVar55 = dVar41 * (dVar41 + dVar41);
      dStack_1a0 = auVar20._0_8_;
      local_198 = (1.0 - (dVar55 + dVar53 * dVar30)) * dStack_1a0;
      dVar70 = param_4[3];
      dVar77 = dVar31 * dVar70;
      dVar65 = (dVar41 + dVar41) * param_4[3];
      dVar70 = dVar30 * dVar70;
      local_1a8 = (dVar70 + *param_4 * dVar31) * dStack_1a0;
      dVar29 = dStack_1a0 * dVar42;
      dVar44 = auVar20._8_8_ * dVar44;
      dVar64 = (dVar30 * dVar41 + dVar77) * dVar43;
      local_1b8 = (dVar31 * dVar53 + dVar65) * dVar48;
      dStack_1a0 = (dVar31 * dVar53 - dVar65) * dStack_1a0;
      local_1d8 = (*param_4 * dVar31 - dVar70) * dVar43;
      local_1e8._8_4_ = SUB84(dVar64,0);
      local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar40 * dVar31 + dVar53 * dVar30)) * dVar43;
      local_1e8._12_4_ = (int)((ulonglong)dVar64 >> 0x20);
      local_1c8._8_8_ = (DAT_149934d80._8_8_ - (dVar40 * dVar31 + dVar55)) * dVar48;
      local_1c8._0_8_ = (dVar30 * dVar41 - dVar77) * dVar48;
      local_188 = param_4[4];
      dStack_180 = param_4[5];
      local_178 = param_4[6];
      dVar31 = local_348[1] + local_348[1];
      dVar77 = local_348[2] + local_348[2];
      dVar70 = local_348[0] * (local_348[0] + local_348[0]);
      local_218 = (1.0 - (dVar70 + local_348[1] * dVar31)) * dVar42;
      dVar65 = (local_348[0] + local_348[0]) * local_348[3];
      dVar43 = dVar43 * dVar32;
      dVar48 = dVar48 * dVar49;
      local_268 = ((double)DAT_149934d80 - (local_348[2] * dVar77 + local_348[1] * dVar31)) * dVar32
      ;
      dStack_260 = (dVar31 * local_348[0] + dVar77 * local_348[3]) * dVar32;
      local_238 = (dVar77 * local_348[1] + dVar65) * dVar49;
      local_258 = (local_348[0] * dVar77 - dVar31 * local_348[3]) * dVar32;
      local_248._8_8_ = (DAT_149934d80._8_8_ - (local_348[2] * dVar77 + dVar70)) * dVar49;
      local_248._0_8_ = (dVar31 * local_348[0] - dVar77 * local_348[3]) * dVar49;
      local_228._8_8_ = (dVar77 * local_348[1] - dVar65) * dVar42;
      local_228._0_8_ = (dVar31 * local_348[3] + local_348[0] * dVar77) * dVar42;
      local_208 = local_328;
      dStack_200 = dStack_320;
      local_1f8 = (double)CONCAT44(uStack_314,local_318);
      goto LAB_1402dd5af;
    }
    uVar13 = *(undefined4 *)param_4;
    uVar71 = *(undefined4 *)((longlong)param_4 + 4);
    uVar72 = *(undefined4 *)(param_4 + 1);
    uVar73 = *(undefined4 *)((longlong)param_4 + 0xc);
    dVar30 = param_4[2];
    dVar55 = param_4[3];
    dVar65 = param_4[3];
    dVar41 = param_4[3];
    dVar70 = param_4[1];
    dVar31 = param_4[1];
    dVar77 = param_4[2];
    dVar29 = param_4[2];
    dVar64 = local_348[1] * dVar77 * -1.0 +
             local_348[2] * dVar70 + local_348[3] * *param_4 * 1.0 + local_348[0] * dVar65;
    dVar54 = local_348[0] * dVar29 * 1.0 +
             local_348[3] * dVar31 + local_348[2] * *param_4 * -1.0 + local_348[1] * dVar41;
    auVar66._0_8_ =
         local_348[3] * dVar77 * 1.0 +
         ((*param_4 * local_348[1] * 1.0 + local_348[2] * dVar65) - local_348[0] * dVar70);
    auVar66._8_8_ =
         local_348[2] * dVar29 * -1.0 +
         ((*param_4 * local_348[0] * -1.0 + local_348[3] * dVar41) - local_348[1] * dVar31);
    local_328 = local_328 * dVar43;
    dStack_320 = dStack_320 * dVar48;
LAB_1402dca06:
    dVar70 = (double)CONCAT44(uStack_314,local_318) * auVar20._0_8_;
    dVar31 = (double)CONCAT44(uStack_30c,uStack_310) * auVar20._8_8_;
    dVar43 = dStack_320 * (double)CONCAT44(uVar71,uVar13) -
             (double)CONCAT44(uVar73,uVar72) * local_328;
    dVar48 = dVar70 * (double)CONCAT44(uVar73,uVar72) - dVar30 * dStack_320;
    dVar77 = local_328 * dVar30 - (double)CONCAT44(uVar71,uVar13) * dVar70;
    dVar29 = dVar31 * dVar55 - dVar55 * dVar31;
    dVar48 = dVar48 + dVar48;
    dVar77 = dVar77 + dVar77;
    dVar43 = dVar43 + dVar43;
    dVar29 = dVar29 + dVar29;
    local_108 = (dVar43 * (double)CONCAT44(uVar73,uVar72) - dVar30 * dVar77) +
                dVar65 * dVar48 + local_328 + param_4[4];
    dStack_100 = (dVar48 * dVar30 - dVar43 * (double)CONCAT44(uVar71,uVar13)) +
                 dVar41 * dVar77 + dStack_320 + param_4[5];
    local_f8 = (dVar77 * (double)CONCAT44(uVar71,uVar13) - (double)CONCAT44(uVar73,uVar72) * dVar48)
               + dVar65 * dVar43 + dVar70 + param_4[6];
    dVar70 = (dVar29 * dVar55 - dVar29 * dVar55) + dVar41 * dVar29 + dVar31 + param_4[7];
    dVar43 = dVar32 * auVar33._0_8_;
    dVar48 = dVar49 * auVar33._8_8_;
    dVar29 = dVar42 * auVar20._0_8_;
    dVar44 = dVar44 * auVar20._8_8_;
  }
  param_2[0xc] = dVar64;
  param_2[0xd] = dVar54;
  *(undefined1 (*) [16])(param_2 + 0xe) = auVar66;
  param_2[0x10] = local_108;
  param_2[0x11] = dStack_100;
  param_2[0x12] = local_f8;
  param_2[0x13] = dVar70;
  param_2[0x14] = dVar43;
  param_2[0x15] = dVar48;
  auVar4._8_4_ = SUB84(dVar44,0);
  auVar4._0_8_ = dVar29;
  auVar4._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 0x16) = auVar4;
LAB_1402dcb22:
  if ((local_e0 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1402de574 FUN_1402de574 body=3597 status=ok
// SIG undefined FUN_1402de574(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1402de574(longlong param_1,double *param_2,undefined8 param_3,double *param_4,
                      double *param_5,int param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  double *pdVar25;
  double *pdVar26;
  double *pdVar27;
  undefined4 *puVar28;
  ulonglong uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auStack_2b8 [32];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
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
  double local_178;
  double local_170;
  double local_168;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  pdVar25 = (double *)&DAT_14c846480;
  pdVar26 = param_2;
  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
    *pdVar26 = *pdVar25;
    pdVar25 = pdVar25 + 1;
    pdVar26 = pdVar26 + 1;
  }
  pdVar25 = param_2 + 0xc;
  pdVar26 = (double *)&DAT_14c846480;
  pdVar27 = pdVar25;
  for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
    *pdVar27 = *pdVar26;
    pdVar26 = pdVar26 + 1;
    pdVar27 = pdVar27 + 1;
  }
  param_2[0x18] = 0.0;
  puVar28 = &DAT_14c9485f0;
  if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
    puVar28 = *(undefined4 **)(param_1 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar24 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar24);
    DAT_14c947fe0 = lVar24;
  }
  lVar24 = DAT_14c947fe0;
  uVar21 = FUN_140045924(DAT_14c947fe0,param_2 + 0x18,puVar28,1);
  auVar49 = _DAT_149934d80;
  if (param_6 == 2) {
    pdVar25 = param_4;
    pdVar26 = param_2;
    for (lVar24 = 0xc; auVar49 = _DAT_149934d80, lVar24 != 0; lVar24 = lVar24 + -1) {
      *pdVar26 = *pdVar25;
      pdVar25 = pdVar25 + 1;
      pdVar26 = pdVar26 + 1;
    }
    auVar36 = *(undefined1 (*) [16])(param_4 + 8);
    dVar5 = auVar36._0_8_;
    dVar9 = auVar36._8_8_;
    auVar3 = *(undefined1 (*) [16])(param_4 + 10);
    dVar6 = auVar3._0_8_;
    auVar40 = *(undefined1 (*) [16])(param_5 + 8);
    dVar7 = auVar40._0_8_;
    dVar10 = auVar40._8_8_;
    auVar4 = *(undefined1 (*) [16])(param_5 + 10);
    dVar8 = auVar4._0_8_;
    auVar36 = minpd(auVar40,auVar36);
    auVar40 = minpd(auVar4,auVar3);
    auVar37._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
    auVar37._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
    iVar22 = movmskpd(uVar21,auVar37);
    auVar41._8_8_ = -(ulonglong)(auVar40._8_8_ < 0.0);
    auVar41._0_8_ = -(ulonglong)(auVar40._0_8_ < 0.0);
    uVar23 = movmskpd(0,auVar41);
    if ((uVar23 & 0x3fffffff) == 0 && iVar22 == 0) {
      dVar45 = *param_5;
      dVar47 = param_5[1];
      dVar15 = param_5[2];
      dVar16 = param_5[3];
      dVar17 = *param_4;
      dVar18 = param_4[1];
      dVar19 = param_4[2];
      dVar20 = param_4[3];
      dVar1 = param_4[3];
      dVar46 = param_4[3];
      dVar2 = param_4[1];
      dVar43 = param_4[1];
      dVar39 = param_4[2];
      dVar44 = param_4[2];
      dVar35 = dVar47 * dVar39 * -1.0 + dVar15 * dVar2 + dVar16 * *param_4 * 1.0 + dVar45 * dVar1;
      dVar38 = dVar45 * dVar44 * 1.0 + dVar16 * dVar43 + dVar15 * *param_4 * -1.0 + dVar47 * dVar46;
      auVar48._0_8_ =
           dVar16 * dVar39 * 1.0 + ((*param_4 * dVar47 * 1.0 + dVar15 * dVar1) - dVar45 * dVar2);
      auVar48._8_8_ =
           dVar15 * dVar44 * -1.0 + ((*param_4 * dVar45 * -1.0 + dVar16 * dVar46) - dVar47 * dVar43)
      ;
      dVar44 = param_5[4] * dVar5;
      dVar45 = param_5[5] * dVar9;
      dVar47 = param_5[6] * dVar6;
      dVar15 = param_5[7] * auVar3._8_8_;
      dVar2 = dVar45 * dVar17 - dVar18 * dVar44;
      dVar43 = dVar47 * dVar18 - dVar19 * dVar45;
      dVar39 = dVar44 * dVar19 - dVar17 * dVar47;
      dVar16 = dVar15 * dVar20 - dVar20 * dVar15;
      dVar43 = dVar43 + dVar43;
      dVar39 = dVar39 + dVar39;
      dVar2 = dVar2 + dVar2;
      dVar16 = dVar16 + dVar16;
      local_118 = (dVar2 * dVar18 - dVar19 * dVar39) + dVar1 * dVar43 + dVar44 + param_4[4];
      dStack_110 = (dVar43 * dVar19 - dVar2 * dVar17) + dVar46 * dVar39 + dVar45 + param_4[5];
      local_108 = (dVar39 * dVar17 - dVar18 * dVar43) + dVar1 * dVar2 + dVar47 + param_4[6];
      dVar46 = (dVar16 * dVar20 - dVar16 * dVar20) + dVar46 * dVar16 + dVar15 + param_4[7];
    }
    else {
      dVar1 = *param_4;
      dVar2 = param_4[1];
      dVar43 = param_4[2];
      dVar39 = dVar2 + dVar2;
      dVar44 = dVar43 + dVar43;
      dVar38 = dVar1 * (dVar1 + dVar1);
      local_1a8 = (1.0 - (dVar38 + dVar2 * dVar39)) * dVar6;
      dVar35 = param_4[3];
      dVar45 = dVar44 * dVar35;
      dVar47 = (dVar1 + dVar1) * param_4[3];
      dVar35 = dVar39 * dVar35;
      local_1b8 = (dVar35 + *param_4 * dVar44) * dVar6;
      dVar38 = (DAT_149934d80._8_8_ - (dVar43 * dVar44 + dVar38)) * dVar9;
      dVar46 = (dVar39 * dVar1 + dVar45) * dVar5;
      local_1c8 = (dVar44 * dVar2 + dVar47) * dVar9;
      dStack_1b0 = (dVar44 * dVar2 - dVar47) * dVar6;
      local_1e8 = (*param_4 * dVar44 - dVar35) * dVar5;
      local_1f8._8_4_ = SUB84(dVar46,0);
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar43 * dVar44 + dVar2 * dVar39)) * dVar5;
      local_1f8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar38,0);
      local_1d8._0_8_ = (dVar39 * dVar1 - dVar45) * dVar9;
      local_1d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = param_4[4];
      dStack_190 = param_4[5];
      local_188 = param_4[6];
      uStack_180 = 0x3ff0000000000000;
      dVar46 = *param_5;
      dVar1 = param_5[1];
      dVar2 = param_5[2];
      dVar43 = dVar1 + dVar1;
      dVar39 = dVar2 + dVar2;
      dVar38 = dVar46 * (dVar46 + dVar46);
      local_228 = (1.0 - (dVar38 + dVar1 * dVar43)) * dVar8;
      dVar35 = param_5[3];
      dVar44 = dVar39 * dVar35;
      dVar45 = (dVar46 + dVar46) * param_5[3];
      dVar35 = dVar43 * dVar35;
      local_238 = (dVar35 + *param_5 * dVar39) * dVar8;
      dStack_230 = (dVar39 * dVar1 - dVar45) * dVar8;
      local_278 = ((double)DAT_149934d80 - (dVar2 * dVar39 + dVar1 * dVar43)) * dVar7;
      dVar38 = (DAT_149934d80._8_8_ - (dVar2 * dVar39 + dVar38)) * dVar10;
      dStack_270 = (dVar43 * dVar46 + dVar44) * dVar7;
      local_248 = (dVar39 * dVar1 + dVar45) * dVar10;
      local_268 = (*param_5 * dVar39 - dVar35) * dVar7;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar38,0);
      local_258._0_8_ = (dVar43 * dVar46 - dVar44) * dVar10;
      local_258._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = param_5[4];
      dStack_210 = param_5[5];
      local_208 = param_5[6];
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar30._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
      auVar30._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
      auVar36 = blendvpd(_DAT_149936790,auVar49,auVar30);
      uVar29 = -(ulonglong)(0.0 <= dVar6 * dVar8);
      dVar35 = (double)(~uVar29 & 0xbff0000000000000 | uVar29 & 0x3ff0000000000000);
      dVar38 = auVar36._0_8_;
      local_168 = local_168 * dVar38;
      local_170 = local_170 * dVar38;
      local_178 = local_178 * dVar38;
      dVar38 = auVar36._8_8_;
      local_148 = local_148 * dVar38;
      local_150 = local_150 * dVar38;
      local_158 = dVar38 * local_158;
      local_128 = local_128 * dVar35;
      local_130 = local_130 * dVar35;
      local_138 = dVar35 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar35 = local_288 * local_288 + local_298 * local_298;
      dVar38 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar33._0_8_ = dVar35 + dVar38;
      auVar33._8_8_ = dVar35 + dVar38;
      auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
      auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
      auVar36 = sqrtpd(auVar33,auVar33);
      auVar49 = divpd(auVar49,auVar36);
      auVar50._0_8_ = auVar49._0_8_ * local_288;
      auVar50._8_8_ = auVar49._8_8_ * dStack_280;
      dVar35 = (double)((ulonglong)(local_298 * auVar49._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
      dVar38 = (double)((ulonglong)(dStack_290 * auVar49._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
      auVar48 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar31);
      dVar46 = 0.0;
    }
    dVar1 = auVar4._8_8_ * auVar3._8_8_;
    param_2[0xc] = dVar35;
    param_2[0xd] = dVar38;
    *(undefined1 (*) [16])(param_2 + 0xe) = auVar48;
    auVar12._8_4_ = SUB84(dStack_110,0);
    auVar12._0_8_ = local_118;
    auVar12._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x10) = auVar12;
    param_2[0x12] = local_108;
    param_2[0x13] = dVar46;
    auVar13._8_4_ = SUB84(dVar10 * dVar9,0);
    auVar13._0_8_ = dVar7 * dVar5;
    auVar13._12_4_ = (int)((ulonglong)(dVar10 * dVar9) >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x14) = auVar13;
    auVar11._8_4_ = SUB84(dVar1,0);
    auVar11._0_8_ = dVar8 * dVar6;
    auVar11._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 0x16) = auVar11;
  }
  else if (param_6 == 1) {
    auVar36 = *(undefined1 (*) [16])(param_4 + 8);
    dVar5 = auVar36._0_8_;
    dVar9 = auVar36._8_8_;
    auVar3 = *(undefined1 (*) [16])(param_4 + 10);
    dVar6 = auVar3._0_8_;
    auVar40 = *(undefined1 (*) [16])(param_5 + 8);
    dVar7 = auVar40._0_8_;
    dVar10 = auVar40._8_8_;
    auVar4 = *(undefined1 (*) [16])(param_5 + 10);
    dVar8 = auVar4._0_8_;
    auVar36 = minpd(auVar40,auVar36);
    auVar42 = minpd(auVar4,auVar3);
    auVar40._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
    auVar40._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
    iVar22 = movmskpd(uVar21,auVar40);
    auVar36._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
    auVar36._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
    uVar23 = movmskpd((int)lVar24,auVar36);
    if ((uVar23 & 0x3fffffff) == 0 && iVar22 == 0) {
      dVar45 = *param_5;
      dVar47 = param_5[1];
      dVar15 = param_5[2];
      dVar16 = param_5[3];
      dVar17 = *param_4;
      dVar18 = param_4[1];
      dVar19 = param_4[2];
      dVar20 = param_4[3];
      dVar1 = param_4[3];
      dVar46 = param_4[3];
      dVar43 = param_4[1];
      dVar2 = param_4[1];
      dVar39 = param_4[2];
      dVar44 = param_4[2];
      dVar35 = dVar47 * dVar39 * -1.0 + dVar15 * dVar43 + dVar16 * *param_4 * 1.0 + dVar45 * dVar1;
      dVar38 = dVar45 * dVar44 * 1.0 + dVar16 * dVar2 + dVar15 * *param_4 * -1.0 + dVar47 * dVar46;
      auVar49._0_8_ =
           dVar16 * dVar39 * 1.0 + ((*param_4 * dVar47 * 1.0 + dVar15 * dVar1) - dVar45 * dVar43);
      auVar49._8_8_ =
           dVar15 * dVar44 * -1.0 + ((*param_4 * dVar45 * -1.0 + dVar16 * dVar46) - dVar47 * dVar2);
      dVar44 = param_5[4] * dVar5;
      dVar45 = param_5[5] * dVar9;
      dVar47 = param_5[6] * dVar6;
      dVar15 = param_5[7] * auVar3._8_8_;
      dVar2 = dVar45 * dVar17 - dVar18 * dVar44;
      dVar43 = dVar47 * dVar18 - dVar19 * dVar45;
      dVar39 = dVar44 * dVar19 - dVar17 * dVar47;
      dVar16 = dVar15 * dVar20 - dVar20 * dVar15;
      dVar43 = dVar43 + dVar43;
      dVar39 = dVar39 + dVar39;
      dVar2 = dVar2 + dVar2;
      dVar16 = dVar16 + dVar16;
      local_118 = (dVar2 * dVar18 - dVar19 * dVar39) + dVar1 * dVar43 + dVar44 + param_4[4];
      dStack_110 = (dVar43 * dVar19 - dVar2 * dVar17) + dVar46 * dVar39 + dVar45 + param_4[5];
      local_108 = (dVar39 * dVar17 - dVar18 * dVar43) + dVar1 * dVar2 + dVar47 + param_4[6];
      dVar46 = (dVar16 * dVar20 - dVar16 * dVar20) + dVar46 * dVar16 + dVar15 + param_4[7];
    }
    else {
      dVar1 = *param_4;
      dVar2 = param_4[1];
      dVar43 = param_4[2];
      dVar39 = dVar2 + dVar2;
      dVar44 = dVar43 + dVar43;
      dVar38 = dVar1 * (dVar1 + dVar1);
      local_1a8 = (1.0 - (dVar38 + dVar2 * dVar39)) * dVar6;
      dVar35 = param_4[3];
      dVar45 = dVar44 * dVar35;
      dVar47 = (dVar1 + dVar1) * param_4[3];
      dVar35 = dVar39 * dVar35;
      local_1b8 = (dVar35 + *param_4 * dVar44) * dVar6;
      dVar38 = (DAT_149934d80._8_8_ - (dVar43 * dVar44 + dVar38)) * dVar9;
      dVar46 = (dVar39 * dVar1 + dVar45) * dVar5;
      local_1c8 = (dVar44 * dVar2 + dVar47) * dVar9;
      dStack_1b0 = (dVar44 * dVar2 - dVar47) * dVar6;
      local_1e8 = (*param_4 * dVar44 - dVar35) * dVar5;
      local_1f8._8_4_ = SUB84(dVar46,0);
      local_1f8._0_8_ = ((double)DAT_149934d80 - (dVar43 * dVar44 + dVar2 * dVar39)) * dVar5;
      local_1f8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar38,0);
      local_1d8._0_8_ = (dVar39 * dVar1 - dVar45) * dVar9;
      local_1d8._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      local_198 = param_4[4];
      dStack_190 = param_4[5];
      local_188 = param_4[6];
      uStack_180 = 0x3ff0000000000000;
      dVar46 = *param_5;
      dVar1 = param_5[1];
      dVar2 = param_5[2];
      dVar43 = dVar1 + dVar1;
      dVar39 = dVar2 + dVar2;
      dVar38 = dVar46 * (dVar46 + dVar46);
      local_228 = (1.0 - (dVar38 + dVar1 * dVar43)) * dVar8;
      dVar35 = param_5[3];
      dVar44 = dVar39 * dVar35;
      dVar45 = (dVar46 + dVar46) * param_5[3];
      dVar35 = dVar43 * dVar35;
      local_238 = (dVar35 + *param_5 * dVar39) * dVar8;
      dStack_230 = (dVar39 * dVar1 - dVar45) * dVar8;
      local_278 = ((double)DAT_149934d80 - (dVar2 * dVar39 + dVar1 * dVar43)) * dVar7;
      dVar38 = (DAT_149934d80._8_8_ - (dVar2 * dVar39 + dVar38)) * dVar10;
      dStack_270 = (dVar43 * dVar46 + dVar44) * dVar7;
      local_248 = (dVar39 * dVar1 + dVar45) * dVar10;
      local_268 = (*param_5 * dVar39 - dVar35) * dVar7;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar38,0);
      local_258._0_8_ = (dVar43 * dVar46 - dVar44) * dVar10;
      local_258._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
      uStack_240 = 0;
      uStack_220 = 0;
      local_218 = param_5[4];
      dStack_210 = param_5[5];
      local_208 = param_5[6];
      uStack_200 = 0x3ff0000000000000;
      FUN_1447fea8d(&local_178);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar42._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
      auVar42._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
      auVar36 = blendvpd(_DAT_149936790,auVar49,auVar42);
      uVar29 = -(ulonglong)(0.0 <= dVar6 * dVar8);
      dVar35 = (double)(~uVar29 & 0xbff0000000000000 | uVar29 & 0x3ff0000000000000);
      dVar38 = auVar36._0_8_;
      local_168 = local_168 * dVar38;
      local_170 = local_170 * dVar38;
      local_178 = local_178 * dVar38;
      dVar38 = auVar36._8_8_;
      local_148 = local_148 * dVar38;
      local_150 = local_150 * dVar38;
      local_158 = dVar38 * local_158;
      local_128 = local_128 * dVar35;
      local_130 = local_130 * dVar35;
      local_138 = dVar35 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar35 = local_288 * local_288 + local_298 * local_298;
      dVar38 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar34._0_8_ = dVar35 + dVar38;
      auVar34._8_8_ = dVar35 + dVar38;
      auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
      auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
      auVar36 = sqrtpd(auVar34,auVar34);
      auVar49 = divpd(auVar49,auVar36);
      auVar51._0_8_ = auVar49._0_8_ * local_288;
      auVar51._8_8_ = auVar49._8_8_ * dStack_280;
      dVar35 = (double)((ulonglong)(local_298 * auVar49._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
      dVar38 = (double)((ulonglong)(dStack_290 * auVar49._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
      auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar32);
      dVar46 = 0.0;
    }
    dVar1 = auVar4._8_8_ * auVar3._8_8_;
    *param_2 = dVar35;
    param_2[1] = dVar38;
    *(undefined1 (*) [16])(param_2 + 2) = auVar49;
    auVar4._8_4_ = SUB84(dStack_110,0);
    auVar4._0_8_ = local_118;
    auVar4._12_4_ = (int)((ulonglong)dStack_110 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 4) = auVar4;
    param_2[6] = local_108;
    param_2[7] = dVar46;
    auVar14._8_4_ = SUB84(dVar10 * dVar9,0);
    auVar14._0_8_ = dVar7 * dVar5;
    auVar14._12_4_ = (int)((ulonglong)(dVar10 * dVar9) >> 0x20);
    *(undefined1 (*) [16])(param_2 + 8) = auVar14;
    auVar3._8_4_ = SUB84(dVar1,0);
    auVar3._0_8_ = dVar8 * dVar6;
    auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(param_2 + 10) = auVar3;
    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
      *pdVar25 = *param_4;
      param_4 = param_4 + 1;
      pdVar25 = pdVar25 + 1;
    }
  }
  else if (param_6 == 0) {
    pdVar26 = param_4;
    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
      *param_2 = *pdVar26;
      pdVar26 = pdVar26 + 1;
      param_2 = param_2 + 1;
    }
    for (lVar24 = 0xc; lVar24 != 0; lVar24 = lVar24 + -1) {
      *pdVar25 = *param_4;
      param_4 = param_4 + 1;
      pdVar25 = pdVar25 + 1;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_2b8);
  }
  if ((local_f0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1402df388 FUN_1402df388 body=122 status=ok
// SIG undefined FUN_1402df388(void)

undefined4 FUN_1402df388(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  bool bVar6;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 8 + lVar5);
      uVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
      if ((char)uVar4 != '\0') break;
      bVar6 = (longlong)iVar1 * 0x18 + -0x18 != lVar5;
      lVar5 = lVar5 + 0x18;
    } while (bVar6);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  return uVar4;
}



// FUNCTION 1402df402 FUN_1402df402 body=170 status=ok
// SIG undefined FUN_1402df402(void)

void FUN_1402df402(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 200);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xc0);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if ((lVar3 != 0) && ((*(byte *)(*(longlong *)(lVar3 + 0x28) + 0xa0) & 1) == 0)) {
        FUN_1402df4ac(DAT_14ca77418,*(undefined8 *)(lVar3 + 0x28));
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    iVar1 = *(int *)(param_1 + 0xcc);
    FUN_14476c499(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
    *(undefined4 *)(param_1 + 200) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0xcc) != 0)) {
      FUN_147370096((longlong *)(param_1 + 0xc0),0);
      return;
    }
  }
  return;
}



// FUNCTION 1402df4ac FUN_1402df4ac body=260 status=ok
// SIG undefined FUN_1402df4ac(void)

void FUN_1402df4ac(longlong param_1,longlong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  BOOL BVar2;
  DWORD DVar3;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    if ((param_2 != 0) && ((*(byte *)(param_2 + 0xa0) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
    }
    goto LAB_1402df4d4;
  }
  if ((param_2 != 0) && ((*(byte *)(param_2 + 0xa0) & 1) != 0)) goto LAB_1402df4d4;
  FUN_1403937d4(local_38,param_2 == 0);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x78);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    if (param_2 != 0) {
      do {
        if ((*(byte *)(param_2 + 0xa0) & 1) != 0) goto LAB_1402df585;
        FUN_14279b9b6(0);
        BVar2 = TryEnterCriticalSection(lpCriticalSection);
      } while (BVar2 == 0);
      goto LAB_1402df54f;
    }
  }
  else {
LAB_1402df54f:
    DVar3 = GetCurrentThreadId();
    uVar1 = *(undefined4 *)(param_1 + 0x30);
    *(DWORD *)(param_1 + 0x30) = DVar3;
    do {
      while (FUN_1400bd744(param_1,&local_40), param_2 != 0) {
        if ((*(byte *)(param_2 + 0xa0) & 1) != 0) goto LAB_1402df579;
      }
    } while ((local_40 & 1) != 0);
LAB_1402df579:
    LeaveCriticalSection(lpCriticalSection);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
  }
LAB_1402df585:
  FUN_140248952(local_38);
LAB_1402df4d4:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402df5c4 FUN_1402df5c4 body=253 status=ok
// SIG undefined FUN_1402df5c4(void)

undefined8 * FUN_1402df5c4(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  
  if (DAT_14c966da8 != DAT_14c966dd4) {
    lVar5 = *param_2;
    uVar7 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar8 = (uint)lVar5 & 0xffff;
    puVar9 = &DAT_14c966dd8;
    if (DAT_14c966de0 != (undefined *)0x0) {
      puVar9 = DAT_14c966de0;
    }
    iVar4 = *(int *)(puVar9 + (ulonglong)
                              (DAT_14c966de8 - 1U &
                              (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar8) +
                              (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar8 >> 4)) * 4);
    while (iVar4 != -1) {
      lVar3 = DAT_14c966da0 + (longlong)iVar4 * 0x30;
      if (*(longlong *)(DAT_14c966da0 + (longlong)iVar4 * 0x30) == lVar5) {
        if ((lVar3 != 0) && (lVar3 != -0x18)) {
          *param_1 = *(undefined8 *)(lVar3 + 0x18);
          lVar5 = *(longlong *)(lVar3 + 0x20);
          param_1[1] = lVar5;
          if (lVar5 != 0) {
            LOCK();
            *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
            UNLOCK();
          }
          goto LAB_1402df68f;
        }
        break;
      }
      iVar4 = *(int *)(lVar3 + 0x28);
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1402df68f:
  plVar6 = (longlong *)param_2[2];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 1402df6c2 FUN_1402df6c2 body=201 status=ok
// SIG undefined FUN_1402df6c2(void)

void FUN_1402df6c2(char *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*param_1 == '\x02') {
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x18));
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      if (*(longlong **)(lVar2 + lVar4) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + lVar4) + 0x30))();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x20));
  if (*param_1 == '\x02') {
                    /* WARNING: Could not recover jumptable at 0x0001402df73b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x18));
    return;
  }
  if ((*param_1 == '\x01') && (iVar1 = *(int *)(param_1 + 0x10), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3);
        (**(code **)(*plVar3 + 0x20))(plVar3);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1402df78c FUN_1402df78c body=577 status=ok
// SIG undefined FUN_1402df78c(void)

void FUN_1402df78c(longlong *param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar6 = (**(code **)(*(longlong *)param_1[10] + 0x28))();
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x10) != 0)) {
    SRWLock = (PSRWLOCK)(param_1 + 0x2e);
    AcquireSRWLockExclusive(SRWLock);
    lVar8 = param_1[0x2c];
    lVar10 = param_1[0x2d];
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ReleaseSRWLockExclusive(SRWLock);
    if ((longlong)(int)lVar10 != 0) {
      lVar9 = 0;
      do {
        (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(lVar8 + lVar9));
        lVar9 = lVar9 + 8;
      } while ((longlong)(int)lVar10 * 8 != lVar9);
    }
    if (lVar8 != 0) {
      FUN_1400020a8(lVar8);
    }
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x29));
    plVar1 = param_1 + 0x1f;
    plVar2 = param_1 + 0x21;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    iVar7 = 0;
    local_60 = plVar2;
    if ((int)param_1[0x24] != 0) {
      FUN_1449c0562(&local_68);
      iVar7 = (int)param_1[0x24];
    }
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar5 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar7) || (local_78 = uVar4, local_60 != plVar2)) {
      do {
        do {
          local_78 = uVar4;
          plVar3 = *(longlong **)(*local_90 + 8 + (longlong)iVar5 * 0x18);
          (**(code **)(*plVar3 + 8))(plVar3,lVar6);
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          uVar4 = local_78;
        } while (local_78._4_4_ != iVar7);
      } while ((local_80 != plVar2) || (local_90 != plVar1));
    }
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x29));
    AcquireSRWLockExclusive(SRWLock);
    lVar6 = param_1[0x2a];
    lVar8 = param_1[0x2b];
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ReleaseSRWLockExclusive(SRWLock);
    if ((longlong)(int)lVar8 != 0) {
      lVar10 = (longlong)(int)lVar8 << 3;
      lVar8 = lVar6;
      do {
        (**(code **)(*param_1 + 8))(param_1,lVar8);
        lVar8 = lVar8 + 8;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    if (lVar6 != 0) {
      FUN_1400020a8(lVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402df9d6 FUN_1402df9d6 body=750 status=ok
// SIG undefined FUN_1402df9d6(void)

void FUN_1402df9d6(longlong *param_1)

{
  PSRWLOCK SRWLock;
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  
  lVar6 = (**(code **)(*(longlong *)param_1[10] + 0x28))();
  if ((lVar6 == 0) || (*(int *)(lVar6 + 8) != 0)) {
    SRWLock = (PSRWLOCK)(param_1 + 0x2e);
    AcquireSRWLockExclusive(SRWLock);
    lVar13 = param_1[0x2c];
    lVar16 = param_1[0x2d];
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    ReleaseSRWLockExclusive(SRWLock);
    if ((longlong)(int)lVar16 != 0) {
      lVar17 = 0;
      do {
        (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(lVar13 + lVar17));
        lVar17 = lVar17 + 8;
      } while ((longlong)(int)lVar16 * 8 != lVar17);
    }
    if (lVar13 != 0) {
      FUN_1400020a8(lVar13);
    }
    AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x29));
    iVar2 = (int)param_1[0x24];
    if (iVar2 == 0) {
      uVar15 = 1;
      uVar14 = 0;
      iVar5 = 0;
      iVar11 = 0;
    }
    else {
      puVar7 = (uint *)param_1[0x23];
      if ((uint *)param_1[0x23] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x21);
      }
      uVar8 = *puVar7;
      if (uVar8 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        uVar14 = 0;
        uVar15 = (ulonglong)(uint)(iVar5 >> 5);
        if (iVar5 >> 5 < 1) {
          uVar15 = uVar14;
        }
        iVar11 = 0;
        do {
          if (uVar15 == uVar14) goto LAB_1402dfbcb;
          iVar11 = iVar11 + 0x20;
          uVar8 = puVar7[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar14 = 0;
        iVar11 = 0;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar5) {
        iVar5 = iVar2;
      }
    }
    if (iVar5 != iVar2) {
      uVar8 = 0xffffffff;
      do {
        plVar4 = *(longlong **)(param_1[0x1f] + 8 + (longlong)iVar5 * 0x18);
        (**(code **)(*plVar4 + 8))(plVar4,lVar6);
        uVar8 = ~(uint)uVar15 & uVar8;
        puVar7 = (uint *)param_1[0x23];
        if ((uint *)param_1[0x23] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x21);
        }
        iVar3 = (int)param_1[0x24];
        iVar5 = (int)uVar14;
        lVar13 = (longlong)iVar5;
        uVar12 = puVar7[lVar13] & uVar8;
        if (uVar12 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar5) {
            iVar10 = iVar5;
          }
          if (iVar5 < iVar9) {
            lVar16 = 0;
            do {
              uVar12 = puVar7[lVar13 + lVar16 + 1];
              if (uVar12 != 0) {
                uVar14 = (ulonglong)(iVar5 + (int)lVar16 + 1);
                uVar8 = 0xffffffff;
                goto LAB_1402dfb94;
              }
              iVar11 = iVar11 + 0x20;
              lVar16 = lVar16 + 1;
            } while (iVar10 - lVar13 != lVar16);
            uVar8 = 0xffffffff;
            iVar5 = iVar10;
          }
          uVar14 = (ulonglong)(iVar5 + 1);
          iVar5 = iVar3;
        }
        else {
LAB_1402dfb94:
          uVar15 = (ulonglong)(-uVar12 & uVar12);
          uVar1 = uVar15 * 2 + 1;
          lVar13 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          iVar5 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar5) {
            iVar5 = iVar3;
          }
        }
      } while (iVar5 != iVar2);
    }
LAB_1402dfbcb:
    ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x29));
    AcquireSRWLockExclusive(SRWLock);
    lVar6 = param_1[0x2a];
    lVar13 = param_1[0x2b];
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    ReleaseSRWLockExclusive(SRWLock);
    if ((longlong)(int)lVar13 != 0) {
      lVar16 = (longlong)(int)lVar13 << 3;
      lVar13 = lVar6;
      do {
        (**(code **)(*param_1 + 8))(param_1,lVar13);
        lVar13 = lVar13 + 8;
        lVar16 = lVar16 + -8;
      } while (lVar16 != 0);
    }
    if (lVar6 != 0) {
      FUN_1400020a8(lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 1402dfcca FUN_1402dfcca body=1941 status=ok
// SIG undefined FUN_1402dfcca(void)

void FUN_1402dfcca(longlong *param_1)

{
  longlong **pplVar1;
  PSRWLOCK pRVar2;
  PSRWLOCK SRWLock;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined1 auStack_118 [40];
  PSRWLOCK local_f0;
  PSRWLOCK local_e8;
  longlong **local_e0;
  undefined8 uStack_d8;
  undefined4 *local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong uStack_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar9 = (**(code **)(*(longlong *)param_1[10] + 0x28))();
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == 0)) goto LAB_1402dfd0d;
  pRVar2 = (PSRWLOCK)(param_1 + 0x2e);
  AcquireSRWLockExclusive(pRVar2);
  lVar17 = param_1[0x2c];
  lVar22 = param_1[0x2d];
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  ReleaseSRWLockExclusive(pRVar2);
  if ((longlong)(int)lVar22 != 0) {
    lVar18 = 0;
    do {
      (**(code **)(*param_1 + 0x10))(param_1,*(undefined8 *)(lVar17 + lVar18));
      lVar18 = lVar18 + 8;
    } while ((longlong)(int)lVar22 * 8 != lVar18);
  }
  if (lVar17 != 0) {
    FUN_1400020a8(lVar17);
  }
  SRWLock = (PSRWLOCK)(param_1 + 0x29);
  AcquireSRWLockShared(SRWLock);
  local_f0 = SRWLock;
  local_e8 = pRVar2;
  if (lVar9 == 0) {
LAB_1402dfdc9:
    iVar19 = (int)param_1[0x24];
    if (iVar19 == 0) {
      uVar21 = 1;
      uVar20 = 0;
      iVar8 = 0;
      iVar15 = 0;
    }
    else {
      puVar10 = (uint *)param_1[0x23];
      if ((uint *)param_1[0x23] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x21);
      }
      uVar12 = *puVar10;
      if (uVar12 == 0) {
        iVar8 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar8 = iVar19 + -1;
        }
        uVar20 = 0;
        uVar21 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar21 = uVar20;
        }
        iVar15 = 0;
        do {
          if (uVar21 == uVar20) goto LAB_1402dff28;
          iVar15 = iVar15 + 0x20;
          uVar12 = puVar10[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar20 = 0;
        iVar15 = 0;
      }
      uVar21 = (ulonglong)(-uVar12 & uVar12);
      uVar4 = uVar21 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar8 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar8) {
        iVar8 = iVar19;
      }
    }
    if (iVar8 != iVar19) {
      uVar12 = 0xffffffff;
      do {
        plVar11 = *(longlong **)(param_1[0x1f] + 8 + (longlong)iVar8 * 0x18);
        (**(code **)(*plVar11 + 8))(plVar11,lVar9);
        uVar12 = ~(uint)uVar21 & uVar12;
        puVar10 = (uint *)param_1[0x23];
        if ((uint *)param_1[0x23] == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 0x21);
        }
        iVar5 = (int)param_1[0x24];
        iVar8 = (int)uVar20;
        lVar17 = (longlong)iVar8;
        uVar16 = puVar10[lVar17] & uVar12;
        if (uVar16 == 0) {
          iVar13 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar13 = iVar5 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar14 = iVar13;
          if (iVar13 < iVar8) {
            iVar14 = iVar8;
          }
          if (iVar8 < iVar13) {
            lVar22 = 0;
            do {
              uVar16 = puVar10[lVar17 + lVar22 + 1];
              if (uVar16 != 0) {
                uVar20 = (ulonglong)(iVar8 + (int)lVar22 + 1);
                uVar12 = 0xffffffff;
                goto LAB_1402dfef1;
              }
              iVar15 = iVar15 + 0x20;
              lVar22 = lVar22 + 1;
            } while (iVar14 - lVar17 != lVar22);
            uVar12 = 0xffffffff;
            iVar8 = iVar14;
          }
          uVar20 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar5;
        }
        else {
LAB_1402dfef1:
          uVar21 = (ulonglong)(-uVar16 & uVar16);
          uVar4 = uVar21 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar4 != 0) {
            for (; uVar4 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar8 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar5 <= iVar8) {
            iVar8 = iVar5;
          }
        }
      } while (iVar8 != iVar19);
    }
  }
  else {
    if ((int)param_1[0x20] - *(int *)((longlong)param_1 + 300) <=
        ((int)param_1[0x16] + *(int *)(lVar9 + 0x28)) -
        (*(int *)((longlong)param_1 + 0xdc) + *(int *)(lVar9 + 0x54))) goto LAB_1402dfdc9;
    if ((int)param_1[0xc] != *(int *)((longlong)param_1 + 0x8c)) {
      uStack_78 = 0;
      iVar19 = 0;
      local_70 = 0;
      local_98 = (longlong *)0x0;
      uStack_90 = (longlong **)0x0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      uVar12 = *(int *)(lVar9 + 0x28) - *(int *)(lVar9 + 0x54);
      if (uVar12 != 0) {
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar12);
        }
        FUN_146e9f564(&local_98,uVar12);
        iVar8 = 1;
        if (3 < uVar12) {
          uVar12 = (uVar12 | 1) + 0xe;
          iVar8 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar8 == 0; iVar8 = iVar8 + -1) {
            }
          }
          iVar8 = 1 << ((byte)iVar8 & 0x1f);
        }
        if ((local_50 == 0) || (local_50 < iVar8)) {
          local_50 = iVar8;
          FUN_146e9f702();
        }
      }
      pplVar1 = (longlong **)(lVar9 + 0x20);
      lVar17 = lVar9 + 0x30;
      local_b8 = 0x100000000;
      local_a8._0_4_ = 0xffffffff;
      local_a8._4_4_ = 0;
      local_a0 = 0;
      local_b0 = (undefined4 *)lVar17;
      if (*(int *)(lVar9 + 0x48) != 0) {
        FUN_1449c0562(&local_b8);
        iVar19 = *(int *)(lVar9 + 0x48);
      }
      uStack_c8._0_4_ = (uint)local_a8;
      uStack_c8._4_4_ = local_a8._4_4_;
      local_c0 = local_a0;
      local_bc = local_9c;
      uStack_d8 = (longlong *)local_b8;
      local_d0 = local_b0;
      local_e0 = pplVar1;
      if ((local_a8._4_4_ != iVar19) || (local_b0 != (undefined4 *)lVar17)) {
        do {
          if ((int)param_1[0x14] != 0) {
            uVar20 = *(ulonglong *)((*local_e0)[(longlong)uStack_c8._4_4_ * 4] + 0x10);
            uVar12 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
            uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
            plVar11 = (longlong *)param_1[0x13];
            if ((longlong *)param_1[0x13] == (longlong *)0x0) {
              plVar11 = param_1 + 0x12;
            }
            iVar8 = *(int *)((longlong)plVar11 +
                            (longlong)(int)((int)param_1[0x14] - 1U & (uVar12 >> 0x10 ^ uVar12)) * 4
                            );
            while (iVar15 = iVar8, iVar15 != -1) {
              lVar22 = param_1[0xb];
              iVar8 = *(int *)(lVar22 + 0x10 + (longlong)iVar15 * 0x18);
              if (*(ulonglong *)(lVar22 + (longlong)iVar15 * 0x18) == uVar20) {
                do {
                  FUN_146e9f8e0(&local_98,&local_b8,lVar22 + (longlong)iVar15 * 0x18 + 8);
                  do {
                    iVar15 = iVar8;
                    if (iVar15 == -1) goto LAB_1402e02b6;
                    lVar22 = param_1[0xb];
                    iVar8 = *(int *)(lVar22 + 0x10 + (longlong)iVar15 * 0x18);
                  } while (*(ulonglong *)(lVar22 + (longlong)iVar15 * 0x18) != uVar20);
                } while( true );
              }
            }
          }
LAB_1402e02b6:
          uStack_c8._0_4_ = (uint)uStack_c8 & ~uStack_d8._4_4_;
          FUN_1449c0562(&uStack_d8);
        } while (local_e0 != pplVar1 ||
                 (local_d0 != (undefined4 *)lVar17 || uStack_c8._4_4_ != iVar19));
      }
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      local_a0 = 0;
      iVar19 = 0;
      local_b0 = &uStack_88;
      if (local_70 != 0) {
        FUN_1449c0562(&local_b8);
        iVar19 = local_70;
      }
      uStack_c8 = local_a8;
      uVar20 = uStack_c8;
      local_c0 = local_a0;
      local_bc = local_9c;
      uStack_d8 = (longlong *)local_b8;
      local_d0 = local_b0;
      uStack_c8._4_4_ = (int)(local_a8 >> 0x20);
      local_e0 = &local_98;
      if ((uStack_c8._4_4_ != iVar19) || (local_b0 != &uStack_88)) {
        iVar8 = uStack_c8._4_4_;
        uStack_c8 = uVar20;
        do {
          (**(code **)(*(longlong *)(*local_e0)[(longlong)iVar8 * 2] + 8))
                    ((longlong *)(*local_e0)[(longlong)iVar8 * 2],lVar9);
          uStack_c8 = CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~uStack_d8._4_4_);
          FUN_1449c0562(&uStack_d8);
          iVar8 = uStack_c8._4_4_;
          uVar20 = uStack_c8;
        } while (local_e0 != &local_98 || (local_d0 != &uStack_88 || uStack_c8._4_4_ != iVar19));
      }
      uStack_c8 = uVar20;
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_146e9fbee(&local_98);
    }
    plVar11 = param_1 + 0x15;
    plVar3 = param_1 + 0x17;
    local_e0 = (longlong **)0x100000000;
    local_d0 = (undefined4 *)0xffffffff;
    uStack_c8 = uStack_c8 & 0xffffffff00000000;
    uStack_d8 = plVar3;
    if ((int)param_1[0x1a] == 0) {
      iVar19 = 0;
    }
    else {
      FUN_1449c0562(&local_e0);
      iVar19 = (int)param_1[0x1a];
    }
    uStack_88 = (undefined4)uStack_d8;
    uStack_84 = uStack_d8._4_4_;
    uStack_78 = uStack_c8;
    local_80 = local_d0;
    uVar7 = local_80;
    uStack_90 = local_e0;
    local_80._4_4_ = (int)((ulonglong)local_d0 >> 0x20);
    iVar8 = local_80._4_4_;
    local_98 = plVar11;
    if ((local_80._4_4_ != iVar19) || (local_80 = local_d0, uStack_d8 != plVar3)) {
      do {
        local_80 = uVar7;
        plVar6 = *(longlong **)(*local_98 + 8 + (longlong)iVar8 * 0x18);
        (**(code **)(*plVar6 + 8))(plVar6,lVar9);
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar8 = local_80._4_4_;
        uVar7 = local_80;
      } while (local_98 != plVar11 ||
               ((longlong *)CONCAT44(uStack_84,uStack_88) != plVar3 || local_80._4_4_ != iVar19));
    }
  }
LAB_1402dff28:
  ReleaseSRWLockShared(local_f0);
  pRVar2 = local_e8;
  AcquireSRWLockExclusive(local_e8);
  lVar9 = param_1[0x2a];
  lVar17 = param_1[0x2b];
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  ReleaseSRWLockExclusive(pRVar2);
  if ((longlong)(int)lVar17 != 0) {
    lVar22 = (longlong)(int)lVar17 << 3;
    lVar17 = lVar9;
    do {
      (**(code **)(*param_1 + 8))(param_1,lVar17);
      lVar17 = lVar17 + 8;
      lVar22 = lVar22 + -8;
    } while (lVar22 != 0);
  }
  if (lVar9 != 0) {
    FUN_1400020a8(lVar9);
  }
LAB_1402dfd0d:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e046a FUN_1402e046a body=61 status=ok
// SIG undefined FUN_1402e046a(void)

void FUN_1402e046a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x65) == '\x01') {
    iVar2 = FUN_1402e04a8(param_1);
    iVar1 = *(int *)(param_1 + 0x80);
    if ((iVar1 != iVar2) && (*(int *)(param_1 + 0x80) = iVar2, iVar2 < iVar1)) {
      FUN_1402e0832(param_1);
    }
  }
  FUN_1402e0832(param_1);
  return;
}



// FUNCTION 1402e04a8 FUN_1402e04a8 body=876 status=ok
// SIG undefined FUN_1402e04a8(void)

undefined4 FUN_1402e04a8(longlong param_1)

{
  int *piVar1;
  double *pdVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  char cVar14;
  int iVar15;
  undefined4 uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong lVar20;
  double *pdVar21;
  bool bVar22;
  double dVar23;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  float local_bc;
  undefined1 local_b8 [24];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((*(char *)(param_1 + 0x65) == '\x01') &&
     (plVar8 = *(longlong **)(param_1 + 0x30), plVar8 != (longlong *)0x0)) {
    iVar15 = (int)plVar8[1];
    do {
      if (iVar15 == 0) goto LAB_1402e06e5;
      LOCK();
      iVar13 = (int)plVar8[1];
      bVar22 = iVar15 == iVar13;
      if (bVar22) {
        *(int *)(plVar8 + 1) = iVar15 + 1;
        iVar13 = iVar15;
      }
      iVar15 = iVar13;
      UNLOCK();
    } while (!bVar22);
    lVar9 = *(longlong *)(param_1 + 0x28);
    if (lVar9 == 0) {
      bVar22 = false;
    }
    else {
      lVar20 = *(longlong *)(param_1 + 8);
      plVar10 = *(longlong **)(param_1 + 0x10);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
      }
      if (*(int *)(lVar20 + 0x110) == 0) {
LAB_1402e07bf:
        bVar22 = false;
      }
      else {
        uVar7 = *(uint *)(lVar20 + 0x10c);
        bVar22 = false;
        if ((-1 < (int)uVar7) && (bVar22 = false, (int)uVar7 < DAT_14c9647dc)) {
          plVar18 = (longlong *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if ((plVar18 == (longlong *)0x0) ||
             ((((int)plVar18[2] != *(int *)(lVar20 + 0x110) ||
               ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) || (lVar19 = *plVar18, lVar19 == 0))))
          goto LAB_1402e07bf;
          lVar17 = (longlong)*(int *)(*(longlong *)(lVar20 + 0x10) + 0x1b8);
          if (lVar17 == 0) {
            bVar22 = true;
          }
          else {
            dVar4 = *(double *)(lVar19 + 0x270);
            pdVar21 = *(double **)(*(longlong *)(lVar20 + 0x10) + 0x1b0);
            pdVar2 = pdVar21 + lVar17 * 3;
            fVar3 = *(float *)(param_1 + 0x58);
            dVar5 = *(double *)(lVar19 + 0x260);
            dVar6 = *(double *)(lVar19 + 0x268);
            do {
              dVar11 = *pdVar21 - dVar5;
              dVar23 = pdVar21[1] - dVar6;
              dVar12 = pdVar21[2] - dVar4;
              bVar22 = (double)(fVar3 * fVar3) < dVar12 * dVar12 + dVar23 * dVar23 + dVar11 * dVar11
              ;
              if (!bVar22) goto LAB_1402e07bf;
              iVar15 = *(int *)(lVar9 + 0x150);
              if ((longlong)iVar15 != 0) {
                lVar20 = *(longlong *)(lVar9 + 0x148);
                lVar19 = 0;
                do {
                  if (*(longlong *)(lVar20 + lVar19) != 0) {
                    local_c8 = pdVar21[2];
                    local_d8 = *(undefined4 *)pdVar21;
                    uStack_d4 = *(undefined4 *)((longlong)pdVar21 + 4);
                    uStack_d0 = *(undefined4 *)(pdVar21 + 1);
                    uStack_cc = *(undefined4 *)((longlong)pdVar21 + 0xc);
                    plVar18 = *(longlong **)(*(longlong *)(lVar20 + lVar19) + 0x3a8);
                    if (((plVar18 != (longlong *)0x0) &&
                        (local_e8 = lVar19, local_e0 = lVar20,
                        cVar14 = (**(code **)(*plVar18 + 0x7c0))
                                           (plVar18,&local_d8,&local_bc,local_b8), lVar19 = local_e8
                        , lVar20 = local_e0, cVar14 != '\0')) &&
                       ((0.0 <= local_bc && (local_bc <= 0.0)))) goto LAB_1402e07bf;
                  }
                  lVar19 = lVar19 + 8;
                } while ((longlong)iVar15 * 8 != lVar19);
              }
              pdVar21 = pdVar21 + 3;
            } while (pdVar21 != pdVar2);
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar10 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
    LOCK();
    plVar10 = plVar8 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (bVar22) {
      cVar14 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 8) + 0x10) + 0x88))();
      uVar16 = 0;
      if (cVar14 == '\0') {
        uVar16 = *(undefined4 *)(param_1 + 0x54);
      }
      goto LAB_1402e068d;
    }
  }
LAB_1402e06e5:
  if ((*(char *)(param_1 + 100) == '\x01') &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0x1f0) == '\0')) {
    uVar16 = *(undefined4 *)(param_1 + 0x50);
  }
  else {
    uVar16 = *(undefined4 *)(param_1 + 0x48);
  }
LAB_1402e068d:
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 1402e0832 FUN_1402e0832 body=1129 status=ok
// SIG undefined FUN_1402e0832(void)

void FUN_1402e0832(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined *puVar11;
  longlong lVar12;
  float *pfVar13;
  longlong lVar14;
  int iVar15;
  float *pfVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_e8 [40];
  float local_c0;
  undefined4 uStack_bc;
  ushort local_a8;
  byte local_a0;
  char local_98 [16];
  longlong *local_88;
  int local_70;
  float local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar8 = *(int *)(param_1 + 0x6c);
  iVar10 = *(int *)(param_1 + 0x80);
  if (iVar10 + *(int *)(param_1 + 0x7c) <= iVar8) {
    if (0 < iVar10) {
      iVar15 = iVar8 - *(int *)(param_1 + 0x68);
      if (iVar15 < 1) {
        iVar15 = 0;
      }
      iVar15 = iVar15 - *(int *)(param_1 + 0x7c);
      if (iVar15 < 1) {
        iVar15 = 0;
      }
      if ((float)iVar15 / (float)iVar10 < *(float *)(param_1 + 0x5c)) goto LAB_1402e0872;
    }
    *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
    *(int *)(param_1 + 0x7c) = iVar8;
    uVar7 = FUN_1402e04a8(param_1);
    *(undefined4 *)(param_1 + 0x80) = uVar7;
    plVar3 = *(longlong **)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x84) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x1d0);
    if (plVar3 != (longlong *)0x0) {
      iVar8 = (int)plVar3[1];
      do {
        if (iVar8 == 0) goto LAB_1402e0872;
        LOCK();
        iVar10 = (int)plVar3[1];
        bVar17 = iVar8 == iVar10;
        if (bVar17) {
          *(int *)(plVar3 + 1) = iVar8 + 1;
          iVar10 = iVar8;
        }
        iVar8 = iVar10;
        UNLOCK();
      } while (!bVar17);
      lVar4 = *(longlong *)(param_1 + 0x28);
      if (lVar4 != 0) {
        FUN_1402e0c9c(*(undefined8 *)(param_1 + 8),local_98);
        pfVar16 = &local_c0;
        FUN_1447c3578(lVar4 + 0x1c8,pfVar16,local_98);
        if (local_a0 == 3) {
          uVar9 = 3;
          fVar19 = local_c0;
        }
        else {
          pfVar13 = &local_68;
          FUN_1400b56fe(pfVar13,&local_c0,3);
          fVar19 = 0.0;
          if (local_48 != 0) {
            fVar19 = local_68;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
          if (pcVar5 != (code *)0x0) {
            if (0x18 < local_50) {
              pfVar13 = (float *)CONCAT44(uStack_64,local_68);
            }
            (*pcVar5)(pfVar13);
          }
          if (0x18 < local_50) {
            FUN_1400020a8(CONCAT44(uStack_64,local_68));
          }
          uVar9 = (uint)local_a0;
        }
        if (1.0 <= fVar19) {
          fVar19 = 1.0;
        }
        if (fVar19 <= 0.0) {
          fVar19 = 0.0;
        }
        *(float *)(param_1 + 0x5c) = fVar19;
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_a8) {
            pfVar16 = (float *)CONCAT44(uStack_bc,local_c0);
          }
          (*pcVar5)(pfVar16);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
        }
        pfVar16 = &local_c0;
        FUN_1447c3578(lVar4 + 400,pfVar16,local_98);
        if (local_a0 == 3) {
          uVar9 = 3;
          fVar19 = local_c0;
        }
        else {
          pfVar13 = &local_68;
          FUN_1400b56fe(pfVar13,&local_c0,3);
          fVar19 = 0.0;
          if (local_48 != 0) {
            fVar19 = local_68;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
          if (pcVar5 != (code *)0x0) {
            if (0x18 < local_50) {
              pfVar13 = (float *)CONCAT44(uStack_64,local_68);
            }
            (*pcVar5)(pfVar13);
          }
          if (0x18 < local_50) {
            FUN_1400020a8(CONCAT44(uStack_64,local_68));
          }
          uVar9 = (uint)local_a0;
        }
        fVar18 = 0.0;
        if (0.0 <= fVar19) {
          fVar18 = fVar19;
        }
        *(float *)(param_1 + 0x60) = fVar18;
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_a8) {
            pfVar16 = (float *)CONCAT44(uStack_bc,local_c0);
          }
          (*pcVar5)(pfVar16);
        }
        if (0x18 < local_a8) {
          FUN_1400020a8(CONCAT44(uStack_bc,local_c0));
        }
        lVar4 = DAT_14c9a3da0;
        if ((longlong)local_70 != 0) {
          lVar14 = (longlong)local_70 + -1;
          lVar12 = lVar14 * 0x10;
          FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar12),
                        *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar12));
          if (*(longlong *)(lVar4 + lVar12) != 0) {
            FUN_1400020a8();
          }
          lVar4 = DAT_14c9a3da0;
          iVar8 = (int)lVar14;
          if (DAT_14c9a3dd4 != 0) {
            *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar8;
          }
          *(undefined4 *)(lVar4 + lVar12) = 0xffffffff;
          iVar10 = -1;
          if (0 < DAT_14c9a3dd4) {
            iVar10 = DAT_14c9a3dd0;
          }
          *(int *)(lVar4 + 4 + lVar12) = iVar10;
          DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
          puVar11 = &DAT_14c9a3db0;
          if (DAT_14c9a3dc0 != (undefined *)0x0) {
            puVar11 = DAT_14c9a3dc0;
          }
          iVar10 = iVar8 + 0x1f;
          if (-1 < iVar8) {
            iVar10 = iVar8;
          }
          bVar6 = (byte)lVar14 & 0x1f;
          DAT_14c9a3dd0 = iVar8;
          *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) =
               *(uint *)(puVar11 + (longlong)(iVar10 >> 5) * 4) &
               (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
          local_70 = 0;
        }
        if ((local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_88 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_88 + 0x10))();
          }
        }
      }
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
  }
LAB_1402e0872:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e0c9c FUN_1402e0c9c body=146 status=ok
// SIG undefined FUN_1402e0c9c(void)

undefined1 * FUN_1402e0c9c(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x110) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10c);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 != (longlong *)0x0) &&
         ((((int)plVar3[2] == *(int *)(param_1 + 0x110) &&
           ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar3, lVar2 != 0)))) {
        *param_2 = 0;
        *(undefined4 *)(param_2 + 0x28) = 0;
        goto LAB_1402e0d02;
      }
    }
  }
  lVar2 = FUN_14479d2ce(param_1 + 0xfc);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 0x28) = 0;
LAB_1402e0d02:
  FUN_1456bb102(param_2,lVar2);
  return param_2;
}



// FUNCTION 1402e0d2e FUN_1402e0d2e body=435 status=ok
// SIG undefined FUN_1402e0d2e(void)

void FUN_1402e0d2e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  ushort *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1402e0ee2();
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 != 0) {
    FUN_1448d5e3c(&local_70,param_1 + 0x208);
    puVar3 = *(undefined8 **)(local_70 + 0x350);
    AcquireSRWLockShared((PSRWLOCK)(puVar3 + 5));
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_68 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar1 = (int *)((longlong)local_68 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
        }
      }
    }
    if (*(int *)(param_1 + 0x2b8) != *(int *)(puVar3 + 4)) {
      *(int *)(param_1 + 0x2b8) = *(int *)(puVar3 + 4);
      if ((longlong)*(int *)(puVar3 + 1) != 0) {
        plVar5 = (longlong *)*puVar3;
        lVar6 = (longlong)*(int *)(puVar3 + 1) * 0x168;
        do {
          if (*plVar5 == DAT_14cbdd5b0) {
            FUN_14148c6ea(param_1 + 0x2d8,plVar5);
            *(float *)(param_1 + 0x6a8) = *(float *)(param_1 + 0x318);
            *(float *)(lVar2 + 0xf0) = *(float *)(param_1 + 0x318) * 0.25 + 0.0;
          }
          else if (*plVar5 == DAT_14cbdd5b8) {
            FUN_14148c6ea(param_1 + 0x4c0,plVar5);
            *(float *)(param_1 + 0x6ac) = *(float *)(param_1 + 0x500);
            *(float *)(lVar2 + 0xf4) = *(float *)(param_1 + 0x500) * 0.25 + 0.0;
          }
          plVar5 = plVar5 + 0x2d;
          lVar6 = lVar6 + -0x168;
        } while (lVar6 != 0);
      }
      puVar4 = *(ushort **)(lVar2 + 0x80);
      if (puVar4 != (ushort *)0x0) {
        *puVar4 = *puVar4 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(puVar3 + 5));
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e0ee2 FUN_1402e0ee2 body=255 status=ok
// SIG undefined FUN_1402e0ee2(void)

void FUN_1402e0ee2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 *puVar4;
  ushort *puVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x288);
  if (lVar3 != 0) {
    FUN_1448d5e3c(&local_40,param_1 + 0x208);
    puVar4 = *(undefined1 **)(local_40 + 0x360);
    AcquireSRWLockShared((PSRWLOCK)(puVar4 + 0x20));
    if (local_38 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_38 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)local_38 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_38 + 0x10))(local_38);
        }
      }
    }
    if ((*(int *)(param_1 + 700) != *(int *)(puVar4 + 0x18)) &&
       (*(int *)(param_1 + 700) = *(int *)(puVar4 + 0x18),
       *(int *)(lVar3 + 0xe4) != *(int *)(puVar4 + 4))) {
      *(undefined1 *)(lVar3 + 0xe0) = *puVar4;
      *(undefined4 *)(lVar3 + 0xe4) = *(undefined4 *)(puVar4 + 4);
      puVar5 = *(ushort **)(lVar3 + 0x80);
      if (puVar5 != (ushort *)0x0) {
        *puVar5 = *puVar5 | (ushort)(1L << (*(byte *)(lVar3 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(puVar4 + 0x20));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402e0fe2 FUN_1402e0fe2 body=503 status=ok
// SIG undefined FUN_1402e0fe2(void)

void FUN_1402e0fe2(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int *piVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8 [12];
  void *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  if ((longlong)*(int *)(param_1 + 0xa28) != 0) {
    plVar9 = (longlong *)(param_2 + 0x20);
    local_c8 = *(longlong *)(param_2 + 0x30);
    piVar10 = (int *)(*(longlong *)(param_1 + 0xa20) + 0xc);
    lVar11 = (longlong)*(int *)(param_1 + 0xa28) << 4;
    do {
      uVar3 = piVar10[-1];
      piVar5 = piVar10;
      if ((int)uVar3 < 0) {
        if ((((~uVar3 & 0x7fffffff) != 0) && (uVar3 = (int)(uVar3 * 2) >> 1, -1 < (int)uVar3)) &&
           ((int)uVar3 < *(int *)(local_c8 + 0x88))) {
          piVar5 = (int *)((ulonglong)uVar3 * 4 + *(longlong *)(local_c8 + 0x80));
          goto LAB_1402e1057;
        }
      }
      else {
LAB_1402e1057:
        iVar1 = *piVar5;
        lVar6 = (longlong)iVar1;
        if ((-1 < lVar6) && (iVar1 < *(int *)(param_2 + 0x28))) {
          if (*(char *)(*(longlong *)(param_2 + 0x38) + lVar6) == '\0') {
            FUN_1447d5d8e(plVar9,iVar1);
          }
          puVar7 = (undefined8 *)(lVar6 * 0x60 + *plVar9);
          puVar8 = local_b8;
          for (lVar4 = 0xc; uVar2 = uStack_50, lVar4 != 0; lVar4 = lVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          lVar6 = (longlong)(int)(uint)uStack_50;
          uVar3 = (uint)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
          local_c0 = plVar9;
          if (uStack_50._4_4_ < uVar3) {
            FUN_1402e11da(&local_58,uVar2 & 0xffffffff);
          }
          piVar5 = (int *)((longlong)local_58 + lVar6 * 0x70);
          *piVar5 = iVar1;
          puVar7 = local_b8;
          piVar5 = piVar5 + 4;
          for (lVar6 = 0xc; plVar9 = local_c0, lVar6 != 0; lVar6 = lVar6 + -1) {
            *(undefined8 *)piVar5 = *puVar7;
            puVar7 = puVar7 + 1;
            piVar5 = piVar5 + 2;
          }
        }
      }
      piVar10 = piVar10 + 4;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  FUN_1402e1238(param_1,param_2,param_3);
  lVar11 = (longlong)(int)(uint)uStack_50;
  if (0 < lVar11) {
    iVar1 = (int)param_3[1];
    *(uint *)(param_3 + 1) = iVar1 + (uint)uStack_50;
    if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar1) < (uint)uStack_50) {
      FUN_1400c28ea(param_3,iVar1);
    }
    memcpy((void *)((longlong)iVar1 * 0x70 + *param_3),local_58,lVar11 * 0x70);
    FUN_1449449dd(*param_3,(int)param_3[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e11da FUN_1402e11da body=93 status=ok
// SIG undefined FUN_1402e11da(void)

void FUN_1402e11da(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
    }
    else {
      uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar2 = 0x7fffffff;
    if ((int)uVar1 <= (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)(param_1 + 0xc) = uVar2;
    FUN_140117e3e();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1402e1238 FUN_1402e1238 body=354 status=ok
// SIG undefined FUN_1402e1238(void)

void FUN_1402e1238(longlong param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_3 + 1) == 0) {
    lVar8 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xf0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xf0);
    }
    iVar6 = *(int *)(param_1 + 0xf8);
    if ((longlong)iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x30);
      lVar7 = 0;
      do {
        plVar3 = *(longlong **)(lVar8 + lVar7);
        if ((plVar3 != (longlong *)0x0) &&
           ((((*(byte *)((longlong)plVar3 + 0x1dc) & 8) == 0 || (1e-05 < *(float *)(plVar3 + 0x3c)))
            && (uVar1 = *(uint *)(plVar3 + 3), (~uVar1 & 0x7fffffff) != 0)))) {
          lVar5 = *(longlong *)(lVar2 + 0x20);
          if (*(longlong *)(lVar2 + 0x20) == 0) {
            lVar5 = lVar2 + 0x10;
          }
          if ((((*(uint *)(lVar5 + (ulonglong)(uVar1 >> 3 & 0x1ffc)) >> (uVar1 & 0x1f) & 1) != 0) &&
              (*(int *)((longlong)plVar3 + 0x10c) != -1)) &&
             (((int)plVar3[0x39] != -1 &&
              (((char)plVar3[0x3d] != '\x04' &&
               (cVar4 = (**(code **)(*plVar3 + 0x28))(plVar3,lVar2), cVar4 != '\0')))))) {
            FUN_143ca8f5e(plVar3,param_2,param_3);
          }
        }
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar6 * 8 != lVar7);
      iVar6 = *(int *)(param_3 + 1);
      if (0x55555554 < iVar6 * -0x55555555 + 0x2aaaaaaaU) goto LAB_1402e136e;
    }
    FUN_1449449dd(*param_3,iVar6);
  }
LAB_1402e136e:
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e139b FUN_1402e139b body=553 status=ok
// SIG undefined FUN_1402e139b(void)

void FUN_1402e139b(undefined8 *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [15];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != 0) {
    iVar8 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar8;
joined_r0x0001402e13e2:
    do {
      iVar5 = iVar1 * 2 + 1;
      if (iVar5 < (int)param_2) {
        iVar6 = iVar1 * 2 + 2;
        if ((iVar6 < (int)param_2) &&
           (*(int *)(param_1 + (longlong)iVar5 * 0xe) <= *(int *)(param_1 + (longlong)iVar6 * 0xe)))
        {
          iVar5 = iVar6;
        }
        if (*(int *)(param_1 + (longlong)iVar1 * 0xe) < *(int *)(param_1 + (longlong)iVar5 * 0xe)) {
          puVar3 = param_1 + (longlong)iVar1 * 0xe;
          puVar4 = local_98;
          for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (longlong)iVar5 * 0xe;
          puVar4 = param_1 + (longlong)iVar1 * 0xe;
          for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_98;
          puVar4 = param_1 + (longlong)iVar5 * 0xe;
          for (lVar2 = 0xe; iVar1 = iVar5, lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          goto joined_r0x0001402e13e2;
        }
      }
      bVar9 = iVar8 != 0;
      iVar8 = iVar8 + -1;
      iVar1 = iVar8;
    } while (bVar9);
    if (1 < (int)param_2) {
      puVar3 = param_1;
      puVar4 = local_98;
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = param_1 + ((ulonglong)param_2 - 1) * 0xe;
      puVar4 = param_1;
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      puVar3 = local_98;
      puVar4 = param_1 + ((ulonglong)param_2 - 1) * 0xe;
      for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar5 = 1;
          iVar8 = 0;
          do {
            iVar1 = iVar1 + 2;
            iVar6 = iVar5;
            if (((longlong)iVar1 < (longlong)uVar7) &&
               (*(int *)(param_1 + (longlong)iVar5 * 0xe) <=
                *(int *)(param_1 + (longlong)iVar1 * 0xe))) {
              iVar6 = iVar1;
            }
            if (*(int *)(param_1 + (longlong)iVar6 * 0xe) <=
                *(int *)(param_1 + (longlong)iVar8 * 0xe)) break;
            puVar3 = param_1 + (longlong)iVar8 * 0xe;
            puVar4 = local_98;
            for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = param_1 + (longlong)iVar6 * 0xe;
            puVar4 = param_1 + (longlong)iVar8 * 0xe;
            for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            puVar3 = local_98;
            puVar4 = param_1 + (longlong)iVar6 * 0xe;
            for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + 1;
              puVar4 = puVar4 + 1;
            }
            iVar1 = iVar6 * 2;
            iVar5 = iVar6 * 2 + 1;
            iVar8 = iVar6;
          } while ((longlong)iVar5 < (longlong)uVar7);
          puVar3 = param_1;
          puVar4 = local_98;
          for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = param_1 + (uVar7 - 1) * 0xe;
          puVar4 = param_1;
          for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          puVar3 = local_98;
          puVar4 = param_1 + (uVar7 - 1) * 0xe;
          for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
          }
          bVar9 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar9);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e15d2 FUN_1402e15d2 body=54 status=ok
// SIG undefined FUN_1402e15d2(void)

void FUN_1402e15d2(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_1402e1ec6();
  if (cVar1 != '\0') {
    FUN_14056c6ca(param_1);
  }
  FUN_1402e1608(param_1,param_2);
  return;
}



// FUNCTION 1402e1608 FUN_1402e1608 body=2237 status=ok
// SIG undefined FUN_1402e1608(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1402e1608(uint *param_1)

{
  float fVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  code ***pppcVar6;
  longlong lVar7;
  code *pcVar8;
  code ***pppcVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  double dVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong extraout_RAX;
  undefined8 uVar16;
  longlong *plVar17;
  double *pdVar18;
  undefined4 uVar19;
  int iVar20;
  uint uVar21;
  longlong *plVar22;
  bool bVar23;
  uint extraout_XMM0_Da;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar36;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150;
  undefined1 *local_148;
  undefined8 **local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined1 **local_128;
  code *local_118;
  code ***pppcStack_110;
  undefined1 local_108 [16];
  code *local_f8;
  longlong **pplStack_f0;
  double local_e8;
  undefined8 local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  longlong local_c0;
  code **local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (param_1[0xb] != 0) {
    uVar11 = param_1[10];
    uVar16 = 0;
    if (((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) goto LAB_1402e1b2e;
    plVar12 = (longlong *)
              ((ulonglong)((uVar11 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
    if (((plVar12 != (longlong *)0x0) &&
        (((*(uint *)(plVar12 + 2) == param_1[0xb] && ((*(uint *)(plVar12 + 1) & 0x10200000) == 0))
         && (plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0)))) && (plVar12[0x22] != 0))
    {
      plVar22 = plVar12;
      dVar13 = (double)(**(code **)(*plVar12 + 0xeb8))();
      uVar19 = SUB84(plVar22,0);
      if ((SUB81(dVar13,0) != '\0') && (plVar12[0x76c] != 0)) {
        lVar14 = plVar12[0x22];
        pcVar5 = *(code **)(lVar14 + 0x240);
        pppcVar6 = *(code ****)(lVar14 + 0x248);
        dVar2 = *(double *)*(undefined1 (*) [16])(lVar14 + 0x250);
        dVar26 = *(double *)(lVar14 + 600);
        local_108 = *(undefined1 (*) [16])(lVar14 + 0x250);
        pdVar18 = *(double **)(lVar14 + 0x228);
        local_118 = pcVar5;
        pppcStack_110 = pppcVar6;
        if (pdVar18 == (double *)0x0) {
          uVar19 = 0x40;
          pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
          dVar13 = DAT_14c8463d8;
          *pdVar18 = DAT_14c8463d0;
          pdVar18[1] = dVar13;
          dVar13 = DAT_14c8463e8;
          pdVar18[2] = DAT_14c8463e0;
          pdVar18[3] = dVar13;
          dVar13 = DAT_14c846500;
          pdVar18[4] = (double)DAT_14c8464f8;
          pdVar18[5] = dVar13;
          dVar13 = DAT_14c846508;
          pdVar18[6] = DAT_14c846508;
          *(double **)(lVar14 + 0x228) = pdVar18;
        }
        lVar14 = -(ulonglong)(dVar26 != pdVar18[3]);
        auVar35._8_4_ = (int)-(ulonglong)((double)pppcVar6 != pdVar18[1]);
        auVar35._0_8_ = -(ulonglong)((double)pcVar5 != *pdVar18);
        auVar35._12_4_ = (int)(-(ulonglong)((double)pppcVar6 != pdVar18[1]) >> 0x20);
        iVar20 = movmskpd(SUB84(dVar13,0),auVar35);
        auVar4._8_4_ = (int)lVar14;
        auVar4._0_8_ = -(ulonglong)(dVar2 != pdVar18[2]);
        auVar4._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
        uVar11 = movmskpd(uVar19,auVar4);
        if ((uVar11 & 0x3fffffff) != 0 || iVar20 != 0) {
          pdVar18[2] = (double)local_108._0_8_;
          pdVar18[3] = (double)local_108._8_8_;
          *pdVar18 = (double)local_118;
          pdVar18[1] = (double)pppcStack_110;
          FUN_1448052ee(&local_118,&local_f8);
          pdVar18[6] = local_e8;
          pdVar18[4] = (double)local_f8;
          pdVar18[5] = (double)pplStack_f0;
        }
        local_e8 = pdVar18[6];
        local_f8 = (code *)pdVar18[4];
        pplStack_f0 = (longlong **)pdVar18[5];
        fVar24 = (float)FUN_1402e20be(plVar12[0x39d]);
        dVar13 = (double)pplStack_f0 - (double)fVar24;
        if (180.0 < dVar13) {
          dVar13 = dVar13 + -360.0;
        }
        else if (dVar13 < -180.0) {
          dVar13 = dVar13 + 360.0;
        }
        fVar1 = *(float *)(plVar12[0x76c] + 0xe4);
        if (fVar1 <= ABS((float)dVar13)) {
          local_118 = DAT_14c8464f8;
          local_108._0_8_ = DAT_14c846508;
          uVar11 = -(uint)((float)dVar13 < 0.0);
          pppcStack_110 =
               (code ***)(double)(fVar24 + (float)(~uVar11 & (uint)fVar1 | (uint)-fVar1 & uVar11));
          local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(plVar12[0x76c] + 0xe0));
          FUN_140476f06(&local_130,&local_f8);
          local_148 = (undefined1 *)0x4076800000000000;
          local_140 = (undefined8 **)0x4076800000000000;
          local_138 = 0x4076800000000000;
          FUN_1456f9d8e(plVar12,&local_130);
        }
LAB_1402e1b2c:
        uVar16 = 1;
        goto LAB_1402e1b2e;
      }
      if (param_1[1] == 0) {
LAB_1402e1c6b:
        bVar23 = false;
      }
      else {
        uVar11 = *param_1;
        bVar23 = false;
        if ((-1 < (int)uVar11) && (bVar23 = false, (int)uVar11 < DAT_14c9647dc)) {
          plVar22 = (longlong *)
                    ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8));
          if ((plVar22 == (longlong *)0x0) ||
             ((*(uint *)(plVar22 + 2) != param_1[1] || ((*(uint *)(plVar22 + 1) & 0x10200000) != 0))
             )) goto LAB_1402e1c6b;
          bVar23 = *plVar22 != 0;
        }
      }
      plVar22 = *(longlong **)(param_1 + 8);
      if ((plVar22 != (longlong *)0x0) && (param_1[7] != 0)) {
        uVar11 = param_1[6];
        uVar16 = 0;
        if (((int)uVar11 < 0) || (uVar16 = 0, DAT_14c9647dc <= (int)uVar11)) goto LAB_1402e1b2e;
        lVar14 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
        if (((lVar14 != 0) && (*(uint *)(lVar14 + 0x10) == param_1[7])) &&
           ((bool)((*(uint *)(lVar14 + 8) & 0x10200000) == 0 & bVar23))) {
          cVar10 = FUN_1402e1ec6(param_1);
          if (cVar10 != '\0') {
            if (*(code **)(*plVar22 + 0x10) == (code *)&LAB_144944cea) {
              plVar17 = plVar22 + 0xe1;
            }
            else {
              plVar17 = (longlong *)(**(code **)(*plVar22 + 0x10))(plVar22);
            }
            *(undefined1 *)(plVar17 + 0x30) = 0;
            FUN_1447c5244(plVar17);
            *(undefined1 *)(plVar17 + 0x30) = 1;
          }
          if (*(code **)(*plVar22 + 0x10) == (code *)&LAB_144944cea) {
            plVar22 = plVar22 + 0xe1;
          }
          else {
            plVar22 = (longlong *)(**(code **)(*plVar22 + 0x10))(plVar22);
          }
          local_d0 = &local_d8;
          local_d8 = DAT_14cb72618;
          local_c8 = &local_c0;
          local_c0 = 0;
          local_140 = &local_d0;
          local_148 = &LAB_143cbcae0;
          lVar14 = plVar22[8];
          if (lVar14 != 0) {
            pplStack_f0 = &local_130;
            local_128 = &local_148;
            local_b8 = &local_f8;
            local_f8 = FUN_143cbca2e;
            pppcStack_110 = &local_b8;
            local_118 = FUN_1487df56e;
            local_130 = plVar22;
            FUN_1447c5ba2();
            lVar7 = local_c0;
            uVar19 = (undefined4)lVar14;
            if (local_c0 != 0) {
              uVar15 = plVar12[0x22];
              pcVar5 = *(code **)(uVar15 + 0x240);
              pppcVar6 = *(code ****)(uVar15 + 0x248);
              local_108 = *(undefined1 (*) [16])(uVar15 + 0x250);
              dVar13 = local_108._0_8_;
              dVar2 = local_108._8_8_;
              fVar24 = *(float *)(local_c0 + 0x2a4);
              pcVar8 = pcVar5;
              pppcVar9 = pppcVar6;
              if (1e-08 <= fVar24) {
                if (1.0 < fVar24) {
                  local_108 = *(undefined1 (*) [16])(local_c0 + 0x3d0);
                  pcVar8 = *(code **)(local_c0 + 0x3c0);
                  pppcVar9 = *(code ****)(local_c0 + 0x3c8);
                }
                else {
                  dVar36 = *(double *)(local_c0 + 0x3c0);
                  dVar27 = *(double *)(local_c0 + 0x3c8);
                  dVar33 = *(double *)(local_c0 + 0x3d0);
                  dVar26 = *(double *)(local_c0 + 0x3d8);
                  dVar25 = dVar2 * dVar26 +
                           dVar13 * dVar33 + (double)pcVar5 * dVar36 + (double)pppcVar6 * dVar27;
                  uVar15 = (ulonglong)(0.0 <= dVar25);
                  uVar19 = 0x49931160;
                  dVar25 = dVar25 * (double)(&DAT_149931160)[uVar15];
                  dVar28 = 1.0 - (double)fVar24;
                  dVar29 = (double)(&DAT_149931160)[uVar15] * (double)fVar24;
                  if (dVar25 < 0.9999) {
                    dVar26 = dVar25;
                    if (1.0 <= dVar25) {
                      dVar26 = 1.0;
                    }
                    uVar19 = 0x49931160;
                    dVar26 = acos((double)(-(ulonglong)(dVar25 < -1.0) & 0xbff0000000000000 |
                                          ~-(ulonglong)(dVar25 < -1.0) & (ulonglong)dVar26));
                    dVar27 = sin(dVar26);
                    dVar28 = sin(dVar28 * dVar26);
                    dVar28 = dVar28 * (1.0 / dVar27);
                    dVar29 = sin(dVar29 * dVar26);
                    dVar29 = dVar29 * (1.0 / dVar27);
                    dVar26 = *(double *)(lVar7 + 0x3d8);
                    dVar33 = *(double *)(lVar7 + 0x3d0);
                    dVar36 = *(double *)(lVar7 + 0x3c0);
                    dVar27 = *(double *)(lVar7 + 0x3c8);
                    uVar15 = extraout_RAX;
                  }
                  dVar25 = dVar28 * dVar2 + dVar26 * dVar29;
                  dVar37 = dVar13 * dVar28 + dVar33 * dVar29;
                  dVar26 = (double)pppcVar6 * dVar28 + dVar27 * dVar29;
                  dVar27 = (double)pcVar5 * dVar28 + dVar36 * dVar29;
                  dVar33 = dVar37 * dVar37 + dVar27 * dVar27;
                  dVar36 = dVar25 * dVar25 + dVar26 * dVar26;
                  auVar34._0_8_ = dVar33 + dVar36;
                  auVar34._8_8_ = dVar33 + dVar36;
                  auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_);
                  auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_);
                  auVar35 = sqrtpd(auVar34,auVar34);
                  auVar35 = divpd(_DAT_149934d80,auVar35);
                  auVar38._0_8_ = auVar35._0_8_ * dVar37;
                  auVar38._8_8_ = auVar35._8_8_ * dVar25;
                  local_108 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar30);
                  pcVar8 = (code *)((ulonglong)(dVar27 * auVar35._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar34._0_8_));
                  pppcVar9 = (code ***)
                             ((ulonglong)(dVar26 * auVar35._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar34._8_8_));
                }
              }
              pppcStack_110 = pppcVar9;
              local_118 = pcVar8;
              lVar14 = -(ulonglong)
                        (9.999999747378752e-05 < ABS((double)pppcStack_110 - (double)pppcVar6));
              auVar3._8_4_ = (int)lVar14;
              auVar3._0_8_ = -(ulonglong)
                              (9.999999747378752e-05 < ABS((double)local_118 - (double)pcVar5));
              auVar3._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
              uVar11 = movmskpd((int)uVar15,auVar3);
              auVar39._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_108._8_8_ - dVar2));
              auVar39._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(local_108._0_8_ - dVar13));
              iVar20 = movmskpd(uVar19,auVar39);
              uVar21 = iVar20 << 2 | uVar11;
              if (uVar21 != 0) {
                auVar32._8_8_ =
                     -(ulonglong)
                      (9.999999747378752e-05 < ABS((double)pppcVar6 + (double)pppcStack_110));
                auVar32._0_8_ =
                     -(ulonglong)(9.999999747378752e-05 < ABS((double)pcVar5 + (double)local_118));
                iVar20 = movmskpd(uVar11,auVar32);
                auVar31._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar2 + local_108._8_8_));
                auVar31._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(dVar13 + local_108._0_8_));
                uVar11 = movmskpd(uVar21,auVar31);
                if ((uVar11 & 0x3fffffff) != 0 || iVar20 != 0) {
                  local_150 = 0;
                  local_158 = 0;
                  (**(code **)(*plVar12 + 0x4e8))(plVar12,&DAT_14c8464e0,&local_118,0);
                  FUN_1447cb614(&local_118);
                  param_1[0xc] = extraout_XMM0_Da;
                }
              }
              goto LAB_1402e1b2c;
            }
          }
        }
      }
    }
  }
  uVar16 = 0;
LAB_1402e1b2e:
  if ((local_b0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16;
}



// FUNCTION 1402e1ec6 FUN_1402e1ec6 body=504 status=ok
// SIG undefined FUN_1402e1ec6(void)

bool FUN_1402e1ec6(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  
  if (param_1[1] == 0) {
LAB_1402e2099:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar1 = *param_1;
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar7 + 2) != param_1[1] || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
      goto LAB_1402e2099;
      plVar6 = (longlong *)*puVar7;
    }
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    return false;
  }
  if (param_1[7] == 0) {
    return false;
  }
  uVar1 = param_1[6];
  if ((int)uVar1 < 0) {
    return false;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return false;
  }
  lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar4 == 0) {
    return false;
  }
  if (*(uint *)(lVar4 + 0x10) != param_1[7]) {
    return false;
  }
  if ((*(uint *)(lVar4 + 8) & 0x10200000) != 0) {
    return false;
  }
  if (plVar6 == (longlong *)0x0) {
    return false;
  }
  lVar4 = *plVar6;
  if (*(code **)(lVar4 + 0x5e8) == FUN_140972dde) {
    if (plVar6[0x76] != 0) goto LAB_1402e207a;
    if (*(code **)(lVar4 + 0x5f8) == FUN_144784df4) {
      if (*(code **)(plVar6[0x784] + 0x18) == (code *)&LAB_144904684) {
        if (*(int *)((longlong)plVar6 + 0x75b4) == 0) {
          return false;
        }
        uVar1 = *(uint *)(plVar6 + 0xeb6);
        if ((int)uVar1 < 0) {
          return false;
        }
        if (DAT_14c9647dc <= (int)uVar1) {
          return false;
        }
        plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (plVar5 == (longlong *)0x0) {
          return false;
        }
        if ((int)plVar5[2] != *(int *)((longlong)plVar6 + 0x75b4)) {
          return false;
        }
        if ((*(uint *)(plVar5 + 1) & 0x10200000) != 0) {
          return false;
        }
        if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
          lVar4 = *plVar5;
        }
        else {
          lVar4 = 0;
        }
        lVar4 = lVar4 + 0x110;
      }
      else {
        lVar4 = (**(code **)(plVar6[0x784] + 0x18))(plVar6 + 0x784);
      }
      if (lVar4 == 0) {
        return false;
      }
      lVar4 = *(longlong *)(lVar4 + 0x20);
    }
    else {
      lVar4 = (**(code **)(lVar4 + 0x5f8))(plVar6);
    }
    if (lVar4 == 0) {
      return false;
    }
    lVar4 = *(longlong *)(lVar4 + 0x3b0);
  }
  else {
    lVar4 = (**(code **)(lVar4 + 0x5e8))(plVar6);
  }
  if (lVar4 == 0) {
    return false;
  }
  lVar4 = *plVar6;
LAB_1402e207a:
  cVar3 = (**(code **)(lVar4 + 0x700))(plVar6);
  if (cVar3 == '\0') {
    return false;
  }
  lVar4 = (**(code **)(*plVar2 + 0x10))(plVar2);
  return 0 < *(int *)(lVar4 + 0x78);
}



// FUNCTION 1402e20be FUN_1402e20be body=650 status=ok
// SIG undefined FUN_1402e20be(void)

void FUN_1402e20be(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  double dVar10;
  double *pdVar11;
  uint uVar12;
  longlong *plVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined2 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined1 *local_88;
  code *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_1 == (longlong *)0x0) {
    fVar15 = 0.0;
  }
  else {
    plVar13 = param_1;
    dVar10 = (double)(**(code **)(*param_1 + 0x700))();
    if ((SUB81(dVar10,0) != '\0') && (lVar1 = param_1[0x78], lVar1 != 0)) {
      if (DAT_14caf9cd0 == 0.0) {
        local_90 = &local_78;
        local_78 = FUN_141030f22;
        local_80 = FUN_14081d0ea;
        local_88 = &LAB_1463c0cc2;
        local_98 = &LAB_147c9db5b;
        local_a0 = &LAB_1463f9c44;
        local_a8 = &DAT_149e063b2;
        local_b0 = 0x2000000000;
        local_b8 = 0x10000004;
        local_c0 = 8;
        local_c8 = 0x958;
        FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      }
      plVar13 = *(longlong **)(lVar1 + 0x10);
      dVar10 = DAT_14caf9cd0;
      if (*(int *)((longlong)DAT_14caf9cd0 + 0x38) <= (int)plVar13[7]) {
        dVar10 = (double)((longlong)DAT_14caf9cd0 + 0x30);
        plVar13 = (longlong *)plVar13[6];
        if (((double)plVar13[*(int *)((longlong)DAT_14caf9cd0 + 0x38)] == dVar10) &&
           (plVar2 = *(longlong **)(lVar1 + 0x448), plVar13 = (longlong *)0x0,
           plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x728))(plVar2,&local_78);
          fVar15 = (float)uStack_70;
          goto LAB_1402e216e;
        }
      }
    }
    uVar14 = SUB84(plVar13,0);
    lVar1 = param_1[0x39];
    if (lVar1 == 0) {
      uVar14 = SUB84(DAT_14c846500,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
    }
    else {
      pcVar5 = *(code **)(lVar1 + 0x240);
      dVar6 = *(double *)(lVar1 + 0x248);
      dVar7 = *(double *)(lVar1 + 0x250);
      dVar8 = *(double *)(lVar1 + 600);
      pdVar11 = *(double **)(lVar1 + 0x228);
      local_78 = pcVar5;
      uStack_70 = dVar6;
      local_68 = dVar7;
      uStack_60 = dVar8;
      if (pdVar11 == (double *)0x0) {
        uVar14 = 0x40;
        pdVar11 = (double *)FUN_14001cc68(0x40,0x10);
        dVar10 = DAT_14c8463d8;
        *pdVar11 = DAT_14c8463d0;
        pdVar11[1] = dVar10;
        dVar10 = DAT_14c8463e8;
        pdVar11[2] = DAT_14c8463e0;
        pdVar11[3] = dVar10;
        dVar10 = DAT_14c846500;
        pdVar11[4] = DAT_14c8464f8;
        pdVar11[5] = dVar10;
        dVar10 = DAT_14c846508;
        pdVar11[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar11;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar6 != pdVar11[1]);
      auVar3._0_8_ = -(ulonglong)((double)pcVar5 != *pdVar11);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar11[1]) >> 0x20);
      iVar9 = movmskpd(SUB84(dVar10,0),auVar3);
      auVar4._8_4_ = (int)-(ulonglong)(dVar8 != pdVar11[3]);
      auVar4._0_8_ = -(ulonglong)(dVar7 != pdVar11[2]);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar8 != pdVar11[3]) >> 0x20);
      uVar12 = movmskpd(uVar14,auVar4);
      if ((uVar12 & 0x3fffffff) != 0 || iVar9 != 0) {
        *(undefined4 *)(pdVar11 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar11 + 0x14) = local_68._4_4_;
        *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_60._4_4_;
        *(undefined4 *)pdVar11 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar11 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_58);
        pdVar11[6] = local_48;
        pdVar11[4] = local_58;
        pdVar11[5] = dStack_50;
      }
      uVar14 = SUB84(pdVar11[5],0);
      uVar16 = (undefined4)((ulonglong)pdVar11[5] >> 0x20);
    }
    fVar15 = (float)(double)CONCAT44(uVar16,uVar14);
  }
LAB_1402e216e:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar15);
}



// FUNCTION 1402e234a FUN_1402e234a body=3219 status=ok
// SIG undefined FUN_1402e234a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e234a(undefined8 param_1,undefined8 *param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  char cVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong *plVar20;
  undefined4 *puVar21;
  int iVar22;
  longlong lVar23;
  uint uVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined1 auStack_198 [44];
  float local_16c;
  float local_168;
  float local_164;
  longlong local_160;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar14 = param_2[9];
  if (*(int *)(lVar14 + 0x18) != *(int *)(lVar14 + 0x44)) {
    lVar15 = *(longlong *)(param_2[2] + 0x10);
    lVar23 = lVar14 + 0x48;
    if (*(longlong *)(lVar14 + 0x50) != 0) {
      lVar23 = *(longlong *)(lVar14 + 0x50);
    }
    iVar22 = *(int *)(lVar23 + (ulonglong)
                               (*(int *)(lVar14 + 0x58) - 1U &
                               (int)lVar15 + (int)((ulonglong)lVar15 >> 0x20) * 0x17) * 4);
    if (iVar22 != -1) {
      do {
        lVar23 = *(longlong *)(lVar14 + 0x10) + (longlong)iVar22 * 0x1d0;
        if (*(longlong *)(*(longlong *)(lVar14 + 0x10) + (longlong)iVar22 * 0x1d0) == lVar15)
        goto LAB_1402e243a;
        iVar22 = *(int *)(lVar23 + 0x1c0);
      } while (iVar22 != -1);
    }
  }
  lVar23 = 0;
LAB_1402e243a:
  uVar24 = *(int *)(param_2 + 10) + 0xfU & 0xfffffff0;
  FUN_1402e30bc();
  *(uint *)(param_2 + 10) = DAT_14cb39104 + uVar24;
  puVar25 = (undefined8 *)((ulonglong)uVar24 + param_2[7]);
  if (*(char *)(lVar23 + 0x10) == '\x01') {
    lVar14 = *(longlong *)(lVar23 + 0x120);
    *(undefined4 *)(puVar25 + 1) = *(undefined4 *)(lVar23 + 0xf4);
    *puVar25 = *(undefined8 *)(lVar23 + 0xec);
    *(undefined4 *)((longlong)puVar25 + 0xc) = *(undefined4 *)(lVar23 + 0xf8);
    *(undefined4 *)(puVar25 + 2) = *(undefined4 *)(lVar23 + 0xfc);
    *(uint *)((longlong)puVar25 + 0x14) = (uint)(lVar14 != 0);
    puVar25[3] = *(undefined8 *)(lVar23 + 0x100);
    puVar25[4] = *(undefined8 *)(lVar23 + 0x108);
    puVar25[5] = *(undefined8 *)(lVar23 + 0x110);
    lVar15 = *(longlong *)(lVar23 + 0x118);
    if (*(longlong *)(lVar23 + 0x118) == 0) {
      lVar15 = DAT_14cb427f0;
    }
    puVar25[6] = lVar15;
    puVar13 = &DAT_14cb42870;
    if (lVar14 != 0) {
      puVar13 = (undefined8 *)(lVar23 + 0x120);
    }
    puVar25[7] = *puVar13;
    *(uint *)(puVar25 + 8) = (uint)*(byte *)(lVar23 + 0x11);
    if (*(char *)(lVar23 + 0x11) != '\x01') goto LAB_1402e2500;
    puVar13 = (undefined8 *)(lVar23 + 0x128);
  }
  else {
    *(undefined4 *)(puVar25 + 1) = DAT_14c9a52a0;
    *puVar25 = DAT_14c9a5298;
    *(undefined8 *)((longlong)puVar25 + 0xc) = 0;
    *(undefined4 *)((longlong)puVar25 + 0x14) = 0;
    puVar25[3] = DAT_14cb428f0;
    puVar25[4] = DAT_14cb427b0;
    puVar25[5] = DAT_14cb42830;
    puVar25[6] = DAT_14cb427f0;
    puVar25[7] = DAT_14cb42870;
    *(undefined4 *)(puVar25 + 8) = 0;
LAB_1402e2500:
    puVar13 = &DAT_14cb42930;
  }
  puVar25[9] = *puVar13;
  puVar25[10] = *(undefined8 *)(lVar23 + 0x130);
  *(undefined4 *)(puVar25 + 0xb) = *(undefined4 *)(lVar23 + 0x138);
  lVar14 = *(longlong *)(lVar23 + 0x148);
  if (*(longlong *)(lVar23 + 0x148) == 0) {
    lVar14 = DAT_14cb42970;
  }
  puVar25[0xc] = lVar14;
  lVar14 = *(longlong *)(lVar23 + 0x160);
  if (*(longlong *)(lVar23 + 0x160) == 0) {
    lVar14 = DAT_14cb428f0;
  }
  puVar25[0xd] = lVar14;
  puVar25[0xe] = *(undefined8 *)(lVar23 + 0x170);
  *(undefined4 *)(puVar25 + 0xf) = *(undefined4 *)(lVar23 + 0x178);
  lVar14 = *(longlong *)(lVar23 + 0x188);
  if (*(longlong *)(lVar23 + 0x188) == 0) {
    lVar14 = DAT_14cb42830;
  }
  puVar25[0x10] = lVar14;
  lVar14 = *(longlong *)(lVar23 + 0x1a0);
  if (*(longlong *)(lVar23 + 0x1a0) == 0) {
    lVar14 = DAT_14cb428f0;
  }
  puVar25[0x11] = lVar14;
  lVar14 = *(longlong *)(lVar23 + 0x148);
  if (*(longlong *)(lVar23 + 0x148) == 0) {
    lVar14 = DAT_14cb42970;
  }
  puVar25[0xc] = lVar14;
  lVar14 = *(longlong *)(lVar23 + 0x188);
  if (*(longlong *)(lVar23 + 0x188) == 0) {
    lVar14 = DAT_14cb42830;
  }
  puVar25[0x10] = lVar14;
  local_160 = lVar23 + 0x20;
  local_164 = *(float *)(lVar23 + 0x58) - *(float *)(lVar23 + 0x98);
  local_168 = *(float *)(lVar23 + 0x54) - *(float *)(lVar23 + 0x94);
  local_16c = *(float *)(lVar23 + 0x50) - *(float *)(lVar23 + 0x90);
  *(uint *)(puVar25 + 0x12) =
       -(uint)(0.0 < *(float *)(lVar23 + 0xc0)) & (uint)(1.0 / *(float *)(lVar23 + 0xc0));
  uVar2 = *(undefined8 *)(lVar23 + 0x28);
  uVar6 = *(undefined8 *)(lVar23 + 0x30);
  uVar7 = *(undefined8 *)(lVar23 + 0x38);
  uVar8 = *(undefined8 *)(lVar23 + 0x40);
  uVar9 = *(undefined8 *)(lVar23 + 0x48);
  uVar12 = *(undefined4 *)(lVar23 + 0x50);
  uVar3 = *(undefined4 *)(lVar23 + 0x54);
  uVar4 = *(undefined4 *)(lVar23 + 0x58);
  uVar5 = *(undefined4 *)(lVar23 + 0x5c);
  puVar25[0x14] = *(undefined8 *)(lVar23 + 0x20);
  puVar25[0x15] = uVar2;
  puVar25[0x16] = uVar6;
  puVar25[0x17] = uVar7;
  puVar25[0x18] = uVar8;
  puVar25[0x19] = uVar9;
  *(undefined4 *)(puVar25 + 0x1a) = uVar12;
  *(undefined4 *)((longlong)puVar25 + 0xd4) = uVar3;
  *(undefined4 *)(puVar25 + 0x1b) = uVar4;
  *(undefined4 *)((longlong)puVar25 + 0xdc) = uVar5;
  if ((((((1e-08 < ABS(*(float *)(lVar23 + 0x20))) || (1e-08 < ABS(*(float *)(lVar23 + 0x24)))) ||
        (1e-08 < ABS(*(float *)(lVar23 + 0x28)))) ||
       ((1e-08 < ABS(*(float *)(lVar23 + 0x30)) || (1e-08 < ABS(*(float *)(lVar23 + 0x34)))))) ||
      (1e-08 < ABS(*(float *)(lVar23 + 0x38)))) ||
     (((1e-08 < ABS(*(float *)(lVar23 + 0x40)) || (1e-08 < ABS(*(float *)(lVar23 + 0x44)))) ||
      (1e-08 < ABS(*(float *)(lVar23 + 0x48)))))) {
    FUN_144906c86(&local_138);
  }
  else {
    local_108 = _DAT_14c846280;
    uStack_100 = _DAT_14c846288;
    local_118 = _DAT_14c846270;
    uStack_110 = _DAT_14c846278;
    local_128 = _DAT_14c846260;
    uStack_120 = _DAT_14c846268;
    local_138 = _DAT_14c846250;
    uStack_130 = DAT_14c846258;
  }
  *(undefined4 *)(puVar25 + 0x1c) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar25 + 0xe4) = (undefined4)local_128;
  *(undefined4 *)(puVar25 + 0x1d) = (undefined4)local_118;
  *(undefined4 *)((longlong)puVar25 + 0xec) = (undefined4)local_108;
  *(undefined4 *)(puVar25 + 0x1e) = local_138._4_4_;
  *(undefined4 *)((longlong)puVar25 + 0xf4) = local_128._4_4_;
  *(undefined4 *)(puVar25 + 0x1f) = local_118._4_4_;
  *(undefined4 *)((longlong)puVar25 + 0xfc) = local_108._4_4_;
  *(undefined4 *)(puVar25 + 0x20) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar25 + 0x104) = (undefined4)uStack_120;
  *(undefined4 *)(puVar25 + 0x21) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)puVar25 + 0x10c) = (undefined4)uStack_100;
  *(undefined4 *)(puVar25 + 0x22) = uStack_130._4_4_;
  *(undefined4 *)((longlong)puVar25 + 0x114) = uStack_120._4_4_;
  *(undefined4 *)(puVar25 + 0x23) = uStack_110._4_4_;
  *(undefined4 *)((longlong)puVar25 + 0x11c) = uStack_100._4_4_;
  uVar2 = *(undefined8 *)(lVar23 + 0xa8);
  puVar25[0x24] = *(undefined8 *)(lVar23 + 0xa0);
  puVar25[0x25] = uVar2;
  uVar2 = *(undefined8 *)(lVar23 + 0x68);
  uVar6 = *(undefined8 *)(lVar23 + 0x70);
  uVar7 = *(undefined8 *)(lVar23 + 0x78);
  uVar8 = *(undefined8 *)(lVar23 + 0x80);
  uVar9 = *(undefined8 *)(lVar23 + 0x88);
  uVar12 = *(undefined4 *)(lVar23 + 0x90);
  uVar3 = *(undefined4 *)(lVar23 + 0x94);
  uVar4 = *(undefined4 *)(lVar23 + 0x98);
  uVar5 = *(undefined4 *)(lVar23 + 0x9c);
  puVar25[0x26] = *(undefined8 *)(lVar23 + 0x60);
  puVar25[0x27] = uVar2;
  puVar25[0x28] = uVar6;
  puVar25[0x29] = uVar7;
  puVar25[0x2a] = uVar8;
  puVar25[0x2b] = uVar9;
  *(undefined4 *)(puVar25 + 0x2c) = uVar12;
  *(undefined4 *)((longlong)puVar25 + 0x164) = uVar3;
  *(undefined4 *)(puVar25 + 0x2d) = uVar4;
  *(undefined4 *)((longlong)puVar25 + 0x16c) = uVar5;
  if (((((1e-08 < ABS(*(float *)(lVar23 + 0x60))) || (1e-08 < ABS(*(float *)(lVar23 + 100)))) ||
       (1e-08 < ABS(*(float *)(lVar23 + 0x68)))) ||
      ((1e-08 < ABS(*(float *)(lVar23 + 0x70)) || (1e-08 < ABS(*(float *)(lVar23 + 0x74)))))) ||
     (((1e-08 < ABS(*(float *)(lVar23 + 0x78)) ||
       ((1e-08 < ABS(*(float *)(lVar23 + 0x80)) || (1e-08 < ABS(*(float *)(lVar23 + 0x84)))))) ||
      (1e-08 < ABS(*(float *)(lVar23 + 0x88)))))) {
    FUN_144906c86(&local_138,(undefined8 *)(lVar23 + 0x60));
  }
  else {
    local_108 = _DAT_14c846280;
    uStack_100 = _DAT_14c846288;
    local_118 = _DAT_14c846270;
    uStack_110 = _DAT_14c846278;
    local_128 = _DAT_14c846260;
    uStack_120 = _DAT_14c846268;
    local_138 = _DAT_14c846250;
    uStack_130 = DAT_14c846258;
  }
  *(undefined4 *)(puVar25 + 0x2e) = (undefined4)local_138;
  *(undefined4 *)((longlong)puVar25 + 0x174) = (undefined4)local_128;
  *(undefined4 *)(puVar25 + 0x2f) = (undefined4)local_118;
  *(undefined4 *)((longlong)puVar25 + 0x17c) = (undefined4)local_108;
  *(undefined4 *)(puVar25 + 0x30) = local_138._4_4_;
  *(undefined4 *)((longlong)puVar25 + 0x184) = local_128._4_4_;
  *(undefined4 *)(puVar25 + 0x31) = local_118._4_4_;
  *(undefined4 *)((longlong)puVar25 + 0x18c) = local_108._4_4_;
  *(undefined4 *)(puVar25 + 0x32) = (undefined4)uStack_130;
  *(undefined4 *)((longlong)puVar25 + 0x194) = (undefined4)uStack_120;
  *(undefined4 *)(puVar25 + 0x33) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)puVar25 + 0x19c) = (undefined4)uStack_100;
  *(undefined4 *)(puVar25 + 0x34) = uStack_130._4_4_;
  *(undefined4 *)((longlong)puVar25 + 0x1a4) = uStack_120._4_4_;
  *(undefined4 *)(puVar25 + 0x35) = uStack_110._4_4_;
  *(undefined4 *)((longlong)puVar25 + 0x1ac) = uStack_100._4_4_;
  uVar2 = *(undefined8 *)(lVar23 + 0xb8);
  puVar25[0x36] = *(undefined8 *)(lVar23 + 0xb0);
  puVar25[0x37] = uVar2;
  *(float *)(puVar25 + 0x38) = local_16c;
  *(float *)((longlong)puVar25 + 0x1c4) = local_168;
  *(float *)(puVar25 + 0x39) = local_164;
  if (*(int *)(param_2[1] + 0x1cc) < 1) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(longlong *)(param_2[1] + 0x1c0);
  }
  if (lVar14 == 0) {
    cVar10 = FUN_144944d16(param_2);
    if (cVar10 == '\0') goto LAB_1402e29a9;
    uVar12 = 0xffffffff;
  }
  else {
    cVar10 = FUN_1471599b5(lVar14);
    cVar11 = FUN_144944d16(param_2);
    if (cVar11 == '\0') goto LAB_1402e29a9;
    uVar12 = 0xffffffff;
    if ((((cVar10 != '\0') && (*(int *)(lVar23 + 0xe8) != 0)) &&
        (*(longlong **)(param_2[1] + 0x10) != (longlong *)0x0)) &&
       ((lVar15 = (**(code **)(**(longlong **)(param_2[1] + 0x10) + 200))(), lVar15 != 0 &&
        (0 < *(int *)(lVar15 + 0xe8))))) {
      puVar21 = (undefined4 *)(lVar15 + 0xd8);
      if (*(undefined4 **)(lVar15 + 0xe0) != (undefined4 *)0x0) {
        puVar21 = *(undefined4 **)(lVar15 + 0xe0);
      }
      uVar12 = *puVar21;
    }
  }
  *(undefined4 *)((longlong)puVar25 + 0x1cc) = uVar12;
LAB_1402e29a9:
  lVar15 = FUN_1401ab454();
  lVar16 = FUN_1401d6c66();
  lVar17 = (longlong)*(int *)(param_2[6] + 0x40);
  if (lVar17 != 0) {
    plVar20 = *(longlong **)(param_2[6] + 0x38);
    lVar26 = 0;
    do {
      if (*(longlong *)((longlong)plVar20 + lVar26) == lVar15) {
        lVar26 = (ulonglong)*(ushort *)((longlong)plVar20 + lVar26 + 8) + param_2[7];
        plVar18 = plVar20 + lVar17 * 2;
        lVar17 = param_2[7];
        goto LAB_1402e29ee;
      }
      lVar26 = lVar26 + 0x10;
    } while (lVar17 * 0x10 != lVar26);
  }
  FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraDataInterface.cpp",0x1f6,
                L"Failed to find Included Parameter Struct \'%s\' in parameters",
                *(undefined8 *)(lVar15 + 0x10));
  lVar26 = param_2[7];
  lVar17 = (longlong)*(int *)(param_2[6] + 0x40);
  if (lVar17 != 0) {
    plVar20 = *(longlong **)(param_2[6] + 0x38);
    plVar18 = plVar20 + lVar17 * 2;
    lVar17 = lVar26;
LAB_1402e29ee:
    do {
      if (*plVar20 == lVar16) {
        uVar19 = (ulonglong)*(ushort *)(plVar20 + 1);
        goto LAB_1402e29fb;
      }
      plVar20 = plVar20 + 2;
    } while (plVar20 != plVar18);
  }
  FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraDataInterface.cpp",0x1f6,
                L"Failed to find Included Parameter Struct \'%s\' in parameters",
                *(undefined8 *)(lVar16 + 0x10));
  lVar17 = param_2[7];
  uVar19 = 0;
LAB_1402e29fb:
  cVar10 = FUN_144944d68(param_2,lVar26,*(undefined4 *)(lVar15 + 0x3c));
  if ((cVar10 != '\0') ||
     (cVar10 = FUN_144944d68(param_2,lVar17 + uVar19,*(undefined4 *)(lVar16 + 0x3c)), cVar10 != '\0'
     )) {
    FUN_1471599e3(*param_2,lVar26,lVar14);
    FUN_147159afa(*param_2,lVar17 + uVar19,lVar14);
  }
  local_138 = CONCAT44(*(float *)(lVar23 + 200) - *(float *)(lVar23 + 0xd4),
                       *(float *)(lVar23 + 0xc4) - *(float *)(lVar23 + 0xd0));
  uStack_130 = CONCAT44(*(float *)(lVar23 + 0xc4) + *(float *)(lVar23 + 0xd0),
                        *(float *)(lVar23 + 0xcc) - *(float *)(lVar23 + 0xd8));
  local_128 = CONCAT44(*(float *)(lVar23 + 0xcc) + *(float *)(lVar23 + 0xd8),
                       *(float *)(lVar23 + 200) + *(float *)(lVar23 + 0xd4));
  uStack_120 = CONCAT71(uStack_120._1_7_,1);
  FUN_1402e2fde(&local_138,&local_154,local_160);
  *(undefined4 *)(puVar25 + 0x3b) = *(undefined4 *)(lVar23 + 0xcc);
  puVar25[0x3a] = *(undefined8 *)(lVar23 + 0xc4);
  puVar25[0x3c] = *(undefined8 *)(lVar23 + 0xd0);
  *(undefined4 *)(puVar25 + 0x3d) = *(undefined4 *)(lVar23 + 0xd8);
  *(float *)(puVar25 + 0x3e) = (local_154 + local_148) * 0.5;
  *(float *)((longlong)puVar25 + 500) = (local_150 + local_144) * 0.5;
  *(float *)(puVar25 + 0x3f) = (local_14c + local_140) * 0.5;
  *(float *)(puVar25 + 0x40) = (local_148 - local_154) * 0.5;
  *(float *)((longlong)puVar25 + 0x204) = (local_144 - local_150) * 0.5;
  *(float *)(puVar25 + 0x41) = (local_140 - local_14c) * 0.5;
  puVar25[0x42] = *(undefined8 *)(lVar23 + 0xdc);
  *(undefined4 *)(puVar25 + 0x43) = *(undefined4 *)(lVar23 + 0xe4);
  uVar2 = *(undefined8 *)(*(longlong *)(param_2[2] + 0x18) + 0x14);
  *(undefined4 *)(puVar25 + 0x45) = *(undefined4 *)(*(longlong *)(param_2[2] + 0x18) + 0x1c);
  puVar25[0x44] = uVar2;
  if (*(longlong *)(lVar23 + 0x1b0) == 0) {
    puVar25[0x46] = DAT_14cb428b0;
    *(undefined4 *)(puVar25 + 0x47) = 0;
    uVar12 = 0;
  }
  else {
    lVar14 = *(longlong *)(*(longlong *)(lVar23 + 0x1b0) + 0x38);
    if (lVar14 == 0) {
      puVar25[0x46] = 0;
    }
    else {
      LOCK();
      *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
      UNLOCK();
      puVar25[0x46] = lVar14;
      LOCK();
      puVar1 = (uint *)(lVar14 + 8);
      uVar24 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar24 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar14 = *(longlong *)(*(longlong *)(lVar23 + 0x1b0) + 0x30);
    if (lVar14 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined4 *)(lVar14 + 0x20);
    }
    *(undefined4 *)(puVar25 + 0x47) = uVar12;
    uVar12 = *(undefined4 *)(lVar23 + 0x1b8);
  }
  *(undefined4 *)((longlong)puVar25 + 0x23c) = uVar12;
  if ((local_f0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e2fde FUN_1402e2fde body=222 status=ok
// SIG undefined FUN_1402e2fde(void)

void FUN_1402e2fde(ulonglong *param_1,undefined8 *param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  float fVar5;
  float fVar6;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if ((char)param_1[3] == '\0') {
    *(undefined8 *)((longlong)param_2 + 9) = 0;
    *(undefined8 *)((longlong)param_2 + 0x11) = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *param_1;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)((longlong)param_1 + 0xc);
    auVar15 = insertps(auVar14,(int)param_1[1],0x28);
    auVar4 = insertps(auVar3,*(undefined4 *)((longlong)param_1 + 0x14),0x28);
    fVar7 = (auVar15._0_4_ + auVar4._0_4_) * 0.5;
    fVar9 = (auVar15._4_4_ + auVar4._4_4_) * 0.5;
    fVar11 = (auVar15._8_4_ + auVar4._8_4_) * 0.5;
    fVar2 = (auVar4._0_4_ - auVar15._0_4_) * 0.5;
    fVar5 = (auVar4._4_4_ - auVar15._4_4_) * 0.5;
    fVar6 = (auVar4._8_4_ - auVar15._8_4_) * 0.5;
    fVar8 = fVar11 * param_3[8] + fVar9 * param_3[4] + fVar7 * *param_3 + param_3[0xc];
    fVar10 = fVar11 * param_3[9] + fVar9 * param_3[5] + fVar7 * param_3[1] + param_3[0xd];
    fVar12 = fVar11 * param_3[10] + fVar9 * param_3[6] + fVar7 * param_3[2] + param_3[0xe];
    fVar13 = fVar11 * param_3[0xb] + fVar9 * param_3[7] + fVar7 * param_3[3] + param_3[0xf];
    fVar7 = ABS(fVar6 * param_3[8]) + ABS(fVar5 * param_3[4]) + ABS(fVar2 * *param_3);
    fVar9 = ABS(fVar6 * param_3[9]) + ABS(fVar5 * param_3[5]) + ABS(fVar2 * param_3[1]);
    fVar11 = ABS(fVar6 * param_3[10]) + ABS(fVar5 * param_3[6]) + ABS(fVar2 * param_3[2]);
    fVar2 = ABS(fVar6 * param_3[0xb]) + ABS(fVar5 * param_3[7]) + ABS(fVar2 * param_3[3]);
    fVar5 = fVar8 - fVar7;
    fVar6 = fVar10 - fVar9;
    auVar15._0_8_ = CONCAT44(fVar9 + fVar10,fVar7 + fVar8);
    auVar15._8_4_ = fVar11 + fVar12;
    auVar15._12_4_ = fVar2 + fVar13;
    *param_2 = CONCAT44(fVar6,fVar5);
    auVar4._4_4_ = fVar6;
    auVar4._0_4_ = fVar5;
    auVar4._8_4_ = fVar12 - fVar11;
    auVar4._12_4_ = fVar13 - fVar2;
    uVar1 = extractps(auVar4,2);
    param_2[1] = uVar1;
    *(undefined8 *)((longlong)param_2 + 0xc) = auVar15._0_8_;
    uVar1 = extractps(auVar15,2);
    *(undefined8 *)((longlong)param_2 + 0x14) = uVar1;
    *(undefined1 *)(param_2 + 3) = 1;
  }
  return;
}



// FUNCTION 1402e30bc FUN_1402e30bc body=258 status=ok
// SIG undefined FUN_1402e30bc(void)

void FUN_1402e30bc(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb39148) {
    FUN_144b3d300(&DAT_14cb39148);
    if (DAT_14cb39148 == -1) {
      FUN_1402e31c0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x240;
      local_58 = 0x39;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb390c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143927bf1);
      _Init_thread_footer(&DAT_14cb39148);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402e31c0 FUN_1402e31c0 body=226 status=ok
// SIG undefined FUN_1402e31c0(void)

longlong * FUN_1402e31c0(longlong *param_1)

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
  pcVar13 = FUN_14646abcc;
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



// FUNCTION 1402e32a3 FUN_1402e32a3 body=176 status=ok
// SIG undefined FUN_1402e32a3(void)

void FUN_1402e32a3(void)

{
  FUN_1402e3353();
  return;
}



// FUNCTION 1402e3353 FUN_1402e3353 body=2233 status=ok
// SIG undefined FUN_1402e3353(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e3353(undefined1 (*param_1) [16],double *param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  double *local_1c0;
  double *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 uStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double local_d8;
  double dStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  dVar3 = *(double *)param_1[2];
  uVar4 = *(undefined8 *)(param_1[2] + 8);
  dVar27 = *(double *)(param_1[2] + 8);
  dVar21 = *(double *)param_1[3];
  dVar5 = param_2[4];
  dVar6 = param_2[5];
  dVar1 = param_2[5];
  dVar7 = param_2[6];
  dVar8 = param_2[7];
  dVar2 = *(double *)(param_3 + 0x20);
  dVar10 = *(double *)(param_3 + 0x28);
  dVar16 = *(double *)(param_3 + 0x30);
  local_198 = param_9;
  uStack_190 = param_10;
  local_1a0 = param_8;
  local_1b0 = param_6;
  uStack_1a8 = param_7;
  local_1b8 = &local_f8;
  local_1c0 = &local_d8;
  local_1c8 = param_5;
  local_138 = dVar5;
  dStack_130 = dVar6;
  local_128 = dVar7;
  local_118 = dVar3;
  uStack_110 = uVar4;
  local_108 = dVar21;
  FUN_1402e3c0d();
  auVar29 = _DAT_149934d80;
  dVar9 = dVar7 - dVar21;
  dVar1 = dVar1 - dVar27;
  dVar22 = dVar5 - dVar3;
  dVar15 = dVar9 * dVar9 + dVar22 * dVar22 + dVar1 * dVar1;
  if (((dVar15 != 1.0) || (dVar23 = dVar22, dVar25 = dVar9, dVar11 = dVar1, NAN(dVar15))) &&
     (dVar23 = DAT_14c8464e0, dVar25 = DAT_14c8464f0, dVar11 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar15)) {
    dVar15 = 1.0 / SQRT(dVar15);
    dVar23 = dVar22 * dVar15;
    dVar25 = dVar9 * dVar15;
    dVar11 = dVar1 * dVar15;
  }
  dVar9 = local_c8 - dVar21;
  dVar27 = dStack_d0 - dVar27;
  dVar1 = local_d8 - dVar3;
  dVar15 = dVar9 * dVar9 + dVar1 * dVar1 + dVar27 * dVar27;
  local_178 = local_c8;
  uStack_170 = 0;
  local_180 = local_d8;
  local_188 = dStack_d0;
  if (((dVar15 != 1.0) || (dVar26 = dVar9, dVar28 = dVar27, dVar22 = dVar1, NAN(dVar15))) &&
     (dVar26 = DAT_14c8464f0, dVar28 = DAT_14c8464e8, dVar22 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar15)) {
    dVar15 = 1.0 / SQRT(dVar15);
    dVar26 = dVar9 * dVar15;
    dVar28 = dVar27 * dVar15;
    dVar22 = dVar1 * dVar15;
  }
  dVar27 = dVar25 * dVar26 + dVar23 * dVar22 + dVar11 * dVar28 + 1.0;
  if (dVar27 < 9.999999974752427e-07) {
    if ((ABS(dVar23) <= ABS(dVar11)) || (ABS(dVar23) <= ABS(dVar25))) {
      dVar27 = 0.0;
      dVar26 = -DAT_14c8463b0;
      dVar28 = -DAT_14c8463a8;
      dVar22 = -DAT_14c8463a0;
    }
    else {
      dVar27 = 0.0;
      dVar26 = DAT_14c846398;
      dVar28 = DAT_14c846390;
      dVar22 = DAT_14c846388;
    }
  }
  dVar24 = dVar23 * dVar28 - dVar22 * dVar11;
  dVar9 = dVar25 * dVar22 - dVar26 * dVar23;
  dVar1 = dVar11 * dVar26 - dVar28 * dVar25;
  dVar15 = dVar24 * dVar24 + dVar1 * dVar1;
  dVar22 = dVar27 * dVar27 + dVar9 * dVar9;
  auVar17._0_8_ = dVar15 + dVar22;
  auVar17._8_8_ = dVar15 + dVar22;
  auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
  auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
  auVar18 = sqrtpd(auVar17,auVar17);
  auVar18 = divpd(_DAT_149934d80,auVar18);
  auVar31._0_8_ = auVar18._0_8_ * dVar24;
  auVar31._8_8_ = auVar18._8_8_ * dVar27;
  dVar1 = (double)((ulonglong)(dVar1 * auVar18._0_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_));
  dVar9 = (double)((ulonglong)(dVar9 * auVar18._8_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_));
  auVar18 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar12);
  dVar15 = *(double *)*param_1;
  dVar22 = *(double *)(*param_1 + 8);
  dVar11 = *(double *)param_1[1];
  dVar23 = *(double *)(param_1[1] + 8);
  dVar26 = auVar18._8_8_;
  auVar32._8_4_ = SUB84(dVar1,0);
  auVar32._0_8_ = dVar1;
  auVar32._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  dVar25 = auVar18._0_8_;
  dVar27 = dVar15 * dVar25 * 1.0 + dVar23 * dVar9 + dVar11 * auVar32._8_8_ * -1.0 + dVar22 * dVar26;
  auVar18._8_4_ = SUB84(dVar27,0);
  auVar18._0_8_ = dVar22 * dVar25 * -1.0 + dVar11 * dVar9 + dVar23 * dVar1 * 1.0 + dVar15 * dVar26;
  auVar18._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  *param_1 = auVar18;
  *(double *)param_1[1] =
       dVar23 * dVar25 * 1.0 + ((dVar1 * dVar22 * 1.0 + dVar26 * dVar11) - dVar15 * dVar9);
  *(double *)(param_1[1] + 8) =
       dVar11 * dVar25 * -1.0 + ((auVar32._8_8_ * dVar15 * -1.0 + dVar26 * dVar23) - dVar22 * dVar9)
  ;
  *(double *)param_1[2] = dVar3;
  *(undefined8 *)(param_1[2] + 8) = uVar4;
  *(double *)param_1[3] = dVar21;
  *(undefined8 *)(param_1[3] + 8) = 0;
  dVar16 = dVar16 - dVar7;
  dVar2 = dVar2 - dVar5;
  dVar10 = dVar10 - dVar6;
  dVar27 = dVar16 * dVar16 + dVar2 * dVar2 + dVar10 * dVar10;
  if (((dVar27 != 1.0) || (dVar1 = dVar16, dVar21 = dVar2, dVar9 = dVar10, NAN(dVar27))) &&
     (dVar1 = DAT_14c8464f0, dVar21 = DAT_14c8464e0, dVar9 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar27)) {
    dVar27 = 1.0 / SQRT(dVar27);
    dVar1 = dVar16 * dVar27;
    dVar21 = dVar2 * dVar27;
    dVar9 = dVar10 * dVar27;
  }
  dVar10 = local_e8 - local_c8;
  dVar27 = dStack_f0 - dStack_d0;
  dVar2 = local_f8 - local_d8;
  dVar16 = dVar10 * dVar10 + dVar2 * dVar2 + dVar27 * dVar27;
  if (((dVar16 != 1.0) || (dVar11 = dVar10, dVar15 = dVar27, dVar22 = dVar2, NAN(dVar16))) &&
     (dVar11 = DAT_14c8464f0, dVar15 = DAT_14c8464e8, dVar22 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar16)) {
    dVar16 = 1.0 / SQRT(dVar16);
    dVar11 = dVar10 * dVar16;
    dVar15 = dVar27 * dVar16;
    dVar22 = dVar2 * dVar16;
  }
  dVar27 = dVar1 * dVar11 + dVar21 * dVar22 + dVar9 * dVar15 + 1.0;
  if (dVar27 < 9.999999974752427e-07) {
    if ((ABS(dVar21) <= ABS(dVar9)) || (ABS(dVar21) <= ABS(dVar1))) {
      dVar27 = 0.0;
      dVar11 = -DAT_14c8463b0;
      dVar15 = -DAT_14c8463a8;
      dVar22 = -DAT_14c8463a0;
    }
    else {
      dVar27 = 0.0;
      dVar11 = DAT_14c846398;
      dVar15 = DAT_14c846390;
      dVar22 = DAT_14c846388;
    }
  }
  dVar2 = dVar21 * dVar15 - dVar22 * dVar9;
  dVar10 = dVar1 * dVar22 - dVar11 * dVar21;
  dVar1 = dVar9 * dVar11 - dVar15 * dVar1;
  auVar13._0_8_ = dVar1 * dVar1;
  auVar13._8_8_ = dVar10 * dVar10;
  dVar16 = dVar2 * dVar2 + auVar13._0_8_;
  dVar21 = dVar27 * dVar27 + auVar13._8_8_;
  auVar19._0_8_ = dVar16 + dVar21;
  auVar19._8_8_ = dVar16 + dVar21;
  auVar18 = sqrtpd(auVar13,auVar19);
  auVar29 = divpd(auVar29,auVar18);
  auVar30._0_8_ = auVar29._0_8_ * dVar2;
  auVar30._8_8_ = auVar29._8_8_ * dVar27;
  dVar1 = (double)((ulonglong)(dVar1 * auVar29._0_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
  dVar2 = (double)((ulonglong)(dVar10 * auVar29._8_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
  auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
  auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
  auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar14);
  dVar10 = *param_2;
  dVar16 = param_2[1];
  dVar21 = param_2[2];
  dVar9 = param_2[3];
  dVar15 = auVar29._0_8_;
  dVar22 = auVar29._8_8_;
  auVar20._8_4_ = SUB84(dVar2,0);
  auVar20._0_8_ = dVar2;
  auVar20._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  dVar27 = dVar21 * dVar15 * -1.0 +
           ((dVar1 * dVar10 * -1.0 + dVar22 * dVar9) - dVar16 * auVar20._8_8_);
  *param_2 = dVar16 * dVar15 * -1.0 + dVar21 * dVar2 + dVar9 * dVar1 * 1.0 + dVar10 * dVar22;
  param_2[1] = dVar10 * dVar15 * 1.0 +
               dVar9 * auVar20._8_8_ + dVar21 * dVar1 * -1.0 + dVar16 * dVar22;
  auVar29._8_4_ = SUB84(dVar27,0);
  auVar29._0_8_ = dVar9 * dVar15 * 1.0 + ((dVar1 * dVar16 * 1.0 + dVar22 * dVar21) - dVar10 * dVar2)
  ;
  auVar29._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 2) = auVar29;
  param_2[4] = local_d8;
  param_2[5] = dStack_d0;
  param_2[6] = local_c8;
  param_2[7] = 0.0;
  *(double *)(param_3 + 0x20) = local_f8;
  *(double *)(param_3 + 0x28) = dStack_f0;
  *(double *)(param_3 + 0x30) = local_e8;
  *(undefined8 *)(param_3 + 0x38) = 0;
  if ((local_c0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
    local_168 = dVar7;
    dStack_160 = dVar8;
    local_158 = dVar5;
    dStack_150 = dVar6;
    local_148 = dVar3;
    uStack_140 = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e3c0d FUN_1402e3c0d body=1684 status=ok
// SIG undefined FUN_1402e3c0d(void)

void FUN_1402e3c0d(double *param_1,double *param_2,undefined8 param_3,double *param_4,
                  double *param_5,double *param_6,double *param_7,double param_8,double param_9,
                  char param_10,double param_11,double param_12)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_148 [32];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double dStack_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  dVar2 = *param_5;
  local_120 = param_5[1];
  local_128 = param_5[2];
  dVar8 = local_128 - param_1[2];
  dVar7 = local_120 - param_1[1];
  dVar5 = dVar2 - *param_1;
  dVar6 = dVar8 * dVar8 + dVar5 * dVar5 + dVar7 * dVar7;
  dVar1 = SQRT(dVar6);
  if (dVar1 < 0.0001) {
    local_e8 = 1.0;
    local_e0 = 0.0;
    dStack_d8 = 0.0;
    dVar1 = 0.0001;
  }
  else if (((dVar6 != 1.0) || (local_e8 = dVar5, local_e0 = dVar7, dStack_d8 = dVar8, NAN(dVar6)))
          && (local_e8 = DAT_14c8464e0, local_e0 = DAT_14c8464e8, dStack_d8 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar6)) {
    local_e8 = 1.0 / dVar1;
    dStack_d8 = dVar8 * local_e8;
    local_e0 = dVar7 * local_e8;
    local_e8 = dVar5 * local_e8;
  }
  dVar7 = param_4[2] - param_1[2];
  dVar5 = param_4[1] - param_1[1];
  dVar6 = *param_4 - *param_1;
  if (dVar7 * dVar7 + dVar6 * dVar6 + dVar5 * dVar5 < 1e-08) {
    local_118 = 0.0;
    local_110 = 1.0;
    local_108 = 0.0;
  }
  else {
    local_f0 = local_e8 * dVar5 - dVar6 * local_e0;
    local_f8 = dStack_d8 * dVar6 - dVar7 * local_e8;
    local_100 = local_e0 * dVar7 - dVar5 * dStack_d8;
    if (local_f0 * local_f0 + local_100 * local_100 + local_f8 * local_f8 < 1e-08) {
      FUN_1467fc32a(&local_e8,&local_100,&local_118);
    }
    else {
      dVar8 = dVar7 * dStack_d8 + dVar6 * local_e8 + local_e0 * dVar5;
      local_108 = dVar7 - dStack_d8 * dVar8;
      local_110 = dVar5 - local_e0 * dVar8;
      local_118 = dVar6 - dVar8 * local_e8;
      dVar7 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
      if (9.99999993922529e-09 < dVar7) {
        dVar7 = 1.0 / SQRT(dVar7);
        local_118 = local_118 * dVar7;
        local_110 = local_110 * dVar7;
        local_108 = local_108 * dVar7;
      }
    }
  }
  dVar7 = param_8 + param_9;
  if (((param_10 != '\0') && (0.0001 < dVar7)) && (0.0001 < param_12 - param_11)) {
    dVar5 = (dVar1 / dVar7 - param_11) / (param_12 - param_11);
    if (1.0 <= dVar5) {
      dVar5 = 1.0;
    }
    if (dVar5 <= 0.0) {
      dVar5 = 0.0;
    }
    dVar5 = dVar5 * (param_12 + -1.0);
    dVar6 = dVar5 + 1.0;
    dVar7 = (double)(~-(ulonglong)(0.0001 < dVar5) & (ulonglong)dVar7 |
                    (ulonglong)(dVar7 * dVar6) & -(ulonglong)(0.0001 < dVar5));
    if (0.0001 < dVar5) {
      param_9 = param_9 * dVar6;
      param_8 = param_8 * dVar6;
    }
  }
  *param_7 = dVar2;
  param_7[1] = local_120;
  param_7[2] = local_128;
  param_6[2] = param_2[2];
  dVar2 = param_2[1];
  *param_6 = *param_2;
  param_6[1] = dVar2;
  if (dVar7 <= dVar1) {
    dVar2 = param_1[2];
    dVar1 = param_1[1];
    *param_7 = dVar7 * local_e8 + *param_1;
    param_7[1] = dVar7 * local_e0 + dVar1;
    param_7[2] = dVar7 * dStack_d8 + dVar2;
    dVar2 = dStack_d8 * param_8 + param_1[2];
    dVar1 = local_e0 * param_8 + param_1[1];
    dVar7 = param_8 * local_e8 + *param_1;
  }
  else {
    dVar5 = (param_8 + param_8) * dVar1;
    dVar2 = 0.0;
    dVar7 = 0.0;
    if ((dVar5 != 0.0) || (NAN(dVar5))) {
      dVar7 = ((dVar1 * dVar1 + param_8 * param_8) - param_9 * param_9) / dVar5;
    }
    uVar3 = SUB84(dVar7,0);
    uVar4 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (1.0 <= dVar7) {
      uVar3 = 0;
      uVar4 = 0x3ff00000;
    }
    dVar1 = acos((double)(~-(ulonglong)(dVar7 < -1.0) & CONCAT44(uVar4,uVar3) |
                         -(ulonglong)(dVar7 < -1.0) & 0xbff0000000000000));
    dVar5 = sin(dVar1);
    dVar5 = param_8 * dVar5;
    dVar1 = param_8 * param_8 - dVar5 * dVar5;
    if (0.0 < dVar1) {
      if (dVar1 < 0.0) {
        dVar2 = sqrt(dVar1);
      }
      else {
        dVar2 = SQRT(dVar1);
      }
    }
    dVar7 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar2 |
                    (ulonglong)-dVar2 & -(ulonglong)(dVar7 < 0.0));
    dVar2 = local_108 * dVar5 + dStack_d8 * dVar7 + param_1[2];
    dVar1 = local_110 * dVar5 + local_e0 * dVar7 + param_1[1];
    dVar7 = dVar5 * local_118 + dVar7 * local_e8 + *param_1;
  }
  *param_6 = dVar7;
  param_6[1] = dVar1;
  param_6[2] = dVar2;
  if ((local_d0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e42a2 FUN_1402e42a2 body=176 status=ok
// SIG undefined FUN_1402e42a2(void)

void FUN_1402e42a2(longlong param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x28) != '\x01') {
    return;
  }
  LOCK();
  *(int *)(param_2 + 0xb0) = *(int *)(param_2 + 0xb0) + 1;
  UNLOCK();
  pcVar1 = (char *)(param_1 + 0xf3);
  LOCK();
  bVar4 = *(char *)(param_1 + 0xf3) == '\0';
  if (bVar4) {
    *(char *)(param_1 + 0xf3) = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    FUN_1447d2058();
  }
  iVar3 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xac) < iVar3 + 1U) {
    FUN_1402e4352((longlong *)(param_1 + 0xa0),iVar3);
  }
  *(longlong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar3 * 8) = param_2;
  LOCK();
  cVar2 = *pcVar1;
  if (cVar2 == '\x01') {
    *pcVar1 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0(pcVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001402e432e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))();
  return;
}



// FUNCTION 1402e4352 FUN_1402e4352 body=353 status=ok
// SIG undefined FUN_1402e4352(void)

void FUN_1402e4352(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402e43d7;
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
LAB_1402e43d7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1402e44f4 FUN_1402e44f4 body=228 status=ok
// SIG undefined FUN_1402e44f4(void)

longlong FUN_1402e44f4(void)

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
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacb8b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433d5220;
    local_20 = FUN_142b32f24;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478f6107;
    local_40 = &LAB_1417b4627;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x440;
    FUN_14081cfa3(L"/Script/Engine",L"AnimInstance",&DAT_14cacb8b8,FUN_1463a3c7e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb8b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402e45da FUN_1402e45da body=85 status=ok
// SIG undefined FUN_1402e45da(void)

longlong FUN_1402e45da(longlong param_1,int param_2)

{
  FUN_1402e462f(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1402e462f FUN_1402e462f body=29 status=ok
// SIG undefined FUN_1402e462f(void)

void FUN_1402e462f(longlong *param_1,int param_2)

{
  int *piVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      piVar1 = (int *)(*param_1 + 0x24c);
      *piVar1 = *piVar1 + -1;
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1402e464c FUN_1402e464c body=352 status=ok
// SIG undefined FUN_1402e464c(void)

void FUN_1402e464c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong *local_88;
  longlong *local_80;
  double local_78;
  byte local_70;
  longlong local_6c;
  undefined4 local_64;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  char local_37;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x1c0))();
  if ((plVar1 != (longlong *)0x0) && (plVar1[8] != 0)) {
    local_90 = param_2 + 4;
    local_88 = param_2 + 7;
    local_80 = param_2 + 0xb;
    local_60 = (**(code **)(*param_1 + 0x120))(param_1);
    local_6c = param_1[6];
    local_64 = (undefined4)param_1[7];
    local_78 = (double)*(float *)((longlong)param_1 + 0x2c);
    local_70 = *(byte *)(*param_2 + 0x7e1) >> 1 & 1;
    local_37 = '\0';
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*plVar1 + 0x328))(plVar1,&local_90,&local_78);
    if (local_37 == '\x01') {
      local_37 = '\0';
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
  }
  if ((char)param_2[0x13] == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    FUN_1448859f0(param_2 + 4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8,param_2[6]);
}



// FUNCTION 1402e47da FUN_1402e47da body=713 status=ok
// SIG undefined FUN_1402e47da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e47da(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  longlong local_c8;
  float local_c0;
  float local_bc;
  undefined1 *local_b8;
  longlong local_b0;
  float local_a8;
  float local_a4;
  undefined1 *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar8 = *(double *)(param_2 + 0x20);
  dVar9 = *(double *)(param_2 + 0x28);
  dVar11 = *(double *)(param_2 + 0x30);
  dVar14 = *(double *)(param_2 + 0x50);
  dVar17 = *(double *)(param_2 + 0x48) * dVar14 + dVar11;
  dVar18 = *(double *)(param_2 + 0x40) * dVar14 + dVar9;
  dVar13 = dVar14 * *(double *)(param_2 + 0x38) + dVar8;
  dVar14 = dVar11;
  if (dVar17 <= dVar11) {
    dVar14 = dVar17;
  }
  dVar2 = dVar9;
  if (dVar18 <= dVar9) {
    dVar2 = dVar18;
  }
  dVar3 = dVar8;
  if (dVar13 <= dVar8) {
    dVar3 = dVar13;
  }
  if (dVar11 <= dVar17) {
    dVar11 = dVar17;
  }
  if (dVar9 <= dVar18) {
    dVar9 = dVar18;
  }
  if (dVar8 <= dVar13) {
    dVar8 = dVar13;
  }
  dVar8 = (dVar8 + dVar1) - (dVar3 - dVar1);
  dVar11 = (dVar11 + dVar1) - (dVar14 - dVar1);
  dVar9 = (dVar9 + dVar1) - (dVar2 - dVar1);
  if ((dVar8 <= dVar11 || dVar8 <= dVar9) && (dVar8 = dVar9, dVar9 <= dVar11)) {
    dVar8 = dVar11;
  }
  dVar9 = *(double *)(param_1 + 0x10);
  dVar11 = (dVar9 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar9);
  dVar14 = (dVar9 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar9);
  dVar18 = (dVar9 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar9);
  if ((dVar11 <= dVar18 || dVar11 <= dVar14) && (dVar11 = dVar18, dVar18 <= dVar14)) {
    dVar11 = dVar14;
  }
  local_a8 = (float)dVar1;
  local_a0 = &LAB_144a386e2;
  local_c0 = (float)dVar9;
  local_b8 = &LAB_144a386ca;
  fVar4 = (float)param_3[2];
  fVar6 = (float)param_3[3];
  fVar10 = (float)*param_3;
  fVar12 = (float)param_3[1];
  local_88._0_4_ = (float)param_3[4];
  local_88._4_4_ = (float)param_3[5];
  local_88._8_4_ = (float)param_3[6];
  local_88._12_4_ = 0;
  fVar5 = fVar10 * fVar10 + fVar12 * fVar12;
  fVar7 = fVar4 * fVar4 + fVar6 * fVar6;
  auVar15._0_4_ = fVar7 + fVar5;
  auVar15._4_4_ = fVar7 + fVar5;
  auVar15._8_4_ = fVar5 + fVar7;
  auVar15._12_4_ = fVar5 + fVar7;
  auVar16 = sqrtps(auVar15,auVar15);
  auVar16 = divps(_DAT_1499314a0,auVar16);
  auVar19._0_4_ = auVar16._0_4_ * fVar10;
  auVar19._4_4_ = auVar16._4_4_ * fVar12;
  auVar19._8_4_ = auVar16._8_4_ * fVar4;
  auVar19._12_4_ = auVar16._12_4_ * fVar6;
  auVar16._4_4_ = -(uint)(1e-08 <= auVar15._4_4_);
  auVar16._0_4_ = -(uint)(1e-08 <= auVar15._0_4_);
  auVar16._8_4_ = -(uint)(1e-08 <= auVar15._8_4_);
  auVar16._12_4_ = -(uint)(1e-08 <= auVar15._12_4_);
  local_78 = blendvps(_DAT_149932320,auVar19,auVar16);
  local_e8 = local_78;
  if (dVar11 <= dVar8) {
    dVar11 = dVar8;
  }
  local_d8 = local_98;
  local_98._4_4_ = (float)param_5[1];
  local_98._0_4_ = (float)*param_5;
  local_98._8_4_ = (float)param_5[2];
  local_98._12_4_ = 0;
  local_e0 = param_4;
  local_c8 = param_1;
  local_bc = local_c0;
  local_b0 = param_2;
  local_a4 = local_a8;
  FUN_144946907(&local_c8,&local_b0,dVar11);
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e4aa4 FUN_1402e4aa4 body=2054 status=ok
// SIG undefined FUN_1402e4aa4(void)

void FUN_1402e4aa4(longlong param_1,double *param_2,int param_3,double param_4,double *param_5)

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
  char cVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  double dVar32;
  float fVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  
  if ((param_4 == 0.0) && (!NAN(param_4))) {
    lVar11 = *(longlong *)(param_1 + 0x30);
    lVar21 = (longlong)param_3;
    dVar12 = (double)*(float *)(lVar11 + 8 + lVar21 * 0xc);
    fVar30 = *(float *)(lVar11 + 4 + lVar21 * 0xc);
    *param_2 = (double)*(float *)(lVar11 + lVar21 * 0xc);
    param_2[1] = (double)fVar30;
    goto LAB_1402e4b46;
  }
  lVar11 = *(longlong *)(param_1 + 0x58);
  if (lVar11 == 0) {
LAB_1402e5248:
    lVar11 = *(longlong *)(param_1 + 0x30);
    lVar21 = (longlong)param_3;
    dVar12 = (double)*(float *)(lVar11 + 8 + lVar21 * 0xc);
    dVar38 = (double)*(float *)(lVar11 + 4 + lVar21 * 0xc);
    dVar27 = (double)*(float *)(lVar11 + lVar21 * 0xc);
  }
  else {
    cVar10 = *(char *)(param_1 + 0x60);
    if (cVar10 == '\x01') {
      lVar11 = *(longlong *)(lVar11 + 0x40);
      lVar21 = (longlong)param_3;
      uVar20 = (uint)*(byte *)(lVar11 + lVar21 * 4);
      uVar23 = (uint)*(byte *)(lVar11 + 1 + lVar21 * 4);
      uVar25 = (uint)*(byte *)(lVar11 + 2 + lVar21 * 4);
      uVar24 = (uint)*(byte *)(lVar11 + 3 + lVar21 * 4);
    }
    else if (cVar10 == '\x02') {
      lVar11 = *(longlong *)(lVar11 + 0x40);
      lVar21 = (longlong)param_3;
      uVar20 = (uint)*(short *)(lVar11 + lVar21 * 8);
      uVar23 = (uint)*(short *)(lVar11 + 2 + lVar21 * 8);
      uVar25 = (uint)*(short *)(lVar11 + 4 + lVar21 * 8);
      uVar24 = (uint)*(short *)(lVar11 + 6 + lVar21 * 8);
    }
    else {
      if (cVar10 != '\x03') goto LAB_1402e5248;
      lVar11 = *(longlong *)(lVar11 + 0x40);
      lVar21 = (longlong)param_3 * 0x10;
      uVar20 = *(uint *)(lVar11 + lVar21);
      uVar23 = *(uint *)(lVar11 + 4 + lVar21);
      uVar25 = *(uint *)(lVar11 + 8 + lVar21);
      uVar24 = *(uint *)(lVar11 + 0xc + lVar21);
    }
    lVar11 = *(longlong *)(param_1 + 0x30);
    lVar21 = (longlong)param_3;
    fVar30 = *(float *)(lVar11 + 8 + lVar21 * 0xc);
    fVar28 = *(float *)(lVar11 + lVar21 * 0xc);
    fVar26 = *(float *)(lVar11 + 4 + lVar21 * 0xc);
    if (2 < (int)uVar24) {
      lVar11 = *(longlong *)(param_1 + 0x20);
      lVar21 = (longlong)(int)uVar23;
      fVar1 = *(float *)(lVar11 + 0x14 + lVar21 * 0x18);
      fVar2 = *(float *)(lVar11 + 0xc + lVar21 * 0x18);
      fVar3 = *(float *)(lVar11 + 0x10 + lVar21 * 0x18);
      lVar21 = (longlong)(int)uVar20;
      fVar4 = *(float *)(lVar11 + 0x14 + lVar21 * 0x18);
      fVar5 = *(float *)(lVar11 + 0xc + lVar21 * 0x18);
      fVar6 = *(float *)(lVar11 + 0x10 + lVar21 * 0x18);
      lVar21 = (longlong)(int)uVar25;
      dVar34 = (double)fVar1;
      dVar12 = (double)fVar3;
      dVar36 = (double)fVar2;
      dVar39 = (double)fVar4;
      dVar18 = (double)fVar6;
      dVar16 = (double)fVar5;
      dVar27 = dVar16 * dVar12 - dVar36 * dVar18;
      dVar17 = dVar39 * dVar36 - dVar34 * dVar16;
      dVar37 = dVar18 * dVar34 - dVar12 * dVar39;
      fVar7 = *(float *)(lVar11 + 0x10 + lVar21 * 0x18);
      dVar29 = (double)fVar7;
      fVar8 = *(float *)(lVar11 + 0xc + lVar21 * 0x18);
      dVar19 = (double)fVar8;
      fVar9 = *(float *)(lVar11 + 0x14 + lVar21 * 0x18);
      dVar35 = (double)fVar9;
      dVar38 = dVar27 * dVar35 + dVar37 * dVar19 + dVar17 * dVar29;
      if (1e-06 <= dVar38 * dVar38) {
        fVar33 = (float)param_4;
        dVar14 = (double)fVar28;
        dVar31 = (double)fVar26;
        dVar15 = (double)fVar30;
        dVar32 = (dVar15 - (double)(fVar4 * fVar33)) * dVar39 +
                 (dVar14 - (double)(fVar5 * fVar33)) * dVar16 +
                 (dVar31 - (double)(fVar6 * fVar33)) * dVar18;
        dVar13 = (dVar15 - (double)(fVar1 * fVar33)) * dVar34 +
                 (dVar14 - (double)(fVar2 * fVar33)) * dVar36 +
                 (dVar31 - (double)(fVar3 * fVar33)) * dVar12;
        dVar14 = (dVar15 - (double)(fVar9 * fVar33)) * dVar35 +
                 (dVar14 - (double)(fVar8 * fVar33)) * dVar19 +
                 (dVar31 - (double)(fVar7 * fVar33)) * dVar29;
        dVar27 = (dVar14 * dVar27 +
                 dVar13 * (dVar19 * dVar18 - dVar29 * dVar16) +
                 dVar32 * (dVar36 * dVar29 - dVar19 * dVar12)) / dVar38;
        dVar16 = (dVar17 * dVar14 +
                 (dVar35 * dVar16 - dVar19 * dVar39) * dVar13 +
                 (dVar34 * dVar19 - dVar35 * dVar36) * dVar32) / dVar38;
        dVar38 = (dVar37 * dVar14 +
                 (dVar29 * dVar39 - dVar35 * dVar18) * dVar13 +
                 (dVar12 * dVar35 - dVar29 * dVar34) * dVar32) / dVar38;
        *param_2 = dVar38;
        param_2[1] = dVar16;
        param_2[2] = dVar27;
        if (param_5 == (double *)0x0) {
          return;
        }
        fVar30 = fVar30 - (float)dVar27;
        fVar26 = fVar26 - (float)dVar16;
        fVar28 = fVar28 - (float)dVar38;
        *param_5 = (double)SQRT(fVar30 * fVar30 + fVar28 * fVar28 + fVar26 * fVar26) - param_4;
        return;
      }
      *param_2 = 0.0;
      param_2[1] = 0.0;
      param_2[2] = 0.0;
    }
    dVar12 = (double)fVar30;
    dVar38 = (double)fVar26;
    dVar27 = (double)fVar28;
    if (uVar24 == 1) {
      lVar11 = *(longlong *)(param_1 + 0x20);
      lVar21 = (longlong)(int)uVar20;
      dVar39 = (double)*(float *)(lVar11 + 0xc + lVar21 * 0x18);
      dVar16 = (double)*(float *)(lVar11 + 0x10 + lVar21 * 0x18);
      dVar17 = (double)*(float *)(lVar11 + 0x14 + lVar21 * 0x18);
    }
    else {
      if (uVar24 != 2) goto LAB_1402e5234;
      lVar11 = *(longlong *)(param_1 + 0x20);
      lVar21 = (longlong)(int)uVar20;
      lVar22 = (longlong)(int)uVar23;
      dVar29 = (double)*(float *)(lVar11 + 0x14 + lVar22 * 0x18) +
               (double)*(float *)(lVar11 + 0x14 + lVar21 * 0x18);
      dVar19 = (double)*(float *)(lVar11 + 0x10 + lVar22 * 0x18) +
               (double)*(float *)(lVar11 + 0x10 + lVar21 * 0x18);
      dVar34 = (double)*(float *)(lVar11 + 0xc + lVar22 * 0x18) +
               (double)*(float *)(lVar11 + 0xc + lVar21 * 0x18);
      dVar18 = dVar29 * dVar29 + dVar34 * dVar34 + dVar19 * dVar19;
      if (((dVar18 != 1.0) || (dVar39 = dVar34, dVar16 = dVar19, dVar17 = dVar29, NAN(dVar18))) &&
         (dVar39 = DAT_14c8464e0, dVar16 = DAT_14c8464e8, dVar17 = DAT_14c8464f0,
         9.99999993922529e-09 <= dVar18)) {
        dVar17 = 1.0 / SQRT(dVar18);
        dVar39 = dVar34 * dVar17;
        dVar16 = dVar19 * dVar17;
        dVar17 = dVar29 * dVar17;
      }
    }
    dVar12 = dVar12 - dVar17 * param_4;
    dVar38 = dVar38 - dVar16 * param_4;
    dVar27 = dVar27 - dVar39 * param_4;
  }
LAB_1402e5234:
  *param_2 = dVar27;
  param_2[1] = dVar38;
LAB_1402e4b46:
  param_2[2] = dVar12;
  return;
}



// FUNCTION 1402e52aa FUN_1402e52aa body=699 status=ok
// SIG undefined FUN_1402e52aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e52aa(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  longlong local_c8;
  float local_c0;
  undefined4 local_bc;
  code *local_b8;
  longlong local_b0;
  float local_a8;
  float local_a4;
  undefined1 *local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar9 = *(double *)(param_2 + 0x20);
  dVar10 = *(double *)(param_2 + 0x28);
  dVar12 = *(double *)(param_2 + 0x30);
  dVar15 = *(double *)(param_2 + 0x50);
  dVar18 = *(double *)(param_2 + 0x48) * dVar15 + dVar12;
  dVar2 = *(double *)(param_2 + 0x40) * dVar15 + dVar10;
  dVar14 = dVar15 * *(double *)(param_2 + 0x38) + dVar9;
  dVar15 = dVar12;
  if (dVar18 <= dVar12) {
    dVar15 = dVar18;
  }
  dVar3 = dVar10;
  if (dVar2 <= dVar10) {
    dVar3 = dVar2;
  }
  dVar4 = dVar9;
  if (dVar14 <= dVar9) {
    dVar4 = dVar14;
  }
  if (dVar12 <= dVar18) {
    dVar12 = dVar18;
  }
  if (dVar10 <= dVar2) {
    dVar10 = dVar2;
  }
  if (dVar9 <= dVar14) {
    dVar9 = dVar14;
  }
  dVar9 = (dVar9 + dVar1) - (dVar4 - dVar1);
  dVar12 = (dVar12 + dVar1) - (dVar15 - dVar1);
  dVar10 = (dVar10 + dVar1) - (dVar3 - dVar1);
  if ((dVar9 <= dVar10 || dVar9 <= dVar12) && (dVar9 = dVar10, dVar10 <= dVar12)) {
    dVar9 = dVar12;
  }
  dVar10 = (double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40);
  dVar12 = (double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48);
  dVar15 = (double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44);
  if ((dVar10 <= dVar15 || dVar10 <= dVar12) && (dVar10 = dVar15, dVar15 <= dVar12)) {
    dVar10 = dVar12;
  }
  local_a8 = (float)dVar1;
  local_a0 = &LAB_144a386e2;
  local_c0 = (float)*(double *)(param_1 + 0x10);
  local_bc = 0;
  local_b8 = FUN_14172546a;
  fVar5 = (float)param_3[2];
  fVar7 = (float)param_3[3];
  fVar11 = (float)*param_3;
  fVar13 = (float)param_3[1];
  local_88._0_4_ = (float)param_3[4];
  local_88._4_4_ = (float)param_3[5];
  local_88._8_4_ = (float)param_3[6];
  local_88._12_4_ = 0;
  fVar6 = fVar11 * fVar11 + fVar13 * fVar13;
  fVar8 = fVar5 * fVar5 + fVar7 * fVar7;
  auVar16._0_4_ = fVar8 + fVar6;
  auVar16._4_4_ = fVar8 + fVar6;
  auVar16._8_4_ = fVar6 + fVar8;
  auVar16._12_4_ = fVar6 + fVar8;
  auVar17 = sqrtps(auVar16,auVar16);
  auVar17 = divps(_DAT_1499314a0,auVar17);
  auVar19._0_4_ = auVar17._0_4_ * fVar11;
  auVar19._4_4_ = auVar17._4_4_ * fVar13;
  auVar19._8_4_ = auVar17._8_4_ * fVar5;
  auVar19._12_4_ = auVar17._12_4_ * fVar7;
  auVar17._4_4_ = -(uint)(1e-08 <= auVar16._4_4_);
  auVar17._0_4_ = -(uint)(1e-08 <= auVar16._0_4_);
  auVar17._8_4_ = -(uint)(1e-08 <= auVar16._8_4_);
  auVar17._12_4_ = -(uint)(1e-08 <= auVar16._12_4_);
  local_78 = blendvps(_DAT_149932320,auVar19,auVar17);
  local_e8 = local_78;
  if (dVar10 <= dVar9) {
    dVar10 = dVar9;
  }
  local_d8 = local_98;
  local_98._4_4_ = (float)param_5[1];
  local_98._0_4_ = (float)*param_5;
  local_98._8_4_ = (float)param_5[2];
  local_98._12_4_ = 0;
  local_e0 = param_4;
  local_c8 = param_1;
  local_b0 = param_2;
  local_a4 = local_a8;
  FUN_144946907(&local_c8,&local_b0,dVar10);
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e5566 FUN_1402e5566 body=283 status=ok
// SIG undefined FUN_1402e5566(void)

undefined4
FUN_1402e5566(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1402e56c2(local_d0,param_2,param_1 + 0x38,0);
  local_148 = *param_3;
  uStack_140 = param_3[1];
  local_118 = (double)param_3[6] * *(double *)(param_1 + 0x48);
  local_138 = *(undefined4 *)(param_3 + 2);
  uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_130 = *(undefined4 *)(param_3 + 3);
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
  dStack_120 = (double)param_3[5] * *(double *)(param_1 + 0x40);
  local_128 = (double)param_3[4] * *(double *)(param_1 + 0x38);
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  local_d8 = *(undefined8 *)(param_1 + 0x30);
  local_150 = &local_e8;
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  local_158 = param_5;
  uVar1 = FUN_1402e8e8c(*(undefined8 *)(param_1 + 0x88),local_d0,&local_148,param_4);
  FUN_1402e5682(local_d0);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402e5682 FUN_1402e5682 body=63 status=ok
// SIG undefined FUN_1402e5682(void)

undefined4 FUN_1402e5682(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)param_1[0x11];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149f553e0;
  return *(undefined4 *)(param_1 + 1);
}



// FUNCTION 1402e56c2 FUN_1402e56c2 body=216 status=ok
// SIG undefined FUN_1402e56c2(void)

undefined8 *
FUN_1402e56c2(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar1;
  *(byte *)((longlong)param_1 + 0x1d) = bVar1;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4bdb0;
  param_1[0x11] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
    if (*(int *)(param_2 + 8) == 1) {
      LOCK();
      *(undefined4 *)(param_2 + 0xc) = 1;
      UNLOCK();
    }
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[0x11] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[0x11] + 0x19);
  param_1[10] = param_4;
  FUN_1402e579a(param_1,param_3);
  return param_1;
}



// FUNCTION 1402e579a FUN_1402e579a body=128 status=ok
// SIG undefined FUN_1402e579a(void)

void FUN_1402e579a(longlong param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 4;
  do {
    dVar1 = *(double *)(param_2 + -0x20 + lVar2 * 8);
    uVar3 = -(ulonglong)(ABS(dVar1) < 9.999999974752427e-07);
    dVar1 = (double)(uVar3 & 0x3eb0c6f7a0000000 | ~uVar3 & (ulonglong)dVar1);
    *(double *)(param_1 + lVar2 * 8) = dVar1;
    *(double *)(param_1 + 0x18 + lVar2 * 8) = 1.0 / dVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 7);
  *(double *)(param_1 + 0x10) =
       *(double *)(param_1 + 0x20) * *(double *)(*(longlong *)(param_1 + 0x88) + 0x10) +
       *(double *)(param_1 + 0x50);
  FUN_1402e581a();
  return;
}



// FUNCTION 1402e581a FUN_1402e581a body=302 status=ok
// SIG undefined FUN_1402e581a(void)

void FUN_1402e581a(longlong param_1)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar2 = *(longlong *)(param_1 + 0x88);
  dVar1 = *(double *)(lVar2 + 0x10);
  dVar3 = *(double *)(lVar2 + 0x20);
  dVar4 = *(double *)(lVar2 + 0x28);
  dVar5 = *(double *)(lVar2 + 0x30);
  dVar7 = *(double *)(lVar2 + 0x50);
  dVar9 = *(double *)(lVar2 + 0x48) * dVar7 + dVar5;
  dVar11 = *(double *)(lVar2 + 0x40) * dVar7 + dVar4;
  dVar7 = dVar7 * *(double *)(lVar2 + 0x38) + dVar3;
  dVar6 = dVar5;
  if (dVar9 <= dVar5) {
    dVar6 = dVar9;
  }
  dVar8 = dVar4;
  if (dVar11 <= dVar4) {
    dVar8 = dVar11;
  }
  dVar10 = dVar3;
  if (dVar7 <= dVar3) {
    dVar10 = dVar7;
  }
  if (dVar5 <= dVar9) {
    dVar5 = dVar9;
  }
  if (dVar4 <= dVar11) {
    dVar4 = dVar11;
  }
  if (dVar3 <= dVar7) {
    dVar3 = dVar7;
  }
  dVar7 = (dVar6 - dVar1) * *(double *)(param_1 + 0x30);
  dVar9 = (dVar8 - dVar1) * *(double *)(param_1 + 0x28);
  dVar11 = (dVar10 - dVar1) * *(double *)(param_1 + 0x20);
  dVar5 = (dVar5 + dVar1) * *(double *)(param_1 + 0x30);
  dVar4 = (dVar4 + dVar1) * *(double *)(param_1 + 0x28);
  dVar3 = (dVar3 + dVar1) * *(double *)(param_1 + 0x20);
  dVar1 = dVar7;
  if (dVar5 <= dVar7) {
    dVar1 = dVar5;
  }
  dVar6 = dVar9;
  if (dVar4 <= dVar9) {
    dVar6 = dVar4;
  }
  dVar8 = dVar11;
  if (dVar3 <= dVar11) {
    dVar8 = dVar3;
  }
  *(double *)(param_1 + 0x58) = dVar8;
  *(double *)(param_1 + 0x60) = dVar6;
  *(double *)(param_1 + 0x68) = dVar1;
  if (dVar7 <= dVar5) {
    dVar7 = dVar5;
  }
  if (dVar9 <= dVar4) {
    dVar9 = dVar4;
  }
  if (dVar11 <= dVar3) {
    dVar11 = dVar3;
  }
  *(double *)(param_1 + 0x70) = dVar11;
  *(double *)(param_1 + 0x78) = dVar9;
  *(double *)(param_1 + 0x80) = dVar7;
  return;
}



// FUNCTION 1402e5948 FUN_1402e5948 body=818 status=ok
// SIG undefined FUN_1402e5948(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402e5948(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auStack_128 [32];
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  longlong local_e8;
  float local_e0;
  float local_dc;
  undefined1 *local_d8;
  longlong local_d0;
  float local_c8;
  float local_c4;
  undefined1 *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar10 = *(double *)(param_2 + 0x20);
  dVar11 = *(double *)(param_2 + 0x28);
  dVar13 = *(double *)(param_2 + 0x30);
  dVar16 = *(double *)(param_2 + 0x50);
  dVar19 = *(double *)(param_2 + 0x48) * dVar16 + dVar13;
  dVar20 = *(double *)(param_2 + 0x40) * dVar16 + dVar11;
  dVar15 = dVar16 * *(double *)(param_2 + 0x38) + dVar10;
  dVar16 = dVar13;
  if (dVar19 <= dVar13) {
    dVar16 = dVar19;
  }
  dVar2 = dVar11;
  if (dVar20 <= dVar11) {
    dVar2 = dVar20;
  }
  dVar3 = dVar10;
  if (dVar15 <= dVar10) {
    dVar3 = dVar15;
  }
  if (dVar13 <= dVar19) {
    dVar13 = dVar19;
  }
  if (dVar11 <= dVar20) {
    dVar11 = dVar20;
  }
  if (dVar10 <= dVar15) {
    dVar10 = dVar15;
  }
  dVar10 = (dVar10 + dVar1) - (dVar3 - dVar1);
  dVar13 = (dVar13 + dVar1) - (dVar16 - dVar1);
  dVar11 = (dVar11 + dVar1) - (dVar2 - dVar1);
  if ((dVar10 <= dVar13 || dVar10 <= dVar11) && (dVar10 = dVar11, dVar11 <= dVar13)) {
    dVar10 = dVar13;
  }
  dVar11 = *(double *)(param_1 + 0x10);
  dVar13 = *(double *)(param_1 + 0x20);
  dVar16 = *(double *)(param_1 + 0x28);
  dVar20 = *(double *)(param_1 + 0x30);
  dVar15 = *(double *)(param_1 + 0x50);
  dVar19 = *(double *)(param_1 + 0x48) * dVar15 + dVar20;
  dVar2 = *(double *)(param_1 + 0x40) * dVar15 + dVar16;
  dVar15 = dVar15 * *(double *)(param_1 + 0x38) + dVar13;
  dVar3 = dVar20;
  if (dVar19 <= dVar20) {
    dVar3 = dVar19;
  }
  dVar4 = dVar16;
  if (dVar2 <= dVar16) {
    dVar4 = dVar2;
  }
  dVar5 = dVar13;
  if (dVar15 <= dVar13) {
    dVar5 = dVar15;
  }
  if (dVar20 <= dVar19) {
    dVar20 = dVar19;
  }
  if (dVar16 <= dVar2) {
    dVar16 = dVar2;
  }
  if (dVar13 <= dVar15) {
    dVar13 = dVar15;
  }
  dVar13 = (dVar13 + dVar11) - (dVar5 - dVar11);
  dVar20 = (dVar20 + dVar11) - (dVar3 - dVar11);
  dVar16 = (dVar16 + dVar11) - (dVar4 - dVar11);
  if ((dVar13 <= dVar16 || dVar13 <= dVar20) && (dVar13 = dVar16, dVar16 <= dVar20)) {
    dVar13 = dVar20;
  }
  local_c8 = (float)dVar1;
  local_c0 = &LAB_144a386e2;
  local_e0 = (float)dVar11;
  local_d8 = &LAB_144a386e2;
  fVar6 = (float)param_3[2];
  fVar8 = (float)param_3[3];
  fVar12 = (float)*param_3;
  fVar14 = (float)param_3[1];
  local_a8._0_4_ = (float)param_3[4];
  local_a8._4_4_ = (float)param_3[5];
  local_a8._8_4_ = (float)param_3[6];
  local_a8._12_4_ = 0;
  fVar7 = fVar12 * fVar12 + fVar14 * fVar14;
  fVar9 = fVar6 * fVar6 + fVar8 * fVar8;
  auVar17._0_4_ = fVar9 + fVar7;
  auVar17._4_4_ = fVar9 + fVar7;
  auVar17._8_4_ = fVar7 + fVar9;
  auVar17._12_4_ = fVar7 + fVar9;
  auVar18 = sqrtps(auVar17,auVar17);
  auVar18 = divps(_DAT_1499314a0,auVar18);
  auVar21._0_4_ = auVar18._0_4_ * fVar12;
  auVar21._4_4_ = auVar18._4_4_ * fVar14;
  auVar21._8_4_ = auVar18._8_4_ * fVar6;
  auVar21._12_4_ = auVar18._12_4_ * fVar8;
  auVar18._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
  auVar18._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
  auVar18._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
  auVar18._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
  local_98 = blendvps(_DAT_149932320,auVar21,auVar18);
  local_108 = local_98;
  if (dVar13 <= dVar10) {
    dVar13 = dVar10;
  }
  local_f8 = local_b8;
  local_b8._4_4_ = (float)param_5[1];
  local_b8._0_4_ = (float)*param_5;
  local_b8._8_4_ = (float)param_5[2];
  local_b8._12_4_ = 0;
  local_100 = param_4;
  local_e8 = param_1;
  local_dc = local_e0;
  local_d0 = param_2;
  local_c4 = local_c8;
  FUN_144946907(&local_e8,&local_d0,dVar13);
  if ((local_80 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402e5c7c FUN_1402e5c7c body=3413 status=ok
// SIG undefined FUN_1402e5c7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1402e5c7c(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                       undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  int *piVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  double dVar33;
  double dVar34;
  undefined1 in_XMM3 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  double dVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined8 *local_310;
  undefined8 *local_308;
  undefined1 *local_300;
  undefined1 *local_2f8;
  double local_2f0;
  undefined8 local_2e8;
  double *local_2e0;
  undefined8 local_2d8;
  int *local_2c8;
  undefined8 *local_2c0;
  undefined8 local_2b8;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [8];
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [16];
  double local_288;
  double local_280 [4];
  double dStack_260;
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  int *local_228;
  undefined8 uStack_220;
  double local_218 [3];
  double local_200 [6];
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 *local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_f0;
  
  dVar34 = in_XMM3._0_8_;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  dVar1 = *(double *)(param_2 + 0x10);
  dVar17 = *(double *)(param_2 + 0x50);
  dVar36 = *(double *)(param_2 + 0x48) * dVar17 + *(double *)(param_2 + 0x30);
  auVar39._0_8_ = *(double *)(param_2 + 0x40) * dVar17 + *(double *)(param_2 + 0x28);
  auVar39._8_8_ = 0;
  dVar33 = dVar17 * *(double *)(param_2 + 0x38) + *(double *)(param_2 + 0x20);
  dVar17 = *(double *)(param_2 + 0x30);
  if (dVar36 <= *(double *)(param_2 + 0x30)) {
    dVar17 = dVar36;
  }
  dVar46 = *(double *)(param_2 + 0x28);
  if (auVar39._0_8_ <= *(double *)(param_2 + 0x28)) {
    dVar46 = auVar39._0_8_;
  }
  dVar2 = *(double *)(param_2 + 0x20);
  if (dVar33 <= *(double *)(param_2 + 0x20)) {
    dVar2 = dVar33;
  }
  dVar5 = *(double *)(param_2 + 0x30);
  if (*(double *)(param_2 + 0x30) <= dVar36) {
    dVar5 = dVar36;
  }
  dVar36 = *(double *)(param_2 + 0x28);
  if (*(double *)(param_2 + 0x28) <= auVar39._0_8_) {
    dVar36 = auVar39._0_8_;
  }
  dVar37 = *(double *)(param_2 + 0x20);
  if (*(double *)(param_2 + 0x20) <= dVar33) {
    dVar37 = dVar33;
  }
  local_218[0] = (dVar2 - dVar1) - dVar34;
  local_218[1] = (dVar46 - dVar1) - dVar34;
  local_218[2] = (dVar17 - dVar1) - dVar34;
  local_200[0] = dVar37 + dVar1 + dVar34;
  local_200[1] = dVar36 + dVar1 + dVar34;
  local_200[2] = dVar5 + dVar1 + dVar34;
  FUN_1400c6592(local_218,&local_138);
  local_218[2] = local_128;
  local_218[0] = local_138;
  local_218[1] = uStack_130;
  local_200[2] = uStack_110;
  local_200[0] = uStack_120;
  local_200[1] = uStack_118;
  fVar32 = (float)local_128;
  local_228 = (int *)0x0;
  uStack_220 = 0;
  fVar42 = (float)local_138;
  fVar43 = (float)uStack_130;
  fVar29 = (float)uStack_110;
  fVar44 = (float)uStack_120;
  fVar45 = (float)uStack_118;
  local_248._4_4_ = fVar43;
  local_248._0_4_ = fVar42;
  local_248._8_4_ = fVar32;
  local_248._12_4_ = 0;
  local_238._4_4_ = fVar45;
  local_238._0_4_ = fVar44;
  local_238._8_4_ = fVar29;
  local_238._12_4_ = 0;
  local_280[3] = local_138;
  dStack_260 = uStack_130;
  local_258 = uStack_120;
  dStack_250 = uStack_118;
  cVar6 = FUN_144947e24(param_1);
  if (cVar6 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar14 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_220 != 0) {
        local_2c0 = param_5 + 3;
        local_2b8 = local_228 + (longlong)(int)uStack_220 * 2;
        uVar14 = 0;
        piVar12 = local_228;
        do {
          uVar3 = *(ushort *)(param_1 + 0x92);
          uVar11 = (uint)uVar3;
          iVar8 = piVar12[1] * uVar11 + *piVar12;
          lVar10 = *(longlong *)(param_1 + 0x20);
          lVar9 = (longlong)iVar8;
          dVar1 = *(double *)(param_1 + 0x80);
          dVar17 = *(double *)(param_1 + 0xa0);
          dVar46 = (double)*(ushort *)(lVar10 + lVar9 * 2) * dVar17 + dVar1;
          dVar36 = (double)*(ushort *)(lVar10 + 2 + lVar9 * 2) * dVar17 + dVar1;
          dVar33 = (double)*(ushort *)(lVar10 + ((ulonglong)uVar3 + lVar9) * 2) * dVar17 + dVar1;
          dVar1 = (double)*(ushort *)(lVar10 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar17 + dVar1;
          dVar17 = dVar33;
          if (dVar1 <= dVar33) {
            dVar17 = dVar1;
          }
          dVar2 = dVar36;
          if (dVar17 <= dVar36) {
            dVar2 = dVar17;
          }
          local_280[2] = dVar46;
          if (dVar2 <= dVar46) {
            local_280[2] = dVar2;
          }
          dVar17 = dVar33;
          if (dVar33 <= dVar1) {
            dVar17 = dVar1;
          }
          dVar2 = dVar36;
          if (dVar36 <= dVar17) {
            dVar2 = dVar17;
          }
          dVar17 = dVar46;
          if (dVar46 <= dVar2) {
            dVar17 = dVar2;
          }
          dVar5 = *(double *)(param_1 + 0x50) * (double)(iVar8 % (int)uVar11);
          dVar52 = *(double *)(param_1 + 0x58) * (double)(iVar8 / (int)uVar11);
          dVar2 = *(double *)(param_1 + 0x60);
          dVar49 = ((double)(iVar8 % (int)uVar11) + 1.0) * *(double *)(param_1 + 0x50);
          dVar37 = ((double)(iVar8 / (int)uVar11) + 1.0) * *(double *)(param_1 + 0x58);
          dVar17 = dVar17 * dVar2;
          local_280[2] = local_280[2] * dVar2;
          local_288 = local_280[2];
          if (dVar17 <= local_280[2]) {
            local_288 = dVar17;
          }
          local_298._8_8_ = dVar52;
          if (dVar37 <= dVar52) {
            local_298._8_8_ = dVar37;
          }
          local_298._0_8_ = dVar5;
          if (dVar49 <= dVar5) {
            local_298._0_8_ = dVar49;
          }
          if (local_280[2] <= dVar17) {
            local_280[2] = dVar17;
          }
          local_280[1] = dVar52;
          if (dVar52 <= dVar37) {
            local_280[1] = dVar37;
          }
          local_280[0] = dVar5;
          if (dVar5 <= dVar49) {
            local_280[0] = dVar49;
          }
          lVar10 = -3;
          do {
            if ((local_200[lVar10 + 3] <= local_280[lVar10] &&
                 local_280[lVar10] != local_200[lVar10 + 3]) ||
               (local_280[lVar10 + 3] <= local_200[lVar10] &&
                local_200[lVar10] != local_280[lVar10 + 3])) goto LAB_1402e68f5;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar11 = (uVar3 - 1) * piVar12[1] + *piVar12, uVar11 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar11) != -1)))) {
            local_178 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_190 = 0.0;
            local_198 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_1b8 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_200[3] = 1.0;
            local_200[4] = 0.0;
            local_200[5] = 0.0;
            local_158._8_8_ = &LAB_1406864a0;
            local_148 = *(undefined8 *)(param_2 + 0x10);
            local_168 = &LAB_1429b1b78;
            local_160 = 0;
            local_2d8 = 0x3f50624de0000000;
            local_2e0 = local_200 + 3;
            local_2e8 = 0;
            local_2f8 = local_1d0;
            local_300 = local_1cc;
            local_308 = &local_188;
            local_310 = &local_1c8;
            local_318 = &local_1a8;
            local_2f0 = dVar34;
            local_2c8 = piVar12;
            local_170 = &local_138;
            local_138 = dVar5;
            uStack_130 = dVar52;
            local_128 = dVar46 * dVar2;
            uStack_120 = dVar49;
            uStack_118 = dVar52;
            uStack_110 = dVar36 * dVar2;
            local_108 = dVar49;
            uStack_100 = dVar37;
            local_f8 = dVar1 * dVar2;
            local_158._0_8_ = param_2;
            cVar6 = FUN_14068570a(&local_170,local_158,param_3,&local_190);
            local_2a8[0] = cVar6;
            if ((cVar6 != '\0') &&
               ((double)param_5[6] <= local_190 && local_190 != (double)param_5[6])) {
              param_5[6] = local_190;
              param_5[2] = local_178;
              *param_5 = local_188;
              param_5[1] = uStack_180;
              *local_2c0 = local_1a8;
              local_2c0[1] = uStack_1a0;
              local_2c0[2] = local_198;
            }
            local_178 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_190 = 0.0;
            local_198 = 0;
            local_1a8 = 0;
            uStack_1a0 = 0;
            local_1b8 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_200[3] = 1.0;
            local_200[4] = 0.0;
            local_200[5] = 0.0;
            local_158._8_8_ = &LAB_1406864a0;
            local_158._0_8_ = param_2;
            local_148 = *(undefined8 *)(param_2 + 0x10);
            local_168 = &LAB_1429b1b78;
            local_160 = 0;
            local_2d8 = 0x3f50624de0000000;
            local_2e0 = local_200 + 3;
            local_2e8 = 0;
            local_2f8 = local_1d0;
            local_300 = local_1cc;
            local_308 = &local_188;
            local_310 = &local_1c8;
            local_318 = &local_1a8;
            local_2f0 = dVar34;
            local_170 = &local_138;
            local_138 = dVar5;
            uStack_130 = dVar52;
            local_128 = dVar46 * dVar2;
            uStack_120 = dVar49;
            uStack_118 = dVar37;
            uStack_110 = dVar1 * dVar2;
            local_108 = dVar5;
            uStack_100 = dVar37;
            local_f8 = dVar33 * dVar2;
            bVar7 = FUN_14068570a(&local_170,local_158,param_3,&local_190);
            if ((bVar7 != 0) && ((double)param_5[6] <= local_190 && local_190 != (double)param_5[6])
               ) {
              param_5[6] = local_190;
              param_5[2] = local_178;
              *param_5 = local_188;
              param_5[1] = uStack_180;
              *local_2c0 = local_1a8;
              local_2c0[1] = uStack_1a0;
              local_2c0[2] = local_198;
            }
            uVar14 = (ulonglong)(byte)((byte)uVar14 | local_2a8[0] | bVar7);
            piVar12 = local_2c8;
          }
LAB_1402e68f5:
          piVar12 = piVar12 + 2;
        } while (piVar12 != local_2b8);
      }
      goto LAB_1402e5ea7;
    }
    local_2c8 = (int *)CONCAT44(local_2c8._4_4_,(float)*(double *)(param_2 + 0x10));
    auVar38._4_12_ = auVar39._4_12_;
    auVar38._0_4_ = (float)*(double *)(param_2 + 0x20);
    auVar39 = insertps(auVar38,ZEXT416((uint)(float)*(double *)(param_2 + 0x28)),0x1c);
    dVar1 = *(double *)(param_2 + 0x50);
    dVar17 = *(double *)(param_2 + 0x40) * dVar1 + *(double *)(param_2 + 0x28);
    dVar34 = dVar1 * *(double *)(param_2 + 0x38) + *(double *)(param_2 + 0x20);
    auVar53._0_4_ = (float)dVar17;
    auVar53._4_4_ = (int)((ulonglong)dVar17 >> 0x20);
    auVar53._8_8_ = 0;
    auVar51._0_4_ = (float)dVar34;
    auVar51._4_4_ = (int)((ulonglong)dVar34 >> 0x20);
    auVar51._8_8_ = 0;
    local_298 = insertps(auVar39,ZEXT416((uint)(float)*(double *)(param_2 + 0x30)),0x28);
    auVar39 = insertps(auVar51,auVar53,0x1c);
    local_158 = insertps(auVar39,ZEXT416((uint)(float)(*(double *)(param_2 + 0x48) * dVar1 +
                                                      *(double *)(param_2 + 0x30))),0x28);
    fVar15 = (float)param_3[2];
    fVar20 = (float)param_3[3];
    fVar22 = (float)*param_3;
    fVar25 = (float)param_3[1];
    fVar16 = fVar22 * fVar22 + fVar25 * fVar25;
    fVar21 = fVar15 * fVar15 + fVar20 * fVar20;
    auVar50._0_4_ = fVar21 + fVar16;
    auVar50._4_4_ = fVar21 + fVar16;
    auVar50._8_4_ = fVar16 + fVar21;
    auVar50._12_4_ = fVar16 + fVar21;
    auVar35._4_4_ = -(uint)(1e-08 <= auVar50._4_4_);
    auVar35._0_4_ = -(uint)(1e-08 <= auVar50._0_4_);
    auVar35._8_4_ = -(uint)(1e-08 <= auVar50._8_4_);
    auVar35._12_4_ = -(uint)(1e-08 <= auVar50._12_4_);
    auVar39 = sqrtps(auVar50,auVar50);
    auVar39 = divps(_DAT_1499314a0,auVar39);
    auVar54._0_4_ = auVar39._0_4_ * fVar22 * -1.0;
    auVar54._4_4_ = auVar39._4_4_ * fVar25 * -1.0;
    auVar54._8_4_ = auVar39._8_4_ * fVar15 * -1.0;
    auVar54._12_4_ = auVar39._12_4_ * fVar20 * 1.0;
    auVar39 = blendvps(_DAT_149f51f60,auVar54,auVar35);
    if ((longlong)(int)uStack_220 != 0) {
      local_2a8._0_4_ = (undefined4)param_3[4];
      local_2a8._4_4_ = (undefined4)param_3[5];
      fStack_2a0 = (float)param_3[6];
      fStack_29c = 0.0;
      piVar12 = local_228 + (longlong)(int)uStack_220 * 2;
      fVar15 = auVar39._0_4_;
      fVar16 = auVar39._4_4_;
      fVar20 = auVar39._8_4_;
      fVar21 = auVar39._12_4_;
      local_2b8 = (int *)CONCAT44(fVar21,fVar21);
      piVar13 = local_228;
      fStack_2b0 = fVar21;
      fStack_2ac = fVar21;
      do {
        uVar3 = *(ushort *)(param_1 + 0x92);
        uVar11 = (uint)uVar3;
        iVar8 = piVar13[1] * uVar11 + *piVar13;
        dVar1 = *(double *)(param_1 + 0x80);
        lVar10 = *(longlong *)(param_1 + 0x20);
        lVar9 = (longlong)iVar8;
        dVar17 = *(double *)(param_1 + 0xa0);
        dVar34 = (double)*(ushort *)(lVar10 + lVar9 * 2) * dVar17 + dVar1;
        auVar30._0_4_ = (float)dVar34;
        auVar30._4_8_ = (ulonglong)dVar34 >> 0x20;
        auVar30._12_4_ = 0;
        fVar47 = (float)((double)*(ushort *)(lVar10 + 2 + lVar9 * 2) * dVar17 + dVar1);
        fVar25 = (float)((double)*(ushort *)(lVar10 + ((ulonglong)uVar3 + lVar9) * 2) * dVar17 +
                        dVar1);
        fVar48 = (float)(iVar8 / (int)uVar11);
        fVar22 = (float)(iVar8 % (int)uVar11);
        fVar41 = (float)((double)*(ushort *)(lVar10 + 2 + ((ulonglong)uVar3 + lVar9) * 2) * dVar17 +
                        dVar1);
        auVar39 = insertps(ZEXT416((uint)fVar22),ZEXT416((uint)fVar48),0x1c);
        auVar51 = insertps(auVar39,auVar30,0x20);
        auVar53 = insertps(ZEXT416((uint)(fVar22 + 1.0)),ZEXT416((uint)fVar48),0x1c);
        auVar54 = insertps(auVar53,ZEXT416((uint)fVar47),0x20);
        auVar53 = insertps(ZEXT416((uint)fVar22),ZEXT416((uint)(fVar48 + 1.0)),0x1c);
        auVar35 = insertps(auVar53,ZEXT416((uint)fVar25),0x20);
        auVar53 = insertps(ZEXT416((uint)(fVar22 + 1.0)),ZEXT416((uint)(fVar48 + 1.0)),0x1c);
        auVar4._4_4_ = in_XMM3._4_4_;
        auVar4._0_4_ = fVar41;
        auVar4._8_4_ = in_XMM3._8_4_;
        auVar4._12_4_ = in_XMM3._12_4_;
        auVar50 = insertps(auVar53,auVar4,0x20);
        fVar22 = fVar25;
        if (fVar41 <= fVar25) {
          fVar22 = fVar41;
        }
        fVar48 = fVar47;
        if (fVar22 <= fVar47) {
          fVar48 = fVar22;
        }
        fVar22 = auVar30._0_4_;
        if (fVar48 <= auVar30._0_4_) {
          fVar22 = fVar48;
        }
        auVar40._4_4_ = (int)((ulonglong)dVar34 >> 0x20);
        auVar40._0_4_ = fVar22;
        auVar40._8_8_ = 0;
        if (fVar25 <= fVar41) {
          fVar25 = fVar41;
        }
        if (fVar47 <= fVar25) {
          fVar47 = fVar25;
        }
        if (auVar30._0_4_ <= fVar47) {
          auVar30._0_4_ = fVar47;
          auVar30._12_4_ = 0;
        }
        auVar53 = insertps(auVar53,auVar30,0x20);
        auVar39 = insertps(auVar39,auVar40,0x20);
        fVar22 = *(float *)(param_1 + 0x70);
        fVar25 = *(float *)(param_1 + 0x74);
        fVar47 = *(float *)(param_1 + 0x78);
        fVar41 = *(float *)(param_1 + 0x7c);
        local_138 = (double)CONCAT44(auVar51._4_4_ * fVar25,auVar51._0_4_ * fVar22);
        uStack_130 = (double)CONCAT44(auVar51._12_4_ * fVar41,auVar51._8_4_ * fVar47);
        local_128 = (double)CONCAT44(auVar54._4_4_ * fVar25,auVar54._0_4_ * fVar22);
        uStack_120 = (double)CONCAT44(auVar54._12_4_ * fVar41,auVar54._8_4_ * fVar47);
        uStack_118 = (double)CONCAT44(auVar35._4_4_ * fVar25,auVar35._0_4_ * fVar22);
        uStack_110 = (double)CONCAT44(auVar35._12_4_ * fVar41,auVar35._8_4_ * fVar47);
        local_108 = (double)CONCAT44(auVar50._4_4_ * fVar25,auVar50._0_4_ * fVar22);
        uStack_100 = (double)CONCAT44(auVar50._12_4_ * fVar41,auVar50._8_4_ * fVar47);
        auVar18._0_8_ = CONCAT44(auVar39._4_4_ * fVar25,auVar39._0_4_ * fVar22);
        auVar18._8_4_ = auVar39._8_4_ * fVar47;
        auVar18._12_4_ = auVar39._12_4_ * fVar41;
        auVar23._0_4_ = auVar53._0_4_ * fVar22;
        auVar23._4_4_ = auVar53._4_4_ * fVar25;
        auVar23._8_4_ = auVar53._8_4_ * fVar47;
        auVar23._12_4_ = auVar53._12_4_ * fVar41;
        auVar31._8_4_ = auVar18._8_4_;
        auVar31._0_8_ = auVar18._0_8_;
        auVar31._12_4_ = auVar18._12_4_;
        auVar53 = minps(auVar31,auVar23);
        auVar39 = maxps(auVar18,auVar23);
        auVar19._4_4_ = -(uint)(auVar39._4_4_ < fVar43);
        auVar19._0_4_ = -(uint)(auVar39._0_4_ < fVar42);
        auVar19._8_4_ = -(uint)(auVar39._8_4_ < fVar32);
        auVar19._12_4_ = -(uint)(auVar39._12_4_ < 0.0);
        auVar24._4_4_ = -(uint)(fVar45 < auVar53._4_4_);
        auVar24._0_4_ = -(uint)(fVar44 < auVar53._0_4_);
        auVar24._8_4_ = -(uint)(fVar29 < auVar53._8_4_);
        auVar24._12_4_ = -(uint)(0.0 < auVar53._12_4_);
        iVar8 = movmskps(iVar8 / (int)uVar11,auVar24 | auVar19);
        if ((iVar8 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar11 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar11 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar11) != -1)))))) {
          lVar10 = 0;
          do {
            fVar22 = *(float *)((longlong)&local_138 + lVar10) - (float)local_2a8._0_4_;
            fVar25 = *(float *)((longlong)&local_138 + lVar10 + 4) - (float)local_2a8._4_4_;
            fVar47 = *(float *)((longlong)&uStack_130 + lVar10) - fStack_2a0;
            fVar41 = *(float *)((longlong)&uStack_130 + lVar10 + 4) - fStack_29c;
            fVar48 = fVar25 * fVar15 - fVar16 * fVar22;
            fVar26 = fVar47 * fVar16 - fVar20 * fVar25;
            fVar27 = fVar22 * fVar20 - fVar15 * fVar47;
            fVar28 = fVar41 * fVar21 - fVar21 * fVar41;
            fVar48 = fVar48 + fVar48;
            fVar26 = fVar26 + fVar26;
            fVar27 = fVar27 + fVar27;
            fVar28 = fVar28 + fVar28;
            *(float *)((longlong)&local_138 + lVar10) =
                 (fVar48 * fVar16 - fVar27 * fVar20) + (float)local_2b8 * fVar26 + fVar22;
            *(float *)((longlong)&local_138 + lVar10 + 4) =
                 (fVar26 * fVar20 - fVar48 * fVar15) + local_2b8._4_4_ * fVar27 + fVar25;
            *(float *)((longlong)&uStack_130 + lVar10) =
                 (fVar27 * fVar15 - fVar26 * fVar16) + fStack_2b0 * fVar48 + fVar47;
            *(float *)((longlong)&uStack_130 + lVar10 + 4) =
                 (fVar28 * fVar21 - fVar28 * fVar21) + fStack_2ac * fVar28 + fVar41;
            lVar10 = lVar10 + 0x10;
          } while (lVar10 != 0x40);
          local_310 = (undefined8 *)CONCAT44(local_310._4_4_,local_2c8._0_4_);
          local_318 = (undefined8 *)local_158;
          cVar6 = FUN_1402e7e35(&local_138,&local_128,&local_108,local_298);
          if (cVar6 == '\0') {
            local_310 = (undefined8 *)CONCAT44(local_310._4_4_,local_2c8._0_4_);
            local_318 = (undefined8 *)local_158;
            cVar6 = FUN_1402e7e35(&local_138,&local_108,&uStack_118,local_298);
            if (cVar6 == '\0') goto LAB_1402e6343;
          }
          uVar14 = CONCAT71((int7)((ulonglong)&local_138 >> 8),1);
          goto LAB_1402e5ea7;
        }
LAB_1402e6343:
        piVar13 = piVar13 + 2;
      } while (piVar13 != piVar12);
    }
  }
  uVar14 = 0;
LAB_1402e5ea7:
  if (local_228 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffff01;
}



// FUNCTION 1402e69d2 FUN_1402e69d2 body=353 status=ok
// SIG undefined FUN_1402e69d2(void)

void FUN_1402e69d2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1402e6a59;
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
LAB_1402e6a59:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1402e6b34 FUN_1402e6b34 body=3526 status=ok
// SIG undefined FUN_1402e6b34(void)

ulonglong FUN_1402e6b34(ulonglong param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5,double *param_6)

{
  float *pfVar1;
  float *pfVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined7 uVar13;
  bool bVar14;
  double *pdVar15;
  ulonglong uVar16;
  double *pdVar17;
  longlong lVar18;
  ulonglong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  ulonglong local_300;
  double local_2f0;
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  double local_248 [4];
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1c8 [4];
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double *local_148;
  longlong local_140;
  double *local_138;
  double *local_130;
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  dVar34 = param_6[2];
  dVar35 = 1.0 / dVar34;
  dVar23 = *param_6;
  dVar20 = param_6[1];
  dVar24 = 1.0 / dVar20;
  dVar5 = 1.0 / dVar23;
  local_160 = param_4;
  if (param_5 == (undefined8 *)0x0) {
    pdVar15 = param_3;
    pdVar17 = local_1c8;
    for (lVar11 = 0xc; dVar33 = local_1c8[2], dVar28 = local_1c8[1], dVar3 = local_1c8[0],
        lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar17 = *pdVar15;
      pdVar15 = pdVar15 + 1;
      pdVar17 = pdVar17 + 1;
    }
    dVar30 = local_198 * dVar34;
    dVar31 = (double)local_1a8._8_8_ * dVar20;
    dVar37 = (double)local_1a8._0_8_ * dVar23;
    uVar13 = (undefined7)(param_1 >> 8);
    local_300 = param_1;
    local_2e8 = dVar35;
    if ((0.9 < ABS(param_3[3])) || (ABS(param_3[3] + -0.7071067690849304) <= 0.01)) {
      dVar32 = *(double *)(param_2 + 0x20);
      dVar36 = *(double *)(param_2 + 0x28);
      local_2f0 = *(double *)(param_2 + 0x30);
      dVar35 = *(double *)(param_2 + 0x30);
      dVar38 = *(double *)(param_2 + 0x50);
      local_2b8 = *(double *)(param_2 + 0x48) * dVar38;
      uStack_2b0 = 0;
      dVar39 = *(double *)(param_2 + 0x38);
      dVar40 = *(double *)(param_2 + 0x40) * dVar38 + *(double *)(param_2 + 0x28);
      local_2d8 = *(double *)(param_2 + 0x10);
      local_248[0] = *param_3;
      local_248[1] = param_3[1];
      local_228._8_4_ = SUB84(param_3[5] * dVar20,0);
      local_228._0_8_ = param_3[4] * dVar23;
      local_228._12_4_ = (int)((ulonglong)(param_3[5] * dVar20) >> 0x20);
      local_218 = param_3[6] * dVar34;
      uStack_210 = 0;
      local_208 = 0x3ff0000000000000;
      uStack_200 = 0x3ff0000000000000;
      local_1f8 = 0x3ff0000000000000;
      uStack_1f0 = 0;
      local_308 = &local_158;
      local_158 = (undefined8 *)CONCAT44((float)dVar20,(float)dVar23);
      uStack_150 = CONCAT44(uStack_150._4_4_,(float)dVar34);
      local_2c8 = local_1c8[3];
      dStack_2c0 = local_1c8[3];
      local_2d0 = dVar24;
      local_248[2] = param_3[2];
      local_248[3] = param_3[3];
      FUN_1402e8b82(&local_2a8,local_248,param_2);
      if (*(int *)(param_1 + 0xe8) != 0) {
        local_158 = (undefined8 *)0x0;
        uStack_150 = 0;
        FUN_14481578e(&local_158,0x10);
        uVar16 = uStack_150;
        lVar11 = (longlong)(int)uStack_150;
        uVar8 = (int)uStack_150 + 1;
        uStack_150 = CONCAT44(uStack_150._4_4_,uVar8);
        if (uStack_150._4_4_ < uVar8) {
          FUN_1446f48e2(&local_158,uVar16 & 0xffffffff);
        }
        *(undefined4 *)((longlong)local_158 + lVar11 * 4) = 0;
        if ((int)uStack_150 != 0) {
          dVar24 = dVar36 * dVar3 - dVar32 * dVar28;
          dVar27 = dVar35 * dVar28 - dVar36 * dVar33;
          dVar29 = dVar32 * dVar33 - dVar35 * dVar3;
          dVar34 = local_2b8 + local_2f0;
          dVar23 = dVar38 * dVar39 + dVar32;
          dVar38 = dVar40 * dVar3 - dVar28 * dVar23;
          dVar41 = dVar34 * dVar28 - dVar33 * dVar40;
          dVar39 = dVar23 * dVar33 - dVar34 * dVar3;
          dVar27 = dVar27 + dVar27;
          dVar29 = dVar29 + dVar29;
          dVar24 = dVar24 + dVar24;
          dVar41 = dVar41 + dVar41;
          dVar39 = dVar39 + dVar39;
          dVar38 = dVar38 + dVar38;
          dVar20 = (dVar24 * dVar28 - dVar33 * dVar29) + dVar27 * local_2c8 + dVar32 + dVar37;
          dVar35 = (dVar33 * dVar27 - dVar3 * dVar24) + dVar29 * dStack_2c0 + dVar36 + dVar31;
          dVar37 = (dVar38 * dVar28 - dVar33 * dVar39) + dVar41 * local_2c8 + dVar23 + dVar37;
          dVar31 = (dVar33 * dVar41 - dVar3 * dVar38) + dVar39 * dStack_2c0 + dVar40 + dVar31;
          dVar23 = dVar24 * local_2c8 + local_2f0 + (dVar29 * dVar3 - dVar28 * dVar27) + dVar30;
          dVar30 = dVar38 * local_2c8 + dVar34 + (dVar39 * dVar3 - dVar28 * dVar41) + dVar30;
          dVar34 = dVar20;
          if (dVar37 <= dVar20) {
            dVar34 = dVar37;
          }
          if (dVar20 <= dVar37) {
            dVar20 = dVar37;
          }
          dVar24 = dVar35;
          if (dVar31 <= dVar35) {
            dVar24 = dVar31;
          }
          if (dVar35 <= dVar31) {
            dVar35 = dVar31;
          }
          dVar3 = dVar23;
          if (dVar30 <= dVar23) {
            dVar3 = dVar30;
          }
          if (dVar23 <= dVar30) {
            dVar23 = dVar30;
          }
          param_4 = ABS(param_4);
          dVar23 = (param_4 + dVar23 + local_2d8) * local_2e8;
          dVar3 = ((dVar3 - local_2d8) - param_4) * local_2e8;
          dVar33 = (dVar35 + local_2d8 + param_4) * local_2d0;
          dVar28 = (dVar20 + local_2d8 + param_4) * dVar5;
          dVar20 = ((dVar24 - local_2d8) - param_4) * local_2d0;
          dVar35 = ((dVar34 - local_2d8) - param_4) * dVar5;
          dVar34 = dVar20;
          if (dVar33 <= dVar20) {
            dVar34 = dVar33;
          }
          dVar24 = dVar35;
          if (dVar28 <= dVar35) {
            dVar24 = dVar28;
          }
          dVar30 = dVar3;
          if (dVar23 <= dVar3) {
            dVar30 = dVar23;
          }
          if (dVar3 <= dVar23) {
            dVar3 = dVar23;
          }
          if (dVar20 <= dVar33) {
            dVar20 = dVar33;
          }
          if (dVar35 <= dVar28) {
            dVar35 = dVar28;
          }
          local_2e0 = dVar5;
          do {
            lVar11 = (longlong)(int)uStack_150;
            uStack_150 = CONCAT44(uStack_150._4_4_,(int)uStack_150 + -1);
            lVar18 = (longlong)*(int *)((longlong)local_158 + lVar11 * 4 + -4) * 0x50 +
                     *(longlong *)(param_1 + 0xe0);
            lVar11 = 0;
            bVar6 = true;
            do {
              bVar14 = bVar6;
              uVar16 = uStack_150;
              iVar4 = *(int *)(lVar18 + 0x40 + lVar11 * 4);
              uVar19 = (ulonglong)iVar4;
              if (uVar19 != 0xffffffffffffffff) {
                lVar12 = lVar11 * 0x20;
                pfVar2 = (float *)(lVar18 + 0x10 + lVar12);
                pfVar1 = (float *)(lVar18 + lVar12);
                auVar25._4_4_ = -(uint)((float)dVar20 < pfVar1[1]);
                auVar25._0_4_ = -(uint)((float)dVar35 < *pfVar1);
                auVar25._8_4_ = -(uint)((float)dVar3 < pfVar1[2]);
                auVar25._12_4_ = -(uint)(0.0 < pfVar1[3]);
                auVar21._4_4_ = -(uint)(pfVar2[1] < (float)dVar34);
                auVar21._0_4_ = -(uint)(*pfVar2 < (float)dVar24);
                auVar21._8_4_ = -(uint)(pfVar2[2] < (float)dVar30);
                auVar21._12_4_ = -(uint)(pfVar2[3] < 0.0);
                iVar10 = movmskps((int)lVar12,auVar25 | auVar21);
                if (iVar10 == 0) {
                  iVar10 = *(int *)(lVar18 + 0x48 + lVar11 * 4);
                  if (iVar10 == 0) {
                    lVar11 = (longlong)(int)uStack_150;
                    uVar8 = (int)uStack_150 + 1;
                    uStack_150 = CONCAT44(uStack_150._4_4_,uVar8);
                    if (uStack_150._4_4_ < uVar8) {
                      FUN_1446f48e2(&local_158,uVar16 & 0xffffffff);
                    }
                    *(int *)((longlong)local_158 + lVar11 * 4) = iVar4;
                  }
                  else if (0 < iVar10) {
                    uVar16 = uVar19 << 5 | 0x10;
                    do {
                      lVar11 = *(longlong *)(param_1 + 0xf0);
                      pfVar1 = (float *)(lVar11 + uVar16);
                      pfVar2 = (float *)(lVar11 + -0x10 + uVar16);
                      auVar26._4_4_ = -(uint)((float)dVar20 < pfVar2[1]);
                      auVar26._0_4_ = -(uint)((float)dVar35 < *pfVar2);
                      auVar26._8_4_ = -(uint)((float)dVar3 < pfVar2[2]);
                      auVar26._12_4_ = -(uint)(0.0 < pfVar2[3]);
                      auVar22._4_4_ = -(uint)(pfVar1[1] < (float)dVar34);
                      auVar22._0_4_ = -(uint)(*pfVar1 < (float)dVar24);
                      auVar22._8_4_ = -(uint)(pfVar1[2] < (float)dVar30);
                      auVar22._12_4_ = -(uint)(pfVar1[3] < 0.0);
                      iVar9 = movmskps((int)lVar11,auVar26 | auVar22);
                      if ((iVar9 == 0) &&
                         (cVar7 = FUN_1402e79f8(&local_2a8,uVar19 & 0xffffffff), cVar7 == '\0'))
                      goto LAB_1402e7672;
                      uVar19 = uVar19 + 1;
                      uVar16 = uVar16 + 0x20;
                    } while ((longlong)uVar19 < (longlong)(iVar10 + iVar4));
                  }
                }
              }
              lVar11 = 1;
              bVar6 = false;
            } while (bVar14);
          } while ((int)uStack_150 != 0);
        }
LAB_1402e7672:
        if (local_158 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar16 = CONCAT71(uVar13,(undefined1)uStack_260);
    }
    else {
      dVar34 = *(double *)(param_2 + 0x10);
      dVar23 = *(double *)(param_2 + 0x20);
      dVar20 = *(double *)(param_2 + 0x28);
      dVar3 = *(double *)(param_2 + 0x30);
      dVar28 = *(double *)(param_2 + 0x50);
      dVar33 = *(double *)(param_2 + 0x48) * dVar28 + dVar3;
      dVar39 = *(double *)(param_2 + 0x40) * dVar28 + dVar20;
      dVar38 = dVar28 * *(double *)(param_2 + 0x38) + dVar23;
      dVar28 = dVar3;
      if (dVar33 <= dVar3) {
        dVar28 = dVar33;
      }
      dVar32 = dVar20;
      if (dVar39 <= dVar20) {
        dVar32 = dVar39;
      }
      dVar36 = dVar23;
      if (dVar38 <= dVar23) {
        dVar36 = dVar38;
      }
      if (dVar3 <= dVar33) {
        dVar3 = dVar33;
      }
      if (dVar20 <= dVar39) {
        dVar20 = dVar39;
      }
      if (dVar23 <= dVar38) {
        dVar23 = dVar38;
      }
      param_4 = ABS(param_4);
      dVar36 = (dVar36 - dVar34) - param_4;
      dVar33 = (dVar32 - dVar34) - param_4;
      dVar28 = (dVar28 - dVar34) - param_4;
      dVar3 = ((param_4 + dVar3 + dVar34) - dVar28) * 0.5;
      dVar20 = ((dVar20 + dVar34 + param_4) - dVar33) * 0.5;
      dVar23 = ((dVar23 + dVar34 + param_4) - dVar36) * 0.5;
      dVar28 = dVar28 + dVar3;
      dVar33 = dVar33 + dVar20;
      dVar36 = dVar36 + dVar23;
      dVar39 = dVar36 * local_1c8[2] - local_1c8[0] * dVar28;
      dVar34 = dVar33 * local_1c8[0] - local_1c8[1] * dVar36;
      dVar38 = dVar28 * local_1c8[1] - local_1c8[2] * dVar33;
      dVar38 = dVar38 + dVar38;
      dVar39 = dVar39 + dVar39;
      dVar34 = dVar34 + dVar34;
      dVar31 = dVar31 + (local_1c8[2] * dVar38 - local_1c8[0] * dVar34) +
                        local_1c8[3] * dVar39 + dVar33;
      local_198 = dVar30 + dVar34 * local_1c8[3] + dVar28 +
                           (dVar39 * local_1c8[0] - dVar38 * local_1c8[1]);
      local_1a8._8_4_ = SUB84(dVar31,0);
      local_1a8._0_8_ =
           dVar37 + (dVar34 * local_1c8[1] - dVar39 * local_1c8[2]) + local_1c8[3] * dVar38 + dVar36
      ;
      local_1a8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      uStack_190 = 0;
      local_2a8 = (double)CONCAT44((float)dVar24,(float)dVar5);
      dStack_2a0 = (double)CONCAT44(dStack_2a0._4_4_,(float)dVar35);
      local_158 = (undefined8 *)CONCAT44((float)dVar20,(float)dVar23);
      uStack_150 = CONCAT44(uStack_150._4_4_,(float)dVar3);
      FUN_1402e7b1c(local_248,local_1c8,&local_158,&local_2a8);
      local_2a8 = *param_3;
      dStack_2a0 = param_3[1];
      local_298 = param_3[2];
      dStack_290 = param_3[3];
      local_278 = param_3[6] * param_6[2];
      dVar34 = param_3[5] * param_6[1];
      local_288._8_4_ = SUB84(dVar34,0);
      local_288._0_8_ = param_3[4] * *param_6;
      local_288._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
      uStack_270 = 0;
      local_268 = 0x3ff0000000000000;
      uStack_260 = 0x3ff0000000000000;
      local_258 = 0x3ff0000000000000;
      uStack_250 = 0;
      local_308 = &local_108;
      local_108 = CONCAT44((float)param_6[1],(float)*param_6);
      uStack_100 = CONCAT44(uStack_100._4_4_,(float)param_6[2]);
      FUN_1402e8b82(&local_158,&local_2a8,param_2,local_160);
      if (*(int *)(param_1 + 0xe8) != 0) {
        local_108 = 0;
        uStack_100 = 0;
        FUN_14481578e(&local_108,0x10);
        uVar16 = uStack_100;
        lVar11 = (longlong)(int)uStack_100;
        uVar8 = (int)uStack_100 + 1;
        uStack_100 = CONCAT44(uStack_100._4_4_,uVar8);
        if (uStack_100._4_4_ < uVar8) {
          FUN_1446f48e2(&local_108,uVar16 & 0xffffffff);
        }
        *(undefined4 *)(local_108 + lVar11 * 4) = 0;
        if ((int)uStack_100 != 0) {
          do {
            lVar11 = (longlong)(int)uStack_100;
            uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + -1);
            lVar11 = (longlong)*(int *)(local_108 + -4 + lVar11 * 4) * 0x50 +
                     *(longlong *)(param_1 + 0xe0);
            lVar18 = 0;
            bVar6 = true;
            do {
              bVar14 = bVar6;
              iVar4 = *(int *)(lVar11 + 0x40 + lVar18 * 4);
              uVar16 = (ulonglong)iVar4;
              if ((uVar16 != 0xffffffffffffffff) &&
                 (cVar7 = FUN_1402e78fc(local_248,lVar18 * 0x20 + lVar11), uVar19 = uStack_100,
                 cVar7 != '\0')) {
                iVar10 = *(int *)(lVar11 + 0x48 + lVar18 * 4);
                if (iVar10 == 0) {
                  lVar18 = (longlong)(int)uStack_100;
                  uVar8 = (int)uStack_100 + 1;
                  uStack_100 = CONCAT44(uStack_100._4_4_,uVar8);
                  if (uStack_100._4_4_ < uVar8) {
                    FUN_1446f48e2(&local_108,uVar19 & 0xffffffff);
                  }
                  *(int *)(local_108 + lVar18 * 4) = iVar4;
                }
                else if (0 < iVar10) {
                  lVar18 = uVar16 << 5;
                  do {
                    cVar7 = FUN_1402e78fc(local_248,*(longlong *)(param_1 + 0xf0) + lVar18);
                    if ((cVar7 != '\0') &&
                       (cVar7 = FUN_1402e79f8(&local_158,uVar16 & 0xffffffff), cVar7 == '\0'))
                    goto LAB_1402e70d4;
                    uVar16 = uVar16 + 1;
                    lVar18 = lVar18 + 0x20;
                  } while ((longlong)uVar16 < (longlong)(iVar10 + iVar4));
                }
              }
              lVar18 = 1;
              bVar6 = false;
            } while (bVar14);
          } while ((int)uStack_100 != 0);
        }
LAB_1402e70d4:
        if (local_108 != 0) {
          FUN_1400020a8();
        }
      }
      uVar16 = CONCAT71(uVar13,local_110);
    }
  }
  else {
    pdVar15 = param_3;
    pdVar17 = local_248;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar17 = *pdVar15;
      pdVar15 = pdVar15 + 1;
      pdVar17 = pdVar17 + 1;
    }
    local_218 = dVar34 * local_218;
    local_228._8_8_ = dVar20 * (double)local_228._8_8_;
    local_228._0_8_ = dVar23 * (double)local_228._0_8_;
    uStack_210 = 0;
    FUN_144b01956(param_2,&local_2a8);
    param_4 = ABS(param_4);
    dVar20 = ((double)local_288._8_8_ + param_4) * dVar35;
    dVar23 = ((double)local_288._0_8_ + param_4) * dVar24;
    dVar34 = (dStack_290 + param_4) * dVar5;
    local_288._8_8_ = (local_298 - param_4) * dVar35;
    local_288._0_8_ = (dStack_2a0 - param_4) * dVar24;
    dStack_290 = (local_2a8 - param_4) * dVar5;
    local_298 = (double)local_288._8_8_;
    if (dVar20 <= (double)local_288._8_8_) {
      local_298 = dVar20;
    }
    dStack_2a0 = (double)local_288._0_8_;
    if (dVar23 <= (double)local_288._0_8_) {
      dStack_2a0 = dVar23;
    }
    local_2a8 = dStack_290;
    if (dVar34 <= dStack_290) {
      local_2a8 = dVar34;
    }
    if ((double)local_288._8_8_ <= dVar20) {
      local_288._8_8_ = dVar20;
    }
    if ((double)local_288._0_8_ <= dVar23) {
      local_288._0_8_ = dVar23;
    }
    if (dStack_290 <= dVar34) {
      dStack_290 = dVar34;
    }
    FUN_140d8788e(param_1 + 0xe0,&local_108,&local_2a8);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[6] = 0xffefffffffffffff;
    local_198 = param_3[6] * param_6[2];
    local_1c8[0] = *param_3;
    local_1c8[1] = param_3[1];
    local_1c8[2] = param_3[2];
    local_1c8[3] = param_3[3];
    local_138 = local_1c8;
    local_1a8._8_8_ = param_3[5] * param_6[1];
    local_1a8._0_8_ = param_3[4] * *param_6;
    uStack_190 = 0;
    local_188 = 0x3ff0000000000000;
    uStack_180 = 0x3ff0000000000000;
    local_178 = 0x3ff0000000000000;
    uStack_170 = 0;
    local_148 = param_6;
    local_130 = &local_160;
    local_158 = &local_108;
    uStack_150 = param_1;
    local_140 = param_2;
    if (*(char *)(param_1 + 0x80) == '\x01') {
      uVar8 = FUN_146e57a6c(&local_158,param_1 + 0x60,param_5);
    }
    else {
      uVar8 = FUN_146e57d3c(&local_158,param_1 + 0x70,param_5);
    }
    uVar16 = (ulonglong)uVar8;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 1402e78fc FUN_1402e78fc body=251 status=ok
// SIG undefined FUN_1402e78fc(void)

undefined8 FUN_1402e78fc(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  int iVar4;
  uint uVar5;
  undefined8 in_RAX;
  undefined8 uVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar7 = *param_2;
  fVar13 = param_2[1];
  fVar15 = param_2[2];
  fVar12 = param_2[4];
  fVar14 = param_2[5];
  fVar3 = param_2[6];
  auVar8._4_4_ = -(uint)(fVar14 < param_1[0x19]);
  auVar8._0_4_ = -(uint)(fVar12 < param_1[0x18]);
  auVar8._8_4_ = -(uint)(fVar3 < param_1[0x1a]);
  auVar8._12_4_ = -(uint)(param_2[7] < param_1[0x1b]);
  auVar1._4_4_ = -(uint)(param_1[0x15] < fVar13);
  auVar1._0_4_ = -(uint)(param_1[0x14] < fVar7);
  auVar1._8_4_ = -(uint)(param_1[0x16] < fVar15);
  auVar1._12_4_ = -(uint)(param_1[0x17] < param_2[3]);
  iVar4 = movmskps((int)in_RAX,auVar8 | auVar1);
  if (iVar4 == 0) {
    fVar9 = (fVar12 - fVar7) * 0.5;
    fVar10 = (fVar14 - fVar13) * 0.5;
    fVar11 = (fVar3 - fVar15) * 0.5;
    fVar12 = (fVar7 + fVar12) * 0.5 - *param_1;
    fVar14 = (fVar13 + fVar14) * 0.5 - param_1[1];
    fVar15 = (fVar15 + fVar3) * 0.5 - param_1[2];
    fVar13 = fVar15 * param_1[0xe] + fVar12 * param_1[0xc] + fVar14 * param_1[0xd];
    fVar7 = ABS(param_1[0xe]) * fVar11 + ABS(param_1[0xc]) * fVar9 + ABS(param_1[0xd]) * fVar10;
    auVar2._4_4_ = -(uint)(param_1[0x11] <
                          ABS(fVar12 * param_1[8] + fVar14 * param_1[9] + fVar15 * param_1[10]) -
                          (ABS(param_1[8]) * fVar9 + ABS(param_1[9]) * fVar10 +
                          ABS(param_1[10]) * fVar11));
    auVar2._0_4_ = -(uint)(param_1[0x10] <
                          ABS(param_1[4] * fVar12 + param_1[5] * fVar14 + param_1[6] * fVar15) -
                          (ABS(param_1[4]) * fVar9 + ABS(param_1[5]) * fVar10 +
                          ABS(param_1[6]) * fVar11));
    auVar2._8_4_ = -(uint)(param_1[0x12] < ABS(fVar13) - fVar7);
    auVar2._12_4_ = -(uint)(param_1[0x13] < ABS(fVar13) - fVar7);
    uVar5 = movmskps(0,auVar2);
    uVar6 = CONCAT71((int7)(CONCAT44((int)((ulonglong)in_RAX >> 0x20),uVar5) >> 8),(uVar5 & 7) == 0)
    ;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 1402e79f8 FUN_1402e79f8 body=291 status=ok
// SIG undefined FUN_1402e79f8(void)

ulonglong FUN_1402e79f8(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar4 = (longlong)param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar1 + 0x80) == '\x01') {
    lVar1 = *(longlong *)(lVar1 + 0x60);
    lVar5 = (longlong)*(int *)(lVar1 + lVar4 * 0xc);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(lVar2 + lVar5 * 0xc);
    auVar6 = insertps(auVar6,*(undefined4 *)(lVar2 + 8 + lVar5 * 0xc),0x28);
    lVar5 = (longlong)*(int *)(lVar1 + 4 + lVar4 * 0xc);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(lVar2 + lVar5 * 0xc);
    auVar8 = insertps(auVar8,*(undefined4 *)(lVar2 + 8 + lVar5 * 0xc),0x28);
    uVar3 = (ulonglong)*(int *)(lVar1 + 8 + lVar4 * 0xc);
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x70);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + lVar4 * 6);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
    auVar6 = insertps(auVar10,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 2 + lVar4 * 6);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
    auVar8 = insertps(auVar7,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 4 + lVar4 * 6);
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
  auVar10 = insertps(auVar9,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
  local_48 = (float)param_1[0xc];
  fStack_44 = (float)param_1[0xd];
  fStack_40 = (float)param_1[0xe];
  fStack_3c = (float)param_1[0xf];
  local_28 = auVar6._0_4_ * local_48;
  fStack_24 = auVar6._4_4_ * fStack_44;
  fStack_20 = auVar6._8_4_ * fStack_40;
  fStack_1c = auVar6._12_4_ * fStack_3c;
  local_38 = auVar8._0_4_ * local_48;
  fStack_34 = auVar8._4_4_ * fStack_44;
  fStack_30 = auVar8._8_4_ * fStack_40;
  fStack_2c = auVar8._12_4_ * fStack_3c;
  local_48 = auVar10._0_4_ * local_48;
  fStack_44 = auVar10._4_4_ * fStack_44;
  fStack_40 = auVar10._8_4_ * fStack_40;
  fStack_3c = auVar10._12_4_ * fStack_3c;
  local_50 = *param_1;
  local_58 = param_1 + 8;
  uVar3 = FUN_1402e7e35(&local_28,&local_38,&local_48,param_1 + 4);
  *(char *)(param_1 + 0x12) = (char)uVar3;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402e7b1c FUN_1402e7b1c body=458 status=ok
// SIG undefined FUN_1402e7b1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1402e7b1c(undefined1 (*param_1) [16],double *param_2,ulonglong *param_3,ulonglong *param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_e8 [32];
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_bc = (float)param_2[3];
  local_c0 = (float)param_2[2];
  local_c4 = (float)param_2[1];
  local_c8 = (float)*param_2;
  auVar11 = ZEXT816(0);
  local_b8 = auVar11;
  local_a8 = auVar11;
  local_98 = auVar11;
  local_88 = auVar11;
  FUN_1402e7ce8(&local_c8,local_b8);
  auVar2 = blendps(local_b8,auVar11,8);
  param_1[1] = auVar2;
  auVar3 = blendps(local_a8,auVar11,8);
  param_1[2] = auVar3;
  auVar14 = blendps(auVar11,local_98,7);
  param_1[3] = auVar14;
  dVar1 = param_2[6];
  auVar11._0_4_ = (float)param_2[4];
  auVar11._4_4_ = (float)param_2[5];
  auVar11._8_4_ = (float)dVar1;
  auVar11._12_4_ = 0;
  *param_1 = auVar11;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *param_4;
  auVar8 = insertps(auVar8,(int)param_4[1],0x28);
  param_1[7] = auVar8;
  fVar4 = auVar11._0_4_ * auVar8._0_4_;
  fVar5 = auVar11._4_4_ * auVar8._4_4_;
  fVar6 = (float)dVar1 * auVar8._8_4_;
  fVar7 = auVar8._12_4_ * 0.0;
  *(float *)*param_1 = fVar4;
  *(float *)(*param_1 + 4) = fVar5;
  *(float *)(*param_1 + 8) = fVar6;
  *(float *)(*param_1 + 0xc) = fVar7;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *param_3;
  auVar11 = insertps(auVar10,(int)param_3[1],0x28);
  fVar9 = auVar11._0_4_ + 0.0001;
  fVar12 = auVar11._4_4_ + 0.0001;
  fVar13 = auVar11._8_4_ + 0.0001;
  *(float *)param_1[4] = fVar9;
  *(float *)(param_1[4] + 4) = fVar12;
  *(float *)(param_1[4] + 8) = fVar13;
  *(float *)(param_1[4] + 0xc) = auVar11._12_4_ + 0.0001;
  fVar15 = ABS(auVar8._0_4_) *
           (ABS(auVar2._0_4_) * fVar9 + ABS(auVar3._0_4_) * fVar12 + ABS(auVar14._0_4_) * fVar13);
  fVar16 = ABS(auVar8._4_4_) *
           (ABS(auVar2._4_4_) * fVar9 + ABS(auVar3._4_4_) * fVar12 + ABS(auVar14._4_4_) * fVar13);
  fVar17 = ABS(auVar8._8_4_) *
           (ABS(auVar2._8_4_) * fVar9 + ABS(auVar3._8_4_) * fVar12 + ABS(auVar14._8_4_) * fVar13);
  fVar9 = ABS(auVar8._12_4_) *
          (ABS(auVar2._12_4_) * fVar9 + ABS(auVar3._12_4_) * fVar12 + ABS(auVar14._12_4_) * fVar13);
  *(float *)param_1[5] = fVar4 + fVar15;
  *(float *)(param_1[5] + 4) = fVar5 + fVar16;
  *(float *)(param_1[5] + 8) = fVar6 + fVar17;
  *(float *)(param_1[5] + 0xc) = fVar7 + fVar9;
  *(float *)param_1[6] = fVar4 - fVar15;
  *(float *)(param_1[6] + 4) = fVar5 - fVar16;
  *(float *)(param_1[6] + 8) = fVar6 - fVar17;
  *(float *)(param_1[6] + 0xc) = fVar7 - fVar9;
  auVar11 = divps(_DAT_1499314a0,auVar8);
  fVar4 = auVar11._0_4_;
  fVar5 = auVar11._4_4_;
  fVar6 = auVar11._8_4_;
  fVar7 = auVar11._12_4_;
  *(float *)param_1[1] = auVar2._0_4_ * fVar4;
  *(float *)(param_1[1] + 4) = auVar2._4_4_ * fVar5;
  *(float *)(param_1[1] + 8) = auVar2._8_4_ * fVar6;
  *(float *)(param_1[1] + 0xc) = auVar2._12_4_ * fVar7;
  *(float *)param_1[2] = auVar3._0_4_ * fVar4;
  *(float *)(param_1[2] + 4) = auVar3._4_4_ * fVar5;
  *(float *)(param_1[2] + 8) = auVar3._8_4_ * fVar6;
  *(float *)(param_1[2] + 0xc) = auVar3._12_4_ * fVar7;
  *(float *)param_1[3] = fVar4 * auVar14._0_4_;
  *(float *)(param_1[3] + 4) = fVar5 * auVar14._4_4_;
  *(float *)(param_1[3] + 8) = fVar6 * auVar14._8_4_;
  *(float *)(param_1[3] + 0xc) = fVar7 * auVar14._12_4_;
  if ((local_70 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402e7ce8 FUN_1402e7ce8 body=333 status=ok
// SIG undefined FUN_1402e7ce8(void)

void FUN_1402e7ce8(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar7 = fVar2 + fVar2;
  fVar3 = param_1[2];
  fVar8 = fVar3 + fVar3;
  fVar6 = fVar1 * (fVar1 + fVar1);
  fVar4 = param_1[3];
  fVar5 = (fVar1 + fVar1) * fVar4;
  *param_2 = 1.0 - (fVar2 * fVar7 + fVar3 * fVar8);
  param_2[4] = fVar1 * fVar7 - fVar8 * fVar4;
  param_2[8] = fVar1 * fVar8 + fVar7 * fVar4;
  param_2[1] = fVar8 * fVar4 + fVar1 * fVar7;
  param_2[5] = 1.0 - (fVar3 * fVar8 + fVar6);
  param_2[9] = fVar2 * fVar8 - fVar5;
  param_2[0xd] = 0.0;
  param_2[2] = fVar1 * fVar8 - fVar7 * fVar4;
  param_2[6] = fVar5 + fVar2 * fVar8;
  param_2[10] = 1.0 - (fVar2 * fVar7 + fVar6);
  param_2[0xe] = 0.0;
  param_2[0xf] = 1.0;
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  return;
}



// FUNCTION 1402e7e35 FUN_1402e7e35 body=3405 status=ok
// SIG undefined FUN_1402e7e35(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1402e7e35(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar21;
  float fVar25;
  float fVar29;
  undefined1 auVar14 [16];
  float fVar22;
  float fVar26;
  float fVar30;
  undefined1 auVar15 [16];
  float fVar23;
  float fVar27;
  float fVar31;
  undefined1 auVar16 [16];
  float fVar24;
  float fVar28;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar37;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar50;
  float fVar51;
  float fVar54;
  float fVar55;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar56;
  float fVar59;
  float fVar61;
  float fVar62;
  float fVar65;
  undefined1 auVar57 [16];
  float fVar60;
  float fVar63;
  float fVar64;
  undefined1 auVar58 [16];
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar80;
  undefined1 auVar71 [16];
  float fVar79;
  float fVar81;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
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
  float fVar97;
  float fVar98;
  float fVar99;
  
  fVar85 = *param_4;
  fVar87 = param_4[1];
  fVar89 = param_4[2];
  fVar40 = param_4[3];
  fVar60 = *param_1;
  fVar63 = param_1[1];
  fVar64 = param_1[2];
  fVar31 = param_1[3];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar93 = param_2[3];
  fVar70 = fVar3 - fVar60;
  fVar76 = fVar4 - fVar63;
  fVar77 = fVar5 - fVar64;
  fVar80 = fVar93 - fVar31;
  fVar6 = *param_3;
  fVar7 = param_3[1];
  fVar8 = param_3[2];
  fVar67 = param_3[3];
  fVar96 = fVar6 - fVar3;
  fVar97 = fVar7 - fVar4;
  fVar98 = fVar8 - fVar5;
  fVar99 = fVar67 - fVar93;
  fVar84 = fVar60 - fVar6;
  fVar86 = fVar63 - fVar7;
  fVar88 = fVar64 - fVar8;
  fVar90 = fVar31 - fVar67;
  fVar11 = fVar70 * fVar97 - fVar76 * fVar96;
  fVar21 = fVar76 * fVar98 - fVar77 * fVar97;
  fVar25 = fVar77 * fVar96 - fVar70 * fVar98;
  fVar29 = fVar80 * fVar99 - fVar80 * fVar99;
  auVar14._0_4_ = fVar25 * fVar25 + fVar21 * fVar21;
  auVar14._4_4_ = fVar21 * fVar21 + fVar25 * fVar25;
  auVar14._8_4_ = fVar29 * fVar29 + fVar11 * fVar11;
  auVar14._12_4_ = fVar11 * fVar11 + fVar29 * fVar29;
  auVar39._0_4_ = auVar14._8_4_ + auVar14._0_4_;
  auVar39._4_4_ = auVar14._12_4_ + auVar14._4_4_;
  auVar39._8_4_ = auVar14._0_4_ + auVar14._8_4_;
  auVar39._12_4_ = auVar14._4_4_ + auVar14._12_4_;
  auVar14 = sqrtps(auVar14,auVar39);
  auVar14 = divps(_DAT_1499314a0,auVar14);
  fVar21 = auVar14._0_4_ * fVar21;
  fVar25 = auVar14._4_4_ * fVar25;
  fVar11 = auVar14._8_4_ * fVar11;
  fVar29 = auVar14._12_4_ * fVar29;
  fVar12 = fVar84 * fVar25 - fVar86 * fVar21;
  fVar22 = fVar86 * fVar11 - fVar88 * fVar25;
  fVar26 = fVar88 * fVar21 - fVar84 * fVar11;
  fVar30 = fVar90 * fVar29 - fVar90 * fVar29;
  fVar30 = fVar30 * fVar30;
  auVar15._0_4_ = fVar26 * fVar26 + fVar22 * fVar22;
  auVar15._4_4_ = fVar22 * fVar22 + fVar26 * fVar26;
  auVar15._8_4_ = fVar30 + fVar12 * fVar12;
  auVar15._12_4_ = fVar12 * fVar12 + fVar30;
  auVar42._0_4_ = auVar15._8_4_ + auVar15._0_4_;
  auVar42._4_4_ = auVar15._12_4_ + auVar15._4_4_;
  auVar42._8_4_ = auVar15._0_4_ + auVar15._8_4_;
  auVar42._12_4_ = auVar15._4_4_ + auVar15._12_4_;
  auVar14 = sqrtps(auVar15,auVar42);
  auVar14 = divps(_DAT_1499314a0,auVar14);
  fVar56 = fVar85 - fVar60;
  fVar59 = fVar87 - fVar63;
  fVar61 = fVar89 - fVar64;
  fVar22 = auVar14._0_4_ * fVar22;
  fVar26 = auVar14._4_4_ * fVar26;
  fVar12 = auVar14._8_4_ * fVar12;
  fVar30 = *param_5;
  fVar62 = param_5[1];
  fVar65 = param_5[2];
  fVar37 = param_5[3];
  fVar66 = fVar30 - fVar60;
  fVar68 = fVar62 - fVar63;
  fVar69 = fVar65 - fVar64;
  fVar13 = fVar61 * fVar12 + fVar56 * fVar22 + fVar59 * fVar26;
  fVar41 = fVar69 * fVar12 + fVar66 * fVar22 + fVar68 * fVar26;
  if (fVar41 <= fVar13) {
    fVar13 = fVar41;
  }
  if (param_6 < fVar13) {
    return 0;
  }
  if (0.0 < fVar13) {
    fVar13 = fVar56 * fVar86 - fVar59 * fVar84;
    fVar23 = fVar59 * fVar88 - fVar61 * fVar86;
    fVar24 = fVar61 * fVar84 - fVar56 * fVar88;
    fVar27 = (fVar40 - fVar31) * fVar90 - (fVar40 - fVar31) * fVar90;
    fVar41 = fVar24 * fVar84 - fVar23 * fVar86;
    fVar24 = fVar13 * fVar86 - fVar24 * fVar88;
    fVar23 = fVar23 * fVar88 - fVar13 * fVar84;
    fVar13 = fVar27 * fVar90 - fVar27 * fVar90;
    fVar13 = fVar13 * fVar13;
    auVar35._0_4_ = fVar23 * fVar23 + fVar24 * fVar24;
    auVar35._4_4_ = fVar24 * fVar24 + fVar23 * fVar23;
    auVar35._8_4_ = fVar13 + fVar41 * fVar41;
    auVar35._12_4_ = fVar41 * fVar41 + fVar13;
    auVar48._0_4_ = auVar35._8_4_ + auVar35._0_4_;
    auVar48._4_4_ = auVar35._12_4_ + auVar35._4_4_;
    auVar48._8_4_ = auVar35._0_4_ + auVar35._8_4_;
    auVar48._12_4_ = auVar35._4_4_ + auVar35._12_4_;
    auVar14 = sqrtps(auVar35,auVar48);
    auVar14 = divps(_DAT_1499314a0,auVar14);
    fVar24 = auVar14._0_4_ * fVar24;
    fVar23 = auVar14._4_4_ * fVar23;
    fVar41 = auVar14._8_4_ * fVar41;
    fVar13 = fVar61 * fVar41 + fVar56 * fVar24 + fVar59 * fVar23;
    fVar41 = fVar41 * fVar69 + fVar24 * fVar66 + fVar23 * fVar68;
    if (fVar41 <= fVar13) {
      fVar13 = fVar41;
    }
    if (param_6 < fVar13) {
      return 0;
    }
    fVar13 = fVar66 * fVar86 - fVar68 * fVar84;
    fVar23 = fVar68 * fVar88 - fVar69 * fVar86;
    fVar24 = fVar69 * fVar84 - fVar66 * fVar88;
    fVar31 = (fVar37 - fVar31) * fVar90 - (fVar37 - fVar31) * fVar90;
    fVar41 = fVar24 * fVar84 - fVar23 * fVar86;
    fVar24 = fVar13 * fVar86 - fVar24 * fVar88;
    fVar13 = fVar23 * fVar88 - fVar13 * fVar84;
    fVar31 = fVar31 * fVar90 - fVar31 * fVar90;
    fVar31 = fVar31 * fVar31;
    auVar36._0_4_ = fVar13 * fVar13 + fVar24 * fVar24;
    auVar36._4_4_ = fVar24 * fVar24 + fVar13 * fVar13;
    auVar36._8_4_ = fVar31 + fVar41 * fVar41;
    auVar36._12_4_ = fVar41 * fVar41 + fVar31;
    auVar49._0_4_ = auVar36._8_4_ + auVar36._0_4_;
    auVar49._4_4_ = auVar36._12_4_ + auVar36._4_4_;
    auVar49._8_4_ = auVar36._0_4_ + auVar36._8_4_;
    auVar49._12_4_ = auVar36._4_4_ + auVar36._12_4_;
    auVar14 = sqrtps(auVar36,auVar49);
    auVar14 = divps(_DAT_1499314a0,auVar14);
    fVar24 = auVar14._0_4_ * fVar24;
    fVar13 = auVar14._4_4_ * fVar13;
    fVar41 = auVar14._8_4_ * fVar41;
    fVar31 = fVar61 * fVar41 + fVar56 * fVar24 + fVar59 * fVar13;
    fVar13 = fVar41 * fVar69 + fVar24 * fVar66 + fVar13 * fVar68;
    if (fVar13 <= fVar31) {
      fVar31 = fVar13;
    }
    if (param_6 < fVar31) {
      return 0;
    }
  }
  fVar50 = fVar85 - fVar3;
  fVar54 = fVar87 - fVar4;
  fVar55 = fVar89 - fVar5;
  fVar13 = fVar70 * fVar25 - fVar76 * fVar21;
  fVar23 = fVar76 * fVar11 - fVar77 * fVar25;
  fVar27 = fVar77 * fVar21 - fVar70 * fVar11;
  fVar31 = fVar80 * fVar29 - fVar80 * fVar29;
  fVar31 = fVar31 * fVar31;
  auVar16._0_4_ = fVar27 * fVar27 + fVar23 * fVar23;
  auVar16._4_4_ = fVar23 * fVar23 + fVar27 * fVar27;
  auVar16._8_4_ = fVar31 + fVar13 * fVar13;
  auVar16._12_4_ = fVar13 * fVar13 + fVar31;
  auVar43._0_4_ = auVar16._8_4_ + auVar16._0_4_;
  auVar43._4_4_ = auVar16._12_4_ + auVar16._4_4_;
  auVar43._8_4_ = auVar16._0_4_ + auVar16._8_4_;
  auVar43._12_4_ = auVar16._4_4_ + auVar16._12_4_;
  auVar14 = sqrtps(auVar16,auVar43);
  auVar14 = divps(_DAT_1499314a0,auVar14);
  fVar23 = auVar14._0_4_ * fVar23;
  fVar27 = auVar14._4_4_ * fVar27;
  fVar13 = auVar14._8_4_ * fVar13;
  fVar31 = fVar55 * fVar13 + fVar50 * fVar23 + fVar54 * fVar27;
  fVar41 = fVar30 - fVar3;
  fVar24 = fVar62 - fVar4;
  fVar28 = fVar65 - fVar5;
  fVar51 = fVar28 * fVar13 + fVar41 * fVar23 + fVar24 * fVar27;
  if (fVar51 <= fVar31) {
    fVar31 = fVar51;
  }
  if (param_6 < fVar31) {
    return 0;
  }
  if (0.0 < fVar31) {
    fVar31 = fVar50 * fVar76 - fVar54 * fVar70;
    fVar78 = fVar54 * fVar77 - fVar55 * fVar76;
    fVar92 = fVar55 * fVar70 - fVar50 * fVar77;
    fVar94 = (fVar40 - fVar93) * fVar80 - (fVar40 - fVar93) * fVar80;
    fVar51 = fVar92 * fVar70 - fVar78 * fVar76;
    fVar92 = fVar31 * fVar76 - fVar92 * fVar77;
    fVar78 = fVar78 * fVar77 - fVar31 * fVar70;
    fVar31 = fVar94 * fVar80 - fVar94 * fVar80;
    fVar31 = fVar31 * fVar31;
    auVar52._0_4_ = fVar78 * fVar78 + fVar92 * fVar92;
    auVar52._4_4_ = fVar92 * fVar92 + fVar78 * fVar78;
    auVar52._8_4_ = fVar31 + fVar51 * fVar51;
    auVar52._12_4_ = fVar51 * fVar51 + fVar31;
    auVar74._0_4_ = auVar52._8_4_ + auVar52._0_4_;
    auVar74._4_4_ = auVar52._12_4_ + auVar52._4_4_;
    auVar74._8_4_ = auVar52._0_4_ + auVar52._8_4_;
    auVar74._12_4_ = auVar52._4_4_ + auVar52._12_4_;
    auVar14 = sqrtps(auVar52,auVar74);
    auVar14 = divps(_DAT_1499314a0,auVar14);
    fVar92 = auVar14._0_4_ * fVar92;
    fVar78 = auVar14._4_4_ * fVar78;
    fVar51 = auVar14._8_4_ * fVar51;
    fVar31 = fVar55 * fVar51 + fVar50 * fVar92 + fVar54 * fVar78;
    fVar51 = fVar51 * fVar28 + fVar92 * fVar41 + fVar78 * fVar24;
    if (fVar51 <= fVar31) {
      fVar31 = fVar51;
    }
    if (param_6 < fVar31) {
      return 0;
    }
    fVar31 = fVar41 * fVar76 - fVar24 * fVar70;
    fVar51 = fVar24 * fVar77 - fVar28 * fVar76;
    fVar78 = fVar28 * fVar70 - fVar41 * fVar77;
    fVar92 = (fVar37 - fVar93) * fVar80 - (fVar37 - fVar93) * fVar80;
    fVar93 = fVar78 * fVar70 - fVar51 * fVar76;
    fVar78 = fVar31 * fVar76 - fVar78 * fVar77;
    fVar51 = fVar51 * fVar77 - fVar31 * fVar70;
    fVar31 = fVar92 * fVar80 - fVar92 * fVar80;
    fVar31 = fVar31 * fVar31;
    auVar53._0_4_ = fVar51 * fVar51 + fVar78 * fVar78;
    auVar53._4_4_ = fVar78 * fVar78 + fVar51 * fVar51;
    auVar53._8_4_ = fVar31 + fVar93 * fVar93;
    auVar53._12_4_ = fVar93 * fVar93 + fVar31;
    auVar75._0_4_ = auVar53._8_4_ + auVar53._0_4_;
    auVar75._4_4_ = auVar53._12_4_ + auVar53._4_4_;
    auVar75._8_4_ = auVar53._0_4_ + auVar53._8_4_;
    auVar75._12_4_ = auVar53._4_4_ + auVar53._12_4_;
    auVar14 = sqrtps(auVar53,auVar75);
    auVar14 = divps(_DAT_1499314a0,auVar14);
    fVar78 = auVar14._0_4_ * fVar78;
    fVar51 = auVar14._4_4_ * fVar51;
    fVar93 = auVar14._8_4_ * fVar93;
    fVar31 = fVar55 * fVar93 + fVar50 * fVar78 + fVar54 * fVar51;
    fVar93 = fVar93 * fVar28 + fVar78 * fVar41 + fVar51 * fVar24;
    if (fVar93 <= fVar31) {
      fVar31 = fVar93;
    }
    if (param_6 < fVar31) {
      return 0;
    }
  }
  fVar28 = fVar85 - fVar6;
  fVar51 = fVar87 - fVar7;
  fVar78 = fVar89 - fVar8;
  fVar91 = fVar25 * fVar96 - fVar97 * fVar21;
  fVar92 = fVar11 * fVar97 - fVar98 * fVar25;
  fVar94 = fVar21 * fVar98 - fVar96 * fVar11;
  fVar41 = fVar29 * fVar99 - fVar99 * fVar29;
  fVar41 = fVar41 * fVar41;
  fVar31 = fVar94 * fVar94 + fVar92 * fVar92;
  fVar93 = fVar92 * fVar92 + fVar94 * fVar94;
  fVar29 = fVar41 + fVar91 * fVar91;
  fVar41 = fVar91 * fVar91 + fVar41;
  auVar32._0_4_ = fVar29 + fVar31;
  auVar32._4_4_ = fVar41 + fVar93;
  auVar32._8_4_ = fVar31 + fVar29;
  auVar32._12_4_ = fVar93 + fVar41;
  auVar14 = sqrtps(auVar32,auVar32);
  auVar14 = divps(_DAT_1499314a0,auVar14);
  fVar92 = auVar14._0_4_ * fVar92;
  fVar94 = auVar14._4_4_ * fVar94;
  fVar91 = auVar14._8_4_ * fVar91;
  fVar31 = fVar78 * fVar91 + fVar28 * fVar92 + fVar51 * fVar94;
  fVar93 = fVar30 - fVar6;
  fVar29 = fVar62 - fVar7;
  fVar41 = fVar65 - fVar8;
  fVar24 = fVar41 * fVar91 + fVar93 * fVar92 + fVar29 * fVar94;
  if (fVar24 <= fVar31) {
    fVar31 = fVar24;
  }
  if (param_6 < fVar31) {
    return 0;
  }
  if (0.0 < fVar31) {
    fVar31 = fVar28 * fVar97 - fVar51 * fVar96;
    fVar95 = fVar51 * fVar98 - fVar78 * fVar97;
    fVar79 = fVar78 * fVar96 - fVar28 * fVar98;
    fVar81 = (fVar40 - fVar67) * fVar99 - (fVar40 - fVar67) * fVar99;
    fVar24 = fVar79 * fVar96 - fVar95 * fVar97;
    fVar79 = fVar31 * fVar97 - fVar79 * fVar98;
    fVar95 = fVar95 * fVar98 - fVar31 * fVar96;
    fVar31 = fVar81 * fVar99 - fVar81 * fVar99;
    fVar31 = fVar31 * fVar31;
    auVar72._0_4_ = fVar95 * fVar95 + fVar79 * fVar79;
    auVar72._4_4_ = fVar79 * fVar79 + fVar95 * fVar95;
    auVar72._8_4_ = fVar31 + fVar24 * fVar24;
    auVar72._12_4_ = fVar24 * fVar24 + fVar31;
    auVar82._0_4_ = auVar72._8_4_ + auVar72._0_4_;
    auVar82._4_4_ = auVar72._12_4_ + auVar72._4_4_;
    auVar82._8_4_ = auVar72._0_4_ + auVar72._8_4_;
    auVar82._12_4_ = auVar72._4_4_ + auVar72._12_4_;
    auVar14 = sqrtps(auVar72,auVar82);
    auVar14 = divps(_DAT_1499314a0,auVar14);
    fVar79 = auVar14._0_4_ * fVar79;
    fVar95 = auVar14._4_4_ * fVar95;
    fVar24 = auVar14._8_4_ * fVar24;
    fVar31 = fVar78 * fVar24 + fVar28 * fVar79 + fVar51 * fVar95;
    fVar24 = fVar24 * fVar41 + fVar79 * fVar93 + fVar95 * fVar29;
    if (fVar24 <= fVar31) {
      fVar31 = fVar24;
    }
    if (param_6 < fVar31) {
      return 0;
    }
    fVar31 = fVar93 * fVar97 - fVar29 * fVar96;
    fVar24 = fVar29 * fVar98 - fVar41 * fVar97;
    fVar95 = fVar41 * fVar96 - fVar93 * fVar98;
    fVar79 = (fVar37 - fVar67) * fVar99 - (fVar37 - fVar67) * fVar99;
    fVar67 = fVar95 * fVar96 - fVar24 * fVar97;
    fVar95 = fVar31 * fVar97 - fVar95 * fVar98;
    fVar24 = fVar24 * fVar98 - fVar31 * fVar96;
    fVar31 = fVar79 * fVar99 - fVar79 * fVar99;
    fVar31 = fVar31 * fVar31;
    auVar73._0_4_ = fVar24 * fVar24 + fVar95 * fVar95;
    auVar73._4_4_ = fVar95 * fVar95 + fVar24 * fVar24;
    auVar73._8_4_ = fVar31 + fVar67 * fVar67;
    auVar73._12_4_ = fVar67 * fVar67 + fVar31;
    auVar83._0_4_ = auVar73._8_4_ + auVar73._0_4_;
    auVar83._4_4_ = auVar73._12_4_ + auVar73._4_4_;
    auVar83._8_4_ = auVar73._0_4_ + auVar73._8_4_;
    auVar83._12_4_ = auVar73._4_4_ + auVar73._12_4_;
    auVar14 = sqrtps(auVar73,auVar83);
    auVar14 = divps(_DAT_1499314a0,auVar14);
    fVar95 = auVar14._0_4_ * fVar95;
    fVar24 = auVar14._4_4_ * fVar24;
    fVar67 = auVar14._8_4_ * fVar67;
    fVar31 = fVar78 * fVar67 + fVar28 * fVar95 + fVar51 * fVar24;
    fVar93 = fVar67 * fVar41 + fVar95 * fVar93 + fVar24 * fVar29;
    if (fVar93 <= fVar31) {
      fVar31 = fVar93;
    }
    if (param_6 < fVar31) {
      return 0;
    }
  }
  fVar93 = fVar61 * fVar11 + fVar56 * fVar21 + fVar59 * fVar25;
  fVar67 = fVar69 * fVar11 + fVar66 * fVar21 + fVar68 * fVar25;
  fVar11 = (float)(-(uint)(0.0 < fVar93) & 0x3f800000 |
                  ~-(uint)(0.0 < fVar93) & -(uint)(fVar93 < 0.0) & 0xbf800000);
  fVar31 = (float)(-(uint)(0.0 < fVar67) & 0x3f800000 |
                  ~-(uint)(0.0 < fVar67) & -(uint)(fVar67 < 0.0) & 0xbf800000);
  if ((fVar11 == fVar31) && (!NAN(fVar11) && !NAN(fVar31))) {
    fVar31 = ABS(fVar93);
    if (ABS(fVar67) <= ABS(fVar93)) {
      fVar31 = ABS(fVar67);
    }
    if (param_6 < fVar31) {
      return 0;
    }
  }
  fVar29 = fVar85 - fVar30;
  fVar41 = fVar87 - fVar62;
  fVar66 = fVar89 - fVar65;
  fVar40 = fVar40 - fVar37;
  fVar68 = fVar66 * fVar66 + fVar29 * fVar29 + fVar41 * fVar41;
  auVar33._0_4_ = (fVar66 * fVar61 + fVar29 * fVar56 + fVar41 * fVar59) / fVar68;
  auVar33._4_4_ = auVar33._0_4_;
  auVar33._8_4_ = auVar33._0_4_;
  auVar33._12_4_ = auVar33._0_4_;
  auVar17._0_12_ = ZEXT812(0);
  auVar17._12_4_ = 0;
  auVar14 = maxps(auVar33,auVar17);
  auVar14 = minps(auVar14,_DAT_1499314a0);
  uVar9 = -(uint)(fVar68 != 0.0);
  fVar93 = (float)(auVar14._0_4_ & uVar9);
  fVar67 = (float)(auVar14._4_4_ & uVar9);
  fVar37 = (float)(auVar14._8_4_ & uVar9);
  fVar31 = (float)DAT_1499314a0;
  fVar21 = DAT_1499314a0._4_4_;
  fVar25 = DAT_1499314a0._8_4_;
  fVar69 = ((fVar31 - fVar93) * fVar85 + fVar30 * fVar93) - fVar60;
  fVar24 = ((fVar21 - fVar67) * fVar87 + fVar62 * fVar67) - fVar63;
  fVar95 = ((fVar25 - fVar37) * fVar89 + fVar65 * fVar37) - fVar64;
  fVar93 = (fVar60 + fVar3 + fVar6) * 0.33333334;
  fVar67 = (fVar63 + fVar4 + fVar7) * 0.33333334;
  fVar37 = (fVar64 + fVar5 + fVar8) * 0.33333334;
  fVar11 = param_6 * param_6;
  if (((0.0 <= (fVar95 * fVar27 - fVar13 * fVar24) * (fVar26 * fVar95 - fVar12 * fVar24) +
               (fVar69 * fVar13 - fVar23 * fVar95) * (fVar12 * fVar69 - fVar22 * fVar95) +
               (fVar24 * fVar23 - fVar27 * fVar69) * (fVar22 * fVar24 - fVar26 * fVar69)) ||
      ((fVar64 - fVar37) * fVar95 + (fVar60 - fVar93) * fVar69 + (fVar63 - fVar67) * fVar24 <= 0.0))
     || (fVar95 * fVar95 + fVar69 * fVar69 + fVar24 * fVar24 <= fVar11)) {
    auVar34._0_4_ = (fVar66 * fVar55 + fVar29 * fVar50 + fVar41 * fVar54) / fVar68;
    auVar34._4_4_ = auVar34._0_4_;
    auVar34._8_4_ = auVar34._0_4_;
    auVar34._12_4_ = auVar34._0_4_;
    auVar14 = maxps(auVar34,_DAT_149931140);
    auVar14 = minps(auVar14,_DAT_1499314a0);
    fVar69 = (float)(auVar14._0_4_ & uVar9);
    fVar24 = (float)(auVar14._4_4_ & uVar9);
    fVar95 = (float)(auVar14._8_4_ & uVar9);
    fVar69 = ((fVar31 - fVar69) * fVar85 + fVar30 * fVar69) - fVar3;
    fVar24 = ((fVar21 - fVar24) * fVar87 + fVar62 * fVar24) - fVar4;
    fVar95 = ((fVar25 - fVar95) * fVar89 + fVar65 * fVar95) - fVar5;
    if (((0.0 <= (fVar27 * fVar95 - fVar13 * fVar24) * (fVar94 * fVar95 - fVar91 * fVar24) +
                 (fVar13 * fVar69 - fVar23 * fVar95) * (fVar91 * fVar69 - fVar92 * fVar95) +
                 (fVar23 * fVar24 - fVar27 * fVar69) * (fVar92 * fVar24 - fVar94 * fVar69)) ||
        ((fVar5 - fVar37) * fVar95 + (fVar3 - fVar93) * fVar69 + (fVar4 - fVar67) * fVar24 <= 0.0))
       || (fVar95 * fVar95 + fVar69 * fVar69 + fVar24 * fVar24 <= fVar11)) {
      auVar44._0_4_ = (fVar66 * fVar78 + fVar29 * fVar28 + fVar41 * fVar51) / fVar68;
      auVar44._4_4_ = auVar44._0_4_;
      auVar44._8_4_ = auVar44._0_4_;
      auVar44._12_4_ = auVar44._0_4_;
      auVar14 = maxps(auVar44,ZEXT816(0));
      auVar14 = minps(auVar14,_DAT_1499314a0);
      fVar13 = (float)(uVar9 & auVar14._0_4_);
      fVar68 = (float)(uVar9 & auVar14._4_4_);
      fVar69 = (float)(uVar9 & auVar14._8_4_);
      fVar85 = (fVar85 * (fVar31 - fVar13) + fVar30 * fVar13) - fVar6;
      fVar87 = (fVar87 * (fVar21 - fVar68) + fVar62 * fVar68) - fVar7;
      fVar89 = (fVar89 * (fVar25 - fVar69) + fVar65 * fVar69) - fVar8;
      if (((0.0 <= (fVar94 * fVar89 - fVar91 * fVar87) * (fVar26 * fVar89 - fVar12 * fVar87) +
                   (fVar91 * fVar85 - fVar92 * fVar89) * (fVar12 * fVar85 - fVar22 * fVar89) +
                   (fVar92 * fVar87 - fVar94 * fVar85) * (fVar22 * fVar87 - fVar26 * fVar85)) ||
          ((fVar8 - fVar37) * fVar89 + (fVar6 - fVar93) * fVar85 + (fVar7 - fVar67) * fVar87 <= 0.0)
          ) || (fVar89 * fVar89 + fVar85 * fVar85 + fVar87 * fVar87 <= fVar11)) {
        fVar85 = fVar86 * fVar29 - fVar84 * fVar41;
        fVar89 = fVar88 * fVar41 - fVar86 * fVar66;
        fVar30 = fVar84 * fVar66 - fVar88 * fVar29;
        fVar65 = fVar90 * fVar40 - fVar90 * fVar40;
        fVar87 = fVar30 * fVar30 + fVar89 * fVar89;
        fVar31 = fVar89 * fVar89 + fVar30 * fVar30;
        fVar62 = fVar65 * fVar65 + fVar85 * fVar85;
        fVar13 = fVar85 * fVar85 + fVar65 * fVar65;
        auVar45._0_4_ = fVar62 + fVar87;
        auVar45._4_4_ = fVar13 + fVar31;
        auVar45._8_4_ = fVar87 + fVar62;
        auVar45._12_4_ = fVar31 + fVar13;
        auVar14 = sqrtps(auVar45,auVar45);
        auVar14 = divps(_DAT_1499314a0,auVar14);
        auVar57._0_4_ = auVar14._0_4_ * fVar89;
        auVar57._4_4_ = auVar14._4_4_ * fVar30;
        auVar57._8_4_ = auVar14._8_4_ * fVar85;
        auVar57._12_4_ = auVar14._12_4_ * fVar65;
        iVar10 = -(uint)((fVar64 - fVar37) * auVar57._8_4_ +
                         (fVar60 - fVar93) * auVar57._0_4_ + (fVar63 - fVar67) * auVar57._4_4_ < 0.0
                        );
        auVar18._4_4_ = iVar10;
        auVar18._0_4_ = iVar10;
        auVar18._8_4_ = iVar10;
        auVar18._12_4_ = iVar10;
        auVar1._4_4_ = 0.0 - auVar57._4_4_;
        auVar1._0_4_ = 0.0 - auVar57._0_4_;
        auVar1._8_4_ = 0.0 - auVar57._8_4_;
        auVar1._12_4_ = 0.0 - auVar57._12_4_;
        auVar14 = blendvps(auVar57,auVar1,auVar18);
        if (fVar78 * auVar14._8_4_ + fVar28 * auVar14._0_4_ + fVar51 * auVar14._4_4_ <= param_6) {
          fVar85 = fVar76 * fVar29 - fVar70 * fVar41;
          fVar89 = fVar77 * fVar41 - fVar76 * fVar66;
          fVar63 = fVar70 * fVar66 - fVar77 * fVar29;
          fVar31 = fVar80 * fVar40 - fVar80 * fVar40;
          fVar87 = fVar63 * fVar63 + fVar89 * fVar89;
          fVar60 = fVar89 * fVar89 + fVar63 * fVar63;
          fVar64 = fVar31 * fVar31 + fVar85 * fVar85;
          fVar30 = fVar85 * fVar85 + fVar31 * fVar31;
          auVar46._0_4_ = fVar64 + fVar87;
          auVar46._4_4_ = fVar30 + fVar60;
          auVar46._8_4_ = fVar87 + fVar64;
          auVar46._12_4_ = fVar60 + fVar30;
          auVar14 = sqrtps(auVar46,auVar46);
          auVar14 = divps(_DAT_1499314a0,auVar14);
          auVar58._0_4_ = auVar14._0_4_ * fVar89;
          auVar58._4_4_ = auVar14._4_4_ * fVar63;
          auVar58._8_4_ = auVar14._8_4_ * fVar85;
          auVar58._12_4_ = auVar14._12_4_ * fVar31;
          iVar10 = -(uint)((fVar5 - fVar37) * auVar58._8_4_ +
                           (fVar3 - fVar93) * auVar58._0_4_ + (fVar4 - fVar67) * auVar58._4_4_ < 0.0
                          );
          auVar19._4_4_ = iVar10;
          auVar19._0_4_ = iVar10;
          auVar19._8_4_ = iVar10;
          auVar19._12_4_ = iVar10;
          auVar2._4_4_ = 0.0 - auVar58._4_4_;
          auVar2._0_4_ = 0.0 - auVar58._0_4_;
          auVar2._8_4_ = 0.0 - auVar58._8_4_;
          auVar2._12_4_ = 0.0 - auVar58._12_4_;
          auVar14 = blendvps(auVar58,auVar2,auVar19);
          if (fVar61 * auVar14._8_4_ + fVar56 * auVar14._0_4_ + fVar59 * auVar14._4_4_ <= param_6) {
            fVar85 = fVar29 * fVar97 - fVar41 * fVar96;
            fVar89 = fVar41 * fVar98 - fVar66 * fVar97;
            fVar60 = fVar66 * fVar96 - fVar29 * fVar98;
            fVar64 = fVar40 * fVar99 - fVar40 * fVar99;
            fVar87 = fVar60 * fVar60 + fVar89 * fVar89;
            fVar40 = fVar89 * fVar89 + fVar60 * fVar60;
            fVar63 = fVar64 * fVar64 + fVar85 * fVar85;
            fVar31 = fVar85 * fVar85 + fVar64 * fVar64;
            auVar38._0_4_ = fVar63 + fVar87;
            auVar38._4_4_ = fVar31 + fVar40;
            auVar38._8_4_ = fVar87 + fVar63;
            auVar38._12_4_ = fVar40 + fVar31;
            auVar14 = sqrtps(auVar38,auVar38);
            auVar14 = divps(_DAT_1499314a0,auVar14);
            auVar71._0_4_ = auVar14._0_4_ * fVar89;
            auVar71._4_4_ = auVar14._4_4_ * fVar60;
            auVar71._8_4_ = auVar14._8_4_ * fVar85;
            auVar71._12_4_ = auVar14._12_4_ * fVar64;
            iVar10 = -(uint)((fVar8 - fVar37) * auVar71._8_4_ +
                             (fVar6 - fVar93) * auVar71._0_4_ + (fVar7 - fVar67) * auVar71._4_4_ <
                            0.0);
            auVar47._0_4_ = 0.0 - auVar71._0_4_;
            auVar47._4_4_ = 0.0 - auVar71._4_4_;
            auVar47._8_4_ = 0.0 - auVar71._8_4_;
            auVar47._12_4_ = 0.0 - auVar71._12_4_;
            auVar20._4_4_ = iVar10;
            auVar20._0_4_ = iVar10;
            auVar20._8_4_ = iVar10;
            auVar20._12_4_ = iVar10;
            auVar14 = blendvps(auVar71,auVar47,auVar20);
            if (fVar55 * auVar14._8_4_ + fVar50 * auVar14._0_4_ + fVar54 * auVar14._4_4_ <= param_6)
            {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1402e8b82 FUN_1402e8b82 body=778 status=ok
// SIG undefined FUN_1402e8b82(void)

void FUN_1402e8b82(float *param_1,double *param_2,longlong param_3,double param_4,ulonglong *param_5
                  ,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar19;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  
  *param_1 = (float)(param_4 + *(double *)(param_3 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = param_6;
  *(undefined1 *)(param_1 + 0x12) = 0;
  dVar1 = *(double *)(param_3 + 0x50);
  dVar3 = *(double *)(param_3 + 0x20) * param_2[8];
  dVar22 = *(double *)(param_3 + 0x28) * param_2[9];
  dVar16 = *(double *)(param_3 + 0x30) * param_2[10];
  dVar19 = param_2[0xb] * 0.0;
  dVar2 = param_2[3];
  dVar24 = param_2[3];
  dVar10 = *param_2;
  dVar11 = param_2[1];
  dVar12 = param_2[2];
  dVar23 = param_2[3];
  dVar6 = dVar22 * dVar10 - dVar3 * dVar11;
  dVar7 = dVar16 * dVar11 - dVar22 * dVar12;
  dVar4 = dVar3 * dVar12 - dVar16 * dVar10;
  dVar5 = dVar19 * dVar23 - dVar19 * dVar23;
  dVar7 = dVar7 + dVar7;
  dVar4 = dVar4 + dVar4;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar5 + dVar5;
  dVar9 = dVar6 * dVar2 + dVar16 + (dVar4 * dVar10 - dVar7 * dVar11) + param_2[6];
  dVar20 = (dVar1 * *(double *)(param_3 + 0x38) + *(double *)(param_3 + 0x20)) * param_2[8];
  dVar21 = (*(double *)(param_3 + 0x40) * dVar1 + *(double *)(param_3 + 0x28)) * param_2[9];
  dVar25 = (*(double *)(param_3 + 0x48) * dVar1 + *(double *)(param_3 + 0x30)) * param_2[10];
  dVar26 = param_2[0xb] * 0.0;
  dVar16 = dVar21 * dVar10 - dVar11 * dVar20;
  dVar19 = dVar25 * dVar11 - dVar12 * dVar21;
  dVar1 = dVar20 * dVar12 - dVar10 * dVar25;
  dVar23 = dVar26 * dVar23 - dVar23 * dVar26;
  dVar19 = dVar19 + dVar19;
  dVar1 = dVar1 + dVar1;
  dVar16 = dVar16 + dVar16;
  auVar13._8_8_ = dVar23 + dVar23;
  auVar18._4_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar18._0_4_ = (float)((dVar12 * dVar7 - dVar10 * dVar6) + dVar24 * dVar4 + dVar22 + param_2[5]);
  auVar18._8_8_ = dVar24;
  auVar17 = insertps(ZEXT416((uint)(float)((dVar6 * dVar11 - dVar4 * dVar12) + dVar2 * dVar7 + dVar3
                                          + param_2[4])),auVar18,0x1c);
  auVar8._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
  auVar8._0_4_ = (float)dVar9;
  auVar8._8_4_ = SUB84(dVar5,0);
  auVar8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar18 = insertps(auVar17,auVar8,0x28);
  dVar24 = (dVar12 * dVar19 - dVar10 * dVar16) + dVar24 * dVar1 + dVar21 + param_2[5];
  auVar13._0_8_ = dVar16 * dVar2 + dVar25 + (dVar1 * dVar10 - dVar19 * dVar11) + param_2[6];
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = (float)auVar13._0_8_;
  auVar17._4_4_ = (int)((ulonglong)dVar24 >> 0x20);
  auVar17._0_4_ = (float)dVar24;
  auVar17._8_8_ = dVar24;
  auVar17 = insertps(ZEXT416((uint)(float)((dVar16 * dVar11 - dVar1 * dVar12) +
                                           dVar2 * dVar19 + dVar20 + param_2[4])),auVar17,0x1c);
  auVar17 = insertps(auVar17,auVar14,0x28);
  *(undefined1 (*) [16])(param_1 + 4) = auVar18;
  *(undefined1 (*) [16])(param_1 + 8) = auVar17;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *param_5;
  auVar17 = insertps(auVar15,(int)param_5[1],0x28);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar17;
  return;
}



// FUNCTION 1402e8e8c FUN_1402e8e8c body=3068 status=ok
// SIG undefined FUN_1402e8e8c(void)

ulonglong FUN_1402e8e8c(double *param_1,undefined8 param_2,double *param_3,double param_4,
                       undefined8 *param_5,double *param_6)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double *pdVar10;
  double *pdVar11;
  double *pdVar12;
  longlong *plVar13;
  bool bVar14;
  char cVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  undefined7 uVar21;
  bool bVar22;
  double *pdVar23;
  ulonglong uVar24;
  double *pdVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  longlong *plVar33;
  double dVar34;
  double *pdVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auStack_378 [32];
  undefined8 *local_358;
  double *local_350;
  double local_340;
  undefined8 local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  undefined1 local_318 [16];
  double local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  double local_2d8 [4];
  undefined1 local_2b8 [16];
  double local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  double local_258 [4];
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f0;
  undefined8 local_1e8;
  double *pdStack_1e0;
  double *local_1d8;
  longlong *local_1d0;
  double *pdStack_1c8;
  double *local_1c0;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  longlong local_180 [11];
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_378;
  dVar7 = 1.0 / param_6[2];
  dVar6 = 1.0 / param_6[1];
  dVar5 = 1.0 / *param_6;
  local_1f0 = param_4;
  FUN_1402e9bae(local_180,param_2,param_6);
  if (param_5 == (undefined8 *)0x0) {
    pdVar23 = param_3;
    pdVar25 = local_258;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar25 = *pdVar23;
      pdVar23 = pdVar23 + 1;
      pdVar25 = pdVar25 + 1;
    }
    local_228 = local_228 * param_6[2];
    dStack_230 = dStack_230 * param_6[1];
    local_238 = local_238 * *param_6;
    uStack_220 = 0;
    uVar21 = (undefined7)((ulonglong)param_1 >> 8);
    local_350 = param_1;
    if ((0.9 < ABS(param_3[3])) || (ABS(param_3[3] + -0.7071067690849304) <= 0.01)) {
      (**(code **)(local_180[0] + 0x80))(local_180,local_2d8);
      FUN_1400c6592(local_2d8,&local_1e8,local_258);
      param_4 = ABS(param_4);
      pdVar23 = (double *)(((double)local_1c0 + param_4) * dVar7);
      pdVar35 = (double *)(((double)pdStack_1c8 + param_4) * dVar6);
      plVar33 = (longlong *)(((double)local_1d0 + param_4) * dVar5);
      pdVar10 = (double *)(((double)local_1d8 - param_4) * dVar7);
      pdVar25 = (double *)(((double)pdStack_1e0 - param_4) * dVar6);
      local_1d0 = (longlong *)(((double)local_1e8 - param_4) * dVar5);
      pdVar11 = pdVar10;
      if ((double)pdVar23 <= (double)pdVar10) {
        pdVar11 = pdVar23;
      }
      pdVar12 = pdVar25;
      if ((double)pdVar35 <= (double)pdVar25) {
        pdVar12 = pdVar35;
      }
      local_1e8 = local_1d0;
      if ((double)plVar33 <= (double)local_1d0) {
        local_1e8 = plVar33;
      }
      if ((double)pdVar10 <= (double)pdVar23) {
        pdVar10 = pdVar23;
      }
      if ((double)pdVar25 <= (double)pdVar35) {
        pdVar25 = pdVar35;
      }
      if ((double)local_1d0 <= (double)plVar33) {
        local_1d0 = plVar33;
      }
      local_2d8[0] = *param_3;
      local_2d8[1] = param_3[1];
      local_2d8[2] = param_3[2];
      local_2d8[3] = param_3[3];
      local_2a8 = param_3[6] * param_6[2];
      dVar5 = param_3[5] * param_6[1];
      local_2b8._8_4_ = SUB84(dVar5,0);
      local_2b8._0_8_ = param_3[4] * *param_6;
      local_2b8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uStack_2a0 = 0;
      local_298 = 0x3ff0000000000000;
      uStack_290 = 0x3ff0000000000000;
      local_288 = 0x3ff0000000000000;
      uStack_280 = 0;
      local_358 = &local_198;
      local_198 = CONCAT44((float)param_6[1],(float)*param_6);
      uStack_190 = CONCAT44(uStack_190._4_4_,(float)param_6[2]);
      pdStack_1e0 = pdVar12;
      local_1d8 = pdVar11;
      pdStack_1c8 = pdVar25;
      local_1c0 = pdVar10;
      FUN_1402e9e72(&local_338,local_2d8,local_180);
      plVar13 = local_1d0;
      plVar33 = local_1e8;
      if (*(int *)(param_1 + 0x1d) != 0) {
        local_198 = 0;
        uStack_190 = 0;
        FUN_14481578e(&local_198,0x10);
        uVar24 = uStack_190;
        lVar19 = (longlong)(int)uStack_190;
        uVar16 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar16);
        if (uStack_190._4_4_ < uVar16) {
          FUN_1446f48e2(&local_198,uVar24 & 0xffffffff);
        }
        *(undefined4 *)(local_198 + lVar19 * 4) = 0;
        if ((int)uStack_190 != 0) {
          do {
            lVar19 = (longlong)(int)uStack_190;
            uStack_190 = CONCAT44(uStack_190._4_4_,(int)uStack_190 + -1);
            lVar26 = (longlong)*(int *)(local_198 + -4 + lVar19 * 4) * 0x50 +
                     (longlong)param_1[0x1c];
            lVar19 = 0;
            bVar14 = true;
            do {
              bVar22 = bVar14;
              uVar24 = uStack_190;
              iVar3 = *(int *)(lVar26 + 0x40 + lVar19 * 4);
              uVar27 = (ulonglong)iVar3;
              if (uVar27 != 0xffffffffffffffff) {
                lVar20 = lVar19 * 0x20;
                pfVar2 = (float *)(lVar26 + 0x10 + lVar20);
                pfVar1 = (float *)(lVar26 + lVar20);
                auVar30._4_4_ = -(uint)((float)(double)pdVar25 < pfVar1[1]);
                auVar30._0_4_ = -(uint)((float)(double)plVar13 < *pfVar1);
                auVar30._8_4_ = -(uint)((float)(double)pdVar10 < pfVar1[2]);
                auVar30._12_4_ = -(uint)(0.0 < pfVar1[3]);
                auVar28._4_4_ = -(uint)(pfVar2[1] < (float)(double)pdVar12);
                auVar28._0_4_ = -(uint)(*pfVar2 < (float)(double)plVar33);
                auVar28._8_4_ = -(uint)(pfVar2[2] < (float)(double)pdVar11);
                auVar28._12_4_ = -(uint)(pfVar2[3] < 0.0);
                iVar18 = movmskps((int)lVar20,auVar30 | auVar28);
                if (iVar18 == 0) {
                  iVar18 = *(int *)(lVar26 + 0x48 + lVar19 * 4);
                  if (iVar18 == 0) {
                    lVar19 = (longlong)(int)uStack_190;
                    uVar16 = (int)uStack_190 + 1;
                    uStack_190 = CONCAT44(uStack_190._4_4_,uVar16);
                    if (uStack_190._4_4_ < uVar16) {
                      FUN_1446f48e2(&local_198,uVar24 & 0xffffffff);
                    }
                    *(int *)(local_198 + lVar19 * 4) = iVar3;
                  }
                  else if (0 < iVar18) {
                    uVar24 = uVar27 << 5 | 0x10;
                    do {
                      dVar5 = param_1[0x1e];
                      pfVar1 = (float *)((longlong)dVar5 + uVar24);
                      pfVar2 = (float *)((longlong)dVar5 + -0x10 + uVar24);
                      auVar31._4_4_ = -(uint)((float)(double)pdVar25 < pfVar2[1]);
                      auVar31._0_4_ = -(uint)((float)(double)plVar13 < *pfVar2);
                      auVar31._8_4_ = -(uint)((float)(double)pdVar10 < pfVar2[2]);
                      auVar31._12_4_ = -(uint)(0.0 < pfVar2[3]);
                      auVar29._4_4_ = -(uint)(pfVar1[1] < (float)(double)pdVar12);
                      auVar29._0_4_ = -(uint)(*pfVar1 < (float)(double)plVar33);
                      auVar29._8_4_ = -(uint)(pfVar1[2] < (float)(double)pdVar11);
                      auVar29._12_4_ = -(uint)(pfVar1[3] < 0.0);
                      iVar17 = movmskps(SUB84(dVar5,0),auVar31 | auVar29);
                      if ((iVar17 == 0) &&
                         (cVar15 = FUN_1402e9a8a(&local_338,uVar27 & 0xffffffff), cVar15 == '\0'))
                      goto LAB_1402e97e4;
                      uVar27 = uVar27 + 1;
                      uVar24 = uVar24 + 0x20;
                    } while ((longlong)uVar27 < (longlong)(iVar18 + iVar3));
                  }
                }
              }
              lVar19 = 1;
              bVar14 = false;
            } while (bVar22);
          } while ((int)uStack_190 != 0);
        }
LAB_1402e97e4:
        if (local_198 != 0) {
          FUN_1400020a8();
        }
      }
      uVar24 = CONCAT71(uVar21,(undefined1)uStack_2f0);
    }
    else {
      param_4 = ABS(param_4);
      dVar4 = ((local_100 + param_4) - (local_118 - param_4)) * 0.5;
      dVar32 = ((local_108 + param_4) - (local_120 - param_4)) * 0.5;
      dVar34 = ((local_110 + param_4) - (local_128 - param_4)) * 0.5;
      dVar37 = (local_118 - param_4) + dVar4;
      dVar36 = (local_120 - param_4) + dVar32;
      dVar9 = (local_128 - param_4) + dVar34;
      dVar39 = dVar9 * local_258[2] - local_258[0] * dVar37;
      dVar38 = dVar36 * local_258[0] - local_258[1] * dVar9;
      dVar8 = dVar37 * local_258[1] - local_258[2] * dVar36;
      dVar8 = dVar8 + dVar8;
      dVar39 = dVar39 + dVar39;
      dVar38 = dVar38 + dVar38;
      local_238 = local_238 +
                  (dVar38 * local_258[1] - dVar39 * local_258[2]) + local_258[3] * dVar8 + dVar9;
      dStack_230 = dStack_230 +
                   (local_258[2] * dVar8 - local_258[0] * dVar38) + local_258[3] * dVar39 + dVar36;
      local_228 = local_228 +
                  dVar38 * local_258[3] + dVar37 + (dVar39 * local_258[0] - dVar8 * local_258[1]);
      uStack_220 = 0;
      local_338 = (double)CONCAT44((float)dVar6,(float)dVar5);
      dStack_330 = (double)CONCAT44(dStack_330._4_4_,(float)dVar7);
      local_1e8 = (longlong *)CONCAT44((float)dVar32,(float)dVar34);
      pdStack_1e0 = (double *)CONCAT44(pdStack_1e0._4_4_,(float)dVar4);
      local_340 = dVar6;
      FUN_1402e7b1c(local_2d8,local_258,&local_1e8,&local_338);
      local_338 = *param_3;
      dStack_330 = param_3[1];
      local_328 = param_3[2];
      dStack_320 = param_3[3];
      local_308 = param_3[6] * param_6[2];
      dVar5 = param_3[5] * param_6[1];
      local_318._8_4_ = SUB84(dVar5,0);
      local_318._0_8_ = param_3[4] * *param_6;
      local_318._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uStack_300 = 0;
      local_2f8 = 0x3ff0000000000000;
      uStack_2f0 = 0x3ff0000000000000;
      local_2e8 = 0x3ff0000000000000;
      uStack_2e0 = 0;
      local_358 = &local_198;
      local_198 = CONCAT44((float)param_6[1],(float)*param_6);
      uStack_190 = CONCAT44(uStack_190._4_4_,(float)param_6[2]);
      FUN_1402e9e72(&local_1e8,&local_338,local_180,local_1f0);
      if (*(int *)(param_1 + 0x1d) != 0) {
        local_198 = 0;
        uStack_190 = 0;
        FUN_14481578e(&local_198,0x10);
        uVar24 = uStack_190;
        lVar19 = (longlong)(int)uStack_190;
        uVar16 = (int)uStack_190 + 1;
        uStack_190 = CONCAT44(uStack_190._4_4_,uVar16);
        if (uStack_190._4_4_ < uVar16) {
          FUN_1446f48e2(&local_198,uVar24 & 0xffffffff);
        }
        *(undefined4 *)(local_198 + lVar19 * 4) = 0;
        if ((int)uStack_190 != 0) {
          do {
            lVar19 = (longlong)(int)uStack_190;
            uStack_190 = CONCAT44(uStack_190._4_4_,(int)uStack_190 + -1);
            lVar19 = (longlong)*(int *)(local_198 + -4 + lVar19 * 4) * 0x50 +
                     (longlong)param_1[0x1c];
            lVar26 = 0;
            bVar14 = true;
            do {
              bVar22 = bVar14;
              iVar3 = *(int *)(lVar19 + 0x40 + lVar26 * 4);
              uVar24 = (ulonglong)iVar3;
              if ((uVar24 != 0xffffffffffffffff) &&
                 (cVar15 = FUN_1402e78fc(local_2d8,lVar26 * 0x20 + lVar19), uVar27 = uStack_190,
                 cVar15 != '\0')) {
                iVar18 = *(int *)(lVar19 + 0x48 + lVar26 * 4);
                if (iVar18 == 0) {
                  lVar26 = (longlong)(int)uStack_190;
                  uVar16 = (int)uStack_190 + 1;
                  uStack_190 = CONCAT44(uStack_190._4_4_,uVar16);
                  if (uStack_190._4_4_ < uVar16) {
                    FUN_1446f48e2(&local_198,uVar27 & 0xffffffff);
                  }
                  *(int *)(local_198 + lVar26 * 4) = iVar3;
                }
                else if (0 < iVar18) {
                  lVar26 = uVar24 << 5;
                  do {
                    cVar15 = FUN_1402e78fc(local_2d8,(longlong)param_1[0x1e] + lVar26);
                    if ((cVar15 != '\0') &&
                       (cVar15 = FUN_1402e9a8a(&local_1e8,uVar24 & 0xffffffff), cVar15 == '\0'))
                    goto LAB_1402e93d7;
                    uVar24 = uVar24 + 1;
                    lVar26 = lVar26 + 0x20;
                  } while ((longlong)uVar24 < (longlong)(iVar18 + iVar3));
                }
              }
              lVar26 = 1;
              bVar14 = false;
            } while (bVar22);
          } while ((int)uStack_190 != 0);
        }
LAB_1402e93d7:
        if (local_198 != 0) {
          FUN_1400020a8();
        }
      }
      uVar24 = CONCAT71(uVar21,local_1a0);
    }
  }
  else {
    pdVar23 = param_3;
    pdVar25 = local_2d8;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar25 = *pdVar23;
      pdVar23 = pdVar23 + 1;
      pdVar25 = pdVar25 + 1;
    }
    local_2a8 = local_2a8 * param_6[2];
    local_2b8._8_8_ = (double)local_2b8._8_8_ * param_6[1];
    local_2b8._0_8_ = (double)local_2b8._0_8_ * *param_6;
    uStack_2a0 = 0;
    (**(code **)(local_180[0] + 0x80))(local_180,local_258);
    FUN_1400c6592(local_258,&local_338,local_2d8);
    param_4 = ABS(param_4);
    dVar38 = ((double)local_318._8_8_ + param_4) * dVar7;
    dVar4 = ((double)local_318._0_8_ + param_4) * dVar6;
    dVar36 = (dStack_320 + param_4) * dVar5;
    local_318._8_8_ = (local_328 - param_4) * dVar7;
    local_318._0_8_ = (dStack_330 - param_4) * dVar6;
    dStack_320 = (local_338 - param_4) * dVar5;
    local_328 = (double)local_318._8_8_;
    if (dVar38 <= (double)local_318._8_8_) {
      local_328 = dVar38;
    }
    dStack_330 = (double)local_318._0_8_;
    if (dVar4 <= (double)local_318._0_8_) {
      dStack_330 = dVar4;
    }
    local_338 = dStack_320;
    if (dVar36 <= dStack_320) {
      local_338 = dVar36;
    }
    if ((double)local_318._8_8_ <= dVar38) {
      local_318._8_8_ = dVar38;
    }
    if ((double)local_318._0_8_ <= dVar4) {
      local_318._0_8_ = dVar4;
    }
    if (dStack_320 <= dVar36) {
      dStack_320 = dVar36;
    }
    FUN_140d8788e(param_1 + 0x1c,&local_198,&local_338);
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[6] = 0xffefffffffffffff;
    local_228 = param_3[6] * param_6[2];
    dStack_230 = param_3[5] * param_6[1];
    local_258[0] = *param_3;
    local_258[1] = param_3[1];
    local_238 = param_3[4] * *param_6;
    local_258[2] = param_3[2];
    local_258[3] = param_3[3];
    uStack_220 = 0;
    local_218 = 0x3ff0000000000000;
    uStack_210 = 0x3ff0000000000000;
    local_208 = 0x3ff0000000000000;
    uStack_200 = 0;
    local_1d8 = param_6;
    local_1c0 = &local_1f0;
    local_1d0 = local_180;
    local_1e8 = &local_198;
    pdStack_1e0 = param_1;
    pdStack_1c8 = local_258;
    if (*(char *)(param_1 + 0x10) == '\x01') {
      uVar16 = FUN_146e58e6a(&local_1e8,param_1 + 0xc,param_5);
    }
    else {
      uVar16 = FUN_146e5913a(&local_1e8,param_1 + 0xe,param_5);
    }
    uVar24 = (ulonglong)uVar16;
    if (local_198 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1402e5682(local_180);
  if ((local_f0 ^ (ulonglong)auStack_378) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar24 & 0xffffffff;
}



// FUNCTION 1402e9a8a FUN_1402e9a8a body=291 status=ok
// SIG undefined FUN_1402e9a8a(void)

ulonglong FUN_1402e9a8a(undefined4 *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar4 = (longlong)param_2;
  lVar2 = *(longlong *)(lVar1 + 0x48);
  if (*(char *)(lVar1 + 0x80) == '\x01') {
    lVar1 = *(longlong *)(lVar1 + 0x60);
    lVar5 = (longlong)*(int *)(lVar1 + lVar4 * 0xc);
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(lVar2 + lVar5 * 0xc);
    auVar6 = insertps(auVar6,*(undefined4 *)(lVar2 + 8 + lVar5 * 0xc),0x28);
    lVar5 = (longlong)*(int *)(lVar1 + 4 + lVar4 * 0xc);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(lVar2 + lVar5 * 0xc);
    auVar8 = insertps(auVar8,*(undefined4 *)(lVar2 + 8 + lVar5 * 0xc),0x28);
    uVar3 = (ulonglong)*(int *)(lVar1 + 8 + lVar4 * 0xc);
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x70);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + lVar4 * 6);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
    auVar6 = insertps(auVar10,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 2 + lVar4 * 6);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
    auVar8 = insertps(auVar7,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
    uVar3 = (ulonglong)*(ushort *)(lVar1 + 4 + lVar4 * 6);
  }
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *(ulonglong *)(lVar2 + uVar3 * 0xc);
  auVar10 = insertps(auVar9,*(undefined4 *)(lVar2 + 8 + uVar3 * 0xc),0x28);
  local_48 = (float)param_1[0xc];
  fStack_44 = (float)param_1[0xd];
  fStack_40 = (float)param_1[0xe];
  fStack_3c = (float)param_1[0xf];
  local_28 = auVar6._0_4_ * local_48;
  fStack_24 = auVar6._4_4_ * fStack_44;
  fStack_20 = auVar6._8_4_ * fStack_40;
  fStack_1c = auVar6._12_4_ * fStack_3c;
  local_38 = auVar8._0_4_ * local_48;
  fStack_34 = auVar8._4_4_ * fStack_44;
  fStack_30 = auVar8._8_4_ * fStack_40;
  fStack_2c = auVar8._12_4_ * fStack_3c;
  local_48 = auVar10._0_4_ * local_48;
  fStack_44 = auVar10._4_4_ * fStack_44;
  fStack_40 = auVar10._8_4_ * fStack_40;
  fStack_3c = auVar10._12_4_ * fStack_3c;
  local_50 = *param_1;
  local_58 = param_1 + 8;
  uVar3 = FUN_1402e7e35(&local_28,&local_38,&local_48,param_1 + 4);
  *(char *)(param_1 + 0x12) = (char)uVar3;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402e9bae FUN_1402e9bae body=184 status=ok
// SIG undefined FUN_1402e9bae(void)

undefined8 FUN_1402e9bae(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_3[2] * *(double *)(param_2 + 0x30);
  local_b8 = param_3[1] * *(double *)(param_2 + 0x28);
  local_c0 = *param_3 * *(double *)(param_2 + 0x20);
  local_c8 = *(longlong *)(param_2 + 0x88);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  FUN_1402e9c68(local_a8,&local_c8,&local_c0,0);
  FUN_1402e9d5a(param_1,local_a8);
  FUN_1402e5682(local_a8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402e9c68 FUN_1402e9c68 body=242 status=ok
// SIG undefined FUN_1402e9c68(void)

undefined8 *
FUN_1402e9c68(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  byte bVar3;
  longlong lVar4;
  
  bVar3 = *(byte *)(*param_2 + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar3;
  *(byte *)((longlong)param_1 + 0x1d) = bVar3;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4bdb0;
  lVar4 = *param_2;
  param_1[0x11] = lVar4;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar4 = param_1[0x11];
  }
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar4 + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(lVar4 + 0x19);
  param_1[10] = param_4;
  FUN_1402e579a(param_1,param_3);
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((*piVar1 == 0) && (*(int *)((longlong)puVar2 + 0xc) == 0)) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  return param_1;
}



// FUNCTION 1402e9d5a FUN_1402e9d5a body=279 status=ok
// SIG undefined FUN_1402e9d5a(void)

void FUN_1402e9d5a(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(*(longlong *)(param_2 + 0x88) + 0x1c) | 0x80;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = bVar2;
  *(byte *)((longlong)param_1 + 0x1d) = bVar2;
  param_1[4] = 0x3ff0000000000000;
  param_1[5] = 0x3ff0000000000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  param_1[9] = 0x3ff0000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x7fefffffffffffff;
  param_1[0xc] = 0x7fefffffffffffff;
  param_1[0xd] = 0x7fefffffffffffff;
  param_1[0xe] = 0xffefffffffffffff;
  param_1[0xf] = 0xffefffffffffffff;
  param_1[0x10] = 0xffefffffffffffff;
  *param_1 = &PTR_FUN_149f4bdb0;
  param_1[0x11] = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_1[0x11] + 0x18);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)(param_1[0x11] + 0x19);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[6] = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[5] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = uVar1;
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xd] = *(undefined8 *)(param_2 + 0x68);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x78);
  param_1[0xe] = *(undefined8 *)(param_2 + 0x70);
  param_1[0xf] = uVar1;
  param_1[0x10] = *(undefined8 *)(param_2 + 0x80);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  return;
}



// FUNCTION 1402e9e72 FUN_1402e9e72 body=902 status=ok
// SIG undefined FUN_1402e9e72(void)

void FUN_1402e9e72(float *param_1,double *param_2,longlong param_3,double param_4,ulonglong *param_5
                  ,undefined8 param_6)

{
  double dVar1;
  double dVar2;
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
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar3;
  
  *param_1 = (float)((double)(*(ulonglong *)(param_3 + 0x10) &
                             -(ulonglong)(0.0 < *(double *)(*(longlong *)(param_3 + 0x88) + 0x10)))
                    + param_4);
  *(undefined8 *)(param_1 + 0x10) = param_6;
  *(undefined1 *)(param_1 + 0x12) = 0;
  lVar4 = *(longlong *)(param_3 + 0x88);
  dVar1 = *(double *)(lVar4 + 0x50);
  dVar7 = *(double *)(lVar4 + 0x20) * *(double *)(param_3 + 0x20) * param_2[8];
  dVar8 = *(double *)(lVar4 + 0x28) * *(double *)(param_3 + 0x28) * param_2[9];
  dVar15 = *(double *)(lVar4 + 0x30) * *(double *)(param_3 + 0x30) * param_2[10];
  dVar10 = *param_2;
  dVar11 = param_2[1];
  dVar12 = param_2[2];
  dVar13 = dVar8 * dVar10 - dVar7 * dVar11;
  dVar9 = dVar15 * dVar11 - dVar8 * dVar12;
  dVar5 = dVar7 * dVar12 - dVar15 * dVar10;
  dVar6 = param_2[0xb] * 0.0 * param_2[3] - param_2[0xb] * 0.0 * param_2[3];
  dVar9 = dVar9 + dVar9;
  dVar5 = dVar5 + dVar5;
  dVar2 = param_2[3];
  dVar3 = param_2[3];
  dVar13 = dVar13 + dVar13;
  auVar14._8_8_ = dVar6 + dVar6;
  auVar16 = insertps(ZEXT416((uint)(float)((dVar13 * dVar11 - dVar5 * dVar12) +
                                           dVar2 * dVar9 + dVar7 + param_2[4])),
                     ZEXT416((uint)(float)((dVar12 * dVar9 - dVar10 * dVar13) +
                                           dVar3 * dVar5 + dVar8 + param_2[5])),0x1c);
  auVar14._0_8_ = dVar13 * dVar2 + dVar15 + (dVar5 * dVar10 - dVar9 * dVar11) + param_2[6];
  auVar17._4_12_ = auVar14._4_12_;
  auVar17._0_4_ = (float)auVar14._0_8_;
  auVar17 = insertps(auVar16,auVar17,0x28);
  dVar5 = (dVar1 * *(double *)(lVar4 + 0x38) + *(double *)(lVar4 + 0x20)) *
          *(double *)(param_3 + 0x20) * param_2[8];
  dVar6 = (*(double *)(lVar4 + 0x40) * dVar1 + *(double *)(lVar4 + 0x28)) *
          *(double *)(param_3 + 0x28) * param_2[9];
  dVar13 = (*(double *)(lVar4 + 0x48) * dVar1 + *(double *)(lVar4 + 0x30)) *
           *(double *)(param_3 + 0x30) * param_2[10];
  dVar7 = dVar6 * dVar10 - dVar11 * dVar5;
  dVar8 = dVar13 * dVar11 - dVar12 * dVar6;
  dVar1 = dVar5 * dVar12 - dVar10 * dVar13;
  dVar8 = dVar8 + dVar8;
  dVar1 = dVar1 + dVar1;
  dVar7 = dVar7 + dVar7;
  auVar14 = insertps(ZEXT416((uint)(float)((dVar7 * dVar11 - dVar1 * dVar12) + dVar2 * dVar8 + dVar5
                                          + param_2[4])),
                     ZEXT416((uint)(float)((dVar12 * dVar8 - dVar10 * dVar7) + dVar3 * dVar1 + dVar6
                                          + param_2[5])),0x1c);
  auVar14 = insertps(auVar14,ZEXT416((uint)(float)(dVar7 * dVar2 + dVar13 +
                                                   (dVar1 * dVar10 - dVar8 * dVar11) + param_2[6])),
                     0x28);
  *(undefined1 (*) [16])(param_1 + 4) = auVar17;
  *(undefined1 (*) [16])(param_1 + 8) = auVar14;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = *param_5;
  auVar14 = insertps(auVar16,(int)param_5[1],0x28);
  *(undefined1 (*) [16])(param_1 + 0xc) = auVar14;
  return;
}



// FUNCTION 1402ea1f8 FUN_1402ea1f8 body=370 status=ok
// SIG undefined FUN_1402ea1f8(void)

void FUN_1402ea1f8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [96];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0:
switchD_1402ea237_caseD_0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 1:
switchD_1402ea237_caseD_1:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 2:
  case 5:
  case 6:
  case 7:
    goto switchD_1402ea237_caseD_2;
  case 3:
switchD_1402ea237_caseD_3:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 4:
    FUN_1447dc19e(param_1 + 0x30,local_88,param_2);
    FUN_1402ea1f8(*(undefined8 *)(param_1 + 0x20),local_88,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  case 8:
switchD_1402ea237_caseD_8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  default:
    switch(uVar1) {
    case 0x80:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    case 0x81:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    case 0x82:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
      break;
    case 0x83:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    case 0x88:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
    default:
      switch(uVar1) {
      case 0x40:
        goto switchD_1402ea237_caseD_0;
      case 0x41:
        goto switchD_1402ea237_caseD_1;
      case 0x43:
        goto switchD_1402ea237_caseD_3;
      case 0x48:
        goto switchD_1402ea237_caseD_8;
      }
    }
switchD_1402ea237_caseD_2:
    if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    FUN_1456fa7ee(param_3,param_1,param_2);
    return;
  }
}



// FUNCTION 1402ea430 FUN_1402ea430 body=892 status=ok
// SIG undefined FUN_1402ea430(void)

void FUN_1402ea430(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406864a0;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_1406863dc;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ea7ae FUN_1402ea7ae body=891 status=ok
// SIG undefined FUN_1402ea7ae(void)

void FUN_1402ea7ae(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406864a0;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14068657c;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402eab2a FUN_1402eab2a body=891 status=ok
// SIG undefined FUN_1402eab2a(void)

void FUN_1402eab2a(longlong *param_1,longlong param_2)

{
  double dVar1;
  double *pdVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  char cVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_158 [32];
  double *local_138;
  undefined1 *local_130;
  double *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double *local_100;
  undefined8 local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined1 local_b0 [24];
  double local_98;
  double dStack_90;
  double local_88;
  longlong local_80;
  code *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  double dVar2;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  pdVar3 = (double *)param_1[3];
  if (pdVar3[2] * pdVar3[2] + *pdVar3 * *pdVar3 + pdVar3[1] * pdVar3[1] < 0.0001) {
    local_e8 = 1.0;
    dStack_e0 = 0.0;
    local_d8 = 0.0;
  }
  else {
    local_d8 = pdVar3[2];
    local_e8 = *pdVar3;
    dStack_e0 = pdVar3[1];
  }
  local_110 = *(undefined8 *)param_1[2];
  local_68 = *param_1;
  local_60 = &LAB_1406864a0;
  local_58 = *(undefined8 *)(local_68 + 0x10);
  local_78 = FUN_14172543a;
  local_70 = *(undefined8 *)(param_2 + 0x10);
  local_f8 = 0x3f50624de0000000;
  local_100 = &local_e8;
  local_118 = local_d0;
  local_120 = local_cc;
  local_128 = &local_c8;
  local_130 = local_b0;
  local_138 = &local_98;
  local_108 = 0;
  local_80 = param_2;
  cVar8 = FUN_14068570a(&local_80,&local_68);
  if (cVar8 != '\0') {
    pdVar3 = (double *)param_1[4];
    dVar12 = *pdVar3;
    dVar6 = pdVar3[1];
    dVar7 = pdVar3[2];
    dVar1 = pdVar3[3];
    dVar2 = pdVar3[3];
    dVar9 = dStack_c0 * dVar12 - local_c8 * dVar6;
    dVar10 = local_b8 * dVar6 - dStack_c0 * dVar7;
    dVar13 = local_c8 * dVar7 - dVar12 * local_b8;
    dVar10 = dVar10 + dVar10;
    dVar13 = dVar13 + dVar13;
    dVar9 = dVar9 + dVar9;
    pdVar3 = *(double **)param_1[1];
    *pdVar3 = (dVar9 * dVar6 - dVar13 * dVar7) + dVar1 * dVar10 + local_c8;
    pdVar3[1] = (dVar7 * dVar10 - dVar12 * dVar9) + dVar2 * dVar13 + dStack_c0;
    pdVar3[2] = dVar9 * dVar1 + local_b8 + (dVar13 * dVar12 - dVar10 * dVar6);
    pdVar3 = (double *)param_1[4];
    local_98 = local_98 * pdVar3[8];
    dStack_90 = dStack_90 * pdVar3[9];
    local_88 = local_88 * pdVar3[10];
    dVar7 = *pdVar3;
    dVar10 = pdVar3[1];
    dVar13 = pdVar3[2];
    dVar2 = pdVar3[3];
    dVar9 = dStack_90 * dVar7 - local_98 * dVar10;
    dVar11 = local_88 * dVar10 - dStack_90 * dVar13;
    dVar12 = local_98 * dVar13 - dVar7 * local_88;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar9 = dVar9 + dVar9;
    dVar6 = (dVar13 * dVar11 - dVar7 * dVar9) + pdVar3[3] * dVar12 + dStack_90 + pdVar3[5];
    dVar1 = pdVar3[6];
    lVar4 = *(longlong *)param_1[1];
    auVar5._8_4_ = SUB84(dVar6,0);
    auVar5._0_8_ = (dVar9 * dVar10 - dVar12 * dVar13) + dVar2 * dVar11 + local_98 + pdVar3[4];
    auVar5._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(lVar4 + 0x18) = auVar5;
    *(double *)(lVar4 + 0x28) =
         dVar9 * dVar2 + local_88 + (dVar12 * dVar7 - dVar11 * dVar10) + dVar1;
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402eaea6 FUN_1402eaea6 body=327 status=ok
// SIG undefined FUN_1402eaea6(void)

undefined4 *
FUN_1402eaea6(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402eb086(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_48 = uVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar6 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  local_68 = param_4;
  cVar3 = FUN_1402eafee(param_1,uVar6,local_48);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar7 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & uVar6;
      *(uint *)((longlong)local_48 + 0x14) = uVar6;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1402eb25c(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402eafee FUN_1402eafee body=152 status=ok
// SIG undefined FUN_1402eafee(void)

void FUN_1402eafee(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_14039d76a((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_1402eb039;
    }
  }
  uVar5 = 0;
LAB_1402eb039:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 1402eb086 FUN_1402eb086 body=470 status=ok
// SIG undefined FUN_1402eb086(void)

int * FUN_1402eb086(longlong *param_1,int *param_2)

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



// FUNCTION 1402eb25c FUN_1402eb25c body=560 status=ok
// SIG undefined FUN_1402eb25c(void)

void FUN_1402eb25c(longlong *param_1)

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
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
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
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar9 = local_58 >> 0x20;
    }
    iVar5 = (int)local_58;
    uVar6 = (uint)local_48;
    iVar7 = local_48._4_4_;
    iVar10 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar12 + lVar11 * 0x18);
        uVar14 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0x14 + lVar11 * 0x18) = iVar13;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x10 + lVar11 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar8 = local_50;
        }
        iVar13 = (int)local_50[3];
        lVar12 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar7 = iVar13 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar4 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar3 - lVar12 == lVar11) goto LAB_1402eb447;
          }
          iVar5 = iVar5 + (int)lVar11 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar14 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar13);
    }
  }
LAB_1402eb447:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402eb48e FUN_1402eb48e body=610 status=ok
// SIG undefined FUN_1402eb48e(void)

void FUN_1402eb48e(longlong param_1,longlong param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  cVar1 = *(char *)(param_2 + 0xb);
  if (cVar1 == '\0') {
    FUN_1402eb6f0(param_1 + 0x60,param_2);
  }
  else {
    if (cVar1 == '\x01') {
      bVar2 = **(byte **)(param_2 + 0x20);
      iVar3 = FUN_1402eb6f0(param_1 + 8,param_2);
      if (((bVar2 & 2) == 0) || (iVar3 != 0)) goto LAB_1402eb4af;
      iVar3 = *(int *)(param_1 + 0xb8);
      if ((longlong)iVar3 != 0) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
        iVar7 = 1;
        lVar9 = 0;
        lVar5 = 0;
        do {
          if (*(longlong *)(lVar6 + lVar9) == param_2) {
            if (iVar7 != 0) goto LAB_1402eb548;
            break;
          }
          lVar5 = lVar5 + 0x100000000;
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 0x10;
        } while ((longlong)iVar3 << 4 != lVar9);
      }
      lVar6 = *(longlong *)(param_1 + 0x58);
      if (lVar6 == 0) goto LAB_1402eb4af;
      if (lVar6 == param_2) {
        puVar4 = (undefined8 *)(param_1 + 0x58);
      }
      else {
        do {
          lVar5 = lVar6;
          lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x18);
          if (lVar6 == 0) goto LAB_1402eb4af;
        } while (lVar6 != param_2);
        puVar4 = (undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x18);
      }
      *puVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18);
    }
    else {
      if (cVar1 != '\x02') goto LAB_1402eb4af;
      iVar3 = *(int *)(param_1 + 0xb8);
      if ((longlong)iVar3 != 0) {
        lVar6 = *(longlong *)(param_1 + 0xb0);
        iVar7 = 1;
        lVar9 = 0;
        lVar5 = 0;
        do {
          if (*(longlong *)(lVar6 + lVar9) == param_2) {
            if (iVar7 != 0) goto LAB_1402eb548;
            break;
          }
          lVar5 = lVar5 + 0x100000000;
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 0x10;
        } while ((longlong)iVar3 << 4 != lVar9);
      }
      lVar6 = *(longlong *)(param_1 + 0x58);
      if (lVar6 == 0) goto LAB_1402eb4af;
      if (lVar6 == param_2) {
        puVar4 = (undefined8 *)(param_1 + 0x58);
      }
      else {
        do {
          lVar5 = lVar6;
          lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x20) + 0x18);
          if (lVar6 == 0) goto LAB_1402eb4af;
        } while (lVar6 != param_2);
        puVar4 = (undefined8 *)(*(longlong *)(lVar5 + 0x20) + 0x18);
      }
      *puVar4 = *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18);
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x18);
      if (lVar6 == 0) goto LAB_1402eb4af;
      lVar6 = *(longlong *)(lVar6 + 0x20);
      *(float *)(lVar6 + 0x20) =
           *(float *)(*(longlong *)(param_2 + 0x20) + 0x20) + *(float *)(lVar6 + 0x20);
    }
    *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x18) = 0;
  }
  goto LAB_1402eb4af;
LAB_1402eb548:
  iVar7 = iVar3 - iVar7;
  if (iVar7 != 0) {
    iVar8 = 1;
    if (iVar7 < 1) {
      iVar8 = iVar7;
    }
    memmove((void *)((lVar5 >> 0x20) * 0x10 + lVar6),
            (void *)((longlong)(iVar3 - iVar8) * 0x10 + lVar6),(longlong)iVar8 << 4);
    iVar3 = *(int *)(param_1 + 0xb8);
  }
  *(int *)(param_1 + 0xb8) = iVar3 + -1;
  FUN_1402ec298(param_1 + 0xb0);
LAB_1402eb4af:
  if (*(char *)(param_1 + 0x128) == '\x01') {
    FUN_1402eb6f0(param_1 + 0xc0,param_2);
    return;
  }
  return;
}



// FUNCTION 1402eb6f0 FUN_1402eb6f0 body=158 status=ok
// SIG undefined FUN_1402eb6f0(void)

undefined8 FUN_1402eb6f0(longlong *param_1,ulonglong param_2)

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
          FUN_1402eb78e(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1402eb78e FUN_1402eb78e body=95 status=ok
// SIG undefined FUN_1402eb78e(void)

void FUN_1402eb78e(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1402eb7ee(param_1,param_2,1);
  return;
}



// FUNCTION 1402eb7ee FUN_1402eb7ee body=136 status=ok
// SIG undefined FUN_1402eb7ee(void)

void FUN_1402eb7ee(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1402eb876 FUN_1402eb876 body=264 status=ok
// SIG undefined FUN_1402eb876(void)

void FUN_1402eb876(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (*(byte **)(param_1 + 0x20) == (byte *)0x0) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0xbf80000000000000;
    puVar1[5] = 0;
    if (puVar1 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x20) = puVar1;
    }
  }
  else if ((**(byte **)(param_1 + 0x20) & 1) != 0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb0c040) && (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
    FUN_145e17f72(&DAT_14cb0bff0);
    atexit(FUN_14374ca90);
    _Init_thread_footer(&DAT_14cb0c040);
  }
  lVar2 = *(longlong *)(param_2 + 0x158);
  if (lVar2 == 0) {
    lVar2 = (**(code **)(DAT_14cb0bff0 + 8))(&DAT_14cb0bff0);
    *(longlong *)(param_2 + 0x158) = lVar2;
  }
  FUN_1402eb97e(lVar2,param_1);
  *(longlong *)(*(longlong *)(param_1 + 0x20) + 0x28) = lVar2;
  **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) | 1;
  return;
}



// FUNCTION 1402eb97e FUN_1402eb97e body=127 status=ok
// SIG undefined FUN_1402eb97e(void)

void FUN_1402eb97e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c [4];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_2;
  if (*(char *)(param_2 + 0xb) == '\x01') {
    FUN_1402eb9fe(param_1 + 8,local_1c,&local_18,0);
    if (*(char *)(param_1 + 0x128) != '\x01') goto LAB_1402eb9b9;
    param_1 = param_1 + 0xc0;
  }
  else {
    param_1 = param_1 + 0x60;
  }
  FUN_1402eb9fe(param_1,local_1c,&local_18,0);
LAB_1402eb9b9:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402eb9fe FUN_1402eb9fe body=335 status=ok
// SIG undefined FUN_1402eb9fe(void)

undefined4 *
FUN_1402eb9fe(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402ebbe4(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1402ebb4e(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1402ebebe(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ebb4e FUN_1402ebb4e body=149 status=ok
// SIG undefined FUN_1402ebb4e(void)

void FUN_1402ebb4e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1402eb7ee(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1402ebbb8;
    }
  }
  uVar1 = 0;
LAB_1402ebbb8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1402ebbe4 FUN_1402ebbe4 body=697 status=ok
// SIG undefined FUN_1402ebbe4(void)

int * FUN_1402ebbe4(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar15);
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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1402ebdc8;
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
LAB_1402ebdc8:
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
    iVar7 = *(int *)(*param_1 + 4 + lVar4 * 0x10);
    *(int *)(param_1 + 6) = iVar7;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar4 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1402ebe9e FUN_1402ebe9e body=31 status=ok
// SIG undefined FUN_1402ebe9e(void)

void FUN_1402ebe9e(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x130,0x10);
  FUN_1402ec168(uVar1);
  return;
}



// FUNCTION 1402ebebe FUN_1402ebebe body=682 status=ok
// SIG undefined FUN_1402ebebe(void)

void FUN_1402ebebe(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1402ebf22;
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
LAB_1402ebf22:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
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
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
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



// FUNCTION 1402ec168 FUN_1402ec168 body=304 status=ok
// SIG undefined FUN_1402ec168(void)

undefined8 * FUN_1402ec168(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0ca28) {
    FUN_144b3d300(&DAT_14cb0ca28);
    if (DAT_14cb0ca28 == -1) {
      FUN_145c49192();
      atexit((_func_5014 *)&LAB_14374ee9e);
      _Init_thread_footer(&DAT_14cb0ca28);
    }
  }
  *param_1 = &DAT_14cb0c050;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x100000000;
  *(undefined4 *)(param_1 + 0x24) = 2;
  *(undefined1 *)(param_1 + 0x25) = 0;
  return param_1;
}



// FUNCTION 1402ec298 FUN_1402ec298 body=142 status=ok
// SIG undefined FUN_1402ec298(void)

void FUN_1402ec298(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
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



// FUNCTION 1402ec326 FUN_1402ec326 body=195 status=ok
// SIG undefined FUN_1402ec326(void)

bool FUN_1402ec326(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  puVar2 = (ulonglong *)param_3[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_3,&local_1c);
    }
  }
  else {
    local_1c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  *(ushort *)(param_2 + 0x28) = (ushort)(local_1c >> 0x12);
  *(ushort *)(param_2 + 0x2a) = (ushort)(local_1c >> 4) & 0x3fff;
  *(ulonglong *)(param_2 + 0x20) = (ulonglong)(local_1c & 0xf) + 1;
  FUN_1402ec3ea(param_2,param_3);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (*(byte *)((longlong)param_3 + 0x29) & 2) == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ec3ea FUN_1402ec3ea body=119 status=ok
// SIG undefined FUN_1402ec3ea(void)

void FUN_1402ec3ea(undefined4 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  uVar2 = 8;
  if (param_3 < 8) {
    uVar2 = param_3;
  }
  while (param_3 != 0) {
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
    param_1 = param_1 + 1;
    param_3 = uVar2 - 1;
    uVar2 = param_3;
  }
  return;
}



// FUNCTION 1402ec461 FUN_1402ec461 body=166 status=ok
// SIG undefined FUN_1402ec461(void)

undefined8 FUN_1402ec461(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  undefined1 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  uStack_20 = 0;
  FUN_1402ec72b(param_2,&local_28);
  local_40 = (ulonglong)(uint)((int)uStack_20 << 4);
  iVar3 = (int)uStack_20;
  if ((int)uStack_20 < 2) {
    iVar3 = 1;
  }
  uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  local_48 = local_28;
  local_38 = 0;
  uVar4 = FUN_1402ec56b(param_1,L"HeightfieldDescriptionsBuffer",0x10,1 << ((byte)lVar2 & 0x1f));
  FUN_1402ec508(&local_28);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ec508 FUN_1402ec508 body=99 status=ok
// SIG undefined FUN_1402ec508(void)

void FUN_1402ec508(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1402ec56b FUN_1402ec56b body=447 status=ok
// SIG undefined FUN_1402ec56b(void)

longlong FUN_1402ec56b(longlong param_1,undefined8 param_2,uint param_3,uint param_4,void *param_5,
                      size_t param_6,byte param_7)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  void *_Dst;
  undefined1 auStack_88 [32];
  undefined1 *local_68;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &local_39;
  local_39 = 0;
  if (DAT_14ca84e48 <= param_3) {
    param_3 = DAT_14ca84e48;
  }
  local_60 = param_3 + (param_3 == 0);
  local_58 = 0x4100;
  uVar4 = DAT_14ca84e48;
  if (param_4 < DAT_14ca84e48) {
    uVar4 = param_4;
  }
  local_50 = 0;
  local_5c = uVar4 + (uVar4 == 0);
  puVar1 = (ulonglong *)(param_1 + 0x70);
  local_48 = param_2;
  lVar5 = FUN_144738de6(param_1 + 0x188,puVar1,&local_48,&local_60);
  if ((param_5 != (void *)0x0) && (param_6 != 0)) {
    _Dst = param_5;
    if ((param_7 & 1) == 0) {
      _Dst = (void *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      uVar6 = (longlong)_Dst + param_6;
      if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
        FUN_140023dd8(puVar1,(int)param_6 + 0x10);
        _Dst = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        uVar6 = (longlong)_Dst + param_6;
      }
      *puVar1 = uVar6;
      memcpy(_Dst,param_5,param_6);
    }
    iVar2 = *(int *)(param_1 + 0x590);
    uVar4 = iVar2 + 1;
    *(uint *)(param_1 + 0x590) = uVar4;
    if (*(uint *)(param_1 + 0x594) < uVar4) {
      FUN_144775ac8((longlong *)(param_1 + 0x588));
    }
    lVar3 = *(longlong *)(param_1 + 0x588);
    lVar7 = (longlong)iVar2 * 0x120;
    *(undefined2 *)(lVar3 + lVar7) = 0;
    *(longlong *)(lVar3 + 8 + lVar7) = lVar5;
    *(void **)(lVar3 + 0x10 + lVar7) = _Dst;
    *(size_t *)(lVar3 + 0x18 + lVar7) = param_6;
    *(undefined8 *)(lVar3 + 0x20 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0x30 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0x60 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0x70 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0xa0 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0xb0 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0xe0 + lVar7) = 0;
    *(undefined8 *)(lVar3 + 0xf0 + lVar7) = 0;
    *(byte *)(lVar5 + 0x24) = *(byte *)(lVar5 + 0x24) | 0x80;
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ec72b FUN_1402ec72b body=2236 status=ok
// SIG undefined FUN_1402ec72b(void)

void FUN_1402ec72b(longlong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_258 [40];
  float local_230;
  float local_22c;
  longlong *local_228;
  double local_220;
  double local_218;
  double local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_198;
  double local_190;
  double local_188;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar4 = (int)param_1[1] * 0xc;
  if ((int)param_1[1] < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar4) {
    FUN_1402ecfea(param_2);
  }
  if (0 < (int)param_1[1]) {
    lVar15 = 0xf0;
    lVar19 = 0;
    local_228 = param_1;
    do {
      lVar9 = *local_228;
      fVar20 = *(float *)(lVar9 + -0xf0 + lVar15);
      local_200 = *(undefined4 *)(lVar9 + -0xe4 + lVar15);
      local_208 = *(undefined8 *)(lVar9 + -0xec + lVar15);
      iVar4 = *(int *)(lVar9 + -0x2c + lVar15);
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        FUN_1447e493a(param_2,iVar5);
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar5 * 0x10;
      *(float *)(lVar14 + lVar16) = fVar20 * (float)(int)((uint)(iVar4 < 2) * 2 + -1);
      *(undefined8 *)(lVar14 + 4 + lVar16) = local_208;
      *(undefined4 *)(lVar14 + 0xc + lVar16) = local_200;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447e493a(param_2,iVar4);
      }
      puVar13 = (undefined4 *)(lVar15 + -0xe0 + lVar9);
      uVar10 = puVar13[1];
      uVar11 = puVar13[2];
      uVar12 = puVar13[3];
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar4 * 0x10);
      *puVar1 = *puVar13;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      iVar4 = puVar13[0x2b];
      iVar5 = puVar13[0x29];
      iVar6 = puVar13[0x2a];
      iVar7 = puVar13[0x28];
      iVar8 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar8 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
        FUN_1447e493a(param_2,iVar8);
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar8 * 0x10;
      *(float *)(lVar14 + lVar16) = (float)(iVar6 - iVar7);
      *(float *)(lVar14 + 4 + lVar16) = (float)(iVar4 - iVar5);
      *(float *)(lVar14 + 8 + lVar16) = 1.0 / (float)(iVar6 - iVar7);
      *(float *)(lVar14 + 0xc + lVar16) = 1.0 / (float)(iVar4 - iVar5);
      lVar14 = lVar9 + -0xd0 + lVar15;
      dVar2 = *(double *)(lVar14 + 0x60);
      local_220 = (double)(float)dVar2;
      dVar22 = *(double *)(lVar14 + 0x68);
      local_218 = (double)(float)dVar22;
      dVar3 = *(double *)(lVar14 + 0x70);
      local_210 = (double)(float)dVar3;
      FUN_144948830(&local_178,&local_220);
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447e493a(param_2,iVar4);
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar4 * 0x10;
      *(float *)(lVar14 + lVar16) = (float)dVar2;
      *(float *)(lVar14 + 4 + lVar16) = (float)dVar22;
      *(float *)(lVar14 + 8 + lVar16) = (float)dVar3;
      *(undefined4 *)(lVar14 + 0xc + lVar16) = 0x3f800000;
      if ((((((9.99999993922529e-09 < ABS(local_178)) || (9.99999993922529e-09 < ABS(local_170))) ||
            (9.99999993922529e-09 < ABS(local_168))) ||
           ((9.99999993922529e-09 < ABS(local_158) || (9.99999993922529e-09 < ABS(local_150))))) ||
          ((9.99999993922529e-09 < ABS(local_148) ||
           ((9.99999993922529e-09 < ABS(local_138) || (9.99999993922529e-09 < ABS(local_130)))))))
         || (9.99999993922529e-09 < ABS(local_128))) {
        FUN_14007522e(&local_1f8,&local_178);
      }
      else {
        puVar17 = &DAT_14c846400;
        puVar18 = &local_1f8;
        for (lVar14 = 0x10; lVar14 != 0; lVar14 = lVar14 + -1) {
          *puVar18 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar18 = puVar18 + 1;
        }
      }
      fVar24 = (float)local_1f8;
      fVar25 = (float)local_1d8;
      fVar28 = (float)local_1b8;
      fVar29 = (float)local_198;
      fVar32 = (float)uStack_1f0;
      fVar26 = (float)local_1d0;
      fVar27 = (float)local_1b0;
      fVar23 = (float)local_190;
      fVar30 = (float)local_1a8;
      fVar31 = (float)local_188;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      fVar20 = (float)local_1e8;
      fVar21 = (float)local_1c8;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        local_230 = (float)local_1c8;
        local_22c = (float)local_1e8;
        FUN_1447e493a(param_2,iVar4);
        fVar20 = local_22c;
        fVar21 = local_230;
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar4 * 0x10;
      *(float *)(lVar14 + lVar16) = fVar24;
      *(float *)(lVar14 + 4 + lVar16) = fVar25;
      *(float *)(lVar14 + 8 + lVar16) = fVar28;
      *(float *)(lVar14 + 0xc + lVar16) = fVar29;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447e493a(param_2,iVar4);
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar4 * 0x10;
      *(float *)(lVar14 + lVar16) = fVar32;
      *(float *)(lVar14 + 4 + lVar16) = fVar26;
      *(float *)(lVar14 + 8 + lVar16) = fVar27;
      *(float *)(lVar14 + 0xc + lVar16) = fVar23;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447e493a(param_2,iVar4);
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar4 * 0x10;
      *(float *)(lVar14 + lVar16) = fVar20;
      *(float *)(lVar14 + 4 + lVar16) = fVar21;
      *(float *)(lVar14 + 8 + lVar16) = fVar30;
      *(float *)(lVar14 + 0xc + lVar16) = fVar31;
      fVar24 = (float)local_178;
      fVar25 = (float)local_158;
      fVar28 = (float)local_138;
      fVar29 = (float)local_118;
      fVar23 = (float)local_170;
      fVar26 = (float)local_150;
      fVar27 = (float)local_130;
      fVar32 = (float)local_110;
      fVar30 = (float)local_128;
      fVar31 = (float)local_108;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      fVar20 = (float)local_168;
      fVar21 = (float)local_148;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        local_230 = (float)local_148;
        local_22c = (float)local_168;
        FUN_1447e493a(param_2,iVar4);
        fVar20 = local_22c;
        fVar21 = local_230;
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar4 * 0x10;
      *(float *)(lVar14 + lVar16) = fVar24;
      *(float *)(lVar14 + 4 + lVar16) = fVar25;
      *(float *)(lVar14 + 8 + lVar16) = fVar28;
      *(float *)(lVar14 + 0xc + lVar16) = fVar29;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447e493a(param_2,iVar4);
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar4 * 0x10;
      *(float *)(lVar14 + lVar16) = fVar23;
      *(float *)(lVar14 + 4 + lVar16) = fVar26;
      *(float *)(lVar14 + 8 + lVar16) = fVar27;
      *(float *)(lVar14 + 0xc + lVar16) = fVar32;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447e493a(param_2,iVar4);
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar4 * 0x10;
      *(float *)(lVar14 + lVar16) = fVar20;
      *(float *)(lVar14 + 4 + lVar16) = fVar21;
      *(float *)(lVar14 + 8 + lVar16) = fVar30;
      *(float *)(lVar14 + 0xc + lVar16) = fVar31;
      local_1f8 = 0.0;
      uStack_1f0 = 0.0;
      if ((ulonglong)*(uint *)(lVar9 + lVar15) < 4) {
        *(undefined4 *)((longlong)&local_1f8 + (ulonglong)*(uint *)(lVar9 + lVar15) * 4) =
             0x3f800000;
      }
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447e493a(param_2,iVar4);
      }
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar4 * 0x10);
      *puVar1 = (undefined4)local_1f8;
      puVar1[1] = local_1f8._4_4_;
      puVar1[2] = (undefined4)uStack_1f0;
      puVar1[3] = uStack_1f0._4_4_;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_1447e493a(param_2,iVar4);
      }
      lVar14 = *param_2;
      lVar16 = (longlong)iVar4 * 0x10;
      FUN_144948818(lVar14 + lVar16,1);
      *(undefined4 *)(lVar14 + lVar16) = *(undefined4 *)(lVar9 + -0x30 + lVar15);
      dVar2 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
      dVar22 = local_148 * local_148 + local_158 * local_158 + local_150 * local_150;
      if (dVar22 <= dVar2) {
        dVar22 = dVar2;
      }
      dVar2 = local_168 * local_168 + local_178 * local_178 + local_170 * local_170;
      if (dVar2 <= dVar22) {
        dVar2 = dVar22;
      }
      *(float *)(lVar14 + 4 + lVar16) = (float)(1.0 / SQRT(dVar2));
      *(undefined8 *)(lVar14 + 8 + lVar16) = 0;
      lVar19 = lVar19 + 1;
      lVar15 = lVar15 + 0x100;
    } while (lVar19 < (int)local_228[1]);
  }
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402ecfea FUN_1402ecfea body=26 status=ok
// SIG undefined FUN_1402ecfea(void)

void FUN_1402ecfea(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1400d07ee(param_1,*(undefined4 *)(param_1 + 8),param_2,0x10);
    return;
  }
  return;
}



// FUNCTION 1402ed004 FUN_1402ed004 body=401 status=ok
// SIG undefined FUN_1402ed004(void)

void FUN_1402ed004(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  
  puVar1 = &DAT_14cb3db48;
  if (param_2 != (undefined8 *)0x0) {
    puVar1 = param_2;
  }
  *(undefined8 **)(param_1 + 8) = puVar1;
  iVar3 = *(int *)(param_1 + 0xa0);
  if (iVar3 < param_3) {
    do {
      puVar1 = (undefined8 *)FUN_14001cc68(0x198,0x10);
      *(undefined4 *)(puVar1 + 1) = 0;
      *puVar1 = &PTR_FUN_14ade2d80;
      puVar1[2] = param_1;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0xffffffff00000000;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x84) = 0;
      puVar1[0x12] = 0;
      puVar1[0x13] = 0;
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xb4) = 0;
      puVar1[0x18] = 0;
      puVar1[0x19] = 0;
      puVar1[0x1a] = 0;
      puVar1[0x1b] = 0;
      *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
      *(undefined8 *)((longlong)puVar1 + 0xe4) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x10c) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x114) = 0;
      puVar1[0x20] = 0;
      puVar1[0x21] = 0;
      puVar1[0x1e] = 0;
      puVar1[0x1f] = 0;
      *(undefined8 *)((longlong)puVar1 + 300) = 0;
      *(undefined8 *)((longlong)puVar1 + 0x134) = 0;
      puVar1[0x24] = 0;
      puVar1[0x25] = 0;
      puVar1[0x28] = 0;
      puVar1[0x29] = 0;
      puVar1[0x2c] = 0;
      puVar1[0x2d] = 0;
      puVar1[0x2e] = 0;
      puVar1[0x2f] = 0;
      *(undefined4 *)(puVar1 + 0x30) = 1;
      puVar1[0x31] = 0;
      puVar1[0x32] = 0;
      *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
        FUN_140e69270(param_1 + 0x88,iVar3);
      }
      lVar2 = *(longlong *)(param_1 + 0x98);
      if (*(longlong *)(param_1 + 0x98) == 0) {
        lVar2 = param_1 + 0x88;
      }
      *(undefined8 **)(lVar2 + (longlong)iVar3 * 8) = puVar1;
      iVar3 = *(int *)(param_1 + 0xa0);
    } while (iVar3 < param_3);
  }
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    FUN_1400d3f60(param_1);
    return;
  }
  FUN_144948aec(param_1);
  *(undefined1 *)(param_1 + 0xb0) = 1;
  return;
}



// FUNCTION 1402ed196 FUN_1402ed196 body=21 status=ok
// SIG undefined FUN_1402ed196(void)

undefined8 FUN_1402ed196(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1402ed1ac FUN_1402ed1ac body=482 status=ok
// SIG undefined FUN_1402ed1ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1402ed1ac(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  lVar3 = FUN_140636f1e(*param_1);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar7 = 0;
    do {
      iVar1 = *(int *)(param_1[1] + 4 + lVar7 * 8);
      if ((iVar1 == 0) || (uVar9 = *(uint *)(param_1[1] + lVar7 * 8), (int)uVar9 < 0)) {
LAB_1402ed247:
        plVar5 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)0x0;
        if ((int)uVar9 < DAT_14c9647dc) {
          puVar6 = (undefined8 *)
                   ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != iVar1)) ||
             ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_1402ed247;
          plVar5 = (longlong *)*puVar6;
        }
      }
      (**(code **)(*plVar5 + 0x5e0))(plVar5,param_3);
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_1 + 2));
  }
  FUN_143f7d868(param_1,param_3);
  if (lVar3 != 0) {
    FUN_14496b220();
    iVar1 = *(int *)(param_1 + 2);
    if ((longlong)iVar1 != 0) {
      lVar3 = param_1[1];
      lVar7 = 0;
      do {
        uVar2 = *(ulonglong *)(lVar3 + lVar7);
        if (uVar2 >> 0x20 == 0) {
          (**(code **)(_DAT_00000000 + 0x5f8))(0,param_3);
LAB_1402ed36d:
          lVar4 = 0;
        }
        else {
          uVar9 = (uint)uVar2;
          iVar8 = (int)(uVar2 >> 0x20);
          if ((int)uVar9 < 0) {
LAB_1402ed371:
            plVar5 = (longlong *)0x0;
          }
          else {
            plVar5 = (longlong *)0x0;
            if ((int)uVar9 < DAT_14c9647dc) {
              puVar6 = (undefined8 *)
                       ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)(uVar2 >> 0xd) & 0x3fff8)));
              if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != iVar8)) ||
                 ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_1402ed371;
              plVar5 = (longlong *)*puVar6;
            }
          }
          (**(code **)(*plVar5 + 0x5f8))(plVar5,param_3);
          if ((int)uVar9 < 0) goto LAB_1402ed36d;
          lVar4 = 0;
          if ((int)uVar9 < DAT_14c9647dc) {
            plVar5 = (longlong *)
                     ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0xd & 0x3fff8)));
            if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != iVar8)) ||
               ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) goto LAB_1402ed36d;
            lVar4 = *plVar5;
          }
        }
        *(undefined8 *)(lVar4 + 0x330) = 0;
        *(undefined8 *)(lVar4 + 0x338) = 0;
        lVar7 = lVar7 + 8;
      } while ((longlong)iVar1 * 8 != lVar7);
    }
  }
  return;
}



// FUNCTION 1402ed38e FUN_1402ed38e body=1193 status=ok
// SIG undefined FUN_1402ed38e(void)

void FUN_1402ed38e(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_7e8 [32];
  undefined1 *local_7c8;
  undefined1 local_7c0;
  double local_7b0;
  double local_7a8;
  double local_7a0;
  double local_798;
  double dStack_790;
  double local_788;
  undefined4 uStack_780;
  undefined4 uStack_77c;
  undefined1 local_770 [4];
  float local_76c;
  double local_718;
  double local_710;
  double local_708;
  undefined4 local_6cc;
  byte local_6c3;
  undefined4 local_6a0;
  double local_670;
  double local_668;
  double local_660;
  longlong local_658 [125];
  longlong local_270;
  longlong local_60;
  byte local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_7e8;
  cVar4 = (**(code **)(*param_1 + 0x600))();
  if (cVar4 == '\0') goto LAB_1402ed4d0;
  if (*(char *)((longlong)param_1 + 0x291) == '\x06') {
    lVar5 = 0;
    if ((*(byte *)((longlong)param_1 + 0x349) & 1) != 0) {
      lVar5 = param_1[0x22];
    }
    FUN_1402ed838(local_658,lVar5,1,1);
    (**(code **)(*param_1 + 0x8b0))(param_1,param_3,0);
  }
  else {
    local_670 = (double)(float)param_3;
    local_660 = param_2[2] * local_670;
    local_668 = param_2[1] * local_670;
    local_670 = local_670 * *param_2;
    if (((((local_670 == 0.0) && (!NAN(local_670))) && (local_668 == 0.0)) &&
        ((!NAN(local_668) && (local_660 == 0.0)))) && (!NAN(local_660))) goto LAB_1402ed4d0;
    if ((*(byte *)((longlong)param_1 + 0x349) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = param_1[0x22];
    }
    FUN_1402ed838(local_658,lVar5,1,1);
    plVar1 = param_1 + 0x2f;
    cVar4 = (**(code **)(param_1[0x2f] + 0xe0))(plVar1);
    if (cVar4 == '\0') {
      memset(local_770,0,0x100);
      local_6a0 = 0xffffffff;
      local_6cc = 0xffffffff;
      local_76c = 1.0;
      lVar5 = param_1[0x22];
      local_798 = *(double *)(lVar5 + 0x240);
      dStack_790 = *(double *)(lVar5 + 0x248);
      local_788 = *(double *)(lVar5 + 0x250);
      uStack_780 = *(undefined4 *)(lVar5 + 600);
      uStack_77c = *(undefined4 *)(lVar5 + 0x25c);
      local_7c0 = 0;
      local_7c8 = local_770;
      FUN_1402eda10(param_1,&local_670,&local_798,1);
      if ((local_6c3 & 3) == 1) {
        cVar4 = (**(code **)(*plVar1 + 0xf0))(plVar1);
        if (((cVar4 != '\0') &&
            (cVar4 = (**(code **)(*param_1 + 0x720))(param_1,local_770), cVar4 != '\0')) &&
           (ABS((-(double)param_1[0x46] * local_718 - local_710 * (double)param_1[0x47]) -
                local_708 * (double)param_1[0x48]) < 0.2)) {
          local_788 = (double)param_1[0x48];
          local_798 = (double)param_1[0x46];
          dStack_790 = (double)param_1[0x47];
          dVar3 = local_660 * local_660 + local_670 * local_670 + local_668 * local_668;
          if (((dVar3 != 1.0) ||
              (dVar7 = local_660, dVar8 = local_668, dVar2 = local_670, NAN(dVar3))) &&
             (dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar2 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar3)) {
            dVar2 = 1.0 / SQRT(dVar3);
            dVar7 = local_660 * dVar2;
            dVar8 = local_668 * dVar2;
            dVar2 = dVar2 * local_670;
          }
          fVar6 = (float)(dVar7 * local_788 + dVar2 * local_798 + dVar8 * dStack_790);
          if ((fVar6 < 0.5) && (-0.2 < fVar6)) {
            local_7b0 = (double)(1.0 - local_76c);
            local_7a0 = local_660 * local_7b0;
            local_7a8 = local_668 * local_7b0;
            local_7b0 = local_670 * local_7b0;
            local_7c8 = (undefined1 *)0x0;
            cVar4 = (**(code **)(*param_1 + 0x728))(param_1,&local_798);
            if (cVar4 != '\0') goto joined_r0x0001402ed619;
          }
        }
        local_7c0 = 0;
        local_7c8 = local_770;
        (**(code **)(*param_1 + 0x508))(param_1,&local_670,1.0 - local_76c);
      }
    }
    else {
      (**(code **)(*param_1 + 0x8c8))(param_1,param_2,param_3,param_4);
    }
  }
joined_r0x0001402ed619:
  if ((((local_50 & 1) != 0) && (local_658[0] != 0)) &&
     ((*(uint *)(local_658[0] + 8) >> 0x1e & 1) == 0)) {
    FUN_140248a4c(local_658[0],local_658);
  }
  local_658[0] = 0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_270 != 0) {
    FUN_1400020a8();
  }
LAB_1402ed4d0:
  if ((local_40 ^ (ulonglong)auStack_7e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402ed838 FUN_1402ed838 body=472 status=ok
// SIG undefined FUN_1402ed838(void)

longlong * FUN_1402ed838(longlong *param_1,longlong param_2,int param_3,char param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3ff00000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0x3ff0000000000000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x300000000;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0x200000000;
  bVar1 = *(byte *)(param_1 + 0xc1);
  bVar12 = param_4 << 2 | param_3 == 1 | bVar1 & 0xf8;
  *(byte *)(param_1 + 0xc1) = bVar12;
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) {
    *param_1 = 0;
    *(byte *)(param_1 + 0xc1) = param_4 << 2 | bVar1 & 0xf8;
  }
  else {
    if ((longlong)*(int *)(param_2 + 0x220) < 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = *(longlong *)
               (*(longlong *)(param_2 + 0x218) + -8 + (longlong)*(int *)(param_2 + 0x220) * 8);
    }
    param_1[1] = lVar8;
    plVar10 = (longlong *)(param_2 + 0x240);
    plVar11 = param_1 + 4;
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *plVar11 = *plVar10;
      plVar10 = plVar10 + 1;
      plVar11 = plVar11 + 1;
    }
    lVar9 = *(longlong *)(param_2 + 0x198);
    lVar7 = *(longlong *)(param_2 + 0x1a0);
    param_1[0x12] = *(longlong *)(param_2 + 0x1a8);
    param_1[0x10] = lVar9;
    param_1[0x11] = lVar7;
    lVar9 = *(longlong *)(param_2 + 0x1b0);
    lVar7 = *(longlong *)(param_2 + 0x1b8);
    param_1[0x15] = *(longlong *)(param_2 + 0x1c0);
    param_1[0x13] = lVar9;
    param_1[0x14] = lVar7;
    uVar3 = *(undefined4 *)(param_2 + 0x1c8);
    uVar4 = *(undefined4 *)(param_2 + 0x1cc);
    uVar5 = *(undefined4 *)(param_2 + 0x1d0);
    uVar6 = *(undefined4 *)(param_2 + 0x1d4);
    param_1[0x18] = *(longlong *)(param_2 + 0x1d8);
    *(undefined4 *)(param_1 + 0x16) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0xb4) = uVar4;
    *(undefined4 *)(param_1 + 0x17) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0xbc) = uVar6;
    if (((param_3 == 0) && (lVar8 != 0)) && ((*(byte *)(lVar8 + 0x608) & 1) != 0)) {
      if ((DAT_14cad8700 < 100) || (((byte)DAT_14c872be0 & 0x1f) == 0)) {
        DAT_14cad8700 = DAT_14cad8700 + 1;
      }
      bVar12 = bVar12 | 1;
      *(byte *)(param_1 + 0xc1) = bVar12;
    }
    if ((bVar12 & 1) != 0) {
      iVar2 = *(int *)(param_2 + 0x220);
      *(uint *)(param_2 + 0x220) = iVar2 + 1U;
      if (*(uint *)(param_2 + 0x224) < iVar2 + 1U) {
        FUN_1417c5e3e((longlong *)(param_2 + 0x218),iVar2);
      }
      *(longlong **)(*(longlong *)(param_2 + 0x218) + (longlong)iVar2 * 8) = param_1;
    }
  }
  return param_1;
}



// FUNCTION 1402eda10 FUN_1402eda10 body=419 status=ok
// SIG undefined FUN_1402eda10(void)

undefined4
FUN_1402eda10(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             void *param_5,undefined1 param_6)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0x22] == 0) {
    local_58 = *(undefined8 *)((longlong)param_5 + 0x80);
    local_68 = *(undefined8 *)((longlong)param_5 + 0x70);
    uStack_60 = *(undefined8 *)((longlong)param_5 + 0x78);
    local_78 = *(undefined8 *)((longlong)param_5 + 0x98);
    local_88 = *(undefined8 *)((longlong)param_5 + 0x88);
    uStack_80 = *(undefined8 *)((longlong)param_5 + 0x90);
    uVar4 = 0;
    memset(param_5,0,0x100);
    *(undefined4 *)((longlong)param_5 + 0xd0) = 0xffffffff;
    *(undefined4 *)((longlong)param_5 + 0xa4) = 0xffffffff;
    *(undefined4 *)((longlong)param_5 + 4) = 0x3f800000;
    *(undefined8 *)((longlong)param_5 + 0x80) = local_58;
    *(undefined8 *)((longlong)param_5 + 0x70) = local_68;
    *(undefined8 *)((longlong)param_5 + 0x78) = uStack_60;
    *(undefined8 *)((longlong)param_5 + 0x98) = local_78;
    *(undefined4 *)((longlong)param_5 + 0x88) = (undefined4)local_88;
    *(undefined4 *)((longlong)param_5 + 0x8c) = local_88._4_4_;
    *(undefined4 *)((longlong)param_5 + 0x90) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_5 + 0x94) = uStack_80._4_4_;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar3 = uVar1 | 0xc;
    if (DAT_14cad1f8c != 0) {
      uVar3 = uVar1;
    }
    *(uint *)(param_1 + 0x24) = uVar3;
    local_90 = param_6;
    local_98 = param_5;
    uVar4 = (**(code **)(*param_1 + 0x4e8))();
    *(uint *)(param_1 + 0x24) = uVar1;
    if (((*(byte *)((longlong)param_5 + 0xad) & 2) != 0) && (param_1[0x22] != 0)) {
      (**(code **)(*param_1 + 0x4f0))(param_1,&local_68,param_5);
      cVar2 = (**(code **)(*param_1 + 0x4f8))(param_1,&local_68,param_5,param_3);
      if (cVar2 != '\0') {
        local_90 = param_6;
        local_98 = param_5;
        uVar4 = (**(code **)(*param_1 + 0x4e8))(param_1,param_2,param_3,param_4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1402edbb4 FUN_1402edbb4 body=1784 status=ok
// SIG undefined FUN_1402edbb4(void)

void FUN_1402edbb4(longlong *param_1,double *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_248 [32];
  undefined1 *local_228;
  undefined1 local_220;
  double local_218;
  double dStack_210;
  double local_208;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined1 local_1b8 [4];
  float local_1b4;
  double local_178;
  double local_170;
  double local_168;
  undefined4 local_114;
  byte local_10b;
  undefined1 local_100 [24];
  undefined4 local_e8;
  uint local_e0;
  int local_dc;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  uVar1 = *(uint *)(param_1 + 0x93);
  if ((~uVar1 & 3) == 0) {
    fVar14 = (float)param_3;
    uVar11 = (undefined4)((ulonglong)param_3 >> 0x20);
    dVar3 = param_2[2] * (double)param_1[0x48] +
            *param_2 * (double)param_1[0x46] + (double)param_1[0x47] * param_2[1];
    local_b8 = (double)fVar14;
    local_a8 = (param_2[2] - (double)param_1[0x48] * dVar3) * local_b8;
    local_b0 = (param_2[1] - (double)param_1[0x47] * dVar3) * local_b8;
    local_b8 = (*param_2 - dVar3 * (double)param_1[0x46]) * local_b8;
    memset(local_1b8,0,0x100);
    local_e8 = 0xffffffff;
    local_114 = 0xffffffff;
    local_1b4 = 1.0;
    local_228 = (undefined1 *)CONCAT71(local_228._1_7_,(char)((uVar1 & 4) >> 2));
    (**(code **)(*param_1 + 0x8c0))(param_1,&local_1d8,&local_b8,param_1 + 0x95);
    lVar5 = param_1[0x22];
    local_1f8 = *(double *)(lVar5 + 0x240);
    dStack_1f0 = *(double *)(lVar5 + 0x248);
    local_1e8 = *(double *)(lVar5 + 0x250);
    uStack_1e0 = *(undefined4 *)(lVar5 + 600);
    uStack_1dc = *(undefined4 *)(lVar5 + 0x25c);
    local_220 = 0;
    local_228 = local_1b8;
    FUN_1402eda10(param_1,&local_1d8,&local_1f8,1);
    fVar13 = local_1b4;
    if ((local_10b & 2) == 0) {
      if ((local_10b & 1) != 0) {
        fVar10 = fVar14;
        if ((0.0 < local_1b4) &&
           (9.999999747378752e-05 <
            (-(double)param_1[0x46] * local_178 - local_170 * (double)param_1[0x47]) -
            local_168 * (double)param_1[0x48])) {
          cVar4 = (**(code **)(*param_1 + 0x878))(param_1,local_1b8);
          if (cVar4 != '\0') {
            fVar12 = 1.0 - fVar13;
            local_218 = (double)fVar12;
            local_208 = local_a8 * local_218;
            dStack_210 = local_b0 * local_218;
            local_218 = local_218 * local_b8;
            local_228 = (undefined1 *)((ulonglong)local_228 & 0xffffffffffffff00);
            (**(code **)(*param_1 + 0x8c0))(param_1,&local_1f8,&local_218,local_1b8);
            local_1c8 = local_1e8;
            local_1d8 = local_1f8;
            dStack_1d0 = dStack_1f0;
            uVar11 = 0;
            fVar10 = fVar12 * fVar14;
            lVar5 = param_1[0x22];
            local_1f8 = *(double *)(lVar5 + 0x240);
            dStack_1f0 = *(double *)(lVar5 + 0x248);
            local_1e8 = *(double *)(lVar5 + 0x250);
            uStack_1e0 = *(undefined4 *)(lVar5 + 600);
            uStack_1dc = *(undefined4 *)(lVar5 + 0x25c);
            local_220 = 0;
            local_228 = local_1b8;
            FUN_1402eda10(param_1,&local_1d8,&local_1f8,1);
            fVar13 = fVar12 * local_1b4 + fVar13;
            if (1.0 <= fVar13) {
              fVar13 = 1.0;
            }
            if (fVar13 <= 0.0) {
              fVar13 = 0.0;
            }
          }
        }
        if ((local_10b & 3) == 1) {
          cVar4 = (**(code **)(*param_1 + 0x720))(param_1,local_1b8);
          if ((cVar4 == '\0') &&
             ((*(longlong *)(param_1[0x3e] + 0x450) == 0 ||
              (cVar4 = FUN_144a3f970(local_100,
                                     *(undefined8 *)(*(longlong *)(param_1[0x3e] + 0x450) + 0xa8)),
              cVar4 == '\0')))) {
            if ((((local_dc == 0) || ((int)local_e0 < 0)) ||
                ((DAT_14c9647dc <= (int)local_e0 ||
                 ((puVar7 = (undefined8 *)
                            ((ulonglong)((local_e0 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_e0 >> 0x10) * 8)),
                  puVar7 == (undefined8 *)0x0 || (*(int *)(puVar7 + 2) != local_dc)))))) ||
               ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_1402ee248;
            if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
              plVar6 = (longlong *)*puVar7;
            }
            else {
              plVar6 = (longlong *)0x0;
            }
            cVar4 = (**(code **)(*plVar6 + 0x9b0))(plVar6,param_1[0x3e]);
            if (cVar4 != '\0') goto LAB_1402ee248;
            (**(code **)(*param_1 + 0x4c8))(param_1,local_1b8,CONCAT44(uVar11,fVar10),&local_1d8);
            lVar5 = *param_1;
          }
          else {
            lVar5 = param_1[0x22];
            dVar3 = *(double *)(lVar5 + 0x260);
            dVar8 = *(double *)(lVar5 + 0x268);
            dVar2 = *(double *)(lVar5 + 0x270);
            local_1f8 = (double)(1.0 - fVar13);
            local_1e8 = local_a8 * local_1f8;
            dStack_1f0 = local_b0 * local_1f8;
            local_1f8 = local_1f8 * local_b8;
            local_208 = (double)param_1[0x48];
            local_218 = (double)param_1[0x46];
            dStack_210 = (double)param_1[0x47];
            local_228 = param_4;
            cVar4 = (**(code **)(*param_1 + 0x728))(param_1,&local_218,&local_1f8,local_1b8);
            if (cVar4 != '\0') {
              if (((((*(byte *)((longlong)param_1 + 0x5b4) & 1) == 0) &&
                   (*(byte *)((longlong)param_1 + 0x5b4) =
                         *(byte *)((longlong)param_1 + 0x5b4) | 0x20, (char)param_1[0x1f0] == '\0'))
                  && (fVar14 = (1.0 - fVar13) * fVar14, 0.0001 <= fVar14)) &&
                 ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) {
                lVar5 = param_1[0x22];
                dVar9 = 1.0 / (double)fVar14;
                dVar2 = (*(double *)(lVar5 + 0x270) - dVar2) * dVar9;
                dVar8 = (*(double *)(lVar5 + 0x268) - dVar8) * dVar9;
                dVar9 = dVar9 * (*(double *)(lVar5 + 0x260) - dVar3);
                dVar3 = dVar2 * (double)param_1[0x48] +
                        dVar9 * (double)param_1[0x46] + dVar8 * (double)param_1[0x47];
                param_1[0x25] = (longlong)(dVar9 - dVar3 * (double)param_1[0x46]);
                param_1[0x26] = (longlong)(dVar8 - (double)param_1[0x47] * dVar3);
                param_1[0x27] = (longlong)(dVar2 - (double)param_1[0x48] * dVar3);
              }
              goto LAB_1402ee248;
            }
            (**(code **)(*param_1 + 0x4c8))(param_1,local_1b8,CONCAT44(uVar11,fVar10),&local_1d8);
            lVar5 = *param_1;
          }
          local_228 = local_1b8;
          local_220 = 1;
          (**(code **)(lVar5 + 0x508))(param_1,&local_b8,1.0 - fVar13,&local_178);
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0x4c8))(param_1,local_1b8,0,&DAT_14c8464e0);
      local_220 = 1;
      local_228 = local_1b8;
      (**(code **)(*param_1 + 0x508))(param_1,&local_b8,0x3f800000,&local_178);
      if ((local_10b & 2) != 0) {
        (**(code **)(*param_1 + 0x8d0))(param_1,local_1b8);
      }
    }
  }
LAB_1402ee248:
  if ((local_a0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1402ee2ae FUN_1402ee2ae body=1652 status=ok
// SIG undefined FUN_1402ee2ae(void)

undefined8 * FUN_1402ee2ae(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *_Dst;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  bool bVar20;
  undefined1 auStack_208 [40];
  undefined8 *local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  undefined8 *local_1c8;
  longlong local_1c0;
  undefined **local_1b8 [5];
  byte local_190;
  byte local_18f;
  longlong *local_160;
  longlong local_140;
  undefined8 local_128;
  longlong local_120;
  ulonglong local_118;
  undefined8 local_110;
  longlong local_108;
  uint local_100;
  undefined4 local_fc;
  undefined **local_f8;
  longlong *local_f0;
  byte local_d0;
  byte local_cf;
  byte local_ce;
  longlong *local_a0;
  longlong local_80;
  undefined4 *local_68;
  undefined8 local_60;
  ulonglong local_58;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar4 = *param_3;
  uVar13 = *(uint *)(param_3 + 1);
  uVar14 = (ulonglong)(int)uVar13;
  uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
  local_1e0 = param_2;
  local_1c0 = param_1;
  _Dst = (undefined8 *)FUN_14001cc68(0xe8);
  lVar17 = 0;
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0xc) = 0x30c;
  puVar19 = _Dst + 2;
  memset(_Dst + 3,0,0x84);
  *(undefined1 *)((longlong)_Dst + 0x9c) = 5;
  *(undefined2 *)((longlong)_Dst + 0x9e) = 0;
  *(undefined4 *)(_Dst + 0x18) = 0;
  _Dst[0x14] = 0;
  _Dst[0x15] = 0;
  *(undefined8 *)((longlong)_Dst + 0xad) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb5) = 0;
  _Dst[0x19] = 0;
  _Dst[0x1a] = 0;
  *(undefined2 *)(_Dst + 0x1b) = 0;
  *_Dst = &PTR_FUN_14a34fd18;
  _Dst[0x1c] = 0;
  local_108 = lVar4;
  local_100 = uVar13;
  local_fc = uVar3;
  memset(local_1b8,0,0x90);
  FUN_144869430(local_1b8);
  local_128 = 0;
  local_1b8[0] = &PTR_FUN_149e1ddc0;
  local_110 = 0x7fffffffffffffff;
  local_190 = local_190 | 1;
  local_18f = local_18f | 1;
  local_120 = lVar4;
  local_118 = uVar14;
  FUN_1402ee999(local_1b8,puVar19);
  lVar2 = lVar4 + uVar14;
  local_1d0 = local_128;
  if (3 < uVar14) {
    lVar17 = (longlong)*(int *)(lVar2 + -4);
  }
  puVar18 = _Dst + 0x18;
  lVar17 = -lVar17;
  do {
    lVar10 = lVar17;
    if (-5 < lVar10) goto LAB_1402ee7ed;
    uVar12 = (ulonglong)*(uint *)(lVar2 + 1 + lVar10);
    bVar20 = *(char *)(lVar2 + lVar10) != 'p';
    uVar9 = uVar12;
    if (!bVar20 && uVar12 == 5) {
      uVar9 = 0;
    }
    lVar17 = uVar9 + 5 + lVar10;
  } while (bVar20 || uVar12 != 5);
  puVar6 = (undefined4 *)(lVar10 + 5 + lVar2);
  if (puVar6 != (undefined4 *)0x0) {
    *(undefined1 *)((longlong)_Dst + 0xbc) = *(undefined1 *)(puVar6 + 1);
    *(undefined4 *)(_Dst + 0x17) = *puVar6;
    if (uVar13 < 4) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)*(int *)(lVar2 + -4);
    }
    lVar17 = -lVar17;
    do {
      lVar10 = lVar17;
      local_1d8 = uVar14;
      if (-5 < lVar10) goto LAB_1402ee4b4;
      uVar16 = *(uint *)(lVar2 + 1 + lVar10);
      bVar20 = *(char *)(lVar2 + lVar10) != 'v';
      uVar9 = (ulonglong)uVar16;
      if (!bVar20) {
        uVar9 = 0;
      }
      lVar17 = uVar9 + 5 + lVar10;
    } while (bVar20);
    puVar6 = (undefined4 *)(lVar10 + 5 + lVar2);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar16)) {
      local_1c8 = puVar18;
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = (ulonglong)uVar16;
      FUN_14736909a(&local_f8);
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      FUN_144a7fc42();
      uVar13 = (uint)local_1d8;
      puVar18 = local_1c8;
    }
LAB_1402ee4b4:
    if (uVar13 < 4) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)*(int *)(lVar2 + -4);
    }
    lVar17 = -lVar17;
    do {
      lVar10 = lVar17;
      if (-5 < lVar10) goto LAB_1402ee505;
      uVar9 = (ulonglong)*(uint *)(lVar2 + 1 + lVar10);
      bVar20 = *(char *)(lVar2 + lVar10) != 'x';
      uVar14 = uVar9;
      if (!bVar20 && uVar9 == 2) {
        uVar14 = 0;
      }
      lVar17 = uVar14 + 5 + lVar10;
    } while (bVar20 || uVar9 != 2);
    puVar7 = (undefined2 *)(lVar10 + 5 + lVar2);
    if (puVar7 != (undefined2 *)0x0) {
      *(undefined2 *)(_Dst + 0x1b) = *puVar7;
    }
LAB_1402ee505:
    if (uVar13 < 4) {
      lVar17 = 0;
    }
    else {
      lVar17 = (longlong)*(int *)(lVar2 + -4);
    }
    lVar17 = -lVar17;
    do {
      lVar10 = lVar17;
      if (-5 < lVar10) goto LAB_1402ee61f;
      uVar16 = *(uint *)(lVar2 + 1 + lVar10);
      uVar9 = (ulonglong)uVar16;
      bVar20 = *(char *)(lVar2 + lVar10) != 's';
      uVar14 = uVar9;
      if (!bVar20) {
        uVar14 = 0;
      }
      lVar17 = uVar14 + 5 + lVar10;
    } while (bVar20);
    puVar6 = (undefined4 *)(lVar10 + 5 + lVar2);
    if ((puVar6 != (undefined4 *)0x0) && (0 < (int)uVar16)) {
      FUN_144869430(&local_f8);
      local_60 = 0;
      local_50 = '\0';
      local_d0 = local_d0 | 1;
      local_cf = local_cf & 0xfe;
      local_f8 = &PTR_FUN_149e447c0;
      local_68 = puVar6;
      local_58 = uVar9;
      if ((undefined4 *)local_f0[1] < (undefined4 *)*local_f0 + 1) {
        if ((local_ce & 2) == 0) {
          *(undefined4 *)puVar18 = *puVar6;
          local_60 = 4;
        }
        else {
          thunk_FUN_14572512c(&local_f8,puVar18);
        }
      }
      else {
        *(undefined4 *)puVar18 = *(undefined4 *)*local_f0;
        *local_f0 = *local_f0 + 4;
      }
      if (local_50 == '\x01') {
        FUN_1400020a8(local_68);
        local_68 = (undefined4 *)0x0;
      }
      local_f8 = &PTR__purecall_149e35f70;
      uVar13 = (uint)local_1d8;
      if (local_a0 != (longlong *)0x0) {
        if (*local_a0 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_a0);
      }
      if (local_80 != 0) {
        if (*(longlong *)(local_80 + 0x40) != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(local_80);
      }
    }
LAB_1402ee61f:
    FUN_1402eeba3(_Dst,&local_108);
    puVar18 = _Dst + 0x15;
    puVar11 = puVar18;
    if (_Dst == (undefined8 *)0x0) {
      puVar11 = (undefined8 *)0x0;
    }
    cVar5 = FUN_1402ee923(puVar11,*(undefined1 *)((longlong)_Dst + 0x9c));
    puVar11 = local_1e0;
    if (cVar5 != '\0') {
      if (uVar13 < 4) {
        iVar15 = 0;
      }
      else {
        iVar15 = *(int *)(lVar2 + -4);
      }
      uVar16 = iVar15 + (int)local_1d0;
      iVar15 = uVar13 - uVar16;
      *(int *)(_Dst + 0x16) = iVar15;
      if (iVar15 == 0 && *(int *)((longlong)_Dst + 0xb4) == 0) {
        *(undefined4 *)((longlong)_Dst + 0xb4) = 0;
      }
      else {
        FUN_1447a127e(puVar18,iVar15);
        if (uVar13 != uVar16) {
          memcpy((void *)*puVar18,(void *)(lVar4 + (int)local_1d0),(longlong)iVar15);
        }
      }
      *(byte *)((longlong)_Dst + 0x9d) =
           *(byte *)((longlong)_Dst + 0x9d) & 0xfd | *(byte *)(_Dst + 0x17) >> 4 & 2;
      if (_Dst == (undefined8 *)0x0) {
        puVar19 = (undefined8 *)0x0;
      }
      FUN_1402eea41(puVar19);
      goto LAB_1402ee6d4;
    }
  }
LAB_1402ee7ed:
  LOCK();
  *(int *)(_Dst + 1) = *(int *)(_Dst + 1) + 1;
  UNLOCK();
  LOCK();
  puVar1 = (uint *)(_Dst + 1);
  uVar13 = *puVar1;
  *puVar1 = *puVar1 - 1;
  UNLOCK();
  if ((uVar13 & 0x3fffffff) == 1) {
    FUN_144a54812(_Dst);
  }
  _Dst = (undefined8 *)0x0;
  puVar11 = local_1e0;
LAB_1402ee6d4:
  local_1b8[0] = &PTR__purecall_149e35f70;
  if (local_160 != (longlong *)0x0) {
    if (*local_160 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_160);
  }
  if (local_140 != 0) {
    if (*(longlong *)(local_140 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(local_140);
  }
  if (_Dst == (undefined8 *)0x0) {
    *puVar11 = 0;
  }
  else {
    uVar8 = FUN_1402eed00(**(undefined8 **)(local_1c0 + 0x1b0),_Dst);
    _Dst[0x1c] = uVar8;
    *(byte *)((longlong)_Dst + 0x9d) =
         *(byte *)((longlong)_Dst + 0x9d) & 0xfe | *(byte *)(_Dst + 0x17) >> 4 & 1;
    *puVar11 = _Dst;
    LOCK();
    *(int *)(_Dst + 1) = *(int *)(_Dst + 1) + 1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return puVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


