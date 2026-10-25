// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1403d1618 FUN_1403d1618 body=1438 status=ok
// SIG undefined FUN_1403d1618(void)

undefined1 * FUN_1403d1618(longlong param_1,undefined1 *param_2,longlong param_3,float param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined1 *puVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  uint local_a0;
  int local_9c;
  uint *local_98;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  uVar6 = DAT_14c96b238;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
    lVar18 = *(longlong *)(param_1 + 0x1d8);
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      lVar18 = param_1 + 0x1d0;
    }
    iVar15 = *(int *)(lVar18 + (ulonglong)
                               (*(int *)(param_1 + 0x1e0) - 1U & *(uint *)(param_3 + 0x58)) * 4);
    if (iVar15 != -1) {
      plVar3 = (longlong *)(param_1 + 0x198);
      do {
        lVar18 = *plVar3 + (longlong)iVar15 * 0x58;
        if (*(uint *)(*plVar3 + (longlong)iVar15 * 0x58) == *(uint *)(param_3 + 0x58)) {
          if (((lVar18 != 0) && (lVar18 + 8 != 0)) &&
             (fVar22 = *(float *)(lVar18 + 0x2c) - *(float *)(param_3 + 0x24),
             fVar21 = *(float *)(lVar18 + 0x28) - *(float *)(param_3 + 0x20),
             param_4 * param_4 < fVar21 * fVar21 + fVar22 * fVar22)) {
            *param_2 = DAT_14c96b238;
            *(undefined8 *)(param_2 + 0x128) = 0;
            *(undefined8 *)(param_2 + 0x130) = 0x400000000;
            param_2[0x138] = 0;
            *(undefined8 *)(param_2 + 0x140) = 0;
            *(undefined8 *)(param_2 + 0x148) = 0;
            *(undefined8 *)(param_2 + 0x150) = 0;
            *(undefined8 *)(param_2 + 0x158) = 0;
            local_a8 = uVar6;
            FUN_1404dd558(lVar18 + 8,param_2,1,0);
            if (0 < *(int *)(param_2 + 0x130)) {
              if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
                lVar18 = param_1 + 0x1d0;
                if (*(longlong *)(param_1 + 0x1d8) != 0) {
                  lVar18 = *(longlong *)(param_1 + 0x1d8);
                }
                iVar15 = *(int *)(param_1 + 0x1e0);
                iVar16 = iVar15 + 3;
                if (-1 < iVar15) {
                  iVar16 = iVar15;
                }
                if (*(int *)(param_1 + 0x1a0) - *(int *)(param_1 + 0x1cc) < iVar16 >> 2) {
                  lVar8 = param_1 + 0x1a8;
                  local_68 = 0x100000000;
                  local_58 = 0xffffffff;
                  uStack_50 = 0;
                  uStack_60 = lVar8;
                  if (*(int *)(param_1 + 0x1c0) == 0) {
                    iVar15 = 0;
                  }
                  else {
                    FUN_1449c0562(&local_68);
                    iVar15 = *(int *)(param_1 + 0x1c0);
                  }
                  local_88 = (undefined4)local_68;
                  uStack_84 = local_68._4_4_;
                  uStack_80 = (undefined4)uStack_60;
                  uStack_7c = uStack_60._4_4_;
                  uStack_70 = CONCAT44(uStack_4c,uStack_50);
                  local_78 = local_58;
                  uVar7 = local_78;
                  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
                  iVar16 = local_78._4_4_;
                  local_90 = plVar3;
                  if ((local_78._4_4_ != iVar15) || (local_78 = local_58, uStack_60 != lVar8)) {
                    do {
                      local_78 = uVar7;
                      *(undefined4 *)
                       (lVar18 + (longlong)*(int *)(*local_90 + 0x54 + (longlong)iVar16 * 0x58) * 4)
                           = 0xffffffff;
                      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
                      FUN_1449c0562(&local_88);
                      iVar16 = local_78._4_4_;
                      uVar7 = local_78;
                    } while (local_90 != plVar3 ||
                             (CONCAT44(uStack_7c,uStack_80) != lVar8 || local_78._4_4_ != iVar15));
                  }
                }
                else if (0 < iVar15) {
                  lVar8 = 0;
                  do {
                    *(undefined4 *)(lVar18 + lVar8 * 4) = 0xffffffff;
                    lVar8 = lVar8 + 1;
                  } while (lVar8 < *(int *)(param_1 + 0x1e0));
                }
                iVar15 = *(int *)(param_1 + 0x1c0);
                if (iVar15 == 0) {
                  uVar19 = 0;
                  uVar20 = 1;
                  iVar9 = 0;
                  iVar16 = 0;
LAB_1403d18e5:
                  if (iVar9 < iVar15) {
                    local_98 = (uint *)(param_1 + 0x1a8);
                    uVar17 = 0xffffffff;
                    do {
                      local_a0 = uVar17;
                      lVar18 = *plVar3;
                      plVar5 = *(longlong **)(lVar18 + 0x40 + (longlong)iVar9 * 0x58);
                      local_9c = iVar16;
                      if (plVar5 != (longlong *)0x0) {
                        LOCK();
                        plVar2 = plVar5 + 1;
                        *(int *)plVar2 = (int)*plVar2 + -1;
                        UNLOCK();
                        if ((int)*plVar2 == 0) {
                          (**(code **)*plVar5)(plVar5);
                          LOCK();
                          piVar1 = (int *)((longlong)plVar5 + 0xc);
                          *piVar1 = *piVar1 + -1;
                          UNLOCK();
                          if (*piVar1 == 0) {
                            (**(code **)(*plVar5 + 0x10))(plVar5);
                          }
                        }
                      }
                      lVar18 = lVar18 + (longlong)iVar9 * 0x58;
                      plVar5 = *(longlong **)(lVar18 + 0x20);
                      if (plVar5 != (longlong *)0x0) {
                        LOCK();
                        piVar1 = (int *)((longlong)plVar5 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar5 + 0x10))();
                        }
                      }
                      FUN_1447de57f(*(longlong *)(lVar18 + 8),*(undefined4 *)(lVar18 + 0x10));
                      iVar16 = local_9c;
                      if (*(longlong *)(lVar18 + 8) != 0) {
                        FUN_1400020a8();
                      }
                      uVar17 = local_a0 & ~(uint)uVar20;
                      puVar14 = *(uint **)(param_1 + 0x1b8);
                      if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
                        puVar14 = local_98;
                      }
                      iVar15 = *(int *)(param_1 + 0x1c0);
                      iVar9 = (int)uVar19;
                      lVar18 = (longlong)iVar9;
                      uVar10 = puVar14[lVar18] & uVar17;
                      if (uVar10 == 0) {
                        iVar11 = iVar15 + 0x1e;
                        if (-1 < iVar15 + -1) {
                          iVar11 = iVar15 + -1;
                        }
                        iVar11 = iVar11 >> 5;
                        iVar12 = iVar11;
                        if (iVar11 < iVar9) {
                          iVar12 = iVar9;
                        }
                        if (iVar11 <= iVar9) break;
                        lVar8 = 0;
                        while( true ) {
                          iVar16 = iVar16 + 0x20;
                          uVar10 = puVar14[lVar18 + lVar8 + 1];
                          if (uVar10 != 0) break;
                          lVar8 = lVar8 + 1;
                          if (iVar12 - lVar18 == lVar8) goto LAB_1403d19f0;
                        }
                        uVar19 = (ulonglong)(iVar9 + (int)lVar8 + 1);
                        uVar17 = 0xffffffff;
                      }
                      uVar20 = (ulonglong)(-uVar10 & uVar10);
                      uVar4 = uVar20 * 2 + 1;
                      lVar18 = 0x3f;
                      if (uVar4 != 0) {
                        for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                        }
                      }
                      iVar9 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                    } while (iVar9 < iVar15);
                  }
                }
                else {
                  puVar14 = *(uint **)(param_1 + 0x1b8);
                  if (*(uint **)(param_1 + 0x1b8) == (uint *)0x0) {
                    puVar14 = (uint *)(param_1 + 0x1a8);
                  }
                  uVar17 = *puVar14;
                  if (uVar17 != 0) {
                    uVar19 = 0;
                    iVar16 = 0;
LAB_1403d18c1:
                    uVar20 = (ulonglong)(-uVar17 & uVar17);
                    uVar4 = uVar20 * 2 + 1;
                    lVar18 = 0x3f;
                    if (uVar4 != 0) {
                      for (; uVar4 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                      }
                    }
                    iVar9 = (iVar16 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                    if (iVar15 <= iVar9) {
                      iVar9 = iVar15;
                    }
                    goto LAB_1403d18e5;
                  }
                  iVar16 = iVar15 + 0x1e;
                  if (-1 < iVar15 + -1) {
                    iVar16 = iVar15 + -1;
                  }
                  uVar19 = 0;
                  uVar20 = (ulonglong)(uint)(iVar16 >> 5);
                  if (iVar16 >> 5 < 1) {
                    uVar20 = uVar19;
                  }
                  iVar16 = 0;
                  while (uVar20 != uVar19) {
                    iVar16 = iVar16 + 0x20;
                    uVar17 = puVar14[uVar19 + 1];
                    uVar19 = uVar19 + 1;
                    if (uVar17 != 0) goto LAB_1403d18c1;
                  }
                }
LAB_1403d19f0:
                *(undefined4 *)(param_1 + 0x1a0) = 0;
                if (*(int *)(param_1 + 0x1a4) < 0) {
                  FUN_140e91948(plVar3,0);
                }
                *(undefined8 *)(param_1 + 0x1c8) = 0xffffffff;
                *(undefined4 *)(param_1 + 0x1c0) = 0;
              }
              if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0();
              }
              return param_2;
            }
            FUN_1447fa2ac(*(undefined8 *)(param_2 + 0x150),*(undefined4 *)(param_2 + 0x158));
            if (*(longlong *)(param_2 + 0x150) != 0) {
              FUN_1400020a8();
            }
            plVar3 = *(longlong **)(param_2 + 0x148);
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar5 = plVar3 + 1;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)*plVar5 == 0) {
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
            puVar13 = param_2 + 8;
            if (*(undefined1 **)(param_2 + 0x128) != (undefined1 *)0x0) {
              puVar13 = *(undefined1 **)(param_2 + 0x128);
            }
            FUN_1447157bd(puVar13,*(undefined4 *)(param_2 + 0x130));
            if (*(longlong *)(param_2 + 0x128) != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar15 = *(int *)(lVar18 + 0x50);
      } while (iVar15 != -1);
    }
  }
  *param_2 = DAT_14c96b238;
  *(undefined8 *)(param_2 + 0x128) = 0;
  *(undefined8 *)(param_2 + 0x130) = 0x400000000;
  param_2[0x138] = 0;
  *(undefined8 *)(param_2 + 0x140) = 0;
  *(undefined8 *)(param_2 + 0x148) = 0;
  *(undefined8 *)(param_2 + 0x150) = 0;
  *(undefined8 *)(param_2 + 0x158) = 0;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
}



// FUNCTION 1403d1bb8 FUN_1403d1bb8 body=275 status=ok
// SIG undefined FUN_1403d1bb8(void)

undefined1 *
FUN_1403d1bb8(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1403d1ccc();
  bVar2 = true;
  if (((local_40 != 0) && (*(int *)(local_40 + 0x30) != 0)) &&
     (*(longlong **)(local_40 + 0x28) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(local_40 + 0x28) + 0x30))();
    if (cVar3 != '\0') {
      if (*(int *)(local_40 + 0x30) == 0) {
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar4 = *(longlong **)(local_40 + 0x28);
      }
      (**(code **)(*plVar4 + 0x58))(plVar4,param_2,param_3,param_4);
      bVar2 = false;
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (bVar2) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d1ccc FUN_1403d1ccc body=174 status=ok
// SIG undefined FUN_1403d1ccc(void)

undefined8 * FUN_1403d1ccc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  iVar3 = *(int *)(param_1 + 0x1b8);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1b0);
    lVar8 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar8);
      uVar7 = FUN_1401fcf8e();
      cVar6 = (**(code **)(*plVar5 + 8))(plVar5,uVar7);
      if (cVar6 != '\0') {
        uVar7 = *(undefined8 *)(lVar4 + lVar8);
        plVar5 = *(longlong **)(lVar4 + 8 + lVar8);
        if (plVar5 == (longlong *)0x0) {
          *param_2 = uVar7;
          param_2[1] = 0;
          return param_2;
        }
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar7;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)iVar3 * 0x10 != lVar8);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1403d1d7a FUN_1403d1d7a body=236 status=ok
// SIG undefined FUN_1403d1d7a(void)

void FUN_1403d1d7a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x31) & 8) == 0) {
    FUN_1400b73c8(param_1,param_1 + 0x3b);
    if (*(char *)(param_1 + 0x3b) == '\0') {
      *(undefined1 *)(param_1 + 0x3b) = 1;
      FUN_14094e0ca(param_1,param_1 + 0x3b,0,0);
    }
  }
  FUN_1403d1ccc(param_1,&local_38);
  if (((local_38 != 0) && (*(int *)(local_38 + 0x50) != 0)) &&
     (*(longlong **)(local_38 + 0x48) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(local_38 + 0x48) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(local_38 + 0x50) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(local_38 + 0x48);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3);
    }
  }
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_30 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d1e68 FUN_1403d1e68 body=226 status=ok
// SIG undefined FUN_1403d1e68(void)

void FUN_1403d1e68(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1 + 0x31) & 8) == 0) {
    FUN_1400b73c8(param_1,param_1 + 0x3b);
    if (*(char *)(param_1 + 0x3b) != '\0') {
      *(undefined1 *)(param_1 + 0x3b) = 0;
      FUN_14094e0ca(param_1,param_1 + 0x3b,0,0);
    }
  }
  FUN_1403d1ccc(param_1,&local_30);
  if (((local_30 != 0) && (*(int *)(local_30 + 0x60) != 0)) &&
     (*(longlong **)(local_30 + 0x58) != (longlong *)0x0)) {
    cVar2 = (**(code **)(**(longlong **)(local_30 + 0x58) + 0x30))();
    if (cVar2 != '\0') {
      if (*(int *)(local_30 + 0x60) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(local_30 + 0x58);
      }
      (**(code **)(*plVar3 + 0x58))(plVar3,param_2);
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d1f4c FUN_1403d1f4c body=85 status=ok
// SIG undefined FUN_1403d1f4c(void)

undefined8 FUN_1403d1f4c(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int7 iVar4;
  undefined8 uVar3;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  uVar2 = (ulonglong)*(int *)(param_1 + 0x130);
  if ((longlong)uVar2 < 1) {
    uVar3 = 0;
  }
  else {
    lVar5 = param_1 + 8;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x128);
    }
    iVar4 = (int7)(int3)((uint)*(int *)(param_1 + 0x130) >> 8);
    if (*(longlong *)(lVar5 + 0x38) == param_2) {
      uVar3 = CONCAT71(iVar4,1);
    }
    else {
      plVar6 = (longlong *)(lVar5 + 0x80);
      uVar1 = 1;
      do {
        uVar7 = uVar1;
        if (uVar2 == uVar7) break;
        lVar5 = *plVar6;
        plVar6 = plVar6 + 9;
        uVar1 = uVar7 + 1;
      } while (lVar5 != param_2);
      uVar3 = CONCAT71(iVar4,uVar7 < uVar2);
    }
  }
  return uVar3;
}



// FUNCTION 1403d1fa2 FUN_1403d1fa2 body=888 status=ok
// SIG undefined FUN_1403d1fa2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403d1fa2(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar18 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar18 = *(longlong *)(param_1 + 0x128);
  }
  if ((longlong)*(int *)(param_1 + 0x130) != 0) {
    lVar17 = 0;
    do {
      if (*(longlong *)(lVar18 + 0x38 + lVar17) == *param_3) {
        iVar20 = (int)(lVar17 >> 3) * 0x38e38e39;
        if (iVar20 != -1) {
          lVar17 = (longlong)iVar20;
          cVar6 = *(char *)(*(longlong *)(param_1 + 0x150) + 0x10 + lVar17 * 0x14);
          if (cVar6 == '\x01') {
            puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x150) + lVar17 * 0x14);
            local_78 = *puVar3;
            uStack_70 = puVar3[1];
            local_28 = *(undefined8 *)(lVar18 + 0x30 + lVar17 * 0x48);
            puVar4 = (undefined8 *)(lVar18 + lVar17 * 0x48);
            local_58 = *puVar4;
            uStack_50 = puVar4[1];
            puVar4 = (undefined8 *)(lVar18 + 0x10 + lVar17 * 0x48);
            local_48 = *puVar4;
            uStack_40 = puVar4[1];
            puVar4 = (undefined8 *)(lVar18 + 0x20 + lVar17 * 0x48);
            local_38 = *puVar4;
            uStack_30 = puVar4[1];
            uVar7 = *(undefined8 *)(lVar18 + 0x38 + lVar17 * 0x48);
            plVar19 = *(longlong **)(lVar18 + 0x40 + lVar17 * 0x48);
            if (plVar19 == (longlong *)0x0) {
              puVar4 = (undefined8 *)(lVar18 + lVar17 * 0x48);
              param_2[6] = puVar4[6];
              uVar12 = *puVar4;
              uVar13 = puVar4[1];
              uVar14 = puVar4[2];
              uVar15 = puVar4[3];
              uVar16 = puVar4[5];
              param_2[4] = puVar4[4];
              param_2[5] = uVar16;
              param_2[2] = uVar14;
              param_2[3] = uVar15;
              *param_2 = uVar12;
              param_2[1] = uVar13;
              param_2[7] = uVar7;
              param_2[8] = 0;
              *(undefined1 *)(param_2 + 0xb) = 1;
              uVar8 = *(undefined4 *)((longlong)puVar3 + 4);
              uVar9 = *(undefined4 *)(puVar3 + 1);
              uVar10 = *(undefined4 *)((longlong)puVar3 + 0xc);
              *(undefined4 *)(param_2 + 9) = *(undefined4 *)puVar3;
              *(undefined4 *)((longlong)param_2 + 0x4c) = uVar8;
              *(undefined4 *)(param_2 + 10) = uVar9;
              *(undefined4 *)((longlong)param_2 + 0x54) = uVar10;
              goto LAB_1403d224d;
            }
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            param_2[6] = local_28;
            local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
            uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
            local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
            uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
            *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
            *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
            *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
            *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
            *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
            *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
            *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
            *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
            *param_2 = local_58;
            param_2[1] = uStack_50;
            param_2[7] = uVar7;
            param_2[8] = plVar19;
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
            *(undefined1 *)(param_2 + 0xb) = 1;
            local_68._0_4_ = (undefined4)local_78;
            local_68._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
            uStack_60._0_4_ = (undefined4)uStack_70;
            uStack_60._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
            *(undefined4 *)(param_2 + 9) = (undefined4)local_68;
            *(undefined4 *)((longlong)param_2 + 0x4c) = local_68._4_4_;
            *(undefined4 *)(param_2 + 10) = (undefined4)uStack_60;
            *(undefined4 *)((longlong)param_2 + 0x54) = uStack_60._4_4_;
            local_68 = local_78;
            uStack_60 = uStack_70;
            goto LAB_1403d20b3;
          }
          local_28 = *(undefined8 *)(lVar18 + 0x30 + lVar17 * 0x48);
          puVar3 = (undefined8 *)(lVar18 + lVar17 * 0x48);
          local_58 = *puVar3;
          uStack_50 = puVar3[1];
          puVar3 = (undefined8 *)(lVar18 + 0x10 + lVar17 * 0x48);
          local_48 = *puVar3;
          uStack_40 = puVar3[1];
          puVar3 = (undefined8 *)(lVar18 + 0x20 + lVar17 * 0x48);
          local_38 = *puVar3;
          uStack_30 = puVar3[1];
          uVar7 = *(undefined8 *)(lVar18 + 0x38 + lVar17 * 0x48);
          plVar19 = *(longlong **)(lVar18 + 0x40 + lVar17 * 0x48);
          if (plVar19 == (longlong *)0x0) {
            puVar5 = (undefined4 *)(lVar18 + lVar17 * 0x48);
            param_2[6] = *(undefined8 *)(puVar5 + 0xc);
            uVar8 = *puVar5;
            uVar9 = puVar5[1];
            uVar10 = puVar5[2];
            uVar11 = puVar5[3];
            uVar12 = *(undefined8 *)(puVar5 + 4);
            uVar13 = *(undefined8 *)(puVar5 + 6);
            uVar14 = *(undefined8 *)(puVar5 + 10);
            param_2[4] = *(undefined8 *)(puVar5 + 8);
            param_2[5] = uVar14;
            param_2[2] = uVar12;
            param_2[3] = uVar13;
            *(undefined4 *)param_2 = uVar8;
            *(undefined4 *)((longlong)param_2 + 4) = uVar9;
            *(undefined4 *)(param_2 + 1) = uVar10;
            *(undefined4 *)((longlong)param_2 + 0xc) = uVar11;
            param_2[7] = uVar7;
            param_2[8] = 0;
            *(char *)(param_2 + 0xb) = cVar6;
            goto LAB_1403d224d;
          }
          LOCK();
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          UNLOCK();
          param_2[6] = local_28;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          local_48._4_4_ = (undefined4)((ulonglong)local_48 >> 0x20);
          uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
          local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
          uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
          *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
          *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
          *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
          *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
          *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
          *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
          *(undefined4 *)param_2 = (undefined4)local_58;
          *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
          *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
          param_2[7] = uVar7;
          param_2[8] = plVar19;
          LOCK();
          *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
          UNLOCK();
          *(char *)(param_2 + 0xb) = cVar6;
          goto LAB_1403d20b3;
        }
        break;
      }
      lVar17 = lVar17 + 0x48;
    } while ((longlong)*(int *)(param_1 + 0x130) * 0x48 != lVar17);
  }
  FUN_140f0b848();
  plVar19 = DAT_14c96b100;
  uVar16 = DAT_14c96b0f8;
  uVar15 = DAT_14c96b0f0;
  uVar14 = uRam000000014c96b0e8;
  uVar13 = _DAT_14c96b0e0;
  uVar12 = uRam000000014c96b0d8;
  uVar7 = _DAT_14c96b0d0;
  uVar11 = uRam000000014c96b0cc;
  uVar10 = uRam000000014c96b0c8;
  uVar9 = uRam000000014c96b0c4;
  uVar8 = _DAT_14c96b0c0;
  local_58 = CONCAT44(uRam000000014c96b0c4,_DAT_14c96b0c0);
  uStack_50 = CONCAT44(uRam000000014c96b0cc,uRam000000014c96b0c8);
  local_48 = _DAT_14c96b0d0;
  uStack_40 = uRam000000014c96b0d8;
  local_38 = _DAT_14c96b0e0;
  uStack_30 = uRam000000014c96b0e8;
  local_28 = DAT_14c96b0f0;
  if (DAT_14c96b100 == (longlong *)0x0) {
    param_2[6] = DAT_14c96b0f0;
    uVar7 = uRam000000014c96b0e8;
    param_2[4] = _DAT_14c96b0e0;
    param_2[5] = uVar7;
    uVar7 = uRam000000014c96b0d8;
    param_2[2] = _DAT_14c96b0d0;
    param_2[3] = uVar7;
    uVar10 = uRam000000014c96b0cc;
    uVar9 = uRam000000014c96b0c8;
    uVar8 = uRam000000014c96b0c4;
    *(undefined4 *)param_2 = _DAT_14c96b0c0;
    *(undefined4 *)((longlong)param_2 + 4) = uVar8;
    *(undefined4 *)(param_2 + 1) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar10;
    param_2[7] = uVar16;
    param_2[8] = 0;
    *(undefined1 *)(param_2 + 0xb) = 0;
LAB_1403d224d:
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  else {
    LOCK();
    *(int *)(DAT_14c96b100 + 1) = (int)DAT_14c96b100[1] + 1;
    UNLOCK();
    param_2[6] = uVar15;
    local_48._0_4_ = (undefined4)uVar7;
    local_48._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uStack_40._0_4_ = (undefined4)uVar12;
    uStack_40._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_38._0_4_ = (undefined4)uVar13;
    local_38._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
    uStack_30._0_4_ = (undefined4)uVar14;
    uStack_30._4_4_ = (undefined4)((ulonglong)uVar14 >> 0x20);
    *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
    *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
    *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
    *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
    *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
    *(undefined4 *)param_2 = uVar8;
    *(undefined4 *)((longlong)param_2 + 4) = uVar9;
    *(undefined4 *)(param_2 + 1) = uVar10;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar11;
    param_2[7] = uVar16;
    param_2[8] = plVar19;
    LOCK();
    *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
    UNLOCK();
    *(undefined1 *)(param_2 + 0xb) = 0;
    local_48 = uVar7;
    uStack_40 = uVar12;
    local_38 = uVar13;
    uStack_30 = uVar14;
LAB_1403d20b3:
    *(undefined1 *)(param_2 + 0xc) = 1;
    LOCK();
    plVar1 = plVar19 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  plVar19 = (longlong *)param_3[1];
  if (plVar19 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar19 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar19)(plVar19);
      LOCK();
      piVar2 = (int *)((longlong)plVar19 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403d232e FUN_1403d232e body=61 status=ok
// SIG undefined FUN_1403d232e(void)

undefined8 * FUN_1403d232e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7dc440;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403d236c caseD_40 body=37 status=ok
// SIG undefined caseD_40(void)

undefined4 switchD_143c3d4dc::caseD_40(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_1403d2392();
  if (cVar1 == '\0') {
    uVar2 = CONCAT31((int3)(*(uint *)(param_1 + 8) >> 8),(*(uint *)(param_1 + 8) >> 0x1e & 1) == 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1403d2392 FUN_1403d2392 body=374 status=ok
// SIG undefined FUN_1403d2392(void)

undefined8 FUN_1403d2392(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined4 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = DAT_14c949118;
  do {
    if (param_1 == 0) {
      uVar3 = 0;
LAB_1403d23f5:
      if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return uVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    if (lVar2 == 0) {
      local_38 = FUN_140631fbe;
      lVar2 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar2;
      FUN_1446f470e(local_30,L"Class",1);
      local_48 = &LAB_146891e90;
      local_50 = &LAB_146273097;
      local_60 = L"Engine";
      local_58 = 199;
      local_68 = 0x20;
      local_70 = 0x10000000;
      local_78 = (wchar_t *)CONCAT44(local_78._4_4_,8);
      local_40 = &local_38;
      FUN_14574b4b2(lVar2);
      DAT_14c949118 = lVar2;
      uVar3 = FUN_144a7a812();
      lVar2 = DAT_14c949118;
      uVar4 = FUN_1449e2fb2();
      local_78 = L"Class";
      FUN_14574b446(uVar4,lVar2,uVar3,L"/Script/CoreUObject");
      lVar2 = DAT_14c949118;
    }
    lVar1 = *(longlong *)(param_1 + 0x10);
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30)) && ((*(byte *)(param_1 + 0xd6) & 4) != 0)) ||
       (((*(uint *)(param_1 + 8) & 0x10) != 0 && ((*(byte *)(lVar1 + 0xd6) & 4) != 0)))) {
      uVar3 = 1;
      goto LAB_1403d23f5;
    }
    param_1 = *(longlong *)(param_1 + 0x20);
  } while( true );
}



// FUNCTION 1403d256d FUN_1403d256d body=356 status=ok
// SIG undefined FUN_1403d256d(void)

void FUN_1403d256d(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1403d26d2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ae144c0;
  puVar1[5] = &PTR_FUN_14ae14778;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x34) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  puVar1[9] = &PTR_LAB_14ae02690;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *(byte *)(puVar1 + 0x19) = *(byte *)(puVar1 + 0x19) | 0xf;
  *(undefined4 *)((longlong)puVar1 + 0xcc) = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  *(byte *)(puVar1 + 0x2a) = *(byte *)(puVar1 + 0x2a) | 0xf;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
  puVar1[0x1a] = &PTR_LAB_14ae15a90;
  *(byte *)((longlong)puVar1 + 0x15c) = *(byte *)((longlong)puVar1 + 0x15c) & 0xfe;
  *(undefined1 *)(puVar1 + 0x30) = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x184) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x18c) = 0;
  *(uint *)((longlong)puVar1 + 0x194) = (*(uint *)((longlong)puVar1 + 0x194) & 0xfffffff0) + 1;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  FUN_1403d2730(puVar1 + 0x3b);
  puVar1[0x6f] = 0;
  puVar1[0x70] = 0;
  puVar1[0x71] = 0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  puVar1[0x75] = 0;
  puVar1[0x76] = 0;
  *(undefined4 *)(puVar1 + 0x77) = 0;
  return;
}



// FUNCTION 1403d26d2 FUN_1403d26d2 body=94 status=ok
// SIG undefined FUN_1403d26d2(void)

undefined8 * FUN_1403d26d2(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14ad47be0;
  return param_1;
}



// FUNCTION 1403d2730 FUN_1403d2730 body=172 status=ok
// SIG undefined FUN_1403d2730(void)

undefined8 * FUN_1403d2730(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0xffffffff;
  param_1[6] = 0;
  param_1[7] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 8),4000);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x91) = 0;
  *(undefined8 *)((longlong)param_1 + 0x99) = 0;
  memset(param_1 + 0x15,0,0x91);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(byte *)(param_1 + 0x33) = *(byte *)(param_1 + 0x33) & 0xfc;
  return param_1;
}



// FUNCTION 1403d27dc FUN_1403d27dc body=33 status=ok
// SIG undefined FUN_1403d27dc(void)

void FUN_1403d27dc(longlong param_1)

{
  FUN_1403d27fe(param_1 + 0xa8);
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return;
}



// FUNCTION 1403d27fe FUN_1403d27fe body=169 status=ok
// SIG undefined FUN_1403d27fe(void)

undefined8 FUN_1403d27fe(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0xb0) == param_2) {
          FUN_145708b78(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0xb0 + *param_1 + 0xa0);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1403d28a8 FUN_1403d28a8 body=242 status=ok
// SIG undefined FUN_1403d28a8(void)

undefined8 *
FUN_1403d28a8(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_1403d299a();
  puVar6[3] = uVar3;
  lVar4 = DAT_14ca4e628;
  puVar6[4] = DAT_14ca4e628;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14ca4e5e0;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a3041b8;
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



// FUNCTION 1403d299a FUN_1403d299a body=434 status=ok
// SIG undefined FUN_1403d299a(void)

undefined * FUN_1403d299a(void)

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
              0x110) < DAT_14ca4e660) {
    FUN_144b3d300(&DAT_14ca4e660);
    if (DAT_14ca4e660 == -1) {
      FUN_145708c58(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = L"SceneTextures";
      local_70 = L"ShadowDepthPass";
      local_78 = L"FShadowDepthPassUniformParameters";
      local_38 = 0;
      local_50 = 0x460;
      local_58 = 0xf6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4e5e0,1,2);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143042b09);
      _Init_thread_footer(&DAT_14ca4e660);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca4e5e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d2b4e FUN_1403d2b4e body=248 status=ok
// SIG undefined FUN_1403d2b4e(void)

void FUN_1403d2b4e(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *_Src;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = (undefined8 *)param_4[1];
  local_60 = param_4[2];
  FUN_144980096(*param_1,*param_2,param_3,*param_4);
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = param_2[1];
  if (puVar2 != puVar3) {
    iVar1 = *(int *)(puVar3 + 1);
    _Src = (void *)*puVar3;
    *(int *)(puVar2 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)puVar2 + 0xc) == 0) {
      *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
    }
    else {
      FUN_14471726c(puVar2,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*puVar2,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar3 + 2);
  FUN_1449802a2(puVar2,uVar4);
  local_58 = *param_3;
  local_50 = *(undefined4 *)(param_3 + 1);
  FUN_1403d2c48(param_1[2],param_2[2],&local_58,local_60);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d2c48 FUN_1403d2c48 body=1433 status=ok
// SIG undefined FUN_1403d2c48(void)

void FUN_1403d2c48(longlong param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *puVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  int local_1a4;
  undefined8 local_1a0;
  longlong local_198;
  longlong local_190;
  undefined4 *local_188;
  undefined1 local_180 [152];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d0 [64];
  undefined1 *local_90;
  ulonglong local_88;
  uint local_80 [2];
  uint *local_78;
  int local_70;
  uint uStack_6c;
  undefined8 uStack_68;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  uVar10 = 0;
  local_90 = (undefined1 *)0x0;
  local_88 = 0x400000000;
  local_78 = (uint *)0x0;
  local_70 = 0;
  uStack_6c = 0x20;
  uStack_68 = 0xffffffff;
  local_58 = 0;
  local_50 = 0;
  uVar17 = *(uint *)(param_1 + 0x38);
  local_198 = param_1;
  local_188 = param_3;
  if ((longlong)(int)uVar17 != 0) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar17);
    }
    lVar12 = *(longlong *)(param_1 + 0x30);
    FUN_147943e6a(local_d0);
    uVar13 = (ulonglong)(((uVar17 >> 1) - 1) + (uint)(uVar17 >> 1 == 0)) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar5 = 1 << ((byte)lVar14 & 0x1f);
    if (lVar14 == 0) {
      iVar5 = 2;
    }
    if (uVar17 < 4) {
      iVar5 = 2;
    }
    if (local_50 < iVar5) {
      local_50 = iVar5;
      FUN_14794402e();
    }
    lVar14 = (ulonglong)uVar17 << 3;
    do {
      FUN_14794426e(local_d0,local_180,lVar12,0);
      lVar12 = lVar12 + 8;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
    uVar10 = (int)local_88 - uStack_68._4_4_;
  }
  lVar12 = *(longlong *)(param_2 + 0x30);
  iVar5 = *(int *)(param_2 + 0x38);
  uVar13 = (longlong)iVar5 + (longlong)(int)uVar10;
  uVar17 = (uint)uVar13;
  local_190 = param_2;
  if (uVar10 < uVar17) {
    if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar13);
    }
    FUN_147943e6a(local_d0,uVar13 & 0xffffffff);
    uVar13 = (ulonglong)
             ((((uint)(uVar13 >> 1) & 0x7fffffff) - 1) + (uint)((uVar13 >> 1 & 0x7fffffff) == 0)) *
             2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar4 = 1 << ((byte)lVar14 & 0x1f);
    if (lVar14 == 0) {
      iVar4 = 2;
    }
    if (uVar17 < 4) {
      iVar4 = 2;
    }
    if (local_50 < iVar4) {
      local_50 = iVar4;
      FUN_14794402e();
    }
  }
  if (iVar5 != 0) {
    lVar14 = (longlong)iVar5 << 3;
    do {
      FUN_14794426e(local_d0,local_180,lVar12,0);
      lVar12 = lVar12 + 8;
      lVar14 = lVar14 + -8;
    } while (lVar14 != 0);
  }
  iVar5 = local_70;
  if (local_70 == 0) {
    uVar18 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar15 = 0;
  }
  else {
    puVar6 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar6 = local_80;
    }
    uVar17 = *puVar6;
    if (uVar17 == 0) {
      iVar4 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar4 = local_70 + -1;
      }
      uVar13 = 0;
      uVar18 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar18 = uVar13;
      }
      iVar15 = 0;
      do {
        if (uVar18 == uVar13) goto LAB_1403d2d8f;
        iVar15 = iVar15 + 0x20;
        uVar17 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar13 = 0;
      iVar15 = 0;
    }
    uVar18 = (ulonglong)(-uVar17 & uVar17);
    uVar1 = uVar18 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar4) {
      iVar4 = local_70;
    }
  }
  if (iVar4 != local_70) {
    uVar17 = 0xffffffff;
    local_1a0 = param_4;
    do {
      puVar16 = local_90;
      if (local_90 == (undefined1 *)0x0) {
        puVar16 = local_d0;
      }
      lVar12 = (longlong)iVar4 * 0x10;
      local_1a4 = iVar15;
      plVar7 = (longlong *)FUN_1478b0794(*(undefined8 *)(puVar16 + lVar12));
      uVar3 = local_1a0;
      if ((*(int *)(puVar16 + lVar12 + 4) == 0) ||
         (uVar10 = *(uint *)(puVar16 + lVar12), (int)uVar10 < 0)) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = 0;
        if ((int)uVar10 < DAT_14c9647dc) {
          puVar11 = (undefined8 *)
                    ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
          if (((puVar11 == (undefined8 *)0x0) ||
              (*(int *)(puVar11 + 2) != *(int *)(puVar16 + lVar12 + 4))) ||
             ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)) {
            local_1b8 = 0;
          }
          else {
            local_1b8 = *puVar11;
          }
        }
      }
      local_e8 = *local_188;
      uStack_e4 = local_188[1];
      uStack_e0 = local_188[2];
      uStack_dc = local_188[3];
      FUN_14792f89e(local_180,local_198,local_190,&local_e8);
      (**(code **)(*plVar7 + 0x10))(plVar7,local_180,uVar3);
      FUN_147937dd2(local_180);
      uVar17 = uVar17 & ~(uint)uVar18;
      puVar6 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar6 = local_80;
      }
      iVar4 = (int)uVar13;
      lVar12 = (longlong)iVar4;
      uVar10 = puVar6[lVar12] & uVar17;
      iVar15 = local_1a4;
      if (uVar10 == 0) {
        iVar8 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar8 = local_70 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar15 = local_1a4 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar4) {
          iVar9 = iVar4;
        }
        iVar2 = iVar4;
        if (iVar4 < iVar8) {
          lVar14 = 0;
          do {
            uVar10 = puVar6[lVar12 + lVar14 + 1];
            if (uVar10 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar14 + 1);
              uVar17 = 0xffffffff;
              goto LAB_1403d2f91;
            }
            iVar15 = iVar15 + 0x20;
            lVar14 = lVar14 + 1;
            uVar17 = 0xffffffff;
            iVar2 = iVar9;
          } while (iVar9 - lVar12 != lVar14);
        }
        uVar13 = (ulonglong)(iVar2 + 1);
        iVar4 = local_70;
      }
      else {
LAB_1403d2f91:
        uVar18 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar18 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar15 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar4) {
          iVar4 = local_70;
        }
      }
    } while (iVar4 != iVar5);
  }
LAB_1403d2d8f:
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar13 = local_88 >> 0x20;
  local_88 = local_88 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    FUN_144b20932(local_d0,0);
  }
  uStack_68 = 0xffffffff;
  local_70 = 0;
  if (0x20 < uStack_6c) {
    uStack_6c = 0x20;
    FUN_14008f53c(local_80,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403d31e4 FUN_1403d31e4 body=2681 status=ok
// SIG undefined FUN_1403d31e4(void)

void FUN_1403d31e4(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  int local_94;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = param_1;
  local_a8 = param_3;
  if (param_2 != 0) {
    local_90 = param_2;
    FUN_1403d43ee(param_2 + 0x98,0);
    FUN_1457099b0(&local_68);
    if (local_68 != 0) {
      *(undefined1 *)(local_68 + 0x10) = 0;
      iVar11 = (int)local_a8[1];
      *(uint *)(local_a8 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)local_a8 + 0xc) < iVar11 + 1U) {
        FUN_140d2f4b4(local_a8,iVar11);
      }
      lVar16 = *local_a8;
      *(ulonglong *)(lVar16 + (longlong)iVar11 * 0x10) = local_68;
      *(longlong **)(lVar16 + 8 + (longlong)iVar11 * 0x10) = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_60 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)local_60 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    lVar16 = local_b0;
    local_a0 = (longlong *)(local_b0 + 0x1e0);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = local_a0;
    if (*(int *)(local_b0 + 0x1f8) == 0) {
      uVar21 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar11 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar21 = local_68 >> 0x20;
      iVar11 = *(int *)(lVar16 + 0x1f8);
    }
    plVar17 = local_60;
    iVar13 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar10 = local_58._4_4_;
    iVar20 = local_50;
    if (local_58._4_4_ != iVar11 || local_60 != local_a0) {
      do {
        lVar15 = *(longlong *)(*(longlong *)(lVar16 + 0x1d0) + 0x10 + (longlong)iVar10 * 0x20);
        if (0 < *(int *)(lVar15 + 0x18)) {
          FUN_14100081a(&local_68);
          uVar3 = local_68;
          if (local_68 != 0) {
            *(undefined4 *)(local_68 + 0x18) = *(undefined4 *)(lVar15 + 0x18);
            *(undefined8 *)(local_68 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
            *(undefined8 *)(local_68 + 0x1c) = *(undefined8 *)(lVar15 + 0x100);
            *(undefined4 *)(local_68 + 0x2c) = *(undefined4 *)(lVar15 + 0x110);
            *(undefined8 *)(local_68 + 0x24) = *(undefined8 *)(lVar15 + 0x108);
            FUN_140ffff0a(local_68 + 0x30,lVar15 + 0x118);
            FUN_141000060(uVar3 + 0x40,lVar15 + 0x188);
            FUN_140d7e6a6(uVar3 + 0x50,lVar15 + 0x1a8);
            iVar10 = (int)local_a8[1];
            *(uint *)(local_a8 + 1) = iVar10 + 1U;
            if (*(uint *)((longlong)local_a8 + 0xc) < iVar10 + 1U) {
              FUN_140d2f4b4(local_a8,iVar10);
            }
            lVar16 = *local_a8;
            *(ulonglong *)(lVar16 + (longlong)iVar10 * 0x10) = uVar3;
            *(longlong **)(lVar16 + 8 + (longlong)iVar10 * 0x10) = local_60;
            lVar16 = local_b0;
            if (local_60 == (longlong *)0x0) goto LAB_1403d334e;
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          plVar19 = local_60;
          lVar16 = local_b0;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar14 = local_60 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar2 = (int *)((longlong)plVar19 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              lVar16 = local_b0;
              if (*piVar2 == 0) {
                (**(code **)(*plVar19 + 0x10))(plVar19);
                lVar16 = local_b0;
              }
            }
          }
        }
LAB_1403d334e:
        uVar12 = uVar12 & ~(uint)uVar21;
        plVar19 = (longlong *)plVar17[2];
        if ((longlong *)plVar17[2] == (longlong *)0x0) {
          plVar19 = plVar17;
        }
        iVar4 = (int)plVar17[3];
        lVar15 = (longlong)iVar13;
        uVar9 = *(uint *)((longlong)plVar19 + lVar15 * 4) & uVar12;
        iVar10 = iVar4;
        if (uVar9 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar6 = iVar8;
          if (iVar8 < iVar13) {
            iVar6 = iVar13;
          }
          if (iVar13 < iVar8) {
            lVar18 = 0;
            do {
              uVar9 = *(uint *)((longlong)plVar19 + lVar18 * 4 + lVar15 * 4 + 4);
              if (uVar9 != 0) {
                iVar13 = iVar13 + (int)lVar18 + 1;
                uVar12 = 0xffffffff;
                goto LAB_1403d33b9;
              }
              iVar20 = iVar20 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar6 - lVar15 != lVar18);
            uVar12 = 0xffffffff;
            lVar16 = local_b0;
            iVar13 = iVar6 + 1;
          }
          else {
            iVar13 = iVar13 + 1;
            lVar16 = local_b0;
          }
        }
        else {
LAB_1403d33b9:
          uVar21 = (ulonglong)(-uVar9 & uVar9);
          uVar3 = uVar21 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar10 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar10) {
            iVar10 = iVar4;
          }
        }
      } while (iVar10 != iVar11 || plVar17 != local_a0);
    }
    lVar15 = lVar16 + 0x180;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = (longlong *)lVar15;
    if (*(int *)(lVar16 + 0x198) == 0) {
      uVar21 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar11 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar21 = local_68 >> 0x20;
      iVar11 = *(int *)(lVar16 + 0x198);
    }
    plVar17 = local_60;
    iVar13 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar10 = local_58._4_4_;
    iVar20 = local_50;
    if (local_58._4_4_ != iVar11 || local_60 != (longlong *)lVar15) {
      do {
        lVar16 = *(longlong *)(*(longlong *)(lVar16 + 0x170) + 8 + (longlong)iVar10 * 0x18);
        if (((*(byte *)(lVar16 + 0x60) & 1) != 0) &&
           (cVar7 = (**(code **)(**(longlong **)(lVar16 + 0x30) + 0x158))
                              (*(longlong **)(lVar16 + 0x30),*(undefined8 *)(lVar16 + 0x10)),
           cVar7 != '\0')) {
          FUN_1403d3c5e(local_90,lVar16,1);
        }
        uVar12 = uVar12 & ~(uint)uVar21;
        plVar19 = (longlong *)*(longlong *)((longlong)plVar17 + 0x10);
        if (*(longlong *)((longlong)plVar17 + 0x10) == 0) {
          plVar19 = plVar17;
        }
        iVar4 = *(int *)((longlong)plVar17 + 0x18);
        lVar16 = (longlong)iVar13;
        uVar9 = *(uint *)((longlong)plVar19 + lVar16 * 4) & uVar12;
        iVar10 = iVar4;
        if (uVar9 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar6 = iVar8;
          if (iVar8 < iVar13) {
            iVar6 = iVar13;
          }
          if (iVar13 < iVar8) {
            lVar18 = 0;
            do {
              uVar9 = *(uint *)((longlong)plVar19 + lVar16 * 4 + 4 + lVar18 * 4);
              if (uVar9 != 0) {
                iVar13 = iVar13 + (int)lVar18 + 1;
                uVar12 = 0xffffffff;
                goto LAB_1403d3613;
              }
              iVar20 = iVar20 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar6 - lVar16 != lVar18);
            uVar12 = 0xffffffff;
            iVar13 = iVar6 + 1;
          }
          else {
            iVar13 = iVar13 + 1;
          }
        }
        else {
LAB_1403d3613:
          uVar21 = (ulonglong)(-uVar9 & uVar9);
          uVar3 = uVar21 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar10 = (iVar20 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar10) {
            iVar10 = iVar4;
          }
        }
        lVar16 = local_b0;
      } while (iVar10 != iVar11 || plVar17 != (longlong *)lVar15);
    }
    local_68 = 0x100000000;
    local_60 = local_a0;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(lVar16 + 0x1f8) == 0) {
      uVar21 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar11 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar21 = local_68 >> 0x20;
      iVar11 = *(int *)(lVar16 + 0x1f8);
    }
    plVar17 = local_60;
    iVar13 = (int)local_68;
    uVar12 = (uint)local_58;
    iVar10 = local_58._4_4_;
    iVar20 = local_50;
    iVar4 = iVar11;
    if (local_58._4_4_ != iVar11 || local_60 != local_a0) {
      do {
        local_94 = iVar4;
        local_90 = CONCAT44(local_90._4_4_,iVar20);
        lVar15 = *(longlong *)(*(longlong *)(lVar16 + 0x1d0) + 0x10 + (longlong)iVar10 * 0x20);
        if ((longlong)*(int *)(lVar15 + 0x80) != 0) {
          plVar14 = *(longlong **)(lVar15 + 0x78);
          plVar19 = plVar14 + *(int *)(lVar15 + 0x80);
          do {
            lVar18 = *plVar14;
            iVar10 = *(int *)(lVar18 + 0x90);
            if ((longlong)iVar10 != 0) {
              local_78 = *(longlong *)(lVar18 + 0x88);
              local_88 = 0;
              local_70 = plVar17;
              do {
                FUN_148844250(&local_68);
                if (local_68 == 0) {
LAB_1403d3a54:
                  local_b8 = local_60;
                  if (local_60 != (longlong *)0x0) {
                    LOCK();
                    plVar17 = local_60 + 1;
                    *(int *)plVar17 = (int)*plVar17 + -1;
                    UNLOCK();
                    if ((int)*plVar17 == 0) {
                      (**(code **)*local_60)();
                      LOCK();
                      piVar2 = (int *)((longlong)local_b8 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        (**(code **)(*local_b8 + 0x10))();
                      }
                    }
                  }
                }
                else {
                  *(undefined4 *)(local_68 + 0x18) = *(undefined4 *)(lVar15 + 0x18);
                  *(undefined8 *)(local_68 + 0x10) = *(undefined8 *)(lVar15 + 0x10);
                  *(undefined4 *)(local_68 + 0x24) = *(undefined4 *)(lVar18 + 0x18);
                  *(undefined8 *)(local_68 + 0x1c) = *(undefined8 *)(lVar18 + 0x10);
                  uVar5 = *(undefined8 *)(local_78 + local_88);
                  plVar17 = *(longlong **)(local_78 + 8 + local_88);
                  if (plVar17 == (longlong *)0x0) {
                    *(undefined8 *)(local_68 + 0x28) = uVar5;
                    local_b8 = *(longlong **)(local_68 + 0x30);
                    if (local_b8 != (longlong *)0x0) {
                      *(undefined8 *)(local_68 + 0x30) = 0;
LAB_1403d39d9:
                      LOCK();
                      plVar17 = local_b8 + 1;
                      *(int *)plVar17 = (int)*plVar17 + -1;
                      UNLOCK();
                      if ((int)*plVar17 == 0) {
                        (**(code **)*local_b8)();
                        LOCK();
                        piVar2 = (int *)((longlong)local_b8 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        iVar11 = *piVar2;
                        UNLOCK();
joined_r0x0001403d3b25:
                        if (iVar11 == 0) {
                          (**(code **)(*local_b8 + 0x10))();
                        }
                      }
                    }
                  }
                  else {
                    LOCK();
                    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                    UNLOCK();
                    *(undefined8 *)(local_68 + 0x28) = uVar5;
                    local_b8 = *(longlong **)(local_68 + 0x30);
                    if (plVar17 == local_b8) {
                      LOCK();
                      plVar1 = plVar17 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        local_80 = plVar17;
                        (**(code **)*plVar17)(plVar17);
                        LOCK();
                        piVar2 = (int *)((longlong)local_80 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        iVar11 = *piVar2;
                        UNLOCK();
                        local_b8 = local_80;
                        goto joined_r0x0001403d3b25;
                      }
                    }
                    else {
                      *(longlong **)(local_68 + 0x30) = plVar17;
                      if (local_b8 != (longlong *)0x0) goto LAB_1403d39d9;
                    }
                  }
                  local_b8 = (longlong *)(longlong)(int)local_a8[1];
                  uVar9 = (int)local_a8[1] + 1;
                  *(uint *)(local_a8 + 1) = uVar9;
                  if (*(uint *)((longlong)local_a8 + 0xc) < uVar9) {
                    FUN_140d2f4b4(local_a8,local_b8);
                  }
                  lVar16 = *local_a8;
                  *(ulonglong *)(lVar16 + (longlong)local_b8 * 0x10) = local_68;
                  *(longlong **)(lVar16 + 8 + (longlong)local_b8 * 0x10) = local_60;
                  if (local_60 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_60 + 1) = (int)local_60[1] + 1;
                    UNLOCK();
                    goto LAB_1403d3a54;
                  }
                }
                local_88 = local_88 + 0x10;
                plVar17 = local_70;
                lVar16 = local_b0;
                iVar11 = local_94;
              } while ((longlong)iVar10 * 0x10 != local_88);
            }
            plVar14 = plVar14 + 1;
          } while (plVar14 != plVar19);
        }
        uVar12 = uVar12 & ~(uint)uVar21;
        plVar19 = (longlong *)plVar17[2];
        if ((longlong *)plVar17[2] == (longlong *)0x0) {
          plVar19 = plVar17;
        }
        iVar4 = (int)plVar17[3];
        lVar15 = (longlong)iVar13;
        uVar9 = *(uint *)((longlong)plVar19 + lVar15 * 4) & uVar12;
        iVar20 = (int)local_90;
        if (uVar9 == 0) {
          iVar10 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar10 = iVar4 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar20 = (int)local_90 + 0x20;
          iVar8 = iVar10;
          if (iVar10 < iVar13) {
            iVar8 = iVar13;
          }
          iVar11 = local_94;
          if (iVar13 < iVar10) {
            lVar18 = 0;
            do {
              uVar9 = *(uint *)((longlong)plVar19 + lVar18 * 4 + lVar15 * 4 + 4);
              if (uVar9 != 0) {
                iVar13 = iVar13 + (int)lVar18 + 1;
                uVar12 = 0xffffffff;
                goto LAB_1403d37a6;
              }
              iVar20 = iVar20 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar8 - lVar15 != lVar18);
            uVar12 = 0xffffffff;
            iVar13 = iVar8;
          }
          iVar13 = iVar13 + 1;
          lVar16 = local_b0;
          iVar10 = iVar4;
        }
        else {
LAB_1403d37a6:
          uVar21 = (ulonglong)(-uVar9 & uVar9);
          uVar3 = uVar21 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar10 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar10) {
            iVar10 = iVar4;
          }
        }
        iVar4 = local_94;
      } while (iVar10 != iVar11 || plVar17 != local_a0);
    }
    FUN_145709a52(&local_68);
    uVar21 = local_68;
    plVar17 = local_a8;
    if (local_68 != 0) {
      FUN_140d7e6a6(local_68 + 0x10,local_b0 + 0x160);
      iVar11 = (int)plVar17[1];
      *(uint *)(plVar17 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar17 + 0xc) < iVar11 + 1U) {
        FUN_140d2f4b4(plVar17,iVar11);
      }
      lVar16 = *plVar17;
      *(ulonglong *)(lVar16 + (longlong)iVar11 * 0x10) = uVar21;
      *(longlong **)(lVar16 + 8 + (longlong)iVar11 * 0x10) = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
    }
    plVar19 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar14 = local_60 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar19 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar19 + 0x10))(plVar19);
        }
      }
    }
    FUN_1457099b0(&local_68);
    uVar21 = local_68;
    if (local_68 != 0) {
      *(undefined1 *)(local_68 + 0x10) = 1;
      iVar11 = (int)plVar17[1];
      *(uint *)(plVar17 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)plVar17 + 0xc) < iVar11 + 1U) {
        FUN_140d2f4b4(plVar17,iVar11);
      }
      lVar16 = *plVar17;
      *(ulonglong *)(lVar16 + (longlong)iVar11 * 0x10) = uVar21;
      *(longlong **)(lVar16 + 8 + (longlong)iVar11 * 0x10) = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
      }
    }
    plVar17 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar19 = local_60 + 1;
      *(int *)plVar19 = (int)*plVar19 + -1;
      UNLOCK();
      if ((int)*plVar19 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar17 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar17 + 0x10))(plVar17);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d3c5e FUN_1403d3c5e body=823 status=ok
// SIG undefined FUN_1403d3c5e(void)

void FUN_1403d3c5e(longlong param_1,uint *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar2 = (longlong *)(param_1 + 0x88);
  if ((0 < (longlong)*(int *)(param_1 + 0x90)) &&
     (plVar3 = *(longlong **)(*plVar2 + -0x10 + (longlong)*(int *)(param_1 + 0x90) * 0x10),
     plVar3 != (longlong *)0x0)) {
    lVar9 = (**(code **)(*plVar3 + 8))(plVar3);
    lVar10 = FUN_1403d3fb0();
    if ((lVar10 != 0) &&
       (((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38) &&
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
          lVar10 + 0x30)) && (*(uint *)(plVar3 + 2) == *param_2)))) {
      uVar4 = param_2[0xf];
      uVar5 = param_2[0x10];
      uVar6 = param_2[0x11];
      *(uint *)((longlong)plVar3 + 0x14) = param_2[0xe];
      *(uint *)(plVar3 + 3) = uVar4;
      *(uint *)((longlong)plVar3 + 0x1c) = uVar5;
      *(uint *)(plVar3 + 4) = uVar6;
      if (param_3 != '\0') {
        *(undefined1 *)((longlong)plVar3 + 0x24) = 1;
      }
      goto LAB_1403d3d50;
    }
  }
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar9 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar9 = *(longlong *)(param_1 + 0xd8);
    }
    iVar12 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0xe0) - 1U & *param_2) * 4);
    if (iVar12 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x98);
      do {
        if (*(uint *)(lVar9 + (longlong)iVar12 * 0xc) == *param_2) {
          uVar11 = FUN_1403d43b4();
          uVar8 = FUN_1403d4194(uVar11);
          FUN_140d2f368(&local_50,uVar8);
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
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
          *(uint *)(local_50 + 0x10) = *param_2;
          uVar4 = param_2[0xf];
          uVar5 = param_2[0x10];
          uVar6 = param_2[0x11];
          *(uint *)(local_50 + 0x14) = param_2[0xe];
          *(uint *)(local_50 + 0x18) = uVar4;
          *(uint *)(local_50 + 0x1c) = uVar5;
          *(uint *)(local_50 + 0x20) = uVar6;
          if (param_3 != '\0') {
            *(undefined1 *)(local_50 + 0x24) = 1;
          }
          iVar12 = *(int *)(param_1 + 0x90);
          *(uint *)(param_1 + 0x90) = iVar12 + 1U;
          if (*(uint *)(param_1 + 0x94) < iVar12 + 1U) {
            FUN_140d2f4b4(plVar2,iVar12);
          }
          lVar9 = *plVar2;
          *(longlong *)(lVar9 + (longlong)iVar12 * 0x10) = local_50;
          *(longlong **)(lVar9 + 8 + (longlong)iVar12 * 0x10) = local_48;
          if (local_48 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_48 + 1) = (int)local_48[1] + 1;
            UNLOCK();
            LOCK();
            plVar2 = local_48 + 1;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)*plVar2 == 0) {
              (**(code **)*local_48)(local_48);
              LOCK();
              piVar1 = (int *)((longlong)local_48 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
              }
            }
          }
          goto LAB_1403d3d50;
        }
        iVar12 = *(int *)(lVar9 + (longlong)iVar12 * 0xc + 4);
      } while (iVar12 != -1);
    }
  }
  cVar7 = FUN_1403d4024(param_2);
  if (cVar7 != '\0') {
    FUN_144980568((longlong *)(param_1 + 0x98),&local_50,param_2,0);
    uVar11 = FUN_1403d3fea();
    uVar8 = FUN_1403d4194(uVar11);
    FUN_140d2f368(&local_50,uVar8);
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
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
    FUN_1403d410e(local_50,param_2);
    if (param_3 != '\0') {
      *(undefined1 *)(local_50 + 0x24) = 1;
    }
    iVar12 = *(int *)(param_1 + 0x90);
    *(uint *)(param_1 + 0x90) = iVar12 + 1U;
    if (*(uint *)(param_1 + 0x94) < iVar12 + 1U) {
      FUN_140d2f4b4(plVar2,iVar12);
    }
    lVar9 = *plVar2;
    *(longlong *)(lVar9 + (longlong)iVar12 * 0x10) = local_50;
    *(longlong **)(lVar9 + 8 + (longlong)iVar12 * 0x10) = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      LOCK();
      plVar2 = local_48 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
LAB_1403d3d50:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d3fb0 FUN_1403d3fb0 body=57 status=ok
// SIG undefined FUN_1403d3fb0(void)

void FUN_1403d3fb0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6eff8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6eff8 = FUN_140002ddd(FUN_14653efa0,uVar1,L"ReplicatedMissionFactSetBase");
  }
  return;
}



// FUNCTION 1403d3fea FUN_1403d3fea body=57 status=ok
// SIG undefined FUN_1403d3fea(void)

void FUN_1403d3fea(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f010 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f010 = FUN_140002ddd(FUN_14653f000,uVar1,L"ReplicatedMissionFactAdd");
  }
  return;
}



// FUNCTION 1403d4024 FUN_1403d4024 body=233 status=ok
// SIG undefined FUN_1403d4024(void)

undefined8 FUN_1403d4024(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = (char *)(param_1 + 0x38);
  FUN_1403a0728(pcVar1,&local_28);
  if (local_28 != 0) {
    cVar2 = *pcVar1;
    if (cVar2 == '\x03') {
      bVar5 = *(longlong *)(param_1 + 0x3c) == 0;
LAB_1403d4066:
      uVar3 = (uint)!bVar5;
    }
    else {
      if (cVar2 != '\x02') {
        if (cVar2 != '\x01') goto LAB_1403d409d;
        bVar5 = *(int *)(param_1 + 0x44) == 0;
        goto LAB_1403d4066;
      }
      uVar3 = *(uint *)(param_1 + 0x44);
    }
    if (uVar3 != 0) {
      if ((*(byte *)(param_1 + 0x60) & 2) == 0) {
        if (((*(byte *)(param_1 + 0x60) & 4) != 0) &&
           (((FUN_1403a0728(pcVar1,&local_28), local_28 == DAT_14cb888d8 ||
             (local_28 == DAT_14cb888e0)) || (local_28 == DAT_14cb888e8)))) goto LAB_1403d409d;
      }
      else {
        FUN_1403a0728(pcVar1,&local_28);
        uVar4 = 0;
        if ((local_28 == DAT_14cb888b0) || (local_28 == DAT_14cb888b8)) goto LAB_1403d409f;
      }
      uVar4 = 1;
      goto LAB_1403d409f;
    }
  }
LAB_1403d409d:
  uVar4 = 0;
LAB_1403d409f:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1403d410e FUN_1403d410e body=133 status=ok
// SIG undefined FUN_1403d410e(void)

void FUN_1403d410e(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0xb);
  lVar1 = *(longlong *)(param_2 + 4);
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  uVar6 = 0;
  if (lVar1 != 0) {
    uVar6 = *(undefined4 *)(lVar1 + 0x10);
    uVar5 = *(undefined4 *)(lVar1 + 0x14);
    uVar4 = *(undefined4 *)(lVar1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x2c) = uVar6;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  lVar1 = *(longlong *)(param_2 + 6);
  uVar5 = 0;
  uVar6 = 0;
  if (lVar1 != 0) {
    uVar6 = *(undefined4 *)(lVar1 + 0x10);
    uVar5 = *(undefined4 *)(lVar1 + 0x14);
    uVar3 = *(undefined4 *)(lVar1 + 0x18);
  }
  *(undefined4 *)(param_1 + 0x38) = uVar6;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x4c) = param_2[10];
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x1c) = uVar2;
  return;
}



// FUNCTION 1403d4194 FUN_1403d4194 body=257 status=ok
// SIG undefined FUN_1403d4194(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1403d4194(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 == 0) {
    uVar6 = 0;
    uVar3 = 0;
  }
  else {
    uVar6 = *(uint *)(param_1 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  local_28 = CONCAT44(uVar3,uVar6);
  iVar2 = FUN_1403d4296(&DAT_14cb7c670,uVar3 ^ uVar6);
  uVar1 = 0;
  if ((iVar2 != -1) && (lVar4 = (longlong)iVar2 * 0x14 + _DAT_14cb7c670, lVar4 != 0)) {
    uVar1 = *(undefined1 *)(lVar4 + 8);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1403d4296 FUN_1403d4296 body=180 status=ok
// SIG undefined FUN_1403d4296(void)

int FUN_1403d4296(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x14);
        cVar1 = FUN_1403d434c(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1403d4324;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0xc + (longlong)iVar4 * 0x14);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1403d4324:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d434c FUN_1403d434c body=104 status=ok
// SIG undefined FUN_1403d434c(void)

ulonglong FUN_1403d434c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 1403d43b4 FUN_1403d43b4 body=57 status=ok
// SIG undefined FUN_1403d43b4(void)

void FUN_1403d43b4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f028 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f028 = FUN_140002ddd(FUN_14653f060,uVar1,L"ReplicatedMissionFactChange");
  }
  return;
}



// FUNCTION 1403d43ee FUN_1403d43ee body=107 status=ok
// SIG undefined FUN_1403d43ee(void)

void FUN_1403d43ee(longlong param_1,uint param_2)

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
LAB_1403d443d:
      FUN_1401bc250(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1449809d4(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1403d443d;
  FUN_1403d445a(param_1);
  FUN_1401bc250(param_1,param_2);
  return;
}



// FUNCTION 1403d445a FUN_1403d445a body=327 status=ok
// SIG undefined FUN_1403d445a(void)

void FUN_1403d445a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 8 + (longlong)iVar4 * 0xc) * 4) =
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



// FUNCTION 1403d45a2 FUN_1403d45a2 body=114 status=ok
// SIG undefined FUN_1403d45a2(void)

void FUN_1403d45a2(longlong param_1,undefined4 param_2,double param_3,double param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0xa0) = param_2;
  *(double *)(*(longlong *)(param_1 + 0x70) + 0xa8) = param_3;
  *(double *)(*(longlong *)(param_1 + 0x70) + 0xb0) = param_4 + param_3;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  puVar2[1] = *(undefined8 *)(param_1 + 0x70);
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_1 + 0x80);
    *(undefined8 **)(param_1 + 0x80) = puVar2;
    *puVar1 = puVar2;
  }
  FUN_1403d4614(param_1);
  return;
}



// FUNCTION 1403d4614 FUN_1403d4614 body=223 status=ok
// SIG undefined FUN_1403d4614(void)

void FUN_1403d4614(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  void *_Dst;
  
  lVar2 = **(longlong **)(param_1 + 0x98);
  if (lVar2 == 0) {
    _Dst = (void *)FUN_14001cc68(0xb8);
    memset(_Dst,0,0xb8);
    *(undefined8 *)((longlong)_Dst + 0x3c) = 0xffffffff00000080;
    *(undefined8 *)((longlong)_Dst + 0x60) = 0;
    *(undefined8 *)((longlong)_Dst + 0x68) = 0;
    *(undefined8 *)((longlong)_Dst + 0x70) = 0;
    *(undefined8 *)((longlong)_Dst + 0x78) = 0;
    *(undefined8 *)((longlong)_Dst + 0x80) = 0;
    *(undefined8 *)((longlong)_Dst + 0x88) = 0;
    *(undefined8 *)((longlong)_Dst + 0x90) = 0;
    *(undefined8 *)((longlong)_Dst + 0x98) = 0;
    iVar1 = *(int *)(param_1 + 0xa8);
    *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
      FUN_145709af4(param_1 + 0xa0,iVar1);
    }
    *(void **)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 8) = _Dst;
    *(undefined8 *)(param_1 + 0x70) =
         *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 8);
  }
  else {
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar2 + 8);
    lVar3 = *(longlong *)(param_1 + 0x98);
    *(longlong *)(param_1 + 0x98) = lVar2;
    *(undefined8 *)(lVar2 + 8) = 0;
    if (lVar3 != 0) {
      FUN_1400020a8();
      return;
    }
  }
  return;
}



// FUNCTION 1403d46f4 FUN_1403d46f4 body=559 status=ok
// SIG undefined FUN_1403d46f4(void)

undefined8 FUN_1403d46f4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_178 [32];
  uint local_158;
  float local_150;
  undefined4 local_148;
  undefined1 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined1 local_119;
  longlong local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined1 local_fc [4];
  longlong *local_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_f8 = (longlong *)CONCAT71(local_f8._1_7_,1);
  local_d8 = 0;
  local_f0 = (undefined1 *)0x0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1);
  FUN_14493db24(&local_f8);
  local_118 = *(longlong *)(param_4 + 0x20);
  local_110 = *(undefined8 *)(param_4 + 0x28);
  local_108 = *(longlong **)(param_4 + 0x30);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_1403e7f2a(&local_118);
  if (cVar5 != '\0') {
    local_f0 = &local_119;
    local_119 = 1;
    local_f8 = &local_118;
    FUN_1403d4e02(param_1 + 0xc0,local_fc);
    plVar4 = *(longlong **)(param_1 + -0x90);
    if (plVar4 == (longlong *)0x0) goto LAB_1403d48c1;
    local_140 = FUN_140230656(&local_118);
    local_158 = *(uint *)(param_4 + 0x40);
    if (local_118 == DAT_14c9657d0) {
      local_158 = local_158 ^ 0x80000000;
    }
    local_150 = (float)DAT_14c759090;
    local_138 = local_118;
    local_130 = local_110;
    local_128 = local_108;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    local_148 = 1;
    cVar5 = (**(code **)(*plVar4 + 0x50))
                      (plVar4,param_1 + -0xc0,*(undefined4 *)(param_4 + 0x10),&local_138);
    if (cVar5 != '\0') goto LAB_1403d48c1;
  }
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
  local_d8 = 0;
  local_f0 = (undefined1 *)0x0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = CONCAT35(local_48._5_3_,0x20702);
  FUN_1403d4924(lVar1,&local_f8);
  FUN_14493db24(&local_f8);
LAB_1403d48c1:
  FUN_1403d4c6e(param_2,lVar1);
  plVar4 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_108 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d4924 FUN_1403d4924 body=842 status=ok
// SIG undefined FUN_1403d4924(void)

undefined1 * FUN_1403d4924(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = *param_2;
  if (param_1 == param_2) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  }
  else {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    plVar2 = *(longlong **)(param_2 + 0x10);
    plVar3 = *(longlong **)(param_1 + 0x10);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(longlong **)(param_1 + 0x10) = plVar2;
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
    }
    if (param_2[0x20] == '\x01') {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_1[0x20] = 1;
    }
    else if (param_1[0x20] == '\x01') {
      param_1[0x20] = 0;
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = 0;
    plVar2 = *(longlong **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x30) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x38) = 0;
    plVar2 = *(longlong **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_2 + 0x48) = 0;
    plVar2 = *(longlong **)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_2 + 0x50) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
    plVar2 = *(longlong **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_2 + 0x60) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_2 + 0x68) = 0;
    plVar2 = *(longlong **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
    *(undefined8 *)(param_2 + 0x70) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_2 + 0x78) = 0;
    plVar2 = *(longlong **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_2 + 0x80) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
    *(undefined8 *)(param_2 + 0x90) = 0;
    plVar2 = *(longlong **)(param_2 + 0x98);
    plVar3 = *(longlong **)(param_1 + 0x98);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0x98) = 0;
      *(longlong **)(param_1 + 0x98) = plVar2;
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
    }
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_2 + 0xa0) = 0;
    plVar2 = *(longlong **)(param_2 + 0xa8);
    plVar3 = *(longlong **)(param_1 + 0xa8);
    if (plVar2 != plVar3) {
      *(undefined8 *)(param_2 + 0xa8) = 0;
      *(longlong **)(param_1 + 0xa8) = plVar2;
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
    }
  }
  param_1[0xb4] = param_2[0xb4];
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  return param_1;
}



// FUNCTION 1403d4c6e FUN_1403d4c6e body=403 status=ok
// SIG undefined FUN_1403d4c6e(void)

void FUN_1403d4c6e(undefined1 *param_1,undefined1 *param_2)

{
  char cVar1;
  longlong lVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  cVar1 = param_2[0x20];
  param_1[0x20] = cVar1;
  if (cVar1 == '\x01') {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  lVar2 = *(longlong *)(param_2 + 0x40);
  *(longlong *)(param_1 + 0x40) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  lVar2 = *(longlong *)(param_2 + 0x50);
  *(longlong *)(param_1 + 0x50) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  lVar2 = *(longlong *)(param_2 + 0x60);
  *(longlong *)(param_1 + 0x60) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  lVar2 = *(longlong *)(param_2 + 0x70);
  *(longlong *)(param_1 + 0x70) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  lVar2 = *(longlong *)(param_2 + 0x80);
  *(longlong *)(param_1 + 0x80) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  lVar2 = *(longlong *)(param_2 + 0x98);
  *(longlong *)(param_1 + 0x98) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  lVar2 = *(longlong *)(param_2 + 0xa8);
  *(longlong *)(param_1 + 0xa8) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  param_1[0xb4] = param_2[0xb4];
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  return;
}



// FUNCTION 1403d4e02 FUN_1403d4e02 body=502 status=ok
// SIG undefined FUN_1403d4e02(void)

int * FUN_1403d4e02(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_144980c52(param_1,local_50);
  plVar15 = (longlong *)*param_3;
  puVar3 = (undefined1 *)param_3[1];
  lVar12 = *plVar15;
  *local_48 = lVar12;
  local_48[1] = plVar15[1];
  lVar4 = plVar15[2];
  local_48[2] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
    lVar12 = *local_48;
  }
  *(undefined1 *)(local_48 + 3) = *puVar3;
  *(undefined4 *)(local_48 + 4) = 0xffffffff;
  uVar11 = (uint)((ulonglong)lVar12 >> 0x10);
  uVar14 = (uint)lVar12 & 0xffff;
  uVar11 = ((uint)lVar12 << 0x10 | uVar14) + (int)((ulonglong)lVar12 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar14 >> 4);
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar14 != 0) && (uVar14 != 1)) {
    plVar15 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar15 = (longlong *)param_1[8];
    }
    iVar16 = *(int *)((longlong)plVar15 + (ulonglong)((int)param_1[9] - 1U & uVar11) * 4);
    if (iVar16 != -1) {
      do {
        plVar15 = (longlong *)(*param_1 + (longlong)iVar16 * 0x28);
        if (*plVar15 == lVar12) {
          plVar5 = (longlong *)plVar15[2];
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
          lVar12 = *local_48;
          uVar6 = *(undefined4 *)((longlong)local_48 + 4);
          lVar4 = local_48[1];
          uVar7 = *(undefined4 *)((longlong)local_48 + 0xc);
          uVar8 = *(undefined4 *)((longlong)local_48 + 0x14);
          lVar10 = local_48[3];
          uVar9 = *(undefined4 *)((longlong)local_48 + 0x1c);
          *(int *)(plVar15 + 2) = (int)local_48[2];
          *(undefined4 *)((longlong)plVar15 + 0x14) = uVar8;
          *(int *)(plVar15 + 3) = (int)lVar10;
          *(undefined4 *)((longlong)plVar15 + 0x1c) = uVar9;
          *(int *)plVar15 = (int)lVar12;
          *(undefined4 *)((longlong)plVar15 + 4) = uVar6;
          *(int *)(plVar15 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar15 + 0xc) = uVar7;
          FUN_1403d4ffa(param_1,local_50[0],1);
          local_50[0] = iVar16;
          goto LAB_1403d4f64;
        }
        iVar16 = (int)plVar15[4];
      } while (iVar16 != -1);
    }
  }
  if (uVar14 < 4) {
    iVar16 = 1;
  }
  else {
    uVar13 = (ulonglong)(uVar14 & 0xfffffffe) + 0xf;
    lVar12 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar16 = 1 << ((byte)lVar12 & 0x1f);
  }
  if (((int)uVar14 < 1) || (iVar16 <= (int)param_1[9])) {
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)((longlong)local_48 + 0x24) = uVar11;
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(undefined4 *)(local_48 + 4) =
         *(undefined4 *)
          ((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar15 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar15 = param_1 + 7;
    }
    *(int *)((longlong)plVar15 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         local_50[0];
  }
  else {
    *(int *)(param_1 + 9) = iVar16;
    FUN_1403d5084(param_1);
  }
LAB_1403d4f64:
  *param_2 = local_50[0];
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403d4ffa FUN_1403d4ffa body=138 status=ok
// SIG undefined FUN_1403d4ffa(void)

void FUN_1403d4ffa(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x28 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x28) = param_2;
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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403d5084 FUN_1403d5084 body=679 status=ok
// SIG undefined FUN_1403d5084(void)

void FUN_1403d5084(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1403d50f9;
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
  } while (uVar10 != uVar3);
LAB_1403d50f9:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x28);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x24 + lVar15 * 0x28) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x20 + lVar15 * 0x28) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 1403d532c FUN_1403d532c body=14 status=ok
// SIG undefined FUN_1403d532c(void)

void FUN_1403d532c(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc) != param_2) {
    *(int *)(param_1 + 0xc) = param_2;
    FUN_1403d533a();
    return;
  }
  return;
}



// FUNCTION 1403d533a FUN_1403d533a body=450 status=ok
// SIG undefined FUN_1403d533a(void)

void FUN_1403d533a(undefined8 *param_1,uint param_2)

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
LAB_1403d5455:
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
LAB_1403d5492:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1403d5390;
LAB_1403d5385:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1403d5390:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 3U & 0xfffffffffffffffc);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x1ff5) goto code_r0x0001403d53bc;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x5c,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5bU & 0xfffffffffffffffc);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 2 + 0x17;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1403d5412:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1403d5492;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1403d5455;
code_r0x0001403d53bc:
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
      goto LAB_1403d5412;
    }
  }
  goto LAB_1403d5385;
}



// FUNCTION 1403d54fc FUN_1403d54fc body=33 status=ok
// SIG undefined FUN_1403d54fc(void)

void FUN_1403d54fc(longlong param_1)

{
  FUN_1448ef896();
  FUN_1403d551e(param_1 + 0x2dc0);
  return;
}



// FUNCTION 1403d551e FUN_1403d551e body=205 status=ok
// SIG undefined FUN_1403d551e(void)

void FUN_1403d551e(longlong param_1)

{
  char *pcVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  bVar2 = *(byte *)(param_1 + 0x17d);
  if ((bVar2 & 4) != 0) {
    *(byte *)(param_1 + 0x17d) = bVar2 & 0xfb;
    if (*(int *)(param_1 + 0x1c) < 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      FUN_14480809c(param_1 + 0x10,0);
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x180);
    *(undefined1 *)(lVar3 + 0x2aa2) = 0;
    *(undefined1 *)(lVar3 + 0x2b2a) = 0;
    *(undefined1 *)(lVar3 + 0x2bb2) = 0;
    *(undefined1 *)(lVar3 + 0x2c3a) = 0;
    *(undefined1 *)(lVar3 + 0x2cc2) = 0;
    *(undefined1 *)(lVar3 + 0x2d4a) = 0;
    bVar2 = *(byte *)(param_1 + 0x17d);
  }
  if ((bVar2 & 8) != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x280);
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x180) + 0x2d58);
    for (lVar3 = 0xd; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    pcVar1 = (char *)(*(longlong *)(param_1 + 0x180) + 0x2d50);
    *pcVar1 = *pcVar1 + '\x01';
    *(byte *)(param_1 + 0x17d) = *(byte *)(param_1 + 0x17d) & 0xf7;
    if (*(char *)(param_1 + 0x2e8) == '\x01') {
      *(undefined1 *)(param_1 + 0x2e8) = 0;
    }
  }
  return;
}



// FUNCTION 1403d55ec FUN_1403d55ec body=315 status=ok
// SIG undefined FUN_1403d55ec(void)

undefined4 *
FUN_1403d55ec(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
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
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1403d57ba(param_1,local_50);
  uVar1 = *param_3;
  *local_48 = uVar1;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = (int)((ulonglong)uVar1 >> 0x20) * 0x17 + (int)uVar1;
  local_68 = param_4;
  cVar2 = FUN_1403d5728(param_1,uVar5,local_48);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      *(uint *)((longlong)local_48 + 0xc) = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1403d5990(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d5728 FUN_1403d5728 body=145 status=ok
// SIG undefined FUN_1403d5728(void)

void FUN_1403d5728(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          FUN_142986528(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *param_1 + 8);
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1403d5773;
    }
  }
  uVar1 = 0;
LAB_1403d5773:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1403d57ba FUN_1403d57ba body=470 status=ok
// SIG undefined FUN_1403d57ba(void)

int * FUN_1403d57ba(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
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
      FUN_1446efaca(param_1,iVar11);
    }
    iVar5 = (int)param_1[5];
    if (iVar5 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar8 = iVar5 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar7 = iVar5 + 1;
    iVar12 = iVar5 + 0x1f;
    if (-1 < iVar5) {
      iVar12 = iVar5;
    }
    if (iVar12 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar7;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar5) {
        if (iVar5 + 0x20U < 0xa0) {
          iVar7 = 0x80;
          iVar8 = iVar5;
        }
        else {
          uVar13 = iVar5 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar13) {
              uVar6 = uVar13;
            }
          }
          else {
            uVar6 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar3 = FUN_144a3809e(uVar6 << 2,0);
          iVar8 = (int)(uVar3 >> 2);
          iVar7 = -0x20;
          if ((int)uVar13 <= iVar8) {
            iVar7 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar7;
        FUN_1446efbd8(plVar9,iVar8);
        iVar7 = (int)param_1[5] + 1;
      }
      iVar8 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar8 = iVar7;
      }
      *(int *)(param_1 + 5) = iVar7;
      if (iVar7 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar7 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar8 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar5 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x10);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x10) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar5 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar5 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar2 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1403d5990 FUN_1403d5990 body=459 status=ok
// SIG undefined FUN_1403d5990(void)

void FUN_1403d5990(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar7 = (longlong)iVar5 * 0x10;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xc + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 8 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1403d5b7a FUN_1403d5b7a body=1761 status=ok
// SIG undefined FUN_1403d5b7a(void)

void FUN_1403d5b7a(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  char cVar8;
  int iVar9;
  double dVar10;
  double *pdVar11;
  undefined4 uVar12;
  uint uVar13;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_328 [40];
  double local_300;
  double local_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined8 local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  ulonglong local_d0;
  longlong lVar14;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  cVar8 = (**(code **)(*param_1 + 0x600))();
  if (cVar8 != '\0') {
    lVar14 = *(longlong *)(param_1[0x3e] + 0x450);
    if (lVar14 != 0) {
      FUN_1403d625c(lVar14,*(undefined8 *)(param_1[0x3e] + 0x444),param_1 + 0x58,param_1 + 0x54);
      if (*(char *)(lVar14 + 0x1fb) == '\x02') {
        lVar4 = param_1[0x22];
        local_158 = *(double *)(lVar4 + 0x260);
        uStack_150 = *(double *)(lVar4 + 0x268);
        local_148 = *(double *)(lVar4 + 0x270);
        dVar10 = (double)FUN_1403d64f2(lVar14,*(undefined8 *)(param_1[0x3e] + 0x444),&local_158,
                                       &local_2f0);
        uVar12 = (undefined4)lVar14;
        if (*(char *)((longlong)param_1 + 0x5b5) < '\0') {
          lVar14 = param_1[0x3e];
          lVar4 = param_1[0x22];
          dVar1 = *(double *)(lVar4 + 0x240);
          dVar2 = *(double *)(lVar4 + 0x248);
          dVar3 = *(double *)(lVar4 + 0x250);
          dVar7 = *(double *)(lVar4 + 600);
          pdVar11 = *(double **)(lVar4 + 0x228);
          local_158 = dVar1;
          uStack_150 = dVar2;
          local_148 = dVar3;
          uStack_140 = dVar7;
          if (pdVar11 == (double *)0x0) {
            uVar12 = 0x40;
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
            *(double **)(lVar4 + 0x228) = pdVar11;
          }
          auVar5._8_4_ = (int)-(ulonglong)(dVar2 != pdVar11[1]);
          auVar5._0_8_ = -(ulonglong)(dVar1 != *pdVar11);
          auVar5._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar11[1]) >> 0x20);
          iVar9 = movmskpd(SUB84(dVar10,0),auVar5);
          auVar6._8_4_ = (int)-(ulonglong)(dVar7 != pdVar11[3]);
          auVar6._0_8_ = -(ulonglong)(dVar3 != pdVar11[2]);
          auVar6._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar11[3]) >> 0x20);
          uVar13 = movmskpd(uVar12,auVar6);
          if ((uVar13 & 0x3fffffff) != 0 || iVar9 != 0) {
            *(undefined4 *)(pdVar11 + 2) = (undefined4)local_148;
            *(undefined4 *)((longlong)pdVar11 + 0x14) = local_148._4_4_;
            *(undefined4 *)(pdVar11 + 3) = (undefined4)uStack_140;
            *(undefined4 *)((longlong)pdVar11 + 0x1c) = uStack_140._4_4_;
            *(undefined4 *)pdVar11 = (undefined4)local_158;
            *(undefined4 *)((longlong)pdVar11 + 4) = local_158._4_4_;
            *(undefined4 *)(pdVar11 + 1) = (undefined4)uStack_150;
            *(undefined4 *)((longlong)pdVar11 + 0xc) = uStack_150._4_4_;
            FUN_1448052ee(&local_158,&local_1d8);
            pdVar11[6] = local_1c8;
            pdVar11[4] = local_1d8;
            pdVar11[5] = uStack_1d0;
          }
          local_1c8 = pdVar11[6];
          dVar10 = pdVar11[4];
          dVar1 = pdVar11[5];
          *(undefined8 *)(lVar14 + 0x468) = local_2e0;
          *(undefined8 *)(lVar14 + 0x458) = local_2f0;
          *(undefined8 *)(lVar14 + 0x460) = uStack_2e8;
          *(double *)(lVar14 + 0x480) = local_1c8;
          local_1d8._0_4_ = SUB84(dVar10,0);
          local_1d8._4_4_ = (undefined4)((ulonglong)dVar10 >> 0x20);
          uStack_1d0._0_4_ = SUB84(dVar1,0);
          uStack_1d0._4_4_ = (undefined4)((ulonglong)dVar1 >> 0x20);
          *(undefined4 *)(lVar14 + 0x470) = (undefined4)local_1d8;
          *(undefined4 *)(lVar14 + 0x474) = local_1d8._4_4_;
          *(undefined4 *)(lVar14 + 0x478) = (undefined4)uStack_1d0;
          *(undefined4 *)(lVar14 + 0x47c) = uStack_1d0._4_4_;
          *(byte *)(lVar14 + 0x442) = *(byte *)(lVar14 + 0x442) & 0xfd;
          local_1d8 = dVar10;
          uStack_1d0 = dVar1;
        }
        else {
          lVar14 = param_1[0x22];
          dVar10 = *(double *)(lVar14 + 0x240);
          dVar1 = *(double *)(lVar14 + 0x248);
          dVar17 = dVar1 + dVar1;
          dVar2 = *(double *)(lVar14 + 0x250);
          dVar7 = dVar2 + dVar2;
          dVar16 = dVar10 * (dVar10 + dVar10);
          dVar3 = *(double *)(lVar14 + 600);
          local_1a8 = (dVar10 + dVar10) * dVar3;
          local_1d8 = 1.0 - (dVar1 * dVar17 + dVar2 * dVar7);
          local_1b8 = dVar10 * dVar17 - dVar7 * dVar3;
          local_198 = dVar17 * dVar3 + dVar10 * dVar7;
          local_178 = DAT_14c8464e0;
          uStack_170 = DAT_14c8464e8;
          uStack_1d0 = dVar7 * dVar3 + dVar10 * dVar17;
          local_1b0 = 1.0 - (dVar2 * dVar7 + dVar16);
          local_190 = dVar1 * dVar7 - local_1a8;
          local_1c8 = dVar10 * dVar7 - dVar17 * dVar3;
          local_1a8 = local_1a8 + dVar1 * dVar7;
          local_188 = 1.0 - (dVar1 * dVar17 + dVar16);
          local_168 = DAT_14c8464f0;
          local_1c0 = 0;
          local_1a0 = 0;
          local_180 = 0;
          local_160 = 0x3ff0000000000000;
          FUN_1403d6372(&local_2d8,param_1 + 0x54);
          local_258 = local_2d8;
          local_250 = local_2b8;
          local_248 = local_298;
          local_240 = local_278;
          local_238 = local_2d0;
          local_230 = local_2b0;
          local_228 = local_290;
          local_220 = local_270;
          local_218 = local_2c8;
          local_210 = local_2a8;
          local_208 = local_288;
          local_200 = local_268;
          local_1f8 = local_2c0;
          local_1f0 = local_2a0;
          local_1e8 = local_280;
          local_1e0 = local_260;
          FUN_1447fea8d(&local_158,&local_1d8);
          dVar3 = local_148;
          dVar2 = uStack_150;
          dVar1 = local_158;
          local_300 = local_130;
          local_2f8 = local_110;
          dVar10 = 0.0;
          if ((((uStack_150 != 0.0) || (NAN(uStack_150))) || (local_158 != 0.0)) || (NAN(local_158))
             ) {
            dVar10 = atan2(uStack_150,local_158);
            dVar10 = dVar10 * 57.29577951308232;
          }
          dVar2 = SQRT(dVar2 * dVar2 + dVar1 * dVar1);
          dVar1 = 0.0;
          if (((dVar3 != 0.0) || (NAN(dVar3))) || ((dVar2 != 0.0 || (NAN(dVar2))))) {
            dVar1 = atan2(dVar3,dVar2);
            dVar1 = dVar1 * 57.29577951308232;
          }
          dVar2 = sin(dVar1 * 0.01745329238474369);
          dVar3 = sin(dVar10 * 0.01745329238474369);
          dVar7 = cos(dVar1 * 0.01745329238474369);
          dVar16 = cos(dVar10 * 0.01745329238474369);
          dVar17 = 0.0;
          dVar15 = dVar2 * 0.0 * dVar16 - dVar3;
          dVar16 = dVar2 * 0.0 * dVar3 + dVar16;
          dVar2 = local_128 * dVar7 * -0.0 + local_138 * dVar15 + local_300 * dVar16;
          dVar3 = local_108 * dVar7 * -0.0 + local_118 * dVar15 + local_2f8 * dVar16;
          if (((dVar3 != 0.0) || (NAN(dVar3))) || ((dVar2 != 0.0 || (NAN(dVar2))))) {
            dVar17 = atan2(dVar3,dVar2);
            dVar17 = dVar17 * 57.29577951308232;
          }
          lVar14 = param_1[0x3e];
          *(undefined8 *)(lVar14 + 0x468) = local_2e0;
          *(undefined8 *)(lVar14 + 0x458) = local_2f0;
          *(undefined8 *)(lVar14 + 0x460) = uStack_2e8;
          *(double *)(lVar14 + 0x470) = dVar1;
          *(double *)(lVar14 + 0x478) = dVar10;
          *(double *)(lVar14 + 0x480) = dVar17;
          *(byte *)(lVar14 + 0x442) = *(byte *)(lVar14 + 0x442) | 2;
        }
      }
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d625c FUN_1403d625c body=277 status=ok
// SIG undefined FUN_1403d625c(void)

ulonglong FUN_1403d625c(longlong *param_1,longlong param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 unaff_RBX;
  ulonglong uVar10;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1 == (longlong *)0x0) {
    param_3[2] = DAT_14c8464f0;
    lVar1 = DAT_14c8464e8;
    *param_3 = DAT_14c8464e0;
    param_3[1] = lVar1;
    uVar8 = DAT_14c8463e8;
    *(undefined8 *)(param_4 + 4) = DAT_14c8463e0;
    *(undefined8 *)(param_4 + 6) = uVar8;
    uVar4 = DAT_14c8463d8._4_4_;
    uVar3 = (undefined4)DAT_14c8463d8;
    uVar2 = DAT_14c8463d0._4_4_;
    *param_4 = (undefined4)DAT_14c8463d0;
    param_4[1] = uVar2;
    param_4[2] = uVar3;
    param_4[3] = uVar4;
    uVar10 = 0;
  }
  else {
    uVar10 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_2 == 0);
    if (param_2 != 0) {
      cVar9 = (**(code **)(*param_1 + 0x4c8))(param_1,param_2);
      if (cVar9 != '\0') {
        (**(code **)(*param_1 + 0x4a8))(param_1,&local_98,param_2,0);
        *param_3 = local_78;
        param_3[1] = lStack_70;
        param_3[2] = local_68;
        *param_4 = local_98;
        param_4[1] = uStack_94;
        param_4[2] = uStack_90;
        param_4[3] = uStack_8c;
        param_4[4] = local_88;
        param_4[5] = uStack_84;
        param_4[6] = uStack_80;
        param_4[7] = uStack_7c;
        uVar10 = CONCAT71((int7)((ulonglong)&local_98 >> 8),1);
        goto LAB_1403d6347;
      }
    }
    lVar6 = param_1[0x4d];
    lVar1 = param_1[0x4e];
    *param_3 = param_1[0x4c];
    param_3[1] = lVar6;
    param_3[2] = lVar1;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x244);
    lVar1 = param_1[0x49];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x24c);
    lVar6 = param_1[0x4a];
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x254);
    lVar7 = param_1[0x4b];
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x25c);
    *param_4 = (int)param_1[0x48];
    param_4[1] = uVar2;
    param_4[2] = (int)lVar1;
    param_4[3] = uVar3;
    param_4[4] = (int)lVar6;
    param_4[5] = uVar4;
    param_4[6] = (int)lVar7;
    param_4[7] = uVar5;
  }
LAB_1403d6347:
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d6372 FUN_1403d6372 body=384 status=ok
// SIG undefined FUN_1403d6372(void)

void FUN_1403d6372(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar8 = dVar2 + dVar2;
  dVar3 = param_2[2];
  dVar5 = dVar3 + dVar3;
  dVar7 = dVar1 * (dVar1 + dVar1);
  dVar4 = param_2[3];
  dVar6 = (dVar1 + dVar1) * dVar4;
  *param_1 = 1.0 - (dVar2 * dVar8 + dVar3 * dVar5);
  param_1[4] = dVar1 * dVar8 - dVar5 * dVar4;
  param_1[8] = dVar1 * dVar5 + dVar8 * dVar4;
  param_1[0xc] = DAT_14c8464e0;
  param_1[1] = dVar5 * dVar4 + dVar1 * dVar8;
  param_1[5] = 1.0 - (dVar3 * dVar5 + dVar7);
  param_1[9] = dVar2 * dVar5 - dVar6;
  param_1[0xd] = DAT_14c8464e8;
  param_1[2] = dVar1 * dVar5 - dVar8 * dVar4;
  param_1[6] = dVar6 + dVar2 * dVar5;
  param_1[10] = 1.0 - (dVar2 * dVar8 + dVar7);
  param_1[0xe] = DAT_14c8464f0;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 1403d64f2 FUN_1403d64f2 body=529 status=ok
// SIG undefined FUN_1403d64f2(void)

ulonglong FUN_1403d64f2(longlong *param_1,longlong param_2,double *param_3,double *param_4)

{
  char cVar1;
  undefined8 unaff_RDI;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
    local_d8 = DAT_14c8463d0;
    dStack_d0 = DAT_14c8463d8;
    local_c8 = DAT_14c8463e0;
    dStack_c0 = DAT_14c8463e8;
    local_b8 = DAT_14c8464e0;
    dStack_b0 = DAT_14c8464e8;
    local_a8 = DAT_14c8464f0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_2 == 0);
    if (param_2 != 0) {
      cVar1 = (**(code **)(*param_1 + 0x4c8))(param_1,param_2);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x4a8))(param_1,&local_d8,param_2,0);
        uVar2 = CONCAT71((int7)((ulonglong)&local_d8 >> 8),1);
        goto LAB_1403d65db;
      }
    }
    local_d8 = (double)param_1[0x48];
    dStack_d0 = (double)param_1[0x49];
    local_c8 = (double)param_1[0x4a];
    dStack_c0 = (double)param_1[0x4b];
    local_b8 = (double)param_1[0x4c];
    dStack_b0 = (double)param_1[0x4d];
    local_a8 = (double)param_1[0x4e];
  }
LAB_1403d65db:
  local_b8 = *param_3 - local_b8;
  dStack_b0 = param_3[1] - dStack_b0;
  local_a8 = param_3[2] - local_a8;
  dVar3 = -local_d8;
  dStack_d0 = -dStack_d0;
  local_c8 = local_c8 * -1.0;
  dStack_c0 = dStack_c0 * 1.0;
  dVar6 = local_b8 * local_c8 - dVar3 * local_a8;
  dVar4 = dStack_b0 * dVar3 - dStack_d0 * local_b8;
  dVar5 = local_a8 * dStack_d0 - local_c8 * dStack_b0;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar4 = dVar4 + dVar4;
  *param_4 = (dVar4 * dStack_d0 - dVar6 * local_c8) + dStack_c0 * dVar5 + local_b8;
  param_4[1] = local_d8 * dVar4 + local_c8 * dVar5 + dStack_c0 * dVar6 + dStack_b0;
  param_4[2] = dStack_c0 * dVar4 + local_a8 + (dVar6 * dVar3 - dVar5 * dStack_d0);
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d6704 FUN_1403d6704 body=244 status=ok
// SIG undefined FUN_1403d6704(void)

longlong * FUN_1403d6704(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [36];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  local_20 = 0;
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
  }
  else {
    FUN_146821860(param_1,&local_1c,4);
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_20,4);
  }
  else {
    FUN_146821860(param_1,&local_20,4);
  }
  if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
  }
  else {
    FUN_146821860(param_1,&local_24,4);
  }
  *param_2 = CONCAT44(local_24,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d67fa FUN_1403d67fa body=122 status=ok
// SIG undefined FUN_1403d67fa(void)

void FUN_1403d67fa(longlong param_1,void *param_2,size_t param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (-1 < lVar2) {
    plVar1 = *(longlong **)(param_1 + 0x98);
    if (param_2 == (void *)0x0) {
      if ((param_3 != 0) || (plVar1[1] < lVar2)) goto LAB_1403d6866;
    }
    else {
      if (((longlong)param_3 < 0) || (plVar1[1] < (longlong)(lVar2 + param_3))) goto LAB_1403d6866;
      if (param_3 != 0) {
        memcpy(param_2,(void *)(lVar2 + *plVar1),param_3);
        lVar2 = *(longlong *)(param_1 + 0xa0);
      }
    }
    *(size_t *)(param_1 + 0xa0) = lVar2 + param_3;
    return;
  }
LAB_1403d6866:
  FUN_1468897f6(param_1);
  return;
}



// FUNCTION 1403d6874 FUN_1403d6874 body=954 status=ok
// SIG undefined FUN_1403d6874(void)

void FUN_1403d6874(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  double dVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong lVar17;
  float fVar18;
  double dVar19;
  undefined1 auVar20 [16];
  float fVar21;
  double dVar22;
  double dVar23;
  undefined1 auStack_118 [32];
  longlong local_f8;
  int local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar8 = *(int *)(param_1 + 0x140);
  if (iVar8 != 0) {
    local_e8 = 0;
    uStack_e0 = 0;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar8);
    }
    FUN_1403d6c30(&local_e8);
    iVar8 = *(int *)(param_1 + 0x140);
    if ((longlong)iVar8 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x138);
      lVar17 = 0;
      do {
        if ((-1 < *(int *)(lVar9 + 0xe0 + lVar17)) && (*(int *)(lVar9 + 0xe4 + lVar17) != -1)) {
          dVar2 = *(double *)(lVar9 + 0x1f8 + lVar17);
          dVar3 = *(double *)(lVar9 + 0x200 + lVar17);
          dVar4 = *(double *)(lVar9 + 0x208 + lVar17);
          dVar5 = *(double *)(param_1 + 0x160);
          dVar6 = *(double *)(param_1 + 0x150);
          dVar7 = *(double *)(param_1 + 0x158);
          dVar23 = dVar7 * dVar4 - dVar3 * dVar5;
          dVar23 = dVar23 + dVar23;
          dVar19 = *(double *)(param_1 + 0x168);
          dVar11 = dVar6 * dVar3 - dVar2 * dVar7;
          dVar11 = dVar11 + dVar11;
          dVar22 = dVar5 * dVar2 - dVar4 * dVar6;
          dVar22 = dVar22 + dVar22;
          dVar4 = (dVar6 * dVar22 - dVar23 * dVar7) + dVar19 * dVar11 + dVar4 +
                  *(double *)(param_1 + 0x1e0);
          dVar3 = (dVar5 * dVar23 - dVar11 * dVar6) + dVar19 * dVar22 + dVar3 +
                  *(double *)(param_1 + 0x1d8);
          dVar2 = (dVar7 * dVar11 - dVar22 * dVar5) + dVar19 * dVar23 + dVar2 +
                  *(double *)(param_1 + 0x1d0);
          dVar5 = dVar4 - *(double *)(lVar9 + 0x90 + lVar17);
          dVar6 = dVar3 - *(double *)(lVar9 + 0x88 + lVar17);
          dVar7 = dVar2 - *(double *)(lVar9 + 0x80 + lVar17);
          fVar21 = (1.0 - *(float *)(lVar9 + 0x378 + lVar17)) * *(float *)(lVar9 + 0x214 + lVar17);
          fVar21 = fVar21 * fVar21;
          fVar18 = *(float *)(lVar9 + 0x210 + lVar17);
          if (fVar18 <= fVar21) {
            fVar18 = fVar21;
          }
          fVar21 = (float)(dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6);
          if (fVar18 < fVar21) {
            fVar18 = fVar18 / fVar21;
            if (fVar18 < 0.0) {
              fVar18 = sqrtf(fVar18);
            }
            else {
              fVar18 = SQRT(fVar18);
            }
            dVar19 = (double)fVar18;
            dVar3 = dVar3 - dVar6 * dVar19;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = dVar4 - dVar5 * dVar19;
            auVar10._8_4_ = SUB84(dVar3,0);
            auVar10._0_8_ = dVar2 - dVar7 * dVar19;
            auVar10._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
            *(undefined1 (*) [16])(lVar9 + 0x80 + lVar17) = auVar10;
            *(undefined1 (*) [16])(lVar9 + 0x90 + lVar17) = auVar20;
          }
          uVar12 = uStack_e0;
          lVar15 = (longlong)(int)uStack_e0;
          uVar13 = (int)uStack_e0 + 1;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar13);
          if (uStack_e0._4_4_ < uVar13) {
            FUN_1400c28ea(&local_e8,uVar12 & 0xffffffff);
          }
          puVar1 = (undefined4 *)(local_e8 + lVar15 * 0x70);
          *puVar1 = *(undefined4 *)(lVar9 + 0xd4 + lVar17);
          puVar14 = (undefined8 *)(lVar9 + 0x60 + lVar17);
          puVar16 = (undefined8 *)(puVar1 + 4);
          for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
            *puVar16 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar16 = puVar16 + 1;
          }
        }
        lVar17 = lVar17 + 0x4d0;
      } while ((longlong)iVar8 * 0x4d0 - lVar17 != 0);
    }
    if ((int)uStack_e0 != 0) {
      local_f8 = local_e8;
      local_f0 = (int)uStack_e0;
      FUN_1447d5b6c(param_2 + 0x20);
    }
    if (local_e8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d6c30 FUN_1403d6c30 body=227 status=ok
// SIG undefined FUN_1403d6c30(void)

void FUN_1403d6c30(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_2 == 0) {
    iVar5 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x70,0x10);
  }
  return;
}



// FUNCTION 1403d6d14 FUN_1403d6d14 body=1387 status=ok
// SIG undefined FUN_1403d6d14(void)

longlong * FUN_1403d6d14(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  
  lVar5 = *param_1;
  uVar4 = (**(code **)(*(longlong *)param_1[1] + 8))();
  if (*(char *)(lVar5 + 0x60) == '\x01') {
    FUN_14010fbc8(lVar5 + 0x2f8,param_2,uVar4,0);
  }
  if (param_1[10] == 0) {
    lVar5 = FUN_144735dd8(param_2,*param_1 + 0x510,0);
    param_1[0xd] = lVar5;
    lVar5 = FUN_144735dd8(param_2,*param_1 + 0x4b0,0);
    param_1[10] = lVar5;
    lVar5 = FUN_144735dd8(param_2,*param_1 + 0x4d0,0);
    param_1[0xb] = lVar5;
    lVar5 = FUN_144735dd8(param_2,*param_1 + 0x4f0,0);
    param_1[0xc] = lVar5;
    if (*(char *)(*param_1 + 0x61) == '\x01') {
      lVar5 = FUN_144735dd8(param_2,*param_1 + 0x530,0);
    }
    else {
      lVar5 = FUN_144735828(&DAT_14ca63b10,param_2,0x10);
    }
    param_1[0xe] = lVar5;
    param_1[2] = 0x300000009;
    *(undefined4 *)(param_1 + 3) = 7;
    lVar5 = param_1[0xd];
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(*param_1 + 0x68);
    *(uint *)(param_1 + 4) = (uint)*(byte *)(*param_1 + 0x61);
    if ((*(byte *)(lVar5 + 0x68) & 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x1c;
    }
    plVar1 = (longlong *)(param_2 + 0x70);
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 9;
    }
    lVar2 = param_2 + 0x198;
    *(undefined8 **)(param_2 + 0x70) = puVar6;
    puVar7[1] = *(undefined8 *)(lVar5 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar7 + 5) = uVar8;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar5;
    iVar3 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar2,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[5] = (longlong)puVar7;
    lVar5 = param_1[10];
    if ((*(byte *)(lVar5 + 0x68) & 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x1c;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar6;
    puVar7[1] = *(undefined8 *)(lVar5 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar7 + 5) = uVar8;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar5;
    iVar3 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar2,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[6] = (longlong)puVar7;
    lVar5 = param_1[0xc];
    if ((*(byte *)(lVar5 + 0x68) & 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x1c;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar6;
    puVar7[1] = *(undefined8 *)(lVar5 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar7 + 5) = uVar8;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar5;
    iVar3 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar2,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[8] = (longlong)puVar7;
    lVar5 = param_1[0xb];
    if ((*(byte *)(lVar5 + 0x68) & 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x1c;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar6;
    puVar7[1] = *(undefined8 *)(lVar5 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar7 + 5) = uVar8;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar5;
    iVar3 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar2,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[7] = (longlong)puVar7;
    lVar5 = param_1[0xe];
    if ((*(byte *)(lVar5 + 0x68) & 0x80) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0x1c;
    }
    puVar7 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar6 = puVar7 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar6) {
      FUN_140023dd8(plVar1,0x50);
      puVar7 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar6 = puVar7 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar6;
    puVar7[1] = *(undefined8 *)(lVar5 + 8);
    puVar7[2] = 0;
    *(undefined1 *)(puVar7 + 3) = 3;
    *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
    *puVar7 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar7 + 5) = uVar8;
    *(undefined8 *)((longlong)puVar7 + 0x2c) = 0xffffffff00000000;
    puVar7[7] = 0;
    puVar7[8] = lVar5;
    iVar3 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(lVar2,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar7;
    *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    param_1[9] = (longlong)puVar7;
  }
  return param_1 + 2;
}



// FUNCTION 1403d7280 FUN_1403d7280 body=238 status=ok
// SIG undefined FUN_1403d7280(void)

longlong * FUN_1403d7280(longlong *param_1,undefined4 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_144a8f66a();
  local_30 = 1;
  local_38 = param_2;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,0,*(undefined8 *)(lVar4 + 0x48));
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar5 = (longlong *)FUN_14001cc68(0x10,8);
          plVar5[1] = local_28;
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
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1403d7370 FUN_1403d7370 body=693 status=ok
// SIG undefined FUN_1403d7370(void)

void FUN_1403d7370(longlong param_1,longlong param_2)

{
  ulonglong *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 auStack_248 [37];
  undefined *puStack_120;
  undefined1 auStack_118 [32];
  wchar_t *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined **local_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined1 local_a1;
  undefined *local_a0;
  longlong local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 auStack_6c [8];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_88 = *(undefined8 *)(param_1 + 0x68);
  uStack_80 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x28);
  local_78 = *(undefined8 *)(param_1 + 0x10);
  local_70 = *(undefined4 *)(param_1 + 0x18);
  lVar3 = 0x24;
  do {
    *(undefined8 *)((longlong)&local_90 + lVar3) = *(undefined8 *)(param_1 + -8 + lVar3);
    *(undefined8 *)((longlong)&local_88 + lVar3) = *(undefined8 *)(param_1 + lVar3);
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 100);
  local_2c = *(undefined4 *)(param_1 + 0x5c);
  puStack_120 = (undefined *)0x1403d73f5;
  FUN_140069376(param_2);
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar5 + 0x43;
  if (*(undefined8 **)(param_2 + 0x78) < puVar4) {
    puStack_120 = (undefined *)0x1403d741f;
    FUN_140023dd8(puVar1,0x220);
    puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x43;
  }
  *puVar1 = (ulonglong)puVar4;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e1d98) {
    puStack_120 = (undefined *)0x1403d7587;
    FUN_144b3d300(&DAT_14c9e1d98);
    if (DAT_14c9e1d98 == -1) {
      puStack_120 = (undefined *)0x1403d75a1;
      FUN_14596f92a(&local_a0);
      local_b0 = 0;
      local_c0 = 0;
      local_e0 = "Unknown";
      local_f0 = 0;
      uStack_e8 = 0;
      local_f8 = L"FEmptyShaderParameters";
      local_b8 = 0;
      local_d0 = 0x10;
      local_d8 = 0x7a6;
      puStack_120 = (undefined *)0x1403d75fa;
      local_c8 = &local_a0;
      FUN_140b49562(&DAT_14c9e1d18,0,1);
      if (local_a0 != (undefined *)0x0) {
        puStack_120 = (undefined *)0x1403d7624;
        FUN_1400020a8();
      }
      puStack_120 = (undefined *)0x1403d760e;
      atexit((_func_5014 *)&LAB_143135258);
      puStack_120 = (undefined *)0x1403d761a;
      _Init_thread_footer(&DAT_14c9e1d98);
    }
  }
  local_a0 = &DAT_14ca71740;
  local_98 = DAT_14c9e1d60;
  if (DAT_14c9e1d60 != 0) {
    LOCK();
    *(int *)(DAT_14c9e1d60 + 8) = *(int *)(DAT_14c9e1d60 + 8) + 1;
    UNLOCK();
  }
  local_90 = &DAT_14c9e1d18;
  local_f8 = (wchar_t *)((ulonglong)local_f8 & 0xffffffffffffff00);
  puStack_120 = (undefined *)0x1403d74ab;
  FUN_140068f1a(puVar5,&local_a1,&local_a0,0x10);
  *(undefined4 *)(puVar5 + 0x37) = (undefined4)local_88;
  *(undefined4 *)((longlong)puVar5 + 0x1bc) = local_88._4_4_;
  *(undefined4 *)(puVar5 + 0x38) = (undefined4)uStack_80;
  *(undefined4 *)((longlong)puVar5 + 0x1c4) = uStack_80._4_4_;
  *(undefined4 *)(puVar5 + 0x3a) = local_70;
  puVar5[0x39] = local_78;
  lVar3 = 0x1dc;
  do {
    *(undefined8 *)((longlong)puVar5 + lVar3 + -8) = *(undefined8 *)((longlong)auStack_248 + lVar3);
    *(undefined8 *)((longlong)puVar5 + lVar3) = *(undefined8 *)((longlong)auStack_248 + lVar3 + 8);
    lVar3 = lVar3 + 0x10;
  } while (lVar3 != 0x21c);
  *(undefined4 *)((longlong)puVar5 + 0x214) = local_2c;
  *puVar5 = &PTR_FUN_14a337f70;
  iVar2 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
    puStack_120 = (undefined *)0x1403d7533;
    FUN_14470e57a(param_2 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  puStack_120 = (undefined *)0x1403d7554;
  FUN_143204634(param_2,puVar5);
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_120 = &UNK_1403d757a;
  FUN_144d8e3a0();
}



// FUNCTION 1403d7634 FUN_1403d7634 body=70 status=ok
// SIG undefined FUN_1403d7634(void)

undefined8 * FUN_1403d7634(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b08c110;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403d767a FUN_1403d767a body=219 status=ok
// SIG undefined FUN_1403d767a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403d767a(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b081e90;
  FUN_1403d7755(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7755(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[6] + 0x10))();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001403d772c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1403d7755 FUN_1403d7755 body=88 status=ok
// SIG undefined FUN_1403d7755(void)

void FUN_1403d7755(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b082af8;
    plVar3 = (longlong *)param_1[5];
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    param_1 = param_1 + 7;
  }
  return;
}



// FUNCTION 1403d77ae FUN_1403d77ae body=138 status=ok
// SIG undefined FUN_1403d77ae(void)

longlong FUN_1403d77ae(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb853e8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb853e8,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d783a FUN_1403d783a body=423 status=ok
// SIG undefined FUN_1403d783a(void)

undefined * FUN_1403d783a(void)

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
              0x110) < DAT_14ca6af88) {
    FUN_144b3d300(&DAT_14ca6af88);
    if (DAT_14ca6af88 == -1) {
      FUN_145709b7a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"VolumetricFog";
      local_78 = L"FVolumetricFogGlobalData";
      local_50 = 0x90;
      local_58 = 0x2d0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6af08,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431028ae);
      _Init_thread_footer(&DAT_14ca6af88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca6af08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d79e2 FUN_1403d79e2 body=40 status=ok
// SIG undefined FUN_1403d79e2(void)

undefined8 FUN_1403d79e2(undefined8 param_1,int param_2)

{
  FUN_1403d7a0a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403d7a0a FUN_1403d7a0a body=301 status=ok
// SIG undefined FUN_1403d7a0a(void)

void FUN_1403d7a0a(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b16e030;
  param_1[0x72] = &PTR_FUN_14b16e670;
  param_1[0x73] = &PTR_FUN_14b16e690;
  param_1[0x78] = &PTR_FUN_14b16e6b0;
  param_1[0x79] = &PTR_FUN_14b16e720;
  param_1[0x7a] = &PTR_FUN_14b16e750;
  param_1[0x7b] = &PTR_FUN_14b16e780;
  param_1[0x7c] = &PTR_FUN_14b16e7f0;
  param_1[0x7d] = &PTR_FUN_14b16e808;
  param_1[0x7e] = &PTR_FUN_14b16e820;
  param_1[0x7f] = &PTR_FUN_14b16e840;
  plVar3 = (longlong *)param_1[0x108];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1403d7b38(param_1 + 0xf8);
  FUN_1403d7bbc(param_1 + 0xe8);
  param_1[0xa4] = &PTR_FUN_14b177f30;
  if (param_1[0xac] != 0) {
    FUN_140872868(param_1 + 0xa4);
  }
  FUN_1403d7c6c(param_1 + 0xa4);
  FUN_1403d7d90(param_1 + 0x81);
  FUN_140222560(param_1);
  return;
}



// FUNCTION 1403d7b38 FUN_1403d7b38 body=132 status=ok
// SIG undefined FUN_1403d7b38(void)

void FUN_1403d7b38(longlong *param_1)

{
  FUN_144760e21(param_1[0xb],(int)param_1[0xc]);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14078aa76(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1403d7bbc FUN_1403d7bbc body=132 status=ok
// SIG undefined FUN_1403d7bbc(void)

void FUN_1403d7bbc(longlong *param_1)

{
  if (DAT_14c872bd8 == '\0') {
    FUN_140633758(param_1);
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7c40(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403d7c40 FUN_1403d7c40 body=43 status=ok
// SIG undefined FUN_1403d7c40(void)

void FUN_1403d7c40(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1403d8344(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 1403d7c6c FUN_1403d7c6c body=214 status=ok
// SIG undefined FUN_1403d7c6c(void)

void FUN_1403d7c6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b023790;
  if (param_1[8] != 0) {
    FUN_140872868(param_1);
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x3e) == '\x01') {
    *(undefined1 *)(param_1 + 0x3e) = 0;
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7d42(param_1[0x2a],*(undefined4 *)(param_1 + 0x2b));
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d7f26(param_1);
  return;
}



// FUNCTION 1403d7d42 FUN_1403d7d42 body=77 status=ok
// SIG undefined FUN_1403d7d42(void)

void FUN_1403d7d42(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d7d90 FUN_1403d7d90 body=282 status=ok
// SIG undefined FUN_1403d7d90(void)

void FUN_1403d7d90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[0x1f];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x1d];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1403d7eaa(param_1 + 0x13,1);
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403d7eaa FUN_1403d7eaa body=124 status=ok
// SIG undefined FUN_1403d7eaa(void)

void FUN_1403d7eaa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1403d7f26 FUN_1403d7f26 body=474 status=ok
// SIG undefined FUN_1403d7f26(void)

void FUN_1403d7f26(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a1b57d0;
  if (param_1[8] != 0) {
    FUN_140872c8a(param_1);
  }
  plVar3 = (longlong *)param_1[0x25];
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
  plVar3 = (longlong *)param_1[0x23];
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
  plVar3 = (longlong *)param_1[0x20];
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
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d817a(param_1 + 0x14);
  FUN_1403d8100(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_1[0xb];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_144760e21(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001403d802c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1403d8100 FUN_1403d8100 body=121 status=ok
// SIG undefined FUN_1403d8100(void)

void FUN_1403d8100(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      if (puVar3[7] != 0) {
        FUN_1400020a8();
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d817a FUN_1403d817a body=55 status=ok
// SIG undefined FUN_1403d817a(void)

void FUN_1403d817a(longlong *param_1)

{
  FUN_1403d81b2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403d81b2 FUN_1403d81b2 body=400 status=ok
// SIG undefined FUN_1403d81b2(void)

void FUN_1403d81b2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x38;
      FUN_144760e21(*(undefined8 *)(lVar2 + 0x10 + lVar5),*(undefined4 *)(lVar2 + 0x18 + lVar5));
      if (*(longlong *)(lVar2 + 0x10 + lVar5) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403d8344 FUN_1403d8344 body=135 status=ok
// SIG undefined FUN_1403d8344(void)

void FUN_1403d8344(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x74) == '\x01') {
    *(undefined1 *)(param_1 + 0x74) = 0;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403d83cc FUN_1403d83cc body=456 status=ok
// SIG undefined FUN_1403d83cc(void)

undefined8 *
FUN_1403d83cc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ushort param_5,undefined8 param_6)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  FUN_140069376();
  puVar1 = (ulonglong *)(param_1 + 0x70);
  if ((param_5 & 4) == 0) {
    if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14ca84e6a == '\x01')) &&
       (((DAT_14ca84e99 & 1) == 0 && (DAT_14c760ddc == 2 && (param_5 & 2) != 0)))) {
      param_5 = param_5 & 0xfff9 | 4;
    }
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 0x4b;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x260);
      puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar6 + 0x4b;
    }
    *puVar1 = (ulonglong)puVar5;
    FUN_1403d8594(puVar6,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    uVar4 = FUN_144a8b328(L"[Compiled Out]",param_5);
    puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar6 + 0x4c;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x268);
      puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar6 + 0x4c;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    uVar3 = *(undefined4 *)(param_1 + 0x660);
    FUN_1403d8594(puVar6,param_2,param_3,param_4,uVar4,param_6);
    *puVar6 = &PTR_FUN_14a241aa0;
    *(undefined4 *)(puVar6 + 0x4b) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar6);
  return puVar6;
}



// FUNCTION 1403d8594 FUN_1403d8594 body=249 status=ok
// SIG undefined FUN_1403d8594(void)

undefined8 *
FUN_1403d8594(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined2 param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(longlong *)(param_3 + 0x48);
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  local_48 = 2;
  local_40 = param_4;
  local_30 = param_3;
  FUN_140068f1a(param_1,param_2,&local_40,param_5);
  *param_1 = &PTR_FUN_14a241ac0;
  uVar1 = param_6[1];
  uVar2 = param_6[2];
  uVar3 = param_6[3];
  *(undefined4 *)(param_1 + 0x37) = *param_6;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = uVar3;
  param_1[0x39] = *(undefined8 *)(param_6 + 4);
  param_1[0x3a] = *(undefined8 *)(param_6 + 6);
  param_1[0x3b] = *(undefined8 *)(param_6 + 8);
  param_1[0x3c] = *(undefined8 *)(param_6 + 10);
  param_1[0x3d] = *(undefined8 *)(param_6 + 0xc);
  param_1[0x3e] = *(undefined8 *)(param_6 + 0xe);
  puVar5 = (undefined8 *)(param_6 + 0x10);
  puVar6 = param_1 + 0x3f;
  for (lVar4 = 0xb; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  *(undefined1 *)(param_1 + 0x4a) = *(undefined1 *)(param_6 + 0x26);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d868e FUN_1403d868e body=215 status=ok
// SIG undefined FUN_1403d868e(void)

undefined8 FUN_1403d868e(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x30);
    plVar1 = plVar8 + *(int *)(param_1 + 0x38);
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    uVar4 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    do {
      lVar3 = *plVar8;
      if (*(int *)(lVar3 + 0xf8) == *(int *)(lVar3 + 0x124)) {
LAB_1403d8753:
        puVar7 = (ulonglong *)0x0;
      }
      else {
        lVar6 = lVar3 + 0x128;
        if (*(longlong *)(lVar3 + 0x130) != 0) {
          lVar6 = *(longlong *)(lVar3 + 0x130);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x138) - 1U & (uVar4 >> 0x10 ^ uVar4))
                                 * 4);
        if (iVar5 == -1) goto LAB_1403d8753;
        do {
          puVar7 = (ulonglong *)(*(longlong *)(lVar3 + 0xf0) + (longlong)iVar5 * 0x18);
          if (*puVar7 == uVar2) break;
          iVar5 = (int)puVar7[2];
          puVar7 = (ulonglong *)0x0;
        } while (iVar5 != -1);
      }
      if (((int)puVar7[1] != -1) && (iVar5 = FUN_1403d8766(), iVar5 != -1)) {
        return 1;
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  return 0;
}



// FUNCTION 1403d8766 FUN_1403d8766 body=375 status=ok
// SIG undefined FUN_1403d8766(void)

undefined4 FUN_1403d8766(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong *puVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0xf8) == *(int *)(param_1 + 0x124)) {
LAB_1403d88b0:
    puVar4 = (ulonglong *)0x0;
  }
  else {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x128;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x130);
    }
    iVar5 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x138) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar5 == -1) goto LAB_1403d88b0;
    do {
      puVar4 = (ulonglong *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar5 * 0x18);
      if (*puVar4 == param_2) break;
      iVar5 = (int)puVar4[2];
      puVar4 = (ulonglong *)0x0;
    } while (iVar5 != -1);
  }
  iVar5 = (int)puVar4[1];
  if ((longlong)iVar5 < 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_1 + 0xe8) <= iVar5) {
    return 0xffffffff;
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + (longlong)iVar5 * 8);
  if (*(int *)(lVar2 + 0x420) != *(int *)(lVar2 + 0x44c)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = lVar2 + 0x450;
    if (*(longlong *)(lVar2 + 0x458) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x458);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x460) - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4
                    );
    if (iVar5 != -1) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0x418) + (longlong)iVar5 * 0x168;
        if (*(ulonglong *)(*(longlong *)(lVar2 + 0x418) + (longlong)iVar5 * 0x168) == param_2)
        break;
        iVar5 = *(int *)(lVar3 + 0x160);
        lVar3 = 0;
      } while (iVar5 != -1);
      goto LAB_1403d88a8;
    }
  }
  lVar3 = 0;
LAB_1403d88a8:
  return *(undefined4 *)(lVar3 + 0xc);
}



// FUNCTION 1403d88ec FUN_1403d88ec body=156 status=ok
// SIG undefined FUN_1403d88ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1403d88ec(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b007690;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403d8988 FUN_1403d8988 body=153 status=ok
// SIG undefined FUN_1403d8988(void)

void FUN_1403d8988(undefined8 param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = FUN_1447210f0();
  lVar2 = FUN_1456d188e();
  if ((lVar2 == 0) || (DAT_14c950c29 == '\0')) {
    if (lVar2 != 0) goto LAB_1403d89c0;
  }
  else {
    FUN_1456cec3c(lVar2);
LAB_1403d89c0:
    lVar3 = FUN_1456d188e();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        lVar5 = lVar2;
      }
      goto LAB_1403d89e6;
    }
  }
  lVar5 = 0;
LAB_1403d89e6:
  uVar4 = FUN_1448a6f9c(lVar1 + 0x870,lVar5);
  FUN_1403d8a22(uVar4,param_1);
  FUN_1403d8a98(param_1,param_2);
  return;
}



// FUNCTION 1403d8a22 FUN_1403d8a22 body=117 status=ok
// SIG undefined FUN_1403d8a22(void)

void FUN_1403d8a22(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_2;
  lVar1 = FUN_1405d16ba();
  if (lVar1 != 0) {
    local_20 = &local_28;
    FUN_1437abc42(lVar1 + 8);
    param_2 = local_28;
  }
  FUN_1437abba0(param_1 + 0x100,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d8a98 FUN_1403d8a98 body=317 status=ok
// SIG undefined FUN_1403d8a98(void)

void FUN_1403d8a98(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [192];
  undefined1 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)((longlong)param_1 + 0x65) & 0x18) == 0x10) {
    *(byte *)((longlong)param_1 + 0x65) = *(byte *)((longlong)param_1 + 0x65) & 0xe7;
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0xef;
    FUN_1400b2a20(param_1);
    local_f8[0] = (char)param_2;
    uVar2 = FUN_14477b072(param_1,DAT_14cac9b90);
    (**(code **)(*param_1 + 0x248))(param_1,uVar2,local_f8);
    FUN_140259828((longlong)param_1 + 0x20f,param_1,param_2);
    FUN_1417b35be(param_1 + 0x5a,param_1,param_2);
    local_38 = (undefined1 *)0x0;
    local_30 = 0x1800000000;
    FUN_1448c0c58(param_1,local_f8,0);
    puVar4 = local_38;
    if (local_38 == (undefined1 *)0x0) {
      puVar4 = local_f8;
    }
    lVar3 = (longlong)(int)local_30;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        plVar1 = *(longlong **)(puVar4 + lVar5);
        if ((*(byte *)((longlong)plVar1 + 0x9f) & 0x20) != 0) {
          (**(code **)(*plVar1 + 0x390))(plVar1,param_2);
        }
        lVar5 = lVar5 + 8;
      } while (lVar3 * 8 != lVar5);
    }
    if (local_38 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403d8bdc FUN_1403d8bdc body=679 status=ok
// SIG undefined FUN_1403d8bdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403d8bdc(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)((longlong)param_1 + 0x334) & 1) == 0) {
    (**(code **)(*param_1 + 0x2e8))(param_1);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0e520) {
    FUN_144b3d300(&DAT_14cb0e520);
    if (DAT_14cb0e520 == -1) {
      DAT_14cb0e510 = 0;
      _DAT_14cb0e518 = 0;
      atexit(FUN_143774cb0);
      _Init_thread_footer(&DAT_14cb0e520);
    }
  }
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14caf9cd0 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1463c0cc2;
      local_68 = &LAB_147c9db5b;
      local_70 = &LAB_1463f9c44;
      local_78 = &DAT_149e063b2;
      local_80 = 0x2000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = (undefined8 *)CONCAT44(local_98._4_4_,0x958);
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    if ((*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8) ==
        DAT_14caf9cd0 + 0x30)) {
      (**(code **)(*plVar1 + 0xb50))(plVar1,param_3,param_4);
      (**(code **)(*param_1 + 0x2b8))(param_1,param_3,param_4,&DAT_14cb0e510);
      local_98 = &DAT_14cb0e510;
      (**(code **)(*param_1 + 0x2c0))(param_1,param_2,param_3,param_4);
      (**(code **)(*plVar1 + 0xb58))(plVar1,param_3,param_4);
      goto LAB_1403d8cb5;
    }
  }
  (**(code **)(*param_1 + 0x2b8))(param_1,param_3,param_4,&DAT_14cb0e510);
  local_98 = &DAT_14cb0e510;
  (**(code **)(*param_1 + 0x2c0))(param_1,param_2,param_3,param_4);
LAB_1403d8cb5:
  FUN_144b2b950(param_1);
  FUN_14377d2ba(param_1 + 0x26);
  uVar3 = _DAT_14cb0e518;
  FUN_14377d26e(DAT_14cb0e510,_DAT_14cb0e518 & 0xffffffff);
  uVar2 = _DAT_14cb0e518 >> 0x20;
  _DAT_14cb0e518 = _DAT_14cb0e518 & 0xffffffff00000000;
  if (((longlong)uVar3 < 0) && ((int)uVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d8ea4 FUN_1403d8ea4 body=29 status=ok
// SIG undefined FUN_1403d8ea4(void)

void FUN_1403d8ea4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1403d8ec2 FUN_1403d8ec2 body=31 status=ok
// SIG undefined FUN_1403d8ec2(void)

undefined8 FUN_1403d8ec2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403d8ee2 FUN_1403d8ee2 body=738 status=ok
// SIG undefined FUN_1403d8ee2(void)

void FUN_1403d8ee2(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_34;
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  local_34 = param_3;
  if (param_3 != -1) {
    if (DAT_14c75efd0 == '\x01') {
      iVar1 = *(int *)(param_1 + 0x154);
      *(int *)(param_1 + 0x154) = iVar1 + 1;
      if (iVar1 < DAT_14c75efdc) {
        QueryPerformanceCounter(&local_30);
        if ((1e-08 < ABS(*(double *)(param_1 + 0x148))) &&
           ((double)DAT_14c75efd8 <
            ((double)local_30.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x148))
           ) goto LAB_1403d91b8;
      }
      else {
        *(undefined4 *)(param_1 + 0x154) = 0;
      }
    }
    else if (param_3 == 0) {
LAB_1403d91b8:
      *(undefined8 *)(param_1 + 0x148) = 0;
      goto LAB_1403d9180;
    }
  }
  if (ABS(*(double *)(param_1 + 0x148)) <= 1e-08) {
    QueryPerformanceCounter(&local_30);
    *(double *)(param_1 + 0x148) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
  }
  cVar2 = FUN_14498252e(param_2 + 0x10,param_1 + 0x10,&local_34,&local_40);
  if (cVar2 != '\0') {
    cVar2 = FUN_144982732(param_2 + 0x20,param_1 + 0x20,&local_34,&local_40);
    if (cVar2 != '\0') {
      cVar2 = FUN_1403d9306(param_2 + 0x38,param_1 + 0x38,&local_34,&local_40);
      if (cVar2 != '\0') {
        cVar2 = FUN_1403d91c6(param_2 + 0xa8,param_1 + 0xa8,&local_34,&local_40);
        if (cVar2 != '\0') {
          cVar2 = FUN_1403d91c6(param_2 + 0xb8,param_1 + 0xb8,&local_34,&local_40);
          if (cVar2 != '\0') {
            cVar2 = FUN_1403d9306(param_2 + 0x110,param_1 + 0x110,&local_34,&local_40);
            if (cVar2 != '\0') {
              cVar2 = FUN_144982368(param_2 + 0x120,param_1 + 0x120,&local_34,&local_40);
              if (cVar2 != '\0') {
                cVar2 = FUN_1403d91c6(param_2 + 400,param_1 + 400,&local_34,&local_40);
                if (cVar2 != '\0') {
                  cVar2 = FUN_1403d91c6(param_2 + 0x1a0,param_1 + 0x1a0,&local_34,&local_40);
                  if (cVar2 != '\0') {
                    cVar2 = FUN_1403d91c6(param_2 + 0x1c0,param_1 + 0x1c0,&local_34,&local_40);
                    if (cVar2 != '\0') {
                      cVar2 = FUN_1403d9266(param_2 + 0x1b0,param_1 + 0x1b0,&local_34,&local_40);
                      if (cVar2 != '\0') {
                        if (*(longlong *)(param_1 + 200) != 0) {
                          FUN_1403d8ee2(*(longlong *)(param_1 + 200),*(undefined8 *)(param_2 + 200),
                                        param_3);
                          if (*(char *)(*(longlong *)(param_1 + 200) + 0xc) != '\x01')
                          goto LAB_1403d9180;
                        }
                        *(undefined1 *)(param_1 + 0xc) = 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_1403d9180:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403d91c6 FUN_1403d91c6 body=159 status=ok
// SIG undefined FUN_1403d91c6(void)

undefined4 FUN_1403d91c6(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_1429cbec2(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1446f48e2(param_2,iVar1);
      }
      *(undefined4 *)(*param_2 + (longlong)iVar1 * 4) = *(undefined4 *)(lVar2 + lVar6 * 4);
      iVar5 = iVar5 + 4;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 1403d9266 FUN_1403d9266 body=159 status=ok
// SIG undefined FUN_1403d9266(void)

undefined4 FUN_1403d9266(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = (longlong)(int)param_2[1];
  iVar5 = 0;
  if ((int)param_2[1] < (int)param_1[1]) {
    iVar5 = 0;
    do {
      cVar3 = FUN_1429cbec2(param_4,*param_3,iVar5);
      if (cVar3 == '\0') break;
      lVar2 = *param_1;
      iVar1 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
        FUN_1400232c6(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar6 * 8);
      iVar5 = iVar5 + 8;
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_1[1]);
  }
  iVar1 = *param_3;
  if (0 < iVar1) {
    iVar4 = iVar1 - iVar5;
    if (iVar1 < iVar5) {
      iVar4 = 0;
    }
    *param_3 = iVar4;
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 1403d9306 FUN_1403d9306 body=527 status=ok
// SIG undefined FUN_1403d9306(void)

undefined4 FUN_1403d9306(longlong *param_1,longlong *param_2,uint *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_b8 [40];
  uint *local_90;
  LARGE_INTEGER local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar20 = (longlong)(int)param_2[1];
  if ((int)param_2[1] < (int)param_1[1]) {
    lVar22 = lVar20 * 0x68;
    lVar21 = 0;
    do {
      if (*param_3 != 0xffffffff) {
        if (DAT_14c75efd0 == '\x01') {
          lVar19 = *param_4;
          iVar5 = *(int *)(lVar19 + 0x154);
          *(int *)(lVar19 + 0x154) = iVar5 + 1;
          if (iVar5 < DAT_14c75efdc) {
            QueryPerformanceCounter(&local_88);
            if ((1e-08 < ABS(*(double *)(lVar19 + 0x148))) &&
               ((double)DAT_14c75efd8 <
                ((double)local_88.QuadPart * DAT_14c83f420 + 16777216.0) -
                *(double *)(lVar19 + 0x148))) break;
          }
          else {
            *(undefined4 *)(lVar19 + 0x154) = 0;
          }
        }
        else if (*param_3 <= (uint)lVar21) break;
      }
      lVar19 = *param_1;
      iVar5 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar5 + 1U) {
        local_90 = param_3;
        FUN_14479f6b8(param_2,iVar5);
        param_3 = local_90;
      }
      lVar19 = lVar19 + lVar22 + 0x50;
      lVar7 = *param_2;
      lVar18 = (longlong)iVar5 * 0x68;
      *(undefined8 *)(lVar7 + 0x30 + lVar18) = *(undefined8 *)(lVar21 + -0x20 + lVar19);
      puVar1 = (undefined8 *)(lVar21 + -0x50 + lVar19);
      uVar15 = *puVar1;
      uVar16 = puVar1[1];
      puVar2 = (undefined4 *)(lVar21 + -0x40 + lVar19);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      uVar10 = puVar2[2];
      uVar11 = puVar2[3];
      puVar2 = (undefined4 *)(lVar21 + -0x30 + lVar19);
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar3 = (undefined4 *)(lVar7 + 0x20 + lVar18);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
      puVar2 = (undefined4 *)(lVar7 + 0x10 + lVar18);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      *(undefined8 *)(lVar7 + lVar18) = uVar15;
      ((undefined8 *)(lVar7 + lVar18))[1] = uVar16;
      *(undefined8 *)(lVar7 + 0x48 + lVar18) = *(undefined8 *)(lVar21 + -8 + lVar19);
      puVar1 = (undefined8 *)(lVar21 + -0x18 + lVar19);
      uVar15 = puVar1[1];
      puVar4 = (undefined8 *)(lVar7 + 0x38 + lVar18);
      *puVar4 = *puVar1;
      puVar4[1] = uVar15;
      *(undefined8 *)(lVar7 + 0x60 + lVar18) = *(undefined8 *)(lVar21 + 0x10 + lVar19);
      puVar3 = (undefined4 *)(lVar21 + lVar19);
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      puVar2 = (undefined4 *)(lVar7 + 0x50 + lVar18);
      *puVar2 = *puVar3;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      lVar21 = lVar21 + 0x68;
      lVar20 = lVar20 + 1;
    } while (lVar20 < (int)param_1[1]);
  }
  else {
    lVar21 = 0;
  }
  uVar6 = *param_3;
  if (0 < (int)uVar6) {
    uVar17 = uVar6 - (int)lVar21;
    if ((int)uVar6 < (int)lVar21) {
      uVar17 = 0;
    }
    *param_3 = uVar17;
  }
  if ((local_80 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)(int)param_2[1] >> 8),(int)param_2[1] == (int)param_1[1]);
}



// FUNCTION 1403d9516 FUN_1403d9516 body=373 status=ok
// SIG undefined FUN_1403d9516(void)

void FUN_1403d9516(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403d95a1;
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
LAB_1403d95a1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1403d969a FUN_1403d969a body=40 status=ok
// SIG undefined FUN_1403d969a(void)

undefined8 FUN_1403d969a(undefined8 param_1,int param_2)

{
  FUN_1403d96c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403d96c2 FUN_1403d96c2 body=575 status=ok
// SIG undefined FUN_1403d96c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403d96c2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b41a830;
  param_1[0x8a] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x8d) = 0;
  if (*(int *)((longlong)param_1 + 0x46c) != 0) {
    FUN_140115c12(param_1 + 0x8c,0);
  }
  param_1[0x8b] = 0;
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x85] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)((longlong)param_1 + 0x444) != 0) {
    FUN_140115c12(param_1 + 0x87,0);
  }
  param_1[0x86] = 0;
  if (param_1[0x87] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9901(param_1[0x7e],*(undefined4 *)(param_1 + 0x7f));
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x7b];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1403d9938(param_1[0x78],*(undefined4 *)(param_1 + 0x79));
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d99da(param_1 + 0x58);
  param_1[0x52] = &PTR_FUN_14b398ea0;
  FUN_1403d9976(param_1[0x56],*(undefined4 *)(param_1 + 0x57));
  if (param_1[0x56] != 0) {
    FUN_1400020a8();
  }
  FUN_1403da20a(param_1 + 9);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x0001403d9883. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1403d9901 FUN_1403d9901 body=55 status=ok
// SIG undefined FUN_1403d9901(void)

void FUN_1403d9901(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x40);
    do {
      (*(code *)(&switchD_14400f025::switchdataD_14b1f3410)[*pbVar1])(pbVar1 + -0x38);
      pbVar1 = pbVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9938 FUN_1403d9938 body=62 status=ok
// SIG undefined FUN_1403d9938(void)

void FUN_1403d9938(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      FUN_1447cd778(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9976 FUN_1403d9976 body=100 status=ok
// SIG undefined FUN_1403d9976(void)

void FUN_1403d9976(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b00be10;
    FUN_14487da0a(param_1[3],*(undefined4 *)(param_1 + 4));
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    FUN_14487da48(param_1[1],*(undefined4 *)(param_1 + 2));
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 1403d99da FUN_1403d99da body=455 status=ok
// SIG undefined FUN_1403d99da(void)

void FUN_1403d99da(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  FUN_1403d9fee(param_1[0x17]);
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9cd9(param_1[0x13],(int)param_1[0x14]);
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x12];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = (longlong *)param_1[0x10];
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1403d9c8c(param_1[0xd],(int)param_1[0xe]);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9c41(param_1[0xb],(int)param_1[0xc]);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  puVar4 = (undefined8 *)param_1[9];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  puVar4 = (undefined8 *)param_1[8];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  FUN_1403d9d26(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9bf5(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9ba1(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9ba1(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403d9ba1 FUN_1403d9ba1 body=75 status=ok
// SIG undefined FUN_1403d9ba1(void)

void FUN_1403d9ba1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9bec FUN_1403d9bec body=9 status=ok
// SIG undefined FUN_1403d9bec(void)

void FUN_1403d9bec(longlong param_1)

{
  FUN_1403d9e6c(param_1 + 0x10);
  return;
}



// FUNCTION 1403d9bf5 FUN_1403d9bf5 body=75 status=ok
// SIG undefined FUN_1403d9bf5(void)

void FUN_1403d9bf5(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9c40 FUN_1403d9c40 body=1 status=ok
// SIG undefined FUN_1403d9c40(void)

void FUN_1403d9c40(void)

{
  return;
}



// FUNCTION 1403d9c41 FUN_1403d9c41 body=75 status=ok
// SIG undefined FUN_1403d9c41(void)

void FUN_1403d9c41(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9c8c FUN_1403d9c8c body=77 status=ok
// SIG undefined FUN_1403d9c8c(void)

void FUN_1403d9c8c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9cd9 FUN_1403d9cd9 body=77 status=ok
// SIG undefined FUN_1403d9cd9(void)

void FUN_1403d9cd9(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9d26 FUN_1403d9d26 body=129 status=ok
// SIG undefined FUN_1403d9d26(void)

void FUN_1403d9d26(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x38);
    do {
      FUN_1403d9da7(*(undefined8 *)(puVar4 + -2),*puVar4);
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      FUN_1403d9ddf(*(undefined8 *)(puVar4 + -6),puVar4[-4]);
      if (*(longlong *)(puVar4 + -6) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + -8);
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      puVar4 = puVar4 + 0x12;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9da7 FUN_1403d9da7 body=56 status=ok
// SIG undefined FUN_1403d9da7(void)

void FUN_1403d9da7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1447cd778(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1403d9ddf FUN_1403d9ddf body=73 status=ok
// SIG undefined FUN_1403d9ddf(void)

void FUN_1403d9ddf(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9e28 FUN_1403d9e28 body=67 status=ok
// SIG undefined FUN_1403d9e28(void)

void FUN_1403d9e28(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b35c3a0;
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x0001403d9e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1403d9e6c FUN_1403d9e6c body=131 status=ok
// SIG undefined FUN_1403d9e6c(void)

void FUN_1403d9e6c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b417bb0;
  FUN_1403d9eef(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9fa5(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d9f56(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001403d9eeb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1403d9eef FUN_1403d9eef body=103 status=ok
// SIG undefined FUN_1403d9eef(void)

void FUN_1403d9eef(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  
  if (param_2 != 0) {
    puVar4 = (undefined4 *)(param_1 + 0x20);
    do {
      FUN_14487da48(*(undefined8 *)(puVar4 + -2),*puVar4);
      if (*(longlong *)(puVar4 + -2) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(puVar4 + -4);
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      puVar4 = puVar4 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9f56 FUN_1403d9f56 body=73 status=ok
// SIG undefined FUN_1403d9f56(void)

void FUN_1403d9f56(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9fa0 FUN_1403d9fa0 body=1 status=ok
// SIG undefined FUN_1403d9fa0(void)

void FUN_1403d9fa0(void)

{
  return;
}



// FUNCTION 1403d9fa2 FUN_1403d9fa2 body=1 status=ok
// SIG undefined FUN_1403d9fa2(void)

void FUN_1403d9fa2(void)

{
  return;
}



// FUNCTION 1403d9fa4 FUN_1403d9fa4 body=1 status=ok
// SIG undefined FUN_1403d9fa4(void)

void FUN_1403d9fa4(void)

{
  return;
}



// FUNCTION 1403d9fa5 FUN_1403d9fa5 body=73 status=ok
// SIG undefined FUN_1403d9fa5(void)

void FUN_1403d9fa5(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403d9fee FUN_1403d9fee body=539 status=ok
// SIG undefined FUN_1403d9fee(void)

void FUN_1403d9fee(longlong *param_1)

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
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  if (param_1 == (longlong *)0x0) {
    return;
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar4 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar10 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar13 == uVar10) goto LAB_1403da14e;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x30 + (longlong)iVar4 * 0x48) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar10;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar8[lVar12] & uVar14;
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
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar12 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar12 == lVar9) goto LAB_1403da14e;
        }
        uVar10 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1403da14e:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1403da20a FUN_1403da20a body=1202 status=ok
// SIG undefined FUN_1403da20a(void)

void FUN_1403da20a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b39b808;
  param_1[0x44] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x47],*(undefined4 *)(param_1 + 0x48));
  if (param_1[0x47] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x45],*(undefined4 *)(param_1 + 0x46));
  if (param_1[0x45] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3f] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x42],*(undefined4 *)(param_1 + 0x43));
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x40],*(undefined4 *)(param_1 + 0x41));
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  param_1[0x3a] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x3d],*(undefined4 *)(param_1 + 0x3e));
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  param_1[0x34] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2e] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x28] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  param_1[0x22] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x23],*(undefined4 *)(param_1 + 0x24));
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  param_1[0x1c] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  param_1[0x16] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  param_1[0x10] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  param_1[1] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403da6bc FUN_1403da6bc body=110 status=ok
// SIG undefined FUN_1403da6bc(void)

void FUN_1403da6bc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b35c3c0;
  plVar3 = *(longlong **)(param_1 + 0x68);
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
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
                    /* WARNING: Could not recover jumptable at 0x0001403da726. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1403da72a FUN_1403da72a body=57 status=ok
// SIG undefined FUN_1403da72a(void)

void FUN_1403da72a(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b3a4a00;
  FUN_1447cd778(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1403da764 FUN_1403da764 body=3438 status=ok
// SIG undefined FUN_1403da764(void)

/* WARNING: Removing unreachable block (ram,0x0001403db26f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_1403da764(longlong *param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  double _X;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auStack_308 [32];
  undefined1 local_2e8;
  undefined8 *local_2d8;
  undefined8 *local_2d0;
  undefined8 local_2c8;
  double dStack_2c0;
  undefined8 local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  undefined8 local_288;
  longlong *local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined1 local_268;
  longlong local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  longlong local_210;
  undefined8 local_208;
  char local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong *local_170;
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  undefined1 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  char local_120;
  longlong local_118;
  longlong lStack_110;
  longlong local_108;
  char local_100;
  undefined8 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  lVar12 = *param_3;
  if ((lVar12 == 0) || (param_3[0xc] == 0)) {
    memset(param_2,0,0x370);
    param_2[0x16] = 0x3f800000;
    param_2[0x19] = 0x3f800000;
    *(undefined1 *)(param_2 + 0x1a) = 1;
    uVar8 = DAT_14cb1d028;
    *(undefined8 *)(param_2 + 0x36) = DAT_14cb1d020;
    *(undefined8 *)(param_2 + 0x38) = uVar8;
    *(undefined8 *)(param_2 + 0x3a) = DAT_14cb1d030;
    uVar8 = DAT_14cb1c868;
    *(undefined8 *)(param_2 + 0x3c) = DAT_14cb1c860;
    *(undefined8 *)(param_2 + 0x3e) = uVar8;
    *(undefined8 *)(param_2 + 0x40) = DAT_14cb1c870;
    *(undefined8 *)(param_2 + 0x42) = 0;
    *(undefined8 *)(param_2 + 0x44) = 0;
    param_2[0x46] = 0xffffffff;
    memset(param_2 + 0x48,0,0x108);
    param_2[0x7e] = 0xffffffff;
    param_2[0x4b] = 0x3f800000;
    param_2[0x73] = 0xffffffff;
    param_2[0x8c] = 0xffffffff;
    *(undefined8 *)(param_2 + 0x8e) = 0xffffffffffffffff;
    uVar8 = DAT_14cb1d028;
    *(undefined8 *)(param_2 + 0x92) = DAT_14cb1d020;
    *(undefined8 *)(param_2 + 0x94) = uVar8;
    *(undefined8 *)(param_2 + 0x96) = DAT_14cb1d030;
    uVar8 = DAT_14cb1d028;
    *(undefined8 *)(param_2 + 0x98) = DAT_14cb1d020;
    *(undefined8 *)(param_2 + 0x9a) = uVar8;
    *(undefined8 *)(param_2 + 0x9c) = DAT_14cb1d030;
    *(undefined8 *)(param_2 + 0x9e) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
    param_2[0xa2] = 0xffffffff;
    *(undefined1 *)((longlong)param_2 + 0x291) = 1;
    *(undefined1 *)(param_2 + 0xae) = 0;
    *(undefined8 *)(param_2 + 0xcc) = 0xffffffffffffffff;
    param_2[0xce] = 0xffffffff;
    *(undefined1 *)(param_2 + 0xd8) = 0;
    goto LAB_1403db01d;
  }
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0x3f800000;
  *(undefined8 *)(param_2 + 0x18) = 0x3f80000000000000;
  *(undefined1 *)(param_2 + 0x1a) = 1;
  *(undefined8 *)(param_2 + 0x1c) = 0;
  *(undefined1 *)(param_2 + 0x34) = 0;
  uVar8 = DAT_14cb1d028;
  *(undefined8 *)(param_2 + 0x36) = DAT_14cb1d020;
  *(undefined8 *)(param_2 + 0x38) = uVar8;
  *(undefined8 *)(param_2 + 0x3a) = DAT_14cb1d030;
  uVar8 = DAT_14cb1c868;
  *(undefined8 *)(param_2 + 0x3c) = DAT_14cb1c860;
  *(undefined8 *)(param_2 + 0x3e) = uVar8;
  *(undefined8 *)(param_2 + 0x40) = DAT_14cb1c870;
  *(undefined8 *)(param_2 + 0x42) = 0;
  *(undefined8 *)(param_2 + 0x44) = 0;
  param_2[0x46] = 0xffffffff;
  memset(param_2 + 0x48,0,0x108);
  param_2[0x7e] = 0xffffffff;
  param_2[0x4b] = 0x3f800000;
  param_2[0x73] = 0xffffffff;
  param_2[0x8a] = 0;
  param_2[0x8c] = 0xffffffff;
  *(undefined8 *)(param_2 + 0x8e) = 0xffffffffffffffff;
  param_2[0x90] = 0;
  uVar8 = DAT_14cb1d028;
  *(undefined8 *)(param_2 + 0x92) = DAT_14cb1d020;
  *(undefined8 *)(param_2 + 0x94) = uVar8;
  *(undefined8 *)(param_2 + 0x96) = DAT_14cb1d030;
  *(undefined8 *)(param_2 + 0x9c) = DAT_14cb1d030;
  uVar8 = DAT_14cb1d028;
  *(undefined8 *)(param_2 + 0x98) = DAT_14cb1d020;
  *(undefined8 *)(param_2 + 0x9a) = uVar8;
  *(undefined8 *)(param_2 + 0x9e) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  param_2[0xa2] = 0xffffffff;
  *(undefined2 *)(param_2 + 0xa4) = 0x100;
  *(undefined1 *)(param_2 + 0xac) = 0;
  *(undefined1 *)(param_2 + 0xae) = 0;
  *(undefined1 *)(param_2 + 200) = 0;
  *(undefined8 *)(param_2 + 0xcc) = 0xffffffffffffffff;
  param_2[0xce] = 0xffffffff;
  *(undefined1 *)(param_2 + 0xd6) = 0;
  *(undefined1 *)(param_2 + 0xd8) = 0;
  *(undefined1 *)(param_2 + 1) = 1;
  local_14c = *(undefined4 *)((longlong)param_3 + 0xc);
  *param_2 = local_14c;
  plVar13 = param_3 + 0x33;
  if ((char)param_1[0x39c] != '\0') {
    plVar13 = param_1 + 0x393;
  }
  local_120 = (char)plVar13[4];
  if (local_120 == '\x01') {
    local_178 = plVar13[3];
    local_188 = plVar13[1];
    lStack_180 = plVar13[2];
  }
  local_140 = (undefined4)*plVar13;
  local_100 = (char)plVar13[8];
  if (local_100 == '\x01') {
    local_198 = plVar13[7];
    local_1a8 = plVar13[5];
    lStack_1a0 = plVar13[6];
  }
  local_160 = param_3 + 3;
  local_158 = param_3 + 0xf;
  local_150 = *(undefined1 *)((longlong)param_3 + 0x3c4);
  local_148 = (undefined4)param_3[1];
  local_144 = (undefined4)param_3[2];
  if (local_120 != '\0') {
    local_128 = local_178;
    local_138 = local_188;
    lStack_130 = lStack_180;
  }
  puVar1 = (undefined8 *)(param_2 + 2);
  if (local_100 != '\0') {
    local_108 = local_198;
    local_118 = local_1a8;
    lStack_110 = lStack_1a0;
  }
  local_f8 = *(undefined8 *)((longlong)param_1 + 0xc);
  local_170 = param_1;
  local_168 = lVar12;
  FUN_1449c060a(param_1 + 3,&local_2c8,&local_170,param_3 + 0x43);
  puVar15 = &local_2c8;
  puVar16 = puVar1;
  for (lVar12 = 0xb; lVar12 != 0; lVar12 = lVar12 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  *(undefined1 *)(param_2 + 0x1a) = local_268;
  *(undefined8 *)(param_2 + 0x18) = local_270;
  local_2d0 = puVar1;
  if (DAT_14c950c29 == '\x01') {
    if (local_260 == 0) {
      local_260 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  *(longlong *)(param_2 + 0x1c) = local_260;
  if (&local_270 != (undefined8 *)(param_2 + 0x18)) {
    if (local_200 == '\x01') {
      if ((*(char *)(param_2 + 0x34) != '\0') && (*(longlong *)(param_2 + 0x30) != 0)) {
        FUN_1400020a8();
      }
      *(undefined8 *)(param_2 + 0x26) = local_238;
      *(undefined8 *)(param_2 + 0x22) = local_248;
      *(undefined8 *)(param_2 + 0x24) = uStack_240;
      *(undefined8 *)(param_2 + 0x1e) = local_258;
      *(undefined8 *)(param_2 + 0x20) = uStack_250;
      if (local_210 == 0) {
        *(undefined8 *)(param_2 + 0x2c) = local_220;
        *(undefined8 *)(param_2 + 0x2e) = uStack_218;
        *(undefined8 *)(param_2 + 0x28) = local_230;
        *(undefined8 *)(param_2 + 0x2a) = uStack_228;
      }
      *(longlong *)(param_2 + 0x30) = local_210;
      local_210 = 0;
      param_2[0x32] = (undefined4)local_208;
      param_2[0x33] = local_208._4_4_;
      local_208 = 0x200000000;
      uVar9 = 1;
    }
    else {
      if (*(char *)(param_2 + 0x34) == '\0') goto LAB_1403dab27;
      if (*(longlong *)(param_2 + 0x30) != 0) {
        FUN_1400020a8();
      }
      uVar9 = 0;
    }
    *(undefined1 *)(param_2 + 0x34) = uVar9;
  }
LAB_1403dab27:
  plVar13 = local_1c0;
  *(undefined8 *)(param_2 + 0x3e) = local_1d8;
  *(undefined8 *)(param_2 + 0x40) = uStack_1d0;
  *(undefined8 *)(param_2 + 0x3a) = local_1e8;
  *(undefined8 *)(param_2 + 0x3c) = uStack_1e0;
  *(undefined8 *)(param_2 + 0x36) = local_1f8;
  *(undefined8 *)(param_2 + 0x38) = uStack_1f0;
  if ((undefined8 *)(param_2 + 0x42) != &local_1c8) {
    *(undefined8 *)(param_2 + 0x42) = local_1c8;
    local_1c8 = 0;
    plVar5 = *(longlong **)(param_2 + 0x44);
    if (local_1c0 != plVar5) {
      local_1c0 = (longlong *)0x0;
      *(longlong **)(param_2 + 0x44) = plVar13;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar5 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar5)();
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      }
    }
  }
  plVar13 = local_1c0;
  param_2[0x46] = local_1b8;
  *(undefined8 *)(param_2 + 0x48) = local_1b0;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_1c0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_1c0)();
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
  }
  if ((local_200 == '\x01') && (local_210 != 0)) {
    FUN_1400020a8();
  }
  lVar12 = param_1[0xd4];
  *(bool *)(param_2 + 0xa4) = (char)lVar12 == '\0';
  if (((((char)lVar12 == '\x02') && ((char)param_3[0x68] == '\x01')) &&
      ((char)param_3[0x67] == '\x01')) && (lVar12 = param_3[0x43], lVar12 != 0)) {
    FUN_14120e82c(param_1 + 0x378,lVar12 + 0x350,param_3 + 0x29);
  }
  puVar1 = local_2d0;
  if (*(char *)((longlong)param_3 + 0x3c4) == '\0') {
    if ((int)param_1[2] == 0) {
LAB_1403db226:
      lVar12 = 0;
    }
    else {
      uVar4 = *(uint *)((longlong)param_1 + 0xc);
      lVar12 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar13 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar13 == (longlong *)0x0) ||
           (((int)plVar13[2] != (int)param_1[2] || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
        goto LAB_1403db226;
        lVar12 = *plVar13;
      }
    }
    if (*(longlong *)(param_2 + 0x1c) == lVar12) {
      *(undefined8 *)((longlong)param_1 + 0xc) = 0;
    }
  }
  local_2d8 = (undefined8 *)(param_2 + 0x36);
  (**(code **)(*param_1 + 0x58))(param_1,param_3,local_2d0);
  param_2[0x8c] = (int)param_1[1];
  local_2e8 = 0;
  (**(code **)(*param_1 + 0x30))(param_1,&local_2c8,param_3,puVar1);
  plVar13 = local_280;
  param_2[0x90] = dStack_2c0._0_4_;
  *(undefined8 *)(param_2 + 0x8e) = local_2c8;
  *(undefined1 (*) [16])(param_2 + 0x9a) = local_298;
  *(double *)(param_2 + 0x96) = local_2a8;
  *(double *)(param_2 + 0x98) = dStack_2a0;
  *(undefined8 *)(param_2 + 0x92) = local_2b8;
  *(double *)(param_2 + 0x94) = dStack_2b0;
  auVar23 = local_298;
  if ((undefined8 *)(param_2 + 0x9e) != &local_288) {
    *(undefined8 *)(param_2 + 0x9e) = local_288;
    local_288 = 0;
    plVar5 = *(longlong **)(param_2 + 0xa0);
    if (local_280 != plVar5) {
      local_280 = (longlong *)0x0;
      *(longlong **)(param_2 + 0xa0) = plVar13;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar5 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          auVar23 = local_298;
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
            auVar23 = local_298;
          }
        }
      }
    }
  }
  plVar13 = local_280;
  puVar1 = local_2d8;
  param_2[0xa2] = local_278;
  if (local_280 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_280 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_280)(local_280);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  (**(code **)(*param_1 + 0x48))(param_1,&local_2c8,param_3,puVar1);
  memcpy(param_2 + 0x4a,&local_2c8,0x108);
  memcpy(param_1 + 0x332,param_2 + 0x4a,0x108);
  uVar9 = (**(code **)(*param_1 + 0x50))(param_1,param_3,param_2);
  *(undefined1 *)((longlong)param_2 + 0x291) = uVar9;
  uVar9 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_2);
  *(undefined1 *)(param_2 + 0xae) = uVar9;
  FUN_144aeb558(param_1,&local_2c8,param_3,param_2);
  if (dStack_2b0._0_1_ == '\x01') {
    *(undefined8 *)(param_2 + 0xaa) = local_2b8;
    *(undefined8 *)(param_2 + 0xa6) = local_2c8;
    *(double *)(param_2 + 0xa8) = dStack_2c0;
    uVar9 = 1;
LAB_1403daf4a:
    *(undefined1 *)(param_2 + 0xac) = uVar9;
  }
  else if (*(char *)(param_2 + 0xac) == '\x01') {
    uVar9 = 0;
    goto LAB_1403daf4a;
  }
  bVar17 = (char)param_1[0xd2] == '\x02';
  if (((bVar17) && ((char)param_1[0x39d] == '\0')) && (*(char *)((longlong)param_1 + 0x484) == '\0')
     ) {
    auVar23._0_8_ = (double)param_1[0x73] - (double)param_3[0x2a];
    auVar23._8_8_ = 0;
    dStack_2b0 = (double)param_1[0x72] - (double)param_3[0x29];
    dStack_2a0 = (double)param_1[0x74] -
                 ((double)param_3[0x2b] - (double)*(float *)((longlong)param_3 + 0x194));
    dStack_2c0 = (double)(float)((double)param_1[0x70] - (double)param_3[0x13]);
    local_2c8 = 0;
    local_2b8 = 0;
    local_2a8 = auVar23._0_8_;
    FUN_14382aa94(param_1);
  }
  *(bool *)(param_1 + 0x39d) = bVar17;
  if ((char)param_1[0x392] == '\0') {
    if (*(char *)(param_2 + 200) != '\0') {
      uVar9 = 0;
      goto LAB_1403daf82;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x392) = 0;
    uVar3 = param_1[0x391];
    auVar22._8_8_ = 0;
    auVar22._0_8_ = -(double)param_1[0x38d];
    auVar22 = divpd(auVar22 << 0x40,_DAT_1499387d0);
    auVar22 = roundpd(auVar22,auVar22,3);
    auVar23 = roundpd(auVar23,ZEXT816(0),3);
    dVar24 = (0.0 - auVar22._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar25 = (-(double)param_1[0x38d] - auVar22._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar21 = (0.0 - auVar23._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    _X = (0.0 - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    lVar12 = param_1[0x38f];
    uVar4 = *(uint *)((longlong)param_1 + 0x1c7c);
    lVar7 = param_1[0x390];
    uVar6 = *(uint *)((longlong)param_1 + 0x1c84);
    dVar18 = sin(dVar24);
    dVar19 = sin(dVar25);
    dVar20 = sin(dVar21);
    sin(_X);
    dVar24 = cos(dVar24);
    dVar25 = cos(dVar25);
    dVar21 = cos(dVar21);
    cos(_X);
    *(double *)(param_2 + 0xb0) = dVar18 * dVar19 * dVar21 - dVar24 * dVar25 * dVar20;
    *(double *)(param_2 + 0xb2) = -(dVar18 * dVar25 * dVar21) - dVar24 * dVar19 * dVar20;
    *(double *)(param_2 + 0xb4) = -(dVar25 * dVar18 * dVar20) + dVar19 * dVar24 * dVar21;
    *(double *)(param_2 + 0xb6) = dVar19 * dVar18 * dVar20 + dVar25 * dVar24 * dVar21;
    param_2[0xb8] = (int)lVar12;
    param_2[0xb9] = uVar4 ^ 0x80000000;
    param_2[0xba] = (int)lVar7;
    param_2[0xbb] = uVar6 ^ 0x80000000;
    *(ulonglong *)(param_2 + 0xbc) = uVar3 ^ 0x8000000000000000;
    *(undefined8 *)(param_2 + 0xbe) = 0;
    *(undefined8 *)(param_2 + 0xc0) = 0x3ff0000000000000;
    *(undefined8 *)(param_2 + 0xc2) = 0x3ff0000000000000;
    *(undefined8 *)(param_2 + 0xc4) = 0x3ff0000000000000;
    *(undefined8 *)(param_2 + 0xc6) = 0;
    uVar9 = 1;
LAB_1403daf82:
    *(undefined1 *)(param_2 + 200) = uVar9;
  }
  uVar10 = 0xffffffff;
  uVar11 = 0xffffffff;
  uVar14 = 0xffffffff;
  if ((char)param_1[0xd2] == '\x02') {
    uVar14 = (undefined4)param_1[0x8e];
    uVar11 = *(undefined4 *)((longlong)param_1 + 0x474);
    uVar10 = (undefined4)param_1[0x8f];
  }
  param_2[0xcc] = uVar14;
  param_2[0xcd] = uVar11;
  param_2[0xce] = uVar10;
  (**(code **)(*param_1 + 0x60))(param_1,param_3,param_2);
  if (param_1 + 0x32d != (longlong *)(param_2 + 0xd0)) {
    if ((char)param_1[0x330] == '\x01') {
      *(longlong *)(param_2 + 0xd4) = param_1[0x32f];
      lVar12 = param_1[0x32e];
      *(longlong *)(param_2 + 0xd0) = param_1[0x32d];
      *(longlong *)(param_2 + 0xd2) = lVar12;
      *(undefined1 *)(param_2 + 0xd6) = 1;
    }
    else if (*(char *)(param_2 + 0xd6) == '\x01') {
      *(undefined1 *)(param_2 + 0xd6) = 0;
    }
  }
LAB_1403db01d:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403db4d4 FUN_1403db4d4 body=5787 status=ok
// SIG undefined FUN_1403db4d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403db4d4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  undefined4 extraout_EAX;
  int iVar7;
  undefined4 unaff_R14D;
  int iVar8;
  bool bVar9;
  ulonglong uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar43;
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auStack_358 [32];
  double local_338;
  double dStack_330;
  float local_31c;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  double local_2b8;
  double local_2a8;
  double local_298;
  undefined8 uStack_290;
  double local_288;
  undefined8 uStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
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
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
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
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 uStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_358;
  if (*(char *)(param_1 + 0x804) == '\0') {
    FUN_1401040a0();
    if ((*(char *)(param_1 + 0x809) == '\0') && (*(char *)(param_1 + 0x808) != '\x01')) {
      if (*(char *)(*(longlong *)(param_1 + 0xcc8) + 0x690) == '\x02') {
        if (*(char *)(param_1 + 0x410) == '\x01') {
          *(undefined1 *)(param_1 + 0x410) = 0;
        }
      }
      else if (*(char *)(param_1 + 0x3d8) == '\x01') {
        if (*(char *)(param_1 + 0x459) == '\x01') {
          if (*(longlong *)(param_1 + 0x4b0) == 0) {
            bVar9 = true;
          }
          else {
            bVar6 = FUN_1449c239e(*(longlong *)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x9c0));
            bVar9 = bVar6 < 3;
          }
        }
        else {
          bVar9 = false;
        }
        if ((bool)*(char *)(param_1 + 0x3d4) == bVar9) {
          if (*(char *)(param_1 + 0x3d8) == '\x01') {
            *(undefined1 *)(param_1 + 0x3d8) = 0;
          }
          dVar47 = *(double *)(param_1 + 0x3a0);
          dVar11 = *(double *)(param_1 + 0x3a8);
          dVar13 = *(double *)(param_1 + 0x3b8);
          dVar14 = *(double *)(param_1 + 0x3c0);
          dVar12 = *(double *)(param_1 + 0x3c8);
          dVar15 = 0.0;
          local_31c = *(float *)(param_1 + 0x3d0);
          if ((*(char *)(param_1 + 0x410) == '\x01') && (*(char *)(param_1 + 0x418) == '\0')) {
            uStack_280 = 0;
            uStack_2f0 = 0;
            dStack_2e0 = 0.0;
            local_298 = *(double *)(param_1 + 0x3b0);
            uStack_290 = 0;
            *(undefined1 *)(param_1 + 0x418) = 1;
            auVar18 = _DAT_1499387d0;
            auVar33 = *(undefined1 (*) [16])(param_1 + 0x3e0);
            dVar15 = (double)DAT_1499387d0;
            dVar16 = DAT_1499387d0._8_8_;
            auVar17 = divpd(auVar33,_DAT_1499387d0);
            auVar25._8_8_ = 0;
            auVar25._0_8_ = *(double *)(param_1 + 0x3f0);
            auVar25 = divpd(auVar25,_DAT_1499387d0);
            auVar17 = roundpd(auVar17,auVar17,3);
            auVar25 = roundpd(auVar25,auVar25,3);
            dVar38 = (auVar33._0_8_ - auVar17._0_8_ * dVar15) * 0.008726646259971648;
            dVar39 = (auVar33._8_8_ - auVar17._8_8_ * dVar16) * 0.008726646259971648;
            dVar40 = (*(double *)(param_1 + 0x3f0) - auVar25._0_8_ * dVar15) * 0.008726646259971648;
            dVar43 = (0.0 - auVar25._8_8_ * dVar16) * 0.008726646259971648;
            local_308 = dVar13;
            dStack_300 = dVar14;
            local_2f8 = dVar11;
            local_2e8 = dVar12;
            local_288 = dVar47;
            dVar11 = sin(dVar38);
            dVar12 = sin(dVar39);
            dVar13 = sin(dVar40);
            sin(dVar43);
            dVar14 = cos(dVar38);
            dVar38 = cos(dVar39);
            dVar39 = cos(dVar40);
            cos(dVar43);
            dVar34 = dVar11 * dVar12 * dVar39 - dVar14 * dVar38 * dVar13;
            dVar37 = -(dVar11 * dVar38 * dVar39) - dVar14 * dVar12 * dVar13;
            local_338 = *(double *)(param_1 + 0x3f8);
            dStack_330 = *(double *)(param_1 + 0x400);
            local_2c8 = *(undefined8 *)(param_1 + 0xa28);
            uStack_2c0 = 0;
            auVar33 = *(undefined1 (*) [16])(param_1 + 0x970);
            auVar17 = divpd(auVar33,auVar18);
            auVar26._8_8_ = 0;
            auVar26._0_8_ = *(double *)(param_1 + 0x980);
            auVar25 = divpd(auVar26,auVar18);
            auVar18 = roundpd(auVar17,auVar17,3);
            auVar17 = roundpd(auVar25,auVar25,3);
            dVar40 = (auVar33._0_8_ - auVar18._0_8_ * dVar15) * 0.008726646259971648;
            dVar43 = (auVar33._8_8_ - auVar18._8_8_ * dVar16) * 0.008726646259971648;
            dVar45 = (*(double *)(param_1 + 0x980) - auVar17._0_8_ * dVar15) * 0.008726646259971648;
            dVar46 = (0.0 - auVar17._8_8_ * dVar16) * 0.008726646259971648;
            local_2d8 = *(double *)(param_1 + 0xa28);
            dStack_2d0 = *(double *)(param_1 + 0xa30);
            local_318 = *(double *)(param_1 + 0xa38);
            dStack_310 = 0.0;
            dVar48 = *(double *)(param_1 + 0x408) * 1.0;
            dVar47 = *(double *)(param_1 + 0x3f8);
            local_2a8 = sin(dVar40);
            dVar15 = sin(dVar43);
            local_2b8 = sin(dVar45);
            sin(dVar46);
            dVar16 = cos(dVar40);
            dVar40 = cos(dVar43);
            dVar43 = cos(dVar45);
            cos(dVar46);
            dVar46 = -(dVar40 * local_2a8 * local_2b8) + dVar15 * dVar16 * dVar43;
            dVar44 = dVar15 * local_2a8 * local_2b8 + dVar40 * dVar16 * dVar43;
            dVar45 = local_2a8 * dVar15 * dVar43 - dVar16 * dVar40 * local_2b8;
            dVar15 = -(local_2a8 * dVar40 * dVar43) - dVar16 * dVar15 * local_2b8;
            dVar16 = -dVar34;
            dVar40 = -dVar37;
            dVar43 = (-(dVar38 * dVar11 * dVar13) + dVar12 * dVar14 * dVar39) * -1.0;
            dVar13 = (dVar12 * dVar11 * dVar13 + dVar38 * dVar14 * dVar39) * 1.0;
            dVar11 = dStack_330 * dVar16 - local_338 * dVar40;
            dVar12 = dVar48 * dVar40 - dStack_330 * dVar43;
            dVar47 = dVar47 * dVar43 - dVar48 * dVar16;
            dVar12 = dVar12 + dVar12;
            dVar47 = dVar47 + dVar47;
            dVar11 = dVar11 + dVar11;
            dVar14 = 0.0 - ((dVar11 * dVar40 - dVar47 * dVar43) + dVar13 * dVar12 + local_338);
            dVar38 = 0.0 - (dVar11 * dVar34 + dVar43 * dVar12 + dVar13 * dVar47 + dStack_330);
            dVar47 = 0.0 - (dVar13 * dVar11 + dVar48 + (dVar47 * dVar16 - dVar12 * dVar40));
            auVar33 = minpd(_DAT_149934d80,_DAT_149934d80);
            auVar17 = minpd(ZEXT816(0x3ff0000000000000),ZEXT816(0x3ff0000000000000));
            auVar18._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
            auVar18._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
            iVar7 = movmskpd(extraout_EAX,auVar18);
            auVar33._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
            auVar33._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
            iVar8 = movmskpd(unaff_R14D,auVar33);
            if (iVar8 << 2 == 0 && iVar7 == 0) {
              dVar37 = dVar15 * dVar43 * -1.0 +
                       dVar46 * dVar40 + dVar16 * dVar44 * 1.0 + dVar13 * dVar45;
              dVar34 = dVar45 * dVar43 * 1.0 +
                       dVar44 * dVar40 + dVar16 * dVar46 * -1.0 + dVar13 * dVar15;
              auVar49._0_8_ =
                   dVar44 * dVar43 * 1.0 +
                   ((dVar16 * dVar15 * 1.0 + dVar13 * dVar46) - dVar40 * dVar45);
              auVar49._8_8_ =
                   dVar46 * dVar43 * -1.0 +
                   ((dVar16 * dVar45 * -1.0 + dVar13 * dVar44) - dVar40 * dVar15);
              auVar41._0_8_ = local_318 * 1.0;
              auVar41._8_8_ = dStack_310 * 0.0;
              auVar17._8_8_ = uStack_2c0;
              auVar17._0_8_ = local_2c8;
              auVar33 = blendpd(auVar17,auVar41,2);
              dVar11 = dStack_2d0 * dVar16 - local_2d8 * dVar40;
              dVar12 = auVar41._0_8_ * dVar40 - dStack_2d0 * dVar43;
              dVar15 = auVar33._0_8_ * dVar43 - dVar16 * auVar41._0_8_;
              dVar39 = auVar33._8_8_ * dVar13 - dVar13 * auVar41._8_8_;
              dVar12 = dVar12 + dVar12;
              dVar15 = dVar15 + dVar15;
              dVar11 = dVar11 + dVar11;
              dVar39 = dVar39 + dVar39;
              local_318 = dVar14 + (dVar11 * dVar40 - dVar43 * dVar15) + dVar13 * dVar12 + local_2d8
              ;
              dStack_310 = dVar38 + (dVar12 * dVar43 - dVar11 * dVar16) +
                                    dVar13 * dVar15 + dStack_2d0;
              local_338 = dVar47 + (dVar15 * dVar16 - dVar40 * dVar12) +
                                   dVar13 * dVar11 + auVar41._0_8_;
              dStack_330 = (dVar39 * dVar13 - dVar39 * dVar13) + dVar13 * dVar39 + auVar41._8_8_ +
                           0.0;
            }
            else {
              dVar37 = dVar40 - dVar37;
              dVar12 = dVar43 + dVar43;
              dVar11 = (dVar16 - dVar34) * dVar16;
              local_1d8 = (double)DAT_149934d80 - (dVar43 * dVar12 + dVar37 * dVar40);
              dStack_1b0 = DAT_149934d80._8_8_ - (dVar43 * dVar12 + dVar11);
              local_188 = 1.0 - (dVar11 + dVar37 * dVar40);
              dStack_190 = (dVar16 - dVar34) * dVar13;
              dStack_1d0 = dVar37 * dVar16 + dVar12 * dVar13;
              local_1a8 = dVar12 * dVar40 + dStack_190;
              local_1b8 = dVar37 * dVar16 - dVar12 * dVar13;
              dStack_190 = dVar12 * dVar40 - dStack_190;
              local_198 = dVar37 * dVar13 + dVar16 * dVar12;
              local_1c8 = dVar16 * dVar12 - dVar37 * dVar13;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              uStack_180 = 0;
              uStack_160 = 0x3ff0000000000000;
              dVar11 = dVar15 + dVar15;
              dVar13 = dVar46 + dVar46;
              dVar12 = dVar45 * (dVar45 + dVar45);
              local_258 = (double)DAT_149934d80 - (dVar46 * dVar13 + dVar15 * dVar11);
              dStack_230 = DAT_149934d80._8_8_ - (dVar46 * dVar13 + dVar12);
              local_208 = 1.0 - (dVar12 + dVar15 * dVar11);
              dStack_210 = (dVar45 + dVar45) * dVar44;
              dStack_250 = dVar11 * dVar45 + dVar13 * dVar44;
              local_228 = dVar13 * dVar15 + dStack_210;
              local_238 = dVar11 * dVar45 - dVar13 * dVar44;
              dStack_210 = dVar13 * dVar15 - dStack_210;
              local_218 = dVar11 * dVar44 + dVar45 * dVar13;
              local_248 = dVar45 * dVar13 - dVar11 * dVar44;
              uStack_240 = 0;
              uStack_220 = 0;
              uStack_200 = 0;
              local_1f8 = local_2d8;
              dStack_1f0 = dStack_2d0;
              local_1e8 = local_318;
              uStack_1e0 = 0x3ff0000000000000;
              local_178 = dVar14;
              dStack_170 = dVar38;
              local_168 = dVar47;
              FUN_1447fea8d(&local_158);
              local_338 = (double)local_148._0_8_;
              dVar47 = (double)local_148._0_8_ * (double)local_148._0_8_ +
                       local_158 * local_158 + dStack_150 * dStack_150;
              dVar11 = local_128 * local_128 + local_138 * local_138 + dStack_130 * dStack_130;
              dVar12 = local_108 * local_108 + local_118 * local_118 + dStack_110 * dStack_110;
              uVar10 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
              dVar47 = (double)(~uVar10 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar47)) & uVar10);
              uVar10 = -(ulonglong)(0.0 <= dVar11 + -9.99999993922529e-09);
              dVar11 = (double)(~uVar10 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar11)) & uVar10);
              uVar10 = -(ulonglong)(0.0 <= dVar12 + -9.99999993922529e-09);
              dVar12 = (double)(~uVar10 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar12)) & uVar10);
              local_158 = local_158 * dVar47;
              dStack_150 = dStack_150 * dVar47;
              local_148._0_8_ = dVar47 * (double)local_148._0_8_;
              local_138 = local_138 * dVar11;
              dStack_130 = dStack_130 * dVar11;
              local_128 = dVar11 * local_128;
              local_118 = local_118 * dVar12;
              dStack_110 = dStack_110 * dVar12;
              local_108 = dVar12 * local_108;
              FUN_14481fd10(&local_278,&local_158);
              dVar47 = local_268 * local_268 + local_278 * local_278;
              dVar11 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
              auVar28._0_8_ = dVar47 + dVar11;
              auVar28._8_8_ = dVar47 + dVar11;
              auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
              auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
              auVar33 = sqrtpd(auVar28,auVar28);
              auVar33 = divpd(_DAT_149934d80,auVar33);
              auVar30._0_8_ = auVar33._0_8_ * local_268;
              auVar30._8_8_ = auVar33._8_8_ * dStack_260;
              dVar37 = (double)((ulonglong)(local_278 * auVar33._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
              dVar34 = (double)((ulonglong)(dStack_270 * auVar33._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
              auVar49 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar30,auVar19);
              local_318 = local_f8;
              dStack_310 = dStack_f0;
              dStack_330 = 0.0;
              local_338 = local_e8;
            }
            auVar20._8_8_ = local_2f8;
            auVar20._0_8_ = local_288;
            auVar33 = divpd(auVar20,_DAT_1499387d0);
            auVar27._8_8_ = 0;
            auVar27._0_8_ = local_298;
            auVar18 = divpd(auVar27,_DAT_1499387d0);
            auVar33 = roundpd(auVar33,auVar33,3);
            auVar18 = roundpd(auVar18,auVar18,3);
            dVar13 = (local_288 - auVar33._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar14 = (local_2f8 - auVar33._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar15 = (local_298 - auVar18._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
            dVar16 = (0.0 - auVar18._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
            dVar47 = sin(dVar13);
            dVar11 = sin(dVar14);
            dVar12 = sin(dVar15);
            sin(dVar16);
            dVar13 = cos(dVar13);
            dVar14 = cos(dVar14);
            dVar15 = cos(dVar15);
            cos(dVar16);
            auVar33 = _DAT_149934d80;
            dVar38 = -(dVar14 * dVar47 * dVar12) + dVar11 * dVar13 * dVar15;
            dVar39 = dVar11 * dVar47 * dVar12 + dVar14 * dVar13 * dVar15;
            dVar16 = dVar47 * dVar11 * dVar15 - dVar13 * dVar14 * dVar12;
            dVar47 = -(dVar47 * dVar14 * dVar15) - dVar13 * dVar11 * dVar12;
            dVar11 = auVar49._0_8_;
            dVar12 = auVar49._8_8_;
            if (iVar8 << 2 == 0 && iVar7 == 0) {
              local_158 = dVar34 * dVar38 * -1.0 +
                          dVar11 * dVar47 + dVar12 * dVar16 * 1.0 + dVar37 * dVar39;
              dStack_150 = dVar37 * dVar38 * 1.0 +
                           dVar12 * dVar47 + dVar11 * dVar16 * -1.0 + dVar34 * dVar39;
              local_148._0_8_ =
                   dVar12 * dVar38 * 1.0 +
                   ((dVar16 * dVar34 * 1.0 + dVar11 * dVar39) - dVar47 * dVar37);
              local_148._8_8_ =
                   dVar11 * dVar38 * -1.0 +
                   ((dVar16 * dVar37 * -1.0 + dVar12 * dVar39) - dVar47 * dVar34);
              dVar43 = local_338 * 1.0;
              dVar45 = dStack_330 * 0.0;
              dVar11 = dStack_310 * dVar16 - local_318 * dVar47;
              dVar12 = dVar43 * dVar47 - dStack_310 * dVar38;
              dVar15 = local_318 * dVar38 - dVar43 * dVar16;
              dVar40 = dVar45 * dVar39 - dVar45 * dVar39;
              dVar12 = dVar12 + dVar12;
              dVar15 = dVar15 + dVar15;
              dVar11 = dVar11 + dVar11;
              dVar40 = dVar40 + dVar40;
              dVar13 = local_308 + (dVar11 * dVar47 - dVar38 * dVar15) + dVar39 * dVar12 + local_318
              ;
              dVar14 = dStack_300 +
                       (dVar12 * dVar38 - dVar11 * dVar16) + dVar39 * dVar15 + dStack_310;
              dVar12 = local_2e8 + (dVar15 * dVar16 - dVar47 * dVar12) + dVar39 * dVar11 + dVar43;
              dVar15 = (dVar40 * dVar39 - dVar40 * dVar39) + dVar39 * dVar40 + dVar45 + 0.0;
            }
            else {
              dVar13 = dVar47 + dVar47;
              dVar14 = dVar38 + dVar38;
              dVar15 = dVar16 * (dVar16 + dVar16);
              local_1d8 = (double)DAT_149934d80 - (dVar38 * dVar14 + dVar47 * dVar13);
              dStack_1b0 = DAT_149934d80._8_8_ - (dVar38 * dVar14 + dVar15);
              local_188 = 1.0 - (dVar15 + dVar47 * dVar13);
              dStack_190 = (dVar16 + dVar16) * dVar39;
              dStack_1d0 = dVar13 * dVar16 + dVar14 * dVar39;
              local_1a8 = dVar14 * dVar47 + dStack_190;
              local_198 = dVar13 * dVar39 + dVar16 * dVar14;
              local_1b8 = dVar13 * dVar16 - dVar14 * dVar39;
              dStack_190 = dVar14 * dVar47 - dStack_190;
              local_1c8 = dVar16 * dVar14 - dVar13 * dVar39;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              uStack_180 = 0;
              local_178 = local_308;
              dStack_170 = dStack_300;
              local_168 = local_2e8;
              uStack_160 = 0x3ff0000000000000;
              dVar47 = dVar34 + dVar34;
              dVar13 = dVar11 + dVar11;
              dVar14 = dVar37 * (dVar37 + dVar37);
              local_258 = (double)DAT_149934d80 - (dVar11 * dVar13 + dVar34 * dVar47);
              dStack_230 = DAT_149934d80._8_8_ - (dVar11 * dVar13 + dVar14);
              local_208 = 1.0 - (dVar14 + dVar34 * dVar47);
              dStack_210 = (dVar37 + dVar37) * dVar12;
              dStack_250 = dVar47 * dVar37 + dVar13 * dVar12;
              local_228 = dVar13 * dVar34 + dStack_210;
              local_218 = dVar47 * dVar12 + dVar37 * dVar13;
              local_238 = dVar47 * dVar37 - dVar13 * dVar12;
              dStack_210 = dVar13 * dVar34 - dStack_210;
              local_248 = dVar37 * dVar13 - dVar47 * dVar12;
              uStack_240 = 0;
              uStack_220 = 0;
              uStack_200 = 0;
              local_1f8 = local_318;
              dStack_1f0 = dStack_310;
              local_1e8 = local_338;
              uStack_1e0 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_158);
              local_308 = (double)local_148._0_8_;
              dVar47 = (double)local_148._0_8_ * (double)local_148._0_8_ +
                       local_158 * local_158 + dStack_150 * dStack_150;
              dVar11 = local_128 * local_128 + local_138 * local_138 + dStack_130 * dStack_130;
              dVar12 = local_108 * local_108 + local_118 * local_118 + dStack_110 * dStack_110;
              uVar10 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
              dVar47 = (double)(~uVar10 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar47)) & uVar10);
              uVar10 = -(ulonglong)(0.0 <= dVar11 + -9.99999993922529e-09);
              dVar11 = (double)(~uVar10 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar11)) & uVar10);
              uVar10 = -(ulonglong)(0.0 <= dVar12 + -9.99999993922529e-09);
              dVar12 = (double)(~uVar10 & 0x3ff0000000000000 |
                               (ulonglong)(1.0 / SQRT(dVar12)) & uVar10);
              local_158 = local_158 * dVar47;
              dStack_150 = dStack_150 * dVar47;
              local_148._0_8_ = dVar47 * (double)local_148._0_8_;
              local_138 = local_138 * dVar11;
              dStack_130 = dStack_130 * dVar11;
              local_128 = dVar11 * local_128;
              local_118 = local_118 * dVar12;
              dStack_110 = dStack_110 * dVar12;
              local_108 = dVar12 * local_108;
              FUN_14481fd10(&local_278,&local_158);
              dVar47 = local_268 * local_268 + local_278 * local_278;
              dVar11 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
              auVar31._0_8_ = dVar47 + dVar11;
              auVar31._8_8_ = dVar47 + dVar11;
              auVar21._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_);
              auVar21._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_);
              auVar18 = sqrtpd(auVar31,auVar31);
              auVar33 = divpd(auVar33,auVar18);
              auVar42._0_8_ = auVar33._0_8_ * local_268;
              auVar42._8_8_ = auVar33._8_8_ * dStack_260;
              local_158 = (double)((ulonglong)(local_278 * auVar33._0_8_) &
                                  -(ulonglong)(9.99999993922529e-09 <= auVar31._0_8_));
              dStack_150 = (double)((ulonglong)(dStack_270 * auVar33._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar31._8_8_));
              local_148 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar42,auVar21);
              dVar15 = 0.0;
              dVar12 = local_e8;
              dVar13 = local_f8;
              dVar14 = dStack_f0;
            }
            FUN_1448052ee(&local_158,&local_1d8);
            dVar47 = local_1d8;
            dVar11 = dStack_1d0;
          }
          iVar7 = (**(code **)(**(longlong **)(param_1 + 0xcc8) + 0x18))();
          local_338 = 0.0;
          if (iVar7 != 1) {
            local_338 = dVar47;
          }
          dVar47 = *(double *)(param_1 + 0xa38);
          dVar16 = *(double *)(param_1 + 0xa30);
          dVar38 = *(double *)(param_1 + 0xa28);
          dVar43 = dVar11 - *(double *)(param_1 + 0x978);
          dVar45 = local_338 - *(double *)(param_1 + 0x970);
          dVar39 = (double)DAT_1499387d0;
          dVar40 = DAT_1499387d0._8_8_;
          auVar22._8_8_ = dVar43;
          auVar22._0_8_ = dVar45;
          auVar33 = divpd(auVar22,_DAT_1499387d0);
          auVar33 = roundpd(auVar33,auVar33,3);
          auVar32._0_8_ = dVar45 - auVar33._0_8_ * dVar39;
          auVar32._8_8_ = dVar43 - auVar33._8_8_ * dVar40;
          auVar35._0_8_ = auVar32._0_8_ + dVar39;
          auVar35._8_8_ = auVar32._8_8_ + dVar40;
          auVar23._8_8_ = -(ulonglong)(0.0 <= auVar32._8_8_);
          auVar23._0_8_ = -(ulonglong)(0.0 <= auVar32._0_8_);
          auVar33 = blendvpd(auVar35,auVar32,auVar23);
          auVar29._0_8_ = auVar33._0_8_ + 0.0;
          auVar29._8_8_ = auVar33._8_8_ + -360.0;
          auVar24._8_8_ = -(ulonglong)(180.0 < auVar33._8_8_);
          auVar24._0_8_ = -(ulonglong)(180.0 < auVar33._0_8_);
          auVar33 = blendvpd(auVar33,auVar29,auVar24);
          uStack_2f0 = 0;
          auVar36._0_8_ = auVar33._0_8_ ^ 0x8000000000000000;
          auVar36._8_8_ = auVar33._8_8_ ^ 0x8000000000000000;
          auVar17 = blendpd(auVar36,ZEXT816(0),1);
          auVar33 = divpd(auVar17,_DAT_1499387d0);
          auVar33 = roundpd(auVar33,auVar33,3);
          auVar18 = roundpd(auVar29,ZEXT816(0),3);
          dVar43 = (auVar17._0_8_ - auVar33._0_8_ * dVar39) * 0.008726646259971648;
          dVar45 = (auVar17._8_8_ - auVar33._8_8_ * dVar40) * 0.008726646259971648;
          dVar37 = (0.0 - auVar18._0_8_ * dVar39) * 0.008726646259971648;
          dVar34 = (0.0 - auVar18._8_8_ * dVar40) * 0.008726646259971648;
          local_308 = dVar13;
          dStack_300 = dVar14;
          local_2f8 = dVar11;
          dVar11 = sin(dVar43);
          dVar39 = sin(dVar45);
          dVar40 = sin(dVar37);
          local_2e8 = dVar12;
          dStack_2e0 = dVar15;
          sin(dVar34);
          dVar15 = cos(dVar43);
          dVar43 = cos(dVar45);
          dVar45 = cos(dVar37);
          cos(dVar34);
          local_158 = dVar11 * dVar39 * dVar45 - dVar15 * dVar43 * dVar40;
          dStack_150 = -(dVar11 * dVar43 * dVar45) - dVar15 * dVar39 * dVar40;
          local_148._8_8_ = dVar39 * dVar11 * dVar40 + dVar43 * dVar15 * dVar45;
          local_148._0_8_ = -(dVar43 * dVar11 * dVar40) + dVar39 * dVar15 * dVar45;
          local_138 = -(dVar13 - dVar38);
          dStack_130 = -(dVar14 - dVar16);
          uStack_120 = 0;
          local_118 = 1.0;
          dStack_110 = 1.0;
          local_108 = 1.0;
          uStack_100 = 0;
          local_128 = -(dVar12 - dVar47);
          FUN_14380028d(param_1 + 0xc10);
          *(double *)(param_1 + 0x970) = local_338;
          *(double *)(param_1 + 0x978) = local_2f8;
          *(undefined8 *)(param_1 + 0x980) = 0;
          *(double *)(param_1 + 0xa28) = local_308;
          *(double *)(param_1 + 0xa30) = dStack_300;
          *(double *)(param_1 + 0xa38) = local_2e8;
          uVar5 = DAT_14cb1c868;
          *(undefined8 *)(param_1 + 0xa40) = DAT_14cb1c860;
          *(undefined8 *)(param_1 + 0xa48) = uVar5;
          *(undefined8 *)(param_1 + 0xa50) = DAT_14cb1c870;
          *(undefined8 *)(param_1 + 0xa58) = 0;
          plVar3 = *(longlong **)(param_1 + 0xa60);
          if (plVar3 != (longlong *)0x0) {
            *(undefined8 *)(param_1 + 0xa60) = 0;
            LOCK();
            plVar1 = plVar3 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar3)();
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))();
              }
            }
          }
          *(undefined4 *)(param_1 + 0xa68) = 0xffffffff;
          if (bVar9 != false) {
            *(float *)(param_1 + 0x9a0) = local_31c;
            lVar4 = *(longlong *)(param_1 + 0xcc8);
            if ((1.0 <= ABS(local_31c - *(float *)(lVar4 + 0x11f0))) ||
               (0.01 < ABS(*(float *)(lVar4 + 0x11f8)))) {
              *(undefined4 *)(lVar4 + 0x11ec) = 0;
              *(undefined4 *)(lVar4 + 0x11f4) = *(undefined4 *)(lVar4 + 0x11e8);
              *(float *)(lVar4 + 0x11f0) = local_31c;
              *(undefined4 *)(lVar4 + 0x11f8) = 0;
            }
          }
        }
      }
    }
    else if (*(char *)(param_1 + 0x3d8) == '\x01') {
      *(undefined1 *)(param_1 + 0x3d8) = 0;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403dcb70 FUN_1403dcb70 body=116 status=ok
// SIG undefined FUN_1403dcb70(void)

void FUN_1403dcb70(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x80) != 0) {
      plVar2 = (longlong *)(lVar1 + 0xa0);
      if (*(longlong **)(lVar1 + 0x90) != (longlong *)0x0) {
        plVar2 = *(longlong **)(lVar1 + 0x90);
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      FUN_1400020a8();
    }
    FUN_1403dcbe4(*(undefined8 *)(lVar1 + 0x38),*(undefined4 *)(lVar1 + 0x40));
    if (*(longlong *)(lVar1 + 0x38) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1403dcbe4 FUN_1403dcbe4 body=45 status=ok
// SIG undefined FUN_1403dcbe4(void)

void FUN_1403dcbe4(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1403dcc12 FUN_1403dcc12 body=361 status=ok
// SIG undefined FUN_1403dcc12(void)

undefined8 FUN_1403dcc12(longlong *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  LARGE_INTEGER LVar7;
  undefined1 auStack_58 [40];
  LARGE_INTEGER local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_1;
  lVar6 = *(longlong *)(lVar3 + 0xe0);
  lVar4 = (longlong)(int)(~*(uint *)(lVar3 + 0x104) & *param_2) * 0x30;
  piVar1 = (int *)(lVar6 + 0x18 + lVar4);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    LVar7.QuadPart = lVar6 + lVar4;
    if ((DAT_14c75f604 != 0) &&
       (param_1[1] <
        (longlong)((*(ulonglong *)LVar7 & 0xffffffffffff) + *(ulonglong *)(LVar7.QuadPart + 8)))) {
      lVar6 = (longlong)
              *(int *)(*(longlong *)
                        (*(longlong *)(lVar3 + 0xa8) + 8 + (*(ulonglong *)LVar7 >> 0x30) * 0x98) +
                      0x254);
      if (((char)param_1[2] != '\x01') || (DAT_14c9a0088 == 0)) {
        QueryPerformanceCounter(&local_30);
        *(double *)(LVar7.QuadPart + 0x28) = (double)local_30.QuadPart * DAT_14c83f420 + 16777216.0;
        lVar6 = lVar6 * 0x10;
        local_30.QuadPart = LVar7.QuadPart;
        FUN_144983064(*(longlong *)(lVar3 + 0x158) + lVar6,&local_30);
        lVar3 = *(longlong *)(lVar3 + 0x158);
        iVar2 = *(int *)(lVar3 + 8 + lVar6);
        *(uint *)(lVar3 + 8 + lVar6) = iVar2 + 1U;
        if (*(uint *)(lVar3 + 0xc + lVar6) < iVar2 + 1U) {
          FUN_14479d316((longlong *)(lVar3 + lVar6),iVar2);
        }
        *(ulonglong *)(*(longlong *)(lVar3 + lVar6) + (longlong)iVar2 * 8) = *(ulonglong *)LVar7;
        goto LAB_1403dcd1b;
      }
      *(ulonglong *)(LVar7.QuadPart + 0x28) = 0;
      local_30.QuadPart = LVar7.QuadPart;
      FUN_144983064(lVar6 * 0x10 + *(longlong *)(lVar3 + 0x158));
    }
    FUN_1403dcd7c(lVar3,LVar7.QuadPart);
    uVar5 = 1;
  }
  else {
LAB_1403dcd1b:
    uVar5 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403dcd7c FUN_1403dcd7c body=331 status=ok
// SIG undefined FUN_1403dcd7c(void)

void FUN_1403dcd7c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  
  if (*(longlong *)(param_2 + 0x10) != 0) {
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) - *(longlong *)(param_2 + 8);
    FUN_1400020a8(*(undefined8 *)(param_2 + 0x10));
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  uVar4 = *(uint *)(param_1 + 0x104);
  uVar5 = *(uint *)(param_2 + 0x1c);
  lVar1 = param_1 + 0xf0;
  iVar6 = *(int *)(param_1 + 0xf8);
  *(uint *)(param_1 + 0xf8) = iVar6 + 1U;
  if (*(uint *)(param_1 + 0xfc) < iVar6 + 1U) {
    FUN_1446f48e2(lVar1,iVar6);
  }
  *(uint *)(*(longlong *)(param_1 + 0xf0) + (longlong)iVar6 * 4) = ~uVar4 & uVar5;
  if (*(int *)(param_1 + 0xf8) + 1 != *(int *)(param_1 + 0xe8)) {
    return;
  }
  plVar2 = (longlong *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xe8) = 0;
  if (*(int *)(param_1 + 0xec) != 0) {
    FUN_14629f624(plVar2);
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_14481578e(lVar1,0);
    iVar6 = *(int *)(param_1 + 0xf8);
    if ((longlong)iVar6 != 0) {
      iVar8 = *(int *)(*(longlong *)(param_1 + 0xf0) + -4 + (longlong)iVar6 * 4);
      *(int *)(param_1 + 0xf8) = iVar6 + -1;
      FUN_14479f406(lVar1);
      goto LAB_1403dce83;
    }
  }
  iVar8 = *(int *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe8) = iVar8 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar8 + 1U) {
    FUN_14571f004(plVar2,iVar8);
  }
LAB_1403dce83:
  lVar1 = *plVar2;
  lVar7 = (longlong)iVar8 * 0x30;
  puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar7);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3 = (undefined8 *)(lVar1 + 0x10 + lVar7);
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined8 *)(lVar1 + lVar7) = 0;
  ((undefined8 *)(lVar1 + lVar7))[1] = 0;
  return;
}



// FUNCTION 1403dcec8 FUN_1403dcec8 body=22 status=ok
// SIG undefined FUN_1403dcec8(void)

undefined8 FUN_1403dcec8(undefined8 param_1)

{
  FUN_1403dcede();
  return param_1;
}



// FUNCTION 1403dcede FUN_1403dcede body=494 status=ok
// SIG undefined FUN_1403dcede(void)

void FUN_1403dcede(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar4 = (longlong)(int)param_1[1] * 0xf0;
    lVar3 = *param_1 + 0x70;
    do {
      if ((char)param_1[5] == '\x01') {
        *(longlong *)(lVar3 + -0x60) = param_1[2];
        lVar2 = param_1[3];
        if (DAT_14c950c29 == 1) {
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar2 = param_1[3];
          }
        }
        *(longlong *)(lVar3 + -0x58) = lVar2;
        *(int *)(lVar3 + -0x50) = (int)param_1[4];
      }
      if (*(char *)((longlong)param_1 + 0x34) == '\x01') {
        *(undefined8 *)(lVar3 + -0x48) = *(undefined8 *)((longlong)param_1 + 0x2c);
      }
      if ((char)param_1[0xb] == '\x01') {
        *(undefined1 *)(lVar3 + -0x3c) = *(undefined1 *)((longlong)param_1 + 0x3c);
        *(int *)(lVar3 + -0x40) = (int)param_1[7];
        lVar2 = param_1[8];
        if (DAT_14c950c29 == 1) {
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar2 = param_1[8];
          }
        }
        bVar1 = DAT_14c950c29;
        *(longlong *)(lVar3 + -0x38) = lVar2;
        lVar2 = param_1[9];
        if ((bVar1 & 1) != 0) {
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar2 = param_1[9];
          }
        }
        *(longlong *)(lVar3 + -0x30) = lVar2;
        *(char *)(lVar3 + -0x28) = (char)param_1[10];
      }
      if ((char)param_1[0x10] == '\x01') {
        *(undefined1 *)(lVar3 + -0x1c) = *(undefined1 *)((longlong)param_1 + 100);
        *(int *)(lVar3 + -0x20) = (int)param_1[0xc];
        lVar2 = param_1[0xd];
        if (DAT_14c950c29 == 1) {
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar2 = param_1[0xd];
          }
        }
        bVar1 = DAT_14c950c29;
        *(longlong *)(lVar3 + -0x18) = lVar2;
        lVar2 = param_1[0xe];
        if ((bVar1 & 1) != 0) {
          if (lVar2 == 0) {
            lVar2 = 0;
          }
          else {
            FUN_1456cec3c();
            lVar2 = param_1[0xe];
          }
        }
        *(longlong *)(lVar3 + -0x10) = lVar2;
        *(char *)(lVar3 + -8) = (char)param_1[0xf];
      }
      if ((char)param_1[0x18] == '\x01') {
        FUN_144983130(lVar3,param_1 + 0x11);
      }
      if ((char)param_1[0x20] == '\x01') {
        FUN_144983130(lVar3 + 0x38,param_1 + 0x19);
      }
      if (*(char *)((longlong)param_1 + 0x102) == '\x01') {
        *(undefined1 *)(lVar3 + 0x70) = *(undefined1 *)((longlong)param_1 + 0x101);
      }
      lVar3 = lVar3 + 0xf0;
      lVar4 = lVar4 + -0xf0;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1403dd0cc FUN_1403dd0cc body=226 status=ok
// SIG undefined FUN_1403dd0cc(void)

void FUN_1403dd0cc(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x230);
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
  FUN_1403dd1ae(param_1,param_2);
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



// FUNCTION 1403dd1ae FUN_1403dd1ae body=527 status=ok
// SIG undefined FUN_1403dd1ae(void)

void FUN_1403dd1ae(longlong param_1,ulonglong *param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_b8 [8];
  undefined1 *local_b0;
  int local_a8;
  undefined1 local_a0 [64];
  undefined1 *local_60;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,local_b8);
  puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar6 + 0x11;
  if ((undefined8 *)param_2[1] < puVar2) {
    FUN_140023dd8(param_2,0x90);
    puVar6 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar6 + 0x11;
  }
  *param_2 = (ulonglong)puVar2;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar6;
  param_2[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_FUN_14a1fb978;
  puVar6[3] = 0;
  *(int *)(puVar6 + 4) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x24) = 8;
  }
  else {
    puVar5 = local_b8;
    if (local_b0 != (undefined1 *)0x0) {
      puVar5 = local_b0;
    }
    FUN_1446fe144(puVar6 + 2,local_a8,0);
    puVar2 = (undefined8 *)puVar6[3];
    if ((undefined8 *)puVar6[3] == (undefined8 *)0x0) {
      puVar2 = puVar6 + 2;
    }
    memcpy(puVar2,puVar5,(longlong)local_a8);
  }
  puVar6[0xd] = 0;
  *(int *)(puVar6 + 0xe) = local_58;
  if ((longlong)local_58 == 0) {
    *(undefined4 *)((longlong)puVar6 + 0x74) = 8;
  }
  else {
    puVar5 = local_60;
    if (local_60 == (undefined1 *)0x0) {
      puVar5 = local_a0;
    }
    FUN_1446fe1b8(puVar6 + 5,local_58,0);
    puVar2 = (undefined8 *)puVar6[0xd];
    if ((undefined8 *)puVar6[0xd] == (undefined8 *)0x0) {
      puVar2 = puVar6 + 5;
    }
    memcpy(puVar2,puVar5,(longlong)local_58 << 3);
  }
  *(undefined4 *)(puVar6 + 0xf) = local_50;
  *(undefined4 *)((longlong)puVar6 + 0x7c) = uStack_4c;
  *(undefined4 *)(puVar6 + 0x10) = uStack_48;
  *(undefined4 *)((longlong)puVar6 + 0x84) = uStack_44;
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8(local_60);
  }
  if (local_b0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  pcVar1 = *(code **)(param_1 + 0x1f0);
  if (pcVar1 != (code *)0x0) {
    plVar4 = (longlong *)(param_1 + 0x210);
    if (*(longlong **)(param_1 + 0x200) != (longlong *)0x0) {
      plVar4 = *(longlong **)(param_1 + 0x200);
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar3);
  }
  local_c8 = *(undefined4 *)(param_1 + 0x1e0);
  FUN_144a9c10c(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1c0),
                *(undefined8 *)(*(longlong *)(param_1 + 0x1d8) + 0x10));
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403dd3be FUN_1403dd3be body=40 status=ok
// SIG undefined FUN_1403dd3be(void)

undefined8 FUN_1403dd3be(undefined8 param_1,int param_2)

{
  FUN_1403dd3e6();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403dd3e6 FUN_1403dd3e6 body=291 status=ok
// SIG undefined FUN_1403dd3e6(void)

void FUN_1403dd3e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e70a50;
  *(undefined4 *)(param_1 + 0x49) = 0;
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  FUN_1403dd50a(param_1 + 0x40);
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (1 < (ulonglong)param_1[0x3d]) {
    FUN_14000ebb3();
  }
  param_1[0x3d] = 0;
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  FUN_1403dd542(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_1403dd57a(param_1 + 0x25);
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_1400deb62(param_1);
  return;
}



// FUNCTION 1403dd50a FUN_1403dd50a body=55 status=ok
// SIG undefined FUN_1403dd50a(void)

void FUN_1403dd50a(longlong *param_1)

{
  FUN_1403dd62e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403dd542 FUN_1403dd542 body=55 status=ok
// SIG undefined FUN_1403dd542(void)

void FUN_1403dd542(longlong *param_1)

{
  FUN_1403dd5b2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403dd57a FUN_1403dd57a body=55 status=ok
// SIG undefined FUN_1403dd57a(void)

void FUN_1403dd57a(longlong *param_1)

{
  FUN_1403dd6aa(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403dd5b2 FUN_1403dd5b2 body=123 status=ok
// SIG undefined FUN_1403dd5b2(void)

void FUN_1403dd5b2(longlong param_1,int param_2)

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



// FUNCTION 1403dd62e FUN_1403dd62e body=123 status=ok
// SIG undefined FUN_1403dd62e(void)

void FUN_1403dd62e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
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



// FUNCTION 1403dd6aa FUN_1403dd6aa body=121 status=ok
// SIG undefined FUN_1403dd6aa(void)

void FUN_1403dd6aa(longlong param_1,int param_2)

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



// FUNCTION 1403dd724 FUN_1403dd724 body=534 status=ok
// SIG undefined FUN_1403dd724(void)

void FUN_1403dd724(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    puVar8 = (undefined8 *)*param_2;
    puVar7 = puVar8 + (longlong)*(int *)(param_2 + 1) * 2;
    local_80 = puVar7;
    do {
      FUN_144a06ecc(&local_78,puVar8);
      puVar9 = &DAT_149dfb77a;
      if ((int)uStack_70 != 0) {
        puVar9 = local_78;
      }
      FUN_1446f470e(&local_68,puVar9,1);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
        uVar2 = (uint)((ulonglong)local_68 >> 0x10);
        uVar5 = (uint)local_68 & 0xffff;
        lVar3 = *(longlong *)(param_1 + 0x218);
        if (*(longlong *)(param_1 + 0x218) == 0) {
          lVar3 = param_1 + 0x210;
        }
        iVar6 = *(int *)(lVar3 + (ulonglong)
                                 (*(int *)(param_1 + 0x220) - 1U &
                                 (int)((ulonglong)local_68 >> 0x20) +
                                 ((uint)local_68 << 0x10 | uVar5) + (uVar2 << 0x13 | uVar2 & 0xffff)
                                 + (uVar5 >> 4)) * 4);
        if (iVar6 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar6 * 0x10) == local_68)
            goto LAB_1403dd8f7;
            iVar6 = *(int *)((longlong)iVar6 * 0x10 + *(longlong *)(param_1 + 0x1d8) + 8);
          } while (iVar6 != -1);
        }
      }
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      lVar3 = FUN_1413f795e(param_1,local_68,2,&local_78);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x10) != 0)) {
        puVar9 = &DAT_149dfb77a;
        FUN_144a787a6(*(longlong *)(lVar3 + 0x10) + 0x28,puVar8);
        if (*(int *)(puVar8 + 1) != 0) {
          puVar9 = (undefined2 *)*puVar8;
        }
        uVar1 = *(undefined8 *)(lVar3 + 0x10);
        uVar4 = FUN_1403dec90();
        local_98 = 0;
        uStack_90 = 0;
        FUN_1400033ba(uVar1,uVar4,puVar9,0);
        FUN_145709dfc(DAT_14c872ce0,puVar8);
        puVar7 = local_80;
        lVar10 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x10) + 0x40);
        if (lVar10 != 0) {
          lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x38);
          lVar10 = lVar10 << 5;
          do {
            FUN_1403dd93c(param_1,lVar3);
            lVar3 = lVar3 + 0x20;
            lVar10 = lVar10 + -0x20;
          } while (lVar10 != 0);
        }
      }
LAB_1403dd8f7:
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403dd93c FUN_1403dd93c body=3068 status=ok
// SIG undefined FUN_1403dd93c(void)

void FUN_1403dd93c(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  byte bVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong *plVar23;
  longlong *plVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  int iVar30;
  longlong lVar31;
  bool bVar32;
  undefined1 auStack_148 [47];
  char local_119;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *local_f0;
  uint *local_e8;
  longlong local_e0;
  LPCRITICAL_SECTION local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  ulonglong uStack_b0;
  undefined2 *local_a0;
  int local_98;
  int local_94;
  longlong *local_90;
  longlong *local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar13 = *(longlong **)(param_1 + 0x118);
  plVar14 = *(longlong **)(param_1 + 0x120);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
  }
  local_90 = *(longlong **)(param_2 + 8);
  local_118 = param_1;
  FUN_1400021e4(&local_90,&local_a0);
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  FUN_1403de9f2(&local_a0,&local_b8,&DAT_149e0635c,1);
  local_98 = 0;
  if (local_94 < 0) {
    FUN_1446f8c06(&local_a0,0);
  }
  if (local_a0 != (undefined2 *)0x0) {
    *local_a0 = 0;
  }
  uVar25 = (ulonglong)(int)uStack_b0;
  if (0 < (longlong)uVar25) {
    local_d0 = (ulonglong)((int)uStack_b0 - 1);
    local_d8 = (LPCRITICAL_SECTION)(local_118 + 0x250);
    local_f0 = (longlong *)(local_118 + 0x128);
    local_100 = local_118 + 0x138;
    local_e0 = local_118 + 0x160;
    uVar29 = 0;
    local_c8 = uVar25;
    do {
      puVar20 = &DAT_149dfb77a;
      if (*(int *)(local_b8 + uVar29 * 2 + 1) != 0) {
        puVar20 = (undefined2 *)local_b8[uVar29 * 2];
      }
      FUN_1446f470e(&local_c0,puVar20,1);
      plVar12 = local_90;
      if (uVar29 != local_d0) {
        if (uVar29 == 0) {
          local_110 = local_c0;
          iVar26 = *(int *)(local_b8 + 1) + -1;
          if (*(int *)(local_b8 + 1) == 0) {
            iVar26 = 0;
          }
          FUN_1402980a2(&local_a0,*local_b8,iVar26);
          plVar12 = local_110;
        }
        else {
          FUN_1400020e8(&local_a0,&DAT_149e0635c,1);
          iVar26 = *(int *)(local_b8 + uVar29 * 2 + 1) + -1;
          if (*(int *)(local_b8 + uVar29 * 2 + 1) == 0) {
            iVar26 = 0;
          }
          FUN_1400020e8(&local_a0,local_b8[uVar29 * 2],iVar26);
          puVar20 = &DAT_149dfb77a;
          if (local_98 != 0) {
            puVar20 = local_a0;
          }
          FUN_1446f470e(&local_88,puVar20,1);
          plVar12 = local_88;
        }
      }
      local_110 = plVar12;
      plVar12 = local_c0;
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      uVar8 = *(uint *)(plVar13 + 6);
      local_f8 = plVar14;
      if ((int)uVar8 < 1) {
        uVar22 = 0;
      }
      else {
        lVar27 = plVar13[5];
        uVar22 = 0;
        do {
          iVar26 = uVar22 + (uVar8 >> 1);
          plVar14 = (longlong *)**(undefined8 **)(lVar27 + (longlong)iVar26 * 0x10);
          if ((plVar14 != plVar12) && (iVar6 = FUN_1403de539(plVar14,plVar12), iVar6 < 0)) {
            uVar22 = iVar26 + (uVar8 & 1);
          }
          bVar32 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar32);
        uVar8 = *(uint *)(plVar13 + 6);
      }
      plVar23 = local_f8;
      plVar14 = plVar13 + 5;
      if ((int)uVar22 < (int)uVar8) {
        if ((uVar22 == 0xffffffff) ||
           ((longlong *)**(undefined8 **)(*plVar14 + (longlong)(int)uVar22 * 0x10) != plVar12)) {
          if (uVar22 == 0xffffffff) goto LAB_1403ddc4a;
          goto LAB_1403ddc4c;
        }
      }
      else {
LAB_1403ddc4a:
        uVar22 = uVar8;
LAB_1403ddc4c:
        bVar32 = local_f8 == (longlong *)0x0;
        local_108 = plVar14;
        puVar11 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        local_119 = plVar13 == *(longlong **)(local_118 + 0x118) || bVar32;
        if ((bool)local_119) {
          plVar23 = (longlong *)0x0;
          plVar14 = plVar13;
          if (plVar13 == *(longlong **)(local_118 + 0x118)) {
            plVar14 = plVar23;
          }
          *puVar11 = plVar12;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          puVar11[6] = 0;
          puVar11[7] = plVar14;
          puVar11[8] = 0;
          uVar8 = 0;
          iVar26 = 0;
        }
        else {
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
          *puVar11 = plVar12;
          puVar11[1] = 0;
          puVar11[2] = 0;
          puVar11[3] = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          puVar11[6] = 0;
          puVar11[7] = plVar13;
          puVar11[8] = plVar23;
          LOCK();
          *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
          UNLOCK();
          iVar26 = *(int *)(puVar11 + 2);
          uVar8 = *(uint *)((longlong)puVar11 + 0x14);
        }
        plVar14 = puVar11 + 1;
        *(undefined2 *)(puVar11 + 9) = 0xffff;
        local_e8 = (uint *)(puVar11 + 2);
        *local_e8 = iVar26 + 1U;
        if (uVar8 < iVar26 + 1U) {
          FUN_1403de658(plVar14,iVar26);
        }
        *(longlong **)(*plVar14 + (longlong)iVar26 * 8) = local_110;
        plVar12 = (longlong *)puVar11[7];
        if ((plVar12 != (longlong *)0x0) && (*plVar12 != 0)) {
          plVar24 = puVar11 + 3;
          local_78 = (void *)0x0;
          uStack_70 = 0;
          local_88 = (longlong *)0x0;
          uStack_80 = 0;
          local_110 = plVar14;
          FUN_1403de7ba(&local_88,plVar12 + 1);
          plVar14 = local_88;
          iVar26 = *(int *)(puVar11 + 4);
          *(uint *)(puVar11 + 4) = iVar26 + 1U;
          if (*(uint *)((longlong)puVar11 + 0x24) < iVar26 + 1U) {
            FUN_1403de658(plVar24,iVar26);
          }
          *(longlong *)(*plVar24 + (longlong)iVar26 * 8) = *plVar14;
          lVar27 = (longlong)(int)(uint)uStack_70;
          if (lVar27 != 0) {
            iVar26 = *(int *)(puVar11 + 4);
            *(uint *)(puVar11 + 4) = iVar26 + (uint)uStack_70;
            if ((uint)(*(int *)((longlong)puVar11 + 0x24) - iVar26) < (uint)uStack_70) {
              FUN_1403de658(plVar24,iVar26);
            }
            memcpy((void *)((longlong)iVar26 * 8 + *plVar24),local_78,lVar27 << 3);
          }
          if (local_78 != (void *)0x0) {
            FUN_1400020a8();
          }
          plVar14 = local_110;
          if (local_88 != (longlong *)0x0) {
            FUN_1400020a8();
            plVar14 = local_110;
          }
        }
        if (local_119 == '\0') {
          LOCK();
          plVar12 = plVar23 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plVar23)(plVar23);
            LOCK();
            piVar1 = (int *)((longlong)plVar23 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar23 + 0x10))(plVar23);
            }
          }
        }
        plVar12 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar12[1] = (longlong)&DAT_100000001;
        *plVar12 = (longlong)&PTR_FUN_14a3e1cb0;
        plVar12[2] = (longlong)puVar11;
        iVar26 = (int)plVar13[6];
        *(uint *)(plVar13 + 6) = iVar26 + 1U;
        if (*(uint *)((longlong)plVar13 + 0x34) < iVar26 + 1U) {
          FUN_1403deb82(local_108,iVar26);
        }
        plVar13 = local_108;
        lVar31 = (longlong)(int)uVar22 * 0x10;
        memmove((void *)(*local_108 + lVar31 + 0x10),(void *)(*local_108 + lVar31),
                (ulonglong)(iVar26 - uVar22) << 4);
        lVar27 = *plVar13;
        *(undefined8 **)(lVar27 + lVar31) = puVar11;
        *(longlong **)(lVar27 + 8 + lVar31) = plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
        }
        plVar13 = &DAT_14caa8578;
        if (0 < (int)*local_e8) {
          plVar13 = (longlong *)*plVar14;
        }
        lVar27 = *plVar13;
        EnterCriticalSection(local_d8);
        if (*(int *)(local_118 + 0x15c) == 0) {
          iVar26 = *(int *)(local_118 + 0x130);
          *(int *)(local_118 + 0x130) = iVar26 + 1;
          if (*(int *)(local_118 + 0x134) == iVar26) {
            FUN_1447711aa(local_f0,iVar26);
          }
          iVar6 = *(int *)(local_118 + 0x150);
          if (iVar6 == 0) {
            iVar7 = -1;
          }
          else {
            iVar7 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar7 = iVar6 + -1;
            }
            iVar7 = iVar7 >> 5;
          }
          iVar16 = iVar6 + 1;
          iVar30 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar30 = iVar6;
          }
          if (iVar30 >> 5 == iVar7) {
            *(int *)(local_118 + 0x150) = iVar16;
          }
          else {
            if (*(int *)(local_118 + 0x154) <= iVar6) {
              iVar7 = iVar6;
              if (iVar6 + 0x20U < 0xa0) {
                iVar16 = 0x80;
              }
              else {
                uVar8 = iVar6 + 0x20U >> 5;
                if (*(int *)(local_118 + 0x154) + 0x1fU < 0xa0) {
                  uVar19 = 4;
                  if (4 < uVar8) {
                    uVar19 = uVar8;
                  }
                }
                else {
                  uVar19 = uVar8 + (uVar8 * 3 >> 3) + 0x10;
                }
                uVar25 = (ulonglong)(uVar19 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar9 = (uint)(uVar25 + 0xf);
                    if (uVar19 < 0x1ffd) {
                      uVar25 = (ulonglong)
                               (ushort)(&DAT_14c841d90)
                                       [0x32 - (byte)(&DAT_14c841e00)[uVar25 + 0xf >> 4]];
                    }
                    else {
                      uVar18 = (ulonglong)(uVar9 & 0xfffffff0);
                      if (uVar18 < 0x7ff1) {
                        bVar15 = (&DAT_14c841e00)[uVar9 >> 4];
                        uVar21 = 0x32;
                        if (0x32 < bVar15) {
                          uVar21 = (ulonglong)bVar15;
                        }
                        uVar28 = 0x32 - (ulonglong)bVar15;
                        do {
                          uVar25 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1403de2b4;
                          lVar31 = uVar21 + 1 + uVar28;
                          uVar28 = uVar28 - 1;
                        } while (lVar31 != 0x33);
                      }
                      uVar25 = 0x10;
                      if (0x10 < DAT_14c841df8) {
                        uVar25 = (ulonglong)DAT_14c841df8;
                      }
                      uVar25 = -uVar25 & (uVar18 + uVar25) - 1;
                    }
                  }
                  else {
                    local_110 = (longlong *)(ulonglong)uVar8;
                    uVar25 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar25,0);
                    uVar8 = (uint)local_110;
                    iVar7 = *(int *)(local_118 + 0x150);
                  }
                }
LAB_1403de2b4:
                iVar10 = (int)(uVar25 >> 2);
                iVar16 = -0x20;
                if ((int)uVar8 <= iVar10) {
                  iVar16 = iVar10 << 5;
                }
              }
              *(int *)(local_118 + 0x154) = iVar16;
              FUN_1446efbd8(local_100,iVar7);
              iVar16 = *(int *)(local_118 + 0x150) + 1;
            }
            iVar7 = iVar16 + 0x1f;
            if (-1 < iVar16) {
              iVar7 = iVar16;
            }
            *(int *)(local_118 + 0x150) = iVar16;
            if (iVar16 % 0x20 != 0) {
              lVar31 = *(longlong *)(local_118 + 0x148);
              if (*(longlong *)(local_118 + 0x148) == 0) {
                lVar31 = local_100;
              }
              bVar15 = -(char)(iVar16 % 0x20);
              *(uint *)(lVar31 + (longlong)(iVar7 >> 5) * 4) =
                   (uint)(*(int *)(lVar31 + (longlong)(iVar7 >> 5) * 4) << (bVar15 & 0x1f)) >>
                   (bVar15 & 0x1f);
            }
          }
          lVar31 = (longlong)iVar26;
          lVar17 = *(longlong *)(local_118 + 0x148);
          if (*(longlong *)(local_118 + 0x148) == 0) {
            lVar17 = local_100;
          }
          bVar15 = (byte)iVar6 & 0x1f;
          puVar2 = (uint *)(lVar17 + (longlong)(iVar30 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
        }
        else {
          iVar26 = *(int *)(local_118 + 0x158);
          lVar31 = (longlong)iVar26;
          iVar6 = *(int *)(*(longlong *)(local_118 + 0x128) + 4 + lVar31 * 0x20);
          *(int *)(local_118 + 0x158) = iVar6;
          iVar7 = *(int *)(local_118 + 0x15c) + -1;
          *(int *)(local_118 + 0x15c) = iVar7;
          if (iVar7 != 0) {
            *(undefined4 *)(*(longlong *)(local_118 + 0x128) + (longlong)iVar6 * 0x20) = 0xffffffff;
          }
        }
        plVar23 = local_f8;
        lVar17 = *(longlong *)(local_118 + 0x148);
        if (*(longlong *)(local_118 + 0x148) == 0) {
          lVar17 = local_100;
        }
        iVar6 = iVar26 + 0x1f;
        if (-1 < iVar26) {
          iVar6 = iVar26;
        }
        puVar2 = (uint *)(lVar17 + (longlong)(iVar6 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)iVar26 & 0x1f);
        lVar17 = *(longlong *)(local_118 + 0x128);
        lVar31 = lVar31 * 0x20;
        plVar13 = (longlong *)(lVar17 + lVar31);
        *(longlong *)(lVar17 + lVar31) = lVar27;
        *(undefined8 **)(lVar17 + 8 + lVar31) = puVar11;
        *(longlong **)(lVar17 + 0x10 + lVar31) = plVar12;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
          UNLOCK();
          lVar27 = *plVar13;
        }
        *(undefined4 *)(plVar13 + 3) = 0xffffffff;
        uVar8 = (uint)((ulonglong)lVar27 >> 0x10);
        uVar19 = (uint)lVar27 & 0xffff;
        uVar8 = ((uint)lVar27 << 0x10 | uVar19) + (int)((ulonglong)lVar27 >> 0x20) +
                (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar19 >> 4);
        uVar19 = *(int *)(local_118 + 0x130) - *(int *)(local_118 + 0x15c);
        if ((uVar19 != 0) && (uVar19 != 1)) {
          lVar31 = *(longlong *)(local_118 + 0x168);
          if (*(longlong *)(local_118 + 0x168) == 0) {
            lVar31 = local_e0;
          }
          iVar6 = *(int *)(lVar31 + (ulonglong)(*(int *)(local_118 + 0x170) - 1U & uVar8) * 4);
          if (iVar6 != -1) {
            do {
              puVar3 = (undefined4 *)(*local_f0 + (longlong)iVar6 * 0x20);
              if (*(longlong *)(*local_f0 + (longlong)iVar6 * 0x20) == lVar27) {
                plVar14 = *(longlong **)(puVar3 + 4);
                if (plVar14 != (longlong *)0x0) {
                  LOCK();
                  plVar23 = plVar14 + 1;
                  *(int *)plVar23 = (int)*plVar23 + -1;
                  UNLOCK();
                  if ((int)*plVar23 == 0) {
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
                lVar27 = *plVar13;
                uVar4 = *(undefined4 *)((longlong)plVar13 + 4);
                lVar31 = plVar13[1];
                uVar5 = *(undefined4 *)((longlong)plVar13 + 0xc);
                *(longlong *)(puVar3 + 4) = plVar13[2];
                *puVar3 = (int)lVar27;
                puVar3[1] = uVar4;
                puVar3[2] = (int)lVar31;
                puVar3[3] = uVar5;
                FUN_14747e41e(local_f0,iVar26);
                plVar23 = local_f8;
                goto LAB_1403de0bc;
              }
              iVar6 = puVar3[6];
            } while (iVar6 != -1);
          }
        }
        if (uVar19 < 4) {
          iVar6 = 1;
        }
        else {
          uVar25 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
          lVar27 = 0x3f;
          if (uVar25 != 0) {
            for (; uVar25 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar6 = 1 << ((byte)lVar27 & 0x1f);
        }
        if (((int)uVar19 < 1) || (iVar6 <= *(int *)(local_118 + 0x170))) {
          uVar8 = *(int *)(local_118 + 0x170) - 1U & uVar8;
          *(uint *)((longlong)plVar13 + 0x1c) = uVar8;
          lVar27 = *(longlong *)(local_118 + 0x168);
          if (*(longlong *)(local_118 + 0x168) == 0) {
            lVar27 = local_e0;
          }
          *(undefined4 *)(plVar13 + 3) =
               *(undefined4 *)
                (lVar27 + ((longlong)*(int *)(local_118 + 0x170) - 1U & (longlong)(int)uVar8) * 4);
          lVar27 = *(longlong *)(local_118 + 0x168);
          if (*(longlong *)(local_118 + 0x168) == 0) {
            lVar27 = local_e0;
          }
          *(int *)(lVar27 + ((longlong)*(int *)(local_118 + 0x170) - 1U & (longlong)(int)uVar8) * 4)
               = iVar26;
        }
        else {
          *(int *)(local_118 + 0x170) = iVar6;
          FUN_1403ded6e(local_f0);
        }
LAB_1403de0bc:
        LeaveCriticalSection(local_d8);
        plVar14 = local_108;
        if (plVar12 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar12 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            plVar14 = local_108;
            plVar23 = local_f8;
            if (*piVar1 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
              plVar14 = local_108;
              plVar23 = local_f8;
            }
          }
        }
      }
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar23 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
      uVar25 = local_c8;
      plVar13 = *(longlong **)(*plVar14 + (longlong)(int)uVar22 * 0x10);
      plVar14 = *(longlong **)(*plVar14 + 8 + (longlong)(int)uVar22 * 0x10);
      if (plVar14 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
        UNLOCK();
      }
      if (plVar23 != (longlong *)0x0) {
        LOCK();
        plVar12 = plVar23 + 1;
        *(int *)plVar12 = (int)*plVar12 + -1;
        UNLOCK();
        if ((int)*plVar12 == 0) {
          (**(code **)*plVar23)(plVar23);
          LOCK();
          piVar1 = (int *)((longlong)plVar23 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar23 + 0x10))(plVar23);
          }
        }
      }
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar25);
    uVar25 = uStack_b0 & 0xffffffff;
  }
  FUN_1447a1747(local_b8,uVar25 & 0xffffffff);
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14024d120(0,0);
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar14 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403de539 FUN_1403de539 body=286 status=ok
// SIG undefined FUN_1403de539(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_1403de539(undefined8 param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_10e8 [32];
  undefined1 *local_10c8;
  undefined4 local_10c0;
  undefined1 *local_10b8;
  undefined4 local_10b0;
  undefined8 local_10a8;
  undefined1 *local_10a0;
  undefined1 *local_1098;
  undefined1 *local_1090;
  char local_1088;
  undefined1 local_1080 [2070];
  undefined1 auStack_86a [2];
  undefined1 *local_868;
  undefined1 *local_860;
  undefined1 *local_858;
  char local_850;
  undefined1 local_848 [2070];
  undefined1 local_32 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_10e8;
  local_868 = local_848;
  local_850 = '\0';
  local_858 = local_32;
  local_10a0 = param_2;
  local_860 = local_868;
  FUN_14005eb5c(&local_10a0,&local_868);
  local_10b8 = local_868;
  local_10b0 = (undefined4)((ulonglong)((longlong)local_860 - (longlong)local_868) >> 1);
  local_10a0 = local_1080;
  local_1088 = '\0';
  local_1090 = auStack_86a;
  local_10a8 = param_1;
  local_1098 = local_10a0;
  FUN_14005eb5c(&local_10a8,&local_10a0);
  local_10c8 = local_10a0;
  local_10c0 = (undefined4)((ulonglong)((longlong)local_1098 - (longlong)local_10a0) >> 1);
  uVar1 = FUN_14498328b(&local_10c8,&local_10b8);
  if (local_1088 == '\x01') {
    FUN_1400020a8(local_10a0);
  }
  if (local_850 == '\x01') {
    FUN_1400020a8(local_868);
  }
  if ((local_30 ^ (ulonglong)auStack_10e8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403de658 FUN_1403de658 body=353 status=ok
// SIG undefined FUN_1403de658(void)

void FUN_1403de658(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403de6dd;
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
LAB_1403de6dd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1403de7ba FUN_1403de7ba body=256 status=ok
// SIG undefined FUN_1403de7ba(void)

longlong * FUN_1403de7ba(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar3 = (int)param_2[1];
  if (-1 < iVar3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != iVar3) {
      FUN_1403de8ba(param_1);
    }
    uVar2 = *(uint *)(param_2 + 1);
    if ((longlong)(int)uVar2 != 0) {
      iVar3 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar3 + uVar2;
      if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar3) < uVar2) {
        FUN_1403de658(param_1,iVar3);
      }
      memcpy((void *)((longlong)iVar3 * 8 + *param_1),(void *)*param_2,(longlong)(int)uVar2 << 3);
    }
    iVar3 = (int)param_2[3];
    if (-1 < iVar3) {
      plVar1 = param_1 + 2;
      *(undefined4 *)(param_1 + 3) = 0;
      if (*(int *)((longlong)param_1 + 0x1c) != iVar3) {
        FUN_1403de8ba(plVar1);
      }
      uVar2 = *(uint *)(param_2 + 3);
      if ((longlong)(int)uVar2 == 0) {
        return param_1;
      }
      iVar3 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar3 + uVar2;
      if ((uint)(*(int *)((longlong)param_1 + 0x1c) - iVar3) < uVar2) {
        FUN_1403de658(plVar1,iVar3);
      }
      memcpy((void *)((longlong)iVar3 * 8 + *plVar1),(void *)param_2[2],(longlong)(int)uVar2 << 3);
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar3);
}



// FUNCTION 1403de8ba FUN_1403de8ba body=312 status=ok
// SIG undefined FUN_1403de8ba(void)

void FUN_1403de8ba(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar3 + 0xf;
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1403de924;
              lVar1 = uVar4 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar5 & 0xfffffffffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_1403de924:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,4);
  }
  return;
}



// FUNCTION 1403de9f2 FUN_1403de9f2 body=243 status=ok
// SIG undefined FUN_1403de9f2(void)

undefined4 FUN_1403de9f2(undefined8 *param_1,undefined8 *param_2,wchar_t *param_3,uint param_4)

{
  int iVar1;
  size_t sVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int local_60;
  wchar_t *local_58;
  undefined4 local_50;
  undefined8 *local_48;
  code *local_40;
  undefined8 **local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  FUN_1447a1747(*param_2,*(undefined4 *)(param_2 + 1));
  *(undefined4 *)(param_2 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_2 + 0xc) != 0)) {
    FUN_1408be2c4(param_2,0);
  }
  if (*param_3 != L'\0') {
    local_38 = &local_48;
    local_40 = FUN_14274a912;
    local_50 = 0;
    local_58 = param_3;
    local_48 = param_2;
    if (param_3 != (wchar_t *)0x0) {
      sVar2 = wcslen(param_3);
      local_50 = (int)sVar2;
    }
    local_68 = *param_1;
    local_60 = *(int *)(param_1 + 1) + -1;
    if (*(int *)(param_1 + 1) == 0) {
      local_60 = 0;
    }
    FUN_1403deae6(&local_68,&local_58,&local_40,(param_4 & 0xff) * 2 + 1);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return *(undefined4 *)(param_2 + 1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403deae6 FUN_1403deae6 body=154 status=ok
// SIG undefined FUN_1403deae6(void)

void FUN_1403deae6(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined2 **local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = *param_3;
  local_10 = param_3[1];
  local_48 = (undefined2 *)*param_2;
  uStack_40 = param_2[1];
  if ((int)uStack_40 == 1) {
    local_28 = (undefined2 **)*param_1;
    uStack_20 = (undefined4)param_1[1];
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1401905f7(&local_28,*local_48);
  }
  else {
    local_28 = &local_48;
    uStack_20 = 1;
    local_38 = (undefined4)*param_1;
    uStack_34 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_30 = (undefined4)param_1[1];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1403defc4();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403deb82 FUN_1403deb82 body=269 status=ok
// SIG undefined FUN_1403deb82(void)

void FUN_1403deb82(longlong param_1,int param_2)

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



// FUNCTION 1403dec90 FUN_1403dec90 body=221 status=ok
// SIG undefined FUN_1403dec90(void)

longlong FUN_1403dec90(void)

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
  if (DAT_14caa8478 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14747bc71;
    local_40 = FUN_146328224;
    local_48 = L"GameplayTagsList";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayTags",L"GameplayTagsList",&DAT_14caa8478,&DAT_14747bc70);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8478;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403ded6e FUN_1403ded6e body=597 status=ok
// SIG undefined FUN_1403ded6e(void)

void FUN_1403ded6e(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_1403def7a;
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
LAB_1403def7a:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403defc4 FUN_1403defc4 body=794 status=ok
// SIG undefined FUN_1403defc4(void)

void FUN_1403defc4(longlong *param_1,longlong *param_2,undefined8 *param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong _MaxCount;
  wchar_t *_Str2;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_b8 [40];
  longlong local_90;
  uint local_84;
  ulonglong local_80;
  longlong *local_78;
  undefined8 *local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_90 = (longlong)(int)param_1[1];
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_1;
  if (local_90 != 0) {
    local_84 = param_4 & 4;
    local_80 = 0;
    uVar16 = 0;
LAB_1403df01c:
    if ((longlong)(int)local_78[1] != 0) {
      uVar12 = (int)local_90 - uVar16;
      lVar14 = *local_68;
      _Str2 = (wchar_t *)((longlong)(int)uVar16 * 2 + lVar14);
      puVar9 = (undefined8 *)*local_78;
      puVar11 = puVar9 + (longlong)(int)local_78[1] * 2;
LAB_1403df05d:
      uVar5 = *(uint *)(puVar9 + 1);
      _MaxCount = (ulonglong)uVar5;
      uVar3 = uVar12;
      if ((int)uVar5 < (int)uVar12) {
        uVar3 = uVar5;
      }
      uVar7 = 0;
      if (0 < (int)uVar3) {
        uVar7 = uVar3;
      }
      if (uVar5 == uVar7) {
        if ((_MaxCount != 0) && (0 < (int)uVar3)) {
          if ((param_4 & 1) != 0) {
            lVar10 = 0;
            do {
              uVar1 = *(ushort *)((longlong)*puVar9 + lVar10);
              uVar5 = (uint)uVar1;
              uVar2 = *(ushort *)((longlong)_Str2 + lVar10);
              uVar3 = (uint)uVar2;
              if (uVar1 == uVar2) {
                if (uVar1 == 0) goto LAB_1403df0f0;
              }
              else {
                if (0x7f < (uVar2 | uVar1)) goto LAB_1403df0eb;
                uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar3 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[uVar2]) goto LAB_1403df0eb;
              }
              _MaxCount = _MaxCount - 1;
              if (_MaxCount == 0) goto LAB_1403df0f0;
              lVar10 = lVar10 + 2;
            } while( true );
          }
          iVar4 = wcsncmp((wchar_t *)*puVar9,_Str2,_MaxCount);
          goto LAB_1403df094;
        }
        goto LAB_1403df0f0;
      }
      goto LAB_1403df098;
    }
LAB_1403df19b:
    uVar16 = uVar16 + 1;
    goto LAB_1403df1d5;
  }
  uVar16 = param_4 & 4;
  iVar4 = 0;
LAB_1403df1f2:
  iVar8 = (int)local_90 - iVar4;
  lVar10 = *local_68;
  lVar14 = lVar10 + (longlong)iVar4 * 2;
  if (uVar16 != 0) {
    if (iVar8 != 0) {
      local_78 = (longlong *)(local_90 * 2 + -2);
      plVar15 = (longlong *)((longlong)iVar4 * 2);
      uVar16 = 0;
      do {
        uVar12 = uVar16;
        iVar6 = iswspace(*(wint_t *)(lVar10 + (longlong)plVar15));
        uVar16 = (iVar6 != 0) + uVar12;
        if (iVar6 == 0) break;
        bVar17 = local_78 != plVar15;
        plVar15 = (longlong *)((longlong)plVar15 + 2);
      } while (bVar17);
      lVar14 = lVar14 + (ulonglong)uVar16 * 2;
      if (iVar8 - uVar16 != 0) {
        lVar10 = (longlong)(int)(iVar8 - uVar16);
        iVar8 = ((iVar4 - (uint)local_90) + uVar12 + 1) - (uint)(iVar6 == 0);
        do {
          iVar4 = iswspace(*(wint_t *)(lVar14 + -2 + lVar10 * 2));
          if (iVar4 == 0) {
            iVar8 = -iVar8;
            goto LAB_1403df297;
          }
          iVar8 = iVar8 + 1;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
    }
    iVar8 = 0;
  }
LAB_1403df297:
  if (((param_4 & 2) == 0) || (iVar8 != 0)) {
    local_58 = lVar14;
    local_50 = iVar8;
    (*(code *)*local_70)(local_70[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1403df0eb:
  iVar4 = uVar5 - uVar3;
LAB_1403df094:
  if (iVar4 == 0) {
LAB_1403df0f0:
    if (puVar9 != (undefined8 *)0x0) {
      iVar4 = (int)local_80;
      iVar8 = uVar16 - iVar4;
      lVar10 = (longlong)iVar4 * 2 + lVar14;
      if (local_84 == 0) goto LAB_1403df1a6;
      if (iVar8 == 0) goto LAB_1403df197;
      local_60 = (longlong)(int)uVar16 * 2 + -2;
      lVar13 = (longlong)iVar4 * 2;
      uVar12 = 0;
      goto LAB_1403df132;
    }
    goto LAB_1403df19b;
  }
LAB_1403df098:
  puVar9 = puVar9 + 2;
  if (puVar9 == puVar11) goto LAB_1403df19b;
  goto LAB_1403df05d;
  while (bVar17 = local_60 != lVar13, lVar13 = lVar13 + 2, bVar17) {
LAB_1403df132:
    uVar5 = uVar12;
    iVar4 = iswspace(*(wint_t *)(lVar14 + lVar13));
    uVar12 = (iVar4 != 0) + uVar5;
    if (iVar4 == 0) break;
  }
  lVar10 = lVar10 + (ulonglong)uVar12 * 2;
  if (iVar8 - uVar12 != 0) {
    lVar14 = (longlong)(int)(iVar8 - uVar12);
    iVar8 = (((int)local_80 - uVar16) + uVar5 + 1) - (uint)(iVar4 == 0);
    do {
      iVar4 = iswspace(*(wint_t *)(lVar10 + -2 + lVar14 * 2));
      if (iVar4 == 0) {
        iVar8 = -iVar8;
        goto LAB_1403df1a6;
      }
      iVar8 = iVar8 + 1;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
LAB_1403df197:
  iVar8 = 0;
LAB_1403df1a6:
  if (((param_4 & 2) == 0) || (iVar8 != 0)) {
    local_58 = lVar10;
    local_50 = iVar8;
    (*(code *)*local_70)(local_70[1]);
  }
  uVar16 = uVar16 + *(int *)(puVar9 + 1);
  local_80 = (ulonglong)uVar16;
LAB_1403df1d5:
  if (uVar16 == (uint)local_90) goto code_r0x0001403df1e0;
  goto LAB_1403df01c;
code_r0x0001403df1e0:
  iVar4 = (int)local_80;
  uVar16 = local_84;
  goto LAB_1403df1f2;
}



// FUNCTION 1403df2df FUN_1403df2df body=1311 status=ok
// SIG undefined FUN_1403df2df(void)

undefined8
FUN_1403df2df(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  undefined1 uVar1;
  undefined1 auStack_138 [32];
  longlong *local_118;
  undefined1 local_108 [96];
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  uVar1 = *(undefined1 *)(param_2 + 0x1c);
  switch(uVar1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1403df340_caseD_82:
    local_118 = &local_a8;
    local_90 = *param_5;
    local_88 = param_5[1];
    local_80 = param_5[2];
    local_78 = param_5[3];
    local_70 = param_5[4];
    local_a8 = param_2;
    local_a0 = param_3;
    local_98 = param_4;
    FUN_14299cbd9(param_1,param_5[5],param_5[6],param_5[7]);
    break;
  case 1:
    local_118 = &local_a8;
    local_90 = *param_5;
    local_88 = param_5[1];
    local_80 = param_5[2];
    local_78 = param_5[3];
    local_70 = param_5[4];
    local_a8 = param_2;
    local_a0 = param_3;
    local_98 = param_4;
    FUN_14299d12d(param_1,param_5[5],param_5[6],param_5[7]);
    break;
  case 3:
    local_118 = &local_a8;
    local_90 = *param_5;
    local_88 = param_5[1];
    local_80 = param_5[2];
    local_78 = param_5[3];
    local_70 = param_5[4];
    local_a8 = param_2;
    local_a0 = param_3;
    local_98 = param_4;
    FUN_14299d6a2(param_1,param_5[5],param_5[6],param_5[7]);
    break;
  case 4:
    FUN_1447dc19e(param_2 + 0x30,&local_a8,param_4);
    FUN_1447dc19e(param_2 + 0x30,local_108,param_3);
    local_118 = param_5;
    FUN_1403df2df(param_1,*(undefined8 *)(param_2 + 0x20),local_108,&local_a8);
    break;
  case 8:
    local_118 = &local_a8;
    local_90 = *param_5;
    local_88 = param_5[1];
    local_80 = param_5[2];
    local_78 = param_5[3];
    local_70 = param_5[4];
    local_a8 = param_2;
    local_a0 = param_3;
    local_98 = param_4;
    FUN_14299dbf6(param_1,param_5[5],param_5[6],param_5[7]);
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_118 = &local_a8;
      local_90 = *param_5;
      local_88 = param_5[1];
      local_80 = param_5[2];
      local_78 = param_5[3];
      local_70 = param_5[4];
      local_a8 = param_2;
      local_a0 = param_3;
      local_98 = param_4;
      FUN_14299f7dd(param_1,param_5[5],param_5[6],param_5[7]);
      break;
    case 0x41:
      local_118 = &local_a8;
      local_90 = *param_5;
      local_88 = param_5[1];
      local_80 = param_5[2];
      local_78 = param_5[3];
      local_70 = param_5[4];
      local_a8 = param_2;
      local_a0 = param_3;
      local_98 = param_4;
      FUN_14299fd4a(param_1,param_5[5],param_5[6],param_5[7]);
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1403df340_caseD_82;
    case 0x43:
      local_118 = &local_a8;
      local_90 = *param_5;
      local_88 = param_5[1];
      local_80 = param_5[2];
      local_78 = param_5[3];
      local_70 = param_5[4];
      local_a8 = param_2;
      local_a0 = param_3;
      local_98 = param_4;
      FUN_1429a02bf(param_1,param_5[5],param_5[6],param_5[7]);
      break;
    case 0x48:
      local_118 = &local_a8;
      local_90 = *param_5;
      local_88 = param_5[1];
      local_80 = param_5[2];
      local_78 = param_5[3];
      local_70 = param_5[4];
      local_a8 = param_2;
      local_a0 = param_3;
      local_98 = param_4;
      FUN_1429a082c(param_1,param_5[5],param_5[6],param_5[7]);
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_118 = &local_a8;
        local_90 = *param_5;
        local_88 = param_5[1];
        local_80 = param_5[2];
        local_78 = param_5[3];
        local_70 = param_5[4];
        local_a8 = param_2;
        local_a0 = param_3;
        local_98 = param_4;
        FUN_14299e16b(param_1,param_5[5],param_5[6],param_5[7]);
        break;
      case 0x81:
        local_118 = &local_a8;
        local_90 = *param_5;
        local_88 = param_5[1];
        local_80 = param_5[2];
        local_78 = param_5[3];
        local_70 = param_5[4];
        local_a8 = param_2;
        local_a0 = param_3;
        local_98 = param_4;
        FUN_14299e72c(param_1,param_5[5],param_5[6],param_5[7]);
        break;
      default:
        goto switchD_1403df340_caseD_82;
      case 0x83:
        local_118 = &local_a8;
        local_90 = *param_5;
        local_88 = param_5[1];
        local_80 = param_5[2];
        local_78 = param_5[3];
        local_70 = param_5[4];
        local_a8 = param_2;
        local_a0 = param_3;
        local_98 = param_4;
        FUN_14299eca4(param_1,param_5[5],param_5[6],param_5[7]);
        break;
      case 0x88:
        local_118 = &local_a8;
        local_90 = *param_5;
        local_88 = param_5[1];
        local_80 = param_5[2];
        local_78 = param_5[3];
        local_70 = param_5[4];
        local_a8 = param_2;
        local_a0 = param_3;
        local_98 = param_4;
        FUN_14299f265(param_1,param_5[5],param_5[6],param_5[7]);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403df800 FUN_1403df800 body=324 status=ok
// SIG undefined FUN_1403df800(void)

void FUN_1403df800(undefined ***param_1)

{
  undefined1 auStack_5d8 [32];
  undefined **local_5b8 [163];
  undefined1 local_9e;
  undefined **local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  uint local_50;
  undefined4 local_4c;
  byte local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_5d8;
  FUN_1403df946(local_5b8);
  local_5b8[0] = &PTR_FUN_14b965720;
  local_68 = (undefined **)0x0;
  uStack_60 = 0x3f800000;
  uStack_5c = 0;
  local_58 = 0;
  uStack_54 = 0;
  local_50 = local_50 & 0xfffffffc;
  local_48 = 0;
  local_9e = 0;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1403e019a(param_1,local_5b8);
  *(ulonglong *)((longlong)param_1 + 0x55c) = CONCAT44(local_58,uStack_5c);
  *(ulonglong *)((longlong)param_1 + 0x564) = CONCAT44(local_50,uStack_54);
  param_1[0xaa] = local_68;
  param_1[0xab] = (undefined **)CONCAT44(uStack_5c,uStack_60);
  if (local_5b8 == param_1) {
    *(undefined4 *)(param_1 + 0xaf) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_1 + 0x57c) = local_40._4_4_;
    *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x584) = uStack_38._4_4_;
    if ((local_48 & 1) == 0) goto LAB_1403df8c0;
  }
  else {
    if ((local_48 & 1) == 0) {
      if (*(char *)(param_1 + 0xae) == '\x01') {
        *(undefined1 *)(param_1 + 0xae) = 0;
      }
      *(undefined4 *)(param_1 + 0xaf) = (undefined4)local_40;
      *(undefined4 *)((longlong)param_1 + 0x57c) = local_40._4_4_;
      *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_38;
      *(undefined4 *)((longlong)param_1 + 0x584) = uStack_38._4_4_;
      goto LAB_1403df8c0;
    }
    *(undefined4 *)((longlong)param_1 + 0x56c) = local_4c;
    *(undefined1 *)(param_1 + 0xae) = 1;
    *(undefined4 *)(param_1 + 0xaf) = (undefined4)local_40;
    *(undefined4 *)((longlong)param_1 + 0x57c) = local_40._4_4_;
    *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)param_1 + 0x584) = uStack_38._4_4_;
  }
  local_48 = 0;
LAB_1403df8c0:
  local_5b8[0] = &PTR_FUN_14b965720;
  FUN_1403dfcb0(local_5b8);
  if ((local_20 ^ (ulonglong)auStack_5d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403df946 FUN_1403df946 body=267 status=ok
// SIG undefined FUN_1403df946(void)

undefined8 * FUN_1403df946(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14b3f65b0;
  FUN_1403dfaf8(param_1 + 2);
  FUN_1403dfa52(param_1 + 100);
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0x3006;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  uVar1 = DAT_14c8464e8;
  param_1[0x9c] = DAT_14c8464e0;
  param_1[0x9d] = uVar1;
  param_1[0x9e] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  *(undefined2 *)((longlong)param_1 + 0x4fc) = 0;
  param_1[0xa4] = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0x9b) = 0;
  memset(param_1 + 0x82,0,0x98);
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x52c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x532) = 0;
  param_1[0xa2] = 1;
  *(undefined2 *)(param_1 + 0xa3) = 0;
  *(undefined2 *)((longlong)param_1 + 0x51b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x53a) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x53b) = 0;
  *(undefined2 *)((longlong)param_1 + 0x53f) = 0;
  return param_1;
}



// FUNCTION 1403dfa52 FUN_1403dfa52 body=165 status=ok
// SIG undefined FUN_1403dfa52(void)

longlong FUN_1403dfa52(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  FUN_1405c5fa2();
  *(undefined **)(param_1 + 0xa8) = &DAT_14cb769e8;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined ***)(param_1 + 0xa0) = &PTR_FUN_14b0394b0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  FUN_1403dff72(param_1);
  return param_1;
}



// FUNCTION 1403dfaf8 FUN_1403dfaf8 body=439 status=ok
// SIG undefined FUN_1403dfaf8(void)

undefined8 * FUN_1403dfaf8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[0xf] = 0;
  param_1[0x10] = 0x200000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_1405c5fa2();
  param_1[0x12] = &DAT_14cb769e8;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = &PTR_FUN_14b0394b0;
  memset(param_1 + 0x15,0,0x100);
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0xffffffff;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x4fc71eb4;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x281) = 0;
  param_1[0x52] = 0;
  param_1[0x54] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2fc) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xfffffc00 | 0x80;
  param_1[0x3c] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x3a] = DAT_14c8464e0;
  param_1[0x3b] = uVar1;
  param_1[0x3f] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x3d] = DAT_14c8464e0;
  param_1[0x3e] = uVar1;
  param_1[0x42] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x40] = DAT_14c8464e0;
  param_1[0x41] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x43] = DAT_14c8464e0;
  param_1[0x44] = uVar1;
  param_1[0x45] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x46] = DAT_14c8464e0;
  param_1[0x47] = uVar1;
  param_1[0x48] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0x49) = 0;
  return param_1;
}



// FUNCTION 1403dfcb0 FUN_1403dfcb0 body=275 status=ok
// SIG undefined FUN_1403dfcb0(void)

void FUN_1403dfcb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3f65b0;
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  param_1[0x78] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (*(int *)((longlong)param_1 + 0x3dc) != 0) {
    FUN_140115c12(param_1 + 0x7a,0);
  }
  param_1[0x79] = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_1403dfdc4(param_1 + 2);
  return;
}



// FUNCTION 1403dfdc4 FUN_1403dfdc4 body=341 status=ok
// SIG undefined FUN_1403dfdc4(void)

void FUN_1403dfdc4(longlong param_1)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x2fc) == '\x01') {
    *(undefined1 *)(param_1 + 0x2fc) = 0;
  }
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_1400020a8();
  }
  FUN_1403e0ff1(*(undefined8 *)(param_1 + 0x2d0),*(undefined4 *)(param_1 + 0x2d8));
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    plVar1 = (longlong *)(param_1 + 0x2b0);
    if (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x2a0);
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)(param_1 + 0x281) == '\x01') {
    *(undefined1 *)(param_1 + 0x281) = 0;
  }
  FUN_1403dff1a(param_1 + 0x250);
  if (*(char *)(param_1 + 0x1c8) == '\x01') {
    *(undefined1 *)(param_1 + 0x1c8) = 0;
  }
  *(undefined2 **)(param_1 + 0x88) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    FUN_140115c12(param_1 + 0x98,0);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403dff1a FUN_1403dff1a body=87 status=ok
// SIG undefined FUN_1403dff1a(void)

void FUN_1403dff1a(longlong param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined2 **)(param_1 + 8) = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_140115c12(param_1 + 0x18,0);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1403dff72 FUN_1403dff72 body=550 status=ok
// SIG undefined FUN_1403dff72(void)

void FUN_1403dff72(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined1 auStack_a8 [40];
  uint local_80;
  undefined8 uStack_7c;
  uint uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined **local_60;
  undefined *local_58;
  longlong local_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(byte *)((longlong)param_1 + 0x7c) = *(byte *)((longlong)param_1 + 0x7c) & 0xe0;
  local_80 = local_80 & 0xffffff00;
  local_70 = 0;
  uStack_68 = 0;
  uStack_7c = 0;
  uStack_74 = uStack_74 & 0xffff0000;
  FUN_1405c5fa2();
  local_58 = &DAT_14cb769e8;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = &PTR_FUN_14b0394b0;
  *(undefined4 *)(param_1 + 0x12) = local_70;
  *(undefined4 *)((longlong)param_1 + 0x94) = uStack_6c;
  *(undefined4 *)(param_1 + 0x13) = (undefined4)uStack_68;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uStack_68._4_4_;
  *(uint *)(param_1 + 0x10) = local_80;
  *(undefined4 *)((longlong)param_1 + 0x84) = (undefined4)uStack_7c;
  *(undefined4 *)(param_1 + 0x11) = uStack_7c._4_4_;
  *(uint *)((longlong)param_1 + 0x8c) = uStack_74;
  (**(code **)(param_1[0x14] + 0x20))(param_1 + 0x14,0);
  param_1[0x15] = &DAT_14cb769e8;
  FUN_1406022fe(param_1 + 0x16,&local_50);
  local_60 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_48 >> 0x20;
  uStack_48 = uStack_48 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_50,0);
  }
  local_58 = (undefined *)0x0;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_1 + 0xcc) < 0) {
    *(undefined4 *)(param_1 + 0x19) = 0;
    FUN_1488228aa(param_1 + 0x18);
  }
  else {
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  if (*(int *)((longlong)param_1 + 0xdc) < 0) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    FUN_1488228da(param_1 + 0x1a);
  }
  else {
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_14482f6fa(param_1 + 1,0);
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    FUN_14482f6fa(param_1 + 8,0);
  }
  else {
    *(undefined4 *)(param_1 + 9) = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0xec) < 0) {
    *(undefined4 *)(param_1 + 0x1d) = 0;
    FUN_14882290a(param_1 + 0x1c);
  }
  else {
    *(undefined4 *)(param_1 + 0x1d) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e019a FUN_1403e019a body=711 status=ok
// SIG undefined FUN_1403e019a(void)

longlong FUN_1403e019a(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
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
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  longlong lVar21;
  
  FUN_1403e0b1c(param_1 + 0x10,param_2 + 0x10);
  FUN_1403e0462(param_1 + 800,param_2 + 800);
  *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_2 + 0x430);
  uVar3 = *(undefined4 *)(param_2 + 0x410);
  uVar4 = *(undefined4 *)(param_2 + 0x414);
  uVar5 = *(undefined4 *)(param_2 + 0x418);
  uVar6 = *(undefined4 *)(param_2 + 0x41c);
  uVar7 = *(undefined4 *)(param_2 + 0x424);
  uVar8 = *(undefined4 *)(param_2 + 0x428);
  uVar9 = *(undefined4 *)(param_2 + 0x42c);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_2 + 0x420);
  *(undefined4 *)(param_1 + 0x424) = uVar7;
  *(undefined4 *)(param_1 + 0x428) = uVar8;
  *(undefined4 *)(param_1 + 0x42c) = uVar9;
  *(undefined4 *)(param_1 + 0x410) = uVar3;
  *(undefined4 *)(param_1 + 0x414) = uVar4;
  *(undefined4 *)(param_1 + 0x418) = uVar5;
  *(undefined4 *)(param_1 + 0x41c) = uVar6;
  lVar21 = *(longlong *)(param_2 + 0x438);
  if (DAT_14c950c29 == 1) {
    if (lVar21 == 0) {
      lVar21 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar21 = *(longlong *)(param_2 + 0x438);
    }
  }
  bVar20 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x438) = lVar21;
  *(undefined8 *)(param_1 + 0x440) = *(undefined8 *)(param_2 + 0x440);
  lVar21 = *(longlong *)(param_2 + 0x448);
  if ((bVar20 & 1) != 0) {
    if (lVar21 == 0) {
      lVar21 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar21 = *(longlong *)(param_2 + 0x448);
      bVar20 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x448) = lVar21;
  *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_2 + 0x450);
  lVar21 = *(longlong *)(param_2 + 0x458);
  if ((bVar20 & 1) != 0) {
    if (lVar21 == 0) {
      lVar21 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar21 = *(longlong *)(param_2 + 0x458);
      bVar20 = DAT_14c950c29;
    }
  }
  *(longlong *)(param_1 + 0x458) = lVar21;
  *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_2 + 0x460);
  lVar21 = *(longlong *)(param_2 + 0x468);
  if ((bVar20 & 1) != 0) {
    if (lVar21 == 0) {
      lVar21 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar21 = *(longlong *)(param_2 + 0x468);
    }
  }
  *(longlong *)(param_1 + 0x468) = lVar21;
  *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(param_2 + 0x470);
  uVar3 = *(undefined4 *)(param_2 + 0x478);
  uVar4 = *(undefined4 *)(param_2 + 0x47c);
  uVar5 = *(undefined4 *)(param_2 + 0x480);
  uVar6 = *(undefined4 *)(param_2 + 0x484);
  uVar7 = *(undefined4 *)(param_2 + 0x488);
  uVar8 = *(undefined4 *)(param_2 + 0x48c);
  uVar9 = *(undefined4 *)(param_2 + 0x490);
  uVar10 = *(undefined4 *)(param_2 + 0x494);
  uVar11 = *(undefined4 *)(param_2 + 0x49c);
  uVar12 = *(undefined4 *)(param_2 + 0x4a0);
  uVar13 = *(undefined4 *)(param_2 + 0x4a4);
  *(undefined4 *)(param_1 + 0x498) = *(undefined4 *)(param_2 + 0x498);
  *(undefined4 *)(param_1 + 0x49c) = uVar11;
  *(undefined4 *)(param_1 + 0x4a0) = uVar12;
  *(undefined4 *)(param_1 + 0x4a4) = uVar13;
  *(undefined4 *)(param_1 + 0x488) = uVar7;
  *(undefined4 *)(param_1 + 0x48c) = uVar8;
  *(undefined4 *)(param_1 + 0x490) = uVar9;
  *(undefined4 *)(param_1 + 0x494) = uVar10;
  *(undefined4 *)(param_1 + 0x478) = uVar3;
  *(undefined4 *)(param_1 + 0x47c) = uVar4;
  *(undefined4 *)(param_1 + 0x480) = uVar5;
  *(undefined4 *)(param_1 + 0x484) = uVar6;
  if ((*(longlong *)(param_1 + 0x4a8) != *(longlong *)(param_2 + 0x4a8)) ||
     (*(int *)(param_1 + 0x4b0) != *(int *)(param_2 + 0x4b0))) {
    *(longlong *)(param_1 + 0x4a8) = *(longlong *)(param_2 + 0x4a8);
    *(undefined4 *)(param_1 + 0x4b0) = *(undefined4 *)(param_2 + 0x4b0);
    *(undefined8 *)(param_1 + 0x4b8) = 0;
  }
  *(undefined8 *)(param_1 + 0x4c0) = *(undefined8 *)(param_2 + 0x4c0);
  FUN_1403e0ef4(param_1 + 0x4c8,param_2 + 0x4c8);
  *(undefined1 *)(param_1 + 0x4d8) = *(undefined1 *)(param_2 + 0x4d8);
  uVar2 = *(undefined8 *)(param_2 + 0x4f6);
  *(undefined8 *)(param_1 + 0x4ee) = *(undefined8 *)(param_2 + 0x4ee);
  *(undefined8 *)(param_1 + 0x4f6) = uVar2;
  uVar3 = *(undefined4 *)(param_2 + 0x4e4);
  uVar4 = *(undefined4 *)(param_2 + 0x4e8);
  uVar5 = *(undefined4 *)(param_2 + 0x4ec);
  *(undefined4 *)(param_1 + 0x4e0) = *(undefined4 *)(param_2 + 0x4e0);
  *(undefined4 *)(param_1 + 0x4e4) = uVar3;
  *(undefined4 *)(param_1 + 0x4e8) = uVar4;
  *(undefined4 *)(param_1 + 0x4ec) = uVar5;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x508);
    uVar2 = *(undefined8 *)(param_2 + 0x500);
    *(int *)(param_1 + 0x508) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x50c) == 0) {
      *(undefined4 *)(param_1 + 0x50c) = 0;
    }
    else {
      FUN_144723f1e((undefined8 *)(param_1 + 0x500),iVar1);
      FUN_144723ff3(*(undefined8 *)(param_1 + 0x500),uVar2,iVar1);
    }
  }
  uVar2 = *(undefined8 *)(param_2 + 0x510);
  uVar14 = *(undefined8 *)(param_2 + 0x518);
  uVar15 = *(undefined8 *)(param_2 + 0x520);
  uVar16 = *(undefined8 *)(param_2 + 0x528);
  uVar17 = *(undefined8 *)(param_2 + 0x530);
  uVar18 = *(undefined8 *)(param_2 + 0x538);
  uVar19 = *(undefined8 *)(param_2 + 0x548);
  *(undefined8 *)(param_1 + 0x540) = *(undefined8 *)(param_2 + 0x540);
  *(undefined8 *)(param_1 + 0x548) = uVar19;
  *(undefined8 *)(param_1 + 0x530) = uVar17;
  *(undefined8 *)(param_1 + 0x538) = uVar18;
  *(undefined8 *)(param_1 + 0x520) = uVar15;
  *(undefined8 *)(param_1 + 0x528) = uVar16;
  *(undefined8 *)(param_1 + 0x510) = uVar2;
  *(undefined8 *)(param_1 + 0x518) = uVar14;
  return param_1;
}



// FUNCTION 1403e0462 FUN_1403e0462 body=459 status=ok
// SIG undefined FUN_1403e0462(void)

undefined8 * FUN_1403e0462(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  if (param_1 == param_2) {
    FUN_142b2fc0e(param_1 + 3,param_2 + 3);
  }
  else {
    iVar1 = *(int *)(param_2 + 2);
    pvVar2 = (void *)param_2[1];
    *(int *)(param_1 + 2) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x14) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x14) = 0;
    }
    else {
      FUN_1447c510a(param_1 + 1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 << 2);
      }
    }
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
    iVar1 = *(int *)(param_2 + 9);
    pvVar2 = (void *)param_2[8];
    *(int *)(param_1 + 9) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
    }
    else {
      FUN_1447c510a(param_1 + 8,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 2);
      }
    }
  }
  uVar10 = param_2[10];
  uVar11 = param_2[0xb];
  uVar12 = param_2[0xc];
  uVar13 = param_2[0xd];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x71);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x75);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x79);
  *(undefined4 *)((longlong)param_1 + 0x6d) = *(undefined4 *)((longlong)param_2 + 0x6d);
  *(undefined4 *)((longlong)param_1 + 0x71) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x75) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x79) = uVar5;
  param_1[0xc] = uVar12;
  param_1[0xd] = uVar13;
  param_1[10] = uVar10;
  param_1[0xb] = uVar11;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x11);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar6 = *(undefined4 *)(param_2 + 0x12);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar8 = *(undefined4 *)(param_2 + 0x13);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x9c);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x11) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar5;
  *(undefined4 *)(param_1 + 0x12) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar7;
  *(undefined4 *)(param_1 + 0x13) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar9;
  (**(code **)(param_1[0x14] + 0x20))(param_1 + 0x14,0);
  param_1[0x15] = param_2[0x15];
  FUN_1406022fe(param_1 + 0x16,param_2 + 0x16);
  FUN_1403e06b6(param_1 + 0x18,param_2 + 0x18);
  FUN_1403e0748(param_1 + 0x1a,param_2 + 0x1a);
  FUN_1403e062e(param_1 + 0x1c,param_2 + 0x1c);
  return param_1;
}



// FUNCTION 1403e062e FUN_1403e062e body=79 status=ok
// SIG undefined FUN_1403e062e(void)

undefined8 * FUN_1403e062e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1403e07a2(param_1,iVar1);
      FUN_1403e067d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1403e067d FUN_1403e067d body=56 status=ok
// SIG undefined FUN_1403e067d(void)

void FUN_1403e067d(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      *(undefined4 *)(param_1 + 0x18 + lVar1) = *(undefined4 *)(param_2 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403e06b6 FUN_1403e06b6 body=79 status=ok
// SIG undefined FUN_1403e06b6(void)

undefined8 * FUN_1403e06b6(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1403e087a(param_1,iVar1);
      FUN_1403e0705(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1403e0705 FUN_1403e0705 body=66 status=ok
// SIG undefined FUN_1403e0705(void)

void FUN_1403e0705(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar1) = *(undefined8 *)(param_2 + 0x18 + lVar1);
      *(undefined8 *)(param_1 + 0x20 + lVar1) = *(undefined8 *)(param_2 + 0x20 + lVar1);
      lVar1 = lVar1 + 0x28;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403e0748 FUN_1403e0748 body=89 status=ok
// SIG undefined FUN_1403e0748(void)

undefined8 * FUN_1403e0748(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1403e09c6(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x18);
      }
    }
  }
  return param_1;
}



// FUNCTION 1403e07a2 FUN_1403e07a2 body=216 status=ok
// SIG undefined FUN_1403e07a2(void)

void FUN_1403e07a2(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1403e087a FUN_1403e087a body=332 status=ok
// SIG undefined FUN_1403e087a(void)

void FUN_1403e087a(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  if (param_2 != 0) {
    uVar4 = (longlong)param_2 * 0x28;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403e0918;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1403e0918:
    iVar5 = (int)(uVar4 / 0x28);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x28,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1403e09c6 FUN_1403e09c6 body=341 status=ok
// SIG undefined FUN_1403e09c6(void)

void FUN_1403e09c6(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar7 = 0;
  if (param_2 != 0) {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403e0a4b;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_1403e0a4b:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1403e0b1c FUN_1403e0b1c body=983 status=ok
// SIG undefined FUN_1403e0b1c(void)

longlong * FUN_1403e0b1c(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar3 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar3;
  lVar3 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar3;
  param_1[2] = param_2[2];
  lVar3 = param_2[3];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_2[3];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[3] = lVar3;
  lVar3 = param_2[4];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_2[4];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[4] = lVar3;
  lVar3 = param_2[5];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_2[5];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[5] = lVar3;
  lVar3 = param_2[6];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_2[6];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[6] = lVar3;
  lVar3 = param_2[7];
  if ((bVar1 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_14689c22e();
      lVar3 = param_2[7];
    }
  }
  param_1[7] = lVar3;
  param_1[8] = param_2[8];
  if (param_1 != param_2) {
    plVar4 = param_2 + 9;
    if ((longlong *)param_2[0xf] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[0xf];
    }
    FUN_1400709d4(param_1 + 9,plVar4,(int)param_2[0x10],*(undefined4 *)((longlong)param_1 + 0x84));
  }
  (**(code **)(param_1[0x11] + 0x20))(param_1 + 0x11,0);
  param_1[0x12] = param_2[0x12];
  FUN_1406022fe(param_1 + 0x13,param_2 + 0x13);
  memcpy(param_1 + 0x15,param_2 + 0x15,0x100);
  if ((param_1[0x35] != param_2[0x35]) || ((int)param_1[0x36] != (int)param_2[0x36])) {
    param_1[0x35] = param_2[0x35];
    *(int *)(param_1 + 0x36) = (int)param_2[0x36];
    param_1[0x37] = 0;
  }
  *(short *)(param_1 + 0x38) = (short)param_2[0x38];
  if (param_1 == param_2) {
    plVar4 = param_2 + 0x3a;
    plVar5 = param_1 + 0x3a;
    for (lVar3 = 0xf; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar5 = *plVar4;
      plVar4 = plVar4 + 1;
      plVar5 = plVar5 + 1;
    }
    *(char *)(param_1 + 0x49) = (char)param_2[0x49];
  }
  else {
    if ((char)param_2[0x39] == '\x01') {
      *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)((longlong)param_2 + 0x1c4);
      uVar2 = 1;
LAB_1403e0e95:
      *(undefined1 *)(param_1 + 0x39) = uVar2;
    }
    else if ((char)param_1[0x39] == '\x01') {
      uVar2 = 0;
      goto LAB_1403e0e95;
    }
    plVar4 = param_2 + 0x3a;
    plVar5 = param_1 + 0x3a;
    for (lVar3 = 0xf; lVar3 != 0; lVar3 = lVar3 + -1) {
      *plVar5 = *plVar4;
      plVar4 = plVar4 + 1;
      plVar5 = plVar5 + 1;
    }
    *(char *)(param_1 + 0x49) = (char)param_2[0x49];
    if ((char)param_2[0x4f] == '\x01') {
      FUN_1403e1402(param_1 + 0x4a,param_2 + 0x4a);
    }
    else {
      FUN_1403dff1a();
    }
    if (*(char *)((longlong)param_2 + 0x281) == '\x01') {
      *(char *)(param_1 + 0x50) = (char)param_2[0x50];
      *(undefined1 *)((longlong)param_1 + 0x281) = 1;
    }
    else if (*(char *)((longlong)param_1 + 0x281) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x281) = 0;
    }
  }
  FUN_1403e12d4(param_1 + 0x52,param_2 + 0x52);
  FUN_1403e0f94(param_1 + 0x5a,param_2 + 0x5a);
  param_1[0x5c] = param_2[0x5c];
  FUN_1403e0f44(param_1 + 0x5d,param_2 + 0x5d);
  if (param_1 != param_2) {
    if (*(char *)((longlong)param_2 + 0x2fc) == '\x01') {
      *(int *)(param_1 + 0x5f) = (int)param_2[0x5f];
      uVar2 = 1;
    }
    else {
      if (*(char *)((longlong)param_1 + 0x2fc) != '\x01') goto LAB_1403e0d62;
      uVar2 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x2fc) = uVar2;
  }
LAB_1403e0d62:
  FUN_1403e0ef4(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 1403e0ef4 FUN_1403e0ef4 body=79 status=ok
// SIG undefined FUN_1403e0ef4(void)

undefined8 * FUN_1403e0ef4(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1403e149c(param_1,iVar1);
      FUN_1403e129b(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1403e0f44 FUN_1403e0f44 body=79 status=ok
// SIG undefined FUN_1403e0f44(void)

undefined8 * FUN_1403e0f44(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1403e10ec(param_1,iVar1);
      FUN_1403e107f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1403e0f94 FUN_1403e0f94 body=93 status=ok
// SIG undefined FUN_1403e0f94(void)

undefined8 * FUN_1403e0f94(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1403e0ff1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1403e11c4(param_1,iVar1);
      FUN_1403e103e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1403e0ff1 FUN_1403e0ff1 body=77 status=ok
// SIG undefined FUN_1403e0ff1(void)

void FUN_1403e0ff1(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403e103e FUN_1403e103e body=65 status=ok
// SIG undefined FUN_1403e103e(void)

void FUN_1403e103e(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    do {
      *(undefined8 *)(param_1 + lVar3) = *(undefined8 *)(param_2 + lVar3);
      lVar1 = *(longlong *)(param_2 + 8 + lVar3);
      *(longlong *)(param_1 + 8 + lVar3) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      uVar2 = *(undefined8 *)(param_2 + lVar3 + 0x18);
      *(undefined8 *)(param_1 + lVar3 + 0x10) = *(undefined8 *)(param_2 + lVar3 + 0x10);
      *(undefined8 *)(param_1 + lVar3 + 0x18) = uVar2;
      lVar3 = lVar3 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403e107f FUN_1403e107f body=108 status=ok
// SIG undefined FUN_1403e107f(void)

void FUN_1403e107f(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  
  if (param_3 != 0) {
    lVar7 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar7);
      *(longlong *)(param_1 + lVar7) = lVar2;
      if ((lVar2 != 0 & bVar6) == 1) {
        FUN_14689c22e();
        bVar6 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar7;
      lVar1 = param_2 + lVar7;
      *(undefined8 *)(lVar2 + 0x15) = *(undefined8 *)(lVar1 + 0x15);
      uVar3 = *(undefined4 *)(lVar1 + 0xc);
      uVar4 = *(undefined4 *)(lVar1 + 0x10);
      uVar5 = *(undefined4 *)(lVar1 + 0x14);
      *(undefined4 *)(lVar2 + 8) = *(undefined4 *)(lVar1 + 8);
      *(undefined4 *)(lVar2 + 0xc) = uVar3;
      *(undefined4 *)(lVar2 + 0x10) = uVar4;
      *(undefined4 *)(lVar2 + 0x14) = uVar5;
      lVar7 = lVar7 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403e10ec FUN_1403e10ec body=215 status=ok
// SIG undefined FUN_1403e10ec(void)

void FUN_1403e10ec(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1403e11c4 FUN_1403e11c4 body=215 status=ok
// SIG undefined FUN_1403e11c4(void)

void FUN_1403e11c4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1403e129b FUN_1403e129b body=56 status=ok
// SIG undefined FUN_1403e129b(void)

void FUN_1403e129b(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      *(undefined8 *)(param_1 + 0x18 + lVar1) = *(undefined8 *)(param_2 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403e12d4 FUN_1403e12d4 body=301 status=ok
// SIG undefined FUN_1403e12d4(void)

longlong * FUN_1403e12d4(longlong *param_1,longlong *param_2)

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



// FUNCTION 1403e1402 FUN_1403e1402 body=153 status=ok
// SIG undefined FUN_1403e1402(void)

undefined1 * FUN_1403e1402(undefined1 *param_1,undefined1 *param_2)

{
  if (param_1[0x28] == '\x01') {
    *(undefined2 **)(param_1 + 8) = &DAT_14a171d50;
    *(undefined4 *)(param_1 + 0x20) = 0;
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_140115c12(param_1 + 0x18,0);
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
  }
  *param_1 = *param_2;
  *(undefined2 **)(param_1 + 8) = &DAT_14a171d50;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  FUN_1406022fe(param_1 + 0x18,param_2 + 0x18);
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14b0394b0;
  param_1[0x28] = 1;
  return param_1;
}



// FUNCTION 1403e149c FUN_1403e149c body=215 status=ok
// SIG undefined FUN_1403e149c(void)

void FUN_1403e149c(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1403e1574 FUN_1403e1574 body=101 status=ok
// SIG undefined FUN_1403e1574(void)

void FUN_1403e1574(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x144 + (longlong)param_2 * 0x150);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x150 + 0x140);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x150 + 0x140);
  FUN_1403e15da();
  return;
}



// FUNCTION 1403e15da FUN_1403e15da body=122 status=ok
// SIG undefined FUN_1403e15da(void)

void FUN_1403e15da(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x150) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x150) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x150 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1403e1654 FUN_1403e1654 body=99 status=ok
// SIG undefined FUN_1403e1654(void)

void FUN_1403e1654(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001403e16b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001403e1696. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 1403e16b8 FUN_1403e16b8 body=130 status=ok
// SIG undefined FUN_1403e16b8(void)

void FUN_1403e16b8(longlong param_1,uint param_2)

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
  FUN_1403e173a(_Dst,1);
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



// FUNCTION 1403e173a FUN_1403e173a body=56 status=ok
// SIG undefined FUN_1403e173a(void)

void FUN_1403e173a(longlong param_1,int param_2)

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



// FUNCTION 1403e1772 FUN_1403e1772 body=277 status=ok
// SIG undefined FUN_1403e1772(void)

void FUN_1403e1772(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0xc08);
  lVar12 = (longlong)iVar3;
  *(uint *)(param_1 + 0xc08) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xc0c) < iVar3 + 1U) {
    FUN_1489a2ec2(param_1,iVar3);
  }
  lVar9 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar9 = param_1;
  }
  *(undefined4 *)(lVar9 + lVar12 * 0x18) = *param_2;
  *(undefined8 *)(lVar9 + 8 + lVar12 * 0x18) = *(undefined8 *)(param_2 + 2);
  lVar4 = *(longlong *)(param_2 + 4);
  *(longlong *)(lVar9 + 0x10 + lVar12 * 0x18) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  lVar12 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar12 = param_1;
  }
  if (1 < *(int *)(param_1 + 0xc08)) {
    uVar10 = (ulonglong)(*(int *)(param_1 + 0xc08) - 1);
    do {
      uVar11 = (int)uVar10 - 1;
      uVar5 = (ulonglong)(uVar11 >> 1);
      if (*(uint *)(lVar12 + uVar5 * 0x18) <= *(uint *)(lVar12 + uVar10 * 0x18)) break;
      puVar1 = (undefined8 *)(lVar12 + uVar5 * 0x18);
      puVar2 = (undefined8 *)(lVar12 + uVar10 * 0x18);
      local_28 = puVar2[2];
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2[2] = puVar1[2];
      uVar8 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar1[2] = local_28;
      local_38._0_4_ = (undefined4)uVar6;
      local_38._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar7;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      *(undefined4 *)puVar1 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar1 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_30._4_4_;
      uVar10 = uVar5;
      local_38 = uVar6;
      uStack_30 = uVar7;
    } while (1 < uVar11);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403e1888 FUN_1403e1888 body=258 status=ok
// SIG undefined FUN_1403e1888(void)

void FUN_1403e1888(longlong param_1)

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
joined_r0x0001403e18cc:
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
          goto joined_r0x0001403e18cc;
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



// FUNCTION 1403e198c FUN_1403e198c body=663 status=ok
// SIG undefined FUN_1403e198c(void)

void FUN_1403e198c(longlong *param_1)

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
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  
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
  if (*(char *)(lVar5 + 0x41) == '\x01') {
    lVar5 = *(longlong *)(lVar5 + 8);
    iVar3 = *(int *)(lVar5 + 0x110);
    if (iVar3 == 0) {
      uVar14 = 1;
      iVar13 = 0;
      uVar18 = 0;
      iVar8 = 0;
    }
    else {
      puVar9 = *(uint **)(lVar5 + 0x108);
      if (*(uint **)(lVar5 + 0x108) == (uint *)0x0) {
        puVar9 = (uint *)(lVar5 + 0xf8);
      }
      uVar10 = *puVar9;
      if (uVar10 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        uVar18 = 0;
        uVar14 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar14 = uVar18;
        }
        iVar13 = 0;
        do {
          if (uVar14 == uVar18) goto LAB_1403e1adc;
          iVar13 = iVar13 + 0x20;
          uVar10 = puVar9[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar10 == 0);
      }
      else {
        iVar13 = 0;
        uVar18 = 0;
      }
      uVar14 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar14 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar8) {
        iVar8 = iVar3;
      }
    }
    if (iVar8 != iVar3) {
      uVar10 = 0xffffffff;
      do {
        FUN_142e5c096(param_1 + 1,(longlong)iVar8 * 0x18 + *(longlong *)(lVar5 + 0xe8));
        uVar10 = ~(uint)uVar14 & uVar10;
        puVar9 = *(uint **)(lVar5 + 0x108);
        if (*(uint **)(lVar5 + 0x108) == (uint *)0x0) {
          puVar9 = (uint *)(lVar5 + 0xf8);
        }
        iVar4 = *(int *)(lVar5 + 0x110);
        iVar8 = (int)uVar18;
        lVar16 = (longlong)iVar8;
        uVar15 = puVar9[lVar16] & uVar10;
        if (uVar15 == 0) {
          iVar11 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar11 = iVar4 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar12 = iVar11;
          if (iVar11 < iVar8) {
            iVar12 = iVar8;
          }
          if (iVar8 < iVar11) {
            lVar17 = 0;
            do {
              uVar15 = puVar9[lVar16 + lVar17 + 1];
              if (uVar15 != 0) {
                uVar18 = (ulonglong)(iVar8 + (int)lVar17 + 1);
                uVar10 = 0xffffffff;
                goto LAB_1403e1ba5;
              }
              iVar13 = iVar13 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar12 - lVar16 != lVar17);
            uVar10 = 0xffffffff;
            iVar8 = iVar12;
          }
          uVar18 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar4;
        }
        else {
LAB_1403e1ba5:
          uVar14 = (ulonglong)(-uVar15 & uVar15);
          uVar2 = uVar14 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
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
      lVar16 = *(longlong *)(lVar5 + 0x20);
      lVar17 = 0;
      do {
        lVar6 = *(longlong *)(lVar16 + lVar17);
        if ((*(byte *)(*(longlong *)(lVar6 + 8) + 0x74) & 8) != 0) {
          FUN_142e5c096(param_1 + 1,
                        (longlong)*(int *)(lVar6 + 0x15c) * 0x18 +
                        *(longlong *)(*(longlong *)(lVar5 + 8) + 0xe8));
        }
        lVar17 = lVar17 + 8;
      } while ((longlong)iVar3 * 8 != lVar17);
    }
  }
LAB_1403e1adc:
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = iVar7;
  }
  return;
}



// FUNCTION 1403e1c24 FUN_1403e1c24 body=810 status=ok
// SIG undefined FUN_1403e1c24(void)

void FUN_1403e1c24(longlong *param_1)

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
  undefined8 *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  
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
    iVar3 = *(int *)(lVar6 + 0x110);
    if (iVar3 == 0) {
      uVar15 = 1;
      iVar16 = 0;
      uVar17 = 0;
      iVar8 = 0;
    }
    else {
      puVar9 = *(uint **)(lVar6 + 0x108);
      if (*(uint **)(lVar6 + 0x108) == (uint *)0x0) {
        puVar9 = (uint *)(lVar6 + 0xf8);
      }
      uVar11 = *puVar9;
      if (uVar11 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        uVar17 = 0;
        uVar15 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar15 = uVar17;
        }
        iVar16 = 0;
        do {
          if (uVar15 == uVar17) goto LAB_1403e1da5;
          iVar16 = iVar16 + 0x20;
          uVar11 = puVar9[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar11 == 0);
      }
      else {
        iVar16 = 0;
        uVar17 = 0;
      }
      uVar15 = (ulonglong)(-uVar11 & uVar11);
      uVar2 = uVar15 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar8 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if (iVar3 <= iVar8) {
        iVar8 = iVar3;
      }
    }
    if (iVar8 != iVar3) {
      uVar11 = 0xffffffff;
      do {
        FUN_142e5b966(param_1 + 1,(longlong)iVar8 * 0x18 + *(longlong *)(lVar6 + 0xe8));
        uVar11 = ~(uint)uVar15 & uVar11;
        puVar9 = *(uint **)(lVar6 + 0x108);
        if (*(uint **)(lVar6 + 0x108) == (uint *)0x0) {
          puVar9 = (uint *)(lVar6 + 0xf8);
        }
        iVar4 = *(int *)(lVar6 + 0x110);
        iVar8 = (int)uVar17;
        lVar19 = (longlong)iVar8;
        uVar18 = puVar9[lVar19] & uVar11;
        if (uVar18 == 0) {
          iVar12 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar12 = iVar4 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar8) {
            iVar13 = iVar8;
          }
          if (iVar8 < iVar12) {
            lVar20 = 0;
            do {
              uVar18 = puVar9[lVar19 + lVar20 + 1];
              if (uVar18 != 0) {
                uVar17 = (ulonglong)(iVar8 + (int)lVar20 + 1);
                uVar11 = 0xffffffff;
                goto LAB_1403e1ed0;
              }
              iVar16 = iVar16 + 0x20;
              lVar20 = lVar20 + 1;
            } while (iVar13 - lVar19 != lVar20);
            uVar11 = 0xffffffff;
            iVar8 = iVar13;
          }
          uVar17 = (ulonglong)(iVar8 + 1);
          iVar8 = iVar4;
        }
        else {
LAB_1403e1ed0:
          uVar15 = (ulonglong)(-uVar18 & uVar18);
          uVar2 = uVar15 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar8 = (iVar16 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
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
      lVar19 = 0;
      do {
        uVar11 = *(uint *)(*(longlong *)(lVar6 + lVar19) + 0x15c);
        if ((-1 < (int)uVar11) &&
           (lVar20 = *(longlong *)(lVar5 + 8), (int)uVar11 < *(int *)(lVar20 + 0x110))) {
          lVar14 = lVar20 + 0xf8;
          if (*(longlong *)(lVar20 + 0x108) != 0) {
            lVar14 = *(longlong *)(lVar20 + 0x108);
          }
          if ((*(uint *)(lVar14 + (ulonglong)(uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1) != 0) {
            FUN_142e5b966(param_1 + 1,(ulonglong)uVar11 * 0x18 + *(longlong *)(lVar20 + 0xe8));
          }
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar3 * 8 != lVar19);
    }
  }
LAB_1403e1da5:
  if (((*(char *)(lVar5 + 0x41) != '\0') || (0 < *(int *)(lVar5 + 0x38))) ||
     (0 < *(int *)(lVar5 + 0x28))) {
    puVar10 = (undefined8 *)FUN_14001cc68(0x50,0x10);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x128);
    *(undefined8 **)(*(longlong *)(lVar5 + 8) + 0x128) = puVar10;
    if (lVar6 != 0) {
      FUN_14726b39c(lVar6);
      FUN_1400020a8(lVar6);
    }
  }
  if ((iVar7 == 0x60000000) || (iVar7 == 0)) {
    *piVar1 = iVar7;
  }
  return;
}



// FUNCTION 1403e1f4e FUN_1403e1f4e body=1262 status=ok
// SIG undefined FUN_1403e1f4e(void)

void FUN_1403e1f4e(ulonglong *param_1)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong *puVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint *puVar22;
  ulonglong uVar23;
  undefined1 auStack_b8 [32];
  ulonglong *local_98;
  uint local_8c;
  ulonglong local_88;
  uint *local_80;
  longlong local_78;
  ulonglong local_70;
  ulonglong local_68;
  int local_5c;
  int *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  local_5c = *piVar1;
  local_98 = param_1;
  if (local_5c == 1) {
    FUN_140ad26c0();
    GetCurrentThreadId();
    local_5c = *piVar1;
  }
  if ((local_5c == 0x60000000) || (local_5c == 0)) {
    *piVar1 = 0x40000010;
  }
  uVar11 = *local_98;
  local_58 = piVar1;
  if (*(char *)(uVar11 + 0x41) == '\x01') {
    lVar20 = *(longlong *)(uVar11 + 8);
    puVar22 = (uint *)(lVar20 + 0xf8);
    uVar15 = *(uint *)(lVar20 + 0x110);
    if (uVar15 == 0) {
      uVar13 = 1;
      iVar14 = 0;
      uVar11 = 0;
      uVar6 = 0;
    }
    else {
      puVar7 = *(uint **)(lVar20 + 0x108);
      if (*(uint **)(lVar20 + 0x108) == (uint *)0x0) {
        puVar7 = puVar22;
      }
      uVar6 = *puVar7;
      if (uVar6 == 0) {
        iVar14 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar14 = uVar15 - 1;
        }
        uVar11 = 0;
        uVar13 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar13 = uVar11;
        }
        iVar14 = 0;
        do {
          if (uVar13 == uVar11) goto LAB_1403e21da;
          iVar14 = iVar14 + 0x20;
          uVar6 = puVar7[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar6 == 0);
      }
      else {
        iVar14 = 0;
        uVar11 = 0;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar23 = uVar13 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      uVar6 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if ((int)uVar15 <= (int)uVar6) {
        uVar6 = uVar15;
      }
    }
    if (uVar6 != uVar15) {
      uVar12 = 0xffffffff;
      puVar9 = local_98;
      local_80 = puVar22;
      local_78 = lVar20;
      local_70 = (ulonglong)uVar15;
      do {
        local_68 = CONCAT44(local_68._4_4_,iVar14);
        lVar16 = *(longlong *)(lVar20 + 0xe8);
        lVar8 = (longlong)(int)uVar6;
        uVar5 = *(undefined4 *)(*(longlong *)(lVar16 + lVar8 * 0x18) + 0x15c);
        lVar17 = *(longlong *)(*(longlong *)(puVar9[1] + 8) + 0x128);
        uVar15 = *(uint *)(lVar16 + 8 + lVar8 * 0x18);
        cVar2 = *(char *)(lVar16 + 0x10 + lVar8 * 0x18);
        bVar3 = *(byte *)(lVar16 + 0x12 + lVar8 * 0x18);
        bVar4 = *(byte *)(lVar16 + 0x13 + lVar8 * 0x18);
        iVar14 = *(int *)(lVar17 + 0x10);
        *(uint *)(lVar17 + 0x10) = iVar14 + 1U;
        local_8c = uVar12;
        local_88 = uVar11;
        if (*(uint *)(lVar17 + 0x14) < iVar14 + 1U) {
          FUN_141772e26(lVar17 + 8,iVar14);
          puVar9 = local_98;
          lVar20 = local_78;
          puVar22 = local_80;
        }
        *(ulonglong *)(*(longlong *)(lVar17 + 8) + (longlong)iVar14 * 8) =
             (ulonglong)(byte)(cVar2 - 1) << 0x20 | (ulonglong)bVar3 << 0x28 |
             (ulonglong)bVar4 << 0x30 | (ulonglong)uVar15;
        iVar14 = *(int *)(lVar17 + 0x20);
        *(uint *)(lVar17 + 0x20) = iVar14 + 1U;
        if (*(uint *)(lVar17 + 0x24) < iVar14 + 1U) {
          FUN_1447808da((longlong *)(lVar17 + 0x18),iVar14);
          puVar9 = local_98;
          lVar20 = local_78;
          puVar22 = local_80;
        }
        *(undefined4 *)(*(longlong *)(lVar17 + 0x18) + (longlong)iVar14 * 4) = uVar5;
        uVar12 = local_8c & ~(uint)uVar13;
        puVar7 = *(uint **)(lVar20 + 0x108);
        if (*(uint **)(lVar20 + 0x108) == (uint *)0x0) {
          puVar7 = puVar22;
        }
        uVar15 = *(uint *)(lVar20 + 0x110);
        iVar10 = (int)local_88;
        lVar16 = (longlong)iVar10;
        uVar6 = puVar7[lVar16] & uVar12;
        uVar11 = local_88;
        iVar14 = (int)local_68;
        if (uVar6 == 0) {
          iVar18 = uVar15 + 0x1e;
          if (-1 < (int)(uVar15 - 1)) {
            iVar18 = uVar15 - 1;
          }
          iVar18 = iVar18 >> 5;
          iVar14 = (int)local_68 + 0x20;
          iVar19 = iVar18;
          if (iVar18 < iVar10) {
            iVar19 = iVar10;
          }
          lVar20 = local_78;
          puVar22 = local_80;
          if (iVar10 < iVar18) {
            lVar17 = 0;
            do {
              uVar6 = puVar7[lVar16 + lVar17 + 1];
              if (uVar6 != 0) {
                uVar12 = 0xffffffff;
                uVar11 = (ulonglong)(iVar10 + (int)lVar17 + 1);
                goto LAB_1403e236e;
              }
              iVar14 = iVar14 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar19 - lVar16 != lVar17);
            uVar12 = 0xffffffff;
            lVar16 = (longlong)iVar19;
          }
          uVar11 = lVar16 + 1U & 0xffffffff;
          puVar9 = local_98;
          uVar6 = uVar15;
        }
        else {
LAB_1403e236e:
          uVar13 = (ulonglong)(-uVar6 & uVar6);
          uVar23 = uVar13 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          uVar6 = (iVar14 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if ((int)uVar15 <= (int)uVar6) {
            uVar6 = uVar15;
          }
        }
      } while (uVar6 != (uint)local_70);
    }
  }
  else {
    local_88 = uVar11;
    FUN_144958a06(*(undefined8 *)(uVar11 + 0x30),*(undefined4 *)(uVar11 + 0x38),uVar11,&local_49);
    iVar14 = *(int *)(local_88 + 0x38);
    if ((longlong)iVar14 != 0) {
      lVar20 = *(longlong *)(local_88 + 0x30);
      lVar16 = 0;
      puVar9 = local_98;
      uVar11 = local_88;
      uVar13 = 0xffffffff;
      do {
        uVar15 = *(uint *)(lVar20 + lVar16);
        uVar23 = (ulonglong)uVar15;
        if (((uVar15 != (uint)uVar13) && (-1 < (int)uVar15)) &&
           (lVar17 = *(longlong *)(uVar11 + 8), (int)uVar15 < *(int *)(lVar17 + 0x110))) {
          lVar8 = lVar17 + 0xf8;
          if (*(longlong *)(lVar17 + 0x108) != 0) {
            lVar8 = *(longlong *)(lVar17 + 0x108);
          }
          if ((*(uint *)(lVar8 + (ulonglong)(uVar15 >> 5) * 4) >> (uVar15 & 0x1f) & 1) != 0) {
            lVar17 = *(longlong *)(lVar17 + 0xe8);
            uVar15 = *(uint *)(*(longlong *)(lVar17 + uVar23 * 0x18) + 0x15c);
            lVar8 = *(longlong *)(*(longlong *)(puVar9[1] + 8) + 0x128);
            uVar21 = (ulonglong)*(uint *)(lVar17 + 8 + uVar23 * 0x18);
            cVar2 = *(char *)(lVar17 + 0x10 + uVar23 * 0x18);
            bVar3 = *(byte *)(lVar17 + 0x12 + uVar23 * 0x18);
            bVar4 = *(byte *)(lVar17 + 0x13 + uVar23 * 0x18);
            iVar10 = *(int *)(lVar8 + 0x10);
            *(uint *)(lVar8 + 0x10) = iVar10 + 1U;
            uVar13 = (longlong)iVar10;
            if (*(uint *)(lVar8 + 0x14) < iVar10 + 1U) {
              local_8c = uVar15;
              local_70 = (longlong)iVar10;
              local_68 = uVar21;
              FUN_141772e26(lVar8 + 8);
              uVar13 = local_70;
              puVar9 = local_98;
              uVar11 = local_88;
              uVar21 = local_68;
              uVar15 = local_8c;
            }
            *(ulonglong *)(*(longlong *)(lVar8 + 8) + uVar13 * 8) =
                 (ulonglong)(byte)(cVar2 - 1) << 0x20 | (ulonglong)bVar3 << 0x28 |
                 (ulonglong)bVar4 << 0x30 | uVar21;
            iVar10 = *(int *)(lVar8 + 0x20);
            *(uint *)(lVar8 + 0x20) = iVar10 + 1U;
            if (*(uint *)(lVar8 + 0x24) < iVar10 + 1U) {
              FUN_1447808da((longlong *)(lVar8 + 0x18),iVar10);
              puVar9 = local_98;
              uVar11 = local_88;
            }
            *(uint *)(*(longlong *)(lVar8 + 0x18) + (longlong)iVar10 * 4) = uVar15;
          }
        }
        lVar16 = lVar16 + 4;
        uVar13 = uVar23;
      } while ((longlong)iVar14 * 4 != lVar16);
    }
  }
LAB_1403e21da:
  if ((local_5c == 0x60000000) || (local_5c == 0)) {
    *local_58 = local_5c;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403e243e FUN_1403e243e body=73 status=ok
// SIG undefined FUN_1403e243e(void)

void FUN_1403e243e(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  (**(code **)(param_1 + 0x18))(*(undefined8 *)(param_1 + 0x10));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e2488 FUN_1403e2488 body=198 status=ok
// SIG undefined FUN_1403e2488(void)

void FUN_1403e2488(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  uint local_48;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = (uint *)*param_3;
  puVar2 = (uint *)param_3[1];
  if (puVar3 != puVar2) {
    do {
      uVar1 = *puVar3;
      local_44 = uVar1 & 0x3fffff;
      local_48 = uVar1 >> 0x16;
      if (uVar1 == 0xffffffff) {
        local_44 = 0xffffffff;
        local_48 = 0xffffffff;
      }
      FUN_1403e2550(*param_1 + 0xe8,local_4c,&local_48);
      local_48 = *puVar3 >> 0x16;
      FUN_144984904(*param_1 + 0x98,local_4c,&local_48,0);
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403e2550 FUN_1403e2550 body=1258 status=ok
// SIG undefined FUN_1403e2550(void)

void FUN_1403e2550(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined4 uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_144869a3c(param_1,iVar18);
    }
    iVar23 = (int)param_1[5];
    if (iVar23 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar5 = iVar23 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar9 = iVar23 + 1;
    iVar19 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar19 = iVar23;
    }
    if (iVar19 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar23) {
        iVar5 = iVar23;
        if (iVar23 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar21 = iVar23 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar21) {
              uVar12 = uVar21;
            }
          }
          else {
            uVar12 = uVar21 + (uVar21 * 3 >> 3) + 0x10;
          }
          uVar10 = (ulonglong)(uVar12 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar20 = (uint)(uVar10 + 0xf);
              if (uVar12 < 0x1ffd) {
                uVar10 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 + 0xf >> 4]];
              }
              else {
                uVar11 = (ulonglong)(uVar20 & 0xfffffff0);
                if (uVar11 < 0x7ff1) {
                  bVar8 = (&DAT_14c841e00)[uVar20 >> 4];
                  uVar17 = 0x32;
                  if (0x32 < bVar8) {
                    uVar17 = (ulonglong)bVar8;
                  }
                  uVar22 = 0x32 - (ulonglong)bVar8;
                  do {
                    uVar10 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar22 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar22 & 0xffffffff] & 0xf) == 0) goto LAB_1403e2926;
                    lVar7 = uVar17 + 1 + uVar22;
                    uVar22 = uVar22 - 1;
                  } while (lVar7 != 0x33);
                }
                uVar10 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar10 = (ulonglong)DAT_14c841df8;
                }
                uVar10 = -uVar10 & (uVar11 + uVar10) - 1;
              }
            }
            else {
              uVar10 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar10,0);
              iVar5 = (int)param_1[5];
            }
          }
LAB_1403e2926:
          iVar6 = (int)(uVar10 >> 2);
          iVar9 = -0x20;
          if ((int)uVar21 <= iVar6) {
            iVar9 = iVar6 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar14,iVar5);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar5 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar5 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar14;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar5 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar23 & 0x1f;
    puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar7 = (longlong)iVar18;
    iVar23 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar23;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar23 * 0x10) = 0xffffffff;
    }
  }
  iVar23 = 1;
  uVar21 = 1 << ((byte)iVar18 & 0x1f);
  plVar14 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar14 = param_1 + 2;
  }
  iVar5 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar5 = iVar18;
  }
  puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | uVar21;
  lVar2 = *param_1;
  lVar7 = lVar7 * 0x10;
  uVar3 = *param_3;
  *(undefined8 *)(lVar2 + lVar7) = uVar3;
  *(undefined4 *)(lVar2 + 8 + lVar7) = 0xffffffff;
  uVar24 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar25 = uVar24 >> 0xd ^ (int)uVar3 - uVar24;
  uVar12 = uVar25 << 8 ^ (-0x61c88647 - uVar25) - uVar24;
  uVar20 = uVar12 >> 0xd ^ (uVar24 - uVar25) - uVar12;
  uVar25 = uVar20 >> 0xc ^ (uVar25 - uVar12) - uVar20;
  uVar26 = uVar25 << 0x10 ^ (uVar12 - uVar20) - uVar25;
  uVar12 = uVar26 >> 5 ^ (uVar20 - uVar25) - uVar26;
  uVar25 = uVar12 >> 3 ^ (uVar25 - uVar26) - uVar12;
  uVar20 = uVar25 << 10 ^ (uVar26 - uVar12) - uVar25;
  uVar12 = uVar20 >> 0xf ^ uVar12 - (uVar25 + uVar20);
  uVar20 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar20 != 0) && (uVar20 != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & uVar12) * 4);
    if (iVar9 != -1) {
      lVar4 = *param_1;
      do {
        lVar15 = (longlong)iVar9 * 0x10;
        if ((*(int *)(lVar4 + lVar15) == (int)uVar3) && (*(uint *)(lVar4 + 4 + lVar15) == uVar24)) {
          *(undefined8 *)(lVar15 + lVar4) = uVar3;
          lVar7 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar7 + (longlong)(int)param_1[6] * 0x10) = iVar18;
          }
          *(undefined4 *)(lVar7 + (longlong)iVar18 * 0x10) = 0xffffffff;
          uVar13 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar13 = (undefined4)param_1[6];
          }
          *(undefined4 *)(lVar7 + (longlong)iVar18 * 0x10 + 4) = uVar13;
          *(int *)(param_1 + 6) = iVar18;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar14 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar14 = (longlong *)param_1[4];
          }
          puVar1 = (uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4);
          *puVar1 = *puVar1 & ~uVar21;
          iVar18 = iVar9;
          goto LAB_1403e2774;
        }
        iVar9 = *(int *)((undefined8 *)(lVar15 + lVar4) + 1);
      } while (iVar9 != -1);
    }
  }
  if (3 < uVar20) {
    uVar10 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar23 = 1 << ((byte)lVar4 & 0x1f);
  }
  if (((int)uVar20 < 1) || (iVar23 <= (int)param_1[9])) {
    uVar12 = (int)param_1[9] - 1U & uVar12;
    *(uint *)(lVar2 + lVar7 + 0xc) = uVar12;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(undefined4 *)(lVar2 + lVar7 + 8) =
         *(undefined4 *)
          ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar18;
  }
  else {
    *(int *)(param_1 + 9) = iVar23;
    FUN_1403e2a3a(param_1);
  }
LAB_1403e2774:
  *param_2 = iVar18;
  return;
}



// FUNCTION 1403e2a3a FUN_1403e2a3a body=693 status=ok
// SIG undefined FUN_1403e2a3a(void)

void FUN_1403e2a3a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar10 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar6 * 0x10;
        uVar3 = *(uint *)(lVar12 + 4 + lVar11);
        uVar15 = uVar3 >> 0xd ^ *(int *)(lVar12 + lVar11) - uVar3;
        uVar9 = uVar15 << 8 ^ (-0x61c88647 - uVar3) - uVar15;
        uVar3 = uVar9 >> 0xd ^ (uVar3 - uVar15) - uVar9;
        uVar15 = uVar3 >> 0xc ^ (uVar15 - uVar9) - uVar3;
        uVar16 = uVar15 << 0x10 ^ (uVar9 - uVar3) - uVar15;
        uVar3 = uVar16 >> 5 ^ (uVar3 - uVar15) - uVar16;
        uVar9 = uVar3 >> 3 ^ (uVar15 - uVar16) - uVar3;
        uVar15 = uVar9 << 10 ^ (uVar16 - uVar3) - uVar9;
        uVar14 = (longlong)(int)(uVar15 >> 0xf ^ uVar3 - (uVar9 + uVar15)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0xc + lVar11) = iVar13;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar12 + 8 + lVar11) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_58[2];
        if ((longlong *)local_58[2] == (longlong *)0x0) {
          plVar7 = local_58;
        }
        iVar13 = (int)local_58[3];
        lVar12 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar6 = iVar13 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar2 - lVar12 == lVar11) goto LAB_1403e2ca8;
          }
          iVar4 = iVar4 + (int)lVar11 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar14 = uVar8 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar13);
    }
  }
LAB_1403e2ca8:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e2cf0 FUN_1403e2cf0 body=1813 status=ok
// SIG undefined FUN_1403e2cf0(void)

void FUN_1403e2cf0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined4 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  uStack_80 = 0;
  if (DAT_14cb259f8 != 0) {
    if (DAT_14cb25ab0 == '\x01') {
      local_b8 = 0;
      uStack_b0 = 0;
      lVar17 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
      uVar18 = 0;
      if (lVar17 != 0) {
        plVar15 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
        plVar16 = plVar15 + lVar17 * 2;
        do {
          uVar8 = uStack_b0;
          lVar17 = *plVar15;
          plVar4 = (longlong *)plVar15[1];
          if (plVar4 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
            UNLOCK();
          }
          if ((lVar17 != 0) && (*(longlong *)(lVar17 + 0xf0) != 0)) {
            if (plVar4 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
              UNLOCK();
            }
            lVar20 = (longlong)(int)uStack_b0;
            uVar11 = (int)uStack_b0 + 1;
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar11);
            if (uStack_b0._4_4_ < uVar11) {
              FUN_144796c16(&local_b8,uVar8 & 0xffffffff);
            }
            *(longlong *)(local_b8 + lVar20 * 0x10) = lVar17;
            *(longlong **)(local_b8 + 8 + lVar20 * 0x10) = plVar4;
          }
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
          lVar17 = local_b8;
          plVar15 = plVar15 + 2;
        } while (plVar15 != plVar16);
        lVar20 = (longlong)(int)uStack_b0;
        uVar18 = 0;
        if (lVar20 != 0) {
          lVar21 = 0;
          do {
            uVar8 = uStack_80;
            lVar19 = *(longlong *)(lVar17 + lVar21);
            uVar6 = *(undefined8 *)(lVar19 + 0xb0);
            uVar7 = *(undefined8 *)(lVar19 + 0xb8);
            uVar14 = *(undefined8 *)(lVar19 + 0xc0);
            lVar19 = (longlong)(int)uStack_80;
            uVar11 = (int)uStack_80 + 1;
            uStack_80 = CONCAT44(uStack_80._4_4_,uVar11);
            if (uStack_80._4_4_ < uVar11) {
              FUN_1403e3958(&local_88,uVar8 & 0xffffffff);
            }
            puVar3 = (undefined8 *)(local_88 + lVar19 * 0x18);
            *puVar3 = uVar6;
            puVar3[1] = uVar7;
            *(undefined8 *)(local_88 + 0x10 + lVar19 * 0x18) = uVar14;
            lVar21 = lVar21 + 0x10;
          } while (lVar20 * 0x10 != lVar21);
          uVar18 = (int)uStack_b0;
        }
      }
    }
    else {
      local_b8 = 0;
      uStack_b0 = 0;
      uVar18 = 0;
    }
    FUN_144796acb(local_b8,uVar18);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  iVar13 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar13 != 0) {
    lVar17 = *(longlong *)(param_1 + 0x60);
    lVar20 = 0;
    do {
      iVar12 = *(int *)(lVar17 + 4 + lVar20);
      if ((((((iVar12 != 0) && (uVar11 = *(uint *)(lVar17 + lVar20), -1 < (int)uVar11)) &&
            ((int)uVar11 < DAT_14c9647dc)) &&
           ((plVar15 = (longlong *)
                       ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
            plVar15 != (longlong *)0x0 && ((int)plVar15[2] == iVar12)))) &&
          ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)) &&
         (plVar15 = (longlong *)*plVar15, plVar15 != (longlong *)0x0)) {
        (**(code **)(*plVar15 + 0x9f8))(plVar15,&local_88);
      }
      lVar20 = lVar20 + 8;
    } while ((longlong)iVar13 * 8 != lVar20);
  }
  local_98 = 0;
  uStack_90 = 0;
  iVar13 = *(int *)(param_1 + 0x78);
  local_c0 = param_1;
  if ((longlong)iVar13 == 0) {
    bVar22 = false;
    fVar23 = 1.0;
  }
  else {
    lVar17 = *(longlong *)(param_1 + 0x70);
    fVar23 = 1.0;
    lVar20 = 0;
    bVar22 = false;
    do {
      iVar12 = *(int *)(lVar17 + 4 + lVar20);
      if ((((iVar12 != 0) && (uVar11 = *(uint *)(lVar17 + lVar20), -1 < (int)uVar11)) &&
          (((int)uVar11 < DAT_14c9647dc &&
           (((plVar15 = (longlong *)
                        ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
             plVar15 != (longlong *)0x0 && ((int)plVar15[2] == iVar12)) &&
            ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)))))) && (lVar21 = *plVar15, lVar21 != 0)) {
        if (*(char *)(lVar21 + 0x6f4) == '\x01') {
          if (*(float *)(lVar21 + 0x744) <= fVar23) {
            fVar23 = *(float *)(lVar21 + 0x744);
          }
          bVar22 = true;
        }
        lVar19 = *(longlong *)(lVar21 + 0x720);
        if (lVar19 == 0) {
          uVar14 = FUN_140d47262();
          lVar19 = FUN_14477b664(uVar14);
          *(longlong *)(lVar21 + 0x720) = lVar19;
        }
        if (*(longlong *)(lVar21 + 0x728) == 0) {
          if ((lVar19 != 0) && (*(longlong *)(lVar21 + 0x718) != 0)) {
            plVar15 = *(longlong **)(lVar19 + 0xb8);
            if ((plVar15 == (longlong *)0x0) ||
               (cVar10 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar10 == '\0')) {
              *(undefined8 *)(lVar21 + 0x728) = 0;
            }
            else {
              uVar14 = (**(code **)(*plVar15 + 0x110))(plVar15);
              lVar19 = FUN_144aff482(uVar14,(longlong *)(lVar21 + 0x718));
              *(longlong *)(lVar21 + 0x728) = lVar19;
              if (lVar19 != 0) goto LAB_1403e3153;
            }
          }
        }
        else {
LAB_1403e3153:
          uVar8 = uStack_90;
          lVar19 = (longlong)(int)uStack_90;
          uVar11 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar11);
          if (uStack_90._4_4_ < uVar11) {
            FUN_1403e3ba8(&local_98,uVar8 & 0xffffffff);
          }
          lVar19 = lVar19 * 0x20;
          lVar5 = local_98 + lVar19;
          puVar3 = (undefined8 *)(local_98 + 0x10 + lVar19);
          *puVar3 = 0;
          puVar3[1] = 0;
          *(undefined8 *)(local_98 + lVar19) = 0;
          ((undefined8 *)(local_98 + lVar19))[1] = 0;
          *(undefined8 *)(local_98 + lVar19) = *(undefined8 *)(lVar21 + 0x718);
          if (*(longlong *)(lVar21 + 0x720) != 0) {
            *(undefined8 *)(lVar5 + 0x10) = 0;
          }
          uVar14 = FUN_14477b664();
          uVar14 = FUN_14477b664(uVar14);
          *(undefined8 *)(lVar5 + 8) = uVar14;
          *(undefined8 *)(lVar5 + 0x10) = *(undefined8 *)(lVar21 + 0x728);
          *(undefined4 *)(lVar5 + 0x18) = *(undefined4 *)(lVar21 + 0x748);
        }
      }
      lVar20 = lVar20 + 8;
    } while ((longlong)iVar13 * 8 != lVar20);
  }
  lVar17 = *(longlong *)(local_c0 + 0x80);
  if (lVar17 != 0) {
    *(undefined4 *)(lVar17 + 0xa0) = 0;
    if (*(int *)(lVar17 + 0xa4) != 0) {
      FUN_1403e3ace(lVar17 + 0x98,0);
    }
    FUN_1403e3406(lVar17 + 0x98,&local_98);
  }
  lVar17 = local_c0;
  if (bVar22) {
    fVar23 = fVar23 * 100.0;
  }
  else {
    fVar23 = 0.0;
  }
  *(float *)(local_c0 + 0x40) = fVar23;
  lVar20 = *(longlong *)(local_c0 + 0x50);
  if (lVar20 == 0) {
    uVar14 = FUN_1407f787c();
    lVar20 = FUN_14477b664(uVar14);
    *(longlong *)(lVar17 + 0x50) = lVar20;
  }
  lVar21 = *(longlong *)(lVar17 + 0x58);
  if (lVar21 == 0) {
    if ((lVar20 == 0) || (*(longlong *)(lVar17 + 0x48) == 0)) goto LAB_1403e2f97;
    plVar15 = *(longlong **)(lVar20 + 0xb8);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar10 == '\0')) {
      *(undefined8 *)(local_c0 + 0x58) = 0;
      lVar17 = local_c0;
      goto LAB_1403e2f97;
    }
    uVar14 = (**(code **)(*plVar15 + 0x110))(plVar15);
    lVar21 = FUN_144aff482(uVar14,(longlong *)(lVar17 + 0x48));
    *(longlong *)(local_c0 + 0x58) = lVar21;
    lVar17 = local_c0;
    if (lVar21 == 0) goto LAB_1403e2f97;
  }
  if (DAT_14cb259f8 != 0) {
    FUN_1447eec96(DAT_14cb259f8,lVar21,fVar23,0);
  }
LAB_1403e2f97:
  if (*(int *)(lVar17 + 0x98) != 0) {
    iVar13 = *(int *)(lVar17 + 0xa0);
    if (*(int *)(lVar17 + 0x98) <= iVar13) {
      *(undefined4 *)(lVar17 + 0xa0) = 0;
      iVar13 = 0;
    }
    lVar20 = *(longlong *)(lVar17 + 0x90);
    plVar15 = *(longlong **)(lVar20 + 8 + (longlong)iVar13 * 0x10);
    if (plVar15 == (longlong *)0x0) {
LAB_1403e333c:
      *(int *)(lVar17 + 0xa0) = iVar13 + 1;
    }
    else {
      iVar12 = (int)plVar15[1];
      do {
        if (iVar12 == 0) {
          iVar13 = *(int *)(lVar17 + 0xa0);
          goto LAB_1403e333c;
        }
        LOCK();
        iVar9 = (int)plVar15[1];
        bVar22 = iVar12 == iVar9;
        if (bVar22) {
          *(int *)(plVar15 + 1) = iVar12 + 1;
          iVar9 = iVar12;
        }
        iVar12 = iVar9;
        UNLOCK();
      } while (!bVar22);
      lVar20 = *(longlong *)(lVar20 + (longlong)iVar13 * 0x10);
      if (lVar20 != 0) {
        FUN_1403e3ca8(lVar20,&local_b8);
        iVar13 = *(int *)(lVar17 + 0x68);
        if ((longlong)iVar13 == 0) {
          lVar17 = 0;
        }
        else {
          lVar21 = *(longlong *)(lVar17 + 0x60);
          lVar19 = 0;
          lVar17 = 0;
          do {
            iVar12 = *(int *)(lVar21 + 4 + lVar19);
            if (((((iVar12 != 0) && (uVar11 = *(uint *)(lVar21 + lVar19), -1 < (int)uVar11)) &&
                 ((int)uVar11 < DAT_14c9647dc)) &&
                (((plVar16 = (longlong *)
                             ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
                  plVar16 != (longlong *)0x0 && ((int)plVar16[2] == iVar12)) &&
                 (((*(uint *)(plVar16 + 1) & 0x10200000) == 0 && (lVar5 = *plVar16, lVar5 != 0))))))
               && (((lVar17 == 0 || (*(int *)(lVar17 + 0x6f8) < *(int *)(lVar5 + 0x6f8))) &&
                   (cVar10 = FUN_1403e3464(lVar5,&local_b8), cVar10 != '\0')))) {
              lVar17 = lVar5;
            }
            lVar19 = lVar19 + 8;
          } while ((longlong)iVar13 * 8 != lVar19);
        }
        FUN_1403e3e9e(lVar20,lVar17);
        lVar17 = local_c0;
      }
      *(int *)(lVar17 + 0xa0) = *(int *)(lVar17 + 0xa0) + 1;
      LOCK();
      plVar16 = plVar15 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar15)(plVar15);
        LOCK();
        piVar2 = (int *)((longlong)plVar15 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403e3406 FUN_1403e3406 body=94 status=ok
// SIG undefined FUN_1403e3406(void)

void FUN_1403e3406(longlong *param_1,undefined8 *param_2)

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
    FUN_1403e3ba8(param_1,iVar2);
  }
  FUN_1403e3b2e((longlong)iVar2 * 0x20 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1403e3464 FUN_1403e3464 body=534 status=ok
// SIG undefined FUN_1403e3464(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1403e3464(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar16 = *param_2 - *(double *)(param_1 + 0x260);
  dVar17 = param_2[1] - *(double *)(param_1 + 0x268);
  dVar12 = param_2[2] - *(double *)(param_1 + 0x270);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x280);
  dVar5 = -*(double *)(param_1 + 0x240);
  dVar6 = -*(double *)(param_1 + 0x248);
  dVar14 = *(double *)(param_1 + 0x250) * -1.0;
  dVar15 = *(double *)(param_1 + 600) * 1.0;
  dVar18 = dVar16 * dVar14 - dVar5 * dVar12;
  dVar7 = dVar17 * dVar5 - dVar16 * dVar6;
  dVar8 = dVar12 * dVar6 - dVar17 * dVar14;
  dVar8 = dVar8 + dVar8;
  dVar18 = dVar18 + dVar18;
  dVar7 = dVar7 + dVar7;
  auVar13 = divpd(_DAT_149934d80,auVar1);
  local_98 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar13._0_8_) *
             ((dVar7 * dVar6 - dVar18 * dVar14) + dVar15 * dVar8 + dVar16);
  dStack_90 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar13._8_8_) *
              (*(double *)(param_1 + 0x240) * dVar7 + dVar14 * dVar8 + dVar15 * dVar18 + dVar17);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x290))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x290))) *
             (dVar15 * dVar7 + dVar12 + (dVar18 * dVar5 - dVar8 * dVar6));
  iVar2 = *(int *)(param_1 + 0x628);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x620);
    lVar11 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar11);
      if (plVar4 != (longlong *)0x0) {
        cVar9 = (**(code **)(*plVar4 + 0x2b0))(plVar4,&local_98);
        if (cVar9 != '\0') {
          uVar10 = 1;
          goto LAB_1403e3634;
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar2 * 8 != lVar11);
  }
  uVar10 = 0;
LAB_1403e3634:
  if ((local_80 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e367c FUN_1403e367c body=71 status=ok
// SIG undefined FUN_1403e367c(void)

undefined1 FUN_1403e367c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [38];
  undefined1 local_12;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_11 = 0;
  FUN_1403e36c4(param_1,param_2,&local_11,&local_12);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e36c4 FUN_1403e36c4 body=660 status=ok
// SIG undefined FUN_1403e36c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403e36c4(longlong param_1,double *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 auVar1 [16];
  int iVar2;
  double dVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar19;
  undefined1 auVar18 [16];
  
  dVar11 = *param_2 - *(double *)(param_1 + 0x50);
  dVar10 = param_2[1] - *(double *)(param_1 + 0x58);
  dVar12 = param_2[2] - *(double *)(param_1 + 0x60);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar17 = -*(double *)(param_1 + 0x30);
  dVar19 = -*(double *)(param_1 + 0x38);
  dVar13 = *(double *)(param_1 + 0x40) * -1.0;
  dVar14 = *(double *)(param_1 + 0x48) * 1.0;
  dVar16 = dVar11 * dVar13 - dVar17 * dVar12;
  dVar15 = dVar10 * dVar17 - dVar11 * dVar19;
  dVar3 = dVar12 * dVar19 - dVar10 * dVar13;
  dVar3 = dVar3 + dVar3;
  dVar16 = dVar16 + dVar16;
  dVar15 = dVar15 + dVar15;
  auVar18 = divpd(_DAT_149934d80,auVar1);
  dVar9 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar18._0_8_) *
          ((dVar15 * dVar19 - dVar16 * dVar13) + dVar14 * dVar3 + dVar11);
  dVar10 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar18._8_8_) *
           (*(double *)(param_1 + 0x30) * dVar15 + dVar13 * dVar3 + dVar14 * dVar16 + dVar10);
  dVar11 = *(double *)(param_1 + 0x80);
  *param_3 = 0;
  *param_4 = 0;
  if ((((*(double *)(param_1 + 0xa8) <= dVar9) &&
       (dVar9 < *(double *)(param_1 + 0xc0) || dVar9 == *(double *)(param_1 + 0xc0))) &&
      (*(double *)(param_1 + 0xb0) <= dVar10)) &&
     (dVar10 < *(double *)(param_1 + 200) || dVar10 == *(double *)(param_1 + 200))) {
    iVar2 = *(int *)(param_1 + 0x98);
    if (0 < (longlong)iVar2) {
      dVar11 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar11)) & (ulonglong)(1.0 / dVar11)
                       ) * (dVar12 + dVar14 * dVar15 + (dVar16 * dVar17 - dVar3 * dVar19));
      iVar6 = iVar2 + -1;
      lVar5 = 8;
      bVar8 = false;
      bVar4 = false;
      lVar7 = 0;
      do {
        dVar15 = *(double *)(*(longlong *)(param_1 + 0x90) + lVar5);
        dVar3 = *(double *)(*(longlong *)(param_1 + 0x90) + 8 + (longlong)iVar6 * 0x18);
        if (((dVar15 < dVar10) && (dVar10 <= dVar3)) || ((dVar10 <= dVar15 && (dVar3 < dVar10)))) {
          bVar8 = bVar8 != (double)*(float *)(*(longlong *)(param_1 + 0xe0) + 4 + lVar7 * 8) *
                           dVar10 + (double)*(float *)(*(longlong *)(param_1 + 0xe0) + lVar7 * 8) <
                           dVar9;
          *param_4 = bVar8;
          bVar4 = bVar8;
        }
        iVar6 = (int)lVar7;
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 0x18;
      } while (iVar2 != lVar7);
      if (bVar4) {
        if (*(char *)(param_1 + 0xa4) == '\0') {
          if (dVar11 < *(double *)(param_1 + 0xb8)) {
            bVar4 = false;
          }
          else {
            bVar4 = dVar11 <= *(double *)(param_1 + 0xd0);
          }
        }
        else {
          bVar4 = true;
        }
        *param_3 = bVar4;
      }
    }
  }
  return;
}



// FUNCTION 1403e3958 FUN_1403e3958 body=373 status=ok
// SIG undefined FUN_1403e3958(void)

void FUN_1403e3958(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403e39e1;
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
LAB_1403e39e1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1403e3ace FUN_1403e3ace body=96 status=ok
// SIG undefined FUN_1403e3ace(void)

void FUN_1403e3ace(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
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



// FUNCTION 1403e3b2e FUN_1403e3b2e body=122 status=ok
// SIG undefined FUN_1403e3b2e(void)

void FUN_1403e3b2e(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      *(undefined4 *)(param_1 + 0x18 + lVar2) = *(undefined4 *)(param_2 + 0x18 + lVar2);
      lVar2 = lVar2 + 0x20;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1403e3ba8 FUN_1403e3ba8 body=255 status=ok
// SIG undefined FUN_1403e3ba8(void)

void FUN_1403e3ba8(longlong param_1,int param_2)

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



// FUNCTION 1403e3ca8 FUN_1403e3ca8 body=318 status=ok
// SIG undefined FUN_1403e3ca8(void)

undefined8 * FUN_1403e3ca8(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0x20) != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar2 != 0) && (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb7d678) {
        FUN_144b3d300(&DAT_14cb7d678);
        if (DAT_14cb7d678 == -1) {
          DAT_14cb7d670 = 0;
          _Init_thread_footer(&DAT_14cb7d678);
        }
      }
      (**(code **)(**(longlong **)(param_1 + 0x20) + 0x28))
                (*(longlong **)(param_1 + 0x20),local_78,DAT_14cb7d670,0);
      *param_2 = local_58;
      param_2[1] = uStack_50;
      param_2[2] = local_48;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1403e3de8 FUN_1403e3de8 body=181 status=ok
// SIG undefined FUN_1403e3de8(void)

undefined8 * FUN_1403e3de8(longlong param_1,undefined8 *param_2,undefined8 *param_3,char *param_4)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auStack_58 [47];
  char local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_29 = '\0';
  FUN_1403e36c4(param_1,param_3,param_4);
  if (*param_4 == '\x01') {
    param_2[2] = param_3[2];
    uVar1 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar1;
  }
  else {
    if (local_29 != '\x01') {
      FUN_1403e45ce(param_1,param_2,param_3);
      if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
    dVar2 = (double)param_3[2];
    if (*(double *)(param_1 + 0xd0) <= (double)param_3[2]) {
      dVar2 = *(double *)(param_1 + 0xd0);
    }
    if (dVar2 <= *(double *)(param_1 + 0xb8)) {
      dVar2 = *(double *)(param_1 + 0xb8);
    }
    uVar1 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar1;
    param_2[2] = dVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1403e3e9e FUN_1403e3e9e body=1521 status=ok
// SIG undefined FUN_1403e3e9e(void)

void FUN_1403e3e9e(longlong *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  longlong *plVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
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
  puVar2 = (uint *)(param_1 + 0x61);
  cVar8 = FUN_1403e4490(puVar2);
  if (cVar8 != '\0') goto LAB_1403e3ed6;
  if (param_2 == 0) {
    cVar8 = FUN_144729dda(puVar2);
    uVar11 = local_78;
    if (cVar8 != '\0') {
      lVar12 = FUN_14479d2ce(puVar2);
      lVar15 = *(longlong *)(lVar12 + 0x708);
      if (lVar15 == 0) {
        uVar11 = FUN_1405b1a32();
        lVar15 = FUN_14477b664(uVar11);
        *(longlong *)(lVar12 + 0x708) = lVar15;
      }
      if (*(longlong *)(lVar12 + 0x710) == 0) {
        uVar11 = local_78;
        if ((lVar15 != 0) && (*(longlong *)(lVar12 + 0x700) != 0)) {
          plVar13 = *(longlong **)(lVar15 + 0xb8);
          if ((plVar13 == (longlong *)0x0) ||
             (cVar8 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar8 == '\0')) {
            *(undefined8 *)(lVar12 + 0x710) = 0;
            uVar11 = local_78;
          }
          else {
            uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
            lVar15 = FUN_144aff482(uVar11,(longlong *)(lVar12 + 0x700));
            *(longlong *)(lVar12 + 0x710) = lVar15;
            uVar11 = local_78;
            if (lVar15 != 0) goto LAB_1403e4183;
          }
        }
      }
      else {
LAB_1403e4183:
        iVar9 = 0;
        (**(code **)(*param_1 + 0x60))(param_1,0);
        plVar13 = param_1 + 0x62;
        plVar3 = param_1 + 100;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = plVar3;
        if ((int)param_1[0x67] != 0) {
          FUN_1449c0562(&local_68);
          iVar9 = (int)param_1[0x67];
        }
        local_78 = local_58;
        uVar11 = local_78;
        local_70 = local_50;
        local_6c = local_4c;
        local_88 = local_68;
        local_80 = local_60;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_90 = plVar13;
        if ((local_78._4_4_ != iVar9) || (local_60 != plVar3)) {
          iVar14 = local_78._4_4_;
          local_78 = uVar11;
          do {
            lVar15 = *local_90;
            plVar5 = *(longlong **)(lVar15 + 8 + (longlong)iVar14 * 0x18);
            if (plVar5 != (longlong *)0x0) {
              iVar10 = (int)plVar5[1];
              do {
                if (iVar10 == 0) goto LAB_1403e426d;
                LOCK();
                iVar7 = (int)plVar5[1];
                bVar16 = iVar10 == iVar7;
                if (bVar16) {
                  *(int *)(plVar5 + 1) = iVar10 + 1;
                  iVar7 = iVar10;
                }
                iVar10 = iVar7;
                UNLOCK();
              } while (!bVar16);
              plVar6 = *(longlong **)(lVar15 + (longlong)iVar14 * 0x18);
              if (plVar6 != (longlong *)0x0) {
                (**(code **)(*plVar6 + 0x60))(plVar6,0);
              }
              LOCK();
              plVar6 = plVar5 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
LAB_1403e426d:
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
            FUN_1449c0562(&local_88);
            iVar14 = local_78._4_4_;
            uVar11 = local_78;
          } while (local_90 != plVar13 || (local_80 != plVar3 || local_78._4_4_ != iVar9));
        }
      }
    }
    local_78 = uVar11;
    param_1[0x61] = 0;
    goto LAB_1403e3ed6;
  }
  uVar4 = *(uint *)(param_2 + 0xc);
  *puVar2 = uVar4;
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar15 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar15 = 0;
  }
  iVar9 = *(int *)(lVar15 + 0x10);
  if (iVar9 == 0) {
    LOCK();
    iVar9 = DAT_14c964868 + 1;
    UNLOCK();
    iVar14 = DAT_14c964868 + 1;
    bVar16 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar9;
    if (bVar16) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar14);
    }
    LOCK();
    iVar9 = *(int *)(lVar15 + 0x10);
    bVar16 = iVar9 == 0;
    if (bVar16) {
      *(int *)(lVar15 + 0x10) = iVar14;
      iVar9 = 0;
    }
    UNLOCK();
    if (bVar16) {
      iVar9 = iVar14;
    }
    *(int *)((longlong)param_1 + 0x30c) = iVar9;
    if (iVar9 == 0) goto LAB_1403e3ed6;
  }
  else {
    *(int *)((longlong)param_1 + 0x30c) = iVar9;
  }
  uVar4 = *puVar2;
  if (((((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) ||
      (plVar13 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
      plVar13 == (longlong *)0x0)) ||
     (((int)plVar13[2] != iVar9 || ((*(uint *)(plVar13 + 1) & 0x10200000) != 0))))
  goto LAB_1403e3ed6;
  if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
    lVar15 = *plVar13;
  }
  else {
    lVar15 = 0;
  }
  lVar12 = *(longlong *)(lVar15 + 0x708);
  if (lVar12 == 0) {
    uVar11 = FUN_1405b1a32();
    lVar12 = FUN_14477b664(uVar11);
    *(longlong *)(lVar15 + 0x708) = lVar12;
  }
  if (*(longlong *)(lVar15 + 0x710) == 0) {
    if ((lVar12 == 0) || (*(longlong *)(lVar15 + 0x700) == 0)) goto LAB_1403e3ed6;
    plVar13 = *(longlong **)(lVar12 + 0xb8);
    if ((plVar13 == (longlong *)0x0) ||
       (cVar8 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar8 == '\0')) {
      *(undefined8 *)(lVar15 + 0x710) = 0;
      goto LAB_1403e3ed6;
    }
    uVar11 = (**(code **)(*plVar13 + 0x110))(plVar13);
    lVar12 = FUN_144aff482(uVar11,(longlong *)(lVar15 + 0x700));
    *(longlong *)(lVar15 + 0x710) = lVar12;
    if (lVar12 == 0) goto LAB_1403e3ed6;
  }
  iVar9 = 0;
  if (*(int *)((longlong)param_1 + 0x30c) == 0) {
LAB_1403e4320:
    lVar15 = 0;
  }
  else {
    uVar4 = *puVar2;
    lVar15 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar13 = (longlong *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar13 == (longlong *)0x0) ||
         (((int)plVar13[2] != *(int *)((longlong)param_1 + 0x30c) ||
          ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_1403e4320;
      lVar15 = *plVar13;
    }
  }
  (**(code **)(*param_1 + 0x58))(param_1,lVar15 + 0x700,0);
  plVar13 = param_1 + 0x62;
  plVar3 = param_1 + 100;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar3;
  if ((int)param_1[0x67] != 0) {
    FUN_1449c0562(&local_68);
    iVar9 = (int)param_1[0x67];
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  uVar11 = local_78;
  local_70 = local_50;
  local_6c = local_4c;
  local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
  iVar14 = local_78._4_4_;
  local_90 = plVar13;
  if ((local_78._4_4_ != iVar9) || (local_78 = local_58, local_60 != plVar3)) {
    do {
      local_78 = uVar11;
      lVar15 = *local_90;
      plVar5 = *(longlong **)(lVar15 + 8 + (longlong)iVar14 * 0x18);
      if (plVar5 != (longlong *)0x0) {
        iVar10 = (int)plVar5[1];
        do {
          if (iVar10 == 0) goto LAB_1403e4115;
          LOCK();
          iVar7 = (int)plVar5[1];
          bVar16 = iVar10 == iVar7;
          if (bVar16) {
            *(int *)(plVar5 + 1) = iVar10 + 1;
            iVar7 = iVar10;
          }
          iVar10 = iVar7;
          UNLOCK();
        } while (!bVar16);
        plVar6 = *(longlong **)(lVar15 + (longlong)iVar14 * 0x18);
        if (plVar6 != (longlong *)0x0) {
          lVar15 = FUN_14479d2ce(puVar2);
          (**(code **)(*plVar6 + 0x58))(plVar6,lVar15 + 0x700,0);
        }
        LOCK();
        plVar6 = plVar5 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
LAB_1403e4115:
      local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar14 = local_78._4_4_;
      uVar11 = local_78;
    } while (((local_78._4_4_ != iVar9) || (local_80 != plVar3)) || (local_90 != plVar13));
  }
LAB_1403e3ed6:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403e4490 FUN_1403e4490 body=317 status=ok
// SIG undefined FUN_1403e4490(void)

ulonglong FUN_1403e4490(uint *param_1,longlong param_2)

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



// FUNCTION 1403e45ce FUN_1403e45ce body=1251 status=ok
// SIG undefined FUN_1403e45ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1403e45ce(longlong param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  double *pdVar3;
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
  double *pdVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  
  dVar8 = *(double *)(param_1 + 0x30);
  dVar9 = *(double *)(param_1 + 0x38);
  dVar10 = *(double *)(param_1 + 0x40);
  dVar11 = *(double *)(param_1 + 0x48);
  dVar12 = *(double *)(param_1 + 0x58);
  dVar13 = *(double *)(param_1 + 0x60);
  dVar29 = *param_3 - *(double *)(param_1 + 0x50);
  dVar30 = param_3[1] - dVar12;
  dVar4 = param_3[2] - dVar13;
  dVar19 = -dVar8;
  dVar22 = -dVar9;
  dVar21 = dVar10 * -1.0;
  dVar23 = dVar11 * 1.0;
  dVar25 = dVar30 * dVar19 - dVar29 * dVar22;
  dVar20 = dVar4 * dVar22 - dVar30 * dVar21;
  dVar27 = dVar29 * dVar21 - dVar4 * dVar19;
  dVar20 = dVar20 + dVar20;
  dVar27 = dVar27 + dVar27;
  dVar25 = dVar25 + dVar25;
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x70);
  dVar5 = *(double *)(param_1 + 0x80);
  dVar28 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar5)) & (ulonglong)(1.0 / dVar5)) *
           (dVar23 * dVar25 + dVar4 + (dVar27 * dVar19 - dVar22 * dVar20));
  iVar2 = *(int *)(param_1 + 0x98);
  dVar4 = DAT_14c8464e0;
  dVar7 = DAT_14c8464f0;
  dVar6 = DAT_14c8464e8;
  if (0 < (longlong)iVar2) {
    auVar26 = divpd(_DAT_149934d80,auVar1);
    dVar22 = ((dVar25 * dVar22 - dVar21 * dVar27) + dVar29 + dVar23 * dVar20) *
             (double)(auVar26._0_8_ & -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)));
    dVar21 = ((dVar21 * dVar20 - dVar19 * dVar25) + dVar30 + dVar23 * dVar27) *
             (double)(auVar26._8_8_ & -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)));
    iVar16 = iVar2 + -1;
    pdVar3 = *(double **)(param_1 + 0x90);
    fVar31 = 3.4e+38;
    lVar15 = 0;
    pdVar14 = pdVar3;
    do {
      lVar17 = (longlong)iVar16;
      dVar23 = pdVar14[2];
      dVar30 = pdVar3[lVar17 * 3 + 2] - dVar23;
      dVar25 = *pdVar14;
      dVar20 = pdVar14[1];
      dVar19 = pdVar3[lVar17 * 3 + 1] - dVar20;
      dVar29 = pdVar3[lVar17 * 3] - dVar25;
      dVar27 = (dVar28 - dVar23) * dVar30 + (dVar22 - dVar25) * dVar29 + (dVar21 - dVar20) * dVar19;
      if (dVar27 <= 0.0) {
        dVar25 = *pdVar14;
        dVar20 = pdVar14[1];
      }
      else {
        dVar24 = dVar30 * dVar30 + dVar29 * dVar29 + dVar19 * dVar19;
        if (dVar24 <= dVar27) {
          dVar25 = pdVar3[lVar17 * 3];
          dVar20 = (pdVar3 + lVar17 * 3)[1];
          dVar23 = pdVar3[lVar17 * 3 + 2];
        }
        else {
          dVar27 = dVar27 / dVar24;
          dVar20 = dVar20 + dVar19 * dVar27;
          dVar25 = dVar25 + dVar29 * dVar27;
          dVar23 = dVar23 + dVar30 * dVar27;
        }
      }
      dVar27 = dVar25 - dVar22;
      dVar19 = dVar20 - dVar21;
      fVar18 = (float)((dVar23 - dVar28) * (dVar23 - dVar28) + dVar27 * dVar27 + dVar19 * dVar19);
      if (fVar31 <= fVar18) {
        fVar18 = fVar31;
        dVar25 = dVar4;
        dVar20 = dVar6;
        dVar23 = dVar7;
      }
      dVar7 = dVar23;
      dVar6 = dVar20;
      dVar4 = dVar25;
      fVar31 = fVar18;
      iVar16 = (int)lVar15;
      lVar15 = lVar15 + 1;
      pdVar14 = pdVar14 + 3;
    } while (iVar2 != lVar15);
  }
  if (*(char *)(param_1 + 0xa4) == '\0') {
    dVar21 = (double)*(float *)(param_1 + 0xa0) + dVar7;
    if (dVar21 <= dVar28) {
      dVar28 = dVar21;
    }
    if (dVar28 <= dVar7) {
      dVar28 = dVar7;
    }
  }
  dVar4 = auVar1._0_8_ * dVar4;
  dVar6 = auVar1._8_8_ * dVar6;
  dVar5 = dVar5 * dVar28;
  dVar21 = dVar6 * dVar8 - dVar9 * dVar4;
  dVar23 = dVar5 * dVar9 - dVar10 * dVar6;
  dVar25 = dVar4 * dVar10 - dVar8 * dVar5;
  dVar23 = dVar23 + dVar23;
  dVar25 = dVar25 + dVar25;
  dVar21 = dVar21 + dVar21;
  *param_2 = *(double *)(param_1 + 0x50) +
             (dVar21 * dVar9 - dVar25 * dVar10) + dVar11 * dVar23 + dVar4;
  param_2[1] = dVar12 + (dVar10 * dVar23 - dVar8 * dVar21) + dVar11 * dVar25 + dVar6;
  param_2[2] = dVar13 + dVar11 * dVar21 + dVar5 + (dVar25 * dVar8 - dVar23 * dVar9);
  return;
}



// FUNCTION 1403e4ab2 FUN_1403e4ab2 body=1039 status=ok
// SIG undefined FUN_1403e4ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1403e4ab2(double *param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
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
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  
  dVar7 = *param_1;
  dVar8 = param_1[1];
  dVar9 = param_1[2];
  dVar10 = param_1[5];
  dVar11 = param_1[6];
  dVar18 = *param_3 - param_1[4];
  dVar16 = param_3[1] - dVar10;
  dVar15 = param_3[2] - dVar11;
  dVar19 = -dVar7;
  dVar3 = -dVar8;
  dVar17 = dVar9 * -1.0;
  dVar20 = param_1[3] * 1.0;
  dVar22 = dVar18 * dVar17 - dVar19 * dVar15;
  dVar21 = dVar16 * dVar19 - dVar18 * dVar3;
  dVar4 = dVar15 * dVar3 - dVar16 * dVar17;
  dVar4 = dVar4 + dVar4;
  dVar22 = dVar22 + dVar22;
  dVar21 = dVar21 + dVar21;
  auVar1 = *(undefined1 (*) [16])(param_1 + 8);
  dVar12 = param_1[10];
  auVar24 = divpd(_DAT_149934d80,auVar1);
  dVar14 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar12)) & (ulonglong)(1.0 / dVar12)) *
           (dVar20 * dVar21 + dVar15 + (dVar22 * dVar19 - dVar4 * dVar3));
  dVar19 = (double)(*(float *)(param_1 + 0xc) * 0.5);
  dVar23 = DAT_14c8462b8 * dVar19;
  dVar2 = DAT_14c8462b0 * dVar19;
  dVar13 = DAT_14c8462a8 * dVar19;
  dVar6 = DAT_14c846298 * dVar19 - dVar2;
  dVar15 = dVar19 * DAT_14c846290 - dVar13;
  dVar5 = DAT_14c8462a0 * dVar19 - dVar23;
  dVar19 = -((dVar23 - dVar14) * dVar5 +
            (dVar13 - (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) &
                              auVar24._0_8_) *
                      ((dVar21 * dVar3 - dVar22 * dVar17) + dVar20 * dVar4 + dVar18)) * dVar15 +
            (dVar2 - (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar24._8_8_
                             ) * (dVar7 * dVar21 + dVar17 * dVar4 + dVar20 * dVar22 + dVar16)) *
            dVar6) / (dVar5 * dVar5 + dVar15 * dVar15 + dVar6 * dVar6);
  if (1.0 <= dVar19) {
    dVar19 = 1.0;
  }
  if (dVar19 <= 0.0) {
    dVar19 = 0.0;
  }
  dVar23 = dVar5 * dVar19 + dVar23;
  dVar18 = (double)*(float *)((longlong)param_1 + 100) + dVar23;
  if (dVar18 <= dVar14) {
    dVar14 = dVar18;
  }
  if (dVar14 <= dVar23) {
    dVar14 = dVar23;
  }
  dVar20 = (dVar19 * dVar15 + dVar13) * auVar1._0_8_;
  dVar21 = (dVar6 * dVar19 + dVar2) * auVar1._8_8_;
  dVar14 = dVar14 * dVar12;
  dVar15 = param_1[3];
  dVar19 = param_1[3];
  dVar16 = dVar21 * dVar7 - dVar8 * dVar20;
  dVar17 = dVar14 * dVar8 - dVar9 * dVar21;
  dVar18 = dVar20 * dVar9 - dVar7 * dVar14;
  dVar17 = dVar17 + dVar17;
  dVar18 = dVar18 + dVar18;
  dVar16 = dVar16 + dVar16;
  *param_2 = (dVar16 * dVar8 - dVar18 * dVar9) + dVar15 * dVar17 + dVar20 + param_1[4];
  param_2[1] = (dVar9 * dVar17 - dVar7 * dVar16) + dVar19 * dVar18 + dVar21 + dVar10;
  param_2[2] = dVar16 * dVar15 + dVar14 + (dVar18 * dVar7 - dVar17 * dVar8) + dVar11;
  return param_2;
}



// FUNCTION 1403e4ec2 FUN_1403e4ec2 body=52 status=ok
// SIG undefined FUN_1403e4ec2(void)

void FUN_1403e4ec2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x778) != 0) {
    FUN_14033a7c0();
    FUN_140b3e76a(param_1 + 0x778);
    return;
  }
  return;
}



// FUNCTION 1403e4ef6 FUN_1403e4ef6 body=1209 status=ok
// SIG undefined FUN_1403e4ef6(void)

void FUN_1403e4ef6(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 local_78;
  longlong local_70;
  undefined1 local_68 [24];
  longlong *local_50;
  longlong local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x768) == 0) goto LAB_1403e5028;
  lVar6 = *(longlong *)(param_1 + 0x668);
  if (lVar6 == 0) {
    uVar3 = FUN_140067708();
    lVar6 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x668) = lVar6;
  }
  if (*(longlong *)(param_1 + 0x670) == 0) {
    if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x660) != 0)) {
      plVar5 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar5 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x670) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar6 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x660));
        *(longlong *)(param_1 + 0x670) = lVar6;
        if (lVar6 != 0) goto LAB_1403e4f49;
      }
    }
    if ((*(char *)(param_1 + 0x650) != '\x01') || (*(longlong *)(param_1 + 0x654) == 0)) {
      lVar6 = *(longlong *)(param_1 + 0x698);
      if (lVar6 == 0) {
        uVar3 = FUN_140067708();
        lVar6 = FUN_14477b664(uVar3);
        *(longlong *)(param_1 + 0x698) = lVar6;
      }
      if (*(longlong *)(param_1 + 0x6a0) == 0) {
        if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x690) != 0)) {
          plVar5 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 == '\0')) {
            *(undefined8 *)(param_1 + 0x6a0) = 0;
          }
          else {
            uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
            lVar6 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x690));
            *(longlong *)(param_1 + 0x6a0) = lVar6;
            if (lVar6 != 0) goto LAB_1403e4f49;
          }
        }
        if ((*(char *)(param_1 + 0x680) != '\x01') || (*(longlong *)(param_1 + 0x684) == 0)) {
          lVar6 = *(longlong *)(param_1 + 0x6c8);
          if (lVar6 == 0) {
            uVar3 = FUN_140067708();
            lVar6 = FUN_14477b664(uVar3);
            *(longlong *)(param_1 + 0x6c8) = lVar6;
          }
          if (*(longlong *)(param_1 + 0x6d0) == 0) {
            if ((lVar6 != 0) && (*(longlong *)(param_1 + 0x6c0) != 0)) {
              plVar5 = *(longlong **)(lVar6 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar2 == '\0')) {
                *(undefined8 *)(param_1 + 0x6d0) = 0;
              }
              else {
                uVar3 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar6 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x6c0));
                *(longlong *)(param_1 + 0x6d0) = lVar6;
                if (lVar6 != 0) goto LAB_1403e4f49;
              }
            }
            if ((*(char *)(param_1 + 0x6b0) != '\x01') || (*(longlong *)(param_1 + 0x6b4) == 0)) {
              if ((longlong)*(int *)(param_1 + 0x6e8) != 0) {
                plVar5 = (longlong *)(*(longlong *)(param_1 + 0x6e0) + 0x10);
                lVar6 = (longlong)*(int *)(param_1 + 0x6e8) * 0x30;
                do {
                  lVar4 = plVar5[1];
                  if (lVar4 == 0) {
                    uVar3 = FUN_140067708();
                    lVar4 = FUN_14477b664(uVar3);
                    plVar5[1] = lVar4;
                  }
                  if (plVar5[2] != 0) goto LAB_1403e4f49;
                  if ((lVar4 != 0) && (*plVar5 != 0)) {
                    plVar1 = *(longlong **)(lVar4 + 0xb8);
                    if ((plVar1 == (longlong *)0x0) ||
                       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                      plVar5[2] = 0;
                    }
                    else {
                      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                      lVar4 = FUN_144aff482(uVar3,plVar5);
                      plVar5[2] = lVar4;
                      if (lVar4 != 0) goto LAB_1403e4f49;
                    }
                  }
                  if (((char)plVar5[-2] == '\x01') && (*(longlong *)((longlong)plVar5 + -0xc) != 0))
                  goto LAB_1403e4f49;
                  plVar5 = plVar5 + 6;
                  lVar6 = lVar6 + -0x30;
                } while (lVar6 != 0);
              }
              goto LAB_1403e5028;
            }
          }
        }
      }
    }
  }
LAB_1403e4f49:
  uVar3 = *(undefined8 *)(param_1 + 0x768);
  lVar6 = *(longlong *)(param_1 + 0x778);
  if (lVar6 == 0) {
    local_48[0] = 0;
    local_48[1] = 0;
    local_88 = local_88 & 0xffffff00;
    FUN_14084a140(uVar3,&local_50,local_48,0);
    FUN_1403c75f4((longlong *)(param_1 + 0x778),&local_50);
    if (((local_50 != (longlong *)0x0) &&
        (*(int *)(local_50 + 0x21) = (int)local_50[0x21] + -1, (int)local_50[0x26] < 1)) &&
       (FUN_1400847bc(local_50 + 0x17,0), (int)local_50[0x21] == 0)) {
      FUN_140087e46(local_50);
      if (*local_50 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_1403e4fc8;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_50);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_50);
      }
    }
LAB_1403e4fc8:
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    lVar6 = *(longlong *)(param_1 + 0x778);
    if (lVar6 == 0) goto LAB_1403e5028;
    uVar3 = *(undefined8 *)(param_1 + 0x768);
  }
  local_70 = *(longlong *)(param_1 + 0x770);
  if (local_70 != 0) {
    LOCK();
    *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
    UNLOCK();
  }
  local_78 = uVar3;
  uVar3 = FUN_140206ee8((char *)(param_1 + 0x650),&local_78);
  local_88 = 0;
  FUN_14084a448(lVar6,local_68,uVar3,param_1);
LAB_1403e5028:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403e53b0 FUN_1403e53b0 body=38 status=ok
// SIG undefined FUN_1403e53b0(void)

undefined8 FUN_1403e53b0(undefined8 param_1,int param_2)

{
  FUN_1403e53d6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1403e53d6 FUN_1403e53d6 body=235 status=ok
// SIG undefined FUN_1403e53d6(void)

void FUN_1403e53d6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *param_1 = (longlong)&PTR_FUN_149e01220;
  plVar1 = param_1 + 0xe;
  if (param_1[0xe] != 0) {
    FUN_14009fd82(DAT_14c82b500,plVar1,0xff);
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 != (undefined8 *)0x0) {
      *plVar1 = 0;
      LOCK();
      piVar2 = (int *)(puVar3 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
  }
  if (param_1[0xd] != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    FUN_140074620();
    FUN_1403e5552(&DAT_14c8339c0,param_1);
    FUN_140074620();
    FUN_1403e54fa(&DAT_14c8339c0);
    puVar3 = (undefined8 *)param_1[0xd];
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  puVar3 = (undefined8 *)*plVar1;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1403e54c2(param_1 + 1);
  return;
}



// FUNCTION 1403e54c2 FUN_1403e54c2 body=55 status=ok
// SIG undefined FUN_1403e54c2(void)

void FUN_1403e54c2(longlong *param_1)

{
  FUN_1403e5812(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1403e54fa FUN_1403e54fa body=87 status=ok
// SIG undefined FUN_1403e54fa(void)

void FUN_1403e54fa(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14010889a(param_1 + 0x40);
  while (plVar1 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar1 + 0x51) == '\0') {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
    (**(code **)*plVar1)(plVar1,1);
    plVar1 = (longlong *)FUN_14010889a(param_1 + 0x40);
  }
  return;
}



// FUNCTION 1403e5552 FUN_1403e5552 body=297 status=ok
// SIG undefined FUN_1403e5552(void)

ulonglong FUN_1403e5552(LPCRITICAL_SECTION param_1,longlong param_2)

{
  int iVar1;
  HANDLE pvVar2;
  longlong lVar3;
  int iVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined7 uVar6;
  
  EnterCriticalSection(param_1);
  iVar4 = *(int *)&param_1[3].LockSemaphore;
  uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar5 = CONCAT71(uVar6,1);
  if (1 < iVar4) {
    uVar5 = CONCAT71(uVar6,1);
    lVar8 = 1;
    lVar9 = 0;
    do {
      pvVar2 = param_1[3].OwningThread;
      lVar3 = *(longlong *)((longlong)pvVar2 + lVar9 + 0x18);
      if ((lVar3 != 0) && (param_2 == 0 || lVar3 == param_2)) {
        if (*(int *)((longlong)pvVar2 + lVar9 + 0x2c) == 0) {
          FUN_14014108a(lVar3,*(undefined4 *)((longlong)pvVar2 + lVar9 + 0x20));
          *(undefined8 *)((longlong)pvVar2 + lVar9 + 0x18) = 0;
          *(undefined4 *)((longlong)pvVar2 + lVar9 + 0x20) = 0xffffffff;
          pvVar2 = param_1[3].OwningThread;
          iVar4 = *(int *)((longlong)pvVar2 + lVar9 + 0x24);
          iVar1 = *(int *)((longlong)pvVar2 + lVar9 + 0x28);
          *(int *)((longlong)pvVar2 + (longlong)iVar1 * 0x18 + 0xc) = iVar4;
          *(int *)((longlong)param_1[3].OwningThread + (longlong)iVar4 * 0x18 + 0x10) = iVar1;
          uVar7 = (undefined4)lVar8;
          *(undefined4 *)((longlong)pvVar2 + lVar9 + 0x28) = uVar7;
          *(undefined4 *)((longlong)pvVar2 + lVar9 + 0x24) = uVar7;
          pvVar2 = param_1[3].OwningThread;
          iVar4 = *(int *)((longlong)pvVar2 + 0xc);
          *(int *)((longlong)pvVar2 + lVar9 + 0x24) = iVar4;
          *(undefined4 *)((longlong)pvVar2 + lVar9 + 0x28) = 0;
          *(undefined4 *)((longlong)param_1[3].OwningThread + (longlong)iVar4 * 0x18 + 0x10) = uVar7
          ;
          *(undefined4 *)((longlong)pvVar2 + 0xc) = uVar7;
          iVar4 = *(int *)&param_1[3].LockSemaphore;
        }
        else {
          uVar5 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar8 < iVar4);
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1403e567c FUN_1403e567c body=405 status=ok
// SIG undefined FUN_1403e567c(void)

void FUN_1403e567c(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x18);
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar16 == uVar15) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar6) {
      iVar6 = iVar3;
    }
  }
  if (iVar6 != iVar3) {
    uVar14 = 0xffffffff;
    do {
      puVar5 = *(undefined8 **)(*(longlong *)(param_1 + 8) + 0x10 + (longlong)iVar6 * 0x20);
      if (puVar5 != (undefined8 *)0x0) {
        *(undefined8 *)((longlong)iVar6 * 0x20 + *(longlong *)(param_1 + 8) + 0x10) = 0;
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5,1);
        }
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar7 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x18);
      }
      iVar4 = *(int *)(param_1 + 0x30);
      iVar6 = (int)uVar15;
      lVar12 = (longlong)iVar6;
      uVar10 = puVar7[lVar12] & uVar14;
      if (uVar10 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar11 = iVar11 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar13 = 0;
          do {
            uVar10 = puVar7[lVar12 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar15 = (ulonglong)(iVar6 + (int)lVar13 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1403e57c0;
            }
            iVar11 = iVar11 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar9 - lVar12 != lVar13);
          uVar14 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar15 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_1403e57c0:
        uVar16 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar3);
  }
  return;
}



// FUNCTION 1403e5812 FUN_1403e5812 body=484 status=ok
// SIG undefined FUN_1403e5812(void)

void FUN_1403e5812(longlong *param_1,int param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
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
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  local_4c = 1;
  if (iVar3 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar7 = *puVar8;
    if (uVar7 == 0) {
      iVar9 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar9 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar10 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar10 = uVar11;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar9 = 0;
      do {
        local_3c = iVar3;
        if (uVar10 == uVar11) goto LAB_1403e58d0;
        iVar9 = iVar9 + 0x20;
        uVar7 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar11;
      local_38 = iVar9;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar5 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    if (iVar3 <= local_3c) {
      local_3c = iVar3;
    }
  }
LAB_1403e58d0:
  local_40 = 0xffffffff;
  local_58 = param_1;
  local_48 = puVar1;
  if (local_3c < iVar3) {
    do {
      puVar4 = *(undefined8 **)(*local_58 + 0x10 + (longlong)local_3c * 0x20);
      if (puVar4 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar4 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar4)(puVar4,1);
        }
      }
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
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
  uVar7 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar7) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar6 = 0x80;
    if (0x80 < (int)uVar7) {
      uVar6 = uVar7;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar6;
    FUN_1446efbd8(puVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403e59f8 FUN_1403e59f8 body=234 status=ok
// SIG undefined FUN_1403e59f8(void)

void FUN_1403e59f8(longlong param_1)

{
  byte bVar1;
  
  if (*(longlong *)(param_1 + 0x10) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar1 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') {
        return;
      }
      bVar1 = DAT_14c8442b8 & 1;
    }
    if (bVar1 == 0) {
      FUN_1403e5ae2(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10));
      *(uint *)(param_1 + 0x28) =
           *(uint *)(param_1 + 0x28) & 0xffffffef |
           (uint)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x30) != 0) << 4;
    }
  }
  return;
}



// FUNCTION 1403e5ae2 FUN_1403e5ae2 body=87 status=ok
// SIG undefined FUN_1403e5ae2(void)

longlong * FUN_1403e5ae2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != param_2) {
    *param_1 = param_2;
    if (param_2 != 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
      *(int *)(param_2 + 0x74) = *(int *)(param_2 + 0x74) + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
    }
    if (lVar1 != 0) {
      FUN_1401fc67c(lVar1);
    }
  }
  return param_1;
}



// FUNCTION 1403e5b3a FUN_1403e5b3a body=396 status=ok
// SIG undefined FUN_1403e5b3a(void)

float * FUN_1403e5b3a(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  
  plVar6 = (longlong *)FUN_1403e5cc6(param_4);
  bVar1 = *(byte *)(param_1 + 8);
  if (plVar6 == (longlong *)0x0) {
    if (5 < bVar1) {
      if (2 < bVar1 - 6) goto switchD_1403e5bd1_caseD_6;
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = 0.0;
      goto LAB_1403e5b8c;
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = 0.0;
    goto LAB_1403e5bae;
  }
  if (bVar1 == 6) {
    fVar7 = (float)(**(code **)(*plVar6 + 0x388))(plVar6);
    goto LAB_1403e5b6d;
  }
  switch(bVar1) {
  case 0:
    fVar7 = (float)(**(code **)(*plVar6 + 0x2c0))(plVar6);
    break;
  case 1:
    fVar7 = (float)(**(code **)(*plVar6 + 0x2b8))(plVar6);
    break;
  case 2:
    fVar7 = (float)(**(code **)(*plVar6 + 0x2d8))(plVar6);
    break;
  case 3:
    iVar4 = (**(code **)(*plVar6 + 0x2e0))(plVar6);
    iVar5 = (**(code **)(*plVar6 + 0x2b8))(plVar6);
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = (float)(iVar4 - iVar5);
    goto LAB_1403e5bae;
  case 4:
    fVar7 = (float)(**(code **)(*plVar6 + 0x2d0))(plVar6);
    break;
  case 5:
    fVar7 = (float)(**(code **)(*plVar6 + 0x2e0))(plVar6);
    break;
  default:
switchD_1403e5bd1_caseD_6:
    *(undefined2 *)(param_2 + 6) = 0;
    uVar2 = 0;
    goto LAB_1403e5b8e;
  case 7:
    iVar5 = (**(code **)(*plVar6 + 0x2e0))(plVar6);
    iVar3 = (**(code **)(*plVar6 + 0x2b8))(plVar6);
    iVar4 = iVar5 - iVar3;
    if (iVar4 == 0 || iVar5 < iVar3) {
LAB_1403e5cbe:
      fVar7 = 0.0;
      goto LAB_1403e5b6d;
    }
    iVar5 = (**(code **)(*plVar6 + 0x2d8))(plVar6);
    goto LAB_1403e5cad;
  case 8:
    iVar4 = (**(code **)(*plVar6 + 0x2e0))(plVar6);
    if (iVar4 < 1) goto LAB_1403e5cbe;
    iVar5 = (**(code **)(*plVar6 + 0x2d0))(plVar6);
LAB_1403e5cad:
    fVar7 = (float)iVar5 / (float)iVar4;
LAB_1403e5b6d:
    if (*(char *)(param_1 + 9) != '\0') {
      fVar7 = 1.0 - fVar7;
    }
    *(undefined2 *)(param_2 + 6) = 4;
    *param_2 = fVar7;
LAB_1403e5b8c:
    uVar2 = 3;
    goto LAB_1403e5b8e;
  }
  *(undefined2 *)(param_2 + 6) = 4;
  *param_2 = fVar7;
LAB_1403e5bae:
  uVar2 = 2;
LAB_1403e5b8e:
  *(undefined1 *)(param_2 + 8) = uVar2;
  return param_2;
}



// FUNCTION 1403e5cc6 FUN_1403e5cc6 body=79 status=ok
// SIG undefined FUN_1403e5cc6(void)

longlong FUN_1403e5cc6(undefined8 param_1)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = FUN_1403e5d16();
  if (lVar2 == 0) {
    lVar2 = FUN_1403e5e94(param_1);
    if (lVar2 != 0) {
      bVar1 = *(byte *)(lVar2 + 0xbd8);
      if ((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) {
        return *(longlong *)
                (*(longlong *)(lVar2 + 0xbe8) + 0x10 +
                (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1403e5d16 FUN_1403e5d16 body=63 status=ok
// SIG undefined FUN_1403e5d16(void)

longlong FUN_1403e5d16(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    lVar2 = FUN_1403e5dae();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1403e5d56 FUN_1403e5d56 body=87 status=ok
// SIG undefined FUN_1403e5d56(void)

undefined8 FUN_1403e5d56(longlong *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined4 extraout_XMM0_Db;
  undefined4 uVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (iVar1 < 1) {
    iVar1 = (**(code **)(*param_1 + 0x2e0))(param_1);
    if (iVar1 < 1) {
      fVar4 = 0.0;
      uVar5 = 0;
      goto LAB_1403e5d88;
    }
    puVar3 = (undefined8 *)(*param_1 + 0x2d8);
  }
  else {
    puVar3 = (undefined8 *)(*param_1 + 0x2c0);
  }
  iVar2 = (*(code *)*puVar3)(param_1);
  fVar4 = (float)iVar2 / (float)iVar1;
  uVar5 = extraout_XMM0_Db;
LAB_1403e5d88:
  return CONCAT44(uVar5,fVar4);
}



// FUNCTION 1403e5dae FUN_1403e5dae body=228 status=ok
// SIG undefined FUN_1403e5dae(void)

longlong FUN_1403e5dae(void)

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
  if (DAT_14cb93e68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145840f42;
    local_38 = &LAB_148a11c11;
    local_40 = &LAB_14657477e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior_Ammo",&DAT_14cb93e68,&DAT_148a11c10);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb93e68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e5e94 FUN_1403e5e94 body=269 status=ok
// SIG undefined FUN_1403e5e94(void)

longlong FUN_1403e5e94(void)

{
  longlong lVar1;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    if (DAT_14cb939a8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_140940982;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_146522c26;
      local_38 = &LAB_148a0db91;
      local_40 = &LAB_146572ba7;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) goto LAB_1403e5ee1;
  }
  lVar1 = 0;
LAB_1403e5ee1:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e5fa2 FUN_1403e5fa2 body=110 status=ok
// SIG undefined FUN_1403e5fa2(void)

void FUN_1403e5fa2(longlong param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    return;
  }
  if (*(int *)(param_1 + 0xd8) == -1) {
    *(int *)(param_1 + 0xd8) = param_2;
  }
  iVar1 = *(int *)(param_1 + 0x378);
  *(uint *)(param_1 + 0x378) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x37c) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 0x370,iVar1);
  }
  *(int *)(*(longlong *)(param_1 + 0x370) + (longlong)iVar1 * 4) = param_2;
  FUN_1403e6010(*(undefined8 *)(param_1 + 0x298),param_2);
  return;
}



// FUNCTION 1403e6010 FUN_1403e6010 body=113 status=ok
// SIG undefined FUN_1403e6010(void)

void FUN_1403e6010(longlong param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  FUN_1447cbafe(param_1 + 0x140,local_28,&local_24,0);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 400));
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e6082 FUN_1403e6082 body=63 status=ok
// SIG undefined FUN_1403e6082(void)

undefined8 FUN_1403e6082(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_2 + 0x11f90) == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = **(longlong **)(param_2 + 0x11f90);
  }
  if ((*(char *)(lVar2 + 8) == '\x01') && (*(uint *)(param_2 + 0x11f98) < *(uint *)(lVar2 + 200))) {
    return *(undefined8 *)
            (*(longlong *)(lVar2 + 0xc0) + (longlong)(int)*(uint *)(param_2 + 0x11f98) * 8);
  }
  uVar1 = FUN_1403e60c2(lVar2,param_1);
  return uVar1;
}



// FUNCTION 1403e60c2 FUN_1403e60c2 body=151 status=ok
// SIG undefined FUN_1403e60c2(void)

void FUN_1403e60c2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    FUN_140180364(param_2);
    local_30 = &DAT_14c9e7e00;
    FUN_1449863e6();
    local_38 = DAT_14c9e7c58;
    uVar1 = FUN_1403e615a(param_2 + 0x1a8,param_2 + 0x70,&local_30);
    *(undefined8 *)(param_1 + 0xa8) = uVar1;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e615a FUN_1403e615a body=242 status=ok
// SIG undefined FUN_1403e615a(void)

undefined8 *
FUN_1403e615a(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_1449863e6();
  puVar6[3] = uVar3;
  lVar4 = DAT_14c9e7c88;
  puVar6[4] = DAT_14c9e7c88;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14c9e7c40;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a247ca8;
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



// FUNCTION 1403e624c FUN_1403e624c body=62 status=ok
// SIG undefined FUN_1403e624c(void)

void FUN_1403e624c(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      plVar2 = (longlong *)(lVar1 + 0x30);
      if (*(longlong **)(lVar1 + 0x20) != (longlong *)0x0) {
        plVar2 = *(longlong **)(lVar1 + 0x20);
      }
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1403e628a FUN_1403e628a body=68 status=ok
// SIG undefined FUN_1403e628a(void)

void FUN_1403e628a(longlong param_1,longlong param_2)

{
  FUN_1403e62ce();
  *(byte *)(param_1 + 0x449) =
       *(byte *)(param_1 + 0x449) & 0xfd |
       *(char *)(*(longlong *)(param_2 + 0x11e8) + 0x36a8) * '\x02' & 2U;
  return;
}



// FUNCTION 1403e62ce FUN_1403e62ce body=586 status=ok
// SIG undefined FUN_1403e62ce(void)

void FUN_1403e62ce(longlong *param_1,longlong param_2,undefined4 param_3,double *param_4,
                  longlong param_5)

{
  byte bVar1;
  longlong lVar2;
  double dVar3;
  byte bVar4;
  undefined1 uVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = param_3;
  (**(code **)(*param_1 + 0x18))();
  fVar6 = (float)SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1]);
  *(float *)(param_1 + 0x6c) = fVar6;
  dVar8 = DAT_14c8464f0;
  dVar9 = DAT_14c8464e8;
  dVar3 = DAT_14c8464e0;
  if (1e-08 < fVar6) {
    dVar3 = 1.0 / (double)fVar6;
    dVar8 = param_4[2] * dVar3;
    dVar9 = param_4[1] * dVar3;
    dVar3 = dVar3 * *param_4;
  }
  param_1[0x69] = (longlong)dVar3;
  param_1[0x6a] = (longlong)dVar9;
  param_1[0x6b] = (longlong)dVar8;
  local_48 = param_4[2];
  local_58 = *(undefined4 *)param_4;
  uStack_54 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_50 = *(undefined4 *)(param_4 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_4 + 0xc);
  (**(code **)(**(longlong **)(param_2 + 0x430) + 0x9f8))(*(longlong **)(param_2 + 0x430),&local_38)
  ;
  param_1[0x67] = local_28;
  *(undefined4 *)(param_1 + 0x65) = local_38;
  *(undefined4 *)((longlong)param_1 + 0x32c) = uStack_34;
  *(undefined4 *)(param_1 + 0x66) = uStack_30;
  *(undefined4 *)((longlong)param_1 + 0x334) = uStack_2c;
  uVar7 = (**(code **)(**(longlong **)(param_2 + 0x430) + 0x480))();
  *(undefined4 *)(param_1 + 0x68) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x56c);
  bVar1 = *(byte *)(param_1 + 2);
  bVar4 = *(byte *)(*(longlong *)(param_2 + 0x430) + 0x5b5) >> 4 & 2;
  *(byte *)(param_1 + 2) = bVar1 & 0xfd | bVar4;
  *(byte *)(param_1 + 2) =
       bVar1 & 0xf9 | bVar4 | *(byte *)(*(longlong *)(param_2 + 0x430) + 0x349) & 4;
  uVar5 = (**(code **)(**(longlong **)(param_2 + 0x430) + 0x5e0))();
  *(undefined1 *)((longlong)param_1 + 0x12) = uVar5;
  *(undefined1 *)((longlong)param_1 + 0x11) = uVar5;
  if ((0 < *(int *)(*(longlong *)(param_2 + 0x430) + 0xd98)) ||
     (0 < *(int *)(*(longlong *)(param_2 + 0x430) + 0xda8))) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 8;
  }
  if (((*(longlong *)(param_2 + 0x428) != 0) &&
      (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x428) + 0xae8), lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0x358) != 0)) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 8;
  }
  lVar2 = *(longlong *)(param_2 + 0x430);
  if ((((*(double *)(lVar2 + 0x628) != 0.0) || (NAN(*(double *)(lVar2 + 0x628)))) ||
      ((*(double *)(lVar2 + 0x630) != 0.0 ||
       ((NAN(*(double *)(lVar2 + 0x630)) || (*(double *)(lVar2 + 0x638) != 0.0)))))) ||
     (NAN(*(double *)(lVar2 + 0x638)))) {
    *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) | 8;
  }
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_5 + 0xc);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403e651a FUN_1403e651a body=30 status=ok
// SIG undefined FUN_1403e651a(void)

undefined8 FUN_1403e651a(undefined8 param_1,undefined8 param_2)

{
  FUN_14053055e(param_2,10);
  return param_2;
}



// FUNCTION 1403e6538 FUN_1403e6538 body=764 status=ok
// SIG undefined FUN_1403e6538(void)

void FUN_1403e6538(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar7 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x40);
    puVar7 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar7 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar7 = &PTR_FUN_14a240b70;
  puVar7[2] = 0;
  puVar7[3] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar7;
  lVar3 = FUN_144735828(&DAT_14ca63b10,param_1,4);
  if ((*(byte *)(lVar3 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar8 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(plVar1,0x50);
    puVar8 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar8 + 9;
  }
  lVar5 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  puVar8[1] = *(undefined8 *)(lVar3 + 8);
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 3;
  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
  *puVar8 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar8 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffff00000000;
  puVar8[7] = 0;
  puVar8[8] = lVar3;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  local_60 = plVar1;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    local_68 = lVar5;
    FUN_1447568fc(lVar5,iVar2);
    lVar5 = local_68;
  }
  plVar1 = local_60;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar8;
  *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar7[2] = puVar8;
  if ((*(byte *)(lVar3 + 0x68) & 0x80) == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x1c;
  }
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar4 = puVar8 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    local_68 = lVar5;
    FUN_140023dd8(local_60,0x50);
    puVar8 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
    puVar4 = puVar8 + 9;
    lVar5 = local_68;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  puVar8[1] = *(undefined8 *)(lVar3 + 8);
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 3;
  *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
  *puVar8 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar8 + 5) = uVar6;
  *(undefined8 *)((longlong)puVar8 + 0x2c) = 0xffffffff00000000;
  puVar8[7] = 0;
  puVar8[8] = lVar3;
  iVar2 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
    FUN_1447568fc(lVar5,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar8;
  *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar7[3] = puVar8;
  *(undefined4 *)(puVar7 + 4) = 0;
  local_50 = puVar7 + 2;
  FUN_1449865da();
  local_58 = DAT_14c9e5398;
  FUN_14498678e(param_1 + 0x1a8,local_60,&local_50);
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e6836 FUN_1403e6836 body=1210 status=ok
// SIG undefined FUN_1403e6836(void)

void FUN_1403e6836(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  ulonglong uVar5;
  longlong *plVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  longlong *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  uint local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  uint local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 *local_50;
  ulonglong local_48;
  ulonglong uVar10;
  
  uVar10 = param_3 & 0xffffffff;
  uVar8 = (undefined4)param_3;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bVar2 = *(byte *)(param_1 + 0x70);
  if ((bVar2 != 0) && (bVar2 - 1 < 4)) {
    lVar14 = *(longlong *)(param_1 + 0x40) + param_2[0x30];
    switch((uint)bVar2) {
    case 1:
      (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),lVar14);
      break;
    case 2:
      (**(code **)(param_1 + 0x20))
                (*(undefined8 *)
                  (*(longlong *)(param_2[0x1d] + 0x60) + (ulonglong)*(ushort *)(param_1 + 0x58) * 8)
                 ,*(undefined8 *)(param_1 + 0x28),lVar14);
      break;
    case 3:
      local_70 = param_2[0x1d];
      local_68 = (uint)*(ushort *)(param_1 + 0x58);
      (**(code **)(param_1 + 0x20))(&local_70,*(undefined8 *)(param_1 + 0x28),lVar14);
      break;
    case 4:
      local_90 = param_2[0x1d];
      local_80 = *(undefined8 *)(param_1 + 0x48);
      local_78 = *(undefined4 *)(param_1 + 0x50);
      local_88 = (uint)*(ushort *)(param_1 + 0x58);
      (**(code **)(param_1 + 0x20))(&local_90,&local_80,*(undefined8 *)(param_1 + 0x28));
    }
  }
  iVar16 = *(int *)(param_1 + 0x18);
  if (iVar16 != 0) {
    local_b1 = (undefined1)uVar10;
    local_a0 = param_1;
    if (*(char *)(param_2[0x1d] + 0x270) == '\0') {
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
LAB_1403e6981:
      local_b0 = *(longlong **)(param_1 + 0x10);
      uVar7 = *(uint *)(local_b0 + 2);
      if (uVar7 == 0) {
        uVar9 = 0x20;
        uVar11 = 0;
        uVar7 = 0;
      }
      else {
        uVar9 = 0;
        if (uVar7 != 0) {
          for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
          }
        }
        uVar11 = (uint)*(ushort *)*local_b0;
        uVar7 = 0;
        if ((uVar11 | 0xffff0000) != 0) {
          for (; ((uVar11 | 0xffff0000) >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
      }
      iVar15 = (int)local_b0[3] << 9;
      local_a8 = param_2 + 0x20;
      bVar3 = true;
      uVar10 = 0;
      local_98 = local_b0;
      do {
        lVar14 = (longlong)(int)((uVar7 & 0xff) + iVar15 + (uVar9 & 0xff) * 0x10) * 0x78 + *param_2;
        if (*(char *)((longlong)param_2 + 0x18c) == '\0') {
          iVar4 = *(int *)(lVar14 + 100);
          *(int *)(lVar14 + 100) = iVar4 + -1;
        }
        else {
          LOCK();
          piVar1 = (int *)(lVar14 + 100);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
        }
        if (iVar4 < 2) {
          if (iVar4 == 1) {
            if (*(char *)((longlong)param_2 + 0x18c) == '\0') {
              uVar12 = 0xff;
            }
            else {
              if ((*(byte *)(lVar14 + 0x71) & 2) == 0) {
                if ((*(byte *)(lVar14 + 0x71) & 1) == 0) {
                  local_60 = (longlong *)*local_a8;
                  puVar13 = (ulonglong *)0x0;
                  if (((ulonglong)local_60 & 0x3ffffff) != 0) {
                    puVar13 = (ulonglong *)
                              ((ulonglong)(((uint)local_60 & 0x3fff) * 0x18) +
                              *(longlong *)
                               (&DAT_14c833b00 +
                               (ulonglong)(((uint)local_60 & 0x3ffffff) >> 0xe) * 8));
                  }
                  local_50 = (undefined8 *)*puVar13;
                  if (((ulonglong)local_50 & 0x3ffffff) != 0) {
                    local_60 = param_2;
                    local_58 = lVar14;
                    FUN_1403e6cf1(&local_50,&local_60);
                    if (local_50 != (undefined8 *)0x0) {
                      LOCK();
                      piVar1 = (int *)(local_50 + 1);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      if (*piVar1 == 0) {
                        (**(code **)*local_50)(local_50,1);
                      }
                    }
                    goto LAB_1403e6a22;
                  }
                }
                FUN_1403e70f8(local_a8);
                plVar6 = (longlong *)param_2[0x1f];
                goto LAB_1403e6c09;
              }
              uVar12 = 0xfe;
            }
            FUN_1403e6836(lVar14,param_2,uVar12);
          }
          else {
            plVar6 = (longlong *)param_2[0x1f];
            if (plVar6 != (longlong *)0x0) {
LAB_1403e6c09:
              (**(code **)(*plVar6 + 0x10))();
            }
          }
        }
LAB_1403e6a22:
        uVar11 = uVar11 & ~(1 << (uVar7 & 0x1f));
        uVar7 = 0;
        if ((uVar11 | 0xffff0000) != 0) {
          for (; ((uVar11 | 0xffff0000) >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
        if ((short)uVar11 == 0 || uVar7 == 0x10) {
          if ((byte)uVar9 != 0x1f) {
            uVar7 = -2 << ((byte)uVar9 & 0x1f) & *(uint *)(local_b0 + 2);
            if (uVar7 == 0) {
              uVar9 = 0x20;
            }
            else {
              uVar9 = 0;
              if (uVar7 != 0) {
                for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
            }
            if (uVar7 == 0) {
              uVar7 = 0;
            }
            else {
              uVar7 = *(uint *)(local_b0 + 2) & ~(-1 << ((byte)uVar9 & 0x1f));
              uVar5 = (ulonglong)uVar7 - (ulonglong)(uVar7 >> 1 & 0x15555555);
              uVar5 = (uVar5 >> 2 & 0x3333333333333333) + (uVar5 & 0x3333333333333333);
              uVar11 = (uint)*(ushort *)
                              (*local_b0 +
                              (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38) * 2);
              uVar7 = 0;
              if ((uVar11 | 0xffff0000) != 0) {
                for (; ((uVar11 | 0xffff0000) >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                }
              }
            }
            goto LAB_1403e6a72;
          }
          uVar7 = 0;
LAB_1403e6a78:
          uVar9 = (int)uVar10 + 1;
          uVar10 = (ulonglong)uVar9;
          if ((int)uVar9 < iVar16) {
            lVar14 = (longlong)(int)uVar9;
            local_b0 = local_98 + lVar14 * 4;
            uVar7 = *(uint *)(local_98 + lVar14 * 4 + 2);
            iVar15 = (int)local_98[lVar14 * 4 + 3] << 9;
            bVar3 = true;
            if (uVar7 == 0) {
              uVar9 = 0x20;
              uVar11 = 0;
              uVar7 = 0;
            }
            else {
              uVar9 = 0;
              if (uVar7 != 0) {
                for (; (uVar7 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
                }
              }
              uVar11 = (uint)*(ushort *)*local_b0;
              uVar7 = 0;
              if ((uVar11 | 0xffff0000) != 0) {
                for (; ((uVar11 | 0xffff0000) >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
                }
              }
            }
          }
          else {
            iVar15 = 0;
            if (bVar3) {
              bVar3 = false;
            }
            uVar9 = 0x20;
          }
        }
        else {
LAB_1403e6a72:
          if (0x1f < (byte)uVar9) goto LAB_1403e6a78;
        }
      } while ((int)uVar10 != iVar16 || bVar3);
    }
    else {
      LOCK();
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      UNLOCK();
      iVar16 = *(int *)(param_1 + 0x18);
      if (iVar16 != 0) goto LAB_1403e6981;
    }
    if (*(char *)(param_2[0x1d] + 0x270) == '\0') {
      iVar16 = *(int *)(local_a0 + 0x68);
      *(int *)(local_a0 + 0x68) = iVar16 + -1;
    }
    else {
      LOCK();
      piVar1 = (int *)(local_a0 + 0x68);
      iVar16 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
    }
    uVar8 = (undefined4)CONCAT71((int7)(uVar10 >> 8),local_b1);
    param_1 = local_a0;
    if (iVar16 != 1) goto LAB_1403e6cb6;
  }
  FUN_144986a24(param_2,param_1,uVar8);
LAB_1403e6cb6:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1403e6cf1 FUN_1403e6cf1 body=1030 status=ok
// SIG undefined FUN_1403e6cf1(void)

longlong * FUN_1403e6cf1(longlong *param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  puVar8 = TlsGetValue(DAT_14c896140);
  if (puVar8 == (undefined8 *)0x0) {
    puVar8 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    *puVar8 = 0;
    puVar8[1] = 0;
    *(undefined4 *)(puVar8 + 2) = 0;
    TlsSetValue(DAT_14c896140,puVar8);
  }
  puVar11 = (undefined8 *)puVar8[1];
  if (puVar11 == (undefined8 *)0x0) {
    puVar11 = (undefined8 *)*puVar8;
    if (puVar11 == (undefined8 *)0x0) {
      uVar14 = (uint)DAT_14c896180;
      uVar6 = DAT_14c896180;
      while (DAT_14c896180 = uVar6, local_58 = uVar6, (uVar6 & 0x3ffffff) != 0) {
        local_60 = (uVar6 & 0xfffffffffc000000) + 0x4000000;
        if (local_60 >> 0x1a < uVar6 >> 0x1a) {
          FUN_14000f986(0x3a83126f);
        }
        uVar13 = (ulonglong)((uVar14 & 0x3ffffff) >> 0xe);
        uVar15 = (ulonglong)((uint)uVar6 & 0x3fff);
        local_60 = local_60 & 0xfffffffffc000000 |
                   (ulonglong)
                   *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + 0x10 + uVar15 * 0x18);
        LOCK();
        bVar16 = local_58 == DAT_14c896180;
        uVar6 = local_60;
        if (!bVar16) {
          uVar6 = DAT_14c896180;
        }
        DAT_14c896180 = uVar6;
        UNLOCK();
        if (bVar16) {
          *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + uVar15 * 0x18 + 0x10) = 0;
          puVar11 = *(undefined8 **)
                     (*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + 8 +
                     (ulonglong)(uVar14 & 0x3fff) * 0x18);
          FUN_1447d080c(uVar14 & 0x3ffffff);
          puVar8[1] = puVar11;
          if (puVar11 != (undefined8 *)0x0) goto LAB_1403e6e95;
          goto LAB_1403e70ae;
        }
        uVar14 = (uint)DAT_14c896180;
        uVar6 = DAT_14c896180;
      }
      puVar8[1] = 0;
LAB_1403e70ae:
      puVar11 = (undefined8 *)FUN_14001cc68(0x10000,0);
      puVar8[1] = puVar11;
      iVar7 = 0xff;
      puVar12 = puVar11;
      do {
        puVar9 = puVar12 + 0x20;
        *puVar12 = puVar9;
        iVar7 = iVar7 + -1;
        puVar12 = puVar9;
      } while (iVar7 != 0);
    }
    else {
      puVar8[1] = puVar11;
      puVar9 = puVar8;
    }
    *puVar9 = 0;
LAB_1403e6e95:
    *(undefined4 *)(puVar8 + 2) = 0x100;
    iVar7 = 0xff;
  }
  else {
    iVar7 = *(int *)(puVar8 + 2) + -1;
  }
  puVar8[1] = *puVar11;
  *(int *)(puVar8 + 2) = iVar7;
  *puVar11 = UE::Tasks::Private::FTaskBase::vftable;
  puVar11[1] = &DAT_100000002;
  puVar11[2] = 0;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)(puVar11 + 4) = 0xffffffff;
  puVar11[6] = 0;
  puVar11[7] = 0x100000000;
  *(undefined1 *)(puVar11 + 8) = 1;
  puVar11[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
  puVar11[0xf] = 0;
  puVar11[0x10] = 0xe800000000000020;
  puVar11[0x12] = 0;
  puVar11[0x13] = 0x100000000;
  *(undefined2 *)(puVar11 + 0x14) = 0;
  LOCK();
  bVar16 = *(char *)(puVar11 + 8) == '\x01';
  if (bVar16) {
    *(char *)(puVar11 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar16) {
    FUN_14008cdb0(puVar11 + 8);
  }
  *puVar11 = &PTR_FUN_14a480d18;
  if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
  }
  puVar11[0xe] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::
                 TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                 ::vftable;
  puVar11[9] = puVar11;
  puVar11[10] = puVar11;
  lVar2 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
  if (lVar2 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(lVar2 + 0x30);
  }
  puVar11[0xf] = uVar10;
  puVar11[0x10] = 0xc000005291d99a00;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *(undefined4 *)(puVar11 + 0x15) = *param_2;
  *(undefined4 *)((longlong)puVar11 + 0xac) = uVar3;
  *(undefined4 *)(puVar11 + 0x16) = uVar4;
  *(undefined4 *)((longlong)puVar11 + 0xb4) = uVar5;
  *puVar11 = &PTR_FUN_14a480d08;
  puVar8 = (undefined8 *)*param_1;
  if (puVar8 != (undefined8 *)0x0) {
    *param_1 = 0;
    LOCK();
    piVar1 = (int *)(puVar8 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar8)(puVar8,1);
    }
  }
  *param_1 = (longlong)puVar11;
  local_58 = CONCAT71(local_58._1_7_,1);
  FUN_1447439e4(puVar11);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e70f8 FUN_1403e70f8 body=603 status=ok
// SIG undefined FUN_1403e70f8(void)

ulonglong FUN_1403e70f8(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  
  uVar3 = FUN_14493c560();
  if (uVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (ulonglong)((uVar3 & 0x3fff) * 0x18) +
            *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar3 >> 0xe) * 8);
  }
  *(undefined8 *)(lVar6 + 8) = param_2;
  do {
    while( true ) {
      do {
        uVar2 = *(ulonglong *)(param_1 + 0x40);
        if ((uVar2 & 0x3ffffff) == 0) {
          puVar7 = (ulonglong *)0x0;
        }
        else {
          puVar7 = (ulonglong *)
                   ((ulonglong)(((uint)uVar2 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)(((uint)uVar2 & 0x3ffffff) >> 0xe) * 8)
                   );
        }
        uVar5 = *puVar7;
      } while (*(ulonglong *)(param_1 + 0x40) != uVar2);
      if ((uVar5 & 0x3ffffff) == 0) break;
      uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
      if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
        FUN_14000f986(0x3a83126f);
      }
      LOCK();
      if (uVar2 == *(ulonglong *)(param_1 + 0x40)) {
        *(ulonglong *)(param_1 + 0x40) = uVar4 | (uint)uVar5 & 0x3ffffff;
      }
      UNLOCK();
    }
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14000f986(0x3a83126f);
    }
    LOCK();
    uVar1 = *puVar7;
    if (uVar5 == uVar1) {
      *puVar7 = uVar4 | uVar3;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  uVar5 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
  if (uVar5 >> 0x1a < uVar2 >> 0x1a) {
    FUN_14000f986(0x3a83126f);
  }
  LOCK();
  uVar4 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 == uVar4) {
    *(ulonglong *)(param_1 + 0x40) = uVar5 | uVar3;
    uVar4 = uVar2;
  }
  UNLOCK();
  return uVar4;
}



// FUNCTION 1403e7354 FUN_1403e7354 body=673 status=ok
// SIG undefined FUN_1403e7354(void)

longlong FUN_1403e7354(longlong *param_1,uint param_2,undefined8 *param_3)

{
  void *_Src;
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined1 auStack_c8 [32];
  int local_a8 [2];
  undefined8 *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  uint local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = FUN_1449870e2();
  if (iVar2 != -1) {
    if (*param_1 + (longlong)iVar2 * 0x58 != 0) {
      lVar4 = (longlong)iVar2 * 0x58 + *param_1;
      goto LAB_1403e73a4;
    }
  }
  FUN_1403e7758(param_1,local_a8);
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_140056680();
  uStack_70._4_4_ = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = local_68 & 0xffffff00;
  *local_a0 = 0;
  iVar2 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(local_a0 + 1) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)((longlong)local_a0 + 0xc) = 0;
    uStack_70._0_4_ = 0;
    local_78 = 0;
    uStack_80._4_4_ = 0;
    uVar7 = 0;
    local_88 = 0;
  }
  else {
    FUN_1446dd670(local_a0,iVar2,0);
    memcpy((void *)*local_a0,_Src,(longlong)iVar2 * 2);
    uVar7 = (undefined4)uStack_80;
  }
  local_a0[2] = local_98;
  local_98 = 0;
  *(undefined4 *)(local_a0 + 3) = (undefined4)uStack_90;
  *(undefined4 *)((longlong)local_a0 + 0x1c) = uStack_90._4_4_;
  uStack_90 = 0;
  local_a0[4] = local_88;
  local_88 = 0;
  *(undefined4 *)(local_a0 + 5) = uVar7;
  *(undefined4 *)((longlong)local_a0 + 0x2c) = uStack_80._4_4_;
  uStack_80 = 0;
  local_a0[6] = local_78;
  local_78 = 0;
  *(undefined4 *)(local_a0 + 7) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)local_a0 + 0x3c) = uStack_70._4_4_;
  uStack_70 = 0;
  *(undefined4 *)(local_a0 + 9) = uStack_60;
  local_a0[8] = CONCAT44(uStack_64,local_68);
  FUN_1403e75f6(0,0);
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  FUN_1403e75f6(local_88,uStack_80 & 0xffffffff);
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(local_a0 + 10) = 0xffffffff;
  cVar1 = FUN_1403e7624(param_1,param_2,local_a0);
  if (cVar1 == '\0') {
    uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar3 < 4) {
      iVar2 = 1;
    }
    else {
      uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar2 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar2 <= (int)param_1[9])) {
      param_2 = (int)param_1[9] - 1U & param_2;
      *(uint *)((longlong)local_a0 + 0x54) = param_2;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(undefined4 *)(local_a0 + 10) =
           *(undefined4 *)
            ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
           local_a8[0];
    }
    else {
      *(int *)(param_1 + 9) = iVar2;
      FUN_1403e7b96(param_1);
    }
  }
  lVar4 = *param_1 + (longlong)local_a8[0] * 0x58;
LAB_1403e73a4:
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar4 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1403e75f6 FUN_1403e75f6 body=45 status=ok
// SIG undefined FUN_1403e75f6(void)

void FUN_1403e75f6(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 3;
  }
  return;
}



// FUNCTION 1403e7624 FUN_1403e7624 body=308 status=ok
// SIG undefined FUN_1403e7624(void)

undefined8 FUN_1403e7624(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar5 = FUN_1449870e2(), iVar5 != -1)) {
    lVar3 = *param_1;
    lVar9 = (longlong)iVar5 * 0x58;
    plVar7 = (longlong *)(lVar3 + lVar9);
    FUN_1403e75f6(*(undefined8 *)(lVar3 + 0x30 + lVar9),*(undefined4 *)(lVar3 + 0x38 + lVar9));
    if (*(longlong *)(lVar3 + 0x30 + lVar9) != 0) {
      FUN_1400020a8();
    }
    FUN_1403e75f6(plVar7[4],(int)plVar7[5]);
    if (plVar7[4] != 0) {
      FUN_1400020a8();
    }
    if (plVar7[2] != 0) {
      FUN_1400020a8();
    }
    if (*plVar7 != 0) {
      FUN_1400020a8();
    }
    memmove(plVar7,param_3,0x50);
    iVar2 = *param_4;
    lVar3 = *param_1;
    if (*(int *)((longlong)param_1 + 0x34) != 0) {
      *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x58) = iVar2;
    }
    *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x58) = 0xffffffff;
    uVar6 = 0xffffffff;
    if (0 < *(int *)((longlong)param_1 + 0x34)) {
      uVar6 = (undefined4)param_1[6];
    }
    *(undefined4 *)(lVar3 + (longlong)iVar2 * 0x58 + 4) = uVar6;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
    plVar7 = param_1 + 2;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[4];
    }
    iVar8 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar8 = iVar2;
    }
    bVar4 = (byte)iVar2 & 0x1f;
    puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar8 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    *param_4 = iVar5;
    return CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
  }
  return 0;
}



// FUNCTION 1403e7758 FUN_1403e7758 body=715 status=ok
// SIG undefined FUN_1403e7758(void)

int * FUN_1403e7758(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
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
      FUN_1403e7a24(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1403e791a;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_1403e791a:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x58);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x58) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x58 + *param_1;
  return param_2;
}



// FUNCTION 1403e7a24 FUN_1403e7a24 body=369 status=ok
// SIG undefined FUN_1403e7a24(void)

void FUN_1403e7a24(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1403e7aab;
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
LAB_1403e7aab:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 1403e7b96 FUN_1403e7b96 body=805 status=ok
// SIG undefined FUN_1403e7b96(void)

void FUN_1403e7b96(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined2 *puVar17;
  int iVar18;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_1403e7c0b;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar9 != uVar3);
LAB_1403e7c0b:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar7 = 0;
    uVar11 = 1;
    iVar10 = 0;
    iVar18 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar14;
    if (uVar9 == 0) {
      iVar18 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar18 = iVar6 + -1;
      }
      uVar7 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar7;
      }
      iVar18 = 0;
      do {
        if (uVar11 == uVar7) {
          return;
        }
        iVar18 = iVar18 + 0x20;
        uVar9 = puVar14[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar7 = 0;
      iVar18 = 0;
    }
    uVar11 = (ulonglong)(-uVar9 & uVar9);
    uVar8 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar10) {
      iVar10 = iVar6;
    }
  }
  if (iVar10 < iVar6) {
    uVar9 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x58);
      iVar6 = *(int *)(*param_1 + 8 + (longlong)iVar10 * 0x58);
      iVar12 = iVar6 + -1;
      if (iVar6 == 0) {
        iVar12 = 0;
      }
      uVar3 = 0;
      if (0 < iVar12) {
        puVar17 = &DAT_149dfb77a;
        if (iVar6 != 0) {
          puVar17 = (undefined2 *)*puVar2;
        }
        lVar15 = 0;
        uVar3 = 0;
        do {
          uVar4 = ((uint)(ushort)puVar17[lVar15] +
                  (uint)(0x19 < (ushort)puVar17[lVar15] - 0x61) * 0x20) - 0x20;
          uVar3 = uVar3 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar3 ^ uVar4) & 0xff) * 4);
          uVar3 = uVar3 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar3 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
          lVar15 = lVar15 + 1;
        } while (iVar12 != (int)lVar15);
      }
      uVar8 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar8;
      *(int *)((longlong)puVar2 + 0x54) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(puVar2 + 10) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      uVar9 = uVar9 & ~(uint)uVar11;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar10 = (int)uVar7;
      lVar15 = (longlong)iVar10;
      uVar3 = puVar14[lVar15] & uVar9;
      if (uVar3 == 0) {
        iVar12 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar12 = iVar6 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar13 = iVar12;
        if (iVar12 < iVar10) {
          iVar13 = iVar10;
        }
        if (iVar12 <= iVar10) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar3 = puVar14[lVar15 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar13 - lVar15 == lVar16) {
            return;
          }
        }
        uVar7 = (ulonglong)(iVar10 + (int)lVar16 + 1);
        uVar9 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar11 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar10 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar6);
  }
  return;
}



// FUNCTION 1403e7ebb FUN_1403e7ebb body=111 status=ok
// SIG undefined FUN_1403e7ebb(void)

void FUN_1403e7ebb(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x28);
    do {
      plVar3 = (longlong *)*plVar4;
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar3 = (longlong *)plVar4[-3];
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar4 = plVar4 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1403e7f2a FUN_1403e7f2a body=256 status=ok
// SIG undefined FUN_1403e7f2a(void)

bool FUN_1403e7f2a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *param_1;
  if (lVar3 == 0) {
    bVar5 = false;
    goto LAB_1403e7f54;
  }
  bVar5 = true;
  if (param_1[1] != 0) goto LAB_1403e7f54;
  local_48[1] = 0;
  local_48[2] = param_1[2];
  if (local_48[2] != 0) {
    LOCK();
    *(int *)(local_48[2] + 8) = *(int *)(local_48[2] + 8) + 1;
    UNLOCK();
  }
  local_48[0] = lVar3;
  FUN_1402df5c4(&local_30,local_48);
  plVar1 = local_28;
  param_1[1] = local_30;
  local_30 = 0;
  plVar4 = (longlong *)param_1[2];
  if (local_28 == plVar4) {
LAB_1403e8007:
    plVar4 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    local_28 = (longlong *)0x0;
    param_1[2] = (longlong)plVar1;
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
      goto LAB_1403e8007;
    }
  }
  bVar5 = param_1[1] != 0;
LAB_1403e7f54:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar5;
}


