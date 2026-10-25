// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1405e1758 FUN_1405e1758 body=306 status=ok
// SIG undefined FUN_1405e1758(void)

void FUN_1405e1758(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1405e1793;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_1405e1793:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_1405e17d6;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1405e17d6:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined4 *)((longlong)(int)lVar3 * 4 + lVar4 + lVar6 * 4) =
           *(undefined4 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001405e185f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 1405e188a FUN_1405e188a body=1188 status=ok
// SIG undefined FUN_1405e188a(void)

int FUN_1405e188a(longlong param_1,uint *param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong uVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int local_6c;
  
  uVar15 = 0;
  local_6c = 0;
  if (*(int *)(param_1 + 0x58) == 0) {
LAB_1405e1a27:
    uVar17 = param_2[8];
    if (uVar17 == 0) {
      uVar8 = 1;
      uVar12 = 0;
      iVar16 = 0;
    }
    else {
      uVar15 = *param_2;
      uVar12 = 0;
      iVar16 = 0;
      if (uVar15 == 0) {
        uVar12 = 0;
        do {
          iVar7 = uVar17 - 1;
          if ((int)(uVar17 - 1) < 0) {
            iVar7 = uVar17 + 0x1e;
          }
          uVar15 = iVar7 >> 5;
          if (iVar7 >> 5 < 1) {
            uVar15 = 0;
          }
          if (uVar12 == uVar15) {
            return local_6c;
          }
          iVar16 = iVar16 + 0x20;
          uVar15 = param_2[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar15 == 0);
      }
      uVar8 = (ulonglong)(-uVar15 & uVar15);
      uVar2 = uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      uVar15 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar15) {
        uVar15 = uVar17;
      }
    }
    if ((int)uVar15 < (int)uVar17) {
      uVar6 = 0xffffffff;
      do {
        if (*(int *)(param_1 + 0x58) != 0) {
          lVar10 = *(longlong *)(param_1 + 0x50);
          if (*(longlong *)(param_1 + 0x50) == 0) {
            lVar10 = param_1 + 0x48;
          }
          iVar7 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & uVar15 & 0xffff) * 4
                          );
          do {
            iVar5 = iVar7;
            if (iVar5 == -1) goto LAB_1405e1bc9;
            lVar10 = *(longlong *)(param_1 + 0x10);
            iVar7 = *(int *)(lVar10 + 4 + (longlong)iVar5 * 0xc);
          } while (*(short *)(lVar10 + (longlong)iVar5 * 0xc) != (short)uVar15);
          do {
            uVar3 = *(ushort *)(lVar10 + 2 + (longlong)iVar5 * 0xc);
            iVar5 = *(int *)(param_3 + 0x20);
            if (uVar3 == 0xffff) {
              uVar17 = 0xffff;
LAB_1405e1b1c:
              iVar13 = uVar17 + 1;
              iVar14 = iVar13 - iVar5;
              if (iVar14 != 0 && iVar5 <= iVar13) {
                if (iVar5 == 0) {
LAB_1405e1b50:
                  if (*(int *)(param_3 + 0x24) <= (int)uVar17) {
                    *(undefined4 *)(param_3 + 0x24) = 0x100;
                    FUN_14497ddce(param_3,iVar5);
                    iVar13 = *(int *)(param_3 + 0x20) + iVar14;
                  }
                  iVar9 = iVar13 + 0x1f;
                  if (-1 < iVar13) {
                    iVar9 = iVar13;
                  }
                  *(int *)(param_3 + 0x20) = iVar13;
                  if (iVar13 % 0x20 != 0) {
                    bVar4 = -(char)(iVar13 % 0x20);
                    *(uint *)(param_3 + (longlong)(iVar9 >> 5) * 4) =
                         (uint)(*(int *)(param_3 + (longlong)(iVar9 >> 5) * 4) << (bVar4 & 0x1f)) >>
                         (bVar4 & 0x1f);
                  }
                }
                else {
                  iVar9 = iVar5 + 0x1e;
                  if (-1 < iVar5 + -1) {
                    iVar9 = iVar5 + -1;
                  }
                  if (iVar9 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1405e1b50;
                  *(int *)(param_3 + 0x20) = iVar13;
                }
                FUN_1447c45ca(param_3,iVar5,iVar14,0);
              }
              puVar1 = (uint *)(param_3 + (ulonglong)(uVar17 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)uVar17 & 0x1f);
              local_6c = local_6c + 1;
            }
            else {
              uVar17 = (uint)uVar3;
              if ((iVar5 <= (int)(uint)uVar3) ||
                 (uVar17 = (uint)uVar3,
                 (*(uint *)(param_3 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0))
              goto LAB_1405e1b1c;
            }
            do {
              iVar5 = iVar7;
              if (iVar5 == -1) {
                uVar17 = param_2[8];
                goto LAB_1405e1bc9;
              }
              lVar10 = *(longlong *)(param_1 + 0x10);
              iVar7 = *(int *)(lVar10 + 4 + (longlong)iVar5 * 0xc);
            } while (*(short *)(lVar10 + (longlong)iVar5 * 0xc) != (short)uVar15);
          } while( true );
        }
LAB_1405e1bc9:
        uVar6 = uVar6 & ~(uint)uVar8;
        iVar7 = (int)uVar12;
        lVar10 = (longlong)iVar7;
        uVar15 = param_2[lVar10] & uVar6;
        if (uVar15 == 0) {
          iVar5 = uVar17 + 0x1e;
          if (-1 < (int)(uVar17 - 1)) {
            iVar5 = uVar17 - 1;
          }
          iVar13 = iVar5 >> 5;
          if (iVar5 >> 5 < iVar7) {
            iVar13 = iVar7;
          }
          lVar11 = 0;
          do {
            if (iVar13 - lVar10 == lVar11) {
              return local_6c;
            }
            iVar16 = iVar16 + 0x20;
            uVar15 = param_2[lVar10 + lVar11 + 1];
            lVar11 = lVar11 + 1;
          } while (uVar15 == 0);
          uVar12 = (ulonglong)(uint)(iVar7 + (int)lVar11);
          uVar6 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar15 & uVar15);
        uVar2 = uVar8 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar15 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while ((int)uVar15 < (int)uVar17);
    }
    return local_6c;
  }
  lVar10 = param_1 + 0x48;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    lVar10 = *(longlong *)(param_1 + 0x50);
  }
  iVar16 = *(int *)(lVar10 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & 0xffff) * 4);
  do {
    iVar7 = iVar16;
    if (iVar7 == -1) goto LAB_1405e1a27;
    lVar10 = *(longlong *)(param_1 + 0x10);
    iVar16 = *(int *)(lVar10 + 4 + (longlong)iVar7 * 0xc);
  } while (*(short *)(lVar10 + (longlong)iVar7 * 0xc) != -1);
  local_6c = 0;
  do {
    uVar3 = *(ushort *)(lVar10 + 2 + (longlong)iVar7 * 0xc);
    iVar7 = *(int *)(param_3 + 0x20);
    if (uVar3 == 0xffff) {
      uVar17 = 0xffff;
LAB_1405e1937:
      iVar5 = uVar17 + 1;
      iVar13 = iVar5 - iVar7;
      if (iVar13 != 0 && iVar7 <= iVar5) {
        if (iVar7 == 0) {
LAB_1405e196b:
          if (*(int *)(param_3 + 0x24) <= (int)uVar17) {
            *(undefined4 *)(param_3 + 0x24) = 0x100;
            FUN_14497ddce(param_3,iVar7);
            iVar5 = *(int *)(param_3 + 0x20) + iVar13;
          }
          iVar14 = iVar5 + 0x1f;
          if (-1 < iVar5) {
            iVar14 = iVar5;
          }
          *(int *)(param_3 + 0x20) = iVar5;
          if (iVar5 % 0x20 != 0) {
            bVar4 = -(char)(iVar5 % 0x20);
            *(uint *)(param_3 + (longlong)(iVar14 >> 5) * 4) =
                 (uint)(*(int *)(param_3 + (longlong)(iVar14 >> 5) * 4) << (bVar4 & 0x1f)) >>
                 (bVar4 & 0x1f);
          }
        }
        else {
          iVar14 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar14 = iVar7 + -1;
          }
          if (iVar14 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1405e196b;
          *(int *)(param_3 + 0x20) = iVar5;
        }
        FUN_1447c45ca(param_3,iVar7,iVar13,0);
      }
      puVar1 = (uint *)(param_3 + (ulonglong)(uVar17 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar17 & 0x1f);
      local_6c = local_6c + 1;
    }
    else {
      uVar17 = (uint)uVar3;
      if ((iVar7 <= (int)(uint)uVar3) ||
         (uVar17 = (uint)uVar3,
         (*(uint *)(param_3 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0))
      goto LAB_1405e1937;
    }
    do {
      iVar7 = iVar16;
      if (iVar7 == -1) goto LAB_1405e1a27;
      lVar10 = *(longlong *)(param_1 + 0x10);
      iVar16 = *(int *)(lVar10 + 4 + (longlong)iVar7 * 0xc);
    } while (*(short *)(lVar10 + (longlong)iVar7 * 0xc) != -1);
  } while( true );
}



// FUNCTION 1405e1d2e FUN_1405e1d2e body=198 status=ok
// SIG undefined FUN_1405e1d2e(void)

void FUN_1405e1d2e(longlong param_1,ushort param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x118) != 0) {
    lVar1 = param_1 + 0x108;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x110);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0x118) - 1U & (uint)param_2) * 4);
    while (iVar2 = iVar3, iVar2 != -1) {
      lVar1 = *(longlong *)(param_1 + 0xd0);
      iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
      if (*(ushort *)(lVar1 + (longlong)iVar2 * 0xc) == param_2) {
        do {
          FUN_1405e0ab4(*param_3,*(undefined2 *)(lVar1 + 2 + (longlong)iVar2 * 0xc),
                        *(undefined2 *)(param_3 + 1));
          FUN_1405e1d2e(param_1,*(undefined2 *)
                                 (*(longlong *)(param_1 + 0xd0) + 2 + (longlong)iVar2 * 0xc),param_3
                       );
          do {
            iVar2 = iVar3;
            if (iVar2 == -1) {
              return;
            }
            lVar1 = *(longlong *)(param_1 + 0xd0);
            iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar2 * 0xc);
          } while (*(ushort *)(lVar1 + (longlong)iVar2 * 0xc) != param_2);
        } while( true );
      }
    }
  }
  return;
}



// FUNCTION 1405e1df4 FUN_1405e1df4 body=1432 status=ok
// SIG undefined FUN_1405e1df4(void)

undefined8 * FUN_1405e1df4(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined1 auStack_c8 [44];
  int local_9c;
  longlong *local_98;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *param_1 = &PTR_FUN_14ada53e0;
  if (param_1[0x5e] != 0) {
    FUN_1405e238e(param_1[0x5e]);
    FUN_1400020a8();
    param_1[0x5e] = 0;
  }
  plVar11 = param_1 + 0x54;
  puVar1 = (uint *)(param_1 + 0x56);
  iVar13 = *(int *)(param_1 + 0x59);
  if (iVar13 == 0) {
    uVar17 = 1;
    uVar16 = 0;
    iVar12 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = (uint *)param_1[0x58];
    if ((uint *)param_1[0x58] == (uint *)0x0) {
      puVar5 = puVar1;
    }
    uVar18 = *puVar5;
    if (uVar18 == 0) {
      iVar12 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar12 = iVar13 + -1;
      }
      uVar16 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar16) {
          iVar3 = 1;
          goto LAB_1405e1e86;
        }
        iVar12 = iVar12 + 0x20;
        uVar18 = puVar5[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar17 = (ulonglong)(-uVar18 & uVar18);
    uVar10 = uVar17 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar9 = (iVar12 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar9) {
      iVar9 = iVar13;
    }
  }
  iVar3 = iVar13;
  if (iVar9 != iVar13) {
    uVar18 = 0xffffffff;
    local_9c = param_2;
    local_98 = plVar11;
    do {
      plVar11 = *(longlong **)(*local_98 + 8 + (longlong)iVar9 * 0x18);
      if (plVar11 != (longlong *)0x0) {
        plVar14 = (longlong *)(*local_98 + (longlong)iVar9 * 0x18 + 8);
        (**(code **)(*plVar11 + 0x20))();
        puVar19 = (undefined8 *)*plVar14;
        if (puVar19 != (undefined8 *)0x0) {
          (**(code **)*puVar19)(puVar19,1);
        }
        *plVar14 = 0;
        iVar3 = *(int *)(param_1 + 0x59);
      }
      uVar18 = uVar18 & ~(uint)uVar17;
      puVar5 = (uint *)param_1[0x58];
      if ((uint *)param_1[0x58] == (uint *)0x0) {
        puVar5 = puVar1;
      }
      iVar9 = (int)uVar16;
      lVar4 = (longlong)iVar9;
      uVar6 = puVar5[lVar4] & uVar18;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar9 < iVar7) {
          lVar15 = 0;
          do {
            uVar6 = puVar5[lVar4 + lVar15 + 1];
            if (uVar6 != 0) {
              uVar16 = (ulonglong)(iVar9 + (int)lVar15 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1405e20b9;
            }
            iVar12 = iVar12 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar8 - lVar4 != lVar15);
          uVar18 = 0xffffffff;
          lVar4 = (longlong)iVar8;
        }
        uVar16 = lVar4 + 1U & 0xffffffff;
        iVar9 = iVar3;
      }
      else {
LAB_1405e20b9:
        uVar17 = (ulonglong)(-uVar6 & uVar6);
        uVar10 = uVar17 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar9 = (iVar12 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar9) {
          iVar9 = iVar3;
        }
      }
      plVar11 = local_98;
      param_2 = local_9c;
    } while (iVar9 != iVar13);
  }
LAB_1405e1e86:
  iVar13 = *(int *)(param_1 + 0x5d);
  if (iVar13 < 2) {
    puVar19 = param_1 + 0x5b;
    if ((undefined8 *)param_1[0x5c] != (undefined8 *)0x0) {
      puVar19 = (undefined8 *)param_1[0x5c];
    }
    iVar12 = iVar13 + 3;
    if (-1 < iVar13) {
      iVar12 = iVar13;
    }
    if (*(int *)(param_1 + 0x55) - *(int *)((longlong)param_1 + 0x2d4) < iVar12 >> 2) {
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = puVar1;
      if (iVar3 == 0) {
        iVar13 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar13 = *(int *)(param_1 + 0x59);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_88 = (undefined4)local_68;
      uStack_84 = local_68._4_4_;
      uStack_80 = (undefined4)uStack_60;
      uStack_7c = uStack_60._4_4_;
      local_78 = local_58;
      uVar2 = local_78;
      local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar12 = local_78._4_4_;
      local_90 = plVar11;
      if ((local_78._4_4_ != iVar13) || (local_78 = uVar2, uStack_60 != puVar1)) {
        do {
          local_78 = uVar2;
          *(undefined4 *)
           ((longlong)puVar19 + (longlong)*(int *)(*local_90 + 0x14 + (longlong)iVar12 * 0x18) * 4)
               = 0xffffffff;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
          FUN_1449c0562(&local_88);
          iVar12 = local_78._4_4_;
          uVar2 = local_78;
        } while (local_90 != plVar11 ||
                 ((uint *)CONCAT44(uStack_7c,uStack_80) != puVar1 || local_78._4_4_ != iVar13));
      }
    }
    else if (iVar13 == 1) {
      lVar4 = 0;
      do {
        *(undefined4 *)((longlong)puVar19 + lVar4 * 4) = 0xffffffff;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x5d));
    }
    *(undefined4 *)(param_1 + 0x55) = 0;
    if (*(int *)((longlong)param_1 + 0x2ac) != 0) {
      FUN_144727cd0(plVar11,0);
    }
    param_1[0x5a] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x59) = 0;
    if (0x80 < *(uint *)((longlong)param_1 + 0x2cc)) {
      *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x80;
      FUN_1446efbd8(puVar1,0);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x55) = 0;
    if (*(int *)((longlong)param_1 + 0x2ac) != 0) {
      FUN_144727cd0(plVar11,0);
    }
    param_1[0x5a] = 0xffffffff;
    *(undefined4 *)(param_1 + 0x59) = 0;
    if (0x80 < *(uint *)((longlong)param_1 + 0x2cc)) {
      *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x80;
      FUN_1446efbd8(puVar1,0);
    }
    *(undefined4 *)(param_1 + 0x5d) = 1;
    FUN_1400e567a(plVar11);
  }
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (param_1[0x5c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x55) = 0;
  if (*(int *)((longlong)param_1 + 0x2ac) != 0) {
    FUN_144727cd0(plVar11,0);
  }
  param_1[0x5a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2cc)) {
    *(undefined4 *)((longlong)param_1 + 0x2cc) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  if (*plVar11 != 0) {
    FUN_1400020a8();
  }
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405e238e FUN_1405e238e body=76 status=ok
// SIG undefined FUN_1405e238e(void)

void FUN_1405e238e(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x28)) {
    FUN_1405e23da(param_1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1405e23da FUN_1405e23da body=124 status=ok
// SIG undefined FUN_1405e23da(void)

void FUN_1405e23da(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x18))(plVar3);
        (**(code **)*plVar3)(plVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (-1 < *(int *)(param_1 + 0x2c)) {
    return;
  }
  FUN_14183a8e8(param_1 + 0x20,0);
  return;
}



// FUNCTION 1405e2456 FUN_1405e2456 body=772 status=ok
// SIG undefined FUN_1405e2456(void)

short * FUN_1405e2456(longlong *param_1,short *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ushort uVar14;
  short sVar15;
  int iVar16;
  longlong lVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  uint uVar21;
  float fVar22;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  float local_c0;
  int local_b8;
  longlong local_a8;
  short *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar3 = (undefined8 *)param_1[0x53];
  if (puVar3 == (undefined8 *)0x0) {
    uVar21 = 0;
  }
  else {
    if ((*(byte *)(param_3 + 0x1df0) & 1) == 0) {
      iVar1 = (int)param_1[0x10f];
      if (iVar1 < 1) {
        local_a8 = param_3;
        local_a0 = param_2;
        if (((int)param_1[0x55] == 0) || (lVar4 = *(longlong *)*puVar3, *(int *)(lVar4 + 0x38) < 1))
        {
          cVar8 = '\0';
        }
        else {
          uVar2 = *(undefined4 *)(param_1[0x42] + 8);
          lVar5 = param_1[0x54];
          lVar20 = 0;
          lVar17 = 0;
          do {
            lVar11 = *(longlong *)(lVar5 + 0x40);
            if (lVar11 == 0) {
              lVar11 = lVar5 + 0x30;
            }
            uVar12 = (**(code **)(**(longlong **)(lVar11 + lVar20) + 0x2f0))();
            plVar13 = (longlong *)FUN_14485b2b4(uVar12,uVar2);
            cVar8 = (**(code **)(*plVar13 + 0x48))(plVar13);
            if (cVar8 != '\0') break;
            lVar17 = lVar17 + 1;
            lVar20 = lVar20 + 0x10;
          } while (lVar17 < *(int *)(lVar4 + 0x38));
        }
        fVar6 = DAT_14cb0cc18;
        fVar22 = (float)(**(code **)(*param_1 + 0x208))(param_1);
        param_2 = local_a0;
        lVar4 = local_a8;
        if (cVar8 == '\0') {
          local_c8 = *(undefined4 *)((longlong)param_1 + 0x87c);
          local_98 = param_1[0x30];
          local_90 = param_1[0x31];
          local_88 = param_1[0x32];
          local_80 = 0x3ff0000000000000;
          local_c0 = fVar22 * fVar6;
          bVar9 = FUN_1405e275b(param_1[0x53],&local_98,(float)(double)param_1[0x36],local_a8);
          uVar21 = (uint)(bVar9 & 0x7f) << 7 | (uint)(bVar9 & 0x7f);
          param_2 = local_a0;
        }
        else {
          iVar19 = 0;
          uVar21 = 0;
          bVar7 = true;
          do {
            bVar18 = bVar7;
            local_c8 = *(undefined4 *)((longlong)param_1 + 0x87c);
            local_98 = param_1[0x30];
            local_90 = param_1[0x31];
            local_88 = param_1[0x32];
            local_80 = 0x3ff0000000000000;
            local_c0 = fVar22 * fVar6;
            local_b8 = iVar19;
            uVar10 = FUN_145727860(param_1[0x53],&local_98,(float)(double)param_1[0x36],lVar4);
            if (iVar19 == 0) {
              uVar10 = (uint)((byte)uVar10 & 0x7f);
              sVar15 = -0x80;
            }
            else {
              uVar10 = (uVar10 & 0x7f) << 7;
              sVar15 = -0x3f81;
            }
            uVar21 = uVar10 | (int)sVar15 & uVar21;
            iVar19 = 1;
            bVar7 = false;
          } while (bVar18);
        }
        goto LAB_1405e25d9;
      }
      iVar16 = *(int *)((longlong)param_1 + 0x87c) + 1;
      iVar19 = *(int *)(puVar3 + 1);
      if (iVar1 < *(int *)(puVar3 + 1)) {
        iVar19 = iVar1;
      }
      if (iVar19 < iVar16) {
        iVar19 = iVar16;
      }
    }
    else {
      iVar19 = *(int *)(puVar3 + 1);
    }
    uVar21 = iVar19 - 1U & 0x7f;
    uVar21 = uVar21 << 7 | uVar21;
  }
LAB_1405e25d9:
  bVar9 = *(byte *)(param_1[0x53] + 0x8f);
  uVar14 = (ushort)uVar21 & 0x7f;
  if (uVar14 <= bVar9) {
    uVar14 = (ushort)(bVar9 & 0x7f);
  }
  uVar10 = uVar21 >> 7;
  if ((ushort)(uVar21 >> 7) <= (ushort)bVar9) {
    uVar10 = bVar9 & 0x7f;
  }
  *param_2 = uVar14 + (short)(uVar10 << 7) + 0x4000;
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405e275b FUN_1405e275b body=370 status=ok
// SIG undefined FUN_1405e275b(void)

int FUN_1405e275b(longlong param_1,double *param_2,float param_3,longlong param_4,int param_5,
                 float param_6)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  
  if (param_1 != 0) {
    if ((*(int *)(param_4 + 0x1dd0) != 0) &&
       (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0)) {
      uVar2 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x30))();
      lVar3 = *(longlong *)(param_4 + 8);
      if ((-1 < (int)uVar2 && lVar3 != 0) && ((int)uVar2 < *(int *)(lVar3 + 0x10))) {
        param_4 = *(longlong *)(*(longlong *)(lVar3 + 8) + (ulonglong)uVar2 * 8);
      }
    }
    dVar4 = *(double *)(param_4 + 0x1048) - *param_2;
    dVar6 = *(double *)(param_4 + 0x1050) - param_2[1];
    dVar8 = *(double *)(param_4 + 0x1058) - param_2[2];
    fVar5 = (float)((dVar8 * dVar8 + dVar6 * dVar6 + dVar4 * dVar4) * *(double *)(param_4 + 0x888));
    dVar6 = *(double *)(param_4 + 0x858) * 0.5;
    dVar4 = *(double *)(param_4 + 0x830) * 0.5;
    if (dVar4 <= dVar6) {
      dVar4 = dVar6;
    }
    fVar7 = 1.0;
    if (1.0 <= fVar5) {
      fVar7 = fVar5;
    }
    lVar3 = 0xf;
    do {
      fVar5 = *(float *)(param_1 + lVar3 * 4) * param_6 * *(float *)(param_4 + 0x23c8) * 0.5;
      if (((float)dVar4 * param_3 * (float)dVar4 * param_3) / fVar7 < fVar5 * fVar5) {
        iVar1 = (int)lVar3 + -8;
        if (param_5 <= iVar1) {
          return iVar1;
        }
        return param_5;
      }
      lVar3 = lVar3 + -1;
    } while (lVar3 != 7);
  }
  return param_5;
}



// FUNCTION 1405e28da FUN_1405e28da body=474 status=ok
// SIG undefined FUN_1405e28da(void)

undefined8 * FUN_1405e28da(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  uint *puVar5;
  undefined *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar5 = (uint *)*puVar1;
  if (puVar5 != (uint *)0x0) goto LAB_1405e2921;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar5 = (uint *)*puVar1;
LAB_1405e2921:
    puVar8 = (undefined8 *)(*(longlong *)(puVar5 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar5[0x12];
    if (puVar8 + 0x11 <= puVar5 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x4000;
      LOCK();
      uVar2 = *puVar5;
      *puVar5 = *puVar5 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar5 = (uint *)*puVar1;
      *puVar5 = 0xffffffff;
      *(uint **)(puVar5 + 0x10) = puVar5 + 0x16;
      puVar5[0x12] = 0;
      *puVar1 = puVar5;
      puVar8 = (undefined8 *)((longlong)puVar5 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar8 + 0x11 <= puVar5 + 0x4000) {
        uVar7 = 1;
        goto LAB_1405e299f;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1405e299f:
  *(undefined8 **)(puVar5 + 0x10) = puVar8 + 0x12;
  puVar5[0x12] = uVar7;
  *(int *)(puVar8 + -1) = ((int)puVar8 + -8) - (int)puVar5;
  *(undefined4 *)((longlong)puVar8 + -4) = 0x88;
  *(undefined4 *)(puVar8 + 1) = (&DAT_14ca11f3c)[(ulonglong)(2 < param_1) * 0x3a];
  *(undefined2 *)(puVar8 + 2) = 0x707;
  puVar8[3] = param_2;
  *(int *)(puVar8 + 4) = param_1;
  puVar8[5] = param_3;
  puVar8[6] = param_4;
  *(undefined1 *)(puVar8 + 7) = 0x3a;
  *puVar8 = &PTR_FUN_14a2fe4f0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  *(undefined4 *)(puVar8 + 10) = 0x11;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  *(undefined4 *)(puVar8 + 0xf) = 0;
  *(undefined4 *)(puVar8 + 0x10) = 2;
  *(undefined1 *)((longlong)puVar8 + 0x84) = 3;
  cVar3 = FUN_144adbdbb(*(undefined2 *)(&DAT_14ca85070 + (longlong)param_1 * 2));
  uVar7 = *(uint *)(puVar8 + 0x10) & 1;
  cVar4 = '\x03';
  if (cVar3 != '\0') {
    cVar4 = (char)uVar7 + '\x01';
  }
  puVar9 = &DAT_14c9c0e90;
  if ((*(uint *)(puVar8 + 0x10) & 8) == 0) {
    puVar9 = &DAT_14ca19738;
  }
  *(char *)((longlong)puVar8 + 0x84) = cVar4;
  puVar8[8] = DAT_14c9c4540;
  puVar6 = &DAT_14c9c0d88;
  if (uVar7 == 0) {
    puVar6 = puVar9;
  }
  puVar8[9] = *(undefined8 *)(puVar6 + 0x10);
  *(undefined4 *)(puVar8 + 0xf) = 0;
  return puVar8;
}



// FUNCTION 1405e2abc FUN_1405e2abc body=111 status=ok
// SIG undefined FUN_1405e2abc(void)

undefined8 FUN_1405e2abc(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  puVar2 = (undefined4 *)(param_1 + 8);
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar2,4);
    }
    else {
      thunk_FUN_14572512c(param_2,puVar2);
    }
  }
  else {
    *puVar2 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  return 1;
}



// FUNCTION 1405e2b2c FUN_1405e2b2c body=23 status=ok
// SIG undefined FUN_1405e2b2c(void)

undefined8 FUN_1405e2b2c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  (**(code **)(param_1 + 0x18))(param_2,param_3);
  return 1;
}



// FUNCTION 1405e2b44 FUN_1405e2b44 body=173 status=ok
// SIG undefined FUN_1405e2b44(void)

void FUN_1405e2b44(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  byte bVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_1 != 0) {
    lVar7 = FUN_1405e2bf2();
    if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
       (plVar4 = *(longlong **)(param_1 + 0x110), plVar4 != (longlong *)0x0)) {
      iVar6 = (int)plVar4[1];
      do {
        if (iVar6 == 0) {
          return;
        }
        LOCK();
        iVar5 = (int)plVar4[1];
        bVar8 = iVar6 == iVar5;
        if (bVar8) {
          *(int *)(plVar4 + 1) = iVar6 + 1;
          iVar5 = iVar6;
        }
        iVar6 = iVar5;
        UNLOCK();
      } while (!bVar8);
      lVar7 = *(longlong *)(param_1 + 0x108);
      if (((lVar7 != 0) &&
          (bVar3 = *(byte *)(lVar7 + 0x38), FUN_1417aaa18(param_1), (bVar3 & 4) == 0)) &&
         ((*(byte *)(lVar7 + 0x38) & 4) != 0)) {
        FUN_145791704(param_1,5);
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
                    /* WARNING: Could not recover jumptable at 0x0001405e2be1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1405e2bf2 FUN_1405e2bf2 body=228 status=ok
// SIG undefined FUN_1405e2bf2(void)

longlong FUN_1405e2bf2(void)

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
  if (DAT_14cab9b30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a9566;
    local_38 = &LAB_14779bf9d;
    local_40 = &LAB_140e2f361;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/UMG",L"UserWidget",&DAT_14cab9b30,FUN_14635d418);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab9b30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e2cd8 FUN_1405e2cd8 body=112 status=ok
// SIG undefined FUN_1405e2cd8(void)

void FUN_1405e2cd8(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_14001cc68(0x438);
  *puVar1 = 0;
  memset(puVar1 + 2,0,0x420);
  *(undefined4 **)(param_1 + 0x70) = puVar1;
  if (DAT_14c760b88 == '\x01') {
    *(undefined8 *)(puVar1 + 2) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(puVar1 + 4) = param_2;
    FUN_1405e2d48(*(longlong *)(param_1 + 0x10) + 0x90,puVar1);
    return;
  }
  return;
}



// FUNCTION 1405e2d48 FUN_1405e2d48 body=111 status=ok
// SIG undefined FUN_1405e2d48(void)

void FUN_1405e2d48(longlong param_1,undefined4 *param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  if (param_2 != (undefined4 *)0x0) {
    if (*(char *)(param_1 + 0x168) == '\x01') {
      *param_2 = 1;
      (**(code **)(**(longlong **)(param_1 + 200) + 0x118))
                (*(longlong **)(param_1 + 200),1,param_2 + 2);
    }
    FUN_1405e2db8(param_1 + 0xe8,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0001405e2d8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x118));
  return;
}



// FUNCTION 1405e2db8 FUN_1405e2db8 body=82 status=ok
// SIG undefined FUN_1405e2db8(void)

void FUN_1405e2db8(longlong *param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = param_2 + 0x10a;
  if (*param_2 == 0) {
    *(longlong **)(param_2 + 0x10c) = param_1;
    lVar2 = *param_1;
    *(longlong *)(param_2 + 0x10a) = lVar2;
    *(int **)(lVar2 + 8) = piVar1;
    *param_1 = (longlong)piVar1;
    *(int *)(param_1 + 4) = (int)param_1[4] + 1;
    param_1[5] = param_1[5] + *(longlong *)(param_2 + 4);
    return;
  }
  *(longlong **)(param_2 + 0x10c) = param_1 + 2;
  lVar2 = param_1[2];
  *(longlong *)(param_2 + 0x10a) = lVar2;
  *(int **)(lVar2 + 8) = piVar1;
  param_1[2] = (longlong)piVar1;
  *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + 1;
  return;
}



// FUNCTION 1405e2e10 FUN_1405e2e10 body=57 status=ok
// SIG undefined FUN_1405e2e10(void)

void FUN_1405e2e10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb603c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb603c0 = FUN_140002ddd(FUN_1464ebd37,uVar1,L"GbxLevelZoneDef");
  }
  return;
}



// FUNCTION 1405e2e52 FUN_1405e2e52 body=200 status=ok
// SIG undefined FUN_1405e2e52(void)

void FUN_1405e2e52(longlong param_1,float param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 200);
  if ((fVar1 <= *(float *)(param_1 + 0x24)) && (*(float *)(param_1 + 0x24) < param_2)) {
    FUN_1405e388c(param_1);
    fVar1 = *(float *)(param_1 + 200);
  }
  fVar2 = *(float *)(param_1 + 0x30);
  if ((fVar1 < fVar2) && (fVar2 <= param_2)) {
    FUN_1405e3b32(param_1);
    fVar2 = *(float *)(param_1 + 0x30);
    fVar1 = *(float *)(param_1 + 200);
  }
  if ((param_2 < fVar2) && (fVar2 <= fVar1)) {
    FUN_1405e3dd8(param_1);
    fVar1 = *(float *)(param_1 + 200);
  }
  if ((*(float *)(param_1 + 0x24) < fVar1) && (param_2 <= *(float *)(param_1 + 0x24))) {
    FUN_14060b528(param_1);
    fVar1 = *(float *)(param_1 + 200);
  }
  if ((fVar1 == param_2) && (!NAN(fVar1) && !NAN(param_2))) {
    return;
  }
  *(float *)(param_1 + 200) = param_2;
  FUN_14060a32c(param_1);
  return;
}



// FUNCTION 1405e2f1a FUN_1405e2f1a body=517 status=ok
// SIG undefined FUN_1405e2f1a(void)

void FUN_1405e2f1a(longlong param_1,char param_2)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  
  if ((*(char *)(param_1 + 0x131) == '\x01') &&
     (0.0001 < ABS(*(float *)(param_1 + 200) - *(float *)(param_1 + 0x114)))) {
    *(undefined1 *)(param_1 + 0x131) = 0;
  }
  if (param_2 != '\0') {
    FUN_145727926(param_1);
  }
  if (1e-08 < ABS(*(float *)(param_1 + 0x114) - *(float *)(param_1 + 200))) {
    FUN_14060a32c(param_1);
  }
  if (((1e-08 < ABS(*(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x24))) ||
      (1e-08 < ABS(*(float *)(param_1 + 0x104) - *(float *)(param_1 + 0x30)))) ||
     (1e-08 < ABS(*(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x3c)))) {
    FUN_14060b7ce(param_1);
  }
  iVar1 = (int)*(float *)(param_1 + 0x10c);
  if (*(int *)(param_1 + 0x48) != iVar1) {
    fVar2 = (float)*(int *)(param_1 + 0x48);
    if (fVar2 < *(float *)(param_1 + 0x128)) {
      *(float *)(param_1 + 0x128) = fVar2;
    }
    FUN_14572d3ee(param_1);
    iVar1 = *(int *)(param_1 + 0x48);
  }
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 200);
  fVar2 = *(float *)(param_1 + 0x30);
  auVar3 = ZEXT416((uint)fVar2);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x24);
  *(float *)(param_1 + 0x104) = fVar2;
  fVar4 = *(float *)(param_1 + 0x3c);
  *(float *)(param_1 + 0x108) = fVar4;
  *(float *)(param_1 + 0x10c) = (float)iVar1;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x128);
  if ((0.0 < fVar4) && (*(longlong *)(param_1 + 0x10) != 0)) {
    fVar2 = fVar2 * (1.0 - fVar4);
    fVar4 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x90);
    if (fVar4 <= fVar2) {
      fVar4 = fVar2;
    }
    auVar3 = ZEXT416((uint)fVar4);
  }
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x18) + 0x18) == '\x01')) {
    auVar3 = roundps(auVar3,ZEXT416(auVar3._0_4_),3);
  }
  *(int *)(param_1 + 0xd4) = auVar3._0_4_;
  return;
}



// FUNCTION 1405e3120 FUN_1405e3120 body=370 status=ok
// SIG undefined FUN_1405e3120(void)

void FUN_1405e3120(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405e31a9;
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
LAB_1405e31a9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 1405e3292 FUN_1405e3292 body=106 status=ok
// SIG undefined FUN_1405e3292(void)

undefined8 FUN_1405e3292(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 4),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  return 1;
}



// FUNCTION 1405e32fc FUN_1405e32fc body=102 status=ok
// SIG undefined FUN_1405e32fc(void)

undefined8 FUN_1405e32fc(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 4),4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 4) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
  }
  return 1;
}



// FUNCTION 1405e3362 FUN_1405e3362 body=269 status=ok
// SIG undefined FUN_1405e3362(void)

void FUN_1405e3362(longlong param_1,int param_2)

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



// FUNCTION 1405e3470 FUN_1405e3470 body=525 status=ok
// SIG undefined FUN_1405e3470(void)

void FUN_1405e3470(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) {
    uVar2 = *(uint *)(param_1 + 0xf0);
    if ((-1 < (int)uVar2) &&
       (((((int)uVar2 < DAT_14c9647dc &&
          (puVar9 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          puVar9 != (undefined8 *)0x0)) && (*(int *)(puVar9 + 2) == *(int *)(param_1 + 0xf4))) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
        plVar8 = (longlong *)*puVar9;
      }
      else {
        plVar8 = (longlong *)0x0;
      }
      lVar6 = (**(code **)(*plVar8 + 0x180))();
      if ((lVar6 != 0) && ((longlong)*(int *)(param_1 + 0x278) != 0)) {
        lVar6 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x270) + 8 + lVar6) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x270) + lVar6) != 0)) {
            if ((*(longlong *)(param_1 + 0xf8) != 0) &&
               (cVar4 = FUN_144729dda((uint *)(param_1 + 0xf0)), cVar4 != '\0')) {
              uVar7 = FUN_141238f08(param_1);
              FUN_14060a688(&local_78,uVar7);
              if (local_70 != (longlong *)0x0) {
                iVar5 = (int)local_70[1];
                goto LAB_1405e358f;
              }
            }
            break;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x278) * 0x10 != lVar6);
      }
    }
  }
  goto LAB_1405e3505;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar11 = iVar5 == iVar3;
    if (bVar11) {
      *(int *)(local_70 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar8 = local_70;
    if (bVar11) break;
LAB_1405e358f:
    if (iVar5 == 0) {
      plVar8 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar6 = local_78;
  if (plVar8 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar7,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar10 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402240;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4b066;
      FUN_14060a5fa(lVar6);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
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
  }
LAB_1405e3505:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e367e FUN_1405e367e body=525 status=ok
// SIG undefined FUN_1405e367e(void)

void FUN_1405e367e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) {
    uVar2 = *(uint *)(param_1 + 0xf0);
    if ((-1 < (int)uVar2) &&
       (((((int)uVar2 < DAT_14c9647dc &&
          (puVar9 = (undefined8 *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
          puVar9 != (undefined8 *)0x0)) && (*(int *)(puVar9 + 2) == *(int *)(param_1 + 0xf4))) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
        plVar8 = (longlong *)*puVar9;
      }
      else {
        plVar8 = (longlong *)0x0;
      }
      lVar6 = (**(code **)(*plVar8 + 0x180))();
      if ((lVar6 != 0) && ((longlong)*(int *)(param_1 + 0x290) != 0)) {
        lVar6 = 0;
        do {
          if ((*(int *)(*(longlong *)(param_1 + 0x288) + 8 + lVar6) != 0) &&
             (*(longlong *)(*(longlong *)(param_1 + 0x288) + lVar6) != 0)) {
            if ((*(longlong *)(param_1 + 0xf8) != 0) &&
               (cVar4 = FUN_144729dda((uint *)(param_1 + 0xf0)), cVar4 != '\0')) {
              uVar7 = FUN_141238f08(param_1);
              FUN_14060a688(&local_78,uVar7);
              if (local_70 != (longlong *)0x0) {
                iVar5 = (int)local_70[1];
                goto LAB_1405e379d;
              }
            }
            break;
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x290) * 0x10 != lVar6);
      }
    }
  }
  goto LAB_1405e3713;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar11 = iVar5 == iVar3;
    if (bVar11) {
      *(int *)(local_70 + 1) = iVar5 + 1;
      iVar3 = iVar5;
    }
    iVar5 = iVar3;
    UNLOCK();
    plVar8 = local_70;
    if (bVar11) break;
LAB_1405e379d:
    if (iVar5 == 0) {
      plVar8 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar6 = local_78;
  if (plVar8 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar7 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar7,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar10 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402260;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4b20e;
      FUN_14060a5fa(lVar6);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
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
  }
LAB_1405e3713:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e388c FUN_1405e388c body=676 status=ok
// SIG undefined FUN_1405e388c(void)

void FUN_1405e388c(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar8 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    lVar5 = (**(code **)(*plVar7 + 0x180))();
    if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x188) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x180) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x180) + lVar5) != 0)) {
          if (((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
               (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (puVar8 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               puVar8 != (undefined8 *)0x0)))) &&
             ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
              ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                plVar7 = (longlong *)*puVar8;
              }
              else {
                plVar7 = (longlong *)0x0;
              }
              uVar6 = (**(code **)(*plVar7 + 0x180))();
            }
            else {
              uVar6 = 0;
            }
            FUN_14060a688(&local_78,uVar6);
            if (local_70 != (longlong *)0x0) {
              iVar4 = (int)local_70[1];
              goto LAB_1405e3a0a;
            }
          }
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x188) * 0x10 != lVar5);
    }
  }
  goto LAB_1405e3922;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar10 = iVar4 == iVar3;
    if (bVar10) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar7 = local_70;
    if (bVar10) break;
LAB_1405e3a0a:
    if (iVar4 == 0) {
      plVar7 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar7 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar9 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402120;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4a0a8;
      FUN_14060a5fa(lVar5);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_1405e3922:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e3b32 FUN_1405e3b32 body=676 status=ok
// SIG undefined FUN_1405e3b32(void)

void FUN_1405e3b32(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar8 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    lVar5 = (**(code **)(*plVar7 + 0x180))();
    if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x1a0) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x198) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x198) + lVar5) != 0)) {
          if (((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
               (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (puVar8 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               puVar8 != (undefined8 *)0x0)))) &&
             ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
              ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                plVar7 = (longlong *)*puVar8;
              }
              else {
                plVar7 = (longlong *)0x0;
              }
              uVar6 = (**(code **)(*plVar7 + 0x180))();
            }
            else {
              uVar6 = 0;
            }
            FUN_14060a688(&local_78,uVar6);
            if (local_70 != (longlong *)0x0) {
              iVar4 = (int)local_70[1];
              goto LAB_1405e3cb0;
            }
          }
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x1a0) * 0x10 != lVar5);
    }
  }
  goto LAB_1405e3bc8;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar10 = iVar4 == iVar3;
    if (bVar10) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar7 = local_70;
    if (bVar10) break;
LAB_1405e3cb0:
    if (iVar4 == 0) {
      plVar7 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar7 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar9 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402140;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4a250;
      FUN_14060a5fa(lVar5);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_1405e3bc8:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e3dd8 FUN_1405e3dd8 body=676 status=ok
// SIG undefined FUN_1405e3dd8(void)

void FUN_1405e3dd8(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar8 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    lVar5 = (**(code **)(*plVar7 + 0x180))();
    if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x1b8) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x1b0) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar5) != 0)) {
          if (((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
               (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (puVar8 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               puVar8 != (undefined8 *)0x0)))) &&
             ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
              ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                plVar7 = (longlong *)*puVar8;
              }
              else {
                plVar7 = (longlong *)0x0;
              }
              uVar6 = (**(code **)(*plVar7 + 0x180))();
            }
            else {
              uVar6 = 0;
            }
            FUN_14060a688(&local_78,uVar6);
            if (local_70 != (longlong *)0x0) {
              iVar4 = (int)local_70[1];
              goto LAB_1405e3f56;
            }
          }
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x1b8) * 0x10 != lVar5);
    }
  }
  goto LAB_1405e3e6e;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar10 = iVar4 == iVar3;
    if (bVar10) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar7 = local_70;
    if (bVar10) break;
LAB_1405e3f56:
    if (iVar4 == 0) {
      plVar7 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar7 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar9 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402160;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4a3f8;
      FUN_14060a5fa(lVar5);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_1405e3e6e:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e407e FUN_1405e407e body=676 status=ok
// SIG undefined FUN_1405e407e(void)

void FUN_1405e407e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar8 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    lVar5 = (**(code **)(*plVar7 + 0x180))();
    if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x248) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x240) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x240) + lVar5) != 0)) {
          if (((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
               (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (puVar8 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               puVar8 != (undefined8 *)0x0)))) &&
             ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
              ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                plVar7 = (longlong *)*puVar8;
              }
              else {
                plVar7 = (longlong *)0x0;
              }
              uVar6 = (**(code **)(*plVar7 + 0x180))();
            }
            else {
              uVar6 = 0;
            }
            FUN_14060a688(&local_78,uVar6);
            if (local_70 != (longlong *)0x0) {
              iVar4 = (int)local_70[1];
              goto LAB_1405e41fc;
            }
          }
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x248) * 0x10 != lVar5);
    }
  }
  goto LAB_1405e4114;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar10 = iVar4 == iVar3;
    if (bVar10) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar7 = local_70;
    if (bVar10) break;
LAB_1405e41fc:
    if (iVar4 == 0) {
      plVar7 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar7 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar9 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402200;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4ad16;
      FUN_14060a5fa(lVar5);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_1405e4114:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e4324 FUN_1405e4324 body=676 status=ok
// SIG undefined FUN_1405e4324(void)

void FUN_1405e4324(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong *local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (puVar8 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       puVar8 != (undefined8 *)0x0)) &&
      ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      plVar7 = (longlong *)*puVar8;
    }
    else {
      plVar7 = (longlong *)0x0;
    }
    lVar5 = (**(code **)(*plVar7 + 0x180))();
    if ((lVar5 != 0) && ((longlong)*(int *)(param_1 + 0x260) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 600) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 600) + lVar5) != 0)) {
          if (((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
               (uVar2 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar2)) &&
              (((int)uVar2 < DAT_14c9647dc &&
               (puVar8 = (undefined8 *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               puVar8 != (undefined8 *)0x0)))) &&
             ((*(int *)(puVar8 + 2) == *(int *)(param_1 + 0xf4) &&
              ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
              if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
                plVar7 = (longlong *)*puVar8;
              }
              else {
                plVar7 = (longlong *)0x0;
              }
              uVar6 = (**(code **)(*plVar7 + 0x180))();
            }
            else {
              uVar6 = 0;
            }
            FUN_14060a688(&local_78,uVar6);
            if (local_70 != (longlong *)0x0) {
              iVar4 = (int)local_70[1];
              goto LAB_1405e44a2;
            }
          }
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x260) * 0x10 != lVar5);
    }
  }
  goto LAB_1405e43ba;
  while( true ) {
    LOCK();
    iVar3 = (int)local_70[1];
    bVar10 = iVar4 == iVar3;
    if (bVar10) {
      *(int *)(local_70 + 1) = iVar4 + 1;
      iVar3 = iVar4;
    }
    iVar4 = iVar3;
    UNLOCK();
    plVar7 = local_70;
    if (bVar10) break;
LAB_1405e44a2:
    if (iVar4 == 0) {
      plVar7 = (longlong *)0x0;
      break;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)local_70 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_70 + 0x10))();
  }
  lVar5 = local_78;
  if (plVar7 != (longlong *)0x0) {
    if (local_78 != 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
      FUN_144a02c74(uVar6,&local_78,*(undefined4 *)(param_1 + 8));
      if (local_70 == (longlong *)0x0) {
        plVar9 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)((longlong)local_70 + 0xc) = *(int *)((longlong)local_70 + 0xc) + 1;
        UNLOCK();
        plVar9 = local_70;
      }
      local_58 = 0;
      local_48 = &PTR_LAB_14b402220;
      local_40 = local_78;
      local_38 = local_70;
      local_30 = 0;
      local_68 = FUN_143d4aebe;
      FUN_14060a5fa(lVar5);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
LAB_1405e43ba:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e45ca FUN_1405e45ca body=162 status=ok
// SIG undefined FUN_1405e45ca(void)

void FUN_1405e45ca(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_1405e4652;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1405e4652:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1405e466c FUN_1405e466c body=106 status=ok
// SIG undefined FUN_1405e466c(void)

void FUN_1405e466c(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  uVar2 = *param_1;
  local_18 = *param_2;
  *param_2 = 0;
  FUN_1405e46d8(uVar2,param_1);
  puVar3 = (undefined8 *)*param_2;
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e46d8 FUN_1405e46d8 body=139 status=ok
// SIG undefined FUN_1405e46d8(void)

void FUN_1405e46d8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = FUN_14017f2fc(param_1 + 0x40);
  plVar4 = (longlong *)(lVar3 + 0x48);
  if (plVar4 != param_3) {
    puVar2 = (undefined8 *)*plVar4;
    *plVar4 = *param_3;
    *param_3 = 0;
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  FUN_1400d20b8(param_1,param_2,lVar3);
  puVar2 = (undefined8 *)*param_3;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001405e474e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1405e4763 FUN_1405e4763 body=98 status=ok
// SIG undefined FUN_1405e4763(void)

void FUN_1405e4763(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140312256(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab164a0;
  *(undefined1 *)((longlong)puVar1 + 0x394) = 0;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  FUN_1403121a6(puVar1,0);
  FUN_1405e47c6(puVar1,0);
  *(byte *)((longlong)puVar1 + 99) = *(byte *)((longlong)puVar1 + 99) | 8;
  *(undefined1 *)((longlong)puVar1 + 0x179) = 4;
  FUN_1405e4918(puVar1,0x3f800000);
  return;
}



// FUNCTION 1405e47c6 FUN_1405e47c6 body=336 status=ok
// SIG undefined FUN_1405e47c6(void)

void FUN_1405e47c6(longlong param_1,byte param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [192];
  undefined1 *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_1 + 0x65) & 1) != param_2) {
    *(byte *)(param_1 + 0x65) = *(byte *)(param_1 + 0x65) & 0xfe | param_2;
    local_30 = (undefined1 *)0x0;
    local_28 = 0x1800000000;
    FUN_1448c0c58(param_1,local_f0,0);
    if (0 < (int)local_28) {
      lVar4 = 0;
      do {
        puVar3 = local_30;
        if (local_30 == (undefined1 *)0x0) {
          puVar3 = local_f0;
        }
        (**(code **)(**(longlong **)(puVar3 + lVar4 * 8) + 0x3f8))();
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)local_28);
    }
    plVar1 = *(longlong **)(param_1 + 0x1c8);
    if (plVar1 != (longlong *)0x0) {
      if ((longlong)(int)plVar1[0x44] < 1) {
        if ((DAT_14c76142c != 1) || ((*(byte *)(plVar1 + 0x3f) & 2) == 0)) {
          cVar2 = (**(code **)(*plVar1 + 0x508))(plVar1,0,1,0);
          *(byte *)(plVar1 + 0x3f) = *(byte *)(plVar1 + 0x3f) & 0xfd | cVar2 * '\x02';
        }
      }
      else {
        lVar4 = *(longlong *)(plVar1[0x43] + -8 + (longlong)(int)plVar1[0x44] * 8);
        *(byte *)(lVar4 + 0x608) = *(byte *)(lVar4 + 0x608) | 2;
        *(undefined4 *)(lVar4 + 0x10) = 3;
        *(undefined4 *)(lVar4 + 200) = 0xffffffff;
      }
    }
    if (local_30 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e4918 FUN_1405e4918 body=735 status=ok
// SIG undefined FUN_1405e4918(void)

void FUN_1405e4918(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_1 + 0x198) = param_2;
  if (((((*(byte *)(param_1 + 100) & 2) != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) &&
      (lVar3 = *(longlong *)(param_1 + 0x20), lVar3 != 0)) &&
     (-1 < (short)*(undefined4 *)(lVar3 + 8))) {
    uVar1 = *(uint *)(lVar3 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        local_50 = &local_30;
        local_30 = (code *)&LAB_14355090c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147b8e16d;
        local_60 = (code *)&LAB_140810a38;
        local_68 = L"Engine";
        local_70 = 0x800000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar3 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_50 = &local_30;
        local_30 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468c5283;
        local_60 = FUN_142809da0;
        local_68 = L"Engine";
        local_70 = 0x400000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar5 = *(longlong *)(param_1 + 0x20);
      if (lVar5 != 0) {
        iVar2 = *(int *)(lVar3 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < iVar2) ||
             (lVar4 = lVar5,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar3 + 0x30)) {
            lVar4 = 0;
          }
        } while ((lVar4 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
        if ((lVar4 != 0) &&
           ((*(longlong *)(lVar4 + 0xc0) != 0 && DAT_14cb0d2b0 != 0 &&
            ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)))) {
          lVar3 = 0;
          do {
            lVar5 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar3);
            if (*(longlong *)(lVar5 + 0x360) == *(longlong *)(lVar4 + 0xc0)) {
              if ((lVar5 != 0) && (iVar2 = *(int *)(lVar5 + 0x2b8), (longlong)iVar2 != 0)) {
                lVar3 = *(longlong *)(lVar5 + 0x2b0);
                lVar5 = 0;
                do {
                  lVar4 = *(longlong *)(lVar3 + lVar5);
                  if (lVar4 != 0) {
                    FUN_1433c1900(lVar4 + 0x2e0,param_1);
                  }
                  lVar5 = lVar5 + 0x10;
                } while ((longlong)iVar2 * 0x10 != lVar5);
              }
              break;
            }
            lVar3 = lVar3 + 8;
          } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar3);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e4bf8 FUN_1405e4bf8 body=61 status=ok
// SIG undefined FUN_1405e4bf8(void)

void FUN_1405e4bf8(undefined8 param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1405f1eac();
  uVar1 = FUN_1447210f0(param_1);
  lVar2 = FUN_1405e4c36(uVar1);
  if (lVar2 != 0) {
    FUN_14049df2a(lVar2 + 0x40,param_1);
    return;
  }
  return;
}



// FUNCTION 1405e4c36 FUN_1405e4c36 body=373 status=ok
// SIG undefined FUN_1405e4c36(void)

undefined8 FUN_1405e4c36(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  uVar2 = DAT_14cb72610;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_30,uVar2,param_1);
    plVar5 = local_28;
    if ((local_30 == 0) || (local_28 == (longlong *)0x0)) {
      plVar5 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar7 = local_28 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_28 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    if (plVar5 != (longlong *)0x0) {
      iVar4 = (int)plVar5[1];
      do {
        plVar7 = (longlong *)0x0;
        if (iVar4 == 0) break;
        LOCK();
        iVar3 = (int)plVar5[1];
        bVar8 = iVar4 == iVar3;
        if (bVar8) {
          *(int *)(plVar5 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar7 = plVar5;
      } while (!bVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      if (plVar7 != (longlong *)0x0) {
        if (local_30 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(local_30 + 0x68);
        }
        LOCK();
        plVar5 = plVar7 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        goto LAB_1405e4cf2;
      }
    }
  }
  uVar6 = 0;
LAB_1405e4cf2:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1405e4dac FUN_1405e4dac body=598 status=ok
// SIG undefined FUN_1405e4dac(void)

ulonglong FUN_1405e4dac(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined7 uVar10;
  ulonglong uVar9;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong *local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = *(longlong *)(param_1 + 0xb0);
  uVar10 = (undefined7)((ulonglong)param_1 >> 8);
  if ((lVar7 != 0) || (lVar7 = FUN_1448abda6(param_1), lVar7 != 0)) {
    uVar2 = DAT_14cb1c840;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_88,uVar2,lVar7);
    plVar11 = local_80;
    if ((local_88 == 0) || (local_80 == (longlong *)0x0)) {
      plVar11 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar8 = local_80 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_80 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    if (plVar11 != (longlong *)0x0) {
      iVar5 = (int)plVar11[1];
      do {
        plVar8 = (longlong *)0x0;
        if (iVar5 == 0) break;
        LOCK();
        iVar3 = (int)plVar11[1];
        bVar12 = iVar5 == iVar3;
        if (bVar12) {
          *(int *)(plVar11 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
        plVar8 = plVar11;
      } while (!bVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      if (plVar8 != (longlong *)0x0) {
        if (local_88 == 0) {
          cVar4 = '\0';
          if (*(char *)(param_1 + 0x836) != '\0') {
            cVar4 = *(char *)(param_1 + 0x835);
          }
          uVar9 = CONCAT71(uVar10,cVar4 == '\0');
        }
        else {
          if (*(char *)(param_1 + 0x836) == '\0') {
            pcVar6 = (char *)(local_88 + 0x5cd);
          }
          else {
            pcVar6 = (char *)(param_1 + 0x835);
          }
          if (*pcVar6 == '\x01') {
            FUN_1405e53f8(param_1,&local_88);
            local_a8 = local_68;
            uStack_a0 = uStack_60;
            local_98 = local_58;
            cVar4 = FUN_1405e5004(local_88);
            if (cVar4 != '\0') {
              uVar9 = 0;
              goto LAB_1405e4ed7;
            }
          }
          uVar9 = CONCAT71(uVar10,1);
        }
LAB_1405e4ed7:
        LOCK();
        plVar11 = plVar8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        goto LAB_1405e4ee1;
      }
    }
  }
  cVar4 = *(char *)(param_1 + 0x835);
  if (*(char *)(param_1 + 0x836) == '\0') {
    cVar4 = '\0';
  }
  uVar9 = CONCAT71(uVar10,cVar4 == '\0');
LAB_1405e4ee1:
  if ((local_28 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 1405e5004 FUN_1405e5004 body=257 status=ok
// SIG undefined FUN_1405e5004(void)

ulonglong FUN_1405e5004(longlong param_1,double *param_2)

{
  undefined8 unaff_RSI;
  undefined7 uVar2;
  ulonglong uVar1;
  undefined1 auStack_178 [40];
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined1 local_130;
  undefined1 local_128 [256];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*(char *)(param_1 + 0x5cd) == '\x01') && (*(char *)(param_1 + 0x5cc) == '\x01')) {
    uVar2 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (*(longlong *)(param_1 + 0x5d0) == 0) {
      uVar1 = CONCAT71(uVar2,1);
    }
    else {
      local_148 = param_2[1] + -10.0;
      local_150 = *param_2 + -10.0;
      local_138 = param_2[1] + 10.0;
      local_140 = *param_2 + 10.0;
      local_130 = 1;
      local_28 = 0;
      local_20 = 0x2000000000;
      FUN_1405e5106(*(longlong *)(param_1 + 0x5d0),&local_150,local_128);
      uVar1 = CONCAT71(uVar2,(int)local_20 == 0);
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e5106 FUN_1405e5106 body=126 status=ok
// SIG undefined FUN_1405e5106(void)

void FUN_1405e5106(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_1405e5186(param_1,param_2,local_48);
  FUN_1449fabd8(param_1,param_2,param_3);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      FUN_1405e5106(local_48[uVar2],param_2,param_3);
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e5186 FUN_1405e5186 body=143 status=ok
// SIG undefined FUN_1405e5186(void)

ulonglong FUN_1405e5186(longlong param_1,double *param_2,undefined8 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar7 = 0;
  if (*(char *)(param_1 + 0x6c) == '\x01') {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar3 = *(double *)(param_1 + 0x58);
    dVar4 = *(double *)(param_1 + 0x60);
    uVar7 = 0;
    dVar5 = param_2[2];
    dVar6 = param_2[3];
    if ((dVar1 <= dVar3) && (dVar2 <= dVar4)) {
      *param_3 = *(undefined8 *)(param_1 + 0x20);
      uVar7 = 1;
    }
    uVar8 = uVar7;
    if ((dVar3 <= dVar5) && (dVar2 <= dVar4)) {
      uVar8 = (ulonglong)((int)uVar7 + 1);
      param_3[uVar7] = *(undefined8 *)(param_1 + 0x28);
    }
    uVar9 = uVar8;
    if ((dVar1 <= dVar3) && (dVar4 <= dVar6)) {
      uVar9 = (ulonglong)((int)uVar8 + 1);
      param_3[uVar8] = *(undefined8 *)(param_1 + 0x10);
    }
    uVar7 = uVar9;
    if ((dVar3 <= dVar5) && (dVar4 <= dVar6)) {
      uVar7 = (ulonglong)((int)uVar9 + 1);
      param_3[uVar9] = *(undefined8 *)(param_1 + 0x18);
    }
  }
  return uVar7;
}



// FUNCTION 1405e5216 FUN_1405e5216 body=341 status=ok
// SIG undefined FUN_1405e5216(void)

void FUN_1405e5216(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else if (param_2 < 0x21) {
    iVar7 = 0x20;
  }
  else {
    uVar4 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar5 = uVar4 + 0xf;
        if (param_2 < 0xfff) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
        }
        else {
          if ((uVar5 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405e5288;
              lVar1 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar1 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar5 & 0x7fffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_1405e5288:
    iVar3 = (int)(uVar4 >> 3);
    iVar7 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 == *(int *)(param_1 + 0x10c)) {
    return;
  }
  *(int *)(param_1 + 0x10c) = iVar7;
  FUN_1405e536c(param_1,*(undefined4 *)(param_1 + 0x108));
  return;
}



// FUNCTION 1405e536c FUN_1405e536c body=140 status=ok
// SIG undefined FUN_1405e536c(void)

void FUN_1405e536c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 1405e53f8 FUN_1405e53f8 body=1915 status=ok
// SIG undefined FUN_1405e53f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1405e53f8(longlong param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auVar16 [16];
  double dVar18;
  undefined1 auVar17 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auStack_298 [32];
  undefined1 local_278 [16];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  dVar19 = *(double *)(param_1 + 0x240);
  dVar18 = *(double *)(param_1 + 0x248);
  dVar6 = *(double *)(param_1 + 0x250);
  dVar8 = *(double *)(param_1 + 600);
  dVar9 = *(double *)(param_1 + 0x260);
  dVar10 = *(double *)(param_1 + 0x268);
  dVar11 = *(double *)(param_1 + 0x270);
  dVar5 = *(double *)(param_1 + 0x278);
  auVar24 = *(undefined1 (*) [16])(param_1 + 0x280);
  dVar31 = auVar24._0_8_;
  dVar33 = auVar24._8_8_;
  auVar25 = *(undefined1 (*) [16])(param_1 + 0x290);
  dVar2 = auVar25._0_8_;
  dVar7 = auVar25._8_8_;
  if (*(int *)(param_1 + 0x6fc) == 2) {
    *(undefined8 *)param_2[3] = 0;
    *(undefined8 *)(param_2[3] + 8) = 0;
    *(undefined8 *)param_2[2] = 0;
    *(undefined8 *)(param_2[2] + 8) = 0;
    auVar26 = _DAT_149934d80;
    local_278 = *(undefined1 (*) [16])(param_1 + 0x750);
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x760);
    dVar3 = auVar1._0_8_;
    auVar24 = minpd(local_278,auVar24);
    auVar29 = minpd(auVar1,auVar25);
    auVar25._8_8_ = -(ulonglong)(auVar24._8_8_ < 0.0);
    auVar25._0_8_ = -(ulonglong)(auVar24._0_8_ < 0.0);
    iVar13 = movmskpd((int)(param_2 + 2),auVar25);
    auVar24._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
    auVar24._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
    uVar14 = movmskpd((int)param_2,auVar24);
    if ((uVar14 & 0x3fffffff) == 0 && iVar13 == 0) {
      dVar22 = *(double *)(param_1 + 0x710);
      dVar23 = *(double *)(param_1 + 0x718);
      dVar27 = *(double *)(param_1 + 0x720);
      dVar12 = *(double *)(param_1 + 0x728);
      dVar28 = dVar22 * dVar6 * 1.0 + dVar12 * dVar18 + dVar19 * dVar27 * -1.0 + dVar8 * dVar23;
      dVar30 = *(double *)(param_1 + 0x730) * dVar31;
      dVar32 = *(double *)(param_1 + 0x738) * dVar33;
      dVar20 = *(double *)(param_1 + 0x740) * dVar2;
      dVar21 = *(double *)(param_1 + 0x748) * dVar7;
      auVar4._8_4_ = SUB84(dVar28,0);
      auVar4._0_8_ = dVar23 * dVar6 * -1.0 +
                     dVar27 * dVar18 + dVar19 * dVar12 * 1.0 + dVar8 * dVar22;
      auVar4._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      *param_2 = auVar4;
      *(double *)param_2[1] =
           dVar12 * dVar6 * 1.0 + ((dVar19 * dVar23 * 1.0 + dVar8 * dVar27) - dVar18 * dVar22);
      *(double *)(param_2[1] + 8) =
           dVar27 * dVar6 * -1.0 + ((dVar19 * dVar22 * -1.0 + dVar8 * dVar12) - dVar18 * dVar23);
      dVar23 = dVar32 * dVar19 - dVar18 * dVar30;
      dVar27 = dVar20 * dVar18 - dVar6 * dVar32;
      dVar28 = dVar30 * dVar6 - dVar19 * dVar20;
      dVar22 = dVar21 * dVar8 - dVar8 * dVar21;
      dVar27 = dVar27 + dVar27;
      dVar28 = dVar28 + dVar28;
      dVar23 = dVar23 + dVar23;
      dVar22 = dVar22 + dVar22;
      *(double *)param_2[2] = dVar9 + (dVar23 * dVar18 - dVar6 * dVar28) + dVar8 * dVar27 + dVar30;
      *(double *)(param_2[2] + 8) =
           dVar10 + (dVar27 * dVar6 - dVar23 * dVar19) + dVar8 * dVar28 + dVar32;
      *(double *)param_2[3] = dVar11 + (dVar28 * dVar19 - dVar18 * dVar27) + dVar8 * dVar23 + dVar20
      ;
      *(double *)(param_2[3] + 8) =
           dVar5 + (dVar22 * dVar8 - dVar22 * dVar8) + dVar8 * dVar22 + dVar21;
      *(double *)param_2[4] = (double)local_278._0_8_ * dVar31;
      *(double *)(param_2[4] + 8) = (double)local_278._8_8_ * dVar33;
      *(double *)param_2[5] = dVar3 * dVar2;
      *(double *)(param_2[5] + 8) = auVar1._8_8_ * dVar7;
    }
    else {
      dVar21 = dVar18 + dVar18;
      dVar22 = dVar6 + dVar6;
      dVar5 = dVar19 * (dVar19 + dVar19);
      dVar20 = (DAT_149934d80._8_8_ - (dVar6 * dVar22 + dVar5)) * dVar33;
      dVar23 = (dVar19 + dVar19) * dVar8;
      dVar28 = (dVar22 * dVar18 - dVar23) * dVar2;
      local_178 = (1.0 - (dVar5 + dVar18 * dVar21)) * dVar2;
      dVar7 = dVar7 * auVar1._8_8_;
      dVar5 = (dVar21 * dVar19 + dVar22 * dVar8) * dVar31;
      local_198 = (dVar22 * dVar18 + dVar23) * dVar33;
      local_1b8 = (dVar19 * dVar22 - dVar21 * dVar8) * dVar31;
      local_1c8._8_4_ = SUB84(dVar5,0);
      local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar6 * dVar22 + dVar18 * dVar21)) * dVar31;
      local_1c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uStack_1b0 = 0;
      local_1a8._8_4_ = SUB84(dVar20,0);
      local_1a8._0_8_ = (dVar21 * dVar19 - dVar22 * dVar8) * dVar33;
      local_1a8._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
      uStack_190 = 0;
      local_188._8_4_ = SUB84(dVar28,0);
      local_188._0_8_ = (dVar21 * dVar8 + dVar19 * dVar22) * dVar2;
      local_188._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      uStack_170 = 0;
      uStack_150 = 0x3ff0000000000000;
      dVar8 = *(double *)(param_1 + 0x710);
      dVar5 = *(double *)(param_1 + 0x718);
      dVar18 = *(double *)(param_1 + 0x720);
      dVar20 = dVar5 + dVar5;
      dVar21 = dVar18 + dVar18;
      dVar23 = dVar8 * (dVar8 + dVar8);
      local_1f8 = (1.0 - (dVar23 + dVar5 * dVar20)) * dVar3;
      dVar6 = *(double *)(param_1 + 0x710) * dVar21;
      dVar19 = *(double *)(param_1 + 0x728);
      dVar28 = dVar21 * dVar19;
      dVar22 = (dVar8 + dVar8) * *(double *)(param_1 + 0x728);
      dVar19 = dVar20 * dVar19;
      local_208 = (dVar19 + dVar6) * dVar3;
      dStack_200 = (dVar21 * dVar5 - dVar22) * dVar3;
      dVar31 = dVar31 * (double)local_278._0_8_;
      dVar33 = dVar33 * (double)local_278._8_8_;
      local_248 = ((double)DAT_149934d80 - (dVar18 * dVar21 + dVar5 * dVar20)) *
                  (double)local_278._0_8_;
      dVar18 = (DAT_149934d80._8_8_ - (dVar18 * dVar21 + dVar23)) * (double)local_278._8_8_;
      dStack_240 = (dVar20 * dVar8 + dVar28) * (double)local_278._0_8_;
      local_218 = (dVar21 * dVar5 + dVar22) * (double)local_278._8_8_;
      local_238 = (dVar6 - dVar19) * (double)local_278._0_8_;
      uStack_230 = 0;
      local_228._8_4_ = SUB84(dVar18,0);
      local_228._0_8_ = (dVar20 * dVar8 - dVar28) * (double)local_278._8_8_;
      local_228._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
      uStack_210 = 0;
      uStack_1f0 = 0;
      local_1e8 = *(undefined8 *)(param_1 + 0x730);
      uStack_1e0 = *(undefined8 *)(param_1 + 0x738);
      local_1d8 = *(undefined8 *)(param_1 + 0x740);
      uStack_1d0 = 0x3ff0000000000000;
      local_168 = dVar9;
      dStack_160 = dVar10;
      local_158 = dVar11;
      FUN_1447fea8d(&local_148);
      FUN_144a1c686(&local_148,0x3e45798ee0000000);
      auVar29._8_8_ = -(ulonglong)(0.0 <= dVar33);
      auVar29._0_8_ = -(ulonglong)(0.0 <= dVar31);
      auVar24 = blendvpd(_DAT_149936790,auVar26,auVar29);
      uVar15 = -(ulonglong)(0.0 <= dVar2 * dVar3);
      dVar19 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
      dVar18 = auVar24._0_8_;
      local_138 = local_138 * dVar18;
      local_140 = local_140 * dVar18;
      local_148 = local_148 * dVar18;
      dVar18 = auVar24._8_8_;
      local_118 = local_118 * dVar18;
      local_120 = local_120 * dVar18;
      local_128 = dVar18 * local_128;
      local_f8 = local_f8 * dVar19;
      local_100 = local_100 * dVar19;
      local_108 = dVar19 * local_108;
      FUN_14481fd10(&local_268,&local_148);
      dVar19 = local_258 * local_258 + local_268 * local_268;
      dVar18 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
      auVar17._0_8_ = dVar19 + dVar18;
      auVar17._8_8_ = dVar19 + dVar18;
      auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
      auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
      auVar24 = sqrtpd(auVar17,auVar17);
      auVar25 = divpd(auVar26,auVar24);
      auVar26._0_8_ = auVar25._0_8_ * local_258;
      auVar26._8_8_ = auVar25._8_8_ * dStack_250;
      auVar24 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar16);
      *(double *)param_2[4] = dVar31;
      *(double *)(param_2[4] + 8) = dVar33;
      auVar1._8_4_ = SUB84(dVar7,0);
      auVar1._0_8_ = dVar2 * dVar3;
      auVar1._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      param_2[5] = auVar1;
      *(ulonglong *)*param_2 =
           (ulonglong)(local_268 * auVar25._0_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar17._0_8_);
      *(ulonglong *)(*param_2 + 8) =
           (ulonglong)(dStack_260 * auVar25._8_8_) &
           -(ulonglong)(9.99999993922529e-09 <= auVar17._8_8_);
      param_2[1] = auVar24;
      *(undefined8 *)param_2[2] = local_e8;
      *(undefined8 *)(param_2[2] + 8) = uStack_e0;
      *(undefined8 *)param_2[3] = local_d8;
      *(undefined8 *)(param_2[3] + 8) = 0;
    }
  }
  else {
    *(double *)*param_2 = dVar19;
    *(double *)(*param_2 + 8) = dVar18;
    *(double *)param_2[1] = dVar6;
    *(double *)(param_2[1] + 8) = dVar8;
    *(double *)param_2[2] = dVar9;
    *(double *)(param_2[2] + 8) = dVar10;
    *(double *)param_2[3] = dVar11;
    *(double *)(param_2[3] + 8) = dVar5;
    param_2[4] = auVar24;
    param_2[5] = auVar25;
  }
  if ((local_c0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e5b74 FUN_1405e5b74 body=48 status=ok
// SIG undefined FUN_1405e5b74(void)

void FUN_1405e5b74(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2,0,0x470);
  FUN_1405e5ba4(param_2);
  *param_2 = &PTR_FUN_14b7b8cc0;
  return;
}



// FUNCTION 1405e5ba4 FUN_1405e5ba4 body=764 status=ok
// SIG undefined FUN_1405e5ba4(void)

undefined8 * FUN_1405e5ba4(undefined8 *param_1)

{
  longlong lVar1;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b41a830;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xbf800000;
  *(undefined4 *)(param_1 + 7) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  param_1[9] = &PTR_FUN_14b39b808;
  param_1[10] = &PTR_FUN_14b00be10;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = &PTR_FUN_14b00be10;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = &PTR_FUN_14b00be10;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x19] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x1f] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x25] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2b] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x31] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x37] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3d] = &PTR_FUN_14b35c290;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = &PTR_FUN_14b00be10;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = &PTR_FUN_14b00be10;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4d] = &PTR_FUN_14b00be10;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x52] = &PTR_FUN_14b398ea0;
  *(undefined2 *)(param_1 + 0x53) = 0;
  *(undefined1 *)((longlong)param_1 + 0x29a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x30d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2fe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x306) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ee) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2de) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2e6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ce) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2be) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2ae) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3a6) = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x405) = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x374) = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0;
  *(undefined8 *)((longlong)param_1 + 0x36c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x344) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x334) = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0;
  *(undefined8 *)((longlong)param_1 + 0x32c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x84] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x85] = &DAT_14a171d50;
  *(undefined8 *)((longlong)param_1 + 0x439) = 0;
  *(undefined8 *)((longlong)param_1 + 0x441) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  *(undefined1 *)((longlong)param_1 + 0x449) = 1;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0;
  FUN_1405e5ea0();
  param_1[0x8b] = &DAT_14cb86bb8;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = &PTR_FUN_14b41bda0;
  lVar1 = DAT_14cb86da8;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)((longlong)param_1 + 0x444) != 0) {
    FUN_140115c12(param_1 + 0x87,0);
  }
  param_1[0x86] = lVar1 + 0x4f0;
  return param_1;
}



// FUNCTION 1405e5ea0 FUN_1405e5ea0 body=188 status=ok
// SIG undefined FUN_1405e5ea0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1405e5ea0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb86c28) {
    FUN_144b3d300(&DAT_14cb86c28);
    if (DAT_14cb86c28 == -1) {
      _DAT_14cb86bd8 = 0;
      _DAT_14cb86be0 = 0;
      _DAT_14cb86bb8 = 0;
      uRam000000014cb86bc0 = 0;
      _DAT_14cb86be4 = 0xffffffff00000080;
      _DAT_14cb86bec = 0;
      DAT_14cb86bf8 = 0;
      _DAT_14cb86c00 = 0;
      DAT_14cb86c08 = 0;
      uRam000000014cb86c10 = 0;
      _DAT_14cb86c18 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb86c20);
      atexit(FUN_143df537c);
      _Init_thread_footer(&DAT_14cb86c28);
    }
  }
  return &DAT_14cb86bb8;
}



// FUNCTION 1405e5f5c FUN_1405e5f5c body=41 status=ok
// SIG undefined FUN_1405e5f5c(void)

void FUN_1405e5f5c(longlong param_1)

{
  FUN_1405e5f86();
  if (*(char *)(param_1 + 0x231) != '\0') {
    return;
  }
  FUN_1405e645c(param_1);
  return;
}



// FUNCTION 1405e5f86 FUN_1405e5f86 body=1236 status=ok
// SIG undefined FUN_1405e5f86(void)

void FUN_1405e5f86(longlong *param_1,float param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  bool bVar14;
  float fVar15;
  undefined1 auStack_138 [40];
  longlong *local_110;
  longlong **local_108;
  longlong local_100 [16];
  longlong *local_80;
  int local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  fVar15 = *(float *)((longlong)param_1 + 0x184);
  SRWLock = (PSRWLOCK)(param_1 + 10);
  AcquireSRWLockShared(SRWLock);
  local_80 = (longlong *)0x0;
  FUN_1401151e2(local_100,param_1[8],(int)param_1[9]);
  ReleaseSRWLockShared(SRWLock);
  if (((((char)param_1[0xb] == '\x01') &&
       (lVar9 = (**(code **)(*param_1 + 0x180))(param_1), lVar9 != 0)) &&
      (lVar9 = FUN_1449baec6(lVar9), lVar9 != 0)) &&
     (plVar13 = *(longlong **)(lVar9 + 0x138), plVar13 != (longlong *)0x0)) {
    iVar8 = (int)plVar13[1];
    do {
      if (iVar8 == 0) goto LAB_1405e6076;
      LOCK();
      iVar6 = (int)plVar13[1];
      bVar14 = iVar8 == iVar6;
      if (bVar14) {
        *(int *)(plVar13 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar14);
    if (*(longlong *)(lVar9 + 0x130) != 0) {
      if (0 < (longlong)(int)param_1[0x29]) {
        uVar11 = (longlong)(int)param_1[0x29] + 1;
        do {
          lVar9 = *(longlong *)(param_1[0x28] + -0x10 + uVar11 * 8);
          if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x378) != 0)) {
            *(undefined1 *)(lVar9 + 0x3e0) = 1;
          }
          uVar11 = uVar11 - 1;
        } while (1 < uVar11);
      }
      FUN_1461bf25a(param_1);
    }
    LOCK();
    plVar1 = plVar13 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
LAB_1405e6076:
  if (((((char)param_1[0x30] == '\0') && (*(int *)((longlong)param_1 + 0x84) != 0)) &&
      ((uVar3 = *(uint *)(param_1 + 0x10), -1 < (int)uVar3 &&
       ((((int)uVar3 < DAT_14c9647dc &&
         (puVar12 = (undefined8 *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         puVar12 != (undefined8 *)0x0)) &&
        (*(int *)(puVar12 + 2) == *(int *)((longlong)param_1 + 0x84))))))) &&
     ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
      plVar13 = (longlong *)*puVar12;
    }
    else {
      plVar13 = (longlong *)0x0;
    }
    (**(code **)(*plVar13 + 0x2b0))(plVar13,fVar15 + param_2);
  }
  plVar13 = local_80;
  if (local_80 == (longlong *)0x0) {
    plVar13 = local_100;
  }
  if ((longlong)local_78 == 0) {
    iVar8 = -1;
  }
  else {
    iVar8 = -1;
    lVar9 = 0;
    do {
      lVar4 = *(longlong *)((longlong)plVar13 + lVar9);
      if ((((lVar4 != 0) && (*(char *)(lVar4 + 0xcd) == '\0')) &&
          ((*(char *)(lVar4 + 0xce) == '\0' &&
           ((*(char *)(lVar4 + 0x5bf) == '\x01' && (*(char *)(lVar4 + 0x5be) == '\x01')))))) &&
         (iVar8 < *(int *)(lVar4 + 0x3bc))) {
        iVar8 = *(int *)(lVar4 + 0x3bc);
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)local_78 * 8 != lVar9);
  }
  uVar10 = FUN_140432306();
  cVar7 = FUN_140432338(uVar10);
  if (cVar7 != '\0') {
    FUN_143e90742(uVar10);
  }
  plVar13 = local_100;
  if (local_80 != (longlong *)0x0) {
    plVar13 = local_80;
  }
  if ((longlong)local_78 != 0) {
    plVar1 = plVar13 + local_78;
    do {
      plVar5 = (longlong *)*plVar13;
      if (plVar5 != (longlong *)0x0) {
        *(bool *)(plVar5 + 0xb8) = *(int *)((longlong)plVar5 + 0x3bc) < iVar8;
        (**(code **)(*plVar5 + 0x2d8))(plVar5,param_2);
        if (*(char *)((longlong)plVar5 + 0xcc) == '\x01') {
          AcquireSRWLockExclusive(SRWLock);
          local_110 = plVar5;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(plVar5);
          }
          local_108 = &local_110;
          FUN_148a05e02(param_1 + 8,&local_108);
          ReleaseSRWLockExclusive(SRWLock);
          FUN_144757f48(plVar5,0x40000000);
          uVar3 = *(uint *)((longlong)plVar5 + 0xc);
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          do {
            uVar3 = *(uint *)(lVar9 + 8);
            if ((uVar3 >> 0x15 & 1) != 0) break;
            LOCK();
            bVar14 = uVar3 == *(uint *)(lVar9 + 8);
            if (bVar14) {
              *(uint *)(lVar9 + 8) = uVar3 | 0x200000;
            }
            UNLOCK();
          } while (!bVar14);
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar1);
  }
  if ((char)param_1[0x30] == '\0') {
    *(undefined4 *)(param_1 + 0x11) = 0;
    if (((((*(int *)((longlong)param_1 + 0x84) != 0) &&
          (uVar3 = *(uint *)(param_1 + 0x10), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) &&
        ((plVar13 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)((longlong)param_1 + 0x84))))) &&
       ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
        lVar9 = *plVar13;
      }
      else {
        lVar9 = 0;
      }
      *(undefined4 *)(lVar9 + 0xd8) = 0;
      if (*(int *)(lVar9 + 0xdc) < 0) {
        FUN_1403de8ba(lVar9 + 0xd0,0);
      }
      *(undefined4 *)(lVar9 + 0xe8) = 0;
      if (*(int *)(lVar9 + 0xec) < 0) {
        FUN_1403de8ba(lVar9 + 0xe0,0);
      }
    }
    if ((((*(int *)((longlong)param_1 + 0x3c) != 0) &&
         (uVar3 = *(uint *)(param_1 + 7), -1 < (int)uVar3)) &&
        (((int)uVar3 < DAT_14c9647dc &&
         (((plVar13 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)((longlong)param_1 + 0x3c))) &&
          ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))))) && (lVar9 = *plVar13, lVar9 != 0)) {
      while (**(longlong **)(lVar9 + 0x38) != 0) {
        FUN_1400f3090(lVar9);
      }
    }
  }
  fVar15 = 0.0;
  if ((char)param_1[0x30] == '\x01') {
    fVar15 = param_2 + *(float *)((longlong)param_1 + 0x184);
  }
  *(float *)((longlong)param_1 + 0x184) = fVar15;
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e645c FUN_1405e645c body=237 status=ok
// SIG undefined FUN_1405e645c(void)

void FUN_1405e645c(longlong *param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)((longlong)param_1 + 0x231) != '\0') goto LAB_1405e64be;
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x1f0) == 0)) {
LAB_1405e64b6:
    uVar1 = 0;
  }
  else {
    lVar2 = FUN_14094c9c2();
    if ((lVar2 == 0) ||
       ((*(longlong *)(lVar2 + 0x30) == 0 || (*(longlong *)(DAT_14cb98ab0 + 0x28) == 0))))
    goto LAB_1405e64b6;
    lVar2 = FUN_1405e654a();
    FUN_145727b2c(lVar2 + 0x30,&local_20,param_1,&LAB_1461283ce);
    param_1[0x47] = local_20;
    lVar2 = FUN_1405e654a();
    FUN_145727b2c(lVar2 + 0x48,&local_20,param_1,&LAB_1461283da);
    param_1[0x48] = local_20;
    uVar3 = FUN_1405e654a();
    uVar1 = FUN_145727afe(uVar3);
    *(undefined1 *)(param_1 + 0x46) = uVar1;
    uVar1 = 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x231) = uVar1;
LAB_1405e64be:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e654a FUN_1405e654a body=12 status=ok
// SIG undefined FUN_1405e654a(void)

undefined8 FUN_1405e654a(void)

{
  return *(undefined8 *)(DAT_14cb98ab0 + 0x28);
}



// FUNCTION 1405e6556 FUN_1405e6556 body=517 status=ok
// SIG undefined FUN_1405e6556(void)

longlong * FUN_1405e6556(undefined8 param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_1447210f0();
  if (0 < *(int *)(lVar4 + 0x238)) {
    lVar6 = 0;
    do {
      iVar3 = *(int *)(*(longlong *)(lVar4 + 0x230) + 4 + lVar6 * 8);
      if (((((iVar3 != 0) &&
            (uVar1 = *(uint *)(*(longlong *)(lVar4 + 0x230) + lVar6 * 8), -1 < (int)uVar1)) &&
           ((int)uVar1 < DAT_14c9647dc)) &&
          ((plVar5 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar3)))) &&
         (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
          (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)))) {
        if (DAT_14cbadd90 == 0) {
          local_38 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1459f2e4c;
          local_58 = &LAB_148c39de3;
          local_60 = &LAB_1457a9eb2;
          local_68 = &DAT_149e063b2;
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x3de0;
          local_50 = &local_38;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
            DAT_14cbadd90 + 0x30)) {
          cVar2 = FUN_14016169c(plVar5,&local_38);
          if ((cVar2 == '\0') || ((int)local_38 == 0)) {
            if ((*(byte *)(plVar5 + 0x84) & 2) != 0) {
              cVar2 = (**(code **)(*plVar5 + 0x6c8))(plVar5);
              if (cVar2 != '\0') goto LAB_1405e666f;
            }
            iVar3 = FUN_14487fd02(param_1);
            if (iVar3 == 1) goto LAB_1405e666f;
          }
        }
      }
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < *(int *)(lVar4 + 0x238));
  }
  plVar5 = (longlong *)0x0;
LAB_1405e666f:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e675c FUN_1405e675c body=30 status=ok
// SIG undefined FUN_1405e675c(void)

undefined1 FUN_1405e675c(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1405e677a(DAT_14cb0d2b0,param_1);
  return *(undefined1 *)(lVar1 + 0x88);
}



// FUNCTION 1405e677a FUN_1405e677a body=138 status=ok
// SIG undefined FUN_1405e677a(void)

longlong FUN_1405e677a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x1150) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1148);
    lVar4 = (longlong)*(int *)(param_1 + 0x1150) * 8;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + lVar5);
      if (*(longlong *)(lVar1 + 0x360) == param_2) {
        if (lVar1 != 0) {
          return lVar1;
        }
        break;
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 != lVar5);
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + lVar5);
      cVar2 = FUN_147dab532(lVar1 + 8,param_2);
      if (cVar2 != '\0') {
        return lVar1;
      }
      lVar5 = lVar5 + 8;
    } while (lVar4 != lVar5);
  }
  lVar3 = FUN_14572ad1a(DAT_14cb0d2b0,0);
  return lVar3;
}



// FUNCTION 1405e6804 FUN_1405e6804 body=257 status=ok
// SIG undefined FUN_1405e6804(void)

longlong * FUN_1405e6804(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  uVar3 = (ulonglong)*(byte *)(param_1 + 0x18);
  bVar5 = (&DAT_149fc1b6e)[uVar3];
  puVar1 = (uint *)(param_1 + 8);
  if (bVar5 == 1) {
    if ((*(longlong **)puVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(**(longlong **)puVar1 + 0x28))(), cVar2 == '\0')) goto LAB_1405e6893;
    uVar3 = (ulonglong)*(byte *)(param_1 + 0x18);
    bVar5 = (&DAT_149fc1b6e)[uVar3];
  }
  else if ((*puVar1 & 0xffffff) == 0) goto LAB_1405e6893;
  if ((bVar5 & 1) == 0) {
    if ((&DAT_149fc1b3a)[uVar3] != '\x01') goto LAB_1405e6893;
    uVar4 = FUN_146fdfba8();
    FUN_146fdfd84(uVar4,&local_38,puVar1);
  }
  else {
    (**(code **)(**(longlong **)puVar1 + 0x30))(*(longlong **)puVar1,&local_38);
  }
  if (&local_38 == param_2) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_38;
    *(undefined4 *)(param_2 + 1) = local_30;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_2c;
  }
LAB_1405e6893:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e6906 FUN_1405e6906 body=1181 status=ok
// SIG undefined FUN_1405e6906(void)

void FUN_1405e6906(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  code cVar5;
  code cVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  code *local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = param_2;
  lVar8 = FUN_1447210f0();
  if (*(longlong *)(lVar8 + 0x30) == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x2b0);
  }
  if ((*(byte *)(lVar11 + 0x39d) & 0x40) != 0) goto LAB_1405e6a41;
  lVar11 = local_98[0x86];
  if (lVar11 != 0) {
    if (DAT_14cae9568 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_1417de738;
      local_a0 = (code *)&LAB_145893408;
      local_a8 = &LAB_1458cbbd2;
      local_b8 = &LAB_147ba21f1;
      local_c0 = &LAB_1463e9233;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x1000000c;
      local_e0 = 8;
      local_e8 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar11 = local_98[0x86];
      if (lVar11 == 0) goto LAB_1405e69e1;
    }
    if ((((DAT_14cae9568 != 0) && (lVar13 = *(longlong *)(lVar11 + 0x10), lVar13 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
        == DAT_14cae9568 + 0x30)) goto LAB_1405e6a41;
    if (DAT_14cabf8e8 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_144ae7c60;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_14637144c;
      local_b8 = &LAB_147861001;
      local_c0 = &LAB_145acec30;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = 0x1000000c;
      local_e0 = 8;
      local_e8 = 0x1df0;
      FUN_14081cfa3(L"/Script/Engine",L"ChildConnection",&DAT_14cabf8e8,&DAT_147861000);
      lVar11 = local_98[0x86];
      if (lVar11 == 0) goto LAB_1405e69e1;
    }
    if (((DAT_14cabf8e8 != 0) && (lVar11 = *(longlong *)(lVar11 + 0x10), lVar11 != 0)) &&
       ((*(int *)(DAT_14cabf8e8 + 0x38) <= *(int *)(lVar11 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(DAT_14cabf8e8 + 0x38) * 8)
         == DAT_14cabf8e8 + 0x30)))) goto LAB_1405e6a41;
  }
LAB_1405e69e1:
  plVar2 = local_98;
  if (*(longlong *)(lVar8 + 0x780) != 0) {
    FUN_147c953c0(local_98,*(longlong *)(lVar8 + 0x780),1,1);
    uVar10 = FUN_14477b072(plVar2,DAT_14caf95a8);
    (**(code **)(*plVar2 + 0x248))(plVar2,uVar10,0);
  }
  iVar1 = *(int *)(lVar8 + 0x90);
  if (0 < (longlong)iVar1) {
    local_78 = (code *)0x0;
    uStack_70 = 0;
    lVar11 = *(longlong *)(lVar8 + 0x88);
    lVar13 = 0;
    local_90 = lVar8;
    do {
      plVar2 = *(longlong **)(lVar11 + lVar13);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar2 + 0x2b8))(plVar2), cVar4 != '\0')) {
        cVar5 = (code)(**(code **)(*plVar2 + 0x2e0))(plVar2);
        cVar6 = (code)(**(code **)(*plVar2 + 0x2d8))(plVar2);
        uVar9 = uStack_70;
        lVar8 = (longlong)(int)uStack_70;
        uVar7 = (int)uStack_70 + 1;
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
        if (uStack_70._4_4_ < uVar7) {
          FUN_1463b3652(&local_78,uVar9 & 0xffffffff);
        }
        pcVar3 = local_78;
        lVar8 = lVar8 * 0x10;
        *(undefined8 *)(local_78 + lVar8) = 0;
        *(undefined8 *)(local_78 + lVar8 + 8) = 0;
        (**(code **)(*plVar2 + 0x2d0))(plVar2,&local_88);
        FUN_14098f2e8(local_98,&local_80,local_88,0);
        *(undefined8 *)(pcVar3 + lVar8) = local_80;
        pcVar3[lVar8 + 0xc] = cVar6;
        pcVar3[lVar8 + 0xd] = cVar5;
        pcVar3[lVar8 + 0xe] = (code)(*(byte *)((longlong)plVar2 + 0x10a) >> 2 & 1);
        pcVar3[lVar8 + 0xf] = (code)(*(byte *)((longlong)plVar2 + 0x10a) >> 3 & 1);
        *(undefined4 *)(pcVar3 + lVar8 + 8) = *(undefined4 *)((longlong)plVar2 + 0xe4);
      }
      plVar2 = local_98;
      lVar13 = lVar13 + 8;
    } while ((longlong)iVar1 * 8 != lVar13);
    FUN_14608609a(local_98,&local_78);
    uVar10 = FUN_14477b072(plVar2,DAT_14caf95e8);
    (**(code **)(*plVar2 + 0x248))(plVar2,uVar10,0);
    lVar8 = local_90;
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
      lVar8 = local_90;
    }
  }
  uVar9 = (ulonglong)*(uint *)(lVar8 + 0x778);
  if (0 < (int)*(uint *)(lVar8 + 0x778)) {
    uVar12 = 0;
    do {
      FUN_147c953c0(local_98,*(undefined8 *)(*(longlong *)(lVar8 + 0x770) + uVar12 * 8),uVar12 == 0,
                    uVar12 == (int)uVar9 - 1);
      uVar12 = uVar12 + 1;
      uVar9 = (ulonglong)*(int *)(lVar8 + 0x778);
    } while ((longlong)uVar12 < (longlong)uVar9);
  }
LAB_1405e6a41:
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e6db1 FUN_1405e6db1 body=482 status=ok
// SIG undefined FUN_1405e6db1(void)

void FUN_1405e6db1(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  uVar4 = DAT_14c9cdb80;
  uVar3 = DAT_14c9c4540;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 0;
  uStack_58 = 0;
  FUN_1447be468(0,&local_68,&local_69);
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar6 = (uint *)*puVar1;
  if (puVar6 != (uint *)0x0) goto LAB_1405e6e31;
  while( true ) {
    FUN_14472e504(puVar1);
    puVar6 = (uint *)*puVar1;
LAB_1405e6e31:
    puVar5 = (undefined8 *)(*(longlong *)(puVar6 + 0x10) + 7U & 0xfffffffffffffff8);
    uVar7 = puVar6[0x12];
    if (puVar5 + 0x12 <= puVar6 + 0x4000) break;
    while( true ) {
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x4000;
      LOCK();
      uVar2 = *puVar6;
      *puVar6 = *puVar6 + uVar7 + 1;
      UNLOCK();
      if ((uVar2 ^ uVar7) != 0xffffffff) break;
      puVar6 = (uint *)*puVar1;
      *puVar6 = 0xffffffff;
      *(uint **)(puVar6 + 0x10) = puVar6 + 0x16;
      puVar6[0x12] = 0;
      *puVar1 = puVar6;
      puVar5 = (undefined8 *)((longlong)puVar6 + 0x5fU & 0xfffffffffffffff8);
      uVar7 = 0;
      if (puVar5 + 0x12 <= puVar6 + 0x4000) {
        uVar7 = 1;
        goto LAB_1405e6ead;
      }
    }
  }
  uVar7 = uVar7 + 1;
LAB_1405e6ead:
  *(undefined8 **)(puVar6 + 0x10) = puVar5 + 0x13;
  puVar6[0x12] = uVar7;
  *(int *)(puVar5 + -1) = ((int)puVar5 + -8) - (int)puVar6;
  *(undefined4 *)((longlong)puVar5 + -4) = 0x90;
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(&DAT_14ca12004 + (ulonglong)(2 < param_1) * 0xe8);
  *(undefined2 *)(puVar5 + 2) = 0x3939;
  puVar5[3] = param_2;
  *(int *)(puVar5 + 4) = param_1;
  puVar5[5] = param_3;
  puVar5[6] = param_4;
  *(undefined1 *)(puVar5 + 7) = 0x3a;
  *puVar5 = &PTR_FUN_14a204b90;
  *(undefined1 *)(puVar5 + 0x10) = 1;
  *(undefined4 *)((longlong)puVar5 + 0x84) = local_68;
  *(undefined1 *)(puVar5 + 0x11) = local_69;
  *(undefined4 *)((longlong)puVar5 + 0x89) = 0x1000001;
  puVar5[8] = uVar3;
  puVar5[9] = uVar4;
  *(undefined4 *)(puVar5 + 10) = 0x11;
  *(undefined4 *)((longlong)puVar5 + 0x74) = uStack_48._4_4_;
  *(undefined4 *)((longlong)puVar5 + 100) = uStack_58._4_4_;
  *(undefined4 *)(puVar5 + 0xd) = (undefined4)local_50;
  *(undefined4 *)((longlong)puVar5 + 0x6c) = local_50._4_4_;
  *(undefined4 *)(puVar5 + 0xe) = (undefined4)uStack_48;
  *(undefined4 *)((longlong)puVar5 + 0x54) = uStack_64;
  *(undefined4 *)(puVar5 + 0xb) = (undefined4)local_60;
  *(undefined4 *)((longlong)puVar5 + 0x5c) = local_60._4_4_;
  *(undefined4 *)(puVar5 + 0xc) = (undefined4)uStack_58;
  *(undefined4 *)(puVar5 + 0xf) = 1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e6f9a FUN_1405e6f9a body=57 status=ok
// SIG undefined FUN_1405e6f9a(void)

void FUN_1405e6f9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb216a0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb216a0 = FUN_140002ddd(FUN_146433d07,uVar1,L"GbxBrainAspect_NavAttribute");
  }
  return;
}



// FUNCTION 1405e6fd4 FUN_1405e6fd4 body=710 status=ok
// SIG undefined FUN_1405e6fd4(void)

void FUN_1405e6fd4(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  bVar1 = *(byte *)(param_1 + 0x19);
  if ((bVar1 & 2) != 0) {
    if ((bVar1 & 1) != 0) {
      *(byte *)(param_1 + 0x19) = bVar1 & 0xfd;
      lVar4 = *(longlong *)(param_3 + 0x28);
      uVar2 = *(undefined8 *)(lVar4 + 0xb8);
      *(undefined8 *)(param_3 + 0x48) = *(undefined8 *)(lVar4 + 0xb0);
      *(undefined8 *)(param_3 + 0x50) = uVar2;
      *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(lVar4 + 0xc0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
    }
    *(byte *)(param_1 + 0x19) = bVar1 & 0xfc;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe8);
  if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x448), lVar4 == 0)) {
LAB_1405e7254:
    lVar4 = 0;
  }
  else {
    uVar2 = FUN_1405e72a0();
    plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
    if (plVar3 == (longlong *)0x0) goto LAB_1405e7254;
    lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  FUN_1405e7386(param_1,param_3);
  FUN_1405e77ae(param_1,&local_68,param_3);
  dVar5 = (double)FUN_144719204(local_68,0x4076800000000000);
  dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                  (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0));
  if ((dVar5 != 0.0) || (NAN(dVar5))) {
LAB_1405e7219:
    if (lVar4 == 0) {
      FUN_1405e84a8(param_1,param_3,&local_68);
      goto LAB_1405e71ee;
    }
LAB_1405e721e:
    FUN_1405e7fe8(lVar4,&local_68);
    FUN_1405e84a8(param_1,param_3,&local_68);
    dVar5 = *(double *)(lVar4 + 0x50);
  }
  else {
    dVar5 = (double)FUN_144719204(local_60,0x4076800000000000);
    dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                    (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0));
    if ((dVar5 != 0.0) || (NAN(dVar5))) goto LAB_1405e7219;
    dVar5 = (double)FUN_144719204(local_58);
    dVar5 = (double)(~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar5 |
                    (ulonglong)(dVar5 + 360.0) & -(ulonglong)(dVar5 < 0.0));
    if ((dVar5 != 0.0) || (NAN(dVar5))) goto LAB_1405e7219;
    if (lVar4 == 0) goto LAB_1405e71ee;
    dVar5 = *(double *)(lVar4 + 0x50);
    if (((*(double *)(lVar4 + 8) <= ABS(dVar5) && ABS(dVar5) != *(double *)(lVar4 + 8)) ||
        (*(double *)(lVar4 + 0x10) <= ABS(*(double *)(lVar4 + 0x58)) &&
         ABS(*(double *)(lVar4 + 0x58)) != *(double *)(lVar4 + 0x10))) ||
       (*(double *)(lVar4 + 0x18) <= ABS(*(double *)(lVar4 + 0x60)) &&
        ABS(*(double *)(lVar4 + 0x60)) != *(double *)(lVar4 + 0x18))) goto LAB_1405e721e;
  }
  dVar5 = dVar5 + *(double *)(param_3 + 0xa0);
  *(double *)(param_3 + 0xa0) = dVar5;
  dVar6 = *(double *)(lVar4 + 0x58) + *(double *)(param_3 + 0xa8);
  *(double *)(param_3 + 0xa8) = dVar6;
  dVar7 = *(double *)(lVar4 + 0x60) + *(double *)(param_3 + 0xb0);
  *(double *)(param_3 + 0xb0) = dVar7;
  *(double *)(param_3 + 0xa0) = dVar5 + *(double *)(lVar4 + 0xb8);
  *(double *)(param_3 + 0xa8) = dVar6 + *(double *)(lVar4 + 0xc0);
  *(double *)(param_3 + 0xb0) = dVar7 + *(double *)(lVar4 + 200);
LAB_1405e71ee:
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e72a0 FUN_1405e72a0 body=228 status=ok
// SIG undefined FUN_1405e72a0(void)

longlong FUN_1405e72a0(void)

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
  if (DAT_14cb932a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148a095b9;
    local_40 = FUN_1465708e6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"CameraWeaponInterface",&DAT_14cb932a0,&DAT_148a095b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb932a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e7386 FUN_1405e7386 body=344 status=ok
// SIG undefined FUN_1405e7386(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405e7386(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = param_1;
  uVar3 = FUN_1405e74e0(param_1,&local_38,param_2);
  dVar20 = local_38 - *(double *)(param_1 + 0x70);
  dVar21 = dStack_30 - *(double *)(param_1 + 0x78);
  dVar7 = local_28 - *(double *)(param_1 + 0x80);
  dVar1 = (double)DAT_1499387d0;
  dVar2 = DAT_1499387d0._8_8_;
  auVar14._8_8_ = dVar21;
  auVar14._0_8_ = dVar20;
  auVar15 = divpd(auVar14,_DAT_1499387d0);
  auVar8._0_8_ = dVar7 / 360.0;
  auVar8._8_8_ = 0;
  auVar16 = roundpd(auVar15,auVar15,3);
  auVar15 = roundpd(auVar8,auVar8,3);
  auVar22._0_8_ = dVar7 - auVar15._0_8_ * dVar1;
  auVar22._8_8_ = 0.0 - auVar15._8_8_ * dVar2;
  dVar20 = dVar20 - auVar16._0_8_ * dVar1;
  dVar21 = dVar21 - auVar16._8_8_ * dVar2;
  auVar19._0_8_ = dVar20 + dVar1;
  auVar19._8_8_ = dVar21 + dVar2;
  auVar18._0_8_ = dVar1 + auVar22._0_8_;
  auVar18._8_8_ = dVar2 + auVar22._8_8_;
  auVar9._8_8_ = -(ulonglong)(0.0 <= dVar21);
  auVar9._0_8_ = -(ulonglong)(0.0 <= dVar20);
  auVar15._8_8_ = dVar21;
  auVar15._0_8_ = dVar20;
  auVar16 = blendvpd(auVar19,auVar15,auVar9);
  auVar10._8_8_ = -(ulonglong)(0.0 <= auVar22._8_8_);
  auVar10._0_8_ = -(ulonglong)(0.0 <= auVar22._0_8_);
  auVar15 = blendvpd(auVar18,auVar22,auVar10);
  auVar23._0_8_ = auVar16._0_8_ + -360.0;
  auVar23._8_8_ = auVar16._8_8_ + -360.0;
  auVar11._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
  auVar11._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
  auVar8 = blendvpd(auVar16,auVar23,auVar11);
  auVar12._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
  auVar12._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
  auVar16._8_8_ = auVar15._8_8_ + -360.0;
  auVar16._0_8_ = auVar15._0_8_ + -360.0;
  auVar15 = blendvpd(auVar15,auVar16,auVar12);
  auVar17._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar8._8_8_));
  auVar17._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar8._0_8_));
  iVar4 = movmskpd(uVar3,auVar17);
  auVar13._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar15._8_8_));
  auVar13._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar15._0_8_));
  uVar5 = movmskpd((int)lVar6,auVar13);
  *(byte *)(param_1 + 0x88) =
       *(byte *)(param_1 + 0x88) & 0xfe | ((uVar5 & 0x3fffffff) != 0 || iVar4 != 0);
  *(double *)(param_1 + 0x70) = local_38;
  *(double *)(param_1 + 0x78) = dStack_30;
  *(double *)(param_1 + 0x80) = local_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e74e0 FUN_1405e74e0 body=716 status=ok
// SIG undefined FUN_1405e74e0(void)

undefined4 * FUN_1405e74e0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  double dVar11;
  double dVar12;
  double *pdVar13;
  uint uVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  double local_48;
  ulonglong local_40;
  
  dVar11 = DAT_14c846508;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(double *)(param_2 + 4) = DAT_14c846508;
  uVar18 = DAT_14c846500._4_4_;
  uVar17 = (undefined4)DAT_14c846500;
  uVar16 = DAT_14c8464f8._4_4_;
  *param_2 = (undefined4)DAT_14c8464f8;
  param_2[1] = uVar16;
  param_2[2] = uVar17;
  param_2[3] = uVar18;
  cVar1 = *(char *)(param_1 + 0x18);
  dVar11 = (double)CONCAT71((int7)((ulonglong)dVar11 >> 8),cVar1);
  if ((cVar1 == '\0') || (lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe0), lVar2 == 0))
  goto LAB_1405e752a;
  lVar2 = *(longlong *)(lVar2 + 0x1c8);
  uVar16 = (undefined4)DAT_14c8464f8;
  uVar17 = DAT_14c8464f8._4_4_;
  uVar18 = (undefined4)DAT_14c846500;
  uVar19 = DAT_14c846500._4_4_;
  if (lVar2 == 0) {
    local_88 = DAT_14c846508;
LAB_1405e7611:
    *(double *)(param_2 + 4) = local_88;
    local_98 = uVar16;
    uStack_94 = uVar17;
    uStack_90 = uVar18;
    uStack_8c = uVar19;
  }
  else {
    lVar15 = *(longlong *)(lVar2 + 0x120);
    if (((lVar15 == 0) || (cVar1 != '\x02')) ||
       (dVar12 = *(double *)(lVar15 + 0xa8), dVar11 = 0.0, dVar12 == 0.0)) {
      dVar12 = *(double *)(lVar2 + 0x240);
      dVar7 = *(double *)(lVar2 + 0x248);
      dVar8 = *(double *)(lVar2 + 0x250);
      dVar9 = *(double *)(lVar2 + 600);
      pdVar13 = *(double **)(lVar2 + 0x228);
      local_78 = dVar12;
      uStack_70 = dVar7;
      local_68 = dVar8;
      uStack_60 = dVar9;
      if (pdVar13 == (double *)0x0) {
        lVar15 = 0x40;
        pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
        dVar11 = DAT_14c8463d8;
        *pdVar13 = DAT_14c8463d0;
        pdVar13[1] = dVar11;
        dVar11 = DAT_14c8463e8;
        pdVar13[2] = DAT_14c8463e0;
        pdVar13[3] = dVar11;
        dVar11 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar13[5] = dVar11;
        dVar11 = DAT_14c846508;
        pdVar13[6] = DAT_14c846508;
        *(double **)(lVar2 + 0x228) = pdVar13;
      }
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[1]);
      auVar3._0_8_ = -(ulonglong)(dVar12 != *pdVar13);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[1]) >> 0x20);
      iVar10 = movmskpd(SUB84(dVar11,0),auVar3);
      auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar13[3]);
      auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar13[2]);
      auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar13[3]) >> 0x20);
      uVar14 = movmskpd((int)lVar15,auVar5);
      if ((uVar14 & 0x3fffffff) != 0 || iVar10 != 0) {
        *(undefined4 *)(pdVar13 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar13 + 0x14) = local_68._4_4_;
        *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_60._4_4_;
        *(undefined4 *)pdVar13 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar13 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_58);
        pdVar13[6] = local_48;
        pdVar13[4] = (double)CONCAT44(uStack_54,local_58);
        pdVar13[5] = (double)CONCAT44(uStack_4c,uStack_50);
      }
      local_88 = pdVar13[6];
      uVar16 = *(undefined4 *)(pdVar13 + 4);
      uVar17 = *(undefined4 *)((longlong)pdVar13 + 0x24);
      uVar18 = *(undefined4 *)(pdVar13 + 5);
      uVar19 = *(undefined4 *)((longlong)pdVar13 + 0x2c);
      goto LAB_1405e7611;
    }
    lVar2 = *(longlong *)((longlong)dVar12 + 0x1c8);
    if (lVar2 == 0) {
      local_48 = DAT_14c846508;
    }
    else {
      dVar11 = *(double *)(lVar2 + 0x240);
      dVar7 = *(double *)(lVar2 + 0x248);
      dVar8 = *(double *)(lVar2 + 0x250);
      dVar9 = *(double *)(lVar2 + 600);
      pdVar13 = *(double **)(lVar2 + 0x228);
      local_78 = dVar11;
      uStack_70 = dVar7;
      local_68 = dVar8;
      uStack_60 = dVar9;
      if (pdVar13 == (double *)0x0) {
        lVar15 = 0x40;
        pdVar13 = (double *)FUN_14001cc68(0x40,0x10);
        dVar12 = DAT_14c8463d8;
        *pdVar13 = DAT_14c8463d0;
        pdVar13[1] = dVar12;
        dVar12 = DAT_14c8463e8;
        pdVar13[2] = DAT_14c8463e0;
        pdVar13[3] = dVar12;
        dVar12 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
        pdVar13[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
        pdVar13[5] = dVar12;
        dVar12 = DAT_14c846508;
        pdVar13[6] = DAT_14c846508;
        *(double **)(lVar2 + 0x228) = pdVar13;
      }
      auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar13[1]);
      auVar4._0_8_ = -(ulonglong)(dVar11 != *pdVar13);
      auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar13[1]) >> 0x20);
      iVar10 = movmskpd(SUB84(dVar12,0),auVar4);
      auVar6._8_4_ = (int)-(ulonglong)(dVar9 != pdVar13[3]);
      auVar6._0_8_ = -(ulonglong)(dVar8 != pdVar13[2]);
      auVar6._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar13[3]) >> 0x20);
      uVar14 = movmskpd((int)lVar15,auVar6);
      if ((uVar14 & 0x3fffffff) != 0 || iVar10 != 0) {
        *(undefined4 *)(pdVar13 + 2) = (undefined4)local_68;
        *(undefined4 *)((longlong)pdVar13 + 0x14) = local_68._4_4_;
        *(undefined4 *)(pdVar13 + 3) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)pdVar13 + 0x1c) = uStack_60._4_4_;
        *(undefined4 *)pdVar13 = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar13 + 4) = local_78._4_4_;
        *(undefined4 *)(pdVar13 + 1) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar13 + 0xc) = uStack_70._4_4_;
        FUN_1448052ee(&local_78,&local_58);
        pdVar13[6] = local_48;
        pdVar13[4] = (double)CONCAT44(uStack_54,local_58);
        pdVar13[5] = (double)CONCAT44(uStack_4c,uStack_50);
      }
      local_48 = pdVar13[6];
      uVar16 = *(undefined4 *)(pdVar13 + 4);
      uVar17 = *(undefined4 *)((longlong)pdVar13 + 0x24);
      uVar18 = *(undefined4 *)(pdVar13 + 5);
      uVar19 = *(undefined4 *)((longlong)pdVar13 + 0x2c);
    }
    *(double *)(param_2 + 4) = local_48;
    local_58 = uVar16;
    uStack_54 = uVar17;
    uStack_50 = uVar18;
    uStack_4c = uVar19;
  }
  *param_2 = uVar16;
  param_2[1] = uVar17;
  param_2[2] = uVar18;
  param_2[3] = uVar19;
LAB_1405e752a:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e77ae FUN_1405e77ae body=2104 status=ok
// SIG undefined FUN_1405e77ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1405e77ae(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  byte bVar2;
  float *pfVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  double dVar7;
  undefined1 auVar16 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar25;
  double dVar15;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  float fVar60;
  float fVar61;
  undefined1 auStack_178 [32];
  double local_158;
  undefined4 local_150;
  undefined1 local_148 [16];
  ulonglong local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  undefined1 auVar42 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_1405e74e0(param_1,&local_108);
  auVar17 = _DAT_1499387d0;
  auVar16._8_8_ = dStack_100;
  auVar16._0_8_ = local_108;
  dVar13 = (double)DAT_1499387d0;
  dVar14 = DAT_1499387d0._8_8_;
  auVar16 = divpd(auVar16,_DAT_1499387d0);
  auVar27._8_8_ = 0;
  auVar27._0_8_ = local_f8;
  auVar27 = divpd(auVar27,_DAT_1499387d0);
  auVar16 = roundpd(auVar16,auVar16,3);
  auVar27 = roundpd(auVar27,auVar27,3);
  dVar15 = (local_108 - auVar16._0_8_ * dVar13) * 0.008726646259971648;
  dVar11 = (dStack_100 - auVar16._8_8_ * dVar14) * 0.008726646259971648;
  dVar46 = (local_f8 - auVar27._0_8_ * dVar13) * 0.008726646259971648;
  dVar48 = (0.0 - auVar27._8_8_ * dVar14) * 0.008726646259971648;
  dVar7 = sin(dVar15);
  dVar8 = sin(dVar11);
  dVar9 = sin(dVar46);
  sin(dVar48);
  dVar10 = cos(dVar15);
  dVar11 = cos(dVar11);
  dVar12 = cos(dVar46);
  cos(dVar48);
  dVar46 = dVar7 * dVar8 * dVar12 - dVar10 * dVar11 * dVar9;
  dVar48 = -(dVar7 * dVar11 * dVar12) - dVar10 * dVar8 * dVar9;
  dVar15 = (-(dVar11 * dVar7 * dVar9) + dVar8 * dVar10 * dVar12) * -1.0;
  dVar11 = (dVar8 * dVar7 * dVar9 + dVar11 * dVar10 * dVar12) * 1.0;
  auVar16 = *(undefined1 (*) [16])(param_3 + 0x48);
  auVar27 = divpd(auVar16,auVar17);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *(double *)(param_3 + 0x58);
  auVar28 = divpd(auVar28,auVar17);
  auVar17 = roundpd(auVar27,auVar27,3);
  auVar27 = roundpd(auVar28,auVar28,3);
  dVar10 = (auVar16._0_8_ - auVar17._0_8_ * dVar13) * 0.008726646259971648;
  dVar12 = (auVar16._8_8_ - auVar17._8_8_ * dVar14) * 0.008726646259971648;
  dVar13 = (*(double *)(param_3 + 0x58) - auVar27._0_8_ * dVar13) * 0.008726646259971648;
  dVar14 = (0.0 - auVar27._8_8_ * dVar14) * 0.008726646259971648;
  dVar7 = sin(dVar10);
  dVar8 = sin(dVar12);
  dVar9 = sin(dVar13);
  sin(dVar14);
  dVar10 = cos(dVar10);
  dVar12 = cos(dVar12);
  dVar13 = cos(dVar13);
  cos(dVar14);
  dVar47 = -(dVar12 * dVar7 * dVar9) + dVar8 * dVar10 * dVar13;
  dVar49 = dVar8 * dVar7 * dVar9 + dVar12 * dVar10 * dVar13;
  dVar14 = dVar7 * dVar8 * dVar13 - dVar10 * dVar12 * dVar9;
  dVar13 = -(dVar7 * dVar12 * dVar13) - dVar10 * dVar8 * dVar9;
  local_128 = dVar13 * dVar15 * -1.0 + ((dVar11 * dVar14 - dVar46 * dVar49 * 1.0) - dVar47 * dVar48)
  ;
  dStack_120 = dVar14 * dVar15 * 1.0 +
               ((dVar11 * dVar13 - dVar46 * dVar47 * -1.0) - dVar49 * dVar48);
  local_118 = dVar49 * dVar15 * 1.0 + dVar48 * dVar14 + (dVar11 * dVar47 - dVar46 * dVar13 * 1.0);
  dStack_110 = dVar47 * dVar15 * -1.0 + dVar48 * dVar13 + (dVar11 * dVar49 - dVar46 * dVar14 * -1.0)
  ;
  FUN_1448052ee(&local_128,local_148);
  pfVar3 = (float *)(param_1 + 0x1c);
  lVar4 = 0;
  uVar54 = 0;
  uVar55 = 0;
  uVar50 = 0;
  uVar52 = 0;
  uVar56 = 0;
  uVar58 = 0;
  do {
    iVar1 = *(int *)((longlong)&DAT_14b3f1814 + lVar4);
    dVar13 = 0.0;
    if (iVar1 - 1U < 3) {
      dVar13 = *(double *)
                (*(longlong *)(param_3 + 0x28) +
                *(longlong *)(&DAT_14b3f2878 + (ulonglong)(iVar1 - 1U) * 8));
    }
    fVar60 = (float)dVar13;
    fVar26 = *pfVar3 * fVar60;
    uVar57 = uVar56;
    uVar59 = uVar58;
    if (((fVar26 != 0.0) || (NAN(fVar26))) ||
       (uVar51 = uVar50, uVar53 = uVar52, (*(byte *)(param_1 + 0x88) & 1) != 0)) {
      bVar2 = *(byte *)(pfVar3 + 1);
      if ((bVar2 == 1) && (fVar33 = pfVar3[4], 0.0 < fVar33)) {
        dVar13 = (double)DAT_1499387d0;
        dVar14 = DAT_1499387d0._8_8_;
        if (iVar1 == 3) {
          auVar16 = divpd(local_148,_DAT_1499387d0);
          auVar16 = roundpd(auVar16,auVar16,3);
          auVar43._0_8_ = local_148._0_8_ - auVar16._0_8_ * dVar13;
          auVar43._8_8_ = local_148._8_8_ - auVar16._8_8_ * dVar14;
          auVar38._0_8_ = auVar43._0_8_ + dVar13;
          auVar38._8_8_ = auVar43._8_8_ + dVar14;
          auVar17._8_8_ = -(ulonglong)(0.0 <= auVar43._8_8_);
          auVar17._0_8_ = -(ulonglong)(0.0 <= auVar43._0_8_);
          auVar16 = blendvpd(auVar38,auVar43,auVar17);
          auVar44._0_8_ = auVar16._0_8_ + -360.0;
          auVar44._8_8_ = auVar16._8_8_ + -360.0;
          auVar21._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
          auVar21._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
          auVar16 = blendvpd(auVar16,auVar44,auVar21);
          auVar41._8_8_ = auVar16._8_8_;
          auVar41._0_8_ = auVar41._8_8_;
        }
        else {
          if (iVar1 == 2) {
            auVar16 = divpd(local_148,_DAT_1499387d0);
            auVar16 = roundpd(auVar16,auVar16,3);
            dVar15 = auVar16._0_8_;
            dVar11 = auVar16._8_8_;
            auVar34 = local_148;
          }
          else {
            auVar41 = ZEXT816(0);
            if (iVar1 != 1) goto LAB_1405e7f0a;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = local_138;
            auVar16 = divpd(auVar34,_DAT_1499387d0);
            auVar16 = roundpd(auVar16,auVar16,3);
            dVar15 = auVar16._0_8_;
            dVar11 = auVar16._8_8_;
          }
          auVar39._0_8_ = auVar34._0_8_ - dVar15 * dVar13;
          auVar39._8_8_ = auVar34._8_8_ - dVar11 * dVar14;
          auVar45._0_8_ = auVar39._0_8_ + dVar13;
          auVar45._8_8_ = auVar39._8_8_ + dVar14;
          auVar22._8_8_ = -(ulonglong)(0.0 <= auVar39._8_8_);
          auVar22._0_8_ = -(ulonglong)(0.0 <= auVar39._0_8_);
          auVar16 = blendvpd(auVar45,auVar39,auVar22);
          dVar13 = auVar16._0_8_;
          auVar23._0_8_ = (ulonglong)(dVar13 + -360.0) & -(ulonglong)(180.0 < dVar13);
          auVar23._8_8_ = 0;
          auVar40._0_8_ = ~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13;
          auVar40._8_8_ = auVar16._8_8_;
          auVar41 = auVar40 | auVar23;
        }
LAB_1405e7f0a:
        auVar42._4_12_ = auVar41._4_12_;
        fVar32 = (float)auVar41._0_8_;
        auVar24 = ZEXT816(0);
        if (0.0 <= fVar60) {
LAB_1405e7fc0:
          if ((0.0 < fVar60) && (fVar33 = pfVar3[3] - fVar33, fVar33 <= fVar32)) {
            fVar33 = (fVar32 - fVar33) / (pfVar3[3] - fVar33);
            goto LAB_1405e7f48;
          }
        }
        else {
          fVar61 = fVar33 + pfVar3[2];
          if (fVar61 < fVar32) goto LAB_1405e7fc0;
          fVar33 = (fVar32 - fVar61) / (pfVar3[2] - fVar61);
LAB_1405e7f48:
          auVar42._0_4_ = fVar33;
          auVar24 = auVar42;
        }
        if (1.0 <= auVar24._0_4_) {
          auVar24._0_4_ = 0x3f800000;
        }
        if (0.0 < auVar24._0_4_) {
          local_150 = *(undefined4 *)(param_1 + 0x6c);
          local_158 = (double)*(float *)(param_1 + 0x68);
          dVar13 = (double)FUN_140bcb030();
          fVar26 = ((pfVar3[5] + -1.0) * (float)dVar13 + 1.0) * fVar60 * *pfVar3;
          bVar2 = *(byte *)(pfVar3 + 1);
        }
      }
      if ((bVar2 & 1) != 0) {
        dVar13 = (double)DAT_1499387d0;
        dVar14 = DAT_1499387d0._8_8_;
        if (iVar1 == 3) {
          auVar16 = divpd(local_148,_DAT_1499387d0);
          auVar16 = roundpd(auVar16,auVar16,3);
          auVar35._0_8_ = local_148._0_8_ - auVar16._0_8_ * dVar13;
          auVar35._8_8_ = local_148._8_8_ - auVar16._8_8_ * dVar14;
          auVar30._0_8_ = auVar35._0_8_ + dVar13;
          auVar30._8_8_ = auVar35._8_8_ + dVar14;
          auVar18._8_8_ = -(ulonglong)(0.0 <= auVar35._8_8_);
          auVar18._0_8_ = -(ulonglong)(0.0 <= auVar35._0_8_);
          auVar16 = blendvpd(auVar30,auVar35,auVar18);
          auVar36._0_8_ = auVar16._0_8_ + -360.0;
          auVar36._8_8_ = auVar16._8_8_ + -360.0;
          auVar19._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
          auVar19._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
          auVar16 = blendvpd(auVar16,auVar36,auVar19);
          dVar13 = auVar16._8_8_;
LAB_1405e7dff:
          fVar60 = (float)((double)fVar26 + dVar13);
          fVar26 = fVar60;
        }
        else {
          if (iVar1 == 2) {
            auVar16 = divpd(local_148,_DAT_1499387d0);
            auVar16 = roundpd(auVar16,auVar16,3);
            dVar15 = auVar16._0_8_;
            dVar11 = auVar16._8_8_;
            auVar29 = local_148;
LAB_1405e7dc0:
            auVar31._0_8_ = auVar29._0_8_ - dVar15 * dVar13;
            auVar31._8_8_ = auVar29._8_8_ - dVar11 * dVar14;
            auVar37._0_8_ = auVar31._0_8_ + dVar13;
            auVar37._8_8_ = auVar31._8_8_ + dVar14;
            auVar20._8_8_ = -(ulonglong)(0.0 <= auVar31._8_8_);
            auVar20._0_8_ = -(ulonglong)(0.0 <= auVar31._0_8_);
            auVar16 = blendvpd(auVar37,auVar31,auVar20);
            dVar13 = auVar16._0_8_;
            dVar13 = (double)(~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13 |
                             (ulonglong)(dVar13 + -360.0) & -(ulonglong)(180.0 < dVar13));
            goto LAB_1405e7dff;
          }
          if (iVar1 == 1) {
            auVar29._8_8_ = 0;
            auVar29._0_8_ = local_138;
            auVar16 = divpd(auVar29,_DAT_1499387d0);
            auVar16 = roundpd(auVar16,auVar16,3);
            dVar15 = auVar16._0_8_;
            dVar11 = auVar16._8_8_;
            goto LAB_1405e7dc0;
          }
          fVar60 = fVar26 + 0.0;
          dVar13 = 0.0;
        }
        uVar5 = -(uint)(fVar26 < pfVar3[3]);
        fVar26 = (float)(~uVar5 & (uint)pfVar3[3] | (uint)fVar60 & uVar5);
        if (fVar26 <= pfVar3[2]) {
          fVar26 = pfVar3[2];
        }
        fVar26 = (float)((double)fVar26 - dVar13);
      }
      uVar25 = (undefined4)((ulonglong)(double)fVar26 >> 0x20);
      uVar6 = SUB84((double)fVar26,0);
      uVar51 = uVar6;
      uVar53 = uVar25;
      if (((iVar1 != 3) &&
          (uVar51 = uVar50, uVar53 = uVar52, uVar57 = uVar6, uVar59 = uVar25, iVar1 != 2)) &&
         (uVar57 = uVar56, uVar59 = uVar58, iVar1 == 1)) {
        uVar54 = uVar6;
        uVar55 = uVar25;
      }
    }
    lVar4 = lVar4 + 4;
    pfVar3 = pfVar3 + 6;
    uVar50 = uVar51;
    uVar52 = uVar53;
    uVar56 = uVar57;
    uVar58 = uVar59;
    if (lVar4 == 0xc) {
      param_2[1] = CONCAT44(uVar53,uVar51);
      *param_2 = CONCAT44(uVar59,uVar57);
      param_2[2] = CONCAT44(uVar55,uVar54);
      if ((local_f0 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return param_2;
    }
  } while( true );
}



// FUNCTION 1405e7fe8 FUN_1405e7fe8 body=1033 status=ok
// SIG undefined FUN_1405e7fe8(void)

void FUN_1405e7fe8(char *param_1,double *param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  double dVar6;
  
  dVar6 = (double)FUN_144719204(*param_2,0x4076800000000000);
  dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                  (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
  if ((dVar6 == 0.0) && (!NAN(dVar6))) {
    dVar6 = (double)FUN_144719204(param_2[1],0x4076800000000000);
    dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                    (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
    if ((dVar6 == 0.0) && (!NAN(dVar6))) {
      dVar6 = (double)FUN_144719204(param_2[2],0x4076800000000000);
      dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                      (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
      if ((((dVar6 == 0.0) && (!NAN(dVar6))) &&
          (ABS(*(double *)(param_1 + 0x50)) < *(double *)(param_1 + 8) ||
           ABS(*(double *)(param_1 + 0x50)) == *(double *)(param_1 + 8))) &&
         ((ABS(*(double *)(param_1 + 0x58)) < *(double *)(param_1 + 0x10) ||
           ABS(*(double *)(param_1 + 0x58)) == *(double *)(param_1 + 0x10) &&
          (ABS(*(double *)(param_1 + 0x60)) < *(double *)(param_1 + 0x18) ||
           ABS(*(double *)(param_1 + 0x60)) == *(double *)(param_1 + 0x18))))) {
        return;
      }
    }
  }
  dVar6 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x50),0x4076800000000000);
  dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                  (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
  if ((dVar6 == 0.0) && (!NAN(dVar6))) {
    dVar6 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x58),0x4076800000000000);
    dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                    (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
    if ((dVar6 == 0.0) && (!NAN(dVar6))) {
      dVar6 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x60),0x4076800000000000);
      dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                      (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
      if ((dVar6 == 0.0) && (!NAN(dVar6))) {
        dVar6 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x68),0x4076800000000000);
        dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                        (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
        if ((dVar6 == 0.0) && (!NAN(dVar6))) {
          dVar6 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x70),0x4076800000000000);
          dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                          (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
          if ((dVar6 == 0.0) && (!NAN(dVar6))) {
            dVar6 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x78));
            dVar6 = (double)(~-(ulonglong)(dVar6 < 0.0) & (ulonglong)dVar6 |
                            (ulonglong)(dVar6 + 360.0) & -(ulonglong)(dVar6 < 0.0));
            if ((dVar6 == 0.0) && (!NAN(dVar6))) {
              return;
            }
          }
        }
      }
    }
  }
  pdVar1 = (double *)(param_1 + 0x50);
  if (*param_1 == '\x01') {
    *(double *)(param_1 + 0x20) = *param_2 + *(double *)(param_1 + 0x20);
    *(double *)(param_1 + 0x28) = param_2[1] + *(double *)(param_1 + 0x28);
    *(double *)(param_1 + 0x30) = param_2[2] + *(double *)(param_1 + 0x30);
  }
  pdVar2 = (double *)(param_1 + 0x68);
  FUN_1405e83f1(pdVar1,pdVar2,param_2);
  pdVar3 = param_2 + 1;
  pdVar4 = (double *)(param_1 + 0x70);
  pdVar5 = (double *)(param_1 + 0x58);
  FUN_1405e83f1(pdVar5,pdVar4,pdVar3);
  dVar6 = *(double *)(param_1 + 0x50);
  if (*(double *)(param_1 + 8) < ABS(dVar6)) {
    dVar6 = (double)(-(ulonglong)(0.0 < dVar6) & 0x3ff0000000000000 |
                    ~-(ulonglong)(0.0 < dVar6) & -(ulonglong)(dVar6 < 0.0) & 0xbff0000000000000) *
            (ABS(dVar6) - *(double *)(param_1 + 8));
    *param_2 = *param_2 + dVar6;
    *pdVar1 = *pdVar1 - dVar6;
    *pdVar2 = *pdVar2 - dVar6;
  }
  dVar6 = *(double *)(param_1 + 0x58);
  if (*(double *)(param_1 + 0x10) < ABS(dVar6)) {
    dVar6 = (double)(-(ulonglong)(0.0 < dVar6) & 0x3ff0000000000000 |
                    ~-(ulonglong)(0.0 < dVar6) & -(ulonglong)(dVar6 < 0.0) & 0xbff0000000000000) *
            (ABS(dVar6) - *(double *)(param_1 + 0x10));
    *pdVar3 = *pdVar3 + dVar6;
    *pdVar5 = *pdVar5 - dVar6;
    *pdVar4 = *pdVar4 - dVar6;
  }
  return;
}



// FUNCTION 1405e83f1 FUN_1405e83f1 body=182 status=ok
// SIG undefined FUN_1405e83f1(void)

void FUN_1405e83f1(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *param_3;
  dVar1 = *param_1;
  if (dVar3 * dVar1 < 0.0) {
    dVar4 = -dVar1;
    bVar2 = dVar4 < dVar3;
    if (0.0 < dVar3) {
      bVar2 = dVar3 < dVar4;
    }
    if (!bVar2) {
      dVar3 = dVar4;
    }
    *param_1 = dVar1 + dVar3;
    dVar1 = *param_2;
    if (dVar3 * dVar1 < 0.0) {
      dVar4 = -dVar1;
      bVar2 = dVar4 < dVar3;
      if (0.0 < dVar3) {
        bVar2 = dVar3 < dVar4;
      }
      dVar5 = dVar3;
      if (!bVar2) {
        dVar5 = dVar4;
      }
      *param_2 = dVar1 + dVar5;
    }
    *param_3 = *param_3 - dVar3;
  }
  return;
}



// FUNCTION 1405e84a8 FUN_1405e84a8 body=1873 status=ok
// SIG undefined FUN_1405e84a8(void)

void FUN_1405e84a8(undefined8 param_1,longlong param_2,double *param_3)

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
  undefined1 auStack_168 [40];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8 [2];
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  dVar4 = (double)FUN_144719204(*param_3,0x4076800000000000);
  dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                  (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
  if ((dVar4 == 0.0) && (!NAN(dVar4))) {
    dVar4 = (double)FUN_144719204(param_3[1],0x4076800000000000);
    dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                    (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
    if ((dVar4 == 0.0) && (!NAN(dVar4))) {
      dVar4 = (double)FUN_144719204(param_3[2],0x4076800000000000);
      dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                      (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
      if ((dVar4 == 0.0) && (!NAN(dVar4))) goto LAB_1405e872a;
    }
  }
  FUN_1405e74e0(param_1,local_e8,param_2);
  if ((local_e8[0] != 0.0) || (((NAN(local_e8[0]) || (local_d8 != 0.0)) || (NAN(local_d8))))) {
    FUN_144a7484c(local_e8,&local_108);
    FUN_144a7484c((undefined8 *)(param_2 + 0x48),&local_128);
    dVar6 = local_108 * 0.0 + local_100 * -0.0;
    dVar7 = local_100 - local_f8 * 0.0;
    dVar4 = local_f8 * 0.0 - local_108;
    dVar6 = dVar6 + dVar6;
    dVar4 = dVar4 + dVar4;
    dVar7 = dVar7 + dVar7;
    dVar1 = (local_108 * dVar4 - dVar7 * local_100) + local_f0 * dVar6 + 1.0;
    dVar2 = (local_f8 * dVar7 - dVar6 * local_108) + local_f0 * dVar4 + 0.0;
    dVar6 = (local_100 * dVar6 - dVar4 * local_f8) + dVar7 * local_f0 + 0.0;
    dVar4 = *param_3;
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
      dVar7 = local_118 - local_128 * 0.0;
      dVar8 = local_128 * 0.0 - dStack_120;
      dVar10 = dStack_120 * 0.0 + local_118 * -0.0;
      dVar8 = dVar8 + dVar8;
      dVar7 = dVar7 + dVar7;
      dVar10 = dVar10 + dVar10;
      dVar9 = (local_128 * dVar7 - dVar10 * dStack_120) + dStack_110 * dVar8 + 0.0;
      dVar5 = (local_118 * dVar10 - dVar8 * local_128) + dStack_110 * dVar7 + 0.0;
      dVar7 = (dStack_120 * dVar8 - dVar7 * local_118) + dVar10 * dStack_110 + 1.0;
      dVar8 = dVar7 * dVar2 - dVar6 * dVar5;
      dVar7 = dVar9 * dVar6 - dVar1 * dVar7;
      dVar9 = dVar5 * dVar1 - dVar2 * dVar9;
      dVar5 = dVar8 * dVar8 + dVar9 * dVar9 + dVar7 * dVar7;
      if (((dVar5 != 1.0) || (dVar10 = dVar8, dVar13 = dVar7, dVar3 = dVar9, NAN(dVar5))) &&
         (dVar10 = DAT_14c8464f0, dVar13 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar5)) {
        dVar5 = 1.0 / SQRT(dVar5);
        dVar10 = dVar8 * dVar5;
        dVar13 = dVar7 * dVar5;
        dVar3 = dVar9 * dVar5;
      }
      dVar4 = dVar4 * 0.017453292519943295 * 0.5;
      dVar7 = sin(dVar4);
      dVar4 = cos(dVar4);
      dVar3 = dVar3 * dVar7;
      dVar13 = dVar13 * dVar7;
      dVar10 = dVar10 * dVar7;
      dVar9 = dVar3 * dStack_120;
      dVar5 = dVar3 * local_128;
      dVar11 = local_128 * dVar13;
      dVar12 = dStack_120 * dVar13;
      dVar7 = local_128 * dVar10;
      dVar8 = local_118 * dVar10;
      local_128 = dStack_120 * dVar10 * -1.0 +
                  local_118 * dVar13 + dVar3 * dStack_110 * 1.0 + local_128 * dVar4;
      dStack_120 = dVar7 * 1.0 + dStack_110 * dVar13 + dVar3 * local_118 * -1.0 + dStack_120 * dVar4
      ;
      local_118 = dStack_110 * dVar10 * 1.0 + ((dVar9 * 1.0 + dVar4 * local_118) - dVar11);
      dStack_110 = dVar8 * -1.0 + ((dVar5 * -1.0 + dVar4 * dStack_110) - dVar12);
    }
    dVar4 = param_3[1];
    if ((dVar4 != 0.0) || (NAN(dVar4))) {
      dVar4 = dVar4 * 0.017453292519943295 * 0.5;
      dVar7 = sin(dVar4);
      dVar4 = cos(dVar4);
      dVar6 = dVar6 * dVar7;
      dVar2 = dVar2 * dVar7;
      dVar1 = dVar1 * dVar7;
      dVar9 = dVar6 * dStack_120;
      dVar5 = dVar6 * local_128;
      dVar10 = local_128 * dVar2;
      dVar13 = dStack_120 * dVar2;
      dVar7 = local_128 * dVar1;
      dVar8 = local_118 * dVar1;
      local_128 = dStack_120 * dVar1 * -1.0 +
                  local_118 * dVar2 + dVar6 * dStack_110 * 1.0 + local_128 * dVar4;
      dStack_120 = dVar7 * 1.0 + dStack_110 * dVar2 + dVar6 * local_118 * -1.0 + dStack_120 * dVar4;
      local_118 = dStack_110 * dVar1 * 1.0 + ((dVar9 * 1.0 + dVar4 * local_118) - dVar10);
      dStack_110 = dVar8 * -1.0 + ((dVar5 * -1.0 + dVar4 * dStack_110) - dVar13);
    }
    FUN_1448052ee(&local_128,&local_140);
    *(undefined8 *)(param_2 + 0x58) = local_130;
    *(undefined8 *)(param_2 + 0x48) = local_140;
    *(undefined8 *)(param_2 + 0x50) = uStack_138;
  }
  else {
    dVar4 = (double)FUN_144719204(*(double *)(param_2 + 0x48) + *param_3,0x4076800000000000);
    dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                    (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
    *(ulonglong *)(param_2 + 0x48) =
         ~-(ulonglong)(180.0 < dVar4) & (ulonglong)dVar4 |
         (ulonglong)(dVar4 + -360.0) & -(ulonglong)(180.0 < dVar4);
    dVar4 = (double)FUN_144719204(*(double *)(param_2 + 0x50) + param_3[1],0x4076800000000000);
    dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                    (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
    *(ulonglong *)(param_2 + 0x50) =
         ~-(ulonglong)(180.0 < dVar4) & (ulonglong)dVar4 |
         (ulonglong)(dVar4 + -360.0) & -(ulonglong)(180.0 < dVar4);
    dVar4 = (double)FUN_144719204(*(double *)(param_2 + 0x58) + param_3[2],0x4076800000000000);
    dVar4 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar4 |
                    (ulonglong)(dVar4 + 360.0) & -(ulonglong)(dVar4 < 0.0));
    *(ulonglong *)(param_2 + 0x58) =
         ~-(ulonglong)(180.0 < dVar4) & (ulonglong)dVar4 |
         (ulonglong)(dVar4 + -360.0) & -(ulonglong)(180.0 < dVar4);
  }
LAB_1405e872a:
  if ((local_d0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e8bfa FUN_1405e8bfa body=87 status=ok
// SIG undefined FUN_1405e8bfa(void)

void FUN_1405e8bfa(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  float fVar3;
  
  fVar3 = (float)(**(code **)(*param_1 + 0x450))();
  if (0.0 < fVar3) {
    bVar1 = *(byte *)(param_1 + 7);
    if ((int)(uint)bVar1 < *(int *)(param_1[6] + 0xbf0)) {
      lVar2 = *(longlong *)
               (*(longlong *)(param_1[6] + 0xbe8) + 0x40 +
               (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (lVar2 != 0) {
        FUN_14093f1ce(lVar2,fVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405e8c5c FUN_1405e8c5c body=1886 status=ok
// SIG undefined FUN_1405e8c5c(void)

void FUN_1405e8c5c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  PSRWLOCK pRVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  ushort *puVar10;
  longlong *plVar11;
  bool bVar12;
  byte bVar13;
  undefined1 uVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_b8 [40];
  longlong local_90;
  ulonglong local_88;
  undefined8 ****local_80;
  undefined8 uStack_78;
  undefined8 ****local_70;
  int local_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar19 = *(longlong *)(param_1 + 0x288);
  if (lVar19 == 0) goto LAB_1405e8ec4;
  FUN_1405e93bc(param_1,&local_70);
  ppppuVar8 = local_70;
  pRVar3 = (PSRWLOCK)(local_70 + 0x3e);
  AcquireSRWLockShared(pRVar3);
  local_90 = lVar19;
  if (*(int *)(lVar19 + 0x250) == *(int *)(ppppuVar8 + 0x3d)) {
    bVar12 = false;
  }
  else {
    *(int *)(lVar19 + 0x250) = *(int *)(ppppuVar8 + 0x3d);
    if (*(int *)(lVar19 + 0x248) == *(int *)(ppppuVar8 + 0x16) && *(int *)(lVar19 + 0x248) != 0) {
      bVar12 = false;
    }
    else {
      *(int *)(lVar19 + 0x248) = *(int *)(ppppuVar8 + 0x16);
      FUN_14572901c(lVar19 + 0x238,ppppuVar8 + 0x14);
      bVar12 = true;
    }
  }
  ReleaseSRWLockShared(pRVar3);
  plVar11 = (longlong *)CONCAT44(uStack_64,local_68);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar11 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x288);
  if (lVar7 == 0) {
    bVar21 = false;
    bVar22 = false;
    if (bVar12) goto LAB_1405e8fb1;
  }
  else {
    FUN_1448d5e3c(&local_70,param_1 + 0x208);
    ppppuVar8 = (undefined8 ****)local_70[0x40];
    ppppuVar9 = (undefined8 ****)local_70[0x41];
    if (ppppuVar9 != (undefined8 ****)0x0) {
      LOCK();
      *(int *)(ppppuVar9 + 1) = *(int *)(ppppuVar9 + 1) + 1;
      UNLOCK();
    }
    plVar11 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    AcquireSRWLockShared((PSRWLOCK)(ppppuVar8 + 0x16));
    if (*(int *)(ppppuVar8 + 0xc) == -1) {
      bVar21 = *(int *)(ppppuVar8 + 0xd) != 0;
    }
    else {
      bVar21 = true;
    }
    iVar15 = *(int *)(param_1 + 0x36c);
    if ((bool)*(char *)(param_1 + 0x368) == bVar21) {
      bVar13 = 0;
      bVar22 = iVar15 == 0;
      iVar15 = 0;
      if (bVar22) goto LAB_1405e8f10;
    }
    else {
LAB_1405e8f10:
      *(bool *)(param_1 + 0x368) = bVar21;
      *(int *)(param_1 + 0x36c) = iVar15 + 1;
      bVar13 = 1;
    }
    ReleaseSRWLockShared((PSRWLOCK)(ppppuVar8 + 0x16));
    if (ppppuVar9 != (undefined8 ****)0x0) {
      LOCK();
      ppppuVar8 = ppppuVar9 + 1;
      *(int *)ppppuVar8 = *(int *)ppppuVar8 + -1;
      UNLOCK();
      if (*(int *)ppppuVar8 == 0) {
        (*(code *)**ppppuVar9)(ppppuVar9);
        LOCK();
        piVar2 = (int *)((longlong)ppppuVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (*(code *)(*ppppuVar9)[2])(ppppuVar9);
        }
      }
    }
    FUN_1405e93bc(param_1,&local_70);
    ppppuVar8 = local_70;
    pRVar3 = (PSRWLOCK)(local_70 + 0x3e);
    AcquireSRWLockShared(pRVar3);
    iVar15 = *(int *)(param_1 + 0x344);
    iVar5 = *(int *)((longlong)ppppuVar8 + 0x34);
    if (iVar15 != iVar5) {
      *(undefined1 *)(param_1 + 0x340) = *(undefined1 *)(ppppuVar8 + 6);
      *(undefined4 *)(param_1 + 0x344) = *(undefined4 *)((longlong)ppppuVar8 + 0x34);
    }
    ReleaseSRWLockShared(pRVar3);
    plVar11 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (iVar15 != iVar5) {
      if ((ulonglong)*(byte *)(param_1 + 0x340) < 3) {
        *(undefined8 *)(param_1 + 0x2e8) =
             *(undefined8 *)(&PTR_DAT_14b9d8d90)[*(byte *)(param_1 + 0x340)];
      }
      FUN_1412e481c(param_1);
      FUN_14572907a(param_1);
      bVar13 = 1;
    }
    lVar19 = local_90;
    FUN_1405e93bc(param_1,&local_70);
    ppppuVar8 = local_70;
    pRVar3 = (PSRWLOCK)(local_70 + 0x3e);
    AcquireSRWLockShared(pRVar3);
    ReleaseSRWLockShared(pRVar3);
    plVar11 = (longlong *)CONCAT44(uStack_64,local_68);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    lVar17 = (longlong)*(int *)(ppppuVar8 + 8);
    if (lVar17 == 0) {
      bVar22 = (bool)(bVar13 | *(int *)(param_1 + 0x370) != 0);
      *(undefined4 *)(param_1 + 0x370) = 0;
LAB_1405e8e60:
      if (*(char *)(param_1 + 0x340) != '\x02') {
        FUN_1400b22c2(&local_70,"vending_buy_back");
        iVar15 = FUN_1405e9454(lVar7 + 0x188,&local_70);
        if (iVar15 != -1) {
          *(int *)(lVar7 + 0x198) = *(int *)(lVar7 + 0x198) + 1;
        }
        if ((undefined8 *****)local_70 != (undefined8 *****)0x0) {
          FUN_1400020a8();
        }
      }
    }
    else {
      lVar19 = 0;
      iVar15 = 0;
      do {
        iVar15 = iVar15 + (uint)*(byte *)((longlong)ppppuVar8[7] + lVar19 + 0x440);
        lVar19 = lVar19 + 0x448;
      } while (lVar17 * 0x448 - lVar19 != 0);
      bVar22 = (bool)(bVar13 | *(int *)(param_1 + 0x370) != iVar15);
      *(int *)(param_1 + 0x370) = iVar15;
      lVar19 = local_90;
      if (iVar15 == 0) goto LAB_1405e8e60;
      FUN_1400b22c2(&local_70,"vending_buy_back");
      local_80 = &local_70;
      iVar15 = FUN_140c8411c(lVar7 + 0x188);
      if (0 < iVar15) {
        *(int *)(lVar7 + 0x198) = *(int *)(lVar7 + 0x198) + 1;
      }
      lVar19 = local_90;
      if ((undefined8 *****)local_70 != (undefined8 *****)0x0) {
        FUN_1400020a8();
        lVar19 = local_90;
      }
    }
    if (bVar12) {
LAB_1405e8fb1:
      bVar21 = bVar22;
      iVar15 = *(int *)(param_1 + 0x354);
      FUN_14071621b(*(undefined8 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x350));
      *(undefined4 *)(param_1 + 0x350) = 0;
      if ((iVar15 < 0) && (*(int *)(param_1 + 0x354) != 0)) {
        FUN_14574681c(param_1 + 0x348,0);
      }
      FUN_1412e481c(param_1);
      FUN_14572907a(param_1);
    }
    else {
      if (!bVar22) {
        bVar21 = false;
        goto LAB_1405e8ebb;
      }
      bVar21 = true;
    }
    uVar16 = FUN_145728ff8(param_1);
    lVar7 = local_90;
    uVar6 = *(uint *)(local_90 + 200);
    if ((ulonglong)uVar6 != 0) {
      lVar19 = local_90 + 0x188;
      local_88 = (ulonglong)uVar16;
      uVar20 = 0;
      do {
        lVar17 = *(longlong *)(lVar7 + 0xc0) + uVar20 * 0xb0;
        *(byte *)(*(longlong *)(lVar7 + 0xc0) + 8 + uVar20 * 0xb0) =
             uVar20 != local_88 & *(byte *)(param_1 + 0x368);
        FUN_1400021e4(lVar17,&local_80);
        local_68 = (int)uStack_78;
        uVar16 = (int)uStack_78 - 1;
        if ((int)uStack_78 == 0) {
          uVar16 = 0;
        }
        if (0 < (int)uVar16) {
          uVar18 = 0;
          do {
            uVar4 = *(ushort *)((longlong)local_80 + uVar18 * 2);
            *(ushort *)((longlong)local_80 + uVar18 * 2) =
                 (ushort)(uVar4 - 0x41 < 0x1a) * 0x20 + uVar4;
            uVar18 = uVar18 + 1;
          } while (uVar16 != uVar18);
        }
        local_70 = local_80;
        uStack_64 = uStack_78._4_4_;
        local_80 = (undefined8 *****)0x0;
        uStack_78 = 0;
        uVar14 = FUN_144a23846(lVar19,&local_70);
        *(undefined1 *)(lVar17 + 0x80) = uVar14;
        if ((undefined8 *****)local_70 != (undefined8 *****)0x0) {
          FUN_1400020a8();
        }
        if ((undefined8 *****)local_80 != (undefined8 *****)0x0) {
          FUN_1400020a8();
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar6);
    }
    uVar16 = FUN_14572900a(param_1);
    uVar6 = *(uint *)(lVar7 + 0x1b0);
    lVar19 = lVar7;
    if ((ulonglong)uVar6 != 0) {
      local_88 = (ulonglong)uVar16;
      uVar20 = 0;
      do {
        lVar19 = *(longlong *)(local_90 + 0x1a8) + uVar20 * 0xb0;
        *(byte *)(*(longlong *)(local_90 + 0x1a8) + 8 + uVar20 * 0xb0) =
             uVar20 != local_88 & *(byte *)(param_1 + 0x368);
        FUN_1400021e4(lVar19,&local_80);
        local_68 = (int)uStack_78;
        uVar16 = (int)uStack_78 - 1;
        if ((int)uStack_78 == 0) {
          uVar16 = 0;
        }
        if (0 < (int)uVar16) {
          uVar18 = 0;
          do {
            uVar4 = *(ushort *)((longlong)local_80 + uVar18 * 2);
            *(ushort *)((longlong)local_80 + uVar18 * 2) =
                 (ushort)(uVar4 - 0x41 < 0x1a) * 0x20 + uVar4;
            uVar18 = uVar18 + 1;
          } while (uVar16 != uVar18);
        }
        local_70 = local_80;
        uStack_64 = uStack_78._4_4_;
        local_80 = (undefined8 *****)0x0;
        uStack_78 = 0;
        uVar14 = FUN_144a23846(lVar7 + 0x188,&local_70);
        *(undefined1 *)(lVar19 + 0x80) = uVar14;
        if ((undefined8 *****)local_70 != (undefined8 *****)0x0) {
          FUN_1400020a8();
        }
        if ((undefined8 *****)local_80 != (undefined8 *****)0x0) {
          FUN_1400020a8();
        }
        uVar20 = uVar20 + 1;
        lVar19 = local_90;
      } while (uVar20 != uVar6);
    }
  }
LAB_1405e8ebb:
  if (((bool)(bVar12 | bVar21)) && (puVar10 = *(ushort **)(lVar19 + 0x80), puVar10 != (ushort *)0x0)
     ) {
    *puVar10 = *puVar10 | (ushort)(1L << (*(byte *)(lVar19 + 0x78) & 0x3f));
  }
LAB_1405e8ec4:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e93bc FUN_1405e93bc body=150 status=ok
// SIG undefined FUN_1405e93bc(void)

undefined8 * FUN_1405e93bc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
  *param_2 = *(undefined8 *)(local_28 + 0x210);
  lVar3 = *(longlong *)(local_28 + 0x218);
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405e9454 FUN_1405e9454 body=114 status=ok
// SIG undefined FUN_1405e9454(void)

int FUN_1405e9454(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_144a075de();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1447a1bd6(param_1,iVar2);
    }
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x10;
    *(undefined8 *)(lVar1 + lVar3) = 0;
    *(undefined8 *)(lVar1 + lVar3) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(lVar1 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(lVar1 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return iVar2;
}



// FUNCTION 1405e94c6 FUN_1405e94c6 body=378 status=ok
// SIG undefined FUN_1405e94c6(void)

longlong FUN_1405e94c6(undefined8 param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  lVar3 = *param_2;
  lVar5 = *(longlong *)(param_3 + 8);
  iVar1 = *(int *)(lVar3 + 0xb0);
  lVar2 = *(longlong *)(lVar3 + 0xa8);
  if ((longlong)iVar1 == 0) {
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)(lVar2 + 4);
    lVar7 = *(longlong *)(lVar2 + 0xc);
  }
  lVar4 = 0;
  lVar11 = lVar3 + 200;
  if (*(int *)(lVar3 + 0xd0) < 1) {
    lVar11 = lVar4;
  }
  *param_4 = param_3;
  param_4[1] = lVar5;
  param_4[2] = lVar2;
  param_4[3] = (longlong)iVar1;
  param_4[4] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[8] = lVar8;
  param_4[9] = lVar7;
  param_4[0xb] = lVar11;
  uVar6 = 1;
  if (DAT_14ca81480 == 0) {
    uVar6 = (ulonglong)(uint)~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  }
  *(int *)(param_4 + 4) = (int)uVar6;
  uVar6 = uVar6 * -0x651e95c4d06fbf81;
  uVar9 = lVar8 * -0x4b6d499041670d8d + lVar7;
  uVar10 = (lVar7 + 0x9ae16a3b2f90404fU << 0x2e | lVar7 + 0x9ae16a3b2f90404fU >> 0x12) +
           lVar8 * -0x4b6d499041670d8d + uVar6;
  uVar6 = ((uVar6 << 0x22 | uVar6 >> 0x1e) +
           (uVar9 * 0x200000 | uVar9 >> 0x2b) + lVar7 * -0x651e95c4d06fbfb1 ^ uVar10) *
          -0x651e95c4d06fbf81;
  uVar6 = (uVar6 >> 0x2f ^ uVar10 ^ uVar6) * -0x651e95c4d06fbf81;
  param_4[10] = (uVar6 >> 0x2f ^ uVar6) * -0x651e95c4d06fbf81;
  lVar3 = FUN_1405e9640(param_1,param_4);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x38) == 0) {
      lVar5 = *(longlong *)(lVar3 + 0x20);
    }
    else {
      lVar5 = FUN_1406f7aac(lVar3);
    }
    if (lVar5 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_14001cc68(0x40,0x10);
      FUN_140676bd6(lVar4,param_2,param_3,lVar3);
    }
  }
  return lVar4;
}



// FUNCTION 1405e9640 FUN_1405e9640 body=147 status=ok
// SIG undefined FUN_1405e9640(void)

longlong FUN_1405e9640(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xb8));
  iVar1 = FUN_140191434((longlong *)(param_1 + 0x60),*(undefined4 *)(param_2 + 0x50),param_2);
  if ((iVar1 == -1) ||
     (lVar2 = (longlong)iVar1 * 0x70 + *(longlong *)(param_1 + 0x60),
     plVar3 = (longlong *)(lVar2 + 0x60), plVar3 == (longlong *)0x0 || lVar2 == 0)) {
    lVar2 = 0;
  }
  else {
    if (((byte)(DAT_14c760d84 != 0 & DAT_14ca84f5a & (DAT_14ca76a68 ^ 1)) != 0) ||
       (DAT_14ca76a80 == '\0')) {
      LOCK();
      *(int *)(*plVar3 + 8) = *(int *)(*plVar3 + 8) + 1;
      UNLOCK();
    }
    lVar2 = *plVar3;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xb8));
  return lVar2;
}



// FUNCTION 1405e96d4 FUN_1405e96d4 body=230 status=ok
// SIG undefined FUN_1405e96d4(void)

void FUN_1405e96d4(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [12];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined8 *)(param_1 + 0x1e8);
  puVar5 = param_3;
  puVar6 = local_98;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  plVar3 = *(longlong **)(param_2 + 0x20);
  local_38 = uVar1;
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_2 + 0x20) = 0;
    (**(code **)(*plVar3 + 0x10))();
  }
  FUN_1405e97d3((undefined8 *)(param_2 + 0x20),uVar2,local_98);
  *(uint *)(param_2 + 0x38) = (uint)(*(longlong *)(param_2 + 0x20) == 0) * 2;
  if (*(char *)(param_1 + 0x169) != '\0') {
    if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0xc0));
  FUN_14738782a(param_1,param_3,param_2);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_b8);
}



// FUNCTION 1405e97d3 FUN_1405e97d3 body=180 status=ok
// SIG undefined FUN_1405e97d3(void)

void FUN_1405e97d3(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = *(longlong **)(param_3 + 0x58);
  if (plVar2 != (longlong *)0x0) {
    if ((longlong)(int)plVar2[1] != 0) {
      lVar3 = *plVar2;
      lVar4 = 0;
      do {
        iVar1 = *(int *)(lVar3 + lVar4);
        if (iVar1 == 0x10de) {
          if (*(char *)(lVar3 + 10 + lVar4) == '\x04') {
            FUN_1425006f0(*(undefined8 *)(param_2 + 8),*(undefined2 *)(lVar3 + 6 + lVar4),0);
            FUN_1431861ab(param_1,param_2,param_3);
            FUN_1425006f0(*(undefined8 *)(param_2 + 8),0xffffffff,0);
            return;
          }
        }
        else if ((iVar1 == 0x1002) || (iVar1 == 0x8086)) goto LAB_1405e983b;
        lVar4 = lVar4 + 0xc;
      } while ((longlong)(int)plVar2[1] * 0xc != lVar4);
    }
    return;
  }
LAB_1405e983b:
  FUN_1431861ab(param_1,param_2,param_3);
  return;
}



// FUNCTION 1405e98ca FUN_1405e98ca body=35 status=ok
// SIG undefined FUN_1405e98ca(void)

void FUN_1405e98ca(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lStack_40 = param_3 + 0x48;
  if (param_3 == 0) {
    uStack_38 = 0;
    lStack_40 = 0;
  }
  else {
    uStack_38 = *(undefined8 *)(param_3 + 0x58);
  }
  local_48 = param_3;
  FUN_1447f3744(&uStack_30,param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x2c) = uStack_30;
  FUN_14493819a(param_1,param_2,&local_48,0);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e98ed FUN_1405e98ed body=108 status=ok
// SIG undefined FUN_1405e98ed(void)

void FUN_1405e98ed(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong unaff_RDI;
  longlong lStack0000000000000028;
  undefined8 uStack0000000000000030;
  undefined8 in_stack_00000038;
  ulonglong in_stack_00000040;
  
  lStack0000000000000028 = param_3 + 0x48;
  if (param_3 == 0) {
    uStack0000000000000030 = 0;
    lStack0000000000000028 = 0;
  }
  else {
    uStack0000000000000030 = *(undefined8 *)(param_3 + 0x58);
  }
  FUN_1447f3744(&stack0x00000038,unaff_RDI + 0x58);
  *(undefined8 *)(unaff_RDI + 0x2c) = in_stack_00000038;
  FUN_14493819a();
  if ((in_stack_00000040 ^ (ulonglong)&stack0x00000000) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405e995a FUN_1405e995a body=1938 status=ok
// SIG undefined FUN_1405e995a(void)

void FUN_1405e995a(longlong *param_1)

{
  longlong **pplVar1;
  PSRWLOCK pRVar2;
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
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == 0)) goto LAB_1405e999d;
  pRVar2 = (PSRWLOCK)(param_1 + 0x2e);
  AcquireSRWLockExclusive(pRVar2);
  lVar17 = param_1[0x2c];
  lVar22 = param_1[0x2d];
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  local_e8 = pRVar2;
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
  local_f0 = (PSRWLOCK)(param_1 + 0x29);
  AcquireSRWLockShared(local_f0);
  if (lVar9 == 0) {
LAB_1405e9a56:
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
          if (uVar21 == uVar20) goto LAB_1405e9bb5;
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
                goto LAB_1405e9b7e;
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
LAB_1405e9b7e:
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
        ((int)param_1[0x16] + *(int *)(lVar9 + 0x30)) -
        (*(int *)((longlong)param_1 + 0xdc) + *(int *)(lVar9 + 0x5c))) goto LAB_1405e9a56;
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
      uVar12 = *(int *)(lVar9 + 0x30) - *(int *)(lVar9 + 0x5c);
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
      pplVar1 = (longlong **)(lVar9 + 0x28);
      lVar17 = lVar9 + 0x38;
      local_b8 = 0x100000000;
      local_a8._0_4_ = 0xffffffff;
      local_a8._4_4_ = 0;
      local_a0 = 0;
      local_b0 = (undefined4 *)lVar17;
      if (*(int *)(lVar9 + 0x50) != 0) {
        FUN_1449c0562(&local_b8);
        iVar19 = *(int *)(lVar9 + 0x50);
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
                    if (iVar15 == -1) goto LAB_1405e9f43;
                    lVar22 = param_1[0xb];
                    iVar8 = *(int *)(lVar22 + 0x10 + (longlong)iVar15 * 0x18);
                  } while (*(ulonglong *)(lVar22 + (longlong)iVar15 * 0x18) != uVar20);
                } while( true );
              }
            }
          }
LAB_1405e9f43:
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
LAB_1405e9bb5:
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
LAB_1405e999d:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405ea0f6 FUN_1405ea0f6 body=154 status=ok
// SIG undefined FUN_1405ea0f6(void)

longlong FUN_1405ea0f6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_1405ea160;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_1405ea160:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_1405ea190(param_1,param_2);
  return param_1;
}



// FUNCTION 1405ea190 FUN_1405ea190 body=530 status=ok
// SIG undefined FUN_1405ea190(void)

longlong * FUN_1405ea190(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1403c46b6(param_1,(ulonglong)uVar1);
    lVar6 = param_1[1];
    *(uint *)(param_1 + 1) = (int)lVar6 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - (int)lVar6) < uVar1) {
      FUN_14021b4e8(param_1);
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar7 = (int)param_2[5] + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar7) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar9 = 0x80;
      if (0x80 < (int)uVar7) {
        uVar9 = uVar7;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar9;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = (int)param_2[5];
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      plVar8 = (longlong *)param_2[4];
      if ((longlong *)param_2[4] == (longlong *)0x0) {
        plVar8 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((longlong *)param_1[4] != (longlong *)0x0) {
        _Dst = (longlong *)param_1[4];
      }
      memcpy(_Dst,plVar8,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar10 = (undefined8 *)*param_2;
      puVar12 = (undefined8 *)(*param_1 + 0x20);
      uVar11 = 0;
      do {
        plVar8 = (longlong *)param_2[4];
        if ((longlong *)param_2[4] == (longlong *)0x0) {
          plVar8 = param_2 + 2;
        }
        if ((*(uint *)((longlong)plVar8 + (uVar11 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar11 & 0x1f) &
            1) == 0) {
          *(undefined4 *)(puVar12 + -4) = *(undefined4 *)puVar10;
          *(undefined4 *)((longlong)puVar12 + -0x1c) = *(undefined4 *)((longlong)puVar10 + 4);
        }
        else {
          puVar12[-4] = *puVar10;
          puVar12[-3] = puVar10[1];
          uVar3 = *(undefined4 *)((longlong)puVar10 + 0x14);
          uVar4 = *(undefined4 *)(puVar10 + 3);
          uVar5 = *(undefined4 *)((longlong)puVar10 + 0x1c);
          *(undefined4 *)(puVar12 + -2) = *(undefined4 *)(puVar10 + 2);
          *(undefined4 *)((longlong)puVar12 + -0xc) = uVar3;
          *(undefined4 *)(puVar12 + -1) = uVar4;
          *(undefined4 *)((longlong)puVar12 + -4) = uVar5;
          *puVar12 = 0;
          iVar2 = *(int *)(puVar10 + 5);
          _Src = (void *)puVar10[4];
          *(int *)(puVar12 + 1) = iVar2;
          if ((longlong)iVar2 == 0) {
            *(undefined4 *)((longlong)puVar12 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar12,iVar2,0);
            memcpy((void *)*puVar12,_Src,(longlong)iVar2 * 2);
          }
          *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(puVar10 + 6);
          lVar6 = puVar10[7];
          puVar12[3] = lVar6;
          if ((lVar6 != 0 & DAT_14c950c29) == 1) {
            FUN_14689c22e();
          }
          puVar12[4] = puVar10[8];
        }
        uVar11 = uVar11 + 1;
        puVar10 = puVar10 + 9;
        puVar12 = puVar12 + 9;
      } while (uVar1 != uVar11);
    }
  }
  return param_1;
}



// FUNCTION 1405ea3a2 FUN_1405ea3a2 body=3081 status=ok
// SIG undefined FUN_1405ea3a2(void)

void FUN_1405ea3a2(undefined8 *param_1,longlong *param_2,undefined1 param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  bool bVar18;
  longlong *plVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined1 local_d1;
  uint *local_d0;
  undefined8 *local_c8;
  uint *local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint *local_88;
  undefined8 uStack_80;
  longlong local_70;
  longlong lStack_68;
  ulonglong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_e0 = param_2;
  local_d1 = param_3;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    FUN_1405eb620(param_2);
    FUN_1405eb766(local_e0);
  }
  plVar17 = local_e0;
  local_c8 = param_1;
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar10 = (uint *)*param_1;
    local_d0 = puVar10 + (longlong)*(int *)(param_1 + 1) * 4;
    do {
      lVar23 = *(longlong *)(puVar10 + 2);
      if ((lVar23 != 0) && ((char)*puVar10 == '\x01')) {
        iVar15 = *(int *)(lVar23 + 0x58);
        if (iVar15 == 0) {
          uVar29 = 1;
          uVar28 = 0;
          iVar9 = 0;
          iVar20 = 0;
        }
        else {
          puVar11 = *(uint **)(lVar23 + 0x50);
          if (*(uint **)(lVar23 + 0x50) == (uint *)0x0) {
            puVar11 = (uint *)(lVar23 + 0x40);
          }
          uVar12 = *puVar11;
          if (uVar12 == 0) {
            iVar9 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar9 = iVar15 + -1;
            }
            uVar28 = 0;
            uVar29 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar29 = uVar28;
            }
            iVar20 = 0;
            do {
              if (uVar29 == uVar28) goto LAB_1405ea5a8;
              iVar20 = iVar20 + 0x20;
              uVar12 = puVar11[uVar28 + 1];
              uVar28 = uVar28 + 1;
            } while (uVar12 == 0);
          }
          else {
            uVar28 = 0;
            iVar20 = 0;
          }
          uVar29 = (ulonglong)(-uVar12 & uVar12);
          uVar30 = uVar29 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar9 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar9) {
            iVar9 = iVar15;
          }
        }
        if (iVar9 != iVar15) {
          uVar12 = 0xffffffff;
          do {
            local_b8 = (longlong *)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar9 * 0x48);
            uStack_b0 = *(longlong *)(lVar23 + 0x30) + (longlong)iVar9 * 0x48 + 8;
            FUN_1405eafac(plVar17,&local_70,&local_b8,0);
            uVar12 = ~(uint)uVar29 & uVar12;
            puVar11 = *(uint **)(lVar23 + 0x50);
            if (*(uint **)(lVar23 + 0x50) == (uint *)0x0) {
              puVar11 = (uint *)(lVar23 + 0x40);
            }
            iVar2 = *(int *)(lVar23 + 0x58);
            iVar9 = (int)uVar28;
            lVar24 = (longlong)iVar9;
            uVar21 = puVar11[lVar24] & uVar12;
            if (uVar21 == 0) {
              iVar13 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar13 = iVar2 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar20 = iVar20 + 0x20;
              iVar14 = iVar13;
              if (iVar13 < iVar9) {
                iVar14 = iVar9;
              }
              if (iVar9 < iVar13) {
                lVar22 = 0;
                do {
                  uVar21 = puVar11[lVar24 + lVar22 + 1];
                  if (uVar21 != 0) {
                    uVar28 = (ulonglong)(iVar9 + (int)lVar22 + 1);
                    uVar12 = 0xffffffff;
                    goto LAB_1405ea568;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar22 = lVar22 + 1;
                } while (iVar14 - lVar24 != lVar22);
                uVar12 = 0xffffffff;
                lVar24 = (longlong)iVar14;
              }
              uVar28 = lVar24 + 1U & 0xffffffff;
              iVar9 = iVar2;
            }
            else {
LAB_1405ea568:
              uVar29 = (ulonglong)(-uVar21 & uVar21);
              uVar30 = uVar29 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar30 != 0) {
                for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              iVar9 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar9) {
                iVar9 = iVar2;
              }
            }
            plVar17 = local_e0;
          } while (iVar9 != iVar15);
        }
      }
LAB_1405ea5a8:
      puVar10 = puVar10 + 4;
    } while (puVar10 != local_d0);
  }
  if ((longlong)*(int *)(local_c8 + 0x17) != 0) {
    puVar10 = (uint *)local_c8[0x16];
    local_c0 = puVar10 + (longlong)*(int *)(local_c8 + 0x17) * 2;
    do {
      lVar23 = *(longlong *)puVar10;
      local_d0 = puVar10;
      if (lVar23 != 0) {
        iVar15 = *(int *)(lVar23 + 0x58);
        if (iVar15 == 0) {
          uVar28 = 1;
          uVar29 = 0;
          iVar9 = 0;
          iVar20 = 0;
        }
        else {
          puVar10 = *(uint **)(lVar23 + 0x50);
          if (*(uint **)(lVar23 + 0x50) == (uint *)0x0) {
            puVar10 = (uint *)(lVar23 + 0x40);
          }
          uVar12 = *puVar10;
          if (uVar12 == 0) {
            iVar9 = iVar15 + 0x1e;
            if (-1 < iVar15 + -1) {
              iVar9 = iVar15 + -1;
            }
            uVar29 = 0;
            uVar28 = (ulonglong)(uint)(iVar9 >> 5);
            if (iVar9 >> 5 < 1) {
              uVar28 = uVar29;
            }
            iVar20 = 0;
            do {
              if (uVar28 == uVar29) goto LAB_1405ea776;
              iVar20 = iVar20 + 0x20;
              uVar12 = puVar10[uVar29 + 1];
              uVar29 = uVar29 + 1;
            } while (uVar12 == 0);
          }
          else {
            uVar29 = 0;
            iVar20 = 0;
          }
          uVar28 = (ulonglong)(-uVar12 & uVar12);
          uVar30 = uVar28 * 2 + 1;
          lVar24 = 0x3f;
          if (uVar30 != 0) {
            for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          iVar9 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
          if (iVar15 <= iVar9) {
            iVar9 = iVar15;
          }
        }
        if (iVar9 != iVar15) {
          uVar12 = 0xffffffff;
          do {
            local_b8 = (longlong *)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar9 * 0x48);
            uStack_b0 = *(longlong *)(lVar23 + 0x30) + (longlong)iVar9 * 0x48 + 8;
            FUN_1405eafac(plVar17,&local_70,&local_b8,0);
            uVar12 = ~(uint)uVar28 & uVar12;
            puVar10 = *(uint **)(lVar23 + 0x50);
            if (*(uint **)(lVar23 + 0x50) == (uint *)0x0) {
              puVar10 = (uint *)(lVar23 + 0x40);
            }
            iVar2 = *(int *)(lVar23 + 0x58);
            iVar9 = (int)uVar29;
            lVar24 = (longlong)iVar9;
            uVar21 = puVar10[lVar24] & uVar12;
            if (uVar21 == 0) {
              iVar13 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar13 = iVar2 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar20 = iVar20 + 0x20;
              iVar14 = iVar13;
              if (iVar13 < iVar9) {
                iVar14 = iVar9;
              }
              if (iVar9 < iVar13) {
                lVar22 = 0;
                do {
                  uVar21 = puVar10[lVar24 + lVar22 + 1];
                  if (uVar21 != 0) {
                    uVar29 = (ulonglong)(iVar9 + (int)lVar22 + 1);
                    uVar12 = 0xffffffff;
                    goto LAB_1405ea736;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar22 = lVar22 + 1;
                } while (iVar14 - lVar24 != lVar22);
                uVar12 = 0xffffffff;
                lVar24 = (longlong)iVar14;
              }
              uVar29 = lVar24 + 1U & 0xffffffff;
              iVar9 = iVar2;
            }
            else {
LAB_1405ea736:
              uVar28 = (ulonglong)(-uVar21 & uVar21);
              uVar30 = uVar28 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar30 != 0) {
                for (; uVar30 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              iVar9 = (iVar20 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar9) {
                iVar9 = iVar2;
              }
            }
            plVar17 = local_e0;
          } while (iVar9 != iVar15);
        }
      }
LAB_1405ea776:
      puVar10 = local_d0 + 2;
    } while (puVar10 != local_c0);
  }
  puVar16 = local_c8;
  local_88 = (uint *)0x0;
  uStack_80 = 0;
  iVar15 = *(int *)(local_c8 + 0x25);
  if ((longlong)iVar15 != 0) {
    lVar23 = local_c8[0x24];
    lVar24 = 0;
    do {
      plVar3 = *(longlong **)(lVar23 + 8 + lVar24);
      if ((((plVar3 != (longlong *)0x0) && (iVar9 = *(int *)(lVar23 + 4 + lVar24), iVar9 != 0)) &&
          (uVar12 = *(uint *)(lVar23 + lVar24), -1 < (int)uVar12)) &&
         ((((int)uVar12 < DAT_14c9647dc &&
           (lVar22 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8), lVar22 != 0))
          && ((*(int *)(lVar22 + 0x10) == iVar9 && ((*(uint *)(lVar22 + 8) & 0x10200000) == 0))))))
      {
        (**(code **)(*plVar3 + 0x10))(plVar3,&local_88);
        plVar17 = local_e0;
      }
      lVar24 = lVar24 + 0x10;
    } while ((longlong)iVar15 * 0x10 != lVar24);
    if ((longlong)(int)uStack_80 != 0) {
      local_c0 = local_88 + (longlong)(int)uStack_80 * 2;
      puVar10 = local_88;
      do {
        lVar23 = *(longlong *)puVar10;
        local_d0 = puVar10;
        if (lVar23 != 0) {
          lVar24 = lVar23 + 0x40;
          local_b8 = (longlong *)&DAT_100000000;
          local_a8 = 0xffffffff;
          local_a0 = local_a0 & 0xffffffff00000000;
          uStack_b0 = lVar24;
          if (*(int *)(lVar23 + 0x58) == 0) {
            uVar28 = 1;
            local_a8._0_4_ = 0xffffffff;
            iVar15 = 0;
            uVar29 = 0;
            local_a8._4_4_ = 0;
            uVar30 = 0;
          }
          else {
            FUN_1449c0562(&local_b8);
            uVar30 = (ulonglong)local_b8 & 0xffffffff;
            uVar28 = (ulonglong)local_b8 >> 0x20;
            uVar29 = local_a0 & 0xffffffff;
            iVar15 = *(int *)(lVar23 + 0x58);
          }
          lVar22 = uStack_b0;
          plVar17 = local_e0;
          uVar12 = (uint)local_a8;
          iVar9 = local_a8._4_4_;
          if (local_a8._4_4_ != iVar15 || uStack_b0 != lVar24) {
            do {
              iVar20 = (int)uVar30;
              local_b8 = (longlong *)(*(longlong *)(lVar23 + 0x30) + (longlong)iVar9 * 0x48);
              uStack_b0 = *(longlong *)(lVar23 + 0x30) + (longlong)iVar9 * 0x48 + 8;
              FUN_1405eafac(local_e0,&local_70,&local_b8,0);
              uVar12 = ~(uint)uVar28 & uVar12;
              lVar27 = *(longlong *)(lVar22 + 0x10);
              if (*(longlong *)(lVar22 + 0x10) == 0) {
                lVar27 = lVar22;
              }
              iVar2 = *(int *)(lVar22 + 0x18);
              lVar25 = (longlong)iVar20;
              uVar21 = *(uint *)(lVar27 + lVar25 * 4) & uVar12;
              if (uVar21 == 0) {
                iVar9 = iVar2 + 0x1e;
                if (-1 < iVar2 + -1) {
                  iVar9 = iVar2 + -1;
                }
                iVar9 = iVar9 >> 5;
                uVar29 = (ulonglong)((int)uVar29 + 0x20);
                iVar13 = iVar9;
                if (iVar9 < iVar20) {
                  iVar13 = iVar20;
                }
                if (iVar20 < iVar9) {
                  lVar26 = 0;
                  do {
                    uVar21 = *(uint *)(lVar27 + lVar25 * 4 + 4 + lVar26 * 4);
                    if (uVar21 != 0) {
                      uVar30 = (ulonglong)(iVar20 + (int)lVar26 + 1);
                      uVar12 = 0xffffffff;
                      goto LAB_1405eac82;
                    }
                    uVar29 = (ulonglong)((int)uVar29 + 0x20);
                    lVar26 = lVar26 + 1;
                  } while (iVar13 - lVar25 != lVar26);
                  uVar12 = 0xffffffff;
                  lVar25 = (longlong)iVar13;
                }
                uVar30 = lVar25 + 1U & 0xffffffff;
                iVar9 = iVar2;
              }
              else {
LAB_1405eac82:
                uVar28 = (ulonglong)(-uVar21 & uVar21);
                uVar1 = uVar28 * 2 + 1;
                lVar27 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                iVar9 = ((int)uVar29 - ((uint)lVar27 ^ 0x3f)) + 0x3e;
                if (iVar2 <= iVar9) {
                  iVar9 = iVar2;
                }
              }
            } while ((iVar9 != iVar15) || (plVar17 = local_e0, lVar22 != lVar24));
          }
        }
        puVar10 = local_d0 + 2;
        puVar16 = local_c8;
      } while (puVar10 != local_c0);
    }
  }
  if ((longlong)*(int *)(puVar16 + 0x19) != 0) {
    plVar19 = (longlong *)puVar16[0x18];
    plVar3 = plVar19 + *(int *)(puVar16 + 0x19);
    do {
      lVar23 = *plVar19;
      if (lVar23 != 0) {
        lVar24 = lVar23 + 0x40;
        local_70 = 0x100000000;
        local_60 = 0xffffffff;
        uStack_58 = 0;
        lStack_68 = lVar24;
        if (*(int *)(lVar23 + 0x58) == 0) {
          iVar15 = 0;
        }
        else {
          FUN_1449c0562(&local_70);
          iVar15 = *(int *)(lVar23 + 0x58);
        }
        plVar17 = (longlong *)(lVar23 + 0x30);
        uStack_98 = CONCAT44(uStack_54,uStack_58);
        local_a0 = local_60;
        uVar28 = local_a0;
        uStack_b0 = local_70;
        local_a8 = lStack_68;
        local_a0._4_4_ = (int)(local_60 >> 0x20);
        iVar9 = local_a0._4_4_;
        local_b8 = plVar17;
        if ((local_a0._4_4_ != iVar15) || (local_a0 = uVar28, lStack_68 != lVar24)) {
          do {
            local_a0 = uVar28;
            local_70 = *local_b8 + (longlong)iVar9 * 0x48;
            lStack_68 = *local_b8 + (longlong)iVar9 * 0x48 + 8;
            FUN_1405eafac(local_e0,local_4c,&local_70,0);
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_b0._4_4_);
            FUN_1449c0562(&uStack_b0);
            iVar9 = local_a0._4_4_;
            uVar28 = local_a0;
          } while (local_b8 != plVar17 || (local_a8 != lVar24 || local_a0._4_4_ != iVar15));
        }
      }
      plVar19 = plVar19 + 1;
      puVar16 = local_c8;
      plVar17 = local_e0;
    } while (plVar19 != plVar3);
  }
  iVar15 = *(int *)((longlong)puVar16 + 0xa4);
  *(int *)((longlong)puVar16 + 0xa4) = iVar15 + 1;
  uVar28 = (ulonglong)*(int *)(puVar16 + 0x13);
  if ((longlong)uVar28 < 1) {
    *(int *)((longlong)puVar16 + 0xa4) = iVar15;
  }
  else {
    bVar18 = false;
    do {
      lVar23 = uVar28 * 0x10 + -8;
      uVar29 = uVar28;
      while (((lVar24 = puVar16[0x12], *(int *)(lVar24 + lVar23) != 0 &&
              (plVar3 = *(longlong **)(lVar24 + -8 + lVar23), plVar3 != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*plVar3 + 0x60))(plVar3,plVar17), plVar17 = local_e0,
             cVar8 != '\0'))) {
        lVar23 = lVar23 + -0x10;
        bVar4 = uVar29 < 2;
        uVar29 = uVar29 - 1;
        if (bVar4) {
          *(int *)((longlong)puVar16 + 0xa4) = *(int *)((longlong)puVar16 + 0xa4) + -1;
          if (bVar18) goto LAB_1405eaf7b;
          goto LAB_1405ea875;
        }
      }
      uVar28 = uVar29 - 1;
      bVar18 = true;
    } while (1 < uVar29);
    *(int *)((longlong)puVar16 + 0xa4) = *(int *)((longlong)puVar16 + 0xa4) + -1;
LAB_1405eaf7b:
    FUN_14474d06a(puVar16 + 0x12,0);
    plVar17 = local_e0;
  }
LAB_1405ea875:
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  iVar15 = (int)plVar17[1] - *(int *)((longlong)plVar17 + 0x34);
  if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar15);
  }
  if (iVar15 != 0) {
    FUN_1403539de(&local_b8);
    plVar17 = local_e0;
  }
  puVar10 = (uint *)(plVar17 + 2);
  iVar15 = (int)plVar17[5];
  if (iVar15 == 0) {
    uVar29 = 1;
    uVar28 = 0;
    iVar9 = 0;
    iVar20 = 0;
  }
  else {
    puVar11 = (uint *)plVar17[4];
    if ((uint *)plVar17[4] == (uint *)0x0) {
      puVar11 = puVar10;
    }
    uVar12 = *puVar11;
    if (uVar12 == 0) {
      iVar9 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar9 = iVar15 + -1;
      }
      uVar28 = 0;
      uVar29 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar29 = uVar28;
      }
      iVar20 = 0;
      do {
        if (uVar29 == uVar28) goto LAB_1405eaa31;
        iVar20 = iVar20 + 0x20;
        uVar12 = puVar11[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar28 = 0;
      iVar20 = 0;
    }
    uVar29 = (ulonglong)(-uVar12 & uVar12);
    uVar30 = uVar29 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    iVar9 = (iVar20 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if (iVar15 <= iVar9) {
      iVar9 = iVar15;
    }
  }
  if (iVar9 != iVar15) {
    uVar12 = 0xffffffff;
    local_d0 = puVar10;
    do {
      uVar30 = uStack_b0;
      if ((*(char *)(*plVar17 + 0x30 + (longlong)iVar9 * 0x48) == '\0') &&
         (lVar23 = *plVar17 + (longlong)iVar9 * 0x48, *(longlong *)(lVar23 + 0x10) != 0)) {
        lVar24 = (longlong)(int)uStack_b0;
        uVar21 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar21);
        if (uStack_b0._4_4_ < uVar21) {
          FUN_1406f071e(&local_b8,uVar30 & 0xffffffff);
          puVar10 = local_d0;
          plVar17 = local_e0;
        }
        uVar5 = *(undefined4 *)(lVar23 + 0x14);
        uVar6 = *(undefined4 *)(lVar23 + 0x18);
        uVar7 = *(undefined4 *)(lVar23 + 0x1c);
        plVar3 = local_b8 + lVar24 * 4;
        *(undefined4 *)plVar3 = *(undefined4 *)(lVar23 + 0x10);
        *(undefined4 *)((longlong)plVar3 + 4) = uVar5;
        *(undefined4 *)(plVar3 + 1) = uVar6;
        *(undefined4 *)((longlong)plVar3 + 0xc) = uVar7;
        local_b8[lVar24 * 4 + 2] = 0;
        iVar9 = *(int *)(lVar23 + 0x28);
        _Src = *(void **)(lVar23 + 0x20);
        *(int *)(local_b8 + lVar24 * 4 + 3) = iVar9;
        if ((longlong)iVar9 == 0) {
          *(undefined4 *)((longlong)local_b8 + lVar24 * 0x20 + 0x1c) = 0;
        }
        else {
          plVar17 = local_b8 + lVar24 * 4 + 2;
          FUN_1446dd670(plVar17,iVar9,0);
          memcpy((void *)*plVar17,_Src,(longlong)iVar9 * 2);
          puVar10 = local_d0;
          plVar17 = local_e0;
        }
      }
      uVar12 = uVar12 & ~(uint)uVar29;
      puVar11 = (uint *)plVar17[4];
      if ((uint *)plVar17[4] == (uint *)0x0) {
        puVar11 = puVar10;
      }
      iVar2 = (int)plVar17[5];
      iVar9 = (int)uVar28;
      lVar23 = (longlong)iVar9;
      uVar21 = puVar11[lVar23] & uVar12;
      if (uVar21 == 0) {
        iVar13 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar13 = iVar2 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar20 = iVar20 + 0x20;
        iVar14 = iVar13;
        if (iVar13 < iVar9) {
          iVar14 = iVar9;
        }
        puVar10 = local_d0;
        if (iVar9 < iVar13) {
          lVar24 = 0;
          do {
            uVar21 = puVar11[lVar23 + lVar24 + 1];
            if (uVar21 != 0) {
              uVar28 = (ulonglong)(iVar9 + (int)lVar24 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1405eaa06;
            }
            iVar20 = iVar20 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar14 - lVar23 != lVar24);
          uVar12 = 0xffffffff;
          iVar9 = iVar14;
        }
        uVar28 = (ulonglong)(iVar9 + 1);
        plVar17 = local_e0;
        iVar9 = iVar2;
      }
      else {
LAB_1405eaa06:
        uVar29 = (ulonglong)(-uVar21 & uVar21);
        uVar30 = uVar29 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar9 = (iVar20 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar9) {
          iVar9 = iVar2;
        }
      }
    } while (iVar9 != iVar15);
  }
LAB_1405eaa31:
  FUN_1405eb5c0(local_c8 + 0x26,&local_b8,local_d1);
  FUN_140861e20(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405eafac FUN_1405eafac body=500 status=ok
// SIG undefined FUN_1405eafac(void)

undefined4 *
FUN_1405eafac(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *_Src;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405eb2fa(param_1,local_58);
  puVar1 = (undefined8 *)param_3[1];
  *local_50 = *(undefined8 *)*param_3;
  local_50[1] = *puVar1;
  uVar3 = *(undefined4 *)((longlong)puVar1 + 0xc);
  uVar4 = *(undefined4 *)(puVar1 + 2);
  uVar5 = *(undefined4 *)((longlong)puVar1 + 0x14);
  *(undefined4 *)(local_50 + 2) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_50 + 0x14) = uVar3;
  *(undefined4 *)(local_50 + 3) = uVar4;
  *(undefined4 *)((longlong)local_50 + 0x1c) = uVar5;
  local_50[4] = 0;
  iVar9 = *(int *)(puVar1 + 4);
  _Src = (void *)puVar1[3];
  *(int *)(local_50 + 5) = iVar9;
  if ((longlong)iVar9 == 0) {
    *(undefined4 *)((longlong)local_50 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(local_50 + 4,iVar9,0);
    memcpy((void *)local_50[4],_Src,(longlong)iVar9 * 2);
  }
  *(undefined1 *)(local_50 + 6) = *(undefined1 *)(puVar1 + 5);
  lVar10 = puVar1[6];
  local_50[7] = lVar10;
  if ((lVar10 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(local_50 + 8) = 0xffffffff;
  local_5c = local_58[0];
  uVar2 = *local_50;
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar8 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar8 >> 4);
  local_68 = param_4;
  cVar6 = FUN_1405eb1a2(param_1,uVar11,local_50);
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar8 < 4) {
      iVar9 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_50 + 0x44) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 8) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_1405eb90a(param_1);
    }
  }
  *param_2 = local_5c;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405eb1a2 FUN_1405eb1a2 body=206 status=ok
// SIG undefined FUN_1405eb1a2(void)

void FUN_1405eb1a2(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 uVar16;
  longlong *plVar17;
  int iVar18;
  
  uVar16 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar16 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar17 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[8];
    }
    iVar18 = *(int *)((longlong)plVar17 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar18 == -1) {
      uVar16 = 0;
    }
    else {
      do {
        plVar17 = (longlong *)(*param_1 + (longlong)iVar18 * 0x48);
        if (*plVar17 == *param_3) {
          if (plVar17[4] != 0) {
            FUN_1400020a8();
          }
          lVar9 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar10 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar11 = param_3[2];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar12 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar13 = param_3[4];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar14 = param_3[5];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
          lVar15 = param_3[7];
          uVar8 = *(undefined4 *)((longlong)param_3 + 0x3c);
          *(int *)(plVar17 + 6) = (int)param_3[6];
          *(undefined4 *)((longlong)plVar17 + 0x34) = uVar7;
          *(int *)(plVar17 + 7) = (int)lVar15;
          *(undefined4 *)((longlong)plVar17 + 0x3c) = uVar8;
          *(int *)(plVar17 + 4) = (int)lVar13;
          *(undefined4 *)((longlong)plVar17 + 0x24) = uVar5;
          *(int *)(plVar17 + 5) = (int)lVar14;
          *(undefined4 *)((longlong)plVar17 + 0x2c) = uVar6;
          *(int *)(plVar17 + 2) = (int)lVar11;
          *(undefined4 *)((longlong)plVar17 + 0x14) = uVar3;
          *(int *)(plVar17 + 3) = (int)lVar12;
          *(undefined4 *)((longlong)plVar17 + 0x1c) = uVar4;
          *(int *)plVar17 = (int)lVar9;
          *(undefined4 *)((longlong)plVar17 + 4) = uVar1;
          *(int *)(plVar17 + 1) = (int)lVar10;
          *(undefined4 *)((longlong)plVar17 + 0xc) = uVar2;
          FUN_1405eb270(param_1,*param_4,1);
          *param_4 = iVar18;
          uVar16 = 1;
          break;
        }
        iVar18 = (int)plVar17[8];
        uVar16 = 0;
      } while (iVar18 != -1);
    }
  }
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar16;
  }
  return;
}



// FUNCTION 1405eb270 FUN_1405eb270 body=138 status=ok
// SIG undefined FUN_1405eb270(void)

void FUN_1405eb270(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x48 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = param_2;
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
      puVar7 = puVar7 + 0x12;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405eb2fa FUN_1405eb2fa body=709 status=ok
// SIG undefined FUN_1405eb2fa(void)

int * FUN_1405eb2fa(longlong *param_1,int *param_2)

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
      FUN_14021b4e8(param_1,iVar15);
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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1405eb4ea;
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
LAB_1405eb4ea:
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
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x48);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x48) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar5 * 0x48 + *param_1;
  return param_2;
}



// FUNCTION 1405eb5c0 FUN_1405eb5c0 body=94 status=ok
// SIG undefined FUN_1405eb5c0(void)

void FUN_1405eb5c0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_142b35dec(0,param_2,&local_28,param_3);
  FUN_140861e20(local_28,uStack_20 & 0xffffffff);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405eb620 FUN_1405eb620 body=325 status=ok
// SIG undefined FUN_1405eb620(void)

void FUN_1405eb620(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x44 + (longlong)iVar4 * 0x48) * 4) =
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



// FUNCTION 1405eb766 FUN_1405eb766 body=420 status=ok
// SIG undefined FUN_1405eb766(void)

void FUN_1405eb766(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar9 = 0;
    uVar12 = 1;
    iVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar12 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar12 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar12 == uVar9) goto LAB_1405eb89c;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar12 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar3 * 0x48) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar12;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)uVar9;
      lVar11 = (longlong)iVar3;
      uVar4 = puVar7[lVar11] & uVar13;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar11 == lVar8) goto LAB_1405eb89c;
        }
        uVar9 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar13 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
LAB_1405eb89c:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1403af08a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 1405eb90a FUN_1405eb90a body=679 status=ok
// SIG undefined FUN_1405eb90a(void)

void FUN_1405eb90a(longlong *param_1)

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
    if ((int)uVar10 < 1) goto LAB_1405eb97f;
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
LAB_1405eb97f:
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
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x48);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x44 + lVar15 * 0x48) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x40 + lVar15 * 0x48) =
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



// FUNCTION 1405ebbb2 FUN_1405ebbb2 body=346 status=ok
// SIG undefined FUN_1405ebbb2(void)

undefined8 * FUN_1405ebbb2(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1405ebbb2;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
    }
  }
  puVar1[1] = &DAT_14c9521c0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e71030;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1405ebd0e(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ebd0e FUN_1405ebd0e body=128 status=ok
// SIG undefined FUN_1405ebd0e(void)

undefined8 *
FUN_1405ebd0e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1405ebd90(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e71030;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ebd90 FUN_1405ebd90 body=128 status=ok
// SIG undefined FUN_1405ebd90(void)

undefined8 *
FUN_1405ebd90(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1405ebe12(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9def0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ebe12 FUN_1405ebe12 body=128 status=ok
// SIG undefined FUN_1405ebe12(void)

undefined8 *
FUN_1405ebe12(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1405ebe94(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9e160;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ebe94 FUN_1405ebe94 body=135 status=ok
// SIG undefined FUN_1405ebe94(void)

undefined8 *
FUN_1405ebe94(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1405ebf1c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9e3d0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 4;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ebf1c FUN_1405ebf1c body=128 status=ok
// SIG undefined FUN_1405ebf1c(void)

undefined8 *
FUN_1405ebf1c(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e99390;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ebf9e FUN_1405ebf9e body=31 status=ok
// SIG undefined FUN_1405ebf9e(void)

void FUN_1405ebf9e(longlong param_1)

{
  FUN_1405ebfbe();
  *(undefined4 *)(param_1 + 0xb54) = DAT_14c7590b0;
  return;
}



// FUNCTION 1405ebfbe FUN_1405ebfbe body=281 status=ok
// SIG undefined FUN_1405ebfbe(void)

void FUN_1405ebfbe(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  int local_80;
  undefined4 local_78;
  int local_6c;
  longlong local_68;
  int *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1405ec0dc();
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0xaa8) + 0x20))();
  FUN_1405ec298(param_1 + 0x8c8,param_2,uVar3);
  if (0 < *(int *)(param_1 + 0x2a8)) {
    iVar4 = 0;
    do {
      local_78 = 2;
      local_88 = 0;
      local_80 = iVar4;
      FUN_1405ecb94();
      local_6c = iVar4;
      local_60 = &local_6c;
      local_58 = &local_68;
      FUN_1405ec5ce(param_1 + 0xa58,local_4c,&local_60,0);
      if (local_68 != 0) {
        LOCK();
        puVar1 = (uint *)(local_68 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x2a8));
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ec0dc FUN_1405ec0dc body=442 status=ok
// SIG undefined FUN_1405ec0dc(void)

void FUN_1405ec0dc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14ca96da8 != '\0') {
    *(undefined4 *)(param_1 + 0x874) = *(undefined4 *)(*(longlong *)(param_1 + 0x298) + 0x88);
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca97070) {
    FUN_144b3d300(&DAT_14ca97070);
    if (DAT_14ca97070 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar4 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
      if (plVar4 == (longlong *)0x0) {
        DAT_14ca97068 = 0;
      }
      else {
        DAT_14ca97068 = (**(code **)(*plVar4 + 0x68))(plVar4);
      }
      _Init_thread_footer(&DAT_14ca97070);
    }
  }
  lVar1 = DAT_14ca97068;
  bVar6 = true;
  cVar2 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar5 = 0;
      cVar2 = '\x02';
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar5 = (ulonglong)(bVar3 ^ 1);
      cVar2 = DAT_14ca96da8;
    }
    bVar6 = *(int *)(lVar1 + uVar5 * 4) != 0;
  }
  if (((bVar6) && (cVar2 != '\0')) && ((*(byte *)(param_1 + 0x2cc) & 4) != 0)) {
    FUN_147d5b7a2(param_1,param_2);
  }
  FUN_14016594c(&local_28,*(undefined8 *)(param_1 + 0x8a8),*(uint *)(param_1 + 0x880) >> 2 & 3);
  *(undefined8 *)(param_1 + 0x8b0) = local_28;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ec298 FUN_1405ec298 body=821 status=ok
// SIG undefined FUN_1405ec298(void)

void FUN_1405ec298(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined1 local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188 [64];
  ulonglong local_148;
  longlong local_140 [8];
  undefined4 local_100;
  undefined2 local_fc;
  undefined1 local_fa;
  undefined8 local_f8;
  undefined8 uStack_f0;
  longlong local_e8;
  longlong local_d8 [14];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_1c8 = param_2;
  if ((param_3 != (longlong *)0x0) && (*(char *)((longlong)param_3 + 0x21) == '\x01')) {
    if ((int)param_3[1] == -1) {
      (**(code **)(*param_3 + 0x18))(param_3,param_2);
    }
    else {
      FUN_1447fd100(param_3,param_2);
    }
    *(undefined1 *)((longlong)param_3 + 0x21) = 0;
  }
  if (0 < (int)param_1[3]) {
    lVar6 = 8;
    local_1bc = *(uint *)((longlong)&DAT_14ca814d0 +
                         (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)param_1[5] * 2) *
                         0x3c + 4) >> 0x14 & 1;
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(*(longlong *)param_1[4] + lVar10 * 8);
      local_d8[0xc] = 0;
      local_d8[0xd] = 0;
      local_d8[10] = 0;
      local_d8[0xb] = 0;
      local_d8[8] = 0;
      local_d8[9] = 0;
      local_d8[6] = 0;
      local_d8[7] = 0;
      local_d8[4] = 0;
      local_d8[5] = 0;
      local_d8[2] = 0;
      local_d8[3] = 0;
      local_d8[0] = 0;
      local_d8[1] = 0;
      local_68 = 0;
      local_148 = 0x400000000;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_140[6] = 0;
      local_140[7] = 0;
      local_140[4] = 0;
      local_140[5] = 0;
      local_140[2] = 0;
      local_140[3] = 0;
      local_140[0] = 0;
      local_140[1] = 0;
      local_100 = 0xffffffff;
      local_fc = 0xff;
      local_fa = 0;
      local_e8 = 0;
      local_f8 = 0;
      uStack_f0 = 0;
      lVar1 = *param_1;
      lVar5 = lVar7 + 0x158;
      if ((*(byte *)(lVar7 + 0x5c) & 8) == 0) {
        lVar5 = 0;
      }
      if (((lVar1 != 0) && (lVar10 < *(int *)(lVar1 + 0x6b0))) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x6a8) + lVar6 * 8), lVar1 != 0)) {
        lVar5 = lVar1;
      }
      plVar2 = *(longlong **)(param_1[2] + lVar10 * 8);
      local_1e8 = (undefined4)param_1[1];
      local_1d0 = local_d8;
      local_1e0 = (undefined1)local_1bc;
      local_1d8 = &local_1b8;
      FUN_14004283b(lVar7 + 0x90,lVar5,param_3,plVar2);
      *(undefined4 *)(plVar2 + 0x2a) = (undefined4)local_198;
      *(undefined4 *)((longlong)plVar2 + 0x154) = local_198._4_4_;
      *(undefined4 *)(plVar2 + 0x2b) = (undefined4)uStack_190;
      *(undefined4 *)((longlong)plVar2 + 0x15c) = uStack_190._4_4_;
      *(undefined4 *)(plVar2 + 0x28) = (undefined4)local_1a8;
      *(undefined4 *)((longlong)plVar2 + 0x144) = local_1a8._4_4_;
      *(undefined4 *)(plVar2 + 0x29) = (undefined4)uStack_1a0;
      *(undefined4 *)((longlong)plVar2 + 0x14c) = uStack_1a0._4_4_;
      *(undefined4 *)(plVar2 + 0x26) = (undefined4)local_1b8;
      *(undefined4 *)((longlong)plVar2 + 0x134) = local_1b8._4_4_;
      *(undefined4 *)(plVar2 + 0x27) = (undefined4)uStack_1b0;
      *(undefined4 *)((longlong)plVar2 + 0x13c) = uStack_1b0._4_4_;
      if (plVar2 + 0x26 != &local_1b8) {
        iVar4 = (int)local_148;
        lVar7 = (longlong)(int)local_148;
        *(int *)(plVar2 + 0x34) = (int)local_148;
        if ((int)local_148 == 0 && *(int *)((longlong)plVar2 + 0x1a4) == 0) {
          *(undefined4 *)((longlong)plVar2 + 0x1a4) = 4;
        }
        else {
          FUN_144780848(plVar2 + 0x2c,local_148 & 0xffffffff);
          if (iVar4 != 0) {
            memcpy(plVar2 + 0x2c,local_188,lVar7 << 4);
          }
        }
      }
      uVar3 = local_1c8;
      plVar8 = local_140;
      plVar9 = plVar2 + 0x35;
      for (lVar7 = 8; lVar7 != 0; lVar7 = lVar7 + -1) {
        *plVar9 = *plVar8;
        plVar8 = plVar8 + 1;
        plVar9 = plVar9 + 1;
      }
      *(uint *)((longlong)plVar2 + 0x1eb) = CONCAT13(local_fa,CONCAT21(local_fc,local_100._3_1_));
      *(undefined4 *)(plVar2 + 0x3d) = local_100;
      *(undefined4 *)(plVar2 + 0x3e) = (undefined4)local_f8;
      *(undefined4 *)((longlong)plVar2 + 500) = local_f8._4_4_;
      *(undefined4 *)(plVar2 + 0x3f) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)plVar2 + 0x1fc) = uStack_f0._4_4_;
      plVar2[0x40] = local_e8;
      if (param_3 != (longlong *)0x0) {
        plVar8 = local_d8;
        plVar9 = plVar2 + 0x44;
        for (lVar7 = 0xf; lVar7 != 0; lVar7 = lVar7 + -1) {
          *plVar9 = *plVar8;
          plVar8 = plVar8 + 1;
          plVar9 = plVar9 + 1;
        }
      }
      FUN_1447fd100(plVar2,local_1c8);
      (**(code **)(*plVar2 + 0x18))(plVar2,uVar3);
      lVar10 = lVar10 + 1;
      lVar6 = lVar6 + 0x14;
    } while (lVar10 < (int)param_1[3]);
  }
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405ec5ce FUN_1405ec5ce body=1478 status=ok
// SIG undefined FUN_1405ec5ce(void)

uint * FUN_1405ec5ce(longlong *param_1,uint *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong *plVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar17 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar17 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar17) {
      FUN_14482b872(param_1,uVar17);
    }
    iVar23 = (int)param_1[5];
    if (iVar23 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar7 = iVar23 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar14 = iVar23 + 1;
    iVar18 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar18 = iVar23;
    }
    if (iVar18 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar23) {
        if (iVar23 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar7 = iVar23;
        }
        else {
          uVar9 = iVar23 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar9) {
              uVar15 = uVar9;
            }
          }
          else {
            uVar15 = (uVar9 * 3 >> 3) + uVar9 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar15 << 2,0);
          iVar7 = (int)(uVar11 >> 2);
          iVar14 = -0x20;
          if ((int)uVar9 <= iVar7) {
            iVar14 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar12,iVar7);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar7 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar7 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar20 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar20 = plVar12;
        }
        bVar13 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar20 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar20 + (longlong)(iVar7 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar10 = (longlong)(int)uVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar13 = (byte)iVar23 & 0x1f;
    puVar3 = (uint *)((longlong)plVar12 + (longlong)(iVar18 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    uVar17 = *(uint *)(param_1 + 6);
    lVar10 = (longlong)(int)uVar17;
    iVar23 = *(int *)(*param_1 + 4 + lVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar23;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar23 * 0x18) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(param_1 + 2);
  puVar16 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar16 = puVar3;
  }
  uVar9 = uVar17 + 0x1f;
  if (-1 < (int)uVar17) {
    uVar9 = uVar17;
  }
  puVar16[(int)uVar9 >> 5] = puVar16[(int)uVar9 >> 5] | 1 << ((byte)uVar17 & 0x1f);
  puVar16 = (uint *)(*param_1 + lVar10 * 0x18);
  plVar12 = (longlong *)param_3[1];
  uVar9 = *(uint *)*param_3;
  *puVar16 = uVar9;
  lVar10 = *plVar12;
  *(longlong *)(puVar16 + 2) = lVar10;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
    UNLOCK();
    uVar9 = *puVar16;
  }
  puVar16[4] = 0xffffffff;
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar12 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[8];
    }
    uVar15 = *(uint *)((longlong)plVar12 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
    if (uVar15 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*param_1 + (longlong)(int)uVar15 * 0x18);
        if (*puVar2 == uVar9) {
          if (*(longlong *)(puVar2 + 2) != 0) {
            LOCK();
            puVar1 = (uint *)(*(longlong *)(puVar2 + 2) + 8);
            uVar8 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar8 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          uVar8 = puVar16[1];
          uVar4 = puVar16[2];
          uVar5 = puVar16[3];
          *puVar2 = *puVar16;
          puVar2[1] = uVar8;
          puVar2[2] = uVar4;
          puVar2[3] = uVar5;
          FUN_147b4e2e4(param_1,uVar17);
          cVar6 = '\x01';
          goto LAB_1405ec6f5;
        }
        uVar15 = puVar2[4];
      } while (uVar15 != 0xffffffff);
    }
  }
  cVar6 = '\0';
  uVar15 = uVar17;
LAB_1405ec6f5:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar6;
  }
  if (cVar6 != '\0') goto LAB_1405ec8ff;
  uVar8 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar17 = 1;
  if (3 < uVar8) {
    uVar11 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
    lVar10 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar17 = 1 << ((byte)lVar10 & 0x1f);
  }
  if (((int)uVar8 < 1) || ((int)uVar17 <= (int)param_1[9])) {
    uVar9 = (int)param_1[9] - 1U & uVar9;
    puVar16[5] = uVar9;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    puVar16[4] = *(uint *)((longlong)plVar12 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(uint *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         uVar15;
    goto LAB_1405ec8ff;
  }
  *(uint *)(param_1 + 9) = uVar17;
  plVar12 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar12,0,0,4);
    uVar17 = *(uint *)(param_1 + 9);
  }
  plVar20 = param_1 + 7;
  if (uVar17 == 1) {
    if (*plVar12 != 0) {
      FUN_1446efa72(plVar12,0,0,4);
    }
LAB_1405ec756:
    uVar9 = 0;
    do {
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar20;
      }
      *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
           0xffffffff;
      uVar9 = uVar9 + 1;
    } while (uVar17 != uVar9);
  }
  else {
    if (uVar17 == 0) goto LAB_1405ec8ff;
    FUN_1446efa72(plVar12,0,uVar17,4);
    if (0 < (int)uVar17) goto LAB_1405ec756;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar11 = 0;
    uVar21 = 1;
    iVar7 = 0;
    iVar14 = 0;
  }
  else {
    puVar16 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar16 = puVar3;
    }
    uVar17 = *puVar16;
    if (uVar17 == 0) {
      iVar7 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar7 = iVar23 + -1;
      }
      uVar11 = 0;
      uVar21 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar21 = uVar11;
      }
      iVar14 = 0;
      do {
        if (uVar21 == uVar11) goto LAB_1405ec8ff;
        iVar14 = iVar14 + 0x20;
        uVar17 = puVar16[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar11 = 0;
      iVar14 = 0;
    }
    uVar21 = (ulonglong)(-uVar17 & uVar17);
    uVar24 = uVar21 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar7 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar7) {
      iVar7 = iVar23;
    }
  }
  if (iVar7 < iVar23) {
    uVar17 = 0xffffffff;
    do {
      lVar10 = *param_1;
      lVar22 = (longlong)iVar7;
      uVar24 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar10 + lVar22 * 0x18);
      iVar23 = (int)uVar24;
      *(int *)(lVar10 + 0x14 + lVar22 * 0x18) = iVar23;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar20;
      }
      *(undefined4 *)(lVar10 + 0x10 + lVar22 * 0x18) =
           *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = plVar20;
      }
      *(int *)((longlong)plVar12 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar17 = ~(uint)uVar21 & uVar17;
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = puVar3;
      }
      iVar23 = (int)param_1[5];
      iVar7 = (int)uVar11;
      lVar10 = (longlong)iVar7;
      uVar9 = puVar16[lVar10] & uVar17;
      if (uVar9 == 0) {
        iVar18 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar18 = iVar23 + -1;
        }
        iVar18 = iVar18 >> 5;
        iVar19 = iVar18;
        if (iVar18 < iVar7) {
          iVar19 = iVar7;
        }
        if (iVar18 <= iVar7) break;
        lVar22 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar9 = puVar16[lVar10 + lVar22 + 1];
          if (uVar9 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar19 - lVar10 == lVar22) goto LAB_1405ec8ff;
        }
        uVar11 = (ulonglong)(iVar7 + (int)lVar22 + 1);
        uVar17 = 0xffffffff;
      }
      uVar21 = (ulonglong)(-uVar9 & uVar9);
      uVar24 = uVar21 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar7 = (iVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar23);
  }
LAB_1405ec8ff:
  *param_2 = uVar15;
  return param_2;
}



// FUNCTION 1405ecb94 FUN_1405ecb94 body=1970 status=ok
// SIG undefined FUN_1405ecb94(void)

double * FUN_1405ecb94(undefined8 param_1,double *param_2,longlong param_3,longlong param_4,
                      int param_5,uint param_6,undefined4 param_7)

{
  uint *puVar1;
  uint uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  ulonglong local_208;
  undefined4 local_1fc;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_190 [48];
  double local_160;
  undefined4 local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  undefined4 local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  float local_138;
  float local_134;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float fStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_108 = 0.0;
  fStack_104 = 0.0;
  uStack_100 = 0;
  uStack_fc = 0x3f800000;
  uVar23 = 0x3f800000;
  if (param_5 == 0 || param_4 == 0) {
    fVar25 = 0.0;
    fVar22 = 0.0;
    fVar21 = 0.0;
    local_10c = 1.0;
    fVar20 = 0.0;
    fVar24 = 0.0;
    fVar17 = 0.0;
    local_20c = 0.0;
    local_11c = 0.0;
    fVar19 = 0.0;
    local_208 = local_208 & 0xffffffff00000000;
    local_150 = 3.4028235e+38;
    local_144 = 1.1754944e-38;
    local_154 = 1.1754944e-38;
    local_14c = 0x3f800000;
    local_140 = 3.4028235e+38;
  }
  else {
    iVar7 = *(int *)(param_4 + 0x1c);
    lVar8 = *(longlong *)(param_4 + 8);
    iVar13 = *(int *)(lVar8 + 8) + -1;
    if (*(int *)(DAT_14cae70b0 + 4) < iVar13) {
      iVar13 = *(int *)(DAT_14cae70b0 + 4);
    }
    iVar14 = iVar7;
    if (iVar7 < iVar13) {
      iVar14 = iVar13;
    }
    if (iVar13 < 0) {
      iVar14 = iVar7;
    }
    FUN_144a7484c(&DAT_14c8464f8,&local_1f8);
    uStack_1d0 = (undefined4)DAT_14c8464e8;
    uStack_1cc = (undefined4)((ulonglong)DAT_14c8464e8 >> 0x20);
    local_1d8 = (undefined4)DAT_14c8464e0;
    uStack_1d4 = DAT_14c8464e0._4_4_;
    local_1c8 = DAT_14c8464f0;
    uStack_1c0 = 0;
    local_1b8 = *(undefined4 *)(param_4 + 0x28);
    uStack_1b4 = *(undefined4 *)(param_4 + 0x2c);
    uStack_1b0 = *(undefined4 *)(param_4 + 0x30);
    uStack_1ac = *(undefined4 *)(param_4 + 0x34);
    local_1a8 = *(undefined8 *)(param_4 + 0x38);
    uStack_1a0 = 0;
    FUN_144a80a4c(lVar8 + 0x50,local_190,&local_1f8);
    fVar21 = DAT_14cb0cc0c;
    fVar20 = 0.0;
    if (*(double *)(param_3 + 0x8a8) <= 1.0 && *(double *)(param_3 + 0x8a8) != 1.0) {
      fVar20 = *(float *)(DAT_14cae4898 + 4);
    }
    local_214 = 0.0;
    if (param_6 != 0) {
      local_214 = -1.0;
    }
    fVar24 = (float)local_160;
    fVar22 = *(float *)(param_4 + 0x18);
    local_1fc = *(undefined4 *)(DAT_14cae48b0 + 4);
    local_210 = 0.0 - local_214;
    lVar8 = param_3 + 0x830;
    local_208 = (ulonglong)(param_6 + 1);
    local_224 = 3.4028235e+38;
    local_21c = 1.1754944e-38;
    local_218 = 1.1754944e-38;
    local_220 = 3.4028235e+38;
    bVar15 = true;
    do {
      bVar9 = bVar15;
      fVar19 = 3.4028235e+38;
      if (0.0 < fVar20) {
        fVar19 = (float)FUN_1436a1ab0(fVar20,fVar24,lVar8);
        fVar19 = fVar19 * fVar22;
      }
      if ((0 < *(int *)(param_4 + 0x14)) &&
         (fVar17 = (float)*(int *)(param_4 + 0x14) * fVar21, fVar17 <= fVar19)) {
        fVar19 = fVar17;
      }
      fVar17 = local_220;
      fVar25 = fVar19;
      if (!bVar9) {
        fVar17 = fVar19;
        fVar25 = local_224;
      }
      fVar16 = local_224;
      if ((int)param_6 < *(int *)(*(longlong *)(param_4 + 8) + 8) + -1) {
        fVar17 = (float)FUN_1436a1ab0(*(undefined4 *)
                                       (*(longlong *)(param_4 + 8) + 0x20 + local_208 * 4),fVar24,
                                      lVar8);
        fVar18 = fVar17 * fVar22;
        if (fVar19 <= fVar17 * fVar22) {
          fVar18 = fVar19;
        }
        fVar17 = local_220;
        fVar25 = fVar18;
        fVar16 = fVar18;
        if (!bVar9) {
          fVar17 = fVar18;
          fVar25 = local_224;
          fVar16 = local_224;
          local_220 = fVar18;
        }
      }
      local_224 = fVar16;
      if (iVar14 < (int)param_6) {
        fVar16 = (float)FUN_1436a1ab0(*(undefined4 *)
                                       (*(longlong *)(param_4 + 8) + 0x20 + (ulonglong)param_6 * 4),
                                      fVar24,lVar8);
        fVar16 = fVar16 * fVar22;
        if (fVar16 < fVar19) {
          local_224 = fVar25;
          local_220 = fVar17;
          fVar19 = fVar16;
          if (!bVar9) {
            fVar19 = local_21c;
            local_218 = fVar16;
          }
        }
        else {
          local_224 = 1.1754944e-38;
          local_220 = fVar17;
          fVar19 = 1.1754944e-38;
          if (!bVar9) {
            local_218 = 1.1754944e-38;
            local_220 = 1.1754944e-38;
            local_224 = fVar25;
            fVar19 = local_21c;
          }
        }
      }
      else {
        local_224 = fVar25;
        local_220 = fVar17;
        fVar19 = 1.1754944e-38;
        if (!bVar9) {
          local_218 = 1.1754944e-38;
          fVar19 = local_21c;
        }
      }
      local_21c = fVar19;
      fVar17 = local_210;
      fVar19 = local_214;
      bVar15 = false;
    } while (bVar9);
    local_208 = CONCAT44(local_208._4_4_,1.0 - (local_214 + local_210));
    dVar3 = *(double *)(param_3 + 0x1030);
    dVar4 = *(double *)(param_3 + 0x1038);
    dVar5 = *(double *)(param_3 + 0x1040);
    FUN_1436a1a50(param_3,&local_1f8,0,1);
    local_20c = (float)(local_1e8 + dVar5);
    fVar24 = (float)(dStack_1f0 + dVar4);
    fVar20 = (float)(local_1f8 + dVar3);
    FUN_1436a1a50(param_3,&local_1f8,1,1);
    fVar21 = (float)(dVar5 + local_1e8);
    fVar22 = (float)(dVar4 + dStack_1f0);
    fVar25 = (float)(dVar3 + local_1f8);
    local_10c = (float)FUN_1436a30d0(param_3);
    local_11c = 1.0 - local_10c;
    local_150 = local_224;
    local_144 = local_218;
    local_154 = local_21c;
    local_14c = local_1fc;
    local_140 = local_220;
  }
  fStack_104 = 0.0;
  local_158 = 0x800000;
  local_148 = 0x800000;
  local_13c = 0;
  local_130 = (undefined4)local_208;
  local_12c = 0;
  local_120 = local_20c;
  uStack_100 = 0x3f800000;
  local_108 = 3.4028235e+38;
  if (param_4 != 0) {
    local_108 = (float)*(int *)(param_4 + 0x10) * DAT_14cb0cc0c;
    fVar16 = (float)*(int *)(param_4 + 0x14) * DAT_14cb0cc0c;
    uVar23 = 0;
    fStack_104 = 0.0;
    if (0.0 < fVar16) {
      if (fVar16 <= local_108) {
        fStack_104 = 1.0;
      }
      else {
        fStack_104 = 1.0 / (fVar16 - local_108);
      }
    }
    if (*(int *)(DAT_14cae4d10 + 4) < 1) {
      uVar23 = 0x3f800000;
      uStack_100 = 0x3f800000;
      if (*(char *)(param_4 + 0x20) == '\0') {
        uStack_100 = 0;
      }
      if (*(char *)(param_4 + 0x21) == '\0') {
        uVar23 = 0;
      }
    }
    else {
      uStack_100 = 0;
    }
  }
  local_138 = fVar19;
  local_134 = fVar17;
  local_128 = fVar20;
  local_124 = fVar24;
  local_118 = fVar25;
  local_114 = fVar22;
  local_110 = fVar21;
  uStack_fc = uVar23;
  FUN_1405ed348();
  local_238 = param_7;
  local_230 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_1f8,&local_158,DAT_14cae4c80);
  *param_2 = local_1f8;
  if (local_1f8 != 0.0) {
    LOCK();
    *(int *)((longlong)local_1f8 + 8) = *(int *)((longlong)local_1f8 + 8) + 1;
    UNLOCK();
    if (local_1f8 != 0.0) {
      LOCK();
      puVar1 = (uint *)((longlong)local_1f8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)((longlong)local_1f8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar6 = *(byte *)((longlong)local_1f8 + 0xd);
          plVar10 = (longlong *)FUN_14001cc68(0x10,8);
          plVar10[1] = (longlong)local_1f8;
          plVar12 = DAT_14ca843c0;
          plVar11 = DAT_14ca843c8;
          if ((bVar6 & 2) == 0) {
            do {
              *plVar10 = (longlong)plVar12;
              LOCK();
              bVar15 = plVar12 != DAT_14ca843c0;
              plVar11 = plVar10;
              if (bVar15) {
                plVar12 = DAT_14ca843c0;
                plVar11 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar11;
              UNLOCK();
            } while (bVar15);
          }
          else {
            do {
              *plVar10 = (longlong)plVar11;
              LOCK();
              bVar15 = plVar11 != DAT_14ca843c8;
              plVar12 = plVar10;
              if (bVar15) {
                plVar11 = DAT_14ca843c8;
                plVar12 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar12;
              UNLOCK();
            } while (bVar15);
          }
        }
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1405ed348 FUN_1405ed348 body=423 status=ok
// SIG undefined FUN_1405ed348(void)

undefined * FUN_1405ed348(void)

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
              0x110) < DAT_14cae4cb8) {
    FUN_144b3d300(&DAT_14cae4cb8);
    if (DAT_14cae4cb8 == -1) {
      FUN_14572917e(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"InstancedVFLooseParameters";
      local_78 = L"FInstancedStaticMeshVFLooseUniformShaderParameters";
      local_50 = 0x60;
      local_58 = 0x32;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cae4c38,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435332dc);
      _Init_thread_footer(&DAT_14cae4cb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cae4c38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ed4f0 FUN_1405ed4f0 body=38 status=ok
// SIG undefined FUN_1405ed4f0(void)

void FUN_1405ed4f0(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1405ed516(param_1);
    param_1 = param_1 + 0x18;
  }
  return;
}



// FUNCTION 1405ed516 FUN_1405ed516 body=168 status=ok
// SIG undefined FUN_1405ed516(void)

void FUN_1405ed516(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if ((plVar2 != (longlong *)0x0) && ((*(byte *)((longlong)plVar2 + 0x9c) & 3) == 1)) {
    if (DAT_14c76138c != 0) {
      (**(code **)(*plVar2 + 0x310))();
      plVar2 = (longlong *)*param_1;
    }
    (**(code **)(*plVar2 + 800))(plVar2,0);
    FUN_1405edac7(*param_1,param_1[2]);
  }
  if ((undefined8 *)param_1[1] != (undefined8 *)0x0) {
    cVar1 = (*(code *)**(undefined8 **)param_1[1])();
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
      if (cVar1 != '\0') {
        if (DAT_14c76138c != 0) {
          (**(code **)(*(longlong *)param_1[1] + 0xa0))();
        }
        (**(code **)(*(longlong *)param_1[1] + 0x58))((longlong *)param_1[1],0);
        FUN_1405ed5bf(param_1[1],param_1[2]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1405ed5bf FUN_1405ed5bf body=1287 status=ok
// SIG undefined FUN_1405ed5bf(void)

void FUN_1405ed5bf(longlong *param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  longlong lVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  longlong local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [16];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = (**(code **)(*param_1 + 0x30))();
  local_98 = lVar9;
  if (lVar9 == 0) goto LAB_1405ed726;
  if (param_2 != 0) {
    FUN_1402af616(param_2,local_68,&local_98);
    goto LAB_1405ed726;
  }
  FUN_143222f6a(local_90);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_1405ed63d;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_1405ed642;
      goto LAB_1405ed671;
    }
LAB_1405ed642:
    FUN_140777948(lVar9,&DAT_14ca85100);
  }
  else {
LAB_1405ed63d:
    if (iVar6 == 0x10) goto LAB_1405ed642;
LAB_1405ed671:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
      goto LAB_1405ed642;
      if (iVar6 == 1) {
        DVar7 = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        if (DVar7 == DVar8) goto LAB_1405ed642;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_1405ed7eb;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1434414af);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar10 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar10 = 0xffffffff;
        *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
        puVar10[0x12] = 0;
        *puVar2 = puVar10;
        FUN_140217a48(puVar2);
        puVar11 = (uint *)*puVar2;
LAB_1405ed7eb:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
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
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_1405ed86b;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1405ed86b:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar6 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a83c030;
      puVar17[0x15] = lVar9;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar6 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
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
      lVar9 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar9 == 0) {
        uVar5 = 1;
        if ((char)uVar16 != '\x06') {
          uVar5 = uVar16;
        }
        uVar16 = uVar5;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar9 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar9 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar6;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
      local_a8 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a83c010;
      local_68[0] = &LAB_143473122;
      local_40 = lVar9;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateAllPrimitiveSceneInfosCmd",&DAT_14cad0e88);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  FUN_1405ee12c(&DAT_14ca966d0,local_90);
  FUN_14004710c(local_78);
LAB_1405ed726:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405edac7 FUN_1405edac7 body=1301 status=ok
// SIG undefined FUN_1405edac7(void)

void FUN_1405edac7(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
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
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  longlong local_98;
  undefined1 local_90 [24];
  undefined1 local_78 [16];
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(longlong *)(param_1 + 0xb0) == 0) ||
     (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x218), local_98 = lVar4, lVar4 == 0))
  goto LAB_1405edc3c;
  if (param_2 != 0) {
    FUN_1402af616(param_2,local_68,&local_98);
    goto LAB_1405edc3c;
  }
  FUN_143222f6a(local_90);
  lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar5 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1405edb53;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1405edb58;
      goto LAB_1405edb87;
    }
LAB_1405edb58:
    FUN_140777948(lVar4,&DAT_14ca85100);
  }
  else {
LAB_1405edb53:
    if (iVar7 == 0x10) goto LAB_1405edb58;
LAB_1405edb87:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar5 + 0xc60), iVar7 == 2))
      goto LAB_1405edb58;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1405edb58;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar11 = (uint *)*puVar2;
      if (puVar11 != (uint *)0x0) goto LAB_1405edd01;
      while( true ) {
        uVar13 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar13 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar13 | 1;
          __tlregdtor(&LAB_1434414af);
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
LAB_1405edd01:
        puVar17 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar17 + 0x16);
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
          puVar17 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar13 = 0;
          if (puVar15 <= puVar11 + 0x4000) {
            uVar13 = 1;
            goto LAB_1405edd81;
          }
        }
      }
      uVar13 = uVar13 + 1;
LAB_1405edd81:
      *(uint **)(puVar11 + 0x10) = puVar15;
      puVar11[0x12] = uVar13;
      iVar7 = 0;
      FUN_1447247dc(puVar17,0);
      *puVar17 = &PTR_FUN_14a83c000;
      puVar17[0x15] = lVar4;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar13 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
          uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          iVar7 = 0;
        }
        else {
          uVar16 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar16 = 5;
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
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar16 != '\x06') {
          uVar6 = uVar16;
        }
        uVar16 = uVar6;
        uVar12 = 0;
      }
      else {
        if ((char)uVar16 == '\x06') {
          uVar16 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar12 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar17[0xf] = uVar12;
      puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar17 + 0x1c) = iVar7;
      if (puVar17 == (undefined8 *)0x0) {
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
        UNLOCK();
        local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
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
      local_a8 = local_68;
      local_58 = (undefined ***)0x0;
      local_48 = &PTR_LAB_14a83bfa0;
      local_68[0] = &LAB_143472f60;
      local_40 = lVar4;
      FUN_14005a792(&DAT_14ca9a440,L"UpdateAllPrimitiveSceneInfosCmd",&DAT_14cad0e84);
      if (local_68[0] != (undefined1 *)0x0) {
        pppuVar14 = local_58;
        if (local_58 == (undefined ***)0x0) {
          pppuVar14 = &local_48;
        }
        (*(code *)(*pppuVar14)[2])();
      }
    }
  }
  FUN_1405ee12c(&DAT_14ca966d0,local_90);
  FUN_14004710c(local_78);
LAB_1405edc3c:
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405edfde FUN_1405edfde body=333 status=ok
// SIG undefined FUN_1405edfde(void)

void FUN_1405edfde(longlong param_1,ulonglong param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [8];
  undefined1 local_58 [16];
  undefined1 *local_48;
  int local_40;
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((DAT_14ca9a43c != 2) || (DAT_14ca9a438 != '\x01')) goto LAB_1405ee0b6;
  local_48 = (undefined1 *)0x0;
  local_3c = 0x20;
  local_40 = *(int *)(param_1 + 0x10);
  uVar4 = local_40 + 0x1f;
  if (0x1f < uVar4) {
    if (uVar4 < 0x40) {
      puVar2 = local_60;
      if (local_58 != (undefined1 *)0x0) {
        puVar2 = local_58;
      }
LAB_1405ee052:
      uVar4 = uVar4 >> 3 & 0xfffffffc;
      iVar3 = (int)CONCAT71((int7)(param_2 >> 8),0xff);
    }
    else {
      param_2 = (ulonglong)(uVar4 >> 5);
      FUN_1400744f2(local_60,param_2);
      local_3c = uVar4 & 0xffffffe0;
      puVar2 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar2 = local_58;
      }
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = local_60;
      }
      if (uVar4 < 0x120) goto LAB_1405ee052;
      uVar4 = (uVar4 >> 5) << 2;
      iVar3 = (int)CONCAT71((int7)(param_2 >> 8),0xff);
    }
    memset(puVar2,iVar3,(ulonglong)uVar4);
    iVar3 = local_40 + 0x1f;
    if (-1 < local_40) {
      iVar3 = local_40;
    }
    if (local_40 % 0x20 != 0) {
      puVar2 = local_58;
      if (local_48 != (undefined1 *)0x0) {
        puVar2 = local_48;
      }
      if (puVar2 == (undefined1 *)0x0) {
        puVar2 = local_60;
      }
      bVar1 = -(char)(local_40 % 0x20);
      *(uint *)(puVar2 + (longlong)(iVar3 >> 5) * 4) =
           (uint)(*(int *)(puVar2 + (longlong)(iVar3 >> 5) * 4) << (bVar1 & 0x1f)) >> (bVar1 & 0x1f)
      ;
    }
  }
  FUN_1405ee12c(param_1,local_60);
  FUN_14004710c(&local_48);
LAB_1405ee0b6:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405ee12c FUN_1405ee12c body=3276 status=ok
// SIG undefined FUN_1405ee12c(void)

ulonglong FUN_1405ee12c(byte *param_1,uint *param_2)

{
  char *pcVar1;
  int *piVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  byte bVar5;
  char cVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  DWORD DVar10;
  DWORD DVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  uint *puVar15;
  undefined4 *puVar16;
  uint *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong *plVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  bool bVar31;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  uint local_f8;
  int local_f4;
  ulonglong local_f0;
  undefined8 *local_e8;
  longlong local_e0;
  byte *local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined1 *local_a8 [2];
  longlong *local_98;
  longlong local_88 [5];
  ulonglong local_60;
  
  uVar12 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_60 = uVar12;
  if (((DAT_14ca9a43c != 2) || (DAT_14ca9a438 != '\x01')) || (param_2[8] == 0)) goto LAB_1405eeda7;
  uVar22 = 0;
  LOCK();
  bVar5 = *param_1;
  if (bVar5 == 0) {
    *param_1 = 1;
  }
  UNLOCK();
  if (bVar5 != 0) {
    FUN_1447d2058();
  }
  uVar8 = param_2[8];
  uVar12 = (ulonglong)uVar8;
  if (uVar8 == 0) {
    uVar29 = 1;
    iVar18 = 0;
    uVar28 = 0;
  }
  else {
    puVar17 = param_2 + 2;
    if (*(uint **)(param_2 + 6) != (uint *)0x0) {
      puVar17 = *(uint **)(param_2 + 6);
    }
    if (puVar17 == (uint *)0x0) {
      puVar17 = param_2;
    }
    uVar28 = *puVar17;
    uVar22 = 0;
    iVar18 = 0;
    if (uVar28 == 0) {
      iVar18 = uVar8 + 0x1e;
      if (-1 < (int)(uVar8 - 1)) {
        iVar18 = uVar8 - 1;
      }
      uVar22 = 0;
      uVar29 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar29 = uVar22;
      }
      iVar18 = 0;
      do {
        if (uVar29 == uVar22) goto LAB_1405eed90;
        iVar18 = iVar18 + 0x20;
        uVar28 = puVar17[uVar22 + 1];
        uVar22 = uVar22 + 1;
      } while (uVar28 == 0);
    }
    uVar29 = (ulonglong)(-uVar28 & uVar28);
    uVar4 = uVar29 * 2 + 1;
    lVar26 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar26 == 0; lVar26 = lVar26 + -1) {
      }
    }
    uVar28 = (iVar18 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    if ((int)uVar8 <= (int)uVar28) {
      uVar28 = uVar8;
    }
  }
  if ((int)uVar28 < (int)uVar8) {
    puVar17 = param_2 + 2;
    puVar15 = *(uint **)(param_2 + 6);
    if (*(uint **)(param_2 + 6) == (uint *)0x0) {
      puVar15 = puVar17;
    }
    if (puVar15 == (uint *)0x0) {
      puVar15 = param_2;
    }
    iVar24 = uVar8 + 0x1e;
    if (-1 < (int)(uVar8 - 1)) {
      iVar24 = uVar8 - 1;
    }
    iVar24 = iVar24 >> 5;
    uVar23 = 0xffffffff;
    do {
      lVar26 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar28 * 8);
      if ((*(char *)(lVar26 + 0x4f) == '\x01') && (*(char *)(lVar26 + 0x4e) != '\x01')) {
        puVar13 = (undefined8 *)FUN_1448fe162();
        *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
        puVar13[1] = &DAT_100000001;
        puVar13[2] = 0;
        *(undefined4 *)(puVar13 + 3) = 0;
        *(undefined4 *)(puVar13 + 4) = 0xffffffff;
        puVar13[6] = 0;
        puVar13[7] = 0x100000000;
        *(undefined1 *)(puVar13 + 8) = 1;
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        puVar13[0xf] = 0;
        puVar13[0x10] = 0xe800000000000020;
        puVar13[0x12] = 0;
        puVar13[0x13] = 0x100000000;
        *(undefined2 *)(puVar13 + 0x14) = 0;
        LOCK();
        bVar31 = *(char *)(puVar13 + 8) == '\x01';
        if (bVar31) {
          *(char *)(puVar13 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar31) {
          FUN_14008cdb0(puVar13 + 8);
        }
        *puVar13 = &PTR_FUN_149e1e2e0;
        if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
        }
        puVar13[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar13[9] = puVar13;
        puVar13[10] = puVar13;
        lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        if (*(longlong *)(lVar26 + 0x2b8) == 0) {
          uVar14 = 0;
        }
        else {
          uVar14 = *(undefined8 *)(*(longlong *)(lVar26 + 0x2b8) + 0x30);
        }
        puVar13[0xf] = uVar14;
        puVar13[0x10] = 0xc80000528e472a00;
        *(undefined4 *)((longlong)puVar13 + 0x1c) = 2;
        local_b8 = (longlong *)0x0;
        uStack_b0 = 0;
        iVar18 = *(int *)(param_1 + 0x10);
        if (iVar18 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar18);
        }
        if (iVar18 != 0) {
          FUN_140160c40();
        }
        uVar8 = param_2[8];
        local_e0 = lVar26;
        if (uVar8 == 0) {
          uVar22 = 1;
          iVar18 = 0;
          uVar12 = 0;
          uVar28 = 0;
          goto LAB_1405ee4cb;
        }
        puVar15 = *(uint **)(param_2 + 6);
        if (*(uint **)(param_2 + 6) == (uint *)0x0) {
          puVar15 = puVar17;
        }
        if (puVar15 == (uint *)0x0) {
          puVar15 = param_2;
        }
        uVar28 = *puVar15;
        iVar18 = 0;
        uVar12 = 0;
        if (uVar28 != 0) goto LAB_1405ee495;
        iVar18 = uVar8 + 0x1e;
        if (-1 < (int)(uVar8 - 1)) {
          iVar18 = uVar8 - 1;
        }
        uVar12 = 0;
        uVar22 = (ulonglong)(uint)(iVar18 >> 5);
        if (iVar18 >> 5 < 1) {
          uVar22 = 0;
        }
        iVar18 = 0;
        goto LAB_1405ee762;
      }
      uVar23 = uVar23 & ~(uint)uVar29;
      iVar21 = (int)uVar22;
      lVar26 = (longlong)iVar21;
      uVar28 = puVar15[lVar26] & uVar23;
      if (uVar28 == 0) {
        iVar25 = iVar24;
        if (iVar24 < iVar21) {
          iVar25 = iVar21;
        }
        if (iVar24 <= iVar21) break;
        lVar27 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar28 = puVar15[lVar26 + lVar27 + 1];
          if (uVar28 != 0) break;
          lVar27 = lVar27 + 1;
          if (iVar25 - lVar26 == lVar27) goto LAB_1405eed90;
        }
        uVar22 = (ulonglong)(iVar21 + (int)lVar27 + 1);
        uVar23 = 0xffffffff;
      }
      uVar29 = (ulonglong)(-uVar28 & uVar28);
      uVar4 = uVar29 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar28 = (iVar18 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    } while ((int)uVar28 < (int)uVar8);
  }
  goto LAB_1405eed90;
  while( true ) {
    iVar18 = iVar18 + 0x20;
    uVar28 = puVar15[uVar12 + 1];
    uVar12 = uVar12 + 1;
    if (uVar28 != 0) break;
LAB_1405ee762:
    if (uVar22 == uVar12) goto LAB_1405ee77e;
  }
LAB_1405ee495:
  uVar22 = (ulonglong)(-uVar28 & uVar28);
  uVar29 = uVar22 * 2 + 1;
  lVar26 = 0x3f;
  if (uVar29 != 0) {
    for (; uVar29 >> lVar26 == 0; lVar26 = lVar26 + -1) {
    }
  }
  uVar28 = (iVar18 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
  if ((int)uVar8 <= (int)uVar28) {
    uVar28 = uVar8;
  }
LAB_1405ee4cb:
  if ((int)uVar28 < (int)uVar8) {
    local_e8 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xde8);
    uVar8 = 0xffffffff;
    do {
      puVar3 = local_e8;
      lVar26 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)(int)uVar28 * 8);
      if ((*(char *)(lVar26 + 0x4f) == '\x01') && (*(char *)(lVar26 + 0x4e) == '\0')) {
        *(undefined1 *)(lVar26 + 0x4e) = 1;
        puVar15 = (uint *)*local_e8;
        local_f8 = uVar8;
        local_f4 = iVar18;
        if (puVar15 != (uint *)0x0) goto LAB_1405ee550;
        do {
          FUN_144769a66(puVar3);
          puVar15 = (uint *)*puVar3;
LAB_1405ee550:
          uVar4 = uStack_b0;
          uVar29 = *(longlong *)(puVar15 + 0x10) + 7;
          uVar8 = puVar15[0x12];
          while( true ) {
            puVar30 = (undefined8 *)(uVar29 & 0xfffffffffffffff8);
            if (puVar30 + 4 <= puVar15 + 0x4000) {
              *(undefined8 **)(puVar15 + 0x10) = puVar30 + 5;
              puVar15[0x12] = uVar8 + 1;
              *(int *)(puVar30 + -1) = ((int)puVar30 + -8) - (int)puVar15;
              *(undefined4 *)((longlong)puVar30 + -4) = 0x20;
              *puVar30 = puVar13;
              if (puVar13 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
                UNLOCK();
              }
              puVar30[1] = 0;
              puVar30[2] = 0;
              puVar30[3] = 0;
              lVar27 = (longlong)(int)uStack_b0;
              uVar8 = (int)uStack_b0 + 1;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
              if (uStack_b0._4_4_ < uVar8) {
                local_f0 = uVar12;
                FUN_147434a32(&local_b8,uVar4 & 0xffffffff);
                uVar12 = local_f0;
              }
              local_b8[lVar27 * 2] = lVar26;
              local_b8[lVar27 * 2 + 1] = (longlong)puVar30;
              pcVar1 = (char *)(lVar26 + 8);
              LOCK();
              bVar31 = *(char *)(lVar26 + 8) == '\0';
              if (bVar31) {
                *(char *)(lVar26 + 8) = '\x01';
              }
              UNLOCK();
              if (!bVar31) {
                local_f0 = uVar12;
                FUN_1447d2058();
                uVar12 = local_f0;
              }
              *(undefined8 **)(lVar26 + 0x10) = puVar30;
              uVar8 = local_f8;
              iVar18 = local_f4;
              if (pcVar1 != (char *)0x0) {
                LOCK();
                cVar6 = *pcVar1;
                if (cVar6 == '\x01') {
                  *pcVar1 = '\0';
                }
                UNLOCK();
                if (cVar6 != '\x01') {
                  FUN_14008cdb0(pcVar1);
                  uVar8 = local_f8;
                  iVar18 = local_f4;
                }
              }
              goto LAB_1405ee678;
            }
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x4000;
            LOCK();
            uVar28 = *puVar15;
            *puVar15 = *puVar15 + uVar8 + 1;
            UNLOCK();
            if ((uVar28 ^ uVar8) != 0xffffffff) break;
            puVar15 = (uint *)*puVar3;
            *puVar15 = 0xffffffff;
            *(uint **)(puVar15 + 0x10) = puVar15 + 0x16;
            puVar15[0x12] = 0;
            *puVar3 = puVar15;
            uVar29 = (longlong)puVar15 + 0x5f;
            uVar8 = 0;
          }
        } while( true );
      }
LAB_1405ee678:
      uVar8 = uVar8 & ~(uint)uVar22;
      puVar15 = *(uint **)(param_2 + 6);
      if (*(uint **)(param_2 + 6) == (uint *)0x0) {
        puVar15 = puVar17;
      }
      if (puVar15 == (uint *)0x0) {
        puVar15 = param_2;
      }
      uVar23 = param_2[8];
      iVar24 = (int)uVar12;
      lVar26 = (longlong)iVar24;
      uVar28 = puVar15[lVar26] & uVar8;
      if (uVar28 == 0) {
        iVar21 = uVar23 + 0x1e;
        if (-1 < (int)(uVar23 - 1)) {
          iVar21 = uVar23 - 1;
        }
        iVar21 = iVar21 >> 5;
        iVar25 = iVar21;
        if (iVar21 < iVar24) {
          iVar25 = iVar24;
        }
        if (iVar21 <= iVar24) break;
        lVar27 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar28 = puVar15[lVar26 + lVar27 + 1];
          if (uVar28 != 0) break;
          lVar27 = lVar27 + 1;
          if (iVar25 - lVar26 == lVar27) goto LAB_1405ee77e;
        }
        uVar12 = (ulonglong)(iVar24 + (int)lVar27 + 1);
        uVar8 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar28 & uVar28);
      uVar29 = uVar22 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar29 != 0) {
        for (; uVar29 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar28 = (iVar18 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
    } while ((int)uVar28 < (int)uVar23);
  }
LAB_1405ee77e:
  local_c0 = uStack_b0;
  plVar20 = local_b8;
  iVar18 = (int)uStack_b0;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)uStack_b0;
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar13 + 1) = *(int *)(puVar13 + 1) + 1;
    UNLOCK();
  }
  local_c8 = local_b8;
  uVar7 = uStack_b0._4_4_;
  local_b8 = (longlong *)0x0;
  uStack_b0 = 0;
  lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar24 = *(int *)(lVar26 + 0xc60);
  local_d8 = param_1;
  local_d0 = puVar13;
  if (DAT_14c86a9fc == 0) {
    if (iVar24 == 2) goto LAB_1405ee7ea;
    if (iVar24 != 1) goto LAB_1405ee7e5;
    uVar9 = FUN_140ad26c0();
    local_e8 = (undefined8 *)CONCAT44(local_e8._4_4_,uVar9);
    DVar10 = GetCurrentThreadId();
    if ((DWORD)local_e8 == DVar10) goto LAB_1405ee7ea;
LAB_1405ee845:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar24 = *(int *)(lVar26 + 0xc60), iVar24 == 2)) {
LAB_1405eed0b:
        DAT_14ca83d40 = DAT_14ca83d40 + iVar18;
        if (iVar18 != 0) {
          plVar19 = plVar20 + (longlong)iVar18 * 2;
          do {
            *(longlong *)(*plVar20 + 0x18) = plVar20[1];
            plVar20 = plVar20 + 2;
          } while (plVar20 != plVar19);
          goto LAB_1405ee81d;
        }
LAB_1405eed3f:
        iVar18 = 0;
        goto LAB_1405eed41;
      }
      if (iVar24 == 1) {
        DVar10 = FUN_140ad26c0();
        DVar11 = GetCurrentThreadId();
        if (DVar10 == DVar11) goto LAB_1405eed0b;
      }
    }
    if (DAT_14ca9a43c == 0) {
      plVar20 = (longlong *)(local_e0 + 0x2b8);
      puVar3 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar17 = (uint *)*puVar3;
      if (puVar17 != (uint *)0x0) goto LAB_1405ee9ed;
      while( true ) {
        uVar8 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar8 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar8 | 1;
          __tlregdtor(&LAB_14322aa43);
        }
        lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar16 = *(undefined4 **)(lVar26 + 0x310);
        *(undefined8 *)(lVar26 + 0x310) = 0;
        if (puVar16 == (undefined4 *)0x0) {
          puVar16 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar16 = 0xffffffff;
        *(undefined4 **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar3 = puVar16;
        FUN_140217a48(puVar3);
        puVar17 = (uint *)*puVar3;
LAB_1405ee9ed:
        puVar30 = (undefined8 *)(*(longlong *)(puVar17 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar15 = (uint *)(puVar30 + 0x19);
        uVar8 = puVar17[0x12];
        if (puVar15 <= puVar17 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x4000;
          LOCK();
          uVar28 = *puVar17;
          *puVar17 = *puVar17 + uVar8 + 1;
          UNLOCK();
          if ((uVar28 ^ uVar8) != 0xffffffff) break;
          puVar17 = (uint *)*puVar3;
          *puVar17 = 0xffffffff;
          *(uint **)(puVar17 + 0x10) = puVar17 + 0x16;
          puVar17[0x12] = 0;
          *puVar3 = puVar17;
          puVar30 = (undefined8 *)((longlong)puVar17 + 0x5fU & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar30 + 0x19);
          uVar8 = 0;
          if (puVar15 <= puVar17 + 0x4000) {
            uVar8 = 1;
            goto LAB_1405eea6d;
          }
        }
      }
      uVar8 = uVar8 + 1;
LAB_1405eea6d:
      *(uint **)(puVar17 + 0x10) = puVar15;
      puVar17[0x12] = uVar8;
      iVar18 = 0;
      FUN_1447247dc(puVar30,0);
      *puVar30 = &PTR_FUN_14a391d70;
      puVar30[0x15] = local_d8;
      puVar30[0x16] = local_d0;
      local_d0 = (undefined8 *)0x0;
      puVar30[0x17] = local_c8;
      local_c8 = (longlong *)0x0;
      *(int *)(puVar30 + 0x18) = (int)local_c0;
      *(undefined4 *)((longlong)puVar30 + 0xc4) = local_c0._4_4_;
      local_c0 = 0;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar8 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar8 < 2) {
          uVar12 = (ulonglong)(byte)(&DAT_149e38edc)[uVar8];
        }
        else {
          uVar12 = 2;
        }
      }
      else {
        iVar18 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                 *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar12 = 5;
      }
      if (*(code **)(puVar30[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar30[0xe] + 0x18))(puVar30 + 0xe,puVar30 + 9);
      }
      puVar30[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar30[9] = puVar30;
      puVar30[10] = puVar30;
      lVar26 = *plVar20;
      if (lVar26 == 0) {
        uVar22 = 1;
        if ((char)uVar12 != '\x06') {
          uVar22 = uVar12;
        }
        uVar12 = uVar22;
        uVar14 = 0;
      }
      else {
        if ((char)uVar12 == '\x06') {
          uVar12 = *(ulonglong *)(lVar26 + 0x38) >> 0x3b;
        }
        uVar14 = *(undefined8 *)(lVar26 + 0x30);
      }
      puVar30[0xf] = uVar14;
      puVar30[0x10] = uVar12 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar30 + 0x1c) = iVar18;
      if (puVar30 == (undefined8 *)0x0) {
        local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar30 + 1) = *(int *)(puVar30 + 1) + 1;
        UNLOCK();
        local_a8[0] = (undefined1 *)CONCAT71(local_a8[0]._1_7_,1);
        FUN_1447439e4(puVar30);
        LOCK();
        piVar2 = (int *)(puVar30 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar30)(puVar30,1);
        }
      }
    }
    else {
      local_a8[0] = (undefined1 *)0x0;
      local_98 = (longlong *)FUN_14001cc68(0x28,8);
      puVar3 = local_d0;
      *local_98 = (longlong)&PTR_LAB_14a391d20;
      local_d0 = (undefined8 *)0x0;
      local_c8 = (longlong *)0x0;
      local_c0 = 0;
      local_98[1] = (longlong)local_d8;
      local_98[2] = (longlong)puVar3;
      local_98[3] = (longlong)plVar20;
      *(int *)(local_98 + 4) = iVar18;
      *(undefined4 *)((longlong)local_98 + 0x24) = uVar7;
      if (local_98 + 1 != (longlong *)0x0) {
        local_a8[0] = &LAB_1447f2eea;
      }
      local_108 = local_a8;
      FUN_14005a792(&DAT_14ca9a440,L"RenderCommandPipe_Start",&DAT_14ca98ab0);
      if (local_a8[0] != (undefined1 *)0x0) {
        plVar20 = local_98;
        if (local_98 == (longlong *)0x0) {
          plVar20 = local_88;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
    }
  }
  else {
LAB_1405ee7e5:
    if (iVar24 != 0x10) goto LAB_1405ee845;
LAB_1405ee7ea:
    DAT_14ca83d40 = DAT_14ca83d40 + iVar18;
    if (iVar18 == 0) goto LAB_1405eed3f;
    plVar19 = plVar20 + (longlong)iVar18 * 2;
    do {
      *(longlong *)(*plVar20 + 0x18) = plVar20[1];
      plVar20 = plVar20 + 2;
    } while (plVar20 != plVar19);
LAB_1405ee81d:
    iVar18 = (int)local_c0;
LAB_1405eed41:
    *(int *)(local_d8 + 0x1c) = *(int *)(local_d8 + 0x1c) + iVar18;
    FUN_1400daade(&local_d0);
  }
  FUN_1400809da(&local_c8);
  if (local_d0 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_d0 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_d0)(local_d0,1);
    }
  }
  uVar12 = FUN_1400809da();
  if (puVar13 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar13 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      uVar12 = (**(code **)*puVar13)(puVar13,1);
    }
  }
LAB_1405eed90:
  if (param_1 != (byte *)0x0) {
    uVar12 = 1;
    LOCK();
    bVar5 = *param_1;
    if (bVar5 == 1) {
      *param_1 = 0;
    }
    else {
      uVar12 = (ulonglong)bVar5;
    }
    UNLOCK();
    if (bVar5 != 1) {
      uVar12 = FUN_14008cdb0(param_1);
    }
  }
LAB_1405eeda7:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 1405eedf9 FUN_1405eedf9 body=284 status=ok
// SIG undefined FUN_1405eedf9(void)

void FUN_1405eedf9(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined8 uStack_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [8];
  undefined8 auStack_c8 [12];
  undefined4 auStack_68 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_168;
  memset(local_d0,0,0x98);
  FUN_1405eef16();
  auStack_c8[DAT_14c9f8470] = &DAT_14c9f8428;
  auStack_68[DAT_14c9f8470] = 0;
  FUN_1405ef032();
  auStack_c8[DAT_14c9f8598] = &DAT_14c9f8550;
  auStack_68[DAT_14c9f8598] = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  lStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  cVar1 = FUN_14007744c(param_1,local_d0,param_2);
  if (cVar1 != '\0') {
    if (local_138 != 0) {
      *param_3 = local_138;
      param_3[1] = local_148;
    }
    if (lStack_120 != 0) {
      *param_4 = lStack_120;
      param_4[1] = local_148;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405eef16 FUN_1405eef16 body=284 status=ok
// SIG undefined FUN_1405eef16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1405eef16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f84d0) {
    FUN_144b3d300(&DAT_14c9f84d0);
    if (DAT_14c9f84d0 == -1) {
      FUN_1457293fa();
      FUN_140db5666(&DAT_14c9f8428,2,&DAT_14c9f83c0,L"FLumenCardVS",
                    L"/Engine/Private/Lumen/LumenCardVertexShader.usf",L"Main",0,1,FUN_147204744,
                    FUN_14720471c,&LAB_140175fd6,&LAB_147204718,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14c9f8428 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142d65096);
      _Init_thread_footer(&DAT_14c9f84d0);
    }
  }
  return &DAT_14c9f8428;
}



// FUNCTION 1405ef032 FUN_1405ef032 body=284 status=ok
// SIG undefined FUN_1405ef032(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1405ef032(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f85f8) {
    FUN_144b3d300(&DAT_14c9f85f8);
    if (DAT_14c9f85f8 == -1) {
      FUN_145729544();
      FUN_140db5666(&DAT_14c9f8550,2,&DAT_14c9f84e8,L"FLumenCardPS",
                    L"/Engine/Private/Lumen/LumenCardPixelShader.usf",L"Main",3,1,FUN_1472047f6,
                    FUN_1472047ce,&LAB_14176b2a4,&LAB_1472047ca,&LAB_14712ac0c,&LAB_14712ac08,0x108,
                    0);
      _DAT_14c9f8550 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_142d650a2);
      _Init_thread_footer(&DAT_14c9f85f8);
    }
  }
  return &DAT_14c9f8550;
}



// FUNCTION 1405ef15c FUN_1405ef15c body=88 status=ok
// SIG undefined FUN_1405ef15c(void)

undefined8 FUN_1405ef15c(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1405ef1b4();
  if (((*(byte *)(param_2 + 5) & 4) != 0) && ((longlong)*(int *)(param_1 + 0x108) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x100);
    lVar1 = (longlong)*(int *)(param_1 + 0x108) * 0x28;
    do {
      (**(code **)(*param_2 + 0x218))(param_2,lVar2);
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
  }
  return 0;
}



// FUNCTION 1405ef1b4 FUN_1405ef1b4 body=187 status=ok
// SIG undefined FUN_1405ef1b4(void)

void FUN_1405ef1b4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_2 + 5) & 4) != 0) && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x58);
    lVar2 = (longlong)*(int *)(param_1 + 0x60) * 0x10 + lVar1;
    do {
      (**(code **)(*param_2 + 0x210))(param_2,lVar1,lVar1 + 8);
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != lVar2);
  }
  if ((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0) {
    if ((longlong)*(int *)(param_1 + 0x70) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x68);
      lVar2 = (longlong)*(int *)(param_1 + 0x70) * 0x18;
      do {
        (**(code **)(*param_2 + 0x250))(param_2,lVar1);
        lVar1 = lVar1 + 0x18;
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x78);
      lVar2 = (longlong)*(int *)(param_1 + 0x80) * 0x18;
      do {
        (**(code **)(*param_2 + 600))(param_2,lVar1);
        lVar1 = lVar1 + 0x18;
        lVar2 = lVar2 + -0x18;
      } while (lVar2 != 0);
    }
  }
  return;
}



// FUNCTION 1405ef26f FUN_1405ef26f body=3122 status=ok
// SIG undefined FUN_1405ef26f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405ef26f(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  uint *puVar20;
  undefined4 *puVar21;
  byte bVar22;
  undefined4 *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  int6 iVar28;
  bool bVar29;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  int *local_180;
  ulonglong *local_178;
  int local_16c;
  longlong *local_168;
  longlong local_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144 [18];
  undefined1 local_fc;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  byte local_d8 [4];
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 *local_9c;
  undefined1 *puStack_94;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined1 local_7c;
  undefined1 local_71;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (0 < (int)param_2[1]) {
    DAT_14ca4d320 = *param_2;
    local_180 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    lVar18 = 0;
    do {
      lVar24 = *param_2;
      puVar2 = *(ulonglong **)(param_1 + 0x18);
      iVar7 = *(int *)(lVar24 + 0x1de0 + lVar18 * 0x13c10);
      local_16c = *(int *)((longlong)puVar2 + 0x17c);
      local_178 = puVar2;
      local_160 = lVar18;
      if (local_16c != iVar7) {
        *(int *)((longlong)puVar2 + 0x17c) = iVar7;
        puVar13 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar13 + 3;
        if ((undefined8 *)puVar2[1] < puVar12) {
          FUN_140023dd8(puVar2,0x20);
          puVar13 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar13 + 3;
        }
        *local_178 = (ulonglong)puVar12;
        *(int *)(local_178 + 0xc) = (int)local_178[0xc] + 1;
        *(undefined8 **)local_178[6] = puVar13;
        local_178[6] = (ulonglong)(puVar13 + 1);
        uVar1 = *(undefined4 *)((longlong)local_178 + 0x17c);
        puVar13[1] = 0;
        *puVar13 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar13 + 2) = uVar1;
      }
      puVar20 = DAT_14ca4d118;
      lVar24 = lVar24 + lVar18 * 0x13c10;
      local_9c = &DAT_100000001;
      puStack_94 = &DAT_100000001;
      local_8c = 0;
      uStack_84 = 0;
      local_7c = 0;
      if (DAT_14ca4d100 == 0) {
        bVar22 = 0;
      }
      else if ((*(longlong *)
                 (&DAT_14ca814b0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar24 + 0x3090) * 2) *
                 0x3c) == DAT_14ca80038) &&
              ((*(byte *)((longlong)&DAT_14ca814d0 +
                         (ulonglong)
                         *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar24 + 0x3090) * 2) *
                         0x3c + 3) & 1) == 0)) {
        bVar22 = 0;
      }
      else {
        bVar22 = (byte)((uint)*(undefined4 *)(*(longlong *)(lVar24 + 8) + 0x60) >> 0x1a) & 1;
      }
      local_d4 = *(undefined8 *)(lVar24 + 0x4e8);
      local_cc = *(undefined8 *)(lVar24 + 0x4f0);
      local_c4 = *(undefined8 *)(lVar24 + 0x23d0);
      local_a8 = *(undefined8 *)(lVar24 + 0x1040);
      local_b8 = *(undefined8 *)(lVar24 + 0x1030);
      uStack_b0 = *(undefined8 *)(lVar24 + 0x1038);
      local_a0 = *(undefined4 *)(*(longlong *)(lVar24 + 8) + 0xe8);
      iVar7 = *local_180;
      local_d8[0] = bVar22;
      if (iVar7 == 0x40000002) {
        uVar27 = 1;
        if (1 < (int)*DAT_14ca4d118) {
          uVar27 = (ulonglong)*DAT_14ca4d118;
        }
        iVar7 = 0x40000002;
LAB_1405efb55:
        uVar16 = 0;
        puVar20 = DAT_14ca4d118;
      }
      else {
        if ((DAT_14c86a9f8 == 1) && (iVar7 != 2)) {
          if (iVar7 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            bVar29 = DVar8 == DVar9;
            iVar7 = *local_180;
          }
          else {
            bVar29 = false;
          }
          uVar19 = puVar20[bVar29 ^ 1];
          if ((int)puVar20[bVar29 ^ 1] < 2) {
            uVar19 = 1;
          }
          uVar27 = (ulonglong)uVar19;
          if (iVar7 == 0x40000002) {
            iVar7 = 0x40000002;
            goto LAB_1405efb55;
          }
        }
        else {
          uVar19 = *DAT_14ca4d118;
          if ((int)*DAT_14ca4d118 < 2) {
            uVar19 = 1;
          }
          uVar27 = (ulonglong)uVar19;
        }
        puVar20 = DAT_14ca4d118;
        if (((DAT_14c86a9f8 & 1) == 0) || (iVar7 == 2)) goto LAB_1405efb55;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          uVar16 = (ulonglong)(DVar8 != DVar9);
          iVar7 = *local_180;
        }
        else {
          uVar16 = 1;
        }
      }
      puVar4 = DAT_14ca4d148;
      uVar17 = (ulonglong)puVar20[uVar16];
      if ((int)puVar20[uVar16] < 2) {
        uVar17 = 1;
      }
      local_9c = (undefined1 *)(uVar17 | uVar27 << 0x20);
      if (iVar7 == 0x40000002) {
        uVar27 = 1;
        if (1 < (int)*DAT_14ca4d148) {
          uVar27 = (ulonglong)*DAT_14ca4d148;
        }
LAB_1405efb70:
        uVar16 = 0;
        lVar18 = DAT_14ca4d130;
      }
      else {
        if ((DAT_14c86a9f8 == 1) && (iVar7 != 2)) {
          uVar16 = 1;
          if (iVar7 == 1) {
            DVar8 = FUN_140ad26c0();
            DVar9 = GetCurrentThreadId();
            uVar16 = (ulonglong)(DVar8 != DVar9);
            iVar7 = *local_180;
          }
          uVar27 = (ulonglong)puVar4[uVar16];
          if ((int)puVar4[uVar16] < 2) {
            uVar27 = 1;
          }
          if (iVar7 == 0x40000002) goto LAB_1405efb70;
        }
        else {
          uVar19 = *DAT_14ca4d148;
          if ((int)*DAT_14ca4d148 < 2) {
            uVar19 = 1;
          }
          uVar27 = (ulonglong)uVar19;
        }
        lVar18 = DAT_14ca4d130;
        if (((DAT_14c86a9f8 & 1) == 0) || (iVar7 == 2)) goto LAB_1405efb70;
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          uVar16 = (ulonglong)(DVar8 != DVar9);
        }
        else {
          uVar16 = 1;
        }
      }
      lVar5 = DAT_14ca4d160;
      uVar19 = *(uint *)(lVar18 + uVar16 * 4);
      uVar16 = (ulonglong)uVar19;
      if ((int)uVar19 < 2) {
        uVar16 = 1;
      }
      puStack_94 = (undefined1 *)(uVar16 | uVar27 << 0x20);
      if (bVar22 == 0) {
        local_8c = 0;
        uStack_84._0_4_ = 0;
        iVar7 = 0;
      }
      else {
        iVar7 = *local_180;
        uVar27 = 0;
        if (iVar7 == 0x40000002) {
          iVar7 = 0x40000002;
          uVar16 = 0;
        }
        else {
          bVar29 = true;
          if ((DAT_14c86a9f8 == 1) && (iVar7 != 2)) {
            if (iVar7 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              bVar29 = DVar8 == DVar9;
              iVar7 = *local_180;
            }
            else {
              bVar29 = false;
            }
          }
          uVar16 = (ulonglong)(bVar29 ^ 1);
        }
        lVar18 = DAT_14ca4d178;
        uVar19 = DAT_14ca4e244 + *(int *)(lVar5 + uVar16 * 4);
        uVar16 = (ulonglong)uVar19;
        if ((int)uVar19 < 1) {
          uVar16 = uVar27;
        }
        local_8c = CONCAT44(local_8c._4_4_,(int)uVar16);
        iVar15 = 0x40000002;
        if (iVar7 != 0x40000002) {
          uVar27 = 1;
          if ((DAT_14c86a9f8 == 1) && (iVar7 != 2)) {
            if (iVar7 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              uVar27 = (ulonglong)(DVar8 == DVar9);
              iVar7 = *local_180;
            }
            else {
              uVar27 = 0;
            }
          }
          uVar27 = uVar27 ^ 1;
          iVar15 = iVar7;
        }
        lVar5 = DAT_14ca4d190;
        iVar7 = DAT_14ca4e240 + *(int *)(lVar18 + uVar27 * 4);
        uVar27 = 0;
        if (iVar7 < 1) {
          iVar7 = 0;
        }
        local_8c = CONCAT44(iVar7,(undefined4)local_8c);
        if (iVar15 == 0x40000002) {
          iVar15 = 0x40000002;
          uVar16 = 0;
        }
        else {
          bVar29 = true;
          if ((DAT_14c86a9f8 == 1) && (iVar15 != 2)) {
            if (iVar15 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              bVar29 = DVar8 == DVar9;
              iVar15 = *local_180;
            }
            else {
              bVar29 = false;
            }
          }
          uVar16 = (ulonglong)(bVar29 ^ 1);
        }
        lVar18 = DAT_14ca4d1a8;
        uVar19 = DAT_14ca4e248 + *(int *)(lVar5 + uVar16 * 4);
        uVar16 = (ulonglong)uVar19;
        if ((int)uVar19 < 1) {
          uVar16 = uVar27;
        }
        uStack_84 = CONCAT44(uStack_84._4_4_,(int)uVar16);
        if (iVar15 != 0x40000002) {
          uVar27 = 1;
          if ((DAT_14c86a9f8 == 1) && (iVar15 != 2)) {
            if (iVar15 == 1) {
              DVar8 = FUN_140ad26c0();
              DVar9 = GetCurrentThreadId();
              uVar27 = (ulonglong)(DVar8 == DVar9);
            }
            else {
              uVar27 = 0;
            }
          }
          uVar27 = uVar27 ^ 1;
        }
        iVar15 = DAT_14ca4e24c + *(int *)(lVar18 + uVar27 * 4);
        iVar7 = 0;
        if (0 < iVar15) {
          iVar7 = iVar15;
        }
      }
      uStack_84 = CONCAT44(iVar7,(undefined4)uStack_84);
      if (*(longlong *)(lVar24 + 0x10) == 0) {
        local_7c = 0;
      }
      else {
        local_7c = *(undefined1 *)(*(longlong *)(lVar24 + 0x10) + 0x2120);
      }
      FUN_1405f0270(&local_158,param_1,local_d8,*(undefined8 *)(lVar24 + 0x3108));
      *(undefined1 *)(lVar24 + 0x13870) = (undefined1)local_158;
      *(ulonglong *)(lVar24 + 0x13874) = CONCAT44(uStack_150,local_158._4_4_);
      *(ulonglong *)(lVar24 + 0x1387c) = CONCAT44(uStack_148,uStack_14c);
      puVar21 = local_144;
      puVar23 = (undefined4 *)(lVar24 + 0x13884);
      for (lVar18 = 0x12; lVar18 != 0; lVar18 = lVar18 + -1) {
        *puVar23 = *puVar21;
        puVar21 = puVar21 + 1;
        puVar23 = puVar23 + 1;
      }
      *(undefined1 *)(lVar24 + 0x138cc) = local_fc;
      lVar18 = *(longlong *)(lVar24 + 0x138d0);
      *(longlong *)(lVar24 + 0x138d0) = local_f8;
      local_f8 = 0;
      if (lVar18 == 0) {
        *(undefined4 *)(lVar24 + 0x138d8) = local_f0;
        *(undefined4 *)(lVar24 + 0x138dc) = uStack_ec;
        *(undefined4 *)(lVar24 + 0x138e0) = uStack_e8;
        *(undefined4 *)(lVar24 + 0x138e4) = uStack_e4;
      }
      else {
        LOCK();
        puVar20 = (uint *)(lVar18 + 8);
        uVar19 = *puVar20;
        *puVar20 = *puVar20 - 1;
        UNLOCK();
        if ((uVar19 & 0x3fffffff) == 1) {
          puVar20 = (uint *)(lVar18 + 8);
          LOCK();
          uVar19 = *puVar20;
          *puVar20 = *puVar20 | 0x40000000;
          UNLOCK();
          if ((uVar19 >> 0x1e & 1) == 0) {
            bVar22 = *(byte *)(lVar18 + 0xd);
            plVar10 = (longlong *)FUN_14001cc68(0x10,8);
            plVar10[1] = lVar18;
            plVar14 = DAT_14ca843c0;
            plVar11 = DAT_14ca843c8;
            if ((bVar22 & 2) == 0) {
              do {
                *plVar10 = (longlong)plVar14;
                LOCK();
                bVar29 = plVar14 != DAT_14ca843c0;
                plVar11 = plVar10;
                if (bVar29) {
                  plVar14 = DAT_14ca843c0;
                  plVar11 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar11;
                UNLOCK();
              } while (bVar29);
            }
            else {
              do {
                *plVar10 = (longlong)plVar11;
                LOCK();
                bVar29 = plVar11 != DAT_14ca843c8;
                plVar14 = plVar10;
                if (bVar29) {
                  plVar11 = DAT_14ca843c8;
                  plVar14 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar14;
                UNLOCK();
              } while (bVar29);
            }
          }
        }
        lVar18 = local_f8;
        *(undefined4 *)(lVar24 + 0x138d8) = local_f0;
        *(undefined4 *)(lVar24 + 0x138dc) = uStack_ec;
        *(undefined4 *)(lVar24 + 0x138e0) = uStack_e8;
        *(undefined4 *)(lVar24 + 0x138e4) = uStack_e4;
        if (local_f8 != 0) {
          LOCK();
          puVar20 = (uint *)(local_f8 + 8);
          uVar19 = *puVar20;
          *puVar20 = *puVar20 - 1;
          UNLOCK();
          if ((uVar19 & 0x3fffffff) == 1) {
            puVar20 = (uint *)(local_f8 + 8);
            LOCK();
            uVar19 = *puVar20;
            *puVar20 = *puVar20 | 0x40000000;
            UNLOCK();
            if ((uVar19 >> 0x1e & 1) == 0) {
              bVar22 = *(byte *)(local_f8 + 0xd);
              plVar10 = (longlong *)FUN_14001cc68(0x10,8);
              plVar10[1] = lVar18;
              plVar14 = DAT_14ca843c0;
              plVar11 = DAT_14ca843c8;
              if ((bVar22 & 2) == 0) {
                do {
                  *plVar10 = (longlong)plVar14;
                  LOCK();
                  bVar29 = plVar14 != DAT_14ca843c0;
                  plVar11 = plVar10;
                  if (bVar29) {
                    plVar14 = DAT_14ca843c0;
                    plVar11 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar11;
                  UNLOCK();
                } while (bVar29);
              }
              else {
                do {
                  *plVar10 = (longlong)plVar11;
                  LOCK();
                  bVar29 = plVar11 != DAT_14ca843c8;
                  plVar14 = plVar10;
                  if (bVar29) {
                    plVar11 = DAT_14ca843c8;
                    plVar14 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar14;
                  UNLOCK();
                } while (bVar29);
              }
            }
          }
        }
      }
      if ((*(longlong *)
            (&DAT_14ca814b0 +
            (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar24 + 0x3090) * 2) * 0x3c)
           != DAT_14ca80038) ||
         ((*(byte *)((longlong)&DAT_14ca814d0 +
                    (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar24 + 0x3090) * 2)
                    * 0x3c + 3) & 1) != 0)) {
        puVar2 = (ulonglong *)(param_1 + 0x70);
        uVar3 = *(undefined8 *)
                 (&DAT_14ca8c1f0 +
                 (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
        local_168 = param_2;
        FUN_1405efea2();
        FUN_1448e935e(uVar3,&local_158,&DAT_14ca4d3a0,0);
        FUN_1405efea2();
        puVar13 = local_158;
        uVar3 = CONCAT44(uStack_14c,uStack_150);
        puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar12 = puVar26 + 4;
        if (*(undefined8 **)(param_1 + 0x78) < puVar12) {
          FUN_140023dd8(puVar2,0x30);
          puVar26 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
          puVar12 = puVar26 + 4;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar12;
        *puVar26 = &PTR_FUN_14a302720;
        puVar26[2] = 0;
        *(undefined1 *)(puVar26 + 3) = 1;
        iVar7 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar7 + 1U) {
          FUN_1448cfae8(param_1 + 0x98,iVar7);
        }
        puVar12 = puVar26 + 2;
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 8) = puVar26;
        FUN_1405f00c8();
        cVar6 = DAT_14ca4d2c9;
        if (DAT_14ca4d2c9 == '\x03') {
          cVar6 = '\x02';
        }
        puVar26[2] = *(undefined8 *)(lVar24 + 0x138d0);
        *(char *)(puVar26 + 3) = cVar6;
        FUN_1405effc4();
        local_158._0_4_ = 0;
        local_158._4_4_ = 0;
        uStack_150 = 0;
        uStack_14c = 0;
        FUN_1448f70da(puVar13,&DAT_14ca55d20,puVar12,&local_158);
        FUN_140069376(param_1);
        param_2 = local_168;
        iVar28 = (int6)(short)((uint)iVar7 >> 0x10);
        uVar27 = CONCAT62(iVar28,0x12);
        if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
           ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
          uVar27 = CONCAT62(iVar28,0x14);
        }
        puVar25 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar26 = puVar25 + 0x3d;
        if (*(undefined8 **)(param_1 + 0x78) < puVar26) {
          FUN_140023dd8(puVar2,0x1f0);
          puVar25 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar26 = puVar25 + 0x3d;
        }
        *puVar2 = (ulonglong)puVar26;
        uStack_150 = (undefined4)DAT_14ca55d68;
        uStack_14c = (undefined4)((ulonglong)DAT_14ca55d68 >> 0x20);
        if (DAT_14ca55d68 != 0) {
          LOCK();
          *(int *)(DAT_14ca55d68 + 8) = *(int *)(DAT_14ca55d68 + 8) + 1;
          UNLOCK();
        }
        uStack_148 = 0x4ca55d20;
        local_144[0] = 1;
        local_188 = 2;
        local_158 = puVar12;
        FUN_140068f1a(puVar25,&local_71,&local_158,uVar27 & 0xffffffff);
        *puVar25 = &PTR_FUN_14a302730;
        puVar25[0x37] = &DAT_14ca55d20;
        puVar25[0x38] = puVar12;
        puVar25[0x39] = puVar13;
        puVar25[0x3a] = uVar3;
        puVar25[0x3b] = &DAT_100000001;
        *(undefined4 *)(puVar25 + 0x3c) = 1;
        iVar7 = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = iVar7 + 1U;
        if (*(uint *)(param_1 + 0x174) < iVar7 + 1U) {
          FUN_14470e57a(param_1 + 0x168,iVar7);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar7 * 8) = puVar25;
        *(int *)((longlong)puVar25 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        FUN_140069100(param_1,puVar25);
      }
      puVar2 = local_178;
      if (*(int *)((longlong)local_178 + 0x17c) != local_16c) {
        *(int *)((longlong)local_178 + 0x17c) = local_16c;
        puVar13 = (undefined8 *)(*local_178 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar13 + 3;
        if ((undefined8 *)local_178[1] < puVar12) {
          FUN_140023dd8(local_178,0x20);
          puVar13 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar13 + 3;
        }
        *local_178 = (ulonglong)puVar12;
        *(int *)(local_178 + 0xc) = (int)local_178[0xc] + 1;
        *(undefined8 **)local_178[6] = puVar13;
        local_178[6] = (ulonglong)(puVar13 + 1);
        uVar1 = *(undefined4 *)((longlong)local_178 + 0x17c);
        puVar13[1] = 0;
        *puVar13 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar13 + 2) = uVar1;
      }
      lVar18 = local_160 + 1;
    } while (lVar18 < (int)param_2[1]);
  }
  if (DAT_14ca4e244 < DAT_14ca4d32c) {
    DAT_14ca4e244 = DAT_14ca4d32c;
  }
  if (DAT_14ca4e248 < DAT_14ca4d330) {
    DAT_14ca4e248 = DAT_14ca4d330;
  }
  if (DAT_14ca4e24c < DAT_14ca4d334) {
    DAT_14ca4e24c = DAT_14ca4d334;
  }
  if (DAT_14ca4e240 < DAT_14ca4d328) {
    DAT_14ca4e240 = DAT_14ca4d328;
  }
  _DAT_14ca4d328 = 0;
  _DAT_14ca4d330 = 0;
  if ((local_70 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405efea2 FUN_1405efea2 body=289 status=ok
// SIG undefined FUN_1405efea2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1405efea2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4d448) {
    FUN_144b3d300(&DAT_14ca4d448);
    if (DAT_14ca4d448 == -1) {
      FUN_1405effc4();
      FUN_14572968e();
      FUN_140db5666(&DAT_14ca4d3a0,0,&DAT_14ca4d338,L"FShaderPrintUploadCS",
                    L"/Engine/Private/ShaderPrintDraw.usf",L"UploadCS",5,1,FUN_1472ea83a,
                    FUN_1472ea7da,&LAB_1472ea7b0,&LAB_1472ea7ac,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca55d20);
      _DAT_14ca4d3a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14303e96e);
      _Init_thread_footer(&DAT_14ca4d448);
    }
  }
  return &DAT_14ca4d3a0;
}



// FUNCTION 1405effc4 FUN_1405effc4 body=258 status=ok
// SIG undefined FUN_1405effc4(void)

void FUN_1405effc4(void)

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
              0x110) < DAT_14ca55da0) {
    FUN_144b3d300(&DAT_14ca55da0);
    if (DAT_14ca55da0 == -1) {
      FUN_1457299d2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x182;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca55d20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14305d7a5);
      _Init_thread_footer(&DAT_14ca55da0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f00c8 FUN_1405f00c8 body=423 status=ok
// SIG undefined FUN_1405f00c8(void)

undefined * FUN_1405f00c8(void)

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
              0x110) < DAT_14ca4d308) {
    FUN_144b3d300(&DAT_14ca4d308);
    if (DAT_14ca4d308 == -1) {
      FUN_1457297d8(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"ShaderPrintData";
      local_78 = L"FShaderPrintCommonParameters";
      local_50 = 0x50;
      local_58 = 0x1d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4d288,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14303e84c);
      _Init_thread_footer(&DAT_14ca4d308);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca4d288;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f0270 FUN_1405f0270 body=2188 status=ok
// SIG undefined FUN_1405f0270(void)

char * FUN_1405f0270(char *param_1,longlong param_2,char *param_3,longlong param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 uVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  byte bVar20;
  char *pcVar21;
  undefined8 *puVar22;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  ulonglong *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_99;
  undefined8 local_98;
  longlong lStack_90;
  undefined *local_88;
  ulonglong local_48;
  int6 iVar19;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0x70] = '\0';
  param_1[0x71] = '\0';
  param_1[0x72] = '\0';
  param_1[0x73] = '\0';
  param_1[0x74] = '\0';
  param_1[0x75] = '\0';
  param_1[0x76] = '\0';
  param_1[0x77] = '\0';
  *param_1 = *param_3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_3 + 0xc);
  pcVar16 = param_3 + 0x14;
  pcVar21 = param_1 + 0x14;
  for (lVar13 = 0x12; lVar13 != 0; lVar13 = lVar13 + -1) {
    *(undefined4 *)pcVar21 = *(undefined4 *)pcVar16;
    pcVar16 = pcVar16 + 4;
    pcVar21 = pcVar21 + 4;
  }
  param_1[0x5c] = param_3[0x5c];
  FUN_14303e858(param_3,&local_98);
  FUN_14305d836(param_1 + 0x60,&local_98);
  if (*param_3 == '\0') {
    uVar8 = FUN_144735dd8(param_2,DAT_14ca4d250 + 0x10,0);
    *(undefined8 *)(param_1 + 0x68) = uVar8;
    uVar8 = FUN_144735dd8(param_2,DAT_14ca4d250 + 0x10,0);
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    goto LAB_1405f0334;
  }
  bVar20 = 0;
  if ((param_4 != 0) && (0 < *(int *)(DAT_14ca4d1c0 + 4))) {
    bVar20 = *(byte *)(param_4 + 0x2120) ^ 1;
  }
  uVar6 = *(int *)(param_3 + 0x54) * 8 + *(int *)(param_3 + 0x4c) * 4 +
          *(int *)(param_3 + 0x58) * 0xc + 4;
  uVar14 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar14 = DAT_14ca84e48;
  }
  lStack_90 = CONCAT44(lStack_90._4_4_,0x4109);
  local_88 = (undefined *)0x0;
  uVar7 = DAT_14ca84e48;
  if (uVar6 < DAT_14ca84e48) {
    uVar7 = uVar6;
  }
  local_98 = (undefined8 *)CONCAT44(uVar7 + (uVar7 == 0),uVar14 + (uVar14 == 0));
  puVar2 = (ulonglong *)(param_2 + 0x70);
  uVar17 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar9 = uVar17 + 0x150;
  local_b8 = puVar2;
  if (*(ulonglong *)(param_2 + 0x78) < uVar9) {
    FUN_140023dd8(puVar2,0x160);
    uVar17 = *puVar2 + 0xf & 0xfffffffffffffff0;
    uVar9 = uVar17 + 0x150;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar9;
  FUN_1456bd266(uVar17,L"ShaderPrint.EntryBuffer",&local_98,bVar20);
  iVar3 = *(int *)(param_2 + 400);
  *(uint *)(param_2 + 400) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
    FUN_144737178(param_2 + 0x188,iVar3);
  }
  puVar2 = local_b8;
  *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar17;
  *(int *)(uVar17 + 0x7c) = *(int *)(param_2 + 400) + -1;
  *(ulonglong *)(param_1 + 0x68) = uVar17;
  if (param_4 == 0) {
    plVar12 = (longlong *)(DAT_14ca4d250 + 0x10);
LAB_1405f0636:
    uVar8 = FUN_144735dd8(param_2,plVar12,0);
    *(undefined8 *)(param_1 + 0x70) = uVar8;
  }
  else {
    plVar12 = (longlong *)(param_4 + 0x20f8);
    if (*(longlong *)(param_4 + 0x20f8) != 0) goto LAB_1405f0636;
    uVar14 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar14 = DAT_14ca84e48;
    }
    uVar7 = *(int *)(param_3 + 0x50) * 3 + 1;
    lStack_90 = CONCAT44(lStack_90._4_4_,0x4109);
    uVar6 = DAT_14ca84e48;
    if (uVar7 < DAT_14ca84e48) {
      uVar6 = uVar7;
    }
    local_88 = (undefined *)0x0;
    local_98 = (undefined8 *)CONCAT44(uVar6 + (uVar6 == 0),uVar14 + (uVar14 == 0));
    uVar17 = *(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar9 = uVar17 + 0x150;
    if (*(ulonglong *)(param_2 + 0x78) < uVar9) {
      FUN_140023dd8(local_b8,0x160);
      uVar17 = *puVar2 + 0xf & 0xfffffffffffffff0;
      uVar9 = uVar17 + 0x150;
    }
    *(ulonglong *)(param_2 + 0x70) = uVar9;
    FUN_1456bd266(uVar17,L"ShaderPrint.StateBuffer",&local_98,0);
    iVar3 = *(int *)(param_2 + 400);
    *(uint *)(param_2 + 400) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x194) < iVar3 + 1U) {
      FUN_144737178(param_2 + 0x188,iVar3);
    }
    puVar2 = local_b8;
    *(ulonglong *)(*(longlong *)(param_2 + 0x188) + (longlong)iVar3 * 8) = uVar17;
    *(int *)(uVar17 + 0x7c) = *(int *)(param_2 + 400) + -1;
    *(ulonglong *)(param_1 + 0x70) = uVar17;
    puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar10 = puVar18 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
      FUN_140023dd8(local_b8,0x48);
      puVar18 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
      puVar10 = puVar18 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar10;
    puVar18[1] = *(undefined8 *)(uVar17 + 8);
    puVar18[2] = 0;
    *(undefined1 *)(puVar18 + 3) = 2;
    *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar18 + 5) = 0;
    *puVar18 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar18 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
    puVar18[7] = uVar17;
    iVar3 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    FUN_1405bfba3(param_2,puVar18,0,2);
    plVar11 = (longlong *)FUN_1449609de(param_2,uVar17);
    puVar10 = (undefined8 *)*plVar11;
    puVar18 = (undefined8 *)*plVar12;
    if (puVar18 != puVar10) {
      *plVar12 = (longlong)puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
        UNLOCK();
      }
      if (puVar18 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar18 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
  }
  uVar8 = *(undefined8 *)
           (&DAT_14ca8c1f0 +
           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_145f92b1e();
  FUN_1448e935e(uVar8,&local_98,&DAT_14ca4d5f0,0);
  FUN_145f92b1e();
  puVar2 = local_b8;
  local_b0 = local_98;
  local_a8 = lStack_90;
  puVar18 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar10 = puVar18 + 4;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_b8,0x30);
    puVar18 = (undefined8 *)(*puVar2 + 0xf & 0xfffffffffffffff0);
    puVar10 = puVar18 + 4;
  }
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  *puVar18 = &PTR_FUN_14a3031f0;
  puVar18[2] = 0;
  iVar3 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar3);
  }
  puVar2 = local_b8;
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar3 * 8) = puVar18;
  lVar13 = *(longlong *)(param_1 + 0x68);
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar22 + 8;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_b8,0x48);
    puVar22 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar22 + 8;
  }
  puVar18 = puVar18 + 2;
  *(undefined8 **)(param_2 + 0x70) = puVar10;
  puVar22[1] = *(undefined8 *)(lVar13 + 8);
  puVar22[2] = 0;
  *(undefined1 *)(puVar22 + 3) = 2;
  *(undefined8 *)((longlong)puVar22 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar22 + 5) = 0;
  *puVar22 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar22 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar22 + 0x32) = 0;
  puVar22[7] = lVar13;
  iVar3 = *(int *)(param_2 + 0x1a0);
  *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_2 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
  *puVar18 = puVar22;
  FUN_145f92d8c();
  local_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  FUN_1448f70da(local_b0,&DAT_14ca55e30,puVar18);
  FUN_145f92d8c();
  FUN_140069376(param_2);
  puVar2 = local_b8;
  iVar19 = (int6)(short)((uint)iVar3 >> 0x10);
  uVar15 = (undefined4)CONCAT62(iVar19,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar15 = (undefined4)CONCAT62(iVar19,4);
  }
  puVar22 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar10 = puVar22 + 0x3a;
  if (*(undefined8 **)(param_2 + 0x78) < puVar10) {
    FUN_140023dd8(local_b8,0x1d8);
    puVar22 = (undefined8 *)(*puVar2 + 7 & 0xfffffffffffffff8);
    puVar10 = puVar22 + 0x3a;
  }
  *local_b8 = (ulonglong)puVar10;
  lStack_90 = DAT_14ca55e78;
  if (DAT_14ca55e78 != 0) {
    LOCK();
    *(int *)(DAT_14ca55e78 + 8) = *(int *)(DAT_14ca55e78 + 8) + 1;
    UNLOCK();
  }
  local_88 = &DAT_14ca55e30;
  local_c8 = 2;
  local_98 = puVar18;
  FUN_140068f1a(puVar22,&local_99,&local_98,uVar15);
  *puVar22 = &PTR_FUN_14a303200;
  puVar22[0x37] = puVar18;
  puVar22[0x38] = local_b0;
  puVar22[0x39] = local_a8;
  iVar3 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar3 * 8) = puVar22;
  *(int *)((longlong)puVar22 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar22);
  if (param_4 == 0) goto LAB_1405f0334;
  if (*(int *)(DAT_14ca4d1c0 + 4) < 1) {
    if ((*(byte *)(param_4 + 0x2120) & 1) == 0) goto LAB_1405f0334;
  }
  else {
    if ((*(byte *)(param_4 + 0x2120) & 1) != 0) goto LAB_1405f0334;
    plVar12 = (longlong *)FUN_1449609de(param_2,*(undefined8 *)(param_1 + 0x68));
    puVar10 = (undefined8 *)*plVar12;
    puVar18 = *(undefined8 **)(param_4 + 0x2100);
    if (puVar18 != puVar10) {
      *(undefined8 **)(param_4 + 0x2100) = puVar10;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar10 + 1) = *(int *)(puVar10 + 1) + 1;
        UNLOCK();
      }
      if (puVar18 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar18 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
    *(undefined8 *)(param_4 + 0x2118) = *(undefined8 *)(param_3 + 0x30);
    uVar15 = *(undefined4 *)(param_3 + 0x24);
    uVar4 = *(undefined4 *)(param_3 + 0x28);
    uVar5 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_4 + 0x2108) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_4 + 0x210c) = uVar15;
    *(undefined4 *)(param_4 + 0x2110) = uVar4;
    *(undefined4 *)(param_4 + 0x2114) = uVar5;
    *(undefined1 *)(param_4 + 0x2120) = 1;
    if (0 < *(int *)(DAT_14ca4d1c0 + 4)) goto LAB_1405f0334;
  }
  puVar10 = *(undefined8 **)(param_4 + 0x2100);
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined8 *)(param_4 + 0x2100) = 0;
    LOCK();
    piVar1 = (int *)(puVar10 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  *(undefined8 *)(param_4 + 0x2118) = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar15 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_4 + 0x2108) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)(param_4 + 0x210c) = uVar15;
  *(undefined4 *)(param_4 + 0x2110) = uVar4;
  *(undefined4 *)(param_4 + 0x2114) = uVar5;
  *(undefined1 *)(param_4 + 0x2120) = 0;
LAB_1405f0334:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405f0afe FUN_1405f0afe body=70 status=ok
// SIG undefined FUN_1405f0afe(void)

undefined8 * FUN_1405f0afe(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac66330;
  if (param_1[0x83] != 0) {
    FUN_1400020a8();
  }
  FUN_1405f0b44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405f0b44 FUN_1405f0b44 body=154 status=ok
// SIG undefined FUN_1405f0b44(void)

void FUN_1405f0b44(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac66420;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x3e4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  }
  FUN_1405f0bde(param_1 + 10);
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405f0bde FUN_1405f0bde body=61 status=ok
// SIG undefined FUN_1405f0bde(void)

void FUN_1405f0bde(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x380);
  if (*(longlong *)(param_1 + 0x380) == 0) {
    lVar1 = param_1;
  }
  FUN_1448090f0(lVar1,*(undefined4 *)(param_1 + 0x388));
  if (*(longlong *)(param_1 + 0x380) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405f0c1c FUN_1405f0c1c body=35 status=ok
// SIG undefined FUN_1405f0c1c(void)

undefined8 FUN_1405f0c1c(undefined8 param_1,undefined8 *param_2)

{
  FUN_1405f0c40(DAT_14cb84f20,param_1,*param_2);
  return param_1;
}



// FUNCTION 1405f0c40 FUN_1405f0c40 body=181 status=ok
// SIG undefined FUN_1405f0c40(void)

void FUN_1405f0c40(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_3 != 0) && (*(int *)(param_1 + 0x398) != *(int *)(param_1 + 0x3c4))) {
    uVar3 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    lVar2 = param_1 + 0x3c8;
    if (*(longlong *)(param_1 + 0x3d0) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x3d0);
    }
    iVar4 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x3d8) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) +
                             ((int)param_3 << 0x10 | (uint)(ushort)param_3) +
                             (uVar3 << 0x13 | uVar3) + (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar4 != -1) {
      lVar2 = 0;
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x390) + (longlong)iVar4 * 0x18);
        if (*plVar1 == param_3) {
          lVar2 = 0;
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            lVar2 = plVar1[1];
          }
          break;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
      goto LAB_1405f0ce3;
    }
  }
  lVar2 = 0;
LAB_1405f0ce3:
  *param_2 = lVar2;
  return;
}



// FUNCTION 1405f0cf6 FUN_1405f0cf6 body=51 status=ok
// SIG undefined FUN_1405f0cf6(void)

longlong FUN_1405f0cf6(longlong param_1,undefined8 *param_2)

{
  undefined2 *puVar1;
  
  *(undefined8 *)(param_1 + 4) = 0;
  if (*(int *)(param_2 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_2;
  }
  FUN_1405f0d29(param_1,puVar1);
  return param_1;
}



// FUNCTION 1405f0d29 FUN_1405f0d29 body=258 status=ok
// SIG undefined FUN_1405f0d29(void)

undefined1 FUN_1405f0d29(undefined8 *param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 *local_50;
  code *local_48;
  int **local_40;
  int local_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &local_34;
  local_34 = 0;
  local_40 = &local_58;
  local_48 = FUN_14000199a;
  local_50 = param_1;
  if (DAT_14c947fe0 == 0) {
    lVar3 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar3);
    DAT_14c947fe0 = lVar3;
  }
  if ((param_2 == (short *)0x0) || (*param_2 == 0)) {
    local_28 = DAT_14c948620;
    local_30 = DAT_14c948618;
    iVar1 = *local_58;
    *local_58 = iVar1 + 1;
    uVar2 = iVar1 < 1;
    puVar4 = &DAT_14c948618;
    if (iVar1 < 1) {
      puVar4 = &local_30;
    }
    *(undefined4 *)(local_50 + 1) = *(undefined4 *)(puVar4 + 1);
    *local_50 = *puVar4;
  }
  else {
    uVar2 = FUN_1446df218(DAT_14c947fe0,param_2,param_3,&local_48);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f0e38 FUN_1405f0e38 body=9 status=ok
// SIG undefined FUN_1405f0e38(void)

byte FUN_1405f0e38(longlong param_1)

{
  return *(byte *)(param_1 + 0x155) & 1;
}



// FUNCTION 1405f0e42 FUN_1405f0e42 body=90 status=ok
// SIG undefined FUN_1405f0e42(void)

void FUN_1405f0e42(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((*(byte *)(param_1 + 0x155) & 1) != (byte)param_2) {
    *(byte *)(param_1 + 0x155) = *(byte *)(param_1 + 0x155) & 0xfe | (byte)param_2;
    if ((longlong)*(int *)(param_1 + 0x1c0) != 0) {
      lVar8 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x1b8) + 8 + lVar8) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x1b8) + lVar8) != 0)) {
          iVar1 = *(int *)(param_1 + 0x1cc);
          *(int *)(param_1 + 0x1cc) = iVar1 + 1;
          uVar6 = (ulonglong)*(int *)(param_1 + 0x1c0);
          if ((longlong)uVar6 < 1) {
            *(int *)(param_1 + 0x1cc) = iVar1;
            return;
          }
          bVar7 = false;
          do {
            lVar8 = uVar6 * 0x10 + -8;
            uVar9 = uVar6;
            while (((lVar2 = *(longlong *)(param_1 + 0x1b8), *(int *)(lVar2 + lVar8) != 0 &&
                    (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
                   (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2), cVar5 != '\0'))) {
              lVar8 = lVar8 + -0x10;
              bVar4 = uVar9 < 2;
              uVar9 = uVar9 - 1;
              if (bVar4) {
                *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + -1;
                if (!bVar7) {
                  return;
                }
                goto LAB_14089859c;
              }
            }
            uVar6 = uVar9 - 1;
            bVar7 = true;
          } while (1 < uVar9);
          *(int *)(param_1 + 0x1cc) = *(int *)(param_1 + 0x1cc) + -1;
LAB_14089859c:
          FUN_14474d06a((longlong *)(param_1 + 0x1b8),0);
          return;
        }
        lVar8 = lVar8 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x1c0) * 0x10 != lVar8);
    }
  }
  return;
}



// FUNCTION 1405f0e9c FUN_1405f0e9c body=320 status=ok
// SIG undefined FUN_1405f0e9c(void)

undefined4 * FUN_1405f0e9c(undefined4 *param_1,code *param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cac9ca8 == 0) {
    local_50 = &local_28;
    local_28 = FUN_141030f22;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_1478c0a72;
    local_60 = &LAB_1417b2375;
    local_68 = L"Engine";
    local_70 = 0x1000000000;
    local_78 = 0x10000004;
    local_80 = 8;
    local_88 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
  }
  local_30 = DAT_14cac9ca8;
  if ((DAT_14cac9ca8 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_28 = param_2;
  FUN_140244552(param_1 + 2,&local_28,&local_30);
  FUN_14059e512(param_1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f0fde FUN_1405f0fde body=155 status=ok
// SIG undefined FUN_1405f0fde(void)

void FUN_1405f0fde(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  local_28 = &local_40;
  local_38 = param_2[1];
  local_30 = FUN_143794266;
  lVar2 = *param_3;
  if (lVar2 != 0) {
    lVar1 = FUN_1409f38dc();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_3;
      goto LAB_1405f1025;
    }
  }
  lVar2 = 0;
LAB_1405f1025:
  FUN_1406d0e12(param_1,lVar2,&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f107a FUN_1405f107a body=1651 status=ok
// SIG undefined FUN_1405f107a(void)

void FUN_1405f107a(longlong *param_1,char param_2)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 uVar14;
  ulonglong uVar15;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((((*(byte *)((longlong)param_1 + 0x65) & 0x18) == 0x10) ||
       ((*(uint *)(param_1 + 1) >> 0x1e & 1) != 0)) || ((*(uint *)(param_1 + 1) & 0x10) != 0)) ||
     ((lVar8 = param_1[4], lVar8 == 0 || ((short)*(undefined4 *)(lVar8 + 8) < 0))))
  goto LAB_1405f136f;
  uVar1 = *(uint *)(lVar8 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) != 0) goto LAB_1405f136f;
  if (DAT_14cae8b20 == 0) {
    local_60 = &local_40;
    local_40 = (code *)&LAB_14355090c;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_147b8e16d;
    local_70 = (code *)&LAB_140810a38;
    local_78 = L"Engine";
    local_80 = 0x800000000;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar8 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1468c5283;
    local_70 = FUN_142809da0;
    local_78 = L"Engine";
    local_80 = 0x400000000;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar6 = param_1[4];
  if (lVar6 == 0) goto LAB_1405f136f;
  iVar5 = *(int *)(lVar8 + 0x38);
  do {
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar5) ||
       (lVar10 = lVar6,
       *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
       lVar8 + 0x30)) {
      lVar10 = 0;
    }
  } while ((lVar10 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
  if ((lVar10 == 0) || (lVar8 = *(longlong *)(lVar10 + 0xc0), lVar8 == 0)) goto LAB_1405f136f;
  cVar4 = (**(code **)(*param_1 + 0x600))(param_1);
  if (cVar4 != '\0') {
    *(byte *)(param_1 + 0x69) = param_2 << 3 | *(byte *)(param_1 + 0x69) & 0xf3 | 4;
    goto LAB_1405f136f;
  }
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0xf3;
  iVar5 = DAT_14cac95e8;
  DAT_14cac95e8 = DAT_14cac95e8 + 1;
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) & 0xfb | param_2 * '\x04';
  *(byte *)((longlong)param_1 + 0x65) = *(byte *)((longlong)param_1 + 0x65) & 0xe7 | 8;
  FUN_1405f1a6a(param_1);
  (**(code **)(*param_1 + 0x4f8))(param_1);
  (**(code **)(*param_1 + 0x360))(param_1);
  DAT_14cac95e8 = iVar5;
  if ((*(byte *)((longlong)param_1 + 0x65) & 4) != 0) {
    FUN_1412f3774(lVar8,param_1,1,1);
  }
  if ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0) {
    if (param_2 == '\0') {
      plVar13 = (longlong *)param_1[0x39];
      if (plVar13 != (longlong *)0x0) {
        lVar8 = (longlong)(int)plVar13[0x44];
        if (lVar8 < 1) {
          if ((DAT_14c76142c != 1) || ((*(byte *)(plVar13 + 0x3f) & 2) == 0)) {
            lVar8 = *plVar13;
            uVar14 = 1;
LAB_1405f143d:
            cVar4 = (**(code **)(lVar8 + 0x508))(plVar13,0,uVar14,0);
            *(byte *)(plVar13 + 0x3f) = *(byte *)(plVar13 + 0x3f) & 0xfd | cVar4 * '\x02';
          }
        }
        else {
LAB_1405f153c:
          lVar8 = *(longlong *)(plVar13[0x43] + -8 + lVar8 * 8);
          *(byte *)(lVar8 + 0x608) = *(byte *)(lVar8 + 0x608) | 2;
          *(undefined4 *)(lVar8 + 0x10) = 3;
          *(undefined4 *)(lVar8 + 200) = 0xffffffff;
        }
      }
    }
    else if ((*(byte *)((longlong)param_1 + 0x62) & 0x40) == 0) {
      cVar4 = *(char *)((longlong)param_1 + 0x66);
      if (cVar4 == '\0') {
        cVar4 = *(char *)((longlong)param_1 + 0x67) + (*(char *)((longlong)param_1 + 0x67) == '\0');
      }
      if (cVar4 == '\x02') {
        plVar13 = (longlong *)param_1[0x39];
        if ((plVar13 != (longlong *)0x0) && (*(char *)((longlong)plVar13 + 0x1fb) == '\x02')) {
LAB_1405f140c:
          lVar8 = (longlong)(int)plVar13[0x44];
          if (0 < lVar8) goto LAB_1405f153c;
          if ((DAT_14c76142c != 1) || ((*(byte *)(plVar13 + 0x3f) & 2) == 0)) {
            lVar8 = *plVar13;
            uVar14 = 0;
            goto LAB_1405f143d;
          }
        }
      }
      else if ((cVar4 != '\x03') &&
              (plVar13 = (longlong *)param_1[0x39], plVar13 != (longlong *)0x0)) goto LAB_1405f140c;
    }
    else if (param_1[0x39] != 0) {
      FUN_144907e2c(param_1[0x39],0,1,0);
    }
  }
  *(byte *)((longlong)param_1 + 100) = *(byte *)((longlong)param_1 + 100) & 0xfb;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 0x10;
  plVar13 = param_1 + 0x6a;
  iVar5 = *(int *)((longlong)param_1 + 0x364);
  *(int *)((longlong)param_1 + 0x364) = iVar5 + 1;
  uVar7 = (ulonglong)(int)param_1[0x6b];
  if ((longlong)uVar7 < 1) {
    *(int *)((longlong)param_1 + 0x364) = iVar5;
  }
  else {
    bVar11 = false;
    do {
      lVar8 = uVar7 * 0x10 + -8;
      uVar15 = uVar7;
      while (((*(int *)(*plVar13 + lVar8) != 0 &&
              (plVar2 = *(longlong **)(*plVar13 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))(), cVar4 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar15 < 2;
        uVar15 = uVar15 - 1;
        if (bVar3) {
          iVar5 = *(int *)((longlong)param_1 + 0x364) + -1;
          *(int *)((longlong)param_1 + 0x364) = iVar5;
          if (bVar11) goto LAB_1405f147c;
          goto LAB_1405f12e7;
        }
      }
      uVar7 = uVar15 - 1;
      bVar11 = true;
    } while (1 < uVar15);
    iVar5 = *(int *)((longlong)param_1 + 0x364) + -1;
    *(int *)((longlong)param_1 + 0x364) = iVar5;
LAB_1405f147c:
    if (iVar5 < 1) {
      iVar5 = (int)param_1[0x6b];
      iVar9 = iVar5;
      if (0 < iVar5) {
        iVar12 = 0;
        do {
          if (((*(int *)(*plVar13 + 8 + (longlong)iVar12 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar13 + (longlong)iVar12 * 0x10),
              plVar2 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar13,iVar12);
            FUN_14005b248(plVar13);
          }
          else {
            iVar12 = iVar12 + 1;
          }
          iVar9 = (int)param_1[0x6b];
        } while (iVar12 < iVar9);
      }
      iVar12 = 2;
      if (2 < iVar9 * 2) {
        iVar12 = iVar9 * 2;
      }
      *(int *)(param_1 + 0x6c) = iVar12;
      if ((iVar12 < iVar5) && (*(int *)((longlong)param_1 + 0x35c) != iVar9)) {
        FUN_14045812c(plVar13);
      }
    }
  }
LAB_1405f12e7:
  FUN_1448a8284(plVar13);
  uVar7 = (ulonglong)DAT_14cae3a18;
  if (0 < (longlong)uVar7) {
    bVar11 = false;
    DAT_14cae3a24 = DAT_14cae3a24 + 1;
    do {
      lVar8 = uVar7 * 0x10 + -8;
      uVar15 = uVar7;
      while (((*(int *)(DAT_14cae3a10 + lVar8) != 0 &&
              (plVar13 = *(longlong **)(DAT_14cae3a10 + -8 + lVar8), plVar13 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar13 + 0x60))(plVar13,param_1), cVar4 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar15 < 2;
        uVar15 = uVar15 - 1;
        if (bVar3) {
          DAT_14cae3a24 = DAT_14cae3a24 + -1;
          if (bVar11) goto LAB_1405f16c1;
          goto LAB_1405f136f;
        }
      }
      uVar7 = uVar15 - 1;
      bVar11 = true;
      if (uVar15 < 2) {
        DAT_14cae3a24 = DAT_14cae3a24 + -1;
LAB_1405f16c1:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
      }
    } while( true );
  }
LAB_1405f136f:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f170c FUN_1405f170c body=80 status=ok
// SIG undefined FUN_1405f170c(void)

void FUN_1405f170c(undefined8 param_1)

{
  undefined1 auStack_48 [44];
  undefined1 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  local_18 = 0;
  FUN_1405f175e();
  FUN_1405f18a8(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f175e FUN_1405f175e body=112 status=ok
// SIG undefined FUN_1405f175e(void)

void FUN_1405f175e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1447210f0();
  if (lVar1 != 0) {
    local_20 = &local_38;
    local_28 = FUN_1435a62bc;
    local_38 = param_1;
    local_30 = param_2;
    FUN_1405f17cf(DAT_14cb0d2b0,lVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f17cf FUN_1405f17cf body=215 status=ok
// SIG undefined FUN_1405f17cf(void)

void FUN_1405f17cf(longlong param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_2 != 0 && param_1 != 0) && ((longlong)*(int *)(param_1 + 0x1150) != 0)) {
    lVar3 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x1148) + lVar3);
      if (*(longlong *)(lVar4 + 0x360) == param_2) {
        if ((lVar4 != 0) && (iVar1 = *(int *)(lVar4 + 0x2b8), (longlong)iVar1 != 0)) {
          lVar3 = *(longlong *)(lVar4 + 0x2b0);
          lVar4 = 0;
          do {
            lVar2 = *(longlong *)(lVar3 + lVar4);
            if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x840), lVar2 != 0)) {
              local_38 = lVar2;
              (*(code *)*param_3)(param_3[1],&local_38);
            }
            lVar4 = lVar4 + 0x10;
          } while ((longlong)iVar1 * 0x10 != lVar4);
        }
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f18a8 FUN_1405f18a8 body=394 status=ok
// SIG undefined FUN_1405f18a8(void)

void FUN_1405f18a8(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  longlong local_150;
  undefined8 local_148;
  undefined8 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar2 = FUN_1405f1a34();
  if (lVar2 != 0) {
    lVar3 = FUN_146f23e78(lVar2);
    if (lVar3 != 0) {
      lVar4 = (**(code **)(*param_1 + 0x498))(param_1);
      if (lVar4 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined4 *)(lVar4 + 0x1d2c);
      }
      if ((*(byte *)((longlong)param_1 + 99) & 8) != 0) {
        FUN_140204954(&local_148,param_1);
        if (local_148._4_4_ == 0 && (int)local_148 == 0) goto LAB_1405f18d7;
      }
      local_48 = (undefined8 *)0x0;
      local_40 = 0x2000000001;
      local_148 = param_1;
      iVar1 = 1;
      do {
        puVar5 = local_48;
        if (local_48 == (undefined8 *)0x0) {
          puVar5 = &local_148;
        }
        lVar4 = puVar5[(longlong)iVar1 + -1];
        local_40 = CONCAT44(local_40._4_4_,iVar1 + -1);
        iVar1 = iVar1 + -1;
        if (lVar4 != 0) {
          FUN_1478c966c(&local_148,lVar4 + 0x1b8);
          if ((*(byte *)(lVar4 + 99) & 8) != 0) {
            FUN_146f33cf2(lVar3,&local_150,lVar4,0);
            if (local_150 != 0) {
              FUN_146f45ada(lVar2,local_150,uVar6);
              if (*(char *)(lVar4 + 0x68) == '\x02') {
                local_158 = 1;
                FUN_146f46156(lVar2,local_150,0);
              }
            }
          }
          iVar1 = (int)local_40;
        }
      } while (iVar1 != 0);
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1405f18d7:
  if ((local_38 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f1a34 FUN_1405f1a34 body=53 status=ok
// SIG undefined FUN_1405f1a34(void)

undefined8 FUN_1405f1a34(longlong param_1)

{
  longlong lVar1;
  
  if (((param_1 != 0) && (lVar1 = FUN_1447210f0(), lVar1 != 0)) &&
     (lVar1 = FUN_1405f1c0c(param_1), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x840);
  }
  return 0;
}



// FUNCTION 1405f1a6a FUN_1405f1a6a body=417 status=ok
// SIG undefined FUN_1405f1a6a(void)

void FUN_1405f1a6a(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar1 = *(int *)(param_1 + 0x238);
  if ((longlong)iVar1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x230);
    lVar7 = 0;
    do {
      plVar3 = *(longlong **)(lVar6 + lVar7);
      uVar8 = 0xf;
      if (*(char *)((longlong)plVar3 + 0x9c) < '\0') {
        uVar8 = 0;
      }
      local_80 = 0;
      local_88 = plVar3;
      if (plVar3 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)plVar3 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar4 = *(int *)(lVar5 + 0x10);
        local_90 = lVar6;
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          local_94 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,local_94);
          }
          LOCK();
          iVar4 = *(int *)(lVar5 + 0x10);
          bVar9 = iVar4 == 0;
          if (bVar9) {
            *(int *)(lVar5 + 0x10) = local_94;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar9) {
            iVar4 = local_94;
          }
        }
        local_80 = CONCAT44(iVar4,uVar2);
        lVar6 = local_90;
      }
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      iVar4 = FUN_1405f21fe((longlong *)(param_1 + 0x220),&local_88);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(*(longlong *)(param_1 + 0x220) + 0x10 + (longlong)iVar4 * 0x28) = uVar8;
      if ((*(byte *)((longlong)plVar3 + 0x9f) & 0x10) == 0) {
        (**(code **)(*plVar3 + 0x380))(plVar3);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f1c0c FUN_1405f1c0c body=647 status=ok
// SIG undefined FUN_1405f1c0c(void)

undefined8 FUN_1405f1c0c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar6 = *(longlong *)(param_1 + 0x20), lVar6 != 0)
      ) && (-1 < (short)*(undefined4 *)(lVar6 + 8))) {
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
        local_40 = &local_28;
        local_28 = (code *)&LAB_14355090c;
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
        local_40 = &local_28;
        local_28 = FUN_1449e2820;
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
        iVar2 = *(int *)(lVar6 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
             (lVar7 = lVar4,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar6 + 0x30)) {
            lVar7 = 0;
          }
        } while ((lVar7 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
        if (lVar7 != 0) {
          lVar6 = *(longlong *)(lVar7 + 0xc0);
          goto LAB_1405f1cec;
        }
      }
    }
  }
  lVar6 = 0;
LAB_1405f1cec:
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892fa8) {
    if (lVar6 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined8 *)(lVar6 + 0x38);
    }
    if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
      return uVar5;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 1405f1eac FUN_1405f1eac body=848 status=ok
// SIG undefined FUN_1405f1eac(void)

void FUN_1405f1eac(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  code **local_120;
  code *local_118;
  code *local_110;
  code *local_108;
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_178;
  (**(code **)(*param_1 + 0x388))(param_1,*(undefined4 *)((longlong)param_1 + 0x6c));
  FUN_144958ee8(param_1,1,0);
  local_40 = (undefined1 *)0x0;
  local_38 = 0x1800000000;
  FUN_1448c0c58(param_1,local_100,0);
  puVar6 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar6 = local_100;
  }
  lVar7 = (longlong)(int)local_38;
  if (lVar7 != 0) {
    lVar8 = 0;
    do {
      plVar3 = *(longlong **)(puVar6 + lVar8);
      if (((*(byte *)((longlong)plVar3 + 0x9c) & 1) != 0) &&
         ((*(byte *)((longlong)plVar3 + 0x9f) & 0x20) == 0)) {
        FUN_1449483a0(plVar3,1);
        (**(code **)(*plVar3 + 0x388))(plVar3);
      }
      lVar8 = lVar8 + 8;
    } while (lVar7 * 8 != lVar8);
  }
  if (((((*(byte *)((longlong)param_1 + 0x62) & 2) != 0) && ((*(uint *)(param_1 + 1) & 0x10) == 0))
      && (lVar7 = param_1[4], lVar7 != 0)) && (-1 < (short)*(undefined4 *)(lVar7 + 8))) {
    uVar1 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        local_120 = &local_108;
        local_108 = (code *)&LAB_14355090c;
        local_110 = FUN_14081d0ea;
        local_118 = FUN_14081d0ea;
        local_128 = &LAB_147b8e16d;
        local_130 = (code *)&LAB_140810a38;
        local_138 = L"Engine";
        local_140 = 0x800000000;
        local_148 = 0x10000000;
        local_150 = 8;
        local_158 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar7 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_120 = &local_108;
        local_108 = FUN_1449e2820;
        local_110 = FUN_14081d0ea;
        local_118 = FUN_14081d0ea;
        local_128 = &LAB_1468c5283;
        local_130 = FUN_142809da0;
        local_138 = L"Engine";
        local_140 = 0x400000000;
        local_148 = 0x10000000;
        local_150 = 8;
        local_158 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar8 = param_1[4];
      if (lVar8 != 0) {
        iVar2 = *(int *)(lVar7 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar2) ||
             (lVar5 = lVar8,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar7 + 0x30)) {
            lVar5 = 0;
          }
        } while ((lVar5 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
        if ((lVar5 != 0) && (*(longlong *)(lVar5 + 0xc0) != 0)) {
          lVar7 = FUN_1478b8264();
          if (lVar7 != 0) {
            FUN_147a91488(lVar7,param_1);
          }
        }
      }
    }
  }
  uVar4 = FUN_14477b072(param_1,DAT_14cac9b70);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,0);
  FUN_1400da9ba(param_1 + 0x5d,param_1);
  *(byte *)((longlong)param_1 + 0x65) = *(byte *)((longlong)param_1 + 0x65) & 0xe7 | 0x10;
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f21fe FUN_1405f21fe body=179 status=ok
// SIG undefined FUN_1405f21fe(void)

int FUN_1405f21fe(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *param_1;
  iVar2 = (int)param_1[1];
  lVar7 = (longlong)iVar2;
  if (lVar7 != 0) {
    uVar5 = 0;
    do {
      if ((*(int *)(lVar6 + 8 + uVar5) == *(int *)(param_2 + 1)) &&
         (*(int *)(lVar6 + 0xc + uVar5) == *(int *)((longlong)param_2 + 0xc))) {
        iVar4 = (int)(uVar5 >> 3) * -0x33333333;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      uVar5 = uVar5 + 0x28;
    } while (lVar7 * 0x28 != uVar5);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1405f22b2(param_1,iVar2);
    lVar6 = *param_1;
  }
  *(undefined4 *)(lVar6 + 0x10 + lVar7 * 0x28) = *(undefined4 *)(param_2 + 2);
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(lVar6 + lVar7 * 0x28);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  *(undefined8 *)(lVar6 + 0x18 + lVar7 * 0x28) = 0;
  *(undefined8 *)(lVar6 + 0x18 + lVar7 * 0x28) = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(lVar6 + 0x20 + lVar7 * 0x28) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(lVar6 + 0x24 + lVar7 * 0x28) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_2[4] = 0;
  return iVar2;
}



// FUNCTION 1405f22b2 FUN_1405f22b2 body=373 status=ok
// SIG undefined FUN_1405f22b2(void)

void FUN_1405f22b2(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405f233b;
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
LAB_1405f233b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1405f2428 FUN_1405f2428 body=177 status=ok
// SIG undefined FUN_1405f2428(void)

undefined8 FUN_1405f2428(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1405f24da();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f24da FUN_1405f24da body=228 status=ok
// SIG undefined FUN_1405f24da(void)

longlong FUN_1405f24da(void)

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
  if (DAT_14cad16f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1479e4287;
    local_40 = FUN_1417bd82e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/Engine",L"LineBatchComponent",&DAT_14cad16f0,&DAT_1479e4286);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad16f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f25c0 FUN_1405f25c0 body=878 status=ok
// SIG undefined FUN_1405f25c0(void)

void FUN_1405f25c0(longlong param_1,code *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  uint local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  code *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_48 = param_2;
  if ((param_2 == (code *)0x0) || (DAT_14c950c29 == '\0')) {
    FUN_141200e52(param_1 + 0x20,&local_48);
    if (param_2 == (code *)0x0) {
      FUN_140b506dc(0,*(undefined8 *)(param_1 + 0x30),0);
      goto LAB_1405f274a;
    }
  }
  else {
    FUN_1456cec3c(param_2);
    FUN_141200e52(param_1 + 0x20,&local_48);
  }
  if (DAT_14cac7648 == 0) {
    local_80 = &local_48;
    local_48 = FUN_144a7958c;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_143242436;
    local_88 = &LAB_14789ef1f;
    local_90 = &LAB_1417b008f;
    local_98 = L"Engine";
    local_a0 = 0x8000000000;
    local_a8 = 0x10000004;
    local_b0 = 0x10;
    local_b8 = CONCAT44(local_b8._4_4_,0x2b0);
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  if (((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
      (*(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) &&
     (*(longlong *)(param_2 + 0x120) == 0)) {
    local_48 = (code *)*param_3;
    uStack_40 = param_3[1];
    local_38 = param_3[2];
    uStack_30 = param_3[3];
    local_68 = param_3[4];
    uStack_60 = param_3[5];
    local_58 = param_3[6];
    local_b0 = local_b0 & 0xffffff00;
    local_b8 = 0;
    FUN_144927ad4(param_2,&local_68,&local_48,0);
    local_48 = (code *)param_3[8];
    uStack_40 = param_3[9];
    local_38 = param_3[10];
    if (*(code **)(*(longlong *)param_2 + 0x478) == FUN_14028a216) {
      FUN_14028a216(param_2);
    }
    else {
      (**(code **)(*(longlong *)param_2 + 0x478))(param_2,&local_48);
    }
  }
  FUN_140b506dc(param_2,*(undefined8 *)(param_1 + 0x30),0);
  if (*(char *)(param_1 + 0x40) != '\0') {
    lVar3 = FUN_14081cebe();
    iVar1 = *(int *)(lVar3 + 0x38);
    if ((iVar1 <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        lVar3 + 0x30)) {
      (**(code **)(*(longlong *)param_2 + 0xa18))
                (param_2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
    }
  }
  if (DAT_14cad3688 == 0) {
    local_80 = &local_48;
    local_48 = FUN_144b223ce;
    local_70 = FUN_14081d0ea;
    local_78 = (code *)&LAB_1417963e0;
    local_88 = &LAB_147a2f4c9;
    local_90 = &LAB_1400ea6f8;
    local_98 = L"Engine";
    local_a0 = 0x200000000000;
    local_a8 = 0x10000004;
    local_b0 = 0x10;
    local_b8 = CONCAT44(local_b8._4_4_,0x720);
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
  }
  if ((*(int *)(DAT_14cad3688 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8) == DAT_14cad3688 + 0x30)) {
    param_2[0x66c] = (code)((byte)param_2[0x66c] | 0x50);
  }
LAB_1405f274a:
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x218);
  (**(code **)(*plVar2 + 0x390))(plVar2,0);
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f2930 FUN_1405f2930 body=123 status=ok
// SIG undefined FUN_1405f2930(void)

void FUN_1405f2930(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14479d316(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_140496560(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1405f29ac FUN_1405f29ac body=809 status=ok
// SIG undefined FUN_1405f29ac(void)

void FUN_1405f29ac(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 *local_40;
  longlong *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 == 0) {
    lVar3 = FUN_1405f2428(DAT_14c951640);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x40) = lVar3;
    *(byte *)(lVar3 + 0x658) = *(byte *)(lVar3 + 0x658) & 0xfe;
    lVar3 = *(longlong *)(param_1 + 0x40);
  }
  if ((*(byte *)(lVar3 + 0x9c) & 1) == 0) {
    FUN_140b506dc(lVar3,param_1,param_3);
  }
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 == 0) {
    lVar3 = FUN_1405f2428(DAT_14c951640);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x48) = lVar3;
    *(byte *)(lVar3 + 0x658) = *(byte *)(lVar3 + 0x658) & 0xfe;
    lVar3 = *(longlong *)(param_1 + 0x48);
  }
  if ((*(byte *)(lVar3 + 0x9c) & 1) == 0) {
    FUN_140b506dc(lVar3,param_1,param_3);
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 == 0) {
    lVar3 = FUN_1405f2428(DAT_14c951640);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *(longlong *)(param_1 + 0x50) = lVar3;
    *(byte *)(lVar3 + 0x658) = *(byte *)(lVar3 + 0x658) & 0xfe;
    lVar3 = *(longlong *)(param_1 + 0x50);
  }
  if ((*(byte *)(lVar3 + 0x9c) & 1) == 0) {
    FUN_140b506dc(lVar3,param_1,param_3);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cb10400) && (FUN_144b3d300(&DAT_14cb10400), DAT_14cb10400 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    DAT_14cb103f8 =
         (longlong *)
         (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.PhysicsField.EnableField",1);
    _Init_thread_footer(&DAT_14cb10400);
  }
  if ((((DAT_14cb103f8 != (longlong *)0x0) &&
       (iVar2 = (**(code **)(*DAT_14cb103f8 + 0xb0))(), iVar2 == 1)) &&
      (*(longlong *)(param_1 + 0x218) != 0)) &&
     ((&DAT_14ca814b8)
      [(ulonglong)
       *(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(*(longlong *)(param_1 + 0x218) + 8) * 2) *
       0xf] != 1)) {
    lVar3 = *(longlong *)(param_1 + 0x288);
    if (lVar3 == 0) {
      lVar3 = FUN_147da9d83(DAT_14c951640);
      if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar3);
      }
      *(longlong *)(param_1 + 0x288) = lVar3;
    }
    if ((*(byte *)(lVar3 + 0x9c) & 1) == 0) {
      FUN_140b506dc(lVar3,param_1,param_3);
    }
  }
  if (param_2 == '\0') {
    if (0 < *(int *)(param_1 + 0x198)) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + lVar3 * 8);
        lVar4 = FUN_1405d1c86(lVar1);
        if ((lVar4 == 0) || ((*(byte *)(lVar1 + 0x240) & 0x20) != 0)) {
          FUN_14621b55a(lVar1,0,param_3);
          plVar5 = (longlong *)FUN_140083894();
          (**(code **)(*plVar5 + 0x48))(plVar5);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(param_1 + 0x198));
    }
  }
  else {
    FUN_14621b55a(*(undefined8 *)(param_1 + 0x30),0,param_3);
  }
  local_30 = 0;
  local_38 = &local_48;
  local_40 = &LAB_1437942aa;
  local_48 = param_1;
  FUN_1405f0fde(param_1 + 0x870);
  FUN_1414514e6(param_1,0,0);
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f2cd6 FUN_1405f2cd6 body=1390 status=ok
// SIG undefined FUN_1405f2cd6(void)

void FUN_1405f2cd6(longlong *param_1,longlong param_2,char param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_d8 [39];
  char local_b1;
  ulonglong local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_90;
  uint local_88;
  longlong local_80 [2];
  LARGE_INTEGER local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  QueryPerformanceCounter(local_70);
  if (param_3 != '\0') {
    *(undefined4 *)(param_1 + 0x126) = 0;
    param_1[0xda] = 0;
    param_1[0xdb] = 0;
    param_1[0xdc] = 0;
    param_1[0xdd] = 0;
  }
  local_b1 = param_3;
  FUN_140056680(local_70,&DAT_149dfb77a);
  FUN_140056680(local_80,&DAT_149dfb77a);
  if (0 < *(int *)(param_2 + 0x50)) {
    lVar12 = 8;
    lVar13 = 0;
    do {
      FUN_1400020e8(local_70,&DAT_149e1423e,1);
      iVar3 = *(int *)(*(longlong *)(param_2 + 0x48) + lVar12);
      iVar14 = iVar3 + -1;
      if (iVar3 == 0) {
        iVar14 = 0;
      }
      FUN_1400020e8(local_70,*(undefined8 *)(*(longlong *)(param_2 + 0x48) + -8 + lVar12),iVar14);
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0x10;
    } while (lVar13 < *(int *)(param_2 + 0x50));
  }
  lVar12 = FUN_14045d4ce(param_2,&DAT_149ec90e4,0);
  if (lVar12 == 0) {
    FUN_1405f35b2(param_1 + 0xb7,param_2);
  }
  FUN_1405f29ac(param_1,1,param_4);
  if (((-1 < *(char *)((longlong)param_1 + 0x154)) || (param_1[6] == 0)) ||
     (*(int *)(param_1[6] + 0xa8) == 0)) {
    plVar10 = (longlong *)param_1[0x2d];
    if (plVar10 != (longlong *)0x0) {
      if (param_1[6] == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(param_1[6] + 0x2b0);
      }
      (**(code **)(*plVar10 + 0x2c8))(plVar10,uVar11);
    }
    if (0 < (int)param_1[0x33]) {
      lVar12 = 0;
      do {
        FUN_1417dd662(*(undefined8 *)(param_1[0x32] + lVar12 * 8));
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_1[0x33]);
    }
    *(byte *)((longlong)param_1 + 0x155U) = *(byte *)((longlong)param_1 + 0x155U) | 0x10;
    *(byte *)((longlong)param_1 + 0x154U) = *(byte *)((longlong)param_1 + 0x154U) | 0x80;
    if (((param_1 != (longlong *)0x0) && (DAT_14cb0d2b0 != (longlong *)0x0)) &&
       (iVar3 = FUN_14490d72a(param_1), iVar3 - 1U < 2)) {
      (**(code **)(*DAT_14cb0d2b0 + 0x458))(DAT_14cb0d2b0,param_1);
    }
    plVar10 = (longlong *)param_1[0x2e];
    if ((plVar10 != (longlong *)0x0) && ((*(byte *)((longlong)plVar10 + 100) & 2) == 0)) {
      FUN_140c50e9c(&local_90,param_2 + 0x28,1);
      (**(code **)(*plVar10 + 0x698))(plVar10,&local_90,local_70,local_80);
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    if (0 < (int)param_1[0x33]) {
      lVar12 = 0;
      do {
        FUN_14355247c(*(undefined8 *)(param_1[0x32] + lVar12 * 8),0);
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_1[0x33]);
    }
    plVar10 = param_1;
    FUN_14375df50(DAT_14cb0d2b0,&local_90,param_1);
    uVar6 = (ulonglong)(int)local_88;
    if (-1 < (longlong)uVar6) {
      uVar5 = *(uint *)(local_90 + 1);
      uVar8 = (ulonglong)uVar5;
      if ((int)local_88 < (int)uVar5) {
        uVar7 = uVar6;
        uVar4 = local_88;
        if (*(longlong *)(*local_90 + uVar6 * 8) == 0) {
          do {
            uVar9 = uVar8;
            if ((int)uVar5 <= (int)uVar7 + 1) goto LAB_1405f2f7b;
            uVar6 = uVar7 + 1;
            lVar12 = uVar7 * 8;
            uVar7 = uVar6;
          } while (*(longlong *)(*local_90 + 8 + lVar12) == 0);
          uVar4 = (uint)uVar6;
        }
        uVar8 = uVar6 & 0xffffffff;
        uVar9 = (ulonglong)uVar4;
LAB_1405f2f7b:
        uVar6 = uVar8;
        if ((int)uVar8 < 0) goto LAB_1405f30a5;
      }
      else {
        uVar9 = (ulonglong)local_88;
      }
      while ((int)uVar6 < (int)local_90[1]) {
        lVar12 = FUN_140334a94(*(undefined8 *)(*local_90 + (uVar6 & 0xffffffff) * 8),param_1);
        if (lVar12 != 0) {
          local_a8 = 0;
          uStack_a0 = 0;
          if (1 < (int)param_1[0x33]) {
            lVar13 = 1;
            do {
              uVar6 = uStack_a0;
              lVar2 = *(longlong *)(param_1[0x32] + lVar13 * 8);
              lVar15 = (longlong)(int)uStack_a0;
              uVar5 = (int)uStack_a0 + 1;
              uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
              if (uStack_a0._4_4_ < uVar5) {
                FUN_147bd42de(&local_a8,uVar6 & 0xffffffff);
              }
              puVar1 = (ulonglong *)(local_a8 + lVar15 * 0x18);
              uVar6 = CONCAT71((int7)((ulonglong)plVar10 >> 8),*(undefined1 *)(lVar2 + 0x240)) &
                      0xffffffffffffff20;
              FUN_14049cadc(puVar1,lVar2,CONCAT71((int7)(uVar6 >> 8),(byte)uVar6 >> 5),0);
              plVar10 = (longlong *)*puVar1;
              FUN_14098f2e8(lVar12,&local_b0,plVar10);
              *puVar1 = local_b0;
              lVar13 = lVar13 + 1;
            } while (lVar13 < (int)param_1[0x33]);
            if (0 < (int)uStack_a0) {
              FUN_147c9c096(lVar12,&local_a8);
            }
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
          }
        }
        iVar3 = (int)uVar9;
        do {
          if (iVar3 < -1) goto LAB_1405f30a5;
          iVar14 = (int)uVar9;
          uVar5 = iVar14 + 1;
          uVar9 = (ulonglong)uVar5;
        } while (((int)uVar5 < (int)local_90[1]) &&
                (plVar10 = (longlong *)(ulonglong)uVar5,
                *(longlong *)(*local_90 + (longlong)plVar10 * 8) == 0));
        uVar6 = uVar9;
        uVar9 = (ulonglong)uVar5;
        if (iVar14 < -1) break;
      }
    }
LAB_1405f30a5:
    *(byte *)((longlong)param_1 + 0x155U) = *(byte *)((longlong)param_1 + 0x155U) & 0xef;
  }
  if (0 < (int)param_1[0x33]) {
    lVar12 = 0;
    do {
      FUN_143551d30(*(undefined8 *)(param_1[0x32] + lVar12 * 8));
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x33]);
    if (1 < (int)param_1[0x33]) {
      lVar12 = 1;
      do {
        lVar13 = *(longlong *)(param_1[0x32] + lVar12 * 8);
        *(byte *)(lVar13 + 0x240) = *(byte *)(lVar13 + 0x240) & 0x7f;
        *(byte *)(lVar13 + 0x241) = *(byte *)(lVar13 + 0x241) & 0xe6;
        *(undefined1 *)(lVar13 + 0x3c8) = 0;
        *(undefined4 *)(lVar13 + 0x3cc) = 0;
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_1[0x33]);
    }
  }
  if (DAT_14cb0d2b0[0x184] != 0) {
    plVar10 = *(longlong **)(DAT_14cb0d2b0[0x184] + 0x40);
    if ((DAT_14c950c29 == '\x01') && (plVar10 != (longlong *)0x0)) {
      FUN_1456cec3c(plVar10);
    }
    else if (plVar10 == (longlong *)0x0) goto LAB_1405f3155;
    (**(code **)(*plVar10 + 0x2f0))(plVar10,0);
  }
LAB_1405f3155:
  local_88 = CONCAT31(local_88._1_3_,local_b1);
  local_90 = param_1;
  FUN_143794abe(param_1 + 0xf4,&local_90);
  FUN_143794abe(&DAT_14cb10950,&local_90);
  if ((longlong *)param_1[0x2d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x2d] + 0x2c0))();
  }
  plVar10 = (longlong *)param_1[0x30];
  if (plVar10 != (longlong *)0x0) {
    (**(code **)(*plVar10 + 0x2a0))(plVar10,local_b1);
  }
  if (0 < (int)param_1[0x33]) {
    lVar12 = 0;
    do {
      uVar11 = *(undefined8 *)(param_1[0x32] + lVar12 * 8);
      plVar10 = (longlong *)FUN_140083894();
      (**(code **)(*plVar10 + 0x48))(plVar10,uVar11);
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)param_1[0x33]);
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0].QuadPart != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f3246 FUN_1405f3246 body=22 status=ok
// SIG undefined FUN_1405f3246(void)

undefined8 FUN_1405f3246(undefined8 param_1)

{
  FUN_1449fb060();
  return param_1;
}



// FUNCTION 1405f325c FUN_1405f325c body=221 status=ok
// SIG undefined FUN_1405f325c(void)

longlong FUN_1405f325c(void)

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
  if (DAT_14caca460 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478ca1a9;
    local_40 = &LAB_1458bebbe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xe0;
    FUN_14081cfa3(L"/Script/Engine",L"AvoidanceManager",&DAT_14caca460,FUN_14639ff20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caca460;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f333a FUN_1405f333a body=221 status=ok
// SIG undefined FUN_1405f333a(void)

longlong FUN_1405f333a(void)

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
  if (DAT_14caf7c80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147c86cbf;
    local_40 = FUN_1463f6619;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsCollisionHandler",&DAT_14caf7c80,&DAT_147c86cbe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf7c80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f3418 FUN_1405f3418 body=145 status=ok
// SIG undefined FUN_1405f3418(void)

void FUN_1405f3418(longlong param_1)

{
  if ((*(byte **)(param_1 + 0x20) != (byte *)0x0) && ((**(byte **)(param_1 + 0x20) & 1) != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cb0c040) {
      FUN_144b3d300(&DAT_14cb0c040);
      if (DAT_14cb0c040 == -1) {
        FUN_145e17f72(&DAT_14cb0bff0);
        atexit(FUN_14374ca90);
        _Init_thread_footer(&DAT_14cb0c040);
      }
    }
    FUN_1402eb48e(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28),param_1);
    **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) & 0xfe;
  }
  return;
}



// FUNCTION 1405f34aa FUN_1405f34aa body=262 status=ok
// SIG undefined FUN_1405f34aa(void)

void FUN_1405f34aa(longlong *param_1,undefined8 param_2,undefined2 *param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  undefined2 local_58 [4];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar6 = false;
    do {
      lVar7 = uVar5 * 0x10 + -8;
      uVar8 = uVar5;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0))) {
        local_58[0] = *param_3;
        local_50 = *(longlong *)(param_3 + 4);
        if ((local_50 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,local_58);
        if (cVar4 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar3 = uVar8 < 2;
        uVar8 = uVar8 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar6) goto LAB_1405f357d;
          goto LAB_1405f3568;
        }
      }
      uVar5 = uVar8 - 1;
      bVar6 = true;
    } while (1 < uVar8);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1405f3568:
    FUN_14474d06a(param_1,0);
  }
LAB_1405f357d:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f35b2 FUN_1405f35b2 body=413 status=ok
// SIG undefined FUN_1405f35b2(void)

undefined8 * FUN_1405f35b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == param_2) {
    param_1[4] = param_2[4];
    FUN_140bee9ec(param_1 + 9,param_2 + 9);
  }
  else {
    iVar1 = *(int *)(param_2 + 1);
    pvVar2 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 3);
    pvVar2 = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 2,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
      }
    }
    param_1[4] = param_2[4];
    iVar1 = *(int *)(param_2 + 6);
    pvVar2 = (void *)param_2[5];
    *(int *)(param_1 + 6) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x34) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x34) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 5,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
      }
    }
    iVar1 = *(int *)(param_2 + 8);
    pvVar2 = (void *)param_2[7];
    *(int *)(param_1 + 8) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x44) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x44) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 7,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
      }
    }
    FUN_140bee9ec(param_1 + 9,param_2 + 9);
    iVar1 = *(int *)(param_2 + 0xc);
    pvVar2 = (void *)param_2[0xb];
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 100) == 0) {
      *(undefined4 *)((longlong)param_1 + 100) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0xb,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1405f3750 FUN_1405f3750 body=56 status=ok
// SIG undefined FUN_1405f3750(void)

void FUN_1405f3750(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [44];
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1402c9134(param_1,param_2,local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f378a FUN_1405f378a body=645 status=ok
// SIG undefined FUN_1405f378a(void)

void FUN_1405f378a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_14019a418(param_1 + 0x2c0);
  if (lVar1 == 0) {
    bVar5 = 0;
  }
  else {
    lVar1 = FUN_14019a418(param_1 + 0x2c0);
    bVar5 = *(byte *)(lVar1 + 0xb8);
  }
  if ((*(longlong *)(param_1 + 0xc0) != 0) && ((*(byte *)(param_1 + 0x240) & 0x20) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32);
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    if (DAT_14c872bf0 == '\x01') {
      if ((DAT_14c872bf1 != '\x01') || (((bVar5 | DAT_14c8442b8) & 1) != 0)) goto LAB_1405f383d;
    }
    else if (bVar5 != 0 || DAT_14c8442b8 != 0) goto LAB_1405f383d;
    lVar2 = FUN_1403358e4(*(undefined8 *)(param_1 + 0xc0));
    lVar1 = *(longlong *)(param_1 + 0x220);
    lVar3 = FUN_14099b09e(param_1,1);
    if (lVar3 == param_1) {
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x220) != 0)) {
        lVar1 = *(longlong *)(lVar2 + 0x220);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x160) + 8) == '\0') {
        local_38 = *(undefined4 *)(param_1 + 0x210);
        uStack_34 = *(undefined4 *)(param_1 + 0x214);
        uStack_30 = *(undefined4 *)(param_1 + 0x218);
        uStack_2c = *(undefined4 *)(param_1 + 0x21c);
        FUN_1405f3a10(*(longlong *)(param_1 + 0x160),
                      *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x218));
      }
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x230) != 0)) {
        uVar4 = FUN_14001cc68(0xb8,0x10);
        FUN_147cb0870(uVar4,*(undefined8 *)(param_1 + 0xc0));
        *(undefined8 *)(param_1 + 0x238) = uVar4;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x168) + 8) == '\0') {
        lVar2 = *(longlong *)(param_1 + 0xc0);
        if (lVar2 == 0) {
          local_58 = false;
        }
        else {
          local_58 = *(longlong *)(lVar2 + 0x30) == param_1;
        }
        local_48 = *(undefined4 *)(param_1 + 0x210);
        uStack_44 = *(undefined4 *)(param_1 + 0x214);
        uStack_40 = *(undefined4 *)(param_1 + 0x218);
        uStack_3c = *(undefined4 *)(param_1 + 0x21c);
        FUN_14572ce7c(*(longlong *)(param_1 + 0x168),*(undefined8 *)(lVar2 + 0x218),lVar1);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xc0) + 0x218);
      if (lVar2 != 0 && lVar1 != 0) {
        FUN_143568a6a(lVar1,*(undefined4 *)(lVar2 + 8));
      }
    }
  }
LAB_1405f383d:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f3a10 FUN_1405f3a10 body=1469 status=ok
// SIG undefined FUN_1405f3a10(void)

void FUN_1405f3a10(longlong *param_1,longlong *param_2,longlong param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  char *pcVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined ***pppuVar16;
  uint *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_c8 [32];
  code **local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  char *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_3 == 0) goto LAB_1405f3a3a;
  local_98 = *param_4;
  uStack_94 = param_4[1];
  uStack_90 = param_4[2];
  uStack_8c = param_4[3];
  pcVar10 = (char *)FUN_147ba5e16(param_3);
  if (((pcVar10 == (char *)0x0) || (param_2 == (longlong *)0x0)) || (*pcVar10 == '\0'))
  goto LAB_1405f3a3a;
  *(undefined1 *)(param_1 + 1) = 1;
  piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  iVar7 = *piVar1;
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_1405f3ac2;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_1405f3acb;
      goto LAB_1405f3b79;
    }
LAB_1405f3acb:
    *param_1 = (longlong)pcVar10;
    lVar5 = DAT_14cb0d0e0;
    lVar4 = param_2[1];
    lVar19 = 0xf0;
    if (1 < (longlong)(int)lVar4) {
      iVar7 = *piVar1;
      if (((iVar7 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar7 == 2)) {
        uVar15 = 0;
      }
      else if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        uVar15 = (ulonglong)(DVar8 != DVar9);
      }
      else {
        uVar15 = 1;
      }
      if ((*(int *)(lVar5 + uVar15 * 4) != 0) &&
         (lVar19 = 0x40,
         (&DAT_14ca814b8)[(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)(int)lVar4 * 2) * 0xf]
         == 1)) {
        lVar19 = 0xf0;
      }
    }
    param_1[2] = lVar19 + *param_1;
  }
  else {
LAB_1405f3ac2:
    if (iVar7 == 0x10) goto LAB_1405f3acb;
LAB_1405f3b79:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (*piVar1 == 2)) goto LAB_1405f3acb;
      if (*piVar1 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_1405f3acb;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar2 = (undefined8 *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x308);
      puVar12 = (uint *)*puVar2;
      if (puVar12 != (uint *)0x0) goto LAB_1405f3cca;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_14365fa42);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        FUN_140217a48(puVar2);
        puVar12 = (uint *)*puVar2;
LAB_1405f3cca:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar17 = (uint *)(puVar18 + 0x18);
        uVar14 = puVar12[0x12];
        if (puVar17 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar3 = *puVar12;
          *puVar12 = *puVar12 + uVar14 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar14) != 0xffffffff) break;
          puVar12 = (uint *)*puVar2;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar2 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x18);
          uVar14 = 0;
          if (puVar17 <= puVar12 + 0x4000) {
            uVar14 = 1;
            goto LAB_1405f3d4a;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_1405f3d4a:
      *(uint **)(puVar12 + 0x10) = puVar17;
      puVar12[0x12] = uVar14;
      iVar7 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14aa59770;
      puVar18[0x15] = param_1;
      puVar18[0x16] = pcVar10;
      puVar18[0x17] = param_2;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar14 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
          uVar15 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          iVar7 = 0;
        }
        else {
          uVar15 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar15 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar15 != '\x06') {
          uVar6 = uVar15;
        }
        uVar15 = uVar6;
        uVar13 = 0;
      }
      else {
        if ((char)uVar15 == '\x06') {
          uVar15 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar18[0xf] = uVar13;
      puVar18[0x10] = uVar15 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar7;
      if (puVar18 == (undefined8 *)0x0) {
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
        UNLOCK();
        local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
        FUN_1447439e4(puVar18);
        LOCK();
        piVar1 = (int *)(puVar18 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar18)(puVar18,1);
        }
      }
    }
    else {
      local_a8 = local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14aa59720;
      local_88[0] = FUN_14365fed8;
      local_60 = param_1;
      local_58 = pcVar10;
      local_50 = param_2;
      FUN_14005a792(&DAT_14ca9a440,L"SetVolumeDataCommand",&DAT_14cafdec8);
      if (local_88[0] != (code *)0x0) {
        pppuVar16 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar16 = &local_68;
        }
        (*(code *)(*pppuVar16)[2])();
      }
    }
  }
  (**(code **)(*param_2 + 0x1d8))(param_2,param_1);
LAB_1405f3a3a:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f3fce FUN_1405f3fce body=1515 status=ok
// SIG undefined FUN_1405f3fce(void)

undefined8 * FUN_1405f3fce(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_50 = 0;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_70 = &local_48;
    local_48 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_145a62952;
    local_78 = &LAB_147c8cd45;
    local_80 = &LAB_1461468ae;
    local_88 = L"Engine";
    local_90 = 0;
    local_98 = 0x10000006;
    local_a0 = 8;
    local_a8 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar2 = DAT_14caf84d0;
  lVar6 = DAT_14caf84d0[0x22];
  if (lVar6 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar6 = plVar2[0x22];
  }
  if (*(char *)(lVar6 + 0x166) == '\x01') {
    if (DAT_14caf84d0 == (longlong *)0x0) {
      local_70 = &local_48;
      local_48 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_145a62952;
      local_78 = &LAB_147c8cd45;
      local_80 = &LAB_1461468ae;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000006;
      local_a0 = 8;
      local_a8 = 0x218;
      FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
    }
    plVar2 = DAT_14caf84d0;
    lVar6 = DAT_14caf84d0[0x22];
    if (lVar6 == 0) {
      (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
      lVar6 = plVar2[0x22];
    }
    uVar8 = SUB84((double)*(float *)(lVar6 + 0x168),0);
  }
  else {
    uVar8 = 0;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_1447210f0(param_2);
  }
  FUN_142a2e540(param_1,uVar3,uVar8,&local_50);
  *param_1 = &PTR_FUN_14aa20d90;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 2;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x200000000;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x3a] = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x50));
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x51));
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  param_1[0x69] = 0;
  iVar4 = 0;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x69) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x34c) = iVar4;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0xbff0000000000000;
  param_1[0x6c] = 0xbff0000000000000;
  param_1[0x6d] = 0xbff0000000000000;
  param_1[0x6e] = 0xbff0000000000000;
  param_1[0x6f] = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  FUN_145c74ef4(param_1 + 0x55);
  if (*(int *)(param_1 + 0x60) != *(int *)((longlong)param_1 + 0x32c)) {
    FUN_14150f0b6(param_1 + 0x5f);
    FUN_14150ef20(param_1 + 0x5f);
  }
  uVar3 = *(undefined8 *)(param_1[7] + 0x9d0);
  local_48 = (code *)((ulonglong)local_48 & 0xffffffff00000000);
  FUN_1463f514c(uVar3,&local_48,param_1);
  local_48._0_4_ = 1;
  FUN_1463f51ee(uVar3,&local_48,param_1);
  local_48._0_4_ = 4;
  FUN_1463f5290(uVar3,&local_48,param_1);
  local_48 = (code *)CONCAT44(local_48._4_4_,5);
  FUN_1463f5332(uVar3,&local_48,param_1);
  FUN_1458e2210(param_1);
  FUN_145929b70(&DAT_14cafa528,param_1);
  lVar6 = FUN_145955939(DAT_14c951640);
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  param_1[0x6a] = lVar6;
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405f45ba FUN_1405f45ba body=274 status=ok
// SIG undefined FUN_1405f45ba(void)

undefined8 * FUN_1405f45ba(longlong param_1,void *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar2 = puVar3 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x40);
    puVar3 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar2 = puVar3 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar2;
  *puVar3 = &PTR_FUN_14a2a0e78;
  puVar3[1] = &DAT_100000001;
  *(undefined4 *)(puVar3 + 2) = 1;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar1);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = puVar3;
  iVar1 = *(int *)(puVar3 + 4);
  *(uint *)(puVar3 + 4) = iVar1 + 1U;
  if (*(uint *)((longlong)puVar3 + 0x24) < iVar1 + 1U) {
    FUN_1405f46cc(puVar3 + 3,iVar1);
  }
  memcpy((void *)((longlong)iVar1 * 0x390 + puVar3[3]),param_2,0x390);
  return puVar3 + 1;
}



// FUNCTION 1405f46cc FUN_1405f46cc body=93 status=ok
// SIG undefined FUN_1405f46cc(void)

void FUN_1405f46cc(longlong param_1,int param_2)

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
    FUN_1400dd044();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1405f472a thunk_FUN_1405f4730 body=5 status=ok
// SIG undefined thunk_FUN_1405f4730(void)

void thunk_FUN_1405f4730(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xf) = 3;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0x400000000;
  param_1[0x28] = 0xffff;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  param_1[0x3a] = 0x105;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined ***)(param_1 + 0x34) = &PTR_FUN_14aa8f770;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined ***)(param_1 + 0x4c) = &PTR_FUN_14aa8f870;
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_14aa8f8b0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_14aa8f8f0;
  *(undefined ***)(param_1 + 100) = &PTR_FUN_14aa8f930;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1405f4730 FUN_1405f4730 body=214 status=ok
// SIG undefined FUN_1405f4730(void)

void FUN_1405f4730(undefined2 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined2 *)((longlong)param_1 + 0xd) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xf) = 3;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0x400000000;
  param_1[0x28] = 0xffff;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  param_1[0x3a] = 0x105;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined ***)(param_1 + 0x34) = &PTR_FUN_14aa8f770;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined ***)(param_1 + 0x4c) = &PTR_FUN_14aa8f870;
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_14aa8f8b0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined ***)(param_1 + 0x60) = &PTR_FUN_14aa8f8f0;
  *(undefined ***)(param_1 + 100) = &PTR_FUN_14aa8f930;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



// FUNCTION 1405f4806 FUN_1405f4806 body=122 status=ok
// SIG undefined FUN_1405f4806(void)

void FUN_1405f4806(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14481013a(param_1);
    }
    memset((void *)((longlong)iVar1 * 4 + *param_1),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14750b7da(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1405f4882 FUN_1405f4882 body=173 status=ok
// SIG undefined FUN_1405f4882(void)

void FUN_1405f4882(undefined4 param_1,undefined8 param_2,longlong param_3,char param_4)

{
  float fVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_3 + 0xf) == '\x01') {
    uStack_18 = 0;
    uStack_20 = 0x3ff0000000000000;
  }
  else {
    if (*(char *)(param_3 + 0xf) != '\x02') {
      local_28 = 0x3ff0000000000000;
      param_1 = 0;
      uStack_20 = 0;
      uStack_18 = 0;
      goto LAB_1405f48c1;
    }
    param_1 = 0;
    uStack_20 = 0;
    uStack_18 = 0x3ff0000000000000;
  }
  local_28 = 0;
LAB_1405f48c1:
  if (param_4 == '\x04') {
    param_4 = *(char *)(param_3 + 0xe);
  }
  fVar1 = (float)FUN_1405f4a21(param_1,param_2,param_4,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar1 * 57.295776);
}



// FUNCTION 1405f4930 FUN_1405f4930 body=241 status=ok
// SIG undefined FUN_1405f4930(void)

float FUN_1405f4930(float param_1,float param_2,undefined1 param_3,char param_4)

{
  float fVar1;
  
  if (param_1 < 0.0) {
    return 0.0;
  }
  switch(param_3) {
  case 0:
    if (param_4 == '\0') {
      param_2 = (1.0 / param_2) * (1.0 / param_2) * -param_1;
    }
    else {
      param_2 = -param_1 * param_1;
    }
    goto LAB_1405f4a01;
  case 1:
    if (param_4 != '\0') {
      fVar1 = expf(param_1);
      return 1.0 / fVar1;
    }
    param_2 = (param_1 * -2.0) / param_2;
LAB_1405f4a01:
                    /* WARNING: Could not recover jumptable at 0x0001405f4a05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = expf(param_2);
    return fVar1;
  default:
    if (param_4 == '\0') {
      if (param_2 <= param_1) {
        param_1 = param_2;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      return (param_2 - param_1) / param_2;
    }
    break;
  case 3:
    param_1 = param_1 / param_2;
    param_1 = param_1 * param_1 * param_1;
    break;
  case 4:
    param_1 = powf(param_1 / param_2,5.0);
  }
  param_1 = 1.0 - param_1;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  return param_1;
}



// FUNCTION 1405f4a21 FUN_1405f4a21 body=4205 status=ok
// SIG undefined FUN_1405f4a21(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1405f4a21(longlong *param_1,longlong *param_2,undefined1 param_3,double *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  float fVar7;
  double dVar8;
  undefined1 auVar16 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar17 [16];
  double dVar14;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  ulonglong uVar15;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar37;
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  double dVar47;
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  double dVar51;
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar53 [16];
  float _X;
  undefined1 auStack_168 [44];
  float local_13c;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined1 local_108 [16];
  ulonglong local_f0;
  undefined1 extraout_var [12];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar1 = *(uint *)(param_1 + 1);
  _X = 0.0;
  if (2 < (int)uVar1) {
    lVar6 = 0;
    do {
      fVar7 = 0.0;
      iVar5 = (int)lVar6;
      dVar44 = (double)DAT_1499387d0;
      dVar47 = DAT_1499387d0._8_8_;
      switch(param_3) {
      case 0:
        dVar44 = DAT_14c846500;
        dVar47 = DAT_14c8464f8;
        dVar14 = DAT_14c846508;
        if (iVar5 + 3 <= (int)param_2[1]) {
          lVar2 = *param_2;
          dVar14 = (double)*(float *)(lVar2 + lVar6 * 4);
          dVar47 = (double)*(float *)(lVar2 + 4 + lVar6 * 4);
          dVar44 = (double)*(float *)(lVar2 + 8 + lVar6 * 4);
        }
        dVar8 = DAT_14c846508;
        dVar12 = DAT_14c8464f8;
        dVar9 = DAT_14c846500;
        if (iVar5 + 3 <= (int)param_1[1]) {
          lVar2 = *param_1;
          dVar8 = (double)*(float *)(lVar2 + lVar6 * 4);
          dVar12 = (double)*(float *)(lVar2 + 4 + lVar6 * 4);
          dVar9 = (double)*(float *)(lVar2 + 8 + lVar6 * 4);
        }
        dVar44 = dVar44 * 0.017453292519943295 - dVar9 * 0.017453292519943295;
        dVar47 = dVar47 * 0.017453292519943295 - dVar12 * 0.017453292519943295;
        dVar14 = dVar14 * 0.017453292519943295 - dVar8 * 0.017453292519943295;
        fVar7 = (float)SQRT(dVar44 * dVar44 + dVar47 * dVar47 + dVar14 * dVar14);
        break;
      case 1:
        dVar14 = DAT_14c8464f8;
        dVar8 = DAT_14c846508;
        dVar12 = DAT_14c846500;
        if (iVar5 + 3 <= (int)param_2[1]) {
          lVar2 = *param_2;
          dVar14 = (double)*(float *)(lVar2 + 4 + lVar6 * 4);
          dVar8 = (double)*(float *)(lVar2 + lVar6 * 4);
          dVar12 = (double)*(float *)(lVar2 + 8 + lVar6 * 4);
        }
        auVar31._8_4_ = SUB84(dVar12,0);
        auVar31._0_8_ = dVar14;
        auVar31._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar27 = divpd(auVar31,_DAT_1499387d0);
        auVar21._0_8_ = dVar8 / 360.0;
        auVar21._8_8_ = 0;
        auVar28 = roundpd(auVar27,auVar27,3);
        auVar27 = roundpd(auVar21,auVar21,3);
        dVar14 = (dVar14 - auVar28._0_8_ * dVar44) * 0.008726646259971648;
        dVar12 = (dVar12 - auVar28._8_8_ * dVar47) * 0.008726646259971648;
        dVar44 = (dVar8 - auVar27._0_8_ * dVar44) * 0.008726646259971648;
        dVar8 = (0.0 - auVar27._8_8_ * dVar47) * 0.008726646259971648;
        dVar47 = sin(dVar14);
        dVar9 = sin(dVar12);
        dVar10 = sin(dVar44);
        sin(dVar8);
        dVar11 = cos(dVar14);
        dVar12 = cos(dVar12);
        dVar13 = cos(dVar44);
        cos(dVar8);
        dVar14 = -(dVar12 * dVar47 * dVar10) + dVar9 * dVar11 * dVar13;
        dVar8 = dVar9 * dVar47 * dVar10 + dVar12 * dVar11 * dVar13;
        dVar44 = dVar47 * dVar9 * dVar13 - dVar11 * dVar12 * dVar10;
        dVar47 = -(dVar47 * dVar12 * dVar13) - dVar11 * dVar9 * dVar10;
        dVar12 = DAT_14c8464f8;
        dVar9 = DAT_14c846508;
        dVar10 = DAT_14c846500;
        if (iVar5 + 3 <= (int)param_1[1]) {
          lVar2 = *param_1;
          dVar12 = (double)*(float *)(lVar2 + 4 + lVar6 * 4);
          dVar9 = (double)*(float *)(lVar2 + lVar6 * 4);
          dVar10 = (double)*(float *)(lVar2 + 8 + lVar6 * 4);
        }
        auVar32._8_4_ = SUB84(dVar10,0);
        auVar32._0_8_ = dVar12;
        auVar32._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        auVar27 = divpd(auVar32,_DAT_1499387d0);
        auVar22._0_8_ = dVar9 / 360.0;
        auVar22._8_8_ = 0;
        auVar28 = roundpd(auVar27,auVar27,3);
        auVar27 = roundpd(auVar22,auVar22,3);
        dVar11 = (dVar12 - auVar28._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar13 = (dVar10 - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar45 = (dVar9 - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar48 = (0.0 - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        local_13c = _X;
        dVar12 = sin(dVar11);
        dVar9 = sin(dVar13);
        dVar10 = sin(dVar45);
        sin(dVar48);
        dVar11 = cos(dVar11);
        dVar13 = cos(dVar13);
        dVar45 = cos(dVar45);
        cos(dVar48);
        dVar42 = -(dVar13 * dVar12 * dVar10) + dVar9 * dVar11 * dVar45;
        dVar38 = dVar9 * dVar12 * dVar10 + dVar13 * dVar11 * dVar45;
        dVar48 = dVar12 * dVar9 * dVar45 - dVar11 * dVar13 * dVar10;
        dVar12 = -(dVar12 * dVar13 * dVar45) - dVar11 * dVar9 * dVar10;
        dVar9 = dVar42 * dVar42 + dVar48 * dVar48;
        dVar10 = dVar38 * dVar38 + dVar12 * dVar12;
        auVar35._0_8_ = dVar9 + dVar10;
        auVar35._8_8_ = dVar9 + dVar10;
        auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar27 = sqrtpd(auVar35,auVar35);
        auVar20 = divpd(_DAT_149934d80,auVar27);
        auVar39._0_8_ = auVar20._0_8_ * dVar42;
        auVar39._8_8_ = auVar20._8_8_ * dVar38;
        dVar9 = dVar14 * dVar14 + dVar44 * dVar44;
        dVar10 = dVar8 * dVar8 + dVar47 * dVar47;
        auVar43._0_8_ = dVar9 + dVar10;
        auVar43._8_8_ = dVar9 + dVar10;
        auVar28 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar39,auVar23);
        auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
        auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
        auVar27 = sqrtpd(auVar39,auVar43);
        auVar40 = divpd(_DAT_149934d80,auVar27);
        auVar41._0_8_ = auVar40._0_8_ * dVar14;
        auVar41._8_8_ = auVar40._8_8_ * dVar8;
        auVar27 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar41,auVar24);
        dVar44 = auVar27._8_8_ * auVar28._8_8_ +
                 auVar28._0_8_ * auVar27._0_8_ +
                 (double)((ulonglong)(dVar44 * auVar40._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_)) *
                 (double)((ulonglong)(dVar48 * auVar20._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_)) +
                 (double)((ulonglong)(dVar47 * auVar40._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_)) *
                 (double)((ulonglong)(dVar12 * auVar20._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
        dVar47 = (dVar44 + dVar44) * dVar44 + -1.0;
        dVar44 = dVar47;
        if (1.0 <= dVar47) {
          dVar44 = 1.0;
        }
        dVar44 = acos((double)(-(ulonglong)(dVar47 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar47 < -1.0) & (ulonglong)dVar44));
        fVar7 = (float)dVar44;
        _X = local_13c;
        break;
      case 2:
      case 4:
        dVar14 = DAT_14c8464f8;
        dVar8 = DAT_14c846508;
        dVar12 = DAT_14c846500;
        if (iVar5 + 3 <= (int)param_2[1]) {
          lVar2 = *param_2;
          dVar14 = (double)*(float *)(lVar2 + 4 + lVar6 * 4);
          dVar8 = (double)*(float *)(lVar2 + lVar6 * 4);
          dVar12 = (double)*(float *)(lVar2 + 8 + lVar6 * 4);
        }
        auVar26._8_4_ = SUB84(dVar12,0);
        auVar26._0_8_ = dVar14;
        auVar26._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar27 = divpd(auVar26,_DAT_1499387d0);
        auVar16._0_8_ = dVar8 / 360.0;
        auVar16._8_8_ = 0;
        auVar28 = roundpd(auVar27,auVar27,3);
        auVar27 = roundpd(auVar16,auVar16,3);
        dVar14 = (dVar14 - auVar28._0_8_ * dVar44) * 0.008726646259971648;
        dVar12 = (dVar12 - auVar28._8_8_ * dVar47) * 0.008726646259971648;
        dVar44 = (dVar8 - auVar27._0_8_ * dVar44) * 0.008726646259971648;
        dVar47 = (0.0 - auVar27._8_8_ * dVar47) * 0.008726646259971648;
        local_13c = _X;
        dVar8 = sin(dVar14);
        dVar9 = sin(dVar12);
        dVar10 = sin(dVar44);
        sin(dVar47);
        dVar11 = cos(dVar14);
        dVar12 = cos(dVar12);
        dVar13 = cos(dVar44);
        cos(dVar47);
        dVar44 = DAT_14c8464f8;
        dVar47 = DAT_14c846508;
        dVar14 = DAT_14c846500;
        if (iVar5 + 3 <= (int)param_1[1]) {
          lVar2 = *param_1;
          dVar44 = (double)*(float *)(lVar2 + 4 + lVar6 * 4);
          dVar47 = (double)*(float *)(lVar2 + lVar6 * 4);
          dVar14 = (double)*(float *)(lVar2 + 8 + lVar6 * 4);
        }
        dVar45 = dVar8 * dVar9 * dVar13 - dVar11 * dVar12 * dVar10;
        dVar48 = -(dVar8 * dVar12 * dVar13) - dVar11 * dVar9 * dVar10;
        dVar42 = dVar9 * dVar11 * dVar13 + -(dVar12 * dVar8 * dVar10);
        dVar9 = dVar12 * dVar11 * dVar13 + dVar9 * dVar8 * dVar10;
        auVar17._8_4_ = SUB84(dVar14,0);
        auVar17._0_8_ = dVar44;
        auVar17._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        auVar27 = divpd(auVar17,_DAT_1499387d0);
        auVar29._0_8_ = dVar47 / 360.0;
        auVar29._8_8_ = 0;
        auVar27 = roundpd(auVar27,auVar27,3);
        auVar28 = roundpd(auVar29,auVar29,3);
        dVar44 = (dVar44 - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar14 = (dVar14 - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar8 = (dVar47 - auVar28._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar12 = (0.0 - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar47 = sin(dVar44);
        dVar10 = sin(dVar14);
        dVar11 = sin(dVar8);
        sin(dVar12);
        dVar44 = cos(dVar44);
        dVar14 = cos(dVar14);
        dVar13 = cos(dVar8);
        cos(dVar12);
        dVar8 = -(dVar14 * dVar47 * dVar11) + dVar10 * dVar44 * dVar13;
        dVar12 = dVar10 * dVar47 * dVar11 + dVar14 * dVar44 * dVar13;
        dVar38 = dVar47 * dVar10 * dVar13 - dVar44 * dVar14 * dVar11;
        dVar11 = -(dVar47 * dVar14 * dVar13) - dVar44 * dVar10 * dVar11;
        dVar44 = *param_4;
        dVar47 = param_4[1];
        dVar14 = param_4[2];
        dVar13 = dVar14 * dVar8 + dVar44 * dVar38 + dVar47 * dVar11;
        auVar30._0_8_ = dVar14 * dVar13;
        auVar30._8_8_ = 0;
        dVar10 = dVar47 * dVar13;
        dVar13 = dVar13 * dVar44;
        dVar52 = dVar12 * dVar12 + auVar30._0_8_ * auVar30._0_8_ + dVar13 * dVar13 + dVar10 * dVar10
        ;
        if ((dVar52 != 0.0) ||
           (auVar27 = _DAT_14c8463e0, dVar33 = DAT_14c8463d0, dVar49 = DAT_14c8463d8, NAN(dVar52)))
        {
          auVar3._8_4_ = SUB84(dVar12,0);
          auVar3._0_8_ = dVar8;
          auVar3._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
          auVar27 = blendpd(auVar30,auVar3,2);
          dVar52 = auVar27._0_8_;
          dVar33 = auVar27._8_8_;
          dVar49 = dVar52 * dVar52 + dVar13 * dVar13;
          dVar51 = dVar33 * dVar33 + dVar10 * dVar10;
          auVar50._0_8_ = dVar49 + dVar51;
          auVar50._8_8_ = dVar49 + dVar51;
          auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
          auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
          auVar27 = sqrtpd(auVar50,auVar50);
          auVar28 = divpd(_DAT_149934d80,auVar27);
          auVar53._0_8_ = auVar28._0_8_ * dVar52;
          auVar53._8_8_ = auVar28._8_8_ * dVar33;
          auVar27 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar18);
          dVar33 = (double)((ulonglong)(dVar13 * auVar28._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
          dVar49 = (double)((ulonglong)(dVar10 * auVar28._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
        }
        dVar10 = auVar27._0_8_ * -1.0;
        dVar13 = auVar27._8_8_ * 1.0;
        dVar52 = dVar14 * dVar42 + dVar44 * dVar45 + dVar48 * dVar47;
        auVar34._0_8_ = dVar14 * dVar52;
        auVar34._8_8_ = 0;
        dVar47 = dVar47 * dVar52;
        dVar52 = dVar52 * dVar44;
        dVar44 = dVar9 * dVar9 + auVar34._0_8_ * auVar34._0_8_ + dVar52 * dVar52 + dVar47 * dVar47;
        if ((dVar44 != 0.0) ||
           (auVar27 = _DAT_14c8463e0, dVar14 = DAT_14c8463d0, dVar51 = DAT_14c8463d8, NAN(dVar44)))
        {
          auVar4._8_4_ = SUB84(dVar9,0);
          auVar4._0_8_ = dVar42;
          auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar27 = blendpd(auVar34,auVar4,2);
          dVar44 = auVar27._0_8_;
          dVar14 = auVar27._8_8_;
          dVar51 = dVar44 * dVar44 + dVar52 * dVar52;
          dVar37 = dVar14 * dVar14 + dVar47 * dVar47;
          auVar36._0_8_ = dVar51 + dVar37;
          auVar36._8_8_ = dVar51 + dVar37;
          auVar19._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
          auVar19._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
          auVar27 = sqrtpd(auVar36,auVar36);
          auVar28 = divpd(_DAT_149934d80,auVar27);
          auVar46._0_8_ = auVar28._0_8_ * dVar44;
          auVar46._8_8_ = auVar28._8_8_ * dVar14;
          auVar27 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar46,auVar19);
          dVar14 = (double)((ulonglong)(dVar52 * auVar28._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
          dVar51 = (double)((ulonglong)(dVar47 * auVar28._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
        }
        dVar44 = auVar27._0_8_ * -1.0;
        dVar47 = auVar27._8_8_ * 1.0;
        dVar44 = (dVar44 * dVar42 * -1.0 +
                 dVar48 * dVar51 + (dVar9 * dVar47 - dVar45 * dVar14 * -1.0)) *
                 (dVar10 * dVar8 * -1.0 +
                 dVar11 * dVar49 + (dVar12 * dVar13 - dVar38 * dVar33 * -1.0)) +
                 (dVar13 * dVar8 * 1.0 + dVar11 * dVar33 + (dVar12 * dVar10 - dVar38 * dVar49 * 1.0)
                 ) * (dVar47 * dVar42 * 1.0 +
                     dVar48 * dVar14 + (dVar9 * dVar44 - dVar45 * dVar51 * 1.0)) +
                 (((dVar45 * dVar47 * 1.0 - dVar9 * dVar14) + dVar48 * dVar44) -
                 dVar51 * dVar42 * -1.0) *
                 (((dVar38 * dVar13 * 1.0 - dVar12 * dVar33) + dVar11 * dVar10) -
                 dVar49 * dVar8 * -1.0) +
                 (((dVar38 * dVar10 * -1.0 - dVar12 * dVar49) + dVar11 * dVar13) -
                 dVar33 * dVar8 * 1.0) *
                 (((dVar45 * dVar44 * -1.0 - dVar9 * dVar51) + dVar48 * dVar47) -
                 dVar14 * dVar42 * 1.0);
        dVar47 = (dVar44 + dVar44) * dVar44 + -1.0;
        dVar44 = dVar47;
        if (1.0 <= dVar47) {
          dVar44 = 1.0;
        }
        dVar44 = acos((double)(-(ulonglong)(dVar47 < -1.0) & 0xbff0000000000000 |
                              ~-(ulonglong)(dVar47 < -1.0) & (ulonglong)dVar44));
        fVar7 = (float)dVar44 + 0.0;
        _X = local_13c;
        break;
      case 3:
        dVar14 = DAT_14c8464f8;
        dVar8 = DAT_14c846508;
        dVar12 = DAT_14c846500;
        if (iVar5 + 3 <= (int)param_2[1]) {
          lVar2 = *param_2;
          dVar14 = (double)*(float *)(lVar2 + 4 + lVar6 * 4);
          dVar8 = (double)*(float *)(lVar2 + lVar6 * 4);
          dVar12 = (double)*(float *)(lVar2 + 8 + lVar6 * 4);
        }
        auVar28._8_4_ = SUB84(dVar12,0);
        auVar28._0_8_ = dVar14;
        auVar28._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        auVar28 = divpd(auVar28,_DAT_1499387d0);
        auVar27._0_8_ = dVar8 / 360.0;
        auVar27._8_8_ = 0;
        auVar28 = roundpd(auVar28,auVar28,3);
        auVar27 = roundpd(auVar27,auVar27,3);
        dVar14 = (dVar14 - auVar28._0_8_ * dVar44) * 0.008726646259971648;
        dVar12 = (dVar12 - auVar28._8_8_ * dVar47) * 0.008726646259971648;
        dVar44 = (dVar8 - auVar27._0_8_ * dVar44) * 0.008726646259971648;
        dVar11 = (0.0 - auVar27._8_8_ * dVar47) * 0.008726646259971648;
        dVar47 = sin(dVar14);
        dVar8 = sin(dVar12);
        dVar9 = sin(dVar44);
        sin(dVar11);
        dVar14 = cos(dVar14);
        dVar12 = cos(dVar12);
        dVar10 = cos(dVar44);
        cos(dVar11);
        dVar44 = dVar8 * dVar47 * dVar9 + dVar12 * dVar14 * dVar10;
        local_118 = dVar47 * dVar8 * dVar10 - dVar14 * dVar12 * dVar9;
        dStack_110 = -(dVar47 * dVar12 * dVar10) - dVar14 * dVar8 * dVar9;
        local_108._8_4_ = SUB84(dVar44,0);
        local_108._0_8_ = -(dVar12 * dVar47 * dVar9) + dVar8 * dVar14 * dVar10;
        local_108._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        dVar44 = DAT_14c8464f8;
        dVar47 = DAT_14c846508;
        dVar14 = DAT_14c846500;
        if (iVar5 + 3 <= (int)param_1[1]) {
          lVar2 = *param_1;
          dVar44 = (double)*(float *)(lVar2 + 4 + lVar6 * 4);
          dVar47 = (double)*(float *)(lVar2 + lVar6 * 4);
          dVar14 = (double)*(float *)(lVar2 + 8 + lVar6 * 4);
        }
        auVar40._8_4_ = SUB84(dVar14,0);
        auVar40._0_8_ = dVar44;
        auVar40._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
        auVar27 = divpd(auVar40,_DAT_1499387d0);
        auVar20._0_8_ = dVar47 / 360.0;
        auVar20._8_8_ = 0;
        auVar28 = roundpd(auVar27,auVar27,3);
        auVar27 = roundpd(auVar20,auVar20,3);
        dVar44 = (dVar44 - auVar28._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar14 = (dVar14 - auVar28._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar10 = (dVar47 - auVar27._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
        dVar11 = (0.0 - auVar27._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
        dVar47 = sin(dVar44);
        dVar8 = sin(dVar14);
        dVar12 = sin(dVar10);
        sin(dVar11);
        dVar9 = cos(dVar44);
        dVar14 = cos(dVar14);
        dVar10 = cos(dVar10);
        cos(dVar11);
        dVar44 = dVar8 * dVar47 * dVar12 + dVar14 * dVar9 * dVar10;
        local_138._0_8_ = dVar47 * dVar8 * dVar10 - dVar9 * dVar14 * dVar12;
        local_138._8_8_ = -(dVar47 * dVar14 * dVar10) - dVar9 * dVar8 * dVar12;
        local_128._8_4_ = SUB84(dVar44,0);
        local_128._0_8_ = -(dVar14 * dVar47 * dVar12) + dVar8 * dVar9 * dVar10;
        local_128._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        dVar44 = (double)FUN_14010169e(local_138,param_4);
        dVar47 = (double)FUN_14010169e(&local_118,param_4);
        fVar7 = ABS((float)(dVar44 - dVar47));
      }
      _X = _X + fVar7 * fVar7;
      lVar6 = lVar6 + 3;
    } while (((ulonglong)uVar1 / 3) * 3 != lVar6);
  }
  if (_X < 0.0) {
    auVar25._0_4_ = sqrtf(_X);
    auVar25._4_12_ = extraout_var;
    uVar15 = auVar25._0_8_;
  }
  else {
    uVar15 = (ulonglong)(uint)SQRT(_X);
  }
  if ((local_f0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 1405f5a90 FUN_1405f5a90 body=353 status=ok
// SIG undefined FUN_1405f5a90(void)

void FUN_1405f5a90(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405f5b15;
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
LAB_1405f5b15:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1405f5bf2 FUN_1405f5bf2 body=314 status=ok
// SIG undefined FUN_1405f5bf2(void)

undefined8
FUN_1405f5bf2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1405f5d25;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1405f5d25;
    }
    FUN_1400841de(param_1 + 0x18,&local_40);
  }
  else {
LAB_1405f5d25:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1405f5cd7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_50 = param_6;
      local_58 = param_5;
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1405f5cd7;
    }
  }
  uVar6 = 0;
LAB_1405f5cd7:
  if (local_40 != 0) {
    FUN_140113f3a(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f5d2e FUN_1405f5d2e body=175 status=ok
// SIG undefined FUN_1405f5d2e(void)

void FUN_1405f5d2e(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x70;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x6c + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x70 + 0x68);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x68);
  lVar2 = *param_1 + lVar2;
  FUN_14099ab1d(*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x60));
  if (*(longlong *)(lVar2 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(lVar2 + 0x50) = 0;
  if (*(longlong *)(lVar2 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_14099aae6(lVar2 + 8);
  FUN_1405f5dde(param_1,param_2);
  return;
}



// FUNCTION 1405f5dde FUN_1405f5dde body=116 status=ok
// SIG undefined FUN_1405f5dde(void)

void FUN_1405f5dde(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
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



// FUNCTION 1405f5e52 FUN_1405f5e52 body=408 status=ok
// SIG undefined FUN_1405f5e52(void)

void FUN_1405f5e52(longlong *param_1,longlong param_2)

{
  int iVar1;
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
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    if (param_1 != (longlong *)0x0) {
      lVar2 = param_1[4];
      if (lVar2 != 0) {
        if (DAT_14cad2858 == 0) {
          local_50 = &local_30;
          local_30 = FUN_144a7958c;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_146395584;
          local_58 = &LAB_147a0ba80;
          local_60 = &LAB_14575ccce;
          local_68 = L"Engine";
          local_70 = 0x40000000000;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x1180;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
        }
        lVar2 = *(longlong *)(lVar2 + 0x10);
        iVar1 = *(int *)(DAT_14cad2858 + 0x38);
        if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30
           )) {
          FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
        }
      }
      if (param_1[0x7c] == 0) {
        lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
        param_1[0x7c] = lVar2;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f600c FUN_1405f600c body=57 status=ok
// SIG undefined FUN_1405f600c(void)

void FUN_1405f600c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21d98 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21d98 = FUN_140002ddd(FUN_1464359cf,uVar1,L"GbxBrainTask_Priority");
  }
  return;
}



// FUNCTION 1405f604e FUN_1405f604e body=420 status=ok
// SIG undefined FUN_1405f604e(void)

undefined8 FUN_1405f604e(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*param_2 != 0) && (plVar2 = *(longlong **)(param_1 + 0x88), plVar2 != (longlong *)0x0)) {
    iVar5 = (int)plVar2[1];
    do {
      if (iVar5 == 0) goto LAB_1405f606a;
      LOCK();
      iVar3 = (int)plVar2[1];
      bVar8 = iVar5 == iVar3;
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
        iVar3 = iVar5;
      }
      iVar5 = iVar3;
      UNLOCK();
    } while (!bVar8);
    bVar8 = true;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1405f62be(*(longlong *)(param_1 + 0x80),&local_38);
      if (local_38 != (longlong *)0x0) {
        (**(code **)(*local_38 + 0x78))(local_38,&local_48,param_2);
        if ((((local_48 != 0) && (plVar6 = (longlong *)FUN_1405f6336(), plVar6 != (longlong *)0x0))
            && (cVar4 = (**(code **)(*plVar6 + 0x50))(plVar6), cVar4 == '\0')) &&
           (cVar4 = FUN_1405f61f4(local_48), 0xfd < (byte)(cVar4 - 5U))) {
          if (local_40 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_40 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_40)(local_40);
              LOCK();
              piVar1 = (int *)((longlong)local_40 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_40 + 0x10))(local_40);
              }
            }
          }
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_30 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
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
          bVar8 = false;
          goto LAB_1405f616f;
        }
        if (local_40 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_40 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_40)(local_40);
            LOCK();
            piVar1 = (int *)((longlong)local_40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_40 + 0x10))(local_40);
            }
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_30 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
    }
LAB_1405f616f:
    LOCK();
    plVar6 = plVar2 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    uVar7 = 1;
    if (!bVar8) goto LAB_1405f606c;
  }
LAB_1405f606a:
  uVar7 = 0;
LAB_1405f606c:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f61f4 FUN_1405f61f4 body=90 status=ok
// SIG undefined FUN_1405f61f4(void)

void FUN_1405f61f4(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    FUN_1403a0728(lVar1 + 0x38,&local_18);
  }
  FUN_1405f6250(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f6250 FUN_1405f6250 body=109 status=ok
// SIG undefined FUN_1405f6250(void)

undefined8 FUN_1405f6250(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb888b0 == param_1) {
    uVar1 = 0;
  }
  else if (DAT_14cb888b8 == param_1) {
    uVar1 = 1;
  }
  else if (DAT_14cb888c0 == param_1) {
    uVar1 = 2;
  }
  else if (DAT_14cb888c8 == param_1) {
    uVar1 = 3;
  }
  else if (DAT_14cb88928 == param_1) {
    uVar1 = 4;
  }
  else {
    uVar1 = 6;
    if (DAT_14cb88920 != param_1) {
      if (DAT_14cb888d0 == param_1) {
        uVar1 = 5;
      }
      else {
        uVar1 = 7;
        if (DAT_14cb88720 != param_1) {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



// FUNCTION 1405f62be FUN_1405f62be body=119 status=ok
// SIG undefined FUN_1405f62be(void)

undefined8 * FUN_1405f62be(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0xb0) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0xb8), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
LAB_1405f62d1:
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1405f62d1;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    *param_2 = *(undefined8 *)(param_1 + 0xb0);
    param_2[1] = plVar3;
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1405f6336 FUN_1405f6336 body=115 status=ok
// SIG undefined FUN_1405f6336(void)

undefined8 FUN_1405f6336(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
  local_48 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x18);
  FUN_1448075d0(local_40);
  uVar1 = FUN_14060eaf6(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f63aa FUN_1405f63aa body=478 status=ok
// SIG undefined FUN_1405f63aa(void)

void FUN_1405f63aa(longlong param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                  char param_5,undefined4 param_6,longlong param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1403a0728(param_4,&local_58);
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_2 + 0xe) = local_58;
  *param_2 = param_6;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  param_2[1] = iVar1;
  if (param_7 != 0) {
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_7 + 0x40);
  }
  FUN_1449fc321(param_3,param_1 + 0x180,param_1 + 0x40);
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar2 = *(uint *)(param_1 + 8), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(int *)(puVar3 + 2) == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar4 = *puVar3;
      }
      else {
        uVar4 = 0;
      }
      FUN_1405f658a(uVar4);
      if (param_5 == '\0') {
        FUN_1405f6ef0(param_1,param_3,*(undefined8 *)(param_2 + 0xe));
      }
      else {
        local_b8 = param_2[0xe];
        uStack_b4 = param_2[0xf];
        uStack_b0 = param_2[0x10];
        uStack_ac = param_2[0x11];
        local_60 = param_2[0xd];
        local_c0 = &local_68;
        local_68 = *(undefined8 *)(param_2 + 0xb);
        local_70 = param_2[10];
        local_c8 = &local_78;
        local_78 = *(undefined8 *)(param_2 + 8);
        local_88 = *(undefined8 *)(param_2 + 5);
        local_80 = param_2[7];
        local_98 = *(undefined8 *)(param_2 + 2);
        local_90 = param_2[4];
        local_a8 = *param_2;
        FUN_1405f6b4e(param_1,param_3);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f658a FUN_1405f658a body=624 status=ok
// SIG undefined FUN_1405f658a(void)

void FUN_1405f658a(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x2da) != '\0') goto LAB_1405f65ae;
  if (((*(longlong *)(param_1 + 0x2f8) == 0) || (*(longlong *)(param_1 + 0x300) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x300) + 8) < 1)) {
    uVar5 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar4 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_58[2] = lVar6;
    *local_58 = &PTR_FUN_14b4035d0;
    local_58[3] = 0;
    iVar7 = 0;
    if (param_1 != 0) {
      uVar2 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar7 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar7 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar7;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar7 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar7 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar8;
          iVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar7 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar7;
    puVar4[4] = FUN_14030bdda;
    *(undefined4 *)(puVar4 + 5) = 0;
    local_68 = 0;
    FUN_1405f67fc(uVar5,&local_48,&local_58,L"UGbxGameInstance.CallUpdateWorldState");
    *(undefined8 *)(param_1 + 0x2f8) = local_48;
    local_48 = 0;
    plVar3 = *(longlong **)(param_1 + 0x300);
    *(longlong **)(param_1 + 0x300) = local_40;
    local_40 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_1405f65f1;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1405f65f1:
  *(undefined1 *)(param_1 + 0x2da) = 1;
LAB_1405f65ae:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f67fc FUN_1405f67fc body=302 status=ok
// SIG undefined FUN_1405f67fc(void)

longlong *
FUN_1405f67fc(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
             float param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  
  lVar4 = FUN_14001cc68(0x60,0x10);
  FUN_1405f692a(lVar4,param_4,(double)param_5 + (double)param_1[2],param_5,param_3);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_149e016f0;
  plVar5[2] = lVar4;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  puVar6 = (undefined8 *)FUN_14001cc68(0x18,8);
  *puVar6 = 0;
  puVar6[1] = lVar4;
  puVar6[2] = plVar5;
  if (plVar5 == (longlong *)0x0) {
    LOCK();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = puVar6;
    UNLOCK();
    *puVar3 = puVar6;
    *param_2 = lVar4;
    param_2[1] = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = puVar6;
    UNLOCK();
    *puVar3 = puVar6;
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
    *param_2 = lVar4;
    param_2[1] = (longlong)plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 1405f692a FUN_1405f692a body=240 status=ok
// SIG undefined FUN_1405f692a(void)

undefined8 *
FUN_1405f692a(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = param_4;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1405f6a1c(&local_38,param_5);
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_149e01710;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  FUN_1405f6a1c(param_1 + 7,&local_38);
  param_1[2] = FUN_14274a9d0;
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_1405f69b2;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1405f69b2:
  param_1[10] = param_2;
  param_1[0xb] = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f6a1c FUN_1405f6a1c body=305 status=ok
// SIG undefined FUN_1405f6a1c(void)

void FUN_1405f6a1c(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1405f6ab6;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1405f6a8f:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_1405f6a8f;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1405f6ab6;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1405f6ab6:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f6b4e FUN_1405f6b4e body=368 status=ok
// SIG undefined FUN_1405f6b4e(void)

void FUN_1405f6b4e(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar2 = FUN_1405f6cc0();
  if (cVar2 == '\0') goto LAB_1405f6c8d;
  local_30 = *(undefined4 *)(param_6 + 1);
  local_38 = *param_6;
  local_40 = *(undefined4 *)(param_5 + 1);
  local_48 = *param_5;
  local_50 = *(undefined4 *)(param_4 + 1);
  local_58 = *param_4;
  local_60 = *(undefined4 *)(param_3 + 1);
  local_68 = *param_3;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_1405f6cb4:
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0))
         )) goto LAB_1405f6cb4;
      lVar3 = *plVar4;
    }
  }
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
  }
  local_78 = param_9;
  local_80 = param_8;
  local_88 = param_7;
  local_90 = &local_38;
  local_98 = &local_48;
  FUN_1449fc434(uVar5,param_2,&local_68,&local_58);
LAB_1405f6c8d:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f6cc0 FUN_1405f6cc0 body=131 status=ok
// SIG undefined FUN_1405f6cc0(void)

bool FUN_1405f6cc0(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    if ((int)uVar1 < 0) {
      return false;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return false;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar3;
      }
      else {
        lVar4 = 0;
      }
      if (*(longlong *)(lVar4 + 0x30) == 0) {
        return true;
      }
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x360) == 0) {
        return true;
      }
      iVar2 = FUN_14490d72a();
      return iVar2 != 3;
    }
  }
  return false;
}



// FUNCTION 1405f6d44 FUN_1405f6d44 body=174 status=ok
// SIG undefined FUN_1405f6d44(void)

ulonglong FUN_1405f6d44(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] != 0) {
    lVar2 = *param_1;
    lVar6 = (longlong)(int)param_1[1] << 3;
    uVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *param_2;
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if (*(longlong *)(lVar2 + uVar5 * 8) == lVar3) {
        if ((int)uVar5 != -1) goto LAB_1405f6dc6;
        break;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = (ulonglong)uVar1;
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar1 + 1) {
    FUN_1405f7400(param_1,uVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
LAB_1405f6dc6:
  return uVar5 & 0xffffffff;
}



// FUNCTION 1405f6df2 FUN_1405f6df2 body=252 status=ok
// SIG undefined FUN_1405f6df2(void)

ulonglong FUN_1405f6df2(uint *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
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
    uVar4 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar4 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar4 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar4 = uVar6;
      }
    }
  }
  local_24 = uVar4;
  if ((*param_1 != local_28) ||
     (uVar3 = CONCAT71((uint7)(uint3)(*param_1 >> 8),1), param_1[1] != uVar4)) {
    cVar2 = FUN_144729dda(param_1);
    if (cVar2 == '\0') {
      uVar3 = FUN_144729dda(&local_28);
      uVar3 = uVar3 ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1405f6ef0 FUN_1405f6ef0 body=162 status=ok
// SIG undefined FUN_1405f6ef0(void)

void FUN_1405f6ef0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  cVar2 = FUN_1405f6cc0();
  if (cVar2 == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar1 = *(uint *)(param_1 + 8);
    lVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1405f6f54;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar4 != (longlong *)0x0) &&
       (((int)plVar4[2] == *(int *)(param_1 + 0xc) && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0))))
    {
      lVar3 = *plVar4;
      goto LAB_1405f6f54;
    }
  }
  lVar3 = 0;
LAB_1405f6f54:
  if (*(longlong *)(lVar3 + 0x30) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
  }
  FUN_1405f6f92(uVar5,param_2,param_3,param_4);
  return;
}



// FUNCTION 1405f6f92 FUN_1405f6f92 body=1133 status=ok
// SIG undefined FUN_1405f6f92(void)

undefined4 FUN_1405f6f92(longlong *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_c8 [36];
  undefined4 local_a4;
  int local_a0;
  uint local_9c;
  ulonglong local_98;
  longlong *local_90;
  undefined8 local_88;
  uint *local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar14 = 0;
  local_88 = param_3;
  if ((param_1 == (longlong *)0x0) || (plVar11 = (longlong *)param_1[7], plVar11 == (longlong *)0x0)
     ) {
    plVar11 = (longlong *)0x0;
  }
  else {
    param_1 = (longlong *)&LAB_1448ff5f6;
    if (*(code **)(*plVar11 + 0x3c0) == (code *)&LAB_1448ff5f6) {
      if (plVar11[0x1e] != 0) {
LAB_1405f73ce:
        local_a4 = 0;
        goto LAB_1405f7318;
      }
    }
    else {
      param_1 = plVar11;
      cVar4 = (**(code **)(*plVar11 + 0x3c0))(plVar11);
      if (cVar4 == '\0') goto LAB_1405f73ce;
    }
  }
  if (DAT_14cb7c230 == 0) {
    uVar12 = 1;
    puVar5 = (uint *)0x0;
    iVar15 = 0;
  }
  else {
    puVar5 = &DAT_14cb7c218;
    if (DAT_14cb7c228 != (uint *)0x0) {
      puVar5 = DAT_14cb7c228;
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar15 = DAT_14cb7c230 + 0x1e;
      if (-1 < (int)(DAT_14cb7c230 - 1)) {
        iVar15 = DAT_14cb7c230 - 1;
      }
      uVar14 = 0;
      uVar12 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar12 = uVar14;
      }
      iVar15 = 0;
      do {
        if (uVar12 == uVar14) goto LAB_1405f7312;
        iVar15 = iVar15 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar15 = 0;
    }
    uVar12 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar12 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    uVar6 = (uint)lVar17 ^ 0x3f;
    param_1 = (longlong *)(ulonglong)uVar6;
    uVar6 = (iVar15 - uVar6) + 0x3e;
    puVar5 = (uint *)(ulonglong)uVar6;
    if ((int)DAT_14cb7c230 <= (int)uVar6) {
      puVar5 = (uint *)(ulonglong)DAT_14cb7c230;
    }
  }
  if ((uint)puVar5 == DAT_14cb7c230) {
LAB_1405f7312:
    local_a4 = (undefined4)CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
  }
  else {
    local_a4 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    uVar6 = 0xffffffff;
    local_98 = (ulonglong)DAT_14cb7c230;
    local_90 = plVar11;
    do {
      lVar17 = (longlong)(int)puVar5 * 0x20 + DAT_14cb7c208;
      local_a0 = iVar15;
      local_9c = uVar6;
      cVar4 = FUN_1405f6df2(lVar17,local_90);
      if ((cVar4 != '\0') && ((longlong)*(int *)(lVar17 + 0x10) != 0)) {
        puVar5 = *(uint **)(lVar17 + 8);
        local_80 = puVar5 + (longlong)*(int *)(lVar17 + 0x10) * 2;
        do {
          if (((((puVar5[1] != 0) && (uVar6 = *puVar5, -1 < (int)uVar6)) &&
               ((int)uVar6 < DAT_14c9647dc)) &&
              ((plVar11 = (longlong *)
                          ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
               plVar11 != (longlong *)0x0 && (*(uint *)(plVar11 + 2) == puVar5[1])))) &&
             ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) {
            if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
              lVar17 = *plVar11;
            }
            else {
              lVar17 = 0;
            }
            cVar4 = *(char *)(lVar17 + 0x80);
            plVar11 = (longlong *)(lVar17 + 0xd8);
            iVar15 = *(int *)(lVar17 + 0xe0);
            lVar16 = (longlong)iVar15;
            if (0 < lVar16) {
              lVar3 = *plVar11;
              lVar9 = 0;
              do {
                if ((((byte)(*(char *)(lVar3 + lVar9) - 2U) < 3) &&
                    (*(int *)(lVar3 + 4 + lVar9) == param_2)) &&
                   (*(char *)(lVar3 + 0x60 + lVar9) == cVar4)) {
                  *(undefined8 *)(lVar3 + 0x40 + lVar9) = local_88;
                  puVar2 = (undefined8 *)(lVar3 + 0x48 + lVar9);
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  *(undefined4 *)(lVar3 + 0xc + lVar9) = param_4;
                  goto LAB_1405f7210;
                }
                lVar9 = lVar9 + 0x68;
              } while (lVar16 * 0x68 - lVar9 != 0);
            }
            *(uint *)(lVar17 + 0xe0) = iVar15 + 1U;
            if (*(uint *)(lVar17 + 0xe4) < iVar15 + 1U) {
              FUN_140116b62(plVar11,iVar15);
            }
            lVar3 = *plVar11;
            lVar16 = lVar16 * 0x68;
            *(undefined1 *)(lVar3 + lVar16) = 3;
            *(int *)(lVar3 + 4 + lVar16) = param_2;
            *(undefined4 *)(lVar3 + 8 + lVar16) = 0xffffffff;
            *(undefined4 *)(lVar3 + 0xc + lVar16) = param_4;
            puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar16);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar16);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar16);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar3 + 0x40 + lVar16) = local_88;
            puVar2 = (undefined8 *)(lVar3 + 0x48 + lVar16);
            *puVar2 = 0;
            puVar2[1] = 0;
            *(undefined8 *)(lVar3 + 0x58 + lVar16) = 0;
            *(char *)(lVar3 + 0x60 + lVar16) = cVar4;
            *(undefined2 *)(lVar3 + 0x61 + lVar16) = 0;
LAB_1405f7210:
            lVar16 = *(longlong *)(lVar17 + 0x28);
            local_78 = lVar17;
            if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar17);
            }
            FUN_1405f6d44(lVar16 + 0x16c8,&local_78);
          }
          puVar5 = puVar5 + 2;
        } while (puVar5 != local_80);
      }
      uVar6 = local_9c & ~(uint)uVar12;
      puVar5 = DAT_14cb7c228;
      if (DAT_14cb7c228 == (uint *)0x0) {
        puVar5 = &DAT_14cb7c218;
      }
      iVar13 = (int)uVar14;
      lVar17 = (longlong)iVar13;
      uVar10 = puVar5[lVar17] & uVar6;
      iVar15 = local_a0;
      if (uVar10 == 0) {
        iVar7 = DAT_14cb7c230 + 0x1e;
        if (-1 < (int)(DAT_14cb7c230 - 1)) {
          iVar7 = DAT_14cb7c230 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar15 = local_a0 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar13) {
          iVar8 = iVar13;
        }
        if (iVar13 < iVar7) {
          lVar16 = 0;
          do {
            uVar10 = puVar5[lVar17 + lVar16 + 1];
            if (uVar10 != 0) {
              uVar14 = (ulonglong)(iVar13 + (int)lVar16 + 1);
              uVar6 = 0xffffffff;
              goto LAB_1405f72d3;
            }
            iVar15 = iVar15 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar8 - lVar17 != lVar16);
          uVar6 = 0xffffffff;
          iVar13 = iVar8;
        }
        uVar14 = (ulonglong)(iVar13 + 1);
        uVar10 = DAT_14cb7c230;
      }
      else {
LAB_1405f72d3:
        uVar12 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar12 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        uVar10 = (iVar15 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if ((int)DAT_14cb7c230 <= (int)uVar10) {
          uVar10 = DAT_14cb7c230;
        }
      }
      puVar5 = (uint *)(ulonglong)uVar10;
    } while (uVar10 != (uint)local_98);
  }
LAB_1405f7318:
  if ((local_70 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_a4;
}



// FUNCTION 1405f7400 FUN_1405f7400 body=353 status=ok
// SIG undefined FUN_1405f7400(void)

void FUN_1405f7400(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1405f7485;
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
LAB_1405f7485:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1405f756a FUN_1405f756a body=148 status=ok
// SIG undefined FUN_1405f756a(void)

void FUN_1405f756a(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 1405f75fe FUN_1405f75fe body=194 status=ok
// SIG undefined FUN_1405f75fe(void)

void FUN_1405f75fe(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  return;
}



// FUNCTION 1405f76c0 FUN_1405f76c0 body=680 status=ok
// SIG undefined FUN_1405f76c0(void)

void FUN_1405f76c0(longlong *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 2) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = lVar4;
    iVar5 = (int)param_1[2] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 2) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    *param_1 = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  *param_1 = lVar4;
  param_1[1] = lVar4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 5) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    param_1[3] = lVar4;
    iVar5 = (int)param_1[5] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 5) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    param_1[3] = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  param_1[3] = lVar4;
  param_1[4] = lVar4;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*param_2 == '\x01') {
    *(uint *)(param_1 + 8) =
         (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)*(int *)(param_2 + 0x30));
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    param_1[6] = lVar4;
    iVar5 = (int)param_1[8] * *(int *)(param_2 + 0x44);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar3 = uVar1 & 0x7fff;
    *(uint *)(param_1 + 8) = (uint)(uVar1 >> 0xf);
    lVar4 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar1 < 0) {
      lVar4 = (ulonglong)(uVar3 * *(int *)(lVar4 + 0x80)) + *(longlong *)(lVar4 + 0x70);
    }
    else {
      iVar5 = **(int **)(lVar4 + 0x20);
      lVar6 = 0;
      if (iVar5 <= (int)uVar3) {
        do {
          uVar3 = uVar3 - iVar5;
          iVar5 = (*(int **)(lVar4 + 0x20))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (iVar5 <= (int)uVar3);
      }
      lVar4 = (longlong)(int)uVar3 + *(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar6 * 8);
    }
    param_1[6] = lVar4;
    iVar5 = (uint)(uVar1 >> 0xf) * *(int *)(*(longlong *)(param_2 + 0x80) + 0x4c);
  }
  lVar4 = lVar4 + (longlong)iVar5 * 4;
  param_1[6] = lVar4;
  param_1[7] = lVar4;
  return;
}



// FUNCTION 1405f7972 FUN_1405f7972 body=74 status=ok
// SIG undefined FUN_1405f7972(void)

void FUN_1405f7972(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    uVar2 = FUN_140316ff8();
    uVar2 = FUN_1405f79bc(uVar2);
    FUN_1447997cc(lVar1,uVar2,0x3f800000,0,0);
    *(undefined1 *)(*param_2 + 0xb0) = 7;
  }
  return;
}



// FUNCTION 1405f79bc FUN_1405f79bc body=151 status=ok
// SIG undefined FUN_1405f79bc(void)

void FUN_1405f79bc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x648);
  if (lVar4 == 0) {
    uVar3 = FUN_1407f787c();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x648) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x650) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x640) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x640));
    }
    *(undefined8 *)(param_1 + 0x650) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1405f7a54 FUN_1405f7a54 body=541 status=ok
// SIG undefined FUN_1405f7a54(void)

undefined8 FUN_1405f7a54(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar6 = (**(code **)(*param_1 + 0x28))();
  if (*(int *)(lVar6 + 0x74) != 0) {
    uVar2 = *(uint *)(lVar6 + 0x70);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1405f7bab;
    plVar8 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar8 != (longlong *)0x0) &&
        ((((int)plVar8[2] == *(int *)(lVar6 + 0x74) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0))
         && (*plVar8 != 0)))) && (lVar6 = FUN_1447210f0(), uVar3 = DAT_14cb1ae68, lVar6 != 0)) {
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_38,uVar3,lVar6);
      plVar8 = local_30;
      if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
        plVar8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar9 = local_30 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_30 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      if (plVar8 != (longlong *)0x0) {
        iVar5 = (int)plVar8[1];
        do {
          plVar9 = (longlong *)0x0;
          if (iVar5 == 0) break;
          LOCK();
          iVar4 = (int)plVar8[1];
          bVar10 = iVar5 == iVar4;
          if (bVar10) {
            *(int *)(plVar8 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
          plVar9 = plVar8;
        } while (!bVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        if (plVar9 != (longlong *)0x0) {
          if (local_38 == 0) {
            uVar7 = 0;
          }
          else {
            lVar6 = (**(code **)(*param_1 + 0x28))(param_1);
            uVar7 = FUN_1405f7c72(local_38,lVar6 + 0xb8);
          }
          LOCK();
          plVar8 = plVar9 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          goto LAB_1405f7bab;
        }
      }
    }
  }
  uVar7 = 0;
LAB_1405f7bab:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 1405f7c72 FUN_1405f7c72 body=460 status=ok
// SIG undefined FUN_1405f7c72(void)

undefined8 FUN_1405f7c72(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0xa0) != *(int *)(param_1 + 0xcc)) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar10 = (uint)lVar2 & 0xffff;
    uVar8 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    uVar8 = (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar7) +
            (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar7 >> 4);
    uVar4 = uVar8 >> 0xd ^
            ((int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar10) +
             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar10 >> 4)) - uVar8;
    uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar8) - uVar4;
    uVar10 = uVar7 >> 0xd ^ (uVar8 - uVar4) - uVar7;
    uVar8 = uVar10 >> 0xc ^ (uVar4 - uVar7) - uVar10;
    uVar4 = uVar8 << 0x10 ^ (uVar7 - uVar10) - uVar8;
    uVar7 = uVar4 >> 5 ^ (uVar10 - uVar8) - uVar4;
    uVar8 = uVar7 >> 3 ^ (uVar8 - uVar4) - uVar7;
    uVar4 = uVar8 << 10 ^ (uVar4 - uVar7) - uVar8;
    lVar5 = param_1 + 0xd0;
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xd8);
    }
    iVar9 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xe0) - 1U &
                             (uVar4 >> 0xf ^ uVar7 - (uVar8 + uVar4))) * 4);
    if (iVar9 != -1) {
      while( true ) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar9 * 0x28);
        if ((*plVar1 == lVar2) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x98) + 8 + (longlong)iVar9 * 0x28) == lVar3))
        break;
        iVar9 = (int)plVar1[4];
        if (iVar9 == -1) {
          return 0;
        }
      }
      if (plVar1 == (longlong *)0x0) {
        return 0;
      }
      if (plVar1 + 2 == (longlong *)0x0) {
        return 0;
      }
      lVar2 = plVar1[2];
      iVar9 = *(int *)(lVar2 + 0x110);
      if (iVar9 != 0) {
        uVar4 = *(uint *)(lVar2 + 0x10c);
        if ((int)uVar4 < 0) {
          return 0;
        }
        if (DAT_14c9647dc <= (int)uVar4) {
          return 0;
        }
        puVar6 = (undefined8 *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if (((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == iVar9)) &&
           ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
          return *puVar6;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1405f7e3e FUN_1405f7e3e body=589 status=ok
// SIG undefined FUN_1405f7e3e(void)

void FUN_1405f7e3e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x102) != '\0') || (3 < (byte)(*(char *)(param_1 + 0x101) - 2U)))
  goto LAB_1405f7e6e;
  if ((((*(int *)(param_1 + 0x74) != 0) &&
       ((((uVar2 = *(uint *)(param_1 + 0x70), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc)) &&
         (plVar8 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar8 != (longlong *)0x0)) &&
        (((int)plVar8[2] == *(int *)(param_1 + 0x74) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0))
        )))) && (*plVar8 != 0)) && (lVar7 = FUN_1447210f0(), uVar3 = DAT_14cb1ae68, lVar7 != 0)) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar3,lVar7);
    plVar8 = local_30;
    if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
      plVar8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar9 = local_30 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_30 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (plVar8 != (longlong *)0x0) {
      iVar6 = (int)plVar8[1];
      do {
        plVar9 = (longlong *)0x0;
        if (iVar6 == 0) break;
        LOCK();
        iVar4 = (int)plVar8[1];
        bVar10 = iVar6 == iVar4;
        if (bVar10) {
          *(int *)(plVar8 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
        plVar9 = plVar8;
      } while (!bVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      if (plVar9 != (longlong *)0x0) {
        if (local_38 == 0) {
          *(undefined1 *)(param_1 + 0x102) = 0;
LAB_1405f803e:
          FUN_1405f854c(param_1);
        }
        else {
          cVar5 = FUN_1405f808c(local_38,param_1);
          *(char *)(param_1 + 0x102) = cVar5;
          if (cVar5 == '\0') goto LAB_1405f803e;
        }
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
        goto LAB_1405f7e6e;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x102) = 0;
  FUN_1405f854c(param_1);
LAB_1405f7e6e:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f808c FUN_1405f808c body=870 status=ok
// SIG undefined FUN_1405f808c(void)

undefined8 FUN_1405f808c(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_c8 [39];
  undefined1 local_a1;
  undefined8 *local_a0;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0xc) == 0) goto LAB_1405f8326;
  uVar3 = *(uint *)(param_1 + 8);
  uVar8 = 0;
  if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1405f8238;
  plVar7 = (longlong *)
           ((ulonglong)((uVar3 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
  if ((plVar7 == (longlong *)0x0) ||
     (((((int)plVar7[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))
       || (lVar4 = *plVar7, lVar4 == 0)) || ((*(byte *)(lVar4 + 0x155) & 0x20) != 0))))
  goto LAB_1405f8326;
  bVar2 = *(byte *)(lVar4 + 0x152);
  if ((bVar2 != 1) && ((uVar8 = 0, 6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0))))
  goto LAB_1405f8238;
  plVar7 = (longlong *)FUN_1405f83f4(param_2);
  if (plVar7 != (longlong *)0x0) {
    uVar8 = FUN_1401b0f18();
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar8);
    if (plVar7 != (longlong *)0x0) {
      uVar8 = FUN_1401b0f18();
      plVar9 = (longlong *)FUN_144718840(plVar7,uVar8);
      uVar8 = 0;
      if ((plVar7 == plVar9) || (uVar8 = 0, plVar9 == (longlong *)0x0)) goto LAB_1405f8238;
      local_88 = (code *)0x0;
      uStack_80 = (longlong *)0x0;
      lVar10 = (**(code **)(*plVar9 + 8))(plVar9);
      if (lVar10 == 0) {
        local_88 = (code *)0x0;
        iVar6 = 0;
      }
      else {
        uVar3 = *(uint *)(lVar10 + 0xc);
        local_88 = (code *)CONCAT44(local_88._4_4_,uVar3);
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar10 = 0;
        }
        iVar6 = *(int *)(lVar10 + 0x10);
        if (*(int *)(lVar10 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar12 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar12);
          }
          LOCK();
          iVar6 = *(int *)(lVar10 + 0x10);
          bVar13 = iVar6 == 0;
          if (bVar13) {
            *(int *)(lVar10 + 0x10) = iVar12;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar6 = iVar12;
          }
        }
      }
      local_88 = (code *)CONCAT44(iVar6,(undefined4)local_88);
      cVar5 = FUN_14493c216(&local_88,0);
      if (cVar5 == '\0') {
        uStack_80 = plVar9;
      }
      iVar6 = *(int *)(param_1 + 0x678);
      *(uint *)(param_1 + 0x678) = iVar6 + 1U;
      if (*(uint *)(param_1 + 0x67c) < iVar6 + 1U) {
        FUN_1405f843e(param_1 + 0x670,iVar6);
      }
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x670) + (longlong)iVar6 * 0x10);
      *puVar1 = (undefined4)local_88;
      puVar1[1] = local_88._4_4_;
      puVar1[2] = (undefined4)uStack_80;
      puVar1[3] = uStack_80._4_4_;
      uVar8 = 1;
      if (*(longlong *)(param_1 + 0x668) != 0) goto LAB_1405f8238;
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        puVar11 = (undefined8 *)(lVar4 + 0x458);
      }
      else {
        puVar11 = (undefined8 *)(*(longlong *)(lVar4 + 0x1f0) + 0xf0);
      }
      uVar8 = *puVar11;
      local_a1 = 1;
      local_88 = FUN_140954c68;
      uStack_80 = (longlong *)((ulonglong)uStack_80._4_4_ << 0x20);
      FUN_1405f8e3a(&local_a0,param_1,&local_88);
      local_88 = (code *)0x0;
      uStack_80 = (longlong *)((ulonglong)uStack_80 & 0xffffffff00000000);
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      FUN_14016fdb0(uVar8,&local_90,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      *(undefined8 *)(param_1 + 0x668) = local_90;
      if (local_98 == 0) {
LAB_1405f8311:
        if (local_a0 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_a0 != (undefined8 *)0x0) {
        (**(code **)*local_a0)(local_a0,0);
        FUN_1446efa72(&local_a0,0,0,0x10);
        local_98 = 0;
        goto LAB_1405f8311;
      }
      uVar8 = 1;
      goto LAB_1405f8238;
    }
  }
LAB_1405f8326:
  uVar8 = 0;
LAB_1405f8238:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1405f83f4 FUN_1405f83f4 body=73 status=ok
// SIG undefined FUN_1405f83f4(void)

undefined8 FUN_1405f83f4(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x70);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x74)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 1405f843e FUN_1405f843e body=269 status=ok
// SIG undefined FUN_1405f843e(void)

void FUN_1405f843e(longlong param_1,int param_2)

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



// FUNCTION 1405f854c FUN_1405f854c body=146 status=ok
// SIG undefined FUN_1405f854c(void)

void FUN_1405f854c(longlong param_1)

{
  bool bVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x101) == '\x04') {
    local_20 = *(undefined8 *)(param_1 + 0xf0);
    local_18 = *(longlong *)(param_1 + 0xf8);
    if (local_18 != 0) {
      LOCK();
      *(int *)(local_18 + 8) = *(int *)(local_18 + 8) + 1;
      UNLOCK();
    }
    FUN_1405f862c(param_1,&local_20);
  }
  FUN_1405f85e0(param_1);
  if (*(char *)(param_1 + 0x102) == '\x01') {
    bVar1 = (byte)(*(char *)(param_1 + 0x101) - 2U) < 4;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(param_1 + 0x102) = bVar1;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f85e0 FUN_1405f85e0 body=76 status=ok
// SIG undefined FUN_1405f85e0(void)

void FUN_1405f85e0(longlong param_1)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x101);
  while( true ) {
    cVar2 = FUN_1437e848c(param_1);
    if (cVar2 == '\0') break;
    *(char *)(param_1 + 0x101) = *(char *)(param_1 + 0x101) + '\x01';
  }
  if (*(char *)(param_1 + 0x101) == cVar1) {
    return;
  }
  FUN_140696594(param_1);
  FUN_1405f7e3e(param_1);
  return;
}



// FUNCTION 1405f862c FUN_1405f862c body=2061 status=ok
// SIG undefined FUN_1405f862c(void)

void FUN_1405f862c(longlong param_1,longlong *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 uVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  ulonglong uVar21;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  code *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar5 = *param_2;
  if ((((((((lVar5 == 0) || (*(char *)(lVar5 + 0x68) != '\x01')) ||
          (*(char *)(lVar5 + 0x69) != '\x01')) ||
         ((*(char *)(lVar5 + 0x6a) != '\x01' || (*(longlong *)(lVar5 + 0x10) == 0)))) ||
        (*(longlong *)(param_1 + 0xd8) == *(longlong *)(lVar5 + 0x10))) ||
       (((*(int *)(param_1 + 0x74) == 0 || (uVar3 = *(uint *)(param_1 + 0x70), (int)uVar3 < 0)) ||
        ((DAT_14c9647dc <= (int)uVar3 ||
         (((plVar18 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar18 == (longlong *)0x0 || ((int)plVar18[2] != *(int *)(param_1 + 0x74))) ||
          ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)))))))) ||
      ((lVar5 = *plVar18, lVar5 == 0 || ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0)))) ||
     (lVar12 = FUN_1447210f0(lVar5), lVar12 == 0)) goto LAB_1405f8b0a;
  lVar14 = *param_2;
  lVar15 = param_2[1];
  if (lVar15 != 0) {
    LOCK();
    *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
    UNLOCK();
  }
  plVar18 = *(longlong **)(param_1 + 0xf8);
  *(longlong *)(param_1 + 0xf0) = lVar14;
  *(longlong *)(param_1 + 0xf8) = lVar15;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar18 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  lVar14 = *(longlong *)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(lVar14 + 0x10);
  uVar16 = *(undefined8 *)(lVar14 + 0x80);
  lVar14 = *(longlong *)(lVar14 + 0x88);
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  plVar18 = *(longlong **)(param_1 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = uVar16;
  *(longlong *)(param_1 + 0xe8) = lVar14;
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar18 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 0xd8);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar13 = FUN_140927942();
    uVar13 = FUN_14477b664(uVar13);
    *(undefined8 *)(param_1 + 0x60) = uVar13;
  }
  lVar14 = FUN_140927942();
  uVar13 = FUN_140927942();
  FUN_1402d1bfa(&local_50,uVar13,uVar16);
  if (*(code **)(param_1 + 0x58) != local_50) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(code **)(param_1 + 0x58) = local_50;
  lVar15 = FUN_140927942();
  if (lVar14 == 0) {
LAB_1405f884d:
    lVar15 = lVar14;
  }
  else if (lVar15 == 0) {
    lVar15 = 0;
  }
  else if ((*(int *)(lVar15 + 0x38) <= *(int *)(lVar14 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8) ==
           lVar15 + 0x30)) goto LAB_1405f884d;
  if (*(longlong *)(param_1 + 0x60) != lVar15) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  uVar13 = FUN_14477b664(lVar15);
  lVar14 = FUN_14477b664(uVar13);
  *(longlong *)(param_1 + 0x60) = lVar14;
  if ((lVar14 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    *(undefined8 *)(param_1 + 0x68) = uVar16;
  }
  uVar16 = FUN_1401b0f18();
  local_58 = (longlong *)FUN_144718840(lVar5,uVar16);
  (**(code **)(*local_58 + 0x68))();
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) < 0) {
    FUN_1403de8ba(param_1 + 0x78,0);
  }
  plVar18 = (longlong *)(param_1 + 0xd8);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) < 0) {
    FUN_1403de8ba(param_1 + 0x88,0);
  }
  plVar6 = (longlong *)*plVar18;
  if (plVar6 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar6 + 0x4e) == '\0') {
      *(undefined1 *)((longlong)plVar6 + 0x4e) = 1;
      *(undefined4 *)(plVar6 + 0xb) = 0;
      if (*(int *)((longlong)plVar6 + 0x5c) < 0) {
        FUN_1403de8ba(plVar6 + 10,0);
      }
      *(undefined4 *)(plVar6 + 0xd) = 0;
      if (*(int *)((longlong)plVar6 + 0x6c) < 0) {
        FUN_1403de8ba(plVar6 + 0xc,0);
      }
      (**(code **)(*plVar6 + 0x110))(plVar6,plVar6 + 10);
    }
    FUN_14094f414(param_1 + 0x78,plVar6 + 10);
    bVar2 = *(byte *)(lVar12 + 0x152);
    if ((bVar2 == 1) || ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) {
      (**(code **)(*(longlong *)*plVar18 + 0x138))((longlong *)*plVar18,lVar5);
    }
  }
  uVar16 = FUN_14050fd64();
  lVar12 = *plVar18;
  if (DAT_14cae8b20 == 0) {
    local_50 = (code *)&LAB_14355090c;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_70 = &local_50;
    local_78 = &LAB_147b8e16d;
    local_80 = (code *)&LAB_140810a38;
    local_88 = L"Engine";
    local_90 = 0x800000000;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar14 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_50 = FUN_1449e2820;
    local_60 = FUN_14081d0ea;
    local_68 = FUN_14081d0ea;
    local_70 = &local_50;
    local_78 = &LAB_1468c5283;
    local_80 = FUN_142809da0;
    local_88 = L"Engine";
    local_90 = 0x400000000;
    local_98 = 0x10000000;
    local_a0 = 8;
    local_a8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar15 = *(longlong *)(lVar5 + 0x20);
  if (lVar15 == 0) {
    lVar19 = 0;
  }
  else {
    iVar11 = *(int *)(lVar14 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < iVar11) ||
         (lVar19 = lVar15,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)iVar11 * 8) !=
         lVar14 + 0x30)) {
        lVar19 = 0;
      }
    } while ((lVar19 == 0) && (lVar15 = *(longlong *)(lVar15 + 0x20), lVar15 != 0));
  }
  uVar9 = FUN_1408ef522(uVar16,lVar19,lVar12);
  *(undefined1 *)(param_1 + 0x100) = uVar9;
  (**(code **)(*local_58 + 0x48))(local_58,plVar18);
  plVar6 = (longlong *)(param_1 + 0x28);
  iVar11 = *(int *)(param_1 + 0x3c);
  *(int *)(param_1 + 0x3c) = iVar11 + 1;
  uVar17 = (ulonglong)*(int *)(param_1 + 0x30);
  if ((longlong)uVar17 < 1) {
    *(int *)(param_1 + 0x3c) = iVar11;
  }
  else {
    bVar20 = false;
    do {
      lVar12 = uVar17 * 0x10 + -8;
      uVar21 = uVar17;
      while (((*(int *)(*plVar6 + lVar12) != 0 &&
              (plVar7 = *(longlong **)(*plVar6 + -8 + lVar12), plVar7 != (longlong *)0x0)) &&
             (cVar10 = (**(code **)(*plVar7 + 0x60))(), cVar10 != '\0'))) {
        lVar12 = lVar12 + -0x10;
        bVar8 = uVar21 < 2;
        uVar21 = uVar21 - 1;
        if (bVar8) {
          iVar11 = *(int *)(param_1 + 0x3c) + -1;
          *(int *)(param_1 + 0x3c) = iVar11;
          if (bVar20) goto LAB_1405f8a55;
          goto LAB_1405f8ac1;
        }
      }
      uVar17 = uVar21 - 1;
      bVar20 = true;
    } while (1 < uVar21);
    iVar11 = *(int *)(param_1 + 0x3c) + -1;
    *(int *)(param_1 + 0x3c) = iVar11;
LAB_1405f8a55:
    if (iVar11 < 1) {
      uVar3 = *(uint *)(param_1 + 0x30);
      uVar4 = uVar3;
      if (0 < (int)uVar3) {
        iVar11 = 0;
        do {
          if (((*(int *)(*plVar6 + 8 + (longlong)iVar11 * 0x10) == 0) ||
              (plVar18 = *(longlong **)(*plVar6 + (longlong)iVar11 * 0x10),
              plVar18 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar18 + 0x28))(), cVar10 != '\0')) {
            FUN_14005b288(plVar6,iVar11);
            FUN_14005b248(plVar6);
          }
          else {
            iVar11 = iVar11 + 1;
          }
          uVar4 = *(uint *)(param_1 + 0x30);
        } while (iVar11 < (int)uVar4);
      }
      plVar18 = (longlong *)(ulonglong)uVar4;
      iVar11 = 2;
      if (2 < (int)(uVar4 * 2)) {
        iVar11 = uVar4 * 2;
      }
      *(int *)(param_1 + 0x38) = iVar11;
      if ((iVar11 < (int)uVar3) && (*(uint *)(param_1 + 0x34) != uVar4)) {
        FUN_14045812c(plVar6);
      }
    }
  }
LAB_1405f8ac1:
  FUN_1448a8284(plVar6);
  uVar16 = *(undefined8 *)(param_1 + 0xd8);
  iVar11 = *(int *)(param_1 + 0x54);
  *(int *)(param_1 + 0x54) = iVar11 + 1;
  uVar17 = (ulonglong)*(int *)(param_1 + 0x48);
  if ((longlong)uVar17 < 1) {
    *(int *)(param_1 + 0x54) = iVar11;
  }
  else {
    plVar6 = (longlong *)(param_1 + 0x40);
    bVar20 = false;
    do {
      lVar12 = uVar17 * 0x10 + -8;
      uVar21 = uVar17;
      while (((*(int *)(*plVar6 + lVar12) != 0 &&
              (plVar7 = *(longlong **)(*plVar6 + -8 + lVar12), plVar7 != (longlong *)0x0)) &&
             (plVar18 = local_58, cVar10 = (**(code **)(*plVar7 + 0x60))(plVar7,local_58,uVar16),
             cVar10 != '\0'))) {
        lVar12 = lVar12 + -0x10;
        bVar8 = uVar21 < 2;
        uVar21 = uVar21 - 1;
        if (bVar8) {
          iVar11 = *(int *)(param_1 + 0x54) + -1;
          *(int *)(param_1 + 0x54) = iVar11;
          if (bVar20) goto LAB_1405f8d7b;
          goto LAB_1405f8ae9;
        }
      }
      uVar17 = uVar21 - 1;
      bVar20 = true;
    } while (1 < uVar21);
    iVar11 = *(int *)(param_1 + 0x54) + -1;
    *(int *)(param_1 + 0x54) = iVar11;
LAB_1405f8d7b:
    if (iVar11 < 1) {
      uVar3 = *(uint *)(param_1 + 0x48);
      uVar4 = uVar3;
      if (0 < (int)uVar3) {
        iVar11 = 0;
        do {
          if (((*(int *)(*plVar6 + 8 + (longlong)iVar11 * 0x10) == 0) ||
              (plVar18 = *(longlong **)(*plVar6 + (longlong)iVar11 * 0x10),
              plVar18 == (longlong *)0x0)) ||
             (cVar10 = (**(code **)(*plVar18 + 0x28))(), cVar10 != '\0')) {
            FUN_14005b288(plVar6,iVar11);
            FUN_14005b248(plVar6);
          }
          else {
            iVar11 = iVar11 + 1;
          }
          uVar4 = *(uint *)(param_1 + 0x48);
        } while (iVar11 < (int)uVar4);
      }
      plVar18 = (longlong *)(ulonglong)uVar4;
      iVar11 = 2;
      if (2 < (int)(uVar4 * 2)) {
        iVar11 = uVar4 * 2;
      }
      *(int *)(param_1 + 0x50) = iVar11;
      if ((iVar11 < (int)uVar3) && (*(uint *)(param_1 + 0x4c) != uVar4)) {
        FUN_14045812c(plVar6);
      }
    }
  }
LAB_1405f8ae9:
  if ((*(byte *)(lVar5 + 0x348) & 4) != 0) {
    uVar17 = CONCAT71((int7)((ulonglong)plVar18 >> 8),*(byte *)(lVar5 + 0x348)) & 0xffffffffffffff08
    ;
    FUN_1405f107a(lVar5,CONCAT71((int7)(uVar17 >> 8),(byte)uVar17 >> 3));
  }
  FUN_1405f85e0(param_1);
LAB_1405f8b0a:
  plVar18 = (longlong *)param_2[1];
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar18 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar1 = (int *)((longlong)plVar18 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405f8e3a FUN_1405f8e3a body=349 status=ok
// SIG undefined FUN_1405f8e3a(void)

longlong * FUN_1405f8e3a(longlong *param_1,longlong param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 uVar12;
  bool bVar13;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar10 = *(longlong **)(param_2 + 0x18);
  bVar9 = true;
  if (plVar10 == (longlong *)0x0) {
LAB_1405f8f2e:
    uVar12 = 0;
    plVar10 = (longlong *)0x0;
  }
  else {
    iVar8 = (int)plVar10[1];
    do {
      if (iVar8 == 0) goto LAB_1405f8f2e;
      LOCK();
      iVar6 = (int)plVar10[1];
      bVar13 = iVar8 == iVar6;
      if (bVar13) {
        *(int *)(plVar10 + 1) = iVar8 + 1;
        iVar6 = iVar8;
      }
      iVar8 = iVar6;
      UNLOCK();
    } while (!bVar13);
    uVar12 = *(undefined8 *)(param_2 + 0x10);
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    bVar9 = false;
  }
  *puVar5 = &PTR_LAB_14ab67120;
  *(undefined1 *)(puVar5 + 1) = *param_4;
  LOCK();
  UNLOCK();
  lVar11 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar11 == 0) {
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar5[2] = lVar11;
  *puVar5 = &PTR_FUN_14ab670b0;
  puVar5[3] = uVar12;
  puVar5[4] = plVar10;
  if (bVar9) {
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  return param_1;
}



// FUNCTION 1405f8fa6 FUN_1405f8fa6 body=59 status=ok
// SIG undefined FUN_1405f8fa6(void)

undefined8 * FUN_1405f8fa6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b5ea7a0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405f8fe2 FUN_1405f8fe2 body=96 status=ok
// SIG undefined FUN_1405f8fe2(void)

ulonglong FUN_1405f8fe2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1405f9025:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1405f9025;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 1405f9042 FUN_1405f9042 body=830 status=ok
// SIG undefined FUN_1405f9042(void)

void FUN_1405f9042(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 auStack_208 [40];
  undefined8 local_1e0;
  longlong *local_1d8;
  undefined8 local_1d0;
  undefined1 local_1c8 [192];
  undefined1 *local_108;
  int local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [128];
  undefined1 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [16];
  undefined1 *local_58;
  longlong lStack_50;
  undefined1 local_48;
  undefined1 uStack_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar2 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar2 + 0x1e0) == *(char *)((longlong)param_3 + 0x189)) {
    uVar6 = *param_4;
    lVar2 = param_4[1];
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
      UNLOCK();
    }
    lVar4 = *(longlong *)(param_1 + 0x110);
    *(undefined8 *)(param_1 + 0x108) = uVar6;
    *(longlong *)(param_1 + 0x110) = lVar2;
    if (lVar4 != 0) {
      LOCK();
      piVar1 = (int *)(lVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_208);
      }
    }
  }
  else {
    local_1d0 = *param_3;
    local_108 = (undefined1 *)0x0;
    iVar10 = *(int *)(param_3 + 0x1a);
    local_100 = iVar10;
    if (iVar10 == 0) {
      local_fc = 8;
    }
    else {
      puVar9 = param_3 + 1;
      if ((undefined8 *)param_3[0x19] != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)param_3[0x19];
      }
      FUN_1405f9532(local_1c8,iVar10);
      puVar8 = local_108;
      if (local_108 == (undefined1 *)0x0) {
        puVar8 = local_1c8;
      }
      FUN_1405f94c6(puVar8,puVar9,iVar10);
    }
    local_78 = (undefined1 *)0x0;
    iVar10 = *(int *)(param_3 + 0x2c);
    local_70 = iVar10;
    if (iVar10 == 0) {
      local_6c = 8;
    }
    else {
      puVar9 = param_3 + 0x1b;
      if ((undefined8 *)param_3[0x2b] != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)param_3[0x2b];
      }
      FUN_1405f945e(auStack_f8,iVar10);
      puVar8 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar8 = auStack_f8;
      }
      FUN_1405f93fb(puVar8,puVar9,iVar10);
    }
    local_58 = (undefined1 *)0x0;
    lStack_50 = 0;
    iVar10 = *(int *)(param_3 + 0x30);
    uVar5 = iVar10 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar5) {
      uVar7 = 0x80;
      if (0x80 < uVar5) {
        uVar7 = uVar5;
      }
      lStack_50 = (ulonglong)uVar7 << 0x20;
      FUN_1446efbd8(auStack_68,0);
      iVar10 = *(int *)(param_3 + 0x30);
    }
    lStack_50 = CONCAT44(lStack_50._4_4_,iVar10);
    if (iVar10 != 0) {
      puVar9 = param_3 + 0x2d;
      if ((undefined8 *)param_3[0x2f] != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)param_3[0x2f];
      }
      puVar8 = auStack_68;
      if (local_58 != (undefined1 *)0x0) {
        puVar8 = local_58;
      }
      memcpy(puVar8,puVar9,(ulonglong)(iVar10 + 0x1fU >> 3 & 0xfffffffc));
    }
    _local_48 = CONCAT11(*(undefined1 *)(lVar2 + 0x1e0),(char)*(undefined2 *)(param_3 + 0x31));
    uVar6 = FUN_1405f939e(param_1);
    FUN_1405f96d0(&local_1e0,uVar6,&local_1d0);
    if ((undefined8 *)(param_1 + 0x108) != &local_1e0) {
      *(undefined8 *)(param_1 + 0x108) = local_1e0;
      local_1e0 = 0;
      plVar3 = *(longlong **)(param_1 + 0x110);
      *(longlong **)(param_1 + 0x110) = local_1d8;
      local_1d8 = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
      }
    }
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_1d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_1d8 + 0x10))();
      }
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405f939e FUN_1405f939e body=93 status=ok
// SIG undefined FUN_1405f939e(void)

undefined8 FUN_1405f939e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x4c) != 0)) &&
      (uVar1 = *(uint *)(lVar2 + 0x48), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(lVar2 + 0x4c))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && ((longlong *)*plVar4 != (longlong *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x0001405f93f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*(longlong *)*plVar4 + 0x180))();
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1405f93fb FUN_1405f93fb body=98 status=ok
// SIG undefined FUN_1405f93fb(void)

void FUN_1405f93fb(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined4 *)(param_1 + 8 + lVar3) = *(undefined4 *)(param_2 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405f945e FUN_1405f945e body=104 status=ok
// SIG undefined FUN_1405f945e(void)

void FUN_1405f945e(longlong param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar4 = 8;
    if (8 < param_2) {
      iVar3 = 0;
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      iVar1 = (int)(uVar2 >> 4);
      iVar4 = 0x7fffffff;
      if (((int)param_2 <= iVar1) && (iVar4 = iVar1, iVar1 < 1)) goto LAB_1405f948e;
    }
    FUN_1405f95ac(param_1,0,iVar4,0x10);
    iVar3 = iVar4;
  }
LAB_1405f948e:
  *(int *)(param_1 + 0x8c) = iVar3;
  return;
}



// FUNCTION 1405f94c6 FUN_1405f94c6 body=108 status=ok
// SIG undefined FUN_1405f94c6(void)

void FUN_1405f94c6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3);
      *(longlong *)(param_1 + lVar3) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined1 *)(param_1 + lVar3 + 0x10) = *(undefined1 *)(param_2 + lVar3 + 0x10);
      *(undefined8 *)(param_1 + lVar3 + 8) = *(undefined8 *)(param_2 + lVar3 + 8);
      lVar3 = lVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1405f9532 FUN_1405f9532 body=121 status=ok
// SIG undefined FUN_1405f9532(void)

void FUN_1405f9532(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      iVar4 = 0;
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if (((int)param_2 <= iVar2) && (iVar3 = iVar2, iVar2 < 1)) goto LAB_1405f9562;
    }
    FUN_1405f963a(param_1,0,iVar3,0x18);
    iVar4 = iVar3;
  }
LAB_1405f9562:
  *(int *)(param_1 + 0xcc) = iVar4;
  return;
}



// FUNCTION 1405f95ac FUN_1405f95ac body=141 status=ok
// SIG undefined FUN_1405f95ac(void)

void FUN_1405f95ac(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 1405f963a FUN_1405f963a body=149 status=ok
// SIG undefined FUN_1405f963a(void)

void FUN_1405f963a(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1405f96d0 FUN_1405f96d0 body=441 status=ok
// SIG undefined FUN_1405f96d0(void)

undefined8 * FUN_1405f96d0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  uVar2 = DAT_14cb1c840;
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_48,uVar2,param_2);
    plVar5 = local_40;
    if ((local_48 == 0) || (local_40 == (longlong *)0x0)) {
      plVar5 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_40 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
        }
      }
    }
    if (plVar5 != (longlong *)0x0) {
      iVar4 = (int)plVar5[1];
      do {
        plVar6 = (longlong *)0x0;
        if (iVar4 == 0) break;
        LOCK();
        iVar3 = (int)plVar5[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(plVar5 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
        UNLOCK();
        plVar6 = plVar5;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
      if (plVar6 != (longlong *)0x0) {
        if (local_48 == 0) {
          *param_1 = 0;
          param_1[1] = 0;
        }
        else {
          FUN_14058e2ce(*(undefined8 *)(local_48 + 0x598),param_1,param_3);
        }
        LOCK();
        plVar5 = plVar6 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        goto LAB_1405f97b4;
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1405f97b4:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1405f988a FUN_1405f988a body=132 status=ok
// SIG undefined FUN_1405f988a(void)

undefined8 * FUN_1405f988a(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b0d0cf0;
  if (*(char *)((longlong)param_1 + 0x264) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  }
  if (*(char *)(param_1 + 0x4a) == '\x01') {
    *(undefined1 *)(param_1 + 0x4a) = 0;
  }
  FUN_1405f990e(param_1 + 0x1f);
  plVar2 = (longlong *)param_1[0x1c];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x280);
  }
  return param_1;
}



// FUNCTION 1405f990e FUN_1405f990e body=61 status=ok
// SIG undefined FUN_1405f990e(void)

void FUN_1405f990e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (*(longlong *)(param_1 + 0x120) == 0) {
    lVar1 = param_1;
  }
  FUN_1405f994b(lVar1,*(undefined4 *)(param_1 + 0x128));
  if (*(longlong *)(param_1 + 0x120) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1405f994b FUN_1405f994b body=27 status=ok
// SIG undefined FUN_1405f994b(void)

void FUN_1405f994b(longlong param_1,int param_2)

{
  byte *pbVar1;
  
  if (param_2 != 0) {
    pbVar1 = (byte *)(param_1 + 0x58);
    do {
      if (*pbVar1 < 6) {
        *pbVar1 = 0xff;
      }
      pbVar1 = pbVar1 + 0x60;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405f9966 FUN_1405f9966 body=93 status=ok
// SIG undefined FUN_1405f9966(void)

void FUN_1405f9966(longlong param_1,int param_2)

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
    FUN_1405f99c4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1405f99c4 FUN_1405f99c4 body=469 status=ok
// SIG undefined FUN_1405f99c4(void)

void FUN_1405f99c4(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4)

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
LAB_1405f9af4:
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
LAB_1405f9b31:
    *param_1 = _Dst;
    return;
  }
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xea8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1405f9a2e;
LAB_1405f9a23:
  FUN_14472e504(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1405f9a2e:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (_Size < 0xffa1) goto code_r0x0001405f9a5b;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(ulonglong *)(puVar4 + 0x10) = (longlong)puVar4 + _Size + 0x60;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1405f9ab1:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1405f9b31;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1405f9af4;
code_r0x0001405f9a5b:
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
      goto LAB_1405f9ab1;
    }
  }
  goto LAB_1405f9a23;
}



// FUNCTION 1405f9ba8 FUN_1405f9ba8 body=31 status=ok
// SIG undefined FUN_1405f9ba8(void)

undefined8 FUN_1405f9ba8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1405f9bc8 FUN_1405f9bc8 body=59 status=ok
// SIG undefined FUN_1405f9bc8(void)

undefined1 FUN_1405f9bc8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x28));
  FUN_1405f9c04(param_2,lVar1 + 0x70);
  if ((LPCRITICAL_SECTION)(lVar1 + 0x28) != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 0x28));
  }
  return 1;
}



// FUNCTION 1405f9c04 FUN_1405f9c04 body=1464 status=ok
// SIG undefined FUN_1405f9c04(void)

void FUN_1405f9c04(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined4 uVar18;
  int iVar19;
  uint *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStack_98 [44];
  uint local_6c;
  longlong *local_68;
  uint *local_60;
  undefined4 local_58 [2];
  byte *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar16 = *(uint *)(param_1 + 1);
  uVar2 = uVar16 - *(int *)((longlong)param_1 + 0x34);
  uVar13 = ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) + uVar2;
  if (uVar2 < uVar13) {
    if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar13);
    }
    uVar2 = uVar13 - uVar16;
    if (uVar2 != 0 && (int)uVar16 <= (int)uVar13) {
      iVar19 = *(int *)((longlong)param_1 + 0xc);
      uVar23 = uVar16;
      if (iVar19 < (int)uVar13) {
        FUN_1446f4a44(param_1);
        uVar23 = *(uint *)(param_1 + 1);
        iVar19 = *(int *)((longlong)param_1 + 0xc);
      }
      *(uint *)(param_1 + 1) = uVar23 + uVar2;
      if (iVar19 - uVar23 < uVar2) {
        FUN_1447711aa(param_1);
      }
      if ((int)uVar23 < (int)uVar13) {
        lVar17 = *param_1;
        uVar21 = (ulonglong)uVar13;
        iVar19 = *(int *)((longlong)param_1 + 0x34);
        puVar12 = (undefined4 *)(uVar21 * 0x20 + lVar17 + -0x1c);
        do {
          iVar14 = (int)uVar21;
          if (iVar19 != 0) {
            *(int *)(lVar17 + (longlong)(int)param_1[6] * 0x20) = iVar14 + -1;
          }
          puVar12[-1] = 0xffffffff;
          uVar18 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar18 = (undefined4)param_1[6];
          }
          uVar21 = uVar21 - 1;
          *puVar12 = uVar18;
          *(int *)(param_1 + 6) = iVar14 + -1;
          iVar19 = *(int *)((longlong)param_1 + 0x34) + 1;
          *(int *)((longlong)param_1 + 0x34) = iVar19;
          puVar12 = puVar12 + -8;
        } while ((longlong)(int)uVar23 < (longlong)uVar21);
      }
      if (uVar16 == 0) {
        plVar11 = param_1 + 2;
        *(uint *)(param_1 + 5) = uVar2;
        uVar16 = uVar2 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar16) {
          FUN_14499171c(plVar11,0,uVar16,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar2 + 0x1f & 0xffffffe0;
        }
        plVar8 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar8 = plVar11;
        }
        if (uVar2 < 0x101) {
          uVar16 = uVar16 + (uVar16 == 0);
        }
        memset(plVar8,0,(ulonglong)(uVar16 << 2));
        iVar19 = (int)param_1[5];
        iVar14 = iVar19 + 0x1f;
        if (-1 < iVar19) {
          iVar14 = iVar19;
        }
        if (iVar19 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar11 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar19 % 0x20);
          *(uint *)((longlong)plVar11 + (longlong)(iVar14 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar14 >> 5) * 4) << (bVar4 & 0x1f))
               >> (bVar4 & 0x1f);
        }
      }
      else if (-1 < (int)uVar2) {
        plVar11 = param_1 + 2;
        iVar19 = (int)param_1[5];
        if (uVar13 != uVar16) {
          if (iVar19 == 0) {
            iVar14 = -1;
          }
          else {
            iVar14 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar14 = iVar19 + -1;
            }
            iVar14 = iVar14 >> 5;
          }
          iVar5 = iVar19 + uVar2;
          iVar7 = iVar19 + uVar2 + -1;
          iVar10 = iVar19 + uVar2 + 0x1e;
          if (-1 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar10 >> 5 == iVar14) {
            *(int *)(param_1 + 5) = iVar5;
          }
          else {
            if (*(int *)((longlong)param_1 + 0x2c) < iVar5) {
              if (iVar5 + 0x1fU < 0xa0) {
                iVar14 = 0x80;
                iVar10 = iVar19;
              }
              else {
                uVar16 = iVar5 + 0x1fU >> 5;
                if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
                  uVar23 = 4;
                  if (4 < uVar16) {
                    uVar23 = uVar16;
                  }
                }
                else {
                  uVar23 = (uVar16 * 3 >> 3) + uVar16 + 0x10;
                }
                uVar21 = FUN_144a3809e(uVar23 << 2,0);
                iVar10 = (int)(uVar21 >> 2);
                iVar14 = -0x20;
                if ((int)uVar16 <= iVar10) {
                  iVar14 = iVar10 << 5;
                }
                iVar10 = (int)param_1[5];
              }
              *(int *)((longlong)param_1 + 0x2c) = iVar14;
              FUN_1446efbd8(plVar11,iVar10);
              iVar5 = (int)param_1[5] + uVar2;
            }
            iVar14 = iVar5 + 0x1f;
            if (-1 < iVar5) {
              iVar14 = iVar5;
            }
            *(int *)(param_1 + 5) = iVar5;
            if (iVar5 % 0x20 != 0) {
              plVar8 = (longlong *)param_1[4];
              if ((longlong *)param_1[4] == (longlong *)0x0) {
                plVar8 = plVar11;
              }
              bVar4 = -(char)(iVar5 % 0x20);
              *(uint *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4) << (bVar4 & 0x1f)
                         ) >> (bVar4 & 0x1f);
            }
          }
        }
        FUN_1447c6044(plVar11,iVar19,uVar2,0);
      }
    }
    iVar19 = 1;
    if (3 < uVar13) {
      uVar16 = (uVar13 | 1) + 0xe;
      iVar19 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar19 == 0; iVar19 = iVar19 + -1) {
        }
      }
      iVar19 = 1 << ((byte)iVar19 & 0x1f);
    }
    if (((int)param_1[9] == 0) || ((int)param_1[9] < iVar19)) {
      *(int *)(param_1 + 9) = iVar19;
      FUN_1405fa47a(param_1);
    }
  }
  iVar19 = (int)param_2[5];
  if (iVar19 == 0) {
    uVar22 = 1;
    uVar21 = 0;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar3 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar3 = (uint *)(param_2 + 2);
    }
    uVar16 = *puVar3;
    if (uVar16 == 0) {
      iVar14 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar14 = iVar19 + -1;
      }
      uVar21 = 0;
      uVar9 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar9 = uVar21;
      }
      iVar14 = 0;
      do {
        if (uVar9 == uVar21) goto LAB_1405f9c64;
        iVar14 = iVar14 + 0x20;
        uVar16 = puVar3[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar21 = 0;
      iVar14 = 0;
    }
    uVar22 = (ulonglong)(-uVar16 & uVar16);
    uVar9 = uVar22 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar10 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar10) {
      iVar10 = iVar19;
    }
  }
  if (iVar10 != iVar19) {
    uVar16 = 0xffffffff;
    local_68 = param_2;
    local_60 = (uint *)(param_2 + 2);
    do {
      lVar17 = *local_68;
      lVar15 = (longlong)iVar10 * 0x20;
      local_6c = uVar16;
      FUN_1405fa1be(param_1,local_58);
      pbVar1 = local_50;
      bVar4 = *(byte *)(lVar17 + lVar15);
      *local_50 = bVar4;
      plVar11 = *(longlong **)(lVar17 + 8 + lVar15);
      *(longlong **)(local_50 + 8) = plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 8))();
        bVar4 = *pbVar1;
      }
      puVar3 = local_60;
      *(undefined4 *)(pbVar1 + 0x10) = *(undefined4 *)(lVar17 + lVar15 + 0x10);
      pbVar1[0x18] = 0xff;
      pbVar1[0x19] = 0xff;
      pbVar1[0x1a] = 0xff;
      pbVar1[0x1b] = 0xff;
      uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      iVar10 = 1;
      if (3 < uVar16) {
        uVar9 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
        lVar17 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar10 = 1 << ((byte)lVar17 & 0x1f);
      }
      if (((int)uVar16 < 1) || (iVar10 <= (int)param_1[9])) {
        uVar16 = (int)param_1[9] - 1U & (uint)bVar4;
        *(uint *)(pbVar1 + 0x1c) = uVar16;
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = param_1 + 7;
        }
        *(undefined4 *)(pbVar1 + 0x18) =
             *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar16) * 4);
        plVar11 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar11 = param_1 + 7;
        }
        *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar16) * 4) =
             local_58[0];
      }
      else {
        *(int *)(param_1 + 9) = iVar10;
        FUN_1405fa47a(param_1);
      }
      uVar16 = local_6c & ~(uint)uVar22;
      puVar20 = (uint *)local_68[4];
      if ((uint *)local_68[4] == (uint *)0x0) {
        puVar20 = puVar3;
      }
      iVar7 = (int)local_68[5];
      iVar10 = (int)uVar21;
      lVar17 = (longlong)iVar10;
      uVar2 = puVar20[lVar17] & uVar16;
      if (uVar2 == 0) {
        iVar5 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar5 = iVar7 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar10) {
          iVar6 = iVar10;
        }
        if (iVar10 < iVar5) {
          lVar15 = 0;
          do {
            uVar2 = puVar20[lVar17 + lVar15 + 1];
            if (uVar2 != 0) {
              uVar21 = (ulonglong)(iVar10 + (int)lVar15 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1405f9dda;
            }
            iVar14 = iVar14 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar6 - lVar17 != lVar15);
          uVar16 = 0xffffffff;
          iVar10 = iVar6;
        }
        uVar21 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar7;
      }
      else {
LAB_1405f9dda:
        uVar22 = (ulonglong)(-uVar2 & uVar2);
        uVar9 = uVar22 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar10 = (iVar14 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar10) {
          iVar10 = iVar7;
        }
      }
    } while (iVar10 != iVar19);
  }
LAB_1405f9c64:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405fa1be FUN_1405fa1be body=700 status=ok
// SIG undefined FUN_1405fa1be(void)

int * FUN_1405fa1be(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar15);
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
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_1405fa3a5;
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
LAB_1405fa3a5:
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
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x20);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar5 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1405fa47a FUN_1405fa47a body=624 status=ok
// SIG undefined FUN_1405fa47a(void)

void FUN_1405fa47a(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  plVar7 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar7,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar7 != 0) {
      FUN_1446efa72(plVar7,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar7,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_1405fa4dc;
  }
  uVar4 = 0;
  do {
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = plVar1;
    }
    *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
         0xffffffff;
    uVar4 = uVar4 + 1;
  } while (uVar9 != uVar4);
LAB_1405fa4dc:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar5 = 0;
    uVar13 = 1;
    iVar14 = 0;
    iVar6 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar14 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar14 = iVar3 + -1;
      }
      uVar5 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar5;
      }
      iVar6 = 0;
      do {
        if (uVar13 == uVar5) {
          return;
        }
        iVar6 = iVar6 + 0x20;
        uVar9 = puVar12[uVar5 + 1];
        uVar5 = uVar5 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar14) {
      iVar14 = iVar3;
    }
  }
  if (iVar14 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar15 = (longlong)iVar14 * 0x20;
      uVar4 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar8 + lVar15);
      *(uint *)(lVar8 + 0x1c + lVar15) = uVar4;
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(undefined4 *)(lVar8 + 0x18 + lVar15) =
           *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = plVar1;
      }
      *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & uVar4) * 4) = iVar14;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar14 = (int)uVar5;
      lVar8 = (longlong)iVar14;
      uVar4 = puVar12[lVar8] & uVar9;
      if (uVar4 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar14) {
          iVar11 = iVar14;
        }
        if (iVar10 <= iVar14) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar6 = iVar6 + 0x20;
          uVar4 = puVar12[lVar8 + lVar15 + 1];
          if (uVar4 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar11 - lVar8 == lVar15) {
            return;
          }
        }
        uVar5 = (ulonglong)(iVar14 + (int)lVar15 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar2 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar14 = (iVar6 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar3);
  }
  return;
}



// FUNCTION 1405fa6ea FUN_1405fa6ea body=124 status=ok
// SIG undefined FUN_1405fa6ea(void)

void FUN_1405fa6ea(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x28;
  lVar5 = (longlong)*(int *)(lVar1 + 0x24);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x28 + 0x20);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x20);
  if (*(longlong *)(*param_1 + 0x10 + (longlong)param_2 * 0x28) != 0) {
    FUN_1400020a8();
  }
  FUN_140600b26(param_1,param_2);
  return;
}



// FUNCTION 1405fa766 FUN_1405fa766 body=228 status=ok
// SIG undefined FUN_1405fa766(void)

longlong FUN_1405fa766(void)

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
  if (DAT_14cb695a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148751119;
    local_40 = FUN_146520db5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"HazardInteractionInterface",&DAT_14cb695a0,FUN_146520d8e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb695a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fa84c FUN_1405fa84c body=151 status=ok
// SIG undefined FUN_1405fa84c(void)

void FUN_1405fa84c(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x68;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 100 + lVar2);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar1 + (longlong)iVar3 * 0x68 + 0x60);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar1 + lVar2 + 0x60);
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140600b9a(lVar1 + lVar2 + 8);
  FUN_1405ff5c8(param_1,param_2);
  return;
}



// FUNCTION 1405fa8e4 FUN_1405fa8e4 body=142 status=ok
// SIG undefined FUN_1405fa8e4(void)

void FUN_1405fa8e4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1405fa972 FUN_1405fa972 body=76 status=ok
// SIG undefined FUN_1405fa972(void)

void FUN_1405fa972(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  bVar7 = true;
  if (((*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0xac)) && (*(int *)(param_1 + 0xd0) == 0)) &&
     (*(int *)(param_1 + 0xe0) == 0)) {
    bVar7 = *(int *)(param_1 + 0xf0) != 0;
  }
  if ((bool)*(char *)(param_1 + 0x118) == bVar7) {
    return;
  }
  *(bool *)(param_1 + 0x118) = bVar7;
  plVar5 = (longlong *)(param_1 + 0x30);
  if (bVar7 == false) {
    FUN_1449db8d8();
    return;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0bab8) {
    FUN_144b3d300(&DAT_14cb0bab8);
    if (DAT_14cb0bab8 == -1) {
      FUN_146408b70(&DAT_14cb0ba00);
      atexit((_func_5014 *)&LAB_14373e0ae);
      _Init_thread_footer(&DAT_14cb0bab8);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  FUN_140548616(&DAT_14cb0ba60);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  if ((longlong)(int)DAT_14cb0ba30 != 0) {
    lVar6 = 0;
    do {
      if (*(longlong **)(DAT_14cb0ba28 + lVar6) == plVar5) goto LAB_144958e23;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)DAT_14cb0ba30 * 0x10 != lVar6);
  }
  if (DAT_14c963ff1 == '\x01') {
    FUN_14032851c(&DAT_14cb0ba00,plVar5);
  }
  else {
    uVar3 = (**(code **)(*plVar5 + 8))(plVar5);
    uVar4 = (**(code **)(*plVar5 + 0x28))(plVar5);
    uVar2 = DAT_14cb0ba30;
    lVar6 = (longlong)(int)DAT_14cb0ba30;
    DAT_14cb0ba30 = DAT_14cb0ba30 + 1;
    if (DAT_14cb0ba34 < DAT_14cb0ba30) {
      FUN_14084398e(&DAT_14cb0ba28,uVar2);
    }
    lVar1 = DAT_14cb0ba28;
    lVar6 = lVar6 * 0x10;
    *(longlong **)(DAT_14cb0ba28 + lVar6) = plVar5;
    *(undefined1 *)(lVar1 + 8 + lVar6) = uVar3;
    *(undefined4 *)(lVar1 + 0xc + lVar6) = uVar4;
  }
LAB_144958e23:
                    /* WARNING: Could not recover jumptable at 0x000144958e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  return;
}



// FUNCTION 1405fa9be FUN_1405fa9be body=70 status=ok
// SIG undefined FUN_1405fa9be(void)

void FUN_1405fa9be(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x80);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x34;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1405faa04 FUN_1405faa04 body=136 status=ok
// SIG undefined FUN_1405faa04(void)

longlong FUN_1405faa04(undefined8 *param_1)

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
    if (DAT_14cb77da0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb77da0,local_40);
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



// FUNCTION 1405faa8e FUN_1405faa8e body=135 status=ok
// SIG undefined FUN_1405faa8e(void)

void FUN_1405faa8e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  bVar2 = *(byte *)(param_2 + 0x38);
  if ((ulonglong)bVar2 != 0) {
    uVar5 = 0;
    do {
      lVar3 = *(longlong *)(param_2 + 0x30);
      if (*(longlong *)(param_2 + 0x30) == 0) {
        lVar3 = param_2;
      }
      plVar1 = (longlong *)(lVar3 + uVar5 * 0x18);
      if (*(byte *)(param_1 + 0x38) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar3 = param_1;
        }
        lVar4 = 0;
        do {
          if ((*(longlong *)(lVar3 + lVar4) == *plVar1) &&
             (*(int *)(lVar3 + 8 + lVar4) == (int)plVar1[1])) goto LAB_1405fab0b;
          lVar4 = lVar4 + 0x18;
        } while ((ulonglong)*(byte *)(param_1 + 0x38) * 0x18 != lVar4);
      }
      FUN_140a6f4d0(param_1);
LAB_1405fab0b:
      uVar5 = uVar5 + 1;
    } while (uVar5 != bVar2);
  }
  return;
}



// FUNCTION 1405fab15 FUN_1405fab15 body=160 status=ok
// SIG undefined FUN_1405fab15(void)

undefined8 * FUN_1405fab15(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if ((DAT_14cb76698 == (longlong *)0x0 || DAT_14cb766a0 == 0) ||
     (cVar1 = (**(code **)(*DAT_14cb76698 + 0x30))(), cVar1 == '\0')) {
    uVar2 = FUN_1405fabb6(&DAT_14cb76688);
    FUN_1405fd040(uVar2);
    *param_1 = uVar2;
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar3[1] = &DAT_100000001;
    *puVar3 = &PTR_FUN_14b3f6150;
    puVar3[2] = uVar2;
    param_1[1] = puVar3;
  }
  else {
    plVar4 = DAT_14cb76698;
    if (DAT_14cb766a0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
  }
  return param_1;
}



// FUNCTION 1405fabb6 FUN_1405fabb6 body=96 status=ok
// SIG undefined FUN_1405fabb6(void)

void FUN_1405fabb6(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1740,0);
    lVar4 = 7;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x5d;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 8;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 1405fac16 FUN_1405fac16 body=212 status=ok
// SIG undefined FUN_1405fac16(void)

void FUN_1405fac16(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 200);
  iVar1 = *(int *)(param_1 + 0xd0);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    if (*param_2 != 0) {
      lVar3 = param_2[1];
    }
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar2 + 8 + lVar5);
      }
      if ((*(longlong *)(lVar2 + lVar5) == *param_2) && (lVar6 == lVar3)) {
        return;
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar4 << 4 != lVar5);
  }
  *(uint *)(param_1 + 0xd0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xd4) < iVar1 + 1U) {
    FUN_1405ff358((longlong *)(param_1 + 200),iVar1);
    lVar2 = *(longlong *)(param_1 + 200);
  }
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar4 * 0x10) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar2 + lVar4 * 0x10 + 8) = param_2[1];
  FUN_1405fa972(param_1);
  return;
}



// FUNCTION 1405facea FUN_1405facea body=1744 status=ok
// SIG undefined FUN_1405facea(void)

void FUN_1405facea(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  longlong *plVar16;
  byte bVar17;
  uint *in_R10;
  undefined7 uVar18;
  uint *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  code **local_d0;
  code *local_c8;
  code *local_c0;
  uint local_b4;
  longlong local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  uint *local_90;
  code *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_1 + 0xdc) = 0x7f7fffff7f7fffff;
  uVar21 = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  local_98 = param_1 + 200;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  local_a8 = param_2;
  if (*(int *)(param_1 + 0xd4) < 0) {
    FUN_1488c0698();
  }
  *(undefined1 *)(param_1 + 0xf1) = 0;
  puVar19 = (uint *)(param_1 + 0x80);
  iVar3 = *(int *)(param_1 + 0x98);
  if (iVar3 == 0) {
    uVar22 = 1;
    iVar15 = 0;
    iVar8 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x90);
    if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
      puVar12 = puVar19;
    }
    uVar14 = *puVar12;
    if (uVar14 == 0) {
      iVar8 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar8 = iVar3 + -1;
      }
      uVar21 = 0;
      uVar22 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar22 = uVar21;
      }
      iVar15 = 0;
      do {
        if (uVar22 == uVar21) {
          fVar26 = 0.0;
          goto LAB_1405fb364;
        }
        iVar15 = iVar15 + 0x20;
        uVar14 = puVar12[uVar21 + 1];
        uVar21 = uVar21 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar21 = 0;
      iVar15 = 0;
    }
    uVar22 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar22 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar8 = (iVar15 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
  }
  fVar26 = 0.0;
  if (iVar8 < iVar3) {
    local_a0 = local_a8 + 0x784;
    uVar14 = 0xffffffff;
    local_90 = puVar19;
    do {
      lVar20 = (longlong)iVar8;
      iVar8 = *(int *)(*(longlong *)(param_1 + 0x70) + 4 + lVar20 * 0x28);
      if ((((iVar8 != 0) &&
           (uVar9 = *(uint *)(*(longlong *)(param_1 + 0x70) + lVar20 * 0x28), -1 < (int)uVar9)) &&
          ((int)uVar9 < DAT_14c9647dc)) &&
         (((plVar16 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
           plVar16 != (longlong *)0x0 && ((int)plVar16[2] == iVar8)) &&
          ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
          lVar13 = *plVar16;
          if ((lVar13 == 0) || (DAT_14c950c29 == '\0')) {
            if (lVar13 == 0) goto LAB_1405faeea;
          }
          else {
            FUN_1456cec3c(lVar13);
          }
          uVar4 = FUN_1405fa766();
          plVar16 = (longlong *)FUN_144718840(lVar13,uVar4);
        }
        else {
LAB_1405faeea:
          plVar16 = (longlong *)0x0;
        }
        lVar5 = (**(code **)(*plVar16 + 0x10))();
        lVar13 = *(longlong *)(lVar5 + 0x80);
        plVar16 = *(longlong **)(lVar5 + 0x5a8);
        uVar18 = (undefined7)((ulonglong)in_R10 >> 8);
        if (plVar16 == local_a8) {
          in_R10 = (uint *)CONCAT71(uVar18,1);
        }
        else if (plVar16 == (longlong *)0x0) {
          in_R10 = (uint *)0x0;
        }
        else {
          in_R10 = (uint *)CONCAT71(uVar18,(longlong *)plVar16[0x36] == local_a8);
        }
        if (((*(longlong *)(lVar5 + 0x5d0) == 0) || (local_a8 == (longlong *)0x0)) ||
           (*(char *)(*(longlong *)(lVar5 + 0x5d0) + 0xf0) == '\0')) {
LAB_1405fb02b:
          if ((byte)in_R10 != 1 || (*(byte *)(lVar5 + 0x5e8) & 0x20) != 0) {
            bVar17 = (byte)in_R10 | (*(byte *)(lVar5 + 0x5e8) & 0x40) >> 6;
            in_R10 = (uint *)CONCAT71((int7)((ulonglong)in_R10 >> 8),bVar17);
            if ((bVar17 == 0) && (*(longlong *)(lVar5 + 0x5a8) != 0)) {
              local_b0 = lVar13;
              uVar4 = FUN_1447210f0();
              iVar3 = FUN_1412d1158(lVar5 + 0x5b0,local_a8,uVar4);
              lVar13 = local_b0;
              if (iVar3 == 0) goto LAB_1405fb044;
            }
            goto LAB_1405fb092;
          }
LAB_1405fb044:
          lVar13 = *(longlong *)(param_1 + 0x70);
          uVar7 = 0;
        }
        else {
          if (DAT_14caf64b8 == 0) {
            local_88 = FUN_141030f22;
            local_c0 = FUN_14081d0ea;
            local_c8 = FUN_142b4754c;
            local_d0 = &local_88;
            local_d8 = &LAB_147c45ce0;
            local_e0 = &LAB_1463f1ff4;
            local_e8 = &DAT_149e063b2;
            local_f0 = 0x4000000000;
            local_f8 = 0x10000004;
            local_100 = 8;
            local_108 = 0x428;
            local_b4 = (uint)in_R10;
            local_b0 = lVar13;
            FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
            in_R10 = (uint *)(ulonglong)local_b4;
            lVar13 = local_b0;
          }
          if ((*(int *)(local_a8[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(local_a8[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
              DAT_14caf64b8 + 0x30)) goto LAB_1405fb02b;
          pcVar2 = *(code **)(*local_a8 + 0x5e8);
          uVar9 = (uint)in_R10;
          if (pcVar2 == FUN_140972dde) {
            if (local_a8[0x76] == 0) {
              pcVar2 = *(code **)(*local_a8 + 0x5f8);
              if (pcVar2 == FUN_144784df4) {
                if (*(code **)(*local_a0 + 0x18) == (code *)&LAB_144904684) {
                  if (((*(int *)((longlong)local_a8 + 0x75b4) == 0) ||
                      (uVar9 = *(uint *)(local_a8 + 0xeb6), (int)uVar9 < 0)) ||
                     ((DAT_14c9647dc <= (int)uVar9 ||
                      (((plVar16 = (longlong *)
                                   ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                        plVar16 == (longlong *)0x0 ||
                        ((int)plVar16[2] != *(int *)((longlong)local_a8 + 0x75b4))) ||
                       ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)))))) goto LAB_1405fb02b;
                  if ((*(uint *)(plVar16 + 1) & 0x10200000) == 0) {
                    lVar6 = *plVar16;
                  }
                  else {
                    lVar6 = 0;
                  }
                  lVar6 = lVar6 + 0x110;
                }
                else {
                  local_b4 = uVar9;
                  local_b0 = lVar13;
                  lVar6 = (**(code **)(*local_a0 + 0x18))(local_a0);
                  in_R10 = (uint *)(ulonglong)local_b4;
                  lVar13 = local_b0;
                }
                if (lVar6 == 0) goto LAB_1405fb02b;
                lVar6 = *(longlong *)(lVar6 + 0x20);
              }
              else {
                local_b4 = uVar9;
                local_b0 = lVar13;
                lVar6 = (*pcVar2)();
                in_R10 = (uint *)(ulonglong)local_b4;
                lVar13 = local_b0;
              }
              if (lVar6 == 0) goto LAB_1405fb02b;
              lVar6 = *(longlong *)(lVar6 + 0x3b0);
              goto LAB_1405fb206;
            }
          }
          else {
            local_b4 = uVar9;
            local_b0 = lVar13;
            lVar6 = (*pcVar2)();
            in_R10 = (uint *)(ulonglong)local_b4;
            lVar13 = local_b0;
LAB_1405fb206:
            if (lVar6 == 0) goto LAB_1405fb02b;
          }
          *(undefined1 *)(param_1 + 0xf1) = 1;
LAB_1405fb092:
          fVar23 = 0.0;
          if (0.0 <= *(float *)(lVar13 + 200)) {
            fVar23 = *(float *)(lVar13 + 200);
          }
          fVar24 = 0.1;
          if (0.1 <= *(float *)(lVar13 + 0xcc)) {
            fVar24 = *(float *)(lVar13 + 0xcc);
          }
          fVar25 = *(float *)(param_1 + 0xdc);
          if (fVar23 <= *(float *)(param_1 + 0xdc)) {
            fVar25 = fVar23;
          }
          *(float *)(param_1 + 0xdc) = fVar25;
          fVar23 = *(float *)(param_1 + 0xe0);
          if (fVar24 <= *(float *)(param_1 + 0xe0)) {
            fVar23 = fVar24;
          }
          *(float *)(param_1 + 0xe0) = fVar23;
          fVar23 = (1.0 / fVar24) * *(float *)(*(longlong *)(param_1 + 0x70) + lVar20 * 0x28 + 0xc);
          if (fVar26 <= fVar23) {
            fVar26 = fVar23;
          }
          FUN_1403e0f44(local_98);
          lVar13 = *(longlong *)(param_1 + 0x70);
          *(undefined1 *)(param_1 + 0xc1) = *(undefined1 *)(lVar13 + 9 + lVar20 * 0x28);
          uVar7 = 1;
        }
        *(undefined1 *)(lVar13 + 8 + lVar20 * 0x28) = uVar7;
        iVar3 = *(int *)(param_1 + 0x98);
        puVar19 = local_90;
      }
      uVar14 = uVar14 & ~(uint)uVar22;
      puVar12 = *(uint **)(param_1 + 0x90);
      if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
        puVar12 = puVar19;
      }
      iVar8 = (int)uVar21;
      lVar20 = (longlong)iVar8;
      uVar9 = puVar12[lVar20] & uVar14;
      if (uVar9 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar8) {
          iVar11 = iVar8;
        }
        if (iVar10 <= iVar8) break;
        in_R10 = puVar12 + lVar20 + 1;
        lVar13 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar9 = in_R10[lVar13];
          if (uVar9 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar11 - lVar20 == lVar13) goto LAB_1405fb364;
        }
        uVar21 = (ulonglong)(iVar8 + (int)lVar13 + 1);
        uVar14 = 0xffffffff;
      }
      uVar22 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar22 * 2 + 1;
      lVar20 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar20 == 0; lVar20 = lVar20 + -1) {
        }
      }
      iVar8 = (iVar15 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar3);
  }
LAB_1405fb364:
  *(float *)(param_1 + 0xc4) = fVar26 * *(float *)(param_1 + 0xe0);
  if ((local_80 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fb3bc FUN_1405fb3bc body=2251 status=ok
// SIG undefined FUN_1405fb3bc(void)

void FUN_1405fb3bc(longlong param_1,float param_2,float param_3,char param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  byte *pbVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  bool bVar14;
  uint uVar15;
  ulonglong uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 extraout_var [12];
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  longlong local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_108;
  for (lVar9 = param_1; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x20)) {
    if ((*(uint *)(lVar9 + 8) & 0x30) != 0) goto LAB_1405fb611;
  }
  if (param_4 == '\0') {
    bVar14 = 10.0 < ABS(param_3 - *(float *)(param_1 + 0xb38));
  }
  else {
    bVar14 = true;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0xa80) = param_2;
  *(float *)(param_1 + 0xa84) = param_3;
  cVar7 = *(char *)(param_1 + 0xa7c);
  if (*(longlong *)(param_1 + 0x9f8) != 0) {
    if (cVar7 != '\x04') {
      FUN_1405fbff8(&local_a8,*(undefined8 *)(param_1 + 0xa10));
      FUN_1405fbc88(param_1,&local_a8);
      if (*(longlong *)(param_1 + 0xa28) != 0) {
        FUN_1405fbff8(&local_a8);
        FUN_1405fbc88(param_1,&local_a8,1.0 - *(float *)(param_1 + 0xa80));
      }
    }
    local_a8 = *(longlong *)(param_1 + 0xa20);
    if (local_a8 != 0) {
      local_a0 = 0.0;
      FUN_1405fbc88(param_1);
    }
    local_a8 = *(longlong *)(param_1 + 0xa30);
    if (local_a8 != 0) {
      local_a0 = 0.0;
      FUN_1405fbc88(param_1,&local_a8,1.0 - *(float *)(param_1 + 0xa80));
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x1c8);
  dVar2 = *(double *)(lVar9 + 0x1c8);
  dVar3 = *(double *)(lVar9 + 0x1d0);
  uVar16 = -(ulonglong)(0.0 < *(double *)(lVar9 + 0x1d8));
  local_90 = ~uVar16 & 0x3ff0000000000000 | (ulonglong)*(double *)(lVar9 + 0x1d8) & uVar16;
  local_a8 = param_1;
  local_a0 = dVar2;
  local_98 = dVar3;
  if (bVar14) {
    if (((*(byte *)(param_1 + 0xb2a) & 8) == 0) ||
       (plVar13 = *(longlong **)(param_1 + 0x980), plVar13 == (longlong *)0x0)) {
LAB_1405fbc3d:
      FUN_143d917a0(param_1);
    }
    else {
      iVar8 = (int)plVar13[1];
      do {
        if (iVar8 == 0) goto LAB_1405fbc3d;
        LOCK();
        iVar6 = (int)plVar13[1];
        bVar14 = iVar8 == iVar6;
        if (bVar14) {
          *(int *)(plVar13 + 1) = iVar8 + 1;
          iVar6 = iVar8;
        }
        iVar8 = iVar6;
        UNLOCK();
      } while (!bVar14);
      lVar9 = *(longlong *)(param_1 + 0x978);
      if (lVar9 == 0) {
        FUN_143d917a0(param_1);
      }
      else {
        local_88 = param_1;
        FUN_1405fe01c(lVar9 + 0xf8);
        iVar8 = *(int *)(lVar9 + 0x100);
        if (0 < iVar8 != (*(char *)(lVar9 + 299) != '\0')) {
          pbVar4 = *(byte **)(lVar9 + 0x140);
          if ((pbVar4 == (byte *)0x0) || ((*pbVar4 & 1) == 0)) {
            *(bool *)(lVar9 + 299) = 0 < iVar8;
          }
          else {
            uVar10 = *(undefined8 *)(pbVar4 + 0x28);
            FUN_1402eb48e(uVar10,lVar9 + 0x120);
            *(bool *)(lVar9 + 299) = 0 < iVar8;
            FUN_1402eb97e(uVar10);
            if (*(char *)(lVar9 + 299) == '\0') {
              *(undefined4 *)(*(longlong *)(lVar9 + 0x140) + 0x24) = 0xbf800000;
            }
          }
        }
      }
      LOCK();
      plVar5 = plVar13 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
  }
  if (cVar7 == '\x04') goto LAB_1405fb5eb;
  if ((*(longlong **)(param_1 + 0xa38) != (longlong *)0x0) &&
     (**(longlong **)(param_1 + 0xa38) != -1)) {
    lVar9 = FUN_140e40dfb();
    fVar17 = *(float *)(param_1 + 0xa78);
    if (0.0 < fVar17) {
      uVar10 = *(undefined8 *)(param_1 + 0xa38);
      if (fVar17 < 0.0) {
        fVar17 = sqrtf(fVar17);
        uVar18 = extraout_var._0_4_;
      }
      else {
        uVar18 = 0;
        fVar17 = SQRT(fVar17);
      }
      FUN_147f7c9aa(uVar10,CONCAT44(uVar18,(fVar17 / 3.1415927) * 200.0));
    }
    lVar11 = *(longlong *)(lVar9 + 0xc0);
    if (lVar11 == 0) {
      uVar10 = FUN_1407f787c();
      lVar11 = FUN_14477b664(uVar10);
      *(longlong *)(lVar9 + 0xc0) = lVar11;
    }
    plVar13 = (longlong *)(lVar9 + 0xb8);
    if (*(longlong *)(lVar9 + 200) == 0) {
      if ((lVar11 != 0) && (*plVar13 != 0)) {
        plVar5 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
          *(undefined8 *)(lVar9 + 200) = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar11 = FUN_144aff482(uVar10,plVar13);
          *(longlong *)(lVar9 + 200) = lVar11;
          if (lVar11 != 0) {
            lVar11 = *(longlong *)(lVar9 + 0xc0);
            goto LAB_1405fb9be;
          }
        }
      }
    }
    else {
LAB_1405fb9be:
      uVar10 = *(undefined8 *)(param_1 + 0xa38);
      if (lVar11 == 0) {
        uVar12 = FUN_1407f787c();
        lVar11 = FUN_14477b664(uVar12);
        *(longlong *)(lVar9 + 0xc0) = lVar11;
        if (((*(longlong *)(lVar9 + 200) == 0) && (lVar11 != 0)) && (*plVar13 != 0)) {
          plVar5 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
            uVar12 = FUN_144aff482(uVar12,plVar13);
          }
          *(undefined8 *)(lVar9 + 200) = uVar12;
        }
      }
      local_e8 = 0;
      FUN_1447997cc(uVar10);
    }
    lVar11 = *(longlong *)(lVar9 + 0xd8);
    if (lVar11 == 0) {
      uVar10 = FUN_1407f787c();
      lVar11 = FUN_14477b664(uVar10);
      *(longlong *)(lVar9 + 0xd8) = lVar11;
    }
    plVar13 = (longlong *)(lVar9 + 0xd0);
    if (*(longlong *)(lVar9 + 0xe0) == 0) {
      if ((lVar11 != 0) && (*plVar13 != 0)) {
        plVar5 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar5 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
          *(undefined8 *)(lVar9 + 0xe0) = 0;
        }
        else {
          uVar10 = (**(code **)(*plVar5 + 0x110))(plVar5);
          lVar11 = FUN_144aff482(uVar10);
          *(longlong *)(lVar9 + 0xe0) = lVar11;
          if (lVar11 != 0) {
            lVar11 = *(longlong *)(lVar9 + 0xd8);
            goto LAB_1405fba2b;
          }
        }
      }
    }
    else {
LAB_1405fba2b:
      uVar10 = *(undefined8 *)(param_1 + 0xa38);
      if (lVar11 == 0) {
        uVar12 = FUN_1407f787c();
        lVar11 = FUN_14477b664(uVar12);
        *(longlong *)(lVar9 + 0xd8) = lVar11;
        if (((*(longlong *)(lVar9 + 0xe0) == 0) && (lVar11 != 0)) && (*plVar13 != 0)) {
          plVar5 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar5 == (longlong *)0x0) ||
             (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
            uVar12 = 0;
          }
          else {
            uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
            uVar12 = FUN_144aff482(uVar12,plVar13);
          }
          *(undefined8 *)(lVar9 + 0xe0) = uVar12;
        }
      }
      local_e8 = 0;
      FUN_1447997cc(uVar10);
    }
  }
  if (*(longlong *)(param_1 + 0xa10) == 0) {
LAB_1405fb760:
    plVar13 = (longlong *)0x0;
LAB_1405fb762:
    if ((*(byte *)(plVar13 + 0x3f) & 0x10) != 0) {
      uVar15 = -(uint)(0.0 < *(float *)(param_1 + 0xa58));
      fVar17 = (float)(~uVar15 & 0x3f800000 | (uint)(param_3 / *(float *)(param_1 + 0xa58)) & uVar15
                      );
      lVar9 = *(longlong *)(param_1 + 0x9f8);
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0xb0) == '\x01')) {
        fVar17 = fVar17 * *(float *)(lVar9 + 0xb4);
      }
      local_b0 = (double)fVar17;
      local_b8 = dVar3 * local_b0;
      local_c0 = dVar2 * local_b0;
      (**(code **)(*plVar13 + 0x478))(plVar13,&local_c0);
    }
  }
  else {
    lVar9 = FUN_1405fc15c();
    plVar13 = *(longlong **)(param_1 + 0xa10);
    if (plVar13 == (longlong *)0x0) goto LAB_1405fb760;
    if (((lVar9 == 0) || (lVar11 = plVar13[2], lVar11 == 0)) ||
       ((*(int *)(lVar11 + 0x38) < *(int *)(lVar9 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
         lVar9 + 0x30)))) goto LAB_1405fb762;
    FUN_1405fca90(&local_a8);
  }
  if (*(longlong *)(param_1 + 0xa28) != 0) {
    lVar9 = FUN_1405fc15c();
    plVar13 = *(longlong **)(param_1 + 0xa28);
    if ((((plVar13 == (longlong *)0x0) || (lVar9 == 0)) || (lVar11 = plVar13[2], lVar11 == 0)) ||
       ((*(int *)(lVar11 + 0x38) < *(int *)(lVar9 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
         lVar9 + 0x30)))) {
      if ((*(byte *)(plVar13 + 0x3f) & 0x10) != 0) {
        uVar15 = -(uint)(0.0 < *(float *)(param_1 + 0xa58));
        fVar17 = (float)(~uVar15 & 0x3f800000 |
                        (uint)(param_3 / *(float *)(param_1 + 0xa58)) & uVar15);
        lVar9 = *(longlong *)(param_1 + 0x9f8);
        if ((lVar9 != 0) && (*(char *)(lVar9 + 0xb0) == '\x01')) {
          fVar17 = fVar17 * *(float *)(lVar9 + 0xb4);
        }
        local_c8 = (double)fVar17;
        local_d0 = dVar3 * local_c8;
        local_d8 = dVar2 * local_c8;
        (**(code **)(*plVar13 + 0x478))(plVar13,&local_d8);
      }
    }
    else {
      FUN_1405fca90(&local_a8);
    }
  }
LAB_1405fb5eb:
  if (*(longlong *)(param_1 + 0xa20) != 0) {
    FUN_1405fca90(&local_a8);
  }
  if (*(longlong *)(param_1 + 0xa30) != 0) {
    FUN_1405fca90(&local_a8);
  }
LAB_1405fb611:
  if ((local_80 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fbc88 FUN_1405fbc88 body=219 status=ok
// SIG undefined FUN_1405fbc88(void)

void FUN_1405fbc88(undefined8 param_1,undefined8 param_2,float param_3)

{
  undefined1 auStack_68 [36];
  float local_44;
  code *local_40;
  float *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb81a18) {
    FUN_144b3d300(&DAT_14cb81a18);
    if (DAT_14cb81a18 == -1) {
      FUN_1446f470e(&DAT_14cb81a10,L"Opacity",1);
      _Init_thread_footer(&DAT_14cb81a18);
    }
  }
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  local_38 = &local_44;
  local_40 = FUN_143d999f2;
  local_44 = param_3;
  FUN_1405fbd64(param_1,param_2);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fbd64 FUN_1405fbd64 body=161 status=ok
// SIG undefined FUN_1405fbd64(void)

void FUN_1405fbd64(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong *)*param_2 == (longlong *)0x0) {
    iVar1 = (**(code **)(*(longlong *)param_2[1] + 0x7b0))();
  }
  else {
    iVar1 = (**(code **)(*(longlong *)*param_2 + 0x5f8))();
  }
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      lVar2 = FUN_1405fbe06(param_1,param_2,iVar3,0);
      if (lVar2 != 0) {
        local_40 = lVar2;
        (*(code *)*param_3)(param_3[1],&local_40);
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fbe06 FUN_1405fbe06 body=497 status=ok
// SIG undefined FUN_1405fbe06(void)

longlong FUN_1405fbe06(undefined8 param_1,longlong *param_2,undefined4 param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    lVar2 = (**(code **)(*(longlong *)param_2[1] + 0x610))((longlong *)param_2[1],param_3);
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 0x600))(plVar1,param_3);
  }
  if (param_4 == 0) {
    param_4 = lVar2;
  }
  if (lVar2 == 0) {
LAB_1405fbeae:
    lVar3 = FUN_14090ceee(param_4,param_1,0);
    if (lVar3 == lVar2) goto LAB_1405fbe85;
  }
  else {
    if (DAT_14caec470 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1417df956;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463eaa20;
      local_58 = &LAB_147bbd9ea;
      local_60 = FUN_1401cf6d7;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x330;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14caec470 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) != DAT_14caec470 + 0x30)) goto LAB_1405fbeae;
    lVar3 = lVar2;
    if ((param_4 == lVar2) || (*(longlong *)(lVar2 + 0x110) == param_4)) goto LAB_1405fbe85;
    FUN_147bbdd9e(lVar2,param_4);
    FUN_1417e0924(lVar2);
    plVar1 = (longlong *)*param_2;
    if (plVar1 == (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x638))((longlong *)param_2[1],param_3,0);
    }
    else {
      (**(code **)(*plVar1 + 0x608))(plVar1,param_3,0);
    }
  }
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0) {
    (**(code **)(*(longlong *)param_2[1] + 0x638))((longlong *)param_2[1],param_3,lVar3);
  }
  else {
    (**(code **)(*plVar1 + 0x608))(plVar1,param_3,lVar3);
  }
LAB_1405fbe85:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fbff8 FUN_1405fbff8 body=354 status=ok
// SIG undefined FUN_1405fbff8(void)

longlong * FUN_1405fbff8(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == 0) {
    *param_1 = 0;
  }
  else {
    lVar1 = FUN_1405fc15c();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (lVar2 = param_2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
       != lVar1 + 0x30)) {
      lVar2 = 0;
    }
    *param_1 = lVar2;
    if (DAT_14cac6e60 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b47bc4;
      local_48 = &LAB_1478989f1;
      local_50 = &LAB_146391124;
      local_58 = L"Engine";
      local_60 = 0x10000000000;
      local_68 = 0x10000005;
      local_70 = 0x10;
      local_78 = 0x620;
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) == DAT_14cac6e60 + 0x30)) goto LAB_1405fc079;
  }
  param_2 = 0;
LAB_1405fc079:
  param_1[1] = param_2;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fc15c FUN_1405fc15c body=228 status=ok
// SIG undefined FUN_1405fc15c(void)

longlong FUN_1405fc15c(void)

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
  if (DAT_14cad1110 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_1479db955;
    local_40 = FUN_1417bce32;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x310;
    FUN_14081cfa3(L"/Script/Engine",L"DecalComponent",&DAT_14cad1110,FUN_1463b6ea8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad1110;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fc242 FUN_1405fc242 body=1902 status=ok
// SIG undefined FUN_1405fc242(void)

void FUN_1405fc242(undefined8 *param_1,double *param_2,longlong param_3)

{
  code *pcVar1;
  ulonglong uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  code cVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong *plVar22;
  bool bVar23;
  float fVar24;
  float extraout_XMM0_Da;
  double dVar25;
  double dVar26;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  undefined4 local_128;
  int local_124;
  uint *local_120;
  uint local_114;
  int *local_110;
  undefined8 *local_108;
  uint *local_100;
  ulonglong local_f8;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  double local_e0;
  undefined8 uStack_d8;
  int local_cc;
  code *local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  int local_94;
  undefined1 local_90 [8];
  undefined1 *local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar4 = (longlong *)FUN_140717ab6(*param_1);
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cac6e60 == 0) {
      local_140 = &local_c8;
      local_c8 = FUN_144a7958c;
      local_130 = FUN_14081d0ea;
      local_138 = FUN_142b47bc4;
      local_148 = &LAB_1478989f1;
      local_150 = &LAB_146391124;
      local_158 = L"Engine";
      local_160 = 0x10000000000;
      local_168 = 0x10000005;
      local_170 = 0x10;
      local_178 = CONCAT44(local_178._4_4_,0x620);
      FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    }
    if (((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
         DAT_14cac6e60 + 0x30)) && ((longlong)*(int *)(param_1 + 0xd) != 0)) {
      plVar22 = (longlong *)param_1[0xc];
      lVar5 = (longlong)*(int *)(param_1 + 0xd) * 0x68;
      do {
        if ((longlong *)*plVar22 == plVar4) {
          if ((((plVar22 != (longlong *)0x0) &&
               ((iVar18 = (int)plVar22[1], iVar18 != -1 ||
                (iVar18 = *(int *)(param_1 + 0xb), iVar18 != -1)))) &&
              (plVar6 = (longlong *)FUN_1402179b4((longlong)iVar18 * 0x80 + param_1[1]),
              plVar6 != (longlong *)0x0)) &&
             (fVar24 = (float)(**(code **)(*plVar6 + 0x18))(plVar6,*param_1), fVar24 <= 0.0001)) {
            uVar21 = 0;
            local_a8 = 0;
            local_a0 = 0;
            local_c8 = (code *)0x0;
            uStack_c0 = 0;
            local_9c = 0xffffffff00000080;
            local_94 = 0;
            local_88 = (undefined1 *)0x0;
            local_80 = 0;
            puVar19 = (uint *)(plVar22 + 4);
            iVar18 = (int)plVar22[7];
            uVar20 = 1;
            iVar17 = 0;
            iVar9 = 0;
            local_120 = puVar19;
            if (iVar18 == 0) goto LAB_1405fc448;
            puVar13 = (uint *)plVar22[6];
            if ((uint *)plVar22[6] == (uint *)0x0) {
              puVar13 = puVar19;
            }
            uVar15 = *puVar13;
            if (uVar15 != 0) {
              uVar21 = 0;
              goto LAB_1405fc41f;
            }
            iVar17 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar17 = iVar18 + -1;
            }
            uVar21 = 0;
            uVar20 = (ulonglong)(uint)(iVar17 >> 5);
            if (iVar17 >> 5 < 1) {
              uVar20 = 0;
            }
            iVar17 = 0;
            goto LAB_1405fc406;
          }
          break;
        }
        plVar22 = plVar22 + 0xd;
        lVar5 = lVar5 + -0x68;
      } while (lVar5 != 0);
    }
  }
  goto LAB_1405fc2bb;
  while( true ) {
    iVar17 = iVar17 + 0x20;
    uVar15 = puVar13[uVar21 + 1];
    uVar21 = uVar21 + 1;
    if (uVar15 != 0) break;
LAB_1405fc406:
    if (uVar20 == uVar21) goto LAB_1405fc80d;
  }
LAB_1405fc41f:
  uVar20 = (ulonglong)(-uVar15 & uVar15);
  uVar2 = uVar20 * 2 + 1;
  lVar5 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  iVar9 = (iVar17 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
  if (iVar18 <= iVar9) {
    iVar9 = iVar18;
  }
LAB_1405fc448:
  if (iVar9 < iVar18) {
    local_108 = (undefined8 *)(param_3 + 0x28);
    local_110 = (int *)(param_3 + 0x10);
    uVar15 = 0xffffffff;
    do {
      uVar10 = *(uint *)(plVar22[2] + 8 + (longlong)iVar9 * 0x14);
      local_124 = iVar17;
      local_f8 = uVar21;
      if ((longlong)(int)uVar10 != -1) {
        if ((int)uStack_c0 != local_94) {
          puVar7 = local_88;
          if (local_88 == (undefined1 *)0x0) {
            puVar7 = local_90;
          }
          iVar18 = *(int *)(puVar7 + (ulonglong)(local_80 - 1U & uVar10) * 4);
          while (iVar18 != -1) {
            pcVar1 = local_c8 + (longlong)iVar18 * 0x10;
            if (*(uint *)(local_c8 + (longlong)iVar18 * 0x10) == uVar10) {
              if ((pcVar1 != (code *)0x0) && (pcVar1 + 4 != (code *)0x0)) {
                cVar14 = pcVar1[4];
                goto LAB_1405fc6a3;
              }
              break;
            }
            iVar18 = *(int *)(pcVar1 + 8);
          }
        }
        local_114 = uVar15;
        plVar6 = (longlong *)FUN_1402179b4((longlong)(int)uVar10 * 0x80 + param_1[1]);
        if (plVar6 == (longlong *)0x0) {
          local_128 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar6 + 0x18))(plVar6,*param_1);
          local_128 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),0.0001 < extraout_XMM0_Da);
        }
        FUN_1409e7252(&local_c8,&local_f0);
        local_100 = (uint *)CONCAT44(iStack_e4,iStack_e8);
        *local_100 = uVar10;
        *(undefined1 *)(local_100 + 1) = 0;
        local_100[2] = 0xffffffff;
        local_cc = local_f0;
        local_178 = 0;
        cVar3 = FUN_1409e71ba(&local_c8,uVar10,local_100,&local_cc);
        if (cVar3 == '\0') {
          uVar15 = (int)uStack_c0 - local_94;
          iVar18 = 1;
          if (3 < uVar15) {
            uVar21 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
            lVar5 = 0x3f;
            if (uVar21 != 0) {
              for (; uVar21 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar18 = 1 << ((byte)lVar5 & 0x1f);
          }
          if (((int)uVar15 < 1) || (iVar18 <= local_80)) {
            uVar10 = local_80 - 1U & uVar10;
            local_100[3] = uVar10;
            puVar7 = local_88;
            if (local_88 == (undefined1 *)0x0) {
              puVar7 = local_90;
            }
            local_100[2] = *(uint *)(puVar7 + ((longlong)local_80 - 1U & (longlong)(int)uVar10) * 4)
            ;
            puVar7 = local_88;
            if (local_88 == (undefined1 *)0x0) {
              puVar7 = local_90;
            }
            *(int *)(puVar7 + ((longlong)local_80 - 1U & (longlong)(int)uVar10) * 4) = local_cc;
          }
          else {
            local_80 = iVar18;
            FUN_145cff422(&local_c8);
          }
        }
        cVar14 = SUB41(local_128,0);
        local_c8[(longlong)local_cc * 0x10 + 4] = cVar14;
        puVar19 = local_120;
        uVar15 = local_114;
LAB_1405fc6a3:
        if (cVar14 != (code)0x0) {
          uVar8 = *(undefined8 *)(plVar22[2] + (longlong)iVar9 * 0x14);
          (**(code **)(*plVar4 + 0x4b0))(plVar4,&local_f0,uVar8);
          dVar25 = (double)CONCAT44(iStack_e4,iStack_e8) - param_2[1];
          dVar26 = (double)CONCAT44(iStack_ec,local_f0) - *param_2;
          puVar19 = local_120;
          if ((float)((local_e0 - param_2[2]) * (local_e0 - param_2[2]) +
                     dVar26 * dVar26 + dVar25 * dVar25) < 3.4028235e+38) {
            *(undefined8 *)(param_3 + 0xf0) = uVar8;
            local_108[2] = local_e0;
            *local_108 = CONCAT44(iStack_ec,local_f0);
            local_108[1] = CONCAT44(iStack_e4,iStack_e8);
            *(double *)(local_110 + 4) = local_e0;
            *local_110 = local_f0;
            local_110[1] = iStack_ec;
            local_110[2] = iStack_e8;
            local_110[3] = iStack_e4;
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar20;
      puVar13 = (uint *)plVar22[6];
      if ((uint *)plVar22[6] == (uint *)0x0) {
        puVar13 = puVar19;
      }
      iVar18 = (int)plVar22[7];
      iVar9 = (int)local_f8;
      lVar5 = (longlong)iVar9;
      uVar10 = puVar13[lVar5] & uVar15;
      uVar21 = local_f8;
      iVar17 = local_124;
      if (uVar10 == 0) {
        iVar11 = iVar18 + 0x1e;
        if (-1 < iVar18 + -1) {
          iVar11 = iVar18 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar11 <= iVar9) break;
        lVar16 = 0;
        while( true ) {
          iVar17 = iVar17 + 0x20;
          uVar10 = puVar13[lVar5 + lVar16 + 1];
          if (uVar10 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar5 == lVar16) goto LAB_1405fc80d;
        }
        uVar15 = 0xffffffff;
        uVar21 = (ulonglong)(iVar9 + (int)lVar16 + 1);
      }
      uVar20 = (ulonglong)(-uVar10 & uVar10);
      uVar2 = uVar20 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar9 = (iVar17 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar18);
  }
LAB_1405fc80d:
  if (*(longlong *)(param_3 + 0xf0) != 0) {
    uVar15 = *(uint *)((longlong)plVar4 + 0xc);
    *(uint *)(param_3 + 0xd8) = uVar15;
    if ((int)uVar15 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar18 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar18 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar18;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar18 = *(int *)(lVar5 + 0x10);
      bVar23 = iVar18 == 0;
      if (bVar23) {
        *(int *)(lVar5 + 0x10) = iVar17;
        iVar18 = 0;
      }
      UNLOCK();
      if (bVar23) {
        iVar18 = iVar17;
      }
    }
    *(int *)(param_3 + 0xdc) = iVar18;
    FUN_140871de8(&local_f0,*param_1);
    *(int *)(param_3 + 0xb8) = local_f0;
    *(int *)(param_3 + 0xbc) = iStack_ec;
    *(int *)(param_3 + 0xc0) = iStack_e8;
    *(int *)(param_3 + 0xc4) = iStack_e4;
    *(double *)(param_3 + 200) = local_e0;
    *(undefined8 *)(param_3 + 0xd0) = uStack_d8;
  }
  local_80 = 0;
  if (local_88 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1456c3d4c(&local_c8);
LAB_1405fc2bb:
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405fc9b2 FUN_1405fc9b2 body=222 status=ok
// SIG undefined FUN_1405fc9b2(void)

void FUN_1405fc9b2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  lVar1 = (longlong)param_2 * 0x108;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar2 + 0x104 + lVar1);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(lVar2 + (longlong)iVar3 * 0x108 + 0x100);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar2 + lVar1 + 0x100);
  lVar1 = *param_1 + lVar1;
  if (*(longlong *)(lVar1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(lVar1 + 0xc0) = 0;
  if (*(longlong *)(lVar1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_140fa7444(lVar1 + 0x78);
  if (*(longlong *)(lVar1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1405ff63c(param_1,param_2);
  return;
}



// FUNCTION 1405fca90 FUN_1405fca90 body=1341 status=ok
// SIG undefined FUN_1405fca90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1405fca90(longlong *param_1,longlong param_2)

{
  double dVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double _X;
  double _X_00;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double _X_01;
  undefined1 auStack_168 [32];
  ulonglong local_148;
  undefined1 local_140;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  double dStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = *param_1;
  if (*(char *)(lVar4 + 0xa70) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_168);
  }
  dVar12 = *(double *)(lVar4 + 0xa60);
  dVar11 = *(double *)(lVar4 + 0xa68);
  dVar1 = (double)param_1[3];
  auVar13 = *(undefined1 (*) [16])(param_2 + 0x1b0);
  dVar7 = auVar13._0_8_;
  dVar8 = auVar13._8_8_;
  dVar6 = *(double *)(param_2 + 0x1c0);
  pdVar5 = *(double **)(param_2 + 0x230);
  if (pdVar5 == (double *)0x0) {
    pdVar5 = (double *)FUN_14001cc68(0x40,0x10);
    dVar9 = DAT_14c8463d8;
    *pdVar5 = DAT_14c8463d0;
    pdVar5[1] = dVar9;
    dVar9 = DAT_14c8463e8;
    pdVar5[2] = DAT_14c8463e0;
    pdVar5[3] = dVar9;
    dVar9 = DAT_14c846500;
    pdVar5[4] = DAT_14c8464f8;
    pdVar5[5] = dVar9;
    pdVar5[6] = DAT_14c846508;
    *(double **)(param_2 + 0x230) = pdVar5;
  }
  auVar17 = _DAT_1499387d0;
  if ((((pdVar5[4] != dVar7) || (NAN(pdVar5[4]) || NAN(dVar7))) || (pdVar5[5] != dVar8)) ||
     (NAN(pdVar5[5]) || NAN(dVar8))) {
LAB_1405fcba3:
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar6;
    dVar9 = (double)DAT_1499387d0;
    dVar10 = DAT_1499387d0._8_8_;
    auVar13 = divpd(auVar13,_DAT_1499387d0);
    auVar16 = divpd(auVar19,_DAT_1499387d0);
    auVar13 = roundpd(auVar13,auVar13,3);
    auVar16 = roundpd(auVar16,auVar16,3);
    auVar25._0_8_ = dVar7 - auVar13._0_8_ * dVar9;
    auVar25._8_8_ = dVar8 - auVar13._8_8_ * dVar10;
    auVar20._0_8_ = dVar6 - auVar16._0_8_ * dVar9;
    auVar20._8_8_ = 0.0 - auVar16._8_8_ * dVar10;
    auVar23._0_8_ = auVar25._0_8_ + dVar9;
    auVar23._8_8_ = auVar25._8_8_ + dVar10;
    auVar18._0_8_ = auVar20._0_8_ + dVar9;
    auVar18._8_8_ = auVar20._8_8_ + dVar10;
    auVar16._8_8_ = -(ulonglong)(0.0 <= auVar25._8_8_);
    auVar16._0_8_ = -(ulonglong)(0.0 <= auVar25._0_8_);
    auVar13 = blendvpd(auVar23,auVar25,auVar16);
    auVar24._8_8_ = -(ulonglong)(0.0 <= auVar20._8_8_);
    auVar24._0_8_ = -(ulonglong)(0.0 <= auVar20._0_8_);
    auVar16 = blendvpd(auVar18,auVar20,auVar24);
    auVar21._0_8_ = auVar13._0_8_ + -360.0;
    auVar21._8_8_ = auVar13._8_8_ + -360.0;
    auVar14._8_8_ = -(ulonglong)(180.0 < auVar13._8_8_);
    auVar14._0_8_ = -(ulonglong)(180.0 < auVar13._0_8_);
    auVar24 = blendvpd(auVar13,auVar21,auVar14);
    auVar15._8_8_ = -(ulonglong)(180.0 < auVar16._8_8_);
    auVar15._0_8_ = -(ulonglong)(180.0 < auVar16._0_8_);
    auVar13._8_8_ = auVar16._8_8_ + 0.0;
    auVar13._0_8_ = auVar16._0_8_ + -360.0;
    auVar13 = blendvpd(auVar16,auVar13,auVar15);
    *(undefined1 (*) [16])(pdVar5 + 4) = auVar24;
    dVar6 = auVar13._0_8_;
    pdVar5[6] = dVar6;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = dVar6;
    auVar13 = divpd(auVar24,auVar17);
    auVar17 = divpd(auVar26,auVar17);
    auVar13 = roundpd(auVar13,auVar13,3);
    auVar17 = roundpd(auVar17,auVar17,3);
    dVar22 = (auVar24._0_8_ - auVar13._0_8_ * dVar9) * 0.008726646259971648;
    _X = (auVar24._8_8_ - auVar13._8_8_ * dVar10) * 0.008726646259971648;
    _X_00 = (dVar6 - auVar17._0_8_ * dVar9) * 0.008726646259971648;
    _X_01 = (0.0 - auVar17._8_8_ * dVar10) * 0.008726646259971648;
    dVar6 = sin(dVar22);
    dVar7 = sin(_X);
    dVar8 = sin(_X_00);
    sin(_X_01);
    dVar9 = cos(dVar22);
    dVar10 = cos(_X);
    dVar22 = cos(_X_00);
    cos(_X_01);
    *pdVar5 = dVar6 * dVar7 * dVar22 - dVar9 * dVar10 * dVar8;
    pdVar5[1] = -(dVar6 * dVar10 * dVar22) - dVar9 * dVar7 * dVar8;
    pdVar5[2] = -(dVar10 * dVar6 * dVar8) + dVar7 * dVar9 * dVar22;
    pdVar5[3] = dVar7 * dVar6 * dVar8 + dVar10 * dVar9 * dVar22;
  }
  else if ((pdVar5[6] != dVar6) || (NAN(pdVar5[6]) || NAN(dVar6))) goto LAB_1405fcba3;
  local_f8 = *pdVar5;
  dStack_f0 = pdVar5[1];
  local_e8 = pdVar5[2];
  dStack_e0 = pdVar5[3];
  local_118 = 0;
  uStack_110 = 0;
  local_140 = 0;
  local_148 = 0;
  local_108 = (double)((float)dVar12 + -5.0) / dVar1;
  FUN_144927ad4(param_2,&local_118,&local_f8,0);
  local_130 = 0xc056800000000000;
  local_128 = 0;
  uStack_120 = 0;
  local_148 = local_148 & 0xffffffffffffff00;
  FUN_14020f75c(param_2,&local_130,0,0);
  dVar11 = ABS((double)(float)dVar11 * (double)param_1[3]);
  dVar12 = 1.0;
  if (1.0 <= dVar11) {
    dVar12 = dVar11;
  }
  *(double *)(param_2 + 0x2d0) = (dVar12 + 5.0) / 0.75;
  dVar11 = (double)*(float *)(lVar4 + 0xa84) * (double)param_1[2];
  *(double *)(param_2 + 0x2d8) = dVar11;
  dVar12 = (double)*(float *)(lVar4 + 0xa84) * (double)param_1[1];
  *(double *)(param_2 + 0x2e0) = dVar12;
  lVar2 = *(longlong *)(lVar4 + 0x9f8);
  if ((lVar2 != 0) && (*(char *)(lVar2 + 0xb0) == '\x01')) {
    *(double *)(param_2 + 0x2d8) = dVar11 * (double)*(float *)(lVar2 + 0xb4);
    *(double *)(param_2 + 0x2e0) = dVar12 * (double)*(float *)(*(longlong *)(lVar4 + 0x9f8) + 0xb4);
  }
  FUN_1449e3cec(param_2,0,1);
  if ((~*(byte *)(param_2 + 0x9c) & 3) != 0) goto LAB_1405fcef2;
  bVar3 = *(byte *)(param_2 + 0x9d);
  if ((bVar3 & 1) != 0) {
    if (*(longlong *)(param_2 + 0xb0) != 0) goto LAB_1405fcef2;
    lVar4 = FUN_1448abda6(param_2);
    if (lVar4 != 0) goto LAB_1405fcef2;
    bVar3 = *(byte *)(param_2 + 0x9d);
  }
  *(byte *)(param_2 + 0x9d) = bVar3 | 1;
  FUN_1401057d4(param_2);
  FUN_14010586c(&DAT_14cad0140,param_2);
LAB_1405fcef2:
  if ((local_d0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fd040 FUN_1405fd040 body=346 status=ok
// SIG undefined FUN_1405fd040(void)

undefined8 * FUN_1405fd040(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3f5f10;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  param_1[9] = 0;
  param_1[10] = 0x200000000;
  FUN_1405c5fa2();
  param_1[0xc] = &DAT_14cb769e8;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = &PTR_FUN_14b0394b0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  memset(param_1 + 0x14,0,0x100);
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d4) = 0;
  param_1[0x3b] = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  *(undefined1 *)((longlong)param_1 + 0x26c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x274) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(byte *)(param_1 + 0x4f) = *(byte *)(param_1 + 0x4f) & 0xc0 | 0xc;
  *(undefined1 *)((longlong)param_1 + 0x27a) = 0;
  param_1[0x57] = 0;
  *(undefined8 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x294) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2cd) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  return param_1;
}



// FUNCTION 1405fd19a FUN_1405fd19a body=430 status=ok
// SIG undefined FUN_1405fd19a(void)

void FUN_1405fd19a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 *param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined1 local_70;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((((param_1 != 0) && (param_2 != 0)) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) &&
     (FUN_1405fd34a(&local_50,lVar5), local_48 != (longlong *)0x0)) {
    iVar4 = (int)local_48[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_48[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_48 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_48;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    lVar5 = local_50;
    if (plVar6 != (longlong *)0x0) {
      if (local_50 != 0) {
        local_50 = param_1;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_1);
        }
        local_48 = param_5;
        if ((param_5 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(param_5);
        }
        local_60 = *param_4;
        local_58 = param_4[1];
        if (local_58 != 0) {
          LOCK();
          *(int *)(local_58 + 8) = *(int *)(local_58 + 8) + 1;
          UNLOCK();
        }
        local_78 = &local_60;
        local_70 = 0;
        FUN_1405fe3b6(lVar5,param_2,&local_50,param_3);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  plVar6 = (longlong *)param_4[1];
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1405fd34a FUN_1405fd34a body=310 status=ok
// SIG undefined FUN_1405fd34a(void)

longlong * FUN_1405fd34a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb76828;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fd482 FUN_1405fd482 body=182 status=ok
// SIG undefined FUN_1405fd482(void)

undefined4 FUN_1405fd482(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = 0xbf800000;
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    lVar1 = FUN_1447210f0();
    if ((lVar1 != 0) && ((*(byte *)(param_1 + 0x19) & 1) != 0)) {
      local_38 = *(longlong *)(param_1 + 0x148);
      uVar3 = 0;
      if (local_38 != 0) {
        if (*(longlong *)(lVar1 + 0x1f0) == 0) {
          puVar2 = (undefined8 *)(lVar1 + 0x458);
        }
        else {
          puVar2 = (undefined8 *)(*(longlong *)(lVar1 + 0x1f0) + 0xf0);
        }
        FUN_144a61814(*puVar2);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1405fd550 FUN_1405fd550 body=213 status=ok
// SIG undefined FUN_1405fd550(void)

void FUN_1405fd550(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar2 = *(longlong *)(param_1 + 0xd8);
  iVar1 = *(int *)(param_1 + 0xe0);
  lVar4 = (longlong)iVar1;
  if (lVar4 != 0) {
    lVar3 = 0;
    if (*param_2 != 0) {
      lVar3 = param_2[1];
    }
    lVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar5) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar2 + 8 + lVar5);
      }
      if ((lVar6 == lVar3) && (*(longlong *)(lVar2 + lVar5) == *param_2)) {
        return;
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar4 << 4 != lVar5);
  }
  *(uint *)(param_1 + 0xe0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xe4) < iVar1 + 1U) {
    FUN_1405ff358((longlong *)(param_1 + 0xd8),iVar1);
    lVar2 = *(longlong *)(param_1 + 0xd8);
  }
  lVar3 = *param_2;
  *(longlong *)(lVar2 + lVar4 * 0x10) = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(longlong *)(lVar2 + lVar4 * 0x10 + 8) = param_2[1];
  FUN_1405fa972(param_1);
  return;
}



// FUNCTION 1405fd626 FUN_1405fd626 body=869 status=ok
// SIG undefined FUN_1405fd626(void)

void FUN_1405fd626(longlong param_1)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  longlong lVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  int iVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  ulonglong *puVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_368 [32];
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [190];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_368;
  iVar13 = *(int *)(param_1 + 0x48);
  if (1 < (longlong)iVar13) {
    lVar5 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar5 = param_1;
    }
    memset(local_338,0,0x2f0);
    local_340 = lVar5 + (longlong)iVar13 * 8 + -8;
    local_348 = lVar5;
    fVar23 = logf((float)iVar13);
    local_338[0] = (int)(longlong)(fVar23 + fVar23);
    plVar3 = &local_348;
    do {
      puVar6 = (ulonglong *)*plVar3;
      puVar7 = (ulonglong *)plVar3[1];
      iVar13 = (int)plVar3[2];
      iVar8 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar6) >> 3);
      uVar18 = (ulonglong)(iVar8 + 1);
      puVar9 = puVar6;
      puVar11 = puVar7;
      if (iVar13 != 0) {
LAB_1405fd6cd:
        if (8 < (int)(uint)uVar18) {
          uVar17 = (uint)uVar18 >> 1;
          uVar18 = puVar9[uVar17];
          puVar9[uVar17] = *puVar9;
          *puVar9 = uVar18;
          puVar19 = puVar11 + 1;
          puVar4 = puVar9;
          do {
            puVar2 = puVar4 + 1;
            puVar12 = puVar4 + 1;
            do {
              puVar4 = puVar12;
              puVar21 = puVar2;
              if (puVar11 < puVar4) break;
              puVar2 = puVar21 + 1;
              puVar12 = puVar4 + 1;
            } while (*puVar4 <= *puVar9);
            puVar2 = puVar19 + -2;
            do {
              puVar12 = puVar19;
              puVar20 = puVar2;
              puVar19 = puVar12 + -1;
              if (puVar19 <= puVar9) break;
              puVar2 = puVar20 + -1;
            } while (*puVar9 <= *puVar19);
            if (puVar19 < puVar4) goto LAB_1405fd74d;
            uVar18 = *puVar4;
            *puVar4 = *puVar19;
            *puVar19 = uVar18;
          } while( true );
        }
        if (puVar9 < puVar11) {
          do {
            puVar6 = puVar9;
            if (puVar9 + 1 <= puVar11) {
              uVar18 = *puVar9;
              puVar7 = puVar9 + 1;
              do {
                if (uVar18 < *puVar7) {
                  puVar6 = puVar7;
                  uVar18 = *puVar7;
                }
                puVar7 = puVar7 + 1;
              } while (puVar7 <= puVar11);
            }
            uVar18 = *puVar6;
            *puVar6 = *puVar11;
            *puVar11 = uVar18;
            puVar11 = puVar11 + -1;
          } while (puVar9 < puVar11);
        }
        goto LAB_1405fd952;
      }
LAB_1405fd7e0:
      iVar13 = (int)uVar18;
      if (iVar13 != 0) {
        iVar8 = (iVar8 - (iVar8 + -1 >> 0x1f)) + -1 >> 1;
        iVar16 = iVar8;
joined_r0x0001405fd807:
        do {
          iVar15 = iVar8 * 2 + 1;
          if (iVar15 < iVar13) {
            iVar14 = iVar8 * 2 + 2;
            if ((iVar14 < iVar13) && (puVar9[iVar15] <= puVar9[iVar14])) {
              iVar15 = iVar14;
            }
            uVar10 = puVar9[iVar8];
            if (uVar10 < puVar9[iVar15]) {
              puVar9[iVar8] = puVar9[iVar15];
              puVar9[iVar15] = uVar10;
              iVar8 = iVar15;
              goto joined_r0x0001405fd807;
            }
          }
          bVar22 = iVar16 != 0;
          iVar8 = iVar16 + -1;
          iVar16 = iVar8;
        } while (bVar22);
        if (1 < iVar13) {
          uVar10 = *puVar9;
          *puVar9 = puVar9[uVar18 - 1];
          puVar9[uVar18 - 1] = uVar10;
          if (iVar13 != 2) {
            do {
              uVar10 = uVar18 - 1;
              iVar13 = 0;
              iVar16 = 1;
              iVar8 = 0;
              do {
                iVar13 = iVar13 + 2;
                iVar15 = iVar16;
                if (((longlong)iVar13 < (longlong)uVar10) && (puVar9[iVar16] <= puVar9[iVar13])) {
                  iVar15 = iVar13;
                }
                uVar1 = puVar9[iVar8];
                if (puVar9[iVar15] <= uVar1) break;
                puVar9[iVar8] = puVar9[iVar15];
                puVar9[iVar15] = uVar1;
                iVar13 = iVar15 * 2;
                iVar16 = iVar15 * 2 + 1;
                iVar8 = iVar15;
              } while ((longlong)iVar16 < (longlong)uVar10);
              uVar1 = *puVar9;
              *puVar9 = puVar9[uVar18 - 2];
              puVar9[uVar18 - 2] = uVar1;
              uVar18 = uVar10;
            } while (2 < uVar10);
          }
        }
      }
LAB_1405fd952:
      plVar3 = plVar3 + -3;
    } while (&local_348 <= plVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1405fd74d:
  uVar18 = *puVar9;
  *puVar9 = *puVar19;
  *puVar19 = uVar18;
  iVar13 = iVar13 + -1;
  puVar12 = puVar12 + -2;
  if ((longlong)puVar20 - (longlong)puVar6 < (longlong)puVar7 - (longlong)puVar21) {
    if (puVar4 < puVar11) {
      *plVar3 = (longlong)puVar4;
      plVar3[1] = (longlong)puVar11;
      *(int *)(plVar3 + 2) = iVar13;
      plVar3 = plVar3 + 3;
    }
    puVar6 = puVar9;
    puVar7 = puVar20;
    if (puVar19 <= puVar9 + 1) goto LAB_1405fd952;
  }
  else {
    if (puVar9 + 1 < puVar19) {
      *plVar3 = (longlong)puVar9;
      plVar3[1] = (longlong)puVar12;
      *(int *)(plVar3 + 2) = iVar13;
      plVar3 = plVar3 + 3;
    }
    puVar6 = puVar21;
    puVar9 = puVar4;
    puVar12 = puVar11;
    puVar7 = puVar11;
    if (puVar11 <= puVar4) goto LAB_1405fd952;
  }
  iVar8 = (int)((ulonglong)((longlong)puVar7 - (longlong)puVar6) >> 3);
  uVar18 = (ulonglong)(iVar8 + 1);
  puVar11 = puVar12;
  if (iVar13 == 0) goto LAB_1405fd7e0;
  goto LAB_1405fd6cd;
}


